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
  bool v23; 
  bool v24; 
  bool v25; 
  bool v37; 
  unsigned __int8 m_treeDepthCount; 
  __int64 v56; 
  double v125; 
  double v126; 
  double v127; 
  __int64 v128; 
  double v129; 
  double v130; 
  double v131; 
  double v132; 
  double v133; 
  __int64 v134; 
  double v135; 
  double v136; 
  float4 v137; 
  char v138; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RBX = this;
  this->m_options = options;
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups [rsp+0E8h+var_88], xmm0
  }
  PMROctreeFactoryNode::PMROctreeFactoryNode(&this->m_rootNode, &this->m_constants, &v137, 0, NULL);
  if ( !_RBX->m_options && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 213, ASSERT_TYPE_ASSERT, "(m_options)", (const char *)&queryFormat, "m_options") )
    __debugbreak();
  _RAX = _RBX->m_options;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax]
    vshufps xmm6, xmm1, xmm1, 55h ; 'U'
    vshufps xmm8, xmm1, xmm1, 0AAh ; 'ª'
    vmovups xmm0, xmmword ptr [rax+10h]
    vshufps xmm7, xmm0, xmm0, 55h ; 'U'
    vshufps xmm9, xmm0, xmm0, 0AAh ; 'ª'
    vcomiss xmm1, xmm0
    vcvtss2sd xmm0, xmm0, xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vmovsd  [rsp+0E8h+var_A8], xmm0
    vmovsd  [rsp+0E8h+var_B0], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 220, ASSERT_TYPE_ASSERT, "( mins[0] ) < ( maxs[0] )", "%s < %s\n\t%g, %g", "mins[0]", "maxs[0]", v125, v131) )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, xmm7
    vcvtss2sd xmm0, xmm7, xmm7
    vcvtss2sd xmm1, xmm6, xmm6
    vmovsd  [rsp+0E8h+var_A8], xmm0
    vmovsd  [rsp+0E8h+var_B0], xmm1
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 221, ASSERT_TYPE_ASSERT, "( mins[1] ) < ( maxs[1] )", "%s < %s\n\t%g, %g", "mins[1]", "maxs[1]", v126, v132) )
    __debugbreak();
  __asm
  {
    vcomiss xmm8, xmm9
    vcvtss2sd xmm0, xmm9, xmm9
    vcvtss2sd xmm1, xmm8, xmm8
    vmovsd  [rsp+0E8h+var_A8], xmm0
    vmovsd  [rsp+0E8h+var_B0], xmm1
  }
  v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 222, ASSERT_TYPE_ASSERT, "( mins[2] ) < ( maxs[2] )", "%s < %s\n\t%g, %g", "mins[2]", "maxs[2]", v127, v133);
  v24 = !v23;
  v25 = !v23;
  if ( v23 )
    __debugbreak();
  _RAX = _RBX->m_options;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+10h]
    vsubps  xmm6, xmm0, xmmword ptr [rax]
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vshufps xmm8, xmm6, xmm6, 0AAh ; 'ª'
    vsubss  xmm1, xmm0, xmm6
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm1, xmm1, xmm7
    vmovss  xmm0, cs:squareTolerance
    vcomiss xmm1, xmm0
  }
  if ( !v24 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0E8h+var_A8], xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm1
    }
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 230, ASSERT_TYPE_ASSERT, "( I_fabs( width[1] - width[0] ) ) <= ( squareTolerance )", "%s <= %s\n\t%g, %g", "I_fabs( width[1] - width[0] )", "squareTolerance", v129, v135);
    v25 = !v37;
    if ( v37 )
      __debugbreak();
    __asm { vmovss  xmm0, cs:squareTolerance }
  }
  __asm
  {
    vsubss  xmm1, xmm8, xmm6
    vandps  xmm1, xmm1, xmm7
    vcomiss xmm1, xmm0
  }
  if ( !v25 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0E8h+var_A8], xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 231, ASSERT_TYPE_ASSERT, "( I_fabs( width[2] - width[0] ) ) <= ( squareTolerance )", "%s <= %s\n\t%g, %g", "I_fabs( width[2] - width[0] )", "squareTolerance", v130, v136) )
      __debugbreak();
  }
  if ( !_RBX->m_options->m_splitThreshold )
  {
    LODWORD(v134) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 234, ASSERT_TYPE_ASSERT, "( 0 ) < ( m_options->m_splitThreshold )", "%s < %s\n\t%i, %i", "0", "m_options->m_splitThreshold", 0i64, v134) )
      __debugbreak();
  }
  if ( !_RBX->m_options->m_inLineSegments && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 235, ASSERT_TYPE_ASSERT, "(m_options->m_inLineSegments)", (const char *)&queryFormat, "m_options->m_inLineSegments") )
    __debugbreak();
  if ( !_RBX->m_options->m_inLineSegmentIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 236, ASSERT_TYPE_ASSERT, "(m_options->m_inLineSegmentIndices)", (const char *)&queryFormat, "m_options->m_inLineSegmentIndices") )
    __debugbreak();
  if ( _RBX->m_options->m_lineSegmentIndexCount > 0xFFFFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 237, ASSERT_TYPE_ASSERT, "(m_options->m_lineSegmentIndexCount <= ( ( ( 0x1U << (20) ) - 1 ) - 1 ))", (const char *)&queryFormat, "m_options->m_lineSegmentIndexCount <= MAX_MAP_FLAGGED_EDGES_PER_LIST") )
    __debugbreak();
  if ( !_RBX->m_options->m_outTreeNodeSetPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 238, ASSERT_TYPE_ASSERT, "(m_options->m_outTreeNodeSetPool)", (const char *)&queryFormat, "m_options->m_outTreeNodeSetPool") )
    __debugbreak();
  if ( ((__int64)_RBX->m_options->m_outTreeNodeSetPool & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 239, ASSERT_TYPE_ASSERT, "( ( (((intptr_t)(m_options->m_outTreeNodeSetPool)) & 127) == 0 ) )", "( m_options->m_outTreeNodeSetPool ) = %p", _RBX->m_options->m_outTreeNodeSetPool) )
    __debugbreak();
  if ( _RBX->m_options->m_treeNodeSetPoolOffset >= 0x1FFFFF )
  {
    LODWORD(v134) = 0x1FFFFF;
    LODWORD(v128) = _RBX->m_options->m_treeNodeSetPoolOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 240, ASSERT_TYPE_ASSERT, "( m_options->m_treeNodeSetPoolOffset ) < ( (((0x1 << (24)) / 8) - 1) )", "%s < %s\n\t%i, %i", "m_options->m_treeNodeSetPoolOffset", "MAX_MAP_STATIC_EDGE_OCTREE_NODE_SETS_PER_LIST", v128, v134) )
      __debugbreak();
  }
  if ( _RBX->m_options->m_treeNodeSetPoolSize > 0x1FFFFF )
  {
    LODWORD(v134) = 0x1FFFFF;
    LODWORD(v128) = _RBX->m_options->m_treeNodeSetPoolSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 241, ASSERT_TYPE_ASSERT, "( m_options->m_treeNodeSetPoolSize ) <= ( (((0x1 << (24)) / 8) - 1) )", "%s <= %s\n\t%i, %i", "m_options->m_treeNodeSetPoolSize", "MAX_MAP_STATIC_EDGE_OCTREE_NODE_SETS_PER_LIST", v128, v134) )
      __debugbreak();
  }
  if ( !_RBX->m_options->m_treeDepthCount )
  {
    LODWORD(v134) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 242, ASSERT_TYPE_ASSERT, "( 0 ) < ( m_options->m_treeDepthCount )", "%s < %s\n\t%i, %i", "0", "m_options->m_treeDepthCount", 0i64, v134) )
      __debugbreak();
  }
  m_treeDepthCount = _RBX->m_options->m_treeDepthCount;
  if ( m_treeDepthCount > 0x10u )
  {
    LODWORD(v134) = 16;
    LODWORD(v128) = m_treeDepthCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 243, ASSERT_TYPE_ASSERT, "( m_options->m_treeDepthCount ) <= ( ( sizeof( PMROctreeNode::uniformGridIndex[0] ) * 8 ) )", "%s <= %s\n\t%i, %i", "m_options->m_treeDepthCount", "MAX_PMR_OCTREE_DEPTH_COUNT", v128, v134) )
      __debugbreak();
  }
  if ( !_RBX->m_options->m_outQEdgePool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 244, ASSERT_TYPE_ASSERT, "(m_options->m_outQEdgePool)", (const char *)&queryFormat, "m_options->m_outQEdgePool") )
    __debugbreak();
  if ( _RBX->m_options->m_qEdgePoolOffset >= 0xFFFFFFFE )
  {
    LODWORD(v134) = -2;
    LODWORD(v128) = _RBX->m_options->m_qEdgePoolOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 245, ASSERT_TYPE_ASSERT, "( m_options->m_qEdgePoolOffset ) < ( (0xffffffff - 1) )", "%s < %s\n\t%i, %i", "m_options->m_qEdgePoolOffset", "MAX_MAP_STATIC_EDGE_OCTREE_QEDGES", v128, v134) )
      __debugbreak();
  }
  if ( _RBX->m_options->m_qEdgePoolSize > 0xFFFFFFFE )
  {
    LODWORD(v134) = -2;
    LODWORD(v128) = _RBX->m_options->m_qEdgePoolSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 246, ASSERT_TYPE_ASSERT, "( m_options->m_qEdgePoolSize ) <= ( (0xffffffff - 1) )", "%s <= %s\n\t%i, %i", "m_options->m_qEdgePoolSize", "MAX_MAP_STATIC_EDGE_OCTREE_QEDGES", v128, v134) )
      __debugbreak();
  }
  if ( !_RBX->m_options->m_outNodeBoundingRadiusSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 247, ASSERT_TYPE_ASSERT, "(m_options->m_outNodeBoundingRadiusSq)", (const char *)&queryFormat, "m_options->m_outNodeBoundingRadiusSq") )
    __debugbreak();
  if ( !_RBX->m_options->m_outNodeHalfWidths && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 248, ASSERT_TYPE_ASSERT, "(m_options->m_outNodeHalfWidths)", (const char *)&queryFormat, "m_options->m_outNodeHalfWidths") )
    __debugbreak();
  if ( _RBX->m_options->m_nodeBoundWidthPoolSize != _RBX->m_options->m_treeDepthCount )
  {
    LODWORD(v134) = _RBX->m_options->m_treeDepthCount;
    LODWORD(v128) = _RBX->m_options->m_nodeBoundWidthPoolSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 249, ASSERT_TYPE_ASSERT, "( m_options->m_nodeBoundWidthPoolSize ) == ( m_options->m_treeDepthCount )", "%s == %s\n\t%i, %i", "m_options->m_nodeBoundWidthPoolSize", "m_options->m_treeDepthCount", v128, v134) )
      __debugbreak();
  }
  if ( !_RBX->m_options->m_outDebugText && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 250, ASSERT_TYPE_ASSERT, "(m_options->m_outDebugText)", (const char *)&queryFormat, "m_options->m_outDebugText") )
    __debugbreak();
  _RBX->m_constants.m_options = _RBX->m_options;
  __asm
  {
    vmovaps ymm0, cs:__ymm@000000003f800000bf800000bf80000000000000bf800000bf800000bf800000
    vmovups ymmword ptr [rbx+10h], ymm0
    vmovaps ymm0, cs:__ymm@00000000bf8000003f800000bf800000000000003f8000003f800000bf800000
    vmovups ymmword ptr [rbx+30h], ymm0
    vmovaps ymm0, cs:__ymm@000000003f8000003f8000003f80000000000000bf8000003f8000003f800000
    vmovups ymmword ptr [rbx+50h], ymm0
    vmovaps ymm0, cs:__ymm@00000000bf800000bf8000003f800000000000003f800000bf8000003f800000
    vmovups ymmword ptr [rbx+70h], ymm0
  }
  _RAX = _RBX->m_options;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmm0, xmmword ptr [rax]
    vsubss  xmm0, xmm1, xmm0
    vmovss  xmm5, cs:__real@3f000000
    vmulss  xmm3, xmm0, xmm5
    vxorps  xmm6, xmm6, xmm6
  }
  _RAX = &_RBX->m_constants.m_nodeBoundingRadiusSq[1];
  _RCX = &_RBX->m_constants.m_nodeHalfWidth[1];
  v56 = 2i64;
  do
  {
    __asm
    {
      vmovaps xmm1, xmm3
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm1, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx-10h], xmm1
      vmulps  xmm0, xmm1, xmm1
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax-4], xmm2
      vmulss  xmm3, xmm3, xmm5
      vmovaps xmm1, xmm3
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm2, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx], xmm2
      vmulps  xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax], xmm2
      vmulss  xmm4, xmm3, xmm5
      vmovaps xmm1, xmm4
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm1, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx+10h], xmm1
      vmulps  xmm0, xmm1, xmm1
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax+4], xmm2
      vmulss  xmm3, xmm4, xmm5
      vmovaps xmm1, xmm3
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm1, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx+20h], xmm1
      vmulps  xmm0, xmm1, xmm1
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax+8], xmm2
      vmulss  xmm4, xmm3, xmm5
      vmovaps xmm1, xmm4
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm1, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx+30h], xmm1
      vmulps  xmm0, xmm1, xmm1
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax+0Ch], xmm2
      vmulss  xmm3, xmm4, xmm5
      vmovaps xmm1, xmm3
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm1, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx+40h], xmm1
      vmulps  xmm0, xmm1, xmm1
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax+10h], xmm2
      vmulss  xmm4, xmm3, xmm5
      vmovaps xmm1, xmm4
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm1, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx+50h], xmm1
      vmulps  xmm0, xmm1, xmm1
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax+14h], xmm2
      vmulss  xmm3, xmm4, xmm5
      vmovaps xmm1, xmm3
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm1, xmm6, 0FAh ; 'ú'
      vshufps xmm1, xmm1, xmm0, 84h ; '„'
      vmovups xmmword ptr [rcx+60h], xmm1
      vmulps  xmm0, xmm1, xmm1
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vmovss  dword ptr [rax+18h], xmm2
      vmulss  xmm3, xmm3, xmm5
    }
    _RCX += 8;
    _RAX += 8;
    --v56;
  }
  while ( v56 );
  _R11 = &v138;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
