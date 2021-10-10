/*
==============
UserPresenceUpdatedPushMessage::getUpdatedUserPresence
==============
*/

const bdUserPresence *__fastcall UserPresenceUpdatedPushMessage::getUpdatedUserPresence(UserPresenceUpdatedPushMessage *this)
{
  return ?getUpdatedUserPresence@UserPresenceUpdatedPushMessage@@QEBAAEBVbdUserPresence@@XZ(this);
}

/*
==============
UserPresenceUpdatedPushMessageCrossTitle::UserPresenceUpdatedPushMessageCrossTitle
==============
*/

void __fastcall UserPresenceUpdatedPushMessageCrossTitle::UserPresenceUpdatedPushMessageCrossTitle(UserPresenceUpdatedPushMessageCrossTitle *this)
{
  ??0UserPresenceUpdatedPushMessageCrossTitle@@IEAA@XZ(this);
}

/*
==============
UserPresenceUpdatedPushMessageCrossTitle::initFromMessage
==============
*/

bool __fastcall UserPresenceUpdatedPushMessageCrossTitle::initFromMessage(UserPresenceUpdatedPushMessageCrossTitle *this, const bdDemonataPushMessage *message)
{
  return ?initFromMessage@UserPresenceUpdatedPushMessageCrossTitle@@IEAA_NAEBVbdDemonataPushMessage@@@Z(this, message);
}

/*
==============
bdCrossPlatformPresencePushMessageHandler::handlePushMessage
==============
*/

void __fastcall bdCrossPlatformPresencePushMessageHandler::handlePushMessage(bdCrossPlatformPresencePushMessageHandler *this, bdDemonataPushMessage *message)
{
  ?handlePushMessage@bdCrossPlatformPresencePushMessageHandler@@MEAAXAEAVbdDemonataPushMessage@@@Z(this, message);
}

/*
==============
UserPresenceUpdatedPushMessage::initFromMessage
==============
*/

bool __fastcall UserPresenceUpdatedPushMessage::initFromMessage(UserPresenceUpdatedPushMessage *this, const bdDemonataPushMessage *message)
{
  return ?initFromMessage@UserPresenceUpdatedPushMessage@@IEAA_NAEBVbdDemonataPushMessage@@@Z(this, message);
}

/*
==============
bdCrossPlatformPresencePushMessageHandler::presenceSubscriptionUpdateReceived
==============
*/

void __fastcall bdCrossPlatformPresencePushMessageHandler::presenceSubscriptionUpdateReceived(bdCrossPlatformPresencePushMessageHandler *this, UserPresenceUpdatedPushMessageCrossTitle *__formal)
{
  ?presenceSubscriptionUpdateReceived@bdCrossPlatformPresencePushMessageHandler@@MEAAXAEAVUserPresenceUpdatedPushMessageCrossTitle@@@Z(this, __formal);
}

/*
==============
UserPresenceUpdatedPushMessage::UserPresenceUpdatedPushMessage
==============
*/

void __fastcall UserPresenceUpdatedPushMessage::UserPresenceUpdatedPushMessage(UserPresenceUpdatedPushMessage *this)
{
  ??0UserPresenceUpdatedPushMessage@@IEAA@XZ(this);
}

/*
==============
UserPresenceUpdatedPushMessageCrossTitle::getUpdatedUserPresence
==============
*/

const bdUserPresenceV3 *__fastcall UserPresenceUpdatedPushMessageCrossTitle::getUpdatedUserPresence(UserPresenceUpdatedPushMessageCrossTitle *this)
{
  return ?getUpdatedUserPresence@UserPresenceUpdatedPushMessageCrossTitle@@QEBAAEBVbdUserPresenceV3@@XZ(this);
}

/*
==============
UserPresenceUpdatedPushMessage::UserPresenceUpdatedPushMessage
==============
*/
void UserPresenceUpdatedPushMessage::UserPresenceUpdatedPushMessage(UserPresenceUpdatedPushMessage *this)
{
  bdUserPresence::bdUserPresence(&this->m_userPresence);
}

/*
==============
UserPresenceUpdatedPushMessageCrossTitle::UserPresenceUpdatedPushMessageCrossTitle
==============
*/
void UserPresenceUpdatedPushMessageCrossTitle::UserPresenceUpdatedPushMessageCrossTitle(UserPresenceUpdatedPushMessageCrossTitle *this)
{
  bdUserPresenceV3::bdUserPresenceV3(&this->m_userPresence);
}

