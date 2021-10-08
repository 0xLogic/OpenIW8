/*
==============
CgViewSystem::GetViewSystem
==============
*/

CgViewSystem *__fastcall CgViewSystem::GetViewSystem(const LocalClientNum_t localClientNum)
{
  return ?GetViewSystem@CgViewSystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystem::ClearViewSystemCommon<CgViewSystemMP>
==============
*/

void __fastcall CgViewSystem::ClearViewSystemCommon<CgViewSystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearViewSystemCommon@VCgViewSystemMP@@@CgViewSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystem::FreeViewSystemCommon<CgViewSystemMP>
==============
*/

__int64 CgViewSystem::FreeViewSystemCommon<CgViewSystemMP>()
{
  return ??$FreeViewSystemCommon@VCgViewSystemMP@@@CgViewSystem@@KAXXZ();
}

/*
==============
CgViewSystem::GetViewSystemCommon<CgViewSystemSP>
==============
*/

CgViewSystemSP *__fastcall CgViewSystem::GetViewSystemCommon<CgViewSystemSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetViewSystemCommon@VCgViewSystemSP@@@CgViewSystem@@KAPEAVCgViewSystemSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystem::FreeViewSystemCommon<CgViewSystemSP>
==============
*/

__int64 CgViewSystem::FreeViewSystemCommon<CgViewSystemSP>()
{
  return ??$FreeViewSystemCommon@VCgViewSystemSP@@@CgViewSystem@@KAXXZ();
}

/*
==============
CgViewSystem::AllocateViewSystemCommon<CgViewSystemMP>
==============
*/

void __fastcall CgViewSystem::AllocateViewSystemCommon<CgViewSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateViewSystemCommon@VCgViewSystemMP@@@CgViewSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgViewSystem::AllocateViewSystemCommon<CgViewSystemSP>
==============
*/

void __fastcall CgViewSystem::AllocateViewSystemCommon<CgViewSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateViewSystemCommon@VCgViewSystemSP@@@CgViewSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgViewSystem::~CgViewSystem
==============
*/

void __fastcall CgViewSystem::~CgViewSystem(CgViewSystem *this)
{
  ??1CgViewSystem@@MEAA@XZ(this);
}

/*
==============
CgViewSystem::ClearViewSystemCommon<CgViewSystemSP>
==============
*/

void __fastcall CgViewSystem::ClearViewSystemCommon<CgViewSystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearViewSystemCommon@VCgViewSystemSP@@@CgViewSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystem::GetViewSystem
==============
*/
CgViewSystem *CgViewSystem::GetViewSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgViewSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 267, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the view system for localClientNum %d but the view system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgViewSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 268, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgViewSystem::ms_viewSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 269, ASSERT_TYPE_ASSERT, "(ms_viewSystemArray[localClientNum])", "%s\n\tTrying to access unallocated view system for localClientNum %d\n", "ms_viewSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgViewSystem::ms_viewSystemArray[v1];
}

/*
==============
CgViewSystem::AllocateViewSystemCommon<CgViewSystemMP>
==============
*/
void CgViewSystem::AllocateViewSystemCommon<CgViewSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgViewSystem *v5; 
  CgViewSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgViewSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgViewSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 291, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the view system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 292, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgViewSystem *)Mem_HunkUser_AllocInternal(hunkUser, 104 * v3, 8ui64, "CgViewSystem::AllocateViewSystemCommon");
  memset_0(v5, 0, 104 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgViewSystem::ms_viewSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 302, ASSERT_TYPE_ASSERT, "(!ms_viewSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_viewSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4;
      memset_0(&v5->m_viewKickState, 0, sizeof(v5->m_viewKickState));
      v5->__vftable = (CgViewSystem_vtbl *)&CgViewSystemMP::`vftable';
      ++v4;
      *v6++ = v5++;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgViewSystem::ms_allocatedType) = 2;
  CgViewSystem::ms_allocatedCount = v3;
}

/*
==============
CgViewSystem::ClearViewSystemCommon<CgViewSystemMP>
==============
*/
void CgViewSystem::ClearViewSystemCommon<CgViewSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  _DWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF_HALF )
  {
    v7 = (unsigned __int8)CgViewSystem::ms_allocatedType;
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tCgViewSystem::ClearViewSystemCommon: Trying to clear view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgViewSystem::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 344, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (void **)&CgViewSystem::ms_viewSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 32i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x68ui64);
  v3 = *v2;
  v3[2] = v1;
  memset_0(v3 + 3, 0, 0x5Cui64);
  *(_QWORD *)v3 = &CgViewSystemMP::`vftable';
}

