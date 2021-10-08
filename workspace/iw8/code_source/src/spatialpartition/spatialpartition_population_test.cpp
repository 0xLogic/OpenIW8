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
  const ExtentBounds *v7; 
  vec4_t result; 
  __int128 v57[3]; 
  char vars0; 

  __asm
  {
    vmovaps [rsp+80h+var_10], xmm6
    vmovaps [rsp+80h+var_20], xmm7
    vmovaps [rsp+80h+var_30], xmm8
    vmovss  xmm6, cs:__real@3f800000
  }
  _RDI = planes;
  v7 = box;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+var_50], xmm6
    vmovss  dword ptr [rbp+var_50+4], xmm8
    vmovss  dword ptr [rbp+var_50+8], xmm8
  }
  _RAX = PlaneFromPoint(&result, &box->mins, (const vec3_t *)v57);
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+var_50], xmm0
    vmovups xmm1, [rbp+var_50]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vxorps  xmm0, xmm0, xmm7
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups [rbp+var_50], xmm1
  }
  HIDWORD(v57[0]) = HIDWORD(_RT0);
  __asm
  {
    vmovss  dword ptr [rbp+var_50], xmm8
    vmovss  dword ptr [rbp+var_50+4], xmm6
    vmovss  dword ptr [rbp+var_50+8], xmm8
    vmovups xmmword ptr [rdi], xmm1
  }
  _RAX = PlaneFromPoint(&result, &v7->mins, (const vec3_t *)v57);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+var_50], xmm0
    vmovups xmm1, [rbp+var_50]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vxorps  xmm0, xmm0, xmm7
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups [rbp+var_50], xmm1
  }
  HIDWORD(v57[0]) = HIDWORD(_RT0);
  __asm
  {
    vmovss  dword ptr [rbp+var_50], xmm8
    vmovss  dword ptr [rbp+var_50+4], xmm8
    vmovss  dword ptr [rbp+var_50+8], xmm6
    vmovups xmmword ptr [rdi+10h], xmm1
  }
  _RAX = PlaneFromPoint(&result, &v7->mins, (const vec3_t *)v57);
  __asm { vmovss  xmm6, cs:__real@bf800000 }
  v7 = (const ExtentBounds *)((char *)v7 + 12);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+var_50], xmm0
    vmovups xmm1, [rbp+var_50]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vxorps  xmm0, xmm0, xmm7
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups [rbp+var_50], xmm1
  }
  HIDWORD(v57[0]) = HIDWORD(_RT0);
  __asm
  {
    vmovss  dword ptr [rbp+var_50], xmm6
    vmovss  dword ptr [rbp+var_50+4], xmm8
    vmovss  dword ptr [rbp+var_50+8], xmm8
    vmovups xmmword ptr [rdi+20h], xmm1
  }
  _RAX = PlaneFromPoint(&result, &v7->mins, (const vec3_t *)v57);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+var_50], xmm0
    vmovups xmm1, [rbp+var_50]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vxorps  xmm0, xmm0, xmm7
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups [rbp+var_50], xmm1
  }
  HIDWORD(v57[0]) = HIDWORD(_RT0);
  __asm
  {
    vmovss  dword ptr [rbp+var_50], xmm8
    vmovss  dword ptr [rbp+var_50+4], xmm6
    vmovss  dword ptr [rbp+var_50+8], xmm8
    vmovups xmmword ptr [rdi+30h], xmm1
  }
  _RAX = PlaneFromPoint(&result, &v7->mins, (const vec3_t *)v57);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+var_50], xmm0
    vmovups xmm1, [rbp+var_50]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vxorps  xmm0, xmm0, xmm7
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups [rbp+var_50], xmm1
  }
  HIDWORD(v57[0]) = HIDWORD(_RT0);
  __asm
  {
    vmovss  dword ptr [rbp+var_50], xmm8
    vmovss  dword ptr [rbp+var_50+4], xmm8
    vmovss  dword ptr [rbp+var_50+8], xmm6
    vmovups xmmword ptr [rdi+40h], xmm1
  }
  _RAX = PlaneFromPoint(&result, &v7->mins, (const vec3_t *)v57);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+var_50], xmm0
    vmovups xmm1, [rbp+var_50]
    vshufps xmm0, xmm0, xmm0, 0FFh
    vxorps  xmm0, xmm0, xmm7
    vinsertps xmm1, xmm1, xmm0, 30h ; '0'
    vmovups xmmword ptr [rdi+50h], xmm1
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, [rsp+80h+var_10]
    vmovaps xmm7, [rsp+80h+var_20]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
