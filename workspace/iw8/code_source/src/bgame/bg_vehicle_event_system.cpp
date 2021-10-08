/*
==============
BgVehicleEventSystem::BgVehicleEventSystem
==============
*/

void __fastcall BgVehicleEventSystem::BgVehicleEventSystem(BgVehicleEventSystem *this)
{
  ??0BgVehicleEventSystem@@QEAA@XZ(this);
}

/*
==============
BgVehicleEventSystem::ProcessDeferredEvents
==============
*/

void __fastcall BgVehicleEventSystem::ProcessDeferredEvents(BgVehicleEventSystem *this)
{
  ?ProcessDeferredEvents@BgVehicleEventSystem@@QEBAXXZ(this);
}

/*
==============
BgVehicleEventSystem::Init
==============
*/

void __fastcall BgVehicleEventSystem::Init(BgVehicleEventSystem *this)
{
  ?Init@BgVehicleEventSystem@@QEAAXXZ(this);
}

/*
==============
BgVehicleEventSystem::BgVehicleEventSystem
==============
*/
void BgVehicleEventSystem::BgVehicleEventSystem(BgVehicleEventSystem *this)
{
  this->__vftable = (BgVehicleEventSystem_vtbl *)&BgVehicleEventSystem::`vftable';
  this->m_lock = 0;
  memset_0(this->m_lastEventTimes, 0, sizeof(this->m_lastEventTimes));
}

/*
==============
BgVehicleEventSystem::Init
==============
*/
void BgVehicleEventSystem::Init(BgVehicleEventSystem *this)
{
  this->m_lock = 0;
  memset_0(this->m_lastEventTimes, 0, sizeof(this->m_lastEventTimes));
}

/*
==============
BgVehicleEventSystem::ProcessDeferredEvents
==============
*/
void BgVehicleEventSystem::ProcessDeferredEvents(BgVehicleEventSystem *this)
{
  volatile int *p_m_lock; 
  __int64 v3; 

  p_m_lock = &this->m_lock;
  v3 = ((_BYTE)this + 8) & 3;
  if ( (((_BYTE)this + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_lock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_lock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_event_system.cpp", 27, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_lock, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_lock, 1, 0 ) == 0") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_event_system.cpp", 29, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", "BgVehicleEventSystem::ProcessEventsMainThread() must be called from main thread only") )
    __debugbreak();
  this->ProcessDeferredEventsInternal(this);
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_m_lock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_m_lock, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_event_system.cpp", 34, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &m_lock, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &m_lock, 0, 1 ) == 1") )
    __debugbreak();
}

