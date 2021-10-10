/*
==============
StaticModels_HavokShape::calcBoundingRadius
==============
*/

void __fastcall StaticModels_HavokShape::calcBoundingRadius(StaticModels_HavokShape *this, const hkVector4f *pivot, hkSimdFloat32 *radiusOut)
{
  ?calcBoundingRadius@StaticModels_HavokShape@@UEBAXAEBVhkVector4f@@AEAVhkSimdFloat32@@@Z(this, pivot, radiusOut);
}

/*
==============
StaticModels_HavokShape::buildSurfaceGeometry
==============
*/

hkResult __fastcall StaticModels_HavokShape::buildSurfaceGeometry(StaticModels_HavokShape *this, const hknpShape::BuildSurfaceGeometryConfig *config, hkGeometry *geometryOut, hkArray<hkVector4f,hkContainerHeapAllocator> *edgesOut)
{
  return ?buildSurfaceGeometry@StaticModels_HavokShape@@UEBA?AUhkResult@@AEBUBuildSurfaceGeometryConfig@hknpShape@@PEAUhkGeometry@@PEAV?$hkArray@VhkVector4f@@UhkContainerHeapAllocator@@@@@Z(this, config, geometryOut, edgesOut);
}

/*
==============
StaticModels_HavokShape_IsMeshShape
==============
*/

bool __fastcall StaticModels_HavokShape_IsMeshShape(const hknpShape *shape)
{
  return ?StaticModels_HavokShape_IsMeshShape@@YA_NPEBVhknpShape@@@Z(shape);
}

/*
==============
StaticModels_HavokShapeCinfo::StaticModels_HavokShapeCinfo
==============
*/

void __fastcall StaticModels_HavokShapeCinfo::StaticModels_HavokShapeCinfo(StaticModels_HavokShapeCinfo *this)
{
  ??0StaticModels_HavokShapeCinfo@@QEAA@XZ(this);
}

/*
==============
StaticModels_HavokShape::queryAabbImpl
==============
*/

void __fastcall StaticModels_HavokShape::queryAabbImpl(StaticModels_HavokShape *this, hknpCollisionQueryContext *queryContext, const hknpAabbQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, hknpCollisionQueryCollector *collector, hkAabb *nmpInOut)
{
  ?queryAabbImpl@StaticModels_HavokShape@@UEBAXPEAUhknpCollisionQueryContext@@AEBUhknpAabbQuery@@AEBUhknpShapeQueryInfo@@AEBUhknpQueryFilterData@@2PEAVhknpCollisionQueryCollector@@PEAVhkAabb@@@Z(this, queryContext, query, queryShapeInfo, targetShapeFilterData, targetShapeInfo, collector, nmpInOut);
}

/*
==============
StaticModels_HavokShape::buildMassPropertiesMasked
==============
*/

void __fastcall StaticModels_HavokShape::buildMassPropertiesMasked(StaticModels_HavokShape *this, const hknpShape::MassConfig *massConfig, const StaticModels_HavokShapeKeyMask *mask, hkDiagonalizedMassProperties *massPropertiesOut)
{
  ?buildMassPropertiesMasked@StaticModels_HavokShape@@QEBAXAEBUMassConfig@hknpShape@@PEBUStaticModels_HavokShapeKeyMask@@AEAUhkDiagonalizedMassProperties@@@Z(this, massConfig, mask, massPropertiesOut);
}

/*
==============
StaticModels_HavokShape_GetLandscapeShapeHelper
==============
*/

void __fastcall StaticModels_HavokShape_GetLandscapeShapeHelper(const hknpShape **shape, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *meshShapeKey, int *shapeKeyPathSizeOut, hknpShapeCollector *shapeCollector)
{
  ?StaticModels_HavokShape_GetLandscapeShapeHelper@@YAXAEAPEBVhknpShape@@AEAU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@AEAHAEAUhknpShapeCollector@@@Z(shape, meshShapeKey, shapeKeyPathSizeOut, shapeCollector);
}

/*
==============
StaticModels_HavokShape::StaticModels_HavokShape
==============
*/

void __fastcall StaticModels_HavokShape::StaticModels_HavokShape(StaticModels_HavokShape *this, const StaticModels_HavokShapeCinfo *cinfo)
{
  ??0StaticModels_HavokShape@@QEAA@AEBUStaticModels_HavokShapeCinfo@@@Z(this, cinfo);
}

/*
==============
StaticModels_HavokShape::calcAabb
==============
*/

void __fastcall StaticModels_HavokShape::calcAabb(StaticModels_HavokShape *this, const hkTransformf *transform, hkAabb *aabbOut)
{
  ?calcAabb@StaticModels_HavokShape@@UEBAXAEBVhkTransformf@@AEAVhkAabb@@@Z(this, transform, aabbOut);
}

/*
==============
StaticModels_HavokShape::getChildShape
==============
*/

hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *__fastcall StaticModels_HavokShape::getChildShape(StaticModels_HavokShape *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *result, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> key, hknpShapeCollector *collector)
{
  return ?getChildShape@StaticModels_HavokShape@@QEBA?AU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@U2@PEAUhknpShapeCollector@@@Z(this, result, key, collector);
}

/*
==============
StaticModels_HavokShape::calcBoundingSphere
==============
*/

void __fastcall StaticModels_HavokShape::calcBoundingSphere(StaticModels_HavokShape *this, const hkTransformf *transform, hkSphere *sphereOut)
{
  ?calcBoundingSphere@StaticModels_HavokShape@@UEBAXAEBVhkTransformf@@AEAVhkSphere@@@Z(this, transform, sphereOut);
}

/*
==============
StaticModels_HavokShape::onChildShapeMutated
==============
*/

void __fastcall StaticModels_HavokShape::onChildShapeMutated(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numInstanceIds)
{
  ?onChildShapeMutated@StaticModels_HavokShape@@QEAAXPEBU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@H@Z(this, instanceIds, numInstanceIds);
}

/*
==============
StaticModels_HavokShape::zeroAllInstanceVelocities
==============
*/

void __fastcall StaticModels_HavokShape::zeroAllInstanceVelocities(StaticModels_HavokShape *this)
{
  ?zeroAllInstanceVelocities@StaticModels_HavokShape@@QEAAXXZ(this);
}

/*
==============
StaticModels_HavokShape::getShapeKeys
==============
*/

int __fastcall StaticModels_HavokShape::getShapeKeys(StaticModels_HavokShape *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *shapeKeysOut, int capacity, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> previousKey, const hknpShape::GetShapeKeysConfig *config)
{
  return ?getShapeKeys@StaticModels_HavokShape@@UEBAHPEAU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@HU2@AEBUGetShapeKeysConfig@hknpShape@@@Z(this, shapeKeysOut, capacity, previousKey, config);
}

/*
==============
StaticModels_HavokShape::castRayImpl
==============
*/

void __fastcall StaticModels_HavokShape::castRayImpl(StaticModels_HavokShape *this, hknpCollisionQueryContext *queryContext, const hknpRayCastQuery *query, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, hknpCollisionQueryCollector *collector)
{
  ?castRayImpl@StaticModels_HavokShape@@UEBAXPEAUhknpCollisionQueryContext@@AEBUhknpRayCastQuery@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@PEAVhknpCollisionQueryCollector@@@Z(this, queryContext, query, targetShapeFilterData, targetShapeInfo, collector);
}

/*
==============
StaticModels_HavokShape::validateContract
==============
*/

hkResult __fastcall StaticModels_HavokShape::validateContract(StaticModels_HavokShape *this)
{
  return ?validateContract@StaticModels_HavokShape@@QEBA?AUhkResult@@XZ(this);
}

/*
==============
StaticModels_HavokShape::buildMassProperties
==============
*/

void __fastcall StaticModels_HavokShape::buildMassProperties(StaticModels_HavokShape *this, const hknpShape::MassConfig *massConfig, hkDiagonalizedMassProperties *massPropertiesOut)
{
  ?buildMassProperties@StaticModels_HavokShape@@UEBAXAEBUMassConfig@hknpShape@@AEAUhkDiagonalizedMassProperties@@@Z(this, massConfig, massPropertiesOut);
}

/*
==============
StaticModels_HavokShape::setInstancesEnabled
==============
*/

void __fastcall StaticModels_HavokShape::setInstancesEnabled(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numInstances, bool isEnabled)
{
  ?setInstancesEnabled@StaticModels_HavokShape@@QEAAXPEBU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@H_N@Z(this, instanceIds, numInstances, isEnabled);
}

/*
==============
StaticModels_HavokShape::getLeafShapes
==============
*/

void __fastcall StaticModels_HavokShape::getLeafShapes(StaticModels_HavokShape *this, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *keys, int numKeys, hknpShapeCollector *collector)
{
  ?getLeafShapes@StaticModels_HavokShape@@UEBAXPEBU?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@HPEAUhknpShapeCollector@@@Z(this, keys, numKeys, collector);
}

/*
==============
StaticModels_HavokShape::createShapeKeyMask
==============
*/

hknpShapeKeyMask *__fastcall StaticModels_HavokShape::createShapeKeyMask(StaticModels_HavokShape *this)
{
  return ?createShapeKeyMask@StaticModels_HavokShape@@UEBAPEAUhknpShapeKeyMask@@XZ(this);
}

/*
==============
StaticModels_HavokShape::calcSurfaceVelocity
==============
*/

void __fastcall StaticModels_HavokShape::calcSurfaceVelocity(StaticModels_HavokShape *this, const hknpShape::SurfaceVelocityInput *input, hknpShape::SurfaceVelocityOutput *output)
{
  ?calcSurfaceVelocity@StaticModels_HavokShape@@UEBAXAEBUSurfaceVelocityInput@hknpShape@@AEAUSurfaceVelocityOutput@3@@Z(this, input, output);
}

/*
==============
StaticModels_HavokShape::queryAabbImpl
==============
*/

void __fastcall StaticModels_HavokShape::queryAabbImpl(StaticModels_HavokShape *this, hknpCollisionQueryContext *queryContext, const hknpAabbQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator> *hits, hkAabb *nmpInOut)
{
  ?queryAabbImpl@StaticModels_HavokShape@@UEBAXPEAUhknpCollisionQueryContext@@AEBUhknpAabbQuery@@AEBUhknpShapeQueryInfo@@AEBUhknpQueryFilterData@@2PEAV?$hkArray@U?$hkHandle@I$0PPPPPPPP@UhknpShapeKeyDiscriminant@@@@UhkContainerHeapAllocator@@@@PEAVhkAabb@@@Z(this, queryContext, query, queryShapeInfo, targetShapeFilterData, targetShapeInfo, hits, nmpInOut);
}

/*
==============
StaticModels_HavokShape::getClosestPointsImpl
==============
*/

void __fastcall StaticModels_HavokShape::getClosestPointsImpl(hknpCollisionQueryContext *queryContext, const hknpClosestPointsQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const StaticModels_HavokShape *targetShape, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, const hkTransformf *queryToTarget, bool queryAndTargetSwapped, hknpCollisionQueryCollector *collector)
{
  ?getClosestPointsImpl@StaticModels_HavokShape@@SAXPEAUhknpCollisionQueryContext@@AEBUhknpClosestPointsQuery@@AEBUhknpShapeQueryInfo@@PEBV1@AEBUhknpQueryFilterData@@2AEBVhkTransformf@@_NPEAVhknpCollisionQueryCollector@@@Z(queryContext, query, queryShapeInfo, targetShape, targetShapeFilterData, targetShapeInfo, queryToTarget, queryAndTargetSwapped, collector);
}

/*
==============
StaticModels_HavokShape::getMutationSignals
==============
*/

hknpShapeSignals *__fastcall StaticModels_HavokShape::getMutationSignals(StaticModels_HavokShape *this)
{
  return ?getMutationSignals@StaticModels_HavokShape@@UEAAPEAVhknpShapeSignals@@XZ(this);
}

/*
==============
StaticModels_HavokShapeInstance::calculateAabb
==============
*/

void __fastcall StaticModels_HavokShapeInstance::calculateAabb(StaticModels_HavokShapeInstance *this, unsigned int tileIdx, hkAabb *aabbOut)
{
  ?calculateAabb@StaticModels_HavokShapeInstance@@QEBAXIAEAVhkAabb@@@Z(this, tileIdx, aabbOut);
}

/*
==============
StaticModels_HavokShape::checkConsistency
==============
*/

void __fastcall StaticModels_HavokShape::checkConsistency(StaticModels_HavokShape *this)
{
  ?checkConsistency@StaticModels_HavokShape@@UEBAXXZ(this);
}

/*
==============
StaticModels_HavokShape::castShapeImpl
==============
*/

void __fastcall StaticModels_HavokShape::castShapeImpl(hknpCollisionQueryContext *queryContext, const hknpShapeCastQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpShape *targetShape, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, bool queryAndTargetSwapped, hknpCollisionQueryCollector *collector, hknpCollisionQueryCollector *startCollector)
{
  ?castShapeImpl@StaticModels_HavokShape@@SAXPEAUhknpCollisionQueryContext@@AEBUhknpShapeCastQuery@@AEBUhknpShapeQueryInfo@@PEBVhknpShape@@AEBUhknpQueryFilterData@@2_NPEAVhknpCollisionQueryCollector@@6@Z(queryContext, query, queryShapeInfo, targetShape, targetShapeFilterData, targetShapeInfo, queryAndTargetSwapped, collector, startCollector);
}

/*
==============
StaticModels_HavokShapeInstance::StaticModels_HavokShapeInstance
==============
*/

void __fastcall StaticModels_HavokShapeInstance::StaticModels_HavokShapeInstance(StaticModels_HavokShapeInstance *this)
{
  ??0StaticModels_HavokShapeInstance@@QEAA@XZ(this);
}

/*
==============
StaticModels_HavokShape::~StaticModels_HavokShape
==============
*/

void __fastcall StaticModels_HavokShape::~StaticModels_HavokShape(StaticModels_HavokShape *this)
{
  ??1StaticModels_HavokShape@@UEAA@XZ(this);
}

/*
==============
StaticModels_HavokShape::updateInstancesDerivedData
==============
*/

void __fastcall StaticModels_HavokShape::updateInstancesDerivedData(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numInstanceIds)
{
  ?updateInstancesDerivedData@StaticModels_HavokShape@@QEAAXPEBU?$hkHandle@G$0PPPP@UStaticModels_HavokShapeInstanceIdDiscriminant@@@@H@Z(this, instanceIds, numInstanceIds);
}

/*
==============
StaticModels_HavokShape::afterReflectNew
==============
*/

void __fastcall StaticModels_HavokShape::afterReflectNew(StaticModels_HavokShape *this)
{
  ?afterReflectNew@StaticModels_HavokShape@@QEAAXXZ(this);
}

/*
==============
StaticModels_HavokShape::estimateNumShapeKeys
==============
*/

int __fastcall StaticModels_HavokShape::estimateNumShapeKeys(StaticModels_HavokShape *this)
{
  return ?estimateNumShapeKeys@StaticModels_HavokShape@@UEBAHXZ(this);
}

