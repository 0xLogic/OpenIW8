/*
==============
utf16surrogates_to_utf32
==============
*/

int __fastcall utf16surrogates_to_utf32(wchar_t highSurrogate, wchar_t lowSurrogate)
{
  return ?utf16surrogates_to_utf32@@YAH_W0@Z(highSurrogate, lowSurrogate);
}

/*
==============
str_utf8to16
==============
*/

bool __fastcall str_utf8to16(const char *in, wchar_t *out, int outlen)
{
  return ?str_utf8to16@@YA_NPEBDPEA_WH@Z(in, out, outlen);
}

/*
==============
utf32_to_utf8
==============
*/

char *__fastcall utf32_to_utf8(int in, char *out, int len)
{
  return ?utf32_to_utf8@@YAPEADHPEADH@Z(in, out, len);
}

/*
==============
str_utf16to8
==============
*/

bool __fastcall str_utf16to8(const wchar_t *in, char *out, int outlen)
{
  return ?str_utf16to8@@YA_NPEB_WPEADH@Z(in, out, outlen);
}

/*
==============
utf8_to_utf32
==============
*/

const char *__fastcall utf8_to_utf32(const char *in, int len, int *result)
{
  return ?utf8_to_utf32@@YAPEBDPEBDHPEAH@Z(in, len, result);
}

