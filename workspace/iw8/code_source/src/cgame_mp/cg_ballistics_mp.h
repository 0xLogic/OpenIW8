/*
==============
CgBallisticsMP::ClearSystem
==============
*/

void __fastcall CgBallisticsMP::ClearSystem(const LocalClientNum_t localClientNum)
{
  ?ClearSystem@CgBallisticsMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgBallisticsMP::CgBallisticsMP
==============
*/

void __fastcall CgBallisticsMP::CgBallisticsMP(CgBallisticsMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgBallisticsMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgBallisticsMP::CgBallisticsMP
==============
*/
void CgBallisticsMP::CgBallisticsMP(CgBallisticsMP *this, const LocalClientNum_t localClientNum)
{
  CgBallisticInstance *m_ballisticInstances; 
  __int64 v5; 
  CgBallisticInstance *m_ballisticInstancesCurrentFrame; 
  __int64 v7; 

  this->__vftable = (CgBallisticsMP_vtbl *)&BgBallistics<CgBallisticInstance>::`vftable';
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
  this->__vftable = (CgBallisticsMP_vtbl *)&CgBallistics::`vftable';
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
  this->__vftable = (CgBallisticsMP_vtbl *)&CgBallisticsMP::`vftable';
}

/*
==============
CgBallisticsMP::ClearSystem
==============
*/
void CgBallisticsMP::ClearSystem(const LocalClientNum_t localClientNum)
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

