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
  unsigned __int64 v1; 
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v4; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 

  v1 = (unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64;
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
  v6 = *(__m256i *)&this->m_data[8];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = *(__m256i *)this->m_data;
  v7 = *(__m256i *)&this->m_data[16];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = v6;
  v8 = *(__m256i *)&this->m_data[24];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = v7;
  v9 = *(__m256i *)&this->m_data[32];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0) = v8;
  v10 = *(__m256i *)&this->m_data[40];
  *(_QWORD *)v1 = v1 + 64;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 160;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 192;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 224;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0) = v9;
  v11 = *(__m256i *)v1;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v10;
  *(_OWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = *(_OWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = v11;
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_fb3f76ad0d0a160bfd733303fbc50197_>(this, (SpatialPartition_Tree_Internal::QueryAABB::__l2::<lambda_fb3f76ad0d0a160bfd733303fbc50197> *)(v1 + 256));
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
bool SpatialPartition_Tree_RayIterator::Advance(SpatialPartition_Tree_RayIterator *this)
{
  SpatialPartition_Tree_Internal::QuerySegment::__l2::<lambda_e9a7a47b0a0ff84d4cb18ca88c16863c> *v1; 
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v4; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 

  v1 = (SpatialPartition_Tree_Internal::QuerySegment::__l2::<lambda_e9a7a47b0a0ff84d4cb18ca88c16863c> *)((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64);
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
  v6 = *(__m256i *)&this->m_data[8];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = *(__m256i *)this->m_data;
  v7 = *(__m256i *)&this->m_data[16];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = v6;
  v8 = *(__m256i *)&this->m_data[24];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0) = v7;
  v9 = *(__m256i *)&this->m_data[32];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = v8;
  v10 = *(__m256i *)&this->m_data[40];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0) = v9;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v10;
  v1->startX = (const __m256 *)&v1[1];
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 160;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 192;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 224;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 256;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 288;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = _ymm;
  v11 = *(__m256i *)&v1->startX;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = (__m256i)0i64;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) = *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) = v11;
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_e9a7a47b0a0ff84d4cb18ca88c16863c_>(this, v1 + 5);
}

/*
==============
SpatialPartition_Tree_SegmentIterator::Advance
==============
*/
bool SpatialPartition_Tree_SegmentIterator::Advance(SpatialPartition_Tree_SegmentIterator *this)
{
  SpatialPartition_Tree_Internal::QuerySegment::__l2::<lambda_f36b0fa1ea311a7bdcbc0c0af636ac00> *v1; 
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v4; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 
  __m256i v10; 
  __m256i v11; 
  __m256i v12; 

  v1 = (SpatialPartition_Tree_Internal::QuerySegment::__l2::<lambda_f36b0fa1ea311a7bdcbc0c0af636ac00> *)((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64);
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
  v6 = *(__m256i *)&this->m_data[8];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = *(__m256i *)this->m_data;
  v7 = *(__m256i *)&this->m_data[16];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = v6;
  v8 = *(__m256i *)&this->m_data[24];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xC0) = v7;
  v9 = *(__m256i *)&this->m_data[32];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = v8;
  v10 = *(__m256i *)&this->m_data[40];
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xA0) = v9;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0xE0) = v10;
  v1->startX = (const __m256 *)&v1[1];
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 160;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 192;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 224;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 256;
  *(_QWORD *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38) = ((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 288;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x120) = _ymm;
  v11 = *(__m256i *)&v1->startX;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x100) = (__m256i)0i64;
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x160) = *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  *(__m256i *)(((unsigned __int64)&v12 & 0xFFFFFFFFFFFFFFE0ui64) + 0x140) = v11;
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_f36b0fa1ea311a7bdcbc0c0af636ac00_>(this, v1 + 5);
}

