/*
==============
bdChannelCreateChannelResponse::deserialize
==============
*/

bool __fastcall bdChannelCreateChannelResponse::deserialize(bdChannelCreateChannelResponse *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdChannelCreateChannelResponse@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdChannelCreateChannelResponse::reset
==============
*/

void __fastcall bdChannelCreateChannelResponse::reset(bdChannelCreateChannelResponse *this)
{
  ?reset@bdChannelCreateChannelResponse@@QEAAXXZ(this);
}

/*
==============
bdChannelCreateChannelResponse::bdChannelCreateChannelResponse
==============
*/

void __fastcall bdChannelCreateChannelResponse::bdChannelCreateChannelResponse(bdChannelCreateChannelResponse *this)
{
  ??0bdChannelCreateChannelResponse@@QEAA@XZ(this);
}

/*
==============
bdChannelCreateChannelResponse::bdChannelCreateChannelResponse
==============
*/
void bdChannelCreateChannelResponse::bdChannelCreateChannelResponse(bdChannelCreateChannelResponse *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdChannelCreateChannelResponse::`vbtable';
    *(_QWORD *)&this->m_channelInfo[80] = &bdReferencable::`vftable';
    *(_DWORD *)&this->m_channelInfo[88] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdChannelCreateChannelResponse_vtbl *)&bdChannelCreateChannelResponse::`vftable'{for `bdStructBufferSerializable'};
  *(bdChannelCreateChannelResponse_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdChannelCreateChannelResponse_vtbl *)&bdChannelCreateChannelResponse::`vftable'{for `bdReferencable'};
  bdChannelInfo::bdChannelInfo((bdChannelInfo *)(&this->__vftable + 2));
  bdChannelInfo::reset((bdChannelInfo *)(&this->__vftable + 2));
}

/*
==============
bdChannelCreateChannelResponse::deserialize
==============
*/
bool bdChannelCreateChannelResponse::deserialize(bdChannelCreateChannelResponse *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)this->m_channelInfo);
}

/*
==============
bdChannelCreateChannelResponse::reset
==============
*/
void bdChannelCreateChannelResponse::reset(bdChannelCreateChannelResponse *this)
{
  bdChannelInfo::reset((bdChannelInfo *)(&this->__vftable + 2));
}

