/*
==============
Com_Unicode_UTF8Encode
==============
*/

int __fastcall Com_Unicode_UTF8Encode(int unicodeChar, char *destText, unsigned __int64 bytesAvailable)
{
  return ?Com_Unicode_UTF8Encode@@YAHHPEAD_K@Z(unicodeChar, destText, bytesAvailable);
}

/*
==============
GetGlyphFromUTF8
==============
*/

int __fastcall GetGlyphFromUTF8(const unsigned __int8 *utf8Stream, int *numBytesConsumed)
{
  return ?GetGlyphFromUTF8@@YAHPEBEPEAH@Z(utf8Stream, numBytesConsumed);
}

/*
==============
Com_UTF8_ToUpperCase
==============
*/

int __fastcall Com_UTF8_ToUpperCase(const char *input, char *output, int bytesAvailable)
{
  return ?Com_UTF8_ToUpperCase@@YAHPEBDPEADH@Z(input, output, bytesAvailable);
}

/*
==============
Com_UTF8_TruncateToGlyphCount
==============
*/

bool __fastcall Com_UTF8_TruncateToGlyphCount(const char *input, char *output, int bytesAvailable, int glyphsAvailable, unsigned __int64 *outBytesWritten)
{
  return ?Com_UTF8_TruncateToGlyphCount@@YA_NPEBDPEADHHPEA_K@Z(input, output, bytesAvailable, glyphsAvailable, outBytesWritten);
}

/*
==============
Com_UTF8_TruncateToGlyphCount
==============
*/
__int64 Com_UTF8_TruncateToGlyphCount(const char *input, char *output, int bytesAvailable, int glyphsAvailable, unsigned __int64 *outBytesWritten)
{
  unsigned __int8 v5; 
  char v10; 
  unsigned int v11; 
  char *v12; 
  bool v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 result; 

  v5 = 0;
  if ( bytesAvailable <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 236, ASSERT_TYPE_ASSERT, "(bytesAvailable > 0)", (const char *)&queryFormat, "bytesAvailable > 0") )
    __debugbreak();
  if ( glyphsAvailable <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 237, ASSERT_TYPE_ASSERT, "(glyphsAvailable > 0)", (const char *)&queryFormat, "glyphsAvailable > 0") )
    __debugbreak();
  v10 = *input;
  v11 = bytesAvailable - 4;
  v12 = output;
  v13 = *input < 0;
  if ( *input )
  {
    while ( 1 )
    {
      if ( v13 )
      {
        if ( (v10 & 0xE0) == 0xC0 )
        {
          if ( (input[1] & 0x7F | ((unsigned __int8)(v10 & 0x1F) << 6)) < 0x80u )
            goto LABEL_29;
          v14 = 2;
        }
        else if ( (v10 & 0xF0) == 0xE0 )
        {
          v15 = input[2] & 0x7F | ((input[1] & 0x7F | ((v10 & 0xF) << 6)) << 6);
          if ( v15 - 2048 > 0xCFFF && v15 < 0xE000 )
            goto LABEL_29;
          v14 = 3;
        }
        else
        {
          if ( (v10 & 0xF8) != 0xF0 || (((input[2] & 0x7F | ((input[1] & 0x7F | ((v10 & 7) << 6)) << 6)) << 6) | input[3] & 0x7Fu) - 0x10000 > 0xFFFFE )
            goto LABEL_29;
          v14 = 4;
        }
      }
      else
      {
        v14 = 1;
      }
      v16 = v11 - v14;
      if ( (int)(v11 - v14) < 0 )
      {
        v5 = 1;
        goto LABEL_29;
      }
      v17 = v14;
      memcpy_0(v12, input, v14);
      v12 += v17;
      input += v17;
      if ( !--glyphsAvailable )
      {
        if ( *input )
          break;
      }
      v10 = *input;
      v11 = v16;
      v13 = *input < 0;
      if ( !*input )
        goto LABEL_29;
    }
    v18 = 0i64;
    v5 = 1;
    if ( v11 >= 3 )
    {
      *(_WORD *)v12 = -32542;
      v18 = 3i64;
      v12[2] = -90;
    }
    v12 += v18;
  }
LABEL_29:
  result = v5;
  *v12 = 0;
  if ( outBytesWritten )
    *outBytesWritten = v12 - output + 1;
  return result;
}

