/*
==============
bdGetCrossPlatformUsernamesResponse::getUser
==============
*/

bdUserDetails *__fastcall bdGetCrossPlatformUsernamesResponse::getUser(bdGetCrossPlatformUsernamesResponse *this, unsigned int index)
{
  return ?getUser@bdGetCrossPlatformUsernamesResponse@@QEAAAEAVbdUserDetails@@I@Z(this, index);
}

/*
==============
bdGetCrossPlatformUsernamesResponse::reset
==============
*/

void __fastcall bdGetCrossPlatformUsernamesResponse::reset(bdGetCrossPlatformUsernamesResponse *this)
{
  ?reset@bdGetCrossPlatformUsernamesResponse@@QEAAXXZ(this);
}

/*
==============
bdGetCrossPlatformUsernamesResponse::getNumUsers
==============
*/

unsigned int __fastcall bdGetCrossPlatformUsernamesResponse::getNumUsers(bdGetCrossPlatformUsernamesResponse *this)
{
  return ?getNumUsers@bdGetCrossPlatformUsernamesResponse@@QEBAIXZ(this);
}

/*
==============
bdGetCrossPlatformUsernamesResponse::handleReplySuccess
==============
*/

bdRESTResponse::bdHandleStatus __fastcall bdGetCrossPlatformUsernamesResponse::handleReplySuccess(bdGetCrossPlatformUsernamesResponse *this, const bdRESTResponseMessage *reply)
{
  return ?handleReplySuccess@bdGetCrossPlatformUsernamesResponse@@UEAA?AW4bdHandleStatus@bdRESTResponse@@AEBVbdRESTResponseMessage@@@Z(this, reply);
}

/*
==============
bdGetCrossPlatformUsernamesResponse::getNumUsers
==============
*/
__int64 bdGetCrossPlatformUsernamesResponse::getNumUsers(bdGetCrossPlatformUsernamesResponse *this)
{
  return this->m_users.m_size;
}

/*
==============
bdGetCrossPlatformUsernamesResponse::getUser
==============
*/
bdUserDetails *bdGetCrossPlatformUsernamesResponse::getUser(bdGetCrossPlatformUsernamesResponse *this, unsigned int index)
{
  bdStructFixedSizeArray<bdUserDetails,200> *p_m_users; 
  __int64 v3; 

  p_m_users = &this->m_users;
  v3 = index;
  bdHandleAssert(index < this->m_users.m_size, "i < m_size", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserDetails,200>::operator []", 0x4Du, "i is out of range");
  return (bdUserDetails *)((char *)p_m_users + 144 * v3);
}

/*
==============
bdGetCrossPlatformUsernamesResponse::handleReplySuccess
==============
*/
__int64 bdGetCrossPlatformUsernamesResponse::handleReplySuccess(bdGetCrossPlatformUsernamesResponse *this, const bdRESTResponseMessage *reply)
{
  unsigned int v4; 
  bool v5; 
  unsigned int m_count; 
  unsigned int v7; 
  bool v8; 
  __int64 m_size; 
  unsigned __int64 userID; 
  bdJSONDeserializer v12; 
  bdJSONDeserializer value; 
  __int64 v14; 
  bdJSONDeserializer deserializer; 
  bdUserDetails other; 
  char accountType[8]; 
  __int16 v18; 
  char usernameWithHash[112]; 

  v14 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  bdRESTResponseMessage::getBodyAsJSON((bdRESTResponseMessage *)reply, &deserializer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  v4 = 0;
  if ( !bdJSONDeserializer::getArray(&deserializer, "users", &value) )
  {
    v5 = 0;
LABEL_16:
    v8 = !v5;
    goto LABEL_17;
  }
  m_count = value.m_count;
  v5 = value.m_count + this->m_users.m_size <= 0xC8;
  v7 = 0;
  if ( !value.m_count )
    goto LABEL_16;
  while ( 1 )
  {
    v8 = !v5;
    if ( !v5 )
      break;
    bdJSONDeserializer::bdJSONDeserializer(&v12);
    userID = 0i64;
    *(_QWORD *)accountType = 0i64;
    v18 = 0;
    memset_0(usernameWithHash, 0, 0x61ui64);
    v5 = bdJSONDeserializer::getObject(&value, v7, &v12) && bdJSONDeserializer::getUInt64(&v12, "userID", &userID) && bdJSONDeserializer::getString(&v12, "accountType", accountType, 0xAu) && bdJSONDeserializer::getString(&v12, "username", usernameWithHash, 0x61u);
    if ( v5 )
    {
      bdUserDetails::bdUserDetails(&other, &userID, accountType);
      bdUserDetails::setUsernameWithHash(&other, usernameWithHash);
      bdHandleAssert(this->m_users.m_size < 0xC8, "canPushBack()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizearray.inl", "bdStructFixedSizeArray<class bdUserDetails,200>::pushBack", 0x40u, "No more capacity for pushBack");
      m_size = this->m_users.m_size;
      if ( (unsigned int)m_size < 0xC8 )
      {
        this->m_users.m_size = m_size + 1;
        bdUserDetails::operator=(&this->m_users.m_elements[m_size], &other);
      }
      bdUserDetails::~bdUserDetails((bdUserDetails *)&other.gap79[7]);
      bdReferencable::~bdReferencable((bdReferencable *)&other.gap79[7]);
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v12);
    if ( ++v7 >= m_count )
      goto LABEL_16;
  }
LABEL_17:
  LOBYTE(v4) = !v8;
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v4;
}

/*
==============
bdGetCrossPlatformUsernamesResponse::reset
==============
*/
void bdGetCrossPlatformUsernamesResponse::reset(bdGetCrossPlatformUsernamesResponse *this)
{
  this->m_users.m_size = 0;
}

