/*
==============
TacGraph_DebugDraw_Point
==============
*/

void __fastcall TacGraph_DebugDraw_Point(const tacpoint_t *pPoint, const vec4_t *color, int duration)
{
  ?TacGraph_DebugDraw_Point@@YAXPEBUtacpoint_t@@AEBTvec4_t@@H@Z(pPoint, color, duration);
}

/*
==============
TacGraph_DebugDraw
==============
*/

void __fastcall TacGraph_DebugDraw(const TacticalGraphData *pTacData)
{
  ?TacGraph_DebugDraw@@YAXPEBUTacticalGraphData@@@Z(pTacData);
}

/*
==============
TacGraphSearch_GetMaxDepth_r
==============
*/
__int64 TacGraphSearch_GetMaxDepth_r(tacpoint_search_node_t *pNode)
{
  int v3; 
  __int64 i; 
  int MaxDepth_r; 

  if ( !pNode->m_ChildNodes )
    return 1i64;
  if ( pNode->m_PointListRoot != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_debug.cpp", 150, ASSERT_TYPE_ASSERT, "(pNode->m_PointListRoot == cTacPoint_InvalidIndex)", (const char *)&queryFormat, "pNode->m_PointListRoot == cTacPoint_InvalidIndex") )
    __debugbreak();
  v3 = 0;
  for ( i = 0i64; i < 4; ++i )
  {
    MaxDepth_r = TacGraphSearch_GetMaxDepth_r(pNode->m_ChildNodes[i]);
    if ( MaxDepth_r > v3 )
      v3 = MaxDepth_r;
  }
  return (unsigned int)(v3 + 1);
}

/*
==============
TacGraphSearch_GetMostPointsInNode_r
==============
*/
__int64 TacGraphSearch_GetMostPointsInNode_r(const TacticalGraph *pGraph, tacpoint_search_node_t *pNode)
{
  unsigned __int16 m_PointListRoot; 
  unsigned int v3; 
  __int64 i; 
  int MostPointsInNode_r; 

  m_PointListRoot = pNode->m_PointListRoot;
  v3 = 0;
  if ( m_PointListRoot == 0xFFFF )
  {
    if ( pNode->m_ChildNodes )
    {
      for ( i = 0i64; i < 4; ++i )
      {
        MostPointsInNode_r = TacGraphSearch_GetMostPointsInNode_r(pGraph, pNode->m_ChildNodes[i]);
        if ( MostPointsInNode_r > (int)v3 )
          v3 = MostPointsInNode_r;
      }
    }
    return v3;
  }
  else
  {
    do
    {
      ++v3;
      m_PointListRoot = pGraph->m_Points[m_PointListRoot].m_SearchNext;
    }
    while ( m_PointListRoot != 0xFFFF );
    return v3;
  }
}

/*
==============
TacGraph_DebugDraw
==============
*/
void TacGraph_DebugDraw(const TacticalGraphData *pTacData)
{
  signed __int64 v1; 
  void *v2; 
  const TacticalGraphData *v3; 
  const dvar_t *v4; 
  __int64 v5; 
  unsigned int i; 
  sentient_s *v7; 
  const tacpoint_t *v8; 
  const dvar_t *v9; 
  int integer; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  nav_space_s *MostLikelySpaceWithRadius; 
  const tacpoint_t *ClosestPointWithStaticNavLos; 
  const tacpoint_t *v17; 
  const TacticalGraph *v18; 
  unsigned __int16 PointIndex; 
  int PointsInRadiusWithinCone; 
  __int64 v21; 
  const tacpoint_t *v22; 
  unsigned __int16 v23; 
  bool HasVis; 
  const vec4_t *v25; 
  unsigned __int16 v26; 
  const dvar_t *v27; 
  bool enabled; 
  tacpoint_t *m_Points; 
  bfx::AreaHandle hArea; 
  __int64 v32; 
  vec3_t pos; 
  vec3_t vEyePosOut; 
  vec3_t forward; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t outClosestPos; 
  tacpoint_t *ppOutPoints[512]; 
  char text[16]; 
  char dest[512]; 

  v2 = alloca(v1);
  v32 = -2i64;
  v3 = pTacData;
  v4 = DVARBOOL_ai_showNearestTacPoints;
  if ( !DVARBOOL_ai_showNearestTacPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNearestTacPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = 0i64;
  if ( v4->current.enabled && Nav_IsRunning() )
  {
    if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_debug.cpp", 251, ASSERT_TYPE_ASSERT, "(level.sentients != 0)", (const char *)&queryFormat, "level.sentients != NULL") )
      __debugbreak();
    for ( i = 0; i < level.maxSentients; ++i )
    {
      v7 = &level.sentients[i];
      if ( v7->inuse && v7->ent->s.eType != ET_INVISIBLE )
      {
        v8 = Sentient_NearestTacPoint(&level.sentients[i]);
        if ( v8 )
        {
          Sentient_GetDebugEyePosition(v7, &vEyePosOut);
          vEyePosOut.v[2] = vEyePosOut.v[2] + -5.0;
          G_DebugLine(&vEyePosOut, &v8->m_Pos, &colorGreen, 1);
          TacGraph_DebugDraw_Point(v8, &colorGreen, 0);
        }
      }
    }
  }
  v9 = DVARINT_ai_showTacGraph;
  if ( !DVARINT_ai_showTacGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showTacGraph") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( integer && Nav_IsRunning() && cg_t::ms_allocatedCount > 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(pos.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(pos.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(pos.v[2]) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    forward = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->refdef.view.axis.m[0];
    bfx::AreaHandle::AreaHandle(&hArea);
    pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
    *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
    pPathSpec.m_usePathSharingPenalty = 0;
    pPathSpec.m_pathSharingPenalty = 0.0;
    pPathSpec.m_maxPathSharingPenalty = 0.0;
    pPathSpec.m_maxSearchDist = 0.0;
    bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
    pPathSpec.m_snapMode = SNAP_CLOSEST;
    pPathSpec.m_obstacleBlockageFlags = 0;
    MostLikelySpaceWithRadius = Nav_FindMostLikelySpaceWithRadius(&pos, 15.0, NAV_LAYER_HUMAN, NULL);
    if ( !MostLikelySpaceWithRadius )
    {
      MostLikelySpaceWithRadius = Nav_GetDefaultSpace();
      if ( !MostLikelySpaceWithRadius )
        goto LABEL_53;
    }
    Nav_GetSpaceUp(MostLikelySpaceWithRadius, &outUp);
    Nav_GetClosestVerticalPos(&pos, &outUp, 0, &MostLikelySpaceWithRadius->hSpace, &pPathSpec, &outClosestPos, &hArea);
    ClosestPointWithStaticNavLos = TacGraphSearch_FindClosestPointWithStaticNavLos(v3, &pos, &pos, &hArea);
    v17 = ClosestPointWithStaticNavLos;
    if ( ClosestPointWithStaticNavLos )
    {
      Com_sprintf(dest, 0x200ui64, "tacgraph %d", ClosestPointWithStaticNavLos->m_GraphIdx);
      G_Main_AddDebugString2D(30.0, 650.0, &colorBlue, 1.2, dest);
      v18 = &v3->m_TacGraphs[v17->m_GraphIdx];
      if ( integer == 1 )
      {
        PointIndex = TacGraph_GetPointIndex(v17);
        TacGraph_DebugDraw_Point(v17, &colorYellow, 0);
        TacGraph_DebugDraw_Area(v17, &colorYellow);
        PointsInRadiusWithinCone = TacGraphSearch_FindPointsInRadiusWithinCone(v18, &pos, 512.0, &forward, 0.0, (const tacpoint_t **)ppOutPoints, 512);
        v21 = PointsInRadiusWithinCone;
        if ( PointsInRadiusWithinCone > 0 )
        {
          do
          {
            v22 = ppOutPoints[v5];
            if ( v17 != v22 )
            {
              v23 = TacGraph_GetPointIndex(v22);
              HasVis = TacVisGraph_HasVis(v18, PointIndex, v23);
              v25 = &colorRed;
              if ( HasVis )
                v25 = &colorGreen;
              TacGraph_DebugDraw_Point(ppOutPoints[v5], v25, 0);
            }
            ++v5;
          }
          while ( v5 < v21 );
        }
LABEL_53:
        bfx::AreaHandle::~AreaHandle(&hArea);
        return;
      }
      if ( (unsigned int)(integer - 2) <= 1 )
      {
        v26 = TacGraph_GetPointIndex(v17);
        TacGraph_DebugDraw_Point(v17, &colorYellow, 0);
        TacGraph_DebugDraw_Area(v17, &colorYellow);
        v27 = DVARBOOL_ai_showTacGraphIDs;
        if ( !DVARBOOL_ai_showTacGraphIDs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showTacGraphIDs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        enabled = v27->current.enabled;
        if ( v18->m_NumPoints )
        {
          do
          {
            if ( (_WORD)v5 != v26 && TacVisGraph_HasVis(v18, v5, v26) )
            {
              if ( integer == 2 )
              {
                G_DebugLine(&v17->m_Pos, &v18->m_Points[(unsigned __int16)v5].m_Pos, &colorGreen, 0);
                if ( enabled )
                {
                  m_Points = v18->m_Points;
                  *(_QWORD *)vEyePosOut.v = *(_QWORD *)v18->m_Points[(unsigned __int16)v5].m_Pos.v;
                  vEyePosOut.v[2] = m_Points[(unsigned __int16)v5].m_Pos.v[2] + 6.0;
                  Com_sprintf(text, 0x10ui64, "%d", (unsigned __int16)v5);
                  G_Main_AddDebugString(&vEyePosOut, &colorYellow, 1.0, text);
                }
              }
              else
              {
                TacGraph_DebugDraw_Point(&v18->m_Points[(unsigned __int16)v5], &colorGreen, 0);
              }
            }
            LOWORD(v5) = v5 + 1;
          }
          while ( (unsigned __int16)v5 < v18->m_NumPoints );
        }
        v3 = pTacData;
      }
    }
    if ( integer == 4 )
      TacGraph_DebugDraw_Stats(v3);
    goto LABEL_53;
  }
}

/*
==============
TacGraph_DebugDraw_Area
==============
*/
void TacGraph_DebugDraw_Area(const tacpoint_t *pPoint, const vec4_t *color)
{
  bfx::AreaHandle *AreaForPoint; 
  int v4; 
  int NumEdges; 
  bfx::Vector3 *EdgeStartPos; 
  float m_z; 
  float m_y; 
  bfx::Vector3 *EdgeEndPos; 
  float v10; 
  float v11; 
  bfx::Vector3 result; 
  bfx::Vector3 v13; 
  vec3_t start; 
  vec3_t end; 

  AreaForPoint = TacGraph_GetAreaForPoint(pPoint);
  if ( bfx::AreaHandle::IsValid(AreaForPoint) )
  {
    v4 = 0;
    NumEdges = bfx::AreaHandle::GetNumEdges(AreaForPoint);
    if ( NumEdges > 0 )
    {
      do
      {
        EdgeStartPos = bfx::AreaHandle::GetEdgeStartPos(AreaForPoint, &result, v4);
        m_z = EdgeStartPos->m_z;
        m_y = EdgeStartPos->m_y;
        start.v[0] = EdgeStartPos->m_x;
        start.v[1] = m_y;
        start.v[2] = m_z;
        EdgeEndPos = bfx::AreaHandle::GetEdgeEndPos(AreaForPoint, &v13, v4);
        v10 = EdgeEndPos->m_z;
        v11 = EdgeEndPos->m_y;
        end.v[0] = EdgeEndPos->m_x;
        start.v[2] = start.v[2] + 2.0;
        end.v[1] = v11;
        end.v[2] = v10 + 2.0;
        G_DebugLine(&start, &end, color, 0);
        ++v4;
      }
      while ( v4 < NumEdges );
    }
  }
}

/*
==============
TacGraph_DebugDraw_Point
==============
*/
void TacGraph_DebugDraw_Point(const tacpoint_t *pPoint, const vec4_t *color, int duration)
{
  float v3; 
  float v4; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  const dvar_t *v12; 
  unsigned __int16 PointIndex; 
  float v14; 
  float v15; 
  vec3_t end; 
  vec3_t start; 
  vec3_t xyz; 
  char dest[16]; 

  v3 = pPoint->m_Pos.v[2];
  v4 = pPoint->m_Pos.v[0];
  start.v[1] = pPoint->m_Pos.v[1];
  start.v[2] = v3;
  end.v[1] = start.v[1];
  end.v[2] = v3;
  start.v[0] = v4 - 4.0;
  end.v[0] = v4 + 4.0;
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  v8 = pPoint->m_Pos.v[2];
  v9 = pPoint->m_Pos.v[1];
  start.v[0] = pPoint->m_Pos.v[0];
  start.v[2] = v8;
  end.v[0] = start.v[0];
  end.v[2] = v8;
  start.v[1] = v9 - 4.0;
  end.v[1] = v9 + 4.0;
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  v10 = pPoint->m_Pos.v[1];
  v11 = pPoint->m_Pos.v[2];
  start.v[0] = pPoint->m_Pos.v[0];
  start.v[1] = v10;
  end.v[0] = start.v[0];
  end.v[1] = v10;
  start.v[2] = v11 - 4.0;
  end.v[2] = v11 + 4.0;
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  v12 = DVARBOOL_ai_showTacGraphIDs;
  if ( !DVARBOOL_ai_showTacGraphIDs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showTacGraphIDs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    PointIndex = TacGraph_GetPointIndex(pPoint);
    v14 = pPoint->m_Pos.v[1];
    v15 = pPoint->m_Pos.v[2] + 4.0;
    xyz.v[0] = pPoint->m_Pos.v[0];
    xyz.v[1] = v14;
    xyz.v[2] = v15;
    Com_sprintf(dest, 0x10ui64, "%d", PointIndex);
    G_Main_AddDebugStringWithDuration(&xyz, color, 0.75, dest, duration);
  }
}

/*
==============
TacGraph_DebugDraw_Stats
==============
*/
void TacGraph_DebugDraw_Stats(const TacticalGraphData *pTacData)
{
  __int128 v2; 
  int v3; 
  __int64 v4; 
  TacticalGraph *v5; 
  __int128 v6; 
  unsigned int MaxDepth_r; 
  unsigned int MostPointsInNode_r; 
  char dest[512]; 

  G_Main_AddDebugString2D(30.0, 50.0, &colorYellow, 1.0, "TacGraph Stats");
  v2 = LODWORD(FLOAT_68_0);
  v3 = 0;
  if ( pTacData->m_NumTacGraphs > 0 )
  {
    v4 = 0i64;
    do
    {
      v5 = &pTacData->m_TacGraphs[v4];
      v6 = v2;
      Com_sprintf(dest, 0x200ui64, "TacGraph %d", (unsigned int)v3);
      G_Main_AddDebugString2D(30.0, *(float *)&v2 + 18.0, &colorYellow, 1.0, dest);
      *(float *)&v6 = (float)(*(float *)&v2 + 18.0) + 18.0;
      Com_sprintf(dest, 0x200ui64, "Num tacpoints: %d", v5->m_NumPoints);
      G_Main_AddDebugString2D(30.0, *(float *)&v6, &colorYellow, 1.0, dest);
      *(float *)&v6 = *(float *)&v6 + 18.0;
      Com_sprintf(dest, 0x200ui64, "Tacpoints bytes: %zu", 40i64 * v5->m_NumPoints);
      G_Main_AddDebugString2D(30.0, *(float *)&v6, &colorYellow, 1.0, dest);
      *(float *)&v6 = *(float *)&v6 + 18.0;
      Com_sprintf(dest, 0x200ui64, "Vis bytes: %d", (unsigned int)v5->m_NumVisBytes);
      G_Main_AddDebugString2D(30.0, *(float *)&v6, &colorYellow, 1.0, dest);
      *(float *)&v6 = *(float *)&v6 + 18.0;
      MaxDepth_r = TacGraphSearch_GetMaxDepth_r(&v5->m_SearchRoot);
      Com_sprintf(dest, 0x200ui64, "Max search depth: %d", MaxDepth_r);
      G_Main_AddDebugString2D(30.0, *(float *)&v6, &colorYellow, 1.0, dest);
      *(float *)&v6 = *(float *)&v6 + 18.0;
      MostPointsInNode_r = TacGraphSearch_GetMostPointsInNode_r(v5, &v5->m_SearchRoot);
      Com_sprintf(dest, 0x200ui64, "Most points in search node: %d", MostPointsInNode_r);
      G_Main_AddDebugString2D(30.0, *(float *)&v6, &colorYellow, 1.0, dest);
      ++v3;
      ++v4;
      *(float *)&v6 = *(float *)&v6 + 18.0;
      v2 = v6;
    }
    while ( v3 < pTacData->m_NumTacGraphs );
  }
}

