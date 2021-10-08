/*
==============
CgAntiLag::AllocateMemory<CgAntiLagMP>
==============
*/

void __fastcall CgAntiLag::AllocateMemory<CgAntiLagMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateMemory@VCgAntiLagMP@@@CgAntiLag@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgAntiLag::FreeMemory<CgAntiLagSP>
==============
*/

__int64 CgAntiLag::FreeMemory<CgAntiLagSP>()
{
  return ??$FreeMemory@VCgAntiLagSP@@@CgAntiLag@@KAXXZ();
}

/*
==============
CgAntiLag::ClearMemory<CgAntiLagSP>
==============
*/

void __fastcall CgAntiLag::ClearMemory<CgAntiLagSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearMemory@VCgAntiLagSP@@@CgAntiLag@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLag::OnlyUseWarningsForMarkAssert
==============
*/

bool __fastcall CgAntiLag::OnlyUseWarningsForMarkAssert(CgAntiLag *this)
{
  return ?OnlyUseWarningsForMarkAssert@CgAntiLag@@MEBA_NXZ(this);
}

/*
==============
CgAntiLag::AllocateMemory<CgAntiLagSP>
==============
*/

void __fastcall CgAntiLag::AllocateMemory<CgAntiLagSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateMemory@VCgAntiLagSP@@@CgAntiLag@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgAntiLag::FreeMemory<CgAntiLagMP>
==============
*/

__int64 CgAntiLag::FreeMemory<CgAntiLagMP>()
{
  return ??$FreeMemory@VCgAntiLagMP@@@CgAntiLag@@KAXXZ();
}

/*
==============
CgAntiLag::ClearMemory<CgAntiLagMP>
==============
*/

void __fastcall CgAntiLag::ClearMemory<CgAntiLagMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearMemory@VCgAntiLagMP@@@CgAntiLag@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLag::OnlyUseWarningsForMarkAssert
==============
*/
char CgAntiLag::OnlyUseWarningsForMarkAssert(CgAntiLag *this)
{
  return 1;
}

