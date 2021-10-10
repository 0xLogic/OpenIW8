/*
==============
StaticModels_HavokShape::updateCachedBounds
==============
*/

bool __fastcall StaticModels_HavokShape::updateCachedBounds(StaticModels_HavokShape *this)
{
  return ?updateCachedBounds@StaticModels_HavokShape@@QEAA_NXZ(this);
}

/*
==============
StaticModels_HavokShape::addInstancesToBoundingVolume
==============
*/

void __fastcall StaticModels_HavokShape::addInstancesToBoundingVolume(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numIds)
{
  ?addInstancesToBoundingVolume@StaticModels_HavokShape@@IEAAXPEBU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@H@Z(this, instanceIds, numIds);
}

/*
==============
StaticModels_HavokShape::removeInstancesFromBoundingVolume
==============
*/

void __fastcall StaticModels_HavokShape::removeInstancesFromBoundingVolume(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numIds)
{
  ?removeInstancesFromBoundingVolume@StaticModels_HavokShape@@IEAAXPEBU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@H@Z(this, instanceIds, numIds);
}

/*
==============
StaticModels_HavokShape::optimize
==============
*/

void __fastcall StaticModels_HavokShape::optimize(StaticModels_HavokShape *this)
{
  ?optimize@StaticModels_HavokShape@@QEAAXXZ(this);
}

/*
==============
StaticModels_HavokShape::buildBoundingVolume
==============
*/

void __fastcall StaticModels_HavokShape::buildBoundingVolume(StaticModels_HavokShape *this)
{
  ?buildBoundingVolume@StaticModels_HavokShape@@QEAAXXZ(this);
}

/*
==============
StaticModels_HavokShape::getInstanceAabb
==============
*/

void __fastcall StaticModels_HavokShape::getInstanceAabb(StaticModels_HavokShape *this, hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> instanceId, hkAabb *aabbOut)
{
  ?getInstanceAabb@StaticModels_HavokShape@@QEBAXU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@AEAVhkAabb@@@Z(this, instanceId, aabbOut);
}

/*
==============
StaticModels_HavokShape::updateInstancesInBoundingVolume
==============
*/

void __fastcall StaticModels_HavokShape::updateInstancesInBoundingVolume(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numIds)
{
  ?updateInstancesInBoundingVolume@StaticModels_HavokShape@@IEAAXPEBU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@H@Z(this, instanceIds, numIds);
}

/*
==============
StaticModels_HavokShape::rebuild
==============
*/

void __fastcall StaticModels_HavokShape::rebuild(StaticModels_HavokShape *this)
{
  ?rebuild@StaticModels_HavokShape@@QEAAXXZ(this);
}

/*
==============
StaticModels_HavokShape::addInstancesToBoundingVolume
==============
*/
void StaticModels_HavokShape::addInstancesToBoundingVolume(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numIds)
{
  __int64 v3; 
  __int64 v6; 
  hkMemoryAllocator *v7; 
  int m_size; 
  hkVector4f *v9; 

  v3 = numIds;
  if ( numIds > 0 )
  {
    v6 = 0i64;
    do
    {
      if ( instanceIds[v6].m_value != 0xFFFF )
      {
        v7 = hkMemHeapAllocator();
        m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
        if ( m_size == (this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v7, &this->m_boundingVolumeData.m_simdTree.m_points, 16);
          m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
        }
        v9 = &this->m_boundingVolumeData.m_simdTree.m_points.m_data[m_size];
        this->m_boundingVolumeData.m_simdTree.m_points.m_size = m_size + 1;
        *v9 = 0i64;
        v9->m_quad.m128_i32[3] = instanceIds[v6].m_value | 0x3F000000;
      }
      ++v6;
    }
    while ( v6 < v3 );
  }
  StaticModels_HavokShape::rebuild(this);
}