/*
==============
UserPresenceUpdatedPushMessage::getUpdatedUserPresence
==============
*/
UserPresenceUpdatedPushMessage *UserPresenceUpdatedPushMessage::getUpdatedUserPresence(UserPresenceUpdatedPushMessage *this)
{
  return this;
}

/*
==============
UserPresenceUpdatedPushMessageCrossTitle::getUpdatedUserPresence
==============
*/
UserPresenceUpdatedPushMessageCrossTitle *UserPresenceUpdatedPushMessageCrossTitle::getUpdatedUserPresence(UserPresenceUpdatedPushMessageCrossTitle *this)
{
  return this;
}

/*
==============
bdCrossPlatformPresencePushMessageHandler::handlePushMessage
==============
*/
void bdCrossPlatformPresencePushMessageHandler::handlePushMessage(bdCrossPlatformPresencePushMessageHandler *this, bdDemonataPushMessage *message)
{
  const char *Schema; 
  bool BodyAsJSON; 
  bool v6; 
  char v7; 
  const bdUserPresence *v8; 
  const char *v9; 
  const char *v10; 
  unsigned __int64 value; 
  bdJSONDeserializer deserializer; 
  __int64 v13; 
  bdUserPresenceInfo presence; 
  bdUserDetails userDetails; 
  bdUserPresence v16; 
  bdUserPresence v17; 
  bdUserPresenceV3 v18; 
  char accountType[8]; 
  __int16 v20; 
  char context[8]; 
  __int64 v22; 

  v13 = -2i64;
  Schema = bdDemonataPushMessage::getSchema(message);
  if ( strstr_0(Schema, "UserPresenceUpdatedPushMessage") )
  {
    bdUserPresence::bdUserPresence(&v16);
    bdJSONDeserializer::bdJSONDeserializer(&deserializer);
    BodyAsJSON = bdDemonataPushMessage::getBodyAsJSON(message, &deserializer);
    value = 0i64;
    *(_QWORD *)accountType = 0i64;
    v20 = 0;
    *(_QWORD *)context = 0i64;
    v22 = 0i64;
    v6 = BodyAsJSON && bdJSONDeserializer::getUInt64(&deserializer, "userID", &value) && bdJSONDeserializer::getString(&deserializer, "accountType", accountType, 0xAu) && bdJSONDeserializer::getString(&deserializer, "context", context, 0x10u);
    bdUserPresenceInfo::bdUserPresenceInfo(&presence);
    if ( v6 && bdUserPresenceInfo::deserialize(&presence, "presence", &deserializer) )
    {
      v7 = 1;
      bdUserDetails::bdUserDetails(&userDetails, &value, accountType);
      bdUserPresence::bdUserPresence(&v17, &userDetails, context, &presence);
      bdUserPresence::operator=(&v16, v8);
      bdUserPresence::~bdUserPresence(&v17);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&userDetails.gap79[7]);
      bdReferencable::~bdReferencable((bdReferencable *)&userDetails.gap79[7]);
    }
    else
    {
      v7 = 0;
    }
    bdUserPresenceInfo::~bdUserPresenceInfo(&presence);
    bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
    bdUserPresenceV3::bdUserPresenceV3(&v18);
    if ( v7 && UserPresenceUpdatedPushMessageCrossTitle::initFromMessage((UserPresenceUpdatedPushMessageCrossTitle *)&v18, message) )
    {
      this->presenceSubscriptionUpdateReceived(this, (UserPresenceUpdatedPushMessage *)&v16);
      this->presenceSubscriptionUpdateReceived(this, (UserPresenceUpdatedPushMessageCrossTitle *)&v18);
    }
    else
    {
      v9 = bdDemonataPushMessage::getSchema(message);
      bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformPresencePushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdcrossplatformpresencepushmessagehandler.cpp", "bdCrossPlatformPresencePushMessageHandler::handlePushMessage", 0x24u, "Unable to parse push message with schema [%s].", v9);
    }
    bdUserPresenceV3::~bdUserPresenceV3(&v18);
    bdUserPresence::~bdUserPresence(&v16);
  }
  else
  {
    v10 = bdDemonataPushMessage::getSchema(message);
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformPresencePushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdcrossplatformpresencepushmessagehandler.cpp", "bdCrossPlatformPresencePushMessageHandler::handlePushMessage", 0x29u, "Received push message with unknown schema [%s].", v10);
  }
}

