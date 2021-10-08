/*
==============
bdCommsLocationCount::bdCommsLocationCount
==============
*/

void __fastcall bdCommsLocationCount::bdCommsLocationCount(bdCommsLocationCount *this)
{
  ??0bdCommsLocationCount@@QEAA@XZ(this);
}

/*
==============
bdCommsLocationCount::reset
==============
*/

void __fastcall bdCommsLocationCount::reset(bdCommsLocationCount *this)
{
  ?reset@bdCommsLocationCount@@QEAAXXZ(this);
}

/*
==============
bdCommsLocationCount::serialize
==============
*/

bool __fastcall bdCommsLocationCount::serialize(bdCommsLocationCount *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdCommsLocationCount@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdCommsLocationCount::deserialize
==============
*/

bool __fastcall bdCommsLocationCount::deserialize(bdCommsLocationCount *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdCommsLocationCount@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdCommsLocationCount::bdCommsLocationCount
==============
*/
void bdCommsLocationCount::bdCommsLocationCount(bdCommsLocationCount *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdCommsLocationCount::`vbtable';
    *((_QWORD *)&this->__vftable + 3) = &bdReferencable::`vftable';
    *(_DWORD *)this->gap20 = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdCommsLocationCount_vtbl *)&bdCommsLocationCount::`vftable'{for `bdStructBufferSerializable'};
  *(bdCommsLocationCount_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdCommsLocationCount_vtbl *)&bdCommsLocationCount::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdCommsLocationCount::deserialize
==============
*/
bool bdCommsLocationCount::deserialize(bdCommsLocationCount *this, bdStructBufferDeserializer *deserializer)
{
  return 0;
}

/*
==============
bdCommsLocationCount::reset
==============
*/
void bdCommsLocationCount::reset(bdCommsLocationCount *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
}

/*
==============
bdCommsLocationCount::serialize
==============
*/
bool bdCommsLocationCount::serialize(bdCommsLocationCount *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeUInt32(serializer, 1u, *((_DWORD *)&this->__vftable + 4)) && bdStructBufferSerializer::writeUInt32(serializer, 2u, *((_DWORD *)&this->__vftable + 5));
}

