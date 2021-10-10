/*
==============
SpatialPartition_Population_Tree_FrustumPartitionIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Population_Tree_FrustumPartitionIterator::Advance(SpatialPartition_Population_Tree_FrustumPartitionIterator *this)
{
  return ?Advance@SpatialPartition_Population_Tree_FrustumPartitionIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Population_Tree_AABBPartitionIterator::Init
==============
*/

void __fastcall SpatialPartition_Population_Tree_AABBPartitionIterator::Init(SpatialPartition_Population_Tree_AABBPartitionIterator *this, const SpatialPartition_Population_Tree *tree, const Bounds *bounds)
{
  ?Init@SpatialPartition_Population_Tree_AABBPartitionIterator@@QEAAXPEBUSpatialPartition_Population_Tree@@AEBUBounds@@@Z(this, tree, bounds);
}

/*
==============
SpatialPartition_Population_Tree_SpherePartitionIterator::Init
==============
*/

void __fastcall SpatialPartition_Population_Tree_SpherePartitionIterator::Init(SpatialPartition_Population_Tree_SpherePartitionIterator *this, const SpatialPartition_Population_Tree *tree, const vec3_t *sphereCentre, float sphereRadius)
{
  ?Init@SpatialPartition_Population_Tree_SpherePartitionIterator@@QEAAXPEBUSpatialPartition_Population_Tree@@AEBTvec3_t@@M@Z(this, tree, sphereCentre, sphereRadius);
}

/*
==============
SpatialPartition_Population_NodeIterator::Init
==============
*/

void __fastcall SpatialPartition_Population_NodeIterator::Init(SpatialPartition_Population_NodeIterator *this, const SpatialPartition_Population *population, unsigned int partitionIndex)
{
  ?Init@SpatialPartition_Population_NodeIterator@@QEAAXPEBUSpatialPartition_Population@@I@Z(this, population, partitionIndex);
}

/*
==============
SpatialPartition_Population_Tree_FrustumPartitionIterator::Init
==============
*/

void __fastcall SpatialPartition_Population_Tree_FrustumPartitionIterator::Init(SpatialPartition_Population_Tree_FrustumPartitionIterator *this, const SpatialPartition_Population_Tree *tree, const vec4_t *planes, unsigned int numPlanes)
{
  ?Init@SpatialPartition_Population_Tree_FrustumPartitionIterator@@QEAAXPEBUSpatialPartition_Population_Tree@@PEBTvec4_t@@I@Z(this, tree, planes, numPlanes);
}

/*
==============
SpatialPartition_TransientPopulation_NodeIterator::Init
==============
*/

void __fastcall SpatialPartition_TransientPopulation_NodeIterator::Init(SpatialPartition_TransientPopulation_NodeIterator *this, const SpatialPartition_TransientPopulation *population, unsigned int partitionLocalIndex)
{
  ?Init@SpatialPartition_TransientPopulation_NodeIterator@@QEAAXPEBUSpatialPartition_TransientPopulation@@I@Z(this, population, partitionLocalIndex);
}

/*
==============
SpatialPartition_Population_Tree_SpherePartitionIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Population_Tree_SpherePartitionIterator::Advance(SpatialPartition_Population_Tree_SpherePartitionIterator *this)
{
  return ?Advance@SpatialPartition_Population_Tree_SpherePartitionIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Population_Tree_AABBPartitionIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Population_Tree_AABBPartitionIterator::Advance(SpatialPartition_Population_Tree_AABBPartitionIterator *this)
{
  return ?Advance@SpatialPartition_Population_Tree_AABBPartitionIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_TransientPopulation_NodeIterator::Advance
==============
*/

