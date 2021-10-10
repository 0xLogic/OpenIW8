/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeToNodeIndex
==============
*/

unsigned int __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeToNodeIndex(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  return ?NodeToNodeIndex@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@KAIAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@@Z(mapEdgeList, r_octree, r_node);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueDynamicCandidateEdges
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueDynamicCandidateEdges(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const BgHandler *handler, unsigned __int64 edgePoolMaxSize, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  ?CollectUniqueDynamicCandidateEdges@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@IEAAXPEBVBgHandler@@_KPEAUEdgeId@@PEA_K@Z(this, handler, edgePoolMaxSize, outCandidiateEdgeIdPool, outCandidateEdgeIdCount);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode_ToLeaf
==============
*/

bool __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode_ToLeaf(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  return ?FindSmallestEnclosingNode_ToLeaf@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@IEBA_NAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@PEAI@Z(this, mapEdgeList, r_octree, r_node, outNodeIndex);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode_ToLeaf
==============
*/

bool __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode_ToLeaf(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  return ?FindSmallestEnclosingNode_ToLeaf@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@IEBA_NAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@PEAI@Z(this, mapEdgeList, r_octree, r_node, outNodeIndex);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode
==============
*/

bool __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  return ?FindSmallestEnclosingNode@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@IEBA_NAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@PEAI@Z(this, mapEdgeList, r_octree, r_node, outNodeIndex);
}

/*
==============
EdgeOctreeQuerySphere::EnclosedByOctreeNode
==============
*/

bool __fastcall EdgeOctreeQuerySphere::EnclosedByOctreeNode(EdgeOctreeQuerySphere *this, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  return ?EnclosedByOctreeNode@EdgeOctreeQuerySphere@@QEBA_NAEBUPMROctreeMetadata@@AEBUPMROctreeNode@@@Z(this, r_octree, r_node);
}

/*
==============
EdgeOctreeQueryFrustum::IntersectsLineSegment
==============
*/

bool __fastcall EdgeOctreeQueryFrustum::IntersectsLineSegment(EdgeOctreeQueryFrustum *this, const float4 (*r_lineSegment)[2], float *outClosestFraction, float *outDist)
{
  return ?IntersectsLineSegment@EdgeOctreeQueryFrustum@@QEBA_NAEAY01$$CBUfloat4@@PEAM1@Z(this, r_lineSegment, outClosestFraction, outDist);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetShape
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetShape(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const EdgeOctreeQueryFrustum *shape)
{
  ?SetShape@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@QEAAXPEBVEdgeOctreeQueryFrustum@@@Z(this, shape);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetHint
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetHint(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, unsigned int hintNode)
{
  ?SetHint@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@QEAAXI@Z(this, hintNode);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::EdgeOctreeQuery<EdgeOctreeQuerySphere>
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::EdgeOctreeQuery<EdgeOctreeQuerySphere>(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this)
{
  ??0?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@QEAA@XZ(this);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetFlag
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetFlag(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, EdgeOctreeQuery<EdgeOctreeQuerySphere>::EOQ_Flags flag)
{
  ?SetFlag@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@QEAAXW4EOQ_Flags@1@@Z(this, flag);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode
==============
*/

const PMROctreeNode *__fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, unsigned int nodeIndex)
{
  return ?NodeIndexToNode@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@KAAEBUPMROctreeNode@@AEBUMapEdgeList@@AEBUPMROctreeMetadata@@I@Z(mapEdgeList, r_octree, nodeIndex);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectIntersectingLeafNodes
==============
*/

bool __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectIntersectingLeafNodes(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *leafNodeIndexPool, unsigned __int64 *outLeafNodeIndexCount)
{
  return ?SelectIntersectingLeafNodes@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@IEBA_NAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@PEAIPEA_K@Z(this, mapEdgeList, r_octree, r_node, leafNodeIndexPool, outLeafNodeIndexCount);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetBucket
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetBucket(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, edgeQueryBucket_t bucket)
{
  ?SetBucket@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@QEAAXW4edgeQueryBucket_t@@@Z(this, bucket);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetHint
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetHint(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, unsigned int hintNode)
{
  ?SetHint@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@QEAAXI@Z(this, hintNode);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::ClearFlag
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::ClearFlag(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, EdgeOctreeQuery<EdgeOctreeQuerySphere>::EOQ_Flags flag)
{
  ?ClearFlag@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@QEAAXW4EOQ_Flags@1@@Z(this, flag);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetShape
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetShape(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const EdgeOctreeQuerySphere *shape)
{
  ?SetShape@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@QEAAXPEBVEdgeOctreeQuerySphere@@@Z(this, shape);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::EdgeOctreeQuery<EdgeOctreeQueryFrustum>
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::EdgeOctreeQuery<EdgeOctreeQueryFrustum>(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this)
{
  ??0?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@QEAA@XZ(this);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueStaticCandidateEdges
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueStaticCandidateEdges(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const unsigned int *leafNodeIndexPool, unsigned __int64 leafNodeIndexCount, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  ?CollectUniqueStaticCandidateEdges@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@KAXAEBUMapEdgeList@@AEBUPMROctreeMetadata@@PEBI_KPEAUEdgeId@@PEA_K@Z(mapEdgeList, r_octree, leafNodeIndexPool, leafNodeIndexCount, outCandidiateEdgeIdPool, outCandidateEdgeIdCount);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const BgHandler *handler, EdgeId *resultIdPool, float *resultFractionPool, float *resultDistancePool, unsigned __int64 resultPoolSize, unsigned __int64 *outResultCount, unsigned int *outHintNodeIndex)
{
  ?Execute@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@QEAAXPEBVBgHandler@@PEAUEdgeId@@PEAM2_KPEA_KPEAI@Z(this, handler, resultIdPool, resultFractionPool, resultDistancePool, resultPoolSize, outResultCount, outHintNodeIndex);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueDynamicCandidateEdges
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueDynamicCandidateEdges(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const BgHandler *handler, unsigned __int64 edgePoolMaxSize, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  ?CollectUniqueDynamicCandidateEdges@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@IEAAXPEBVBgHandler@@_KPEAUEdgeId@@PEA_K@Z(this, handler, edgePoolMaxSize, outCandidiateEdgeIdPool, outCandidateEdgeIdCount);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const BgHandler *handler, EdgeId *resultIdPool, float *resultFractionPool, float *resultDistancePool, unsigned __int64 resultPoolSize, unsigned __int64 *outResultCount, unsigned int *outHintNodeIndex)
{
  ?Execute@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@QEAAXPEBVBgHandler@@PEAUEdgeId@@PEAM2_KPEA_KPEAI@Z(this, handler, resultIdPool, resultFractionPool, resultDistancePool, resultPoolSize, outResultCount, outHintNodeIndex);
}

/*
==============
EdgeOctreeQuerySphere::IntersectsLineSegment
==============
*/

bool __fastcall EdgeOctreeQuerySphere::IntersectsLineSegment(EdgeOctreeQuerySphere *this, const float4 (*r_lineSegment)[2], float *outClosestFraction, float *outDist)
{
  return ?IntersectsLineSegment@EdgeOctreeQuerySphere@@QEBA_NAEAY01$$CBUfloat4@@PEAM1@Z(this, r_lineSegment, outClosestFraction, outDist);
}

/*
==============
EdgeOctreeQueryFrustum::EnclosedByOctreeNode
==============
*/

bool __fastcall EdgeOctreeQueryFrustum::EnclosedByOctreeNode(EdgeOctreeQueryFrustum *this, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  return ?EnclosedByOctreeNode@EdgeOctreeQueryFrustum@@QEBA_NAEBUPMROctreeMetadata@@AEBUPMROctreeNode@@@Z(this, r_octree, r_node);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeToNodeIndex
==============
*/

unsigned int __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeToNodeIndex(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  return ?NodeToNodeIndex@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@KAIAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@@Z(mapEdgeList, r_octree, r_node);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode
==============
*/

const PMROctreeNode *__fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, unsigned int nodeIndex)
{
  return ?NodeIndexToNode@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@KAAEBUPMROctreeNode@@AEBUMapEdgeList@@AEBUPMROctreeMetadata@@I@Z(mapEdgeList, r_octree, nodeIndex);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes
==============
*/

bool __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *leafNodeIndexPool, unsigned __int64 *outLeafNodeIndexCount)
{
  return ?SelectIntersectingLeafNodes@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@IEBA_NAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@PEAIPEA_K@Z(this, mapEdgeList, r_octree, r_node, leafNodeIndexPool, outLeafNodeIndexCount);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueStaticCandidateEdges
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueStaticCandidateEdges(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const unsigned int *leafNodeIndexPool, unsigned __int64 leafNodeIndexCount, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  ?CollectUniqueStaticCandidateEdges@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@KAXAEBUMapEdgeList@@AEBUPMROctreeMetadata@@PEBI_KPEAUEdgeId@@PEA_K@Z(mapEdgeList, r_octree, leafNodeIndexPool, leafNodeIndexCount, outCandidiateEdgeIdPool, outCandidateEdgeIdCount);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode
==============
*/

bool __fastcall EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  return ?FindSmallestEnclosingNode@?$EdgeOctreeQuery@VEdgeOctreeQuerySphere@@@@IEBA_NAEBUMapEdgeList@@AEBUPMROctreeMetadata@@AEBUPMROctreeNode@@PEAI@Z(this, mapEdgeList, r_octree, r_node, outNodeIndex);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetBucket
==============
*/

void __fastcall EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetBucket(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, edgeQueryBucket_t bucket)
{
  ?SetBucket@?$EdgeOctreeQuery@VEdgeOctreeQueryFrustum@@@@QEAAXW4edgeQueryBucket_t@@@Z(this, bucket);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::EdgeOctreeQuery<EdgeOctreeQueryFrustum>
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::EdgeOctreeQuery<EdgeOctreeQueryFrustum>(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this)
{
  this->m_bucket = MOUNT;
  this->m_hint = 16777208;
  this->m_queryShape = NULL;
  this->m_flags = 1;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::EdgeOctreeQuery<EdgeOctreeQuerySphere>
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::EdgeOctreeQuery<EdgeOctreeQuerySphere>(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this)
{
  this->m_bucket = MOUNT;
  this->m_hint = 16777208;
  this->m_queryShape = NULL;
  this->m_flags = 1;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueDynamicCandidateEdges
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueDynamicCandidateEdges(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const BgHandler *handler, unsigned __int64 edgePoolMaxSize, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  const EdgeOctreeQueryFrustum *m_queryShape; 
  Physics_WorldId v11; 
  unsigned int v12; 
  unsigned int HitBodyId; 
  int Ref; 
  int v15; 
  int v16; 
  int EntityNum; 
  unsigned __int8 v18; 
  unsigned int clipmapCModelIndex; 
  int v20; 
  const cmodel_t *BrushModel; 
  int v22; 
  unsigned int v23; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  hkMemoryAllocator *v26; 
  hkMemoryAllocator *v27; 
  hkMemoryAllocator *v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned __int8 v31; 
  Physics_WorldId v32; 
  unsigned int v33; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  EdgeId *v35; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v37; 
  __int64 v38; 
  vec3_t max; 
  vec3_t min; 

  v38 = -2i64;
  v35 = outCandidiateEdgeIdPool;
  extendedData.contents = -1;
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  if ( !outCandidateEdgeIdCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 927, ASSERT_TYPE_SANITY, "( outCandidateEdgeIdCount )", (const char *)&queryFormat, "outCandidateEdgeIdCount") )
    __debugbreak();
  v31 = *((_BYTE *)EdgeOctree_BucketFlagsMask + this->m_bucket);
  m_queryShape = this->m_queryShape;
  _XMM1.v = (__m128)m_queryShape->m_minExtent;
  LODWORD(min.v[0]) = _XMM1.v.m128_i32[0];
  __asm
  {
    vextractps dword ptr [rbp+40h+min+4], xmm1, 1
    vextractps dword ptr [rbp+40h+min+8], xmm1, 2
  }
  _XMM2.v = (__m128)m_queryShape->m_maxExtent;
  LODWORD(max.v[0]) = _XMM2.v.m128_i32[0];
  __asm
  {
    vextractps dword ptr [rbp+40h+max+4], xmm2, 1
    vextractps dword ptr [rbp+40h+max+8], xmm2, 2
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v37, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v37, 41);
  extendedData.ignoreBodies = &v37;
  extendedData.contents = -2122252287;
  v11 = handler->GetPhysicsWorldId((BgHandler *)handler);
  v32 = v11;
  result.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&result.m_memSizeAndFlags = 0x1FFFF;
  result.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
  result.m_hits.m_data = NULL;
  result.m_hits.m_size = 0;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  result.m_worldId = v11;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "EdgeQuery PhysicsReadLock");
  handler->AcquirePhysicsReadLock((BgHandler *)handler, v11);
  Sys_ProfEndNamedEvent();
  Physics_AABBBroadphaseQuery(v11, &min, &max, &extendedData, &result);
  *outCandidateEdgeIdCount = 0i64;
  v12 = 0;
  v33 = 0;
  if ( !HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
  {
LABEL_40:
    handler->ReleasePhysicsReadLock((BgHandler *)handler, v11);
    goto LABEL_41;
  }
  while ( 1 )
  {
    HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v12);
    Ref = Physics_GetRef(v11, HitBodyId);
    if ( Physics_GetRefSystem(Ref) != Physics_RefSystem_Scriptable )
      break;
    v15 = Ref >> 22;
    v16 = Ref & 0x3FFFFF;
    EntityNum = v16 + 2048;
    v18 = v15 & 3;
    if ( v18 )
    {
      v20 = v18;
      if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)(v18 - 1), v16, SCRIPTABLE_LINK_ENTITY) )
        goto LABEL_24;
      clipmapCModelIndex = ScriptableCl_GetInstanceCollisionContext((const LocalClientNum_t)(v20 - 1), v16)->clipmapCModelIndex;
    }
    else
    {
      if ( ScriptableSv_GetInstanceCommonContext(v16)->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
        goto LABEL_24;
      clipmapCModelIndex = ScriptableSv_GetInstanceCollisionContext(v16)->clipmapCModelIndex;
    }
    if ( clipmapCModelIndex )
      goto LABEL_12;
LABEL_24:
    v12 = ++v33;
    if ( v33 >= HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
      goto LABEL_40;
  }
  EntityNum = Physics_GetEntityNum(Ref);
  if ( handler->IsClient((BgHandler *)handler) )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(handler[1].__vftable), EntityNum);
    if ( Entity )
      p_nextState = &Entity->nextState;
    else
      p_nextState = NULL;
  }
  else
  {
    p_nextState = GHandler::GetEntityState((GHandler *)handler, EntityNum);
  }
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 990, ASSERT_TYPE_SANITY, "( state )", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 1u) )
    goto LABEL_24;
  clipmapCModelIndex = p_nextState->index.brushModel;
  if ( !clipmapCModelIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 995, ASSERT_TYPE_SANITY, "( brushModelIndex != 0 )", (const char *)&queryFormat, "brushModelIndex != 0") )
      __debugbreak();
    goto LABEL_24;
  }
LABEL_12:
  if ( clipmapCModelIndex >= CM_GetBrushModelCount() )
  {
    LODWORD(v30) = CM_GetBrushModelCount();
    LODWORD(v29) = clipmapCModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1004, ASSERT_TYPE_ASSERT, "(unsigned)( brushModelIndex ) < (unsigned)( CM_GetBrushModelCount() )", "brushModelIndex doesn't index CM_GetBrushModelCount()\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  BrushModel = CM_GetBrushModel(clipmapCModelIndex);
  v22 = 0;
  if ( !BrushModel->edgeTotalCount )
  {
LABEL_23:
    v11 = v32;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v23 = v22 + BrushModel->edgeFirstIndex;
    if ( MapEdgeList_GetListIndex(v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1009, ASSERT_TYPE_ASSERT, "(MapEdgeList_GetListIndex( index ) == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "MapEdgeList_GetListIndex( index ) == TRANSIENT_ZONE_ALWAYSLOADED") )
      __debugbreak();
    if ( (v31 & MapEdgeList_LookupMetadata(v23)->flags[0]) == 0 )
      goto LABEL_22;
    if ( *outCandidateEdgeIdCount >= edgePoolMaxSize )
      break;
    EdgeId::Set(&v35[*outCandidateEdgeIdCount], v23, EntityNum);
    ++*outCandidateEdgeIdCount;
LABEL_22:
    if ( ++v22 >= BrushModel->edgeTotalCount )
      goto LABEL_23;
  }
  handler->ReleasePhysicsReadLock((BgHandler *)handler, v32);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1020, ASSERT_TYPE_SANITY, "( false )", (const char *)&queryFormat, "false") )
    __debugbreak();
LABEL_41:
  v26 = hkMemHeapAllocator();
  result.m_hits.m_size = 0;
  if ( result.m_hits.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v26, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
  result.m_hits.m_data = NULL;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(&result);
  v27 = hkMemHeapAllocator();
  v37.m_ignoreBodies.m_size = 0;
  if ( v37.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, v37.m_ignoreBodies.m_data, 4, v37.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v37.m_ignoreBodies.m_data = NULL;
  v37.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v28 = hkMemHeapAllocator();
  v37.m_ignoreEntities.m_size = 0;
  if ( v37.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, v37.m_ignoreEntities.m_data, 8, v37.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueDynamicCandidateEdges
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueDynamicCandidateEdges(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const BgHandler *handler, unsigned __int64 edgePoolMaxSize, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  const EdgeOctreeQuerySphere *m_queryShape; 
  __m128 v; 
  __m128 v10; 
  Physics_WorldId v13; 
  unsigned int v14; 
  unsigned int HitBodyId; 
  int Ref; 
  int v17; 
  int v18; 
  int EntityNum; 
  unsigned __int8 v20; 
  unsigned int clipmapCModelIndex; 
  int v22; 
  const cmodel_t *BrushModel; 
  int v24; 
  unsigned int v25; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  hkMemoryAllocator *v28; 
  hkMemoryAllocator *v29; 
  hkMemoryAllocator *v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned __int8 v33; 
  Physics_WorldId v34; 
  unsigned int v35; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  EdgeId *v37; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v39; 
  __int64 v40; 
  vec3_t max; 
  vec3_t min; 

  v40 = -2i64;
  v37 = outCandidiateEdgeIdPool;
  extendedData.contents = -1;
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  if ( !outCandidateEdgeIdCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 927, ASSERT_TYPE_SANITY, "( outCandidateEdgeIdCount )", (const char *)&queryFormat, "outCandidateEdgeIdCount") )
    __debugbreak();
  v33 = *((_BYTE *)EdgeOctree_BucketFlagsMask + this->m_bucket);
  m_queryShape = this->m_queryShape;
  v = m_queryShape->m_radius.v;
  v10 = m_queryShape->m_midpoint.v;
  _XMM3 = _mm128_sub_ps(v10, v);
  _XMM2 = _mm128_add_ps(v10, v);
  min.v[0] = _XMM3.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+40h+min+4], xmm3, 1
    vextractps dword ptr [rbp+40h+min+8], xmm3, 2
  }
  max.v[0] = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+40h+max+4], xmm2, 1
    vextractps dword ptr [rbp+40h+max+8], xmm2, 2
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v39, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v39, 41);
  extendedData.ignoreBodies = &v39;
  extendedData.contents = -2122252287;
  v13 = handler->GetPhysicsWorldId((BgHandler *)handler);
  v34 = v13;
  result.m_propertyBag.m_bag = NULL;
  *(_DWORD *)&result.m_memSizeAndFlags = 0x1FFFF;
  result.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
  result.m_hits.m_data = NULL;
  result.m_hits.m_size = 0;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  result.m_worldId = v13;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "EdgeQuery PhysicsReadLock");
  handler->AcquirePhysicsReadLock((BgHandler *)handler, v13);
  Sys_ProfEndNamedEvent();
  Physics_AABBBroadphaseQuery(v13, &min, &max, &extendedData, &result);
  *outCandidateEdgeIdCount = 0i64;
  v14 = 0;
  v35 = 0;
  if ( !HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
  {
LABEL_40:
    handler->ReleasePhysicsReadLock((BgHandler *)handler, v13);
    goto LABEL_41;
  }
  while ( 1 )
  {
    HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v14);
    Ref = Physics_GetRef(v13, HitBodyId);
    if ( Physics_GetRefSystem(Ref) != Physics_RefSystem_Scriptable )
      break;
    v17 = Ref >> 22;
    v18 = Ref & 0x3FFFFF;
    EntityNum = v18 + 2048;
    v20 = v17 & 3;
    if ( v20 )
    {
      v22 = v20;
      if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)(v20 - 1), v18, SCRIPTABLE_LINK_ENTITY) )
        goto LABEL_24;
      clipmapCModelIndex = ScriptableCl_GetInstanceCollisionContext((const LocalClientNum_t)(v22 - 1), v18)->clipmapCModelIndex;
    }
    else
    {
      if ( ScriptableSv_GetInstanceCommonContext(v18)->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
        goto LABEL_24;
      clipmapCModelIndex = ScriptableSv_GetInstanceCollisionContext(v18)->clipmapCModelIndex;
    }
    if ( clipmapCModelIndex )
      goto LABEL_12;
LABEL_24:
    v14 = ++v35;
    if ( v35 >= HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result) )
      goto LABEL_40;
  }
  EntityNum = Physics_GetEntityNum(Ref);
  if ( handler->IsClient((BgHandler *)handler) )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(handler[1].__vftable), EntityNum);
    if ( Entity )
      p_nextState = &Entity->nextState;
    else
      p_nextState = NULL;
  }
  else
  {
    p_nextState = GHandler::GetEntityState((GHandler *)handler, EntityNum);
  }
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 990, ASSERT_TYPE_SANITY, "( state )", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 1u) )
    goto LABEL_24;
  clipmapCModelIndex = p_nextState->index.brushModel;
  if ( !clipmapCModelIndex )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 995, ASSERT_TYPE_SANITY, "( brushModelIndex != 0 )", (const char *)&queryFormat, "brushModelIndex != 0") )
      __debugbreak();
    goto LABEL_24;
  }
LABEL_12:
  if ( clipmapCModelIndex >= CM_GetBrushModelCount() )
  {
    LODWORD(v32) = CM_GetBrushModelCount();
    LODWORD(v31) = clipmapCModelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1004, ASSERT_TYPE_ASSERT, "(unsigned)( brushModelIndex ) < (unsigned)( CM_GetBrushModelCount() )", "brushModelIndex doesn't index CM_GetBrushModelCount()\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  BrushModel = CM_GetBrushModel(clipmapCModelIndex);
  v24 = 0;
  if ( !BrushModel->edgeTotalCount )
  {
LABEL_23:
    v13 = v34;
    goto LABEL_24;
  }
  while ( 1 )
  {
    v25 = v24 + BrushModel->edgeFirstIndex;
    if ( MapEdgeList_GetListIndex(v25) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1009, ASSERT_TYPE_ASSERT, "(MapEdgeList_GetListIndex( index ) == TRANSIENT_ZONE_ALWAYSLOADED)", (const char *)&queryFormat, "MapEdgeList_GetListIndex( index ) == TRANSIENT_ZONE_ALWAYSLOADED") )
      __debugbreak();
    if ( (v33 & MapEdgeList_LookupMetadata(v25)->flags[0]) == 0 )
      goto LABEL_22;
    if ( *outCandidateEdgeIdCount >= edgePoolMaxSize )
      break;
    EdgeId::Set(&v37[*outCandidateEdgeIdCount], v25, EntityNum);
    ++*outCandidateEdgeIdCount;
LABEL_22:
    if ( ++v24 >= BrushModel->edgeTotalCount )
      goto LABEL_23;
  }
  handler->ReleasePhysicsReadLock((BgHandler *)handler, v34);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1020, ASSERT_TYPE_SANITY, "( false )", (const char *)&queryFormat, "false") )
    __debugbreak();
