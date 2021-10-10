/*
==============
Core_ReplaceAll_Copy
==============
*/

void __fastcall Core_ReplaceAll_Copy(char *dest, unsigned __int64 destSize, const char *src, const char *search, const char *format)
{
  ?Core_ReplaceAll_Copy@@YAXPEIAD_KPEIBD22@Z(dest, destSize, src, search, format);
}

/*
==============
Core_strcpy_truncate
==============
*/

bool __fastcall Core_strcpy_truncate(char *dest, unsigned __int64 destsize, const char *src)
{
  return ?Core_strcpy_truncate@@YA_NPEIAD_KPEIBD@Z(dest, destsize, src);
}

/*
==============
Core_strncpy
==============
*/

void __fastcall Core_strncpy(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  ?Core_strncpy@@YAXPEIAD_KPEIBD1@Z(dest, destsize, src, count);
}

/*
==============
I_strstr
==============
*/

const char *__fastcall I_strstr(const char *s0, const char *substr)
{
  return ?I_strstr@@YAPEBDPEBD0@Z(s0, substr);
}

/*
==============
Core_strcpy_truncate_or_fill_zero
==============
*/

bool __fastcall Core_strcpy_truncate_or_fill_zero(char *dest, unsigned __int64 destsize, const char *src)
{
  return ?Core_strcpy_truncate_or_fill_zero@@YA_NPEIAD_KPEIBD@Z(dest, destsize, src);
}

/*
==============
I_strncat
==============
*/

void __fastcall I_strncat(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  ?I_strncat@@YAXPEIAD_KPEIBD1@Z(dest, destsize, src, count);
}

/*
==============
I_strncat_truncate
==============
*/

bool __fastcall I_strncat_truncate(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  return ?I_strncat_truncate@@YA_NPEIAD_KPEIBD1@Z(dest, destsize, src, count);
}

/*
==============
I_strcat_truncate
==============
*/

bool __fastcall I_strcat_truncate(char *dest, unsigned __int64 destsize, const char *src)
{
  return ?I_strcat_truncate@@YA_NPEIAD_KPEIBD@Z(dest, destsize, src);
}

/*
==============
I_rstrstr
==============
*/

const char *__fastcall I_rstrstr(const char *s0, const char *substr)
{
  return ?I_rstrstr@@YAPEBDPEBD0@Z(s0, substr);
}

/*
==============
I_strlwr
==============
*/

char *__fastcall I_strlwr(char *s)
{
  return ?I_strlwr@@YAPEADPEAD@Z(s);
}

/*
==============
I_atoui
==============
*/

unsigned int __fastcall I_atoui(const char *str)
{
  return ?I_atoui@@YAIPEBD@Z(str);
}

/*
==============
Com_sprintf
==============
*/

int Com_sprintf(char *dest, unsigned __int64 size, const char *fmt, ...)
{
  return ?Com_sprintf@@YAHPEIAD_KPEIBDZZ(dest, size, fmt);
}

/*
==============
I_stricmpwild
==============
*/

int __fastcall I_stricmpwild(const char *wild, const char *s)
{
  return ?I_stricmpwild@@YAHPEBD0@Z(wild, s);
}

/*
==============
I_strcat
==============
*/

void __fastcall I_strcat(char *dest, unsigned __int64 destsize, const char *src)
{
  ?I_strcat@@YAXPEIAD_KPEIBD@Z(dest, destsize, src);
}

/*
==============
Com_vsprintf
==============
*/

int __fastcall Com_vsprintf(char *dest, unsigned __int64 size, const char *fmt, char *ap)
{
  return ?Com_vsprintf@@YAHPEIAD_KPEIBDPEAD@Z(dest, size, fmt, ap);
}

/*
==============
Com_vsprintf_truncate
==============
*/

int __fastcall Com_vsprintf_truncate(char *dest, unsigned __int64 size, unsigned __int64 length, const char *fmt, char *ap)
{
  return ?Com_vsprintf_truncate@@YAHPEIAD_K1PEIBDPEAD@Z(dest, size, length, fmt, ap);
}

/*
==============
I_stristr
==============
*/

const char *__fastcall I_stristr(const char *s0, const char *substr)
{
  return ?I_stristr@@YAPEBDPEBD0@Z(s0, substr);
}

/*
==============
I_rstrip
==============
*/

void __fastcall I_rstrip(char *s)
{
  ?I_rstrip@@YAXPEAD@Z(s);
}

