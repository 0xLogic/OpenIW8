/*
==============
DDL::DDL_strcat
==============
*/

void __fastcall DDL::DDL_strcat(char *dest, unsigned __int64 destsize, const char *src)
{
  ?DDL_strcat@DDL@@YAXPEAD_KPEBD@Z(dest, destsize, src);
}

/*
==============
DDL::DDL_GetAsset
==============
*/

DDLFile *__fastcall DDL::DDL_GetAsset(const char *fileName)
{
  return ?DDL_GetAsset@DDL@@YAPEAUDDLFile@@PEBD@Z(fileName);
}

/*
==============
DDL::DDL_Alloc
==============
*/

void *__fastcall DDL::DDL_Alloc(int size)
{
  return ?DDL_Alloc@DDL@@YAPEAXH@Z(size);
}

/*
==============
DDL::DDL_strcpy
==============
*/

void __fastcall DDL::DDL_strcpy(char *dest, unsigned __int64 destsize, const char *src)
{
  ?DDL_strcpy@DDL@@YAXPEAD_KPEBD@Z(dest, destsize, src);
}

/*
==============
DDL::DDL_stricmp
==============
*/

int __fastcall DDL::DDL_stricmp(const char *s0, const char *s1)
{
  return ?DDL_stricmp@DDL@@YAHPEBD0@Z(s0, s1);
}

/*
==============
DDL::DDL_atof
==============
*/

double __fastcall DDL::DDL_atof(const char *s)
{
  double result; 

  *(float *)&result = ?DDL_atof@DDL@@YAMPEBD@Z(s);
  return result;
}

/*
==============
DDL::DDL_FileWriteOpen
==============
*/

_iobuf *__fastcall DDL::DDL_FileWriteOpen(const char *fileName)
{
  return ?DDL_FileWriteOpen@DDL@@YAPEAU_iobuf@@PEBD@Z(fileName);
}

/*
==============
DDL::DDL_DoesAssetExist
==============
*/

bool __fastcall DDL::DDL_DoesAssetExist(const char *fileName)
{
  return ?DDL_DoesAssetExist@DDL@@YA_NPEBD@Z(fileName);
}

/*
==============
DDL::DDL_strlen
==============
*/

int __fastcall DDL::DDL_strlen(const char *s)
{
  return ?DDL_strlen@DDL@@YAHPEBD@Z(s);
}

/*
==============
DDL::DDL_HashString
==============
*/

unsigned int __fastcall DDL::DDL_HashString(const char *str, int len)
{
  return ?DDL_HashString@DDL@@YAIPEBDH@Z(str, len);
}

/*
==============
DDL::DDL_BlockChecksum32
==============
*/

unsigned int __fastcall DDL::DDL_BlockChecksum32(const void *data, int length, unsigned int initialCrc)
{
  return ?DDL_BlockChecksum32@DDL@@YAIPEBXHI@Z(data, length, initialCrc);
}

/*
==============
DDL::DDL_strncmp
==============
*/

int __fastcall DDL::DDL_strncmp(const char *s0, const char *s1, unsigned __int64 n)
{
  return ?DDL_strncmp@DDL@@YAHPEBD0_K@Z(s0, s1, n);
}

/*
==============
DDL::DDL_HashStringDefault
==============
*/

unsigned int __fastcall DDL::DDL_HashStringDefault(const char *str, int len)
{
  return ?DDL_HashStringDefault@DDL@@YAIPEBDH@Z(str, len);
}

/*
==============
DDL::DDL_strlwr
==============
*/

char *__fastcall DDL::DDL_strlwr(char *s)
{
  return ?DDL_strlwr@DDL@@YAPEADPEAD@Z(s);
}

/*
==============
DDL::DDL_sprintf
==============
*/

int DDL::DDL_sprintf(char *dest, unsigned __int64 size, const char *fmt, ...)
{
  return ?DDL_sprintf@DDL@@YAHPEAD_KPEBDZZ(dest, size, fmt);
}

/*
==============
DDL::DDL_strncpy
==============
*/

void __fastcall DDL::DDL_strncpy(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  ?DDL_strncpy@DDL@@YAXPEAD_KPEBD1@Z(dest, destsize, src, count);
}

