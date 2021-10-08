/*
==============
bdCrossPlatformIdentityUsernameChangedPushMessage::initFromMessage
==============
*/

bool __fastcall bdCrossPlatformIdentityUsernameChangedPushMessage::initFromMessage(bdCrossPlatformIdentityUsernameChangedPushMessage *this, bdDemonataPushMessage *message)
{
  return ?initFromMessage@bdCrossPlatformIdentityUsernameChangedPushMessage@@IEAA_NAEAVbdDemonataPushMessage@@@Z(this, message);
}

/*
==============
bdCrossPlatformIdentityUsernameChangedPushMessage::bdCrossPlatformIdentityUsernameChangedPushMessage
==============
*/

void __fastcall bdCrossPlatformIdentityUsernameChangedPushMessage::bdCrossPlatformIdentityUsernameChangedPushMessage(bdCrossPlatformIdentityUsernameChangedPushMessage *this)
{
  ??0bdCrossPlatformIdentityUsernameChangedPushMessage@@IEAA@XZ(this);
}

/*
==============
bdCrossPlatformIdentityAccountBannedPushMessage::getPlatform
==============
*/

char *__fastcall bdCrossPlatformIdentityAccountBannedPushMessage::getPlatform(bdCrossPlatformIdentityAccountBannedPushMessage *this)
{
  return ?getPlatform@bdCrossPlatformIdentityAccountBannedPushMessage@@QEAAPEADXZ(this);
}

/*
==============
bdCrossPlatformIdentityAccountBannedPushMessage::initFromMessage
==============
*/

bool __fastcall bdCrossPlatformIdentityAccountBannedPushMessage::initFromMessage(bdCrossPlatformIdentityAccountBannedPushMessage *this, bdDemonataPushMessage *message)
{
  return ?initFromMessage@bdCrossPlatformIdentityAccountBannedPushMessage@@IEAA_NAEAVbdDemonataPushMessage@@@Z(this, message);
}

/*
==============
bdCrossPlatformIdentityAccountUnlinkedPushMessage::initFromMessage
==============
*/

bool __fastcall bdCrossPlatformIdentityAccountUnlinkedPushMessage::initFromMessage(bdCrossPlatformIdentityAccountUnlinkedPushMessage *this, bdDemonataPushMessage *message)
{
  return ?initFromMessage@bdCrossPlatformIdentityAccountUnlinkedPushMessage@@AEAA_NAEAVbdDemonataPushMessage@@@Z(this, message);
}

/*
==============
bdCrossPlatformIdentityUsernameChangedPushMessage::getNewUserDetails
==============
*/

bdUserDetails *__fastcall bdCrossPlatformIdentityUsernameChangedPushMessage::getNewUserDetails(bdCrossPlatformIdentityUsernameChangedPushMessage *this)
{
  return ?getNewUserDetails@bdCrossPlatformIdentityUsernameChangedPushMessage@@QEAAAEAVbdUserDetails@@XZ(this);
}

/*
==============
bdCrossPlatformIdentityAccountBannedPushMessage::bdCrossPlatformIdentityAccountBannedPushMessage
==============
*/

void __fastcall bdCrossPlatformIdentityAccountBannedPushMessage::bdCrossPlatformIdentityAccountBannedPushMessage(bdCrossPlatformIdentityAccountBannedPushMessage *this)
{
  ??0bdCrossPlatformIdentityAccountBannedPushMessage@@IEAA@XZ(this);
}

/*
==============
bdCrossPlatformIdentityAccountUnlinkedPushMessage::getUserDetails
==============
*/

bdCrossPlatformIdentityMappedUser *__fastcall bdCrossPlatformIdentityAccountUnlinkedPushMessage::getUserDetails(bdCrossPlatformIdentityAccountUnlinkedPushMessage *this)
{
  return ?getUserDetails@bdCrossPlatformIdentityAccountUnlinkedPushMessage@@QEAAAEAVbdCrossPlatformIdentityMappedUser@@XZ(this);
}