/*
==============
CgViewSystem::FreeViewSystemCommon<CgViewSystemMP>
==============
*/
void CgViewSystem::FreeViewSystemCommon<CgViewSystemMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgViewSystem::ms_allocatedType;
  if ( (_BYTE)CgViewSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgViewSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgViewSystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 316, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tTrying to free view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgViewSystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgViewSystem::ms_allocatedCount = 0;
    LOBYTE(CgViewSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgViewSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 320, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgViewSystem::FreeViewSystemCommon: Trying to free single-player view system but no view system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgViewSystem::ms_allocatedCount - 1;
  if ( CgViewSystem::ms_allocatedCount - 1 < 0 )
  {
    CgViewSystem::ms_allocatedCount = 0;
    LOBYTE(CgViewSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgViewSystem::ms_viewSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 32i64))(*v2, 0i64);
      DebugWipe(*v2, 0x68ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgViewSystem::ms_allocatedCount = 0;
    LOBYTE(CgViewSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgViewSystem::~CgViewSystem
==============
*/
void CgViewSystem::~CgViewSystem(CgViewSystem *this)
{
  this->__vftable = (CgViewSystem_vtbl *)&CgViewSystem::`vftable';
}

/*
==============
CgViewSystem::AllocateViewSystemCommon<CgViewSystemSP>
==============
*/
void CgViewSystem::AllocateViewSystemCommon<CgViewSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgViewSystem *v5; 
  CgViewSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgViewSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgViewSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 291, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the view system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 292, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgViewSystem *)Mem_HunkUser_AllocInternal(hunkUser, 104 * v3, 8ui64, "CgViewSystem::AllocateViewSystemCommon");
  memset_0(v5, 0, 104 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgViewSystem::ms_viewSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 302, ASSERT_TYPE_ASSERT, "(!ms_viewSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_viewSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4;
      memset_0(&v5->m_viewKickState, 0, sizeof(v5->m_viewKickState));
      v5->__vftable = (CgViewSystem_vtbl *)&CgViewSystemSP::`vftable';
      ++v4;
      *v6++ = v5++;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgViewSystem::ms_allocatedType) = 1;
  CgViewSystem::ms_allocatedCount = v3;
}

/*
==============
CgViewSystem::FreeViewSystemCommon<CgViewSystemSP>
==============
*/
void CgViewSystem::FreeViewSystemCommon<CgViewSystemSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgViewSystem::ms_allocatedType;
  if ( (_BYTE)CgViewSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgViewSystem::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgViewSystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 316, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tTrying to free view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgViewSystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgViewSystem::ms_allocatedCount = 0;
    LOBYTE(CgViewSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgViewSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 320, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgViewSystem::FreeViewSystemCommon: Trying to free single-player view system but no view system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgViewSystem::ms_allocatedCount - 1;
  if ( CgViewSystem::ms_allocatedCount - 1 < 0 )
  {
    CgViewSystem::ms_allocatedCount = 0;
    LOBYTE(CgViewSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgViewSystem::ms_viewSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 32i64))(*v2, 0i64);
      DebugWipe(*v2, 0x68ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgViewSystem::ms_allocatedCount = 0;
    LOBYTE(CgViewSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgViewSystem::ClearViewSystemCommon<CgViewSystemSP>
==============
*/
void CgViewSystem::ClearViewSystemCommon<CgViewSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  _DWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF )
  {
    v7 = (unsigned __int8)CgViewSystem::ms_allocatedType;
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tCgViewSystem::ClearViewSystemCommon: Trying to clear view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgViewSystem::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 344, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (void **)&CgViewSystem::ms_viewSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 32i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x68ui64);
  v3 = *v2;
  v3[2] = v1;
  memset_0(v3 + 3, 0, 0x5Cui64);
  *(_QWORD *)v3 = &CgViewSystemSP::`vftable';
}

/*
==============
CgViewSystem::GetViewSystemCommon<CgViewSystemSP>
==============
*/
CgViewSystem *CgViewSystem::GetViewSystemCommon<CgViewSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 278, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tTrying to access the view system for localClientNum %d but the view system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgViewSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgViewSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgViewSystem::ms_viewSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 280, ASSERT_TYPE_ASSERT, "(ms_viewSystemArray[localClientNum])", "%s\n\tTrying to access unallocated view system for localClientNum %d\n", "ms_viewSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgViewSystem::ms_viewSystemArray[v1];
}

