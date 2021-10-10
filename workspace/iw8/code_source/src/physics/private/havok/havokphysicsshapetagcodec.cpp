/*
==============
HavokPhysicsShapeTagCodec::HavokPhysicsShapeTagCodec
==============
*/

void __fastcall HavokPhysicsShapeTagCodec::HavokPhysicsShapeTagCodec(HavokPhysicsShapeTagCodec *this)
{
  ??0HavokPhysicsShapeTagCodec@@QEAA@XZ(this);
}

/*
==============
HavokPhysicsShapeTagCodec::Clear
==============
*/

void __fastcall HavokPhysicsShapeTagCodec::Clear(HavokPhysicsShapeTagCodec *this)
{
  ?Clear@HavokPhysicsShapeTagCodec@@QEAAXXZ(this);
}

/*
==============
HavokPhysicsShapeTagCodec::SetData
==============
*/

void __fastcall HavokPhysicsShapeTagCodec::SetData(HavokPhysicsShapeTagCodec *this, hkArray<HavokPhysicsShapeList::ShapeTagData,hkContainerHeapAllocator> *shapeTagData)
{
  ?SetData@HavokPhysicsShapeTagCodec@@QEAAXPEAV?$hkArray@UShapeTagData@HavokPhysicsShapeList@@UhkContainerHeapAllocator@@@@@Z(this, shapeTagData);
}

/*
==============
HavokPhysicsShapeTagCodec::decode
==============
*/

void __fastcall HavokPhysicsShapeTagCodec::decode(HavokPhysicsShapeTagCodec *this, unsigned __int16 shapeTag, hknpCollisionQueryType::Enum queryType, const hknpBody *body, const hknpShape *rootShape, const hknpShape *parentShape, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey, const hknpShape *shape, hknpQueryFilterData *decodedDataOut)
{
  ?decode@HavokPhysicsShapeTagCodec@@UEBAXGW4Enum@hknpCollisionQueryType@@PEBVhknpBody@@PEBVhknpShape@@2U?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@2PEAUhknpQueryFilterData@@@Z(this, shapeTag, queryType, body, rootShape, parentShape, shapeKey, shape, decodedDataOut);
}

/*
==============
SetData
==============
*/

void __fastcall SetData(GamerSettingState *settings, int dataIndex, GamerProfileData *data)
{
  ?SetData@@YAXPEAUGamerSettingState@@HUGamerProfileData@@@Z(settings, dataIndex, data);
}

/*
==============
HavokPhysicsShapeTagCodec::findShapeTag
==============
*/

unsigned __int16 __fastcall HavokPhysicsShapeTagCodec::findShapeTag(HavokPhysicsShapeTagCodec *this, HavokPhysicsShapeList::ShapeTagData *shapeTagData)
{
  return ?findShapeTag@HavokPhysicsShapeTagCodec@@QEAAGAEAUShapeTagData@HavokPhysicsShapeList@@@Z(this, shapeTagData);
}