/*
==============
I_strviewcmp
==============
*/

int __fastcall I_strviewcmp(const char *sv0, unsigned __int64 sv0len, const char *sv1, unsigned __int64 sv1len)
{
  return ?I_strviewcmp@@YAHPEBD_K01@Z(sv0, sv0len, sv1, sv1len);
}

/*
==============
I_strtok_r
==============
*/

char *__fastcall I_strtok_r(char *dest, const char *delim, char **saveptrctx)
{
  return ?I_strtok_r@@YAPEADPEADPEBDPEAPEAD@Z(dest, delim, saveptrctx);
}

/*
==============
Core_strncpy_and_fill_zero
==============
*/

void __fastcall Core_strncpy_and_fill_zero(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  ?Core_strncpy_and_fill_zero@@YAXPEIAD_KPEIBD1@Z(dest, destsize, src, count);
}

/*
==============
Core_strncpy_truncate_or_fill_zero
==============
*/

bool __fastcall Core_strncpy_truncate_or_fill_zero(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  return ?Core_strncpy_truncate_or_fill_zero@@YA_NPEIAD_KPEIBD1@Z(dest, destsize, src, count);
}

/*
==============
Core_strcpy_and_fill_zero
==============
*/

void __fastcall Core_strcpy_and_fill_zero(char *dest, unsigned __int64 destsize, const char *src)
{
  ?Core_strcpy_and_fill_zero@@YAXPEIAD_KPEIBD@Z(dest, destsize, src);
}

/*
==============
Core_strcpy
==============
*/

void __fastcall Core_strcpy(char *dest, unsigned __int64 destsize, const char *src)
{
  ?Core_strcpy@@YAXPEIAD_KPEIBD@Z(dest, destsize, src);
}

/*
==============
Core_strncpy_truncate
==============
*/

bool __fastcall Core_strncpy_truncate(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  return ?Core_strncpy_truncate@@YA_NPEIAD_KPEIBD1@Z(dest, destsize, src, count);
}

/*
==============
I_strupr
==============
*/

char *__fastcall I_strupr(char *s)
{
  return ?I_strupr@@YAPEADPEAD@Z(s);
}

/*
==============
Com_sprintf_truncate
==============
*/

int Com_sprintf_truncate(char *dest, unsigned __int64 size, unsigned __int64 length, const char *fmt, ...)
{
  return ?Com_sprintf_truncate@@YAHPEIAD_K1PEIBDZZ(dest, size, length, fmt);
}

/*
==============
I_strnstr
==============
*/

const char *__fastcall I_strnstr(const char *s0, const char *substr, unsigned __int64 n)
{
  return ?I_strnstr@@YAPEBDPEBD0_K@Z(s0, substr, n);
}

/*
==============
Com_sprintf_truncate
==============
*/

int Com_sprintf_truncate(char *dest, unsigned __int64 size, const char *fmt, ...)
{
  return ?Com_sprintf_truncate@@YAHPEIAD_KPEIBDZZ(dest, size, fmt);
}

/*
==============
I_strviewicmp
==============
*/

int __fastcall I_strviewicmp(const char *sv0, unsigned __int64 sv0len, const char *sv1, unsigned __int64 sv1len)
{
  return ?I_strviewicmp@@YAHPEBD_K01@Z(sv0, sv0len, sv1, sv1len);
}

/*
==============
Core_EndsWith
==============
*/

bool __fastcall Core_EndsWith(const char *str, const char *suffix)
{
  return ?Core_EndsWith@@YA_NPEBD0@Z(str, suffix);
}

/*
==============
Com_sprintf_truncate
==============
*/
int Com_sprintf_truncate(char *dest, unsigned __int64 size, const char *fmt, ...)
{
  va_list va; 

  va_start(va, fmt);
  return Com_vsprintf_truncate(dest, size, size, fmt, va);
}

