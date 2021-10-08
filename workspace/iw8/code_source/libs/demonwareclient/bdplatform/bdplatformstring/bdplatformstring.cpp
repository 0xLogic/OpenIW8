/*
==============
bdDelimSubstr
==============
*/

bool __fastcall bdDelimSubstr(const char *str, const char *substr, const char *const delimiters)
{
  return ?bdDelimSubstr@@YA_NPEBD0QEBD@Z(str, substr, delimiters);
}

/*
==============
bdStrnGetToken
==============
*/

unsigned __int64 __fastcall bdStrnGetToken(const char *const str, const unsigned __int64 countStr, const char *const delimiters, const unsigned __int64 countDelimiters, char *const tokenBuffer, const unsigned int tokenBufferSize, const char **end)
{
  return ?bdStrnGetToken@@YA_KQEBD_K01QEADIPEAPEBD@Z(str, countStr, delimiters, countDelimiters, tokenBuffer, tokenBufferSize, end);
}

/*
==============
bdDelimnSubstr
==============
*/

bool __fastcall bdDelimnSubstr(const char *str, const unsigned __int64 countStr, const char *substr, const unsigned __int64 countSubstr, const char *const delimiters, const unsigned __int64 countDelimiters)
{
  return ?bdDelimnSubstr@@YA_NPEBD_K01QEBD1@Z(str, countStr, substr, countSubstr, delimiters, countDelimiters);
}

/*
==============
bdStrGetToken
==============
*/

unsigned __int64 __fastcall bdStrGetToken(const char *const str, const char *const delimiters, char *const tokenBuffer, const unsigned int tokenBufferSize, const char **end)
{
  return ?bdStrGetToken@@YA_KQEBD0QEADIPEAPEBD@Z(str, delimiters, tokenBuffer, tokenBufferSize, end);
}

/*
==============
bdDelimSubstr
==============
*/
_BOOL8 bdDelimSubstr(const char *str, const char *substr, const char *const delimiters)
{
  const char *v3; 
  bool v6; 
  size_t v7; 
  size_t v8; 
  const char *v9; 
  __int64 v10; 
  size_t v11; 
  const char *v12; 
  __int64 v13; 
  size_t v14; 
  size_t v15; 
  size_t v18; 
  char String2[8]; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  char String1[8]; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 

  v3 = delimiters;
  v6 = 1;
  do
  {
    v7 = 0i64;
    *(_QWORD *)String1 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    v30 = 0i64;
    v31 = 0i64;
    v32 = 0i64;
    v33 = 0i64;
    v34 = 0i64;
    if ( substr )
    {
      v8 = strspn(substr, v3);
      v9 = &substr[v8];
      v10 = 64i64;
      v7 = strcspn(&substr[v8], v3);
      if ( v7 + 1 < 0x40 )
        v10 = v7 + 1;
      bdHandleAssert(v9 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v11 = -1i64;
      do
        ++v11;
      while ( v9[v11] );
      if ( v10 )
      {
        if ( v11 >= v10 - 1 )
          v11 = v10 - 1;
        memcpy_0(String1, v9, v11);
        String1[v11] = 0;
      }
      v3 = delimiters;
      substr += v8 + v7;
    }
    if ( v7 - 1 <= 0x3E )
    {
      *(_QWORD *)String2 = 0i64;
      v20 = 0i64;
      v21 = 0i64;
      v22 = 0i64;
      v23 = 0i64;
      v24 = 0i64;
      v25 = 0i64;
      v26 = 0i64;
      if ( !str )
        goto LABEL_23;
      v18 = strspn(str, v3);
      v12 = &str[v18];
      v13 = 64i64;
      v14 = strcspn(&str[v18], v3);
      if ( v14 + 1 < 0x40 )
        v13 = v14 + 1;
      bdHandleAssert(v12 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v15 = -1i64;
      do
        ++v15;
      while ( v12[v15] );
      if ( v13 )
      {
        if ( v15 >= v13 - 1 )
          v15 = v13 - 1;
        memcpy_0(String2, v12, v15);
        String2[v15] = 0;
      }
      str += v14 + v18;
      if ( v14 < 0x40 )
LABEL_23:
        v6 = _strcmpi(String1, String2) == 0;
    }
    if ( !v6 )
      break;
    v3 = delimiters;
  }
  while ( v7 );
  return v6;
}

/*
==============
bdDelimnSubstr
==============
*/
bool bdDelimnSubstr(const char *str, const unsigned __int64 countStr, const char *substr, const unsigned __int64 countSubstr, const char *const delimiters, const unsigned __int64 countDelimiters)
{
  _BYTE *v10; 
  unsigned __int64 v11; 
  _BYTE *v13; 
  unsigned __int64 v14; 
  _BYTE *v15; 
  unsigned __int64 v16; 

  v10 = memchr_0(str, 0, countStr);
  v11 = countStr;
  if ( v10 )
    v11 = v10 - str;
  if ( v11 + 1 > countStr )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDelimnSubstr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.cpp", "bdDelimnSubstr", 0x7Bu, "No null terminator found in str within %llu characters", countStr);
    return 0;
  }
  v13 = memchr_0(substr, 0, countSubstr);
  v14 = countSubstr;
  if ( v13 )
    v14 = v13 - substr;
  if ( v14 + 1 > countSubstr )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDelimnSubstr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.cpp", "bdDelimnSubstr", 0x82u, "No null terminator found in substr within %llu characters", countSubstr);
    return 0;
  }
  v15 = memchr_0(delimiters, 0, countDelimiters);
  v16 = countDelimiters;
  if ( v15 )
    v16 = v15 - delimiters;
  if ( v16 + 1 > countDelimiters )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdDelimnSubstr", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.cpp", "bdDelimnSubstr", 0x89u, "No null terminator found in delimiters within %llu characters", countDelimiters);
    return 0;
  }
  return bdDelimSubstr(str, substr, delimiters);
}