LABEL_41:
  v28 = hkMemHeapAllocator();
  result.m_hits.m_size = 0;
  if ( result.m_hits.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
  result.m_hits.m_data = NULL;
  result.m_hits.m_capacityAndFlags = 0x80000000;
  hkReferencedObject::~hkReferencedObject(&result);
  v29 = hkMemHeapAllocator();
  v39.m_ignoreBodies.m_size = 0;
  if ( v39.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v29, v39.m_ignoreBodies.m_data, 4, v39.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v39.m_ignoreBodies.m_data = NULL;
  v39.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v30 = hkMemHeapAllocator();
  v39.m_ignoreEntities.m_size = 0;
  if ( v39.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v30, v39.m_ignoreEntities.m_data, 8, v39.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueStaticCandidateEdges
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueStaticCandidateEdges(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const unsigned int *leafNodeIndexPool, unsigned __int64 leafNodeIndexCount, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  const unsigned int *v6; 
  EdgeId *v7; 
  const MapEdgeList *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 *v11; 
  unsigned int v12; 
  char *v13; 
  char *v14; 
  char *v15; 
  char *v16; 
  const PMROctreeNode *v17; 
  unsigned int *v18; 
  unsigned int *v19; 
  unsigned int v20; 
  char *v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  char *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  unsigned int *v30; 
  __int64 v31; 
  __int64 v32; 
  const unsigned int *v33; 
  __int64 v34[2]; 
  PMROctreeMetadata *r_octreea; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  const unsigned int *v38; 
  const MapEdgeList *v39; 
  EdgeId *v40; 
  unsigned __int64 *v41; 
  char v42[4096]; 

  v6 = leafNodeIndexPool;
  v7 = outCandidiateEdgeIdPool;
  v8 = mapEdgeList;
  v39 = mapEdgeList;
  v9 = 0i64;
  v34[0] = 0i64;
  v10 = 0i64;
  v34[1] = 0i64;
  v11 = outCandidateEdgeIdCount;
  v41 = outCandidateEdgeIdCount;
  v33 = leafNodeIndexPool;
  r_octreea = (PMROctreeMetadata *)r_octree;
  v40 = outCandidiateEdgeIdPool;
  v38 = &leafNodeIndexPool[leafNodeIndexCount];
  if ( leafNodeIndexPool != v38 )
  {
    while ( 1 )
    {
      if ( v10 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 757, ASSERT_TYPE_ASSERT, "((dstIndex == 0) || (dstIndex == 1))", (const char *)&queryFormat, "(dstIndex == 0) || (dstIndex == 1)") )
        __debugbreak();
      v12 = *v6;
      v37 = v10 ^ 1;
      v13 = &v42[2048 * (v10 ^ 1)];
      v14 = &v13[4 * v34[v10 ^ 1]];
      v36 = v10 << 11;
      v15 = &v42[2048 * v10];
      v16 = v15 + 2048;
      v17 = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(v8, r_octreea, v12);
      if ( (v17->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 769, ASSERT_TYPE_ASSERT, "(isLeaf)", (const char *)&queryFormat, "isLeaf") )
        __debugbreak();
      if ( !v8->edgeIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 770, ASSERT_TYPE_ASSERT, "(mapEdgeList.edgeIndices)", (const char *)&queryFormat, "mapEdgeList.edgeIndices") )
        __debugbreak();
      v18 = &v8->edgeIndices[v17->parentNodeIndex];
      v19 = &v18[v17->childNodeSetIndex];
      while ( 1 )
      {
        if ( v13 > v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 779, ASSERT_TYPE_ASSERT, "( srcEdges ) <= ( srcEdgesEnd )", "%s <= %s\n\t%p, %p", "srcEdges", "srcEdgesEnd", v13, v14) )
          __debugbreak();
        if ( v18 > v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 780, ASSERT_TYPE_ASSERT, "( srcNodeEdges ) <= ( srcNodeEdgesEnd )", "%s <= %s\n\t%p, %p", "srcNodeEdges", "srcNodeEdgesEnd", v18, v19) )
          __debugbreak();
        if ( v15 > v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 781, ASSERT_TYPE_ASSERT, "( dstEdges ) <= ( dstEdgesEnd )", "%s <= %s\n\t%p, %p", "dstEdges", "dstEdgesEnd", v15, v16) )
          __debugbreak();
        if ( v13 == v14 )
        {
          if ( v18 == v19 )
            goto LABEL_38;
          if ( v13 == v14 )
            break;
        }
        if ( v18 == v19 )
        {
          v22 = truncate_cast<unsigned __int64,__int64>((v16 - v15) >> 2);
          v23 = truncate_cast<unsigned __int64,__int64>((v14 - v13) >> 2);
          v24 = v13;
          goto LABEL_35;
        }
        v20 = *(_DWORD *)v13;
        v21 = v15 + 4;
        if ( *(_DWORD *)v13 == *v18 )
        {
          v13 += 4;
LABEL_30:
          ++v18;
          goto LABEL_31;
        }
        if ( v20 >= *v18 )
        {
          v20 = *v18;
          goto LABEL_30;
        }
        v13 += 4;
LABEL_31:
        *(_DWORD *)v15 = v20;
        v15 += 4;
        if ( v21 == v16 )
          goto LABEL_38;
      }
      v22 = truncate_cast<unsigned __int64,__int64>((v16 - v15) >> 2);
      v23 = truncate_cast<unsigned __int64,__int64>(v19 - v18);
      v24 = (char *)v18;
LABEL_35:
      if ( v23 > v22 )
        v23 = v22;
      v25 = 4 * v23;
      memcpy_0(v15, v24, 4 * v23);
      v15 += v25;
LABEL_38:
      v26 = (&v15[-v36] - v42) >> 2;
      if ( v26 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", v26, "signed", v26) )
        __debugbreak();
      v34[v10] = v26;
      if ( v10 && v10 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 848, ASSERT_TYPE_ASSERT, "((dstIndex == 0) || (dstIndex == 1))", (const char *)&queryFormat, "(dstIndex == 0) || (dstIndex == 1)") )
        __debugbreak();
      v10 = v37;
      if ( (unsigned __int64)v26 < 0x200 )
      {
        v8 = v39;
        v6 = v33 + 1;
        v33 = v6;
        if ( v6 != v38 )
          continue;
      }
      v7 = v40;
      v9 = 0i64;
      v11 = v41;
      break;
    }
  }
  v27 = 0i64;
  if ( !v10 )
    v27 = 1i64;
  v28 = v34[v27];
  if ( v28 )
  {
    v29 = v34[v27];
    if ( !v10 )
      v9 = 2048i64;
    v30 = (unsigned int *)&v42[v9];
    do
    {
      EdgeId::Set(v7++, *v30++);
      --v29;
    }
    while ( v29 );
  }
  *v11 = v28;
  if ( v28 > 0x200 )
  {
    LODWORD(v32) = 512;
    LODWORD(v31) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 865, ASSERT_TYPE_ASSERT, "( *outCandidateEdgeIdCount ) <= ( (512) )", "%s <= %s\n\t%i, %i", "*outCandidateEdgeIdCount", "MAX_SELECTION_EDGES", v31, v32) )
      __debugbreak();
  }
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueStaticCandidateEdges
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueStaticCandidateEdges(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const unsigned int *leafNodeIndexPool, unsigned __int64 leafNodeIndexCount, EdgeId *outCandidiateEdgeIdPool, unsigned __int64 *outCandidateEdgeIdCount)
{
  const unsigned int *v6; 
  EdgeId *v7; 
  const MapEdgeList *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 *v11; 
  unsigned int v12; 
  char *v13; 
  char *v14; 
  char *v15; 
  char *v16; 
  const PMROctreeNode *v17; 
  unsigned int *v18; 
  unsigned int *v19; 
  unsigned int v20; 
  char *v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  char *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  unsigned int *v30; 
  __int64 v31; 
  __int64 v32; 
  const unsigned int *v33; 
  __int64 v34[2]; 
  PMROctreeMetadata *r_octreea; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  const unsigned int *v38; 
  const MapEdgeList *v39; 
  EdgeId *v40; 
  unsigned __int64 *v41; 
  char v42[4096]; 

  v6 = leafNodeIndexPool;
  v7 = outCandidiateEdgeIdPool;
  v8 = mapEdgeList;
  v39 = mapEdgeList;
  v9 = 0i64;
  v34[0] = 0i64;
  v10 = 0i64;
  v34[1] = 0i64;
  v11 = outCandidateEdgeIdCount;
  v41 = outCandidateEdgeIdCount;
  v33 = leafNodeIndexPool;
  r_octreea = (PMROctreeMetadata *)r_octree;
  v40 = outCandidiateEdgeIdPool;
  v38 = &leafNodeIndexPool[leafNodeIndexCount];
  if ( leafNodeIndexPool != v38 )
  {
    while ( 1 )
    {
      if ( v10 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 757, ASSERT_TYPE_ASSERT, "((dstIndex == 0) || (dstIndex == 1))", (const char *)&queryFormat, "(dstIndex == 0) || (dstIndex == 1)") )
        __debugbreak();
      v12 = *v6;
      v37 = v10 ^ 1;
      v13 = &v42[2048 * (v10 ^ 1)];
      v14 = &v13[4 * v34[v10 ^ 1]];
      v36 = v10 << 11;
      v15 = &v42[2048 * v10];
      v16 = v15 + 2048;
      v17 = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(v8, r_octreea, v12);
      if ( (v17->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 769, ASSERT_TYPE_ASSERT, "(isLeaf)", (const char *)&queryFormat, "isLeaf") )
        __debugbreak();
      if ( !v8->edgeIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 770, ASSERT_TYPE_ASSERT, "(mapEdgeList.edgeIndices)", (const char *)&queryFormat, "mapEdgeList.edgeIndices") )
        __debugbreak();
      v18 = &v8->edgeIndices[v17->parentNodeIndex];
      v19 = &v18[v17->childNodeSetIndex];
      while ( 1 )
      {
        if ( v13 > v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 779, ASSERT_TYPE_ASSERT, "( srcEdges ) <= ( srcEdgesEnd )", "%s <= %s\n\t%p, %p", "srcEdges", "srcEdgesEnd", v13, v14) )
          __debugbreak();
        if ( v18 > v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 780, ASSERT_TYPE_ASSERT, "( srcNodeEdges ) <= ( srcNodeEdgesEnd )", "%s <= %s\n\t%p, %p", "srcNodeEdges", "srcNodeEdgesEnd", v18, v19) )
          __debugbreak();
        if ( v15 > v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 781, ASSERT_TYPE_ASSERT, "( dstEdges ) <= ( dstEdgesEnd )", "%s <= %s\n\t%p, %p", "dstEdges", "dstEdgesEnd", v15, v16) )
          __debugbreak();
        if ( v13 == v14 )
        {
          if ( v18 == v19 )
            goto LABEL_38;
          if ( v13 == v14 )
            break;
        }
        if ( v18 == v19 )
        {
          v22 = truncate_cast<unsigned __int64,__int64>((v16 - v15) >> 2);
          v23 = truncate_cast<unsigned __int64,__int64>((v14 - v13) >> 2);
          v24 = v13;
          goto LABEL_35;
        }
        v20 = *(_DWORD *)v13;
        v21 = v15 + 4;
        if ( *(_DWORD *)v13 == *v18 )
        {
          v13 += 4;
LABEL_30:
          ++v18;
          goto LABEL_31;
        }
        if ( v20 >= *v18 )
        {
          v20 = *v18;
          goto LABEL_30;
        }
        v13 += 4;
