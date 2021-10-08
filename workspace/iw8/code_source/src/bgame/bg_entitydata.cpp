/*
==============
BgEntityData::GetComponents
==============
*/

BgEntityComponents *__fastcall BgEntityData::GetComponents(BgEntityData *this)
{
  return ?GetComponents@BgEntityData@@QEAAPEATBgEntityComponents@@XZ(this);
}

/*
==============
BgEntityMissileComponentData::SetMissileTargetEnt
==============
*/

void __fastcall BgEntityMissileComponentData::SetMissileTargetEnt(BgEntityMissileComponentData *this, int missileTargetEnt)
{
  ?SetMissileTargetEnt@BgEntityMissileComponentData@@UEAAXH@Z(this, missileTargetEnt);
}

/*
==============
BgEntityData::SetComponentData
==============
*/

void __fastcall BgEntityData::SetComponentData(BgEntityData *this, BgEntityComponentData *componentData)
{
  ?SetComponentData@BgEntityData@@QEAAXPEAVBgEntityComponentData@@@Z(this, componentData);
}

/*
==============
BgEntityMissileComponentData::BgEntityMissileComponentData
==============
*/

void __fastcall BgEntityMissileComponentData::BgEntityMissileComponentData(BgEntityMissileComponentData *this)
{
  ??0BgEntityMissileComponentData@@QEAA@XZ(this);
}

/*
==============
BgEntityMissileComponentData::BgEntityMissileComponentData
==============
*/

void __fastcall BgEntityMissileComponentData::BgEntityMissileComponentData(BgEntityMissileComponentData *this, const int missileTargetEnt)
{
  ??0BgEntityMissileComponentData@@QEAA@H@Z(this, missileTargetEnt);
}

/*
==============
BgEntityData::GetFlags
==============
*/

GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *__fastcall BgEntityData::GetFlags(BgEntityData *this)
{
  return ?GetFlags@BgEntityData@@QEAAPEAV?$GameModeFlagContainer@W4BgEntityFlagsCommon@@W4BgEntityFlagsSP@@W4BgEntityFlagsMP@@$0EA@@@XZ(this);
}

/*
==============
BgEntityData::GetAngles
==============
*/

const vec3_t *__fastcall BgEntityData::GetAngles(BgEntityData *this)
{
  return ?GetAngles@BgEntityData@@QEBAAEBTvec3_t@@XZ(this);
}

/*
==============
BgEntityData::GetEntityState
==============
*/

entityState_t *__fastcall BgEntityData::GetEntityState(BgEntityData *this)
{
  return ?GetEntityState@BgEntityData@@QEAAPEAUentityState_t@@XZ(this);
}

/*
==============
BgEntityData::GetFlags
==============
*/

const GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *__fastcall BgEntityData::GetFlags(BgEntityData *this)
{
  return ?GetFlags@BgEntityData@@QEBAPEBV?$GameModeFlagContainer@W4BgEntityFlagsCommon@@W4BgEntityFlagsSP@@W4BgEntityFlagsMP@@$0EA@@@XZ(this);
}

/*
==============
BgEntityData::GetBox
==============
*/

const Bounds *__fastcall BgEntityData::GetBox(BgEntityData *this)
{
  return ?GetBox@BgEntityData@@QEBAPEBUBounds@@XZ(this);
}

/*
==============
BgEntityData::BgEntityData
==============
*/

void __fastcall BgEntityData::BgEntityData(BgEntityData *this, vec3_t *origin, vec3_t *angles, Bounds *box, int *clipMask, unsigned __int8 *handler, const int parentEntNum, const int ownerEntNum, entityState_t *entState, GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *flags, BgEntityComponents *components, BgEntityComponentData *componentData)
{
  ??0BgEntityData@@QEAA@AEATvec3_t@@0PEAUBounds@@PEAHPEAEHHPEAUentityState_t@@PEAV?$GameModeFlagContainer@W4BgEntityFlagsCommon@@W4BgEntityFlagsSP@@W4BgEntityFlagsMP@@$0EA@@@PEATBgEntityComponents@@PEAVBgEntityComponentData@@@Z(this, origin, angles, box, clipMask, handler, parentEntNum, ownerEntNum, entState, flags, components, componentData);
}

/*
==============
BgEntityData::SetOwnerEntNum
==============
*/

