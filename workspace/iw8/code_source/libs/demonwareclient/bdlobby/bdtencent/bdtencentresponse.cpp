/*
==============
bdTencentClientDecidedRewardResponse::bdTencentClientDecidedRewardResponse
==============
*/

void __fastcall bdTencentClientDecidedRewardResponse::bdTencentClientDecidedRewardResponse(bdTencentClientDecidedRewardResponse *this)
{
  ??0bdTencentClientDecidedRewardResponse@@QEAA@XZ(this);
}

/*
==============
bdTSSStructMessage::bdTSSStructMessage
==============
*/

void __fastcall bdTSSStructMessage::bdTSSStructMessage(bdTSSStructMessage *this)
{
  ??0bdTSSStructMessage@@QEAA@XZ(this);
}

/*
==============
bdTSSStructMessage::~bdTSSStructMessage
==============
*/

void __fastcall bdTSSStructMessage::~bdTSSStructMessage(bdTSSStructMessage *this)
{
  ??1bdTSSStructMessage@@UEAA@XZ(this);
}

/*
==============
bdTSSStructMessage::deserialize
==============
*/

bool __fastcall bdTSSStructMessage::deserialize(bdTSSStructMessage *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdTSSStructMessage@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdTencentClientDecidedRewardResponse::deserialize
==============
*/

bool __fastcall bdTencentClientDecidedRewardResponse::deserialize(bdTencentClientDecidedRewardResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdTencentClientDecidedRewardResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdTSSStructMessage::reset
==============
*/

void __fastcall bdTSSStructMessage::reset(bdTSSStructMessage *this)
{
  ?reset@bdTSSStructMessage@@QEAAXXZ(this);
}

/*
==============
bdTSSStructMessage::bdTSSStructMessage
==============
*/
void bdTSSStructMessage::bdTSSStructMessage(bdTSSStructMessage *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTSSStructMessage::`vbtable';
    *(_QWORD *)this->gap418 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap418[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdTSSStructMessage_vtbl *)&bdTSSStructMessage::`vftable'{for `bdStructBufferSerializable'};
  *(bdTSSStructMessage_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTSSStructMessage_vtbl *)&bdTSSStructMessage::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  memset_0(&this->__vftable + 3, 0, 0x400ui64);
}

/*
==============
bdTencentClientDecidedRewardResponse::bdTencentClientDecidedRewardResponse
==============
*/
void bdTencentClientDecidedRewardResponse::bdTencentClientDecidedRewardResponse(bdTencentClientDecidedRewardResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTencentClientDecidedRewardResponse::`vbtable';
    *(_QWORD *)this->gap20 = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap20[8] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdTencentClientDecidedRewardResponse_vtbl *)&bdTencentClientDecidedRewardResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdTencentClientDecidedRewardResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTencentClientDecidedRewardResponse_vtbl *)&bdTencentClientDecidedRewardResponse::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  bdMemory::deallocate(NULL);
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
}

/*
==============
bdTSSStructMessage::~bdTSSStructMessage
==============
*/
void bdTSSStructMessage::~bdTSSStructMessage(bdTSSStructMessage *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdTSSStructMessage::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 1040) = &bdTSSStructMessage::`vftable'{for `bdReferencable'};
  bdStructBufferSerializable::~bdStructBufferSerializable((bdTSSStructMessage *)((char *)this - 1032));
}

/*
==============
bdTSSStructMessage::deserialize
==============
*/
bool bdTSSStructMessage::deserialize(bdTSSStructMessage *this, bdStructBufferDeserializer *deserializer)
{
  unsigned int *readSize; 

  *((_DWORD *)&this->__vftable + 5) = 0;
  readSize = (unsigned int *)&this->__vftable + 5;
  return bdStructBufferDeserializer::readUInt32(deserializer, 1u, (unsigned int *)&this->__vftable + 4) && bdStructBufferDeserializer::readBlob(deserializer, 2u, &this->__vftable + 3, 0x400u, readSize);
}

/*
==============
bdTencentClientDecidedRewardResponse::deserialize
==============
*/
bool bdTencentClientDecidedRewardResponse::deserialize(bdTencentClientDecidedRewardResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObjectArray<bdTencentClientDecidedReward>(deserializer, 1u, (bdFastArray<bdTencentClientDecidedReward> *)&this->__vftable + 1);
}

/*
==============
bdTSSStructMessage::reset
==============
*/
void bdTSSStructMessage::reset(bdTSSStructMessage *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  memset_0(&this->__vftable + 3, 0, 0x400ui64);
}

