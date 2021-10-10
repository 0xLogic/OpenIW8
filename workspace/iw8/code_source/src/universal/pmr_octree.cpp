/*
==============
PMROctreeFactoryNode::Insert
==============
*/

void __fastcall PMROctreeFactoryNode::Insert(PMROctreeFactoryNode *this, unsigned int edgeIndex, bool maySplit)
{
  ?Insert@PMROctreeFactoryNode@@QEAAXI_N@Z(this, edgeIndex, maySplit);
}

/*
==============
BuildPMROctree
==============
*/

PMROctreeResults *__fastcall BuildPMROctree(PMROctreeResults *result, const PMROctreeOptions *const options)
{
  return ?BuildPMROctree@@YA?AUPMROctreeResults@@QEBUPMROctreeOptions@@@Z(result, options);
}

/*
==============
PMROctreeFactoryNode::PMROctreeFactoryNode
==============
*/

void __fastcall PMROctreeFactoryNode::PMROctreeFactoryNode(PMROctreeFactoryNode *this, const PMROctreeFactoryConstants *constants, float4 *midpoint, unsigned __int8 depth, PMROctreeFactoryNode *parent)
{
  ??0PMROctreeFactoryNode@@QEAA@PEBUPMROctreeFactoryConstants@@Ufloat4@@EPEAV0@@Z(this, constants, midpoint, depth, parent);
}

/*
==============
EdgeAdjacentFaceNormalUnpack
==============
*/

void __fastcall EdgeAdjacentFaceNormalUnpack(const DiskStaticLineSegment *r_edge, const float referenceAngle, float4 *r_outAdjacentFaceNormal)
{
  ?EdgeAdjacentFaceNormalUnpack@@YAXAEBUDiskStaticLineSegment@@MAEAUfloat4@@@Z(r_edge, referenceAngle, r_outAdjacentFaceNormal);
}

/*
==============
PMROctreeFactory::WriteNodeData
==============
*/

DiskPMROctreeNode *__fastcall PMROctreeFactory::WriteNodeData(PMROctreeFactory *this, DiskPMROctreeNode *result, unsigned int parentNodeIndex, unsigned int nodeIndex, const PMROctreeFactoryNode *node, DiskPMROctreeNodeSet *outOctreeNodeSetBuffer, unsigned int *outNodeSetWriteCount, unsigned int *outQEdgeBuffer, unsigned int *outQEdgeWriteCount)
{
  return ?WriteNodeData@PMROctreeFactory@@AEAA?AUDiskPMROctreeNode@@IIPEBVPMROctreeFactoryNode@@PEAUDiskPMROctreeNodeSet@@PEAI22@Z(this, result, parentNodeIndex, nodeIndex, node, outOctreeNodeSetBuffer, outNodeSetWriteCount, outQEdgeBuffer, outQEdgeWriteCount);
}

/*
==============
PMROctreeFactoryNode::Split
==============
*/

void __fastcall PMROctreeFactoryNode::Split(PMROctreeFactoryNode *this)
{
  ?Split@PMROctreeFactoryNode@@QEAAXXZ(this);
}

/*
==============
PMROctreeFactoryNode::BuildExtent
==============
*/

void __fastcall PMROctreeFactoryNode::BuildExtent(PMROctreeFactoryNode *this)
{
  ?BuildExtent@PMROctreeFactoryNode@@IEBAXXZ(this);
}

/*
==============
PMROctreeFactory::PMROctreeFactory
==============
*/

void __fastcall PMROctreeFactory::PMROctreeFactory(PMROctreeFactory *this, const PMROctreeOptions *const options, const float4 *midpoint)
{
  ??0PMROctreeFactory@@QEAA@QEBUPMROctreeOptions@@AEBUfloat4@@@Z(this, options, midpoint);
}

/*
==============
PMROctreeFactoryNode::IntersectsLineSegment
==============
*/

bool __fastcall PMROctreeFactoryNode::IntersectsLineSegment(PMROctreeFactoryNode *this, const float4 (*lineSegment)[2])
{
  return ?IntersectsLineSegment@PMROctreeFactoryNode@@IEBA_NAEAY01$$CBUfloat4@@@Z(this, lineSegment);
}

/*
==============
EdgeAdjacencySupported
==============
*/

bool __fastcall EdgeAdjacencySupported(const DiskEdgeFlags flag)
{
  return ?EdgeAdjacencySupported@@YA_NW4DiskEdgeFlags@@@Z(flag);
}

/*
==============
PMROctreeFactory::BuildPMROctree
==============
*/

PMROctreeResults *__fastcall PMROctreeFactory::BuildPMROctree(PMROctreeFactory *this, PMROctreeResults *result)
{
  return ?BuildPMROctree@PMROctreeFactory@@QEAA?AUPMROctreeResults@@XZ(this, result);
}

/*
==============
PMROctreeFactory::MidpointToGridIndex
==============
*/

void __fastcall PMROctreeFactory::MidpointToGridIndex(PMROctreeFactory *this, unsigned __int8 depth, const float4 *midpoint, unsigned __int16 *outGridIndex)
{
  ?MidpointToGridIndex@PMROctreeFactory@@AEBAXEAEBUfloat4@@QEAG@Z(this, depth, midpoint, outGridIndex);
}

/*
==============
EdgeAdjacentFaceNormalPack
==============
*/

double __fastcall EdgeAdjacentFaceNormalPack(const DiskStaticLineSegment *r_edge, const float4 *r_adjacentFaceNormal)
{
  double result; 

  *(float *)&result = ?EdgeAdjacentFaceNormalPack@@YAMAEBUDiskStaticLineSegment@@AEBUfloat4@@@Z(r_edge, r_adjacentFaceNormal);
  return result;
}

/*
==============
PMROctreeOptions::PMROctreeOptions
==============
*/

void __fastcall PMROctreeOptions::PMROctreeOptions(PMROctreeOptions *this)
{
  ??0PMROctreeOptions@@QEAA@XZ(this);
}

/*
==============
PMROctreeFactoryNode::~PMROctreeFactoryNode
==============
*/

void __fastcall PMROctreeFactoryNode::~PMROctreeFactoryNode(PMROctreeFactoryNode *this)
{
  ??1PMROctreeFactoryNode@@UEAA@XZ(this);
}

