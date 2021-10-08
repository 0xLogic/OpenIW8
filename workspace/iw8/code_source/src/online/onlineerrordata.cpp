/*
==============
OER_OutputCurrentErrorCodes
==============
*/

void __fastcall OER_OutputCurrentErrorCodes(const volatile unsigned __int64 *errorBits, OnlineErrorCategory_t categoryCount)
{
  ?OER_OutputCurrentErrorCodes@@YAXPED_KW4OnlineErrorCategory_t@@@Z(errorBits, categoryCount);
}

/*
==============
OER_ErrorCodeToString
==============
*/

const char *__fastcall OER_ErrorCodeToString(const OnlineErrorCategory_t category, unsigned __int64 errorCode)
{
  return ?OER_ErrorCodeToString@@YAPEBDW4OnlineErrorCategory_t@@_K@Z(category, errorCode);
}

/*
==============
OER_OutputAllErrorCodes
==============
*/

void OER_OutputAllErrorCodes(void)
{
  ?OER_OutputAllErrorCodes@@YAXXZ();
}

/*
==============
OER_ErrorCodeToString
==============
*/
const char *OER_ErrorCodeToString(const OnlineErrorCategory_t category, unsigned __int64 errorCode)
{
  int v2; 
  const unsigned __int64 *i; 

  v2 = 0;
  for ( i = errorCodeLookup[category]; *i != errorCode; ++i )
  {
    if ( (unsigned int)++v2 >= 0x40 )
      return "Unknown OER error code";
  }
  return errorCodeLookupDesc[category][v2];
}

/*
==============
OER_OutputAllErrorCodes
==============
*/
void OER_OutputAllErrorCodes(void)
{
  unsigned int v0; 
  unsigned int v1; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 

  v0 = 0;
  v1 = 0;
  v2 = 0i64;
  do
  {
    v3 = 0;
    v4 = v2;
    do
    {
      if ( *(const unsigned __int64 *)((char *)errorCodeLookup[0] + v4) )
        Com_Printf(25, "%10d. %s.\n", v0++, *(const char **)((char *)errorCodeLookupDesc[0] + v4));
      ++v3;
      v4 += 8i64;
    }
    while ( v3 < 0x40 );
    ++v1;
    v2 += 512i64;
  }
  while ( v1 < 0x1A );
}

/*
==============
OER_OutputCurrentErrorCodes
==============
*/
void OER_OutputCurrentErrorCodes(const volatile unsigned __int64 *errorBits, OnlineErrorCategory_t categoryCount)
{
  unsigned int v2; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  unsigned int v9; 
  __int64 v10; 
  const unsigned __int64 *v11; 

  if ( categoryCount )
  {
    v2 = 0;
    v5 = 0i64;
    do
    {
      v6 = 1i64;
      v7 = 64i64;
      do
      {
        if ( (errorBits[v5] & v6) != 0 )
        {
          v8 = "Unknown OER error code";
          v9 = 0;
          v10 = 0i64;
          v11 = errorCodeLookup[v5];
          while ( *v11 != v6 )
          {
            ++v9;
            ++v10;
            ++v11;
            if ( v9 >= 0x40 )
              goto LABEL_10;
          }
          v8 = errorCodeLookupDesc[v5][v10];
LABEL_10:
          Com_Printf(25, "oer: %s.\n", v8);
        }
        v6 = __ROL8__(v6, 1);
        --v7;
      }
      while ( v7 );
      v5 = ++v2;
    }
    while ( v2 < (unsigned __int64)categoryCount );
  }
}

