/*
==============
bdUserPresenceInfo::hasData
==============
*/

bool __fastcall bdUserPresenceInfo::hasData(bdUserPresenceInfo *this)
{
  return ?hasData@bdUserPresenceInfo@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfo::setOnline
==============
*/

void __fastcall bdUserPresenceInfo::setOnline(bdUserPresenceInfo *this, const bool online)
{
  ?setOnline@bdUserPresenceInfo@@QEAAX_N@Z(this, online);
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/

void __fastcall bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this, const bool online, const char *platform, const bdPresenceData *data)
{
  ??0bdUserPresenceInfo@@QEAA@_NPEBDAEBVbdPresenceData@@@Z(this, online, platform, data);
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/

void __fastcall bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this, const bool online, const char *platform, const bdPresenceData *data, const unsigned __int64 updateTime)
{
  ??0bdUserPresenceInfo@@QEAA@_NPEBDAEBVbdPresenceData@@_K@Z(this, online, platform, data, updateTime);
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/

void __fastcall bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this)
{
  ??0bdUserPresenceInfo@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceInfo::getPlatform
==============
*/

const char *__fastcall bdUserPresenceInfo::getPlatform(bdUserPresenceInfo *this)
{
  return ?getPlatform@bdUserPresenceInfo@@QEBAPEBDXZ(this);
}

/*
==============
bdUserPresenceInfo::operator=
==============
*/

bdUserPresenceInfo *__fastcall bdUserPresenceInfo::operator=(bdUserPresenceInfo *this, const bdUserPresenceInfo *other)
{
  return ??4bdUserPresenceInfo@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdUserPresenceInfo::setPlatform
==============
*/

void __fastcall bdUserPresenceInfo::setPlatform(bdUserPresenceInfo *this, const char *platform)
{
  ?setPlatform@bdUserPresenceInfo@@QEAAXPEBD@Z(this, platform);
}

/*
==============
bdUserPresenceInfo::setData
==============
*/

void __fastcall bdUserPresenceInfo::setData(bdUserPresenceInfo *this, const bdPresenceData *data)
{
  ?setData@bdUserPresenceInfo@@QEAAXAEBVbdPresenceData@@@Z(this, data);
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/

void __fastcall bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this, const bdUserPresenceInfo *other)
{
  ??0bdUserPresenceInfo@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdUserPresenceInfo::hasUpdateTime
==============
*/

bool __fastcall bdUserPresenceInfo::hasUpdateTime(bdUserPresenceInfo *this)
{
  return ?hasUpdateTime@bdUserPresenceInfo@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfo::getOnline
==============
*/

bool __fastcall bdUserPresenceInfo::getOnline(bdUserPresenceInfo *this)
{
  return ?getOnline@bdUserPresenceInfo@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfo::deserialize
==============
*/

bool __fastcall bdUserPresenceInfo::deserialize(bdUserPresenceInfo *this, const char *presenceKey, bdJSONDeserializer *deserializer)
{
  return ?deserialize@bdUserPresenceInfo@@QEAA_NPEBDPEAVbdJSONDeserializer@@@Z(this, presenceKey, deserializer);
}

/*
==============
bdUserPresenceInfo::~bdUserPresenceInfo
==============
*/

void __fastcall bdUserPresenceInfo::~bdUserPresenceInfo(bdUserPresenceInfo *this)
{
  ??1bdUserPresenceInfo@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceInfo::getUpdateTime
==============
*/

unsigned __int64 __fastcall bdUserPresenceInfo::getUpdateTime(bdUserPresenceInfo *this)
{
  return ?getUpdateTime@bdUserPresenceInfo@@QEBA_KXZ(this);
}

/*
==============
bdUserPresenceInfo::hasPlatform
==============
*/

bool __fastcall bdUserPresenceInfo::hasPlatform(bdUserPresenceInfo *this)
{
  return ?hasPlatform@bdUserPresenceInfo@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfo::serialize
==============
*/

bool __fastcall bdUserPresenceInfo::serialize(bdUserPresenceInfo *this, bdJSONSerializer *serializer)
{
  return ?serialize@bdUserPresenceInfo@@QEBA_NPEAVbdJSONSerializer@@@Z(this, serializer);
}

/*
==============
bdUserPresenceInfo::getData
==============
*/

bdPresenceData *__fastcall bdUserPresenceInfo::getData(bdUserPresenceInfo *this, bdPresenceData *result)
{
  return ?getData@bdUserPresenceInfo@@QEBA?AVbdPresenceData@@XZ(this, result);
}

/*
==============
bdUserPresenceInfo::setUpdateTime
==============
*/

void __fastcall bdUserPresenceInfo::setUpdateTime(bdUserPresenceInfo *this, const unsigned __int64 updateTime)
{
  ?setUpdateTime@bdUserPresenceInfo@@QEAAX_K@Z(this, updateTime);
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/
void bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this, const bdUserPresenceInfo *other)
{
  const bdUserPresenceInfo *v2; 
  bdUserPresenceInfo *v3; 

  v2 = other;
  v3 = this;
  this->m_online = other->m_online;
  this->m_platform.m_hasValue = other->m_platform.m_hasValue;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+2]
    vmovups xmmword ptr [rcx+2], xmm0
  }
  this->m_platform.m_value.m_buffer[16] = other->m_platform.m_value.m_buffer[16];
  this->m_data.m_hasValue = other->m_data.m_hasValue;
  bdPresenceData::bdPresenceData(&this->m_data.m_value, &other->m_data.m_value);
  v3->m_updateTime.m_hasValue = v2->m_updateTime.m_hasValue;
  v3->m_updateTime.m_value = v2->m_updateTime.m_value;
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/
void bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this)
{
  bdStructFixedSizeString<16> *p_m_value; 
  unsigned __int64 v3; 
  size_t v4; 

  this->m_online = 0;
  this->m_platform.m_hasValue = 0;
  p_m_value = &this->m_platform.m_value;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( p_m_value )
  {
    v4 = 16i64;
    if ( v3 < 0x10 )
      v4 = v3;
    memcpy_0(p_m_value, (char *)&queryFormat.fmt + 3, v4);
    p_m_value->m_buffer[v4] = 0;
  }
  this->m_data.m_hasValue = 0;
  bdPresenceData::bdPresenceData(&this->m_data.m_value);
  this->m_updateTime.m_hasValue = 1;
  this->m_updateTime.m_value = 0i64;
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/
void bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this, const bool online, const char *platform, const bdPresenceData *data)
{
  _BYTE *v7; 
  unsigned __int64 v8; 
  __int128 Buf; 
  char v10; 

  _RBX = this;
  this->m_online = online;
  if ( bdStrlcpy((char *const)&Buf, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  _RBX->m_platform.m_hasValue = 1;
  __asm
  {
    vmovups xmm0, [rsp+88h+Buf]
    vmovups xmmword ptr [rbx+2], xmm0
  }
  _RBX->m_platform.m_value.m_buffer[16] = v10;
  v7 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v7 )
    v8 = v7 - (_BYTE *)&Buf;
  else
    v8 = 17i64;
  bdHandleAssert(v8 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  _RBX->m_data.m_hasValue = 1;
  bdPresenceData::bdPresenceData(&_RBX->m_data.m_value, data);
  _RBX->m_updateTime.m_hasValue = 1;
  _RBX->m_updateTime.m_value = 0i64;
}

/*
==============
bdUserPresenceInfo::bdUserPresenceInfo
==============
*/
void bdUserPresenceInfo::bdUserPresenceInfo(bdUserPresenceInfo *this, const bool online, const char *platform, const bdPresenceData *data, const unsigned __int64 updateTime)
{
  _BYTE *v8; 
  unsigned __int64 v9; 
  __int128 Buf; 
  char v11; 

  _RBX = this;
  this->m_online = online;
  if ( bdStrlcpy((char *const)&Buf, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  _RBX->m_platform.m_hasValue = 1;
  __asm
  {
    vmovups xmm0, [rsp+88h+Buf]
    vmovups xmmword ptr [rbx+2], xmm0
  }
  _RBX->m_platform.m_value.m_buffer[16] = v11;
  v8 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v8 )
    v9 = v8 - (_BYTE *)&Buf;
  else
    v9 = 17i64;
  bdHandleAssert(v9 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  _RBX->m_data.m_hasValue = 1;
  bdPresenceData::bdPresenceData(&_RBX->m_data.m_value, data);
  _RBX->m_updateTime.m_hasValue = 1;
  _RBX->m_updateTime.m_value = updateTime;
}

/*
==============
bdUserPresenceInfo::~bdUserPresenceInfo
==============
*/
void bdUserPresenceInfo::~bdUserPresenceInfo(bdUserPresenceInfo *this)
{
  bdPresenceData::~bdPresenceData(&this->m_data.m_value);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_platform.m_value);
}

/*
==============
bdUserPresenceInfo::operator=
==============
*/
bdUserPresenceInfo *bdUserPresenceInfo::operator=(bdUserPresenceInfo *this, const bdUserPresenceInfo *other)
{
  bdStructOptionalObject<unsigned __int64> *p_m_updateTime; 

  if ( this != other )
  {
    this->m_online = other->m_online;
    _RCX = (bdUserPresenceInfo *)&other->m_platform;
    _RDX = &this->m_platform;
    if ( &this->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)_RCX )
    {
      _RDX->m_hasValue = _RCX->m_online;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+1]
        vmovups xmmword ptr [rdx+1], xmm0
      }
      this->m_platform.m_value.m_buffer[16] = _RCX->m_platform.m_value.m_buffer[15];
    }
    if ( &this->m_data != &other->m_data )
    {
      this->m_data.m_hasValue = other->m_data.m_hasValue;
      bdCrossPlatformUserMetadata::operator=(&this->m_data.m_value, &other->m_data.m_value);
    }
    p_m_updateTime = &other->m_updateTime;
    if ( &this->m_updateTime != p_m_updateTime )
    {
      this->m_updateTime.m_hasValue = p_m_updateTime->m_hasValue;
      this->m_updateTime.m_value = p_m_updateTime->m_value;
    }
  }
  return this;
}

/*
==============
bdUserPresenceInfo::deserialize
==============
*/
_BOOL8 bdUserPresenceInfo::deserialize(bdUserPresenceInfo *this, const char *presenceKey, bdJSONDeserializer *deserializer)
{
  bool Object; 
  size_t v7; 
  bool UInt64; 
  unsigned __int64 v9; 
  char v11; 
  _BYTE *v13; 
  unsigned __int64 v14; 
  bool v16; 
  unsigned __int64 v17; 
  bool v18; 
  bdStructFixedSizeString<16> v19; 
  bdJSONDeserializer value; 
  bdPresenceData other; 
  __int64 v22; 
  __int128 Buf; 
  char v24; 
  char Src[8]; 
  __int64 v26; 

  v22 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Object = bdJSONDeserializer::getObject(deserializer, presenceKey, &value);
  v16 = 0;
  *(_QWORD *)Src = 0i64;
  v26 = 0i64;
  v17 = 0i64;
  v7 = 16i64;
  if ( Object && bdJSONDeserializer::getBoolean(&value, "online", &v16) && (!bdJSONDeserializer::hasKey(&value, "platform") || bdJSONDeserializer::getString(&value, "platform", Src, 0x10u)) )
  {
    UInt64 = 1;
    if ( bdJSONDeserializer::hasKey(&value, "updateTime") )
      UInt64 = bdJSONDeserializer::getUInt64(&value, "updateTime", &v17);
  }
  else
  {
    UInt64 = 0;
  }
  bdPresenceData::bdPresenceData(&other);
  if ( UInt64 )
  {
    if ( bdJSONDeserializer::hasKey(&value, "data") )
    {
      if ( !other.deserialize(&other, "data", &value) )
      {
        UInt64 = 0;
        goto LABEL_28;
      }
      UInt64 = 1;
    }
    this->m_online = v16;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v9 = -1i64;
    do
      ++v9;
    while ( Src[v9] );
    if ( v9 < 0x10 )
      v7 = v9;
    memcpy_0(&Buf, Src, v7);
    *((_BYTE *)&Buf + v7) = 0;
    if ( v9 > 0x10 )
    {
      bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    }
    v18 = 1;
    __asm
    {
      vmovups xmm0, [rbp+57h+Buf]
      vmovups xmmword ptr [rbp+57h+var_AF.m_buffer], xmm0
    }
    v11 = v24;
    v19.m_buffer[16] = v24;
    _RAX = &this->m_platform;
    if ( &this->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)&v18 )
    {
      _RAX->m_hasValue = 1;
      __asm { vmovups xmmword ptr [rax+1], xmm0 }
      this->m_platform.m_value.m_buffer[16] = v11;
    }
    bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&v19);
    v13 = memchr_0(&Buf, 0, 0x11ui64);
    if ( v13 )
      v14 = v13 - (_BYTE *)&Buf;
    else
      v14 = 17i64;
    bdHandleAssert(v14 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
    v18 = 1;
    bdPresenceData::bdPresenceData((bdPresenceData *)&v19.m_buffer[7], &other);
    if ( &this->m_data != (bdStructOptionalObject<bdPresenceData> *)&v18 )
    {
      this->m_data.m_hasValue = v18;
      bdCrossPlatformUserMetadata::operator=(&this->m_data.m_value, (const bdCrossPlatformUserMetadata *)&v19.m_buffer[7]);
    }
    bdPresenceData::~bdPresenceData((bdPresenceData *)&v19.m_buffer[7]);
    if ( &this->m_updateTime != (bdStructOptionalObject<unsigned __int64> *)&Buf )
    {
      this->m_updateTime.m_hasValue = 1;
      this->m_updateTime.m_value = v17;
    }
  }
LABEL_28:
  bdPresenceData::~bdPresenceData(&other);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return UInt64;
}

/*
==============
bdUserPresenceInfo::getData
==============
*/
bdPresenceData *bdUserPresenceInfo::getData(bdUserPresenceInfo *this, bdPresenceData *result)
{
  bdHandleAssert(this->m_data.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdPresenceData>::getValue", 0x3Cu, "Has no value");
  bdPresenceData::bdPresenceData(result, &this->m_data.m_value);
  return result;
}

/*
==============
bdUserPresenceInfo::getOnline
==============
*/
_BOOL8 bdUserPresenceInfo::getOnline(bdUserPresenceInfo *this)
{
  return this->m_online;
}

/*
==============
bdUserPresenceInfo::getPlatform
==============
*/
bdStructFixedSizeString<16> *bdUserPresenceInfo::getPlatform(bdUserPresenceInfo *this)
{
  bdHandleAssert(this->m_platform.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructFixedSizeString<16> >::getValue", 0x3Cu, "Has no value");
  return &this->m_platform.m_value;
}

/*
==============
bdUserPresenceInfo::getUpdateTime
==============
*/
unsigned __int64 bdUserPresenceInfo::getUpdateTime(bdUserPresenceInfo *this)
{
  bdHandleAssert(this->m_updateTime.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<unsigned __int64>::getValue", 0x3Cu, "Has no value");
  return this->m_updateTime.m_value;
}

/*
==============
bdUserPresenceInfo::hasData
==============
*/
_BOOL8 bdUserPresenceInfo::hasData(bdUserPresenceInfo *this)
{
  return this->m_data.m_hasValue;
}

/*
==============
bdUserPresenceInfo::hasPlatform
==============
*/
_BOOL8 bdUserPresenceInfo::hasPlatform(bdUserPresenceInfo *this)
{
  return this->m_platform.m_hasValue;
}

/*
==============
bdUserPresenceInfo::hasUpdateTime
==============
*/
_BOOL8 bdUserPresenceInfo::hasUpdateTime(bdUserPresenceInfo *this)
{
  return this->m_updateTime.m_hasValue;
}

/*
==============
bdUserPresenceInfo::serialize
==============
*/
char bdUserPresenceInfo::serialize(bdUserPresenceInfo *this, bdJSONSerializer *serializer)
{
  bool v4; 
  const bdStructFixedSizeString<16> *Value; 
  bdStructOptionalObject<bdPresenceData> *p_m_data; 
  const bdPresenceData *v7; 

  if ( !serializer )
    return 1;
  v4 = bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeBoolean(serializer, "online", this->m_online);
  if ( this->m_platform.m_hasValue )
    v4 = v4 && (Value = bdStructOptionalObject<bdStructFixedSizeString<16>>::getValue(&this->m_platform), bdJSONSerializer::writeString(serializer, "platform", Value->m_buffer));
  if ( (p_m_data = &this->m_data, v4) && (!p_m_data->m_hasValue || (v7 = bdStructOptionalObject<bdPresenceData>::getValue(p_m_data), v7->serialize(&v7->bdCrossPlatformUserMetadata, "data", serializer))) && bdJSONSerializer::writeEndObject(serializer) )
    return 1;
  else
    return 0;
}

/*
==============
bdUserPresenceInfo::setData
==============
*/
void bdUserPresenceInfo::setData(bdUserPresenceInfo *this, const bdPresenceData *data)
{
  bool v3; 
  bdPresenceData v4; 

  v3 = 1;
  bdPresenceData::bdPresenceData(&v4, data);
  if ( &this->m_data != (bdStructOptionalObject<bdPresenceData> *)&v3 )
  {
    this->m_data.m_hasValue = v3;
    bdCrossPlatformUserMetadata::operator=(&this->m_data.m_value, &v4);
  }
  bdPresenceData::~bdPresenceData(&v4);
}

/*
==============
bdUserPresenceInfo::setOnline
==============
*/
void bdUserPresenceInfo::setOnline(bdUserPresenceInfo *this, const bool online)
{
  this->m_online = online;
}

/*
==============
bdUserPresenceInfo::setPlatform
==============
*/
void bdUserPresenceInfo::setPlatform(bdUserPresenceInfo *this, const char *platform)
{
  char v4; 
  _BYTE *v6; 
  unsigned __int64 v7; 
  __int128 Buf; 
  char v9; 
  char v10; 
  bdStructFixedSizeString<16> v11; 

  if ( bdStrlcpy((char *const)&Buf, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  v10 = 1;
  __asm
  {
    vmovups xmm0, [rsp+88h+Buf]
    vmovups xmmword ptr [rsp+88h+var_27.m_buffer], xmm0
  }
  v4 = v9;
  v11.m_buffer[16] = v9;
  _RAX = &this->m_platform;
  if ( &this->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)&v10 )
  {
    _RAX->m_hasValue = 1;
    __asm { vmovups xmmword ptr [rax+1], xmm0 }
    this->m_platform.m_value.m_buffer[16] = v4;
  }
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&v11);
  v6 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v6 )
    v7 = v6 - (_BYTE *)&Buf;
  else
    v7 = 17i64;
  bdHandleAssert(v7 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
}

/*
==============
bdUserPresenceInfo::setUpdateTime
==============
*/
void bdUserPresenceInfo::setUpdateTime(bdUserPresenceInfo *this, const unsigned __int64 updateTime)
{
  bdStructOptionalObject<unsigned __int64> *p_m_updateTime; 
  char v3; 

  p_m_updateTime = &this->m_updateTime;
  if ( p_m_updateTime != (bdStructOptionalObject<unsigned __int64> *)&v3 )
  {
    p_m_updateTime->m_hasValue = 1;
    p_m_updateTime->m_value = updateTime;
  }
}

