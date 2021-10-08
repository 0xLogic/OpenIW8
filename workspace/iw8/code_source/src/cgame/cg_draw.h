/*
==============
CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemMP>
==============
*/

void __fastcall CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearDrawSystemCommon@VCgDrawSystemMP@@@CgDrawSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemMP>
==============
*/

void __fastcall CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateDrawSystemCommon@VCgDrawSystemMP@@@CgDrawSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgDrawSystem::GetDrawSystemCommon<CgDrawSystemMP>
==============
*/

CgDrawSystemMP *__fastcall CgDrawSystem::GetDrawSystemCommon<CgDrawSystemMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetDrawSystemCommon@VCgDrawSystemMP@@@CgDrawSystem@@KAPEAVCgDrawSystemMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemSP>
==============
*/

void __fastcall CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateDrawSystemCommon@VCgDrawSystemSP@@@CgDrawSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgDrawSystem::~CgDrawSystem
==============
*/

void __fastcall CgDrawSystem::~CgDrawSystem(CgDrawSystem *this)
{
  ??1CgDrawSystem@@MEAA@XZ(this);
}

/*
==============
CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemSP>
==============
*/

void __fastcall CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearDrawSystemCommon@VCgDrawSystemSP@@@CgDrawSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemMP>
==============
*/

__int64 CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemMP>()
{
  return ??$FreeDrawSystemCommon@VCgDrawSystemMP@@@CgDrawSystem@@KAXXZ();
}

/*
==============
CgDrawSystem::GetDrawSystem
==============
*/

CgDrawSystem *__fastcall CgDrawSystem::GetDrawSystem(const LocalClientNum_t localClientNum)
{
  return ?GetDrawSystem@CgDrawSystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystem::GetDrawSystemCommon<CgDrawSystemSP>
==============
*/

CgDrawSystemSP *__fastcall CgDrawSystem::GetDrawSystemCommon<CgDrawSystemSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetDrawSystemCommon@VCgDrawSystemSP@@@CgDrawSystem@@KAPEAVCgDrawSystemSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemSP>
==============
*/

__int64 CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemSP>()
{
  return ??$FreeDrawSystemCommon@VCgDrawSystemSP@@@CgDrawSystem@@KAXXZ();
}

/*
==============
CgDrawSystem::GetDrawSystemCommon<CgDrawSystemMP>
==============
*/
CgDrawSystem *CgDrawSystem::GetDrawSystemCommon<CgDrawSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgDrawSystem::ms_drawSystemArray[v1];
}

/*
==============
CgDrawSystem::GetDrawSystem
==============
*/
CgDrawSystem *CgDrawSystem::GetDrawSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 176, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 178, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgDrawSystem::ms_drawSystemArray[v1];
}

/*
==============
CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemMP>
==============
*/
void CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgDrawSystem *v5; 
  CgDrawSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 200, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the draw system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 201, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgDrawSystem *)Mem_HunkUser_AllocInternal(hunkUser, 1056 * v3, 8ui64, "CgDrawSystem::AllocateDrawSystemCommon");
  memset_0(v5, 0, 1056 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgDrawSystem::ms_drawSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 211, ASSERT_TYPE_ASSERT, "(!ms_drawSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_drawSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4++;
      v5->__vftable = (CgDrawSystem_vtbl *)&CgDrawSystemMP::`vftable';
      *v6 = v5;
      v5 += 66;
      ++v6;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgDrawSystem::ms_allocatedType) = 2;
  CgDrawSystem::ms_allocatedCount = v3;
}

/*
==============
CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemMP>
==============
*/
void CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  _DWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF )
  {
    v7 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 252, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tCgDrawSystem::ClearDrawSystemCommon: Trying to clear draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (void **)&CgDrawSystem::ms_drawSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 80i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x420ui64);
  v3 = *v2;
  v3[2] = v1;
  *(_QWORD *)v3 = &CgDrawSystemMP::`vftable';
}

