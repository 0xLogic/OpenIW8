/*
==============
bdTencentClientDecidedReward::bdTencentClientDecidedReward
==============
*/

void __fastcall bdTencentClientDecidedReward::bdTencentClientDecidedReward(bdTencentClientDecidedReward *this)
{
  ??0bdTencentClientDecidedReward@@QEAA@XZ(this);
}

/*
==============
bdTencentClientDecidedReward::deserialize
==============
*/

bool __fastcall bdTencentClientDecidedReward::deserialize(bdTencentClientDecidedReward *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdTencentClientDecidedReward@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdTencentClientDecidedReward::bdTencentClientDecidedReward
==============
*/
void bdTencentClientDecidedReward::bdTencentClientDecidedReward(bdTencentClientDecidedReward *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTencentClientDecidedReward::`vbtable';
    *(_QWORD *)&this->gap7C[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap7C[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdTencentClientDecidedReward_vtbl *)&bdTencentClientDecidedReward::`vftable'{for `bdStructBufferSerializable'};
  *(bdTencentClientDecidedReward_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTencentClientDecidedReward_vtbl *)&bdTencentClientDecidedReward::`vftable'{for `bdReferencable'};
  bdTencentRewardEventCode::bdTencentRewardEventCode((bdTencentRewardEventCode *)(&this->__vftable + 2));
}

/*
==============
bdTencentClientDecidedReward::deserialize
==============
*/
bool bdTencentClientDecidedReward::deserialize(bdTencentClientDecidedReward *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readObject(deserializer, 1u, (bdStructBufferSerializable *)(&this->__vftable + 2)) && bdStructBufferDeserializer::readUInt32(deserializer, 2u, &this->m_rewardID) && bdStructBufferDeserializer::readBool(deserializer, 3u, &this->m_repeatable) && bdStructBufferDeserializer::readUInt32(deserializer, 4u, &this->m_minLevel) && bdStructBufferDeserializer::readUInt32(deserializer, 5u, &this->m_maxLevel) && bdStructBufferDeserializer::readUByte8(deserializer, 6u, &this->m_claimInterval) && bdStructBufferDeserializer::readUInt32(deserializer, 7u, &this->m_intervalMultiplier) && bdStructBufferDeserializer::readUInt32(deserializer, 8u, &this->m_error);
}

