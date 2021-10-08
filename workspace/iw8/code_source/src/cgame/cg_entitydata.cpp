/*
==============
CgEntityMissileComponentData::SetMissileTargetEnt
==============
*/

void __fastcall CgEntityMissileComponentData::SetMissileTargetEnt(CgEntityMissileComponentData *this, int missileTargetEnt)
{
  ?SetMissileTargetEnt@CgEntityMissileComponentData@@UEAAXH@Z(this, missileTargetEnt);
}

/*
==============
CgEntityData::GetEntity
==============
*/

CgPredictedEntity *__fastcall CgEntityData::GetEntity(CgEntityData *this)
{
  return ?GetEntity@CgEntityData@@QEAAPEAUCgPredictedEntity@@XZ(this);
}

/*
==============
CgEntityData::SetParentEntNum
==============
*/

void __fastcall CgEntityData::SetParentEntNum(CgEntityData *this, const int parentEntNum)
{
  ?SetParentEntNum@CgEntityData@@UEAAXH@Z(this, parentEntNum);
}

/*
==============
CgEntityData::SetOwnerEntNum
==============
*/

void __fastcall CgEntityData::SetOwnerEntNum(CgEntityData *this, const int ownerEntNum)
{
  ?SetOwnerEntNum@CgEntityData@@UEAAXH@Z(this, ownerEntNum);
}

/*
==============
CgEntityMissileComponentData::CgEntityMissileComponentData
==============
*/

void __fastcall CgEntityMissileComponentData::CgEntityMissileComponentData(CgEntityMissileComponentData *this, CgPredictedEntity *ent)
{
  ??0CgEntityMissileComponentData@@QEAA@PEAUCgPredictedEntity@@@Z(this, ent);
}

/*
==============
GetEntity
==============
*/

gentity_s *__fastcall GetEntity(scr_entref_t entref)
{
  return ?GetEntity@@YAPEAUgentity_s@@Uscr_entref_t@@@Z(entref);
}

/*
==============
CgEntityData::CgEntityData
==============
*/

void __fastcall CgEntityData::CgEntityData(CgEntityData *this, const CgEntityData *other)
{
  ??0CgEntityData@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
CgEntityData::IsLinked
==============
*/

bool __fastcall CgEntityData::IsLinked(CgEntityData *this)
{
  return ?IsLinked@CgEntityData@@UEBA_NXZ(this);
}

/*
==============
CgEntityData::GetEntity
==============
*/

const CgPredictedEntity *__fastcall CgEntityData::GetEntity(CgEntityData *this)
{
  return ?GetEntity@CgEntityData@@QEBAPEBUCgPredictedEntity@@XZ(this);
}

/*
==============
CgEntityData::CgEntityData
==============
*/

void __fastcall CgEntityData::CgEntityData(CgEntityData *this)
{
  ??0CgEntityData@@QEAA@XZ(this);
}

/*
==============
CgEntityData::IsEmpty
==============
*/

bool __fastcall CgEntityData::IsEmpty(CgEntityData *this)
{
  return ?IsEmpty@CgEntityData@@QEBA_NXZ(this);
}

/*
==============
CgEntityMissileComponentData::CgEntityMissileComponentData
==============
*/

void __fastcall CgEntityMissileComponentData::CgEntityMissileComponentData(CgEntityMissileComponentData *this)
{
  ??0CgEntityMissileComponentData@@QEAA@XZ(this);
}

/*
==============
CgEntityData::CgEntityData
==============
*/

void __fastcall CgEntityData::CgEntityData(CgEntityData *this, CgPredictedEntity *ent, BgEntityComponentData *componentData)
{
  ??0CgEntityData@@QEAA@PEAUCgPredictedEntity@@PEAVBgEntityComponentData@@@Z(this, ent, componentData);
}

/*
==============
GetEntity
==============
*/
gentity_s *GetEntity(scr_entref_t entref)
{
  unsigned int entnum; 
  scrContext_t *v3; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    v3 = ScriptContext_Server();
    Scr_ObjectError(COM_ERR_3943, v3, "not an entity");
    return 0i64;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.cpp", 1046, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    return &g_entities[entnum];
  }
}