SpartialPartition_Population_Test::RunTest_Simple
==============
*/

char __fastcall SpartialPartition_Population_Test::RunTest_Simple(double _XMM0_8)
{
  unsigned int v32; 
  __int64 v39; 
  unsigned int Partition; 
  __int64 v41; 
  int v42; 
  unsigned int expectedHits[2]; 
  SpatialPartition_Population population; 
  ExtentBounds box; 
  ExtentBounds v46; 
  int v47; 
  SpatialPartition_Population_Tree_SpherePartitionIterator iter; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm7, cs:__real@40000000
    vpxor   xmm0, xmm0, xmm0
  }
  population.partitionCount = 7;
  __asm
  {
    vmovdqu ymmword ptr [rsp+350h+population.buckets], ymm0
    vmovups xmm0, cs:__xmm@400000003f8000003f8000003f800000
  }
  *(_QWORD *)&population.currentPopulation = 0i64;
  *((_DWORD *)&population.bucketsAreChanging + 1) = 0;
  population.tree = &SpartialPartition_Population_Test::TEST_POPULATION_TREE;
  *(_QWORD *)v46.mins.v = 0x100000000i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+box.mins], xmm0
    vmovss  dword ptr [rbp+250h+box.maxs+4], xmm7
    vmovss  dword ptr [rbp+250h+box.maxs+8], xmm7
  }
  LODWORD(v46.mins.v[2]) = 2;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v46);
  __asm
  {
    vmovups xmm0, cs:__xmm@400000003f8000003f8000003f800000
    vmovss  xmm6, cs:__real@42c60000
  }
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x200000001i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+var_2A8.mins], xmm0
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+4], xmm6
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+8], xmm7
  }
  LODWORD(box.maxs.v[0]) = 3;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_4_(&population, &v46, (const unsigned int (*)[4])&box);
  __asm { vmovups xmm0, cs:__xmm@400000003f80000042c400003f800000 }
  v46.mins.v[0] = 0.0;
  *(_QWORD *)&v46.mins.y = 0x300000001i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+box.mins], xmm0
    vmovss  dword ptr [rbp+250h+box.maxs+4], xmm6
    vmovss  dword ptr [rbp+250h+box.maxs+8], xmm7
  }
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v46);
  __asm { vmovups xmm0, cs:__xmm@425000003f8000003f800000424c0000 }
  v46.mins.v[0] = 0.0;
  *(_QWORD *)&v46.mins.y = 0x500000004i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+box.mins], xmm0
    vmovss  dword ptr [rbp+250h+box.maxs+4], xmm7
    vmovss  dword ptr [rbp+250h+box.maxs+8], xmm7
  }
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v46);
  __asm { vmovups xmm0, cs:__xmm@425000003f8000003f800000424c0000 }
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x500000004i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+var_2A8.mins], xmm0
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+4], xmm6
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+8], xmm7
  }
  LODWORD(box.maxs.v[0]) = 6;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_4_(&population, &v46, (const unsigned int (*)[4])&box);
  __asm { vmovups xmm0, cs:__xmm@425000003f80000042c40000424c0000 }
  v46.mins.v[0] = 0.0;
  *(_QWORD *)&v46.mins.y = 0x600000004i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+box.mins], xmm0
    vmovss  dword ptr [rbp+250h+box.maxs+4], xmm6
    vmovss  dword ptr [rbp+250h+box.maxs+8], xmm7
  }
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_3_(&population, &box, (const unsigned int (*)[3])&v46);
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x200000001i64;
  __asm { vmovups xmm0, cs:__xmm@42c600003f8000003f8000003f800000 }
  *(_QWORD *)box.maxs.v = 0x500000004i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+var_2A8.mins], xmm0
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+4], xmm7
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+8], xmm7
  }
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_5_(&population, &v46, (const unsigned int (*)[5])&box);
  __asm
  {
    vmovups xmm0, cs:__xmm@42c600003f800000427000003f800000
    vmovss  xmm9, cs:__real@428c0000
  }
  box.mins.v[0] = 0.0;
  *(_QWORD *)&box.mins.y = 0x300000001i64;
  __asm
  {
    vmovups xmmword ptr [rbp+250h+var_2A8.mins], xmm0
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+4], xmm9
    vmovss  dword ptr [rbp+250h+var_2A8.maxs+8], xmm7
  }
  *(_QWORD *)box.maxs.v = 0x600000004i64;
  SpartialPartition_Population_Test::TestBoxAndFrustumPartitions_5_(&population, &v46, (const unsigned int (*)[5])&box);
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vmovss  xmm3, cs:__real@3fea80a4; sphereRadius
  }
  box.mins.v[0] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbp+250h+var_2A8.mins], xmm6
    vmovss  dword ptr [rbp+250h+var_2A8.mins+4], xmm6
    vmovss  dword ptr [rbp+250h+var_2A8.mins+8], xmm6
  }
  *(_QWORD *)&box.mins.y = 0x200000001i64;
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &v46.mins, *(float *)&_XMM3);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&box, 3u);
  __asm { vmovss  xmm3, cs:__real@3fd0e70a; sphereRadius }
  expectedHits[0] = 0;
  __asm
  {
    vmovss  dword ptr [rbp+250h+box.mins], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
  }
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, *(float *)&_XMM3);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, expectedHits, 1u);
  __asm
  {
    vmovss  xmm7, cs:__real@41c80000
    vmovss  xmm6, cs:__real@425c0000
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm3, cs:__real@409ccccd; sphereRadius
  }
  v46.mins.v[0] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbp+250h+box.mins], xmm7
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm8
  }
  *(_QWORD *)&v46.mins.y = 0x300000001i64;
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, *(float *)&_XMM3);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&v46, 3u);
  v46.mins.v[0] = 0.0;
  *(_QWORD *)&v46.mins.y = 0x300000001i64;
  LODWORD(v46.maxs.v[0]) = 2;
  __asm { vmovss  xmm3, cs:__real@40a33333; sphereRadius }
  iter.m_tree = NULL;
  __asm
  {
    vmovss  dword ptr [rbp+250h+box.mins], xmm7
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm8
  }
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, *(float *)&_XMM3);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&v46, 4u);
  __asm
  {
    vmovss  xmm0, cs:__real@42480000
    vmovaps xmm3, xmm8; sphereRadius
  }
  v46.mins.v[0] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbp+250h+box.mins], xmm0
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm0
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm8
  }
  *(_QWORD *)&v46.mins.y = 0x300000001i64;
  *(_QWORD *)v46.maxs.v = 0x400000002i64;
  LODWORD(v46.maxs.v[2]) = 6;
  v47 = 5;
  iter.m_tree = NULL;
  *(_QWORD *)&iter.m_curPartition = 0i64;
  SpatialPartition_Population_Tree_SpherePartitionIterator::Init(&iter, population.tree, &box.mins, *(float *)&_XMM3);
  SpartialPartition_Population_Test::TestPartitionIterator_SpatialPartition_Population_Tree_SpherePartitionIterator_(&iter, (const unsigned int *)&v46, 7u);
  __asm
  {
    vmovss  xmm6, cs:__real@41200000
    vmovss  dword ptr [rbp+250h+box.mins], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
  }
  if ( SpatialPartition_Population_FindPartition(&population, &box.mins) != 2 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+250h+box.mins], xmm6
      vmovss  dword ptr [rbp+250h+box.mins+4], xmm6
      vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
    }
    v42 = 2;
    Partition = SpatialPartition_Population_FindPartition(&population, &box.mins);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 234, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,10.0f,10.0f } ) ) == ( TEST_PARTITION_LEFT_BOTTOM_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,10.0f,10.0f } )", "TEST_PARTITION_LEFT_BOTTOM_LEAF", Partition, v42) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@42a00000
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm7
    vmovss  dword ptr [rbp+250h+box.mins], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
  }
  if ( SpatialPartition_Population_FindPartition(&population, &box.mins) != 3 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+250h+box.mins], xmm6
      vmovss  dword ptr [rbp+250h+box.mins+4], xmm7
      vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
    }
    LODWORD(v41) = 3;
    LODWORD(v39) = SpatialPartition_Population_FindPartition(&population, &box.mins);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 235, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,80.0f,10.0f } ) ) == ( TEST_PARTITION_LEFT_TOP_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 10.0f,80.0f,10.0f } )", "TEST_PARTITION_LEFT_TOP_LEAF", v39, v41) )
      __debugbreak();
  }
  __asm
  {
    vmovss  dword ptr [rbp+250h+box.mins], xmm9
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm6
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
  }
  if ( SpatialPartition_Population_FindPartition(&population, &box.mins) != 5 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+250h+box.mins], xmm9
      vmovss  dword ptr [rbp+250h+box.mins+4], xmm6
      vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
    }
    LODWORD(v41) = 5;
    LODWORD(v39) = SpatialPartition_Population_FindPartition(&population, &box.mins);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 236, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,10.0f,10.0f } ) ) == ( TEST_PARTITION_RIGHT_BOTTOM_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,10.0f,10.0f } )", "TEST_PARTITION_RIGHT_BOTTOM_LEAF", v39, v41) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm7, cs:__real@42b40000
    vmovss  dword ptr [rbp+250h+box.mins+4], xmm7
    vmovss  dword ptr [rbp+250h+box.mins], xmm9
    vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
  }
  v32 = SpatialPartition_Population_FindPartition(&population, &box.mins);
  if ( v32 != 6 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+250h+box.mins], xmm9
      vmovss  dword ptr [rbp+250h+box.mins+4], xmm7
      vmovss  dword ptr [rbp+250h+box.mins+8], xmm6
    }
    LODWORD(v41) = 6;
    LODWORD(v39) = SpatialPartition_Population_FindPartition(&population, &box.mins);
    LOBYTE(v32) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_test.cpp", 237, ASSERT_TYPE_ASSERT, "( SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,90.0f,10.0f } ) ) == ( TEST_PARTITION_RIGHT_TOP_LEAF )", "%s == %s\n\t%i, %i", "SpatialPartition_Population_FindPartition( &population, vec3_t{ 70.0f,90.0f,10.0f } )", "TEST_PARTITION_RIGHT_TOP_LEAF", v39, v41);
    if ( (_BYTE)v32 )
      __debugbreak();
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return v32;
}

