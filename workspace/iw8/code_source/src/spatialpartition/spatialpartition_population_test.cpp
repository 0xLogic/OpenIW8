/*
==============
SpatialPartition_Population_Test
==============
*/

void SpatialPartition_Population_Test(void)
{
  ?SpatialPartition_Population_Test@@YAXXZ();
}

/*
==============
SpartialPartition_Population_Test::MakePlaneBox
==============
*/
void SpartialPartition_Population_Test::MakePlaneBox(const ExtentBounds *box, vec4_t *planes)
{
  const ExtentBounds *v3; 
  __m128 *v8; 
  vec4_t result; 
  __m128 v18; 

  v3 = box;
  v18.m128_f32[0] = FLOAT_1_0;
  v18.m128_f32[1] = 0.0;
  v18.m128_f32[2] = 0.0;
  v18 = *(__m128 *)PlaneFromPoint(&result, &box->mins, (const vec3_t *)&v18);
  _XMM1 = v18;
  _mm_shuffle_ps(v18, v18, 255);
  __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
  v18.m128_i32[3] = LODWORD(_XMM1.v[3]);
  v18.m128_f32[0] = 0.0;
  v18.m128_f32[1] = FLOAT_1_0;
  v18.m128_f32[2] = 0.0;
  *planes = _XMM1;
  v18 = *(__m128 *)PlaneFromPoint(&result, &v3->mins, (const vec3_t *)&v18);
  _XMM1 = v18;
  _mm_shuffle_ps(v18, v18, 255);
  __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
  v18.m128_i32[3] = LODWORD(_XMM1.v[3]);
  v18.m128_f32[0] = 0.0;
  v18.m128_f32[1] = 0.0;
  v18.m128_f32[2] = FLOAT_1_0;
  planes[1] = _XMM1;
  v8 = (__m128 *)PlaneFromPoint(&result, &v3->mins, (const vec3_t *)&v18);
  v3 = (const ExtentBounds *)((char *)v3 + 12);
  v18 = *v8;
  _XMM1 = v18;
  _mm_shuffle_ps(v18, v18, 255);
  __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
  v18.m128_i32[3] = LODWORD(_XMM1.v[3]);
  v18.m128_f32[0] = FLOAT_N1_0;
  v18.m128_f32[1] = 0.0;
  v18.m128_f32[2] = 0.0;
  planes[2] = _XMM1;
  v18 = *(__m128 *)PlaneFromPoint(&result, &v3->mins, (const vec3_t *)&v18);
  _XMM1 = v18;
  _mm_shuffle_ps(v18, v18, 255);
  __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
  v18.m128_i32[3] = LODWORD(_XMM1.v[3]);
  v18.m128_f32[0] = 0.0;
  v18.m128_f32[1] = FLOAT_N1_0;
  v18.m128_f32[2] = 0.0;
  planes[3] = _XMM1;
  v18 = *(__m128 *)PlaneFromPoint(&result, &v3->mins, (const vec3_t *)&v18);
  _XMM1 = v18;
  _mm_shuffle_ps(v18, v18, 255);
  __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
  v18.m128_i32[3] = LODWORD(_XMM1.v[3]);
  v18.m128_f32[0] = 0.0;
  v18.m128_f32[1] = 0.0;
  v18.m128_f32[2] = FLOAT_N1_0;
  planes[4] = _XMM1;
  v18 = *(__m128 *)PlaneFromPoint(&result, &v3->mins, (const vec3_t *)&v18);
  _XMM1 = v18;
  _mm_shuffle_ps(v18, v18, 255);
  __asm { vinsertps xmm1, xmm1, xmm0, 30h ; '0' }
  planes[5] = _XMM1;
}

/*
==============
SpartialPartition_Population_Test::RunTest_Simple
==============
*/