/*
==============
CgAntiLag::AllocateMemory<CgAntiLagMP>
==============
*/
void CgAntiLag::AllocateMemory<CgAntiLagMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  char *v3; 
  int v4; 
  CgAntiLag **v5; 
  CgAntiLagFrameHistoryMP *v6; 
  __int64 v7; 
  __int64 v8; 

  v8 = -2i64;
  v3 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 2427768 * maxLocalClients, 8ui64, "CgAntiLag::AllocateMemory");
  v4 = 0;
  if ( maxLocalClients > 0 )
  {
    v5 = CgAntiLag::ms_instance;
    do
    {
      if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.h", 107, ASSERT_TYPE_ASSERT, "(!ms_instance[index])", (const char *)&queryFormat, "!ms_instance[index]", v8) )
        __debugbreak();
      CgAntiLag::CgAntiLag((CgAntiLag *)v3, v4);
      *(_QWORD *)v3 = &CgAntiLagMP::`vftable';
      v6 = (CgAntiLagFrameHistoryMP *)(v3 + 152568);
      v7 = 60i64;
      do
      {
        CgAntiLagFrameHistoryMP::CgAntiLagFrameHistoryMP(v6++);
        --v7;
      }
      while ( v7 );
      BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistoryMP,BgAntiLagRewindScene>((BgAntiLag *)v3, (CgAntiLagFrameHistoryMP *)(v3 + 152568), 0x3Cu, (BgAntiLagRewindScene *)(v3 + 46040));
      *v5 = (CgAntiLag *)v3;
      ++v4;
      v3 += 2427768;
      ++v5;
    }
    while ( v4 < maxLocalClients );
  }
  LOBYTE(CgAntiLag::ms_allocatedType) = 2;
  CgAntiLag::ms_allocatedCount = maxLocalClients;
}

/*
==============
CgAntiLag::ClearMemory<CgAntiLagMP>
==============
*/
void CgAntiLag::ClearMemory<CgAntiLagMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  int v4; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)CgAntiLag::ms_allocatedCount )
  {
    v4 = CgAntiLag::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.h", 136, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgAntiLag::ms_instance[v1];
  (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
  memset_0(*v2, 0, 0x250B78ui64);
  CgAntiLagMP::CgAntiLagMP((CgAntiLagMP *)*v2, v1);
}

/*
==============
CgAntiLag::FreeMemory<CgAntiLagMP>
==============
*/
__int64 CgAntiLag::FreeMemory<CgAntiLagMP>()
{
  __int64 result; 
  int v1; 
  void **v2; 

  result = (unsigned int)CgAntiLag::ms_allocatedCount;
  v1 = 0;
  if ( CgAntiLag::ms_allocatedCount > 0 )
  {
    v2 = (void **)CgAntiLag::ms_instance;
    do
    {
      if ( *v2 )
      {
        (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
        DebugWipe(*v2, 0x253F8ui64);
        result = (unsigned int)CgAntiLag::ms_allocatedCount;
        *v2 = NULL;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < (int)result );
  }
  LOBYTE(CgAntiLag::ms_allocatedType) = 0;
  CgAntiLag::ms_allocatedCount = 0;
  return result;
}

/*
==============
CgAntiLag::AllocateMemory<CgAntiLagSP>
==============
*/
void CgAntiLag::AllocateMemory<CgAntiLagSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  char *v3; 
  int v4; 
  CgAntiLag **v5; 
  CgAntiLagFrameHistorySP *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v12 = -2i64;
  v3 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 4227768 * maxLocalClients, 8ui64, "CgAntiLag::AllocateMemory");
  v4 = 0;
  if ( maxLocalClients > 0 )
  {
    v5 = CgAntiLag::ms_instance;
    do
    {
      if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.h", 107, ASSERT_TYPE_ASSERT, "(!ms_instance[index])", (const char *)&queryFormat, "!ms_instance[index]", v12) )
        __debugbreak();
      CgAntiLag::CgAntiLag((CgAntiLag *)v3, v4);
      *(_QWORD *)v3 = &CgAntiLagSP::`vftable';
      v6 = (CgAntiLagFrameHistorySP *)(v3 + 152568);
      v7 = 60i64;
      do
      {
        CgAntiLagFrameHistorySP::CgAntiLagFrameHistorySP(v6++);
        --v7;
      }
      while ( v7 );
      *((_QWORD *)v3 + 3276) = 0i64;
      *((_DWORD *)v3 + 6554) = 0;
      *((_DWORD *)v3 + 6550) = 60;
      v8 = 0;
      do
      {
        memset_0(&v3[67920 * v8 + 152568], 0, 0x10950ui64);
        *(_QWORD *)&v3[8 * v8 + 24600] = &v3[67920 * v8 + 152568];
        v9 = 0i64;
        v10 = (__int64)&v3[67920 * v8 + 184488];
        v11 = 300i64;
        do
        {
          *(_QWORD *)(v9 + *(_QWORD *)&v3[8 * v8 + 24600]) = v10;
          *(_QWORD *)(v9 + *(_QWORD *)&v3[8 * v8 + 24600] + 8) = v10 + 60;
          v10 += 120i64;
          v9 += 16i64;
          --v11;
        }
        while ( v11 );
        *(_DWORD *)(*(_QWORD *)&v3[8 * v8++ + 24600] + 4804i64) = 600;
      }
      while ( v8 < *((_DWORD *)v3 + 6550) );
      *((_QWORD *)v3 + 1) = v3 + 46040;
      *v5 = (CgAntiLag *)v3;
      ++v4;
      v3 += 4227768;
      ++v5;
    }
    while ( v4 < maxLocalClients );
  }
  LOBYTE(CgAntiLag::ms_allocatedType) = 1;
  CgAntiLag::ms_allocatedCount = maxLocalClients;
}

/*
==============
CgAntiLag::ClearMemory<CgAntiLagSP>
==============
*/
void CgAntiLag::ClearMemory<CgAntiLagSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  int v4; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)CgAntiLag::ms_allocatedCount )
  {
    v4 = CgAntiLag::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.h", 136, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgAntiLag::ms_instance[v1];
  (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
  memset_0(*v2, 0, 0x4082B8ui64);
  CgAntiLagSP::CgAntiLagSP((CgAntiLagSP *)*v2, v1);
}

/*
==============
CgAntiLag::FreeMemory<CgAntiLagSP>
==============
*/
__int64 CgAntiLag::FreeMemory<CgAntiLagSP>()
{
  __int64 result; 
  int v1; 
  void **v2; 

  result = (unsigned int)CgAntiLag::ms_allocatedCount;
  v1 = 0;
  if ( CgAntiLag::ms_allocatedCount > 0 )
  {
    v2 = (void **)CgAntiLag::ms_instance;
    do
    {
      if ( *v2 )
      {
        (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
        DebugWipe(*v2, 0x253F8ui64);
        result = (unsigned int)CgAntiLag::ms_allocatedCount;
        *v2 = NULL;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < (int)result );
  }
  LOBYTE(CgAntiLag::ms_allocatedType) = 0;
  CgAntiLag::ms_allocatedCount = 0;
  return result;
}

