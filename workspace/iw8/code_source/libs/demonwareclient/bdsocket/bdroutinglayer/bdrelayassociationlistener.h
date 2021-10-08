/*
==============
bdRelayAssociationListener::~bdRelayAssociationListener
==============
*/

void __fastcall bdRelayAssociationListener::~bdRelayAssociationListener(bdRelayAssociationListener *this)
{
  ??1bdRelayAssociationListener@@UEAA@XZ(this);
}

/*
==============
bdRelayAssociationListener::onRelayBindSuccess
==============
*/

void __fastcall bdRelayAssociationListener::onRelayBindSuccess(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ?onRelayBindSuccess@bdRelayAssociationListener@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdRelayAssociationListener::onRelayConnectionFailure
==============
*/

void __fastcall bdRelayAssociationListener::onRelayConnectionFailure(bdRelayAssociationListener *this, const bdReference<bdCommonAddr> remote)
{
  ?onRelayConnectionFailure@bdRelayAssociationListener@@UEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdRelayAssociationListener::onRelayBindFailure
==============
*/

void __fastcall bdRelayAssociationListener::onRelayBindFailure(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ?onRelayBindFailure@bdRelayAssociationListener@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdRelayAssociationListener::onRelayConnectionSuccess
==============
*/

void __fastcall bdRelayAssociationListener::onRelayConnectionSuccess(bdRelayAssociationListener *this, const bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  ?onRelayConnectionSuccess@bdRelayAssociationListener@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, realAddr);
}

/*
==============
bdRelayAssociationListener::onRelayUpgradeFailure
==============
*/

void __fastcall bdRelayAssociationListener::onRelayUpgradeFailure(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ?onRelayUpgradeFailure@bdRelayAssociationListener@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdRelayAssociationListener::onRelayAssociationMigrate
==============
*/

void __fastcall bdRelayAssociationListener::onRelayAssociationMigrate(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ?onRelayAssociationMigrate@bdRelayAssociationListener@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdRelayAssociationListener::onRelayUpgradeSuccess
==============
*/

void __fastcall bdRelayAssociationListener::onRelayUpgradeSuccess(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ?onRelayUpgradeSuccess@bdRelayAssociationListener@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdRelayAssociationListener::onRelayAssociationError
==============
*/

void __fastcall bdRelayAssociationListener::onRelayAssociationError(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ?onRelayAssociationError@bdRelayAssociationListener@@UEAAXAEBVbdRelayAssociation@@@Z(this, assoc);
}

/*
==============
bdRelayAssociationListener::~bdRelayAssociationListener
==============
*/
void bdRelayAssociationListener::~bdRelayAssociationListener(bdRelayAssociationListener *this)
{
  this->__vftable = (bdRelayAssociationListener_vtbl *)&bdRelayAssociationListener::`vftable';
}

/*
==============
bdRelayAssociationListener::onRelayAssociationError
==============
*/
void bdRelayAssociationListener::onRelayAssociationError(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ;
}

/*
==============
bdRelayAssociationListener::onRelayAssociationMigrate
==============
*/
void bdRelayAssociationListener::onRelayAssociationMigrate(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ;
}

/*
==============
bdRelayAssociationListener::onRelayBindFailure
==============
*/
void bdRelayAssociationListener::onRelayBindFailure(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ;
}

/*
==============
bdRelayAssociationListener::onRelayBindSuccess
==============
*/
void bdRelayAssociationListener::onRelayBindSuccess(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ;
}

/*
==============
bdRelayAssociationListener::onRelayConnectionFailure
==============
*/
void bdRelayAssociationListener::onRelayConnectionFailure(bdRelayAssociationListener *this, const bdReference<bdCommonAddr> remote)
{
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdRelayAssociationListener::onRelayConnectionSuccess
==============
*/
void bdRelayAssociationListener::onRelayConnectionSuccess(bdRelayAssociationListener *this, const bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64, const bdAddr *))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64, realAddr);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdRelayAssociationListener::onRelayUpgradeFailure
==============
*/
void bdRelayAssociationListener::onRelayUpgradeFailure(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ;
}

/*
==============
bdRelayAssociationListener::onRelayUpgradeSuccess
==============
*/
void bdRelayAssociationListener::onRelayUpgradeSuccess(bdRelayAssociationListener *this, const bdRelayAssociation *assoc)
{
  ;
}