/*
==============
PMROctreeFactory::PMROctreeFactory
==============
*/
void PMROctreeFactory::PMROctreeFactory(PMROctreeFactory *this, const PMROctreeOptions *const options, const float4 *midpoint)
{
  float4 v4; 
  float v5; 
  float v6; 
  float4 v7; 
  float v8; 
  float v9; 
  __m128 v10; 
  float v11; 
  float v12; 
  float v13; 
  unsigned __int8 m_treeDepthCount; 
  float4 v15; 
  __m128 v; 
  float *v17; 
  float4 *v18; 
  __int64 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v31; 
  __m128 v32; 
  __m128 v36; 
  __m128 v37; 
  __m128 v41; 
  __m128 v42; 
  __m128 v46; 
  __m128 v47; 
  __m128 v51; 
  __m128 v52; 
  __m128 v56; 
  __m128 v57; 
  __int64 v61; 
  __int64 v62; 
  float4 v63; 

  this->m_options = options;
  v63.v = midpoint->v;
  PMROctreeFactoryNode::PMROctreeFactoryNode(&this->m_rootNode, &this->m_constants, &v63, 0, NULL);
  if ( !this->m_options && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 213, ASSERT_TYPE_ASSERT, "(m_options)", (const char *)&queryFormat, "m_options") )
    __debugbreak();
  v4.v = (__m128)this->m_options->m_extentMin;
  LODWORD(v5) = _mm_shuffle_ps(v4.v, v4.v, 85).m128_u32[0];
  LODWORD(v6) = _mm_shuffle_ps(v4.v, v4.v, 170).m128_u32[0];
  v7.v = (__m128)this->m_options->m_extentMax;
  LODWORD(v8) = _mm_shuffle_ps(v7.v, v7.v, 85).m128_u32[0];
  LODWORD(v9) = _mm_shuffle_ps(v7.v, v7.v, 170).m128_u32[0];
  if ( v4.v.m128_f32[0] >= v7.v.m128_f32[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 220, ASSERT_TYPE_ASSERT, "( mins[0] ) < ( maxs[0] )", "%s < %s\n\t%g, %g", "mins[0]", "maxs[0]", v4.v.m128_f32[0], v7.v.m128_f32[0]) )
    __debugbreak();
  if ( v5 >= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 221, ASSERT_TYPE_ASSERT, "( mins[1] ) < ( maxs[1] )", "%s < %s\n\t%g, %g", "mins[1]", "maxs[1]", v5, v8) )
    __debugbreak();
  if ( v6 >= v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 222, ASSERT_TYPE_ASSERT, "( mins[2] ) < ( maxs[2] )", "%s < %s\n\t%g, %g", "mins[2]", "maxs[2]", v6, v9) )
    __debugbreak();
  v10 = _mm128_sub_ps(this->m_options->m_extentMax.v, this->m_options->m_extentMin.v);
  LODWORD(v11) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  LODWORD(v12) = COERCE_UNSIGNED_INT(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] - v10.m128_f32[0]) & _xmm;
  v13 = squareTolerance;
  if ( v12 > squareTolerance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 230, ASSERT_TYPE_ASSERT, "( I_fabs( width[1] - width[0] ) ) <= ( squareTolerance )", "%s <= %s\n\t%g, %g", "I_fabs( width[1] - width[0] )", "squareTolerance", v12, squareTolerance) )
      __debugbreak();
    v13 = squareTolerance;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v10.m128_f32[0]) & _xmm) > v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 231, ASSERT_TYPE_ASSERT, "( I_fabs( width[2] - width[0] ) ) <= ( squareTolerance )", "%s <= %s\n\t%g, %g", "I_fabs( width[2] - width[0] )", "squareTolerance", COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v10.m128_f32[0]) & _xmm), v13) )
    __debugbreak();
  if ( !this->m_options->m_splitThreshold )
  {
    LODWORD(v62) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 234, ASSERT_TYPE_ASSERT, "( 0 ) < ( m_options->m_splitThreshold )", "%s < %s\n\t%i, %i", "0", "m_options->m_splitThreshold", 0i64, v62) )
      __debugbreak();
  }
  if ( !this->m_options->m_inLineSegments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 235, ASSERT_TYPE_ASSERT, "(m_options->m_inLineSegments)", (const char *)&queryFormat, "m_options->m_inLineSegments") )
    __debugbreak();
  if ( !this->m_options->m_inLineSegmentIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 236, ASSERT_TYPE_ASSERT, "(m_options->m_inLineSegmentIndices)", (const char *)&queryFormat, "m_options->m_inLineSegmentIndices") )
    __debugbreak();
  if ( this->m_options->m_lineSegmentIndexCount > 0xFFFFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 237, ASSERT_TYPE_ASSERT, "(m_options->m_lineSegmentIndexCount <= ( ( ( 0x1U << (20) ) - 1 ) - 1 ))", (const char *)&queryFormat, "m_options->m_lineSegmentIndexCount <= MAX_MAP_FLAGGED_EDGES_PER_LIST") )
    __debugbreak();
  if ( !this->m_options->m_outTreeNodeSetPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 238, ASSERT_TYPE_ASSERT, "(m_options->m_outTreeNodeSetPool)", (const char *)&queryFormat, "m_options->m_outTreeNodeSetPool") )
    __debugbreak();
  if ( ((__int64)this->m_options->m_outTreeNodeSetPool & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 239, ASSERT_TYPE_ASSERT, "( ( (((intptr_t)(m_options->m_outTreeNodeSetPool)) & 127) == 0 ) )", "( m_options->m_outTreeNodeSetPool ) = %p", this->m_options->m_outTreeNodeSetPool) )
    __debugbreak();
  if ( this->m_options->m_treeNodeSetPoolOffset >= 0x1FFFFF )
  {
    LODWORD(v62) = 0x1FFFFF;
    LODWORD(v61) = this->m_options->m_treeNodeSetPoolOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 240, ASSERT_TYPE_ASSERT, "( m_options->m_treeNodeSetPoolOffset ) < ( (((0x1 << (24)) / 8) - 1) )", "%s < %s\n\t%i, %i", "m_options->m_treeNodeSetPoolOffset", "MAX_MAP_STATIC_EDGE_OCTREE_NODE_SETS_PER_LIST", v61, v62) )
      __debugbreak();
  }
  if ( this->m_options->m_treeNodeSetPoolSize > 0x1FFFFF )
  {
    LODWORD(v62) = 0x1FFFFF;
    LODWORD(v61) = this->m_options->m_treeNodeSetPoolSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 241, ASSERT_TYPE_ASSERT, "( m_options->m_treeNodeSetPoolSize ) <= ( (((0x1 << (24)) / 8) - 1) )", "%s <= %s\n\t%i, %i", "m_options->m_treeNodeSetPoolSize", "MAX_MAP_STATIC_EDGE_OCTREE_NODE_SETS_PER_LIST", v61, v62) )
      __debugbreak();
  }
  if ( !this->m_options->m_treeDepthCount )
  {
    LODWORD(v62) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 242, ASSERT_TYPE_ASSERT, "( 0 ) < ( m_options->m_treeDepthCount )", "%s < %s\n\t%i, %i", "0", "m_options->m_treeDepthCount", 0i64, v62) )
      __debugbreak();
  }
  m_treeDepthCount = this->m_options->m_treeDepthCount;
  if ( m_treeDepthCount > 0x10u )
  {
    LODWORD(v62) = 16;
    LODWORD(v61) = m_treeDepthCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 243, ASSERT_TYPE_ASSERT, "( m_options->m_treeDepthCount ) <= ( ( sizeof( PMROctreeNode::uniformGridIndex[0] ) * 8 ) )", "%s <= %s\n\t%i, %i", "m_options->m_treeDepthCount", "MAX_PMR_OCTREE_DEPTH_COUNT", v61, v62) )
      __debugbreak();
  }
  if ( !this->m_options->m_outQEdgePool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 244, ASSERT_TYPE_ASSERT, "(m_options->m_outQEdgePool)", (const char *)&queryFormat, "m_options->m_outQEdgePool") )
    __debugbreak();
  if ( this->m_options->m_qEdgePoolOffset >= 0xFFFFFFFE )
  {
    LODWORD(v62) = -2;
    LODWORD(v61) = this->m_options->m_qEdgePoolOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 245, ASSERT_TYPE_ASSERT, "( m_options->m_qEdgePoolOffset ) < ( (0xffffffff - 1) )", "%s < %s\n\t%i, %i", "m_options->m_qEdgePoolOffset", "MAX_MAP_STATIC_EDGE_OCTREE_QEDGES", v61, v62) )
      __debugbreak();
  }
  if ( this->m_options->m_qEdgePoolSize > 0xFFFFFFFE )
  {
    LODWORD(v62) = -2;
    LODWORD(v61) = this->m_options->m_qEdgePoolSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 246, ASSERT_TYPE_ASSERT, "( m_options->m_qEdgePoolSize ) <= ( (0xffffffff - 1) )", "%s <= %s\n\t%i, %i", "m_options->m_qEdgePoolSize", "MAX_MAP_STATIC_EDGE_OCTREE_QEDGES", v61, v62) )
      __debugbreak();
  }
  if ( !this->m_options->m_outNodeBoundingRadiusSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 247, ASSERT_TYPE_ASSERT, "(m_options->m_outNodeBoundingRadiusSq)", (const char *)&queryFormat, "m_options->m_outNodeBoundingRadiusSq") )
    __debugbreak();
  if ( !this->m_options->m_outNodeHalfWidths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 248, ASSERT_TYPE_ASSERT, "(m_options->m_outNodeHalfWidths)", (const char *)&queryFormat, "m_options->m_outNodeHalfWidths") )
    __debugbreak();
  if ( this->m_options->m_nodeBoundWidthPoolSize != this->m_options->m_treeDepthCount )
  {
    LODWORD(v62) = this->m_options->m_treeDepthCount;
    LODWORD(v61) = this->m_options->m_nodeBoundWidthPoolSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 249, ASSERT_TYPE_ASSERT, "( m_options->m_nodeBoundWidthPoolSize ) == ( m_options->m_treeDepthCount )", "%s == %s\n\t%i, %i", "m_options->m_nodeBoundWidthPoolSize", "m_options->m_treeDepthCount", v61, v62) )
      __debugbreak();
  }
  if ( !this->m_options->m_outDebugText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 250, ASSERT_TYPE_ASSERT, "(m_options->m_outDebugText)", (const char *)&queryFormat, "m_options->m_outDebugText") )
    __debugbreak();
  this->m_constants.m_options = this->m_options;
  *(__m256i *)this->m_constants.m_childDirection[0].v.m128_f32 = _ymm;
  *(__m256i *)this->m_constants.m_childDirection[2].v.m128_f32 = _ymm;
  *(__m256i *)this->m_constants.m_childDirection[4].v.m128_f32 = _ymm;
  *(__m256i *)this->m_constants.m_childDirection[6].v.m128_f32 = _ymm;
  v15.v = (__m128)this->m_options->m_extentMax;
  v15.v.m128_f32[0] = (float)(v15.v.m128_f32[0] - COERCE_FLOAT(*(_OWORD *)&this->m_options->m_extentMin)) * 0.5;
  v = v15.v;
  v17 = &this->m_constants.m_nodeBoundingRadiusSq[1];
  v18 = &this->m_constants.m_nodeHalfWidth[1];
  v19 = 2i64;
  do
  {
    v20 = _mm_shuffle_ps(v, v, 0);
    v21 = _mm_shuffle_ps(v20, _mm_shuffle_ps(v20, (__m128)0i64, 250), 132);
    v18[-1] = (float4)v21;
    _XMM0 = _mm128_mul_ps(v21, v21);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    *(v17 - 1) = *(float *)&_XMM2;
    v25 = v;
    v25.m128_f32[0] = v.m128_f32[0] * 0.5;
    v26 = _mm_shuffle_ps(v25, v25, 0);
    v27 = _mm_shuffle_ps(v26, _mm_shuffle_ps(v26, (__m128)0i64, 250), 132);
    *v18 = (float4)v27;
    _XMM0 = _mm128_mul_ps(v27, v27);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    *v17 = *(float *)&_XMM2;
    v25.m128_f32[0] = (float)(v.m128_f32[0] * 0.5) * 0.5;
    v31 = _mm_shuffle_ps(v25, v25, 0);
    v32 = _mm_shuffle_ps(v31, _mm_shuffle_ps(v31, (__m128)0i64, 250), 132);
    v18[1] = (float4)v32;
    _XMM0 = _mm128_mul_ps(v32, v32);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    v17[1] = *(float *)&_XMM2;
    v25.m128_f32[0] = v25.m128_f32[0] * 0.5;
    v36 = _mm_shuffle_ps(v25, v25, 0);
    v37 = _mm_shuffle_ps(v36, _mm_shuffle_ps(v36, (__m128)0i64, 250), 132);
    v18[2] = (float4)v37;
    _XMM0 = _mm128_mul_ps(v37, v37);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    v17[2] = *(float *)&_XMM2;
    v25.m128_f32[0] = v25.m128_f32[0] * 0.5;
    v41 = _mm_shuffle_ps(v25, v25, 0);
    v42 = _mm_shuffle_ps(v41, _mm_shuffle_ps(v41, (__m128)0i64, 250), 132);
    v18[3] = (float4)v42;
    _XMM0 = _mm128_mul_ps(v42, v42);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    v17[3] = *(float *)&_XMM2;
    v25.m128_f32[0] = v25.m128_f32[0] * 0.5;
    v46 = _mm_shuffle_ps(v25, v25, 0);
    v47 = _mm_shuffle_ps(v46, _mm_shuffle_ps(v46, (__m128)0i64, 250), 132);
    v18[4] = (float4)v47;
    _XMM0 = _mm128_mul_ps(v47, v47);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    v17[4] = *(float *)&_XMM2;
    v25.m128_f32[0] = v25.m128_f32[0] * 0.5;
    v51 = _mm_shuffle_ps(v25, v25, 0);
    v52 = _mm_shuffle_ps(v51, _mm_shuffle_ps(v51, (__m128)0i64, 250), 132);
    v18[5] = (float4)v52;
    _XMM0 = _mm128_mul_ps(v52, v52);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    v17[5] = *(float *)&_XMM2;
    v25.m128_f32[0] = v25.m128_f32[0] * 0.5;
    v56 = _mm_shuffle_ps(v25, v25, 0);
    v57 = _mm_shuffle_ps(v56, _mm_shuffle_ps(v56, (__m128)0i64, 250), 132);
    v18[6] = (float4)v57;
    _XMM0 = _mm128_mul_ps(v57, v57);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    v17[6] = *(float *)&_XMM2;
    v25.m128_f32[0] = v25.m128_f32[0] * 0.5;
    v = v25;
    v18 += 8;
    v17 += 8;
    --v19;
  }
  while ( v19 );
}

