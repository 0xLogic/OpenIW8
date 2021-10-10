/*
==============
uJson::byte_size
==============
*/

unsigned __int64 __fastcall uJson::byte_size(uJson *this)
{
  return ?byte_size@uJson@@QEBA_KXZ(this);
}

/*
==============
uJson::unpack
==============
*/

int uJson::unpack(uJson *this, const char *fmt, ...)
{
  return ?unpack@uJson@@QEAAHPEBDZZ(this, fmt);
}

/*
==============
uJson::array_size
==============
*/

unsigned int __fastcall uJson::array_size(uJson *this)
{
  return ?array_size@uJson@@QEBAIXZ(this);
}

/*
==============
uJson::object_iter::operator++
==============
*/

uJson::object_iter *__fastcall uJson::object_iter::operator++(uJson::object_iter *this, uJson::object_iter *result)
{
  return ??Eobject_iter@uJson@@QEAA?AU01@XZ(this, result);
}

/*
==============
uJson::operator[]
==============
*/

uJson *__fastcall uJson::operator[](uJson *this, uJson *result, const char *str)
{
  return ??AuJson@@QEBA?AU0@PEBD@Z(this, result, str);
}

/*
==============
uJson::as_int64
==============
*/

__int64 __fastcall uJson::as_int64(uJson *this)
{
  return ?as_int64@uJson@@QEBA_JXZ(this);
}

/*
==============
uJson::operator[]
==============
*/

uJson *__fastcall uJson::operator[](uJson *this, uJson *result, unsigned int idx)
{
  return ??AuJson@@QEBA?AU0@I@Z(this, result, idx);
}

/*
==============
uJsonDecodeInPlace
==============
*/

uJson *__fastcall uJsonDecodeInPlace(uJson *result, char *str)
{
  return ?uJsonDecodeInPlace@@YA?AUuJson@@PEAD@Z(result, str);
}

/*
==============
uJson::object_end
==============
*/

uJson::object_iter *__fastcall uJson::object_end(uJson *this, uJson::object_iter *result)
{
  return ?object_end@uJson@@QEBA?AUobject_iter@1@XZ(this, result);
}

/*
==============
uJson::object_size
==============
*/

unsigned int __fastcall uJson::object_size(uJson *this)
{
  return ?object_size@uJson@@QEBAIXZ(this);
}

/*
==============
uJson::array_begin
==============
*/

uJson::array_iter *__fastcall uJson::array_begin(uJson *this, uJson::array_iter *result)
{
  return ?array_begin@uJson@@QEBA?AUarray_iter@1@XZ(this, result);
}

/*
==============
uJson::object_iter::as_void_ptr
==============
*/

const void *__fastcall uJson::object_iter::as_void_ptr(uJson::object_iter *this)
{
  return ?as_void_ptr@object_iter@uJson@@QEAAPEBXXZ(this);
}

/*
==============
uJson::object_begin
==============
*/

uJson::object_iter *__fastcall uJson::object_begin(uJson *this, uJson::object_iter *result)
{
  return ?object_begin@uJson@@QEBA?AUobject_iter@1@XZ(this, result);
}

/*
==============
uJson::is_integer
==============
*/

bool __fastcall uJson::is_integer(uJson *this)
{
  return ?is_integer@uJson@@QEBA_NXZ(this);
}

/*
==============
uJson::as_real
==============
*/

long double __fastcall uJson::as_real(uJson *this)
{
  return ?as_real@uJson@@QEBANXZ(this);
}

/*
==============
uJson::is_real
==============
*/

bool __fastcall uJson::is_real(uJson *this)
{
  return ?is_real@uJson@@QEBA_NXZ(this);
}

/*
==============
uJsonUnpack
==============
*/

int uJsonUnpack(uJson json, const char *fmt, ...)
{
  return ?uJsonUnpack@@YAHUuJson@@PEBDZZ(json, fmt);
}

/*
==============
uJson::skip
==============
*/

void __fastcall uJson::skip(uJson *this)
{
  ?skip@uJson@@AEAAXXZ(this);
}

/*
==============
uJson::array_end
==============
*/

uJson::array_iter *__fastcall uJson::array_end(uJson *this, uJson::array_iter *result)
{
  return ?array_end@uJson@@QEBA?AUarray_iter@1@XZ(this, result);
}

/*
==============
uJson::uJson
==============
*/

void __fastcall uJson::uJson(uJson *this)
{
  ??0uJson@@QEAA@XZ(this);
}

/*
==============
uJson::c_str
==============
*/

const char *__fastcall uJson::c_str(uJson *this)
{
  return ?c_str@uJson@@QEBAPEBDXZ(this);
}

/*
==============
uJsonUnpack_va
==============
*/

int __fastcall uJsonUnpack_va(uJson json, const char *fmt, char *vl)
{
  return ?uJsonUnpack_va@@YAHUuJson@@PEBDPEAD@Z(json, fmt, vl);
}

/*
==============
uJson::object_iter::set_from_void_ptr
==============
*/

void __fastcall uJson::object_iter::set_from_void_ptr(uJson::object_iter *this, const void *p)
{
  ?set_from_void_ptr@object_iter@uJson@@QEAAXPEBX@Z(this, p);
}

/*
==============
uJson::array_iter::operator++
==============
*/

uJson::array_iter *__fastcall uJson::array_iter::operator++(uJson::array_iter *this, uJson::array_iter *result)
{
  return ??Earray_iter@uJson@@QEAA?AU01@XZ(this, result);
}

/*
==============
uJson::uJson
==============
*/
void uJson::uJson(uJson *this)
{
  this->data = "\a";
}

