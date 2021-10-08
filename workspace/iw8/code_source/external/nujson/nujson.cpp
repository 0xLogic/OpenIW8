/*
==============
JsonSerializer::Error
==============
*/

const char *__fastcall JsonSerializer::Error(JsonSerializer *this)
{
  return ?Error@JsonSerializer@@QEBAPEBDXZ(this);
}

/*
==============
JsonSerializer::BeginArray
==============
*/

bool __fastcall JsonSerializer::BeginArray(JsonSerializer *this, const char *name)
{
  return ?BeginArray@JsonSerializer@@QEAA_NPEBD@Z(this, name);
}

/*
==============
JsonSerializer::Error
==============
*/

bool JsonSerializer::Error(JsonSerializer *this, const char *fmt, ...)
{
  return ?Error@JsonSerializer@@IEAA_NPEBDZZ(this, fmt);
}

/*
==============
Json::ToUInt32
==============
*/

unsigned int __fastcall Json::ToUInt32(Json *this, unsigned int defaultValue)
{
  return ?ToUInt32@Json@@QEBAII@Z(this, defaultValue);
}

/*
==============
Json::operator[]
==============
*/

const Json *__fastcall Json::operator[](Json *this, const Json *result, unsigned __int64 index)
{
  return ??AJson@@QEBA?BV0@_K@Z(this, result, index);
}

/*
==============
JsonSerializer::EndObject
==============
*/

bool __fastcall JsonSerializer::EndObject(JsonSerializer *this)
{
  return ?EndObject@JsonSerializer@@QEAA_NXZ(this);
}

/*
==============
Json_SetAssertHandler
==============
*/

void __fastcall Json_SetAssertHandler(void (__fastcall *handler)(bool, const char *, const char *, const char *, int, const char *))
{
  ?Json_SetAssertHandler@@YAXP6AX_NPEBD11H1@Z@Z(handler);
}

/*
==============
Json::IsFalse
==============
*/

bool __fastcall Json::IsFalse(Json *this)
{
  return ?IsFalse@Json@@QEBA_NXZ(this);
}

/*
==============
Json::operator[]
==============
*/

const Json *__fastcall Json::operator[](Json *this, const Json *result, const char *name)
{
  return ??AJson@@QEBA?BV0@PEBD@Z(this, result, name);
}

/*
==============
Json::Size
==============
*/

unsigned __int64 __fastcall Json::Size(Json *this)
{
  return ?Size@Json@@QEBA_KXZ(this);
}

/*
==============
Json::end
==============
*/

Json *__fastcall Json::end(Json *result)
{
  return ?end@Json@@SA?AV1@XZ(result);
}

/*
==============
Json::InterpolateString
==============
*/

bool __fastcall Json::InterpolateString(Json *this, const char *string, char *output, unsigned __int64 outputSize)
{
  return ?InterpolateString@Json@@QEAA_NPEBDPEAD_K@Z(this, string, output, outputSize);
}

/*
==============
Json::IsFloat
==============
*/

bool __fastcall Json::IsFloat(Json *this)
{
  return ?IsFloat@Json@@QEBA_NXZ(this);
}

/*
==============
Json::Type
==============
*/

JsonType __fastcall Json::Type(Json *this)
{
  return ?Type@Json@@QEBA?AW4JsonType@@XZ(this);
}

/*
==============
Json::GetUInt8
==============
*/

bool __fastcall Json::GetUInt8(Json *this, unsigned __int8 *value)
{
  return ?GetUInt8@Json@@QEBA_NPEAE@Z(this, value);
}

/*
==============
JsonSerializer::JsonSerializer
==============
*/

void __fastcall JsonSerializer::JsonSerializer(JsonSerializer *this, const char *indent, char *output, unsigned __int64 outputSize)
{
  ??0JsonSerializer@@QEAA@PEBDPEAD_K@Z(this, indent, output, outputSize);
}

/*
==============
Json::GetText
==============
*/

bool __fastcall Json::GetText(Json *this, char *value, unsigned __int64 size)
{
  return ?GetText@Json@@QEBA_NPEAD_K@Z(this, value, size);
}

/*
==============
Json::Json
==============
*/

void __fastcall Json::Json(Json *this)
{
  ??0Json@@QEAA@XZ(this);
}

/*
==============
Json::IsInteger
==============
*/

bool __fastcall Json::IsInteger(Json *this)
{
  return ?IsInteger@Json@@QEBA_NXZ(this);
}

/*
==============
Json::ToFloat64
==============
*/

long double __fastcall Json::ToFloat64(Json *this, long double defaultValue)
{
  return ?ToFloat64@Json@@QEBANN@Z(this, defaultValue);
}

/*
==============
Json::ToUInt64
==============
*/

unsigned __int64 __fastcall Json::ToUInt64(Json *this, unsigned __int64 defaultValue)
{
  return ?ToUInt64@Json@@QEBA_K_K@Z(this, defaultValue);
}

/*
==============
JsonSerializer::Write
==============
*/

bool __fastcall JsonSerializer::Write(JsonSerializer *this, const char *text, int length)
{
  return ?Write@JsonSerializer@@IEAA_NPEBDH@Z(this, text, length);
}

/*
==============
Json::GetUInt16
==============
*/

bool __fastcall Json::GetUInt16(Json *this, unsigned __int16 *value)
{
  return ?GetUInt16@Json@@QEBA_NPEAG@Z(this, value);
}

/*
==============
Json::GetInt8
==============
*/

bool __fastcall Json::GetInt8(Json *this, char *value)
{
  return ?GetInt8@Json@@QEBA_NPEAC@Z(this, value);
}

/*
==============
Json::Text
==============
*/

const char *__fastcall Json::Text(Json *this)
{
  return ?Text@Json@@QEBAPEBDXZ(this);
}

/*
==============
JsonSerializer::BeginObject
==============
*/

bool __fastcall JsonSerializer::BeginObject(JsonSerializer *this)
{
  return ?BeginObject@JsonSerializer@@QEAA_NXZ(this);
}

/*
==============
Json::GetElement
==============
*/

bool __fastcall Json::GetElement(Json *this, unsigned __int64 index, Json *elem)
{
  return ?GetElement@Json@@QEBA_N_KPEAV1@@Z(this, index, elem);
}

/*
==============
Json::ToObject
==============
*/

Json *__fastcall Json::ToObject(Json *this, Json *result)
{
  return ?ToObject@Json@@QEBA?AV1@XZ(this, result);
}

/*
==============
JsonSerializer::String
==============
*/

bool __fastcall JsonSerializer::String(JsonSerializer *this, const char *value)
{
  return ?String@JsonSerializer@@QEAA_NPEBD@Z(this, value);
}

/*
==============
JsonSerializer::Json
==============
*/

JsonSerializer *__fastcall JsonSerializer::Json(JsonSerializer *this, const Json *value)
{
  return (JsonSerializer *)?Json@JsonSerializer@@QEAA_NV0@@Z(this, value);
}

/*
==============
Json::GetUInt64
==============
*/

bool __fastcall Json::GetUInt64(Json *this, unsigned __int64 *value)
{
  return ?GetUInt64@Json@@QEBA_NPEA_K@Z(this, value);
}

/*
==============
Json::ToUInt16
==============
*/

unsigned __int16 __fastcall Json::ToUInt16(Json *this, unsigned __int16 defaultValue)
{
  return ?ToUInt16@Json@@QEBAGG@Z(this, defaultValue);
}

/*
==============
Json::IsArray
==============
*/

bool __fastcall Json::IsArray(Json *this)
{
  return ?IsArray@Json@@QEBA_NXZ(this);
}

/*
==============
JsonSerializer::Bytes
==============
*/

bool __fastcall JsonSerializer::Bytes(JsonSerializer *this, const void *value, unsigned __int64 valueSize)
{
  return ?Bytes@JsonSerializer@@QEAA_NPEBX_K@Z(this, value, valueSize);
}

/*
==============
JsonSerializer::UInt
==============
*/

bool __fastcall JsonSerializer::UInt(JsonSerializer *this, unsigned __int64 value)
{
  return ?UInt@JsonSerializer@@QEAA_N_K@Z(this, value);
}

/*
==============
Json::GetArray
==============
*/

bool __fastcall Json::GetArray(Json *this, Json *value)
{
  return ?GetArray@Json@@QEBA_NPEAV1@@Z(this, value);
}

/*
==============
JsonSerializer::Int
==============
*/

bool __fastcall JsonSerializer::Int(JsonSerializer *this, __int64 value)
{
  return ?Int@JsonSerializer@@QEAA_N_J@Z(this, value);
}

/*
==============
Json::ToUInt8
==============
*/

unsigned __int8 __fastcall Json::ToUInt8(Json *this, unsigned __int8 defaultValue)
{
  return ?ToUInt8@Json@@QEBAEE@Z(this, defaultValue);
}

/*
==============
Json::GetName
==============
*/

bool __fastcall Json::GetName(Json *this, char *value, unsigned __int64 size)
{
  return ?GetName@Json@@QEBA_NPEAD_K@Z(this, value, size);
}

/*
==============
Json::GetFloat64
==============
*/

bool __fastcall Json::GetFloat64(Json *this, long double *value)
{
  return ?GetFloat64@Json@@QEBA_NPEAN@Z(this, value);
}

/*
==============
JsonSerializer::Json
==============
*/

JsonSerializer *__fastcall JsonSerializer::Json(JsonSerializer *this, const char *name, const Json *value)
{
  return (JsonSerializer *)?Json@JsonSerializer@@QEAA_NPEBDV0@@Z(this, name, value);
}

/*
==============
Json::GetUInt32
==============
*/

bool __fastcall Json::GetUInt32(Json *this, unsigned int *value)
{
  return ?GetUInt32@Json@@QEBA_NPEAI@Z(this, value);
}

/*
==============
Json::Name
==============
*/

const char *__fastcall Json::Name(Json *this)
{
  return ?Name@Json@@QEBAPEBDXZ(this);
}

/*
==============
Json::IsNull
==============
*/

bool __fastcall Json::IsNull(Json *this)
{
  return ?IsNull@Json@@QEBA_NXZ(this);
}

/*
==============
Json::GetFloat32
==============
*/

bool __fastcall Json::GetFloat32(Json *this, float *value)
{
  return ?GetFloat32@Json@@QEBA_NPEAM@Z(this, value);
}

/*
==============
Json::GetObject
==============
*/

bool __fastcall Json::GetObject(Json *this, Json *value)
{
  return ?GetObject@Json@@QEBA_NPEAV1@@Z(this, value);
}

/*
==============
JsonSerializer::BeginObject
==============
*/

bool __fastcall JsonSerializer::BeginObject(JsonSerializer *this, const char *name)
{
  return ?BeginObject@JsonSerializer@@QEAA_NPEBD@Z(this, name);
}

/*
==============
Json::ToBool
==============
*/

bool __fastcall Json::ToBool(Json *this, bool defaultValue)
{
  return ?ToBool@Json@@QEBA_N_N@Z(this, defaultValue);
}

/*
==============
Json::IsTrue
==============
*/

bool __fastcall Json::IsTrue(Json *this)
{
  return ?IsTrue@Json@@QEBA_NXZ(this);
}

/*
==============
Json::GetBool
==============
*/

bool __fastcall Json::GetBool(Json *this, bool *value)
{
  return ?GetBool@Json@@QEBA_NPEA_N@Z(this, value);
}

/*
==============
JsonSerializer::BeginArray
==============
*/

bool __fastcall JsonSerializer::BeginArray(JsonSerializer *this)
{
  return ?BeginArray@JsonSerializer@@QEAA_NXZ(this);
}

/*
==============
Json::operator++
==============
*/

Json *__fastcall Json::operator++(Json *this, Json *result)
{
  return ??EJson@@QEAA?AV0@XZ(this, result);
}

/*
==============
Json::GetChild
==============
*/

bool __fastcall Json::GetChild(Json *this, const char *name, Json *child)
{
  return ?GetChild@Json@@QEBA_NPEBDPEAV1@@Z(this, name, child);
}

/*
==============
Json::operator==
==============
*/

