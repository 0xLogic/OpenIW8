/*
==============
bdRelayRoute::operator==
==============
*/

bool __fastcall bdRelayRoute::operator==(bdRelayRoute *this, const bdRelayRoute *other)
{
  return ??8bdRelayRoute@@QEBA_NAEBV0@@Z(this, other);
}

/*
==============
bdRelayRoute::getRoutingID
==============
*/

unsigned int __fastcall bdRelayRoute::getRoutingID(bdRelayRoute *this)
{
  return ?getRoutingID@bdRelayRoute@@QEBAIXZ(this);
}

/*
==============
bdRelayRoute::getRelayID
==============
*/

unsigned __int64 __fastcall bdRelayRoute::getRelayID(bdRelayRoute *this)
{
  return ?getRelayID@bdRelayRoute@@QEBA_KXZ(this);
}

/*
==============
bdRelayRoute::bdRelayRoute
==============
*/

void __fastcall bdRelayRoute::bdRelayRoute(bdRelayRoute *this, unsigned __int64 relayID, unsigned int relayRoutingID)
{
  ??0bdRelayRoute@@QEAA@_KI@Z(this, relayID, relayRoutingID);
}

/*
==============
bdRelayRoute::bdRelayRoute
==============
*/
void bdRelayRoute::bdRelayRoute(bdRelayRoute *this, unsigned __int64 relayID, unsigned int relayRoutingID)
{
  this->m_relayID = relayID;
  this->m_relayRoutingID = relayRoutingID;
}

/*
==============
bdRelayRoute::operator==
==============
*/
bool bdRelayRoute::operator==(bdRelayRoute *this, const bdRelayRoute *other)
{
  return this->m_relayID == other->m_relayID && this->m_relayRoutingID == other->m_relayRoutingID;
}

/*
==============
bdRelayRoute::getRelayID
==============
*/
unsigned __int64 bdRelayRoute::getRelayID(bdRelayRoute *this)
{
  return this->m_relayID;
}

/*
==============
bdRelayRoute::getRoutingID
==============
*/
__int64 bdRelayRoute::getRoutingID(bdRelayRoute *this)
{
  return this->m_relayRoutingID;
}

