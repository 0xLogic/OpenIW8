/*
==============
CgTargetAssist::ClearInstanceCommon<CgTargetAssistSP>
==============
*/

void __fastcall CgTargetAssist::ClearInstanceCommon<CgTargetAssistSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearInstanceCommon@VCgTargetAssistSP@@@CgTargetAssist@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgTargetAssist::FreeInstanceCommon<CgTargetAssistSP>
==============
*/

__int64 CgTargetAssist::FreeInstanceCommon<CgTargetAssistSP>()
{
  return ??$FreeInstanceCommon@VCgTargetAssistSP@@@CgTargetAssist@@KAXXZ();
}

/*
==============
CgTargetAssist::FreeInstanceCommon<CgTargetAssistMP>
==============
*/

__int64 CgTargetAssist::FreeInstanceCommon<CgTargetAssistMP>()
{
  return ??$FreeInstanceCommon@VCgTargetAssistMP@@@CgTargetAssist@@KAXXZ();
}

/*
==============
CgTargetAssist::GetInstanceCommon<CgTargetAssistMP>
==============
*/

CgTargetAssistMP *__fastcall CgTargetAssist::GetInstanceCommon<CgTargetAssistMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetInstanceCommon@VCgTargetAssistMP@@@CgTargetAssist@@KAPEAVCgTargetAssistMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgTargetAssist::~CgTargetAssist
==============
*/

void __fastcall CgTargetAssist::~CgTargetAssist(CgTargetAssist *this)
{
  ??1CgTargetAssist@@MEAA@XZ(this);
}

/*
==============
CgTargetAssist::ClearInstanceCommon<CgTargetAssistMP>
==============
*/

void __fastcall CgTargetAssist::ClearInstanceCommon<CgTargetAssistMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearInstanceCommon@VCgTargetAssistMP@@@CgTargetAssist@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgTargetAssist::GetInstanceCommon<CgTargetAssistSP>
==============
*/

CgTargetAssistSP *__fastcall CgTargetAssist::GetInstanceCommon<CgTargetAssistSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetInstanceCommon@VCgTargetAssistSP@@@CgTargetAssist@@KAPEAVCgTargetAssistSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgTargetAssist::AllocateInstanceCommon<CgTargetAssistMP>
==============
*/

void __fastcall CgTargetAssist::AllocateInstanceCommon<CgTargetAssistMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateInstanceCommon@VCgTargetAssistMP@@@CgTargetAssist@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgTargetAssist::AllocateInstanceCommon<CgTargetAssistSP>
==============
*/

void __fastcall CgTargetAssist::AllocateInstanceCommon<CgTargetAssistSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateInstanceCommon@VCgTargetAssistSP@@@CgTargetAssist@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgTargetAssist::GetInstanceCommon<CgTargetAssistMP>
==============
*/
CgTargetAssist *CgTargetAssist::GetInstanceCommon<CgTargetAssistMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 86, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to access the target assist system for localClientNum %d but the target assist system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", localClientNum, 2, (unsigned __int8)CgTargetAssist::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgTargetAssist::ms_allocatedCount )
  {
    LODWORD(v4) = CgTargetAssist::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgTargetAssist::ms_instances[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 88, ASSERT_TYPE_ASSERT, "(ms_instances[localClientNum])", "%s\n\tTrying to access unallocated target assist system for localClientNum %d\n", "ms_instances[localClientNum]", v4) )
      __debugbreak();
  }
  return CgTargetAssist::ms_instances[v1];
}

/*
==============
CgTargetAssist::AllocateInstanceCommon<CgTargetAssistMP>
==============
*/
void CgTargetAssist::AllocateInstanceCommon<CgTargetAssistMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgTargetAssistMP *v5; 
  CgTargetAssist **v6; 
  CgTargetAssist *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 97, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the target assist system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 98, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgTargetAssistMP *)Mem_HunkUser_AllocInternal(hunkUser, 2432 * v3, 8ui64, "CgTargetAssist::AllocateInstanceCommon");
  memset_0(v5, 0, 2432 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgTargetAssist::ms_instances;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 108, ASSERT_TYPE_ASSERT, "(!ms_instances[localClientIndex])", (const char *)&queryFormat, "!ms_instances[localClientIndex]") )
        __debugbreak();
      CgTargetAssistMP::CgTargetAssistMP(v5, (const LocalClientNum_t)v4);
      *v6 = v7;
      ++v4;
      ++v6;
      ++v5;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgTargetAssist::ms_allocatedType) = 2;
  CgTargetAssist::ms_allocatedCount = v3;
}