/*
==============
bdStrGetToken
==============
*/
size_t bdStrGetToken(const char *const str, const char *const delimiters, char *const tokenBuffer, const unsigned int tokenBufferSize, const char **end)
{
  unsigned __int64 v5; 
  size_t v9; 
  size_t v10; 
  unsigned __int64 v11; 

  v5 = tokenBufferSize;
  if ( !str )
    return 0i64;
  v9 = strspn(str, delimiters);
  v10 = strcspn(&str[v9], delimiters);
  v11 = v10 + 1;
  if ( v10 + 1 >= v5 )
    v11 = v5;
  bdStrlcpy(tokenBuffer, &str[v9], v11);
  if ( end )
    *end = &str[v9 + v10];
  return v10;
}

/*
==============
bdStrnGetToken
==============
*/
unsigned __int64 bdStrnGetToken(const char *const str, const unsigned __int64 countStr, const char *const delimiters, const unsigned __int64 countDelimiters, char *const tokenBuffer, const unsigned int tokenBufferSize, const char **end)
{
  _BYTE *v11; 
  unsigned __int64 v12; 
  _BYTE *v13; 
  unsigned __int64 v14; 

  if ( str )
  {
    v11 = memchr_0(str, 0, countStr);
    v12 = countStr;
    if ( v11 )
      v12 = v11 - str;
    if ( v12 + 1 <= countStr )
    {
      v13 = memchr_0(delimiters, 0, countDelimiters);
      v14 = countDelimiters;
      if ( v13 )
        v14 = v13 - delimiters;
      if ( v14 + 1 <= countDelimiters )
        return bdStrGetToken(str, delimiters, tokenBuffer, tokenBufferSize, end);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdStrnGetToken", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.cpp", "bdStrnGetToken", 0x43u, "No null terminator found in delimiters within %llu characters", countDelimiters);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdStrnGetToken", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.cpp", "bdStrnGetToken", 0x36u, "No null terminator found in str within %llu characters", countStr);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdStrnGetToken", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.cpp", "bdStrnGetToken", 0x3Cu, "str is null");
  }
  return 0i64;
}

