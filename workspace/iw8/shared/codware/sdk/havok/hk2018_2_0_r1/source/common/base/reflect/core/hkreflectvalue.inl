/*
==============
hkReflect::Detail::ImplPtr::~ImplPtr
==============
*/

void __fastcall hkReflect::Detail::ImplPtr::~ImplPtr(hkReflect::Detail::ImplPtr *this)
{
  ??1ImplPtr@Detail@hkReflect@@QEAA@XZ(this);
}

/*
==============
hkReflect::Detail::ImplPtr::~ImplPtr
==============
*/
void hkReflect::Detail::ImplPtr::~ImplPtr(hkReflect::Detail::ImplPtr *this)
{
  if ( ((__int64)this->m_ptrAndInt & 1) != 0 )
    hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)this->m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
}

