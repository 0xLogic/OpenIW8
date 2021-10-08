/*
==============
bdSerializable::bdSerializable
==============
*/

void __fastcall bdSerializable::bdSerializable(bdSerializable *this)
{
  ??0bdSerializable@@QEAA@XZ(this);
}

/*
==============
bdSerializable::serialize
==============
*/

bool __fastcall bdSerializable::serialize(bdSerializable *this, bdByteBuffer *__formal)
{
  return ?serialize@bdSerializable@@UEBA_NAEAVbdByteBuffer@@@Z(this, __formal);
}

/*
==============
bdSerializable::serializedSizeOf
==============
*/

int __fastcall bdSerializable::serializedSizeOf(bdSerializable *this)
{
  return ?serializedSizeOf@bdSerializable@@UEBAHXZ(this);
}

/*
==============
bdSerializable::~bdSerializable
==============
*/

void __fastcall bdSerializable::~bdSerializable(bdSerializable *this)
{
  ??1bdSerializable@@UEAA@XZ(this);
}

/*
==============
bdSerializable::bdSerializable
==============
*/

void __fastcall bdSerializable::bdSerializable(bdSerializable *this, const bdSerializable *__formal)
{
  ??0bdSerializable@@IEAA@AEBV0@@Z(this, __formal);
}

/*
==============
bdSerializable::bdSerializable
==============
*/
void bdSerializable::bdSerializable(bdSerializable *this, const bdSerializable *__formal)
{
  this->__vftable = (bdSerializable_vtbl *)&bdSerializable::`vftable'{for `bdSerializable'};
  *(bdSerializable_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSerializable_vtbl *)&bdSerializable::`vftable'{for `bdReferencable'};
}

/*
==============
bdSerializable::bdSerializable
==============
*/
void bdSerializable::bdSerializable(bdSerializable *this)
{
  this->__vftable = (bdSerializable_vtbl *)&bdSerializable::`vftable'{for `bdSerializable'};
  *(bdSerializable_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdSerializable_vtbl *)&bdSerializable::`vftable'{for `bdReferencable'};
}

/*
==============
bdSerializable::~bdSerializable
==============
*/
void bdSerializable::~bdSerializable(bdSerializable *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdSerializable::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 8) = &bdSerializable::`vftable'{for `bdReferencable'};
}

/*
==============
bdSerializable::serialize
==============
*/
bool bdSerializable::serialize(bdSerializable *this, bdByteBuffer *__formal)
{
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdLobbyCommon/bdSerializable", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdserializable.cpp", "bdSerializable::serialize", 0x1Du, "Base-class serialize() called; please implement serialize() in the child class.");
  return 0;
}

/*
==============
bdSerializable::serializedSizeOf
==============
*/
__int64 bdSerializable::serializedSizeOf(bdSerializable *this)
{
  char v2; 
  char v3; 
  unsigned int m_size; 
  bdByteBuffer v6; 

  v6.m_refCount.m_value._My_val = 0;
  v6.__vftable = (bdByteBuffer_vtbl *)&bdByteBuffer::`vftable';
  memset(&v6.m_data, 0, 24);
  *(_WORD *)&v6.m_typeChecked = 257;
  v6.m_allocatedData = 0;
  bdHandleAssert(1, "m_data == BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdbytebuffer.inl", "bdByteBuffer::init", 0x31u, "Buffer already allocated. init() called twice?");
  v6.m_size = 0;
  v2 = this->serialize(this, &v6);
  if ( !v2 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdSerializable", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdserializable.cpp", "bdSerializable::serializedSizeOf", 0x28u, "Could not retrieve serialized size of object because serialize() failed.");
  v3 = v2;
  if ( v6.m_size > 0x7FFFFFFF )
    v3 = 0;
  m_size = -1;
  if ( v3 )
    m_size = v6.m_size;
  bdByteBuffer::~bdByteBuffer(&v6);
  return m_size;
}

