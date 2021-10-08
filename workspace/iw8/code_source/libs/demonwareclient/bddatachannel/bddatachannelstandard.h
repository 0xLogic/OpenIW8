/*
==============
bdDataChannelStandard::operator delete
==============
*/

void __fastcall bdDataChannelStandard::operator delete(void *p)
{
  ??3bdDataChannelStandard@@SAXPEAX@Z(p);
}

/*
==============
bdDataChannelStandard::~bdDataChannelStandard
==============
*/

void __fastcall bdDataChannelStandard::~bdDataChannelStandard(bdDataChannelStandard *this)
{
  ??1bdDataChannelStandard@@UEAA@XZ(this);
}

/*
==============
bdDataChannelStandard::operator delete
==============
*/
void bdDataChannelStandard::operator delete(void *p)
{
  bdMemory::deallocate(p);
}

/*
==============
bdDataChannelStandard::~bdDataChannelStandard
==============
*/
void bdDataChannelStandard::~bdDataChannelStandard(bdDataChannelStandard *this)
{
  this->__vftable = (bdDataChannelStandard_vtbl *)&bdDataChannelStandard::`vftable';
  bdUUIDGenerator::~bdUUIDGenerator(&this->m_uuidGenerator);
  bdDataChannelBase::~bdDataChannelBase(this);
}

