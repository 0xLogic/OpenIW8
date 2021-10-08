/*
==============
HavokPhysicsAsset::_Auto::isValid_m_mutableShapeNames
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_mutableShapeNames(const void *valuePtr)
{
  return ?isValid_m_mutableShapeNames@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_motionPropertiesNameCRCLookup
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_motionPropertiesNameCRCLookup(const void *valuePtr)
{
  return ?isValid_m_motionPropertiesNameCRCLookup@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_materialNameCRCLookup
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_materialNameCRCLookup(const void *valuePtr)
{
  return ?isValid_m_materialNameCRCLookup@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_simulationCategories
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_simulationCategories(const void *valuePtr)
{
  return ?isValid_m_simulationCategories@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValidPtr(const void *valuePtr)
{
  return ?isValidPtr@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyServerUsage
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_bodyServerUsage(const void *valuePtr)
{
  return ?isValid_m_bodyServerUsage@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyDrivers
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_bodyDrivers(const void *valuePtr)
{
  return ?isValid_m_bodyDrivers@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodySFXAssetNames
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_bodySFXAssetNames(const void *valuePtr)
{
  return ?isValid_m_bodySFXAssetNames@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid(const HavokPhysicsAsset *value)
{
  return ?isValid@_Auto@HavokPhysicsAsset@@SA_NAEBV2@@Z(value);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_constraintServerUsage
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_constraintServerUsage(const void *valuePtr)
{
  return ?isValid_m_constraintServerUsage@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyQualityNameCRCLookup
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_bodyQualityNameCRCLookup(const void *valuePtr)
{
  return ?isValid_m_bodyQualityNameCRCLookup@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyVFXAssetNames
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_bodyVFXAssetNames(const void *valuePtr)
{
  return ?isValid_m_bodyVFXAssetNames@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_mutable
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValid_m_mutable(const void *valuePtr)
{
  return ?isValid_m_mutable@_Auto@HavokPhysicsAsset@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsAsset::reflectValidate
==============
*/