/*
==============
Com_sprintf
==============
*/
__int64 Com_sprintf(char *dest, unsigned __int64 size, const char *fmt, ...)
{
  unsigned __int64 *v6; 
  int v7; 
  unsigned int v8; 
  va_list va; 

  va_start(va, fmt);
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 30, ASSERT_TYPE_SANITY, "( dest )", "%s", "dest") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 31, ASSERT_TYPE_SANITY, "( size > 0 )", "%s", "size > 0") )
    __debugbreak();
  if ( !fmt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 32, ASSERT_TYPE_SANITY, "( fmt )", "%s", "fmt") )
    __debugbreak();
  v6 = j___local_stdio_printf_options();
  v7 = __stdio_common_vsnprintf_s(*v6, dest, size, 0xFFFFFFFFFFFFFFFFui64, fmt, NULL, va);
  dest[size - 1] = 0;
  v8 = v7;
  if ( v7 < 0 )
    v8 = -1;
  if ( v8 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 39, ASSERT_TYPE_SANITY, byte_14468AC15, "Buffer size %zu is less than number of generated characters. Truncated string = '%s' from format string = '%s'", size, dest, fmt) )
    __debugbreak();
  return v8;
}

/*
==============
Com_sprintf_truncate
==============
*/
int Com_sprintf_truncate(char *dest, unsigned __int64 size, unsigned __int64 length, const char *fmt, ...)
{
  unsigned __int64 *v8; 
  int result; 
  va_list va; 

  va_start(va, fmt);
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 58, ASSERT_TYPE_SANITY, "( dest )", "%s", "dest") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 59, ASSERT_TYPE_SANITY, "( size > 0 )", "%s", "size > 0") )
    __debugbreak();
  if ( !fmt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 60, ASSERT_TYPE_SANITY, "( fmt )", "%s", "fmt") )
    __debugbreak();
  if ( size < length )
    length = size;
  v8 = j___local_stdio_printf_options();
  result = __stdio_common_vsnprintf_s(*v8, dest, length, 0xFFFFFFFFFFFFFFFFui64, fmt, NULL, va);
  dest[size - 1] = 0;
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
Com_vsprintf
==============
*/
__int64 Com_vsprintf(char *dest, unsigned __int64 size, const char *fmt, char *ap)
{
  unsigned __int64 *v8; 
  int v9; 
  unsigned int v10; 

  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 30, ASSERT_TYPE_SANITY, "( dest )", "%s", "dest") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 31, ASSERT_TYPE_SANITY, "( size > 0 )", "%s", "size > 0") )
    __debugbreak();
  if ( !fmt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 32, ASSERT_TYPE_SANITY, "( fmt )", "%s", "fmt") )
    __debugbreak();
  v8 = j___local_stdio_printf_options();
  v9 = __stdio_common_vsnprintf_s(*v8, dest, size, 0xFFFFFFFFFFFFFFFFui64, fmt, NULL, ap);
  dest[size - 1] = 0;
  v10 = v9;
  if ( v9 < 0 )
    v10 = -1;
  if ( v10 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 39, ASSERT_TYPE_SANITY, byte_14468AC15, "Buffer size %zu is less than number of generated characters. Truncated string = '%s' from format string = '%s'", size, dest, fmt) )
    __debugbreak();
  return v10;
}

/*
==============
Com_vsprintf_truncate
==============
*/
int Com_vsprintf_truncate(char *dest, unsigned __int64 size, unsigned __int64 length, const char *fmt, char *ap)
{
  unsigned __int64 *v9; 
  int result; 

  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 58, ASSERT_TYPE_SANITY, "( dest )", "%s", "dest") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 59, ASSERT_TYPE_SANITY, "( size > 0 )", "%s", "size > 0") )
    __debugbreak();
  if ( !fmt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 60, ASSERT_TYPE_SANITY, "( fmt )", "%s", "fmt") )
    __debugbreak();
  if ( size < length )
    length = size;
  v9 = j___local_stdio_printf_options();
  result = __stdio_common_vsnprintf_s(*v9, dest, length, 0xFFFFFFFFFFFFFFFFui64, fmt, NULL, ap);
  dest[size - 1] = 0;
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
I_atoui
==============
*/
__int64 I_atoui(const char *str)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  char v4; 
  unsigned int v5; 

  if ( str && *str )
  {
    v1 = -1i64;
    do
      ++v1;
    while ( str[v1] );
    v2 = 0;
    v3 = 0i64;
    if ( !v1 )
      return v2;
    while ( 1 )
    {
      v4 = str[v3];
      if ( (unsigned __int8)(v4 - 48) > 9u )
        break;
      v5 = v2;
      v2 = v4 + 10 * v2 - 48;
      if ( v5 > v2 )
        return 0xFFFFFFFFi64;
      if ( ++v3 >= v1 )
        return v2;
    }
  }
  return 0i64;
}

