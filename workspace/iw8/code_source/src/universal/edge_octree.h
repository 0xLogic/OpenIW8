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
  _RAX = this->m_queryShape;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax+1A0h]
    vmovss  dword ptr [rbp+40h+min], xmm1
    vextractps dword ptr [rbp+40h+min+4], xmm1, 1
    vextractps dword ptr [rbp+40h+min+8], xmm1, 2
    vmovups xmm2, xmmword ptr [rax+1B0h]
    vmovss  dword ptr [rbp+40h+max], xmm2
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
  _RAX = this->m_queryShape;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax+80h]
    vmovups xmm0, xmmword ptr [rax+70h]
    vsubps  xmm3, xmm0, xmm1
    vaddps  xmm2, xmm0, xmm1
    vmovss  dword ptr [rbp+40h+min], xmm3
    vextractps dword ptr [rbp+40h+min+4], xmm3, 1
    vextractps dword ptr [rbp+40h+min+8], xmm3, 2
    vmovss  dword ptr [rbp+40h+max], xmm2
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

  _RBX = this;
  EdgeOctreeQueryShape::Float4CalcNodeExtents(r_octree, r_node, &r_outMinExtent, &r_outMaxExtent);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+58h+r_outMaxExtent.v]
    vcmpltps xmm1, xmm0, xmmword ptr [rbx+1B0h]
    vmovups xmm2, xmmword ptr [rbx+1A0h]
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
  bool result; 
  float4 r_outMinExtent; 
  float4 r_outMaxExtent; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = this;
  EdgeOctreeQueryShape::Float4CalcNodeExtents(r_octree, r_node, &r_outMinExtent, &r_outMaxExtent);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+70h]
    vsubps  xmm6, xmm0, xmmword ptr [rsp+68h+r_outMinExtent.v]
    vmovups xmm5, xmmword ptr [rbx+80h]
    vmovups xmm1, xmm0
    vmovups xmm0, xmmword ptr [rsp+68h+r_outMaxExtent.v]
    vsubps  xmm4, xmm0, xmm1
    vshufps xmm0, xmm4, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v, 0FAh ; 'ú'; float4 const g_infinity
    vshufps xmm1, xmm4, xmm0, 84h ; '„'
    vshufps xmm0, xmm6, xmmword ptr cs:?g_infinity@@3Ufloat4@@B.v, 0FAh ; 'ú'; float4 const g_infinity
    vmovups xmm2, xmm5
    vcmpltps xmm2, xmm1, xmm2
    vmovmskps eax, xmm2
    vshufps xmm1, xmm6, xmm0, 84h ; '„'
    vcmpltps xmm2, xmm1, xmm5
    vmovmskps ecx, xmm2
  }
  result = (_ECX & 0xF) == 0 && (_EAX & 0xF) == 0;
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return result;
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute
==============
*/
void EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(EdgeOctreeQuery<EdgeOctreeQueryFrustum> *this, const BgHandler *handler, EdgeId *resultIdPool, float *resultFractionPool, float *resultDistancePool, unsigned __int64 resultPoolSize, unsigned __int64 *outResultCount, unsigned int *outHintNodeIndex)
{
  signed __int64 v8; 
  void *v19; 
  unsigned __int64 *v24; 
  unsigned int *v25; 
  unsigned __int64 v26; 
  unsigned __int64 v27; 
  int v28; 
  int v38; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  unsigned int staticQueryTypes; 
  unsigned __int64 v87; 
  PMROctreeMetadata *edgeOctrees; 
  unsigned int m_hint; 
  unsigned int childNodeSetIndex; 
  const PMROctreeNode *v91; 
  unsigned int v92; 
  const PMROctreeNode *v93; 
  unsigned __int8 v94; 
  MapEdgeList *v95; 
  unsigned int dynamicQueryTypes; 
  char v97; 
  const dvar_t *v98; 
  unsigned __int64 v99; 
  EdgeId *v103; 
  __int64 v104; 
  unsigned int EdgeIndex; 
  const float4 (*v106)[2]; 
  unsigned __int64 v109; 
  __int64 v111; 
  EdgeId *v112; 
  __int64 v113; 
  int v114; 
  unsigned int EntityIndex; 
  unsigned __int64 v119; 
  _DWORD *v120; 
  __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  unsigned __int64 v124; 
  _DWORD *v125; 
  _DWORD *v126; 
  unsigned __int64 v127; 
  unsigned __int64 v128; 
  unsigned __int64 v129; 
  _DWORD *v130; 
  _DWORD *v131; 
  __int64 v143; 
  unsigned __int64 *outLeafNodeIndexCount; 
  __int64 v145; 
  __int64 v146; 
  __int64 v147; 
  char v148[21008]; 
  __int64 v149; 
  char v160; 

  v19 = alloca(v8);
  v149 = -2i64;
  __asm
  {
    vmovaps [rsp+5378h+var_58], xmm6
    vmovaps [rsp+5378h+var_68], xmm7
    vmovaps [rsp+5378h+var_78], xmm8
    vmovaps [rsp+5378h+var_88], xmm9
    vmovaps [rsp+5378h+var_98], xmm10
    vmovaps [rsp+5378h+var_A8], xmm11
    vmovaps [rsp+5378h+var_B8], xmm12
    vmovaps [rsp+5378h+var_C8], xmm13
    vmovaps [rsp+5378h+var_D8], xmm14
    vmovaps [rsp+5378h+var_E8], xmm15
  }
  _RBP = (unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 21000) = (unsigned __int64)&v143 ^ _security_cookie;
  *(_QWORD *)(_RBP + 64) = resultFractionPool;
  *(_QWORD *)(_RBP + 56) = resultIdPool;
  *(_QWORD *)(_RBP + 40) = handler;
  *(_QWORD *)(_RBP + 48) = resultDistancePool;
  v24 = outResultCount;
  *(_QWORD *)(_RBP + 32) = outResultCount;
  v25 = outHintNodeIndex;
  *(_QWORD *)(_RBP + 24) = outHintNodeIndex;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1036, ASSERT_TYPE_SANITY, "( handler != nullptr )", (const char *)&queryFormat, "handler != nullptr") )
    __debugbreak();
  v26 = 0i64;
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
  v27 = 0i64;
  *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0i64;
  v28 = 16777208;
  _RAX = this->m_queryShape;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax+1A0h]
    vmovss  dword ptr [rbp+60h], xmm1
    vextractps dword ptr [rbp+64h], xmm1, 1
    vextractps dword ptr [rbp+68h], xmm1, 2
    vmovups xmm2, xmmword ptr [rax+1B0h]
    vmovss  dword ptr [rbp+50h], xmm2
    vextractps dword ptr [rbp+54h], xmm2, 1
    vextractps dword ptr [rbp+58h], xmm2, 2
  }
  Bounds_SetMinMax3D((Bounds *)(_RBP + 144), (const vec3_t *)(_RBP + 96), (const vec3_t *)(_RBP + 80));
  *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8) = 0;
  *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 256), cm.mapEnts->edgeListSpatialTree, (const Bounds *)(_RBP + 144));
  if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 256)) )
  {
    __asm
    {
      vmovss  xmm11, dword ptr [rbp+58h]
      vmovss  xmm12, dword ptr [rbp+54h]
      vmovss  xmm13, dword ptr [rbp+50h]
      vmovss  xmm14, dword ptr [rbp+68h]
      vmovss  xmm15, dword ptr [rbp+64h]
      vxorps  xmm10, xmm10, xmm10
    }
    v38 = 0;
    do
    {
      if ( !*(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
        __debugbreak();
      v39 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 20i64);
      v40 = *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
      if ( v40 == v39 )
      {
        if ( !*(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
          __debugbreak();
        if ( (**(_BYTE **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
          __debugbreak();
        if ( *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) >= **(unsigned __int8 **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
          __debugbreak();
        v41 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) + 4i64 * *(unsigned int *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) + 4);
      }
      else
      {
        if ( v40 >= v39 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
            __debugbreak();
          v40 = *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
        }
        v41 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 8i64) + 4i64 * v40);
      }
      _RSI = cm.mapEnts->edgeLists[v41];
      if ( _RSI )
      {
        staticQueryTypes = _RSI->staticQueryTypes;
        if ( _bittest((const int *)&staticQueryTypes, (unsigned __int8)this->m_bucket) )
        {
          __asm
          {
            vmovss  xmm4, dword ptr [rsi+8]
            vmovss  xmm5, dword ptr [rsi+0Ch]
            vmovss  xmm9, dword ptr [rsi+10h]
          }
          *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x5C) = 0;
          __asm
          {
            vmovups xmm1, xmmword ptr [rbp+50h]
            vmovss  xmm1, xmm1, xmm4
            vinsertps xmm1, xmm1, xmm5, 10h
            vinsertps xmm1, xmm1, xmm9, 20h ; ' '
            vmovups xmmword ptr [rbp+50h], xmm1
            vmovss  xmm6, dword ptr [rsi+14h]
          }
          *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7C) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rbp+70h]
            vmovss  xmm3, xmm3, xmm6
            vinsertps xmm3, xmm3, dword ptr [rsi+18h], 10h
            vinsertps xmm3, xmm3, dword ptr [rsi+1Ch], 20h ; ' '
            vmovups xmmword ptr [rbp+70h], xmm3
          }
          *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x8C) = 0;
          __asm
          {
            vmovups xmm2, xmmword ptr [rbp+80h]
            vmovss  xmm0, dword ptr [rbp+60h]
            vmovss  xmm2, xmm2, xmm0
            vinsertps xmm2, xmm2, xmm15, 10h
            vinsertps xmm2, xmm2, xmm14, 20h ; ' '
            vmovups xmmword ptr [rbp+80h], xmm2
          }
          *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11EC) = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+11E0h]
            vmovss  xmm0, xmm0, xmm13
            vinsertps xmm0, xmm0, xmm12, 10h
            vinsertps xmm0, xmm0, xmm11, 20h ; ' '
            vmovups xmmword ptr [rbp+11E0h], xmm0
            vsubps  xmm1, xmm1, xmm0
            vsubps  xmm0, xmm2, xmm3
            vmaxps  xmm2, xmm1, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcmpltps xmm0, xmm1, xmm2
            vmovmskps ebx, xmm0
            vsubss  xmm3, xmm4, xmm13
            vsubss  xmm4, xmm5, xmm12
            vsubss  xmm5, xmm9, xmm11
            vmovss  xmm0, dword ptr [rbp+60h]
            vsubss  xmm0, xmm0, xmm6
            vsubss  xmm1, xmm15, dword ptr [rsi+18h]
            vsubss  xmm2, xmm14, dword ptr [rsi+1Ch]
            vmaxss  xmm6, xmm0, xmm3
            vmaxss  xmm3, xmm1, xmm4
            vmaxss  xmm4, xmm2, xmm5
            vsubss  xmm0, xmm6, xmm3
            vcmpless xmm1, xmm10, xmm0
            vblendvps xmm2, xmm3, xmm6, xmm1
            vmovss  dword ptr [rbp+8], xmm2
            vsubss  xmm0, xmm2, xmm4
            vcmpless xmm1, xmm10, xmm0
            vblendvps xmm0, xmm4, xmm2, xmm1
            vmovss  dword ptr [rbp+8], xmm0
            vcomiss xmm0, xmm10
          }
          if ( (_EBX & 0xF) == 0 )
          {
            v87 = 0i64;
            if ( _RSI->numEdgeOctrees )
            {
              edgeOctrees = _RSI->edgeOctrees;
              while ( edgeOctrees->edgeBucket != this->m_bucket )
              {
                ++v87;
                ++edgeOctrees;
                if ( v87 >= _RSI->numEdgeOctrees )
                  goto LABEL_60;
              }
              if ( edgeOctrees && (edgeOctrees->flags[0] & 1) != 0 )
              {
                ++v38;
                m_hint = this->m_hint;
                *(_DWORD *)_RBP = m_hint;
                if ( (edgeOctrees->rootNode.flags & 2) != 0 || v38 > 1 || (childNodeSetIndex = edgeOctrees->rootNode.childNodeSetIndex, m_hint >> 3 < childNodeSetIndex) || childNodeSetIndex + edgeOctrees->nodeSetCount <= m_hint >> 3 )
                {
                  m_hint = 16777208;
                  *(_DWORD *)_RBP = 16777208;
                }
                v91 = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(_RSI, edgeOctrees, m_hint);
                EdgeOctreeQuery<EdgeOctreeQueryFrustum>::FindSmallestEnclosingNode(this, _RSI, edgeOctrees, v91, (unsigned int *)((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64));
                v92 = *(_DWORD *)_RBP;
                if ( v28 == 16777208 && v92 != 16777208 )
                  v28 = *(_DWORD *)_RBP;
                *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0i64;
                v93 = EdgeOctreeQuery<EdgeOctreeQueryFrustum>::NodeIndexToNode(_RSI, edgeOctrees, v92);
                EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectIntersectingLeafNodes(this, _RSI, edgeOctrees, v93, (unsigned int *)(_RBP + 8704), (unsigned __int64 *)(_RBP + 16));
                *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0i64;
                EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueStaticCandidateEdges(_RSI, edgeOctrees, (const unsigned int *)(_RBP + 8704), *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10), (EdgeId *)(_RBP + 8 * v27 + 4608), (unsigned __int64 *)(_RBP + 8));
                v27 += *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
                if ( v27 > 0x200 )
                {
                  LODWORD(v147) = 512;
                  LODWORD(v146) = v27;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1207, ASSERT_TYPE_ASSERT, "( staticEdgeCount ) <= ( (512) )", "%s <= %s\n\t%i, %i", "staticEdgeCount", "MAX_SELECTION_EDGES", v146, v147) )
                    __debugbreak();
                }
              }
            }
          }
        }
      }
