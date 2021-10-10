/*
==============
bdEndpointHashingClass::getHash
==============
*/

unsigned int __fastcall bdEndpointHashingClass::getHash(bdEndpointHashingClass *this, const bdEndpoint *other)
{
  return ?getHash@bdEndpointHashingClass@@QEBAIAEBVbdEndpoint@@@Z(this, other);
}

/*
==============
bdEndpoint::operator==
==============
*/

bool __fastcall bdEndpoint::operator==(bdEndpoint *this, const bdEndpoint *other)
{
  return ??8bdEndpoint@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdEndpoint::bdEndpoint
==============
*/

void __fastcall bdEndpoint::bdEndpoint(bdEndpoint *this, const bdReference<bdCommonAddr> addr, const bdSecurityID *secID)
{
  ??0bdEndpoint@@QEAA@V?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@@Z(this, addr, secID);
}

/*
==============
bdEndpoint::serialize
==============
*/

bool __fastcall bdEndpoint::serialize(bdEndpoint *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?serialize@bdEndpoint@@QEBA_NPEAXIIAEAI@Z(this, data, size, offset, newOffset);
}

/*
==============
bdEndpoint::getHash
==============
*/

unsigned int __fastcall bdEndpoint::getHash(bdEndpoint *this)
{
  return ?getHash@bdEndpoint@@QEBAIXZ(this);
}

/*
==============
bdEndpoint::bdEndpoint
==============
*/

void __fastcall bdEndpoint::bdEndpoint(bdEndpoint *this)
{
  ??0bdEndpoint@@QEAA@XZ(this);
}

/*
==============
bdEndpoint::getSerializedLength
==============
*/

unsigned int __fastcall bdEndpoint::getSerializedLength(bdEndpoint *this)
{
  return ?getSerializedLength@bdEndpoint@@QEBAIXZ(this);
}

/*
==============
bdEndpoint::bdEndpoint
==============
*/

void __fastcall bdEndpoint::bdEndpoint(bdEndpoint *this, const bdEndpoint *other)
{
  ??0bdEndpoint@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
bdEndpoint::operator=
==============
*/

bdEndpoint *__fastcall bdEndpoint::operator=(bdEndpoint *this, const bdEndpoint *other)
{
  return ??4bdEndpoint@@QEAAAEAV0@AEBV0@@Z(this, other);
}

/*
==============
bdEndpoint::deserialize
==============
*/

bool __fastcall bdEndpoint::deserialize(bdEndpoint *this, bdReference<bdCommonAddr> me, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  return ?deserialize@bdEndpoint@@QEAA_NV?$bdReference@VbdCommonAddr@@@@PEBXIIAEAI@Z(this, me, data, size, offset, newOffset);
}

/*
==============
bdEndpoint::bdEndpoint
==============
*/
void bdEndpoint::bdEndpoint(bdEndpoint *this, const bdEndpoint *other)
{
  bdCommonAddr *m_ptr; 

  m_ptr = other->m_ca.m_ptr;
  this->m_ca.m_ptr = other->m_ca.m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  bdSecurityID::bdSecurityID(&this->m_secID, &other->m_secID);
}

/*
==============
bdEndpoint::bdEndpoint
==============
*/
void bdEndpoint::bdEndpoint(bdEndpoint *this, const bdReference<bdCommonAddr> addr, const bdSecurityID *secID)
{
  bdCommonAddr_vtbl *v5; 

  v5 = addr.m_ptr->__vftable;
  this->m_ca.m_ptr = (bdCommonAddr *)addr.m_ptr->__vftable;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5[1], 1u);
  bdSecurityID::bdSecurityID(&this->m_secID, secID);
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64);
    addr.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdEndpoint::bdEndpoint
==============
*/
void bdEndpoint::bdEndpoint(bdEndpoint *this)
{
  this->m_ca.m_ptr = NULL;
  bdSecurityID::bdSecurityID(&this->m_secID);
}

/*
==============
bdEndpoint::operator=
==============
*/
bdEndpoint *bdEndpoint::operator=(bdEndpoint *this, const bdEndpoint *other)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v5; 

  if ( other != this )
  {
    m_ptr = this->m_ca.m_ptr;
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && this->m_ca.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))this->m_ca.m_ptr->~bdReferencable)(this->m_ca.m_ptr, 1i64);
    v5 = other->m_ca.m_ptr;
    this->m_ca.m_ptr = other->m_ca.m_ptr;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  this->m_secID = other->m_secID;
  return this;
}

/*
==============
bdEndpoint::operator==
==============
*/
bool bdEndpoint::operator==(bdEndpoint *this, const bdEndpoint *other)
{
  bdCommonAddr *m_ptr; 

  m_ptr = other->m_ca.m_ptr;
  if ( !this->m_ca.m_ptr )
    return m_ptr == NULL;
  if ( !m_ptr )
    return 0;
  return this->m_ca.m_ptr == m_ptr && bdSecurityID::operator==(&this->m_secID, &other->m_secID);
}

