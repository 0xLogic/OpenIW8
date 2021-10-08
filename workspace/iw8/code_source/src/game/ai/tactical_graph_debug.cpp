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
  void *v4; 
  const TacticalGraphData *v5; 
  const dvar_t *v6; 
  __int64 v7; 
  unsigned int v8; 
  sentient_s *v9; 
  const tacpoint_t *v10; 
  const dvar_t *v12; 
  int integer; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  nav_space_s *MostLikelySpaceWithRadius; 
  const tacpoint_t *ClosestPointWithStaticNavLos; 
  const tacpoint_t *v26; 
  const TacticalGraph *v30; 
  unsigned __int16 PointIndex; 
  int PointsInRadiusWithinCone; 
  __int64 v34; 
  const tacpoint_t *v35; 
  unsigned __int16 v36; 
  bool HasVis; 
  const vec4_t *v38; 
  unsigned __int16 v39; 
  const dvar_t *v40; 
  bool enabled; 
  float fmt; 
  bfx::AreaHandle hArea; 
  __int64 v56; 
  vec3_t pos; 
  vec3_t vEyePosOut; 
  vec3_t forward; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  vec3_t outClosestPos; 
  tacpoint_t *ppOutPoints[512]; 
  char text[16]; 
  char dest[512]; 
  char v68; 

  v4 = alloca(v1);
  v56 = -2i64;
  __asm
  {
    vmovaps [rsp+1370h+var_30], xmm6
    vmovaps [rsp+1370h+var_40], xmm7
  }
  v5 = pTacData;
  v6 = DVARBOOL_ai_showNearestTacPoints;
  if ( !DVARBOOL_ai_showNearestTacPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNearestTacPoints") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = 0i64;
  if ( v6->current.enabled && Nav_IsRunning() )
  {
    if ( !level.sentients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\tactical_graph_debug.cpp", 251, ASSERT_TYPE_ASSERT, "(level.sentients != 0)", (const char *)&queryFormat, "level.sentients != NULL") )
      __debugbreak();
    v8 = 0;
    if ( level.maxSentients )
    {
      __asm { vmovss  xmm6, cs:__real@c0a00000 }
      do
      {
        v9 = &level.sentients[v8];
        if ( v9->inuse && v9->ent->s.eType != ET_INVISIBLE )
        {
          v10 = Sentient_NearestTacPoint(&level.sentients[v8]);
          if ( v10 )
          {
            Sentient_GetDebugEyePosition(v9, &vEyePosOut);
            __asm
            {
              vaddss  xmm1, xmm6, dword ptr [rbp+1270h+vEyePosOut+8]
              vmovss  dword ptr [rbp+1270h+vEyePosOut+8], xmm1
            }
            G_DebugLine(&vEyePosOut, &v10->m_Pos, &colorGreen, 1);
            TacGraph_DebugDraw_Point(v10, &colorGreen, 0);
          }
        }
        ++v8;
      }
      while ( v8 < level.maxSentients );
    }
  }
  v12 = DVARINT_ai_showTacGraph;
  if ( !DVARINT_ai_showTacGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showTacGraph") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
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
    _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+6944h]
      vmovss  dword ptr [rbp+1270h+forward], xmm0
      vmovss  xmm1, dword ptr [rax+6948h]
      vmovss  dword ptr [rbp+1270h+forward+4], xmm1
      vmovss  xmm0, dword ptr [rax+694Ch]
      vmovss  dword ptr [rbp+1270h+forward+8], xmm0
    }
    bfx::AreaHandle::AreaHandle(&hArea);
    pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
    *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
    *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
    pPathSpec.m_usePathSharingPenalty = 0;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rbp+1270h+pPathSpec.m_pathSharingPenalty], xmm6
      vmovss  [rbp+1270h+pPathSpec.m_maxPathSharingPenalty], xmm6
      vmovss  [rbp+1270h+pPathSpec.m_maxSearchDist], xmm6
    }
    bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
    pPathSpec.m_snapMode = SNAP_CLOSEST;
    pPathSpec.m_obstacleBlockageFlags = 0;
    __asm { vmovss  xmm1, cs:__real@41700000; radius }
    MostLikelySpaceWithRadius = Nav_FindMostLikelySpaceWithRadius(&pos, *(float *)&_XMM1, NAV_LAYER_HUMAN, NULL);
    if ( !MostLikelySpaceWithRadius )
    {
      MostLikelySpaceWithRadius = Nav_GetDefaultSpace();
      if ( !MostLikelySpaceWithRadius )
        goto LABEL_55;
    }
    Nav_GetSpaceUp(MostLikelySpaceWithRadius, &outUp);
    Nav_GetClosestVerticalPos(&pos, &outUp, 0, &MostLikelySpaceWithRadius->hSpace, &pPathSpec, &outClosestPos, &hArea);
    ClosestPointWithStaticNavLos = TacGraphSearch_FindClosestPointWithStaticNavLos(v5, &pos, &pos, &hArea);
    v26 = ClosestPointWithStaticNavLos;
    if ( ClosestPointWithStaticNavLos )
    {
      Com_sprintf(dest, 0x200ui64, "tacgraph %d", ClosestPointWithStaticNavLos->m_GraphIdx);
      __asm
      {
        vmovss  xmm3, cs:__real@3f99999a; scale
        vmovss  xmm1, cs:__real@44228000; y
        vmovss  xmm0, cs:__real@41f00000; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorBlue, *(float *)&_XMM3, dest);
      v30 = &v5->m_TacGraphs[v26->m_GraphIdx];
      if ( integer == 1 )
      {
        PointIndex = TacGraph_GetPointIndex(v26);
        TacGraph_DebugDraw_Point(v26, &colorYellow, 0);
        TacGraph_DebugDraw_Area(v26, &colorYellow);
        __asm
        {
          vmovss  dword ptr [rsp+1370h+fmt], xmm6
          vmovss  xmm2, cs:__real@44000000; radius
        }
        PointsInRadiusWithinCone = TacGraphSearch_FindPointsInRadiusWithinCone(v30, &pos, *(float *)&_XMM2, &forward, fmt, (const tacpoint_t **)ppOutPoints, 512);
        v34 = PointsInRadiusWithinCone;
        if ( PointsInRadiusWithinCone > 0 )
        {
          do
          {
            v35 = ppOutPoints[v7];
            if ( v26 != v35 )
            {
              v36 = TacGraph_GetPointIndex(v35);
              HasVis = TacVisGraph_HasVis(v30, PointIndex, v36);
              v38 = &colorRed;
              if ( HasVis )
                v38 = &colorGreen;
              TacGraph_DebugDraw_Point(ppOutPoints[v7], v38, 0);
            }
            ++v7;
          }
          while ( v7 < v34 );
        }
LABEL_55:
        bfx::AreaHandle::~AreaHandle(&hArea);
        goto LABEL_56;
      }
      if ( (unsigned int)(integer - 2) <= 1 )
      {
        v39 = TacGraph_GetPointIndex(v26);
        TacGraph_DebugDraw_Point(v26, &colorYellow, 0);
        TacGraph_DebugDraw_Area(v26, &colorYellow);
        v40 = DVARBOOL_ai_showTacGraphIDs;
        if ( !DVARBOOL_ai_showTacGraphIDs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showTacGraphIDs") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v40);
        enabled = v40->current.enabled;
        if ( v30->m_NumPoints )
        {
          __asm
          {
            vmovss  xmm6, cs:__real@40c00000
            vmovss  xmm7, cs:__real@3f800000
          }
          do
          {
            if ( (_WORD)v7 != v39 && TacVisGraph_HasVis(v30, v7, v39) )
            {
              if ( integer == 2 )
              {
                _RSI = 5i64 * (unsigned __int16)v7;
                G_DebugLine(&v26->m_Pos, &v30->m_Points[(unsigned __int16)v7].m_Pos, &colorGreen, 0);
                if ( enabled )
                {
                  _RAX = v30->m_Points;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rax+rsi*8]
                    vmovss  dword ptr [rsp+1370h+vEyePosOut], xmm0
                    vmovss  xmm1, dword ptr [rax+rsi*8+4]
                    vmovss  dword ptr [rsp+1370h+vEyePosOut+4], xmm1
                    vaddss  xmm2, xmm6, dword ptr [rax+rsi*8+8]
                    vmovss  dword ptr [rbp+1270h+vEyePosOut+8], xmm2
                  }
                  Com_sprintf(text, 0x10ui64, "%d", (unsigned __int16)v7);
                  __asm { vmovaps xmm2, xmm7; scale }
                  G_Main_AddDebugString(&vEyePosOut, &colorYellow, *(float *)&_XMM2, text);
                }
              }
              else
              {
                TacGraph_DebugDraw_Point(&v30->m_Points[(unsigned __int16)v7], &colorGreen, 0);
              }
            }
            LOWORD(v7) = v7 + 1;
          }
          while ( (unsigned __int16)v7 < v30->m_NumPoints );
        }
        v5 = pTacData;
      }
    }
    if ( integer == 4 )
      TacGraph_DebugDraw_Stats(v5);
    goto LABEL_55;
  }
