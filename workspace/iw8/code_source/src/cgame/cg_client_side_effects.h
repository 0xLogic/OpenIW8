/*
==============
CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/

CgClientSideEffectsSystemSP *__fastcall CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetClientSideEffectsSystemCommon@VCgClientSideEffectsSystemSP@@@CgClientSideEffectsSystem@@KAPEAVCgClientSideEffectsSystemSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/

void __fastcall CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateClientSideEffectsSystemCommon@VCgClientSideEffectsSystemMP@@@CgClientSideEffectsSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/

void __fastcall CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearClientSideEffectsSystemCommon@VCgClientSideEffectsSystemSP@@@CgClientSideEffectsSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/

__int64 CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>()
{
  return ??$FreeClientSideEffectsSystemCommon@VCgClientSideEffectsSystemSP@@@CgClientSideEffectsSystem@@KAXXZ();
}

/*
==============
CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/

void __fastcall CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateClientSideEffectsSystemCommon@VCgClientSideEffectsSystemSP@@@CgClientSideEffectsSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgClientSideEffectsSystem::GetClientSideEffectsSystem
==============
*/

CgClientSideEffectsSystem *__fastcall CgClientSideEffectsSystem::GetClientSideEffectsSystem(const LocalClientNum_t localClientNum)
{
  return ?GetClientSideEffectsSystem@CgClientSideEffectsSystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/

CgClientSideEffectsSystemMP *__fastcall CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetClientSideEffectsSystemCommon@VCgClientSideEffectsSystemMP@@@CgClientSideEffectsSystem@@KAPEAVCgClientSideEffectsSystemMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/

void __fastcall CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearClientSideEffectsSystemCommon@VCgClientSideEffectsSystemMP@@@CgClientSideEffectsSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/

__int64 CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>()
{
  return ??$FreeClientSideEffectsSystemCommon@VCgClientSideEffectsSystemMP@@@CgClientSideEffectsSystem@@KAXXZ();
}

/*
==============
CgClientSideEffectsSystem::~CgClientSideEffectsSystem
==============
*/

void __fastcall CgClientSideEffectsSystem::~CgClientSideEffectsSystem(CgClientSideEffectsSystem *this)
{
  ??1CgClientSideEffectsSystem@@MEAA@XZ(this);
}

/*
==============
CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/
CgClientSideEffectsSystem *CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgClientSideEffectsSystem::ms_cseSystemArray[v1];
}

/*
==============
CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/
CgClientSideEffectsSystem *CgClientSideEffectsSystem::GetClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgClientSideEffectsSystem::ms_cseSystemArray[v1];
}

/*
==============
CgClientSideEffectsSystem::GetClientSideEffectsSystem
==============
*/
CgClientSideEffectsSystem *CgClientSideEffectsSystem::GetClientSideEffectsSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgClientSideEffectsSystem::ms_cseSystemArray[v1];
}

