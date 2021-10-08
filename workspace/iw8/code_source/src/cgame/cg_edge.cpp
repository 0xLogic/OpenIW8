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
  if ( priority != rhs->priority )
    return priority < rhs->priority;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+3Ch]
    vcomiss xmm0, dword ptr [rdx+3Ch]
  }
  return (unsigned int)priority < rhs->priority;
}

/*
==============
operator<
==============
*/
bool operator<(const ConeTargetInfo *lhs, const ConeTargetInfo *rhs)
{
  char v2; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+340h]
    vcomiss xmm0, dword ptr [rdx+340h]
  }
  return v2;
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
  const dvar_t *v2; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  unsigned __int64 unsignedInt; 
  MapEnts *mapEnts; 
  __int64 v14; 
  const MapEdgeList *v16; 
  __int64 staticQueryTypes; 
  unsigned __int64 v18; 
  PMROctreeMetadata *edgeOctrees; 
  vec4_t color; 

  v2 = DCONST_DVARBOOL_edge_debugEdgeListInfo;
  if ( !DCONST_DVARBOOL_edge_debugEdgeListInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugEdgeListInfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    CG_Edge_DrawEdgeListInfo(localClientNum);
  v4 = DCONST_DVARBOOL_edge_debugEdgeListWorld;
  if ( !DCONST_DVARBOOL_edge_debugEdgeListWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugEdgeListWorld") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    CG_Edge_DrawEdgeListWorld(localClientNum);
  if ( cm.isInUse && cm.mapEnts )
  {
    v5 = DCONST_DVARINT_edge_debugDraw;
    if ( !DCONST_DVARINT_edge_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer )
      goto LABEL_62;
    v6 = DCONST_DVARBOOL_edge_debugDraw_adjacency;
    if ( !DCONST_DVARBOOL_edge_debugDraw_adjacency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_adjacency") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      goto LABEL_62;
    v7 = DCONST_DVARBOOL_edge_debugDraw_octree;
    if ( !DCONST_DVARBOOL_edge_debugDraw_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_octree") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
LABEL_62:
      v8 = DCONST_DVARINT_edge_debugDraw;
      if ( !DCONST_DVARINT_edge_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.integer )
        CG_Edge_DrawDebugEdges(localClientNum);
      v9 = DCONST_DVARBOOL_edge_debugDraw_adjacency;
      if ( !DCONST_DVARBOOL_edge_debugDraw_adjacency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_adjacency") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
        CG_Edge_DrawDebugAdjacency(localClientNum);
      v10 = DCONST_DVARBOOL_edge_debugDraw_octree;
      if ( !DCONST_DVARBOOL_edge_debugDraw_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw_octree") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        v11 = DCONST_DVARINT_edge_debugDrawBucket_octree;
        if ( !DCONST_DVARINT_edge_debugDrawBucket_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawBucket_octree") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        unsignedInt = v11->current.unsignedInt;
        mapEnts = cm.mapEnts;
        if ( !cm.mapEnts )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 688, (AssertType)cm.mapEnts, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
            __debugbreak();
          mapEnts = cm.mapEnts;
        }
        v14 = 0i64;
        if ( mapEnts->numEdgeLists )
        {
          __asm
          {
            vmovaps [rsp+98h+var_38], xmm6
            vmovss  xmm6, cs:__real@3f28f5c3
          }
          do
          {
            v16 = mapEnts->edgeLists[v14];
            if ( v16 )
            {
              staticQueryTypes = v16->staticQueryTypes;
              if ( _bittest64(&staticQueryTypes, unsignedInt) )
              {
                v18 = 0i64;
                if ( v16->numEdgeOctrees )
                {
                  edgeOctrees = v16->edgeOctrees;
                  while ( edgeOctrees->edgeBucket != 1 << unsignedInt )
                  {
                    ++v18;
                    ++edgeOctrees;
                    if ( v18 >= v16->numEdgeOctrees )
                      goto LABEL_58;
                  }
                  if ( edgeOctrees )
                  {
                    if ( (edgeOctrees->flags[0] & 1) != 0 )
                    {
                      _RAX = &bg_edgeDebugBucketColors[(int)unsignedInt];
                      __asm
                      {
                        vmulss  xmm0, xmm6, dword ptr [rax+4]
                        vmulss  xmm1, xmm6, dword ptr [rax]
                        vmulss  xmm2, xmm6, dword ptr [rax+8]
                        vmovss  dword ptr [rsp+98h+color+4], xmm0
                        vmovss  xmm0, dword ptr [rax+0Ch]
                        vmovss  dword ptr [rsp+98h+color], xmm1
                        vmovss  dword ptr [rsp+98h+color+8], xmm2
                        vmovss  dword ptr [rsp+98h+color+0Ch], xmm0
                      }
                      CG_Edge_DrawDebugOctree(v16, edgeOctrees, &edgeOctrees->minExtent, &edgeOctrees->rootNode, &color);
                      mapEnts = cm.mapEnts;
                    }
                  }
                }
              }
            }
LABEL_58:
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < mapEnts->numEdgeLists );
          __asm { vmovaps xmm6, [rsp+98h+var_38] }
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
  void *v6; 
  const dvar_t *v9; 
  __int64 integer; 
  unsigned __int8 v11; 
  CgHandler *Handler; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  char *v25; 
  unsigned __int64 v26; 
  edgeQueryBucket_t v28; 
  unsigned __int64 v30; 
  unsigned int EdgeIndex; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v36; 
  unsigned __int64 v37; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v40; 
  ntl::internal::pool_allocator_freelist<64> *v41; 
  char *v42; 
  ntl::red_black_tree_node_base *next; 
  unsigned __int64 AdjacentEdges; 
  AdjacentEdgeInfo *p_outAdjacentEdgeInfo; 
  ntl::red_black_tree_node_base *v47; 
  ntl::red_black_tree_node_base *v48; 
  char v49; 
  EdgeId id; 
  unsigned __int64 v51; 
  unsigned __int64 v52; 
  EdgeId otherId; 
  unsigned __int64 v54; 
  __int64 m_edgeIndex; 
  unsigned __int64 v56; 
  unsigned __int64 v57; 
  ntl::red_black_tree_node_base *v58; 
  ntl::red_black_tree_node_base *v59; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v62; 
  int vertCount; 
  __int64 polyCount; 
  ntl::red_black_tree_node_base *v74; 
  ntl::red_black_tree_node_base *v75; 
  ntl::red_black_tree_node_base *v76; 
  ntl::red_black_tree_node_base *v77; 
  float fmt; 
  __int64 nearDist; 
  float nearDista; 
  __int64 farDist; 
  float farDista; 
  unsigned __int64 outResultCount; 
  ntl::red_black_tree_node_base *v89; 
  FlaggedEdge v90; 
  int v91; 
  LocalClientNum_t v92; 
  CgHandler *v93; 
  ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> v94; 
  ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> result; 
  vec3_t outOrg; 
  __int64 v97; 
  EdgeOctreeQueryFrustum v98; 
  ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare> v99; 
  ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge> > v100; 
  AdjacentEdgeInfo outAdjacentEdgeInfo; 
  __int128 v102; 
  float resultFractionPool[512]; 
  float resultDistancePool[512]; 
  EdgeId resultIdPool[512]; 
  char v110; 

  v6 = alloca(v1);
  v97 = -2i64;
  __asm
  {
    vmovaps [rsp+2A3C0h+var_30], xmm6
    vmovaps [rsp+2A3C0h+var_40], xmm7
    vmovaps [rsp+2A3C0h+var_50], xmm8
    vmovaps [rsp+2A3C0h+var_60], xmm9
  }
  v92 = localClientNum;
  _RBX = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  v9 = DCONST_DVARINT_edge_debugDrawFlag;
  if ( !DCONST_DVARINT_edge_debugDrawFlag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawFlag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( (unsigned int)integer >= 5 )
  {
    LODWORD(farDist) = 5;
    LODWORD(nearDist) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 498, ASSERT_TYPE_ASSERT, "(unsigned)( edgeFlagIndex ) < (unsigned)( 5 )", "edgeFlagIndex doesn't index EDGE_FLAG_COUNT\n\t%i not in [0, %i)", nearDist, farDist) )
      __debugbreak();
  }
  v11 = 1 << integer;
  v91 = (unsigned __int8)(1 << integer);
  _RAX = 2 * integer;
  _R14 = 0x140000000ui64;
  __asm
  {
    vmovss  xmm7, dword ptr rva bg_edgeDebugColors[r14+rax*8]
    vmovss  xmm8, dword ptr (rva bg_edgeDebugColors+4)[r14+rax*8]
    vmovss  xmm9, dword ptr (rva bg_edgeDebugColors+8)[r14+rax*8]
  }
  RefdefView_GetOrg(_RBX, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vaddss  xmm2, xmm0, cs:__real@3f800000
    vmovss  xmm1, cs:__real@44800000
    vmovss  [rsp+2A3C0h+farDist], xmm1
    vmovss  [rsp+2A3C0h+nearDist], xmm2
    vmovss  xmm0, cs:__real@3ee231d6
    vmovss  dword ptr [rsp+2A3C0h+fmt], xmm0
    vmovss  xmm3, cs:__real@3f490fdb; horizHalfAngleRad
  }
  EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v98, &outOrg, &_RBX->axis, *(float *)&_XMM3, fmt, nearDista, farDista);
  __asm { vmovss  xmm1, cs:centerBias; centerBias }
  EdgeOctreeQueryFrustum::SetDistanceCenterBias(&v98, *(float *)&_XMM1);
  Handler = CgHandler::getHandler(localClientNum);
  v93 = Handler;
  p_m_freelist = &v100.m_freelist;
  v25 = &v100.m_data.m_buffer[98256];
  do
  {
    *(_QWORD *)v25 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v25;
    v25 -= 48;
  }
  while ( v25 + 48 > (char *)&v100 );
  v100.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v100.m_size = 0i64;
  v100.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v100.m_endNodeBase.mp_parent = NULL;
  v100.m_endNodeBase.mp_left = &v100.m_endNodeBase;
  v100.m_endNodeBase.mp_right = &v100.m_endNodeBase;
  v26 = 0i64;
  v89 = NULL;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    v28 = bg_buckets[v26];
    outResultCount = 0i64;
    outAdjacentEdgeInfo.id.m_entityIndex = 16777208;
    outAdjacentEdgeInfo.otherId.m_edgeIndex = 1;
    LOBYTE(outAdjacentEdgeInfo.id.m_edgeIndex) = v28;
    *(_QWORD *)outAdjacentEdgeInfo.fractions = &v98;
    EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute((EdgeOctreeQuery<EdgeOctreeQueryFrustum> *)&outAdjacentEdgeInfo, Handler, resultIdPool, resultFractionPool, resultDistancePool, 0x200ui64, &outResultCount, NULL);
    _RSI = 0i64;
    v30 = outResultCount;
    if ( !outResultCount )
      goto LABEL_42;
    do
    {
      outResultCount = (unsigned __int64)resultIdPool[_RSI];
      EdgeIndex = EdgeId::GetEdgeIndex((EdgeId *)&outResultCount);
      if ( (v11 & MapEdgeList_LookupMetadata(EdgeIndex)->flags[0]) == 0 )
        goto LABEL_40;
      __asm
      {
        vmovss  [rsp+2A3C0h+var_2A368], xmm6
        vmovss  [rsp+2A3C0h+var_2A364], xmm6
      }
      EdgeId::Clear(&v90.id);
      v90.id = (EdgeId)outResultCount;
      __asm
      {
        vmovss  xmm0, [rbp+rsi*4+2A2C0h+resultFractionPool]
        vmovss  [rsp+2A3C0h+var_2A368], xmm0
        vmovss  xmm1, [rbp+rsi*4+2A2C0h+resultDistancePool]
        vmovss  [rsp+2A3C0h+var_2A364], xmm1
      }
      p_m_endNodeBase = &v100.m_endNodeBase;
      mp_parent = v100.m_endNodeBase.mp_parent;
      v36 = 1;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v37 = *(_QWORD *)&mp_parent[1].m_color;
        v36 = outResultCount < v37;
        if ( outResultCount >= v37 )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( v36 )
      {
        if ( p_m_endNodeBase == v100.m_endNodeBase.mp_left )
        {
          ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v100, (ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> *)&v94, p_m_endNodeBase, &v90, 1, 0);
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
                v40 = mp_left;
                mp_left = mp_left->mp_parent;
              }
              while ( v40 == mp_left->mp_left );
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
      if ( *(_QWORD *)&mp_left[1].m_color < *(_QWORD *)&v90.id )
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v100, &result, p_m_endNodeBase, &v90, 0, 0);
LABEL_40:
      ++_RSI;
    }
    while ( _RSI < v30 );
    v26 = (unsigned __int64)v89;
    Handler = v93;
LABEL_42:
    v89 = (ntl::red_black_tree_node_base *)++v26;
  }
  while ( v26 < 4 );
  v41 = &v99.m_freelist;
  v42 = &v99.m_data.m_buffer[65472];
  do
  {
    *(_QWORD *)v42 = v41;
    v41 = (ntl::internal::pool_allocator_freelist<64> *)v42;
    v42 -= 64;
  }
  while ( v42 + 64 > (char *)&v99 );
  v99.m_freelist.m_head.mp_next = &v41->m_head;
  if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v99.m_size = 0i64;
  v99.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v99.m_endNodeBase.mp_parent = NULL;
  _RDI = &v99.m_endNodeBase;
  v99.m_endNodeBase.mp_left = &v99.m_endNodeBase;
  v99.m_endNodeBase.mp_right = &v99.m_endNodeBase;
  next = v100.m_endNodeBase.mp_left;
  v89 = v100.m_endNodeBase.mp_left;
  if ( v100.m_endNodeBase.mp_left != &v100.m_endNodeBase )
  {
    while ( 1 )
    {
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      AdjacentEdges = Edge_GetAdjacentEdges(*(EdgeId *)&next[1].m_color, (edgeFlags_t)v11, &outAdjacentEdgeInfo);
      if ( AdjacentEdges )
        break;
LABEL_92:
      next = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(next);
      v89 = next;
      if ( next == &v100.m_endNodeBase )
      {
        _RDI = v99.m_endNodeBase.mp_left;
        Handler = v93;
        goto LABEL_94;
      }
    }
    p_outAdjacentEdgeInfo = &outAdjacentEdgeInfo;
    while ( 2 )
    {
      v47 = &v99.m_endNodeBase;
      v48 = v99.m_endNodeBase.mp_parent;
      v49 = 1;
      if ( v99.m_endNodeBase.mp_parent )
      {
        id = p_outAdjacentEdgeInfo->id;
        v51 = (unsigned int)*(_QWORD *)&p_outAdjacentEdgeInfo->otherId | *(_QWORD *)&p_outAdjacentEdgeInfo->otherId & 0xFFFFFFFF00000000ui64;
        v52 = (unsigned int)*(_QWORD *)&p_outAdjacentEdgeInfo->id | *(_QWORD *)&p_outAdjacentEdgeInfo->id & 0xFFFFFFFF00000000ui64;
        otherId = p_outAdjacentEdgeInfo->id;
        if ( v51 <= v52 )
          otherId = p_outAdjacentEdgeInfo->otherId;
        if ( v51 >= v52 )
          id = p_outAdjacentEdgeInfo->otherId;
        v54 = HIDWORD(*(unsigned __int64 *)&otherId);
        m_edgeIndex = otherId.m_edgeIndex;
        do
        {
          v47 = v48;
          v56 = *(_QWORD *)&v48[1].m_color;
          v57 = (unsigned int)v48[1].mp_left | (unsigned __int64)v48[1].mp_left & 0xFFFFFFFF00000000ui64;
          v58 = (ntl::red_black_tree_node_base *)v56;
          if ( v57 <= v56 )
            v58 = v48[1].mp_left;
          if ( v57 >= v56 )
            v56 = (unsigned __int64)v48[1].mp_left;
          v59 = (ntl::red_black_tree_node_base *)(m_edgeIndex | (v54 << 32));
          if ( v59 < v58 || v59 == v58 && (id.m_edgeIndex | (HIDWORD(*(unsigned __int64 *)&id) << 32)) < ((unsigned int)v56 | (HIDWORD(v56) << 32)) )
          {
            v48 = v48->mp_left;
            v49 = 1;
          }
          else
          {
            v49 = 0;
            v48 = v48->mp_right;
          }
        }
        while ( v48 );
      }
      mp_right = v47;
      if ( v49 )
      {
        if ( v47 == v99.m_endNodeBase.mp_left )
        {
          ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node(&v99, (ntl::red_black_tree_iterator<AdjacentEdgeInfo,ntl::red_black_tree_node<AdjacentEdgeInfo>,AdjacentEdgeInfo *,AdjacentEdgeInfo &> *)&result, v47, p_outAdjacentEdgeInfo, 1, 0);
          goto LABEL_90;
        }
        if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( v47->m_color || v47->mp_parent->mp_parent != v47 )
        {
          mp_right = v47->mp_left;
          if ( mp_right )
          {
            for ( j = mp_right->mp_right; j; j = j->mp_right )
              mp_right = j;
          }
          else
          {
            mp_right = v47->mp_parent;
            if ( v47 == mp_right->mp_left )
            {
              do
              {
                v62 = mp_right;
                mp_right = mp_right->mp_parent;
              }
              while ( v62 == mp_right->mp_left );
            }
          }
        }
        else
        {
          mp_right = v47->mp_right;
        }
      }
      if ( !mp_right && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( AdjacentEdgeInfoCompare::operator()(&v99.m_keyCompare, (const AdjacentEdgeInfo *)&mp_right[1], p_outAdjacentEdgeInfo) )
        ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::insert_node(&v99, &v94, v47, p_outAdjacentEdgeInfo, 0, 0);
LABEL_90:
      ++p_outAdjacentEdgeInfo;
      if ( !--AdjacentEdges )
      {
        next = v89;
        v11 = v91;
        goto LABEL_92;
      }
      continue;
    }
  }
LABEL_94:
  if ( _RDI != &v99.m_endNodeBase )
  {
    _RBX = &g_edgeDebugPolys[v92];
    do
    {
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      __asm { vmovss  xmm2, dword ptr [rdi+28h]; fraction }
      Edge_CalculatePoint(Handler, *(EdgeId *)&_RDI[1].m_color, *(float *)&_XMM2, (vec3_t *)&outAdjacentEdgeInfo);
      __asm { vmovss  xmm2, dword ptr [rdi+2Ch]; fraction }
      Edge_CalculatePoint(Handler, *(EdgeId *)&_RDI[1].m_color, *(float *)&_XMM2, (vec3_t *)&outAdjacentEdgeInfo.fractions[1]);
      __asm { vmovss  xmm2, dword ptr [rdi+38h]; fraction }
      Edge_CalculatePoint(Handler, (EdgeId)_RDI[1].mp_left, *(float *)&_XMM2, (vec3_t *)outAdjacentEdgeInfo.otherFractions);
      __asm { vmovss  xmm2, dword ptr [rdi+3Ch]; fraction }
      Edge_CalculatePoint(Handler, (EdgeId)_RDI[1].mp_left, *(float *)&_XMM2, (vec3_t *)((char *)&v102 + 4));
      CG_Edge_StandardizeWinding((vec3_t *)&outAdjacentEdgeInfo);
      Sys_EnterCriticalSection(CRITSECT_DEBUG_EDGE_POLYS);
      vertCount = _RBX->vertCount;
      if ( vertCount + 4 <= 2048 )
      {
        polyCount = _RBX->polyCount;
        if ( (int)polyCount + 1 <= 512 )
        {
          _RBX->polys[polyCount].firstVert = vertCount;
          _RBX->polys[_RBX->polyCount].vertCount = 4;
          _RBX->polys[_RBX->polyCount].outline = 1;
          _RBX->polys[_RBX->polyCount].drawBackFace = 1;
          _RBX->polys[_RBX->polyCount].drawDepthTest = 0;
          _RCX = _RBX->polyCount;
          __asm
          {
            vmovss  dword ptr [rcx+rbx+4], xmm7
            vmovss  dword ptr [rcx+rbx+8], xmm8
            vmovss  dword ptr [rcx+rbx+0Ch], xmm9
          }
          _RBX->polys[_RCX].color.v[3] = 0.66600001;
          ++_RBX->polyCount;
          _RCX = 3i64 * _RBX->vertCount;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+2A2C0h+outAdjacentEdgeInfo.id.m_edgeIndex]
            vmovups ymmword ptr [rbx+rcx*4+3808h], ymm0
            vmovups xmm1, xmmword ptr [rbp+28230h]
            vmovups xmmword ptr [rbx+rcx*4+3828h], xmm1
          }
          _RBX->vertCount += 4;
        }
      }
      Sys_LeaveCriticalSection(CRITSECT_DEBUG_EDGE_POLYS);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      _RDI = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(_RDI);
    }
    while ( _RDI != &v99.m_endNodeBase );
  }
  if ( v99.m_size )
  {
    v74 = v99.m_endNodeBase.mp_parent;
    if ( v99.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<AdjacentEdgeInfo,AdjacentEdgeInfo,ntl::fixed_pool_allocator<ntl::red_black_tree_node<AdjacentEdgeInfo>,1024,8>,ntl::return_input<AdjacentEdgeInfo>,AdjacentEdgeInfoCompare>::erase_tree(&v99, (ntl::red_black_tree_node<AdjacentEdgeInfo> *)v74->mp_right);
        v75 = v74->mp_left;
        *(_QWORD *)&v74->m_color = v99.m_freelist.m_head.mp_next;
        v99.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v74;
        v74 = v75;
      }
      while ( v75 );
    }
    v99.m_endNodeBase.mp_parent = NULL;
    v99.m_endNodeBase.mp_left = &v99.m_endNodeBase;
    v99.m_endNodeBase.mp_right = &v99.m_endNodeBase;
    v99.m_size = 0i64;
  }
  if ( v100.m_size )
  {
    v76 = v100.m_endNodeBase.mp_parent;
    if ( v100.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,2048,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::erase_tree(&v100, (ntl::red_black_tree_node<FlaggedEdge> *)v76->mp_right);
        v77 = v76->mp_left;
        *(_QWORD *)&v76->m_color = v100.m_freelist.m_head.mp_next;
        v100.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v76;
        v76 = v77;
      }
      while ( v77 );
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v110;
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
CG_Edge_DrawDebugEdge
==============
*/

void __fastcall CG_Edge_DrawDebugEdge(const BgHandler *handler, EdgeId edgeId, double edgeFraction, bool showOrientation, bool depthTest, bool showClosestPoint, const vec4_t *debugDrawColor, const vec4_t *debugDrawColorDark)
{
  vec3_t start; 
  vec3_t outNormal1; 
  vec3_t outNormal0; 
  vec3_t outLineSegment[2]; 
  vec3_t end; 
  vec3_t v50; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmm7, xmm2
  }
  Edge_GetLineSegment(handler, edgeId, (vec3_t (*)[2])outLineSegment);
  CG_DebugLine(outLineSegment, &outLineSegment[1], debugDrawColor, depthTest, 1);
  if ( showOrientation )
  {
    __asm
    {
      vmovss  xmm5, cs:__real@3f000000
      vmovss  xmm0, dword ptr [rbp+37h+outLineSegment+0Ch]
      vsubss  xmm1, xmm0, dword ptr [rbp+37h+outLineSegment]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rbp+37h+outLineSegment]
      vmovss  xmm1, dword ptr [rbp+37h+outLineSegment+10h]
      vmovss  dword ptr [rsp+0F0h+start], xmm0
      vsubss  xmm0, xmm1, dword ptr [rbp+37h+outLineSegment+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rbp+37h+outLineSegment+4]
      vmovss  xmm0, dword ptr [rbp+37h+outLineSegment+14h]
      vsubss  xmm1, xmm0, dword ptr [rbp+37h+outLineSegment+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+0F0h+start+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+37h+outLineSegment+8]
      vmovaps [rsp+0F0h+var_48+8], xmm6
      vmovss  dword ptr [rsp+0F0h+start+8], xmm3
    }
    Edge_CalculateNormals(handler, edgeId, &outNormal0, &outNormal1);
    __asm
    {
      vmovss  xmm6, cs:orientationLineLength
      vmulss  xmm1, xmm6, dword ptr [rbp+37h+outNormal0]
      vaddss  xmm1, xmm1, dword ptr [rsp+0F0h+start]
      vmulss  xmm2, xmm6, dword ptr [rbp+37h+outNormal0+4]
      vmovss  dword ptr [rbp+37h+end], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+0F0h+start+4]
      vmulss  xmm2, xmm6, dword ptr [rbp+37h+outNormal0+8]
      vmovss  dword ptr [rbp+37h+end+4], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+0F0h+start+8]
      vmulss  xmm2, xmm6, dword ptr [rbp+37h+outNormal1]
      vmovss  dword ptr [rbp+37h+end+8], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+0F0h+start]
      vmulss  xmm2, xmm6, dword ptr [rbp+37h+outNormal1+4]
      vmovss  dword ptr [rbp+37h+var_6C], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+0F0h+start+4]
      vmulss  xmm2, xmm6, dword ptr [rbp+37h+outNormal1+8]
      vmovss  dword ptr [rbp+37h+var_6C+4], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsp+0F0h+start+8]
      vmovss  dword ptr [rbp+37h+var_6C+8], xmm1
    }
    CG_DebugLine(&start, &end, debugDrawColorDark, depthTest, 1);
    CG_DebugLine(&start, &v50, debugDrawColorDark, depthTest, 1);
    __asm { vmovaps xmm6, [rsp+0F0h+var_48+8] }
  }
  if ( showClosestPoint )
  {
    __asm { vmovaps xmm2, xmm7; fraction }
    Edge_CalculatePoint(handler, edgeId, *(float *)&_XMM2, &outNormal1);
    __asm { vmovss  xmm1, cs:radius_0; radius }
    CG_DebugSphere(&outNormal1, *(float *)&_XMM1, debugDrawColor, depthTest, 1);
  }
  __asm { vmovaps xmm7, [rsp+0F0h+var_58+8] }
}