/*
==============
StaticModels_HavokShape::StaticModels_HavokShape
==============
*/
void StaticModels_HavokShape::StaticModels_HavokShape(StaticModels_HavokShape *this, const StaticModels_HavokShapeCinfo *cinfo)
{
  StaticModels_HavokShapeSimdTree *p_m_simdTree; 
  hkMemoryAllocator *v6; 
  unsigned int v7; 
  unsigned int v8; 
  int v9; 
  hkcdSimdTree::Node *m_data; 
  hkcdSimdTree::Node *v12; 
  int v15; 
  hkMemoryAllocator *v16; 
  int m_size; 
  int v18; 
  int v19; 
  int v20; 
  StaticModels_HavokShapeInstance *v21; 
  __int64 v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  int v25; 
  __int64 v26; 
  const void *CollisionTileModelShape; 
  __m128 v28; 
  const hknpShape::MassConfig *m_massConfig; 

  hknpCompositeShape::hknpCompositeShape(this, USER_7|DISTANCE_FIELD);
  this->__vftable = (StaticModels_HavokShape_vtbl *)&StaticModels_HavokShape::`vftable';
  this->m_tileIdx = cinfo->m_tileIdx;
  this->m_shapeType = cinfo->m_shapeType;
  this->m_instances.m_data = NULL;
  this->m_instances.m_size = 0;
  this->m_instances.m_capacityAndFlags = 0x80000000;
  this->m_instanceVelocities.m_data = NULL;
  this->m_instanceVelocities.m_size = 0;
  this->m_instanceVelocities.m_capacityAndFlags = 0x80000000;
  this->m_isMutable.m_bool = cinfo->m_hasSurfaceVelocity || cinfo->m_isMutable;
  this->m_mutationSignals.m_shapeMutated.m_slots.m_ptrAndInt = NULL;
  this->m_mutationSignals.m_shapeDestroyed.m_slots.m_ptrAndInt = NULL;
  this->m_boundingVolumeData.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_boundingVolumeData.m_memSizeAndFlags = 0x1FFFF;
  this->m_boundingVolumeData.__vftable = (StaticModels_HavokShapeData_vtbl *)&StaticModels_HavokShapeData::`vftable';
  p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
  this->m_boundingVolumeData.m_simdTree.m_nodes.m_data = NULL;
  this->m_boundingVolumeData.m_simdTree.m_nodes.m_size = 0;
  this->m_boundingVolumeData.m_simdTree.m_nodes.m_capacityAndFlags = 0x80000000;
  v6 = hkMemHeapAllocator();
  v7 = this->m_boundingVolumeData.m_simdTree.m_nodes.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v7 < 2 )
  {
    v8 = 2 * v7;
    if ( v8 >= 0x3FFFFFFF )
      v8 = 1073741822;
    v9 = 2;
    if ( v8 > 2 )
      v9 = v8;
    hkArrayUtil::_reserve(v6, &this->m_boundingVolumeData.m_simdTree, v9, 128);
  }
  this->m_boundingVolumeData.m_simdTree.m_nodes.m_size = 2;
  m_data = p_m_simdTree->m_nodes.m_data;
  m_data->m_lx.m_quad = g_vectorfConstants[36];
  m_data->m_ly.m_quad = g_vectorfConstants[36];
  m_data->m_lz.m_quad = g_vectorfConstants[36];
  m_data->m_hx.m_quad = g_vectorfConstants[41];
  m_data->m_hy.m_quad = g_vectorfConstants[41];
  m_data->m_hz.m_quad = g_vectorfConstants[41];
  __asm { vpxor   xmm6, xmm6, xmm6 }
  *(_OWORD *)m_data->m_data = _XMM6;
  *(_WORD *)&m_data->m_isLeaf = 0;
  v12 = p_m_simdTree->m_nodes.m_data;
  v12[1].m_lx.m_quad = g_vectorfConstants[36];
  v12[1].m_ly.m_quad = g_vectorfConstants[36];
  v12[1].m_lz.m_quad = g_vectorfConstants[36];
  v12[1].m_hx.m_quad = g_vectorfConstants[41];
  v12[1].m_hy.m_quad = g_vectorfConstants[41];
  v12[1].m_hz.m_quad = g_vectorfConstants[41];
  *(_OWORD *)v12[1].m_data = _XMM6;
  *(_WORD *)&v12[1].m_isLeaf = 0;
  this->m_boundingVolumeData.m_simdTree.m_points.m_data = NULL;
  this->m_boundingVolumeData.m_simdTree.m_points.m_size = 0;
  this->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags = 0x80000000;
  if ( cinfo->m_hasSurfaceVelocity )
    this->m_flags.m_storage |= 0x8000u;
  _XMM0 = (unsigned int)cinfo->m_numInstances;
  __asm { vpmaxsd xmm1, xmm0, xmm1 }
  v15 = _XMM1;
  if ( (int)_XMM1 > 0 )
  {
    v16 = hkMemHeapAllocator();
    m_size = this->m_instances.m_size;
    v18 = m_size + _XMM1;
    v19 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
    if ( v19 < m_size + (int)_XMM1 )
    {
      v20 = 2 * v19;
      if ( (unsigned int)v20 >= 0x3FFFFFFF )
        v20 = 1073741822;
      if ( v18 < v20 )
        v18 = v20;
      hkArrayUtil::_reserve(v16, &this->m_instances, v18, 4);
      m_size = this->m_instances.m_size;
    }
    v21 = &this->m_instances.m_data[m_size];
    v22 = (int)_XMM1;
    do
    {
      if ( v21 )
        v21->m_modelIdxAndFlags = 0x8000;
      ++v21;
      --v22;
    }
    while ( v22 );
    this->m_instances.m_size += _XMM1;
  }
  this->m_numShapeKeyBits = 0;
  v23 = 0;
  if ( (_DWORD)_XMM1 )
  {
    do
    {
      ++v23;
      v15 >>= 1;
    }
    while ( v15 );
    this->m_numShapeKeyBits = v23;
  }
  v24 = v23;
  if ( !v23 )
    v24 = 1;
  this->m_numShapeKeyBits = v24;
  this->m_estimatedNumShapeKeys = 0;
  if ( cinfo->m_numInstances > 0 )
  {
    v25 = 0;
    v26 = 0i64;
    do
    {
      CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((cinfo->m_instances[v26].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, cinfo->m_instances[v26].m_modelIdxAndFlags & 0x3FFF);
      this->m_instances.m_data[v26] = cinfo->m_instances[v26];
      this->m_estimatedNumShapeKeys += (*(__int64 (__fastcall **)(const void *))(*(_QWORD *)CollisionTileModelShape + 160i64))(CollisionTileModelShape);
      if ( (*(__int64 (__fastcall **)(const void *))(*(_QWORD *)CollisionTileModelShape + 24i64))(CollisionTileModelShape) )
        this->m_isMutable.m_bool = 1;
      ++v25;
      ++v26;
    }
    while ( v25 < cinfo->m_numInstances );
  }
  v28 = g_vectorfConstants[36];
  __asm
  {
    vpinsrw xmm0, xmm6, r13d, 1
    vpshufd xmm1, xmm0, 0
  }
  this->m_aabb.m_min.m_quad = g_vectorfConstants[36];
  this->m_aabb.m_max = (hkVector4f)(_XMM1 ^ *(_OWORD *)&v28);
  this->m_boundingRadius = 0.0;
  StaticModels_HavokShape::buildBoundingVolume(this);
  if ( cinfo->m_numInstances <= 0 )
  {
    this->m_aabb.m_min.m_quad = g_vectorfConstants[5];
    this->m_aabb.m_max.m_quad = g_vectorfConstants[5];
  }
  else
  {
    StaticModels_HavokShape::updateCachedBounds(this);
    m_massConfig = cinfo->m_massConfig;
    if ( m_massConfig )
      hknpShape::setMassProperties(this, m_massConfig);
  }
}

/*
==============
StaticModels_HavokShapeCinfo::StaticModels_HavokShapeCinfo
==============
*/
void StaticModels_HavokShapeCinfo::StaticModels_HavokShapeCinfo(StaticModels_HavokShapeCinfo *this)
{
  this->m_tileIdx = 0;
  this->m_shapeType = 0;
  this->m_instances = NULL;
  *(_QWORD *)&this->m_numInstances = 0i64;
  *(_WORD *)&this->m_isMutable = 0;
  this->m_massConfig = NULL;
}

/*
==============
StaticModels_HavokShapeInstance::StaticModels_HavokShapeInstance
==============
*/
void StaticModels_HavokShapeInstance::StaticModels_HavokShapeInstance(StaticModels_HavokShapeInstance *this)
{
  this->m_modelIdxAndFlags = 0x8000;
}