/*
==============
DDL::DDL_va
==============
*/

char *DDL::DDL_va(const char *format, ...)
{
  return ?DDL_va@DDL@@YAPEADPEBDZZ(format);
}

/*
==============
DDL::DDL_FileReadFree
==============
*/

void __fastcall DDL::DDL_FileReadFree(void *buffer)
{
  ?DDL_FileReadFree@DDL@@YAXPEAX@Z(buffer);
}

/*
==============
DDL::DDL_atoi64
==============
*/

__int64 __cdecl DDL::DDL_atoi64(const char *String)
{
  return ?DDL_atoi64@DDL@@YA_JPEBD@Z(String);
}

/*
==============
DDL::DDL_FileReadOpen
==============
*/

int __fastcall DDL::DDL_FileReadOpen(const char *path, char **buffer)
{
  return ?DDL_FileReadOpen@DDL@@YAHPEBDPEAPEAD@Z(path, buffer);
}

/*
==============
DDL::DDL_FileWriteClose
==============
*/

void __fastcall DDL::DDL_FileWriteClose(_iobuf *fp)
{
  ?DDL_FileWriteClose@DDL@@YAXPEAU_iobuf@@@Z(fp);
}

/*
==============
DDL::DDL_strcmp
==============
*/

int __fastcall DDL::DDL_strcmp(const char *s0, const char *s1)
{
  return ?DDL_strcmp@DDL@@YAHPEBD0@Z(s0, s1);
}

/*
==============
DDL::DDL_strnicmp
==============
*/

int __fastcall DDL::DDL_strnicmp(const char *s0, const char *s1, unsigned __int64 n)
{
  return ?DDL_strnicmp@DDL@@YAHPEBD0_K@Z(s0, s1, n);
}

/*
==============
DDL::DDL_vsprintf
==============
*/

int __fastcall DDL::DDL_vsprintf(char *dest, unsigned __int64 size, const char *fmt, char *ap)
{
  return ?DDL_vsprintf@DDL@@YAHPEAD_KPEBD0@Z(dest, size, fmt, ap);
}

/*
==============
DDL::DDL_atoui
==============
*/

unsigned int __fastcall DDL::DDL_atoui(const char *str)
{
  return ?DDL_atoui@DDL@@YAIPEBD@Z(str);
}

/*
==============
DDL::DDL_isupper
==============
*/

bool __fastcall DDL::DDL_isupper(int c)
{
  return ?DDL_isupper@DDL@@YA_NH@Z(c);
}

/*
==============
DDL::DDL_Alloc
==============
*/
__int64 DDL::DDL_Alloc(int size)
{
  DDLConfigParams *Config; 
  void *(__fastcall *f_alloc)(int); 

  Config = DDL_GetConfig();
  if ( Config && (f_alloc = Config->f_alloc) != NULL )
    return (__int64)f_alloc(size);
  else
    return 0i64;
}

/*
==============
DDL::DDL_BlockChecksum32
==============
*/
unsigned int DDL::DDL_BlockChecksum32(const void *data, int length, unsigned int initialCrc)
{
  return j_DDL_XXH32(data, length, initialCrc);
}

/*
==============
DDL::DDL_DoesAssetExist
==============
*/
bool DDL::DDL_DoesAssetExist(const char *fileName)
{
  DDLConfigParams *Config; 
  bool (__fastcall *f_doesAssetExist)(const char *); 

  Config = DDL_GetConfig();
  return Config && (f_doesAssetExist = Config->f_doesAssetExist) != NULL && f_doesAssetExist(fileName);
}

/*
==============
DDL::DDL_FileReadFree
==============
*/
void DDL::DDL_FileReadFree(void *buffer)
{
  DDLConfigParams *Config; 
  void (__fastcall *f_fileReadFree)(void *); 

  Config = DDL_GetConfig();
  if ( Config )
  {
    f_fileReadFree = Config->f_fileReadFree;
    if ( f_fileReadFree )
      f_fileReadFree(buffer);
  }
}

