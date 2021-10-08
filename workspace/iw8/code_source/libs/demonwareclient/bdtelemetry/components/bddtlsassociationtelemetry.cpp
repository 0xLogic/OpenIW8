/*
==============
bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry
==============
*/

void __fastcall bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry(bdDTLSAssociationTelemetry *this)
{
  ??0bdDTLSAssociationTelemetry@@QEAA@XZ(this);
}

/*
==============
bdDTLSAssociationTelemetry::setPeerAddr
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setPeerAddr(bdDTLSAssociationTelemetry *this, const bdAddr *peerAddr)
{
  ?setPeerAddr@bdDTLSAssociationTelemetry@@QEAAXVbdAddr@@@Z(this, peerAddr);
}

/*
==============
bdDTLSAssociationTelemetry::setState
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setState(bdDTLSAssociationTelemetry *this, const bdDTLSAssociationTelemetry::bdDTLSAssociationState state)
{
  ?setState@bdDTLSAssociationTelemetry@@QEAAXW4bdDTLSAssociationState@1@@Z(this, state);
}

/*
==============
bdDTLSAssociationTelemetry::setCookieResends
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setCookieResends(bdDTLSAssociationTelemetry *this, const unsigned __int8 cookieResends)
{
  ?setCookieResends@bdDTLSAssociationTelemetry@@QEAAXE@Z(this, cookieResends);
}

/*
==============
bdDTLSAssociationTelemetry::setInitResends
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setInitResends(bdDTLSAssociationTelemetry *this, const unsigned __int8 initResends)
{
  ?setInitResends@bdDTLSAssociationTelemetry@@QEAAXE@Z(this, initResends);
}

/*
==============
bdDTLSAssociationTelemetry::setInitAckStageTime
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setInitAckStageTime(bdDTLSAssociationTelemetry *this)
{
  ?setInitAckStageTime@bdDTLSAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociationTelemetry::setSeqNums
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setSeqNums(bdDTLSAssociationTelemetry *this, const int sendSeqNum, const int recvSeqNum)
{
  ?setSeqNums@bdDTLSAssociationTelemetry@@QEAAXHH@Z(this, sendSeqNum, recvSeqNum);
}

/*
==============
bdDTLSAssociationTelemetry::setEstablishedTime
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setEstablishedTime(bdDTLSAssociationTelemetry *this)
{
  ?setEstablishedTime@bdDTLSAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociationTelemetry::setLifetime
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setLifetime(bdDTLSAssociationTelemetry *this)
{
  ?setLifetime@bdDTLSAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociationTelemetry::setCookieEchoStageTime
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setCookieEchoStageTime(bdDTLSAssociationTelemetry *this)
{
  ?setCookieEchoStageTime@bdDTLSAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociationTelemetry::setInitStageTime
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setInitStageTime(bdDTLSAssociationTelemetry *this)
{
  ?setInitStageTime@bdDTLSAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociationTelemetry::setCookieAckStageTime
==============
*/

void __fastcall bdDTLSAssociationTelemetry::setCookieAckStageTime(bdDTLSAssociationTelemetry *this)
{
  ?setCookieAckStageTime@bdDTLSAssociationTelemetry@@QEAAXXZ(this);
}

/*
==============
bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry
==============
*/
void bdDTLSAssociationTelemetry::bdDTLSAssociationTelemetry(bdDTLSAssociationTelemetry *this)
{
  *(_QWORD *)&this->m_lastState = 0i64;
  *(_QWORD *)&this->m_stageInitMsSinceStart = 0i64;
  *(_QWORD *)&this->m_stageCookieEchoMsSinceStart = 0i64;
  this->m_establishedMsSinceStart = 0;
  bdAddr::bdAddr(&this->m_peerAddr);
  *(_WORD *)&this->m_initResends = 0;
  *(_QWORD *)&this->m_sendSeqNum = 0i64;
  this->m_telemetryPending = 1;
  bdStopwatch::bdStopwatch(&this->m_age);
  bdStopwatch::start(&this->m_age);
}