/*
==============
PMROctreeFactoryNode::PMROctreeFactoryNode
==============
*/
void PMROctreeFactoryNode::PMROctreeFactoryNode(PMROctreeFactoryNode *this, const PMROctreeFactoryConstants *constants, float4 *midpoint, unsigned __int8 depth, PMROctreeFactoryNode *parent)
{
  std::set<unsigned int> *p_m_edges; 
  std::_Tree_node<unsigned int,void *> *v7; 

  this->__vftable = (PMROctreeFactoryNode_vtbl *)&PMROctreeFactoryNode::`vftable';
  this->m_midpoint = (const float4)midpoint->v;
  this->m_extentCalculated = 0;
  this->m_factoryConstants = constants;
  this->m_depth = depth;
  this->m_isLeaf = 1;
  this->m_parent = parent;
  this->m_children[0] = NULL;
  this->m_children[1] = NULL;
  this->m_children[2] = NULL;
  this->m_children[3] = NULL;
  this->m_children[4] = NULL;
  this->m_children[5] = NULL;
  this->m_children[6] = NULL;
  this->m_children[7] = NULL;
  p_m_edges = &this->m_edges;
  this->m_edges._Mypair._Myval2._Myval2._Myhead = NULL;
  this->m_edges._Mypair._Myval2._Myval2._Mysize = 0i64;
  v7 = (std::_Tree_node<unsigned int,void *> *)operator new(0x20ui64);
  v7->_Left = v7;
  v7->_Parent = v7;
  v7->_Right = v7;
  *(_WORD *)&v7->_Color = 257;
  p_m_edges->_Mypair._Myval2._Myval2._Myhead = v7;
  if ( !constants && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 83, ASSERT_TYPE_ASSERT, "(constants)", (const char *)&queryFormat, "constants", -2i64) )
    __debugbreak();
}

/*
==============
PMROctreeOptions::PMROctreeOptions
==============
*/
void PMROctreeOptions::PMROctreeOptions(PMROctreeOptions *this)
{
  *(_WORD *)&this->m_treeDepthCount = 0;
  this->m_inLineSegments = NULL;
  this->m_inLineSegmentIndices = NULL;
  this->m_lineSegmentIndexCount = 0i64;
  this->m_outTreeNodeSetPool = NULL;
  this->m_treeNodeSetPoolOffset = 0i64;
  this->m_treeNodeSetPoolSize = 0i64;
  this->m_outQEdgePool = NULL;
  this->m_qEdgePoolOffset = 0i64;
  this->m_qEdgePoolSize = 0i64;
  this->m_outNodeBoundingRadiusSq = NULL;
  this->m_outNodeHalfWidths = NULL;
  this->m_nodeBoundWidthPoolSize = 0i64;
  this->m_outDebugText = NULL;
  this->m_debugTextBufferSize = 0i64;
  *(__m256i *)this->m_extentMin.v.m128_f32 = (__m256i)0i64;
}

/*
==============
PMROctreeFactoryNode::~PMROctreeFactoryNode
==============
*/
void PMROctreeFactoryNode::~PMROctreeFactoryNode(PMROctreeFactoryNode *this)
{
  PMROctreeFactoryNode **m_children; 
  __int64 v3; 

  this->__vftable = (PMROctreeFactoryNode_vtbl *)&PMROctreeFactoryNode::`vftable';
  m_children = this->m_children;
  v3 = 8i64;
  do
  {
    if ( *m_children )
    {
      ((void (__fastcall *)(PMROctreeFactoryNode *, __int64))(*m_children)->~PMROctreeFactoryNode)(*m_children, 1i64);
      *m_children = NULL;
    }
    ++m_children;
    --v3;
  }
  while ( v3 );
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::clear(&this->m_edges);
  operator delete(this->m_edges._Mypair._Myval2._Myval2._Myhead, 0x20ui64);
}

