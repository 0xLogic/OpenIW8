/*
==============
bdNATTravClientData::callOnNATAddrDiscovery
==============
*/

void __fastcall bdNATTravClientData::callOnNATAddrDiscovery(bdNATTravClientData *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  ?callOnNATAddrDiscovery@bdNATTravClientData@@QEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, remote, realAddr);
}

/*
==============
bdNATTravClientData::bdNATTravClientData
==============
*/

void __fastcall bdNATTravClientData::bdNATTravClientData(bdNATTravClientData *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bdNATTravListener *listener)
{
  ??0bdNATTravClientData@@QEAA@V?$bdReference@VbdCommonAddr@@@@0PEAVbdNATTravListener@@@Z(this, local, remote, listener);
}

/*
==============
bdNATTravClientData::callOnNATAddrDiscoveryFailed
==============
*/

void __fastcall bdNATTravClientData::callOnNATAddrDiscoveryFailed(bdNATTravClientData *this, bdReference<bdCommonAddr> remote)
{
  ?callOnNATAddrDiscoveryFailed@bdNATTravClientData@@QEAAXV?$bdReference@VbdCommonAddr@@@@@Z(this, remote);
}

/*
==============
bdNATTravClientData::bdNATTravClientData
==============
*/

void __fastcall bdNATTravClientData::bdNATTravClientData(bdNATTravClientData *this)
{
  ??0bdNATTravClientData@@QEAA@XZ(this);
}

/*
==============
bdNATTravClientData::bdNATTravClientData
==============
*/

void __fastcall bdNATTravClientData::bdNATTravClientData(bdNATTravClientData *this, const bdNATTravClientData *__that)
{
  ??0bdNATTravClientData@@QEAA@AEBV0@@Z(this, __that);
}

/*
==============
bdNATTravClientData::bdNATTravClientData
==============
*/
void bdNATTravClientData::bdNATTravClientData(bdNATTravClientData *this, const bdNATTravClientData *__that)
{
  bdCommonAddr *m_ptr; 
  bdCommonAddr *v4; 
  bdNATTravTelemetry *p_m_telemetry; 
  bdNATTravTelemetry *v6; 
  __int64 v7; 
  signed __int64 v8; 
  bdCommonAddr *v9; 
  bdCommonAddr *v10; 

  this->m_state = __that->m_state;
  m_ptr = __that->m_local.m_ptr;
  this->m_local.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v4 = __that->m_remote.m_ptr;
  this->m_remote.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  this->m_listener = __that->m_listener;
  this->m_secondaryListener = __that->m_secondaryListener;
  *(_OWORD *)this->m_tries = *(_OWORD *)__that->m_tries;
  this->m_lastSent.m_start = __that->m_lastSent.m_start;
  this->m_throttled = __that->m_throttled;
  this->m_age.m_start = __that->m_age.m_start;
  p_m_telemetry = &__that->m_telemetry;
  v6 = &this->m_telemetry;
  v7 = 32i64;
  v8 = (char *)__that - (char *)this;
  do
  {
    bdNATTravTelemetry::bdNATTravEvent::bdNATTravEvent(v6->m_attemptRecords, (const bdNATTravTelemetry::bdNATTravEvent *)((char *)v6->m_attemptRecords + v8));
    v6 = (bdNATTravTelemetry *)((char *)v6 + 320);
    --v7;
  }
  while ( v7 );
  this->m_telemetry.m_attemptRecordsCount = p_m_telemetry->m_attemptRecordsCount;
  this->m_telemetry.m_age.m_start = p_m_telemetry->m_age.m_start;
  v9 = p_m_telemetry->m_localCommonAddr.m_ptr;
  this->m_telemetry.m_localCommonAddr.m_ptr = v9;
  if ( v9 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  v10 = p_m_telemetry->m_remoteCommonAddr.m_ptr;
  this->m_telemetry.m_remoteCommonAddr.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  bdAddr::bdAddr(&this->m_telemetry.m_realAddr, &p_m_telemetry->m_realAddr);
  bdAddr::bdAddr(&this->m_telemetry.m_stunAddr, &p_m_telemetry->m_stunAddr);
  this->m_telemetry.m_result = p_m_telemetry->m_result;
  this->m_telemetry.m_triesStage1 = p_m_telemetry->m_triesStage1;
  this->m_telemetry.m_triesStage2 = p_m_telemetry->m_triesStage2;
  this->m_telemetry.m_triesStage3 = p_m_telemetry->m_triesStage3;
  this->m_telemetry.m_throttled = p_m_telemetry->m_throttled;
  this->m_telemetry.m_duration = p_m_telemetry->m_duration;
}

/*
==============
bdNATTravClientData::bdNATTravClientData
==============
*/
void bdNATTravClientData::bdNATTravClientData(bdNATTravClientData *this, bdReference<bdCommonAddr> local, bdReference<bdCommonAddr> remote, bdNATTravListener *listener)
{
  bdCommonAddr_vtbl *v7; 
  bdCommonAddr_vtbl *v8; 

  this->m_state = BD_NTCDS_STAGE_1;
  v7 = local.m_ptr->__vftable;
  this->m_local.m_ptr = (bdCommonAddr *)local.m_ptr->__vftable;
  if ( v7 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v7[1], 1u);
  v8 = remote.m_ptr->__vftable;
  this->m_remote.m_ptr = (bdCommonAddr *)remote.m_ptr->__vftable;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8[1], 1u);
  this->m_listener = listener;
  this->m_secondaryListener = NULL;
  bdStopwatch::bdStopwatch(&this->m_lastSent);
  this->m_throttled = 0;
  bdStopwatch::bdStopwatch(&this->m_age);
  bdNATTravTelemetry::bdNATTravTelemetry(&this->m_telemetry);
  *(_QWORD *)this->m_tries = 0i64;
  *(_QWORD *)&this->m_tries[2] = 0i64;
  if ( local.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&local.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( local.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))local.m_ptr->~bdReferencable)(local.m_ptr->__vftable, 1i64);
    local.m_ptr->__vftable = NULL;
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdNATTravClientData::bdNATTravClientData
==============
*/
void bdNATTravClientData::bdNATTravClientData(bdNATTravClientData *this)
{
  this->m_state = BD_NTCDS_INITIAL;
  this->m_local.m_ptr = NULL;
  this->m_remote.m_ptr = NULL;
  this->m_listener = NULL;
  this->m_secondaryListener = NULL;
  bdStopwatch::bdStopwatch(&this->m_lastSent);
  this->m_throttled = 0;
  bdStopwatch::bdStopwatch(&this->m_age);
  bdNATTravTelemetry::bdNATTravTelemetry(&this->m_telemetry);
  *(_QWORD *)this->m_tries = 0i64;
  *(_QWORD *)&this->m_tries[2] = 0i64;
}