/*
==============
bdCrossPlatformIdentityAccountBannedPushMessage::bdCrossPlatformIdentityAccountBannedPushMessage
==============
*/
void bdCrossPlatformIdentityAccountBannedPushMessage::bdCrossPlatformIdentityAccountBannedPushMessage(bdCrossPlatformIdentityAccountBannedPushMessage *this)
{
  *(_QWORD *)this->m_platform = 0i64;
  *(_DWORD *)&this->m_platform[8] = 0;
  this->m_platform[12] = 0;
}

/*
==============
bdCrossPlatformIdentityUsernameChangedPushMessage::bdCrossPlatformIdentityUsernameChangedPushMessage
==============
*/
void bdCrossPlatformIdentityUsernameChangedPushMessage::bdCrossPlatformIdentityUsernameChangedPushMessage(bdCrossPlatformIdentityUsernameChangedPushMessage *this)
{
  bdUserDetails::bdUserDetails(&this->m_newUserDetails);
}

/*
==============
bdCrossPlatformIdentityUsernameChangedPushMessage::getNewUserDetails
==============
*/
bdCrossPlatformIdentityUsernameChangedPushMessage *bdCrossPlatformIdentityUsernameChangedPushMessage::getNewUserDetails(bdCrossPlatformIdentityUsernameChangedPushMessage *this)
{
  return this;
}

/*
==============
bdCrossPlatformIdentityAccountBannedPushMessage::getPlatform
==============
*/
bdCrossPlatformIdentityAccountBannedPushMessage *bdCrossPlatformIdentityAccountBannedPushMessage::getPlatform(bdCrossPlatformIdentityAccountBannedPushMessage *this)
{
  return this;
}

/*
==============
bdCrossPlatformIdentityAccountUnlinkedPushMessage::getUserDetails
==============
*/
bdCrossPlatformIdentityAccountUnlinkedPushMessage *bdCrossPlatformIdentityAccountUnlinkedPushMessage::getUserDetails(bdCrossPlatformIdentityAccountUnlinkedPushMessage *this)
{
  return this;
}

/*
==============
bdCrossPlatformIdentityAccountBannedPushMessage::initFromMessage
==============
*/
bool bdCrossPlatformIdentityAccountBannedPushMessage::initFromMessage(bdCrossPlatformIdentityAccountBannedPushMessage *this, bdDemonataPushMessage *message)
{
  const char *ContentType; 
  bool BodyAsJSON; 
  const char *v7; 
  bool v8; 
  bdJSONDeserializer deserializer; 
  bdStructBufferDeserializer v10; 

  ContentType = bdDemonataPushMessage::getContentType(message);
  if ( _strcmpi(ContentType, "application/json") )
  {
    v7 = bdDemonataPushMessage::getContentType(message);
    if ( _strcmpi(v7, "application/protobuf") )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCrossPlatformIdentity/pushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdcrossplatformidentitypushmessagehandler\\bdcrossplatformidentitypushmessages.cpp", "bdCrossPlatformIdentityAccountBannedPushMessage::initFromMessage", 0x51u, "Detected unexpected message content type while handling LSG push message.");
      return 0;
    }
    else
    {
      bdStructBufferDeserializer::bdStructBufferDeserializer(&v10);
      v8 = bdDemonataPushMessage::getBodyAsStructBuffer(message, &v10) && bdStructBufferDeserializer::readString(&v10, 1u, this->m_platform, 0xDu);
      bdStructBufferDeserializer::~bdStructBufferDeserializer(&v10);
      return v8;
    }
  }
  else
  {
    bdJSONDeserializer::bdJSONDeserializer(&deserializer);
    BodyAsJSON = bdDemonataPushMessage::getBodyAsJSON(message, &deserializer);
    if ( BodyAsJSON )
      BodyAsJSON = bdJSONDeserializer::getString(&deserializer, "platform", this->m_platform, 0xDu);
    bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
    return BodyAsJSON;
  }
}

