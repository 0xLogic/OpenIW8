/*
==============
CG_Edge_DrawQueryResults
==============
*/

void __fastcall CG_Edge_DrawQueryResults(const BgHandler *handler, unsigned __int64 edgeCount, const EdgeId *edgeIdPool, const float *edgeFractionPool, const float *edgeDistPool, float maxQueryDistance, int edgeFlagIndex)
{
  ?CG_Edge_DrawQueryResults@@YAXPEBVBgHandler@@_KQEBUEdgeId@@QEBM3MH@Z(handler, edgeCount, edgeIdPool, edgeFractionPool, edgeDistPool, maxQueryDistance, edgeFlagIndex);
}

/*
==============
FlaggedEdge::FlaggedEdge
==============
*/

void __fastcall FlaggedEdge::FlaggedEdge(FlaggedEdge *this)
{
  ??0FlaggedEdge@@QEAA@XZ(this);
}

/*
==============
CG_Edge_DrawDebug
==============
*/

void __fastcall CG_Edge_DrawDebug(const LocalClientNum_t localClientNum)
{
  ?CG_Edge_DrawDebug@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Edge_DrawQueryResults
==============
*/

void __fastcall CG_Edge_DrawQueryResults(const BgHandler *handler, const ntl::fixed_set<FlaggedEdge,512,ntl::less<FlaggedEdge,FlaggedEdge> > *edges, float maxQueryDistance, int edgeFlagIndex)
{
  ?CG_Edge_DrawQueryResults@@YAXPEBVBgHandler@@AEBV?$fixed_set@UFlaggedEdge@@$0CAA@U?$less@UFlaggedEdge@@U1@@ntl@@@ntl@@MH@Z(handler, edges, maxQueryDistance, edgeFlagIndex);
}

/*
==============
CG_Edge_DrawEdgeListInfo
==============
*/

void __fastcall CG_Edge_DrawEdgeListInfo(const LocalClientNum_t localClientNum)
{
  ?CG_Edge_DrawEdgeListInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Edge_CreateDevGui
==============
*/

void __fastcall CG_Edge_CreateDevGui(const LocalClientNum_t localClientNum)
{
  ?CG_Edge_CreateDevGui@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
operator<
==============
*/

bool __fastcall operator<(const ConeTargetInfo *lhs, const ConeTargetInfo *rhs)
{
  return ??M@YA_NAEBVConeTargetInfo@@0@Z(lhs, rhs);
}

/*
==============
CG_Edge_DrawDebugEnabled
==============
*/

bool __fastcall CG_Edge_DrawDebugEnabled()
{
  return ?CG_Edge_DrawDebugEnabled@@YA_NXZ();
}

/*
==============
operator<
==============
*/

bool __fastcall operator<(const ConeTargetHitInfo *lhs, const ConeTargetHitInfo *rhs)
{
  return ??M@YA_NAEBUConeTargetHitInfo@@0@Z(lhs, rhs);
}

/*
==============
FlaggedEdge::operator<
==============
*/

bool __fastcall FlaggedEdge::operator<(FlaggedEdge *this, const FlaggedEdge *rhs)
{
  return ??MFlaggedEdge@@QEBA_NAEBU0@@Z(this, rhs);
}

/*
==============
CG_Edge_FlushDebugPolys
==============
*/

void __fastcall CG_Edge_FlushDebugPolys(DebugGlobals *debugGlobals)
{
  ?CG_Edge_FlushDebugPolys@@YAXPEAUDebugGlobals@@@Z(debugGlobals);
}

/*
==============
operator<
==============
*/
bool operator<(const ConeTargetHitInfo *lhs, const ConeTargetHitInfo *rhs)
{
  int priority; 

  priority = lhs->priority;
  if ( priority == rhs->priority )
    return lhs->distSq < rhs->distSq;
  else
    return priority < rhs->priority;
}

/*
==============
operator<
==============
*/
bool operator<(const ConeTargetInfo *lhs, const ConeTargetInfo *rhs)
{
  return lhs->m_hitResults.priority < rhs->m_hitResults.priority;
}

/*
==============
FlaggedEdge::FlaggedEdge
==============
*/
void FlaggedEdge::FlaggedEdge(FlaggedEdge *this)
{
  *(_QWORD *)&this->fraction = 0i64;
  EdgeId::Clear(&this->id);
}

/*
==============
FlaggedEdge::operator<
==============
*/
bool FlaggedEdge::operator<(FlaggedEdge *this, const FlaggedEdge *rhs)
{
  return *(_QWORD *)&this->id < *(_QWORD *)&rhs->id;
}

/*
==============
CG_Edge_CreateDevGui
==============
*/
void CG_Edge_CreateDevGui(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int cmdsize; 
  int v4; 
  __int64 i; 

  v1 = localClientNum;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v2 = truncate_cast<int,unsigned __int64>(0x12ui64);
  cmdsize = s_cmd_superUser_textArray[v1].cmdsize;
  v4 = v2 + 1;
  if ( cmdsize + v2 + 1 <= s_cmd_superUser_textArray[v1].maxsize )
  {
    for ( i = cmdsize - 1; i >= 0; --i )
      s_cmd_superUser_textArray[v1].data[v4 + i] = s_cmd_superUser_textArray[v1].data[i];
    memcpy_0(s_cmd_superUser_textArray[v1].data, "exec devgui_edges\n", v4 - 1);
    s_cmd_superUser_textArray[v1].data[v4 - 1] = 10;
    s_cmd_superUser_textArray[v1].cmdsize += v4;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
CG_Edge_DrawDebug
==============
*/
void CG_Edge_DrawDebug(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  unsigned __int64 unsignedInt; 
  MapEnts *mapEnts; 
  __int64 i; 
  const MapEdgeList *v14; 
  __int64 staticQueryTypes; 
  unsigned __int64 v16; 
  PMROctreeMetadata *edgeOctrees; 
  const vec4_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  vec4_t color; 

  v1 = DCONST_DVARBOOL_edge_debugEdgeListInfo;
  if ( !DCONST_DVARBOOL_edge_debugEdgeListInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugEdgeListInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    CG_Edge_DrawEdgeListInfo(localClientNum);
  v3 = DCONST_DVARBOOL_edge_debugEdgeListWorld;
  if ( !DCONST_DVARBOOL_edge_debugEdgeListWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugEdgeListWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    CG_Edge_DrawEdgeListWorld(localClientNum);
  if ( cm.isInUse && cm.mapEnts )
  {
    v4 = DCONST_DVARINT_edge_debugDraw;
    if ( !DCONST_DVARINT_edge_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.integer )
      goto LABEL_60;
    v5 = DCONST_DVARBOOL_edge_debugDraw_adjacency;
    if ( !DCONST_DVARBOOL_edge_debugDraw_adjacency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_adjacency") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
      goto LABEL_60;
    v6 = DCONST_DVARBOOL_edge_debugDraw_octree;
    if ( !DCONST_DVARBOOL_edge_debugDraw_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_octree") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
LABEL_60:
      v7 = DCONST_DVARINT_edge_debugDraw;
      if ( !DCONST_DVARINT_edge_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.integer )
        CG_Edge_DrawDebugEdges(localClientNum);
      v8 = DCONST_DVARBOOL_edge_debugDraw_adjacency;
      if ( !DCONST_DVARBOOL_edge_debugDraw_adjacency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_adjacency") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
        CG_Edge_DrawDebugAdjacency(localClientNum);
      v9 = DCONST_DVARBOOL_edge_debugDraw_octree;
      if ( !DCONST_DVARBOOL_edge_debugDraw_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_octree") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
      {
        v10 = DCONST_DVARINT_edge_debugDrawBucket_octree;
        if ( !DCONST_DVARINT_edge_debugDrawBucket_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawBucket_octree") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        unsignedInt = v10->current.unsignedInt;
        mapEnts = cm.mapEnts;
        if ( !cm.mapEnts )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 688, (AssertType)cm.mapEnts, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
            __debugbreak();
          mapEnts = cm.mapEnts;
        }
        for ( i = 0i64; (unsigned int)i < mapEnts->numEdgeLists; i = (unsigned int)(i + 1) )
        {
          v14 = mapEnts->edgeLists[i];
          if ( v14 )
          {
            staticQueryTypes = v14->staticQueryTypes;
            if ( _bittest64(&staticQueryTypes, unsignedInt) )
            {
              v16 = 0i64;
              if ( v14->numEdgeOctrees )
              {
                edgeOctrees = v14->edgeOctrees;
                while ( edgeOctrees->edgeBucket != 1 << unsignedInt )
                {
                  ++v16;
                  ++edgeOctrees;
                  if ( v16 >= v14->numEdgeOctrees )
                    goto LABEL_57;
                }
                if ( edgeOctrees )
                {
                  if ( (edgeOctrees->flags[0] & 1) != 0 )
                  {
                    v18 = &bg_edgeDebugBucketColors[(int)unsignedInt];
                    v19 = 0.66000003 * v18->v[0];
                    v20 = 0.66000003 * v18->v[2];
                    color.v[1] = 0.66000003 * v18->v[1];
                    v21 = v18->v[3];
                    color.v[0] = v19;
                    color.v[2] = v20;
                    color.v[3] = v21;
                    CG_Edge_DrawDebugOctree(v14, edgeOctrees, &edgeOctrees->minExtent, &edgeOctrees->rootNode, &color);
                    mapEnts = cm.mapEnts;
                  }
                }
              }
            }
          }
LABEL_57:
          ;
        }
      }
    }
  }
}

/*
==============
CG_Edge_DrawDebugAdjacency
==============
*/
void CG_Edge_DrawDebugAdjacency(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  RefdefView *p_view; 
  const dvar_t *v5; 
  __int64 integer; 
  unsigned __int8 v7; 
  float v8; 
  float v9; 
  float v10; 
  CgHandler *Handler; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  char *v13; 
  unsigned __int64 v14; 
  edgeQueryBucket_t v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned int EdgeIndex; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v21; 
  unsigned __int64 v22; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v25; 
  ntl::internal::pool_allocator_freelist<64> *v26; 
  char *v27; 
  ntl::red_black_tree_node_base *v28; 
  ntl::red_black_tree_node_base *next; 
  unsigned __int64 AdjacentEdges; 
  AdjacentEdgeInfo *p_outAdjacentEdgeInfo; 
  ntl::red_black_tree_node_base *v32; 
  ntl::red_black_tree_node_base *v33; 
  char v34; 
  EdgeId id; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  EdgeId otherId; 
  unsigned __int64 v39; 
  __int64 m_edgeIndex; 
  unsigned __int64 v41; 
  unsigned __int64 v42; 
  ntl::red_black_tree_node_base *v43; 
  ntl::red_black_tree_node_base *v44; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v47; 
  EdgeDebugPolys *v48; 
  int vertCount; 
  __int64 polyCount; 
  __int64 v51; 
  __int64 v52; 
  ntl::red_black_tree_node_base *v53; 
  ntl::red_black_tree_node_base *v54; 
  ntl::red_black_tree_node_base *v55; 
  ntl::red_black_tree_node_base *v56; 
  __int64 nearDist; 
  __int64 farDist; 
  unsigned __int64 outResultCount; 
  ntl::red_black_tree_node_base *v60; 
  FlaggedEdge v61; 
  int v62; 
  LocalClientNum_t v63; 
  CgHandler *v64; 
  ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> v65; 
  ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> result; 
  vec3_t outOrg; 
  __int64 v68; 
  EdgeOctreeQueryFrustum v69; 
  ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare> v70; 
  ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge> > v71; 
  AdjacentEdgeInfo outAdjacentEdgeInfo; 
  __int128 v73; 
  float resultFractionPool[512]; 
  float resultDistancePool[512]; 
  EdgeId resultIdPool[512]; 

  v2 = alloca(v1);
  v68 = -2i64;
  v63 = localClientNum;
  p_view = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  v5 = DCONST_DVARINT_edge_debugDrawFlag;
  if ( !DCONST_DVARINT_edge_debugDrawFlag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawFlag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  if ( (unsigned int)integer >= 5 )
  {
    LODWORD(farDist) = 5;
    LODWORD(nearDist) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 498, ASSERT_TYPE_ASSERT, "(unsigned)( edgeFlagIndex ) < (unsigned)( 5 )", "edgeFlagIndex doesn't index EDGE_FLAG_COUNT\n\t%i not in [0, %i)", nearDist, farDist) )
      __debugbreak();
  }
  v7 = 1 << integer;
  v62 = (unsigned __int8)(1 << integer);
  v8 = bg_edgeDebugColors[integer].v[0];
  v9 = bg_edgeDebugColors[integer].v[1];
  v10 = bg_edgeDebugColors[integer].v[2];
  RefdefView_GetOrg(p_view, &outOrg);
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v69, &outOrg, &p_view->axis, 0.78539819, 0.44178647, p_view->zNear + 1.0, 1024.0);
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v69, centerBias);
  Handler = CgHandler::getHandler(localClientNum);
  v64 = Handler;
  p_m_freelist = &v71.m_freelist;
  v13 = &v71.m_data.m_buffer[98256];
  do
  {
    *(_QWORD *)v13 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v13;
    v13 -= 48;
  }
  while ( v13 + 48 > (char *)&v71 );
  v71.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v71.m_size = 0i64;
  v71.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v71.m_endNodeBase.mp_parent = NULL;
  v71.m_endNodeBase.mp_left = &v71.m_endNodeBase;
  v71.m_endNodeBase.mp_right = &v71.m_endNodeBase;
  v14 = 0i64;
  v60 = NULL;
  do
  {
    v15 = bg_buckets[v14];
    outResultCount = 0i64;
    outAdjacentEdgeInfo.id.m_entityIndex = 16777208;
    outAdjacentEdgeInfo.otherId.m_edgeIndex = 1;
    LOBYTE(outAdjacentEdgeInfo.id.m_edgeIndex) = v15;
    *(_QWORD *)outAdjacentEdgeInfo.fractions = &v69;
    EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute((EdgeOctreeQuery<EdgeOctreeQueryFrustum> *)&outAdjacentEdgeInfo, Handler, resultIdPool, resultFractionPool, resultDistancePool, 0x200ui64, &outResultCount, NULL);
    v16 = 0i64;
    v17 = outResultCount;
    if ( !outResultCount )
      goto LABEL_42;
    do
    {
      outResultCount = (unsigned __int64)resultIdPool[v16];
      EdgeIndex = EdgeId::GetEdgeIndex((EdgeId *)&outResultCount);
      if ( (v7 & MapEdgeList_LookupMetadata(EdgeIndex)->flags[0]) == 0 )
        goto LABEL_40;
      v61.fraction = 0.0;
      v61.score = 0.0;
      EdgeId::Clear(&v61.id);
      v61.id = (EdgeId)outResultCount;
      v61.fraction = resultFractionPool[v16];
      v61.score = resultDistancePool[v16];
      p_m_endNodeBase = &v71.m_endNodeBase;
      mp_parent = v71.m_endNodeBase.mp_parent;
      v21 = 1;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v22 = *(_QWORD *)&mp_parent[1].m_color;
        v21 = outResultCount < v22;
        if ( outResultCount >= v22 )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( v21 )
      {
        if ( p_m_endNodeBase == v71.m_endNodeBase.mp_left )
        {
          ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v71, (ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> *)&v65, p_m_endNodeBase, &v61, 1, 0);
          goto LABEL_40;
        }
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
        {
          mp_left = p_m_endNodeBase->mp_left;
          if ( mp_left )
          {
            for ( i = mp_left->mp_right; i; i = i->mp_right )
              mp_left = i;
          }
          else
          {
            mp_left = p_m_endNodeBase->mp_parent;
            if ( p_m_endNodeBase == mp_left->mp_left )
            {
              do
              {
                v25 = mp_left;
                mp_left = mp_left->mp_parent;
              }
              while ( v25 == mp_left->mp_left );
            }
          }
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_right;
        }
      }
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( *(_QWORD *)&mp_left[1].m_color < *(_QWORD *)&v61.id )
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v71, &result, p_m_endNodeBase, &v61, 0, 0);
LABEL_40:
      ++v16;
    }
    while ( v16 < v17 );
    v14 = (unsigned __int64)v60;
    Handler = v64;
LABEL_42:
    v60 = (ntl::red_black_tree_node_base *)++v14;
  }
  while ( v14 < 4 );
  v26 = &v70.m_freelist;
  v27 = &v70.m_data.m_buffer[65472];
  do
  {
    *(_QWORD *)v27 = v26;
    v26 = (ntl::internal::pool_allocator_freelist<64> *)v27;
    v27 -= 64;
  }
  while ( v27 + 64 > (char *)&v70 );
  v70.m_freelist.m_head.mp_next = &v26->m_head;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v70.m_size = 0i64;
  v70.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v70.m_endNodeBase.mp_parent = NULL;
  v28 = &v70.m_endNodeBase;
  v70.m_endNodeBase.mp_left = &v70.m_endNodeBase;
  v70.m_endNodeBase.mp_right = &v70.m_endNodeBase;
  next = v71.m_endNodeBase.mp_left;
  v60 = v71.m_endNodeBase.mp_left;
  if ( v71.m_endNodeBase.mp_left != &v71.m_endNodeBase )
  {
    while ( 1 )
    {
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      AdjacentEdges = Edge_GetAdjacentEdges(*(EdgeId *)&next[1].m_color, (edgeFlags_t)v7, &outAdjacentEdgeInfo);
      if ( AdjacentEdges )
        break;
LABEL_92:
      next = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(next);
      v60 = next;
      if ( next == &v71.m_endNodeBase )
      {
        v28 = v70.m_endNodeBase.mp_left;
        Handler = v64;
        goto LABEL_94;
      }
    }
    p_outAdjacentEdgeInfo = &outAdjacentEdgeInfo;
    while ( 2 )
    {
      v32 = &v70.m_endNodeBase;
      v33 = v70.m_endNodeBase.mp_parent;
      v34 = 1;
      if ( v70.m_endNodeBase.mp_parent )
      {
        id = p_outAdjacentEdgeInfo->id;
        v36 = (unsigned int)*(_QWORD *)&p_outAdjacentEdgeInfo->otherId | *(_QWORD *)&p_outAdjacentEdgeInfo->otherId & 0xFFFFFFFF00000000ui64;
        v37 = (unsigned int)*(_QWORD *)&p_outAdjacentEdgeInfo->id | *(_QWORD *)&p_outAdjacentEdgeInfo->id & 0xFFFFFFFF00000000ui64;
        otherId = p_outAdjacentEdgeInfo->id;
        if ( v36 <= v37 )
          otherId = p_outAdjacentEdgeInfo->otherId;
        if ( v36 >= v37 )
          id = p_outAdjacentEdgeInfo->otherId;
        v39 = HIDWORD(*(unsigned __int64 *)&otherId);
        m_edgeIndex = otherId.m_edgeIndex;
        do
        {
          v32 = v33;
          v41 = *(_QWORD *)&v33[1].m_color;
          v42 = (unsigned int)v33[1].mp_left | (unsigned __int64)v33[1].mp_left & 0xFFFFFFFF00000000ui64;
          v43 = (ntl::red_black_tree_node_base *)v41;
          if ( v42 <= v41 )
            v43 = v33[1].mp_left;
          if ( v42 >= v41 )
            v41 = (unsigned __int64)v33[1].mp_left;
          v44 = (ntl::red_black_tree_node_base *)(m_edgeIndex | (v39 << 32));
          if ( v44 < v43 || v44 == v43 && (id.m_edgeIndex | (HIDWORD(*(unsigned __int64 *)&id) << 32)) < ((unsigned int)v41 | (HIDWORD(v41) << 32)) )
          {
            v33 = v33->mp_left;
            v34 = 1;
          }
          else
          {
            v34 = 0;
            v33 = v33->mp_right;
          }
        }
        while ( v33 );
      }
      mp_right = v32;
      if ( v34 )
      {
        if ( v32 == v70.m_endNodeBase.mp_left )
        {
          ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node(&v70, (ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> *)&result, v32, p_outAdjacentEdgeInfo, 1, 0);
          goto LABEL_90;
        }
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( v32->m_color || v32->mp_parent->mp_parent != v32 )
        {
          mp_right = v32->mp_left;
          if ( mp_right )
          {
            for ( j = mp_right->mp_right; j; j = j->mp_right )
              mp_right = j;
          }
          else
          {
            mp_right = v32->mp_parent;
            if ( v32 == mp_right->mp_left )
            {
              do
              {
                v47 = mp_right;
                mp_right = mp_right->mp_parent;
              }
              while ( v47 == mp_right->mp_left );
            }
          }
        }
        else
        {
          mp_right = v32->mp_right;
        }
      }
      if ( !mp_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( AdjacentEdgeInfoCompare::operator()(&v70.m_keyCompare, (const AdjacentEdgeInfo *)&mp_right[1], p_outAdjacentEdgeInfo) )
        ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node(&v70, &v65, v32, p_outAdjacentEdgeInfo, 0, 0);
LABEL_90:
      ++p_outAdjacentEdgeInfo;
      if ( !--AdjacentEdges )
      {
        next = v60;
        v7 = v62;
        goto LABEL_92;
      }
      continue;
    }
  }
LABEL_94:
  if ( v28 != &v70.m_endNodeBase )
  {
    v48 = &g_edgeDebugPolys[v63];
    do
    {
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      Edge_CalculatePoint(Handler, *(EdgeId *)&v28[1].m_color, *(float *)&v28[1].mp_parent, (vec3_t *)&outAdjacentEdgeInfo);
      Edge_CalculatePoint(Handler, *(EdgeId *)&v28[1].m_color, *((float *)&v28[1].mp_parent + 1), (vec3_t *)&outAdjacentEdgeInfo.fractions[1]);
      Edge_CalculatePoint(Handler, (EdgeId)v28[1].mp_left, *(float *)&v28[1].mp_right, (vec3_t *)outAdjacentEdgeInfo.otherFractions);
      Edge_CalculatePoint(Handler, (EdgeId)v28[1].mp_left, *((float *)&v28[1].mp_right + 1), (vec3_t *)((char *)&v73 + 4));
      CG_Edge_StandardizeWinding((vec3_t *)&outAdjacentEdgeInfo);
      Sys_EnterCriticalSection(CRITSECT_DEBUG_EDGE_POLYS);
      vertCount = v48->vertCount;
      if ( vertCount + 4 <= 2048 )
      {
        polyCount = v48->polyCount;
        if ( (int)polyCount + 1 <= 512 )
        {
          v48->polys[polyCount].firstVert = vertCount;
          v48->polys[v48->polyCount].vertCount = 4;
          v48->polys[v48->polyCount].outline = 1;
          v48->polys[v48->polyCount].drawBackFace = 1;
          v48->polys[v48->polyCount].drawDepthTest = 0;
          v51 = v48->polyCount;
          v48->polys[v51].color.v[0] = v8;
          v48->polys[v51].color.v[1] = v9;
          v48->polys[v51].color.v[2] = v10;
          v48->polys[v51].color.v[3] = 0.66600001;
          ++v48->polyCount;
          v52 = v48->vertCount;
          *(AdjacentEdgeInfo *)v48->verts[v52].v = outAdjacentEdgeInfo;
          *(_OWORD *)&v48->verts[v52 + 2].z = v73;
          v48->vertCount += 4;
        }
      }
      Sys_LeaveCriticalSection(CRITSECT_DEBUG_EDGE_POLYS);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v28 = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(v28);
    }
    while ( v28 != &v70.m_endNodeBase );
  }
  if ( v70.m_size )
  {
    v53 = v70.m_endNodeBase.mp_parent;
    if ( v70.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::erase_tree(&v70, (ntl::red_black_tree_node<AdjacentEdgeInfo> *)v53->mp_right);
        v54 = v53->mp_left;
        *(_QWORD *)&v53->m_color = v70.m_freelist.m_head.mp_next;
        v70.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v53;
        v53 = v54;
      }
      while ( v54 );
    }
    v70.m_endNodeBase.mp_parent = NULL;
    v70.m_endNodeBase.mp_left = &v70.m_endNodeBase;
    v70.m_endNodeBase.mp_right = &v70.m_endNodeBase;
    v70.m_size = 0i64;
  }
  if ( v71.m_size )
  {
    v55 = v71.m_endNodeBase.mp_parent;
    if ( v71.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::erase_tree(&v71, (ntl::red_black_tree_node<FlaggedEdge> *)v55->mp_right);
        v56 = v55->mp_left;
        *(_QWORD *)&v55->m_color = v71.m_freelist.m_head.mp_next;
        v71.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v55;
        v55 = v56;
      }
      while ( v56 );
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_Edge_DrawDebugEdge
==============
*/
void CG_Edge_DrawDebugEdge(const BgHandler *handler, EdgeId edgeId, float edgeFraction, bool showOrientation, bool depthTest, bool showClosestPoint, const vec4_t *debugDrawColor, const vec4_t *debugDrawColorDark)
{
  vec3_t start; 
  vec3_t outNormal1; 
  vec3_t outNormal0; 
  vec3_t outLineSegment[2]; 
  vec3_t end; 
  vec3_t v16; 

  Edge_GetLineSegment(handler, edgeId, (vec3_t (*)[2])outLineSegment);
  CG_DebugLine(outLineSegment, &outLineSegment[1], debugDrawColor, depthTest, 1);
  if ( showOrientation )
  {
    start.v[0] = (float)((float)(outLineSegment[1].v[0] - outLineSegment[0].v[0]) * 0.5) + outLineSegment[0].v[0];
    start.v[1] = (float)((float)(outLineSegment[1].v[1] - outLineSegment[0].v[1]) * 0.5) + outLineSegment[0].v[1];
    start.v[2] = (float)((float)(outLineSegment[1].v[2] - outLineSegment[0].v[2]) * 0.5) + outLineSegment[0].v[2];
    Edge_CalculateNormals(handler, edgeId, &outNormal0, &outNormal1);
    end.v[0] = (float)(orientationLineLength * outNormal0.v[0]) + start.v[0];
    end.v[1] = (float)(orientationLineLength * outNormal0.v[1]) + start.v[1];
    end.v[2] = (float)(orientationLineLength * outNormal0.v[2]) + start.v[2];
    v16.v[0] = (float)(orientationLineLength * outNormal1.v[0]) + start.v[0];
    v16.v[1] = (float)(orientationLineLength * outNormal1.v[1]) + start.v[1];
    v16.v[2] = (float)(orientationLineLength * outNormal1.v[2]) + start.v[2];
    CG_DebugLine(&start, &end, debugDrawColorDark, depthTest, 1);
    CG_DebugLine(&start, &v16, debugDrawColorDark, depthTest, 1);
  }
  if ( showClosestPoint )
  {
    Edge_CalculatePoint(handler, edgeId, edgeFraction, &outNormal1);
    CG_DebugSphere(&outNormal1, radius_0, debugDrawColor, depthTest, 1);
  }
}

/*
==============
CG_Edge_DrawDebugEdges
==============
*/
void CG_Edge_DrawDebugEdges(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v2; 
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v6; 
  __int64 v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  bool v10; 
  const dvar_t *v11; 
  bool v12; 
  const vec4_t *v13; 
  unsigned int i; 
  MapEdgeList *v15; 
  unsigned int v16; 
  unsigned __int8 mp_node; 
  unsigned int EdgeIndex; 
  const dvar_t *v19; 
  float value; 
  RefdefView *p_view; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  char *v23; 
  __int64 v24; 
  edgeQueryBucket_t v25; 
  BgHandler *v26; 
  EdgeId v27; 
  unsigned __int8 v28; 
  unsigned int v29; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v32; 
  unsigned __int64 v33; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v36; 
  ntl::red_black_tree_node_base *v37; 
  ntl::red_black_tree_node_base *v38; 
  __int64 showClosestPoint; 
  vec4_t *debugDrawColor; 
  vec4_t *debugDrawColorDark; 
  __int64 v42; 
  bool enabled; 
  EdgeId edgeId; 
  ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> v45; 
  BgHandler *handler; 
  int v47; 
  vec3_t outOrg; 
  __int64 v49; 
  ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> result; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v51; 
  EdgeOctreeQueryFrustum v52; 
  ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge> > v53; 
  float resultFractionPool[512]; 
  float resultDistancePool[512]; 
  EdgeId resultIdPool[512]; 

  v2 = alloca(v1);
  v49 = -2i64;
  v4 = DCONST_DVARINT_edge_debugDraw;
  if ( !DCONST_DVARINT_edge_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  v6 = DCONST_DVARINT_edge_debugDrawFlag;
  if ( !DCONST_DVARINT_edge_debugDrawFlag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawFlag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  v47 = v6->current.integer;
  v8 = DCONST_DVARBOOL_edge_debugDrawOrientation;
  if ( !DCONST_DVARBOOL_edge_debugDrawOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawOrientation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  enabled = v8->current.enabled;
  v9 = DCONST_DVARBOOL_edge_debugDrawDepthTest;
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.enabled;
  v11 = DCONST_DVARBOOL_edge_debugDrawQueryShowPoints;
  if ( !DCONST_DVARBOOL_edge_debugDrawQueryShowPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryShowPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.enabled;
  handler = CgHandler::getHandler(localClientNum);
  if ( (unsigned int)v7 >= 5 )
  {
    LODWORD(debugDrawColor) = 5;
    LODWORD(showClosestPoint) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 256, ASSERT_TYPE_ASSERT, "(unsigned)( edgeFlagIndex ) < (unsigned)( 5 )", "edgeFlagIndex doesn't index EDGE_FLAG_COUNT\n\t%i not in [0, %i)", showClosestPoint, debugDrawColor) )
      __debugbreak();
  }
  LODWORD(v45.mp_node) = (unsigned __int8)(1 << v7);
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 259, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  if ( integer == 3 )
  {
    v13 = &bg_edgeDebugColors[v7];
    *(float *)&v51.m_bucket = 0.66000003 * v13->v[0];
    *(float *)&v51.m_hint = 0.66000003 * v13->v[1];
    *(float *)&v51.m_queryShape = 0.66000003 * v13->v[2];
    HIDWORD(v51.m_queryShape) = LODWORD(v13->v[3]);
    for ( i = 0; i < cm.mapEnts->numEdgeLists; ++i )
    {
      v15 = cm.mapEnts->edgeLists[i];
      if ( v15 && v15->valid )
      {
        if ( v15->numDynamicEdges + v15->numStaticEdges != v15->numEdges )
        {
          LODWORD(v42) = v15->numEdges;
          LODWORD(debugDrawColorDark) = v15->numDynamicEdges + v15->numStaticEdges;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 276, ASSERT_TYPE_ASSERT, "( edgeList->numDynamicEdges + edgeList->numStaticEdges ) == ( edgeList->numEdges )", "%s == %s\n\t%u, %u", "edgeList->numDynamicEdges + edgeList->numStaticEdges", "edgeList->numEdges", debugDrawColorDark, v42) )
            __debugbreak();
        }
        v16 = 0;
        if ( v15->numEdges )
        {
          mp_node = (unsigned __int8)v45.mp_node;
          do
          {
            if ( (mp_node & v15->edgeMetadata[v16].flags[0]) != 0 )
            {
              EdgeIndex = MapEdgeList_MakeEdgeIndex(i, v16);
              EdgeId::Set(&edgeId, EdgeIndex);
              CG_Edge_DrawDebugEdge(handler, edgeId, 0.5, enabled, v10, v12, v13, (const vec4_t *)&v51);
              mp_node = (unsigned __int8)v45.mp_node;
            }
            ++v16;
          }
          while ( v16 < v15->numEdges );
        }
      }
    }
    return;
  }
  v19 = DCONST_DVARFLT_edge_debugDrawQueryDistance;
  if ( !DCONST_DVARFLT_edge_debugDrawQueryDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  value = v19->current.value;
  p_view = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  p_m_freelist = &v53.m_freelist;
  v23 = &v53.m_data.m_buffer[24528];
  do
  {
    *(_QWORD *)v23 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v23;
    v23 -= 48;
  }
  while ( v23 + 48 > (char *)&v53 );
  v53.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v24 = 0i64;
  v53.m_size = 0i64;
  v53.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v53.m_endNodeBase.mp_parent = NULL;
  v53.m_endNodeBase.mp_left = &v53.m_endNodeBase;
  v53.m_endNodeBase.mp_right = &v53.m_endNodeBase;
  RefdefView_GetOrg(p_view, &outOrg);
  if ( (unsigned int)v7 >= 5 )
  {
    LODWORD(debugDrawColor) = 5;
    LODWORD(showClosestPoint) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 314, ASSERT_TYPE_ASSERT, "(unsigned)( edgeFlagIndex ) < (unsigned)( ( sizeof( *array_counter( cg_FlagToBucket ) ) + 0 ) )", "edgeFlagIndex doesn't index ARRAY_COUNT( cg_FlagToBucket )\n\t%i not in [0, %i)", showClosestPoint, debugDrawColor) )
      __debugbreak();
  }
  v25 = cg_FlagToBucket[v7];
  edgeId = 0i64;
  if ( integer == 1 )
  {
    EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v52, &outOrg, &p_view->axis, 0.78539819, 0.44178647, p_view->zNear + 1.0, value);
    v51.m_hint = 16777208;
    v51.m_flags = 1;
    v51.m_bucket = v25;
    v51.m_queryShape = &v52;
    v26 = handler;
    EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v51, handler, resultIdPool, resultFractionPool, resultDistancePool, 0x200ui64, (unsigned __int64 *)&edgeId, NULL);
  }
  else
  {
    EdgeOctreeQuerySphere::EdgeOctreeQuerySphere((EdgeOctreeQuerySphere *)&v52, &outOrg, value);
    v51.m_hint = 16777208;
    v51.m_flags = 1;
    v51.m_bucket = v25;
    v51.m_queryShape = &v52;
    v26 = handler;
    EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute((EdgeOctreeQuery<EdgeOctreeQuerySphere> *)&v51, handler, resultIdPool, resultFractionPool, resultDistancePool, 0x200ui64, (unsigned __int64 *)&edgeId, NULL);
  }
  v27 = edgeId;
  if ( edgeId )
  {
    v28 = (unsigned __int8)v45.mp_node;
    while ( 1 )
    {
      edgeId = resultIdPool[v24];
      v29 = EdgeId::GetEdgeIndex(&edgeId);
      if ( (v28 & MapEdgeList_LookupMetadata(v29)->flags[0]) != 0 )
      {
        *(float *)&v51.m_queryShape = 0.0;
        *((float *)&v51.m_queryShape + 1) = 0.0;
        EdgeId::Clear((EdgeId *)&v51);
        *(EdgeId *)&v51.m_bucket = edgeId;
        *(float *)&v51.m_queryShape = resultFractionPool[v24];
        *((float *)&v51.m_queryShape + 1) = resultDistancePool[v24];
        p_m_endNodeBase = &v53.m_endNodeBase;
        mp_parent = v53.m_endNodeBase.mp_parent;
        v32 = 1;
        while ( mp_parent )
        {
          p_m_endNodeBase = mp_parent;
          v33 = *(_QWORD *)&mp_parent[1].m_color;
          v32 = *(_QWORD *)&edgeId < v33;
          if ( *(_QWORD *)&edgeId >= v33 )
            mp_parent = mp_parent->mp_right;
          else
            mp_parent = mp_parent->mp_left;
        }
        mp_left = p_m_endNodeBase;
        if ( !v32 )
          goto LABEL_73;
        if ( p_m_endNodeBase != v53.m_endNodeBase.mp_left )
        {
          if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
          {
            mp_left = p_m_endNodeBase->mp_left;
            if ( mp_left )
            {
              for ( j = mp_left->mp_right; j; j = j->mp_right )
                mp_left = j;
            }
            else
            {
              mp_left = p_m_endNodeBase->mp_parent;
              if ( p_m_endNodeBase == mp_left->mp_left )
              {
                do
                {
                  v36 = mp_left;
                  mp_left = mp_left->mp_parent;
                }
                while ( v36 == mp_left->mp_left );
              }
            }
          }
          else
          {
            mp_left = p_m_endNodeBase->mp_right;
          }
LABEL_73:
          if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( *(_QWORD *)&mp_left[1].m_color < *(_QWORD *)&v51.m_bucket )
            ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v53, &result, p_m_endNodeBase, (const FlaggedEdge *)&v51, 0, 0);
          goto LABEL_78;
        }
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v53, &v45, p_m_endNodeBase, (const FlaggedEdge *)&v51, 1, 0);
      }
LABEL_78:
      if ( ++v24 >= *(unsigned __int64 *)&v27 )
      {
        LODWORD(v7) = v47;
        v26 = handler;
        break;
      }
    }
  }
  CG_Edge_DrawQueryResults(v26, (const ntl::fixed_set<FlaggedEdge,512,ntl::less<FlaggedEdge,FlaggedEdge> > *)&v53, value, v7);
  memset(&outOrg, 0, sizeof(outOrg));
  if ( v53.m_size )
  {
    v37 = v53.m_endNodeBase.mp_parent;
    if ( v53.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::erase_tree(&v53, (ntl::red_black_tree_node<FlaggedEdge> *)v37->mp_right);
        v38 = v37->mp_left;
        *(_QWORD *)&v37->m_color = v53.m_freelist.m_head.mp_next;
        v53.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v37;
        v37 = v38;
      }
      while ( v38 );
    }
  }
}

/*
==============
CG_Edge_DrawDebugEnabled
==============
*/
bool CG_Edge_DrawDebugEnabled()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 

  v0 = DCONST_DVARINT_edge_debugDraw;
  if ( !DCONST_DVARINT_edge_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.integer )
    return 1;
  v1 = DCONST_DVARBOOL_edge_debugDraw_adjacency;
  if ( !DCONST_DVARBOOL_edge_debugDraw_adjacency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_adjacency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 1;
  v2 = DCONST_DVARBOOL_edge_debugDraw_octree;
  if ( !DCONST_DVARBOOL_edge_debugDraw_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_octree") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled;
}

/*
==============
CG_Edge_DrawDebugOctree
==============
*/
void CG_Edge_DrawDebugOctree(const MapEdgeList *edgeList, const PMROctreeMetadata *octreeMetadata, const float4 *minExtent, const PMROctreeNode *node, const vec4_t *color)
{
  __int128 v5; 
  const dvar_t *v15; 
  PMROctreeFlags flags; 
  const dvar_t *v17; 
  const char *v18; 
  __int64 v19; 
  int v20; 
  __int64 depth; 
  int v23; 
  __int64 v24; 
  float4 v25; 
  double v26; 
  unsigned int v27; 
  __int64 v28; 
  double v29; 
  double v30; 
  __int64 v31; 
  PMROctreeNodeSet *v32; 
  __int64 duration; 
  __int64 v34; 
  vec3_t point; 
  vec3_t end; 
  vec3_t v41; 
  vec3_t start; 
  Bounds bounds; 
  __int128 v44; 

  if ( !octreeMetadata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 587, ASSERT_TYPE_ASSERT, "(octreeMetadata)", (const char *)&queryFormat, "octreeMetadata") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 588, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 589, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  _XMM2 = 0i64;
  __asm
  {
    vinsertps xmm2, xmm2, xmm0, 0
    vinsertps xmm2, xmm2, xmm1, 10h
    vinsertps xmm2, xmm2, xmm3, 20h ; ' '
  }
  _XMM3 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM2, g_two.v), g_one.v), octreeMetadata->nodeHalfWidth[node->depth].v), minExtent->v);
  v15 = DCONST_DVARBOOL_edge_debugDrawDepthTest_octree;
  point.v[0] = _XMM3.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+4Fh+point+4], xmm3, 1
    vextractps dword ptr [rbp+4Fh+point+8], xmm3, 2
  }
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest_octree") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  flags = node->flags;
  if ( (flags & 2) != 0 )
  {
    v17 = DCONST_DVARBOOL_edge_debugDrawIndex_octree;
    if ( !DCONST_DVARBOOL_edge_debugDrawIndex_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawIndex_octree") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      if ( (node->flags & 4) != 0 )
      {
        v18 = j_va("(ROOT_NODE) %u", node->childNodeSetIndex);
      }
      else
      {
        v19 = (__int64)(((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)edgeList->edgeOctreeNodeSets) >> 7;
        if ( node != (const PMROctreeNode *)(((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64) + 16 * ((__int64)((__int64)node - ((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64)) >> 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 619, ASSERT_TYPE_ASSERT, "(node == &(nodeSet->node[nodeIndex]))", (const char *)&queryFormat, "node == &(nodeSet->node[nodeIndex])") )
          __debugbreak();
        v18 = j_va("(%zu,%zu) %u", v19, (__int64)((__int64)node - ((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64)) >> 4, node->childNodeSetIndex);
      }
      CG_DebugString(&point, color, textSize, v18, 0, 1);
    }
  }
  else
  {
    v20 = v15->current.color[0];
    v44 = v5;
    if ( (flags & 4) != 0 )
    {
      depth = node->depth;
      bounds.midPoint = point;
      _XMM1.v = (__m128)octreeMetadata->nodeHalfWidth[depth];
      LODWORD(bounds.halfSize.v[0]) = _XMM1.v.m128_i32[0];
      __asm
      {
        vextractps dword ptr [rbp+4Fh+bounds.halfSize+4], xmm1, 1
        vextractps dword ptr [rbp+4Fh+bounds.halfSize+8], xmm1, 2
      }
      CG_DebugBox(&vec3_origin, &bounds, 0.0, color, v20, 1);
    }
    v23 = 0;
    v24 = 0i64;
    v25.v = (__m128)octreeMetadata->nodeHalfWidth[node->depth];
    do
    {
      start = point;
      if ( (unsigned int)v23 >= 3 )
      {
        LODWORD(v34) = 3;
        LODWORD(duration) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v34) )
          __debugbreak();
      }
      bounds.midPoint.v[2] = point.v[2];
      v26 = *(double *)point.v;
      start.v[v24] = start.v[v24] - v25.v.m128_f32[0];
      *(double *)bounds.midPoint.v = v26;
      if ( (unsigned int)v23 >= 3 )
      {
        LODWORD(v34) = 3;
        LODWORD(duration) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v34) )
          __debugbreak();
      }
      bounds.midPoint.v[v24] = v25.v.m128_f32[0] + bounds.midPoint.v[v24];
      CG_DebugLine(&start, &bounds.midPoint, color, v20, 1);
      v27 = 0;
      v28 = 0i64;
      do
      {
        if ( v24 != v28 )
        {
          v41 = start;
          if ( v27 >= 3 )
          {
            LODWORD(v34) = 3;
            LODWORD(duration) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v34) )
              __debugbreak();
          }
          end.v[2] = bounds.midPoint.v[2];
          v29 = *(double *)bounds.midPoint.v;
          v41.v[v28] = v41.v[v28] - v25.v.m128_f32[0];
          *(double *)end.v = v29;
          if ( v27 >= 3 )
          {
            LODWORD(v34) = 3;
            LODWORD(duration) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v34) )
              __debugbreak();
          }
          end.v[v28] = end.v[v28] - v25.v.m128_f32[0];
          CG_DebugLine(&v41, &end, color, v20, 1);
          v41 = start;
          if ( v27 >= 3 )
          {
            LODWORD(v34) = 3;
            LODWORD(duration) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v34) )
              __debugbreak();
          }
          end.v[2] = bounds.midPoint.v[2];
          v30 = *(double *)bounds.midPoint.v;
          v41.v[v28] = v25.v.m128_f32[0] + v41.v[v28];
          *(double *)end.v = v30;
          if ( v27 >= 3 )
          {
            LODWORD(v34) = 3;
            LODWORD(duration) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v34) )
              __debugbreak();
          }
          end.v[v28] = v25.v.m128_f32[0] + end.v[v28];
          CG_DebugLine(&v41, &end, color, v20, 1);
        }
        ++v27;
        ++v28;
      }
      while ( (int)v27 < 3 );
      ++v23;
      ++v24;
    }
    while ( v23 < 3 );
    if ( node->childNodeSetIndex >= edgeList->numEdgeOctreeNodeSet )
    {
      LODWORD(v34) = edgeList->numEdgeOctreeNodeSet;
      LODWORD(duration) = node->childNodeSetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 674, ASSERT_TYPE_ASSERT, "(unsigned)( node->childNodeSetIndex ) < (unsigned)( edgeList->numEdgeOctreeNodeSet )", "node->childNodeSetIndex doesn't index edgeList->numEdgeOctreeNodeSet\n\t%i not in [0, %i)", duration, v34) )
        __debugbreak();
    }
    v31 = 8i64;
    v32 = &edgeList->edgeOctreeNodeSets[(unsigned __int64)node->childNodeSetIndex];
    do
    {
      CG_Edge_DrawDebugOctree(edgeList, octreeMetadata, minExtent, v32->node, color);
      v32 = (PMROctreeNodeSet *)((char *)v32 + 16);
      --v31;
    }
    while ( v31 );
  }
}