/*
==============
PMROctreeFactoryNode::BuildExtent
==============
*/
void PMROctreeFactoryNode::BuildExtent(PMROctreeFactoryNode *this)
{
  float4 *v1; 

  v1 = &this->m_factoryConstants->m_nodeHalfWidth[this->m_depth];
  this->m_extentMin.v = _mm128_add_ps(_mm128_mul_ps(v1->v, g_negativeOneXYZW.v), this->m_midpoint.v);
  this->m_extentMax.v = _mm128_add_ps(_mm128_mul_ps(v1->v, g_one.v), this->m_midpoint.v);
  this->m_extentCalculated = 1;
}

/*
==============
BuildPMROctree
==============
*/
PMROctreeResults *BuildPMROctree(PMROctreeResults *result, const PMROctreeOptions *const options)
{
  PMROctreeResults midpoint; 
  __int64 v5; 
  PMROctreeFactory v6; 

  v5 = -2i64;
  midpoint.m_rootNode = (DiskPMROctreeNode)_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(options->m_extentMax.v, options->m_extentMin.v), g_oneHalf.v), options->m_extentMin.v);
  PMROctreeFactory::PMROctreeFactory(&v6, options, (const float4 *)&midpoint);
  PMROctreeFactory::BuildPMROctree(&v6, &midpoint);
  *result = midpoint;
  PMROctreeFactoryNode::~PMROctreeFactoryNode(&v6.m_rootNode);
  return result;
}

/*
==============
PMROctreeFactory::BuildPMROctree
==============
*/
PMROctreeResults *PMROctreeFactory::BuildPMROctree(PMROctreeFactory *this, PMROctreeResults *result)
{
  const PMROctreeOptions *m_options; 
  unsigned __int64 m_lineSegmentIndexCount; 
  double v6; 
  int v7; 
  unsigned int *m_inLineSegmentIndices; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  PMROctreeFactoryNode *p_m_rootNode; 
  unsigned int *v13; 
  unsigned __int64 v14; 
  const PMROctreeOptions *v15; 
  DiskPMROctreeNode *v16; 
  const PMROctreeOptions *v17; 
  __int64 v18; 
  double v19; 
  int v20; 
  PMROctreeFactoryNode *node; 
  DiskPMROctreeNodeSet *outOctreeNodeSetBuffer; 
  unsigned int *outQEdgeBuffer; 
  unsigned int outNodeSetWriteCount; 
  unsigned int outQEdgeWriteCount; 
  DiskPMROctreeNode resulta; 
  DiskPMROctreeNode v28; 
  unsigned int v29[2]; 
  int v30; 
  char _Buffer[1024]; 

  m_options = this->m_options;
  m_lineSegmentIndexCount = this->m_options->m_lineSegmentIndexCount;
  if ( m_lineSegmentIndexCount )
  {
    m_inLineSegmentIndices = (unsigned int *)m_options->m_inLineSegmentIndices;
    v9 = m_lineSegmentIndexCount;
    v10 = 0i64;
    v11 = 0i64;
    p_m_rootNode = &this->m_rootNode;
    v13 = &m_inLineSegmentIndices[v9];
    v14 = (v9 * 4) >> 2;
    if ( m_inLineSegmentIndices > v13 )
      v14 = 0i64;
    if ( v14 )
    {
      do
      {
        PMROctreeFactoryNode::Insert(p_m_rootNode, *m_inLineSegmentIndices, 1);
        ++v11;
        ++m_inLineSegmentIndices;
      }
      while ( v11 < v14 );
    }
    outNodeSetWriteCount = 0;
    outQEdgeWriteCount = 0;
    PMROctreeFactory::WriteNodeData(this, &resulta, 0xFFFFFFFF, 0xFFFFF8u, p_m_rootNode, NULL, &outNodeSetWriteCount, NULL, &outQEdgeWriteCount);
    LODWORD(outQEdgeBuffer) = outQEdgeWriteCount;
    LODWORD(outOctreeNodeSetBuffer) = 8 * outNodeSetWriteCount;
    LODWORD(node) = 1048574;
    j_snprintf(_Buffer, 0x400ui64, "(%zu / %u edges) (%u / %zu nodes) (%u / %zu qEdges) (%u split threshold) (%u max depth) (node + qEdge = %zu bytes)", this->m_options->m_lineSegmentIndexCount, node, outOctreeNodeSetBuffer, 8 * (0x1FFFFF - this->m_options->m_treeNodeSetPoolOffset), outQEdgeBuffer, 4294967294u - this->m_options->m_qEdgePoolOffset, this->m_options->m_splitThreshold, this->m_options->m_treeDepthCount, 4 * (outQEdgeWriteCount + 32i64 * outNodeSetWriteCount));
    v15 = this->m_options;
    if ( this->m_options->m_treeNodeSetPoolSize < outNodeSetWriteCount || v15->m_qEdgePoolSize < outQEdgeWriteCount )
    {
      j_snprintf(v15->m_outDebugText, v15->m_debugTextBufferSize, "Edge PMR-Octree exceeds allowable size.  Reduce number of edges or increase splitting threshold with \"-edgeOctreeThreshold [threshold]\". -- %s", _Buffer);
      LOBYTE(v30) = 1;
    }
    else
    {
      *(_QWORD *)v29 = 0i64;
      v16 = PMROctreeFactory::WriteNodeData(this, &resulta, 0xFFFFFFFF, 0xFFFFF8u, &this->m_rootNode, &v15->m_outTreeNodeSetPool[v15->m_treeNodeSetPoolOffset], v29, &v15->m_outQEdgePool[v15->m_qEdgePoolOffset], &v29[1]);
      v17 = this->m_options;
      v28 = *v16;
      LOBYTE(v30) = 0;
      if ( v17->m_nodeBoundWidthPoolSize )
      {
        v18 = 0i64;
        do
        {
          ++v18;
          v17->m_outNodeBoundingRadiusSq[v10] = this->m_constants.m_nodeBoundingRadiusSq[v10];
          ++v10;
          v17->m_outNodeHalfWidths[v18 - 1] = this->m_constants.m_childDirection[v18 + 7];
          v17 = this->m_options;
        }
        while ( v10 < this->m_options->m_nodeBoundWidthPoolSize );
      }
      j_snprintf(v17->m_outDebugText, v17->m_debugTextBufferSize, (const char *const)&queryFormat, _Buffer);
    }
    v19 = *(double *)v29;
    v20 = v30;
    result->m_rootNode = v28;
    *(double *)&result->m_nodeSetWriteCount = v19;
    *(_DWORD *)&result->m_error = v20;
  }
  else
  {
    j_snprintf(m_options->m_outDebugText, m_options->m_debugTextBufferSize, "Zero line segments provided.");
    v6 = *(double *)v29;
    result->m_rootNode = v28;
    LOBYTE(v30) = 1;
    v7 = v30;
    *(double *)&result->m_nodeSetWriteCount = v6;
    *(_DWORD *)&result->m_error = v7;
  }
  return result;
}

