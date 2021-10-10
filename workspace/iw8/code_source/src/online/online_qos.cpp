/*
==============
Qos::LaunchProbeAgainst
==============
*/

bool __fastcall Qos::LaunchProbeAgainst(Qos *this, tQosEntry *entry)
{
  return ?LaunchProbeAgainst@Qos@@AEAA_NAEAVtQosEntry@@@Z(this, entry);
}

/*
==============
Qos::Probe
==============
*/

bool __fastcall Qos::Probe(Qos *this, const unsigned __int64 transactionId, const bdArray<bdQoSRemoteAddr> *qosHosts, const unsigned __int16 numProbes, void (__fastcall *const callback)(const tQosEntry *, void *), void *callbackData)
{
  return ?Probe@Qos@@QEAA_N_KPEBV?$bdArray@VbdQoSRemoteAddr@@@@GQ6AXAEBVtQosEntry@@PEAX@Z3@Z(this, transactionId, qosHosts, numProbes, callback, callbackData);
}

/*
==============
QosPayload::OutputCurrentState
==============
*/

void __fastcall QosPayload::OutputCurrentState(QosPayload *this, const int controllerIndex)
{
  ?OutputCurrentState@QosPayload@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
QosPayload::EnableJoinInProgressForScore
==============
*/

void __fastcall QosPayload::EnableJoinInProgressForScore(QosPayload *this)
{
  ?EnableJoinInProgressForScore@QosPayload@@QEAAXXZ(this);
}

/*
==============
QosPayload::QosPayload
==============
*/

void __fastcall QosPayload::QosPayload(QosPayload *this)
{
  ??0QosPayload@@AEAA@XZ(this);
}

/*
==============
QosPayload::DisableJoinInProgressForTime
==============
*/

void __fastcall QosPayload::DisableJoinInProgressForTime(QosPayload *this)
{
  ?DisableJoinInProgressForTime@QosPayload@@QEAAXXZ(this);
}

/*
==============
QosPayload::ControllerFrame
==============
*/

void __fastcall QosPayload::ControllerFrame(QosPayload *this, const int controllerIndex)
{
  ?ControllerFrame@QosPayload@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
QosPayload::Frame
==============
*/

void __fastcall QosPayload::Frame(QosPayload *this)
{
  ?Frame@QosPayload@@UEAAXXZ(this);
}

/*
==============
QosPayload::StartQos
==============
*/

bool __fastcall QosPayload::StartQos(QosPayload *this)
{
  return ?StartQos@QosPayload@@QEAA_NXZ(this);
}

/*
==============
QosPayload::Uninit
==============
*/

void __fastcall QosPayload::Uninit(QosPayload *this)
{
  ?Uninit@QosPayload@@UEAAXXZ(this);
}

/*
==============
QosPayload::Stop
==============
*/

void __fastcall QosPayload::Stop(QosPayload *this)
{
  ?Stop@QosPayload@@QEAAXXZ(this);
}

/*
==============
QosPayload::Update
==============
*/

void __fastcall QosPayload::Update(QosPayload *this)
{
  ?Update@QosPayload@@AEAAXXZ(this);
}

/*
==============
QosPayload::OnUnregistered
==============
*/

void __fastcall QosPayload::OnUnregistered(QosPayload *this)
{
  ?OnUnregistered@QosPayload@@UEAAXXZ(this);
}

/*
==============
QosPayload::DisableJoinInProgressForScore
==============
*/

void __fastcall QosPayload::DisableJoinInProgressForScore(QosPayload *this)
{
  ?DisableJoinInProgressForScore@QosPayload@@QEAAXXZ(this);
}

/*
==============
QosPayload::RegisterLuaFunctions
==============
*/

void __fastcall QosPayload::RegisterLuaFunctions(QosPayload *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@QosPayload@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
tQosEntry::processQoSProbe
==============
*/

void __fastcall tQosEntry::processQoSProbe(tQosEntry *this, const bdQoSProbeInfo *info, const bool success)
{
  ?processQoSProbe@tQosEntry@@AEAAXAEBVbdQoSProbeInfo@@_N@Z(this, info, success);
}

/*
==============
QosPayload::IsValidMatch
==============
*/

bool __fastcall QosPayload::IsValidMatch(QosPayload *this, const PayloadData *payloadData, const unsigned int memberCount)
{
  return ?IsValidMatch@QosPayload@@QEAA_NAEBUPayloadData@@I@Z(this, payloadData, memberCount);
}

/*
==============
Qos::CancelProbes
==============
*/

void __fastcall Qos::CancelProbes(Qos *this)
{
  ?CancelProbes@Qos@@QEAAXXZ(this);
}

/*
==============
Qos::Qos
==============
*/

void __fastcall Qos::Qos(Qos *this)
{
  ??0Qos@@QEAA@XZ(this);
}

/*
==============
QosPayload::OnSignedIn
==============
*/

void __fastcall QosPayload::OnSignedIn(QosPayload *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@QosPayload@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Qos::IsInProgress
==============
*/

bool __fastcall Qos::IsInProgress(Qos *this)
{
  return ?IsInProgress@Qos@@QEAA_NXZ(this);
}

/*
==============
QosPayload::OnDisconnect
==============
*/

void __fastcall QosPayload::OnDisconnect(QosPayload *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@QosPayload@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
QosPayload::EnableJoinInProgressForTime
==============
*/

void __fastcall QosPayload::EnableJoinInProgressForTime(QosPayload *this)
{
  ?EnableJoinInProgressForTime@QosPayload@@QEAAXXZ(this);
}

/*
==============
tQosEntry::AreProbesComplete
==============
*/

bool __fastcall tQosEntry::AreProbesComplete(tQosEntry *this)
{
  return ?AreProbesComplete@tQosEntry@@QEAA_NXZ(this);
}

/*
==============
QosPayload::Init
==============
*/

bool __fastcall QosPayload::Init(QosPayload *this)
{
  return ?Init@QosPayload@@UEAA_NXZ(this);
}

/*
==============
Qos::Pump
==============
*/

void __fastcall Qos::Pump(Qos *this)
{
  ?Pump@Qos@@QEAAXXZ(this);
}

/*
==============
QosPayload::ResetJoinInProgress
==============
*/

void __fastcall QosPayload::ResetJoinInProgress(QosPayload *this)
{
  ?ResetJoinInProgress@QosPayload@@QEAAXXZ(this);
}

/*
==============
tQosEntry::onQoSProbeFail
==============
*/

void __fastcall tQosEntry::onQoSProbeFail(tQosEntry *this, bdReference<bdCommonAddr> addr, const bdAddr *realAddr)
{
  ?onQoSProbeFail@tQosEntry@@UEAAXV?$bdReference@VbdCommonAddr@@@@AEBVbdAddr@@@Z(this, addr, realAddr);
}

/*
==============
Qos::ProbeComplete
==============
*/

void __fastcall Qos::ProbeComplete(Qos *this, tQosEntry *entry)
{
  ?ProbeComplete@Qos@@AEAAXAEAVtQosEntry@@@Z(this, entry);
}

/*
==============
tQosEntry::onQoSProbeFail
==============
*/

void __fastcall tQosEntry::onQoSProbeFail(tQosEntry *this, const bdQoSProbeInfo *info)
{
  ?onQoSProbeFail@tQosEntry@@UEAAXAEBVbdQoSProbeInfo@@@Z(this, info);
}

/*
==============
QosPayload::OnRegistered
==============
*/

void __fastcall QosPayload::OnRegistered(QosPayload *this)
{
  ?OnRegistered@QosPayload@@UEAAXXZ(this);
}

/*
==============
QosPayload::OnSignedOut
==============
*/

void __fastcall QosPayload::OnSignedOut(QosPayload *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@QosPayload@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
tQosEntry::onQoSProbeSuccess
==============
*/

void __fastcall tQosEntry::onQoSProbeSuccess(tQosEntry *this, const bdQoSProbeInfo *info)
{
  ?onQoSProbeSuccess@tQosEntry@@UEAAXAEBVbdQoSProbeInfo@@@Z(this, info);
}

/*
==============
Qos::Qos
==============
*/
void Qos::Qos(Qos *this)
{
  ntl::internal::pool_allocator_freelist<35296> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<35296> *v3; 

  p_m_freelist = &this->m_qosEntries.m_freelist;
  v3 = &this->m_qosEntries.m_freelist;
  do
  {
    v3 -= 4412;
    v3->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v3;
  }
  while ( v3 > (ntl::internal::pool_allocator_freelist<35296> *)this );
  this->m_qosEntries.m_freelist.m_head.mp_next = &v3->m_head;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_qosEntries.m_listHead.m_sentinel.mp_prev = &this->m_qosEntries.m_listHead.m_sentinel;
  this->m_qosEntries.m_listHead.m_sentinel.mp_next = &this->m_qosEntries.m_listHead.m_sentinel;
}

/*
==============
QosPayload::QosPayload
==============
*/
void QosPayload::QosPayload(QosPayload *this)
{
  XSESSION_INFO *p_m_session; 

  this->m_nextSystem = NULL;
  this->m_initialized = 0;
  this->__vftable = (QosPayload_vtbl *)&QosPayload::`vftable';
  *(_WORD *)&this->m_dataEnabled = 0;
  this->m_disabledJIPDueToScore = 0;
  p_m_session = &this->m_session;
  memset_0(&this->m_session, 0, sizeof(this->m_session));
  bdSecurityID::bdSecurityID(&p_m_session->m_security.m_id);
  bdSecurityKey::bdSecurityKey(&p_m_session->m_security.m_key);
}

/*
==============
tQosEntry::AreProbesComplete
==============
*/
char tQosEntry::AreProbesComplete(tQosEntry *this)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<QosDestinationEndpoint> > *p_m_listHead; 

  mp_next = this->m_addressesToQos.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_addressesToQos.m_listHead;
  if ( mp_next == (ntl::internal::list_node_base *)&this->m_addressesToQos.m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( (unsigned int)(LODWORD(mp_next[1].mp_prev) - 2) > 1 )
      break;
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 1;
  }
  return 0;
}

/*
==============
Qos::CancelProbes
==============
*/
void Qos::CancelProbes(Qos *this)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<tQosEntry> > *p_m_listHead; 
  bdQoSProbe *QoSProber; 
  ntl::internal::list_node_base *p_m_sentinel; 
  ntl::internal::list_head_base<ntl::internal::list_node<tQosEntry> > *v6; 

  mp_next = this->m_qosEntries.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_qosEntries.m_listHead;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_qosEntries.m_listHead )
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( (unsigned int)(LODWORD(mp_next[1].mp_next) - 1) <= 1 )
        break;
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
        return;
    }
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
    QoSProber = dwGetQoSProber();
    bdQoSProbe::cancelProbes(QoSProber);
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
    p_m_sentinel = this->m_qosEntries.m_listHead.m_sentinel.mp_next;
    if ( p_m_sentinel != (ntl::internal::list_node_base *)p_m_listHead )
    {
      do
      {
        v6 = (ntl::internal::list_head_base<ntl::internal::list_node<tQosEntry> > *)p_m_sentinel->mp_next;
        ntl::fixed_list<QosDestinationEndpoint,100,0>::~fixed_list<QosDestinationEndpoint,100,0>((ntl::fixed_list<QosDestinationEndpoint,100,0> *)&p_m_sentinel[2]);
        bdQoSProbeListener::~bdQoSProbeListener((bdQoSProbeListener *)&p_m_sentinel[1]);
        p_m_sentinel->mp_prev = (ntl::internal::list_node_base *)this->m_qosEntries.m_freelist.m_head.mp_next;
        this->m_qosEntries.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_sentinel;
        p_m_sentinel = &v6->m_sentinel;
      }
      while ( v6 != p_m_listHead );
    }
    p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
    p_m_listHead->m_sentinel.mp_next = &p_m_listHead->m_sentinel;
  }
}

/*
==============
QosPayload::ControllerFrame
==============
*/
void QosPayload::ControllerFrame(QosPayload *this, const int controllerIndex)
{
  ;
}

/*
==============
QosPayload::DisableJoinInProgressForScore
==============
*/
void QosPayload::DisableJoinInProgressForScore(QosPayload *this)
{
  this->m_disabledJIPDueToScore = 1;
}

/*
==============
QosPayload::DisableJoinInProgressForTime
==============
*/
void QosPayload::DisableJoinInProgressForTime(QosPayload *this)
{
  this->m_disabledJIPDueToTime = 1;
}

/*
==============
QosPayload::EnableJoinInProgressForScore
==============
*/
void QosPayload::EnableJoinInProgressForScore(QosPayload *this)
{
  this->m_disabledJIPDueToScore = 0;
}

/*
==============
QosPayload::EnableJoinInProgressForTime
==============
*/
void QosPayload::EnableJoinInProgressForTime(QosPayload *this)
{
  this->m_disabledJIPDueToTime = 0;
}

/*
==============
QosPayload::Frame
==============
*/
void QosPayload::Frame(QosPayload *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; 
  const char *v5; 
  bool m_disabledJIPDueToScore; 
  char v8; 
  const char *v9; 
  bool m_disabledJIPDueToTime; 
  char v11; 

  v4 = *((_BYTE *)&this->m_payload + 1);
  v5 = "false";
  m_disabledJIPDueToScore = this->m_disabledJIPDueToScore;
  LOBYTE(a4) = 0;
  if ( m_disabledJIPDueToScore != ((v4 & 2) != 0) )
  {
    v8 = v4 ^ (v4 ^ (2 * m_disabledJIPDueToScore)) & 2;
    v9 = "false";
    *((_BYTE *)&this->m_payload + 1) = v8;
    if ( (v8 & 2) != 0 )
      v9 = "true";
    Com_Printf(25, "QoS Payload - Changing score percentage to %s\n", v9, a4);
    v4 = *((_BYTE *)&this->m_payload + 1);
    LOBYTE(a4) = 1;
  }
  m_disabledJIPDueToTime = this->m_disabledJIPDueToTime;
  if ( m_disabledJIPDueToTime == (v4 & 1) )
  {
    if ( !(_BYTE)a4 )
      return;
  }
  else
  {
    v11 = v4 ^ (v4 ^ m_disabledJIPDueToTime) & 1;
    *((_BYTE *)&this->m_payload + 1) = v11;
    if ( (v11 & 1) != 0 )
      v5 = "true";
    Com_Printf(25, "QoS Payload - Changing time percentage to %s\n", v5, a4);
  }
  QosPayload::Update(this);
}

/*
==============
QosPayload::Init
==============
*/
bool QosPayload::Init(QosPayload *this)
{
  bool result; 
  bdQoSProbe *QoSProber; 
  unsigned int Int_Internal_DebugName; 
  bdQoSProbe *v5; 
  const bdSecurityID *SecurityId; 
  bool v7; 

  result = NET_IsStarted();
  if ( result )
  {
    *(_WORD *)&this->m_dataEnabled = 0;
    this->m_disabledJIPDueToScore = 0;
    NET_CreateSession(&this->m_session);
    *(_BYTE *)&this->m_payload = -56;
    *(_WORD *)&this->m_disabledJIPDueToTime = 0;
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
    QoSProber = dwGetQoSProber();
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_qos_max_bandwidth, "online_qos_max_bandwidth");
    bdQoSProbe::setMaxBandwidth(QoSProber, Int_Internal_DebugName);
    v5 = dwGetQoSProber();
    SecurityId = XSESSION_INFO::GetSecurityId(&this->m_session);
    v7 = bdQoSProbe::listen(v5, SecurityId, (unsigned __int8 *)&this->m_payload, 2u);
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
    if ( v7 )
      this->m_dataEnabled = 1;
    *((_BYTE *)&this->m_payload + 1) &= 0xF8u;
    QosPayload::Update(this);
    if ( v7 )
      this->m_initialized = 1;
    return v7;
  }
  return result;
}

/*
==============
Qos::IsInProgress
==============
*/
char Qos::IsInProgress(Qos *this)
{
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<tQosEntry> > *p_m_listHead; 

  mp_next = this->m_qosEntries.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_qosEntries.m_listHead;
  if ( mp_next == (ntl::internal::list_node_base *)&this->m_qosEntries.m_listHead )
    return 0;
  while ( 1 )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( (unsigned int)(LODWORD(mp_next[1].mp_next) - 1) <= 1 )
      break;
    mp_next = mp_next->mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      return 0;
  }
  return 1;
}

/*
==============
QosPayload::IsValidMatch
==============
*/
char QosPayload::IsValidMatch(QosPayload *this, const PayloadData *payloadData, __int64 memberCount)
{
  __int64 v3; 
  char v5; 
  char v6; 

  v3 = *(_BYTE *)payloadData;
  v5 = 1;
  if ( (unsigned int)memberCount > (unsigned int)v3 )
  {
    Com_Printf(25, "QosPayload - Ignoring party qos response because there are not enough slots, need(%i), available(%i)\n", memberCount, v3);
    v5 = 0;
  }
  v6 = *((_BYTE *)payloadData + 1);
  if ( (v6 & 4) != 0 )
  {
    Com_Printf(25, "QosPayload - Ignoring party qos response because the host is migrating\n");
    v6 = *((_BYTE *)payloadData + 1);
    v5 = 0;
  }
  if ( (v6 & 2) != 0 )
  {
    Com_Printf(25, "QosPayload - Ignoring party qos response because the match about to end (score)\n");
    v6 = *((_BYTE *)payloadData + 1);
    v5 = 0;
  }
  if ( (v6 & 1) == 0 )
    return v5;
  Com_Printf(25, "QosPayload - Ignoring party qos response because the match about to end (time)\n");
  return 0;
}

/*
==============
Qos::LaunchProbeAgainst
==============
*/
__int64 Qos::LaunchProbeAgainst(Qos *this, tQosEntry *entry)
{
  unsigned __int8 v3; 
  unsigned int v4; 
  ntl::internal::list_node_base *i; 
  bdQoSProbe *QoSProber; 
  bool v7; 
  bdRandom v9; 
  __int64 v10; 
  bdSecurityID v11; 
  bdSecurityKey v12; 

  v10 = -2i64;
  v3 = 0;
  v4 = Sys_MillisecondsRaw();
  bdRandom::bdRandom(&v9, v4);
  bdSecurityID::bdSecurityID(&v11);
  bdSecurityKey::bdSecurityKey(&v12);
  for ( i = entry->m_addressesToQos.m_listHead.m_sentinel.mp_next; i != (ntl::internal::list_node_base *)&entry->m_addressesToQos.m_listHead; i = i->mp_next )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
    QoSProber = dwGetQoSProber();
    v7 = bdQoSProbe::probe(QoSProber, (bdQoSRemoteAddr *)&i[1].mp_next, entry, HIDWORD(i[21].mp_next));
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
    if ( v7 )
    {
      LODWORD(i[1].mp_prev) = 1;
      HIDWORD(i[21].mp_prev) = Sys_Milliseconds();
      entry->m_startTime = Sys_Milliseconds();
      v3 = 1;
    }
    else
    {
      LODWORD(i[1].mp_prev) = 3;
      Com_Printf(25, "Qos::LaunchProbeAgainst - Failed to start QoS probe.\n");
    }
  }
  bdSecurityKey::~bdSecurityKey(&v12);
  bdSecurityID::~bdSecurityID(&v11);
  bdRandom::~bdRandom(&v9);
  return v3;
}

/*
==============
QosPayload::OnDisconnect
==============
*/
void QosPayload::OnDisconnect(QosPayload *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
QosPayload::OnRegistered
==============
*/
void QosPayload::OnRegistered(QosPayload *this)
{
  ;
}

/*
==============
QosPayload::OnSignedIn
==============
*/
void QosPayload::OnSignedIn(QosPayload *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
QosPayload::OnSignedOut
==============
*/
void QosPayload::OnSignedOut(QosPayload *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
QosPayload::OnUnregistered
==============
*/
void QosPayload::OnUnregistered(QosPayload *this)
{
  ;
}

/*
==============
QosPayload::OutputCurrentState
==============
*/
void QosPayload::OutputCurrentState(QosPayload *this, const int controllerIndex)
{
  ;
}

/*
==============
Qos::Probe
==============
*/
char Qos::Probe(Qos *this, const unsigned __int64 transactionId, const bdArray<bdQoSRemoteAddr> *qosHosts, const unsigned __int16 numProbes, void (*const callback)(const tQosEntry *, void *), void *callbackData)
{
  Qos *v9; 
  ntl::internal::pool_allocator_freelist<352> *p_m_freelist; 
  char *v11; 
  OnlineTimeSeriesLog *v12; 
  unsigned int v13; 
  bdQoSRemoteAddr *v14; 
  ntl::internal::list_node<QosDestinationEndpoint> *mp_next; 
  ntl::internal::list_node<tQosEntry> **v16; 
  ntl::internal::list_node<tQosEntry> *v17; 
  bdQoSProbe *QoSProber; 
  unsigned int Int_Internal_DebugName; 
  tQosEntry v22; 
  QosDestinationEndpoint __that; 

  v9 = this;
  bdQoSProbeListener::bdQoSProbeListener(&v22);
  v22.__vftable = (tQosEntry_vtbl *)&tQosEntry::`vftable';
  v22.m_state = eIDLE;
  p_m_freelist = &v22.m_addressesToQos.m_freelist;
  v11 = &v22.m_addressesToQos.m_data.m_buffer[34848];
  do
  {
    *(_QWORD *)v11 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<352> *)v11;
    v11 -= 352;
  }
  while ( v11 + 352 > v22.m_addressesToQos.m_data.m_buffer );
  v22.m_addressesToQos.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v22.m_addressesToQos.m_listHead.m_sentinel.mp_prev = &v22.m_addressesToQos.m_listHead.m_sentinel;
  v22.m_addressesToQos.m_listHead.m_sentinel.mp_next = &v22.m_addressesToQos.m_listHead.m_sentinel;
  *(_QWORD *)&v22.m_countSuccess = 0i64;
  v22.m_state = eNEW;
  v22.m_DWQosTransactionId = transactionId;
  v22.m_callbackData = callbackData;
  v22.m_callback = callback;
  __that.m_addr.m_addr.m_ptr = NULL;
  bdSecurityID::bdSecurityID(&__that.m_addr.m_id);
  bdSecurityKey::bdSecurityKey(&__that.m_addr.m_key);
  bdQoSProbeInfo::bdQoSProbeInfo(&__that.m_qosResponse);
  v12 = OnlineTimeSeriesLog::Get();
  OnlineTimeSeriesLog::WriteEventCounter(v12, "qosing.endpoints.initiate.count", qosHosts->m_size);
  v13 = 0;
  if ( qosHosts->m_size )
  {
    do
    {
      v14 = &qosHosts->m_data[v13];
      bdReference<bdCommonAddr>::operator=(&__that.m_addr.m_addr, &v14->m_addr);
      __that.m_addr.m_id = v14->m_id;
      __that.m_addr.m_key = v14->m_key;
      __that.m_state = eIDLE;
      __that.m_numQosProbes = numProbes;
      if ( !v22.m_addressesToQos.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v22.m_addressesToQos.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<352> *)v22.m_addressesToQos.m_freelist.m_head.mp_next == &v22.m_addressesToQos.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x160ui64, 0x64ui64) )
        __debugbreak();
      mp_next = (ntl::internal::list_node<QosDestinationEndpoint> *)v22.m_addressesToQos.m_freelist.m_head.mp_next;
      v22.m_addressesToQos.m_freelist.m_head.mp_next = v22.m_addressesToQos.m_freelist.m_head.mp_next->mp_next;
      mp_next->mp_prev = NULL;
      mp_next->mp_next = NULL;
      QosDestinationEndpoint::QosDestinationEndpoint(&mp_next->m_data, &__that);
      ntl::internal::list_head_base<ntl::internal::list_node<QosDestinationEndpoint>>::insert_before(&v22.m_addressesToQos.m_listHead, (ntl::internal::list_node<QosDestinationEndpoint> *)&v22.m_addressesToQos.m_listHead, mp_next);
      ++v13;
    }
    while ( v13 < qosHosts->m_size );
    v9 = this;
  }
  v16 = (ntl::internal::list_node<tQosEntry> **)&v9->m_qosEntries.m_freelist;
  if ( !v9->m_qosEntries.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( *v16 == (ntl::internal::list_node<tQosEntry> *)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x89E0ui64, 0x19ui64) )
    __debugbreak();
  v17 = *v16;
  *v16 = (ntl::internal::list_node<tQosEntry> *)(*v16)->mp_prev;
  v17->mp_prev = NULL;
  v17->mp_next = NULL;
  tQosEntry::tQosEntry(&v17->m_data, &v22);
  ntl::internal::list_head_base<ntl::internal::list_node<tQosEntry>>::insert_before(&v9->m_qosEntries.m_listHead, (ntl::internal::list_node<tQosEntry> *)&v9->m_qosEntries.m_listHead, v17);
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  QoSProber = dwGetQoSProber();
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_qos_max_bandwidth, "online_qos_max_bandwidth");
  bdQoSProbe::setMaxBandwidth(QoSProber, Int_Internal_DebugName);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  if ( __that.m_qosResponse.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&__that.m_qosResponse.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( __that.m_qosResponse.m_addr.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))__that.m_qosResponse.m_addr.m_ptr->~bdReferencable)(__that.m_qosResponse.m_addr.m_ptr, 1i64);
    __that.m_qosResponse.m_addr.m_ptr = NULL;
  }
  bdSecurityKey::~bdSecurityKey(&__that.m_addr.m_key);
  bdSecurityID::~bdSecurityID(&__that.m_addr.m_id);
  if ( __that.m_addr.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&__that.m_addr.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( __that.m_addr.m_addr.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))__that.m_addr.m_addr.m_ptr->~bdReferencable)(__that.m_addr.m_addr.m_ptr, 1i64);
    __that.m_addr.m_addr.m_ptr = NULL;
  }
  ntl::fixed_list<QosDestinationEndpoint,100,0>::~fixed_list<QosDestinationEndpoint,100,0>(&v22.m_addressesToQos);
  bdQoSProbeListener::~bdQoSProbeListener(&v22);
  return 1;
}

