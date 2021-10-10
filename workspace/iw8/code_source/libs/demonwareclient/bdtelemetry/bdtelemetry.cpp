/*
==============
bdTelemetry::recordSampled
==============
*/

void __fastcall bdTelemetry::recordSampled(float sampleRate)
{
  ?recordSampled@bdTelemetry@@SAXM@Z(sampleRate);
}

/*
==============
bdTelemetry::addUPnP
==============
*/

void __fastcall bdTelemetry::addUPnP(const bdUPnPTelemetry *tel)
{
  ?addUPnP@bdTelemetry@@SAXAEBVbdUPnPTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::addNet
==============
*/

void __fastcall bdTelemetry::addNet(const bdNetTelemetry *tel)
{
  ?addNet@bdTelemetry@@SAXAEBVbdNetTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::addDTLSAssociation
==============
*/

void __fastcall bdTelemetry::addDTLSAssociation(const bdDTLSAssociationTelemetry *tel)
{
  ?addDTLSAssociation@bdTelemetry@@SAXAEBVbdDTLSAssociationTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::setRegion
==============
*/

void __fastcall bdTelemetry::setRegion(const bdDMLInfo *info)
{
  ?setRegion@bdTelemetry@@SAXAEBVbdDMLInfo@@@Z(info);
}

/*
==============
bdTelemetry::addRelayFallback
==============
*/

void __fastcall bdTelemetry::addRelayFallback(const bdReference<bdCommonAddr> *local, const bdReference<bdCommonAddr> *remote, const bool initialResult)
{
  ?addRelayFallback@bdTelemetry@@SAXAEBV?$bdReference@VbdCommonAddr@@@@0_N@Z(local, remote, initialResult);
}

/*
==============
bdTelemetry::record
==============
*/

void bdTelemetry::record(void)
{
  ?record@bdTelemetry@@SAXXZ();
}

/*
==============
bdTelemetry::addNatTypeDiscovery
==============
*/

void __fastcall bdTelemetry::addNatTypeDiscovery(const bdNATTypeDiscoveryTelemetry *tel)
{
  ?addNatTypeDiscovery@bdTelemetry@@SAXAEBVbdNATTypeDiscoveryTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::discard
==============
*/

void __fastcall bdTelemetry::discard(bdTelemetry::bdTelemetryContextID contextID)
{
  ?discard@bdTelemetry@@SAXW4bdTelemetryContextID@1@@Z(contextID);
}

/*
==============
bdTelemetry::addRelayAssociation
==============
*/

void __fastcall bdTelemetry::addRelayAssociation(const bdRelayAssociationTelemetry *tel)
{
  ?addRelayAssociation@bdTelemetry@@SAXAEBVbdRelayAssociationTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::addQoS
==============
*/

void __fastcall bdTelemetry::addQoS(const bdQoSTelemetry *tel)
{
  ?addQoS@bdTelemetry@@SAXAEBVbdQoSTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::addNatTrav
==============
*/

void __fastcall bdTelemetry::addNatTrav(const bdNATTravTelemetry *tel)
{
  ?addNatTrav@bdTelemetry@@SAXAEBVbdNATTravTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::setSink
==============
*/

void __fastcall bdTelemetry::setSink(bdTelemetrySink *sink)
{
  ?setSink@bdTelemetry@@SAXPEAVbdTelemetrySink@@@Z(sink);
}

/*
==============
bdTelemetry::addIPDisco
==============
*/

void __fastcall bdTelemetry::addIPDisco(const bdIPDiscoveryTelemetry *tel)
{
  ?addIPDisco@bdTelemetry@@SAXAEBVbdIPDiscoveryTelemetry@@@Z(tel);
}

/*
==============
bdTelemetry::addDTLSAssociation
==============
*/
void bdTelemetry::addDTLSAssociation(const bdDTLSAssociationTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addDTLSAssociation(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::addIPDisco
==============
*/
void bdTelemetry::addIPDisco(const bdIPDiscoveryTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addIPDisco(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::addNatTrav
==============
*/
void bdTelemetry::addNatTrav(const bdNATTravTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addNatTrav(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::addNatTypeDiscovery
==============
*/
void bdTelemetry::addNatTypeDiscovery(const bdNATTypeDiscoveryTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addNatTypeDiscovery(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::addNet
==============
*/
void bdTelemetry::addNet(const bdNetTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addNet(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::addQoS
==============
*/
void bdTelemetry::addQoS(const bdQoSTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addQoS(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::addRelayAssociation
==============
*/
void bdTelemetry::addRelayAssociation(const bdRelayAssociationTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addRelayAssociation(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::addRelayFallback
==============
*/
void bdTelemetry::addRelayFallback(const bdReference<bdCommonAddr> *local, const bdReference<bdCommonAddr> *remote, const bool initialResult)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addRelayFallback(bdTelemetry::m_sink, local, remote, initialResult);
}

/*
==============
bdTelemetry::addUPnP
==============
*/
void bdTelemetry::addUPnP(const bdUPnPTelemetry *tel)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->addUPnP(bdTelemetry::m_sink, tel);
}

/*
==============
bdTelemetry::discard
==============
*/
void bdTelemetry::discard(bdTelemetry::bdTelemetryContextID contextID)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->discard(bdTelemetry::m_sink, contextID);
}

/*
==============
bdTelemetry::record
==============
*/
void bdTelemetry::record(void)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->record(bdTelemetry::m_sink);
}

/*
==============
bdTelemetry::recordSampled
==============
*/
void bdTelemetry::recordSampled(float sampleRate)
{
  if ( bdTelemetry::m_sink )
    ((void (__fastcall *)(bdTelemetrySink *))bdTelemetry::m_sink->recordSampled)(bdTelemetry::m_sink);
}

/*
==============
bdTelemetry::setRegion
==============
*/
void bdTelemetry::setRegion(const bdDMLInfo *info)
{
  if ( bdTelemetry::m_sink )
    bdTelemetry::m_sink->setRegion(bdTelemetry::m_sink, info);
}

/*
==============
bdTelemetry::setSink
==============
*/
void bdTelemetry::setSink(bdTelemetrySink *sink)
{
  bdTelemetry::m_sink = sink;
}

