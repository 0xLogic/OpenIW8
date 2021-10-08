/*
==============
bdSingleIdentityBase::handleHTTPComplete
==============
*/

void __fastcall bdSingleIdentityBase::handleHTTPComplete(bdSingleIdentityBase *this)
{
  ?handleHTTPComplete@bdSingleIdentityBase@@IEAAXXZ(this);
}

/*
==============
bdSingleIdentityBase::appendQueryString
==============
*/

void __fastcall bdSingleIdentityBase::appendQueryString(bdSingleIdentityBase *this, char *const url, const char *queryFormat, const char *queryVal)
{
  ?appendQueryString@bdSingleIdentityBase@@IEBAXQEADPEBD1@Z(this, url, queryFormat, queryVal);
}

/*
==============
bdSingleIdentityBase::clearBuffers
==============
*/

void __fastcall bdSingleIdentityBase::clearBuffers(bdSingleIdentityBase *this)
{
  ?clearBuffers@bdSingleIdentityBase@@IEAAXXZ(this);
}

/*
==============
bdSingleIdentityBase::getNewTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdSingleIdentityBase::getNewTask(bdSingleIdentityBase *this, bdReference<bdRemoteTask> *result)
{
  return ?getNewTask@bdSingleIdentityBase@@IEAA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdSingleIdentityBase::readyForRequest
==============
*/

bool __fastcall bdSingleIdentityBase::readyForRequest(bdSingleIdentityBase *this)
{
  return ?readyForRequest@bdSingleIdentityBase@@IEAA_NXZ(this);
}

/*
==============
bdSingleIdentityBase::cleanUp
==============
*/

bool __fastcall bdSingleIdentityBase::cleanUp(bdSingleIdentityBase *this)
{
  return ?cleanUp@bdSingleIdentityBase@@QEAA_NXZ(this);
}

/*
==============
bdSingleIdentityBase::parseSingleError
==============
*/