/*
==============
EdgeAdjacencySupported
==============
*/
__int64 EdgeAdjacencySupported(const DiskEdgeFlags flag)
{
  char v1; 
  int v2; 
  int v3; 
  int v5; 
  char v6; 

  v1 = flag;
  v5 = 1;
  v6 = 1;
  v2 = (char)flag;
  switch ( (char)flag )
  {
    case 1:
      v3 = 0;
      break;
    case 2:
      v3 = 1;
      break;
    case 4:
      v3 = 2;
      break;
    case 8:
      v3 = 3;
      break;
    case 16:
      v3 = 4;
      break;
    default:
      v3 = -1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 673, ASSERT_TYPE_ASSERT, "(unsigned)( flagIndex ) < (unsigned)( ( sizeof( *array_counter( s_flagToAdjacencySupported ) ) + 0 ) )", "flagIndex doesn't index ARRAY_COUNT( s_flagToAdjacencySupported )\n\t%i not in [0, %i)", -1, 5) )
        __debugbreak();
      break;
  }
  if ( 1 << v3 != v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 674, ASSERT_TYPE_ASSERT, "( static_cast<DiskEdgeFlags>( 0x1 << flagIndex ) ) == ( flag )", "%s == %s\n\t%i, %i", "static_cast<DiskEdgeFlags>( 0x1 << flagIndex )", "flag", (char)(1 << v3), v2) )
    __debugbreak();
  return *((unsigned __int8 *)&v5 + v3);
}

/*
==============
EdgeAdjacentFaceNormalPack
==============
*/
float EdgeAdjacentFaceNormalPack(const DiskStaticLineSegment *r_edge, const float4 *r_adjacentFaceNormal)
{
  __m128 v2; 
  float4 *v15; 
  __m128 v23; 
  __m128 v31; 
  float v43; 
  float v52; 
  float v57; 

  v2 = _mm128_sub_ps(r_edge->endPoints[1].v, r_edge->endPoints[0].v);
  _XMM1 = _mm128_mul_ps(v2, v2);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM7 = _mm128_div_ps(v2, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 512, ASSERT_TYPE_SANITY, "( !Float4IsNaN( dir ) )", (const char *)&queryFormat, "!Float4IsNaN( dir )") )
    __debugbreak();
  _XMM0 = _mm128_mul_ps(_XMM7, g_worldZ.v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm6, xmm2, xmm2
  }
  v15 = &g_worldZ;
  if ( COERCE_FLOAT(_XMM6.m128_i32[0] & _xmm) >= 0.99900001 )
  {
    _XMM0 = _mm128_mul_ps(_XMM7, g_worldX.v);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm6, xmm2, xmm2
    }
    v15 = &g_worldX;
  }
  _XMM1 = _mm128_mul_ps(_XMM7, r_adjacentFaceNormal->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  v23 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)0i64, _XMM0), _XMM7), r_adjacentFaceNormal->v);
  _XMM1 = _mm128_mul_ps(v23, v23);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM9 = _mm128_div_ps(v23, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm9, xmm9
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 534, ASSERT_TYPE_SANITY, "( !Float4IsNaN( adjacentProj ) )", (const char *)&queryFormat, "!Float4IsNaN( adjacentProj )") )
    __debugbreak();
  v31 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)0i64, _XMM6), _XMM7), v15->v);
  _XMM1 = _mm128_mul_ps(v31, v31);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM8 = _mm128_div_ps(v31, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm8, xmm8
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 542, ASSERT_TYPE_SANITY, "( !Float4IsNaN( referenceProj ) )", (const char *)&queryFormat, "!Float4IsNaN( referenceProj )") )
    __debugbreak();
  _XMM0 = _mm128_mul_ps(_XMM8, _XMM9);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, -1.0, 1.0);
  v43 = acosf_0(*(float *)&_XMM0);
  if ( COERCE_FLOAT(LODWORD(v43) & _xmm) > 0.001 )
  {
    _XMM1 = _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), _mm_shuffle_ps(_XMM9, _XMM9, 210)), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), _mm_shuffle_ps(_XMM9, _XMM9, 201))), _XMM7);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm1, xmm2, xmm2
    }
    if ( *(float *)&_XMM1 < 0.0 )
      LODWORD(v43) ^= _xmm;
  }
  _XMM0 = _mm128_mul_ps(_XMM9, _XMM7);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  LODWORD(v52) = _XMM0 & _xmm;
  if ( v52 > 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 569, ASSERT_TYPE_ASSERT, "( I_fabs( dot ) ) <= ( 0.001f )", "%s <= %s\n\t%g, %g", "I_fabs( dot )", "EQUAL_EPSILON", v52, DOUBLE_0_001000000047497451) )
    __debugbreak();
  _XMM0 = _mm128_mul_ps(_XMM8, _XMM7);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  LODWORD(v57) = _XMM0 & _xmm;
  if ( v57 > 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 576, ASSERT_TYPE_ASSERT, "( I_fabs( dot ) ) <= ( 0.001f )", "%s <= %s\n\t%g, %g", "I_fabs( dot )", "EQUAL_EPSILON", v57, DOUBLE_0_001000000047497451) )
    __debugbreak();
  return v43;
}

/*
==============
EdgeAdjacentFaceNormalUnpack
==============
*/