char __fastcall SpartialPartition_Population_Test::RunTest_Simple(double _XMM0_8)
{
  __m256i v1; 
  unsigned int v3; 
  __int64 v5; 
  unsigned int Partition; 
  __int64 v7; 
  int v8; 
  unsigned int expectedHits[2]; 
  SpatialPartition_Population population; 
  ExtentBounds box; 
  ExtentBounds v12; 
  int v13; 
  SpatialPartition_Population_Tree_SpherePartitionIterator iter; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  population.partitionCount = 7;
  *(__m256i *)&population.buckets = v1;
  *(_QWORD *)&population.currentPopulation = 0i64;
  *((_DWORD *)&population.bucketsAreChanging + 1) = 0;
  population.tree = &SpartialPartition_Population_Test::TEST_POPULATION_TREE;
  *(_QWORD *)v12.mins.v = 0x100000000i64;
  *(_OWORD *)box.mins.v = _xmm;
  box.maxs.v[1] = FLOAT_2_0;
  box.maxs.v[2] = FLOAT_2_0;
  LODWORD(v12.mins.v[2]) = 2;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v12);
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x200000001i64;
  *(_OWORD *)v12.mins.v = _xmm;
  v12.maxs.v[1] = FLOAT_99_0;
  v12.maxs.v[2] = FLOAT_2_0;
  LODWORD(box.maxs.v[0]) = 3;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_4_(&population, &v12, (const unsigned int (*)[4])&box);
  v12.mins.v[0] = 0.0;
  *(_QWORD *)&v12.mins.y = 0x300000001i64;
  *(_OWORD *)box.mins.v = _xmm;
  box.maxs.v[1] = FLOAT_99_0;
  box.maxs.v[2] = FLOAT_2_0;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v12);
  v12.mins.v[0] = 0.0;
  *(_QWORD *)&v12.mins.y = 0x500000004i64;
  *(_OWORD *)box.mins.v = _xmm;
  box.maxs.v[1] = FLOAT_2_0;
  box.maxs.v[2] = FLOAT_2_0;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v12);
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x500000004i64;
  *(_OWORD *)v12.mins.v = _xmm;
  v12.maxs.v[1] = FLOAT_99_0;
  v12.maxs.v[2] = FLOAT_2_0;
  LODWORD(box.maxs.v[0]) = 6;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_4_(&population, &v12, (const unsigned int (*)[4])&box);
  v12.mins.v[0] = 0.0;
  *(_QWORD *)&v12.mins.y = 0x600000004i64;
  *(_OWORD *)box.mins.v = _xmm;
  box.maxs.v[1] = FLOAT_99_0;
  box.maxs.v[2] = FLOAT_2_0;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v12);
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x200000001i64;
  *(_QWORD *)box.maxs.v = 0x500000004i64;
  *(_OWORD *)v12.mins.v = _xmm;
  v12.maxs.v[1] = FLOAT_2_0;
  v12.maxs.v[2] = FLOAT_2_0;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_5_(&population, &v12, (const unsigned int (*)[5])&box);
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x300000001i64;
  *(_OWORD *)v12.mins.v = _xmm;
  v12.maxs.v[1] = FLOAT_70_0;
  v12.maxs.v[2] = FLOAT_2_0;
  *(_QWORD *)box.maxs.v = 0x600000004i64;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_5_(&population, &v12, (const unsigned int (*)[5])&box);
  box.mins.v[0] = 0.0;
  v12.mins.v[0] = FLOAT_N1_0;
  v12.mins.v[1] = FLOAT_N1_0;
  v12.mins.v[2] = FLOAT_N1_0;
  *(_QWORD *)&box.mins.y = 0x200000001i64;
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &v12.mins, 1.8320508);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&box, 3u);
  expectedHits[0] = 0;
  box.mins.v[0] = FLOAT_N1_0;
  box.mins.v[1] = FLOAT_N1_0;
  box.mins.v[2] = FLOAT_N1_0;
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, 1.6320508);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, expectedHits, 1u);
  v12.mins.v[0] = 0.0;
  box.mins.v[0] = FLOAT_25_0;
  box.mins.v[1] = FLOAT_55_0;
  box.mins.v[2] = FLOAT_1_0;
  *(_QWORD *)&v12.mins.y = 0x300000001i64;
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, 4.9000001);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&v12, 3u);
  v12.mins.v[0] = 0.0;
  *(_QWORD *)&v12.mins.y = 0x300000001i64;
  LODWORD(v12.maxs.v[0]) = 2;
  iter.m_tree = NULL;
  box.mins.v[0] = FLOAT_25_0;
  box.mins.v[1] = FLOAT_55_0;
  box.mins.v[2] = FLOAT_1_0;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, 5.0999999);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&v12, 4u);
  v12.mins.v[0] = 0.0;
  box.mins.v[0] = FLOAT_50_0;
  box.mins.v[1] = FLOAT_50_0;
  box.mins.v[2] = FLOAT_1_0;
  *(_QWORD *)&v12.mins.y = 0x300000001i64;
  *(_QWORD *)v12.maxs.v = 0x400000002i64;
  LODWORD(v12.maxs.v[2]) = 6;
  v13 = 5;
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, 1.0);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&v12, 7u);
  box.mins.v[0] = FLOAT_10_0;
  box.mins.v[1] = FLOAT_10_0;
  box.mins.v[2] = FLOAT_10_0;
  if ( SpatialPartition_Population_FindPartition(&population, &box.mins) != 2 )
  {
    box.mins.v[0] = FLOAT_10_0;
    box.mins.v[1] = FLOAT_10_0;
    box.mins.v[2] = FLOAT_10_0;
    v8 = 2;
    Partition = SpatialPartition_Population_FindPartition(&population, &box.mins);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 234, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,10.0f,10.0f } ) ) == ( TEST_PARTITION_LEFT_BOTTOM_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,10.0f,10.0f } )", "TEST_PARTITION_LEFT_BOTTOM_LEAF", Partition, v8) )
      __debugbreak();
  }
  box.mins.v[1] = FLOAT_80_0;
  box.mins.v[0] = FLOAT_10_0;
  box.mins.v[2] = FLOAT_10_0;
  if ( SpatialPartition_Population_FindPartition(&population, &box.mins) != 3 )
  {
    box.mins.v[0] = FLOAT_10_0;
    box.mins.v[1] = FLOAT_80_0;
    box.mins.v[2] = FLOAT_10_0;
    LODWORD(v7) = 3;
    LODWORD(v5) = SpatialPartition_Population_FindPartition(&population, &box.mins);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 235, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,80.0f,10.0f } ) ) == ( TEST_PARTITION_LEFT_TOP_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,80.0f,10.0f } )", "TEST_PARTITION_LEFT_TOP_LEAF", v5, v7) )
      __debugbreak();
  }
  box.mins.v[0] = FLOAT_70_0;
  box.mins.v[1] = FLOAT_10_0;
  box.mins.v[2] = FLOAT_10_0;
  if ( SpatialPartition_Population_FindPartition(&population, &box.mins) != 5 )
  {
    box.mins.v[0] = FLOAT_70_0;
    box.mins.v[1] = FLOAT_10_0;
    box.mins.v[2] = FLOAT_10_0;
    LODWORD(v7) = 5;
    LODWORD(v5) = SpatialPartition_Population_FindPartition(&population, &box.mins);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 236, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,10.0f,10.0f } ) ) == ( TEST_PARTITION_RIGHT_BOTTOM_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,10.0f,10.0f } )", "TEST_PARTITION_RIGHT_BOTTOM_LEAF", v5, v7) )
      __debugbreak();
  }
  box.mins.v[1] = FLOAT_90_0;
  box.mins.v[0] = FLOAT_70_0;
  box.mins.v[2] = FLOAT_10_0;
  v3 = SpatialPartition_Population_FindPartition(&population, &box.mins);
  if ( v3 != 6 )
  {
    box.mins.v[0] = FLOAT_70_0;
    box.mins.v[1] = FLOAT_90_0;
    box.mins.v[2] = FLOAT_10_0;
    LODWORD(v7) = 6;
    LODWORD(v5) = SpatialPartition_Population_FindPartition(&population, &box.mins);
    LOBYTE(v3) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 237, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,90.0f,10.0f } ) ) == ( TEST_PARTITION_RIGHT_TOP_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,90.0f,10.0f } )", "TEST_PARTITION_RIGHT_TOP_LEAF", v5, v7);
    if ( (_BYTE)v3 )
      __debugbreak();
  }
  return v3;
}

