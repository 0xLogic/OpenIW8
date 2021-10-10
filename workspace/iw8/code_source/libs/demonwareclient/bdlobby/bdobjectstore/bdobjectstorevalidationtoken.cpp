/*
==============
bdObjectStoreValidationToken::reset
==============
*/

void __fastcall bdObjectStoreValidationToken::reset(bdObjectStoreValidationToken *this)
{
  ?reset@bdObjectStoreValidationToken@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreValidationToken::isSet
==============
*/

bool __fastcall bdObjectStoreValidationToken::isSet(bdObjectStoreValidationToken *this)
{
  return ?isSet@bdObjectStoreValidationToken@@QEBA_NXZ(this);
}

/*
==============
bdObjectStoreValidationToken::getObjectID
==============
*/

const bdObjectStoreObjectID *__fastcall bdObjectStoreValidationToken::getObjectID(bdObjectStoreValidationToken *this)
{
  return ?getObjectID@bdObjectStoreValidationToken@@QEBAAEBVbdObjectStoreObjectID@@XZ(this);
}

/*
==============
bdObjectStoreValidationToken::bdObjectStoreValidationToken
==============
*/

void __fastcall bdObjectStoreValidationToken::bdObjectStoreValidationToken(bdObjectStoreValidationToken *this)
{
  ??0bdObjectStoreValidationToken@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreValidationToken::getValidationTokenResult
==============
*/

bdValidationTokenResult *__fastcall bdObjectStoreValidationToken::getValidationTokenResult(bdObjectStoreValidationToken *this, bdValidationTokenResult *result)
{
  return ?getValidationTokenResult@bdObjectStoreValidationToken@@QEBA?AVbdValidationTokenResult@@XZ(this, result);
}

/*
==============
bdObjectStoreValidationToken::bdObjectStoreValidationToken
==============
*/

void __fastcall bdObjectStoreValidationToken::bdObjectStoreValidationToken(bdObjectStoreValidationToken *this, const bdObjectStoreValidationToken *__that)
{
  ??0bdObjectStoreValidationToken@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdObjectStoreValidationToken::deserialize
==============
*/

bool __fastcall bdObjectStoreValidationToken::deserialize(bdObjectStoreValidationToken *this, bdJSONDeserializer *json, const bdObjectStoreObjectID *objectID)
{
  return ?deserialize@bdObjectStoreValidationToken@@QEAA_NAEAVbdJSONDeserializer@@AEBVbdObjectStoreObjectID@@@Z(this, json, objectID);
}

/*
==============
bdObjectStoreValidationToken::deserializeFromVectorizedEntity
==============
*/

bool __fastcall bdObjectStoreValidationToken::deserializeFromVectorizedEntity(bdObjectStoreValidationToken *this, bdJSONDeserializer *json)
{
  return ?deserializeFromVectorizedEntity@bdObjectStoreValidationToken@@QEAA_NAEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreValidationToken::bdObjectStoreValidationToken
==============
*/
void bdObjectStoreValidationToken::bdObjectStoreValidationToken(bdObjectStoreValidationToken *this, const bdObjectStoreValidationToken *__that)
{
  *((_QWORD *)&this->m_validationTokenResult.__vftable + 1) = &bdValidationTokenResult::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_validationTokenResult.gap2824[4], (const bdReferencable *)((char *)&__that->m_validationTokenResult.__vftable + *(int *)(*((_QWORD *)&__that->m_validationTokenResult.__vftable + 1) + 4i64) + 8));
  bdTaskResult::bdTaskResult(&this->m_validationTokenResult, &__that->m_validationTokenResult);
  this->m_validationTokenResult.__vftable = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdTaskResult'};
  *(bdValidationTokenResult_vtbl **)((char *)&this->m_validationTokenResult.__vftable + *(int *)(*((_QWORD *)&this->m_validationTokenResult.__vftable + 1) + 4i64) + 8) = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->m_validationTokenResult.__vftable + 2) = *((_QWORD *)&__that->m_validationTokenResult.__vftable + 2);
  *((_QWORD *)&this->m_validationTokenResult.__vftable + 3) = *((_QWORD *)&__that->m_validationTokenResult.__vftable + 3);
  memcpy_0(this->m_validationTokenResult.m_validationToken, __that->m_validationTokenResult.m_validationToken, sizeof(this->m_validationTokenResult.m_validationToken));
  this->m_validationTokenResult.m_validationTokenSize = __that->m_validationTokenResult.m_validationTokenSize;
  this->m_objectID = __that->m_objectID;
}

/*
==============
bdObjectStoreValidationToken::bdObjectStoreValidationToken
==============
*/
void bdObjectStoreValidationToken::bdObjectStoreValidationToken(bdObjectStoreValidationToken *this)
{
  bdValidationTokenResult::bdValidationTokenResult(&this->m_validationTokenResult);
  bdObjectStoreObjectID::bdObjectStoreObjectID(&this->m_objectID);
  bdValidationTokenResult::reset(&this->m_validationTokenResult);
  bdObjectStoreObjectID::reset(&this->m_objectID);
}

/*
==============
bdObjectStoreValidationToken::deserialize
==============
*/
char bdObjectStoreValidationToken::deserialize(bdObjectStoreValidationToken *this, bdJSONDeserializer *json, const bdObjectStoreObjectID *objectID)
{
  _BYTE *v5; 
  signed __int64 v6; 
  unsigned int v7; 
  unsigned __int8 dest[10240]; 
  char value[13664]; 

  if ( !bdJSONDeserializer::getString(json, "validationToken", value, 0x3559u) )
    return 0;
  memset_0(dest, 0, sizeof(dest));
  v5 = memchr_0(value, 0, 0x3559ui64);
  if ( v5 )
    v6 = v5 - value;
  else
    LODWORD(v6) = 13657;
  v7 = bdBase64::decode(value, v6, dest, 0x2800u);
  if ( v7 - 1 > 0x27FF )
    return 0;
  *(__m256i *)&this->m_objectID.m_ownerType = *(__m256i *)&objectID->m_ownerType;
  *(__m256i *)&this->m_objectID.m_owner[28] = *(__m256i *)&objectID->m_owner[28];
  *(__m256i *)&this->m_objectID.m_objectName[30] = *(__m256i *)&objectID->m_objectName[30];
  *(_OWORD *)&this->m_objectID.m_objectName[62] = *(_OWORD *)&objectID->m_objectName[62];
  bdValidationTokenResult::initialize(&this->m_validationTokenResult, dest, v7);
  return 1;
}

/*
==============
bdObjectStoreValidationToken::deserializeFromVectorizedEntity
==============
*/
bool bdObjectStoreValidationToken::deserializeFromVectorizedEntity(bdObjectStoreValidationToken *this, bdJSONDeserializer *json)
{
  bool String; 
  char *ObjectName; 
  bool result; 
  bdObjectStoreObjectID objectID; 
  char value[32]; 

  String = bdJSONDeserializer::getString(json, "owner", value, 0x1Eu);
  bdObjectStoreObjectID::bdObjectStoreObjectID(&objectID);
  result = 0;
  if ( String )
  {
    ObjectName = bdObjectStoreObjectID::getObjectName(&objectID);
    if ( bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, ObjectName, 0x41u) && bdObjectStoreObjectID::setOwner(&objectID, value, USER_OWNER_TYPE) && bdObjectStoreValidationToken::deserialize(this, json, &objectID) )
      return 1;
  }
  return result;
}

/*
==============
bdObjectStoreValidationToken::getObjectID
==============
*/
bdObjectStoreObjectID *bdObjectStoreValidationToken::getObjectID(bdObjectStoreValidationToken *this)
{
  return &this->m_objectID;
}

/*
==============
bdObjectStoreValidationToken::getValidationTokenResult
==============
*/
bdValidationTokenResult *bdObjectStoreValidationToken::getValidationTokenResult(bdObjectStoreValidationToken *this, bdValidationTokenResult *result)
{
  *((_QWORD *)&result->__vftable + 1) = &bdValidationTokenResult::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&result->gap2824[4], (const bdReferencable *)((char *)&this->m_validationTokenResult.__vftable + *(int *)(*((_QWORD *)&this->m_validationTokenResult.__vftable + 1) + 4i64) + 8));
  bdTaskResult::bdTaskResult(result, &this->m_validationTokenResult);
  result->__vftable = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdTaskResult'};
  *(bdValidationTokenResult_vtbl **)((char *)&result->__vftable + *(int *)(*((_QWORD *)&result->__vftable + 1) + 4i64) + 8) = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdReferencable'};
  *((_QWORD *)&result->__vftable + 2) = *((_QWORD *)&this->m_validationTokenResult.__vftable + 2);
  *((_QWORD *)&result->__vftable + 3) = *((_QWORD *)&this->m_validationTokenResult.__vftable + 3);
  memcpy_0(result->m_validationToken, this->m_validationTokenResult.m_validationToken, sizeof(result->m_validationToken));
  result->m_validationTokenSize = this->m_validationTokenResult.m_validationTokenSize;
  return result;
}

/*
==============
bdObjectStoreValidationToken::isSet
==============
*/
bool bdObjectStoreValidationToken::isSet(bdObjectStoreValidationToken *this)
{
  return bdValidationTokenResult::getValidationTokenSize(&this->m_validationTokenResult) != 0;
}

/*
==============
bdObjectStoreValidationToken::reset
==============
*/
void bdObjectStoreValidationToken::reset(bdObjectStoreValidationToken *this)
{
  bdValidationTokenResult::reset(&this->m_validationTokenResult);
  bdObjectStoreObjectID::reset(&this->m_objectID);
}