void __fastcall BgEntityData::SetOwnerEntNum(BgEntityData *this, const int ownerEntNum)
{
  ?SetOwnerEntNum@BgEntityData@@UEAAXH@Z(this, ownerEntNum);
}

/*
==============
BgEntityData::GetParentEntNum
==============
*/

int __fastcall BgEntityData::GetParentEntNum(BgEntityData *this)
{
  return ?GetParentEntNum@BgEntityData@@QEBAHXZ(this);
}

/*
==============
BgEntityData::GetBox
==============
*/

Bounds *__fastcall BgEntityData::GetBox(BgEntityData *this)
{
  return ?GetBox@BgEntityData@@QEAAPEAUBounds@@XZ(this);
}

/*
==============
BgEntityData::GetOrigin
==============
*/

const vec3_t *__fastcall BgEntityData::GetOrigin(BgEntityData *this)
{
  return ?GetOrigin@BgEntityData@@QEBAAEBTvec3_t@@XZ(this);
}

/*
==============
BgEntityData::GetOwnerEntNum
==============
*/

int __fastcall BgEntityData::GetOwnerEntNum(BgEntityData *this)
{
  return ?GetOwnerEntNum@BgEntityData@@QEBAHXZ(this);
}

/*
==============
BgEntityData::GetComponents
==============
*/

const BgEntityComponents *__fastcall BgEntityData::GetComponents(BgEntityData *this)
{
  return ?GetComponents@BgEntityData@@QEBAPEBTBgEntityComponents@@XZ(this);
}

/*
==============
BgEntityData::SetParentEntNum
==============
*/

void __fastcall BgEntityData::SetParentEntNum(BgEntityData *this, const int parentEntNum)
{
  ?SetParentEntNum@BgEntityData@@UEAAXH@Z(this, parentEntNum);
}

/*
==============
BgEntityData::SetClipMask
==============
*/

void __fastcall BgEntityData::SetClipMask(BgEntityData *this, int newClipMask)
{
  ?SetClipMask@BgEntityData@@QEAAXH@Z(this, newClipMask);
}

/*
==============
BgEntityData::GetEntityState
==============
*/

const entityState_t *__fastcall BgEntityData::GetEntityState(BgEntityData *this)
{
  return ?GetEntityState@BgEntityData@@QEBAPEBUentityState_t@@XZ(this);
}

/*
==============
BgEntityData::GetHandler
==============
*/

unsigned __int8 __fastcall BgEntityData::GetHandler(BgEntityData *this)
{
  return ?GetHandler@BgEntityData@@QEBAEXZ(this);
}

/*
==============
BgEntityData::GetComponentData
==============
*/

BgEntityComponentData *__fastcall BgEntityData::GetComponentData(BgEntityData *this)
{
  return ?GetComponentData@BgEntityData@@QEAAPEAVBgEntityComponentData@@XZ(this);
}

/*
==============
BgEntityData::GetComponentData
==============
*/

const BgEntityComponentData *__fastcall BgEntityData::GetComponentData(BgEntityData *this)
{
  return ?GetComponentData@BgEntityData@@QEBAPEBVBgEntityComponentData@@XZ(this);
}

/*
==============
BgEntityData::SetHandler
==============
*/

void __fastcall BgEntityData::SetHandler(BgEntityData *this, unsigned __int8 handler)
{
  ?SetHandler@BgEntityData@@QEAAXE@Z(this, handler);
}

/*
==============
BgEntityData::GetAngles
==============
*/

vec3_t *__fastcall BgEntityData::GetAngles(BgEntityData *this)
{
  return ?GetAngles@BgEntityData@@QEAAAEATvec3_t@@XZ(this);
}

/*
==============
BgEntityData::GetClipMask
==============
*/

int __fastcall BgEntityData::GetClipMask(BgEntityData *this)
{
  return ?GetClipMask@BgEntityData@@QEBAHXZ(this);
}

/*
==============
BgEntityData::GetOrigin
==============
*/

vec3_t *__fastcall BgEntityData::GetOrigin(BgEntityData *this)
{
  return ?GetOrigin@BgEntityData@@QEAAAEATvec3_t@@XZ(this);
}

/*
==============
BgEntityMissileComponentData::GetMissileTargetEnt
==============
*/

