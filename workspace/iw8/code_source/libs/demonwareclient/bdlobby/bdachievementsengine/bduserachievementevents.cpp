/*
==============
bdPlatformIDToString
==============
*/

const char *__fastcall bdPlatformIDToString(const bdPlatformID platform)
{
  return ?bdPlatformIDToString@@YAPEBDW4bdPlatformID@@@Z(platform);
}

/*
==============
bdUserAchievementEvents::setUserAccountID
==============
*/

bdUserAchievementEvents *__fastcall bdUserAchievementEvents::setUserAccountID(bdUserAchievementEvents *this, bdUserAccountID *userAccountID, bdUserAccountID *firstPartyUserAccountID, bdPlatformID platform)
{
  return ?setUserAccountID@bdUserAchievementEvents@@QEAAAEAV1@VbdUserAccountID@@0W4bdPlatformID@@@Z(this, userAccountID, firstPartyUserAccountID, platform);
}

/*
==============
bdUserAchievementEvents::bdUserAchievementEvents
==============
*/

void __fastcall bdUserAchievementEvents::bdUserAchievementEvents(bdUserAchievementEvents *this, bdUserAccountID *userAccountID, bdUserAccountID *firstPartyUserAccountID, bdPlatformID platform, unsigned int numEvents, const bdAchievementEvent **events)
{
  ??0bdUserAchievementEvents@@QEAA@VbdUserAccountID@@0W4bdPlatformID@@IQEAPEBVbdAchievementEvent@@@Z(this, userAccountID, firstPartyUserAccountID, platform, numEvents, events);
}

/*
==============
bdUserAchievementEvents::serialize
==============
*/

bool __fastcall bdUserAchievementEvents::serialize(bdUserAchievementEvents *this, bdJSONSerializer *serializer)
{
  return ?serialize@bdUserAchievementEvents@@QEBA_NAEAVbdJSONSerializer@@@Z(this, serializer);
}

/*
==============
bdUserAchievementEvents::deserialize
==============
*/

bool __fastcall bdUserAchievementEvents::deserialize(bdUserAchievementEvents *this, bdStructBufferDeserializer *__formal)
{
  return ?deserialize@bdUserAchievementEvents@@UEAA_NAEAVbdStructBufferDeserializer@@@Z(this, __formal);
}

/*
==============
bdUserAchievementEvents::serialize
==============
*/

bool __fastcall bdUserAchievementEvents::serialize(bdUserAchievementEvents *this, bdStructBufferSerializer *serializer)
{
  return ?serialize@bdUserAchievementEvents@@UEBA_NAEAVbdStructBufferSerializer@@@Z(this, serializer);
}

/*
==============
bdUserAchievementEvents::reset
==============
*/

void __fastcall bdUserAchievementEvents::reset(bdUserAchievementEvents *this)
{
  ?reset@bdUserAchievementEvents@@QEAAXXZ(this);
}

/*
==============
bdUserAchievementEvents::bdUserAchievementEvents
==============
*/

void __fastcall bdUserAchievementEvents::bdUserAchievementEvents(bdUserAchievementEvents *this)
{
  ??0bdUserAchievementEvents@@QEAA@XZ(this);
}

/*
==============
bdUserAchievementEvents::setEvents
==============
*/

bdUserAchievementEvents *__fastcall bdUserAchievementEvents::setEvents(bdUserAchievementEvents *this, unsigned int numEvents, const bdAchievementEvent **events)
{
  return ?setEvents@bdUserAchievementEvents@@QEAAAEAV1@IQEAPEBVbdAchievementEvent@@@Z(this, numEvents, events);
}

/*
==============
bdUserAchievementEvents::bdUserAchievementEvents
==============
*/
void bdUserAchievementEvents::bdUserAchievementEvents(bdUserAchievementEvents *this, bdUserAccountID *userAccountID, bdUserAccountID *firstPartyUserAccountID, bdPlatformID platform, unsigned int numEvents, const bdAchievementEvent **events, int a7)
{
  if ( a7 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAchievementEvents::`vbtable';
    *((_QWORD *)&this->m_events + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_events + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdUserAchievementEvents_vtbl *)&bdUserAchievementEvents::`vftable'{for `bdStructBufferSerializable'};
  *(bdUserAchievementEvents_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAchievementEvents_vtbl *)&bdUserAchievementEvents::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 2), userAccountID);
  bdStructUserAccountID::bdStructUserAccountID(&this->m_firstPartyUserAccountID, firstPartyUserAccountID);
  this->m_platform = platform;
  this->m_numEvents = numEvents;
  this->m_events = events;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userAccountID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userAccountID->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)firstPartyUserAccountID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)firstPartyUserAccountID->gap38);
}