/*
==============
CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/
void CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgClientSideEffectsSystem *v5; 
  CgClientSideEffectsSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 334, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the client-side effects system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 335, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgClientSideEffectsSystem *)Mem_HunkUser_AllocInternal(hunkUser, 80064 * v3, 8ui64, "CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon");
  memset_0(v5, 0, 80064 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgClientSideEffectsSystem::ms_cseSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 345, ASSERT_TYPE_ASSERT, "(!ms_cseSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_cseSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4;
      v5->__vftable = (CgClientSideEffectsSystem_vtbl *)&CgClientSideEffectsSystemMP::`vftable';
      *v6 = v5;
      CgClientSideEffectsSystem::AllocateMemory(v5, hunkUser);
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 2;
  CgClientSideEffectsSystem::ms_allocatedCount = v3;
}

/*
==============
CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/
void CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  v1 = localClientNum;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF_HALF )
  {
    v5 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 388, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tCgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon: Trying to clear client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v4, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v3) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 389, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  CgClientSideEffectsSystem::ClearMemory(CgClientSideEffectsSystem::ms_cseSystemArray[v1]);
}

/*
==============
CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>
==============
*/
void CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemMP>()
{
  char v0; 
  int v1; 
  CgClientSideEffectsSystem **v2; 
  int v3; 
  int v4; 

  v0 = CgClientSideEffectsSystem::ms_allocatedType;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 360, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to free client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgClientSideEffectsSystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgClientSideEffectsSystem::ms_allocatedCount = 0;
    LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgClientSideEffectsSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 364, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon: Trying to free single-player client-side effects system but no client-side effects system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgClientSideEffectsSystem::ms_allocatedCount - 1;
  if ( CgClientSideEffectsSystem::ms_allocatedCount - 1 < 0 )
  {
    CgClientSideEffectsSystem::ms_allocatedCount = 0;
    LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = &CgClientSideEffectsSystem::ms_cseSystemArray[v1];
    do
    {
      CgClientSideEffectsSystem::FreeMemory(*v2);
      ((void (__fastcall *)(CgClientSideEffectsSystem *, _QWORD))(*v2)->~CgClientSideEffectsSystem)(*v2, 0i64);
      DebugWipe(*v2, 0x138C0ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgClientSideEffectsSystem::ms_allocatedCount = 0;
    LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgClientSideEffectsSystem::~CgClientSideEffectsSystem
==============
*/
void CgClientSideEffectsSystem::~CgClientSideEffectsSystem(CgClientSideEffectsSystem *this)
{
  this->__vftable = (CgClientSideEffectsSystem_vtbl *)&CgClientSideEffectsSystem::`vftable';
}

/*
==============
CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/
void CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgClientSideEffectsSystem *v5; 
  CgClientSideEffectsSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 334, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the client-side effects system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 335, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgClientSideEffectsSystem *)Mem_HunkUser_AllocInternal(hunkUser, 80064 * v3, 8ui64, "CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon");
  memset_0(v5, 0, 80064 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgClientSideEffectsSystem::ms_cseSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 345, ASSERT_TYPE_ASSERT, "(!ms_cseSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_cseSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4;
      v5->__vftable = (CgClientSideEffectsSystem_vtbl *)&CgClientSideEffectsSystemSP::`vftable';
      *v6 = v5;
      CgClientSideEffectsSystem::AllocateMemory(v5, hunkUser);
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 1;
  CgClientSideEffectsSystem::ms_allocatedCount = v3;
}

/*
==============
CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/
void CgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  v1 = localClientNum;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF )
  {
    v5 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 388, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tCgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon: Trying to clear client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v4, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v3) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 389, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  CgClientSideEffectsSystem::ClearMemory(CgClientSideEffectsSystem::ms_cseSystemArray[v1]);
}

/*
==============
CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>
==============
*/
void CgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon<CgClientSideEffectsSystemSP>()
{
  char v0; 
  int v1; 
  CgClientSideEffectsSystem **v2; 
  int v3; 
  int v4; 

  v0 = CgClientSideEffectsSystem::ms_allocatedType;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 360, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to free client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgClientSideEffectsSystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgClientSideEffectsSystem::ms_allocatedCount = 0;
    LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgClientSideEffectsSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 364, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon: Trying to free single-player client-side effects system but no client-side effects system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgClientSideEffectsSystem::ms_allocatedCount - 1;
  if ( CgClientSideEffectsSystem::ms_allocatedCount - 1 < 0 )
  {
    CgClientSideEffectsSystem::ms_allocatedCount = 0;
    LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = &CgClientSideEffectsSystem::ms_cseSystemArray[v1];
    do
    {
      CgClientSideEffectsSystem::FreeMemory(*v2);
      ((void (__fastcall *)(CgClientSideEffectsSystem *, _QWORD))(*v2)->~CgClientSideEffectsSystem)(*v2, 0i64);
      DebugWipe(*v2, 0x138C0ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgClientSideEffectsSystem::ms_allocatedCount = 0;
    LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
  }
}

