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
  hkMemoryAllocator *v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  hkMemoryAllocator *v30; 
  int m_size; 
  int v32; 
  int v33; 
  int v34; 
  StaticModels_HavokShapeInstance *v35; 
  __int64 v36; 
  char v37; 
  char v38; 
  int v39; 
  __int64 v40; 
  const void *CollisionTileModelShape; 
  const hknpShape::MassConfig *m_massConfig; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _R15 = cinfo;
  _RDI = this;
  hknpCompositeShape::hknpCompositeShape(this, USER_7|DISTANCE_FIELD);
  _RDI->__vftable = (StaticModels_HavokShape_vtbl *)&StaticModels_HavokShape::`vftable';
  _RDI->m_tileIdx = _R15->m_tileIdx;
  _RDI->m_shapeType = _R15->m_shapeType;
  _RDI->m_instances.m_data = NULL;
  _RDI->m_instances.m_size = 0;
  _RDI->m_instances.m_capacityAndFlags = 0x80000000;
  _RDI->m_instanceVelocities.m_data = NULL;
  _RDI->m_instanceVelocities.m_size = 0;
  _RDI->m_instanceVelocities.m_capacityAndFlags = 0x80000000;
  _RDI->m_isMutable.m_bool = _R15->m_hasSurfaceVelocity || _R15->m_isMutable;
  _RDI->m_mutationSignals.m_shapeMutated.m_slots.m_ptrAndInt = NULL;
  _RDI->m_mutationSignals.m_shapeDestroyed.m_slots.m_ptrAndInt = NULL;
  _RDI->m_boundingVolumeData.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&_RDI->m_boundingVolumeData.m_memSizeAndFlags = 0x1FFFF;
  _RDI->m_boundingVolumeData.__vftable = (StaticModels_HavokShapeData_vtbl *)&StaticModels_HavokShapeData::`vftable';
  p_m_simdTree = &_RDI->m_boundingVolumeData.m_simdTree;
  _RDI->m_boundingVolumeData.m_simdTree.m_nodes.m_data = NULL;
  _RDI->m_boundingVolumeData.m_simdTree.m_nodes.m_size = 0;
  _RDI->m_boundingVolumeData.m_simdTree.m_nodes.m_capacityAndFlags = 0x80000000;
  v7 = hkMemHeapAllocator();
  v8 = _RDI->m_boundingVolumeData.m_simdTree.m_nodes.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v8 < 2 )
  {
    v9 = 2 * v8;
    if ( v9 >= 0x3FFFFFFF )
      v9 = 1073741822;
    v10 = 2;
    if ( v9 > 2 )
      v10 = v9;
    hkArrayUtil::_reserve(v7, &_RDI->m_boundingVolumeData.m_simdTree, v10, 128);
  }
  _RDI->m_boundingVolumeData.m_simdTree.m_nodes.m_size = 2;
  _RAX = p_m_simdTree->m_nodes.m_data;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax], xmm0
    vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+20h], xmm1
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+40h], xmm0
    vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+10h], xmm1
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+30h], xmm0
    vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+50h], xmm1
    vpxor   xmm6, xmm6, xmm6
    vmovdqu xmmword ptr [rax+60h], xmm6
  }
  *(_WORD *)&_RAX->m_isLeaf = 0;
  _RAX = p_m_simdTree->m_nodes.m_data;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+80h], xmm0
    vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+0A0h], xmm1
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+0C0h], xmm0
    vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+90h], xmm1
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+0B0h], xmm0
    vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rax+0D0h], xmm1
    vmovdqu xmmword ptr [rax+0E0h], xmm6
  }
  *(_WORD *)&_RAX[1].m_isLeaf = 0;
  _RDI->m_boundingVolumeData.m_simdTree.m_points.m_data = NULL;
  _RDI->m_boundingVolumeData.m_simdTree.m_points.m_size = 0;
  _RDI->m_boundingVolumeData.m_simdTree.m_points.m_capacityAndFlags = 0x80000000;
  if ( _R15->m_hasSurfaceVelocity )
    _RDI->m_flags.m_storage |= 0x8000u;
  __asm
  {
    vmovd   xmm1, dword ptr [r15+14h]
    vmovd   xmm0, dword ptr [r15+10h]
    vpmaxsd xmm1, xmm0, xmm1
    vmovd   ebx, xmm1
  }
  if ( _EBX > 0 )
  {
    v30 = hkMemHeapAllocator();
    m_size = _RDI->m_instances.m_size;
    v32 = m_size + _EBX;
    v33 = _RDI->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
    if ( v33 < m_size + _EBX )
    {
      v34 = 2 * v33;
      if ( (unsigned int)v34 >= 0x3FFFFFFF )
        v34 = 1073741822;
      if ( v32 < v34 )
        v32 = v34;
      hkArrayUtil::_reserve(v30, &_RDI->m_instances, v32, 4);
      m_size = _RDI->m_instances.m_size;
    }
    v35 = &_RDI->m_instances.m_data[m_size];
    v36 = _EBX;
    do
    {
      if ( v35 )
        v35->m_modelIdxAndFlags = 0x8000;
      ++v35;
      --v36;
    }
    while ( v36 );
    _RDI->m_instances.m_size += _EBX;
  }
  _RDI->m_numShapeKeyBits = 0;
  v37 = 0;
  if ( _EBX )
  {
    do
    {
      ++v37;
      _EBX >>= 1;
    }
    while ( _EBX );
    _RDI->m_numShapeKeyBits = v37;
  }
  v38 = v37;
  if ( !v37 )
    v38 = 1;
  _RDI->m_numShapeKeyBits = v38;
  _RDI->m_estimatedNumShapeKeys = 0;
  if ( _R15->m_numInstances > 0 )
  {
    v39 = 0;
    v40 = 0i64;
    do
    {
      CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((_R15->m_instances[v40].m_modelIdxAndFlags & 0x4000) != 0, _RDI->m_tileIdx, _R15->m_instances[v40].m_modelIdxAndFlags & 0x3FFF);
      _RDI->m_instances.m_data[v40] = _R15->m_instances[v40];
      _RDI->m_estimatedNumShapeKeys += (*(__int64 (__fastcall **)(const void *))(*(_QWORD *)CollisionTileModelShape + 160i64))(CollisionTileModelShape);
      if ( (*(__int64 (__fastcall **)(const void *))(*(_QWORD *)CollisionTileModelShape + 24i64))(CollisionTileModelShape) )
        _RDI->m_isMutable.m_bool = 1;
      ++v39;
      ++v40;
    }
    while ( v39 < _R15->m_numInstances );
  }
  __asm
  {
    vmovups xmm2, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
    vpinsrw xmm0, xmm6, r13d, 1
    vpshufd xmm1, xmm0, 0
    vmovups xmmword ptr [rdi+70h], xmm2
    vxorps  xmm0, xmm1, xmm2
    vmovups xmmword ptr [rdi+80h], xmm0
  }
  _RDI->m_boundingRadius = 0.0;
  StaticModels_HavokShape::buildBoundingVolume(_RDI);
  if ( _R15->m_numInstances <= 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rdi+70h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rdi+80h], xmm1
    }
  }
  else
  {
    StaticModels_HavokShape::updateCachedBounds(_RDI);
    m_massConfig = _R15->m_massConfig;
    if ( m_massConfig )
      hknpShape::setMassProperties(_RDI, m_massConfig);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_48] }
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
  _RAX = this->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+80h]
    vcmpleps xmm1, xmm0, xmmword ptr [rax+90h]
    vmovmskps eax, xmm1
  }
  if ( !(_DWORD)_RAX )
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
    _RAX = this->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
      vpxor   xmm2, xmm2, xmm2
      vmovups xmmword ptr [rax], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+20h], xmm1
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+40h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+10h], xmm1
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+30h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+50h], xmm1
      vmovdqu xmmword ptr [rax+60h], xmm2
    }
    *(_WORD *)&_RAX->m_isLeaf = 0;
    __asm { vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants }
    _RAX = this->m_boundingVolumeData.m_simdTree.m_nodes.m_data;
    __asm
    {
      vmovups xmmword ptr [rax+80h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+0A0h], xmm1
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+240h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+0C0h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+90h], xmm1
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+0B0h], xmm0
      vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+290h; __m128 const near * const g_vectorfConstants
      vmovups xmmword ptr [rax+0D0h], xmm1
      vmovdqu xmmword ptr [rax+0E0h], xmm2
    }
    *(_WORD *)&_RAX[1].m_isLeaf = 0;
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
  hkDiagonalizedMassProperties *v11; 
  hknpShape::MassConfig::Quality m_quality; 
  bool v16; 
  int v17; 
  hkMemoryRouter *Value; 
  int v19; 
  hkMassElement *m_cur; 
  char *v21; 
  int v24; 
  int v25; 
  bool v26; 
  StaticModels_HavokShapeInstance *m_data; 
  hkMemoryAllocator *v30; 
  int m_size; 
  hkMassElement *v32; 
  const void *CollisionTileModelShape; 
  hkRefCountedProperties *v49; 
  hkReferencedObject *v50; 
  int v51; 
  char v52; 
  hkVector4f *p_scale; 
  int v61; 
  char *v62; 
  int v63; 
  hkMemoryRouter *v64; 
  signed int v65; 
  int v66; 
  hkMemoryAllocator *v67; 
  hkArrayBase<hkMassElement> array; 
  void *p; 
  __int64 v75; 
  const hknpShape::MassConfig *v76; 
  hkDiagonalizedMassProperties *v77; 
  __int64 v78; 
  hkSimdFloat32 density_8; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  __int128 v82; 
  hkVector4f scale; 
  hkMassProperties result; 
  hkDiagonalizedMassProperties v85; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  v78 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v11 = massPropertiesOut;
  v77 = massPropertiesOut;
  _RDI = massConfig;
  v76 = massConfig;
  m_quality = massConfig->m_quality;
  if ( m_quality )
  {
    if ( (unsigned int)(m_quality - 1) <= 1 )
    {
      v16 = (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) == 0;
      v17 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
      array.m_data = NULL;
      *(_QWORD *)&array.m_size = 0x8000000000000000ui64;
      LODWORD(v75) = v17;
      if ( v16 )
      {
        array.m_data = NULL;
      }
      else
      {
        Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
        if ( !Value )
          Value = hkMemoryRouter::s_fallbackRouter;
        v19 = (144 * v17 + 127) & 0xFFFFFF80;
        m_cur = (hkMassElement *)Value->m_stack.m_cur;
        v21 = (char *)m_cur + v19;
        if ( v19 > Value->m_stack.m_slabSize || v21 > Value->m_stack.m_end )
        {
          array.m_data = (hkMassElement *)hkLifoAllocator::allocateFromNewSlab(&Value->m_stack, v19);
        }
        else
        {
          Value->m_stack.m_cur = v21;
          array.m_data = m_cur;
        }
      }
      array.m_capacityAndFlags = v17 | 0x80000000;
      p = array.m_data;
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vxorps  xmm6, xmm6, xmm6
      }
      v24 = 0;
      v25 = 0;
      v26 = this->m_instances.m_size == 0;
      if ( this->m_instances.m_size > 0 )
      {
        __asm
        {
          vmovss  xmm9, cs:__real@3d000000
          vmovss  xmm8, cs:__real@3f800000
        }
        do
        {
          m_data = this->m_instances.m_data;
          if ( (m_data[v25].m_modelIdxAndFlags & 0x8000u) != 0 && (!mask || ((unsigned int (__fastcall *)(const StaticModels_HavokShapeKeyMask *, _QWORD))mask->isInstanceEnabled)(mask, (unsigned __int16)v25)) )
          {
            v30 = hkMemHeapAllocator();
            m_size = array.m_size;
            if ( array.m_size == (array.m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v30, &array, 144);
              m_size = array.m_size;
            }
            v32 = array.m_data;
            _RCX = &array.m_data[m_size];
            if ( _RCX )
            {
              *(_QWORD *)&_RCX->m_properties.m_volume = 0i64;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vmovups ymmword ptr [rcx+10h], ymm0
                vmovups ymmword ptr [rcx+30h], ymm0
                vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
                vmovups xmmword ptr [rcx+50h], xmm0
                vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+210h; __m128 const near * const g_vectorfConstants
                vmovups xmmword ptr [rcx+60h], xmm1
                vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
                vmovups xmmword ptr [rcx+70h], xmm0
                vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
                vmovups xmmword ptr [rcx+80h], xmm1
              }
              m_size = array.m_size;
              v32 = array.m_data;
            }
            _RDI = &v32[m_size];
            array.m_size = m_size + 1;
            StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_data[v25].m_modelIdxAndFlags & 0x3FFF, m_data[v25].m_instanceIdx, (vec3_t *)&density_8, &orientationAsQuat);
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+0E0h+var_160]
              vmovups xmmword ptr [rbp+0E0h+qi.m_vec.m_quad], xmm0
              vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
              vmovups xmmword ptr [rdi+50h], xmm1
              vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+210h; __m128 const near * const g_vectorfConstants
              vmovups xmmword ptr [rdi+60h], xmm0
              vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
              vmovups xmmword ptr [rdi+70h], xmm1
              vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
              vmovups xmmword ptr [rdi+80h], xmm0
            }
            hkRotationImpl<float>::set(&_RDI->m_transform.m_rotation, &qi);
            __asm
            {
              vmulss  xmm1, xmm9, dword ptr [rsp+1E0h+density.m_real+8]
              vmovss  dword ptr [rdi+80h], xmm1
              vmulss  xmm0, xmm9, dword ptr [rsp+1E0h+density.m_real+0Ch]
              vmovss  dword ptr [rdi+84h], xmm0
              vmovss  xmm1, [rsp+1E0h+var_168]
              vmulss  xmm2, xmm1, xmm9
              vmovss  dword ptr [rdi+88h], xmm2
            }
            _RDI->m_transform.m_translation.m_quad.m128_i32[3] = 0;
            CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((m_data[v25].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[v25].m_modelIdxAndFlags & 0x3FFF);
            v49 = (hkRefCountedProperties *)*((_QWORD *)CollisionTileModelShape + 6);
            if ( v49 && (v50 = hkRefCountedProperties::accessProperty(v49, 0xF100u)) != NULL )
            {
              hkCompressedMassProperties::unpack((hkCompressedMassProperties *)&v50[1], &_RDI->m_properties);
              v51 = 0;
            }
            else
            {
              v51 = -2147220992;
            }
            if ( v51 < 0 )
            {
              (*(void (__fastcall **)(const void *, const hknpShape::MassConfig *, hkDiagonalizedMassProperties *))(*(_QWORD *)CollisionTileModelShape + 224i64))(CollisionTileModelShape, v76, &v85);
              hkDiagonalizedMassProperties::unpack(&v85, &_RDI->m_properties);
            }
            *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v25].m_modelIdxAndFlags & 0x3FFF, m_data[v25].m_instanceIdx);
            __asm { vucomiss xmm0, xmm8 }
            if ( !v16 )
            {
              v52 = *((_BYTE *)CollisionTileModelShape + 26);
              *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v25].m_modelIdxAndFlags & 0x3FFF, m_data[v25].m_instanceIdx);
              __asm
              {
                vmovaps xmm1, xmm0
                vshufps xmm1, xmm1, xmm1, 0
                vmovups [rbp+0E0h+var_140], xmm1
              }
              if ( v52 == 2 || v52 == 3 )
              {
                __asm { vmovups xmmword ptr [rbp+0E0h+scale.m_quad], xmm1 }
                p_scale = &scale;
              }
              else
              {
                p_scale = (hkVector4f *)&v82;
              }
              hkMassProperties::applyScale(&_RDI->m_properties, p_scale);
            }
            __asm { vaddss  xmm6, xmm6, dword ptr [rdi] }
            v24 = 0;
          }
          v26 = (unsigned int)++v25 <= this->m_instances.m_size;
        }
        while ( v25 < this->m_instances.m_size );
        _RDI = v76;
        v11 = v77;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+20h]
        vcomiss xmm0, xmm7
      }
      if ( v26 )
      {
        __asm
        {
          vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm1, xmm0, xmm1
        }
      }
      else
      {
        __asm { vdivss  xmm1, xmm0, xmm6 }
      }
      __asm
      {
        vshufps xmm1, xmm1, xmm1, 0
        vmovups xmmword ptr [rsp+1E0h+density.m_real+8], xmm1
      }
      if ( array.m_size > 0 )
      {
        do
          hkMassProperties::scaleToDensity(&array.m_data[v24++].m_properties, &density_8);
        while ( v24 < array.m_size );
      }
      __asm
      {
        vmovss  [rbp+0E0h+result.m_volume], xmm7
        vmovss  [rbp+0E0h+result.m_mass], xmm7
        vxorps  xmm0, xmm0, xmm0
        vmovups ymmword ptr [rbp+0E0h+result.m_centerOfMass.m_quad], ymm0
        vmovups ymmword ptr [rbp+0E0h+result.m_inertiaTensor.m_col1.m_quad], ymm0
      }
      hkInertiaTensorComputer::combineMassProperties(&array, &result);
      hkDiagonalizedMassProperties::pack(v11, &result);
      v61 = array.m_size;
      v62 = (char *)p;
      if ( p == array.m_data )
        v61 = 0;
      array.m_size = v61;
      v63 = v75;
      v64 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !v64 )
        v64 = hkMemoryRouter::s_fallbackRouter;
      v65 = (144 * v63 + 127) & 0xFFFFFF80;
      v66 = (v65 + 15) & 0xFFFFFFF0;
      if ( v65 > v64->m_stack.m_slabSize || &v62[v66] != v64->m_stack.m_cur || v64->m_stack.m_firstNonLifoEnd == v62 )
        hkLifoAllocator::slowBlockFree(&v64->m_stack, v62, v66);
      else
        v64->m_stack.m_cur = v62;
      v67 = hkMemHeapAllocator();
      array.m_size = 0;
      if ( array.m_capacityAndFlags >= 0 )
        hkMemoryAllocator::bufFree2(v67, array.m_data, 144, array.m_capacityAndFlags & 0x3FFFFFFF);
    }
  }
  else
  {
    hknpShape::buildMassProperties(this, massConfig, massPropertiesOut);
  }
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
StaticModels_HavokShape::buildSurfaceGeometry
==============
*/
hknpShape::BuildSurfaceGeometryConfig *StaticModels_HavokShape::buildSurfaceGeometry(StaticModels_HavokShape *this, const hknpShape::BuildSurfaceGeometryConfig *config, hkGeometry *geometryOut, hkArray<hkVector4f,hkContainerHeapAllocator> *edgesOut, int *a5)
{
  _DWORD *v13; 
  hknpShape::BuildSurfaceGeometryConfig *v15; 
  int v17; 
  int v18; 
  int v23; 
  __int64 v24; 
  StaticModels_HavokShapeInstance *m_data; 
  hkDefaultPropertyBag *m_bag; 
  hknpScaledConvexShapeBase *CollisionTileModelShape; 
  unsigned __int8 m_storage; 
  char v29; 
  const hknpConvexShape *v32; 
  unsigned int m_tileIdx; 
  hkResult (__fastcall *buildSurfaceGeometry)(hknpShape *, const hknpShape::BuildSurfaceGeometryConfig *, hkGeometry *, hkArray<hkVector4f,hkContainerHeapAllocator> *); 
  int v52; 
  unsigned int v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  unsigned __int16 CollisionTileModelShapeTag; 
  int v71; 
  hkMemoryAllocator *v72; 
  int *v73; 
  __int64 v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v80; 
  __int64 v81; 
  hkMemoryAllocator *v84; 
  hkMemoryAllocator *v85; 
  hkMemoryAllocator *v86; 
  hknpShape::BuildSurfaceGeometryConfig *result; 
  __int64 v94; 
  void *p; 
  __int64 v96; 
  hkGeometry *v97; 
  hkMatrix4Impl<float> transform; 
  int *v99; 
  const hknpShape::BuildSurfaceGeometryConfig *v100; 
  __int64 v101; 
  __m256i v102; 
  vec3_t origin; 
  vec3_t v105; 
  __int128 v106; 
  __int128 v107; 
  __int128 v109; 
  hkVector4f scale; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  vec4_t v115; 
  hkQuaternionf v116; 
  hknpShapeBuffer bufferInOut; 
  char v118; 
  char v119; 
  void *retaddr; 

  _RAX = &retaddr;
  v101 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  v13 = edgesOut;
  v97 = (hkGeometry *)edgesOut;
  _R14 = geometryOut;
  v15 = (hknpShape::BuildSurfaceGeometryConfig *)config;
  v100 = config;
  v99 = a5;
  hkGeometry::clear((hkGeometry *)edgesOut);
  v17 = 0;
  v18 = 0;
  v94 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
  if ( (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) != 0 )
  {
    __asm
    {
      vmovss  xmm10, cs:__real@3f800000
      vmovss  xmm7, cs:__real@3d000000
      vxorps  xmm9, xmm9, xmm9
      vmovss  xmm8, cs:__real@bf800000
    }
    v23 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
    do
    {
      v24 = (unsigned __int16)v18;
      m_data = this->m_instances.m_data;
      if ( (m_data[(unsigned __int16)v18].m_modelIdxAndFlags & 0x8000u) != 0 )
      {
        m_bag = _R14->m_propertyBag.m_bag;
        if ( !m_bag || (*(unsigned int (__fastcall **)(hkDefaultPropertyBag *, _QWORD))&m_bag->m_propertyMap.m_items.m_data->m_1.m_buf[2])(m_bag, (unsigned __int16)v18) )
        {
          CollisionTileModelShape = (hknpScaledConvexShapeBase *)StaticModels_GetCollisionTileModelShape((m_data[(unsigned __int16)v18].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v18].m_modelIdxAndFlags & 0x3FFF);
          m_storage = CollisionTileModelShape->m_type.m_storage;
          bufferInOut.m_shape = NULL;
          bufferInOut.m_buffer = &v118;
          bufferInOut.m_bufferSize = 96;
          bufferInOut.__vftable = (hknpShapeBuffer_vtbl *)hknpInplaceShapeBuffer<96>::`vftable';
          *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF, m_data[v24].m_instanceIdx);
          __asm { vucomiss xmm0, xmm10 }
          if ( v29 || m_storage && m_storage != 1 )
          {
            m_tileIdx = this->m_tileIdx;
            StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF, m_data[v24].m_instanceIdx, &v105, &v115);
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+1E0h+var_140]
              vmovups xmmword ptr [rbp+1E0h+var_130.m_vec.m_quad], xmm0
            }
            *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF, m_data[v24].m_instanceIdx);
            __asm
            {
              vmovaps xmm6, xmm0
              vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
              vmovups [rbp+1E0h+anonymous_3], ymm1
              vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
              vmovups [rbp+1E0h+anonymous_4], ymm1
            }
            hkRotationImpl<float>::set((hkRotationImpl<float> *)&v102, &v116);
            __asm
            {
              vmulss  xmm2, xmm7, dword ptr [rbp+1E0h+var_1E0]
              vmovss  dword ptr [rbp+1E0h+anonymous_4+10h], xmm2
              vmulss  xmm1, xmm7, dword ptr [rbp+1E0h+var_1E0+4]
              vmovss  dword ptr [rbp+1E0h+anonymous_4+14h], xmm1
              vmulss  xmm0, xmm7, dword ptr [rbp+1E0h+var_1E0+8]
              vmovss  dword ptr [rbp+1E0h+anonymous_4+18h], xmm0
              vmovaps xmm3, xmm6
              vshufps xmm3, xmm3, xmm3, 0
              vinsertf128 ymm3, ymm3, xmm3, 1
              vmulps  ymm1, ymm3, [rbp+1E0h+anonymous_3]
              vmovups [rbp+1E0h+anonymous_3], ymm1
              vmulps  xmm2, xmm3, xmmword ptr [rbp+1E0h+anonymous_4]
              vmovups xmmword ptr [rbp+1E0h+anonymous_4], xmm2
            }
          }
          else
          {
            *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF, m_data[v24].m_instanceIdx);
            __asm
            {
              vmovaps xmm1, xmm0
              vshufps xmm1, xmm1, xmm1, 0
              vmovups xmmword ptr [rbp+1E0h+scale.m_quad], xmm1
            }
            v32 = NULL;
            if ( (CollisionTileModelShape->m_flags.m_storage & 1) != 0 )
              v32 = (const hknpConvexShape *)CollisionTileModelShape;
            CollisionTileModelShape = hknpScaledConvexShapeBase::createInPlace(&bufferInOut, v32, &scale, SCALE_SURFACE);
            StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF, m_data[v24].m_instanceIdx, &origin, &orientationAsQuat);
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+1E0h+var_160]
              vmovups xmmword ptr [rbp+1E0h+qi.m_vec.m_quad], xmm0
              vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
              vmovups [rbp+1E0h+anonymous_3], ymm1
              vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
              vmovups [rbp+1E0h+anonymous_4], ymm1
            }
            hkRotationImpl<float>::set((hkRotationImpl<float> *)&v102, &qi);
            __asm
            {
              vmulss  xmm1, xmm7, dword ptr [rbp+1E0h+origin]
              vmovss  dword ptr [rbp+1E0h+anonymous_4+10h], xmm1
              vmulss  xmm0, xmm7, dword ptr [rbp+1E0h+origin+4]
              vmovss  dword ptr [rbp+1E0h+anonymous_4+14h], xmm0
              vmulss  xmm2, xmm7, dword ptr [rbp+1E0h+origin+8]
              vmovss  dword ptr [rbp+1E0h+anonymous_4+18h], xmm2
            }
          }
          __asm { vmovss  dword ptr [rbp+1E0h+anonymous_4+1Ch], xmm9 }
          transform.m_col0.m_quad.m128_u64[1] = 0i64;
          transform.m_col1.m_quad.m128_i32[0] = 0x1FFFF;
          transform.m_col0.m_quad.m128_u64[0] = (unsigned __int64)hkGeometry::`vftable';
          transform.m_col1.m_quad.m128_u64[1] = 0i64;
          transform.m_col2 = (hkVector4f)0x8000000000000000ui64;
          transform.m_col3.m_quad.m128_u64[0] = 0x8000000000000000ui64;
          p = NULL;
          v96 = 0x8000000000000000ui64;
          buildSurfaceGeometry = CollisionTileModelShape->buildSurfaceGeometry;
          v52 = (int)_R14->__vftable;
          WORD2(v106) = 0;
          *((_QWORD *)&v106 + 1) = 0i64;
          LODWORD(v107) = 2;
          __asm
          {
            vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
            vmovups [rbp+1E0h+var_1B0], xmm0
          }
          LODWORD(v109) = 0;
          __asm
          {
            vmovups xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
            vmovups [rbp+1E0h+var_190], xmm1
            vmovss  [rbp+1E0h+var_180], xmm8
          }
          LODWORD(v106) = v52;
          ((void (__fastcall *)(hknpScaledConvexShapeBase *, unsigned __int16 *, __int128 *, hkMatrix4Impl<float> *, void **))buildSurfaceGeometry)(CollisionTileModelShape, &transform.m_col3.m_quad.m128_u16[4], &v106, &transform, &p);
          if ( BYTE5(_R14->__vftable) )
          {
            v55 = (0xFFFFFFFF >> this->m_numShapeKeyBits) | (WORD2(v94) << (32 - this->m_numShapeKeyBits));
            v56 = transform.m_col3.m_quad.m128_i32[0] - 1;
            if ( transform.m_col3.m_quad.m128_i32[0] - 1 >= 0 )
            {
              v57 = 16i64 * (transform.m_col3.m_quad.m128_i32[0] - 1);
              do
              {
                *(_DWORD *)(transform.m_col2.m_quad.m128_u64[1] + v57 + 12) = v55;
                v57 -= 16i64;
                --v56;
              }
              while ( v56 >= 0 );
            }
          }
          else
          {
            v58 = transform.m_col3.m_quad.m128_i32[0] - 1;
            if ( transform.m_col3.m_quad.m128_i32[0] - 1 >= 0 )
            {
              v59 = 16i64 * (transform.m_col3.m_quad.m128_i32[0] - 1);
              do
              {
                CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag((m_data[v24].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[v24].m_modelIdxAndFlags & 0x3FFF);
                *(_DWORD *)(transform.m_col2.m_quad.m128_u64[1] + v59 + 12) = CollisionTileModelShapeTag;
                v59 -= 16i64;
                --v58;
              }
              while ( v58 >= 0 );
            }
          }
          __asm
          {
            vmovdqu xmm0, xmmword ptr [rbp+1E0h+anonymous_3]
            vpslldq xmm1, xmm0, 4
            vpsrldq xmm1, xmm1, 4
            vmovdqu [rbp+1E0h+var_1D0], xmm1
            vmovdqu xmm0, xmmword ptr [rbp+1E0h+anonymous_3+10h]
            vpslldq xmm2, xmm0, 4
            vpsrldq xmm1, xmm2, 4
            vmovdqu [rbp+1E0h+var_1C0], xmm1
            vmovdqu xmm0, xmmword ptr [rbp+1E0h+anonymous_4]
            vpslldq xmm2, xmm0, 4
            vpsrldq xmm1, xmm2, 4
            vmovdqu [rbp+1E0h+var_1B0], xmm1
            vmovups xmm0, xmmword ptr [rbp+1E0h+anonymous_4+10h]
            vblendps xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
            vmovups [rbp+1E0h+var_1A0], xmm2
          }
          v13 = v97;
          hkGeometry::appendGeometry(v97, (const hkGeometry *)&transform.m_col3.m_quad.m128_u32[3], &transform);
          if ( BYTE4(_R14->__vftable) )
          {
            v71 = v96;
            v72 = hkMemHeapAllocator();
            v73 = v99;
            v74 = v99[2];
            v75 = v74 + v71;
            v76 = v99[3] & 0x3FFFFFFF;
            v77 = v99[2];
            if ( v76 < (int)v74 + v71 )
            {
              v78 = 2 * v76;
              if ( (unsigned int)v78 >= 0x3FFFFFFF )
                v78 = 1073741822;
              if ( v75 < v78 )
                v75 = v78;
              hkArrayUtil::_reserve(v72, v99, v75, 16);
              v77 = v73[2];
            }
            v73[2] = v77 + v71;
            _RCX = *(_QWORD *)v73 + 16 * v74;
            v80 = 0;
            if ( (int)v96 > 0 )
            {
              v81 = 0i64;
              do
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [r14+20h]
                  vmulps  xmm1, xmm0, xmmword ptr [rax+rdx]
                  vaddps  xmm1, xmm1, xmmword ptr [r14+40h]
                  vmovups xmmword ptr [rcx], xmm1
                }
                ++v80;
                v81 += 16i64;
                _RCX += 16i64;
              }
              while ( v80 < (int)v96 );
            }
            v13 = v97;
          }
          v84 = hkMemHeapAllocator();
          LODWORD(v96) = 0;
          if ( v96 >= 0 )
            hkMemoryAllocator::bufFree2(v84, p, 16, HIDWORD(v96) & 0x3FFFFFFF);
          p = NULL;
          HIDWORD(v96) = 0x80000000;
          transform.m_col0.m_quad.m128_u64[0] = (unsigned __int64)hkGeometry::`vftable';
          v85 = hkMemHeapAllocator();
          transform.m_col3.m_quad.m128_i32[0] = 0;
          if ( transform.m_col3.m_quad.m128_i32[1] >= 0 )
            hkMemoryAllocator::bufFree2(v85, (void *)transform.m_col2.m_quad.m128_u64[1], 16, transform.m_col3.m_quad.m128_i32[1] & 0x3FFFFFFF);
          transform.m_col2.m_quad.m128_u64[1] = 0i64;
          transform.m_col3.m_quad.m128_i32[1] = 0x80000000;
          v86 = hkMemHeapAllocator();
          transform.m_col2.m_quad.m128_i32[0] = 0;
          if ( transform.m_col2.m_quad.m128_i32[1] >= 0 )
            hkMemoryAllocator::bufFree2(v86, (void *)transform.m_col1.m_quad.m128_u64[1], 16, transform.m_col2.m_quad.m128_i32[1] & 0x3FFFFFFF);
          transform.m_col1.m_quad.m128_u64[1] = 0i64;
          transform.m_col2.m_quad.m128_i32[1] = 0x80000000;
          hkReferencedObject::~hkReferencedObject((hkReferencedObject *)&transform);
          bufferInOut.__vftable = (hknpShapeBuffer_vtbl *)hknpShapeBuffer::`vftable';
          if ( bufferInOut.m_shape )
            ((void (__fastcall *)(hknpShape *, _QWORD))bufferInOut.m_shape->~hkBaseObject)(bufferInOut.m_shape, 0i64);
          v18 = HIDWORD(v94);
        }
        v23 = v94;
      }
      HIDWORD(v94) = ++v18;
    }
    while ( v18 < v23 );
    v15 = (hknpShape::BuildSurfaceGeometryConfig *)v100;
  }
  if ( !v13[12] )
    v17 = -2147220992;
  v15->m_radiusMode = v17;
  result = v15;
  _R11 = &v119;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return result;
}