void __fastcall EdgeAdjacentFaceNormalUnpack(const DiskStaticLineSegment *r_edge, double referenceAngle, float4 *r_outAdjacentFaceNormal)
{
  __m128 v3; 
  __m128 v4; 
  float4 *v17; 
  __m128 v21; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  float4 v46; 
  float4 v47; 
  float4 v48; 

  v3 = _mm128_sub_ps(r_edge->endPoints[1].v, r_edge->endPoints[0].v);
  v4 = *(__m128 *)&referenceAngle;
  _XMM2 = _mm128_mul_ps(v3, v3);
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  _XMM7 = _mm128_div_ps(v3, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 602, ASSERT_TYPE_SANITY, "( !Float4IsNaN( dir ) )", (const char *)&queryFormat, "!Float4IsNaN( dir )") )
    __debugbreak();
  _XMM0 = _mm128_mul_ps(_XMM7, g_worldZ.v);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm3, xmm2, xmm2
  }
  v17 = &g_worldZ;
  if ( COERCE_FLOAT(_XMM3.m128_i32[0] & _xmm) >= 0.99900001 )
  {
    _XMM0 = _mm128_mul_ps(_XMM7, g_worldX.v);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm3, xmm2, xmm2
    }
    v17 = &g_worldX;
  }
  v21 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps((__m128)0i64, _XMM3), _XMM7), v17->v);
  _XMM1 = _mm128_mul_ps(v21, v21);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM8 = _mm128_div_ps(v21, _mm_sqrt_ps(_XMM0));
  __asm
  {
    vcmpneqps xmm0, xmm8, xmm8
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 621, ASSERT_TYPE_SANITY, "( !Float4IsNaN( referenceProj ) )", (const char *)&queryFormat, "!Float4IsNaN( referenceProj )") )
    __debugbreak();
  _XMM0 = _mm128_mul_ps(_XMM7, _XMM7);
  __asm { vinsertps xmm1, xmm0, xmm0, 8 }
  _mm128_mul_ps(_mm_shuffle_ps(v4, v4, 0), g_oneHalf.v);
  __asm { vhaddps xmm6, xmm1, xmm1 }
  Float4SinCos(r_edge->endPoints, &v47, &v48);
  __asm
  {
    vhaddps xmm0, xmm6, xmm6
    vrsqrtps xmm1, xmm0
  }
  _XMM3 = _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM7), v47.v);
  __asm { vblendps xmm0, xmm3, [rsp+0B8h+var_68], 8 }
  v36 = _mm_shuffle_ps(_XMM0, _XMM0, 210);
  v37 = _mm_shuffle_ps(_XMM0, _XMM0, 201);
  v38 = _mm_shuffle_ps(_XMM0, _XMM0, 255);
  v39 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), v37), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), v36));
  v40 = _mm128_add_ps(v39, v39);
  v41 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v40, v40, 210), v37), _mm128_mul_ps(_mm_shuffle_ps(v40, v40, 201), v36)), _mm128_add_ps(_mm128_mul_ps(v38, v40), _XMM8));
  _XMM0 = _mm128_mul_ps(v41, v41);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v46.v = _mm128_div_ps(v41, _mm_sqrt_ps(_XMM0));
  *r_outAdjacentFaceNormal = (float4)v46.v;
  if ( (v46.v.m128_i32[0] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 631, ASSERT_TYPE_ASSERT, "(!IS_NAN( Float4ExtractX( r_outAdjacentFaceNormal ) ))", (const char *)&queryFormat, "!IS_NAN( Float4ExtractX( r_outAdjacentFaceNormal ) )", v46.v.m128_i32[0]) )
    __debugbreak();
  if ( (r_outAdjacentFaceNormal->v.m128_i32[1] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 632, ASSERT_TYPE_ASSERT, "(!IS_NAN( Float4ExtractY( r_outAdjacentFaceNormal ) ))", (const char *)&queryFormat, "!IS_NAN( Float4ExtractY( r_outAdjacentFaceNormal ) )") )
    __debugbreak();
  if ( (r_outAdjacentFaceNormal->v.m128_i32[2] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 633, ASSERT_TYPE_ASSERT, "(!IS_NAN( Float4ExtractZ( r_outAdjacentFaceNormal ) ))", (const char *)&queryFormat, "!IS_NAN( Float4ExtractZ( r_outAdjacentFaceNormal ) )") )
    __debugbreak();
}

/*
==============
PMROctreeFactoryNode::Insert
==============
*/
void PMROctreeFactoryNode::Insert(PMROctreeFactoryNode *this, unsigned int edgeIndex, bool maySplit)
{
  const PMROctreeFactoryConstants *m_factoryConstants; 
  __int64 v7; 
  float4 *p_m_extentMax; 
  const float4 *endPoints; 
  __m128 *p_v; 
  float4 *p_m_extentMin; 
  int m_depth; 
  unsigned __int64 Mysize; 
  const PMROctreeOptions *m_options; 
  int m_treeDepthCount; 
  unsigned __int64 m_splitThreshold; 
  int v17; 
  int v18; 
  PMROctreeFactoryNode **m_children; 
  __int64 v20; 
  unsigned int _Val; 
  std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int> > >,bool> result; 

  m_factoryConstants = this->m_factoryConstants;
  v7 = edgeIndex;
  _Val = edgeIndex;
  p_m_extentMax = &this->m_extentMax;
  endPoints = m_factoryConstants->m_options->m_inLineSegments[v7].endPoints;
  if ( this->m_extentCalculated )
  {
    p_m_extentMin = &this->m_extentMin;
  }
  else
  {
    p_v = &m_factoryConstants->m_nodeHalfWidth[this->m_depth].v;
    p_m_extentMin = &this->m_extentMin;
    this->m_extentMin.v = _mm128_add_ps(_mm128_mul_ps(*p_v, g_negativeOneXYZW.v), this->m_midpoint.v);
    p_m_extentMax->v = _mm128_add_ps(_mm128_mul_ps(*p_v, g_one.v), this->m_midpoint.v);
    this->m_extentCalculated = 1;
  }
  if ( Float4AABBLineSegmentIntersect(p_m_extentMin, p_m_extentMax, endPoints, endPoints + 1) )
  {
    if ( this->m_isLeaf )
    {
      m_depth = this->m_depth;
      Mysize = this->m_edges._Mypair._Myval2._Myval2._Mysize;
      m_options = this->m_factoryConstants->m_options;
      m_treeDepthCount = m_options->m_treeDepthCount;
      m_splitThreshold = m_options->m_splitThreshold;
      v17 = m_treeDepthCount - 1;
      if ( (unsigned __int8)m_depth >= (unsigned __int8)m_treeDepthCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 138, ASSERT_TYPE_ASSERT, "( m_depth ) < ( m_factoryConstants->m_options->m_treeDepthCount )", "%s < %s\n\t%i, %i", "m_depth", "m_factoryConstants->m_options->m_treeDepthCount", this->m_depth, m_options->m_treeDepthCount) )
        __debugbreak();
      if ( !maySplit || m_splitThreshold > Mysize || v17 <= m_depth )
      {
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::insert<0,0>(&this->m_edges, &result, &_Val);
        return;
      }
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::insert<0,0>(&this->m_edges, &result, &_Val);
      PMROctreeFactoryNode::Split(this);
      if ( !this->m_edges._Mypair._Myval2._Myval2._Mysize )
        return;
      v18 = 143;
      goto LABEL_22;
    }
    m_children = this->m_children;
    if ( !this->m_children[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 152, ASSERT_TYPE_ASSERT, "(m_children[0] != nullptr)", (const char *)&queryFormat, "m_children[0] != nullptr") )
      __debugbreak();
    v20 = 8i64;
    do
    {
      PMROctreeFactoryNode::Insert(*m_children++, edgeIndex, maySplit);
      --v20;
    }
    while ( v20 );
    if ( this->m_edges._Mypair._Myval2._Myval2._Mysize )
    {
      v18 = 157;
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", v18, ASSERT_TYPE_ASSERT, "(m_edges.empty())", (const char *)&queryFormat, "m_edges.empty()") )
        __debugbreak();
    }
  }
}