/*
==============
DDL::DDL_FileReadOpen
==============
*/
__int64 DDL::DDL_FileReadOpen(const char *path, char **buffer)
{
  DDLConfigParams *Config; 
  int (__fastcall *f_fileReadOpen)(const char *, char **); 

  Config = DDL_GetConfig();
  if ( Config && (f_fileReadOpen = Config->f_fileReadOpen) != NULL )
    return ((__int64 (__fastcall *)(const char *, char **))f_fileReadOpen)(path, buffer);
  else
    return 0i64;
}

/*
==============
DDL::DDL_FileWriteClose
==============
*/
void DDL::DDL_FileWriteClose(_iobuf *fp)
{
  DDLConfigParams *Config; 
  void (__fastcall *f_fileWriteClose)(_iobuf *); 

  Config = DDL_GetConfig();
  if ( Config )
  {
    f_fileWriteClose = Config->f_fileWriteClose;
    if ( f_fileWriteClose )
      f_fileWriteClose(fp);
  }
}

/*
==============
DDL::DDL_FileWriteOpen
==============
*/
_iobuf *DDL::DDL_FileWriteOpen(const char *fileName)
{
  DDLConfigParams *Config; 
  _iobuf *(__fastcall *f_fileWriteOpen)(const char *); 

  Config = DDL_GetConfig();
  if ( Config && (f_fileWriteOpen = Config->f_fileWriteOpen) != NULL )
    return f_fileWriteOpen(fileName);
  else
    return 0i64;
}

/*
==============
DDL::DDL_GetAsset
==============
*/
DDLFile *DDL::DDL_GetAsset(const char *fileName)
{
  DDLConfigParams *Config; 
  DDLFile *(__fastcall *f_getAsset)(const char *); 

  Config = DDL_GetConfig();
  if ( Config && (f_getAsset = Config->f_getAsset) != NULL )
    return f_getAsset(fileName);
  else
    return 0i64;
}

/*
==============
DDL::DDL_HashString
==============
*/
__int64 DDL::DDL_HashString(const char *str, int len)
{
  DDLConfigParams *Config; 
  unsigned int (__fastcall *f_stringHash)(const char *, int); 

  Config = DDL_GetConfig();
  if ( Config && (f_stringHash = Config->f_stringHash) != NULL )
    return ((__int64 (__fastcall *)(const char *, _QWORD))f_stringHash)(str, (unsigned int)len);
  else
    return 0i64;
}

/*
==============
DDL::DDL_HashStringDefault
==============
*/
__int64 DDL::DDL_HashStringDefault(const char *str, int len)
{
  signed __int64 v2; 
  unsigned int v5; 
  const char *v6; 
  int v7; 

  v2 = len;
  if ( !str )
    return 0i64;
  v5 = 0;
  if ( *str )
  {
    v6 = str;
    do
    {
      if ( (_DWORD)v2 && v6 - str >= v2 )
        break;
      v7 = *v6++;
      v5 = v7 + 31 * v5;
    }
    while ( *v6 );
  }
  return v5;
}

/*
==============
DDL::DDL_atof
==============
*/
float DDL::DDL_atof(const char *s)
{
  *(double *)&_XMM0 = atof(s);
  __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
DDL::DDL_atoi64
==============
*/

__int64 __cdecl DDL::DDL_atoi64(const char *String)
{
  return _atoi64(String);
}

/*
==============
DDL::DDL_atoui
==============
*/
__int64 DDL::DDL_atoui(const char *str)
{
  __int64 v1; 
  unsigned int v2; 
  int v3; 
  unsigned int v4; 

  if ( str && *str )
  {
    v1 = -1i64;
    do
      ++v1;
    while ( str[v1] );
    v2 = 0;
    v3 = 0;
    if ( (int)v1 <= 0 )
      return v2;
    while ( (unsigned __int8)(*str - 48) <= 9u )
    {
      v4 = v2;
      v2 = *str + 10 * v2 - 48;
      if ( v4 > v2 )
        return 0xFFFFFFFFi64;
      ++v3;
      ++str;
      if ( v3 >= (int)v1 )
        return v2;
    }
  }
  return 0i64;
}

/*
==============
DDL::DDL_isupper
==============
*/
bool DDL::DDL_isupper(int c)
{
  return (unsigned int)(c - 65) <= 0x19;
}

/*
==============
DDL::DDL_sprintf
==============
*/
int DDL::DDL_sprintf(char *dest, unsigned __int64 size, const char *fmt, ...)
{
  unsigned __int64 *v6; 
  int result; 
  va_list va; 

  va_start(va, fmt);
  v6 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf(*v6 | 2, dest, size, fmt, NULL, va);
  dest[size - 1] = 0;
  if ( result < 0 )
    return -1;
  return result;
}

/*
==============
DDL::DDL_strcat
==============
*/
void DDL::DDL_strcat(char *dest, unsigned __int64 destsize, const char *src)
{
  __int64 v4; 
  char *v5; 
  unsigned __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  unsigned __int64 v9; 
  char v10; 

  if ( dest )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( dest[v4] );
  }
  else
  {
    LODWORD(v4) = 0;
  }
  v5 = &dest[(int)v4];
  v6 = destsize - (int)v4;
  if ( v6 && v5 )
  {
    if ( src )
    {
      v7 = src - 1;
      v8 = v5 - (src - 1);
      v9 = v6 - 1;
      while ( 1 )
      {
        v10 = *++v7;
        v7[v8 - 1] = v10;
        if ( !v10 )
          break;
        if ( !--v6 )
        {
          v5[v9] = 0;
          return;
        }
      }
    }
    else
    {
      *v5 = 0;
    }
  }
}