/*
==============
Qos::ProbeComplete
==============
*/
void Qos::ProbeComplete(Qos *this, tQosEntry *entry)
{
  OnlineTimeSeriesLog *v3; 
  OnlineTimeSeriesLog *v4; 

  v3 = OnlineTimeSeriesLog::Get();
  OnlineTimeSeriesLog::WriteEventCounter(v3, "qosing.endpoints.success.count", entry->m_countSuccess);
  v4 = OnlineTimeSeriesLog::Get();
  OnlineTimeSeriesLog::WriteEventCounter(v4, "qosing.endpoints.failure.count", entry->m_countFailure);
  entry->m_callback(entry, entry->m_callbackData);
}

/*
==============
Qos::Pump
==============
*/
void Qos::Pump(Qos *this)
{
  Qos *v1; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<tQosEntry> > *p_m_listHead; 
  int v4; 
  char v5; 
  unsigned int v6; 
  ntl::internal::list_node_base *mp_prev; 
  bdQoSProbe *QoSProber; 
  bool v9; 
  OnlineTimeSeriesLog *v10; 
  OnlineTimeSeriesLog *v11; 
  ntl::internal::list_node<tQosEntry> *v12; 
  bdRandom v13; 
  Qos *v14; 
  __int64 v15; 
  bdSecurityID v16; 
  bdSecurityKey v17; 

  v15 = -2i64;
  v1 = this;
  v14 = this;
  mp_next = this->m_qosEntries.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_qosEntries.m_listHead;
  while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead )
  {
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    v4 = (int)mp_next[1].mp_next;
    if ( v4 == 1 )
    {
      v5 = 0;
      v6 = Sys_MillisecondsRaw();
      bdRandom::bdRandom(&v13, v6);
      bdSecurityID::bdSecurityID(&v16);
      bdSecurityKey::bdSecurityKey(&v17);
      mp_prev = mp_next[2203].mp_prev;
      if ( mp_prev != (ntl::internal::list_node_base *)&mp_next[2202].mp_next )
      {
        do
        {
          if ( !mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 97, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
          QoSProber = dwGetQoSProber();
          v9 = bdQoSProbe::probe(QoSProber, (bdQoSRemoteAddr *)&mp_prev[1].mp_next, (bdQoSProbeListener *)&mp_next[1], HIDWORD(mp_prev[21].mp_next));
          Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
          if ( v9 )
          {
            LODWORD(mp_prev[1].mp_prev) = 1;
            HIDWORD(mp_prev[21].mp_prev) = Sys_Milliseconds();
            HIDWORD(mp_next[2205].mp_prev) = Sys_Milliseconds();
            v5 = 1;
          }
          else
          {
            LODWORD(mp_prev[1].mp_prev) = 3;
            Com_Printf(25, "Qos::LaunchProbeAgainst - Failed to start QoS probe.\n");
          }
          mp_prev = mp_prev->mp_next;
        }
        while ( mp_prev != (ntl::internal::list_node_base *)&mp_next[2202].mp_next );
        v1 = v14;
        p_m_listHead = &v14->m_qosEntries.m_listHead;
      }
      bdSecurityKey::~bdSecurityKey(&v17);
      bdSecurityID::~bdSecurityID(&v16);
      bdRandom::~bdRandom(&v13);
      if ( v5 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        LODWORD(mp_next[1].mp_next) = 2;
      }
      else
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        LODWORD(mp_next[1].mp_next) = 4;
      }
    }
    else if ( v4 > 2 )
    {
      v10 = OnlineTimeSeriesLog::Get();
      OnlineTimeSeriesLog::WriteEventCounter(v10, "qosing.endpoints.success.count", (const unsigned int)mp_next[2205].mp_next);
      v11 = OnlineTimeSeriesLog::Get();
      OnlineTimeSeriesLog::WriteEventCounter(v11, "qosing.endpoints.failure.count", HIDWORD(mp_next[2205].mp_next));
      ((void (__fastcall *)(ntl::internal::list_node_base *, ntl::internal::list_node_base *))mp_next[2204].mp_prev)(&mp_next[1], mp_next[2203].mp_next);
      v12 = (ntl::internal::list_node<tQosEntry> *)mp_next;
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 439, ASSERT_TYPE_ASSERT, "( pos.mp_node )", (const char *)&queryFormat, "pos.mp_node") )
        __debugbreak();
      mp_next = mp_next->mp_next;
      ntl::internal::list_head_base<ntl::internal::list_node<tQosEntry>>::remove(p_m_listHead, v12);
      ntl::fixed_list<QosDestinationEndpoint,100,0>::~fixed_list<QosDestinationEndpoint,100,0>(&v12->m_data.m_addressesToQos);
      bdQoSProbeListener::~bdQoSProbeListener(&v12->m_data);
      v12->mp_prev = (ntl::internal::list_node_base *)v1->m_qosEntries.m_freelist.m_head.mp_next;
      v1->m_qosEntries.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v12;
      continue;
    }
    mp_next = mp_next->mp_next;
  }
}

