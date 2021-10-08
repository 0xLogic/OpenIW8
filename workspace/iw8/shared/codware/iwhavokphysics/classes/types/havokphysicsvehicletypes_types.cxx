/*
==============
HavokPhysicsVehiclePathConstraintData::_Auto::isValid_m_atoms
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::_Auto::isValid_m_atoms(const void *valuePtr)
{
  return ?isValid_m_atoms@_Auto@HavokPhysicsVehiclePathConstraintData@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValidPtr(const void *valuePtr)
{
  return ?isValidPtr@_Auto@Atoms@HavokPhysicsVehiclePathConstraintData@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::reflectValidate
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::reflectValidate(HavokPhysicsVehiclePathConstraintData *this)
{
  return ?reflectValidate@HavokPhysicsVehiclePathConstraintData@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::Atoms::reflectValidate
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::Atoms::reflectValidate(HavokPhysicsVehiclePathConstraintData::Atoms *this)
{
  return ?reflectValidate@Atoms@HavokPhysicsVehiclePathConstraintData@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData
==============
*/

void __fastcall HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData(HavokPhysicsVehiclePathConstraintData *this, int vehicleIndex)
{
  ??0HavokPhysicsVehiclePathConstraintData@@QEAA@H@Z(this, vehicleIndex);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::_Auto::isValidPtr(const void *valuePtr)
{
  return ?isValidPtr@_Auto@HavokPhysicsVehiclePathConstraintData@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getExactType
==============
*/

hkReflect::Detail::AddrAndType *__fastcall HavokPhysicsVehiclePathConstraintData::getExactType(HavokPhysicsVehiclePathConstraintData *this, hkReflect::Detail::AddrAndType *result)
{
  return ?getExactType@HavokPhysicsVehiclePathConstraintData@@UEBA?AUAddrAndType@Detail@hkReflect@@XZ(this, result);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData
==============
*/

void __fastcall HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData(HavokPhysicsVehiclePathConstraintData *this, hkReflect::BypassCtorFlag __formal)
{
  ??0HavokPhysicsVehiclePathConstraintData@@QEAA@UBypassCtorFlag@hkReflect@@@Z(this, __formal);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValid_m_transforms
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValid_m_transforms(const void *valuePtr)
{
  return ?isValid_m_transforms@_Auto@Atoms@HavokPhysicsVehiclePathConstraintData@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData
==============
*/
void HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData(HavokPhysicsVehiclePathConstraintData *this, int vehicleIndex)
{
  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->m_userData = 0i64;
  this->__vftable = (HavokPhysicsVehiclePathConstraintData_vtbl *)&HavokPhysicsVehiclePathConstraintData::`vftable';
  this->m_atoms.m_transforms.m_type.m_storage = 2;
  this->m_atoms.m_setupStabilization.m_type.m_storage = 23;
  *((_BYTE *)&this->m_atoms.m_setupStabilization.m_type + 2) = 0;
  *((_DWORD *)&this->m_atoms.m_setupStabilization.m_type + 1) = 2139095022;
  *((_DWORD *)&this->m_atoms.m_setupStabilization.m_type + 2) = 2139095022;
  *((_DWORD *)&this->m_atoms.m_setupStabilization.m_type + 3) = 1602224112;
  this->m_atoms.m_lin0.m_type.m_storage = 7;
  *((_DWORD *)&this->m_atoms.m_lin0.m_type + 1) = -1082130432;
  *((_DWORD *)&this->m_atoms.m_lin0.m_type + 2) = -1082130432;
  this->m_atoms.m_lin1.m_type.m_storage = 7;
  *((_DWORD *)&this->m_atoms.m_lin1.m_type + 1) = -1082130432;
  *((_DWORD *)&this->m_atoms.m_lin1.m_type + 2) = -1082130432;
  this->m_atoms.m_ang2.m_type.m_storage = 13;
  *((_DWORD *)&this->m_atoms.m_ang2.m_type + 2) = -1082130432;
  *((_DWORD *)&this->m_atoms.m_ang2.m_type + 3) = -1082130432;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvehicle.cpp", 1221, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysicsVehiclePathConstraintData Not implemented") )
    __debugbreak();
}

/*
==============
HavokPhysicsVehiclePathConstraintData::getExactType
==============
*/
hkReflect::Detail::AddrAndType *HavokPhysicsVehiclePathConstraintData::getExactType(HavokPhysicsVehiclePathConstraintData *this, hkReflect::Detail::AddrAndType *result)
{
  result->m_addr = this;
  result->m_type = &HavokPhysicsVehiclePathConstraintData::typeData;
  return result;
}

/*
==============
HavokPhysicsVehiclePathConstraintData::_Auto::isValid_m_atoms
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::_Auto::isValid_m_atoms(const void *valuePtr)
{
  return hkpSetLocalTransformsConstraintAtom::reflectValidate((hkpSetLocalTransformsConstraintAtom *)valuePtr);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::_Auto::isValidPtr
==============
*/
bool HavokPhysicsVehiclePathConstraintData::_Auto::isValidPtr(const void *valuePtr)
{
  return hkpSetLocalTransformsConstraintAtom::reflectValidate((hkpSetLocalTransformsConstraintAtom *)((char *)valuePtr + 32));
}

/*
==============
HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValid_m_transforms
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValid_m_transforms(const void *valuePtr)
{
  return hkpSetLocalTransformsConstraintAtom::reflectValidate((hkpSetLocalTransformsConstraintAtom *)valuePtr);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::Atoms::_Auto::isValidPtr(const void *valuePtr)
{
  return hkpSetLocalTransformsConstraintAtom::reflectValidate((hkpSetLocalTransformsConstraintAtom *)valuePtr);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData
==============
*/
void HavokPhysicsVehiclePathConstraintData::HavokPhysicsVehiclePathConstraintData(HavokPhysicsVehiclePathConstraintData *this, hkReflect::BypassCtorFlag __formal)
{
  this->m_propertyBag.m_bag = NULL;
  this->__vftable = (HavokPhysicsVehiclePathConstraintData_vtbl *)&HavokPhysicsVehiclePathConstraintData::`vftable';
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->m_userData = 0i64;
  this->m_atoms.m_transforms.m_type.m_storage = 2;
  this->m_atoms.m_setupStabilization.m_type.m_storage = 23;
  *((_BYTE *)&this->m_atoms.m_setupStabilization.m_type + 2) = 0;
  *((_DWORD *)&this->m_atoms.m_setupStabilization.m_type + 1) = 2139095022;
  *((_DWORD *)&this->m_atoms.m_setupStabilization.m_type + 2) = 2139095022;
  *((_DWORD *)&this->m_atoms.m_setupStabilization.m_type + 3) = 1602224112;
  this->m_atoms.m_lin0.m_type.m_storage = 7;
  *((_DWORD *)&this->m_atoms.m_lin0.m_type + 1) = -1082130432;
  *((_DWORD *)&this->m_atoms.m_lin0.m_type + 2) = -1082130432;
  this->m_atoms.m_lin1.m_type.m_storage = 7;
  *((_DWORD *)&this->m_atoms.m_lin1.m_type + 1) = -1082130432;
  *((_DWORD *)&this->m_atoms.m_lin1.m_type + 2) = -1082130432;
  this->m_atoms.m_ang2.m_type.m_storage = 13;
  *((_DWORD *)&this->m_atoms.m_ang2.m_type + 2) = -1082130432;
  *((_DWORD *)&this->m_atoms.m_ang2.m_type + 3) = -1082130432;
}

/*
==============
HavokPhysicsVehiclePathConstraintData::Atoms::reflectValidate
==============
*/

bool __fastcall HavokPhysicsVehiclePathConstraintData::Atoms::reflectValidate(HavokPhysicsVehiclePathConstraintData::Atoms *this)
{
  return hkpSetLocalTransformsConstraintAtom::reflectValidate(&this->m_transforms);
}

/*
==============
HavokPhysicsVehiclePathConstraintData::reflectValidate
==============
*/
bool HavokPhysicsVehiclePathConstraintData::reflectValidate(HavokPhysicsVehiclePathConstraintData *this)
{
  return hkpSetLocalTransformsConstraintAtom::reflectValidate(&this->m_atoms.m_transforms);
}