LABEL_31:
        *(_DWORD *)v15 = v20;
        v15 += 4;
        if ( v21 == v16 )
          goto LABEL_38;
      }
      v22 = truncate_cast<unsigned __int64,__int64>((v16 - v15) >> 2);
      v23 = truncate_cast<unsigned __int64,__int64>(v19 - v18);
      v24 = (char *)v18;
LABEL_35:
      if ( v23 > v22 )
        v23 = v22;
      v25 = 4 * v23;
      memcpy_0(v15, v24, 4 * v23);
      v15 += v25;
LABEL_38:
      v26 = (&v15[-v36] - v42) >> 2;
      if ( v26 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", v26, "signed", v26) )
        __debugbreak();
      v34[v10] = v26;
      if ( v10 && v10 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 848, ASSERT_TYPE_ASSERT, "((dstIndex == 0) || (dstIndex == 1))", (const char *)&queryFormat, "(dstIndex == 0) || (dstIndex == 1)") )
        __debugbreak();
      v10 = v37;
      if ( (unsigned __int64)v26 < 0x200 )
      {
        v8 = v39;
        v6 = v33 + 1;
        v33 = v6;
        if ( v6 != v38 )
          continue;
      }
      v7 = v40;
      v9 = 0i64;
      v11 = v41;
      break;
    }
  }
  v27 = 0i64;
  if ( !v10 )
    v27 = 1i64;
  v28 = v34[v27];
  if ( v28 )
  {
    v29 = v34[v27];
    if ( !v10 )
      v9 = 2048i64;
    v30 = (unsigned int *)&v42[v9];
    do
    {
      EdgeId::Set(v7++, *v30++);
      --v29;
    }
    while ( v29 );
  }
  *v11 = v28;
  if ( v28 > 0x200 )
  {
    LODWORD(v32) = 512;
    LODWORD(v31) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 865, ASSERT_TYPE_ASSERT, "( *outCandidateEdgeIdCount ) <= ( (512) )", "%s <= %s\n\t%i, %i", "*outCandidateEdgeIdCount", "MAX_SELECTION_EDGES", v31, v32) )
      __debugbreak();
  }
}

/*
==============
EdgeOctreeQueryFrustum::EnclosedByOctreeNode
==============
*/
bool EdgeOctreeQueryFrustum::EnclosedByOctreeNode(EdgeOctreeQueryFrustum *this, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  float4 r_outMaxExtent; 
  float4 r_outMinExtent; 

  EdgeOctreeQueryShape::Float4CalcNodeExtents(r_octree, r_node, &r_outMinExtent, &r_outMaxExtent);
  _XMM0 = r_outMaxExtent.v;
  __asm { vcmpltps xmm1, xmm0, xmmword ptr [rbx+1B0h] }
  _XMM2.v = (__m128)this->m_minExtent;
  __asm
  {
    vcmpltps xmm0, xmm2, xmmword ptr [rsp+58h+r_outMinExtent.v]
    vmovmskps eax, xmm1
    vmovmskps ecx, xmm0
  }
  return (_ECX & 0xF) == 0 && (_EAX & 0xF) == 0;
}

