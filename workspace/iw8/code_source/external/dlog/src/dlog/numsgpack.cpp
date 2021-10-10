/*
==============
MsgPackSerializer::UInt
==============
*/

bool __fastcall MsgPackSerializer::UInt(MsgPackSerializer *this, __int64 key, unsigned __int64 value)
{
  return ?UInt@MsgPackSerializer@@QEAA_N_J_K@Z(this, key, value);
}

/*
==============
MsgPackSerializer::Bool
==============
*/

bool __fastcall MsgPackSerializer::Bool(MsgPackSerializer *this, const char *key, bool value)
{
  return ?Bool@MsgPackSerializer@@QEAA_NPEBD_N@Z(this, key, value);
}

/*
==============
MsgPack::GetKey
==============
*/

bool __fastcall MsgPack::GetKey(MsgPack *this, __int64 *value)
{
  return ?GetKey@MsgPack@@QEBA_NPEA_J@Z(this, value);
}

/*
==============
MsgPack::KeyToInt
==============
*/

__int64 __fastcall MsgPack::KeyToInt(MsgPack *this)
{
  return ?KeyToInt@MsgPack@@QEBA_JXZ(this);
}

/*
==============
MsgPack::GetBytes
==============
*/

int __fastcall MsgPack::GetBytes(MsgPack *this, void *value, int size)
{
  return ?GetBytes@MsgPack@@QEBAHPEAXH@Z(this, value, size);
}

/*
==============
MsgPackSerializer::Null
==============
*/

bool __fastcall MsgPackSerializer::Null(MsgPackSerializer *this, __int64 key)
{
  return ?Null@MsgPackSerializer@@QEAA_N_J@Z(this, key);
}

/*
==============
MsgPack::ToMap
==============
*/

MsgPack *__fastcall MsgPack::ToMap(MsgPack *this, MsgPack *result)
{
  return ?ToMap@MsgPack@@QEBA?AV1@XZ(this, result);
}

/*
==============
MsgPackSerializer::BeginMap
==============
*/

bool __fastcall MsgPackSerializer::BeginMap(MsgPackSerializer *this, __int64 key)
{
  return ?BeginMap@MsgPackSerializer@@QEAA_N_J@Z(this, key);
}

/*
==============
MsgPack::GetBool
==============
*/

bool __fastcall MsgPack::GetBool(MsgPack *this, bool *value)
{
  return ?GetBool@MsgPack@@QEBA_NPEA_N@Z(this, value);
}

/*
==============
operator==
==============
*/

bool __fastcall operator==(const hkPropertyRegistry::Key *lhs, const hkPropertyRegistry::Key *rhs)
{
  return ??8@YA_NAEBUKey@hkPropertyRegistry@@0@Z(lhs, rhs);
}

/*
==============
operator!=
==============
*/

bool __fastcall operator!=(const char *const s, const bdString *str)
{
  return ??9@YA_NQEBDAEBVbdString@@@Z(s, str);
}

/*
==============
MsgPackSerializer::UInt
==============
*/

bool __fastcall MsgPackSerializer::UInt(MsgPackSerializer *this, const char *key, unsigned __int64 value)
{
  return ?UInt@MsgPackSerializer@@QEAA_NPEBD_K@Z(this, key, value);
}

/*
==============
MsgPack::GetKey
==============
*/

bool __fastcall MsgPack::GetKey(MsgPack *this, char *value, unsigned __int64 size)
{
  return ?GetKey@MsgPack@@QEBA_NPEAD_K@Z(this, value, size);
}

/*
==============
MsgPackSerializer::Int
==============
*/

bool __fastcall MsgPackSerializer::Int(MsgPackSerializer *this, __int64 value)
{
  return ?Int@MsgPackSerializer@@QEAA_N_J@Z(this, value);
}

/*
==============
MsgPack::end
==============
*/

MsgPack *__fastcall MsgPack::end(MsgPack *result)
{
  return ?end@MsgPack@@SA?AV1@XZ(result);
}

/*
==============
MsgPack::GetChild
==============
*/

bool __fastcall MsgPack::GetChild(MsgPack *this, const char *key, MsgPack *child)
{
  return ?GetChild@MsgPack@@QEBA_NPEBDPEAV1@@Z(this, key, child);
}

/*
==============
MsgPack::KeyToString
==============
*/

const char *__fastcall MsgPack::KeyToString(MsgPack *this)
{
  return ?KeyToString@MsgPack@@QEBAPEBDXZ(this);
}

/*
==============
MsgPack::operator==
==============
*/

