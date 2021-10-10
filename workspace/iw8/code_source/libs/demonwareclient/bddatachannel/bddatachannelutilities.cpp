/*
==============
bdDataChannelUtilities::buildEndpointURLV2
==============
*/

bool __fastcall bdDataChannelUtilities::buildEndpointURLV2(char *result, const char *endpoint, const char *client, unsigned __int64 userId, unsigned __int64 titleId, const char *userAcctType, const char *msgName, const char *streamName)
{
  return ?buildEndpointURLV2@bdDataChannelUtilities@@SA_NPEADPEBD1_K2111@Z(result, endpoint, client, userId, titleId, userAcctType, msgName, streamName);
}

/*
==============
bdDataChannelUtilities::generateInsecureHeaders
==============
*/

bool __fastcall bdDataChannelUtilities::generateInsecureHeaders(bdHTTP *httpInterface, const char *accept)
{
  return ?generateInsecureHeaders@bdDataChannelUtilities@@SA_NPEAVbdHTTP@@PEBD@Z(httpInterface, accept);
}

/*
==============
bdDataChannelUtilities::generateSecureHeaders
==============
*/

bool __fastcall bdDataChannelUtilities::generateSecureHeaders(bdHTTP *httpInterface, const char *accept, const char *authToken)
{
  return ?generateSecureHeaders@bdDataChannelUtilities@@SA_NPEAVbdHTTP@@PEBD1@Z(httpInterface, accept, authToken);
}

/*
==============
bdDataChannelUtilities::convertDDLGuidToHexDecBytes
==============
*/

bool __fastcall bdDataChannelUtilities::convertDDLGuidToHexDecBytes(char *guidInBytes, unsigned int *outputGuidSize, unsigned __int64 ddlGuid)
{
  return ?convertDDLGuidToHexDecBytes@bdDataChannelUtilities@@SA_NPEACAEAI_K@Z(guidInBytes, outputGuidSize, ddlGuid);
}

/*
==============
bdUUIDGenerator::uuidToString
==============
*/

bdString *__fastcall bdUUIDGenerator::uuidToString(bdString *result, unsigned __int8 *uuid)
{
  return ?uuidToString@bdUUIDGenerator@@SA?AVbdString@@PEAE@Z(result, uuid);
}

/*
==============
bdDataChannelUtilities::buildAuthToken
==============
*/

bool __fastcall bdDataChannelUtilities::buildAuthToken(char *result, const char *token, unsigned int bufferLength)
{
  return ?buildAuthToken@bdDataChannelUtilities@@SA_NPEADPEBDI@Z(result, token, bufferLength);
}

/*
==============
bdUUIDGenerator::generateV1
==============
*/

void __fastcall bdUUIDGenerator::generateV1(bdUUIDGenerator *this, unsigned __int8 *uuid, const unsigned __int64 userID)
{
  ?generateV1@bdUUIDGenerator@@QEAAXPEAE_K@Z(this, uuid, userID);
}

/*
==============
bdUUIDGenerator::bdUUIDGenerator
==============
*/

void __fastcall bdUUIDGenerator::bdUUIDGenerator(bdUUIDGenerator *this)
{
  ??0bdUUIDGenerator@@QEAA@XZ(this);
}

/*
==============
bdDataChannelUtilities::getDecoratedAuthTokenLength
==============
*/

unsigned int __fastcall bdDataChannelUtilities::getDecoratedAuthTokenLength(const char *token)
{
  return ?getDecoratedAuthTokenLength@bdDataChannelUtilities@@SAIPEBD@Z(token);
}

/*
==============
bdUUIDGenerator::generateV4
==============
*/

void __fastcall bdUUIDGenerator::generateV4(bdUUIDGenerator *this, unsigned __int8 *uuid)
{
  ?generateV4@bdUUIDGenerator@@QEAAXPEAE@Z(this, uuid);
}

/*
==============
bdUUIDGenerator::~bdUUIDGenerator
==============
*/

void __fastcall bdUUIDGenerator::~bdUUIDGenerator(bdUUIDGenerator *this)
{
  ??1bdUUIDGenerator@@UEAA@XZ(this);
}

/*
==============
buildEndpointURL
==============
*/

void __fastcall buildEndpointURL(char *result, bool secure, const char *endpoint, const char *bucket, const char *category, const char *client, unsigned __int64 userid)
{
  ?buildEndpointURL@@YAXPEAD_NPEBD222_K@Z(result, secure, endpoint, bucket, category, client, userid);
}

