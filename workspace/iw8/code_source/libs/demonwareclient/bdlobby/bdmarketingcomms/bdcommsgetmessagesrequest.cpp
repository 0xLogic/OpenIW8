/*
==============
bdCommsGetMessagesRequest::reset
==============
*/

void __fastcall bdCommsGetMessagesRequest::reset(bdCommsGetMessagesRequest *this)
{
  ?reset@bdCommsGetMessagesRequest@@QEAAXXZ(this);
}

/*
==============
bdCommsGetMessagesRequest::bdCommsGetMessagesRequest
==============
*/

void __fastcall bdCommsGetMessagesRequest::bdCommsGetMessagesRequest(bdCommsGetMessagesRequest *this)
{
  ??0bdCommsGetMessagesRequest@@QEAA@XZ(this);
}

/*
==============
bdCommsGetMessagesRequest::deserialize
==============
*/

bool __fastcall bdCommsGetMessagesRequest::deserialize(bdCommsGetMessagesRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdCommsGetMessagesRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdCommsGetMessagesRequest::serialize
==============
*/

bool __fastcall bdCommsGetMessagesRequest::serialize(bdCommsGetMessagesRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdCommsGetMessagesRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdCommsGetMessagesRequest::bdCommsGetMessagesRequest
==============
*/
void bdCommsGetMessagesRequest::bdCommsGetMessagesRequest(bdCommsGetMessagesRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCommsGetMessagesRequest::`vbtable';
    *(_QWORD *)this->gap48 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap48[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdCommsGetMessagesRequest_vtbl *)&bdCommsGetMessagesRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdCommsGetMessagesRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCommsGetMessagesRequest_vtbl *)&bdCommsGetMessagesRequest::`vftable'{for `bdReferencable'};
  this->m_locationCounts.m_data = NULL;
  *(_QWORD *)&this->m_locationCounts.m_capacity = 0i64;
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_languageCode = 0i64;
  *(_QWORD *)&this->m_languageCode[8] = 0i64;
  *(_DWORD *)&this->m_languageCode[16] = 0;
  bdMemory::deallocate(this->m_locationCounts.m_data);
  this->m_locationCounts.m_data = NULL;
  *(_QWORD *)&this->m_locationCounts.m_capacity = 0i64;
}

/*
==============
bdCommsGetMessagesRequest::deserialize
==============
*/
bool bdCommsGetMessagesRequest::deserialize(bdCommsGetMessagesRequest *this, bdStructBufferDeserializer *deserializer)
{
  return 0;
}

/*
==============
bdCommsGetMessagesRequest::reset
==============
*/
void bdCommsGetMessagesRequest::reset(bdCommsGetMessagesRequest *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_languageCode = 0i64;
  *(_QWORD *)&this->m_languageCode[8] = 0i64;
  *(_DWORD *)&this->m_languageCode[16] = 0;
  bdMemory::deallocate(this->m_locationCounts.m_data);
  this->m_locationCounts.m_data = NULL;
  *(_QWORD *)&this->m_locationCounts.m_capacity = 0i64;
}

/*
==============
bdCommsGetMessagesRequest::serialize
==============
*/
bool bdCommsGetMessagesRequest::serialize(bdCommsGetMessagesRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int m_size; 
  __int64 v5; 
  bool v6; 

  if ( !bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) || !bdStructBufferSerializer::writeString(serializer, 2u, this->m_languageCode, 0x14u) )
    return 0;
  m_size = this->m_locationCounts.m_size;
  v5 = 0i64;
  v6 = 1;
  if ( !m_size )
    return 1;
  do
  {
    v6 = v6 && (bdHandleAssert((unsigned int)v5 < this->m_locationCounts.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdCommsLocationCount>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 3u, &this->m_locationCounts.m_data[v5]));
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < m_size );
  return v6;
}