/*
==============
bdUserAchievementEvents::bdUserAchievementEvents
==============
*/
void bdUserAchievementEvents::bdUserAchievementEvents(bdUserAchievementEvents *this, int a2)
{
  if ( a2 )
  {
    *((_QWORD *)&this->__vftable + 1) = &bdUserAchievementEvents::`vbtable';
    *((_QWORD *)&this->m_events + 1) = &bdReferencable::`vftable';
    *((_DWORD *)&this->m_events + 4) = 0;
  }
  bdStructBufferSerializable::bdStructBufferSerializable(this);
  this->__vftable = (bdUserAchievementEvents_vtbl *)&bdUserAchievementEvents::`vftable'{for `bdStructBufferSerializable'};
  *(bdUserAchievementEvents_vtbl **)((char *)&this->__vftable + *(int *)(*((_QWORD *)&this->__vftable + 1) + 4i64) + 8) = (bdUserAchievementEvents_vtbl *)&bdUserAchievementEvents::`vftable'{for `bdReferencable'};
  bdStructUserAccountID::bdStructUserAccountID((bdStructUserAccountID *)(&this->__vftable + 2));
  bdStructUserAccountID::bdStructUserAccountID(&this->m_firstPartyUserAccountID);
  *(_QWORD *)&this->m_platform = 0i64;
  this->m_events = NULL;
}

/*
==============
bdPlatformIDToString
==============
*/
const char *bdPlatformIDToString(const bdPlatformID platform)
{
  const char *result; 

  switch ( platform )
  {
    case BD_PLATFORM_ID_XBOXONE:
      result = "xb1";
      break;
    case BD_PLATFORM_ID_PS4:
      result = "ps4";
      break;
    case BD_PLATFORM_ID_SWITCH:
      result = "switch";
      break;
    case BD_PLATFORM_ID_BATTLENET:
      result = "bnet";
      break;
    case BD_PLATFORM_ID_STEAM:
      result = "steam";
      break;
    case BD_PLATFORM_ID_WE_GAME:
      result = "we";
      break;
    default:
      result = "unknown";
      break;
  }
  return result;
}

/*
==============
bdUserAchievementEvents::deserialize
==============
*/
bool bdUserAchievementEvents::deserialize(bdUserAchievementEvents *this, bdStructBufferDeserializer *__formal)
{
  bdHandleAssert(0, "false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bduserachievementevents.cpp", "bdUserAchievementEvents::deserialize", 0x49u, "NOT IMPLEMENTED");
  return 0;
}

/*
==============
bdUserAchievementEvents::reset
==============
*/
void bdUserAchievementEvents::reset(bdUserAchievementEvents *this)
{
  bdUserAccountID::reset((bdUserAccountID *)(&this->__vftable + 2));
  this->m_numEvents = 0;
  this->m_events = NULL;
}

/*
==============
bdUserAchievementEvents::serialize
==============
*/
bool bdUserAchievementEvents::serialize(bdUserAchievementEvents *this, bdJSONSerializer *serializer)
{
  bool v4; 
  const char *AccountType; 
  unsigned __int64 UserID; 
  const char *v7; 
  unsigned __int64 v8; 
  const char *v9; 
  __int64 i; 

  bdHandleAssert(this->m_numEvents != 0, "m_numEvents > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bduserachievementevents.cpp", "bdUserAchievementEvents::serialize", 0x5Du, "Attempting to serialize 0 events");
  v4 = bdJSONSerializer::writeBeginObject(serializer);
  AccountType = bdUserAccountID::getAccountType((bdUserAccountID *)(&this->__vftable + 2));
  bdJSONSerializer::writeString(serializer, "accountType", AccountType);
  UserID = bdUserAccountID::getUserID((bdUserAccountID *)(&this->__vftable + 2));
  bdJSONSerializer::writeUInt64(serializer, "userID", UserID, 0);
  v7 = bdUserAccountID::getAccountType(&this->m_firstPartyUserAccountID);
  bdJSONSerializer::writeString(serializer, "firstPartyAccountType", v7);
  v8 = bdUserAccountID::getUserID(&this->m_firstPartyUserAccountID);
  bdJSONSerializer::writeUInt64(serializer, "firstPartyUserID", v8, 0);
  switch ( this->m_platform )
  {
    case BD_PLATFORM_ID_XBOXONE:
      v9 = "xb1";
      break;
    case BD_PLATFORM_ID_PS4:
      v9 = "ps4";
      break;
    case BD_PLATFORM_ID_SWITCH:
      v9 = "switch";
      break;
    case BD_PLATFORM_ID_BATTLENET:
      v9 = "bnet";
      break;
    case BD_PLATFORM_ID_STEAM:
      v9 = "steam";
      break;
    case BD_PLATFORM_ID_WE_GAME:
      v9 = "we";
      break;
    default:
      v9 = "unknown";
      break;
  }
  bdJSONSerializer::writeString(serializer, "platform", v9);
  bdJSONSerializer::writeBeginArray(serializer, "events");
  for ( i = 0i64; (unsigned int)i < this->m_numEvents; i = (unsigned int)(i + 1) )
    bdAchievementEvent::serialize((bdAchievementEvent *)this->m_events[i], serializer);
  bdJSONSerializer::writeEndArray(serializer);
  return v4 && bdJSONSerializer::writeEndObject(serializer);
}

