/*
==============
ProtobufSerializer::Fixed64
==============
*/

bool __fastcall ProtobufSerializer::Fixed64(ProtobufSerializer *this, unsigned __int64 tag, unsigned __int64 value)
{
  return ?Fixed64@ProtobufSerializer@@QEAA_N_K0@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::UInt32
==============
*/

bool __fastcall ProtobufSerializer::UInt32(ProtobufSerializer *this, unsigned __int64 tag, unsigned int value)
{
  return ?UInt32@ProtobufSerializer@@QEAA_N_KI@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::Size
==============
*/

unsigned __int64 __fastcall ProtobufSerializer::Size(ProtobufSerializer *this)
{
  return ?Size@ProtobufSerializer@@QEBA_KXZ(this);
}

/*
==============
ProtobufSerializer::EndPacked
==============
*/

bool __fastcall ProtobufSerializer::EndPacked(ProtobufSerializer *this)
{
  return ?EndPacked@ProtobufSerializer@@QEAA_NXZ(this);
}

/*
==============
Protobuf_Write
==============
*/

unsigned __int8 *__fastcall Protobuf_Write(unsigned __int8 *dest, unsigned __int64 destSize, const void *bytes, unsigned __int64 byteCount)
{
  return ?Protobuf_Write@@YAPEAEPEAE_KPEBX1@Z(dest, destSize, bytes, byteCount);
}

/*
==============
ProtobufSerializer::BeginPacked
==============
*/

bool __fastcall ProtobufSerializer::BeginPacked(ProtobufSerializer *this, unsigned __int64 tag)
{
  return ?BeginPacked@ProtobufSerializer@@QEAA_N_K@Z(this, tag);
}

/*
==============
ProtobufSerializer::ProtobufSerializer
==============
*/

void __fastcall ProtobufSerializer::ProtobufSerializer(ProtobufSerializer *this, void *output, unsigned __int64 outputSize)
{
  ??0ProtobufSerializer@@QEAA@PEAX_K@Z(this, output, outputSize);
}

/*
==============
Protobuf_WriteZigZag
==============
*/

unsigned __int8 *__fastcall Protobuf_WriteZigZag(unsigned __int8 *dest, unsigned __int64 destSize, __int64 value)
{
  return ?Protobuf_WriteZigZag@@YAPEAEPEAE_K_J@Z(dest, destSize, value);
}

/*
==============
Protobuf_WriteVarInt
==============
*/

unsigned __int8 *__fastcall Protobuf_WriteVarInt(unsigned __int8 *dest, unsigned __int64 destSize, unsigned __int64 value)
{
  return ?Protobuf_WriteVarInt@@YAPEAEPEAE_K1@Z(dest, destSize, value);
}

/*
==============
ProtobufSerializer::EndMessage
==============
*/

bool __fastcall ProtobufSerializer::EndMessage(ProtobufSerializer *this)
{
  return ?EndMessage@ProtobufSerializer@@QEAA_NXZ(this);
}

/*
==============
ProtobufSerializer::Bytes
==============
*/

bool __fastcall ProtobufSerializer::Bytes(ProtobufSerializer *this, unsigned __int64 tag, const void *value, unsigned __int64 valueSize)
{
  return ?Bytes@ProtobufSerializer@@QEAA_N_KPEBX0@Z(this, tag, value, valueSize);
}

/*
==============
ProtobufSerializer::Float32
==============
*/

bool __fastcall ProtobufSerializer::Float32(ProtobufSerializer *this, unsigned __int64 tag, float value)
{
  return ?Float32@ProtobufSerializer@@QEAA_N_KM@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::Int64
==============
*/

bool __fastcall ProtobufSerializer::Int64(ProtobufSerializer *this, unsigned __int64 tag, __int64 value)
{
  return ?Int64@ProtobufSerializer@@QEAA_N_K_J@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::SFixed64
==============
*/

bool __fastcall ProtobufSerializer::SFixed64(ProtobufSerializer *this, unsigned __int64 tag, __int64 value)
{
  return ?SFixed64@ProtobufSerializer@@QEAA_N_K_J@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::UInt64
==============
*/

bool __fastcall ProtobufSerializer::UInt64(ProtobufSerializer *this, unsigned __int64 tag, unsigned __int64 value)
{
  return ?UInt64@ProtobufSerializer@@QEAA_N_K0@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::Bool
==============
*/

bool __fastcall ProtobufSerializer::Bool(ProtobufSerializer *this, unsigned __int64 tag, bool value)
{
  return ?Bool@ProtobufSerializer@@QEAA_N_K_N@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::Fixed32
==============
*/

bool __fastcall ProtobufSerializer::Fixed32(ProtobufSerializer *this, unsigned __int64 tag, unsigned int value)
{
  return ?Fixed32@ProtobufSerializer@@QEAA_N_KI@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::Float64
==============
*/

bool __fastcall ProtobufSerializer::Float64(ProtobufSerializer *this, unsigned __int64 tag, long double value)
{
  return ?Float64@ProtobufSerializer@@QEAA_N_KN@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::String
==============
*/

bool __fastcall ProtobufSerializer::String(ProtobufSerializer *this, unsigned __int64 tag, const char *value)
{
  return ?String@ProtobufSerializer@@QEAA_N_KPEBD@Z(this, tag, value);
}

/*
==============
Protobuf_WriteTag
==============
*/

unsigned __int8 *__fastcall Protobuf_WriteTag(unsigned __int8 *dest, unsigned __int64 destSize, unsigned __int64 tag, ProtobufTagType type)
{
  return ?Protobuf_WriteTag@@YAPEAEPEAE_K1W4ProtobufTagType@@@Z(dest, destSize, tag, type);
}

/*
==============
ProtobufSerializer::Int32
==============
*/

bool __fastcall ProtobufSerializer::Int32(ProtobufSerializer *this, unsigned __int64 tag, int value)
{
  return ?Int32@ProtobufSerializer@@QEAA_N_KH@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::SInt32
==============
*/

bool __fastcall ProtobufSerializer::SInt32(ProtobufSerializer *this, unsigned __int64 tag, int value)
{
  return ?SInt32@ProtobufSerializer@@QEAA_N_KH@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::SInt64
==============
*/

bool __fastcall ProtobufSerializer::SInt64(ProtobufSerializer *this, unsigned __int64 tag, __int64 value)
{
  return ?SInt64@ProtobufSerializer@@QEAA_N_K_J@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::SFixed32
==============
*/

bool __fastcall ProtobufSerializer::SFixed32(ProtobufSerializer *this, unsigned __int64 tag, int value)
{
  return ?SFixed32@ProtobufSerializer@@QEAA_N_KH@Z(this, tag, value);
}

/*
==============
ProtobufSerializer::BeginMessage
==============
*/

bool __fastcall ProtobufSerializer::BeginMessage(ProtobufSerializer *this, unsigned __int64 tag)
{
  return ?BeginMessage@ProtobufSerializer@@QEAA_N_K@Z(this, tag);
}

/*
==============
ProtobufSerializer::ProtobufSerializer
==============
*/
void ProtobufSerializer::ProtobufSerializer(ProtobufSerializer *this, void *output, unsigned __int64 outputSize)
{
  this->m_buffer = (unsigned __int8 *)output;
  this->m_end = (unsigned __int8 *)output + outputSize;
  this->m_pos = (unsigned __int8 *)output;
  this->m_parentCount = 0;
  this->m_packed = 0;
}

/*
==============
ProtobufSerializer::BeginMessage
==============
*/
bool ProtobufSerializer::BeginMessage(ProtobufSerializer *this, unsigned __int64 tag)
{
  unsigned __int8 *v3; 
  bool v4; 
  unsigned __int8 *m_pos; 

  v3 = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (8 * tag) | 2);
  this->m_pos = v3;
  v4 = v3 == NULL;
  if ( v3 )
  {
    *v3 = -18;
    m_pos = this->m_pos;
    this->m_pos = m_pos + 1;
    this->m_parentOffset[this->m_parentCount++] = m_pos;
    v4 = this->m_pos == NULL;
  }
  return !v4;
}

/*
==============
ProtobufSerializer::BeginPacked
==============
*/
bool ProtobufSerializer::BeginPacked(ProtobufSerializer *this, unsigned __int64 tag)
{
  unsigned __int8 *m_pos; 
  unsigned __int8 *v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 

  m_pos = this->m_pos;
  if ( !m_pos || this->m_packed )
    return 0;
  this->m_packedTag = tag;
  v5 = (unsigned __int8 *)(this->m_end - m_pos);
  this->m_packed = 1;
  v6 = Protobuf_WriteVarInt(m_pos, (unsigned __int64)v5, (8 * tag) | 2);
  this->m_pos = v6;
  v7 = v6;
  if ( v6 )
  {
    *v6 = -35;
    v8 = this->m_pos;
    this->m_packedOffset = v8;
    v7 = v8 + 1;
    this->m_pos = v8 + 1;
  }
  return v7 != NULL;
}

/*
==============
ProtobufSerializer::Bool
==============
*/
bool ProtobufSerializer::Bool(ProtobufSerializer *this, unsigned __int64 tag, bool value)
{
  unsigned __int8 *m_pos; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 

  if ( this->m_packed )
    m_pos = NULL;
  else
    m_pos = this->m_pos;
  v6 = Protobuf_WriteVarInt(m_pos, this->m_end - m_pos, 8 * tag);
  v7 = Protobuf_WriteVarInt(v6, this->m_end - v6, value);
  this->m_pos = v7;
  return v7 != NULL;
}

/*
==============
ProtobufSerializer::Bytes
==============
*/
bool ProtobufSerializer::Bytes(ProtobufSerializer *this, unsigned __int64 tag, const void *value, unsigned __int64 valueSize)
{
  unsigned __int8 *v4; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 

  v4 = NULL;
  if ( this->m_packed )
    m_pos = NULL;
  else
    m_pos = this->m_pos;
  v9 = Protobuf_WriteVarInt(m_pos, this->m_end - m_pos, (8 * tag) | 2);
  v10 = Protobuf_WriteVarInt(v9, this->m_end - v9, valueSize);
  this->m_pos = v10;
  v11 = v10;
  if ( v10 && this->m_end - v10 >= valueSize )
  {
    memcpy_0(v10, value, valueSize);
    v4 = &v11[valueSize];
  }
  this->m_pos = v4;
  return v4 != NULL;
}

/*
==============
ProtobufSerializer::EndMessage
==============
*/
bool ProtobufSerializer::EndMessage(ProtobufSerializer *this)
{
  unsigned __int8 *m_pos; 
  __int64 m_parentCount; 
  char *v4; 
  _BYTE *v5; 
  __int64 v6; 
  unsigned __int64 i; 
  char v8; 
  size_t v9; 
  size_t v10; 
  unsigned __int8 *v11; 
  char Src[16]; 
  char v14[16]; 

  m_pos = this->m_pos;
  if ( !m_pos )
    return 0;
  m_parentCount = this->m_parentCount;
  if ( (int)m_parentCount <= 0 )
    return 0;
  this->m_parentCount = m_parentCount - 1;
  v4 = Src;
  v5 = (_BYTE *)*((_QWORD *)&this->m_pos + m_parentCount);
  v6 = m_pos - v5 - 1;
  for ( i = v6; i > 0x7F; ++v4 )
  {
    v8 = i;
    i >>= 7;
    *v4 = v8 | 0x80;
  }
  *v4 = i & 0x7F;
  v9 = v4 - Src + 1;
  if ( v9 > 0xA )
    v9 = -(__int64)v14;
  else
    memcpy_0(v14, Src, v9);
  v10 = v9 - 1;
  if ( v10 )
  {
    memmove_0(&v5[v10], v5, v6 + 1);
    this->m_pos += v10;
    v11 = this->m_pos;
    if ( v11 >= this->m_end )
      v11 = NULL;
    this->m_pos = v11;
  }
  memcpy_0(v5, v14, v10 + 1);
  return this->m_pos != NULL;
}

/*
==============
ProtobufSerializer::EndPacked
==============
*/
bool ProtobufSerializer::EndPacked(ProtobufSerializer *this)
{
  unsigned __int8 *m_pos; 
  unsigned __int8 *m_packedOffset; 
  __int64 v4; 
  char *v5; 
  unsigned __int64 i; 
  char v7; 
  size_t v8; 
  size_t v9; 
  unsigned __int8 *v10; 
  bool result; 
  char Src[16]; 
  char v13[16]; 

  m_pos = this->m_pos;
  if ( !m_pos )
    return 0;
  if ( !this->m_packed )
    return 0;
  m_packedOffset = this->m_packedOffset;
  if ( !m_packedOffset )
    return 0;
  v4 = m_pos - m_packedOffset - 1;
  v5 = Src;
  for ( i = v4; i > 0x7F; ++v5 )
  {
    v7 = i;
    i >>= 7;
    *v5 = v7 | 0x80;
  }
  *v5 = i & 0x7F;
  v8 = v5 - Src + 1;
  if ( v8 > 0xA )
    v8 = -(__int64)v13;
  else
    memcpy_0(v13, Src, v8);
  v9 = v8 - 1;
  if ( v9 )
  {
    memmove_0(&m_packedOffset[v9], m_packedOffset, v4 + 1);
    this->m_pos += v9;
    v10 = this->m_pos;
    if ( v10 >= this->m_end )
      v10 = NULL;
    this->m_pos = v10;
  }
  memcpy_0(m_packedOffset, v13, v9 + 1);
  result = this->m_pos != NULL;
  this->m_packed = 0;
  return result;
}

/*
==============
ProtobufSerializer::Fixed32
==============
*/
bool ProtobufSerializer::Fixed32(ProtobufSerializer *this, unsigned __int64 tag, unsigned int value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 

  v3 = NULL;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (8 * tag) | 5);
  }
  m_pos = this->m_pos;
  if ( m_pos && (unsigned __int8 *)(this->m_end - m_pos) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)m_pos = value;
    v3 = m_pos + 4;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
ProtobufSerializer::Fixed64
==============
*/
bool ProtobufSerializer::Fixed64(ProtobufSerializer *this, unsigned __int64 tag, unsigned __int64 value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 

  v3 = NULL;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (8 * tag) | 1);
  }
  m_pos = this->m_pos;
  if ( m_pos && (unsigned __int8 *)(this->m_end - m_pos) >= (unsigned __int8 *)8 )
  {
    *(double *)m_pos = *(double *)&value;
    v3 = m_pos + 8;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
ProtobufSerializer::Float32
==============
*/
bool ProtobufSerializer::Float32(ProtobufSerializer *this, unsigned __int64 tag, float value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 

  v3 = NULL;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (8 * tag) | 5);
  }
  m_pos = this->m_pos;
  if ( m_pos && (unsigned __int8 *)(this->m_end - m_pos) >= (unsigned __int8 *)4 )
  {
    v3 = m_pos + 4;
    *(float *)m_pos = value;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
ProtobufSerializer::Float64
==============
*/
bool ProtobufSerializer::Float64(ProtobufSerializer *this, unsigned __int64 tag, long double value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 

  v3 = NULL;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (8 * tag) | 1);
  }
  m_pos = this->m_pos;
  if ( m_pos && (unsigned __int8 *)(this->m_end - m_pos) >= (unsigned __int8 *)8 )
  {
    *(long double *)m_pos = value;
    v3 = m_pos + 8;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
ProtobufSerializer::Int32
==============
*/
bool ProtobufSerializer::Int32(ProtobufSerializer *this, unsigned __int64 tag, int value)
{
  unsigned __int64 v4; 
  unsigned __int8 *v5; 

  v4 = value;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, 8 * tag);
  }
  v5 = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, v4);
  this->m_pos = v5;
  return v5 != NULL;
}

/*
==============
ProtobufSerializer::Int64
==============
*/
bool ProtobufSerializer::Int64(ProtobufSerializer *this, unsigned __int64 tag, __int64 value)
{
  unsigned __int8 *v5; 

  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, 8 * tag);
  }
  v5 = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, value);
  this->m_pos = v5;
  return v5 != NULL;
}

/*
==============
Protobuf_Write
==============
*/
unsigned __int8 *Protobuf_Write(unsigned __int8 *dest, unsigned __int64 destSize, const void *bytes, unsigned __int64 byteCount)
{
  if ( !dest || destSize < byteCount )
    return 0i64;
  memcpy_0(dest, bytes, byteCount);
  return &dest[byteCount];
}

/*
==============
Protobuf_WriteTag
==============
*/
unsigned __int8 *Protobuf_WriteTag(unsigned __int8 *dest, unsigned __int64 destSize, unsigned __int64 tag, ProtobufTagType type)
{
  return Protobuf_WriteVarInt(dest, destSize, (int)type | (8 * tag));
}

/*
==============
Protobuf_WriteVarInt
==============
*/
unsigned __int8 *Protobuf_WriteVarInt(unsigned __int8 *dest, unsigned __int64 destSize, unsigned __int64 value)
{
  char *i; 
  char v5; 
  unsigned __int64 v6; 
  char Src[16]; 

  for ( i = Src; value > 0x7F; ++i )
  {
    v5 = value;
    value >>= 7;
    *i = v5 | 0x80;
  }
  *i = value & 0x7F;
  v6 = i - Src + 1;
  if ( !dest || destSize < v6 )
    return 0i64;
  memcpy_0(dest, Src, v6);
  return &dest[v6];
}

/*
==============
Protobuf_WriteZigZag
==============
*/
unsigned __int8 *Protobuf_WriteZigZag(unsigned __int8 *dest, unsigned __int64 destSize, __int64 value)
{
  return Protobuf_WriteVarInt(dest, destSize, (2 * value) ^ (value >> 63));
}

/*
==============
ProtobufSerializer::SFixed32
==============
*/
bool ProtobufSerializer::SFixed32(ProtobufSerializer *this, unsigned __int64 tag, int value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 

  v3 = NULL;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (8 * tag) | 5);
  }
  m_pos = this->m_pos;
  if ( m_pos && (unsigned __int8 *)(this->m_end - m_pos) >= (unsigned __int8 *)4 )
  {
    *(_DWORD *)m_pos = value;
    v3 = m_pos + 4;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
ProtobufSerializer::SFixed64
==============
*/
bool ProtobufSerializer::SFixed64(ProtobufSerializer *this, unsigned __int64 tag, __int64 value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 

  v3 = NULL;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (8 * tag) | 1);
  }
  m_pos = this->m_pos;
  if ( m_pos && (unsigned __int8 *)(this->m_end - m_pos) >= (unsigned __int8 *)8 )
  {
    *(double *)m_pos = *(double *)&value;
    v3 = m_pos + 8;
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
ProtobufSerializer::SInt32
==============
*/
bool ProtobufSerializer::SInt32(ProtobufSerializer *this, unsigned __int64 tag, int value)
{
  __int64 v4; 
  unsigned __int8 *v5; 

  v4 = value;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, 8 * tag);
  }
  v5 = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (2 * v4) ^ (v4 >> 63));
  this->m_pos = v5;
  return v5 != NULL;
}

/*
==============
ProtobufSerializer::SInt64
==============
*/
bool ProtobufSerializer::SInt64(ProtobufSerializer *this, unsigned __int64 tag, __int64 value)
{
  unsigned __int8 *v5; 

  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, 8 * tag);
  }
  v5 = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, (2 * value) ^ (value >> 63));
  this->m_pos = v5;
  return v5 != NULL;
}