LABEL_60:
      ;
    }
    while ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 256)) );
    *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = v27;
    v24 = *(unsigned __int64 **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    v25 = *(unsigned int **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  }
  if ( v25 )
    *v25 = v28;
  v94 = 0;
  if ( cm.mapEnts->numEdgeLists )
  {
    v95 = *cm.mapEnts->edgeLists;
    if ( v95 )
    {
      dynamicQueryTypes = v95->dynamicQueryTypes;
      v94 = _bittest((const int *)&dynamicQueryTypes, (unsigned __int8)this->m_bucket);
    }
  }
  v97 = this->m_flags & v94;
  *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18) = 0i64;
  v98 = DCONST_DVARBOOL_edge_includeDynamicEdges;
  if ( !DCONST_DVARBOOL_edge_includeDynamicEdges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_includeDynamicEdges") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v98);
  if ( v98->current.enabled && v97 )
    EdgeOctreeQuery<EdgeOctreeQueryFrustum>::CollectUniqueDynamicCandidateEdges(this, *(const BgHandler **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28), 512 - v27, (EdgeId *)(_RBP + 8 * v27 + 4608), (unsigned __int64 *)(_RBP + 24));
  v99 = 0i64;
  __asm
  {
    vmovss  xmm6, cs:__real@ff7fffff
    vmovss  xmm7, cs:__real@7f7fffff
  }
  if ( v27 )
  {
    _R14 = _RBP + 12808;
    v103 = (EdgeId *)(_RBP + 4608);
    v104 = *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    do
    {
      if ( EdgeId::GetIsDynamic(v103) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1256, ASSERT_TYPE_ASSERT, "(!edgeId.GetIsDynamic())", "%s\n\tDynamic edge encountered in static edge test.", "!edgeId.GetIsDynamic()") )
        __debugbreak();
      EdgeIndex = EdgeId::GetEdgeIndex(v103);
      v106 = MapEdgeList_LookupSegment(EdgeIndex);
      __asm
      {
        vmovss  dword ptr [rbp+8], xmm6
        vmovss  dword ptr [rbp+0], xmm7
      }
      if ( EdgeOctreeQueryFrustum::IntersectsLineSegment((EdgeOctreeQueryFrustum *)this->m_queryShape, v106, (float *)(_RBP + 8), (float *)((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64)) )
      {
        if ( (unsigned int)v99 >= 0x200 )
        {
          LODWORD(v145) = 512;
          LODWORD(outLeafNodeIndexCount) = v99;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1265, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v145) )
            __debugbreak();
        }
        *(EdgeId *)(_R14 - 8) = *v103;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0]
          vmovss  dword ptr [r14], xmm0
          vmovss  xmm1, dword ptr [rbp+8]
          vmovss  dword ptr [r14+4], xmm1
        }
        ++v99;
        _R14 += 16i64;
      }
      ++v103;
      --v104;
    }
    while ( v104 );
    v26 = 0i64;
    v24 = *(unsigned __int64 **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
    v27 = *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  }
  v109 = v27 + *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
  if ( v27 > v109 )
  {
    LODWORD(v147) = v27 + *(_DWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18);
    LODWORD(v146) = v27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1284, ASSERT_TYPE_ASSERT, "( dynamicEdgeBeginIndex ) <= ( dynamicEdgeEndIndex )", "%s <= %s\n\t%i, %i", "dynamicEdgeBeginIndex", "dynamicEdgeEndIndex", v146, v147) )
      __debugbreak();
  }
  if ( v109 > 0x200 )
  {
    LODWORD(v147) = 512;
    LODWORD(v146) = v109;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1285, ASSERT_TYPE_ASSERT, "( dynamicEdgeEndIndex ) <= ( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "dynamicEdgeEndIndex", "ARRAY_COUNT( selectedEdges )", v146, v147) )
      __debugbreak();
  }
  if ( v27 < v109 )
  {
    _R14 = _RBP + 16 * v99 + 12808;
    v111 = *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    v112 = (EdgeId *)(_RBP + 8 * v111 + 4608);
    v113 = v109 - v111;
    v114 = 502048;
    do
    {
      if ( !EdgeId::GetIsDynamic(v112) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1289, ASSERT_TYPE_ASSERT, "(edgeId.GetIsDynamic())", "%s\n\tStatic edge encountered in dynamic edge test.", "edgeId.GetIsDynamic()") )
        __debugbreak();
      EntityIndex = EdgeId::GetEntityIndex(v112);
      if ( v114 != EntityIndex )
      {
        Edge_GetEntityTransform(*(const BgHandler **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28), v112, (vector4 *)(_RBP + 176));
        v114 = EntityIndex;
      }
      Edge_GetDynamicLineSegment((const vector4 *)(_RBP + 176), v112, (float4 (*)[2])(_RBP + 4576), NULL);
      __asm
      {
        vmovss  dword ptr [rbp+0], xmm6
        vmovss  dword ptr [rbp+8], xmm7
      }
      if ( EdgeOctreeQueryFrustum::IntersectsLineSegment((EdgeOctreeQueryFrustum *)this->m_queryShape, (const float4 (*)[2])(_RBP + 4576), (float *)((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64), (float *)(_RBP + 8)) )
      {
        if ( (unsigned int)v99 >= 0x200 )
        {
          LODWORD(v145) = 512;
          LODWORD(outLeafNodeIndexCount) = v99;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1306, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v145) )
            __debugbreak();
        }
        *(EdgeId *)(_R14 - 8) = *v112;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+8]
          vmovss  dword ptr [r14], xmm0
          vmovss  xmm1, dword ptr [rbp+0]
          vmovss  dword ptr [r14+4], xmm1
        }
        ++v99;
        _R14 += 16i64;
      }
      ++v112;
      --v113;
    }
    while ( v113 );
    v26 = 0i64;
    v24 = *(unsigned __int64 **)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  }
  *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11E8) = 0i64;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+11E0h]
    vmovdqa xmmword ptr [rbp+11E0h], xmm0
  }
  ntl::sort<EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *,EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge>((EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *)(_RBP + 12800), (EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *)(_RBP + 16 * v99 + 12800), (EdgeOctreeQuery<EdgeOctreeQueryFrustum>::SelectedEdge *)(_RBP + 4576), *(ntl::random_access_iterator_tag *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 4));
  v119 = 0i64;
  if ( *v24 < resultPoolSize )
  {
    v120 = (_DWORD *)(_RBP + 12812);
    v121 = *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    v122 = *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    do
    {
      if ( v119 >= v99 )
        break;
      *(_QWORD *)(v121 + 8 * *v24) = *(_QWORD *)(v120 - 3);
      *(_DWORD *)(v122 + 4 * (*v24)++) = *v120;
      ++v119;
      v120 += 4;
    }
    while ( *v24 < resultPoolSize );
  }
  v123 = *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
  if ( v123 )
  {
    v124 = 0i64;
    if ( resultPoolSize < 4 )
    {
LABEL_118:
      if ( v26 < resultPoolSize )
      {
        v130 = (_DWORD *)(_RBP + 16 * v124 + 12808);
        v131 = (_DWORD *)(v123 + 4 * v26);
        do
        {
          if ( v124 >= v99 )
            break;
          *v131 = *v130;
          ++v124;
          ++v131;
          v130 += 4;
          ++v26;
        }
        while ( v26 < resultPoolSize );
      }
    }
    else
    {
      v125 = (_DWORD *)(_RBP + 12808);
      v126 = (_DWORD *)(v123 + 8);
      while ( v124 < v99 )
      {
        *(v126 - 2) = *v125;
        v127 = v124 + 1;
        if ( v127 >= v99 )
          break;
        *(v126 - 1) = v125[4];
        v128 = v127 + 1;
        if ( v128 >= v99 )
          break;
        *v126 = v125[8];
        v129 = v128 + 1;
        if ( v129 >= v99 )
          break;
        v126[1] = v125[12];
        v124 = v129 + 1;
        v125 += 16;
        v26 += 4i64;
        v126 += 4;
        if ( v26 >= resultPoolSize - 3 )
        {
          v123 = *(_QWORD *)(((unsigned __int64)v148 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
          goto LABEL_118;
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v160;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute
==============
*/
void EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute(EdgeOctreeQuery<EdgeOctreeQuerySphere> *this, const BgHandler *handler, EdgeId *resultIdPool, float *resultFractionPool, float *resultDistancePool, unsigned __int64 resultPoolSize, unsigned __int64 *outResultCount, unsigned int *outHintNodeIndex)
{
  signed __int64 v8; 
  void *v19; 
  unsigned int *v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  int v27; 
  int v33; 
  unsigned int v39; 
  unsigned int v40; 
  __int64 v41; 
  unsigned int staticQueryTypes; 
  unsigned __int64 v86; 
  PMROctreeMetadata *edgeOctrees; 
  unsigned int m_hint; 
  unsigned int childNodeSetIndex; 
  const PMROctreeNode *v90; 
  unsigned int v91; 
  const PMROctreeNode *v92; 
  unsigned __int8 v93; 
  MapEdgeList *v94; 
  unsigned int dynamicQueryTypes; 
  char v96; 
  const dvar_t *v97; 
  unsigned __int64 v98; 
  EdgeId *v102; 
  unsigned __int64 v103; 
  unsigned int EdgeIndex; 
  const float4 (*v105)[2]; 
  unsigned __int64 v108; 
  EdgeId *v110; 
  unsigned __int64 v111; 
  __int64 v117; 
  int v118; 
  unsigned int EntityIndex; 
  char v120; 
  char v133; 
  char v141; 
  unsigned __int64 v165; 
  unsigned __int64 *v166; 
  _DWORD *v167; 
  __int64 v168; 
  __int64 v169; 
  __int64 v170; 
  unsigned __int64 v171; 
  _DWORD *v172; 
  _DWORD *v173; 
  unsigned __int64 v174; 
  unsigned __int64 v175; 
  unsigned __int64 v176; 
  _DWORD *v177; 
  _DWORD *v178; 
  __int64 v190; 
  unsigned __int64 *outLeafNodeIndexCount; 
  __int64 v192; 
  __int64 v193; 
  __int64 v194; 
  char v195[21008]; 
  __int64 v196; 
  char v207; 

  v19 = alloca(v8);
  v196 = -2i64;
  __asm
  {
    vmovaps [rsp+5378h+var_58], xmm6
    vmovaps [rsp+5378h+var_68], xmm7
    vmovaps [rsp+5378h+var_78], xmm8
    vmovaps [rsp+5378h+var_88], xmm9
    vmovaps [rsp+5378h+var_98], xmm10
    vmovaps [rsp+5378h+var_A8], xmm11
    vmovaps [rsp+5378h+var_B8], xmm12
    vmovaps [rsp+5378h+var_C8], xmm13
    vmovaps [rsp+5378h+var_D8], xmm14
    vmovaps [rsp+5378h+var_E8], xmm15
  }
  _RBP = (unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64;
  *(_QWORD *)(_RBP + 21000) = (unsigned __int64)&v190 ^ _security_cookie;
  *(_QWORD *)(_RBP + 64) = resultFractionPool;
  *(_QWORD *)(_RBP + 56) = resultIdPool;
  *(_QWORD *)(_RBP + 24) = handler;
  *(_QWORD *)(_RBP + 40) = this;
  *(_QWORD *)(_RBP + 32) = resultDistancePool;
  *(_QWORD *)(_RBP + 48) = outResultCount;
  v24 = outHintNodeIndex;
  *(_QWORD *)(_RBP + 16) = outHintNodeIndex;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1036, ASSERT_TYPE_SANITY, "( handler != nullptr )", (const char *)&queryFormat, "handler != nullptr") )
    __debugbreak();
  v25 = 0i64;
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
  v26 = 0i64;
  *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0i64;
  v27 = 16777208;
  _RAX = this->m_queryShape;
  __asm
  {
    vmovups xmm1, xmmword ptr [rax+80h]
    vmovups xmm0, xmmword ptr [rax+70h]
    vsubps  xmm3, xmm0, xmm1
    vaddps  xmm2, xmm0, xmm1
    vmovss  dword ptr [rbp+70h], xmm3
    vextractps dword ptr [rbp+74h], xmm3, 1
    vextractps dword ptr [rbp+78h], xmm3, 2
    vmovss  dword ptr [rbp+48h], xmm2
    vextractps dword ptr [rbp+4Ch], xmm2, 1
    vextractps dword ptr [rbp+50h], xmm2, 2
  }
  Bounds_SetMinMax3D((Bounds *)(_RBP + 160), (const vec3_t *)(_RBP + 112), (const vec3_t *)(_RBP + 72));
  *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) = 0i64;
  *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8) = 0;
  *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) = 0i64;
  *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) = 0i64;
  SpatialPartition_Tree_AABBIterator::Init((SpatialPartition_Tree_AABBIterator *)(_RBP + 256), cm.mapEnts->edgeListSpatialTree, (const Bounds *)(_RBP + 160));
  v33 = 0;
  if ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 256)) )
  {
    __asm
    {
      vmovss  xmm10, dword ptr [rbp+50h]
      vmovss  xmm11, dword ptr [rbp+4Ch]
      vmovss  xmm12, dword ptr [rbp+48h]
      vmovss  xmm13, dword ptr [rbp+78h]
      vmovss  xmm14, dword ptr [rbp+74h]
      vmovss  xmm15, dword ptr [rbp+70h]
    }
    do
    {
      if ( !*(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 16, ASSERT_TYPE_ASSERT, "(m_spatialTree)", (const char *)&queryFormat, "m_spatialTree") )
        __debugbreak();
      v39 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 20i64);
      v40 = *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
      if ( v40 == v39 )
      {
        if ( !*(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 19, ASSERT_TYPE_ASSERT, "(m_currentNode)", (const char *)&queryFormat, "m_currentNode") )
          __debugbreak();
        if ( (**(_BYTE **)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 20, ASSERT_TYPE_ASSERT, "(m_currentNode->containsLeaves)", (const char *)&queryFormat, "m_currentNode->containsLeaves") )
          __debugbreak();
        if ( *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) >= **(unsigned __int8 **)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) >> 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 21, ASSERT_TYPE_ASSERT, "(m_leafIndex < m_currentNode->childCount)", (const char *)&queryFormat, "m_leafIndex < m_currentNode->childCount") )
          __debugbreak();
        v41 = *(unsigned int *)(*(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D8) + 4i64 * *(unsigned int *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C0) + 4);
      }
      else
      {
        if ( v40 >= v39 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_tree.h", 26, ASSERT_TYPE_ASSERT, "(m_alwaysIndex < m_spatialTree->alwaysListLength)", (const char *)&queryFormat, "m_alwaysIndex < m_spatialTree->alwaysListLength") )
            __debugbreak();
          v40 = *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1C8);
        }
        v41 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x1D0) + 8i64) + 4i64 * v40);
      }
      _RSI = cm.mapEnts->edgeLists[v41];
      if ( _RSI )
      {
        staticQueryTypes = _RSI->staticQueryTypes;
        if ( _bittest((const int *)&staticQueryTypes, (unsigned __int8)this->m_bucket) )
        {
          __asm
          {
            vmovss  xmm4, dword ptr [rsi+8]
            vmovss  xmm5, dword ptr [rsi+0Ch]
            vmovss  xmm9, dword ptr [rsi+10h]
          }
          *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x7C) = 0;
          __asm
          {
            vmovups xmm1, xmmword ptr [rbp+70h]
            vmovss  xmm1, xmm1, xmm4
            vinsertps xmm1, xmm1, xmm5, 10h
            vinsertps xmm1, xmm1, xmm9, 20h ; ' '
            vmovups xmmword ptr [rbp+70h], xmm1
            vmovss  xmm6, dword ptr [rsi+14h]
            vmovss  xmm8, dword ptr [rsi+1Ch]
          }
          *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x11EC) = 0;
          __asm
          {
            vmovups xmm3, xmmword ptr [rbp+11E0h]
            vmovss  xmm3, xmm3, xmm6
            vinsertps xmm3, xmm3, dword ptr [rsi+18h], 10h
            vinsertps xmm3, xmm3, xmm8, 20h ; ' '
            vmovups xmmword ptr [rbp+11E0h], xmm3
          }
          *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x9C) = 0;
          __asm
          {
            vmovups xmm2, xmmword ptr [rbp+90h]
            vmovss  xmm2, xmm2, xmm15
            vinsertps xmm2, xmm2, xmm14, 10h
            vinsertps xmm2, xmm2, xmm13, 20h ; ' '
            vmovups xmmword ptr [rbp+90h], xmm2
          }
          *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x6C) = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+60h]
            vmovss  xmm0, xmm0, xmm12
            vinsertps xmm0, xmm0, xmm11, 10h
            vinsertps xmm0, xmm0, xmm10, 20h ; ' '
            vmovups xmmword ptr [rbp+60h], xmm0
            vsubps  xmm1, xmm1, xmm0
            vsubps  xmm0, xmm2, xmm3
            vmaxps  xmm2, xmm1, xmm0
            vxorps  xmm1, xmm1, xmm1
            vcmpltps xmm0, xmm1, xmm2
            vmovmskps ebx, xmm0
            vsubss  xmm3, xmm4, xmm12
            vsubss  xmm4, xmm5, xmm11
            vsubss  xmm5, xmm9, xmm10
            vsubss  xmm0, xmm15, xmm6
            vsubss  xmm1, xmm14, dword ptr [rsi+18h]
            vsubss  xmm2, xmm13, xmm8
            vmaxss  xmm6, xmm0, xmm3
            vmaxss  xmm3, xmm1, xmm4
            vmaxss  xmm4, xmm2, xmm5
            vsubss  xmm0, xmm6, xmm3
            vxorps  xmm5, xmm5, xmm5
            vcmpless xmm1, xmm5, xmm0
            vblendvps xmm2, xmm3, xmm6, xmm1
            vmovss  dword ptr [rbp+48h], xmm2
            vsubss  xmm0, xmm2, xmm4
            vcmpless xmm1, xmm5, xmm0
            vblendvps xmm0, xmm4, xmm2, xmm1
            vmovss  dword ptr [rbp+48h], xmm0
            vcomiss xmm0, xmm5
          }
          if ( (_EBX & 0xF) == 0 )
          {
            v86 = 0i64;
            if ( _RSI->numEdgeOctrees )
            {
              edgeOctrees = _RSI->edgeOctrees;
              while ( edgeOctrees->edgeBucket != this->m_bucket )
              {
                ++v86;
                ++edgeOctrees;
                if ( v86 >= _RSI->numEdgeOctrees )
                  goto LABEL_60;
              }
              if ( edgeOctrees && (edgeOctrees->flags[0] & 1) != 0 )
              {
                ++v33;
                m_hint = this->m_hint;
                *(_DWORD *)_RBP = m_hint;
                if ( (edgeOctrees->rootNode.flags & 2) != 0 || v33 > 1 || (childNodeSetIndex = edgeOctrees->rootNode.childNodeSetIndex, m_hint >> 3 < childNodeSetIndex) || childNodeSetIndex + edgeOctrees->nodeSetCount <= m_hint >> 3 )
                {
                  m_hint = 16777208;
                  *(_DWORD *)_RBP = 16777208;
                }
                v90 = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(_RSI, edgeOctrees, m_hint);
                EdgeOctreeQuery<EdgeOctreeQuerySphere>::FindSmallestEnclosingNode(this, _RSI, edgeOctrees, v90, (unsigned int *)((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64));
                v91 = *(_DWORD *)_RBP;
                if ( v27 == 16777208 && v91 != 16777208 )
                  v27 = *(_DWORD *)_RBP;
                *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = 0i64;
                v92 = EdgeOctreeQuery<EdgeOctreeQuerySphere>::NodeIndexToNode(_RSI, edgeOctrees, v91);
                EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes(this, _RSI, edgeOctrees, v92, (unsigned int *)(_RBP + 8704), (unsigned __int64 *)(_RBP + 8));
                *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48) = 0i64;
                EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueStaticCandidateEdges(_RSI, edgeOctrees, (const unsigned int *)(_RBP + 8704), *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 8), (EdgeId *)(_RBP + 8 * v26 + 4608), (unsigned __int64 *)(_RBP + 72));
                v26 += *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x48);
                if ( v26 > 0x200 )
                {
                  LODWORD(v194) = 512;
                  LODWORD(v193) = v26;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1207, ASSERT_TYPE_ASSERT, "( staticEdgeCount ) <= ( (512) )", "%s <= %s\n\t%i, %i", "staticEdgeCount", "MAX_SELECTION_EDGES", v193, v194) )
                    __debugbreak();
                }
              }
            }
          }
        }
      }