/*
==============
CG_Edge_DrawDebugEdges
==============
*/
void CG_Edge_DrawDebugEdges(const LocalClientNum_t localClientNum)
{
  signed __int64 v1; 
  void *v4; 
  const dvar_t *v6; 
  unsigned int unsignedInt; 
  const dvar_t *v8; 
  __int64 integer; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  bool v12; 
  const dvar_t *v13; 
  bool v14; 
  unsigned int v21; 
  MapEdgeList *v23; 
  unsigned int v24; 
  unsigned __int8 mp_node; 
  unsigned int EdgeIndex; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  char *v32; 
  edgeQueryBucket_t v34; 
  BgHandler *v39; 
  EdgeId v41; 
  unsigned __int8 v43; 
  unsigned int v44; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v49; 
  unsigned __int64 v50; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v53; 
  ntl::red_black_tree_node_base *v55; 
  ntl::red_black_tree_node_base *v56; 
  float fmt; 
  __int64 showClosestPoint; 
  float showClosestPointa; 
  vec4_t *debugDrawColor; 
  float debugDrawColora; 
  vec4_t *debugDrawColorDark; 
  __int64 v66; 
  bool enabled; 
  EdgeId edgeId; 
  ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> v69; 
  BgHandler *handler; 
  int v71; 
  vec3_t outOrg; 
  __int64 v73; 
  ntl::red_black_tree_iterator<FlaggedEdge,ntl::red_black_tree_node<FlaggedEdge>,FlaggedEdge *,FlaggedEdge &> result; 
  EdgeOctreeQuery<EdgeOctreeQueryFrustum> v75; 
  EdgeOctreeQueryFrustum v76; 
  ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge> > v77; 
  float resultFractionPool[512]; 
  float resultDistancePool[512]; 
  EdgeId resultIdPool[512]; 
  char v83; 

  v4 = alloca(v1);
  v73 = -2i64;
  __asm
  {
    vmovaps [rsp+8340h+var_30], xmm6
    vmovaps [rsp+8340h+var_40], xmm7
  }
  v6 = DCONST_DVARINT_edge_debugDraw;
  if ( !DCONST_DVARINT_edge_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  unsignedInt = v6->current.unsignedInt;
  v8 = DCONST_DVARINT_edge_debugDrawFlag;
  if ( !DCONST_DVARINT_edge_debugDrawFlag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawFlag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  v71 = v8->current.integer;
  v10 = DCONST_DVARBOOL_edge_debugDrawOrientation;
  if ( !DCONST_DVARBOOL_edge_debugDrawOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawOrientation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  enabled = v10->current.enabled;
  v11 = DCONST_DVARBOOL_edge_debugDrawDepthTest;
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.enabled;
  v13 = DCONST_DVARBOOL_edge_debugDrawQueryShowPoints;
  if ( !DCONST_DVARBOOL_edge_debugDrawQueryShowPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryShowPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.enabled;
  handler = CgHandler::getHandler(localClientNum);
  if ( (unsigned int)integer >= 5 )
  {
    LODWORD(debugDrawColor) = 5;
    LODWORD(showClosestPoint) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 256, ASSERT_TYPE_ASSERT, "(unsigned)( edgeFlagIndex ) < (unsigned)( 5 )", "edgeFlagIndex doesn't index EDGE_FLAG_COUNT\n\t%i not in [0, %i)", showClosestPoint, debugDrawColor) )
      __debugbreak();
  }
  LODWORD(v69.mp_node) = (unsigned __int8)(1 << integer);
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 259, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  if ( unsignedInt == 3 )
  {
    _R14 = &bg_edgeDebugColors[integer];
    __asm
    {
      vmovss  xmm3, cs:__real@3f28f5c3
      vmulss  xmm0, xmm3, dword ptr [r14]
      vmovss  dword ptr [rbp+8240h+var_82A8], xmm0
      vmulss  xmm2, xmm3, dword ptr [r14+4]
      vmovss  dword ptr [rbp+8240h+var_82A8+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [r14+8]
      vmovss  dword ptr [rbp+8240h+var_82A8+8], xmm1
      vmovss  xmm2, dword ptr [r14+0Ch]
      vmovss  dword ptr [rbp+8240h+var_82A8+0Ch], xmm2
    }
    v21 = 0;
    if ( cm.mapEnts->numEdgeLists )
    {
      __asm { vmovss  xmm6, cs:__real@3f000000 }
      do
      {
        v23 = cm.mapEnts->edgeLists[v21];
        if ( v23 && v23->valid )
        {
          if ( v23->numDynamicEdges + v23->numStaticEdges != v23->numEdges )
          {
            LODWORD(v66) = v23->numEdges;
            LODWORD(debugDrawColorDark) = v23->numDynamicEdges + v23->numStaticEdges;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 276, ASSERT_TYPE_ASSERT, "( edgeList->numDynamicEdges + edgeList->numStaticEdges ) == ( edgeList->numEdges )", "%s == %s\n\t%u, %u", "edgeList->numDynamicEdges + edgeList->numStaticEdges", "edgeList->numEdges", debugDrawColorDark, v66) )
              __debugbreak();
          }
          v24 = 0;
          if ( v23->numEdges )
          {
            mp_node = (unsigned __int8)v69.mp_node;
            do
            {
              if ( (mp_node & v23->edgeMetadata[v24].flags[0]) != 0 )
              {
                EdgeIndex = MapEdgeList_MakeEdgeIndex(v21, v24);
                EdgeId::Set(&edgeId, EdgeIndex);
                __asm { vmovaps xmm2, xmm6; edgeFraction }
                CG_Edge_DrawDebugEdge(handler, edgeId, *(double *)&_XMM2, enabled, v12, v14, _R14, (const vec4_t *)&v75);
                mp_node = (unsigned __int8)v69.mp_node;
              }
              ++v24;
            }
            while ( v24 < v23->numEdges );
          }
        }
        ++v21;
      }
      while ( v21 < cm.mapEnts->numEdgeLists );
    }
    goto LABEL_84;
  }
  _RDI = DCONST_DVARFLT_edge_debugDrawQueryDistance;
  if ( !DCONST_DVARFLT_edge_debugDrawQueryDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm7, dword ptr [rdi+28h] }
  _RBX = &CG_GetLocalClientGlobals(localClientNum)->refdef.view;
  p_m_freelist = &v77.m_freelist;
  v32 = &v77.m_data.m_buffer[24528];
  do
  {
    *(_QWORD *)v32 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v32;
    v32 -= 48;
  }
  while ( v32 + 48 > (char *)&v77 );
  v77.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  _R13 = 0i64;
  v77.m_size = 0i64;
  v77.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v77.m_endNodeBase.mp_parent = NULL;
  v77.m_endNodeBase.mp_left = &v77.m_endNodeBase;
  v77.m_endNodeBase.mp_right = &v77.m_endNodeBase;
  RefdefView_GetOrg(_RBX, &outOrg);
  if ( (unsigned int)integer >= 5 )
  {
    LODWORD(debugDrawColor) = 5;
    LODWORD(showClosestPoint) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 314, ASSERT_TYPE_ASSERT, "(unsigned)( edgeFlagIndex ) < (unsigned)( ( sizeof( *array_counter( cg_FlagToBucket ) ) + 0 ) )", "edgeFlagIndex doesn't index ARRAY_COUNT( cg_FlagToBucket )\n\t%i not in [0, %i)", showClosestPoint, debugDrawColor) )
      __debugbreak();
  }
  v34 = cg_FlagToBucket[integer];
  edgeId = 0i64;
  if ( unsignedInt == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+38h]
      vaddss  xmm1, xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+8340h+debugDrawColor], xmm7
      vmovss  dword ptr [rsp+8340h+showClosestPoint], xmm1
      vmovss  xmm0, cs:__real@3ee231d6
      vmovss  dword ptr [rsp+8340h+fmt], xmm0
      vmovss  xmm3, cs:__real@3f490fdb; horizHalfAngleRad
    }
    EdgeOctreeQueryFrustum::EdgeOctreeQueryFrustum(&v76, &outOrg, &_RBX->axis, *(float *)&_XMM3, fmt, showClosestPointa, debugDrawColora);
    v75.m_hint = 16777208;
    v75.m_flags = unsignedInt;
    v75.m_bucket = v34;
    v75.m_queryShape = &v76;
    v39 = handler;
    EdgeOctreeQuery<EdgeOctreeQueryFrustum>::Execute(&v75, handler, resultIdPool, resultFractionPool, resultDistancePool, 0x200ui64, (unsigned __int64 *)&edgeId, NULL);
  }
  else
  {
    __asm { vmovaps xmm2, xmm7; radius }
    EdgeOctreeQuerySphere::EdgeOctreeQuerySphere((EdgeOctreeQuerySphere *)&v76, &outOrg, *(float *)&_XMM2);
    v75.m_hint = 16777208;
    v75.m_flags = 1;
    v75.m_bucket = v34;
    v75.m_queryShape = &v76;
    v39 = handler;
    EdgeOctreeQuery<EdgeOctreeQuerySphere>::Execute((EdgeOctreeQuery<EdgeOctreeQuerySphere> *)&v75, handler, resultIdPool, resultFractionPool, resultDistancePool, 0x200ui64, (unsigned __int64 *)&edgeId, NULL);
  }
  v41 = edgeId;
  if ( edgeId )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
    v43 = (unsigned __int8)v69.mp_node;
    while ( 1 )
    {
      edgeId = resultIdPool[_R13];
      v44 = EdgeId::GetEdgeIndex(&edgeId);
      if ( (v43 & MapEdgeList_LookupMetadata(v44)->flags[0]) != 0 )
      {
        __asm
        {
          vmovss  dword ptr [rbp+8240h+var_82A8+8], xmm6
          vmovss  dword ptr [rbp+8240h+var_82A8+0Ch], xmm6
        }
        EdgeId::Clear((EdgeId *)&v75);
        *(EdgeId *)&v75.m_bucket = edgeId;
        __asm
        {
          vmovss  xmm0, [rbp+r13*4+8240h+resultFractionPool]
          vmovss  dword ptr [rbp+8240h+var_82A8+8], xmm0
          vmovss  xmm1, [rbp+r13*4+8240h+resultDistancePool]
          vmovss  dword ptr [rbp+8240h+var_82A8+0Ch], xmm1
        }
        p_m_endNodeBase = &v77.m_endNodeBase;
        mp_parent = v77.m_endNodeBase.mp_parent;
        v49 = 1;
        while ( mp_parent )
        {
          p_m_endNodeBase = mp_parent;
          v50 = *(_QWORD *)&mp_parent[1].m_color;
          v49 = *(_QWORD *)&edgeId < v50;
          if ( *(_QWORD *)&edgeId >= v50 )
            mp_parent = mp_parent->mp_right;
          else
            mp_parent = mp_parent->mp_left;
        }
        mp_left = p_m_endNodeBase;
        if ( !v49 )
          goto LABEL_74;
        if ( p_m_endNodeBase != v77.m_endNodeBase.mp_left )
        {
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
                  v53 = mp_left;
                  mp_left = mp_left->mp_parent;
                }
                while ( v53 == mp_left->mp_left );
              }
            }
          }
          else
          {
            mp_left = p_m_endNodeBase->mp_right;
          }