/*
==============
uJson::operator[]
==============
*/
uJson *uJson::operator[](uJson *this, uJson *result, unsigned int idx)
{
  const char *data; 
  char v6; 
  const char *v7; 
  int v8; 
  char v9; 
  const char *v10; 
  const char *v11; 

  data = this->data;
  v6 = *this->data;
  if ( v6 >= 8 )
    goto LABEL_15;
  if ( v6 != 2 )
    goto LABEL_15;
  v7 = data + 1;
  if ( data[1] == 4 )
    goto LABEL_15;
  while ( idx )
  {
    v8 = 0;
    if ( (*v7 & 0xFA) != 0 || *v7 == 4 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
            break;
LABEL_11:
          v11 = v7++;
          if ( !v8 )
          {
            v7 = v11;
            goto LABEL_13;
          }
        }
        v10 = v7++;
        if ( (unsigned __int8)(v9 - 2) <= 1u )
        {
          ++v8;
        }
        else if ( v9 == 4 )
        {
          --v8;
          v7 = v10;
          goto LABEL_11;
        }
      }
    }
LABEL_13:
    ++v7;
    --idx;
    if ( *v7 == 4 )
      break;
  }
  if ( *v7 == 4 )
LABEL_15:
    v7 = "\a";
  result->data = v7;
  return result;
}

/*
==============
uJson::operator[]
==============
*/
uJson *uJson::operator[](uJson *this, uJson *result, const char *str)
{
  const char *data; 
  char v6; 
  char v7; 
  const char *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  int v16; 
  int v17; 
  int v18; 
  char v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  int v23; 
  char v24; 
  const char *v25; 
  char v26; 
  const char *v27; 
  char v29; 
  const char *v30; 

  data = this->data;
  v6 = *this->data;
  if ( v6 >= 8 || v6 != 3 || (v7 = data[1], v8 = data + 1, v7 == 4) )
  {
LABEL_38:
    result->data = "\a";
    return result;
  }
  v9 = 0;
LABEL_5:
  v10 = 8;
  if ( v7 < 8 )
    v10 = v7;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 4;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 2 )
            v14 = v8;
          else
            v14 = (char *)&queryFormat.fmt + 3;
        }
        else
        {
          v14 = v8 + 1;
        }
      }
      else
      {
        v14 = "null";
      }
    }
    else
    {
      v14 = "true";
    }
  }
  else
  {
    v14 = "false";
  }
  v15 = (const char *)(str - v14);
  do
  {
    v16 = (unsigned __int8)v15[(_QWORD)v14];
    v17 = *(unsigned __int8 *)v14 - v16;
    if ( v17 )
      break;
    ++v14;
  }
  while ( v16 );
  if ( v17 )
  {
    v18 = 0;
    if ( (v7 & 0xFA) != 0 )
    {
      while ( 1 )
      {
        v19 = *v8;
        if ( !*v8 )
          goto LABEL_27;
        while ( 1 )
        {
          v20 = v8++;
          if ( (unsigned __int8)(v19 - 2) <= 1u )
          {
            ++v18;
            goto LABEL_40;
          }
          if ( v19 == 4 )
            break;
LABEL_40:
          v19 = *v8;
          if ( !*v8 )
            goto LABEL_27;
        }
        --v18;
        v8 = v20;
LABEL_27:
        v21 = v8++;
        if ( !v18 )
        {
          v8 = v21;
          break;
        }
      }
    }
    v22 = v8 + 1;
    v23 = 0;
    v24 = v8[1];
    if ( (v24 & 0xFA) == 0 && v24 != 4 )
      goto LABEL_37;
    v25 = v22;
LABEL_32:
    v26 = *v25;
    if ( !*v25 )
      goto LABEL_36;
    while ( 1 )
    {
      v27 = v25++;
      if ( (unsigned __int8)(v26 - 2) <= 1u )
      {
        ++v23;
      }
      else if ( v26 == 4 )
      {
        --v23;
        v25 = v27;
LABEL_36:
        v22 = v25++;
        if ( !v23 )
        {
LABEL_37:
          v7 = v22[1];
          v8 = v22 + 1;
          if ( v7 == 4 )
            goto LABEL_38;
          goto LABEL_5;
        }
        goto LABEL_32;
      }
      v26 = *v25;
      if ( !*v25 )
        goto LABEL_36;
    }
  }
  if ( (v7 & 0xFA) == 0 )
  {
    result->data = v8 + 1;
    return result;
  }
  do
  {
    v29 = *v8;
    if ( !*v8 )
      goto LABEL_51;
    while ( 1 )
    {
      v30 = v8++;
      if ( (unsigned __int8)(v29 - 2) <= 1u )
      {
        ++v9;
        goto LABEL_54;
      }
      if ( v29 == 4 )
        break;
LABEL_54:
      v29 = *v8;
      if ( !*v8 )
        goto LABEL_51;
    }
    --v9;
    v8 = v30;
LABEL_51:
    ++v8;
  }
  while ( v9 );
  result->data = v8;
  return result;
}

/*
==============
uJson::array_iter::operator++
==============
*/
uJson::array_iter *uJson::array_iter::operator++(uJson::array_iter *this, uJson::array_iter *result)
{
  const char *data; 
  char v5; 

  data = this->data;
  v5 = *this->data;
  if ( v5 == 4 || v5 == 7 )
  {
    result->data = data;
    return result;
  }
  else
  {
    uJson::skip(this);
    result->data = this->data;
    return result;
  }
}

/*
==============
uJson::object_iter::operator++
==============
*/
uJson::object_iter *uJson::object_iter::operator++(uJson::object_iter *this, uJson::object_iter *result)
{
  char v4; 
  const char *data; 
  uJson::object_iter *v6; 

  v4 = *this->first.data;
  if ( v4 != 4 && v4 != 7 )
  {
    data = this->second.data;
    this->first.data = data;
    if ( *data != 4 )
    {
      uJson::skip(&this->first);
      if ( *this->first.data != 4 )
      {
        this->second.data = this->first.data;
        uJson::skip(&this->second);
      }
    }
  }
  v6 = result;
  *result = *this;
  return v6;
}