int __fastcall BgEntityMissileComponentData::GetMissileTargetEnt(BgEntityMissileComponentData *this)
{
  return ?GetMissileTargetEnt@BgEntityMissileComponentData@@QEBAHXZ(this);
}

/*
==============
BgEntityData::BgEntityData
==============
*/

void __fastcall BgEntityData::BgEntityData(BgEntityData *this)
{
  ??0BgEntityData@@QEAA@XZ(this);
}

/*
==============
BgEntityData::BgEntityData
==============
*/
void BgEntityData::BgEntityData(BgEntityData *this, vec3_t *origin, vec3_t *angles, Bounds *box, int *clipMask, unsigned __int8 *handler, const int parentEntNum, const int ownerEntNum, entityState_t *entState, GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *flags, BgEntityComponents *components, BgEntityComponentData *componentData)
{
  this->__vftable = (BgEntityData_vtbl *)&BgEntityData::`vftable';
  this->m_parentEntNum = parentEntNum;
  this->m_origin = origin;
  this->m_ownerEntNum = ownerEntNum;
  this->m_componentData = componentData;
  this->m_angles = angles;
  this->m_box = box;
  this->m_clipMask = clipMask;
  this->m_entityState = entState;
  this->m_flags = flags;
  this->m_components = components;
  this->m_handler = handler;
  if ( !entState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitydata.cpp", 49, ASSERT_TYPE_ASSERT, "(entState)", (const char *)&queryFormat, "entState") )
    __debugbreak();
  if ( !flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitydata.cpp", 50, ASSERT_TYPE_ASSERT, "(flags)", (const char *)&queryFormat, "flags") )
    __debugbreak();
  if ( !components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitydata.cpp", 51, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( !box && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitydata.cpp", 52, ASSERT_TYPE_ASSERT, "(box)", (const char *)&queryFormat, "box") )
    __debugbreak();
  if ( !clipMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitydata.cpp", 53, ASSERT_TYPE_ASSERT, "(clipMask)", (const char *)&queryFormat, "clipMask") )
    __debugbreak();
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitydata.cpp", 54, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
}

/*
==============
BgEntityData::BgEntityData
==============
*/
void BgEntityData::BgEntityData(BgEntityData *this)
{
  this->m_parentEntNum = 2047;
  this->__vftable = (BgEntityData_vtbl *)&BgEntityData::`vftable';
  this->m_origin = NULL;
  this->m_angles = NULL;
  this->m_box = NULL;
  this->m_clipMask = NULL;
  this->m_entityState = NULL;
  this->m_flags = NULL;
  this->m_components = NULL;
  this->m_componentData = NULL;
  this->m_handler = NULL;
  this->m_ownerEntNum = 2047;
}

/*
==============
BgEntityMissileComponentData::BgEntityMissileComponentData
==============
*/
void BgEntityMissileComponentData::BgEntityMissileComponentData(BgEntityMissileComponentData *this, const int missileTargetEnt)
{
  this->m_missileTargetEnt = missileTargetEnt;
  this->__vftable = (BgEntityMissileComponentData_vtbl *)&BgEntityMissileComponentData::`vftable';
}

/*
==============
BgEntityMissileComponentData::BgEntityMissileComponentData
==============
*/
void BgEntityMissileComponentData::BgEntityMissileComponentData(BgEntityMissileComponentData *this)
{
  this->m_missileTargetEnt = 2047;
  this->__vftable = (BgEntityMissileComponentData_vtbl *)&BgEntityMissileComponentData::`vftable';
}

/*
==============
BgEntityData::GetAngles
==============
*/
vec3_t *BgEntityData::GetAngles(BgEntityData *this)
{
  return this->m_angles;
}

/*
==============
BgEntityData::GetAngles
==============
*/
vec3_t *BgEntityData::GetAngles(BgEntityData *this)
{
  return this->m_angles;
}

/*
==============
BgEntityData::GetBox
==============
*/
Bounds *BgEntityData::GetBox(BgEntityData *this)
{
  return this->m_box;
}

/*
==============
BgEntityData::GetBox
==============
*/
Bounds *BgEntityData::GetBox(BgEntityData *this)
{
  return this->m_box;
}

/*
==============
BgEntityData::GetClipMask
==============
*/
__int64 BgEntityData::GetClipMask(BgEntityData *this)
{
  return *(unsigned int *)this->m_clipMask;
}

