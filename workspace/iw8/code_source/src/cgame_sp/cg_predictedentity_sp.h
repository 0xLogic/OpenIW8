/*
==============
CgPredictedEntitySystemSP::CgPredictedEntitySystemSP
==============
*/

void __fastcall CgPredictedEntitySystemSP::CgPredictedEntitySystemSP(CgPredictedEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgPredictedEntitySystemSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgPredictedEntitySystemSP::CgPredictedEntitySystemSP
==============
*/
void CgPredictedEntitySystemSP::CgPredictedEntitySystemSP(CgPredictedEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  CgPredictedEntity *m_entities; 
  __int64 v5; 

  BgPredictedEntitySystem::BgPredictedEntitySystem(this);
  this->__vftable = (CgPredictedEntitySystemSP_vtbl *)&CgPredictedEntitySystem::`vftable';
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
  this->__vftable = (CgPredictedEntitySystemSP_vtbl *)&CgPredictedEntitySystemSP::`vftable';
}