/*
==============
DecodeArray
==============
*/
const char *DecodeArray(const char *str, char **out)
{
  __int64 v4; 
  char v5; 
  char v7; 
  char v8; 
  char v9; 
  char v10; 
  char v11; 

  v4 = 0x100002600i64;
  *(*out)++ = 2;
  while ( 1 )
  {
    v5 = *str;
    if ( !*str )
      return 0i64;
    while ( (unsigned __int8)v5 <= 0x20u && _bittest64(&v4, v5) )
    {
      v5 = *++str;
      if ( !v5 )
        return 0i64;
    }
    v7 = *str;
    if ( ((*str - 93) & 0xDF) == 0 )
      return str + 1;
    if ( !v7 )
      return 0i64;
    while ( (unsigned __int8)v7 <= 0x20u && _bittest64(&v4, v7) )
    {
      v7 = *++str;
      if ( !v7 )
        return 0i64;
    }
    if ( !str )
      return 0i64;
    if ( *str == 123 )
    {
      str = DecodeObject(str + 1, out);
      if ( !str )
        return 0i64;
      v8 = *str;
      if ( !*str )
        return 0i64;
      while ( (unsigned __int8)v8 <= 0x20u && _bittest64(&v4, v8) )
      {
        v8 = *++str;
        if ( !v8 )
          return 0i64;
      }
LABEL_21:
      v9 = *str;
      **out = 4;
      goto LABEL_36;
    }
    if ( *str == 91 )
    {
      str = DecodeArray(str + 1, out);
      if ( !str )
        return 0i64;
      v10 = *str;
      if ( !*str )
        return 0i64;
      while ( (unsigned __int8)v10 <= 0x20u && _bittest64(&v4, v10) )
      {
        v10 = *++str;
        if ( !v10 )
          return 0i64;
      }
      goto LABEL_21;
    }
    str = DecodeStdElement(str, out);
    if ( !str )
      return 0i64;
    v11 = *str;
    if ( !*str )
      return 0i64;
    while ( (unsigned __int8)v11 <= 0x20u && _bittest64(&v4, v11) )
    {
      v11 = *++str;
      if ( !v11 )
        return 0i64;
    }
    v9 = *str;
    **out = 0;
LABEL_36:
    ++*out;
    if ( ((v9 - 93) & 0xDF) == 0 )
      return str + 1;
    if ( v9 != 44 )
      return 0i64;
    ++str;
  }
}

/*
==============
DecodeObject
==============
*/
const char *DecodeObject(const char *str, char **out)
{
  __int64 v4; 
  char v5; 
  const char *v7; 
  const char *v8; 
  char v9; 
  const char *v10; 
  char v11; 
  char v12; 
  char v13; 
  char v14; 
  char v15; 
  char v16; 

  v4 = 0x100002600i64;
  *(*out)++ = 3;
  while ( 1 )
  {
    v5 = *str;
    if ( !*str )
      return 0i64;
    while ( (unsigned __int8)v5 <= 0x20u && _bittest64(&v4, v5) )
    {
      v5 = *++str;
      if ( !v5 )
        return 0i64;
    }
    if ( ((*str - 93) & 0xDF) == 0 )
      return str + 1;
    v7 = DecodeStdElement(str, out);
    v8 = v7;
    if ( !v7 )
      return 0i64;
    v9 = *v7;
    if ( !*v7 )
      return 0i64;
    while ( (unsigned __int8)v9 <= 0x20u && _bittest64(&v4, v9) )
    {
      v9 = *++v8;
      if ( !v9 )
        return 0i64;
    }
    if ( *v8 != 58 )
      return 0i64;
    v10 = v8 + 1;
    if ( v8 == (const char *)-1i64 )
      return 0i64;
    v11 = *v10;
    if ( !*v10 )
      return 0i64;
    while ( (unsigned __int8)v11 <= 0x20u && _bittest64(&v4, v11) )
    {
      v11 = *++v10;
      if ( !v11 )
        return 0i64;
    }
    *(*out)++ = 0;
    if ( *v10 == 123 )
    {
      str = DecodeObject(v10 + 1, out);
      if ( !str )
        return 0i64;
      v12 = *str;
      if ( !*str )
        return 0i64;
      while ( (unsigned __int8)v12 <= 0x20u && _bittest64(&v4, v12) )
      {
        v12 = *++str;
        if ( !v12 )
          return 0i64;
      }
      goto LABEL_28;
    }
    if ( *v10 == 91 )
    {
      str = DecodeArray(v10 + 1, out);
      if ( !str )
        return 0i64;
      v14 = *str;
      if ( !*str )
        return 0i64;
      while ( (unsigned __int8)v14 <= 0x20u && _bittest64(&v4, v14) )
      {
        v14 = *++str;
        if ( !v14 )
          return 0i64;
      }
LABEL_28:
      v13 = *str;
      **out = 4;
LABEL_45:
      ++*out;
      goto LABEL_46;
    }
    str = DecodeStdElement(v10, out);
    if ( !str )
      return 0i64;
    v15 = *str;
    if ( !*str )
      return 0i64;
    while ( (unsigned __int8)v15 <= 0x20u && _bittest64(&v4, v15) )
    {
      v15 = *++str;
      if ( !v15 )
        return 0i64;
    }
    v13 = *str;
    v16 = *(*out - 1);
    if ( (v16 & 0xFA) != 0 || v16 == 4 )
    {
      **out = 0;
      goto LABEL_45;
    }
LABEL_46:
    if ( ((v13 - 93) & 0xDF) == 0 )
      return str + 1;
    if ( v13 != 44 )
      return 0i64;
    ++str;
  }
}

