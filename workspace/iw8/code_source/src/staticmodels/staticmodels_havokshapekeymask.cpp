/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::commitChanges
==============
*/

bool __fastcall StaticModels_HavokShapeInternalsSimdTreeKeyMask::commitChanges(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this)
{
  return ?commitChanges@StaticModels_HavokShapeInternalsSimdTreeKeyMask@@UEAA_NXZ(this);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::setShapeKeyEnabled
==============
*/

void __fastcall StaticModels_HavokShapeInternalsSimdTreeKeyMask::setShapeKeyEnabled(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> key, bool isEnabled)
{
  ?setShapeKeyEnabled@StaticModels_HavokShapeInternalsSimdTreeKeyMask@@UEAAXU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@_N@Z(this, key, isEnabled);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::StaticModels_HavokShapeInternalsSimdTreeKeyMask
==============
*/

void __fastcall StaticModels_HavokShapeInternalsSimdTreeKeyMask::StaticModels_HavokShapeInternalsSimdTreeKeyMask(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, const StaticModels_HavokShape *shape)
{
  ??0StaticModels_HavokShapeInternalsSimdTreeKeyMask@@QEAA@PEBVStaticModels_HavokShape@@@Z(this, shape);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::isShapeKeyEnabled
==============
*/

bool __fastcall StaticModels_HavokShapeInternalsSimdTreeKeyMask::isShapeKeyEnabled(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> key)
{
  return ?isShapeKeyEnabled@StaticModels_HavokShapeInternalsSimdTreeKeyMask@@UEBA_NU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@@Z(this, key);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::isInstanceEnabled
==============
*/

unsigned int __fastcall StaticModels_HavokShapeInternalsSimdTreeKeyMask::isInstanceEnabled(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> id)
{
  return ?isInstanceEnabled@StaticModels_HavokShapeInternalsSimdTreeKeyMask@@UEBAIU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@@Z(this, id);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::~StaticModels_HavokShapeInternalsSimdTreeKeyMask
==============
*/

void __fastcall StaticModels_HavokShapeInternalsSimdTreeKeyMask::~StaticModels_HavokShapeInternalsSimdTreeKeyMask(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this)
{
  ??1StaticModels_HavokShapeInternalsSimdTreeKeyMask@@UEAA@XZ(this);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::StaticModels_HavokShapeInternalsSimdTreeKeyMask
==============
*/
void StaticModels_HavokShapeInternalsSimdTreeKeyMask::StaticModels_HavokShapeInternalsSimdTreeKeyMask(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, const StaticModels_HavokShape *shape)
{
  hkBitField *p_m_enableInstances; 
  hkMemoryAllocator *v5; 
  unsigned int v6; 
  int v7; 
  unsigned int *v8; 
  unsigned int v9; 
  int v10; 
  hkMemoryAllocator *v11; 
  int v12; 
  int v13; 
  unsigned __int16 *v15; 
  __int64 v16; 
  int v21; 
  hkMemoryAllocator *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  _BYTE *CollisionTileModelShape; 
  hknpShapeKeyMask *v30; 
  hkMemoryAllocator *v31; 
  unsigned __int16 *array; 
  int v33; 
  int v34; 
  hkBitField *numInOut; 

  this->__vftable = (StaticModels_HavokShapeInternalsSimdTreeKeyMask_vtbl *)&StaticModels_HavokShapeInternalsSimdTreeKeyMask::`vftable';
  this->m_shape.m_ptr = shape;
  this->m_instanceMasks.m_data = NULL;
  this->m_instanceMasks.m_size = 0;
  this->m_instanceMasks.m_capacityAndFlags = 0x80000000;
  p_m_enableInstances = &this->m_enableInstances;
  numInOut = &this->m_enableInstances;
  this->m_enableInstances.m_storage.m_words.m_data = NULL;
  this->m_enableInstances.m_storage.m_words.m_size = 0;
  this->m_enableInstances.m_storage.m_words.m_capacityAndFlags = 0x80000000;
  LODWORD(numInOut) = 0;
  v5 = hkMemHeapAllocator();
  v6 = (unsigned int)numInOut;
  v7 = (int)numInOut;
  if ( (_DWORD)numInOut )
  {
    v8 = (unsigned int *)hkMemoryAllocator::bufAlloc2(v5, 4, (int *)&numInOut);
    v6 = (unsigned int)numInOut;
  }
  else
  {
    v8 = NULL;
  }
  v9 = 0x80000000;
  if ( v6 )
    v9 = v6;
  p_m_enableInstances->m_storage.m_words.m_data = v8;
  p_m_enableInstances->m_storage.m_words.m_size = v7;
  p_m_enableInstances->m_storage.m_words.m_capacityAndFlags = v9;
  p_m_enableInstances->m_storage.m_numBits = 0;
  array = NULL;
  v33 = 0;
  v34 = 0x80000000;
  v10 = shape->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
  v11 = hkMemHeapAllocator();
  if ( v10 )
    hkArrayUtil::_reserve(v11, &array, v10, 2);
  v12 = 0;
  v13 = v33;
  if ( v10 )
  {
    do
    {
      array[v13] = v12;
      v13 = ++v33;
      ++v12;
    }
    while ( v12 < v10 );
  }
  _ECX = 0;
  if ( v13 > 0 )
  {
    v15 = array;
    v16 = (unsigned int)v13;
    do
    {
      _EAX = *v15;
      __asm
      {
        vmovd   xmm1, eax
        vmovd   xmm0, ecx
        vpmaxsd xmm1, xmm0, xmm1
        vmovd   ecx, xmm1
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  v21 = _ECX + 1;
  hkBitFieldBase<hkBitFieldStorage<hkArray<unsigned int,hkContainerHeapAllocator>>>::setSizeAndFill(p_m_enableInstances, 0, _ECX + 1, 1);
  v22 = hkMemHeapAllocator();
  v23 = this->m_instanceMasks.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v23 < v21 )
  {
    v24 = 2 * v23;
    if ( (unsigned int)v24 >= 0x3FFFFFFF )
      v24 = 1073741822;
    v25 = v21;
    if ( v21 < v24 )
      v25 = v24;
    hkArrayUtil::_reserve(v22, &this->m_instanceMasks, v25, 8);
  }
  v26 = v21 - this->m_instanceMasks.m_size;
  if ( v26 > 0 )
    memset(&this->m_instanceMasks.m_data[this->m_instanceMasks.m_size], 0, 8i64 * v26);
  this->m_instanceMasks.m_size = v21;
  v27 = 0;
  if ( v33 > 0 )
  {
    v28 = 0i64;
    do
    {
      CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((shape->m_instances.m_data[array[v28]].m_modelIdxAndFlags & 0x4000) != 0, shape->m_tileIdx, shape->m_instances.m_data[array[v28]].m_modelIdxAndFlags & 0x3FFF);
      if ( CollisionTileModelShape[28] == 3 )
      {
        v30 = (hknpShapeKeyMask *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)CollisionTileModelShape + 152i64))(CollisionTileModelShape);
        this->m_instanceMasks.m_data[array[v28]] = v30;
      }
      ++v27;
      ++v28;
    }
    while ( v27 < v33 );
  }
  v31 = hkMemHeapAllocator();
  v33 = 0;
  if ( v34 >= 0 )
    hkMemoryAllocator::bufFree2(v31, array, 2, v34 & 0x3FFFFFFF);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::~StaticModels_HavokShapeInternalsSimdTreeKeyMask
==============
*/
void StaticModels_HavokShapeInternalsSimdTreeKeyMask::~StaticModels_HavokShapeInternalsSimdTreeKeyMask(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this)
{
  int v2; 
  __int64 v3; 
  hknpShapeKeyMask *v4; 
  hkMemoryAllocator *v5; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v7; 
  int v8; 

  this->__vftable = (StaticModels_HavokShapeInternalsSimdTreeKeyMask_vtbl *)&StaticModels_HavokShapeInternalsSimdTreeKeyMask::`vftable';
  v2 = 0;
  if ( this->m_instanceMasks.m_size > 0 )
  {
    v3 = 0i64;
    do
    {
      v4 = this->m_instanceMasks.m_data[v3];
      if ( v4 )
        ((void (__fastcall *)(hknpShapeKeyMask *, __int64))v4->~hkBaseObject)(v4, 1i64);
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_instanceMasks.m_size );
  }
  v5 = hkMemHeapAllocator();
  this->m_enableInstances.m_storage.m_words.m_size = 0;
  m_capacityAndFlags = this->m_enableInstances.m_storage.m_words.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v5, this->m_enableInstances.m_storage.m_words.m_data, 4, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_enableInstances.m_storage.m_words.m_data = NULL;
  this->m_enableInstances.m_storage.m_words.m_capacityAndFlags = 0x80000000;
  v7 = hkMemHeapAllocator();
  this->m_instanceMasks.m_size = 0;
  v8 = this->m_instanceMasks.m_capacityAndFlags;
  if ( v8 >= 0 )
    hkMemoryAllocator::bufFree2(v7, this->m_instanceMasks.m_data, 8, v8 & 0x3FFFFFFF);
  this->m_instanceMasks.m_data = NULL;
  this->m_instanceMasks.m_capacityAndFlags = 0x80000000;
  this->__vftable = (StaticModels_HavokShapeInternalsSimdTreeKeyMask_vtbl *)hknpShapeKeyMask::`vftable';
  hkBaseObject::~hkBaseObject(this);
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::commitChanges
==============
*/
char StaticModels_HavokShapeInternalsSimdTreeKeyMask::commitChanges(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this)
{
  int v1; 
  int v3; 
  __int64 v4; 
  hknpShapeKeyMask *v5; 
  bool v6; 
  unsigned int *v7; 
  unsigned int v8; 

  v1 = 0;
  if ( this->m_instanceMasks.m_size > 0 )
  {
    v3 = 1;
    v4 = 0i64;
    do
    {
      v5 = this->m_instanceMasks.m_data[v4];
      if ( v5 )
      {
        v6 = v5->commitChanges(v5);
        v7 = &this->m_enableInstances.m_storage.m_words.m_data[(__int64)v1 >> 5];
        v8 = *v7;
        if ( v6 )
          *v7 = v3 | v8;
        else
          *v7 = v8 & ~v3;
      }
      ++v1;
      v3 = __ROL4__(v3, 1);
      ++v4;
    }
    while ( v1 < this->m_instanceMasks.m_size );
  }
  return 1;
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::isInstanceEnabled
==============
*/
__int64 StaticModels_HavokShapeInternalsSimdTreeKeyMask::isInstanceEnabled(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> id)
{
  return (this->m_enableInstances.m_storage.m_words.m_data[(unsigned __int64)id.m_value >> 5] >> (id.m_value & 0x1F)) & 1;
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::isShapeKeyEnabled
==============
*/
bool StaticModels_HavokShapeInternalsSimdTreeKeyMask::isShapeKeyEnabled(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> key)
{
  unsigned __int8 m_numShapeKeyBits; 
  unsigned int v3; 
  hknpShapeKeyMask *v4; 

  m_numShapeKeyBits = this->m_shape.m_ptr->m_numShapeKeyBits;
  v3 = key.m_value >> (32 - m_numShapeKeyBits);
  v4 = this->m_instanceMasks.m_data[(unsigned __int16)v3];
  if ( v4 )
    return ((__int64 (__fastcall *)(hknpShapeKeyMask *, _QWORD))v4->isShapeKeyEnabled)(v4, ((key.m_value + 1) << m_numShapeKeyBits) - 1);
  else
    return ((unsigned int (__fastcall *)(StaticModels_HavokShapeInternalsSimdTreeKeyMask *, _QWORD))this->isInstanceEnabled)(this, (unsigned __int16)v3) != 0;
}

/*
==============
StaticModels_HavokShapeInternalsSimdTreeKeyMask::setShapeKeyEnabled
==============
*/
void StaticModels_HavokShapeInternalsSimdTreeKeyMask::setShapeKeyEnabled(StaticModels_HavokShapeInternalsSimdTreeKeyMask *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> key, bool isEnabled)
{
  unsigned __int8 m_numShapeKeyBits; 
  unsigned int v5; 
  hknpShapeKeyMask *v6; 
  unsigned int *m_data; 

  m_numShapeKeyBits = this->m_shape.m_ptr->m_numShapeKeyBits;
  v5 = key.m_value >> (32 - m_numShapeKeyBits);
  v6 = this->m_instanceMasks.m_data[(unsigned __int16)v5];
  if ( v6 )
  {
    ((void (__fastcall *)(hknpShapeKeyMask *, _QWORD, bool))v6->setShapeKeyEnabled)(v6, ((key.m_value + 1) << m_numShapeKeyBits) - 1, isEnabled);
  }
  else
  {
    m_data = this->m_enableInstances.m_storage.m_words.m_data;
    if ( isEnabled )
      m_data[(unsigned __int64)(unsigned __int16)v5 >> 5] |= 1 << (v5 & 0x1F);
    else
      m_data[(unsigned __int64)(unsigned __int16)v5 >> 5] &= ~(1 << (v5 & 0x1F));
  }
}

