/*
==============
CgMissile::FreeSystemCommon<CgMissileMP>
==============
*/

__int64 CgMissile::FreeSystemCommon<CgMissileMP>()
{
  return ??$FreeSystemCommon@VCgMissileMP@@@CgMissile@@KAXXZ();
}

/*
==============
CgMissile::FreeSystemCommon<CgMissileSP>
==============
*/

__int64 CgMissile::FreeSystemCommon<CgMissileSP>()
{
  return ??$FreeSystemCommon@VCgMissileSP@@@CgMissile@@KAXXZ();
}

/*
==============
CgMissile::AllocateSystemCommon<CgMissileSP>
==============
*/

void __fastcall CgMissile::AllocateSystemCommon<CgMissileSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSystemCommon@VCgMissileSP@@@CgMissile@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgMissile::ClearSystemCommon<CgMissileSP>
==============
*/

void __fastcall CgMissile::ClearSystemCommon<CgMissileSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearSystemCommon@VCgMissileSP@@@CgMissile@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgMissile::~CgMissile
==============
*/

void __fastcall CgMissile::~CgMissile(CgMissile *this)
{
  ??1CgMissile@@MEAA@XZ(this);
}

/*
==============
CgMissile::ClearSystemCommon<CgMissileMP>
==============
*/

void __fastcall CgMissile::ClearSystemCommon<CgMissileMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearSystemCommon@VCgMissileMP@@@CgMissile@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgMissile::AllocateSystemCommon<CgMissileMP>
==============
*/

void __fastcall CgMissile::AllocateSystemCommon<CgMissileMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSystemCommon@VCgMissileMP@@@CgMissile@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgMissile::AllocateSystemCommon<CgMissileMP>
==============
*/
void CgMissile::AllocateSystemCommon<CgMissileMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgMissileMP *v5; 
  CgMissile **v6; 
  BgMissile *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgMissile::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgMissile::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the missile system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 298, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgMissileMP *)Mem_HunkUser_AllocInternal(hunkUser, 40 * v3, 8ui64, "CgMissile::AllocateSystemCommon");
  memset_0(v5, 0, 40 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgMissile::ms_systemsArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 308, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      CgMissileMP::CgMissileMP(v5, (const LocalClientNum_t)v4);
      *v6 = (CgMissile *)v7;
      BgMissile::SRand(v7, 0x89ABCDEF);
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgMissile::ms_allocatedType) = 2;
  CgMissile::ms_allocatedCount = v3;
}

/*
==============
CgMissile::ClearSystemCommon<CgMissileMP>
==============
*/
void CgMissile::ClearSystemCommon<CgMissileMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgMissileMP **v2; 
  CgMissileMP *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  if ( (_BYTE)CgMissile::ms_allocatedType != HALF_HALF )
  {
    v7 = (unsigned __int8)CgMissile::ms_allocatedType;
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 350, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgMissile::ClearSystemCommon: Trying to clear missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgMissile::ms_allocatedCount )
  {
    LODWORD(v5) = CgMissile::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 351, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (CgMissileMP **)&CgMissile::ms_systemsArray[v1];
  ((void (__fastcall *)(CgMissileMP *, _QWORD))(*v2)->~BgMissile)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->CgMissile::BgMissile::m_grenadeLinkToMovingPlatformUsesTag = 0i64;
  *(_QWORD *)&v3->CgMissile::BgMissile::m_javelinOffsetRight = 0i64;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  *(_QWORD *)&v3->CgMissile::m_changeEntityTypeOnImpact = 0i64;
  CgMissileMP::CgMissileMP(*v2, (const LocalClientNum_t)v1);
}