/*
==============
bdUUIDGenerator::bdUUIDGenerator
==============
*/
void bdUUIDGenerator::bdUUIDGenerator(bdUUIDGenerator *this)
{
  unsigned __int64 v2; 
  bdTrulyRandomImpl *v3; 
  bdSingletonRegistryImpl *Instance; 
  unsigned __int64 RandomUInt64; 
  unsigned int *v6; 
  bdTrulyRandomImpl *v7; 

  this->__vftable = (bdUUIDGenerator_vtbl *)&bdUUIDGenerator::`vftable';
  bdRandom::bdRandom(&this->m_randGenerator);
  v2 = bdPlatformTiming::getHiResTimeStamp() % 0xF4240;
  this->m_monotonic = v2 + 1000000 * bdPlatformTiming::getPOSIXTimestamp();
  if ( !bdSingleton<bdTrulyRandomImpl>::m_instance )
  {
    v3 = (bdTrulyRandomImpl *)bdMemory::allocate(1ui64);
    v7 = v3;
    if ( v3 )
      bdTrulyRandomImpl::bdTrulyRandomImpl(v3);
    bdSingleton<bdTrulyRandomImpl>::m_instance = v3;
    if ( !v3 )
      goto LABEL_7;
    Instance = bdSingleton<bdSingletonRegistryImpl>::getInstance();
    if ( !bdSingletonRegistryImpl::add(Instance, bdSingleton<bdTrulyRandomImpl>::destroyInstance) )
    {
      bdMemory::deallocate(bdSingleton<bdTrulyRandomImpl>::m_instance);
      bdSingleton<bdTrulyRandomImpl>::m_instance = NULL;
LABEL_7:
      DebugBreak();
    }
  }
  RandomUInt64 = bdTrulyRandomImpl::getRandomUInt64(bdSingleton<bdTrulyRandomImpl>::m_instance);
  this->m_generatorID = RandomUInt64;
  bdRandom::bdRandom((bdRandom *)&v7, RandomUInt64);
  this->m_randGenerator.m_val = *v6;
  bdRandom::~bdRandom((bdRandom *)&v7);
}

/*
==============
bdUUIDGenerator::~bdUUIDGenerator
==============
*/
void bdUUIDGenerator::~bdUUIDGenerator(bdUUIDGenerator *this)
{
  this->__vftable = (bdUUIDGenerator_vtbl *)&bdUUIDGenerator::`vftable';
  bdRandom::~bdRandom(&this->m_randGenerator);
}

/*
==============
bdDataChannelUtilities::buildAuthToken
==============
*/
bool bdDataChannelUtilities::buildAuthToken(char *result, const char *token, unsigned int bufferLength)
{
  bdHandleAssert(result != NULL, "result != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::buildAuthToken", 0x4Eu, "Cannot populate the result if it's null.");
  return result && bdSnprintf(result, bufferLength, "Bearer %s", token);
}

/*
==============
buildEndpointURL
==============
*/
void buildEndpointURL(char *result, bool secure, const char *endpoint, const char *bucket, const char *category, const char *client, unsigned __int64 userid)
{
  const char *v7; 

  v7 = "secureingest";
  if ( !secure )
    v7 = "ingest";
  if ( userid )
    bdSnprintf(result, 0x400ui64, "%s/%s/%s/%s/?client=%s&user=%llu", endpoint, v7, bucket, category, client, userid);
  else
    bdSnprintf(result, 0x400ui64, "%s/%s/%s/%s/?client=%s", endpoint, v7, bucket, category, client);
}

/*
==============
bdDataChannelUtilities::buildEndpointURLV2
==============
*/
bool bdDataChannelUtilities::buildEndpointURLV2(char *result, const char *endpoint, const char *client, unsigned __int64 userId, unsigned __int64 titleId, const char *userAcctType, const char *msgName, const char *streamName)
{
  bdHandleAssert(result != NULL, "result != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::buildEndpointURLV2", 0x21u, "Cannot populate the result if it's null.");
  bdHandleAssert(endpoint != NULL, "endpoint != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::buildEndpointURLV2", 0x22u, "The endpoint cannot be null.");
  bdHandleAssert(client != NULL, "client != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::buildEndpointURLV2", 0x23u, "The client cannot be null.");
  bdHandleAssert(msgName != NULL, "msgName != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::buildEndpointURLV2", 0x24u, "The msgName cannot be null.");
  if ( !userId )
    return result && bdSnprintf(result, 0x400ui64, "%s/messages/%s/%s?client=%s&messageName=%s&title=%llu", endpoint, streamName, bdDataChannelUtilities::MESSAGE_ENVELOPE_VERSION, client, msgName, titleId);
  bdHandleAssert(userAcctType != NULL, "userAcctType != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::buildEndpointURLV2", 0x35u, "The acctType cannot be null.");
  return result && bdSnprintf(result, 0x400ui64, "%s/messages/%s/%s?client=%s&user=%llu&accountType=%s&messageName=%s&title=%llu", endpoint, streamName, bdDataChannelUtilities::MESSAGE_ENVELOPE_VERSION, client, userId, userAcctType, msgName, titleId);
}

