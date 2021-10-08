/*
==============
CgAntiLagSP::Free
==============
*/

void CgAntiLagSP::Free(void)
{
  ?Free@CgAntiLagSP@@SAXXZ();
}

/*
==============
CgAntiLagSP::Clear
==============
*/

void __fastcall CgAntiLagSP::Clear(const LocalClientNum_t localClientNum)
{
  ?Clear@CgAntiLagSP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLagSP::Allocate
==============
*/

void __fastcall CgAntiLagSP::Allocate(HunkUser *hunkUser, const int maxLocalClients)
{
  ?Allocate@CgAntiLagSP@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgAntiLagSP::CgAntiLagSP
==============
*/

void __fastcall CgAntiLagSP::CgAntiLagSP(CgAntiLagSP *this, const int localClientNum)
{
  ??0CgAntiLagSP@@QEAA@H@Z(this, localClientNum);
}

/*
==============
CgAntiLagSP::CgAntiLagSP
==============
*/
void CgAntiLagSP::CgAntiLagSP(CgAntiLagSP *this, const int localClientNum)
{
  CgAntiLagFrameHistorySP *m_antiLagHistoryFrames; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  BgAntiLagEntityHistory *m_entDataList; 
  __int64 v8; 

  CgAntiLag::CgAntiLag(this, localClientNum);
  this->__vftable = (CgAntiLagSP_vtbl *)&CgAntiLagSP::`vftable';
  m_antiLagHistoryFrames = this->m_antiLagHistoryFrames;
  v4 = 60i64;
  do
  {
    CgAntiLagFrameHistorySP::CgAntiLagFrameHistorySP(m_antiLagHistoryFrames++);
    --v4;
  }
  while ( v4 );
  *(_QWORD *)&this->m_sceneAntiLagRefCount = 0i64;
  this->m_sceneAntiLagTime = 0;
  this->m_antiLagHistorySize = 60;
  v5 = 0i64;
  do
  {
    memset_0(&this->m_antiLagHistoryFrames[(unsigned int)v5], 0, sizeof(this->m_antiLagHistoryFrames[(unsigned int)v5]));
    this->m_antiLagHistory[v5] = &this->m_antiLagHistoryFrames[(unsigned int)v5];
    v6 = 0i64;
    m_entDataList = this->m_antiLagHistoryFrames[(unsigned int)v5].m_entDataList;
    v8 = 300i64;
    do
    {
      this->m_antiLagHistory[v5]->entityDataStandard.m_data[v6] = m_entDataList;
      this->m_antiLagHistory[v5]->entityDataStandard.m_data[v6 + 1] = m_entDataList + 1;
      m_entDataList += 2;
      v6 += 2i64;
      --v8;
    }
    while ( v8 );
    this->m_antiLagHistory[v5]->entityDataStandard.m_maxSize = 600;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < this->m_antiLagHistorySize );
  this->m_rewindScene = &this->m_rewindSceneInst;
}

/*
==============
CgAntiLagSP::Allocate
==============
*/
void CgAntiLagSP::Allocate(HunkUser *hunkUser, const int maxLocalClients)
{
  int v3; 
  CgAntiLagSP *v4; 
  CgAntiLag **v5; 
  CgAntiLag *v6; 

  v3 = 0;
  v4 = (CgAntiLagSP *)Mem_HunkUser_AllocInternal(hunkUser, 4227768 * maxLocalClients, 8ui64, "CgAntiLag::AllocateMemory");
  if ( maxLocalClients > 0 )
  {
    v5 = CgAntiLag::ms_instance;
    do
    {
      if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.h", 107, ASSERT_TYPE_ASSERT, "(!ms_instance[index])", (const char *)&queryFormat, "!ms_instance[index]") )
        __debugbreak();
      CgAntiLagSP::CgAntiLagSP(v4, v3);
      *v5 = v6;
      ++v3;
      ++v5;
      ++v4;
    }
    while ( v3 < maxLocalClients );
  }
  LOBYTE(CgAntiLag::ms_allocatedType) = 1;
  CgAntiLag::ms_allocatedCount = maxLocalClients;
}

/*
==============
CgAntiLagSP::Clear
==============
*/
void CgAntiLagSP::Clear(const LocalClientNum_t localClientNum)
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
CgAntiLagSP::Free
==============
*/
void CgAntiLagSP::Free(void)
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