unsigned int __fastcall bdSingleIdentityBase::parseSingleError(bdSingleIdentityBase *this, bdJSONDeserializer *const json)
{
  return ?parseSingleError@bdSingleIdentityBase@@IEAAIQEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdSingleIdentityBase::handleHTTPFailed
==============
*/

void __fastcall bdSingleIdentityBase::handleHTTPFailed(bdSingleIdentityBase *this)
{
  ?handleHTTPFailed@bdSingleIdentityBase@@IEAAXXZ(this);
}

/*
==============
bdSingleIdentityBase::abortHTTPOperation
==============
*/

void __fastcall bdSingleIdentityBase::abortHTTPOperation(bdSingleIdentityBase *this, bool joinThread)
{
  ?abortHTTPOperation@bdSingleIdentityBase@@QEAAX_N@Z(this, joinThread);
}

/*
==============
bdSingleIdentityBase::init
==============
*/

bool __fastcall bdSingleIdentityBase::init(bdSingleIdentityBase *this, char *httpRequestBuffer, unsigned int requestBufferSize, char *httpResponseBuffer, unsigned int responseBufferSize, bdEnvironment environment, const char *client, const char *region)
{
  return ?init@bdSingleIdentityBase@@QEAA_NPEADI0IW4bdEnvironment@@PEBD2@Z(this, httpRequestBuffer, requestBufferSize, httpResponseBuffer, responseBufferSize, environment, client, region);
}

/*
==============
bdSingleIdentityBase::appendQueryString
==============
*/

void __fastcall bdSingleIdentityBase::appendQueryString(bdSingleIdentityBase *this, char *const url, const char *queryFormat, unsigned int queryVal)
{
  ?appendQueryString@bdSingleIdentityBase@@IEBAXQEADPEBDI@Z(this, url, queryFormat, queryVal);
}

/*
==============
bdSingleIdentityBase::generateTransactionID
==============
*/

unsigned __int64 __fastcall bdSingleIdentityBase::generateTransactionID(bdSingleIdentityBase *this)
{
  return ?generateTransactionID@bdSingleIdentityBase@@IEAA_KXZ(this);
}

/*
==============
bdSingleIdentityBase::parseErrorJSON
==============
*/

void __fastcall bdSingleIdentityBase::parseErrorJSON(bdSingleIdentityBase *this)
{
  ?parseErrorJSON@bdSingleIdentityBase@@IEAAXXZ(this);
}

/*
==============
bdSingleIdentityBase::~bdSingleIdentityBase
==============
*/

void __fastcall bdSingleIdentityBase::~bdSingleIdentityBase(bdSingleIdentityBase *this)
{
  ??1bdSingleIdentityBase@@UEAA@XZ(this);
}

/*
==============
bdSingleIdentityBase::pump
==============
*/

void __fastcall bdSingleIdentityBase::pump(bdSingleIdentityBase *this)
{
  ?pump@bdSingleIdentityBase@@QEAAXXZ(this);
}

/*
==============
bdSingleIdentityBase::bdSingleIdentityBase
==============
*/

void __fastcall bdSingleIdentityBase::bdSingleIdentityBase(bdSingleIdentityBase *this)
{
  ??0bdSingleIdentityBase@@IEAA@XZ(this);
}

/*
==============
bdSingleIdentityBase::getFailedTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdSingleIdentityBase::getFailedTask(bdSingleIdentityBase *this, bdReference<bdRemoteTask> *result)
{
  return ?getFailedTask@bdSingleIdentityBase@@IEBA?AV?$bdReference@VbdRemoteTask@@@@XZ(this, result);
}

/*
==============
bdSingleIdentityBase::pumpHTTPRequest
==============
*/

void __fastcall bdSingleIdentityBase::pumpHTTPRequest(bdSingleIdentityBase *this)
{
  ?pumpHTTPRequest@bdSingleIdentityBase@@IEAAXXZ(this);
}

/*
==============
bdSingleIdentityBase::setBasicHeaders
==============
*/

void __fastcall bdSingleIdentityBase::setBasicHeaders(bdSingleIdentityBase *this, bdHTTP::bdHTTPHeader *const headers, unsigned int numHeaders, const char *const authorizationHeader, bool contentTypeHeader)
{
  ?setBasicHeaders@bdSingleIdentityBase@@IEAAXQEAUbdHTTPHeader@bdHTTP@@IQEBD_N@Z(this, headers, numHeaders, authorizationHeader, contentTypeHeader);
}

/*
==============
bdSingleIdentityBase::bdSingleIdentityBase
==============
*/
void bdSingleIdentityBase::bdSingleIdentityBase(bdSingleIdentityBase *this)
{
  bdRemoteTask *v2; 
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v6; 

  this->__vftable = (bdSingleIdentityBase_vtbl *)&bdSingleIdentityBase::`vftable';
  v2 = NULL;
  this->m_httpRequestBuffer = NULL;
  this->m_httpResponseBuffer = NULL;
  *(_QWORD *)&this->m_requestBufferSize = 0i64;
  this->m_outputObject = NULL;
  this->m_remoteTask.m_ptr = NULL;
  this->m_environment = BD_ENVIRONMENT_MAX;
  this->m_numErrors = 0;
  v3 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  if ( v3 )
  {
    bdRemoteTask::bdRemoteTask(v3);
    v2 = v4;
  }
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v6 = this->m_remoteTask.m_ptr;
      if ( v6 )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v6->~bdReferencable)(v6, 1i64);
    }
  }
  this->m_remoteTask.m_ptr = v2;
  if ( v2 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v2->m_refCount, 1u);
  this->m_httpInterface = bdHTTPUtility::newHTTP(0, 0);
}

/*
==============
bdSingleIdentityBase::~bdSingleIdentityBase
==============
*/
void bdSingleIdentityBase::~bdSingleIdentityBase(bdSingleIdentityBase *this)
{
  bdHTTP *m_httpInterface; 
  bdRemoteTask *m_ptr; 
  bdRemoteTask *v4; 

  this->__vftable = (bdSingleIdentityBase_vtbl *)&bdSingleIdentityBase::`vftable';
  m_httpInterface = this->m_httpInterface;
  if ( m_httpInterface )
  {
    ((void (__fastcall *)(bdHTTP *, __int64))m_httpInterface->~bdHTTP)(m_httpInterface, 1i64);
    this->m_httpInterface = NULL;
  }
  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v4 = this->m_remoteTask.m_ptr;
    if ( v4 )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v4->~bdReferencable)(v4, 1i64);
    this->m_remoteTask.m_ptr = NULL;
  }
}