/*
==============
bdEndpoint::deserialize
==============
*/
__int64 bdEndpoint::deserialize(bdEndpoint *this, bdReference<bdCommonAddr> me, const void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  unsigned __int8 v9; 
  unsigned int *v10; 
  bdCommonAddr *m_ptr; 
  unsigned int *v12; 
  bdCommonAddr *v13; 
  const unsigned __int8 *v14; 
  bdCommonAddr_vtbl *v15; 
  __int64 v16; 

  v9 = 1;
  v10 = newOffset;
  *newOffset = offset;
  if ( (unsigned __int64)offset + 84 > size )
    goto LABEL_16;
  m_ptr = this->m_ca.m_ptr;
  if ( !this->m_ca.m_ptr )
  {
    v12 = (unsigned int *)bdMemory::allocate(0x4E0ui64);
    newOffset = v12;
    if ( v12 )
    {
      bdCommonAddr::bdCommonAddr((bdCommonAddr *)v12);
      m_ptr = v13;
    }
    else
    {
      m_ptr = NULL;
    }
    if ( this->m_ca.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&this->m_ca.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && this->m_ca.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))this->m_ca.m_ptr->~bdReferencable)(this->m_ca.m_ptr, 1i64);
    this->m_ca.m_ptr = m_ptr;
    if ( m_ptr )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      m_ptr = this->m_ca.m_ptr;
    }
  }
  v14 = (const unsigned __int8 *)data + *v10;
  v15 = me.m_ptr->__vftable;
  newOffset = (unsigned int *)v15;
  if ( v15 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v15[1], 1u);
  bdCommonAddr::deserialize(m_ptr, (bdReference<bdCommonAddr>)&newOffset, v14);
  *v10 += 84;
  v16 = *v10;
  if ( (int)v16 + 8 > size )
  {
LABEL_16:
    v9 = 0;
    *v10 = offset;
  }
  else
  {
    this->m_secID = *(bdSecurityID *)((char *)data + v16);
    *v10 += 8;
  }
  if ( me.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&me.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( me.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))me.m_ptr->~bdReferencable)(me.m_ptr->__vftable, 1i64);
    me.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdEndpoint::getHash
==============
*/
bdCommonAddr *bdEndpoint::getHash(bdEndpoint *this)
{
  bdCommonAddr *result; 

  result = this->m_ca.m_ptr;
  if ( this->m_ca.m_ptr )
    return (bdCommonAddr *)(result->m_hash + ((16777619 * (this->m_secID.ab[6] ^ (16777619 * (this->m_secID.ab[5] ^ (16777619 * (this->m_secID.ab[4] ^ (16777619 * (this->m_secID.ab[3] ^ (16777619 * (this->m_secID.ab[2] ^ (16777619 * (this->m_secID.ab[1] ^ (16777619 * this->m_secID.ab[0]))))))))))))) ^ this->m_secID.ab[7]));
  return result;
}

/*
==============
bdEndpointHashingClass::getHash
==============
*/
bdCommonAddr *bdEndpointHashingClass::getHash(bdEndpointHashingClass *this, const bdEndpoint *other)
{
  bdCommonAddr *result; 

  result = other->m_ca.m_ptr;
  if ( other->m_ca.m_ptr )
    return (bdCommonAddr *)(result->m_hash + ((16777619 * (other->m_secID.ab[6] ^ (16777619 * (other->m_secID.ab[5] ^ (16777619 * (other->m_secID.ab[4] ^ (16777619 * (other->m_secID.ab[3] ^ (16777619 * (other->m_secID.ab[2] ^ (16777619 * (other->m_secID.ab[1] ^ (16777619 * other->m_secID.ab[0]))))))))))))) ^ other->m_secID.ab[7]));
  return result;
}

/*
==============
bdEndpoint::getSerializedLength
==============
*/
__int64 bdEndpoint::getSerializedLength(bdEndpoint *this)
{
  return 92i64;
}

/*
==============
bdEndpoint::serialize
==============
*/
bool bdEndpoint::serialize(bdEndpoint *this, void *data, const unsigned int size, const unsigned int offset, unsigned int *newOffset)
{
  bool result; 

  *newOffset = offset;
  bdHandleAssert(offset <= size, "offset <= size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdsocket\\bdendpoint.cpp", "bdEndpoint::serialize", 0x5Du, "Offset is past the end of the destination buffer.");
  if ( size - offset < 0x5C )
  {
    *newOffset = offset;
    return 0;
  }
  else
  {
    bdCommonAddr::serialize(this->m_ca.m_ptr, (unsigned __int8 *)data + *newOffset);
    *newOffset += 84;
    result = 1;
    *(double *)((char *)data + *newOffset) = *(double *)&this->m_secID;
    *newOffset += 8;
  }
  return result;
}

