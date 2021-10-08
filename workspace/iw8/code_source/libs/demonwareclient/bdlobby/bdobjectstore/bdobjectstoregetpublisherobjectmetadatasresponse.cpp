/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::reset
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::reset(bdObjectStoreGetPublisherObjectMetadatasResponse *this)
{
  ?reset@bdObjectStoreGetPublisherObjectMetadatasResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse(bdObjectStoreGetPublisherObjectMetadatasResponse *this)
{
  ??0bdObjectStoreGetPublisherObjectMetadatasResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdObjectStoreErrorWrappedMetadata *metadataList, unsigned int metadataListSize)
{
  ?setMetadataList@bdObjectStoreGetPublisherObjectMetadatasResponse@@QEAAXPEAVbdObjectStoreErrorWrappedMetadata@@I@Z(this, metadataList, metadataListSize);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::deserialize(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetPublisherObjectMetadatasResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList
==============
*/

bdObjectStoreErrorWrappedMetadata *__fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(bdObjectStoreGetPublisherObjectMetadatasResponse *this)
{
  return ?getMetadataList@bdObjectStoreGetPublisherObjectMetadatasResponse@@QEAAPEAVbdObjectStoreErrorWrappedMetadata@@XZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse
==============
*/

void __fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdObjectStoreErrorWrappedMetadata *metadataList, unsigned int metadataListSize)
{
  ??0bdObjectStoreGetPublisherObjectMetadatasResponse@@QEAA@PEAVbdObjectStoreErrorWrappedMetadata@@I@Z(this, metadataList, metadataListSize);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataListSize
==============
*/

unsigned int __fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataListSize(bdObjectStoreGetPublisherObjectMetadatasResponse *this)
{
  return ?getMetadataListSize@bdObjectStoreGetPublisherObjectMetadatasResponse@@QEBAIXZ(this);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::serialize
==============
*/

bool __fastcall bdObjectStoreGetPublisherObjectMetadatasResponse::serialize(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreGetPublisherObjectMetadatasResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse
==============
*/
void bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdObjectStoreErrorWrappedMetadata *metadataList, unsigned int metadataListSize, int a4)
{
  int v7; 

  if ( a4 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectMetadatasResponse::`vbtable';
    *(_QWORD *)this->gap28 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap28[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectMetadatasResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectMetadatasResponse_vtbl *)&bdObjectStoreGetPublisherObjectMetadatasResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectMetadatasResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectMetadatasResponse::`vftable'{for `bdReferencable'};
  v7 = 50;
  bdHandleAssert(metadataListSize - 1 <= 0x31, "metadataListSize > 0 && metadataListSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectmetadatasresponse.cpp", "bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList", 0x2Fu, "Length of objectList should be > 0 and <= %d", v7);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = metadataList;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = metadataListSize;
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse
==============
*/
void bdObjectStoreGetPublisherObjectMetadatasResponse::bdObjectStoreGetPublisherObjectMetadatasResponse(bdObjectStoreGetPublisherObjectMetadatasResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetPublisherObjectMetadatasResponse::`vbtable';
    *(_QWORD *)this->gap28 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap28[8] = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectMetadatasResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetPublisherObjectMetadatasResponse_vtbl *)&bdObjectStoreGetPublisherObjectMetadatasResponse::`vftable';
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectMetadatasResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetPublisherObjectMetadatasResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::deserialize
==============
*/
bool bdObjectStoreGetPublisherObjectMetadatasResponse::deserialize(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdObjectStoreJSONResponseBase::deserializeVectorizedMetadataResponse((bdObjectStoreGetPublisherObjectMetadatasResponse *)((char *)this - 8), deserializer, *((bdObjectStoreErrorWrappedMetadata **)&this->bdStructBufferSerializable::__vftable + 1), *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 4), PUBLISHER_OWNER_TYPE);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList
==============
*/
bdObjectStoreErrorWrappedMetadata *bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataList(bdObjectStoreGetPublisherObjectMetadatasResponse *this)
{
  return (bdObjectStoreErrorWrappedMetadata *)*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataListSize
==============
*/
__int64 bdObjectStoreGetPublisherObjectMetadatasResponse::getMetadataListSize(bdObjectStoreGetPublisherObjectMetadatasResponse *this)
{
  return *((unsigned int *)&this->bdStructBufferSerializable::__vftable + 6);
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::reset
==============
*/
void bdObjectStoreGetPublisherObjectMetadatasResponse::reset(bdObjectStoreGetPublisherObjectMetadatasResponse *this)
{
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = 0i64;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = 0;
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::serialize
==============
*/
bool bdObjectStoreGetPublisherObjectMetadatasResponse::serialize(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectmetadatasresponse.cpp", "bdObjectStoreGetPublisherObjectMetadatasResponse::serialize", 0x40u, "Cannot call serialize on bdObjectStoreGetPublisherObjectsResponse");
  return 0;
}

/*
==============
bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList
==============
*/
void bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList(bdObjectStoreGetPublisherObjectMetadatasResponse *this, bdObjectStoreErrorWrappedMetadata *metadataList, unsigned int metadataListSize)
{
  int v6; 

  v6 = 50;
  bdHandleAssert(metadataListSize - 1 <= 0x31, "metadataListSize > 0 && metadataListSize <= BD_OBJECTSTORE_MAX_OBJECT_IDS_PER_REQUEST", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetpublisherobjectmetadatasresponse.cpp", "bdObjectStoreGetPublisherObjectMetadatasResponse::setMetadataList", 0x2Fu, "Length of objectList should be > 0 and <= %d", v6);
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = metadataList;
  *((_DWORD *)&this->bdStructBufferSerializable::__vftable + 6) = metadataListSize;
}

