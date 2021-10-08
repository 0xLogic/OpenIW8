/*
==============
CgEntitySystemSP::CgEntitySystemSP
==============
*/

void __fastcall CgEntitySystemSP::CgEntitySystemSP(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  ??0CgEntitySystemSP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgEntitySystemSP::CgEntitySystemSP
==============
*/
void CgEntitySystemSP::CgEntitySystemSP(CgEntitySystemSP *this, const LocalClientNum_t localClientNum)
{
  centity_t *m_entities; 
  __int64 v4; 

  this->m_localClientNum = localClientNum;
  this->__vftable = (CgEntitySystemSP_vtbl *)&CgEntitySystem::`vftable';
  m_entities = this->m_entities;
  v4 = 2048i64;
  do
  {
    centity_t::centity_t(m_entities++);
    --v4;
  }
  while ( v4 );
  this->m_impulseFieldEntityCount = 0;
  memset_0(this->m_impulseFieldEntities, 0, sizeof(this->m_impulseFieldEntities));
  this->__vftable = (CgEntitySystemSP_vtbl *)&CgEntitySystemSP::`vftable';
}