/*
==============
str_utf16to8
==============
*/
bool str_utf16to8(const wchar_t *in, char *out, int outlen)
{
  __int64 v3; 
  wchar_t v4; 
  wchar_t v5; 
  char *v6; 
  const wchar_t *v7; 
  char *v8; 
  int v9; 
  signed int v10; 
  int v11; 
  char *v12; 
  char *v13; 
  __int64 v14; 
  char v15; 
  bool result; 

  v3 = outlen;
  v4 = 0;
  v5 = *in;
  v6 = out;
  v7 = in;
  v8 = &out[v3 - 1];
  if ( *in )
  {
    do
    {
      if ( v6 >= v8 )
        break;
      if ( (unsigned __int16)(v5 + 10240) > 0x3FFu )
      {
        v9 = (unsigned __int16)(v5 + 9216) > 0x3FFu ? v5 : v5 + ((v4 - 55287) << 10);
        v10 = 32 - __lzcnt(v9);
        if ( v10 > 7 )
        {
          v11 = (v10 - 2) / 5;
          if ( v11 < (int)v8 - (int)v6 )
          {
            v12 = &v6[v11];
            v13 = v12 + 1;
            if ( v11 > 0 )
            {
              v14 = (unsigned int)v11;
              do
              {
                v15 = v9;
                v9 >>= 6;
                *v12-- = v15 & 0x3F | 0x80;
                --v14;
              }
              while ( v14 );
            }
            if ( v12 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_utf.cpp", 95, ASSERT_TYPE_ASSERT, "(p == out)", (const char *)&queryFormat, "p == out") )
              __debugbreak();
            v6 = v13;
            *v12 = v9 | (-4 << (5 - v11));
          }
        }
        else
        {
          *v6++ = v9 & 0x7F;
        }
      }
      else
      {
        v4 = v5;
      }
      v5 = v7[1];
      ++v7;
    }
    while ( v5 );
    result = 1;
    *v6 = 0;
  }
  else
  {
    *out = 0;
    return 1;
  }
  return result;
}

/*
==============
str_utf8to16
==============
*/
__int64 str_utf8to16(const char *in, wchar_t *out, int outlen)
{
  const char *v5; 
  wchar_t *v6; 
  const char *v7; 
  wchar_t v8; 
  wchar_t v9; 
  __int64 result; 
  wchar_t high; 
  wchar_t low; 

  v5 = in;
  while ( *v5 )
  {
    v6 = out;
    if ( outlen <= 1 )
      break;
    v7 = utf8_to_utf16(v5, 6, &high, &low);
    v8 = low;
    v5 = v7;
    v9 = high;
    --outlen;
    *out++ = high;
    if ( v8 )
    {
      if ( (unsigned __int16)(v9 + 10240) > 0x3FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_utf.cpp", 144, ASSERT_TYPE_ASSERT, "(is_utf16_high_surrogate( high ))", (const char *)&queryFormat, "is_utf16_high_surrogate( high )") )
        __debugbreak();
      if ( (unsigned __int16)(v8 + 9216) > 0x3FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_utf.cpp", 145, ASSERT_TYPE_ASSERT, "(is_utf16_low_surrogate( low ))", (const char *)&queryFormat, "is_utf16_low_surrogate( low )") )
        __debugbreak();
      if ( outlen <= 1 )
      {
        out = v6;
        break;
      }
      --outlen;
      *out++ = v8;
    }
  }
  result = 1i64;
  *out = 0;
  return result;
}

/*
==============
utf16surrogates_to_utf32
==============
*/
__int64 utf16surrogates_to_utf32(wchar_t highSurrogate, wchar_t lowSurrogate)
{
  return lowSurrogate + (((unsigned int)highSurrogate - 55287) << 10);
}

/*
==============
utf32_to_utf8
==============
*/
char *utf32_to_utf8(int in, char *out, int len)
{
  int v3; 
  signed int v4; 
  char *result; 
  int v6; 
  char *v7; 
  char *v8; 
  __int64 v9; 
  char v10; 

  v3 = in;
  v4 = 32 - __lzcnt(in);
  if ( v4 > 7 )
  {
    v6 = (v4 - 2) / 5;
    if ( v6 + 1 <= len )
    {
      v7 = &out[v6];
      v8 = v7 + 1;
      if ( v6 > 0 )
      {
        v9 = (unsigned int)v6;
        do
        {
          v10 = v3;
          v3 >>= 6;
          *v7-- = v10 & 0x3F | 0x80;
          --v9;
        }
        while ( v9 );
      }
      if ( v7 != out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_utf.cpp", 95, ASSERT_TYPE_ASSERT, "(p == out)", (const char *)&queryFormat, "p == out") )
        __debugbreak();
      result = v8;
      *v7 = v3 | (-4 << (5 - v6));
    }
    else
    {
      return out;
    }
  }
  else
  {
    result = out + 1;
    *out = v3 & 0x7F;
  }
  return result;
}

/*
==============
utf8_to_utf16
==============
*/
const char *utf8_to_utf16(const char *in, int len, wchar_t *high, wchar_t *low)
{
  const char *v4; 
  char v5; 
  int v6; 
  int v7; 
  int i; 
  int v9; 
  __int16 v10; 
  int v11; 

  v4 = in;
  v5 = *in;
  if ( (v5 & 0xFE) == 0xFC )
  {
    v6 = 6;
    v7 = v5 & 1;
  }
  else if ( (v5 & 0xFC) == 0xF8 )
  {
    v6 = 5;
    v7 = v5 & 3;
  }
  else if ( (v5 & 0xF8) == 0xF0 )
  {
    v6 = 4;
    v7 = v5 & 7;
  }
  else if ( (v5 & 0xF0) == 0xE0 )
  {
    v6 = 3;
    v7 = v5 & 0xF;
  }
  else if ( (v5 & 0xE0) == 0xC0 )
  {
    v6 = 2;
    v7 = v5 & 0x1F;
  }
  else
  {
    if ( v5 < 0 )
    {
LABEL_22:
      LOWORD(v7) = 0;
LABEL_23:
      *high = v7;
      *low = 0;
      return v4;
    }
    v6 = 1;
    v7 = v5;
  }
  if ( v6 > len )
    goto LABEL_22;
  ++v4;
  for ( i = v6 - 1; i; --i )
  {
    if ( (*v4 & 0xC0) == 0x80 )
      v7 = (v7 << 6) | *v4 & 0x3F;
    ++v4;
  }
  if ( v7 < 0xFFFF )
    goto LABEL_23;
  v10 = (v7 - 0x10000) >> 31;
  v9 = v7 - 0x10000;
  v11 = v10 & 0x3FF;
  *high = ((v11 + v9) >> 10) - 10240;
  LOWORD(v9) = ((v11 + v9) & 0x3FF) - v11 - 9216;
  *low = v9;
  if ( !(_WORD)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_utf.cpp", 117, ASSERT_TYPE_ASSERT, "(*low != 0)", (const char *)&queryFormat, "*low != 0") )
  {
    __debugbreak();
    return v4;
  }
  return v4;
}

/*
==============
utf8_to_utf32
==============
*/
const char *utf8_to_utf32(const char *in, int len, int *result)
{
  char v4; 
  int v5; 
  int v6; 
  const char *v7; 
  int i; 

  v4 = *in;
  if ( (v4 & 0xFE) == 0xFC )
  {
    v5 = 6;
    v6 = v4 & 1;
  }
  else if ( (v4 & 0xFC) == 0xF8 )
  {
    v5 = 5;
    v6 = v4 & 3;
  }
  else if ( (v4 & 0xF8) == 0xF0 )
  {
    v5 = 4;
    v6 = v4 & 7;
  }
  else if ( (v4 & 0xF0) == 0xE0 )
  {
    v5 = 3;
    v6 = v4 & 0xF;
  }
  else if ( (v4 & 0xE0) == 0xC0 )
  {
    v5 = 2;
    v6 = v4 & 0x1F;
  }
  else
  {
    if ( v4 < 0 )
    {
LABEL_19:
      *result = 0;
      return in;
    }
    v5 = 1;
    v6 = v4;
  }
  if ( v5 > len )
    goto LABEL_19;
  v7 = in + 1;
  for ( i = v5 - 1; i; --i )
  {
    if ( (*v7 & 0xC0) == 0x80 )
      v6 = (v6 << 6) | *v7 & 0x3F;
    ++v7;
  }
  *result = v6;
  return v7;
}

