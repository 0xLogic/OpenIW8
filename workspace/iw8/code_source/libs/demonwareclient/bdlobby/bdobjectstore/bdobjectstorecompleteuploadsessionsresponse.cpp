/*
==============
bdObjectStoreCompleteUploadSessionsResponse::bdObjectStoreCompleteUploadSessionsResponse
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsResponse::bdObjectStoreCompleteUploadSessionsResponse(bdObjectStoreCompleteUploadSessionsResponse *this)
{
  ??0bdObjectStoreCompleteUploadSessionsResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsResponse::deserialize(bdObjectStoreCompleteUploadSessionsResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreCompleteUploadSessionsResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::serialize
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsResponse::serialize(bdObjectStoreCompleteUploadSessionsResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreCompleteUploadSessionsResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::reset
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsResponse::reset(bdObjectStoreCompleteUploadSessionsResponse *this)
{
  ?reset@bdObjectStoreCompleteUploadSessionsResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::deserializeResponse
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionsResponse::deserializeResponse(bdObjectStoreCompleteUploadSessionsResponse *this, bdJSONDeserializer *json)
{
  return ?deserializeResponse@bdObjectStoreCompleteUploadSessionsResponse@@IEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::init
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionsResponse::init(bdObjectStoreCompleteUploadSessionsResponse *this, unsigned int expectedObjectsSize)
{
  ?init@bdObjectStoreCompleteUploadSessionsResponse@@QEAAXI@Z(this, expectedObjectsSize);
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::getMetadataList
==============
*/

