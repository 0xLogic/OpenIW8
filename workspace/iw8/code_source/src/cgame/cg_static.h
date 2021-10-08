/*
==============
CgStatic::AllocateGameStaticsCommon<CgStaticSP>
==============
*/

void __fastcall CgStatic::AllocateGameStaticsCommon<CgStaticSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateGameStaticsCommon@VCgStaticSP@@@CgStatic@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgStatic::SetActiveStatics
==============
*/

void __fastcall CgStatic::SetActiveStatics(const LocalClientNum_t localClientNum)
{
  ?SetActiveStatics@CgStatic@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgStatic::AllocateGameStaticsCommon<CgStaticMP>
==============
*/

void __fastcall CgStatic::AllocateGameStaticsCommon<CgStaticMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateGameStaticsCommon@VCgStaticMP@@@CgStatic@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgStatic::~CgStatic
==============
*/

void __fastcall CgStatic::~CgStatic(CgStatic *this)
{
  ??1CgStatic@@UEAA@XZ(this);
}

/*
==============
CgStatic::GetLocalClientStatics
==============
*/

CgStatic *__fastcall CgStatic::GetLocalClientStatics(const LocalClientNum_t localClientNum)
{
  return ?GetLocalClientStatics@CgStatic@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgStatic::GetGameStaticsCommon<CgStaticMP>
==============
*/

CgStaticMP *__fastcall CgStatic::GetGameStaticsCommon<CgStaticMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetGameStaticsCommon@VCgStaticMP@@@CgStatic@@KAPEAVCgStaticMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgStatic::FreeGameStaticsCommon<CgStaticSP>
==============
*/

__int64 CgStatic::FreeGameStaticsCommon<CgStaticSP>()
{
  return ??$FreeGameStaticsCommon@VCgStaticSP@@@CgStatic@@KAXXZ();
}

/*
==============
CgStatic::FreeGameStaticsCommon<CgStaticMP>
==============
*/

__int64 CgStatic::FreeGameStaticsCommon<CgStaticMP>()
{
  return ??$FreeGameStaticsCommon@VCgStaticMP@@@CgStatic@@KAXXZ();
}

/*
==============
CgStatic::ClearActiveStatics
==============
*/

void __fastcall CgStatic::ClearActiveStatics(const LocalClientNum_t localClientNum)
{
  ?ClearActiveStatics@CgStatic@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgStatic::GetLocalClientStatics
==============
*/
CgStatic *CgStatic::GetLocalClientStatics(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v4 = CgStatic::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgStatic::ms_cgameStaticsArray[v1];
}

/*
==============
CgStatic::AllocateGameStaticsCommon<CgStaticMP>
==============
*/
void CgStatic::AllocateGameStaticsCommon<CgStaticMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgStaticMP *v5; 
  CgStatic **v6; 
  CgStatic *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgStatic::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgStatic::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 134, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the game statics but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 135, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgStaticMP *)Mem_HunkUser_AllocInternal(hunkUser, 61168 * v3, 8ui64, "CgStatic::AllocateGameStaticsCommon");
  if ( (int)v3 > 0 )
  {
    v6 = CgStatic::ms_cgameStaticsArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 145, ASSERT_TYPE_ASSERT, "(!ms_cgameStaticsArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgameStaticsArray[localClientIndex]") )
        __debugbreak();
      CgStaticMP::CgStaticMP(v5, (const LocalClientNum_t)v4);
      *v6 = v7;
      ++v4;
      ++v6;
      ++v5;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgStatic::ms_allocatedType) = 2;
  LODWORD(CgStatic::ms_allocatedCount) = v3;
}

/*
==============
CgStatic::FreeGameStaticsCommon<CgStaticMP>
==============
*/
void CgStatic::FreeGameStaticsCommon<CgStaticMP>()
{
  char v0; 
  bool v1; 
  int v2; 
  void **v3; 
  int v4; 
  int v5; 

  v0 = CgStatic::ms_allocatedType;
  if ( (_BYTE)CgStatic::ms_allocatedType )
  {
    if ( (_BYTE)CgStatic::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v5 = (unsigned __int8)CgStatic::ms_allocatedType;
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 159, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE)", "%s\n\tTrying to free game statics but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE", v4, v5) )
      __debugbreak();
    v0 = CgStatic::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgStatic::ms_allocatedCount = 0.0;
    LOBYTE(CgStatic::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( SLODWORD(CgStatic::ms_allocatedCount) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 163, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgStatic::FreeGameStaticsCommon: Trying to free game statics but no game statics has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = LODWORD(CgStatic::ms_allocatedCount) - 1 < 0;
  v2 = LODWORD(CgStatic::ms_allocatedCount) - 1;
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  if ( v1 )
  {
    CgStatic::ms_allocatedCount = 0.0;
    LOBYTE(CgStatic::ms_allocatedType) = 0;
  }
  else
  {
    v3 = (void **)&CgStatic::ms_cgameStaticsArray[v2];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v3)(*v3, 0i64);
      DebugWipe(*v3, 0xEEF0ui64);
      --v2;
      *v3-- = NULL;
    }
    while ( v2 >= 0 );
    CgStatic::ms_allocatedCount = 0.0;
    LOBYTE(CgStatic::ms_allocatedType) = 0;
  }
}

/*
==============
CgStatic::GetGameStaticsCommon<CgStaticMP>
==============
*/
CgStatic *CgStatic::GetGameStaticsCommon<CgStaticMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgStatic::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 121, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::GAME_STATICS_TYPE)", "%s\n\tTrying to access the game statics for localClientNum %d but the game statics type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::GAME_STATICS_TYPE", localClientNum, 2, (unsigned __int8)CgStatic::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v4 = CgStatic::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 122, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 123, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgStatic::ms_cgameStaticsArray[v1];
}

