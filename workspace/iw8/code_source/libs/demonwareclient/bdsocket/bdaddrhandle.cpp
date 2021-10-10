/*
==============
bdAddrHandle::operator==
==============
*/

bool __fastcall bdAddrHandle::operator==(bdAddrHandle *this, const bdAddrHandle *other)
{
  return ??8bdAddrHandle@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdAddrHandleHashingClass::getHash
==============
*/

unsigned int __fastcall bdAddrHandleHashingClass::getHash(bdAddrHandleHashingClass *this, const bdReference<bdAddrHandle> *other)
{
  return ?getHash@bdAddrHandleHashingClass@@QEBAIAEBV?$bdReference@VbdAddrHandle@@@@@Z(this, other);
}

/*
==============
bdAddrHandle::setUserData
==============
*/

void __fastcall bdAddrHandle::setUserData(bdAddrHandle *this, void *userData)
{
  ?setUserData@bdAddrHandle@@QEAAXPEAX@Z(this, userData);
}

/*
==============
bdAddrHandle::setRealAddr
==============
*/

void __fastcall bdAddrHandle::setRealAddr(bdAddrHandle *this, const bdAddr *realAddr)
{
  ?setRealAddr@bdAddrHandle@@QEAAXAEBVbdAddr@@@Z(this, realAddr);
}

/*
==============
bdAddrHandle::getSecID
==============
*/

void __fastcall bdAddrHandle::getSecID(bdAddrHandle *this, bdSecurityID *secID)
{
  ?getSecID@bdAddrHandle@@QEBAXAEAVbdSecurityID@@@Z(this, secID);
}

/*
==============
bdAddrHandle::getRealAddr
==============
*/

const bdAddr *__fastcall bdAddrHandle::getRealAddr(bdAddrHandle *this, const bdAddr *result)
{
  return ?getRealAddr@bdAddrHandle@@QEBA?BVbdAddr@@XZ(this, result);
}

/*
==============
bdAddrHandle::isResolved
==============
*/

bool __fastcall bdAddrHandle::isResolved(bdAddrHandle *this)
{
  return ?isResolved@bdAddrHandle@@QEBA_NXZ(this);
}

/*
==============
bdAddrHandle::getPlatformID
==============
*/

bdPlatformID __fastcall bdAddrHandle::getPlatformID(bdAddrHandle *this)
{
  return ?getPlatformID@bdAddrHandle@@QEBA?AW4bdPlatformID@@XZ(this);
}

/*
==============
bdAddrHandle::bdAddrHandle
==============
*/

void __fastcall bdAddrHandle::bdAddrHandle(bdAddrHandle *this, bdReference<bdCommonAddr> ca, const bdSecurityID *secID)
{
  ??0bdAddrHandle@@IEAA@V?$bdReference@VbdCommonAddr@@@@AEBVbdSecurityID@@@Z(this, ca, secID);
}

/*
==============
bdAddrHandle::getUserData
==============
*/

void *__fastcall bdAddrHandle::getUserData(bdAddrHandle *this)
{
  return ?getUserData@bdAddrHandle@@QEAAPEAXXZ(this);
}

/*
==============
bdAddrHandle::bdAddrHandle
==============
*/
void bdAddrHandle::bdAddrHandle(bdAddrHandle *this, bdReference<bdCommonAddr> ca, const bdSecurityID *secID)
{
  bdEndpoint *p_m_endpoint; 
  bdCommonAddr *v6; 
  bdReference<bdCommonAddr> addr; 

  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdAddrHandle_vtbl *)&bdAddrHandle::`vftable';
  p_m_endpoint = &this->m_endpoint;
  v6 = (bdCommonAddr *)ca.m_ptr->__vftable;
  addr.m_ptr = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  bdEndpoint::bdEndpoint(p_m_endpoint, (const bdReference<bdCommonAddr>)&addr, secID);
  this->m_status = BD_ADDR_NOT_RESOLVED;
  bdAddr::bdAddr(&this->m_realAddr);
  this->m_userData = NULL;
  if ( ca.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&ca.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( ca.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))ca.m_ptr->~bdReferencable)(ca.m_ptr->__vftable, 1i64);
    ca.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdAddrHandle::operator==
==============
*/
bool bdAddrHandle::operator==(bdAddrHandle *this, const bdAddrHandle *other)
{
  return bdEndpoint::operator==(&this->m_endpoint, &other->m_endpoint);
}

/*
==============
bdAddrHandleHashingClass::getHash
==============
*/
unsigned int bdAddrHandleHashingClass::getHash(bdAddrHandleHashingClass *this, const bdReference<bdAddrHandle> *other)
{
  return bdEndpoint::getHash(&other->m_ptr->m_endpoint);
}

/*
==============
bdAddrHandle::getPlatformID
==============
*/
__int64 bdAddrHandle::getPlatformID(bdAddrHandle *this)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v2; 
  bdPlatformID m_platformID; 

  m_ptr = this->m_endpoint.m_ca.m_ptr;
  v2 = m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v2 = m_ptr;
  }
  m_platformID = v2->m_platformID;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
  return (unsigned int)m_platformID;
}

/*
==============
bdAddrHandle::getRealAddr
==============
*/
const bdAddr *bdAddrHandle::getRealAddr(bdAddrHandle *this, const bdAddr *result)
{
  bdAddr::bdAddr((bdAddr *)result, &this->m_realAddr);
  return result;
}

/*
==============
bdAddrHandle::getSecID
==============
*/
void bdAddrHandle::getSecID(bdAddrHandle *this, bdSecurityID *secID)
{
  *secID = this->m_endpoint.m_secID;
}

/*
==============
bdAddrHandle::getUserData
==============
*/
void *bdAddrHandle::getUserData(bdAddrHandle *this)
{
  return this->m_userData;
}

/*
==============
bdAddrHandle::isResolved
==============
*/
bool bdAddrHandle::isResolved(bdAddrHandle *this)
{
  return (unsigned int)(this->m_status - 4) <= 1;
}

/*
==============
bdAddrHandle::setRealAddr
==============
*/
void bdAddrHandle::setRealAddr(bdAddrHandle *this, const bdAddr *realAddr)
{
  this->m_realAddr = *realAddr;
  this->m_status = BD_ADDR_RESOLVED;
}

/*
==============
bdAddrHandle::setUserData
==============
*/
void bdAddrHandle::setUserData(bdAddrHandle *this, void *userData)
{
  this->m_userData = userData;
}