/*
==============
GetGlyphFromUTF8
==============
*/
__int64 GetGlyphFromUTF8(const unsigned __int8 *utf8Stream, int *numBytesConsumed)
{
  unsigned __int8 v4; 
  unsigned int v5; 

  if ( !utf8Stream && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 134, ASSERT_TYPE_ASSERT, "(utf8Stream)", (const char *)&queryFormat, "utf8Stream") )
    __debugbreak();
  if ( !numBytesConsumed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 135, ASSERT_TYPE_ASSERT, "(numBytesConsumed)", (const char *)&queryFormat, "numBytesConsumed") )
    __debugbreak();
  *numBytesConsumed = 0;
  v4 = *utf8Stream;
  if ( *(char *)utf8Stream < 0 )
  {
    if ( (v4 & 0xE0) == 0xC0 )
    {
      v5 = utf8Stream[1] & 0x7F | ((v4 & 0x1F) << 6);
      if ( v5 >= 0x80 )
      {
        *numBytesConsumed = 2;
        goto LABEL_19;
      }
    }
    else if ( (v4 & 0xF0) == 0xE0 )
    {
      v5 = utf8Stream[2] & 0x7F | ((utf8Stream[1] & 0x7F | ((v4 & 0xF) << 6)) << 6);
      if ( v5 - 2048 <= 0xCFFF || v5 >= 0xE000 )
      {
        *numBytesConsumed = 3;
        goto LABEL_19;
      }
    }
    else if ( (v4 & 0xF8) == 0xF0 )
    {
      v5 = utf8Stream[3] & 0x7F | ((utf8Stream[2] & 0x7F | ((utf8Stream[1] & 0x7F | ((v4 & 7) << 6)) << 6)) << 6);
      if ( v5 - 0x10000 <= 0xFFFFE )
      {
        *numBytesConsumed = 4;
        goto LABEL_19;
      }
    }
    return 0xFFFFFFFFi64;
  }
  v5 = v4;
  *numBytesConsumed = 1;
LABEL_19:
  if ( v5 > 0xFFFF )
    return 32;
  return v5;
}

