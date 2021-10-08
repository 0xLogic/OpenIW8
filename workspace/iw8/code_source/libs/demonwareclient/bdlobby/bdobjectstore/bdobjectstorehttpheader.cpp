/*
==============
bdObjectStoreHTTPHeader::reset
==============
*/

void __fastcall bdObjectStoreHTTPHeader::reset(bdObjectStoreHTTPHeader *this)
{
  ?reset@bdObjectStoreHTTPHeader@@QEAAXXZ(this);
}

/*
==============
bdObjectStoreHTTPHeader::serialize
==============
*/

bool __fastcall bdObjectStoreHTTPHeader::serialize(bdObjectStoreHTTPHeader *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdObjectStoreHTTPHeader@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader
==============
*/

void __fastcall bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(bdObjectStoreHTTPHeader *this)
{
  ??0bdObjectStoreHTTPHeader@@QEAA@XZ(this);
}

/*
==============
bdObjectStoreHTTPHeader::deserialize
==============
*/

bool __fastcall bdObjectStoreHTTPHeader::deserialize(bdObjectStoreHTTPHeader *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdObjectStoreHTTPHeader@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader
==============
*/
void bdObjectStoreHTTPHeader::bdObjectStoreHTTPHeader(bdObjectStoreHTTPHeader *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdObjectStoreHTTPHeader::`vbtable';
    *(_QWORD *)&this->gap1074[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap1074[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdObjectStoreHTTPHeader_vtbl *)&bdObjectStoreHTTPHeader::`vftable'{for `bdStructBufferSerializable'};
  *(bdObjectStoreHTTPHeader_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdObjectStoreHTTPHeader_vtbl *)&bdObjectStoreHTTPHeader::`vftable'{for `bdReferencable'};
  memset_0(&this->__vftable + 2, 0, 0x1064ui64);
}

/*
==============
bdObjectStoreHTTPHeader::deserialize
==============
*/
bool bdObjectStoreHTTPHeader::deserialize(bdObjectStoreHTTPHeader *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x64u) && bdStructBufferDeserializer::readString(deserializer, 2u, this->m_value, 0x1000u);
}

/*
==============
bdObjectStoreHTTPHeader::reset
==============
*/
void bdObjectStoreHTTPHeader::reset(bdObjectStoreHTTPHeader *this)
{
  memset_0(&this->__vftable + 2, 0, 0x1064ui64);
}

/*
==============
bdObjectStoreHTTPHeader::serialize
==============
*/
bool bdObjectStoreHTTPHeader::serialize(bdObjectStoreHTTPHeader *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x64u) && bdStructBufferSerializer::writeString(serializer, 2u, this->m_value, 0x1000u);
}