bool __fastcall Json::operator==(Json *this, const Json *rhs)
{
  return ??8Json@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
JsonSerializer::Int
==============
*/

bool __fastcall JsonSerializer::Int(JsonSerializer *this, const char *name, __int64 value)
{
  return ?Int@JsonSerializer@@QEAA_NPEBD_J@Z(this, name, value);
}

/*
==============
Json::Parse
==============
*/

bool __fastcall Json::Parse(Json *this, char *text, char *error, int errorSize)
{
  return ?Parse@Json@@QEAA_NPEAD0H@Z(this, text, error, errorSize);
}

/*
==============
JsonSerializer::Bool
==============
*/

bool __fastcall JsonSerializer::Bool(JsonSerializer *this, bool value)
{
  return ?Bool@JsonSerializer@@QEAA_N_N@Z(this, value);
}

/*
==============
JsonSerializer::UInt
==============
*/

bool __fastcall JsonSerializer::UInt(JsonSerializer *this, const char *name, unsigned __int64 value)
{
  return ?UInt@JsonSerializer@@QEAA_NPEBD_K@Z(this, name, value);
}

/*
==============
Json::GetInt16
==============
*/

bool __fastcall Json::GetInt16(Json *this, __int16 *value)
{
  return ?GetInt16@Json@@QEBA_NPEAF@Z(this, value);
}

/*
==============
JsonSerializer::Null
==============
*/

bool __fastcall JsonSerializer::Null(JsonSerializer *this, const char *name)
{
  return ?Null@JsonSerializer@@QEAA_NPEBD@Z(this, name);
}

/*
==============
Json::GetString
==============
*/

bool __fastcall Json::GetString(Json *this, char *value, unsigned __int64 size)
{
  return ?GetString@Json@@QEBA_NPEAD_K@Z(this, value, size);
}

/*
==============
Json::GetString
==============
*/

bool __fastcall Json::GetString(Json *this, const char **value)
{
  return ?GetString@Json@@QEBA_NPEAPEBD@Z(this, value);
}

/*
==============
Json::ToInt16
==============
*/

__int16 __fastcall Json::ToInt16(Json *this, __int16 defaultValue)
{
  return ?ToInt16@Json@@QEBAFF@Z(this, defaultValue);
}

/*
==============
Json::GetInt32
==============
*/

bool __fastcall Json::GetInt32(Json *this, int *value)
{
  return ?GetInt32@Json@@QEBA_NPEAH@Z(this, value);
}

/*
==============
JsonSerializer::Float
==============
*/

bool __fastcall JsonSerializer::Float(JsonSerializer *this, const char *name, long double value)
{
  return ?Float@JsonSerializer@@QEAA_NPEBDN@Z(this, name, value);
}

/*
==============
JsonSerializer::Bool
==============
*/

bool __fastcall JsonSerializer::Bool(JsonSerializer *this, const char *name, bool value)
{
  return ?Bool@JsonSerializer@@QEAA_NPEBD_N@Z(this, name, value);
}

/*
==============
Json::ToString
==============
*/

const char *__fastcall Json::ToString(Json *this, const char *defaultValue)
{
  return ?ToString@Json@@QEBAPEBDPEBD@Z(this, defaultValue);
}

/*
==============
JsonSerializer::Bytes
==============
*/

bool __fastcall JsonSerializer::Bytes(JsonSerializer *this, const char *name, const void *value, unsigned __int64 valueSize)
{
  return ?Bytes@JsonSerializer@@QEAA_NPEBDPEBX_K@Z(this, name, value, valueSize);
}

/*
==============
Json::operator*
==============
*/

const Json *__fastcall Json::operator*(Json *this)
{
  return ??DJson@@QEBAAEBV0@XZ(this);
}

/*
==============
Json::ToInt64
==============
*/

__int64 __fastcall Json::ToInt64(Json *this, __int64 defaultValue)
{
  return ?ToInt64@Json@@QEBA_J_J@Z(this, defaultValue);
}

/*
==============
Json::IsString
==============
*/

bool __fastcall Json::IsString(Json *this)
{
  return ?IsString@Json@@QEBA_NXZ(this);
}

/*
==============
JsonSerializer::Null
==============
*/

bool __fastcall JsonSerializer::Null(JsonSerializer *this)
{
  return ?Null@JsonSerializer@@QEAA_NXZ(this);
}

/*
==============
Json::begin
==============
*/

Json *__fastcall Json::begin(Json *this, Json *result)
{
  return ?begin@Json@@QEBA?AV1@XZ(this, result);
}

/*
==============
Json::GetBytes
==============
*/

unsigned __int64 __fastcall Json::GetBytes(Json *this, void *value, int bufferSize)
{
  return ?GetBytes@Json@@QEBA_KPEAXH@Z(this, value, bufferSize);
}

/*
==============
JsonSerializer::Size
==============
*/

unsigned __int64 __fastcall JsonSerializer::Size(JsonSerializer *this)
{
  return ?Size@JsonSerializer@@QEBA_KXZ(this);
}

/*
==============
Json::operator!=
==============
*/

bool __fastcall Json::operator!=(Json *this, const Json *rhs)
{
  return ??9Json@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
Json::ToFloat32
==============
*/

double __fastcall Json::ToFloat32(Json *this, float defaultValue)
{
  double result; 

  *(float *)&result = ?ToFloat32@Json@@QEBAMM@Z(this, defaultValue);
  return result;
}

/*
==============
Json::ToArray
==============
*/

Json *__fastcall Json::ToArray(Json *this, Json *result)
{
  return ?ToArray@Json@@QEBA?AV1@XZ(this, result);
}

/*
==============
JsonSerializer::Float
==============
*/

bool __fastcall JsonSerializer::Float(JsonSerializer *this, long double value)
{
  return ?Float@JsonSerializer@@QEAA_NN@Z(this, value);
}

/*
==============
Json::IsBool
==============
*/

bool __fastcall Json::IsBool(Json *this)
{
  return ?IsBool@Json@@QEBA_NXZ(this);
}

/*
==============
Json::IsNumber
==============
*/

bool __fastcall Json::IsNumber(Json *this)
{
  return ?IsNumber@Json@@QEBA_NXZ(this);
}

/*
==============
Json::IsUndefined
==============
*/

bool __fastcall Json::IsUndefined(Json *this)
{
  return ?IsUndefined@Json@@QEBA_NXZ(this);
}

/*
==============
Json::GetInt64
==============
*/

bool __fastcall Json::GetInt64(Json *this, __int64 *value)
{
  return ?GetInt64@Json@@QEBA_NPEA_J@Z(this, value);
}

/*
==============
JsonSerializer::JsonSerializer
==============
*/

void __fastcall JsonSerializer::JsonSerializer(JsonSerializer *this)
{
  ??0JsonSerializer@@QEAA@XZ(this);
}

/*
==============
Json::ToInt8
==============
*/

char __fastcall Json::ToInt8(Json *this, char defaultValue)
{
  return ?ToInt8@Json@@QEBACC@Z(this, defaultValue);
}

/*
==============
Json::ToInt32
==============
*/

int __fastcall Json::ToInt32(Json *this, int defaultValue)
{
  return ?ToInt32@Json@@QEBAHH@Z(this, defaultValue);
}

/*
==============
JsonSerializer::String
==============
*/

bool __fastcall JsonSerializer::String(JsonSerializer *this, const char *name, const char *value)
{
  return ?String@JsonSerializer@@QEAA_NPEBD0@Z(this, name, value);
}

/*
==============
Json::IsObject
==============
*/

bool __fastcall Json::IsObject(Json *this)
{
  return ?IsObject@Json@@QEBA_NXZ(this);
}

/*
==============
JsonSerializer::EndArray
==============
*/

bool __fastcall JsonSerializer::EndArray(JsonSerializer *this)
{
  return ?EndArray@JsonSerializer@@QEAA_NXZ(this);
}

/*
==============
Json::Json
==============
*/
void Json::Json(Json *this)
{
  this->m_key = NULL;
  this->m_value = UNDEFINED_0;
}

/*
==============
JsonSerializer::JsonSerializer
==============
*/
void JsonSerializer::JsonSerializer(JsonSerializer *this, const char *indent, char *output, unsigned __int64 outputSize)
{
  char *m_indent; 
  __int64 v9; 
  const char *v10; 
  char v11; 
  bool v12; 

  memset_0(this, 0, sizeof(JsonSerializer));
  this->m_buffer = output;
  this->m_end = &output[outputSize];
  this->m_pos = output;
  if ( indent )
  {
    m_indent = this->m_indent;
    if ( this != (JsonSerializer *)-24i64 )
    {
      v9 = 15i64;
      v10 = (const char *)(indent - m_indent);
      do
      {
        v11 = m_indent[(_QWORD)v10];
        if ( !v11 )
          break;
        *m_indent++ = v11;
        --v9;
      }
      while ( v9 );
      if ( m_indent )
        *m_indent = 0;
    }
  }
  v12 = this->m_buffer == NULL;
  this->m_parentCount = 0;
  if ( !v12 )
    *this->m_pos = 0;
}

/*
==============
JsonSerializer::JsonSerializer
==============
*/
void JsonSerializer::JsonSerializer(JsonSerializer *this)
{
  memset_0(this, 0, sizeof(JsonSerializer));
}

/*
==============
Json::operator==
==============
*/
bool Json::operator==(Json *this, const Json *rhs)
{
  return this->m_key == rhs->m_key && this->m_value == rhs->m_value;
}

/*
==============
Json::operator!=
==============
*/
bool Json::operator!=(Json *this, const Json *rhs)
{
  return this->m_key != rhs->m_key || this->m_value != rhs->m_value;
}

/*
==============
Json::operator[]
==============
*/
const Json *Json::operator[](Json *this, const Json *result, const char *name)
{
  const char *m_value; 
  char v6; 
  void (__fastcall *v8)(bool, const char *, const char *, const char *, int, const char *); 
  const char *v10; 
  const char *v12; 

  m_value = this->m_value;
  result->m_key = NULL;
  result->m_value = UNDEFINED_0;
  if ( m_value )
  {
    if ( *m_value == 1 )
    {
      v6 = m_value[1];
      _RBX = m_value + 1;
      if ( v6 != 3 )
      {
        v8 = jsonAssertHandler;
        while ( 1 )
        {
          if ( v8 )
          {
            LOBYTE(this) = v6 == 4;
            v8((bool)this, "*p == JSON_NAME", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetChild", 1147, (const char *)&queryFormat.fmt + 3);
          }
          _RAX = JSON_SCAN_CHARS[7].chars;
          v10 = _RBX + 1;
          __asm { vmovdqu xmm1, xmmword ptr [rax] }
          while ( 1 )
          {
            __asm { vpcmpestri xmm1, xmmword ptr [rbx], 0 }
            if ( (_DWORD)this != 16 )
              break;
            _RBX += 16;
          }
          v12 = &_RBX[(int)this + 1];
          if ( !strcmp(v10, name) )
            break;
          _RBX = Json_Skip(v12);
          v6 = *_RBX;
          if ( *_RBX == 3 )
            return result;
        }
        result->m_key = v10;
        result->m_value = v12;
      }
    }
  }
  return result;
}

/*
==============
Json::operator[]
==============
*/
const Json *Json::operator[](Json *this, const Json *result, unsigned __int64 index)
{
  const char *m_value; 
  char v7; 
  char *v8; 
  char *v10; 
  int v11; 
  __int128 v17; 
  __int128 v18; 

  m_value = this->m_value;
  *(_QWORD *)&v17 = 0i64;
  *((_QWORD *)&v17 + 1) = UNDEFINED_0;
  _RDI = result;
  __asm { vmovups xmm0, [rsp+38h+var_18] }
  v7 = *m_value;
  __asm { vmovups xmmword ptr [rdx], xmm0 }
  if ( (unsigned __int8)(v7 - 1) > 1u )
    return result;
  v8 = NULL;
  _RSI = JSON_SCAN_CHARS[7].chars;
  v10 = UNDEFINED_0;
  *(_QWORD *)&v18 = 0i64;
  *((_QWORD *)&v18 + 1) = UNDEFINED_0;
  if ( m_value && v7 )
  {
    v11 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v11 != 4 )
    {
      if ( (_BYTE)v11 != 3 )
        v10 = (char *)(m_value + 1);
      goto LABEL_9;
    }
    __asm { vmovdqu xmm1, xmmword ptr [rsi] }
    v8 = (char *)(m_value + 2);
    *(_QWORD *)&v18 = m_value + 2;
    _R8 = (char *)(m_value + 2);
    __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    goto LABEL_6;
  }
  while ( 1 )
  {
    if ( !v8 && v10 == UNDEFINED_0 )
      return _RDI;
    if ( !index )
      break;
    --index;
    if ( v10 && *v10 )
    {
      v10 = (char *)Json_Skip(v10);
      *((_QWORD *)&v18 + 1) = v10;
      v11 = (unsigned __int8)*v10;
      if ( (_BYTE)v11 == 4 )
      {
        __asm { vmovdqu xmm1, xmmword ptr [rsi] }
        v8 = v10 + 1;
        *(_QWORD *)&v18 = v10 + 1;
        _R8 = v10 + 1;
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
LABEL_6:
        v10 = &_R8[v11 + 1];
LABEL_9:
        *((_QWORD *)&v18 + 1) = v10;
        continue;
      }
      if ( (_BYTE)v11 == 3 )
      {
        v8 = NULL;
        v10 = UNDEFINED_0;
        *(_QWORD *)&v18 = 0i64;
        goto LABEL_9;
      }
    }
  }
  __asm
  {
    vmovups xmm0, [rsp+38h+var_18]
    vmovups xmmword ptr [rdi], xmm0
  }
  return _RDI;
}

/*
==============
Json::operator*
==============
*/
Json *Json::operator*(Json *this)
{
  return this;
}

/*
==============
Json::operator++
==============
*/
Json *Json::operator++(Json *this, Json *result)
{
  const char *m_value; 
  const char *v5; 
  int v6; 
  Json *v10; 

  _R11 = this;
  _RBX = result;
  m_value = this->m_value;
  if ( m_value && *m_value )
  {
    v5 = Json_Skip(m_value);
    _R11->m_value = v5;
    v6 = *(unsigned __int8 *)v5;
    if ( (_BYTE)v6 == 4 )
    {
      _R8 = v5 + 1;
      _R11->m_key = v5 + 1;
      _RAX = JSON_SCAN_CHARS[7].chars;
      __asm
      {
        vmovdqu xmm1, xmmword ptr [rax]
        vpcmpestri xmm1, xmmword ptr [r8], 0
      }
      v10 = _RBX;
      _R11->m_value = &_R8[v6 + 1];
      __asm
      {
        vmovups xmm0, xmmword ptr [r11]
        vmovups xmmword ptr [rbx], xmm0
      }
      return v10;
    }
    if ( (_BYTE)v6 == 3 )
    {
      _R11->m_key = NULL;
      _R11->m_value = UNDEFINED_0;
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r11]
    vmovups xmmword ptr [rbx], xmm0
  }
  return _RBX;
}

/*
==============
JsonSerializer::BeginArray
==============
*/
bool JsonSerializer::BeginArray(JsonSerializer *this, const char *name)
{
  void (__fastcall *v2)(bool, const char *, const char *, const char *, int, const char *); 
  char *m_parentCount; 
  char v6; 
  bool result; 
  int v8; 
  __int64 v9; 
  const char *v11; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  char *m_pos; 
  unsigned __int8 v18; 
  __int64 v19; 
  __int64 v20; 
  char *v21; 
  char *v22; 
  char *v23; 
  char *v24; 
  __int64 v25; 
  char Src[8]; 

  v2 = jsonAssertHandler;
  if ( jsonAssertHandler )
  {
    jsonAssertHandler(1, "type == JSON_OBJECT || type == JSON_ARRAY", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Begin", 2019, (const char *)&queryFormat.fmt + 3);
    v2 = jsonAssertHandler;
  }
  m_parentCount = (char *)this->m_parentCount;
  v6 = 0;
  if ( (int)m_parentCount > 0 )
    v6 = this->m_error[(_QWORD)m_parentCount + 128];
  if ( name )
  {
    if ( v6 != 1 )
    {
      result = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_97;
    }
  }
  else if ( v6 == 1 )
  {
    result = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_97;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( v2 )
    {
      LOBYTE(m_parentCount) = (int)m_parentCount < 32;
      v2((bool)m_parentCount, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount <= 0 || this->m_parentTypes[(int)m_parentCount + 31] == JSON_UNDEFINED )
      goto LABEL_22;
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_parentCount = this->m_pos;
      if ( m_parentCount + 2 >= this->m_end )
      {
        if ( !JsonSerializer::Error(this, "out of memory") )
          return 0;
LABEL_22:
        if ( !this->m_indent[0] )
          goto LABEL_35;
        if ( this->m_closed )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
            goto LABEL_30;
          }
          *m_parentCount = p[0];
        }
        ++this->m_pos;
LABEL_30:
        v8 = 0;
        if ( this->m_parentCount > 0 )
        {
          while ( 1 )
          {
            v9 = -1i64;
            do
              ++v9;
            while ( this->m_indent[v9] );
            if ( !JsonSerializer::Write(this, this->m_indent, v9) )
              return 0;
            if ( ++v8 >= this->m_parentCount )
              goto LABEL_35;
          }
        }
        goto LABEL_35;
      }
      *m_parentCount = asc_143DE3EFC[0];
    }
    ++this->m_pos;
    goto LABEL_22;
  }
LABEL_35:
  if ( !name )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_42;
  m_parentCount = this->m_pos;
  if ( m_parentCount + 2 < this->m_end )
  {
    *m_parentCount = search[0];
LABEL_42:
    ++this->m_pos;
    goto LABEL_43;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_43:
  if ( *name )
  {
    while ( 1 )
    {
      _RAX = JSON_SCAN_CHARS[4].chars;
      v11 = name;
      _R8 = name;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v14 = &_R8[(int)m_parentCount];
      v15 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v11;
      if ( this->m_closed )
        return 0;
      v16 = v15;
      if ( !this->m_buffer )
        goto LABEL_53;
      m_pos = this->m_pos;
      if ( &m_pos[v15 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_54:
      v18 = *v14;
      if ( !*v14 )
        goto LABEL_78;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v14;
      if ( (byte_14471F6B0[v18] & 0x10) != 0 )
      {
        if ( (_BYTE)m_parentCount )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_63:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
                goto LABEL_67;
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v18];
              ++this->m_pos;
            }
            else
            {
              ++this->m_pos;
            }
            goto LABEL_77;
          }
          *m_parentCount = asc_1440E303C[0];
        }
        ++this->m_pos;
        goto LABEL_63;
      }
      v19 = -1i64;
      do
        ++v19;
      while ( Src[v19] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v20 = (int)v19;
      if ( this->m_buffer )
      {
        v21 = this->m_pos;
        if ( &v21[(int)v19 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_77;
        }
        memcpy_0(v21, Src, (int)v19);
      }
      this->m_pos += v20;
LABEL_77:
      name = v14 + 1;
      if ( !*name )
        goto LABEL_78;
    }
    memcpy_0(m_pos, v11, v15);
LABEL_53:
    this->m_pos += v16;
    goto LABEL_54;
  }
LABEL_78:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_84;
  v22 = this->m_pos;
  if ( v22 + 2 < this->m_end )
  {
    *v22 = search[0];
LABEL_84:
    ++this->m_pos;
    goto LABEL_85;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_85:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_91;
  v23 = this->m_pos;
  if ( v23 + 2 < this->m_end )
  {
    *v23 = asc_143D7E4F8[0];
LABEL_91:
    ++this->m_pos;
    goto LABEL_92;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_92:
  if ( !this->m_indent[0] )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_100:
    ++this->m_pos;
    goto LABEL_101;
  }
  v24 = this->m_pos;
  if ( v24 + 2 < this->m_end )
  {
    *v24 = whitespace[0];
    goto LABEL_100;
  }
  result = JsonSerializer::Error(this, "out of memory");
LABEL_97:
  if ( !result )
    return result;
LABEL_101:
  if ( !JsonSerializer::Write(this, "[", 1) )
    return 0;
  if ( jsonAssertHandler )
    jsonAssertHandler(this->m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentTypes )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Begin", 2031, (const char *)&queryFormat.fmt + 3);
  v25 = this->m_parentCount;
  if ( (int)v25 >= 32 )
    return JsonSerializer::Error(this, "stack overflow");
  if ( (int)v25 > 0 )
  {
    this->m_parentTypes[v25 + 31] = JSON_OBJECT;
    LODWORD(v25) = this->m_parentCount;
  }
  this->m_parentTypes[(int)v25] = JSON_ARRAY;
  this->m_parentChild[this->m_parentCount++] = 0;
  return 1;
}

/*
==============
JsonSerializer::BeginArray
==============
*/
bool JsonSerializer::BeginArray(JsonSerializer *this)
{
  return JsonSerializer::BeginArray(this, NULL);
}

/*
==============
JsonSerializer::BeginObject
==============
*/
bool JsonSerializer::BeginObject(JsonSerializer *this, const char *name)
{
  void (__fastcall *v2)(bool, const char *, const char *, const char *, int, const char *); 
  char *m_parentCount; 
  char v6; 
  bool result; 
  int v8; 
  __int64 v9; 
  const char *v11; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  char *m_pos; 
  unsigned __int8 v18; 
  __int64 v19; 
  __int64 v20; 
  char *v21; 
  char *v22; 
  char *v23; 
  char *v24; 
  __int64 v25; 
  char Src[8]; 

  v2 = jsonAssertHandler;
  if ( jsonAssertHandler )
  {
    jsonAssertHandler(1, "type == JSON_OBJECT || type == JSON_ARRAY", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Begin", 2019, (const char *)&queryFormat.fmt + 3);
    v2 = jsonAssertHandler;
  }
  m_parentCount = (char *)this->m_parentCount;
  v6 = 0;
  if ( (int)m_parentCount > 0 )
    v6 = this->m_error[(_QWORD)m_parentCount + 128];
  if ( name )
  {
    if ( v6 != 1 )
    {
      result = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_97;
    }
  }
  else if ( v6 == 1 )
  {
    result = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_97;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( v2 )
    {
      LOBYTE(m_parentCount) = (int)m_parentCount < 32;
      v2((bool)m_parentCount, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount <= 0 || this->m_parentTypes[(int)m_parentCount + 31] == JSON_UNDEFINED )
      goto LABEL_22;
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_parentCount = this->m_pos;
      if ( m_parentCount + 2 >= this->m_end )
      {
        if ( !JsonSerializer::Error(this, "out of memory") )
          return 0;
LABEL_22:
        if ( !this->m_indent[0] )
          goto LABEL_35;
        if ( this->m_closed )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
            goto LABEL_30;
          }
          *m_parentCount = p[0];
        }
        ++this->m_pos;
LABEL_30:
        v8 = 0;
        if ( this->m_parentCount > 0 )
        {
          while ( 1 )
          {
            v9 = -1i64;
            do
              ++v9;
            while ( this->m_indent[v9] );
            if ( !JsonSerializer::Write(this, this->m_indent, v9) )
              return 0;
            if ( ++v8 >= this->m_parentCount )
              goto LABEL_35;
          }
        }
        goto LABEL_35;
      }
      *m_parentCount = asc_143DE3EFC[0];
    }
    ++this->m_pos;
    goto LABEL_22;
  }
LABEL_35:
  if ( !name )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_42;
  m_parentCount = this->m_pos;
  if ( m_parentCount + 2 < this->m_end )
  {
    *m_parentCount = search[0];
LABEL_42:
    ++this->m_pos;
    goto LABEL_43;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_43:
  if ( *name )
  {
    while ( 1 )
    {
      _RAX = JSON_SCAN_CHARS[4].chars;
      v11 = name;
      _R8 = name;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v14 = &_R8[(int)m_parentCount];
      v15 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v11;
      if ( this->m_closed )
        return 0;
      v16 = v15;
      if ( !this->m_buffer )
        goto LABEL_53;
      m_pos = this->m_pos;
      if ( &m_pos[v15 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_54:
      v18 = *v14;
      if ( !*v14 )
        goto LABEL_78;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v14;
      if ( (byte_14471F6B0[v18] & 0x10) != 0 )
      {
        if ( (_BYTE)m_parentCount )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_63:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
                goto LABEL_67;
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v18];
              ++this->m_pos;
            }
            else
            {
              ++this->m_pos;
            }
            goto LABEL_77;
          }
          *m_parentCount = asc_1440E303C[0];
        }
        ++this->m_pos;
        goto LABEL_63;
      }
      v19 = -1i64;
      do
        ++v19;
      while ( Src[v19] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v20 = (int)v19;
      if ( this->m_buffer )
      {
        v21 = this->m_pos;
        if ( &v21[(int)v19 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_77;
        }
        memcpy_0(v21, Src, (int)v19);
      }
      this->m_pos += v20;
LABEL_77:
      name = v14 + 1;
      if ( !*name )
        goto LABEL_78;
    }
    memcpy_0(m_pos, v11, v15);
LABEL_53:
    this->m_pos += v16;
    goto LABEL_54;
  }
LABEL_78:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_84;
  v22 = this->m_pos;
  if ( v22 + 2 < this->m_end )
  {
    *v22 = search[0];
LABEL_84:
    ++this->m_pos;
    goto LABEL_85;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_85:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_91;
  v23 = this->m_pos;
  if ( v23 + 2 < this->m_end )
  {
    *v23 = asc_143D7E4F8[0];
LABEL_91:
    ++this->m_pos;
    goto LABEL_92;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_92:
  if ( !this->m_indent[0] )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_100:
    ++this->m_pos;
    goto LABEL_101;
  }
  v24 = this->m_pos;
  if ( v24 + 2 < this->m_end )
  {
    *v24 = whitespace[0];
    goto LABEL_100;
  }
  result = JsonSerializer::Error(this, "out of memory");
LABEL_97:
  if ( !result )
    return result;
LABEL_101:
  if ( !JsonSerializer::Write(this, "{", 1) )
    return 0;
  if ( jsonAssertHandler )
    jsonAssertHandler(this->m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentTypes )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Begin", 2031, (const char *)&queryFormat.fmt + 3);
  v25 = this->m_parentCount;
  if ( (int)v25 >= 32 )
    return JsonSerializer::Error(this, "stack overflow");
  if ( (int)v25 > 0 )
  {
    this->m_parentTypes[v25 + 31] = JSON_OBJECT;
    LODWORD(v25) = this->m_parentCount;
  }
  this->m_parentTypes[(int)v25] = JSON_OBJECT;
  this->m_parentChild[this->m_parentCount++] = 0;
  return 1;
}

/*
==============
JsonSerializer::BeginObject
==============
*/
bool JsonSerializer::BeginObject(JsonSerializer *this)
{
  return JsonSerializer::BeginObject(this, NULL);
}

/*
==============
JsonSerializer::Bool
==============
*/
bool JsonSerializer::Bool(JsonSerializer *this, const char *name, bool value)
{
  const char *v3; 
  char *m_parentCount; 
  char v6; 
  const char *v7; 
  __int64 v8; 
  bool result; 
  int v10; 
  __int64 v11; 
  const char *v13; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  char *m_pos; 
  unsigned __int8 v20; 
  __int64 v21; 
  __int64 v22; 
  char *v23; 
  char *v24; 
  char *v25; 
  char *v26; 
  __int64 v27; 
  bool v28; 
  unsigned __int8 Src; 

  v3 = "false";
  m_parentCount = (char *)this->m_parentCount;
  if ( value )
    v3 = "true";
  v6 = 0;
  v7 = name;
  if ( (int)m_parentCount > 0 )
    v6 = this->m_error[(_QWORD)m_parentCount + 128];
  v8 = -1i64;
  if ( name )
  {
    if ( v6 != 1 )
    {
      result = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_97;
    }
  }
  else if ( v6 == 1 )
  {
    result = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_97;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( jsonAssertHandler )
    {
      jsonAssertHandler((int)m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount <= 0 || this->m_parentTypes[(int)m_parentCount + 31] == JSON_UNDEFINED )
      goto LABEL_22;
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_parentCount = this->m_pos;
      if ( m_parentCount + 2 >= this->m_end )
      {
        if ( !JsonSerializer::Error(this, "out of memory") )
          return 0;
LABEL_22:
        if ( !this->m_indent[0] )
          goto LABEL_35;
        if ( this->m_closed )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
            goto LABEL_30;
          }
          *m_parentCount = p[0];
        }
        ++this->m_pos;
LABEL_30:
        v10 = 0;
        if ( this->m_parentCount > 0 )
        {
          while ( 1 )
          {
            v11 = -1i64;
            do
              ++v11;
            while ( this->m_indent[v11] );
            if ( !JsonSerializer::Write(this, this->m_indent, v11) )
              return 0;
            if ( ++v10 >= this->m_parentCount )
              goto LABEL_35;
          }
        }
        goto LABEL_35;
      }
      *m_parentCount = asc_143DE3EFC[0];
    }
    ++this->m_pos;
    goto LABEL_22;
  }
LABEL_35:
  if ( !v7 )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_42;
  m_parentCount = this->m_pos;
  if ( m_parentCount + 2 < this->m_end )
  {
    *m_parentCount = search[0];
LABEL_42:
    ++this->m_pos;
    goto LABEL_43;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_43:
  if ( *v7 )
  {
    while ( 1 )
    {
      _RAX = JSON_SCAN_CHARS[4].chars;
      v13 = v7;
      _R8 = v7;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v16 = &_R8[(int)m_parentCount];
      v17 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v13;
      if ( this->m_closed )
        return 0;
      v18 = v17;
      if ( !this->m_buffer )
        goto LABEL_53;
      m_pos = this->m_pos;
      if ( &m_pos[v17 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_54:
      v20 = *v16;
      if ( !*v16 )
        goto LABEL_78;
      LODWORD(m_parentCount) = this->m_closed;
      Src = *v16;
      if ( (byte_14471F6B0[v20] & 0x10) != 0 )
      {
        if ( (_BYTE)m_parentCount )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_63:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
                goto LABEL_67;
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v20];
              ++this->m_pos;
            }
            else
            {
              ++this->m_pos;
            }
            goto LABEL_77;
          }
          *m_parentCount = asc_1440E303C[0];
        }
        ++this->m_pos;
        goto LABEL_63;
      }
      v21 = -1i64;
      do
        ++v21;
      while ( *(&Src + v21) );
      if ( (_BYTE)m_parentCount )
        return 0;
      v22 = (int)v21;
      if ( this->m_buffer )
      {
        v23 = this->m_pos;
        if ( &v23[(int)v21 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_77;
        }
        memcpy_0(v23, &Src, (int)v21);
      }
      this->m_pos += v22;
LABEL_77:
      v7 = v16 + 1;
      if ( !*v7 )
        goto LABEL_78;
    }
    memcpy_0(m_pos, v13, v17);
LABEL_53:
    this->m_pos += v18;
    goto LABEL_54;
  }
LABEL_78:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_84;
  v24 = this->m_pos;
  if ( v24 + 2 < this->m_end )
  {
    *v24 = search[0];
LABEL_84:
    ++this->m_pos;
    goto LABEL_85;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_85:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_91;
  v25 = this->m_pos;
  if ( v25 + 2 < this->m_end )
  {
    *v25 = asc_143D7E4F8[0];
LABEL_91:
    ++this->m_pos;
    goto LABEL_92;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_92:
  if ( !this->m_indent[0] )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_100:
    ++this->m_pos;
    goto LABEL_101;
  }
  v26 = this->m_pos;
  if ( v26 + 2 < this->m_end )
  {
    *v26 = whitespace[0];
    goto LABEL_100;
  }
  result = JsonSerializer::Error(this, "out of memory");
LABEL_97:
  if ( !result )
    return result;
  do
LABEL_101:
    ++v8;
  while ( v3[v8] );
  if ( !JsonSerializer::Write(this, v3, v8) )
    return 0;
  v27 = this->m_parentCount;
  v28 = (_DWORD)v27 == 0;
  if ( (int)v27 > 0 )
  {
    this->m_parentTypes[v27 + 31] = JSON_OBJECT;
    v28 = this->m_parentCount == 0;
  }
  if ( v28 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::Bool
==============
*/
bool JsonSerializer::Bool(JsonSerializer *this, bool value)
{
  return JsonSerializer::Bool(this, NULL, value);
}

/*
==============
JsonSerializer::Bytes
==============
*/
bool JsonSerializer::Bytes(JsonSerializer *this, const char *name, const void *value, unsigned __int64 valueSize)
{
  char v5; 
  char *m_parentCount; 
  const char *v9; 
  bool result; 
  int v11; 
  __int64 v12; 
  const char *v14; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  char *m_pos; 
  unsigned __int8 v21; 
  __int64 v22; 
  __int64 v23; 
  char *v24; 
  char *v25; 
  char *v26; 
  char *v27; 
  __int64 v28; 
  bool v29; 
  char Src[8]; 

  v5 = 0;
  m_parentCount = (char *)this->m_parentCount;
  v9 = name;
  if ( (int)m_parentCount > 0 )
    v5 = this->m_error[(_QWORD)m_parentCount + 128];
  if ( name )
  {
    if ( v5 != 1 )
    {
      result = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_95;
    }
  }
  else if ( v5 == 1 )
  {
    result = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_95;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( jsonAssertHandler )
    {
      jsonAssertHandler((int)m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount <= 0 || this->m_parentTypes[(int)m_parentCount + 31] == JSON_UNDEFINED )
      goto LABEL_20;
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_parentCount = this->m_pos;
      if ( m_parentCount + 2 >= this->m_end )
      {
        if ( !JsonSerializer::Error(this, "out of memory") )
          return 0;
LABEL_20:
        if ( !this->m_indent[0] )
          goto LABEL_33;
        if ( this->m_closed )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
            goto LABEL_28;
          }
          *m_parentCount = p[0];
        }
        ++this->m_pos;
LABEL_28:
        v11 = 0;
        if ( this->m_parentCount > 0 )
        {
          while ( 1 )
          {
            v12 = -1i64;
            do
              ++v12;
            while ( this->m_indent[v12] );
            if ( !JsonSerializer::Write(this, this->m_indent, v12) )
              return 0;
            if ( ++v11 >= this->m_parentCount )
              goto LABEL_33;
          }
        }
        goto LABEL_33;
      }
      *m_parentCount = asc_143DE3EFC[0];
    }
    ++this->m_pos;
    goto LABEL_20;
  }
LABEL_33:
  if ( !v9 )
    goto LABEL_99;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_40;
  m_parentCount = this->m_pos;
  if ( m_parentCount + 2 < this->m_end )
  {
    *m_parentCount = search[0];
LABEL_40:
    ++this->m_pos;
    goto LABEL_41;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_41:
  if ( *v9 )
  {
    while ( 1 )
    {
      _RAX = JSON_SCAN_CHARS[4].chars;
      v14 = v9;
      _R8 = v9;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v17 = &_R8[(int)m_parentCount];
      v18 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v14;
      if ( this->m_closed )
        return 0;
      v19 = v18;
      if ( !this->m_buffer )
        goto LABEL_51;
      m_pos = this->m_pos;
      if ( &m_pos[v18 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_52:
      v21 = *v17;
      if ( !*v17 )
        goto LABEL_76;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v17;
      if ( (byte_14471F6B0[v21] & 0x10) != 0 )
      {
        if ( (_BYTE)m_parentCount )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_61:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
                goto LABEL_65;
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v21];
              ++this->m_pos;
            }
            else
            {
              ++this->m_pos;
            }
            goto LABEL_75;
          }
          *m_parentCount = asc_1440E303C[0];
        }
        ++this->m_pos;
        goto LABEL_61;
      }
      v22 = -1i64;
      do
        ++v22;
      while ( Src[v22] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v23 = (int)v22;
      if ( this->m_buffer )
      {
        v24 = this->m_pos;
        if ( &v24[(int)v22 + 1] >= this->m_end )
        {
LABEL_65:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_75;
        }
        memcpy_0(v24, Src, (int)v22);
      }
      this->m_pos += v23;
LABEL_75:
      v9 = v17 + 1;
      if ( !*v9 )
        goto LABEL_76;
    }
    memcpy_0(m_pos, v14, v18);
LABEL_51:
    this->m_pos += v19;
    goto LABEL_52;
  }
LABEL_76:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_82;
  v25 = this->m_pos;
  if ( v25 + 2 < this->m_end )
  {
    *v25 = search[0];
LABEL_82:
    ++this->m_pos;
    goto LABEL_83;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_83:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_89;
  v26 = this->m_pos;
  if ( v26 + 2 < this->m_end )
  {
    *v26 = asc_143D7E4F8[0];
LABEL_89:
    ++this->m_pos;
    goto LABEL_90;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_90:
  if ( this->m_indent[0] )
  {
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      v27 = this->m_pos;
      if ( v27 + 2 >= this->m_end )
      {
        result = JsonSerializer::Error(this, "out of memory");
LABEL_95:
        if ( !result )
          return result;
        goto LABEL_99;
      }
      *v27 = whitespace[0];
    }
    ++this->m_pos;
  }
LABEL_99:
  *this->m_pos++ = 34;
  this->m_pos += Base64_Encode(value, valueSize, this->m_pos, this->m_end - this->m_pos);
  *this->m_pos++ = 34;
  v28 = this->m_parentCount;
  v29 = (_DWORD)v28 == 0;
  if ( (int)v28 > 0 )
  {
    this->m_parentTypes[v28 + 31] = JSON_OBJECT;
    v29 = this->m_parentCount == 0;
  }
  if ( v29 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::Bytes
==============
*/
bool JsonSerializer::Bytes(JsonSerializer *this, const void *value, unsigned __int64 valueSize)
{
  return JsonSerializer::Bytes(this, NULL, value, valueSize);
}

/*
==============
JsonSerializer::EndArray
==============
*/
bool JsonSerializer::EndArray(JsonSerializer *this)
{
  int m_parentCount; 
  char *m_pos; 
  int v4; 
  __int64 v5; 
  __int64 v7; 
  bool v8; 

  m_parentCount = this->m_parentCount;
  if ( m_parentCount <= 0 || this->m_error[m_parentCount + 128] != 2 )
    return JsonSerializer::Error(this, "parent type mismatch");
  this->m_parentCount = m_parentCount - 1;
  if ( this->m_indent[0] )
  {
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( m_pos + 2 >= this->m_end )
      {
        if ( JsonSerializer::Error(this, "out of memory") )
        {
LABEL_11:
          v4 = 0;
          if ( this->m_parentCount > 0 )
          {
            while ( 1 )
            {
              v5 = -1i64;
              do
                ++v5;
              while ( this->m_indent[v5] );
              if ( !JsonSerializer::Write(this, this->m_indent, v5) )
                return 0;
              if ( ++v4 >= this->m_parentCount )
                goto LABEL_16;
            }
          }
          goto LABEL_16;
        }
        return 0;
      }
      *m_pos = p[0];
    }
    ++this->m_pos;
    goto LABEL_11;
  }
LABEL_16:
  if ( !JsonSerializer::Write(this, "]", 1) )
    return 0;
  v7 = this->m_parentCount;
  v8 = (_DWORD)v7 == 0;
  if ( (int)v7 > 0 )
  {
    this->m_parentTypes[v7 + 31] = JSON_OBJECT;
    v8 = this->m_parentCount == 0;
  }
  if ( v8 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::EndObject
==============
*/
bool JsonSerializer::EndObject(JsonSerializer *this)
{
  int m_parentCount; 
  char *m_pos; 
  int v4; 
  __int64 v5; 
  __int64 v7; 
  bool v8; 

  m_parentCount = this->m_parentCount;
  if ( m_parentCount <= 0 || this->m_error[m_parentCount + 128] != 1 )
    return JsonSerializer::Error(this, "parent type mismatch");
  this->m_parentCount = m_parentCount - 1;
  if ( this->m_indent[0] )
  {
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( m_pos + 2 >= this->m_end )
      {
        if ( JsonSerializer::Error(this, "out of memory") )
        {
LABEL_11:
          v4 = 0;
          if ( this->m_parentCount > 0 )
          {
            while ( 1 )
            {
              v5 = -1i64;
              do
                ++v5;
              while ( this->m_indent[v5] );
              if ( !JsonSerializer::Write(this, this->m_indent, v5) )
                return 0;
              if ( ++v4 >= this->m_parentCount )
                goto LABEL_16;
            }
          }
          goto LABEL_16;
        }
        return 0;
      }
      *m_pos = p[0];
    }
    ++this->m_pos;
    goto LABEL_11;
  }
LABEL_16:
  if ( !JsonSerializer::Write(this, "}", 1) )
    return 0;
  v7 = this->m_parentCount;
  v8 = (_DWORD)v7 == 0;
  if ( (int)v7 > 0 )
  {
    this->m_parentTypes[v7 + 31] = JSON_OBJECT;
    v8 = this->m_parentCount == 0;
  }
  if ( v8 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::Error
==============
*/
bool JsonSerializer::Error(JsonSerializer *this, const char *fmt, ...)
{
  bool result; 
  va_list vargs; 

  va_start(vargs, fmt);
  Json_vsprintf(this->m_error, 0x80ui64, fmt, vargs);
  *this->m_pos = 0;
  result = 0;
  this->m_closed = 1;
  return result;
}

/*
==============
JsonSerializer::Error
==============
*/
char *JsonSerializer::Error(JsonSerializer *this)
{
  return this->m_error;
}

/*
==============
JsonSerializer::Float
==============
*/

bool __fastcall JsonSerializer::Float(JsonSerializer *this, double value)
{
  __asm { vmovaps xmm2, xmm1; value }
  return JsonSerializer::Float(this, NULL, *(long double *)&_XMM2);
}

/*
==============
JsonSerializer::Float
==============
*/

char __fastcall JsonSerializer::Float(JsonSerializer *this, const char *name, double value)
{
  int v9; 
  char *v10; 
  __int64 i; 
  char *m_parentCount; 
  char v14; 
  __int64 v15; 
  bool v16; 
  int v18; 
  __int64 v19; 
  const char *v21; 
  const char *v24; 
  int v25; 
  __int64 v26; 
  char *m_pos; 
  unsigned __int8 v28; 
  __int64 v29; 
  __int64 v30; 
  char *v31; 
  char *v32; 
  char *v33; 
  char *v34; 
  char *v35; 
  char *v36; 
  __int64 v37; 
  bool v38; 
  char Src[16]; 
  char dest[385]; 

  __asm
  {
    vmovaps [rsp+218h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  memset_0(dest, 0, sizeof(dest));
  __asm
  {
    vmovaps xmm2, xmm6
    vmovq   r8, xmm2
  }
  v9 = Json_sprintf_385_((char (*)[385])dest, "%f", *(double *)&_XMM2);
  v10 = strchr_0(dest, 46);
  __asm { vmovaps xmm6, [rsp+218h+var_38] }
  if ( v10 )
  {
    for ( i = v9 - 1; i >= 0; dest[i--] = 0 )
    {
      if ( dest[i] != 48 || Src[i + 15] == 46 )
        break;
      if ( (unsigned __int64)i >= 0x181 )
      {
        j___report_rangecheckfailure(i);
        JUMPOUT(0x14378EA5Ci64);
      }
    }
  }
  m_parentCount = (char *)this->m_parentCount;
  v14 = 0;
  if ( (int)m_parentCount > 0 )
    v14 = this->m_error[(_QWORD)m_parentCount + 128];
  v15 = -1i64;
  if ( name )
  {
    if ( v14 != 1 )
    {
      v16 = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_101;
    }
  }
  else if ( v14 == 1 )
  {
    v16 = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_101;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( jsonAssertHandler )
    {
      jsonAssertHandler((int)m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount > 0 && this->m_parentTypes[(int)m_parentCount + 31] )
    {
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = asc_143DE3EFC[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
    }
    if ( this->m_indent[0] )
    {
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = p[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
      v18 = 0;
      if ( this->m_parentCount > 0 )
      {
        do
        {
          v19 = -1i64;
          do
            ++v19;
          while ( this->m_indent[v19] );
          if ( !JsonSerializer::Write(this, this->m_indent, v19) )
            return 0;
        }
        while ( ++v18 < this->m_parentCount );
      }
    }
  }
  if ( !name )
    goto LABEL_105;
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    m_parentCount = this->m_pos;
    if ( m_parentCount + 2 < this->m_end )
    {
      *m_parentCount = search[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  for ( ; *name; name = v24 + 1 )
  {
    _RAX = JSON_SCAN_CHARS[4].chars;
    v21 = name;
    _R8 = name;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)m_parentCount != 16 )
        break;
      _R8 += 16;
    }
    v24 = &_R8[(int)m_parentCount];
    v25 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v21;
    if ( this->m_closed )
      return 0;
    v26 = v25;
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( &m_pos[v25 + 1] < this->m_end )
      {
        memcpy_0(m_pos, v21, v25);
        this->m_pos += v26;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
    }
    else
    {
      this->m_pos += v25;
    }
    v28 = *v24;
    if ( !*v24 )
      break;
    LODWORD(m_parentCount) = this->m_closed;
    Src[0] = *v24;
    if ( (byte_14471F6B0[v28] & 0x10) != 0 )
    {
      if ( (_BYTE)m_parentCount )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = asc_1440E303C[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 >= this->m_end )
          goto LABEL_71;
        *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v28];
        ++this->m_pos;
      }
      else
      {
        ++this->m_pos;
      }
    }
    else
    {
      v29 = -1i64;
      do
        ++v29;
      while ( Src[v29] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v30 = (int)v29;
      if ( this->m_buffer )
      {
        v32 = this->m_pos;
        if ( &v32[(int)v29 + 1] >= this->m_end )
        {
LABEL_71:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          continue;
        }
        memcpy_0(v32, Src, (int)v29);
        this->m_pos += v30;
      }
      else
      {
        v31 = this->m_pos;
        LODWORD(m_parentCount) = v30 + (_DWORD)v31;
        this->m_pos = &v31[v30];
      }
    }
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v33 = this->m_pos;
    if ( v33 + 2 < this->m_end )
    {
      *v33 = search[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v34 = this->m_pos;
    if ( v34 + 2 < this->m_end )
    {
      *v34 = asc_143D7E4F8[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  if ( !this->m_indent[0] )
    goto LABEL_105;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_104:
    ++this->m_pos;
    goto LABEL_105;
  }
  v35 = this->m_pos;
  if ( v35 + 2 < this->m_end )
  {
    *v35 = whitespace[0];
    goto LABEL_104;
  }
  v16 = JsonSerializer::Error(this, "out of memory");
LABEL_101:
  if ( !v16 )
    return 0;
  do
LABEL_105:
    ++v15;
  while ( dest[v15] );
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_112;
  v36 = this->m_pos;
  if ( &v36[(int)v15 + 1] < this->m_end )
  {
    memcpy_0(v36, dest, (int)v15);
LABEL_112:
    this->m_pos += (int)v15;
    goto LABEL_113;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_113:
  v37 = this->m_parentCount;
  v38 = (_DWORD)v37 == 0;
  if ( (int)v37 > 0 )
  {
    this->m_parentTypes[v37 + 31] = JSON_OBJECT;
    v38 = this->m_parentCount == 0;
  }
  if ( v38 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
Json::GetArray
==============
*/
char Json::GetArray(Json *this, Json *value)
{
  _R8 = this->m_value;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    return 0;
  }
  if ( *_R8 != 2 )
    return 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rdx], xmm0
  }
  return 1;
}

/*
==============
Json::GetBool
==============
*/
char Json::GetBool(Json *this, bool *value)
{
  char v2; 

  v2 = *this->m_value;
  if ( (unsigned __int8)(v2 - 5) <= 1u )
  {
    *value = v2 == 5;
    return 1;
  }
  else
  {
    *value = 0;
    return 0;
  }
}

/*
==============
Json::GetBytes
==============
*/
unsigned __int64 Json::GetBytes(Json *this, void *value, int bufferSize)
{
  return Base64_Decode(this->m_value + 1, value, bufferSize);
}

/*
==============
Json::GetChild
==============
*/
bool Json::GetChild(Json *this, const char *name, Json *child)
{
  const char *m_value; 
  char v6; 
  void (__fastcall *v8)(bool, const char *, const char *, const char *, int, const char *); 
  const char *v10; 
  const char *v12; 
  bool result; 

  m_value = this->m_value;
  if ( !m_value )
    return 0;
  if ( *m_value != 1 )
    return 0;
  v6 = m_value[1];
  _RBX = m_value + 1;
  if ( v6 == 3 )
    return 0;
  v8 = jsonAssertHandler;
  while ( 1 )
  {
    if ( v8 )
    {
      LOBYTE(this) = v6 == 4;
      v8((bool)this, "*p == JSON_NAME", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetChild", 1147, (const char *)&queryFormat.fmt + 3);
    }
    _RAX = JSON_SCAN_CHARS[7].chars;
    v10 = _RBX + 1;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [rbx], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _RBX += 16;
    }
    v12 = &_RBX[(int)this + 1];
    if ( !strcmp(v10, name) )
      break;
    _RBX = Json_Skip(v12);
    v6 = *_RBX;
    if ( *_RBX == 3 )
      return 0;
  }
  child->m_key = v10;
  result = 1;
  child->m_value = v12;
  return result;
}

/*
==============
Json::GetElement
==============
*/
char Json::GetElement(Json *this, unsigned __int64 index, Json *elem)
{
  const char *m_value; 
  char *v8; 
  char *v9; 
  int v10; 
  __int128 v16; 
  __int128 v17; 

  *(_QWORD *)&v16 = 0i64;
  *((_QWORD *)&v16 + 1) = UNDEFINED_0;
  _RSI = elem;
  __asm
  {
    vmovups xmm0, [rsp+38h+var_18]
    vmovups xmmword ptr [r8], xmm0
  }
  m_value = this->m_value;
  if ( (unsigned __int8)(*m_value - 1) > 1u )
    return 0;
  _RDI = JSON_SCAN_CHARS[7].chars;
  v8 = NULL;
  *(_QWORD *)&v17 = 0i64;
  v9 = UNDEFINED_0;
  *((_QWORD *)&v17 + 1) = UNDEFINED_0;
  if ( m_value && *m_value )
  {
    v10 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v10 != 4 )
    {
      if ( (_BYTE)v10 != 3 )
        v9 = (char *)(m_value + 1);
      goto LABEL_9;
    }
    __asm { vmovdqu xmm1, xmmword ptr [rdi] }
    v8 = (char *)(m_value + 2);
    *(_QWORD *)&v17 = m_value + 2;
    _R8 = (char *)(m_value + 2);
    __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    goto LABEL_6;
  }
  while ( 1 )
  {
    if ( !v8 && v9 == UNDEFINED_0 )
      return 0;
    if ( !index )
      break;
    --index;
    if ( v9 && *v9 )
    {
      v9 = (char *)Json_Skip(v9);
      *((_QWORD *)&v17 + 1) = v9;
      v10 = (unsigned __int8)*v9;
      if ( (_BYTE)v10 == 4 )
      {
        __asm { vmovdqu xmm1, xmmword ptr [rdi] }
        v8 = v9 + 1;
        *(_QWORD *)&v17 = v9 + 1;
        _R8 = v9 + 1;
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
LABEL_6:
        v9 = &_R8[v10 + 1];
LABEL_9:
        *((_QWORD *)&v17 + 1) = v9;
        continue;
      }
      if ( (_BYTE)v10 == 3 )
      {
        v8 = NULL;
        v9 = UNDEFINED_0;
        *(_QWORD *)&v17 = 0i64;
        goto LABEL_9;
      }
    }
  }
  __asm
  {
    vmovups xmm0, [rsp+38h+var_18]
    vmovups xmmword ptr [rsi], xmm0
  }
  return 1;
}

/*
==============
Json::GetFloat32
==============
*/
bool Json::GetFloat32(Json *this, float *value)
{
  int *v7; 
  bool result; 
  char *EndPtr; 

  _RBX = value;
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( *this->m_value < 9 )
    goto LABEL_5;
  _set_errno(0);
  *(double *)&_XMM0 = strtod(this->m_value, &EndPtr);
  __asm { vmovaps xmm6, xmm0 }
  v7 = _errno();
  if ( *v7 )
    goto LABEL_5;
  __asm
  {
    vcomisd xmm6, cs:__real@c7efffffe0000000
    vcomisd xmm6, cs:__real@47efffffe0000000
  }
  if ( *v7 )
  {
LABEL_5:
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
    result = 0;
    *_RBX = 0.0;
  }
  else
  {
    __asm
    {
      vcvtsd2ss xmm0, xmm6, xmm6
      vmovss  dword ptr [rbx], xmm0
    }
    result = 1;
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
  return result;
}

/*
==============
Json::GetFloat64
==============
*/
char Json::GetFloat64(Json *this, long double *value)
{
  char *EndPtr; 

  _RBX = value;
  if ( *this->m_value >= 9 )
  {
    _set_errno(0);
    *(double *)&_XMM0 = strtod(this->m_value, &EndPtr);
    __asm { vmovsd  qword ptr [rbx], xmm0 }
    if ( !*_errno() )
      return 1;
  }
  *_RBX = 0.0;
  return 0;
}

/*
==============
Json::GetInt16
==============
*/
char Json::GetInt16(Json *this, __int16 *value)
{
  __int16 v3; 
  unsigned __int64 v4; 
  char result; 
  __int64 valuea; 

  if ( !Json::GetInt64(this, &valuea) )
    goto LABEL_6;
  v3 = valuea;
  v4 = valuea + 0x8000;
  if ( jsonAssertHandler )
    jsonAssertHandler((unsigned __int64)(valuea + 0x8000) <= 0xFFFF, "v64 >= INT16_MIN && v64 <= INT16_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetInt16", 1336, (const char *)&queryFormat.fmt + 3);
  if ( v4 <= 0xFFFF )
  {
    *value = v3;
    return 1;
  }
  else
  {
LABEL_6:
    result = 0;
    *value = 0;
  }
  return result;
}

/*
==============
Json::GetInt32
==============
*/
char Json::GetInt32(Json *this, int *value)
{
  int v3; 
  unsigned __int64 v4; 
  __int64 valuea; 

  if ( !Json::GetInt64(this, &valuea) )
    goto LABEL_6;
  v3 = valuea;
  v4 = valuea + 0x80000000i64;
  if ( jsonAssertHandler )
    jsonAssertHandler((unsigned __int64)(valuea + 0x80000000i64) <= 0xFFFFFFFF, "v64 >= INT32_MIN && v64 <= INT32_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetInt32", 1357, (const char *)&queryFormat.fmt + 3);
  if ( v4 <= 0xFFFFFFFF )
  {
    *value = v3;
    return 1;
  }
  else
  {
LABEL_6:
    *value = 0;
    return 0;
  }
}

/*
==============
Json::GetInt64
==============
*/
char Json::GetInt64(Json *this, __int64 *value)
{
  const char *m_value; 
  unsigned __int8 v7; 
  const char *v8; 
  const char *v9; 
  unsigned __int64 v10; 
  char v11; 
  __int64 v12; 
  __int64 v13; 
  __int128 v16; 
  __int128 v17; 

  *value = 0i64;
  m_value = this->m_value;
  if ( *m_value >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[7].chars;
    _R8 = this->m_value;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v7 = 0;
    v8 = &_R8[(int)this];
    v9 = this->m_value;
    if ( m_value != v8 && *m_value == 45 )
    {
      v7 = 1;
      v9 = m_value + 1;
    }
    v10 = 0i64;
    v11 = 0;
    if ( v9 != v8 )
    {
      while ( 1 )
      {
        LOBYTE(v12) = `std::_Digit_from_char'::`2'::_Digit_from_byte[*(unsigned __int8 *)v9];
        if ( (unsigned __int8)v12 >= 0xAu )
          goto LABEL_17;
        if ( v10 < 0xCCCCCCCCCCCCCCCi64 )
          break;
        if ( v10 == 0xCCCCCCCCCCCCCCCi64 )
        {
          v12 = (unsigned __int8)v12;
          if ( (unsigned __int8)v12 <= (unsigned __int64)v7 + 7 )
            goto LABEL_15;
        }
        v11 = 1;
LABEL_16:
        if ( ++v9 == v8 )
          goto LABEL_17;
      }
      v12 = (unsigned __int8)v12;
LABEL_15:
      v10 = v12 + 10 * v10;
      goto LABEL_16;
    }
LABEL_17:
    if ( v9 - m_value == v7 )
    {
      *(_QWORD *)&v16 = m_value;
      DWORD2(v16) = 22;
    }
    else
    {
      *(_QWORD *)&v16 = v9;
      if ( v11 )
      {
        DWORD2(v16) = 34;
      }
      else
      {
        DWORD2(v16) = 0;
        v13 = -(__int64)v10;
        if ( !v7 )
          v13 = v10;
        *value = v13;
      }
    }
    __asm
    {
      vmovups xmm0, [rsp+28h+var_28]
      vmovdqa [rsp+28h+var_28], xmm0
    }
    if ( !DWORD2(v17) && (const char *)v17 == v8 )
      return 1;
    *value = 0i64;
  }
  return 0;
}

/*
==============
Json::GetInt8
==============
*/
char Json::GetInt8(Json *this, char *value)
{
  char v3; 
  unsigned __int64 v4; 
  __int64 valuea; 

  if ( !Json::GetInt64(this, &valuea) )
    goto LABEL_6;
  v3 = valuea;
  v4 = valuea + 128;
  if ( jsonAssertHandler )
    jsonAssertHandler((unsigned __int64)(valuea + 128) <= 0xFF, "v64 >= INT8_MIN && v64 <= INT8_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetInt8", 1315, (const char *)&queryFormat.fmt + 3);
  if ( v4 <= 0xFF )
  {
    *value = v3;
    return 1;
  }
  else
  {
LABEL_6:
    *value = 0;
    return 0;
  }
}

/*
==============
Json::GetName
==============
*/
bool Json::GetName(Json *this, char *value, unsigned __int64 size)
{
  unsigned __int64 v9; 
  bool result; 

  if ( !this->m_key )
    goto LABEL_9;
  _RAX = JSON_SCAN_CHARS[7].chars;
  _R9 = this->m_key;
  __asm { vmovdqu xmm1, xmmword ptr [rax] }
  while ( 1 )
  {
    __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
    if ( (_DWORD)this != 16 )
      break;
    _R9 += 16;
  }
  v9 = (unsigned __int64)&_R9[(int)this - (unsigned __int64)this->m_key + 1];
  if ( jsonAssertHandler )
    jsonAssertHandler(v9 <= size, "length <= size", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetName", 1107, (const char *)&queryFormat.fmt + 3);
  if ( v9 <= size )
  {
    memcpy_0(value, this->m_key, v9);
    result = 1;
    value[v9] = 0;
  }
  else
  {
LABEL_9:
    *value = 0;
    return 0;
  }
  return result;
}

/*
==============
Json::GetObject
==============
*/
char Json::GetObject(Json *this, Json *value)
{
  _R8 = this->m_value;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    return 0;
  }
  if ( *_R8 != 1 )
    return 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rdx], xmm0
  }
  return 1;
}

/*
==============
Json::GetString
==============
*/
bool Json::GetString(Json *this, char *value, unsigned __int64 size)
{
  const char *m_value; 
  unsigned __int64 v10; 
  bool result; 

  m_value = this->m_value;
  if ( *m_value != 8 )
    goto LABEL_9;
  _RAX = JSON_SCAN_CHARS[7].chars;
  _R9 = m_value + 1;
  __asm { vmovdqu xmm1, xmmword ptr [rax] }
  while ( 1 )
  {
    __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
    if ( (_DWORD)this != 16 )
      break;
    _R9 += 16;
  }
  v10 = (unsigned __int64)&_R9[(int)this - (_QWORD)m_value];
  if ( jsonAssertHandler )
    jsonAssertHandler(v10 <= size, "length <= size", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetString", 1218, (const char *)&queryFormat.fmt + 3);
  if ( v10 <= size )
  {
    memcpy_0(value, this->m_value + 1, v10);
    result = 1;
    value[v10] = 0;
  }
  else
  {
LABEL_9:
    *value = 0;
    return 0;
  }
  return result;
}

/*
==============
Json::GetString
==============
*/
char Json::GetString(Json *this, const char **value)
{
  const char *m_value; 

  m_value = this->m_value;
  if ( *m_value == 8 )
  {
    *value = m_value + 1;
    return 1;
  }
  else
  {
    *value = (char *)&queryFormat.fmt + 3;
    return 0;
  }
}

/*
==============
Json::GetText
==============
*/
bool Json::GetText(Json *this, char *value, unsigned __int64 size)
{
  const char *v5; 
  const char *v7; 
  unsigned __int64 v10; 
  bool result; 

  v5 = Json::Text(this);
  _RCX = JSON_SCAN_CHARS[7].chars;
  v7 = v5;
  _R9 = v5;
  __asm { vmovdqu xmm1, xmmword ptr [rcx] }
  while ( 1 )
  {
    __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
    if ( LODWORD(JSON_SCAN_CHARS[7].chars) != 16 )
      break;
    _R9 += 16;
  }
  v10 = (unsigned __int64)&_R9[SLODWORD(JSON_SCAN_CHARS[7].chars) - (_QWORD)v5 + 1];
  if ( jsonAssertHandler )
    jsonAssertHandler(v10 <= size, "length <= size", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetText", 1126, (const char *)&queryFormat.fmt + 3);
  if ( v10 <= size )
  {
    memcpy_0(value, v7, v10);
    result = 1;
    value[v10] = 0;
  }
  else
  {
    *value = 0;
    return 0;
  }
  return result;
}

/*
==============
Json::GetUInt16
==============
*/
char Json::GetUInt16(Json *this, unsigned __int16 *value)
{
  unsigned __int64 v3; 
  char result; 
  unsigned __int64 valuea; 

  if ( !Json::GetUInt64(this, &valuea) )
    goto LABEL_6;
  v3 = valuea;
  if ( jsonAssertHandler )
    jsonAssertHandler(valuea <= 0xFFFF, "v64 <= UINT16_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetUInt16", 1457, (const char *)&queryFormat.fmt + 3);
  if ( v3 <= 0xFFFF )
  {
    *value = v3;
    return 1;
  }
  else
  {
LABEL_6:
    result = 0;
    *value = 0;
  }
  return result;
}

/*
==============
Json::GetUInt32
==============
*/
char Json::GetUInt32(Json *this, unsigned int *value)
{
  unsigned __int64 v3; 
  char result; 
  unsigned __int64 valuea; 

  if ( !Json::GetUInt64(this, &valuea) )
    goto LABEL_6;
  v3 = valuea;
  if ( jsonAssertHandler )
    jsonAssertHandler(valuea <= 0xFFFFFFFF, "v64 <= UINT32_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetUInt32", 1478, (const char *)&queryFormat.fmt + 3);
  if ( v3 <= 0xFFFFFFFF )
  {
    *value = v3;
    return 1;
  }
  else
  {
LABEL_6:
    result = 0;
    *value = 0;
  }
  return result;
}

/*
==============
Json::GetUInt64
==============
*/
char Json::GetUInt64(Json *this, unsigned __int64 *value)
{
  const char *m_value; 
  char v7; 
  const char *v8; 
  const char *v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int128 v14; 
  __int128 v15; 

  *value = 0i64;
  m_value = this->m_value;
  if ( *m_value >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[7].chars;
    _R8 = this->m_value;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v7 = 0;
    v8 = &_R8[(int)this];
    v9 = this->m_value;
    v10 = 0i64;
    if ( m_value != v8 )
    {
      while ( 1 )
      {
        LOBYTE(v11) = `std::_Digit_from_char'::`2'::_Digit_from_byte[*(unsigned __int8 *)v9];
        if ( (unsigned __int8)v11 >= 0xAu )
          goto LABEL_14;
        if ( v10 < 0x1999999999999999i64 )
          break;
        if ( v10 == 0x1999999999999999i64 )
        {
          v11 = (unsigned __int8)v11;
          if ( (unsigned __int8)v11 <= 5ui64 )
            goto LABEL_12;
        }
        v7 = 1;
LABEL_13:
        if ( ++v9 == v8 )
          goto LABEL_14;
      }
      v11 = (unsigned __int8)v11;
LABEL_12:
      v10 = v11 + 10 * v10;
      goto LABEL_13;
    }
LABEL_14:
    if ( v9 == m_value )
    {
      *(_QWORD *)&v14 = m_value;
      DWORD2(v14) = 22;
    }
    else
    {
      *(_QWORD *)&v14 = v9;
      if ( v7 )
      {
        DWORD2(v14) = 34;
      }
      else
      {
        *value = v10;
        DWORD2(v14) = 0;
      }
    }
    __asm
    {
      vmovups xmm0, [rsp+18h+var_18]
      vmovdqa [rsp+18h+var_18], xmm0
    }
    if ( !DWORD2(v15) && (const char *)v15 == v8 )
      return 1;
    *value = 0i64;
  }
  return 0;
}

/*
==============
Json::GetUInt8
==============
*/
char Json::GetUInt8(Json *this, unsigned __int8 *value)
{
  unsigned __int64 v3; 
  char result; 
  unsigned __int64 valuea; 

  if ( !Json::GetUInt64(this, &valuea) )
    goto LABEL_6;
  v3 = valuea;
  if ( jsonAssertHandler )
    jsonAssertHandler(valuea <= 0xFF, "v64 <= UINT8_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetUInt8", 1436, (const char *)&queryFormat.fmt + 3);
  if ( v3 <= 0xFF )
  {
    *value = v3;
    return 1;
  }
  else
  {
LABEL_6:
    result = 0;
    *value = 0;
  }
  return result;
}

/*
==============
JsonSerializer::Int
==============
*/
char JsonSerializer::Int(JsonSerializer *this, const char *name, __int64 value)
{
  char *m_parentCount; 
  char v9; 
  __int64 v10; 
  bool v11; 
  int v13; 
  __int64 v14; 
  const char *v16; 
  const char *v19; 
  int v20; 
  __int64 v21; 
  char *m_pos; 
  unsigned __int8 v23; 
  __int64 v24; 
  __int64 v25; 
  char *v26; 
  char *v27; 
  char *v28; 
  char *v29; 
  char *v30; 
  char *v31; 
  __int64 v32; 
  bool v33; 
  char Src[8]; 
  __int128 v35; 
  std::to_chars_result v36; 
  char v37[32]; 
  __int64 v38; 

  memset(v37, 0, sizeof(v37));
  _RAX = std::_Integer_to_chars<__int64>(&v36, v37, (char *const)&v38, value, 10);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vpextrd rax, xmm0, 2
    vmovups [rsp+0A8h+var_70], xmm0
  }
  if ( !(_DWORD)_RAX )
    *(_BYTE *)v35 = 0;
  m_parentCount = (char *)this->m_parentCount;
  v9 = 0;
  if ( (int)m_parentCount > 0 )
    v9 = this->m_error[(_QWORD)m_parentCount + 128];
  v10 = -1i64;
  if ( name )
  {
    if ( v9 != 1 )
    {
      v11 = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_97;
    }
  }
  else if ( v9 == 1 )
  {
    v11 = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_97;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( jsonAssertHandler )
    {
      jsonAssertHandler((int)m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount > 0 && this->m_parentTypes[(int)m_parentCount + 31] )
    {
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = asc_143DE3EFC[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
    }
    if ( this->m_indent[0] )
    {
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = p[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
      v13 = 0;
      if ( this->m_parentCount > 0 )
      {
        do
        {
          v14 = -1i64;
          do
            ++v14;
          while ( this->m_indent[v14] );
          if ( !JsonSerializer::Write(this, this->m_indent, v14) )
            return 0;
        }
        while ( ++v13 < this->m_parentCount );
      }
    }
  }
  if ( !name )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    m_parentCount = this->m_pos;
    if ( m_parentCount + 2 < this->m_end )
    {
      *m_parentCount = search[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  for ( ; *name; name = v19 + 1 )
  {
    _RAX = JSON_SCAN_CHARS[4].chars;
    v16 = name;
    _R8 = name;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)m_parentCount != 16 )
        break;
      _R8 += 16;
    }
    v19 = &_R8[(int)m_parentCount];
    v20 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v16;
    if ( this->m_closed )
      return 0;
    v21 = v20;
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( &m_pos[v20 + 1] < this->m_end )
      {
        memcpy_0(m_pos, v16, v20);
        this->m_pos += v21;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
    }
    else
    {
      this->m_pos += v20;
    }
    v23 = *v19;
    if ( !*v19 )
      break;
    LODWORD(m_parentCount) = this->m_closed;
    Src[0] = *v19;
    if ( (byte_14471F6B0[v23] & 0x10) != 0 )
    {
      if ( (_BYTE)m_parentCount )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = asc_1440E303C[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 >= this->m_end )
          goto LABEL_67;
        *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v23];
        ++this->m_pos;
      }
      else
      {
        ++this->m_pos;
      }
    }
    else
    {
      v24 = -1i64;
      do
        ++v24;
      while ( Src[v24] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v25 = (int)v24;
      if ( this->m_buffer )
      {
        v27 = this->m_pos;
        if ( &v27[(int)v24 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          continue;
        }
        memcpy_0(v27, Src, (int)v24);
        this->m_pos += v25;
      }
      else
      {
        v26 = this->m_pos;
        LODWORD(m_parentCount) = v25 + (_DWORD)v26;
        this->m_pos = &v26[v25];
      }
    }
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v28 = this->m_pos;
    if ( v28 + 2 < this->m_end )
    {
      *v28 = search[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v29 = this->m_pos;
    if ( v29 + 2 < this->m_end )
    {
      *v29 = asc_143D7E4F8[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  if ( !this->m_indent[0] )
    goto LABEL_101;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_100:
    ++this->m_pos;
    goto LABEL_101;
  }
  v30 = this->m_pos;
  if ( v30 + 2 < this->m_end )
  {
    *v30 = whitespace[0];
    goto LABEL_100;
  }
  v11 = JsonSerializer::Error(this, "out of memory");
LABEL_97:
  if ( !v11 )
    return 0;
  do
LABEL_101:
    ++v10;
  while ( v37[v10] );
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_108;
  v31 = this->m_pos;
  if ( &v31[(int)v10 + 1] < this->m_end )
  {
    memcpy_0(v31, v37, (int)v10);
LABEL_108:
    this->m_pos += (int)v10;
    goto LABEL_109;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_109:
  v32 = this->m_parentCount;
  v33 = (_DWORD)v32 == 0;
  if ( (int)v32 > 0 )
  {
    this->m_parentTypes[v32 + 31] = JSON_OBJECT;
    v33 = this->m_parentCount == 0;
  }
  if ( v33 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::Int
==============
*/
bool JsonSerializer::Int(JsonSerializer *this, __int64 value)
{
  return JsonSerializer::Int(this, NULL, value);
}

/*
==============
Json::InterpolateString
==============
*/
bool Json::InterpolateString(Json *this, const char *string, char *output, unsigned __int64 outputSize)
{
  char *v4; 
  char *v5; 
  const char *i; 
  char *v8; 
  char *v9; 
  unsigned __int64 v10; 
  char *v11; 
  unsigned __int64 v12; 
  char v13; 
  signed __int64 v14; 
  const char *v15; 
  char *v16; 
  char *v17; 
  char *v18; 
  char *v19; 
  char *v20; 
  unsigned __int64 v21; 
  signed __int64 v22; 
  char v23; 
  const char *m_value; 
  char *v25; 
  char v26; 
  void (__fastcall *v28)(bool, const char *, const char *, const char *, int, const char *); 
  char *v30; 
  char *v32; 
  const char *v33; 
  int v34; 
  int v35; 
  signed __int64 v36; 
  char v37; 
  char v39[32]; 

  v4 = &output[outputSize];
  v5 = output;
  for ( i = string; *i; v5 = &v16[Json_sprintf(v16, v4 - v16, (const char *const)&queryFormat, v25)] )
  {
    v8 = strstr_0(i, "{{");
    v9 = v8;
    v10 = v4 - v5;
    if ( !v8 )
    {
      if ( v5 )
      {
        if ( i )
        {
          if ( v10 >= v10 - 1 )
            --v10;
          if ( v10 )
          {
            v36 = i - v5;
            do
            {
              v37 = v5[v36];
              if ( !v37 )
                break;
              *v5++ = v37;
              --v10;
            }
            while ( v10 );
          }
        }
        if ( v5 )
          *v5 = 0;
      }
      break;
    }
    v11 = v5;
    v12 = v8 - i;
    if ( v5 )
    {
      if ( i )
      {
        if ( v12 >= v10 - 1 )
          v12 = v10 - 1;
        for ( ; v12; --v12 )
        {
          v13 = v11[i - v5];
          if ( !v13 )
            break;
          *v11++ = v13;
        }
      }
      if ( v11 )
        *v11 = 0;
    }
    v14 = v9 - i;
    v15 = v9 + 2;
    v16 = &v5[v14];
    v17 = strstr_0(v15, "}}");
    v18 = v17;
    if ( !v17 )
      return (char)v17;
    v19 = v17;
    v20 = v39;
    v21 = v19 - v15;
    if ( v15 )
    {
      if ( v21 >= 0x1F )
      {
        v21 = 31i64;
LABEL_18:
        v22 = v15 - v39;
        do
        {
          v23 = v20[v22];
          if ( !v23 )
            break;
          *v20++ = v23;
          --v21;
        }
        while ( v21 );
        if ( !v20 )
          goto LABEL_23;
        goto LABEL_22;
      }
      if ( v21 )
        goto LABEL_18;
    }
LABEL_22:
    *v20 = 0;
LABEL_23:
    m_value = this->m_value;
    v25 = UNDEFINED_0;
    if ( m_value )
    {
      if ( *m_value == 1 )
      {
        v26 = m_value[1];
        _RBX = m_value + 1;
        if ( v26 != 3 )
        {
          v28 = jsonAssertHandler;
          while ( 1 )
          {
            if ( v28 )
            {
              LOBYTE(v21) = v26 == 4;
              v28(v21, "*p == JSON_NAME", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetChild", 1147, (const char *)&queryFormat.fmt + 3);
            }
            _RAX = JSON_SCAN_CHARS[7].chars;
            v30 = (char *)(_RBX + 1);
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [rbx], 0 }
              if ( (_DWORD)v21 != 16 )
                break;
              _RBX += 16;
            }
            v32 = (char *)(v39 - v30);
            v33 = &_RBX[(int)v21 + 1];
            do
            {
              v34 = (unsigned __int8)v32[(_QWORD)v30];
              v35 = (unsigned __int8)*v30 - v34;
              if ( v35 )
                break;
              ++v30;
            }
            while ( v34 );
            if ( !v35 )
              break;
            _RBX = Json_Skip(v33);
            v26 = *_RBX;
            if ( *_RBX == 3 )
              goto LABEL_39;
          }
          v25 = (char *)v33;
        }
      }
    }
LABEL_39:
    switch ( *v25 )
    {
      case 0:
      case 1:
      case 2:
        v25 = (char *)&queryFormat.fmt + 3;
        break;
      case 4:
      case 8:
        ++v25;
        break;
      case 5:
        v25 = "true";
        break;
      case 6:
        v25 = "false";
        break;
      case 7:
        v25 = "null";
        break;
      default:
        break;
    }
    i = v18 + 2;
  }
  LOBYTE(v17) = 1;
  return (char)v17;
}

/*
==============
Json::IsArray
==============
*/
bool Json::IsArray(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 2;
}

/*
==============
Json::IsBool
==============
*/
bool Json::IsBool(Json *this)
{
  _R8 = this->m_value;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    return 0;
  }
  return (unsigned __int8)(*_R8 - 5) <= 1u;
}

/*
==============
Json::IsFalse
==============
*/
bool Json::IsFalse(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 6;
}

/*
==============
Json::IsFloat
==============
*/
bool Json::IsFloat(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 10;
}

/*
==============
Json::IsInteger
==============
*/
bool Json::IsInteger(Json *this)
{
  bool v2; 

  _R8 = this->m_value;
  v2 = *_R8 == 9;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    return _R8[(int)this] == 0;
  }
  return v2;
}

/*
==============
Json::IsNull
==============
*/
bool Json::IsNull(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 7;
}

/*
==============
Json::IsNumber
==============
*/
char Json::IsNumber(Json *this)
{
  _R8 = this->m_value;
  if ( *_R8 < 9 )
  {
    if ( (unsigned __int8)(*_R8 - 9) > 1u )
      return 0;
  }
  else
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
  }
  return 1;
}

/*
==============
Json::IsObject
==============
*/
bool Json::IsObject(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 1;
}

/*
==============
Json::IsString
==============
*/
bool Json::IsString(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 8;
}

/*
==============
Json::IsTrue
==============
*/
bool Json::IsTrue(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 5;
}

/*
==============
Json::IsUndefined
==============
*/
bool Json::IsUndefined(Json *this)
{
  char v2; 

  _R8 = this->m_value;
  v2 = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v2 = (_R8[(int)this] != 0) + 9;
  }
  return v2 == 0;
}

/*
==============
JsonSerializer::Json
==============
*/
JsonSerializer *JsonSerializer::Json(JsonSerializer *this, const char *name, const Json *value)
{
  const char *v5; 
  char v7; 
  const char *v10; 
  bool v11; 
  const char *v12; 
  __int64 v13; 
  char *v14; 
  const char *v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  const char *v20; 
  const char *v23; 
  int v24; 
  __int64 v25; 
  char *v26; 
  unsigned __int8 v27; 
  __int64 v28; 
  __int64 v29; 
  char *v30; 
  char *v31; 
  char *v32; 
  char *v33; 
  __int64 v34; 
  bool v35; 
  const char *v36; 
  const char *v37; 
  int v38; 
  int v40; 
  int v44; 
  char *v45; 
  __int64 v46; 
  const char *v47; 
  const char *m_value; 
  const char *m_key; 
  int v50; 
  const char *v52; 
  int v53; 
  int m_parentCount; 
  char *m_pos; 
  __int64 v59; 
  __int64 v60; 
  bool v61; 
  __int64 v62; 
  bool v63; 
  Json result; 
  Json v65; 
  char Src[8]; 

  _R9 = value->m_value;
  v5 = name;
  v7 = *_R9;
  if ( *_R9 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R9 += 16;
    }
    v7 = (_R9[(int)this] != 0) + 9;
  }
  switch ( v7 )
  {
    case 1:
      ++this->m_jsonDepth;
      if ( !JsonSerializer::BeginObject(this, name) )
        return 0;
      Json::begin((Json *)value, &result);
      m_value = result.m_value;
      m_key = result.m_key;
      v50 = 0;
      while ( 2 )
      {
        if ( m_key || m_value != UNDEFINED_0 )
        {
          __asm { vmovups xmm0, xmmword ptr [rbp+result.m_key] }
          v52 = (char *)&queryFormat.fmt + 3;
          if ( m_key )
            v52 = m_key;
          __asm { vmovdqa [rbp+var_18], xmm0 }
          if ( (unsigned __int8)JsonSerializer::Json(this, v52, &v65) )
          {
            if ( m_value && *m_value )
            {
              m_value = Json_Skip(m_value);
              result.m_value = m_value;
              if ( *m_value == 4 )
              {
                _RAX = JSON_SCAN_CHARS[7].chars;
                m_key = m_value + 1;
                result.m_key = m_value + 1;
                _R8 = m_value + 1;
                __asm { vmovdqu xmm1, xmmword ptr [rax] }
                while ( 1 )
                {
                  __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
                  if ( v53 != 16 )
                    break;
                  _R8 += 16;
                }
                m_value = &_R8[v53 + 1];
                result.m_value = m_value;
              }
              else if ( *m_value == 3 )
              {
                m_key = NULL;
                result.m_key = NULL;
                m_value = UNDEFINED_0;
                result.m_value = UNDEFINED_0;
              }
            }
            continue;
          }
          return 0;
        }
        break;
      }
      m_parentCount = this->m_parentCount;
      if ( m_parentCount > 0 && this->m_error[m_parentCount + 128] == 1 )
      {
        this->m_parentCount = m_parentCount - 1;
        if ( !this->m_indent[0] )
          goto LABEL_177;
        if ( this->m_closed )
          return 0;
        if ( this->m_buffer )
        {
          m_pos = this->m_pos;
          if ( m_pos + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_172:
            if ( this->m_parentCount > 0 )
            {
              do
              {
                v59 = -1i64;
                do
                  ++v59;
                while ( this->m_indent[v59] );
                if ( !JsonSerializer::Write(this, this->m_indent, v59) )
                  return 0;
              }
              while ( ++v50 < this->m_parentCount );
            }
LABEL_177:
            v47 = "}";
            goto LABEL_178;
          }
          *m_pos = p[0];
        }
        ++this->m_pos;
        goto LABEL_172;
      }
LABEL_183:
      if ( !JsonSerializer::Error(this, "parent type mismatch") )
        return 0;
LABEL_184:
      if ( !--this->m_jsonDepth )
      {
        v62 = this->m_parentCount;
        v63 = (_DWORD)v62 == 0;
        if ( (int)v62 > 0 )
        {
          this->m_parentTypes[v62 + 31] = JSON_OBJECT;
          v63 = this->m_parentCount == 0;
        }
        if ( v63 )
        {
          *this->m_pos = 0;
          this->m_closed = 1;
        }
      }
      return (JsonSerializer *)1;
    case 2:
      ++this->m_jsonDepth;
      if ( !JsonSerializer::BeginArray(this, name) )
        return 0;
      Json::begin((Json *)value, &result);
      v36 = result.m_value;
      v37 = result.m_key;
      v38 = 0;
      while ( 2 )
      {
        if ( v37 || v36 != UNDEFINED_0 )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+result.m_key]
            vmovdqa [rbp+var_18], xmm0
          }
          if ( (unsigned __int8)JsonSerializer::Json(this, NULL, &v65) )
          {
            if ( v36 && *v36 )
            {
              v36 = Json_Skip(v36);
              result.m_value = v36;
              if ( *v36 == 4 )
              {
                _RAX = JSON_SCAN_CHARS[7].chars;
                v37 = v36 + 1;
                result.m_key = v36 + 1;
                _R8 = v36 + 1;
                __asm { vmovdqu xmm1, xmmword ptr [rax] }
                while ( 1 )
                {
                  __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
                  if ( v40 != 16 )
                    break;
                  _R8 += 16;
                }
                v36 = &_R8[v40 + 1];
                result.m_value = v36;
              }
              else if ( *v36 == 3 )
              {
                v37 = NULL;
                result.m_key = NULL;
                v36 = UNDEFINED_0;
                result.m_value = UNDEFINED_0;
              }
            }
            continue;
          }
          return 0;
        }
        break;
      }
      v44 = this->m_parentCount;
      if ( v44 <= 0 || this->m_error[v44 + 128] != 2 )
        goto LABEL_183;
      this->m_parentCount = v44 - 1;
      if ( !this->m_indent[0] )
        goto LABEL_145;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_139;
      v45 = this->m_pos;
      if ( v45 + 2 < this->m_end )
      {
        *v45 = p[0];
LABEL_139:
        ++this->m_pos;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
      if ( this->m_parentCount > 0 )
      {
        do
        {
          v46 = -1i64;
          do
            ++v46;
          while ( this->m_indent[v46] );
          if ( !JsonSerializer::Write(this, this->m_indent, v46) )
            return 0;
          ++v38;
        }
        while ( v38 < this->m_parentCount );
      }
LABEL_145:
      v47 = "]";
LABEL_178:
      if ( JsonSerializer::Write(this, v47, 1) )
      {
        v60 = this->m_parentCount;
        v61 = (_DWORD)v60 == 0;
        if ( (int)v60 > 0 )
        {
          this->m_parentTypes[v60 + 31] = JSON_OBJECT;
          v61 = this->m_parentCount == 0;
        }
        if ( v61 )
        {
          *this->m_pos = 0;
          this->m_closed = 1;
        }
        goto LABEL_184;
      }
      return 0;
    case 5:
      return (JsonSerializer *)JsonSerializer::Bool(this, name, 1);
    case 6:
      return (JsonSerializer *)JsonSerializer::Bool(this, name, 0);
    case 7:
      return (JsonSerializer *)JsonSerializer::Null(this, name);
    case 8:
      v10 = Json::Text((Json *)value);
      return (JsonSerializer *)JsonSerializer::String(this, v5, v10);
    case 9:
    case 10:
      v12 = Json::Text((Json *)value);
      v13 = this->m_parentCount;
      LOBYTE(v14) = 0;
      v15 = v12;
      if ( (int)v13 > 0 )
        LODWORD(v14) = (unsigned __int8)this->m_error[v13 + 128];
      v16 = -1i64;
      if ( v5 )
      {
        if ( (_BYTE)v14 != 1 )
        {
          v11 = JsonSerializer::Error(this, "unexpected key outside of an object");
          goto LABEL_105;
        }
      }
      else if ( (_BYTE)v14 == 1 )
      {
        v11 = JsonSerializer::Error(this, "key expected inside object");
        goto LABEL_105;
      }
      if ( (int)v13 <= 0 )
        goto LABEL_43;
      if ( jsonAssertHandler )
      {
        jsonAssertHandler((int)v13 < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
        LODWORD(v13) = this->m_parentCount;
      }
      if ( (int)v13 <= 0 || this->m_parentTypes[(int)v13 + 31] == JSON_UNDEFINED )
        goto LABEL_30;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_29;
      v14 = this->m_pos;
      if ( v14 + 2 < this->m_end )
      {
        *v14 = asc_143DE3EFC[0];
LABEL_29:
        ++this->m_pos;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
LABEL_30:
      if ( !this->m_indent[0] )
        goto LABEL_43;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_37;
      v14 = this->m_pos;
      if ( v14 + 2 < this->m_end )
      {
        *v14 = p[0];
LABEL_37:
        ++this->m_pos;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
      v17 = 0;
      if ( this->m_parentCount > 0 )
      {
        do
        {
          v18 = -1i64;
          do
            ++v18;
          while ( this->m_indent[v18] );
          if ( !JsonSerializer::Write(this, this->m_indent, v18) )
            return 0;
        }
        while ( ++v17 < this->m_parentCount );
      }
LABEL_43:
      if ( !v5 )
        goto LABEL_109;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_50;
      v14 = this->m_pos;
      if ( v14 + 2 < this->m_end )
      {
        *v14 = search[0];
LABEL_50:
        ++this->m_pos;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
      if ( *v5 )
      {
        while ( 1 )
        {
          _RAX = JSON_SCAN_CHARS[4].chars;
          v20 = v5;
          _R8 = v5;
          __asm { vmovdqu xmm1, xmmword ptr [rax] }
          while ( 1 )
          {
            __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
            if ( (_DWORD)v14 != 16 )
              break;
            _R8 += 16;
          }
          v23 = &_R8[(int)v14];
          v24 = (_DWORD)_R8 + (_DWORD)v14 - (_DWORD)v20;
          if ( this->m_closed )
            return 0;
          v25 = v24;
          if ( !this->m_buffer )
            goto LABEL_61;
          v26 = this->m_pos;
          if ( &v26[v24 + 1] < this->m_end )
            break;
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
LABEL_62:
          v27 = *v23;
          if ( !*v23 )
            goto LABEL_86;
          LODWORD(v14) = this->m_closed;
          Src[0] = *v23;
          if ( (byte_14471F6B0[v27] & 0x10) != 0 )
          {
            if ( (_BYTE)v14 )
              return 0;
            if ( this->m_buffer )
            {
              v14 = this->m_pos;
              if ( v14 + 2 >= this->m_end )
              {
                if ( !JsonSerializer::Error(this, "out of memory") )
                  return 0;
LABEL_71:
                if ( this->m_closed )
                  return 0;
                if ( this->m_buffer )
                {
                  v14 = this->m_pos;
                  if ( v14 + 2 >= this->m_end )
                    goto LABEL_75;
                  *v14 = `JsonSerializer::QuotedString'::`2'::escape[v27];
                  ++this->m_pos;
                }
                else
                {
                  ++this->m_pos;
                }
                goto LABEL_85;
              }
              *v14 = asc_1440E303C[0];
            }
            ++this->m_pos;
            goto LABEL_71;
          }
          v28 = -1i64;
          do
            ++v28;
          while ( Src[v28] );
          if ( (_BYTE)v14 )
            return 0;
          v29 = (int)v28;
          if ( this->m_buffer )
          {
            v30 = this->m_pos;
            if ( &v30[(int)v28 + 1] >= this->m_end )
            {
LABEL_75:
              if ( !JsonSerializer::Error(this, "out of memory") )
                return 0;
              goto LABEL_85;
            }
            memcpy_0(v30, Src, (int)v28);
          }
          this->m_pos += v29;
LABEL_85:
          v5 = v23 + 1;
          if ( !*v5 )
            goto LABEL_86;
        }
        memcpy_0(v26, v20, v24);
LABEL_61:
        this->m_pos += v25;
        goto LABEL_62;
      }
LABEL_86:
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_92;
      v31 = this->m_pos;
      if ( v31 + 2 < this->m_end )
      {
        *v31 = search[0];
LABEL_92:
        ++this->m_pos;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_99;
      v32 = this->m_pos;
      if ( v32 + 2 < this->m_end )
      {
        *v32 = asc_143D7E4F8[0];
LABEL_99:
        ++this->m_pos;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
      if ( !this->m_indent[0] )
        goto LABEL_109;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_108;
      v33 = this->m_pos;
      if ( v33 + 2 < this->m_end )
      {
        *v33 = whitespace[0];
LABEL_108:
        ++this->m_pos;
        goto LABEL_109;
      }
      v11 = JsonSerializer::Error(this, "out of memory");
LABEL_105:
      if ( !v11 )
        return (JsonSerializer *)v11;
      do
LABEL_109:
        ++v16;
      while ( v15[v16] );
      if ( !JsonSerializer::Write(this, v15, v16) )
        return 0;
      v34 = this->m_parentCount;
      v35 = (_DWORD)v34 == 0;
      if ( (int)v34 > 0 )
      {
        this->m_parentTypes[v34 + 31] = JSON_OBJECT;
        v35 = this->m_parentCount == 0;
      }
      if ( v35 )
      {
        *this->m_pos = 0;
        this->m_closed = 1;
      }
      return (JsonSerializer *)1;
    default:
      if ( jsonAssertHandler )
        jsonAssertHandler(0, "false", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Json", 2360, (const char *)&queryFormat.fmt + 3);
      return 0;
  }
}

/*
==============
JsonSerializer::Json
==============
*/
JsonSerializer *JsonSerializer::Json(JsonSerializer *this, const Json *value)
{
  Json v4; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rsp+38h+var_18.m_key], xmm0
  }
  return JsonSerializer::Json(this, NULL, &v4);
}

/*
==============
Json_ParseError
==============
*/
bool Json_ParseError(char *error, int errorSize, int line, int column, const char *fmt, ...)
{
  __int64 v6; 
  unsigned __int64 v7; 
  va_list vargs; 

  va_start(vargs, fmt);
  if ( error )
  {
    v6 = errorSize;
    v7 = Json_sprintf(error, errorSize, "%d:%d ", (unsigned int)line, column);
    Json_vsprintf(&error[v7], v6 - v7, fmt, vargs);
  }
  return 0;
}

/*
==============
Json_SetAssertHandler
==============
*/
void Json_SetAssertHandler(void (*handler)(bool, const char *, const char *, const char *, int, const char *))
{
  jsonAssertHandler = handler;
}

/*
==============
Json_Skip
==============
*/
const char *Json_Skip(const char *p)
{
  int v3; 
  const char *result; 
  const char *v11; 
  int v12; 
  const char *v15; 
  __int128 v18; 

  _R9 = p;
  __asm { vmovdqu xmm0, cs:__xmm@ffffffff000000010000000100000000 }
  v3 = *p - 1;
  __asm { vmovdqu [rsp+48h+var_28], xmm0 }
  switch ( v3 )
  {
    case 0:
    case 1:
      _RAX = JSON_SCAN_CHARS[5].chars;
      v11 = p + 1;
      v12 = 1;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      do
      {
        for ( _R8 = v11; ; _R8 += 16 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
          if ( (_DWORD)p != 16 )
            break;
        }
        v15 = &_R8[(int)p];
        p = (const char *)*(unsigned __int8 *)v15;
        v11 = v15 + 1;
        v12 += *((_DWORD *)&v18 + (_QWORD)p);
      }
      while ( v12 > 0 );
      result = v11;
      break;
    case 3:
      _RAX = JSON_SCAN_CHARS[7].chars;
      _R9 = p + 1;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
        if ( (_DWORD)p != 16 )
          break;
        _R9 += 16;
      }
      result = Json_Skip(&_R9[(int)p + 1]);
      break;
    case 4:
    case 5:
    case 6:
      result = p + 1;
      break;
    case 7:
      _RAX = JSON_SCAN_CHARS[7].chars;
      _R9 = p + 1;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
        if ( (_DWORD)p != 16 )
          break;
        _R9 += 16;
      }
      goto LABEL_19;
    default:
      _RAX = JSON_SCAN_CHARS[7].chars;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
        if ( (_DWORD)p != 16 )
          break;
        _R9 += 16;
      }
LABEL_19:
      result = &_R9[(int)p + 1];
      break;
  }
  return result;
}

/*
==============
Json_sprintf
==============
*/
unsigned __int64 Json_sprintf(char *dest, unsigned __int64 destSize, const char *const fmt, ...)
{
  va_list vargs; 

  va_start(vargs, fmt);
  return Json_vsprintf(dest, destSize, fmt, vargs);
}

/*
==============
Json_vsprintf
==============
*/
unsigned __int64 Json_vsprintf(char *dest, unsigned __int64 destSize, const char *const fmt, char *vargs)
{
  unsigned __int64 *v8; 
  unsigned __int64 result; 

  v8 = j___local_stdio_printf_options();
  LODWORD(result) = __stdio_common_vsprintf(*v8 | 2, dest, destSize, fmt, NULL, vargs);
  if ( (result & 0x80000000) != 0i64 )
    LODWORD(result) = -1;
  if ( (result & 0x80000000) != 0i64 )
    return 0i64;
  result = (int)result;
  if ( (int)result > destSize - 1 )
    return destSize - 1;
  return result;
}

/*
==============
Json::Name
==============
*/
const char *Json::Name(Json *this)
{
  const char *result; 

  result = this->m_key;
  if ( !this->m_key )
    return (char *)&queryFormat.fmt + 3;
  return result;
}

/*
==============
JsonSerializer::Null
==============
*/
char JsonSerializer::Null(JsonSerializer *this, const char *name)
{
  char v3; 
  char *m_parentCount; 
  const char *v5; 
  bool v6; 
  int v8; 
  __int64 v9; 
  const char *v11; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  char *m_pos; 
  unsigned __int8 v18; 
  __int64 v19; 
  __int64 v20; 
  char *v21; 
  char *v22; 
  char *v23; 
  char *v24; 
  char *v25; 
  __int64 v26; 
  bool v27; 
  char Src[8]; 

  v3 = 0;
  m_parentCount = (char *)this->m_parentCount;
  v5 = name;
  if ( (int)m_parentCount > 0 )
    v3 = this->m_error[(_QWORD)m_parentCount + 128];
  if ( name )
  {
    if ( v3 != 1 )
    {
      v6 = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_95;
    }
  }
  else if ( v3 == 1 )
  {
    v6 = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_95;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( jsonAssertHandler )
    {
      jsonAssertHandler((int)m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount <= 0 || this->m_parentTypes[(int)m_parentCount + 31] == JSON_UNDEFINED )
      goto LABEL_20;
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_parentCount = this->m_pos;
      if ( m_parentCount + 2 >= this->m_end )
      {
        if ( !JsonSerializer::Error(this, "out of memory") )
          return 0;
LABEL_20:
        if ( !this->m_indent[0] )
          goto LABEL_33;
        if ( this->m_closed )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
            goto LABEL_28;
          }
          *m_parentCount = p[0];
        }
        ++this->m_pos;
LABEL_28:
        v8 = 0;
        if ( this->m_parentCount > 0 )
        {
          while ( 1 )
          {
            v9 = -1i64;
            do
              ++v9;
            while ( this->m_indent[v9] );
            if ( !JsonSerializer::Write(this, this->m_indent, v9) )
              return 0;
            if ( ++v8 >= this->m_parentCount )
              goto LABEL_33;
          }
        }
        goto LABEL_33;
      }
      *m_parentCount = asc_143DE3EFC[0];
    }
    ++this->m_pos;
    goto LABEL_20;
  }
LABEL_33:
  if ( !v5 )
    goto LABEL_99;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_40;
  m_parentCount = this->m_pos;
  if ( m_parentCount + 2 < this->m_end )
  {
    *m_parentCount = search[0];
LABEL_40:
    ++this->m_pos;
    goto LABEL_41;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_41:
  if ( *v5 )
  {
    while ( 1 )
    {
      _RAX = JSON_SCAN_CHARS[4].chars;
      v11 = v5;
      _R8 = v5;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v14 = &_R8[(int)m_parentCount];
      v15 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v11;
      if ( this->m_closed )
        return 0;
      v16 = v15;
      if ( !this->m_buffer )
        goto LABEL_51;
      m_pos = this->m_pos;
      if ( &m_pos[v15 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_52:
      v18 = *v14;
      if ( !*v14 )
        goto LABEL_76;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v14;
      if ( (byte_14471F6B0[v18] & 0x10) != 0 )
      {
        if ( (_BYTE)m_parentCount )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_61:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
                goto LABEL_65;
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v18];
              ++this->m_pos;
            }
            else
            {
              ++this->m_pos;
            }
            goto LABEL_75;
          }
          *m_parentCount = asc_1440E303C[0];
        }
        ++this->m_pos;
        goto LABEL_61;
      }
      v19 = -1i64;
      do
        ++v19;
      while ( Src[v19] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v20 = (int)v19;
      if ( this->m_buffer )
      {
        v21 = this->m_pos;
        if ( &v21[(int)v19 + 1] >= this->m_end )
        {
LABEL_65:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_75;
        }
        memcpy_0(v21, Src, (int)v19);
      }
      this->m_pos += v20;
LABEL_75:
      v5 = v14 + 1;
      if ( !*v5 )
        goto LABEL_76;
    }
    memcpy_0(m_pos, v11, v15);
LABEL_51:
    this->m_pos += v16;
    goto LABEL_52;
  }
LABEL_76:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_82;
  v22 = this->m_pos;
  if ( v22 + 2 < this->m_end )
  {
    *v22 = search[0];
LABEL_82:
    ++this->m_pos;
    goto LABEL_83;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_83:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_89;
  v23 = this->m_pos;
  if ( v23 + 2 < this->m_end )
  {
    *v23 = asc_143D7E4F8[0];
LABEL_89:
    ++this->m_pos;
    goto LABEL_90;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_90:
  if ( !this->m_indent[0] )
    goto LABEL_99;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_98:
    ++this->m_pos;
    goto LABEL_99;
  }
  v24 = this->m_pos;
  if ( v24 + 2 < this->m_end )
  {
    *v24 = whitespace[0];
    goto LABEL_98;
  }
  v6 = JsonSerializer::Error(this, "out of memory");
LABEL_95:
  if ( !v6 )
    return 0;
LABEL_99:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_105:
    this->m_pos += 4;
    goto LABEL_106;
  }
  v25 = this->m_pos;
  if ( v25 + 5 < this->m_end )
  {
    *(_DWORD *)v25 = *(_DWORD *)"null";
    goto LABEL_105;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_106:
  v26 = this->m_parentCount;
  v27 = (_DWORD)v26 == 0;
  if ( (int)v26 > 0 )
  {
    this->m_parentTypes[v26 + 31] = JSON_OBJECT;
    v27 = this->m_parentCount == 0;
  }
  if ( v27 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::Null
==============
*/
bool JsonSerializer::Null(JsonSerializer *this)
{
  return JsonSerializer::Null(this, NULL);
}

/*
==============
Json::Parse
==============
*/
char Json::Parse(Json *this, char *text, char *error, int errorSize)
{
  int v4; 
  int v5; 
  char *v6; 
  __int64 v8; 
  int v9; 
  char *v10; 
  int v11; 
  char *v12; 
  char *v16; 
  unsigned __int64 v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  char v21; 
  __int64 v22; 
  bool v23; 
  __int64 v24; 
  char *v28; 
  char *v29; 
  unsigned __int64 v30; 
  int v31; 
  int v32; 
  char *v36; 
  char *v37; 
  unsigned __int64 v38; 
  int v39; 
  int v40; 
  _BYTE *v41; 
  char *v42; 
  unsigned __int64 v43; 
  _BYTE *v45; 
  const void *v48; 
  _BYTE *v49; 
  int v50; 
  unsigned __int64 v51; 
  int k; 
  __int64 v53; 
  unsigned __int64 v54; 
  const char *fmt; 
  char *v56; 
  int v57; 
  bool v58; 
  int v59; 
  int v60; 
  int v61; 
  __int64 v62; 
  char *v66; 
  char *v67; 
  unsigned __int64 v68; 
  int v69; 
  int v70; 
  char *v71; 
  char *v75; 
  unsigned __int64 v76; 
  unsigned __int64 v77; 
  bool v78; 
  int v79; 
  int v80; 
  char v81; 
  char *v85; 
  char *v86; 
  unsigned __int64 v87; 
  int v88; 
  int v89; 
  _BYTE *v90; 
  char *v91; 
  Json *v92; 
  _BYTE *v94; 
  const void *v97; 
  _BYTE *v98; 
  int v99; 
  int i; 
  __int64 v101; 
  Json *v102; 
  unsigned __int64 v103; 
  unsigned __int64 v104; 
  unsigned __int64 v105; 
  bool v106; 
  int v107; 
  char *v111; 
  char *v112; 
  unsigned __int64 v113; 
  int v114; 
  int v115; 
  char *j; 
  char *v117; 
  char v118; 
  char v119; 
  char v120; 
  char v121; 
  char *v122; 
  char v123; 
  int v124; 
  char *v128; 
  char *v129; 
  unsigned __int64 v130; 
  int v131; 
  int v132; 
  int v133; 
  const char *v134; 
  char v135; 
  char *v139; 
  char *v140; 
  unsigned __int64 v141; 
  int v142; 
  int v143; 
  int v144; 
  const char *v145; 
  char v146; 
  char *v150; 
  char *v151; 
  unsigned __int64 v152; 
  int v153; 
  int v154; 
  int v155; 
  const char *v156; 
  char v157; 
  char *v161; 
  unsigned __int64 v162; 
  unsigned __int64 v163; 
  int v164; 
  int v165; 
  __int64 v167; 
  int v170; 
  char *v171; 
  char *v172; 
  Json *v174; 
  char v175[64]; 

  v4 = -1;
  v170 = -1;
  v5 = errorSize;
  v6 = error;
  v174 = this;
  if ( error && v5 )
    *error = 0;
  v8 = (unsigned __int8)*text;
  v9 = 1;
  v10 = text;
  v11 = 1;
  if ( (byte_14471F6B0[v8] & 2) != 0 )
  {
    _RAX = JSON_SCAN_CHARS[1].chars;
    _R8 = text + 1;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v16 = text;
    v12 = &_R8[(int)this];
    v17 = v12 - text;
    if ( text > v12 )
      v17 = 0i64;
    if ( v17 )
    {
      do
      {
        this = (Json *)(unsigned __int8)*v16;
        v18 = v11 + 1;
        v11 = 1;
        if ( (_BYTE)this != 10 )
          v11 = v18;
        v19 = v9 + 1;
        if ( (_BYTE)this != 10 )
          v19 = v9;
        ++v16;
        v9 = v19;
      }
      while ( v16 - text < v17 );
    }
    LOBYTE(v8) = *v12;
  }
  else
  {
    v12 = text;
  }
  v20 = -1i64;
LABEL_19:
  LOBYTE(this) = 0;
  v21 = 0;
  if ( v20 >= 0 )
  {
    v21 = v175[v20 + 32];
    this = (Json *)(unsigned __int8)v175[v20];
  }
  while ( 1 )
  {
    v22 = v20;
    if ( (_BYTE)v8 == 125 )
    {
      v23 = v21 == 1;
    }
    else
    {
      if ( (_BYTE)v8 != 93 )
        break;
      v23 = v21 == 2;
    }
    if ( !v23 )
      break;
    v24 = (unsigned __int8)v12[1];
    ++v11;
    ++v12;
    if ( (byte_14471F6B0[v24] & 2) != 0 )
    {
      _RAX = JSON_SCAN_CHARS[1].chars;
      _R8 = v12 + 1;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
        if ( (_DWORD)this != 16 )
          break;
        _R8 += 16;
      }
      v28 = &_R8[(int)this];
      v29 = v12;
      v30 = v28 - v12;
      if ( v12 > v28 )
        v30 = 0i64;
      if ( v30 )
      {
        do
        {
          this = (Json *)(unsigned __int8)*v29;
          v31 = v11 + 1;
          v11 = 1;
          if ( (_BYTE)this != 10 )
            v11 = v31;
          v32 = v9 + 1;
          if ( (_BYTE)this != 10 )
            v32 = v9;
          ++v29;
          v9 = v32;
        }
        while ( v29 - v12 < v30 );
      }
      LOBYTE(v24) = *v28;
      v12 = v28;
    }
    LOBYTE(v8) = v24;
    if ( v20 < 0 )
    {
      Json_ParseError(v6, v5, v9, v11, "parent underflow");
      return 0;
    }
    --v4;
    --v20;
    LOBYTE(this) = 0;
    v170 = v4;
    v21 = 0;
    if ( v22 <= 0 || (v21 = v175[v20 + 32], this = (Json *)(unsigned __int8)v175[v20], !v21) )
    {
      if ( (_BYTE)v24 )
      {
        LODWORD(v167) = *v12;
        Json_ParseError(v6, v5, v9, v11, "trailing json source after end of toplevel object '%c'", v167);
        return 0;
      }
    }
    *v10++ = 3;
  }
  if ( (_BYTE)this )
  {
    if ( (_BYTE)v8 == 44 )
    {
      v8 = (unsigned __int8)v12[1];
      ++v11;
      ++v12;
      if ( (byte_14471F6B0[v8] & 2) != 0 )
      {
        _RAX = JSON_SCAN_CHARS[1].chars;
        _R8 = v12 + 1;
        __asm { vmovdqu xmm1, xmmword ptr [rax] }
        while ( 1 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
          if ( (_DWORD)this != 16 )
            break;
          _R8 += 16;
        }
        v36 = &_R8[(int)this];
        v37 = v12;
        v38 = v36 - v12;
        if ( v12 > v36 )
          v38 = 0i64;
        if ( v38 )
        {
          do
          {
            v39 = v11 + 1;
            v11 = 1;
            if ( *v37 != 10 )
              v11 = v39;
            v40 = v9 + 1;
            if ( *v37 != 10 )
              v40 = v9;
            ++v37;
            v9 = v40;
          }
          while ( v37 - v12 < v38 );
        }
        LOBYTE(v8) = *v36;
        v12 = v36;
      }
    }
    else if ( (((_BYTE)v8 - 93) & 0xDF) != 0 )
    {
      goto LABEL_305;
    }
  }
  if ( v21 != 1 )
    goto LABEL_134;
  if ( (_BYTE)v8 != 34 )
  {
LABEL_305:
    LODWORD(v167) = *v12;
LABEL_313:
    Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v167);
    return 0;
  }
  *v10 = 4;
  v41 = v12 + 1;
  v42 = v10 + 1;
  v171 = v10 + 1;
  v43 = 0i64;
  if ( !v12[1] )
    return 0;
  while ( 1 )
  {
    _RAX = JSON_SCAN_CHARS[0].chars;
    v45 = v41;
    _R8 = v41;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v48 = v41;
    v49 = &_R8[(int)this];
    memmove_0(v42, v48, v49 - v45);
    v42 += v49 - v45;
    if ( *v49 == 34 )
    {
      *v42 = 0;
      if ( v43 )
      {
        fmt = "end of string with incomplete surrogate pair";
        goto LABEL_101;
      }
      v61 = (_DWORD)v49 + 1 - (_DWORD)v45;
      v12 = v49 + 1;
      v56 = error;
      v10 = v42 + 1;
      v57 = errorSize;
      v11 += v61 + 1;
LABEL_105:
      v62 = (unsigned __int8)*v12;
      if ( (byte_14471F6B0[v62] & 2) != 0 )
      {
        _RAX = JSON_SCAN_CHARS[1].chars;
        _R8 = v12 + 1;
        __asm { vmovdqu xmm1, xmmword ptr [rax] }
        while ( 1 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
          if ( (_DWORD)this != 16 )
            break;
          _R8 += 16;
        }
        v66 = &_R8[(int)this];
        v67 = v12;
        v68 = v66 - v12;
        if ( v12 > v66 )
          v68 = 0i64;
        if ( v68 )
        {
          do
          {
            v69 = v11 + 1;
            v11 = 1;
            if ( *v12 != 10 )
              v11 = v69;
            v70 = v9 + 1;
            if ( *v12 != 10 )
              v70 = v9;
            ++v12;
            v9 = v70;
          }
          while ( v12 - v67 < v68 );
        }
        LOBYTE(v62) = *v66;
        v12 = v66;
      }
      v71 = v12;
      if ( (_BYTE)v62 != 58 )
      {
        LODWORD(v167) = *v12;
        Json_ParseError(v56, v57, v9, v11, "unexpected character '%c'", v167);
        return 0;
      }
      v8 = (unsigned __int8)v12[1];
      ++v11;
      ++v12;
      if ( (byte_14471F6B0[v8] & 2) != 0 )
      {
        _RAX = JSON_SCAN_CHARS[1].chars;
        _R8 = v71 + 2;
        __asm { vmovdqu xmm1, xmmword ptr [rax] }
        while ( 1 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
          if ( (_DWORD)this != 16 )
            break;
          _R8 += 16;
        }
        v75 = &_R8[(int)this];
        v76 = v75 - v12;
        if ( v12 > v75 )
          v76 = 0i64;
        if ( v76 )
        {
          v77 = ~(unsigned __int64)v71;
          do
          {
            v78 = *v12 == 10;
            v79 = v11 + 1;
            v11 = 1;
            ++v12;
            if ( !v78 )
              v11 = v79;
            v80 = v9 + 1;
            if ( !v78 )
              v80 = v9;
            v9 = v80;
          }
          while ( (unsigned __int64)&v12[v77] < v76 );
        }
        LOBYTE(v8) = *v75;
        v12 = &_R8[(int)this];
      }
      v6 = error;
      v5 = errorSize;
      v4 = v170;
LABEL_134:
      if ( v20 >= 0 )
        v175[v20] = 1;
      switch ( (char)v8 )
      {
        case 0:
          if ( v4 < 0 && v10 != text )
          {
            v174->m_value = text;
            return 1;
          }
          Json_ParseError(v6, v5, v9, v11, "unexpected end of input");
          return 0;
        case 34:
          *v10 = 8;
          v90 = v12 + 1;
          v91 = v10 + 1;
          v172 = v10 + 1;
          v92 = NULL;
          if ( !v12[1] )
            return 0;
          while ( 2 )
          {
            _RAX = JSON_SCAN_CHARS[0].chars;
            v94 = v90;
            _R8 = v90;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v97 = v90;
            v98 = &_R8[(int)this];
            memmove_0(v91, v97, v98 - v94);
            v91 += v98 - v94;
            if ( *v98 == 34 )
            {
              *v91 = 0;
              if ( !v92 )
              {
                v107 = (_DWORD)v98 + 1 - (_DWORD)v94;
                v12 = v98 + 1;
                v10 = v91 + 1;
                v11 += v107 + 1;
                goto LABEL_195;
              }
              v106 = Json_ParseError(error, errorSize, v9, v11, "end of string with incomplete surrogate pair");
            }
            else
            {
              if ( *v98 != 92 )
                return 0;
              this = (Json *)(unsigned __int8)v98[1];
              if ( (byte_14471F6B0[(_QWORD)this] & 0x40) != 0 )
              {
                *v91++ = byte_14471F7F0[(_QWORD)this];
                v90 = v98 + 2;
                goto LABEL_182;
              }
              if ( (((_BYTE)this - 85) & 0xDF) != 0 )
              {
                LODWORD(v167) = (char)v98[1];
                v106 = Json_ParseError(error, errorSize, v9, v11, "unknown escape sequence '\\%c'", v167);
              }
              else
              {
                v90 = v98 + 2;
                v99 = 4;
                if ( (_BYTE)this == 85 )
                  v99 = 8;
                this = NULL;
                for ( i = 0; i < v99; ++i )
                {
                  v101 = (unsigned __int8)*v90++;
                  if ( (byte_14471F6B0[v101] & 8) == 0 )
                  {
                    LODWORD(v167) = (char)*v90;
                    v106 = Json_ParseError(error, errorSize, v9, v11, "unexpected char '%c'", v167);
                    goto LABEL_192;
                  }
                  v102 = (Json *)((16i64 * (_QWORD)this) | (unsigned __int8)byte_14471F7F0[v101 + 320]);
                  this = v102;
                }
                if ( (unsigned __int64)v102 < 4 )
                {
                  v106 = Json_ParseError(error, errorSize, v9, v11, "unicode escape sequence \\u00%02zu is not allowed, it unescapes to byte 0x%02zu which is a reserved value and would cause invalid traversal", (size_t)v102, (size_t)v102);
                  break;
                }
                if ( (unsigned __int64)&v102[-3456] > 0x3FF )
                {
                  if ( (unsigned __int64)&v102[-3520] <= 0x3FF )
                  {
                    if ( !v92 )
                    {
                      v106 = Json_ParseError(error, errorSize, v9, v11, "second surrogate found without a first");
                      break;
                    }
                    this = &v102[64 * (_QWORD)v92 - 3538368];
                    v92 = NULL;
                  }
                  if ( (unsigned __int64)this > 0x10FFFF )
                  {
                    v106 = Json_ParseError(error, errorSize, v9, v11, "unicode escape sequence out of range");
                    break;
                  }
                  if ( (unsigned __int64)this < 0x10000 )
                  {
                    if ( (unsigned __int64)this < 0x800 )
                    {
                      if ( (unsigned __int64)this < 0x80 )
                      {
                        *v91++ = (char)this;
                      }
                      else
                      {
                        v105 = (unsigned __int64)this >> 6;
                        LOBYTE(this) = (unsigned __int8)this & 0x3F | 0x80;
                        v91[1] = (char)this;
                        *v91 = v105 | 0xC0;
                        v91 += 2;
                      }
                    }
                    else
                    {
                      *v91 = ((unsigned __int64)this >> 12) | 0xE0;
                      v104 = (unsigned __int64)this >> 6;
                      LOBYTE(this) = (unsigned __int8)this & 0x3F | 0x80;
                      v91[2] = (char)this;
                      v91[1] = v104 & 0x3F | 0x80;
                      v91 += 3;
                    }
                  }
                  else
                  {
                    *v91 = ((unsigned __int64)this >> 18) | 0xF0;
                    v91[1] = ((unsigned __int64)this >> 12) & 0x3F | 0x80;
                    v103 = (unsigned __int64)this >> 6;
                    LOBYTE(this) = (unsigned __int8)this & 0x3F | 0x80;
                    v91[3] = (char)this;
                    v91[2] = v103 & 0x3F | 0x80;
                    v91 += 4;
                  }
LABEL_182:
                  if ( !*v90 )
                    return 0;
                  continue;
                }
                if ( !v92 )
                {
                  v92 = v102;
                  goto LABEL_182;
                }
                v106 = Json_ParseError(error, errorSize, v9, v11, "second first surrogate found");
              }
            }
            break;
          }
LABEL_192:
          if ( !v106 )
            return 0;
          v10 = v172;
LABEL_195:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _RAX = JSON_SCAN_CHARS[1].chars;
            _R8 = v12 + 1;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v111 = &_R8[(int)this];
            v112 = v12;
            v113 = v111 - v12;
            if ( v12 > v111 )
              v113 = 0i64;
            if ( v113 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v12;
                v114 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v114;
                v115 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v115 = v9;
                ++v12;
                v9 = v115;
              }
              while ( v12 - v112 < v113 );
            }
            LOBYTE(v8) = *v111;
            v12 = v111;
          }
          v6 = error;
          v5 = errorSize;
          v4 = v170;
          goto LABEL_19;
        case 45:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
          j = v12 + 1;
          v117 = v12;
          if ( *v12 != 45 )
            j = v12;
          v118 = *j;
          if ( *j == 48 )
          {
            ++j;
          }
          else
          {
            if ( (unsigned __int8)(v118 - 49) > 8u )
              goto LABEL_231;
            if ( v118 >= 48 )
            {
              v119 = *j;
              do
              {
                if ( v119 > 57 )
                  break;
                v119 = *++j;
              }
              while ( v119 >= 48 );
            }
          }
          if ( *j != 46 )
            goto LABEL_223;
          v118 = j[1];
          if ( (unsigned __int8)(v118 - 48) > 9u )
            goto LABEL_231;
          v120 = j[2];
          for ( j += 2; v120 >= 48; v120 = *++j )
          {
            if ( v120 > 57 )
              break;
          }
LABEL_223:
          if ( ((*j - 69) & 0xDF) != 0 )
            goto LABEL_230;
          v121 = j[1];
          v122 = j + 1;
          if ( ((v121 - 43) & 0xFD) == 0 )
            ++v122;
          v118 = *v122;
          if ( (unsigned __int8)(*v122 - 48) <= 9u )
          {
            v123 = v122[1];
            for ( j = v122 + 1; v123 >= 48; v123 = *++j )
            {
              if ( v123 > 57 )
                break;
            }
LABEL_230:
            memcpy_0(v10, v12, j - v12);
            v124 = (_DWORD)j - (_DWORD)v12;
            v12 = j;
            v11 += v124;
            v10 += j - v117;
            goto LABEL_232;
          }
LABEL_231:
          LODWORD(v167) = v118;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c' while parsing number", v167) )
            return 0;
LABEL_232:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _RAX = JSON_SCAN_CHARS[1].chars;
            _R8 = v12 + 1;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v128 = &_R8[(int)this];
            v129 = v12;
            v130 = v128 - v12;
            if ( v12 > v128 )
              v130 = 0i64;
            if ( v130 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v12;
                v131 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v131;
                v132 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v132 = v9;
                ++v12;
                v9 = v132;
              }
              while ( v12 - v129 < v130 );
            }
            LOBYTE(v8) = *v128;
            v12 = v128;
          }
          v6 = error;
          v4 = v170;
          *v10++ = 0;
          break;
        case 91:
        case 123:
          ++v4;
          v81 = ((_BYTE)v8 == 91) + 1;
          v170 = v4;
          ++v11;
          if ( ++v20 >= 32 )
          {
            LODWORD(v167) = 32;
            Json_ParseError(v6, v5, v9, v11, "json depth exceeds JSON_MAX_PARENT_COUNT = %d", v167);
            return 0;
          }
          v175[v20 + 32] = v81;
          if ( (unsigned __int64)v20 >= 0x20 )
          {
            j___report_rangecheckfailure(this);
            __debugbreak();
          }
          v8 = (unsigned __int8)*++v12;
          v175[v20] = 0;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _RAX = JSON_SCAN_CHARS[1].chars;
            _R8 = v12 + 1;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v85 = &_R8[(int)this];
            v86 = v12;
            v87 = v85 - v12;
            if ( v12 > v85 )
              v87 = 0i64;
            if ( v87 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v86;
                v88 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v88;
                v89 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v89 = v9;
                ++v86;
                v9 = v89;
              }
              while ( v86 - v12 < v87 );
            }
            LOBYTE(v8) = *v85;
            v12 = v85;
          }
          *v10++ = v81;
          goto LABEL_19;
        case 102:
          v155 = (int)v12;
          v156 = "false";
          LOBYTE(this) = 102;
          while ( 1 )
          {
            v157 = *v12++;
            if ( (_BYTE)this != v157 )
              break;
            this = (Json *)*(unsigned __int8 *)++v156;
            if ( !(_BYTE)this )
            {
              v11 += (_DWORD)v12 - v155;
              goto LABEL_289;
            }
          }
          LODWORD(v167) = *v12;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v167) )
            return 0;
LABEL_289:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _RAX = JSON_SCAN_CHARS[1].chars;
            _R8 = v12 + 1;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v161 = &_R8[(int)this];
            v162 = 0i64;
            v163 = v161 - v12;
            if ( v12 > v161 )
              v163 = 0i64;
            if ( v163 )
            {
              do
              {
                this = (Json *)(unsigned __int8)v12[v162];
                v164 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v164;
                v165 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v165 = v9;
                ++v162;
                v9 = v165;
              }
              while ( v162 < v163 );
            }
            LOBYTE(v8) = *v161;
            v12 = v161;
          }
          v6 = error;
          *v10++ = 6;
          goto LABEL_19;
        case 110:
          v133 = (int)v12;
          v134 = "null";
          LOBYTE(this) = 110;
          while ( 1 )
          {
            v135 = *v12++;
            if ( (_BYTE)this != v135 )
              break;
            this = (Json *)*(unsigned __int8 *)++v134;
            if ( !(_BYTE)this )
            {
              v11 += (_DWORD)v12 - v133;
              goto LABEL_251;
            }
          }
          LODWORD(v167) = *v12;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v167) )
            return 0;
LABEL_251:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _RAX = JSON_SCAN_CHARS[1].chars;
            _R8 = v12 + 1;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v139 = &_R8[(int)this];
            v140 = v12;
            v141 = v139 - v12;
            if ( v12 > v139 )
              v141 = 0i64;
            if ( v141 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v12;
                v142 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v142;
                v143 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v143 = v9;
                ++v12;
                v9 = v143;
              }
              while ( v12 - v140 < v141 );
            }
            LOBYTE(v8) = *v139;
            v12 = v139;
          }
          v6 = error;
          *v10++ = 7;
          goto LABEL_19;
        case 116:
          v144 = (int)v12;
          v145 = "true";
          LOBYTE(this) = 116;
          while ( 1 )
          {
            v146 = *v12++;
            if ( (_BYTE)this != v146 )
              break;
            this = (Json *)*(unsigned __int8 *)++v145;
            if ( !(_BYTE)this )
            {
              v11 += (_DWORD)v12 - v144;
              goto LABEL_270;
            }
          }
          LODWORD(v167) = *v12;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v167) )
            return 0;
LABEL_270:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _RAX = JSON_SCAN_CHARS[1].chars;
            _R8 = v12 + 1;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v150 = &_R8[(int)this];
            v151 = v12;
            v152 = v150 - v12;
            if ( v12 > v150 )
              v152 = 0i64;
            if ( v152 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v12;
                v153 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v153;
                v154 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v154 = v9;
                ++v12;
                v9 = v154;
              }
              while ( v12 - v151 < v152 );
            }
            LOBYTE(v8) = *v150;
            v12 = v150;
          }
          v6 = error;
          *v10++ = 5;
          goto LABEL_19;
        default:
          LODWORD(v167) = (char)v8;
          goto LABEL_313;
      }
      goto LABEL_19;
    }
    if ( *v49 != 92 )
      return 0;
    this = (Json *)(unsigned __int8)v49[1];
    if ( (byte_14471F6B0[(_QWORD)this] & 0x40) != 0 )
    {
      *v42++ = byte_14471F7F0[(_QWORD)this];
      v41 = v49 + 2;
      goto LABEL_91;
    }
    if ( (((_BYTE)this - 85) & 0xDF) != 0 )
    {
      v60 = (char)v49[1];
      v56 = error;
      v57 = errorSize;
      LODWORD(v167) = v60;
      v58 = Json_ParseError(error, errorSize, v9, v11, "unknown escape sequence '\\%c'", v167);
      goto LABEL_102;
    }
    v41 = v49 + 2;
    v50 = 4;
    if ( (_BYTE)this == 85 )
      v50 = 8;
    v51 = 0i64;
    for ( k = 0; k < v50; ++k )
    {
      v53 = (unsigned __int8)*v41++;
      if ( (byte_14471F6B0[v53] & 8) == 0 )
      {
        v59 = (char)*v41;
        v56 = error;
        v57 = errorSize;
        LODWORD(v167) = v59;
        v58 = Json_ParseError(error, errorSize, v9, v11, "unexpected char '%c'", v167);
        goto LABEL_102;
      }
      v54 = (16 * v51) | (unsigned __int8)byte_14471F7F0[v53 + 320];
      v51 = v54;
    }
    if ( v54 < 4 )
    {
      v56 = error;
      v57 = errorSize;
      v58 = Json_ParseError(error, errorSize, v9, v11, "unicode escape sequence \\u00%02zu is not allowed, it unescapes to byte 0x%02zu which is a reserved value and would cause invalid traversal", v54, v54);
      goto LABEL_102;
    }
    this = (Json *)(v54 - 55296);
    if ( (unsigned __int64)this <= 0x3FF )
      break;
    LODWORD(this) = v51 - 56320;
    if ( v51 - 56320 <= 0x3FF )
    {
      if ( !v43 )
      {
        fmt = "second surrogate found without a first";
        goto LABEL_101;
      }
      v51 = v51 + (v43 << 10) - 56613888;
      v43 = 0i64;
    }
    if ( v51 > 0x10FFFF )
    {
      fmt = "unicode escape sequence out of range";
      goto LABEL_101;
    }
    if ( v51 < 0x10000 )
    {
      if ( v51 < 0x800 )
      {
        if ( v51 < 0x80 )
        {
          *v42++ = v51;
        }
        else
        {
          this = (Json *)(v51 >> 6);
          LOBYTE(this) = (v51 >> 6) | 0xC0;
          v42[1] = v51 & 0x3F | 0x80;
          *v42 = (char)this;
          v42 += 2;
        }
      }
      else
      {
        *v42 = (v51 >> 12) | 0xE0;
        this = (Json *)(v51 >> 6);
        LOBYTE(this) = (v51 >> 6) & 0x3F | 0x80;
        v42[2] = v51 & 0x3F | 0x80;
        v42[1] = (char)this;
        v42 += 3;
      }
    }
    else
    {
      *v42 = (v51 >> 18) | 0xF0;
      v42[1] = (v51 >> 12) & 0x3F | 0x80;
      this = (Json *)(v51 >> 6);
      LOBYTE(this) = (v51 >> 6) & 0x3F | 0x80;
      v42[3] = v51 & 0x3F | 0x80;
      v42[2] = (char)this;
      v42 += 4;
    }
LABEL_91:
    if ( !*v41 )
      return 0;
  }
  if ( !v43 )
  {
    v43 = v51;
    goto LABEL_91;
  }
  fmt = "second first surrogate found";
