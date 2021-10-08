/*
==============
bdJSONUtility::skipLiteral
==============
*/

const char *__fastcall bdJSONUtility::skipLiteral(const char *start)
{
  return ?skipLiteral@bdJSONUtility@@SAPEBDPEBD@Z(start);
}

/*
==============
bdJSONUtility::skipArray
==============
*/

const char *__fastcall bdJSONUtility::skipArray(const char *start, unsigned int *count)
{
  return ?skipArray@bdJSONUtility@@SAPEBDPEBDPEAI@Z(start, count);
}

/*
==============
bdJSONUtility::getCodePointFromJSON
==============
*/

bdJSONUtility::bdJSONCodePoint __fastcall bdJSONUtility::getCodePointFromJSON(const char *ptr)
{
  return ?getCodePointFromJSON@bdJSONUtility@@SA?AUbdJSONCodePoint@1@PEBD@Z(ptr);
}

/*
==============
bdJSONUtility::escapeString
==============
*/

int __fastcall bdJSONUtility::escapeString(const char *const input, char *const outBuffer, const unsigned int outBufferSz, const bool invalidUTF8ReplacePolicy)
{
  return ?escapeString@bdJSONUtility@@SAHQEBDQEADI_N@Z(input, outBuffer, outBufferSz, invalidUTF8ReplacePolicy);
}

/*
==============
bdJSONUtility::skipNumber
==============
*/

const char *__fastcall bdJSONUtility::skipNumber(const char *start, bool *isFloatingPoint)
{
  return ?skipNumber@bdJSONUtility@@SAPEBDPEBDPEA_N@Z(start, isFloatingPoint);
}

/*
==============
bdJSONUtility::skipSeparator
==============
*/

const char *__fastcall bdJSONUtility::skipSeparator(const char *start, const char separator)
{
  return ?skipSeparator@bdJSONUtility@@SAPEBDPEBDD@Z(start, separator);
}

/*
==============
bdJSONUtility::skipString
==============
*/

const char *__fastcall bdJSONUtility::skipString(const char *start)
{
  return ?skipString@bdJSONUtility@@SAPEBDPEBD@Z(start);
}

/*
==============
bdJSONUtility::skipObject
==============
*/

const char *__fastcall bdJSONUtility::skipObject(const char *start, unsigned int *count)
{
  return ?skipObject@bdJSONUtility@@SAPEBDPEBDPEAI@Z(start, count);
}

/*
==============
bdJSONUtility::skipValue
==============
*/

const char *__fastcall bdJSONUtility::skipValue(const char *start, bool logErrors)
{
  return ?skipValue@bdJSONUtility@@SAPEBDPEBD_N@Z(start, logErrors);
}

/*
==============
bdJSONUtility::deescapeString
==============
*/

int __fastcall bdJSONUtility::deescapeString(const char *const input, char *const outBuffer, const unsigned int outBufferSz)
{
  return ?deescapeString@bdJSONUtility@@SAHQEBDQEADI@Z(input, outBuffer, outBufferSz);
}

/*
==============
bdJSONUtility::deescapeString
==============
*/

int __fastcall bdJSONUtility::deescapeString(const char *const input, const unsigned int inputSz, char *const outBuffer, const unsigned int outBufferSz)
{
  return ?deescapeString@bdJSONUtility@@SAHQEBDIQEADI@Z(input, inputSz, outBuffer, outBufferSz);
}

/*
==============
bdJSONUtility::getCodePointFromUTF8
==============
*/

bdJSONUtility::bdJSONCodePoint __fastcall bdJSONUtility::getCodePointFromUTF8(const char *ptr)
{
  return ?getCodePointFromUTF8@bdJSONUtility@@SA?AUbdJSONCodePoint@1@PEBD@Z(ptr);
}

