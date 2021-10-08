/*
==============
bdReferencable::bdReferencable
==============
*/

void __fastcall bdReferencable::bdReferencable(bdReferencable *this, const bdReferencable *__formal)
{
  ??0bdReferencable@@QEAA@AEBV0@@Z(this, __formal);
}

/*
==============
bdReferencable::~bdReferencable
==============
*/

void __fastcall bdReferencable::~bdReferencable(bdReferencable *this)
{
  ??1bdReferencable@@UEAA@XZ(this);
}

/*
==============
bdReferencable::operator=
==============
*/

const bdReferencable *__fastcall bdReferencable::operator=(bdReferencable *this, const bdReferencable *__formal)
{
  return ??4bdReferencable@@QEAAAEBV0@AEBV0@@Z(this, __formal);
}

/*
==============
bdReferencable::bdReferencable
==============
*/
void bdReferencable::bdReferencable(bdReferencable *this, const bdReferencable *__formal)
{
  this->__vftable = (bdReferencable_vtbl *)&bdReferencable::`vftable';
  this->m_refCount.m_value._My_val = 0;
}

/*
==============
bdReferencable::~bdReferencable
==============
*/
void bdReferencable::~bdReferencable(bdReferencable *this)
{
  this->__vftable = (bdReferencable_vtbl *)&bdReferencable::`vftable';
}

/*
==============
bdReferencable::operator=
==============
*/
bdReferencable *bdReferencable::operator=(bdReferencable *this, const bdReferencable *__formal)
{
  return this;
}