/*
==============
StaticModels_HavokShape::calcAabb
==============
*/
void StaticModels_HavokShape::calcAabb(StaticModels_HavokShape *this, const hkTransformf *transform, hkAabb *aabbOut)
{
  _RBX = transform;
  _RSI = this;
  _RDI = aabbOut;
  hkAabbUtil::calcAabb(transform, &this->m_aabb, aabbOut);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmm2, xmmword ptr [rbx+10h]
    vmovups xmm3, xmmword ptr [rbx+20h]
    vdpps   xmm1, xmm0, xmm0, 71h ; 'q'
    vdpps   xmm0, xmm2, xmm2, 72h ; 'r'
    vorps   xmm2, xmm1, xmm0
    vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
    vdpps   xmm1, xmm3, xmm3, 74h ; 't'
    vorps   xmm2, xmm2, xmm1
    vsubps  xmm3, xmm2, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
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
    __asm
    {
      vmovups xmm5, xmmword ptr [rdi]
      vaddps  xmm0, xmm5, xmmword ptr [rdi+10h]
      vmulps  xmm4, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
      vbroadcastss xmm3, dword ptr [rsi+90h]
      vsubps  xmm0, xmm4, xmm3
      vmaxps  xmm0, xmm5, xmm0
      vmovups xmmword ptr [rdi], xmm0
      vmovups xmm1, xmmword ptr [rdi+10h]
      vaddps  xmm2, xmm3, xmm4
      vminps  xmm2, xmm1, xmm2
      vmovups xmmword ptr [rdi+10h], xmm2
    }
  }
}

