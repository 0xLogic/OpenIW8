/*
==============
bdPublisherVariablesInfo::init
==============
*/

void __fastcall bdPublisherVariablesInfo::init(bdPublisherVariablesInfo *this, bdPublisherVariables *service)
{
  ?init@bdPublisherVariablesInfo@@QEAAXPEAVbdPublisherVariables@@@Z(this, service);
}

/*
==============
bdPublisherVariablesInfo::sizeOf
==============
*/

unsigned int __fastcall bdPublisherVariablesInfo::sizeOf(bdPublisherVariablesInfo *this)
{
  return ?sizeOf@bdPublisherVariablesInfo@@UEAAIXZ(this);
}

/*
==============
bdPublisherVariablesInfo::bdPublisherVariablesInfo
==============
*/

void __fastcall bdPublisherVariablesInfo::bdPublisherVariablesInfo(bdPublisherVariablesInfo *this, bdPublisherVariables *service)
{
  ??0bdPublisherVariablesInfo@@QEAA@PEAVbdPublisherVariables@@@Z(this, service);
}

/*
==============
bdPublisherVariablesInfo::deserialize
==============
*/

bool __fastcall bdPublisherVariablesInfo::deserialize(bdPublisherVariablesInfo *this, bdStructBufferDeserializer *deserializer)
{
  return ?deserialize@bdPublisherVariablesInfo@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, deserializer);
}

/*
==============
bdPublisherVariablesInfo::deserialize
==============
*/

bool __fastcall bdPublisherVariablesInfo::deserialize(bdPublisherVariablesInfo *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdPublisherVariablesInfo@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdPublisherVariablesInfo::bdPublisherVariablesInfo
==============
*/

void __fastcall bdPublisherVariablesInfo::bdPublisherVariablesInfo(bdPublisherVariablesInfo *this)
{
  ??0bdPublisherVariablesInfo@@QEAA@XZ(this);
}

/*
==============
bdPublisherVariablesInfo::~bdPublisherVariablesInfo
==============
*/

void __fastcall bdPublisherVariablesInfo::~bdPublisherVariablesInfo(bdPublisherVariablesInfo *this)
{
  ??1bdPublisherVariablesInfo@@UEAA@XZ(this);
}

/*
==============
bdPublisherVariablesInfo::serialize
==============
*/

bool __fastcall bdPublisherVariablesInfo::serialize(bdPublisherVariablesInfo *this, bdStructBufferSerializer *__formal)
{
  return ?serialize@bdPublisherVariablesInfo@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, __formal);
}

/*
==============
bdPublisherVariablesInfo::bdPublisherVariablesInfo
==============
*/
void bdPublisherVariablesInfo::bdPublisherVariablesInfo(bdPublisherVariablesInfo *this, bdPublisherVariables *service, int a3)
{
  if ( a3 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdPublisherVariablesInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdPublisherVariablesInfo::`vbtable'{for `bdStructBufferSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdPublisherVariablesInfo_vtbl *)&bdPublisherVariablesInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdPublisherVariablesInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdPublisherVariablesInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdPublisherVariablesInfo_vtbl *)&bdPublisherVariablesInfo::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = service;
}

/*
==============
bdPublisherVariablesInfo::bdPublisherVariablesInfo
==============
*/
void bdPublisherVariablesInfo::bdPublisherVariablesInfo(bdPublisherVariablesInfo *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdPublisherVariablesInfo::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdPublisherVariablesInfo::`vbtable'{for `bdStructBufferSerializable'};
    *(_QWORD *)&this->_bytes_20[8] = &bdReferencable::`vftable';
    *(_DWORD *)this->gap30 = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdStructBufferSerializable::bdStructBufferSerializable((bdStructBufferSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdPublisherVariablesInfo_vtbl *)&bdPublisherVariablesInfo::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdPublisherVariablesInfo::`vftable'{for `bdStructBufferSerializable'};
  *(bdPublisherVariablesInfo_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdPublisherVariablesInfo_vtbl *)&bdPublisherVariablesInfo::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
}