/*
==============
UserPresenceUpdatedPushMessage::initFromMessage
==============
*/
__int64 UserPresenceUpdatedPushMessage::initFromMessage(UserPresenceUpdatedPushMessage *this, const bdDemonataPushMessage *message)
{
  bool BodyAsJSON; 
  bool v5; 
  unsigned __int8 v6; 
  const bdUserPresence *v7; 
  unsigned __int64 value; 
  bdJSONDeserializer deserializer; 
  __int64 v11; 
  bdUserPresenceInfo presence; 
  bdUserDetails userDetails; 
  bdUserPresence v14; 
  char accountType[8]; 
  __int16 v16; 
  char context[8]; 
  __int64 v18; 

  v11 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  BodyAsJSON = bdDemonataPushMessage::getBodyAsJSON((bdDemonataPushMessage *)message, &deserializer);
  value = 0i64;
  *(_QWORD *)accountType = 0i64;
  v16 = 0;
  *(_QWORD *)context = 0i64;
  v18 = 0i64;
  v5 = BodyAsJSON && bdJSONDeserializer::getUInt64(&deserializer, "userID", &value) && bdJSONDeserializer::getString(&deserializer, "accountType", accountType, 0xAu) && bdJSONDeserializer::getString(&deserializer, "context", context, 0x10u);
  bdUserPresenceInfo::bdUserPresenceInfo(&presence);
  if ( v5 && bdUserPresenceInfo::deserialize(&presence, "presence", &deserializer) )
  {
    v6 = 1;
    bdUserDetails::bdUserDetails(&userDetails, &value, accountType);
    bdUserPresence::bdUserPresence(&v14, &userDetails, context, &presence);
    bdUserPresence::operator=(&this->m_userPresence, v7);
    bdUserPresence::~bdUserPresence(&v14);
    bdUserDetails::~bdUserDetails((bdUserDetails *)&userDetails.gap79[7]);
    bdReferencable::~bdReferencable((bdReferencable *)&userDetails.gap79[7]);
  }
  else
  {
    v6 = 0;
  }
  bdUserPresenceInfo::~bdUserPresenceInfo(&presence);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v6;
}