/*
==============
StaticModels_HavokShape::buildBoundingVolume
==============
*/
void StaticModels_HavokShape::buildBoundingVolume(StaticModels_HavokShape *this)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  unsigned int v4; 
  hkMemoryAllocator *v5; 
  unsigned int v6; 
  unsigned int v7; 
  int i; 
  hkMemoryAllocator *v9; 
  int m_size; 
  hkVector4f *v11; 
  hkMemoryAllocator *v12; 
  int m_capacityAndFlags; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtBuildBoundingVolume");
  v4 = (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) + 4;
  v5 = hkMemHeapAllocator();
  v6 = this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v6 < v4 )
  {
    v7 = 2 * v6;
    if ( v7 >= 0x3FFFFFFF )
      v7 = 1073741822;
    if ( v4 < v7 )
      v4 = v7;
    hkArrayUtil::_reserve(v5, &this->m_boundingVolumeData.m_simdTree.m_points, v4, 16);
  }
  for ( i = 0; i < this->m_instances.m_size; ++i )
  {
    v9 = hkMemHeapAllocator();
    m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
    if ( m_size == (this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v9, &this->m_boundingVolumeData.m_simdTree.m_points, 16);
      m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
    }
    v11 = &this->m_boundingVolumeData.m_simdTree.m_points.m_data[m_size];
    this->m_boundingVolumeData.m_simdTree.m_points.m_size = m_size + 1;
    v11->m_quad.m128_i32[3] = i | 0x3F000000;
  }
  StaticModels_HavokShape::rebuild(this);
  v12 = hkMemHeapAllocator();
  this->m_boundingVolumeData.m_simdTree.m_points.m_size = 0;
  m_capacityAndFlags = this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v12, this->m_boundingVolumeData.m_simdTree.m_points.m_data, 16, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_boundingVolumeData.m_simdTree.m_points.m_data = NULL;
  this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags = 0x80000000;
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
StaticModels_HavokShape::getInstanceAabb
==============
*/
void StaticModels_HavokShape::getInstanceAabb(StaticModels_HavokShape *this, hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> instanceId, hkAabb *aabbOut)
{
  StaticModels_HavokShapeInstance::calculateAabb(&this->m_instances.m_data[instanceId.m_value], this->m_tileIdx, aabbOut);
}

/*
==============
StaticModels_HavokShape::optimize
==============
*/
void StaticModels_HavokShape::optimize(StaticModels_HavokShape *this)
{
  ;
}

