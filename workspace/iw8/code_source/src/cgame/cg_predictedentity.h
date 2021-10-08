/*
==============
CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemSP>
==============
*/

__int64 CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemSP>()
{
  return ??$FreeSystemCommon@VCgPredictedEntitySystemSP@@@CgPredictedEntitySystem@@KAXXZ();
}

/*
==============
CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemMP>
==============
*/

__int64 CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemMP>()
{
  return ??$FreeSystemCommon@VCgPredictedEntitySystemMP@@@CgPredictedEntitySystem@@KAXXZ();
}

/*
==============
CgPredictedEntity::CgPredictedEntity
==============
*/

void __fastcall CgPredictedEntity::CgPredictedEntity(CgPredictedEntity *this)
{
  ??0CgPredictedEntity@@QEAA@XZ(this);
}

/*
==============
CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemSP>
==============
*/

void __fastcall CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSystemCommon@VCgPredictedEntitySystemSP@@@CgPredictedEntitySystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemMP>
==============
*/

void __fastcall CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearSystemCommon@VCgPredictedEntitySystemMP@@@CgPredictedEntitySystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemMP>
==============
*/

void __fastcall CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSystemCommon@VCgPredictedEntitySystemMP@@@CgPredictedEntitySystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemSP>
==============
*/

void __fastcall CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearSystemCommon@VCgPredictedEntitySystemSP@@@CgPredictedEntitySystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemMP>
==============
*/
void CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  CgPredictedEntitySystem *v4; 
  int v5; 
  CgPredictedEntitySystem **v6; 
  CgPredictedEntity *m_entities; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 

  v2 = maxLocalClients;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType )
  {
    v10 = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 244, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the predicted entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v10) )
      __debugbreak();
  }
  if ( (unsigned int)v2 > 2 )
  {
    v11 = 2;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 245, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v9, 0i64, v11) )
      __debugbreak();
  }
  v4 = (CgPredictedEntitySystem *)Mem_HunkUser_AllocInternal(hunkUser, 29224 * v2, 8ui64, "CgPredictedEntitySystem::AllocateSystemCommon");
  memset_0(v4, 0, 29224 * v2);
  v5 = 0;
  if ( (int)v2 > 0 )
  {
    v6 = CgPredictedEntitySystem::ms_systemsArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 255, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      BgPredictedEntitySystem::BgPredictedEntitySystem(v4);
      v4->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystem::`vftable';
      v4->m_localClientNum = v5;
      v4->m_numEntities = 0;
      m_entities = v4->m_entities;
      v8 = 32i64;
      do
      {
        CgPredictedEntity::CgPredictedEntity(m_entities++);
        --v8;
      }
      while ( v8 );
      v4->m_firstFreeEntity = NULL;
      v4->m_lastFreeEntity = NULL;
      v4->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystemMP::`vftable';
      *v6 = v4;
      ++v5;
      ++v4;
      ++v6;
    }
    while ( v5 < (int)v2 );
  }
  LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 2;
  CgPredictedEntitySystem::ms_allocatedCount = v2;
}

/*
==============
CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemMP>
==============
*/
void CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgPredictedEntitySystem **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgPredictedEntitySystem::ClearSystemCommon: Trying to clear predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgPredictedEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgPredictedEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 298, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = &CgPredictedEntitySystem::ms_systemsArray[v1];
  CgPredictedEntitySystem::Shutdown(*v2);
  ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))(*v2)->~BgPredictedEntitySystem)(*v2, 0i64);
  memset_0(*v2, 0, sizeof(CgPredictedEntitySystem));
  CgPredictedEntitySystemMP::CgPredictedEntitySystemMP((CgPredictedEntitySystemMP *)*v2, (const LocalClientNum_t)v1);
}