LABEL_101:
  v56 = error;
  v57 = errorSize;
  v58 = Json_ParseError(error, errorSize, v9, v11, fmt);
LABEL_102:
  if ( v58 )
  {
    v10 = v171;
    goto LABEL_105;
  }
  return 0;
}

/*
==============
Json::Size
==============
*/
__int64 Json::Size(Json *this)
{
  const char *m_value; 
  __int64 v2; 
  char *v3; 
  char *v5; 
  int v6; 

  m_value = this->m_value;
  v2 = 0i64;
  if ( (unsigned __int8)(*m_value - 1) <= 1u )
  {
    v3 = NULL;
    _RDI = JSON_SCAN_CHARS[7].chars;
    v5 = UNDEFINED_0;
    if ( !m_value || !*m_value )
      goto LABEL_8;
    v6 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v6 == 4 )
    {
      __asm { vmovdqu xmm1, xmmword ptr [rdi] }
      v3 = (char *)(m_value + 2);
      _R8 = (char *)(m_value + 2);
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    }
    else
    {
      if ( (_BYTE)v6 != 3 )
        v5 = (char *)(m_value + 1);
      while ( 1 )
      {
        do
        {
LABEL_8:
          if ( !v3 && v5 == UNDEFINED_0 )
            return v2;
          ++v2;
        }
        while ( !v5 || !*v5 );
        v5 = (char *)Json_Skip(v5);
        v6 = (unsigned __int8)*v5;
        if ( (_BYTE)v6 == 4 )
          break;
        if ( (_BYTE)v6 == 3 )
        {
          v3 = NULL;
          v5 = UNDEFINED_0;
        }
      }
      __asm { vmovdqu xmm1, xmmword ptr [rdi] }
      v3 = v5 + 1;
      _R8 = v5 + 1;
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    }
    v5 = &_R8[v6 + 1];
    goto LABEL_8;
  }
  return v2;
}