/*
==============
CgTargetAssist::ClearInstanceCommon<CgTargetAssistMP>
==============
*/
void CgTargetAssist::ClearInstanceCommon<CgTargetAssistMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 147, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tCgTargetAssist::ClearInstanceCommon: Trying to clear target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgTargetAssist::ms_allocatedCount )
  {
    LODWORD(v4) = CgTargetAssist::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgTargetAssist::ms_instances[v1];
  (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
  memset_0(*v2, 0, 0x980ui64);
  CgTargetAssistMP::CgTargetAssistMP((CgTargetAssistMP *)*v2, (const LocalClientNum_t)v1);
}

/*
==============
CgTargetAssist::FreeInstanceCommon<CgTargetAssistMP>
==============
*/
void CgTargetAssist::FreeInstanceCommon<CgTargetAssistMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgTargetAssist::ms_allocatedType;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType )
  {
    if ( (_BYTE)CgTargetAssist::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 120, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to free target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgTargetAssist::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgTargetAssist::ms_allocatedCount = 0;
    LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgTargetAssist::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 124, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgTargetAssist::FreeInstanceCommon: Trying to free single-player target assist system but no target assist system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgTargetAssist::ms_allocatedCount - 1;
  if ( CgTargetAssist::ms_allocatedCount - 1 < 0 )
  {
    CgTargetAssist::ms_allocatedCount = 0;
    LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgTargetAssist::ms_instances[v1];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
      DebugWipe(*v2, 0x980ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgTargetAssist::ms_allocatedCount = 0;
    LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
  }
}

/*
==============
CgTargetAssist::~CgTargetAssist
==============
*/
void CgTargetAssist::~CgTargetAssist(CgTargetAssist *this)
{
  this->__vftable = (CgTargetAssist_vtbl *)&BgTargetAssist::`vftable';
}

/*
==============
CgTargetAssist::GetInstanceCommon<CgTargetAssistSP>
==============
*/
CgTargetAssist *CgTargetAssist::GetInstanceCommon<CgTargetAssistSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 86, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to access the target assist system for localClientNum %d but the target assist system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", localClientNum, 1, (unsigned __int8)CgTargetAssist::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgTargetAssist::ms_allocatedCount )
  {
    LODWORD(v4) = CgTargetAssist::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgTargetAssist::ms_instances[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 88, ASSERT_TYPE_ASSERT, "(ms_instances[localClientNum])", "%s\n\tTrying to access unallocated target assist system for localClientNum %d\n", "ms_instances[localClientNum]", v4) )
      __debugbreak();
  }
  return CgTargetAssist::ms_instances[v1];
}

/*
==============
CgTargetAssist::AllocateInstanceCommon<CgTargetAssistSP>
==============
*/
void CgTargetAssist::AllocateInstanceCommon<CgTargetAssistSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgTargetAssistSP *v5; 
  CgTargetAssist **v6; 
  CgTargetAssist *v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType )
  {
    v9 = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 97, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the target assist system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v9) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v10 = 2;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 98, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v8, 0i64, v10) )
      __debugbreak();
  }
  v5 = (CgTargetAssistSP *)Mem_HunkUser_AllocInternal(hunkUser, 824 * v3, 8ui64, "CgTargetAssist::AllocateInstanceCommon");
  memset_0(v5, 0, 824 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgTargetAssist::ms_instances;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 108, ASSERT_TYPE_ASSERT, "(!ms_instances[localClientIndex])", (const char *)&queryFormat, "!ms_instances[localClientIndex]") )
        __debugbreak();
      CgTargetAssistSP::CgTargetAssistSP(v5, (const LocalClientNum_t)v4);
      *v6 = v7;
      ++v4;
      ++v6;
      ++v5;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgTargetAssist::ms_allocatedType) = 1;
  CgTargetAssist::ms_allocatedCount = v3;
}

/*
==============
CgTargetAssist::FreeInstanceCommon<CgTargetAssistSP>
==============
*/
void CgTargetAssist::FreeInstanceCommon<CgTargetAssistSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgTargetAssist::ms_allocatedType;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType )
  {
    if ( (_BYTE)CgTargetAssist::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 120, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to free target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgTargetAssist::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgTargetAssist::ms_allocatedCount = 0;
    LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgTargetAssist::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 124, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgTargetAssist::FreeInstanceCommon: Trying to free single-player target assist system but no target assist system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgTargetAssist::ms_allocatedCount - 1;
  if ( CgTargetAssist::ms_allocatedCount - 1 < 0 )
  {
    CgTargetAssist::ms_allocatedCount = 0;
    LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgTargetAssist::ms_instances[v1];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
      DebugWipe(*v2, 0x338ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgTargetAssist::ms_allocatedCount = 0;
    LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
  }
}

/*
==============
CgTargetAssist::ClearInstanceCommon<CgTargetAssistSP>
==============
*/
void CgTargetAssist::ClearInstanceCommon<CgTargetAssistSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF )
  {
    v6 = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    v5 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 147, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tCgTargetAssist::ClearInstanceCommon: Trying to clear target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgTargetAssist::ms_allocatedCount )
  {
    LODWORD(v4) = CgTargetAssist::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgTargetAssist::ms_instances[v1];
  (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
  memset_0(*v2, 0, 0x338ui64);
  CgTargetAssistSP::CgTargetAssistSP((CgTargetAssistSP *)*v2, (const LocalClientNum_t)v1);
}

