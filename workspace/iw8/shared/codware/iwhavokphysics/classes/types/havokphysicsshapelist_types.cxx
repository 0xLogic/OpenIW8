/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_shapes
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_shapes(const void *valuePtr)
{
  return ?isValid_m_shapes@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_shapes
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_shapes(const void *valuePtr)
{
  return ?isValid_m_shapes@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_shapeNames
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_shapeNames(const void *valuePtr)
{
  return ?isValid_m_shapeNames@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValidPtr(const void *valuePtr)
{
  return ?isValidPtr@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_vertCounts
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_vertCounts(const void *valuePtr)
{
  return ?isValid_m_vertCounts@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::reflectValidate
==============
*/

bool __fastcall HavokPhysicsShapeList::reflectValidate(HavokPhysicsShapeList *this)
{
  return ?reflectValidate@HavokPhysicsShapeList@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_minMaxes
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_minMaxes(const void *valuePtr)
{
  return ?isValid_m_minMaxes@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_shapeTagData
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_shapeTagData(const void *valuePtr)
{
  return ?isValid_m_shapeTagData@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_convexCounts
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_convexCounts(const void *valuePtr)
{
  return ?isValid_m_convexCounts@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid(const HavokPhysicsShapeList *value)
{
  return ?isValid@_Auto@HavokPhysicsShapeList@@SA_NAEBV2@@Z(value);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_triCounts
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_triCounts(const void *valuePtr)
{
  return ?isValid_m_triCounts@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_shapeIndices
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_shapeIndices(const void *valuePtr)
{
  return ?isValid_m_shapeIndices@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::ShapeTagData::reflectValidate
==============
*/

bool __fastcall HavokPhysicsShapeList::ShapeTagData::reflectValidate(HavokPhysicsShapeList::ShapeTagData *this)
{
  return ?reflectValidate@ShapeTagData@HavokPhysicsShapeList@@QEBA_NXZ(this);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_shapeContents
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValid_m_shapeContents(const void *valuePtr)
{
  return ?isValid_m_shapeContents@_Auto@HavokPhysicsShapeList@@SA_NPEBX@Z(valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid_m_shapes
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_shapes(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_shapeIndices
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_shapeIndices(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_shapeNames
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_shapeNames(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_vertCounts
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_vertCounts(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_triCounts
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_triCounts(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_minMaxes
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_minMaxes(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_shapeTagData
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_shapeTagData(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_shapeContents
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_shapeContents(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValid_m_convexCounts
==============
*/
bool HavokPhysicsShapeList::_Auto::isValid_m_convexCounts(const void *valuePtr)
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
HavokPhysicsShapeList::_Auto::isValidPtr
==============
*/

bool __fastcall HavokPhysicsShapeList::_Auto::isValidPtr(const void *valuePtr)
{
  return HavokPhysicsShapeList::_Auto::isValid((const HavokPhysicsShapeList *)valuePtr);
}

/*
==============
HavokPhysicsShapeList::_Auto::isValid
==============
*/
char HavokPhysicsShapeList::_Auto::isValid(const HavokPhysicsShapeList *value)
{
  int m_size; 
  int v2; 
  hknpShape **m_data; 
  int v4; 
  BOOL v5; 
  int v6; 
  int v7; 
  int *v8; 
  bool v9; 
  int v10; 
  int v11; 
  int v12; 
  hkStringPtr *v13; 
  int v14; 
  int v15; 
  int v16; 
  int *v17; 
  int v18; 
  int v19; 
  int v20; 
  int *v21; 
  int v22; 
  int v23; 
  int v24; 
  hkVector4f *v25; 
  int v26; 
  int v27; 
  int v28; 
  HavokPhysicsShapeList::ShapeTagData *v29; 
  int v30; 
  int v31; 
  int v32; 
  int *v33; 
  int v34; 
  int v35; 
  int v36; 
  int *v37; 

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
  v6 = value->m_shapeIndices.m_size;
  if ( v6 < 0 )
    return 0;
  v7 = value->m_shapeIndices.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v7 < v6 )
    return 0;
  v8 = value->m_shapeIndices.m_data;
  v9 = v7 == 0;
  v10 = 0;
  LOBYTE(v10) = v9 ? v8 == NULL : v8 != NULL;
  if ( !v10 )
    return 0;
  v11 = value->m_shapeNames.m_size;
  if ( v11 < 0 )
    return 0;
  v12 = value->m_shapeNames.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v12 < v11 )
    return 0;
  v13 = value->m_shapeNames.m_data;
  v9 = v12 == 0;
  v14 = 0;
  LOBYTE(v14) = v9 ? v13 == NULL : v13 != NULL;
  if ( !v14 )
    return 0;
  v15 = value->m_vertCounts.m_size;
  if ( v15 < 0 )
    return 0;
  v16 = value->m_vertCounts.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v16 < v15 )
    return 0;
  v17 = value->m_vertCounts.m_data;
  v9 = v16 == 0;
  v18 = 0;
  LOBYTE(v18) = v9 ? v17 == NULL : v17 != NULL;
  if ( !v18 )
    return 0;
  v19 = value->m_triCounts.m_size;
  if ( v19 < 0 )
    return 0;
  v20 = value->m_triCounts.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v20 < v19 )
    return 0;
  v21 = value->m_triCounts.m_data;
  v9 = v20 == 0;
  v22 = 0;
  LOBYTE(v22) = v9 ? v21 == NULL : v21 != NULL;
  if ( !v22 )
    return 0;
  v23 = value->m_minMaxes.m_size;
  if ( v23 < 0 )
    return 0;
  v24 = value->m_minMaxes.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v24 < v23 )
    return 0;
  v25 = value->m_minMaxes.m_data;
  v9 = v24 == 0;
  v26 = 0;
  LOBYTE(v26) = v9 ? v25 == NULL : v25 != NULL;
  if ( !v26 )
    return 0;
  v27 = value->m_shapeTagData.m_size;
  if ( v27 < 0 )
    return 0;
  v28 = value->m_shapeTagData.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v28 < v27 )
    return 0;
  v29 = value->m_shapeTagData.m_data;
  v9 = v28 == 0;
  v30 = 0;
  LOBYTE(v30) = v9 ? v29 == NULL : v29 != NULL;
  if ( !v30 )
    return 0;
  v31 = value->m_shapeContents.m_size;
  if ( v31 < 0 )
    return 0;
  v32 = value->m_shapeContents.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v32 < v31 )
    return 0;
  v33 = value->m_shapeContents.m_data;
  v9 = v32 == 0;
  v34 = 0;
  LOBYTE(v34) = v9 ? v33 == NULL : v33 != NULL;
  if ( v34 && (v35 = value->m_convexCounts.m_size, v35 >= 0) && (v36 = value->m_convexCounts.m_capacityAndFlags & 0x3FFFFFFF, v36 >= v35) && ((v37 = value->m_convexCounts.m_data, !v36) ? (LOBYTE(v4) = v37 == NULL) : (LOBYTE(v4) = v37 != NULL), v4) )
    return 1;
  else
    return 0;
}

/*
==============
HavokPhysicsShapeList::reflectValidate
==============
*/

bool __fastcall HavokPhysicsShapeList::reflectValidate(HavokPhysicsShapeList *this)
{
  return HavokPhysicsShapeList::_Auto::isValid(this);
}

/*
==============
HavokPhysicsShapeList::ShapeTagData::reflectValidate
==============
*/
char HavokPhysicsShapeList::ShapeTagData::reflectValidate(HavokPhysicsShapeList::ShapeTagData *this)
{
  return 1;
}