/*
==============
I_stricmpwild
==============
*/
__int64 I_stricmpwild(const char *wild, const char *s)
{
  const char *v3; 
  char v4; 
  const char *v5; 
  bool v6; 
  char v8; 
  int v9; 
  int v10; 

  v3 = wild;
  if ( !wild && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 289, ASSERT_TYPE_SANITY, "( wild )", "%s", "wild") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 290, ASSERT_TYPE_SANITY, "( s )", "%s", "s") )
    __debugbreak();
  while ( 1 )
  {
    v4 = *v3;
    v5 = v3++;
    if ( v4 != 42 )
      break;
    if ( !*v3 )
      return 0i64;
    if ( *s )
    {
      v6 = I_stricmpwild(v5, s + 1) == 0;
LABEL_11:
      if ( v6 )
        return 0i64;
    }
  }
  v8 = *s++;
  if ( v4 == v8 || v4 == 63 || (v9 = tolower(v8), (v10 = tolower(v4) - v9) == 0) )
  {
    v6 = v4 == 0;
    goto LABEL_11;
  }
  return ((v10 >> 31) & 0xFFFFFFFE) + 1;
}

/*
==============
I_strviewcmp
==============
*/
__int64 I_strviewcmp(const char *sv0, unsigned __int64 sv0len, const char *sv1, unsigned __int64 sv1len)
{
  unsigned __int64 v5; 
  int v8; 
  __int64 result; 

  v5 = sv1len;
  if ( sv0len < sv1len )
    v5 = sv0len;
  v8 = memcmp_0(sv0, sv1, v5);
  if ( v8 )
  {
    result = 1i64;
    if ( v8 < 0 )
      return 0xFFFFFFFFi64;
  }
  else if ( sv0len == sv1len )
  {
    return 0i64;
  }
  else
  {
    result = 1i64;
    if ( sv0len < sv1len )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
I_strviewicmp
==============
*/
__int64 I_strviewicmp(const char *sv0, unsigned __int64 sv0len, const char *sv1, unsigned __int64 sv1len)
{
  unsigned int v4; 
  unsigned __int64 v5; 
  const char *v7; 
  signed __int64 v9; 
  char v11; 
  int v12; 
  char v13; 

  v4 = 0;
  v5 = sv1len;
  v7 = sv1;
  if ( sv0len < sv1len )
    v5 = sv0len;
  v9 = sv0 - sv1;
  while ( v5-- )
  {
    v11 = v7[v9] | 0x20;
    if ( (unsigned int)(v7[v9] - 65) >= 0x1A )
      v11 = v7[v9];
    v12 = *v7++;
    v13 = v12 | 0x20;
    if ( (unsigned int)(v12 - 65) >= 0x1A )
      v13 = v12;
    if ( v11 != v13 )
    {
      v4 = 1;
      if ( v11 < v13 )
        return (unsigned int)-1;
      return v4;
    }
  }
  if ( sv0len != sv1len )
  {
    v4 = 1;
    if ( sv0len < sv1len )
      return (unsigned int)-1;
  }
  return v4;
}

/*
==============
I_stristr
==============
*/
const char *I_stristr(const char *s0, const char *substr)
{
  __int64 v4; 
  const char *v5; 
  const char *v6; 
  int v8; 

  if ( !s0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 323, ASSERT_TYPE_SANITY, "( s0 )", "%s", "s0") )
    __debugbreak();
  if ( !substr && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 324, ASSERT_TYPE_SANITY, "( substr )", "%s", "substr") )
    __debugbreak();
  v4 = 0i64;
  if ( *s0 )
  {
    v5 = s0;
    while ( 2 )
    {
      v6 = substr - 1;
      do
      {
        if ( *++v6 == 0 )
          return &s0[v4];
        v8 = tolower(v6[v5 - substr]);
      }
      while ( v8 == tolower(*v6) );
      ++v5;
      ++v4;
      if ( *v5 )
        continue;
      break;
    }
  }
  return 0i64;
}

/*
==============
I_strstr
==============
*/
const char *I_strstr(const char *s0, const char *substr)
{
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  char v7; 

  if ( !s0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 344, ASSERT_TYPE_SANITY, "( s0 )", "%s", "s0") )
    __debugbreak();
  if ( !substr && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 345, ASSERT_TYPE_SANITY, "( substr )", "%s", "substr") )
    __debugbreak();
  v4 = 0i64;
  if ( *s0 )
  {
    v5 = s0;
    while ( 2 )
    {
      v6 = -1i64;
      do
      {
        v7 = substr[++v6];
        if ( !v7 )
          return &s0[v4];
      }
      while ( v5[v6] == v7 );
      ++v5;
      ++v4;
      if ( *v5 )
        continue;
      break;
    }
  }
  return 0i64;
}

