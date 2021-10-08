/*
==============
bdObjectStoreTag::bdObjectStoreTag
==============
*/

void __fastcall bdObjectStoreTag::bdObjectStoreTag(bdObjectStoreTag *this, const char *const value)
{
  ??0bdObjectStoreTag@@QEAA@QEBD@Z(this, value);
}

/*
==============
bdObjectStoreTag::getKey
==============
*/

const char *__fastcall bdObjectStoreTag::getKey(bdObjectStoreTag *this)
{
  return ?getKey@bdObjectStoreTag@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreTag::bdObjectStoreTag
==============
*/

void __fastcall bdObjectStoreTag::bdObjectStoreTag(bdObjectStoreTag *this)
{
  ??0bdObjectStoreTag@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreTag::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreTag::deserializeFromJSON(bdObjectStoreTag *this, bdJSONDeserializer *keyJson, bdJSONDeserializer *valueJson, unsigned int elementIndex)
{
  return ?deserializeFromJSON@bdObjectStoreTag@@QEAA_NPEAVbdJSONDeserializer@@0I@Z(this, keyJson, valueJson, elementIndex);
}

/*
==============
bdObjectStoreTag::reset
==============
*/

void __fastcall bdObjectStoreTag::reset(bdObjectStoreTag *this)
{
  ?reset@bdObjectStoreTag@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreTag::deserializeFromJSON
==============
*/

bool __fastcall bdObjectStoreTag::deserializeFromJSON(bdObjectStoreTag *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdObjectStoreTag@@QEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreTag::serializeToJSON
==============
*/

bool __fastcall bdObjectStoreTag::serializeToJSON(bdObjectStoreTag *this, bdJSONSerializer *json)
{
  return ?serializeToJSON@bdObjectStoreTag@@QEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdObjectStoreTag::getValue
==============
*/

const char *__fastcall bdObjectStoreTag::getValue(bdObjectStoreTag *this)
{
  return ?getValue@bdObjectStoreTag@@QEBAPEBDXZ(this);
}

/*
==============
bdObjectStoreTag::bdObjectStoreTag
==============
*/

void __fastcall bdObjectStoreTag::bdObjectStoreTag(bdObjectStoreTag *this, const char *const key, const char *const value)
{
  ??0bdObjectStoreTag@@QEAA@QEBD0@Z(this, key, value);
}

/*
==============
bdObjectStoreTag::init
==============
*/

void __fastcall bdObjectStoreTag::init(bdObjectStoreTag *this, const char *const value)
{
  ?init@bdObjectStoreTag@@QEAAXQEBD@Z(this, value);
}

/*
==============
bdObjectStoreTag::isValueOnlyTag
==============
*/

bool __fastcall bdObjectStoreTag::isValueOnlyTag(bdObjectStoreTag *this)
{
  return ?isValueOnlyTag@bdObjectStoreTag@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreTag::init
==============
*/

void __fastcall bdObjectStoreTag::init(bdObjectStoreTag *this, const char *const key, const char *const value)
{
  ?init@bdObjectStoreTag@@QEAAXQEBD0@Z(this, key, value);
}

/*
==============
bdObjectStoreTag::bdObjectStoreTag
==============
*/
void bdObjectStoreTag::bdObjectStoreTag(bdObjectStoreTag *this, const char *const key, const char *const value)
{
  _BYTE *v6; 
  __int64 v7; 
  _BYTE *v8; 
  __int64 v9; 

  v6 = memchr_0(key, 0, 0x21ui64);
  v7 = 33i64;
  if ( v6 )
    v7 = v6 - key;
  bdHandleAssert(v7 != 0, "bdStrnlen(key, BD_OBJECTSTORE_MAX_TAG_KEY_LENGTH) > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoretag.cpp", "bdObjectStoreTag::init", 0x1Eu, "Key must be > 0 in length.");
  v8 = memchr_0(value, 0, 0x21ui64);
  v9 = 33i64;
  if ( v8 )
    v9 = v8 - value;
  bdHandleAssert(v9 != 0, "bdStrnlen(value, BD_OBJECTSTORE_MAX_TAG_VALUE_LENGTH) > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoretag.cpp", "bdObjectStoreTag::init", 0x1Fu, "Value must be > 0 in length.");
  bdStrlcpy(this->m_key, key, 0x21ui64);
  bdStrlcpy(this->m_value, value, 0x21ui64);
}

/*
==============
bdObjectStoreTag::bdObjectStoreTag
==============
*/
void bdObjectStoreTag::bdObjectStoreTag(bdObjectStoreTag *this, const char *const value)
{
  __int64 v4; 

  bdHandleAssert(value != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( value[v4] );
  bdHandleAssert(v4 != 0, "bdStrlen(value) > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoretag.cpp", "bdObjectStoreTag::init", 0x27u, "Value must be > 0 in length.");
  bdStrlcpy(this->m_value, value, 0x21ui64);
  *(_QWORD *)this->m_key = 0i64;
  *(_QWORD *)&this->m_key[8] = 0i64;
  *(_QWORD *)&this->m_key[16] = 0i64;
  *(_QWORD *)&this->m_key[24] = 0i64;
  this->m_key[32] = 0;
}

/*
==============
bdObjectStoreTag::bdObjectStoreTag
==============
*/
void bdObjectStoreTag::bdObjectStoreTag(bdObjectStoreTag *this)
{
  *(_QWORD *)this->m_key = 0i64;
  *(_QWORD *)&this->m_key[8] = 0i64;
  *(_QWORD *)&this->m_key[16] = 0i64;
  *(_QWORD *)&this->m_key[24] = 0i64;
  *(_QWORD *)&this->m_key[32] = 0i64;
  *(_QWORD *)&this->m_value[7] = 0i64;
  *(_QWORD *)&this->m_value[15] = 0i64;
  *(_QWORD *)&this->m_value[23] = 0i64;
  *(_WORD *)&this->m_value[31] = 0;
}

/*
==============
bdObjectStoreTag::deserializeFromJSON
==============
*/
bool bdObjectStoreTag::deserializeFromJSON(bdObjectStoreTag *this, bdJSONDeserializer *keyJson, bdJSONDeserializer *valueJson, unsigned int elementIndex)
{
  if ( bdJSONDeserializer::getNull(keyJson, "key") )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreTag", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoretag.cpp", "bdObjectStoreTag::deserializeFromJSON", 0x6Au, "Value-only tags should not be grouped.");
    return 0;
  }
  return bdJSONDeserializer::getString(keyJson, "key", this->m_key, 0x21u) && bdJSONDeserializer::getString(valueJson, elementIndex, this->m_value, 0x21u);
}

/*
==============
bdObjectStoreTag::deserializeFromJSON
==============
*/
char bdObjectStoreTag::deserializeFromJSON(bdObjectStoreTag *this, bdJSONDeserializer *json)
{
  char *m_value; 
  char result; 

  if ( bdJSONDeserializer::getNull(json, "key") )
  {
    *(_QWORD *)this->m_key = 0i64;
    *(_QWORD *)&this->m_key[8] = 0i64;
    *(_QWORD *)&this->m_key[16] = 0i64;
    *(_QWORD *)&this->m_key[24] = 0i64;
    this->m_key[32] = 0;
  }
  else if ( !bdJSONDeserializer::getString(json, "key", this->m_key, 0x21u) )
  {
    m_value = this->m_value;
LABEL_4:
    *(_QWORD *)this->m_key = 0i64;
    result = 0;
    *(_QWORD *)&this->m_key[8] = 0i64;
    *(_QWORD *)&this->m_key[16] = 0i64;
    *(_QWORD *)&this->m_key[24] = 0i64;
    this->m_key[32] = 0;
    *(_QWORD *)m_value = 0i64;
    *((_QWORD *)m_value + 1) = 0i64;
    *((_QWORD *)m_value + 2) = 0i64;
    *((_QWORD *)m_value + 3) = 0i64;
    m_value[32] = 0;
    return result;
  }
  m_value = this->m_value;
  if ( !bdJSONDeserializer::getString(json, (const char *const)&stru_143CE7590, this->m_value, 0x21u) )
    goto LABEL_4;
  return 1;
}

/*
==============
bdObjectStoreTag::getKey
==============
*/
bdObjectStoreTag *bdObjectStoreTag::getKey(bdObjectStoreTag *this)
{
  return this;
}

/*
==============
bdObjectStoreTag::getValue
==============
*/
char *bdObjectStoreTag::getValue(bdObjectStoreTag *this)
{
  return this->m_value;
}

/*
==============
bdObjectStoreTag::init
==============
*/
void bdObjectStoreTag::init(bdObjectStoreTag *this, const char *const key, const char *const value)
{
  _BYTE *v6; 
  __int64 v7; 
  _BYTE *v8; 
  __int64 v9; 

  v6 = memchr_0(key, 0, 0x21ui64);
  v7 = 33i64;
  if ( v6 )
    v7 = v6 - key;
  bdHandleAssert(v7 != 0, "bdStrnlen(key, BD_OBJECTSTORE_MAX_TAG_KEY_LENGTH) > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoretag.cpp", "bdObjectStoreTag::init", 0x1Eu, "Key must be > 0 in length.");
  v8 = memchr_0(value, 0, 0x21ui64);
  v9 = 33i64;
  if ( v8 )
    v9 = v8 - value;
  bdHandleAssert(v9 != 0, "bdStrnlen(value, BD_OBJECTSTORE_MAX_TAG_VALUE_LENGTH) > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoretag.cpp", "bdObjectStoreTag::init", 0x1Fu, "Value must be > 0 in length.");
  bdStrlcpy(this->m_key, key, 0x21ui64);
  bdStrlcpy(this->m_value, value, 0x21ui64);
}

/*
==============
bdObjectStoreTag::init
==============
*/
void bdObjectStoreTag::init(bdObjectStoreTag *this, const char *const value)
{
  __int64 v4; 

  bdHandleAssert(value != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v4 = -1i64;
  do
    ++v4;
  while ( value[v4] );
  bdHandleAssert(v4 != 0, "bdStrlen(value) > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoretag.cpp", "bdObjectStoreTag::init", 0x27u, "Value must be > 0 in length.");
  bdStrlcpy(this->m_value, value, 0x21ui64);
  *(_QWORD *)this->m_key = 0i64;
  *(_QWORD *)&this->m_key[8] = 0i64;
  *(_QWORD *)&this->m_key[16] = 0i64;
  *(_QWORD *)&this->m_key[24] = 0i64;
  this->m_key[32] = 0;
}

/*
==============
bdObjectStoreTag::isValueOnlyTag
==============
*/
bool bdObjectStoreTag::isValueOnlyTag(bdObjectStoreTag *this)
{
  return !strncmp(this->m_key, (const char *)&queryFormat.fmt + 3, 0x21ui64) && strncmp(this->m_value, (const char *)&queryFormat.fmt + 3, 0x21ui64);
}

/*
==============
bdObjectStoreTag::reset
==============
*/
void bdObjectStoreTag::reset(bdObjectStoreTag *this)
{
  *(_QWORD *)this->m_key = 0i64;
  *(_QWORD *)&this->m_key[8] = 0i64;
  *(_QWORD *)&this->m_key[16] = 0i64;
  *(_QWORD *)&this->m_key[24] = 0i64;
  *(_QWORD *)&this->m_key[32] = 0i64;
  *(_QWORD *)&this->m_value[7] = 0i64;
  *(_QWORD *)&this->m_value[15] = 0i64;
  *(_QWORD *)&this->m_value[23] = 0i64;
  *(_WORD *)&this->m_value[31] = 0;
}

/*
==============
bdObjectStoreTag::serializeToJSON
==============
*/
bool bdObjectStoreTag::serializeToJSON(bdObjectStoreTag *this, bdJSONSerializer *json)
{
  bool v4; 

  v4 = bdJSONSerializer::writeBeginObject(json);
  if ( strncmp(this->m_key, (const char *)&queryFormat.fmt + 3, 0x21ui64) || !strncmp(this->m_value, (const char *)&queryFormat.fmt + 3, 0x21ui64) )
  {
    if ( !v4 || !bdJSONSerializer::writeString(json, "key", this->m_key) )
      return 0;
  }
  else if ( !v4 || !bdJSONSerializer::writeNull(json, "key") )
  {
    return 0;
  }
  return bdJSONSerializer::writeString(json, (const char *)&stru_143CE7590, this->m_value) && bdJSONSerializer::writeEndObject(json);
}