/*
==============
CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemMP>
==============
*/
void CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemMP>()
{
  char v0; 
  int v1; 
  CgPredictedEntitySystem **v2; 
  int v3; 
  int v4; 

  v0 = CgPredictedEntitySystem::ms_allocatedType;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType )
  {
    if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 269, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgPredictedEntitySystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgPredictedEntitySystem::ms_allocatedCount = 0;
    LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgPredictedEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgPredictedEntitySystem::FreeSystemCommon: Trying to free predicted entity system but no predicted entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgPredictedEntitySystem::ms_allocatedCount - 1;
  if ( CgPredictedEntitySystem::ms_allocatedCount - 1 < 0 )
  {
    CgPredictedEntitySystem::ms_allocatedCount = 0;
    LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = &CgPredictedEntitySystem::ms_systemsArray[v1];
    do
    {
      CgPredictedEntitySystem::Shutdown(*v2);
      ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))(*v2)->~BgPredictedEntitySystem)(*v2, 0i64);
      DebugWipe(*v2, 0x7228ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgPredictedEntitySystem::ms_allocatedCount = 0;
    LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgPredictedEntity::CgPredictedEntity
==============
*/
void CgPredictedEntity::CgPredictedEntity(CgPredictedEntity *this)
{
  ;
}

/*
==============
CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemSP>
==============
*/
void CgPredictedEntitySystem::AllocateSystemCommon<CgPredictedEntitySystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  CgPredictedEntitySystem *v4; 
  int v5; 
  CgPredictedEntitySystem **v6; 
  CgPredictedEntity *m_entities; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 

  v2 = maxLocalClients;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType )
  {
    v10 = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 244, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the predicted entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v10) )
      __debugbreak();
  }
  if ( (unsigned int)v2 > 2 )
  {
    v11 = 2;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 245, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v9, 0i64, v11) )
      __debugbreak();
  }
  v4 = (CgPredictedEntitySystem *)Mem_HunkUser_AllocInternal(hunkUser, 29224 * v2, 8ui64, "CgPredictedEntitySystem::AllocateSystemCommon");
  memset_0(v4, 0, 29224 * v2);
  v5 = 0;
  if ( (int)v2 > 0 )
  {
    v6 = CgPredictedEntitySystem::ms_systemsArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 255, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      BgPredictedEntitySystem::BgPredictedEntitySystem(v4);
      v4->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystem::`vftable';
      v4->m_localClientNum = v5;
      v4->m_numEntities = 0;
      m_entities = v4->m_entities;
      v8 = 32i64;
      do
      {
        CgPredictedEntity::CgPredictedEntity(m_entities++);
        --v8;
      }
      while ( v8 );
      v4->m_firstFreeEntity = NULL;
      v4->m_lastFreeEntity = NULL;
      v4->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystemSP::`vftable';
      *v6 = v4;
      ++v5;
      ++v4;
      ++v6;
    }
    while ( v5 < (int)v2 );
  }
  LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 1;
  CgPredictedEntitySystem::ms_allocatedCount = v2;
}

/*
==============
CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemSP>
==============
*/
void CgPredictedEntitySystem::ClearSystemCommon<CgPredictedEntitySystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgPredictedEntitySystem **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType != HALF )
  {
    v6 = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgPredictedEntitySystem::ClearSystemCommon: Trying to clear predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgPredictedEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgPredictedEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 298, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = &CgPredictedEntitySystem::ms_systemsArray[v1];
  CgPredictedEntitySystem::Shutdown(*v2);
  ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))(*v2)->~BgPredictedEntitySystem)(*v2, 0i64);
  memset_0(*v2, 0, sizeof(CgPredictedEntitySystem));
  CgPredictedEntitySystemSP::CgPredictedEntitySystemSP((CgPredictedEntitySystemSP *)*v2, (const LocalClientNum_t)v1);
}

/*
==============
CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemSP>
==============
*/
void CgPredictedEntitySystem::FreeSystemCommon<CgPredictedEntitySystemSP>()
{
  char v0; 
  int v1; 
  CgPredictedEntitySystem **v2; 
  int v3; 
  int v4; 

  v0 = CgPredictedEntitySystem::ms_allocatedType;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType )
  {
    if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 269, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgPredictedEntitySystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgPredictedEntitySystem::ms_allocatedCount = 0;
    LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgPredictedEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgPredictedEntitySystem::FreeSystemCommon: Trying to free predicted entity system but no predicted entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgPredictedEntitySystem::ms_allocatedCount - 1;
  if ( CgPredictedEntitySystem::ms_allocatedCount - 1 < 0 )
  {
    CgPredictedEntitySystem::ms_allocatedCount = 0;
    LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = &CgPredictedEntitySystem::ms_systemsArray[v1];
    do
    {
      CgPredictedEntitySystem::Shutdown(*v2);
      ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))(*v2)->~BgPredictedEntitySystem)(*v2, 0i64);
      DebugWipe(*v2, 0x7228ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgPredictedEntitySystem::ms_allocatedCount = 0;
    LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
  }
}

