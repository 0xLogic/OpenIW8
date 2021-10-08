/*
==============
DObjGetSkelBoneIndex
==============
*/

int __fastcall DObjGetSkelBoneIndex(const DObj *obj, const int boneIndex)
{
  return ?DObjGetSkelBoneIndex@@YAHPEBUDObj@@H@Z(obj, boneIndex);
}

/*
==============
DObjBoneNameToBoneIndexMap_t<254>::findKeyOrFirstEmpty
==============
*/

unsigned int __fastcall DObjBoneNameToBoneIndexMap_t<254>::findKeyOrFirstEmpty(DObjBoneNameToBoneIndexMap_t<254> *this, const scr_string_t *key)
{
  return ?findKeyOrFirstEmpty@?$DObjBoneNameToBoneIndexMap_t@$0PO@@@AEBAIAEBW4scr_string_t@@@Z(this, key);
}

/*
==============
DObjBoneNameToBoneIndexMap_t<768>::findKeyOrFirstEmpty
==============
*/

unsigned int __fastcall DObjBoneNameToBoneIndexMap_t<768>::findKeyOrFirstEmpty(DObjBoneNameToBoneIndexMap_t<768> *this, const scr_string_t *key)
{
  return ?findKeyOrFirstEmpty@?$DObjBoneNameToBoneIndexMap_t@$0DAA@@@AEBAIAEBW4scr_string_t@@@Z(this, key);
}

/*
==============
XAnimTestPartBit
==============
*/

bool __fastcall XAnimTestPartBit(const DObjPartBits *partBits, int boneIndex)
{
  return ?XAnimTestPartBit@@YA_NPEBUDObjPartBits@@H@Z(partBits, boneIndex);
}

/*
==============
XAnimSetPartBit
==============
*/

void __fastcall XAnimSetPartBit(DObjPartBits *partBits, int boneIndex)
{
  ?XAnimSetPartBit@@YAXPEAUDObjPartBits@@H@Z(partBits, boneIndex);
}

/*
==============
DObjBoneParentMap_GetParentOrDuplicate
==============
*/

unsigned __int16 __fastcall DObjBoneParentMap_GetParentOrDuplicate(const DObjBoneParentMap *parentMap, int boneIndex)
{
  return ?DObjBoneParentMap_GetParentOrDuplicate@@YAGPEBUDObjBoneParentMap@@H@Z(parentMap, boneIndex);
}

/*
==============
DObjBoneParentMap_GetOriginalNonDuplicate
==============
*/

unsigned __int16 __fastcall DObjBoneParentMap_GetOriginalNonDuplicate(const DObjBoneParentMap *parentMap, int boneIndex)
{
  return ?DObjBoneParentMap_GetOriginalNonDuplicate@@YAGPEBUDObjBoneParentMap@@H@Z(parentMap, boneIndex);
}