/*
==============
JsonSerializer::Size
==============
*/
signed __int64 JsonSerializer::Size(JsonSerializer *this)
{
  if ( !this->m_closed || this->m_error[0] )
    return 0i64;
  else
    return this->m_pos - this->m_buffer;
}

/*
==============
JsonSerializer::String
==============
*/
char JsonSerializer::String(JsonSerializer *this, const char *name, const char *value)
{
  char v4; 
  char *m_parentCount; 
  const char *v7; 
  bool v8; 
  int v10; 
  __int64 v11; 
  const char *v13; 
  const char *v16; 
  int v17; 
  __int64 v18; 
  char *m_pos; 
  unsigned __int8 v20; 
  __int64 v21; 
  __int64 v22; 
  char *v23; 
  const char *v25; 
  const char *v28; 
  int v29; 
  __int64 v30; 
  char *v31; 
  unsigned __int8 v32; 
  __int64 v33; 
  __int64 v34; 
  char *v35; 
  char *v36; 
  __int64 v37; 
  bool v38; 
  char Src[8]; 

  v4 = 0;
  m_parentCount = (char *)this->m_parentCount;
  v7 = name;
  if ( (int)m_parentCount > 0 )
    v4 = this->m_error[(_QWORD)m_parentCount + 128];
  if ( !name )
  {
    if ( v4 == 1 )
    {
      v8 = JsonSerializer::Error(this, "key expected inside object");
      goto LABEL_8;
    }
LABEL_10:
    if ( (int)m_parentCount <= 0 )
      goto LABEL_35;
    if ( jsonAssertHandler )
    {
      jsonAssertHandler((int)m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount > 0 && this->m_parentTypes[(int)m_parentCount + 31] )
    {
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 >= this->m_end )
        {
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_22;
        }
        *m_parentCount = asc_143DE3EFC[0];
      }
      ++this->m_pos;
    }
LABEL_22:
    if ( !this->m_indent[0] )
      goto LABEL_35;
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_parentCount = this->m_pos;
      if ( m_parentCount + 2 >= this->m_end )
      {
        if ( !JsonSerializer::Error(this, "out of memory") )
          return 0;
        goto LABEL_30;
      }
      *m_parentCount = p[0];
    }
    ++this->m_pos;
