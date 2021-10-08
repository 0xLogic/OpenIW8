/*
==============
CgBallistics::~CgBallistics
==============
*/

void __fastcall CgBallistics::~CgBallistics(CgBallistics *this)
{
  ??1CgBallistics@@UEAA@XZ(this);
}

/*
==============
CgBallistics::FreeSystemCommon<CgBallisticsMP>
==============
*/

__int64 CgBallistics::FreeSystemCommon<CgBallisticsMP>()
{
  return ??$FreeSystemCommon@VCgBallisticsMP@@@CgBallistics@@KAXXZ();
}

/*
==============
CgBallistics::AllocateSystemCommon<CgBallisticsSP>
==============
*/

void __fastcall CgBallistics::AllocateSystemCommon<CgBallisticsSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSystemCommon@VCgBallisticsSP@@@CgBallistics@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgBallistics::ClearSystemCommon<CgBallisticsMP>
==============
*/

void __fastcall CgBallistics::ClearSystemCommon<CgBallisticsMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearSystemCommon@VCgBallisticsMP@@@CgBallistics@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgBallistics::FreeSystemCommon<CgBallisticsSP>
==============
*/

__int64 CgBallistics::FreeSystemCommon<CgBallisticsSP>()
{
  return ??$FreeSystemCommon@VCgBallisticsSP@@@CgBallistics@@KAXXZ();
}

/*
==============
CgBallistics::ClearSystemCommon<CgBallisticsSP>
==============
*/

void __fastcall CgBallistics::ClearSystemCommon<CgBallisticsSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearSystemCommon@VCgBallisticsSP@@@CgBallistics@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgBallistics::AllocateSystemCommon<CgBallisticsMP>
==============
*/

void __fastcall CgBallistics::AllocateSystemCommon<CgBallisticsMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSystemCommon@VCgBallisticsMP@@@CgBallistics@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgBallistics::AllocateSystemCommon<CgBallisticsMP>
==============
*/
void CgBallistics::AllocateSystemCommon<CgBallisticsMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  char *v4; 
  int v5; 
  CgBallistics **v6; 
  char *v7; 
  CgBallistics *v8; 
  CgBallisticInstance *v9; 
  __int64 v10; 
  CgBallisticInstance *v11; 
  __int64 v12; 
  __int64 v13; 

  v2 = maxLocalClients;
  if ( (_BYTE)CgBallistics::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 190, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the ballistics system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)CgBallistics::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v2 > 2 )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 191, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v13, 0i64, 2) )
      __debugbreak();
  }
  v4 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 286056 * v2, 8ui64, "CgBallistics::AllocateSystemCommon");
  memset_0(v4, 0, 286056 * v2);
  v5 = 0;
  if ( (int)v2 > 0 )
  {
    v6 = CgBallistics::ms_systemsArray;
    v7 = v4 + 264016;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 201, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      v8 = (CgBallistics *)(v7 - 264016);
      *((_QWORD *)v7 - 33002) = &BgBallistics<CgBallisticInstance>::`vftable';
      v9 = (CgBallisticInstance *)(v7 - 264008);
      v10 = 600i64;
      do
      {
        CgBallisticInstance::CgBallisticInstance(v9++);
        --v10;
      }
      while ( v10 );
      *((_QWORD *)v7 - 1) = 0i64;
      *(_QWORD *)v7 = 0i64;
      *((_QWORD *)v7 + 1) = 0i64;
      memset_0(v7 - 264008, 0, 0x40740ui64);
      v8->__vftable = (CgBallistics_vtbl *)&CgBallistics::`vftable';
      *((_DWORD *)v7 + 4) = v5;
      v11 = (CgBallisticInstance *)(v7 + 24);
      v12 = 50i64;
      do
      {
        CgBallisticInstance::CgBallisticInstance(v11++);
        --v12;
      }
      while ( v12 );
      *((_DWORD *)v7 + 5506) = 0;
      *((_DWORD *)v7 + 5507) = 0;
      *((_DWORD *)v7 + 5508) = 0;
      memset_0(v7 + 24, 0, 0x1B8ui64);
      v8->__vftable = (CgBallistics_vtbl *)&CgBallisticsMP::`vftable';
      *v6 = v8;
      ++v5;
      v7 += 286056;
      ++v6;
    }
    while ( v5 < (int)v2 );
  }
  LOBYTE(CgBallistics::ms_allocatedType) = 2;
  CgBallistics::ms_allocatedCount = v2;
}

/*
==============
CgBallistics::ClearSystemCommon<CgBallisticsMP>
==============
*/
void CgBallistics::ClearSystemCommon<CgBallisticsMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgBallistics::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgBallistics::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 242, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgBallistics::ClearSystemCommon: Trying to clear ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgBallistics::ms_allocatedCount )
  {
    LODWORD(v4) = CgBallistics::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 243, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgBallistics::ms_systemsArray[v1];
  (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
  memset_0(*v2, 0, 0x45D68ui64);
  CgBallisticsMP::CgBallisticsMP((CgBallisticsMP *)*v2, (const LocalClientNum_t)v1);
}

/*
==============
CgBallistics::FreeSystemCommon<CgBallisticsMP>
==============
*/
void CgBallistics::FreeSystemCommon<CgBallisticsMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgBallistics::ms_allocatedType;
  if ( (_BYTE)CgBallistics::ms_allocatedType )
  {
    if ( (_BYTE)CgBallistics::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgBallistics::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 215, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgBallistics::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgBallistics::ms_allocatedCount = 0;
    LOBYTE(CgBallistics::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgBallistics::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 219, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgBallistics::FreeSystemCommon: Trying to free ballistics system but no ballistics system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgBallistics::ms_allocatedCount - 1;
  if ( CgBallistics::ms_allocatedCount - 1 < 0 )
  {
    CgBallistics::ms_allocatedCount = 0;
    LOBYTE(CgBallistics::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgBallistics::ms_systemsArray[v1];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
      DebugWipe(*v2, 0x45D68ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgBallistics::ms_allocatedCount = 0;
    LOBYTE(CgBallistics::ms_allocatedType) = 0;
  }
}

/*
==============
CgBallistics::~CgBallistics
==============
*/
void CgBallistics::~CgBallistics(CgBallistics *this)
{
  this->__vftable = (CgBallistics_vtbl *)&BgBallistics<CgBallisticInstance>::`vftable';
}

