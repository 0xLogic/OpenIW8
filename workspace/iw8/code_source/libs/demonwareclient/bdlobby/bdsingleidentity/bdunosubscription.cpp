/*
==============
bdUnoSubscription::bdUnoSubscription
==============
*/

void __fastcall bdUnoSubscription::bdUnoSubscription(bdUnoSubscription *this)
{
  ??0bdUnoSubscription@@QEAA@XZ(this);
}

/*
==============
bdUnoSubscriptionsEnabled::deserializeFromJSON
==============
*/

bool __fastcall bdUnoSubscriptionsEnabled::deserializeFromJSON(bdUnoSubscriptionsEnabled *this, bdJSONDeserializer *json)
{
  return ?deserializeFromJSON@bdUnoSubscriptionsEnabled@@UEAA_NPEAVbdJSONDeserializer@@@Z(this, json);
}

/*
==============
bdUnoSubscription::~bdUnoSubscription
==============
*/

void __fastcall bdUnoSubscription::~bdUnoSubscription(bdUnoSubscription *this)
{
  ??1bdUnoSubscription@@QEAA@XZ(this);
}

/*
==============
bdUnoSubscriptionChannel::serializeToJSON
==============
*/

bool __fastcall bdUnoSubscriptionChannel::serializeToJSON(bdUnoSubscriptionChannel *this, bdJSONSerializer *json)
{
  return ?serializeToJSON@bdUnoSubscriptionChannel@@QEBA_NPEAVbdJSONSerializer@@@Z(this, json);
}

/*
==============
bdUnoSubscriptionChannel::bdUnoSubscriptionChannel
==============
*/

void __fastcall bdUnoSubscriptionChannel::bdUnoSubscriptionChannel(bdUnoSubscriptionChannel *this)
{
  ??0bdUnoSubscriptionChannel@@QEAA@XZ(this);
}

/*
==============
bdUnoSubscriptionChannel::~bdUnoSubscriptionChannel
==============
*/

void __fastcall bdUnoSubscriptionChannel::~bdUnoSubscriptionChannel(bdUnoSubscriptionChannel *this)
{
  ??1bdUnoSubscriptionChannel@@QEAA@XZ(this);
}

/*
==============
bdUnoSubscription::serializeToJSON
==============
*/

bool __fastcall bdUnoSubscription::serializeToJSON(bdUnoSubscription *this, bdJSONSerializer *json, bool skipEmptyChannels)
{
  return ?serializeToJSON@bdUnoSubscription@@QEBA_NPEAVbdJSONSerializer@@_N@Z(this, json, skipEmptyChannels);
}

/*
==============
bdUnoSubscriptionsEnabled::bdUnoSubscriptionsEnabled
==============
*/

void __fastcall bdUnoSubscriptionsEnabled::bdUnoSubscriptionsEnabled(bdUnoSubscriptionsEnabled *this, const char **subscriptionNames, unsigned __int16 numSubscriptions, bool *subscriptionsEnabled, bdUnoSubscriptionChannelType channel)
{
  ??0bdUnoSubscriptionsEnabled@@QEAA@PEAPEBDGPEA_NW4bdUnoSubscriptionChannelType@@@Z(this, subscriptionNames, numSubscriptions, subscriptionsEnabled, channel);
}

/*
==============
bdUnoSubscriptionsEnabled::~bdUnoSubscriptionsEnabled
==============
*/

void __fastcall bdUnoSubscriptionsEnabled::~bdUnoSubscriptionsEnabled(bdUnoSubscriptionsEnabled *this)
{
  ??1bdUnoSubscriptionsEnabled@@UEAA@XZ(this);
}