/*
==============
StaticModels_HavokShape::rebuild
==============
*/
void StaticModels_HavokShape::rebuild(StaticModels_HavokShape *this)
{
  int m_capacityAndFlags; 
  int v3; 
  hkMemoryRouter *Value; 
  int v5; 
  hkAabb *m_cur; 
  char *v7; 
  unsigned int v8; 
  hkMemoryAllocator *v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  hkVector4f *m_data; 
  hkAabb *v15; 
  hkVector4f *v18; 
  hkMemoryAllocator *v19; 
  hkMemoryAllocator *v20; 
  int v21; 
  char *v22; 
  int v23; 
  hkMemoryRouter *v24; 
  signed int v25; 
  int v26; 
  hkMemoryAllocator *v27; 
  hkAabb *array; 
  int v29; 
  int v30; 
  void *p; 
  int v32; 
  hkcdSimdTree::BuildContext buildContext; 

  m_capacityAndFlags = this->m_instances.m_capacityAndFlags;
  v3 = m_capacityAndFlags & 0x3FFFFFFF;
  array = NULL;
  v29 = 0;
  v30 = 0x80000000;
  v32 = m_capacityAndFlags & 0x3FFFFFFF;
  if ( (m_capacityAndFlags & 0x3FFFFFFF) != 0 )
  {
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v5 = (32 * m_capacityAndFlags + 127) & 0xFFFFFF80;
    m_cur = (hkAabb *)Value->m_stack.m_cur;
    v7 = (char *)m_cur + v5;
    if ( v5 > Value->m_stack.m_slabSize || v7 > Value->m_stack.m_end )
    {
      m_cur = (hkAabb *)hkLifoAllocator::allocateFromNewSlab(&Value->m_stack, v5);
      m_capacityAndFlags = this->m_instances.m_capacityAndFlags;
    }
    else
    {
      Value->m_stack.m_cur = v7;
      m_capacityAndFlags = this->m_instances.m_capacityAndFlags;
    }
  }
  else
  {
    m_cur = NULL;
  }
  array = m_cur;
  v30 = v3 | 0x80000000;
  p = m_cur;
  v8 = m_capacityAndFlags & 0x3FFFFFFF;
  v9 = hkMemHeapAllocator();
  if ( (v3 & 0x3FFFFFFFu) < v8 )
  {
    v10 = 2 * (v3 & 0x3FFFFFFF);
    if ( v10 >= 0x3FFFFFFF )
      v10 = 1073741822;
    v11 = v8;
    if ( v8 < v10 )
      v11 = v10;
    hkArrayUtil::_reserve(v9, &array, v11, 32);
  }
  v29 = v8;
  v12 = 0;
  if ( this->m_boundingVolumeData.m_simdTree.m_points.m_size > 0 )
  {
    v13 = 0i64;
    do
    {
      m_data = this->m_boundingVolumeData.m_simdTree.m_points.m_data;
      v15 = &array[(unsigned __int16)m_data[v13].m_quad.m128_i32[3]];
      StaticModels_HavokShapeInstance::calculateAabb(&this->m_instances.m_data[(unsigned __int16)m_data[v13].m_quad.m128_i32[3]], this->m_tileIdx, v15);
      _XMM1 = _mm128_add_ps(v15->m_max.m_quad, v15->m_min.m_quad);
      __asm { vblendps xmm1, xmm1, xmmword ptr [rdi+r12], 8 }
      m_data[v13] = (hkVector4f)_XMM1.m_quad;
      ++v12;
      ++v13;
    }
    while ( v12 < this->m_boundingVolumeData.m_simdTree.m_points.m_size );
  }
  buildContext.__vftable = (hkcdSimdTree::BuildContext_vtbl *)hkcdSimdTree::BuildContext::`vftable';
  *(_QWORD *)&buildContext.m_buildMode = 0i64;
  buildContext.m_parallel = NULL;
  buildContext.m_numLevelToUnfold = 1;
  *(_WORD *)&buildContext.m_compact = 1;
  buildContext.m_compounds.m_data = NULL;
  buildContext.m_compounds.m_size = 0;
  buildContext.m_compounds.m_capacityAndFlags = 0x80000000;
  buildContext.m_refit = NULL;
  buildContext.m_points.m_data = this->m_boundingVolumeData.m_simdTree.m_points.m_data;
  this->m_boundingVolumeData.m_simdTree.m_points.m_data = NULL;
  buildContext.m_points.m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
  this->m_boundingVolumeData.m_simdTree.m_points.m_size = 0;
  buildContext.m_points.m_capacityAndFlags = this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags;
  this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags = 0x80000000;
  hkcdSimdTree::buildFromAabbs(&this->m_boundingVolumeData.m_simdTree, &buildContext, array);
  v18 = buildContext.m_points.m_data;
  buildContext.m_points.m_data = this->m_boundingVolumeData.m_simdTree.m_points.m_data;
  this->m_boundingVolumeData.m_simdTree.m_points.m_data = v18;
  LODWORD(v18) = buildContext.m_points.m_size;
  buildContext.m_points.m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
  this->m_boundingVolumeData.m_simdTree.m_points.m_size = (int)v18;
  LODWORD(v18) = buildContext.m_points.m_capacityAndFlags;
  buildContext.m_points.m_capacityAndFlags = this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags;
  this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags = (int)v18;
  buildContext.__vftable = (hkcdSimdTree::BuildContext_vtbl *)hkcdSimdTree::BuildContext::`vftable';
  v19 = hkMemHeapAllocator();
  buildContext.m_compounds.m_size = 0;
  if ( buildContext.m_compounds.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v19, buildContext.m_compounds.m_data, 32, buildContext.m_compounds.m_capacityAndFlags & 0x3FFFFFFF);
  buildContext.m_compounds.m_data = NULL;
  buildContext.m_compounds.m_capacityAndFlags = 0x80000000;
  v20 = hkMemHeapAllocator();
  buildContext.m_points.m_size = 0;
  if ( buildContext.m_points.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v20, buildContext.m_points.m_data, 16, buildContext.m_points.m_capacityAndFlags & 0x3FFFFFFF);
  buildContext.m_points.m_data = NULL;
  buildContext.m_points.m_capacityAndFlags = 0x80000000;
  v21 = v29;
  v22 = (char *)p;
  if ( p == array )
    v21 = 0;
  v29 = v21;
  v23 = v32;
  v24 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v24 )
    v24 = hkMemoryRouter::s_fallbackRouter;
  v25 = (32 * v23 + 127) & 0xFFFFFF80;
  v26 = (v25 + 15) & 0xFFFFFFF0;
  if ( v25 > v24->m_stack.m_slabSize || &v22[v26] != v24->m_stack.m_cur || v24->m_stack.m_firstNonLifoEnd == v22 )
    hkLifoAllocator::slowBlockFree(&v24->m_stack, v22, v26);
  else
    v24->m_stack.m_cur = v22;
  v27 = hkMemHeapAllocator();
  v29 = 0;
  if ( v30 >= 0 )
    hkMemoryAllocator::bufFree2(v27, array, 32, v30 & 0x3FFFFFFF);
}