/*
==============
bdPublisherVariablesInfo::~bdPublisherVariablesInfo
==============
*/
void bdPublisherVariablesInfo::~bdPublisherVariablesInfo(bdPublisherVariablesInfo *this)
{
  bdTaskResult *v1; 

  v1 = (bdPublisherVariablesInfo *)((char *)this - 24);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdPublisherVariablesInfo::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdPublisherVariablesInfo::`vftable'{for `bdStructBufferSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 32) = &bdPublisherVariablesInfo::`vftable'{for `bdReferencable'};
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)this[-1].gap30);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdPublisherVariablesInfo::deserialize
==============
*/
_BOOL8 bdPublisherVariablesInfo::deserialize(bdPublisherVariablesInfo *this, bdStructBufferDeserializer *deserializer)
{
  __int64 v4; 
  bool v5; 
  bdJSONObject *Object; 
  unsigned __int16 v8[2]; 
  unsigned __int16 value; 
  bdJSONValue v10; 
  __int64 v11; 
  char nameSpace[32]; 
  char jsonStr[65536]; 

  v11 = -2i64;
  value = 0;
  v8[0] = 0;
  bdJSONValue::bdJSONValue(&v10);
  if ( bdStructBufferDeserializer::readUInt16(deserializer, 1u, &value) && bdStructBufferDeserializer::readUInt16(deserializer, 2u, v8) && bdStructBufferDeserializer::readString(deserializer, 3u, nameSpace, 0x20u) && bdStructBufferDeserializer::readString(deserializer, 4u, jsonStr, 0xFFFFu) && bdJSONValue::parse(&v10, jsonStr, NULL) )
  {
    bdHandleAssert(*((_QWORD *)&this->__vftable + 2) != 0i64, "m_requestingService != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariablesinfo.cpp", "bdPublisherVariablesInfo::deserialize", 0x6Bu, "Cannot deserialize and use bdPublisherVariablesInfo with a NULL m_requestingService");
    v4 = *((_QWORD *)&this->__vftable + 2);
    v5 = v4 != 0;
    if ( v4 )
    {
      Object = bdJSONValue::getObject(&v10);
      v5 = bdPublisherVariables::setData(*((bdPublisherVariables **)&this->__vftable + 2), nameSpace, Object, value, v8[0]);
    }
  }
  else
  {
    v5 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdPublisherVariablesInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariablesinfo.cpp", "bdPublisherVariablesInfo::deserialize", 0x66u, "Data Deserialization failed");
  }
  bdJSONValue::~bdJSONValue(&v10);
  return v5;
}

/*
==============
bdPublisherVariablesInfo::deserialize
==============
*/
_BOOL8 bdPublisherVariablesInfo::deserialize(bdPublisherVariablesInfo *this, bdReference<bdByteBuffer> buffer)
{
  bool v4; 
  void (__fastcall *v5)(bdReferencable *); 
  __int64 v6; 
  bool v7; 
  bdJSONObject *Object; 
  unsigned __int16 v10[2]; 
  unsigned __int16 u; 
  bdJSONValue v12; 
  __int64 v13; 
  bdByteBuffer *m_ptr; 
  char s[32]; 

  v13 = -2i64;
  m_ptr = buffer.m_ptr;
  u = 0;
  v10[0] = 0;
  bdJSONValue::bdJSONValue(&v12);
  v4 = bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, &u) && bdByteBuffer::readUInt16((bdByteBuffer *)buffer.m_ptr->__vftable, v10) && bdByteBuffer::readString((bdByteBuffer *)buffer.m_ptr->__vftable, s, 0x20ui64);
  v5 = buffer.m_ptr->__vftable[1].~bdReferencable;
  if ( v4 && *(_BYTE *)v5 == 16 && bdJSONValue::parse(&v12, (const char *const)v5 + 1, NULL) )
  {
    bdHandleAssert(*(_QWORD *)this->_bytes_20 != 0i64, "m_requestingService != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariablesinfo.cpp", "bdPublisherVariablesInfo::deserialize", 0x3Du, "Cannot deserialize and use bdPublisherVariablesInfo with a NULL m_requestingService");
    v6 = *(_QWORD *)this->_bytes_20;
    v7 = v6 != 0;
    if ( v6 )
    {
      Object = bdJSONValue::getObject(&v12);
      v7 = bdPublisherVariables::setData(*(bdPublisherVariables **)this->_bytes_20, s, Object, u, v10[0]);
    }
  }
  else
  {
    v7 = 0;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdPublisherVariablesInfo", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariablesinfo.cpp", "bdPublisherVariablesInfo::deserialize", 0x37u, "Data Deserialization failed");
  }
  bdJSONValue::~bdJSONValue(&v12);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v7;
}

/*
==============
bdPublisherVariablesInfo::init
==============
*/
void bdPublisherVariablesInfo::init(bdPublisherVariablesInfo *this, bdPublisherVariables *service)
{
  *(_QWORD *)this->_bytes_20 = service;
}

/*
==============
bdPublisherVariablesInfo::serialize
==============
*/
bool bdPublisherVariablesInfo::serialize(bdPublisherVariablesInfo *this, bdStructBufferSerializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdpublishervariables\\bdpublishervariablesinfo.cpp", "bdPublisherVariablesInfo::serialize", 0x50u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdPublisherVariablesInfo::sizeOf
==============
*/
__int64 bdPublisherVariablesInfo::sizeOf(bdPublisherVariablesInfo *this)
{
  return 56i64;
}

