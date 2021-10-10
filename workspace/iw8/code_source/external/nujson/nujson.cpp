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
  const char *v9; 
  const char *v11; 

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
          v9 = _RBX + 1;
          _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
          while ( 1 )
          {
            __asm { vpcmpestri xmm1, xmmword ptr [rbx], 0 }
            if ( (_DWORD)this != 16 )
              break;
            _RBX += 16;
          }
          v11 = &_RBX[(int)this + 1];
          if ( !strcmp(v9, name) )
            break;
          _RBX = Json_Skip(v11);
          v6 = *_RBX;
          if ( *_RBX == 3 )
            return result;
        }
        result->m_key = v9;
        result->m_value = v11;
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
  char v6; 
  char *v7; 
  char *v8; 
  int v9; 
  Json v14; 
  Json v15; 

  m_value = this->m_value;
  v14.m_key = NULL;
  v14.m_value = UNDEFINED_0;
  v6 = *m_value;
  *result = v14;
  if ( (unsigned __int8)(v6 - 1) > 1u )
    return result;
  v7 = NULL;
  v8 = UNDEFINED_0;
  v15.m_key = NULL;
  v15.m_value = UNDEFINED_0;
  if ( m_value && v6 )
  {
    v9 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v9 != 4 )
    {
      if ( (_BYTE)v9 != 3 )
        v8 = (char *)(m_value + 1);
      goto LABEL_9;
    }
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
    v7 = (char *)(m_value + 2);
    v15.m_key = m_value + 2;
    _R8 = (char *)(m_value + 2);
    __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    goto LABEL_6;
  }
  while ( 1 )
  {
    if ( !v7 && v8 == UNDEFINED_0 )
      return result;
    if ( !index )
      break;
    --index;
    if ( v8 && *v8 )
    {
      v8 = (char *)Json_Skip(v8);
      v15.m_value = v8;
      v9 = (unsigned __int8)*v8;
      if ( (_BYTE)v9 == 4 )
      {
        _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
        v7 = v8 + 1;
        v15.m_key = v8 + 1;
        _R8 = v8 + 1;
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
LABEL_6:
        v8 = &_R8[v9 + 1];
LABEL_9:
        v15.m_value = v8;
        continue;
      }
      if ( (_BYTE)v9 == 3 )
      {
        v7 = NULL;
        v8 = UNDEFINED_0;
        v15.m_key = NULL;
        goto LABEL_9;
      }
    }
  }
  *result = v15;
  return result;
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
  Json *v2; 
  const char *m_value; 
  const char *v5; 
  int v6; 
  Json *v9; 

  v2 = this;
  m_value = this->m_value;
  if ( m_value && *m_value )
  {
    v5 = Json_Skip(m_value);
    v2->m_value = v5;
    v6 = *(unsigned __int8 *)v5;
    if ( (_BYTE)v6 == 4 )
    {
      _R8 = v5 + 1;
      v2->m_key = v5 + 1;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      v9 = result;
      v2->m_value = &_R8[v6 + 1];
      *result = *v2;
      return v9;
    }
    if ( (_BYTE)v6 == 3 )
    {
      v2->m_key = NULL;
      v2->m_value = UNDEFINED_0;
    }
  }
  *result = *v2;
  return result;
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
  const char *v10; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  char *m_pos; 
  unsigned __int8 v17; 
  __int64 v18; 
  __int64 v19; 
  char *v20; 
  char *v21; 
  char *v22; 
  char *v23; 
  __int64 v24; 
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
      v10 = name;
      _R8 = name;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v13 = &_R8[(int)m_parentCount];
      v14 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v10;
      if ( this->m_closed )
        return 0;
      v15 = v14;
      if ( !this->m_buffer )
        goto LABEL_53;
      m_pos = this->m_pos;
      if ( &m_pos[v14 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_54:
      v17 = *v13;
      if ( !*v13 )
        goto LABEL_78;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v13;
      if ( (byte_14471F6B0[v17] & 0x10) != 0 )
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
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v17];
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
      v18 = -1i64;
      do
        ++v18;
      while ( Src[v18] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v19 = (int)v18;
      if ( this->m_buffer )
      {
        v20 = this->m_pos;
        if ( &v20[(int)v18 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_77;
        }
        memcpy_0(v20, Src, (int)v18);
      }
      this->m_pos += v19;
LABEL_77:
      name = v13 + 1;
      if ( !*name )
        goto LABEL_78;
    }
    memcpy_0(m_pos, v10, v14);
LABEL_53:
    this->m_pos += v15;
    goto LABEL_54;
  }
LABEL_78:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_84;
  v21 = this->m_pos;
  if ( v21 + 2 < this->m_end )
  {
    *v21 = search[0];
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
  v22 = this->m_pos;
  if ( v22 + 2 < this->m_end )
  {
    *v22 = asc_143D7E4F8[0];
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
  v23 = this->m_pos;
  if ( v23 + 2 < this->m_end )
  {
    *v23 = whitespace[0];
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
  v24 = this->m_parentCount;
  if ( (int)v24 >= 32 )
    return JsonSerializer::Error(this, "stack overflow");
  if ( (int)v24 > 0 )
  {
    this->m_parentTypes[v24 + 31] = JSON_OBJECT;
    LODWORD(v24) = this->m_parentCount;
  }
  this->m_parentTypes[(int)v24] = JSON_ARRAY;
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
  const char *v10; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  char *m_pos; 
  unsigned __int8 v17; 
  __int64 v18; 
  __int64 v19; 
  char *v20; 
  char *v21; 
  char *v22; 
  char *v23; 
  __int64 v24; 
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
      v10 = name;
      _R8 = name;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v13 = &_R8[(int)m_parentCount];
      v14 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v10;
      if ( this->m_closed )
        return 0;
      v15 = v14;
      if ( !this->m_buffer )
        goto LABEL_53;
      m_pos = this->m_pos;
      if ( &m_pos[v14 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_54:
      v17 = *v13;
      if ( !*v13 )
        goto LABEL_78;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v13;
      if ( (byte_14471F6B0[v17] & 0x10) != 0 )
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
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v17];
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
      v18 = -1i64;
      do
        ++v18;
      while ( Src[v18] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v19 = (int)v18;
      if ( this->m_buffer )
      {
        v20 = this->m_pos;
        if ( &v20[(int)v18 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_77;
        }
        memcpy_0(v20, Src, (int)v18);
      }
      this->m_pos += v19;
LABEL_77:
      name = v13 + 1;
      if ( !*name )
        goto LABEL_78;
    }
    memcpy_0(m_pos, v10, v14);
LABEL_53:
    this->m_pos += v15;
    goto LABEL_54;
  }
LABEL_78:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_84;
  v21 = this->m_pos;
  if ( v21 + 2 < this->m_end )
  {
    *v21 = search[0];
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
  v22 = this->m_pos;
  if ( v22 + 2 < this->m_end )
  {
    *v22 = asc_143D7E4F8[0];
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
  v23 = this->m_pos;
  if ( v23 + 2 < this->m_end )
  {
    *v23 = whitespace[0];
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
  v24 = this->m_parentCount;
  if ( (int)v24 >= 32 )
    return JsonSerializer::Error(this, "stack overflow");
  if ( (int)v24 > 0 )
  {
    this->m_parentTypes[v24 + 31] = JSON_OBJECT;
    LODWORD(v24) = this->m_parentCount;
  }
  this->m_parentTypes[(int)v24] = JSON_OBJECT;
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
  const char *v12; 
  const char *v15; 
  int v16; 
  __int64 v17; 
  char *m_pos; 
  unsigned __int8 v19; 
  __int64 v20; 
  __int64 v21; 
  char *v22; 
  char *v23; 
  char *v24; 
  char *v25; 
  __int64 v26; 
  bool v27; 
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
      v12 = v7;
      _R8 = v7;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v15 = &_R8[(int)m_parentCount];
      v16 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v12;
      if ( this->m_closed )
        return 0;
      v17 = v16;
      if ( !this->m_buffer )
        goto LABEL_53;
      m_pos = this->m_pos;
      if ( &m_pos[v16 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_54:
      v19 = *v15;
      if ( !*v15 )
        goto LABEL_78;
      LODWORD(m_parentCount) = this->m_closed;
      Src = *v15;
      if ( (byte_14471F6B0[v19] & 0x10) != 0 )
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
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v19];
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
      v20 = -1i64;
      do
        ++v20;
      while ( *(&Src + v20) );
      if ( (_BYTE)m_parentCount )
        return 0;
      v21 = (int)v20;
      if ( this->m_buffer )
      {
        v22 = this->m_pos;
        if ( &v22[(int)v20 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_77;
        }
        memcpy_0(v22, &Src, (int)v20);
      }
      this->m_pos += v21;
LABEL_77:
      v7 = v15 + 1;
      if ( !*v7 )
        goto LABEL_78;
    }
    memcpy_0(m_pos, v12, v16);
LABEL_53:
    this->m_pos += v17;
    goto LABEL_54;
  }
LABEL_78:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_84;
  v23 = this->m_pos;
  if ( v23 + 2 < this->m_end )
  {
    *v23 = search[0];
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
  v24 = this->m_pos;
  if ( v24 + 2 < this->m_end )
  {
    *v24 = asc_143D7E4F8[0];
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
  v25 = this->m_pos;
  if ( v25 + 2 < this->m_end )
  {
    *v25 = whitespace[0];
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
      v13 = v9;
      _R8 = v9;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
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
        goto LABEL_51;
      m_pos = this->m_pos;
      if ( &m_pos[v17 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_52:
      v20 = *v16;
      if ( !*v16 )
        goto LABEL_76;
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
LABEL_61:
            if ( this->m_closed )
              return 0;
            if ( this->m_buffer )
            {
              m_parentCount = this->m_pos;
              if ( m_parentCount + 2 >= this->m_end )
                goto LABEL_65;
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v20];
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
LABEL_65:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_75;
        }
        memcpy_0(v23, Src, (int)v21);
      }
      this->m_pos += v22;
LABEL_75:
      v9 = v16 + 1;
      if ( !*v9 )
        goto LABEL_76;
    }
    memcpy_0(m_pos, v13, v17);
LABEL_51:
    this->m_pos += v18;
    goto LABEL_52;
  }
LABEL_76:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_82;
  v24 = this->m_pos;
  if ( v24 + 2 < this->m_end )
  {
    *v24 = search[0];
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
  v25 = this->m_pos;
  if ( v25 + 2 < this->m_end )
  {
    *v25 = asc_143D7E4F8[0];
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
      v26 = this->m_pos;
      if ( v26 + 2 >= this->m_end )
      {
        result = JsonSerializer::Error(this, "out of memory");
LABEL_95:
        if ( !result )
          return result;
        goto LABEL_99;
      }
      *v26 = whitespace[0];
    }
    ++this->m_pos;
  }
LABEL_99:
  *this->m_pos++ = 34;
  this->m_pos += Base64_Encode(value, valueSize, this->m_pos, this->m_end - this->m_pos);
  *this->m_pos++ = 34;
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
bool JsonSerializer::Float(JsonSerializer *this, long double value)
{
  return JsonSerializer::Float(this, NULL, value);
}

/*
==============
JsonSerializer::Float
==============
*/
char JsonSerializer::Float(JsonSerializer *this, const char *name, long double value)
{
  __int128 v3; 
  int v6; 
  __int64 i; 
  char *m_parentCount; 
  char v9; 
  __int64 v10; 
  bool v11; 
  int v13; 
  __int64 v14; 
  const char *v15; 
  const char *v18; 
  int v19; 
  __int64 v20; 
  char *m_pos; 
  unsigned __int8 v22; 
  __int64 v23; 
  __int64 v24; 
  char *v25; 
  char *v26; 
  char *v27; 
  char *v28; 
  char *v29; 
  char *v30; 
  __int64 v31; 
  bool v32; 
  char Src[16]; 
  char dest[385]; 
  __int128 v35; 

  v35 = v3;
  memset_0(dest, 0, sizeof(dest));
  v6 = Json_sprintf_385_((char (*)[385])dest, "%f", (double)value);
  if ( strchr_0(dest, 46) )
  {
    for ( i = v6 - 1; i >= 0; dest[i--] = 0 )
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
  v9 = 0;
  if ( (int)m_parentCount > 0 )
    v9 = this->m_error[(_QWORD)m_parentCount + 128];
  v10 = -1i64;
  if ( name )
  {
    if ( v9 != 1 )
    {
      v11 = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_101;
    }
  }
  else if ( v9 == 1 )
  {
    v11 = JsonSerializer::Error(this, "key expected inside object");
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
  for ( ; *name; name = v18 + 1 )
  {
    v15 = name;
    _R8 = name;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)m_parentCount != 16 )
        break;
      _R8 += 16;
    }
    v18 = &_R8[(int)m_parentCount];
    v19 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v15;
    if ( this->m_closed )
      return 0;
    v20 = v19;
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( &m_pos[v19 + 1] < this->m_end )
      {
        memcpy_0(m_pos, v15, v19);
        this->m_pos += v20;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
    }
    else
    {
      this->m_pos += v19;
    }
    v22 = *v18;
    if ( !*v18 )
      break;
    LODWORD(m_parentCount) = this->m_closed;
    Src[0] = *v18;
    if ( (byte_14471F6B0[v22] & 0x10) != 0 )
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
        *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v22];
        ++this->m_pos;
      }
      else
      {
        ++this->m_pos;
      }
    }
    else
    {
      v23 = -1i64;
      do
        ++v23;
      while ( Src[v23] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v24 = (int)v23;
      if ( this->m_buffer )
      {
        v26 = this->m_pos;
        if ( &v26[(int)v23 + 1] >= this->m_end )
        {
LABEL_71:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          continue;
        }
        memcpy_0(v26, Src, (int)v23);
        this->m_pos += v24;
      }
      else
      {
        v25 = this->m_pos;
        LODWORD(m_parentCount) = v24 + (_DWORD)v25;
        this->m_pos = &v25[v24];
      }
    }
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v27 = this->m_pos;
    if ( v27 + 2 < this->m_end )
    {
      *v27 = search[0];
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
    v28 = this->m_pos;
    if ( v28 + 2 < this->m_end )
    {
      *v28 = asc_143D7E4F8[0];
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
  v29 = this->m_pos;
  if ( v29 + 2 < this->m_end )
  {
    *v29 = whitespace[0];
    goto LABEL_104;
  }
  v11 = JsonSerializer::Error(this, "out of memory");
LABEL_101:
  if ( !v11 )
    return 0;
  do
LABEL_105:
    ++v10;
  while ( dest[v10] );
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_112;
  v30 = this->m_pos;
  if ( &v30[(int)v10 + 1] < this->m_end )
  {
    memcpy_0(v30, dest, (int)v10);
LABEL_112:
    this->m_pos += (int)v10;
    goto LABEL_113;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_113:
  v31 = this->m_parentCount;
  v32 = (_DWORD)v31 == 0;
  if ( (int)v31 > 0 )
  {
    this->m_parentTypes[v31 + 31] = JSON_OBJECT;
    v32 = this->m_parentCount == 0;
  }
  if ( v32 )
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
  *value = *this;
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
  const char *v9; 
  const char *v11; 
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
    v9 = _RBX + 1;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [rbx], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _RBX += 16;
    }
    v11 = &_RBX[(int)this + 1];
    if ( !strcmp(v9, name) )
      break;
    _RBX = Json_Skip(v11);
    v6 = *_RBX;
    if ( *_RBX == 3 )
      return 0;
  }
  child->m_key = v9;
  result = 1;
  child->m_value = v11;
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
  char *v6; 
  char *v7; 
  int v8; 
  Json v13; 
  Json v14; 

  v13.m_key = NULL;
  v13.m_value = UNDEFINED_0;
  *elem = v13;
  m_value = this->m_value;
  if ( (unsigned __int8)(*m_value - 1) > 1u )
    return 0;
  v6 = NULL;
  v14.m_key = NULL;
  v7 = UNDEFINED_0;
  v14.m_value = UNDEFINED_0;
  if ( m_value && *m_value )
  {
    v8 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v8 != 4 )
    {
      if ( (_BYTE)v8 != 3 )
        v7 = (char *)(m_value + 1);
      goto LABEL_9;
    }
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
    v6 = (char *)(m_value + 2);
    v14.m_key = m_value + 2;
    _R8 = (char *)(m_value + 2);
    __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    goto LABEL_6;
  }
  while ( 1 )
  {
    if ( !v6 && v7 == UNDEFINED_0 )
      return 0;
    if ( !index )
      break;
    --index;
    if ( v7 && *v7 )
    {
      v7 = (char *)Json_Skip(v7);
      v14.m_value = v7;
      v8 = (unsigned __int8)*v7;
      if ( (_BYTE)v8 == 4 )
      {
        _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
        v6 = v7 + 1;
        v14.m_key = v7 + 1;
        _R8 = v7 + 1;
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
LABEL_6:
        v7 = &_R8[v8 + 1];
LABEL_9:
        v14.m_value = v7;
        continue;
      }
      if ( (_BYTE)v8 == 3 )
      {
        v6 = NULL;
        v7 = UNDEFINED_0;
        v14.m_key = NULL;
        goto LABEL_9;
      }
    }
  }
  *elem = v14;
  return 1;
}

/*
==============
Json::GetFloat32
==============
*/
char Json::GetFloat32(Json *this, float *value)
{
  __int128 v2; 
  char result; 
  char *EndPtr; 

  if ( *this->m_value < 9 || (_set_errno(0), *(double *)&v2 = strtod(this->m_value, &EndPtr), _XMM6 = v2, *_errno()) || *(double *)&v2 < -3.402823466385289e38 || *(double *)&v2 > 3.402823466385289e38 )
  {
    result = 0;
    *value = 0.0;
  }
  else
  {
    __asm { vcvtsd2ss xmm0, xmm6, xmm6 }
    *value = *(float *)&_XMM0;
    return 1;
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

  if ( *this->m_value >= 9 )
  {
    _set_errno(0);
    *value = strtod(this->m_value, &EndPtr);
    if ( !*_errno() )
      return 1;
  }
  *value = 0.0;
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
  unsigned __int8 v6; 
  const char *v7; 
  const char *v8; 
  unsigned __int64 v9; 
  char v10; 
  __int64 v11; 
  __int64 v12; 
  const char *v14; 
  int v15; 

  *value = 0i64;
  m_value = this->m_value;
  if ( *m_value >= 9 )
  {
    _R8 = this->m_value;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v6 = 0;
    v7 = &_R8[(int)this];
    v8 = this->m_value;
    if ( m_value != v7 && *m_value == 45 )
    {
      v6 = 1;
      v8 = m_value + 1;
    }
    v9 = 0i64;
    v10 = 0;
    if ( v8 != v7 )
    {
      while ( 1 )
      {
        LOBYTE(v11) = `std::_Digit_from_char'::`2'::_Digit_from_byte[*(unsigned __int8 *)v8];
        if ( (unsigned __int8)v11 >= 0xAu )
          goto LABEL_17;
        if ( v9 < 0xCCCCCCCCCCCCCCCi64 )
          break;
        if ( v9 == 0xCCCCCCCCCCCCCCCi64 )
        {
          v11 = (unsigned __int8)v11;
          if ( (unsigned __int8)v11 <= (unsigned __int64)v6 + 7 )
            goto LABEL_15;
        }
        v10 = 1;
LABEL_16:
        if ( ++v8 == v7 )
          goto LABEL_17;
      }
      v11 = (unsigned __int8)v11;
LABEL_15:
      v9 = v11 + 10 * v9;
      goto LABEL_16;
    }
LABEL_17:
    if ( v8 - m_value == v6 )
    {
      v14 = m_value;
      v15 = 22;
    }
    else
    {
      v14 = v8;
      if ( v10 )
      {
        v15 = 34;
      }
      else
      {
        v15 = 0;
        v12 = -(__int64)v9;
        if ( !v6 )
          v12 = v9;
        *value = v12;
      }
    }
    if ( !v15 && v14 == v7 )
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
  unsigned __int64 v8; 
  bool result; 

  if ( !this->m_key )
    goto LABEL_9;
  _R9 = this->m_key;
  _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
  while ( 1 )
  {
    __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
    if ( (_DWORD)this != 16 )
      break;
    _R9 += 16;
  }
  v8 = (unsigned __int64)&_R9[(int)this - (unsigned __int64)this->m_key + 1];
  if ( jsonAssertHandler )
    jsonAssertHandler(v8 <= size, "length <= size", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetName", 1107, (const char *)&queryFormat.fmt + 3);
  if ( v8 <= size )
  {
    memcpy_0(value, this->m_key, v8);
    result = 1;
    value[v8] = 0;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
  *value = *this;
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
  unsigned __int64 v9; 
  bool result; 

  m_value = this->m_value;
  if ( *m_value != 8 )
    goto LABEL_9;
  _R9 = m_value + 1;
  _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
  while ( 1 )
  {
    __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
    if ( (_DWORD)this != 16 )
      break;
    _R9 += 16;
  }
  v9 = (unsigned __int64)&_R9[(int)this - (_QWORD)m_value];
  if ( jsonAssertHandler )
    jsonAssertHandler(v9 <= size, "length <= size", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetString", 1218, (const char *)&queryFormat.fmt + 3);
  if ( v9 <= size )
  {
    memcpy_0(value, this->m_value + 1, v9);
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
  unsigned __int64 v8; 
  bool result; 

  v5 = Json::Text(this);
  _R9 = v5;
  _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
  while ( 1 )
  {
    __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
    if ( LODWORD(JSON_SCAN_CHARS[7].chars) != 16 )
      break;
    _R9 += 16;
  }
  v8 = (unsigned __int64)&_R9[SLODWORD(JSON_SCAN_CHARS[7].chars) - (_QWORD)v5 + 1];
  if ( jsonAssertHandler )
    jsonAssertHandler(v8 <= size, "length <= size", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "Json::GetText", 1126, (const char *)&queryFormat.fmt + 3);
  if ( v8 <= size )
  {
    memcpy_0(value, v5, v8);
    result = 1;
    value[v8] = 0;
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
  char v6; 
  const char *v7; 
  const char *v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  const char *v12; 
  int v13; 

  *value = 0i64;
  m_value = this->m_value;
  if ( *m_value >= 9 )
  {
    _R8 = this->m_value;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v6 = 0;
    v7 = &_R8[(int)this];
    v8 = this->m_value;
    v9 = 0i64;
    if ( m_value != v7 )
    {
      while ( 1 )
      {
        LOBYTE(v10) = `std::_Digit_from_char'::`2'::_Digit_from_byte[*(unsigned __int8 *)v8];
        if ( (unsigned __int8)v10 >= 0xAu )
          goto LABEL_14;
        if ( v9 < 0x1999999999999999i64 )
          break;
        if ( v9 == 0x1999999999999999i64 )
        {
          v10 = (unsigned __int8)v10;
          if ( (unsigned __int8)v10 <= 5ui64 )
            goto LABEL_12;
        }
        v6 = 1;
LABEL_13:
        if ( ++v8 == v7 )
          goto LABEL_14;
      }
      v10 = (unsigned __int8)v10;
LABEL_12:
      v9 = v10 + 10 * v9;
      goto LABEL_13;
    }
LABEL_14:
    if ( v8 == m_value )
    {
      v12 = m_value;
      v13 = 22;
    }
    else
    {
      v12 = v8;
      if ( v6 )
      {
        v13 = 34;
      }
      else
      {
        *value = v9;
        v13 = 0;
      }
    }
    if ( !v13 && v12 == v7 )
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
  char v8; 
  __int64 v9; 
  bool v10; 
  int v12; 
  __int64 v13; 
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
  char *v28; 
  char *v29; 
  __int64 v30; 
  bool v31; 
  char Src[8]; 
  __int128 v33; 
  std::to_chars_result v34; 
  char v35[32]; 
  __int64 v36; 

  memset(v35, 0, sizeof(v35));
  _XMM0 = (__int128)*std::_Integer_to_chars<__int64>(&v34, v35, (char *const)&v36, value, 10);
  __asm { vpextrd rax, xmm0, 2 }
  v33 = _XMM0;
  if ( !(_DWORD)_RAX )
    *(_BYTE *)v33 = 0;
  m_parentCount = (char *)this->m_parentCount;
  v8 = 0;
  if ( (int)m_parentCount > 0 )
    v8 = this->m_error[(_QWORD)m_parentCount + 128];
  v9 = -1i64;
  if ( name )
  {
    if ( v8 != 1 )
    {
      v10 = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_97;
    }
  }
  else if ( v8 == 1 )
  {
    v10 = JsonSerializer::Error(this, "key expected inside object");
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
      v12 = 0;
      if ( this->m_parentCount > 0 )
      {
        do
        {
          v13 = -1i64;
          do
            ++v13;
          while ( this->m_indent[v13] );
          if ( !JsonSerializer::Write(this, this->m_indent, v13) )
            return 0;
        }
        while ( ++v12 < this->m_parentCount );
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
  for ( ; *name; name = v17 + 1 )
  {
    v14 = name;
    _R8 = name;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
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
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( &m_pos[v18 + 1] < this->m_end )
      {
        memcpy_0(m_pos, v14, v18);
        this->m_pos += v19;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
    }
    else
    {
      this->m_pos += v18;
    }
    v21 = *v17;
    if ( !*v17 )
      break;
    LODWORD(m_parentCount) = this->m_closed;
    Src[0] = *v17;
    if ( (byte_14471F6B0[v21] & 0x10) != 0 )
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
        *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v21];
        ++this->m_pos;
      }
      else
      {
        ++this->m_pos;
      }
    }
    else
    {
      v22 = -1i64;
      do
        ++v22;
      while ( Src[v22] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v23 = (int)v22;
      if ( this->m_buffer )
      {
        v25 = this->m_pos;
        if ( &v25[(int)v22 + 1] >= this->m_end )
        {
LABEL_67:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          continue;
        }
        memcpy_0(v25, Src, (int)v22);
        this->m_pos += v23;
      }
      else
      {
        v24 = this->m_pos;
        LODWORD(m_parentCount) = v23 + (_DWORD)v24;
        this->m_pos = &v24[v23];
      }
    }
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v26 = this->m_pos;
    if ( v26 + 2 < this->m_end )
    {
      *v26 = search[0];
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
    v27 = this->m_pos;
    if ( v27 + 2 < this->m_end )
    {
      *v27 = asc_143D7E4F8[0];
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
  v28 = this->m_pos;
  if ( v28 + 2 < this->m_end )
  {
    *v28 = whitespace[0];
    goto LABEL_100;
  }
  v10 = JsonSerializer::Error(this, "out of memory");
LABEL_97:
  if ( !v10 )
    return 0;
  do
LABEL_101:
    ++v9;
  while ( v35[v9] );
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_108;
  v29 = this->m_pos;
  if ( &v29[(int)v9 + 1] < this->m_end )
  {
    memcpy_0(v29, v35, (int)v9);
LABEL_108:
    this->m_pos += (int)v9;
    goto LABEL_109;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_109:
  v30 = this->m_parentCount;
  v31 = (_DWORD)v30 == 0;
  if ( (int)v30 > 0 )
  {
    this->m_parentTypes[v30 + 31] = JSON_OBJECT;
    v31 = this->m_parentCount == 0;
  }
  if ( v31 )
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
  char *v29; 
  char *v31; 
  const char *v32; 
  int v33; 
  int v34; 
  signed __int64 v35; 
  char v36; 
  char v38[32]; 

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
            v35 = i - v5;
            do
            {
              v36 = v5[v35];
              if ( !v36 )
                break;
              *v5++ = v36;
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
    v20 = v38;
    v21 = v19 - v15;
    if ( v15 )
    {
      if ( v21 >= 0x1F )
      {
        v21 = 31i64;
LABEL_18:
        v22 = v15 - v38;
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
            v29 = (char *)(_RBX + 1);
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [rbx], 0 }
              if ( (_DWORD)v21 != 16 )
                break;
              _RBX += 16;
            }
            v31 = (char *)(v38 - v29);
            v32 = &_RBX[(int)v21 + 1];
            do
            {
              v33 = (unsigned __int8)v31[(_QWORD)v29];
              v34 = (unsigned __int8)*v29 - v33;
              if ( v34 )
                break;
              ++v29;
            }
            while ( v33 );
            if ( !v34 )
              break;
            _RBX = Json_Skip(v32);
            v26 = *_RBX;
            if ( *_RBX == 3 )
              goto LABEL_39;
          }
          v25 = (char *)v32;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
  const char *v9; 
  bool v10; 
  const char *v11; 
  __int64 v12; 
  char *v13; 
  const char *v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  const char *v18; 
  const char *v21; 
  int v22; 
  __int64 v23; 
  char *v24; 
  unsigned __int8 v25; 
  __int64 v26; 
  __int64 v27; 
  char *v28; 
  char *v29; 
  char *v30; 
  char *v31; 
  __int64 v32; 
  bool v33; 
  const char *v34; 
  const char *v35; 
  int v36; 
  int v37; 
  int v40; 
  char *v41; 
  __int64 v42; 
  const char *v43; 
  const char *m_value; 
  const char *m_key; 
  int v46; 
  const char *v47; 
  int v48; 
  int m_parentCount; 
  char *m_pos; 
  __int64 v53; 
  __int64 v54; 
  bool v55; 
  __int64 v56; 
  bool v57; 
  Json result; 
  Json v59; 
  char Src[8]; 

  _R9 = value->m_value;
  v5 = name;
  v7 = *_R9;
  if ( *_R9 >= 9 )
  {
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
      v46 = 0;
      while ( 2 )
      {
        if ( m_key || m_value != UNDEFINED_0 )
        {
          v47 = (char *)&queryFormat.fmt + 3;
          if ( m_key )
            v47 = m_key;
          v59 = result;
          if ( (unsigned __int8)JsonSerializer::Json(this, v47, &v59) )
          {
            if ( m_value && *m_value )
            {
              m_value = Json_Skip(m_value);
              result.m_value = m_value;
              if ( *m_value == 4 )
              {
                m_key = m_value + 1;
                result.m_key = m_value + 1;
                _R8 = m_value + 1;
                _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
                while ( 1 )
                {
                  __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
                  if ( v48 != 16 )
                    break;
                  _R8 += 16;
                }
                m_value = &_R8[v48 + 1];
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
                v53 = -1i64;
                do
                  ++v53;
                while ( this->m_indent[v53] );
                if ( !JsonSerializer::Write(this, this->m_indent, v53) )
                  return 0;
              }
              while ( ++v46 < this->m_parentCount );
            }
LABEL_177:
            v43 = "}";
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
        v56 = this->m_parentCount;
        v57 = (_DWORD)v56 == 0;
        if ( (int)v56 > 0 )
        {
          this->m_parentTypes[v56 + 31] = JSON_OBJECT;
          v57 = this->m_parentCount == 0;
        }
        if ( v57 )
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
      v34 = result.m_value;
      v35 = result.m_key;
      v36 = 0;
      while ( 2 )
      {
        if ( v35 || v34 != UNDEFINED_0 )
        {
          v59 = result;
          if ( (unsigned __int8)JsonSerializer::Json(this, NULL, &v59) )
          {
            if ( v34 && *v34 )
            {
              v34 = Json_Skip(v34);
              result.m_value = v34;
              if ( *v34 == 4 )
              {
                v35 = v34 + 1;
                result.m_key = v34 + 1;
                _R8 = v34 + 1;
                _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
                while ( 1 )
                {
                  __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
                  if ( v37 != 16 )
                    break;
                  _R8 += 16;
                }
                v34 = &_R8[v37 + 1];
                result.m_value = v34;
              }
              else if ( *v34 == 3 )
              {
                v35 = NULL;
                result.m_key = NULL;
                v34 = UNDEFINED_0;
                result.m_value = UNDEFINED_0;
              }
            }
            continue;
          }
          return 0;
        }
        break;
      }
      v40 = this->m_parentCount;
      if ( v40 <= 0 || this->m_error[v40 + 128] != 2 )
        goto LABEL_183;
      this->m_parentCount = v40 - 1;
      if ( !this->m_indent[0] )
        goto LABEL_145;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_139;
      v41 = this->m_pos;
      if ( v41 + 2 < this->m_end )
      {
        *v41 = p[0];
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
          v42 = -1i64;
          do
            ++v42;
          while ( this->m_indent[v42] );
          if ( !JsonSerializer::Write(this, this->m_indent, v42) )
            return 0;
          ++v36;
        }
        while ( v36 < this->m_parentCount );
      }
LABEL_145:
      v43 = "]";
LABEL_178:
      if ( JsonSerializer::Write(this, v43, 1) )
      {
        v54 = this->m_parentCount;
        v55 = (_DWORD)v54 == 0;
        if ( (int)v54 > 0 )
        {
          this->m_parentTypes[v54 + 31] = JSON_OBJECT;
          v55 = this->m_parentCount == 0;
        }
        if ( v55 )
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
      v9 = Json::Text((Json *)value);
      return (JsonSerializer *)JsonSerializer::String(this, v5, v9);
    case 9:
    case 10:
      v11 = Json::Text((Json *)value);
      v12 = this->m_parentCount;
      LOBYTE(v13) = 0;
      v14 = v11;
      if ( (int)v12 > 0 )
        LODWORD(v13) = (unsigned __int8)this->m_error[v12 + 128];
      v15 = -1i64;
      if ( v5 )
      {
        if ( (_BYTE)v13 != 1 )
        {
          v10 = JsonSerializer::Error(this, "unexpected key outside of an object");
          goto LABEL_105;
        }
      }
      else if ( (_BYTE)v13 == 1 )
      {
        v10 = JsonSerializer::Error(this, "key expected inside object");
        goto LABEL_105;
      }
      if ( (int)v12 <= 0 )
        goto LABEL_43;
      if ( jsonAssertHandler )
      {
        jsonAssertHandler((int)v12 < 32, "m_parentCount < (int)ARRAY_COUNT( m_parentChild )", "c:\\workspace\\iw8\\code_source\\external\\nujson\\nujson.cpp", "JsonSerializer::Key", 1957, (const char *)&queryFormat.fmt + 3);
        LODWORD(v12) = this->m_parentCount;
      }
      if ( (int)v12 <= 0 || this->m_parentTypes[(int)v12 + 31] == JSON_UNDEFINED )
        goto LABEL_30;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_29;
      v13 = this->m_pos;
      if ( v13 + 2 < this->m_end )
      {
        *v13 = asc_143DE3EFC[0];
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
      v13 = this->m_pos;
      if ( v13 + 2 < this->m_end )
      {
        *v13 = p[0];
LABEL_37:
        ++this->m_pos;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
      v16 = 0;
      if ( this->m_parentCount > 0 )
      {
        do
        {
          v17 = -1i64;
          do
            ++v17;
          while ( this->m_indent[v17] );
          if ( !JsonSerializer::Write(this, this->m_indent, v17) )
            return 0;
        }
        while ( ++v16 < this->m_parentCount );
      }
LABEL_43:
      if ( !v5 )
        goto LABEL_109;
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_50;
      v13 = this->m_pos;
      if ( v13 + 2 < this->m_end )
      {
        *v13 = search[0];
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
          v18 = v5;
          _R8 = v5;
          _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
          while ( 1 )
          {
            __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
            if ( (_DWORD)v13 != 16 )
              break;
            _R8 += 16;
          }
          v21 = &_R8[(int)v13];
          v22 = (_DWORD)_R8 + (_DWORD)v13 - (_DWORD)v18;
          if ( this->m_closed )
            return 0;
          v23 = v22;
          if ( !this->m_buffer )
            goto LABEL_61;
          v24 = this->m_pos;
          if ( &v24[v22 + 1] < this->m_end )
            break;
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
LABEL_62:
          v25 = *v21;
          if ( !*v21 )
            goto LABEL_86;
          LODWORD(v13) = this->m_closed;
          Src[0] = *v21;
          if ( (byte_14471F6B0[v25] & 0x10) != 0 )
          {
            if ( (_BYTE)v13 )
              return 0;
            if ( this->m_buffer )
            {
              v13 = this->m_pos;
              if ( v13 + 2 >= this->m_end )
              {
                if ( !JsonSerializer::Error(this, "out of memory") )
                  return 0;
LABEL_71:
                if ( this->m_closed )
                  return 0;
                if ( this->m_buffer )
                {
                  v13 = this->m_pos;
                  if ( v13 + 2 >= this->m_end )
                    goto LABEL_75;
                  *v13 = `JsonSerializer::QuotedString'::`2'::escape[v25];
                  ++this->m_pos;
                }
                else
                {
                  ++this->m_pos;
                }
                goto LABEL_85;
              }
              *v13 = asc_1440E303C[0];
            }
            ++this->m_pos;
            goto LABEL_71;
          }
          v26 = -1i64;
          do
            ++v26;
          while ( Src[v26] );
          if ( (_BYTE)v13 )
            return 0;
          v27 = (int)v26;
          if ( this->m_buffer )
          {
            v28 = this->m_pos;
            if ( &v28[(int)v26 + 1] >= this->m_end )
            {
LABEL_75:
              if ( !JsonSerializer::Error(this, "out of memory") )
                return 0;
              goto LABEL_85;
            }
            memcpy_0(v28, Src, (int)v26);
          }
          this->m_pos += v27;
LABEL_85:
          v5 = v21 + 1;
          if ( !*v5 )
            goto LABEL_86;
        }
        memcpy_0(v24, v18, v22);
LABEL_61:
        this->m_pos += v23;
        goto LABEL_62;
      }
LABEL_86:
      if ( this->m_closed )
        return 0;
      if ( !this->m_buffer )
        goto LABEL_92;
      v29 = this->m_pos;
      if ( v29 + 2 < this->m_end )
      {
        *v29 = search[0];
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
      v30 = this->m_pos;
      if ( v30 + 2 < this->m_end )
      {
        *v30 = asc_143D7E4F8[0];
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
      v31 = this->m_pos;
      if ( v31 + 2 < this->m_end )
      {
        *v31 = whitespace[0];
LABEL_108:
        ++this->m_pos;
        goto LABEL_109;
      }
      v10 = JsonSerializer::Error(this, "out of memory");
LABEL_105:
      if ( !v10 )
        return (JsonSerializer *)v10;
      do
LABEL_109:
        ++v15;
      while ( v14[v15] );
      if ( !JsonSerializer::Write(this, v14, v15) )
        return 0;
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
  Json v3; 

  v3 = *value;
  return JsonSerializer::Json(this, NULL, &v3);
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
  int v2; 
  const char *result; 
  const char *v7; 
  int v8; 
  const char *v11; 
  __int128 v13; 

  _R9 = p;
  v2 = *p - 1;
  v13 = _xmm_ffffffff000000010000000100000000;
  switch ( v2 )
  {
    case 0:
    case 1:
      v7 = p + 1;
      v8 = 1;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[5].chars;
      do
      {
        for ( _R8 = v7; ; _R8 += 16 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
          if ( (_DWORD)p != 16 )
            break;
        }
        v11 = &_R8[(int)p];
        p = (const char *)*(unsigned __int8 *)v11;
        v7 = v11 + 1;
        v8 += *((_DWORD *)&v13 + (_QWORD)p);
      }
      while ( v8 > 0 );
      result = v7;
      break;
    case 3:
      _R9 = p + 1;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
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
      _R9 = p + 1;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r9], 0 }
        if ( (_DWORD)p != 16 )
          break;
        _R9 += 16;
      }
      goto LABEL_19;
    default:
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
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
  const char *v10; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  char *m_pos; 
  unsigned __int8 v17; 
  __int64 v18; 
  __int64 v19; 
  char *v20; 
  char *v21; 
  char *v22; 
  char *v23; 
  char *v24; 
  __int64 v25; 
  bool v26; 
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
      v10 = v5;
      _R8 = v5;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v13 = &_R8[(int)m_parentCount];
      v14 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v10;
      if ( this->m_closed )
        return 0;
      v15 = v14;
      if ( !this->m_buffer )
        goto LABEL_51;
      m_pos = this->m_pos;
      if ( &m_pos[v14 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_52:
      v17 = *v13;
      if ( !*v13 )
        goto LABEL_76;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v13;
      if ( (byte_14471F6B0[v17] & 0x10) != 0 )
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
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v17];
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
      v18 = -1i64;
      do
        ++v18;
      while ( Src[v18] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v19 = (int)v18;
      if ( this->m_buffer )
      {
        v20 = this->m_pos;
        if ( &v20[(int)v18 + 1] >= this->m_end )
        {
LABEL_65:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_75;
        }
        memcpy_0(v20, Src, (int)v18);
      }
      this->m_pos += v19;
LABEL_75:
      v5 = v13 + 1;
      if ( !*v5 )
        goto LABEL_76;
    }
    memcpy_0(m_pos, v10, v14);
LABEL_51:
    this->m_pos += v15;
    goto LABEL_52;
  }
LABEL_76:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_82;
  v21 = this->m_pos;
  if ( v21 + 2 < this->m_end )
  {
    *v21 = search[0];
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
  v22 = this->m_pos;
  if ( v22 + 2 < this->m_end )
  {
    *v22 = asc_143D7E4F8[0];
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
  v23 = this->m_pos;
  if ( v23 + 2 < this->m_end )
  {
    *v23 = whitespace[0];
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
  v24 = this->m_pos;
  if ( v24 + 5 < this->m_end )
  {
    *(_DWORD *)v24 = *(_DWORD *)"null";
    goto LABEL_105;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_106:
  v25 = this->m_parentCount;
  v26 = (_DWORD)v25 == 0;
  if ( (int)v25 > 0 )
  {
    this->m_parentTypes[v25 + 31] = JSON_OBJECT;
    v26 = this->m_parentCount == 0;
  }
  if ( v26 )
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
  char *v15; 
  unsigned __int64 v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  char v20; 
  __int64 v21; 
  bool v22; 
  __int64 v23; 
  char *v26; 
  char *v27; 
  unsigned __int64 v28; 
  int v29; 
  int v30; 
  char *v33; 
  char *v34; 
  unsigned __int64 v35; 
  int v36; 
  int v37; 
  _BYTE *v38; 
  char *v39; 
  unsigned __int64 v40; 
  _BYTE *v41; 
  const void *v44; 
  _BYTE *v45; 
  int v46; 
  unsigned __int64 v47; 
  int k; 
  __int64 v49; 
  unsigned __int64 v50; 
  const char *fmt; 
  char *v52; 
  int v53; 
  bool v54; 
  int v55; 
  int v56; 
  int v57; 
  __int64 v58; 
  char *v61; 
  char *v62; 
  unsigned __int64 v63; 
  int v64; 
  int v65; 
  char *v66; 
  char *v69; 
  unsigned __int64 v70; 
  unsigned __int64 v71; 
  bool v72; 
  int v73; 
  int v74; 
  char v75; 
  char *v78; 
  char *v79; 
  unsigned __int64 v80; 
  int v81; 
  int v82; 
  _BYTE *v83; 
  char *v84; 
  Json *v85; 
  _BYTE *v86; 
  const void *v89; 
  _BYTE *v90; 
  int v91; 
  int i; 
  __int64 v93; 
  Json *v94; 
  unsigned __int64 v95; 
  unsigned __int64 v96; 
  unsigned __int64 v97; 
  bool v98; 
  int v99; 
  char *v102; 
  char *v103; 
  unsigned __int64 v104; 
  int v105; 
  int v106; 
  char *j; 
  char *v108; 
  char v109; 
  char v110; 
  char v111; 
  char v112; 
  char *v113; 
  char v114; 
  int v115; 
  char *v118; 
  char *v119; 
  unsigned __int64 v120; 
  int v121; 
  int v122; 
  int v123; 
  const char *v124; 
  char v125; 
  char *v128; 
  char *v129; 
  unsigned __int64 v130; 
  int v131; 
  int v132; 
  int v133; 
  const char *v134; 
  char v135; 
  char *v138; 
  char *v139; 
  unsigned __int64 v140; 
  int v141; 
  int v142; 
  int v143; 
  const char *v144; 
  char v145; 
  char *v148; 
  unsigned __int64 v149; 
  unsigned __int64 v150; 
  int v151; 
  int v152; 
  __int64 v154; 
  int v157; 
  char *v158; 
  char *v159; 
  Json *v161; 
  char v162[64]; 

  v4 = -1;
  v157 = -1;
  v5 = errorSize;
  v6 = error;
  v161 = this;
  if ( error && v5 )
    *error = 0;
  v8 = (unsigned __int8)*text;
  v9 = 1;
  v10 = text;
  v11 = 1;
  if ( (byte_14471F6B0[v8] & 2) != 0 )
  {
    _R8 = text + 1;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v15 = text;
    v12 = &_R8[(int)this];
    v16 = v12 - text;
    if ( text > v12 )
      v16 = 0i64;
    if ( v16 )
    {
      do
      {
        this = (Json *)(unsigned __int8)*v15;
        v17 = v11 + 1;
        v11 = 1;
        if ( (_BYTE)this != 10 )
          v11 = v17;
        v18 = v9 + 1;
        if ( (_BYTE)this != 10 )
          v18 = v9;
        ++v15;
        v9 = v18;
      }
      while ( v15 - text < v16 );
    }
    LOBYTE(v8) = *v12;
  }
  else
  {
    v12 = text;
  }
  v19 = -1i64;
LABEL_19:
  LOBYTE(this) = 0;
  v20 = 0;
  if ( v19 >= 0 )
  {
    v20 = v162[v19 + 32];
    this = (Json *)(unsigned __int8)v162[v19];
  }
  while ( 1 )
  {
    v21 = v19;
    if ( (_BYTE)v8 == 125 )
    {
      v22 = v20 == 1;
    }
    else
    {
      if ( (_BYTE)v8 != 93 )
        break;
      v22 = v20 == 2;
    }
    if ( !v22 )
      break;
    v23 = (unsigned __int8)v12[1];
    ++v11;
    ++v12;
    if ( (byte_14471F6B0[v23] & 2) != 0 )
    {
      _R8 = v12 + 1;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
        if ( (_DWORD)this != 16 )
          break;
        _R8 += 16;
      }
      v26 = &_R8[(int)this];
      v27 = v12;
      v28 = v26 - v12;
      if ( v12 > v26 )
        v28 = 0i64;
      if ( v28 )
      {
        do
        {
          this = (Json *)(unsigned __int8)*v27;
          v29 = v11 + 1;
          v11 = 1;
          if ( (_BYTE)this != 10 )
            v11 = v29;
          v30 = v9 + 1;
          if ( (_BYTE)this != 10 )
            v30 = v9;
          ++v27;
          v9 = v30;
        }
        while ( v27 - v12 < v28 );
      }
      LOBYTE(v23) = *v26;
      v12 = v26;
    }
    LOBYTE(v8) = v23;
    if ( v19 < 0 )
    {
      Json_ParseError(v6, v5, v9, v11, "parent underflow");
      return 0;
    }
    --v4;
    --v19;
    LOBYTE(this) = 0;
    v157 = v4;
    v20 = 0;
    if ( v21 <= 0 || (v20 = v162[v19 + 32], this = (Json *)(unsigned __int8)v162[v19], !v20) )
    {
      if ( (_BYTE)v23 )
      {
        LODWORD(v154) = *v12;
        Json_ParseError(v6, v5, v9, v11, "trailing json source after end of toplevel object '%c'", v154);
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
        _R8 = v12 + 1;
        _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
        while ( 1 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
          if ( (_DWORD)this != 16 )
            break;
          _R8 += 16;
        }
        v33 = &_R8[(int)this];
        v34 = v12;
        v35 = v33 - v12;
        if ( v12 > v33 )
          v35 = 0i64;
        if ( v35 )
        {
          do
          {
            v36 = v11 + 1;
            v11 = 1;
            if ( *v34 != 10 )
              v11 = v36;
            v37 = v9 + 1;
            if ( *v34 != 10 )
              v37 = v9;
            ++v34;
            v9 = v37;
          }
          while ( v34 - v12 < v35 );
        }
        LOBYTE(v8) = *v33;
        v12 = v33;
      }
    }
    else if ( (((_BYTE)v8 - 93) & 0xDF) != 0 )
    {
      goto LABEL_305;
    }
  }
  if ( v20 != 1 )
    goto LABEL_134;
  if ( (_BYTE)v8 != 34 )
  {
LABEL_305:
    LODWORD(v154) = *v12;
LABEL_313:
    Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v154);
    return 0;
  }
  *v10 = 4;
  v38 = v12 + 1;
  v39 = v10 + 1;
  v158 = v10 + 1;
  v40 = 0i64;
  if ( !v12[1] )
    return 0;
  while ( 1 )
  {
    v41 = v38;
    _R8 = v38;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[0].chars;
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)this != 16 )
        break;
      _R8 += 16;
    }
    v44 = v38;
    v45 = &_R8[(int)this];
    memmove_0(v39, v44, v45 - v41);
    v39 += v45 - v41;
    if ( *v45 == 34 )
    {
      *v39 = 0;
      if ( v40 )
      {
        fmt = "end of string with incomplete surrogate pair";
        goto LABEL_101;
      }
      v57 = (_DWORD)v45 + 1 - (_DWORD)v41;
      v12 = v45 + 1;
      v52 = error;
      v10 = v39 + 1;
      v53 = errorSize;
      v11 += v57 + 1;
LABEL_105:
      v58 = (unsigned __int8)*v12;
      if ( (byte_14471F6B0[v58] & 2) != 0 )
      {
        _R8 = v12 + 1;
        _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
        while ( 1 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
          if ( (_DWORD)this != 16 )
            break;
          _R8 += 16;
        }
        v61 = &_R8[(int)this];
        v62 = v12;
        v63 = v61 - v12;
        if ( v12 > v61 )
          v63 = 0i64;
        if ( v63 )
        {
          do
          {
            v64 = v11 + 1;
            v11 = 1;
            if ( *v12 != 10 )
              v11 = v64;
            v65 = v9 + 1;
            if ( *v12 != 10 )
              v65 = v9;
            ++v12;
            v9 = v65;
          }
          while ( v12 - v62 < v63 );
        }
        LOBYTE(v58) = *v61;
        v12 = v61;
      }
      v66 = v12;
      if ( (_BYTE)v58 != 58 )
      {
        LODWORD(v154) = *v12;
        Json_ParseError(v52, v53, v9, v11, "unexpected character '%c'", v154);
        return 0;
      }
      v8 = (unsigned __int8)v12[1];
      ++v11;
      ++v12;
      if ( (byte_14471F6B0[v8] & 2) != 0 )
      {
        _R8 = v66 + 2;
        _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
        while ( 1 )
        {
          __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
          if ( (_DWORD)this != 16 )
            break;
          _R8 += 16;
        }
        v69 = &_R8[(int)this];
        v70 = v69 - v12;
        if ( v12 > v69 )
          v70 = 0i64;
        if ( v70 )
        {
          v71 = ~(unsigned __int64)v66;
          do
          {
            v72 = *v12 == 10;
            v73 = v11 + 1;
            v11 = 1;
            ++v12;
            if ( !v72 )
              v11 = v73;
            v74 = v9 + 1;
            if ( !v72 )
              v74 = v9;
            v9 = v74;
          }
          while ( (unsigned __int64)&v12[v71] < v70 );
        }
        LOBYTE(v8) = *v69;
        v12 = &_R8[(int)this];
      }
      v6 = error;
      v5 = errorSize;
      v4 = v157;
LABEL_134:
      if ( v19 >= 0 )
        v162[v19] = 1;
      switch ( (char)v8 )
      {
        case 0:
          if ( v4 < 0 && v10 != text )
          {
            v161->m_value = text;
            return 1;
          }
          Json_ParseError(v6, v5, v9, v11, "unexpected end of input");
          return 0;
        case 34:
          *v10 = 8;
          v83 = v12 + 1;
          v84 = v10 + 1;
          v159 = v10 + 1;
          v85 = NULL;
          if ( !v12[1] )
            return 0;
          while ( 2 )
          {
            v86 = v83;
            _R8 = v83;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[0].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v89 = v83;
            v90 = &_R8[(int)this];
            memmove_0(v84, v89, v90 - v86);
            v84 += v90 - v86;
            if ( *v90 == 34 )
            {
              *v84 = 0;
              if ( !v85 )
              {
                v99 = (_DWORD)v90 + 1 - (_DWORD)v86;
                v12 = v90 + 1;
                v10 = v84 + 1;
                v11 += v99 + 1;
                goto LABEL_195;
              }
              v98 = Json_ParseError(error, errorSize, v9, v11, "end of string with incomplete surrogate pair");
            }
            else
            {
              if ( *v90 != 92 )
                return 0;
              this = (Json *)(unsigned __int8)v90[1];
              if ( (byte_14471F6B0[(_QWORD)this] & 0x40) != 0 )
              {
                *v84++ = byte_14471F7F0[(_QWORD)this];
                v83 = v90 + 2;
                goto LABEL_182;
              }
              if ( (((_BYTE)this - 85) & 0xDF) != 0 )
              {
                LODWORD(v154) = (char)v90[1];
                v98 = Json_ParseError(error, errorSize, v9, v11, "unknown escape sequence '\\%c'", v154);
              }
              else
              {
                v83 = v90 + 2;
                v91 = 4;
                if ( (_BYTE)this == 85 )
                  v91 = 8;
                this = NULL;
                for ( i = 0; i < v91; ++i )
                {
                  v93 = (unsigned __int8)*v83++;
                  if ( (byte_14471F6B0[v93] & 8) == 0 )
                  {
                    LODWORD(v154) = (char)*v83;
                    v98 = Json_ParseError(error, errorSize, v9, v11, "unexpected char '%c'", v154);
                    goto LABEL_192;
                  }
                  v94 = (Json *)((16i64 * (_QWORD)this) | (unsigned __int8)byte_14471F7F0[v93 + 320]);
                  this = v94;
                }
                if ( (unsigned __int64)v94 < 4 )
                {
                  v98 = Json_ParseError(error, errorSize, v9, v11, "unicode escape sequence \\u00%02zu is not allowed, it unescapes to byte 0x%02zu which is a reserved value and would cause invalid traversal", (size_t)v94, (size_t)v94);
                  break;
                }
                if ( (unsigned __int64)&v94[-3456] > 0x3FF )
                {
                  if ( (unsigned __int64)&v94[-3520] <= 0x3FF )
                  {
                    if ( !v85 )
                    {
                      v98 = Json_ParseError(error, errorSize, v9, v11, "second surrogate found without a first");
                      break;
                    }
                    this = &v94[64 * (_QWORD)v85 - 3538368];
                    v85 = NULL;
                  }
                  if ( (unsigned __int64)this > 0x10FFFF )
                  {
                    v98 = Json_ParseError(error, errorSize, v9, v11, "unicode escape sequence out of range");
                    break;
                  }
                  if ( (unsigned __int64)this < 0x10000 )
                  {
                    if ( (unsigned __int64)this < 0x800 )
                    {
                      if ( (unsigned __int64)this < 0x80 )
                      {
                        *v84++ = (char)this;
                      }
                      else
                      {
                        v97 = (unsigned __int64)this >> 6;
                        LOBYTE(this) = (unsigned __int8)this & 0x3F | 0x80;
                        v84[1] = (char)this;
                        *v84 = v97 | 0xC0;
                        v84 += 2;
                      }
                    }
                    else
                    {
                      *v84 = ((unsigned __int64)this >> 12) | 0xE0;
                      v96 = (unsigned __int64)this >> 6;
                      LOBYTE(this) = (unsigned __int8)this & 0x3F | 0x80;
                      v84[2] = (char)this;
                      v84[1] = v96 & 0x3F | 0x80;
                      v84 += 3;
                    }
                  }
                  else
                  {
                    *v84 = ((unsigned __int64)this >> 18) | 0xF0;
                    v84[1] = ((unsigned __int64)this >> 12) & 0x3F | 0x80;
                    v95 = (unsigned __int64)this >> 6;
                    LOBYTE(this) = (unsigned __int8)this & 0x3F | 0x80;
                    v84[3] = (char)this;
                    v84[2] = v95 & 0x3F | 0x80;
                    v84 += 4;
                  }
LABEL_182:
                  if ( !*v83 )
                    return 0;
                  continue;
                }
                if ( !v85 )
                {
                  v85 = v94;
                  goto LABEL_182;
                }
                v98 = Json_ParseError(error, errorSize, v9, v11, "second first surrogate found");
              }
            }
            break;
          }
LABEL_192:
          if ( !v98 )
            return 0;
          v10 = v159;
LABEL_195:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _R8 = v12 + 1;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v102 = &_R8[(int)this];
            v103 = v12;
            v104 = v102 - v12;
            if ( v12 > v102 )
              v104 = 0i64;
            if ( v104 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v12;
                v105 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v105;
                v106 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v106 = v9;
                ++v12;
                v9 = v106;
              }
              while ( v12 - v103 < v104 );
            }
            LOBYTE(v8) = *v102;
            v12 = v102;
          }
          v6 = error;
          v5 = errorSize;
          v4 = v157;
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
          v108 = v12;
          if ( *v12 != 45 )
            j = v12;
          v109 = *j;
          if ( *j == 48 )
          {
            ++j;
          }
          else
          {
            if ( (unsigned __int8)(v109 - 49) > 8u )
              goto LABEL_231;
            if ( v109 >= 48 )
            {
              v110 = *j;
              do
              {
                if ( v110 > 57 )
                  break;
                v110 = *++j;
              }
              while ( v110 >= 48 );
            }
          }
          if ( *j != 46 )
            goto LABEL_223;
          v109 = j[1];
          if ( (unsigned __int8)(v109 - 48) > 9u )
            goto LABEL_231;
          v111 = j[2];
          for ( j += 2; v111 >= 48; v111 = *++j )
          {
            if ( v111 > 57 )
              break;
          }
LABEL_223:
          if ( ((*j - 69) & 0xDF) != 0 )
            goto LABEL_230;
          v112 = j[1];
          v113 = j + 1;
          if ( ((v112 - 43) & 0xFD) == 0 )
            ++v113;
          v109 = *v113;
          if ( (unsigned __int8)(*v113 - 48) <= 9u )
          {
            v114 = v113[1];
            for ( j = v113 + 1; v114 >= 48; v114 = *++j )
            {
              if ( v114 > 57 )
                break;
            }
LABEL_230:
            memcpy_0(v10, v12, j - v12);
            v115 = (_DWORD)j - (_DWORD)v12;
            v12 = j;
            v11 += v115;
            v10 += j - v108;
            goto LABEL_232;
          }
LABEL_231:
          LODWORD(v154) = v109;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c' while parsing number", v154) )
            return 0;
LABEL_232:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _R8 = v12 + 1;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v118 = &_R8[(int)this];
            v119 = v12;
            v120 = v118 - v12;
            if ( v12 > v118 )
              v120 = 0i64;
            if ( v120 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v12;
                v121 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v121;
                v122 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v122 = v9;
                ++v12;
                v9 = v122;
              }
              while ( v12 - v119 < v120 );
            }
            LOBYTE(v8) = *v118;
            v12 = v118;
          }
          v6 = error;
          v4 = v157;
          *v10++ = 0;
          break;
        case 91:
        case 123:
          ++v4;
          v75 = ((_BYTE)v8 == 91) + 1;
          v157 = v4;
          ++v11;
          if ( ++v19 >= 32 )
          {
            LODWORD(v154) = 32;
            Json_ParseError(v6, v5, v9, v11, "json depth exceeds JSON_MAX_PARENT_COUNT = %d", v154);
            return 0;
          }
          v162[v19 + 32] = v75;
          if ( (unsigned __int64)v19 >= 0x20 )
          {
            j___report_rangecheckfailure(this);
            __debugbreak();
          }
          v8 = (unsigned __int8)*++v12;
          v162[v19] = 0;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _R8 = v12 + 1;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v78 = &_R8[(int)this];
            v79 = v12;
            v80 = v78 - v12;
            if ( v12 > v78 )
              v80 = 0i64;
            if ( v80 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v79;
                v81 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v81;
                v82 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v82 = v9;
                ++v79;
                v9 = v82;
              }
              while ( v79 - v12 < v80 );
            }
            LOBYTE(v8) = *v78;
            v12 = v78;
          }
          *v10++ = v75;
          goto LABEL_19;
        case 102:
          v143 = (int)v12;
          v144 = "false";
          LOBYTE(this) = 102;
          while ( 1 )
          {
            v145 = *v12++;
            if ( (_BYTE)this != v145 )
              break;
            this = (Json *)*(unsigned __int8 *)++v144;
            if ( !(_BYTE)this )
            {
              v11 += (_DWORD)v12 - v143;
              goto LABEL_289;
            }
          }
          LODWORD(v154) = *v12;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v154) )
            return 0;
LABEL_289:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _R8 = v12 + 1;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v148 = &_R8[(int)this];
            v149 = 0i64;
            v150 = v148 - v12;
            if ( v12 > v148 )
              v150 = 0i64;
            if ( v150 )
            {
              do
              {
                this = (Json *)(unsigned __int8)v12[v149];
                v151 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v151;
                v152 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v152 = v9;
                ++v149;
                v9 = v152;
              }
              while ( v149 < v150 );
            }
            LOBYTE(v8) = *v148;
            v12 = v148;
          }
          v6 = error;
          *v10++ = 6;
          goto LABEL_19;
        case 110:
          v123 = (int)v12;
          v124 = "null";
          LOBYTE(this) = 110;
          while ( 1 )
          {
            v125 = *v12++;
            if ( (_BYTE)this != v125 )
              break;
            this = (Json *)*(unsigned __int8 *)++v124;
            if ( !(_BYTE)this )
            {
              v11 += (_DWORD)v12 - v123;
              goto LABEL_251;
            }
          }
          LODWORD(v154) = *v12;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v154) )
            return 0;
LABEL_251:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _R8 = v12 + 1;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
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
          *v10++ = 7;
          goto LABEL_19;
        case 116:
          v133 = (int)v12;
          v134 = "true";
          LOBYTE(this) = 116;
          while ( 1 )
          {
            v135 = *v12++;
            if ( (_BYTE)this != v135 )
              break;
            this = (Json *)*(unsigned __int8 *)++v134;
            if ( !(_BYTE)this )
            {
              v11 += (_DWORD)v12 - v133;
              goto LABEL_270;
            }
          }
          LODWORD(v154) = *v12;
          if ( !Json_ParseError(v6, v5, v9, v11, "unexpected character '%c'", v154) )
            return 0;
LABEL_270:
          v8 = (unsigned __int8)*v12;
          if ( (byte_14471F6B0[v8] & 2) != 0 )
          {
            _R8 = v12 + 1;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[1].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 10h }
              if ( (_DWORD)this != 16 )
                break;
              _R8 += 16;
            }
            v138 = &_R8[(int)this];
            v139 = v12;
            v140 = v138 - v12;
            if ( v12 > v138 )
              v140 = 0i64;
            if ( v140 )
            {
              do
              {
                this = (Json *)(unsigned __int8)*v12;
                v141 = v11 + 1;
                v11 = 1;
                if ( (_BYTE)this != 10 )
                  v11 = v141;
                v142 = v9 + 1;
                if ( (_BYTE)this != 10 )
                  v142 = v9;
                ++v12;
                v9 = v142;
              }
              while ( v12 - v139 < v140 );
            }
            LOBYTE(v8) = *v138;
            v12 = v138;
          }
          v6 = error;
          *v10++ = 5;
          goto LABEL_19;
        default:
          LODWORD(v154) = (char)v8;
          goto LABEL_313;
      }
      goto LABEL_19;
    }
    if ( *v45 != 92 )
      return 0;
    this = (Json *)(unsigned __int8)v45[1];
    if ( (byte_14471F6B0[(_QWORD)this] & 0x40) != 0 )
    {
      *v39++ = byte_14471F7F0[(_QWORD)this];
      v38 = v45 + 2;
      goto LABEL_91;
    }
    if ( (((_BYTE)this - 85) & 0xDF) != 0 )
    {
      v56 = (char)v45[1];
      v52 = error;
      v53 = errorSize;
      LODWORD(v154) = v56;
      v54 = Json_ParseError(error, errorSize, v9, v11, "unknown escape sequence '\\%c'", v154);
      goto LABEL_102;
    }
    v38 = v45 + 2;
    v46 = 4;
    if ( (_BYTE)this == 85 )
      v46 = 8;
    v47 = 0i64;
    for ( k = 0; k < v46; ++k )
    {
      v49 = (unsigned __int8)*v38++;
      if ( (byte_14471F6B0[v49] & 8) == 0 )
      {
        v55 = (char)*v38;
        v52 = error;
        v53 = errorSize;
        LODWORD(v154) = v55;
        v54 = Json_ParseError(error, errorSize, v9, v11, "unexpected char '%c'", v154);
        goto LABEL_102;
      }
      v50 = (16 * v47) | (unsigned __int8)byte_14471F7F0[v49 + 320];
      v47 = v50;
    }
    if ( v50 < 4 )
    {
      v52 = error;
      v53 = errorSize;
      v54 = Json_ParseError(error, errorSize, v9, v11, "unicode escape sequence \\u00%02zu is not allowed, it unescapes to byte 0x%02zu which is a reserved value and would cause invalid traversal", v50, v50);
      goto LABEL_102;
    }
    this = (Json *)(v50 - 55296);
    if ( (unsigned __int64)this <= 0x3FF )
      break;
    LODWORD(this) = v47 - 56320;
    if ( v47 - 56320 <= 0x3FF )
    {
      if ( !v40 )
      {
        fmt = "second surrogate found without a first";
        goto LABEL_101;
      }
      v47 = v47 + (v40 << 10) - 56613888;
      v40 = 0i64;
    }
    if ( v47 > 0x10FFFF )
    {
      fmt = "unicode escape sequence out of range";
      goto LABEL_101;
    }
    if ( v47 < 0x10000 )
    {
      if ( v47 < 0x800 )
      {
        if ( v47 < 0x80 )
        {
          *v39++ = v47;
        }
        else
        {
          this = (Json *)(v47 >> 6);
          LOBYTE(this) = (v47 >> 6) | 0xC0;
          v39[1] = v47 & 0x3F | 0x80;
          *v39 = (char)this;
          v39 += 2;
        }
      }
      else
      {
        *v39 = (v47 >> 12) | 0xE0;
        this = (Json *)(v47 >> 6);
        LOBYTE(this) = (v47 >> 6) & 0x3F | 0x80;
        v39[2] = v47 & 0x3F | 0x80;
        v39[1] = (char)this;
        v39 += 3;
      }
    }
    else
    {
      *v39 = (v47 >> 18) | 0xF0;
      v39[1] = (v47 >> 12) & 0x3F | 0x80;
      this = (Json *)(v47 >> 6);
      LOBYTE(this) = (v47 >> 6) & 0x3F | 0x80;
      v39[3] = v47 & 0x3F | 0x80;
      v39[2] = (char)this;
      v39 += 4;
    }
LABEL_91:
    if ( !*v38 )
      return 0;
  }
  if ( !v40 )
  {
    v40 = v47;
    goto LABEL_91;
  }
  fmt = "second first surrogate found";
LABEL_101:
  v52 = error;
  v53 = errorSize;
  v54 = Json_ParseError(error, errorSize, v9, v11, fmt);
LABEL_102:
  if ( v54 )
  {
    v10 = v158;
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
  char *v4; 
  int v5; 

  m_value = this->m_value;
  v2 = 0i64;
  if ( (unsigned __int8)(*m_value - 1) <= 1u )
  {
    v3 = NULL;
    v4 = UNDEFINED_0;
    if ( !m_value || !*m_value )
      goto LABEL_8;
    v5 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v5 == 4 )
    {
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
      v3 = (char *)(m_value + 2);
      _R8 = (char *)(m_value + 2);
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    }
    else
    {
      if ( (_BYTE)v5 != 3 )
        v4 = (char *)(m_value + 1);
      while ( 1 )
      {
        do
        {
LABEL_8:
          if ( !v3 && v4 == UNDEFINED_0 )
            return v2;
          ++v2;
        }
        while ( !v4 || !*v4 );
        v4 = (char *)Json_Skip(v4);
        v5 = (unsigned __int8)*v4;
        if ( (_BYTE)v5 == 4 )
          break;
        if ( (_BYTE)v5 == 3 )
        {
          v3 = NULL;
          v4 = UNDEFINED_0;
        }
      }
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
      v3 = v4 + 1;
      _R8 = v4 + 1;
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
    }
    v4 = &_R8[v5 + 1];
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
  const char *v12; 
  const char *v15; 
  int v16; 
  __int64 v17; 
  char *m_pos; 
  unsigned __int8 v19; 
  __int64 v20; 
  __int64 v21; 
  char *v22; 
  const char *v23; 
  const char *v26; 
  int v27; 
  __int64 v28; 
  char *v29; 
  unsigned __int8 v30; 
  __int64 v31; 
  __int64 v32; 
  char *v33; 
  char *v34; 
  __int64 v35; 
  bool v36; 
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
            v12 = v7;
            _R8 = v7;
            _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
            while ( 1 )
            {
              __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
              if ( (_DWORD)m_parentCount != 16 )
                break;
              _R8 += 16;
            }
            v15 = &_R8[(int)m_parentCount];
            v16 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v12;
            if ( this->m_closed )
              return 0;
            v17 = v16;
            if ( !this->m_buffer )
              goto LABEL_53;
            m_pos = this->m_pos;
            if ( &m_pos[v16 + 1] < this->m_end )
              break;
            if ( !JsonSerializer::Error(this, "out of memory") )
              return 0;
LABEL_54:
            v19 = *v15;
            if ( !*v15 )
              goto LABEL_78;
            LODWORD(m_parentCount) = this->m_closed;
            Src[0] = *v15;
            if ( (byte_14471F6B0[v19] & 0x10) != 0 )
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
                    *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v19];
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
            v20 = -1i64;
            do
              ++v20;
            while ( Src[v20] );
            if ( (_BYTE)m_parentCount )
              return 0;
            v21 = (int)v20;
            if ( this->m_buffer )
            {
              v22 = this->m_pos;
              if ( &v22[(int)v20 + 1] >= this->m_end )
              {
LABEL_67:
                if ( !JsonSerializer::Error(this, "out of memory") )
                  return 0;
                goto LABEL_77;
              }
              memcpy_0(v22, Src, (int)v20);
            }
            this->m_pos += v21;
LABEL_77:
            v7 = v15 + 1;
            if ( !*v7 )
              goto LABEL_78;
          }
          memcpy_0(m_pos, v12, v16);
LABEL_53:
          this->m_pos += v17;
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
      v23 = value;
      _R8 = value;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
      while ( 1 )
      {
        __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
        if ( (_DWORD)m_parentCount != 16 )
          break;
        _R8 += 16;
      }
      v26 = &_R8[(int)m_parentCount];
      v27 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v23;
      if ( this->m_closed )
        return 0;
      v28 = v27;
      if ( !this->m_buffer )
        goto LABEL_117;
      v29 = this->m_pos;
      if ( &v29[v27 + 1] < this->m_end )
        break;
      if ( !JsonSerializer::Error(this, "out of memory") )
        return 0;
LABEL_118:
      v30 = *v26;
      if ( !*v26 )
        goto LABEL_142;
      LODWORD(m_parentCount) = this->m_closed;
      Src[0] = *v26;
      if ( (byte_14471F6B0[v30] & 0x10) != 0 )
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
              *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v30];
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
      v31 = -1i64;
      do
        ++v31;
      while ( Src[v31] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v32 = (int)v31;
      if ( this->m_buffer )
      {
        v33 = this->m_pos;
        if ( &v33[(int)v31 + 1] >= this->m_end )
        {
LABEL_131:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          goto LABEL_141;
        }
        memcpy_0(v33, Src, (int)v31);
      }
      this->m_pos += v32;
LABEL_141:
      value = v26 + 1;
      if ( !*value )
        goto LABEL_142;
    }
    memcpy_0(v29, v23, v27);
LABEL_117:
    this->m_pos += v28;
    goto LABEL_118;
  }
LABEL_142:
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_148;
  v34 = this->m_pos;
  if ( v34 + 2 < this->m_end )
  {
    *v34 = search[0];
LABEL_148:
    ++this->m_pos;
    goto LABEL_149;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_149:
  v35 = this->m_parentCount;
  v36 = (_DWORD)v35 == 0;
  if ( (int)v35 > 0 )
  {
    this->m_parentTypes[v35 + 31] = JSON_OBJECT;
    v36 = this->m_parentCount == 0;
  }
  if ( v36 )
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
      *result = *this;
  }
  else
  {
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
float Json::ToFloat32(Json *this, float defaultValue)
{
  __int128 v2; 
  char *EndPtr; 

  if ( *this->m_value < 9 )
    return defaultValue;
  _set_errno(0);
  *(double *)&v2 = strtod(this->m_value, &EndPtr);
  _XMM6 = v2;
  if ( *_errno() || *(double *)&v2 < -3.402823466385289e38 || *(double *)&v2 > 3.402823466385289e38 )
    return defaultValue;
  __asm { vcvtsd2ss xmm0, xmm6, xmm6 }
  return *(float *)&_XMM0;
}

/*
==============
Json::ToFloat64
==============
*/
double Json::ToFloat64(Json *this, long double defaultValue)
{
  double result; 
  char *EndPtr; 

  if ( *this->m_value < 9 )
    return defaultValue;
  _set_errno(0);
  result = strtod(this->m_value, &EndPtr);
  if ( *_errno() )
    return defaultValue;
  return result;
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
      *result = *this;
  }
  else
  {
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[2].chars;
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
  char v10; 
  __int64 v11; 
  bool v12; 
  __int64 v14; 
  const char *v15; 
  const char *v18; 
  int v19; 
  __int64 v20; 
  char *m_pos; 
  unsigned __int8 v22; 
  __int64 v23; 
  __int64 v24; 
  char *v25; 
  char *v26; 
  char *v27; 
  char *v28; 
  char *v29; 
  char *v30; 
  __int64 v31; 
  bool v32; 
  char Src[16]; 
  char *v34; 
  int v35; 
  __int64 v36[4]; 
  char v37; 
  __int64 v38[6]; 

  v3 = v38;
  memset(v36, 0, sizeof(v36));
  do
  {
    v3 = (__int64 *)((char *)v3 - 1);
    *(_BYTE *)v3 = value % 0xA + 48;
    value /= 0xAui64;
  }
  while ( value );
  v6 = 0;
  v7 = (char *)((char *)v38 - (char *)v3);
  if ( (char *)v38 - (char *)v3 <= 32 )
  {
    memcpy_0(v36, v3, (char *)v38 - (char *)v3);
    v8 = (char *)v36 + (_QWORD)v7;
    v35 = 0;
  }
  else
  {
    v8 = &v37;
    v35 = 132;
  }
  v34 = v8;
  if ( !v35 )
    *v34 = 0;
  m_parentCount = (char *)this->m_parentCount;
  v10 = 0;
  if ( (int)m_parentCount > 0 )
    v10 = this->m_error[(_QWORD)m_parentCount + 128];
  v11 = -1i64;
  if ( name )
  {
    if ( v10 != 1 )
    {
      v12 = JsonSerializer::Error(this, "unexpected key outside of an object");
      goto LABEL_102;
    }
  }
  else if ( v10 == 1 )
  {
    v12 = JsonSerializer::Error(this, "key expected inside object");
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
          v14 = -1i64;
          do
            ++v14;
          while ( this->m_indent[v14] );
          if ( !JsonSerializer::Write(this, this->m_indent, v14) )
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
  for ( ; *name; name = v18 + 1 )
  {
    v15 = name;
    _R8 = name;
    _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[4].chars;
    while ( 1 )
    {
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      if ( (_DWORD)m_parentCount != 16 )
        break;
      _R8 += 16;
    }
    v18 = &_R8[(int)m_parentCount];
    v19 = (_DWORD)_R8 + (_DWORD)m_parentCount - (_DWORD)v15;
    if ( this->m_closed )
      return 0;
    v20 = v19;
    if ( this->m_buffer )
    {
      m_pos = this->m_pos;
      if ( &m_pos[v19 + 1] < this->m_end )
      {
        memcpy_0(m_pos, v15, v19);
        this->m_pos += v20;
      }
      else if ( !JsonSerializer::Error(this, "out of memory") )
      {
        return 0;
      }
    }
    else
    {
      this->m_pos += v19;
    }
    v22 = *v18;
    if ( !*v18 )
      break;
    LODWORD(m_parentCount) = this->m_closed;
    Src[0] = *v18;
    if ( (byte_14471F6B0[v22] & 0x10) != 0 )
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
        *m_parentCount = `JsonSerializer::QuotedString'::`2'::escape[v22];
        ++this->m_pos;
      }
      else
      {
        ++this->m_pos;
      }
    }
    else
    {
      v23 = -1i64;
      do
        ++v23;
      while ( Src[v23] );
      if ( (_BYTE)m_parentCount )
        return 0;
      v24 = (int)v23;
      if ( this->m_buffer )
      {
        v26 = this->m_pos;
        if ( &v26[(int)v23 + 1] >= this->m_end )
        {
LABEL_72:
          if ( !JsonSerializer::Error(this, "out of memory") )
            return 0;
          continue;
        }
        memcpy_0(v26, Src, (int)v23);
        this->m_pos += v24;
      }
      else
      {
        v25 = this->m_pos;
        LODWORD(m_parentCount) = v24 + (_DWORD)v25;
        this->m_pos = &v25[v24];
      }
    }
  }
  if ( this->m_closed )
    return 0;
  if ( this->m_buffer )
  {
    v27 = this->m_pos;
    if ( v27 + 2 < this->m_end )
    {
      *v27 = search[0];
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
    v28 = this->m_pos;
    if ( v28 + 2 < this->m_end )
    {
      *v28 = asc_143D7E4F8[0];
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
  v29 = this->m_pos;
  if ( v29 + 2 < this->m_end )
  {
    *v29 = whitespace[0];
    goto LABEL_105;
  }
  v12 = JsonSerializer::Error(this, "out of memory");
LABEL_102:
  if ( !v12 )
    return 0;
  do
LABEL_106:
    ++v11;
  while ( *((_BYTE *)v36 + v11) );
  if ( this->m_closed )
    return 0;
  if ( !this->m_buffer )
    goto LABEL_113;
  v30 = this->m_pos;
  if ( &v30[(int)v11 + 1] < this->m_end )
  {
    memcpy_0(v30, v36, (int)v11);
LABEL_113:
    this->m_pos += (int)v11;
    goto LABEL_114;
  }
  if ( !JsonSerializer::Error(this, "out of memory") )
    return 0;
LABEL_114:
  v31 = this->m_parentCount;
  v32 = (_DWORD)v31 == 0;
  if ( (int)v31 > 0 )
  {
    this->m_parentTypes[v31 + 31] = JSON_OBJECT;
    v32 = this->m_parentCount == 0;
  }
  if ( v32 )
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
  Json *v6; 

  m_value = this->m_value;
  result->m_key = NULL;
  result->m_value = UNDEFINED_0;
  if ( m_value && *m_value )
  {
    v3 = *((unsigned __int8 *)m_value + 1);
    if ( (_BYTE)v3 == 4 )
    {
      _R8 = m_value + 2;
      result->m_key = _R8;
      _XMM1 = *(_OWORD *)JSON_SCAN_CHARS[7].chars;
      __asm { vpcmpestri xmm1, xmmword ptr [r8], 0 }
      v6 = result;
      result->m_value = &_R8[v3 + 1];
      return v6;
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