bool __fastcall HavokPhysicsAsset::reflectValidate(HavokPhysicsAsset *this)
{
  return ?reflectValidate@HavokPhysicsAsset@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyQualityNameCRCLookup
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_bodyQualityNameCRCLookup(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_materialNameCRCLookup
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_materialNameCRCLookup(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_motionPropertiesNameCRCLookup
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_motionPropertiesNameCRCLookup(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodySFXAssetNames
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_bodySFXAssetNames(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyVFXAssetNames
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_bodyVFXAssetNames(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyServerUsage
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_bodyServerUsage(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_constraintServerUsage
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_constraintServerUsage(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_bodyDrivers
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_bodyDrivers(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_simulationCategories
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_simulationCategories(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_mutable
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_mutable(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValid_m_mutableShapeNames
==============
*/
bool HavokPhysicsAsset::_Auto::isValid_m_mutableShapeNames(const void *valuePtr)
{
  int v1; 
  int v2; 
  __int64 v3; 
  bool result; 

  v1 = *((_DWORD *)valuePtr + 2);
  result = 0;
  if ( v1 >= 0 )
  {
    v2 = *((_DWORD *)valuePtr + 3) & 0x3FFFFFFF;
    if ( v2 >= v1 )
    {
      v3 = *(_QWORD *)valuePtr;
      if ( v2 ? v3 != 0 : v3 == 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
HavokPhysicsAsset::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsAsset::_Auto::isValidPtr(const void *valuePtr)
{
  return HavokPhysicsAsset::_Auto::isValid((const HavokPhysicsAsset *)valuePtr);
}

/*
==============
HavokPhysicsAsset::_Auto::isValid
==============
*/
char HavokPhysicsAsset::_Auto::isValid(const HavokPhysicsAsset *value)
{
  int m_size; 
  int v2; 
  int *m_data; 
  int v4; 
  BOOL v5; 
  int v6; 
  int v7; 
  int *v8; 
  bool v9; 
  int v10; 
  int v11; 
  int v12; 
  int *v13; 
  int v14; 
  int v15; 
  int v16; 
  hkStringPtr *v17; 
  int v18; 
  int v19; 
  int v20; 
  hkStringPtr *v21; 
  int v22; 
  int v23; 
  int v24; 
  int *v25; 
  int v26; 
  int v27; 
  int v28; 
  int *v29; 
  int v30; 
  int v31; 
  int v32; 
  int *v33; 
  int v34; 
  int v35; 
  int v36; 
  int *v37; 
  int v38; 
  int v39; 
  int v40; 
  bool *v41; 
  int v42; 
  int v43; 
  int v44; 
  hkStringPtr *v45; 

  m_size = value->m_bodyQualityNameCRCLookup.m_size;
  if ( m_size < 0 )
    return 0;
  v2 = value->m_bodyQualityNameCRCLookup.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v2 < m_size )
    return 0;
  m_data = value->m_bodyQualityNameCRCLookup.m_data;
  if ( v2 )
  {
    v4 = 0;
    v5 = m_data != NULL;
  }
  else
  {
    v4 = 0;
    v5 = m_data == NULL;
  }
  if ( !v5 )
    return 0;
  v6 = value->m_materialNameCRCLookup.m_size;
  if ( v6 < 0 )
    return 0;
  v7 = value->m_materialNameCRCLookup.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v7 < v6 )
    return 0;
  v8 = value->m_materialNameCRCLookup.m_data;
  v9 = v7 == 0;
  v10 = 0;
  LOBYTE(v10) = v9 ? v8 == NULL : v8 != NULL;
  if ( !v10 )
    return 0;
  v11 = value->m_motionPropertiesNameCRCLookup.m_size;
  if ( v11 < 0 )
    return 0;
  v12 = value->m_motionPropertiesNameCRCLookup.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v12 < v11 )
    return 0;
  v13 = value->m_motionPropertiesNameCRCLookup.m_data;
  v9 = v12 == 0;
  v14 = 0;
  LOBYTE(v14) = v9 ? v13 == NULL : v13 != NULL;
  if ( !v14 )
    return 0;
  v15 = value->m_bodySFXAssetNames.m_size;
  if ( v15 < 0 )
    return 0;
  v16 = value->m_bodySFXAssetNames.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v16 < v15 )
    return 0;
  v17 = value->m_bodySFXAssetNames.m_data;
  v9 = v16 == 0;
  v18 = 0;
  LOBYTE(v18) = v9 ? v17 == NULL : v17 != NULL;
  if ( !v18 )
    return 0;
  v19 = value->m_bodyVFXAssetNames.m_size;
  if ( v19 < 0 )
    return 0;
  v20 = value->m_bodyVFXAssetNames.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v20 < v19 )
    return 0;
  v21 = value->m_bodyVFXAssetNames.m_data;
  v9 = v20 == 0;
  v22 = 0;
  LOBYTE(v22) = v9 ? v21 == NULL : v21 != NULL;
  if ( !v22 )
    return 0;
  v23 = value->m_bodyServerUsage.m_size;
  if ( v23 < 0 )
    return 0;
  v24 = value->m_bodyServerUsage.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v24 < v23 )
    return 0;
  v25 = value->m_bodyServerUsage.m_data;
  v9 = v24 == 0;
  v26 = 0;
  LOBYTE(v26) = v9 ? v25 == NULL : v25 != NULL;
  if ( !v26 )
    return 0;
  v27 = value->m_constraintServerUsage.m_size;
  if ( v27 < 0 )
    return 0;
  v28 = value->m_constraintServerUsage.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v28 < v27 )
    return 0;
  v29 = value->m_constraintServerUsage.m_data;
  v9 = v28 == 0;
  v30 = 0;
  LOBYTE(v30) = v9 ? v29 == NULL : v29 != NULL;
  if ( !v30 )
    return 0;
  v31 = value->m_bodyDrivers.m_size;
  if ( v31 < 0 )
    return 0;
  v32 = value->m_bodyDrivers.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v32 < v31 )
    return 0;
  v33 = value->m_bodyDrivers.m_data;
  v9 = v32 == 0;
  v34 = 0;
  LOBYTE(v34) = v9 ? v33 == NULL : v33 != NULL;
  if ( !v34 )
    return 0;
  v35 = value->m_simulationCategories.m_size;
  if ( v35 < 0 )
    return 0;
  v36 = value->m_simulationCategories.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v36 < v35 )
    return 0;
  v37 = value->m_simulationCategories.m_data;
  v9 = v36 == 0;
  v38 = 0;
  LOBYTE(v38) = v9 ? v37 == NULL : v37 != NULL;
  if ( !v38 )
    return 0;
  v39 = value->m_mutable.m_size;
  if ( v39 < 0 )
    return 0;
  v40 = value->m_mutable.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v40 < v39 )
    return 0;
  v41 = value->m_mutable.m_data;
  v9 = v40 == 0;
  v42 = 0;
  LOBYTE(v42) = v9 ? v41 == NULL : v41 != NULL;
  if ( v42 && (v43 = value->m_mutableShapeNames.m_size, v43 >= 0) && (v44 = value->m_mutableShapeNames.m_capacityAndFlags & 0x3FFFFFFF, v44 >= v43) && ((v45 = value->m_mutableShapeNames.m_data, !v44) ? (LOBYTE(v4) = v45 == NULL) : (LOBYTE(v4) = v45 != NULL), v4) )
    return 1;
  else
    return 0;
}

/*
==============
HavokPhysicsAsset::reflectValidate
==============
*/

bool __fastcall HavokPhysicsAsset::reflectValidate(HavokPhysicsAsset *this)
{
  return HavokPhysicsAsset::_Auto::isValid(this);
}

