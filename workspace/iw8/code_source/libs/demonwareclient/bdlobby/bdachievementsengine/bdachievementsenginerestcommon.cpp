/*
==============
bdAchievementsEngineRestRequest::setTitleID
==============
*/

void __fastcall bdAchievementsEngineRestRequest::setTitleID(bdAchievementsEngineRestRequest *this, unsigned int titleID)
{
  ?setTitleID@bdAchievementsEngineRestRequest@@IEBAXI@Z(this, titleID);
}

/*
==============
bdAchievementsEngineRestRequest::setABTestingToken
==============
*/

void __fastcall bdAchievementsEngineRestRequest::setABTestingToken(bdAchievementsEngineRestRequest *this, const char *const abTestingToken)
{
  ?setABTestingToken@bdAchievementsEngineRestRequest@@IEBAXQEBD@Z(this, abTestingToken);
}

/*
==============
bdAchievementsEngineRestResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdAchievementsEngineRestResponse::getErrorMap(bdAchievementsEngineRestResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdAchievementsEngineRestResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdAchievementsEngineRestRequest::setContext
==============
*/

void __fastcall bdAchievementsEngineRestRequest::setContext(bdAchievementsEngineRestRequest *this, const char *context)
{
  ?setContext@bdAchievementsEngineRestRequest@@IEBAXPEBD@Z(this, context);
}

/*
==============
bdAchievementsEngineRestRequest::bdAchievementsEngineRestRequest
==============
*/

void __fastcall bdAchievementsEngineRestRequest::bdAchievementsEngineRestRequest(bdAchievementsEngineRestRequest *this, const char *context)
{
  ??0bdAchievementsEngineRestRequest@@QEAA@PEBD@Z(this, context);
}

/*
==============
bdAchievementsEngineRestRequest::setClientID
==============
*/

void __fastcall bdAchievementsEngineRestRequest::setClientID(bdAchievementsEngineRestRequest *this, const char *clientID)
{
  ?setClientID@bdAchievementsEngineRestRequest@@IEBAXPEBD@Z(this, clientID);
}

/*
==============
bdAchievementsEngineRestRequest::addCommonParams
==============
*/

bool __fastcall bdAchievementsEngineRestRequest::addCommonParams(bdAchievementsEngineRestRequest *this, bdRESTRequestBuilder *builder)
{
  return ?addCommonParams@bdAchievementsEngineRestRequest@@QEBA_NAEAVbdRESTRequestBuilder@@@Z(this, builder);
}