/*
==============
StaticModels_HavokShape::calcBoundingRadius
==============
*/
void StaticModels_HavokShape::calcBoundingRadius(StaticModels_HavokShape *this, const hkVector4f *pivot, hkSimdFloat32 *radiusOut)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+80h]
    vaddps  xmm1, xmm0, xmmword ptr [rcx+70h]
    vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
    vmovups xmm2, xmmword ptr [rdx]
    vsubps  xmm0, xmm2, xmm3
    vmovaps [rsp+18h+var_18], xmm6
    vdpps   xmm6, xmm0, xmm0, 7Fh
    vrsqrtps xmm4, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcmpleps xmm5, xmm6, xmm0
    vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vmulps  xmm1, xmm6, xmm4
    vmulps  xmm2, xmm1, xmm4
    vmulps  xmm1, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm0, xmm2
    vmulps  xmm2, xmm3, xmm1
    vbroadcastss xmm3, dword ptr [rcx+90h]
    vmulps  xmm0, xmm2, xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vandnps xmm4, xmm5, xmm0
    vaddps  xmm0, xmm3, xmm4
    vmovups xmmword ptr [r8], xmm0
  }
}

/*
==============
StaticModels_HavokShape::calcBoundingSphere
==============
*/
void StaticModels_HavokShape::calcBoundingSphere(StaticModels_HavokShape *this, const hkTransformf *transform, hkSphere *sphereOut)
{
  hkVector4f b; 
  hkVector4f v12; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+80h]
    vaddps  xmm1, xmm0, xmmword ptr [rcx+70h]
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
  }
  _RDI = sphereOut;
  _RBX = this;
  __asm { vmovups xmmword ptr [rsp+58h+b.m_quad], xmm2 }
  hkVector4f::setTransformedPos(&v12, transform, &b);
  __asm
  {
    vbroadcastss xmm3, dword ptr [rbx+90h]
    vmovups xmm0, xmmword ptr [rsp+58h+var_28.m_quad]
    vblendps xmm1, xmm0, xmm3, 8
    vmovups xmmword ptr [rdi], xmm1
  }
}