/*
==============
UserPresenceUpdatedPushMessageCrossTitle::initFromMessage
==============
*/
__int64 UserPresenceUpdatedPushMessageCrossTitle::initFromMessage(UserPresenceUpdatedPushMessageCrossTitle *this, const bdDemonataPushMessage *message)
{
  bool BodyAsJSON; 
  unsigned int v5; 
  bool UInt32; 
  unsigned __int8 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  char *v13; 
  __int64 v14; 
  __int64 v15; 
  char *v16; 
  unsigned int titleID; 
  unsigned __int64 value; 
  bdJSONDeserializer deserializer; 
  __int64 v21; 
  __int64 v22; 
  bdUserDetails userDetails; 
  bdUserPresenceInfoV3 presence; 
  bdUserPresenceV3 v25; 
  char accountType[8]; 
  __int16 v27; 
  char context[8]; 
  __int64 v29; 

  v22 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&deserializer);
  BodyAsJSON = bdDemonataPushMessage::getBodyAsJSON((bdDemonataPushMessage *)message, &deserializer);
  v5 = 0;
  value = 0i64;
  titleID = 0;
  *(_QWORD *)accountType = 0i64;
  v27 = 0;
  *(_QWORD *)context = 0i64;
  v29 = 0i64;
  if ( BodyAsJSON && bdJSONDeserializer::getUInt64(&deserializer, "userID", &value) && bdJSONDeserializer::getString(&deserializer, "accountType", accountType, 0xAu) && bdJSONDeserializer::getString(&deserializer, "context", context, 0x10u) )
  {
    UInt32 = 1;
    if ( bdJSONDeserializer::hasKey(&deserializer, "titleID") )
      UInt32 = bdJSONDeserializer::getUInt32(&deserializer, "titleID", &titleID);
  }
  else
  {
    UInt32 = 0;
  }
  bdUserPresenceInfoV3::bdUserPresenceInfoV3(&presence);
  if ( UInt32 && bdUserPresenceInfoV3::deserialize(&presence, "presence", &deserializer) )
  {
    v7 = 1;
    bdUserPresenceInfoV3::setTitleID(&presence, titleID);
    bdUserDetails::bdUserDetails(&userDetails, &value, accountType);
    bdUserPresenceV3::bdUserPresenceV3(&v25, &userDetails, context, &presence);
    v21 = v8;
    *(_OWORD *)this->m_userPresence.m_context.m_buffer = *(_OWORD *)v8;
    this->m_userPresence.m_context.m_buffer[16] = *(_BYTE *)(v8 + 16);
    v9 = v8 + 24;
    if ( &this->m_userPresence.m_presences != (bdStructFixedSizeArray<bdUserPresenceInfoV3,3> *)(v8 + 24) )
    {
      v10 = *(_DWORD *)(v8 + 2040);
      this->m_userPresence.m_presences.m_size = v10;
      if ( v10 )
      {
        do
        {
          v11 = 672i64 * v5;
          v12 = v11 + v9;
          v13 = (char *)&this->m_userPresence.m_presences + v11;
          *v13 = *(_BYTE *)(v11 + v9);
          v14 = v11 + v9 + 1;
          if ( v13 + 1 != (char *)v14 )
          {
            v13[1] = *(_BYTE *)v14;
            *(_OWORD *)(v13 + 2) = *(_OWORD *)(v14 + 1);
            v13[18] = *(_BYTE *)(v14 + 17);
          }
          bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v13 + 24), (const bdStructOptionalObject<bdLocalizationToken> *)(v12 + 24));
          bdStructOptionalObject<bdLocalizationToken>::operator=((bdStructOptionalObject<bdLocalizationToken> *)(v13 + 320), (const bdStructOptionalObject<bdLocalizationToken> *)(v12 + 320));
          if ( v13 + 616 != (char *)(v12 + 616) )
          {
            v13[616] = *(_BYTE *)(v12 + 616);
            *((_DWORD *)v13 + 155) = *(_DWORD *)(v12 + 620);
          }
          if ( v13 + 624 != (char *)(v12 + 624) )
          {
            v13[624] = *(_BYTE *)(v12 + 624);
            bdCrossPlatformUserMetadata::operator=((bdCrossPlatformUserMetadata *)(v13 + 632), (const bdCrossPlatformUserMetadata *)(v12 + 632));
          }
          v15 = v12 + 656;
          v16 = v13 + 656;
          if ( v16 != (char *)v15 )
          {
            *v16 = *(_BYTE *)v15;
            *((_QWORD *)v16 + 1) = *(_QWORD *)(v15 + 8);
          }
          ++v5;
        }
        while ( v5 < this->m_userPresence.m_presences.m_size );
        v8 = v21;
      }
    }
    bdUserDetails::operator=(&this->m_userPresence.m_userDetails, (const bdUserDetails *)(v8 + 2048));
    bdUserPresenceV3::~bdUserPresenceV3(&v25);
    bdUserDetails::~bdUserDetails((bdUserDetails *)&userDetails.gap79[7]);
    bdReferencable::~bdReferencable((bdReferencable *)&userDetails.gap79[7]);
  }
  else
  {
    v7 = 0;
  }
  bdUserPresenceInfoV3::~bdUserPresenceInfoV3(&presence);
  bdJSONDeserializer::~bdJSONDeserializer(&deserializer);
  return v7;
}

/*
==============
bdCrossPlatformPresencePushMessageHandler::presenceSubscriptionUpdateReceived
==============
*/
void bdCrossPlatformPresencePushMessageHandler::presenceSubscriptionUpdateReceived(bdCrossPlatformPresencePushMessageHandler *this, UserPresenceUpdatedPushMessageCrossTitle *__formal)
{
  bdLogMessage(BD_LOG_WARNING, "warn/", "bdCrossPlatformPresencePushMessageHandler", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdcrossplatformpresence\\presence\\bdcrossplatformpresencepushmessagehandler.cpp", "bdCrossPlatformPresencePushMessageHandler::presenceSubscriptionUpdateReceived", 0x12u, "presenceSubscriptionUpdateReceived(UserPresenceUpdatedPushMessageCrossTitle) not implemented");
}

