/*
==============
bdGetCrossPlatformUserSearchResponse::getMaxNumUsers
==============
*/

unsigned int __fastcall bdGetCrossPlatformUserSearchResponse::getMaxNumUsers(bdGetCrossPlatformUserSearchResponse *this)
{
  return ?getMaxNumUsers@bdGetCrossPlatformUserSearchResponse@@QEAAIXZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchResponse::getUsers
==============
*/

const bdCrossPlatformUser *__fastcall bdGetCrossPlatformUserSearchResponse::getUsers(bdGetCrossPlatformUserSearchResponse *this)
{
  return ?getUsers@bdGetCrossPlatformUserSearchResponse@@QEBAPEBVbdCrossPlatformUser@@XZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchResponse::getNumUsers
==============
*/

unsigned int __fastcall bdGetCrossPlatformUserSearchResponse::getNumUsers(bdGetCrossPlatformUserSearchResponse *this)
{
  return ?getNumUsers@bdGetCrossPlatformUserSearchResponse@@QEAAIXZ(this);
}

/*
==============
bdGetCrossPlatformUserSearchResponse::bdGetCrossPlatformUserSearchResponse
==============
*/

void __fastcall bdGetCrossPlatformUserSearchResponse::bdGetCrossPlatformUserSearchResponse(bdGetCrossPlatformUserSearchResponse *this, bdCrossPlatformUser *users, unsigned int maxUsers)
{
  ??0bdGetCrossPlatformUserSearchResponse@@QEAA@PEAVbdCrossPlatformUser@@I@Z(this, users, maxUsers);
}

/*
==============
bdGetCrossPlatformUserSearchResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetCrossPlatformUserSearchResponse::handleReplySuccess(bdGetCrossPlatformUserSearchResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdGetCrossPlatformUserSearchResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetCrossPlatformUserSearchResponse::bdGetCrossPlatformUserSearchResponse
==============
*/
void bdGetCrossPlatformUserSearchResponse::bdGetCrossPlatformUserSearchResponse(bdGetCrossPlatformUserSearchResponse *this, bdCrossPlatformUser *users, unsigned int maxUsers)
{
  bdRESTResponse::bdRESTResponse(this);
  this->m_users = users;
  this->__vftable = (bdGetCrossPlatformUserSearchResponse_vtbl *)&bdGetCrossPlatformUserSearchResponse::`vftable';
  this->m_maxUsers = maxUsers;
  this->m_numUsers = 0;
}

/*
==============
bdGetCrossPlatformUserSearchResponse::getMaxNumUsers
==============
*/
__int64 bdGetCrossPlatformUserSearchResponse::getMaxNumUsers(bdGetCrossPlatformUserSearchResponse *this)
{
  return this->m_maxUsers;
}

/*
==============
bdGetCrossPlatformUserSearchResponse::getNumUsers
==============
*/
__int64 bdGetCrossPlatformUserSearchResponse::getNumUsers(bdGetCrossPlatformUserSearchResponse *this)
{
  return this->m_numUsers;
}

/*
==============
bdGetCrossPlatformUserSearchResponse::getUsers
==============
*/
bdCrossPlatformUser *bdGetCrossPlatformUserSearchResponse::getUsers(bdGetCrossPlatformUserSearchResponse *this)
{
  return this->m_users;
}

/*
==============
bdGetCrossPlatformUserSearchResponse::handleReplySuccess
==============
*/
__int64 bdGetCrossPlatformUserSearchResponse::handleReplySuccess(bdGetCrossPlatformUserSearchResponse *this, const bdRESTResponseMessage *reply)
{
  bool v4; 
  unsigned int v5; 
  bool v6; 
  unsigned int m_count_low; 
  unsigned int v8; 
  bdJSONDeserializer value; 
  bdJSONDeserializer deserializer; 
  bdJSONDeserializer json; 

  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  v4 = bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer) && bdJSONDeserializer::isObject(&deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v5 = 0;
  if ( !v4 || !bdJSONDeserializer::getArray(&deserializer, "users", &value) )
    goto LABEL_18;
  v6 = 1;
  m_count_low = LOWORD(value.m_count);
  if ( LOWORD(value.m_count) >= this->m_maxUsers )
    m_count_low = this->m_maxUsers;
  this->m_numUsers = m_count_low;
  v8 = 0;
  if ( !m_count_low )
    goto LABEL_17;
  do
  {
    bdJSONDeserializer::bdJSONDeserializer(&json);
    v6 = v6 && bdJSONDeserializer::getObject(&value, v8, &json) && bdCrossPlatformUser::deserializeFromJSON(&this->m_users[v8], &json);
    bdJSONDeserializer::~bdJSONDeserializer(&json);
    ++v8;
  }
  while ( v8 < this->m_numUsers );
  if ( v6 )
LABEL_17:
    v5 = 1;
  else
LABEL_18:
    this->m_numUsers = 0;
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v5;
}