LABEL_60:
      ;
    }
    while ( SpatialPartition_Tree_AABBIterator::Advance((SpatialPartition_Tree_AABBIterator *)(_RBP + 256)) );
    *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 8) = v26;
    v24 = *(unsigned int **)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  }
  if ( v24 )
    *v24 = v27;
  v93 = 0;
  if ( cm.mapEnts->numEdgeLists )
  {
    v94 = *cm.mapEnts->edgeLists;
    if ( v94 )
    {
      dynamicQueryTypes = v94->dynamicQueryTypes;
      v93 = _bittest((const int *)&dynamicQueryTypes, (unsigned __int8)this->m_bucket);
    }
  }
  v96 = this->m_flags & v93;
  *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10) = 0i64;
  v97 = DCONST_DVARBOOL_edge_includeDynamicEdges;
  if ( !DCONST_DVARBOOL_edge_includeDynamicEdges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_includeDynamicEdges") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v97);
  if ( v97->current.enabled && v96 )
    EdgeOctreeQuery<EdgeOctreeQuerySphere>::CollectUniqueDynamicCandidateEdges(this, *(const BgHandler **)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18), 512 - v26, (EdgeId *)(_RBP + 8 * v26 + 4608), (unsigned __int64 *)(_RBP + 16));
  v98 = 0i64;
  __asm
  {
    vmovss  xmm11, cs:__real@ff7fffff
    vmovss  xmm12, cs:__real@7f7fffff
  }
  if ( v26 )
  {
    _R14 = _RBP + 12808;
    v102 = (EdgeId *)(_RBP + 4608);
    v103 = v26;
    do
    {
      if ( EdgeId::GetIsDynamic(v102) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1256, ASSERT_TYPE_ASSERT, "(!edgeId.GetIsDynamic())", "%s\n\tDynamic edge encountered in static edge test.", "!edgeId.GetIsDynamic()") )
        __debugbreak();
      EdgeIndex = EdgeId::GetEdgeIndex(v102);
      v105 = MapEdgeList_LookupSegment(EdgeIndex);
      __asm
      {
        vmovss  dword ptr [rbp+0], xmm11
        vmovss  dword ptr [rbp+48h], xmm12
      }
      if ( EdgeOctreeQuerySphere::IntersectsLineSegment((EdgeOctreeQuerySphere *)this->m_queryShape, v105, (float *)((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64), (float *)(_RBP + 72)) )
      {
        if ( (unsigned int)v98 >= 0x200 )
        {
          LODWORD(v192) = 512;
          LODWORD(outLeafNodeIndexCount) = v98;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1265, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v192) )
            __debugbreak();
        }
        *(EdgeId *)(_R14 - 8) = *v102;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+48h]
          vmovss  dword ptr [r14], xmm0
          vmovss  xmm1, dword ptr [rbp+0]
          vmovss  dword ptr [r14+4], xmm1
        }
        ++v98;
        _R14 += 16i64;
      }
      ++v102;
      --v103;
    }
    while ( v103 );
    v25 = 0i64;
    v26 = *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 8);
  }
  v108 = v26 + *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
  if ( v26 > v108 )
  {
    LODWORD(v194) = v26 + *(_DWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x10);
    LODWORD(v193) = v26;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1284, ASSERT_TYPE_ASSERT, "( dynamicEdgeBeginIndex ) <= ( dynamicEdgeEndIndex )", "%s <= %s\n\t%i, %i", "dynamicEdgeBeginIndex", "dynamicEdgeEndIndex", v193, v194) )
      __debugbreak();
  }
  if ( v108 > 0x200 )
  {
    LODWORD(v194) = 512;
    LODWORD(v193) = v108;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1285, ASSERT_TYPE_ASSERT, "( dynamicEdgeEndIndex ) <= ( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "dynamicEdgeEndIndex", "ARRAY_COUNT( selectedEdges )", v193, v194) )
      __debugbreak();
  }
  if ( v26 < v108 )
  {
    _R15 = _RBP + 16 * v98 + 12808;
    v110 = (EdgeId *)(_RBP + 8 * v26 + 4608);
    v111 = v108 - v26;
    __asm
    {
      vmovsd  xmm15, cs:__real@3eb0c6f7a0b5ed8d
      vmovss  xmm10, cs:__real@3f800000
      vmovsd  xmm13, cs:__real@3ff0000000000000
      vxorpd  xmm14, xmm14, xmm14
      vxorps  xmm9, xmm9, xmm9
    }
    v117 = *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x28);
    v118 = 502048;
    while ( 1 )
    {
      if ( !EdgeId::GetIsDynamic(v110) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1289, ASSERT_TYPE_ASSERT, "(edgeId.GetIsDynamic())", "%s\n\tStatic edge encountered in dynamic edge test.", "edgeId.GetIsDynamic()") )
        __debugbreak();
      EntityIndex = EdgeId::GetEntityIndex(v110);
      if ( v118 != EntityIndex )
      {
        Edge_GetEntityTransform(*(const BgHandler **)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x18), v110, (vector4 *)(_RBP + 192));
        v118 = EntityIndex;
      }
      Edge_GetDynamicLineSegment((const vector4 *)(_RBP + 192), v110, (float4 (*)[2])(_RBP + 4576), NULL);
      __asm
      {
        vmovaps xmm6, xmm11
        vmovaps xmm8, xmm12
      }
      _R14 = *(EdgeOctreeQueryCustomClip **)(v117 + 8);
      __asm
      {
        vmovups xmm4, xmmword ptr [rbp+11E0h]
        vmovups xmm0, xmmword ptr [rbp+11F0h]
        vsubps  xmm3, xmm0, xmm4
        vmulps  xmm1, xmm3, xmm3
        vinsertps xmm0, xmm1, xmm1, 8
        vhaddps xmm2, xmm0, xmm0
        vhaddps xmm1, xmm2, xmm2
        vsqrtps xmm7, xmm1
        vmovss  dword ptr [rbp+48h], xmm7
        vcvtss2sd xmm0, xmm7, xmm7
        vcomisd xmm0, xmm15
      }
      if ( v120 | v133 )
        break;
      __asm
      {
        vrcpps  xmm0, xmm7
        vaddps  xmm2, xmm0, xmm0
        vmulps  xmm0, xmm0, xmm0
        vmulps  xmm1, xmm7, xmm0
        vsubps  xmm2, xmm2, xmm1
        vmulps  xmm0, xmm3, xmm2
        vmovups xmmword ptr [rbp+60h], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+0], xmm0
      }
      EdgeOctreeQueryCustomClip::TrimLineSegment(_R14, (const float4 *)(_RBP + 4576), (const float4 *)(_RBP + 96), (float *)((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64), (float *)(_RBP + 72));
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+48h]
        vmovss  xmm0, dword ptr [rbp+0]
        vcomiss xmm1, xmm0
      }
      if ( !v120 )
      {
        __asm
        {
          vshufps xmm0, xmm0, xmm0, 0
          vmulps  xmm0, xmm0, xmmword ptr [rbp+60h]
          vaddps  xmm0, xmm0, xmmword ptr [rbp+11E0h]
          vmovups xmmword ptr [rbp+70h], xmm0
          vshufps xmm1, xmm1, xmm1, 0
          vmulps  xmm0, xmm1, xmmword ptr [rbp+60h]
          vaddps  xmm0, xmm0, xmmword ptr [rbp+11E0h]
          vmovups xmmword ptr [rbp+80h], xmm0
        }
        *(double *)&_XMM0 = Float4PointLineSegmentDistSq((const float4 *)(_RBP + 112), (const float4 *)(_RBP + 128), _R14[1].m_userClipPlanes, (float4 *)(_RBP + 144));
        __asm
        {
          vmovaps xmm9, xmm0
          vcomiss xmm0, dword ptr [r14+90h]
        }
        v141 = v120 | v133;
        if ( v120 | v133 )
        {
          __asm
          {
            vmovaps xmm2, xmmword ptr [rbp+90h]
            vsubss  xmm1, xmm10, xmm2
            vmulss  xmm3, xmm1, dword ptr [rbp+0]
            vmulss  xmm2, xmm2, dword ptr [rbp+48h]
            vaddss  xmm3, xmm3, xmm2
            vdivss  xmm6, xmm3, xmm7
            vcomiss xmm6, cs:__real@00000000
            vcomiss xmm6, xmm10
          }
          if ( v141 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  [rsp+5378h+var_5340], xmm13
              vmovsd  [rsp+5378h+var_5348], xmm14
              vmovsd  [rsp+5378h+outLeafNodeIndexCount], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 381, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *outClosestFraction ) && ( *outClosestFraction ) <= ( 1.0f )", "*outClosestFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&outLeafNodeIndexCount, *(double *)&v192, *(double *)&v193) )
              __debugbreak();
          }
          __asm { vsqrtss xmm8, xmm9, xmm9 }
        }
        __asm { vxorps  xmm9, xmm9, xmm9 }
        goto LABEL_107;
      }
      __asm { vxorps  xmm9, xmm9, xmm9 }