/*
==============
I_strnstr
==============
*/
const char *I_strnstr(const char *s0, const char *substr, unsigned __int64 n)
{
  __int64 v6; 
  __int64 v7; 
  char v8; 

  if ( !s0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 365, ASSERT_TYPE_SANITY, "( s0 )", "%s", "s0") )
    __debugbreak();
  if ( !substr && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 366, ASSERT_TYPE_SANITY, "( substr )", "%s", "substr") )
    __debugbreak();
  v6 = 0i64;
  if ( n )
  {
    while ( 2 )
    {
      v7 = -1i64;
      do
      {
        v8 = substr[++v7];
        if ( !v8 )
          return &s0[v6];
      }
      while ( s0[v6 + v7] == v8 );
      if ( ++v6 < n )
        continue;
      break;
    }
  }
  return 0i64;
}

/*
==============
I_rstrstr
==============
*/
const char *I_rstrstr(const char *s0, const char *substr)
{
  __int64 v4; 
  __int64 v5; 
  const char *v6; 
  const char *v7; 
  signed __int64 i; 
  const char *j; 

  if ( !s0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 386, ASSERT_TYPE_SANITY, "( s0 )", "%s", "s0") )
    __debugbreak();
  if ( !substr && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 387, ASSERT_TYPE_SANITY, "( substr )", "%s", "substr") )
    __debugbreak();
  v4 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( substr[v5] );
  v6 = &substr[v5];
  do
    ++v4;
  while ( s0[v4] );
  v7 = &s0[v4 - v5];
  if ( v7 < s0 )
    return 0i64;
  for ( i = v7 - substr; ; --i )
  {
    for ( j = substr; j < v6; ++j )
    {
      if ( j[i] != *j )
        break;
    }
    if ( j == v6 )
      break;
    if ( --v7 < s0 )
      return 0i64;
  }
  return v7;
}

/*
==============
I_strcat
==============
*/
void I_strcat(char *dest, unsigned __int64 destsize, const char *src)
{
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  Core_strcpy_result result; 

  v6 = -1i64;
  do
    ++v6;
  while ( dest[v6] );
  if ( v6 >= destsize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 415, ASSERT_TYPE_SANITY, "( destLen < destsize )", "%s", "destLen < destsize") )
    __debugbreak();
  v7 = destsize - v6;
  _XMM0 = (__int128)*Core_strcpy_internal(&result, &dest[v6], v7, src);
  __asm { vpextrb rax, xmm0, 8 }
  if ( (_BYTE)_RAX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 140, ASSERT_TYPE_SANITY, "( !result.wasTruncated )", "Core_strcpy: provided buffer of size %zu did not fit string. Source string: '%s'", v7, src) )
      __debugbreak();
  }
}

/*
==============
I_strcat_truncate
==============
*/
bool I_strcat_truncate(char *dest, unsigned __int64 destsize, const char *src)
{
  unsigned __int64 v6; 
  Core_strcpy_result result; 

  v6 = -1i64;
  do
    ++v6;
  while ( dest[v6] );
  if ( v6 >= destsize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 423, ASSERT_TYPE_SANITY, "( destLen < destsize )", "%s", "destLen < destsize") )
    __debugbreak();
  _XMM0 = (__int128)*Core_strcpy_internal(&result, &dest[v6], destsize - v6, src);
  __asm { vpextrb rax, xmm0, 8 }
  return (_BYTE)_RAX == 0;
}

/*
==============
I_strncat
==============
*/
void I_strncat(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  Core_strcpy_result result; 

  v8 = -1i64;
  do
    ++v8;
  while ( dest[v8] );
  if ( v8 >= destsize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 431, ASSERT_TYPE_SANITY, "( destLen < destsize )", "%s", "destLen < destsize") )
    __debugbreak();
  v9 = destsize - v8;
  _XMM0 = (__int128)*Core_strncpy_internal(&result, &dest[v8], v9, src, count);
  __asm { vpextrb rax, xmm0, 8 }
  if ( (_BYTE)_RAX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 200, ASSERT_TYPE_SANITY, "( !result.wasTruncated )", "Core_strncpy: provided buffer of size %zu did not fit string. Source string: '%s'", v9, src) )
      __debugbreak();
  }
}