/*
==============
CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemMP>
==============
*/
void CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgDrawSystem::ms_allocatedType;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgDrawSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 225, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to free draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgDrawSystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgDrawSystem::ms_allocatedCount = 0;
    LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgDrawSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 229, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgDrawSystem::FreeDrawSystemCommon: Trying to free single-player draw system but no draw system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgDrawSystem::ms_allocatedCount - 1;
  if ( CgDrawSystem::ms_allocatedCount - 1 < 0 )
  {
    CgDrawSystem::ms_allocatedCount = 0;
    LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgDrawSystem::ms_drawSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 80i64))(*v2, 0i64);
      DebugWipe(*v2, 0x420ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgDrawSystem::ms_allocatedCount = 0;
    LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgDrawSystem::~CgDrawSystem
==============
*/
void CgDrawSystem::~CgDrawSystem(CgDrawSystem *this)
{
  this->__vftable = (CgDrawSystem_vtbl *)&CgDrawSystem::`vftable';
}

/*
==============
CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemSP>
==============
*/
void CgDrawSystem::AllocateDrawSystemCommon<CgDrawSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgDrawSystem *v5; 
  CgDrawSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 200, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the draw system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 201, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgDrawSystem *)Mem_HunkUser_AllocInternal(hunkUser, 32 * v3, 8ui64, "CgDrawSystem::AllocateDrawSystemCommon");
  memset_0(v5, 0, 32 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgDrawSystem::ms_drawSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 211, ASSERT_TYPE_ASSERT, "(!ms_drawSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_drawSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4++;
      v5->__vftable = (CgDrawSystem_vtbl *)&CgDrawSystemSP::`vftable';
      *v6 = v5;
      v5 += 2;
      ++v6;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgDrawSystem::ms_allocatedType) = 1;
  CgDrawSystem::ms_allocatedCount = v3;
}

/*
==============
CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemSP>
==============
*/
void CgDrawSystem::FreeDrawSystemCommon<CgDrawSystemSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgDrawSystem::ms_allocatedType;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgDrawSystem::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 225, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to free draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgDrawSystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgDrawSystem::ms_allocatedCount = 0;
    LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgDrawSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 229, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgDrawSystem::FreeDrawSystemCommon: Trying to free single-player draw system but no draw system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgDrawSystem::ms_allocatedCount - 1;
  if ( CgDrawSystem::ms_allocatedCount - 1 < 0 )
  {
    CgDrawSystem::ms_allocatedCount = 0;
    LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgDrawSystem::ms_drawSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 80i64))(*v2, 0i64);
      DebugWipe(*v2, 0x20ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgDrawSystem::ms_allocatedCount = 0;
    LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemSP>
==============
*/
void CgDrawSystem::ClearDrawSystemCommon<CgDrawSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgDrawSystem **v2; 
  CgDrawSystem *v3; 
  CgDrawSystem *v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 

  v1 = localClientNum;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF )
  {
    v8 = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    v7 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 252, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tCgDrawSystem::ClearDrawSystemCommon: Trying to clear draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v7, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 253, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = &CgDrawSystem::ms_drawSystemArray[v1];
  ((void (__fastcall *)(CgDrawSystem *, _QWORD))(*v2)->~CgDrawSystem)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  v3[1].__vftable = NULL;
  *(_QWORD *)&v3[1].m_localClientNum = 0i64;
  v4 = *v2;
  v4->m_localClientNum = v1;
  v4->__vftable = (CgDrawSystem_vtbl *)&CgDrawSystemSP::`vftable';
}

/*
==============
CgDrawSystem::GetDrawSystemCommon<CgDrawSystemSP>
==============
*/
CgDrawSystem *CgDrawSystem::GetDrawSystemCommon<CgDrawSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 187, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgDrawSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 189, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgDrawSystem::ms_drawSystemArray[v1];
}