LABEL_56:
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
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
  int v5; 
  int NumEdges; 
  bfx::Vector3 result; 
  bfx::Vector3 v20; 
  vec3_t start; 
  vec3_t end; 

  AreaForPoint = TacGraph_GetAreaForPoint(pPoint);
  if ( bfx::AreaHandle::IsValid(AreaForPoint) )
  {
    v5 = 0;
    NumEdges = bfx::AreaHandle::GetNumEdges(AreaForPoint);
    if ( NumEdges > 0 )
    {
      __asm
      {
        vmovaps [rsp+88h+var_28], xmm6
        vmovss  xmm6, cs:__real@40000000
      }
      do
      {
        _RAX = bfx::AreaHandle::GetEdgeStartPos(AreaForPoint, &result, v5);
        __asm
        {
          vmovss  xmm2, dword ptr [rax+8]
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rsp+88h+start], xmm0
          vmovss  dword ptr [rsp+88h+start+4], xmm1
          vmovss  dword ptr [rsp+88h+start+8], xmm2
        }
        _RAX = bfx::AreaHandle::GetEdgeEndPos(AreaForPoint, &v20, v5);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm2, dword ptr [rax+8]
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  dword ptr [rsp+88h+end], xmm0
          vaddss  xmm0, xmm6, dword ptr [rsp+88h+start+8]
          vaddss  xmm2, xmm6, xmm2
          vmovss  dword ptr [rsp+88h+start+8], xmm0
          vmovss  dword ptr [rsp+88h+end+4], xmm1
          vmovss  dword ptr [rsp+88h+end+8], xmm2
        }
        G_DebugLine(&start, &end, color, 0);
        ++v5;
      }
      while ( v5 < NumEdges );
      __asm { vmovaps xmm6, [rsp+88h+var_28] }
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
  const dvar_t *v23; 
  unsigned __int16 PointIndex; 
  vec3_t end; 
  vec3_t start; 
  vec3_t xyz; 
  char dest[16]; 

  __asm
  {
    vmovaps [rsp+0C0h+var_30], xmm6
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  xmm2, dword ptr [rcx]
    vmovss  xmm6, cs:__real@40800000
    vmovss  dword ptr [rbp+57h+start+4], xmm1
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vmovss  dword ptr [rbp+57h+end+4], xmm1
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vsubss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm2, xmm6
  }
  _RBX = pPoint;
  __asm
  {
    vmovss  dword ptr [rbp+57h+start], xmm0
    vmovss  dword ptr [rbp+57h+end], xmm1
  }
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+57h+start], xmm1
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vmovss  dword ptr [rbp+57h+end], xmm1
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vsubss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rbp+57h+start+4], xmm0
    vmovss  dword ptr [rbp+57h+end+4], xmm1
  }
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+57h+start], xmm1
    vmovss  dword ptr [rbp+57h+start+4], xmm0
    vmovss  dword ptr [rbp+57h+end], xmm1
    vmovss  dword ptr [rbp+57h+end+4], xmm0
    vsubss  xmm0, xmm2, xmm6
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vmovss  dword ptr [rbp+57h+end+8], xmm1
  }
  G_DebugLineWithDuration(&start, &end, color, 0, duration);
  v23 = DVARBOOL_ai_showTacGraphIDs;
  if ( !DVARBOOL_ai_showTacGraphIDs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showTacGraphIDs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
  {
    PointIndex = TacGraph_GetPointIndex(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vaddss  xmm2, xmm6, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+57h+xyz], xmm0
      vmovss  dword ptr [rbp+57h+xyz+4], xmm1
      vmovss  dword ptr [rbp+57h+xyz+8], xmm2
    }
    Com_sprintf(dest, 0x10ui64, "%d", PointIndex);
    __asm { vmovss  xmm2, cs:__real@3f400000; scale }
    G_Main_AddDebugStringWithDuration(&xyz, color, *(float *)&_XMM2, dest, duration);
  }
  __asm { vmovaps xmm6, [rsp+0C0h+var_30] }
}