/*
==============
bdJSONUtility::deescapeString
==============
*/
__int64 bdJSONUtility::deescapeString(const char *const input, const unsigned int inputSz, char *const outBuffer, const unsigned int outBufferSz)
{
  __int64 v4; 
  int v9; 
  __int64 v10; 
  bdJSONUtility::bdJSONCodePoint v11; 
  unsigned int v12; 
  char v14; 
  bdJSONUtility::bdJSONCodePoint CodePointFromJSON; 

  v4 = 0i64;
  v9 = 0;
  LODWORD(v10) = 0;
  if ( !inputSz )
  {
LABEL_9:
    v12 = inputSz - v9;
    if ( outBuffer && outBufferSz && outBufferSz > v12 )
    {
      if ( v9 )
      {
        outBuffer[v12] = 0;
        if ( inputSz )
        {
          do
          {
            v14 = input[v4];
            if ( v14 == 92 )
            {
              LODWORD(v4) = v4 + 1;
              switch ( input[(unsigned int)v4] )
              {
                case 'b':
                  *outBuffer = 8;
                  break;
                case 'f':
                  *outBuffer = 12;
                  break;
                case 'n':
                  *outBuffer = 10;
                  break;
                case 'r':
                  *outBuffer = 13;
                  break;
                case 't':
                  *outBuffer = 9;
                  break;
                case 'u':
                  CodePointFromJSON = bdJSONUtility::getCodePointFromJSON(&input[(unsigned int)(v4 + 1)]);
                  if ( CodePointFromJSON.m_codePoint >= 0x80 )
                  {
                    if ( CodePointFromJSON.m_codePoint >= 0x800 )
                    {
                      if ( CodePointFromJSON.m_codePoint > 0xFFFF )
                      {
                        *outBuffer = (CodePointFromJSON.m_codePoint >> 18) & 7 | 0xF0;
                        outBuffer[1] = (CodePointFromJSON.m_codePoint >> 12) & 0x3F | 0x80;
                        outBuffer[2] = (CodePointFromJSON.m_codePoint >> 6) & 0x3F | 0x80;
                        outBuffer += 3;
                      }
                      else
                      {
                        *outBuffer = (CodePointFromJSON.m_codePoint >> 12) & 0xF | 0xE0;
                        outBuffer[1] = (CodePointFromJSON.m_codePoint >> 6) & 0x3F | 0x80;
                        outBuffer += 2;
                      }
                    }
                    else
                    {
                      *outBuffer++ = (CodePointFromJSON.m_codePoint >> 6) & 0x1F | 0xC0;
                    }
                    *outBuffer = CodePointFromJSON.m_codePoint & 0x3F | 0x80;
                    LODWORD(v4) = CodePointFromJSON.m_numRead + (_DWORD)v4;
                  }
                  else
                  {
                    *outBuffer = CodePointFromJSON.m_codePoint;
                    LODWORD(v4) = CodePointFromJSON.m_numRead + (_DWORD)v4;
                  }
                  break;
                default:
                  *outBuffer = input[(unsigned int)v4];
                  break;
              }
            }
            else
            {
              *outBuffer = v14;
            }
            v4 = (unsigned int)(v4 + 1);
            ++outBuffer;
          }
          while ( (unsigned int)v4 < inputSz );
        }
      }
      else
      {
        memcpy_0(outBuffer, input, (int)v12);
        outBuffer[v12] = 0;
      }
    }
    return v12;
  }
  while ( 1 )
  {
    if ( input[(unsigned int)v10] != 92 )
      goto LABEL_8;
    ++v9;
    v10 = (unsigned int)(v10 + 1);
    if ( input[v10] != 117 )
      goto LABEL_8;
    if ( (int)v10 + 4 > inputSz )
      break;
    v11 = bdJSONUtility::getCodePointFromJSON(&input[(unsigned int)(v10 + 1)]);
    if ( !v11.m_valid )
      return 0xFFFFFFFFi64;
    LODWORD(v10) = v11.m_numRead + (_DWORD)v10;
    v9 += 5 - v11.m_numReprBytes;
    if ( v11.m_codePoint > 0xFFFF )
      v9 += 6;
LABEL_8:
    LODWORD(v10) = v10 + 1;
    if ( (unsigned int)v10 >= inputSz )
      goto LABEL_9;
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::deescapeString", 0x1D8u, "Invalid JSON escaped Unicode CodePoint - Truncated");
  return 0xFFFFFFFFi64;
}

/*
==============
bdJSONUtility::deescapeString
==============
*/
int bdJSONUtility::deescapeString(const char *const input, char *const outBuffer, const unsigned int outBufferSz)
{
  __int64 v6; 

  bdHandleAssert(input != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v6 = -1i64;
  do
    ++v6;
  while ( input[v6] );
  return bdJSONUtility::deescapeString(input, v6, outBuffer, outBufferSz);
}

/*
==============
bdJSONUtility::escapeString
==============
*/
__int64 bdJSONUtility::escapeString(const char *const input, char *const outBuffer, const unsigned int outBufferSz, const bool invalidUTF8ReplacePolicy)
{
  __int64 v7; 
  char *v8; 
  int v9; 
  char v10; 
  unsigned int i; 
  char v12; 
  bdJSONUtility::bdJSONCodePoint CodePointFromUTF8; 
  char v14; 
  unsigned int v15; 
  __int64 v16; 
  char *v17; 
  int v18; 
  char *v19; 
  const char *v20; 
  char v21; 
  bdJSONUtility::bdJSONCodePoint v22; 
  __int16 m_codePoint; 
  char *format; 
  char m_numReprBytes; 

  v7 = -1i64;
  bdHandleAssert(input != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v7;
  while ( input[v7] );
  v8 = NULL;
  v9 = 0;
  v10 = 1;
  for ( i = 0; i < (unsigned int)v7; ++i )
  {
    v12 = input[i];
    if ( (unsigned __int8)(v12 - 32) > 0x5Fu )
    {
      if ( v12 == 11 || v12 <= 7 || v12 >= 14 )
      {
        if ( (unsigned __int8)v12 > 0x1Fu )
        {
          if ( (unsigned __int8)v12 > 0x7Fu )
          {
            CodePointFromUTF8 = bdJSONUtility::getCodePointFromUTF8(&input[i]);
            if ( !CodePointFromUTF8.m_valid )
            {
              bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::escapeString", 0x141u, "Invalid UTF-8 Codepoint");
              v10 = 0;
              break;
            }
            if ( CodePointFromUTF8.m_codePoint >= 0x10000 )
              CodePointFromUTF8.m_codePoint = 12;
            else
              CodePointFromUTF8.m_codePoint = 6;
            v9 += CodePointFromUTF8.m_codePoint - CodePointFromUTF8.m_numRead;
            i = i + CodePointFromUTF8.m_numRead - 1;
          }
        }
        else
        {
          v9 += 5;
        }
      }
      else
      {
        ++v9;
      }
    }
    else if ( v12 == 34 || v12 == 92 )
    {
      ++v9;
    }
  }
  v14 = 0;
  if ( v10 )
  {
    v15 = v9 + v7;
    goto LABEL_27;
  }
  if ( invalidUTF8ReplacePolicy )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::escapeString", 0x151u, "Replacing Invalid UTF8 with Base64");
    v15 = 4 * (((int)v7 + 2) / 3u) + 15;
    v14 = 1;
LABEL_27:
    if ( !outBuffer || !outBufferSz || outBufferSz <= v15 )
      return v15;
    if ( v14 )
    {
      if ( v15 )
      {
        v16 = v15;
        v17 = (char *)bdMemory::allocate(v15);
        v8 = v17;
        do
        {
          *v17++ = 0;
          --v16;
        }
        while ( v16 );
      }
      bdHandleAssert(v15 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      bdBase64::encode((const unsigned __int8 *)input, v7, v8, v15);
      bdHandleAssert(v15 != 0, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<char>::operator []", 0x50u, "bdFastArray<T>::operator[], rangecheck failed");
      v18 = bdSnprintf(outBuffer, (int)v15 + 1i64, "invalid-utf-8: %s", v8);
      bdMemory::deallocate(v8);
      goto LABEL_60;
    }
    if ( !v9 )
    {
      v18 = bdSnprintf(outBuffer, (int)v15 + 1i64, (const char *)&queryFormat, input);
      goto LABEL_60;
    }
    outBuffer[v15] = 0;
    v19 = outBuffer;
    if ( !(_DWORD)v7 )
    {
LABEL_59:
      v18 = (_DWORD)v19 - (_DWORD)outBuffer;
LABEL_60:
      LODWORD(format) = v18;
      bdHandleAssert(v18 == v15, "(bytesWritten == resultSize)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::escapeString", 0x1ADu, "Number of bytes written[%d] does not match the expected number of bytes[%d]", format, v15);
      if ( v18 != v15 )
        return (unsigned int)-1;
      return v15;
    }
    while ( 1 )
    {
      v20 = &input[(unsigned int)v8];
      v21 = *v20;
      if ( *v20 == 34 || v21 == 92 )
        break;
      if ( (unsigned __int8)(v21 - 32) > 0x5Fu )
      {
        switch ( v21 )
        {
          case 13:
            *(_WORD *)v19 = 29276;
            break;
          case 10:
            *(_WORD *)v19 = 28252;
            break;
          case 9:
            *(_WORD *)v19 = 29788;
            break;
          case 12:
            *(_WORD *)v19 = 26204;
            break;
          case 8:
            *(_WORD *)v19 = 25180;
            break;
          default:
            v22 = bdJSONUtility::getCodePointFromUTF8(&input[(unsigned int)v8]);
            m_numReprBytes = v22.m_numReprBytes;
            if ( v22.m_codePoint >= 0x10000 )
            {
              m_codePoint = v22.m_codePoint;
              bdSnprintf(v19, 7ui64, "\\u%04x", ((v22.m_codePoint - 0x10000) & 0xFFC00 | 0x3600000) >> 10);
              bdSnprintf(v19 + 6, 7ui64, "\\u%04x", m_codePoint & 0x3FF | 0xDC00u);
              v19 += 12;
            }
            else
            {
              bdSnprintf(v19, 7ui64, "\\u%04x", v22.m_codePoint);
              v19 += 6;
            }
            LODWORD(v8) = (_DWORD)v8 + m_numReprBytes - 1;
            goto LABEL_58;
        }
        goto LABEL_57;
      }
      *v19++ = v21;
LABEL_58:
      LODWORD(v8) = (_DWORD)v8 + 1;
      if ( (unsigned int)v8 >= (unsigned int)v7 )
        goto LABEL_59;
    }
    *v19 = 92;
    v19[1] = *v20;
LABEL_57:
    v19 += 2;
    goto LABEL_58;
  }
  return -1i64;
}

/*
==============
bdJSONUtility::getCodePointFromJSON
==============
*/
bdJSONUtility::bdJSONCodePoint bdJSONUtility::getCodePointFromJSON(const char *ptr)
{
  unsigned int v2; 
  __int16 v3; 
  __int64 v5; 
  char *EndPtr; 
  char v7[4]; 
  int v8; 

  v7[0] = *ptr;
  v7[1] = ptr[1];
  v7[2] = ptr[2];
  v7[3] = ptr[3];
  WORD2(v5) = 0;
  v8 = 0;
  v2 = strtol(v7, &EndPtr, 16);
  LODWORD(v5) = v2;
  if ( EndPtr == (char *)&v8 )
  {
    *(_WORD *)((char *)&v5 + 5) = 260;
    if ( (v2 & 0xFC00) == 55296 )
    {
      if ( ptr[4] != 92 || ptr[5] != 117 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::getCodePointFromJSON", 0x272u, "Error: getCodePointFromJSON(): Invalid UTF Surrogate-Pair - No tail");
        BYTE6(v5) = 0;
        return (bdJSONUtility::bdJSONCodePoint)v5;
      }
      *(_DWORD *)v7 = *(_DWORD *)(ptr + 6);
      v3 = strtol(v7, &EndPtr, 16);
      if ( EndPtr != (char *)&v8 || (v3 & 0xFC00) != 56320 )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::getCodePointFromJSON", 0x26Au, "Error: getCodePointFromJSON(): Invalid UTF Surrogate-Pair - Invalid tail [\"%s\"]", v7);
        LODWORD(v5) = 0;
        *(_WORD *)((char *)&v5 + 5) = 0;
        return (bdJSONUtility::bdJSONCodePoint)v5;
      }
      BYTE5(v5) = 10;
      v2 = (v3 & 0x3FF | ((v2 & 0x3FF) << 10)) + 0x10000;
      LODWORD(v5) = v2;
    }
    if ( v2 >= 0x80 )
    {
      if ( v2 >= 0x800 )
        BYTE4(v5) = (v2 > 0xFFFF) + 3;
      else
        BYTE4(v5) = 2;
    }
    else
    {
      BYTE4(v5) = 1;
    }
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::getCodePointFromJSON", 0x250u, "Error: getCodePointFromJSON(): Invalid 4 byte hex [\"%s\"]", v7);
    LODWORD(v5) = 0;
    BYTE6(v5) = 0;
  }
  return (bdJSONUtility::bdJSONCodePoint)v5;
}

/*
==============
bdJSONUtility::getCodePointFromUTF8
==============
*/
bdJSONUtility::bdJSONCodePoint bdJSONUtility::getCodePointFromUTF8(const char *ptr)
{
  unsigned __int8 v1; 
  char v3; 
  int v4; 
  char v5; 
  char v6; 
  char v7; 
  char v8; 
  char v9; 
  char v10; 
  __int64 v11; 

  v1 = *ptr;
  HIBYTE(v11) = 0;
  if ( *ptr < 0x80u )
  {
    LODWORD(v11) = v1;
    WORD2(v11) = 257;
    BYTE6(v11) = 1;
    return (bdJSONUtility::bdJSONCodePoint)v11;
  }
  if ( (v1 & 0xE0) == 0xC0 )
  {
    v3 = ptr[1];
    if ( (v3 & 0xC0) == 0x80 )
    {
      v4 = v1 & 0x1F;
      WORD2(v11) = 514;
      v5 = v3;
LABEL_6:
      BYTE6(v11) = 1;
      LODWORD(v11) = v5 & 0x3F | (v4 << 6);
      return (bdJSONUtility::bdJSONCodePoint)v11;
    }
  }
  else if ( (v1 & 0xF0) == 0xE0 )
  {
    v6 = ptr[1];
    if ( (v6 & 0xC0) == 0x80 )
    {
      v7 = ptr[2];
      if ( (v7 & 0xC0) == 0x80 )
      {
        v4 = v6 & 0x3F | ((v1 & 0xF) << 6);
        WORD2(v11) = 771;
        v5 = v7;
        goto LABEL_6;
      }
    }
  }
  else if ( (v1 & 0xF8) == 0xF0 )
  {
    v8 = ptr[1];
    if ( (v8 & 0xC0) == 0x80 )
    {
      v9 = ptr[2];
      if ( (v9 & 0xC0) == 0x80 )
      {
        v10 = ptr[3];
        if ( (v10 & 0xC0) == 0x80 )
        {
          WORD2(v11) = 1028;
          v4 = v9 & 0x3F | ((v8 & 0x3F | ((v1 & 7) << 6)) << 6);
          v5 = v10;
          goto LABEL_6;
        }
      }
    }
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::getCodePointFromUTF8", 0x2C5u, "Error: getCodePointFromUTF8() Invalid UTF-8 - cannot get code point");
  return 0i64;
}

/*
==============
bdJSONUtility::skipArray
==============
*/
char *bdJSONUtility::skipArray(const char *start, unsigned int *count)
{
  __int64 v3; 
  char *result; 
  char v5; 
  char v6; 
  const char *v7; 
  char v8; 
  char v9; 
  char v10; 
  const char *v11; 
  char v12; 
  char v13; 

  v3 = 0x100002600i64;
  if ( start )
  {
    while ( *start <= 0x20u && _bittest64(&v3, *start) )
      ++start;
  }
  if ( *start != 91 )
    return (char *)start;
  result = (char *)(start + 1);
  if ( count )
    *count = 0;
  v5 = *result;
  if ( *result )
  {
    v6 = *result;
    do
    {
      switch ( v6 )
      {
        case '"':
          v7 = result;
          v8 = *result;
          v9 = *result;
          if ( *result == 34 )
            v9 = result[1];
          ++result;
          if ( v8 != 34 )
            result = (char *)v7;
          for ( ; v9; v9 = *++result )
          {
            if ( v9 == 92 )
            {
              ++result;
            }
            else if ( v9 == 34 )
            {
              ++result;
              goto LABEL_53;
            }
          }
          break;
        case '[':
          result = (char *)bdJSONUtility::skipArray(result, NULL);
          break;
        case '{':
          while ( (unsigned __int8)v5 <= 0x20u && _bittest64(&v3, v5) )
            v5 = *++result;
          if ( *result == 123 )
          {
            v10 = *++result;
            if ( v10 )
            {
              do
              {
                switch ( v10 )
                {
                  case '"':
                    v11 = result;
                    v12 = *result;
                    v13 = *result;
                    if ( *result == 34 )
                      v13 = result[1];
                    ++result;
                    if ( v12 != 34 )
                      result = (char *)v11;
                    for ( ; v13; v13 = *++result )
                    {
                      if ( v13 == 92 )
                      {
                        ++result;
                      }
                      else if ( v13 == 34 )
                      {
                        ++result;
                        goto LABEL_47;
                      }
                    }
                    break;
                  case '[':
                    result = (char *)bdJSONUtility::skipArray(result, NULL);
                    break;
                  case '{':
                    result = (char *)bdJSONUtility::skipObject(result, NULL);
                    break;
                  default:
                    ++result;
                    if ( v10 == 125 )
                      goto LABEL_53;
                    break;
                }
LABEL_47:
                v10 = *result;
              }
              while ( *result );
            }
          }
          break;
        default:
          ++result;
          if ( v6 == 93 )
          {
            if ( count && *(result - 2) != 91 )
              ++*count;
            return result;
          }
          if ( v6 == 44 && count )
            ++*count;
          break;
      }
LABEL_53:
      v5 = *result;
      v6 = *result;
    }
    while ( *result );
  }
  return result;
}

/*
==============
bdJSONUtility::skipLiteral
==============
*/
const char *bdJSONUtility::skipLiteral(const char *start)
{
  int v1; 

  v1 = *(_DWORD *)start;
  if ( *(_DWORD *)start == *(_DWORD *)"true" || v1 == *(_DWORD *)"null" )
    return start + 4;
  if ( v1 == *(_DWORD *)"false" && start[4] == bdJSON::BD_JSON_FALSE_2[4] )
    return start + 5;
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::skipLiteral", 0xA9u, "Error: Encounterd invalid JSON literal[%s]", start);
  return start;
}

/*
==============
bdJSONUtility::skipNumber
==============
*/
char *bdJSONUtility::skipNumber(const char *start, bool *isFloatingPoint)
{
  char v3; 
  const char *v4; 
  char v5; 
  char *result; 
  char v7; 
  char i; 
  char v9; 

  v3 = *start;
  if ( *start == 45 )
    v3 = start[1];
  v4 = start + 1;
  if ( *start != 45 )
    v4 = start;
  if ( v3 == 48 )
  {
    v5 = v4[1];
    result = (char *)(v4 + 1);
  }
  else
  {
    v5 = v3;
    result = (char *)v4;
    if ( v3 >= 49 && v3 <= 57 )
    {
      v5 = v4[1];
      result = (char *)(v4 + 1);
      if ( v5 >= 48 )
      {
        v7 = v4[1];
        do
        {
          v5 = v7;
          if ( v7 > 57 )
            break;
          v5 = *++result;
          v7 = v5;
        }
        while ( v5 >= 48 );
      }
    }
  }
  if ( v5 == 46 )
  {
    if ( isFloatingPoint )
      *isFloatingPoint = 1;
    for ( i = *++result; i >= 48; i = *++result )
    {
      if ( i > 57 )
        break;
    }
  }
  else
  {
    if ( !isFloatingPoint )
      goto LABEL_23;
    *isFloatingPoint = 0;
  }
  v5 = *result;
LABEL_23:
  if ( ((v5 - 69) & 0xDF) == 0 )
  {
    v9 = *++result;
    if ( v9 == 43 || v9 == 45 )
      v9 = *++result;
    for ( ; v9 >= 48; v9 = *++result )
    {
      if ( v9 > 57 )
        break;
    }
  }
  return result;
}

/*
==============
bdJSONUtility::skipObject
==============
*/
char *bdJSONUtility::skipObject(const char *start, unsigned int *count)
{
  __int64 v3; 
  char *result; 
  char i; 
  const char *v6; 
  char v7; 
  char v8; 

  v3 = 0x100002600i64;
  if ( start )
  {
    while ( *start <= 0x20u && _bittest64(&v3, *start) )
      ++start;
  }
  if ( *start != 123 )
    return (char *)start;
  result = (char *)(start + 1);
  if ( count )
    *count = 0;
  for ( i = *result; *result; i = *result )
  {
    switch ( i )
    {
      case '"':
        v6 = result;
        v7 = *result;
        v8 = *result;
        if ( *result == 34 )
          v8 = result[1];
        ++result;
        if ( v7 != 34 )
          result = (char *)v6;
        for ( ; v8; ++result )
        {
          if ( v8 == 92 )
          {
            ++result;
          }
          else if ( v8 == 34 )
          {
            goto LABEL_28;
          }
          v8 = result[1];
        }
        break;
      case '[':
        result = (char *)bdJSONUtility::skipArray(result, NULL);
        break;
      case '{':
        result = (char *)bdJSONUtility::skipObject(result, NULL);
        break;
      case '}':
        ++result;
        return result;
      default:
        if ( i == 58 && count )
          ++*count;
LABEL_28:
        ++result;
        break;
    }
  }
  return result;
}

/*
==============
bdJSONUtility::skipSeparator
==============
*/
const char *bdJSONUtility::skipSeparator(const char *start, const char separator)
{
  __int64 v2; 
  const char *result; 

  if ( start )
  {
    v2 = 0x100002600i64;
    while ( *start <= 0x20u && _bittest64(&v2, *start) )
      ++start;
  }
  result = start + 1;
  if ( *start != separator )
    return start;
  return result;
}

/*
==============
bdJSONUtility::skipString
==============
*/
const char *bdJSONUtility::skipString(const char *start)
{
  const char *v1; 
  __int64 v2; 
  char v3; 
  const char *result; 

  v1 = start;
  if ( start )
  {
    v2 = 0x100002600i64;
    while ( *v1 <= 0x20u && _bittest64(&v2, *v1) )
      ++v1;
  }
  v3 = *v1;
  if ( *v1 == 34 )
    v3 = v1[1];
  result = v1 + 1;
  if ( *v1 != 34 )
    result = v1;
  for ( ; v3; v3 = *++result )
  {
    if ( v3 == 92 )
    {
      ++result;
    }
    else if ( v3 == 34 )
    {
      ++result;
      return result;
    }
  }
  return result;
}

/*
==============
bdJSONUtility::skipValue
==============
*/
const char *bdJSONUtility::skipValue(const char *start, bool logErrors)
{
  const char *v3; 
  __int64 v4; 
  const char *result; 
  int v6; 

  v3 = start;
  if ( start )
  {
    v4 = 0x100002600i64;
    while ( *v3 <= 0x20u && _bittest64(&v4, *v3) )
      ++v3;
  }
  switch ( *v3 )
  {
    case '"':
      result = bdJSONUtility::skipString(v3);
      break;
    case '-':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      result = bdJSONUtility::skipNumber(v3, NULL);
      break;
    case '[':
      result = bdJSONUtility::skipArray(v3, NULL);
      break;
    case 'f':
    case 'n':
    case 't':
      v6 = *(_DWORD *)v3;
      if ( *(_DWORD *)v3 == *(_DWORD *)"true" || v6 == *(_DWORD *)"null" )
      {
        result = v3 + 4;
      }
      else
      {
        if ( v6 != *(_DWORD *)"false" || v3[4] != bdJSON::BD_JSON_FALSE_2[4] )
        {
          bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::skipLiteral", 0xA9u, "Error: Encounterd invalid JSON literal[%s]", v3);
          goto LABEL_20;
        }
        result = v3 + 5;
      }
      break;
    case '{':
      result = bdJSONUtility::skipObject(v3, NULL);
      break;
    default:
      if ( logErrors )
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdJSON/bdJSONUtility", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdjson\\bdjsonutility.cpp", "bdJSONUtility::skipValue", 0x105u, "Error: Invalid JSON [%s]", start);
LABEL_20:
      result = v3;
      break;
  }
  return result;
}