bool __fastcall MsgPack::operator==(MsgPack *this, const MsgPack *rhs)
{
  return ??8MsgPack@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
MsgPack::GetArray
==============
*/

bool __fastcall MsgPack::GetArray(MsgPack *this, MsgPack *value)
{
  return ?GetArray@MsgPack@@QEBA_NPEAV1@@Z(this, value);
}

/*
==============
MsgPackSerializer::Key
==============
*/

unsigned __int8 *__fastcall MsgPackSerializer::Key(MsgPackSerializer *this, const char *key)
{
  return ?Key@MsgPackSerializer@@AEAAPEAEPEBD@Z(this, key);
}

/*
==============
MsgPack::GetUInt
==============
*/

bool __fastcall MsgPack::GetUInt(MsgPack *this, unsigned __int64 *value)
{
  return ?GetUInt@MsgPack@@QEBA_NPEA_K@Z(this, value);
}

/*
==============
MsgPack::ToBool
==============
*/

bool __fastcall MsgPack::ToBool(MsgPack *this, bool defaultValue)
{
  return ?ToBool@MsgPack@@QEBA_N_N@Z(this, defaultValue);
}

/*
==============
MsgPackSerializer::String
==============
*/

bool __fastcall MsgPackSerializer::String(MsgPackSerializer *this, __int64 key, const char *value)
{
  return ?String@MsgPackSerializer@@QEAA_N_JPEBD@Z(this, key, value);
}

/*
==============
MsgPack::ToInt
==============
*/

__int64 __fastcall MsgPack::ToInt(MsgPack *this, __int64 defaultValue)
{
  return ?ToInt@MsgPack@@QEBA_J_J@Z(this, defaultValue);
}

/*
==============
MsgPackSerializer::Null
==============
*/

bool __fastcall MsgPackSerializer::Null(MsgPackSerializer *this)
{
  return ?Null@MsgPackSerializer@@QEAA_NXZ(this);
}

/*
==============
MsgPackSerializer::Null
==============
*/

bool __fastcall MsgPackSerializer::Null(MsgPackSerializer *this, const char *key)
{
  return ?Null@MsgPackSerializer@@QEAA_NPEBD@Z(this, key);
}

/*
==============
MsgPackSerializer::Int
==============
*/

bool __fastcall MsgPackSerializer::Int(MsgPackSerializer *this, __int64 key, __int64 value)
{
  return ?Int@MsgPackSerializer@@QEAA_N_J0@Z(this, key, value);
}

/*
==============
MsgPackSerializer::EndMap
==============
*/

bool __fastcall MsgPackSerializer::EndMap(MsgPackSerializer *this)
{
  return ?EndMap@MsgPackSerializer@@QEAA_NXZ(this);
}

/*
==============
MsgPack::ToUInt
==============
*/

unsigned __int64 __fastcall MsgPack::ToUInt(MsgPack *this, unsigned __int64 defaultValue)
{
  return ?ToUInt@MsgPack@@QEBA_K_K@Z(this, defaultValue);
}

/*
==============
MsgPackSerializer::BeginArray
==============
*/

bool __fastcall MsgPackSerializer::BeginArray(MsgPackSerializer *this, __int64 key)
{
  return ?BeginArray@MsgPackSerializer@@QEAA_N_J@Z(this, key);
}

/*
==============
MsgPackSerializer::String
==============
*/

bool __fastcall MsgPackSerializer::String(MsgPackSerializer *this, const char *key, const char *value)
{
  return ?String@MsgPackSerializer@@QEAA_NPEBD0@Z(this, key, value);
}

/*
==============
MsgPack::operator*
==============
*/

const MsgPack *__fastcall MsgPack::operator*(MsgPack *this)
{
  return ??DMsgPack@@QEBAAEBV0@XZ(this);
}

/*
==============
MsgPack::KeyCmp
==============
*/

bool __fastcall MsgPack::KeyCmp(MsgPack *this, __int64 key)
{
  return ?KeyCmp@MsgPack@@QEBA_N_J@Z(this, key);
}

/*
==============
MsgPackSerializer::Key
==============
*/

unsigned __int8 *__fastcall MsgPackSerializer::Key(MsgPackSerializer *this, __int64 key)
{
  return ?Key@MsgPackSerializer@@AEAAPEAE_J@Z(this, key);
}

/*
==============
MsgPack::operator[]
==============
*/

const MsgPack *__fastcall MsgPack::operator[](MsgPack *this, const MsgPack *result, __int64 key)
{
  return ??AMsgPack@@QEBA?BV0@_J@Z(this, result, key);
}

/*
==============
MsgPack::GetFloat
==============
*/

bool __fastcall MsgPack::GetFloat(MsgPack *this, long double *value)
{
  return ?GetFloat@MsgPack@@QEBA_NPEAN@Z(this, value);
}

/*
==============
GetArray
==============
*/

unsigned int __fastcall GetArray(scrContext_t *scrContext, unsigned int id)
{
  return ?GetArray@@YAIAEAUscrContext_t@@I@Z(scrContext, id);
}

/*
==============
MsgPack::operator!=
==============
*/

bool __fastcall MsgPack::operator!=(MsgPack *this, const MsgPack *rhs)
{
  return ??9MsgPack@@QEBA_NAEBV0@@Z(this, rhs);
}

/*
==============
MsgPackSerializer::Bytes
==============
*/

bool __fastcall MsgPackSerializer::Bytes(MsgPackSerializer *this, __int64 key, const void *value, unsigned __int64 valueSize)
{
  return ?Bytes@MsgPackSerializer@@QEAA_N_JPEBX_K@Z(this, key, value, valueSize);
}

/*
==============
MsgPackSerializer::MsgPackSerializer
==============
*/

void __fastcall MsgPackSerializer::MsgPackSerializer(MsgPackSerializer *this, void *output, unsigned __int64 outputSize)
{
  ??0MsgPackSerializer@@QEAA@PEAX_K@Z(this, output, outputSize);
}

/*
==============
MsgPackSerializer::Float64
==============
*/

bool __fastcall MsgPackSerializer::Float64(MsgPackSerializer *this, const char *key, long double value)
{
  return ?Float64@MsgPackSerializer@@QEAA_NPEBDN@Z(this, key, value);
}

/*
==============
MsgPack::GetString
==============
*/

bool __fastcall MsgPack::GetString(MsgPack *this, char *value, unsigned __int64 size)
{
  return ?GetString@MsgPack@@QEBA_NPEAD_K@Z(this, value, size);
}

/*
==============
MsgPackSerializer::String
==============
*/

bool __fastcall MsgPackSerializer::String(MsgPackSerializer *this, const char *value)
{
  return ?String@MsgPackSerializer@@QEAA_NPEBD@Z(this, value);
}

/*
==============
MsgPack::operator[]
==============
*/

const MsgPack *__fastcall MsgPack::operator[](MsgPack *this, const MsgPack *result, const char *key)
{
  return ??AMsgPack@@QEBA?BV0@PEBD@Z(this, result, key);
}

/*
==============
MsgPackSerializer::Bool
==============
*/

bool __fastcall MsgPackSerializer::Bool(MsgPackSerializer *this, __int64 key, bool value)
{
  return ?Bool@MsgPackSerializer@@QEAA_N_J_N@Z(this, key, value);
}

/*
==============
MsgPack::operator++
==============
*/

MsgPack *__fastcall MsgPack::operator++(MsgPack *this, MsgPack *result)
{
  return ??EMsgPack@@QEAA?AV0@XZ(this, result);
}

/*
==============
MsgPack::Type
==============
*/

MsgPackType __fastcall MsgPack::Type(MsgPack *this)
{
  return ?Type@MsgPack@@QEBA?AW4MsgPackType@@XZ(this);
}

/*
==============
MsgPackSerializer::BeginMap
==============
*/

bool __fastcall MsgPackSerializer::BeginMap(MsgPackSerializer *this, const char *key)
{
  return ?BeginMap@MsgPackSerializer@@QEAA_NPEBD@Z(this, key);
}

/*
==============
MsgPack::MsgPack
==============
*/

void __fastcall MsgPack::MsgPack(MsgPack *this)
{
  ??0MsgPack@@QEAA@XZ(this);
}

/*
==============
MsgPack::GetMap
==============
*/

bool __fastcall MsgPack::GetMap(MsgPack *this, MsgPack *value)
{
  return ?GetMap@MsgPack@@QEBA_NPEAV1@@Z(this, value);
}

/*
==============
MsgPackSerializer::Size
==============
*/

unsigned __int64 __fastcall MsgPackSerializer::Size(MsgPackSerializer *this)
{
  return ?Size@MsgPackSerializer@@QEBA_KXZ(this);
}

/*
==============
MsgPack::KeyCmp
==============
*/

bool __fastcall MsgPack::KeyCmp(MsgPack *this, const char *key)
{
  return ?KeyCmp@MsgPack@@QEBA_NPEBD@Z(this, key);
}

/*
==============
MsgPack::GetChild
==============
*/

bool __fastcall MsgPack::GetChild(MsgPack *this, __int64 key, MsgPack *child)
{
  return ?GetChild@MsgPack@@QEBA_N_JPEAV1@@Z(this, key, child);
}

/*
==============
MsgPackSerializer::Float32
==============
*/

bool __fastcall MsgPackSerializer::Float32(MsgPackSerializer *this, const char *key, float value)
{
  return ?Float32@MsgPackSerializer@@QEAA_NPEBDM@Z(this, key, value);
}

/*
==============
MsgPackSerializer::BeginMap
==============
*/

bool __fastcall MsgPackSerializer::BeginMap(MsgPackSerializer *this)
{
  return ?BeginMap@MsgPackSerializer@@QEAA_NXZ(this);
}

/*
==============
operator++
==============
*/

AssetRegion *__fastcall operator++(AssetRegion *s)
{
  return ??E@YAAEAW4AssetRegion@@AEAW40@@Z(s);
}

/*
==============
MsgPackSerializer::UInt
==============
*/

bool __fastcall MsgPackSerializer::UInt(MsgPackSerializer *this, unsigned __int64 value)
{
  return ?UInt@MsgPackSerializer@@QEAA_N_K@Z(this, value);
}

/*
==============
MsgPack::ToArray
==============
*/

MsgPack *__fastcall MsgPack::ToArray(MsgPack *this, MsgPack *result)
{
  return ?ToArray@MsgPack@@QEBA?AV1@XZ(this, result);
}

/*
==============
MsgPackSerializer::Float32
==============
*/

bool __fastcall MsgPackSerializer::Float32(MsgPackSerializer *this, __int64 key, float value)
{
  return ?Float32@MsgPackSerializer@@QEAA_N_JM@Z(this, key, value);
}

/*
==============
MsgPack::ToFloat
==============
*/

long double __fastcall MsgPack::ToFloat(MsgPack *this, long double defaultValue)
{
  return ?ToFloat@MsgPack@@QEBANN@Z(this, defaultValue);
}

/*
==============
operator==
==============
*/

bool __fastcall operator==(const hkStringBuf *lhs, const hkStringBuf *rhs)
{
  return ??8@YA_NAEBVhkStringBuf@@0@Z(lhs, rhs);
}

/*
==============
MsgPackSerializer::Bytes
==============
*/

bool __fastcall MsgPackSerializer::Bytes(MsgPackSerializer *this, const void *value, unsigned __int64 valueSize)
{
  return ?Bytes@MsgPackSerializer@@QEAA_NPEBX_K@Z(this, value, valueSize);
}

/*
==============
MsgPackSerializer::Bytes
==============
*/

bool __fastcall MsgPackSerializer::Bytes(MsgPackSerializer *this, const char *key, const void *value, unsigned __int64 valueSize)
{
  return ?Bytes@MsgPackSerializer@@QEAA_NPEBDPEBX_K@Z(this, key, value, valueSize);
}

/*
==============
MsgPackSerializer::Int
==============
*/

bool __fastcall MsgPackSerializer::Int(MsgPackSerializer *this, const char *key, __int64 value)
{
  return ?Int@MsgPackSerializer@@QEAA_NPEBD_J@Z(this, key, value);
}

/*
==============
MsgPackSerializer::Float64
==============
*/

bool __fastcall MsgPackSerializer::Float64(MsgPackSerializer *this, __int64 key, long double value)
{
  return ?Float64@MsgPackSerializer@@QEAA_N_JN@Z(this, key, value);
}

/*
==============
MsgPackSerializer::Key
==============
*/

unsigned __int8 *__fastcall MsgPackSerializer::Key(MsgPackSerializer *this)
{
  return ?Key@MsgPackSerializer@@AEAAPEAEXZ(this);
}

/*
==============
MsgPack::MsgPack
==============
*/

void __fastcall MsgPack::MsgPack(MsgPack *this, void *buffer)
{
  ??0MsgPack@@QEAA@PEAX@Z(this, buffer);
}

/*
==============
MsgPack::GetInt
==============
*/

bool __fastcall MsgPack::GetInt(MsgPack *this, __int64 *value)
{
  return ?GetInt@MsgPack@@QEBA_NPEA_J@Z(this, value);
}

/*
==============
MsgPackSerializer::EndArray
==============
*/

bool __fastcall MsgPackSerializer::EndArray(MsgPackSerializer *this)
{
  return ?EndArray@MsgPackSerializer@@QEAA_NXZ(this);
}

/*
==============
MsgPackSerializer::Float64
==============
*/

bool __fastcall MsgPackSerializer::Float64(MsgPackSerializer *this, long double value)
{
  return ?Float64@MsgPackSerializer@@QEAA_NN@Z(this, value);
}

/*
==============
MsgPackSerializer::Bool
==============
*/

bool __fastcall MsgPackSerializer::Bool(MsgPackSerializer *this, bool value)
{
  return ?Bool@MsgPackSerializer@@QEAA_N_N@Z(this, value);
}

/*
==============
MsgPackSerializer::BeginArray
==============
*/

bool __fastcall MsgPackSerializer::BeginArray(MsgPackSerializer *this, const char *key)
{
  return ?BeginArray@MsgPackSerializer@@QEAA_NPEBD@Z(this, key);
}

/*
==============
operator==
==============
*/

bool __fastcall operator==(const char *const s, const bdString *str)
{
  return ??8@YA_NQEBDAEBVbdString@@@Z(s, str);
}

/*
==============
MsgPackSerializer::BeginArray
==============
*/

bool __fastcall MsgPackSerializer::BeginArray(MsgPackSerializer *this)
{
  return ?BeginArray@MsgPackSerializer@@QEAA_NXZ(this);
}

/*
==============
MsgPack::begin
==============
*/

MsgPack *__fastcall MsgPack::begin(MsgPack *this, MsgPack *result)
{
  return ?begin@MsgPack@@QEBA?AV1@XZ(this, result);
}

/*
==============
MsgPackSerializer::Float32
==============
*/

bool __fastcall MsgPackSerializer::Float32(MsgPackSerializer *this, float value)
{
  return ?Float32@MsgPackSerializer@@QEAA_NM@Z(this, value);
}

/*
==============
operator++
==============
*/
AssetRegion *operator++(AssetRegion *s)
{
  if ( ++*s > End && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\regions\\regions_interface.cpp", 25, ASSERT_TYPE_ASSERT, "(s <= AssetRegion::End)", (const char *)&queryFormat, "s <= AssetRegion::End") )
    __debugbreak();
  return s;
}

/*
==============
GetArray
==============
*/
__int64 GetArray(scrContext_t *scrContext, unsigned int id)
{
  __int64 v2; 
  ChildVariableValue *v4; 
  const char *m_scriptPos; 
  ObjectVariableValue *v6; 
  unsigned int index; 

  v2 = id;
  if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5837, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  v4 = &scrContext->m_varGlob.childVariableValue[v2];
  if ( (*(_BYTE *)&v4->tn & 0x3F) == 0 )
  {
    *(_WORD *)&v4->tn &= 0xFFC1u;
    *(_WORD *)&v4->tn |= 1u;
    m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
    if ( !m_scriptPos )
      scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)"<script array variable>";
    v6 = AllocVariable(scrContext, &index);
    v6->w.type = 24;
    v6->u.o.refCount = 0;
    v6->u.f.next = 0;
    LODWORD(v6) = index;
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
    v4->u.f.prev = (unsigned int)v6;
  }
  if ( (*(_BYTE *)&v4->tn & 0x3F) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.cpp", 5846, ASSERT_TYPE_ASSERT, "( entryValue->GetType() == VAR_POINTER )", (const char *)&queryFormat, "entryValue->GetType() == VAR_POINTER") )
    __debugbreak();
  return v4->u.f.prev;
}

/*
==============
operator==
==============
*/
bool operator==(const hkStringBuf *lhs, const hkStringBuf *rhs)
{
  int v2; 

  v2 = lhs->m_string.m_size - 1;
  return v2 == rhs->m_string.m_size - 1 && hkString::memCmp(lhs->m_string.m_data, rhs->m_string.m_data, v2) == 0;
}

/*
==============
operator==
==============
*/
bool operator==(const hkPropertyRegistry::Key *lhs, const hkPropertyRegistry::Key *rhs)
{
  const char *name; 
  const char *v5; 
  hkStringView s1; 
  hkStringView v8; 

  name = rhs->name;
  s1.m_begin = name;
  s1.m_end = NULL;
  if ( name )
    s1.m_end = &name[hkString::strLen(name)];
  v5 = lhs->name;
  v8.m_begin = v5;
  v8.m_end = NULL;
  if ( v5 )
    v8.m_end = &v5[hkString::strLen(v5)];
  return !hkStringView::compare(&v8, &s1) && lhs->typeCode == rhs->typeCode;
}

/*
==============
operator==
==============
*/
bool operator==(const char *const s, const bdString *str)
{
  char *m_string; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  m_string = str->m_string;
  v3 = s - str->m_string;
  do
  {
    v4 = (unsigned __int8)m_string[v3];
    v5 = (unsigned __int8)*m_string - v4;
    if ( v5 )
      break;
    ++m_string;
  }
  while ( v4 );
  return v5 == 0;
}

/*
==============
operator!=
==============
*/
bool operator!=(const char *const s, const bdString *str)
{
  char *m_string; 
  signed __int64 v3; 
  int v4; 
  int v5; 

  m_string = str->m_string;
  v3 = s - str->m_string;
  do
  {
    v4 = (unsigned __int8)m_string[v3];
    v5 = (unsigned __int8)*m_string - v4;
    if ( v5 )
      break;
    ++m_string;
  }
  while ( v4 );
  return v5 != 0;
}

/*
==============
MsgPack::MsgPack
==============
*/
void MsgPack::MsgPack(MsgPack *this, void *buffer)
{
  this->m_value = (const unsigned __int8 *)buffer;
  this->m_key = NULL;
  this->m_count = 0i64;
}

/*
==============
MsgPack::MsgPack
==============
*/
void MsgPack::MsgPack(MsgPack *this)
{
  this->m_key = NULL;
  this->m_value = NULL;
  this->m_count = 0i64;
}

/*
==============
MsgPackSerializer::MsgPackSerializer
==============
*/
void MsgPackSerializer::MsgPackSerializer(MsgPackSerializer *this, void *output, unsigned __int64 outputSize)
{
  memset_0(this->m_parents, 0, sizeof(this->m_parents));
  this->m_buffer = (unsigned __int8 *)output;
  this->m_end = (unsigned __int8 *)output + outputSize;
  this->m_pos = (unsigned __int8 *)output;
  this->m_parentCount = 0;
}

/*
==============
MsgPack::operator==
==============
*/
bool MsgPack::operator==(MsgPack *this, const MsgPack *rhs)
{
  return this->m_key == rhs->m_key && this->m_value == rhs->m_value && this->m_count == rhs->m_count;
}

/*
==============
MsgPack::operator!=
==============
*/
bool MsgPack::operator!=(MsgPack *this, const MsgPack *rhs)
{
  return this->m_key != rhs->m_key || this->m_value != rhs->m_value || this->m_count != rhs->m_count;
}

/*
==============
MsgPack::operator[]
==============
*/
const MsgPack *MsgPack::operator[](MsgPack *this, const MsgPack *result, const char *key)
{
  const unsigned __int8 *m_value; 
  unsigned __int64 m_count; 
  const unsigned __int8 *m_key; 
  const unsigned __int8 *v9; 
  const unsigned __int8 *v10; 
  const unsigned __int8 *v11; 
  MsgPack resulta; 
  char value[128]; 

  result->m_key = NULL;
  result->m_value = NULL;
  result->m_count = 0i64;
  m_value = this->m_value;
  if ( !m_value || typemap[*m_value] != MSGPACK_MAP )
    return result;
  MsgPack::begin(this, &resulta);
  m_count = resulta.m_count;
LABEL_4:
  m_key = resulta.m_key;
  v9 = resulta.m_value;
  while ( m_key || v9 || m_count )
  {
    if ( MsgPack_DecodeString(m_key, value, 0x80ui64) && !strcmp(value, key) )
    {
      v11 = resulta.m_value;
      *(_OWORD *)&result->m_count = *(_OWORD *)&resulta.m_count;
      result->m_value = v11;
      return result;
    }
    resulta.m_count = --m_count;
    if ( !m_count )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&resulta.m_key = _XMM0;
      goto LABEL_4;
    }
    v10 = MsgPack_Skip(v9);
    if ( m_key )
    {
      resulta.m_key = v10;
      m_key = v10;
      v10 = MsgPack_Skip(v10);
    }
    v9 = v10;
    resulta.m_value = v10;
  }
  return result;
}

/*
==============
MsgPack::operator[]
==============
*/
const MsgPack *MsgPack::operator[](MsgPack *this, const MsgPack *result, __int64 key)
{
  const unsigned __int8 *m_value; 
  unsigned __int64 m_count; 
  const unsigned __int8 *m_key; 
  const unsigned __int8 *v9; 
  const unsigned __int8 *v10; 
  const unsigned __int8 *v11; 
  const unsigned __int8 *v12; 
  MsgPack resulta; 
  __int64 value; 

  result->m_key = NULL;
  result->m_value = NULL;
  result->m_count = 0i64;
  m_value = this->m_value;
  if ( !m_value || typemap[*m_value] != MSGPACK_MAP )
    return result;
  MsgPack::begin(this, &resulta);
  m_count = resulta.m_count;
LABEL_4:
  m_key = resulta.m_key;
  v9 = resulta.m_value;
  while ( m_key || v9 || m_count )
  {
    if ( MsgPack_DecodeInt(m_key, &value) && value == key )
    {
      v12 = resulta.m_value;
      *(_OWORD *)&result->m_count = *(_OWORD *)&resulta.m_count;
      result->m_value = v12;
      return result;
    }
    resulta.m_count = --m_count;
    if ( !m_count )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&resulta.m_key = _XMM0;
      goto LABEL_4;
    }
    v11 = MsgPack_Skip(v10);
    if ( m_key )
    {
      resulta.m_key = v11;
      v11 = MsgPack_Skip(v11);
    }
    v9 = v11;
    resulta.m_value = v11;
  }
  return result;
}

