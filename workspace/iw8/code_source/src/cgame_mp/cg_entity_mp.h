/*
==============
CgEntitySystemMP::CgEntitySystemMP
==============
*/

void __fastcall CgEntitySystemMP::CgEntitySystemMP(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  ??0CgEntitySystemMP@@QEAA@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgEntitySystemMP::CgEntitySystemMP
==============
*/
void CgEntitySystemMP::CgEntitySystemMP(CgEntitySystemMP *this, const LocalClientNum_t localClientNum)
{
  centity_t *m_entities; 
  __int64 v4; 

  this->m_localClientNum = localClientNum;
  this->__vftable = (CgEntitySystemMP_vtbl *)&CgEntitySystem::`vftable';
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
  this->__vftable = (CgEntitySystemMP_vtbl *)&CgEntitySystemMP::`vftable';
}

