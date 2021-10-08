/*
==============
CgPredictedEntitySystemMP::CgPredictedEntitySystemMP
==============
*/

void __fastcall CgPredictedEntitySystemMP::CgPredictedEntitySystemMP(CgPredictedEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgPredictedEntitySystemMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgPredictedEntitySystemMP::ClearSystem
==============
*/

void __fastcall CgPredictedEntitySystemMP::ClearSystem(const LocalClientNum_t localClientNum)
{
  ?ClearSystem@CgPredictedEntitySystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPredictedEntitySystemMP::CgPredictedEntitySystemMP
==============
*/
void CgPredictedEntitySystemMP::CgPredictedEntitySystemMP(CgPredictedEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  CgPredictedEntity *m_entities; 
  __int64 v5; 

  BgPredictedEntitySystem::BgPredictedEntitySystem(this);
  this->__vftable = (CgPredictedEntitySystemMP_vtbl *)&CgPredictedEntitySystem::`vftable';
  this->m_localClientNum = localClientNum;
  this->m_numEntities = 0;
  m_entities = this->m_entities;
  v5 = 32i64;
  do
  {
    CgPredictedEntity::CgPredictedEntity(m_entities++);
    --v5;
  }
  while ( v5 );
  this->m_firstFreeEntity = NULL;
  this->m_lastFreeEntity = NULL;
  this->__vftable = (CgPredictedEntitySystemMP_vtbl *)&CgPredictedEntitySystemMP::`vftable';
}

/*
==============
CgPredictedEntitySystemMP::ClearSystem
==============
*/
void CgPredictedEntitySystemMP::ClearSystem(const LocalClientNum_t localClientNum)
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

