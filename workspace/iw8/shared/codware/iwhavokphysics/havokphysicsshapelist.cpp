/*
==============
HavokPhysicsShapeList_GenerateShapeTagOffsetCodecInfo
==============
*/

unsigned int __fastcall HavokPhysicsShapeList_GenerateShapeTagOffsetCodecInfo(const unsigned int index)
{
  return ?HavokPhysicsShapeList_GenerateShapeTagOffsetCodecInfo@@YAII@Z(index);
}

/*
==============
HavokPhysicsShapeList_IsShapeTagOffsetCodecInfo
==============
*/

bool __fastcall HavokPhysicsShapeList_IsShapeTagOffsetCodecInfo(const unsigned int codecInfo, unsigned int *indexOptionalOut)
{
  return ?HavokPhysicsShapeList_IsShapeTagOffsetCodecInfo@@YA_NIPEAI@Z(codecInfo, indexOptionalOut);
}

/*
==============
HavokPhysicsShapeList::ShapeTagData::Matches
==============
*/

bool __fastcall HavokPhysicsShapeList::ShapeTagData::Matches(HavokPhysicsShapeList::ShapeTagData *this, const HavokPhysicsShapeList::ShapeTagData *other)
{
  return ?Matches@ShapeTagData@HavokPhysicsShapeList@@QEBA_NAEBU12@@Z(this, other);
}

/*
==============
HavokPhysicsShapeList_GenerateShapeTagOffsetCodecInfo
==============
*/
__int64 HavokPhysicsShapeList_GenerateShapeTagOffsetCodecInfo(const unsigned int index)
{
  int v4; 

  if ( index >= 0x7FFFFFFF )
  {
    v4 = 0x7FFFFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iwhavokphysics\\havokphysicsshapelist.cpp", 58, ASSERT_TYPE_ASSERT, "( index ) < ( ((1u << 31) -1) )", "%s < %s\n\t%u, %u", "index", "SHAPE_TAG_CODEC_INFO_INDEX_MASK", index, v4) )
      __debugbreak();
  }
  return index | 0x80000000;
}

/*
==============
HavokPhysicsShapeList_IsShapeTagOffsetCodecInfo
==============
*/
bool HavokPhysicsShapeList_IsShapeTagOffsetCodecInfo(const unsigned int codecInfo, unsigned int *indexOptionalOut)
{
  unsigned int v2; 

  if ( codecInfo == -1 )
  {
    LOBYTE(v2) = 0;
  }
  else
  {
    v2 = codecInfo >> 31;
    if ( (codecInfo & 0x80000000) != 0 && indexOptionalOut )
      *indexOptionalOut = codecInfo & 0x7FFFFFFF;
  }
  return v2;
}

/*
==============
HavokPhysicsShapeList::ShapeTagData::Matches
==============
*/
bool HavokPhysicsShapeList::ShapeTagData::Matches(HavokPhysicsShapeList::ShapeTagData *this, const HavokPhysicsShapeList::ShapeTagData *other)
{
  return other->m_collisionFilterInfo == this->m_collisionFilterInfo && other->m_materialCRC == this->m_materialCRC && other->m_materialId.m_value == this->m_materialId.m_value && other->m_userData == this->m_userData;
}

