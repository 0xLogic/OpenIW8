/*
==============
bdWinRTPtr::notNull
==============
*/

bool __fastcall bdWinRTPtr::notNull(bdWinRTPtr *this)
{
  return ?notNull@bdWinRTPtr@@QEAA?B_NXZ(this);
}

/*
==============
bdWinRTPtr::bdWinRTPtr
==============
*/

void __fastcall bdWinRTPtr::bdWinRTPtr(bdWinRTPtr *this, IUnknown *ptr)
{
  ??0bdWinRTPtr@@QEAA@PEAUIUnknown@@@Z(this, ptr);
}

/*
==============
bdWinRTPtr::get
==============
*/

IUnknown *__fastcall bdWinRTPtr::get(bdWinRTPtr *this)
{
  return ?get@bdWinRTPtr@@QEAAPEAUIUnknown@@XZ(this);
}

/*
==============
bdWinRTPtr::bdWinRTPtr
==============
*/

void __fastcall bdWinRTPtr::bdWinRTPtr(bdWinRTPtr *this)
{
  ??0bdWinRTPtr@@QEAA@XZ(this);
}

/*
==============
bdWinRTPtr::~bdWinRTPtr
==============
*/

void __fastcall bdWinRTPtr::~bdWinRTPtr(bdWinRTPtr *this)
{
  ??1bdWinRTPtr@@UEAA@XZ(this);
}

/*
==============
bdWinRTPtr::isNull
==============
*/

bool __fastcall bdWinRTPtr::isNull(bdWinRTPtr *this)
{
  return ?isNull@bdWinRTPtr@@QEAA?B_NXZ(this);
}

/*
==============
bdWinRTPtr::bdWinRTPtr
==============
*/
void bdWinRTPtr::bdWinRTPtr(bdWinRTPtr *this, IUnknown *ptr)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdWinRTPtr_vtbl *)&bdWinRTPtr::`vftable';
  this->m_ptr = ptr;
  if ( ptr )
    ptr->AddRef(ptr);
}

/*
==============
bdWinRTPtr::bdWinRTPtr
==============
*/
void bdWinRTPtr::bdWinRTPtr(bdWinRTPtr *this)
{
  this->m_refCount.m_value._My_val = 0;
  this->__vftable = (bdWinRTPtr_vtbl *)&bdWinRTPtr::`vftable';
  this->m_ptr = NULL;
}

/*
==============
bdWinRTPtr::~bdWinRTPtr
==============
*/
void bdWinRTPtr::~bdWinRTPtr(bdWinRTPtr *this)
{
  IUnknown *m_ptr; 

  this->__vftable = (bdWinRTPtr_vtbl *)&bdWinRTPtr::`vftable';
  m_ptr = this->m_ptr;
  if ( m_ptr )
  {
    m_ptr->Release(m_ptr);
    this->m_ptr = NULL;
  }
  bdReferencable::~bdReferencable(this);
}

/*
==============
bdWinRTPtr::get
==============
*/
IUnknown *bdWinRTPtr::get(bdWinRTPtr *this)
{
  bdHandleAssert(this->m_ptr != NULL, "m_ptr != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdreference\\bdwinrtptr.cpp", "bdWinRTPtr::get", 0x25u, "IUnknown pointer has not been set");
  return this->m_ptr;
}

/*
==============
bdWinRTPtr::isNull
==============
*/
bool bdWinRTPtr::isNull(bdWinRTPtr *this)
{
  return this->m_ptr == NULL;
}

/*
==============
bdWinRTPtr::notNull
==============
*/
bool bdWinRTPtr::notNull(bdWinRTPtr *this)
{
  return this->m_ptr != NULL;
}