PMROctreeFactoryNode::PMROctreeFactoryNode
==============
*/
void PMROctreeFactoryNode::PMROctreeFactoryNode(PMROctreeFactoryNode *this, const PMROctreeFactoryConstants *constants, float4 *midpoint, unsigned __int8 depth, PMROctreeFactoryNode *parent)
{
  std::set<unsigned int> *p_m_edges; 
  std::_Tree_node<unsigned int,void *> *v8; 

  this->__vftable = (PMROctreeFactoryNode_vtbl *)&PMROctreeFactoryNode::`vftable';
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rcx+10h], xmm0
  }
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
  v8 = (std::_Tree_node<unsigned int,void *> *)operator new(0x20ui64);
  v8->_Left = v8;
  v8->_Parent = v8;
  v8->_Right = v8;
  *(_WORD *)&v8->_Color = 257;
  p_m_edges->_Mypair._Myval2._Myval2._Myhead = v8;
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
  __asm { vxorps  xmm0, xmm0, xmm0 }
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
  __asm { vmovups ymmword ptr [rcx], ymm0 }
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
  _RAX = &this->m_factoryConstants->m_nodeHalfWidth[this->m_depth];
  __asm
  {
    vmovups xmm2, xmmword ptr [rax]
    vmulps  xmm0, xmm2, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vaddps  xmm2, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rcx+20h], xmm2
    vmovups xmm3, xmmword ptr [rax]
    vmulps  xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm2, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rcx+30h], xmm2
  }
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
  __int64 v11; 
  PMROctreeFactory v12; 

  v11 = -2i64;
  _RBX = result;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+10h]
    vsubps  xmm3, xmm0, xmmword ptr [rdx]
    vmulps  xmm0, xmm3, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vaddps  xmm0, xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rsp+2F8h+midpoint.v], xmm0
  }
  PMROctreeFactory::PMROctreeFactory(&v12, options, (const float4 *)&midpoint);
  PMROctreeFactory::BuildPMROctree(&v12, &midpoint);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+2F8h+midpoint.v]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, [rsp+2F8h+var_2C8]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  *(_DWORD *)&_RBX->m_error = *(_DWORD *)&midpoint.m_error;
  PMROctreeFactoryNode::~PMROctreeFactoryNode(&v12.m_rootNode);
  return _RBX;
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
  int v8; 
  unsigned int *m_inLineSegmentIndices; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  PMROctreeFactoryNode *p_m_rootNode; 
  unsigned int *v14; 
  unsigned __int64 v15; 
  const PMROctreeOptions *v16; 
  const PMROctreeOptions *v18; 
  int v25; 
  PMROctreeFactoryNode *node; 
  DiskPMROctreeNodeSet *outOctreeNodeSetBuffer; 
  unsigned int *outQEdgeBuffer; 
  unsigned int outNodeSetWriteCount; 
  unsigned int outQEdgeWriteCount; 
  DiskPMROctreeNode resulta; 
  unsigned int v34[2]; 
  int v35; 
  char _Buffer[1024]; 

  m_options = this->m_options;
  _R15 = result;
  _R14 = this;
  m_lineSegmentIndexCount = this->m_options->m_lineSegmentIndexCount;
  if ( m_lineSegmentIndexCount )
  {
    m_inLineSegmentIndices = (unsigned int *)m_options->m_inLineSegmentIndices;
    v10 = m_lineSegmentIndexCount;
    v11 = 0i64;
    v12 = 0i64;
    p_m_rootNode = &this->m_rootNode;
    v14 = &m_inLineSegmentIndices[v10];
    v15 = (v10 * 4) >> 2;
    if ( m_inLineSegmentIndices > v14 )
      v15 = 0i64;
    if ( v15 )
    {
      do
      {
        PMROctreeFactoryNode::Insert(p_m_rootNode, *m_inLineSegmentIndices, 1);
        ++v12;
        ++m_inLineSegmentIndices;
      }
      while ( v12 < v15 );
    }
    outNodeSetWriteCount = 0;
    outQEdgeWriteCount = 0;
    PMROctreeFactory::WriteNodeData(_R14, &resulta, 0xFFFFFFFF, 0xFFFFF8u, p_m_rootNode, NULL, &outNodeSetWriteCount, NULL, &outQEdgeWriteCount);
    LODWORD(outQEdgeBuffer) = outQEdgeWriteCount;
    LODWORD(outOctreeNodeSetBuffer) = 8 * outNodeSetWriteCount;
    LODWORD(node) = 1048574;
    j_snprintf(_Buffer, 0x400ui64, "(%zu / %u edges) (%u / %zu nodes) (%u / %zu qEdges) (%u split threshold) (%u max depth) (node + qEdge = %zu bytes)", _R14->m_options->m_lineSegmentIndexCount, node, outOctreeNodeSetBuffer, 8 * (0x1FFFFF - _R14->m_options->m_treeNodeSetPoolOffset), outQEdgeBuffer, 4294967294u - _R14->m_options->m_qEdgePoolOffset, _R14->m_options->m_splitThreshold, _R14->m_options->m_treeDepthCount, 4 * (outQEdgeWriteCount + 32i64 * outNodeSetWriteCount));
    v16 = _R14->m_options;
    if ( _R14->m_options->m_treeNodeSetPoolSize < outNodeSetWriteCount || v16->m_qEdgePoolSize < outQEdgeWriteCount )
    {
      j_snprintf(v16->m_outDebugText, v16->m_debugTextBufferSize, "Edge PMR-Octree exceeds allowable size.  Reduce number of edges or increase splitting threshold with \"-edgeOctreeThreshold [threshold]\". -- %s", _Buffer);
      LOBYTE(v35) = 1;
    }
    else
    {
      *(_QWORD *)v34 = 0i64;
      _RAX = PMROctreeFactory::WriteNodeData(_R14, &resulta, 0xFFFFFFFF, 0xFFFFF8u, &_R14->m_rootNode, &v16->m_outTreeNodeSetPool[v16->m_treeNodeSetPoolOffset], v34, &v16->m_outQEdgePool[v16->m_qEdgePoolOffset], &v34[1]);
      v18 = _R14->m_options;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups [rsp+4E0h+var_468], xmm0
      }
      LOBYTE(v35) = 0;
      if ( v18->m_nodeBoundWidthPoolSize )
      {
        _RDX = 0i64;
        do
        {
          _RDX += 16i64;
          v18->m_outNodeBoundingRadiusSq[v11] = _R14->m_constants.m_nodeBoundingRadiusSq[v11];
          ++v11;
          _RAX = v18->m_outNodeHalfWidths;
          __asm
          {
            vmovups xmm0, xmmword ptr [r14+rdx+80h]
            vmovdqa xmmword ptr [rax+rdx-10h], xmm0
          }
          v18 = _R14->m_options;
        }
        while ( v11 < _R14->m_options->m_nodeBoundWidthPoolSize );
      }
      j_snprintf(v18->m_outDebugText, v18->m_debugTextBufferSize, (const char *const)&queryFormat, _Buffer);
    }
    __asm
    {
      vmovups xmm0, [rsp+4E0h+var_468]
      vmovsd  xmm1, qword ptr [rbp+3E0h+var_458]
    }
    v25 = v35;
    __asm
    {
      vmovups xmmword ptr [r15], xmm0
      vmovsd  qword ptr [r15+10h], xmm1
    }
    *(_DWORD *)&_R15->m_error = v25;
  }
  else
  {
    j_snprintf(m_options->m_outDebugText, m_options->m_debugTextBufferSize, "Zero line segments provided.");
    __asm
    {
      vmovups xmm0, [rsp+4E0h+var_468]
      vmovsd  xmm1, qword ptr [rbp+3E0h+var_458]
      vmovups xmmword ptr [r15], xmm0
    }
    LOBYTE(v35) = 1;
    v8 = v35;
    __asm { vmovsd  qword ptr [r15+10h], xmm1 }
    *(_DWORD *)&_R15->m_error = v8;
  }
  return _R15;
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
  char v60; 
  bool v61; 
  bool v83; 
  double v98; 
  double v99; 
  double v100; 
  double v101; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovups xmm0, xmmword ptr [rcx+10h]
    vsubps  xmm3, xmm0, xmmword ptr [rcx]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm3, xmm1
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 512, ASSERT_TYPE_SANITY, "( !Float4IsNaN( dir ) )", (const char *)&queryFormat, "!Float4IsNaN( dir )") )
    __debugbreak();
  __asm
  {
    vmulps  xmm0, xmm7, xmmword ptr cs:g_worldZ.v
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm6, xmm2, xmm2
    vandps  xmm0, xmm6, xmm10
    vcomiss xmm0, cs:__real@3f7fbe77
    vmulps  xmm0, xmm7, xmmword ptr cs:g_worldX.v
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm6, xmm2, xmm2
    vmulps  xmm1, xmm7, xmmword ptr [rdi]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
    vxorps  xmm8, xmm8, xmm8
    vsubps  xmm2, xmm8, xmm0
    vmulps  xmm0, xmm2, xmm7
    vaddps  xmm3, xmm0, xmmword ptr [rdi]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm9, xmm3, xmm1
    vcmpneqps xmm0, xmm9, xmm9
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 534, ASSERT_TYPE_SANITY, "( !Float4IsNaN( adjacentProj ) )", (const char *)&queryFormat, "!Float4IsNaN( adjacentProj )") )
    __debugbreak();
  __asm
  {
    vsubps  xmm0, xmm8, xmm6
    vmulps  xmm0, xmm0, xmm7
    vaddps  xmm3, xmm0, xmmword ptr [rbx]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm8, xmm3, xmm1
    vcmpneqps xmm0, xmm8, xmm8
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 542, ASSERT_TYPE_SANITY, "( !Float4IsNaN( referenceProj ) )", (const char *)&queryFormat, "!Float4IsNaN( referenceProj )") )
    __debugbreak();
  __asm
  {
    vmulps  xmm0, xmm8, xmm9
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vmovss  xmm1, cs:__real@bf800000; min
    vhaddps xmm0, xmm2, xmm2; val
    vmovss  xmm2, cs:__real@3f800000; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, xmm0
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !(v60 | v61) )
  {
    __asm
    {
      vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
      vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm0
      vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
      vshufps xmm2, xmm8, xmm8, 0D2h ; 'Ò'
      vmulps  xmm0, xmm2, xmm1
      vsubps  xmm3, xmm3, xmm0
      vmulps  xmm1, xmm3, xmm7
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm1, xmm2, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( v60 )
      __asm { vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000 }
  }
  __asm
  {
    vmulps  xmm0, xmm9, xmm7
    vmovsd  xmm9, cs:__real@3f50624de0000000
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !(v60 | v61) )
  {
    __asm
    {
      vmovsd  [rsp+0B8h+var_78], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0B8h+var_80], xmm0
    }
    v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 569, ASSERT_TYPE_ASSERT, "( I_fabs( dot ) ) <= ( 0.001f )", "%s <= %s\n\t%g, %g", "I_fabs( dot )", "EQUAL_EPSILON", v98, v100);
    v60 = 0;
    v61 = !v83;
    if ( v83 )
      __debugbreak();
  }
  __asm
  {
    vmulps  xmm0, xmm8, xmm7
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vandps  xmm0, xmm0, xmm10
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( !(v60 | v61) )
  {
    __asm
    {
      vmovsd  [rsp+0B8h+var_78], xmm9
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0B8h+var_80], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 576, ASSERT_TYPE_ASSERT, "( I_fabs( dot ) ) <= ( 0.001f )", "%s <= %s\n\t%g, %g", "I_fabs( dot )", "EQUAL_EPSILON", v99, v101) )
      __debugbreak();
  }
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v102;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
EdgeAdjacentFaceNormalUnpack
==============
*/

void __fastcall EdgeAdjacentFaceNormalUnpack(const DiskStaticLineSegment *r_edge, double referenceAngle, float4 *r_outAdjacentFaceNormal)
{
  int v81; 
  int v82; 
  int v83; 
  float4 v84; 
  float4 v85; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovups xmm0, xmmword ptr [rcx+10h]
    vsubps  xmm3, xmm0, xmmword ptr [rcx]
    vmovaps xmm9, xmm1
    vmulps  xmm2, xmm3, xmm3
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm3, xmm1
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  _RBX = r_outAdjacentFaceNormal;
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 602, ASSERT_TYPE_SANITY, "( !Float4IsNaN( dir ) )", (const char *)&queryFormat, "!Float4IsNaN( dir )") )
    __debugbreak();
  __asm
  {
    vmulps  xmm0, xmm7, xmmword ptr cs:g_worldZ.v
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm3, xmm2, xmm2
    vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f7fbe77
    vmulps  xmm0, xmm7, xmmword ptr cs:g_worldX.v
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm3, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm0, xmm2, xmm7
    vaddps  xmm3, xmm0, xmmword ptr [rax]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm8, xmm3, xmm1
    vcmpneqps xmm0, xmm8, xmm8
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 621, ASSERT_TYPE_SANITY, "( !Float4IsNaN( referenceProj ) )", (const char *)&queryFormat, "!Float4IsNaN( referenceProj )") )
    __debugbreak();
  __asm
  {
    vmulps  xmm0, xmm7, xmm7
    vinsertps xmm1, xmm0, xmm0, 8
    vmovaps xmm0, xmm9
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm0, xmm0, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vhaddps xmm6, xmm1, xmm1
  }
  Float4SinCos(r_edge->endPoints, &v84, &v85);
  __asm
  {
    vhaddps xmm0, xmm6, xmm6
    vrsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm7
    vmulps  xmm3, xmm2, [rsp+0B8h+var_78]
    vblendps xmm0, xmm3, [rsp+0B8h+var_68], 8
    vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm8
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm3, xmm4, xmm1
    vmovss  [rsp+0B8h+var_88], xmm3
    vmovups xmmword ptr [rbx], xmm3
  }
  if ( (v81 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 631, ASSERT_TYPE_ASSERT, "(!IS_NAN( Float4ExtractX( r_outAdjacentFaceNormal ) ))", (const char *)&queryFormat, "!IS_NAN( Float4ExtractX( r_outAdjacentFaceNormal ) )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v82 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 632, ASSERT_TYPE_ASSERT, "(!IS_NAN( Float4ExtractY( r_outAdjacentFaceNormal ) ))", (const char *)&queryFormat, "!IS_NAN( Float4ExtractY( r_outAdjacentFaceNormal ) )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0B8h+var_88], xmm0
  }
  if ( (v83 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 633, ASSERT_TYPE_ASSERT, "(!IS_NAN( Float4ExtractZ( r_outAdjacentFaceNormal ) ))", (const char *)&queryFormat, "!IS_NAN( Float4ExtractZ( r_outAdjacentFaceNormal ) )") )
    __debugbreak();
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
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
  const float4 *endPoints; 
  int m_depth; 
  unsigned __int64 Mysize; 
  const PMROctreeOptions *m_options; 
  int m_treeDepthCount; 
  unsigned __int64 m_splitThreshold; 
  int v23; 
  int v24; 
  PMROctreeFactoryNode **m_children; 
  __int64 v26; 
  unsigned int _Val; 
  std::pair<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int> > >,bool> result; 

  m_factoryConstants = this->m_factoryConstants;
  v7 = edgeIndex;
  _Val = edgeIndex;
  _RDX = &this->m_extentMax;
  endPoints = m_factoryConstants->m_options->m_inLineSegments[v7].endPoints;
  if ( this->m_extentCalculated )
  {
    _RCX = &this->m_extentMin;
  }
  else
  {
    _RAX = &m_factoryConstants->m_nodeHalfWidth[this->m_depth];
    _RCX = &this->m_extentMin;
    __asm
    {
      vmovups xmm2, xmmword ptr [rax]
      vmulps  xmm0, xmm2, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
      vaddps  xmm2, xmm0, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rcx], xmm2
      vmovups xmm3, xmmword ptr [rax]
      vmulps  xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vaddps  xmm2, xmm0, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rdx], xmm2
    }
    this->m_extentCalculated = 1;
  }
  if ( Float4AABBLineSegmentIntersect(_RCX, _RDX, endPoints, endPoints + 1) )
  {
    if ( this->m_isLeaf )
    {
      m_depth = this->m_depth;
      Mysize = this->m_edges._Mypair._Myval2._Myval2._Mysize;
      m_options = this->m_factoryConstants->m_options;
      m_treeDepthCount = m_options->m_treeDepthCount;
      m_splitThreshold = m_options->m_splitThreshold;
      v23 = m_treeDepthCount - 1;
      if ( (unsigned __int8)m_depth >= (unsigned __int8)m_treeDepthCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 138, ASSERT_TYPE_ASSERT, "( m_depth ) < ( m_factoryConstants->m_options->m_treeDepthCount )", "%s < %s\n\t%i, %i", "m_depth", "m_factoryConstants->m_options->m_treeDepthCount", this->m_depth, m_options->m_treeDepthCount) )
        __debugbreak();
      if ( !maySplit || m_splitThreshold > Mysize || v23 <= m_depth )
      {
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::insert<0,0>(&this->m_edges, &result, &_Val);
        return;
      }
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::insert<0,0>(&this->m_edges, &result, &_Val);
      PMROctreeFactoryNode::Split(this);
      if ( !this->m_edges._Mypair._Myval2._Myval2._Mysize )
        return;
      v24 = 143;
      goto LABEL_22;
    }
    m_children = this->m_children;
    if ( !this->m_children[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 152, ASSERT_TYPE_ASSERT, "(m_children[0] != nullptr)", (const char *)&queryFormat, "m_children[0] != nullptr") )
      __debugbreak();
    v26 = 8i64;
    do
    {
      PMROctreeFactoryNode::Insert(*m_children++, edgeIndex, maySplit);
      --v26;
    }
    while ( v26 );
    if ( this->m_edges._Mypair._Myval2._Myval2._Mysize )
    {
      v24 = 157;
LABEL_22:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", v24, ASSERT_TYPE_ASSERT, "(m_edges.empty())", (const char *)&queryFormat, "m_edges.empty()") )
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
  _R10 = &this->m_extentMin;
  if ( this->m_extentCalculated )
  {
    _RAX = &this->m_extentMax;
  }
  else
  {
    _RAX = &this->m_factoryConstants->m_nodeHalfWidth[this->m_depth];
    __asm
    {
      vmovups xmm2, xmmword ptr [rax]
      vmulps  xmm0, xmm2, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
      vaddps  xmm2, xmm0, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [r10], xmm2
      vmovups xmm3, xmmword ptr [rax]
      vmulps  xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vaddps  xmm2, xmm0, xmmword ptr [rcx+10h]
    }
    _RAX = &this->m_extentMax;
    this->m_extentCalculated = 1;
    __asm { vmovups xmmword ptr [rax], xmm2 }
  }
  return Float4AABBLineSegmentIntersect(&this->m_extentMin, _RAX, (const float4 *)lineSegment, &(*lineSegment)[1]);
}

/*
==============
PMROctreeFactory::MidpointToGridIndex
==============
*/
void PMROctreeFactory::MidpointToGridIndex(PMROctreeFactory *this, unsigned __int8 depth, const float4 *midpoint, unsigned __int16 *outGridIndex)
{
  unsigned __int16 v23; 
  unsigned __int16 v25; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RSI = midpoint;
  _RDI = this;
  if ( !outGridIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 445, ASSERT_TYPE_ASSERT, "(outGridIndex)", (const char *)&queryFormat, "outGridIndex") )
    __debugbreak();
  _RCX = 2 * (depth + 9i64);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+rcx*8]
    vmulps  xmm3, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
    vmovups xmm0, xmmword ptr [rsi]
    vsubps  xmm2, xmm0, xmmword ptr [rax]
    vsubps  xmm1, xmm2, xmmword ptr [rdi+rcx*8]
    vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vdivps  xmm2, xmm1, xmm3
    vaddps  xmm1, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vandnps xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vmaxps  xmm2, xmm2, xmm1
    vcvttps2dq xmm6, xmm2
    vpextrd rcx, xmm6, 0; val
  }
  v23 = truncate_cast<unsigned short,unsigned int>(_RCX);
  __asm { vpextrd rcx, xmm6, 1; val }
  *outGridIndex = v23;
  v25 = truncate_cast<unsigned short,unsigned int>(_RCX);
  __asm { vpextrd rcx, xmm6, 2; val }
  outGridIndex[1] = v25;
  outGridIndex[2] = truncate_cast<unsigned short,unsigned int>(_RCX);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
PMROctreeFactoryNode::Split
==============
*/
void PMROctreeFactoryNode::Split(PMROctreeFactoryNode *this)
{
  unsigned __int8 v5; 
  unsigned __int64 v8; 
  PMROctreeFactoryNode **m_children; 
  PMROctreeFactoryNode **v10; 
  PMROctreeFactoryNode *v13; 
  std::set<unsigned int> *p_m_edges; 
  std::_Tree_node<unsigned int,void *> *Myhead; 
  std::_Tree_node<unsigned int,void *> *Left; 
  PMROctreeFactoryNode **v17; 
  __int64 v18; 
  std::_Tree_node<unsigned int,void *> *Right; 
  std::_Tree_node<unsigned int,void *> *i; 
  std::_Tree_node<unsigned int,void *> *j; 
  float4 v24[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  this->m_isLeaf = 0;
  v5 = this->m_depth + 1;
  __asm
  {
    vmovups xmm1, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vmulps  xmm7, xmm1, xmmword ptr [rax+rdx*8]
  }
  v8 = 0i64;
  m_children = this->m_children;
  v10 = this->m_children;
  do
  {
    __asm
    {
      vmulps  xmm0, xmm7, xmmword ptr [rbx+rax]
      vaddps  xmm6, xmm0, xmmword ptr [rsi+10h]
    }
    v13 = (PMROctreeFactoryNode *)operator new(0xB0ui64);
    if ( v13 )
    {
      __asm { vmovdqa [rsp+98h+var_58], xmm6 }
      PMROctreeFactoryNode::PMROctreeFactoryNode(v13, this->m_factoryConstants, v24, v5, this);
    }
    *v10++ = v13;
    v8 += 16i64;
  }
  while ( v8 < 0x80 );
  p_m_edges = &this->m_edges;
  Myhead = this->m_edges._Mypair._Myval2._Myval2._Myhead;
  Left = Myhead->_Left;
  while ( Left != Myhead )
  {
    v17 = m_children;
    v18 = 8i64;
    do
    {
      PMROctreeFactoryNode::Insert(*v17++, Left->_Myval, 0);
      --v18;
    }
    while ( v18 );
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
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
PMROctreeFactory::WriteNodeData
==============
*/
DiskPMROctreeNode *PMROctreeFactory::WriteNodeData(PMROctreeFactory *this, DiskPMROctreeNode *result, unsigned int parentNodeIndex, unsigned int nodeIndex, const PMROctreeFactoryNode *node, DiskPMROctreeNodeSet *outOctreeNodeSetBuffer, unsigned int *outNodeSetWriteCount, unsigned int *outQEdgeBuffer, unsigned int *outQEdgeWriteCount)
{
  unsigned __int64 v13; 
  bool m_isLeaf; 
  PMROctreeFactoryNode *m_parent; 
  bool v16; 
  DiskPMROctreeFlags v17; 
  unsigned __int16 v32; 
  unsigned __int16 v34; 
  unsigned __int16 v36; 
  unsigned int v38; 
  std::_Tree_node<unsigned int,void *> *Myhead; 
  std::_Tree_node<unsigned int,void *> *Left; 
  std::_Tree_node<unsigned int,void *> *Right; 
  std::_Tree_node<unsigned int,void *> *i; 
  std::_Tree_node<unsigned int,void *> *v43; 
  DiskPMROctreeNode *v44; 
  unsigned __int64 v46; 
  __int64 v49; 
  PMROctreeFactoryNode **v50; 
  DiskPMROctreeNodeSet *v51; 
  unsigned int *v52; 
  bool v53; 
  PMROctreeFactoryNode **m_children; 
  DiskPMROctreeNode resulta; 

  _RBX = node;
  _RBP = this;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 350, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !outNodeSetWriteCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 351, ASSERT_TYPE_ASSERT, "(outNodeSetWriteCount)", (const char *)&queryFormat, "outNodeSetWriteCount") )
    __debugbreak();
  if ( !outQEdgeWriteCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 352, ASSERT_TYPE_ASSERT, "(outQEdgeWriteCount)", (const char *)&queryFormat, "outQEdgeWriteCount") )
    __debugbreak();
  v13 = 0i64;
  if ( (outOctreeNodeSetBuffer == NULL) != (outQEdgeBuffer == NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 356, ASSERT_TYPE_ASSERT, "((outOctreeNodeSetBuffer == nullptr) == (outQEdgeBuffer == nullptr))", (const char *)&queryFormat, "(outOctreeNodeSetBuffer == nullptr) == (outQEdgeBuffer == nullptr)") )
    __debugbreak();
  m_isLeaf = node->m_isLeaf;
  m_parent = node->m_parent;
  v53 = m_isLeaf;
  v16 = m_isLeaf && !node->m_edges._Mypair._Myval2._Myval2._Mysize;
  v17 = 0;
  result->flags = 0;
  if ( !m_parent )
  {
    result->flags = ROOT_NODE;
    v17 = ROOT_NODE;
  }
  if ( m_isLeaf )
  {
    v17 |= 2u;
    result->flags = v17;
  }
  if ( v16 )
    result->flags = v17 | 1;
  if ( outOctreeNodeSetBuffer )
  {
    _RCX = 2 * ((unsigned __int8)node->m_depth + 9i64);
    __asm
    {
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovups xmm0, xmmword ptr [rbp+rcx*8+0]
      vmulps  xmm3, xmm0, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
      vmovups xmm0, xmmword ptr [rbx+10h]
      vsubps  xmm2, xmm0, xmmword ptr [rax]
      vsubps  xmm1, xmm2, xmmword ptr [rbp+rcx*8+0]
      vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vdivps  xmm2, xmm1, xmm3
      vaddps  xmm1, xmm2, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
      vandnps xmm2, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vmaxps  xmm2, xmm2, xmm1
      vcvttps2dq xmm6, xmm2
      vpextrd rcx, xmm6, 0; val
    }
    v32 = truncate_cast<unsigned short,unsigned int>(_RCX);
    __asm { vpextrd rcx, xmm6, 1; val }
    result->uniformGridIndex[0] = v32;
    v34 = truncate_cast<unsigned short,unsigned int>(_RCX);
    __asm { vpextrd rcx, xmm6, 2; val }
    result->uniformGridIndex[1] = v34;
    v36 = truncate_cast<unsigned short,unsigned int>(_RCX);
    m_isLeaf = v53;
    __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
    result->uniformGridIndex[2] = v36;
    result->depth = node->m_depth;
  }
  if ( m_isLeaf )
  {
    if ( outOctreeNodeSetBuffer )
    {
      v38 = *outQEdgeWriteCount;
      result->parentNodeIndex = truncate_cast<unsigned int,unsigned __int64>(_RBP->m_options->m_qEdgePoolOffset + *outQEdgeWriteCount);
      Myhead = node->m_edges._Mypair._Myval2._Myval2._Myhead;
      Left = Myhead->_Left;
      while ( Left != Myhead )
      {
        if ( (unsigned int)((__int64)((__int64)outQEdgeBuffer + 4i64 * *outQEdgeWriteCount - (unsigned __int64)_RBP->m_options->m_outQEdgePool) >> 2) >= LODWORD(_RBP->m_options->m_qEdgePoolOffset) + LODWORD(_RBP->m_options->m_qEdgePoolSize) )
        {
          LODWORD(v52) = LODWORD(_RBP->m_options->m_qEdgePoolOffset) + LODWORD(_RBP->m_options->m_qEdgePoolSize);
          LODWORD(v51) = (__int64)((__int64)outQEdgeBuffer + 4i64 * *outQEdgeWriteCount - (unsigned __int64)_RBP->m_options->m_outQEdgePool) >> 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( ((outQEdgeBuffer + *outQEdgeWriteCount) - m_options->m_outQEdgePool) ) < (unsigned)( (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize) )", "((outQEdgeBuffer + *outQEdgeWriteCount) - m_options->m_outQEdgePool) doesn't index (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize)\n\t%i not in [0, %i)", v51, v52) )
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
          v43 = Right->_Left;
          for ( Left = Left->_Right; !v43->_Isnil; v43 = v43->_Left )
            Left = v43;
        }
      }
      v44 = result;
      result->childNodeSetIndex = *outQEdgeWriteCount - v38;
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
    result->childNodeSetIndex = truncate_cast<unsigned int,unsigned __int64>(_RBP->m_options->m_treeNodeSetPoolOffset + *outNodeSetWriteCount);
    _R15 = &outOctreeNodeSetBuffer[(unsigned __int64)*outNodeSetWriteCount];
    if ( (unsigned int)(_R15 - _RBP->m_options->m_outTreeNodeSetPool) >= LODWORD(_RBP->m_options->m_qEdgePoolOffset) + LODWORD(_RBP->m_options->m_qEdgePoolSize) )
    {
      LODWORD(v51) = _R15 - _RBP->m_options->m_outTreeNodeSetPool;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\pmr_octree.cpp", 420, ASSERT_TYPE_ASSERT, "(unsigned)( (childNodeSet - m_options->m_outTreeNodeSetPool) ) < (unsigned)( (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize) )", "(childNodeSet - m_options->m_outTreeNodeSetPool) doesn't index (m_options->m_qEdgePoolOffset + m_options->m_qEdgePoolSize)\n\t%i not in [0, %i)", v51, LODWORD(_RBP->m_options->m_qEdgePoolOffset) + LODWORD(_RBP->m_options->m_qEdgePoolSize)) )
        __debugbreak();
    }
    ++*outNodeSetWriteCount;
    do
    {
      v46 = v13 + 8 * result->childNodeSetIndex;
      if ( v46 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v46, "unsigned", v13 + 8 * result->childNodeSetIndex) )
        __debugbreak();
      _RAX = PMROctreeFactory::WriteNodeData(this, &resulta, nodeIndex, v46, *m_children++, outOctreeNodeSetBuffer, outNodeSetWriteCount, outQEdgeBuffer, outQEdgeWriteCount);
      ++v13;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [r15], xmm0
      }
      _R15 = (DiskPMROctreeNodeSet *)((char *)_R15 + 16);
    }
    while ( v13 < 8 );
    return result;
  }
  else
  {
    ++*outNodeSetWriteCount;
    v49 = 8i64;
    v50 = node->m_children;
    do
    {
      PMROctreeFactory::WriteNodeData(this, &resulta, 0xFFFFFFFF, 0xFFFFFFFF, *v50++, NULL, outNodeSetWriteCount, outQEdgeBuffer, outQEdgeWriteCount);
      --v49;
    }
    while ( v49 );
    return result;
  }
  return v44;
}