/*
==============
I_strncat_truncate
==============
*/
bool I_strncat_truncate(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  unsigned __int64 v8; 
  Core_strcpy_result result; 

  v8 = -1i64;
  do
    ++v8;
  while ( dest[v8] );
  if ( v8 >= destsize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 439, ASSERT_TYPE_SANITY, "( destLen < destsize )", "%s", "destLen < destsize") )
    __debugbreak();
  _XMM0 = (__int128)*Core_strncpy_internal(&result, &dest[v8], destsize - v8, src, count);
  __asm { vpextrb rax, xmm0, 8 }
  return (_BYTE)_RAX == 0;
}

/*
==============
Core_strcpy
==============
*/
void Core_strcpy(char *dest, unsigned __int64 destsize, const char *src)
{
  Core_strcpy_result result; 

  _XMM0 = (__int128)*Core_strcpy_internal(&result, dest, destsize, src);
  __asm { vpextrb rax, xmm0, 8 }
  if ( (_BYTE)_RAX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 140, ASSERT_TYPE_SANITY, "( !result.wasTruncated )", "Core_strcpy: provided buffer of size %zu did not fit string. Source string: '%s'", destsize, src) )
      __debugbreak();
  }
}

/*
==============
Core_strcpy_truncate
==============
*/
bool Core_strcpy_truncate(char *dest, unsigned __int64 destsize, const char *src)
{
  Core_strcpy_result result; 

  _XMM0 = (__int128)*Core_strcpy_internal(&result, dest, destsize, src);
  __asm { vpextrb rax, xmm0, 8 }
  return (_BYTE)_RAX == 0;
}

/*
==============
Core_strcpy_and_fill_zero
==============
*/
void Core_strcpy_and_fill_zero(char *dest, unsigned __int64 destsize, const char *src)
{
  Core_strcpy_result result; 

  _XMM0 = *Core_strcpy_internal(&result, dest, destsize, src);
  __asm { vpextrb rax, xmm0, 8 }
  result = _XMM0;
  if ( (_BYTE)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 155, ASSERT_TYPE_SANITY, "( !result.wasTruncated )", "Core_strcpy: provided buffer of size %zu did not fit string. Source string: '%s'", destsize, src) )
    __debugbreak();
  if ( result.remainingDestSize )
    memset_0(&dest[destsize - result.remainingDestSize], 0, result.remainingDestSize);
}

/*
==============
Core_strcpy_truncate_or_fill_zero
==============
*/
bool Core_strcpy_truncate_or_fill_zero(char *dest, unsigned __int64 destsize, const char *src)
{
  Core_strcpy_result *v5; 
  Core_strcpy_result v7; 
  Core_strcpy_result result; 

  v5 = Core_strcpy_internal(&result, dest, destsize, src);
  v7 = *v5;
  if ( v5->remainingDestSize )
    memset_0(&dest[destsize - v7.remainingDestSize], 0, v5->remainingDestSize);
  return !v7.wasTruncated;
}

/*
==============
Core_strncpy
==============
*/
void Core_strncpy(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  Core_strcpy_result result; 

  _XMM0 = (__int128)*Core_strncpy_internal(&result, dest, destsize, src, count);
  __asm { vpextrb rax, xmm0, 8 }
  if ( (_BYTE)_RAX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 200, ASSERT_TYPE_SANITY, "( !result.wasTruncated )", "Core_strncpy: provided buffer of size %zu did not fit string. Source string: '%s'", destsize, src) )
      __debugbreak();
  }
}

/*
==============
Core_strncpy_truncate
==============
*/
bool Core_strncpy_truncate(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  Core_strcpy_result result; 

  _XMM0 = (__int128)*Core_strncpy_internal(&result, dest, destsize, src, count);
  __asm { vpextrb rax, xmm0, 8 }
  return (_BYTE)_RAX == 0;
}

/*
==============
Core_strncpy_and_fill_zero
==============
*/
void Core_strncpy_and_fill_zero(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  Core_strcpy_result result; 

  _XMM0 = *Core_strncpy_internal(&result, dest, destsize, src, count);
  __asm { vpextrb rax, xmm0, 8 }
  result = _XMM0;
  if ( (_BYTE)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 215, ASSERT_TYPE_SANITY, "( !result.wasTruncated )", "Core_strncpy: provided buffer of size %zu did not fit string. Source string: '%s'", destsize, src) )
    __debugbreak();
  if ( result.remainingDestSize )
    memset_0(&dest[destsize - result.remainingDestSize], 0, result.remainingDestSize);
}