/*
==============
SpatialPartition_Population_Test
==============
*/
void SpatialPartition_Population_Test(double a1)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  SpatialPartition_Population_Node *v3; 
  unsigned int *v4; 
  unsigned int *v5; 
  SpatialPartition_Population_Node *v6; 
  __int64 v7; 
  SpatialPartition_Population population; 
  unsigned int expectedCount[7]; 
  __int64 v12[3]; 
  int v13; 

  v1 = __rdtsc();
  SpartialPartition_Population_Test::RunTest_Simple(a1);
  v2 = 0;
  population.partitionCount = 7;
  population.userData = NULL;
  population.tree = &SpartialPartition_Population_Test::TEST_POPULATION_TREE;
  v3 = &SpartialPartition_Population_Test::s_testObjects;
  *(_QWORD *)&population.currentPopulation = 0i64;
  population.buckets = (SpatialPartition_Population_Node *)v12;
  *((_DWORD *)&population.bucketsAreChanging + 1) = 0;
  population.getIndexFromNode = SpartialPartition_Population_Test::TestPopulation_GetIndexFromNode;
  memset(v12, 255, sizeof(v12));
  population.getNodeFromIndex = SpartialPartition_Population_Test::TestPopulation_GetNodeFromIndex;
  v13 = -1;
  memset_0(&SpartialPartition_Population_Test::s_testObjects, 0, 0x960ui64);
  v4 = (unsigned int *)&unk_14EB00128;
  memset(expectedCount, 0, sizeof(expectedCount));
  v5 = (unsigned int *)&unk_14EB00128;
  v6 = &SpartialPartition_Population_Test::s_testObjects;
  do
  {
    *(v5 - 1) = v2;
    *v5 = v2 % 7;
    SpatialPartition_Population_Add(&population, v6, v2 % 7);
    ++expectedCount[*v5];
    SpartialPartition_Population_Test::TestObjectIterator(&population, (unsigned int (*)[7])expectedCount);
    ++v2;
    v5 += 6;
    v6 += 6;
  }
  while ( v2 < 0x64 );
  v7 = 100i64;
  do
  {
    SpatialPartition_Population_Remove(&population, v3, *v4);
    --expectedCount[*v4];
    SpartialPartition_Population_Test::TestObjectIterator(&population, (unsigned int (*)[7])expectedCount);
    v3 += 6;
    v4 += 6;
    --v7;
  }
  while ( v7 );
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - v1) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Sys_Printf("SpatialPartition Population tests ran in %.3f ms.\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick));
}

