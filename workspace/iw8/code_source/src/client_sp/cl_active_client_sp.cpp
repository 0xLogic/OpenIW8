/*
==============
ClActiveClientSP::Pause
==============
*/

void __fastcall ClActiveClientSP::Pause(ClActiveClientSP *this)
{
  ?Pause@ClActiveClientSP@@UEBAXXZ(this);
}

/*
==============
ClActiveClientSP::SpecPrevKeyboard
==============
*/

void __fastcall ClActiveClientSP::SpecPrevKeyboard(ClActiveClientSP *this, int key)
{
  ?SpecPrevKeyboard@ClActiveClientSP@@UEBAXH@Z(this, key);
}

/*
==============
ClActiveClientSP::UpdateCommandTime
==============
*/

void __fastcall ClActiveClientSP::UpdateCommandTime(ClActiveClientSP *this, const unsigned __int64 usec)
{
  ?UpdateCommandTime@ClActiveClientSP@@UEAAX_K@Z(this, usec);
}

/*
==============
ClActiveClientSP::GetHudMsgCharHeight
==============
*/

int __fastcall ClActiveClientSP::GetHudMsgCharHeight(ClActiveClientSP *this)
{
  return ?GetHudMsgCharHeight@ClActiveClientSP@@UEBAHXZ(this);
}

/*
==============
ClActiveClientSP::IsValidRemoteInputState
==============
*/

bool __fastcall ClActiveClientSP::IsValidRemoteInputState(ClActiveClientSP *this)
{
  return ?IsValidRemoteInputState@ClActiveClientSP@@UEBA_NXZ(this);
}

/*
==============
ClActiveClientSP::ClearClient
==============
*/