/*
==============
StaticModels_HavokShape::removeInstancesFromBoundingVolume
==============
*/
void StaticModels_HavokShape::removeInstancesFromBoundingVolume(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numIds)
{
  __int64 v3; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int *v8; 
  int v9; 
  hkVector4f *v10; 
  __int64 v11; 

  v3 = numIds;
  if ( numIds > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = 0;
      v7 = 0i64;
      if ( this->m_boundingVolumeData.m_simdTree.m_points.m_size > 0 )
      {
        v8 = &this->m_boundingVolumeData.m_simdTree.m_points.m_data->m_quad.m128_i32[3];
        while ( (*v8 & 0xC0FFFFFF) != instanceIds[v5].m_value )
        {
          ++v6;
          ++v7;
          v8 += 4;
          if ( v7 >= this->m_boundingVolumeData.m_simdTree.m_points.m_size )
            goto LABEL_10;
        }
        --this->m_boundingVolumeData.m_simdTree.m_points.m_size;
        v9 = 0;
        v10 = &this->m_boundingVolumeData.m_simdTree.m_points.m_data[v7];
        v11 = 16i64 * (this->m_boundingVolumeData.m_simdTree.m_points.m_size - v6);
        if ( v11 > 0 )
        {
          do
          {
            v9 += 8;
            v10->m_quad.m128_u64[0] = v10[1].m_quad.m128_u64[0];
            v10 = (hkVector4f *)((char *)v10 + 8);
          }
          while ( v9 < v11 );
        }
      }
LABEL_10:
      ++v5;
    }
    while ( v5 < v3 );
  }
  StaticModels_HavokShape::rebuild(this);
}