bool __fastcall SpatialPartition_TransientPopulation_NodeIterator::Advance(SpatialPartition_TransientPopulation_NodeIterator *this)
{
  return ?Advance@SpatialPartition_TransientPopulation_NodeIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Population_NodeIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Population_NodeIterator::Advance(SpatialPartition_Population_NodeIterator *this)
{
  return ?Advance@SpatialPartition_Population_NodeIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Population_NodeIterator::Advance
==============
*/
char SpatialPartition_Population_NodeIterator::Advance(SpatialPartition_Population_NodeIterator *this)
{
  SpatialPartition_Population_Node *m_curNode; 
  const SpatialPartition_Population *m_population; 
  SpatialPartition_Population_Node *v4; 

  if ( this->m_population->bucketsAreChanging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 281, ASSERT_TYPE_ASSERT, "(!m_population->bucketsAreChanging)", (const char *)&queryFormat, "!m_population->bucketsAreChanging") )
    __debugbreak();
  m_curNode = this->m_curNode;
  if ( !m_curNode || m_curNode->spatialNodeNext == -1 )
    return 0;
  m_population = this->m_population;
  this->m_curIndex = m_curNode->spatialNodeNext;
  v4 = (SpatialPartition_Population_Node *)((__int64 (*)(void))m_population->getNodeFromIndex)();
  this->m_curNode = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 286, ASSERT_TYPE_ASSERT, "(m_curNode)", (const char *)&queryFormat, "m_curNode") )
    __debugbreak();
  return 1;
}

/*
==============
SpatialPartition_Population_Tree_AABBPartitionIterator::Advance
==============
*/
bool SpatialPartition_Population_Tree_AABBPartitionIterator::Advance(SpatialPartition_Population_Tree_AABBPartitionIterator *this)
{
  unsigned int m_stackDepth; 
  unsigned int v3; 
  __int64 v4; 
  SpatialPartition_Population_Partition *partitions; 
  int v6; 
  float v7; 
  float *v8; 
  float dist; 
  float v10; 
  bool result; 

  m_stackDepth = this->m_stackDepth;
  if ( !m_stackDepth )
    return 0;
  v3 = m_stackDepth - 1;
  this->m_stackDepth = v3;
  v4 = this->m_stack[v3];
  if ( (unsigned int)v4 >= this->m_tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 29, ASSERT_TYPE_ASSERT, "(partitionIndex < m_tree->partitionCount)", (const char *)&queryFormat, "partitionIndex < m_tree->partitionCount") )
    __debugbreak();
  partitions = this->m_tree->partitions;
  v6 = *((_DWORD *)&partitions[v4] + 1);
  if ( (v6 & 0x7FFFFFFC) != 0 )
  {
    if ( (v6 & 3) == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 33, ASSERT_TYPE_ASSERT, "(partition.axis < 3)", (const char *)&queryFormat, "partition.axis < 3") )
      __debugbreak();
    v7 = *vec3_t::operator[](&this->m_extents.mins, *((_DWORD *)&partitions[v4] + 1) & 3);
    v8 = vec3_t::operator[](&this->m_extents.maxs, *((_DWORD *)&partitions[v4] + 1) & 3);
    dist = partitions[v4].dist;
    v10 = *v8;
    if ( v7 <= dist )
    {
      if ( this->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 38, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
        __debugbreak();
      this->m_stack[this->m_stackDepth++] = v4 + 1;
      dist = partitions[v4].dist;
    }
    if ( v10 >= dist )
    {
      if ( this->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 44, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
        __debugbreak();
      this->m_stack[this->m_stackDepth++] = (*((_DWORD *)&partitions[v4] + 1) >> 2) & 0x1FFFFFFF;
    }
  }
  result = 1;
  this->m_curPartition = v4;
  return result;
}