/*
==============
CgEntityData::CgEntityData
==============
*/
void CgEntityData::CgEntityData(CgEntityData *this, const CgEntityData *other)
{
  BgEntityComponentData *componentData; 
  const BgEntityComponentData *v5; 
  CgPredictedEntity *entState; 
  BgEntityData v7; 

  BgEntityData::BgEntityData(this);
  this->__vftable = (CgEntityData_vtbl *)&CgEntityData::`vftable';
  if ( BgEntityData::GetEntityState(&other->BgEntityData)->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entitydata.cpp", 15, ASSERT_TYPE_ASSERT, "(other.GetEntityState()->eType == ET_MISSILE)", (const char *)&queryFormat, "other.GetEntityState()->eType == ET_MISSILE") )
    __debugbreak();
  componentData = BgEntityData::GetComponentData(this);
  v5 = BgEntityData::GetComponentData(&other->BgEntityData);
  LODWORD(componentData[1].__vftable) = v5[1].__vftable;
  componentData[2].__vftable = v5[2].__vftable;
  entState = other->m_ent;
  BgEntityData::BgEntityData(&v7, &entState->currentOrigin, &entState->currentAngles, &entState->box, &entState->clipmask, &entState->handler, entState->parentEntNum, entState->ownerEntNum, &entState->s, &entState->flags, &entState->c, componentData);
  this->m_origin = v7.m_origin;
  this->m_angles = v7.m_angles;
  this->m_box = v7.m_box;
  this->m_clipMask = v7.m_clipMask;
  this->m_parentEntNum = v7.m_parentEntNum;
  this->m_ownerEntNum = v7.m_ownerEntNum;
  this->m_entityState = v7.m_entityState;
  this->m_flags = v7.m_flags;
  this->m_components = v7.m_components;
  this->m_componentData = v7.m_componentData;
  this->m_handler = v7.m_handler;
  this->m_ent = entState;
}

/*
==============
CgEntityData::CgEntityData
==============
*/
void CgEntityData::CgEntityData(CgEntityData *this, CgPredictedEntity *ent, BgEntityComponentData *componentData)
{
  BgEntityData::BgEntityData(this, &ent->currentOrigin, &ent->currentAngles, &ent->box, &ent->clipmask, &ent->handler, ent->parentEntNum, ent->ownerEntNum, &ent->s, &ent->flags, &ent->c, componentData);
  this->__vftable = (CgEntityData_vtbl *)&CgEntityData::`vftable';
  this->m_ent = ent;
}

/*
==============
CgEntityData::CgEntityData
==============
*/
void CgEntityData::CgEntityData(CgEntityData *this)
{
  BgEntityData::BgEntityData(this);
  this->m_ent = NULL;
  this->__vftable = (CgEntityData_vtbl *)&CgEntityData::`vftable';
}

/*
==============
CgEntityMissileComponentData::CgEntityMissileComponentData
==============
*/
void CgEntityMissileComponentData::CgEntityMissileComponentData(CgEntityMissileComponentData *this, CgPredictedEntity *ent)
{
  BgEntityMissileComponentData::BgEntityMissileComponentData(this, ent->missileTargetEnt);
  this->m_ent = ent;
  this->__vftable = (CgEntityMissileComponentData_vtbl *)&CgEntityMissileComponentData::`vftable';
}

/*
==============
CgEntityMissileComponentData::CgEntityMissileComponentData
==============
*/
void CgEntityMissileComponentData::CgEntityMissileComponentData(CgEntityMissileComponentData *this)
{
  BgEntityMissileComponentData::BgEntityMissileComponentData(this);
  this->m_ent = NULL;
  this->__vftable = (CgEntityMissileComponentData_vtbl *)&CgEntityMissileComponentData::`vftable';
}

/*
==============
CgEntityData::GetEntity
==============
*/
CgPredictedEntity *CgEntityData::GetEntity(CgEntityData *this)
{
  return this->m_ent;
}

/*
==============
CgEntityData::GetEntity
==============
*/
CgPredictedEntity *CgEntityData::GetEntity(CgEntityData *this)
{
  return this->m_ent;
}

/*
==============
CgEntityData::IsEmpty
==============
*/
bool CgEntityData::IsEmpty(CgEntityData *this)
{
  return this->m_ent == NULL;
}

/*
==============
CgEntityData::IsLinked
==============
*/
bool CgEntityData::IsLinked(CgEntityData *this)
{
  return this->m_ent->linkInfo.parentEntNum != 2047;
}

/*
==============
CgEntityMissileComponentData::SetMissileTargetEnt
==============
*/
void CgEntityMissileComponentData::SetMissileTargetEnt(CgEntityMissileComponentData *this, int missileTargetEnt)
{
  BgEntityMissileComponentData::SetMissileTargetEnt(this, missileTargetEnt);
  this->m_ent->missileTargetEnt = missileTargetEnt;
}

/*
==============
CgEntityData::SetOwnerEntNum
==============
*/
void CgEntityData::SetOwnerEntNum(CgEntityData *this, const int ownerEntNum)
{
  BgEntityData::SetOwnerEntNum(this, ownerEntNum);
  this->m_ent->ownerEntNum = ownerEntNum;
}

/*
==============
CgEntityData::SetParentEntNum
==============
*/
void CgEntityData::SetParentEntNum(CgEntityData *this, const int parentEntNum)
{
  BgEntityData::SetParentEntNum(this, parentEntNum);
  this->m_ent->parentEntNum = parentEntNum;
}

