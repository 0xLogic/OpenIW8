/*
==============
ProtoBufSerializer::WriteFloat32
==============
*/

bool __fastcall ProtoBufSerializer::WriteFloat32(ProtoBufSerializer *this, const unsigned int tag, float value)
{
  return ?WriteFloat32@ProtoBufSerializer@@QEAA_NIM@Z(this, tag, value);
}

/*
==============
ProtoBufSerializer::OpenStruct
==============
*/

ProtoBufSerializer *__fastcall ProtoBufSerializer::OpenStruct(ProtoBufSerializer *this, ProtoBufSerializer *result, const unsigned int tag)
{
  return ?OpenStruct@ProtoBufSerializer@@QEAA?AV1@I@Z(this, result, tag);
}

/*
==============
ProtoBufSerializer::WriteString
==============
*/

bool __fastcall ProtoBufSerializer::WriteString(ProtoBufSerializer *this, const unsigned int tag, const char *value, const unsigned __int64 len)
{
  return ?WriteString@ProtoBufSerializer@@QEAA_NIPEBD_K@Z(this, tag, value, len);
}

/*
==============
ProtoBufSerializer::WriteUInt32
==============
*/

bool __fastcall ProtoBufSerializer::WriteUInt32(ProtoBufSerializer *this, const unsigned int tag, unsigned int value)
{
  return ?WriteUInt32@ProtoBufSerializer@@QEAA_NII@Z(this, tag, value);
}

/*
==============
ProtoBufSerializer::EncodeVarInt
==============
*/

bool __fastcall ProtoBufSerializer::EncodeVarInt(ProtoBufSerializer *this, unsigned __int64 value)
{
  return ?EncodeVarInt@ProtoBufSerializer@@AEAA_N_K@Z(this, value);
}

/*
==============
ProtoBufSerializer::WriteInt64
==============
*/

bool __fastcall ProtoBufSerializer::WriteInt64(ProtoBufSerializer *this, const unsigned int tag, __int64 value)
{
  return ?WriteInt64@ProtoBufSerializer@@QEAA_NI_J@Z(this, tag, value);
}