/*
==============
MsgPack::operator*
==============
*/
MsgPack *MsgPack::operator*(MsgPack *this)
{
  return this;
}

/*
==============
MsgPack::operator++
==============
*/
MsgPack *MsgPack::operator++(MsgPack *this, MsgPack *result)
{
  bool v2; 
  MsgPack *v3; 
  MsgPack *v4; 
  const unsigned __int8 *v5; 
  double v6; 

  v2 = this->m_count-- == 1;
  v3 = result;
  v4 = this;
  if ( v2 )
  {
    this->m_key = NULL;
    this->m_value = NULL;
  }
  else
  {
    v5 = MsgPack_Skip(this->m_value);
    if ( v4->m_key )
    {
      v4->m_key = v5;
      v5 = MsgPack_Skip(v5);
    }
    v4->m_value = v5;
  }
  v6 = *(double *)&v4->m_value;
  *(_OWORD *)&v3->m_count = *(_OWORD *)&v4->m_count;
  *(double *)&v3->m_value = v6;
  return v3;
}

/*
==============
MsgPackSerializer::BeginArray
==============
*/
bool MsgPackSerializer::BeginArray(MsgPackSerializer *this, const char *key)
{
  __int64 m_parentCount; 
  unsigned __int8 *v4; 
  __int64 v5; 
  unsigned __int8 *v6; 
  __int64 v7; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v9; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v4 = NULL;
  if ( key && (v5 = this->m_parentCount, (int)v5 > 0) && *((_DWORD *)&this->m_buffer + 6 * v5) == 2 )
    v6 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v6 = NULL;
  v7 = this->m_parentCount;
  this->m_pos = v6;
  this->m_parents[v7].offset = v6;
  this->m_parents[this->m_parentCount].childCount = 0i64;
  this->m_parents[this->m_parentCount++].type = PARENT_ARRAY;
  m_pos = this->m_pos;
  if ( !m_pos || this->m_end == m_pos )
  {
    v9 = NULL;
  }
  else
  {
    *m_pos = -1;
    v9 = m_pos + 1;
  }
  if ( v9 && (unsigned __int8 *)(this->m_end - v9) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)v9 = -16843010;
    v4 = v9 + 4;
  }
  this->m_pos = v4;
  return v4 != NULL;
}

/*
==============
MsgPackSerializer::BeginArray
==============
*/
bool MsgPackSerializer::BeginArray(MsgPackSerializer *this)
{
  __int64 m_parentCount; 
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v5; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
  {
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
    LODWORD(m_parentCount) = this->m_parentCount;
  }
  v3 = NULL;
  this->m_parents[(int)m_parentCount].offset = this->m_pos;
  this->m_parents[this->m_parentCount].childCount = 0i64;
  this->m_parents[this->m_parentCount++].type = PARENT_ARRAY;
  m_pos = this->m_pos;
  if ( !m_pos || this->m_end == m_pos )
  {
    v5 = NULL;
  }
  else
  {
    *m_pos = -1;
    v5 = m_pos + 1;
  }
  if ( v5 && (unsigned __int8 *)(this->m_end - v5) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)v5 = -16843010;
    v3 = v5 + 4;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
MsgPackSerializer::BeginArray
==============
*/
bool MsgPackSerializer::BeginArray(MsgPackSerializer *this, __int64 key)
{
  __int64 m_parentCount; 
  MsgPackSerializer *v3; 
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  __int64 v6; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v8; 

  m_parentCount = this->m_parentCount;
  v3 = this;
  if ( (int)m_parentCount > 0 )
  {
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
    LODWORD(m_parentCount) = this->m_parentCount;
  }
  v4 = NULL;
  if ( (int)m_parentCount > 0 && *((_DWORD *)&this->m_buffer + 6 * (int)m_parentCount) == 2 )
    v5 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v5 = NULL;
  v6 = v3->m_parentCount;
  v3->m_pos = v5;
  v3->m_parents[v6].offset = v5;
  v3->m_parents[v3->m_parentCount].childCount = (unsigned __int64)v4;
  v3->m_parents[v3->m_parentCount++].type = PARENT_ARRAY;
  m_pos = v3->m_pos;
  if ( !m_pos || v3->m_end == m_pos )
  {
    v8 = v4;
  }
  else
  {
    *m_pos = -1;
    v8 = m_pos + 1;
  }
  if ( v8 && (unsigned __int8 *)(v3->m_end - v8) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)v8 = -16843010;
    v4 = v8 + 4;
  }
  v3->m_pos = v4;
  return v4 != NULL;
}

/*
==============
MsgPackSerializer::BeginMap
==============
*/
bool MsgPackSerializer::BeginMap(MsgPackSerializer *this, const char *key)
{
  __int64 m_parentCount; 
  unsigned __int8 *v4; 
  __int64 v5; 
  unsigned __int8 *v6; 
  __int64 v7; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v9; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v4 = NULL;
  if ( key && (v5 = this->m_parentCount, (int)v5 > 0) && *((_DWORD *)&this->m_buffer + 6 * v5) == 2 )
    v6 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v6 = NULL;
  v7 = this->m_parentCount;
  this->m_pos = v6;
  this->m_parents[v7].offset = v6;
  this->m_parents[this->m_parentCount].childCount = 0i64;
  this->m_parents[this->m_parentCount++].type = PARENT_MAP;
  m_pos = this->m_pos;
  if ( !m_pos || this->m_end == m_pos )
  {
    v9 = NULL;
  }
  else
  {
    *m_pos = -1;
    v9 = m_pos + 1;
  }
  if ( v9 && (unsigned __int8 *)(this->m_end - v9) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)v9 = -16843010;
    v4 = v9 + 4;
  }
  this->m_pos = v4;
  return v4 != NULL;
}