/*
==============
QosPayload::RegisterLuaFunctions
==============
*/
void QosPayload::RegisterLuaFunctions(QosPayload *this, lua_State *luaVM)
{
  ;
}

/*
==============
QosPayload::ResetJoinInProgress
==============
*/
void QosPayload::ResetJoinInProgress(QosPayload *this)
{
  *(_WORD *)&this->m_disabledJIPDueToTime = 0;
}

/*
==============
QosPayload::StartQos
==============
*/
_BOOL8 QosPayload::StartQos(QosPayload *this)
{
  bdQoSProbe *QoSProber; 
  unsigned int Int_Internal_DebugName; 
  bdQoSProbe *v4; 
  const bdSecurityID *SecurityId; 
  bool v6; 

  *(_BYTE *)&this->m_payload = -56;
  *(_WORD *)&this->m_disabledJIPDueToTime = 0;
  Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
  QoSProber = dwGetQoSProber();
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_qos_max_bandwidth, "online_qos_max_bandwidth");
  bdQoSProbe::setMaxBandwidth(QoSProber, Int_Internal_DebugName);
  v4 = dwGetQoSProber();
  SecurityId = XSESSION_INFO::GetSecurityId(&this->m_session);
  v6 = bdQoSProbe::listen(v4, SecurityId, (unsigned __int8 *)&this->m_payload, 2u);
  Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  if ( v6 )
    this->m_dataEnabled = 1;
  *((_BYTE *)&this->m_payload + 1) &= 0xF8u;
  QosPayload::Update(this);
  return v6;
}

