/*
==============
bdTencentRewardEventCode::deserialize
==============
*/

bool __fastcall bdTencentRewardEventCode::deserialize(bdTencentRewardEventCode *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdTencentRewardEventCode@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdTencentRewardEventCode::bdTencentRewardEventCode
==============
*/

void __fastcall bdTencentRewardEventCode::bdTencentRewardEventCode(bdTencentRewardEventCode *this, const char *value)
{
  ??0bdTencentRewardEventCode@@QEAA@QEBD@Z(this, value);
}

/*
==============
bdTencentRewardEventCode::serialize
==============
*/

bool __fastcall bdTencentRewardEventCode::serialize(bdTencentRewardEventCode *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdTencentRewardEventCode@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdTencentRewardEventCode::bdTencentRewardEventCode
==============
*/

void __fastcall bdTencentRewardEventCode::bdTencentRewardEventCode(bdTencentRewardEventCode *this)
{
  ??0bdTencentRewardEventCode@@QEAA@XZ(this);
}

/*
==============
bdTencentRewardEventCode::bdTencentRewardEventCode
==============
*/
void bdTencentRewardEventCode::bdTencentRewardEventCode(bdTencentRewardEventCode *this, const char *value, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTencentRewardEventCode::`vbtable';
    *(_QWORD *)&this->gap3D[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap3D[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdTencentRewardEventCode_vtbl *)&bdTencentRewardEventCode::`vftable'{for `bdStructBufferSerializable'};
  *(bdTencentRewardEventCode_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTencentRewardEventCode_vtbl *)&bdTencentRewardEventCode::`vftable'{for `bdReferencable'};
  bdStrlcpy((char *const)&this->__vftable + 16, value, 0x2Dui64);
}

/*
==============
bdTencentRewardEventCode::bdTencentRewardEventCode
==============
*/
void bdTencentRewardEventCode::bdTencentRewardEventCode(bdTencentRewardEventCode *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdTencentRewardEventCode::`vbtable';
    *(_QWORD *)&this->gap3D[3] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap3D[11] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdTencentRewardEventCode_vtbl *)&bdTencentRewardEventCode::`vftable'{for `bdStructBufferSerializable'};
  *(bdTencentRewardEventCode_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdTencentRewardEventCode_vtbl *)&bdTencentRewardEventCode::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  *(_QWORD *)this->m_value = 0i64;
  *(_QWORD *)&this->m_value[8] = 0i64;
  *(_QWORD *)&this->m_value[16] = 0i64;
  *(_DWORD *)&this->m_value[24] = 0;
  this->m_value[28] = 0;
}

/*
==============
bdTencentRewardEventCode::deserialize
==============
*/
bool bdTencentRewardEventCode::deserialize(bdTencentRewardEventCode *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x2Du);
}

/*
==============
bdTencentRewardEventCode::serialize
==============
*/
bool bdTencentRewardEventCode::serialize(bdTencentRewardEventCode *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x2Du);
}