/*
==============
CG_Edge_DrawEdgeListInfo
==============
*/
void CG_Edge_DrawEdgeListInfo(const LocalClientNum_t localClientNum)
{
  bool v2; 
  const ScreenPlacement *v3; 
  __int128 y; 
  GfxFont *FontHandle; 
  int v6; 
  cg_t *LocalClientGlobals; 
  MapEnts *mapEnts; 
  __int64 v9; 
  MapEdgeList *v10; 
  __int64 numDynamicEdges; 
  unsigned int numStaticEdges; 
  __int64 v13; 
  __int128 v14; 
  __int64 v15; 
  float v16; 
  char dest[512]; 
  char v18[512]; 

  if ( !cm.mapEnts )
    return;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_8;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v2 )
      __debugbreak();
LABEL_8:
    v3 = &scrPlaceFull;
    goto LABEL_9;
  }
  v3 = &scrPlaceViewDisplay[localClientNum];
LABEL_9:
  y = LODWORD(FLOAT_10_0);
  FontHandle = UI_GetFontHandle(v3, 5, 0.2);
  if ( !FontHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 750, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  v6 = UI_TextHeight(FontHandle, 0.2) + 1;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 755, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  v9 = 0i64;
  v15 = *(_QWORD *)LocalClientGlobals->refdef.viewOffset.v;
  if ( cm.mapEnts->numEdgeLists )
  {
    v16 = LocalClientGlobals->refdef.viewOffset.v[2];
    do
    {
      v10 = mapEnts->edgeLists[v9];
      if ( v10 && v10->valid )
      {
        Com_sprintf<512>((char (*)[512])dest, "EdgeList %u at (%.0f, %.0f, %.0f)(%.0f, %.0f, %.0f): ", (unsigned int)v9, v10->mins.v[0], v10->mins.v[1], v10->mins.v[2], v10->maxs.v[0], v10->maxs.v[1], v10->maxs.v[2]);
        if ( v10->valid )
        {
          numDynamicEdges = v10->numDynamicEdges;
          numStaticEdges = v10->numStaticEdges;
          if ( (_DWORD)numDynamicEdges )
            Com_sprintf<512>((char (*)[512])v18, "%u dynamic, %u world", numDynamicEdges, numStaticEdges);
          else
            Com_sprintf<512>((char (*)[512])v18, " %u world", numStaticEdges);
        }
        else
        {
          Com_sprintf<512>((char (*)[512])v18, "???");
        }
        I_strcat(dest, 0x200ui64, v18);
        if ( *(float *)&v15 >= v10->mins.v[0] && *(float *)&v15 <= v10->maxs.v[0] && *((float *)&v15 + 1) >= v10->mins.v[1] && *((float *)&v15 + 1) <= v10->maxs.v[1] && v16 >= v10->mins.v[2] && v16 <= v10->maxs.v[2] )
          I_strcat(dest, 0x200ui64, " - inside");
        v13 = -1i64;
        do
          ++v13;
        while ( dest[v13] );
        UI_DrawText(v3, dest, v13, FontHandle, 10.0, *(float *)&y, 1, 1, 0.2, &colorWhite, 3);
        mapEnts = cm.mapEnts;
        v14 = y;
        *(float *)&v14 = *(float *)&y + (float)v6;
        y = v14;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < mapEnts->numEdgeLists );
  }
}

/*
==============
CG_Edge_DrawEdgeListWorld
==============
*/
void CG_Edge_DrawEdgeListWorld(const LocalClientNum_t __formal)
{
  MapEnts *mapEnts; 
  unsigned int i; 
  MapEdgeList *v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t origin; 
  Bounds bounds; 
  vec4_t color; 

  mapEnts = cm.mapEnts;
  for ( i = 0; i < mapEnts->numEdgeLists; ++i )
  {
    v3 = mapEnts->edgeLists[i];
    if ( v3 && v3->valid )
    {
      v4 = v3->mins.v[0];
      v5 = v3->maxs.v[0];
      if ( v4 > v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 109, ASSERT_TYPE_ASSERT, "( mins.x ) <= ( maxs.x )", "%s <= %s\n\t%g, %g", "mins.x", "maxs.x", v4, v5) )
        __debugbreak();
      v6 = v3->mins.v[1];
      v7 = v3->maxs.v[1];
      if ( v6 > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 110, ASSERT_TYPE_ASSERT, "( mins.y ) <= ( maxs.y )", "%s <= %s\n\t%g, %g", "mins.y", "maxs.y", v6, v7) )
        __debugbreak();
      v8 = v3->mins.v[2];
      v9 = v3->maxs.v[2];
      if ( v8 > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 111, ASSERT_TYPE_ASSERT, "( mins.z ) <= ( maxs.z )", "%s <= %s\n\t%g, %g", "mins.z", "maxs.z", v8, v9) )
        __debugbreak();
      bounds.midPoint.v[0] = (float)(v3->mins.v[0] + v3->maxs.v[0]) * 0.5;
      bounds.midPoint.v[1] = (float)(v3->mins.v[1] + v3->maxs.v[1]) * 0.5;
      bounds.midPoint.v[2] = (float)(v3->maxs.v[2] + v3->mins.v[2]) * 0.5;
      v10 = v3->maxs.v[1];
      v11 = v3->mins.v[1];
      v12 = v3->maxs.v[2];
      v13 = v3->mins.v[2];
      bounds.halfSize.v[0] = (float)(v3->maxs.v[0] - v3->mins.v[0]) * 0.5;
      bounds.halfSize.v[1] = (float)(v10 - v11) * 0.5;
      bounds.halfSize.v[2] = (float)(v12 - v13) * 0.5;
      origin.v[0] = 0.0;
      origin.v[1] = 0.0;
      origin.v[2] = 0.0;
      color = (vec4_t)_xmm;
      CG_DebugBox(&origin, &bounds, 0.0, &color, 0, 0);
      mapEnts = cm.mapEnts;
    }
  }
}

