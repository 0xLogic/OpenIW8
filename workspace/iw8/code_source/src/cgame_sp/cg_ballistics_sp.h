/*
==============
CgBallisticsSP::CgBallisticsSP
==============
*/

void __fastcall CgBallisticsSP::CgBallisticsSP(CgBallisticsSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgBallisticsSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgBallisticsSP::CgBallisticsSP
==============
*/
void CgBallisticsSP::CgBallisticsSP(CgBallisticsSP *this, const LocalClientNum_t localClientNum)
{
  CgBallisticInstance *m_ballisticInstances; 
  __int64 v5; 
  CgBallisticInstance *m_ballisticInstancesCurrentFrame; 
  __int64 v7; 

  this->__vftable = (CgBallisticsSP_vtbl *)&BgBallistics<CgBallisticInstance>::`vftable';
  m_ballisticInstances = this->m_ballisticInstances;
  v5 = 600i64;
  do
  {
    CgBallisticInstance::CgBallisticInstance(m_ballisticInstances++);
    --v5;
  }
  while ( v5 );
  this->m_firstFree = NULL;
  this->m_lastFree = NULL;
  *(_QWORD *)&this->m_numSlotsActive = 0i64;
  memset_0(this->m_ballisticInstances, 0, sizeof(this->m_ballisticInstances));
  this->__vftable = (CgBallisticsSP_vtbl *)&CgBallistics::`vftable';
  this->m_localClientNum = localClientNum;
  m_ballisticInstancesCurrentFrame = this->m_ballisticInstancesCurrentFrame;
  v7 = 50i64;
  do
  {
    CgBallisticInstance::CgBallisticInstance(m_ballisticInstancesCurrentFrame++);
    --v7;
  }
  while ( v7 );
  this->m_ballisticInstanceEntryIndexNext = 0;
  this->m_workerCountLocal = 0;
  this->m_workerCountRemote = 0;
  memset_0(this->m_ballisticInstancesCurrentFrame, 0, 0x1B8ui64);
  this->__vftable = (CgBallisticsSP_vtbl *)&CgBallisticsSP::`vftable';
}