LABEL_30:
    v10 = 0;
    if ( this->m_parentCount > 0 )
    {
      do
      {
        v11 = -1i64;
        do
          ++v11;
        while ( this->m_indent[v11] );
        if ( !JsonSerializer::Write(this, this->m_indent, v11) )
          return 0;
      }
      while ( ++v10 < this->m_parentCount );
    }
LABEL_35:
    if ( !v7 )
      goto LABEL_100;
    if ( this->m_closed )
      return 0;
    if ( this->m_buffer )
    {
      m_parentCount = this->m_pos;
      if ( m_parentCount + 2 >= this->m_end )
      {
        if ( !JsonSerializer::Error(this, "out of memory") )
          return 0;
LABEL_43:
        if ( *v7 )
        {
          while ( 1 )
          {
            _RAX = JSON_SCAN_CHARS[4].chars;
            v13 = v7;
            _R8 = v7;
            __asm { vmovdqu xmm1, xmmword ptr [rax] }
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
              if ( (_DWORD)m_parentCount != 16 )
                break;
              _R8 += 16;
            }
            v16 = &_R8[(int)m_parentCount];
            v17 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v13;
            if ( this->m_closed )
              return 0;
            v18 = v17;
            if ( !this->m_buffer )
              goto LABEL_53;
            m_pos = this->m_pos;
            if ( &m_pos[v17 + 1] < this->m_end )
              break;
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_54:
            v20 = *v16;
            if ( !*v16 )
              goto LABEL_78;
            LODWORD(m_parentCount) = this->m_closed;
            Src[0] = *v16;
            if ( (byte_14471F6B0[v20] & 0x10) != 0 )
            {
              if ( (_BYTE)m_parentCount )
                return 0;
              if ( this->m_buffer )
              {
                m_parentCount = this->m_pos;
                if ( m_parentCount + 2 >= this->m_end )
                {
                  if ( !JsonSerializer::Error(this, "out of memory") )
                    return 0;
LABEL_63:
                  if ( this->m_closed )
                    return 0;
                  if ( this->m_buffer )
                  {
                    m_parentCount = this->m_pos;
                    if ( m_parentCount + 2 >= this->m_end )
                      goto LABEL_67;
                    *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v20];
                    ++this->m_pos;
                  }
                  else
                  {
                    ++this->m_pos;
                  }
                  goto LABEL_77;
                }
                *m_parentCount = asc_1440E303C[0];
              }
              ++this->m_pos;
              goto LABEL_63;
            }
            v21 = -1i64;
            do
              ++v21;
            while ( Src[v21] );
            if ( (_BYTE)m_parentCount )
              return 0;
            v22 = (int)v21;
            if ( this->m_buffer )
            {
              v23 = this->m_pos;
              if ( &v23[(int)v21 + 1] >= this->m_end )
              {
LABEL_67:
                if ( !JsonSerializer::Error(this, "out of memory") )
                  return 0;
                goto LABEL_77;
              }
              memcpy_0(v23, Src, (int)v21);
            }
            this->m_pos += v22;
LABEL_77:
            v7 = v16 + 1;
            if ( !*v7 )
              goto LABEL_78;
          }
          memcpy_0(m_pos, v13, v17);
LABEL_53:
          this->m_pos += v18;
          goto LABEL_54;
        }