/*
==============
DDL::DDL_strcmp
==============
*/
__int64 DDL::DDL_strcmp(const char *s0, const char *s1)
{
  __int64 v2; 
  signed __int64 v3; 
  char v4; 
  __int64 v5; 
  char v6; 
  __int64 result; 

  v2 = 0x7FFFFFFFi64;
  if ( !s0 || !s1 )
    return (unsigned int)((_DWORD)s1 - (_DWORD)s0);
  v3 = s0 - s1;
  while ( 1 )
  {
    v4 = s1[v3];
    v5 = v2;
    v6 = *s1++;
    --v2;
    if ( !v5 )
      return 0i64;
    if ( v4 != v6 )
      break;
    if ( !v4 )
      return 0i64;
  }
  result = 1i64;
  if ( v4 < v6 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
DDL::DDL_strcpy
==============
*/
void DDL::DDL_strcpy(char *dest, unsigned __int64 destsize, const char *src)
{
  const char *v4; 
  signed __int64 v5; 
  unsigned __int64 v6; 
  char v7; 

  if ( destsize && dest )
  {
    if ( src )
    {
      v4 = src - 1;
      v5 = dest - (src - 1);
      v6 = destsize - 1;
      while ( 1 )
      {
        v7 = *++v4;
        v4[v5 - 1] = v7;
        if ( !v7 )
          break;
        if ( !--destsize )
        {
          dest[v6] = 0;
          return;
        }
      }
    }
    else
    {
      *dest = 0;
    }
  }
}

/*
==============
DDL::DDL_stricmp
==============
*/
__int64 DDL::DDL_stricmp(const char *s0, const char *s1)
{
  const char *v2; 
  __int64 v3; 
  signed __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  bool v10; 
  __int64 result; 

  v2 = s1;
  v3 = 0x7FFFFFFFi64;
  if ( !s0 || !s1 )
    return (unsigned int)((_DWORD)s1 - (_DWORD)s0);
  v4 = s0 - s1;
  while ( 1 )
  {
    v5 = (unsigned __int8)v2[v4];
    v6 = v3;
    v7 = *(unsigned __int8 *)v2++;
    --v3;
    if ( !v6 )
      return 0i64;
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( v5 - 65 > 0x19 )
        v8 = v5;
      v5 = v8;
      v9 = v7 + 32;
      if ( v7 - 65 > 0x19 )
        v9 = v7;
      v10 = v5 < v9;
      if ( v5 != v9 )
        break;
    }
    if ( !v5 )
      return 0i64;
  }
  result = 1i64;
  if ( v10 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
DDL::DDL_strlen
==============
*/
__int64 DDL::DDL_strlen(const char *s)
{
  __int64 result; 

  if ( !s )
    return 0i64;
  result = -1i64;
  do
    ++result;
  while ( s[result] );
  return result;
}

/*
==============
DDL::DDL_strlwr
==============
*/
char *DDL::DDL_strlwr(char *s)
{
  char v1; 
  char *i; 

  v1 = *s;
  for ( i = s; v1; ++i )
  {
    if ( (unsigned __int8)(v1 - 65) <= 0x19u )
      *i = v1 + 32;
    v1 = i[1];
  }
  return s;
}

/*
==============
DDL::DDL_strncmp
==============
*/
__int64 DDL::DDL_strncmp(const char *s0, const char *s1, unsigned __int64 n)
{
  signed __int64 v4; 
  char v5; 
  unsigned __int64 v6; 
  char v7; 
  __int64 result; 

  if ( !s0 || !s1 )
    return (unsigned int)((_DWORD)s1 - (_DWORD)s0);
  v4 = s0 - s1;
  while ( 1 )
  {
    v5 = s1[v4];
    v6 = n;
    v7 = *s1++;
    --n;
    if ( !v6 )
      return 0i64;
    if ( v5 != v7 )
      break;
    if ( !v5 )
      return 0i64;
  }
  result = 1i64;
  if ( v5 < v7 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
DDL::DDL_strncpy
==============
*/
void DDL::DDL_strncpy(char *dest, unsigned __int64 destsize, const char *src, unsigned __int64 count)
{
  unsigned __int64 v5; 
  const char *v6; 
  char *v7; 
  char v8; 

  v5 = count;
  if ( destsize && dest )
  {
    if ( src && count )
    {
      v6 = src - 1;
      if ( destsize <= count )
        count = destsize - 1;
      if ( destsize > v5 )
        destsize = v5;
      if ( destsize )
      {
        v7 = (char *)(dest - v6);
        while ( 1 )
        {
          v8 = *++v6;
          v6[(_QWORD)v7 - 1] = v8;
          if ( !v8 )
            break;
          if ( !--destsize )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        dest[count] = 0;
      }
    }
    else
    {
      *dest = 0;
    }
  }
}

/*
==============
DDL::DDL_strnicmp
==============
*/
__int64 DDL::DDL_strnicmp(const char *s0, const char *s1, unsigned __int64 n)
{
  const char *v4; 
  signed __int64 v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  bool v11; 
  __int64 result; 

  v4 = s1;
  if ( !s0 || !s1 )
    return (unsigned int)((_DWORD)s1 - (_DWORD)s0);
  v5 = s0 - s1;
  while ( 1 )
  {
    v6 = (unsigned __int8)v4[v5];
    v7 = n;
    v8 = *(unsigned __int8 *)v4++;
    --n;
    if ( !v7 )
      return 0i64;
    if ( v6 != v8 )
    {
      v9 = v6 + 32;
      if ( v6 - 65 > 0x19 )
        v9 = v6;
      v6 = v9;
      v10 = v8 + 32;
      if ( v8 - 65 > 0x19 )
        v10 = v8;
      v11 = v6 < v10;
      if ( v6 != v10 )
        break;
    }
    if ( !v6 )
      return 0i64;
  }
  result = 1i64;
  if ( v11 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
DDL::DDL_va
==============
*/
char *DDL::DDL_va(const char *format, ...)
{
  __int64 index; 
  char *v3; 
  unsigned __int64 *v4; 
  char *result; 
  va_list va; 

  va_start(va, format);
  index = DDL::s_vaInfo.index;
  DDL::s_vaInfo.index = (DDL::s_vaInfo.index + 1) % 4;
  v3 = DDL::s_vaInfo.va_string[index];
  v4 = j___local_stdio_printf_options();
  __stdio_common_vsprintf(*v4 | 2, v3, 0x400ui64, format, NULL, va);
  result = v3;
  v3[1023] = 0;
  return result;
}

/*
==============
DDL::DDL_vsprintf
==============
*/
int DDL::DDL_vsprintf(char *dest, unsigned __int64 size, const char *fmt, char *ap)
{
  unsigned __int64 *v8; 
  int result; 

  v8 = j___local_stdio_printf_options();
  result = __stdio_common_vsprintf(*v8 | 2, dest, size, fmt, NULL, ap);
  dest[size - 1] = 0;
  if ( result < 0 )
    return -1;
  return result;
}

