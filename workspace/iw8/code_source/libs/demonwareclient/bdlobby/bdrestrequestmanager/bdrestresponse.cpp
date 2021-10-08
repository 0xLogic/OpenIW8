/*
==============
bdRESTResponse::bdRESTResponse
==============
*/

void __fastcall bdRESTResponse::bdRESTResponse(bdRESTResponse *this)
{
  ??0bdRESTResponse@@QEAA@XZ(this);
}

/*
==============
bdRESTResponse::getTransactionID
==============
*/

unsigned __int64 __fastcall bdRESTResponse::getTransactionID(bdRESTResponse *this)
{
  return ?getTransactionID@bdRESTResponse@@QEBA_KXZ(this);
}

/*
==============
bdRESTLegacyTask::setRequestTimeout
==============
*/

void __fastcall bdRESTLegacyTask::setRequestTimeout(bdRESTLegacyTask *this, const float timeout)
{
  ?setRequestTimeout@bdRESTLegacyTask@@QEAAXM@Z(this, timeout);
}

/*
==============
bdRESTLegacyTask::setStatus
==============
*/

void __fastcall bdRESTLegacyTask::setStatus(bdRESTLegacyTask *this, bdTask::bdStatus status)
{
  ?setStatus@bdRESTLegacyTask@@QEAAXW4bdStatus@bdTask@@@Z(this, status);
}

/*
==============
bdRESTResponse::handleReplyError
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdRESTResponse::handleReplyError(bdRESTResponse *this, const bdRESTResponseMessage *__formal)
{
  return ?handleReplyError@bdRESTResponse@@UEAA?AW4bdHandleStatus@1@AEBVbdRESTResponseMessage@@@Z(this, __formal);
}

/*
==============
bdRESTResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdRESTResponse::getErrorMap(bdRESTResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdRESTResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdRESTResponse::reset
==============
*/

void __fastcall bdRESTResponse::reset(bdRESTResponse *this)
{
  ?reset@bdRESTResponse@@IEAAXXZ(this);
}

/*
==============
bdRESTLegacyTask::setTimeout
==============
*/

void __fastcall bdRESTLegacyTask::setTimeout(bdRESTLegacyTask *this, const float __formal)
{
  ?setTimeout@bdRESTLegacyTask@@UEAAXM@Z(this, __formal);
}

/*
==============
bdRESTResponse::getResponseStatus
==============
*/

bdRESTResponse::bdStatus __fastcall bdRESTResponse::getResponseStatus(bdRESTResponse *this)
{
  return ?getResponseStatus@bdRESTResponse@@QEBA?AW4bdStatus@1@XZ(this);
}

/*
==============
bdRESTResponse::~bdRESTResponse
==============
*/

void __fastcall bdRESTResponse::~bdRESTResponse(bdRESTResponse *this)
{
  ??1bdRESTResponse@@UEAA@XZ(this);
}

/*
==============
bdRESTResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdRESTResponse::handleReplySuccess(bdRESTResponse *this, const bdRESTResponseMessage *__formal)
{
  return ?handleReplySuccess@bdRESTResponse@@UEAA?AW4bdHandleStatus@1@AEBVbdRESTResponseMessage@@@Z(this, __formal);
}

/*
==============
bdRESTResponse::getNumRetries
==============
*/

unsigned int __fastcall bdRESTResponse::getNumRetries(bdRESTResponse *this)
{
  return ?getNumRetries@bdRESTResponse@@QEBAIXZ(this);
}

/*
==============
bdRESTResponse::setTaskErrorCode
==============
*/

void __fastcall bdRESTResponse::setTaskErrorCode(bdRESTResponse *this, bdLobbyErrorCode errorCode)
{
  ?setTaskErrorCode@bdRESTResponse@@QEAAXW4bdLobbyErrorCode@@@Z(this, errorCode);
}

/*
==============
bdRESTResponse::getSpanID
==============
*/

