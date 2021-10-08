/*
==============
GEntityData::SetOwnerEntNum
==============
*/

void __fastcall GEntityData::SetOwnerEntNum(GEntityData *this, const int ownerEntNum)
{
  ?SetOwnerEntNum@GEntityData@@UEAAXH@Z(this, ownerEntNum);
}

/*
==============
GEntityData::GEntityData
==============
*/

void __fastcall GEntityData::GEntityData(GEntityData *this)
{
  ??0GEntityData@@QEAA@XZ(this);
}

/*
==============
GEntityMissileComponentData::GEntityMissileComponentData
==============
*/

void __fastcall GEntityMissileComponentData::GEntityMissileComponentData(GEntityMissileComponentData *this)
{
  ??0GEntityMissileComponentData@@QEAA@XZ(this);
}

/*
==============
GEntityData::GEntityData
==============
*/

void __fastcall GEntityData::GEntityData(GEntityData *this, const GEntityData *other)
{
  ??0GEntityData@@QEAA@AEBV0@@Z(this, other);
}

/*
==============
GEntityData::GetEntity
==============
*/

gentity_s *__fastcall GEntityData::GetEntity(GEntityData *this)
{
  return ?GetEntity@GEntityData@@QEAAPEAUgentity_s@@XZ(this);
}

/*
==============
GEntityData::IsLinked
==============
*/

bool __fastcall GEntityData::IsLinked(GEntityData *this)
{
  return ?IsLinked@GEntityData@@UEBA_NXZ(this);
}

/*
==============
GEntityMissileComponentData::SetMissileTargetEnt
==============
*/

void __fastcall GEntityMissileComponentData::SetMissileTargetEnt(GEntityMissileComponentData *this, int missileTargetEnt)
{
  ?SetMissileTargetEnt@GEntityMissileComponentData@@UEAAXH@Z(this, missileTargetEnt);
}

/*
==============
GEntityData::GetEntity
==============
*/

const gentity_s *__fastcall GEntityData::GetEntity(GEntityData *this)
{
  return ?GetEntity@GEntityData@@QEBAPEBUgentity_s@@XZ(this);
}

/*
==============
GEntityData::SetParentEntNum
==============
*/

void __fastcall GEntityData::SetParentEntNum(GEntityData *this, const int parentEntNum)
{
  ?SetParentEntNum@GEntityData@@UEAAXH@Z(this, parentEntNum);
}

/*
==============
GEntityData::IsEmpty
==============
*/

bool __fastcall GEntityData::IsEmpty(GEntityData *this)
{
  return ?IsEmpty@GEntityData@@QEBA_NXZ(this);
}

/*
==============
GEntityData::GEntityData
==============
*/

void __fastcall GEntityData::GEntityData(GEntityData *this, gentity_s *ent, BgEntityComponentData *componentData)
{
  ??0GEntityData@@QEAA@PEAUgentity_s@@PEAVBgEntityComponentData@@@Z(this, ent, componentData);
}

/*
==============
GEntityMissileComponentData::GEntityMissileComponentData
==============
*/

void __fastcall GEntityMissileComponentData::GEntityMissileComponentData(GEntityMissileComponentData *this, gentity_s *ent)
{
  ??0GEntityMissileComponentData@@QEAA@PEAUgentity_s@@@Z(this, ent);
}