/*
==============
bdSingleIdentityBase::abortHTTPOperation
==============
*/
void bdSingleIdentityBase::abortHTTPOperation(bdSingleIdentityBase *this, bool joinThread)
{
  if ( this->m_remoteTask.m_ptr )
  {
    if ( this->m_httpInterface->getStatus(this->m_httpInterface) != (BD_MAX_STATUS|BD_PENDING) )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::abortHTTPOperation", 0x8Fu, "Aborting HTTP operation");
      this->m_httpInterface->abortOperation(this->m_httpInterface);
    }
    bdRemoteTask::cancelTask(this->m_remoteTask.m_ptr);
  }
  if ( joinThread )
    this->m_httpInterface->finalize(this->m_httpInterface);
}

/*
==============
bdSingleIdentityBase::appendQueryString
==============
*/
void bdSingleIdentityBase::appendQueryString(bdSingleIdentityBase *this, char *const url, const char *queryFormat, const char *queryVal)
{
  unsigned __int64 v7; 

  if ( queryVal && queryFormat )
  {
    if ( url )
    {
      v7 = bdStrlen(url);
      bdSnprintf(&url[v7], 1024 - v7, queryFormat, queryVal);
    }
  }
}

/*
==============
bdSingleIdentityBase::appendQueryString
==============
*/
void bdSingleIdentityBase::appendQueryString(bdSingleIdentityBase *this, char *const url, const char *queryFormat, unsigned int queryVal)
{
  unsigned __int64 v7; 

  if ( queryFormat )
  {
    if ( url )
    {
      v7 = bdStrlen(url);
      bdSnprintf(&url[v7], 1024 - v7, queryFormat, queryVal);
    }
  }
}

/*
==============
bdSingleIdentityBase::cleanUp
==============
*/
bool bdSingleIdentityBase::cleanUp(bdSingleIdentityBase *this)
{
  bool result; 

  if ( this->m_httpRequestBuffer && this->m_httpResponseBuffer && this->m_requestBufferSize && this->m_responseBufferSize )
  {
    result = 1;
    this->m_environment = BD_ENVIRONMENT_MAX;
    this->m_httpRequestBuffer = NULL;
    this->m_httpResponseBuffer = NULL;
    *(_QWORD *)&this->m_requestBufferSize = 0i64;
    *(_QWORD *)this->m_region = 0i64;
    *(_QWORD *)&this->m_client[1] = 0i64;
    *(_QWORD *)&this->m_client[9] = 0i64;
    *(_QWORD *)&this->m_client[17] = 0i64;
    *(_QWORD *)&this->m_client[25] = 0i64;
    *(_QWORD *)&this->m_client[33] = 0i64;
    *(_QWORD *)&this->m_client[41] = 0i64;
    *(_QWORD *)&this->m_client[49] = 0i64;
    *(_DWORD *)&this->m_client[57] = 0;
    *(_WORD *)&this->m_client[61] = 0;
    this->m_client[63] = 0;
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::cleanUp", 0x69u, "Error calling cleanUp(): object has not been initialized");
    return 0;
  }
  return result;
}

/*
==============
bdSingleIdentityBase::clearBuffers
==============
*/
void bdSingleIdentityBase::clearBuffers(bdSingleIdentityBase *this)
{
  memset_0(this->m_httpRequestBuffer, 0, this->m_requestBufferSize);
  memset_0(this->m_httpResponseBuffer, 0, this->m_responseBufferSize);
  this->m_numErrors = 0;
  memset_0(this->m_errors, 0, sizeof(this->m_errors));
}

/*
==============
bdSingleIdentityBase::generateTransactionID
==============
*/
unsigned __int64 bdSingleIdentityBase::generateTransactionID(bdSingleIdentityBase *this)
{
  __int64 v1; 
  bdRandom v3; 
  __int64 v4; 
  unsigned __int8 in[8]; 

  v4 = -2i64;
  bdRandom::bdRandom(&v3);
  bdRandom::nextUBytes(&v3, in, 8);
  v1 = *(_QWORD *)in;
  bdRandom::~bdRandom(&v3);
  return v1;
}

