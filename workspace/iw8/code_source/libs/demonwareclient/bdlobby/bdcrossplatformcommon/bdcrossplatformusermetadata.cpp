/*
==============
bdCrossPlatformUserMetadata::readBool
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::readBool(bdCrossPlatformUserMetadata *this, const char *key, bool *value)
{
  return ?readBool@bdCrossPlatformUserMetadata@@QEBA_NPEBDAEA_N@Z(this, key, value);
}

/*
==============
bdCrossPlatformUserMetadata::readString
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::readString(bdCrossPlatformUserMetadata *this, const char *key, bdString *value)
{
  return ?readString@bdCrossPlatformUserMetadata@@QEBA_NPEBDAEAVbdString@@@Z(this, key, value);
}

/*
==============
bdCrossPlatformUserMetadata::writeUInt32
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::writeUInt32(bdCrossPlatformUserMetadata *this, const char *key, const unsigned int value)
{
  return ?writeUInt32@bdCrossPlatformUserMetadata@@QEAA_NPEBDI@Z(this, key, value);
}

/*
==============
bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata
==============
*/

void __fastcall bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(bdCrossPlatformUserMetadata *this, const bdCrossPlatformUserMetadata *other)
{
  ??0bdCrossPlatformUserMetadata@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdCrossPlatformUserMetadata::~bdCrossPlatformUserMetadata
==============
*/

void __fastcall bdCrossPlatformUserMetadata::~bdCrossPlatformUserMetadata(bdCrossPlatformUserMetadata *this)
{
  ??1bdCrossPlatformUserMetadata@@UEAA@XZ(this);
}

/*
==============
bdCrossPlatformUserMetadata::serialize
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::serialize(bdCrossPlatformUserMetadata *this, const char *metadataKey, bdJSONSerializer *serializer)
{
  return ?serialize@bdCrossPlatformUserMetadata@@UEBA_NPEBDPEAVbdJSONSerializer@@@Z(this, metadataKey, serializer);
}

/*
==============
bdCrossPlatformUserMetadata::readUInt32
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::readUInt32(bdCrossPlatformUserMetadata *this, const char *key, unsigned int *value)
{
  return ?readUInt32@bdCrossPlatformUserMetadata@@QEBA_NPEBDAEAI@Z(this, key, value);
}

/*
==============
bdCrossPlatformUserMetadata::operator=
==============
*/

bdCrossPlatformUserMetadata *__fastcall bdCrossPlatformUserMetadata::operator=(bdCrossPlatformUserMetadata *this, const bdCrossPlatformUserMetadata *other)
{
  return ??4bdCrossPlatformUserMetadata@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdCrossPlatformUserMetadata::writeBool
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::writeBool(bdCrossPlatformUserMetadata *this, const char *key, const bool value)
{
  return ?writeBool@bdCrossPlatformUserMetadata@@QEAA_NPEBD_N@Z(this, key, value);
}

/*
==============
bdCrossPlatformUserMetadata::validateString
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::validateString(bdCrossPlatformUserMetadata *this, const char *value)
{
  return ?validateString@bdCrossPlatformUserMetadata@@MEAA_NPEBD@Z(this, value);
}

/*
==============
bdCrossPlatformUserMetadata::getSize
==============
*/

unsigned int __fastcall bdCrossPlatformUserMetadata::getSize(bdCrossPlatformUserMetadata *this)
{
  return ?getSize@bdCrossPlatformUserMetadata@@QEBAIXZ(this);
}

/*
==============
bdCrossPlatformUserMetadata::validateKey
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::validateKey(bdCrossPlatformUserMetadata *this, const char *key)
{
  return ?validateKey@bdCrossPlatformUserMetadata@@MEAA_NPEBD@Z(this, key);
}

/*
==============
bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata
==============
*/

void __fastcall bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(bdCrossPlatformUserMetadata *this)
{
  ??0bdCrossPlatformUserMetadata@@QEAA@XZ(this);
}

/*
==============
bdCrossPlatformUserMetadata::validateSize
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::validateSize(bdCrossPlatformUserMetadata *this)
{
  return ?validateSize@bdCrossPlatformUserMetadata@@MEAA_NXZ(this);
}

/*
==============
bdCrossPlatformUserMetadata::deserialize
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::deserialize(bdCrossPlatformUserMetadata *this, const char *metadataKey, bdJSONDeserializer *deserializer)
{
  return ?deserialize@bdCrossPlatformUserMetadata@@UEAA_NPEBDPEAVbdJSONDeserializer@@@Z(this, metadataKey, deserializer);
}

/*
==============
bdCrossPlatformUserMetadata::writeString
==============
*/

bool __fastcall bdCrossPlatformUserMetadata::writeString(bdCrossPlatformUserMetadata *this, const char *key, const char *value)
{
  return ?writeString@bdCrossPlatformUserMetadata@@QEAA_NPEBD0@Z(this, key, value);
}

/*
==============
bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata
==============
*/
void bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(bdCrossPlatformUserMetadata *this, const bdCrossPlatformUserMetadata *other)
{
  this->__vftable = (bdCrossPlatformUserMetadata_vtbl *)&bdCrossPlatformUserMetadata::`vftable';
  bdJSONValue::bdJSONValue(&this->m_jsonValue, &other->m_jsonValue);
}

/*
==============
bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata
==============
*/
void bdCrossPlatformUserMetadata::bdCrossPlatformUserMetadata(bdCrossPlatformUserMetadata *this)
{
  this->__vftable = (bdCrossPlatformUserMetadata_vtbl *)&bdCrossPlatformUserMetadata::`vftable';
  bdJSONValue::bdJSONValue(&this->m_jsonValue, BD_JSON_OBJECT);
}

/*
==============
bdCrossPlatformUserMetadata::~bdCrossPlatformUserMetadata
==============
*/
void bdCrossPlatformUserMetadata::~bdCrossPlatformUserMetadata(bdCrossPlatformUserMetadata *this)
{
  this->__vftable = (bdCrossPlatformUserMetadata_vtbl *)&bdCrossPlatformUserMetadata::`vftable';
  bdJSONValue::~bdJSONValue(&this->m_jsonValue);
}

/*
==============
bdCrossPlatformUserMetadata::operator=
==============
*/
bdCrossPlatformUserMetadata *bdCrossPlatformUserMetadata::operator=(bdCrossPlatformUserMetadata *this, const bdCrossPlatformUserMetadata *other)
{
  if ( this != other )
    bdJSONValue::operator=(&this->m_jsonValue, &other->m_jsonValue);
  return this;
}

/*
==============
bdCrossPlatformUserMetadata::deserialize
==============
*/
_BOOL8 bdCrossPlatformUserMetadata::deserialize(bdCrossPlatformUserMetadata *this, const char *metadataKey, bdJSONDeserializer *deserializer)
{
  bool Object; 
  unsigned int i; 
  unsigned int v8; 
  bool v9; 
  bdJSONObject *v10; 
  bdJSONValue *v11; 
  bool v12; 
  bool v13; 
  bdJSONObject *v14; 
  bdJSONValue *v15; 
  bool v16; 
  bool v17; 
  bool v18; 
  bdJSONObject *v19; 
  bdJSONValue *v20; 
  bool v21; 
  bool v23; 
  unsigned int number; 
  bdJSONDeserializer value; 
  bdJSONValue other; 
  bdJSONValue v27; 
  bdJSONValue v28; 
  bdJSONDeserializer v29; 
  __int64 v30; 
  char key[32]; 
  char str[256]; 

  v30 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Object = bdJSONDeserializer::getObject(deserializer, metadataKey, &value);
  for ( i = 0; i < value.m_count; ++i )
  {
    if ( !Object )
      break;
    bdJSONDeserializer::bdJSONDeserializer(&v29);
    if ( !bdJSONDeserializer::getFieldByIndex(&value, i, key, 0x18u, &v29) )
    {
      Object = 0;
LABEL_34:
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformUserMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformcommon\\bdcrossplatformusermetadata.cpp", "bdCrossPlatformUserMetadata::deserialize", 0xD2u, "User metadata includes an unexpected bdJSONType (key: %s).", key);
      goto LABEL_35;
    }
    Object = 1;
    if ( bdJSONDeserializer::isNumber(&v29) )
    {
      number = 0;
      if ( !bdJSONDeserializer::getUInt32(&value, key, &number) )
        goto LABEL_32;
      v8 = number;
      v9 = this->validateKey(this, key);
      v10 = bdJSONValue::getObject(&this->m_jsonValue);
      bdJSONValue::bdJSONValue(&other, v8);
      v11 = bdJSONObject::operator[](v10, key);
      bdJSONValue::operator=(v11, &other);
      v12 = v9 && this->validateSize(this);
      bdJSONValue::~bdJSONValue(&other);
      if ( !v12 )
        goto LABEL_32;
      Object = 1;
    }
    else if ( bdJSONDeserializer::isString(&v29) )
    {
      memset_0(str, 0, sizeof(str));
      if ( !bdJSONDeserializer::getString(&value, key, str, 0x100u) )
        goto LABEL_32;
      v13 = this->validateKey(this, key) && this->validateString(this, str);
      v14 = bdJSONValue::getObject(&this->m_jsonValue);
      bdJSONValue::bdJSONValue(&v27, str);
      v15 = bdJSONObject::operator[](v14, key);
      bdJSONValue::operator=(v15, &v27);
      v16 = v13 && this->validateSize(this);
      bdJSONValue::~bdJSONValue(&v27);
      if ( !v16 )
        goto LABEL_32;
      Object = 1;
    }
    else
    {
      if ( !bdJSONDeserializer::isBoolean(&v29) )
        goto LABEL_34;
      v23 = 0;
      if ( !bdJSONDeserializer::getBoolean(&value, key, &v23) )
        goto LABEL_32;
      v17 = v23;
      v18 = this->validateKey(this, key);
      v19 = bdJSONValue::getObject(&this->m_jsonValue);
      bdJSONValue::bdJSONValue(&v28, v17);
      v20 = bdJSONObject::operator[](v19, key);
      bdJSONValue::operator=(v20, &v28);
      v21 = v18 && this->validateSize(this);
      bdJSONValue::~bdJSONValue(&v28);
      if ( !v21 )
      {
LABEL_32:
        Object = 0;
        goto LABEL_35;
      }
      Object = 1;
    }
LABEL_35:
    bdJSONDeserializer::~bdJSONDeserializer(&v29);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return Object;
}

/*
==============
bdCrossPlatformUserMetadata::getSize
==============
*/
int bdCrossPlatformUserMetadata::getSize(bdCrossPlatformUserMetadata *this)
{
  return bdJSONValue::serialize(&this->m_jsonValue, NULL, 0);
}

/*
==============
bdCrossPlatformUserMetadata::readBool
==============
*/
bool bdCrossPlatformUserMetadata::readBool(bdCrossPlatformUserMetadata *this, const char *key, bool *value)
{
  bdJSONObject *Object; 
  bool result; 
  const bdJSONValue *v7; 
  bool Bool; 
  bdJSONValue v9; 

  Object = bdJSONValue::getObject(&this->m_jsonValue);
  result = bdJSONObject::containsKey(Object, key);
  if ( result )
  {
    v7 = bdJSONObject::operator[](Object, key);
    bdJSONValue::bdJSONValue(&v9, v7);
    Bool = bdJSONValue::getBool(&v9, value);
    bdJSONValue::~bdJSONValue(&v9);
    return Bool;
  }
  return result;
}

/*
==============
bdCrossPlatformUserMetadata::readString
==============
*/
bool bdCrossPlatformUserMetadata::readString(bdCrossPlatformUserMetadata *this, const char *key, bdString *value)
{
  bdJSONObject *Object; 
  bool result; 
  const bdJSONValue *v7; 
  bool String; 
  bdJSONValue v9; 

  Object = bdJSONValue::getObject(&this->m_jsonValue);
  result = bdJSONObject::containsKey(Object, key);
  if ( result )
  {
    v7 = bdJSONObject::operator[](Object, key);
    bdJSONValue::bdJSONValue(&v9, v7);
    String = bdJSONValue::getString(&v9, value);
    bdJSONValue::~bdJSONValue(&v9);
    return String;
  }
  return result;
}

/*
==============
bdCrossPlatformUserMetadata::readUInt32
==============
*/
bool bdCrossPlatformUserMetadata::readUInt32(bdCrossPlatformUserMetadata *this, const char *key, unsigned int *value)
{
  bdJSONObject *Object; 
  bool result; 
  const bdJSONValue *v7; 
  bool UInt32; 
  bdJSONValue v9; 

  Object = bdJSONValue::getObject(&this->m_jsonValue);
  result = bdJSONObject::containsKey(Object, key);
  if ( result )
  {
    v7 = bdJSONObject::operator[](Object, key);
    bdJSONValue::bdJSONValue(&v9, v7);
    UInt32 = bdJSONValue::getUInt32(&v9, value);
    bdJSONValue::~bdJSONValue(&v9);
    return UInt32;
  }
  return result;
}

/*
==============
bdCrossPlatformUserMetadata::serialize
==============
*/
char bdCrossPlatformUserMetadata::serialize(bdCrossPlatformUserMetadata *this, const char *metadataKey, bdJSONSerializer *serializer)
{
  bool v5; 
  bdJSONObject *Object; 
  unsigned int m_size; 
  unsigned int i; 
  const bdJSONValue *v9; 
  bdJSONType Type; 
  const char *v11; 
  const char *v12; 
  bool v13; 
  const char *v14; 
  bool v15; 
  unsigned int v16; 
  const char *v17; 
  const char *Buffer; 
  const char *v19; 
  bool v20; 
  char v21; 
  bdString *m_data; 
  __int64 v23; 
  bdString key; 
  bdString v26; 
  __int64 v27; 
  bdArray<bdString> allKeys; 
  bdJSONValue v29; 
  bool value; 
  unsigned int v31; 

  v27 = -2i64;
  if ( !serializer )
    return 1;
  v5 = bdJSONSerializer::writeBeginObject(serializer, metadataKey);
  Object = bdJSONValue::getObject(&this->m_jsonValue);
  allKeys.m_data = NULL;
  *(_QWORD *)&allKeys.m_capacity = 0i64;
  bdJSONObject::getAllKeys(Object, &allKeys);
  m_size = allKeys.m_size;
  if ( allKeys.m_size > 0xA )
    v5 = 0;
  for ( i = 0; i < allKeys.m_size; m_size = allKeys.m_size )
  {
    if ( !v5 )
      goto LABEL_23;
    bdHandleAssert(i < m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdString>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    bdString::bdString(&key, &allKeys.m_data[i]);
    v9 = bdJSONObject::operator[](Object, &key);
    bdJSONValue::bdJSONValue(&v29, v9);
    value = 0;
    v31 = 0;
    bdString::bdString(&v26);
    Type = bdJSONValue::getType(&v29);
    switch ( Type )
    {
      case BD_JSON_STRING:
        if ( !bdJSONValue::getString(&v29, &v26) )
          goto LABEL_18;
        Buffer = bdString::getBuffer(&v26);
        v19 = bdString::getBuffer(&key);
        v15 = bdJSONSerializer::writeString(serializer, v19, Buffer);
        break;
      case BD_JSON_NUMBER:
        if ( !bdJSONValue::getUInt32(&v29, &v31) )
          goto LABEL_18;
        v16 = v31;
        v17 = bdString::getBuffer(&key);
        v15 = bdJSONSerializer::writeUInt32(serializer, v17, v16, 0);
        break;
      case BD_JSON_BOOLEAN:
        if ( !bdJSONValue::getBool(&v29, &value) )
          goto LABEL_18;
        v13 = value;
        v14 = bdString::getBuffer(&key);
        v15 = bdJSONSerializer::writeBoolean(serializer, v14, v13);
        break;
      default:
        v11 = bdJSONTypeString_1[bdJSONValue::getType(&v29)];
        v12 = bdString::getBuffer(&key);
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformUserMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformcommon\\bdcrossplatformusermetadata.cpp", "bdCrossPlatformUserMetadata::serialize", 0xA5u, "Ignoring unexpected bdJSONType: %s = %s", v12, v11);
        goto LABEL_19;
    }
    if ( !v15 )
    {
LABEL_18:
      v5 = 0;
      goto LABEL_19;
    }
    v5 = 1;
LABEL_19:
    bdString::~bdString(&v26);
    bdJSONValue::~bdJSONValue(&v29);
    bdString::~bdString(&key);
    ++i;
  }
  if ( v5 && (v20 = bdJSONSerializer::writeEndObject(serializer), m_size = allKeys.m_size, v20) )
    v21 = 1;
  else
LABEL_23:
    v21 = 0;
  if ( m_size )
  {
    m_data = allKeys.m_data;
    v23 = m_size;
    do
    {
      bdString::~bdString(m_data++);
      --v23;
    }
    while ( v23 );
  }
  bdMemory::deallocate(allKeys.m_data);
  return v21;
}

/*
==============
bdCrossPlatformUserMetadata::validateKey
==============
*/
bool bdCrossPlatformUserMetadata::validateKey(bdCrossPlatformUserMetadata *this, const char *key)
{
  unsigned __int64 v3; 

  bdHandleAssert(key != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( key[v3] );
  return v3 <= 0x18;
}

/*
==============
bdCrossPlatformUserMetadata::validateSize
==============
*/
_BOOL8 bdCrossPlatformUserMetadata::validateSize(bdCrossPlatformUserMetadata *this)
{
  unsigned int v1; 
  bool v2; 
  unsigned int v4; 
  int v5; 

  v1 = bdJSONValue::serialize(&this->m_jsonValue, NULL, 0);
  v2 = v1 <= 0x1000;
  if ( v1 > 0x1000 )
  {
    v5 = 4096;
    v4 = v1;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformUserMetadata", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformcommon\\bdcrossplatformusermetadata.cpp", "bdCrossPlatformUserMetadata::validateSize", 0xE5u, "User metadata size %u exceeds the configured maximum %u.", v4, v5);
  }
  return v2;
}

/*
==============
bdCrossPlatformUserMetadata::validateString
==============
*/
bool bdCrossPlatformUserMetadata::validateString(bdCrossPlatformUserMetadata *this, const char *value)
{
  unsigned __int64 v3; 

  bdHandleAssert(value != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v3 = -1i64;
  do
    ++v3;
  while ( value[v3] );
  return v3 <= 0x100;
}

/*
==============
bdCrossPlatformUserMetadata::writeBool
==============
*/
_BOOL8 bdCrossPlatformUserMetadata::writeBool(bdCrossPlatformUserMetadata *this, const char *key, const bool value)
{
  bool v6; 
  bdJSONObject *Object; 
  bdJSONValue *v8; 
  bool v9; 
  bdJSONValue other; 

  v6 = ((unsigned __int8 (__fastcall *)(bdCrossPlatformUserMetadata *))this->validateKey)(this) != 0;
  Object = bdJSONValue::getObject(&this->m_jsonValue);
  bdJSONValue::bdJSONValue(&other, value);
  v8 = bdJSONObject::operator[](Object, key);
  bdJSONValue::operator=(v8, &other);
  v9 = v6 && this->validateSize(this);
  bdJSONValue::~bdJSONValue(&other);
  return v9;
}

/*
==============
bdCrossPlatformUserMetadata::writeString
==============
*/
_BOOL8 bdCrossPlatformUserMetadata::writeString(bdCrossPlatformUserMetadata *this, const char *key, const char *value)
{
  bool v6; 
  bdJSONObject *Object; 
  bdJSONValue *v8; 
  bool v9; 
  bdJSONValue other; 

  v6 = ((unsigned __int8 (__fastcall *)(bdCrossPlatformUserMetadata *))this->validateKey)(this) && this->validateString(this, value);
  Object = bdJSONValue::getObject(&this->m_jsonValue);
  bdJSONValue::bdJSONValue(&other, value);
  v8 = bdJSONObject::operator[](Object, key);
  bdJSONValue::operator=(v8, &other);
  v9 = v6 && this->validateSize(this);
  bdJSONValue::~bdJSONValue(&other);
  return v9;
}

/*
==============
bdCrossPlatformUserMetadata::writeUInt32
==============
*/
_BOOL8 bdCrossPlatformUserMetadata::writeUInt32(bdCrossPlatformUserMetadata *this, const char *key, const unsigned int value)
{
  bool v6; 
  bdJSONObject *Object; 
  bdJSONValue *v8; 
  bool v9; 
  bdJSONValue other; 

  v6 = ((unsigned __int8 (__fastcall *)(bdCrossPlatformUserMetadata *))this->validateKey)(this) != 0;
  Object = bdJSONValue::getObject(&this->m_jsonValue);
  bdJSONValue::bdJSONValue(&other, value);
  v8 = bdJSONObject::operator[](Object, key);
  bdJSONValue::operator=(v8, &other);
  v9 = v6 && this->validateSize(this);
  bdJSONValue::~bdJSONValue(&other);
  return v9;
}