/*
==============
EdgeOctreeQuerySphere::EnclosedByOctreeNode
==============
*/
bool EdgeOctreeQuerySphere::EnclosedByOctreeNode(EdgeOctreeQuerySphere *this, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  __m128 v4; 
  __m128 v5; 
  float4 r_outMinExtent; 
  float4 r_outMaxExtent; 

  EdgeOctreeQueryShape::Float4CalcNodeExtents(r_octree, r_node, &r_outMinExtent, &r_outMaxExtent);
  v4 = _mm128_sub_ps(this->m_midpoint.v, r_outMinExtent.v);
  v5 = _mm128_sub_ps(r_outMaxExtent.v, this->m_midpoint.v);
  _XMM1 = _mm_shuffle_ps(v5, _mm_shuffle_ps(v5, g_infinity.v, 250), 132);
  __asm
  {
    vcmpltps xmm2, xmm1, xmm2
    vmovmskps eax, xmm2
  }
  _XMM1 = _mm_shuffle_ps(v4, _mm_shuffle_ps(v4, g_infinity.v, 250), 132);
  __asm
  {
    vcmpltps xmm2, xmm1, xmm5
    vmovmskps ecx, xmm2
  }
  return (_ECX & 0xF) == 0 && (_EAX & 0xF) == 0;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const BgHandler *handler, EdgeId *resultIdPool, float *resultFractionPool, float *resultDistancePool, unsigned __int64 resultPoolSize, unsigned __int64 *outResultCount, unsigned int *outHintNodeIndex)
{
  signed __int64 v8; 
  void *v9; 
  unsigned __int64 *v14; 
  unsigned int *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  int v18; 
  const EdgeOctreeQueryFrustum *m_queryShape; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  int v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int64 v29; 
  MapEdgeList *v30; 
  unsigned int staticQueryTypes; 
  float v32; 
  __int128 v34; 
  float v37; 
  __int128 v39; 
  __int128 v43; 
  __int128 v47; 
  int v55; 
  __int128 v57; 
  __int128 v59; 
  __int128 v61; 
  unsigned __int64 v69; 
  PMROctreeMetadata *edgeOctrees; 
  unsigned int m_hint; 
  unsigned int childNodeSetIndex; 
  const PMROctreeNode *v73; 
  unsigned int v74; 
  const PMROctreeNode *v75; 
  unsigned __int8 v76; 
  MapEdgeList *v77; 
  unsigned int dynamicQueryTypes; 
  char v79; 
  const dvar_t *v80; 
  unsigned __int64 v81; 
  float *v82; 
  EdgeId *v83; 
  __int64 v84; 
  unsigned int EdgeIndex; 
  const float4 (*v86)[2]; 
  unsigned __int64 v87; 
  float *v88; 
  __int64 v89; 
  EdgeId *v90; 
  __int64 v91; 
  int v92; 
  unsigned int EntityIndex; 
  unsigned __int64 v94; 
  _DWORD *v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  unsigned __int64 v99; 
  _DWORD *v100; 
  _DWORD *v101; 
  unsigned __int64 v102; 
  unsigned __int64 v103; 
  unsigned __int64 v104; 
  _DWORD *v105; 
  _DWORD *v106; 
  __int64 v107; 
  unsigned __int64 *outLeafNodeIndexCount; 
  __int64 v109; 
  __int64 v110; 
  __int64 v111; 
  char v112[21008]; 
  __int64 v113; 

  v9 = alloca(v8);
  v113 = -2i64;
  _RBP = (unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 21000) = (unsigned __int64)&v107 ^ _security_cookie;
  *(_QWORD *)(_RBP + 64) = resultFractionPool;
  *(_QWORD *)(_RBP + 56) = resultIdPool;
  *(_QWORD *)(_RBP + 40) = handler;
  *(_QWORD *)(_RBP + 48) = resultDistancePool;
  v14 = outResultCount;
  *(_QWORD *)(_RBP + 32) = outResultCount;
  v15 = outHintNodeIndex;
  *(_QWORD *)(_RBP + 24) = outHintNodeIndex;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1036, ASSERT_TYPE_SANITY, "( handler != nullptr )", (const char *)&queryFormat, "handler != nullptr") )
    __debugbreak();
  v16 = 0i64;
  if ( !resultIdPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1037, ASSERT_TYPE_ASSERT, "( resultIdPool ) != ( nullptr )", "%s != %s\n\t%p, %p", "resultIdPool", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !resultFractionPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1038, ASSERT_TYPE_ASSERT, "( resultFractionPool ) != ( nullptr )", "%s != %s\n\t%p, %p", "resultFractionPool", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outResultCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1039, ASSERT_TYPE_ASSERT, "(outResultCount)", (const char *)&queryFormat, "outResultCount") )
    __debugbreak();
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1040, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", "%s\n\tcm.mapEnts is not loaded.  Cannot execute edge octree query.", "cm.mapEnts") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "EdgeOctreeQuery::Execute");
  *outResultCount = 0i64;
  if ( outHintNodeIndex )
    *outHintNodeIndex = 16777208;
  v17 = 0i64;
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0i64;
  v18 = 16777208;
  m_queryShape = this->m_queryShape;
  _XMM1.v = (__m128)m_queryShape->m_minExtent;
  *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = _XMM1.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+64h], xmm1, 1
    vextractps dword ptr [rbp+68h], xmm1, 2
  }
  _XMM2.v = (__m128)m_queryShape->m_maxExtent;
  *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) = _XMM2.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+54h], xmm2, 1
    vextractps dword ptr [rbp+58h], xmm2, 2
  }
  Bounds_SetMinMax3D((Bounds *)(_RBP + 144), (const vec3_t *)(_RBP + 96), (const vec3_t *)(_RBP + 80));
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8) = 0;
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 256), cm.mapEnts->edgeListSpatialTree, (const Bounds *)(_RBP + 144));
  if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 256)) )
  {
    v22 = *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50);
    v23 = *(unsigned int *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68);
    v24 = *(unsigned int *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x64);
    _XMM10 = 0i64;
    v26 = 0;
    do
    {
      if ( !*(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
        __debugbreak();
      v27 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 20i64);
      v28 = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
      if ( v28 == v27 )
      {
        if ( !*(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
          __debugbreak();
        if ( (**(_BYTE **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
          __debugbreak();
        if ( *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) >= **(unsigned __int8 **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
          __debugbreak();
        v29 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) + 4i64 * *(unsigned int *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) + 4);
      }
      else
      {
        if ( v28 >= v27 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
            __debugbreak();
          v28 = *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
        }
        v29 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 8i64) + 4i64 * v28);
      }
      v30 = cm.mapEnts->edgeLists[v29];
      if ( v30 )
      {
        staticQueryTypes = v30->staticQueryTypes;
        if ( _bittest((const int *)&staticQueryTypes, (unsigned __int8)this->m_bucket) )
        {
          v32 = v30->mins.v[0];
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) = 0;
          v34 = *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50);
          *(float *)&v34 = v32;
          _XMM1 = v34;
          __asm
          {
            vinsertps xmm1, xmm1, xmm5, 10h
            vinsertps xmm1, xmm1, xmm9, 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x50) = _XMM1;
          v37 = v30->maxs.v[0];
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7C) = 0;
          v39 = *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70);
          *(float *)&v39 = v37;
          _XMM3 = v39;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsi+18h], 10h
            vinsertps xmm3, xmm3, dword ptr [rsi+1Ch], 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = _XMM3;
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8C) = 0;
          v43 = *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80);
          *(float *)&v43 = *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
          _XMM2 = v43;
          __asm
          {
            vinsertps xmm2, xmm2, xmm15, 10h
            vinsertps xmm2, xmm2, xmm14, 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = _XMM2;
          *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11EC) = 0;
          v47 = *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0);
          *(float *)&v47 = v22;
          _XMM0 = v47;
          __asm
          {
            vinsertps xmm0, xmm0, xmm12, 10h
            vinsertps xmm0, xmm0, xmm11, 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0) = _XMM0;
          _XMM1 = _mm128_sub_ps(_XMM1, _XMM0);
          _mm128_sub_ps(_XMM2, _XMM3);
          __asm { vmaxps  xmm2, xmm1, xmm0 }
          _XMM1 = 0i64;
          __asm
          {
            vcmpltps xmm0, xmm1, xmm2
            vmovmskps ebx, xmm0
          }
          v55 = _EBX & 0xF;
          v57 = *(unsigned int *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
          *(float *)&v57 = *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) - v37;
          _XMM0 = v57;
          v59 = v24;
          *(float *)&v59 = *(float *)&v24 - v30->maxs.v[1];
          _XMM1 = v59;
          v61 = v23;
          *(float *)&v61 = *(float *)&v23 - v30->maxs.v[2];
          _XMM2 = v61;
          __asm
          {
            vmaxss  xmm6, xmm0, xmm3
            vmaxss  xmm3, xmm1, xmm4
            vmaxss  xmm4, xmm2, xmm5
            vcmpless xmm1, xmm10, xmm0
            vblendvps xmm2, xmm3, xmm6, xmm1
          }
          *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&_XMM2;
          __asm
          {
            vcmpless xmm1, xmm10, xmm0
            vblendvps xmm0, xmm4, xmm2, xmm1
          }
          *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = *(float *)&_XMM0;
          if ( *(float *)&_XMM0 > 0.0 != (v55 != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1114, ASSERT_TYPE_ASSERT, "(traditionalBoxDistOut == boxDistOutside)", (const char *)&queryFormat, "traditionalBoxDistOut == boxDistOutside") )
            __debugbreak();
          if ( !v55 )
          {
            v69 = 0i64;
            if ( v30->numEdgeOctrees )
            {
              edgeOctrees = v30->edgeOctrees;
              while ( edgeOctrees->edgeBucket != this->m_bucket )
              {
                ++v69;
                ++edgeOctrees;
                if ( v69 >= v30->numEdgeOctrees )
                  goto LABEL_63;
              }
              if ( edgeOctrees && (edgeOctrees->flags[0] & 1) != 0 )
              {
                ++v26;
                m_hint = this->m_hint;
                *(_DWORD *)_RBP = m_hint;
                if ( (edgeOctrees->rootNode.flags & 2) != 0 || v26 > 1 || (childNodeSetIndex = edgeOctrees->rootNode.childNodeSetIndex, m_hint >> 3 < childNodeSetIndex) || childNodeSetIndex + edgeOctrees->nodeSetCount <= m_hint >> 3 )
                {
                  m_hint = 16777208;
                  *(_DWORD *)_RBP = 16777208;
                }
                v73 = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(v30, edgeOctrees, m_hint);
                EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode(this, v30, edgeOctrees, v73, (unsigned int *)((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64));
                v74 = *(_DWORD *)_RBP;
                if ( v18 == 16777208 && v74 != 16777208 )
                  v18 = *(_DWORD *)_RBP;
                *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0i64;
                v75 = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(v30, edgeOctrees, v74);
                EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectIntersectingLeafNodes(this, v30, edgeOctrees, v75, (unsigned int *)(_RBP + 8704), (unsigned __int64 *)(_RBP + 16));
                *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0i64;
                EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueStaticCandidateEdges(v30, edgeOctrees, (const unsigned int *)(_RBP + 8704), *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10), (EdgeId *)(_RBP + 8 * v17 + 4608), (unsigned __int64 *)(_RBP + 8));
                v17 += *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
                if ( v17 > 0x200 )
                {
                  LODWORD(v111) = 512;
                  LODWORD(v110) = v17;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1207, ASSERT_TYPE_ASSERT, "( staticEdgeCount ) <= ( (512) )", "%s <= %s\n\t%i, %i", "staticEdgeCount", "MAX_SELECTION_EDGES", v110, v111) )
                    __debugbreak();
                }
              }
            }
          }
        }
      }