/*
==============
CgBallistics::AllocateSystemCommon<CgBallisticsSP>
==============
*/
void CgBallistics::AllocateSystemCommon<CgBallisticsSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  char *v4; 
  int v5; 
  CgBallistics **v6; 
  char *v7; 
  CgBallistics *v8; 
  CgBallisticInstance *v9; 
  __int64 v10; 
  CgBallisticInstance *v11; 
  __int64 v12; 
  __int64 v13; 

  v2 = maxLocalClients;
  if ( (_BYTE)CgBallistics::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 190, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the ballistics system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)CgBallistics::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v2 > 2 )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 191, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v13, 0i64, 2) )
      __debugbreak();
  }
  v4 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 286056 * v2, 8ui64, "CgBallistics::AllocateSystemCommon");
  memset_0(v4, 0, 286056 * v2);
  v5 = 0;
  if ( (int)v2 > 0 )
  {
    v6 = CgBallistics::ms_systemsArray;
    v7 = v4 + 264016;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 201, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      v8 = (CgBallistics *)(v7 - 264016);
      *((_QWORD *)v7 - 33002) = &BgBallistics<CgBallisticInstance>::`vftable';
      v9 = (CgBallisticInstance *)(v7 - 264008);
      v10 = 600i64;
      do
      {
        CgBallisticInstance::CgBallisticInstance(v9++);
        --v10;
      }
      while ( v10 );
      *((_QWORD *)v7 - 1) = 0i64;
      *(_QWORD *)v7 = 0i64;
      *((_QWORD *)v7 + 1) = 0i64;
      memset_0(v7 - 264008, 0, 0x40740ui64);
      v8->__vftable = (CgBallistics_vtbl *)&CgBallistics::`vftable';
      *((_DWORD *)v7 + 4) = v5;
      v11 = (CgBallisticInstance *)(v7 + 24);
      v12 = 50i64;
      do
      {
        CgBallisticInstance::CgBallisticInstance(v11++);
        --v12;
      }
      while ( v12 );
      *((_DWORD *)v7 + 5506) = 0;
      *((_DWORD *)v7 + 5507) = 0;
      *((_DWORD *)v7 + 5508) = 0;
      memset_0(v7 + 24, 0, 0x1B8ui64);
      v8->__vftable = (CgBallistics_vtbl *)&CgBallisticsSP::`vftable';
      *v6 = v8;
      ++v5;
      v7 += 286056;
      ++v6;
    }
    while ( v5 < (int)v2 );
  }
  LOBYTE(CgBallistics::ms_allocatedType) = 1;
  CgBallistics::ms_allocatedCount = v2;
}

/*
==============
CgBallistics::FreeSystemCommon<CgBallisticsSP>
==============
*/
void CgBallistics::FreeSystemCommon<CgBallisticsSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgBallistics::ms_allocatedType;
  if ( (_BYTE)CgBallistics::ms_allocatedType )
  {
    if ( (_BYTE)CgBallistics::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgBallistics::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 215, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgBallistics::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgBallistics::ms_allocatedCount = 0;
    LOBYTE(CgBallistics::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgBallistics::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 219, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgBallistics::FreeSystemCommon: Trying to free ballistics system but no ballistics system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgBallistics::ms_allocatedCount - 1;
  if ( CgBallistics::ms_allocatedCount - 1 < 0 )
  {
    CgBallistics::ms_allocatedCount = 0;
    LOBYTE(CgBallistics::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgBallistics::ms_systemsArray[v1];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
      DebugWipe(*v2, 0x45D68ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgBallistics::ms_allocatedCount = 0;
    LOBYTE(CgBallistics::ms_allocatedType) = 0;
  }
}

/*
==============
CgBallistics::ClearSystemCommon<CgBallisticsSP>
==============
*/
void CgBallistics::ClearSystemCommon<CgBallisticsSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgBallistics::ms_allocatedType != HALF )
  {
    v6 = (unsigned __int8)CgBallistics::ms_allocatedType;
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 242, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgBallistics::ClearSystemCommon: Trying to clear ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgBallistics::ms_allocatedCount )
  {
    LODWORD(v4) = CgBallistics::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 243, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgBallistics::ms_systemsArray[v1];
  (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
  memset_0(*v2, 0, 0x45D68ui64);
  CgBallisticsSP::CgBallisticsSP((CgBallisticsSP *)*v2, (const LocalClientNum_t)v1);
}

