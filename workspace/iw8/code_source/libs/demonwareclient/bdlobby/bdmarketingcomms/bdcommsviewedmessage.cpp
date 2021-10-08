/*
==============
bdCommsViewedMessage::bdCommsViewedMessage
==============
*/

void __fastcall bdCommsViewedMessage::bdCommsViewedMessage(bdCommsViewedMessage *this)
{
  ??0bdCommsViewedMessage@@QEAA@XZ(this);
}

/*
==============
bdCommsViewedMessage::deserialize
==============
*/

bool __fastcall bdCommsViewedMessage::deserialize(bdCommsViewedMessage *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdCommsViewedMessage@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdCommsViewedMessage::serialize
==============
*/

bool __fastcall bdCommsViewedMessage::serialize(bdCommsViewedMessage *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdCommsViewedMessage@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdCommsViewedMessage::reset
==============
*/

void __fastcall bdCommsViewedMessage::reset(bdCommsViewedMessage *this)
{
  ?reset@bdCommsViewedMessage@@QEAAXXZ(this);
}

/*
==============
bdCommsViewedMessage::bdCommsViewedMessage
==============
*/
void bdCommsViewedMessage::bdCommsViewedMessage(bdCommsViewedMessage *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCommsViewedMessage::`vbtable';
    *(_QWORD *)&this->gap3C[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap3C[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdCommsViewedMessage_vtbl *)&bdCommsViewedMessage::`vftable'{for `bdStructBufferSerializable'};
  *(bdCommsViewedMessage_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCommsViewedMessage_vtbl *)&bdCommsViewedMessage::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
  this->m_assignmentID = 0i64;
  *(_QWORD *)this->m_languageCode = 0i64;
  *(_QWORD *)&this->m_languageCode[8] = 0i64;
  *(_DWORD *)&this->m_languageCode[16] = 0;
}

/*
==============
bdCommsViewedMessage::deserialize
==============
*/
bool bdCommsViewedMessage::deserialize(bdCommsViewedMessage *this, bdStructBufferDeserializer *deserializer)
{
  return 0;
}

/*
==============
bdCommsViewedMessage::reset
==============
*/
void bdCommsViewedMessage::reset(bdCommsViewedMessage *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_DWORD *)&this->__vftable + 6) = 0;
  this->m_assignmentID = 0i64;
  *(_QWORD *)this->m_languageCode = 0i64;
  *(_QWORD *)&this->m_languageCode[8] = 0i64;
  *(_DWORD *)&this->m_languageCode[16] = 0;
}

/*
==============
bdCommsViewedMessage::serialize
==============
*/
bool bdCommsViewedMessage::serialize(bdCommsViewedMessage *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt64(serializer, 1u, *((_QWORD *)&this->__vftable + 2)) && bdStructBufferSerializer::writeUInt32(serializer, 2u, *((_DWORD *)&this->__vftable + 6)) && bdStructBufferSerializer::writeUInt64(serializer, 3u, this->m_assignmentID) && bdStructBufferSerializer::writeString(serializer, 4u, this->m_languageCode, 0x14u);
}