/*
==============
TacGraph_DebugDraw_Stats
==============
*/
void TacGraph_DebugDraw_Stats(const TacticalGraphData *pTacData)
{
  int v13; 
  __int64 v14; 
  TacticalGraph *v16; 
  unsigned int MaxDepth_r; 
  unsigned int MostPointsInNode_r; 
  char dest[512]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm8, cs:__real@41f00000
    vmovss  xmm1, cs:__real@42480000; y
    vmovaps xmm3, xmm7; scale
    vmovaps xmm0, xmm8; x
  }
  G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, "TacGraph Stats");
  __asm { vmovss  xmm0, cs:__real@42880000 }
  v13 = 0;
  if ( pTacData->m_NumTacGraphs > 0 )
  {
    v14 = 0i64;
    __asm
    {
      vmovaps [rsp+298h+var_28], xmm6
      vmovaps [rsp+298h+var_58], xmm9
      vmovss  xmm9, cs:__real@41900000
    }
    do
    {
      v16 = &pTacData->m_TacGraphs[v14];
      __asm { vaddss  xmm6, xmm0, xmm9 }
      Com_sprintf(dest, 0x200ui64, "TacGraph %d", (unsigned int)v13);
      __asm
      {
        vmovaps xmm3, xmm7; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm8; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
      __asm { vaddss  xmm6, xmm6, xmm9 }
      Com_sprintf(dest, 0x200ui64, "Num tacpoints: %d", v16->m_NumPoints);
      __asm
      {
        vmovaps xmm3, xmm7; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm8; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
      __asm { vaddss  xmm6, xmm6, xmm9 }
      Com_sprintf(dest, 0x200ui64, "Tacpoints bytes: %zu", 40i64 * v16->m_NumPoints);
      __asm
      {
        vmovaps xmm3, xmm7; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm8; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
      __asm { vaddss  xmm6, xmm6, xmm9 }
      Com_sprintf(dest, 0x200ui64, "Vis bytes: %d", (unsigned int)v16->m_NumVisBytes);
      __asm
      {
        vmovaps xmm3, xmm7; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm8; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
      __asm { vaddss  xmm6, xmm6, xmm9 }
      MaxDepth_r = TacGraphSearch_GetMaxDepth_r(&v16->m_SearchRoot);
      Com_sprintf(dest, 0x200ui64, "Max search depth: %d", MaxDepth_r);
      __asm
      {
        vmovaps xmm3, xmm7; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm8; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
      __asm { vaddss  xmm6, xmm6, xmm9 }
      MostPointsInNode_r = TacGraphSearch_GetMostPointsInNode_r(v16, &v16->m_SearchRoot);
      Com_sprintf(dest, 0x200ui64, "Most points in search node: %d", MostPointsInNode_r);
      __asm
      {
        vmovaps xmm3, xmm7; scale
        vmovaps xmm1, xmm6; y
        vmovaps xmm0, xmm8; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorYellow, *(float *)&_XMM3, dest);
      ++v13;
      ++v14;
      __asm { vaddss  xmm0, xmm6, xmm9 }
    }
    while ( v13 < pTacData->m_NumTacGraphs );
    __asm
    {
      vmovaps xmm9, [rsp+298h+var_58]
      vmovaps xmm6, [rsp+298h+var_28]
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+298h+var_38]
    vmovaps xmm8, [rsp+298h+var_48]
  }
}