/*
==============
SpatialPartition_Population_Tree_FrustumPartitionIterator::Advance
==============
*/
bool SpatialPartition_Population_Tree_FrustumPartitionIterator::Advance(SpatialPartition_Population_Tree_FrustumPartitionIterator *this)
{
  unsigned int m_stackDepth; 
  unsigned int v3; 
  __int64 v4; 
  SpatialPartition_Population_Partition *partitions; 
  int v6; 
  SpatialPartition_Population_Partition *v7; 
  __int64 v8; 
  int v9; 
  bool result; 
  bool leftResult; 
  bool rightResult; 

  m_stackDepth = this->m_stackDepth;
  if ( !m_stackDepth )
    return 0;
  v3 = m_stackDepth - 1;
  this->m_stackDepth = v3;
  v4 = this->m_stack[v3];
  if ( (unsigned int)v4 >= this->m_tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 236, ASSERT_TYPE_ASSERT, "(partitionIndex < m_tree->partitionCount)", (const char *)&queryFormat, "partitionIndex < m_tree->partitionCount") )
    __debugbreak();
  partitions = this->m_tree->partitions;
  v6 = *((_DWORD *)&partitions[v4] + 1);
  v7 = &partitions[v4];
  if ( (v6 & 0x7FFFFFFC) != 0 )
  {
    if ( (v6 & 3) == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 240, ASSERT_TYPE_ASSERT, "(partition.axis < 3)", (const char *)&queryFormat, "partition.axis < 3") )
      __debugbreak();
    v8 = (unsigned int)(v4 + 1);
    v9 = (*((_DWORD *)v7 + 1) >> 2) & 0x1FFFFFFF;
    FrustumVsAABB(this->m_planes4, this->m_numPlanes4, &this->m_tree->extents[v8], &this->m_tree->extents[v9], &leftResult, &rightResult);
    if ( leftResult )
    {
      if ( this->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 248, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
        __debugbreak();
      this->m_stack[this->m_stackDepth++] = v8;
    }
    if ( rightResult )
    {
      if ( this->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 254, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
        __debugbreak();
      this->m_stack[this->m_stackDepth++] = v9;
    }
  }
  result = 1;
  this->m_curPartition = v4;
  return result;
}

/*
==============
SpatialPartition_Population_Tree_SpherePartitionIterator::Advance
==============
*/
bool SpatialPartition_Population_Tree_SpherePartitionIterator::Advance(SpatialPartition_Population_Tree_SpherePartitionIterator *this)
{
  unsigned int m_stackDepth; 
  unsigned int v3; 
  __int64 v4; 
  SpatialPartition_Population_Partition *partitions; 
  int v6; 
  const SpatialPartition_Population_Tree *m_tree; 
  __int64 v8; 
  float m_sphereRadiusSq; 
  ExtentBounds *extents; 
  __int64 v11; 
  __int128 v13; 
  __int128 v15; 
  __m128 v22; 
  ExtentBounds *v27; 
  __int128 v29; 
  __int128 v31; 
  __m128 v38; 
  bool result; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 

  m_stackDepth = this->m_stackDepth;
  if ( !m_stackDepth )
    return 0;
  v3 = m_stackDepth - 1;
  this->m_stackDepth = v3;
  v4 = this->m_stack[v3];
  if ( (unsigned int)v4 >= this->m_tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 98, ASSERT_TYPE_ASSERT, "(partitionIndex < m_tree->partitionCount)", (const char *)&queryFormat, "partitionIndex < m_tree->partitionCount") )
    __debugbreak();
  partitions = this->m_tree->partitions;
  v6 = *((_DWORD *)&partitions[v4] + 1);
  if ( (v6 & 0x7FFFFFFC) != 0 )
  {
    if ( (v6 & 3) == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 102, ASSERT_TYPE_ASSERT, "(partition.axis < 3)", (const char *)&queryFormat, "partition.axis < 3") )
      __debugbreak();
    m_tree = this->m_tree;
    v8 = (unsigned int)(v4 + 1);
    m_sphereRadiusSq = this->m_sphereRadiusSq;
    extents = m_tree->extents;
    HIDWORD(v46) = 0;
    v11 = (*((_DWORD *)&partitions[v4] + 1) >> 2) & 0x1FFFFFFF;
    HIDWORD(v44) = 0;
    v13 = v44;
    *(float *)&v13 = extents[v8].maxs.v[0];
    _XMM3 = v13;
    v15 = v46;
    *(float *)&v15 = extents[v8].mins.v[0];
    _XMM0 = v15;
    __asm
    {
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm0, xmm0, xmm5, 10h
      vinsertps xmm0, xmm0, xmm6, 20h ; ' '
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      vminps  xmm1, xmm3, xmmword ptr [rbx]
    }
    v47 = _XMM0;
    __asm { vmaxps  xmm0, xmm0, xmm1 }
    v22 = _mm128_sub_ps(_XMM0, this->m_sphereCenter.v);
    _XMM2 = _mm128_mul_ps(v22, v22);
    __asm
    {
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    v45 = _XMM3;
    if ( *(float *)&_XMM0 <= m_sphereRadiusSq )
    {
      if ( this->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 108, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
        __debugbreak();
      this->m_stack[this->m_stackDepth++] = v8;
      m_tree = this->m_tree;
      m_sphereRadiusSq = this->m_sphereRadiusSq;
    }
    v27 = m_tree->extents;
    HIDWORD(v45) = 0;
    HIDWORD(v47) = 0;
    v29 = v47;
    *(float *)&v29 = v27[v11].maxs.v[0];
    _XMM3 = v29;
    v31 = v45;
    *(float *)&v31 = v27[v11].mins.v[0];
    _XMM0 = v31;
    __asm
    {
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm0, xmm0, xmm5, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      vminps  xmm1, xmm3, xmmword ptr [rbx]
      vinsertps xmm0, xmm0, xmm6, 20h ; ' '
      vmaxps  xmm0, xmm0, xmm1
    }
    v38 = _mm128_sub_ps(_XMM0, this->m_sphereCenter.v);
    _XMM2 = _mm128_mul_ps(v38, v38);
    __asm
    {
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    if ( *(float *)&_XMM2 <= m_sphereRadiusSq )
    {
      if ( this->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 114, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
        __debugbreak();
      this->m_stack[this->m_stackDepth++] = v11;
    }
  }
  result = 1;
  this->m_curPartition = v4;
  return result;
}

/*
==============
SpatialPartition_TransientPopulation_NodeIterator::Advance
==============
*/
char SpatialPartition_TransientPopulation_NodeIterator::Advance(SpatialPartition_TransientPopulation_NodeIterator *this)
{
  SpatialPartition_Population_Node *m_curNode; 
  unsigned int spatialNodeNext; 
  const SpatialPartition_TransientPopulation *m_population; 
  SpatialPartition_Population_Node *v5; 

  m_curNode = this->m_curNode;
  if ( !m_curNode )
    return 0;
  if ( this->m_curIndex == this->m_lastIndex )
    return 0;
  spatialNodeNext = m_curNode->spatialNodeNext;
  if ( m_curNode->spatialNodeNext == -1 )
    return 0;
  m_population = this->m_population;
  this->m_curIndex = spatialNodeNext;
  v5 = (SpatialPartition_Population_Node *)((__int64 (*)(void))m_population->getNodeFromIndex)();
  this->m_curNode = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 310, ASSERT_TYPE_ASSERT, "(m_curNode)", (const char *)&queryFormat, "m_curNode") )
    __debugbreak();
  return 1;
}