/*
==============
StaticModels_HavokShape::calcSurfaceVelocity
==============
*/
void StaticModels_HavokShape::calcSurfaceVelocity(StaticModels_HavokShape *this, const hknpShape::SurfaceVelocityInput *input, hknpShape::SurfaceVelocityOutput *output)
{
  unsigned int v7; 
  const hkVector4f *p_m_angularVelocity; 
  hkVector4f linVelShapeSpace; 

  _R10 = input;
  v7 = input->m_shapeKey.m_value >> (32 - this->m_numShapeKeyBits);
  if ( (unsigned __int16)v7 < this->m_instanceVelocities.m_size )
  {
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    _RAX = &this->m_instanceVelocities.m_data[(unsigned __int16)v7];
    __asm { vmovdqu xmm6, xmmword ptr [rax+10h] }
    p_m_angularVelocity = &_RAX->m_angularVelocity;
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm7
      vpxor   xmm1, xmm1, xmm1
      vmovdqu xmm7, xmmword ptr [rax]
      vpor    xmm0, xmm7, xmm6
      vpand   xmm2, xmm0, cs:?hkVector4Util_valueMask@@3QBHB; int const near * const hkVector4Util_valueMask
      vpcmpgtd xmm3, xmm2, xmm1
      vmovmskps eax, xmm3
    }
    if ( ((unsigned __int8)_RAX & 7) != 0 )
    {
      _RAX = _R10->m_worldFromShape;
      __asm
      {
        vmovups xmm0, xmmword ptr [r10+10h]
        vsubps  xmm5, xmm0, xmmword ptr [rax+30h]
        vmovups xmm1, xmmword ptr [rax+10h]
        vmovups xmm0, xmmword ptr [rax]
        vdpps   xmm3, xmm1, xmm5, 72h ; 'r'
        vmovups xmm1, xmmword ptr [rax+20h]
        vdpps   xmm2, xmm0, xmm5, 71h ; 'q'
        vdpps   xmm0, xmm1, xmm5, 74h ; 't'
        vorps   xmm4, xmm3, xmm2
        vorps   xmm2, xmm4, xmm0
        vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
        vmulps  xmm3, xmm1, xmm2
        vshufps xmm0, xmm2, xmm2, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm6
        vsubps  xmm1, xmm2, xmm3
        vshufps xmm0, xmm1, xmm1, 0C9h ; 'É'
        vaddps  xmm1, xmm0, xmm7
        vmovups xmmword ptr [rsp+68h+linVelShapeSpace.m_quad], xmm1
      }
      hknpShape::SurfaceVelocityOutput::setVelocityLs(output, _R10, &linVelShapeSpace, p_m_angularVelocity);
    }
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm7, [rsp+68h+var_28]
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
  int v15; 
  char v17; 
  vec3_t origin; 
  hkQuaternionf qi; 
  hkTransformf v21; 
  vec4_t orientationAsQuat; 

  CollisionTileModelShape = (const hknpShape *)StaticModels_GetCollisionTileModelShape((this->m_modelIdxAndFlags & 0x4000) != 0, tileIdx, this->m_modelIdxAndFlags & 0x3FFF);
  StaticModels_GetCollisionTileModelInstanceTransform(tileIdx, this->m_modelIdxAndFlags & 0x3FFF, this->m_instanceIdx, &origin, &orientationAsQuat);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups xmm0, xmmword ptr [rsp+0C8h+var_38]
    vmovups ymmword ptr [rsp+0C8h+var_78], ymm1
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+0C8h+var_78+20h], ymm1
    vmovups xmmword ptr [rsp+0C8h+qi.m_vec.m_quad], xmm0
  }
  hkRotationImpl<float>::set(&v21.m_rotation, &qi);
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rsp+0C8h+origin+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+0C8h+origin]
    vmulss  xmm2, xmm3, dword ptr [rsp+0C8h+origin+8]
  }
  m_instanceIdx = this->m_instanceIdx;
  v15 = this->m_modelIdxAndFlags & 0x3FFF;
  __asm
  {
    vmovss  dword ptr [rsp+0C8h+var_78+34h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0C8h+var_78+3Ch], xmm0
    vmovss  dword ptr [rsp+0C8h+var_78+30h], xmm1
    vmovss  dword ptr [rsp+0C8h+var_78+38h], xmm2
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(tileIdx, v15, m_instanceIdx);
  __asm { vucomiss xmm0, cs:__real@3f800000 }
  if ( v17 )
  {
    CollisionTileModelShape->calcAabb((hknpShape *)CollisionTileModelShape, &v21, aabbOut);
  }
  else
  {
    *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(tileIdx, this->m_modelIdxAndFlags & 0x3FFF, this->m_instanceIdx);
    __asm
    {
      vshufps xmm0, xmm0, xmm0, 0
      vmovups xmmword ptr [rsp+0C8h+qi.m_vec.m_quad], xmm0
    }
    hknpShapeUtil::calcAabbWithScale(CollisionTileModelShape, &v21, &qi.m_vec, SCALE_SURFACE, aabbOut);
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
  hkMonitorStream *v12; 
  const hknpShapeKeyMask *m_shapeKeyMask; 
  hkMonitorStream *v16; 
  hkMonitorStream *v17; 
  const hknpShapeKeyMask *v19; 
  hkcdSimdTree::ProcessRayCastLeaves processor; 
  StaticModels_HavokShape **v22; 
  hkMonitorStream *v23; 
  __int64 v24; 
  StaticModels_HavokShape *v25; 
  const hknpShapeKeyMask *v26; 
  char v27; 
  char v28; 
  hknpCollisionQueryContext *v29; 
  const hknpRayCastQuery *v30; 
  const hknpShapeQueryInfo *v31; 
  const hknpQueryFilterData *v32; 
  hknpCollisionQueryCollector *v33; 
  hkBaseObject v34; 
  char v35; 
  int v36; 
  char v38; 

  v24 = -2i64;
  _RSI = collector;
  if ( targetShapeInfo->m_shapeKeyMask )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v12 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtCompoundCastRay");
    v23 = v12;
    v35 = 0;
    v36 = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
      vmovups [rbp+47h+var_90], xmm0
    }
    v38 = 0;
    v34.__vftable = (hkBaseObject_vtbl *)&StaticModels_HavokShapeEx::ScaleAndTransformCollector::`vftable';
    m_shapeKeyMask = targetShapeInfo->m_shapeKeyMask;
    v25 = this;
    v26 = m_shapeKeyMask;
    v27 = 0;
    v30 = query;
    v29 = queryContext;
    v31 = targetShapeInfo;
    v32 = targetShapeFilterData;
    v33 = collector;
    v28 = collector->m_hints.m_storage & 1;
    processor.__vftable = (hkcdSimdTree::ProcessRayCastLeaves_vtbl *)&hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<1>,0>::`vftable';
    v22 = &v25;
    __asm { vmovups xmm2, xmmword ptr [rsi+10h]; initialFraction }
    hkcdSimdTree::rayCast_OutOfLine(&this->m_boundingVolumeData.m_simdTree, &query->m_ray, *(float *)&_XMM2, &processor, 1u);
    v34.__vftable = (hkBaseObject_vtbl *)hknpCollisionQueryCollector::`vftable';
    hkBaseObject::~hkBaseObject(&v34);
    if ( v12 )
      hkMonitorStream::timerEnd(v12, "Et");
  }
  else
  {
    v16 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v17 = v16;
    if ( v16 )
      hkMonitorStream::timerBegin(v16, "TtCompoundCastRay");
    v23 = v17;
    v35 = 0;
    v36 = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
      vmovups [rbp+47h+var_90], xmm0
    }
    v38 = 0;
    v34.__vftable = (hkBaseObject_vtbl *)&StaticModels_HavokShapeEx::ScaleAndTransformCollector::`vftable';
    v19 = targetShapeInfo->m_shapeKeyMask;
    v25 = this;
    v26 = v19;
    v27 = 0;
    v30 = query;
    v29 = queryContext;
    v31 = targetShapeInfo;
    v32 = targetShapeFilterData;
    v33 = collector;
    v28 = collector->m_hints.m_storage & 1;
    processor.__vftable = (hkcdSimdTree::ProcessRayCastLeaves_vtbl *)&hkcdSimdTreeUtils::ProcessSimdTreeRayCastLeaves<StaticModels_HavokShapeEx::RayCast<0>,0>::`vftable';
    v22 = &v25;
    __asm { vmovups xmm2, xmmword ptr [rsi+10h]; initialFraction }
    hkcdSimdTree::rayCast_OutOfLine(&this->m_boundingVolumeData.m_simdTree, &query->m_ray, *(float *)&_XMM2, &processor, 1u);
    v34.__vftable = (hkBaseObject_vtbl *)hknpCollisionQueryCollector::`vftable';
    hkBaseObject::~hkBaseObject(&v34);
    if ( v17 )
      hkMonitorStream::timerEnd(v17, "Et");
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
  hkMonitorStream *v20; 
  __int64 v23; 
  hknpShape *m_shape; 
  const hkTransformf *p_transform; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_shapeKeyMask; 
  hkMonitorStream *v104; 
  hkMonitorStream *v105; 
  __int64 v108; 
  hknpShape *v130; 
  const hkTransformf *p_querya; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v179; 
  hkVector4f halfExtents; 
  hkMonitorStream *v196; 
  __int64 v197; 
  hkAabb aabbOut; 
  StaticModels_HavokShapeEx::ShapeCast<1> querya; 
  hkTransformf transform; 
  char v201; 
  void *retaddr; 

  _RAX = &retaddr;
  v197 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RDI = queryShapeInfo;
  _RSI = query;
  _RBX = targetShapeInfo;
  if ( targetShapeInfo->m_shapeKeyMask )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v20 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtCompoundCastShape");
    v196 = v20;
    if ( _RDI->m_scalingInternals.m_isScaled )
    {
      StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(_RDI, targetShapeInfo, (hkTransformf *)&querya, &halfExtents);
      __asm
      {
        vmovups xmm9, xmmword ptr [rsp+1A8h+halfExtents.m_quad]
        vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
        vandnps xmm6, xmm0, xmm9
      }
      m_shape = (hknpShape *)_RSI->m_shape;
      if ( (m_shape->m_flags.m_storage & 1) != 0 )
      {
        hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)m_shape, (const hkTransformf *)&querya, &aabbOut);
        __asm { vbroadcastss xmm3, dword ptr [rdi+38h] }
        goto LABEL_18;
      }
    }
    else
    {
      _RAX = _RDI->m_shapeToWorld;
      _R8 = targetShapeInfo->m_shapeToWorld;
      v23 = 3i64;
      _RDX = &_RAX->m_translation;
      _R9 = (char *)((char *)&querya - (char *)_RAX);
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r8]
          vmovups xmm1, xmmword ptr [r8+10h]
          vmovups xmm3, xmmword ptr [r8+20h]
          vmovups xmm2, xmmword ptr [rdx]
          vdpps   xmm4, xmm0, xmm2, 71h ; 'q'
          vdpps   xmm1, xmm1, xmm2, 72h ; 'r'
          vdpps   xmm2, xmm3, xmm2, 74h ; 't'
          vorps   xmm0, xmm1, xmm4
          vorps   xmm0, xmm2, xmm0
          vmovups xmmword ptr [r9+rdx], xmm0
        }
        --_RDX;
        --v23;
      }
      while ( v23 >= 0 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+30h]
        vsubps  xmm5, xmm0, xmmword ptr [r8+30h]
        vmovups xmm1, xmmword ptr [r8]
        vmovups xmm0, xmmword ptr [r8+10h]
        vmovups xmm3, xmmword ptr [r8+20h]
        vdpps   xmm4, xmm1, xmm5, 71h ; 'q'
        vdpps   xmm2, xmm0, xmm5, 72h ; 'r'
        vdpps   xmm1, xmm3, xmm5, 74h ; 't'
        vorps   xmm0, xmm2, xmm4
        vorps   xmm3, xmm1, xmm0
        vmovups xmmword ptr [rsp+1A8h+query.m_targetShapeFilterData], xmm3
      }
      m_shape = (hknpShape *)_RSI->m_shape;
      if ( targetShapeInfo->m_scalingInternals.m_isScaled )
      {
        __asm
        {
          vrcpps  xmm2, xmmword ptr [rbx+40h]
          vmulps  xmm1, xmm2, xmmword ptr [rbx+40h]
          vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
          vsubps  xmm1, xmm0, xmm1
          vmulps  xmm9, xmm1, xmm2
          vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
          vandnps xmm6, xmm0, xmm9
          vmovups ymm2, ymmword ptr [rsp+1A8h+query.baseclass_0.m_targetShape]
          vmovups ymmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col0.m_quad], ymm2
          vmovups ymm0, ymmword ptr [rsp+1A8h+query.m_query]
          vmovups ymmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
          vmulps  xmm1, xmm3, xmm9
          vmovups xmmword ptr [rsp+1A8h+transform.m_translation.m_quad], xmm1
          vmulps  xmm0, xmm2, xmm9
          vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col0.m_quad], xmm0
          vmulps  xmm2, xmm9, xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col1.m_quad]
          vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col1.m_quad], xmm2
          vmulps  xmm1, xmm9, xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad]
          vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad], xmm1
        }
        p_transform = &transform;
        if ( (m_shape->m_flags.m_storage & 1) != 0 )
        {
          hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)m_shape, &transform, &aabbOut);
          _RAX = _RSI->m_shape;
          __asm { vbroadcastss xmm3, dword ptr [rax+20h] }
