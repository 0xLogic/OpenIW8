/*
==============
Base64_Decode
==============
*/

unsigned __int64 __fastcall Base64_Decode(const char *string, void *buffer, unsigned __int64 bufferSize)
{
  return ?Base64_Decode@@YA_KPEBDPEAX_K@Z(string, buffer, bufferSize);
}

/*
==============
Base64_Encode
==============
*/

unsigned __int64 __fastcall Base64_Encode(const void *buffer, unsigned __int64 bufferSize, char *base64, unsigned __int64 base64Size)
{
  return ?Base64_Encode@@YA_KPEBX_KPEAD1@Z(buffer, bufferSize, base64, base64Size);
}

/*
==============
Base64_Decode
==============
*/
unsigned __int64 Base64_Decode(const char *string, void *buffer, unsigned __int64 bufferSize)
{
  unsigned __int8 v3; 
  _BYTE *v5; 
  const char *v6; 
  unsigned __int64 v7; 
  unsigned __int8 v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  unsigned __int8 v12; 

  v3 = *string;
  v5 = buffer;
  if ( !*string )
    return (int)v5 - (int)buffer;
  v6 = string + 2;
  v7 = 3i64;
  while ( 1 )
  {
    v8 = *(v6 - 1);
    if ( !v8 )
      break;
    if ( !*v6 )
      break;
    v9 = v6[1];
    if ( !v9 || v7 >= bufferSize )
      break;
    ++v7;
    v10 = base64[v8];
    v11 = base64[*(unsigned __int8 *)v6];
    v12 = base64[v9];
    *v5++ = (v10 >> 4) & 3 | (4 * base64[v3]);
    if ( *v6 != 61 )
    {
      *v5++ = (16 * v10) | (v11 >> 2) & 0xF;
      ++v7;
    }
    if ( v6[1] != 61 )
    {
      *v5++ = v12 & 0x3F | (v11 << 6);
      ++v7;
    }
    v3 = v6[2];
    v6 += 4;
    if ( !v3 )
      return (int)v5 - (int)buffer;
  }
  return 0i64;
}

/*
==============
Base64_Encode
==============
*/
unsigned __int64 Base64_Encode(const void *buffer, unsigned __int64 bufferSize, char *base64, unsigned __int64 base64Size)
{
  char *v5; 
  const char *v6; 
  unsigned __int64 v7; 
  unsigned __int64 v9; 
  char *v11; 
  char *v12; 
  char v13; 
  unsigned __int64 v14; 

  v5 = &base64[base64Size];
  v6 = base64Chars;
  v7 = 0i64;
  v9 = bufferSize / 3;
  v11 = base64;
  if ( v9 )
  {
    v12 = base64 + 4;
    while ( v12 < v5 )
    {
      v12 += 4;
      ++v7;
      *v11 = v6[(unsigned __int64)*(unsigned __int8 *)buffer >> 2];
      v11[1] = v6[((unsigned __int64)*((unsigned __int8 *)buffer + 1) >> 4) | (16i64 * (*(_BYTE *)buffer & 3))];
      v11[2] = v6[((unsigned __int64)*((unsigned __int8 *)buffer + 2) >> 6) | (4i64 * (*((_BYTE *)buffer + 1) & 0xF))];
      v13 = *((_BYTE *)buffer + 2);
      buffer = (char *)buffer + 3;
      v11[3] = v6[v13 & 0x3F];
      v11 += 4;
      if ( v7 >= v9 )
        goto LABEL_5;
    }
    goto LABEL_13;
  }
LABEL_5:
  v14 = bufferSize - 3 * v9;
  if ( v14 != 2 )
  {
    if ( v14 != 1 )
      goto LABEL_12;
    if ( v11 + 3 < v5 )
    {
      *v11 = v6[(unsigned __int64)*(unsigned __int8 *)buffer >> 2];
      v11[1] = v6[16 * (*(_BYTE *)buffer & 3)];
      *((_WORD *)v11 + 1) = 15677;
      goto LABEL_11;
    }
LABEL_13:
    *base64 = 0;
    return 0i64;
  }
  if ( v11 + 4 >= v5 )
    goto LABEL_13;
  *v11 = v6[(unsigned __int64)*(unsigned __int8 *)buffer >> 2];
  v11[1] = v6[((unsigned __int64)*((unsigned __int8 *)buffer + 1) >> 4) | (16i64 * (*(_BYTE *)buffer & 3))];
  v11[2] = v6[4 * (*((_BYTE *)buffer + 1) & 0xF)];
  v11[3] = 61;
LABEL_11:
  v11 += 4;
LABEL_12:
  if ( v11 >= v5 )
    goto LABEL_13;
  *v11 = 0;
  return (int)v11 - (int)base64;
}