/*
==============
bdSingleIdentityBase::getFailedTask
==============
*/
bdReference<bdRemoteTask> *bdSingleIdentityBase::getFailedTask(bdSingleIdentityBase *this, bdReference<bdRemoteTask> *result)
{
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 
  bdRemoteTask *v5; 

  v3 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  if ( v3 )
  {
    bdRemoteTask::bdRemoteTask(v3);
    v5 = v4;
  }
  else
  {
    v5 = NULL;
  }
  result->m_ptr = v5;
  if ( v5 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  result->m_ptr->m_status = BD_FAILED;
  result->m_ptr->m_errorCode = BD_START_TASK_FAILED;
  return result;
}

/*
==============
bdSingleIdentityBase::getNewTask
==============
*/
bdReference<bdRemoteTask> *bdSingleIdentityBase::getNewTask(bdSingleIdentityBase *this, bdReference<bdRemoteTask> *result)
{
  bdRemoteTask *v3; 
  bdRemoteTask *v4; 
  bdRemoteTask *v5; 
  unsigned __int64 v6; 
  bdRandom v8; 
  int v9; 
  __int64 v10; 
  bdReference<bdRemoteTask> *v11; 
  unsigned __int8 in[8]; 

  v10 = -2i64;
  v11 = result;
  v3 = NULL;
  v9 = 0;
  v4 = (bdRemoteTask *)bdMemory::allocate(0x68ui64);
  *(_QWORD *)in = v4;
  if ( v4 )
  {
    bdRemoteTask::bdRemoteTask(v4);
    v3 = v5;
  }
  result->m_ptr = v3;
  if ( v3 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v3->m_refCount, 1u);
  v9 = 1;
  result->m_ptr->m_status = BD_PENDING;
  bdRandom::bdRandom(&v8);
  bdRandom::nextUBytes(&v8, in, 8);
  v6 = *(_QWORD *)in;
  bdRandom::~bdRandom(&v8);
  result->m_ptr->m_transactionID = v6;
  return result;
}

/*
==============
bdSingleIdentityBase::handleHTTPComplete
==============
*/
void bdSingleIdentityBase::handleHTTPComplete(bdSingleIdentityBase *this)
{
  bdJSONDeserializer v2; 

  this->m_remoteTask.m_ptr->m_status = BD_DONE;
  if ( this->m_outputObject )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v2, this->m_httpResponseBuffer);
    this->m_outputObject->deserializeFromJSON(this->m_outputObject, &v2);
    bdJSONDeserializer::~bdJSONDeserializer(&v2);
    this->m_outputObject = NULL;
  }
  else
  {
    this->m_outputObject = NULL;
  }
}

/*
==============
bdSingleIdentityBase::handleHTTPFailed
==============
*/
void bdSingleIdentityBase::handleHTTPFailed(bdSingleIdentityBase *this)
{
  this->m_remoteTask.m_ptr->m_status = BD_FAILED;
  bdSingleIdentityBase::parseErrorJSON(this);
  this->m_outputObject = NULL;
}

