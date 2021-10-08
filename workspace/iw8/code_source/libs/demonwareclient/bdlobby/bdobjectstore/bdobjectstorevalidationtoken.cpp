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
  _RBX = __that;
  _RDI = this;
  *((_QWORD *)&this->m_validationTokenResult.__vftable + 1) = &bdValidationTokenResult::`vbtable';
  bdReferencable::bdReferencable((bdReferencable *)&this->m_validationTokenResult.gap2824[4], (const bdReferencable *)((char *)&__that->m_validationTokenResult.__vftable + *(int *)(*((_QWORD *)&__that->m_validationTokenResult.__vftable + 1) + 4i64) + 8));
  bdTaskResult::bdTaskResult(&_RDI->m_validationTokenResult, &_RBX->m_validationTokenResult);
  _RDI->m_validationTokenResult.__vftable = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdTaskResult'};
  *(bdValidationTokenResult_vtbl **)((char *)&_RDI->m_validationTokenResult.__vftable + *(int *)(*((_QWORD *)&_RDI->m_validationTokenResult.__vftable + 1) + 4i64) + 8) = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdReferencable'};
  *((_QWORD *)&_RDI->m_validationTokenResult.__vftable + 2) = *((_QWORD *)&_RBX->m_validationTokenResult.__vftable + 2);
  *((_QWORD *)&_RDI->m_validationTokenResult.__vftable + 3) = *((_QWORD *)&_RBX->m_validationTokenResult.__vftable + 3);
  memcpy_0(_RDI->m_validationTokenResult.m_validationToken, _RBX->m_validationTokenResult.m_validationToken, sizeof(_RDI->m_validationTokenResult.m_validationToken));
  _RDI->m_validationTokenResult.m_validationTokenSize = _RBX->m_validationTokenResult.m_validationTokenSize;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+2838h]
    vmovups ymmword ptr [rdi+2838h], ymm0
    vmovups ymm1, ymmword ptr [rbx+2858h]
    vmovups ymmword ptr [rdi+2858h], ymm1
    vmovups ymm0, ymmword ptr [rbx+2878h]
    vmovups ymmword ptr [rdi+2878h], ymm0
    vmovups xmm1, xmmword ptr [rbx+2898h]
    vmovups xmmword ptr [rdi+2898h], xmm1
  }
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

  _RDI = objectID;
  _RBX = this;
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
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rbx+2838h], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rbx+2858h], ymm1
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rbx+2878h], ymm0
    vmovups xmm1, xmmword ptr [rdi+60h]
    vmovups xmmword ptr [rbx+2898h], xmm1
  }
  bdValidationTokenResult::initialize(&_RBX->m_validationTokenResult, dest, v7);
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

