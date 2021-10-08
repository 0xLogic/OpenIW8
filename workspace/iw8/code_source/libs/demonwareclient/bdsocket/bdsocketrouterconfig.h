/*
==============
bdSocketRouterRelayManager::shouldUseRelayIfNatTravFails
==============
*/

bool __fastcall bdSocketRouterRelayManager::shouldUseRelayIfNatTravFails(bdSocketRouterRelayManager *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bool initialResult)
{
  return ?shouldUseRelayIfNatTravFails@bdSocketRouterRelayManager@@UEAA_NV?$bdReference@VbdCommonAddr@@@@0_N@Z(this, local, remote, initialResult);
}

/*
==============
bdSocketRouterRelayManager::onRelayUpgradeSuccess
==============
*/

void __fastcall bdSocketRouterRelayManager::onRelayUpgradeSuccess(bdSocketRouterRelayManager *this)
{
  ?onRelayUpgradeSuccess@bdSocketRouterRelayManager@@UEAAXXZ(this);
}

/*
==============
bdSocketRouterRelayManager::handleMigrate
==============
*/

void __fastcall bdSocketRouterRelayManager::handleMigrate(bdSocketRouterRelayManager *this, const bdAddr *relayAddr)
{
  ?handleMigrate@bdSocketRouterRelayManager@@UEAAXAEBVbdAddr@@@Z(this, relayAddr);
}

/*
==============
bdSocketRouterRelayManager::onRelayUpgradeFailure
==============
*/

void __fastcall bdSocketRouterRelayManager::onRelayUpgradeFailure(bdSocketRouterRelayManager *this)
{
  ?onRelayUpgradeFailure@bdSocketRouterRelayManager@@UEAAXXZ(this);
}

/*
==============
bdSocketRouterRelayManager::~bdSocketRouterRelayManager
==============
*/

void __fastcall bdSocketRouterRelayManager::~bdSocketRouterRelayManager(bdSocketRouterRelayManager *this)
{
  ??1bdSocketRouterRelayManager@@UEAA@XZ(this);
}

/*
==============
bdSocketRouterRelayManager::onRelayAssociationError
==============
*/

void __fastcall bdSocketRouterRelayManager::onRelayAssociationError(bdSocketRouterRelayManager *this)
{
  ?onRelayAssociationError@bdSocketRouterRelayManager@@UEAAXXZ(this);
}

/*
==============
bdSocketRouterRelayManager::shouldUseRelay
==============
*/

bool __fastcall bdSocketRouterRelayManager::shouldUseRelay(bdSocketRouterRelayManager *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bool initialResult)
{
  return ?shouldUseRelay@bdSocketRouterRelayManager@@UEAA_NV?$bdReference@VbdCommonAddr@@@@0_N@Z(this, local, remote, initialResult);
}

/*
==============
bdSocketRouterRelayManager::~bdSocketRouterRelayManager
==============
*/
void bdSocketRouterRelayManager::~bdSocketRouterRelayManager(bdSocketRouterRelayManager *this)
{
  this->__vftable = (bdSocketRouterRelayManager_vtbl *)&bdSocketRouterRelayManager::`vftable';
}

/*
==============
bdSocketRouterRelayManager::handleMigrate
==============
*/
void bdSocketRouterRelayManager::handleMigrate(bdSocketRouterRelayManager *this, const bdAddr *relayAddr)
{
  ;
}

/*
==============
bdSocketRouterRelayManager::onRelayAssociationError
==============
*/
void bdSocketRouterRelayManager::onRelayAssociationError(bdSocketRouterRelayManager *this)
{
  ;
}

/*
==============
bdSocketRouterRelayManager::onRelayUpgradeFailure
==============
*/
void bdSocketRouterRelayManager::onRelayUpgradeFailure(bdSocketRouterRelayManager *this)
{
  ;
}

/*
==============
bdSocketRouterRelayManager::onRelayUpgradeSuccess
==============
*/
void bdSocketRouterRelayManager::onRelayUpgradeSuccess(bdSocketRouterRelayManager *this)
{
  ;
}

/*
==============
bdSocketRouterRelayManager::shouldUseRelay
==============
*/
_BOOL8 bdSocketRouterRelayManager::shouldUseRelay(bdSocketRouterRelayManager *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bool initialResult)
{
  if ( local.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&local.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( local.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))local.m_ptr->~bdReferencable)(local.m_ptr->__vftable, 1i64);
    local.m_ptr->__vftable = NULL;
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return initialResult;
}

/*
==============
bdSocketRouterRelayManager::shouldUseRelayIfNatTravFails
==============
*/
_BOOL8 bdSocketRouterRelayManager::shouldUseRelayIfNatTravFails(bdSocketRouterRelayManager *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bool initialResult)
{
  if ( local.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&local.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( local.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))local.m_ptr->~bdReferencable)(local.m_ptr->__vftable, 1i64);
    local.m_ptr->__vftable = NULL;
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
  return initialResult;
}