/*
==============
PMROctreeFactoryNode::IntersectsLineSegment
==============
*/
bool PMROctreeFactoryNode::IntersectsLineSegment(PMROctreeFactoryNode *this, const float4 (*lineSegment)[2])
{
  float4 *v2; 
  float4 v3; 
  float4 *p_m_extentMax; 

  if ( this->m_extentCalculated )
  {
    p_m_extentMax = &this->m_extentMax;
  }
  else
  {
    v2 = &this->m_factoryConstants->m_nodeHalfWidth[this->m_depth];
    this->m_extentMin.v = _mm128_add_ps(_mm128_mul_ps(v2->v, g_negativeOneXYZW.v), this->m_midpoint.v);
    v3.v = _mm128_add_ps(_mm128_mul_ps(v2->v, g_one.v), this->m_midpoint.v);
    p_m_extentMax = &this->m_extentMax;
    this->m_extentCalculated = 1;
    this->m_extentMax = (float4)v3.v;
  }
  return Float4AABBLineSegmentIntersect(&this->m_extentMin, p_m_extentMax, (const float4 *)lineSegment, &(*lineSegment)[1]);
}

/*
==============
PMROctreeFactory::MidpointToGridIndex
==============
*/
void PMROctreeFactory::MidpointToGridIndex(PMROctreeFactory *this, unsigned __int8 depth, const float4 *midpoint, unsigned __int16 *outGridIndex)
{
  unsigned __int16 v13; 
  unsigned __int16 v15; 

  if ( !outGridIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 445, ASSERT_TYPE_ASSERT, "(outGridIndex)", (const char *)&queryFormat, "outGridIndex") )
    __debugbreak();
  _XMM0 = g_negativeZero.v;
  _mm128_add_ps(_mm128_div_ps(_mm128_sub_ps(_mm128_sub_ps(midpoint->v, this->m_options->m_extentMin.v), this->m_constants.m_nodeHalfWidth[depth].v), _mm128_mul_ps(this->m_constants.m_nodeHalfWidth[depth].v, g_two.v)), g_oneHalf.v);
  __asm
  {
    vandnps xmm2, xmm0, xmm1
    vmaxps  xmm2, xmm2, xmm1
    vcvttps2dq xmm6, xmm2
    vpextrd rcx, xmm6, 0; val
  }
  v13 = truncate_cast<unsigned short,unsigned int>(_RCX);
  __asm { vpextrd rcx, xmm6, 1; val }
  *outGridIndex = v13;
  v15 = truncate_cast<unsigned short,unsigned int>(_RCX);
  __asm { vpextrd rcx, xmm6, 2; val }
  outGridIndex[1] = v15;
  outGridIndex[2] = truncate_cast<unsigned short,unsigned int>(_RCX);
}

/*
==============
PMROctreeFactoryNode::Split
==============
*/
void PMROctreeFactoryNode::Split(PMROctreeFactoryNode *this)
{
  __int64 m_depth; 
  unsigned __int8 v3; 
  __m128 v4; 
  unsigned __int64 v5; 
  PMROctreeFactoryNode **m_children; 
  PMROctreeFactoryNode **v7; 
  __m128 v8; 
  PMROctreeFactoryNode *v9; 
  std::set<unsigned int> *p_m_edges; 
  std::_Tree_node<unsigned int,void *> *Myhead; 
  std::_Tree_node<unsigned int,void *> *Left; 
  PMROctreeFactoryNode **v13; 
  __int64 v14; 
  std::_Tree_node<unsigned int,void *> *Right; 
  std::_Tree_node<unsigned int,void *> *i; 
  std::_Tree_node<unsigned int,void *> *j; 
  float4 v18; 

  this->m_isLeaf = 0;
  m_depth = this->m_depth;
  v3 = m_depth + 1;
  v4 = _mm128_mul_ps(g_oneHalf.v, this->m_factoryConstants->m_nodeHalfWidth[m_depth].v);
  v5 = 0i64;
  m_children = this->m_children;
  v7 = this->m_children;
  do
  {
    v8 = _mm128_add_ps(_mm128_mul_ps(v4, this->m_factoryConstants->m_childDirection[v5].v), this->m_midpoint.v);
    v9 = (PMROctreeFactoryNode *)operator new(0xB0ui64);
    if ( v9 )
    {
      v18.v = v8;
      PMROctreeFactoryNode::PMROctreeFactoryNode(v9, this->m_factoryConstants, &v18, v3, this);
    }
    *v7++ = v9;
    ++v5;
  }
  while ( v5 < 8 );
  p_m_edges = &this->m_edges;
  Myhead = this->m_edges._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  while ( Left != Myhead )
  {
    v13 = m_children;
    v14 = 8i64;
    do
    {
      PMROctreeFactoryNode::Insert(*v13++, Left->_Myval, 0);
      --v14;
    }
    while ( v14 );
    Right = Left->_Right;
    if ( Right->_Isnil )
    {
      for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
      {
        if ( Left != i->_Right )
          break;
        Left = i;
      }
      Left = i;
    }
    else
    {
      Left = Left->_Right;
      for ( j = Right->_Left; !j->_Isnil; j = j->_Left )
        Left = j;
    }
  }
  std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::clear(p_m_edges);
}

