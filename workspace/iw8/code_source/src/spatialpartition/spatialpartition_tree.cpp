/*
==============
SpatialPartition_Tree_FrustumIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Tree_FrustumIterator::Advance(SpatialPartition_Tree_FrustumIterator *this)
{
  return ?Advance@SpatialPartition_Tree_FrustumIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Tree_SphereIterator::Init
==============
*/

void __fastcall SpatialPartition_Tree_SphereIterator::Init(SpatialPartition_Tree_SphereIterator *this, const SpatialPartition_Tree *tree, const vec3_t *centre, float radius)
{
  ?Init@SpatialPartition_Tree_SphereIterator@@QEAAXPEBUSpatialPartition_Tree@@AEBTvec3_t@@M@Z(this, tree, centre, radius);
}

/*
==============
SpatialPartition_Tree_RayIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Tree_RayIterator::Advance(SpatialPartition_Tree_RayIterator *this)
{
  return ?Advance@SpatialPartition_Tree_RayIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Tree_RayIterator::Init
==============
*/

void __fastcall SpatialPartition_Tree_RayIterator::Init(SpatialPartition_Tree_RayIterator *this, const SpatialPartition_Tree *tree, const vec3_t *start, const vec3_t *dir)
{
  ?Init@SpatialPartition_Tree_RayIterator@@QEAAXPEBUSpatialPartition_Tree@@AEBTvec3_t@@1@Z(this, tree, start, dir);
}

/*
==============
SpatialPartition_Tree_FrustumIterator::Init
==============
*/

void __fastcall SpatialPartition_Tree_FrustumIterator::Init(SpatialPartition_Tree_FrustumIterator *this, const SpatialPartition_Tree *tree, const vec4_t *planes, unsigned int planeCount)
{
  ?Init@SpatialPartition_Tree_FrustumIterator@@QEAAXPEBUSpatialPartition_Tree@@PEBTvec4_t@@I@Z(this, tree, planes, planeCount);
}

/*
==============
SpatialPartition_Tree_SphereIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Tree_SphereIterator::Advance(SpatialPartition_Tree_SphereIterator *this)
{
  return ?Advance@SpatialPartition_Tree_SphereIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Tree_AABBIterator::Init
==============
*/

void __fastcall SpatialPartition_Tree_AABBIterator::Init(SpatialPartition_Tree_AABBIterator *this, const SpatialPartition_Tree *tree, const Bounds *bounds)
{
  ?Init@SpatialPartition_Tree_AABBIterator@@QEAAXPEBUSpatialPartition_Tree@@AEBUBounds@@@Z(this, tree, bounds);
}

/*
==============
SpatialPartition_Tree_SegmentIterator::Init
==============
*/

void __fastcall SpatialPartition_Tree_SegmentIterator::Init(SpatialPartition_Tree_SegmentIterator *this, const SpatialPartition_Tree *tree, const vec3_t *start, const vec3_t *end)
{
  ?Init@SpatialPartition_Tree_SegmentIterator@@QEAAXPEBUSpatialPartition_Tree@@AEBTvec3_t@@1@Z(this, tree, start, end);
}

/*
==============
SpatialPartition_Tree_SegmentIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Tree_SegmentIterator::Advance(SpatialPartition_Tree_SegmentIterator *this)
{
  return ?Advance@SpatialPartition_Tree_SegmentIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_DrawTree
==============
*/

void __fastcall SpatialPartition_DrawTree(const LocalClientNum_t localClientNum, const SpatialPartition_Tree *tree, unsigned int maxDepth, bool drawBounds, void (__fastcall *leafGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), bool (__fastcall *leafGetItemValid)(const LocalClientNum_t, unsigned int))
{
  ?SpatialPartition_DrawTree@@YAXW4LocalClientNum_t@@PEBUSpatialPartition_Tree@@I_NP6AX0IAEATvec3_t@@@ZP6A_N0I@Z@Z(localClientNum, tree, maxDepth, drawBounds, leafGetOrigin, leafGetItemValid);
}