/*
==============
QosPayload::Stop
==============
*/
void QosPayload::Stop(QosPayload *this)
{
  bdQoSProbe *QoSProber; 

  if ( this->m_dataEnabled )
  {
    this->m_dataEnabled = 0;
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
    QoSProber = dwGetQoSProber();
    bdQoSProbe::disableListener(QoSProber);
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  }
}

/*
==============
QosPayload::Uninit
==============
*/
void QosPayload::Uninit(QosPayload *this)
{
  bdQoSProbe *QoSProber; 

  if ( this->m_dataEnabled )
  {
    this->m_dataEnabled = 0;
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
    QoSProber = dwGetQoSProber();
    bdQoSProbe::disableListener(QoSProber);
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  }
  this->m_dataEnabled = 0;
  XSESSION_INFO::Clear(&this->m_session);
}

/*
==============
QosPayload::Update
==============
*/
void QosPayload::Update(QosPayload *this)
{
  bdQoSProbe *QoSProber; 

  if ( this->m_dataEnabled && NET_IsStarted() )
  {
    Com_Printf(25, "Publishing QOS Payload: numSlots: %d, timeTooSmall: %s, scoreTooSmall: %s, isMigration: %s\n", *(_BYTE *)&this->m_payload);
    Sys_EnterCriticalSection(CRITSECT_DEMONWARE);
    QoSProber = dwGetQoSProber();
    bdQoSProbe::setData(QoSProber, (unsigned __int8 *)&this->m_payload, 2u);
    Sys_LeaveCriticalSection(CRITSECT_DEMONWARE);
  }
}