/*
==============
bdSingleIdentityBase::init
==============
*/
char bdSingleIdentityBase::init(bdSingleIdentityBase *this, char *httpRequestBuffer, unsigned int requestBufferSize, char *httpResponseBuffer, unsigned int responseBufferSize, bdEnvironment environment, const char *client, const char *region)
{
  const char *v12; 
  bool v14; 
  unsigned __int64 v15; 
  int v16; 
  const char *v17; 

  if ( this->m_httpRequestBuffer && this->m_httpResponseBuffer && this->m_requestBufferSize && this->m_responseBufferSize )
  {
    v12 = this->getServiceName(this);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::init", 0x53u, "Error calling %s init(): object has already been initialized", v12);
    return 0;
  }
  if ( httpRequestBuffer && httpResponseBuffer && requestBufferSize && responseBufferSize )
  {
    v14 = client == NULL;
    if ( !client )
      goto LABEL_14;
    if ( bdStrlen(client) <= 0x40 )
    {
      this->m_environment = environment;
      this->m_httpRequestBuffer = httpRequestBuffer;
      this->m_httpResponseBuffer = httpResponseBuffer;
      this->m_requestBufferSize = requestBufferSize;
      this->m_responseBufferSize = responseBufferSize;
      bdStrlcpy(this->m_client, client, 0x40ui64);
      bdStrlcpy(this->m_region, region, 7ui64);
      memset_0(this->m_httpRequestBuffer, 0, this->m_requestBufferSize);
      memset_0(this->m_httpResponseBuffer, 0, this->m_responseBufferSize);
      return 1;
    }
  }
  v14 = client == NULL;
LABEL_14:
  bdHandleAssert(!v14, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v15 = -1i64;
  do
    ++v15;
  while ( client[v15] );
  if ( v15 <= 0x40 )
  {
    v17 = this->getServiceName(this);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::init", 0x4Cu, "Error calling %s init(): buffers and client must be non-null and have sizes > 0", v17);
  }
  else
  {
    v16 = 64;
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::init", 0x46u, "client must be <= %u bytes", v16);
  }
  return 0;
}

/*
==============
bdSingleIdentityBase::parseErrorJSON
==============
*/
void bdSingleIdentityBase::parseErrorJSON(bdSingleIdentityBase *this)
{
  unsigned int v2; 
  unsigned int m_count; 
  unsigned int i; 
  char *m_httpResponseBuffer; 
  unsigned int v6; 
  const char *v7; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v9; 
  bdJSONDeserializer json; 
  __int64 v11; 
  bdJSONDeserializer v12; 

  v11 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v12, this->m_httpResponseBuffer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  if ( bdJSONDeserializer::getObject(&v12, "error", &value) && value.m_type == BD_JSON_OBJECT )
  {
    v2 = bdSingleIdentityBase::parseSingleError(this, &value);
    if ( bdJSONDeserializer::hasKey(&value, "context") )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v9);
      bdJSONDeserializer::getArray(&value, "context", &v9);
      if ( bdJSONDeserializer::isArray(&v9) )
      {
        m_count = v9.m_count;
        for ( i = 0; i < m_count; ++i )
        {
          bdJSONDeserializer::bdJSONDeserializer(&json);
          bdJSONDeserializer::getObject(&v9, i, &json);
          if ( json.m_type == BD_JSON_OBJECT )
            bdSingleIdentityBase::parseSingleError(this, &json);
          bdJSONDeserializer::~bdJSONDeserializer(&json);
        }
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v9);
    }
    this->m_remoteTask.m_ptr->m_errorCode = (__int64)this->convertSIErrorCode(this, v2);
  }
  else
  {
    m_httpResponseBuffer = this->m_httpResponseBuffer;
    v6 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
    v7 = this->getServiceName(this);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::parseErrorJSON", 0xE4u, "%s HTTP request failed with HTTP error code: %u. Response: %s", v7, v6, m_httpResponseBuffer);
    this->m_remoteTask.m_ptr->m_errorCode = BD_SI_ERROR;
  }
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v12);
}

/*
==============
bdSingleIdentityBase::parseSingleError
==============
*/
__int64 bdSingleIdentityBase::parseSingleError(bdSingleIdentityBase *this, bdJSONDeserializer *const json)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int64 TransactionID; 
  const char *v7; 
  unsigned __int16 m_numErrors; 
  unsigned int value[4]; 
  char v11[128]; 
  char v12[256]; 

  value[0] = 0;
  if ( !json )
    return 0i64;
  bdJSONDeserializer::getUInt32(json, "code", value);
  bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, v11, 0x80u);
  bdJSONDeserializer::getString(json, "msg", v12, 0x100u);
  v4 = value[0];
  v5 = this->m_httpInterface->getLastHTTPStatus(this->m_httpInterface);
  TransactionID = bdRemoteTask::getTransactionID(this->m_remoteTask.m_ptr);
  v7 = this->getServiceName(this);
  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::parseSingleError", 0xFDu, "%s request failed. trID: %I64u; HTTP code: %u; Error: %s; Error code: %u; Message: %s", v7, TransactionID, v5, v11, v4, v12);
  m_numErrors = this->m_numErrors;
  if ( m_numErrors < 5u )
  {
    bdJSONDeserializer::getString(json, "field", this->m_errors[m_numErrors].field, 0x33u);
    this->m_errors[this->m_numErrors++].code = value[0];
  }
  return value[0];
}