LABEL_113:
      ++v110;
      if ( !--v111 )
      {
        v25 = 0i64;
        goto LABEL_115;
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r14+70h]
      vsubps  xmm1, xmm0, xmm4
      vmulps  xmm2, xmm1, xmm1
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm2, xmm1, xmm1
      vsqrtps xmm8, xmm2
      vmovaps xmm6, xmm9
      vmovups xmm0, xmmword ptr [r14+80h]
      vcomiss xmm0, xmm8
    }
    v141 = !v120;
LABEL_107:
    if ( v141 )
    {
      if ( (unsigned int)v98 >= 0x200 )
      {
        LODWORD(v192) = 512;
        LODWORD(outLeafNodeIndexCount) = v98;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 1306, ASSERT_TYPE_ASSERT, "(unsigned)( selectedEdgeCount ) < (unsigned)( ( sizeof( *array_counter( selectedEdges ) ) + 0 ) )", "selectedEdgeCount doesn't index ARRAY_COUNT( selectedEdges )\n\t%i not in [0, %i)", outLeafNodeIndexCount, v192) )
          __debugbreak();
      }
      *(EdgeId *)(_R15 - 8) = *v110;
      __asm
      {
        vmovss  dword ptr [r15], xmm8
        vmovss  dword ptr [r15+4], xmm6
      }
      ++v98;
      _R15 += 16i64;
    }
    goto LABEL_113;
  }
