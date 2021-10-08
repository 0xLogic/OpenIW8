/*
==============
bdCommsReportMessagesViewedRequest::bdCommsReportMessagesViewedRequest
==============
*/

void __fastcall bdCommsReportMessagesViewedRequest::bdCommsReportMessagesViewedRequest(bdCommsReportMessagesViewedRequest *this)
{
  ??0bdCommsReportMessagesViewedRequest@@QEAA@XZ(this);
}

/*
==============
bdCommsReportMessagesViewedRequest::deserialize
==============
*/

bool __fastcall bdCommsReportMessagesViewedRequest::deserialize(bdCommsReportMessagesViewedRequest *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdCommsReportMessagesViewedRequest@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdCommsReportMessagesViewedRequest::serialize
==============
*/

bool __fastcall bdCommsReportMessagesViewedRequest::serialize(bdCommsReportMessagesViewedRequest *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdCommsReportMessagesViewedRequest@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdCommsReportMessagesViewedRequest::reset
==============
*/

void __fastcall bdCommsReportMessagesViewedRequest::reset(bdCommsReportMessagesViewedRequest *this)
{
  ?reset@bdCommsReportMessagesViewedRequest@@QEAAXXZ(this);
}

/*
==============
bdCommsReportMessagesViewedRequest::bdCommsReportMessagesViewedRequest
==============
*/
void bdCommsReportMessagesViewedRequest::bdCommsReportMessagesViewedRequest(bdCommsReportMessagesViewedRequest *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCommsReportMessagesViewedRequest::`vbtable';
    *((_QWORD *)&this->m_messages + 2) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_messages + 6) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdCommsReportMessagesViewedRequest_vtbl *)&bdCommsReportMessagesViewedRequest::`vftable'{for `bdStructBufferSerializable'};
  *(bdCommsReportMessagesViewedRequest_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCommsReportMessagesViewedRequest_vtbl *)&bdCommsReportMessagesViewedRequest::`vftable'{for `bdReferencable'};
  this->m_messages.m_data = NULL;
  *(_QWORD *)&this->m_messages.m_capacity = 0i64;
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdMemory::deallocate(this->m_messages.m_data);
  this->m_messages.m_data = NULL;
  *(_QWORD *)&this->m_messages.m_capacity = 0i64;
}

/*
==============
bdCommsReportMessagesViewedRequest::deserialize
==============
*/
bool bdCommsReportMessagesViewedRequest::deserialize(bdCommsReportMessagesViewedRequest *this, bdStructBufferDeserializer *deserializer)
{
  return 0;
}

/*
==============
bdCommsReportMessagesViewedRequest::reset
==============
*/
void bdCommsReportMessagesViewedRequest::reset(bdCommsReportMessagesViewedRequest *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdMemory::deallocate(this->m_messages.m_data);
  this->m_messages.m_data = NULL;
  *(_QWORD *)&this->m_messages.m_capacity = 0i64;
}

/*
==============
bdCommsReportMessagesViewedRequest::serialize
==============
*/
bool bdCommsReportMessagesViewedRequest::serialize(bdCommsReportMessagesViewedRequest *this, bdStructBufferSerializer *serializer)
{
  unsigned int m_size; 
  __int64 v5; 
  bool v6; 

  if ( !bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x10u) )
    return 0;
  m_size = this->m_messages.m_size;
  v5 = 0i64;
  v6 = 1;
  if ( !m_size )
    return 1;
  do
  {
    v6 = v6 && (bdHandleAssert((unsigned int)v5 < this->m_messages.m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdfastarray.inl", "bdFastArray<class bdCommsViewedMessage>::operator []", 0x58u, "bdFastArray<T>::operator[], rangecheck failed"), bdStructBufferSerializer::writeObject(serializer, 2u, &this->m_messages.m_data[v5]));
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < m_size );
  return v6;
}