/*
==============
MsgPackSerializer::BeginMap
==============
*/
bool MsgPackSerializer::BeginMap(MsgPackSerializer *this)
{
  __int64 m_parentCount; 
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v5; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
  {
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
    LODWORD(m_parentCount) = this->m_parentCount;
  }
  v3 = NULL;
  this->m_parents[(int)m_parentCount].offset = this->m_pos;
  this->m_parents[this->m_parentCount].childCount = 0i64;
  this->m_parents[this->m_parentCount++].type = PARENT_MAP;
  m_pos = this->m_pos;
  if ( !m_pos || this->m_end == m_pos )
  {
    v5 = NULL;
  }
  else
  {
    *m_pos = -1;
    v5 = m_pos + 1;
  }
  if ( v5 && (unsigned __int8 *)(this->m_end - v5) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)v5 = -16843010;
    v3 = v5 + 4;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
MsgPackSerializer::BeginMap
==============
*/
bool MsgPackSerializer::BeginMap(MsgPackSerializer *this, __int64 key)
{
  __int64 m_parentCount; 
  MsgPackSerializer *v3; 
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  __int64 v6; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v8; 

  m_parentCount = this->m_parentCount;
  v3 = this;
  if ( (int)m_parentCount > 0 )
  {
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
    LODWORD(m_parentCount) = this->m_parentCount;
  }
  v4 = NULL;
  if ( (int)m_parentCount > 0 && *((_DWORD *)&this->m_buffer + 6 * (int)m_parentCount) == 2 )
    v5 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v5 = NULL;
  v6 = v3->m_parentCount;
  v3->m_pos = v5;
  v3->m_parents[v6].offset = v5;
  v3->m_parents[v3->m_parentCount].childCount = (unsigned __int64)v4;
  v3->m_parents[v3->m_parentCount++].type = PARENT_MAP;
  m_pos = v3->m_pos;
  if ( !m_pos || v3->m_end == m_pos )
  {
    v8 = v4;
  }
  else
  {
    *m_pos = -1;
    v8 = m_pos + 1;
  }
  if ( v8 && (unsigned __int8 *)(v3->m_end - v8) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)v8 = -16843010;
    v4 = v8 + 4;
  }
  v3->m_pos = v4;
  return v4 != NULL;
}

/*
==============
MsgPackSerializer::Bool
==============
*/
bool MsgPackSerializer::Bool(MsgPackSerializer *this, const char *key, bool value)
{
  __int64 m_parentCount; 
  unsigned __int8 *v6; 
  __int64 v7; 
  unsigned __int8 *v8; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v6 = NULL;
  if ( key && (v7 = this->m_parentCount, (int)v7 > 0) && *((_DWORD *)&this->m_buffer + 6 * v7) == 2 )
    v8 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v8 = NULL;
  if ( v8 && this->m_end != v8 )
  {
    v6 = v8 + 1;
    *v8 = value - 62;
  }
  this->m_pos = v6;
  return v6 != NULL;
}

/*
==============
MsgPackSerializer::Bool
==============
*/
bool MsgPackSerializer::Bool(MsgPackSerializer *this, __int64 key, bool value)
{
  __int64 m_parentCount; 
  MsgPackSerializer *v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 

  m_parentCount = this->m_parentCount;
  v5 = this;
  if ( (int)m_parentCount > 0 )
  {
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
    LODWORD(m_parentCount) = this->m_parentCount;
  }
  v6 = NULL;
  if ( (int)m_parentCount > 0 && *((_DWORD *)&this->m_buffer + 6 * (int)m_parentCount) == 2 )
    v7 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  if ( v7 && v5->m_end != v7 )
  {
    v6 = v7 + 1;
    *v7 = value - 62;
  }
  v5->m_pos = v6;
  return v6 != NULL;
}

/*
==============
MsgPackSerializer::Bool
==============
*/
bool MsgPackSerializer::Bool(MsgPackSerializer *this, bool value)
{
  __int64 m_parentCount; 
  unsigned __int8 *m_pos; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  m_pos = this->m_pos;
  if ( !m_pos || this->m_end == m_pos )
  {
    this->m_pos = NULL;
    return 0;
  }
  else
  {
    *m_pos = value - 62;
    this->m_pos = m_pos + 1;
    return m_pos + 1 != NULL;
  }
}

/*
==============
MsgPackSerializer::Bytes
==============
*/
bool MsgPackSerializer::Bytes(MsgPackSerializer *this, const char *key, const void *value, unsigned __int64 valueSize)
{
  __int64 m_parentCount; 
  __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  if ( key && (v8 = this->m_parentCount, (int)v8 > 0) && *((_DWORD *)&this->m_buffer + 6 * v8) == 2 )
    v9 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v9 = NULL;
  this->m_pos = v9;
  v10 = MsgPack_EncodeBytes(v9, this->m_end - v9, value, valueSize);
  this->m_pos = v10;
  return v10 != NULL;
}

/*
==============
MsgPackSerializer::Bytes
==============
*/
bool MsgPackSerializer::Bytes(MsgPackSerializer *this, const void *value, unsigned __int64 valueSize)
{
  __int64 m_parentCount; 
  unsigned __int8 *v5; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v5 = MsgPack_EncodeBytes(this->m_pos, this->m_end - this->m_pos, value, valueSize);
  this->m_pos = v5;
  return v5 != NULL;
}

/*
==============
MsgPackSerializer::Bytes
==============
*/
bool MsgPackSerializer::Bytes(MsgPackSerializer *this, __int64 key, const void *value, unsigned __int64 valueSize)
{
  __int64 m_parentCount; 
  unsigned __int64 v6; 
  int v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 

  m_parentCount = this->m_parentCount;
  v6 = valueSize;
  if ( (int)m_parentCount > 0 && (++*((_QWORD *)&this->m_pos + 3 * m_parentCount), v8 = this->m_parentCount, v8 > 0) && *((_DWORD *)&this->m_buffer + 6 * v8) == 2 )
    v9 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v9 = NULL;
  v10 = (unsigned __int8 *)(this->m_end - v9);
  this->m_pos = v9;
  v11 = MsgPack_EncodeBytes(v9, (unsigned __int64)v10, value, v6);
  this->m_pos = v11;
  return v11 != NULL;
}

/*
==============
MsgPackSerializer::EndArray
==============
*/
bool MsgPackSerializer::EndArray(MsgPackSerializer *this)
{
  __int64 m_parentCount; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  _BYTE *v6; 
  unsigned __int64 v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  const void *v10; 
  _BYTE *v11; 
  unsigned __int8 *v12; 
  _BYTE *v14; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 && (v3 = m_parentCount - 1, v4 = this->m_parentCount, *((_DWORD *)&this->m_buffer + 6 * m_parentCount) == 1) )
  {
    v5 = 3 * v4;
    this->m_parentCount = v3;
    v6 = (_BYTE *)*((_QWORD *)&this->m_end + 3 * v4);
    if ( v6 )
    {
      v7 = *((_QWORD *)&this->m_pos + v5);
      if ( v7 <= 0xF )
      {
        *v6 = v7 & 0xF | 0x90;
        v8 = v6 + 1;
        v9 = (unsigned __int8 *)(this->m_pos - v8 - 4);
        v10 = v8 + 4;
LABEL_11:
        v12 = MsgPack_Move(v8, this->m_end - v8, v10, (unsigned __int64)v9);
        this->m_pos = v12;
        return v12 != NULL;
      }
      if ( v7 <= 0xFFFF )
      {
        *v6 = -36;
        v11 = v6 + 1;
        if ( v11 )
        {
          *v11 = BYTE1(v7);
          v11[1] = v7;
          v8 = v11 + 2;
        }
        else
        {
          v8 = NULL;
        }
        v10 = v8 + 2;
        v9 = (unsigned __int8 *)(this->m_pos - v8 - 2);
        goto LABEL_11;
      }
      if ( v7 <= 0xFFFFFFFF )
      {
        *v6 = -35;
        v14 = v6 + 1;
        if ( v14 )
        {
          *v14 = BYTE3(v7);
          v14[1] = BYTE2(v7);
          v14[2] = BYTE1(v7);
          v14[3] = v7;
          return this->m_pos != NULL;
        }
      }
    }
  }
  else
  {
    this->m_pos = NULL;
  }
  return this->m_pos != NULL;
}

/*
==============
MsgPackSerializer::EndMap
==============
*/
bool MsgPackSerializer::EndMap(MsgPackSerializer *this)
{
  __int64 m_parentCount; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  _BYTE *v7; 
  _BYTE *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  _BYTE *v11; 
  unsigned __int8 *v12; 
  _BYTE *v13; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount <= 0 || (v3 = m_parentCount - 1, v4 = this->m_parentCount, *((_DWORD *)&this->m_buffer + 6 * m_parentCount) != 2) )
  {
    v10 = NULL;
LABEL_18:
    this->m_pos = v10;
    return this->m_pos != NULL;
  }
  v5 = 3 * v4;
  this->m_parentCount = v3;
  v6 = *((_QWORD *)&this->m_pos + 3 * v4);
  v7 = (_BYTE *)*((_QWORD *)&this->m_end + v5);
  if ( v6 <= 0xF )
  {
    if ( v7 && (*v7 = v6 & 0xF | 0x80, (v8 = v7 + 1) != NULL) && (v9 = (unsigned __int8 *)(this->m_pos - v8 - 4), (unsigned __int8 *)(this->m_end - v8) >= v9) )
    {
      memmove_0(v8, v8 + 4, this->m_pos - v8 - 4);
      v10 = &v8[(_QWORD)v9];
    }
    else
    {
      v10 = NULL;
    }
    goto LABEL_18;
  }
  if ( v6 <= 0xFFFF )
  {
    *v7 = -34;
    v11 = v7 + 1;
    if ( v11 )
    {
      *v11 = BYTE1(v6);
      v12 = v11 + 2;
      v11[1] = v6;
    }
    else
    {
      v12 = NULL;
    }
    v10 = MsgPack_Move(v12, this->m_end - v12, v12 + 2, this->m_pos - v12 - 2);
    goto LABEL_18;
  }
  if ( v6 <= 0xFFFFFFFF )
  {
    *v7 = -33;
    v13 = v7 + 1;
    if ( v13 )
    {
      *v13 = BYTE3(v6);
      v13[1] = BYTE2(v6);
      v13[2] = BYTE1(v6);
      v13[3] = v6;
      return this->m_pos != NULL;
    }
  }
  return this->m_pos != NULL;
}

/*
==============
MsgPackSerializer::Float32
==============
*/
bool MsgPackSerializer::Float32(MsgPackSerializer *this, float value)
{
  __int64 m_parentCount; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *m_end; 
  _BYTE *v6; 
  unsigned __int8 *v7; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  m_pos = this->m_pos;
  m_end = this->m_end;
  if ( m_pos && this->m_end != m_pos && (*m_pos = -54, (v6 = m_pos + 1) != NULL) && (unsigned __int64)(m_end - v6) >= 4 )
  {
    *v6 = HIBYTE(value);
    v6[1] = BYTE2(value);
    v6[2] = BYTE1(value);
    v6[3] = LOBYTE(value);
    v7 = v6 + 4;
    this->m_pos = v7;
    return v7 != NULL;
  }
  else
  {
    this->m_pos = NULL;
    return 0;
  }
}