/*
==============
DecodeStdElement
==============
*/
const char *DecodeStdElement(const char *str, char **out)
{
  const char *v2; 
  unsigned __int64 v4; 
  char v5; 
  const char *result; 
  unsigned __int64 v7; 
  int v8; 
  int i; 
  char v10; 
  int v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  char *v14; 
  char v15; 
  unsigned __int64 v16; 
  char v17; 
  char v18; 
  unsigned __int64 v19; 
  const char *v20; 
  __int64 v21; 
  char *EndPtr; 

  v2 = str;
  v4 = *(unsigned __int8 *)str;
  if ( (_BYTE)v4 == 34 )
  {
    *(*out)++ = 6;
    v5 = v2[1];
    v2 += 2;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v5 == 34 )
          return v2;
        if ( v5 != 92 )
          goto LABEL_9;
        v5 = *v2++;
        if ( ((v5 - 85) & 0xDF) != 0 )
          break;
        v7 = 0i64;
        v8 = 4;
        if ( v5 == 85 )
          v8 = 8;
        for ( i = 0; i < v8; ++i )
        {
          v10 = *v2++;
          if ( (unsigned __int8)(v10 - 48) > 9u )
          {
            if ( (unsigned __int8)(v10 - 65) > 5u )
            {
              if ( (unsigned __int8)(v10 - 97) > 5u )
                return 0i64;
              v11 = v10 - 87;
            }
            else
            {
              v11 = v10 - 55;
            }
          }
          else
          {
            v11 = v10 - 48;
          }
          v12 = (16 * v7) | v11;
          v7 = v12;
        }
        v13 = v12 - 1;
        v14 = *out;
        if ( v13 > 0x10FFFE )
          v7 = 65533i64;
        if ( v7 >= 0x100000 )
        {
          v15 = v7;
          v16 = v7 >> 6;
          v14[3] = v15 & 0x3F | 0x80;
          v17 = v16 & 0x3F | 0x80;
          v16 >>= 6;
          (*out)[2] = v17;
          (*out)[1] = v16 & 0x3F | 0x80;
          **out = (v16 >> 6) | 0xF0;
          *out += 4;
          goto LABEL_11;
        }
        if ( v7 >= 0x800 )
        {
          v18 = v7;
          v19 = v7 >> 6;
          v14[2] = v18 & 0x3F | 0x80;
          (*out)[1] = v19 & 0x3F | 0x80;
          **out = (v19 >> 6) | 0xE0;
          *out += 3;
          goto LABEL_11;
        }
        if ( v7 >= 0x80 )
        {
          v14[1] = v7 & 0x3F | 0x80;
          **out = (v7 >> 6) | 0xC0;
          *out += 2;
          goto LABEL_11;
        }
        *v14 = v7;
LABEL_10:
        ++*out;
LABEL_11:
        v5 = *v2++;
        if ( !v5 )
          return 0i64;
      }
      switch ( v5 )
      {
        case 0:
          return 0i64;
        case 116:
          v5 = 9;
          break;
        case 98:
          v5 = 8;
          break;
        case 114:
          v5 = 13;
          break;
        case 110:
          v5 = 10;
          break;
      }
LABEL_9:
      **out = v5;
      goto LABEL_10;
    }
    return 0i64;
  }
  v20 = v2;
  if ( !(_BYTE)v4 )
    return 0i64;
  v21 = 0x400100100002600i64;
  while ( ((unsigned __int8)v4 > 0x3Au || !_bittest64(&v21, v4)) && (_BYTE)v4 != 93 && (_BYTE)v4 != 125 )
  {
    v4 = *(unsigned __int8 *)++v2;
    if ( !(_BYTE)v4 )
      return 0i64;
  }
  if ( v2 == v20 )
    return 0i64;
  if ( !strncmp(v20, "true", v2 - v20) )
  {
    **out = 1;
    result = v2;
    ++*out;
    return result;
  }
  if ( !strncmp(v20, "false", v2 - v20) )
  {
    **out = 0;
    result = v2;
    ++*out;
    return result;
  }
  if ( !strncmp(v20, "null", v2 - v20) )
  {
    **out = 5;
    result = v2;
    ++*out;
    return result;
  }
  EndPtr = NULL;
  strtod(v20, &EndPtr);
  if ( EndPtr != v2 )
    return 0i64;
  memcpy_0(*out, v20, v2 - v20);
  *out += v2 - v20;
  return v2;
}

/*
==============
uJson::array_begin
==============
*/
uJson::array_iter *uJson::array_begin(uJson *this, uJson::array_iter *result)
{
  char v2; 
  bool v3; 
  const char *v4; 

  v2 = *this->data;
  if ( v2 >= 8 || (v3 = v2 == 2, v4 = this->data + 1, !v3) )
    v4 = "\a";
  result->data = v4;
  return result;
}

/*
==============
uJson::array_end
==============
*/
uJson::array_iter *uJson::array_end(uJson *this, uJson::array_iter *result)
{
  result->data = &endTok;
  return result;
}

/*
==============
uJson::array_size
==============
*/
__int64 uJson::array_size(uJson *this)
{
  unsigned int v1; 
  char v2; 
  bool v3; 
  const char *v4; 
  char v5; 
  int v6; 
  char v7; 
  const char *v8; 
  const char *v9; 

  v1 = 0;
  v2 = *this->data;
  if ( v2 >= 8 || (v3 = v2 == 2, v4 = this->data + 1, !v3) )
    v4 = "\a";
LABEL_4:
  v5 = *v4;
  while ( v5 != 4 && v5 != 7 )
  {
LABEL_9:
    if ( v4 == &endTok )
      return v1;
    ++v1;
    if ( v5 == 4 )
      break;
    if ( v5 != 7 )
    {
      v6 = 0;
      if ( (v5 & 0xFA) == 0 )
        goto LABEL_19;
      while ( 1 )
      {
        v7 = *v4;
        if ( !*v4 )
          goto LABEL_17;
        while ( 1 )
        {
          v8 = v4++;
          if ( (unsigned __int8)(v7 - 2) <= 1u )
          {
            ++v6;
            goto LABEL_21;
          }
          if ( v7 == 4 )
            break;
LABEL_21:
          v7 = *v4;
          if ( !*v4 )
            goto LABEL_17;
        }
        --v6;
        v4 = v8;
LABEL_17:
        v9 = v4++;
        if ( !v6 )
        {
          v4 = v9;
LABEL_19:
          ++v4;
          goto LABEL_4;
        }
      }
    }
  }
  if ( endTok != 4 && endTok != 7 )
    goto LABEL_9;
  return v1;
}