/*
==============
bdAchievementsEngineRestRequest::bdAchievementsEngineRestRequest
==============
*/
void bdAchievementsEngineRestRequest::bdAchievementsEngineRestRequest(bdAchievementsEngineRestRequest *this, const char *context)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  size_t v5; 
  size_t v6; 

  this->__vftable = (bdAchievementsEngineRestRequest_vtbl *)&bdAchievementsEngineRestRequest::`vftable';
  this->m_titleID = 0;
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen", -2i64);
  v3 = -1i64;
  v4 = -1i64;
  do
    ++v4;
  while ( *((_BYTE *)&queryFormat.fmt + v4 + 3) );
  if ( this != (bdAchievementsEngineRestRequest *)-29i64 )
  {
    v5 = 64i64;
    if ( v4 < 0x40 )
      v5 = v4;
    memcpy_0(&this->m_clientID, (char *)&queryFormat.fmt + 3, v5);
    this->m_clientID.m_buffer[v5] = 0;
  }
  bdHandleAssert(1, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  do
    ++v3;
  while ( *((_BYTE *)&queryFormat.fmt + v3 + 3) );
  if ( this != (bdAchievementsEngineRestRequest *)-94i64 )
  {
    v6 = 4096i64;
    if ( v3 < 0x1000 )
      v6 = v3;
    memcpy_0(&this->m_abTestingToken, (char *)&queryFormat.fmt + 3, v6);
    this->m_abTestingToken.m_buffer[v6] = 0;
  }
}

/*
==============
bdAchievementsEngineRestRequest::addCommonParams
==============
*/
char bdAchievementsEngineRestRequest::addCommonParams(bdAchievementsEngineRestRequest *this, bdRESTRequestBuilder *builder)
{
  int v4; 
  int v5; 
  bdRESTHeaders *v6; 
  bdRESTURI *v7; 
  bdRESTURI *v8; 
  bdRESTURI *v9; 
  bool v10; 
  bdStructFixedSizeString<4096> *p_m_abTestingToken; 
  bdStructFixedSizeString<4096> *v12; 
  bdRESTHeaders *v14; 

  bdHandleAssert(this->m_titleID != 0, "m_titleID != 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsenginerestcommon.cpp", "bdAchievementsEngineRestRequest::addCommonParams", 0x16u, "Title ID must be set.");
  v4 = strncmp(this->m_clientID.m_buffer, (const char *)&queryFormat.fmt + 3, 0x40ui64);
  bdHandleAssert(v4 != 0, "m_clientID != \"\"", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsenginerestcommon.cpp", "bdAchievementsEngineRestRequest::addCommonParams", 0x17u, "Client ID must be set.");
  v5 = strncmp(this->m_context.m_buffer, (const char *)&queryFormat.fmt + 3, 0x10ui64);
  bdHandleAssert(v5 != 0, "m_context != \"\"", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bdachievementsenginerestcommon.cpp", "bdAchievementsEngineRestRequest::addCommonParams", 0x18u, "Context must be set.");
  v10 = 0;
  if ( bdRESTRequestBuilder::setServiceName(builder, "ae.demonware.net") )
  {
    v6 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::setFieldAccept(v6, BD_MIME_JSON) )
    {
      v7 = bdRESTRequestBuilder::uri(builder);
      if ( bdRESTURI::addQueryParam(v7, "context", this->m_context.m_buffer) )
      {
        v8 = bdRESTRequestBuilder::uri(builder);
        if ( bdRESTURI::addQueryParam(v8, "client", this->m_clientID.m_buffer) )
        {
          v9 = bdRESTRequestBuilder::uri(builder);
          if ( bdRESTURI::addQueryParam(v9, "titleID", this->m_titleID) )
            v10 = 1;
        }
      }
    }
  }
  p_m_abTestingToken = &this->m_abTestingToken;
  v12 = (bdStructFixedSizeString<4096> *)memchr_0(p_m_abTestingToken, 0, 0x1000ui64);
  if ( v12 && v12 == p_m_abTestingToken )
    return v10;
  if ( v10 )
  {
    v14 = bdRESTRequestBuilder::headers(builder);
    if ( bdRESTHeaders::addField(v14, "DW-ABToken", p_m_abTestingToken->m_buffer) )
      return 1;
  }
  return 0;
}

/*
==============
bdAchievementsEngineRestResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdAchievementsEngineRestResponse::getErrorMap(bdAchievementsEngineRestResponse *this, bdRESTErrorMap *result)
{
  _RBX = result;
  _RAX = bdAchievementsEngineService::getDefaultErrorMap();
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx], xmm0
  }
  return _RBX;
}

/*
==============
bdAchievementsEngineRestRequest::setABTestingToken
==============
*/
void bdAchievementsEngineRestRequest::setABTestingToken(bdAchievementsEngineRestRequest *this, const char *const abTestingToken)
{
  if ( bdStrlcpy(this->m_abTestingToken.m_buffer, abTestingToken, 0x1001ui64) > 0x1000 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<4096>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<4096>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdAchievementsEngineRestRequest::setClientID
==============
*/
void bdAchievementsEngineRestRequest::setClientID(bdAchievementsEngineRestRequest *this, const char *clientID)
{
  if ( bdStrlcpy(this->m_clientID.m_buffer, clientID, 0x41ui64) > 0x40 )
  {
    bdHandleAssert(0, "\"sLength <= MaxLength\" && false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "BD_ASSERT", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::copy", 0x56u, "bdStructFixedSizeString buffer is too small");
  }
}

/*
==============
bdAchievementsEngineRestRequest::setContext
==============
*/
void bdAchievementsEngineRestRequest::setContext(bdAchievementsEngineRestRequest *this, const char *context)
{
  bdStructFixedSizeString<16>::copy(&this->m_context, context);
}

/*
==============
bdAchievementsEngineRestRequest::setTitleID
==============
*/
void bdAchievementsEngineRestRequest::setTitleID(bdAchievementsEngineRestRequest *this, unsigned int titleID)
{
  this->m_titleID = titleID;
}

