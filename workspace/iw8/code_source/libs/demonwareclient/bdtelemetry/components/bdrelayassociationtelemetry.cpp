/*
==============
bdRelayAssociationTelemetry::setInitAckStageTime
==============
*/

void __fastcall bdRelayAssociationTelemetry::setInitAckStageTime(bdRelayAssociationTelemetry *this)
{
  ?setInitAckStageTime@bdRelayAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdRelayAssociationTelemetry::addReceivedData
==============
*/

void __fastcall bdRelayAssociationTelemetry::addReceivedData(bdRelayAssociationTelemetry *this, const unsigned int numBytes)
{
  ?addReceivedData@bdRelayAssociationTelemetry@@QEAAXI@Z(this, numBytes);
}

/*
==============
bdRelayAssociationTelemetry::setInitResends
==============
*/

void __fastcall bdRelayAssociationTelemetry::setInitResends(bdRelayAssociationTelemetry *this, const unsigned __int8 initResends)
{
  ?setInitResends@bdRelayAssociationTelemetry@@QEAAXE@Z(this, initResends);
}

/*
==============
bdRelayAssociationTelemetry::setRecvSeqNum
==============
*/

void __fastcall bdRelayAssociationTelemetry::setRecvSeqNum(bdRelayAssociationTelemetry *this, const int recvSeqNum)
{
  ?setRecvSeqNum@bdRelayAssociationTelemetry@@QEAAXH@Z(this, recvSeqNum);
}

/*
==============
bdRelayAssociationTelemetry::bdRelayAssociationTelemetry
==============
*/

void __fastcall bdRelayAssociationTelemetry::bdRelayAssociationTelemetry(bdRelayAssociationTelemetry *this, const unsigned __int8 associationType, const unsigned __int64 relayID, const bdAddr *relayAddr)
{
  ??0bdRelayAssociationTelemetry@@QEAA@E_KAEBVbdAddr@@@Z(this, associationType, relayID, relayAddr);
}

/*
==============
bdRelayAssociationTelemetry::setEstablishedStageTime
==============
*/

void __fastcall bdRelayAssociationTelemetry::setEstablishedStageTime(bdRelayAssociationTelemetry *this)
{
  ?setEstablishedStageTime@bdRelayAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdRelayAssociationTelemetry::setLastError
==============
*/

void __fastcall bdRelayAssociationTelemetry::setLastError(bdRelayAssociationTelemetry *this, const bdRelayAssociationError error)
{
  ?setLastError@bdRelayAssociationTelemetry@@QEAAXW4bdRelayAssociationError@@@Z(this, error);
}

/*
==============
bdRelayAssociationTelemetry::addSentData
==============
*/

void __fastcall bdRelayAssociationTelemetry::addSentData(bdRelayAssociationTelemetry *this, const unsigned int numBytes)
{
  ?addSentData@bdRelayAssociationTelemetry@@QEAAXI@Z(this, numBytes);
}

/*
==============
bdRelayAssociationTelemetry::setVerifyResends
==============
*/

void __fastcall bdRelayAssociationTelemetry::setVerifyResends(bdRelayAssociationTelemetry *this, const unsigned __int8 verifyResends)
{
  ?setVerifyResends@bdRelayAssociationTelemetry@@QEAAXE@Z(this, verifyResends);
}

/*
==============
bdRelayAssociationTelemetry::setLifetime
==============
*/

void __fastcall bdRelayAssociationTelemetry::setLifetime(bdRelayAssociationTelemetry *this)
{
  ?setLifetime@bdRelayAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdRelayAssociationTelemetry::setRoutingID
==============
*/

void __fastcall bdRelayAssociationTelemetry::setRoutingID(bdRelayAssociationTelemetry *this, const unsigned int routingID)
{
  ?setRoutingID@bdRelayAssociationTelemetry@@QEAAXI@Z(this, routingID);
}

/*
==============
bdRelayAssociationTelemetry::setUpgradeResends
==============
*/

void __fastcall bdRelayAssociationTelemetry::setUpgradeResends(bdRelayAssociationTelemetry *this, const unsigned __int8 upgradeResends)
{
  ?setUpgradeResends@bdRelayAssociationTelemetry@@QEAAXE@Z(this, upgradeResends);
}

/*
==============
bdRelayAssociationTelemetry::setSendSeqNum
==============
*/

void __fastcall bdRelayAssociationTelemetry::setSendSeqNum(bdRelayAssociationTelemetry *this, const int sendSeqNum)
{
  ?setSendSeqNum@bdRelayAssociationTelemetry@@QEAAXH@Z(this, sendSeqNum);
}

/*
==============
bdRelayAssociationTelemetry::setDisconnectResends
==============
*/

void __fastcall bdRelayAssociationTelemetry::setDisconnectResends(bdRelayAssociationTelemetry *this, const unsigned __int8 disconnectResends)
{
  ?setDisconnectResends@bdRelayAssociationTelemetry@@QEAAXE@Z(this, disconnectResends);
}

/*
==============
bdRelayAssociationTelemetry::setStartStageTime
==============
*/

void __fastcall bdRelayAssociationTelemetry::setStartStageTime(bdRelayAssociationTelemetry *this)
{
  ?setStartStageTime@bdRelayAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdRelayAssociationTelemetry::bdRelayAssociationTelemetry
==============
*/
void bdRelayAssociationTelemetry::bdRelayAssociationTelemetry(bdRelayAssociationTelemetry *this, const unsigned __int8 associationType, const unsigned __int64 relayID, const bdAddr *relayAddr)
{
  this->m_associationType = associationType;
  *(_QWORD *)&this->m_routingID = 0i64;
  *(_DWORD *)&this->m_initResends = 0;
  *(_QWORD *)&this->m_sendSeqNum = 0i64;
  *(_QWORD *)&this->m_timeToStartMs = 0i64;
  *(_QWORD *)&this->m_timeToEstablishedMs = 0i64;
  this->m_receivedData = 0;
  this->m_lastError = 0;
  this->m_relayID = relayID;
  this->m_relayAddr = relayAddr;
  bdGlobalStopwatch::bdGlobalStopwatch(&this->m_age);
  bdGlobalStopwatch::start(&this->m_age);
}

/*
==============
bdRelayAssociationTelemetry::addReceivedData
==============
*/
void bdRelayAssociationTelemetry::addReceivedData(bdRelayAssociationTelemetry *this, const unsigned int numBytes)
{
  this->m_receivedData += numBytes;
}

/*
==============
bdRelayAssociationTelemetry::addSentData
==============
*/
void bdRelayAssociationTelemetry::addSentData(bdRelayAssociationTelemetry *this, const unsigned int numBytes)
{
  this->m_sentData += numBytes;
}

/*
==============
bdRelayAssociationTelemetry::setDisconnectResends
==============
*/
void bdRelayAssociationTelemetry::setDisconnectResends(bdRelayAssociationTelemetry *this, const unsigned __int8 disconnectResends)
{
  this->m_disconnectResends = disconnectResends;
}

/*
==============
bdRelayAssociationTelemetry::setEstablishedStageTime
==============
*/
void bdRelayAssociationTelemetry::setEstablishedStageTime(bdRelayAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_timeToEstablishedMs = _RAX;
}

/*
==============
bdRelayAssociationTelemetry::setInitAckStageTime
==============
*/
void bdRelayAssociationTelemetry::setInitAckStageTime(bdRelayAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_timeToInitAckMs = _RAX;
}

/*
==============
bdRelayAssociationTelemetry::setInitResends
==============
*/
void bdRelayAssociationTelemetry::setInitResends(bdRelayAssociationTelemetry *this, const unsigned __int8 initResends)
{
  this->m_initResends = initResends;
}

/*
==============
bdRelayAssociationTelemetry::setLastError
==============
*/
void bdRelayAssociationTelemetry::setLastError(bdRelayAssociationTelemetry *this, const bdRelayAssociationError error)
{
  this->m_lastError = error;
}

/*
==============
bdRelayAssociationTelemetry::setLifetime
==============
*/
void bdRelayAssociationTelemetry::setLifetime(bdRelayAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_lifeTimeMs = _RAX;
}

/*
==============
bdRelayAssociationTelemetry::setRecvSeqNum
==============
*/
void bdRelayAssociationTelemetry::setRecvSeqNum(bdRelayAssociationTelemetry *this, const int recvSeqNum)
{
  this->m_recvSeqNum = recvSeqNum;
}

/*
==============
bdRelayAssociationTelemetry::setRoutingID
==============
*/
void bdRelayAssociationTelemetry::setRoutingID(bdRelayAssociationTelemetry *this, const unsigned int routingID)
{
  this->m_routingID = routingID;
}

/*
==============
bdRelayAssociationTelemetry::setSendSeqNum
==============
*/
void bdRelayAssociationTelemetry::setSendSeqNum(bdRelayAssociationTelemetry *this, const int sendSeqNum)
{
  this->m_sendSeqNum = sendSeqNum;
}

/*
==============
bdRelayAssociationTelemetry::setStartStageTime
==============
*/
void bdRelayAssociationTelemetry::setStartStageTime(bdRelayAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdGlobalStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_timeToStartMs = _RAX;
}

/*
==============
bdRelayAssociationTelemetry::setUpgradeResends
==============
*/
void bdRelayAssociationTelemetry::setUpgradeResends(bdRelayAssociationTelemetry *this, const unsigned __int8 upgradeResends)
{
  this->m_upgradeResends = upgradeResends;
}

/*
==============
bdRelayAssociationTelemetry::setVerifyResends
==============
*/
void bdRelayAssociationTelemetry::setVerifyResends(bdRelayAssociationTelemetry *this, const unsigned __int8 verifyResends)
{
  this->m_verifyResends = verifyResends;
}