LABEL_74:
          if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( *(_QWORD *)&mp_left[1].m_color < *(_QWORD *)&v75.m_bucket )
            ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v77, &result, p_m_endNodeBase, (const FlaggedEdge *)&v75, 0, 0);
          goto LABEL_79;
        }
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::insert_node(&v77, &v69, p_m_endNodeBase, (const FlaggedEdge *)&v75, 1, 0);
      }
LABEL_79:
      if ( ++_R13 >= *(unsigned __int64 *)&v41 )
      {
        LODWORD(integer) = v71;
        v39 = handler;
        break;
      }
    }
  }
  __asm { vmovaps xmm2, xmm7; maxQueryDistance }
  CG_Edge_DrawQueryResults(v39, (const ntl::fixed_set<FlaggedEdge,512,ntl::less<FlaggedEdge,FlaggedEdge> > *)&v77, *(float *)&_XMM2, integer);
  memset(&outOrg, 0, sizeof(outOrg));
  if ( v77.m_size )
  {
    v55 = v77.m_endNodeBase.mp_parent;
    if ( v77.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<FlaggedEdge,FlaggedEdge,ntl::fixed_pool_allocator<ntl::red_black_tree_node<FlaggedEdge>,512,8>,ntl::return_input<FlaggedEdge>,ntl::less<FlaggedEdge,FlaggedEdge>>::erase_tree(&v77, (ntl::red_black_tree_node<FlaggedEdge> *)v55->mp_right);
        v56 = v55->mp_left;
        *(_QWORD *)&v55->m_color = v77.m_freelist.m_head.mp_next;
        v77.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v55;
        v55 = v56;
      }
      while ( v56 );
    }
  }
