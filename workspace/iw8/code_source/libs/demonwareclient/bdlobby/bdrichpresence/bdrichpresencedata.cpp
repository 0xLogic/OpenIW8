/*
==============
bdRichPresenceData::sizeOf
==============
*/

unsigned int __fastcall bdRichPresenceData::sizeOf(bdRichPresenceData *this)
{
  return ?sizeOf@bdRichPresenceData@@UEAAIXZ(this);
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/

void __fastcall bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this, const unsigned __int8 *const presenceData, const unsigned int size)
{
  ??0bdRichPresenceData@@QEAA@QEBEI@Z(this, presenceData, size);
}

/*
==============
bdRichPresenceData::getOnlineStatus
==============
*/

unsigned __int8 __fastcall bdRichPresenceData::getOnlineStatus(bdRichPresenceData *this)
{
  return ?getOnlineStatus@bdRichPresenceData@@QEBAEXZ(this);
}

/*
==============
bdRichPresenceData::deserialize
==============
*/

bool __fastcall bdRichPresenceData::deserialize(bdRichPresenceData *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdRichPresenceData@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdRichPresenceData::serialize
==============
*/

bool __fastcall bdRichPresenceData::serialize(bdRichPresenceData *this, bdByteBuffer *buffer)
{
  return ?serialize@bdRichPresenceData@@UEBA_NAEAVbdByteBuffer@@@Z(this, buffer);
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/

void __fastcall bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this)
{
  ??0bdRichPresenceData@@QEAA@XZ(this);
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/

void __fastcall bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this, const unsigned __int8 onlineStatus, const unsigned __int8 *const presenceData, const unsigned int size)
{
  ??0bdRichPresenceData@@QEAA@EQEBEI@Z(this, onlineStatus, presenceData, size);
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/

void __fastcall bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this, const bdUserAccountID *userAccountID, const unsigned __int8 onlineStatus, const unsigned __int8 *const presenceData, const unsigned int size)
{
  ??0bdRichPresenceData@@QEAA@AEBVbdUserAccountID@@EQEBEI@Z(this, userAccountID, onlineStatus, presenceData, size);
}

/*
==============
bdRichPresenceData::getPresenceDataSize
==============
*/

unsigned int __fastcall bdRichPresenceData::getPresenceDataSize(bdRichPresenceData *this)
{
  return ?getPresenceDataSize@bdRichPresenceData@@QEBAIXZ(this);
}

/*
==============
bdRichPresenceData::getPresenceData
==============
*/

const unsigned __int8 *__fastcall bdRichPresenceData::getPresenceData(bdRichPresenceData *this)
{
  return ?getPresenceData@bdRichPresenceData@@QEBAPEBEXZ(this);
}

/*
==============
bdRichPresenceData::getUserAccountID
==============
*/

const bdUserAccountID *__fastcall bdRichPresenceData::getUserAccountID(bdRichPresenceData *this)
{
  return ?getUserAccountID@bdRichPresenceData@@QEBAAEBVbdUserAccountID@@XZ(this);
}

/*
==============
bdRichPresenceData::setRichPresenceData
==============
*/

void __fastcall bdRichPresenceData::setRichPresenceData(bdRichPresenceData *this, const bdUserAccountID *userAccountID, const unsigned __int8 onlineStatus, const unsigned __int8 *const presenceData, const unsigned int size)
{
  ?setRichPresenceData@bdRichPresenceData@@QEAAXPEBVbdUserAccountID@@EQEBEI@Z(this, userAccountID, onlineStatus, presenceData, size);
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/
void bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this, const bdUserAccountID *userAccountID, const unsigned __int8 onlineStatus, const unsigned __int8 *const presenceData, const unsigned int size, int a6)
{
  if ( a6 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRichPresenceData::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRichPresenceData::`vbtable'{for `bdSerializable'};
    *(_QWORD *)(&this->m_presenceDataSize + 1) = &bdReferencable::`vftable';
    *(&this->m_presenceDataSize + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRichPresenceData::`vftable'{for `bdSerializable'};
  *(bdRichPresenceData_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  bdRichPresenceData::setRichPresenceData(this, userAccountID, onlineStatus, presenceData, size);
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/
void bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this, const unsigned __int8 onlineStatus, const unsigned __int8 *const presenceData, const unsigned int size, int a5)
{
  unsigned __int8 *m_presenceData; 
  unsigned int v10; 

  if ( a5 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRichPresenceData::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRichPresenceData::`vbtable'{for `bdSerializable'};
    *(_QWORD *)(&this->m_presenceDataSize + 1) = &bdReferencable::`vftable';
    *(&this->m_presenceDataSize + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRichPresenceData::`vftable'{for `bdSerializable'};
  *(bdRichPresenceData_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  this->m_onlineStatus = onlineStatus;
  m_presenceData = this->m_presenceData;
  if ( presenceData )
  {
    v10 = 128;
    if ( size < 0x80 )
      v10 = size;
    this->m_presenceDataSize = v10;
    memcpy_0(m_presenceData, presenceData, v10);
  }
  else
  {
    this->m_presenceDataSize = 0;
    memset_0(m_presenceData, 0, 0x80ui64);
  }
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/
void bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this, const unsigned __int8 *const presenceData, const unsigned int size, int a4)
{
  unsigned __int8 *m_presenceData; 
  unsigned int v8; 

  if ( a4 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRichPresenceData::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRichPresenceData::`vbtable'{for `bdSerializable'};
    *(_QWORD *)(&this->m_presenceDataSize + 1) = &bdReferencable::`vftable';
    *(&this->m_presenceDataSize + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRichPresenceData::`vftable'{for `bdSerializable'};
  *(bdRichPresenceData_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  this->m_onlineStatus = 1;
  m_presenceData = this->m_presenceData;
  if ( presenceData )
  {
    v8 = 128;
    if ( size < 0x80 )
      v8 = size;
    this->m_presenceDataSize = v8;
    memcpy_0(m_presenceData, presenceData, v8);
  }
  else
  {
    this->m_presenceDataSize = 0;
    memset_0(m_presenceData, 0, 0x80ui64);
  }
}

/*
==============
bdRichPresenceData::bdRichPresenceData
==============
*/
void bdRichPresenceData::bdRichPresenceData(bdRichPresenceData *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdRichPresenceData::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&this->__vftable + 3) = &bdRichPresenceData::`vbtable'{for `bdSerializable'};
    *(_QWORD *)(&this->m_presenceDataSize + 1) = &bdReferencable::`vftable';
    *(&this->m_presenceDataSize + 3) = 0;
  }
  bdTaskResult::bdTaskResult(this);
  bdSerializable::bdSerializable((bdSerializable *)(&this->__vftable + 2));
  this->__vftable = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdTaskResult'};
  *((_QWORD *)&this->__vftable + 2) = &bdRichPresenceData::`vftable'{for `bdSerializable'};
  *(bdRichPresenceData_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdRichPresenceData_vtbl *)&bdRichPresenceData::`vftable'{for `bdReferencable'};
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)this->_bytes_20);
  this->m_onlineStatus = 0;
  this->m_presenceDataSize = 0;
  memset_0(this->m_presenceData, 0, sizeof(this->m_presenceData));
}

