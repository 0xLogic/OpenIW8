/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsBodyQualityList>
==============
*/

HavokPhysicsBodyQualityList *__fastcall hkSerialize::InplaceLoad::toObject<HavokPhysicsBodyQualityList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@VHavokPhysicsBodyQualityList@@@InplaceLoad@hkSerialize@@QEAAPEAVHavokPhysicsBodyQualityList@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<hclClothContainer>
==============
*/

hclClothContainer *__fastcall hkSerialize::InplaceLoad::toObject<hclClothContainer>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@UhclClothContainer@@@InplaceLoad@hkSerialize@@QEAAPEAUhclClothContainer@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsMotionPropertiesList>
==============
*/

HavokPhysicsMotionPropertiesList *__fastcall hkSerialize::InplaceLoad::toObject<HavokPhysicsMotionPropertiesList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@VHavokPhysicsMotionPropertiesList@@@InplaceLoad@hkSerialize@@QEAAPEAVHavokPhysicsMotionPropertiesList@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsXModelLOD>
==============
*/

HavokPhysicsXModelLOD *__fastcall hkSerialize::InplaceLoad::toObject<HavokPhysicsXModelLOD>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@VHavokPhysicsXModelLOD@@@InplaceLoad@hkSerialize@@QEAAPEAVHavokPhysicsXModelLOD@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<hknpShape>
==============
*/

hknpShape *__fastcall hkSerialize::InplaceLoad::toObject<hknpShape>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@VhknpShape@@@InplaceLoad@hkSerialize@@QEAAPEAVhknpShape@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsAsset>
==============
*/

HavokPhysicsAsset *__fastcall hkSerialize::InplaceLoad::toObject<HavokPhysicsAsset>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@VHavokPhysicsAsset@@@InplaceLoad@hkSerialize@@QEAAPEAVHavokPhysicsAsset@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsShapeList>
==============
*/

HavokPhysicsShapeList *__fastcall hkSerialize::InplaceLoad::toObject<HavokPhysicsShapeList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@VHavokPhysicsShapeList@@@InplaceLoad@hkSerialize@@QEAAPEAVHavokPhysicsShapeList@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsMaterialList>
==============
*/

HavokPhysicsMaterialList *__fastcall hkSerialize::InplaceLoad::toObject<HavokPhysicsMaterialList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  return ??$toObject@VHavokPhysicsMaterialList@@@InplaceLoad@hkSerialize@@QEAAPEAVHavokPhysicsMaterialList@@PEAX_K@Z(this, buf, bufLen);
}

/*
==============
hkSerialize::InplaceLoad::toObject<hknpShape>
==============
*/
hknpShape *hkSerialize::InplaceLoad::toObject<hknpShape>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&hknpShape::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &hknpShape::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (hknpShape *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsAsset>
==============
*/
HavokPhysicsAsset *hkSerialize::InplaceLoad::toObject<HavokPhysicsAsset>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&HavokPhysicsAsset::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &HavokPhysicsAsset::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (HavokPhysicsAsset *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsBodyQualityList>
==============
*/
HavokPhysicsBodyQualityList *hkSerialize::InplaceLoad::toObject<HavokPhysicsBodyQualityList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&HavokPhysicsBodyQualityList::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &HavokPhysicsBodyQualityList::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (HavokPhysicsBodyQualityList *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsMaterialList>
==============
*/
HavokPhysicsMaterialList *hkSerialize::InplaceLoad::toObject<HavokPhysicsMaterialList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&HavokPhysicsMaterialList::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &HavokPhysicsMaterialList::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (HavokPhysicsMaterialList *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsMotionPropertiesList>
==============
*/
HavokPhysicsMotionPropertiesList *hkSerialize::InplaceLoad::toObject<HavokPhysicsMotionPropertiesList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&HavokPhysicsMotionPropertiesList::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &HavokPhysicsMotionPropertiesList::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (HavokPhysicsMotionPropertiesList *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsShapeList>
==============
*/
HavokPhysicsShapeList *hkSerialize::InplaceLoad::toObject<HavokPhysicsShapeList>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&HavokPhysicsShapeList::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &HavokPhysicsShapeList::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (HavokPhysicsShapeList *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

/*
==============
hkSerialize::InplaceLoad::toObject<HavokPhysicsXModelLOD>
==============
*/
HavokPhysicsXModelLOD *hkSerialize::InplaceLoad::toObject<HavokPhysicsXModelLOD>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&HavokPhysicsXModelLOD::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &HavokPhysicsXModelLOD::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (HavokPhysicsXModelLOD *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

/*
==============
hkSerialize::InplaceLoad::toObject<hclClothContainer>
==============
*/
hclClothContainer *hkSerialize::InplaceLoad::toObject<hclClothContainer>(hkSerialize::InplaceLoad *this, void *buf, unsigned __int64 bufLen)
{
  void *m_addr; 
  hkReflect::Var result; 

  hkSerialize::InplaceLoad::toVar(this, &result, buf, bufLen, (const hkReflect::QualifiedType<hkReflect::Type>)&hclClothContainer::typeData);
  m_addr = result.m_addr;
  if ( result.m_addr )
  {
    if ( !result.m_type.m_type || !hkReflect::Type::extendsOrEquals((hkReflect::Type *)result.m_type.m_type, &hclClothContainer::typeData) )
      m_addr = NULL;
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return (hclClothContainer *)m_addr;
  }
  else
  {
    if ( ((__int64)result.m_impl.m_ptrAndInt & 1) != 0 )
      hkReflect::Detail::Impl::removeReference((hkReflect::Detail::Impl *)((unsigned __int64)result.m_impl.m_ptrAndInt & 0xFFFFFFFFFFFFFFFEui64));
    return 0i64;
  }
}