/*
==============
XAnimSetPartBit
==============
*/
void XAnimSetPartBit(DObjPartBits *partBits, int boneIndex)
{
  unsigned __int64 v2; 

  v2 = (unsigned int)boneIndex;
  if ( (boneIndex & 0x8000) != 0 )
  {
    partBits->array[7] |= 2u;
  }
  else
  {
    if ( (unsigned int)boneIndex >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", boneIndex, 256) )
      __debugbreak();
    partBits->array[v2 >> 5] |= 0x80000000 >> (v2 & 0x1F);
  }
}

/*
==============
XAnimTestPartBit
==============
*/
bool XAnimTestPartBit(const DObjPartBits *partBits, int boneIndex)
{
  unsigned __int64 v2; 

  v2 = (unsigned int)boneIndex;
  if ( (boneIndex & 0x8000) != 0 )
    return (partBits->array[7] & 2) != 0;
  if ( (unsigned int)boneIndex >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", boneIndex, 256) )
    __debugbreak();
  return ((0x80000000 >> (v2 & 0x1F)) & partBits->array[v2 >> 5]) != 0;
}

/*
==============
DObjGetSkelBoneIndex
==============
*/
__int64 DObjGetSkelBoneIndex(const DObj *obj, const int boneIndex)
{
  __int16 v2; 
  int v4; 
  __int64 v6; 
  int v7; 

  v2 = boneIndex;
  if ( (unsigned int)(boneIndex - 254) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX") )
    __debugbreak();
  v4 = v2 & 0x7FFF;
  if ( v4 >= (unsigned int)DObjTotalNumBones(obj) )
  {
    v7 = DObjTotalNumBones(obj);
    LODWORD(v6) = v2 & 0x7FFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( (v2 & 0x8000) != 0 && v4 < DObjNumBones(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat, "!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))") )
    __debugbreak();
  return v2 & 0x7FFF;
}

/*
==============
DObjBoneNameToBoneIndexMap_t<768>::findKeyOrFirstEmpty
==============
*/
__int64 DObjBoneNameToBoneIndexMap_t<768>::findKeyOrFirstEmpty(DObjBoneNameToBoneIndexMap_t<768> *this, const scr_string_t *key)
{
  __int64 v4; 
  unsigned int v5; 
  const scr_string_t *v6; 
  int v7; 
  __int64 v8; 
  __int64 result; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 181, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  if ( !*key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 172, ASSERT_TYPE_ASSERT, "(key != NULL_KEY)", (const char *)&queryFormat, "key != NULL_KEY") )
    __debugbreak();
  v4 = 4i64;
  v5 = 112083;
  v6 = key;
  if ( key > key + 1 )
    v4 = 0i64;
  if ( key <= key + 1 )
  {
    do
    {
      v7 = *(unsigned __int8 *)v6;
      v6 = (const scr_string_t *)((char *)v6 + 1);
      v5 = v7 ^ (16777619 * v5);
    }
    while ( (char *)v6 - (char *)key != v4 );
  }
  v8 = v5 % 0x607;
  if ( !this->m_data[v8].first )
    return (unsigned int)v8;
  while ( 1 )
  {
    result = (unsigned int)v8;
    if ( this->m_data[v8].first == *key )
      break;
    v10 = v8 + 1;
    v8 = 0i64;
    if ( (_DWORD)result != 1542 )
      v8 = v10;
    if ( (unsigned int)v8 >= 0x607 )
    {
      LODWORD(v12) = 1543;
      LODWORD(v11) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( bucket ) < (unsigned)( ( sizeof( *array_counter( m_data ) ) + 0 ) )", "bucket doesn't index m_data\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !this->m_data[v8].first )
      return (unsigned int)v8;
  }
  return result;
}

/*
==============
DObjBoneNameToBoneIndexMap_t<254>::findKeyOrFirstEmpty
==============
*/
__int64 DObjBoneNameToBoneIndexMap_t<254>::findKeyOrFirstEmpty(DObjBoneNameToBoneIndexMap_t<254> *this, const scr_string_t *key)
{
  __int64 v4; 
  unsigned int v5; 
  const scr_string_t *v6; 
  int v7; 
  __int64 v8; 
  __int64 result; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !this->m_initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 181, ASSERT_TYPE_ASSERT, "(m_initialized)", (const char *)&queryFormat, "m_initialized") )
    __debugbreak();
  if ( !*key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 172, ASSERT_TYPE_ASSERT, "(key != NULL_KEY)", (const char *)&queryFormat, "key != NULL_KEY") )
    __debugbreak();
  v4 = 4i64;
  v5 = 112083;
  v6 = key;
  if ( key > key + 1 )
    v4 = 0i64;
  if ( key <= key + 1 )
  {
    do
    {
      v7 = *(unsigned __int8 *)v6;
      v6 = (const scr_string_t *)((char *)v6 + 1);
      v5 = v7 ^ (16777619 * v5);
    }
    while ( (char *)v6 - (char *)key != v4 );
  }
  v8 = v5 % 0x185;
  if ( !this->m_data[v8].first )
    return (unsigned int)v8;
  while ( 1 )
  {
    result = (unsigned int)v8;
    if ( this->m_data[v8].first == *key )
      break;
    v10 = v8 + 1;
    v8 = 0i64;
    if ( (_DWORD)result != 388 )
      v8 = v10;
    if ( (unsigned int)v8 >= 0x185 )
    {
      LODWORD(v12) = 389;
      LODWORD(v11) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( bucket ) < (unsigned)( ( sizeof( *array_counter( m_data ) ) + 0 ) )", "bucket doesn't index m_data\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !this->m_data[v8].first )
      return (unsigned int)v8;
  }
  return result;
}

/*
==============
DObjBoneParentMap_GetOriginalNonDuplicate
==============
*/
__int64 DObjBoneParentMap_GetOriginalNonDuplicate(const DObjBoneParentMap *parentMap, int boneIndex)
{
  unsigned __int16 i; 
  int v4; 
  unsigned int v5; 
  const DObj *obj; 
  __int64 v8; 
  __int64 v9; 

  for ( i = truncate_cast<unsigned short,int>(boneIndex); i != 255; i = parentMap->parents[v4 & 0xFFF] )
  {
    v4 = i;
    v5 = i & 0x7FFF;
    if ( v5 >= 0x1000 )
    {
      LODWORD(v9) = 4096;
      LODWORD(v8) = i & 0x7FFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v8, v9) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (i & 0x1F)) & parentMap->duplicateBits.array[(unsigned __int64)(i & 0x7FFF) >> 5]) == 0 )
      break;
    if ( !parentMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 311, ASSERT_TYPE_ASSERT, "(parentMap)", (const char *)&queryFormat, "parentMap") )
      __debugbreak();
    obj = parentMap->obj;
    if ( (unsigned int)(v4 - 254) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX") )
      __debugbreak();
    if ( v5 >= DObjTotalNumBones(obj) )
    {
      LODWORD(v9) = DObjTotalNumBones(obj);
      LODWORD(v8) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (v4 & 0x8000) != 0 && (int)v5 < DObjNumBones(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat, "!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))") )
      __debugbreak();
  }
  if ( bitarray_base<bitarray<4096>>::testBit(&parentMap->duplicateBits, i & 0x7FFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 331, ASSERT_TYPE_ASSERT, "(!DObjBoneParentMap_IsDuplicate( parentMap, firstBoneIndex ))", (const char *)&queryFormat, "!DObjBoneParentMap_IsDuplicate( parentMap, firstBoneIndex )") )
    __debugbreak();
  return i;
}

/*
==============
DObjBoneParentMap_GetParentOrDuplicate
==============
*/
__int64 DObjBoneParentMap_GetParentOrDuplicate(const DObjBoneParentMap *parentMap, int boneIndex)
{
  const DObj *obj; 
  int v5; 
  __int64 v7; 
  int v8; 

  if ( !parentMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 311, ASSERT_TYPE_ASSERT, "(parentMap)", (const char *)&queryFormat, "parentMap") )
    __debugbreak();
  obj = parentMap->obj;
  if ( (unsigned int)(boneIndex - 254) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX") )
    __debugbreak();
  v5 = boneIndex & 0x7FFF;
  if ( v5 >= (unsigned int)DObjTotalNumBones(obj) )
  {
    v8 = DObjTotalNumBones(obj);
    LODWORD(v7) = boneIndex & 0x7FFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( (boneIndex & 0x8000) != 0 && v5 < DObjNumBones(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat, "!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))") )
    __debugbreak();
  return parentMap->parents[boneIndex & 0xFFF];
}

