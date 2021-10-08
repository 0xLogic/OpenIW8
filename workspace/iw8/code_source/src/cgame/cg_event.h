/*
==============
CgEventSystem::~CgEventSystem
==============
*/

void __fastcall CgEventSystem::~CgEventSystem(CgEventSystem *this)
{
  ??1CgEventSystem@@MEAA@XZ(this);
}

/*
==============
CgEventSystem::CheckClientNumLocal
==============
*/

int __fastcall CgEventSystem::CheckClientNumLocal(CgEventSystem *this, const int clientNum, const int eventId)
{
  return ?CheckClientNumLocal@CgEventSystem@@IEBAHHH@Z(this, clientNum, eventId);
}

/*
==============
CgEventSystem::ClearEventSystemCommon<CgEventSystemMP>
==============
*/

void __fastcall CgEventSystem::ClearEventSystemCommon<CgEventSystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearEventSystemCommon@VCgEventSystemMP@@@CgEventSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEventSystem::AllocateEventSystemCommon<CgEventSystemSP>
==============
*/

void __fastcall CgEventSystem::AllocateEventSystemCommon<CgEventSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateEventSystemCommon@VCgEventSystemSP@@@CgEventSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgEventSystem::AllocateEventSystemCommon<CgEventSystemMP>
==============
*/

void __fastcall CgEventSystem::AllocateEventSystemCommon<CgEventSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateEventSystemCommon@VCgEventSystemMP@@@CgEventSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgEventSystem::FreeEventSystemCommon<CgEventSystemSP>
==============
*/

__int64 CgEventSystem::FreeEventSystemCommon<CgEventSystemSP>()
{
  return ??$FreeEventSystemCommon@VCgEventSystemSP@@@CgEventSystem@@KAXXZ();
}

/*
==============
CgEventSystem::GetEventSystemCommon<CgEventSystemMP>
==============
*/

CgEventSystemMP *__fastcall CgEventSystem::GetEventSystemCommon<CgEventSystemMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetEventSystemCommon@VCgEventSystemMP@@@CgEventSystem@@KAPEAVCgEventSystemMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEventSystem::GetEventSystemCommon<CgEventSystemSP>
==============
*/

CgEventSystemSP *__fastcall CgEventSystem::GetEventSystemCommon<CgEventSystemSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetEventSystemCommon@VCgEventSystemSP@@@CgEventSystem@@KAPEAVCgEventSystemSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEventSystem::FreeEventSystemCommon<CgEventSystemMP>
==============
*/

__int64 CgEventSystem::FreeEventSystemCommon<CgEventSystemMP>()
{
  return ??$FreeEventSystemCommon@VCgEventSystemMP@@@CgEventSystem@@KAXXZ();
}

/*
==============
CgEventSystem::ClearEventSystemCommon<CgEventSystemSP>
==============
*/

void __fastcall CgEventSystem::ClearEventSystemCommon<CgEventSystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearEventSystemCommon@VCgEventSystemSP@@@CgEventSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgEventSystem::CheckClientNumLocal
==============
*/
__int64 CgEventSystem::CheckClientNumLocal(CgEventSystem *this, const int clientNum, const int eventId)
{
  int v5; 
  const char *EventTypeName; 
  int v8; 

  v5 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.clientNum;
  if ( clientNum == v5 )
    return 1i64;
  EventTypeName = BG_GetEventTypeName(eventId);
  v8 = v5;
  Com_DPrintf(21, "Event %s just for client %i was sent to other clients (%i)\n", EventTypeName, (unsigned int)clientNum, v8);
  return 0i64;
}

/*
==============
CgEventSystem::GetEventSystemCommon<CgEventSystemMP>
==============
*/
CgEventSystem *CgEventSystem::GetEventSystemCommon<CgEventSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 235, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgEventSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgEventSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgEventSystem::ms_eventSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 237, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgEventSystem::ms_eventSystemArray[v1];
}

/*
==============
CgEventSystem::AllocateEventSystemCommon<CgEventSystemMP>
==============
*/
void CgEventSystem::AllocateEventSystemCommon<CgEventSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgEventSystem *v5; 
  CgEventSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgEventSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgEventSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 248, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the event system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 249, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgEventSystem *)Mem_HunkUser_AllocInternal(hunkUser, 16 * v3, 8ui64, "CgEventSystem::AllocateEventSystemCommon");
  memset_0(v5, 0, 16 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgEventSystem::ms_eventSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 259, ASSERT_TYPE_ASSERT, "(!ms_eventSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_eventSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4++;
      v5->__vftable = (CgEventSystem_vtbl *)&CgEventSystemMP::`vftable';
      *v6++ = v5++;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgEventSystem::ms_allocatedType) = 2;
  CgEventSystem::ms_allocatedCount = v3;
}

/*
==============
CgEventSystem::ClearEventSystemCommon<CgEventSystemMP>
==============
*/
void CgEventSystem::ClearEventSystemCommon<CgEventSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgEventSystem **v2; 
  CgEventSystem *v3; 
  CgEventSystem *v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 

  v1 = localClientNum;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF_HALF )
  {
    v8 = (unsigned __int8)CgEventSystem::ms_allocatedType;
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 300, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tCgEventSystem::ClearEventSystemCommon: Trying to clear event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v7, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgEventSystem::ms_allocatedCount;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 301, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = &CgEventSystem::ms_eventSystemArray[v1];
  ((void (__fastcall *)(CgEventSystem *, _QWORD))(*v2)->~CgEventSystem)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  v4 = *v2;
  v4->__vftable = (CgEventSystem_vtbl *)&CgEventSystemMP::`vftable';
  v4->m_localClientNum = v1;
  CG_Event_Debug_Init((LocalClientNum_t)v1);
}