const bdArray<bdObjectStoreMetadata> *__fastcall bdObjectStoreCompleteUploadSessionsResponse::getMetadataList(bdObjectStoreCompleteUploadSessionsResponse *this)
{
  return ?getMetadataList@bdObjectStoreCompleteUploadSessionsResponse@@QEBAAEBV?$bdArray@VbdObjectStoreMetadata@@@@XZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::bdObjectStoreCompleteUploadSessionsResponse
==============
*/
void bdObjectStoreCompleteUploadSessionsResponse::bdObjectStoreCompleteUploadSessionsResponse(bdObjectStoreCompleteUploadSessionsResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreCompleteUploadSessionsResponse::`vbtable';
    *((_QWORD *)&this->m_expectedObjectsSize + 1) = &bdReferencable::`vftable';
    *(&this->m_expectedObjectsSize + 4) = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreCompleteUploadSessionsResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreCompleteUploadSessionsResponse_vtbl *)&bdObjectStoreCompleteUploadSessionsResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionsResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionsResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = 0i64;
  bdArray<bdObjectStoreMetadata>::clear((bdArray<bdObjectStoreMetadata> *)&this->bdStructBufferSerializable::__vftable + 1);
  this->m_expectedObjectsSize = 0;
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::deserialize
==============
*/
_BOOL8 bdObjectStoreCompleteUploadSessionsResponse::deserialize(bdObjectStoreCompleteUploadSessionsResponse *this, bdStructBufferDeserializer *deserializer)
{
  bdObjectStoreCompleteUploadSessionsResponse *v4; 
  bool v5; 
  bdJSONDeserializer json; 

  bdJSONDeserializer::bdJSONDeserializer(&json);
  v4 = (bdObjectStoreCompleteUploadSessionsResponse *)((char *)this - 8);
  v5 = bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse(v4, &json, deserializer, NULL) && bdObjectStoreCompleteUploadSessionsResponse::deserializeResponse(v4, &json);
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  return v5;
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::deserializeResponse
==============
*/
_BOOL8 bdObjectStoreCompleteUploadSessionsResponse::deserializeResponse(bdObjectStoreCompleteUploadSessionsResponse *this, bdJSONDeserializer *json)
{
  bool Array; 
  unsigned int m_expectedObjectsSize; 
  unsigned int v6; 
  unsigned int i; 
  bool Object; 
  bdObjectStoreObjectID::bdObjectStoreObjectIDOwnerType v9; 
  unsigned int v10; 
  __int64 v11; 
  bool v12; 
  bdObjectStoreMetadata *v13; 
  unsigned int v15; 
  unsigned int m_count; 
  int v17; 
  unsigned int v18; 
  bdJSONDeserializer v19; 
  bdJSONDeserializer jsona; 
  bdJSONDeserializer value; 
  __int64 v22; 
  bdObjectStoreMetadata *v23; 
  bdObjectStoreMetadata *v24; 
  bdJSONDeserializer v25; 
  bdObjectStoreMetadata __that; 
  char ownerTypeString[24]; 

  v22 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(json, "objects", &value);
  m_expectedObjectsSize = this->m_expectedObjectsSize;
  if ( m_expectedObjectsSize )
  {
    if ( value.m_count != m_expectedObjectsSize )
    {
      v18 = this->m_expectedObjectsSize;
      m_count = value.m_count;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionsResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsresponse.cpp", "bdObjectStoreCompleteUploadSessionsResponse::deserializeResponse", 0x49u, "Returned objects does not match expected. [%d] != [%d].", m_count, v18);
      m_expectedObjectsSize = this->m_expectedObjectsSize;
    }
    v6 = *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6);
    if ( v6 < m_expectedObjectsSize )
      bdArray<bdObjectStoreMetadata>::increaseCapacity((bdArray<bdObjectStoreMetadata> *)&this->bdStructBufferSerializable::__vftable + 1, m_expectedObjectsSize - v6);
    for ( i = 0; Array && i < this->m_expectedObjectsSize; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v19);
      Object = bdJSONDeserializer::getObject(&value, i, &v19);
      bdJSONDeserializer::bdJSONDeserializer(&jsona);
      if ( !Object || !bdJSONDeserializer::getObject(&v19, "metadata", &jsona) || !bdJSONDeserializer::getString(&jsona, "objectType", ownerTypeString, 0x18u) )
      {
        Array = 0;
        bdJSONDeserializer::~bdJSONDeserializer(&jsona);
        bdJSONDeserializer::~bdJSONDeserializer(&v19);
        break;
      }
      v9 = bdObjectStoreObjectID::convertOwnerTypeString(ownerTypeString);
      bdObjectStoreMetadata::bdObjectStoreMetadata(&__that);
      Array = bdObjectStoreMetadata::deserializeFromJSON(&__that, &jsona, v9);
      if ( bdJSONDeserializer::hasKey(&v19, "tags") )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v25);
        Array = Array && bdJSONDeserializer::getArray(&v19, "tags", &v25) && bdObjectStoreMetadata::deserializeTagsFromJSON(&__that, &v25);
        bdJSONDeserializer::~bdJSONDeserializer(&v25);
      }
      v10 = *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 7);
      if ( v10 == *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) )
      {
        bdArray<bdObjectStoreMetadata>::increaseCapacity((bdArray<bdObjectStoreMetadata> *)&this->bdStructBufferSerializable::__vftable + 1, 1u);
        v10 = *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 7);
      }
      v11 = 3488i64 * v10;
      v12 = *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + v11 == 0;
      v13 = (bdObjectStoreMetadata *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) + v11);
      v23 = v13;
      v24 = v13;
      if ( !v12 )
      {
        bdObjectStoreMetadata::bdObjectStoreMetadata(v13, &__that);
        v10 = *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 7);
      }
      *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 7) = v10 + 1;
      bdMemory::deallocate(__that.m_tags.m_data);
      __that.m_tags.m_data = NULL;
      *(_QWORD *)&__that.m_tags.m_capacity = 0i64;
      bdObjectStoreACL::~bdObjectStoreACL(&__that.m_acl);
      bdJSONDeserializer::~bdJSONDeserializer(&jsona);
      bdJSONDeserializer::~bdJSONDeserializer(&v19);
    }
  }
  else
  {
    v17 = 0;
    v15 = value.m_count;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionsResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsresponse.cpp", "bdObjectStoreCompleteUploadSessionsResponse::deserializeResponse", 0x41u, "expectedObjectsSize not set on bdObjectStoreCompleteUploadSessionsResponse", v15, v17);
    Array = 0;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  return Array;
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::getMetadataList
==============
*/
bdStructBufferSerializable_vtbl **bdObjectStoreCompleteUploadSessionsResponse::getMetadataList(bdObjectStoreCompleteUploadSessionsResponse *this)
{
  return &this->bdStructBufferSerializable::__vftable + 2;
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::init
==============
*/
void bdObjectStoreCompleteUploadSessionsResponse::init(bdObjectStoreCompleteUploadSessionsResponse *this, unsigned int expectedObjectsSize)
{
  this->m_expectedObjectsSize = expectedObjectsSize;
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::reset
==============
*/
void bdObjectStoreCompleteUploadSessionsResponse::reset(bdObjectStoreCompleteUploadSessionsResponse *this)
{
  bdArray<bdObjectStoreMetadata>::clear((bdArray<bdObjectStoreMetadata> *)&this->bdStructBufferSerializable::__vftable + 1);
  this->m_expectedObjectsSize = 0;
}

/*
==============
bdObjectStoreCompleteUploadSessionsResponse::serialize
==============
*/
bool bdObjectStoreCompleteUploadSessionsResponse::serialize(bdObjectStoreCompleteUploadSessionsResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionsresponse.cpp", "bdObjectStoreCompleteUploadSessionsResponse::serialize", 0x1Fu, "Cannot call serialize on bdObjectStoreCompleteUploadSessionsResponse");
  return 0;
}

