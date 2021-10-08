/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse(bdObjectStoreGetUserObjectsVectorizedResponse *this)
{
  ??0bdObjectStoreGetUserObjectsVectorizedResponse@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdObjectStoreGetUserObjectsVectorizedResponse::handleReplySuccess(bdObjectStoreGetUserObjectsVectorizedResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdObjectStoreGetUserObjectsVectorizedResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList
==============
*/

const bdArray<bdObjectStoreErrorWrappedObject> *__fastcall bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(bdObjectStoreGetUserObjectsVectorizedResponse *this)
{
  return ?getObjectList@bdObjectStoreGetUserObjectsVectorizedResponse@@QEBAAEBV?$bdArray@VbdObjectStoreErrorWrappedObject@@@@XZ(this);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::setObjectList
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedResponse::setObjectList(bdObjectStoreGetUserObjectsVectorizedResponse *this, const bdArray<bdObjectStoreErrorWrappedObject> *objectList)
{
  ?setObjectList@bdObjectStoreGetUserObjectsVectorizedResponse@@QEAAXAEBV?$bdArray@VbdObjectStoreErrorWrappedObject@@@@@Z(this, objectList);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::deserialize
==============
*/

bool __fastcall bdObjectStoreGetUserObjectsVectorizedResponse::deserialize(bdObjectStoreGetUserObjectsVectorizedResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreGetUserObjectsVectorizedResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::serialize
==============
*/

bool __fastcall bdObjectStoreGetUserObjectsVectorizedResponse::serialize(bdObjectStoreGetUserObjectsVectorizedResponse *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreGetUserObjectsVectorizedResponse@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::reset
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedResponse::reset(bdObjectStoreGetUserObjectsVectorizedResponse *this)
{
  ?reset@bdObjectStoreGetUserObjectsVectorizedResponse@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse
==============
*/

void __fastcall bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse(bdObjectStoreGetUserObjectsVectorizedResponse *this, const bdArray<bdObjectStoreErrorWrappedObject> *objectList)
{
  ??0bdObjectStoreGetUserObjectsVectorizedResponse@@QEAA@AEBV?$bdArray@VbdObjectStoreErrorWrappedObject@@@@@Z(this, objectList);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse
==============
*/
void bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse(bdObjectStoreGetUserObjectsVectorizedResponse *this, const bdArray<bdObjectStoreErrorWrappedObject> *objectList, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserObjectsVectorizedResponse::`vbtable';
    *((_QWORD *)&this->m_objectList + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_objectList + 6) = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  bdRESTResponse::bdRESTResponse((bdRESTResponse *)(&this->bdStructBufferSerializable::__vftable + 2));
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedResponse_vtbl *)&bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdObjectStoreJSONResponseBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdObjectStoreRestResponseBase'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdReferencable'};
  this->m_objectList.m_data = NULL;
  *(_QWORD *)&this->m_objectList.m_capacity = 0i64;
  bdArray<bdObjectStoreErrorWrappedObject>::operator=(&this->m_objectList, objectList);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse
==============
*/
void bdObjectStoreGetUserObjectsVectorizedResponse::bdObjectStoreGetUserObjectsVectorizedResponse(bdObjectStoreGetUserObjectsVectorizedResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) = &bdObjectStoreGetUserObjectsVectorizedResponse::`vbtable';
    *((_QWORD *)&this->m_objectList + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_objectList + 6) = 0;
  }
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedResponse_vtbl *)&bdObjectStoreJSONResponseBase::`vftable';
  bdStructBufferSerializable::bdStructBufferSerializable(&this->bdStructBufferSerializable);
  bdRESTResponse::bdRESTResponse((bdRESTResponse *)(&this->bdStructBufferSerializable::__vftable + 2));
  this->bdObjectStoreJSONResponseBase::__vftable = (bdObjectStoreGetUserObjectsVectorizedResponse_vtbl *)&bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdObjectStoreJSONResponseBase'};
  this->bdStructBufferSerializable::__vftable = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdStructBufferSerializable'};
  *((_QWORD *)&this->bdStructBufferSerializable::__vftable + 2) = &bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdObjectStoreRestResponseBase'};
  *(bdStructBufferSerializable_vtbl **)((char *)&this->bdStructBufferSerializable::__vftable + *(int *)(*((_QWORD *)&this->bdStructBufferSerializable::__vftable + 1) + 4i64) + 8) = (bdStructBufferSerializable_vtbl *)&bdObjectStoreGetUserObjectsVectorizedResponse::`vftable'{for `bdReferencable'};
  this->m_objectList.m_data = NULL;
  *(_QWORD *)&this->m_objectList.m_capacity = 0i64;
  bdArray<bdObjectStoreErrorWrappedObject>::clear(&this->m_objectList);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::deserialize
==============
*/
_BOOL8 bdObjectStoreGetUserObjectsVectorizedResponse::deserialize(bdObjectStoreGetUserObjectsVectorizedResponse *this, bdStructBufferDeserializer *deserializer)
{
  bool v4; 
  unsigned int m_data_high; 
  unsigned int m_count; 
  bool v7; 
  unsigned int v8; 
  bool UInt32; 
  unsigned int v10; 
  char v11; 
  bdObjectStoreErrorWrappedObject *v12; 
  unsigned int v13; 
  __int64 v14; 
  bdObjectStoreErrorWrappedObject *v15; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer v18; 
  bdJSONDeserializer value; 
  bdJSONDeserializer json; 
  __int64 v21; 
  unsigned int v22; 

  v21 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&json);
  LOBYTE(deserializer) = bdObjectStoreJSONResponseBase::getJSONObjectFromJSONResponse((bdObjectStoreGetUserObjectsVectorizedResponse *)((char *)this - 8), &json, deserializer, NULL);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v18);
  v4 = (_BYTE)deserializer && bdJSONDeserializer::getArray(&json, "objects", &value) && bdJSONDeserializer::getArray(&json, "errors", &v18);
  m_data_high = HIDWORD(this->m_objectList.m_data);
  if ( !v4 || (m_count = v18.m_count, v18.m_count + value.m_count != m_data_high) )
  {
    v7 = 0;
    goto LABEL_33;
  }
  v7 = 1;
  v8 = 0;
  if ( !value.m_count )
    goto LABEL_22;
  do
  {
    bdJSONDeserializer::bdJSONDeserializer(&v17);
    if ( !v7 || !bdJSONDeserializer::getObject(&value, v8, &v17) )
    {
      v10 = 0;
      v22 = 0;
LABEL_15:
      v11 = 0;
      goto LABEL_16;
    }
    v22 = 0;
    UInt32 = bdJSONDeserializer::getUInt32(&v17, "requestIndex", &v22);
    v10 = v22;
    if ( !UInt32 || v22 >= m_data_high )
      goto LABEL_15;
    v11 = 1;
LABEL_16:
    bdHandleAssert(v10 < HIDWORD(this->m_objectList.m_data), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreErrorWrappedObject>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
    v12 = (bdObjectStoreErrorWrappedObject *)(*(_QWORD *)&this->_bytes_28[16] + 3528i64 * v10);
    v7 = v11 && bdObjectStoreErrorWrappedObject::deserializeFromJSON(v12, &v17);
    bdObjectStoreErrorWrappedObject::setDownloadStatus(v12, BD_DOWNLOAD_DONE);
    bdJSONDeserializer::~bdJSONDeserializer(&v17);
    ++v8;
  }
  while ( v8 < value.m_count );
  m_count = v18.m_count;
LABEL_22:
  v13 = 0;
  if ( m_count )
  {
    while ( 2 )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v17);
      if ( v7 && bdJSONDeserializer::getObject(&v18, v13, &v17) )
      {
        v22 = 0;
        if ( bdJSONDeserializer::getUInt32(&v17, "requestIndex", &v22) )
        {
          v14 = v22;
          if ( v22 < m_data_high )
          {
            bdHandleAssert(v22 < HIDWORD(this->m_objectList.m_data), "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreErrorWrappedObject>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
            v15 = (bdObjectStoreErrorWrappedObject *)(*(_QWORD *)&this->_bytes_28[16] + 3528 * v14);
            v7 = bdObjectStoreErrorWrappedObject::deserializeErrorFromJSON(v15, &v17, USER_OWNER_TYPE);
            bdObjectStoreErrorWrappedObject::setDownloadStatus(v15, BD_DOWNLOAD_FAILED);
            goto LABEL_30;
          }
        }
      }
      else
      {
        v22 = 0;
      }
      v7 = 0;
LABEL_30:
      bdJSONDeserializer::~bdJSONDeserializer(&v17);
      if ( ++v13 >= v18.m_count )
        break;
      continue;
    }
  }
LABEL_33:
  bdJSONDeserializer::~bdJSONDeserializer(&v18);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&json);
  return v7;
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList
==============
*/
bdArray<bdObjectStoreErrorWrappedObject> *bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(bdObjectStoreGetUserObjectsVectorizedResponse *this)
{
  return &this->m_objectList;
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::handleReplySuccess
==============
*/
__int64 bdObjectStoreGetUserObjectsVectorizedResponse::handleReplySuccess(bdObjectStoreGetUserObjectsVectorizedResponse *this, const bdRESTResponseMessage *reply)
{
  bool v4; 
  bool v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int m_count; 
  bool v9; 
  unsigned int v10; 
  bool UInt32; 
  unsigned int v12; 
  char v13; 
  bdObjectStoreErrorWrappedObject *v14; 
  unsigned int v15; 
  bool v16; 
  __int64 v17; 
  bdObjectStoreErrorWrappedObject *v18; 
  bdJSONDeserializer json; 
  bdJSONDeserializer v21; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 
  __int64 v24; 
  unsigned int v25; 

  v24 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  v4 = bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) && bdJSONDeserializer::isObject(&deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v21);
  v5 = v4 && bdJSONDeserializer::getArray(&deserializer, "objects", &value) && bdJSONDeserializer::getArray(&deserializer, "errors", &v21);
  v6 = *(_DWORD *)&this->_bytes_28[12];
  v7 = 0;
  if ( v5 && (m_count = value.m_count, value.m_count + v21.m_count == v6) )
  {
    v9 = 1;
    v10 = 0;
    while ( v10 < m_count )
    {
      bdJSONDeserializer::bdJSONDeserializer(&json);
      if ( !bdJSONDeserializer::getObject(&value, v10, &json) )
      {
        v12 = 0;
        v25 = 0;
LABEL_19:
        v13 = 0;
        goto LABEL_20;
      }
      v25 = 0;
      UInt32 = bdJSONDeserializer::getUInt32(&json, "requestIndex", &v25);
      v12 = v25;
      if ( !UInt32 || v25 >= v6 )
        goto LABEL_19;
      v13 = 1;
LABEL_20:
      bdHandleAssert(v12 < *(_DWORD *)&this->_bytes_28[12], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreErrorWrappedObject>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
      v14 = (bdObjectStoreErrorWrappedObject *)(*(_QWORD *)this->_bytes_28 + 3528i64 * v12);
      v9 = v13 && bdObjectStoreErrorWrappedObject::deserializeFromJSON((bdObjectStoreErrorWrappedObject *)(*(_QWORD *)this->_bytes_28 + 3528i64 * v12), &json);
      bdObjectStoreErrorWrappedObject::setDownloadStatus(v14, BD_DOWNLOAD_DONE);
      bdJSONDeserializer::~bdJSONDeserializer(&json);
      ++v10;
      if ( !v9 )
        break;
      m_count = value.m_count;
    }
    v15 = 0;
    v16 = !v9;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v15 >= v21.m_count )
          goto LABEL_37;
        bdJSONDeserializer::bdJSONDeserializer(&json);
        if ( !bdJSONDeserializer::getObject(&v21, v15, &json) )
          break;
        v25 = 0;
        if ( !bdJSONDeserializer::getUInt32(&json, "requestIndex", &v25) )
          goto LABEL_33;
        v17 = v25;
        if ( v25 >= v6 )
          goto LABEL_33;
        bdHandleAssert(v25 < *(_DWORD *)&this->_bytes_28[12], "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreErrorWrappedObject>::operator []", 0x68u, "bdArray<T>::operator[], rangecheck failed");
        v18 = (bdObjectStoreErrorWrappedObject *)(*(_QWORD *)this->_bytes_28 + 3528 * v17);
        v9 = bdObjectStoreErrorWrappedObject::deserializeErrorFromJSON(v18, &json, USER_OWNER_TYPE);
        bdObjectStoreErrorWrappedObject::setDownloadStatus(v18, BD_DOWNLOAD_FAILED);
LABEL_34:
        bdJSONDeserializer::~bdJSONDeserializer(&json);
        ++v15;
        if ( !v9 )
          goto LABEL_37;
      }
      v25 = 0;
LABEL_33:
      v9 = 0;
      goto LABEL_34;
    }
  }
  else
  {
    v9 = 0;
LABEL_37:
    v16 = !v9;
  }
  LOBYTE(v7) = !v16;
  bdJSONDeserializer::~bdJSONDeserializer(&v21);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v7;
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::reset
==============
*/
void bdObjectStoreGetUserObjectsVectorizedResponse::reset(bdObjectStoreGetUserObjectsVectorizedResponse *this)
{
  bdArray<bdObjectStoreErrorWrappedObject>::clear(&this->m_objectList);
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::serialize
==============
*/
bool bdObjectStoreGetUserObjectsVectorizedResponse::serialize(bdObjectStoreGetUserObjectsVectorizedResponse *this, bdStructBufferSerializer *serializer)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdobjectstore\\bdobjectstoregetuserobjectsvectorizedresponse.cpp", "bdObjectStoreGetUserObjectsVectorizedResponse::serialize", 0xA8u, "Cannot call serialize on bdObjectStoreUploadUserObjectRequest");
  return 0;
}

/*
==============
bdObjectStoreGetUserObjectsVectorizedResponse::setObjectList
==============
*/
void bdObjectStoreGetUserObjectsVectorizedResponse::setObjectList(bdObjectStoreGetUserObjectsVectorizedResponse *this, const bdArray<bdObjectStoreErrorWrappedObject> *objectList)
{
  bdArray<bdObjectStoreErrorWrappedObject>::operator=(&this->m_objectList, objectList);
}