LABEL_84:
  _R11 = &v83;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
  const dvar_t *v29; 
  PMROctreeFlags flags; 
  const dvar_t *v31; 
  const char *v32; 
  __int64 v33; 
  int v35; 
  int v42; 
  unsigned int v51; 
  __int64 v64; 
  PMROctreeNodeSet *v65; 
  __int64 duration; 
  __int64 v67; 
  vec3_t point; 
  vec3_t end; 
  vec3_t v74; 
  vec3_t start; 
  Bounds bounds; 

  _RDI = octreeMetadata;
  if ( !octreeMetadata && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 587, ASSERT_TYPE_ASSERT, "(octreeMetadata)", (const char *)&queryFormat, "octreeMetadata") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 588, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 589, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  _RAX = 2i64 * node->depth;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm1, xmm1, xmm1
    vmovups xmm5, xmmword ptr [rdi+rax*8]
    vcvtsi2ss xmm3, xmm3, eax
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vinsertps xmm2, xmm2, xmm0, 0
    vinsertps xmm2, xmm2, xmm1, 10h
    vinsertps xmm2, xmm2, xmm3, 20h ; ' '
    vmulps  xmm0, xmm2, xmmword ptr cs:?g_two@@3Ufloat4@@B.v; float4 const g_two
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmm5
    vaddps  xmm3, xmm2, xmmword ptr [rbx]
  }
  v29 = DCONST_DVARBOOL_edge_debugDrawDepthTest_octree;
  __asm
  {
    vmovss  dword ptr [rbp+4Fh+point], xmm3
    vextractps dword ptr [rbp+4Fh+point+4], xmm3, 1
    vextractps dword ptr [rbp+4Fh+point+8], xmm3, 2
  }
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest_octree") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  flags = node->flags;
  if ( (flags & 2) != 0 )
  {
    v31 = DCONST_DVARBOOL_edge_debugDrawIndex_octree;
    if ( !DCONST_DVARBOOL_edge_debugDrawIndex_octree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawIndex_octree") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.enabled )
    {
      if ( (node->flags & 4) != 0 )
      {
        v32 = j_va("(ROOT_NODE) %u", node->childNodeSetIndex);
      }
      else
      {
        v33 = (__int64)(((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64) - (unsigned __int64)edgeList->edgeOctreeNodeSets) >> 7;
        if ( node != (const PMROctreeNode *)(((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64) + 16 * ((__int64)((__int64)node - ((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64)) >> 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 619, ASSERT_TYPE_ASSERT, "(node == &(nodeSet->node[nodeIndex]))", (const char *)&queryFormat, "node == &(nodeSet->node[nodeIndex])") )
          __debugbreak();
        v32 = j_va("(%zu,%zu) %u", v33, (__int64)((__int64)node - ((unsigned __int64)node & 0xFFFFFFFFFFFFFF80ui64)) >> 4, node->childNodeSetIndex);
      }
      __asm { vmovss  xmm2, cs:textSize; scale }
      CG_DebugString(&point, color, *(float *)&_XMM2, v32, 0, 1);
    }
  }
  else
  {
    v35 = v29->current.color[0];
    __asm { vmovaps [rsp+110h+var_50], xmm6 }
    if ( (flags & 4) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4Fh+point]
        vmovss  xmm1, dword ptr [rbp+4Fh+point+4]
      }
      _RAX = node->depth;
      __asm
      {
        vmovss  dword ptr [rbp+4Fh+bounds.midPoint], xmm0
        vmovss  xmm0, dword ptr [rbp+4Fh+point+8]
      }
      _RAX *= 2i64;
      __asm
      {
        vmovss  dword ptr [rbp+4Fh+bounds.midPoint+4], xmm1
        vmovss  dword ptr [rbp+4Fh+bounds.midPoint+8], xmm0
        vmovups xmm1, xmmword ptr [rdi+rax*8]
        vxorps  xmm2, xmm2, xmm2; yaw
        vmovss  dword ptr [rbp+4Fh+bounds.halfSize], xmm1
        vextractps dword ptr [rbp+4Fh+bounds.halfSize+4], xmm1, 1
        vextractps dword ptr [rbp+4Fh+bounds.halfSize+8], xmm1, 2
      }
      CG_DebugBox(&vec3_origin, &bounds, *(float *)&_XMM2, color, v35, 1);
    }
    v42 = 0;
    _RAX = 2i64 * node->depth;
    _RSI = 0i64;
    __asm { vmovups xmm6, xmmword ptr [rdi+rax*8] }
    do
    {
      start.v[2] = point.v[2];
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+4Fh+point]
        vmovsd  qword ptr [rbp+4Fh+start], xmm0
      }
      if ( (unsigned int)v42 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(duration) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v67) )
          __debugbreak();
      }
      bounds.midPoint.v[2] = point.v[2];
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rsi*4+4Fh+start]
        vmovsd  xmm2, qword ptr [rbp+4Fh+point]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbp+rsi*4+4Fh+start], xmm1
        vmovsd  qword ptr [rbp+4Fh+bounds.midPoint], xmm2
      }
      if ( (unsigned int)v42 >= 3 )
      {
        LODWORD(v67) = 3;
        LODWORD(duration) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v67) )
          __debugbreak();
      }
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rbp+rsi*4+4Fh+bounds.midPoint]
        vmovss  dword ptr [rbp+rsi*4+4Fh+bounds.midPoint], xmm0
      }
      CG_DebugLine(&start, &bounds.midPoint, color, v35, 1);
      v51 = 0;
      _RDI = 0i64;
      do
      {
        if ( _RSI != _RDI )
        {
          v74.v[2] = start.v[2];
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+4Fh+start]
            vmovsd  qword ptr [rbp+4Fh+var_90], xmm0
          }
          if ( v51 >= 3 )
          {
            LODWORD(v67) = 3;
            LODWORD(duration) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v67) )
              __debugbreak();
          }
          end.v[2] = bounds.midPoint.v[2];
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+rdi*4+4Fh+var_90]
            vmovsd  xmm2, qword ptr [rbp+4Fh+bounds.midPoint]
            vsubss  xmm1, xmm0, xmm6
            vmovss  dword ptr [rbp+rdi*4+4Fh+var_90], xmm1
            vmovsd  qword ptr [rbp+4Fh+end], xmm2
          }
          if ( v51 >= 3 )
          {
            LODWORD(v67) = 3;
            LODWORD(duration) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v67) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+rdi*4+4Fh+end]
            vsubss  xmm1, xmm0, xmm6
            vmovss  dword ptr [rbp+rdi*4+4Fh+end], xmm1
          }
          CG_DebugLine(&v74, &end, color, v35, 1);
          v74.v[2] = start.v[2];
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+4Fh+start]
            vmovsd  qword ptr [rbp+4Fh+var_90], xmm0
          }
          if ( v51 >= 3 )
          {
            LODWORD(v67) = 3;
            LODWORD(duration) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v67) )
              __debugbreak();
          }
          end.v[2] = bounds.midPoint.v[2];
          __asm
          {
            vaddss  xmm0, xmm6, dword ptr [rbp+rdi*4+4Fh+var_90]
            vmovsd  xmm1, qword ptr [rbp+4Fh+bounds.midPoint]
            vmovss  dword ptr [rbp+rdi*4+4Fh+var_90], xmm0
            vmovsd  qword ptr [rbp+4Fh+end], xmm1
          }
          if ( v51 >= 3 )
          {
            LODWORD(v67) = 3;
            LODWORD(duration) = v51;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v67) )
              __debugbreak();
          }
          __asm
          {
            vaddss  xmm0, xmm6, dword ptr [rbp+rdi*4+4Fh+end]
            vmovss  dword ptr [rbp+rdi*4+4Fh+end], xmm0
          }
          CG_DebugLine(&v74, &end, color, v35, 1);
        }
        ++v51;
        ++_RDI;
      }
      while ( (int)v51 < 3 );
      ++v42;
      ++_RSI;
    }
    while ( v42 < 3 );
    __asm { vmovaps xmm6, [rsp+110h+var_50] }
    if ( node->childNodeSetIndex >= edgeList->numEdgeOctreeNodeSet )
    {
      LODWORD(v67) = edgeList->numEdgeOctreeNodeSet;
      LODWORD(duration) = node->childNodeSetIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 674, ASSERT_TYPE_ASSERT, "(unsigned)( node->childNodeSetIndex ) < (unsigned)( edgeList->numEdgeOctreeNodeSet )", "node->childNodeSetIndex doesn't index edgeList->numEdgeOctreeNodeSet\n\t%i not in [0, %i)", duration, v67) )
        __debugbreak();
    }
    v64 = 8i64;
    v65 = &edgeList->edgeOctreeNodeSets[(unsigned __int64)node->childNodeSetIndex];
    do
    {
      CG_Edge_DrawDebugOctree(edgeList, octreeMetadata, minExtent, v65->node, color);
      v65 = (PMROctreeNodeSet *)((char *)v65 + 16);
      --v64;
    }
    while ( v64 );
  }
}

