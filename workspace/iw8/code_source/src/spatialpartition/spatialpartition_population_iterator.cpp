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
  unsigned int v5; 
  int v8; 
  bool v11; 
  char v16; 
  bool v17; 
  bool result; 

  m_stackDepth = this->m_stackDepth;
  if ( !m_stackDepth )
    return 0;
  v5 = m_stackDepth - 1;
  this->m_stackDepth = v5;
  _RDI = this->m_stack[v5];
  if ( (unsigned int)_RDI >= this->m_tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 29, ASSERT_TYPE_ASSERT, "(partitionIndex < m_tree->partitionCount)", (const char *)&queryFormat, "partitionIndex < m_tree->partitionCount") )
    __debugbreak();
  _RBP = this->m_tree->partitions;
  v8 = *((_DWORD *)&_RBP[_RDI] + 1);
  if ( (v8 & 0x7FFFFFFC) != 0 )
  {
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm6
      vmovaps [rsp+68h+var_38], xmm7
    }
    if ( (v8 & 3) == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 33, ASSERT_TYPE_ASSERT, "(partition.axis < 3)", (const char *)&queryFormat, "partition.axis < 3") )
      __debugbreak();
    _RAX = vec3_t::operator[](&this->m_extents.mins, *((_DWORD *)&_RBP[_RDI] + 1) & 3);
    __asm { vmovss  xmm6, dword ptr [rax] }
    _RAX = vec3_t::operator[](&this->m_extents.maxs, *((_DWORD *)&_RBP[_RDI] + 1) & 3);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rdi*8+0]
      vcomiss xmm6, xmm0
      vmovaps xmm6, [rsp+68h+var_28]
      vmovss  xmm7, dword ptr [rax]
    }
    if ( v11 | v16 )
    {
      v11 = this->m_stackDepth < 0x80;
      if ( this->m_stackDepth >= 0x80 )
      {
        v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 38, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH");
        v11 = 0;
        if ( v17 )
          __debugbreak();
      }
      this->m_stack[this->m_stackDepth++] = _RDI + 1;
      __asm { vmovss  xmm0, dword ptr [rbp+rdi*8+0] }
    }
    __asm
    {
      vcomiss xmm7, xmm0
      vmovaps xmm7, [rsp+68h+var_38]
    }
    if ( !v11 )
    {
      if ( this->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 44, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
        __debugbreak();
      this->m_stack[this->m_stackDepth++] = (*((_DWORD *)&_RBP[_RDI] + 1) >> 2) & 0x1FFFFFFF;
    }
  }
  result = 1;
  this->m_curPartition = _RDI;
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
  unsigned int v6; 
  __int64 v7; 
  SpatialPartition_Population_Partition *partitions; 
  int v9; 
  __int64 v10; 
  __int64 v14; 
  bool result; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 

  m_stackDepth = this->m_stackDepth;
  _RBX = this;
  if ( !m_stackDepth )
    return 0;
  v6 = m_stackDepth - 1;
  this->m_stackDepth = v6;
  v7 = this->m_stack[v6];
  if ( (unsigned int)v7 >= this->m_tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 98, ASSERT_TYPE_ASSERT, "(partitionIndex < m_tree->partitionCount)", (const char *)&queryFormat, "partitionIndex < m_tree->partitionCount") )
    __debugbreak();
  partitions = _RBX->m_tree->partitions;
  v9 = *((_DWORD *)&partitions[v7] + 1);
  if ( (v9 & 0x7FFFFFFC) != 0 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
    }
    if ( (v9 & 3) == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 102, ASSERT_TYPE_ASSERT, "(partition.axis < 3)", (const char *)&queryFormat, "partition.axis < 3") )
      __debugbreak();
    v10 = (unsigned int)(v7 + 1);
    _RCX = 3 * v10;
    __asm { vmovss  xmm8, dword ptr [rbx+10h] }
    _RAX = _RBX->m_tree->extents;
    HIDWORD(v66) = 0;
    v14 = (*((_DWORD *)&partitions[v7] + 1) >> 2) & 0x1FFFFFFF;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rcx*8+0Ch]
      vmovss  xmm1, dword ptr [rax+rcx*8+10h]
      vmovss  xmm2, dword ptr [rax+rcx*8+14h]
      vmovss  xmm4, dword ptr [rax+rcx*8]
      vmovss  xmm5, dword ptr [rax+rcx*8+4]
      vmovss  xmm6, dword ptr [rax+rcx*8+8]
    }
    HIDWORD(v64) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+30h]
      vmovss  xmm3, xmm3, xmm0
      vmovups xmm0, xmmword ptr [rsp+40h]
      vmovss  xmm0, xmm0, xmm4
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm0, xmm0, xmm5, 10h
      vinsertps xmm0, xmm0, xmm6, 20h ; ' '
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      vminps  xmm1, xmm3, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+40h], xmm0
      vmaxps  xmm0, xmm0, xmm1
      vsubps  xmm1, xmm0, xmmword ptr [rbx]
      vmulps  xmm2, xmm1, xmm1
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vcomiss xmm0, xmm8
      vmovups xmmword ptr [rsp+30h], xmm3
    }
    if ( _RBX->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 108, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
      __debugbreak();
    _RBX->m_stack[_RBX->m_stackDepth++] = v10;
    __asm { vmovss  xmm8, dword ptr [rbx+10h] }
    _RAX = _RBX->m_tree->extents;
    _RCX = 3 * v14;
    __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
    HIDWORD(v65) = 0;
    __asm
    {
      vmovss  xmm6, dword ptr [rax+rcx*8+8]
      vmovss  xmm0, dword ptr [rax+rcx*8+0Ch]
      vmovss  xmm1, dword ptr [rax+rcx*8+10h]
      vmovss  xmm2, dword ptr [rax+rcx*8+14h]
      vmovss  xmm4, dword ptr [rax+rcx*8]
      vmovss  xmm5, dword ptr [rax+rcx*8+4]
    }
    HIDWORD(v67) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+40h]
      vmovss  xmm3, xmm3, xmm0
      vmovups xmm0, xmmword ptr [rsp+30h]
      vmovss  xmm0, xmm0, xmm4
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm0, xmm0, xmm5, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      vminps  xmm1, xmm3, xmmword ptr [rbx]
      vinsertps xmm0, xmm0, xmm6, 20h ; ' '
      vmovaps xmm6, [rsp+0A8h+var_28]
      vmaxps  xmm0, xmm0, xmm1
      vsubps  xmm1, xmm0, xmmword ptr [rbx]
      vmulps  xmm2, xmm1, xmm1
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vcomiss xmm2, xmm8
      vmovaps xmm8, [rsp+0A8h+var_48]
    }
    if ( _RBX->m_stackDepth >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 114, ASSERT_TYPE_ASSERT, "(m_stackDepth < MAX_STACK_DEPTH)", (const char *)&queryFormat, "m_stackDepth < MAX_STACK_DEPTH") )
      __debugbreak();
    _RBX->m_stack[_RBX->m_stackDepth++] = v14;
  }
  result = 1;
  _RBX->m_curPartition = v7;
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
  __int64 v39; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps xmmword ptr [rax-0A8h], xmm15
    vmovups xmm1, xmmword ptr [r8+0Ch]
    vsubps  xmm5, xmm1, xmmword ptr [r8]
    vaddps  xmm3, xmm1, xmmword ptr [r8]
    vmovups xmm0, xmmword ptr [r9+0Ch]
    vaddps  xmm1, xmm0, xmmword ptr [r9]
    vsubps  xmm4, xmm0, xmmword ptr [r9]
    vmovups xmm12, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmm14, cs:__xmm@80000000800000008000000080000000
    vshufps xmm2, xmm5, xmm5, 55h ; 'U'
    vmovups [rsp+168h+var_168], xmm2
    vshufps xmm2, xmm5, xmm5, 0AAh ; 'ª'
    vmovups [rsp+168h+var_148], xmm2
    vshufps xmm2, xmm1, xmm1, 0
    vshufps xmm0, xmm3, xmm3, 55h ; 'U'
    vmovups [rsp+168h+var_158], xmm0
    vshufps xmm0, xmm3, xmm3, 0AAh ; 'ª'
    vmovups [rsp+168h+var_118], xmm2
    vshufps xmm2, xmm1, xmm1, 55h ; 'U'
    vshufps xmm1, xmm1, xmm1, 0AAh ; 'ª'
    vmovups [rsp+168h+var_D8], xmm1
    vshufps xmm1, xmm4, xmm4, 0
    vmovups [rsp+168h+var_128], xmm1
    vshufps xmm1, xmm4, xmm4, 55h ; 'U'
    vmovups [rsp+168h+var_108], xmm1
    vmovups [rsp+168h+var_138], xmm0
    vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
    vshufps xmm0, xmm5, xmm5, 0
    vmovups [rsp+168h+var_E8], xmm1
    vshufps xmm15, xmm3, xmm3, 0
    vmovups [rsp+168h+var_C8], xmm0
    vmovups [rsp+168h+var_F8], xmm2
    vmovups xmm13, xmm12
  }
  if ( numPlanes4 )
  {
    __asm { vmovaps [rsp+168h+var_18], xmm6 }
    _RAX = &planes4->m_planeZ;
    __asm
    {
      vmovaps [rsp+168h+var_28], xmm7
      vmovaps [rsp+168h+var_38], xmm8
      vmovaps [rsp+168h+var_48], xmm9
      vmovaps [rsp+168h+var_58], xmm10
      vmovaps [rsp+168h+var_68], xmm11
    }
    v39 = numPlanes4;
    do
    {
      __asm
      {
        vmovups xmm9, xmmword ptr [rax-20h]
        vmovups xmm10, xmmword ptr [rax-10h]
        vmovups xmm11, xmmword ptr [rax]
      }
      _RAX += 4;
      __asm
      {
        vandps  xmm5, xmm9, xmm14
        vxorps  xmm0, xmm0, xmm5
        vaddps  xmm1, xmm0, xmm15
        vmulps  xmm2, xmm1, xmm9
        vaddps  xmm3, xmm2, xmmword ptr [rax-30h]
        vandps  xmm6, xmm10, xmm14
        vxorps  xmm0, xmm6, [rsp+168h+var_168]
        vaddps  xmm1, xmm0, [rsp+168h+var_158]
        vmulps  xmm2, xmm1, xmm10
        vaddps  xmm4, xmm3, xmm2
        vandps  xmm7, xmm11, xmm14
        vxorps  xmm0, xmm7, [rsp+168h+var_148]
        vaddps  xmm1, xmm0, [rsp+168h+var_138]
        vxorps  xmm0, xmm5, [rsp+168h+var_128]
        vmulps  xmm2, xmm1, xmm11
        vaddps  xmm1, xmm0, [rsp+168h+var_118]
        vxorps  xmm0, xmm6, [rsp+168h+var_108]
        vaddps  xmm3, xmm4, xmm2
        vmulps  xmm2, xmm1, xmm9
        vaddps  xmm1, xmm0, [rsp+168h+var_F8]
        vxorps  xmm0, xmm7, [rsp+168h+var_E8]
        vminps  xmm12, xmm12, xmm3
        vaddps  xmm3, xmm2, xmmword ptr [rax-30h]
        vmulps  xmm2, xmm1, xmm10
        vaddps  xmm1, xmm0, [rsp+168h+var_D8]
        vmovups xmm0, [rsp+168h+var_C8]
        vaddps  xmm4, xmm3, xmm2
        vmulps  xmm2, xmm1, xmm11
        vaddps  xmm3, xmm4, xmm2
        vminps  xmm13, xmm13, xmm3
      }
      --v39;
    }
    while ( v39 );
    __asm
    {
      vmovaps xmm11, [rsp+168h+var_68]
      vmovaps xmm10, [rsp+168h+var_58]
      vmovaps xmm9, [rsp+168h+var_48]
      vmovaps xmm8, [rsp+168h+var_38]
      vmovaps xmm7, [rsp+168h+var_28]
      vmovaps xmm6, [rsp+168h+var_18]
    }
  }
  __asm { vtestps xmm12, xmm12 }
  *leftResult = _ZF;
  __asm { vtestps xmm13, xmm13 }
  *rightResult = _ZF;
  __asm
  {
    vmovaps xmm12, [rsp+168h+var_78]
    vmovaps xmm13, [rsp+168h+var_88]
    vmovaps xmm14, [rsp+168h+var_98]
    vmovaps xmm15, [rsp+168h+var_A8]
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm1, xmm0, dword ptr [r8+0Ch]
    vmovss  dword ptr [rcx], xmm1
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm1, xmm0, dword ptr [r8+10h]
    vmovss  dword ptr [rcx+4], xmm1
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm1, xmm0, dword ptr [r8+14h]
    vmovss  dword ptr [rcx+8], xmm1
    vmovss  xmm0, dword ptr [r8]
    vaddss  xmm1, xmm0, dword ptr [r8+0Ch]
    vmovss  dword ptr [rcx+0Ch], xmm1
    vmovss  xmm2, dword ptr [r8+10h]
    vaddss  xmm0, xmm2, dword ptr [r8+4]
    vmovss  dword ptr [rcx+10h], xmm0
    vmovss  xmm1, dword ptr [r8+14h]
    vaddss  xmm2, xmm1, dword ptr [r8+8]
    vmovss  dword ptr [rcx+14h], xmm2
  }
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
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 

  _RBX = this;
  if ( !numPlanes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.cpp", 202, ASSERT_TYPE_ASSERT, "(numPlanes > 0)", (const char *)&queryFormat, "numPlanes > 0") )
    __debugbreak();
  v18 = 0;
  _RBX->m_numPlanes4 = (numPlanes + 3) >> 2;
  if ( (numPlanes + 3) >> 2 )
  {
    __asm { vmovaps [rsp+0F8h+var_18], xmm6 }
    v19 = numPlanes - 1;
    __asm
    {
      vmovaps [rsp+0F8h+var_28], xmm7
      vmovaps [rsp+0F8h+var_38], xmm8
      vmovaps [rsp+0F8h+var_48], xmm9
      vmovaps [rsp+0F8h+var_58], xmm10
      vmovaps [rsp+0F8h+var_68], xmm11
      vmovaps [rsp+0F8h+var_78], xmm12
      vmovaps [rsp+0F8h+var_88], xmm13
      vmovaps [rsp+0F8h+var_98], xmm14
      vmovaps [rsp+0F8h+var_A8], xmm15
    }
    do
    {
      v20 = 4 * v18;
      v21 = v19;
      v22 = 4 * v18 + 1;
      v23 = v19;
      v24 = v19;
      if ( v19 > 4 * v18 )
        v21 = v20;
      v25 = v19;
      _R10 = &planes[v21];
      if ( v19 > v22 )
        v23 = v22;
      __asm
      {
        vmovss  xmm4, dword ptr [r10]
        vmovss  xmm15, dword ptr [r10+0Ch]
        vmovss  xmm8, dword ptr [r10+4]
        vmovss  xmm12, dword ptr [r10+8]
      }
      _R9 = &planes[v23];
      if ( v19 > v20 + 2 )
        v24 = v20 + 2;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [r9], 10h
        vmovss  xmm11, dword ptr [r9+0Ch]
        vmovss  xmm3, dword ptr [r9+4]
        vmovss  xmm7, dword ptr [r9+8]
      }
      _RDX = &planes[v24];
      __asm { vinsertps xmm15, xmm15, xmm11, 10h }
      if ( v19 > v20 + 3 )
        v25 = v20 + 3;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [rdx], 20h ; ' '
        vmovss  xmm13, dword ptr [rdx+0Ch]
        vmovss  xmm5, dword ptr [rdx+4]
        vmovss  xmm9, dword ptr [rdx+8]
        vinsertps xmm8, xmm8, xmm3, 10h
        vinsertps xmm12, xmm12, xmm7, 10h
      }
      _RAX = &planes[v25];
      __asm
      {
        vinsertps xmm15, xmm15, xmm13, 20h ; ' '
        vinsertps xmm8, xmm8, xmm5, 20h ; ' '
        vinsertps xmm12, xmm12, xmm9, 20h ; ' '
        vmovss  xmm6, dword ptr [rax+4]
        vmovss  xmm10, dword ptr [rax+8]
        vmovss  xmm14, dword ptr [rax+0Ch]
        vinsertps xmm4, xmm4, dword ptr [rax], 30h ; '0'
      }
      _RAX = v18++;
      _RAX <<= 6;
      __asm
      {
        vinsertps xmm15, xmm15, xmm14, 30h ; '0'
        vmulps  xmm0, xmm15, cs:__xmm@40000000400000004000000040000000
        vinsertps xmm8, xmm8, xmm6, 30h ; '0'
        vinsertps xmm12, xmm12, xmm10, 30h ; '0'
        vmovups xmmword ptr [rax+rbx], xmm4
        vmovups xmmword ptr [rax+rbx+10h], xmm8
        vmovups xmmword ptr [rax+rbx+20h], xmm12
        vmovups xmmword ptr [rax+rbx+30h], xmm0
      }
    }
    while ( v18 < _RBX->m_numPlanes4 );
    __asm
    {
      vmovaps xmm15, [rsp+0F8h+var_A8]
      vmovaps xmm14, [rsp+0F8h+var_98]
      vmovaps xmm13, [rsp+0F8h+var_88]
      vmovaps xmm12, [rsp+0F8h+var_78]
      vmovaps xmm11, [rsp+0F8h+var_68]
      vmovaps xmm10, [rsp+0F8h+var_58]
      vmovaps xmm9, [rsp+0F8h+var_48]
      vmovaps xmm8, [rsp+0F8h+var_38]
      vmovaps xmm7, [rsp+0F8h+var_28]
      vmovaps xmm6, [rsp+0F8h+var_18]
    }
  }
  _RBX->m_tree = tree;
  _RBX->m_curPartition = -1;
  if ( tree )
    *(_QWORD *)&_RBX->m_stackDepth = 1i64;
}

/*
==============
SpatialPartition_Population_Tree_SpherePartitionIterator::Init
==============
*/

void __fastcall SpatialPartition_Population_Tree_SpherePartitionIterator::Init(SpatialPartition_Population_Tree_SpherePartitionIterator *this, const SpatialPartition_Population_Tree *tree, const vec3_t *sphereCentre, double sphereRadius)
{
  __int128 v10; 

  __asm { vmovss  xmm0, dword ptr [r8] }
  HIDWORD(v10) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [r8+4], 10h
    vinsertps xmm4, xmm4, dword ptr [r8+8], 20h ; ' '
  }
  this->m_tree = tree;
  this->m_curPartition = -1;
  __asm
  {
    vmulss  xmm0, xmm3, xmm3
    vmovups xmmword ptr [rcx], xmm4
    vmovss  dword ptr [rcx+10h], xmm0
  }
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