/*
==============
StaticModels_HavokShape::updateCachedBounds
==============
*/
__int64 StaticModels_HavokShape::updateCachedBounds(StaticModels_HavokShape *this)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  unsigned __int8 v8; 
  int m_size; 
  hkMemoryRouter *v11; 
  int v12; 
  __m128 *m_cur; 
  char *v14; 
  int v15; 
  int v16; 
  hkcdSimdTree::Node *m_data; 
  hkcdSimdTree::Node *v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v39; 
  StaticModels_HavokShapeInstance *v40; 
  __int16 m_modelIdxAndFlags; 
  const void *CollisionTileModelShape; 
  double CollisionTileModelInstanceScale; 
  _OWORD *v46; 
  __m128 v55; 
  __int64 v56; 
  __m128 *v57; 
  __int128 v64; 
  __int128 v72; 
  hkMemoryRouter *v83; 
  int v84; 
  int v86; 
  int v87; 
  __int64 v88; 
  _OWORD *m128_f32; 
  hkcdSimdTree::Node *v90; 
  hkMonitorStream *v91; 
  vec3_t origin; 
  hkVector4f b; 
  hkAabb v94; 
  hkTransformf v95; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  hkVector4f v98; 
  __m128 v99; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  v91 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtStaticModels_HavokShape::updateCachedBounds()");
  _XMM0.m_quad = (__m128)this->m_boundingVolumeData.m_simdTree.m_nodes.m_data[1].m_lx;
  __asm
  {
    vcmpleps xmm1, xmm0, xmmword ptr [rcx+90h]
    vmovmskps eax, xmm1
  }
  if ( _EAX )
  {
    LODWORD(_XMM7) = 0;
    m_size = this->m_instances.m_size;
    v11 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v11 )
      v11 = hkMemoryRouter::s_fallbackRouter;
    v12 = (16 * m_size + 127) & 0xFFFFFF80;
    v86 = v12;
    m_cur = (__m128 *)v11->m_stack.m_cur;
    v14 = (char *)m_cur + v12;
    if ( v12 > v11->m_stack.m_slabSize || v14 > v11->m_stack.m_end )
      m_cur = (__m128 *)hkLifoAllocator::allocateFromNewSlab(&v11->m_stack, v12);
    else
      v11->m_stack.m_cur = v14;
    v15 = 0;
    v16 = 0;
    v87 = 0;
    _XMM8.m_quad = g_vectorfConstants[36];
    __asm
    {
      vpxor   xmm14, xmm14, xmm14
      vpinsrw xmm0, xmm14, eax, 1
      vpshufd xmm1, xmm0, 0
    }
    _XMM11.m_quad = (__m128)(*(_OWORD *)&g_vectorfConstants[36] ^ _XMM1);
    m_data = this->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
    _XMM0.m_quad = (__m128)m_data[1].m_lx;
    __asm
    {
      vcmpleps xmm1, xmm0, xmmword ptr [rdi+90h]
      vmovmskps eax, xmm1
    }
    if ( _EAX )
    {
      v26 = &m_data[(__int64)this->m_boundingVolumeData.m_simdTree.m_nodes.m_size];
      v90 = v26;
      if ( m_data != v26 )
      {
        v27 = 0i64;
        v88 = 0i64;
        do
        {
          if ( m_data->m_isLeaf )
          {
            v28 = 0i64;
            m128_f32 = (_OWORD *)m_cur[v27].m128_f32;
            v29 = 4i64;
            do
            {
              v30 = m_data->m_data[v28];
              if ( v30 != -1 )
              {
                _XMM2 = 0i64;
                __asm
                {
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi], 0
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+20h], 10h
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+40h], 20h ; ' '
                }
                v94.m_min = (hkVector4f)_XMM2.m_quad;
                _XMM2 = 0i64;
                __asm
                {
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+10h], 0
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+30h], 10h
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+50h], 20h ; ' '
                }
                v94.m_max = (hkVector4f)_XMM2.m_quad;
                v39 = (unsigned __int16)v30;
                v40 = this->m_instances.m_data;
                if ( hkAabb::isValid(&v94) && (m_modelIdxAndFlags = v40[v39].m_modelIdxAndFlags, m_modelIdxAndFlags < 0) )
                {
                  __asm
                  {
                    vminps  xmm8, xmm8, xmm1
                    vmaxps  xmm11, xmm11, xmmword ptr [rbp+100h+var_160.m_max.m_quad]
                  }
                  b.m_quad = _mm128_mul_ps(_mm128_add_ps(v94.m_min.m_quad, v94.m_max.m_quad), g_vectorfConstants[21]);
                  StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_modelIdxAndFlags & 0x3FFF, v40[v39].m_instanceIdx, &origin, &orientationAsQuat);
                  qi.m_vec.m_quad = (__m128)orientationAsQuat;
                  *(__m256i *)v95.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
                  *(__m256i *)v95.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
                  hkRotationImpl<float>::set(&v95.m_rotation, &qi);
                  v95.m_translation.m_quad.m128_f32[0] = 0.03125 * origin.v[0];
                  v95.m_translation.m_quad.m128_f32[1] = 0.03125 * origin.v[1];
                  v95.m_translation.m_quad.m128_f32[2] = origin.v[2] * 0.03125;
                  v95.m_translation.m_quad.m128_f32[3] = 0.0;
                  hkVector4f::setTransformedInversePos(&v98, &v95, &b);
                  CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v40[v39].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, v40[v39].m_modelIdxAndFlags & 0x3FFF);
                  (*(void (__fastcall **)(const void *, hkVector4f *, __m128 *))(*(_QWORD *)CollisionTileModelShape + 48i64))(CollisionTileModelShape, &v98, &v99);
                  CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, v40[v39].m_modelIdxAndFlags & 0x3FFF, v40[v39].m_instanceIdx);
                  _mm_shuffle_ps((__m128)*(unsigned __int64 *)&CollisionTileModelInstanceScale, (__m128)*(unsigned __int64 *)&CollisionTileModelInstanceScale, 0);
                  _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
                  __asm { vandnps xmm3, xmm0, xmm1 }
                  v46 = m128_f32;
                  v16 = ++v87;
                  v27 = ++v88;
                  ++m128_f32;
                  _mm_shuffle_ps(_XMM3, _XMM3, 0);
                  _XMM0 = _mm_shuffle_ps(_XMM3, _XMM3, 85);
                  __asm { vmaxps  xmm2, xmm0, xmm1 }
                  _XMM1 = _mm_shuffle_ps(_XMM3, _XMM3, 170);
                  __asm { vmaxps  xmm2, xmm1, xmm2 }
                  _mm128_mul_ps(_XMM2, v99);
                  _XMM1 = b.m_quad;
                  __asm { vblendps xmm0, xmm1, xmm3, 8 }
                  *v46 = _XMM0;
                }
                else
                {
                  v16 = v87;
                  v27 = v88;
                }
              }
              ++v28;
              --v29;
            }
            while ( v29 );
            v26 = v90;
            v15 = 0;
          }
          ++m_data;
        }
        while ( m_data != v26 );
        v12 = v86;
        v4 = v91;
      }
    }
    __asm
    {
      vcmpltps xmm0, xmm11, xmm8
      vmovmskps eax, xmm0
    }
    if ( (_EAX & 7) != 0 )
    {
      _XMM8.m_quad = g_vectorfConstants[5];
      _XMM11.m_quad = g_vectorfConstants[5];
    }
    v55 = _mm128_mul_ps(_mm128_add_ps(_XMM11.m_quad, _XMM8.m_quad), g_vectorfConstants[21]);
    v56 = v16;
    if ( v16 > 0 )
    {
      v57 = m_cur;
      do
      {
        _XMM0 = _mm128_sub_ps(v55, *v57);
        __asm
        {
          vdpps   xmm4, xmm0, xmm0, 7Fh
          vcmpleps xmm5, xmm4, xmm6
          vrsqrtps xmm1, xmm4
        }
        _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_XMM1, _mm128_mul_ps(_XMM4, _XMM1))), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM4);
        __asm { vandnps xmm2, xmm5, xmm1 }
        v64 = 0i64;
        *(float *)&v64 = *(float *)&_XMM7;
        _XMM7 = v64;
        __asm { vmaxss  xmm7, xmm7, xmm2 }
        ++v57;
        --v56;
      }
      while ( v56 );
    }
    _XMM1 = _mm128_mul_ps(_mm128_sub_ps(_XMM11.m_quad, _XMM8.m_quad), g_vectorfConstants[21]);
    __asm { vdpps   xmm5, xmm1, xmm1, 7Fh }
    _XMM6 = 0i64;
    __asm
    {
      vcmpleps xmm4, xmm5, xmm6
      vrsqrtps xmm1, xmm5
    }
    _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_XMM1, _mm128_mul_ps(_XMM5, _XMM1))), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
    __asm { vandnps xmm2, xmm4, xmm1 }
    v72 = 0i64;
    *(float *)&v72 = *(float *)&_XMM7;
    _XMM4 = v72;
    __asm
    {
      vminss  xmm4, xmm4, xmm1
      vcmpeqps xmm2, xmm8, xmmword ptr [r13+70h]
    }
    _XMM0.m_quad = (__m128)this->m_aabb.m_max;
    __asm { vcmpeqps xmm1, xmm0, xmm11 }
    _XMM3 = _XMM2 & _XMM1;
    __asm
    {
      vpcmpeqd xmm0, xmm14, xmm14
      vblendps xmm2, xmm6, xmm0, 7
      vpand   xmm1, xmm3, xmm2
      vptest  xmm1, xmm2
    }
    if ( _CF )
      v15 = 1;
    if ( v15 && *(float *)&_XMM4 == this->m_boundingRadius )
    {
      v8 = 0;
    }
    else
    {
      this->m_aabb.m_min = (hkVector4f)_XMM8.m_quad;
      this->m_aabb.m_max = (hkVector4f)_XMM11.m_quad;
      this->m_boundingRadius = *(float *)&_XMM4;
      v8 = 1;
    }
    v83 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v83 )
      v83 = hkMemoryRouter::s_fallbackRouter;
    v84 = (v12 + 15) & 0xFFFFFFF0;
    if ( v12 > v83->m_stack.m_slabSize || (char *)m_cur + v84 != v83->m_stack.m_cur || v83->m_stack.m_firstNonLifoEnd == m_cur )
      hkLifoAllocator::slowBlockFree(&v83->m_stack, m_cur, v84);
    else
      v83->m_stack.m_cur = m_cur;
  }
  else
  {
    v8 = 0;
  }
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
  return v8;
}

/*
==============
StaticModels_HavokShape::updateInstancesInBoundingVolume
==============
*/

void __fastcall StaticModels_HavokShape::updateInstancesInBoundingVolume(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numIds)
{
  StaticModels_HavokShape::rebuild(this);
}