/*
==============
CgMissile::FreeSystemCommon<CgMissileMP>
==============
*/
void CgMissile::FreeSystemCommon<CgMissileMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgMissile::ms_allocatedType;
  if ( (_BYTE)CgMissile::ms_allocatedType )
  {
    if ( (_BYTE)CgMissile::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgMissile::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 323, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgMissile::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgMissile::ms_allocatedCount = 0;
    LOBYTE(CgMissile::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgMissile::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 327, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgMissile::FreeSystemCommon: Trying to free missile system but no missile system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgMissile::ms_allocatedCount - 1;
  if ( CgMissile::ms_allocatedCount - 1 < 0 )
  {
    CgMissile::ms_allocatedCount = 0;
    LOBYTE(CgMissile::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgMissile::ms_systemsArray[v1];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
      DebugWipe(*v2, 0x28ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgMissile::ms_allocatedCount = 0;
    LOBYTE(CgMissile::ms_allocatedType) = 0;
  }
}

/*
==============
CgMissile::~CgMissile
==============
*/
void CgMissile::~CgMissile(CgMissile *this)
{
  this->__vftable = (CgMissile_vtbl *)&BgMissile::`vftable';
}

/*
==============
CgMissile::AllocateSystemCommon<CgMissileSP>
==============
*/
void CgMissile::AllocateSystemCommon<CgMissileSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgMissileSP *v5; 
  CgMissile **v6; 
  BgMissile *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgMissile::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgMissile::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the missile system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 298, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgMissileSP *)Mem_HunkUser_AllocInternal(hunkUser, 40 * v3, 8ui64, "CgMissile::AllocateSystemCommon");
  memset_0(v5, 0, 40 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgMissile::ms_systemsArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 308, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      CgMissileSP::CgMissileSP(v5, (const LocalClientNum_t)v4);
      *v6 = (CgMissile *)v7;
      BgMissile::SRand(v7, 0x89ABCDEF);
      ++v4;
      ++v5;
      ++v6;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgMissile::ms_allocatedType) = 1;
  CgMissile::ms_allocatedCount = v3;
}

/*
==============
CgMissile::FreeSystemCommon<CgMissileSP>
==============
*/
void CgMissile::FreeSystemCommon<CgMissileSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgMissile::ms_allocatedType;
  if ( (_BYTE)CgMissile::ms_allocatedType )
  {
    if ( (_BYTE)CgMissile::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgMissile::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 323, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgMissile::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgMissile::ms_allocatedCount = 0;
    LOBYTE(CgMissile::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgMissile::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 327, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgMissile::FreeSystemCommon: Trying to free missile system but no missile system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgMissile::ms_allocatedCount - 1;
  if ( CgMissile::ms_allocatedCount - 1 < 0 )
  {
    CgMissile::ms_allocatedCount = 0;
    LOBYTE(CgMissile::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgMissile::ms_systemsArray[v1];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
      DebugWipe(*v2, 0x28ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgMissile::ms_allocatedCount = 0;
    LOBYTE(CgMissile::ms_allocatedType) = 0;
  }
}

/*
==============
CgMissile::ClearSystemCommon<CgMissileSP>
==============
*/
void CgMissile::ClearSystemCommon<CgMissileSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgMissileSP **v2; 
  CgMissileSP *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  if ( (_BYTE)CgMissile::ms_allocatedType != HALF )
  {
    v7 = (unsigned __int8)CgMissile::ms_allocatedType;
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 350, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgMissile::ClearSystemCommon: Trying to clear missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgMissile::ms_allocatedCount )
  {
    LODWORD(v5) = CgMissile::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 351, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (CgMissileSP **)&CgMissile::ms_systemsArray[v1];
  ((void (__fastcall *)(CgMissileSP *, _QWORD))(*v2)->~BgMissile)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->CgMissile::BgMissile::m_grenadeLinkToMovingPlatformUsesTag = 0i64;
  *(_QWORD *)&v3->CgMissile::BgMissile::m_javelinOffsetRight = 0i64;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  *(_QWORD *)&v3->CgMissile::m_changeEntityTypeOnImpact = 0i64;
  CgMissileSP::CgMissileSP(*v2, (const LocalClientNum_t)v1);
}

