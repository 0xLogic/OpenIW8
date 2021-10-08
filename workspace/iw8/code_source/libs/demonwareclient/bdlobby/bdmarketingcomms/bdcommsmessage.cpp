/*
==============
bdCommsMessage::bdCommsMessage
==============
*/

void __fastcall bdCommsMessage::bdCommsMessage(bdCommsMessage *this)
{
  ??0bdCommsMessage@@QEAA@XZ(this);
}

/*
==============
bdCommsMessage::reset
==============
*/

void __fastcall bdCommsMessage::reset(bdCommsMessage *this)
{
  ?reset@bdCommsMessage@@QEAAXXZ(this);
}

/*
==============
bdCommsMessage::deserialize
==============
*/

bool __fastcall bdCommsMessage::deserialize(bdCommsMessage *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdCommsMessage@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdCommsMessage::serialize
==============
*/

bool __fastcall bdCommsMessage::serialize(bdCommsMessage *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdCommsMessage@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdCommsMessage::bdCommsMessage
==============
*/
void bdCommsMessage::bdCommsMessage(bdCommsMessage *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCommsMessage::`vbtable';
    *((_QWORD *)&this->m_locationID + 1) = &bdReferencable::`vftable';
    *(&this->m_locationID + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdCommsMessage_vtbl *)&bdCommsMessage::`vftable'{for `bdStructBufferSerializable'};
  *(bdCommsMessage_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCommsMessage_vtbl *)&bdCommsMessage::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  memset_0(&this->__vftable + 3, 0, 0x1014ui64);
  this->m_contentSize = 0;
  memset_0(this->m_metadata, 0, sizeof(this->m_metadata));
  this->m_metadataSize = 0;
  memset_0(this->m_payload, 0, sizeof(this->m_payload));
  this->m_payloadSize = 0;
  *(_QWORD *)this->m_payloadSignature = 0i64;
  *(_QWORD *)&this->m_payloadSignature[8] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[16] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[24] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[32] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[40] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[48] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[56] = 0i64;
  this->m_payloadSignature[64] = 0;
  this->m_payloadSignatureSize = 0;
  this->m_assignmentID = 0i64;
  this->m_locationID = 0;
}

/*
==============
bdCommsMessage::deserialize
==============
*/
bool bdCommsMessage::deserialize(bdCommsMessage *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readUInt64(deserializer, 1u, (unsigned __int64 *)&this->__vftable + 2) && bdStructBufferDeserializer::readString(deserializer, 2u, (char *const)&this->__vftable + 24, 0x14u) && bdStructBufferDeserializer::readBlob(deserializer, 3u, this->m_content, 0x1000u, &this->m_contentSize) && bdStructBufferDeserializer::readBlob(deserializer, 4u, this->m_metadata, 0x800u, &this->m_metadataSize) && bdStructBufferDeserializer::readBlob(deserializer, 5u, this->m_payload, 0x400u, &this->m_payloadSize) && bdStructBufferDeserializer::readBlob(deserializer, 6u, this->m_payloadSignature, 0x41u, &this->m_payloadSignatureSize) && bdStructBufferDeserializer::readUInt64(deserializer, 7u, &this->m_assignmentID) && bdStructBufferDeserializer::readUInt32(deserializer, 8u, &this->m_locationID);
}

/*
==============
bdCommsMessage::reset
==============
*/
void bdCommsMessage::reset(bdCommsMessage *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  memset_0(&this->__vftable + 3, 0, 0x1014ui64);
  this->m_contentSize = 0;
  memset_0(this->m_metadata, 0, sizeof(this->m_metadata));
  this->m_metadataSize = 0;
  memset_0(this->m_payload, 0, sizeof(this->m_payload));
  this->m_payloadSize = 0;
  *(_QWORD *)this->m_payloadSignature = 0i64;
  *(_QWORD *)&this->m_payloadSignature[8] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[16] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[24] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[32] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[40] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[48] = 0i64;
  *(_QWORD *)&this->m_payloadSignature[56] = 0i64;
  this->m_payloadSignature[64] = 0;
  this->m_payloadSignatureSize = 0;
  this->m_assignmentID = 0i64;
  this->m_locationID = 0;
}

/*
==============
bdCommsMessage::serialize
==============
*/
bool bdCommsMessage::serialize(bdCommsMessage *this, bdStructBufferSerializer *serializer)
{
  return 0;
}