LABEL_78:
        if ( this->m_closed )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_85:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
              {
                if ( !JsonSerializer::Error(this, "out of memory") )
                  return 0;
LABEL_92:
                if ( !this->m_indent[0] )
                  goto LABEL_100;
                if ( this->m_closed )
                  return 0;
                if ( this->m_buffer )
                {
                  m_parentCount = this->m_pos;
                  if ( m_parentCount + 2 >= this->m_end )
                  {
                    if ( !JsonSerializer::Error(this, "out of memory") )
                      return 0;
                    goto LABEL_100;
                  }
                  *m_parentCount = whitespace[0];
                }
                ++this->m_pos;
                goto LABEL_100;
              }
              *m_parentCount = asc_143D7E4F8[0];
            }
            ++this->m_pos;
            goto LABEL_92;
          }
          *m_parentCount = search[0];
        }
        ++this->m_pos;
        goto LABEL_85;
      }
      *m_parentCount = search[0];
    }
    ++this->m_pos;
    goto LABEL_43;
  }
  if ( v4 == 1 )
    goto LABEL_10;
  v8 = JsonSerializer::Error(this, "unexpected key outside of an object");
LABEL_8:
  if ( !v8 )
    return 0;
LABEL_100:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_106;
  m_parentCount = this->m_pos;
  if ( m_parentCount + 2 < this->m_end )
  {
    *m_parentCount = search[0];
LABEL_106:
    ++this->m_pos;
    goto LABEL_107;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_107:
  if ( *value )
  {
    while ( 1 )
    {
      _RAX = JSON_SCAN_CHARS[4].chars;
      v25 = value;
      _R8 = value;
      __asm { vmovdqu xmm1, xmmword ptr [rax] }
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v28 = &_R8[(int)m_parentCount];
      v29 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v25;
      if ( this->m_closed )
        return 0;
      v30 = v29;
      if ( !this->m_buffer )
        goto LABEL_117;
      v31 = this->m_pos;
      if ( &v31[v29 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_118:
      v32 = *v28;
      if ( !*v28 )
        goto LABEL_142;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v28;
      if ( (byte_14471F6B0[v32] & 0x10) != 0 )
      {
        if ( (_BYTE)m_parentCount )
          return 0;
        if ( this->m_buffer )
        {
          m_parentCount = this->m_pos;
          if ( m_parentCount + 2 >= this->m_end )
          {
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_127:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
                goto LABEL_131;
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v32];
              ++this->m_pos;
            }
            else
            {
              ++this->m_pos;
            }
            goto LABEL_141;
          }
          *m_parentCount = asc_1440E303C[0];
        }
        ++this->m_pos;
        goto LABEL_127;
      }
      v33 = -1i64;
      do
        ++v33;
      while ( Src[v33] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v34 = (int)v33;
      if ( this->m_buffer )
      {
        v35 = this->m_pos;
        if ( &v35[(int)v33 + 1] >= this->m_end )
        {
LABEL_131:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_141;
        }
        memcpy_0(v35, Src, (int)v33);
      }
      this->m_pos += v34;
LABEL_141:
      value = v28 + 1;
      if ( !*value )
        goto LABEL_142;
    }
    memcpy_0(v31, v25, v29);
LABEL_117:
    this->m_pos += v30;
    goto LABEL_118;
  }
LABEL_142:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_148;
  v36 = this->m_pos;
  if ( v36 + 2 < this->m_end )
  {
    *v36 = search[0];
LABEL_148:
    ++this->m_pos;
    goto LABEL_149;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_149:
  v37 = this->m_parentCount;
  v38 = (_DWORD)v37 == 0;
  if ( (int)v37 > 0 )
  {
    this->m_parentTypes[v37 + 31] = JSON_OBJECT;
    v38 = this->m_parentCount == 0;
  }
  if ( v38 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::String
==============
*/
bool JsonSerializer::String(JsonSerializer *this, const char *value)
{
  return JsonSerializer::String(this, NULL, value);
}

/*
==============
Json::Text
==============
*/
const char *Json::Text(Json *this)
{
  const char *m_value; 
  const char *result; 

  m_value = this->m_value;
  switch ( *m_value )
  {
    case 0:
    case 1:
    case 2:
      result = (char *)&queryFormat.fmt + 3;
      break;
    case 4:
    case 8:
      result = m_value + 1;
      break;
    case 5:
      result = "true";
      break;
    case 6:
      result = "false";
      break;
    case 7:
      result = "null";
      break;
    default:
      result = this->m_value;
      break;
  }
  return result;
}

/*
==============
Json::ToArray
==============
*/
Json *Json::ToArray(Json *this, Json *result)
{
  _R8 = this->m_value;
  result->m_value = UNDEFINED_0;
  result->m_key = NULL;
  if ( *_R8 < 9 )
  {
    if ( *_R8 == 2 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovups xmmword ptr [rdx], xmm0
      }
    }
  }
  else
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
  }
  return result;
}

/*
==============
Json::ToBool
==============
*/
bool Json::ToBool(Json *this, bool defaultValue)
{
  char v2; 

  v2 = *this->m_value;
  if ( (unsigned __int8)(v2 - 5) > 1u )
    return defaultValue;
  else
    return v2 == 5;
}

/*
==============
Json::ToFloat32
==============
*/

float __fastcall Json::ToFloat32(Json *this, double defaultValue)
{
  int *v8; 
  char *EndPtr; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm1
  }
  if ( *this->m_value < 9 )
    goto LABEL_5;
  _set_errno(0);
  *(double *)&_XMM0 = strtod(this->m_value, &EndPtr);
  __asm { vmovaps xmm6, xmm0 }
  v8 = _errno();
  if ( *v8 )
    goto LABEL_5;
  __asm
  {
    vcomisd xmm6, cs:__real@c7efffffe0000000
    vcomisd xmm6, cs:__real@47efffffe0000000
  }
  if ( *v8 )
  {
LABEL_5:
    __asm
    {
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+48h+var_28]
    }
  }
  else
  {
    __asm
    {
      vcvtsd2ss xmm0, xmm6, xmm6
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
Json::ToFloat64
==============
*/

long double __fastcall Json::ToFloat64(Json *this, double defaultValue)
{
  char *EndPtr; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm6, xmm1
  }
  if ( *this->m_value < 9 )
    goto LABEL_4;
  _set_errno(0);
  *(double *)&_XMM0 = strtod(this->m_value, &EndPtr);
  __asm { vmovaps xmm7, xmm0 }
  if ( *_errno() )
  {
LABEL_4:
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_28]
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm0, xmm7
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
  }
  return *(double *)&_XMM0;
}

/*
==============
Json::ToInt16
==============
*/
__int64 Json::ToInt16(Json *this, __int16 defaultValue)
{
  unsigned __int16 v3; 
  unsigned __int64 v4; 
  __int64 result; 
  __int64 value; 

  if ( !Json::GetInt64(this, &value) )
    return (unsigned __int16)defaultValue;
  v3 = value;
  v4 = value + 0x8000;
  if ( jsonAssertHandler )
    jsonAssertHandler((unsigned __int64)(value + 0x8000) <= 0xFFFF, "v64 >= INT16_MIN && v64 <= INT16_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetInt16", 1336, (const char *)&queryFormat.fmt + 3);
  result = v3;
  if ( v4 > 0xFFFF )
    return (unsigned __int16)defaultValue;
  return result;
}

/*
==============
Json::ToInt32
==============
*/
__int64 Json::ToInt32(Json *this, int defaultValue)
{
  unsigned int v3; 
  unsigned __int64 v4; 
  __int64 result; 
  __int64 value; 

  if ( !Json::GetInt64(this, &value) )
    return (unsigned int)defaultValue;
  v3 = value;
  v4 = value + 0x80000000i64;
  if ( jsonAssertHandler )
    jsonAssertHandler((unsigned __int64)(value + 0x80000000i64) <= 0xFFFFFFFF, "v64 >= INT32_MIN && v64 <= INT32_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetInt32", 1357, (const char *)&queryFormat.fmt + 3);
  result = v3;
  if ( v4 > 0xFFFFFFFF )
    return (unsigned int)defaultValue;
  return result;
}

/*
==============
Json::ToInt64
==============
*/
__int64 Json::ToInt64(Json *this, __int64 defaultValue)
{
  bool Int64; 
  __int64 v4; 
  __int64 value; 

  value = 0i64;
  Int64 = Json::GetInt64(this, &value);
  v4 = value;
  if ( !Int64 )
    return defaultValue;
  return v4;
}

/*
==============
Json::ToInt8
==============
*/
__int64 Json::ToInt8(Json *this, char defaultValue)
{
  unsigned __int8 v3; 
  unsigned __int64 v4; 
  __int64 result; 
  __int64 value; 

  if ( !Json::GetInt64(this, &value) )
    return (unsigned __int8)defaultValue;
  v3 = value;
  v4 = value + 128;
  if ( jsonAssertHandler )
    jsonAssertHandler((unsigned __int64)(value + 128) <= 0xFF, "v64 >= INT8_MIN && v64 <= INT8_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetInt8", 1315, (const char *)&queryFormat.fmt + 3);
  result = v3;
  if ( v4 > 0xFF )
    return (unsigned __int8)defaultValue;
  return result;
}

/*
==============
Json::ToObject
==============
*/
Json *Json::ToObject(Json *this, Json *result)
{
  _R8 = this->m_value;
  result->m_value = UNDEFINED_0;
  result->m_key = NULL;
  if ( *_R8 < 9 )
  {
    if ( *_R8 == 1 )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovups xmmword ptr [rdx], xmm0
      }
    }
  }
  else
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
  }
  return result;
}