/*
==============
SetData
==============
*/
void SetData(GamerSettingState *settings, int dataIndex, GamerProfileData *data)
{
  __int64 v3; 
  __int64 v6; 
  float minVal; 
  float maxVal; 
  bool v9; 
  double v10; 
  int bitShift; 
  __int64 v12; 

  v3 = dataIndex;
  if ( (unsigned int)dataIndex >= 0x8A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8784, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "dataIndex doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", dataIndex, 138) )
    __debugbreak();
  v6 = v3;
  minVal = PROFILE_DATA_FIELDS[v6].minVal;
  maxVal = PROFILE_DATA_FIELDS[v6].maxVal;
  v9 = minVal != 0.0 && maxVal != 0.0;
  switch ( PROFILE_DATA_FIELDS[v6].type )
  {
    case TYPE_BYTE:
      if ( v9 )
        data->u.byteVal = I_tclamp<unsigned char>(data->u.byteVal, (int)minVal, (int)maxVal);
      goto $LN10_130;
    case TYPE_BOOL:
$LN10_130:
      *(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset) = data->u.byteVal;
      break;
    case TYPE_SHORT:
      if ( v9 )
        data->u.shortVal = I_tclamp<short>(data->u.shortVal, (int)minVal, (int)maxVal);
      *(_WORD *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset) = data->u.shortVal;
      break;
    case TYPE_INT:
      if ( v9 )
        data->u.intVal = I_clamp(data->u.intVal, (int)minVal, (int)maxVal);
      *(_DWORD *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset) = data->u.intVal;
      break;
    case TYPE_FLOAT:
      if ( v9 )
      {
        v10 = I_fclamp(data->u.floatVal, minVal, maxVal);
        data->u.floatVal = *(float *)&v10;
      }
      *(_DWORD *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset) = data->u.intVal;
      break;
    case TYPE_STRING:
      Core_strcpy((char *)&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset, PROFILE_DATA_FIELDS[v6].size, data->u.stringVal);
      break;
    case TYPE_BUFFER:
      memcpy_0(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset, data->u.stringVal, PROFILE_DATA_FIELDS[v6].size);
      break;
    case TYPE_FLAG:
      bitShift = PROFILE_DATA_FIELDS[v6].bitShift;
      v12 = ((1i64 << PROFILE_DATA_FIELDS[v6].size) - 1) << bitShift;
      *(_DWORD *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset) = *(_DWORD *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v6].offset) & ~(_DWORD)v12 | v12 & (data->u.intVal << bitShift);
      break;
    default:
      return;
  }
}