LABEL_115:
  *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x60) = 0i64;
  *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x68) = 0i64;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+60h]
    vmovdqa xmmword ptr [rbp+60h], xmm0
  }
  ntl::sort<EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *,EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge>((EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *)(_RBP + 12800), (EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *)(_RBP + 16 * v98 + 12800), (EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectedEdge *)(_RBP + 96), *(ntl::random_access_iterator_tag *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 4));
  v165 = 0i64;
  v166 = *(unsigned __int64 **)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x30);
  if ( *v166 < resultPoolSize )
  {
    v167 = (_DWORD *)(_RBP + 12812);
    v168 = *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x38);
    v169 = *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x40);
    do
    {
      if ( v165 >= v98 )
        break;
      *(_QWORD *)(v168 + 8 * *v166) = *(_QWORD *)(v167 - 3);
      *(_DWORD *)(v169 + 4 * (*v166)++) = *v167;
      ++v165;
      v167 += 4;
    }
    while ( *v166 < resultPoolSize );
  }
  v170 = *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
  if ( v170 )
  {
    v171 = 0i64;
    if ( resultPoolSize < 4 )
    {
LABEL_128:
      if ( v25 < resultPoolSize )
      {
        v177 = (_DWORD *)(_RBP + 16 * v171 + 12808);
        v178 = (_DWORD *)(v170 + 4 * v25);
        do
        {
          if ( v171 >= v98 )
            break;
          *v178 = *v177;
          ++v171;
          ++v178;
          v177 += 4;
          ++v25;
        }
        while ( v25 < resultPoolSize );
      }
    }
    else
    {
      v172 = (_DWORD *)(_RBP + 12808);
      v173 = (_DWORD *)(v170 + 8);
      while ( v171 < v98 )
      {
        *(v173 - 2) = *v172;
        v174 = v171 + 1;
        if ( v174 >= v98 )
          break;
        *(v173 - 1) = v172[4];
        v175 = v174 + 1;
        if ( v175 >= v98 )
          break;
        *v173 = v172[8];
        v176 = v175 + 1;
        if ( v176 >= v98 )
          break;
        v173[1] = v172[12];
        v171 = v176 + 1;
        v172 += 16;
        v25 += 4i64;
        v173 += 4;
        if ( v25 >= resultPoolSize - 3 )
        {
          v170 = *(_QWORD *)(((unsigned __int64)v195 & 0xFFFFFFFFFFFFFFE0ui64) + 0x20);
          goto LABEL_128;
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v207;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
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
bool EdgeOctreeQueryFrustum::IntersectsLineSegment(EdgeOctreeQueryFrustum *this, const float4 (*r_lineSegment)[2], float *outClosestFraction, float *outDist)
{
  bool result; 
  const float4 *v50; 
  const float4 *v51; 
  const float4 *v52; 
  const float4 *v79; 
  const float4 *v80; 
  const float4 *v81; 
  char v82; 
  char v83; 
  float *r_inOutTMax; 
  float *r_inOutTMaxa; 
  double v95; 
  double v96; 
  double v97; 
  double v98; 
  float r_inOutTMin; 
  float v100; 
  float4 point_8; 
  float4 outSegClosestFraction_8; 
  float4 r_lineSegmentDir_8; 
  float4 r_outS; 
  float4 r_outT; 
  float4 r_linePointA; 
  char v111; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  _RSI = outDist;
  _R14 = outClosestFraction;
  _RBX = r_lineSegment;
  _RDI = this;
  if ( !outClosestFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 442, ASSERT_TYPE_ASSERT, "(outClosestFraction)", (const char *)&queryFormat, "outClosestFraction") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 443, ASSERT_TYPE_ASSERT, "(outDist)", (const char *)&queryFormat, "outDist") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+10h]
    vsubps  xmm4, xmm0, xmmword ptr [rbx]
    vmulps  xmm1, xmm4, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm3, xmm0
    vrcpps  xmm1, xmm3
    vmulps  xmm0, xmm1, xmm1
    vmulps  xmm2, xmm0, xmm3
    vaddps  xmm1, xmm1, xmm1
    vsubps  xmm10, xmm1, xmm2
    vmulps  xmm0, xmm4, xmm10
    vxorps  xmm9, xmm9, xmm9
    vmovups xmmword ptr [rsp+150h+r_lineSegmentDir+8], xmm0
    vmovss  [rsp+150h+r_inOutTMin], xmm9
    vmovss  [rsp+150h+var_10C], xmm3
  }
  EdgeOctreeQueryShape::TrimLineSegmentByPlanes((const float4 *)_RBX, &r_lineSegmentDir_8, _RDI->m_shape.m_planes, 6ui64, &r_inOutTMin, &v100);
  EdgeOctreeQueryCustomClip::TrimLineSegment(&_RDI->m_customClip, (const float4 *)_RBX, &r_lineSegmentDir_8, &r_inOutTMin, &v100);
  __asm
  {
    vmovss  xmm0, [rsp+150h+r_inOutTMin]
    vmovss  xmm4, [rsp+150h+var_10C]
    vcomiss xmm0, xmm4
  }
  if ( v82 )
  {
    __asm
    {
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm0, xmm0, xmmword ptr [rsp+150h+r_lineSegmentDir+8]
      vaddps  xmm3, xmm0, xmmword ptr [rbx]
      vmovaps xmmword ptr [rsp+150h+var_48+8], xmm6
      vmovaps [rsp+150h+var_58+8], xmm7
      vmovaps xmm0, xmm4
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm0, xmm0, xmmword ptr [rsp+150h+r_lineSegmentDir+8]
      vaddps  xmm1, xmm0, xmmword ptr [rbx]
      vsubps  xmm0, xmm1, xmm3
      vmovdqa [rbp+50h+var_A0], xmm1
      vmulps  xmm1, xmm0, xmm0
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm0, xmm0, xmm0
      vsqrtps xmm7, xmm0
      vcomiss xmm7, xmm9
      vmovaps [rsp+150h+var_68+8], xmm8
      vmovdqa xmmword ptr [rbp+50h+r_linePointA.v], xmm3
      vxorpd  xmm8, xmm8, xmm8
      vmovsd  xmm0, cs:__real@47efffffe0000000
      vmovsd  [rsp+150h+var_118], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+150h+var_120], xmm8
      vmovsd  [rsp+150h+r_inOutTMax], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 479, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( Float4ExtractX( lineSegmentTrimmedLength ) ) && ( Float4ExtractX( lineSegmentTrimmedLength ) ) <= ( 3.402823466e+38F )", "Float4ExtractX( lineSegmentTrimmedLength ) not in [0.0f, FLT_MAX]\n\t%g not in [%g, %g]", *(double *)&r_inOutTMax, v95, v97) )
      __debugbreak();
    EdgeOctreeQueryShape::Float4ClosestApproachOfTwoLines(&r_linePointA, &r_lineSegmentDir_8, &_RDI->m_shape.m_nearOrigin, &_RDI->m_shape.m_forward, &r_outS, &r_outT);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+50h+r_outS.v]
      vmovups xmm2, xmm7
      vxorps  xmm1, xmm1, xmm1
    }
    Float4Clamp(v51, v50, v52, &r_outS);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+50h+r_outS.v]
      vmulps  xmm1, xmm0, xmmword ptr [rsp+150h+r_lineSegmentDir+8]
      vaddps  xmm2, xmm1, xmmword ptr [rbp+50h+r_linePointA.v]
      vmovups xmmword ptr [rsp+150h+point.v+8], xmm2
    }
    *(double *)&_XMM0 = Float4PointLineSegmentDistSq(&_RDI->m_shape.m_nearOrigin, &_RDI->m_shape.m_farOrigin, &point_8, &outSegClosestFraction_8);
    __asm
    {
      vmovups xmm2, xmmword ptr [rdi+170h]
      vmulps  xmm2, xmm2, xmmword ptr [rsp+150h+outSegClosestFraction.v+8]
      vmulss  xmm3, xmm2, dword ptr [rdi+1F4h]
      vmovss  xmm7, cs:__real@3f800000
      vsqrtss xmm0, xmm0, xmm0
      vmulss  xmm1, xmm0, dword ptr [rdi+1F0h]
      vaddss  xmm4, xmm3, xmm1
      vmovss  dword ptr [rsi], xmm4
      vmovups xmm1, xmmword ptr [rdi+190h]
      vmulps  xmm1, xmm1, xmmword ptr [rsp+150h+r_lineSegmentDir+8]
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vandnps xmm2, xmm0, xmm1
      vmulss  xmm1, xmm2, dword ptr [rdi+1F8h]
      vsubss  xmm0, xmm7, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm3, xmm2, xmm4
      vbroadcastss xmm4, [rsp+150h+r_inOutTMin]
      vaddps  xmm2, xmm4, xmmword ptr [rbp+50h+r_outS.v]
      vmulps  xmm0, xmm10, xmm2
      vmovss  dword ptr [rsi], xmm3
      vmovups xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vxorps  xmm1, xmm1, xmm1
      vmovups xmmword ptr [rsp+150h+point.v+8], xmm0
    }
    Float4Clamp(v80, v79, v81, &point_8);
    __asm
    {
      vmovaps xmm0, xmmword ptr [rsp+150h+point.v+8]
      vcomiss xmm0, xmm9
      vmovaps xmm6, xmmword ptr [rsp+150h+var_48+8]
      vmovss  dword ptr [r14], xmm0
    }
    if ( v82 )
      goto LABEL_13;
    __asm { vcomiss xmm0, xmm7 }
    if ( !(v82 | v83) )
    {
LABEL_13:
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+150h+var_118], xmm0
        vmovsd  [rsp+150h+var_120], xmm8
        vmovsd  [rsp+150h+r_inOutTMax], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 516, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *outClosestFraction ) && ( *outClosestFraction ) <= ( 1.0f )", "*outClosestFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&r_inOutTMaxa, v96, v98) )
        __debugbreak();
    }
    __asm { vmovaps xmm8, [rsp+150h+var_68+8] }
    result = 1;
    __asm { vmovaps xmm7, [rsp+150h+var_58+8] }
  }
  else
  {
    result = 0;
  }
  _R11 = &v111;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