/*
==============
ProtoBufSerializer::EncodeVarInt
==============
*/
bool ProtoBufSerializer::EncodeVarInt(ProtoBufSerializer *this, unsigned __int64 value)
{
  unsigned __int8 *m_currentPtr; 
  __int64 v3; 
  signed __int64 v5; 
  bool result; 
  unsigned __int64 v7; 
  char v8; 
  __int64 v9; 
  char Src[16]; 

  m_currentPtr = this->m_currentPtr;
  v3 = 0i64;
  v5 = m_currentPtr - this->m_buffer;
  if ( value )
  {
    do
    {
      if ( (unsigned int)v3 >= 0xA )
        break;
      v7 = value;
      v8 = value | 0x80;
      value >>= 7;
      Src[v3] = v8;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( v7 >= 0x80 );
    v9 = (unsigned int)v3;
    Src[(unsigned int)(v3 - 1)] &= ~0x80u;
    if ( v3 + v5 > this->m_len_minus_buffer )
    {
      this->m_overflowed = 1;
      return 0;
    }
    else
    {
      memcpy_0(m_currentPtr, Src, (unsigned int)v3);
      this->m_currentPtr += v9;
      return 1;
    }
  }
  else if ( v5 + 1 > this->m_len_minus_buffer )
  {
    this->m_overflowed = 1;
    return 0;
  }
  else
  {
    *m_currentPtr = 0;
    result = 1;
    ++this->m_currentPtr;
  }
  return result;
}

/*
==============
ProtoBufSerializer::OpenStruct
==============
*/
ProtoBufSerializer *ProtoBufSerializer::OpenStruct(ProtoBufSerializer *this, ProtoBufSerializer *result, const unsigned int tag)
{
  unsigned __int8 *m_currentPtr; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  unsigned __int64 v9; 

  m_currentPtr = this->m_currentPtr;
  result->m_real_len = 0i64;
  result->m_len_minus_buffer = 0i64;
  result->m_overflowed = 0;
  result->m_structPtr = NULL;
  result->m_currentPtr = NULL;
  result->m_buffer = NULL;
  if ( tag && ProtoBufSerializer::EncodeVarInt(this, (8i64 * tag) | 2) && (v6 = this->m_currentPtr, v7 = (unsigned __int8 *)(this->m_real_len + this->m_buffer - v6), (unsigned __int64)v7 > 0xA) )
  {
    v8 = v6 + 10;
    this->m_structPtr = v6 + 10;
    v9 = (unsigned __int64)(v7 - 10);
    if ( v6 != (unsigned __int8 *)-10i64 )
    {
      result->m_buffer = v8;
      result->m_currentPtr = v8;
      result->m_real_len = v9;
      result->m_len_minus_buffer = v9;
      result->m_rollbackPtr = NULL;
      result->m_optional_buffer_to_leave = 0;
    }
    if ( &result->m_buffer[result->m_real_len - (unsigned __int64)result->m_currentPtr] >= v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\proto\\online_protobuf_serialization.h", 230, ASSERT_TYPE_ASSERT, "(structure.GetRemainingSize() < GetRemainingSize())", (const char *)&queryFormat, "structure.GetRemainingSize() < GetRemainingSize()") )
      __debugbreak();
  }
  else
  {
    this->m_currentPtr = m_currentPtr;
  }
  return result;
}

/*
==============
ProtoBufSerializer::WriteFloat32
==============
*/
bool ProtoBufSerializer::WriteFloat32(ProtoBufSerializer *this, const unsigned int tag, float value)
{
  unsigned __int8 *m_currentPtr; 
  unsigned __int8 *m_buffer; 
  unsigned __int8 *v6; 
  bool result; 

  m_currentPtr = this->m_currentPtr;
  if ( tag )
  {
    if ( ProtoBufSerializer::EncodeVarInt(this, (8i64 * tag) | 5) )
    {
      m_buffer = this->m_buffer;
      if ( m_buffer )
      {
        v6 = this->m_currentPtr;
        if ( v6 )
        {
          if ( v6 - m_buffer + 4 <= this->m_len_minus_buffer )
          {
            *(float *)v6 = value;
            result = 1;
            this->m_currentPtr += 4;
            return result;
          }
          this->m_overflowed = 1;
        }
      }
    }
  }
  this->m_currentPtr = m_currentPtr;
  return 0;
}

/*
==============
ProtoBufSerializer::WriteInt64
==============
*/
char ProtoBufSerializer::WriteInt64(ProtoBufSerializer *this, const unsigned int tag, __int64 value)
{
  unsigned __int8 *m_currentPtr; 
  unsigned __int64 v6; 

  m_currentPtr = this->m_currentPtr;
  if ( tag && ProtoBufSerializer::EncodeVarInt(this, 8i64 * tag) )
  {
    v6 = 2 * value;
    if ( value < 0 )
      v6 = ~v6;
    if ( ProtoBufSerializer::EncodeVarInt(this, v6) )
      return 1;
  }
  this->m_currentPtr = m_currentPtr;
  return 0;
}

/*
==============
ProtoBufSerializer::WriteString
==============
*/
char ProtoBufSerializer::WriteString(ProtoBufSerializer *this, const unsigned int tag, const char *value, const unsigned __int64 len)
{
  unsigned __int8 *m_currentPtr; 
  signed __int64 v8; 

  m_currentPtr = this->m_currentPtr;
  if ( tag )
  {
    if ( ProtoBufSerializer::EncodeVarInt(this, (8i64 * tag) | 2) )
    {
      v8 = this->m_currentPtr - this->m_buffer;
      if ( ProtoBufSerializer::EncodeVarInt(this, len) )
      {
        if ( v8 + len <= this->m_len_minus_buffer )
        {
          memmove_0(this->m_currentPtr, value, len);
          this->m_currentPtr += len;
          return 1;
        }
        this->m_overflowed = 1;
      }
    }
  }
  this->m_currentPtr = m_currentPtr;
  return 0;
}

/*
==============
ProtoBufSerializer::WriteUInt32
==============
*/
char ProtoBufSerializer::WriteUInt32(ProtoBufSerializer *this, const unsigned int tag, unsigned int value)
{
  unsigned __int8 *m_currentPtr; 
  char result; 

  m_currentPtr = this->m_currentPtr;
  if ( tag && ProtoBufSerializer::EncodeVarInt(this, 8i64 * tag) && ProtoBufSerializer::EncodeVarInt(this, value) )
    return 1;
  result = 0;
  this->m_currentPtr = m_currentPtr;
  return result;
}