/*
==============
bdCrossPlatformIdentityAccountUnlinkedPushMessage::initFromMessage
==============
*/
bool bdCrossPlatformIdentityAccountUnlinkedPushMessage::initFromMessage(bdCrossPlatformIdentityAccountUnlinkedPushMessage *this, bdDemonataPushMessage *message)
{
  const char *ContentType; 
  bool BodyAsJSON; 
  const char *v7; 
  bool v8; 
  bdJSONDeserializer deserializer; 
  __int64 v10; 
  bdStructBufferDeserializer v11; 

  v10 = -2i64;
  ContentType = bdDemonataPushMessage::getContentType(message);
  if ( _strcmpi(ContentType, "application/json") )
  {
    v7 = bdDemonataPushMessage::getContentType(message);
    if ( _strcmpi(v7, "application/protobuf") )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCrossPlatformIdentity/pushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdcrossplatformidentitypushmessagehandler\\bdcrossplatformidentitypushmessages.cpp", "bdCrossPlatformIdentityAccountUnlinkedPushMessage::initFromMessage", 0x71u, "Detected unexpected message content type while handling LSG push message.");
      return 0;
    }
    else
    {
      bdStructBufferDeserializer::bdStructBufferDeserializer(&v11);
      v8 = bdDemonataPushMessage::getBodyAsStructBuffer(message, &v11) && bdStructBufferDeserializer::readString(&v11, 1u, this->user._bytes_20, 0xBu) && bdStructBufferDeserializer::readUInt64(&v11, 2u, &this->user.m_userID);
      bdStructBufferDeserializer::~bdStructBufferDeserializer(&v11);
      return v8;
    }
  }
  else
  {
    bdJSONDeserializer::bdJSONDeserializer(&deserializer);
    BodyAsJSON = bdDemonataPushMessage::getBodyAsJSON(message, &deserializer);
    if ( BodyAsJSON )
      BodyAsJSON = bdJSONDeserializer::getUInt64(&deserializer, "userID", &this->user.m_userID) && bdJSONDeserializer::getString(&deserializer, "accountType", this->user._bytes_20, 0xBu);
    bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
    return BodyAsJSON;
  }
}

/*
==============
bdCrossPlatformIdentityUsernameChangedPushMessage::initFromMessage
==============
*/
_BOOL8 bdCrossPlatformIdentityUsernameChangedPushMessage::initFromMessage(bdCrossPlatformIdentityUsernameChangedPushMessage *this, bdDemonataPushMessage *message)
{
  const char *ContentType; 
  bool BodyAsJSON; 
  const char *v6; 
  bdJSONDeserializer deserializer; 
  bdStructBufferDeserializer v9; 
  char value[112]; 

  memset_0(value, 0, 0x61ui64);
  ContentType = bdDemonataPushMessage::getContentType(message);
  if ( _strcmpi(ContentType, "application/json") )
  {
    v6 = bdDemonataPushMessage::getContentType(message);
    if ( _strcmpi(v6, "application/protobuf") )
    {
      BodyAsJSON = 0;
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdCrossPlatformIdentity/pushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformidentity\\bdcrossplatformidentitypushmessagehandler\\bdcrossplatformidentitypushmessages.cpp", "bdCrossPlatformIdentityUsernameChangedPushMessage::initFromMessage", 0x32u, "Detected unexpected message content type while handling LSG push message.");
    }
    else
    {
      bdStructBufferDeserializer::bdStructBufferDeserializer(&v9);
      BodyAsJSON = bdDemonataPushMessage::getBodyAsStructBuffer(message, &v9) && bdStructBufferDeserializer::readString(&v9, 1u, value, 0x61u);
      bdStructBufferDeserializer::~bdStructBufferDeserializer(&v9);
    }
  }
  else
  {
    bdJSONDeserializer::bdJSONDeserializer(&deserializer);
    BodyAsJSON = bdDemonataPushMessage::getBodyAsJSON(message, &deserializer);
    if ( BodyAsJSON )
      BodyAsJSON = bdJSONDeserializer::getString(&deserializer, "username", value, 0x61u);
    bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  }
  bdUserDetails::setUsernameWithHash(&this->m_newUserDetails, value);
  return BodyAsJSON;
}