/*
==============
CG_Edge_DrawEdgeListInfo
==============
*/
void CG_Edge_DrawEdgeListInfo(const LocalClientNum_t localClientNum)
{
  __int64 v8; 
  ScreenPlacementMode v9; 
  __int32 v10; 
  bool v11; 
  const ScreenPlacement *v12; 
  GfxFont *FontHandle; 
  MapEnts *mapEnts; 
  __int64 v21; 
  __int64 numDynamicEdges; 
  unsigned int numStaticEdges; 
  char v42; 
  char v43; 
  __int64 v44; 
  char *fmt; 
  float fmta; 
  double y; 
  float ya; 
  double horzAlign; 
  double vertAlign; 
  double v59; 
  float v60; 
  float v62; 
  char dest[512]; 
  char v64[512]; 
  void *retaddr; 

  _R11 = &retaddr;
  v8 = localClientNum;
  if ( !cm.mapEnts )
    return;
  v9 = activeScreenPlacementMode;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmmword ptr [r11-78h], xmm11
  }
  if ( v9 == SCRMODE_FULL )
    goto LABEL_8;
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v11 )
      __debugbreak();
LABEL_8:
    v12 = &scrPlaceFull;
    goto LABEL_9;
  }
  v12 = &scrPlaceViewDisplay[v8];