LABEL_63:
      ;
    }
    while ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 256)) );
    *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v17;
    v14 = *(unsigned __int64 **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    v15 = *(unsigned int **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  }
  if ( v15 )
    *v15 = v18;
  v76 = 0;
  if ( cm.mapEnts->numEdgeLists )
  {
    v77 = *cm.mapEnts->edgeLists;
    if ( v77 )
    {
      dynamicQueryTypes = v77->dynamicQueryTypes;
      v76 = _bittest((const int *)&dynamicQueryTypes, (unsigned __int8)this->m_bucket);
    }
  }
  v79 = this->m_flags & v76;
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = 0i64;
  v80 = DCONST_DVARBOOL_edge_includeDynamicEdges;
  if ( !DCONST_DVARBOOL_edge_includeDynamicEdges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_includeDynamicEdges") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v80);
  if ( v80->current.enabled && v79 )
    EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueDynamicCandidateEdges(this, *(const BgHandler **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28), 512 - v17, (EdgeId *)(_RBP + 8 * v17 + 4608), (unsigned __int64 *)(_RBP + 24));
  v81 = 0i64;
  if ( v17 )
  {
    v82 = (float *)(_RBP + 12808);
    v83 = (EdgeId *)(_RBP + 4608);
    v84 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    do
    {
      if ( EdgeId::GetIsDynamic(v83) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1256, ASSERT_TYPE_ASSERT, "(!edgeId.GetIsDynamic())", "%s\n\tDynamic edge encountered in static edge test.", "!edgeId.GetIsDynamic()") )
        __debugbreak();
      EdgeIndex = EdgeId::GetEdgeIndex(v83);
      v86 = MapEdgeList_LookupSegment(EdgeIndex);
      *(const float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_N3_4028235e38;
      *(const float *)_RBP = FLOAT_3_4028235e38;
      if ( EdgeOctreeQueryFrustum::IntersectsLineSegment((EdgeOctreeQueryFrustum *)this->m_queryShape, v86, (float *)(_RBP + 8), (float *)((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64)) )
      {
        if ( (unsigned int)v81 >= 0x200 )
        {
          LODWORD(v109) = 512;
          LODWORD(outLeafNodeIndexCount) = v81;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1265, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v109) )
            __debugbreak();
        }
        *((EdgeId *)v82 - 1) = *v83;
        *v82 = *(float *)_RBP;
        v82[1] = *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
        ++v81;
        v82 += 4;
      }
      ++v83;
      --v84;
    }
    while ( v84 );
    v16 = 0i64;
    v14 = *(unsigned __int64 **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    v17 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  }
  v87 = v17 + *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  if ( v17 > v87 )
  {
    LODWORD(v111) = v17 + *(_DWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
    LODWORD(v110) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1284, ASSERT_TYPE_ASSERT, "( dynamicEdgeBeginIndex ) <= ( dynamicEdgeEndIndex )", "%s <= %s\n\t%i, %i", "dynamicEdgeBeginIndex", "dynamicEdgeEndIndex", v110, v111) )
      __debugbreak();
  }
  if ( v87 > 0x200 )
  {
    LODWORD(v111) = 512;
    LODWORD(v110) = v87;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1285, ASSERT_TYPE_ASSERT, "( dynamicEdgeEndIndex ) <= ( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "dynamicEdgeEndIndex", "ARRAY_COUNT( selectedEdges )", v110, v111) )
      __debugbreak();
  }
  if ( v17 < v87 )
  {
    v88 = (float *)(_RBP + 16 * v81 + 12808);
    v89 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    v90 = (EdgeId *)(_RBP + 8 * v89 + 4608);
    v91 = v87 - v89;
    v92 = 502048;
    do
    {
      if ( !EdgeId::GetIsDynamic(v90) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1289, ASSERT_TYPE_ASSERT, "(edgeId.GetIsDynamic())", "%s\n\tStatic edge encountered in dynamic edge test.", "edgeId.GetIsDynamic()") )
        __debugbreak();
      EntityIndex = EdgeId::GetEntityIndex(v90);
      if ( v92 != EntityIndex )
      {
        Edge_GetEntityTransform(*(const BgHandler **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28), v90, (vector4 *)(_RBP + 176));
        v92 = EntityIndex;
      }
      Edge_GetDynamicLineSegment((const vector4 *)(_RBP + 176), v90, (float4 (*)[2])(_RBP + 4576), NULL);
      *(const float *)_RBP = FLOAT_N3_4028235e38;
      *(const float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = FLOAT_3_4028235e38;
      if ( EdgeOctreeQueryFrustum::IntersectsLineSegment((EdgeOctreeQueryFrustum *)this->m_queryShape, (const float4 (*)[2])(_RBP + 4576), (float *)((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64), (float *)(_RBP + 8)) )
      {
        if ( (unsigned int)v81 >= 0x200 )
        {
          LODWORD(v109) = 512;
          LODWORD(outLeafNodeIndexCount) = v81;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1306, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v109) )
            __debugbreak();
        }
        *((EdgeId *)v88 - 1) = *v90;
        *v88 = *(float *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
        v88[1] = *(float *)_RBP;
        ++v81;
        v88 += 4;
      }
      ++v90;
      --v91;
    }
    while ( v91 );
    v16 = 0i64;
    v14 = *(unsigned __int64 **)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  }
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E8) = 0i64;
  *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0) = *(_OWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0);
  ntl::sort<EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *,EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge>((EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *)(_RBP + 12800), (EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *)(_RBP + 16 * v81 + 12800), (EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *)(_RBP + 4576), *(ntl::random_access_iterator_tag *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 4));
  v94 = 0i64;
  if ( *v14 < resultPoolSize )
  {
    v95 = (_DWORD *)(_RBP + 12812);
    v96 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    v97 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    do
    {
      if ( v94 >= v81 )
        break;
      *(_QWORD *)(v96 + 8 * *v14) = *(_QWORD *)(v95 - 3);
      *(_DWORD *)(v97 + 4 * (*v14)++) = *v95;
      ++v94;
      v95 += 4;
    }
    while ( *v14 < resultPoolSize );
  }
  v98 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
  if ( v98 )
  {
    v99 = 0i64;
    if ( resultPoolSize < 4 )
    {
LABEL_121:
      if ( v16 < resultPoolSize )
      {
        v105 = (_DWORD *)(_RBP + 16 * v99 + 12808);
        v106 = (_DWORD *)(v98 + 4 * v16);
        do
        {
          if ( v99 >= v81 )
            break;
          *v106 = *v105;
          ++v99;
          ++v106;
          v105 += 4;
          ++v16;
        }
        while ( v16 < resultPoolSize );
      }
    }
    else
    {
      v100 = (_DWORD *)(_RBP + 12808);
      v101 = (_DWORD *)(v98 + 8);
      while ( v99 < v81 )
      {
        *(v101 - 2) = *v100;
        v102 = v99 + 1;
        if ( v102 >= v81 )
          break;
        *(v101 - 1) = v100[4];
        v103 = v102 + 1;
        if ( v103 >= v81 )
          break;
        *v101 = v100[8];
        v104 = v103 + 1;
        if ( v104 >= v81 )
          break;
        v101[1] = v100[12];
        v99 = v104 + 1;
        v100 += 16;
        v16 += 4i64;
        v101 += 4;
        if ( v16 >= resultPoolSize - 3 )
        {
          v98 = *(_QWORD *)(((unsigned __int64)v112 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
          goto LABEL_121;
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const BgHandler *handler, EdgeId *resultIdPool, float *resultFractionPool, float *resultDistancePool, unsigned __int64 resultPoolSize, unsigned __int64 *outResultCount, unsigned int *outHintNodeIndex)
{
  signed __int64 v8; 
  void *v10; 
  unsigned int *v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  int v18; 
  const EdgeOctreeQuerySphere *m_queryShape; 
  __m128 v; 
  __m128 v21; 
  int v24; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  MapEdgeList *v31; 
  unsigned int staticQueryTypes; 
  float v33; 
  __int128 v35; 
  float v38; 
  float v39; 
  __int128 v41; 
  __int128 v45; 
  __int128 v49; 
  int v57; 
  __int128 v59; 
  __int128 v61; 
  __int128 v63; 
  unsigned __int64 v72; 
  PMROctreeMetadata *edgeOctrees; 
  unsigned int m_hint; 
  unsigned int childNodeSetIndex; 
  const PMROctreeNode *v76; 
  unsigned int v77; 
  const PMROctreeNode *v78; 
  unsigned __int8 v79; 
  MapEdgeList *v80; 
  unsigned int dynamicQueryTypes; 
  char v82; 
  const dvar_t *v83; 
  unsigned __int64 v84; 
  float *v85; 
  EdgeId *v86; 
  unsigned __int64 v87; 
  unsigned int EdgeIndex; 
  const float4 (*v89)[2]; 
  unsigned __int64 v90; 
  float *v91; 
  EdgeId *v92; 
  unsigned __int64 v93; 
  __int64 v95; 
  int v96; 
  unsigned int EntityIndex; 
  float v98; 
  float v99; 
  __int64 v100; 
  __m128 v101; 
  __m128 v102; 
  __m128 v108; 
  bool v113; 
  __m128 v115; 
  __m128 v116; 
  double v117; 
  float v118; 
  unsigned __int64 v119; 
  unsigned __int64 *v120; 
  _DWORD *v121; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  unsigned __int64 v125; 
  _DWORD *v126; 
  _DWORD *v127; 
  unsigned __int64 v128; 
  unsigned __int64 v129; 
  unsigned __int64 v130; 
  unsigned int *v131; 
  unsigned int *v132; 
  __int64 v133; 
  unsigned __int64 *outLeafNodeIndexCount; 
  __int64 v135; 
  __int64 v136; 
  __int64 v137; 
  char v138[21008]; 
  __int64 v139; 
  __int128 v140; 

  v10 = alloca(v8);
  v139 = -2i64;
  v140 = _XMM14;
  _RBP = (unsigned int *)((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64);
  *((_QWORD *)_RBP + 2625) = (unsigned __int64)&v133 ^ _security_cookie;
  *((_QWORD *)_RBP + 8) = resultFractionPool;
  *((_QWORD *)_RBP + 7) = resultIdPool;
  *((_QWORD *)_RBP + 3) = handler;
  *((_QWORD *)_RBP + 5) = this;
  *((_QWORD *)_RBP + 4) = resultDistancePool;
  *((_QWORD *)_RBP + 6) = outResultCount;
  v15 = outHintNodeIndex;
  *((_QWORD *)_RBP + 2) = outHintNodeIndex;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1036, ASSERT_TYPE_SANITY, "( handler != nullptr )", (const char *)&queryFormat, "handler != nullptr") )
    __debugbreak();
  v16 = 0i64;
  if ( !resultIdPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1037, ASSERT_TYPE_ASSERT, "( resultIdPool ) != ( nullptr )", "%s != %s\n\t%p, %p", "resultIdPool", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !resultFractionPool && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1038, ASSERT_TYPE_ASSERT, "( resultFractionPool ) != ( nullptr )", "%s != %s\n\t%p, %p", "resultFractionPool", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !outResultCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1039, ASSERT_TYPE_ASSERT, "(outResultCount)", (const char *)&queryFormat, "outResultCount") )
    __debugbreak();
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1040, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", "%s\n\tcm.mapEnts is not loaded.  Cannot execute edge octree query.", "cm.mapEnts") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "EdgeOctreeQuery::Execute");
  *outResultCount = 0i64;
  if ( outHintNodeIndex )
    *outHintNodeIndex = 16777208;
  v17 = 0i64;
  *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0i64;
  v18 = 16777208;
  m_queryShape = this->m_queryShape;
  v = m_queryShape->m_radius.v;
  v21 = m_queryShape->m_midpoint.v;
  _XMM3 = _mm128_sub_ps(v21, v);
  _XMM2 = _mm128_add_ps(v21, v);
  *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = _XMM3.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+74h], xmm3, 1
    vextractps dword ptr [rbp+78h], xmm3, 2
  }
  *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = _XMM2.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+4Ch], xmm2, 1
    vextractps dword ptr [rbp+50h], xmm2, 2
  }
  Bounds_SetMinMax3D((Bounds *)(_RBP + 40), (const vec3_t *)(_RBP + 28), (const vec3_t *)_RBP + 6);
  *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8) = 0;
  *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 64), cm.mapEnts->edgeListSpatialTree, (const Bounds *)(_RBP + 40));
  v24 = 0;
  if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 64)) )
  {
    v25 = *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
    v26 = *(unsigned int *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x78);
    _XMM14 = *(unsigned int *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x74);
    v27 = *(unsigned int *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70);
    do
    {
      if ( !*(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
        __debugbreak();
      v28 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 20i64);
      v29 = *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
      if ( v29 == v28 )
      {
        if ( !*(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
          __debugbreak();
        if ( (**(_BYTE **)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
          __debugbreak();
        if ( *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) >= **(unsigned __int8 **)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
          __debugbreak();
        v30 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) + 4i64 * *(unsigned int *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) + 4);
      }
      else
      {
        if ( v29 >= v28 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
            __debugbreak();
          v29 = *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
        }
        v30 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 8i64) + 4i64 * v29);
      }
      v31 = cm.mapEnts->edgeLists[v30];
      if ( v31 )
      {
        staticQueryTypes = v31->staticQueryTypes;
        if ( _bittest((const int *)&staticQueryTypes, (unsigned __int8)this->m_bucket) )
        {
          v33 = v31->mins.v[0];
          *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7C) = 0;
          v35 = *(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70);
          *(float *)&v35 = v33;
          _XMM1 = v35;
          __asm
          {
            vinsertps xmm1, xmm1, xmm5, 10h
            vinsertps xmm1, xmm1, xmm9, 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = _XMM1;
          v38 = v31->maxs.v[0];
          v39 = v31->maxs.v[2];
          *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11EC) = 0;
          v41 = *(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0);
          *(float *)&v41 = v38;
          _XMM3 = v41;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsi+18h], 10h
            vinsertps xmm3, xmm3, xmm8, 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0) = _XMM3;
          *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x9C) = 0;
          v45 = *(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90);
          *(float *)&v45 = *(float *)&v27;
          _XMM2 = v45;
          __asm
          {
            vinsertps xmm2, xmm2, xmm14, 10h
            vinsertps xmm2, xmm2, xmm13, 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90) = _XMM2;
          *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6C) = 0;
          v49 = *(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
          *(float *)&v49 = v25;
          _XMM0 = v49;
          __asm
          {
            vinsertps xmm0, xmm0, xmm11, 10h
            vinsertps xmm0, xmm0, xmm10, 20h ; ' '
          }
          *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = _XMM0;
          _XMM1 = _mm128_sub_ps(_XMM1, _XMM0);
          _mm128_sub_ps(_XMM2, _XMM3);
          __asm { vmaxps  xmm2, xmm1, xmm0 }
          _XMM1 = 0i64;
          __asm
          {
            vcmpltps xmm0, xmm1, xmm2
            vmovmskps ebx, xmm0
          }
          v57 = _EBX & 0xF;
          v59 = v27;
          *(float *)&v59 = *(float *)&v27 - v38;
          _XMM0 = v59;
          v61 = _XMM14;
          *(float *)&v61 = *(float *)&_XMM14 - v31->maxs.v[1];
          _XMM1 = v61;
          v63 = v26;
          *(float *)&v63 = *(float *)&v26 - v39;
          _XMM2 = v63;
          __asm
          {
            vmaxss  xmm6, xmm0, xmm3
            vmaxss  xmm3, xmm1, xmm4
            vmaxss  xmm4, xmm2, xmm5
          }
          _XMM5 = 0i64;
          __asm
          {
            vcmpless xmm1, xmm5, xmm0
            vblendvps xmm2, xmm3, xmm6, xmm1
          }
          *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = *(float *)&_XMM2;
          __asm
          {
            vcmpless xmm1, xmm5, xmm0
            vblendvps xmm0, xmm4, xmm2, xmm1
          }
          *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = *(float *)&_XMM0;
          if ( *(float *)&_XMM0 > 0.0 != (v57 != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1114, ASSERT_TYPE_ASSERT, "(traditionalBoxDistOut == boxDistOutside)", (const char *)&queryFormat, "traditionalBoxDistOut == boxDistOutside") )
            __debugbreak();
          if ( !v57 )
          {
            v72 = 0i64;
            if ( v31->numEdgeOctrees )
            {
              edgeOctrees = v31->edgeOctrees;
              while ( edgeOctrees->edgeBucket != this->m_bucket )
              {
                ++v72;
                ++edgeOctrees;
                if ( v72 >= v31->numEdgeOctrees )
                  goto LABEL_63;
              }
              if ( edgeOctrees && (edgeOctrees->flags[0] & 1) != 0 )
              {
                ++v24;
                m_hint = this->m_hint;
                *_RBP = m_hint;
                if ( (edgeOctrees->rootNode.flags & 2) != 0 || v24 > 1 || (childNodeSetIndex = edgeOctrees->rootNode.childNodeSetIndex, m_hint >> 3 < childNodeSetIndex) || childNodeSetIndex + edgeOctrees->nodeSetCount <= m_hint >> 3 )
                {
                  m_hint = 16777208;
                  *_RBP = 16777208;
                }
                v76 = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(v31, edgeOctrees, m_hint);
                EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode(this, v31, edgeOctrees, v76, (unsigned int *)((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64));
                v77 = *_RBP;
                if ( v18 == 16777208 && v77 != 16777208 )
                  v18 = *_RBP;
                *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0i64;
                v78 = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(v31, edgeOctrees, v77);
                EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes(this, v31, edgeOctrees, v78, _RBP + 2176, (unsigned __int64 *)_RBP + 1);
                *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = 0i64;
                EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueStaticCandidateEdges(v31, edgeOctrees, _RBP + 2176, *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 8), (EdgeId *)&_RBP[2 * v17 + 1152], (unsigned __int64 *)_RBP + 9);
                v17 += *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
                if ( v17 > 0x200 )
                {
                  LODWORD(v137) = 512;
                  LODWORD(v136) = v17;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1207, ASSERT_TYPE_ASSERT, "( staticEdgeCount ) <= ( (512) )", "%s <= %s\n\t%i, %i", "staticEdgeCount", "MAX_SELECTION_EDGES", v136, v137) )
                    __debugbreak();
                }
              }
            }
          }
        }
      }
