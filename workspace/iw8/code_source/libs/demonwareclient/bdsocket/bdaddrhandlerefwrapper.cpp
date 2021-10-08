/*
==============
bdAddrHandleRefWrapper::getHash
==============
*/

unsigned int __fastcall bdAddrHandleRefWrapper::getHash(bdAddrHandleRefWrapper *this, const bdAddrHandleRefWrapper *addr)
{
  return ?getHash@bdAddrHandleRefWrapper@@QEBAIAEBV1@@Z(this, addr);
}

/*
==============
bdAddrHandleRefWrapper::bdAddrHandleRefWrapper
==============
*/

void __fastcall bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(bdAddrHandleRefWrapper *this, bdReference<bdAddrHandle> handle)
{
  ??0bdAddrHandleRefWrapper@@QEAA@V?$bdReference@VbdAddrHandle@@@@@Z(this, handle);
}

/*
==============
bdAddrHandleRefWrapper::bdAddrHandleRefWrapper
==============
*/

void __fastcall bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(bdAddrHandleRefWrapper *this)
{
  ??0bdAddrHandleRefWrapper@@QEAA@XZ(this);
}

/*
==============
bdAddrHandleRefWrapper::operator==
==============
*/

bool __fastcall bdAddrHandleRefWrapper::operator==(bdAddrHandleRefWrapper *this, const bdAddrHandleRefWrapper *other)
{
  return ??8bdAddrHandleRefWrapper@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdAddrHandleRefWrapper::getHandle
==============
*/

bdReference<bdAddrHandle> *__fastcall bdAddrHandleRefWrapper::getHandle(bdAddrHandleRefWrapper *this, bdReference<bdAddrHandle> *result)
{
  return ?getHandle@bdAddrHandleRefWrapper@@QEBA?AV?$bdReference@VbdAddrHandle@@@@XZ(this, result);
}

/*
==============
bdAddrHandleRefWrapper::bdAddrHandleRefWrapper
==============
*/
void bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(bdAddrHandleRefWrapper *this, bdReference<bdAddrHandle> handle)
{
  bdAddrHandle_vtbl *v4; 

  v4 = handle.m_ptr->__vftable;
  this->m_handle.m_ptr = (bdAddrHandle *)handle.m_ptr->__vftable;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4[1], 1u);
  if ( handle.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&handle.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( handle.m_ptr->__vftable )
      (*(void (__fastcall **)(bdAddrHandle_vtbl *, __int64))handle.m_ptr->~bdReferencable)(handle.m_ptr->__vftable, 1i64);
    handle.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdAddrHandleRefWrapper::bdAddrHandleRefWrapper
==============
*/
void bdAddrHandleRefWrapper::bdAddrHandleRefWrapper(bdAddrHandleRefWrapper *this)
{
  this->m_handle.m_ptr = NULL;
}

/*
==============
bdAddrHandleRefWrapper::operator==
==============
*/
bool bdAddrHandleRefWrapper::operator==(bdAddrHandleRefWrapper *this, const bdAddrHandleRefWrapper *other)
{
  bdAddrHandle *m_ptr; 
  bdAddrHandle *v3; 

  m_ptr = this->m_handle.m_ptr;
  if ( m_ptr )
  {
    v3 = other->m_handle.m_ptr;
    if ( v3 )
      return bdAddrHandle::operator==(m_ptr, v3);
  }
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/bdAddrHandle", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdsocket\\bdaddrhandlerefwrapper.cpp", "bdAddrHandleRefWrapper::operator ==", 0x1Fu, "Unexpected Null addrHandle.");
  return 0;
}

/*
==============
bdAddrHandleRefWrapper::getHandle
==============
*/
bdReference<bdAddrHandle> *bdAddrHandleRefWrapper::getHandle(bdAddrHandleRefWrapper *this, bdReference<bdAddrHandle> *result)
{
  bdAddrHandle *m_ptr; 

  m_ptr = this->m_handle.m_ptr;
  result->m_ptr = (bdAddrHandle *)this->m_handle;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  return result;
}

/*
==============
bdAddrHandleRefWrapper::getHash
==============
*/
unsigned int bdAddrHandleRefWrapper::getHash(bdAddrHandleRefWrapper *this, const bdAddrHandleRefWrapper *addr)
{
  bdEndpointHashingClass v3; 

  return bdEndpointHashingClass::getHash(&v3, &addr->m_handle.m_ptr->m_endpoint);
}