/*
==============
Json::ToString
==============
*/
const char *Json::ToString(Json *this, const char *defaultValue)
{
  const char *m_value; 

  m_value = this->m_value;
  if ( *m_value == 8 )
    return m_value + 1;
  else
    return defaultValue;
}

/*
==============
Json::ToUInt16
==============
*/
__int64 Json::ToUInt16(Json *this, unsigned __int16 defaultValue)
{
  __int64 result; 
  unsigned __int64 value; 

  if ( !Json::GetUInt64(this, &value) )
    return defaultValue;
  if ( jsonAssertHandler )
    jsonAssertHandler(value <= 0xFFFF, "v64 <= UINT16_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetUInt16", 1457, (const char *)&queryFormat.fmt + 3);
  result = (unsigned __int16)value;
  if ( value > 0xFFFF )
    return defaultValue;
  return result;
}

/*
==============
Json::ToUInt32
==============
*/
__int64 Json::ToUInt32(Json *this, unsigned int defaultValue)
{
  __int64 result; 
  unsigned __int64 value; 

  if ( !Json::GetUInt64(this, &value) )
    return defaultValue;
  if ( jsonAssertHandler )
    jsonAssertHandler(value <= 0xFFFFFFFF, "v64 <= UINT32_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetUInt32", 1478, (const char *)&queryFormat.fmt + 3);
  result = (unsigned int)value;
  if ( value > 0xFFFFFFFF )
    return defaultValue;
  return result;
}

