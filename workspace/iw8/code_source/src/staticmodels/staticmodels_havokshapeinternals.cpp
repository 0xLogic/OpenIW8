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
  __int64 v4; 
  __int64 v7; 
  hkMemoryAllocator *v8; 
  int m_size; 

  v4 = numIds;
  if ( numIds > 0 )
  {
    v7 = 0i64;
    do
    {
      if ( instanceIds[v7].m_value != 0xFFFF )
      {
        v8 = hkMemHeapAllocator();
        m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
        if ( m_size == (this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags & 0x3FFFFFFF) )
        {
          hkArrayUtil::_reserveMore(v8, &this->m_boundingVolumeData.m_simdTree.m_points, 16);
          m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
        }
        _RCX = &this->m_boundingVolumeData.m_simdTree.m_points.m_data[m_size];
        this->m_boundingVolumeData.m_simdTree.m_points.m_size = m_size + 1;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovups xmmword ptr [rcx], xmm0
        }
        _RCX->m_quad.m128_i32[3] = instanceIds[v7].m_value | 0x3F000000;
      }
      ++v7;
    }
    while ( v7 < v4 );
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
  hkVector4f *m_data; 
  hkMemoryAllocator *v20; 
  hkMemoryAllocator *v21; 
  int v22; 
  char *v23; 
  int v24; 
  hkMemoryRouter *v25; 
  signed int v26; 
  int v27; 
  hkMemoryAllocator *v28; 
  hkAabb *array; 
  int v30; 
  int v31; 
  void *p; 
  int v33; 
  hkcdSimdTree::BuildContext buildContext; 

  m_capacityAndFlags = this->m_instances.m_capacityAndFlags;
  v3 = m_capacityAndFlags & 0x3FFFFFFF;
  array = NULL;
  v30 = 0;
  v31 = 0x80000000;
  v33 = m_capacityAndFlags & 0x3FFFFFFF;
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
  v31 = v3 | 0x80000000;
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
  v30 = v8;
  v12 = 0;
  if ( this->m_boundingVolumeData.m_simdTree.m_points.m_size > 0 )
  {
    _R12 = 0i64;
    do
    {
      _RDI = this->m_boundingVolumeData.m_simdTree.m_points.m_data;
      _RBX = &array[(unsigned __int16)_RDI[_R12].m_quad.m128_i32[3]];
      StaticModels_HavokShapeInstance::calculateAabb(&this->m_instances.m_data[(unsigned __int16)_RDI[_R12].m_quad.m128_i32[3]], this->m_tileIdx, _RBX);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx+10h]
        vaddps  xmm1, xmm0, xmmword ptr [rbx]
        vblendps xmm1, xmm1, xmmword ptr [rdi+r12], 8
        vmovups xmmword ptr [rdi+r12], xmm1
      }
      ++v12;
      ++_R12;
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
  m_data = buildContext.m_points.m_data;
  buildContext.m_points.m_data = this->m_boundingVolumeData.m_simdTree.m_points.m_data;
  this->m_boundingVolumeData.m_simdTree.m_points.m_data = m_data;
  LODWORD(m_data) = buildContext.m_points.m_size;
  buildContext.m_points.m_size = this->m_boundingVolumeData.m_simdTree.m_points.m_size;
  this->m_boundingVolumeData.m_simdTree.m_points.m_size = (int)m_data;
  LODWORD(m_data) = buildContext.m_points.m_capacityAndFlags;
  buildContext.m_points.m_capacityAndFlags = this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags;
  this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags = (int)m_data;
  buildContext.__vftable = (hkcdSimdTree::BuildContext_vtbl *)hkcdSimdTree::BuildContext::`vftable';
  v20 = hkMemHeapAllocator();
  buildContext.m_compounds.m_size = 0;
  if ( buildContext.m_compounds.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v20, buildContext.m_compounds.m_data, 32, buildContext.m_compounds.m_capacityAndFlags & 0x3FFFFFFF);
  buildContext.m_compounds.m_data = NULL;
  buildContext.m_compounds.m_capacityAndFlags = 0x80000000;
  v21 = hkMemHeapAllocator();
  buildContext.m_points.m_size = 0;
  if ( buildContext.m_points.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, buildContext.m_points.m_data, 16, buildContext.m_points.m_capacityAndFlags & 0x3FFFFFFF);
  buildContext.m_points.m_data = NULL;
  buildContext.m_points.m_capacityAndFlags = 0x80000000;
  v22 = v30;
  v23 = (char *)p;
  if ( p == array )
    v22 = 0;
  v30 = v22;
  v24 = v33;
  v25 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !v25 )
    v25 = hkMemoryRouter::s_fallbackRouter;
  v26 = (32 * v24 + 127) & 0xFFFFFF80;
  v27 = (v26 + 15) & 0xFFFFFFF0;
  if ( v26 > v25->m_stack.m_slabSize || &v23[v27] != v25->m_stack.m_cur || v25->m_stack.m_firstNonLifoEnd == v23 )
    hkLifoAllocator::slowBlockFree(&v25->m_stack, v23, v27);
  else
    v25->m_stack.m_cur = v23;
  v28 = hkMemHeapAllocator();
  v30 = 0;
  if ( v31 >= 0 )
    hkMemoryAllocator::bufFree2(v28, array, 32, v31 & 0x3FFFFFFF);
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

__int64 __fastcall StaticModels_HavokShape::updateCachedBounds(StaticModels_HavokShape *this, __int64 a2, double _XMM2_8)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v15; 
  unsigned __int8 v20; 
  int m_size; 
  hkMemoryRouter *v23; 
  int v24; 
  char *m_cur; 
  char *v26; 
  int v27; 
  int v28; 
  hkcdSimdTree::Node *v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned int v42; 
  __int64 v50; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 m_modelIdxAndFlags; 
  const void *CollisionTileModelShape; 
  __int64 v81; 
  char *v84; 
  hkMemoryRouter *v127; 
  int v128; 
  __int64 result; 
  int v140; 
  int v141; 
  __int64 v142; 
  char *v143; 
  hkcdSimdTree::Node *v144; 
  hkMonitorStream *v145; 
  vec3_t origin; 
  hkVector4f b; 
  hkAabb v148; 
  hkTransformf v149; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  hkVector4f v152; 
  __int128 v153; 
  char v154; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  _R13 = this;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v15 = Value;
  v145 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtStaticModels_HavokShape::updateCachedBounds()");
  _RCX = _R13->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+80h]
    vcmpleps xmm1, xmm0, xmmword ptr [rcx+90h]
    vmovmskps eax, xmm1
  }
  if ( _EAX )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
    m_size = _R13->m_instances.m_size;
    v23 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v23 )
      v23 = hkMemoryRouter::s_fallbackRouter;
    v24 = (16 * m_size + 127) & 0xFFFFFF80;
    v140 = v24;
    m_cur = (char *)v23->m_stack.m_cur;
    v26 = &m_cur[v24];
    if ( v24 > v23->m_stack.m_slabSize || v26 > v23->m_stack.m_end )
      m_cur = (char *)hkLifoAllocator::allocateFromNewSlab(&v23->m_stack, v24);
    else
      v23->m_stack.m_cur = v26;
    v27 = 0;
    v28 = 0;
    v141 = 0;
    __asm
    {
      vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
      vpxor   xmm14, xmm14, xmm14
      vpinsrw xmm0, xmm14, eax, 1
      vpshufd xmm1, xmm0, 0
      vxorps  xmm11, xmm8, xmm1
    }
    _RDI = _R13->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+80h]
      vcmpleps xmm1, xmm0, xmmword ptr [rdi+90h]
      vmovmskps eax, xmm1
    }
    if ( _EAX )
    {
      v38 = &_RDI[(__int64)_R13->m_boundingVolumeData.m_simdTree.m_nodes.m_size];
      v144 = v38;
      if ( _RDI != v38 )
      {
        v39 = 0i64;
        v142 = 0i64;
        __asm { vmovss  xmm6, cs:__real@3d000000 }
        do
        {
          if ( _RDI->m_isLeaf )
          {
            v40 = 0i64;
            v143 = &m_cur[16 * v39];
            v41 = 4i64;
            do
            {
              v42 = _RDI->m_data[v40];
              if ( v42 != -1 )
              {
                __asm
                {
                  vxorps  xmm2, xmm2, xmm2
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi], 0
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+20h], 10h
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+40h], 20h ; ' '
                  vmovups xmmword ptr [rbp+100h+var_160.m_min.m_quad], xmm2
                  vxorps  xmm2, xmm2, xmm2
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+10h], 0
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+30h], 10h
                  vinsertps xmm2, xmm2, dword ptr [rbx+rdi+50h], 20h ; ' '
                  vmovups xmmword ptr [rbp+100h+var_160.m_max.m_quad], xmm2
                }
                v50 = (unsigned __int16)v42;
                m_data = _R13->m_instances.m_data;
                if ( hkAabb::isValid(&v148) && (m_modelIdxAndFlags = m_data[v50].m_modelIdxAndFlags, m_modelIdxAndFlags < 0) )
                {
                  __asm
                  {
                    vmovups xmm1, xmmword ptr [rbp+100h+var_160.m_min.m_quad]
                    vminps  xmm8, xmm8, xmm1
                    vmaxps  xmm11, xmm11, xmmword ptr [rbp+100h+var_160.m_max.m_quad]
                    vaddps  xmm0, xmm1, xmmword ptr [rbp+100h+var_160.m_max.m_quad]
                    vmulps  xmm0, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
                    vmovups xmmword ptr [rbp+100h+b.m_quad], xmm0
                  }
                  StaticModels_GetCollisionTileModelInstanceTransform(_R13->m_tileIdx, m_modelIdxAndFlags & 0x3FFF, m_data[v50].m_instanceIdx, &origin, &orientationAsQuat);
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rbp+100h+var_100]
                    vmovups xmmword ptr [rbp+100h+qi.m_vec.m_quad], xmm0
                    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                    vmovups ymmword ptr [rbp+100h+var_140], ymm1
                    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                    vmovups ymmword ptr [rbp+100h+var_140+20h], ymm1
                  }
                  hkRotationImpl<float>::set(&v149.m_rotation, &qi);
                  __asm
                  {
                    vmulss  xmm1, xmm6, dword ptr [rbp+100h+origin]
                    vmovss  dword ptr [rbp+100h+var_140+30h], xmm1
                    vmulss  xmm0, xmm6, dword ptr [rbp+100h+origin+4]
                    vmovss  dword ptr [rbp+100h+var_140+34h], xmm0
                    vmovss  xmm1, dword ptr [rbp+100h+origin+8]
                    vmulss  xmm2, xmm1, xmm6
                    vmovss  dword ptr [rbp+100h+var_140+38h], xmm2
                    vmovss  dword ptr [rbp+100h+var_140+3Ch], xmm7
                  }
                  hkVector4f::setTransformedInversePos(&v152, &v149, &b);
                  CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((m_data[v50].m_modelIdxAndFlags & 0x4000) != 0, _R13->m_tileIdx, m_data[v50].m_modelIdxAndFlags & 0x3FFF);
                  (*(void (__fastcall **)(const void *, hkVector4f *, __int128 *))(*(_QWORD *)CollisionTileModelShape + 48i64))(CollisionTileModelShape, &v152, &v153);
                  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(_R13->m_tileIdx, m_data[v50].m_modelIdxAndFlags & 0x3FFF, m_data[v50].m_instanceIdx);
                  __asm
                  {
                    vmovaps xmm1, xmm0
                    vshufps xmm1, xmm1, xmm1, 0
                    vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
                    vandnps xmm3, xmm0, xmm1
                  }
                  _RAX = v143;
                  v28 = ++v141;
                  v39 = ++v142;
                  v143 += 16;
                  __asm
                  {
                    vshufps xmm1, xmm3, xmm3, 0
                    vshufps xmm0, xmm3, xmm3, 55h ; 'U'
                    vmaxps  xmm2, xmm0, xmm1
                    vshufps xmm1, xmm3, xmm3, 0AAh ; 'ª'
                    vmaxps  xmm2, xmm1, xmm2
                    vmulps  xmm3, xmm2, [rbp+100h+var_D0]
                    vmovups xmm1, xmmword ptr [rbp+100h+b.m_quad]
                    vblendps xmm0, xmm1, xmm3, 8
                    vmovups xmmword ptr [rax], xmm0
                  }
                }
                else
                {
                  v28 = v141;
                  v39 = v142;
                }
              }
              ++v40;
              --v41;
            }
            while ( v41 );
            v38 = v144;
            v27 = 0;
          }
          ++_RDI;
        }
        while ( _RDI != v38 );
        v24 = v140;
        v15 = v145;
      }
    }
    __asm
    {
      vcmpltps xmm0, xmm11, xmm8
      vmovmskps eax, xmm0
    }
    if ( (_EAX & 7) != 0 )
    {
      __asm
      {
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
        vmovups xmm11, xmm8
      }
    }
    __asm
    {
      vaddps  xmm0, xmm11, xmm8
      vmovups xmm13, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
      vmulps  xmm12, xmm0, xmm13
    }
    v81 = v28;
    __asm
    {
      vmovups xmm9, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
      vmovups xmm10, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    }
    if ( v28 > 0 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
      v84 = m_cur;
      do
      {
        __asm
        {
          vsubps  xmm0, xmm12, xmmword ptr [rax]
          vdpps   xmm4, xmm0, xmm0, 7Fh
          vcmpleps xmm5, xmm4, xmm6
          vrsqrtps xmm1, xmm4
          vmulps  xmm3, xmm1, xmm9
          vmulps  xmm0, xmm4, xmm1
          vmulps  xmm1, xmm1, xmm0
          vsubps  xmm2, xmm10, xmm1
          vmulps  xmm0, xmm2, xmm3
          vmulps  xmm1, xmm0, xmm4
          vandnps xmm2, xmm5, xmm1
          vaddss  xmm1, xmm2, dword ptr [rax+0Ch]
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm2, xmm0, xmm1
          vmovss  xmm7, xmm0, xmm7
          vmaxss  xmm7, xmm7, xmm2
        }
        v84 += 16;
        --v81;
      }
      while ( v81 );
    }
    __asm
    {
      vsubps  xmm0, xmm11, xmm8
      vmulps  xmm1, xmm0, xmm13
      vdpps   xmm5, xmm1, xmm1, 7Fh
      vxorps  xmm6, xmm6, xmm6
      vcmpleps xmm4, xmm5, xmm6
      vrsqrtps xmm1, xmm5
      vmulps  xmm3, xmm1, xmm9
      vmulps  xmm0, xmm5, xmm1
      vmulps  xmm1, xmm1, xmm0
      vsubps  xmm2, xmm10, xmm1
      vmulps  xmm0, xmm2, xmm3
      vmulps  xmm1, xmm0, xmm5
      vandnps xmm2, xmm4, xmm1
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm2
      vmovss  xmm4, xmm0, xmm7
      vminss  xmm4, xmm4, xmm1
      vcmpeqps xmm2, xmm8, xmmword ptr [r13+70h]
      vmovups xmm0, xmmword ptr [r13+80h]
      vcmpeqps xmm1, xmm0, xmm11
      vandps  xmm3, xmm2, xmm1
      vpcmpeqd xmm0, xmm14, xmm14
      vblendps xmm2, xmm6, xmm0, 7
      vpand   xmm1, xmm3, xmm2
      vptest  xmm1, xmm2
    }
    if ( _CF )
      v27 = 1;
    if ( v27 )
      __asm { vucomiss xmm4, dword ptr [r13+90h] }
    __asm
    {
      vmovups xmmword ptr [r13+70h], xmm8
      vmovups xmmword ptr [r13+80h], xmm11
      vmovss  dword ptr [r13+90h], xmm4
    }
    v20 = 1;
    v127 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v127 )
      v127 = hkMemoryRouter::s_fallbackRouter;
    v128 = (v24 + 15) & 0xFFFFFFF0;
    if ( v24 > v127->m_stack.m_slabSize || &m_cur[v128] != v127->m_stack.m_cur || v127->m_stack.m_firstNonLifoEnd == m_cur )
      hkLifoAllocator::slowBlockFree(&v127->m_stack, m_cur, v128);
    else
      v127->m_stack.m_cur = m_cur;
  }
  else
  {
    v20 = 0;
  }
  if ( v15 )
    hkMonitorStream::timerEnd(v15, "Et");
  result = v20;
  _R11 = &v154;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
  return result;
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