/*
==============
FrustumVsAABB
==============
*/
void FrustumVsAABB(const SpatialPartition_Population_Tree_FrustumPartitionIterator::Plane4 *planes4, unsigned int numPlanes4, const ExtentBounds *leftBox, const ExtentBounds *rightBox, bool *leftResult, bool *rightResult)
{
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v13; 
  __m128 v14; 
  float4 *p_m_planeZ; 
  __int64 v17; 
  __m128 v; 
  __m128 v19; 
  __m128 v20; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 

  v6 = *(__m128 *)leftBox->maxs.v;
  v7 = _mm128_sub_ps(v6, *(__m128 *)leftBox->mins.v);
  v8 = _mm128_add_ps(v6, *(__m128 *)leftBox->mins.v);
  v9 = *(__m128 *)rightBox->maxs.v;
  v10 = _mm128_add_ps(v9, *(__m128 *)rightBox->mins.v);
  v11 = _mm128_sub_ps(v9, *(__m128 *)rightBox->mins.v);
  _XMM12 = _xmm;
  v23 = _mm_shuffle_ps(v7, v7, 85);
  v25 = _mm_shuffle_ps(v7, v7, 170);
  v24 = _mm_shuffle_ps(v8, v8, 85);
  v28 = _mm_shuffle_ps(v10, v10, 0);
  v32 = _mm_shuffle_ps(v10, v10, 170);
  v27 = _mm_shuffle_ps(v11, v11, 0);
  v29 = _mm_shuffle_ps(v11, v11, 85);
  v26 = _mm_shuffle_ps(v8, v8, 170);
  v13 = _mm_shuffle_ps(v7, v7, 0);
  v31 = _mm_shuffle_ps(v11, v11, 170);
  v14 = _mm_shuffle_ps(v8, v8, 0);
  v33 = v13;
  v30 = _mm_shuffle_ps(v10, v10, 85);
  _XMM13 = _xmm;
  if ( numPlanes4 )
  {
    p_m_planeZ = &planes4->m_planeZ;
    v17 = numPlanes4;
    do
    {
      v = p_m_planeZ[-2].v;
      v19 = p_m_planeZ[-1].v;
      v20 = p_m_planeZ->v;
      p_m_planeZ += 4;
      _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps((__m128)(*(_OWORD *)&v13 ^ *(_OWORD *)&v & _xmm), v14), v), p_m_planeZ[-3].v), _mm128_mul_ps(_mm128_add_ps((__m128)(*(_OWORD *)&v19 & _xmm ^ *(_OWORD *)&v23), v24), v19)), _mm128_mul_ps(_mm128_add_ps((__m128)(*(_OWORD *)&v20 & _xmm ^ *(_OWORD *)&v25), v26), v20));
      __asm { vminps  xmm12, xmm12, xmm3 }
      v13 = v33;
      _mm128_add_ps(_mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_add_ps((__m128)(*(_OWORD *)&v & _xmm ^ *(_OWORD *)&v27), v28), v), p_m_planeZ[-3].v), _mm128_mul_ps(_mm128_add_ps((__m128)(*(_OWORD *)&v19 & _xmm ^ *(_OWORD *)&v29), v30), v19)), _mm128_mul_ps(_mm128_add_ps((__m128)(*(_OWORD *)&v20 & _xmm ^ *(_OWORD *)&v31), v32), v20));
      __asm { vminps  xmm13, xmm13, xmm3 }
      --v17;
    }
    while ( v17 );
  }
  __asm { vtestps xmm12, xmm12 }
  *leftResult = _ZF;
  __asm { vtestps xmm13, xmm13 }
  *rightResult = _ZF;
}