/*
==============
GEntityData::GEntityData
==============
*/
void GEntityData::GEntityData(GEntityData *this, const GEntityData *other)
{
  BgEntityComponentData *componentData; 
  const BgEntityComponentData *v5; 
  gentity_s *entState; 
  int parentEntNum; 
  int ownerEntNum; 
  BgEntityData v9; 
  gentity_s *v10; 

  BgEntityData::BgEntityData(this);
  this->__vftable = (GEntityData_vtbl *)&GEntityData::`vftable';
  if ( BgEntityData::GetEntityState(&other->BgEntityData)->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entitydata.cpp", 16, ASSERT_TYPE_ASSERT, "(other.GetEntityState()->eType == ET_MISSILE)", (const char *)&queryFormat, "other.GetEntityState()->eType == ET_MISSILE") )
    __debugbreak();
  componentData = BgEntityData::GetComponentData(this);
  v5 = BgEntityData::GetComponentData(&other->BgEntityData);
  LODWORD(componentData[1].__vftable) = v5[1].__vftable;
  componentData[2].__vftable = v5[2].__vftable;
  entState = other->m_ent;
  parentEntNum = 2047;
  if ( EntHandle::isDefined(&entState->r.ownerNum) )
    ownerEntNum = EntHandle::entnum(&entState->r.ownerNum);
  else
    ownerEntNum = 2047;
  if ( EntHandle::isDefined(&entState->parent) )
    parentEntNum = EntHandle::entnum(&entState->parent);
  BgEntityData::BgEntityData(&v9, &entState->r.currentOrigin, &entState->r.currentAngles, &entState->r.box, &entState->clipmask, &entState->handler, parentEntNum, ownerEntNum, &entState->s, &entState->flags, &entState->c, componentData);
  v10 = entState;
  v9.__vftable = (BgEntityData_vtbl *)&GEntityData::`vftable';
  if ( !entState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entitydata.cpp", 45, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  this->m_origin = v9.m_origin;
  this->m_angles = v9.m_angles;
  this->m_box = v9.m_box;
  this->m_clipMask = v9.m_clipMask;
  this->m_parentEntNum = v9.m_parentEntNum;
  this->m_ownerEntNum = v9.m_ownerEntNum;
  this->m_entityState = v9.m_entityState;
  this->m_flags = v9.m_flags;
  this->m_components = v9.m_components;
  this->m_componentData = v9.m_componentData;
  this->m_handler = v9.m_handler;
  this->m_ent = v10;
}

/*
==============
GEntityData::GEntityData
==============
*/
void GEntityData::GEntityData(GEntityData *this, gentity_s *ent, BgEntityComponentData *componentData)
{
  BgEntityComponents *components; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *flags; 
  int parentEntNum; 
  int ownerEntNum; 

  components = &ent->c;
  flags = &ent->flags;
  parentEntNum = 2047;
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
    ownerEntNum = EntHandle::entnum(&ent->r.ownerNum);
  else
    ownerEntNum = 2047;
  if ( EntHandle::isDefined(&ent->parent) )
    parentEntNum = EntHandle::entnum(&ent->parent);
  BgEntityData::BgEntityData(this, &ent->r.currentOrigin, &ent->r.currentAngles, &ent->r.box, &ent->clipmask, &ent->handler, parentEntNum, ownerEntNum, &ent->s, flags, components, componentData);
  this->m_ent = ent;
  this->__vftable = (GEntityData_vtbl *)&GEntityData::`vftable';
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entitydata.cpp", 45, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
}

/*
==============
GEntityData::GEntityData
==============
*/
void GEntityData::GEntityData(GEntityData *this)
{
  BgEntityData::BgEntityData(this);
  this->m_ent = NULL;
  this->__vftable = (GEntityData_vtbl *)&GEntityData::`vftable';
}

/*
==============
GEntityMissileComponentData::GEntityMissileComponentData
==============
*/
void GEntityMissileComponentData::GEntityMissileComponentData(GEntityMissileComponentData *this, gentity_s *ent)
{
  int v4; 

  if ( EntHandle::isDefined(&ent->missileTargetEnt) )
    v4 = EntHandle::entnum(&ent->missileTargetEnt);
  else
    v4 = 2047;
  BgEntityMissileComponentData::BgEntityMissileComponentData(this, v4);
  this->m_ent = ent;
  this->__vftable = (GEntityMissileComponentData_vtbl *)&GEntityMissileComponentData::`vftable';
}

/*
==============
GEntityMissileComponentData::GEntityMissileComponentData
==============
*/
void GEntityMissileComponentData::GEntityMissileComponentData(GEntityMissileComponentData *this)
{
  BgEntityMissileComponentData::BgEntityMissileComponentData(this);
  this->m_ent = NULL;
  this->__vftable = (GEntityMissileComponentData_vtbl *)&GEntityMissileComponentData::`vftable';
}

/*
==============
GEntityData::GetEntity
==============
*/
gentity_s *GEntityData::GetEntity(GEntityData *this)
{
  return this->m_ent;
}

/*
==============
GEntityData::GetEntity
==============
*/
gentity_s *GEntityData::GetEntity(GEntityData *this)
{
  return this->m_ent;
}

/*
==============
GEntityData::IsEmpty
==============
*/
bool GEntityData::IsEmpty(GEntityData *this)
{
  return this->m_ent == NULL;
}

/*
==============
GEntityData::IsLinked
==============
*/
bool GEntityData::IsLinked(GEntityData *this)
{
  return this->m_ent->tagInfo != NULL;
}

/*
==============
GEntityMissileComponentData::SetMissileTargetEnt
==============
*/
void GEntityMissileComponentData::SetMissileTargetEnt(GEntityMissileComponentData *this, int missileTargetEnt)
{
  __int64 v2; 
  const gentity_s *v4; 

  v2 = missileTargetEnt;
  BgEntityMissileComponentData::SetMissileTargetEnt(this, missileTargetEnt);
  if ( G_IsEntityInUse(v2) )
    v4 = &g_entities[v2];
  else
    v4 = NULL;
  EntHandle::setEnt(&this->m_ent->missileTargetEnt, v4);
}

/*
==============
GEntityData::SetOwnerEntNum
==============
*/
void GEntityData::SetOwnerEntNum(GEntityData *this, const int ownerEntNum)
{
  __int64 v2; 
  const gentity_s *v4; 

  v2 = ownerEntNum;
  BgEntityData::SetOwnerEntNum(this, ownerEntNum);
  if ( G_IsEntityInUse(v2) )
    v4 = &g_entities[v2];
  else
    v4 = NULL;
  EntHandle::setEnt(&this->m_ent->r.ownerNum, v4);
}

/*
==============
GEntityData::SetParentEntNum
==============
*/
void GEntityData::SetParentEntNum(GEntityData *this, const int parentEntNum)
{
  __int64 v2; 
  const gentity_s *v4; 

  v2 = parentEntNum;
  BgEntityData::SetParentEntNum(this, parentEntNum);
  if ( G_IsEntityInUse(v2) )
    v4 = &g_entities[v2];
  else
    v4 = NULL;
  EntHandle::setEnt(&this->m_ent->parent, v4);
}

