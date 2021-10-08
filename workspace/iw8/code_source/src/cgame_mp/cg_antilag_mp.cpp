/*
==============
CgAntiLagMP::CgAntiLagMP
==============
*/

void __fastcall CgAntiLagMP::CgAntiLagMP(CgAntiLagMP *this, const int localClientNum)
{
  ??0CgAntiLagMP@@QEAA@H@Z(this, localClientNum);
}

/*
==============
CgAntiLagMP::GetHistoryBufferForMigration
==============
*/

unsigned __int8 *__fastcall CgAntiLagMP::GetHistoryBufferForMigration(CgAntiLagMP *this, unsigned int *outBufferSize)
{
  return ?GetHistoryBufferForMigration@CgAntiLagMP@@QEAAPEAEPEAI@Z(this, outBufferSize);
}

/*
==============
CgAntiLagMP::Free
==============
*/

void CgAntiLagMP::Free(void)
{
  ?Free@CgAntiLagMP@@SAXXZ();
}

/*
==============
CgAntiLagMP::Clear
==============
*/

void __fastcall CgAntiLagMP::Clear(const LocalClientNum_t localClientNum)
{
  ?Clear@CgAntiLagMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLagMP::Allocate
==============
*/

void __fastcall CgAntiLagMP::Allocate(HunkUser *hunkUser, const int maxLocalClients)
{
  ?Allocate@CgAntiLagMP@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgAntiLagMP::CgAntiLagMP
==============
*/
void CgAntiLagMP::CgAntiLagMP(CgAntiLagMP *this, const int localClientNum)
{
  CgAntiLagFrameHistoryMP *m_antiLagHistoryFrames; 
  __int64 v4; 

  CgAntiLag::CgAntiLag(this, localClientNum);
  this->__vftable = (CgAntiLagMP_vtbl *)&CgAntiLagMP::`vftable';
  m_antiLagHistoryFrames = this->m_antiLagHistoryFrames;
  v4 = 60i64;
  do
  {
    CgAntiLagFrameHistoryMP::CgAntiLagFrameHistoryMP(m_antiLagHistoryFrames++);
    --v4;
  }
  while ( v4 );
  BgAntiLag::ConnectDataCommon<CgAntiLagFrameHistoryMP,BgAntiLagRewindScene>(this, this->m_antiLagHistoryFrames, 0x3Cu, &this->m_rewindSceneInst);
}

/*
==============
CgAntiLagMP::Allocate
==============
*/
void CgAntiLagMP::Allocate(HunkUser *hunkUser, const int maxLocalClients)
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
CgAntiLagMP::Clear
==============
*/
void CgAntiLagMP::Clear(const LocalClientNum_t localClientNum)
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
CgAntiLagMP::Free
==============
*/
void CgAntiLagMP::Free(void)
{
  int v0; 
  int v1; 
  void **v2; 

  v0 = CgAntiLag::ms_allocatedCount;
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
        v0 = CgAntiLag::ms_allocatedCount;
        *v2 = NULL;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  LOBYTE(CgAntiLag::ms_allocatedType) = 0;
  CgAntiLag::ms_allocatedCount = 0;
}

/*
==============
CgAntiLagMP::GetHistoryBufferForMigration
==============
*/
CgAntiLagFrameHistoryMP *CgAntiLagMP::GetHistoryBufferForMigration(CgAntiLagMP *this, unsigned int *outBufferSize)
{
  CgAntiLagFrameHistoryMP *result; 

  if ( !outBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_antilag_mp.cpp", 46, ASSERT_TYPE_ASSERT, "(outBufferSize)", (const char *)&queryFormat, "outBufferSize") )
    __debugbreak();
  this->m_disableForMigration = 1;
  DebugWipe(this->m_antiLagHistory, 0x640ui64);
  *(_QWORD *)&this->m_antiLagHistorySize = 0i64;
  result = this->m_antiLagHistoryFrames;
  *outBufferSize = 2275200;
  return result;
}