/*
==============
StaticModels_HavokShape::~StaticModels_HavokShape
==============
*/
void StaticModels_HavokShape::~StaticModels_HavokShape(StaticModels_HavokShape *this)
{
  hkMemoryAllocator *v2; 
  int m_capacityAndFlags; 
  hkMemoryAllocator *v4; 
  int v5; 
  hkReferencedObject *m_ptr; 

  this->__vftable = (StaticModels_HavokShape_vtbl *)&StaticModels_HavokShape::`vftable';
  hkSignal1<hknpShape const *>::fire(&this->m_mutationSignals.m_shapeDestroyed, this);
  StaticModels_HavokShapeSimdTree::~StaticModels_HavokShapeSimdTree(&this->m_boundingVolumeData.m_simdTree);
  hkReferencedObject::~hkReferencedObject(&this->m_boundingVolumeData);
  hkSignal::destroy(&this->m_mutationSignals.m_shapeDestroyed);
  hkSignal::destroy(&this->m_mutationSignals.m_shapeMutated);
  v2 = hkMemHeapAllocator();
  this->m_instanceVelocities.m_size = 0;
  m_capacityAndFlags = this->m_instanceVelocities.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v2, this->m_instanceVelocities.m_data, 32, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_instanceVelocities.m_data = NULL;
  this->m_instanceVelocities.m_capacityAndFlags = 0x80000000;
  v4 = hkMemHeapAllocator();
  this->m_instances.m_size = 0;
  v5 = this->m_instances.m_capacityAndFlags;
  if ( v5 >= 0 )
    hkMemoryAllocator::bufFree2(v4, this->m_instances.m_data, 4, v5 & 0x3FFFFFFF);
  this->m_instances.m_data = NULL;
  this->m_instances.m_capacityAndFlags = 0x80000000;
  m_ptr = this->m_materialTable.m_ptr;
  if ( m_ptr )
    hkReferencedObject::removeReference(m_ptr);
  hknpShape::~hknpShape(this);
}

/*
==============
StaticModels_HavokShape_GetLandscapeShapeHelper
==============
*/
void StaticModels_HavokShape_GetLandscapeShapeHelper(const hknpShape **shape, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *meshShapeKey, int *shapeKeyPathSizeOut, hknpShapeCollector *shapeCollector)
{
  const hknpShape *v8; 
  const hknpTriangleShape *TriangleShape; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> result; 

  if ( (*shape)->m_type.m_storage != 22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_havokshape.cpp", 58, ASSERT_TYPE_ASSERT, "(shape->getType() == hknpShapeType::USER_0)", (const char *)&queryFormat, "shape->getType() == hknpShapeType::USER_0") )
    __debugbreak();
  v8 = *shape;
  meshShapeKey->m_value = StaticModels_HavokShape::getChildShape((StaticModels_HavokShape *)*shape, &result, (hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>)meshShapeKey->m_value, shapeCollector)->m_value;
  if ( (shapeCollector->m_internal.m_flags.m_storage & 0x10) != 0 )
    TriangleShape = hknpShapeCollector::getTriangleShape(shapeCollector, 0, NULL);
  else
    TriangleShape = (const hknpTriangleShape *)shapeCollector->m_internal.m_shape;
  *shape = TriangleShape;
  *shapeKeyPathSizeOut += v8->m_numShapeKeyBits;
}

/*
==============
StaticModels_HavokShape_IsMeshShape
==============
*/
char StaticModels_HavokShape_IsMeshShape(const hknpShape *shape)
{
  float m_convexRadius; 
  int v3; 
  __int64 v4; 
  __int16 v5; 
  _BYTE *CollisionTileModelShape; 
  char v7; 

  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_havokshape.cpp", 21, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( shape->m_type.m_storage != 22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\staticmodels\\staticmodels_havokshape.cpp", 22, ASSERT_TYPE_ASSERT, "(shape->getType() == hknpShapeType::USER_0)", (const char *)&queryFormat, "shape->getType() == hknpShapeType::USER_0") )
    __debugbreak();
  m_convexRadius = shape[1].m_convexRadius;
  v3 = 0;
  if ( SLODWORD(m_convexRadius) <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(_QWORD *)&shape[1].m_flags.m_storage;
    v5 = *(_WORD *)(v4 + 4i64 * (unsigned __int16)v3);
    if ( v5 < 0 )
    {
      CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v5 & 0x4000) != 0, *(_DWORD *)&shape[1].m_memSizeAndFlags, *(_WORD *)(v4 + 4i64 * (unsigned __int16)v3) & 0x3FFF);
      if ( CollisionTileModelShape )
      {
        v7 = CollisionTileModelShape[26];
        if ( (unsigned __int8)(v7 - 9) <= 1u || v7 == 14 )
          break;
      }
    }
    if ( ++v3 >= SLODWORD(m_convexRadius) )
      return 0;
  }
  return 1;
}

/*
==============
StaticModels_HavokShape::afterReflectNew
==============
*/

void __fastcall StaticModels_HavokShape::afterReflectNew(StaticModels_HavokShape *this, __int64 a2, double _XMM2_8)
{
  bool v3; 
  __int64 v5; 
  __int64 v6; 
  const void *CollisionTileModelShape; 
  hkMemoryAllocator *v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  hkcdSimdTree::Node *m_data; 
  hkcdSimdTree::Node *v17; 

  v3 = this->m_estimatedNumShapeKeys == 0;
  this->m_type.m_storage = 22;
  if ( v3 )
  {
    v5 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
    if ( (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) != 0 )
    {
      v6 = 0i64;
      do
      {
        CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((this->m_instances.m_data[v6].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, this->m_instances.m_data[v6].m_modelIdxAndFlags & 0x3FFF);
        this->m_estimatedNumShapeKeys += (*(__int64 (__fastcall **)(const void *))(*(_QWORD *)CollisionTileModelShape + 160i64))(CollisionTileModelShape);
        ++v6;
      }
      while ( v6 < v5 );
    }
  }
  _XMM0.m_quad = (__m128)this->m_boundingVolumeData.m_simdTree.m_nodes.m_data[1].m_lx;
  __asm
  {
    vcmpleps xmm1, xmm0, xmmword ptr [rax+90h]
    vmovmskps eax, xmm1
  }
  if ( !_EAX )
  {
    v11 = hkMemHeapAllocator();
    v12 = this->m_boundingVolumeData.m_simdTree.m_nodes.m_capacityAndFlags & 0x3FFFFFFF;
    if ( v12 < 2 )
    {
      v13 = 2 * v12;
      v14 = 2;
      if ( v13 >= 0x3FFFFFFF )
        v13 = 1073741822;
      if ( v13 > 2 )
        v14 = v13;
      hkArrayUtil::_reserve(v11, &this->m_boundingVolumeData.m_simdTree, v14, 128);
    }
    this->m_boundingVolumeData.m_simdTree.m_nodes.m_size = 2;
    m_data = this->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
    __asm { vpxor   xmm2, xmm2, xmm2 }
    m_data->m_lx.m_quad = g_vectorfConstants[36];
    m_data->m_ly.m_quad = g_vectorfConstants[36];
    m_data->m_lz.m_quad = g_vectorfConstants[36];
    m_data->m_hx.m_quad = g_vectorfConstants[41];
    m_data->m_hy.m_quad = g_vectorfConstants[41];
    m_data->m_hz.m_quad = g_vectorfConstants[41];
    *(_OWORD *)m_data->m_data = _XMM2;
    *(_WORD *)&m_data->m_isLeaf = 0;
    v17 = this->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
    v17[1].m_lx.m_quad = g_vectorfConstants[36];
    v17[1].m_ly.m_quad = g_vectorfConstants[36];
    v17[1].m_lz.m_quad = g_vectorfConstants[36];
    v17[1].m_hx.m_quad = g_vectorfConstants[41];
    v17[1].m_hy.m_quad = g_vectorfConstants[41];
    v17[1].m_hz.m_quad = g_vectorfConstants[41];
    *(_OWORD *)v17[1].m_data = _XMM2;
    *(_WORD *)&v17[1].m_isLeaf = 0;
    this->m_boundingVolumeData.m_simdTree.m_points.m_size = 0;
    StaticModels_HavokShape::buildBoundingVolume(this);
  }
  StaticModels_HavokShape::updateCachedBounds(this);
}

/*
==============
StaticModels_HavokShape::buildMassProperties
==============
*/
void StaticModels_HavokShape::buildMassProperties(StaticModels_HavokShape *this, const hknpShape::MassConfig *massConfig, hkDiagonalizedMassProperties *massPropertiesOut)
{
  StaticModels_HavokShape::buildMassPropertiesMasked(this, massConfig, NULL, massPropertiesOut);
}

/*
==============
StaticModels_HavokShape::buildMassPropertiesMasked
==============
*/
void StaticModels_HavokShape::buildMassPropertiesMasked(StaticModels_HavokShape *this, const hknpShape::MassConfig *massConfig, const StaticModels_HavokShapeKeyMask *mask, hkDiagonalizedMassProperties *massPropertiesOut)
{
  hkDiagonalizedMassProperties *v4; 
  const hknpShape::MassConfig *v6; 
  hknpShape::MassConfig::Quality m_quality; 
  bool v9; 
  int v10; 
  hkMemoryRouter *Value; 
  int v12; 
  hkMassElement *m_cur; 
  char *v14; 
  __int128 v15; 
  int v16; 
  int v17; 
  StaticModels_HavokShapeInstance *m_data; 
  hkMemoryAllocator *v19; 
  int m_size; 
  hkMassElement *v21; 
  hkMassElement *v22; 
  hkMassElement *v23; 
  __m128 v24; 
  const void *CollisionTileModelShape; 
  hkRefCountedProperties *v26; 
  hkReferencedObject *v27; 
  int v28; 
  double CollisionTileModelInstanceScale; 
  char v30; 
  __m128 v31; 
  hkVector4f *p_scale; 
  __int128 v33; 
  float m_massOrNegativeDensity; 
  __m128 v35; 
  __m128 m_massOrNegativeDensity_low; 
  __m128 v37; 
  int v38; 
  char *v39; 
  int v40; 
  hkMemoryRouter *v41; 
  signed int v42; 
  int v43; 
  hkMemoryAllocator *v44; 
  hkArrayBase<hkMassElement> array; 
  void *p; 
  __int64 v47; 
  const hknpShape::MassConfig *v48; 
  hkDiagonalizedMassProperties *v49; 
  __int64 v50; 
  hkSimdFloat32 density_8; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __m128 v54; 
  hkVector4f scale; 
  hkMassProperties result; 
  hkDiagonalizedMassProperties v57; 

  v50 = -2i64;
  v4 = massPropertiesOut;
  v49 = massPropertiesOut;
  v6 = massConfig;
  v48 = massConfig;
  m_quality = massConfig->m_quality;
  if ( m_quality )
  {
    if ( (unsigned int)(m_quality - 1) <= 1 )
    {
      v9 = (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) == 0;
      v10 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
      array.m_data = NULL;
      *(_QWORD *)&array.m_size = 0x8000000000000000ui64;
      LODWORD(v47) = v10;
      if ( v9 )
      {
        array.m_data = NULL;
      }
      else
      {
        Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !Value )
          Value = hkMemoryRouter::s_fallbackRouter;
        v12 = (144 * v10 + 127) & 0xFFFFFF80;
        m_cur = (hkMassElement *)Value->m_stack.m_cur;
        v14 = (char *)m_cur + v12;
        if ( v12 > Value->m_stack.m_slabSize || v14 > Value->m_stack.m_end )
        {
          array.m_data = (hkMassElement *)hkLifoAllocator::allocateFromNewSlab(&Value->m_stack, v12);
        }
        else
        {
          Value->m_stack.m_cur = v14;
          array.m_data = m_cur;
        }
      }
      array.m_capacityAndFlags = v10 | 0x80000000;
      p = array.m_data;
      v15 = 0i64;
      v16 = 0;
      v17 = 0;
      if ( this->m_instances.m_size > 0 )
      {
        do
        {
          m_data = this->m_instances.m_data;
          if ( (m_data[v17].m_modelIdxAndFlags & 0x8000u) != 0 && (!mask || ((unsigned int (__fastcall *)(const StaticModels_HavokShapeKeyMask *, _QWORD))mask->isInstanceEnabled)(mask, (unsigned __int16)v17)) )
          {
            v19 = hkMemHeapAllocator();
            m_size = array.m_size;
            if ( array.m_size == (array.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v19, &array, 144);
              m_size = array.m_size;
            }
            v21 = array.m_data;
            v22 = &array.m_data[m_size];
            if ( v22 )
            {
              *(_QWORD *)&v22->m_properties.m_volume = 0i64;
              *(__m256i *)v22->m_properties.m_centerOfMass.m_quad.m128_f32 = (__m256i)0i64;
              *(__m256i *)v22->m_properties.m_inertiaTensor.m_col1.m_quad.m128_f32 = (__m256i)0i64;
              v22->m_transform.m_rotation = *(hkRotationImpl<float> *)g_vectorfConstants[32].m128_f32;
              v22->m_transform.m_translation.m_quad = g_vectorfConstants[35];
              m_size = array.m_size;
              v21 = array.m_data;
            }
            v23 = &v21[m_size];
            array.m_size = m_size + 1;
            StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_data[v17].m_modelIdxAndFlags & 0x3FFF, m_data[v17].m_instanceIdx, (vec3_t *)&density_8, &orientationAsQuat);
            qi.m_vec.m_quad = (__m128)orientationAsQuat;
            v23->m_transform.m_rotation = *(hkRotationImpl<float> *)g_vectorfConstants[32].m128_f32;
            v23->m_transform.m_translation.m_quad = g_vectorfConstants[35];
            hkRotationImpl<float>::set(&v23->m_transform.m_rotation, &qi);
            v23->m_transform.m_translation.m_quad.m128_f32[0] = 0.03125 * density_8.m_real.m128_f32[0];
            v24.m128_u64[1] = 0i64;
            v23->m_transform.m_translation.m_quad.m128_f32[1] = 0.03125 * density_8.m_real.m128_f32[1];
            v23->m_transform.m_translation.m_quad.m128_f32[2] = density_8.m_real.m128_f32[2] * 0.03125;
            v23->m_transform.m_translation.m_quad.m128_i32[3] = 0;
            CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((m_data[v17].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[v17].m_modelIdxAndFlags & 0x3FFF);
            v26 = (hkRefCountedProperties *)*((_QWORD *)CollisionTileModelShape + 6);
            if ( v26 && (v27 = hkRefCountedProperties::accessProperty(v26, 0xF100u)) != NULL )
            {
              hkCompressedMassProperties::unpack((hkCompressedMassProperties *)&v27[1], &v23->m_properties);
              v28 = 0;
            }
            else
            {
              v28 = -2147220992;
            }
            if ( v28 < 0 )
            {
              (*(void (__fastcall **)(const void *, const hknpShape::MassConfig *, hkDiagonalizedMassProperties *))(*(_QWORD *)CollisionTileModelShape + 224i64))(CollisionTileModelShape, v48, &v57);
              hkDiagonalizedMassProperties::unpack(&v57, &v23->m_properties);
            }
            CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v17].m_modelIdxAndFlags & 0x3FFF, m_data[v17].m_instanceIdx);
            if ( *(float *)&CollisionTileModelInstanceScale != 1.0 )
            {
              v30 = *((_BYTE *)CollisionTileModelShape + 26);
              *(double *)v24.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v17].m_modelIdxAndFlags & 0x3FFF, m_data[v17].m_instanceIdx);
              v31 = _mm_shuffle_ps(v24, v24, 0);
              v54 = v31;
              if ( v30 == 2 || v30 == 3 )
              {
                scale.m_quad = v31;
                p_scale = &scale;
              }
              else
              {
                p_scale = (hkVector4f *)&v54;
              }
              hkMassProperties::applyScale(&v23->m_properties, p_scale);
            }
            v33 = v15;
            *(float *)&v33 = *(float *)&v15 + v23->m_properties.m_volume;
            v15 = v33;
            v16 = 0;
          }
          ++v17;
        }
        while ( v17 < this->m_instances.m_size );
        v6 = v48;
        v4 = v49;
      }
      m_massOrNegativeDensity = v6->m_massOrNegativeDensity;
      if ( m_massOrNegativeDensity <= 0.0 )
      {
        v37 = 0i64;
        v37.m128_i32[0] = LODWORD(m_massOrNegativeDensity) ^ _xmm;
        v35 = v37;
      }
      else
      {
        m_massOrNegativeDensity_low = (__m128)LODWORD(v6->m_massOrNegativeDensity);
        m_massOrNegativeDensity_low.m128_f32[0] = m_massOrNegativeDensity / *(float *)&v15;
        v35 = m_massOrNegativeDensity_low;
      }
      density_8.m_real = _mm_shuffle_ps(v35, v35, 0);
      if ( array.m_size > 0 )
      {
        do
          hkMassProperties::scaleToDensity(&array.m_data[v16++].m_properties, &density_8);
        while ( v16 < array.m_size );
      }
      result.m_volume = 0.0;
      result.m_mass = 0.0;
      memset(&result.m_centerOfMass, 0, 64);
      hkInertiaTensorComputer::combineMassProperties(&array, &result);
      hkDiagonalizedMassProperties::pack(v4, &result);
      v38 = array.m_size;
      v39 = (char *)p;
      if ( p == array.m_data )
        v38 = 0;
      array.m_size = v38;
      v40 = v47;
      v41 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !v41 )
        v41 = hkMemoryRouter::s_fallbackRouter;
      v42 = (144 * v40 + 127) & 0xFFFFFF80;
      v43 = (v42 + 15) & 0xFFFFFFF0;
      if ( v42 > v41->m_stack.m_slabSize || &v39[v43] != v41->m_stack.m_cur || v41->m_stack.m_firstNonLifoEnd == v39 )
        hkLifoAllocator::slowBlockFree(&v41->m_stack, v39, v43);
      else
        v41->m_stack.m_cur = v39;
      v44 = hkMemHeapAllocator();
      array.m_size = 0;
      if ( array.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v44, array.m_data, 144, array.m_capacityAndFlags & 0x3FFFFFFF);
    }
  }
  else
  {
    hknpShape::buildMassProperties(this, massConfig, massPropertiesOut);
  }
}

/*
==============
StaticModels_HavokShape::buildSurfaceGeometry
==============
*/
hknpShape::BuildSurfaceGeometryConfig *StaticModels_HavokShape::buildSurfaceGeometry(StaticModels_HavokShape *this, const hknpShape::BuildSurfaceGeometryConfig *config, hkGeometry *geometryOut, hkArray<hkVector4f,hkContainerHeapAllocator> *edgesOut, int *a5)
{
  _DWORD *v6; 
  hknpShape::BuildSurfaceGeometryConfig *v8; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  StaticModels_HavokShapeInstance *m_data; 
  hkDefaultPropertyBag *m_bag; 
  hknpScaledConvexShapeBase *CollisionTileModelShape; 
  unsigned __int8 m_storage; 
  double CollisionTileModelInstanceScale; 
  const hknpConvexShape *v19; 
  unsigned int m_tileIdx; 
  __m128 v21; 
  __m128 v22; 
  hkResult (__fastcall *buildSurfaceGeometry)(hknpShape *, const hknpShape::BuildSurfaceGeometryConfig *, hkGeometry *, hkArray<hkVector4f,hkContainerHeapAllocator> *); 
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int16 CollisionTileModelShapeTag; 
  int v43; 
  hkMemoryAllocator *v44; 
  int *v45; 
  __int64 v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  __m128 *v51; 
  int v52; 
  __int64 v53; 
  hkMemoryAllocator *v54; 
  hkMemoryAllocator *v55; 
  hkMemoryAllocator *v56; 
  __int64 v58; 
  void *p; 
  __int64 v60; 
  hkGeometry *v61; 
  hkMatrix4Impl<float> transform; 
  int *v63; 
  const hknpShape::BuildSurfaceGeometryConfig *v64; 
  __int64 v65; 
  __m256 v66; 
  __m256i v67; 
  vec3_t origin; 
  vec3_t v69; 
  __int128 v70; 
  __int128 v71; 
  __m128 v72; 
  __int128 v73; 
  __m128 v74; 
  float v75; 
  hkVector4f scale; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  vec4_t v79; 
  hkQuaternionf v80; 
  hknpShapeBuffer bufferInOut; 
  char v82; 

  v65 = -2i64;
  v6 = edgesOut;
  v61 = (hkGeometry *)edgesOut;
  v8 = (hknpShape::BuildSurfaceGeometryConfig *)config;
  v64 = config;
  v63 = a5;
  hkGeometry::clear((hkGeometry *)edgesOut);
  v10 = 0;
  v11 = 0;
  v58 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
  if ( (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) != 0 )
  {
    v12 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
    do
    {
      v13 = (unsigned __int16)v11;
      m_data = this->m_instances.m_data;
      if ( (m_data[(unsigned __int16)v11].m_modelIdxAndFlags & 0x8000u) != 0 )
      {
        m_bag = geometryOut->m_propertyBag.m_bag;
        if ( !m_bag || (*(unsigned int (__fastcall **)(hkDefaultPropertyBag *, _QWORD))&m_bag->m_propertyMap.m_items.m_data->m_1.m_buf[2])(m_bag, (unsigned __int16)v11) )
        {
          CollisionTileModelShape = (hknpScaledConvexShapeBase *)StaticModels_GetCollisionTileModelShape((m_data[(unsigned __int16)v11].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v11].m_modelIdxAndFlags & 0x3FFF);
          m_storage = CollisionTileModelShape->m_type.m_storage;
          bufferInOut.m_shape = NULL;
          bufferInOut.m_buffer = &v82;
          bufferInOut.m_bufferSize = 96;
          bufferInOut.__vftable = (hknpShapeBuffer_vtbl *)hknpInplaceShapeBuffer<96>::`vftable';
          CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx);
          if ( *(float *)&CollisionTileModelInstanceScale == 1.0 || m_storage && m_storage != 1 )
          {
            m_tileIdx = this->m_tileIdx;
            StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx, &v69, &v79);
            v21.m128_u64[1] = *(_QWORD *)&v79.xyz.z;
            v80.m_vec.m_quad = (__m128)v79;
            *(double *)v21.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx);
            v66 = *(__m256 *)g_vectorfConstants[32].m128_f32;
            v67 = *(__m256i *)g_vectorfConstants[34].m128_f32;
            hkRotationImpl<float>::set((hkRotationImpl<float> *)&v66, &v80);
            *(float *)&v67.m256i_i32[4] = 0.03125 * v69.v[0];
            *(float *)&v67.m256i_i32[5] = 0.03125 * v69.v[1];
            *(float *)&v67.m256i_i32[6] = 0.03125 * v69.v[2];
            v22 = _mm_shuffle_ps(v21, v21, 0);
            _YMM3 = (__m256i)(unsigned __int128)v22;
            __asm { vinsertf128 ymm3, ymm3, xmm3, 1 }
            v66 = _mm256_mul_ps(_YMM3, v66);
            *(__m128 *)v67.m256i_i8 = _mm128_mul_ps(v22, *(__m128 *)v67.m256i_i8);
          }
          else
          {
            *(double *)_XMM0.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx);
            scale.m_quad = _mm_shuffle_ps(_XMM0, _XMM0, 0);
            v19 = NULL;
            if ( (CollisionTileModelShape->m_flags.m_storage & 1) != 0 )
              v19 = (const hknpConvexShape *)CollisionTileModelShape;
            CollisionTileModelShape = hknpScaledConvexShapeBase::createInPlace(&bufferInOut, v19, &scale, SCALE_SURFACE);
            StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF, m_data[v13].m_instanceIdx, &origin, &orientationAsQuat);
            qi.m_vec.m_quad = (__m128)orientationAsQuat;
            v66 = *(__m256 *)g_vectorfConstants[32].m128_f32;
            v67 = *(__m256i *)g_vectorfConstants[34].m128_f32;
            hkRotationImpl<float>::set((hkRotationImpl<float> *)&v66, &qi);
            *(float *)&v67.m256i_i32[4] = 0.03125 * origin.v[0];
            *(float *)&v67.m256i_i32[5] = 0.03125 * origin.v[1];
            *(float *)&v67.m256i_i32[6] = 0.03125 * origin.v[2];
          }
          *(float *)&v67.m256i_i32[7] = 0.0;
          transform.m_col0.m_quad.m128_u64[1] = 0i64;
          transform.m_col1.m_quad.m128_i32[0] = 0x1FFFF;
          transform.m_col0.m_quad.m128_u64[0] = (unsigned __int64)hkGeometry::`vftable';
          transform.m_col1.m_quad.m128_u64[1] = 0i64;
          transform.m_col2 = (hkVector4f)0x8000000000000000ui64;
          transform.m_col3.m_quad.m128_u64[0] = 0x8000000000000000ui64;
          p = NULL;
          v60 = 0x8000000000000000ui64;
          buildSurfaceGeometry = CollisionTileModelShape->buildSurfaceGeometry;
          v26 = (int)geometryOut->__vftable;
          WORD2(v70) = 0;
          *((_QWORD *)&v70 + 1) = 0i64;
          LODWORD(v71) = 2;
          v72 = g_vectorfConstants[6];
          LODWORD(v73) = 0;
          v74 = g_vectorfConstants[5];
          v75 = FLOAT_N1_0;
          LODWORD(v70) = v26;
          ((void (__fastcall *)(hknpScaledConvexShapeBase *, unsigned __int16 *, __int128 *, hkMatrix4Impl<float> *, void **))buildSurfaceGeometry)(CollisionTileModelShape, &transform.m_col3.m_quad.m128_u16[4], &v70, &transform, &p);
          if ( BYTE5(geometryOut->__vftable) )
          {
            v27 = (0xFFFFFFFF >> this->m_numShapeKeyBits) | (WORD2(v58) << (32 - this->m_numShapeKeyBits));
            v28 = transform.m_col3.m_quad.m128_i32[0] - 1;
            if ( transform.m_col3.m_quad.m128_i32[0] - 1 >= 0 )
            {
              v29 = 16i64 * (transform.m_col3.m_quad.m128_i32[0] - 1);
              do
              {
                *(_DWORD *)(transform.m_col2.m_quad.m128_u64[1] + v29 + 12) = v27;
                v29 -= 16i64;
                --v28;
              }
              while ( v28 >= 0 );
            }
          }
          else
          {
            v30 = transform.m_col3.m_quad.m128_i32[0] - 1;
            if ( transform.m_col3.m_quad.m128_i32[0] - 1 >= 0 )
            {
              v31 = 16i64 * (transform.m_col3.m_quad.m128_i32[0] - 1);
              do
              {
                CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((m_data[v13].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[v13].m_modelIdxAndFlags & 0x3FFF);
                *(_DWORD *)(transform.m_col2.m_quad.m128_u64[1] + v31 + 12) = CollisionTileModelShapeTag;
                v31 -= 16i64;
                --v30;
              }
              while ( v30 >= 0 );
            }
          }
          _XMM0 = *(_OWORD *)v66.m256_f32;
          __asm
          {
            vpslldq xmm1, xmm0, 4
            vpsrldq xmm1, xmm1, 4
          }
          v70 = _XMM1;
          _XMM0 = *(_OWORD *)&v66.m256_f32[4];
          __asm
          {
            vpslldq xmm2, xmm0, 4
            vpsrldq xmm1, xmm2, 4
          }
          v71 = _XMM1;
          _XMM0 = *(_OWORD *)v67.m256i_i8;
          __asm
          {
            vpslldq xmm2, xmm0, 4
            vpsrldq xmm1, xmm2, 4
          }
          v72 = _XMM1;
          _XMM0 = *(__m128 *)&v67.m256i_u64[2];
          __asm { vblendps xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants }
          v73 = _XMM2;
          v6 = v61;
          hkGeometry::appendGeometry(v61, (const hkGeometry *)&transform.m_col3.m_quad.m128_u32[3], &transform);
          if ( BYTE4(geometryOut->__vftable) )
          {
            v43 = v60;
            v44 = hkMemHeapAllocator();
            v45 = v63;
            v46 = v63[2];
            v47 = v46 + v43;
            v48 = v63[3] & 0x3FFFFFFF;
            v49 = v63[2];
            if ( v48 < (int)v46 + v43 )
            {
              v50 = 2 * v48;
              if ( (unsigned int)v50 >= 0x3FFFFFFF )
                v50 = 1073741822;
              if ( v47 < v50 )
                v47 = v50;
              hkArrayUtil::_reserve(v44, v63, v47, 16);
              v49 = v45[2];
            }
            v45[2] = v49 + v43;
            v51 = (__m128 *)(*(_QWORD *)v45 + 16 * v46);
            v52 = 0;
            if ( (int)v60 > 0 )
            {
              v53 = 0i64;
              do
              {
                _XMM0 = *(__m128 *)&geometryOut->m_vertices.m_size;
                *v51 = _mm128_add_ps(_mm128_mul_ps(_XMM0, *(__m128 *)((char *)p + v53)), *(__m128 *)&geometryOut[1].m_propertyBag.m_bag);
                ++v52;
                v53 += 16i64;
                ++v51;
              }
              while ( v52 < (int)v60 );
            }
            v6 = v61;
          }
          v54 = hkMemHeapAllocator();
          LODWORD(v60) = 0;
          if ( v60 >= 0 )
            hkMemoryAllocator::bufFree2(v54, p, 16, HIDWORD(v60) & 0x3FFFFFFF);
          p = NULL;
          HIDWORD(v60) = 0x80000000;
          transform.m_col0.m_quad.m128_u64[0] = (unsigned __int64)hkGeometry::`vftable';
          v55 = hkMemHeapAllocator();
          transform.m_col3.m_quad.m128_i32[0] = 0;
          if ( transform.m_col3.m_quad.m128_i32[1] >= 0 )
            hkMemoryAllocator::bufFree2(v55, (void *)transform.m_col2.m_quad.m128_u64[1], 16, transform.m_col3.m_quad.m128_i32[1] & 0x3FFFFFFF);
          transform.m_col2.m_quad.m128_u64[1] = 0i64;
          transform.m_col3.m_quad.m128_i32[1] = 0x80000000;
          v56 = hkMemHeapAllocator();
          transform.m_col2.m_quad.m128_i32[0] = 0;
          if ( transform.m_col2.m_quad.m128_i32[1] >= 0 )
            hkMemoryAllocator::bufFree2(v56, (void *)transform.m_col1.m_quad.m128_u64[1], 16, transform.m_col2.m_quad.m128_i32[1] & 0x3FFFFFFF);
          transform.m_col1.m_quad.m128_u64[1] = 0i64;
          transform.m_col2.m_quad.m128_i32[1] = 0x80000000;
          hkReferencedObject::~hkReferencedObject((hkReferencedObject *)&transform);
          bufferInOut.__vftable = (hknpShapeBuffer_vtbl *)hknpShapeBuffer::`vftable';
          if ( bufferInOut.m_shape )
            ((void (__fastcall *)(hknpShape *, _QWORD))bufferInOut.m_shape->~hkBaseObject)(bufferInOut.m_shape, 0i64);
          v11 = HIDWORD(v58);
        }
        v12 = v58;
      }
      HIDWORD(v58) = ++v11;
    }
    while ( v11 < v12 );
    v8 = (hknpShape::BuildSurfaceGeometryConfig *)v64;
  }
  if ( !v6[12] )
    v10 = -2147220992;
  v8->m_radiusMode = v10;
  return v8;
}

/*
==============
StaticModels_HavokShape::calcAabb
==============
*/
void StaticModels_HavokShape::calcAabb(StaticModels_HavokShape *this, const hkTransformf *transform, hkAabb *aabbOut)
{
  __int128 v11; 
  __m128 v24; 

  _RSI = this;
  hkAabbUtil::calcAabb(transform, &this->m_aabb, aabbOut);
  _XMM0.m_quad = (__m128)transform->m_rotation.m_col0;
  _XMM2.m_quad = (__m128)transform->m_rotation.m_col1;
  _XMM3.m_quad = (__m128)transform->m_rotation.m_col2;
  __asm
  {
    vdpps   xmm1, xmm0, xmm0, 71h ; 'q'
    vdpps   xmm0, xmm2, xmm2, 72h ; 'r'
  }
  v11 = _XMM1 | _XMM0;
  _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
  __asm { vdpps   xmm1, xmm3, xmm3, 74h ; 't' }
  _mm128_sub_ps((__m128)(v11 | _XMM1), g_vectorfConstants[6]);
  __asm
  {
    vbroadcastss xmm1, cs:__real@38d1b717
    vandnps xmm4, xmm0, xmm3
    vpxor   xmm0, xmm0, xmm0
    vcmpleps xmm5, xmm4, xmm1
    vpcmpeqd xmm1, xmm0, xmm0
    vblendps xmm2, xmm0, xmm1, 7
    vpand   xmm1, xmm5, xmm2
    vptest  xmm1, xmm2
  }
  if ( _CF )
  {
    _XMM5.m_quad = (__m128)aabbOut->m_min;
    v24 = _mm128_mul_ps(_mm128_add_ps(aabbOut->m_min.m_quad, aabbOut->m_max.m_quad), g_vectorfConstants[21]);
    __asm { vbroadcastss xmm3, dword ptr [rsi+90h] }
    _mm128_sub_ps(v24, _XMM3);
    __asm { vmaxps  xmm0, xmm5, xmm0 }
    aabbOut->m_min = (hkVector4f)_XMM0.m_quad;
    _XMM1.m_quad = (__m128)aabbOut->m_max;
    _mm128_add_ps(_XMM3, v24);
    __asm { vminps  xmm2, xmm1, xmm2 }
    aabbOut->m_max = (hkVector4f)_XMM2.m_quad;
  }
}

/*
==============
StaticModels_HavokShape::calcBoundingRadius
==============
*/
void StaticModels_HavokShape::calcBoundingRadius(StaticModels_HavokShape *this, const hkVector4f *pivot, hkSimdFloat32 *radiusOut)
{
  _XMM0 = _mm128_sub_ps(pivot->m_quad, _mm128_mul_ps(_mm128_add_ps(this->m_aabb.m_max.m_quad, this->m_aabb.m_min.m_quad), g_vectorfConstants[21]));
  __asm
  {
    vdpps   xmm6, xmm0, xmm0, 7Fh
    vrsqrtps xmm4, xmm6
    vcmpleps xmm5, xmm6, xmm0
    vbroadcastss xmm3, dword ptr [rcx+90h]
  }
  _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM6, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
  __asm { vandnps xmm4, xmm5, xmm0 }
  radiusOut->m_real = _mm128_add_ps(_XMM3, _XMM4);
}

/*
==============
StaticModels_HavokShape::calcBoundingSphere
==============
*/
void StaticModels_HavokShape::calcBoundingSphere(StaticModels_HavokShape *this, const hkTransformf *transform, hkSphere *sphereOut)
{
  hkVector4f b; 
  hkVector4f v9; 

  _RBX = this;
  b.m_quad = _mm128_mul_ps(_mm128_add_ps(this->m_aabb.m_max.m_quad, this->m_aabb.m_min.m_quad), g_vectorfConstants[21]);
  hkVector4f::setTransformedPos(&v9, transform, &b);
  __asm { vbroadcastss xmm3, dword ptr [rbx+90h] }
  _XMM0 = v9.m_quad;
  __asm { vblendps xmm1, xmm0, xmm3, 8 }
  *sphereOut = (hkSphere)_XMM1.m_pos.m_quad;
}

/*
==============
StaticModels_HavokShape::calcSurfaceVelocity
==============
*/
void StaticModels_HavokShape::calcSurfaceVelocity(StaticModels_HavokShape *this, const hknpShape::SurfaceVelocityInput *input, hknpShape::SurfaceVelocityOutput *output)
{
  unsigned int v5; 
  __m128 m_quad; 
  const hkVector4f *p_m_angularVelocity; 
  const hkTransformf *m_worldFromShape; 
  __m128 v21; 
  hkVector4f linVelShapeSpace; 

  v5 = input->m_shapeKey.m_value >> (32 - this->m_numShapeKeyBits);
  if ( (unsigned __int16)v5 < this->m_instanceVelocities.m_size )
  {
    _RAX = &this->m_instanceVelocities.m_data[(unsigned __int16)v5];
    m_quad = _RAX->m_angularVelocity.m_quad;
    p_m_angularVelocity = &_RAX->m_angularVelocity;
    __asm { vpxor   xmm1, xmm1, xmm1 }
    _XMM7 = _RAX->m_linearVelocity.m_quad;
    __asm
    {
      vpor    xmm0, xmm7, xmm6
      vpand   xmm2, xmm0, cs:?hkVector4Util_valueMask@@3QBHB; int const near * const hkVector4Util_valueMask
      vpcmpgtd xmm3, xmm2, xmm1
      vmovmskps eax, xmm3
    }
    if ( ((unsigned __int8)_RAX & 7) != 0 )
    {
      m_worldFromShape = input->m_worldFromShape;
      _mm128_sub_ps(input->m_pivotWs.m_quad, m_worldFromShape->m_translation.m_quad);
      _XMM1.m_quad = (__m128)m_worldFromShape->m_rotation.m_col1;
      _XMM0.m_quad = (__m128)m_worldFromShape->m_rotation.m_col0;
      __asm { vdpps   xmm3, xmm1, xmm5, 72h ; 'r' }
      _XMM1.m_quad = (__m128)m_worldFromShape->m_rotation.m_col2;
      __asm
      {
        vdpps   xmm2, xmm0, xmm5, 71h ; 'q'
        vdpps   xmm0, xmm1, xmm5, 74h ; 't'
      }
      v21 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)(_XMM3 | _XMM2 | _XMM0), (__m128)(_XMM3 | _XMM2 | _XMM0), 201), m_quad), _mm128_mul_ps(_mm_shuffle_ps(m_quad, m_quad, 201), (__m128)(_XMM3 | _XMM2 | _XMM0)));
      linVelShapeSpace.m_quad = _mm128_add_ps(_mm_shuffle_ps(v21, v21, 201), _XMM7);
      hknpShape::SurfaceVelocityOutput::setVelocityLs(output, input, &linVelShapeSpace, p_m_angularVelocity);
    }
  }
}

/*
==============
StaticModels_HavokShapeInstance::calculateAabb
==============
*/
void StaticModels_HavokShapeInstance::calculateAabb(StaticModels_HavokShapeInstance *this, unsigned int tileIdx, hkAabb *aabbOut)
{
  const hknpShape *CollisionTileModelShape; 
  unsigned int m_instanceIdx; 
  int v8; 
  __m128 v9; 
  vec3_t origin; 
  hkQuaternionf qi; 
  hkTransformf v12; 
  vec4_t orientationAsQuat; 

  CollisionTileModelShape = (const hknpShape *)StaticModels_GetCollisionTileModelShape((this->m_modelIdxAndFlags & 0x4000) != 0, tileIdx, this->m_modelIdxAndFlags & 0x3FFF);
  StaticModels_GetCollisionTileModelInstanceTransform(tileIdx, this->m_modelIdxAndFlags & 0x3FFF, this->m_instanceIdx, &origin, &orientationAsQuat);
  *(__m256i *)v12.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)v12.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
  qi.m_vec.m_quad = (__m128)orientationAsQuat;
  hkRotationImpl<float>::set(&v12.m_rotation, &qi);
  m_instanceIdx = this->m_instanceIdx;
  v8 = this->m_modelIdxAndFlags & 0x3FFF;
  v12.m_translation.m_quad.m128_f32[1] = 0.03125 * origin.v[1];
  v9 = 0i64;
  v12.m_translation.m_quad.m128_f32[3] = 0.0;
  v12.m_translation.m_quad.m128_f32[0] = 0.03125 * origin.v[0];
  v12.m_translation.m_quad.m128_f32[2] = 0.03125 * origin.v[2];
  *(double *)v9.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(tileIdx, v8, m_instanceIdx);
  if ( v9.m128_f32[0] == 1.0 )
  {
    CollisionTileModelShape->calcAabb((hknpShape *)CollisionTileModelShape, &v12, aabbOut);
  }
  else
  {
    *(double *)v9.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(tileIdx, this->m_modelIdxAndFlags & 0x3FFF, this->m_instanceIdx);
    qi.m_vec.m_quad = _mm_shuffle_ps(v9, v9, 0);
    hknpShapeUtil::calcAabbWithScale(CollisionTileModelShape, &v12, &qi.m_vec, SCALE_SURFACE, aabbOut);
  }
}

/*
==============
StaticModels_HavokShape::castRayImpl
==============
*/
void StaticModels_HavokShape::castRayImpl(StaticModels_HavokShape *this, hknpCollisionQueryContext *queryContext, const hknpRayCastQuery *query, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, hknpCollisionQueryCollector *collector)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v11; 
  const hknpShapeKeyMask *m_shapeKeyMask; 
  hkMonitorStream *v13; 
  hkMonitorStream *v14; 
  const hknpShapeKeyMask *v15; 
  hkcdSimdTree::ProcessRayCastLeaves processor; 
  StaticModels_HavokShape **v17; 
  hkMonitorStream *v18; 
  __int64 v19; 
  StaticModels_HavokShape *v20; 
  const hknpShapeKeyMask *v21; 
  char v22; 
  char v23; 
  hknpCollisionQueryContext *v24; 
  const hknpRayCastQuery *v25; 
  const hknpShapeQueryInfo *v26; 
  const hknpQueryFilterData *v27; 
  hknpCollisionQueryCollector *v28; 
  hkBaseObject v29; 
  char v30; 
  int v31; 
  __m128 v32; 
  char v33; 

  v19 = -2i64;
  if ( targetShapeInfo->m_shapeKeyMask )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v11 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtCompoundCastRay");
    v18 = v11;
    v30 = 0;
    v31 = 0;
    v32 = g_vectorfConstants[37];
    v33 = 0;
    v29.__vftable = (hkBaseObject_vtbl *)&StaticModels_HavokShapeEx::ScaleAndTransformCollector::`vftable';
    m_shapeKeyMask = targetShapeInfo->m_shapeKeyMask;
    v20 = this;
    v21 = m_shapeKeyMask;
    v22 = 0;
    v25 = query;
    v24 = queryContext;
    v26 = targetShapeInfo;
    v27 = targetShapeFilterData;
    v28 = collector;
    v23 = collector->m_hints.m_storage & 1;
    processor.__vftable = (hkcdSimdTree::ProcessRayCastLeaves_vtbl *)&hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0>::`vftable';
    v17 = &v20;
    hkcdSimdTree::rayCast_OutOfLine(&this->m_boundingVolumeData.m_simdTree, &query->m_ray, COERCE_FLOAT(*(_OWORD *)&collector->m_earlyOutThreshold), &processor, 1u);
    v29.__vftable = (hkBaseObject_vtbl *)hknpCollisionQueryCollector::`vftable';
    hkBaseObject::~hkBaseObject(&v29);
    if ( v11 )
      hkMonitorStream::timerEnd(v11, "Et");
  }
  else
  {
    v13 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v14 = v13;
    if ( v13 )
      hkMonitorStream::timerBegin(v13, "TtCompoundCastRay");
    v18 = v14;
    v30 = 0;
    v31 = 0;
    v32 = g_vectorfConstants[37];
    v33 = 0;
    v29.__vftable = (hkBaseObject_vtbl *)&StaticModels_HavokShapeEx::ScaleAndTransformCollector::`vftable';
    v15 = targetShapeInfo->m_shapeKeyMask;
    v20 = this;
    v21 = v15;
    v22 = 0;
    v25 = query;
    v24 = queryContext;
    v26 = targetShapeInfo;
    v27 = targetShapeFilterData;
    v28 = collector;
    v23 = collector->m_hints.m_storage & 1;
    processor.__vftable = (hkcdSimdTree::ProcessRayCastLeaves_vtbl *)&hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::`vftable';
    v17 = &v20;
    hkcdSimdTree::rayCast_OutOfLine(&this->m_boundingVolumeData.m_simdTree, &query->m_ray, COERCE_FLOAT(*(_OWORD *)&collector->m_earlyOutThreshold), &processor, 1u);
    v29.__vftable = (hkBaseObject_vtbl *)hknpCollisionQueryCollector::`vftable';
    hkBaseObject::~hkBaseObject(&v29);
    if ( v14 )
      hkMonitorStream::timerEnd(v14, "Et");
  }
}

/*
==============
StaticModels_HavokShape::castShapeImpl
==============
*/
void StaticModels_HavokShape::castShapeImpl(hknpCollisionQueryContext *queryContext, const hknpShapeCastQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpShape *targetShape, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, bool queryAndTargetSwapped, hknpCollisionQueryCollector *collector, hknpCollisionQueryCollector *startCollector)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v15; 
  __m128 *p_m_quad; 
  const hkTransformf *m_shapeToWorld; 
  __int64 v18; 
  __m128 *v19; 
  __m128 v32; 
  hknpShape *m_shape; 
  __m128 m_quad; 
  const hkTransformf *p_transform; 
  hkVector4f v41; 
  hkVector4f v42; 
  __m128 v49; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_shapeKeyMask; 
  __m128 v60; 
  hkMonitorStream *v65; 
  hkMonitorStream *v66; 
  __m128 *v67; 
  const hkTransformf *v68; 
  __int64 v69; 
  __m128 *v70; 
  __m128 v83; 
  hknpShape *v84; 
  __m128 v86; 
  const hkTransformf *p_querya; 
  hkVector4f v92; 
  hkVector4f v93; 
  __m128 v100; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v109; 
  __m128 v111; 
  hkVector4f halfExtents; 
  hkMonitorStream *v117; 
  __int64 v118; 
  hkAabb aabbOut; 
  StaticModels_HavokShapeEx::ShapeCast<1> querya; 
  hkTransformf transform; 

  v118 = -2i64;
  _RDI = queryShapeInfo;
  _RBX = targetShapeInfo;
  if ( targetShapeInfo->m_shapeKeyMask )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v15 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtCompoundCastShape");
    v117 = v15;
    if ( _RDI->m_scalingInternals.m_isScaled )
    {
      StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(_RDI, targetShapeInfo, (hkTransformf *)&querya, &halfExtents);
      m_quad = halfExtents.m_quad;
      _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
      __asm { vandnps xmm6, xmm0, xmm9 }
      m_shape = (hknpShape *)query->m_shape;
      if ( (m_shape->m_flags.m_storage & 1) != 0 )
      {
        hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)m_shape, (const hkTransformf *)&querya, &aabbOut);
        __asm { vbroadcastss xmm3, dword ptr [rdi+38h] }
        goto LABEL_18;
      }
    }
    else
    {
      p_m_quad = &_RDI->m_shapeToWorld->m_rotation.m_col0.m_quad;
      m_shapeToWorld = targetShapeInfo->m_shapeToWorld;
      v18 = 3i64;
      v19 = p_m_quad + 3;
      do
      {
        _XMM0.m_quad = (__m128)m_shapeToWorld->m_rotation.m_col0;
        _XMM1.m_quad = (__m128)m_shapeToWorld->m_rotation.m_col1;
        _XMM3.m_quad = (__m128)m_shapeToWorld->m_rotation.m_col2;
        __asm
        {
          vdpps   xmm4, xmm0, xmm2, 71h ; 'q'
          vdpps   xmm1, xmm1, xmm2, 72h ; 'r'
          vdpps   xmm2, xmm3, xmm2, 74h ; 't'
        }
        *(__m128 *)((char *)v19-- + (char *)&querya - (char *)p_m_quad) = (__m128)(_XMM2 | _XMM1 | _XMM4);
        --v18;
      }
      while ( v18 >= 0 );
      _mm128_sub_ps(p_m_quad[3], m_shapeToWorld->m_translation.m_quad);
      _XMM1.m_quad = (__m128)m_shapeToWorld->m_rotation.m_col0;
      _XMM0.m_quad = (__m128)m_shapeToWorld->m_rotation.m_col1;
      _XMM3.m_quad = (__m128)m_shapeToWorld->m_rotation.m_col2;
      __asm
      {
        vdpps   xmm4, xmm1, xmm5, 71h ; 'q'
        vdpps   xmm2, xmm0, xmm5, 72h ; 'r'
        vdpps   xmm1, xmm3, xmm5, 74h ; 't'
      }
      v32 = (__m128)(_XMM1 | _XMM2 | _XMM4);
      *(__m128 *)&querya.m_targetShapeFilterData = v32;
      m_shape = (hknpShape *)query->m_shape;
      if ( targetShapeInfo->m_scalingInternals.m_isScaled )
      {
        __asm { vrcpps  xmm2, xmmword ptr [rbx+40h] }
        m_quad = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, targetShapeInfo->m_scalingInternals.m_scale.m_quad)), _XMM2);
        _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
        __asm { vandnps xmm6, xmm0, xmm9 }
        transform.m_translation.m_quad = _mm128_mul_ps(v32, m_quad);
        transform.m_rotation.m_col0.m_quad = _mm128_mul_ps(_XMM2, m_quad);
        transform.m_rotation.m_col1.m_quad = _mm128_mul_ps(m_quad, *(__m128 *)&querya.m_hasHit);
        transform.m_rotation.m_col2.m_quad = _mm128_mul_ps(m_quad, *(__m128 *)&querya.m_query);
        p_transform = &transform;
        if ( (m_shape->m_flags.m_storage & 1) != 0 )
        {
          hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)m_shape, &transform, &aabbOut);
          _RAX = query->m_shape;
          __asm { vbroadcastss xmm3, dword ptr [rax+20h] }
LABEL_18:
          v60 = _mm128_mul_ps(_XMM3, _XMM6);
          _mm_shuffle_ps(v60, v60, 0);
          _XMM0 = _mm_shuffle_ps(v60, v60, 85);
          __asm { vmaxps  xmm2, xmm0, xmm1 }
          _XMM1 = _mm_shuffle_ps(v60, v60, 170);
          __asm { vmaxps  xmm3, xmm1, xmm2 }
          v41.m_quad = _mm128_add_ps(_XMM3, aabbOut.m_max.m_quad);
          v42.m_quad = _mm128_sub_ps(aabbOut.m_min.m_quad, _XMM3);
LABEL_13:
          _XMM3 = query->m_rotationCenterLocal.m_quad.m128_u32[3];
          __asm { vmaxss  xmm3, xmm3, dword ptr [rsi+68h] }
          _mm_shuffle_ps(_XMM6, _XMM6, 0);
          _XMM0 = _mm_shuffle_ps(_XMM6, _XMM6, 85);
          __asm { vmaxps  xmm2, xmm0, xmm1 }
          _XMM1 = _mm_shuffle_ps(_XMM6, _XMM6, 170);
          __asm { vmaxps  xmm2, xmm1, xmm2 }
          v49 = _mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 0), _XMM2);
          aabbOut.m_max.m_quad = _mm128_add_ps(v49, v41.m_quad);
          aabbOut.m_min.m_quad = _mm128_sub_ps(v42.m_quad, v49);
          _XMM0 = _mm128_mul_ps(m_quad, query->m_ray.m_direction.m_quad);
          __asm
          {
            vblendps xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
            vcmpeqps xmm0, xmm1, xmm2
            vandnps xmm4, xmm0, xmm1
            vcmpeqps xmm0, xmm4, xmm2
            vrcpps  xmm3, xmm4
          }
          _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM4.m_quad)), _XMM3);
          __asm { vblendvps xmm2, xmm3, xmm1, xmm0 }
          transform.m_rotation.m_col1 = (hkVector4f)_XMM4.m_quad;
          transform.m_rotation.m_col2 = (hkVector4f)_XMM2.m_quad;
          transform.m_rotation.m_col0.m_quad = _mm128_mul_ps(_mm128_add_ps(aabbOut.m_max.m_quad, aabbOut.m_min.m_quad), g_vectorfConstants[21]);
          halfExtents.m_quad = _mm128_mul_ps(_mm128_sub_ps(aabbOut.m_max.m_quad, aabbOut.m_min.m_quad), g_vectorfConstants[21]);
          m_shapeKeyMask = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
          querya.m_targetShape = (const StaticModels_HavokShape *)targetShape;
          querya.m_simdTreeMask = m_shapeKeyMask;
          querya.m_hasHit = 0;
          querya.m_queryContext = queryContext;
          querya.m_query = query;
          querya.m_queryShapeInfo = _RDI;
          querya.m_targetShapeFilterData = targetShapeFilterData;
          querya.m_targetShapeInfo = targetShapeInfo;
          querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
          querya.m_collector = collector;
          querya.m_startCollector = startCollector;
          querya.m_earlyExit = collector->m_hints.m_storage & 1;
          hkcdSimdTree::aabbCast<StaticModels_HavokShapeEx::ShapeCast<1>>((hkcdSimdTree *)&targetShape[3].m_convexRadius, (const hkcdRay *)&transform, &halfExtents, &querya, (collector->m_hints.m_storage & 0x41) == 0, 1u);
          if ( v15 )
            hkMonitorStream::timerEnd(v15, "Et");
          return;
        }
LABEL_12:
        m_shape->calcAabb(m_shape, p_transform, &aabbOut);
        v41.m_quad = (__m128)aabbOut.m_max;
        v42.m_quad = (__m128)aabbOut.m_min;
        goto LABEL_13;
      }
      m_quad = g_vectorfConstants[6];
      _XMM6 = g_vectorfConstants[6];
    }
    p_transform = (const hkTransformf *)&querya;
    goto LABEL_12;
  }
  v65 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v66 = v65;
  if ( v65 )
    hkMonitorStream::timerBegin(v65, "TtCompoundCastShape");
  v117 = v66;
  if ( _RDI->m_scalingInternals.m_isScaled )
  {
    StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(_RDI, targetShapeInfo, (hkTransformf *)&querya, &halfExtents);
    v86 = halfExtents.m_quad;
    _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
    __asm { vandnps xmm6, xmm0, xmm9 }
    v84 = (hknpShape *)query->m_shape;
    if ( (v84->m_flags.m_storage & 1) != 0 )
    {
      hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)v84, (const hkTransformf *)&querya, &aabbOut);
      __asm { vbroadcastss xmm3, dword ptr [rdi+38h] }
      goto LABEL_35;
    }
    goto LABEL_28;
  }
  v67 = &_RDI->m_shapeToWorld->m_rotation.m_col0.m_quad;
  v68 = targetShapeInfo->m_shapeToWorld;
  v69 = 3i64;
  v70 = v67 + 3;
  do
  {
    _XMM0.m_quad = (__m128)v68->m_rotation.m_col0;
    _XMM1.m_quad = (__m128)v68->m_rotation.m_col1;
    _XMM3.m_quad = (__m128)v68->m_rotation.m_col2;
    __asm
    {
      vdpps   xmm4, xmm0, xmm2, 71h ; 'q'
      vdpps   xmm1, xmm1, xmm2, 72h ; 'r'
      vdpps   xmm2, xmm3, xmm2, 74h ; 't'
    }
    *(__m128 *)((char *)v70-- + (char *)&querya - (char *)v67) = (__m128)(_XMM2 | _XMM1 | _XMM4);
    --v69;
  }
  while ( v69 >= 0 );
  _mm128_sub_ps(v67[3], v68->m_translation.m_quad);
  _XMM1.m_quad = (__m128)v68->m_rotation.m_col0;
  _XMM0.m_quad = (__m128)v68->m_rotation.m_col1;
  _XMM3.m_quad = (__m128)v68->m_rotation.m_col2;
  __asm
  {
    vdpps   xmm4, xmm1, xmm5, 71h ; 'q'
    vdpps   xmm2, xmm0, xmm5, 72h ; 'r'
    vdpps   xmm1, xmm3, xmm5, 74h ; 't'
  }
  v83 = (__m128)(_XMM1 | _XMM2 | _XMM4);
  *(__m128 *)&querya.m_targetShapeFilterData = v83;
  v84 = (hknpShape *)query->m_shape;
  if ( !targetShapeInfo->m_scalingInternals.m_isScaled )
  {
    v86 = g_vectorfConstants[6];
    _XMM6 = g_vectorfConstants[6];
LABEL_28:
    p_querya = (const hkTransformf *)&querya;
    goto LABEL_29;
  }
  __asm { vrcpps  xmm2, xmmword ptr [rbx+40h] }
  v86 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, targetShapeInfo->m_scalingInternals.m_scale.m_quad)), _XMM2);
  _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
  __asm { vandnps xmm6, xmm0, xmm9 }
  transform.m_translation.m_quad = _mm128_mul_ps(v86, v83);
  transform.m_rotation.m_col0.m_quad = _mm128_mul_ps(v86, _XMM2);
  transform.m_rotation.m_col1.m_quad = _mm128_mul_ps(v86, *(__m128 *)&querya.m_hasHit);
  transform.m_rotation.m_col2.m_quad = _mm128_mul_ps(v86, *(__m128 *)&querya.m_query);
  p_querya = &transform;
  if ( (v84->m_flags.m_storage & 1) == 0 )
  {
LABEL_29:
    v84->calcAabb(v84, p_querya, &aabbOut);
    v92.m_quad = (__m128)aabbOut.m_max;
    v93.m_quad = (__m128)aabbOut.m_min;
    goto LABEL_30;
  }
  hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)v84, &transform, &aabbOut);
  _RAX = query->m_shape;
  __asm { vbroadcastss xmm3, dword ptr [rax+20h] }
LABEL_35:
  v111 = _mm128_mul_ps(_XMM6, _XMM3);
  _mm_shuffle_ps(v111, v111, 0);
  _XMM0 = _mm_shuffle_ps(v111, v111, 85);
  __asm { vmaxps  xmm2, xmm0, xmm1 }
  _XMM1 = _mm_shuffle_ps(v111, v111, 170);
  __asm { vmaxps  xmm3, xmm1, xmm2 }
  v92.m_quad = _mm128_add_ps(_XMM3, aabbOut.m_max.m_quad);
  v93.m_quad = _mm128_sub_ps(aabbOut.m_min.m_quad, _XMM3);
LABEL_30:
  _XMM3 = query->m_rotationCenterLocal.m_quad.m128_u32[3];
  __asm { vmaxss  xmm3, xmm3, dword ptr [rsi+68h] }
  _mm_shuffle_ps(_XMM6, _XMM6, 0);
  _XMM0 = _mm_shuffle_ps(_XMM6, _XMM6, 85);
  __asm { vmaxps  xmm2, xmm0, xmm1 }
  _XMM1 = _mm_shuffle_ps(_XMM6, _XMM6, 170);
  __asm { vmaxps  xmm2, xmm1, xmm2 }
  v100 = _mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 0), _XMM2);
  aabbOut.m_max.m_quad = _mm128_add_ps(v100, v92.m_quad);
  aabbOut.m_min.m_quad = _mm128_sub_ps(v93.m_quad, v100);
  _XMM0 = _mm128_mul_ps(v86, query->m_ray.m_direction.m_quad);
  __asm
  {
    vblendps xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
    vcmpeqps xmm0, xmm1, xmm2
    vandnps xmm4, xmm0, xmm1
    vcmpeqps xmm0, xmm4, xmm2
    vrcpps  xmm3, xmm4
  }
  _XMM3 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM3, _XMM4.m_quad)), _XMM3);
  __asm { vblendvps xmm2, xmm3, xmm1, xmm0 }
  transform.m_rotation.m_col1 = (hkVector4f)_XMM4.m_quad;
  transform.m_rotation.m_col2 = (hkVector4f)_XMM2.m_quad;
  transform.m_rotation.m_col0.m_quad = _mm128_mul_ps(_mm128_add_ps(aabbOut.m_max.m_quad, aabbOut.m_min.m_quad), g_vectorfConstants[21]);
  halfExtents.m_quad = _mm128_mul_ps(_mm128_sub_ps(aabbOut.m_max.m_quad, aabbOut.m_min.m_quad), g_vectorfConstants[21]);
  v109 = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
  querya.m_targetShape = (const StaticModels_HavokShape *)targetShape;
  querya.m_simdTreeMask = v109;
  querya.m_hasHit = 0;
  querya.m_queryContext = queryContext;
  querya.m_query = query;
  querya.m_queryShapeInfo = _RDI;
  querya.m_targetShapeFilterData = targetShapeFilterData;
  querya.m_targetShapeInfo = targetShapeInfo;
  querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
  querya.m_collector = collector;
  querya.m_startCollector = startCollector;
  querya.m_earlyExit = collector->m_hints.m_storage & 1;
  hkcdSimdTree::aabbCast<StaticModels_HavokShapeEx::ShapeCast<0>>((hkcdSimdTree *)&targetShape[3].m_convexRadius, (const hkcdRay *)&transform, &halfExtents, (StaticModels_HavokShapeEx::ShapeCast<0> *)&querya, (collector->m_hints.m_storage & 0x41) == 0, 1u);
  if ( v66 )
    hkMonitorStream::timerEnd(v66, "Et");
}

/*
==============
StaticModels_HavokShape::checkConsistency
==============
*/
void StaticModels_HavokShape::checkConsistency(StaticModels_HavokShape *this)
{
  ;
}

/*
==============
StaticModels_HavokShape::createShapeKeyMask
==============
*/
void StaticModels_HavokShape::createShapeKeyMask(StaticModels_HavokShape *this)
{
  hkMemoryRouter *Value; 
  StaticModels_HavokShapeInternalsSimdTreeKeyMask *v3; 

  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v3 = (StaticModels_HavokShapeInternalsSimdTreeKeyMask *)Value->m_heap->blockAlloc(Value->m_heap, 56i64);
  if ( v3 )
    StaticModels_HavokShapeInternalsSimdTreeKeyMask::StaticModels_HavokShapeInternalsSimdTreeKeyMask(v3, this);
}

/*
==============
StaticModels_HavokShape::estimateNumShapeKeys
==============
*/
__int64 StaticModels_HavokShape::estimateNumShapeKeys(StaticModels_HavokShape *this)
{
  return (unsigned int)this->m_estimatedNumShapeKeys;
}

/*
==============
StaticModels_HavokShape::getChildShape
==============
*/
hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *StaticModels_HavokShape::getChildShape(StaticModels_HavokShape *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *result, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> key, hknpShapeCollector *collector)
{
  __m128 v4; 
  StaticModels_HavokShapeInstance *m_data; 
  __int64 v9; 
  unsigned int m_storage; 
  __int128 v12; 
  hkVector4f v16; 
  hkVector4f v17; 
  hkVector4f v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  hkVector4f v26; 
  unsigned int m_instanceIdx; 
  unsigned int m_tileIdx; 
  unsigned int v29; 
  int v30; 
  double CollisionTileModelInstanceScale; 
  unsigned int v32; 
  int v33; 
  bool v36; 
  unsigned __int16 CollisionTileModelShapeTag; 
  unsigned int v38; 
  hknpScaledConvexShapeBase *CollisionTileModelShape; 
  const hknpConvexShape *v47; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *v48; 
  unsigned int v49; 
  vec3_t origin; 
  char v52[64]; 
  __m128 orientationAsQuat; 
  hkQuaternionf qi; 
  __m128 v55; 

  m_data = this->m_instances.m_data;
  v9 = (unsigned __int16)(key.m_value >> (32 - this->m_numShapeKeyBits));
  StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_data[v9].m_modelIdxAndFlags & 0x3FFF, m_data[v9].m_instanceIdx, &origin, (vec4_t *)&orientationAsQuat);
  *(__m256i *)v52 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)&v52[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
  qi.m_vec.m_quad = orientationAsQuat;
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v52, &qi);
  m_storage = collector->m_internal.m_flags.m_storage;
  v12 = LODWORD(origin.v[0]);
  *(float *)&v12 = origin.v[0] * 0.03125;
  _XMM5 = v12;
  __asm
  {
    vinsertps xmm5, xmm5, xmm3, 10h
    vinsertps xmm5, xmm5, xmm4, 20h ; ' '
    vinsertps xmm5, xmm5, xmm1, 30h ; '0'
  }
  v16.m_quad = _mm128_mul_ps(_XMM5, collector->m_internal.m_scale.m_quad);
  if ( (m_storage & 1) != 0 )
  {
    *(__m256i *)collector->m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)v52;
    v17.m_quad.m128_u64[1] = *(_QWORD *)&v52[40];
    collector->m_transform.m_rotation.m_col2 = *(hkVector4f *)&v52[32];
    collector->m_transform.m_translation = (hkVector4f)v16.m_quad;
  }
  else if ( (m_storage & 4) != 0 )
  {
    *(__m256i *)collector->m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)v52;
    v17.m_quad.m128_u64[1] = *(_QWORD *)&v52[40];
    collector->m_transform.m_rotation.m_col2 = *(hkVector4f *)&v52[32];
    collector->m_transform.m_translation.m_quad = _mm128_add_ps(v16.m_quad, collector->m_transform.m_translation.m_quad);
  }
  else
  {
    v55 = v4;
    _YMM10 = *(__m256i *)collector->m_transform.m_rotation.m_col0.m_quad.m128_f32;
    __asm { vextractf128 xmm9, ymm10, 1 }
    v20.m_quad = (__m128)collector->m_transform.m_rotation.m_col2;
    v21 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v16.m_quad, v16.m_quad, 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(v16.m_quad, v16.m_quad, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(v16.m_quad, v16.m_quad, 170), v20.m_quad));
    v22 = *(__m128 *)&v52[16];
    v23 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v22, v22, 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(v22, v22, 0), v4));
    v24 = _mm_shuffle_ps(v22, v22, 170);
    v25 = *(__m128 *)v52;
    v26.m_quad = _mm128_add_ps(v23, _mm128_mul_ps(v24, v20.m_quad));
    v17.m_quad = _mm128_add_ps(v21, collector->m_transform.m_translation.m_quad);
    collector->m_transform.m_rotation.m_col2.m_quad = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v52[32], *(__m128 *)&v52[32], 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v52[32], *(__m128 *)&v52[32], 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v52[32], *(__m128 *)&v52[32], 170), v20.m_quad));
    collector->m_transform.m_rotation.m_col0.m_quad = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v25, v25, 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(v25, v25, 0), v4)), _mm128_mul_ps(_mm_shuffle_ps(v25, v25, 170), v20.m_quad));
    collector->m_transform.m_rotation.m_col1 = (hkVector4f)v26.m_quad;
    collector->m_transform.m_translation = (hkVector4f)v17.m_quad;
  }
  m_instanceIdx = m_data[v9].m_instanceIdx;
  m_tileIdx = this->m_tileIdx;
  v29 = m_storage & 0xFFFFFFF8 | 2;
  v30 = m_data[v9].m_modelIdxAndFlags & 0x3FFF;
  collector->m_internal.m_flags.m_storage = v29;
  CollisionTileModelInstanceScale = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, v30, m_instanceIdx);
  if ( *(float *)&CollisionTileModelInstanceScale != 1.0 )
    collector->m_internal.m_flags.m_storage = v29 | 0x40;
  *(double *)v17.m_quad.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v9].m_modelIdxAndFlags & 0x3FFF, m_data[v9].m_instanceIdx);
  v32 = this->m_tileIdx;
  v33 = m_data[v9].m_modelIdxAndFlags & 0x3FFF;
  _XMM0 = _mm_shuffle_ps(v17.m_quad, v17.m_quad, 0);
  _XMM6.m_quad = _mm128_mul_ps(_XMM0, collector->m_internal.m_scale.m_quad);
  v36 = (m_data[v9].m_modelIdxAndFlags & 0x4000) != 0;
  collector->m_parentShape = this;
  collector->m_internal.m_scale = (hkVector4f)_XMM6.m_quad;
  CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag(v36, v32, v33);
  v38 = this->m_tileIdx;
  collector->m_internal.m_shapeTags[0] = CollisionTileModelShapeTag;
  CollisionTileModelShape = (hknpScaledConvexShapeBase *)StaticModels_GetCollisionTileModelShape((m_data[v9].m_modelIdxAndFlags & 0x4000) != 0, v38, m_data[v9].m_modelIdxAndFlags & 0x3FFF);
  __asm
  {
    vcmpeqps xmm3, xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vpxor   xmm0, xmm0, xmm0
    vpcmpeqd xmm1, xmm0, xmm0
    vblendps xmm2, xmm0, xmm1, 7
  }
  if ( CollisionTileModelShape->m_dispatchType.m_storage == 2 )
  {
    __asm
    {
      vpand   xmm0, xmm3, xmm2
      vptest  xmm0, xmm2
    }
    if ( !_CF )
    {
      v47 = NULL;
      if ( (CollisionTileModelShape->m_flags.m_storage & 1) != 0 )
        v47 = (const hknpConvexShape *)CollisionTileModelShape;
      CollisionTileModelShape = hknpScaledConvexShapeBase::createInPlace(&collector->m_internal.m_shapeBuffer, v47, &collector->m_internal.m_scale, (hknpShape::ScaleMode)((collector->m_internal.m_flags.m_storage & 0x40) == 0));
      collector->m_internal.m_scale.m_quad = g_vectorfConstants[6];
    }
  }
  collector->m_internal.m_shape = CollisionTileModelShape;
  collector->m_internal.m_flags.m_storage &= ~8u;
  v48 = result;
  v49 = ((key.m_value + 1) << this->m_numShapeKeyBits) - 1;
  collector->m_internal.m_numShapesStored = 1;
  result->m_value = v49;
  return v48;
}

/*
==============
StaticModels_HavokShape::getClosestPointsImpl
==============
*/
void StaticModels_HavokShape::getClosestPointsImpl(hknpCollisionQueryContext *queryContext, const hknpClosestPointsQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const StaticModels_HavokShape *targetShape, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, const hkTransformf *queryToTarget, bool queryAndTargetSwapped, hknpCollisionQueryCollector *collector)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_shapeKeyMask; 
  const hknpShape *m_shape; 
  __m128 v18; 
  __m128 v19; 
  __m128 v23; 
  StaticModels_HavokShapeSimdTree *p_m_simdTree; 
  hkMonitorStream *v37; 
  hkMonitorStream *v38; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v39; 
  const hknpShape *v40; 
  __m128 v42; 
  __m128 v43; 
  __m128 v47; 
  StaticModels_HavokShapeSimdTree *v60; 
  hkVector4f targetScaleInvOut; 
  hkMonitorStream *v62; 
  __int64 v63; 
  hkAabb aabbOut; 
  hkTransformf transform; 
  StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1> querya; 

  v63 = -2i64;
  targetScaleInvOut.m_quad.m128_u64[0] = (unsigned __int64)queryContext;
  _RBX = targetShapeInfo;
  if ( targetShapeInfo->m_shapeKeyMask )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v14 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtCompoundGetClosestPoints");
    v62 = v14;
    m_shapeKeyMask = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
    querya.m_targetShape = targetShape;
    querya.m_simdTreeMask = m_shapeKeyMask;
    querya.m_hasHit = 0;
    querya.m_queryContext = (hknpCollisionQueryContext *)targetScaleInvOut.m_quad.m128_u64[0];
    querya.m_query = query;
    querya.m_queryShapeInfo = queryShapeInfo;
    querya.m_targetShapeInfo = targetShapeInfo;
    querya.m_targetShapeFilterData = targetShapeFilterData;
    querya.m_queryToTarget = *queryToTarget;
    querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
    querya.m_collector = collector;
    if ( queryShapeInfo->m_scalingInternals.m_isScaled )
    {
      StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(queryShapeInfo, targetShapeInfo, &transform, &targetScaleInvOut);
      query->m_shape->calcAabb((hknpShape *)query->m_shape, &transform, &aabbOut);
    }
    else
    {
      m_shape = query->m_shape;
      if ( targetShapeInfo->m_scalingInternals.m_isScaled )
      {
        __asm { vrcpps  xmm2, xmmword ptr [rbx+40h] }
        v18 = _mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, targetShapeInfo->m_scalingInternals.m_scale.m_quad));
        v19 = _mm128_mul_ps(v18, _XMM2);
        transform = *queryToTarget;
        __asm { vextractf128 xmm0, ymm0, 1 }
        transform.m_translation.m_quad = _mm128_mul_ps(_XMM0, v19);
        transform.m_rotation.m_col0.m_quad = _mm128_mul_ps(v18, v19);
        transform.m_rotation.m_col1.m_quad = _mm128_mul_ps(v19, transform.m_rotation.m_col1.m_quad);
        transform.m_rotation.m_col2.m_quad = _mm128_mul_ps(v19, transform.m_rotation.m_col2.m_quad);
        _RDI = (hknpConvexShape *)m_shape;
        if ( (m_shape->m_flags.m_storage & 1) == 0 )
          _RDI = NULL;
        if ( _RDI )
        {
          hknpConvexShape::calcAabbNoRadius(_RDI, &transform, &aabbOut);
          __asm { vbroadcastss xmm3, dword ptr [rdi+20h] }
          v23 = _mm128_mul_ps(v19, _XMM3);
          _mm_shuffle_ps(v23, v23, 0);
          _XMM0 = _mm_shuffle_ps(v23, v23, 85);
          __asm { vmaxps  xmm2, xmm0, xmm1 }
          _XMM1 = _mm_shuffle_ps(v23, v23, 170);
          __asm { vmaxps  xmm3, xmm1, xmm2 }
          aabbOut.m_max.m_quad = _mm128_add_ps(_XMM3, aabbOut.m_max.m_quad);
          aabbOut.m_min.m_quad = _mm128_sub_ps(aabbOut.m_min.m_quad, _XMM3);
        }
        else
        {
          m_shape->calcAabb((hknpShape *)m_shape, &transform, &aabbOut);
        }
      }
      else
      {
        m_shape->calcAabb((hknpShape *)m_shape, queryToTarget, &aabbOut);
      }
    }
    _XMM0 = g_vectorfConstants[5];
    __asm { vmaxps  xmm4, xmm0, xmmword ptr [r13+10h] }
    if ( targetShapeInfo->m_scalingInternals.m_isScaled )
    {
      _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
      __asm { vandnps xmm3, xmm0, xmm6 }
      _mm_shuffle_ps(_XMM3, _XMM3, 0);
      _XMM0 = _mm_shuffle_ps(_XMM3, _XMM3, 85);
      __asm { vmaxps  xmm2, xmm0, xmm1 }
      _XMM1 = _mm_shuffle_ps(_XMM3, _XMM3, 170);
      __asm { vmaxps  xmm0, xmm1, xmm2 }
      _XMM4 = _mm128_mul_ps(_XMM0, _XMM4);
    }
    targetScaleInvOut.m_quad = _mm128_mul_ps(_XMM4, _XMM4);
    querya.m_earlyExit = collector->m_hints.m_storage & 1;
    p_m_simdTree = &targetShape->m_boundingVolumeData.m_simdTree;
    if ( (collector->m_hints.m_storage & 0x41) != 0 )
      hkcdSimdTree::closestFromAabb<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>>(p_m_simdTree, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, &querya, 1u);
    else
      hkcdSimdTree::closestFromAabbOrdered<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>>(p_m_simdTree, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, &querya, 1u);
    if ( v14 )
      hkMonitorStream::timerEnd(v14, "Et");
  }
  else
  {
    v37 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v38 = v37;
    if ( v37 )
      hkMonitorStream::timerBegin(v37, "TtCompoundGetClosestPoints");
    v62 = v38;
    v39 = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
    querya.m_targetShape = targetShape;
    querya.m_simdTreeMask = v39;
    querya.m_hasHit = 0;
    querya.m_queryContext = (hknpCollisionQueryContext *)targetScaleInvOut.m_quad.m128_u64[0];
    querya.m_query = query;
    querya.m_queryShapeInfo = queryShapeInfo;
    querya.m_targetShapeInfo = targetShapeInfo;
    querya.m_targetShapeFilterData = targetShapeFilterData;
    querya.m_queryToTarget = *queryToTarget;
    querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
    querya.m_collector = collector;
    if ( queryShapeInfo->m_scalingInternals.m_isScaled )
    {
      StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(queryShapeInfo, targetShapeInfo, &transform, &targetScaleInvOut);
      query->m_shape->calcAabb((hknpShape *)query->m_shape, &transform, &aabbOut);
    }
    else
    {
      v40 = query->m_shape;
      if ( targetShapeInfo->m_scalingInternals.m_isScaled )
      {
        __asm { vrcpps  xmm2, xmmword ptr [rbx+40h] }
        v42 = _mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, targetShapeInfo->m_scalingInternals.m_scale.m_quad));
        v43 = _mm128_mul_ps(v42, _XMM2);
        transform = *queryToTarget;
        __asm { vextractf128 xmm0, ymm0, 1 }
        transform.m_translation.m_quad = _mm128_mul_ps(_XMM0, v43);
        transform.m_rotation.m_col0.m_quad = _mm128_mul_ps(v42, v43);
        transform.m_rotation.m_col1.m_quad = _mm128_mul_ps(v43, transform.m_rotation.m_col1.m_quad);
        transform.m_rotation.m_col2.m_quad = _mm128_mul_ps(v43, transform.m_rotation.m_col2.m_quad);
        _RDI = (hknpConvexShape *)v40;
        if ( (v40->m_flags.m_storage & 1) == 0 )
          _RDI = NULL;
        if ( _RDI )
        {
          hknpConvexShape::calcAabbNoRadius(_RDI, &transform, &aabbOut);
          __asm { vbroadcastss xmm3, dword ptr [rdi+20h] }
          v47 = _mm128_mul_ps(v43, _XMM3);
          _mm_shuffle_ps(v47, v47, 0);
          _XMM0 = _mm_shuffle_ps(v47, v47, 85);
          __asm { vmaxps  xmm2, xmm0, xmm1 }
          _XMM1 = _mm_shuffle_ps(v47, v47, 170);
          __asm { vmaxps  xmm3, xmm1, xmm2 }
          aabbOut.m_max.m_quad = _mm128_add_ps(_XMM3, aabbOut.m_max.m_quad);
          aabbOut.m_min.m_quad = _mm128_sub_ps(aabbOut.m_min.m_quad, _XMM3);
        }
        else
        {
          v40->calcAabb((hknpShape *)v40, &transform, &aabbOut);
        }
      }
      else
      {
        v40->calcAabb((hknpShape *)v40, queryToTarget, &aabbOut);
      }
    }
    _XMM0 = g_vectorfConstants[5];
    __asm { vmaxps  xmm4, xmm0, xmmword ptr [r13+10h] }
    if ( targetShapeInfo->m_scalingInternals.m_isScaled )
    {
      _XMM0 = *(_OWORD *)hkMath::hkSse_signMask;
      __asm { vandnps xmm3, xmm0, xmm6 }
      _mm_shuffle_ps(_XMM3, _XMM3, 0);
      _XMM0 = _mm_shuffle_ps(_XMM3, _XMM3, 85);
      __asm { vmaxps  xmm2, xmm0, xmm1 }
      _XMM1 = _mm_shuffle_ps(_XMM3, _XMM3, 170);
      __asm { vmaxps  xmm0, xmm1, xmm2 }
      _XMM4 = _mm128_mul_ps(_XMM0, _XMM4);
    }
    targetScaleInvOut.m_quad = _mm128_mul_ps(_XMM4, _XMM4);
    querya.m_earlyExit = collector->m_hints.m_storage & 1;
    v60 = &targetShape->m_boundingVolumeData.m_simdTree;
    if ( (collector->m_hints.m_storage & 0x41) != 0 )
      hkcdSimdTree::closestFromAabb<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>>(v60, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, (StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0> *)&querya, 1u);
    else
      hkcdSimdTree::closestFromAabbOrdered<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>>(v60, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, (StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0> *)&querya, 1u);
    if ( v38 )
      hkMonitorStream::timerEnd(v38, "Et");
  }
}

/*
==============
StaticModels_HavokShape::getLeafShapes
==============
*/
void StaticModels_HavokShape::getLeafShapes(StaticModels_HavokShape *this, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *keys, int numKeys, hknpShapeCollector *collector)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __m128 v7; 
  __int128 v8; 
  unsigned int v12; 
  hknpConvexShape *CollisionTileModelShape; 
  unsigned int m_storage; 
  __int128 v16; 
  hkVector4f v20; 
  hkVector4f v21; 
  hkVector4f v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  hkVector4f v31; 
  unsigned __int8 v33; 
  hknpShapeTagPathEntry *v34; 
  unsigned int v35; 
  __int64 v36; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *v37; 
  __int64 v38; 
  unsigned __int8 m_numShapeKeyBits; 
  signed __int64 v42; 
  __int64 v43; 
  const hknpConvexShape *v51; 
  StaticModels_HavokShapeInstance *m_data; 
  __int16 v54; 
  char v55[64]; 
  vec3_t origin; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v59; 
  __m128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 

  v12 = keys->m_value >> (32 - this->m_numShapeKeyBits);
  m_data = this->m_instances.m_data;
  v54 = v12;
  CollisionTileModelShape = (hknpConvexShape *)StaticModels_GetCollisionTileModelShape((m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x3FFF);
  StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x3FFF, m_data[(unsigned __int16)v12].m_instanceIdx, &origin, &orientationAsQuat);
  *(__m256i *)v55 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)&v55[32] = *(__m256i *)g_vectorfConstants[34].m128_f32;
  qi.m_vec.m_quad = (__m128)orientationAsQuat;
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v55, &qi);
  m_storage = collector->m_internal.m_flags.m_storage;
  v16 = LODWORD(origin.v[0]);
  *(float *)&v16 = origin.v[0] * 0.03125;
  _XMM5 = v16;
  __asm
  {
    vinsertps xmm5, xmm5, xmm3, 10h
    vinsertps xmm5, xmm5, xmm4, 20h ; ' '
    vinsertps xmm5, xmm5, xmm1, 30h ; '0'
  }
  v20.m_quad = _mm128_mul_ps(_XMM5, collector->m_internal.m_scale.m_quad);
  *(__m128 *)&v55[48] = _XMM5;
  if ( (m_storage & 1) != 0 )
  {
    v21.m_quad = *(__m128 *)&v55[16];
    collector->m_transform.m_rotation.m_col0 = *(hkVector4f *)v55;
    _XMM0.m_quad.m128_u64[1] = *(_QWORD *)&v55[40];
    collector->m_transform.m_rotation.m_col2 = *(hkVector4f *)&v55[32];
    collector->m_transform.m_rotation.m_col1 = (hkVector4f)v21.m_quad;
    collector->m_transform.m_translation = (hkVector4f)v20.m_quad;
  }
  else if ( (m_storage & 4) != 0 )
  {
    *(__m256i *)collector->m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)v55;
    _XMM0.m_quad.m128_u64[1] = *(_QWORD *)&v55[40];
    collector->m_transform.m_rotation.m_col2 = *(hkVector4f *)&v55[32];
    collector->m_transform.m_translation.m_quad = _mm128_add_ps(v20.m_quad, collector->m_transform.m_translation.m_quad);
  }
  else
  {
    v63 = v4;
    v62 = v5;
    v61 = v6;
    v60 = v7;
    _YMM10 = *(__m256i *)collector->m_transform.m_rotation.m_col0.m_quad.m128_f32;
    __asm { vextractf128 xmm9, ymm10, 1 }
    v59 = v8;
    v25.m_quad = (__m128)collector->m_transform.m_rotation.m_col2;
    v26 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v20.m_quad, v20.m_quad, 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(v20.m_quad, v20.m_quad, 0), v7)), _mm128_mul_ps(_mm_shuffle_ps(v20.m_quad, v20.m_quad, 170), v25.m_quad));
    v27 = *(__m128 *)&v55[16];
    v28 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v27, v27, 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(v27, v27, 0), v7));
    v29 = _mm_shuffle_ps(v27, v27, 170);
    v30 = *(__m128 *)v55;
    v31.m_quad = _mm128_add_ps(v28, _mm128_mul_ps(v29, v25.m_quad));
    _XMM0.m_quad = _mm128_add_ps(v26, collector->m_transform.m_translation.m_quad);
    collector->m_transform.m_rotation.m_col2.m_quad = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v55[32], *(__m128 *)&v55[32], 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v55[32], *(__m128 *)&v55[32], 0), v7)), _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&v55[32], *(__m128 *)&v55[32], 170), v25.m_quad));
    collector->m_transform.m_rotation.m_col0.m_quad = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v30, v30, 85), _XMM9), _mm128_mul_ps(_mm_shuffle_ps(v30, v30, 0), v7)), _mm128_mul_ps(_mm_shuffle_ps(v30, v30, 170), v25.m_quad));
    collector->m_transform.m_rotation.m_col1 = (hkVector4f)v31.m_quad;
    collector->m_transform.m_translation = (hkVector4f)_XMM0.m_quad;
  }
  collector->m_internal.m_flags.m_storage = m_storage & 0xFFFFFFF8 | 2;
  *(double *)_XMM0.m_quad.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x3FFF, m_data[(unsigned __int16)v12].m_instanceIdx);
  _XMM6.m_quad = _mm128_mul_ps(_mm_shuffle_ps(_XMM0.m_quad, _XMM0.m_quad, 0), collector->m_internal.m_scale.m_quad);
  *(double *)_XMM0.m_quad.m128_u64 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x3FFF, m_data[(unsigned __int16)v12].m_instanceIdx);
  if ( _XMM0.m_quad.m128_f32[0] != 1.0 )
    collector->m_internal.m_flags.m_storage |= 0x40u;
  collector->m_parentShape = this;
  collector->m_internal.m_scale = (hkVector4f)_XMM6.m_quad;
  v33 = CollisionTileModelShape->m_dispatchType.m_storage;
  if ( v33 == 3 )
  {
    v34 = &collector->m_shapeTagPath.m_data[collector->m_shapeTagPath.m_size++];
    v34->m_shapeTag = StaticModels_GetCollisionTileModelShapeTag((m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x3FFF);
    v35 = (unsigned __int16)v12;
    v36 = 10i64;
    v34->m_instanceId = v35;
    v34->m_parentShape = this;
    v34->m_shape = CollisionTileModelShape;
    v37 = (hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)v55;
    do
    {
      hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>::hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>(v37++);
      --v36;
    }
    while ( v36 );
    v38 = 1i64;
    m_numShapeKeyBits = this->m_numShapeKeyBits;
    _XMM0 = (unsigned int)numKeys;
    *(_DWORD *)v55 = ((keys->m_value + 1) << m_numShapeKeyBits) - 1;
    __asm { vpminsd xmm1, xmm0, xmm1 }
    if ( (int)_XMM1 > 1 )
    {
      v42 = (char *)keys - &v55[4];
      v43 = 1i64;
      do
      {
        if ( (unsigned __int16)(*(_DWORD *)&v55[4 * v43 + 4 + v42] >> (32 - m_numShapeKeyBits)) != v54 )
          break;
        v38 = (unsigned int)(v38 + 1);
        *(_DWORD *)&v55[4 * v43] = ((*(_DWORD *)&v55[4 * v43 + 4 + v42] + 1) << m_numShapeKeyBits) - 1;
        ++v43;
      }
      while ( v43 < (int)_XMM1 );
    }
    CollisionTileModelShape->getLeafShapes(CollisionTileModelShape, (const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)v55, v38, collector);
  }
  else
  {
    __asm
    {
      vcmpeqps xmm3, xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
      vpxor   xmm0, xmm0, xmm0
      vpcmpeqd xmm1, xmm0, xmm0
      vblendps xmm2, xmm0, xmm1, 7
      vpand   xmm1, xmm3, xmm2
      vptest  xmm1, xmm2
    }
    if ( _CF || v33 != 2 )
    {
      collector->m_internal.m_shape = CollisionTileModelShape;
    }
    else
    {
      v51 = NULL;
      if ( (CollisionTileModelShape->m_flags.m_storage & 1) != 0 )
        v51 = CollisionTileModelShape;
      collector->m_internal.m_shape = hknpScaledConvexShapeBase::createInPlace(&collector->m_internal.m_shapeBuffer, v51, &collector->m_internal.m_scale, (hknpShape::ScaleMode)((collector->m_internal.m_flags.m_storage & 0x40) == 0));
      collector->m_internal.m_scale.m_quad = g_vectorfConstants[6];
    }
    collector->m_internal.m_shapeTags[0] = StaticModels_GetCollisionTileModelShapeTag((m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v12].m_modelIdxAndFlags & 0x3FFF);
    collector->m_internal.m_flags.m_storage &= ~8u;
    collector->m_internal.m_numShapesStored = 1;
  }
}

/*
==============
StaticModels_HavokShape::getMutationSignals
==============
*/
hknpShapeSignals *StaticModels_HavokShape::getMutationSignals(StaticModels_HavokShape *this)
{
  if ( this->m_isMutable.m_bool )
    return &this->m_mutationSignals;
  else
    return 0i64;
}

/*
==============
StaticModels_HavokShape::getShapeKeys
==============
*/
__int64 StaticModels_HavokShape::getShapeKeys(StaticModels_HavokShape *this, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *shapeKeysOut, int capacity, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> previousKey, const hknpShape::GetShapeKeysConfig *config)
{
  unsigned int v5; 
  unsigned int m_value; 
  double v9; 
  signed int v10; 
  int v11; 
  StaticModels_HavokShapeInstance *v12; 
  const hknpShapeKeyMask *m_mask; 
  __int64 m_size; 
  int v15; 
  unsigned int v16; 
  const void *CollisionTileModelShape; 
  __int128 v19; 
  double v20; 

  v5 = 0;
  m_value = previousKey.m_value;
  v9 = *(double *)config->m_levelOfDetail;
  v19 = *(_OWORD *)&config->m_parentShapeKeyPath.m_key.m_value;
  v20 = v9;
  if ( previousKey.m_value == -1 )
  {
    v10 = 0;
  }
  else
  {
    v10 = previousKey.m_value >> (32 - this->m_numShapeKeyBits);
    m_value = ((previousKey.m_value + 1) << this->m_numShapeKeyBits) - 1;
    if ( !((previousKey.m_value + 1) << this->m_numShapeKeyBits) )
      ++v10;
  }
  v11 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v10 >= v11 )
    return v5;
  while ( 1 )
  {
    v12 = &this->m_instances.m_data[(unsigned __int16)v10];
    if ( (v12->m_modelIdxAndFlags & 0x8000u) != 0 )
    {
      m_mask = config->m_mask;
      if ( !m_mask || ((unsigned int (__fastcall *)(const hknpShapeKeyMask *))m_mask->__vftable[1].getExactType)(m_mask) )
      {
        m_size = config->m_parentShapeKeyPath.m_size;
        v15 = m_size + this->m_numShapeKeyBits;
        *((_QWORD *)&v19 + 1) = 0i64;
        DWORD1(v19) = v15;
        v16 = config->m_parentShapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_size];
        LODWORD(m_size) = this->m_tileIdx;
        LODWORD(v19) = v16 | (((v10 + 1) << (32 - v15)) - 1);
        CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v12->m_modelIdxAndFlags & 0x4000) != 0, m_size, v12->m_modelIdxAndFlags & 0x3FFF);
        v5 += (*(__int64 (__fastcall **)(const void *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)CollisionTileModelShape + 168i64))(CollisionTileModelShape, &shapeKeysOut[v5], capacity - v5, m_value, &v19);
        if ( v5 == capacity )
          break;
      }
    }
    ++v10;
    m_value = -1;
    if ( v10 >= v11 )
      return v5;
  }
  return (unsigned int)capacity;
}

/*
==============
StaticModels_HavokShape::onChildShapeMutated
==============
*/
void StaticModels_HavokShape::onChildShapeMutated(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numInstanceIds)
{
  bool updated; 
  unsigned __int8 v5; 

  StaticModels_HavokShape::updateInstancesInBoundingVolume(this, instanceIds, numInstanceIds);
  updated = StaticModels_HavokShape::updateCachedBounds(this);
  if ( this->m_isMutable.m_bool )
  {
    v5 = 2;
    if ( updated )
      v5 = 3;
    hkSignal2<hknpShape const *,unsigned char>::fire(&this->m_mutationSignals.m_shapeMutated, this, v5);
  }
}

/*
==============
StaticModels_HavokShape::queryAabbImpl
==============
*/
void StaticModels_HavokShape::queryAabbImpl(StaticModels_HavokShape *this, hknpCollisionQueryContext *queryContext, const hknpAabbQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator> *hits, hkAabb *nmpInOut)
{
  const hknpShapeKeyMask *m_shapeKeyMask; 
  StaticModels_HavokShapeSimdTree *p_m_simdTree; 
  hkcdSimdTree::LeafCollector collector; 
  StaticModels_HavokShape *v11; 
  const hknpShapeKeyMask *v12; 
  __int16 v13; 
  hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator> *v14; 
  hkAabb aabb; 
  hknpCollisionQueryContext *v16; 
  const hknpAabbQuery *v17; 
  const hknpShapeQueryInfo *v18; 
  const hknpQueryFilterData *v19; 
  const hknpShapeQueryInfo *v20; 

  m_shapeKeyMask = targetShapeInfo->m_shapeKeyMask;
  if ( m_shapeKeyMask )
  {
    collector.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<1,hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator>>::`vftable';
    v11 = this;
    v12 = m_shapeKeyMask;
    v13 = 0;
    v16 = queryContext;
    v17 = query;
    v18 = queryShapeInfo;
    v20 = targetShapeInfo;
    v19 = targetShapeFilterData;
    v14 = hits;
    aabb = query->m_aabb;
    p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
    if ( !nmpInOut )
      goto LABEL_6;
LABEL_5:
    hkcdSimdTree::aabbOverlapsNearMiss_OutOfLine(p_m_simdTree, &aabb, &collector, nmpInOut, 1u);
    return;
  }
  collector.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<0,hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator>>::`vftable';
  v11 = this;
  v12 = NULL;
  v13 = 0;
  v16 = queryContext;
  v17 = query;
  v18 = queryShapeInfo;
  v20 = targetShapeInfo;
  v19 = targetShapeFilterData;
  v14 = hits;
  aabb = query->m_aabb;
  p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
  if ( nmpInOut )
    goto LABEL_5;
LABEL_6:
  hkcdSimdTree::aabbOverlaps_OutOfLine(p_m_simdTree, &aabb, &collector, 1u);
}

/*
==============
StaticModels_HavokShape::queryAabbImpl
==============
*/
void StaticModels_HavokShape::queryAabbImpl(StaticModels_HavokShape *this, hknpCollisionQueryContext *queryContext, const hknpAabbQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, hknpCollisionQueryCollector *collector, hkAabb *nmpInOut)
{
  const hknpShapeKeyMask *m_shapeKeyMask; 
  StaticModels_HavokShapeSimdTree *p_m_simdTree; 
  hkcdSimdTree::LeafCollector v10; 
  StaticModels_HavokShape *v11; 
  const hknpShapeKeyMask *v12; 
  __int16 v13; 
  hknpCollisionQueryCollector *v14; 
  hkAabb aabb; 
  hknpCollisionQueryContext *v16; 
  const hknpAabbQuery *v17; 
  const hknpShapeQueryInfo *v18; 
  const hknpQueryFilterData *v19; 
  const hknpShapeQueryInfo *v20; 

  m_shapeKeyMask = targetShapeInfo->m_shapeKeyMask;
  if ( m_shapeKeyMask )
  {
    v10.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::`vftable';
    v11 = this;
    v12 = m_shapeKeyMask;
    v13 = 0;
    v16 = queryContext;
    v17 = query;
    v18 = queryShapeInfo;
    v20 = targetShapeInfo;
    v19 = targetShapeFilterData;
    v14 = collector;
    aabb = query->m_aabb;
    p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
    if ( !nmpInOut )
      goto LABEL_6;
