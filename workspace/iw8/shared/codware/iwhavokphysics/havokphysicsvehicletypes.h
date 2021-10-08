/*
==============
HavokPhysicsVehiclePathConstraintData::operator delete
==============
*/

void __fastcall HavokPhysicsVehiclePathConstraintData::operator delete(void *__formal, void *a2)
{
  ??3HavokPhysicsVehiclePathConstraintData@@SAXPEAX0@Z(__formal, a2);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getType
==============
*/

int __fastcall HavokPhysicsVehiclePathConstraintData::getType(HavokPhysicsVehiclePathConstraintData *this)
{
  return ?getType@HavokPhysicsVehiclePathConstraintData@@UEBAHXZ(this);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::~HavokPhysicsVehiclePathConstraintData
==============
*/

void __fastcall HavokPhysicsVehiclePathConstraintData::~HavokPhysicsVehiclePathConstraintData(HavokPhysicsVehiclePathConstraintData *this)
{
  ??1HavokPhysicsVehiclePathConstraintData@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::~HavokPhysicsVehiclePathConstraintData
==============
*/
void HavokPhysicsVehiclePathConstraintData::~HavokPhysicsVehiclePathConstraintData(HavokPhysicsVehiclePathConstraintData *this)
{
  this->__vftable = (HavokPhysicsVehiclePathConstraintData_vtbl *)hkpConstraintData::`vftable';
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getType
==============
*/
__int64 HavokPhysicsVehiclePathConstraintData::getType(HavokPhysicsVehiclePathConstraintData *this)
{
  return 20i64;
}

/*
==============
HavokPhysicsVehiclePathConstraintData::operator delete
==============
*/
void HavokPhysicsVehiclePathConstraintData::operator delete(void *__formal, void *a2)
{
  ;
}