LABEL_9:
  __asm
  {
    vmovss  xmm10, cs:__real@3e4ccccd
    vmovss  xmm11, cs:__real@41200000
    vmovaps xmm2, xmm10; scale
    vmovaps xmm9, xmm11
  }
  FontHandle = UI_GetFontHandle(v12, 5, *(float *)&_XMM2);
  if ( !FontHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 750, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm10; scale }
  UI_TextHeight(FontHandle, *(float *)&_XMM1);
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 755, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  v21 = 0i64;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+699Ch]
    vmovsd  [rsp+4F8h+var_498], xmm0
  }
  v62 = _RBX->refdef.viewOffset.v[2];
  if ( cm.mapEnts->numEdgeLists )
  {
    __asm
    {
      vmovaps [rsp+4F8h+var_28], xmm6
      vmovss  xmm6, [rsp+4F8h+var_490]
      vmovaps [rsp+4F8h+var_38], xmm7
      vmovss  xmm7, dword ptr [rsp+4F8h+var_498+4]
      vmovaps [rsp+4F8h+var_48], xmm8
      vmovss  xmm8, dword ptr [rsp+4F8h+var_498]
    }
    do
    {
      _RBX = mapEnts->edgeLists[v21];
      if ( _RBX && _RBX->valid )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vmovss  xmm1, dword ptr [rbx+18h]
          vmovss  xmm2, dword ptr [rbx+14h]
          vmovss  xmm4, dword ptr [rbx+10h]
          vmovss  xmm3, dword ptr [rbx+8]
          vmovss  xmm5, dword ptr [rbx+0Ch]
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+4F8h+var_4B8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  qword ptr [rsp+4F8h+vertAlign], xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovsd  qword ptr [rsp+4F8h+horzAlign], xmm2
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm5, xmm5, xmm5
          vmovsd  qword ptr [rsp+4F8h+y], xmm4
          vmovq   r9, xmm3
          vmovsd  [rsp+4F8h+fmt], xmm5
        }
        Com_sprintf<512>((char (*)[512])dest, "EdgeList %u at (%.0f, %.0f, %.0f)(%.0f, %.0f, %.0f): ", (unsigned int)v21, *(double *)&_XMM3, *(double *)&fmt, y, horzAlign, vertAlign, v59);
        if ( _RBX->valid )
        {
          numDynamicEdges = _RBX->numDynamicEdges;
          numStaticEdges = _RBX->numStaticEdges;
          if ( (_DWORD)numDynamicEdges )
            Com_sprintf<512>((char (*)[512])v64, "%u dynamic, %u world", numDynamicEdges, numStaticEdges);
          else
            Com_sprintf<512>((char (*)[512])v64, " %u world", numStaticEdges);
        }
        else
        {
          Com_sprintf<512>((char (*)[512])v64, "???");
        }
        I_strcat(dest, 0x200ui64, v64);
        __asm { vcomiss xmm8, dword ptr [rbx+8] }
        if ( !v42 )
        {
          __asm { vcomiss xmm8, dword ptr [rbx+14h] }
          if ( v42 | v43 )
          {
            __asm
            {
              vcomiss xmm7, dword ptr [rbx+0Ch]
              vcomiss xmm7, dword ptr [rbx+18h]
            }
            if ( v42 | v43 )
            {
              __asm
              {
                vcomiss xmm6, dword ptr [rbx+10h]
                vcomiss xmm6, dword ptr [rbx+1Ch]
              }
              if ( v42 | v43 )
                I_strcat(dest, 0x200ui64, " - inside");
            }
          }
        }
        v44 = -1i64;
        do
          ++v44;
        while ( dest[v44] );
        __asm
        {
          vmovss  dword ptr [rsp+4F8h+var_4B8], xmm10
          vmovss  [rsp+4F8h+y], xmm9
          vmovss  dword ptr [rsp+4F8h+fmt], xmm11
        }
        UI_DrawText(v12, dest, v44, FontHandle, fmta, ya, 1, 1, v60, &colorWhite, 3);
        mapEnts = cm.mapEnts;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r14d
          vaddss  xmm9, xmm9, xmm0
        }
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < mapEnts->numEdgeLists );
    __asm
    {
      vmovaps xmm8, [rsp+4F8h+var_48]
      vmovaps xmm7, [rsp+4F8h+var_38]
      vmovaps xmm6, [rsp+4F8h+var_28]
    }
  }
  __asm
  {
    vmovaps xmm10, [rsp+4F8h+var_68]
    vmovaps xmm9, [rsp+4F8h+var_58]
    vmovaps xmm11, [rsp+4F8h+var_78]
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
  unsigned int v6; 
  bool v10; 
  bool v15; 
  bool v20; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  vec3_t origin; 
  Bounds bounds; 
  vec4_t color; 
  void *retaddr; 

  _R11 = &retaddr;
  mapEnts = cm.mapEnts;
  v6 = 0;
  if ( cm.mapEnts->numEdgeLists )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovss  xmm7, cs:__real@3f000000
      vmovaps xmmword ptr [r11-58h], xmm8
      vxorps  xmm8, xmm8, xmm8
      vmovaps xmmword ptr [r11-38h], xmm6
    }
    do
    {
      _RBX = mapEnts->edgeLists[v6];
      if ( _RBX )
      {
        v10 = !_RBX->valid;
        if ( _RBX->valid )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+8]
            vmovss  xmm0, dword ptr [rbx+14h]
            vcomiss xmm1, xmm0
          }
          if ( _RBX->valid )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+0E8h+var_A8], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+0E8h+var_B0], xmm1
            }
            v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 109, ASSERT_TYPE_ASSERT, "( mins.x ) <= ( maxs.x )", "%s <= %s\n\t%g, %g", "mins.x", "maxs.x", v50, v53);
            v10 = !v15;
            if ( v15 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+0Ch]
            vmovss  xmm0, dword ptr [rbx+18h]
            vcomiss xmm1, xmm0
          }
          if ( !v10 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+0E8h+var_A8], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+0E8h+var_B0], xmm1
            }
            v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 110, ASSERT_TYPE_ASSERT, "( mins.y ) <= ( maxs.y )", "%s <= %s\n\t%g, %g", "mins.y", "maxs.y", v51, v54);
            v10 = !v20;
            if ( v20 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+10h]
            vmovss  xmm0, dword ptr [rbx+1Ch]
            vcomiss xmm1, xmm0
          }
          if ( !v10 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+0E8h+var_A8], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+0E8h+var_B0], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 111, ASSERT_TYPE_ASSERT, "( mins.z ) <= ( maxs.z )", "%s <= %s\n\t%g, %g", "mins.z", "maxs.z", v52, v55) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vaddss  xmm1, xmm0, dword ptr [rbx+14h]
            vmulss  xmm2, xmm1, xmm7
            vmovss  dword ptr [rsp+0E8h+bounds.midPoint], xmm2
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vaddss  xmm1, xmm0, dword ptr [rbx+18h]
            vmulss  xmm2, xmm1, xmm7
            vmovss  dword ptr [rsp+0E8h+bounds.midPoint+4], xmm2
            vmovss  xmm0, dword ptr [rbx+1Ch]
            vaddss  xmm1, xmm0, dword ptr [rbx+10h]
            vmulss  xmm2, xmm1, xmm7
            vmovss  dword ptr [rsp+0E8h+bounds.midPoint+8], xmm2
            vmovss  xmm0, dword ptr [rbx+14h]
            vsubss  xmm1, xmm0, dword ptr [rbx+8]
            vmovss  xmm4, dword ptr [rbx+18h]
            vmovss  xmm3, dword ptr [rbx+0Ch]
            vmovss  xmm6, dword ptr [rbx+1Ch]
            vmovss  xmm5, dword ptr [rbx+10h]
            vmulss  xmm2, xmm1, xmm7
            vsubss  xmm0, xmm4, xmm3
            vmulss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rsp+0E8h+bounds.halfSize], xmm2
            vsubss  xmm2, xmm6, xmm5
            vmulss  xmm0, xmm2, xmm7
            vmovss  dword ptr [rsp+0E8h+bounds.halfSize+4], xmm1
            vmovups xmm1, cs:__xmm@3f800000000000003f8000003f800000
            vmovaps xmm2, xmm8; yaw
            vmovss  dword ptr [rsp+0E8h+bounds.halfSize+8], xmm0
            vmovss  dword ptr [rsp+0E8h+origin], xmm8
            vmovss  dword ptr [rsp+0E8h+origin+4], xmm8
            vmovss  dword ptr [rsp+0E8h+origin+8], xmm8
            vmovups xmmword ptr [rsp+0E8h+color], xmm1
          }
          CG_DebugBox(&origin, &bounds, *(float *)&_XMM2, &color, 0, 0);
          mapEnts = cm.mapEnts;
        }
      }
      ++v6;
    }
    while ( v6 < mapEnts->numEdgeLists );
    __asm
    {
      vmovaps xmm8, [rsp+0E8h+var_58]
      vmovaps xmm7, [rsp+0E8h+var_48]
      vmovaps xmm6, [rsp+0E8h+var_38]
    }
  }
}