/*
==============
SpatialPartition_Population_NodeIterator::Init
==============
*/
void SpatialPartition_Population_NodeIterator::Init(SpatialPartition_Population_NodeIterator *this, const SpatialPartition_Population *population, unsigned int partitionIndex)
{
  __int64 v4; 
  SpatialPartition_Population_Node *buckets; 
  unsigned int partitionCount; 

  this->m_population = population;
  v4 = partitionIndex;
  if ( partitionIndex >= population->partitionCount )
  {
    partitionCount = population->partitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( m_population->partitionCount )", "partitionIndex doesn't index m_population->partitionCount\n\t%i not in [0, %i)", partitionIndex, partitionCount) )
      __debugbreak();
  }
  buckets = this->m_population->buckets;
  this->m_curIndex = -1;
  this->m_curNode = &buckets[v4];
}

/*
==============
SpatialPartition_Population_Tree_AABBPartitionIterator::Init
==============
*/
void SpatialPartition_Population_Tree_AABBPartitionIterator::Init(SpatialPartition_Population_Tree_AABBPartitionIterator *this, const SpatialPartition_Population_Tree *tree, const Bounds *bounds)
{
  this->m_extents.mins.v[0] = bounds->midPoint.v[0] - bounds->halfSize.v[0];
  this->m_extents.mins.v[1] = bounds->midPoint.v[1] - bounds->halfSize.v[1];
  this->m_extents.mins.v[2] = bounds->midPoint.v[2] - bounds->halfSize.v[2];
  this->m_extents.maxs.v[0] = bounds->midPoint.v[0] + bounds->halfSize.v[0];
  this->m_extents.maxs.v[1] = bounds->halfSize.v[1] + bounds->midPoint.v[1];
  this->m_extents.maxs.v[2] = bounds->halfSize.v[2] + bounds->midPoint.v[2];
  this->m_tree = tree;
  this->m_curPartition = -1;
  if ( tree )
    *(_QWORD *)&this->m_stackDepth = 1i64;
}