/*
==============
bdUnoSubscription::bdUnoSubscription
==============
*/
void bdUnoSubscription::bdUnoSubscription(bdUnoSubscription *this)
{
  `eh vector constructor iterator'(this->m_channels, 0x104ui64, 7ui64, (void (__fastcall *)(void *))bdUnoSubscriptionChannel::bdUnoSubscriptionChannel, (void (__fastcall *)(void *))bdUnoSubscriptionChannel::~bdUnoSubscriptionChannel);
  memset_0(this, 0, 0x65ui64);
}

/*
==============
bdUnoSubscriptionChannel::bdUnoSubscriptionChannel
==============
*/
void bdUnoSubscriptionChannel::bdUnoSubscriptionChannel(bdUnoSubscriptionChannel *this)
{
  this->m_channel = BD_UNO_SUBSCRIPTION_UNDEFINED;
  memset_0(this->m_identifier, 0, sizeof(this->m_identifier));
}

/*
==============
bdUnoSubscriptionsEnabled::bdUnoSubscriptionsEnabled
==============
*/
void bdUnoSubscriptionsEnabled::bdUnoSubscriptionsEnabled(bdUnoSubscriptionsEnabled *this, const char **subscriptionNames, unsigned __int16 numSubscriptions, bool *subscriptionsEnabled, bdUnoSubscriptionChannelType channel)
{
  unsigned __int16 m_numSubscriptions; 
  __int64 v8; 
  unsigned int v9; 
  const char *v10; 
  char *v11; 
  unsigned __int64 v12; 
  size_t v13; 

  this->__vftable = (bdUnoSubscriptionsEnabled_vtbl *)&bdUnoSubscriptionsEnabled::`vftable';
  this->m_subscriptionsEnabled = subscriptionsEnabled;
  this->m_channel = channel;
  m_numSubscriptions = numSubscriptions;
  if ( numSubscriptions >= 7u )
    m_numSubscriptions = 7;
  this->m_numSubscriptions = m_numSubscriptions;
  if ( m_numSubscriptions < numSubscriptions )
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdSingleIdentity/bdUno", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdsingleidentity\\bdunosubscription.cpp", "bdUnoSubscriptionsEnabled::bdUnoSubscriptionsEnabled", 0x5Fu, "Exceeded maximum subscriptions count, data will be truncated.");
    m_numSubscriptions = this->m_numSubscriptions;
  }
  memset_0(this->m_subscriptionNames, 0, 101i64 * m_numSubscriptions);
  v8 = 0i64;
  LOWORD(v9) = this->m_numSubscriptions;
  if ( (_WORD)v9 )
  {
    do
    {
      v10 = subscriptionNames[v8];
      v11 = this->m_subscriptionNames[(unsigned int)v8];
      bdHandleAssert(v10 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v12 = -1i64;
      do
        ++v12;
      while ( v10[v12] );
      if ( (bdUnoSubscriptionsEnabled *)((char *)this + 101 * (unsigned int)v8) != (bdUnoSubscriptionsEnabled *)-8i64 )
      {
        v13 = 100i64;
        if ( v12 < 0x64 )
          v13 = v12;
        memcpy_0(v11, v10, v13);
        v11[v13] = 0;
      }
      v8 = (unsigned int)(v8 + 1);
      v9 = this->m_numSubscriptions;
    }
    while ( (unsigned int)v8 < v9 );
  }
  memset_0(this->m_subscriptionsEnabled, 0, (unsigned __int16)v9);
}

/*
==============
bdUnoSubscription::~bdUnoSubscription
==============
*/
void bdUnoSubscription::~bdUnoSubscription(bdUnoSubscription *this)
{
  `eh vector destructor iterator'(this->m_channels, 0x104ui64, 7ui64, (void (__fastcall *)(void *))bdUnoSubscriptionChannel::~bdUnoSubscriptionChannel);
}

/*
==============
bdUnoSubscriptionChannel::~bdUnoSubscriptionChannel
==============
*/
void bdUnoSubscriptionChannel::~bdUnoSubscriptionChannel(bdUnoSubscriptionChannel *this)
{
  ;
}

/*
==============
bdUnoSubscriptionsEnabled::~bdUnoSubscriptionsEnabled
==============
*/
void bdUnoSubscriptionsEnabled::~bdUnoSubscriptionsEnabled(bdUnoSubscriptionsEnabled *this)
{
  this->__vftable = (bdUnoSubscriptionsEnabled_vtbl *)&bdSingleIdentityJSONDeserializable::`vftable';
}