/*
==============
SpatialPartition_Population_Test
==============
*/

void __fastcall SpatialPartition_Population_Test(double _XMM0_8)
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
  __int64 v14[3]; 
  int v15; 

  v1 = __rdtsc();
  SpartialPartition_Population_Test::RunTest_Simple(_XMM0_8);
  v2 = 0;
  population.partitionCount = 7;
  population.userData = NULL;
  population.tree = &SpartialPartition_Population_Test::TEST_POPULATION_TREE;
  v3 = &SpartialPartition_Population_Test::s_testObjects;
  *(_QWORD *)&population.currentPopulation = 0i64;
  population.buckets = (SpatialPartition_Population_Node *)v14;
  *((_DWORD *)&population.bucketsAreChanging + 1) = 0;
  population.getIndexFromNode = SpartialPartition_Population_Test::TestPopulation_GetIndexFromNode;
  memset(v14, 255, sizeof(v14));
  population.getNodeFromIndex = SpartialPartition_Population_Test::TestPopulation_GetNodeFromIndex;
  v15 = -1;
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
  }
  if ( (__int64)(__rdtsc() - v1) < 0 )
    __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
  __asm
  {
    vmulsd  xmm1, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovq   rdx, xmm1
  }
  Sys_Printf("SpatialPartition Population tests ran in %.3f ms.\n", *(double *)&_XMM1);
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
    __asm { vmovdqu xmmword ptr [rsp+0A8h+var_58.m_population], xmm0 }
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

