/*
==============
bdConsoleID::readConsoleID
==============
*/

bool __fastcall bdConsoleID::readConsoleID(bdConsoleID *this)
{
  return ?readConsoleID@bdConsoleID@@QEAA_NXZ(this);
}

/*
==============
bdConsoleID::deserialize
==============
*/

bool __fastcall bdConsoleID::deserialize(bdConsoleID *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdConsoleID@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdConsoleID::bdConsoleID
==============
*/

void __fastcall bdConsoleID::bdConsoleID(bdConsoleID *this)
{
  ??0bdConsoleID@@QEAA@XZ(this);
}

/*
==============
bdConsoleID::~bdConsoleID
==============
*/

void __fastcall bdConsoleID::~bdConsoleID(bdConsoleID *this)
{
  ??1bdConsoleID@@UEAA@XZ(this);
}

/*
==============
bdConsoleID::sizeOf
==============
*/

unsigned int __fastcall bdConsoleID::sizeOf(bdConsoleID *this)
{
  return ?sizeOf@bdConsoleID@@UEAAIXZ(this);
}

/*
==============
bdConsoleID::serialize
==============
*/

bool __fastcall bdConsoleID::serialize(bdConsoleID *this, bdByteBuffer *buffer)
{
  return ?serialize@bdConsoleID@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdConsoleID::bdConsoleID
==============
*/
void bdConsoleID::bdConsoleID(bdConsoleID *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdConsoleID::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdConsoleID::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&this->gap34[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap34[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdConsoleID_vtbl *)&bdConsoleID::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdConsoleID::`vftable'{for `bdSerializable'};
  *(bdConsoleID_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdConsoleID_vtbl *)&bdConsoleID::`vftable'{for `bdReferencable'};
  *(_QWORD *)this->_bytes_20 = 0i64;
  *(_QWORD *)&this->_bytes_20[8] = 0i64;
  *(_DWORD *)this->m_id = 0;
}

/*
==============
bdConsoleID::~bdConsoleID
==============
*/
void bdConsoleID::~bdConsoleID(bdConsoleID *this)
{
  bdTaskResult *v1; 

  v1 = (bdConsoleID *)((char *)this - 40);
  *((_QWORD *)&this[-1].__vftable + 2) = &bdConsoleID::`vftable'{for `bdTaskResult'};
  *(_QWORD *)this[-1]._bytes_20 = &bdConsoleID::`vftable'{for `bdSerializable'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 48) = &bdConsoleID::`vftable'{for `bdReferencable'};
  bdSerializable::~bdSerializable((bdSerializable *)this[-1].m_id);
  bdTaskResult::~bdTaskResult(v1);
}

/*
==============
bdConsoleID::deserialize
==============
*/
_BOOL8 bdConsoleID::deserialize(bdConsoleID *this, bdReference<bdByteBuffer> buffer)
{
  bool v3; 
  unsigned int length; 
  bdByteBuffer *m_ptr; 

  m_ptr = buffer.m_ptr;
  length = 20;
  v3 = bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->_bytes_20, &length);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v3;
}

/*
==============
bdConsoleID::readConsoleID
==============
*/
char bdConsoleID::readConsoleID(bdConsoleID *this)
{
  const unsigned __int8 *DeviceID; 

  if ( bdAuthXboxOne::deviceIDInitialized() )
  {
    DeviceID = bdAuthXboxOne::getDeviceID();
    *(_OWORD *)this->_bytes_20 = *(_OWORD *)DeviceID;
    *(_DWORD *)this->m_id = *((_DWORD *)DeviceID + 4);
    return 1;
  }
  else
  {
    bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdconsoleid.cpp", "bdConsoleID::readConsoleID", 0x70u, "Cannot retrieve XboxOne ConsoleID before authentication");
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdAntiCheat/bdConsoleID", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdanticheat\\bdconsoleid.cpp", "bdConsoleID::readConsoleID", 0x71u, "Cannot retrieve XboxOne ConsoleID before authentication");
    return 0;
  }
}

/*
==============
bdConsoleID::serialize
==============
*/
bool bdConsoleID::serialize(bdConsoleID *this, bdByteBuffer *buffer)
{
  return bdByteBuffer::writeBlob(buffer, &this->__vftable + 2, 0x14u);
}

/*
==============
bdConsoleID::sizeOf
==============
*/
__int64 bdConsoleID::sizeOf(bdConsoleID *this)
{
  return 72i64;
}