/*
==============
getStateString
==============
*/
const char *getStateString(const bdDTLSAssociationTelemetry::bdDTLSAssociationState state)
{
  const char *result; 

  switch ( state )
  {
    case 0:
      result = "BD_UNSET";
      break;
    case 1:
      result = "BD_DTLS_CLOSED";
      break;
    case 2:
      result = "BD_CLOSED_ADDR_NOT_CONSTRUCTED";
      break;
    case 3:
      result = "BD_CLOSED_ADDR_NOT_RESOLVED";
      break;
    case 4:
      result = "BD_CLOSED_ADDR_ERROR";
      break;
    case 5:
      result = "BD_CLOSED_ADDR_UNRESOLVED";
      break;
    case 6:
      result = "BD_FAILED_TIMEOUT";
      break;
    case 7:
      result = "BD_INIT_TIMEOUT";
      break;
    case 8:
      result = "BD_COOKIE_TIMEOUT";
      break;
    case 9:
      result = "BD_ESTABLISHED";
      break;
    case 10:
      result = "BD_HANDLE_INIT_BAD_PACKET";
      break;
    case 11:
      result = "BD_HANDLE_INIT_OK";
      break;
    case 12:
      result = "BD_HANDLE_INIT_ACK_INVALID_VTAG";
      break;
    case 13:
      result = "BD_HANDLE_INIT_ACK_INVALID_LOCAL_EXTRA_RANDOM";
      break;
    case 14:
      result = "BD_HANDLE_INIT_ACK_FAIL_DESERIALIZE";
      break;
    case 15:
      result = "BD_HANDLE_INIT_ACK_OK";
      break;
    case 16:
      result = "BD_HANDLE_COOKIE_ECHO_BAD_COOKIE";
      break;
    case 17:
      result = "BD_HANDLE_COOKIE_ECHO_BAD_SECID";
      break;
    case 18:
      result = "BD_HANDLE_COOKIE_ECHO_BAD_SHARED_SECRET";
      break;
    case 19:
      result = "BD_HANDLE_COOKIE_ECHO_BAD_ADDR_HANDLE";
      break;
    case 20:
      result = "BD_HANDLE_COOKIE_LATE_COOKIE";
      break;
    case 21:
      result = "BD_HANDLE_COOKIE_ECHO_FAIL";
      break;
    case 22:
      result = "BD_HANDLE_COOKIE_ECHO_OK";
      break;
    case 23:
      result = "BD_HANDLE_COOKIE_ACK_UNEXPECTED_STATE";
      break;
    case 24:
      result = "BD_HANDLE_COOKIE_ACK_BAD_SHARED_KEY";
      break;
    case 25:
      result = "BD_HANDLE_COOKIE_ACK_BAD_VTAG";
      break;
    case 26:
      result = "BD_HANDLE_COOKIE_ACK_FAIL_DESERIALIZE";
      break;
    case 27:
      result = "BD_HANDLE_COOKIE_ACK_ALREADY_ESTABLISHED";
      break;
    case 28:
      result = "BD_HANDLE_COOKIE_ACK_OK";
      break;
    case 29:
      result = "BD_HANDLE_ERROR_BAD_SECID";
      break;
    case 30:
      result = "BD_HANDLE_ERROR_UNKNOWN";
      break;
    case 31:
      result = "BD_SEND_INIT_FAIL";
      break;
    case 32:
      result = "BD_SEND_INIT_TOO_MANY_RETRIES";
      break;
    case 33:
      result = "BD_SEND_INIT_OK";
      break;
    case 34:
      result = "BD_SEND_INIT_ACK_FAIL_SIGN";
      break;
    case 35:
      result = "BD_SEND_INIT_ACK_FAIL";
      break;
    case 36:
      result = "BD_SEND_INIT_ACK_OK";
      break;
    case 37:
      result = "BD_SEND_COOKIE_ECHO_TOO_MANY_RETRIES";
      break;
    case 38:
      result = "BD_SEND_COOKIE_ECHO_FAIL";
      break;
    case 39:
      result = "BD_SEND_COOKIE_ECHO_OK";
      break;
    case 40:
      result = "BD_SEND_COOKIE_ACK_FAIL_ECC_KEY";
      break;
    case 41:
      result = "BD_SEND_COOKIE_ACK_FAIL";
      break;
    case 42:
      result = "BD_SEND_COOKIE_ACK_OK";
      break;
    case 43:
      result = "BD_SEND_ERROR_FAIL";
      break;
    case 44:
      result = "BD_SEND_ERROR_OK";
      break;
    case 45:
      result = "BD_SEND_DATA_FAIL_CREATION";
      break;
    case 46:
      result = "BD_SEND_DATA_FAIL_SIZE";
      break;
    case 47:
      result = "BD_SEND_DATA_OK";
      break;
    case 48:
      result = "BD_PREPARE_DATA_FAIL_CREATION";
      break;
    case 49:
      result = "BD_PREPARE_DATA_FAIL";
      break;
    case 50:
      result = "BD_PREPARE_DATA_OK";
      break;
    case 51:
      result = "BD_CHECK_COOKIE_VALIDITY_HMAC_FAIL";
      break;
    case 52:
      result = "BD_CHECK_COOKIE_VALIDITY_FAIL_PEER_ADDRESS";
      break;
    case 53:
      result = "BD_CHECK_COOKIE_VALIDITY_COOKIE_EXPIRED";
      break;
    case 54:
      result = "BD_CLOSED_ADDR_REMAPPED_ERROR";
      break;
    default:
      result = "UNKNOWN";
      break;
  }
  return result;
}

/*
==============
bdDTLSAssociationTelemetry::setCookieAckStageTime
==============
*/
void bdDTLSAssociationTelemetry::setCookieAckStageTime(bdDTLSAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_stageCookieAckMsSinceStart = _RAX;
}

