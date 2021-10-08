/*
==============
HavokPhysicsXModelLOD::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsXModelLOD::_Auto::isValidPtr(const void *valuePtr)
{
  return ?isValidPtr@_Auto@HavokPhysicsXModelLOD@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsXModelLOD::XModelCollisionTagData::reflectValidate
==============
*/

bool __fastcall HavokPhysicsXModelLOD::XModelCollisionTagData::reflectValidate(HavokPhysicsXModelLOD::XModelCollisionTagData *this)
{
  return ?reflectValidate@XModelCollisionTagData@HavokPhysicsXModelLOD@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsXModelLOD::_Auto::isValid
==============
*/

bool __fastcall HavokPhysicsXModelLOD::_Auto::isValid(const HavokPhysicsXModelLOD *value)
{
  return ?isValid@_Auto@HavokPhysicsXModelLOD@@SA_NAEBV2@@Z(value);
}

/*
==============
HavokPhysicsXModelLOD::_Auto::isValid_m_bodyNames
==============
*/

bool __fastcall HavokPhysicsXModelLOD::_Auto::isValid_m_bodyNames(const void *valuePtr)
{
  return ?isValid_m_bodyNames@_Auto@HavokPhysicsXModelLOD@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsXModelLOD::_Auto::isValid_m_bodyBindPoses
==============
*/

bool __fastcall HavokPhysicsXModelLOD::_Auto::isValid_m_bodyBindPoses(const void *valuePtr)
{
  return ?isValid_m_bodyBindPoses@_Auto@HavokPhysicsXModelLOD@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsXModelLOD::_Auto::isValid_m_shapeTagData
==============
*/

bool __fastcall HavokPhysicsXModelLOD::_Auto::isValid_m_shapeTagData(const void *valuePtr)
{
  return ?isValid_m_shapeTagData@_Auto@HavokPhysicsXModelLOD@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsXModelLOD::reflectValidate
==============
*/

bool __fastcall HavokPhysicsXModelLOD::reflectValidate(HavokPhysicsXModelLOD *this)
{
  return ?reflectValidate@HavokPhysicsXModelLOD@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsXModelLOD::_Auto::isValid_m_shapes
==============
*/

bool __fastcall HavokPhysicsXModelLOD::_Auto::isValid_m_shapes(const void *valuePtr)
{
  return ?isValid_m_shapes@_Auto@HavokPhysicsXModelLOD@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsXModelLOD::_Auto::isValid_m_shapes
==============
*/
bool HavokPhysicsXModelLOD::_Auto::isValid_m_shapes(const void *valuePtr)
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
HavokPhysicsXModelLOD::_Auto::isValid_m_bodyNames
==============
*/
bool HavokPhysicsXModelLOD::_Auto::isValid_m_bodyNames(const void *valuePtr)
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
HavokPhysicsXModelLOD::_Auto::isValid_m_bodyBindPoses
==============
*/
bool HavokPhysicsXModelLOD::_Auto::isValid_m_bodyBindPoses(const void *valuePtr)
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
HavokPhysicsXModelLOD::_Auto::isValid_m_shapeTagData
==============
*/
bool HavokPhysicsXModelLOD::_Auto::isValid_m_shapeTagData(const void *valuePtr)
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
HavokPhysicsXModelLOD::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsXModelLOD::_Auto::isValidPtr(const void *valuePtr)
{
  return HavokPhysicsXModelLOD::_Auto::isValid((const HavokPhysicsXModelLOD *)valuePtr);
}

/*
==============
HavokPhysicsXModelLOD::_Auto::isValid
==============
*/
char HavokPhysicsXModelLOD::_Auto::isValid(const HavokPhysicsXModelLOD *value)
{
  int m_size; 
  int v2; 
  hknpShape **m_data; 
  int v4; 
  BOOL v5; 
  int v6; 
  int v7; 
  hkStringPtr *v8; 
  bool v9; 
  int v10; 
  int v11; 
  int v12; 
  hkTransformf *v13; 
  int v14; 
  int v15; 
  int v16; 
  HavokPhysicsXModelLOD::XModelCollisionTagData *v17; 

  m_size = value->m_shapes.m_size;
  if ( m_size < 0 )
    return 0;
  v2 = value->m_shapes.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v2 < m_size )
    return 0;
  m_data = value->m_shapes.m_data;
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
  v6 = value->m_bodyNames.m_size;
  if ( v6 < 0 )
    return 0;
  v7 = value->m_bodyNames.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v7 < v6 )
    return 0;
  v8 = value->m_bodyNames.m_data;
  v9 = v7 == 0;
  v10 = 0;
  LOBYTE(v10) = v9 ? v8 == NULL : v8 != NULL;
  if ( !v10 )
    return 0;
  v11 = value->m_bodyBindPoses.m_size;
  if ( v11 < 0 )
    return 0;
  v12 = value->m_bodyBindPoses.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v12 < v11 )
    return 0;
  v13 = value->m_bodyBindPoses.m_data;
  v9 = v12 == 0;
  v14 = 0;
  LOBYTE(v14) = v9 ? v13 == NULL : v13 != NULL;
  if ( v14 && (v15 = value->m_shapeTagData.m_size, v15 >= 0) && (v16 = value->m_shapeTagData.m_capacityAndFlags & 0x3FFFFFFF, v16 >= v15) && ((v17 = value->m_shapeTagData.m_data, !v16) ? (LOBYTE(v4) = v17 == NULL) : (LOBYTE(v4) = v17 != NULL), v4) )
    return 1;
  else
    return 0;
}

/*
==============
HavokPhysicsXModelLOD::reflectValidate
==============
*/

bool __fastcall HavokPhysicsXModelLOD::reflectValidate(HavokPhysicsXModelLOD *this)
{
  return HavokPhysicsXModelLOD::_Auto::isValid(this);
}

/*
==============
HavokPhysicsXModelLOD::XModelCollisionTagData::reflectValidate
==============
*/
char HavokPhysicsXModelLOD::XModelCollisionTagData::reflectValidate(HavokPhysicsXModelLOD::XModelCollisionTagData *this)
{
  return 1;
}

