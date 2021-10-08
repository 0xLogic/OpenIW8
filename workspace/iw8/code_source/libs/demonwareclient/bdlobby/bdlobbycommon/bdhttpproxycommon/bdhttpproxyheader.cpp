/*
==============
bdHTTPProxyHeader::bdHTTPProxyHeader
==============
*/

void __fastcall bdHTTPProxyHeader::bdHTTPProxyHeader(bdHTTPProxyHeader *this)
{
  ??0bdHTTPProxyHeader@@QEAA@XZ(this);
}

/*
==============
bdHTTPProxyHeader::deserialize
==============
*/

bool __fastcall bdHTTPProxyHeader::deserialize(bdHTTPProxyHeader *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdHTTPProxyHeader@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdHTTPProxyHeader::set
==============
*/

bool __fastcall bdHTTPProxyHeader::set(bdHTTPProxyHeader *this, const char *const key, const char *const value)
{
  return ?set@bdHTTPProxyHeader@@QEAA_NQEBD0@Z(this, key, value);
}

/*
==============
bdHTTPProxyHeader::serialize
==============
*/

bool __fastcall bdHTTPProxyHeader::serialize(bdHTTPProxyHeader *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdHTTPProxyHeader@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdHTTPProxyHeader::bdHTTPProxyHeader
==============
*/
void bdHTTPProxyHeader::bdHTTPProxyHeader(bdHTTPProxyHeader *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdHTTPProxyHeader::`vbtable';
    *(_QWORD *)&this->gap844[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap844[12] = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdHTTPProxyHeader_vtbl *)&bdHTTPProxyHeader::`vftable'{for `bdStructBufferSerializable'};
  *(bdHTTPProxyHeader_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdHTTPProxyHeader_vtbl *)&bdHTTPProxyHeader::`vftable'{for `bdReferencable'};
  memset_0(&this->__vftable + 2, 0, 0x834ui64);
}

/*
==============
bdHTTPProxyHeader::deserialize
==============
*/
bool bdHTTPProxyHeader::deserialize(bdHTTPProxyHeader *this, bdStructBufferDeserializer *deserializer)
{
  return bdStructBufferDeserializer::readString(deserializer, 1u, (char *const)&this->__vftable + 16, 0x64u) && bdStructBufferDeserializer::readString(deserializer, 2u, this->m_value, 0x7D0u);
}

/*
==============
bdHTTPProxyHeader::serialize
==============
*/
bool bdHTTPProxyHeader::serialize(bdHTTPProxyHeader *this, bdStructBufferSerializer *serializer)
{
  return bdStructBufferSerializer::writeString(serializer, 1u, (const char *)&this->__vftable + 16, 0x64u) && bdStructBufferSerializer::writeString(serializer, 2u, this->m_value, 0x4000u);
}

/*
==============
bdHTTPProxyHeader::set
==============
*/
bool bdHTTPProxyHeader::set(bdHTTPProxyHeader *this, const char *const key, const char *const value)
{
  char v6; 
  unsigned __int64 v7; 
  bool v8; 
  unsigned __int64 v9; 

  v6 = 1;
  if ( !key )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPProxyHeader", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyheader.cpp", "bdHTTPProxyHeader::set", 0x1Au, "key cannot be NULL");
    v6 = 0;
  }
  if ( !value )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdHTTPProxyHeader", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdhttpproxycommon\\bdhttpproxyheader.cpp", "bdHTTPProxyHeader::set", 0x20u, "value cannot be NULL");
    v6 = 0;
  }
  v7 = bdStrlcpy((char *const)&this->__vftable + 16, key, 0x64ui64);
  v8 = v6 && v7 < 0x64;
  v9 = bdStrlcpy(this->m_value, value, 0x7D0ui64);
  return v8 && v9 < 0x7D0;
}