/*
==============
bdDataChannelUtilities::convertDDLGuidToHexDecBytes
==============
*/
_BOOL8 bdDataChannelUtilities::convertDDLGuidToHexDecBytes(char *guidInBytes, unsigned int *outputGuidSize, unsigned __int64 ddlGuid)
{
  bool v6; 
  _BOOL8 result; 
  char buf[16]; 

  bdHandleAssert(ddlGuid != 0, "ddlGuid != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::convertDDLGuidToHexDecBytes", 0x72u, "Cannot convert a DDL with GUID = 0.");
  v6 = bdSnprintf(buf, 0x11ui64, "%016llx", ddlGuid) == 16;
  result = v6;
  if ( v6 )
  {
    *(_OWORD *)guidInBytes = *(_OWORD *)buf;
    *outputGuidSize = 16;
  }
  return result;
}

/*
==============
bdDataChannelUtilities::generateInsecureHeaders
==============
*/
__int64 bdDataChannelUtilities::generateInsecureHeaders(bdHTTP *httpInterface, const char *accept)
{
  const char *v3; 

  v3 = accept;
  bdHandleAssert(accept != NULL, "accept != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::generateInsecureHeaders", 0x5Au, "Accept string must not be NULL");
  LOBYTE(v3) = httpInterface->setHeader(httpInterface, "Accept", v3);
  bdHandleAssert((const bool)v3, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::generateInsecureHeaders", 0x5Eu, "Unable to set the insecure part of the HTTP header.");
  return (unsigned __int8)v3;
}

/*
==============
bdDataChannelUtilities::generateSecureHeaders
==============
*/
_BOOL8 bdDataChannelUtilities::generateSecureHeaders(bdHTTP *httpInterface, const char *accept, const char *authToken)
{
  bool v6; 

  bdHandleAssert(authToken != NULL, "authToken != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::generateSecureHeaders", 0x67u, "Authentication Token must not be NULL");
  bdHandleAssert(accept != NULL, "accept != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::generateInsecureHeaders", 0x5Au, "Accept string must not be NULL");
  LOBYTE(accept) = httpInterface->setHeader(httpInterface, "Accept", accept);
  bdHandleAssert((const bool)accept, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::generateInsecureHeaders", 0x5Eu, "Unable to set the insecure part of the HTTP header.");
  v6 = (_BYTE)accept && httpInterface->setHeader(httpInterface, "Authorization", authToken);
  bdHandleAssert(v6, "ok", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bddatachannel\\bddatachannelutilities.cpp", "bdDataChannelUtilities::generateSecureHeaders", 0x6Bu, "Unable to set the httpInterface header");
  return v6;
}

/*
==============
bdUUIDGenerator::generateV1
==============
*/
void bdUUIDGenerator::generateV1(bdUUIDGenerator *this, unsigned __int8 *uuid, const unsigned __int64 userID)
{
  ++this->m_monotonic;
  *(double *)uuid = *(double *)&this->m_monotonic;
  *((_WORD *)uuid + 4) = userID;
  *(_DWORD *)(uuid + 10) = this->m_generatorID;
  *((_WORD *)uuid + 7) = WORD2(this->m_generatorID);
  uuid[7] &= 0xF1u;
  uuid[7] |= 1u;
  uuid[8] |= 7u;
}

/*
==============
bdUUIDGenerator::generateV4
==============
*/
void bdUUIDGenerator::generateV4(bdUUIDGenerator *this, unsigned __int8 *uuid)
{
  bdRandom::nextUBytes(&this->m_randGenerator, uuid, 16);
  uuid[7] &= 0xF4u;
  uuid[7] |= 4u;
  uuid[8] &= ~2u;
  uuid[8] |= 1u;
}

/*
==============
bdDataChannelUtilities::getDecoratedAuthTokenLength
==============
*/
__int64 bdDataChannelUtilities::getDecoratedAuthTokenLength(const char *token)
{
  __int64 v2; 

  bdHandleAssert(token != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v2 = -1i64;
  do
    ++v2;
  while ( token[v2] );
  return (unsigned int)(v2 + 8);
}

/*
==============
bdUUIDGenerator::uuidToString
==============
*/
bdString *bdUUIDGenerator::uuidToString(bdString *result, unsigned __int8 *uuid)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 

  v16 = uuid[15];
  v15 = uuid[14];
  v14 = uuid[13];
  v13 = uuid[12];
  v12 = uuid[11];
  v11 = uuid[10];
  v10 = uuid[9];
  v9 = uuid[8];
  v8 = uuid[7];
  v7 = uuid[6];
  v6 = uuid[5];
  v5 = uuid[4];
  v4 = uuid[3];
  v3 = uuid[2];
  makeFormattedString(result, "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x", *uuid, uuid[1], v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
  return result;
}

