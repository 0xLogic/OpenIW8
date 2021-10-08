/*
==============
bdBase64::encodeURLSafe
==============
*/

void __fastcall bdBase64::encodeURLSafe(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  ?encodeURLSafe@bdBase64@@SAXPEBCIPEADI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::decode
==============
*/

unsigned int __fastcall bdBase64::decode(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen)
{
  return ?decode@bdBase64@@SAIPEBDIPEAEI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::encode
==============
*/

void __fastcall bdBase64::encode(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen, const char *alphabet)
{
  ?encode@bdBase64@@KAXPEBEIPEADIPEBD@Z(src, srcLen, dest, destLen, alphabet);
}

/*
==============
bdBase64::encodeURLSafe
==============
*/

void __fastcall bdBase64::encodeURLSafe(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  ?encodeURLSafe@bdBase64@@SAXPEBEIPEADI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::decode
==============
*/

unsigned int __fastcall bdBase64::decode(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  return ?decode@bdBase64@@SAIPEBDIPEACI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::decode
==============
*/

unsigned int __fastcall bdBase64::decode(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen, const char *alphabet)
{
  return ?decode@bdBase64@@KAIPEBDIPEAEI0@Z(src, srcLen, dest, destLen, alphabet);
}

/*
==============
bdBase64::decodeURLSafe
==============
*/

unsigned int __fastcall bdBase64::decodeURLSafe(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  return ?decodeURLSafe@bdBase64@@SAIPEBDIPEACI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::encode
==============
*/

void __fastcall bdBase64::encode(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  ?encode@bdBase64@@SAXPEBEIPEADI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::base64URLEncodeAndStrip
==============
*/

bool __fastcall bdBase64::base64URLEncodeAndStrip(const unsigned __int8 *const src, const unsigned int srcLen, char *const dest, unsigned int *destLen)
{
  return ?base64URLEncodeAndStrip@bdBase64@@SA_NQEBEIQEADAEAI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::decodeURLSafe
==============
*/

unsigned int __fastcall bdBase64::decodeURLSafe(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen)
{
  return ?decodeURLSafe@bdBase64@@SAIPEBDIPEAEI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::base64URLPadAndDecode
==============
*/

bool __fastcall bdBase64::base64URLPadAndDecode(const char *const src, const unsigned int srcLen, unsigned __int8 *const dest, unsigned int *destLen)
{
  return ?base64URLPadAndDecode@bdBase64@@SA_NQEBDIQEAEAEAI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::encode
==============
*/

void __fastcall bdBase64::encode(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  ?encode@bdBase64@@SAXPEBCIPEADI@Z(src, srcLen, dest, destLen);
}

/*
==============
bdBase64::base64URLEncodeAndStrip
==============
*/
bool bdBase64::base64URLEncodeAndStrip(const unsigned __int8 *const src, const unsigned int srcLen, char *const dest, unsigned int *destLen)
{
  unsigned int v6; 
  unsigned int v9; 
  char *v10; 
  unsigned int v11; 
  void *v12; 
  unsigned int v13; 
  bool v14; 
  bool result; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 

  v6 = *destLen;
  v9 = 4 * ((srcLen + 2) / 3) + 1;
  if ( v6 < v9 )
  {
    v17 = 4 * ((srcLen + 2) / 3) + 1;
    v16 = v6;
    bdHandleAssert(0, "\"destLen >= BD_BIN_TO_B64_SIZE(srcLen)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLEncodeAndStrip", 0x51u, "base64URLEncodeAndStrip() Dest buffer too small: [%d]bytes vs [%d] minimum", v16, v17);
    v19 = v9;
    LODWORD(v18) = *destLen;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLEncodeAndStrip", 0x51u, "base64URLEncodeAndStrip() Dest buffer too small: [%d]bytes vs [%d] minimum", v18, v19);
    v6 = *destLen;
    if ( *destLen < v9 )
      return 0;
  }
  bdBase64::encode(src, srcLen, dest, v6, urlsafeBase64Alphabet);
  v10 = strchr_0(dest, 61);
  if ( v10 )
    *v10 = 0;
  v11 = *destLen;
  v12 = memchr_0(dest, 0, *destLen);
  v13 = (_DWORD)v12 - (_DWORD)dest;
  v14 = v12 == NULL;
  result = 1;
  if ( !v14 )
    v11 = v13;
  *destLen = v11;
  return result;
}

/*
==============
bdBase64::base64URLPadAndDecode
==============
*/
char bdBase64::base64URLPadAndDecode(const char *const src, const unsigned int srcLen, unsigned __int8 *const dest, unsigned int *destLen)
{
  const char *i; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v15; 
  char *v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  int srca; 

  bdHandleAssert(src != NULL, "(src != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLPadAndDecode", 0x68u, "Error: src cannot be NULL");
  bdHandleAssert(dest != NULL, "(dest != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLPadAndDecode", 0x69u, "Error: dest cannot be NULL");
  bdHandleAssert(srcLen != 0, "(srcLen > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLPadAndDecode", 0x6Au, "Error: srcLen cannot be zero");
  bdHandleAssert(*destLen != 0, "(destLen > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLPadAndDecode", 0x6Bu, "Error: destLen cannot be zero");
  for ( i = &src[srcLen - 1]; *i == 61; --srcLen )
    --i;
  v9 = 4 - (srcLen & 3);
  if ( (srcLen & 3) == 0 )
    v9 = 0;
  v15 = v9;
  bdHandleAssert(v9 <= 2, "padLen <= 2", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLPadAndDecode", 0x77u, "Invalid padding length [%u]", v15);
  v10 = *destLen;
  v11 = (3 * srcLen) >> 2;
  if ( *destLen < v11 )
  {
    v17 = (3 * srcLen) >> 2;
    LODWORD(v16) = *destLen;
    bdHandleAssert(0, "\"destLen >= BD_B64_TO_BIN_SIZE(srcLenUnpad)\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLPadAndDecode", 0x7Bu, "base64URLPadAndDecode() Dest buffer too small: [%d]bytes vs [%d] minimum", v16, v17);
    v19 = (3 * srcLen) >> 2;
    LODWORD(v18) = *destLen;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::base64URLPadAndDecode", 0x7Bu, "base64URLPadAndDecode() Dest buffer too small: [%d]bytes vs [%d] minimum", v18, v19);
    v10 = *destLen;
  }
  if ( v10 < v11 )
    return 0;
  v12 = bdBase64::decode(src, srcLen & 0xFFFFFFFC, dest, v10, urlsafeBase64Alphabet);
  if ( v9 )
  {
    v13 = *destLen;
    srca = 1027423549;
    memcpy_0(&srca, &src[srcLen - (4 - v9)], 4 - v9);
    LODWORD(v12) = bdBase64::decode((const char *)&srca, 4u, &dest[v12], v13 - v12, urlsafeBase64Alphabet) + v12;
  }
  if ( (unsigned int)v12 > *destLen )
    return 0;
  *destLen = v12;
  return 1;
}

/*
==============
bdBase64::decode
==============
*/
__int64 bdBase64::decode(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen, const char *alphabet)
{
  __int64 v5; 
  unsigned int v10; 
  const char *i; 
  __int64 v12; 
  const char *v13; 
  char v14; 
  char v15; 
  char *v16; 
  char v17; 
  char v18; 
  unsigned __int8 v19; 
  bool v20; 
  char *v21; 
  char v22; 
  char Index; 
  unsigned __int8 v24; 
  unsigned __int8 *v25; 
  _BYTE *v26; 
  char v27; 
  char v28; 
  __int64 v30; 
  const char *alphabeta; 

  v5 = srcLen;
  bdHandleAssert(src != NULL, "src != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::decode", 0x12Cu, "bdBase64::decode() src may not be NULL");
  bdHandleAssert(dest != NULL, "dest != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::decode", 0x12Du, "bdBase64::decode() dest may not be NULL");
  bdHandleAssert(alphabet != NULL, "alphabet != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::decode", 0x12Eu, "bdBase64::decode() alphabet may not be NULL");
  v10 = (unsigned int)(3 * v5) >> 2;
  if ( (_DWORD)v5 && src )
  {
    for ( i = &src[(unsigned int)(v5 - 1)]; *i == 61; --v10 )
      --i;
    bdHandleAssert(destLen >= v10, "destLen >= expectedLen", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::decode", 0x13Cu, "bdBase64::decode() Dest buffer too small: [%d]bytes vs [%d] minimum", destLen, v10);
  }
  v12 = 0i64;
  v13 = src;
  if ( src )
  {
    while ( (unsigned __int8)(*v13 - 9) <= 4u || *v13 == 32 )
      ++v13;
  }
  alphabeta = &src[v5];
  if ( v13 != &src[v5] )
  {
    do
    {
      v14 = *v13;
      if ( *v13 == 61 || !v14 )
        break;
      v15 = v14 - 65;
      if ( (unsigned __int8)(v14 - 65) > 0x19u )
      {
        if ( (unsigned __int8)(v14 - 97) > 0x19u )
        {
          if ( (unsigned __int8)(v14 - 48) > 9u )
          {
            if ( v14 == alphabet[62] )
            {
              v15 = 62;
            }
            else if ( v14 == alphabet[63] )
            {
              v15 = 63;
            }
            else
            {
              LODWORD(v30) = v14;
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdUtilities/bdBase64", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "findIndex", 0x1A5u, "Unknown base64 character ['%c'] - treating as 'A'", v30);
              v15 = 0;
            }
          }
          else
          {
            v15 = v14 + 4;
          }
        }
        else
        {
          v15 = v14 - 71;
        }
      }
      v16 = (char *)(v13 + 1);
      if ( v16 )
      {
        while ( (unsigned __int8)(*v16 - 9) <= 4u || *v16 == 32 )
          ++v16;
      }
      v17 = *v16;
      v18 = *v16 - 65;
      if ( (unsigned __int8)v18 > 0x19u )
      {
        if ( (unsigned __int8)(v17 - 97) > 0x19u )
        {
          if ( (unsigned __int8)(v17 - 48) > 9u )
          {
            if ( v17 == alphabet[62] )
            {
              v18 = 62;
            }
            else if ( v17 == alphabet[63] )
            {
              v18 = 63;
            }
            else
            {
              LODWORD(v30) = v17;
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdUtilities/bdBase64", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "findIndex", 0x1A5u, "Unknown base64 character ['%c'] - treating as 'A'", v30);
              v18 = 0;
            }
          }
          else
          {
            v18 = v17 + 4;
          }
        }
        else
        {
          v18 = v17 - 71;
        }
      }
      v19 = (4 * v15) | (v18 >> 4) & 3;
      v20 = (unsigned int)v12 <= destLen;
      if ( (unsigned int)v12 >= destLen )
        goto LABEL_63;
      dest[v12] = v19;
      v12 = (unsigned int)(v12 + 1);
      v21 = v16 + 1;
      if ( v21 )
      {
        while ( (unsigned __int8)(*v21 - 9) <= 4u || *v21 == 32 )
          ++v21;
      }
      if ( (int)v21 - (int)src >= srcLen )
      {
        v25 = dest;
      }
      else
      {
        v22 = *v21;
        if ( *v21 == 61 || !v22 )
          break;
        Index = findIndex(v22, alphabet);
        v19 = Index;
        v20 = (unsigned int)v12 <= destLen;
        if ( (unsigned int)v12 >= destLen )
          goto LABEL_63;
        v24 = (16 * v18) | (Index >> 2) & 0xF;
        v25 = dest;
        dest[v12] = v24;
        v12 = (unsigned int)(v12 + 1);
      }
      v26 = v21 + 1;
      if ( v26 )
      {
        while ( (unsigned __int8)(*v26 - 9) <= 4u || *v26 == 32 )
          ++v26;
      }
      if ( (int)v26 - (int)src < srcLen )
      {
        v27 = *v26;
        if ( *v26 == 61 || !v27 )
          break;
        v28 = findIndex(v27, alphabet);
        v20 = (unsigned int)v12 <= destLen;
        if ( (unsigned int)v12 >= destLen )
          goto LABEL_63;
        v25[v12] = v28 | (v19 << 6);
        v12 = (unsigned int)(v12 + 1);
      }
      v13 = v26 + 1;
      if ( v13 )
      {
        while ( (unsigned __int8)(*v13 - 9) <= 4u || *v13 == 32 )
          ++v13;
      }
    }
    while ( v13 != alphabeta );
    v20 = (unsigned int)v12 <= destLen;
LABEL_63:
    if ( !v20 )
    {
      LODWORD(v30) = destLen;
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdUtilities/bdBase64", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::decode", 0x181u, "bdBase64::decode() Truncated: Dest buffer too small: [%d]bytes vs [%d] minimum", v30, v12);
    }
  }
  return (unsigned int)v12;
}

/*
==============
bdBase64::decode
==============
*/
unsigned int bdBase64::decode(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  return bdBase64::decode(src, srcLen, (unsigned __int8 *)dest, destLen, standardBase64Alphabet);
}

/*
==============
bdBase64::decode
==============
*/
unsigned int bdBase64::decode(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen)
{
  return bdBase64::decode(src, srcLen, dest, destLen, standardBase64Alphabet);
}

/*
==============
bdBase64::decodeURLSafe
==============
*/
unsigned int bdBase64::decodeURLSafe(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  return bdBase64::decode(src, srcLen, (unsigned __int8 *)dest, destLen, urlsafeBase64Alphabet);
}

/*
==============
bdBase64::decodeURLSafe
==============
*/
unsigned int bdBase64::decodeURLSafe(const char *src, const unsigned int srcLen, unsigned __int8 *dest, const unsigned int destLen)
{
  return bdBase64::decode(src, srcLen, dest, destLen, urlsafeBase64Alphabet);
}

/*
==============
bdBase64::encode
==============
*/
void bdBase64::encode(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen, const char *alphabet)
{
  __int64 v9; 
  unsigned int i; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned __int8 v15; 
  __int64 v16; 
  unsigned __int8 v17; 
  unsigned __int8 v18; 
  char v19; 
  __int64 v20; 
  char v21; 
  unsigned int v22; 
  __int64 v23; 

  bdHandleAssert(src != NULL, "src != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::encode", 0x9Fu, "bdBase64::encode() src may not be NULL");
  bdHandleAssert(dest != NULL, "dest != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::encode", 0xA0u, "bdBase64::encode() dest may not be NULL");
  v22 = 4 * ((srcLen + 2) / 3) + 1;
  bdHandleAssert(destLen >= v22, "destLen >= BD_BIN_TO_B64_SIZE(srcLen)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::encode", 0xA3u, "bdBase64:encode() Dest buffer too small: [%d]bytes vs [%d] minimum", destLen, v22);
  bdHandleAssert(alphabet != NULL, "alphabet != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::encode", 0xA4u, "bdBase64::encode() alphabet may not be NULL");
  v9 = 0i64;
  for ( i = 0; i < srcLen; v9 = (unsigned int)(v16 + 2) )
  {
    v11 = v9;
    if ( (unsigned int)v9 >= destLen )
      goto LABEL_19;
    v12 = i;
    v13 = i + 1;
    dest[v9] = alphabet[(unsigned __int64)src[v12] >> 2];
    v14 = (unsigned int)(v9 + 1);
    v15 = 16 * (src[v12] & 3);
    if ( (unsigned int)v13 < srcLen )
      v15 |= src[v13] >> 4;
    if ( (unsigned int)v14 >= destLen )
      goto LABEL_19;
    v16 = (unsigned int)(v11 + 2);
    dest[v14] = alphabet[v15];
    if ( (unsigned int)v13 >= srcLen )
    {
      if ( (unsigned int)v16 >= destLen )
        goto LABEL_19;
      v19 = 61;
    }
    else
    {
      v17 = src[v13];
      v13 = (unsigned int)(v13 + 1);
      v18 = 4 * (v17 & 0xF);
      if ( (unsigned int)v13 < srcLen )
        v18 |= src[v13] >> 6;
      if ( (unsigned int)v16 >= destLen )
        goto LABEL_19;
      v19 = alphabet[v18];
    }
    v20 = (unsigned int)(v16 + 1);
    dest[v16] = v19;
    if ( (unsigned int)v20 >= destLen )
      goto LABEL_19;
    if ( (unsigned int)v13 >= srcLen )
      v21 = 61;
    else
      v21 = alphabet[src[v13] & 0x3F];
    dest[v20] = v21;
    i = v13 + 1;
  }
  if ( (unsigned int)v9 >= destLen )
  {
LABEL_19:
    LODWORD(v23) = destLen;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdUtilities/bdBase64", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "bdBase64::encode", 0x100u, "bdBase64::encode() Truncated: Dest buffer too small: [%d]bytes vs [%d] minimum", v23, 4 * ((srcLen + 2) / 3) + 1);
    dest[destLen - 1] = 0;
    return;
  }
  dest[v9] = 0;
}

/*
==============
bdBase64::encode
==============
*/
void bdBase64::encode(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  bdBase64::encode((const unsigned __int8 *)src, srcLen, dest, destLen, standardBase64Alphabet);
}

/*
==============
bdBase64::encode
==============
*/
void bdBase64::encode(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  bdBase64::encode(src, srcLen, dest, destLen, standardBase64Alphabet);
}

/*
==============
bdBase64::encodeURLSafe
==============
*/
void bdBase64::encodeURLSafe(const char *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  bdBase64::encode((const unsigned __int8 *)src, srcLen, dest, destLen, urlsafeBase64Alphabet);
}

/*
==============
bdBase64::encodeURLSafe
==============
*/
void bdBase64::encodeURLSafe(const unsigned __int8 *src, const unsigned int srcLen, char *dest, const unsigned int destLen)
{
  bdBase64::encode(src, srcLen, dest, destLen, urlsafeBase64Alphabet);
}

/*
==============
findIndex
==============
*/
__int64 findIndex(char c, const char *cvt)
{
  int v3; 

  if ( (unsigned __int8)(c - 65) <= 0x19u )
    return (unsigned int)(c - 65);
  if ( (unsigned __int8)(c - 97) <= 0x19u )
    return (unsigned int)(c - 71);
  if ( (unsigned __int8)(c - 48) <= 9u )
    return (unsigned int)(c + 4);
  if ( c == cvt[62] )
    return 62i64;
  if ( c == cvt[63] )
    return 63i64;
  v3 = c;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdCore/bdUtilities/bdBase64", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdutilities\\bdbase64.cpp", "findIndex", 0x1A5u, "Unknown base64 character ['%c'] - treating as 'A'", v3);
  return 0i64;
}