LABEL_18:
          __asm
          {
            vmulps  xmm4, xmm3, xmm6
            vshufps xmm1, xmm4, xmm4, 0
            vshufps xmm0, xmm4, xmm4, 55h ; 'U'
            vmaxps  xmm2, xmm0, xmm1
            vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
            vmaxps  xmm3, xmm1, xmm2
            vaddps  xmm4, xmm3, xmmword ptr [rsp+1A8h+aabbOut.m_max.m_quad]
            vmovups xmm0, xmmword ptr [rsp+1A8h+aabbOut.m_min.m_quad]
            vsubps  xmm5, xmm0, xmm3
          }
LABEL_13:
          __asm
          {
            vmovss  xmm3, dword ptr [rsi+9Ch]
            vmaxss  xmm3, xmm3, dword ptr [rsi+68h]
            vshufps xmm1, xmm6, xmm6, 0
            vshufps xmm0, xmm6, xmm6, 55h ; 'U'
            vmaxps  xmm2, xmm0, xmm1
            vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
            vmaxps  xmm2, xmm1, xmm2
            vshufps xmm0, xmm3, xmm3, 0
            vmulps  xmm1, xmm0, xmm2
            vaddps  xmm8, xmm1, xmm4
            vmovups xmmword ptr [rsp+1A8h+aabbOut.m_max.m_quad], xmm8
            vsubps  xmm7, xmm5, xmm1
            vmovups xmmword ptr [rsp+1A8h+aabbOut.m_min.m_quad], xmm7
            vaddps  xmm0, xmm8, xmm7
            vmulps  xmm5, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
            vmulps  xmm0, xmm9, xmmword ptr [rsi+40h]
            vblendps xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
            vxorps  xmm2, xmm2, xmm2
            vcmpeqps xmm0, xmm1, xmm2
            vandnps xmm4, xmm0, xmm1
            vcmpeqps xmm0, xmm4, xmm2
            vrcpps  xmm3, xmm4
            vmulps  xmm2, xmm3, xmm4
            vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
            vsubps  xmm2, xmm1, xmm2
            vmulps  xmm3, xmm2, xmm3
            vmovups xmm1, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
            vblendvps xmm2, xmm3, xmm1, xmm0
            vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col1.m_quad], xmm4
            vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad], xmm2
            vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col0.m_quad], xmm5
            vsubps  xmm0, xmm8, xmm7
            vmulps  xmm0, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
            vmovups xmmword ptr [rsp+1A8h+halfExtents.m_quad], xmm0
          }
          m_shapeKeyMask = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
          querya.m_targetShape = (const StaticModels_HavokShape *)targetShape;
          querya.m_simdTreeMask = m_shapeKeyMask;
          querya.m_hasHit = 0;
          querya.m_queryContext = queryContext;
          querya.m_query = _RSI;
          querya.m_queryShapeInfo = _RDI;
          querya.m_targetShapeFilterData = targetShapeFilterData;
          querya.m_targetShapeInfo = targetShapeInfo;
          querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
          querya.m_collector = collector;
          querya.m_startCollector = startCollector;
          querya.m_earlyExit = collector->m_hints.m_storage & 1;
          hkcdSimdTree::aabbCast<StaticModels_HavokShapeEx::ShapeCast<1>>((hkcdSimdTree *)&targetShape[3].m_convexRadius, (const hkcdRay *)&transform, &halfExtents, &querya, (collector->m_hints.m_storage & 0x41) == 0, 1u);
          if ( v20 )
            hkMonitorStream::timerEnd(v20, "Et");
          goto LABEL_32;
        }
LABEL_12:
        m_shape->calcAabb(m_shape, p_transform, &aabbOut);
        __asm
        {
          vmovups xmm4, xmmword ptr [rsp+1A8h+aabbOut.m_max.m_quad]
          vmovups xmm5, xmmword ptr [rsp+1A8h+aabbOut.m_min.m_quad]
        }
        goto LABEL_13;
      }
      __asm
      {
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vmovups xmm6, xmm9
      }
    }
    p_transform = (const hkTransformf *)&querya;
    goto LABEL_12;
  }
  v104 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v105 = v104;
  if ( v104 )
    hkMonitorStream::timerBegin(v104, "TtCompoundCastShape");
  v196 = v105;
  if ( _RDI->m_scalingInternals.m_isScaled )
  {
    StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(_RDI, targetShapeInfo, (hkTransformf *)&querya, &halfExtents);
    __asm
    {
      vmovups xmm9, xmmword ptr [rsp+1A8h+halfExtents.m_quad]
      vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
      vandnps xmm6, xmm0, xmm9
    }
    v130 = (hknpShape *)_RSI->m_shape;
    if ( (v130->m_flags.m_storage & 1) != 0 )
    {
      hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)v130, (const hkTransformf *)&querya, &aabbOut);
      __asm { vbroadcastss xmm3, dword ptr [rdi+38h] }
      goto LABEL_35;
    }
    goto LABEL_28;
  }
  _RAX = _RDI->m_shapeToWorld;
  _R8 = targetShapeInfo->m_shapeToWorld;
  v108 = 3i64;
  _RDX = &_RAX->m_translation;
  _R9 = (char *)((char *)&querya - (char *)_RAX);
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r8]
      vmovups xmm1, xmmword ptr [r8+10h]
      vmovups xmm3, xmmword ptr [r8+20h]
      vmovups xmm2, xmmword ptr [rdx]
      vdpps   xmm4, xmm0, xmm2, 71h ; 'q'
      vdpps   xmm1, xmm1, xmm2, 72h ; 'r'
      vdpps   xmm2, xmm3, xmm2, 74h ; 't'
      vorps   xmm0, xmm1, xmm4
      vorps   xmm0, xmm2, xmm0
      vmovups xmmword ptr [r9+rdx], xmm0
    }
    --_RDX;
    --v108;
  }
  while ( v108 >= 0 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+30h]
    vsubps  xmm5, xmm0, xmmword ptr [r8+30h]
    vmovups xmm1, xmmword ptr [r8]
    vmovups xmm0, xmmword ptr [r8+10h]
    vmovups xmm3, xmmword ptr [r8+20h]
    vdpps   xmm4, xmm1, xmm5, 71h ; 'q'
    vdpps   xmm2, xmm0, xmm5, 72h ; 'r'
    vdpps   xmm1, xmm3, xmm5, 74h ; 't'
    vorps   xmm0, xmm2, xmm4
    vorps   xmm3, xmm1, xmm0
    vmovups xmmword ptr [rsp+1A8h+query.m_targetShapeFilterData], xmm3
  }
  v130 = (hknpShape *)_RSI->m_shape;
  if ( !targetShapeInfo->m_scalingInternals.m_isScaled )
  {
    __asm
    {
      vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
      vmovups xmm6, xmm9
    }
LABEL_28:
    p_querya = (const hkTransformf *)&querya;
    goto LABEL_29;
  }
  __asm
  {
    vrcpps  xmm2, xmmword ptr [rbx+40h]
    vmulps  xmm1, xmm2, xmmword ptr [rbx+40h]
    vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm9, xmm1, xmm2
    vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
    vandnps xmm6, xmm0, xmm9
    vmovups ymm2, ymmword ptr [rsp+1A8h+query.baseclass_0.m_targetShape]
    vmovups ymmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col0.m_quad], ymm2
    vmovups ymm0, ymmword ptr [rsp+1A8h+query.m_query]
    vmovups ymmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
    vmulps  xmm1, xmm9, xmm3
    vmovups xmmword ptr [rsp+1A8h+transform.m_translation.m_quad], xmm1
    vmulps  xmm0, xmm9, xmm2
    vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col0.m_quad], xmm0
    vmulps  xmm1, xmm9, xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col1.m_quad]
    vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col1.m_quad], xmm1
    vmulps  xmm0, xmm9, xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad]
    vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad], xmm0
  }
  p_querya = &transform;
  if ( (v130->m_flags.m_storage & 1) == 0 )
  {
LABEL_29:
    v130->calcAabb(v130, p_querya, &aabbOut);
    __asm
    {
      vmovups xmm4, xmmword ptr [rsp+1A8h+aabbOut.m_max.m_quad]
      vmovups xmm5, xmmword ptr [rsp+1A8h+aabbOut.m_min.m_quad]
    }
    goto LABEL_30;
  }
  hknpConvexShape::calcAabbNoRadius((hknpConvexShape *)v130, &transform, &aabbOut);
  _RAX = _RSI->m_shape;
  __asm { vbroadcastss xmm3, dword ptr [rax+20h] }
LABEL_35:
  __asm
  {
    vmulps  xmm4, xmm6, xmm3
    vshufps xmm1, xmm4, xmm4, 0
    vshufps xmm0, xmm4, xmm4, 55h ; 'U'
    vmaxps  xmm2, xmm0, xmm1
    vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
    vmaxps  xmm3, xmm1, xmm2
    vaddps  xmm4, xmm3, xmmword ptr [rsp+1A8h+aabbOut.m_max.m_quad]
    vmovups xmm0, xmmword ptr [rsp+1A8h+aabbOut.m_min.m_quad]
    vsubps  xmm5, xmm0, xmm3
  }
LABEL_30:
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+9Ch]
    vmaxss  xmm3, xmm3, dword ptr [rsi+68h]
    vshufps xmm1, xmm6, xmm6, 0
    vshufps xmm0, xmm6, xmm6, 55h ; 'U'
    vmaxps  xmm2, xmm0, xmm1
    vshufps xmm1, xmm6, xmm6, 0AAh ; 'ª'
    vmaxps  xmm2, xmm1, xmm2
    vshufps xmm0, xmm3, xmm3, 0
    vmulps  xmm1, xmm0, xmm2
    vaddps  xmm8, xmm1, xmm4
    vmovups xmmword ptr [rsp+1A8h+aabbOut.m_max.m_quad], xmm8
    vsubps  xmm7, xmm5, xmm1
    vmovups xmmword ptr [rsp+1A8h+aabbOut.m_min.m_quad], xmm7
    vaddps  xmm0, xmm8, xmm7
    vmulps  xmm5, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
    vmulps  xmm0, xmm9, xmmword ptr [rsi+40h]
    vblendps xmm1, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h, 8; __m128 const near * const g_vectorfConstants
    vxorps  xmm2, xmm2, xmm2
    vcmpeqps xmm0, xmm1, xmm2
    vandnps xmm4, xmm0, xmm1
    vcmpeqps xmm0, xmm4, xmm2
    vrcpps  xmm3, xmm4
    vmulps  xmm2, xmm3, xmm4
    vmovups xmm1, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vsubps  xmm2, xmm1, xmm2
    vmulps  xmm3, xmm2, xmm3
    vmovups xmm1, cs:__xmm@7f7fffee7f7fffee7f7fffee7f7fffee
    vblendvps xmm2, xmm3, xmm1, xmm0
    vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col1.m_quad], xmm4
    vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col2.m_quad], xmm2
    vmovups xmmword ptr [rsp+1A8h+transform.m_rotation.baseclass_0.m_col0.m_quad], xmm5
    vsubps  xmm0, xmm8, xmm7
    vmulps  xmm0, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rsp+1A8h+halfExtents.m_quad], xmm0
  }
  v179 = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
  querya.m_targetShape = (const StaticModels_HavokShape *)targetShape;
  querya.m_simdTreeMask = v179;
  querya.m_hasHit = 0;
  querya.m_queryContext = queryContext;
  querya.m_query = _RSI;
  querya.m_queryShapeInfo = _RDI;
  querya.m_targetShapeFilterData = targetShapeFilterData;
  querya.m_targetShapeInfo = targetShapeInfo;
  querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
  querya.m_collector = collector;
  querya.m_startCollector = startCollector;
  querya.m_earlyExit = collector->m_hints.m_storage & 1;
  hkcdSimdTree::aabbCast<StaticModels_HavokShapeEx::ShapeCast<0>>((hkcdSimdTree *)&targetShape[3].m_convexRadius, (const hkcdRay *)&transform, &halfExtents, (StaticModels_HavokShapeEx::ShapeCast<0> *)&querya, (collector->m_hints.m_storage & 0x41) == 0, 1u);
  if ( v105 )
    hkMonitorStream::timerEnd(v105, "Et");