/*
==============
BgEntityData::GetComponentData
==============
*/
BgEntityComponentData *BgEntityData::GetComponentData(BgEntityData *this)
{
  return this->m_componentData;
}

/*
==============
BgEntityData::GetComponentData
==============
*/
BgEntityComponentData *BgEntityData::GetComponentData(BgEntityData *this)
{
  return this->m_componentData;
}

/*
==============
BgEntityData::GetComponents
==============
*/
BgEntityComponents *BgEntityData::GetComponents(BgEntityData *this)
{
  return this->m_components;
}

/*
==============
BgEntityData::GetComponents
==============
*/
BgEntityComponents *BgEntityData::GetComponents(BgEntityData *this)
{
  return this->m_components;
}

/*
==============
BgEntityData::GetEntityState
==============
*/
entityState_t *BgEntityData::GetEntityState(BgEntityData *this)
{
  return this->m_entityState;
}

/*
==============
BgEntityData::GetEntityState
==============
*/
entityState_t *BgEntityData::GetEntityState(BgEntityData *this)
{
  return this->m_entityState;
}

/*
==============
BgEntityData::GetFlags
==============
*/
GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *BgEntityData::GetFlags(BgEntityData *this)
{
  return this->m_flags;
}

/*
==============
BgEntityData::GetFlags
==============
*/
GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *BgEntityData::GetFlags(BgEntityData *this)
{
  return this->m_flags;
}

/*
==============
BgEntityData::GetHandler
==============
*/
__int64 BgEntityData::GetHandler(BgEntityData *this)
{
  return *this->m_handler;
}

/*
==============
BgEntityMissileComponentData::GetMissileTargetEnt
==============
*/
__int64 BgEntityMissileComponentData::GetMissileTargetEnt(BgEntityMissileComponentData *this)
{
  return (unsigned int)this->m_missileTargetEnt;
}

/*
==============
BgEntityData::GetOrigin
==============
*/
vec3_t *BgEntityData::GetOrigin(BgEntityData *this)
{
  return this->m_origin;
}

/*
==============
BgEntityData::GetOrigin
==============
*/
vec3_t *BgEntityData::GetOrigin(BgEntityData *this)
{
  return this->m_origin;
}

/*
==============
BgEntityData::GetOwnerEntNum
==============
*/
__int64 BgEntityData::GetOwnerEntNum(BgEntityData *this)
{
  return (unsigned int)this->m_ownerEntNum;
}

/*
==============
BgEntityData::GetParentEntNum
==============
*/
__int64 BgEntityData::GetParentEntNum(BgEntityData *this)
{
  return (unsigned int)this->m_parentEntNum;
}

/*
==============
BgEntityData::SetClipMask
==============
*/
void BgEntityData::SetClipMask(BgEntityData *this, int newClipMask)
{
  *this->m_clipMask = newClipMask;
}

/*
==============
BgEntityData::SetComponentData
==============
*/
void BgEntityData::SetComponentData(BgEntityData *this, BgEntityComponentData *componentData)
{
  if ( componentData )
  {
    this->m_componentData = componentData;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_entitydata.cpp", 192, ASSERT_TYPE_ASSERT, "(componentData)", (const char *)&queryFormat, "componentData") )
      __debugbreak();
    this->m_componentData = NULL;
  }
}

/*
==============
BgEntityData::SetHandler
==============
*/
void BgEntityData::SetHandler(BgEntityData *this, unsigned __int8 handler)
{
  *this->m_handler = handler;
}

/*
==============
BgEntityMissileComponentData::SetMissileTargetEnt
==============
*/
void BgEntityMissileComponentData::SetMissileTargetEnt(BgEntityMissileComponentData *this, int missileTargetEnt)
{
  this->m_missileTargetEnt = missileTargetEnt;
}

/*
==============
BgEntityData::SetOwnerEntNum
==============
*/
void BgEntityData::SetOwnerEntNum(BgEntityData *this, const int ownerEntNum)
{
  this->m_ownerEntNum = ownerEntNum;
}

/*
==============
BgEntityData::SetParentEntNum
==============
*/
void BgEntityData::SetParentEntNum(BgEntityData *this, const int parentEntNum)
{
  this->m_parentEntNum = parentEntNum;
}

