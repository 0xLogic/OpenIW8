/*
==============
HavokPhysicsMaterialList::_Auto::isValid
==============
*/

bool __fastcall HavokPhysicsMaterialList::_Auto::isValid(const HavokPhysicsMaterialList *value)
{
  return ?isValid@_Auto@HavokPhysicsMaterialList@@SA_NAEBV2@@Z(value);
}

/*
==============
HavokPhysicsMaterialList::reflectValidate
==============
*/

bool __fastcall HavokPhysicsMaterialList::reflectValidate(HavokPhysicsMaterialList *this)
{
  return ?reflectValidate@HavokPhysicsMaterialList@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsMaterialList::_Auto::isValid_m_materialsNameCRC32s
==============
*/

bool __fastcall HavokPhysicsMaterialList::_Auto::isValid_m_materialsNameCRC32s(const void *valuePtr)
{
  return ?isValid_m_materialsNameCRC32s@_Auto@HavokPhysicsMaterialList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsMaterialList::_Auto::isValid_m_materials
==============
*/

bool __fastcall HavokPhysicsMaterialList::_Auto::isValid_m_materials(const void *valuePtr)
{
  return ?isValid_m_materials@_Auto@HavokPhysicsMaterialList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsMaterialList::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsMaterialList::_Auto::isValidPtr(const void *valuePtr)
{
  return ?isValidPtr@_Auto@HavokPhysicsMaterialList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsMaterialList::_Auto::isValid_m_materials
==============
*/
bool HavokPhysicsMaterialList::_Auto::isValid_m_materials(const void *valuePtr)
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
HavokPhysicsMaterialList::_Auto::isValid_m_materialsNameCRC32s
==============
*/
bool HavokPhysicsMaterialList::_Auto::isValid_m_materialsNameCRC32s(const void *valuePtr)
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
HavokPhysicsMaterialList::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsMaterialList::_Auto::isValidPtr(const void *valuePtr)
{
  return HavokPhysicsMaterialList::_Auto::isValid((const HavokPhysicsMaterialList *)valuePtr);
}

/*
==============
HavokPhysicsMaterialList::_Auto::isValid
==============
*/
char HavokPhysicsMaterialList::_Auto::isValid(const HavokPhysicsMaterialList *value)
{
  int m_size; 
  int v2; 
  hknpMaterial *m_data; 
  int v4; 
  BOOL v5; 
  int v6; 
  int v7; 
  int *v8; 

  m_size = value->m_materials.m_size;
  if ( m_size < 0 )
    return 0;
  v2 = value->m_materials.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v2 < m_size )
    return 0;
  m_data = value->m_materials.m_data;
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
  if ( v5 && (v6 = value->m_materialsNameCRC32s.m_size, v6 >= 0) && (v7 = value->m_materialsNameCRC32s.m_capacityAndFlags & 0x3FFFFFFF, v7 >= v6) && ((v8 = value->m_materialsNameCRC32s.m_data, !v7) ? (LOBYTE(v4) = v8 == NULL) : (LOBYTE(v4) = v8 != NULL), v4) )
    return 1;
  else
    return 0;
}

/*
==============
HavokPhysicsMaterialList::reflectValidate
==============
*/

bool __fastcall HavokPhysicsMaterialList::reflectValidate(HavokPhysicsMaterialList *this)
{
  return HavokPhysicsMaterialList::_Auto::isValid(this);
}