/*
==============
bdNATTravClientData::callOnNATAddrDiscovery
==============
*/
void bdNATTravClientData::callOnNATAddrDiscovery(bdNATTravClientData *this, bdReference<bdCommonAddr> remote, const bdAddr *realAddr)
{
  bdNATTravListener *m_listener; 
  void (__fastcall *onNATAddrDiscovery)(bdNATTravListener *, bdReference<bdCommonAddr>, const bdAddr *); 
  bdCommonAddr_vtbl *v8; 
  bdNATTravListener *m_secondaryListener; 
  void (__fastcall *v10)(bdNATTravListener *, bdReference<bdCommonAddr>, const bdAddr *); 
  bdCommonAddr_vtbl *v11; 
  bdCommonAddr_vtbl *v12; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr_vtbl *v14; 

  m_ptr = remote.m_ptr;
  m_listener = this->m_listener;
  onNATAddrDiscovery = m_listener->onNATAddrDiscovery;
  v8 = remote.m_ptr->__vftable;
  v12 = v8;
  if ( v8 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v8[1], 1u);
  ((void (__fastcall *)(bdNATTravListener *, bdCommonAddr_vtbl **))onNATAddrDiscovery)(m_listener, &v12);
  m_secondaryListener = this->m_secondaryListener;
  if ( m_secondaryListener )
  {
    v10 = m_secondaryListener->onNATAddrDiscovery;
    v11 = remote.m_ptr->__vftable;
    v14 = v11;
    if ( v11 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v11[1], 1u);
    ((void (__fastcall *)(bdNATTravListener *, bdCommonAddr_vtbl **, const bdAddr *))v10)(m_secondaryListener, &v14, realAddr);
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

/*
==============
bdNATTravClientData::callOnNATAddrDiscoveryFailed
==============
*/
void bdNATTravClientData::callOnNATAddrDiscoveryFailed(bdNATTravClientData *this, bdReference<bdCommonAddr> remote)
{
  bdNATTravListener *m_listener; 
  void (__fastcall *onNATAddrDiscoveryFailed)(bdNATTravListener *, bdReference<bdCommonAddr>); 
  bdCommonAddr_vtbl *v6; 
  bdNATTravListener *m_secondaryListener; 
  void (__fastcall *v8)(bdNATTravListener *, bdReference<bdCommonAddr>); 
  bdCommonAddr_vtbl *v9; 
  bdCommonAddr_vtbl *v10; 
  bdCommonAddr *m_ptr; 
  bdCommonAddr_vtbl *v12; 

  m_ptr = remote.m_ptr;
  m_listener = this->m_listener;
  onNATAddrDiscoveryFailed = m_listener->onNATAddrDiscoveryFailed;
  v6 = remote.m_ptr->__vftable;
  v10 = v6;
  if ( v6 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v6[1], 1u);
  ((void (__fastcall *)(bdNATTravListener *, bdCommonAddr_vtbl **))onNATAddrDiscoveryFailed)(m_listener, &v10);
  m_secondaryListener = this->m_secondaryListener;
  if ( m_secondaryListener )
  {
    v8 = m_secondaryListener->onNATAddrDiscoveryFailed;
    v9 = remote.m_ptr->__vftable;
    v12 = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9[1], 1u);
    ((void (__fastcall *)(bdNATTravListener *, bdCommonAddr_vtbl **))v8)(m_secondaryListener, &v12);
  }
  if ( remote.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&remote.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( remote.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))remote.m_ptr->~bdReferencable)(remote.m_ptr->__vftable, 1i64);
    remote.m_ptr->__vftable = NULL;
  }
}