/*
==============
HavokPhysicsShapeTagCodec::HavokPhysicsShapeTagCodec
==============
*/
void HavokPhysicsShapeTagCodec::HavokPhysicsShapeTagCodec(HavokPhysicsShapeTagCodec *this)
{
  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->m_hints.m_storage = 0;
  this->m_type.m_storage = 3;
  this->__vftable = (HavokPhysicsShapeTagCodec_vtbl *)&HavokPhysicsShapeTagCodec::`vftable';
  this->m_additionalShapeTagData.m_data = NULL;
  this->m_additionalShapeTagData.m_size = 0;
  this->m_additionalShapeTagData.m_capacityAndFlags = 0x80000000;
}

/*
==============
HavokPhysicsShapeTagCodec::Clear
==============
*/
void HavokPhysicsShapeTagCodec::Clear(HavokPhysicsShapeTagCodec *this)
{
  this->m_pregeneratedShapeTagData = NULL;
}

/*
==============
HavokPhysicsShapeTagCodec::SetData
==============
*/
void HavokPhysicsShapeTagCodec::SetData(HavokPhysicsShapeTagCodec *this, hkArray<HavokPhysicsShapeList::ShapeTagData,hkContainerHeapAllocator> *shapeTagData)
{
  this->m_pregeneratedShapeTagData = shapeTagData;
  if ( !shapeTagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 44, ASSERT_TYPE_ASSERT, "(m_pregeneratedShapeTagData)", (const char *)&queryFormat, "m_pregeneratedShapeTagData") )
    __debugbreak();
}

/*
==============
HavokPhysicsShapeTagCodec::decode
==============
*/
void HavokPhysicsShapeTagCodec::decode(HavokPhysicsShapeTagCodec *this, unsigned __int16 shapeTag, hknpCollisionQueryType::Enum queryType, const hknpBody *body, const hknpShape *rootShape, const hknpShape *parentShape, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKey, const hknpShape *shape, hknpQueryFilterData *decodedDataOut)
{
  unsigned __int16 v9; 
  const hknpShape *v11; 
  hknpQueryFilterData *v12; 
  const hknpShape *v13; 
  const hknpShape *v14; 
  bool IsShapeTagOffsetCodecInfo; 
  unsigned int v16; 
  bool v17; 
  __int64 m_surfaceFlags; 
  __int64 v19; 
  hkArray<HavokPhysicsXModelLOD::XModelCollisionTagData,hkContainerHeapAllocator> *v20; 
  HavokPhysicsXModelLOD::XModelCollisionTagData *v21; 
  hkArray<HavokPhysicsShapeList::ShapeTagData,hkContainerHeapAllocator> *m_pregeneratedShapeTagData; 
  unsigned int m_size; 
  __int64 v24; 
  HavokPhysicsShapeList::ShapeTagData *m_data; 
  HavokPhysicsShapeList::ShapeTagData *v26; 
  unsigned __int64 m_userData; 
  unsigned int indexOptionalOut; 

  v9 = shapeTag;
  if ( shapeTag == 0xFFFF || !this->m_pregeneratedShapeTagData )
  {
    decodedDataOut->m_userData = 0i64;
    return;
  }
  v11 = parentShape;
  if ( !parentShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 78, ASSERT_TYPE_ASSERT, "(parentShape)", (const char *)&queryFormat, "parentShape") )
    __debugbreak();
  v12 = decodedDataOut;
  if ( !decodedDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 79, ASSERT_TYPE_ASSERT, "(decodedDataOut)", (const char *)&queryFormat, "decodedDataOut") )
    __debugbreak();
  v13 = shape;
  if ( shape )
  {
    v14 = shape;
    if ( (shape->m_flags.m_storage & 4) == 0 )
      v14 = NULL;
  }
  else
  {
    v14 = NULL;
  }
  if ( (v11->m_flags.m_storage & 4) == 0 )
    v11 = NULL;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 84, ASSERT_TYPE_ASSERT, "(compositeParentShape)", (const char *)&queryFormat, "compositeParentShape") )
    __debugbreak();
  IsShapeTagOffsetCodecInfo = HavokPhysicsShapeList_IsShapeTagOffsetCodecInfo((const unsigned int)v11[1].__vftable, &indexOptionalOut);
  if ( v14 )
  {
    v16 = (unsigned int)v14[1].__vftable;
    if ( v16 != -1 )
    {
      v17 = !HavokPhysicsShapeList_IsShapeTagOffsetCodecInfo(v16, NULL);
      m_surfaceFlags = 0xFFFFFFFFi64;
      if ( v17 )
      {
        v12->m_collisionFilterInfo = -1;
        v12->m_materialId.m_value = 0;
LABEL_23:
        v12->m_userData = m_surfaceFlags;
        return;
      }
    }
  }
  if ( LODWORD(v11[1].__vftable) != -1 )
  {
    if ( !IsShapeTagOffsetCodecInfo )
    {
      HavokPhysics_LockAssetRead();
      v19 = SLODWORD(v11[1].__vftable);
      if ( (int)v19 >= g_havokPhysicsXModelLODShapeTagDatas->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 140, ASSERT_TYPE_ASSERT, "(shapeTagCodecId < g_havokPhysicsXModelLODShapeTagDatas->getSize())", (const char *)&queryFormat, "shapeTagCodecId < g_havokPhysicsXModelLODShapeTagDatas->getSize()") )
        __debugbreak();
      v20 = &g_havokPhysicsXModelLODShapeTagDatas->m_data[v19];
      if ( v9 >= v20->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 142, ASSERT_TYPE_ASSERT, "(shapeTag < tagDataArray.getSize())", (const char *)&queryFormat, "shapeTag < tagDataArray.getSize()") )
        __debugbreak();
      v21 = &v20->m_data[v9];
      HavokPhysics_UnlockAssetRead();
      v12->m_collisionFilterInfo = v21->m_collisionFilterInfo;
      v12->m_materialId.m_value = 0;
      m_surfaceFlags = v21->m_surfaceFlags;
      goto LABEL_23;
    }
    goto LABEL_35;
  }
  if ( IsShapeTagOffsetCodecInfo )
LABEL_35:
    v9 = truncate_cast<unsigned short,unsigned int>(indexOptionalOut + v9);
  if ( v9 >= this->m_additionalShapeTagData.m_size + this->m_pregeneratedShapeTagData->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 107, ASSERT_TYPE_ASSERT, "(shapeTag < m_pregeneratedShapeTagData->getSize() + m_additionalShapeTagData.getSize())", (const char *)&queryFormat, "shapeTag < m_pregeneratedShapeTagData->getSize() + m_additionalShapeTagData.getSize()") )
    __debugbreak();
  if ( this->m_additionalShapeTagData.m_size + this->m_pregeneratedShapeTagData->m_size >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 108, ASSERT_TYPE_ASSERT, "(m_pregeneratedShapeTagData->getSize() + m_additionalShapeTagData.getSize() < 65535)", (const char *)&queryFormat, "m_pregeneratedShapeTagData->getSize() + m_additionalShapeTagData.getSize() < 65535") )
    __debugbreak();
  m_pregeneratedShapeTagData = this->m_pregeneratedShapeTagData;
  m_size = m_pregeneratedShapeTagData->m_size;
  if ( v9 >= m_size )
  {
    v24 = (int)(v9 - m_size);
    m_data = this->m_additionalShapeTagData.m_data;
  }
  else
  {
    v24 = v9;
    m_data = m_pregeneratedShapeTagData->m_data;
  }
  v26 = &m_data[v24];
  v12->m_collisionFilterInfo = v26->m_collisionFilterInfo;
  v12->m_materialId.m_value = v26->m_materialId.m_value;
  m_userData = v26->m_userData;
  v12->m_userData = m_userData;
  if ( v13 && !(_DWORD)m_userData )
  {
    m_surfaceFlags = m_userData | LODWORD(v13->m_userData);
    goto LABEL_23;
  }
}

/*
==============
HavokPhysicsShapeTagCodec::findShapeTag
==============
*/
unsigned __int16 HavokPhysicsShapeTagCodec::findShapeTag(HavokPhysicsShapeTagCodec *this, HavokPhysicsShapeList::ShapeTagData *shapeTagData)
{
  unsigned __int16 v2; 
  unsigned __int16 v5; 
  unsigned int m_size; 
  int v7; 
  hkMemoryAllocator *v8; 
  int v9; 
  int v10; 
  HavokPhysicsShapeList::ShapeTagData *v11; 
  unsigned int v12; 
  unsigned int v13; 

  v2 = 0;
  v5 = 0;
  m_size = this->m_pregeneratedShapeTagData->m_size;
  if ( m_size )
  {
    while ( !HavokPhysicsShapeList::ShapeTagData::Matches(shapeTagData, &this->m_pregeneratedShapeTagData->m_data[v5]) )
    {
      if ( ++v5 >= m_size )
        goto LABEL_4;
    }
    return v5;
  }
  else
  {
LABEL_4:
    v7 = this->m_additionalShapeTagData.m_size;
    if ( v7 <= 0 )
    {
LABEL_7:
      v8 = hkMemHeapAllocator();
      v9 = this->m_additionalShapeTagData.m_size;
      v10 = v9;
      if ( v9 == (this->m_additionalShapeTagData.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v8, &this->m_additionalShapeTagData, 24);
        v9 = this->m_additionalShapeTagData.m_size;
        v10 = v9;
      }
      v11 = &this->m_additionalShapeTagData.m_data[v9];
      if ( v11 )
      {
        *(_OWORD *)&v11->m_collisionFilterInfo = *(_OWORD *)&shapeTagData->m_collisionFilterInfo;
        v11->m_userData = shapeTagData->m_userData;
        v10 = this->m_additionalShapeTagData.m_size;
      }
      v12 = m_size + v7;
      this->m_additionalShapeTagData.m_size = v10 + 1;
      if ( v12 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 189, ASSERT_TYPE_ASSERT, "(numPregeneratedShapeTags + numAdditionalTags <= 0xffff)", (const char *)&queryFormat, "numPregeneratedShapeTags + numAdditionalTags <= 0xffff") )
        __debugbreak();
      v13 = v12;
    }
    else
    {
      while ( !HavokPhysicsShapeList::ShapeTagData::Matches(shapeTagData, &this->m_additionalShapeTagData.m_data[v2]) )
      {
        if ( ++v2 >= v7 )
          goto LABEL_7;
      }
      v13 = m_size + v2;
    }
    return truncate_cast<unsigned short,unsigned int>(v13);
  }
}