/*
==============
bdDTLSAssociationTelemetry::setCookieEchoStageTime
==============
*/
void bdDTLSAssociationTelemetry::setCookieEchoStageTime(bdDTLSAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_stageCookieEchoMsSinceStart = _RAX;
}

/*
==============
bdDTLSAssociationTelemetry::setCookieResends
==============
*/
void bdDTLSAssociationTelemetry::setCookieResends(bdDTLSAssociationTelemetry *this, const unsigned __int8 cookieResends)
{
  this->m_cookieResends = cookieResends;
}

/*
==============
bdDTLSAssociationTelemetry::setEstablishedTime
==============
*/
void bdDTLSAssociationTelemetry::setEstablishedTime(bdDTLSAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_establishedMsSinceStart = _RAX;
}

/*
==============
bdDTLSAssociationTelemetry::setInitAckStageTime
==============
*/
void bdDTLSAssociationTelemetry::setInitAckStageTime(bdDTLSAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_stageInitAckMsSinceStart = _RAX;
}

/*
==============
bdDTLSAssociationTelemetry::setInitResends
==============
*/
void bdDTLSAssociationTelemetry::setInitResends(bdDTLSAssociationTelemetry *this, const unsigned __int8 initResends)
{
  this->m_initResends = initResends;
}

/*
==============
bdDTLSAssociationTelemetry::setInitStageTime
==============
*/
void bdDTLSAssociationTelemetry::setInitStageTime(bdDTLSAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_stageInitMsSinceStart = _RAX;
}

/*
==============
bdDTLSAssociationTelemetry::setLifetime
==============
*/
void bdDTLSAssociationTelemetry::setLifetime(bdDTLSAssociationTelemetry *this)
{
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_age);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@447a0000
    vcvttss2si rax, xmm1
  }
  this->m_lifetimeMs = _RAX;
}

/*
==============
bdDTLSAssociationTelemetry::setPeerAddr
==============
*/
void bdDTLSAssociationTelemetry::setPeerAddr(bdDTLSAssociationTelemetry *this, const bdAddr *peerAddr)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+40h], ymm1
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm1, ymmword ptr [rdx+60h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups xmm0, xmmword ptr [rdx+80h]
    vmovups xmmword ptr [rcx+0A0h], xmm0
    vmovsd  xmm1, qword ptr [rdx+90h]
    vmovsd  qword ptr [rcx+0B0h], xmm1
  }
}

/*
==============
bdDTLSAssociationTelemetry::setSeqNums
==============
*/
void bdDTLSAssociationTelemetry::setSeqNums(bdDTLSAssociationTelemetry *this, const int sendSeqNum, const int recvSeqNum)
{
  this->m_sendSeqNum = sendSeqNum;
  this->m_recvSeqNum = recvSeqNum;
}

/*
==============
bdDTLSAssociationTelemetry::setState
==============
*/
void bdDTLSAssociationTelemetry::setState(bdDTLSAssociationTelemetry *this, const bdDTLSAssociationTelemetry::bdDTLSAssociationState state)
{
  __int64 v2; 
  const char *StateString; 
  bdAddr v12; 

  v2 = state;
  _RBX = this;
  switch ( state )
  {
    case 0:
    case 1:
    case 9:
    case 11:
    case 15:
    case 22:
    case 28:
    case 33:
    case 36:
    case 39:
    case 42:
    case 44:
    case 47:
    case 50:
      break;
    default:
      StateString = getStateString(state);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSocket/dtls", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdtelemetry\\components\\bddtlsassociationtelemetry.cpp", "bdDTLSAssociationTelemetry::setState", 0xE0u, "DTLS telemetry event: %s\n", StateString);
      break;
  }
  _RBX->m_lastState = v2;
  if ( !(_DWORD)v2 )
  {
    *(_QWORD *)&_RBX->m_lifetimeMs = v2;
    *(_QWORD *)&_RBX->m_stageInitAckMsSinceStart = v2;
    *(_QWORD *)&_RBX->m_stageCookieAckMsSinceStart = v2;
    bdAddr::bdAddr(&v12);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+20h], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+40h], ymm1
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+60h], ymm0
      vmovups ymm1, ymmword ptr [rax+60h]
      vmovups ymmword ptr [rbx+80h], ymm1
      vmovups xmm0, xmmword ptr [rax+80h]
      vmovups xmmword ptr [rbx+0A0h], xmm0
      vmovsd  xmm1, qword ptr [rax+90h]
      vmovsd  qword ptr [rbx+0B0h], xmm1
    }
    *(_WORD *)&_RBX->m_initResends = 0;
    *(_QWORD *)&_RBX->m_sendSeqNum = v2;
    _RBX->m_telemetryPending = 1;
    bdStopwatch::start(&_RBX->m_age);
  }
}