LABEL_5:
    hkcdSimdTree::aabbOverlapsNearMiss_OutOfLine(p_m_simdTree, &aabb, &v10, nmpInOut, 1u);
    return;
  }
  v10.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::`vftable';
  v11 = this;
  v12 = NULL;
  v13 = 0;
  v16 = queryContext;
  v17 = query;
  v18 = queryShapeInfo;
  v20 = targetShapeInfo;
  v19 = targetShapeFilterData;
  v14 = collector;
  aabb = query->m_aabb;
  p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
  if ( nmpInOut )
    goto LABEL_5;
LABEL_6:
  hkcdSimdTree::aabbOverlaps_OutOfLine(p_m_simdTree, &aabb, &v10, 1u);
}

/*
==============
StaticModels_HavokShape::setInstancesEnabled
==============
*/
void StaticModels_HavokShape::setInstancesEnabled(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numInstances, bool isEnabled)
{
  char v4; 
  __int64 v6; 
  __int64 i; 
  StaticModels_HavokShapeInstance *v9; 
  __int16 m_modelIdxAndFlags; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  bool updated; 
  unsigned __int8 v14; 

  if ( numInstances > 0 )
  {
    v4 = 0;
    v6 = numInstances;
    for ( i = 0i64; i < v6; ++i )
    {
      v9 = &this->m_instances.m_data[instanceIds[i].m_value];
      m_modelIdxAndFlags = v9->m_modelIdxAndFlags;
      if ( ((v9->m_modelIdxAndFlags & 0x8000u) != 0) != isEnabled )
      {
        v4 = 1;
        v11 = m_modelIdxAndFlags & 0x7FFF;
        v12 = m_modelIdxAndFlags | 0x8000;
        if ( !isEnabled )
          v12 = v11;
        v9->m_modelIdxAndFlags = v12;
      }
    }
    if ( v4 )
    {
      updated = StaticModels_HavokShape::updateCachedBounds(this);
      v14 = 2;
      if ( updated )
        v14 = 3;
      hkSignal2<hknpShape const *,unsigned char>::fire(&this->m_mutationSignals.m_shapeMutated, this, v14);
    }
  }
}

/*
==============
StaticModels_HavokShape::updateInstancesDerivedData
==============
*/
void StaticModels_HavokShape::updateInstancesDerivedData(StaticModels_HavokShape *this, const hkHandle<unsigned short,65535,StaticModels_HavokShapeInstanceIdDiscriminant> *instanceIds, int numInstanceIds)
{
  bool updated; 
  unsigned __int8 v5; 

  StaticModels_HavokShape::updateInstancesInBoundingVolume(this, instanceIds, numInstanceIds);
  updated = StaticModels_HavokShape::updateCachedBounds(this);
  if ( this->m_isMutable.m_bool )
  {
    v5 = 2;
    if ( updated )
      v5 = 3;
    hkSignal2<hknpShape const *,unsigned char>::fire(&this->m_mutationSignals.m_shapeMutated, this, v5);
  }
}

/*
==============
StaticModels_HavokShape::validateContract
==============
*/
int *StaticModels_HavokShape::validateContract(StaticModels_HavokShape *this, int *a2)
{
  int v2; 

  v2 = 0;
  if ( this->m_type.m_storage != 22 )
    v2 = -2147220992;
  *a2 = v2;
  return a2;
}

/*
==============
StaticModels_HavokShape::zeroAllInstanceVelocities
==============
*/
void StaticModels_HavokShape::zeroAllInstanceVelocities(StaticModels_HavokShape *this)
{
  int v1; 
  __int64 v2; 

  v1 = 0;
  if ( (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) != 0 )
  {
    v2 = 0i64;
    do
    {
      ++v2;
      ++v1;
      this->m_instanceVelocities.m_data[v2 - 1] = (StaticModels_HavokShape::VelocityInfo)0i64;
    }
    while ( v1 < (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) );
  }
}

