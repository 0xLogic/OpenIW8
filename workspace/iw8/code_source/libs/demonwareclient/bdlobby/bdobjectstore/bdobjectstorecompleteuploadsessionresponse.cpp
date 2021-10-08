/*
==============
bdObjectStoreCompleteUploadSessionResponse::reset
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionResponse::reset(bdObjectStoreCompleteUploadSessionResponse *this)
{
  ?reset@bdObjectStoreCompleteUploadSessionResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::bdObjectStoreCompleteUploadSessionResponse
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionResponse::bdObjectStoreCompleteUploadSessionResponse(bdObjectStoreCompleteUploadSessionResponse *this)
{
  ??0bdObjectStoreCompleteUploadSessionResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::setMetadata
==============
*/

void __fastcall bdObjectStoreCompleteUploadSessionResponse::setMetadata(bdObjectStoreCompleteUploadSessionResponse *this, bdObjectStoreMetadata *metadata)
{
  ?setMetadata@bdObjectStoreCompleteUploadSessionResponse@@QEAAXPEAVbdObjectStoreMetadata@@@Z(this, metadata);
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionResponse::deserialize(bdObjectStoreCompleteUploadSessionResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreCompleteUploadSessionResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::serialize
==============
*/

bool __fastcall bdObjectStoreCompleteUploadSessionResponse::serialize(bdObjectStoreCompleteUploadSessionResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreCompleteUploadSessionResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::bdObjectStoreCompleteUploadSessionResponse
==============
*/
void bdObjectStoreCompleteUploadSessionResponse::bdObjectStoreCompleteUploadSessionResponse(bdObjectStoreCompleteUploadSessionResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreCompleteUploadSessionResponse::`vbtable';
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 3) = &bdReferencable::`vftable';
    *((_DWORD *)&this->bdStructBufferSerializable + 8) = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreCompleteUploadSessionResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreCompleteUploadSessionResponse_vtbl *)&bdObjectStoreCompleteUploadSessionResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreCompleteUploadSessionResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::deserialize
==============
*/
__int64 bdObjectStoreCompleteUploadSessionResponse::deserialize(bdObjectStoreCompleteUploadSessionResponse *this, bdStructBufferDeserializer *deserializer)
{
  __int64 v4; 
  __int64 v5; 
  unsigned __int8 v6; 
  bdObjectStoreHTTPHeader *m_data; 
  __int64 v8; 
  bdObjectStoreHTTPHeader_vtbl **v9; 
  __int64 m_size; 
  unsigned int v12; 
  bdArray<bdObjectStoreHTTPHeader> objects; 
  unsigned int value; 

  v4 = *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1);
  v5 = 0i64;
  *(_QWORD *)&objects.m_capacity = 8i64;
  objects.m_data = (bdObjectStoreHTTPHeader *)bdMemory::allocate(0x8440ui64);
  if ( v4 && bdStructBufferDeserializer::readObjectArray<bdObjectStoreHTTPHeader>(deserializer, 1u, &objects) )
  {
    value = 0;
    if ( bdStructBufferDeserializer::readUInt32(deserializer, 2u, &value) )
    {
      if ( value - 200 <= 0x63 )
      {
        if ( bdObjectStoreJSONResponseBase::populateMetadataFromHeaders((bdObjectStoreCompleteUploadSessionResponse *)((char *)this - 8), &objects, *((bdObjectStoreMetadata **)&this->bdStructBufferSerializable::__vftable + 1)) )
        {
          v6 = 1;
          goto LABEL_10;
        }
      }
      else
      {
        v12 = value;
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdObjectStore/bdObjectStoreCompleteUploadSessionResponse", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionresponse.cpp", "bdObjectStoreCompleteUploadSessionResponse::deserialize", 0x26u, "NON-2XX Status Code Received. Unhandled Error with Status Code [%d].", v12);
      }
    }
  }
  else
  {
    value = 0;
  }
  v6 = 0;
LABEL_10:
  m_data = objects.m_data;
  if ( objects.m_size )
  {
    v8 = 0i64;
    v9 = &objects.m_data->__vftable + 1;
    m_size = objects.m_size;
    do
    {
      (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v9)->serialize) + v5 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v9)->serialize) + v8 + 8, 0i64);
      v8 += 4232i64;
      v5 += 4232i64;
      v9 += 529;
      --m_size;
    }
    while ( m_size );
  }
  bdMemory::deallocate(objects.m_data);
  return v6;
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::reset
==============
*/
void bdObjectStoreCompleteUploadSessionResponse::reset(bdObjectStoreCompleteUploadSessionResponse *this)
{
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::serialize
==============
*/
bool bdObjectStoreCompleteUploadSessionResponse::serialize(bdObjectStoreCompleteUploadSessionResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstorecompleteuploadsessionresponse.cpp", "bdObjectStoreCompleteUploadSessionResponse::serialize", 0x33u, "Cannot call serialize on bdObjectStoreCompleteUploadSessionResponse");
  return 0;
}

/*
==============
bdObjectStoreCompleteUploadSessionResponse::setMetadata
==============
*/
void bdObjectStoreCompleteUploadSessionResponse::setMetadata(bdObjectStoreCompleteUploadSessionResponse *this, bdObjectStoreMetadata *metadata)
{
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = metadata;
}