/*
==============
SpatialPartition_Tree_SphereIterator::Advance
==============
*/
bool SpatialPartition_Tree_SphereIterator::Advance(SpatialPartition_Tree_SphereIterator *this)
{
  __m256i *v1; 
  const SpatialPartition_Tree *m_spatialTree; 
  unsigned int m_alwaysIndex; 
  unsigned int v4; 
  __m256i v6; 
  __m256i v7; 
  __m256i v8; 
  __m256i v9; 

  v1 = (__m256i *)((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64);
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
  v6 = *(__m256i *)&this->m_data[8];
  *(__m256i *)(((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20) = *(__m256i *)this->m_data;
  v7 = *(__m256i *)&this->m_data[16];
  v1->m256i_i64[0] = (__int64)v1[1].m256i_i64;
  *(_QWORD *)(((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = ((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 64;
  *(_QWORD *)(((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = ((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 96;
  *(_QWORD *)(((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = ((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 128;
  *(__m256i *)(((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40) = v6;
  v8 = *(__m256i *)&this->m_data[24];
  *(__m256i *)(((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = v7;
  *v1 = *v1;
  *(__m256i *)(((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = v8;
  return SpatialPartition_Tree_Internal::QueryIterate<_lambda_e710993fadbef1a791f02ee9cd8124ec_>(this, (SpatialPartition_Tree_Internal::QuerySphere::__l2::<lambda_e710993fadbef1a791f02ee9cd8124ec> *)((unsigned __int64)&v9 & 0xFFFFFFFFFFFFFFE0ui64));
}

/*
==============
SpatialPartition_Tree_AABBIterator::Init
==============
*/
void SpatialPartition_Tree_AABBIterator::Init(SpatialPartition_Tree_AABBIterator *this, const SpatialPartition_Tree *tree, const Bounds *bounds)
{
  __m128 v3; 
  float v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 

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
    v3 = (__m128)LODWORD(bounds->midPoint.v[2]);
    v4 = bounds->halfSize.v[2];
    v5 = (__m128)LODWORD(bounds->midPoint.v[0]);
    v7 = v5;
    v7.m128_f32[0] = v5.m128_f32[0] - bounds->halfSize.v[0];
    v6 = v7;
    v8 = (__m128)LODWORD(bounds->midPoint.v[1]);
    v10 = v8;
    v10.m128_f32[0] = v8.m128_f32[0] - bounds->halfSize.v[1];
    v9 = v10;
    v12 = v5;
    v12.m128_f32[0] = v5.m128_f32[0] + bounds->halfSize.v[0];
    v11 = v12;
    v14 = v8;
    v14.m128_f32[0] = v8.m128_f32[0] + bounds->halfSize.v[1];
    v13 = v14;
    v16 = v3;
    v16.m128_f32[0] = v3.m128_f32[0] - v4;
    v15 = v16;
    v17 = v3;
    v17.m128_f32[0] = v3.m128_f32[0] + v4;
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v6, v6, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256i *)this->m_data = _YMM0;
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v9, v9, 0);
    __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
    *(__m256i *)&this->m_data[8] = _YMM1;
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v15, v15, 0);
    __asm { vinsertf128 ymm0, ymm0, xmm0, 1 }
    *(__m256i *)&this->m_data[16] = _YMM0;
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v11, v11, 0);
    __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
    *(__m256i *)&this->m_data[24] = _YMM1;
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v13, v13, 0);
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v17, v17, 0);
    __asm
    {
      vinsertf128 ymm0, ymm0, xmm0, 1
      vinsertf128 ymm1, ymm1, xmm1, 1
    }
    *(__m256i *)&this->m_data[32] = _YMM0;
    *(__m256i *)&this->m_data[40] = _YMM1;
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
  __int64 v8; 
  signed __int64 v9; 

  v4 = planeCount;
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
    if ( (_DWORD)v4 )
    {
      v8 = v4;
      v9 = (char *)this->m_planeData - (char *)planes;
      do
      {
        *(__m128 *)((char *)planes + v9) = _mm128_mul_ps((__m128)_xmm_c00000003f8000003f8000003f800000, *(__m128 *)planes);
        ++planes;
        --v8;
      }
      while ( v8 );
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
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  float v7; 
  __m128 v8; 
  __m128 v9; 
  float v10; 
  __m128 v11; 

  if ( tree )
  {
    if ( tree->treeSize )
    {
      this->m_stack[0] = (const SpatialPartition_TreeNode *)tree->tree;
      this->m_stackDepth = 1;
    }
    v4 = (__m128)LODWORD(FLOAT_3_4028235e38);
    this->m_currentNode = NULL;
    this->m_spatialTree = tree;
    this->m_alwaysIndex = -1;
    if ( dir->v[0] == 0.0 )
    {
      v5 = (__m128)LODWORD(FLOAT_3_4028235e38);
    }
    else
    {
      v6 = (__m128)LODWORD(FLOAT_1_0);
      v6.m128_f32[0] = 1.0 / dir->v[0];
      v5 = v6;
    }
    v7 = dir->v[1];
    if ( v7 == 0.0 )
    {
      v8 = (__m128)LODWORD(FLOAT_3_4028235e38);
    }
    else
    {
      v9 = (__m128)LODWORD(FLOAT_1_0);
      v9.m128_f32[0] = 1.0 / v7;
      v8 = v9;
    }
    v10 = dir->v[2];
    if ( v10 != 0.0 )
    {
      v11 = (__m128)LODWORD(FLOAT_1_0);
      v11.m128_f32[0] = 1.0 / v10;
      v4 = v11;
    }
    __asm { vbroadcastss ymm0, dword ptr [r8] }
    *(__m256i *)this->m_data = _YMM0;
    __asm { vbroadcastss ymm1, dword ptr [r8+4] }
    *(__m256i *)&this->m_data[8] = _YMM1;
    __asm { vbroadcastss ymm0, dword ptr [r8+8] }
    *(__m256i *)&this->m_data[16] = _YMM0;
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v5, v5, 0);
    __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
    *(__m256i *)&this->m_data[24] = _YMM1;
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v4, v4, 0);
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v8, v8, 0);
    __asm
    {
      vinsertf128 ymm1, ymm1, xmm1, 1
      vinsertf128 ymm0, ymm0, xmm0, 1
    }
    *(__m256i *)&this->m_data[40] = _YMM1;
    *(__m256i *)&this->m_data[32] = _YMM0;
  }
}

/*
==============
SpatialPartition_Tree_SegmentIterator::Init
==============
*/
void SpatialPartition_Tree_SegmentIterator::Init(SpatialPartition_Tree_SegmentIterator *this, const SpatialPartition_Tree *tree, const vec3_t *start, const vec3_t *end)
{
  __m128 v4; 
  float v5; 
  float v6; 
  float v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v12; 

  if ( tree )
  {
    if ( tree->treeSize )
    {
      this->m_stack[0] = (const SpatialPartition_TreeNode *)tree->tree;
      this->m_stackDepth = 1;
    }
    v4 = (__m128)LODWORD(FLOAT_3_4028235e38);
    this->m_currentNode = NULL;
    this->m_spatialTree = tree;
    this->m_alwaysIndex = -1;
    v5 = end->v[0] - start->v[0];
    v6 = end->v[1] - start->v[1];
    v7 = end->v[2] - start->v[2];
    if ( v5 == 0.0 )
    {
      v8 = (__m128)LODWORD(FLOAT_3_4028235e38);
    }
    else
    {
      v9 = (__m128)LODWORD(FLOAT_1_0);
      v9.m128_f32[0] = 1.0 / v5;
      v8 = v9;
    }
    if ( v6 == 0.0 )
    {
      v10 = (__m128)LODWORD(FLOAT_3_4028235e38);
    }
    else
    {
      v11 = (__m128)LODWORD(FLOAT_1_0);
      v11.m128_f32[0] = 1.0 / v6;
      v10 = v11;
    }
    if ( v7 != 0.0 )
    {
      v12 = (__m128)LODWORD(FLOAT_1_0);
      v12.m128_f32[0] = 1.0 / v7;
      v4 = v12;
    }
    __asm { vbroadcastss ymm0, dword ptr [r8] }
    *(__m256i *)this->m_data = _YMM0;
    __asm { vbroadcastss ymm1, dword ptr [r8+4] }
    *(__m256i *)&this->m_data[8] = _YMM1;
    __asm { vbroadcastss ymm0, dword ptr [r8+8] }
    *(__m256i *)&this->m_data[16] = _YMM0;
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v8, v8, 0);
    __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
    *(__m256i *)&this->m_data[24] = _YMM1;
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v4, v4, 0);
    _YMM0 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v10, v10, 0);
    __asm
    {
      vinsertf128 ymm1, ymm1, xmm1, 1
      vinsertf128 ymm0, ymm0, xmm0, 1
    }
    *(__m256i *)&this->m_data[40] = _YMM1;
    *(__m256i *)&this->m_data[32] = _YMM0;
  }
}

/*
==============
SpatialPartition_Tree_SphereIterator::Init
==============
*/

void __fastcall SpatialPartition_Tree_SphereIterator::Init(SpatialPartition_Tree_SphereIterator *this, const SpatialPartition_Tree *tree, const vec3_t *centre, double radius)
{
  __m128 v7; 

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
    __asm { vbroadcastss ymm0, dword ptr [r8] }
    *(__m256i *)this->m_data = _YMM0;
    __asm { vbroadcastss ymm1, dword ptr [r8+4] }
    *(__m256i *)&this->m_data[8] = _YMM1;
    __asm { vbroadcastss ymm0, dword ptr [r8+8] }
    v7 = *(__m128 *)&radius;
    v7.m128_f32[0] = *(float *)&radius * *(float *)&radius;
    _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v7, v7, 0);
    __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
    *(__m256i *)&this->m_data[24] = _YMM1;
    *(__m256i *)&this->m_data[16] = _YMM0;
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
  int v11; 
  unsigned int *childOffsets32; 
  unsigned int *v13; 
  int v14; 
  unsigned int v15; 
  unsigned int *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  const SpatialPartition_TreeNode *v23; 
  unsigned int deptha; 
  unsigned int *v26; 
  unsigned int *v27; 
  unsigned int *v28; 
  unsigned int *v29; 
  unsigned int *v30; 
  vec3_t origin; 
  vec3_t end; 
  Bounds bounds; 
  vec4_t color; 

  color = (vec4_t)_xmm;
  if ( depth < maxDepth )
  {
    if ( (*(_BYTE *)node & 1) != 0 )
    {
      if ( leafGetOrigin )
      {
        if ( parentCenter )
        {
          v11 = 0;
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
              ++v11;
              ++childOffsets32;
            }
            while ( v11 < *(_BYTE *)node >> 1 );
          }
        }
      }
    }
    else
    {
      v30 = &node->childOffsets32[(unsigned __int64)*(_BYTE *)node >> 1];
      v27 = node[(unsigned __int64)*(_BYTE *)node >> 1].childOffsets32;
      if ( (*(_BYTE *)node & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 45, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
        __debugbreak();
      v28 = &node->childOffsets32[(*(_BYTE *)node >> 1) + (unsigned __int64)(2 * (*(_BYTE *)node >> 1))];
      if ( (*(_BYTE *)node & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 56, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
        __debugbreak();
      v29 = &node->childOffsets32[(*(_BYTE *)node >> 1) + (unsigned __int64)(3 * (*(_BYTE *)node >> 1))];
      if ( (*(_BYTE *)node & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 56, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
        __debugbreak();
      v13 = &node->childOffsets32[3 * (*(_BYTE *)node >> 1) + 2 * (*(_BYTE *)node >> 1)];
      v26 = v13;
      if ( (*(_BYTE *)node & 1) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 56, ASSERT_TYPE_SANITY, "( axis < 3 && !tree->containsLeaves )", (const char *)&queryFormat, "axis < 3 && !tree->containsLeaves") )
          __debugbreak();
        v13 = v26;
      }
      v14 = *(_BYTE *)node >> 1;
      v15 = 0;
      v16 = &node->childOffsets32[v14 + (unsigned int)(2 * v14) + (unsigned __int64)(unsigned int)(3 * v14)];
      *(_QWORD *)end.v = v16;
      if ( v14 )
      {
        deptha = depth + 1;
        do
        {
          v17 = *(float *)&v13[v15];
          v18 = *(float *)&v16[v15];
          v19 = (float)(v17 + *(float *)&v27[v15]) * 0.5;
          v20 = *(float *)&v29[v15];
          v21 = (float)(v20 + *(float *)&v30[v15]) * 0.5;
          v22 = (float)(v18 + *(float *)&v28[v15]) * 0.5;
          origin.v[2] = v22;
          origin.v[0] = v21;
          origin.v[1] = v19;
          if ( parentCenter )
          {
            CG_DebugLine(parentCenter, &origin, &color, 0, 0);
            v22 = origin.v[2];
            v19 = origin.v[1];
            v21 = origin.v[0];
          }
          if ( drawBounds )
          {
            bounds.midPoint.v[0] = v21;
            bounds.halfSize.v[0] = v20;
            bounds.midPoint.v[1] = v19;
            bounds.halfSize.v[1] = v17;
            bounds.midPoint.v[2] = v22;
            bounds.halfSize.v[2] = v18;
            CG_DebugBox(&origin, &bounds, 0.0, &color, 0, 0);
          }
          if ( (v15 >= *(_BYTE *)node >> 1 || (*(_BYTE *)node & 1) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree_db.h", 68, ASSERT_TYPE_SANITY, "( childIndex < tree->childCount && !tree->containsLeaves )", (const char *)&queryFormat, "childIndex < tree->childCount && !tree->containsLeaves") )
            __debugbreak();
          v23 = (const SpatialPartition_TreeNode *)((char *)node + 4 * node->childOffsets32[v15]);
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.cpp", 836, ASSERT_TYPE_ASSERT, "(child)", (const char *)&queryFormat, "child") )
            __debugbreak();
          SpatialPartition_DrawTreeNode(localClientNum, v23, deptha, maxDepth, drawBounds, &origin, leafGetOrigin, leafGetItemValid);
          ++v15;
          v16 = *(unsigned int **)end.v;
          v13 = v26;
        }
        while ( v15 < *(_BYTE *)node >> 1 );
      }
    }
  }
}