/*
==============
MsgPackSerializer::Float32
==============
*/
bool MsgPackSerializer::Float32(MsgPackSerializer *this, const char *key, float value)
{
  __int64 m_parentCount; 
  unsigned __int8 *v5; 
  __int64 v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *m_end; 
  _BYTE *v9; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v5 = NULL;
  if ( key && (v6 = this->m_parentCount, (int)v6 > 0) && *((_DWORD *)&this->m_buffer + 6 * v6) == 2 )
    v7 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  m_end = this->m_end;
  if ( v7 )
  {
    if ( this->m_end != v7 )
    {
      v9 = v7 + 1;
      *v7 = -54;
      if ( v7 != (unsigned __int8 *)-1i64 && (unsigned __int64)(m_end - v9) >= 4 )
      {
        v5 = v7 + 5;
        *v9 = HIBYTE(value);
        v7[2] = BYTE2(value);
        v7[3] = BYTE1(value);
        v7[4] = LOBYTE(value);
      }
    }
  }
  this->m_pos = v5;
  return v5 != NULL;
}

/*
==============
MsgPackSerializer::Float32
==============
*/
bool MsgPackSerializer::Float32(MsgPackSerializer *this, __int64 key, float value)
{
  __int64 m_parentCount; 
  MsgPackSerializer *v4; 
  unsigned __int8 *v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *m_end; 
  _BYTE *v8; 

  m_parentCount = this->m_parentCount;
  v4 = this;
  if ( (int)m_parentCount > 0 )
  {
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
    LODWORD(m_parentCount) = this->m_parentCount;
  }
  v5 = NULL;
  if ( (int)m_parentCount > 0 && *((_DWORD *)&this->m_buffer + 6 * (int)m_parentCount) == 2 )
    v6 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v6 = NULL;
  m_end = v4->m_end;
  if ( v6 )
  {
    if ( v4->m_end != v6 )
    {
      v8 = v6 + 1;
      *v6 = -54;
      if ( v6 != (unsigned __int8 *)-1i64 && (unsigned __int64)(m_end - v8) >= 4 )
      {
        v5 = v6 + 5;
        *v8 = HIBYTE(value);
        v6[2] = BYTE2(value);
        v6[3] = BYTE1(value);
        v6[4] = LOBYTE(value);
      }
    }
  }
  v4->m_pos = v5;
  return v5 != NULL;
}

/*
==============
MsgPackSerializer::Float64
==============
*/
bool MsgPackSerializer::Float64(MsgPackSerializer *this, long double value)
{
  __int64 m_parentCount; 
  unsigned __int8 *v3; 
  __int64 v4; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v3 = MsgPack_EncodeFloat64(this->m_pos, this->m_end - this->m_pos, value);
  *(_QWORD *)(v4 + 16) = v3;
  return v3 != NULL;
}

/*
==============
MsgPackSerializer::Float64
==============
*/
bool MsgPackSerializer::Float64(MsgPackSerializer *this, const char *key, long double value)
{
  __int64 m_parentCount; 
  __int64 v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  if ( key && (v5 = this->m_parentCount, (int)v5 > 0) && *((_DWORD *)&this->m_buffer + 6 * v5) == 2 )
    v6 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v6 = NULL;
  v7 = MsgPack_EncodeFloat64(v6, this->m_end - v6, value);
  this->m_pos = v7;
  return v7 != NULL;
}

/*
==============
MsgPackSerializer::Float64
==============
*/
bool MsgPackSerializer::Float64(MsgPackSerializer *this, __int64 key, long double value)
{
  __int64 m_parentCount; 
  MsgPackSerializer *v4; 
  int v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  __int64 v8; 

  m_parentCount = this->m_parentCount;
  v4 = this;
  if ( (int)m_parentCount > 0 && (++*((_QWORD *)&this->m_pos + 3 * m_parentCount), v5 = this->m_parentCount, v5 > 0) && *((_DWORD *)&this->m_buffer + 6 * v5) == 2 )
    v6 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v6 = NULL;
  v7 = MsgPack_EncodeFloat64(v6, v4->m_end - v6, value);
  *(_QWORD *)(v8 + 16) = v7;
  return v7 != NULL;
}

/*
==============
MsgPack::GetArray
==============
*/
char MsgPack::GetArray(MsgPack *this, MsgPack *value)
{
  const unsigned __int8 *m_value; 

  m_value = this->m_value;
  if ( !m_value || typemap[*m_value] != MSGPACK_ARRAY )
    return 0;
  *value = *this;
  return 1;
}

/*
==============
MsgPack::GetBool
==============
*/
bool MsgPack::GetBool(MsgPack *this, bool *value)
{
  unsigned __int8 v2; 
  bool result; 

  v2 = *this->m_value;
  if ( v2 == 0xC2 )
  {
    *value = 0;
    return 1;
  }
  else if ( v2 == 0xC3 )
  {
    result = 1;
    *value = 1;
  }
  else
  {
    return 0;
  }
  return result;
}

/*
==============
MsgPack::GetBytes
==============
*/
__int64 MsgPack::GetBytes(MsgPack *this, void *value, int size)
{
  int v4; 
  const unsigned __int8 *m_value; 
  unsigned __int8 v6; 
  unsigned __int8 *v7; 
  int v8; 
  int v9; 

  v4 = -1;
  m_value = this->m_value;
  v6 = *m_value;
  v7 = (unsigned __int8 *)(m_value + 1);
  switch ( v6 )
  {
    case 0xC4:
      v4 = *v7++;
      break;
    case 0xC5:
      v8 = *v7;
      v9 = v7[1];
      v7 += 2;
      v4 = v9 | (v8 << 8);
      break;
    case 0xC6:
      v4 = v7[3] | ((v7[2] | ((v7[1] | (*v7 << 8)) << 8)) << 8);
      v7 += 4;
      break;
  }
  if ( v4 <= size )
    memcpy_0(value, v7, v4);
  return (unsigned int)v4;
}

/*
==============
MsgPack::GetChild
==============
*/
char MsgPack::GetChild(MsgPack *this, const char *key, MsgPack *child)
{
  const unsigned __int8 *m_value; 
  unsigned __int64 m_count; 
  const unsigned __int8 *m_key; 
  const unsigned __int8 *v9; 
  const unsigned __int8 *v10; 
  const unsigned __int8 *v11; 
  MsgPack result; 
  char value[128]; 

  m_value = this->m_value;
  if ( m_value && typemap[*m_value] == MSGPACK_MAP )
  {
    MsgPack::begin(this, &result);
    m_count = result.m_count;
LABEL_4:
    m_key = result.m_key;
    v9 = result.m_value;
    while ( m_key || v9 || m_count )
    {
      if ( MsgPack_DecodeString(m_key, value, 0x80ui64) && !strcmp(value, key) )
      {
        v11 = result.m_value;
        *(_OWORD *)&child->m_count = *(_OWORD *)&result.m_count;
        child->m_value = v11;
        return 1;
      }
      result.m_count = --m_count;
      if ( !m_count )
      {
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&result.m_key = _XMM0;
        goto LABEL_4;
      }
      v10 = MsgPack_Skip(v9);
      if ( m_key )
      {
        result.m_key = v10;
        m_key = v10;
        v10 = MsgPack_Skip(v10);
      }
      v9 = v10;
      result.m_value = v10;
    }
  }
  return 0;
}

/*
==============
MsgPack::GetChild
==============
*/
char MsgPack::GetChild(MsgPack *this, __int64 key, MsgPack *child)
{
  const unsigned __int8 *m_value; 
  unsigned __int64 m_count; 
  const unsigned __int8 *m_key; 
  const unsigned __int8 *v9; 
  const unsigned __int8 *v10; 
  const unsigned __int8 *v11; 
  const unsigned __int8 *v12; 
  MsgPack result; 
  __int64 value; 

  m_value = this->m_value;
  if ( m_value && typemap[*m_value] == MSGPACK_MAP )
  {
    MsgPack::begin(this, &result);
    m_count = result.m_count;
LABEL_4:
    m_key = result.m_key;
    v9 = result.m_value;
    while ( m_key || v9 || m_count )
    {
      if ( MsgPack_DecodeInt(m_key, &value) && value == key )
      {
        v12 = result.m_value;
        *(_OWORD *)&child->m_count = *(_OWORD *)&result.m_count;
        child->m_value = v12;
        return 1;
      }
      result.m_count = --m_count;
      if ( !m_count )
      {
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(_OWORD *)&result.m_key = _XMM0;
        goto LABEL_4;
      }
      v11 = MsgPack_Skip(v10);
      if ( m_key )
      {
        result.m_key = v11;
        v11 = MsgPack_Skip(v11);
      }
      v9 = v11;
      result.m_value = v11;
    }
  }
  return 0;
}

/*
==============
MsgPack::GetFloat
==============
*/
bool MsgPack::GetFloat(MsgPack *this, long double *value)
{
  const unsigned __int8 *m_value; 
  bool result; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 

  m_value = this->m_value;
  if ( *m_value == 0xCA )
  {
    result = 1;
    *value = COERCE_FLOAT(m_value[4] | ((m_value[3] | ((m_value[2] | (m_value[1] << 8)) << 8)) << 8));
  }
  else if ( *m_value == 0xCB )
  {
    *value = 0.0;
    v5 = (unsigned __int64)m_value[1] << 56;
    *(_QWORD *)value = v5;
    v6 = v5 | ((unsigned __int64)m_value[2] << 48);
    *(_QWORD *)value = v6;
    v7 = v6 | ((unsigned __int64)m_value[3] << 40);
    *(_QWORD *)value = v7;
    v8 = v7 | ((unsigned __int64)m_value[4] << 32);
    *(_QWORD *)value = v8;
    v9 = v8 | ((unsigned __int64)m_value[5] << 24);
    *(_QWORD *)value = v9;
    v10 = v9 | ((unsigned __int64)m_value[6] << 16);
    *(_QWORD *)value = v10;
    v11 = v10 | ((unsigned __int64)m_value[7] << 8);
    *(_QWORD *)value = v11;
    *(_QWORD *)value = v11 | m_value[8];
    return 1;
  }
  else
  {
    return 0;
  }
  return result;
}

/*
==============
MsgPack::GetInt
==============
*/
bool MsgPack::GetInt(MsgPack *this, __int64 *value)
{
  return MsgPack_DecodeInt(this->m_value, value);
}

/*
==============
MsgPack::GetKey
==============
*/
bool MsgPack::GetKey(MsgPack *this, char *value, unsigned __int64 size)
{
  return MsgPack_DecodeString(this->m_key, value, size);
}

/*
==============
MsgPack::GetKey
==============
*/
bool MsgPack::GetKey(MsgPack *this, __int64 *value)
{
  return MsgPack_DecodeInt(this->m_key, value);
}

/*
==============
MsgPack::GetMap
==============
*/
char MsgPack::GetMap(MsgPack *this, MsgPack *value)
{
  const unsigned __int8 *m_value; 

  m_value = this->m_value;
  if ( !m_value || typemap[*m_value] != MSGPACK_MAP )
    return 0;
  *value = *this;
  return 1;
}