/*
==============
SpartialPartition_Population_Test::TestObjectIterator
==============
*/
void SpartialPartition_Population_Test::TestObjectIterator(SpatialPartition_Population *population, unsigned int (*expectedCount)[7])
{
  unsigned int (*v3)[7]; 
  SpatialPartition_Population *v4; 
  unsigned int i; 
  int v6; 
  SpatialPartition_Population_Node *m_curNode; 
  __int64 v8; 
  __int64 v9; 
  SpatialPartition_Population_NodeIterator v10; 
  unsigned int (*v12)[7]; 

  v12 = expectedCount;
  v3 = expectedCount;
  v4 = population;
  for ( i = 0; i < 7; ++i )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v10.m_curIndex = -1;
    *(_OWORD *)&v10.m_population = _XMM0;
    v6 = 0;
    SpatialPartition_Population_NodeIterator::Init(&v10, v4, i);
    if ( SpatialPartition_Population_NodeIterator::Advance(&v10) )
    {
      do
      {
        m_curNode = v10.m_curNode;
        if ( !v10.m_curNode )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
            __debugbreak();
          m_curNode = v10.m_curNode;
        }
        if ( m_curNode[1].spatialNodeNext != (unsigned int)(((char *)m_curNode - (char *)&SpartialPartition_Population_Test::s_testObjects) / 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 186, ASSERT_TYPE_ASSERT, "(obj->index == static_cast<uint>( obj - s_testObjects ))", (const char *)&queryFormat, "obj->index == static_cast<uint>( obj - s_testObjects )") )
          __debugbreak();
        if ( m_curNode[2].spatialNodeNext != i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 187, ASSERT_TYPE_ASSERT, "(obj->partition == partitionIndex)", (const char *)&queryFormat, "obj->partition == partitionIndex") )
          __debugbreak();
        ++v6;
      }
      while ( SpatialPartition_Population_NodeIterator::Advance(&v10) );
      v3 = v12;
      v4 = population;
    }
    if ( v6 != *(_DWORD *)v3 )
    {
      LODWORD(v9) = *(_DWORD *)v3;
      LODWORD(v8) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 190, ASSERT_TYPE_ASSERT, "( numFound ) == ( expectedCount[partitionIndex] )", "%s == %s\n\t%i, %i", "numFound", "expectedCount[partitionIndex]", v8, v9) )
        __debugbreak();
    }
    v3 = (unsigned int (*)[7])((char *)v3 + 4);
    v12 = v3;
  }
}

/*
==============
SpartialPartition_Population_Test::TestPopulation_GetIndexFromNode
==============
*/
__int64 SpartialPartition_Population_Test::TestPopulation_GetIndexFromNode(const SpatialPartition_Population *__formal, const SpatialPartition_Population_Node *node)
{
  __int64 v2; 
  __int64 v3; 
  int v5; 
  int v6; 

  v2 = (unsigned __int128)(((char *)node - (char *)&SpartialPartition_Population_Test::s_testObjects) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
  v3 = ((unsigned __int64)v2 >> 63) + (v2 >> 2);
  if ( (unsigned int)v3 >= 0x64 )
  {
    v6 = 100;
    v5 = ((unsigned __int64)v2 >> 63) + (v2 >> 2);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_TEST_OBJECTS )", "index doesn't index MAX_TEST_OBJECTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return (unsigned int)v3;
}

/*
==============
SpartialPartition_Population_Test::TestPopulation_GetNodeFromIndex
==============
*/
SpatialPartition_Population_Node *SpartialPartition_Population_Test::TestPopulation_GetNodeFromIndex(const SpatialPartition_Population *__formal, unsigned int index)
{
  __int64 v2; 
  int v5; 

  v2 = index;
  if ( index >= 0x64 )
  {
    v5 = 100;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 161, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_TEST_OBJECTS )", "index doesn't index MAX_TEST_OBJECTS\n\t%i not in [0, %i)", index, v5) )
      __debugbreak();
  }
  return &SpartialPartition_Population_Test::s_testObjects + 6 * v2;
}