LABEL_32:
  _R11 = &v201;
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
  StaticModels_HavokShapeInstance *m_data; 
  unsigned int m_tileIdx; 
  __int64 v17; 
  unsigned int m_storage; 
  unsigned int m_instanceIdx; 
  unsigned int v80; 
  unsigned int v81; 
  int v82; 
  unsigned int v84; 
  int v85; 
  bool v88; 
  unsigned __int16 CollisionTileModelShapeTag; 
  unsigned int v90; 
  hknpScaledConvexShapeBase *CollisionTileModelShape; 
  const hknpConvexShape *v99; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *v101; 
  unsigned int v102; 
  vec3_t origin; 
  char v105[64]; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  void *retaddr; 

  _R11 = &retaddr;
  _RDI = collector;
  m_data = this->m_instances.m_data;
  m_tileIdx = this->m_tileIdx;
  v17 = (unsigned __int16)(key.m_value >> (32 - this->m_numShapeKeyBits));
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  StaticModels_GetCollisionTileModelInstanceTransform(m_tileIdx, m_data[v17].m_modelIdxAndFlags & 0x3FFF, m_data[v17].m_instanceIdx, &origin, &orientationAsQuat);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups xmm0, [rsp+158h+var_C8]
    vmovups ymmword ptr [rsp+158h+var_108], ymm1
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+158h+var_108+20h], ymm1
    vmovups xmmword ptr [rsp+158h+qi.m_vec.m_quad], xmm0
  }
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v105, &qi);
  __asm
  {
    vmovss  xmm2, cs:__real@3d000000
    vmulss  xmm4, xmm2, dword ptr [rsp+158h+origin+8]
    vmovss  xmm0, dword ptr [rsp+158h+origin]
    vmulss  xmm3, xmm2, dword ptr [rsp+158h+origin+4]
  }
  m_storage = _RDI->m_internal.m_flags.m_storage;
  __asm
  {
    vmulss  xmm5, xmm0, xmm2
    vinsertps xmm5, xmm5, xmm3, 10h
    vinsertps xmm5, xmm5, xmm4, 20h ; ' '
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm5, xmm5, xmm1, 30h ; '0'
    vmulps  xmm4, xmm5, xmmword ptr [rdi+160h]
  }
  if ( (m_storage & 1) != 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+158h+var_108]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm0, xmmword ptr [rsp+158h+var_108+20h]
      vmovups xmmword ptr [rdi+20h], xmm0
      vmovups xmmword ptr [rdi+30h], xmm4
    }
  }
  else if ( (m_storage & 4) != 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+158h+var_108]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm0, xmmword ptr [rsp+158h+var_108+20h]
      vmovups xmmword ptr [rdi+20h], xmm0
      vaddps  xmm1, xmm4, xmmword ptr [rdi+30h]
      vmovups xmmword ptr [rdi+30h], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovups xmm5, xmmword ptr [rsp+158h+var_108+20h]
      vmovaps [rsp+158h+var_58], xmm7
      vmovaps [rsp+158h+var_68], xmm8
      vmovaps [rsp+158h+var_78], xmm9
      vmovaps [rsp+158h+var_88], xmm10
      vmovups ymm10, ymmword ptr [rdi]
      vextractf128 xmm9, ymm10, 1
      vmovaps [rsp+158h+var_98], xmm11
      vmovups xmm11, xmmword ptr [rdi+20h]
      vshufps xmm0, xmm4, xmm4, 55h ; 'U'
      vmulps  xmm2, xmm0, xmm9
      vshufps xmm1, xmm4, xmm4, 0
      vmulps  xmm0, xmm1, xmm10
      vaddps  xmm3, xmm2, xmm0
      vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
      vmulps  xmm2, xmm1, xmm11
      vaddps  xmm8, xmm3, xmm2
      vshufps xmm0, xmm5, xmm5, 55h ; 'U'
      vmulps  xmm3, xmm0, xmm9
      vshufps xmm1, xmm5, xmm5, 0
      vmulps  xmm2, xmm1, xmm10
      vaddps  xmm4, xmm3, xmm2
      vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
      vmovups xmm5, xmmword ptr [rsp+158h+var_108+10h]
      vmulps  xmm1, xmm0, xmm11
      vaddps  xmm7, xmm4, xmm1
      vshufps xmm0, xmm5, xmm5, 55h ; 'U'
      vmulps  xmm3, xmm0, xmm9
      vshufps xmm1, xmm5, xmm5, 0
      vmulps  xmm2, xmm1, xmm10
      vaddps  xmm4, xmm3, xmm2
      vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
      vmovups xmm5, xmmword ptr [rsp+158h+var_108]
      vmulps  xmm1, xmm0, xmm11
      vaddps  xmm6, xmm4, xmm1
      vshufps xmm0, xmm5, xmm5, 55h ; 'U'
      vmulps  xmm3, xmm0, xmm9
      vmovaps xmm9, [rsp+158h+var_78]
      vshufps xmm1, xmm5, xmm5, 0
      vmulps  xmm2, xmm1, xmm10
      vmovaps xmm10, [rsp+158h+var_88]
      vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
      vmulps  xmm1, xmm0, xmm11
      vaddps  xmm0, xmm8, xmmword ptr [rdi+30h]
      vmovaps xmm11, [rsp+158h+var_98]
      vmovaps xmm8, [rsp+158h+var_68]
      vmovups xmmword ptr [rdi+20h], xmm7
      vmovaps xmm7, [rsp+158h+var_58]
      vaddps  xmm4, xmm3, xmm2
      vaddps  xmm2, xmm4, xmm1
      vmovups xmmword ptr [rdi], xmm2
      vmovups xmmword ptr [rdi+10h], xmm6
      vmovups xmmword ptr [rdi+30h], xmm0
    }
  }
  m_instanceIdx = m_data[v17].m_instanceIdx;
  v80 = this->m_tileIdx;
  v81 = m_storage & 0xFFFFFFF8 | 2;
  v82 = m_data[v17].m_modelIdxAndFlags & 0x3FFF;
  _RDI->m_internal.m_flags.m_storage = v81;
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(v80, v82, m_instanceIdx);
  __asm { vucomiss xmm0, cs:__real@3f800000 }
  if ( !_ZF )
    _RDI->m_internal.m_flags.m_storage = v81 | 0x40;
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[v17].m_modelIdxAndFlags & 0x3FFF, m_data[v17].m_instanceIdx);
  v84 = this->m_tileIdx;
  v85 = m_data[v17].m_modelIdxAndFlags & 0x3FFF;
  __asm
  {
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm6, xmm0, xmmword ptr [rdi+160h]
  }
  v88 = (m_data[v17].m_modelIdxAndFlags & 0x4000) != 0;
  _RDI->m_parentShape = this;
  __asm { vmovups xmmword ptr [rdi+160h], xmm6 }
  CollisionTileModelShapeTag = StaticModels_GetCollisionTileModelShapeTag(v88, v84, v85);
  v90 = this->m_tileIdx;
  _RDI->m_internal.m_shapeTags[0] = CollisionTileModelShapeTag;
  CollisionTileModelShape = (hknpScaledConvexShapeBase *)StaticModels_GetCollisionTileModelShape((m_data[v17].m_modelIdxAndFlags & 0x4000) != 0, v90, m_data[v17].m_modelIdxAndFlags & 0x3FFF);
  __asm
  {
    vcmpeqps xmm3, xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vmovaps xmm6, [rsp+158h+var_48]
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
      v99 = NULL;
      if ( (CollisionTileModelShape->m_flags.m_storage & 1) != 0 )
        v99 = (const hknpConvexShape *)CollisionTileModelShape;
      CollisionTileModelShape = hknpScaledConvexShapeBase::createInPlace(&_RDI->m_internal.m_shapeBuffer, v99, &_RDI->m_internal.m_scale, (hknpShape::ScaleMode)((_RDI->m_internal.m_flags.m_storage & 0x40) == 0));
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vmovups xmmword ptr [rdi+160h], xmm0
      }
    }
  }
  _RDI->m_internal.m_shape = CollisionTileModelShape;
  _RDI->m_internal.m_flags.m_storage &= ~8u;
  v101 = result;
  v102 = ((key.m_value + 1) << this->m_numShapeKeyBits) - 1;
  _RDI->m_internal.m_numShapesStored = 1;
  result->m_value = v102;
  return v101;
}