/*
==============
SpatialPartition_Population_Tree_FrustumPartitionIterator::Init
==============
*/
void SpatialPartition_Population_Tree_FrustumPartitionIterator::Init(SpatialPartition_Population_Tree_FrustumPartitionIterator *this, const SpatialPartition_Population_Tree *tree, const vec4_t *planes, unsigned int numPlanes)
{
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int *v11; 
  __int64 v25; 

  if ( !numPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 202, ASSERT_TYPE_ASSERT, "(numPlanes > 0)", (const char *)&queryFormat, "numPlanes > 0") )
    __debugbreak();
  v8 = 0;
  this->m_numPlanes4 = (numPlanes + 3) >> 2;
  if ( (numPlanes + 3) >> 2 )
  {
    v9 = numPlanes - 1;
    do
    {
      v10 = v9;
      if ( v9 > 4 * v8 )
        v10 = 4 * v8;
      v11 = (unsigned int *)&planes[v10];
      _XMM4 = *v11;
      _XMM15 = v11[3];
      _XMM8 = v11[1];
      _XMM12 = v11[2];
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [r9], 10h
        vinsertps xmm15, xmm15, xmm11, 10h
        vinsertps xmm4, xmm4, dword ptr [rdx], 20h ; ' '
        vinsertps xmm8, xmm8, xmm3, 10h
        vinsertps xmm12, xmm12, xmm7, 10h
        vinsertps xmm15, xmm15, xmm13, 20h ; ' '
        vinsertps xmm8, xmm8, xmm5, 20h ; ' '
        vinsertps xmm12, xmm12, xmm9, 20h ; ' '
        vinsertps xmm4, xmm4, dword ptr [rax], 30h ; '0'
      }
      v25 = v8++;
      v25 <<= 6;
      __asm
      {
        vinsertps xmm15, xmm15, xmm14, 30h ; '0'
        vinsertps xmm8, xmm8, xmm6, 30h ; '0'
        vinsertps xmm12, xmm12, xmm10, 30h ; '0'
      }
      *(float4 *)((char *)&this->m_planes4[0].m_planeX + v25) = (float4)_XMM4.v;
      *(float4 *)((char *)&this->m_planes4[0].m_planeY + v25) = (float4)_XMM8.v;
      *(float4 *)((char *)&this->m_planes4[0].m_planeZ + v25) = (float4)_XMM12.v;
      *(__m128 *)((char *)&this->m_planes4[0].m_planeW2.v + v25) = _mm128_mul_ps(_XMM15, (__m128)_xmm);
    }
    while ( v8 < this->m_numPlanes4 );
  }
  this->m_tree = tree;
  this->m_curPartition = -1;
  if ( tree )
    *(_QWORD *)&this->m_stackDepth = 1i64;
}

/*
==============
SpatialPartition_Population_Tree_SpherePartitionIterator::Init
==============
*/
void SpatialPartition_Population_Tree_SpherePartitionIterator::Init(SpatialPartition_Population_Tree_SpherePartitionIterator *this, const SpatialPartition_Population_Tree *tree, const vec3_t *sphereCentre, float sphereRadius)
{
  __int128 v5; 
  __int128 v8; 

  HIDWORD(v8) = 0;
  v5 = v8;
  *(float *)&v5 = sphereCentre->v[0];
  _XMM4 = v5;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [r8+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r8+8], 20h ; ' '
  }
  this->m_tree = tree;
  this->m_curPartition = -1;
  this->m_sphereCenter = (float4)_XMM4.v;
  this->m_sphereRadiusSq = sphereRadius * sphereRadius;
  if ( tree )
    *(_QWORD *)&this->m_stackDepth = 1i64;
}

/*
==============
SpatialPartition_TransientPopulation_NodeIterator::Init
==============
*/
void SpatialPartition_TransientPopulation_NodeIterator::Init(SpatialPartition_TransientPopulation_NodeIterator *this, const SpatialPartition_TransientPopulation *population, unsigned int partitionLocalIndex)
{
  __int64 v4; 
  const SpatialPartition_TransientPopulation *m_population; 
  SpatialPartition_Population_Node *buckets; 
  unsigned int partitionCount; 

  this->m_population = population;
  v4 = partitionLocalIndex;
  if ( partitionLocalIndex >= population->partitionCount )
  {
    partitionCount = population->partitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 297, ASSERT_TYPE_ASSERT, "(unsigned)( partitionLocalIndex ) < (unsigned)( m_population->partitionCount )", "partitionLocalIndex doesn't index m_population->partitionCount\n\t%i not in [0, %i)", partitionLocalIndex, partitionCount) )
      __debugbreak();
  }
  m_population = this->m_population;
  buckets = this->m_population->buckets;
  this->m_curIndex = -1;
  this->m_curNode = &buckets[v4];
  this->m_lastIndex = m_population->bucketTails[v4].spatialNodeNext;
}

