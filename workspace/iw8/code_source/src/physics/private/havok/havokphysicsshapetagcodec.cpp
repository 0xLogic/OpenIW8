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
  __int64 v4; 
  __int64 v8; 
  bool v9; 
  char v14; 
  int v22; 
  __int64 v23; 

  v4 = dataIndex;
  _RBX = data;
  if ( (unsigned int)dataIndex >= 0x8A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8784, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "dataIndex doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", dataIndex, 138) )
    __debugbreak();
  _RBP = 0x140000000ui64;
  v8 = 3 * v4;
  v9 = 2 * v8 == 0;
  _RDI = 2 * v8;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, ss:rva PROFILE_DATA_FIELDS.minVal[rbp+rdi*8]; min
    vucomiss xmm1, xmm0
    vmovss  xmm2, ss:rva PROFILE_DATA_FIELDS.maxVal[rbp+rdi*8]; max
  }
  if ( v9 )
  {
    v14 = 0;
  }
  else
  {
    __asm { vucomiss xmm2, xmm0 }
    v14 = 1;
  }
  switch ( *((_DWORD *)&PROFILE_DATA_FIELDS[0].type + 2 * _RDI) )
  {
    case 1:
      if ( v14 )
      {
        __asm
        {
          vcvttss2si r8d, xmm2; max
          vcvttss2si edx, xmm1; min
        }
        _RBX->u.byteVal = I_tclamp<unsigned char>(_RBX->u.byteVal, _EDX, _ER8);
      }
      goto $LN10_130;
    case 2:
$LN10_130:
      *(&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI)) = _RBX->u.byteVal;
      break;
    case 3:
      if ( v14 )
      {
        __asm
        {
          vcvttss2si r8d, xmm2; max
          vcvttss2si edx, xmm1; min
        }
        _RBX->u.shortVal = I_tclamp<short>(_RBX->u.shortVal, _EDX, _ER8);
      }
      *(_WORD *)(&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI)) = _RBX->u.shortVal;
      break;
    case 4:
      if ( v14 )
      {
        __asm
        {
          vcvttss2si r8d, xmm2; max
          vcvttss2si edx, xmm1; min
        }
        _RBX->u.intVal = I_clamp(_RBX->u.intVal, _EDX, _ER8);
      }
      *(_DWORD *)(&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI)) = _RBX->u.intVal;
      break;
    case 5:
      if ( v14 )
      {
        __asm { vmovss  xmm0, dword ptr [rbx+8]; val }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovss  dword ptr [rbx+8], xmm0 }
      }
      *(_DWORD *)(&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI)) = _RBX->u.intVal;
      break;
    case 6:
      Core_strcpy((char *)&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI), *(&PROFILE_DATA_FIELDS[0].size + 2 * _RDI), _RBX->u.stringVal);
      break;
    case 7:
      memcpy_0(&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI), _RBX->u.stringVal, *(&PROFILE_DATA_FIELDS[0].size + 2 * _RDI));
      break;
    case 8:
      v22 = *(&PROFILE_DATA_FIELDS[0].bitShift + 2 * _RDI);
      v23 = ((1i64 << *(&PROFILE_DATA_FIELDS[0].size + 2 * _RDI)) - 1) << v22;
      *(_DWORD *)(&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI)) = *(_DWORD *)(&settings->isProfileLoggedIn + *(&PROFILE_DATA_FIELDS[0].offset + _RDI)) & ~(_DWORD)v23 | v23 & (_RBX->u.intVal << v22);
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
  unsigned int v14; 
  unsigned int v15; 

  v2 = 0;
  _R14 = shapeTagData;
  v5 = 0;
  m_size = this->m_pregeneratedShapeTagData->m_size;
  if ( m_size )
  {
    while ( !HavokPhysicsShapeList::ShapeTagData::Matches(_R14, &this->m_pregeneratedShapeTagData->m_data[v5]) )
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
      if ( &this->m_additionalShapeTagData.m_data[v9] )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovups xmmword ptr [rdx], xmm0
          vmovsd  xmm1, qword ptr [r14+10h]
          vmovsd  qword ptr [rdx+10h], xmm1
        }
        v10 = this->m_additionalShapeTagData.m_size;
      }
      v14 = m_size + v7;
      this->m_additionalShapeTagData.m_size = v10 + 1;
      if ( v14 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsshapetagcodec.cpp", 189, ASSERT_TYPE_ASSERT, "(numPregeneratedShapeTags + numAdditionalTags <= 0xffff)", (const char *)&queryFormat, "numPregeneratedShapeTags + numAdditionalTags <= 0xffff") )
        __debugbreak();
      v15 = v14;
    }
    else
    {
      while ( !HavokPhysicsShapeList::ShapeTagData::Matches(_R14, &this->m_additionalShapeTagData.m_data[v2]) )
      {
        if ( ++v2 >= v7 )
          goto LABEL_7;
      }
      v15 = m_size + v2;
    }
    return truncate_cast<unsigned short,unsigned int>(v15);
  }
}