/*
==============
Core_strncpy_truncate_or_fill_zero
==============
*/
bool Core_strncpy_truncate_or_fill_zero(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  Core_strcpy_result *v6; 
  Core_strcpy_result v8; 
  Core_strcpy_result result; 

  v6 = Core_strncpy_internal(&result, dest, destsize, src, count);
  v8 = *v6;
  if ( v6->remainingDestSize )
    memset_0(&dest[destsize - v8.remainingDestSize], 0, v6->remainingDestSize);
  return !v8.wasTruncated;
}

/*
==============
I_strlwr
==============
*/
char *I_strlwr(char *s)
{
  char v2; 
  char *i; 

  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 446, ASSERT_TYPE_SANITY, "( s )", "%s", "s") )
    __debugbreak();
  v2 = *s;
  for ( i = s; v2; ++i )
  {
    if ( (unsigned __int8)(v2 - 65) <= 0x19u )
      *i = v2 + 32;
    v2 = i[1];
  }
  return s;
}

/*
==============
I_strupr
==============
*/
char *I_strupr(char *s)
{
  char v2; 
  char *i; 

  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 459, ASSERT_TYPE_SANITY, "( s )", "%s", "s") )
    __debugbreak();
  v2 = *s;
  for ( i = s; v2; ++i )
  {
    if ( (unsigned __int8)(v2 - 97) <= 0x19u )
      *i = v2 - 32;
    v2 = i[1];
  }
  return s;
}

/*
==============
I_strtok_r
==============
*/
char *I_strtok_r(char *dest, const char *delim, char **saveptrctx)
{
  char *v5; 
  int v6; 
  char v7; 
  char *v9; 
  char *v10; 

  v5 = dest;
  if ( !dest )
  {
    v5 = *saveptrctx;
    if ( !*saveptrctx )
      return 0i64;
  }
  if ( strchr_0(delim, *v5) )
  {
    do
      v6 = *++v5;
    while ( strchr_0(delim, v6) );
  }
  v7 = *v5;
  if ( !*v5 )
  {
    *saveptrctx = NULL;
    return 0i64;
  }
  v9 = v5;
  do
  {
    if ( strchr_0(delim, v7) )
      break;
    v7 = *++v5;
  }
  while ( v7 );
  if ( *v5 )
  {
    *v5 = 0;
    v10 = v5 + 1;
  }
  else
  {
    v10 = NULL;
  }
  *saveptrctx = v10;
  return v9;
}

/*
==============
I_rstrip
==============
*/
void I_rstrip(char *s)
{
  __int64 v2; 
  char *i; 

  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 511, ASSERT_TYPE_SANITY, "( s )", "%s", "s") )
    __debugbreak();
  v2 = -1i64;
  while ( s[++v2] != 0 )
    ;
  for ( i = &s[v2 - 1]; i >= s; *i-- = 0 )
  {
    if ( !isspace(*i) )
      break;
  }
}