/*
==============
bdRichPresenceData::deserialize
==============
*/
__int64 bdRichPresenceData::deserialize(bdRichPresenceData *this, bdReference<bdByteBuffer> buffer)
{
  unsigned int *p_m_presenceDataSize; 
  _BYTE *bytes_20; 
  unsigned __int8 (__fastcall *v6)(_BYTE *, bdByteBuffer_vtbl **); 
  bdByteBuffer_vtbl *v7; 
  unsigned __int8 v8; 
  unsigned __int8 b; 
  bdByteBuffer *m_ptr; 
  bdByteBuffer_vtbl *v12; 

  m_ptr = buffer.m_ptr;
  b = 0;
  p_m_presenceDataSize = &this->m_presenceDataSize;
  this->m_presenceDataSize = 128;
  bytes_20 = this->_bytes_20;
  v6 = **(unsigned __int8 (__fastcall ***)(_BYTE *, bdByteBuffer_vtbl **))bytes_20;
  v7 = buffer.m_ptr->__vftable;
  v12 = v7;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7->allocateBuffer, 1u);
  if ( v6(bytes_20, &v12) && bdByteBuffer::readUByte8((bdByteBuffer *)buffer.m_ptr->__vftable, &b) && bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_presenceData, p_m_presenceDataSize) )
  {
    v8 = 1;
    this->m_onlineStatus = b;
  }
  else
  {
    v8 = 0;
  }
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v8;
}

/*
==============
bdRichPresenceData::getOnlineStatus
==============
*/
__int64 bdRichPresenceData::getOnlineStatus(bdRichPresenceData *this)
{
  return this->m_onlineStatus;
}

/*
==============
bdRichPresenceData::getPresenceData
==============
*/
unsigned __int8 *bdRichPresenceData::getPresenceData(bdRichPresenceData *this)
{
  return this->m_presenceData;
}

/*
==============
bdRichPresenceData::getPresenceDataSize
==============
*/
__int64 bdRichPresenceData::getPresenceDataSize(bdRichPresenceData *this)
{
  return this->m_presenceDataSize;
}

/*
==============
bdRichPresenceData::getUserAccountID
==============
*/
const bdUserAccountID *bdRichPresenceData::getUserAccountID(bdRichPresenceData *this)
{
  return (const bdUserAccountID *)this->_bytes_20;
}

/*
==============
bdRichPresenceData::serialize
==============
*/
bool bdRichPresenceData::serialize(bdRichPresenceData *this, bdByteBuffer *buffer)
{
  unsigned __int8 v2; 

  v2 = this->m_userAccountID[40];
  return (**(unsigned __int8 (__fastcall ***)(_BYTE *))this->_bytes_20)(this->_bytes_20) && bdByteBuffer::writeUByte8(buffer, v2) && bdByteBuffer::writeBlob(buffer, &this->m_userAccountID[41], *(_DWORD *)&this->m_presenceData[115]);
}

/*
==============
bdRichPresenceData::setRichPresenceData
==============
*/
void bdRichPresenceData::setRichPresenceData(bdRichPresenceData *this, const bdUserAccountID *userAccountID, const unsigned __int8 onlineStatus, const unsigned __int8 *const presenceData, const unsigned int size)
{
  unsigned __int8 *m_presenceData; 
  unsigned int v9; 

  if ( userAccountID )
    bdUserAccountID::operator=((bdUserAccountID *)this->_bytes_20, userAccountID);
  this->m_onlineStatus = onlineStatus;
  m_presenceData = this->m_presenceData;
  if ( presenceData )
  {
    v9 = 128;
    if ( size < 0x80 )
      v9 = size;
    this->m_presenceDataSize = v9;
    memcpy_0(m_presenceData, presenceData, v9);
  }
  else
  {
    this->m_presenceDataSize = 0;
    memset_0(m_presenceData, 0, 0x80ui64);
  }
}

/*
==============
bdRichPresenceData::sizeOf
==============
*/
__int64 bdRichPresenceData::sizeOf(bdRichPresenceData *this)
{
  return 256i64;
}