/*
==============
bdUserAchievementEvents::serialize
==============
*/
bool bdUserAchievementEvents::serialize(bdUserAchievementEvents *this, bdStructBufferSerializer *serializer)
{
  unsigned int m_numEvents; 
  bool v5; 
  __int64 v6; 
  __int64 v7; 

  bdHandleAssert(this->m_numEvents != 0, "m_numEvents > 0", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdachievementsengine\\bduserachievementevents.cpp", "bdUserAchievementEvents::serialize", 0x3Du, "Attempting to serialize 0 events");
  if ( !bdStructBufferSerializer::writeObject(serializer, 1u, (const bdStructBufferSerializable *)&this->m_userAccountID[40]) || !bdStructBufferSerializer::writeObject(serializer, 3u, (const bdStructBufferSerializable *)this->m_firstPartyUserAccountID.gap38) || !bdStructBufferSerializer::writeUByte8(serializer, 4u, this->m_platform) )
    return 0;
  m_numEvents = this->m_numEvents;
  v5 = 1;
  if ( !m_numEvents )
    return 1;
  v6 = 0i64;
  v7 = m_numEvents;
  do
  {
    v5 = v5 && bdStructBufferSerializer::writeObject(serializer, 2u, this->m_events[v6++]);
    --v7;
  }
  while ( v7 );
  return v5;
}

/*
==============
bdUserAchievementEvents::setEvents
==============
*/
bdUserAchievementEvents *bdUserAchievementEvents::setEvents(bdUserAchievementEvents *this, unsigned int numEvents, const bdAchievementEvent **events)
{
  bdUserAchievementEvents *result; 

  this->m_numEvents = numEvents;
  result = this;
  this->m_events = events;
  return result;
}

/*
==============
bdUserAchievementEvents::setUserAccountID
==============
*/
bdUserAchievementEvents *bdUserAchievementEvents::setUserAccountID(bdUserAchievementEvents *this, bdUserAccountID *userAccountID, bdUserAccountID *firstPartyUserAccountID, bdPlatformID platform)
{
  const bdUserAccountID *v8; 
  const bdUserAccountID *v9; 
  const bdUserAccountID *v10; 
  const bdUserAccountID *v11; 
  bdStructUserAccountID v13; 

  bdStructUserAccountID::bdStructUserAccountID(&v13, userAccountID);
  v9 = v8;
  bdUserAccountID::operator=((bdUserAccountID *)(&this->__vftable + 2), v8);
  bdReferencable::operator=((bdReferencable *)&this->m_userAccountID[*(int *)(*(_QWORD *)&this->m_userAccountID[48] + 4i64) + 48], (const bdReferencable *)&v9->gap38[*(int *)(*(_QWORD *)&v9->gap38[8] + 4i64) + 8]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v13._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v13.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v13._bytes_48);
  bdStructUserAccountID::bdStructUserAccountID(&v13, firstPartyUserAccountID);
  v11 = v10;
  bdUserAccountID::operator=(&this->m_firstPartyUserAccountID, v10);
  bdReferencable::operator=((bdReferencable *)&this->m_firstPartyUserAccountID.gap38[*(int *)(*(_QWORD *)&this->m_firstPartyUserAccountID.gap38[8] + 4i64) + 8], (const bdReferencable *)&v11->gap38[*(int *)(*(_QWORD *)&v11->gap38[8] + 4i64) + 8]);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v13._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v13.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v13._bytes_48);
  this->m_platform = platform;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userAccountID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userAccountID->gap38);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)firstPartyUserAccountID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)firstPartyUserAccountID->gap38);
  return this;
}