/*
==============
SpatialPartition_Tree_AABBIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Tree_AABBIterator::Advance(SpatialPartition_Tree_AABBIterator *this)
{
  return ?Advance@SpatialPartition_Tree_AABBIterator@@QEAA_NXZ(this);
}

/*
==============
SpatialPartition_Tree_AABBIterator::Advance
==============
*/
bool SpatialPartition_Tree_AABBIterator::Advance(SpatialPartition_Tree_AABBIterator *this)
{
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v4; 
  __m256i v14; 

  _RBP = (unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64;
  m_spatialTree = this->m_spatialTree;
  if ( m_spatialTree )
  {
    m_alwaysIndex = this->m_alwaysIndex;
    if ( m_alwaysIndex != m_spatialTree->alwaysListLength )
    {
      v4 = m_alwaysIndex + 1;
      this->m_alwaysIndex = v4;
      if ( v4 != m_spatialTree->alwaysListLength )
        return 1;
    }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups [rbp+130h+var_F0], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups [rbp+130h+var_D0], ymm1
    vmovups ymm1, ymmword ptr [rcx+60h]
    vmovups [rbp+130h+var_B0], ymm0
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovups [rbp+130h+var_90], ymm1
    vmovups ymm1, ymmword ptr [rcx+0A0h]
  }
  *(_QWORD *)_RBP = _RBP + 64;
  *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 160;
  *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 192;
  *(_QWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0ui64) + 224;
  __asm
  {
    vmovups [rbp+130h+var_70], ymm0
    vmovups ymm0, [rbp+130h+var_130]
    vmovups [rbp+130h+var_50], ymm1
    vmovups xmm1, [rbp+130h+var_110]
    vmovups [rbp+130h+var_10], xmm1
    vmovups [rbp+130h+var_30], ymm0
  }
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_fb3f76ad0d0a160bfd733303fbc50197_>(this, (SpatialPartition_Tree_Internal::QueryAABB::__l2::<lambda_fb3f76ad0d0a160bfd733303fbc50197> *)(_RBP + 256));
}

/*
==============
SpatialPartition_Tree_FrustumIterator::Advance
==============
*/
bool SpatialPartition_Tree_FrustumIterator::Advance(SpatialPartition_Tree_FrustumIterator *this)
{
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v3; 
  SpatialPartition_Tree_Internal::QueryFrustum::__l2::<lambda_a71fca8405739fbd5429819304a43f8d> Intersect; 

  m_spatialTree = this->m_spatialTree;
  if ( m_spatialTree )
  {
    m_alwaysIndex = this->m_alwaysIndex;
    if ( m_alwaysIndex != m_spatialTree->alwaysListLength )
    {
      v3 = m_alwaysIndex + 1;
      this->m_alwaysIndex = v3;
      if ( v3 != m_spatialTree->alwaysListLength )
        return 1;
    }
  }
  Intersect.data = (const SpatialPartition_Tree_Internal::FrustumData **)this->m_planeData;
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_a71fca8405739fbd5429819304a43f8d_>(this, (SpatialPartition_Tree_Internal::QueryFrustum::__l2::<lambda_a71fca8405739fbd5429819304a43f8d>)&Intersect);
}

/*
==============
SpatialPartition_Tree_RayIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Tree_RayIterator::Advance(SpatialPartition_Tree_RayIterator *this, double _XMM1_8)
{
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v5; 
  __m256i v17; 

  _RBP = (SpatialPartition_Tree_Internal::QuerySegment::__l2::<lambda_e9a7a47b0a0ff84d4cb18ca88c16863c> *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64);
  m_spatialTree = this->m_spatialTree;
  if ( m_spatialTree )
  {
    m_alwaysIndex = this->m_alwaysIndex;
    if ( m_alwaysIndex != m_spatialTree->alwaysListLength )
    {
      v5 = m_alwaysIndex + 1;
      this->m_alwaysIndex = v5;
      if ( v5 != m_spatialTree->alwaysListLength )
        return 1;
    }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups [rbp+180h+var_140], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups [rbp+180h+var_100], ymm1
    vmovups ymm1, ymmword ptr [rcx+60h]
    vmovups [rbp+180h+var_C0], ymm0
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovups [rbp+180h+var_120], ymm1
    vmovups ymm1, ymmword ptr [rcx+0A0h]
    vmovups [rbp+180h+var_E0], ymm0
    vmovups ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
    vmovups [rbp+180h+var_A0], ymm1
    vxorps  xmm1, xmm1, xmm1
  }
  _RBP->startX = (const __m256 *)&_RBP[1];
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 160;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 192;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 224;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 256;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 288;
  __asm
  {
    vmovups [rbp+180h+var_60], ymm0
    vmovups ymm0, [rbp+180h+var_180]
    vmovups [rbp+180h+var_80], ymm1
    vmovups ymm1, [rbp+180h+var_160]
    vmovups [rbp+180h+var_20], ymm1
    vmovups [rbp+180h+var_40], ymm0
  }
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_e9a7a47b0a0ff84d4cb18ca88c16863c_>(this, _RBP + 5);
}

/*
==============
SpatialPartition_Tree_SegmentIterator::Advance
==============
*/

bool __fastcall SpatialPartition_Tree_SegmentIterator::Advance(SpatialPartition_Tree_SegmentIterator *this, double _XMM1_8)
{
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v5; 
  __m256i v17; 

  _RBP = (SpatialPartition_Tree_Internal::QuerySegment::__l2::<lambda_f36b0fa1ea311a7bdcbc0c0af636ac00> *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64);
  m_spatialTree = this->m_spatialTree;
  if ( m_spatialTree )
  {
    m_alwaysIndex = this->m_alwaysIndex;
    if ( m_alwaysIndex != m_spatialTree->alwaysListLength )
    {
      v5 = m_alwaysIndex + 1;
      this->m_alwaysIndex = v5;
      if ( v5 != m_spatialTree->alwaysListLength )
        return 1;
    }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups [rbp+180h+var_140], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups [rbp+180h+var_100], ymm1
    vmovups ymm1, ymmword ptr [rcx+60h]
    vmovups [rbp+180h+var_C0], ymm0
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovups [rbp+180h+var_120], ymm1
    vmovups ymm1, ymmword ptr [rcx+0A0h]
    vmovups [rbp+180h+var_E0], ymm0
    vmovups ymm0, cs:__ymm@3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
    vmovups [rbp+180h+var_A0], ymm1
    vxorps  xmm1, xmm1, xmm1
  }
  _RBP->startX = (const __m256 *)&_RBP[1];
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 160;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 192;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 224;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 256;
  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = ((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0ui64) + 288;
  __asm
  {
    vmovups [rbp+180h+var_60], ymm0
    vmovups ymm0, [rbp+180h+var_180]
    vmovups [rbp+180h+var_80], ymm1
    vmovups ymm1, [rbp+180h+var_160]
    vmovups [rbp+180h+var_20], ymm1
    vmovups [rbp+180h+var_40], ymm0
  }
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_f36b0fa1ea311a7bdcbc0c0af636ac00_>(this, _RBP + 5);
}

/*
==============
SpatialPartition_Tree_SphereIterator::Advance
==============
*/
bool SpatialPartition_Tree_SphereIterator::Advance(SpatialPartition_Tree_SphereIterator *this)
{
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v4; 
  __m256i v11; 

  _RBP = (_QWORD *)((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64);
  m_spatialTree = this->m_spatialTree;
  if ( m_spatialTree )
  {
    m_alwaysIndex = this->m_alwaysIndex;
    if ( m_alwaysIndex != m_spatialTree->alwaysListLength )
    {
      v4 = m_alwaysIndex + 1;
      this->m_alwaysIndex = v4;
      if ( v4 != m_spatialTree->alwaysListLength )
        return 1;
    }
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups [rbp+0A0h+var_80], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
  }
  *_RBP = _RBP + 4;
  *(_QWORD *)(((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64) + 64;
  *(_QWORD *)(((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  __asm
  {
    vmovups [rbp+0A0h+var_60], ymm1
    vmovups ymm1, ymmword ptr [rcx+60h]
    vmovups [rbp+0A0h+var_40], ymm0
    vmovups ymm0, [rbp+0A0h+var_A0]
    vmovups [rbp+0A0h+var_A0], ymm0
    vmovups [rbp+0A0h+var_20], ymm1
  }
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_e710993fadbef1a791f02ee9cd8124ec_>(this, (SpatialPartition_Tree_Internal::QuerySphere::__l2::<lambda_e710993fadbef1a791f02ee9cd8124ec> *)((unsigned __int64)&v11 & 0xFFFFFFFFFFFFFFE0ui64));
}

/*
==============
SpatialPartition_Tree_AABBIterator::Init
==============
*/
void SpatialPartition_Tree_AABBIterator::Init(SpatialPartition_Tree_AABBIterator *this, const SpatialPartition_Tree *tree, const Bounds *bounds)
{
  if ( tree )
  {
    __asm
    {
      vmovaps [rsp+38h+var_18], xmm6
      vmovaps [rsp+38h+var_28], xmm7
      vmovaps [rsp+38h+var_38], xmm8
    }
    if ( tree->treeSize )
    {
      this->m_stack[0] = (const SpatialPartition_TreeNode *)tree->tree;
      this->m_stackDepth = 1;
    }
    this->m_currentNode = NULL;
    this->m_spatialTree = tree;
    this->m_alwaysIndex = -1;
    __asm
    {
      vmovss  xmm1, dword ptr [r8+8]
      vmovss  xmm0, dword ptr [r8+14h]
      vmovss  xmm5, dword ptr [r8]
      vsubss  xmm6, xmm5, dword ptr [r8+0Ch]
      vmovss  xmm3, dword ptr [r8+4]
      vsubss  xmm7, xmm3, dword ptr [r8+10h]
      vaddss  xmm4, xmm5, dword ptr [r8+0Ch]
      vaddss  xmm5, xmm3, dword ptr [r8+10h]
      vsubss  xmm8, xmm1, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmovups ymmword ptr [rcx], ymm0
      vmovaps xmm1, xmm7
      vmovaps xmm7, [rsp+38h+var_28]
      vshufps xmm1, xmm1, xmm1, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vmovups ymmword ptr [rcx+20h], ymm1
      vmovaps xmm0, xmm8
      vmovaps xmm8, [rsp+38h+var_38]
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovaps xmm1, xmm4
      vshufps xmm1, xmm1, xmm1, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vmovups ymmword ptr [rcx+60h], ymm1
      vmovaps xmm0, xmm5
      vmovaps xmm1, xmm2
      vshufps xmm0, xmm0, xmm0, 0
      vshufps xmm1, xmm1, xmm1, 0
      vinsertf128 ymm0, ymm0, xmm0, 1
      vinsertf128 ymm1, ymm1, xmm1, 1
      vmovups ymmword ptr [rcx+80h], ymm0
      vmovups ymmword ptr [rcx+0A0h], ymm1
    }
  }
}

/*
==============
SpatialPartition_Tree_FrustumIterator::Init
==============
*/
void SpatialPartition_Tree_FrustumIterator::Init(SpatialPartition_Tree_FrustumIterator *this, const SpatialPartition_Tree *tree, const vec4_t *planes, unsigned int planeCount)
{
  __int64 v4; 
  __int64 v9; 

  v4 = planeCount;
  _RBX = planes;
  if ( planeCount >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.cpp", 739, ASSERT_TYPE_ASSERT, "(unsigned)( planeCount ) < (unsigned)( MAX_PLANES )", "planeCount doesn't index MAX_PLANES\n\t%i not in [0, %i)", planeCount, 16) )
    __debugbreak();
  if ( tree )
  {
    if ( tree->treeSize )
    {
      this->m_stack[0] = (const SpatialPartition_TreeNode *)tree->tree;
      this->m_stackDepth = 1;
    }
    this->m_currentNode = NULL;
    this->m_spatialTree = tree;
    this->m_alwaysIndex = -1;
    if ( !(_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.cpp", 501, ASSERT_TYPE_ASSERT, "(planeCount > 0)", (const char *)&queryFormat, "planeCount > 0") )
      __debugbreak();
    if ( (unsigned int)v4 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.cpp", 502, ASSERT_TYPE_ASSERT, "(planeCount <= SpatialPartition_Tree_FrustumIterator::MAX_PLANES)", (const char *)&queryFormat, "planeCount <= SpatialPartition_Tree_FrustumIterator::MAX_PLANES") )
      __debugbreak();
    __asm { vmovups xmm1, cs:__xmm@c00000003f8000003f8000003f800000 }
    if ( (_DWORD)v4 )
    {
      v9 = v4;
      _RCX = (char *)((char *)this->m_planeData - (char *)_RBX);
      do
      {
        __asm
        {
          vmulps  xmm0, xmm1, xmmword ptr [rbx]
          vmovups xmmword ptr [rcx+rbx], xmm0
        }
        ++_RBX;
        --v9;
      }
      while ( v9 );
    }
    LODWORD(this->m_planeData[64]) = v4;
  }
}

/*
==============
SpatialPartition_Tree_RayIterator::Init
==============
*/
void SpatialPartition_Tree_RayIterator::Init(SpatialPartition_Tree_RayIterator *this, const SpatialPartition_Tree *tree, const vec3_t *start, const vec3_t *dir)
{
  bool v5; 

  if ( tree )
  {
    v5 = tree->treeSize == 0;
    if ( tree->treeSize )
    {
      this->m_stack[0] = (const SpatialPartition_TreeNode *)tree->tree;
      this->m_stackDepth = 1;
    }
    __asm
    {
      vmovss  xmm2, cs:__real@7f7fffff
      vmovss  xmm0, cs:__real@3f800000
    }
    this->m_currentNode = NULL;
    this->m_spatialTree = tree;
    this->m_alwaysIndex = -1;
    __asm
    {
      vmovss  xmm1, dword ptr [r9]
      vxorps  xmm3, xmm3, xmm3
      vucomiss xmm1, xmm3
    }
    if ( v5 )
      __asm { vmovaps xmm5, xmm2 }
    else
      __asm { vdivss  xmm5, xmm0, xmm1 }
    __asm
    {
      vmovss  xmm1, dword ptr [r9+4]
      vucomiss xmm1, xmm3
    }
    if ( v5 )
      __asm { vmovaps xmm4, xmm2 }
    else
      __asm { vdivss  xmm4, xmm0, xmm1 }
    __asm
    {
      vmovss  xmm1, dword ptr [r9+8]
      vucomiss xmm1, xmm3
    }
    if ( !v5 )
      __asm { vdivss  xmm2, xmm0, xmm1 }
    __asm
    {
      vbroadcastss ymm0, dword ptr [r8]
      vmovups ymmword ptr [rcx], ymm0
      vbroadcastss ymm1, dword ptr [r8+4]
      vmovups ymmword ptr [rcx+20h], ymm1
      vbroadcastss ymm0, dword ptr [r8+8]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovaps xmm1, xmm5
      vshufps xmm1, xmm1, xmm1, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vmovups ymmword ptr [rcx+60h], ymm1
      vmovaps xmm1, xmm2
      vmovaps xmm0, xmm4
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmovups ymmword ptr [rcx+0A0h], ymm1
      vmovups ymmword ptr [rcx+80h], ymm0
    }
  }
}

/*
==============
SpatialPartition_Tree_SegmentIterator::Init
==============
*/
void SpatialPartition_Tree_SegmentIterator::Init(SpatialPartition_Tree_SegmentIterator *this, const SpatialPartition_Tree *tree, const vec3_t *start, const vec3_t *end)
{
  bool v4; 

  if ( tree )
  {
    v4 = tree->treeSize == 0;
    if ( tree->treeSize )
    {
      this->m_stack[0] = (const SpatialPartition_TreeNode *)tree->tree;
      this->m_stackDepth = 1;
    }
    __asm { vmovss  xmm2, cs:__real@7f7fffff }
    this->m_currentNode = NULL;
    this->m_spatialTree = tree;
    this->m_alwaysIndex = -1;
    __asm
    {
      vmovss  xmm0, dword ptr [r9]
      vsubss  xmm4, xmm0, dword ptr [r8]
      vmovss  xmm1, dword ptr [r9+4]
      vmovss  xmm0, dword ptr [r9+8]
      vsubss  xmm3, xmm1, dword ptr [r8+4]
      vsubss  xmm5, xmm0, dword ptr [r8+8]
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm4, xmm1
    }
    if ( v4 )
      __asm { vmovaps xmm4, xmm2 }
    else
      __asm { vdivss  xmm4, xmm0, xmm4 }
    __asm { vucomiss xmm3, xmm1 }
    if ( v4 )
      __asm { vmovaps xmm3, xmm2 }
    else
      __asm { vdivss  xmm3, xmm0, xmm3 }
    __asm { vucomiss xmm5, xmm1 }
    if ( !v4 )
      __asm { vdivss  xmm2, xmm0, xmm5 }
    __asm
    {
      vbroadcastss ymm0, dword ptr [r8]
      vmovups ymmword ptr [rcx], ymm0
      vbroadcastss ymm1, dword ptr [r8+4]
      vmovups ymmword ptr [rcx+20h], ymm1
      vbroadcastss ymm0, dword ptr [r8+8]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovaps xmm1, xmm4
      vshufps xmm1, xmm1, xmm1, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vmovups ymmword ptr [rcx+60h], ymm1
      vmovaps xmm1, xmm2
      vmovaps xmm0, xmm3
      vshufps xmm1, xmm1, xmm1, 0
      vshufps xmm0, xmm0, xmm0, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vinsertf128 ymm0, ymm0, xmm0, 1
      vmovups ymmword ptr [rcx+0A0h], ymm1
      vmovups ymmword ptr [rcx+80h], ymm0
    }
  }
}

/*
==============
SpatialPartition_Tree_SphereIterator::Init
==============
*/

void __fastcall SpatialPartition_Tree_SphereIterator::Init(SpatialPartition_Tree_SphereIterator *this, const SpatialPartition_Tree *tree, const vec3_t *centre, double radius)
{
  if ( tree )
  {
    if ( tree->treeSize )
    {
      this->m_stack[0] = (const SpatialPartition_TreeNode *)tree->tree;
      this->m_stackDepth = 1;
    }
    this->m_currentNode = NULL;
    this->m_spatialTree = tree;
    this->m_alwaysIndex = -1;
    __asm
    {
      vbroadcastss ymm0, dword ptr [r8]
      vmovups ymmword ptr [rcx], ymm0
      vbroadcastss ymm1, dword ptr [r8+4]
      vmovups ymmword ptr [rcx+20h], ymm1
      vbroadcastss ymm0, dword ptr [r8+8]
      vmulss  xmm1, xmm3, xmm3
      vshufps xmm1, xmm1, xmm1, 0
      vinsertf128 ymm1, ymm1, xmm1, 1
      vmovups ymmword ptr [rcx+60h], ymm1
      vmovups ymmword ptr [rcx+40h], ymm0
    }
  }
}

/*
==============
SpatialPartition_DrawTree
==============
*/
void SpatialPartition_DrawTree(const LocalClientNum_t localClientNum, const SpatialPartition_Tree *tree, unsigned int maxDepth, bool drawBounds, void (*leafGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), bool (*leafGetItemValid)(const LocalClientNum_t, unsigned int))
{
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.cpp", 844, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  SpatialPartition_DrawTreeNode(localClientNum, (const SpatialPartition_TreeNode *)tree->tree, 0, maxDepth, drawBounds, NULL, leafGetOrigin, leafGetItemValid);
}

/*
==============
SpatialPartition_DrawTreeNode
==============
*/
void SpatialPartition_DrawTreeNode(const LocalClientNum_t localClientNum, const SpatialPartition_TreeNode *node, unsigned int depth, unsigned int maxDepth, bool drawBounds, const vec3_t *parentCenter, void (*leafGetOrigin)(const LocalClientNum_t, unsigned int, vec3_t *), bool (*leafGetItemValid)(const LocalClientNum_t, unsigned int))
{
  int v16; 
  unsigned int *childOffsets32; 
  int v19; 
  unsigned int v20; 
  const SpatialPartition_TreeNode *v39; 
  unsigned int deptha; 
  unsigned int *v46; 
  unsigned int *v47; 
  unsigned int *v48; 
  unsigned int *v49; 
  vec3_t origin; 
  vec3_t end; 
  Bounds bounds; 
  vec4_t color; 

  __asm
  {
    vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmmword ptr [rsp+148h+color], xmm0
  }
  if ( depth < maxDepth )
  {
    if ( (*(_BYTE *)node & 1) != 0 )
    {
      if ( leafGetOrigin )
      {
        if ( parentCenter )
        {
          v16 = 0;
          if ( (*(_BYTE *)node & 0xFE) != 0 )
          {
            childOffsets32 = node->childOffsets32;
            do
            {
              if ( !leafGetItemValid || leafGetItemValid(localClientNum, *childOffsets32) )
              {
                leafGetOrigin(localClientNum, *childOffsets32, &end);
                CG_DebugLine(parentCenter, &end, &color, 0, 0);
              }
              ++v16;
              ++childOffsets32;
            }
            while ( v16 < *(_BYTE *)node >> 1 );
          }
        }
      }
    }
    else
    {
      v47 = node[(unsigned __int64)*(_BYTE *)node >> 1].childOffsets32;
      if ( (*(_BYTE *)node & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 45, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
        __debugbreak();
      v48 = &node->childOffsets32[(*(_BYTE *)node >> 1) + (unsigned __int64)(2 * (*(_BYTE *)node >> 1))];
      if ( (*(_BYTE *)node & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 56, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
        __debugbreak();
      v49 = &node->childOffsets32[(*(_BYTE *)node >> 1) + (unsigned __int64)(3 * (*(_BYTE *)node >> 1))];
      if ( (*(_BYTE *)node & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 56, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
        __debugbreak();
      _R9 = &node->childOffsets32[3 * (*(_BYTE *)node >> 1) + 2 * (*(_BYTE *)node >> 1)];
      v46 = _R9;
      if ( (*(_BYTE *)node & 1) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 56, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
          __debugbreak();
        _R9 = v46;
      }
      v19 = *(_BYTE *)node >> 1;
      v20 = 0;
      _RCX = &node->childOffsets32[v19 + (unsigned int)(2 * v19) + (unsigned __int64)(unsigned int)(3 * v19)];
      *(_QWORD *)end.v = _RCX;
      if ( v19 )
      {
        __asm
        {
          vmovaps [rsp+148h+var_58], xmm6
          vmovaps [rsp+148h+var_68], xmm7
          vmovaps [rsp+148h+var_78], xmm8
          vmovaps [rsp+148h+var_88], xmm9
          vmovss  xmm9, cs:__real@3f000000
        }
        deptha = depth + 1;
        do
        {
          _RAX = v47;
          _RBX = v20;
          __asm { vmovss  xmm1, dword ptr [rax+rbx*4] }
          _RAX = v48;
          __asm
          {
            vmovss  xmm7, dword ptr [r9+rbx*4]
            vmovss  xmm8, dword ptr [rcx+rbx*4]
            vaddss  xmm1, xmm7, xmm1
            vmovss  xmm2, dword ptr [rax+rbx*4]
          }
          _RAX = v49;
          __asm
          {
            vmulss  xmm4, xmm1, xmm9
            vmovss  xmm6, dword ptr [rax+rbx*4]
            vaddss  xmm0, xmm6, dword ptr [rax+rbx*4]
            vmulss  xmm3, xmm0, xmm9
            vaddss  xmm0, xmm8, xmm2
            vmulss  xmm1, xmm0, xmm9
            vmovss  dword ptr [rsp+148h+origin+8], xmm1
            vmovss  dword ptr [rsp+148h+origin], xmm3
            vmovss  dword ptr [rsp+148h+origin+4], xmm4
          }
          if ( parentCenter )
          {
            CG_DebugLine(parentCenter, &origin, &color, 0, 0);
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+148h+origin+8]
              vmovss  xmm4, dword ptr [rsp+148h+origin+4]
              vmovss  xmm3, dword ptr [rsp+148h+origin]
            }
          }
          if ( drawBounds )
          {
            __asm
            {
              vxorps  xmm2, xmm2, xmm2; yaw
              vmovss  dword ptr [rsp+148h+bounds.midPoint], xmm3
              vmovss  dword ptr [rsp+148h+bounds.halfSize], xmm6
              vmovss  dword ptr [rsp+148h+bounds.midPoint+4], xmm4
              vmovss  dword ptr [rsp+148h+bounds.halfSize+4], xmm7
              vmovss  dword ptr [rsp+148h+bounds.midPoint+8], xmm1
              vmovss  dword ptr [rsp+148h+bounds.halfSize+8], xmm8
            }
            CG_DebugBox(&origin, &bounds, *(float *)&_XMM2, &color, 0, 0);
          }
          if ( (v20 >= *(_BYTE *)node >> 1 || (*(_BYTE *)node & 1) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 68, ASSERT_TYPE_SANITY, "( childIndex < tree->childCount && !tree->containsLeaves )", (const char *)&queryFormat, "childIndex < tree->childCount && !tree->containsLeaves") )
            __debugbreak();
          v39 = (const SpatialPartition_TreeNode *)((char *)node + 4 * node->childOffsets32[v20]);
          if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.cpp", 836, ASSERT_TYPE_ASSERT, "(child)", (const char *)&queryFormat, "child") )
            __debugbreak();
          SpatialPartition_DrawTreeNode(localClientNum, v39, deptha, maxDepth, drawBounds, &origin, leafGetOrigin, leafGetItemValid);
          ++v20;
          _RCX = *(unsigned int **)end.v;
          _R9 = v46;
        }
        while ( v20 < *(_BYTE *)node >> 1 );
        __asm
        {
          vmovaps xmm9, [rsp+148h+var_88]
          vmovaps xmm8, [rsp+148h+var_78]
          vmovaps xmm7, [rsp+148h+var_68]
          vmovaps xmm6, [rsp+148h+var_58]
        }
      }
    }
  }
}