/*
==============
CG_Edge_DrawQueryResults
==============
*/
void CG_Edge_DrawQueryResults(const BgHandler *handler, const ntl::fixed_set<FlaggedEdge,512,ntl::less<FlaggedEdge,FlaggedEdge> > *edges, float maxQueryDistance, int edgeFlagIndex)
{
  __int64 v5; 
  const dvar_t *v10; 
  bool enabled; 
  const dvar_t *v12; 
  bool v13; 
  const dvar_t *v14; 
  bool v15; 
  const dvar_t *v16; 
  bool showClosestPoint; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const vec4_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  vec4_t outHeatmapColor; 
  vec4_t debugDrawColorDark; 

  v5 = edgeFlagIndex;
  if ( maxQueryDistance <= 0.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 216, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( maxQueryDistance )", "%s < %s\n\t%g, %g", "0.0f", "maxQueryDistance", *(double *)&_XMM1, maxQueryDistance) )
      __debugbreak();
  }
  v10 = DCONST_DVARBOOL_edge_debugDrawDistanceColor;
  if ( !DCONST_DVARBOOL_edge_debugDrawDistanceColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDistanceColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  enabled = v10->current.enabled;
  v12 = DCONST_DVARBOOL_edge_debugDrawOrientation;
  if ( !DCONST_DVARBOOL_edge_debugDrawOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawOrientation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = v12->current.enabled;
  v14 = DCONST_DVARBOOL_edge_debugDrawDepthTest;
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.enabled;
  v16 = DCONST_DVARBOOL_edge_debugDrawQueryShowPoints;
  if ( !DCONST_DVARBOOL_edge_debugDrawQueryShowPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryShowPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  showClosestPoint = v16->current.enabled;
  mp_left = edges->m_endNodeBase.mp_left;
  p_m_endNodeBase = &edges->m_endNodeBase;
  v20 = &bg_edgeDebugColors[v5];
  v21 = v20->v[1];
  v22 = v20->v[2];
  v23 = v20->v[3];
  outHeatmapColor.v[0] = v20->v[0];
  debugDrawColorDark.v[0] = outHeatmapColor.v[0] * 0.66000003;
  outHeatmapColor.v[1] = v21;
  debugDrawColorDark.v[2] = v22 * 0.66000003;
  outHeatmapColor.v[2] = v22;
  outHeatmapColor.v[3] = v23;
  debugDrawColorDark.v[1] = v21 * 0.66000003;
  for ( debugDrawColorDark.v[3] = v23; mp_left != p_m_endNodeBase; mp_left = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(mp_left) )
  {
    if ( enabled )
    {
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      CalcHeatmapColor(1.0 - (float)(*((float *)&mp_left[1].mp_parent + 1) / maxQueryDistance), &outHeatmapColor);
      debugDrawColorDark.v[0] = 0.66000003 * outHeatmapColor.v[0];
      debugDrawColorDark.v[1] = 0.66000003 * outHeatmapColor.v[1];
      debugDrawColorDark.v[2] = 0.66000003 * outHeatmapColor.v[2];
    }
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    CG_Edge_DrawDebugEdge(handler, *(EdgeId *)&mp_left[1].m_color, *(float *)&mp_left[1].mp_parent, v13, v15, showClosestPoint, &outHeatmapColor, &debugDrawColorDark);
  }
}

/*
==============
CG_Edge_DrawQueryResults
==============
*/
void CG_Edge_DrawQueryResults(const BgHandler *handler, unsigned __int64 edgeCount, const EdgeId *edgeIdPool, const float *edgeFractionPool, const float *edgeDistPool, float maxQueryDistance, int edgeFlagIndex)
{
  const dvar_t *v12; 
  bool enabled; 
  const dvar_t *v14; 
  bool v15; 
  const dvar_t *v16; 
  bool v17; 
  const dvar_t *v18; 
  bool showClosestPoint; 
  const vec4_t *v20; 
  float v21; 
  float v22; 
  float v23; 
  signed __int64 v24; 
  vec4_t outHeatmapColor; 
  vec4_t debugDrawColorDark; 

  if ( maxQueryDistance <= 0.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 187, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( maxQueryDistance )", "%s < %s\n\t%g, %g", "0.0f", "maxQueryDistance", *(double *)&_XMM1, maxQueryDistance) )
      __debugbreak();
  }
  v12 = DCONST_DVARBOOL_edge_debugDrawDistanceColor;
  if ( !DCONST_DVARBOOL_edge_debugDrawDistanceColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDistanceColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  enabled = v12->current.enabled;
  v14 = DCONST_DVARBOOL_edge_debugDrawOrientation;
  if ( !DCONST_DVARBOOL_edge_debugDrawOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawOrientation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.enabled;
  v16 = DCONST_DVARBOOL_edge_debugDrawDepthTest;
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.enabled;
  v18 = DCONST_DVARBOOL_edge_debugDrawQueryShowPoints;
  if ( !DCONST_DVARBOOL_edge_debugDrawQueryShowPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryShowPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  showClosestPoint = v18->current.enabled;
  v20 = &bg_edgeDebugColors[edgeFlagIndex];
  v21 = v20->v[1];
  v22 = v20->v[2];
  v23 = v20->v[3];
  outHeatmapColor.v[0] = v20->v[0];
  debugDrawColorDark.v[0] = outHeatmapColor.v[0] * 0.66000003;
  outHeatmapColor.v[1] = v21;
  debugDrawColorDark.v[2] = v22 * 0.66000003;
  outHeatmapColor.v[2] = v22;
  outHeatmapColor.v[3] = v23;
  debugDrawColorDark.v[1] = v21 * 0.66000003;
  debugDrawColorDark.v[3] = v23;
  if ( edgeCount )
  {
    v24 = (char *)edgeDistPool - (char *)edgeFractionPool;
    do
    {
      if ( enabled )
      {
        CalcHeatmapColor(1.0 - (float)(*(const float *)((char *)edgeFractionPool + v24) / maxQueryDistance), &outHeatmapColor);
        debugDrawColorDark.v[0] = 0.66000003 * outHeatmapColor.v[0];
        debugDrawColorDark.v[1] = 0.66000003 * outHeatmapColor.v[1];
        debugDrawColorDark.v[2] = 0.66000003 * outHeatmapColor.v[2];
      }
      CG_Edge_DrawDebugEdge(handler, *edgeIdPool++, *edgeFractionPool++, v15, v17, showClosestPoint, &outHeatmapColor, &debugDrawColorDark);
      --edgeCount;
    }
    while ( edgeCount );
  }
}

/*
==============
CG_Edge_FlushDebugPolys
==============
*/
void CG_Edge_FlushDebugPolys(DebugGlobals *debugGlobals)
{
  unsigned __int64 i; 
  unsigned __int64 v3; 
  bool *p_drawBackFace; 

  Sys_EnterCriticalSection(CRITSECT_DEBUG_EDGE_POLYS);
  for ( i = 0i64; i < 2; ++i )
  {
    v3 = 0i64;
    if ( g_edgeDebugPolys[i].polyCount )
    {
      p_drawBackFace = &g_edgeDebugPolys[i].polys[0].drawBackFace;
      do
      {
        R_AddDebugPolygon(debugGlobals, (const vec4_t *)(p_drawBackFace - 25), *(_DWORD *)(p_drawBackFace - 5), (const vec3_t *)((char *)&g_edgeDebugPolys[0].verts[*(unsigned int *)(p_drawBackFace - 9)] + i * 38920), *(p_drawBackFace - 1), *p_drawBackFace, p_drawBackFace[1]);
        p_drawBackFace += 28;
        ++v3;
      }
      while ( v3 < g_edgeDebugPolys[i].polyCount );
    }
    g_edgeDebugPolys[i].polyCount = 0;
    g_edgeDebugPolys[i].vertCount = 0;
  }
  Sys_LeaveCriticalSection(CRITSECT_DEBUG_EDGE_POLYS);
}

/*
==============
CG_Edge_StandardizeWinding
==============
*/
void CG_Edge_StandardizeWinding(vec3_t *verts)
{
  float v1; 
  float v2; 
  float v3; 
  float v4; 
  __int128 v6; 
  __m128 v10; 
  __m128 v13; 
  __m128 v18; 
  __m128 v20; 
  __m128 v24; 
  __m128 v27; 
  __m128 v32; 
  __m128 v33; 
  __m128 v38; 
  __m128 v39; 
  __m128 v44; 
  __int128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 

  v1 = verts[2].v[0];
  v2 = verts[3].v[0];
  v3 = verts[3].v[1];
  v4 = verts[3].v[2];
  HIDWORD(v49) = 0;
  v6 = v49;
  *(float *)&v6 = verts->v[0];
  _XMM4 = v6;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
  }
  v50 = _XMM4;
  v50.m128_i32[3] = 0;
  v10 = v50;
  v10.m128_f32[0] = verts[1].v[0];
  _XMM10 = v10;
  __asm
  {
    vinsertps xmm10, xmm10, dword ptr [rcx+10h], 10h
    vinsertps xmm10, xmm10, dword ptr [rcx+14h], 20h ; ' '
  }
  v13 = _mm128_sub_ps(_XMM10, _XMM4);
  _XMM0 = _mm128_mul_ps(v13, v13);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v18 = _mm128_div_ps(v13, _mm_sqrt_ps(_XMM0));
  v51 = _XMM10;
  v51.m128_i32[3] = 0;
  v20 = v51;
  v20.m128_f32[0] = v1;
  _XMM9 = v20;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rcx+1Ch], 10h
    vinsertps xmm9, xmm9, dword ptr [rcx+20h], 20h ; ' '
  }
  v52 = _XMM9;
  v52.m128_i32[3] = 0;
  v24 = v52;
  v24.m128_f32[0] = v2;
  _XMM6 = v24;
  __asm
  {
    vinsertps xmm6, xmm6, xmm14, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
  }
  v27 = _mm128_sub_ps(_XMM6, _XMM4);
  _XMM0 = _mm128_mul_ps(v27, v27);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v32 = _mm128_div_ps(v27, _mm_sqrt_ps(_XMM0));
  v33 = _mm128_sub_ps(_XMM6, _XMM9);
  _XMM0 = _mm128_mul_ps(v33, v33);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v38 = _mm128_div_ps(v33, _mm_sqrt_ps(_XMM0));
  v39 = _mm128_sub_ps(_XMM10, _XMM9);
  _XMM0 = _mm128_mul_ps(v39, v39);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v44 = _mm128_div_ps(v39, _mm_sqrt_ps(_XMM0));
  _XMM4 = _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v18, v18, 201), _mm_shuffle_ps(v32, v32, 210)), _mm128_mul_ps(_mm_shuffle_ps(v18, v18, 210), _mm_shuffle_ps(v32, v32, 201))), _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v38, v38, 201), _mm_shuffle_ps(v44, v44, 210)), _mm128_mul_ps(_mm_shuffle_ps(v38, v38, 210), _mm_shuffle_ps(v44, v44, 201))));
  __asm
  {
    vinsertps xmm0, xmm4, xmm4, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
  }
  if ( *(float *)&_XMM2 < 0.0 )
  {
    verts[3].v[0] = v1;
    *(_QWORD *)&verts[3].y = *(_QWORD *)&verts[2].y;
    verts[2].v[0] = v2;
    verts[2].v[1] = v3;
    verts[2].v[2] = v4;
  }
}

