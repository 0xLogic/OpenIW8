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
  bdNATTravTelemetry::bdNATTravEvent *m_attemptRecords; 
  __int64 v8; 
  char *v9; 
  bdCommonAddr *v10; 
  bdCommonAddr *v11; 

  _R14 = this;
  this->m_state = __that->m_state;
  m_ptr = __that->m_local.m_ptr;
  _R14->m_local.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v4 = __that->m_remote.m_ptr;
  _R14->m_remote.m_ptr = v4;
  if ( v4 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 1u);
  _R14->m_listener = __that->m_listener;
  _R14->m_secondaryListener = __that->m_secondaryListener;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+28h]
    vmovups xmmword ptr [r14+28h], xmm0
  }
  _R14->m_lastSent.m_start = __that->m_lastSent.m_start;
  _R14->m_throttled = __that->m_throttled;
  _R14->m_age.m_start = __that->m_age.m_start;
  p_m_telemetry = &__that->m_telemetry;
  m_attemptRecords = _R14->m_telemetry.m_attemptRecords;
  v8 = 32i64;
  v9 = (char *)((char *)__that - (char *)_R14);
  do
  {
    bdNATTravTelemetry::bdNATTravEvent::bdNATTravEvent(m_attemptRecords, (const bdNATTravTelemetry::bdNATTravEvent *)((char *)m_attemptRecords + (_QWORD)v9));
    ++m_attemptRecords;
    --v8;
  }
  while ( v8 );
  _R14->m_telemetry.m_attemptRecordsCount = p_m_telemetry->m_attemptRecordsCount;
  _R14->m_telemetry.m_age.m_start = p_m_telemetry->m_age.m_start;
  v10 = p_m_telemetry->m_localCommonAddr.m_ptr;
  _R14->m_telemetry.m_localCommonAddr.m_ptr = v10;
  if ( v10 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  v11 = p_m_telemetry->m_remoteCommonAddr.m_ptr;
  _R14->m_telemetry.m_remoteCommonAddr.m_ptr = v11;
  if ( v11 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 1u);
  bdAddr::bdAddr(&_R14->m_telemetry.m_realAddr, &p_m_telemetry->m_realAddr);
  bdAddr::bdAddr(&_R14->m_telemetry.m_stunAddr, &p_m_telemetry->m_stunAddr);
  _R14->m_telemetry.m_result = p_m_telemetry->m_result;
  _R14->m_telemetry.m_triesStage1 = p_m_telemetry->m_triesStage1;
  _R14->m_telemetry.m_triesStage2 = p_m_telemetry->m_triesStage2;
  _R14->m_telemetry.m_triesStage3 = p_m_telemetry->m_triesStage3;
  _R14->m_telemetry.m_throttled = p_m_telemetry->m_throttled;
  _R14->m_telemetry.m_duration = p_m_telemetry->m_duration;
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

