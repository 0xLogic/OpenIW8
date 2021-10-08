/*
==============
bdUnsubscribeFromUsersPresenceResponse::bdUnsubscribeFromUsersPresenceResponse
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceResponse::bdUnsubscribeFromUsersPresenceResponse(bdUnsubscribeFromUsersPresenceResponse *this)
{
  ??0bdUnsubscribeFromUsersPresenceResponse@@QEAA@XZ(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::reset
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceResponse::reset(bdUnsubscribeFromUsersPresenceResponse *this)
{
  ?reset@bdUnsubscribeFromUsersPresenceResponse@@QEAAXXZ(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::getUserError
==============
*/

bdUserPresenceError *__fastcall bdUnsubscribeFromUsersPresenceResponse::getUserError(bdUnsubscribeFromUsersPresenceResponse *this, unsigned int index)
{
  return ?getUserError@bdUnsubscribeFromUsersPresenceResponse@@QEAAAEAVbdUserPresenceError@@I@Z(this, index);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::getNumErrors
==============
*/

unsigned int __fastcall bdUnsubscribeFromUsersPresenceResponse::getNumErrors(bdUnsubscribeFromUsersPresenceResponse *this)
{
  return ?getNumErrors@bdUnsubscribeFromUsersPresenceResponse@@QEBAIXZ(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::~bdUnsubscribeFromUsersPresenceResponse
==============
*/

void __fastcall bdUnsubscribeFromUsersPresenceResponse::~bdUnsubscribeFromUsersPresenceResponse(bdUnsubscribeFromUsersPresenceResponse *this)
{
  ??1bdUnsubscribeFromUsersPresenceResponse@@UEAA@XZ(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdUnsubscribeFromUsersPresenceResponse::handleReplySuccess(bdUnsubscribeFromUsersPresenceResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdUnsubscribeFromUsersPresenceResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::getErrorMap
==============
*/

bdRESTErrorMap *__fastcall bdUnsubscribeFromUsersPresenceResponse::getErrorMap(bdUnsubscribeFromUsersPresenceResponse *this, bdRESTErrorMap *result)
{
  return ?getErrorMap@bdUnsubscribeFromUsersPresenceResponse@@UEBA?AVbdRESTErrorMap@@XZ(this, result);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::bdUnsubscribeFromUsersPresenceResponse
==============
*/
void bdUnsubscribeFromUsersPresenceResponse::bdUnsubscribeFromUsersPresenceResponse(bdUnsubscribeFromUsersPresenceResponse *this)
{
  bdRESTResponse::bdRESTResponse(this);
  this->__vftable = (bdUnsubscribeFromUsersPresenceResponse_vtbl *)&bdUnsubscribeFromUsersPresenceResponse::`vftable';
  `eh vector constructor iterator'(&this->m_userErrors, 0x50ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserPresenceError::bdUserPresenceError, (void (__fastcall *)(void *))bdUserPresenceError::~bdUserPresenceError);
  this->m_userErrors.m_size = 0;
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::~bdUnsubscribeFromUsersPresenceResponse
==============
*/
void bdUnsubscribeFromUsersPresenceResponse::~bdUnsubscribeFromUsersPresenceResponse(bdUnsubscribeFromUsersPresenceResponse *this)
{
  this->__vftable = (bdUnsubscribeFromUsersPresenceResponse_vtbl *)&bdUnsubscribeFromUsersPresenceResponse::`vftable';
  `eh vector destructor iterator'(&this->m_userErrors, 0x50ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserPresenceError::~bdUserPresenceError);
  bdRESTResponse::~bdRESTResponse(this);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::getErrorMap
==============
*/
bdRESTErrorMap *bdUnsubscribeFromUsersPresenceResponse::getErrorMap(bdUnsubscribeFromUsersPresenceResponse *this, bdRESTErrorMap *result)
{
  bdRESTErrorMap::bdRESTErrorMap(result, BD_REST_CROSS_PLATFORM_PRESENCE_ERROR_MAP_51, 5u);
  return result;
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::getNumErrors
==============
*/
__int64 bdUnsubscribeFromUsersPresenceResponse::getNumErrors(bdUnsubscribeFromUsersPresenceResponse *this)
{
  return this->m_userErrors.m_size;
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::getUserError
==============
*/
bdUserPresenceError *bdUnsubscribeFromUsersPresenceResponse::getUserError(bdUnsubscribeFromUsersPresenceResponse *this, unsigned int index)
{
  bdStructFixedSizeArray<bdUserPresenceError,100> *p_m_userErrors; 
  __int64 v3; 

  p_m_userErrors = &this->m_userErrors;
  v3 = index;
  bdHandleAssert(index < this->m_userErrors.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceError,100>::operator []", 0x4Du, "i is out of range");
  return (bdUserPresenceError *)((char *)p_m_userErrors + 80 * v3);
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::handleReplySuccess
==============
*/
__int64 bdUnsubscribeFromUsersPresenceResponse::handleReplySuccess(bdUnsubscribeFromUsersPresenceResponse *this, const bdRESTResponseMessage *reply)
{
  bool Array; 
  unsigned int v5; 
  unsigned int m_count; 
  unsigned int m_size; 
  unsigned int v8; 
  bool Object; 
  bool v10; 
  __int64 v11; 
  bdUserPresenceError *v12; 
  bdJSONDeserializer value; 
  __int64 v15; 
  bdJSONDeserializer v16; 
  bdJSONDeserializer deserializer; 
  bdUserPresenceError v18; 

  v15 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  Array = bdJSONDeserializer::getArray(&deserializer, "errorUsers", &value);
  v5 = 0;
  if ( Array )
  {
    m_count = value.m_count;
    m_size = this->m_userErrors.m_size;
    if ( m_size )
    {
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformPresence", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdunsubscribefromuserspresenceresponse.cpp", "bdUnsubscribeFromUsersPresenceResponse::handleReplySuccess", 0x31u, "bdUnsubscribeFromUsersPresenceResponse userErrors array still contains %u elements.", this->m_userErrors.m_size);
      m_size = this->m_userErrors.m_size;
    }
    if ( m_count + m_size > 0x64 )
    {
      Array = 0;
    }
    else
    {
      Array = 1;
      v8 = 0;
      do
      {
        if ( v8 >= m_count )
          break;
        bdUserPresenceError::bdUserPresenceError(&v18);
        bdJSONDeserializer::bdJSONDeserializer(&v16);
        Object = bdJSONDeserializer::getObject(&value, v8, &v16);
        v10 = Object && bdUserPresenceError::deserialize(&v18, &v16);
        Array = Object && v10;
        if ( v10 )
        {
          bdHandleAssert(this->m_userErrors.m_size < 0x64, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserPresenceError,100>::pushBack", 0x40u, "No more capacity for pushBack");
          v11 = this->m_userErrors.m_size;
          if ( (unsigned int)v11 < 0x64 )
          {
            v12 = &this->m_userErrors.m_elements[v11];
            this->m_userErrors.m_size = v11 + 1;
            bdUserAccountID::operator=(&v12->m_user, &v18.m_user);
            v12->m_errorCode = v18.m_errorCode;
          }
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v16);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v18.m_user.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v18.m_user.gap38);
        ++v8;
      }
      while ( Array );
    }
  }
  LOBYTE(v5) = Array;
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v5;
}

/*
==============
bdUnsubscribeFromUsersPresenceResponse::reset
==============
*/
void bdUnsubscribeFromUsersPresenceResponse::reset(bdUnsubscribeFromUsersPresenceResponse *this)
{
  this->m_userErrors.m_size = 0;
}