/*
==============
PMROctreeFactory::WriteNodeData
==============
*/
DiskPMROctreeNode *PMROctreeFactory::WriteNodeData(PMROctreeFactory *this, DiskPMROctreeNode *result, unsigned int parentNodeIndex, unsigned int nodeIndex, const PMROctreeFactoryNode *node, DiskPMROctreeNodeSet *outOctreeNodeSetBuffer, unsigned int *outNodeSetWriteCount, unsigned int *outQEdgeBuffer, unsigned int *outQEdgeWriteCount)
{
  __int128 v9; 
  unsigned __int64 v12; 
  bool m_isLeaf; 
  PMROctreeFactoryNode *m_parent; 
  bool v15; 
  DiskPMROctreeFlags v16; 
  const PMROctreeOptions *m_options; 
  __int64 v18; 
  unsigned __int16 v24; 
  unsigned __int16 v26; 
  unsigned __int16 v28; 
  unsigned int v29; 
  std::_Tree_node<unsigned int,void *> *Myhead; 
  std::_Tree_node<unsigned int,void *> *Left; 
  std::_Tree_node<unsigned int,void *> *Right; 
  std::_Tree_node<unsigned int,void *> *i; 
  std::_Tree_node<unsigned int,void *> *v34; 
  DiskPMROctreeNode *v35; 
  DiskPMROctreeNodeSet *v36; 
  unsigned __int64 v37; 
  DiskPMROctreeNode *v38; 
  __int64 v39; 
  PMROctreeFactoryNode **v40; 
  DiskPMROctreeNodeSet *v41; 
  unsigned int *v42; 
  bool v43; 
  PMROctreeFactoryNode **m_children; 
  DiskPMROctreeNode resulta; 
  __int128 v50; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 350, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !outNodeSetWriteCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 351, ASSERT_TYPE_ASSERT, "(outNodeSetWriteCount)", (const char *)&queryFormat, "outNodeSetWriteCount") )
    __debugbreak();
  if ( !outQEdgeWriteCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 352, ASSERT_TYPE_ASSERT, "(outQEdgeWriteCount)", (const char *)&queryFormat, "outQEdgeWriteCount") )
    __debugbreak();
  v12 = 0i64;
  if ( (outOctreeNodeSetBuffer == NULL) != (outQEdgeBuffer == NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 356, ASSERT_TYPE_ASSERT, "((outOctreeNodeSetBuffer == nullptr) == (outQEdgeBuffer == nullptr))", (const char *)&queryFormat, "(outOctreeNodeSetBuffer == nullptr) == (outQEdgeBuffer == nullptr)") )
    __debugbreak();
  m_isLeaf = node->m_isLeaf;
  m_parent = node->m_parent;
  v43 = m_isLeaf;
  v15 = m_isLeaf && !node->m_edges._Mypair._Myval2._Myval2._Mysize;
  v16 = 0;
  result->flags = 0;
  if ( !m_parent )
  {
    result->flags = ROOT_NODE;
    v16 = ROOT_NODE;
  }
  if ( m_isLeaf )
  {
    v16 |= 2u;
    result->flags = v16;
  }
  if ( v15 )
    result->flags = v16 | 1;
  if ( outOctreeNodeSetBuffer )
  {
    m_options = this->m_options;
    v18 = 2 * ((unsigned __int8)node->m_depth + 9i64);
    v50 = v9;
    _XMM0 = g_negativeZero.v;
    _mm128_add_ps(_mm128_div_ps(_mm128_sub_ps(_mm128_sub_ps(node->m_midpoint.v, m_options->m_extentMin.v), *(__m128 *)(&this->m_options + v18)), _mm128_mul_ps(*(__m128 *)(&this->m_options + v18), g_two.v)), g_oneHalf.v);
    __asm
    {
      vandnps xmm2, xmm0, xmm1
      vmaxps  xmm2, xmm2, xmm1
      vcvttps2dq xmm6, xmm2
      vpextrd rcx, xmm6, 0; val
    }
    v24 = truncate_cast<unsigned short,unsigned int>(_RCX);
    __asm { vpextrd rcx, xmm6, 1; val }
    result->uniformGridIndex[0] = v24;
    v26 = truncate_cast<unsigned short,unsigned int>(_RCX);
    __asm { vpextrd rcx, xmm6, 2; val }
    result->uniformGridIndex[1] = v26;
    v28 = truncate_cast<unsigned short,unsigned int>(_RCX);
    m_isLeaf = v43;
    result->uniformGridIndex[2] = v28;
    result->depth = node->m_depth;
  }
  if ( m_isLeaf )
  {
    if ( outOctreeNodeSetBuffer )
    {
      v29 = *outQEdgeWriteCount;
      result->parentNodeIndex = truncate_cast<unsigned int,unsigned __int64>(this->m_options->m_qEdgePoolOffset + *outQEdgeWriteCount);
      Myhead = node->m_edges._Mypair._Myval2._Myval2._Myhead;
      Left = Myhead->_Left;
      while ( Left != Myhead )
      {
        if ( (unsigned int)((__int64)((__int64)outQEdgeBuffer + 4i64 * *outQEdgeWriteCount - (unsigned __int64)this->m_options->m_outQEdgePool) >> 2) >= LODWORD(this->m_options->m_qEdgePoolOffset) + LODWORD(this->m_options->m_qEdgePoolSize) )
        {
          LODWORD(v42) = LODWORD(this->m_options->m_qEdgePoolOffset) + LODWORD(this->m_options->m_qEdgePoolSize);
          LODWORD(v41) = (__int64)((__int64)outQEdgeBuffer + 4i64 * *outQEdgeWriteCount - (unsigned __int64)this->m_options->m_outQEdgePool) >> 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( ((outQEdgeBuffer + *outQEdgeWriteCount) - m_options->m_outQEdgePool) ) < (unsigned)( (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize) )", "((outQEdgeBuffer + *outQEdgeWriteCount) - m_options->m_outQEdgePool) doesn't index (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize)\n\t%i not in [0, %i)", v41, v42) )
            __debugbreak();
        }
        outQEdgeBuffer[(*outQEdgeWriteCount)++] = Left->_Myval;
        Right = Left->_Right;
        if ( Right->_Isnil )
        {
          for ( i = Left->_Parent; !i->_Isnil; i = i->_Parent )
          {
            if ( Left != i->_Right )
              break;
            Left = i;
          }
          Left = i;
        }
        else
        {
          v34 = Right->_Left;
          for ( Left = Left->_Right; !v34->_Isnil; v34 = v34->_Left )
            Left = v34;
        }
      }
      v35 = result;
      result->childNodeSetIndex = *outQEdgeWriteCount - v29;
    }
    else
    {
      *outQEdgeWriteCount += truncate_cast<unsigned int,unsigned __int64>(node->m_edges._Mypair._Myval2._Myval2._Mysize);
      return result;
    }
  }
  else if ( outOctreeNodeSetBuffer )
  {
    m_children = node->m_children;
    if ( !node->m_children[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 413, ASSERT_TYPE_ASSERT, "(node->m_children[0] != nullptr)", (const char *)&queryFormat, "node->m_children[0] != nullptr") )
      __debugbreak();
    result->parentNodeIndex = parentNodeIndex;
    result->childNodeSetIndex = truncate_cast<unsigned int,unsigned __int64>(this->m_options->m_treeNodeSetPoolOffset + *outNodeSetWriteCount);
    v36 = &outOctreeNodeSetBuffer[(unsigned __int64)*outNodeSetWriteCount];
    if ( (unsigned int)(v36 - this->m_options->m_outTreeNodeSetPool) >= LODWORD(this->m_options->m_qEdgePoolOffset) + LODWORD(this->m_options->m_qEdgePoolSize) )
    {
      LODWORD(v41) = v36 - this->m_options->m_outTreeNodeSetPool;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 420, ASSERT_TYPE_ASSERT, "(unsigned)( (childNodeSet - m_options->m_outTreeNodeSetPool) ) < (unsigned)( (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize) )", "(childNodeSet - m_options->m_outTreeNodeSetPool) doesn't index (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize)\n\t%i not in [0, %i)", v41, LODWORD(this->m_options->m_qEdgePoolOffset) + LODWORD(this->m_options->m_qEdgePoolSize)) )
        __debugbreak();
    }
    ++*outNodeSetWriteCount;
    do
    {
      v37 = v12 + 8 * result->childNodeSetIndex;
      if ( v37 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v37, "unsigned", v12 + 8 * result->childNodeSetIndex) )
        __debugbreak();
      v38 = PMROctreeFactory::WriteNodeData(this, &resulta, nodeIndex, v37, *m_children++, outOctreeNodeSetBuffer, outNodeSetWriteCount, outQEdgeBuffer, outQEdgeWriteCount);
      ++v12;
      v36->node[0] = *v38;
      v36 = (DiskPMROctreeNodeSet *)((char *)v36 + 16);
    }
    while ( v12 < 8 );
    return result;
  }
  else
  {
    ++*outNodeSetWriteCount;
    v39 = 8i64;
    v40 = node->m_children;
    do
    {
      PMROctreeFactory::WriteNodeData(this, &resulta, 0xFFFFFFFF, 0xFFFFFFFF, *v40++, NULL, outNodeSetWriteCount, outQEdgeBuffer, outQEdgeWriteCount);
      --v39;
    }
    while ( v39 );
    return result;
  }
  return v35;
}