/*
==============
uJson::as_int64
==============
*/
__int64 uJson::as_int64(uJson *this)
{
  const char *data; 
  unsigned int v2; 
  int v3; 
  int v4; 
  __int64 result; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  char v10; 
  char v11; 
  const char *v12; 
  char *i; 

  data = this->data;
  v2 = *this->data;
  v3 = v2;
  if ( (char)v2 >= 8 )
    goto LABEL_7;
  if ( (unsigned __int8)v2 <= 7u )
  {
    v4 = 161;
    if ( _bittest(&v4, v2) )
      return 0i64;
  }
  if ( (_BYTE)v2 == 1 )
    return 1i64;
LABEL_7:
  v6 = 0i64;
  if ( (char)v2 >= 8 )
    v3 = 8;
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( v7 )
    {
      v8 = v7 - 4;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 2 )
            data = (char *)&queryFormat.fmt + 3;
        }
        else
        {
          ++data;
        }
      }
      else
      {
        data = "null";
      }
    }
    else
    {
      data = "true";
    }
  }
  else
  {
    data = "false";
  }
  v10 = 0;
  v11 = *data;
  if ( *data == 45 )
  {
    v11 = data[1];
    v10 = 1;
  }
  v12 = data + 1;
  if ( *data != 45 )
    v12 = data;
  for ( i = (char *)(v12 + 1); v11 >= 48; v11 = *i++ )
  {
    if ( v11 > 57 )
      break;
    v6 = v11 - 48 + 10 * v6;
  }
  result = -v6;
  if ( !v10 )
    return v6;
  return result;
}

/*
==============
uJson::as_real
==============
*/
long double uJson::as_real(uJson *this)
{
  const char *data; 
  char v3; 
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  char *EndPtr; 

  data = this->data;
  v3 = *this->data;
  if ( v3 >= 8 )
    goto LABEL_7;
  if ( (unsigned __int8)v3 > 7u || (v4 = 161, !_bittest(&v4, v3)) )
  {
    if ( v3 == 1 )
    {
      *(double *)&_XMM0 = DOUBLE_1_0;
      return *(double *)&_XMM0;
    }
LABEL_7:
    EndPtr = NULL;
    v6 = 8;
    if ( *data < 8 )
      v6 = *data;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
        *(double *)&_XMM0 = strtod("true", &EndPtr);
        return *(double *)&_XMM0;
      }
      v8 = v7 - 4;
      if ( !v8 )
      {
        *(double *)&_XMM0 = strtod("null", &EndPtr);
        return *(double *)&_XMM0;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        *(double *)&_XMM0 = strtod(data + 1, &EndPtr);
        return *(double *)&_XMM0;
      }
      if ( v9 != 2 )
      {
        *(double *)&_XMM0 = strtod((const char *)&queryFormat.fmt + 3, &EndPtr);
        return *(double *)&_XMM0;
      }
    }
    else
    {
      data = "false";
    }
    *(double *)&_XMM0 = strtod(data, &EndPtr);
    return *(double *)&_XMM0;
  }
  __asm { vxorpd  xmm0, xmm0, xmm0 }
  return *(double *)&_XMM0;
}

/*
==============
uJson::object_iter::as_void_ptr
==============
*/
const char *uJson::object_iter::as_void_ptr(uJson::object_iter *this)
{
  return this->first.data;
}

/*
==============
uJson::byte_size
==============
*/
signed __int64 uJson::byte_size(uJson *this)
{
  const char *data; 
  int v2; 
  const char *v3; 
  char v4; 
  char v6; 
  const char *v7; 

  data = this->data;
  v2 = 0;
  v3 = this->data;
  v4 = *this->data;
  if ( (v4 & 0xFA) == 0 && v4 != 4 )
    return v3 + 1 - data;
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *v3;
      if ( !*v3 )
        goto LABEL_8;
      v7 = v3++;
      if ( (unsigned __int8)(v6 - 2) > 1u )
        break;
      ++v2;
    }
    if ( v6 == 4 )
    {
      --v2;
      v3 = v7;
LABEL_8:
      ++v3;
      if ( !v2 )
        return v3 - data;
    }
  }
}