/*
==============
bdSingleIdentityBase::pump
==============
*/
void bdSingleIdentityBase::pump(bdSingleIdentityBase *this)
{
  bdRemoteTask *m_ptr; 
  int v3; 
  bdJSONDeserializer v4; 

  m_ptr = this->m_remoteTask.m_ptr;
  if ( m_ptr && m_ptr->getStatus(m_ptr) && this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) != BD_DONE )
  {
    if ( this->m_remoteTask.m_ptr->getStatus(this->m_remoteTask.m_ptr) == BD_CANCELLED && this->m_remoteTask.m_ptr )
    {
      if ( this->m_httpInterface->getStatus(this->m_httpInterface) != (BD_MAX_STATUS|BD_PENDING) )
      {
        bdLogMessage(BD_LOG_WARNING, "warn/", "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::abortHTTPOperation", 0x8Fu, "Aborting HTTP operation");
        this->m_httpInterface->abortOperation(this->m_httpInterface);
      }
      bdRemoteTask::cancelTask(this->m_remoteTask.m_ptr);
    }
    v3 = ((__int64 (__fastcall *)(bdHTTP *))this->m_httpInterface->getStatus)(this->m_httpInterface) - 5;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        this->m_remoteTask.m_ptr->m_status = BD_FAILED;
        bdSingleIdentityBase::parseErrorJSON(this);
        this->m_outputObject = NULL;
      }
    }
    else
    {
      this->m_remoteTask.m_ptr->m_status = BD_DONE;
      if ( this->m_outputObject )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v4, this->m_httpResponseBuffer);
        this->m_outputObject->deserializeFromJSON(this->m_outputObject, &v4);
        bdJSONDeserializer::~bdJSONDeserializer(&v4);
      }
      this->m_outputObject = NULL;
    }
  }
}

/*
==============
bdSingleIdentityBase::pumpHTTPRequest
==============
*/
void bdSingleIdentityBase::pumpHTTPRequest(bdSingleIdentityBase *this)
{
  int v2; 
  bdJSONDeserializer v3; 

  v2 = ((__int64 (__fastcall *)(bdHTTP *))this->m_httpInterface->getStatus)(this->m_httpInterface) - 5;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      this->m_remoteTask.m_ptr->m_status = BD_FAILED;
      bdSingleIdentityBase::parseErrorJSON(this);
      this->m_outputObject = NULL;
    }
  }
  else
  {
    this->m_remoteTask.m_ptr->m_status = BD_DONE;
    if ( this->m_outputObject )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v3, this->m_httpResponseBuffer);
      this->m_outputObject->deserializeFromJSON(this->m_outputObject, &v3);
      bdJSONDeserializer::~bdJSONDeserializer(&v3);
    }
    this->m_outputObject = NULL;
  }
}

/*
==============
bdSingleIdentityBase::readyForRequest
==============
*/
bool bdSingleIdentityBase::readyForRequest(bdSingleIdentityBase *this)
{
  bdHTTP::bdStatus v2; 
  bool v3; 
  bool v4; 
  const char *v5; 
  const char *v6; 

  v2 = this->m_httpInterface->getStatus(this->m_httpInterface);
  v3 = v2 != BD_FAILED;
  v4 = this->m_httpRequestBuffer && this->m_httpResponseBuffer && this->m_requestBufferSize && this->m_responseBufferSize;
  if ( v2 == BD_FAILED )
  {
    v5 = this->getServiceName(this);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::readyForRequest", 0x110u, "Only one %s request can happen at a time.", v5);
  }
  if ( !v4 )
  {
    v6 = this->getServiceName(this);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdSingleIdentity/bdSingleIdentityBase", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdsingleidentitybase.cpp", "bdSingleIdentityBase::readyForRequest", 0x115u, "init() must be called on %s before requests can be made", v6);
  }
  return v3 && v4;
}

/*
==============
bdSingleIdentityBase::setBasicHeaders
==============
*/
void bdSingleIdentityBase::setBasicHeaders(bdSingleIdentityBase *this, bdHTTP::bdHTTPHeader *const headers, unsigned int numHeaders, const char *const authorizationHeader, bool contentTypeHeader)
{
  __int64 v5; 
  __int64 v6; 

  if ( headers && numHeaders )
  {
    headers->key = "Accept";
    v5 = 1i64;
    headers->value = "application/json";
    if ( authorizationHeader && numHeaders > 1 )
    {
      headers[1].value = authorizationHeader;
      headers[1].key = "Authorization";
      v5 = 2i64;
    }
    if ( contentTypeHeader && (unsigned int)v5 < numHeaders )
    {
      v6 = v5;
      headers[v6].key = "Content-Type";
      headers[v6].value = "application/json";
    }
  }
}