/*
==============
Core_EndsWith
==============
*/
bool Core_EndsWith(const char *str, const char *suffix)
{
  const char *v2; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  int v8; 
  unsigned __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 

  v2 = suffix;
  if ( !str )
    return 0;
  if ( !suffix )
    return 0;
  v4 = -1i64;
  do
    ++v4;
  while ( str[v4] );
  v5 = -1i64;
  do
    ++v5;
  while ( suffix[v5] );
  if ( v5 > v4 )
    return 0;
  v6 = v4 - v5;
  v7 = 0x7FFFFFFFi64;
  v8 = 1;
  if ( !&str[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v9 = v6 - (_QWORD)v2;
  while ( 1 )
  {
    v10 = str[v9 + (_QWORD)v2];
    v11 = v7;
    v12 = *v2++;
    --v7;
    if ( !v11 )
    {
LABEL_15:
      v8 = 0;
      return v8 == 0;
    }
    if ( v10 != v12 )
      break;
    if ( !v10 )
      goto LABEL_15;
  }
  if ( v10 < v12 )
    v8 = -1;
  return v8 == 0;
}

/*
==============
Core_ReplaceAll_Copy
==============
*/
void Core_ReplaceAll_Copy(char *dest, unsigned __int64 destSize, const char *src, const char *search, const char *format)
{
  const char *v6; 
  unsigned __int64 v8; 
  __int64 v9; 
  size_t v11; 
  unsigned __int64 v12; 
  const char *v13; 
  __int64 v14; 
  char v15; 
  Core_strcpy_result *v16; 
  unsigned __int64 v17; 
  char *v18; 
  Core_strcpy_result v19; 
  Core_strcpy_result v20; 
  Core_strcpy_result result; 

  v6 = src;
  v8 = destSize;
  if ( !*search )
    goto LABEL_15;
  v9 = -1i64;
  while ( search[++v9] != 0 )
    ;
  v11 = -1i64;
  do
    ++v11;
  while ( format[v11] );
  while ( 2 )
  {
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 344, ASSERT_TYPE_SANITY, "( s0 )", "%s", "s0") )
      __debugbreak();
    v12 = 0i64;
    if ( *v6 )
    {
      v13 = v6;
LABEL_11:
      v14 = -1i64;
      while ( 1 )
      {
        v15 = search[++v14];
        if ( !v15 )
          break;
        if ( v13[v14] != v15 )
        {
          ++v13;
          ++v12;
          if ( *v13 )
            goto LABEL_11;
          goto LABEL_15;
        }
      }
      if ( !&v6[v12] )
        goto LABEL_15;
      if ( v8 <= v12 )
      {
        v16 = Core_strncpy_internal(&v20, dest, v8, v6, v12);
      }
      else
      {
        memcpy_0(dest, v6, v12);
        v17 = v8 - v12;
        v18 = &dest[v12];
        if ( v17 > v11 )
        {
          memcpy_0(v18, format, v11);
          v8 = v17 - v11;
          dest = &v18[v11];
          v6 += v12 + v9;
          continue;
        }
        v16 = Core_strncpy_internal(&v19, v18, v17, format, v11);
      }
    }
    else
    {
LABEL_15:
      v16 = Core_strcpy_internal(&result, dest, v8, v6);
    }
    break;
  }
  v19 = *v16;
  if ( v19.wasTruncated && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 572, ASSERT_TYPE_SANITY, "( !result.wasTruncated )", "Core_ReplaceAll_Copy: provided buffer of size %zu did not fit string. Source string: '%s', Search string: '%s', Format string: '%s'", destSize, src, search, format) )
    __debugbreak();
}

/*
==============
Core_strcpy_internal
==============
*/
Core_strcpy_result *Core_strcpy_internal(Core_strcpy_result *result, char *dest, unsigned __int64 destsize, const char *src)
{
  char *v6; 
  unsigned __int64 v8; 
  Core_strcpy_result *v9; 

  v6 = dest;
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 117, ASSERT_TYPE_SANITY, "( dest )", "%s", "dest") )
    __debugbreak();
  if ( !destsize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 118, ASSERT_TYPE_SANITY, "( destsize > 0 )", "%s", "destsize > 0") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 119, ASSERT_TYPE_SANITY, "( src )", "%s", "src") )
    __debugbreak();
  v8 = destsize - 1;
  if ( destsize != 1 )
  {
    do
    {
      if ( !*src )
        break;
      *v6++ = *src++;
      --v8;
    }
    while ( v8 );
  }
  result->wasTruncated = *src != 0;
  v9 = result;
  result->remainingDestSize = v8;
  *v6 = 0;
  return v9;
}

/*
==============
Core_strncpy_internal
==============
*/
Core_strcpy_result *Core_strncpy_internal(Core_strcpy_result *result, char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  char *v7; 
  unsigned __int64 v9; 
  __int64 v10; 

  v7 = dest;
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 176, ASSERT_TYPE_SANITY, "( dest )", "%s", "dest") )
    __debugbreak();
  if ( !destsize && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 177, ASSERT_TYPE_SANITY, "( destsize > 0 )", "%s", "destsize > 0") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.cpp", 178, ASSERT_TYPE_SANITY, "( src )", "%s", "src") )
    __debugbreak();
  v9 = destsize - 1;
  if ( count < destsize - 1 )
    v9 = count;
  v10 = 0i64;
  if ( v9 )
  {
    do
    {
      if ( !*src )
        break;
      *v7++ = *src++;
      ++v10;
    }
    while ( v10 != v9 );
  }
  *v7 = 0;
  result->remainingDestSize = destsize - v10;
  result->wasTruncated = v10 != count && *src;
  return result;
}