/*
==============
bdUnoSubscriptionsEnabled::deserializeFromJSON
==============
*/
_BOOL8 bdUnoSubscriptionsEnabled::deserializeFromJSON(bdUnoSubscriptionsEnabled *this, bdJSONDeserializer *json)
{
  bool Boolean; 
  int v5; 
  bdJSONDeserializer v7; 
  bdJSONDeserializer value; 

  Boolean = json->m_type == BD_JSON_OBJECT;
  if ( json->m_type == BD_JSON_OBJECT )
  {
    bdJSONDeserializer::bdJSONDeserializer(&value);
    bdJSONDeserializer::bdJSONDeserializer(&v7);
    v5 = 0;
    if ( this->m_numSubscriptions )
    {
      while ( 1 )
      {
        if ( bdJSONDeserializer::hasKey(json, this->m_subscriptionNames[v5]) )
        {
          if ( !Boolean || !bdJSONDeserializer::getObject(json, this->m_subscriptionNames[v5], &value) )
            goto LABEL_10;
          Boolean = 1;
          if ( bdJSONDeserializer::hasKey(&value, bdUnoSubscriptionChannel::bdUnoSubscriptionChannelStrings[this->m_channel]) )
            break;
        }
LABEL_11:
        if ( ++v5 >= (unsigned int)this->m_numSubscriptions )
          goto LABEL_12;
      }
      if ( bdJSONDeserializer::getObject(&value, bdUnoSubscriptionChannel::bdUnoSubscriptionChannelStrings[this->m_channel], &v7) )
      {
        if ( bdJSONDeserializer::hasKey(&v7, "enabled") )
          Boolean = bdJSONDeserializer::getBoolean(&v7, "enabled", &this->m_subscriptionsEnabled[v5]);
        goto LABEL_11;
      }
LABEL_10:
      Boolean = 0;
      goto LABEL_11;
    }
LABEL_12:
    bdJSONDeserializer::~bdJSONDeserializer(&v7);
    bdJSONDeserializer::~bdJSONDeserializer(&value);
  }
  return Boolean;
}

/*
==============
bdUnoSubscription::serializeToJSON
==============
*/
bool bdUnoSubscription::serializeToJSON(bdUnoSubscription *this, bdJSONSerializer *json, bool skipEmptyChannels)
{
  bool v6; 
  char *m_identifier; 
  unsigned int i; 
  char *v9; 
  __int64 v10; 
  bool v11; 
  __int64 v12; 

  if ( !json )
    return 0;
  v6 = bdJSONSerializer::writeBeginObject(json, this->m_subscriptionName);
  m_identifier = this->m_channels[0].m_identifier;
  for ( i = 0; i < 7; ++i )
  {
    if ( !skipEmptyChannels && *((_DWORD *)m_identifier - 1) )
      goto LABEL_24;
    v9 = this->m_channels[i].m_identifier;
    bdHandleAssert(v9 != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v10 = -1i64;
    do
      ++v10;
    while ( v9[v10] );
    if ( v10 )
    {
      if ( !v6 )
        goto LABEL_16;
      v11 = bdJSONSerializer::writeBeginObject(json, bdUnoSubscriptionChannel::bdUnoSubscriptionChannelStrings[*((int *)m_identifier - 1)]);
      bdHandleAssert(m_identifier != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
      v12 = -1i64;
      do
        ++v12;
      while ( m_identifier[v12] );
      if ( !v11 || v12 && !bdJSONSerializer::writeString(json, "identifier", m_identifier) )
        goto LABEL_16;
LABEL_24:
      if ( bdJSONSerializer::writeEndObject(json) )
        v6 = 1;
      else
LABEL_16:
        v6 = 0;
    }
    m_identifier += 260;
  }
  return v6 && bdJSONSerializer::writeEndObject(json);
}

/*
==============
bdUnoSubscriptionChannel::serializeToJSON
==============
*/
bool bdUnoSubscriptionChannel::serializeToJSON(bdUnoSubscriptionChannel *this, bdJSONSerializer *json)
{
  bool v4; 
  bool v5; 
  char *m_identifier; 
  bool v7; 
  __int64 v8; 

  if ( !json )
    return 0;
  v4 = bdJSONSerializer::writeBeginObject(json, bdUnoSubscriptionChannel::bdUnoSubscriptionChannelStrings[this->m_channel]);
  v5 = this->m_identifier == NULL;
  m_identifier = this->m_identifier;
  v7 = v4;
  bdHandleAssert(!v5, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v8 = -1i64;
  do
    ++v8;
  while ( m_identifier[v8] );
  if ( !v7 || v8 && !bdJSONSerializer::writeString(json, "identifier", m_identifier) )
    return 0;
  return bdJSONSerializer::writeEndObject(json);
}