/*
==============
Json::ToUInt64
==============
*/
unsigned __int64 Json::ToUInt64(Json *this, unsigned __int64 defaultValue)
{
  bool UInt64; 
  unsigned __int64 v4; 
  unsigned __int64 value; 

  value = 0i64;
  UInt64 = Json::GetUInt64(this, &value);
  v4 = value;
  if ( !UInt64 )
    return defaultValue;
  return v4;
}

/*
==============
Json::ToUInt8
==============
*/
__int64 Json::ToUInt8(Json *this, unsigned __int8 defaultValue)
{
  __int64 result; 
  unsigned __int64 value; 

  if ( !Json::GetUInt64(this, &value) )
    return defaultValue;
  if ( jsonAssertHandler )
    jsonAssertHandler(value <= 0xFF, "v64 <= UINT8_MAX", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetUInt8", 1436, (const char *)&queryFormat.fmt + 3);
  result = (unsigned __int8)value;
  if ( value > 0xFF )
    return defaultValue;
  return result;
}

/*
==============
Json::Type
==============
*/
char Json::Type(Json *this)
{
  char result; 

  _R8 = this->m_value;
  result = *_R8;
  if ( *_R8 >= 9 )
  {
    _RAX = JSON_SCAN_CHARS[2].chars;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    return (_R8[(int)this] != 0) + 9;
  }
  return result;
}

/*
==============
JsonSerializer::UInt
==============
*/
char JsonSerializer::UInt(JsonSerializer *this, const char *name, unsigned __int64 value)
{
  __int64 *v3; 
  int v6; 
  char *v7; 
  char *v8; 
  char *m_parentCount; 
  char v11; 
  __int64 v12; 
  bool v13; 
  __int64 v15; 
  const char *v17; 
  const char *v20; 
  int v21; 
  __int64 v22; 
  char *m_pos; 
  unsigned __int8 v24; 
  __int64 v25; 
  __int64 v26; 
  char *v27; 
  char *v28; 
  char *v29; 
  char *v30; 
  char *v31; 
  char *v32; 
  __int64 v33; 
  bool v34; 
  char Src[16]; 
  __int128 v36; 
  __int64 v37[4]; 
  char v38; 
  __int64 v39[6]; 

  v3 = v39;
  memset(v37, 0, sizeof(v37));
  do
  {
    v3 = (__int64 *)((char *)v3 - 1);
    *(_BYTE *)v3 = value % 0xA + 48;
    value /= 0xAui64;
  }
  while ( value );
  v6 = 0;
  v7 = (char *)((char *)v39 - (char *)v3);
  if ( (char *)v39 - (char *)v3 <= 32 )
  {
    memcpy_0(v37, v3, (char *)v39 - (char *)v3);
    v8 = (char *)v37 + (_QWORD)v7;
    DWORD2(v36) = 0;
  }
  else
  {
    v8 = &v38;
    DWORD2(v36) = 132;
  }
  *(_QWORD *)&v36 = v8;
  __asm
  {
    vmovups xmm0, [rbp+57h+var_A0]
    vmovdqa [rbp+57h+var_A0], xmm0
  }
  if ( !DWORD2(v36) )
    *(_BYTE *)v36 = 0;
  m_parentCount = (char *)this->m_parentCount;
  v11 = 0;
  if ( (int)m_parentCount > 0 )
    v11 = this->m_error[(_QWORD)m_parentCount + 128];
  v12 = -1i64;
  if ( name )
  {
    if ( v11 != 1 )
    {
      v13 = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_102;
    }
  }
  else if ( v11 == 1 )
  {
    v13 = JsonSerializer::Error(this, "key expected inside object");
    goto LABEL_102;
  }
  if ( (int)m_parentCount > 0 )
  {
    if ( jsonAssertHandler )
    {
      jsonAssertHandler((int)m_parentCount < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
      LODWORD(m_parentCount) = this->m_parentCount;
    }
    if ( (int)m_parentCount > 0 && this->m_parentTypes[(int)m_parentCount + 31] )
    {
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = asc_143DE3EFC[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
    }
    if ( this->m_indent[0] )
    {
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = p[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
      if ( this->m_parentCount > 0 )
      {
        do
        {
          v15 = -1i64;
          do
            ++v15;
          while ( this->m_indent[v15] );
          if ( !JsonSerializer::Write(this, this->m_indent, v15) )
            return 0;
        }
        while ( ++v6 < this->m_parentCount );
      }
    }
  }
  if ( !name )
    goto LABEL_106;
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    m_parentCount = this->m_pos;
    if ( m_parentCount + 2 < this->m_end )
    {
      *m_parentCount = search[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  for ( ; *name; name = v20 + 1 )
  {
    _RAX = JSON_SCAN_CHARS[4].chars;
    v17 = name;
    _R8 = name;
    __asm { vmovdqu xmm1, xmmword ptr [rax] }
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)m_parentCount != 16 )
        break;
      _R8 += 16;
    }
    v20 = &_R8[(int)m_parentCount];
    v21 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v17;
    if ( this->m_closed )
      return 0;
    v22 = v21;
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( &m_pos[v21 + 1] < this->m_end )
      {
        memcpy_0(m_pos, v17, v21);
        this->m_pos += v22;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
    }
    else
    {
      this->m_pos += v21;
    }
    v24 = *v20;
    if ( !*v20 )
      break;
    LODWORD(m_parentCount) = this->m_closed;
    Src[0] = *v20;
    if ( (byte_14471F6B0[v24] & 0x10) != 0 )
    {
      if ( (_BYTE)m_parentCount )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 < this->m_end )
        {
          *m_parentCount = asc_1440E303C[0];
          ++this->m_pos;
        }
        else if ( !JsonSerializer::Error(this, "out of memory") )
        {
          return 0;
        }
      }
      else
      {
        ++this->m_pos;
      }
      if ( this->m_closed )
        return 0;
      if ( this->m_buffer )
      {
        m_parentCount = this->m_pos;
        if ( m_parentCount + 2 >= this->m_end )
          goto LABEL_72;
        *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v24];
        ++this->m_pos;
      }
      else
      {
        ++this->m_pos;
      }
    }
    else
    {
      v25 = -1i64;
      do
        ++v25;
      while ( Src[v25] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v26 = (int)v25;
      if ( this->m_buffer )
      {
        v28 = this->m_pos;
        if ( &v28[(int)v25 + 1] >= this->m_end )
        {
LABEL_72:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          continue;
        }
        memcpy_0(v28, Src, (int)v25);
        this->m_pos += v26;
      }
      else
      {
        v27 = this->m_pos;
        LODWORD(m_parentCount) = v26 + (_DWORD)v27;
        this->m_pos = &v27[v26];
      }
    }
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v29 = this->m_pos;
    if ( v29 + 2 < this->m_end )
    {
      *v29 = search[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v30 = this->m_pos;
    if ( v30 + 2 < this->m_end )
    {
      *v30 = asc_143D7E4F8[0];
      ++this->m_pos;
    }
    else if ( !JsonSerializer::Error(this, "out of memory") )
    {
      return 0;
    }
  }
  else
  {
    ++this->m_pos;
  }
  if ( !this->m_indent[0] )
    goto LABEL_106;
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
  {
LABEL_105:
    ++this->m_pos;
    goto LABEL_106;
  }
  v31 = this->m_pos;
  if ( v31 + 2 < this->m_end )
  {
    *v31 = whitespace[0];
    goto LABEL_105;
  }
  v13 = JsonSerializer::Error(this, "out of memory");
LABEL_102:
  if ( !v13 )
    return 0;
  do
LABEL_106:
    ++v12;
  while ( *((_BYTE *)v37 + v12) );
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_113;
  v32 = this->m_pos;
  if ( &v32[(int)v12 + 1] < this->m_end )
  {
    memcpy_0(v32, v37, (int)v12);
LABEL_113:
    this->m_pos += (int)v12;
    goto LABEL_114;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_114:
  v33 = this->m_parentCount;
  v34 = (_DWORD)v33 == 0;
  if ( (int)v33 > 0 )
  {
    this->m_parentTypes[v33 + 31] = JSON_OBJECT;
    v34 = this->m_parentCount == 0;
  }
  if ( v34 )
  {
    *this->m_pos = 0;
    this->m_closed = 1;
  }
  return 1;
}

/*
==============
JsonSerializer::UInt
==============
*/
bool JsonSerializer::UInt(JsonSerializer *this, unsigned __int64 value)
{
  return JsonSerializer::UInt(this, NULL, value);
}

/*
==============
JsonSerializer::Write
==============
*/
bool JsonSerializer::Write(JsonSerializer *this, const char *text, int length)
{
  __int64 v5; 
  char *m_pos; 

  if ( this->m_closed )
    return 0;
  v5 = length;
  if ( this->m_buffer )
  {
    m_pos = this->m_pos;
    if ( &m_pos[length + 1] < this->m_end )
    {
      memcpy_0(m_pos, text, length);
      this->m_pos += v5;
      return 1;
    }
    else
    {
      return JsonSerializer::Error(this, "out of memory");
    }
  }
  else
  {
    this->m_pos += length;
    return 1;
  }
}

/*
==============
Json::begin
==============
*/
Json *Json::begin(Json *this, Json *result)
{
  const char *m_value; 
  int v3; 
  Json *v7; 

  m_value = this->m_value;
  result->m_key = NULL;
  result->m_value = UNDEFINED_0;
  if ( m_value && *m_value )
  {
    v3 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v3 == 4 )
    {
      _RAX = JSON_SCAN_CHARS[7].chars;
      _R8 = m_value + 2;
      result->m_key = _R8;
      __asm
      {
        vmovdqu xmm1, xmmword ptr [rax]
        vpcmpestri xmm1, xmmword ptr [r8], 0
      }
      v7 = result;
      result->m_value = &_R8[v3 + 1];
      return v7;
    }
    if ( (_BYTE)v3 != 3 )
      result->m_value = m_value + 1;
  }
  return result;
}

/*
==============
Json::end
==============
*/
Json *Json::end(Json *result)
{
  result->m_key = NULL;
  result->m_value = UNDEFINED_0;
  return result;
}

