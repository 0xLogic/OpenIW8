/*
==============
BgPlayerEvents::BgPlayerEvents
==============
*/

void __fastcall BgPlayerEvents::BgPlayerEvents(BgPlayerEvents *this)
{
  ??0BgPlayerEvents@@QEAA@XZ(this);
}

/*
==============
BgPlayerEvents::ClearEvents
==============
*/

void __fastcall BgPlayerEvents::ClearEvents(BgPlayerEvents *this, BgWeaponMap *const weaponMap)
{
  ?ClearEvents@BgPlayerEvents@@QEAAXQEAVBgWeaponMap@@@Z(this, weaponMap);
}

/*
==============
BgPlayerEvents::~BgPlayerEvents
==============
*/

void __fastcall BgPlayerEvents::~BgPlayerEvents(BgPlayerEvents *this)
{
  ??1BgPlayerEvents@@UEAA@XZ(this);
}

/*
==============
BgPlayerEvents::AddEvent
==============
*/

bool __fastcall BgPlayerEvents::AddEvent(BgPlayerEvents *this, BgWeaponMap *const weaponMap, const entity_event_t eventType, const unsigned int eventParm, const int eventTime)
{
  return ?AddEvent@BgPlayerEvents@@QEAA_NQEAVBgWeaponMap@@W4entity_event_t@@IH@Z(this, weaponMap, eventType, eventParm, eventTime);
}

/*
==============
BgPlayerEvents::BgPlayerEvents
==============
*/
void BgPlayerEvents::BgPlayerEvents(BgPlayerEvents *this)
{
  this->__vftable = (BgPlayerEvents_vtbl *)&BgPlayerEvents::`vftable';
  *(_QWORD *)&this->m_eventCount = 0i64;
  this->m_eventsEnabled = 0;
  memset_0(this->m_events, 0, sizeof(this->m_events));
}

/*
==============
BgPlayerEvents::~BgPlayerEvents
==============
*/
void BgPlayerEvents::~BgPlayerEvents(BgPlayerEvents *this)
{
  this->__vftable = (BgPlayerEvents_vtbl *)&BgPlayerEvents::`vftable';
}

/*
==============
BgPlayerEvents::AddEvent
==============
*/
char BgPlayerEvents::AddEvent(BgPlayerEvents *this, BgWeaponMap *const weaponMap, const entity_event_t eventType, const unsigned int eventParm, const int eventTime)
{
  __int64 m_eventCount; 
  __int64 v11; 
  unsigned int v12; 
  BgPlayerEvents::PlayerEvent *v13; 
  __int64 v14; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_events.cpp", 21, ASSERT_TYPE_ASSERT, "( weaponMap != nullptr )", (const char *)&queryFormat, "weaponMap != nullptr") )
    __debugbreak();
  if ( !this->m_eventsEnabled )
    return 1;
  m_eventCount = this->m_eventCount;
  if ( (unsigned int)m_eventCount >= 0x10 )
    return 0;
  v11 = m_eventCount;
  v12 = this->m_events[m_eventCount].eventItem.eventParm;
  v13 = &this->m_events[v11];
  if ( v12 )
  {
    LODWORD(v14) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_events.cpp", 31, ASSERT_TYPE_ASSERT, "( ( playerEvent->eventItem.eventParm == 0 ) )", "( playerEvent->eventItem.eventParm ) = %i", v14) )
      __debugbreak();
  }
  v13->eventTime = eventTime;
  v13->eventItem.eventType = eventType;
  BG_SetEventParameter(weaponMap, &v13->eventItem, eventType, eventParm);
  ++this->m_eventCount;
  return 1;
}

/*
==============
BgPlayerEvents::ClearEvents
==============
*/
void BgPlayerEvents::ClearEvents(BgPlayerEvents *this, BgWeaponMap *const weaponMap)
{
  unsigned int i; 
  BgPlayerEvents::PlayerEvent *v5; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_player_events.cpp", 48, ASSERT_TYPE_ASSERT, "( weaponMap != nullptr )", (const char *)&queryFormat, "weaponMap != nullptr") )
    __debugbreak();
  for ( i = 0; i < this->m_eventCount; v5->eventTime = 0 )
  {
    v5 = &this->m_events[i];
    BG_ClearEventParameter(weaponMap, &v5->eventItem);
    ++i;
    v5->eventItem.eventType = 0;
  }
  *(_QWORD *)&this->m_eventCount = 0i64;
}