/*
==============
tQosEntry::onQoSProbeFail
==============
*/
void tQosEntry::onQoSProbeFail(tQosEntry *this, const bdQoSProbeInfo *info)
{
  tQosEntry::processQoSProbe(this, info, 0);
}

/*
==============
tQosEntry::onQoSProbeFail
==============
*/
void tQosEntry::onQoSProbeFail(tQosEntry *this, bdReference<bdCommonAddr> addr, const bdAddr *realAddr)
{
  bdCommonAddr *v6; 
  bdQoSProbeInfo info; 

  bdQoSProbeInfo::bdQoSProbeInfo(&info);
  if ( (bdQoSProbeInfo *)addr.m_ptr != &info )
  {
    if ( info.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&info.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && info.m_addr.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))info.m_addr.m_ptr->~bdReferencable)(info.m_addr.m_ptr, 1i64);
    v6 = (bdCommonAddr *)addr.m_ptr->__vftable;
    info.m_addr.m_ptr = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  }
  info.m_realAddr = *realAddr;
  tQosEntry::processQoSProbe(this, &info, 0);
  if ( info.m_addr.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&info.m_addr.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( info.m_addr.m_ptr )
      ((void (__fastcall *)(bdCommonAddr *, __int64))info.m_addr.m_ptr->~bdReferencable)(info.m_addr.m_ptr, 1i64);
    info.m_addr.m_ptr = NULL;
  }
  if ( addr.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&addr.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( addr.m_ptr->__vftable )
      (*(void (__fastcall **)(bdCommonAddr_vtbl *, __int64))addr.m_ptr->~bdReferencable)(addr.m_ptr->__vftable, 1i64);
    addr.m_ptr->__vftable = NULL;
  }
}