/*
==============
Com_UTF8_ToUpperCase
==============
*/
__int64 Com_UTF8_ToUpperCase(const char *input, char *output, int bytesAvailable)
{
  char *v4; 
  char v6; 
  unsigned int v7; 
  char *v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v14; 

  v14 = (int)output;
  v4 = output;
  if ( bytesAvailable <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 203, ASSERT_TYPE_ASSERT, "(bytesAvailable > 0)", (const char *)&queryFormat, "bytesAvailable > 0") )
    __debugbreak();
  v6 = *input;
  v7 = bytesAvailable - 1;
  v8 = v4;
  if ( *input )
  {
    v9 = 16777221;
    while ( 1 )
    {
      v10 = -1;
      if ( v6 < 0 )
      {
        if ( (v6 & 0xE0) == 0xC0 )
        {
          v10 = input[1] & 0x7F | ((v6 & 0x1F) << 6);
          if ( (unsigned int)v10 < 0x80 )
            goto LABEL_20;
          v11 = 2;
        }
        else if ( (v6 & 0xF0) == 0xE0 )
        {
          v10 = input[2] & 0x7F | ((input[1] & 0x7F | ((v6 & 0xF) << 6)) << 6);
          if ( (unsigned int)(v10 - 2048) > 0xCFFF && (unsigned int)v10 < 0xE000 )
          {
LABEL_20:
            v11 = 0;
LABEL_21:
            v10 = -1;
            goto LABEL_22;
          }
          v11 = 3;
        }
        else
        {
          v11 = 0;
          if ( (v6 & 0xF8) != 0xF0 )
            goto LABEL_22;
          v10 = input[3] & 0x7F | ((input[2] & 0x7F | ((input[1] & 0x7F | ((v6 & 7) << 6)) << 6)) << 6);
          if ( (unsigned int)(v10 - 0x10000) > 0xFFFFE )
            goto LABEL_21;
          v11 = 4;
        }
      }
      else
      {
        v10 = (unsigned __int8)v6;
        v11 = 1;
      }
      if ( (unsigned int)v10 > 0xFFFF )
        v10 = 32;
LABEL_22:
      input += v11;
      if ( (unsigned int)(v10 - 97) > 0x19 )
      {
        if ( (unsigned int)(v10 - 1072) > 0x1F )
        {
          if ( (unsigned int)(v10 - 224) > 0x1E || v10 == 247 )
          {
            if ( (unsigned int)(v10 - 259) <= 0x34 && v10 % 2 == 1 && v10 != 305 || (unsigned int)(v10 - 314) <= 0xE && (v10 & 1) == 0 || (unsigned int)(v10 - 331) <= 0x2C && v10 % 2 == 1 || (unsigned int)(v10 - 378) <= 0x18 && _bittest(&v9, v10 - 378) )
              --v10;
          }
          else
          {
            v10 -= 32;
          }
        }
        else
        {
          v10 -= 32;
        }
      }
      else
      {
        v10 -= 32;
      }
      if ( v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 73, ASSERT_TYPE_ASSERT, "(unicodeChar >= 0)", (const char *)&queryFormat, "unicodeChar >= 0") )
        __debugbreak();
      if ( v10 > 127 )
      {
        if ( v10 > 2047 )
        {
          if ( v10 > 0xFFFF )
          {
            if ( v10 > 0x1FFFFF || v7 < 4 )
            {
LABEL_55:
              LODWORD(v4) = v14;
              break;
            }
            v12 = 4;
            *v8 = ((v10 >> 18) & 7) - 16;
            v8[1] = ((v10 >> 12) & 0x3F) + 0x80;
            v8[2] = ((v10 >> 6) & 0x3F) + 0x80;
            v8[3] = (v10 & 0x3F) + 0x80;
          }
          else
          {
            if ( v7 < 3 )
              goto LABEL_55;
            v12 = 3;
            *v8 = ((v10 >> 12) & 0xF) - 32;
            v8[1] = ((v10 >> 6) & 0x3F) + 0x80;
            v8[2] = (v10 & 0x3F) + 0x80;
          }
        }
        else
        {
          if ( v7 < 2 )
            goto LABEL_55;
          v12 = 2;
          *v8 = ((v10 >> 6) & 0x1F) - 64;
          v8[1] = (v10 & 0x3F) + 0x80;
        }
      }
      else
      {
        if ( !v7 )
          goto LABEL_55;
        v12 = 1;
        *v8 = v10 & 0x7F;
      }
      v6 = *input;
      v7 -= v12;
      v8 += v12;
      if ( !*input )
        goto LABEL_55;
    }
  }
  *v8 = 0;
  return (unsigned int)((_DWORD)v8 - (_DWORD)v4 + 1);
}

/*
==============
Com_Unicode_UTF8Encode
==============
*/
__int64 Com_Unicode_UTF8Encode(int unicodeChar, char *destText, unsigned __int64 bytesAvailable)
{
  __int64 result; 

  if ( unicodeChar < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 73, ASSERT_TYPE_ASSERT, "(unicodeChar >= 0)", (const char *)&queryFormat, "unicodeChar >= 0") )
    __debugbreak();
  result = 0i64;
  if ( unicodeChar > 127 )
  {
    if ( unicodeChar > 2047 )
    {
      if ( unicodeChar > 0xFFFF )
      {
        if ( unicodeChar <= 0x1FFFFF && bytesAvailable >= 4 )
        {
          *destText = ((unicodeChar >> 18) & 7) - 16;
          destText[1] = ((unicodeChar >> 12) & 0x3F) + 0x80;
          destText[2] = ((unicodeChar >> 6) & 0x3F) + 0x80;
          destText[3] = (unicodeChar & 0x3F) + 0x80;
          return 4i64;
        }
      }
      else if ( bytesAvailable >= 3 )
      {
        *destText = ((unicodeChar >> 12) & 0xF) - 32;
        destText[1] = ((unicodeChar >> 6) & 0x3F) + 0x80;
        destText[2] = (unicodeChar & 0x3F) + 0x80;
        return 3i64;
      }
    }
    else if ( bytesAvailable >= 2 )
    {
      *destText = ((unicodeChar >> 6) & 0x1F) - 64;
      destText[1] = (unicodeChar & 0x3F) + 0x80;
      return 2i64;
    }
  }
  else if ( bytesAvailable )
  {
    result = 1i64;
    *destText = unicodeChar & 0x7F;
  }
  return result;
}

