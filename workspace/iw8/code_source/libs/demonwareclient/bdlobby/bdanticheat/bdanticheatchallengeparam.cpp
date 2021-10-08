/*
==============
bdAntiCheatChallengeParam::operator!=
==============
*/

bool __fastcall bdAntiCheatChallengeParam::operator!=(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  return ??9bdAntiCheatChallengeParam@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdAntiCheatChallengeParam::operator=
==============
*/

bdAntiCheatChallengeParam *__fastcall bdAntiCheatChallengeParam::operator=(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  return ??4bdAntiCheatChallengeParam@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdAntiCheatChallengeParam::deserialize
==============
*/

bool __fastcall bdAntiCheatChallengeParam::deserialize(bdAntiCheatChallengeParam *this, bdReference<bdByteBuffer> buffer)
{
  return ?deserialize@bdAntiCheatChallengeParam@@UEAA_NV?$bdReference@VbdByteBuffer@@@@@Z(this, buffer);
}

/*
==============
bdAntiCheatChallengeParam::operator==
==============
*/

bool __fastcall bdAntiCheatChallengeParam::operator==(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  return ??8bdAntiCheatChallengeParam@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdAntiCheatChallengeParam::sizeOf
==============
*/

unsigned int __fastcall bdAntiCheatChallengeParam::sizeOf(bdAntiCheatChallengeParam *this)
{
  return ?sizeOf@bdAntiCheatChallengeParam@@UEAAIXZ(this);
}

/*
==============
bdAntiCheatChallengeParam::~bdAntiCheatChallengeParam
==============
*/

void __fastcall bdAntiCheatChallengeParam::~bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this)
{
  ??1bdAntiCheatChallengeParam@@UEAA@XZ(this);
}

/*
==============
bdAntiCheatChallengeParam::bdAntiCheatChallengeParam
==============
*/

void __fastcall bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this)
{
  ??0bdAntiCheatChallengeParam@@QEAA@XZ(this);
}

/*
==============
bdAntiCheatChallengeParam::bdAntiCheatChallengeParam
==============
*/

void __fastcall bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  ??0bdAntiCheatChallengeParam@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdAntiCheatChallengeParam::bdAntiCheatChallengeParam
==============
*/

void __fastcall bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this, const unsigned __int8 *data, unsigned int size)
{
  ??0bdAntiCheatChallengeParam@@QEAA@PEBEI@Z(this, data, size);
}

/*
==============
bdAntiCheatChallengeParam::bdAntiCheatChallengeParam
==============
*/
void bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  unsigned int m_size; 
  unsigned __int8 *v5; 
  size_t v6; 

  this->__vftable = (bdAntiCheatChallengeParam_vtbl *)&bdAntiCheatChallengeParam::`vftable';
  m_size = other->m_size;
  this->m_size = m_size;
  v5 = (unsigned __int8 *)bdMemory::allocate(m_size);
  v6 = this->m_size;
  this->m_data = v5;
  memcpy_0(v5, other->m_data, v6);
}

/*
==============
bdAntiCheatChallengeParam::bdAntiCheatChallengeParam
==============
*/
void bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this, const unsigned __int8 *data, unsigned int size)
{
  unsigned __int8 *v5; 
  size_t m_size; 

  this->m_size = size;
  this->__vftable = (bdAntiCheatChallengeParam_vtbl *)&bdAntiCheatChallengeParam::`vftable';
  v5 = (unsigned __int8 *)bdMemory::allocate(size);
  m_size = this->m_size;
  this->m_data = v5;
  memcpy_0(v5, data, m_size);
}

/*
==============
bdAntiCheatChallengeParam::bdAntiCheatChallengeParam
==============
*/
void bdAntiCheatChallengeParam::bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this)
{
  this->__vftable = (bdAntiCheatChallengeParam_vtbl *)&bdAntiCheatChallengeParam::`vftable';
  this->m_data = NULL;
  this->m_size = 0;
}

/*
==============
bdAntiCheatChallengeParam::~bdAntiCheatChallengeParam
==============
*/
void bdAntiCheatChallengeParam::~bdAntiCheatChallengeParam(bdAntiCheatChallengeParam *this)
{
  unsigned __int8 *m_data; 

  this->__vftable = (bdAntiCheatChallengeParam_vtbl *)&bdAntiCheatChallengeParam::`vftable';
  m_data = this->m_data;
  if ( m_data )
    bdMemory::deallocate(m_data);
}

/*
==============
bdAntiCheatChallengeParam::operator=
==============
*/
bdAntiCheatChallengeParam *bdAntiCheatChallengeParam::operator=(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  unsigned __int8 *m_data; 
  unsigned int m_size; 
  unsigned __int8 *v6; 
  size_t v7; 

  m_data = this->m_data;
  if ( m_data )
    bdMemory::deallocate(m_data);
  m_size = other->m_size;
  this->m_size = m_size;
  if ( other->m_data )
  {
    v6 = (unsigned __int8 *)bdMemory::allocate(m_size);
    v7 = this->m_size;
    this->m_data = v6;
    memcpy_0(v6, other->m_data, v7);
  }
  else
  {
    this->m_data = NULL;
  }
  return this;
}

/*
==============
bdAntiCheatChallengeParam::operator==
==============
*/
bool bdAntiCheatChallengeParam::operator==(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  return this->m_size == other->m_size && memcmp_0(this->m_data, other->m_data, this->m_size) == 0;
}

/*
==============
bdAntiCheatChallengeParam::operator!=
==============
*/
bool bdAntiCheatChallengeParam::operator!=(bdAntiCheatChallengeParam *this, const bdAntiCheatChallengeParam *other)
{
  return this->m_size != other->m_size || memcmp_0(this->m_data, other->m_data, this->m_size) != 0;
}

/*
==============
bdAntiCheatChallengeParam::deserialize
==============
*/
_BOOL8 bdAntiCheatChallengeParam::deserialize(bdAntiCheatChallengeParam *this, bdReference<bdByteBuffer> buffer)
{
  unsigned __int8 *m_data; 
  unsigned int *p_m_size; 
  bool Blob; 

  m_data = this->m_data;
  if ( m_data )
  {
    bdMemory::deallocate(m_data);
    this->m_data = NULL;
    p_m_size = &this->m_size;
    this->m_size = 0;
  }
  else
  {
    p_m_size = &this->m_size;
  }
  Blob = bdByteBuffer::readAndAllocateBlob((bdByteBuffer *)buffer.m_ptr->__vftable, &this->m_data, p_m_size);
  if ( buffer.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&buffer.m_ptr->allocateBuffer, 0xFFFFFFFF) == 1 )
  {
    if ( buffer.m_ptr->__vftable )
      (*(void (__fastcall **)(bdByteBuffer_vtbl *, __int64))buffer.m_ptr->~bdReferencable)(buffer.m_ptr->__vftable, 1i64);
    buffer.m_ptr->__vftable = NULL;
  }
  return Blob;
}

/*
==============
bdAntiCheatChallengeParam::sizeOf
==============
*/
__int64 bdAntiCheatChallengeParam::sizeOf(bdAntiCheatChallengeParam *this)
{
  return this->m_size;
}