unsigned int __fastcall bdRESTResponse::getSpanID(bdRESTResponse *this)
{
  return ?getSpanID@bdRESTResponse@@QEBAIXZ(this);
}

/*
==============
bdRESTResponse::bdRESTResponse
==============
*/
void bdRESTResponse::bdRESTResponse(bdRESTResponse *this)
{
  this->__vftable = (bdRESTResponse_vtbl *)&bdRESTResponse::`vftable';
  *(_QWORD *)&this->m_bdrest_status = 0i64;
  this->m_bdrest_handlerSetErrorCode = 0;
  this->m_bdrest_handlerErrorCode = BD_NO_ERROR;
}

/*
==============
bdRESTResponse::~bdRESTResponse
==============
*/
void bdRESTResponse::~bdRESTResponse(bdRESTResponse *this)
{
  this->__vftable = (bdRESTResponse_vtbl *)&bdRESTResponse::`vftable';
}

/*
==============
bdRESTResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdRESTResponse::getErrorMap(bdRESTResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, NULL, 0);
  return result;
}

/*
==============
bdRESTResponse::getNumRetries
==============
*/
__int64 bdRESTResponse::getNumRetries(bdRESTResponse *this)
{
  return this->m_bdrest_retries;
}

/*
==============
bdRESTResponse::getResponseStatus
==============
*/
__int64 bdRESTResponse::getResponseStatus(bdRESTResponse *this)
{
  return (unsigned int)this->m_bdrest_status;
}

/*
==============
bdRESTResponse::getSpanID
==============
*/
__int64 bdRESTResponse::getSpanID(bdRESTResponse *this)
{
  return this->m_bdrest_spanID;
}

/*
==============
bdRESTResponse::getTransactionID
==============
*/
unsigned __int64 bdRESTResponse::getTransactionID(bdRESTResponse *this)
{
  return this->m_bdrest_transactionID;
}

/*
==============
bdRESTResponse::handleReplyError
==============
*/
__int64 bdRESTResponse::handleReplyError(bdRESTResponse *this, const bdRESTResponseMessage *__formal)
{
  return 2i64;
}

/*
==============
bdRESTResponse::handleReplySuccess
==============
*/
__int64 bdRESTResponse::handleReplySuccess(bdRESTResponse *this, const bdRESTResponseMessage *__formal)
{
  return 2i64;
}

/*
==============
bdRESTResponse::reset
==============
*/
void bdRESTResponse::reset(bdRESTResponse *this)
{
  *(_QWORD *)&this->m_bdrest_status = 0i64;
  this->m_bdrest_handlerSetErrorCode = 0;
  this->m_bdrest_handlerErrorCode = BD_NO_ERROR;
}

/*
==============
bdRESTLegacyTask::setRequestTimeout
==============
*/

void __fastcall bdRESTLegacyTask::setRequestTimeout(bdRESTLegacyTask *this, const float timeout)
{
  bdRemoteTask::setTimeout(this, timeout);
}

/*
==============
bdRESTLegacyTask::setStatus
==============
*/
void bdRESTLegacyTask::setStatus(bdRESTLegacyTask *this, bdTask::bdStatus status)
{
  this->m_status = status;
}

/*
==============
bdRESTResponse::setTaskErrorCode
==============
*/
void bdRESTResponse::setTaskErrorCode(bdRESTResponse *this, bdLobbyErrorCode errorCode)
{
  this->m_bdrest_handlerErrorCode = errorCode;
  this->m_bdrest_handlerSetErrorCode = 1;
}

/*
==============
bdRESTLegacyTask::setTimeout
==============
*/
void bdRESTLegacyTask::setTimeout(bdRESTLegacyTask *this, const float __formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdrestrequestmanager\\bdrestresponse.cpp", "bdRESTLegacyTask::setTimeout", 0x56u, "changing the timeout of a bdREST task won't do anything");
}

