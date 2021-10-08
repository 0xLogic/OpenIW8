/*
==============
bdValidationTokenResult::getValidationTokenSize
==============
*/

unsigned int __fastcall bdValidationTokenResult::getValidationTokenSize(bdValidationTokenResult *this)
{
  return ?getValidationTokenSize@bdValidationTokenResult@@QEBAIXZ(this);
}

/*
==============
bdValidationTokenResult::initialize
==============
*/

void __fastcall bdValidationTokenResult::initialize(bdValidationTokenResult *this, const unsigned __int8 *data, unsigned int size)
{
  ?initialize@bdValidationTokenResult@@QEAAXPEBEI@Z(this, data, size);
}

/*
==============
bdValidationTokenResult::sizeOf
==============
*/

unsigned int __fastcall bdValidationTokenResult::sizeOf(bdValidationTokenResult *this)
{
  return ?sizeOf@bdValidationTokenResult@@UEAAIXZ(this);
}

/*
==============
bdValidationTokenResult::deserialize
==============
*/

bool __fastcall bdValidationTokenResult::deserialize(bdValidationTokenResult *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdValidationTokenResult@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdValidationTokenResult::bdValidationTokenResult
==============
*/

void __fastcall bdValidationTokenResult::bdValidationTokenResult(bdValidationTokenResult *this)
{
  ??0bdValidationTokenResult@@QEAA@XZ(this);
}

/*
==============
bdValidationTokenResult::~bdValidationTokenResult
==============
*/

void __fastcall bdValidationTokenResult::~bdValidationTokenResult(bdValidationTokenResult *this)
{
  ??1bdValidationTokenResult@@UEAA@XZ(this);
}

/*
==============
bdValidationTokenResult::reset
==============
*/

void __fastcall bdValidationTokenResult::reset(bdValidationTokenResult *this)
{
  ?reset@bdValidationTokenResult@@QEAAXXZ(this);
}

/*
==============
bdValidationTokenResult::getValidationToken
==============
*/

const unsigned __int8 *__fastcall bdValidationTokenResult::getValidationToken(bdValidationTokenResult *this)
{
  return ?getValidationToken@bdValidationTokenResult@@QEBAPEBEXZ(this);
}

/*
==============
bdValidationTokenResult::bdValidationTokenResult
==============
*/
void bdValidationTokenResult::bdValidationTokenResult(bdValidationTokenResult *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdValidationTokenResult::`vbtable';
    *(_QWORD *)&this->gap2824[4] = &bdReferencable::`vftable';
    *(_DWORD *)&this->gap2824[12] = 0;
  }
  bdTaskResult::bdTaskResult(this);
  this->__vftable = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdTaskResult'};
  *(bdValidationTokenResult_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdValidationTokenResult_vtbl *)&bdValidationTokenResult::`vftable'{for `bdReferencable'};
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_validationTokenSize = 0;
  memset_0(this->m_validationToken, 0, sizeof(this->m_validationToken));
}

/*
==============
bdValidationTokenResult::~bdValidationTokenResult
==============
*/
void bdValidationTokenResult::~bdValidationTokenResult(bdValidationTokenResult *this)
{
  *((_QWORD *)&this[-1].__vftable + 2) = &bdValidationTokenResult::`vftable'{for `bdTaskResult'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)&this[-1].__vftable + 3) + 4i64) - 10272) = &bdValidationTokenResult::`vftable'{for `bdReferencable'};
  bdTaskResult::~bdTaskResult((bdValidationTokenResult *)((char *)this - 10264));
}

/*
==============
bdValidationTokenResult::deserialize
==============
*/
__int64 bdValidationTokenResult::deserialize(bdValidationTokenResult *this, bdReference<bdByteBuffer> buffer)
{
  unsigned __int8 v4; 
  unsigned int length; 

  if ( !bdByteBuffer::readInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (__int64 *)&this->__vftable + 2) || !bdByteBuffer::readInt64((bdByteBuffer *)buffer.m_ptr->__vftable, (__int64 *)&this->__vftable + 3) )
  {
    length = 10240;
    goto LABEL_6;
  }
  length = 10240;
  if ( !bdByteBuffer::readBlob((bdByteBuffer *)buffer.m_ptr->__vftable, this->m_validationToken, &length) )
  {
LABEL_6:
    v4 = 0;
    goto LABEL_7;
  }
  v4 = 1;
  this->m_validationTokenSize = length;
LABEL_7:
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return v4;
}

/*
==============
bdValidationTokenResult::getValidationToken
==============
*/
unsigned __int8 *bdValidationTokenResult::getValidationToken(bdValidationTokenResult *this)
{
  return this->m_validationToken;
}

/*
==============
bdValidationTokenResult::getValidationTokenSize
==============
*/
__int64 bdValidationTokenResult::getValidationTokenSize(bdValidationTokenResult *this)
{
  return this->m_validationTokenSize;
}

/*
==============
bdValidationTokenResult::initialize
==============
*/
void bdValidationTokenResult::initialize(bdValidationTokenResult *this, const unsigned __int8 *data, unsigned int size)
{
  unsigned int v3; 

  v3 = 10240;
  if ( size < 0x2800 )
    v3 = size;
  this->m_validationTokenSize = v3;
  memcpy_0(this->m_validationToken, data, v3);
}

/*
==============
bdValidationTokenResult::reset
==============
*/
void bdValidationTokenResult::reset(bdValidationTokenResult *this)
{
  *((_QWORD *)&this->__vftable + 2) = 0i64;
  *((_QWORD *)&this->__vftable + 3) = 0i64;
  this->m_validationTokenSize = 0;
  memset_0(this->m_validationToken, 0, sizeof(this->m_validationToken));
}

/*
==============
bdValidationTokenResult::sizeOf
==============
*/
__int64 bdValidationTokenResult::sizeOf(bdValidationTokenResult *this)
{
  return 10296i64;
}