/*
==============
CG_Edge_DrawQueryResults
==============
*/

void __fastcall CG_Edge_DrawQueryResults(const BgHandler *handler, const ntl::fixed_set<FlaggedEdge,512,ntl::less<FlaggedEdge,FlaggedEdge> > *edges, double maxQueryDistance, int edgeFlagIndex)
{
  __int64 v11; 
  const dvar_t *v17; 
  bool enabled; 
  const dvar_t *v19; 
  bool v20; 
  const dvar_t *v21; 
  bool v22; 
  const dvar_t *v23; 
  bool showClosestPoint; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  __int64 v48; 
  vec4_t *debugDrawColorDark; 
  double v50; 
  vec4_t outHeatmapColor; 
  vec4_t v52; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  v11 = edgeFlagIndex;
  __asm { vmovaps xmm7, xmm2 }
  if ( (unsigned __int64)&v48 == _security_cookie )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm2
      vmovsd  [rsp+0E8h+var_A8], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0E8h+debugDrawColorDark], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 216, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( maxQueryDistance )", "%s < %s\n\t%g, %g", "0.0f", "maxQueryDistance", *(double *)&debugDrawColorDark, v50) )
      __debugbreak();
  }
  v17 = DCONST_DVARBOOL_edge_debugDrawDistanceColor;
  if ( !DCONST_DVARBOOL_edge_debugDrawDistanceColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDistanceColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  enabled = v17->current.enabled;
  v19 = DCONST_DVARBOOL_edge_debugDrawOrientation;
  if ( !DCONST_DVARBOOL_edge_debugDrawOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawOrientation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = v19->current.enabled;
  v21 = DCONST_DVARBOOL_edge_debugDrawDepthTest;
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = v21->current.enabled;
  v23 = DCONST_DVARBOOL_edge_debugDrawQueryShowPoints;
  if ( !DCONST_DVARBOOL_edge_debugDrawQueryShowPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryShowPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  showClosestPoint = v23->current.enabled;
  __asm { vmovss  xmm6, cs:__real@3f28f5c3 }
  _RBX = edges->m_endNodeBase.mp_left;
  p_m_endNodeBase = &edges->m_endNodeBase;
  _RAX = &bg_edgeDebugColors[v11];
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm2, dword ptr [rax+8]
    vmovss  xmm3, dword ptr [rax+0Ch]
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor], xmm0
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsp+0E8h+var_88], xmm0
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor+4], xmm1
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rsp+0E8h+var_88+8], xmm0
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor+8], xmm2
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor+0Ch], xmm3
    vmovss  dword ptr [rsp+0E8h+var_88+4], xmm1
    vmovss  dword ptr [rsp+0E8h+var_88+0Ch], xmm3
  }
  if ( _RBX != p_m_endNodeBase )
  {
    __asm
    {
      vmovaps [rsp+0E8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f800000
    }
    do
    {
      if ( enabled )
      {
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vdivss  xmm1, xmm0, xmm7
          vsubss  xmm0, xmm8, xmm1; value
        }
        CalcHeatmapColor(*(float *)&_XMM0, &outHeatmapColor);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+outHeatmapColor]
          vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+outHeatmapColor+4]
          vmulss  xmm2, xmm6, dword ptr [rsp+0E8h+outHeatmapColor+8]
          vmovss  dword ptr [rsp+0E8h+var_88], xmm1
          vmovss  dword ptr [rsp+0E8h+var_88+4], xmm0
          vmovss  dword ptr [rsp+0E8h+var_88+8], xmm2
        }
      }
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      __asm { vmovss  xmm2, dword ptr [rbx+28h]; edgeFraction }
      CG_Edge_DrawDebugEdge(handler, *(EdgeId *)&_RBX[1].m_color, *(double *)&_XMM2, v20, v22, showClosestPoint, &outHeatmapColor, &v52);
      _RBX = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(_RBX);
    }
    while ( _RBX != p_m_endNodeBase );
    __asm { vmovaps xmm8, [rsp+0E8h+var_68] }
  }
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_Edge_DrawQueryResults
==============
*/
void CG_Edge_DrawQueryResults(const BgHandler *handler, unsigned __int64 edgeCount, const EdgeId *edgeIdPool, const float *edgeFractionPool, const float *edgeDistPool, float maxQueryDistance, int edgeFlagIndex)
{
  const dvar_t *v20; 
  bool enabled; 
  const dvar_t *v22; 
  bool v23; 
  const dvar_t *v24; 
  bool v25; 
  const dvar_t *v26; 
  bool showClosestPoint; 
  __int64 v50; 
  vec4_t *debugDrawColorDark; 
  double v52; 
  BgHandler *handlera; 
  vec4_t outHeatmapColor; 
  vec4_t v55; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovss  xmm8, [rsp+0E8h+maxQueryDistance]
  }
  _RBX = edgeFractionPool;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm8, xmm0
  }
  handlera = (BgHandler *)handler;
  if ( (unsigned __int64)&v50 == _security_cookie )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+0E8h+var_A8], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0E8h+debugDrawColorDark], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_edge.cpp", 187, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( maxQueryDistance )", "%s < %s\n\t%g, %g", "0.0f", "maxQueryDistance", *(double *)&debugDrawColorDark, v52) )
      __debugbreak();
  }
  v20 = DCONST_DVARBOOL_edge_debugDrawDistanceColor;
  if ( !DCONST_DVARBOOL_edge_debugDrawDistanceColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDistanceColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  enabled = v20->current.enabled;
  v22 = DCONST_DVARBOOL_edge_debugDrawOrientation;
  if ( !DCONST_DVARBOOL_edge_debugDrawOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawOrientation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = v22->current.enabled;
  v24 = DCONST_DVARBOOL_edge_debugDrawDepthTest;
  if ( !DCONST_DVARBOOL_edge_debugDrawDepthTest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawDepthTest") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = v24->current.enabled;
  v26 = DCONST_DVARBOOL_edge_debugDrawQueryShowPoints;
  if ( !DCONST_DVARBOOL_edge_debugDrawQueryShowPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "edge_debugDrawQueryShowPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  showClosestPoint = v26->current.enabled;
  __asm { vmovss  xmm6, cs:__real@3f28f5c3 }
  _RAX = &bg_edgeDebugColors[edgeFlagIndex];
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm2, dword ptr [rax+8]
    vmovss  xmm3, dword ptr [rax+0Ch]
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor], xmm0
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rsp+0E8h+var_80], xmm0
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor+4], xmm1
    vmulss  xmm0, xmm2, xmm6
    vmulss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rsp+0E8h+var_80+8], xmm0
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor+8], xmm2
    vmovss  dword ptr [rsp+0E8h+outHeatmapColor+0Ch], xmm3
    vmovss  dword ptr [rsp+0E8h+var_80+4], xmm1
    vmovss  dword ptr [rsp+0E8h+var_80+0Ch], xmm3
  }
  if ( edgeCount )
  {
    __asm { vmovaps [rsp+0E8h+var_58], xmm7 }
    _R13 = (char *)((char *)edgeDistPool - (char *)_RBX);
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    do
    {
      if ( enabled )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+r13]
          vdivss  xmm1, xmm0, xmm8
          vsubss  xmm0, xmm7, xmm1; value
        }
        CalcHeatmapColor(*(float *)&_XMM0, &outHeatmapColor);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+outHeatmapColor]
          vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+outHeatmapColor+4]
          vmulss  xmm2, xmm6, dword ptr [rsp+0E8h+outHeatmapColor+8]
          vmovss  dword ptr [rsp+0E8h+var_80], xmm1
          vmovss  dword ptr [rsp+0E8h+var_80+4], xmm0
          vmovss  dword ptr [rsp+0E8h+var_80+8], xmm2
        }
      }
      __asm { vmovss  xmm2, dword ptr [rbx]; edgeFraction }
      CG_Edge_DrawDebugEdge(handlera, *edgeIdPool, *(double *)&_XMM2, v23, v25, showClosestPoint, &outHeatmapColor, &v55);
      ++_RBX;
      ++edgeIdPool;
      --edgeCount;
    }
    while ( edgeCount );
    __asm { vmovaps xmm7, [rsp+0E8h+var_58] }
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  __int128 v90; 
  __int128 v91; 
  __int128 v92; 
  __int128 v93; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps [rsp+0B8h+var_98], xmm14
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm11, dword ptr [rcx+18h]
    vmovss  xmm13, dword ptr [rcx+24h]
    vmovss  xmm14, dword ptr [rcx+28h]
    vmovss  xmm12, dword ptr [rcx+2Ch]
  }
  HIDWORD(v90) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vinsertps xmm4, xmm4, dword ptr [rcx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rcx+8], 20h ; ' '
    vmovss  xmm0, dword ptr [rcx+0Ch]
    vmovups xmmword ptr [rsp], xmm4
  }
  HIDWORD(v91) = 0;
  __asm
  {
    vmovups xmm10, xmmword ptr [rsp]
    vmovss  xmm10, xmm10, xmm0
    vinsertps xmm10, xmm10, dword ptr [rcx+10h], 10h
    vinsertps xmm10, xmm10, dword ptr [rcx+14h], 20h ; ' '
    vsubps  xmm3, xmm10, xmm4
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm8, xmm3, xmm1
    vmovups xmmword ptr [rsp], xmm10
  }
  HIDWORD(v92) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp]
    vmovss  xmm9, xmm9, xmm11
    vinsertps xmm9, xmm9, dword ptr [rcx+1Ch], 10h
    vinsertps xmm9, xmm9, dword ptr [rcx+20h], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm9
  }
  HIDWORD(v93) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp]
    vmovss  xmm6, xmm6, xmm13
    vinsertps xmm6, xmm6, xmm14, 10h
    vinsertps xmm6, xmm6, xmm12, 20h ; ' '
    vsubps  xmm4, xmm6, xmm4
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm5, xmm4, xmm1
    vsubps  xmm3, xmm6, xmm9
    vmulps  xmm0, xmm3, xmm3
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm3, xmm1
    vsubps  xmm4, xmm10, xmm9
    vmulps  xmm0, xmm4, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vdivps  xmm6, xmm4, xmm1
    vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
    vshufps xmm2, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm4, xmm2, xmm0
    vshufps xmm3, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm0, xmm3, xmm1
    vsubps  xmm5, xmm4, xmm0
    vshufps xmm2, xmm7, xmm7, 0C9h ; 'É'
    vshufps xmm1, xmm6, xmm6, 0D2h ; 'Ò'
    vmulps  xmm4, xmm2, xmm1
    vshufps xmm0, xmm6, xmm6, 0C9h ; 'É'
    vshufps xmm3, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm1, xmm3, xmm0
    vsubps  xmm2, xmm4, xmm1
    vmulps  xmm4, xmm5, xmm2
    vinsertps xmm0, xmm4, xmm4, 8
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm2, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, [rsp+0B8h+var_88]
    vmovaps xmm14, [rsp+0B8h+var_98]
  }
}