/*
==============
StaticModels_HavokShape::getClosestPointsImpl
==============
*/
void StaticModels_HavokShape::getClosestPointsImpl(hknpCollisionQueryContext *queryContext, const hknpClosestPointsQuery *query, const hknpShapeQueryInfo *queryShapeInfo, const StaticModels_HavokShape *targetShape, const hknpQueryFilterData *targetShapeFilterData, const hknpShapeQueryInfo *targetShapeInfo, const hkTransformf *queryToTarget, bool queryAndTargetSwapped, hknpCollisionQueryCollector *collector)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v16; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *m_shapeKeyMask; 
  const hknpShape *m_shape; 
  StaticModels_HavokShapeSimdTree *p_m_simdTree; 
  hkMonitorStream *v58; 
  hkMonitorStream *v59; 
  const StaticModels_HavokShapeInternalsSimdTreeKeyMask *v60; 
  const hknpShape *v63; 
  StaticModels_HavokShapeSimdTree *v100; 
  hkVector4f targetScaleInvOut; 
  hkMonitorStream *v103; 
  __int64 v104; 
  hkAabb aabbOut; 
  hkTransformf transform; 
  StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1> querya; 

  v104 = -2i64;
  __asm { vmovaps [rsp+198h+var_48], xmm6 }
  targetScaleInvOut.m_quad.m128_u64[0] = (unsigned __int64)queryContext;
  _RBX = targetShapeInfo;
  _RDI = queryToTarget;
  if ( targetShapeInfo->m_shapeKeyMask )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v16 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtCompoundGetClosestPoints");
    v103 = v16;
    m_shapeKeyMask = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
    querya.m_targetShape = targetShape;
    querya.m_simdTreeMask = m_shapeKeyMask;
    querya.m_hasHit = 0;
    querya.m_queryContext = (hknpCollisionQueryContext *)targetScaleInvOut.m_quad.m128_u64[0];
    querya.m_query = query;
    querya.m_queryShapeInfo = queryShapeInfo;
    querya.m_targetShapeInfo = targetShapeInfo;
    querya.m_targetShapeFilterData = targetShapeFilterData;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rsp+198h+query.m_queryToTarget.m_rotation.baseclass_0.m_col0.m_quad], ymm0
      vmovups ymm0, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rsp+198h+query.m_queryToTarget.m_rotation.baseclass_0.m_col2.m_quad], ymm0
    }
    querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
    querya.m_collector = collector;
    if ( queryShapeInfo->m_scalingInternals.m_isScaled )
    {
      StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(queryShapeInfo, targetShapeInfo, &transform, &targetScaleInvOut);
      query->m_shape->calcAabb((hknpShape *)query->m_shape, &transform, &aabbOut);
      __asm { vmovups xmm6, xmmword ptr [rsp+198h+targetScaleInvOut.m_quad] }
    }
    else
    {
      m_shape = query->m_shape;
      if ( targetShapeInfo->m_scalingInternals.m_isScaled )
      {
        __asm
        {
          vrcpps  xmm2, xmmword ptr [rbx+40h]
          vmulps  xmm1, xmm2, xmmword ptr [rbx+40h]
          vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
          vsubps  xmm1, xmm0, xmm1
          vmulps  xmm6, xmm1, xmm2
          vmovups ymm1, ymmword ptr [rdi]
          vmovups ymmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col0.m_quad], ymm1
          vmovups ymm0, ymmword ptr [rdi+20h]
          vmovups ymmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
          vextractf128 xmm0, ymm0, 1
          vmulps  xmm0, xmm0, xmm6
          vmovups xmmword ptr [rsp+198h+transform.m_translation.m_quad], xmm0
          vmulps  xmm0, xmm1, xmm6
          vmovups xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col0.m_quad], xmm0
          vmulps  xmm2, xmm6, xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col1.m_quad]
          vmovups xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col1.m_quad], xmm2
          vmulps  xmm1, xmm6, xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col2.m_quad]
          vmovups xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col2.m_quad], xmm1
        }
        _RDI = (hknpConvexShape *)m_shape;
        if ( (m_shape->m_flags.m_storage & 1) == 0 )
          _RDI = NULL;
        if ( _RDI )
        {
          hknpConvexShape::calcAabbNoRadius(_RDI, &transform, &aabbOut);
          __asm
          {
            vbroadcastss xmm3, dword ptr [rdi+20h]
            vmulps  xmm4, xmm6, xmm3
            vshufps xmm1, xmm4, xmm4, 0
            vshufps xmm0, xmm4, xmm4, 55h ; 'U'
            vmaxps  xmm2, xmm0, xmm1
            vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
            vmaxps  xmm3, xmm1, xmm2
            vaddps  xmm0, xmm3, xmmword ptr [rsp+198h+aabbOut.m_max.m_quad]
            vmovups xmmword ptr [rsp+198h+aabbOut.m_max.m_quad], xmm0
            vmovups xmm1, xmmword ptr [rsp+198h+aabbOut.m_min.m_quad]
            vsubps  xmm2, xmm1, xmm3
            vmovups xmmword ptr [rsp+198h+aabbOut.m_min.m_quad], xmm2
          }
        }
        else
        {
          m_shape->calcAabb((hknpShape *)m_shape, &transform, &aabbOut);
        }
      }
      else
      {
        __asm { vmovups xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants }
        m_shape->calcAabb((hknpShape *)m_shape, queryToTarget, &aabbOut);
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
      vmaxps  xmm4, xmm0, xmmword ptr [r13+10h]
    }
    if ( targetShapeInfo->m_scalingInternals.m_isScaled )
    {
      __asm
      {
        vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
        vandnps xmm3, xmm0, xmm6
        vshufps xmm1, xmm3, xmm3, 0
        vshufps xmm0, xmm3, xmm3, 55h ; 'U'
        vmaxps  xmm2, xmm0, xmm1
        vshufps xmm1, xmm3, xmm3, 0AAh ; 'ª'
        vmaxps  xmm0, xmm1, xmm2
        vmulps  xmm4, xmm0, xmm4
      }
    }
    __asm
    {
      vmulps  xmm0, xmm4, xmm4
      vmovups xmmword ptr [rsp+198h+targetScaleInvOut.m_quad], xmm0
    }
    querya.m_earlyExit = collector->m_hints.m_storage & 1;
    p_m_simdTree = &targetShape->m_boundingVolumeData.m_simdTree;
    if ( (collector->m_hints.m_storage & 0x41) != 0 )
      hkcdSimdTree::closestFromAabb<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>>(p_m_simdTree, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, &querya, 1u);
    else
      hkcdSimdTree::closestFromAabbOrdered<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<1>>(p_m_simdTree, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, &querya, 1u);
    if ( v16 )
      hkMonitorStream::timerEnd(v16, "Et");
  }
  else
  {
    v58 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v59 = v58;
    if ( v58 )
      hkMonitorStream::timerBegin(v58, "TtCompoundGetClosestPoints");
    v103 = v59;
    v60 = (const StaticModels_HavokShapeInternalsSimdTreeKeyMask *)targetShapeInfo->m_shapeKeyMask;
    querya.m_targetShape = targetShape;
    querya.m_simdTreeMask = v60;
    querya.m_hasHit = 0;
    querya.m_queryContext = (hknpCollisionQueryContext *)targetScaleInvOut.m_quad.m128_u64[0];
    querya.m_query = query;
    querya.m_queryShapeInfo = queryShapeInfo;
    querya.m_targetShapeInfo = targetShapeInfo;
    querya.m_targetShapeFilterData = targetShapeFilterData;
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rsp+198h+query.m_queryToTarget.m_rotation.baseclass_0.m_col0.m_quad], ymm0
      vmovups ymm0, ymmword ptr [rdi+20h]
      vmovups ymmword ptr [rsp+198h+query.m_queryToTarget.m_rotation.baseclass_0.m_col2.m_quad], ymm0
    }
    querya.m_queryAndTargetSwapped = queryAndTargetSwapped;
    querya.m_collector = collector;
    if ( queryShapeInfo->m_scalingInternals.m_isScaled )
    {
      StaticModels_HavokShapeEx::calcQueryToTargetTransformWithScale(queryShapeInfo, targetShapeInfo, &transform, &targetScaleInvOut);
      query->m_shape->calcAabb((hknpShape *)query->m_shape, &transform, &aabbOut);
      __asm { vmovups xmm6, xmmword ptr [rsp+198h+targetScaleInvOut.m_quad] }
    }
    else
    {
      v63 = query->m_shape;
      if ( targetShapeInfo->m_scalingInternals.m_isScaled )
      {
        __asm
        {
          vrcpps  xmm2, xmmword ptr [rbx+40h]
          vmulps  xmm1, xmm2, xmmword ptr [rbx+40h]
          vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
          vsubps  xmm1, xmm0, xmm1
          vmulps  xmm6, xmm1, xmm2
          vmovups ymm1, ymmword ptr [rdi]
          vmovups ymmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col0.m_quad], ymm1
          vmovups ymm0, ymmword ptr [rdi+20h]
          vmovups ymmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
          vextractf128 xmm0, ymm0, 1
          vmulps  xmm0, xmm0, xmm6
          vmovups xmmword ptr [rsp+198h+transform.m_translation.m_quad], xmm0
          vmulps  xmm0, xmm1, xmm6
          vmovups xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col0.m_quad], xmm0
          vmulps  xmm2, xmm6, xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col1.m_quad]
          vmovups xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col1.m_quad], xmm2
          vmulps  xmm1, xmm6, xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col2.m_quad]
          vmovups xmmword ptr [rsp+198h+transform.m_rotation.baseclass_0.m_col2.m_quad], xmm1
        }
        _RDI = (hknpConvexShape *)v63;
        if ( (v63->m_flags.m_storage & 1) == 0 )
          _RDI = NULL;
        if ( _RDI )
        {
          hknpConvexShape::calcAabbNoRadius(_RDI, &transform, &aabbOut);
          __asm
          {
            vbroadcastss xmm3, dword ptr [rdi+20h]
            vmulps  xmm4, xmm6, xmm3
            vshufps xmm1, xmm4, xmm4, 0
            vshufps xmm0, xmm4, xmm4, 55h ; 'U'
            vmaxps  xmm2, xmm0, xmm1
            vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
            vmaxps  xmm3, xmm1, xmm2
            vaddps  xmm0, xmm3, xmmword ptr [rsp+198h+aabbOut.m_max.m_quad]
            vmovups xmmword ptr [rsp+198h+aabbOut.m_max.m_quad], xmm0
            vmovups xmm1, xmmword ptr [rsp+198h+aabbOut.m_min.m_quad]
            vsubps  xmm2, xmm1, xmm3
            vmovups xmmword ptr [rsp+198h+aabbOut.m_min.m_quad], xmm2
          }
        }
        else
        {
          v63->calcAabb((hknpShape *)v63, &transform, &aabbOut);
        }
      }
      else
      {
        __asm { vmovups xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants }
        v63->calcAabb((hknpShape *)v63, queryToTarget, &aabbOut);
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
      vmaxps  xmm4, xmm0, xmmword ptr [r13+10h]
    }
    if ( targetShapeInfo->m_scalingInternals.m_isScaled )
    {
      __asm
      {
        vmovups xmm0, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
        vandnps xmm3, xmm0, xmm6
        vshufps xmm1, xmm3, xmm3, 0
        vshufps xmm0, xmm3, xmm3, 55h ; 'U'
        vmaxps  xmm2, xmm0, xmm1
        vshufps xmm1, xmm3, xmm3, 0AAh ; 'ª'
        vmaxps  xmm0, xmm1, xmm2
        vmulps  xmm4, xmm0, xmm4
      }
    }
    __asm
    {
      vmulps  xmm0, xmm4, xmm4
      vmovups xmmword ptr [rsp+198h+targetScaleInvOut.m_quad], xmm0
    }
    querya.m_earlyExit = collector->m_hints.m_storage & 1;
    v100 = &targetShape->m_boundingVolumeData.m_simdTree;
    if ( (collector->m_hints.m_storage & 0x41) != 0 )
      hkcdSimdTree::closestFromAabb<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>>(v100, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, (StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0> *)&querya, 1u);
    else
      hkcdSimdTree::closestFromAabbOrdered<StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0>>(v100, &aabbOut, (const hkSimdFloat32 *)&targetScaleInvOut, (StaticModels_HavokShapeEx::ClosestPointsToConvexQuery<0> *)&querya, 1u);
    if ( v59 )
      hkMonitorStream::timerEnd(v59, "Et");
  }
  __asm { vmovaps xmm6, [rsp+198h+var_48] }
}