/*
==============
MsgPack::GetString
==============
*/
bool MsgPack::GetString(MsgPack *this, char *value, unsigned __int64 size)
{
  return MsgPack_DecodeString(this->m_value, value, size);
}

/*
==============
MsgPack::GetUInt
==============
*/
bool MsgPack::GetUInt(MsgPack *this, unsigned __int64 *value)
{
  return MsgPack_DecodeInt(this->m_value, (__int64 *)value);
}

/*
==============
MsgPackSerializer::Int
==============
*/
bool MsgPackSerializer::Int(MsgPackSerializer *this, const char *key, __int64 value)
{
  __int64 m_parentCount; 
  __int64 v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  if ( key && (v6 = this->m_parentCount, (int)v6 > 0) && *((_DWORD *)&this->m_buffer + 6 * v6) == 2 )
    v7 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  v8 = MsgPack_EncodeInt(v7, this->m_end - v7, value);
  this->m_pos = v8;
  return v8 != NULL;
}

/*
==============
MsgPackSerializer::Int
==============
*/
bool MsgPackSerializer::Int(MsgPackSerializer *this, __int64 key, __int64 value)
{
  __int64 m_parentCount; 
  __int64 v4; 
  MsgPackSerializer *v5; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  __int64 v9; 

  m_parentCount = this->m_parentCount;
  v4 = value;
  v5 = this;
  if ( (int)m_parentCount > 0 && (++*((_QWORD *)&this->m_pos + 3 * m_parentCount), v6 = this->m_parentCount, v6 > 0) && *((_DWORD *)&this->m_buffer + 6 * v6) == 2 )
    v7 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  v8 = MsgPack_EncodeInt(v7, v5->m_end - v7, v4);
  *(_QWORD *)(v9 + 16) = v8;
  return v8 != NULL;
}

/*
==============
MsgPackSerializer::Int
==============
*/
bool MsgPackSerializer::Int(MsgPackSerializer *this, __int64 value)
{
  __int64 m_parentCount; 
  unsigned __int8 *v3; 
  __int64 v4; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v3 = MsgPack_EncodeInt(this->m_pos, this->m_end - this->m_pos, value);
  *(_QWORD *)(v4 + 16) = v3;
  return v3 != NULL;
}

/*
==============
MsgPackSerializer::Key
==============
*/
unsigned __int8 *MsgPackSerializer::Key(MsgPackSerializer *this, const char *key)
{
  __int64 m_parentCount; 
  __int64 v4; 
  unsigned __int8 *result; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  if ( key && (v4 = this->m_parentCount, (int)v4 > 0) && *((_DWORD *)&this->m_buffer + 6 * v4) == 2 )
  {
    result = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
    this->m_pos = result;
  }
  else
  {
    this->m_pos = NULL;
    return 0i64;
  }
  return result;
}

/*
==============
MsgPackSerializer::Key
==============
*/
unsigned __int8 *MsgPackSerializer::Key(MsgPackSerializer *this)
{
  __int64 m_parentCount; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  return this->m_pos;
}

/*
==============
MsgPackSerializer::Key
==============
*/
unsigned __int8 *MsgPackSerializer::Key(MsgPackSerializer *this, __int64 key)
{
  __int64 m_parentCount; 
  int v3; 
  unsigned __int8 *result; 
  __int64 v5; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 && (++*((_QWORD *)&this->m_pos + 3 * m_parentCount), v3 = this->m_parentCount, v3 > 0) && *((_DWORD *)&this->m_buffer + 6 * v3) == 2 )
  {
    result = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
    *(_QWORD *)(v5 + 16) = result;
  }
  else
  {
    this->m_pos = NULL;
    return 0i64;
  }
  return result;
}

/*
==============
MsgPack::KeyCmp
==============
*/
bool MsgPack::KeyCmp(MsgPack *this, const char *key)
{
  char value[128]; 

  return MsgPack_DecodeString(this->m_key, value, 0x80ui64) && strcmp(value, key) == 0;
}

/*
==============
MsgPack::KeyCmp
==============
*/
bool MsgPack::KeyCmp(MsgPack *this, __int64 key)
{
  __int64 v2; 
  __int64 value; 

  return MsgPack_DecodeInt(this->m_key, &value) && value == v2;
}

/*
==============
MsgPack::KeyToInt
==============
*/
__int64 MsgPack::KeyToInt(MsgPack *this)
{
  __int64 value; 

  MsgPack_DecodeInt(this->m_key, &value);
  return value;
}