LABEL_63:
      ;
    }
    while ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 64)) );
    *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v17;
    v15 = *(unsigned int **)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  }
  if ( v15 )
    *v15 = v18;
  v79 = 0;
  if ( cm.mapEnts->numEdgeLists )
  {
    v80 = *cm.mapEnts->edgeLists;
    if ( v80 )
    {
      dynamicQueryTypes = v80->dynamicQueryTypes;
      v79 = _bittest((const int *)&dynamicQueryTypes, (unsigned __int8)this->m_bucket);
    }
  }
  v82 = this->m_flags & v79;
  *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0i64;
  v83 = DCONST_DVARBOOL_edge_includeDynamicEdges;
  if ( !DCONST_DVARBOOL_edge_includeDynamicEdges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_includeDynamicEdges") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v83);
  if ( v83->current.enabled && v82 )
    EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueDynamicCandidateEdges(this, *(const BgHandler **)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18), 512 - v17, (EdgeId *)&_RBP[2 * v17 + 1152], (unsigned __int64 *)_RBP + 2);
  v84 = 0i64;
  if ( v17 )
  {
    v85 = (float *)(_RBP + 3202);
    v86 = (EdgeId *)(_RBP + 1152);
    v87 = v17;
    do
    {
      if ( EdgeId::GetIsDynamic(v86) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1256, ASSERT_TYPE_ASSERT, "(!edgeId.GetIsDynamic())", "%s\n\tDynamic edge encountered in static edge test.", "!edgeId.GetIsDynamic()") )
        __debugbreak();
      EdgeIndex = EdgeId::GetEdgeIndex(v86);
      v89 = MapEdgeList_LookupSegment(EdgeIndex);
      *(const float *)_RBP = FLOAT_N3_4028235e38;
      *(const float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = FLOAT_3_4028235e38;
      if ( EdgeOctreeQuerySphere::IntersectsLineSegment((EdgeOctreeQuerySphere *)this->m_queryShape, v89, (float *)((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64), (float *)_RBP + 18) )
      {
        if ( (unsigned int)v84 >= 0x200 )
        {
          LODWORD(v135) = 512;
          LODWORD(outLeafNodeIndexCount) = v84;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1265, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v135) )
            __debugbreak();
        }
        *((EdgeId *)v85 - 1) = *v86;
        *v85 = *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
        v85[1] = *(float *)_RBP;
        ++v84;
        v85 += 4;
      }
      ++v86;
      --v87;
    }
    while ( v87 );
    v16 = 0i64;
    v17 = *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  }
  v90 = v17 + *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  if ( v17 > v90 )
  {
    LODWORD(v137) = v17 + *(_DWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    LODWORD(v136) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1284, ASSERT_TYPE_ASSERT, "( dynamicEdgeBeginIndex ) <= ( dynamicEdgeEndIndex )", "%s <= %s\n\t%i, %i", "dynamicEdgeBeginIndex", "dynamicEdgeEndIndex", v136, v137) )
      __debugbreak();
  }
  if ( v90 > 0x200 )
  {
    LODWORD(v137) = 512;
    LODWORD(v136) = v90;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1285, ASSERT_TYPE_ASSERT, "( dynamicEdgeEndIndex ) <= ( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "dynamicEdgeEndIndex", "ARRAY_COUNT( selectedEdges )", v136, v137) )
      __debugbreak();
  }
  if ( v17 < v90 )
  {
    v91 = (float *)&_RBP[4 * v84 + 3202];
    v92 = (EdgeId *)&_RBP[2 * v17 + 1152];
    v93 = v90 - v17;
    __asm { vxorpd  xmm14, xmm14, xmm14 }
    v95 = *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
    v96 = 502048;
    while ( 1 )
    {
      if ( !EdgeId::GetIsDynamic(v92) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1289, ASSERT_TYPE_ASSERT, "(edgeId.GetIsDynamic())", "%s\n\tStatic edge encountered in dynamic edge test.", "edgeId.GetIsDynamic()") )
        __debugbreak();
      EntityIndex = EdgeId::GetEntityIndex(v92);
      if ( v96 != EntityIndex )
      {
        Edge_GetEntityTransform(*(const BgHandler **)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18), v92, (vector4 *)_RBP + 3);
        v96 = EntityIndex;
      }
      Edge_GetDynamicLineSegment((const vector4 *)_RBP + 3, v92, (float4 (*)[2])((float4 *)_RBP + 143), NULL);
      v98 = FLOAT_N3_4028235e38;
      v99 = FLOAT_3_4028235e38;
      v100 = *(_QWORD *)(v95 + 8);
      v101 = *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0);
      v102 = _mm128_sub_ps(*(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11F0), v101);
      _XMM1 = _mm128_mul_ps(v102, v102);
      __asm
      {
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm1, xmm2, xmm2
      }
      _XMM7 = _mm_sqrt_ps(_XMM1);
      *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = _XMM7.m128_f32[0];
      if ( _XMM7.m128_f32[0] <= 0.000001 )
        break;
      __asm { vrcpps  xmm0, xmm7 }
      *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = _mm128_mul_ps(v102, _mm128_sub_ps(_mm128_add_ps(_XMM0, _XMM0), _mm128_mul_ps(_XMM7, _mm128_mul_ps(_XMM0, _XMM0))));
      *(float *)_RBP = 0;
      EdgeOctreeQueryCustomClip::TrimLineSegment((EdgeOctreeQueryCustomClip *)v100, (const float4 *)_RBP + 286, (const float4 *)_RBP + 6, (float *)((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64), (float *)_RBP + 18);
      v115 = (__m128)*(unsigned int *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
      v116 = (__m128)*_RBP;
      if ( v115.m128_f32[0] >= v116.m128_f32[0] )
      {
        *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x70) = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v116, v116, 0), *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60)), *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0));
        *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x80) = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v115, v115, 0), *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60)), *(__m128 *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0));
        v117 = Float4PointLineSegmentDistSq((const float4 *)_RBP + 7, (const float4 *)_RBP + 8, (const float4 *)(v100 + 112), (float4 *)_RBP + 9);
        v113 = *(float *)&v117 <= *(float *)(v100 + 144);
        if ( v113 )
        {
          v118 = (float)((float)((float)(1.0 - COERCE_FLOAT(*(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90))) * *(float *)_RBP) + (float)(COERCE_FLOAT(*(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x90)) * *(float *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48))) / _XMM7.m128_f32[0];
          v98 = v118;
          if ( (v118 < 0.0 || v118 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 381, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *outClosestFraction ) && ( *outClosestFraction ) <= ( 1.0f )", "*outClosestFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v118, *(double *)&_XMM14, DOUBLE_1_0) )
            __debugbreak();
          v99 = fsqrt(*(float *)&v117);
        }
        goto LABEL_110;
      }
LABEL_115:
      ++v92;
      if ( !--v93 )
      {
        v16 = 0i64;
        goto LABEL_117;
      }
    }
    v108 = _mm128_sub_ps(*(__m128 *)(v100 + 112), v101);
    _XMM2 = _mm128_mul_ps(v108, v108);
    __asm
    {
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
    }
    v99 = _mm_sqrt_ps(_XMM2).m128_f32[0];
    v98 = 0.0;
    v113 = COERCE_FLOAT(*(_OWORD *)(v100 + 128)) >= v99;
LABEL_110:
    if ( v113 )
    {
      if ( (unsigned int)v84 >= 0x200 )
      {
        LODWORD(v135) = 512;
        LODWORD(outLeafNodeIndexCount) = v84;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1306, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v135) )
          __debugbreak();
      }
      *((EdgeId *)v91 - 1) = *v92;
      *v91 = v99;
      v91[1] = v98;
      ++v84;
      v91 += 4;
    }
    goto LABEL_115;
  }