/*
==============
StaticModels_HavokShape::getLeafShapes
==============
*/
void StaticModels_HavokShape::getLeafShapes(StaticModels_HavokShape *this, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *keys, int numKeys, hknpShapeCollector *collector)
{
  unsigned int v14; 
  hknpConvexShape *CollisionTileModelShape; 
  unsigned int m_storage; 
  unsigned __int8 v83; 
  __int64 v84; 
  int v85; 
  __int64 v86; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *v87; 
  __int64 v88; 
  unsigned __int8 m_numShapeKeyBits; 
  signed __int64 v95; 
  __int64 i; 
  const hknpConvexShape *v103; 
  StaticModels_HavokShapeInstance *m_data; 
  int v109; 
  __int16 v110; 
  char v111[64]; 
  vec3_t origin; 
  vec4_t orientationAsQuat; 
  hkQuaternionf qi; 
  char v121; 

  __asm { vmovaps [rsp+158h+var_38], xmm6 }
  v109 = numKeys;
  _RDI = collector;
  v14 = keys->m_value >> (32 - this->m_numShapeKeyBits);
  m_data = this->m_instances.m_data;
  v110 = v14;
  CollisionTileModelShape = (hknpConvexShape *)StaticModels_GetCollisionTileModelShape((m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x3FFF);
  StaticModels_GetCollisionTileModelInstanceTransform(this->m_tileIdx, m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x3FFF, m_data[(unsigned __int16)v14].m_instanceIdx, &origin, &orientationAsQuat);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
    vmovups xmm0, xmmword ptr [rsp+158h+var_B8]
    vmovups ymmword ptr [rsp+158h+var_108], ymm1
    vmovups ymm1, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
    vmovups ymmword ptr [rsp+158h+var_108+20h], ymm1
    vmovups xmmword ptr [rsp+158h+qi.m_vec.m_quad], xmm0
  }
  hkRotationImpl<float>::set((hkRotationImpl<float> *)v111, &qi);
  __asm
  {
    vmovss  xmm2, cs:__real@3d000000
    vmulss  xmm4, xmm2, dword ptr [rsp+158h+origin+8]
    vmovss  xmm0, dword ptr [rsp+158h+origin]
    vmulss  xmm3, xmm2, dword ptr [rsp+158h+origin+4]
  }
  m_storage = _RDI->m_internal.m_flags.m_storage;
  __asm
  {
    vmulss  xmm5, xmm0, xmm2
    vinsertps xmm5, xmm5, xmm3, 10h
    vinsertps xmm5, xmm5, xmm4, 20h ; ' '
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm5, xmm5, xmm1, 30h ; '0'
    vmulps  xmm4, xmm5, xmmword ptr [rdi+160h]
    vmovups xmmword ptr [rsp+158h+var_108+30h], xmm5
  }
  if ( (m_storage & 1) != 0 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+158h+var_108]
      vmovups xmm1, xmmword ptr [rsp+158h+var_108+10h]
      vmovups xmmword ptr [rdi], xmm0
      vmovups xmm0, xmmword ptr [rsp+158h+var_108+20h]
      vmovups xmmword ptr [rdi+20h], xmm0
      vmovups xmmword ptr [rdi+10h], xmm1
      vmovups xmmword ptr [rdi+30h], xmm4
    }
  }
  else if ( (m_storage & 4) != 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+158h+var_108]
      vmovups ymmword ptr [rdi], ymm0
      vmovups xmm0, xmmword ptr [rsp+158h+var_108+20h]
      vmovups xmmword ptr [rdi+20h], xmm0
      vaddps  xmm1, xmm4, xmmword ptr [rdi+30h]
      vmovups xmmword ptr [rdi+30h], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovups xmm5, xmmword ptr [rsp+158h+var_108+20h]
      vmovaps [rsp+158h+var_48], xmm7
      vmovaps [rsp+158h+var_58], xmm8
      vmovaps [rsp+158h+var_68], xmm9
      vmovaps [rsp+158h+var_78], xmm10
      vmovups ymm10, ymmword ptr [rdi]
      vextractf128 xmm9, ymm10, 1
      vmovaps [rsp+158h+var_88], xmm11
      vmovups xmm11, xmmword ptr [rdi+20h]
      vshufps xmm0, xmm4, xmm4, 55h ; 'U'
      vmulps  xmm2, xmm0, xmm9
      vshufps xmm1, xmm4, xmm4, 0
      vmulps  xmm0, xmm1, xmm10
      vaddps  xmm3, xmm2, xmm0
      vshufps xmm1, xmm4, xmm4, 0AAh ; 'ª'
      vmulps  xmm2, xmm1, xmm11
      vaddps  xmm8, xmm3, xmm2
      vshufps xmm0, xmm5, xmm5, 55h ; 'U'
      vmulps  xmm3, xmm0, xmm9
      vshufps xmm1, xmm5, xmm5, 0
      vmulps  xmm2, xmm1, xmm10
      vaddps  xmm4, xmm3, xmm2
      vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
      vmovups xmm5, xmmword ptr [rsp+158h+var_108+10h]
      vmulps  xmm1, xmm0, xmm11
      vaddps  xmm7, xmm4, xmm1
      vshufps xmm0, xmm5, xmm5, 55h ; 'U'
      vmulps  xmm3, xmm0, xmm9
      vshufps xmm1, xmm5, xmm5, 0
      vmulps  xmm2, xmm1, xmm10
      vaddps  xmm4, xmm3, xmm2
      vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
      vmovups xmm5, xmmword ptr [rsp+158h+var_108]
      vmulps  xmm1, xmm0, xmm11
      vaddps  xmm6, xmm4, xmm1
      vshufps xmm0, xmm5, xmm5, 55h ; 'U'
      vmulps  xmm3, xmm0, xmm9
      vmovaps xmm9, [rsp+158h+var_68]
      vshufps xmm1, xmm5, xmm5, 0
      vmulps  xmm2, xmm1, xmm10
      vmovaps xmm10, [rsp+158h+var_78]
      vshufps xmm0, xmm5, xmm5, 0AAh ; 'ª'
      vmulps  xmm1, xmm0, xmm11
      vaddps  xmm0, xmm8, xmmword ptr [rdi+30h]
      vmovaps xmm11, [rsp+158h+var_88]
      vmovaps xmm8, [rsp+158h+var_58]
      vmovups xmmword ptr [rdi+20h], xmm7
      vmovaps xmm7, [rsp+158h+var_48]
      vaddps  xmm4, xmm3, xmm2
      vaddps  xmm2, xmm4, xmm1
      vmovups xmmword ptr [rdi], xmm2
      vmovups xmmword ptr [rdi+10h], xmm6
      vmovups xmmword ptr [rdi+30h], xmm0
    }
  }
  _RDI->m_internal.m_flags.m_storage = m_storage & 0xFFFFFFF8 | 2;
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x3FFF, m_data[(unsigned __int16)v14].m_instanceIdx);
  __asm
  {
    vmovaps xmm1, xmm0
    vshufps xmm1, xmm1, xmm1, 0
    vmulps  xmm6, xmm1, xmmword ptr [rdi+160h]
  }
  *(double *)&_XMM0 = StaticModels_GetCollisionTileModelInstanceScale(this->m_tileIdx, m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x3FFF, m_data[(unsigned __int16)v14].m_instanceIdx);
  __asm { vucomiss xmm0, cs:__real@3f800000 }
  if ( !_ZF )
    _RDI->m_internal.m_flags.m_storage |= 0x40u;
  _RAX = &_RDI->m_internal.m_scale;
  _RDI->m_parentShape = this;
  __asm { vmovups xmmword ptr [rax], xmm6 }
  v83 = CollisionTileModelShape->m_dispatchType.m_storage;
  if ( v83 == 3 )
  {
    v84 = (__int64)&_RDI->m_shapeTagPath.m_data[_RDI->m_shapeTagPath.m_size++];
    *(_WORD *)v84 = StaticModels_GetCollisionTileModelShapeTag((m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x3FFF);
    v85 = (unsigned __int16)v14;
    v86 = 10i64;
    *(_DWORD *)(v84 + 16) = v85;
    *(_QWORD *)(v84 + 8) = this;
    *(_QWORD *)(v84 + 24) = CollisionTileModelShape;
    v87 = (hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)v111;
    do
    {
      hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>::hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>(v87++);
      --v86;
    }
    while ( v86 );
    v88 = 1i64;
    m_numShapeKeyBits = this->m_numShapeKeyBits;
    __asm { vmovd   xmm0, [rsp+158h+var_120] }
    *(_DWORD *)v111 = ((keys->m_value + 1) << m_numShapeKeyBits) - 1;
    _EAX = 10;
    __asm
    {
      vmovd   xmm1, eax
      vpminsd xmm1, xmm0, xmm1
      vmovd   ecx, xmm1
    }
    if ( _ECX > 1 )
    {
      v95 = (char *)keys - &v111[4];
      for ( i = 1i64; i < _ECX; ++i )
      {
        if ( (unsigned __int16)(*(_DWORD *)&v111[4 * i + 4 + v95] >> (32 - m_numShapeKeyBits)) != v110 )
          break;
        v88 = (unsigned int)(v88 + 1);
        *(_DWORD *)&v111[4 * i] = ((*(_DWORD *)&v111[4 * i + 4 + v95] + 1) << m_numShapeKeyBits) - 1;
      }
    }
    CollisionTileModelShape->getLeafShapes(CollisionTileModelShape, (const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *)v111, v88, _RDI);
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
    if ( _CF || v83 != 2 )
    {
      _RDI->m_internal.m_shape = CollisionTileModelShape;
    }
    else
    {
      v103 = NULL;
      if ( (CollisionTileModelShape->m_flags.m_storage & 1) != 0 )
        v103 = CollisionTileModelShape;
      _RDI->m_internal.m_shape = hknpScaledConvexShapeBase::createInPlace(&_RDI->m_internal.m_shapeBuffer, v103, &_RDI->m_internal.m_scale, (hknpShape::ScaleMode)((_RDI->m_internal.m_flags.m_storage & 0x40) == 0));
      _RAX = &_RDI->m_internal.m_scale;
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vmovups xmmword ptr [rax], xmm0
      }
    }
    _RDI->m_internal.m_shapeTags[0] = StaticModels_GetCollisionTileModelShapeTag((m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x4000) != 0, this->m_tileIdx, m_data[(unsigned __int16)v14].m_modelIdxAndFlags & 0x3FFF);
    _RDI->m_internal.m_flags.m_storage &= ~8u;
    _RDI->m_internal.m_numShapesStored = 1;
  }
  _R11 = &v121;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  unsigned int v6; 
  unsigned int m_value; 
  signed int v12; 
  int v13; 
  StaticModels_HavokShapeInstance *v14; 
  const hknpShapeKeyMask *m_mask; 
  __int64 m_size; 
  int v17; 
  unsigned int v18; 
  const void *CollisionTileModelShape; 
  __int128 v21; 

  _R15 = config;
  v6 = 0;
  m_value = previousKey.m_value;
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovsd  xmm1, qword ptr [r15+10h]
    vmovups [rsp+78h+var_48], xmm0
    vmovsd  [rsp+78h+var_38], xmm1
  }
  if ( previousKey.m_value == -1 )
  {
    v12 = 0;
  }
  else
  {
    v12 = previousKey.m_value >> (32 - this->m_numShapeKeyBits);
    m_value = ((previousKey.m_value + 1) << this->m_numShapeKeyBits) - 1;
    if ( !((previousKey.m_value + 1) << this->m_numShapeKeyBits) )
      ++v12;
  }
  v13 = this->m_instances.m_capacityAndFlags & 0x3FFFFFFF;
  if ( v12 >= v13 )
    return v6;
  while ( 1 )
  {
    v14 = &this->m_instances.m_data[(unsigned __int16)v12];
    if ( (v14->m_modelIdxAndFlags & 0x8000u) != 0 )
    {
      m_mask = config->m_mask;
      if ( !m_mask || ((unsigned int (__fastcall *)(const hknpShapeKeyMask *))m_mask->__vftable[1].getExactType)(m_mask) )
      {
        m_size = config->m_parentShapeKeyPath.m_size;
        v17 = m_size + this->m_numShapeKeyBits;
        *((_QWORD *)&v21 + 1) = 0i64;
        DWORD1(v21) = v17;
        v18 = config->m_parentShapeKeyPath.m_key.m_value & hknpShapeKeyPath_usedBitsMaskTable[m_size];
        LODWORD(m_size) = this->m_tileIdx;
        LODWORD(v21) = v18 | (((v12 + 1) << (32 - v17)) - 1);
        CollisionTileModelShape = StaticModels_GetCollisionTileModelShape((v14->m_modelIdxAndFlags & 0x4000) != 0, m_size, v14->m_modelIdxAndFlags & 0x3FFF);
        v6 += (*(__int64 (__fastcall **)(const void *, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)CollisionTileModelShape + 168i64))(CollisionTileModelShape, &shapeKeysOut[v6], capacity - v6, m_value, &v21);
        if ( v6 == capacity )
          break;
      }
    }
    ++v12;
    m_value = -1;
    if ( v12 >= v13 )
      return v6;
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
  StaticModels_HavokShape *v13; 
  const hknpShapeKeyMask *v14; 
  __int16 v15; 
  hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator> *v16; 
  hkAabb aabb; 
  hknpCollisionQueryContext *v18; 
  const hknpAabbQuery *v19; 
  const hknpShapeQueryInfo *v20; 
  const hknpQueryFilterData *v21; 
  const hknpShapeQueryInfo *v22; 

  m_shapeKeyMask = targetShapeInfo->m_shapeKeyMask;
  if ( m_shapeKeyMask )
  {
    collector.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<1,hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator>>::`vftable';
    v13 = this;
    v14 = m_shapeKeyMask;
    v15 = 0;
    v18 = queryContext;
    v19 = query;
    v20 = queryShapeInfo;
    v22 = targetShapeInfo;
    v21 = targetShapeFilterData;
    v16 = hits;
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+30h]
      vmovups ymmword ptr [rbp+37h+aabb.m_min.m_quad], ymm0
    }
    p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
    if ( !nmpInOut )
      goto LABEL_6;
LABEL_5:
    hkcdSimdTree::aabbOverlapsNearMiss_OutOfLine(p_m_simdTree, &aabb, &collector, nmpInOut, 1u);
    return;
  }
  collector.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<0,hkArray<hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>,hkContainerHeapAllocator>>::`vftable';
  v13 = this;
  v14 = NULL;
  v15 = 0;
  v18 = queryContext;
  v19 = query;
  v20 = queryShapeInfo;
  v22 = targetShapeInfo;
  v21 = targetShapeFilterData;
  v16 = hits;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8+30h]
    vmovups ymmword ptr [rbp+37h+aabb.m_min.m_quad], ymm0
  }
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
  hkcdSimdTree::LeafCollector v12; 
  StaticModels_HavokShape *v13; 
  const hknpShapeKeyMask *v14; 
  __int16 v15; 
  hknpCollisionQueryCollector *v16; 
  hkAabb aabb; 
  hknpCollisionQueryContext *v18; 
  const hknpAabbQuery *v19; 
  const hknpShapeQueryInfo *v20; 
  const hknpQueryFilterData *v21; 
  const hknpShapeQueryInfo *v22; 

  m_shapeKeyMask = targetShapeInfo->m_shapeKeyMask;
  if ( m_shapeKeyMask )
  {
    v12.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<1,hknpCollisionQueryCollector>::`vftable';
    v13 = this;
    v14 = m_shapeKeyMask;
    v15 = 0;
    v18 = queryContext;
    v19 = query;
    v20 = queryShapeInfo;
    v22 = targetShapeInfo;
    v21 = targetShapeFilterData;
    v16 = collector;
    __asm
    {
      vmovups ymm0, ymmword ptr [r8+30h]
      vmovups ymmword ptr [rbp+37h+aabb.m_min.m_quad], ymm0
    }
    p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
    if ( !nmpInOut )
      goto LABEL_6;
LABEL_5:
    hkcdSimdTree::aabbOverlapsNearMiss_OutOfLine(p_m_simdTree, &aabb, &v12, nmpInOut, 1u);
    return;
  }
  v12.__vftable = (hkcdSimdTree::LeafCollector_vtbl *)&StaticModels_HavokShapeEx::AabbOverlaps<0,hknpCollisionQueryCollector>::`vftable';
  v13 = this;
  v14 = NULL;
  v15 = 0;
  v18 = queryContext;
  v19 = query;
  v20 = queryShapeInfo;
  v22 = targetShapeInfo;
  v21 = targetShapeFilterData;
  v16 = collector;
  __asm
  {
    vmovups ymm0, ymmword ptr [r8+30h]
    vmovups ymmword ptr [rbp+37h+aabb.m_min.m_quad], ymm0
  }
  p_m_simdTree = &this->m_boundingVolumeData.m_simdTree;
  if ( nmpInOut )
    goto LABEL_5;
LABEL_6:
  hkcdSimdTree::aabbOverlaps_OutOfLine(p_m_simdTree, &aabb, &v12, 1u);
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
  int v3; 

  v3 = 0;
  if ( (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) != 0 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _R8 = 0i64;
    do
    {
      _RAX = this->m_instanceVelocities.m_data;
      _R8 += 32i64;
      ++v3;
      __asm { vmovups ymmword ptr [r8+rax-20h], ymm0 }
    }
    while ( v3 < (this->m_instances.m_capacityAndFlags & 0x3FFFFFFF) );
  }
}

