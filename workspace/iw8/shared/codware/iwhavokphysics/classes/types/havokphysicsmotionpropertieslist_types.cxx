/*
==============
HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNames
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNames(const void *valuePtr)
{
  return ?isValid_m_motionPropertiesNames@_Auto@HavokPhysicsMotionPropertiesList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionProperties
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionProperties(const void *valuePtr)
{
  return ?isValid_m_motionProperties@_Auto@HavokPhysicsMotionPropertiesList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsMotionPropertiesList::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::_Auto::isValidPtr(const void *valuePtr)
{
  return ?isValidPtr@_Auto@HavokPhysicsMotionPropertiesList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsMotionPropertiesList::_Auto::isValid
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::_Auto::isValid(const HavokPhysicsMotionPropertiesList *value)
{
  return ?isValid@_Auto@HavokPhysicsMotionPropertiesList@@SA_NAEBV2@@Z(value);
}

/*
==============
HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNameCRC32s
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNameCRC32s(const void *valuePtr)
{
  return ?isValid_m_motionPropertiesNameCRC32s@_Auto@HavokPhysicsMotionPropertiesList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsMotionPropertiesList::reflectValidate
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::reflectValidate(HavokPhysicsMotionPropertiesList *this)
{
  return ?reflectValidate@HavokPhysicsMotionPropertiesList@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionProperties
==============
*/
bool HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionProperties(const void *valuePtr)
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
HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNames
==============
*/
bool HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNames(const void *valuePtr)
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
HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNameCRC32s
==============
*/
bool HavokPhysicsMotionPropertiesList::_Auto::isValid_m_motionPropertiesNameCRC32s(const void *valuePtr)
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
HavokPhysicsMotionPropertiesList::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::_Auto::isValidPtr(const void *valuePtr)
{
  return HavokPhysicsMotionPropertiesList::_Auto::isValid((const HavokPhysicsMotionPropertiesList *)valuePtr);
}

/*
==============
HavokPhysicsMotionPropertiesList::_Auto::isValid
==============
*/
char HavokPhysicsMotionPropertiesList::_Auto::isValid(const HavokPhysicsMotionPropertiesList *value)
{
  int m_size; 
  int v2; 
  hknpMotionProperties *m_data; 
  int v4; 
  BOOL v5; 
  int v6; 
  int v7; 
  hkStringPtr *v8; 
  bool v9; 
  int v10; 
  int v11; 
  int v12; 
  int *v13; 

  m_size = value->m_motionProperties.m_size;
  if ( m_size < 0 )
    return 0;
  v2 = value->m_motionProperties.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v2 < m_size )
    return 0;
  m_data = value->m_motionProperties.m_data;
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
  v6 = value->m_motionPropertiesNames.m_size;
  if ( v6 < 0 )
    return 0;
  v7 = value->m_motionPropertiesNames.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v7 < v6 )
    return 0;
  v8 = value->m_motionPropertiesNames.m_data;
  v9 = v7 == 0;
  v10 = 0;
  LOBYTE(v10) = v9 ? v8 == NULL : v8 != NULL;
  if ( v10 && (v11 = value->m_motionPropertiesNameCRC32s.m_size, v11 >= 0) && (v12 = value->m_motionPropertiesNameCRC32s.m_capacityAndFlags & 0x3FFFFFFF, v12 >= v11) && ((v13 = value->m_motionPropertiesNameCRC32s.m_data, !v12) ? (LOBYTE(v4) = v13 == NULL) : (LOBYTE(v4) = v13 != NULL), v4) )
    return 1;
  else
    return 0;
}

/*
==============
HavokPhysicsMotionPropertiesList::reflectValidate
==============
*/

bool __fastcall HavokPhysicsMotionPropertiesList::reflectValidate(HavokPhysicsMotionPropertiesList *this)
{
  return HavokPhysicsMotionPropertiesList::_Auto::isValid(this);
}