void __fastcall ClActiveClientSP::ClearClient(const LocalClientNum_t localClientNum)
{
  ?ClearClient@ClActiveClientSP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClActiveClientSP::SendUserInfo
==============
*/

void __fastcall ClActiveClientSP::SendUserInfo(ClActiveClientSP *this)
{
  ?SendUserInfo@ClActiveClientSP@@UEBAXXZ(this);
}

/*
==============
ClActiveClientSP::AllocateClients
==============
*/

void __fastcall ClActiveClientSP::AllocateClients(HunkUser *hunkUser, const int maxLocalClients)
{
  ?AllocateClients@ClActiveClientSP@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
ClActiveClientSP::SpecNextKeyboard
==============
*/

void __fastcall ClActiveClientSP::SpecNextKeyboard(ClActiveClientSP *this, int key)
{
  ?SpecNextKeyboard@ClActiveClientSP@@UEBAXH@Z(this, key);
}

/*
==============
ClActiveClientSP::ExecBinding
==============
*/

void __fastcall ClActiveClientSP::ExecBinding(ClActiveClientSP *this, int kb, int key, int forceNotify)
{
  ?ExecBinding@ClActiveClientSP@@UEBAXHHH@Z(this, kb, key, forceNotify);
}

/*
==============
ClActiveClientSP::GetFreeMoveType
==============
*/

FreeMoveType __fastcall ClActiveClientSP::GetFreeMoveType(ClActiveClientSP *this)
{
  return ?GetFreeMoveType@ClActiveClientSP@@UEBA?AW4FreeMoveType@@XZ(this);
}

/*
==============
ClActiveClientSP::GetServerTime
==============
*/

int __fastcall ClActiveClientSP::GetServerTime(ClActiveClientSP *this)
{
  return ?GetServerTime@ClActiveClientSP@@UEBAHXZ(this);
}

/*
==============
ClActiveClientSP::ResetParseInfoMyChanges
==============
*/

void __fastcall ClActiveClientSP::ResetParseInfoMyChanges(ClActiveClientSP *this)
{
  ?ResetParseInfoMyChanges@ClActiveClientSP@@UEAAXXZ(this);
}

/*
==============
ClActiveClientSP::FreeClients
==============
*/

void ClActiveClientSP::FreeClients(void)
{
  ?FreeClients@ClActiveClientSP@@SAXXZ();
}

/*
==============
ClActiveClientSP::ToggleSpecKeyboard
==============
*/

void __fastcall ClActiveClientSP::ToggleSpecKeyboard(ClActiveClientSP *this, int key)
{
  ?ToggleSpecKeyboard@ClActiveClientSP@@UEBAXH@Z(this, key);
}

/*
==============
ClActiveClientSP::GetMsgWindowDriftTime
==============
*/

int __fastcall ClActiveClientSP::GetMsgWindowDriftTime(ClActiveClientSP *this)
{
  return ?GetMsgWindowDriftTime@ClActiveClientSP@@UEBAHXZ(this);
}

/*
==============
ClActiveClientSP::TranslateButton
==============
*/

bool __fastcall ClActiveClientSP::TranslateButton(ClActiveClientSP *this, int button, int cmd)
{
  return ?TranslateButton@ClActiveClientSP@@UEBA_NHH@Z(this, button, cmd);
}

/*
==============
ClActiveClientSP::ShouldDisplayMsgWindow
==============
*/

bool __fastcall ClActiveClientSP::ShouldDisplayMsgWindow(ClActiveClientSP *this)
{
  return ?ShouldDisplayMsgWindow@ClActiveClientSP@@UEBA_NXZ(this);
}

/*
==============
ClActiveClientSP::ClActiveClientSP
==============
*/

void __fastcall ClActiveClientSP::ClActiveClientSP(ClActiveClientSP *this, const LocalClientNum_t localClientNum)
{
  ??0ClActiveClientSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClActiveClientSP::ClActiveClientSP
==============
*/
void ClActiveClientSP::ClActiveClientSP(ClActiveClientSP *this, const LocalClientNum_t localClientNum)
{
  ClActiveClient::ClActiveClient(this, localClientNum);
  this->__vftable = (ClActiveClientSP_vtbl *)&ClActiveClientSP::`vftable';
  this->ps.meleeReaction.m_packed = 0;
}

/*
==============
ClActiveClientSP::AllocateClients
==============
*/
void ClActiveClientSP::AllocateClients(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned int *v6; 
  LocalClientNum_t v7; 
  __int64 v8; 
  unsigned int *v9; 
  unsigned int v10; 
  __int64 v11; 
  bdRandom v12; 
  __int64 v13; 
  unsigned __int8 pbBuffer[16]; 

  v13 = -2i64;
  v2 = maxLocalClients;
  if ( (_BYTE)ClActiveClient::ms_activeClientType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.cpp", 31, ASSERT_TYPE_ASSERT, "(ms_activeClientType == GameModeType::NONE)", (const char *)&queryFormat, "ms_activeClientType == GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v2 > 2 )
  {
    LODWORD(v11) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.cpp", 32, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v11, 0i64, 2) )
      __debugbreak();
  }
  v4 = v2;
  v5 = 56040 * v2;
  v6 = (unsigned int *)Mem_HunkUser_AllocInternal(hunkUser, v5, 8ui64, "ClActiveClientSP::AllocateClients");
  memset_0(v6, 0, v5);
  v7 = LOCAL_CLIENT_0;
  if ( v4 > 0 )
  {
    v8 = 0i64;
    v9 = v6 + 109;
    do
    {
      ClActiveClient::ClActiveClient((ClActiveClient *)(v9 - 109), v7);
      *(_QWORD *)(v9 - 109) = &ClActiveClientSP::`vftable';
      v9[9655] = 0;
      ClActiveClient::ms_activeClients[v8] = (ClActiveClient *)(v9 - 109);
      if ( !randomNumGenInit )
      {
        if ( !BCryptOpenAlgorithmProvider_0(&s_provider, L"RNG", NULL, 0) )
          OutputDebugStringA("InitRandomNumGen BCryptOpenAlgorithmProvider failed\n");
        randomNumGenInit = 1;
      }
      if ( !BCryptGenRandom_0(s_provider, pbBuffer, 0x10u, 0) || (v10 = *(_DWORD *)pbBuffer) == 0 && !*(_DWORD *)&pbBuffer[4] )
      {
        bdRandom::bdRandom(&v12);
        bdRandom::nextUBytes(&v12, pbBuffer, 16);
        bdRandom::~bdRandom(&v12);
        v10 = *(_DWORD *)pbBuffer;
      }
      v9[8532] = v10;
      v9[8533] = *(_DWORD *)&pbBuffer[4];
      v9[8534] = *(_DWORD *)&pbBuffer[8];
      v9[8535] = *(_DWORD *)&pbBuffer[12];
      memset(pbBuffer, 0, sizeof(pbBuffer));
      v9[8532] -= v9[8533];
      v9[8457] = (((_DWORD)v9 + 33828) ^ v9[8532]) * ((((_DWORD)v9 + 33828) ^ v9[8532]) + 2);
      v9[8534] += v9[8535];
      *(v9 - 2) = LODWORD(vec3_origin.v[0]) ^ ((((_DWORD)v9 - 8) ^ v9[8534]) * ((((_DWORD)v9 - 8) ^ v9[8534]) + 2));
      *(v9 - 1) = LODWORD(vec3_origin.v[1]) ^ ((((_DWORD)v9 - 4) ^ v9[8534]) * ((((_DWORD)v9 - 4) ^ v9[8534]) + 2));
      *v9 = LODWORD(vec3_origin.v[2]) ^ (((unsigned int)v9 ^ v9[8534]) * (((unsigned int)v9 ^ v9[8534]) + 2));
      ++v7;
      ++v8;
      v9 += 14010;
    }
    while ( v8 < v4 );
  }
  LOBYTE(ClActiveClient::ms_activeClientType) = 1;
}

/*
==============
ClActiveClientSP::ClearClient
==============
*/
void ClActiveClientSP::ClearClient(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ClActiveClient *v2; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v4 = cl_maxLocalClients;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.cpp", 77, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cl_maxLocalClients )", "localClientNum doesn't index cl_maxLocalClients\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( (_BYTE)ClActiveClient::ms_activeClientType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.cpp", 78, ASSERT_TYPE_ASSERT, "(ms_activeClientType == GameModeType::SP)", (const char *)&queryFormat, "ms_activeClientType == GameModeType::SP") )
    __debugbreak();
  v2 = ClActiveClient::ms_activeClients[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.cpp", 85, ASSERT_TYPE_ASSERT, "(clientBuffer)", (const char *)&queryFormat, "clientBuffer") )
    __debugbreak();
  ((void (__fastcall *)(ClActiveClient *, _QWORD))v2->~ClActiveClient)(v2, 0i64);
  memset_0(v2, 0, 0xDAE8ui64);
  ClActiveClient::ClActiveClient(v2, (const LocalClientNum_t)v1);
  v2->__vftable = (ClActiveClient_vtbl *)&ClActiveClientSP::`vftable';
  v2[1].cmds[15].angles.v[2] = 0;
  ClActiveClient::ms_activeClients[v1] = v2;
  ClActiveClient_Init_Obfuscation(v2);
}

/*
==============
ClActiveClientSP::ExecBinding
==============
*/
void ClActiveClientSP::ExecBinding(ClActiveClientSP *this, int kb, int key, int forceNotify)
{
  CL_InputSP_ExecBinding(this->m_localClientNum, kb, key, forceNotify);
}

/*
==============
ClActiveClientSP::FreeClients
==============
*/
void ClActiveClientSP::FreeClients(void)
{
  int v0; 
  void **v1; 

  if ( (_BYTE)ClActiveClient::ms_activeClientType == HALF )
  {
    v0 = LODWORD(cl_maxLocalClients) - 1;
    if ( LODWORD(cl_maxLocalClients) - 1 < 0 )
    {
      LOBYTE(ClActiveClient::ms_activeClientType) = 0;
    }
    else
    {
      v1 = (void **)&ClActiveClient::ms_activeClients[v0];
      do
      {
        (**(void (__fastcall ***)(void *, _QWORD))*v1)(*v1, 0i64);
        DebugWipe(*v1, 0xDAE8ui64);
        --v0;
        *v1-- = NULL;
      }
      while ( v0 >= 0 );
      LOBYTE(ClActiveClient::ms_activeClientType) = 0;
    }
  }
  else
  {
    LOBYTE(ClActiveClient::ms_activeClientType) = 0;
  }
}

/*
==============
ClActiveClientSP::GetFreeMoveType
==============
*/
__int64 ClActiveClientSP::GetFreeMoveType(ClActiveClientSP *this)
{
  const dvar_t *v1; 

  v1 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.unsignedInt;
}

/*
==============
ClActiveClientSP::GetHudMsgCharHeight
==============
*/
__int64 ClActiveClientSP::GetHudMsgCharHeight(ClActiveClientSP *this)
{
  return 20i64;
}

/*
==============
ClActiveClientSP::GetMsgWindowDriftTime
==============
*/
__int64 ClActiveClientSP::GetMsgWindowDriftTime(ClActiveClientSP *this)
{
  return 0i64;
}

/*
==============
ClActiveClientSP::GetServerTime
==============
*/
__int64 ClActiveClientSP::GetServerTime(ClActiveClientSP *this)
{
  return (unsigned int)com_time;
}

/*
==============
ClActiveClientSP::IsValidRemoteInputState
==============
*/
bool ClActiveClientSP::IsValidRemoteInputState(ClActiveClientSP *this)
{
  __int64 m_localClientNum; 
  cg_t **v2; 
  __int64 p_predictedPlayerState; 
  __int64 v5; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", m_localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  v2 = &cg_t::ms_cgArray[m_localClientNum];
  if ( !*v2 )
  {
    LODWORD(v5) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v5) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v5) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v5) )
      __debugbreak();
  }
  p_predictedPlayerState = (__int64)&(*v2)->predictedPlayerState;
  if ( *v2 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_active_client_sp.cpp", 172, ASSERT_TYPE_ASSERT, "(pps)", (const char *)&queryFormat, "pps") )
    __debugbreak();
  return g_godModeRemoteInputValid || (unsigned int)(*(_DWORD *)(p_predictedPlayerState + 12) - 2) <= 2 || g_cpuProfiler.m_enabled && R_IsCPUTimelineProfilerViewEnabled();
}

/*
==============
ClActiveClientSP::Pause
==============
*/
void ClActiveClientSP::Pause(ClActiveClientSP *this)
{
  CL_MainSP_TogglePause(this->m_localClientNum);
}

/*
==============
ClActiveClientSP::ResetParseInfoMyChanges
==============
*/
void ClActiveClientSP::ResetParseInfoMyChanges(ClActiveClientSP *this)
{
  ;
}

/*
==============
ClActiveClientSP::SendUserInfo
==============
*/
void ClActiveClientSP::SendUserInfo(ClActiveClientSP *this)
{
  ;
}

/*
==============
ClActiveClientSP::ShouldDisplayMsgWindow
==============
*/
char ClActiveClientSP::ShouldDisplayMsgWindow(ClActiveClientSP *this)
{
  return 1;
}

/*
==============
ClActiveClientSP::SpecNextKeyboard
==============
*/
void ClActiveClientSP::SpecNextKeyboard(ClActiveClientSP *this, int key)
{
  ;
}

/*
==============
ClActiveClientSP::SpecPrevKeyboard
==============
*/
void ClActiveClientSP::SpecPrevKeyboard(ClActiveClientSP *this, int key)
{
  ;
}

/*
==============
ClActiveClientSP::ToggleSpecKeyboard
==============
*/
void ClActiveClientSP::ToggleSpecKeyboard(ClActiveClientSP *this, int key)
{
  ;
}

/*
==============
ClActiveClientSP::TranslateButton
==============
*/
bool ClActiveClientSP::TranslateButton(ClActiveClientSP *this, int button, int cmd)
{
  return 0;
}

/*
==============
ClActiveClientSP::UpdateCommandTime
==============
*/
void ClActiveClientSP::UpdateCommandTime(ClActiveClientSP *this, const unsigned __int64 usec)
{
  this->cmdAccumTimeUsec += usec;
}