/*
==============
tQosEntry::onQoSProbeSuccess
==============
*/
void tQosEntry::onQoSProbeSuccess(tQosEntry *this, const bdQoSProbeInfo *info)
{
  tQosEntry::processQoSProbe(this, info, 1);
}

/*
==============
tQosEntry::processQoSProbe
==============
*/
void tQosEntry::processQoSProbe(tQosEntry *this, const bdQoSProbeInfo *info, const bool success)
{
  __int128 v3; 
  __int128 v4; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<QosDestinationEndpoint> > *p_m_listHead; 
  bool v10; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  char str[64]; 
  __int128 v15; 
  __int128 v16; 

  mp_next = this->m_addressesToQos.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_addressesToQos.m_listHead;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_addressesToQos.m_listHead )
  {
    v16 = v3;
    v15 = v4;
    do
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( mp_next[1].mp_next == (ntl::internal::list_node_base *)info->m_addr.m_ptr )
      {
        LODWORD(mp_next[21].mp_next) = Sys_Milliseconds();
        bdReference<bdCommonAddr>::operator=((bdReference<bdCommonAddr> *)&mp_next[3].mp_next, &info->m_addr);
        *(__m256i *)&mp_next[4].mp_prev = *(__m256i *)&info->m_realAddr.m_address.inUn.m_sockaddrStorage.ss_family;
        *(__m256i *)&mp_next[6].mp_prev = *((__m256i *)&info->m_realAddr.m_address.inUn.m_ipv6Sockaddr + 1);
        *(__m256i *)&mp_next[8].mp_prev = *((__m256i *)&info->m_realAddr.m_address.inUn.m_ipv6Sockaddr + 2);
        *(__m256i *)&mp_next[10].mp_prev = *((__m256i *)&info->m_realAddr.m_address.inUn.m_ipv6Sockaddr + 3);
        mp_next[12] = (ntl::internal::list_node_base)info->m_realAddr.m_relayRoute;
        mp_next[13].mp_prev = *(ntl::internal::list_node_base **)&info->m_realAddr.m_type;
        *(float *)&mp_next[13].mp_next = info->m_latency;
        mp_next[14].mp_prev = (ntl::internal::list_node_base *)info->m_data;
        LODWORD(mp_next[14].mp_next) = info->m_dataSize;
        BYTE4(mp_next[14].mp_next) = info->m_disabled;
        LODWORD(mp_next[15].mp_prev) = info->m_bandwidthDown;
        HIDWORD(mp_next[15].mp_prev) = info->m_bandwidthUp;
        *(float *)&mp_next[15].mp_next = info->m_minLatency;
        HIDWORD(mp_next[15].mp_next) = info->m_numReplies;
        *(float *)&mp_next[16].mp_prev = info->m_replies[0];
        HIDWORD(mp_next[16].mp_prev) = LODWORD(info->m_replies[1]);
        *(float *)&mp_next[16].mp_next = info->m_replies[2];
        HIDWORD(mp_next[16].mp_next) = LODWORD(info->m_replies[3]);
        *(float *)&mp_next[17].mp_prev = info->m_replies[4];
        HIDWORD(mp_next[17].mp_prev) = LODWORD(info->m_replies[5]);
        *(float *)&mp_next[17].mp_next = info->m_replies[6];
        HIDWORD(mp_next[17].mp_next) = LODWORD(info->m_replies[7]);
        *(float *)&mp_next[18].mp_prev = info->m_replies[8];
        HIDWORD(mp_next[18].mp_prev) = LODWORD(info->m_replies[9]);
        *(float *)&mp_next[18].mp_next = info->m_replies[10];
        HIDWORD(mp_next[18].mp_next) = LODWORD(info->m_replies[11]);
        *(float *)&mp_next[19].mp_prev = info->m_replies[12];
        HIDWORD(mp_next[19].mp_prev) = LODWORD(info->m_replies[13]);
        *(float *)&mp_next[19].mp_next = info->m_replies[14];
        HIDWORD(mp_next[19].mp_next) = LODWORD(info->m_replies[15]);
        LODWORD(mp_next[20].mp_prev) = info->m_numProbesReceived;
        HIDWORD(mp_next[20].mp_prev) = info->m_numProbesExpected;
        LODWORD(mp_next[20].mp_next) = info->m_numRetries;
        HIDWORD(mp_next[20].mp_next) = info->m_failureReason;
        v10 = 2147483600.0 == *(float *)&mp_next[15].mp_next;
        mp_next[15].mp_prev = NULL;
        if ( v10 )
          LODWORD(mp_next[15].mp_next) = 1065353216;
        if ( success )
        {
          ++this->m_countSuccess;
          LODWORD(mp_next[1].mp_prev) = 2;
          if ( info->m_dataSize == 2 )
            goto LABEL_14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_qos.cpp", 506, ASSERT_TYPE_ASSERT, "(info.m_dataSize == sizeof( PayloadData ))", (const char *)&queryFormat, "info.m_dataSize == sizeof( PayloadData )") )
            __debugbreak();
          if ( info->m_dataSize == 2 )
LABEL_14:
            LOWORD(mp_next[21].mp_prev) = *(_WORD *)info->m_data;
        }
        else
        {
          ++this->m_countFailure;
          LODWORD(mp_next[1].mp_prev) = 3;
        }
        bdAddr::toString(&info->m_realAddr, str, 0x40ui64);
        v11 = "failed";
        if ( success )
          v11 = "success";
        LODWORD(v12) = (int)(float)(1000.0 * info->m_latency);
        LODWORD(v13) = (int)(float)(1000.0 * info->m_minLatency);
        Com_Printf(25, "%s - received %s callback. (%s : avg=%ims : min=%ims)\n", "tQosEntry::processQoSProbe", v11, str, v12, v13);
      }
      mp_next = mp_next->mp_next;
    }
    while ( mp_next != (ntl::internal::list_node_base *)p_m_listHead );
    mp_next = this->m_addressesToQos.m_listHead.m_sentinel.mp_next;
  }
  if ( mp_next != (ntl::internal::list_node_base *)p_m_listHead )
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 103, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( (unsigned int)(LODWORD(mp_next[1].mp_prev) - 2) > 1 )
        break;
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      {
        this->m_state = eREMOTE_WAITING_FOR_MMING_TOKEN;
        return;
      }
    }
  }
}

