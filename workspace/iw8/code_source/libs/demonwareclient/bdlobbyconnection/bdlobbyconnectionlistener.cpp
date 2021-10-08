/*
==============
bdLobbyConnectionListener::onDisconnect
==============
*/

void __fastcall bdLobbyConnectionListener::onDisconnect(bdLobbyConnectionListener *this, bdReference<bdLobbyConnection> __formal)
{
  ?onDisconnect@bdLobbyConnectionListener@@UEAAXV?$bdReference@VbdLobbyConnection@@@@@Z(this, __formal);
}

/*
==============
bdLobbyConnectionListener::onConnectFailed
==============
*/

void __fastcall bdLobbyConnectionListener::onConnectFailed(bdLobbyConnectionListener *this, bdReference<bdLobbyConnection> __formal)
{
  ?onConnectFailed@bdLobbyConnectionListener@@UEAAXV?$bdReference@VbdLobbyConnection@@@@@Z(this, __formal);
}

/*
==============
bdLobbyConnectionListener::onConnect
==============
*/

void __fastcall bdLobbyConnectionListener::onConnect(bdLobbyConnectionListener *this, bdReference<bdLobbyConnection> __formal)
{
  ?onConnect@bdLobbyConnectionListener@@UEAAXV?$bdReference@VbdLobbyConnection@@@@@Z(this, __formal);
}

/*
==============
bdLobbyConnectionListener::bdLobbyConnectionListener
==============
*/

void __fastcall bdLobbyConnectionListener::bdLobbyConnectionListener(bdLobbyConnectionListener *this)
{
  ??0bdLobbyConnectionListener@@QEAA@XZ(this);
}

/*
==============
bdLobbyConnectionListener::~bdLobbyConnectionListener
==============
*/

void __fastcall bdLobbyConnectionListener::~bdLobbyConnectionListener(bdLobbyConnectionListener *this)
{
  ??1bdLobbyConnectionListener@@UEAA@XZ(this);
}

/*
==============
bdLobbyConnectionListener::bdLobbyConnectionListener
==============
*/
void bdLobbyConnectionListener::bdLobbyConnectionListener(bdLobbyConnectionListener *this)
{
  this->__vftable = (bdLobbyConnectionListener_vtbl *)&bdLobbyConnectionListener::`vftable';
}

/*
==============
bdLobbyConnectionListener::~bdLobbyConnectionListener
==============
*/
void bdLobbyConnectionListener::~bdLobbyConnectionListener(bdLobbyConnectionListener *this)
{
  this->__vftable = (bdLobbyConnectionListener_vtbl *)&bdLobbyConnectionListener::`vftable';
}

/*
==============
bdLobbyConnectionListener::onConnect
==============
*/
void bdLobbyConnectionListener::onConnect(bdLobbyConnectionListener *this, bdReference<bdLobbyConnection> __formal)
{
  if ( __formal.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&__formal.m_ptr->sendTask, 0xFFFFFFFF) == 1 )
  {
    if ( __formal.m_ptr->__vftable )
      (*(void (__fastcall **)(bdLobbyConnection_vtbl *, __int64))__formal.m_ptr->~bdReferencable)(__formal.m_ptr->__vftable, 1i64);
    __formal.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdLobbyConnectionListener::onConnectFailed
==============
*/
void bdLobbyConnectionListener::onConnectFailed(bdLobbyConnectionListener *this, bdReference<bdLobbyConnection> __formal)
{
  if ( __formal.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&__formal.m_ptr->sendTask, 0xFFFFFFFF) == 1 )
  {
    if ( __formal.m_ptr->__vftable )
      (*(void (__fastcall **)(bdLobbyConnection_vtbl *, __int64))__formal.m_ptr->~bdReferencable)(__formal.m_ptr->__vftable, 1i64);
    __formal.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdLobbyConnectionListener::onDisconnect
==============
*/
void bdLobbyConnectionListener::onDisconnect(bdLobbyConnectionListener *this, bdReference<bdLobbyConnection> __formal)
{
  if ( __formal.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&__formal.m_ptr->sendTask, 0xFFFFFFFF) == 1 )
  {
    if ( __formal.m_ptr->__vftable )
      (*(void (__fastcall **)(bdLobbyConnection_vtbl *, __int64))__formal.m_ptr->~bdReferencable)(__formal.m_ptr->__vftable, 1i64);
    __formal.m_ptr->__vftable = NULL;
  }
}

