/*
==============
CgPlayerTraceInfo::StartTracePerfProbe
==============
*/

void __fastcall CgPlayerTraceInfo::StartTracePerfProbe(CgPlayerTraceInfo *this)
{
  ?StartTracePerfProbe@CgPlayerTraceInfo@@UEBAXXZ(this);
}

/*
==============
CgPlayerTraceInfo::GetPlayerTraceInfo
==============
*/

CgPlayerTraceInfo *__fastcall CgPlayerTraceInfo::GetPlayerTraceInfo(LocalClientNum_t localClientNum)
{
  return ?GetPlayerTraceInfo@CgPlayerTraceInfo@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPlayerTraceInfo::ClearCage
==============
*/

void __fastcall CgPlayerTraceInfo::ClearCage(LocalClientNum_t localClientNum)
{
  ?ClearCage@CgPlayerTraceInfo@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPlayerTraceInfo::GetCage
==============
*/

BG_PMove_Cage *__fastcall CgPlayerTraceInfo::GetCage(CgPlayerTraceInfo *this)
{
  return ?GetCage@CgPlayerTraceInfo@@UEBAPEAUBG_PMove_Cage@@XZ(this);
}

/*
==============
CgPlayerTraceInfo::EndTracePerfProbe
==============
*/

void __fastcall CgPlayerTraceInfo::EndTracePerfProbe(CgPlayerTraceInfo *this)
{
  ?EndTracePerfProbe@CgPlayerTraceInfo@@UEBAXXZ(this);
}

/*
==============
CgPlayerTraceInfo::Init
==============
*/

void __fastcall CgPlayerTraceInfo::Init(LocalClientNum_t localClientNum)
{
  ?Init@CgPlayerTraceInfo@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPlayerTraceInfo::SortMoverList
==============
*/

void __fastcall CgPlayerTraceInfo::SortMoverList(CgPlayerTraceInfo *this, int count, int *indexList, const float *distList)
{
  ?SortMoverList@CgPlayerTraceInfo@@MEAAXHPEAHPEBM@Z(this, count, indexList, distList);
}

/*
==============
CgPlayerTraceInfo::GetCage
==============
*/
BG_PMove_Cage *CgPlayerTraceInfo::GetCage(CgPlayerTraceInfo *this)
{
  __int64 m_localClientNum; 

  m_localClientNum = this->m_localClientNum;
  if ( (unsigned int)m_localClientNum >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", this->m_localClientNum, 2) )
    __debugbreak();
  return &g_cgPlayerTraceInfo[m_localClientNum].m_cage;
}

/*
==============
CgPlayerTraceInfo::StartTracePerfProbe
==============
*/
void CgPlayerTraceInfo::StartTracePerfProbe(CgPlayerTraceInfo *this)
{
  PhysPerfTrack_PMoveClientTraceTimeStart();
  PhysPerfTrack_PMoveClientTraceCountAdd();
}

/*
==============
CgPlayerTraceInfo::EndTracePerfProbe
==============
*/

void __fastcall CgPlayerTraceInfo::EndTracePerfProbe(CgPlayerTraceInfo *this)
{
  PhysPerfTrack_PMoveClientTraceTimeStop();
}

/*
==============
CgPlayerTraceInfo::SortMoverList
==============
*/
void CgPlayerTraceInfo::SortMoverList(CgPlayerTraceInfo *this, int count, int *indexList, const float *distList)
{
  size_t v4; 

  v4 = count;
  if ( !indexList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace.cpp", 81, ASSERT_TYPE_ASSERT, "(indexList)", (const char *)&queryFormat, "indexList") )
    __debugbreak();
  if ( !distList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace.cpp", 82, ASSERT_TYPE_ASSERT, "(distList)", (const char *)&queryFormat, "distList") )
    __debugbreak();
  g_cgAntilagSortDistanceBuffer = distList;
  qsort(indexList, v4, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CG_MoverSortCompare);
  g_cgAntilagSortDistanceBuffer = NULL;
}

/*
==============
CG_MoverSortCompare
==============
*/
__int64 CG_MoverSortCompare(const void *f1, const void *f2)
{
  __int64 result; 

  result = 1i64;
  if ( g_cgAntilagSortDistanceBuffer[*(int *)f1] < g_cgAntilagSortDistanceBuffer[*(int *)f2] )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
CgPlayerTraceInfo::ClearCage
==============
*/
void CgPlayerTraceInfo::ClearCage(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  BgPlayerTraceInfo::ClearCage(&g_cgPlayerTraceInfo[v1].m_cage);
}

/*
==============
CgPlayerTraceInfo::GetPlayerTraceInfo
==============
*/
CgPlayerTraceInfo *CgPlayerTraceInfo::GetPlayerTraceInfo(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace.cpp", 23, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &g_cgPlayerTraceInfo[v1];
}

/*
==============
CgPlayerTraceInfo::Init
==============
*/
void CgPlayerTraceInfo::Init(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v4) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v4) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace.cpp", 32, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v4) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace.cpp", 23, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  BgPlayerTraceInfo::SetPlayerInfo(&g_cgPlayerTraceInfo[v1], (LocalClientNum_t)v1, &v2->predictedPlayerState, &v2->m_bgHandler);
  BgTraceBase::ResetBaseInfo(&g_cgPlayerTraceInfo[v1].BgTraceBase, (Physics_WorldId)(3 * v1 + 2), 33636369, v2->predictedPlayerState.clientNum);
}