/*
==============
MsgPack::KeyToString
==============
*/
const char *MsgPack::KeyToString(MsgPack *this)
{
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
MsgPack_DecodeInt
==============
*/
bool MsgPack_DecodeInt(const unsigned __int8 *p, __int64 *value)
{
  unsigned __int8 v2; 
  bool result; 

  v2 = *p;
  if ( *p < 0x80u )
  {
    result = 1;
    *value = *p & 0x7F;
    return result;
  }
  if ( v2 >= 0xE0u )
  {
    result = 1;
    *value = *p | 0xFFFFFFFFFFFFFFE0ui64;
    return result;
  }
  switch ( v2 )
  {
    case 0xCC:
      result = 1;
      *value = p[1];
      return result;
    case 0xCD:
      result = 1;
      *value = p[2] | ((unsigned __int64)p[1] << 8);
      return result;
    case 0xCE:
      result = 1;
      *value = p[4] | ((p[3] | ((p[2] | ((unsigned __int64)p[1] << 8)) << 8)) << 8);
      return result;
    case 0xCF:
      goto LABEL_19;
    case 0xD0:
      result = 1;
      *value = *((char *)p + 1);
      return result;
    case 0xD1:
      result = 1;
      *value = p[2] | (unsigned __int64)(__int16)(p[1] << 8);
      return result;
    case 0xD2:
      result = 1;
      *value = p[4] | (p[1] << 24) | ((p[3] | ((unsigned __int64)p[2] << 8)) << 8);
      return result;
  }
  if ( v2 != 0xD3 )
    return 0;
LABEL_19:
  result = 1;
  *value = p[8] | ((p[7] | ((p[6] | ((p[5] | ((p[4] | ((p[3] | ((p[2] | ((unsigned __int64)p[1] << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  return result;
}

/*
==============
MsgPack_DecodeString
==============
*/
bool MsgPack_DecodeString(const unsigned __int8 *p, char *value, unsigned __int64 size)
{
  const unsigned __int8 *v3; 
  size_t v4; 
  unsigned __int8 v5; 
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int64 v11; 
  bool result; 

  v3 = p + 1;
  v4 = 0i64;
  v5 = *p;
  if ( (unsigned __int8)(v5 + 96) <= 0x1Fu )
  {
    v4 = v5 & 0x1F;
    goto LABEL_10;
  }
  switch ( v5 )
  {
    case 0xD9:
      v4 = *v3++;
      goto LABEL_10;
    case 0xDA:
      v7 = *v3;
      v8 = v3[1];
      v3 += 2;
      break;
    case 0xDB:
      v9 = (unsigned __int8 *)(v3 + 2);
      v10 = (unsigned __int8 *)(v3 + 3);
      v11 = v3[1] | ((unsigned __int64)*v3 << 8);
      v3 += 4;
      v7 = *v9 | (v11 << 8);
      v8 = *v10;
      break;
    default:
      goto LABEL_10;
  }
  v4 = v8 | (v7 << 8);
LABEL_10:
  if ( v4 + 1 > size )
    return 0;
  memcpy_0(value, v3, v4);
  result = 1;
  value[v4] = 0;
  return result;
}

/*
==============
MsgPack_EncodeBytes
==============
*/
unsigned __int8 *MsgPack_EncodeBytes(unsigned __int8 *dest, unsigned __int64 destSize, const void *value, unsigned __int64 valueSize)
{
  const void *v5; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 

  v5 = value;
  if ( !dest )
    return 0i64;
  v8 = &dest[destSize];
  if ( valueSize <= 0xFF )
  {
    if ( destSize )
    {
      *dest = -60;
      v9 = dest + 1;
      if ( dest != (unsigned __int8 *)-1i64 && v8 != v9 )
      {
        *v9 = valueSize;
        v10 = dest + 2;
        goto LABEL_18;
      }
    }
    return 0i64;
  }
  if ( valueSize > 0xFFFF )
  {
    if ( valueSize > 0xFFFFFFFF )
      return 0i64;
    if ( destSize )
    {
      *dest = -58;
      v12 = dest + 1;
    }
    else
    {
      v12 = NULL;
    }
    v10 = MsgPack_WriteUInt32(v12, v8 - v12, valueSize);
  }
  else
  {
    if ( !destSize )
      return 0i64;
    *dest = -59;
    v11 = dest + 1;
    if ( dest == (unsigned __int8 *)-1i64 || (unsigned __int64)(v8 - v11) < 2 )
      return 0i64;
    *v11 = BYTE1(valueSize);
    dest[2] = valueSize;
    v10 = dest + 3;
  }
LABEL_18:
  if ( v10 )
  {
    memcpy_0(v10, v5, valueSize);
    return &v10[valueSize];
  }
  return v10;
}

/*
==============
MsgPack_EncodeFloat64
==============
*/
unsigned __int8 *MsgPack_EncodeFloat64(unsigned __int8 *dest, unsigned __int64 destSize, long double value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *v4; 
  unsigned __int8 *result; 

  v3 = &dest[destSize];
  if ( !dest )
    return 0i64;
  if ( !destSize )
    return 0i64;
  *dest = -53;
  v4 = dest + 1;
  if ( !v4 || (unsigned __int64)(v3 - v4) < 8 )
    return 0i64;
  *v4 = HIBYTE(value);
  v4[1] = BYTE6(value);
  v4[2] = BYTE5(value);
  v4[3] = BYTE4(value);
  v4[4] = BYTE3(value);
  v4[5] = BYTE2(value);
  v4[6] = BYTE1(value);
  result = v4 + 8;
  v4[7] = LOBYTE(value);
  return result;
}

/*
==============
MsgPack_EncodeInt
==============
*/
unsigned __int8 *MsgPack_EncodeInt(unsigned __int8 *dest, unsigned __int64 destSize, __int64 value)
{
  unsigned __int8 *v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 

  if ( value >= 0 )
    return MsgPack_EncodeUInt(dest, destSize, value);
  v5 = &dest[destSize];
  if ( value >= -32 )
  {
    if ( dest && v5 != dest )
    {
      *dest = value | 0xE0;
      return dest + 1;
    }
    return 0i64;
  }
  if ( value >= -128 )
  {
    if ( dest )
    {
      if ( v5 != dest )
      {
        *dest = -48;
        v6 = dest + 1;
        if ( v6 )
        {
          if ( v5 != v6 )
          {
            *v6 = value;
            return v6 + 1;
          }
        }
      }
    }
    return 0i64;
  }
  if ( value >= -32768 )
  {
    if ( dest )
    {
      if ( destSize )
      {
        *dest = -47;
        v7 = dest + 1;
        if ( v7 )
        {
          if ( (unsigned __int64)(v5 - v7) >= 2 )
          {
            *v7 = BYTE1(value);
            v7[1] = value;
            return v7 + 2;
          }
        }
      }
    }
    return 0i64;
  }
  if ( value < (__int64)0xFFFFFFFF80000000ui64 )
  {
    if ( dest && destSize )
    {
      *dest = -45;
      return MsgPack_WriteUInt64(dest + 1, v5 - (dest + 1), value);
    }
    else
    {
      return MsgPack_WriteUInt64(NULL, (unsigned __int64)v5, value);
    }
  }
  else if ( dest && destSize )
  {
    *dest = -46;
    return MsgPack_WriteUInt32(dest + 1, v5 - (dest + 1), value);
  }
  else
  {
    return MsgPack_WriteUInt32(NULL, (unsigned __int64)v5, value);
  }
}

/*
==============
MsgPack_EncodeString
==============
*/
unsigned __int8 *MsgPack_EncodeString(unsigned __int8 *dest, unsigned __int64 destSize, const char *value)
{
  const char *v3; 
  unsigned __int8 *v5; 
  unsigned __int64 v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 

  v3 = value;
  if ( !dest )
    return 0i64;
  v5 = &dest[destSize];
  v6 = -1i64;
  do
    ++v6;
  while ( value[v6] );
  if ( v6 > 0x1F )
  {
    if ( v6 > 0xFF )
    {
      if ( v6 > 0xFFFF )
      {
        if ( v6 > 0xFFFFFFFF )
          return 0i64;
        if ( destSize )
        {
          *dest = -37;
          v10 = dest + 1;
        }
        else
        {
          v10 = NULL;
        }
        v7 = MsgPack_WriteUInt32(v10, v5 - v10, v6);
      }
      else
      {
        if ( !destSize )
          return 0i64;
        *dest = -38;
        v9 = dest + 1;
        if ( dest == (unsigned __int8 *)-1i64 || (unsigned __int64)(v5 - v9) < 2 )
          return 0i64;
        *v9 = BYTE1(v6);
        dest[2] = v6;
        v7 = dest + 3;
      }
    }
    else
    {
      if ( v5 == dest )
        return 0i64;
      *dest = -39;
      v8 = dest + 1;
      if ( dest == (unsigned __int8 *)-1i64 || v5 == v8 )
        return 0i64;
      *v8 = v6;
      v7 = dest + 2;
    }
  }
  else
  {
    if ( v5 == dest )
      return 0i64;
    *dest = v6 & 0x1F | 0xA0;
    v7 = dest + 1;
  }
  if ( v7 && v6 < (int)v5 - (int)v7 )
  {
    memcpy_0(v7, v3, v6);
    return &v7[v6];
  }
  return 0i64;
}

/*
==============
MsgPack_EncodeUInt
==============
*/
unsigned __int8 *MsgPack_EncodeUInt(unsigned __int8 *dest, unsigned __int64 destSize, unsigned __int64 value)
{
  unsigned __int8 *v4; 
  unsigned __int8 *result; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 

  v4 = &dest[destSize];
  if ( value <= 0x7F )
  {
    if ( dest && v4 != dest )
    {
      result = dest + 1;
      *dest = value & 0x7F;
      return result;
    }
    return 0i64;
  }
  if ( value <= 0xFF )
  {
    if ( dest )
    {
      if ( v4 != dest )
      {
        *dest = -52;
        v6 = dest + 1;
        if ( v6 )
        {
          if ( v4 != v6 )
          {
            *v6 = value;
            return v6 + 1;
          }
        }
      }
    }
    return 0i64;
  }
  if ( value <= 0xFFFF )
  {
    if ( dest )
    {
      if ( destSize )
      {
        *dest = -51;
        v7 = dest + 1;
        if ( v7 )
        {
          if ( (unsigned __int64)(v4 - v7) >= 2 )
          {
            *v7 = BYTE1(value);
            result = v7 + 2;
            v7[1] = value;
            return result;
          }
        }
      }
    }
    return 0i64;
  }
  if ( value > 0xFFFFFFFF )
  {
    if ( dest && destSize )
    {
      *dest = -49;
      return MsgPack_WriteUInt64(dest + 1, v4 - (dest + 1), value);
    }
    else
    {
      return MsgPack_WriteUInt64(NULL, (unsigned __int64)v4, value);
    }
  }
  else if ( dest && destSize )
  {
    *dest = -50;
    return MsgPack_WriteUInt32(dest + 1, v4 - (dest + 1), value);
  }
  else
  {
    return MsgPack_WriteUInt32(NULL, (unsigned __int64)v4, value);
  }
}

/*
==============
MsgPack_Move
==============
*/
unsigned __int8 *MsgPack_Move(unsigned __int8 *dest, unsigned __int64 destSize, const void *src, unsigned __int64 srcSize)
{
  if ( !dest || destSize < srcSize )
    return 0i64;
  memmove_0(dest, src, srcSize);
  return &dest[srcSize];
}

/*
==============
MsgPack_Skip
==============
*/
const unsigned __int8 *MsgPack_Skip(const unsigned __int8 *p)
{
  unsigned __int8 v1; 
  const unsigned __int8 *v2; 
  __int64 v3; 
  const unsigned __int8 *v4; 
  const unsigned __int8 *result; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  const unsigned __int8 *v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  __int64 v23; 
  const unsigned __int8 *v24; 

  v1 = *p;
  v2 = p + 1;
  if ( v1 < 0x80u )
    return v2;
  if ( v1 < 0x90u )
  {
    if ( (v1 & 0xF) != 0 )
    {
      v3 = v1 & 0xF;
      do
      {
        v4 = MsgPack_Skip(v2);
        result = MsgPack_Skip(v4);
        v2 = result;
        --v3;
      }
      while ( v3 );
      return result;
    }
    return v2;
  }
  if ( v1 < 0xA0u )
  {
    if ( (v1 & 0xF) == 0 )
      return v2;
    v6 = v1 & 0xF;
    do
    {
      result = MsgPack_Skip(v2);
      v2 = result;
      --v6;
    }
    while ( v6 );
    return result;
  }
  if ( v1 < 0xC0u )
    return &v2[v1 & 0x1F];
  if ( ((v1 + 64) & 0xFC) == 0 && v1 != 0xC1 )
    return v2;
  if ( v1 == 0xC4 )
    return &v2[*v2 + 1];
  if ( v1 == 0xC5 )
    return &v2[(v2[1] | ((unsigned __int64)*v2 << 8)) + 2];
  if ( v1 == 0xC6 )
    return &v2[(v2[3] | ((v2[2] | ((v2[1] | ((unsigned __int64)*v2 << 8)) << 8)) << 8)) + 4];
  if ( v1 == 0xCA )
    return v2 + 4;
  if ( v1 == 0xCB )
    return v2 + 8;
  if ( v1 == 0xCC )
    return v2 + 1;
  if ( v1 == 0xCD )
    return v2 + 2;
  if ( v1 == 0xCE )
    return v2 + 4;
  if ( v1 == 0xCF )
    return v2 + 8;
  if ( v1 == 0xD0 )
    return v2 + 1;
  if ( v1 == 0xD1 )
    return v2 + 2;
  if ( v1 == 0xD2 )
    return v2 + 4;
  if ( v1 == 0xD3 )
    return v2 + 8;
  if ( v1 == 0xD9 )
    return &v2[*v2 + 1];
  if ( v1 == 0xDA )
    return &v2[(v2[1] | ((unsigned __int64)*v2 << 8)) + 2];
  if ( v1 == 0xDB )
    return &v2[(v2[3] | ((v2[2] | ((v2[1] | ((unsigned __int64)*v2 << 8)) << 8)) << 8)) + 4];
  if ( v1 == 0xDC )
  {
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    v9 = 0;
    v10 = v8 | (v7 << 8);
    if ( !v10 )
      return v2;
    do
    {
      result = MsgPack_Skip(v2);
      ++v9;
      v2 = result;
    }
    while ( v9 < v10 );
  }
  else if ( v1 == 0xDD )
  {
    v11 = v2[3];
    v12 = (v2[2] | ((v2[1] | (*v2 << 8)) << 8)) << 8;
    v2 += 4;
    v13 = v11 | v12;
    if ( !v13 )
      return v2;
    v14 = v13;
    do
    {
      result = MsgPack_Skip(v2);
      v2 = result;
      --v14;
    }
    while ( v14 );
  }
  else
  {
    if ( v1 != 0xDE )
    {
      if ( v1 == 0xDF )
      {
        v20 = v2[3];
        v21 = (v2[2] | ((v2[1] | (*v2 << 8)) << 8)) << 8;
        v2 += 4;
        v22 = v20 | v21;
        if ( v22 )
        {
          v23 = v22;
          do
          {
            v24 = MsgPack_Skip(v2);
            v2 = MsgPack_Skip(v24);
            --v23;
          }
          while ( v23 );
        }
      }
      return v2;
    }
    v15 = *v2;
    v16 = v2[1];
    v2 += 2;
    v17 = 0;
    v18 = v16 | (v15 << 8);
    if ( !v18 )
      return v2;
    do
    {
      v19 = MsgPack_Skip(v2);
      result = MsgPack_Skip(v19);
      ++v17;
      v2 = result;
    }
    while ( v17 < v18 );
  }
  return result;
}

/*
==============
MsgPack_WriteUInt32
==============
*/
unsigned __int8 *MsgPack_WriteUInt32(unsigned __int8 *dest, unsigned __int64 destSize, unsigned int v)
{
  unsigned __int8 *result; 

  if ( !dest || destSize < 4 )
    return 0i64;
  *dest = HIBYTE(v);
  dest[1] = BYTE2(v);
  dest[2] = BYTE1(v);
  result = dest + 4;
  dest[3] = v;
  return result;
}

/*
==============
MsgPack_WriteUInt64
==============
*/
unsigned __int8 *MsgPack_WriteUInt64(unsigned __int8 *dest, unsigned __int64 destSize, unsigned __int64 v)
{
  unsigned __int8 *result; 

  if ( !dest || destSize < 8 )
    return 0i64;
  *dest = HIBYTE(v);
  dest[1] = BYTE6(v);
  dest[2] = BYTE5(v);
  dest[3] = BYTE4(v);
  dest[4] = BYTE3(v);
  dest[5] = BYTE2(v);
  dest[6] = BYTE1(v);
  result = dest + 8;
  dest[7] = v;
  return result;
}

/*
==============
MsgPackSerializer::Null
==============
*/
bool MsgPackSerializer::Null(MsgPackSerializer *this, const char *key)
{
  __int64 m_parentCount; 
  unsigned __int8 *v4; 
  __int64 v5; 
  unsigned __int8 *v6; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v4 = NULL;
  if ( key && (v5 = this->m_parentCount, (int)v5 > 0) && *((_DWORD *)&this->m_buffer + 6 * v5) == 2 )
    v6 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v6 = NULL;
  if ( v6 && this->m_end != v6 )
  {
    *v6 = -64;
    v4 = v6 + 1;
  }
  this->m_pos = v4;
  return v4 != NULL;
}

/*
==============
MsgPackSerializer::Null
==============
*/
bool MsgPackSerializer::Null(MsgPackSerializer *this)
{
  __int64 m_parentCount; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v3; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  m_pos = this->m_pos;
  if ( !m_pos || this->m_end == m_pos )
  {
    this->m_pos = NULL;
    return 0;
  }
  else
  {
    *m_pos = -64;
    v3 = m_pos + 1;
    this->m_pos = v3;
    return v3 != NULL;
  }
}

/*
==============
MsgPackSerializer::Null
==============
*/
bool MsgPackSerializer::Null(MsgPackSerializer *this, __int64 key)
{
  __int64 m_parentCount; 
  MsgPackSerializer *v3; 
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 

  m_parentCount = this->m_parentCount;
  v3 = this;
  if ( (int)m_parentCount > 0 )
  {
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
    LODWORD(m_parentCount) = this->m_parentCount;
  }
  v4 = NULL;
  if ( (int)m_parentCount > 0 && *((_DWORD *)&this->m_buffer + 6 * (int)m_parentCount) == 2 )
    v5 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v5 = NULL;
  if ( v5 && v3->m_end != v5 )
  {
    *v5 = -64;
    v4 = v5 + 1;
  }
  v3->m_pos = v4;
  return v4 != NULL;
}

/*
==============
MsgPackSerializer::Size
==============
*/
signed __int64 MsgPackSerializer::Size(MsgPackSerializer *this)
{
  return this->m_pos - this->m_buffer;
}

/*
==============
MsgPackSerializer::String
==============
*/
bool MsgPackSerializer::String(MsgPackSerializer *this, const char *key, const char *value)
{
  __int64 m_parentCount; 
  __int64 v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  if ( key && (v6 = this->m_parentCount, (int)v6 > 0) && *((_DWORD *)&this->m_buffer + 6 * v6) == 2 )
    v7 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  this->m_pos = v7;
  v8 = MsgPack_EncodeString(v7, this->m_end - v7, value);
  this->m_pos = v8;
  return v8 != NULL;
}

/*
==============
MsgPackSerializer::String
==============
*/
bool MsgPackSerializer::String(MsgPackSerializer *this, const char *value)
{
  __int64 m_parentCount; 
  unsigned __int8 *v4; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v4 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, value);
  this->m_pos = v4;
  return v4 != NULL;
}

/*
==============
MsgPackSerializer::String
==============
*/
bool MsgPackSerializer::String(MsgPackSerializer *this, __int64 key, const char *value)
{
  __int64 m_parentCount; 
  const char *v4; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 

  m_parentCount = this->m_parentCount;
  v4 = value;
  if ( (int)m_parentCount > 0 && (++*((_QWORD *)&this->m_pos + 3 * m_parentCount), v6 = this->m_parentCount, v6 > 0) && *((_DWORD *)&this->m_buffer + 6 * v6) == 2 )
    v7 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  v8 = (unsigned __int8 *)(this->m_end - v7);
  this->m_pos = v7;
  v9 = MsgPack_EncodeString(v7, (unsigned __int64)v8, v4);
  this->m_pos = v9;
  return v9 != NULL;
}

/*
==============
MsgPack::ToArray
==============
*/
MsgPack *MsgPack::ToArray(MsgPack *this, MsgPack *result)
{
  const unsigned __int8 *m_value; 
  const unsigned __int8 *v3; 

  m_value = this->m_value;
  if ( m_value && typemap[*m_value] == MSGPACK_ARRAY )
  {
    v3 = this->m_value;
    *(_OWORD *)&result->m_count = *(_OWORD *)&this->m_count;
    result->m_value = v3;
    return result;
  }
  else
  {
    result->m_key = NULL;
    result->m_value = NULL;
    result->m_count = 0i64;
    return result;
  }
}

/*
==============
MsgPack::ToBool
==============
*/
bool MsgPack::ToBool(MsgPack *this, bool defaultValue)
{
  unsigned __int8 v2; 
  bool result; 

  v2 = *this->m_value;
  if ( v2 == 0xC2 )
    return 0;
  result = 1;
  if ( v2 != 0xC3 )
    return defaultValue;
  return result;
}

/*
==============
MsgPack::ToFloat
==============
*/
long double MsgPack::ToFloat(MsgPack *this, long double defaultValue)
{
  const unsigned __int8 *m_value; 
  long double result; 

  m_value = this->m_value;
  if ( *m_value == 0xCA )
    return COERCE_FLOAT(m_value[4] | ((m_value[3] | ((m_value[2] | (m_value[1] << 8)) << 8)) << 8));
  if ( *m_value != 0xCB )
    return defaultValue;
  *(_QWORD *)&result = m_value[8] | ((m_value[7] | ((m_value[6] | ((m_value[5] | ((m_value[4] | ((m_value[3] | ((m_value[2] | ((unsigned __int64)m_value[1] << 8)) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  return result;
}

/*
==============
MsgPack::ToInt
==============
*/
__int64 MsgPack::ToInt(MsgPack *this, __int64 defaultValue)
{
  const unsigned __int8 *m_value; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 value; 

  m_value = this->m_value;
  value = 0i64;
  v3 = MsgPack_DecodeInt(m_value, &value);
  v5 = value;
  if ( !v3 )
    return v4;
  return v5;
}

/*
==============
MsgPack::ToMap
==============
*/
MsgPack *MsgPack::ToMap(MsgPack *this, MsgPack *result)
{
  const unsigned __int8 *m_value; 
  const unsigned __int8 *v3; 

  m_value = this->m_value;
  if ( m_value && typemap[*m_value] == MSGPACK_MAP )
  {
    v3 = this->m_value;
    *(_OWORD *)&result->m_count = *(_OWORD *)&this->m_count;
    result->m_value = v3;
    return result;
  }
  else
  {
    result->m_key = NULL;
    result->m_value = NULL;
    result->m_count = 0i64;
    return result;
  }
}

/*
==============
MsgPack::ToUInt
==============
*/
__int64 MsgPack::ToUInt(MsgPack *this, unsigned __int64 defaultValue)
{
  const unsigned __int8 *m_value; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 value; 

  m_value = this->m_value;
  value = 0i64;
  v3 = MsgPack_DecodeInt(m_value, &value);
  v5 = value;
  if ( !v3 )
    return v4;
  return v5;
}

/*
==============
MsgPack::Type
==============
*/
const unsigned __int8 *MsgPack::Type(MsgPack *this)
{
  const unsigned __int8 *result; 

  result = this->m_value;
  if ( result )
    return (const unsigned __int8 *)(unsigned __int8)typemap[*result];
  return result;
}

/*
==============
MsgPackSerializer::UInt
==============
*/
bool MsgPackSerializer::UInt(MsgPackSerializer *this, const char *key, unsigned __int64 value)
{
  __int64 m_parentCount; 
  __int64 v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  if ( key && (v6 = this->m_parentCount, (int)v6 > 0) && *((_DWORD *)&this->m_buffer + 6 * v6) == 2 )
    v7 = MsgPack_EncodeString(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  v8 = MsgPack_EncodeUInt(v7, this->m_end - v7, value);
  this->m_pos = v8;
  return v8 != NULL;
}

/*
==============
MsgPackSerializer::UInt
==============
*/
bool MsgPackSerializer::UInt(MsgPackSerializer *this, __int64 key, unsigned __int64 value)
{
  __int64 m_parentCount; 
  unsigned __int64 v4; 
  MsgPackSerializer *v5; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  __int64 v9; 

  m_parentCount = this->m_parentCount;
  v4 = value;
  v5 = this;
  if ( (int)m_parentCount > 0 && (++*((_QWORD *)&this->m_pos + 3 * m_parentCount), v6 = this->m_parentCount, v6 > 0) && *((_DWORD *)&this->m_buffer + 6 * v6) == 2 )
    v7 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, key);
  else
    v7 = NULL;
  v8 = MsgPack_EncodeUInt(v7, v5->m_end - v7, v4);
  *(_QWORD *)(v9 + 16) = v8;
  return v8 != NULL;
}

/*
==============
MsgPackSerializer::UInt
==============
*/
bool MsgPackSerializer::UInt(MsgPackSerializer *this, unsigned __int64 value)
{
  __int64 m_parentCount; 
  unsigned __int8 *v3; 
  __int64 v4; 

  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount > 0 )
    ++*((_QWORD *)&this->m_pos + 3 * m_parentCount);
  v3 = MsgPack_EncodeUInt(this->m_pos, this->m_end - this->m_pos, value);
  *(_QWORD *)(v4 + 16) = v3;
  return v3 != NULL;
}

/*
==============
MsgPack::begin
==============
*/
MsgPack *MsgPack::begin(MsgPack *this, MsgPack *result)
{
  const unsigned __int8 *m_value; 
  MsgPack *v3; 
  unsigned __int8 v4; 
  const unsigned __int8 *v5; 
  MsgPack *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  const unsigned __int8 *v9; 
  __int64 v10; 
  __int64 v11; 
  const unsigned __int8 *v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  const unsigned __int8 *v15; 

  m_value = this->m_value;
  v3 = result;
  v4 = *m_value;
  v5 = m_value + 1;
  result->m_key = NULL;
  result->m_value = NULL;
  result->m_count = 0i64;
  if ( (unsigned __int8)(v4 + 112) <= 0xFu )
  {
    result->m_count = v4 & 0xF;
    if ( (v4 & 0xF) != 0 )
    {
      result->m_value = v5;
      return result;
    }
    return v3;
  }
  if ( v4 == 0xDC )
  {
    v7 = *v5;
    result->m_value = m_value + 3;
    v6 = result;
    result->m_count = v5[1] | (unsigned __int64)(v7 << 8);
    return v6;
  }
  if ( v4 == 0xDD )
  {
    v8 = (unsigned __int64)*v5 << 8;
    result->m_value = m_value + 5;
    v6 = result;
    result->m_count = v5[3] | ((v5[2] | ((v5[1] | v8) << 8)) << 8);
    return v6;
  }
  if ( (unsigned __int8)(v4 + 0x80) > 0xFu )
  {
    if ( v4 == 0xDE )
    {
      v11 = m_value[2];
      v12 = v5 + 2;
      result->m_key = v5 + 2;
      v13 = *v5;
    }
    else
    {
      if ( v4 != 0xDF )
        return v3;
      v14 = m_value[2];
      v12 = v5 + 4;
      result->m_key = v5 + 4;
      v13 = v5[2] | ((v14 | ((unsigned __int64)*v5 << 8)) << 8);
      v11 = v5[3];
    }
    v3->m_count = v11 | (v13 << 8);
    v15 = MsgPack_Skip(v12);
    v3->m_value = v15;
    return v3;
  }
  result->m_count = v4 & 0xF;
  if ( (v4 & 0xF) != 0 )
  {
    result->m_key = v5;
    v9 = MsgPack_Skip(v5);
    *(_QWORD *)(v10 + 16) = v9;
    return (MsgPack *)v10;
  }
  return v3;
}

/*
==============
MsgPack::end
==============
*/
MsgPack *MsgPack::end(MsgPack *result)
{
  result->m_key = NULL;
  result->m_value = NULL;
  result->m_count = 0i64;
  return result;
}

