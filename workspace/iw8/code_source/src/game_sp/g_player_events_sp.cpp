/*
==============
GPlayerEventsSP::HandleEvents
==============
*/

void __fastcall GPlayerEventsSP::HandleEvents(GPlayerEventsSP *this, BgWeaponMap *const weaponMap, gentity_s *const ent)
{
  ?HandleEvents@GPlayerEventsSP@@QEAAXQEAVBgWeaponMap@@QEAUgentity_s@@@Z(this, weaponMap, ent);
}

/*
==============
GPlayerEventsSP::~GPlayerEventsSP
==============
*/

void __fastcall GPlayerEventsSP::~GPlayerEventsSP(GPlayerEventsSP *this)
{
  ??1GPlayerEventsSP@@UEAA@XZ(this);
}

/*
==============
GPlayerEventsSP::GPlayerEventsSP
==============
*/

void __fastcall GPlayerEventsSP::GPlayerEventsSP(GPlayerEventsSP *this)
{
  ??0GPlayerEventsSP@@QEAA@XZ(this);
}

/*
==============
GPlayerEventsSP::GPlayerEventsSP
==============
*/
void GPlayerEventsSP::GPlayerEventsSP(GPlayerEventsSP *this)
{
  BgPlayerEvents::BgPlayerEvents(this);
  this->__vftable = (GPlayerEventsSP_vtbl *)&GPlayerEventsSP::`vftable';
}

/*
==============
GPlayerEventsSP::~GPlayerEventsSP
==============
*/
void GPlayerEventsSP::~GPlayerEventsSP(GPlayerEventsSP *this)
{
  this->__vftable = (GPlayerEventsSP_vtbl *)&GPlayerEventsSP::`vftable';
  BgPlayerEvents::~BgPlayerEvents(this);
}

/*
==============
GPlayerEventsSP::HandleEvents
==============
*/
void GPlayerEventsSP::HandleEvents(GPlayerEventsSP *this, BgWeaponMap *const weaponMap, gentity_s *const ent)
{
  GCombat *v6; 
  GBullet *v7; 
  __int64 v8; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_player_events_sp.cpp", 22, ASSERT_TYPE_ASSERT, "( weaponMap != nullptr )", (const char *)&queryFormat, "weaponMap != nullptr") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_player_events_sp.cpp", 23, ASSERT_TYPE_ASSERT, "( ent != nullptr )", (const char *)&queryFormat, "ent != nullptr") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_player_events_sp.cpp", 24, ASSERT_TYPE_ASSERT, "( ent->client != nullptr )", (const char *)&queryFormat, "ent->client != nullptr") )
    __debugbreak();
  if ( this->m_eventsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_player_events_sp.cpp", 25, ASSERT_TYPE_ASSERT, "( !m_eventsEnabled )", (const char *)&queryFormat, "!m_eventsEnabled") )
    __debugbreak();
  if ( this->m_eventSequence > this->m_eventCount )
  {
    LODWORD(v8) = this->m_eventSequence;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_player_events_sp.cpp", 26, ASSERT_TYPE_ASSERT, "( m_eventSequence ) <= ( m_eventCount )", "m_eventSequence not in [0, m_eventCount]\n\t%u not in [0, %u]", v8, this->m_eventCount) )
      __debugbreak();
  }
  if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
    __debugbreak();
  v6 = GCombat::ms_gCombatSystem;
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  v7 = GBullet::ms_gBulletSystem;
  GCombat::SetQueuedDamageEnabled(v6, 1);
  G_Bullet_SetDeferNotifyActors(1);
  for ( ; this->m_eventSequence < this->m_eventCount; ++this->m_eventSequence )
    G_ActiveSP_HandleClientEvent(ent, &ent->client->ps, this->m_events[this->m_eventSequence].eventItem.eventType, this->m_events[this->m_eventSequence].eventItem.eventParm, this->m_events[this->m_eventSequence].eventTime);
  G_Bullet_SetDeferNotifyActors(0);
  GCombat::SetQueuedDamageEnabled(v6, 0);
  GCombat::ProcessQueuedDamages(v6);
  G_Bullet_ProcessDeferredNotifyActors();
  GBullet::HandleDeferredImpactEffects(v7);
  BgPlayerEvents::ClearEvents(this, weaponMap);
}