/*
==============
ProtobufSerializer::Size
==============
*/
unsigned __int8 *ProtobufSerializer::Size(ProtobufSerializer *this)
{
  unsigned __int8 *result; 

  result = this->m_pos;
  if ( result )
    result -= (__int64)this->m_buffer;
  return result;
}

/*
==============
ProtobufSerializer::String
==============
*/
bool ProtobufSerializer::String(ProtobufSerializer *this, unsigned __int64 tag, const char *value)
{
  unsigned __int8 *v3; 
  unsigned __int8 *m_pos; 
  unsigned __int8 *v7; 
  unsigned __int64 v8; 
  unsigned __int8 *v9; 
  unsigned __int8 *v10; 

  v3 = NULL;
  if ( this->m_packed )
    m_pos = NULL;
  else
    m_pos = this->m_pos;
  v7 = Protobuf_WriteVarInt(m_pos, this->m_end - m_pos, (8 * tag) | 2);
  this->m_pos = v7;
  v8 = -1i64;
  do
    ++v8;
  while ( value[v8] );
  v9 = Protobuf_WriteVarInt(v7, this->m_end - v7, v8);
  this->m_pos = v9;
  v10 = v9;
  if ( v9 && this->m_end - v9 >= v8 )
  {
    memcpy_0(v9, value, v8);
    v3 = &v10[v8];
  }
  this->m_pos = v3;
  return v3 != NULL;
}

/*
==============
ProtobufSerializer::UInt32
==============
*/
bool ProtobufSerializer::UInt32(ProtobufSerializer *this, unsigned __int64 tag, unsigned int value)
{
  unsigned __int64 v4; 
  unsigned __int8 *v5; 

  v4 = value;
  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, 8 * tag);
  }
  v5 = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, v4);
  this->m_pos = v5;
  return v5 != NULL;
}

/*
==============
ProtobufSerializer::UInt64
==============
*/
bool ProtobufSerializer::UInt64(ProtobufSerializer *this, unsigned __int64 tag, unsigned __int64 value)
{
  unsigned __int8 *v5; 

  if ( this->m_packed )
  {
    if ( tag != this->m_packedTag )
      this->m_pos = NULL;
  }
  else
  {
    this->m_pos = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, 8 * tag);
  }
  v5 = Protobuf_WriteVarInt(this->m_pos, this->m_end - this->m_pos, value);
  this->m_pos = v5;
  return v5 != NULL;
}