/*
==============
CgEventSystem::FreeEventSystemCommon<CgEventSystemMP>
==============
*/
void CgEventSystem::FreeEventSystemCommon<CgEventSystemMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgEventSystem::ms_allocatedType;
  if ( (_BYTE)CgEventSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgEventSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgEventSystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to free event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgEventSystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgEventSystem::ms_allocatedCount = 0;
    LOBYTE(CgEventSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgEventSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 277, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEventSystem::FreeEventSystemCommon: Trying to free single-player event system but no event system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgEventSystem::ms_allocatedCount - 1;
  if ( CgEventSystem::ms_allocatedCount - 1 < 0 )
  {
    CgEventSystem::ms_allocatedCount = 0;
    LOBYTE(CgEventSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgEventSystem::ms_eventSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 16i64))(*v2, 0i64);
      DebugWipe(*v2, 0x10ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgEventSystem::ms_allocatedCount = 0;
    LOBYTE(CgEventSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgEventSystem::~CgEventSystem
==============
*/
void CgEventSystem::~CgEventSystem(CgEventSystem *this)
{
  this->__vftable = (CgEventSystem_vtbl *)&CgEventSystem::`vftable';
}

/*
==============
CgEventSystem::GetEventSystemCommon<CgEventSystemSP>
==============
*/
CgEventSystem *CgEventSystem::GetEventSystemCommon<CgEventSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 235, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgEventSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgEventSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgEventSystem::ms_eventSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 237, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgEventSystem::ms_eventSystemArray[v1];
}

/*
==============
CgEventSystem::AllocateEventSystemCommon<CgEventSystemSP>
==============
*/
void CgEventSystem::AllocateEventSystemCommon<CgEventSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgEventSystem *v5; 
  CgEventSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgEventSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgEventSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 248, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the event system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 249, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgEventSystem *)Mem_HunkUser_AllocInternal(hunkUser, 16 * v3, 8ui64, "CgEventSystem::AllocateEventSystemCommon");
  memset_0(v5, 0, 16 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgEventSystem::ms_eventSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 259, ASSERT_TYPE_ASSERT, "(!ms_eventSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_eventSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4++;
      v5->__vftable = (CgEventSystem_vtbl *)&CgEventSystemSP::`vftable';
      *v6++ = v5++;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgEventSystem::ms_allocatedType) = 1;
  CgEventSystem::ms_allocatedCount = v3;
}

/*
==============
CgEventSystem::FreeEventSystemCommon<CgEventSystemSP>
==============
*/
void CgEventSystem::FreeEventSystemCommon<CgEventSystemSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgEventSystem::ms_allocatedType;
  if ( (_BYTE)CgEventSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgEventSystem::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgEventSystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to free event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgEventSystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgEventSystem::ms_allocatedCount = 0;
    LOBYTE(CgEventSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgEventSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 277, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEventSystem::FreeEventSystemCommon: Trying to free single-player event system but no event system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgEventSystem::ms_allocatedCount - 1;
  if ( CgEventSystem::ms_allocatedCount - 1 < 0 )
  {
    CgEventSystem::ms_allocatedCount = 0;
    LOBYTE(CgEventSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgEventSystem::ms_eventSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 16i64))(*v2, 0i64);
      DebugWipe(*v2, 0x10ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgEventSystem::ms_allocatedCount = 0;
    LOBYTE(CgEventSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgEventSystem::ClearEventSystemCommon<CgEventSystemSP>
==============
*/
void CgEventSystem::ClearEventSystemCommon<CgEventSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgEventSystem **v2; 
  CgEventSystem *v3; 
  CgEventSystem *v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 

  v1 = localClientNum;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF )
  {
    v8 = (unsigned __int8)CgEventSystem::ms_allocatedType;
    v7 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 300, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tCgEventSystem::ClearEventSystemCommon: Trying to clear event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v7, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgEventSystem::ms_allocatedCount;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 301, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = &CgEventSystem::ms_eventSystemArray[v1];
  ((void (__fastcall *)(CgEventSystem *, _QWORD))(*v2)->~CgEventSystem)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  v4 = *v2;
  v4->__vftable = (CgEventSystem_vtbl *)&CgEventSystemSP::`vftable';
  v4->m_localClientNum = v1;
  CG_Event_Debug_Init((LocalClientNum_t)v1);
}

