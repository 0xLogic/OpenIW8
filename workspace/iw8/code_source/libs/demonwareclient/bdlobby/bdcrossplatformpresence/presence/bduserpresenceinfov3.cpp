/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/

void __fastcall bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bdUserPresenceInfoV3 *__that)
{
  ??0bdUserPresenceInfoV3@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdUserPresenceInfoV3::setPresenceToken
==============
*/

void __fastcall bdUserPresenceInfoV3::setPresenceToken(bdUserPresenceInfoV3 *this, const bdLocalizationToken *presenceToken)
{
  ?setPresenceToken@bdUserPresenceInfoV3@@QEAAXAEBVbdLocalizationToken@@@Z(this, presenceToken);
}

/*
==============
bdUserPresenceInfoV3::getTitleToken
==============
*/

const bdLocalizationToken *__fastcall bdUserPresenceInfoV3::getTitleToken(bdUserPresenceInfoV3 *this)
{
  return ?getTitleToken@bdUserPresenceInfoV3@@QEBAAEBVbdLocalizationToken@@XZ(this);
}

/*
==============
bdUserPresenceInfoV3::setData
==============
*/

void __fastcall bdUserPresenceInfoV3::setData(bdUserPresenceInfoV3 *this, const bdPresenceData *data)
{
  ?setData@bdUserPresenceInfoV3@@QEAAXAEBVbdPresenceData@@@Z(this, data);
}

/*
==============
bdUserPresenceInfoV3::~bdUserPresenceInfoV3
==============
*/

void __fastcall bdUserPresenceInfoV3::~bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this)
{
  ??1bdUserPresenceInfoV3@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceInfoV3::getOnline
==============
*/

bool __fastcall bdUserPresenceInfoV3::getOnline(bdUserPresenceInfoV3 *this)
{
  return ?getOnline@bdUserPresenceInfoV3@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfoV3::getUpdateTime
==============
*/

unsigned __int64 __fastcall bdUserPresenceInfoV3::getUpdateTime(bdUserPresenceInfoV3 *this)
{
  return ?getUpdateTime@bdUserPresenceInfoV3@@QEBA_KXZ(this);
}

/*
==============
bdUserPresenceInfoV3::setTitleToken
==============
*/

void __fastcall bdUserPresenceInfoV3::setTitleToken(bdUserPresenceInfoV3 *this, const bdLocalizationToken *titleToken)
{
  ?setTitleToken@bdUserPresenceInfoV3@@QEAAXAEBVbdLocalizationToken@@@Z(this, titleToken);
}

/*
==============
bdUserPresenceInfoV3::hasTitleToken
==============
*/

bool __fastcall bdUserPresenceInfoV3::hasTitleToken(bdUserPresenceInfoV3 *this)
{
  return ?hasTitleToken@bdUserPresenceInfoV3@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfoV3::getData
==============
*/

bdPresenceData *__fastcall bdUserPresenceInfoV3::getData(bdUserPresenceInfoV3 *this, bdPresenceData *result)
{
  return ?getData@bdUserPresenceInfoV3@@QEBA?AVbdPresenceData@@XZ(this, result);
}

/*
==============
bdUserPresenceInfoV3::serialize
==============
*/

bool __fastcall bdUserPresenceInfoV3::serialize(bdUserPresenceInfoV3 *this, bdJSONSerializer *serializer)
{
  return ?serialize@bdUserPresenceInfoV3@@QEBA_NPEAVbdJSONSerializer@@@Z(this, serializer);
}

/*
==============
bdUserPresenceInfoV3::hasUpdateTime
==============
*/

bool __fastcall bdUserPresenceInfoV3::hasUpdateTime(bdUserPresenceInfoV3 *this)
{
  return ?hasUpdateTime@bdUserPresenceInfoV3@@QEBA_NXZ(this);
}

/*
==============
bdLocalizationToken::bdLocalizationToken
==============
*/

void __fastcall bdLocalizationToken::bdLocalizationToken(bdLocalizationToken *this)
{
  ??0bdLocalizationToken@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceInfoV3::getTitleID
==============
*/

unsigned int __fastcall bdUserPresenceInfoV3::getTitleID(bdUserPresenceInfoV3 *this)
{
  return ?getTitleID@bdUserPresenceInfoV3@@QEBAIXZ(this);
}

/*
==============
bdUserPresenceInfoV3::getPlatform
==============
*/

const char *__fastcall bdUserPresenceInfoV3::getPlatform(bdUserPresenceInfoV3 *this)
{
  return ?getPlatform@bdUserPresenceInfoV3@@QEBAPEBDXZ(this);
}

/*
==============
bdUserPresenceInfoV3::hasTitleID
==============
*/

bool __fastcall bdUserPresenceInfoV3::hasTitleID(bdUserPresenceInfoV3 *this)
{
  return ?hasTitleID@bdUserPresenceInfoV3@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfoV3::getPresenceToken
==============
*/

const bdLocalizationToken *__fastcall bdUserPresenceInfoV3::getPresenceToken(bdUserPresenceInfoV3 *this)
{
  return ?getPresenceToken@bdUserPresenceInfoV3@@QEBAAEBVbdLocalizationToken@@XZ(this);
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/

void __fastcall bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdLocalizationToken *titleToken, const bdLocalizationToken *presenceToken, const bdPresenceData *data)
{
  ??0bdUserPresenceInfoV3@@QEAA@_NPEBDAEBVbdLocalizationToken@@2AEBVbdPresenceData@@@Z(this, online, platform, titleToken, presenceToken, data);
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/

void __fastcall bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdLocalizationToken *titleToken, const bdLocalizationToken *presenceToken, const bdPresenceData *data, const unsigned __int64 updateTime)
{
  ??0bdUserPresenceInfoV3@@QEAA@_NPEBDAEBVbdLocalizationToken@@2AEBVbdPresenceData@@_K@Z(this, online, platform, titleToken, presenceToken, data, updateTime);
}

/*
==============
bdUserPresenceInfoV3::setTitleID
==============
*/

void __fastcall bdUserPresenceInfoV3::setTitleID(bdUserPresenceInfoV3 *this, const unsigned int titleID)
{
  ?setTitleID@bdUserPresenceInfoV3@@QEAAXI@Z(this, titleID);
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/

void __fastcall bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this)
{
  ??0bdUserPresenceInfoV3@@QEAA@XZ(this);
}

/*
==============
bdUserPresenceInfoV3::deserialize
==============
*/

bool __fastcall bdUserPresenceInfoV3::deserialize(bdUserPresenceInfoV3 *this, const char *presenceKey, bdJSONDeserializer *deserializer)
{
  return ?deserialize@bdUserPresenceInfoV3@@QEAA_NPEBDPEAVbdJSONDeserializer@@@Z(this, presenceKey, deserializer);
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/

void __fastcall bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdPresenceData *data)
{
  ??0bdUserPresenceInfoV3@@QEAA@_NPEBDAEBVbdPresenceData@@@Z(this, online, platform, data);
}

/*
==============
bdUserPresenceInfoV3::hasPlatform
==============
*/

bool __fastcall bdUserPresenceInfoV3::hasPlatform(bdUserPresenceInfoV3 *this)
{
  return ?hasPlatform@bdUserPresenceInfoV3@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfoV3::setUpdateTime
==============
*/

void __fastcall bdUserPresenceInfoV3::setUpdateTime(bdUserPresenceInfoV3 *this, const unsigned __int64 updateTime)
{
  ?setUpdateTime@bdUserPresenceInfoV3@@QEAAX_K@Z(this, updateTime);
}

/*
==============
bdUserPresenceInfoV3::hasPresenceToken
==============
*/

bool __fastcall bdUserPresenceInfoV3::hasPresenceToken(bdUserPresenceInfoV3 *this)
{
  return ?hasPresenceToken@bdUserPresenceInfoV3@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfoV3::setPlatform
==============
*/

void __fastcall bdUserPresenceInfoV3::setPlatform(bdUserPresenceInfoV3 *this, const char *platform)
{
  ?setPlatform@bdUserPresenceInfoV3@@QEAAXPEBD@Z(this, platform);
}

/*
==============
bdUserPresenceInfoV3::hasData
==============
*/

bool __fastcall bdUserPresenceInfoV3::hasData(bdUserPresenceInfoV3 *this)
{
  return ?hasData@bdUserPresenceInfoV3@@QEBA_NXZ(this);
}

/*
==============
bdUserPresenceInfoV3::setOnline
==============
*/

void __fastcall bdUserPresenceInfoV3::setOnline(bdUserPresenceInfoV3 *this, const bool online)
{
  ?setOnline@bdUserPresenceInfoV3@@QEAAX_N@Z(this, online);
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/

void __fastcall bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdPresenceData *data, const unsigned __int64 updateTime)
{
  ??0bdUserPresenceInfoV3@@QEAA@_NPEBDAEBVbdPresenceData@@_K@Z(this, online, platform, data, updateTime);
}

/*
==============
bdLocalizationToken::bdLocalizationToken
==============
*/

void __fastcall bdLocalizationToken::bdLocalizationToken(bdLocalizationToken *this, const char *const stringSetIdentifier, const char *const localizationToken, const unsigned __int16 apiVersion)
{
  ??0bdLocalizationToken@@QEAA@QEBD0G@Z(this, stringSetIdentifier, localizationToken, apiVersion);
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/
void bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bdUserPresenceInfoV3 *__that)
{
  this->m_online = __that->m_online;
  this->m_platform = __that->m_platform;
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&this->m_titleToken, &__that->m_titleToken);
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&this->m_presenceToken, &__that->m_presenceToken);
  this->m_titleID.m_hasValue = __that->m_titleID.m_hasValue;
  this->m_titleID.m_value = __that->m_titleID.m_value;
  this->m_data.m_hasValue = __that->m_data.m_hasValue;
  bdPresenceData::bdPresenceData(&this->m_data.m_value, &__that->m_data.m_value);
  this->m_updateTime.m_hasValue = __that->m_updateTime.m_hasValue;
  this->m_updateTime.m_value = __that->m_updateTime.m_value;
}

/*
==============
bdLocalizationToken::bdLocalizationToken
==============
*/
void bdLocalizationToken::bdLocalizationToken(bdLocalizationToken *this, const char *const stringSetIdentifier, const char *const localizationToken, const unsigned __int16 apiVersion)
{
  this->__vftable = (bdLocalizationToken_vtbl *)&bdLocalizationToken::`vftable';
  bdStructFixedSizeString<77>::copy(&this->m_stringSetIdentifier, stringSetIdentifier);
  bdStructFixedSizeString<195>::copy(&this->m_localizationToken, localizationToken);
  this->m_apiVersion = apiVersion;
}

/*
==============
bdLocalizationToken::bdLocalizationToken
==============
*/
void bdLocalizationToken::bdLocalizationToken(bdLocalizationToken *this)
{
  bdStructFixedSizeString<77> *p_m_stringSetIdentifier; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  this->__vftable = (bdLocalizationToken_vtbl *)&bdLocalizationToken::`vftable';
  p_m_stringSetIdentifier = &this->m_stringSetIdentifier;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  if ( p_m_stringSetIdentifier )
  {
    v5 = 77i64;
    if ( v4 < 0x4D )
      v5 = v4;
    memcpy_0(p_m_stringSetIdentifier, (char *)&queryFormat.fmt + 3, v5);
    p_m_stringSetIdentifier->m_buffer[v5] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdLocalizationToken *)-86i64 )
  {
    v6 = 195i64;
    if ( v3 < 0xC3 )
      v6 = v3;
    memcpy_0(&this->m_localizationToken, (char *)&queryFormat.fmt + 3, v6);
    this->m_localizationToken.m_buffer[v6] = 0;
  }
  this->m_apiVersion = 0;
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/
void bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this)
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
  this->m_titleToken.m_hasValue = 0;
  bdLocalizationToken::bdLocalizationToken(&this->m_titleToken.m_value);
  this->m_presenceToken.m_hasValue = 0;
  bdLocalizationToken::bdLocalizationToken(&this->m_presenceToken.m_value);
  this->m_titleID.m_hasValue = 0;
  this->m_data.m_hasValue = 0;
  bdPresenceData::bdPresenceData(&this->m_data.m_value);
  this->m_updateTime.m_hasValue = 1;
  this->m_updateTime.m_value = 0i64;
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/
void bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdLocalizationToken *titleToken, const bdLocalizationToken *presenceToken, const bdPresenceData *data)
{
  _BYTE *v8; 
  unsigned __int64 v9; 
  __int128 Buf; 
  char v11; 

  this->m_online = online;
  if ( bdStrlcpy((char *const)&Buf, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_platform.m_hasValue = 1;
  *(_OWORD *)this->m_platform.m_value.m_buffer = Buf;
  this->m_platform.m_value.m_buffer[16] = v11;
  v8 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v8 )
    v9 = v8 - (_BYTE *)&Buf;
  else
    v9 = 17i64;
  bdHandleAssert(v9 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&this->m_titleToken, titleToken);
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&this->m_presenceToken, presenceToken);
  this->m_titleID.m_hasValue = 0;
  this->m_data.m_hasValue = 1;
  bdPresenceData::bdPresenceData(&this->m_data.m_value, data);
  this->m_updateTime.m_hasValue = 1;
  this->m_updateTime.m_value = 0i64;
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/
void bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdLocalizationToken *titleToken, const bdLocalizationToken *presenceToken, const bdPresenceData *data, const unsigned __int64 updateTime)
{
  _BYTE *v9; 
  unsigned __int64 v10; 
  __int128 Buf; 
  char v12; 

  this->m_online = online;
  if ( bdStrlcpy((char *const)&Buf, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_platform.m_hasValue = 1;
  *(_OWORD *)this->m_platform.m_value.m_buffer = Buf;
  this->m_platform.m_value.m_buffer[16] = v12;
  v9 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v9 )
    v10 = v9 - (_BYTE *)&Buf;
  else
    v10 = 17i64;
  bdHandleAssert(v10 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&this->m_titleToken, titleToken);
  bdStructOptionalObject<bdLocalizationToken>::bdStructOptionalObject<bdLocalizationToken>(&this->m_presenceToken, presenceToken);
  this->m_titleID.m_hasValue = 0;
  this->m_data.m_hasValue = 1;
  bdPresenceData::bdPresenceData(&this->m_data.m_value, data);
  this->m_updateTime.m_hasValue = 1;
  this->m_updateTime.m_value = updateTime;
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/
void bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdPresenceData *data)
{
  _BYTE *v6; 
  unsigned __int64 v7; 
  __int128 Buf; 
  char v9; 

  this->m_online = online;
  if ( bdStrlcpy((char *const)&Buf, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_platform.m_hasValue = 1;
  *(_OWORD *)this->m_platform.m_value.m_buffer = Buf;
  this->m_platform.m_value.m_buffer[16] = v9;
  v6 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v6 )
    v7 = v6 - (_BYTE *)&Buf;
  else
    v7 = 17i64;
  bdHandleAssert(v7 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  this->m_titleToken.m_hasValue = 0;
  bdLocalizationToken::bdLocalizationToken(&this->m_titleToken.m_value);
  this->m_presenceToken.m_hasValue = 0;
  bdLocalizationToken::bdLocalizationToken(&this->m_presenceToken.m_value);
  this->m_titleID.m_hasValue = 0;
  this->m_data.m_hasValue = 1;
  bdPresenceData::bdPresenceData(&this->m_data.m_value, data);
  this->m_updateTime.m_hasValue = 1;
  this->m_updateTime.m_value = 0i64;
}

/*
==============
bdUserPresenceInfoV3::bdUserPresenceInfoV3
==============
*/
void bdUserPresenceInfoV3::bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this, const bool online, const char *platform, const bdPresenceData *data, const unsigned __int64 updateTime)
{
  _BYTE *v7; 
  unsigned __int64 v8; 
  __int128 Buf; 
  char v10; 

  this->m_online = online;
  if ( bdStrlcpy((char *const)&Buf, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  this->m_platform.m_hasValue = 1;
  *(_OWORD *)this->m_platform.m_value.m_buffer = Buf;
  this->m_platform.m_value.m_buffer[16] = v10;
  v7 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v7 )
    v8 = v7 - (_BYTE *)&Buf;
  else
    v8 = 17i64;
  bdHandleAssert(v8 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  this->m_titleToken.m_hasValue = 0;
  bdLocalizationToken::bdLocalizationToken(&this->m_titleToken.m_value);
  this->m_presenceToken.m_hasValue = 0;
  bdLocalizationToken::bdLocalizationToken(&this->m_presenceToken.m_value);
  this->m_titleID.m_hasValue = 0;
  this->m_data.m_hasValue = 1;
  bdPresenceData::bdPresenceData(&this->m_data.m_value, data);
  this->m_updateTime.m_hasValue = 1;
  this->m_updateTime.m_value = updateTime;
}

/*
==============
bdUserPresenceInfoV3::~bdUserPresenceInfoV3
==============
*/
void bdUserPresenceInfoV3::~bdUserPresenceInfoV3(bdUserPresenceInfoV3 *this)
{
  bdPresenceData::~bdPresenceData(&this->m_data.m_value);
  bdLocalizationToken::~bdLocalizationToken(&this->m_presenceToken.m_value);
  bdLocalizationToken::~bdLocalizationToken(&this->m_titleToken.m_value);
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&this->m_platform.m_value);
}

/*
==============
bdUserPresenceInfoV3::deserialize
==============
*/
_BOOL8 bdUserPresenceInfoV3::deserialize(bdUserPresenceInfoV3 *this, const char *presenceKey, bdJSONDeserializer *deserializer)
{
  unsigned __int64 v6; 
  size_t v7; 
  bool UInt64; 
  __int64 v9; 
  __int64 v10; 
  __int128 v11; 
  char v12; 
  _BYTE *v13; 
  unsigned __int64 v14; 
  bool v16; 
  unsigned int v17; 
  bdJSONDeserializer deserializera; 
  bdJSONDeserializer value; 
  unsigned __int64 v20; 
  bdPresenceData other; 
  __int64 v22; 
  __int128 Buf; 
  char v24; 
  bdLocalizationToken v25; 
  bdLocalizationToken v26; 
  char Src[8]; 
  __int64 v28; 
  char buffer[320]; 
  char v30[320]; 

  v22 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  LOBYTE(presenceKey) = bdJSONDeserializer::getObject(deserializer, presenceKey, &value);
  v16 = 0;
  *(_QWORD *)Src = 0i64;
  v28 = 0i64;
  memset_0(buffer, 0, 0x138ui64);
  memset_0(v30, 0, 0x138ui64);
  bdLocalizationToken::bdLocalizationToken(&v26);
  bdLocalizationToken::bdLocalizationToken(&v25);
  v20 = 0i64;
  v17 = 0;
  v6 = -1i64;
  v7 = 16i64;
  if ( !(_BYTE)presenceKey || !bdJSONDeserializer::getBoolean(&value, "online", &v16) || bdJSONDeserializer::hasKey(&value, "platform") && !bdJSONDeserializer::getString(&value, "platform", Src, 0x10u) )
    goto LABEL_20;
  UInt64 = 1;
  if ( bdJSONDeserializer::hasKey(&value, "titleName") )
  {
    if ( !bdJSONDeserializer::getString(&value, "titleName", buffer, 0x138u) )
      goto LABEL_20;
    bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v9 = -1i64;
    do
      ++v9;
    while ( buffer[v9] );
    if ( v9 )
    {
      bdJSONDeserializer::bdJSONDeserializer(&deserializera, buffer);
      UInt64 = bdLocalizationToken::deserialize(&v26, &deserializera);
      bdJSONDeserializer::~bdJSONDeserializer(&deserializera);
      if ( !UInt64 )
        goto LABEL_21;
    }
  }
  if ( !bdJSONDeserializer::hasKey(&value, "presenceString") )
    goto LABEL_17;
  if ( !bdJSONDeserializer::getString(&value, "presenceString", v30, 0x138u) )
  {
LABEL_20:
    UInt64 = 0;
    goto LABEL_21;
  }
  UInt64 = 1;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v10 = -1i64;
  do
    ++v10;
  while ( v30[v10] );
  if ( v10 )
  {
    bdJSONDeserializer::bdJSONDeserializer(&deserializera, v30);
    UInt64 = bdLocalizationToken::deserialize(&v25, &deserializera);
    bdJSONDeserializer::~bdJSONDeserializer(&deserializera);
LABEL_17:
    if ( !UInt64 )
      goto LABEL_21;
  }
  if ( bdJSONDeserializer::hasKey(&value, "updateTime") )
    UInt64 = bdJSONDeserializer::getUInt64(&value, "updateTime", &v20);
LABEL_21:
  bdPresenceData::bdPresenceData(&other);
  if ( !UInt64 )
    goto LABEL_46;
  if ( bdJSONDeserializer::hasKey(&value, "data") )
  {
    if ( !other.deserialize(&other, "data", &value) )
      goto LABEL_38;
    UInt64 = 1;
  }
  if ( !bdJSONDeserializer::hasKey(&value, "titleID") )
    goto LABEL_28;
  if ( !bdJSONDeserializer::getUInt32(&value, "titleID", &v17) )
  {
LABEL_38:
    UInt64 = 0;
    goto LABEL_46;
  }
  UInt64 = 1;
LABEL_28:
  this->m_online = v16;
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v6;
  while ( Src[v6] );
  if ( v6 < 0x10 )
    v7 = v6;
  memcpy_0(&Buf, Src, v7);
  *((_BYTE *)&Buf + v7) = 0;
  if ( v6 > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  LOBYTE(deserializera.m_type) = 1;
  v11 = Buf;
  *(_OWORD *)((char *)&deserializera.m_type + 1) = Buf;
  v12 = v24;
  BYTE1(deserializera.m_end) = v24;
  if ( &this->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)&deserializera )
  {
    this->m_platform.m_hasValue = 1;
    *(_OWORD *)this->m_platform.m_value.m_buffer = v11;
    this->m_platform.m_value.m_buffer[16] = v12;
  }
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>((bdStructFixedSizeString<16> *)((char *)&deserializera.m_type + 1));
  v13 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v13 )
    v14 = v13 - (_BYTE *)&Buf;
  else
    v14 = 17i64;
  bdHandleAssert(v14 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  this->m_titleToken.m_hasValue = 1;
  this->m_titleToken.m_value.m_stringSetIdentifier = v26.m_stringSetIdentifier;
  this->m_titleToken.m_value.m_localizationToken = v26.m_localizationToken;
  this->m_titleToken.m_value.m_apiVersion = v26.m_apiVersion;
  this->m_presenceToken.m_hasValue = 1;
  this->m_presenceToken.m_value.m_stringSetIdentifier = v25.m_stringSetIdentifier;
  this->m_presenceToken.m_value.m_localizationToken = v25.m_localizationToken;
  this->m_presenceToken.m_value.m_apiVersion = v25.m_apiVersion;
  if ( &this->m_titleID != (bdStructOptionalObject<unsigned int> *)&Buf )
  {
    this->m_titleID.m_hasValue = 1;
    this->m_titleID.m_value = v17;
  }
  LOBYTE(deserializera.m_type) = 1;
  bdPresenceData::bdPresenceData((bdPresenceData *)&deserializera.m_ptr, &other);
  if ( &this->m_data != (bdStructOptionalObject<bdPresenceData> *)&deserializera )
  {
    this->m_data.m_hasValue = deserializera.m_type;
    bdCrossPlatformUserMetadata::operator=(&this->m_data.m_value, (const bdCrossPlatformUserMetadata *)&deserializera.m_ptr);
  }
  bdPresenceData::~bdPresenceData((bdPresenceData *)&deserializera.m_ptr);
  if ( &this->m_updateTime != (bdStructOptionalObject<unsigned __int64> *)&Buf )
  {
    this->m_updateTime.m_hasValue = 1;
    this->m_updateTime.m_value = v20;
  }
LABEL_46:
  bdPresenceData::~bdPresenceData(&other);
  bdLocalizationToken::~bdLocalizationToken(&v25);
  bdLocalizationToken::~bdLocalizationToken(&v26);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return UInt64;
}

/*
==============
bdUserPresenceInfoV3::getData
==============
*/
bdPresenceData *bdUserPresenceInfoV3::getData(bdUserPresenceInfoV3 *this, bdPresenceData *result)
{
  bdHandleAssert(this->m_data.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdPresenceData>::getValue", 0x3Cu, "Has no value");
  bdPresenceData::bdPresenceData(result, &this->m_data.m_value);
  return result;
}

/*
==============
bdUserPresenceInfoV3::getOnline
==============
*/
_BOOL8 bdUserPresenceInfoV3::getOnline(bdUserPresenceInfoV3 *this)
{
  return this->m_online;
}

/*
==============
bdUserPresenceInfoV3::getPlatform
==============
*/
bdStructFixedSizeString<16> *bdUserPresenceInfoV3::getPlatform(bdUserPresenceInfoV3 *this)
{
  bdHandleAssert(this->m_platform.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdStructFixedSizeString<16> >::getValue", 0x3Cu, "Has no value");
  return &this->m_platform.m_value;
}

/*
==============
bdUserPresenceInfoV3::getPresenceToken
==============
*/
bdLocalizationToken *bdUserPresenceInfoV3::getPresenceToken(bdUserPresenceInfoV3 *this)
{
  bdHandleAssert(this->m_presenceToken.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdLocalizationToken>::getValue", 0x3Cu, "Has no value");
  return &this->m_presenceToken.m_value;
}

/*
==============
bdUserPresenceInfoV3::getTitleID
==============
*/
__int64 bdUserPresenceInfoV3::getTitleID(bdUserPresenceInfoV3 *this)
{
  bdHandleAssert(this->m_titleID.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<unsigned int>::getValue", 0x3Cu, "Has no value");
  return this->m_titleID.m_value;
}

/*
==============
bdUserPresenceInfoV3::getTitleToken
==============
*/
bdLocalizationToken *bdUserPresenceInfoV3::getTitleToken(bdUserPresenceInfoV3 *this)
{
  bdHandleAssert(this->m_titleToken.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<class bdLocalizationToken>::getValue", 0x3Cu, "Has no value");
  return &this->m_titleToken.m_value;
}

/*
==============
bdUserPresenceInfoV3::getUpdateTime
==============
*/
unsigned __int64 bdUserPresenceInfoV3::getUpdateTime(bdUserPresenceInfoV3 *this)
{
  bdHandleAssert(this->m_updateTime.m_hasValue, "m_hasValue", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructoptionalobject.inl", "bdStructOptionalObject<unsigned __int64>::getValue", 0x3Cu, "Has no value");
  return this->m_updateTime.m_value;
}

/*
==============
bdUserPresenceInfoV3::hasData
==============
*/
_BOOL8 bdUserPresenceInfoV3::hasData(bdUserPresenceInfoV3 *this)
{
  return this->m_data.m_hasValue;
}

/*
==============
bdUserPresenceInfoV3::hasPlatform
==============
*/
_BOOL8 bdUserPresenceInfoV3::hasPlatform(bdUserPresenceInfoV3 *this)
{
  return this->m_platform.m_hasValue;
}

/*
==============
bdUserPresenceInfoV3::hasPresenceToken
==============
*/
_BOOL8 bdUserPresenceInfoV3::hasPresenceToken(bdUserPresenceInfoV3 *this)
{
  return this->m_presenceToken.m_hasValue;
}

/*
==============
bdUserPresenceInfoV3::hasTitleID
==============
*/
_BOOL8 bdUserPresenceInfoV3::hasTitleID(bdUserPresenceInfoV3 *this)
{
  return this->m_titleID.m_hasValue;
}

/*
==============
bdUserPresenceInfoV3::hasTitleToken
==============
*/
_BOOL8 bdUserPresenceInfoV3::hasTitleToken(bdUserPresenceInfoV3 *this)
{
  return this->m_titleToken.m_hasValue;
}

/*
==============
bdUserPresenceInfoV3::hasUpdateTime
==============
*/
_BOOL8 bdUserPresenceInfoV3::hasUpdateTime(bdUserPresenceInfoV3 *this)
{
  return this->m_updateTime.m_hasValue;
}

/*
==============
bdUserPresenceInfoV3::serialize
==============
*/
bool bdUserPresenceInfoV3::serialize(bdUserPresenceInfoV3 *this, bdJSONSerializer *serializer)
{
  bool v4; 
  const bdStructFixedSizeString<16> *Value; 
  bdLocalizationToken *v6; 
  bdLocalizationToken *v7; 
  const bdPresenceData *v8; 
  const unsigned int *v9; 
  bool v10; 
  bdJSONSerializer serializera; 
  char buffer[320]; 

  if ( !serializer )
    return 1;
  v4 = bdJSONSerializer::writeBeginObject(serializer) && bdJSONSerializer::writeBoolean(serializer, "online", this->m_online);
  if ( this->m_platform.m_hasValue )
  {
    if ( v4 )
    {
      Value = bdStructOptionalObject<bdStructFixedSizeString<16>>::getValue(&this->m_platform);
      if ( bdJSONSerializer::writeString(serializer, "platform", Value->m_buffer) )
      {
        v4 = 1;
LABEL_12:
        if ( this->m_titleToken.m_hasValue )
        {
          bdJSONSerializer::bdJSONSerializer(&serializera, buffer, 0x138u);
          v6 = (bdLocalizationToken *)bdStructOptionalObject<bdLocalizationToken>::getValue(&this->m_titleToken);
          v4 = bdLocalizationToken::serialize(v6, &serializera) && bdJSONSerializer::validate(&serializera) && bdJSONSerializer::writeString(serializer, "titleName", buffer);
          bdJSONSerializer::~bdJSONSerializer(&serializera);
        }
        if ( v4 && this->m_presenceToken.m_hasValue )
        {
          bdJSONSerializer::bdJSONSerializer(&serializera, buffer, 0x138u);
          v7 = (bdLocalizationToken *)bdStructOptionalObject<bdLocalizationToken>::getValue(&this->m_presenceToken);
          v4 = bdLocalizationToken::serialize(v7, &serializera) && bdJSONSerializer::validate(&serializera) && bdJSONSerializer::writeString(serializer, "presenceString", buffer);
          bdJSONSerializer::~bdJSONSerializer(&serializera);
        }
        goto LABEL_27;
      }
    }
    v4 = 0;
  }
  else if ( v4 )
  {
    goto LABEL_12;
  }
LABEL_27:
  if ( this->m_data.m_hasValue )
    v4 = v4 && (v8 = bdStructOptionalObject<bdPresenceData>::getValue(&this->m_data), v8->serialize(&v8->bdCrossPlatformUserMetadata, "data", serializer));
  if ( this->m_titleID.m_hasValue )
  {
    if ( !v4 )
      return 0;
    v9 = bdStructOptionalObject<unsigned int>::getValue(&this->m_titleID);
    v10 = !bdJSONSerializer::writeUInt32(serializer, "titleID", *v9, 0);
  }
  else
  {
    v10 = !v4;
  }
  return !v10 && bdJSONSerializer::writeEndObject(serializer);
}

/*
==============
bdUserPresenceInfoV3::setData
==============
*/
void bdUserPresenceInfoV3::setData(bdUserPresenceInfoV3 *this, const bdPresenceData *data)
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
bdUserPresenceInfoV3::setOnline
==============
*/
void bdUserPresenceInfoV3::setOnline(bdUserPresenceInfoV3 *this, const bool online)
{
  this->m_online = online;
}

/*
==============
bdUserPresenceInfoV3::setPlatform
==============
*/
void bdUserPresenceInfoV3::setPlatform(bdUserPresenceInfoV3 *this, const char *platform)
{
  __int128 v3; 
  char v4; 
  _BYTE *v5; 
  unsigned __int64 v6; 
  bdStructFixedSizeString<16> Buf; 
  char v8; 
  bdStructFixedSizeString<16> v9; 

  if ( bdStrlcpy(Buf.m_buffer, platform, 0x11ui64) > 0x10 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
  v8 = 1;
  v3 = *(_OWORD *)Buf.m_buffer;
  v9 = Buf;
  v4 = Buf.m_buffer[16];
  if ( &this->m_platform != (bdStructOptionalObject<bdStructFixedSizeString<16> > *)&v8 )
  {
    this->m_platform.m_hasValue = 1;
    *(_OWORD *)this->m_platform.m_value.m_buffer = v3;
    this->m_platform.m_value.m_buffer[16] = v4;
  }
  bdStructFixedSizeString<16>::~bdStructFixedSizeString<16>(&v9);
  v5 = memchr_0(&Buf, 0, 0x11ui64);
  if ( v5 )
    v6 = v5 - (_BYTE *)&Buf;
  else
    v6 = 17i64;
  bdHandleAssert(v6 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
}

/*
==============
bdUserPresenceInfoV3::setPresenceToken
==============
*/
void bdUserPresenceInfoV3::setPresenceToken(bdUserPresenceInfoV3 *this, const bdLocalizationToken *presenceToken)
{
  this->m_presenceToken.m_hasValue = 1;
  this->m_presenceToken.m_value.m_stringSetIdentifier = presenceToken->m_stringSetIdentifier;
  this->m_presenceToken.m_value.m_localizationToken = presenceToken->m_localizationToken;
  this->m_presenceToken.m_value.m_apiVersion = presenceToken->m_apiVersion;
}

/*
==============
bdUserPresenceInfoV3::setTitleID
==============
*/
void bdUserPresenceInfoV3::setTitleID(bdUserPresenceInfoV3 *this, const unsigned int titleID)
{
  bdStructOptionalObject<unsigned int> *p_m_titleID; 
  char v3; 

  p_m_titleID = &this->m_titleID;
  if ( p_m_titleID != (bdStructOptionalObject<unsigned int> *)&v3 )
  {
    p_m_titleID->m_hasValue = 1;
    p_m_titleID->m_value = titleID;
  }
}

/*
==============
bdUserPresenceInfoV3::setTitleToken
==============
*/
void bdUserPresenceInfoV3::setTitleToken(bdUserPresenceInfoV3 *this, const bdLocalizationToken *titleToken)
{
  this->m_titleToken.m_hasValue = 1;
  this->m_titleToken.m_value.m_stringSetIdentifier = titleToken->m_stringSetIdentifier;
  this->m_titleToken.m_value.m_localizationToken = titleToken->m_localizationToken;
  this->m_titleToken.m_value.m_apiVersion = titleToken->m_apiVersion;
}

/*
==============
bdUserPresenceInfoV3::setUpdateTime
==============
*/
void bdUserPresenceInfoV3::setUpdateTime(bdUserPresenceInfoV3 *this, const unsigned __int64 updateTime)
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