/*
==============
uJson::c_str
==============
*/
const char *uJson::c_str(uJson *this)
{
  const char *data; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  data = this->data;
  v2 = 8;
  if ( *data < 8 )
    v2 = *data;
  if ( !v2 )
    return "false";
  v3 = v2 - 1;
  if ( !v3 )
    return "true";
  v4 = v3 - 4;
  if ( !v4 )
    return "null";
  v5 = v4 - 1;
  if ( !v5 )
    return data + 1;
  if ( v5 == 2 )
    return data;
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
uJson::is_integer
==============
*/
char uJson::is_integer(uJson *this)
{
  const char *data; 
  char v2; 
  int v3; 
  int v5; 
  int v6; 
  int v7; 

  data = this->data;
  v2 = *this->data;
  if ( v2 >= 8 )
  {
    v3 = 8;
  }
  else
  {
    v3 = v2;
    if ( v2 != 8 )
      return 0;
  }
  if ( !v3 )
  {
    v2 = asset[0];
    data = "false";
    goto LABEL_17;
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    v2 = Str2[0];
    data = "true";
    goto LABEL_17;
  }
  v6 = v5 - 4;
  if ( !v6 )
  {
    v2 = aNull[0];
    data = "null";
LABEL_17:
    while ( v2 != 101 && v2 != 46 )
    {
      v2 = *++data;
      if ( !v2 )
        return 1;
    }
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v2 = *++data;
    goto LABEL_12;
  }
  if ( v7 == 2 )
  {
LABEL_12:
    if ( v2 )
      goto LABEL_17;
  }
  return 1;
}

/*
==============
uJson::is_real
==============
*/
char uJson::is_real(uJson *this)
{
  const char *data; 
  char v2; 

  data = this->data;
  v2 = *this->data;
  if ( v2 < 8 && v2 != 8 || !v2 )
    return 0;
  while ( v2 != 101 && v2 != 46 )
  {
    v2 = *++data;
    if ( !v2 )
      return 0;
  }
  return 1;
}

/*
==============
uJson::object_begin
==============
*/
uJson::object_iter *uJson::object_begin(uJson *this, uJson::object_iter *result)
{
  char v3; 
  const char *v4; 
  int v5; 
  char i; 

  result->first.data = "\a";
  result->second.data = "\a";
  v3 = *this->data;
  if ( v3 < 8 && v3 == 3 )
  {
    v4 = this->data + 1;
    v5 = 0;
    result->first.data = v4;
    result->second.data = v4;
    if ( (*v4 & 0xFA) != 0 || *v4 == 4 )
    {
      do
      {
        for ( i = *v4; i; i = *++v4 )
        {
          result->second.data = v4 + 1;
          if ( (unsigned __int8)(i - 2) <= 1u )
          {
            ++v5;
          }
          else if ( i == 4 )
          {
            --v5;
            break;
          }
        }
        result->second.data = ++v4;
      }
      while ( v5 );
      return result;
    }
    else
    {
      result->second.data = v4 + 1;
      return result;
    }
  }
  else
  {
    result->first.data = "\a";
    return result;
  }
}

/*
==============
uJson::object_end
==============
*/
uJson::object_iter *uJson::object_end(uJson *this, uJson::object_iter *result)
{
  result->first.data = &endTok;
  result->second.data = &endTok;
  return result;
}

/*
==============
uJson::object_size
==============
*/
__int64 uJson::object_size(uJson *this)
{
  const char *data; 
  unsigned int v2; 
  char v3; 
  char v4; 
  const char *v5; 
  int v6; 
  const char *v7; 
  char v8; 
  char v9; 
  char v10; 
  char v11; 
  int v12; 
  char v13; 
  const char *v15; 
  uJson v16; 

  data = this->data;
  v2 = 0;
  v3 = *this->data;
  if ( v3 >= 8 || v3 != 3 )
  {
    v5 = "\a";
    v7 = "\a";
    goto LABEL_17;
  }
  v4 = data[1];
  v5 = data + 1;
  v6 = 0;
  if ( (v4 & 0xFA) == 0 && v4 != 4 )
  {
    v7 = data + 2;
    goto LABEL_17;
  }
  v7 = data + 1;
  do
  {
    v8 = *v7;
    if ( !*v7 )
      goto LABEL_11;
    while ( 1 )
    {
      ++v7;
      if ( (unsigned __int8)(v8 - 2) <= 1u )
      {
        ++v6;
        goto LABEL_14;
      }
      if ( v8 == 4 )
        break;
LABEL_14:
      v8 = *v7;
      if ( !*v7 )
        goto LABEL_11;
    }
    --v6;
    --v7;
LABEL_11:
    ++v7;
  }
  while ( v6 );
LABEL_17:
  v9 = endTok;
LABEL_18:
  while ( 2 )
  {
    v10 = *v5;
    if ( (*v5 != 4 && v10 != 7 || v9 != 4 && v9 != 7) && v5 != &endTok )
    {
      ++v2;
      if ( v10 == 4 )
        continue;
      if ( v10 == 7 )
        continue;
      v11 = *v7;
      v5 = v7;
      if ( *v7 == 4 )
        continue;
      v12 = 0;
      if ( (v11 & 0xFA) == 0 && v11 != 4 )
      {
        v5 = v7 + 1;
        goto LABEL_34;
      }
      while ( 1 )
      {
        v13 = *v5;
        if ( !*v5 )
          goto LABEL_33;
        while ( 1 )
        {
          ++v5;
          if ( (unsigned __int8)(v13 - 2) <= 1u )
          {
            ++v12;
            goto LABEL_37;
          }
          if ( v13 == 4 )
            break;
LABEL_37:
          v13 = *v5;
          if ( !*v5 )
            goto LABEL_33;
        }
        --v12;
        --v5;
LABEL_33:
        ++v5;
        if ( !v12 )
        {
LABEL_34:
          v15 = v5;
          if ( *v5 != 4 )
          {
            v16.data = v5;
            uJson::skip(&v16);
            v7 = v16.data;
            v5 = v15;
          }
          goto LABEL_18;
        }
      }
    }
    return v2;
  }
}

/*
==============
uJson::object_iter::set_from_void_ptr
==============
*/
void uJson::object_iter::set_from_void_ptr(uJson::object_iter *this, const void *p)
{
  uJson *p_second; 

  this->first.data = (const char *)p;
  p_second = &this->second;
  p_second->data = (const char *)p;
  if ( *(_BYTE *)p != 4 && *(_BYTE *)p != 7 )
    uJson::skip(p_second);
}

/*
==============
uJson::skip
==============
*/
void uJson::skip(uJson *this)
{
  const char *data; 
  int v2; 
  char v3; 
  char i; 

  data = this->data;
  v2 = 0;
  v3 = *this->data;
  if ( (v3 & 0xFA) != 0 || v3 == 4 )
  {
    do
    {
      for ( i = *data; i; i = *++data )
      {
        this->data = data + 1;
        if ( (unsigned __int8)(i - 2) <= 1u )
        {
          ++v2;
        }
        else if ( i == 4 )
        {
          --v2;
          break;
        }
      }
      this->data = ++data;
    }
    while ( v2 );
  }
  else
  {
    this->data = data + 1;
  }
}

/*
==============
uJsonDecodeInPlace
==============
*/
uJson *uJsonDecodeInPlace(uJson *result, char *str)
{
  char v3; 
  char *v5; 
  __int64 v6; 
  const char *v8; 
  char *v9; 
  char *out; 

  out = str;
  result->data = "\a";
  v3 = *str;
  v5 = str;
  if ( *str )
  {
    v6 = 0x100002600i64;
    while ( (unsigned __int8)v3 <= 0x20u && _bittest64(&v6, v3) )
    {
      v3 = *++v5;
      if ( !v3 )
        return result;
    }
    v8 = v5 + 1;
    if ( *v5 == 123 )
    {
      if ( !DecodeObject(v8, &out) )
        return result;
      goto LABEL_12;
    }
    if ( *v5 == 91 )
    {
      if ( DecodeArray(v8, &out) )
      {
LABEL_12:
        v9 = out;
        result->data = str;
        *v9 = 4;
        return result;
      }
    }
    else if ( DecodeStdElement(v8, &out) )
    {
      result->data = str;
    }
  }
  return result;
}

/*
==============
uJsonUnpack
==============
*/
int uJsonUnpack(uJson json, const char *fmt, ...)
{
  va_list vl; 

  va_start(vl, fmt);
  return uJsonUnpack_va(json, fmt, vl);
}

/*
==============
uJsonUnpack_va
==============
*/
__int64 uJsonUnpack_va(uJson json, const char *fmt, char *vl)
{
  const char *v5; 
  const char *data; 
  __int64 v7; 
  uJson *v8; 
  __int64 v9; 
  uJson::array_iter *v10; 
  int v11; 
  char v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  const char *v16; 
  const char *v17; 
  char v18; 
  const char *v19; 
  int v20; 
  char v21; 
  char v22; 
  int v23; 
  char v24; 
  const char *v25; 
  unsigned int v26; 
  char *v27; 
  _QWORD *v28; 
  __int64 v29; 
  char *v31; 
  int v32; 
  _QWORD *v33; 
  __int64 v34; 
  double *v35; 
  double v36; 
  float *v37; 
  _QWORD *v39; 
  char v40; 
  bool v41; 
  char v42; 
  char v43; 
  int v44; 
  __int64 v45; 
  uJson v46; 
  uJson result; 
  uJson v48[10]; 
  uJson::array_iter v49[10]; 
  uJson v50; 

  v50.data = json.data;
  v5 = fmt;
  data = json.data;
  if ( fmt )
  {
    v7 = 10i64;
    v8 = v48;
    v9 = 10i64;
    do
    {
      uJson::uJson(v8++);
      --v9;
    }
    while ( v9 );
    v10 = v49;
    do
    {
      uJson::array_iter::array_iter(v10++);
      --v7;
    }
    while ( v7 );
    v11 = 0;
    v12 = 0;
    v44 = 0;
    v13 = 0;
    v46.data = "\a";
    v14 = 0i64;
    v15 = 1;
    v45 = 0i64;
    v16 = "\a";
    v17 = "\a";
    v42 = 1;
    while ( 2 )
    {
      v43 = v12;
      while ( 1 )
      {
        do
        {
          do
LABEL_8:
            v18 = *v5++;
          while ( v18 == 32 );
        }
        while ( v18 == 9 || v18 == 10 || v18 == 13 || v18 == 44 || v18 == 58 );
        if ( !v18 )
        {
          if ( v15 != 1 )
            return 0xFFFFFFFFi64;
          return 0i64;
        }
        if ( !v13 || v18 == 125 )
          goto LABEL_52;
        if ( v18 != 115 )
          return 0xFFFFFFFFi64;
        v19 = *(const char **)vl;
        vl += 8;
        if ( !v19 )
          return 0xFFFFFFFFi64;
        data = uJson::operator[](&v46, &result, v19)->data;
        v50.data = data;
        do
        {
          do
            v18 = *v5++;
          while ( v18 == 32 );
        }
        while ( v18 == 9 || v18 == 10 || v18 == 13 || v18 == 44 || v18 == 58 );
        if ( v18 != 63 )
          goto LABEL_50;
        if ( *data >= 8 || *data != 7 )
          break;
        v20 = 0;
        do
        {
          do
          {
            do
              v21 = *v5++;
            while ( v21 == 32 );
          }
          while ( v21 == 9 || v21 == 10 || v21 == 13 || v21 == 44 || v21 == 58 );
          switch ( v21 )
          {
            case 'F':
            case 'I':
            case 'O':
            case 'b':
            case 'f':
            case 'i':
            case 'o':
            case 'r':
              vl += 8;
              break;
            case '[':
            case '{':
              ++v20;
              break;
            case ']':
            case '}':
              --v20;
              break;
            case 'n':
              break;
            case 's':
              vl += 8;
              if ( *v5 == 37 )
              {
                vl += 8;
                ++v5;
              }
              break;
            default:
              return 0xFFFFFFFFi64;
          }
        }
        while ( v20 );
        v14 = v45;
        v15 = v42;
      }
      do
      {
        do
          v18 = *v5++;
        while ( v18 == 32 );
      }
      while ( v18 == 9 || v18 == 10 || v18 == 13 || v18 == 44 || v18 == 58 );
LABEL_50:
      if ( !v18 )
        return 0xFFFFFFFFi64;
      v14 = v45;
      v15 = v42;
LABEL_52:
      if ( !v12 || v18 == 93 )
      {
LABEL_69:
        v26 = *data;
        if ( *data < 8 && v26 == 7 )
          return 0xFFFFFFFFi64;
        switch ( v18 )
        {
          case 'F':
          case 'f':
            if ( (char)v26 < 8 && v26 != 8 )
              return 0xFFFFFFFFi64;
            v35 = *(double **)vl;
            vl += 8;
            if ( !v35 )
              return 0xFFFFFFFFi64;
            v36 = uJson::as_real(&v50);
            v14 = v45;
            v15 = v42;
            *v35 = v36;
            v12 = v43;
            goto LABEL_8;
          case 'I':
            if ( !uJson::is_integer(&v50) )
              return 0xFFFFFFFFi64;
            v33 = *(_QWORD **)vl;
            vl += 8;
            if ( !v33 )
              return 0xFFFFFFFFi64;
            v34 = uJson::as_int64(&v50);
            v14 = v45;
            v15 = v42;
            *v33 = v34;
            v11 = v44;
            goto LABEL_8;
          case 'O':
          case 'o':
            v39 = *(_QWORD **)vl;
            vl += 8;
            if ( !v39 )
              return 0xFFFFFFFFi64;
            *v39 = data;
            goto LABEL_8;
          case '[':
          case '{':
            if ( v14 >= 10 )
              return 0xFFFFFFFFi64;
            if ( v15 )
            {
              v15 = 0;
              v42 = 0;
              goto LABEL_113;
            }
            if ( v12 )
            {
              v49[v14].data = v17;
              v48[v14].data = "\a";
            }
            else
            {
              if ( !v13 )
                goto LABEL_113;
              v48[v14].data = v16;
            }
            ++v11;
            ++v14;
            v44 = v11;
            v45 = v14;
LABEL_113:
            v40 = *data;
            if ( v18 == 123 )
            {
              if ( v40 >= 8 || v40 != 3 )
                return 0xFFFFFFFFi64;
              v12 = 0;
              v46.data = data;
              v13 = 1;
              v16 = data;
            }
            else
            {
              if ( v40 >= 8 || v40 != 2 )
                return 0xFFFFFFFFi64;
              v12 = 1;
              v17 = data + 1;
              v13 = 0;
            }
            break;
          case ']':
          case '}':
            if ( v18 == 125 )
            {
              v41 = v13 == 0;
            }
            else
            {
              if ( v18 != 93 )
                goto LABEL_125;
              v41 = v12 == 0;
            }
            if ( v41 )
              return 0xFFFFFFFFi64;
LABEL_125:
            if ( v15 )
              return 0xFFFFFFFFi64;
            if ( v14 )
            {
              v16 = (const char *)*((_QWORD *)&result.data + v14--);
              v46.data = v16;
              --v11;
              v45 = v14;
              v44 = v11;
              if ( *v16 == 7 )
              {
                v17 = v49[v14].data;
                v12 = 1;
                v43 = 1;
                v13 = 0;
              }
              else
              {
                v12 = 0;
                v13 = 1;
                v43 = 0;
              }
            }
            else
            {
              v15 = 1;
              v42 = 1;
              data = "\a";
              v50.data = "\a";
              v13 = 0;
            }
            goto LABEL_8;
          case 'b':
            if ( (char)v26 >= 8 || v26 > 1 )
              return 0xFFFFFFFFi64;
            goto LABEL_88;
          case 'i':
            if ( !uJson::is_integer(&v50) )
              return 0xFFFFFFFFi64;
LABEL_88:
            v31 = *(char **)vl;
            vl += 8;
            if ( !v31 )
              return 0xFFFFFFFFi64;
            v32 = uJson::as_int64(&v50);
            v14 = v45;
            v15 = v42;
            *(_DWORD *)v31 = v32;
            v11 = v44;
            goto LABEL_8;
          case 'n':
            if ( (char)v26 >= 8 || v26 != 5 )
              return 0xFFFFFFFFi64;
            goto LABEL_8;
          case 'r':
            if ( (char)v26 < 8 && v26 != 8 )
              return 0xFFFFFFFFi64;
            v37 = *(float **)vl;
            vl += 8;
            if ( !v37 )
              return 0xFFFFFFFFi64;
            *(double *)&_XMM0 = uJson::as_real(&v50);
            v14 = v45;
            v15 = v42;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            *v37 = *(float *)&_XMM1;
            v12 = v43;
            goto LABEL_8;
          case 's':
            if ( (char)v26 >= 8 )
              return 0xFFFFFFFFi64;
            if ( v26 != 6 )
              return 0xFFFFFFFFi64;
            v27 = *(char **)vl;
            vl += 8;
            if ( !v27 )
              return 0xFFFFFFFFi64;
            *(_QWORD *)v27 = data + 1;
            if ( *v5 != 37 )
              goto LABEL_8;
            v28 = *(_QWORD **)vl;
            vl += 8;
            ++v5;
            if ( !v28 )
              return 0xFFFFFFFFi64;
            v29 = -1i64;
            do
              ++v29;
            while ( data[v29 + 1] );
            *v28 = v29;
            goto LABEL_8;
          default:
            return 0xFFFFFFFFi64;
        }
        continue;
      }
      break;
    }
    v22 = *v17;
    if ( (*v17 != 4 && v22 != 7 || endTok != 4 && endTok != 7) && v17 != &endTok )
    {
      data = v17;
      if ( v22 == 4 || v22 == 7 )
        goto LABEL_68;
      v23 = 0;
      if ( (v22 & 0xFA) == 0 )
      {
        ++v17;
        goto LABEL_68;
      }
      while ( 1 )
      {
        v24 = *v17;
        if ( !*v17 )
          goto LABEL_67;
        while ( 1 )
        {
          v25 = v17++;
          if ( (unsigned __int8)(v24 - 2) <= 1u )
          {
            ++v23;
            goto LABEL_73;
          }
          if ( v24 == 4 )
            break;
LABEL_73:
          v24 = *v17;
          if ( !*v17 )
            goto LABEL_67;
        }
        --v23;
        v17 = v25;
LABEL_67:
        ++v17;
        if ( !v23 )
        {
LABEL_68:
          v50.data = data;
          goto LABEL_69;
        }
      }
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
uJson::unpack
==============
*/
int uJson::unpack(uJson *this, const char *fmt, ...)
{
  va_list vl; 

  va_start(vl, fmt);
  return uJsonUnpack_va((uJson)this->data, fmt, vl);
}