LABEL_117:
  *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
  *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = 0i64;
  *(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = *(_OWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60);
  ntl::sort<EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *,EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge>((EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *)_RBP + 800, (EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *)&_RBP[4 * v84 + 3200], (EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *)_RBP + 6, *(ntl::random_access_iterator_tag *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 4));
  v119 = 0i64;
  v120 = *(unsigned __int64 **)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
  if ( *v120 < resultPoolSize )
  {
    v121 = _RBP + 3203;
    v122 = *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    v123 = *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    do
    {
      if ( v119 >= v84 )
        break;
      *(_QWORD *)(v122 + 8 * *v120) = *(_QWORD *)(v121 - 3);
      *(_DWORD *)(v123 + 4 * (*v120)++) = *v121;
      ++v119;
      v121 += 4;
    }
    while ( *v120 < resultPoolSize );
  }
  v124 = *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  if ( v124 )
  {
    v125 = 0i64;
    if ( resultPoolSize < 4 )
    {
LABEL_130:
      if ( v16 < resultPoolSize )
      {
        v131 = &_RBP[4 * v125 + 3202];
        v132 = (unsigned int *)(v124 + 4 * v16);
        do
        {
          if ( v125 >= v84 )
            break;
          *v132 = *v131;
          ++v125;
          ++v132;
          v131 += 4;
          ++v16;
        }
        while ( v16 < resultPoolSize );
      }
    }
    else
    {
      v126 = _RBP + 3202;
      v127 = (_DWORD *)(v124 + 8);
      while ( v125 < v84 )
      {
        *(v127 - 2) = *v126;
        v128 = v125 + 1;
        if ( v128 >= v84 )
          break;
        *(v127 - 1) = v126[4];
        v129 = v128 + 1;
        if ( v129 >= v84 )
          break;
        *v127 = v126[8];
        v130 = v129 + 1;
        if ( v130 >= v84 )
          break;
        v127[1] = v126[12];
        v125 = v130 + 1;
        v126 += 16;
        v16 += 4i64;
        v127 += 4;
        if ( v16 >= resultPoolSize - 3 )
        {
          v124 = *(_QWORD *)(((unsigned __int64)v138 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
          goto LABEL_130;
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode
==============
*/
char EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  PMROctreeFlags flags; 
  char v10; 
  char v11; 
  PMROctreeNodeSet *v12; 
  unsigned __int64 v13; 
  unsigned int v14; 

  while ( 1 )
  {
    while ( 1 )
    {
      flags = r_node->flags;
      v10 = flags & 2;
      v11 = flags & 4;
      if ( v11 || !v10 )
        break;
      r_node = &r_octree->rootNode;
    }
    if ( EdgeOctreeQueryFrustum::EnclosedByOctreeNode((EdgeOctreeQueryFrustum *)this->m_queryShape, r_octree, r_node) )
      break;
    if ( v11 )
    {
      *outNodeIndex = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeToNodeIndex(mapEdgeList, r_octree, r_node);
      return 1;
    }
    if ( (r_node->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 647, ASSERT_TYPE_ASSERT, "(static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0)", "%s\n\tLeaf nodes do not contain information required for tree parent traversal.", "static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0") )
      __debugbreak();
    r_node = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(mapEdgeList, r_octree, r_node->parentNodeIndex);
  }
  if ( v11 )
  {
    if ( v10 )
    {
      *outNodeIndex = 16777208;
      return 1;
    }
  }
  else if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 622, ASSERT_TYPE_ASSERT, "(!isLeaf)", "%s\n\tLeaf nodes do not contain information required for tree child traversal.", "!isLeaf") )
  {
    __debugbreak();
  }
  v12 = &mapEdgeList->edgeOctreeNodeSets[(unsigned __int64)r_node->childNodeSetIndex];
  v13 = 0i64;
  while ( !EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode_ToLeaf(this, mapEdgeList, r_octree, v12->node, outNodeIndex) )
  {
    ++v13;
    v12 = (PMROctreeNodeSet *)((char *)v12 + 16);
    if ( v13 >= 8 )
    {
      if ( (r_node->flags & 4) != 0 )
        v14 = 16777208;
      else
        v14 = ((__int64)((__int64)r_node - ((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64)) >> 4) | (8 * ((__int64)(((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)mapEdgeList->edgeOctreeNodeSets) >> 7));
      if ( EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(mapEdgeList, r_octree, v14) != r_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1435, ASSERT_TYPE_ASSERT, "(&r_validateNode == &r_node)", "%s\n\tError calculating nodeIndex from node.", "&r_validateNode == &r_node") )
        __debugbreak();
      *outNodeIndex = v14;
      return 1;
    }
  }
  return 1;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode
==============
*/
char EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  PMROctreeFlags flags; 
  char v10; 
  char v11; 
  PMROctreeNodeSet *v12; 
  unsigned __int64 v13; 
  unsigned int v14; 

  while ( 1 )
  {
    while ( 1 )
    {
      flags = r_node->flags;
      v10 = flags & 2;
      v11 = flags & 4;
      if ( v11 || !v10 )
        break;
      r_node = &r_octree->rootNode;
    }
    if ( EdgeOctreeQuerySphere::EnclosedByOctreeNode((EdgeOctreeQuerySphere *)this->m_queryShape, r_octree, r_node) )
      break;
    if ( v11 )
    {
      *outNodeIndex = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeToNodeIndex(mapEdgeList, r_octree, r_node);
      return 1;
    }
    if ( (r_node->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 647, ASSERT_TYPE_ASSERT, "(static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0)", "%s\n\tLeaf nodes do not contain information required for tree parent traversal.", "static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0") )
      __debugbreak();
    r_node = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(mapEdgeList, r_octree, r_node->parentNodeIndex);
  }
  if ( v11 )
  {
    if ( v10 )
    {
      *outNodeIndex = 16777208;
      return 1;
    }
  }
  else if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 622, ASSERT_TYPE_ASSERT, "(!isLeaf)", "%s\n\tLeaf nodes do not contain information required for tree child traversal.", "!isLeaf") )
  {
    __debugbreak();
  }
  v12 = &mapEdgeList->edgeOctreeNodeSets[(unsigned __int64)r_node->childNodeSetIndex];
  v13 = 0i64;
  while ( !EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode_ToLeaf(this, mapEdgeList, r_octree, v12->node, outNodeIndex) )
  {
    ++v13;
    v12 = (PMROctreeNodeSet *)((char *)v12 + 16);
    if ( v13 >= 8 )
    {
      if ( (r_node->flags & 4) != 0 )
        v14 = 16777208;
      else
        v14 = ((__int64)((__int64)r_node - ((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64)) >> 4) | (8 * ((__int64)(((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)mapEdgeList->edgeOctreeNodeSets) >> 7));
      if ( EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(mapEdgeList, r_octree, v14) != r_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1435, ASSERT_TYPE_ASSERT, "(&r_validateNode == &r_node)", "%s\n\tError calculating nodeIndex from node.", "&r_validateNode == &r_node") )
        __debugbreak();
      *outNodeIndex = v14;
      return 1;
    }
  }
  return 1;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode_ToLeaf
==============
*/
char EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode_ToLeaf(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  PMROctreeNodeSet *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 

  if ( (r_node->flags & 2) != 0 || !EdgeOctreeQueryFrustum::EnclosedByOctreeNode((EdgeOctreeQueryFrustum *)this->m_queryShape, r_octree, r_node) )
    return 0;
  if ( (r_node->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 672, ASSERT_TYPE_ASSERT, "(static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0)", "%s\n\tLeaf nodes do not contain information required for tree child traversal.", "static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0") )
    __debugbreak();
  v9 = &mapEdgeList->edgeOctreeNodeSets[(unsigned __int64)r_node->childNodeSetIndex];
  v10 = 0i64;
  while ( !EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode_ToLeaf(this, mapEdgeList, r_octree, v9->node, outNodeIndex) )
  {
    ++v10;
    v9 = (PMROctreeNodeSet *)((char *)v9 + 16);
    if ( v10 >= 8 )
    {
      if ( (r_node->flags & 4) != 0 )
        v11 = 16777208;
      else
        v11 = ((__int64)((__int64)r_node - ((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64)) >> 4) | (8 * ((__int64)(((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)mapEdgeList->edgeOctreeNodeSets) >> 7));
      if ( EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(mapEdgeList, r_octree, v11) != r_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1435, ASSERT_TYPE_ASSERT, "(&r_validateNode == &r_node)", "%s\n\tError calculating nodeIndex from node.", "&r_validateNode == &r_node") )
        __debugbreak();
      *outNodeIndex = v11;
      return 1;
    }
  }
  return 1;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode_ToLeaf
==============
*/
char EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode_ToLeaf(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *outNodeIndex)
{
  PMROctreeNodeSet *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 

  if ( (r_node->flags & 2) != 0 || !EdgeOctreeQuerySphere::EnclosedByOctreeNode((EdgeOctreeQuerySphere *)this->m_queryShape, r_octree, r_node) )
    return 0;
  if ( (r_node->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 672, ASSERT_TYPE_ASSERT, "(static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0)", "%s\n\tLeaf nodes do not contain information required for tree child traversal.", "static_cast<int>(r_node.flags & PMROctreeFlags::LEAF_NODE) == 0") )
    __debugbreak();
  v9 = &mapEdgeList->edgeOctreeNodeSets[(unsigned __int64)r_node->childNodeSetIndex];
  v10 = 0i64;
  while ( !EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode_ToLeaf(this, mapEdgeList, r_octree, v9->node, outNodeIndex) )
  {
    ++v10;
    v9 = (PMROctreeNodeSet *)((char *)v9 + 16);
    if ( v10 >= 8 )
    {
      if ( (r_node->flags & 4) != 0 )
        v11 = 16777208;
      else
        v11 = ((__int64)((__int64)r_node - ((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64)) >> 4) | (8 * ((__int64)(((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)mapEdgeList->edgeOctreeNodeSets) >> 7));
      if ( EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(mapEdgeList, r_octree, v11) != r_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1435, ASSERT_TYPE_ASSERT, "(&r_validateNode == &r_node)", "%s\n\tError calculating nodeIndex from node.", "&r_validateNode == &r_node") )
        __debugbreak();
      *outNodeIndex = v11;
      return 1;
    }
  }
  return 1;
}

/*
==============
EdgeOctreeQueryFrustum::IntersectsLineSegment
==============
*/
char EdgeOctreeQueryFrustum::IntersectsLineSegment(EdgeOctreeQueryFrustum *this, const float4 (*r_lineSegment)[2], float *outClosestFraction, float *outDist)
{
  __int128 v4; 
  __m128 v10; 
  __m128 v17; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  float v26; 
  const float4 *v28; 
  const float4 *v29; 
  const float4 *v30; 
  double v31; 
  float v32; 
  float v39; 
  __m128 v41; 
  const float4 *v42; 
  const float4 *v43; 
  const float4 *v44; 
  float v45; 
  bool v46; 
  float r_inOutTMin; 
  float r_inOutTMax; 
  float4 point_8; 
  float4 outSegClosestFraction_8; 
  float4 r_lineSegmentDir_8; 
  float4 r_outS; 
  float4 r_outT; 
  float4 r_linePointA; 
  __m128 v55; 
  __int128 v56; 
  _QWORD v57[3]; 

  if ( !outClosestFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 442, ASSERT_TYPE_ASSERT, "(outClosestFraction)", (const char *)&queryFormat, "outClosestFraction") )
    __debugbreak();
  if ( !outDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 443, ASSERT_TYPE_ASSERT, "(outDist)", (const char *)&queryFormat, "outDist") )
    __debugbreak();
  v10 = _mm128_sub_ps((*r_lineSegment)[1].v, (*r_lineSegment)[0].v);
  _XMM1 = _mm128_mul_ps(v10, v10);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM3 = _mm_sqrt_ps(_XMM0);
  __asm { vrcpps  xmm1, xmm3 }
  v17 = _mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM3));
  r_lineSegmentDir_8.v = _mm128_mul_ps(v10, v17);
  r_inOutTMin = 0.0;
  r_inOutTMax = _XMM3.m128_f32[0];
  EdgeOctreeQueryShape::TrimLineSegmentByPlanes((const float4 *)r_lineSegment, &r_lineSegmentDir_8, this->m_shape.m_planes, 6ui64, &r_inOutTMin, &r_inOutTMax);
  EdgeOctreeQueryCustomClip::TrimLineSegment(&this->m_customClip, (const float4 *)r_lineSegment, &r_lineSegmentDir_8, &r_inOutTMin, &r_inOutTMax);
  if ( r_inOutTMin >= r_inOutTMax )
    return 0;
  v19 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)LODWORD(r_inOutTMin), (__m128)LODWORD(r_inOutTMin), 0), r_lineSegmentDir_8.v), (*r_lineSegment)[0].v);
  *(_OWORD *)&v57[1] = v4;
  v20 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)LODWORD(r_inOutTMax), (__m128)LODWORD(r_inOutTMax), 0), r_lineSegmentDir_8.v), (*r_lineSegment)[0].v);
  v21 = _mm128_sub_ps(v20, v19);
  v55 = v20;
  _XMM1 = _mm128_mul_ps(v21, v21);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm0, xmm0, xmm0
  }
  v26 = _mm_sqrt_ps(_XMM0).m128_f32[0];
  v56 = _XMM8;
  r_linePointA.v = v19;
  __asm { vxorpd  xmm8, xmm8, xmm8 }
  if ( (v26 < 0.0 || v26 > 3.4028235e38) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 479, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( Float4ExtractX( lineSegmentTrimmedLength ) ) && ( Float4ExtractX( lineSegmentTrimmedLength ) ) <= ( 3.402823466e+38F )", "Float4ExtractX( lineSegmentTrimmedLength ) not in [0.0f, FLT_MAX]\n\t%g not in [%g, %g]", v26, *(double *)&_XMM8, DOUBLE_3_402823466385289e38) )
    __debugbreak();
  EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines(&r_linePointA, &r_lineSegmentDir_8, &this->m_shape.m_nearOrigin, &this->m_shape.m_forward, &r_outS, &r_outT);
  Float4Clamp(v29, v28, v30, &r_outS);
  point_8.v = _mm128_add_ps(_mm128_mul_ps(r_outS.v, r_lineSegmentDir_8.v), r_linePointA.v);
  v31 = Float4PointLineSegmentDistSq(&this->m_shape.m_nearOrigin, &this->m_shape.m_farOrigin, &point_8, &outSegClosestFraction_8);
  v32 = (float)(_mm128_mul_ps(this->m_shape.m_nearToFarDist.v, outSegClosestFraction_8.v).m128_f32[0] * this->m_invCenterBias) + (float)(fsqrt(*(float *)&v31) * this->m_centerBias);
  *outDist = v32;
  _XMM1 = _mm128_mul_ps(this->m_userAxis.v, r_lineSegmentDir_8.v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
  }
  _XMM0 = g_negativeZero.v;
  __asm { vandnps xmm2, xmm0, xmm1 }
  v39 = (float)((float)(*(float *)&_XMM2 * this->m_invAxisBias) + (float)(1.0 - *(float *)&_XMM2)) * v32;
  __asm { vbroadcastss xmm4, [rsp+150h+r_inOutTMin] }
  v41 = _mm128_mul_ps(v17, _mm128_add_ps(_XMM4, r_outS.v));
  *outDist = v39;
  point_8.v = v41;
  Float4Clamp(v43, v42, v44, &point_8);
  v45 = point_8.v.m128_f32[0];
  v46 = point_8.v.m128_f32[0] < 0.0;
  *outClosestFraction = point_8.v.m128_f32[0];
  if ( (v46 || v45 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 516, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *outClosestFraction ) && ( *outClosestFraction ) <= ( 1.0f )", "*outClosestFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v45, *(double *)&_XMM8, DOUBLE_1_0) )
    __debugbreak();
  return 1;
}