EdgeOctreeQuerySphere::IntersectsLineSegment
==============
*/
bool EdgeOctreeQuerySphere::IntersectsLineSegment(EdgeOctreeQuerySphere *this, const float4 (*r_lineSegment)[2], float *outClosestFraction, float *outDist)
{
  bool v12; 
  bool v13; 
  bool result; 
  char v40; 
  bool v49; 
  double v64; 
  double v65; 
  double v66; 
  float r_inOutTMin; 
  float r_inOutTMax[3]; 
  float4 outSegClosestFraction; 
  float4 lineSegPointA; 
  float4 lineSegPointB; 
  float4 r_lineSegmentDir; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  _RBX = outDist;
  _RSI = outClosestFraction;
  _RDI = r_lineSegment;
  _RBP = this;
  if ( !outClosestFraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 335, ASSERT_TYPE_ASSERT, "(outClosestFraction)", (const char *)&queryFormat, "outClosestFraction") )
    __debugbreak();
  v12 = _RBX == NULL;
  if ( !_RBX )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 336, ASSERT_TYPE_ASSERT, "(outDist)", (const char *)&queryFormat, "outDist");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+10h]
    vsubps  xmm3, xmm0, xmmword ptr [rdi]
    vmulps  xmm1, xmm3, xmm3
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm6, xmm0
    vcvtss2sd xmm0, xmm6, xmm6
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  [rsp+0F8h+r_inOutTMax], xmm6
  }
  if ( v12 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+70h]
      vsubps  xmm1, xmm0, xmmword ptr [rdi]
      vmulps  xmm2, xmm1, xmm1
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsqrtps xmm2, xmm0
    }
    *_RSI = 0.0;
    __asm
    {
      vmovss  dword ptr [rbx], xmm2
      vmovups xmm0, xmmword ptr [rbp+80h]
      vcomiss xmm0, xmm2
    }
    result = 1;
  }
  else
  {
    __asm
    {
      vrcpps  xmm1, xmm6
      vmulps  xmm0, xmm1, xmm1
      vmulps  xmm2, xmm0, xmm6
      vaddps  xmm1, xmm1, xmm1
      vsubps  xmm2, xmm1, xmm2
      vmulps  xmm0, xmm2, xmm3
      vmovaps [rsp+0F8h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
      vmovups xmmword ptr [rsp+0F8h+r_lineSegmentDir.v], xmm0
      vmovss  [rsp+0F8h+r_inOutTMin], xmm7
    }
    EdgeOctreeQueryCustomClip::TrimLineSegment(&_RBP->m_customClip, (const float4 *)_RDI, &r_lineSegmentDir, &r_inOutTMin, r_inOutTMax);
    __asm
    {
      vmovss  xmm4, [rsp+0F8h+r_inOutTMax]
      vmovss  xmm0, [rsp+0F8h+r_inOutTMin]
      vcomiss xmm4, xmm0
    }
    if ( v40 )
    {
      result = 0;
    }
    else
    {
      __asm
      {
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm0, xmm0, xmmword ptr [rsp+0F8h+r_lineSegmentDir.v]
        vaddps  xmm1, xmm0, xmmword ptr [rdi]
        vmovaps xmm0, xmm4
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm0, xmm0, xmmword ptr [rsp+0F8h+r_lineSegmentDir.v]
        vmovups xmmword ptr [rsp+0F8h+lineSegPointA.v], xmm1
        vaddps  xmm1, xmm0, xmmword ptr [rdi]
        vmovaps [rsp+0F8h+var_58], xmm8
        vmovups xmmword ptr [rsp+0F8h+lineSegPointB.v], xmm1
      }
      *(double *)&_XMM0 = Float4PointLineSegmentDistSq(&lineSegPointA, &lineSegPointB, &_RBP->m_midpoint, &outSegClosestFraction);
      __asm
      {
        vcomiss xmm0, dword ptr [rbp+90h]
        vmovaps xmm8, xmm0
      }
      v49 = v40 | v12;
      if ( v40 | v12 )
      {
        __asm
        {
          vmovaps xmm2, xmmword ptr [rsp+0F8h+outSegClosestFraction.v]
          vmovss  xmm4, cs:__real@3f800000
          vsubss  xmm1, xmm4, xmm2
          vmulss  xmm3, xmm1, [rsp+0F8h+r_inOutTMin]
          vmulss  xmm2, xmm2, [rsp+0F8h+r_inOutTMax]
          vaddss  xmm3, xmm3, xmm2
          vdivss  xmm1, xmm3, xmm6
          vcomiss xmm1, xmm7
          vmovss  dword ptr [rsi], xmm1
          vcomiss xmm1, xmm4
        }
        if ( v49 )
        {
          __asm
          {
            vmovsd  xmm0, cs:__real@3ff0000000000000
            vmovsd  [rsp+0F8h+var_C0], xmm0
            vcvtss2sd xmm2, xmm1, xmm1
            vxorpd  xmm1, xmm1, xmm1
            vmovsd  [rsp+0F8h+var_C8], xmm1
            vmovsd  [rsp+0F8h+var_D0], xmm2
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edge_octree.h", 381, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( *outClosestFraction ) && ( *outClosestFraction ) <= ( 1.0f )", "*outClosestFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v64, v65, v66) )
            __debugbreak();
        }
        __asm
        {
          vsqrtss xmm0, xmm8, xmm8
          vmovss  dword ptr [rbx], xmm0
        }
      }
      __asm { vmovaps xmm8, [rsp+0F8h+var_58] }
      result = v49;
    }
    __asm { vmovaps xmm7, [rsp+0F8h+var_48] }
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
  return result;
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
  unsigned __int64 v18; 
  void (__fastcall **m_nodeBlendFunc)(__int64, __int64, __int128 *); 
  char v27; 
  char v28; 
  const PMROctreeNode *j; 
  PMROctreeNode *r_nodea; 
  float4 r_outMaxExtent; 
  float4 r_outMinExtent; 
  __int128 v36; 

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
        _RSI = &m_queryShape->m_shape;
        v18 = 0i64;
        m_nodeBlendFunc = (void (__fastcall **)(__int64, __int64, __int128 *))m_queryShape->m_nodeBlendFunc;
        while ( 1 )
        {
          __asm
          {
            vmovups xmm1, xmmword ptr [rsp+108h+r_outMaxExtent.v]
            vmovups xmm0, xmmword ptr [rsp+108h+r_outMinExtent.v]
          }
          (*m_nodeBlendFunc)(v16, v15, &v36);
          __asm
          {
            vmovups xmm1, xmmword ptr [rsi]
            vmulps  xmm1, xmm1, [rsp+108h+var_68]
            vinsertps xmm2, xmm1, xmm1, 8
            vhaddps xmm3, xmm2, xmm2
            vhaddps xmm1, xmm3, xmm3
            vcomiss xmm1, dword ptr [rsi+0Ch]
          }
          if ( v27 )
            break;
          ++v18;
          ++m_nodeBlendFunc;
          _RSI = (EdgeFrustumQueryShape *)((char *)_RSI + 16);
          if ( v18 >= 6 )
          {
            v28 = 1;
            goto LABEL_14;
          }
        }
        v28 = 0;
LABEL_14:
        v6 = this;
        v10 |= v28 << i;
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
  char v25; 
  char v26; 
  int v27; 
  unsigned __int8 v28; 
  float4 r_outMaxExtent; 
  float4 r_outMinExtent; 

  if ( (r_node->flags & 2) == 0 )
  {
    v10 = 0;
    v11 = &mapEdgeList->edgeOctreeNodeSets[(unsigned __int64)r_node->childNodeSetIndex];
    v12 = 0i64;
    v28 = 0;
    v13 = 0i64;
    v14 = v11;
    do
    {
      if ( (v14->node[0].flags & 1) == 0 )
      {
        _RBX = this->m_queryShape;
        EdgeOctreeQueryShape::Float4CalcNodeExtents(r_octree, v14->node, &r_outMinExtent, &r_outMaxExtent);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+0E8h+r_outMaxExtent.v]
          vminps  xmm2, xmm0, xmmword ptr [rbx+70h]
          vmovups xmm1, xmmword ptr [rsp+0E8h+r_outMinExtent.v]
          vmaxps  xmm3, xmm1, xmm2
          vsubps  xmm1, xmm3, xmmword ptr [rbx+70h]
          vmulps  xmm2, xmm1, xmm1
          vinsertps xmm0, xmm2, xmm2, 8
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm2, xmm1, xmm1
          vcomiss xmm2, dword ptr [rbx+90h]
        }
        v10 = ((v25 | v26) << v13) | v28;
        v28 = v10;
      }
      ++v13;
      v14 = (PMROctreeNodeSet *)((char *)v14 + 16);
    }
    while ( v13 < 8 );
    v27 = v10;
    while ( ((1 << v12) & v27) == 0 || !EdgeOctreeQuery<EdgeOctreeQuerySphere>::SelectIntersectingLeafNodes(this, mapEdgeList, r_octree, v11->node, leafNodeIndexPool, outLeafNodeIndexCount) )
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