/*
==============
CgStatic::~CgStatic
==============
*/
void CgStatic::~CgStatic(CgStatic *this)
{
  this->m_localClientNum = LOCAL_CLIENT_INVALID;
  this->__vftable = (CgStatic_vtbl *)&CgStatic::`vftable';
  BgStatic::~BgStatic(this);
}

/*
==============
CgStatic::ClearActiveStatics
==============
*/
void CgStatic::ClearActiveStatics(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  CgStatic **v3; 
  __int64 v4; 
  __int64 v5; 
  float v6; 

  v1 = localClientNum;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 96, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the client game statics but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    v6 = CgStatic::ms_allocatedCount;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = CgStatic::ms_cgameStaticsArray[v1] == NULL;
  v3 = &CgStatic::ms_cgameStaticsArray[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 98, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to clear the active bgs from the client game statics but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(CgStatic **)(v4 + 272) != *v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 99, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_cgameStaticsArray[localClientNum] ) )", "( ms_activeBgs ) = %p", *(const void **)(v4 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
}

/*
==============
CgStatic::AllocateGameStaticsCommon<CgStaticSP>
==============
*/
void CgStatic::AllocateGameStaticsCommon<CgStaticSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgStaticSP *v5; 
  CgStatic **v6; 
  CgStatic *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgStatic::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgStatic::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 134, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the game statics but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 135, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgStaticSP *)Mem_HunkUser_AllocInternal(hunkUser, 19568 * v3, 8ui64, "CgStatic::AllocateGameStaticsCommon");
  if ( (int)v3 > 0 )
  {
    v6 = CgStatic::ms_cgameStaticsArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 145, ASSERT_TYPE_ASSERT, "(!ms_cgameStaticsArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgameStaticsArray[localClientIndex]") )
        __debugbreak();
      CgStaticSP::CgStaticSP(v5, (const LocalClientNum_t)v4);
      *v6 = v7;
      ++v4;
      ++v6;
      ++v5;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgStatic::ms_allocatedType) = 1;
  LODWORD(CgStatic::ms_allocatedCount) = v3;
}

/*
==============
CgStatic::FreeGameStaticsCommon<CgStaticSP>
==============
*/
void CgStatic::FreeGameStaticsCommon<CgStaticSP>()
{
  char v0; 
  bool v1; 
  int v2; 
  void **v3; 
  int v4; 
  int v5; 

  v0 = CgStatic::ms_allocatedType;
  if ( (_BYTE)CgStatic::ms_allocatedType )
  {
    if ( (_BYTE)CgStatic::ms_allocatedType == HALF )
      goto LABEL_7;
    v5 = (unsigned __int8)CgStatic::ms_allocatedType;
    v4 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 159, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE)", "%s\n\tTrying to free game statics but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE", v4, v5) )
      __debugbreak();
    v0 = CgStatic::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgStatic::ms_allocatedCount = 0.0;
    LOBYTE(CgStatic::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( SLODWORD(CgStatic::ms_allocatedCount) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 163, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgStatic::FreeGameStaticsCommon: Trying to free game statics but no game statics has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = LODWORD(CgStatic::ms_allocatedCount) - 1 < 0;
  v2 = LODWORD(CgStatic::ms_allocatedCount) - 1;
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  if ( v1 )
  {
    CgStatic::ms_allocatedCount = 0.0;
    LOBYTE(CgStatic::ms_allocatedType) = 0;
  }
  else
  {
    v3 = (void **)&CgStatic::ms_cgameStaticsArray[v2];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v3)(*v3, 0i64);
      DebugWipe(*v3, 0x4C70ui64);
      --v2;
      *v3-- = NULL;
    }
    while ( v2 >= 0 );
    CgStatic::ms_allocatedCount = 0.0;
    LOBYTE(CgStatic::ms_allocatedType) = 0;
  }
}

/*
==============
CgStatic::SetActiveStatics
==============
*/
void CgStatic::SetActiveStatics(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  bool v3; 
  CgStatic **v4; 
  __int64 v5; 
  float v6; 

  v1 = localClientNum;
  v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v2 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", *(const void **)(v2 + 272)) )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v1 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    v6 = CgStatic::ms_allocatedCount;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v3 = CgStatic::ms_cgameStaticsArray[v1] == NULL;
  v4 = &CgStatic::ms_cgameStaticsArray[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = *v4;
}

