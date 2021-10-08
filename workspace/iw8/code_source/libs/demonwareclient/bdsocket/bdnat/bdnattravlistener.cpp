/*
==============
bdNATTravListener::bdNATTravListener
==============
*/

void __fastcall bdNATTravListener::bdNATTravListener(bdNATTravListener *this)
{
  ??0bdNATTravListener@@QEAA@XZ(this);
}

/*
==============
bdNATTravListener::onNATAddrDiscovery
==============
*/

void __fastcall bdNATTravListener::onNATAddrDiscovery(bdNATTravListener *this, bdReference<bdCommonAddr> __formal, const bdAddr *a3)
{
  ?onNATAddrDiscovery@bdNATTravListener@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, __formal, a3);
}

/*
==============
bdNATTravListener::~bdNATTravListener
==============
*/

void __fastcall bdNATTravListener::~bdNATTravListener(bdNATTravListener *this)
{
  ??1bdNATTravListener@@UEAA@XZ(this);
}

/*
==============
bdNATTravListener::onNATAddrDiscoveryFailed
==============
*/

void __fastcall bdNATTravListener::onNATAddrDiscoveryFailed(bdNATTravListener *this, bdReference<bdCommonAddr> __formal)
{
  ?onNATAddrDiscoveryFailed@bdNATTravListener@@UEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, __formal);
}

/*
==============
bdNATTravListener::bdNATTravListener
==============
*/
void bdNATTravListener::bdNATTravListener(bdNATTravListener *this)
{
  this->__vftable = (bdNATTravListener_vtbl *)&bdNATTravListener::`vftable';
}

/*
==============
bdNATTravListener::~bdNATTravListener
==============
*/
void bdNATTravListener::~bdNATTravListener(bdNATTravListener *this)
{
  this->__vftable = (bdNATTravListener_vtbl *)&bdNATTravListener::`vftable';
}

/*
==============
bdNATTravListener::onNATAddrDiscovery
==============
*/
void bdNATTravListener::onNATAddrDiscovery(bdNATTravListener *this, bdReference<bdCommonAddr> __formal, const bdAddr *a3)
{
  if ( __formal.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&__formal.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( __formal.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64, const bdAddr *))__formal.m_ptr->~bdReferencable)(__formal.m_ptr->__vftable, 1i64, a3);
    __formal.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdNATTravListener::onNATAddrDiscoveryFailed
==============
*/
void bdNATTravListener::onNATAddrDiscoveryFailed(bdNATTravListener *this, bdReference<bdCommonAddr> __formal)
{
  if ( __formal.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&__formal.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( __formal.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))__formal.m_ptr->~bdReferencable)(__formal.m_ptr->__vftable, 1i64);
    __formal.m_ptr->__vftable = NULL;
  }
}