/*
==============
EdgeOctreeQuerySphere::IntersectsLineSegment
==============
*/
bool EdgeOctreeQuerySphere::IntersectsLineSegment(EdgeOctreeQuerySphere *this, const float4 (*r_lineSegment)[2], float *outClosestFraction, float *outDist)
{
  __m128 v8; 
  __m128 v14; 
  double v21; 
  bool v22; 
  __int128 v24; 
  float r_inOutTMin; 
  unsigned int r_inOutTMax[3]; 
  float4 outSegClosestFraction; 
  float4 lineSegPointA; 
  float4 lineSegPointB; 
  float4 r_lineSegmentDir; 

  if ( !outClosestFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 335, ASSERT_TYPE_ASSERT, "(outClosestFraction)", (const char *)&queryFormat, "outClosestFraction") )
    __debugbreak();
  if ( !outDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 336, ASSERT_TYPE_ASSERT, "(outDist)", (const char *)&queryFormat, "outDist") )
    __debugbreak();
  v8 = _mm128_sub_ps((*r_lineSegment)[1].v, (*r_lineSegment)[0].v);
  _XMM1 = _mm128_mul_ps(v8, v8);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM6 = _mm_sqrt_ps(_XMM0);
  r_inOutTMax[0] = _XMM6.m128_u32[0];
  if ( _XMM6.m128_f32[0] > 0.000001 )
  {
    __asm { vrcpps  xmm1, xmm6 }
    r_lineSegmentDir.v = _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM6)), v8);
    r_inOutTMin = 0.0;
    EdgeOctreeQueryCustomClip::TrimLineSegment(&this->m_customClip, (const float4 *)r_lineSegment, &r_lineSegmentDir, &r_inOutTMin, (float *)r_inOutTMax);
    if ( *(float *)r_inOutTMax >= r_inOutTMin )
    {
      lineSegPointA.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)LODWORD(r_inOutTMin), (__m128)LODWORD(r_inOutTMin), 0), r_lineSegmentDir.v), (*r_lineSegment)[0].v);
      lineSegPointB.v = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)r_inOutTMax[0], (__m128)r_inOutTMax[0], 0), r_lineSegmentDir.v), (*r_lineSegment)[0].v);
      v21 = Float4PointLineSegmentDistSq(&lineSegPointA, &lineSegPointB, &this->m_midpoint, &outSegClosestFraction);
      v22 = *(float *)&v21 <= this->m_radiusSq;
      if ( *(float *)&v21 <= this->m_radiusSq )
      {
        v24 = LODWORD(FLOAT_1_0);
        *(float *)&v24 = (float)((float)((float)(1.0 - outSegClosestFraction.v.m128_f32[0]) * r_inOutTMin) + (float)(outSegClosestFraction.v.m128_f32[0] * *(float *)r_inOutTMax)) / _XMM6.m128_f32[0];
        _XMM1 = v24;
        *outClosestFraction = *(float *)&v24;
        if ( *(float *)&v24 < 0.0 || *(float *)&v24 > 1.0 )
        {
          __asm { vxorpd  xmm1, xmm1, xmm1 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 381, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *outClosestFraction ) && ( *outClosestFraction ) <= ( 1.0f )", "*outClosestFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v24, *(double *)&_XMM1, DOUBLE_1_0) )
            __debugbreak();
        }
        *outDist = fsqrt(*(float *)&v21);
      }
      return v22;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v14 = _mm128_sub_ps(this->m_midpoint.v, (*r_lineSegment)[0].v);
    _XMM2 = _mm128_mul_ps(v14, v14);
    __asm
    {
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    _XMM2.m128_f32[0] = _mm_sqrt_ps(_XMM0).m128_f32[0];
    *outClosestFraction = 0.0;
    *outDist = _XMM2.m128_f32[0];
    return COERCE_FLOAT(*(_OWORD *)&this->m_radius) >= _XMM2.m128_f32[0];
  }
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode
==============
*/
PMROctreeNode *EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, unsigned int nodeIndex)
{
  unsigned int childNodeSetIndex; 
  __int64 v7; 
  __int64 v9; 

  if ( nodeIndex == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1392, ASSERT_TYPE_ASSERT, "(nodeIndex != (0xffffffffui32))", (const char *)&queryFormat, "nodeIndex != PMR_OCTREE_NODE_INDEX_INVALID") )
      __debugbreak();
  }
  else if ( nodeIndex == 16777208 )
  {
    return &r_octree->rootNode;
  }
  childNodeSetIndex = r_octree->rootNode.childNodeSetIndex;
  v7 = nodeIndex >> 3;
  if ( childNodeSetIndex > (unsigned int)v7 || (unsigned int)v7 > childNodeSetIndex + r_octree->nodeSetCount )
  {
    LODWORD(v9) = nodeIndex >> 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1400, ASSERT_TYPE_ASSERT, "( r_octree.rootNode.childNodeSetIndex ) <= ( nodeSetIndex ) && ( nodeSetIndex ) <= ( r_octree.rootNode.childNodeSetIndex + r_octree.nodeSetCount )", "nodeSetIndex not in [r_octree.rootNode.childNodeSetIndex, r_octree.rootNode.childNodeSetIndex + r_octree.nodeSetCount]\n\t%i not in [%i, %i]", v9, r_octree->rootNode.childNodeSetIndex, childNodeSetIndex + r_octree->nodeSetCount) )
      __debugbreak();
  }
  return (PMROctreeNode *)&mapEdgeList->edgeOctreeNodeSets[v7] + (nodeIndex & 7);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode
==============
*/
PMROctreeNode *EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, unsigned int nodeIndex)
{
  unsigned int childNodeSetIndex; 
  __int64 v7; 
  __int64 v9; 

  if ( nodeIndex == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1392, ASSERT_TYPE_ASSERT, "(nodeIndex != (0xffffffffui32))", (const char *)&queryFormat, "nodeIndex != PMR_OCTREE_NODE_INDEX_INVALID") )
      __debugbreak();
  }
  else if ( nodeIndex == 16777208 )
  {
    return &r_octree->rootNode;
  }
  childNodeSetIndex = r_octree->rootNode.childNodeSetIndex;
  v7 = nodeIndex >> 3;
  if ( childNodeSetIndex > (unsigned int)v7 || (unsigned int)v7 > childNodeSetIndex + r_octree->nodeSetCount )
  {
    LODWORD(v9) = nodeIndex >> 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1400, ASSERT_TYPE_ASSERT, "( r_octree.rootNode.childNodeSetIndex ) <= ( nodeSetIndex ) && ( nodeSetIndex ) <= ( r_octree.rootNode.childNodeSetIndex + r_octree.nodeSetCount )", "nodeSetIndex not in [r_octree.rootNode.childNodeSetIndex, r_octree.rootNode.childNodeSetIndex + r_octree.nodeSetCount]\n\t%i not in [%i, %i]", v9, r_octree->rootNode.childNodeSetIndex, childNodeSetIndex + r_octree->nodeSetCount) )
      __debugbreak();
  }
  return (PMROctreeNode *)&mapEdgeList->edgeOctreeNodeSets[v7] + (nodeIndex & 7);
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeToNodeIndex
==============
*/
__int64 EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeToNodeIndex(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  unsigned int v3; 

  if ( (r_node->flags & 4) != 0 )
    v3 = 16777208;
  else
    v3 = ((__int64)((__int64)r_node - ((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64)) >> 4) | (8 * ((__int64)(((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)mapEdgeList->edgeOctreeNodeSets) >> 7));
  if ( EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(mapEdgeList, r_octree, v3) != r_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1435, ASSERT_TYPE_ASSERT, "(&r_validateNode == &r_node)", "%s\n\tError calculating nodeIndex from node.", "&r_validateNode == &r_node") )
    __debugbreak();
  return v3;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeToNodeIndex
==============
*/
__int64 EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeToNodeIndex(const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node)
{
  unsigned int v3; 

  if ( (r_node->flags & 4) != 0 )
    v3 = 16777208;
  else
    v3 = ((__int64)((__int64)r_node - ((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64)) >> 4) | (8 * ((__int64)(((unsigned __int64)r_node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)mapEdgeList->edgeOctreeNodeSets) >> 7));
  if ( EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(mapEdgeList, r_octree, v3) != r_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1435, ASSERT_TYPE_ASSERT, "(&r_validateNode == &r_node)", "%s\n\tError calculating nodeIndex from node.", "&r_validateNode == &r_node") )
    __debugbreak();
  return v3;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectIntersectingLeafNodes
==============
*/
char EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectIntersectingLeafNodes(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *leafNodeIndexPool, unsigned __int64 *outLeafNodeIndexCount)
{
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> *v6; 
  unsigned __int64 v7; 
  PMROctreeNodeSet *v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  unsigned __int64 i; 
  const EdgeOctreeQueryFrustum *m_queryShape; 
  __int64 v15; 
  __int64 v16; 
  __m128 *p_m_shape; 
  unsigned __int64 v18; 
  void (__fastcall **m_nodeBlendFunc)(__int64, __int64, __m128 *); 
  char v24; 
  const PMROctreeNode *j; 
  PMROctreeNode *r_nodea; 
  float4 r_outMaxExtent; 
  float4 r_outMinExtent; 
  __m128 v32; 

  v6 = this;
  if ( (r_node->flags & 2) == 0 )
  {
    v9 = &mapEdgeList->edgeOctreeNodeSets[(unsigned __int64)r_node->childNodeSetIndex];
    v10 = 0;
    r_nodea = (PMROctreeNode *)v9;
    v11 = 0i64;
    for ( i = 0i64; i < 8; ++i )
    {
      if ( (v9->node[0].flags & 1) == 0 )
      {
        m_queryShape = v6->m_queryShape;
        EdgeOctreeQueryShape::Float4CalcNodeExtents(r_octree, v9->node, &r_outMinExtent, &r_outMaxExtent);
        p_m_shape = (__m128 *)&m_queryShape->m_shape;
        v18 = 0i64;
        m_nodeBlendFunc = (void (__fastcall **)(__int64, __int64, __m128 *))m_queryShape->m_nodeBlendFunc;
        while ( 1 )
        {
          (*m_nodeBlendFunc)(v16, v15, &v32);
          _XMM1 = _mm128_mul_ps(*p_m_shape, v32);
          __asm
          {
            vinsertps xmm2, xmm1, xmm1, 8
            vhaddps xmm3, xmm2, xmm2
            vhaddps xmm1, xmm3, xmm3
          }
          if ( *(float *)&_XMM1 < p_m_shape->m128_f32[3] )
            break;
          ++v18;
          ++m_nodeBlendFunc;
          ++p_m_shape;
          if ( v18 >= 6 )
          {
            v24 = 1;
            goto LABEL_14;
          }
        }
        v24 = 0;
LABEL_14:
        v6 = this;
        v10 |= v24 << i;
      }
      v9 = (PMROctreeNodeSet *)((char *)v9 + 16);
    }
    for ( j = r_nodea; ((1 << v11) & v10) == 0 || !EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectIntersectingLeafNodes(v6, mapEdgeList, r_octree, j, leafNodeIndexPool, outLeafNodeIndexCount); ++j )
    {
      if ( (unsigned __int64)++v11 >= 8 )
        return 0;
      v6 = this;
    }
    return 1;
  }
  if ( *outLeafNodeIndexCount >= 0x400 )
    return 1;
  leafNodeIndexPool[*outLeafNodeIndexCount] = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeToNodeIndex(mapEdgeList, r_octree, r_node);
  v7 = *outLeafNodeIndexCount + 1;
  *outLeafNodeIndexCount = v7;
  if ( v7 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 704, ASSERT_TYPE_ASSERT, "( *outLeafNodeIndexCount ) <= ( (1024) )", "%s <= %s\n\t%i, %i", "*outLeafNodeIndexCount", "MAX_SELECTION_LEAF_NODES", v7, 1024) )
    __debugbreak();
  return 0;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes
==============
*/
char EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const MapEdgeList *mapEdgeList, const PMROctreeMetadata *r_octree, const PMROctreeNode *r_node, unsigned int *leafNodeIndexPool, unsigned __int64 *outLeafNodeIndexCount)
{
  unsigned __int64 v8; 
  unsigned __int8 v10; 
  PMROctreeNodeSet *v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  PMROctreeNodeSet *v14; 
  const EdgeOctreeQuerySphere *m_queryShape; 
  __m128 v20; 
  int v25; 
  unsigned __int8 v26; 
  float4 r_outMaxExtent; 
  float4 r_outMinExtent; 

  if ( (r_node->flags & 2) == 0 )
  {
    v10 = 0;
    v11 = &mapEdgeList->edgeOctreeNodeSets[(unsigned __int64)r_node->childNodeSetIndex];
    v12 = 0i64;
    v26 = 0;
    v13 = 0i64;
    v14 = v11;
    do
    {
      if ( (v14->node[0].flags & 1) == 0 )
      {
        m_queryShape = this->m_queryShape;
        EdgeOctreeQueryShape::Float4CalcNodeExtents(r_octree, v14->node, &r_outMinExtent, &r_outMaxExtent);
        _XMM0 = r_outMaxExtent.v;
        __asm { vminps  xmm2, xmm0, xmmword ptr [rbx+70h] }
        _XMM1 = r_outMinExtent.v;
        __asm { vmaxps  xmm3, xmm1, xmm2 }
        v20 = _mm128_sub_ps(_XMM3, m_queryShape->m_midpoint.v);
        _XMM2 = _mm128_mul_ps(v20, v20);
        __asm
        {
          vinsertps xmm0, xmm2, xmm2, 8
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm2, xmm1, xmm1
        }
        v10 = ((*(float *)&_XMM2 <= m_queryShape->m_radiusSq) << v13) | v26;
        v26 = v10;
      }
      ++v13;
      v14 = (PMROctreeNodeSet *)((char *)v14 + 16);
    }
    while ( v13 < 8 );
    v25 = v10;
    while ( ((1 << v12) & v25) == 0 || !EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes(this, mapEdgeList, r_octree, v11->node, leafNodeIndexPool, outLeafNodeIndexCount) )
    {
      ++v12;
      v11 = (PMROctreeNodeSet *)((char *)v11 + 16);
      if ( v12 >= 8 )
        return 0;
    }
    return 1;
  }
  if ( *outLeafNodeIndexCount >= 0x400 )
    return 1;
  leafNodeIndexPool[*outLeafNodeIndexCount] = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeToNodeIndex(mapEdgeList, r_octree, r_node);
  v8 = *outLeafNodeIndexCount + 1;
  *outLeafNodeIndexCount = v8;
  if ( v8 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 704, ASSERT_TYPE_ASSERT, "( *outLeafNodeIndexCount ) <= ( (1024) )", "%s <= %s\n\t%i, %i", "*outLeafNodeIndexCount", "MAX_SELECTION_LEAF_NODES", v8, 1024) )
    __debugbreak();
  return 0;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetBucket
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetBucket(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, edgeQueryBucket_t bucket)
{
  this->m_bucket = bucket;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetBucket
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetBucket(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, edgeQueryBucket_t bucket)
{
  this->m_bucket = bucket;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetHint
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetHint(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, unsigned int hintNode)
{
  this->m_hint = hintNode;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetHint
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetHint(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, unsigned int hintNode)
{
  this->m_hint = hintNode;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetShape
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SetShape(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const EdgeOctreeQueryFrustum *shape)
{
  if ( shape )
  {
    this->m_queryShape = shape;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 589, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    this->m_queryShape = NULL;
  }
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetShape
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetShape(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const EdgeOctreeQuerySphere *shape)
{
  if ( shape )
  {
    this->m_queryShape = shape;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 589, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    this->m_queryShape = NULL;
  }
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::ClearFlag
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::ClearFlag(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, EdgeOctreeQuery<EdgeOctreeQuerySphere>::EOQ_Flags flag)
{
  this->m_flags &= ~flag;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetFlag
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::SetFlag(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, EdgeOctreeQuery<EdgeOctreeQuerySphere>::EOQ_Flags flag)
{
  this->m_flags |= flag;
}

