/*
==============
Path_LocalizeAngles
==============
*/

void __fastcall Path_LocalizeAngles(const path_t *pPath, vec3_t *inOutAngles)
{
  ?Path_LocalizeAngles@@YAXPEBUpath_t@@AEATvec3_t@@@Z(pPath, inOutAngles);
}

/*
==============
Path_GetLookaheadDir
==============
*/

void __fastcall Path_GetLookaheadDir(const path_t *pPath, vec3_t *outLookaheadDir)
{
  ?Path_GetLookaheadDir@@YAXPEBUpath_t@@AEATvec3_t@@@Z(pPath, outLookaheadDir);
}

/*
==============
AI_BuildSearchArea
==============
*/

void __fastcall AI_BuildSearchArea(ai_search_t *search, const vec3_t *targetDirection, float targetVelocity, int time, ai_common_t *aiCommon, bool ignoreNodesBehind, ai_search_type_t mode)
{
  ?AI_BuildSearchArea@@YAXPEAUai_search_t@@AEBTvec3_t@@MHPEAUai_common_t@@_NW4ai_search_type_t@@@Z(search, targetDirection, targetVelocity, time, aiCommon, ignoreNodesBehind, mode);
}

/*
==============
Path_LocalizeDir
==============
*/

void __fastcall Path_LocalizeDir(const path_t *pPath, vec3_t *inOutDir)
{
  ?Path_LocalizeDir@@YAXPEBUpath_t@@AEATvec3_t@@@Z(pPath, inOutDir);
}

/*
==============
CustomSearchInfo_FindPath::ExposureCost
==============
*/

double __fastcall CustomSearchInfo_FindPath::ExposureCost(CustomSearchInfo_FindPath *this, float value, float maxValue, float percent)
{
  double result; 

  *(float *)&result = ?ExposureCost@CustomSearchInfo_FindPath@@QEAAMMMM@Z(this, value, maxValue, percent);
  return result;
}

/*
==============
Path_AddTrimmedAmount
==============
*/

void __fastcall Path_AddTrimmedAmount(path_t *pPath, const vec3_t *vStartPos)
{
  ?Path_AddTrimmedAmount@@YAXPEAUpath_t@@AEBTvec3_t@@@Z(pPath, vStartPos);
}

/*
==============
Path_PredictionTrace
==============
*/

bool __fastcall Path_PredictionTrace(const vec3_t *vStartPos, const vec3_t *vEndPos, int entityIgnore, int mask, vec3_t *vTraceEndPos, float stepheight, int allowStartSolid, bool b3D, bool *hitStairs, const Bounds *useTraceBox, unsigned __int16 groundEnt)
{
  return ?Path_PredictionTrace@@YA_NAEBTvec3_t@@0HHAEAT1@MH_NPEA_NPEBUBounds@@G@Z(vStartPos, vEndPos, entityIgnore, mask, vTraceEndPos, stepheight, allowStartSolid, b3D, hitStairs, useTraceBox, groundEnt);
}

/*
==============
Path_DebugDrawSnappedPositions
==============
*/

void __fastcall Path_DebugDrawSnappedPositions(AINavigator *pNav, gentity_s *ent)
{
  ?Path_DebugDrawSnappedPositions@@YAXPEAVAINavigator@@PEAUgentity_s@@@Z(pNav, ent);
}

/*
==============
Path_PredictionTraceCheckForEntities
==============
*/

PredictionTraceResult __fastcall Path_PredictionTraceCheckForEntities(const vec3_t *vStartPos, const vec3_t *vEndPos, const int *entities, const int entityCount, int entityIgnore, int mask, bool b3D, vec3_t *vTraceEndPos, unsigned __int16 groundEnt)
{
  return ?Path_PredictionTraceCheckForEntities@@YA?AW4PredictionTraceResult@@AEBTvec3_t@@0PEBHHHH_NAEAT2@G@Z(vStartPos, vEndPos, entities, entityCount, entityIgnore, mask, b3D, vTraceEndPos, groundEnt);
}

/*
==============
Path_GetNegotiationNode
==============
*/

pathnode_t *__fastcall Path_GetNegotiationNode(const path_t *pPath)
{
  return ?Path_GetNegotiationNode@@YAPEAUpathnode_t@@PEBUpath_t@@@Z(pPath);
}

/*
==============
Path_HasNegotiationNode
==============
*/

bool __fastcall Path_HasNegotiationNode(const path_t *path)
{
  return ?Path_HasNegotiationNode@@YA_NPEBUpath_t@@@Z(path);
}

/*
==============
Path_GetPoint
==============
*/

void __fastcall Path_GetPoint(const path_t *pPath, int iPoint, vec3_t *outOrigPoint)
{
  ?Path_GetPoint@@YAXPEBUpath_t@@HAEATvec3_t@@@Z(pPath, iPoint, outOrigPoint);
}

/*
==============
Path_UpdateLookaheadExtended
==============
*/

void __fastcall Path_UpdateLookaheadExtended(path_t *pPath, const vec3_t *vStartPos, int bReduceLookaheadAmount, int bTrimAmount, int bAllowBacktrack, const vec3_t *vWishDelta, const Bounds *bounds)
{
  ?Path_UpdateLookaheadExtended@@YAXPEAUpath_t@@AEBTvec3_t@@HHHPEBT2@PEBUBounds@@@Z(pPath, vStartPos, bReduceLookaheadAmount, bTrimAmount, bAllowBacktrack, vWishDelta, bounds);
}

/*
==============
Path_WorldifyDir2D
==============
*/

void __fastcall Path_WorldifyDir2D(const path_t *pPath, vec2_t *inOutDir)
{
  ?Path_WorldifyDir2D@@YAXPEBUpath_t@@AEATvec2_t@@@Z(pPath, inOutDir);
}

/*
==============
AI_SearchGetBestNode
==============
*/

pathnode_t *__fastcall AI_SearchGetBestNode(const ai_search_t *search)
{
  return ?AI_SearchGetBestNode@@YAPEAUpathnode_t@@PEBUai_search_t@@@Z(search);
}

/*
==============
AI_SearchNodeVisible
==============
*/

bool __fastcall AI_SearchNodeVisible(ai_common_t *aiCommon, pathnode_t *nodeTesting, pathnode_t *nodeNearestAI)
{
  return ?AI_SearchNodeVisible@@YA_NPEAUai_common_t@@PEAUpathnode_t@@1@Z(aiCommon, nodeTesting, nodeNearestAI);
}

/*
==============
Path_FindPath
==============
*/

int __fastcall Path_FindPath(PathFindInput *pathFindInput)
{
  return ?Path_FindPath@@YAHPEAUPathFindInput@@@Z(pathFindInput);
}

/*
==============
CustomSearchInfo_FindPath::CustomSearchInfo_FindPath
==============
*/

void __fastcall CustomSearchInfo_FindPath::CustomSearchInfo_FindPath(CustomSearchInfo_FindPath *this, PathFindInput *pathFindInput)
{
  ??0CustomSearchInfo_FindPath@@QEAA@PEAUPathFindInput@@@Z(this, pathFindInput);
}

/*
==============
AI_FindEntrances
==============
*/

int __fastcall AI_FindEntrances(const vec3_t *point, unsigned __int16 *results, int maxNumResults)
{
  return ?AI_FindEntrances@@YAHAEBTvec3_t@@PEAGH@Z(point, results, maxNumResults);
}

/*
==============
Path_LocalizePos
==============
*/

void __fastcall Path_LocalizePos(const path_t *pPath, vec3_t *inOutPos)
{
  ?Path_LocalizePos@@YAXPEBUpath_t@@AEATvec3_t@@@Z(pPath, inOutPos);
}

/*
==============
Path_Clear
==============
*/

void __fastcall Path_Clear(path_t *pPath)
{
  ?Path_Clear@@YAXPEAUpath_t@@@Z(pPath);
}

/*
==============
Path_LookaheadPredictionTraceExtended
==============
*/

int __fastcall Path_LookaheadPredictionTraceExtended(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vEndPos, const Bounds *bounds)
{
  return ?Path_LookaheadPredictionTraceExtended@@YAHPEAUpath_t@@AEBTvec3_t@@1PEBUBounds@@@Z(pPath, vStartPos, vEndPos, bounds);
}

/*
==============
Path_TraceHitStairs
==============
*/

bool __fastcall Path_TraceHitStairs(const trace_t *trace)
{
  return ?Path_TraceHitStairs@@YA_NPEBUtrace_t@@@Z(trace);
}

/*
==============
Path_IsNodeUseableBy
==============
*/

bool __fastcall Path_IsNodeUseableBy(const pathnode_t *pNode, unsigned int entNum)
{
  return ?Path_IsNodeUseableBy@@YA_NPEBUpathnode_t@@I@Z(pNode, entNum);
}

/*
==============
Path_WorldifyDir
==============
*/

void __fastcall Path_WorldifyDir(const path_t *pPath, vec3_t *inOutDir)
{
  ?Path_WorldifyDir@@YAXPEBUpath_t@@AEATvec3_t@@@Z(pPath, inOutDir);
}

/*
==============
Path_WorldifyAngles
==============
*/

void __fastcall Path_WorldifyAngles(const path_t *pPath, vec3_t *inOutAngles)
{
  ?Path_WorldifyAngles@@YAXPEBUpath_t@@AEATvec3_t@@@Z(pPath, inOutAngles);
}

/*
==============
Path_IsTraversalNodePairUseableBy
==============
*/

bool __fastcall Path_IsTraversalNodePairUseableBy(const pathnode_t *pStartNode, const pathnode_t *pEndNode, unsigned int entNum)
{
  return ?Path_IsTraversalNodePairUseableBy@@YA_NPEBUpathnode_t@@0I@Z(pStartNode, pEndNode, entNum);
}

/*
==============
Path_Exists
==============
*/

bool __fastcall Path_Exists(const path_t *pPath)
{
  return ?Path_Exists@@YA_NPEBUpath_t@@@Z(pPath);
}

/*
==============
AI_UpdateSearchArea
==============
*/

unsigned __int16 __fastcall AI_UpdateSearchArea(ai_search_t *search, ai_common_t *aiCommon, bool prioritizeForward, bool needsNodeReturn, bool slowSearch)
{
  return ?AI_UpdateSearchArea@@YAGPEAUai_search_t@@PEAUai_common_t@@_N22@Z(search, aiCommon, prioritizeForward, needsNodeReturn, slowSearch);
}

/*
==============
CustomSearchInfo_FindPath::GetNodeCost
==============
*/

double __fastcall CustomSearchInfo_FindPath::GetNodeCost(CustomSearchInfo_FindPath *this, pathnode_t *pSuccessor, const vec3_t *vGoalPos)
{
  double result; 

  *(float *)&result = ?GetNodeCost@CustomSearchInfo_FindPath@@QEAAMPEAUpathnode_t@@AEBTvec3_t@@@Z(this, pSuccessor, vGoalPos);
  return result;
}

/*
==============
Path_PredictionTraceSimpleInternal
==============
*/

int __fastcall Path_PredictionTraceSimpleInternal(const vec3_t *vStartPos, const vec3_t *vEndPos, int entityIgnore, int mask, bool *hitStairs, bool b3D, const Bounds *useTraceBox, vec3_t *vTraceEndPos, unsigned __int16 groundEnt)
{
  return ?Path_PredictionTraceSimpleInternal@@YAHAEBTvec3_t@@0HHPEA_N_NPEBUBounds@@PEAT1@G@Z(vStartPos, vEndPos, entityIgnore, mask, hitStairs, b3D, useTraceBox, vTraceEndPos, groundEnt);
}

/*
==============
Path_NeedsReevaluation
==============
*/

bool __fastcall Path_NeedsReevaluation(const path_t *pPath)
{
  return ?Path_NeedsReevaluation@@YA_NPEBUpath_t@@@Z(pPath);
}

/*
==============
Path_AllowedStancesForPath
==============
*/

ai_stance_e __fastcall Path_AllowedStancesForPath(path_t *pPath)
{
  return ?Path_AllowedStancesForPath@@YA?AW4ai_stance_e@@PEAUpath_t@@@Z(pPath);
}

/*
==============
Path_WorldifyPos
==============
*/

void __fastcall Path_WorldifyPos(const path_t *pPath, vec3_t *inOutPos)
{
  ?Path_WorldifyPos@@YAXPEBUpath_t@@AEATvec3_t@@@Z(pPath, inOutPos);
}

/*
==============
Path_GetPathFindDist
==============
*/

double __fastcall Path_GetPathFindDist(const vec3_t *vStartPos, const vec3_t *vEndPos, float maxRadius)
{
  double result; 

  *(float *)&result = ?Path_GetPathFindDist@@YAMAEBTvec3_t@@0M@Z(vStartPos, vEndPos, maxRadius);
  return result;
}

/*
==============
Path_UpdateLookahead
==============
*/

void __fastcall Path_UpdateLookahead(path_t *pPath, const vec3_t *vStartPos, int bReduceLookaheadAmount, int bTrimAmount, int bAllowBacktrack, const vec3_t *vWishDelta)
{
  ?Path_UpdateLookahead@@YAXPEAUpath_t@@AEBTvec3_t@@HHHPEBT2@@Z(pPath, vStartPos, bReduceLookaheadAmount, bTrimAmount, bAllowBacktrack, vWishDelta);
}

/*
==============
Path_Begin
==============
*/

void __fastcall Path_Begin(path_t *pPath)
{
  ?Path_Begin@@YAXPEAUpath_t@@@Z(pPath);
}

/*
==============
CustomSearchInfo_FindPath::CustomSearchInfo_FindPath
==============
*/
void CustomSearchInfo_FindPath::CustomSearchInfo_FindPath(CustomSearchInfo_FindPath *this, PathFindInput *pathFindInput)
{
  __int128 v2; 
  __int128 v3; 
  const vec3_t *vStartPos; 
  int randomPercent; 
  int useChokePoints; 
  team_t eTeam; 
  float *randomNodeCosts; 
  __int64 v11; 
  int v12; 
  char v13; 
  const dvar_t *v14; 
  int v15; 
  const dvar_t *v29; 
  vec3_t pos; 
  __int128 v31; 
  __int128 v32; 

  v31 = v3;
  if ( !pathFindInput )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1433, ASSERT_TYPE_ASSERT, "( pathFindInput )", (const char *)&queryFormat, "pathFindInput") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1382, ASSERT_TYPE_ASSERT, "(pathFindInput)", (const char *)&queryFormat, "pathFindInput") )
      __debugbreak();
  }
  if ( !pathFindInput->pNodeTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1383, ASSERT_TYPE_ASSERT, "(pathFindInput->pNodeTo)", (const char *)&queryFormat, "pathFindInput->pNodeTo") )
    __debugbreak();
  if ( !pathFindInput->vStartPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1384, ASSERT_TYPE_ASSERT, "(pathFindInput->vStartPos)", (const char *)&queryFormat, "pathFindInput->vStartPos") )
    __debugbreak();
  pathnode_t::GetPos(pathFindInput->pNodeTo, &pos);
  vStartPos = pathFindInput->vStartPos;
  if ( (float)((float)((float)((float)(pos.v[1] - vStartPos->v[1]) * (float)(pos.v[1] - vStartPos->v[1])) + (float)((float)(pos.v[0] - vStartPos->v[0]) * (float)(pos.v[0] - vStartPos->v[0]))) + (float)((float)(pos.v[2] - vStartPos->v[2]) * (float)(pos.v[2] - vStartPos->v[2]))) <= 262144.0 )
    randomPercent = 0;
  else
    randomPercent = pathFindInput->pPath->randomPercent;
  useChokePoints = pathFindInput->useChokePoints;
  this->randomWeightIndex = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    *(_OWORD *)this->avoidExpPosPercent = *(_OWORD *)pathFindInput->avoidExpPosPercent;
    this->avoidExpPosPercent[4] = pathFindInput->avoidExpPosPercent[4];
    if ( this->avoidExpPosPercent[0] != 0.0 )
    {
      *(__m256i *)this->avoidExpPosNode = *(__m256i *)pathFindInput->avoidExpPosNode;
      this->avoidExpPosNode[4] = pathFindInput->avoidExpPosNode[4];
      *(__m256i *)this->avoidExpPosDir[0].v = *(__m256i *)pathFindInput->avoidExpPosDir[0].v;
      *(_OWORD *)&this->avoidExpPosDir[2].z = *(_OWORD *)&pathFindInput->avoidExpPosDir[2].z;
      *(double *)this->avoidExpPosDir[4].v = *(double *)pathFindInput->avoidExpPosDir[4].v;
      this->avoidExpPosDir[4].v[2] = pathFindInput->avoidExpPosDir[4].v[2];
      *(_OWORD *)this->avoidExpPosDot = *(_OWORD *)pathFindInput->avoidExpPosDot;
      this->avoidExpPosDot[4] = pathFindInput->avoidExpPosDot[4];
      *(_OWORD *)this->avoidExpPosRadiusSq = *(_OWORD *)pathFindInput->avoidExpPosRadiusSq;
      this->avoidExpPosRadiusSq[4] = pathFindInput->avoidExpPosRadiusSq[4];
    }
    this->avoidExpStances = pathFindInput->avoidExpStances;
    this->avoidExpSkyPercent = pathFindInput->avoidExpSkyPercent;
    this->avoidExpGenPercent = pathFindInput->avoidExpGenPercent;
    this->avoidExpLOSPercent = pathFindInput->avoidExpLOSPercent;
    this->avoidExpTrafficPercent = pathFindInput->avoidExpTrafficPercent;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    this->pathSpreadPercent = pathFindInput->pathSpreadPercent;
    if ( pathFindInput->pPath )
      eTeam = pathFindInput->pPath->eTeam;
    else
      eTeam = TEAM_ZERO;
    this->pathSpreadTeam = eTeam;
    this->avoidLocationPos.v[0] = pathFindInput->avoidLocationPos.v[0];
    this->avoidLocationPos.v[1] = pathFindInput->avoidLocationPos.v[1];
    this->avoidLocationPos.v[2] = pathFindInput->avoidLocationPos.v[2];
    this->avoidLocationPercent = pathFindInput->avoidLocationPercent;
    this->avoidLocationMaxDist = pathFindInput->avoidLocationMaxDist;
    this->pathZoneCosts = pathFindInput->pathZoneCosts;
    this->pathZoneCostsCount = pathFindInput->pathZoneCostsCount;
    this->traversalCostPercent = pathFindInput->traversalCostPercent;
  }
  randomNodeCosts = this->randomNodeCosts;
  if ( randomPercent )
  {
    v32 = v2;
    v11 = 4i64;
    do
    {
      *randomNodeCosts++ = (float)(G_rand() % randomPercent) * 5.1199999;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    *(_QWORD *)randomNodeCosts = 0i64;
    *(_QWORD *)&this->randomNodeCosts[2] = 0i64;
  }
  if ( useChokePoints )
  {
    v12 = G_rand();
    v13 = G_rand() % 4;
    v14 = DCONST_DVARFLT_ai_pathChokePointCost;
    v15 = v12 & ~(1 << v13);
    if ( !DCONST_DVARFLT_ai_pathChokePointCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_pathChokePointCost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    _XMM3 = v14->current.unsignedInt;
    _XMM0 = v15 & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
    }
    this->chokePointWeights[0] = *(float *)&_XMM0;
    _XMM0 = v15 & 2;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
    }
    this->chokePointWeights[1] = *(float *)&_XMM0;
    _XMM0 = v15 & 4;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
    }
    this->chokePointWeights[2] = *(float *)&_XMM0;
    _XMM0 = v15 & 8;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
    }
    this->chokePointWeights[3] = *(float *)&_XMM0;
  }
  else
  {
    *(_QWORD *)this->chokePointWeights = 0i64;
    *(_QWORD *)&this->chokePointWeights[2] = 0i64;
  }
  v29 = DCONST_DVARFLT_ai_pathNegotiationOverlapCost;
  if ( !DCONST_DVARFLT_ai_pathNegotiationOverlapCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_pathNegotiationOverlapCost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  LODWORD(this->negotiationOverlapCost) = v29->current.integer;
}

/*
==============
AI_BuildSearchArea
==============
*/

void __fastcall AI_BuildSearchArea(ai_search_t *search, const vec3_t *targetDirection, double targetVelocity, int time, ai_common_t *aiCommon, bool ignoreNodesBehind, ai_search_type_t mode)
{
  float v13; 
  __int128 v14; 
  __int128 v16; 
  char v19; 
  float highestPriorityDistScalar; 
  float maxSearchDistScalar; 
  float v22; 
  pathnode_t *nodeNearestSearchOrigin; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  pathnode_t *v34; 
  float fCost; 
  bool v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v43; 
  float v44; 
  double v45; 
  int v46; 
  float v47; 
  __int128 v48; 
  unsigned int v52; 
  float v61; 
  int v62; 
  __int64 v63; 
  pathnode_t *v64; 
  __int64 v65; 
  __int64 v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  vec3_t pos; 

  _XMM7 = *(_OWORD *)&targetVelocity;
  if ( !search && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4098, ASSERT_TYPE_ASSERT, "( search )", (const char *)&queryFormat, "search") )
    __debugbreak();
  if ( time <= 0 )
  {
    LODWORD(v65) = time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4099, ASSERT_TYPE_ASSERT, "( time ) > ( 0 )", "time > 0\n\t%i, %i", v65, 0i64) )
      __debugbreak();
  }
  __asm { vxorpd  xmm6, xmm6, xmm6 }
  if ( *(float *)&targetVelocity < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4100, ASSERT_TYPE_ASSERT, "( targetVelocity ) >= ( 0 )", "targetVelocity >= 0\n\t%g, %g", *(float *)&targetVelocity, *(double *)&_XMM6) )
    __debugbreak();
  if ( !search->nodeNearestSearchOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4101, ASSERT_TYPE_ASSERT, "( search->nodeNearestSearchOrigin )", (const char *)&queryFormat, "search->nodeNearestSearchOrigin") )
    __debugbreak();
  memset_0(search->nodes, 0, sizeof(search->nodes));
  *(_DWORD *)&search->totalNodeCount = 0;
  search->currentNodePicked = -1;
  search->mode = mode;
  search->percentofNodesToSearch = 0.89999998;
  v13 = targetDirection->v[0];
  v14 = LODWORD(targetDirection->v[1]);
  v16 = v14;
  *(float *)&v16 = fsqrt((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13));
  _XMM2 = v16;
  if ( *(float *)&v16 <= 0.1 )
  {
    v19 = 0;
  }
  else
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v16 - 1.0) & _xmm) > 0.0099999998 )
    {
      __asm
      {
        vcmpless xmm0, xmm2, xmm1
        vblendvps xmm0, xmm2, xmm9, xmm0
      }
      v13 = v13 * (float)(1.0 / *(float *)&_XMM0);
      *(float *)&v14 = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
    }
    v19 = 1;
  }
  highestPriorityDistScalar = search->highestPriorityDistScalar;
  if ( (highestPriorityDistScalar < 0.0 || highestPriorityDistScalar > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4137, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( search->highestPriorityDistScalar ) && ( search->highestPriorityDistScalar ) <= ( 1.0f )", "search->highestPriorityDistScalar not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", highestPriorityDistScalar, *(double *)&_XMM6, DOUBLE_1_0) )
    __debugbreak();
  maxSearchDistScalar = search->maxSearchDistScalar;
  if ( maxSearchDistScalar <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4138, ASSERT_TYPE_ASSERT, "( search->maxSearchDistScalar ) > ( 0.0f )", "search->maxSearchDistScalar > 0.0f\n\t%g, %g", maxSearchDistScalar, *(double *)&_XMM6) )
    __debugbreak();
  v22 = search->maxSearchDistScalar;
  if ( v22 > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4139, ASSERT_TYPE_ASSERT, "( search->maxSearchDistScalar ) <= ( 1.0f )", "search->maxSearchDistScalar <= 1.0f\n\t%g, %g", v22, DOUBLE_1_0) )
    __debugbreak();
  __asm { vminss  xmm7, xmm7, cs:__real@432a0000 }
  nodeNearestSearchOrigin = search->nodeNearestSearchOrigin;
  v25 = (float)time * 0.001;
  v26 = (float)(v25 * 170.0) * search->maxSearchDistScalar;
  v27 = (float)(v25 * *(float *)&_XMM7) * search->highestPriorityDistScalar;
  v67 = *(float *)&_XMM7;
  if ( ignoreNodesBehind )
  {
    if ( !aiCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4148, ASSERT_TYPE_ASSERT, "( aiCommon )", (const char *)&queryFormat, "aiCommon") )
      __debugbreak();
    v28 = search->searchOrigin.v[0] - aiCommon->ent->r.currentOrigin.v[0];
    v30 = LODWORD(search->searchOrigin.v[1]);
    v29 = search->searchOrigin.v[1] - aiCommon->ent->r.currentOrigin.v[1];
    *(float *)&v30 = fsqrt((float)(v29 * v29) + (float)(v28 * v28));
    _XMM3 = v30;
    __asm
    {
      vcmpless xmm0, xmm3, xmm6
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    v69 = v28 * (float)(1.0 / *(float *)&_XMM0);
    v68 = v29 * (float)(1.0 / *(float *)&_XMM0);
  }
  else
  {
    v68 = *(float *)&_XMM7;
    v69 = *(float *)&_XMM7;
  }
  Path_ClearAllNodeTransientData();
  nodeNearestSearchOrigin->transient.fCost = 0.5;
  v34 = nodeNearestSearchOrigin;
  do
  {
    fCost = nodeNearestSearchOrigin->transient.fCost;
    if ( fCost < v26 )
    {
      pathnode_t::GetPos(nodeNearestSearchOrigin, &pos);
      v36 = 1;
      if ( ignoreNodesBehind )
      {
        v37 = pos.v[0] - aiCommon->ent->r.currentOrigin.v[0];
        v39 = LODWORD(pos.v[1]);
        v38 = pos.v[1] - aiCommon->ent->r.currentOrigin.v[1];
        *(float *)&v39 = fsqrt((float)(v38 * v38) + (float)(v37 * v37));
        _XMM3 = v39;
        __asm
        {
          vcmpless xmm0, xmm3, xmm6
          vblendvps xmm0, xmm3, xmm9, xmm0
        }
        v36 = (float)((float)((float)(v38 * (float)(1.0 / *(float *)&_XMM0)) * v68) + (float)((float)(v37 * (float)(1.0 / *(float *)&_XMM0)) * v69)) > -0.1;
      }
      if ( search->totalNodeCount < 0x80u && v36 )
      {
        if ( fCost < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4003, ASSERT_TYPE_ASSERT, "( currentDistance >= 0 && currentDistance <= maxDistance )", (const char *)&queryFormat, "currentDistance >= 0 && currentDistance <= maxDistance") )
          __debugbreak();
        LODWORD(v43) = COERCE_UNSIGNED_INT(fCost - v27) & _xmm;
        if ( fCost > v27 )
        {
          if ( v27 >= v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4018, ASSERT_TYPE_ASSERT, "( optimalDistance < maxDistance )", (const char *)&queryFormat, "optimalDistance < maxDistance") )
            __debugbreak();
          v44 = 1.0 - (float)(v43 / (float)(v26 - v27));
        }
        else
        {
          v44 = 1.0 - (float)(v43 / v27);
        }
        v45 = I_fclamp(v44, 0.0, 1.0);
        v46 = (int)(float)(*(float *)&v45 * 1000.0);
        if ( v19 )
        {
          v47 = pos.v[0] - search->searchOrigin.v[0];
          v48 = LODWORD(pos.v[1]);
          *(float *)&v48 = fsqrt((float)((float)(pos.v[1] - search->searchOrigin.v[1]) * (float)(pos.v[1] - search->searchOrigin.v[1])) + (float)(v47 * v47));
          _XMM3 = v48;
          __asm
          {
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm9, xmm0
          }
          *(double *)&_XMM0 = I_fclamp((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(pos.v[1] - search->searchOrigin.v[1])) * *(float *)&v14) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v47) * v13)) - 0.69999999, 0.0, 1.0);
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0 * 3.3333333, 0.0, 1.0);
          v52 = (int)(float)(*(float *)&_XMM0 * 1000.0);
          _XMM0 = v52;
          __asm { vpcmpgtd xmm1, xmm0, xmm2 }
          _XMM2 = LODWORD(FLOAT_0_55000001);
          __asm { vblendvps xmm0, xmm2, xmm0, xmm1 }
          v70 = *(float *)&_XMM0;
          _XMM0 = v52;
          __asm { vpcmpgtd xmm2, xmm0, xmm1 }
          _XMM1 = LODWORD(FLOAT_0_44999999);
          __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
          if ( *(float *)&_XMM7 > 170.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4063, ASSERT_TYPE_ASSERT, "( currentVelocity <= 170.0f )", (const char *)&queryFormat, "currentVelocity <= SEARCH_AREA_PLAYER_EXPECTED_SPEED") )
            __debugbreak();
          v61 = 0.2 - (float)(*(float *)&_XMM7 * 0.0011764707);
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v70 - v61) + (float)(v61 + *(float *)&_XMM0)) - 1.0) & _xmm) > 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4071, ASSERT_TYPE_ASSERT, "( I_fabs( distanceWeightAdjusted + directionWeightAdjusted - 1 ) <= 0.001f )", (const char *)&queryFormat, "I_fabs( distanceWeightAdjusted + directionWeightAdjusted - 1 ) <= EQUAL_EPSILON") )
            __debugbreak();
          *(float *)&_XMM7 = v67;
          v46 = (int)(float)((float)((float)(int)v52 * (float)(v70 - v61)) + (float)((float)v46 * (float)(v61 + *(float *)&_XMM0)));
        }
        if ( v46 < 1 )
          v46 = 1;
        if ( Path_ConvertNodeToIndex(nodeNearestSearchOrigin) == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4184, ASSERT_TYPE_ASSERT, "( Path_ConvertNodeToIndex( currentOpenNode ) != 0xffff )", (const char *)&queryFormat, "Path_ConvertNodeToIndex( currentOpenNode ) != PATHNODE_INVALID") )
          __debugbreak();
        if ( v46 >= 0xFFFF )
        {
          LODWORD(v66) = 0xFFFF;
          LODWORD(v65) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4185, ASSERT_TYPE_ASSERT, "( currentOpenNodePriority ) < ( 0xffff )", "currentOpenNodePriority < AI_SEARCH_NODE_MAX_PRIORITY\n\t%i, %i", v65, v66) )
            __debugbreak();
        }
        search->nodes[search->totalNodeCount].nodeIndex = Path_ConvertNodeToIndex(nodeNearestSearchOrigin);
        if ( (unsigned int)v46 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v46, "signed", v46) )
          __debugbreak();
        search->nodes[search->totalNodeCount++].priority = v46;
        ++search->currentNodeCount;
      }
      v62 = 0;
      if ( nodeNearestSearchOrigin->dynamic.wLinkCount > 0 )
      {
        v63 = 0i64;
        do
        {
          if ( Path_ConvertIndexToNode(nodeNearestSearchOrigin->constant.Links[v63].nodeNum)->transient.fCost <= 0.0 )
          {
            v64 = Path_ConvertIndexToNode(nodeNearestSearchOrigin->constant.Links[v63].nodeNum);
            v64->transient.fCost = fCost + nodeNearestSearchOrigin->constant.Links[v63].fDist;
            v34->transient.pNextOpen = v64;
            v34 = v64;
          }
          ++v62;
          ++v63;
        }
        while ( v62 < nodeNearestSearchOrigin->dynamic.wLinkCount );
      }
    }
    nodeNearestSearchOrigin = nodeNearestSearchOrigin->transient.pNextOpen;
  }
  while ( nodeNearestSearchOrigin );
}

/*
==============
AI_FindEntrances
==============
*/
pathnode_t *AI_FindEntrances(const vec3_t *point, unsigned __int16 *results, int maxNumResults)
{
  __int64 v6; 
  __int128 v7; 
  pathnode_t *result; 
  pathnode_t *v11; 
  const dvar_t *v12; 
  int v13; 
  const dvar_t *v14; 
  int EntrancesByNodeInternal; 
  const dvar_t *v16; 
  int v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  __int64 i; 
  pathnode_t *v21; 
  int v22; 
  pathnode_t *v23; 
  unsigned int NumOverlappingEntrancesForNode; 
  const char *v25; 
  unsigned __int16 *v26; 
  __int64 v27; 
  pathnode_t *v28; 
  unsigned int v29; 
  const char *v30; 
  __int64 duration; 
  __int64 v32; 
  int numRemovedResultsOut[4]; 
  vec3_t origin; 
  vec3_t pos; 
  vec3_t xyz; 
  Bounds box; 
  unsigned __int16 removedResultsOut[32]; 
  unsigned __int16 v39[104]; 

  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3881, ASSERT_TYPE_ASSERT, "( results )", (const char *)&queryFormat, "results") )
    __debugbreak();
  v6 = 0i64;
  if ( maxNumResults <= 0 )
  {
    LODWORD(duration) = maxNumResults;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3882, ASSERT_TYPE_ASSERT, "( maxNumResults ) > ( 0 )", "maxNumResults > 0\n\t%i, %i", duration, 0i64) )
      __debugbreak();
  }
  v7 = LODWORD(level.pathnodeWorldSize.v[0]);
  *(float *)&v7 = (float)(level.pathnodeWorldSize.v[0] + level.pathnodeWorldSize.v[1]) * 0.5;
  if ( *(float *)&v7 == 0.0 )
  {
    *(float *)&_XMM1 = FLOAT_2000_0;
  }
  else
  {
    *(float *)&v7 = *(float *)&v7 * 0.80000001;
    _XMM0 = v7;
    __asm { vminss  xmm1, xmm0, cs:__real@44fa0000; searchDistance }
  }
  result = AI_FindEntrances_FindNearestNode(point, *(float *)&_XMM1);
  v11 = result;
  if ( result )
  {
    v12 = DVARINT_ai_showNodes;
    v13 = 0;
    numRemovedResultsOut[0] = 0;
    if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer < 8 )
      goto LABEL_23;
    v14 = DVARINT_ai_showNodes;
    if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.integer > 9 )
    {
LABEL_23:
      EntrancesByNodeInternal = AI_FindEntrancesByNodeInternal(v11, results, maxNumResults, NULL, NULL);
    }
    else
    {
      if ( maxNumResults > 32 )
      {
        LODWORD(v32) = 32;
        LODWORD(duration) = maxNumResults;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3902, ASSERT_TYPE_ASSERT, "( maxNumResults ) <= ( MAX_NUM_REMOVED_RESULTS )", "maxNumResults <= MAX_NUM_REMOVED_RESULTS\n\t%i, %i", duration, v32) )
          __debugbreak();
      }
      EntrancesByNodeInternal = AI_FindEntrancesByNodeInternal(v11, results, maxNumResults, removedResultsOut, numRemovedResultsOut);
      v13 = numRemovedResultsOut[0];
    }
    v16 = DVARINT_ai_showNodes;
    v17 = EntrancesByNodeInternal;
    if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer >= 8 )
    {
      v18 = DVARINT_ai_showNodes;
      if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.integer <= 10 )
      {
        box.halfSize.v[1] = FLOAT_16_0;
        box.halfSize.v[2] = FLOAT_16_0;
        *(_OWORD *)box.midPoint.v = _xmm;
        pathnode_t::GetPos(v11, &pos);
        G_DebugBox(&pos, &box, 0.0, &colorBlack, 0, 0);
        v19 = DVARINT_ai_showNodes;
        if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        if ( v19->current.integer == 8 )
        {
          if ( v17 > 0 )
          {
            for ( i = 0i64; i < v17; ++i )
            {
              v21 = Path_ConvertIndexToNode(results[i]);
              pathnode_t::GetPos(v21, &origin);
              G_DebugBox(&origin, &box, 0.0, &colorGreen, 0, 0);
            }
          }
        }
        else if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 9 )
        {
          if ( v17 + v13 > 100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3942, ASSERT_TYPE_ASSERT, "( entrancesCount + entrancesRemoved ) <= ( 100 )", "%s <= %s\n\t%i, %i", "entrancesCount + entrancesRemoved", "100", v17 + v13, 100) )
            __debugbreak();
          v22 = 0;
          if ( v17 > 0 )
          {
            memcpy_0(v39, results, 2i64 * v17);
            v22 = v17;
          }
          if ( v13 > 0 )
          {
            memcpy_0(&v39[v22], removedResultsOut, 2i64 * (unsigned int)v13);
            v22 += v13;
          }
          if ( v17 > 0 )
          {
            do
            {
              v23 = Path_ConvertIndexToNode(results[v6]);
              pathnode_t::GetPos(v23, &origin);
              G_DebugBox(&origin, &box, 0.0, &colorGreen, 0, 0);
              xyz = pos;
              NumOverlappingEntrancesForNode = AI_FindEntrances_GetNumOverlappingEntrancesForNode(v39, v22, v23, &xyz);
              v25 = j_va("%i", NumOverlappingEntrancesForNode);
              G_Main_AddDebugStringWithDuration(&origin, &colorGreen, 1.0, v25, 0);
              ++v6;
            }
            while ( v6 < v17 );
          }
          if ( v13 > 0 )
          {
            v26 = removedResultsOut;
            v27 = (unsigned int)v13;
            do
            {
              v28 = Path_ConvertIndexToNode(*v26);
              pathnode_t::GetPos(v28, &xyz);
              G_DebugBox(&xyz, &box, 0.0, &colorWhite, 0, 0);
              origin = pos;
              v29 = AI_FindEntrances_GetNumOverlappingEntrancesForNode(v39, v22, v28, &origin);
              v30 = j_va("%i", v29);
              G_Main_AddDebugStringWithDuration(&xyz, &colorWhite, 1.0, v30, 0);
              ++v26;
              --v27;
            }
            while ( v27 );
          }
        }
      }
    }
    return (pathnode_t *)(unsigned int)v17;
  }
  return result;
}

/*
==============
AI_FindEntrancesByNodeInternal
==============
*/
__int64 AI_FindEntrancesByNodeInternal(pathnode_t *startNode, unsigned __int16 *results, int maxNumResults, unsigned __int16 *removedResultsOut, int *numRemovedResultsOut)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  unsigned __int16 *v8; 
  pathnode_t *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  pathnode_t *pNextOpen; 
  __int128 v14; 
  unsigned __int16 nodeCost_low; 
  int linkIndex; 
  float fCost; 
  unsigned __int16 v20; 
  __int64 v21; 
  int v22; 
  unsigned __int16 v23; 
  pathnode_t *v24; 
  const dvar_t *v25; 
  unsigned __int16 LastVisibleNodeIndex; 
  pathnode_t *v27; 
  pathnode_t *v28; 
  pathnode_t *pParent; 
  pathnode_t *v30; 
  pathnode_t *v31; 
  pathnode_t *i; 
  unsigned __int16 *v33; 
  pathnode_t *v34; 
  unsigned __int16 v35; 
  pathnode_t *v36; 
  const dvar_t *v37; 
  int v38; 
  pathnode_t *v39; 
  __int64 v41; 
  int curNumResults; 
  __int64 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  int v50; 

  v8 = results;
  v9 = startNode;
  v10 = maxNumResults;
  v46 = v5;
  v45 = v6;
  if ( !startNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3732, ASSERT_TYPE_ASSERT, "( startNode )", (const char *)&queryFormat, "startNode") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3733, ASSERT_TYPE_ASSERT, "( results )", (const char *)&queryFormat, "results") )
    __debugbreak();
  v11 = 0i64;
  if ( v10 <= 0 )
  {
    LODWORD(v41) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3734, ASSERT_TYPE_ASSERT, "( maxNumResults ) > ( 0 )", "maxNumResults > 0\n\t%i, %i", v41, 0i64) )
      __debugbreak();
  }
  Profile_Begin(407);
  v12 = 0;
  curNumResults = 0;
  Path_ClearAllNodeTransientData();
  Path_ResetAllNodeTransientLinkIndex();
  v9->transient.fCost = 0.5;
  pNextOpen = v9;
  if ( !Path_NodesVisibleNoPeek(v9, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3761, ASSERT_TYPE_ASSERT, "(Path_NodesVisibleNoPeek( startNode, currentOpenNode ))", (const char *)&queryFormat, "Path_NodesVisibleNoPeek( startNode, currentOpenNode )") )
    __debugbreak();
  v14 = LODWORD(level.pathnodeWorldSize.v[0]);
  *(float *)&v14 = (float)(level.pathnodeWorldSize.v[0] + level.pathnodeWorldSize.v[1]) * 0.5;
  v44 = v7;
  v43 = (__int64)v9;
  if ( *(float *)&v14 == 0.0 )
  {
    *(float *)&_XMM8 = FLOAT_2000_0;
  }
  else
  {
    *(float *)&v14 = *(float *)&v14 * 0.80000001;
    _XMM0 = v14;
    __asm { vminss  xmm8, xmm0, cs:__real@44fa0000 }
  }
  while ( v12 < v10 )
  {
    if ( ((1 << LOBYTE(pNextOpen->constant.type)) & 0x1E700000) == 0 )
    {
      if ( Path_NodesVisibleNoPeek(v9, pNextOpen) )
      {
        nodeCost_low = Path_ConvertNodeToIndex(pNextOpen);
        pNextOpen->transient.linkIndex = nodeCost_low;
        linkIndex = nodeCost_low;
        pNextOpen->transient.pParent = pNextOpen;
      }
      else
      {
        nodeCost_low = LOWORD(pNextOpen->transient.nodeCost);
        linkIndex = pNextOpen->transient.linkIndex;
      }
      if ( linkIndex != nodeCost_low && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3671, ASSERT_TYPE_ASSERT, "(currentNode->transient.linkIndex == static_cast<pathnode_id>( currentNode->transient.linkIndex ))", (const char *)&queryFormat, "currentNode->transient.linkIndex == static_cast<pathnode_id>( currentNode->transient.linkIndex )") )
        __debugbreak();
      fCost = pNextOpen->transient.fCost;
      v20 = LOWORD(pNextOpen->transient.nodeCost);
      if ( fCost >= *(float *)&_XMM8 )
      {
        AI_FindEntrances_AddNodeToEntranceResults(v8, &curNumResults, v20, pNextOpen);
        goto LABEL_64;
      }
      if ( pNextOpen->dynamic.wLinkCount > 0 )
      {
        v21 = v43;
        v22 = 0;
        do
        {
          v23 = *(unsigned __int16 *)((char *)&pNextOpen->constant.Links->nodeNum + v11);
          v24 = Path_ConvertIndexToNode(v23);
          if ( Path_ConvertIndexToNode(v23)->transient.fCost > 0.0 )
          {
            if ( !Path_NodesVisibleNoPeek(v9, v24) && !Path_NodesVisibleNoPeek(v9, pNextOpen) )
            {
              LastVisibleNodeIndex = AI_FindEntrances_GetLastVisibleNodeIndex(v24);
              if ( v20 != LastVisibleNodeIndex )
              {
                v27 = Path_ConvertIndexToNode(v20);
                v28 = Path_ConvertIndexToNode(LastVisibleNodeIndex);
                if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3685, ASSERT_TYPE_ASSERT, "( node1 )", (const char *)&queryFormat, "node1") )
                  __debugbreak();
                if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3686, ASSERT_TYPE_ASSERT, "( node2 )", (const char *)&queryFormat, "node2") )
                  __debugbreak();
                if ( v27 == v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3687, ASSERT_TYPE_ASSERT, "( node1 != node2 )", (const char *)&queryFormat, "node1 != node2") )
                  __debugbreak();
                if ( !v27->transient.pParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3688, ASSERT_TYPE_ASSERT, "( node1->transient.pParent )", (const char *)&queryFormat, "node1->transient.pParent") )
                  __debugbreak();
                if ( !v28->transient.pParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3689, ASSERT_TYPE_ASSERT, "( node2->transient.pParent )", (const char *)&queryFormat, "node2->transient.pParent") )
                  __debugbreak();
                pParent = v27;
                while ( 1 )
                {
                  if ( !pParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3695, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
                    __debugbreak();
                  if ( pParent == v28 )
                    break;
                  pParent = pParent->transient.pParent;
                  if ( pParent == v27 )
                  {
                    v30 = v28->transient.pParent;
                    v31 = v28;
                    for ( i = v27->transient.pParent; v30 != v28; v30 = v30->transient.pParent )
                      v31 = v30;
                    v27->transient.pParent = v28;
                    v31->transient.pParent = i;
                    break;
                  }
                }
                v9 = startNode;
              }
            }
          }
          else
          {
            v24->transient.fCost = fCost + *(float *)((char *)&pNextOpen->constant.Links->fDist + v11);
            v24->transient.linkIndex = v20;
            *(_QWORD *)(v21 + 152) = v24;
            v21 = (__int64)v24;
            v25 = DVARINT_ai_showNodes;
            if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v25);
            if ( v25->current.integer == 10 )
              v24->transient.pPrevOpen = pNextOpen;
          }
          ++v22;
          v11 += 12i64;
        }
        while ( v22 < pNextOpen->dynamic.wLinkCount );
        v8 = results;
        v43 = v21;
        v11 = 0i64;
LABEL_64:
        v12 = curNumResults;
      }
      v10 = maxNumResults;
    }
    pNextOpen = pNextOpen->transient.pNextOpen;
    if ( !pNextOpen )
      break;
  }
  v50 = 0;
  if ( v12 > 0 )
  {
    v33 = v8;
    do
    {
      if ( v12 >= v10 )
        break;
      v34 = Path_ConvertIndexToNode(*v33);
      do
      {
        if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3853, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
          __debugbreak();
        v35 = Path_ConvertNodeToIndex(v34);
        AI_FindEntrances_AddNodeToEntranceResults(v8, &curNumResults, v35, v34);
        v34 = v34->transient.pParent;
        v36 = Path_ConvertIndexToNode(*v33);
        v12 = curNumResults;
      }
      while ( v34 != v36 && curNumResults < v10 );
      ++v33;
      ++v50;
    }
    while ( v50 < curNumResults );
    LODWORD(v11) = 0;
  }
  AI_FindEntrances_RemoveOverlappingEntrancesInternal(v8, &curNumResults, startNode, removedResultsOut, numRemovedResultsOut);
  v37 = DVARINT_ai_showNodes;
  if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v37);
  v38 = curNumResults;
  if ( v37->current.integer == 10 && curNumResults > 0 )
  {
    do
    {
      v39 = Path_ConvertIndexToNode(*v8);
      AI_FindEntrances_DrawEntranceAndPathDebug(v39, v11);
      LODWORD(v11) = v11 + 1;
      ++v8;
    }
    while ( (int)v11 < v38 );
  }
  Profile_EndInternal(NULL);
  return (unsigned int)v38;
}

/*
==============
AI_FindEntrances_AddNodeToEntranceResults
==============
*/
void AI_FindEntrances_AddNodeToEntranceResults(unsigned __int16 *results, int *curNumResults, unsigned __int16 nodeToAddIndex, pathnode_t *lastNodeInPath)
{
  pathnode_t *v8; 
  int v9; 
  unsigned __int16 *v10; 
  const dvar_t *v11; 

  if ( Path_NodeValid(nodeToAddIndex) )
  {
    v8 = Path_ConvertIndexToNode(nodeToAddIndex);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3420, ASSERT_TYPE_ASSERT, "( nodeToAdd )", (const char *)&queryFormat, "nodeToAdd") )
      __debugbreak();
    v9 = 0;
    if ( *curNumResults <= 0 )
    {
LABEL_9:
      v11 = DVARINT_ai_showNodes;
      if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.integer == 10 )
        v8->transient.iSearchFrame = Path_ConvertNodeToIndex(lastNodeInPath);
      results[(*curNumResults)++] = nodeToAddIndex;
    }
    else
    {
      v10 = results;
      while ( *v10 != nodeToAddIndex )
      {
        ++v9;
        ++v10;
        if ( v9 >= *curNumResults )
          goto LABEL_9;
      }
    }
  }
}

/*
==============
AI_FindEntrances_DrawEntranceAndPathDebug
==============
*/
void AI_FindEntrances_DrawEntranceAndPathDebug(pathnode_t *node, int resultsIndex)
{
  const dvar_t *v2; 
  int v5; 
  vec4_t v6; 
  float v7; 
  pathnode_t *v8; 
  pathnode_t *v9; 
  pathnode_t *i; 
  vec4_t color; 
  vec3_t pos; 
  vec3_t origin; 
  vec3_t v14; 
  vec3_t v15; 
  vec3_t end; 
  vec3_t start; 
  Bounds box; 

  v2 = DVARINT_ai_showNodes;
  if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3484, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DVARINT_ai_showNodes, \"ai_showNodes\" ) == AI_SHOW_NODES_ENUM_ENTRANCES_AND_PATHS)", (const char *)&queryFormat, "Dvar_GetInt( ai_showNodes ) == AI_SHOW_NODES_ENUM_ENTRANCES_AND_PATHS") )
    __debugbreak();
  v5 = resultsIndex % 7;
  if ( v5 )
  {
    switch ( v5 )
    {
      case 1:
        v6 = colorGreen;
        break;
      case 2:
        v6 = colorRed;
        break;
      case 3:
        v6 = colorYellow;
        break;
      case 4:
        v6 = colorMagenta;
        break;
      case 5:
        v6 = colorCyan;
        break;
      case 6:
        v6 = colorWhite;
        break;
      default:
        goto LABEL_22;
    }
  }
  else
  {
    v6 = colorBlue;
  }
  color = v6;
LABEL_22:
  box.halfSize.v[1] = FLOAT_16_0;
  box.halfSize.v[2] = FLOAT_16_0;
  *(_OWORD *)box.midPoint.v = _xmm;
  pathnode_t::GetPos(node, &pos);
  origin.v[0] = pos.v[0];
  v7 = (float)(4 * v5);
  origin.v[2] = v7 + pos.v[2];
  origin.v[1] = pos.v[1];
  G_DebugBox(&origin, &box, 0.0, &color, 0, 0);
  v8 = Path_ConvertIndexToNode(node->transient.iSearchFrame);
  v9 = v8;
  if ( node != v8 )
  {
    pathnode_t::GetPos(v8, &v14);
    *(_OWORD *)box.midPoint.v = _xmm;
    v15.v[0] = v14.v[0];
    box.halfSize.v[1] = FLOAT_5_0;
    box.halfSize.v[2] = FLOAT_5_0;
    v15.v[2] = v7 + v14.v[2];
    v15.v[1] = v14.v[1];
    G_DebugBox(&v15, &box, 0.0, &color, 1, 0);
  }
  for ( i = v9->transient.pPrevOpen; i; i = i->transient.pPrevOpen )
  {
    pathnode_t::GetPos(i, &start);
    start.v[2] = v7 + start.v[2];
    pathnode_t::GetPos(v9, &end);
    end.v[2] = v7 + end.v[2];
    G_DebugLine(&start, &end, &color, 1);
    v9 = i;
  }
}

/*
==============
AI_FindEntrances_FindNearestNode
==============
*/
pathnode_t *AI_FindEntrances_FindNearestNode(const vec3_t *point, float searchDistance)
{
  signed __int64 v2; 
  void *v3; 
  pathnode_t *result; 
  int returnCount; 
  NearestNodeInput pInput; 
  pathsort_s nodes; 

  v3 = alloca(v2);
  if ( searchDistance <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3443, ASSERT_TYPE_ASSERT, "( searchDistance ) > ( 0 )", "searchDistance > 0\n\t%g, %g", searchDistance, 0.0) )
    __debugbreak();
  pInput.entNum = 2047;
  pInput.blockPlanes = NULL;
  pInput.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
  *(_WORD *)&pInput.bAllowCrouch = 257;
  pInput.baseBounds = &actorBox;
  pInput.bAllowFailedUnuseable = 1;
  pInput.fMaxDist = searchDistance;
  pInput.vOrigin = point;
  pInput.traceMask = 33685521;
  pInput.typeFlags = -510656514;
  result = Path_NearestNodeExtended(&pInput, &nodes, 768, &returnCount, 0);
  if ( !result )
    return Path_NearestNodeByDistanceOnly(point, searchDistance);
  return result;
}

/*
==============
AI_FindEntrances_GetLastVisibleNodeIndex
==============
*/
__int64 AI_FindEntrances_GetLastVisibleNodeIndex(pathnode_t *currentNode)
{
  if ( currentNode->transient.linkIndex == LOWORD(currentNode->transient.nodeCost) )
    return LOWORD(currentNode->transient.nodeCost);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3671, ASSERT_TYPE_ASSERT, "(currentNode->transient.linkIndex == static_cast<pathnode_id>( currentNode->transient.linkIndex ))", (const char *)&queryFormat, "currentNode->transient.linkIndex == static_cast<pathnode_id>( currentNode->transient.linkIndex )") )
    __debugbreak();
  return LOWORD(currentNode->transient.nodeCost);
}

/*
==============
AI_FindEntrances_GetNumOverlappingEntrancesForNode
==============
*/
__int64 AI_FindEntrances_GetNumOverlappingEntrancesForNode(unsigned __int16 *results, int curNumResults, pathnode_t *nodeTesting, vec3_t *startOrigin)
{
  __int64 v4; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  unsigned int v16; 
  float v17; 
  float v18; 
  __int64 i; 
  pathnode_t *v20; 
  __int128 v21; 
  float v26; 
  vec3_t pos; 
  vec3_t v28; 

  v4 = curNumResults;
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3553, ASSERT_TYPE_ASSERT, "( results )", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !nodeTesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3554, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
    __debugbreak();
  pathnode_t::GetPos(nodeTesting, &pos);
  v8 = startOrigin->v[0];
  v9 = startOrigin->v[1];
  v10 = startOrigin->v[2];
  v12 = LODWORD(pos.v[0]);
  v11 = pos.v[0] - startOrigin->v[0];
  *(float *)&v12 = fsqrt((float)((float)(v11 * v11) + (float)((float)(pos.v[1] - v9) * (float)(pos.v[1] - v9))) + (float)((float)(pos.v[2] - v10) * (float)(pos.v[2] - v10)));
  _XMM1 = v12;
  __asm
  {
    vcmpless xmm0, xmm1, xmm13
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  v16 = 0;
  v26 = (float)(pos.v[2] - v10) * (float)(1.0 / *(float *)&_XMM0);
  v17 = v11 * (float)(1.0 / *(float *)&_XMM0);
  v18 = (float)(pos.v[1] - v9) * (float)(1.0 / *(float *)&_XMM0);
  if ( v4 > 0 )
  {
    for ( i = 0i64; i < v4; ++i )
    {
      v20 = Path_ConvertIndexToNode(results[i]);
      if ( v20 != nodeTesting )
      {
        pathnode_t::GetPos(v20, &v28);
        v21 = LODWORD(v28.v[1]);
        *(float *)&v21 = fsqrt((float)((float)((float)(v28.v[1] - v9) * (float)(v28.v[1] - v9)) + (float)((float)(v28.v[0] - v8) * (float)(v28.v[0] - v8))) + (float)((float)(v28.v[2] - v10) * (float)(v28.v[2] - v10)));
        _XMM1 = v21;
        __asm
        {
          vcmpless xmm0, xmm1, xmm13
          vblendvps xmm0, xmm1, xmm8, xmm0
        }
        if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(v28.v[0] - v8)) * v17) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(v28.v[1] - v9)) * v18)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(v28.v[2] - v10)) * v26)) > 0.98500001 )
          ++v16;
      }
    }
  }
  return v16;
}

/*
==============
AI_FindEntrances_RemoveOverlappingEntrancesInternal
==============
*/
void AI_FindEntrances_RemoveOverlappingEntrancesInternal(unsigned __int16 *results, int *curNumResults, pathnode_t *startNode, unsigned __int16 *removedResultsOut, int *numRemovedResultsOut)
{
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  pathnode_t *v13; 
  int v14; 
  int NumOverlappingEntrancesForNode; 
  int v16; 
  vec3_t v17; 
  vec3_t pos; 

  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3598, ASSERT_TYPE_ASSERT, "( results )", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !curNumResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3599, ASSERT_TYPE_ASSERT, "( curNumResults )", (const char *)&queryFormat, "curNumResults") )
    __debugbreak();
  if ( !startNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3600, ASSERT_TYPE_ASSERT, "( startNode )", (const char *)&queryFormat, "startNode") )
    __debugbreak();
  pathnode_t::GetPos(startNode, &pos);
  while ( 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0i64;
    v12 = -1i64;
    if ( *curNumResults <= 0 )
      break;
    do
    {
      v13 = Path_ConvertIndexToNode(results[v11]);
      v14 = *curNumResults;
      v17 = pos;
      NumOverlappingEntrancesForNode = AI_FindEntrances_GetNumOverlappingEntrancesForNode(results, v14, v13, &v17);
      if ( NumOverlappingEntrancesForNode > v9 )
      {
        v9 = NumOverlappingEntrancesForNode;
        v12 = v11;
      }
      v16 = *curNumResults;
      ++v10;
      ++v11;
    }
    while ( v10 < *curNumResults );
    if ( v12 == -1 )
      break;
    if ( removedResultsOut )
    {
      if ( !numRemovedResultsOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3630, ASSERT_TYPE_ASSERT, "( numRemovedResultsOut )", (const char *)&queryFormat, "numRemovedResultsOut") )
        __debugbreak();
      removedResultsOut[(*numRemovedResultsOut)++] = results[v12];
      v16 = *curNumResults;
    }
    results[v12] = results[v16 - 1];
    --*curNumResults;
  }
}

/*
==============
AI_SearchGetBestNode
==============
*/
pathnode_t *AI_SearchGetBestNode(const ai_search_t *search)
{
  pathnode_t *v1; 
  unsigned __int16 priority; 
  unsigned __int16 currentNodeCount; 
  unsigned int i; 
  pathnode_t *v6; 
  __int64 v8; 

  v1 = NULL;
  priority = 0;
  if ( !search && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4446, ASSERT_TYPE_ASSERT, "( search )", (const char *)&queryFormat, "search") )
    __debugbreak();
  currentNodeCount = search->currentNodeCount;
  if ( currentNodeCount > 0x80u )
  {
    LODWORD(v8) = currentNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4447, ASSERT_TYPE_ASSERT, "( search->currentNodeCount ) <= ( 128 )", "search->currentNodeCount <= PATH_MAX_AI_SEARCH_NODES\n\t%i, %i", v8, 128) )
      __debugbreak();
  }
  for ( i = 0; i < search->currentNodeCount; ++i )
  {
    if ( search->nodes[i].priority > priority )
    {
      v6 = Path_ConvertIndexToNode(search->nodes[i].nodeIndex);
      priority = search->nodes[i].priority;
      v1 = v6;
    }
  }
  return v1;
}

/*
==============
AI_SearchNodeVisible
==============
*/
char AI_SearchNodeVisible(ai_common_t *aiCommon, pathnode_t *nodeTesting, pathnode_t *nodeNearestAI)
{
  int v6; 
  char v7; 
  __int64 i; 
  const pathnode_t *v9; 

  if ( !nodeTesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4219, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
    __debugbreak();
  if ( !nodeNearestAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4220, ASSERT_TYPE_ASSERT, "( nodeNearestAI )", (const char *)&queryFormat, "nodeNearestAI") )
    __debugbreak();
  if ( Path_NodesVisibleNoPeek(nodeTesting, nodeNearestAI) )
    return 1;
  v6 = 0;
  v7 = 1;
  if ( nodeTesting->dynamic.wLinkCount > 0 )
  {
    for ( i = 0i64; ; ++i )
    {
      v9 = Path_ConvertIndexToNode(nodeTesting->constant.Links[i].nodeNum);
      if ( !Path_NodesVisibleNoPeek(v9, nodeNearestAI) )
        break;
      if ( ++v6 >= nodeTesting->dynamic.wLinkCount )
        return v7;
    }
    return 0;
  }
  return v7;
}

/*
==============
AI_UpdateSearchArea
==============
*/
__int64 AI_UpdateSearchArea(ai_search_t *search, ai_common_t *aiCommon, bool prioritizeForward, bool needsNodeReturn, bool slowSearch)
{
  unsigned __int16 currentNodeCount; 
  unsigned __int16 totalNodeCount; 
  unsigned __int16 v9; 
  __int16 v10; 
  __int16 v11; 
  char v12; 
  const pathnode_t *v13; 
  gentity_s *ent; 
  int v15; 
  bool v16; 
  __int128 v17; 
  __int16 v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  pathnode_t *v25; 
  int v26; 
  __int64 v27; 
  const pathnode_t *v28; 
  ai_common_t *v29; 
  unsigned __int16 framesVisible; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  int v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  float v42; 
  __int64 v44; 
  __int64 v45; 
  char v46; 
  unsigned int v48; 
  int v50; 
  unsigned __int16 nodeIndex; 
  pathnode_t *node1; 
  unsigned __int16 v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int priority; 
  unsigned int v57; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v60; 
  vec3_t forward; 
  vec3_t pos; 
  vec3_t vPoint; 

  if ( !search && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4251, ASSERT_TYPE_ASSERT, "( search )", (const char *)&queryFormat, "search") )
    __debugbreak();
  if ( !aiCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4252, ASSERT_TYPE_ASSERT, "( aiCommon )", (const char *)&queryFormat, "aiCommon") )
    __debugbreak();
  if ( !aiCommon->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4253, ASSERT_TYPE_ASSERT, "( aiCommon->ent )", (const char *)&queryFormat, "aiCommon->ent") )
    __debugbreak();
  if ( !aiCommon->ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4254, ASSERT_TYPE_ASSERT, "( aiCommon->ent->sentient )", (const char *)&queryFormat, "aiCommon->ent->sentient") )
    __debugbreak();
  currentNodeCount = search->currentNodeCount;
  if ( currentNodeCount > 0x80u )
  {
    LODWORD(v44) = currentNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4255, ASSERT_TYPE_ASSERT, "( search->currentNodeCount ) <= ( 128 )", "search->currentNodeCount <= PATH_MAX_AI_SEARCH_NODES\n\t%i, %i", v44, 128) )
      __debugbreak();
  }
  totalNodeCount = search->totalNodeCount;
  if ( totalNodeCount > 0x80u )
  {
    LODWORD(v45) = 128;
    LODWORD(v44) = totalNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4256, ASSERT_TYPE_ASSERT, "( search->totalNodeCount ) <= ( 128 )", "search->totalNodeCount <= PATH_MAX_AI_SEARCH_NODES\n\t%i, %i", v44, v45) )
      __debugbreak();
  }
  v9 = -1;
  v50 = -1;
  v10 = -1;
  v11 = -1;
  nodeIndex = -1;
  v12 = 1;
  v57 = 0;
  v54 = 0;
  v55 = 0;
  priority = 0;
  v46 = 1;
  v13 = Sentient_NearestNode(aiCommon->ent->sentient);
  node1 = (pathnode_t *)v13;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4290, ASSERT_TYPE_ASSERT, "( nodeNearestAI )", (const char *)&queryFormat, "nodeNearestAI") )
    __debugbreak();
  AIActorInterface::AIActorInterface(&v60.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v60.m_newAgentInterface);
  v60.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v60.m_botInterface);
  v60.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v60.m_botAgentInterface);
  ent = aiCommon->ent;
  v60.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  v60.m_pAI = NULL;
  AICommonWrapper::Setup(&v60, ent);
  m_pAI = v60.m_pAI;
  if ( !v60.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4292, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  v15 = search->currentNodeCount;
  if ( (float)(1.0 - (float)((float)v15 / (float)search->totalNodeCount)) > search->percentofNodesToSearch )
  {
    *(_DWORD *)&search->currentNodeCount = -65536;
    LOWORD(v15) = 0;
  }
  v16 = prioritizeForward;
  if ( prioritizeForward )
  {
    AngleVectors(&aiCommon->ent->r.currentAngles, &forward, NULL, NULL);
    LOWORD(v15) = search->currentNodeCount;
    v16 = prioritizeForward;
    v17 = LODWORD(forward.v[0]);
    *(float *)&v17 = fsqrt((float)(*(float *)&v17 * *(float *)&v17) + (float)(forward.v[1] * forward.v[1]));
    _XMM2 = v17;
    __asm
    {
      vcmpless xmm0, xmm2, xmm11
      vblendvps xmm0, xmm2, xmm7, xmm0
    }
    forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
    forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
  }
  v21 = 15;
  if ( !slowSearch )
    v21 = 6;
  v53 = v21;
  v22 = 0;
  v48 = 0;
  if ( (_WORD)v15 )
  {
    while ( 1 )
    {
      if ( v22 >= 0x80 )
      {
        LODWORD(v45) = 128;
        LODWORD(v44) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4313, ASSERT_TYPE_ASSERT, "(unsigned)( searchNodesIndex ) < (unsigned)( 128 )", "searchNodesIndex doesn't index PATH_MAX_AI_SEARCH_NODES\n\t%i not in [0, %i)", v44, v45) )
          __debugbreak();
        v22 = v48;
      }
      v23 = v22;
      v24 = 3i64 * v22 + 24;
      v25 = Path_ConvertIndexToNode(*((_WORD *)search->searchOrigin.v + v24));
      pathnode_t::GetPos(v25, &pos);
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4219, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4220, ASSERT_TYPE_ASSERT, "( nodeNearestAI )", (const char *)&queryFormat, "nodeNearestAI") )
        __debugbreak();
      if ( Path_NodesVisibleNoPeek(v25, v13) || (v26 = 0, v25->dynamic.wLinkCount <= 0) )
      {
LABEL_47:
        v29 = aiCommon;
        if ( (float)((float)((float)((float)(pos.v[1] - aiCommon->ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - aiCommon->ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - aiCommon->ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - aiCommon->ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - aiCommon->ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - aiCommon->ent->r.currentOrigin.v[2]))) >= 2025.0 )
        {
          vPoint.v[2] = pos.v[2] + 40.0;
          vPoint.v[0] = pos.v[0];
          vPoint.v[1] = pos.v[1];
          if ( AICommonInterface::PointInFov(m_pAI, &vPoint) )
          {
            if ( search->nodes[v23].framesVisible >= 0xFFFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4329, ASSERT_TYPE_ASSERT, "( search->nodes[searchNodesIndex].framesVisible < 0xffff - 1 )", (const char *)&queryFormat, "search->nodes[searchNodesIndex].framesVisible < AI_SEARCH_NODE_MAX_VISIBLE_FRAMES - 1") )
              __debugbreak();
            ++search->nodes[v23].framesVisible;
          }
        }
        else
        {
          search->nodes[v23].framesVisible = v53 + 1;
        }
      }
      else
      {
        v27 = 0i64;
        while ( 1 )
        {
          v28 = Path_ConvertIndexToNode(v25->constant.Links[v27].nodeNum);
          if ( !Path_NodesVisibleNoPeek(v28, node1) )
            break;
          ++v26;
          ++v27;
          if ( v26 >= v25->dynamic.wLinkCount )
            goto LABEL_47;
        }
        v29 = aiCommon;
      }
      framesVisible = search->nodes[v23].framesVisible;
      if ( framesVisible > v53 )
      {
        v31 = search->currentNodeCount;
        if ( (unsigned int)(v31 - 1) >= 0x80 )
        {
          LODWORD(v45) = 128;
          LODWORD(v44) = v31 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4337, ASSERT_TYPE_ASSERT, "(unsigned)( (search->currentNodeCount-1) ) < (unsigned)( 128 )", "(search->currentNodeCount-1) doesn't index PATH_MAX_AI_SEARCH_NODES\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        v32 = 3 * v23 + 24;
        v33 = 3i64 * search->currentNodeCount + 21;
        *(float *)((char *)search->searchOrigin.v + 2 * v32) = *(float *)((char *)search->searchOrigin.v + 2 * v33);
        *((_WORD *)&search->searchOrigin.y + v32) = *((_WORD *)&search->searchOrigin.y + v33);
        --search->currentNodeCount;
        v34 = v48 - 1;
LABEL_82:
        v12 = v46;
LABEL_83:
        v13 = node1;
        v16 = prioritizeForward;
        goto LABEL_84;
      }
      if ( !needsNodeReturn || !v46 )
      {
LABEL_81:
        v34 = v48;
        goto LABEL_82;
      }
      if ( search->currentNodePicked == *((_WORD *)search->searchOrigin.v + v24) )
      {
        v34 = v48;
        v12 = 0;
        v46 = 0;
        v9 = *((_WORD *)search->searchOrigin.v + v24);
        goto LABEL_83;
      }
      if ( search->mode == AI_SEARCH_QUICK && framesVisible )
        goto LABEL_81;
      v13 = node1;
      v35 = Path_NodesVisibleNoPeek(v25, node1);
      v16 = prioritizeForward;
      if ( v35 )
        break;
      if ( prioritizeForward )
      {
        v36 = pos.v[0] - v29->ent->r.currentOrigin.v[0];
        v38 = LODWORD(pos.v[1]);
        v37 = pos.v[1] - v29->ent->r.currentOrigin.v[1];
        *(float *)&v38 = fsqrt((float)(v37 * v37) + (float)(v36 * v36));
        _XMM3 = v38;
        __asm
        {
          vcmpless xmm0, xmm3, xmm11
          vblendvps xmm0, xmm3, xmm7, xmm0
        }
        v42 = (float)((float)(v37 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1]) + (float)((float)(v36 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[0]);
        if ( v42 <= 0.76999998 )
        {
          if ( v42 <= 0.1 )
          {
            if ( v42 > -0.40000001 && search->nodes[v23].priority > priority )
            {
              priority = search->nodes[v23].priority;
              nodeIndex = search->nodes[v23].nodeIndex;
            }
          }
          else if ( search->nodes[v23].priority > v55 )
          {
            v55 = search->nodes[v23].priority;
            HIWORD(v50) = search->nodes[v23].nodeIndex;
          }
        }
        else if ( search->nodes[v23].priority > v54 )
        {
          v54 = search->nodes[v23].priority;
          LOWORD(v50) = search->nodes[v23].nodeIndex;
        }
      }
      v12 = v46;
      if ( search->nodes[v23].priority <= v57 )
        goto LABEL_80;
      v57 = search->nodes[v23].priority;
      v9 = search->nodes[v23].nodeIndex;
      v34 = v48;
LABEL_84:
      v48 = v34 + 1;
      v22 = v34 + 1;
      if ( v34 + 1 >= search->currentNodeCount )
      {
        v10 = v50;
        v11 = HIWORD(v50);
        goto LABEL_86;
      }
    }
    v12 = v46;
LABEL_80:
    v34 = v48;
    goto LABEL_84;
  }
LABEL_86:
  if ( needsNodeReturn )
  {
    if ( v12 )
    {
      if ( search->mode == AI_SEARCH_QUICK && search->currentNodePicked != 0xFFFF )
      {
        v9 = -1;
        goto LABEL_99;
      }
      if ( v16 )
      {
        if ( v10 == -1 )
        {
          if ( v11 == -1 )
          {
            if ( nodeIndex != 0xFFFF )
              v9 = nodeIndex;
          }
          else
          {
            v9 = v11;
          }
        }
        else
        {
          v9 = v10;
        }
      }
    }
    if ( v9 != 0xFFFF )
    {
LABEL_100:
      search->currentNodePicked = v9;
      return v9;
    }
LABEL_99:
    search->currentNodeCount = 0;
    goto LABEL_100;
  }
  return v9;
}

/*
==============
Debug_DisplaySearchCount
==============
*/
void Debug_DisplaySearchCount(const PathFindInput *pathFindInput, int count)
{
  const dvar_t *v4; 

  if ( !pathFindInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 911, ASSERT_TYPE_ASSERT, "(pathFindInput)", (const char *)&queryFormat, "pathFindInput") )
    __debugbreak();
  v4 = DVARBOOL_ai_showPathFindNodes;
  if ( !DVARBOOL_ai_showPathFindNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showPathFindNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    Com_Printf(18, "Path search for entity %d evaluated %d nodes\n", (unsigned int)pathFindInput->searchEntNum, (unsigned int)count);
}

/*
==============
CustomSearchInfo_FindPath::ExposureCost
==============
*/
float CustomSearchInfo_FindPath::ExposureCost(CustomSearchInfo_FindPath *this, float value, float maxValue, float percent)
{
  float v4; 
  float v5; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1521, ASSERT_TYPE_ASSERT, "( G_Bot_UsePathExposureCost() || G_Bot_SystemActive() )", (const char *)&queryFormat, "G_Bot_UsePathExposureCost() || G_Bot_SystemActive()") )
    __debugbreak();
  if ( maxValue == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1522, ASSERT_TYPE_ASSERT, "( maxValue != 0 )", (const char *)&queryFormat, "maxValue != 0") )
    __debugbreak();
  v5 = value / maxValue;
  v4 = value / maxValue;
  if ( percent >= 0.0 )
    return (float)(v5 * 256.0) * percent;
  else
    return (float)((float)(1.0 - v4) * -256.0) * percent;
}

/*
==============
CustomSearchInfo_FindPath::GetNodeCost
==============
*/
float CustomSearchInfo_FindPath::GetNodeCost(CustomSearchInfo_FindPath *this, pathnode_t *pSuccessor, const vec3_t *vGoalPos)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  float v8; 
  float v9; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float minUseDistSq; 
  __int128 v19; 
  __int128 v20; 
  float avoidExpSkyPercent; 
  __int128 v25; 
  float avoidExpGenPercent; 
  float v27; 
  double v28; 
  __int128 v29; 
  float avoidExpLOSPercent; 
  float RawArcMax; 
  double v32; 
  __int128 v33; 
  float avoidExpTrafficPercent; 
  float Traffic; 
  double v36; 
  __int128 v37; 
  float *avoidExpPosPercent; 
  pathnode_t **avoidExpPosNode; 
  float *v40; 
  int v41; 
  unsigned int v42; 
  float v43; 
  float v44; 
  float v45; 
  __int128 v46; 
  float v49; 
  __int128 v53; 
  float avoidLocationMaxDist; 
  float v55; 
  double v56; 
  __int128 v57; 
  int v58; 
  __int64 v59; 
  __int128 v60; 
  float result; 
  __int64 v63; 
  vec3_t point; 
  vec3_t pos; 
  __int128 v66; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 

  v8 = this->startPos.v[0];
  v9 = this->startPos.v[1];
  v70 = v3;
  v12 = pSuccessor->constant.vLocalOrigin.v[0];
  v13 = pSuccessor->constant.vLocalOrigin.v[1];
  v14 = pSuccessor->constant.vLocalOrigin.v[2];
  v15 = (float)((float)((float)(v9 - v13) * (float)(v9 - v13)) + (float)((float)(v8 - v12) * (float)(v8 - v12))) + (float)((float)(this->startPos.v[2] - v14) * (float)(this->startPos.v[2] - v14));
  _XMM6 = 0i64;
  if ( v15 > 65536.0 && (float)((float)((float)((float)(vGoalPos->v[1] - v13) * (float)(vGoalPos->v[1] - v13)) + (float)((float)(vGoalPos->v[0] - v12) * (float)(vGoalPos->v[0] - v12))) + (float)((float)(vGoalPos->v[2] - v14) * (float)(vGoalPos->v[2] - v14))) > 65536.0 )
    _XMM6 = LODWORD(this->randomNodeCosts[this->randomWeightIndex]);
  minUseDistSq = pSuccessor->constant.minUseDistSq;
  _XMM8 = LODWORD(FLOAT_1_0);
  if ( minUseDistSq > 1.0 && minUseDistSq > v15 )
  {
    v19 = _XMM6;
    *(float *)&v19 = *(float *)&_XMM6 + this->negotiationOverlapCost;
    _XMM6 = v19;
  }
  if ( (pSuccessor->constant.spawnflags & 0x20) != 0 )
  {
    v20 = _XMM6;
    *(float *)&v20 = *(float *)&_XMM6 + this->chokePointWeights[this->randomWeightIndex];
    _XMM6 = v20;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    v69 = v4;
    avoidExpSkyPercent = this->avoidExpSkyPercent;
    v68 = v5;
    if ( avoidExpSkyPercent != 0.0 )
    {
      _XMM0 = Path_IsExposedSky(pSuccessor);
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm8, xmm7, xmm2
      }
      *(double *)&_XMM0 = CustomSearchInfo_FindPath::ExposureCost(this, *(float *)&_XMM0, 1.0, avoidExpSkyPercent);
      v25 = _XMM6;
      *(float *)&v25 = *(float *)&_XMM6 + *(float *)&_XMM0;
      _XMM6 = v25;
    }
    avoidExpGenPercent = this->avoidExpGenPercent;
    if ( avoidExpGenPercent != 0.0 )
    {
      v27 = (float)Path_NodeExposureGeneral(pSuccessor, this->avoidExpStances);
      v28 = CustomSearchInfo_FindPath::ExposureCost(this, v27, 2040.0, avoidExpGenPercent);
      v29 = _XMM6;
      *(float *)&v29 = *(float *)&_XMM6 + *(float *)&v28;
      _XMM6 = v29;
    }
    avoidExpLOSPercent = this->avoidExpLOSPercent;
    if ( avoidExpLOSPercent != 0.0 )
    {
      RawArcMax = (float)Path_NodeExposureGetRawArcMax(pSuccessor, 0.0, 180.0, this->avoidExpStances);
      v32 = CustomSearchInfo_FindPath::ExposureCost(this, RawArcMax, 255.0, avoidExpLOSPercent);
      v33 = _XMM6;
      *(float *)&v33 = *(float *)&_XMM6 + *(float *)&v32;
      _XMM6 = v33;
    }
    avoidExpTrafficPercent = this->avoidExpTrafficPercent;
    if ( avoidExpTrafficPercent != 0.0 )
    {
      Traffic = (float)Path_NodeExposureGetTraffic(pSuccessor);
      v36 = CustomSearchInfo_FindPath::ExposureCost(this, Traffic, 255.0, avoidExpTrafficPercent);
      v37 = _XMM6;
      *(float *)&v37 = *(float *)&_XMM6 + *(float *)&v36;
      _XMM6 = v37;
    }
    avoidExpPosPercent = this->avoidExpPosPercent;
    if ( this->avoidExpPosPercent[0] != 0.0 )
    {
      pathnode_t::GetPos(pSuccessor, &pos);
      v67 = v6;
      avoidExpPosNode = this->avoidExpPosNode;
      v66 = v7;
      v40 = &this->avoidExpPosDir[0].v[2];
      v41 = 0;
      do
      {
        if ( !*avoidExpPosNode || *avoidExpPosPercent == 0.0 )
          break;
        pathnode_t::GetPos(*avoidExpPosNode, &point);
        v42 = 0;
        if ( Path_NodeExposedToPoint_Fast(pSuccessor, &pos, &point, this->avoidExpStances) )
        {
          LOBYTE(v42) = pSuccessor == *avoidExpPosNode;
          if ( pSuccessor != *avoidExpPosNode )
          {
            v43 = pos.v[0] - point.v[0];
            v46 = LODWORD(pos.v[1]);
            v44 = pos.v[1] - point.v[1];
            v45 = pos.v[2] - point.v[2];
            *(float *)&v46 = (float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45);
            if ( *(float *)&v46 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
              __debugbreak();
            _XMM1 = v46;
            __asm { vrsqrtss xmm5, xmm1, xmm1 }
            if ( (float)((float)((float)((float)(v44 * *(float *)&_XMM5) * *(v40 - 1)) + (float)((float)(v43 * *(float *)&_XMM5) * *(v40 - 2))) + (float)((float)(v45 * *(float *)&_XMM5) * *v40)) >= *(avoidExpPosPercent - 5) )
              v42 = 1;
          }
        }
        v49 = avoidExpPosPercent[5];
        if ( v49 <= 0.0 || (float)((float)((float)((float)(point.v[1] - v13) * (float)(point.v[1] - v13)) + (float)((float)(point.v[0] - v12) * (float)(point.v[0] - v12))) + (float)((float)(point.v[2] - v14) * (float)(point.v[2] - v14))) < v49 )
        {
          _XMM0 = v42;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm1, xmm8, xmm7, xmm2; value
          }
          *(double *)&_XMM0 = CustomSearchInfo_FindPath::ExposureCost(this, *(float *)&_XMM1, 1.0, *avoidExpPosPercent);
          v53 = _XMM6;
          *(float *)&v53 = *(float *)&_XMM6 + *(float *)&_XMM0;
          _XMM6 = v53;
        }
        ++v41;
        ++avoidExpPosNode;
        ++avoidExpPosPercent;
        v40 += 3;
      }
      while ( v41 < 5 );
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    if ( this->avoidLocationPercent != 0.0 )
    {
      avoidLocationMaxDist = this->avoidLocationMaxDist;
      if ( avoidLocationMaxDist > 0.0 )
      {
        v55 = fsqrt((float)((float)((float)(this->avoidLocationPos.v[1] - v13) * (float)(this->avoidLocationPos.v[1] - v13)) + (float)((float)(this->avoidLocationPos.v[0] - v12) * (float)(this->avoidLocationPos.v[0] - v12))) + (float)((float)(this->avoidLocationPos.v[2] - v14) * (float)(this->avoidLocationPos.v[2] - v14)));
        I_fclamp(avoidLocationMaxDist - v55, 0.0, avoidLocationMaxDist);
        v56 = CustomSearchInfo_FindPath::ExposureCost(this, avoidLocationMaxDist - v55, this->avoidLocationMaxDist, this->avoidLocationPercent);
        v57 = _XMM6;
        *(float *)&v57 = *(float *)&_XMM6 + *(float *)&v56;
        _XMM6 = v57;
      }
    }
    if ( this->pathZoneCostsCount )
    {
      v58 = Path_NodeZoneFromNode(pSuccessor);
      v59 = v58;
      if ( v58 != 255 )
      {
        if ( !this->pathZoneCosts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1640, ASSERT_TYPE_ASSERT, "( pathZoneCosts )", (const char *)&queryFormat, "pathZoneCosts") )
          __debugbreak();
        if ( (unsigned int)v59 >= this->pathZoneCostsCount )
        {
          LODWORD(v63) = v59;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1641, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( pathZoneCostsCount )", "zone doesn't index pathZoneCostsCount\n\t%i not in [0, %i)", v63, this->pathZoneCostsCount) )
            __debugbreak();
        }
        v60 = _XMM6;
        *(float *)&v60 = *(float *)&_XMM6 + (float)this->pathZoneCosts[v59];
        _XMM6 = v60;
      }
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && (pSuccessor->constant.spawnflags & 4) != 0 && pSuccessor->constant.type == 1 )
  {
    __asm { vmaxss  xmm0, xmm6, cs:__real@43800000 }
    *(float *)&_XMM6 = *(float *)&_XMM0 * 2.0;
  }
  result = *(float *)&_XMM6;
  this->randomWeightIndex = (this->randomWeightIndex + 1) % 4;
  return result;
}

/*
==============
PathHeap_Compare
==============
*/
_BOOL8 PathHeap_Compare(const PathHeap *heap, const unsigned int node1, const unsigned int node2)
{
  __int64 v3; 
  __int64 v5; 
  unsigned int nodeCount; 
  pathnode_t *v7; 
  pathnode_t *v8; 
  __int64 v10; 
  __int64 v11; 

  v3 = node2;
  v5 = node1;
  if ( !heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1007, ASSERT_TYPE_ASSERT, "( heap )", (const char *)&queryFormat, "heap") )
    __debugbreak();
  if ( (unsigned int)v5 >= heap->size )
  {
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( node1 ) < (unsigned)( heap->size )", "node1 doesn't index heap->size\n\t%i not in [0, %i)", v10, heap->size) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= heap->size )
  {
    LODWORD(v11) = heap->size;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1009, ASSERT_TYPE_ASSERT, "(unsigned)( node2 ) < (unsigned)( heap->size )", "node2 doesn't index heap->size\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  nodeCount = pathData.nodeCount;
  if ( heap->nodes[v5] >= pathData.nodeCount )
  {
    LODWORD(v11) = pathData.nodeCount;
    LODWORD(v10) = heap->nodes[v5];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1010, ASSERT_TYPE_ASSERT, "(unsigned)( heap->nodes[node1] ) < (unsigned)( pathData.nodeCount )", "heap->nodes[node1] doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
    nodeCount = pathData.nodeCount;
  }
  if ( heap->nodes[v3] >= nodeCount )
  {
    LODWORD(v11) = nodeCount;
    LODWORD(v10) = heap->nodes[v3];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1011, ASSERT_TYPE_ASSERT, "(unsigned)( heap->nodes[node2] ) < (unsigned)( pathData.nodeCount )", "heap->nodes[node2] doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v7 = &pathData.nodes[heap->nodes[v5]];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1014, ASSERT_TYPE_ASSERT, "( pathNode1 )", (const char *)&queryFormat, "pathNode1") )
    __debugbreak();
  v8 = &pathData.nodes[heap->nodes[v3]];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1016, ASSERT_TYPE_ASSERT, "( pathNode2 )", (const char *)&queryFormat, "pathNode2") )
    __debugbreak();
  return (float)(v7->transient.fHeuristic + v7->transient.fCost) > (float)(v8->transient.fHeuristic + v8->transient.fCost);
}

/*
==============
PathHeap_PercolateUp
==============
*/
__int64 PathHeap_PercolateUp(PathHeap *heap, unsigned int node)
{
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 

  if ( !heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1078, ASSERT_TYPE_ASSERT, "( heap )", (const char *)&queryFormat, "heap") )
    __debugbreak();
  if ( node >= heap->size )
  {
    LODWORD(v6) = node;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1079, ASSERT_TYPE_ASSERT, "(unsigned)( node ) < (unsigned)( heap->size )", "node doesn't index heap->size\n\t%i not in [0, %i)", v6, heap->size) )
      __debugbreak();
  }
  if ( !node )
    return 0i64;
  do
  {
    v4 = (node - 1) >> 1;
    if ( v4 >= heap->size )
    {
      LODWORD(v7) = heap->size;
      LODWORD(v6) = (node - 1) >> 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1089, ASSERT_TYPE_ASSERT, "(unsigned)( parent ) < (unsigned)( heap->size )", "parent doesn't index heap->size\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( PathHeap_Compare(heap, node, v4) )
      break;
    PathHeap_SwapNodes(heap, node, v4);
    node = (node - 1) >> 1;
  }
  while ( v4 );
  return node;
}

/*
==============
PathHeap_SwapNodes
==============
*/
void PathHeap_SwapNodes(PathHeap *heap, const unsigned int node1, const unsigned int node2)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = node2;
  v5 = node1;
  if ( !heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1027, ASSERT_TYPE_ASSERT, "( heap )", (const char *)&queryFormat, "heap") )
    __debugbreak();
  if ( (unsigned int)v5 >= heap->size )
  {
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1028, ASSERT_TYPE_ASSERT, "(unsigned)( node1 ) < (unsigned)( heap->size )", "node1 doesn't index heap->size\n\t%i not in [0, %i)", v8, heap->size) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= heap->size )
  {
    LODWORD(v9) = heap->size;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1029, ASSERT_TYPE_ASSERT, "(unsigned)( node2 ) < (unsigned)( heap->size )", "node2 doesn't index heap->size\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v6 = heap->nodes[v3];
  v7 = heap->nodes[v5];
  heap->nodes[v5] = v6;
  heap->nodes[v3] = v7;
  heap->index[v7] = truncate_cast<unsigned short,unsigned int>(v3);
  heap->index[v6] = truncate_cast<unsigned short,unsigned int>(v5);
}

/*
==============
Path_AddTrimmedAmount
==============
*/
void Path_AddTrimmedAmount(path_t *pPath, const vec3_t *vStartPos)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int64 wPathLen; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float *v; 
  float *v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  float v31; 
  __int128 v32; 
  pathpoint_t *v33; 
  float v34; 
  float fOrigLength; 
  float fCurrLength; 
  float v37; 
  vec3_t inOutPos; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 

  wPathLen = pPath->wPathLen;
  v14 = wPathLen - 1;
  if ( pPath->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 379, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( (_DWORD)wPathLen && pPath->wNegotiationStartNode > v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 380, ASSERT_TYPE_ASSERT, "(i == -1 || pPath->wNegotiationStartNode <= i)", (const char *)&queryFormat, "i == -1 || pPath->wNegotiationStartNode <= i") )
    __debugbreak();
  if ( v14 > pPath->wNegotiationStartNode )
  {
    v15 = vStartPos->v[0];
    v16 = vStartPos->v[1];
    v47 = v2;
    v46 = v3;
    v45 = v4;
    v44 = v5;
    v43 = v6;
    v42 = v7;
    inOutPos.v[0] = v15;
    v17 = vStartPos->v[2];
    v41 = v8;
    v40 = v9;
    v39 = v10;
    inOutPos.v[1] = v16;
    inOutPos.v[2] = v17;
    Path_LocalizePos(pPath, &inOutPos);
    v18 = inOutPos.v[0];
    v19 = inOutPos.v[1];
    v20 = 0i64;
    _XMM15 = 0i64;
    fsqrt((float)((float)(inOutPos.v[1] - pPath->pts[wPathLen - 2].vOrigPoint.v[1]) * (float)(inOutPos.v[1] - pPath->pts[wPathLen - 2].vOrigPoint.v[1])) + (float)((float)(inOutPos.v[0] - pPath->pts[wPathLen - 2].vOrigPoint.v[0]) * (float)(inOutPos.v[0] - pPath->pts[wPathLen - 2].vOrigPoint.v[0])));
    if ( (int)wPathLen > pPath->wOrigPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 393, ASSERT_TYPE_ASSERT, "(i < pPath->wOrigPathLen)", (const char *)&queryFormat, "i < pPath->wOrigPathLen") )
      __debugbreak();
    v = pPath->pts[v14].vOrigPoint.v;
    do
    {
      v23 = v;
      v25 = *(unsigned int *)v;
      v24 = *v - v18;
      v26 = v[1] - v19;
      *(float *)&v25 = fsqrt((float)(v24 * v24) + (float)(v26 * v26));
      _XMM3 = v25;
      __asm
      {
        vcmpless xmm0, xmm3, xmm14
        vblendvps xmm1, xmm15, xmm8, xmm0
      }
      ++v14;
      v += 7;
      _XMM15 = _XMM1;
      __asm { vminss  xmm14, xmm3, xmm14 }
      if ( v14 >= pPath->wOrigPathLen )
        break;
      if ( v23[3] == 0.0 && v23[4] == 0.0 && (pPath->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 410, ASSERT_TYPE_ASSERT, "(pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & (1 << 16))", (const char *)&queryFormat, "pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & PATH_FLAG_3D") )
        __debugbreak();
      LODWORD(v31) = COERCE_UNSIGNED_INT((float)(v26 * v23[3]) - (float)(v24 * v23[4])) & _xmm;
      if ( v23[5] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 412, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0") )
        __debugbreak();
      v32 = v20;
      *(float *)&v32 = *(float *)&v20 + (float)(v31 * v23[5]);
      v20 = v32;
    }
    while ( *(float *)&v32 <= 32768.0 );
    v33 = &pPath->pts[pPath->wPathLen - 2];
    if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 348, ASSERT_TYPE_ASSERT, "(pt)", (const char *)&queryFormat, "pt") )
      __debugbreak();
    LODWORD(v34) = COERCE_UNSIGNED_INT((float)((float)(v33->vOrigPoint.v[1] - v19) * v33->fDir2D.v[0]) - (float)((float)(v33->vOrigPoint.v[0] - v18) * v33->fDir2D.v[1])) & _xmm;
    if ( v33->fOrigLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 419, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0") )
      __debugbreak();
    if ( pPath->fCurrLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 420, ASSERT_TYPE_ASSERT, "(pPath->fCurrLength > 0)", (const char *)&queryFormat, "pPath->fCurrLength > 0") )
      __debugbreak();
    fOrigLength = v33->fOrigLength;
    fCurrLength = pPath->fCurrLength;
    if ( fOrigLength < fCurrLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 421, ASSERT_TYPE_ASSERT, "( pt->fOrigLength ) >= ( pPath->fCurrLength )", "%s >= %s\n\t%g, %g", "pt->fOrigLength", "pPath->fCurrLength", fOrigLength, fCurrLength) )
      __debugbreak();
    v37 = (float)((float)(v33->fOrigLength - pPath->fCurrLength) * v34) + *(float *)&_XMM15;
    if ( v37 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 424, ASSERT_TYPE_ASSERT, "( ( closestAmount >= 0 ) )", "( closestAmount ) = %g", v37) )
      __debugbreak();
    pPath->fLookaheadAmount = v37 + pPath->fLookaheadAmount;
  }
}

/*
==============
Path_AllowedStancesForPath
==============
*/
ai_stance_e Path_AllowedStancesForPath(path_t *pPath)
{
  char wPathLen; 
  float fCurrLength; 
  float v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  unsigned __int16 *p_iNodeNum; 
  __int64 v10; 
  const pathnode_t *v11; 

  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3347, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( pPath->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3348, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3349, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode > pPath->lookaheadNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3350, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode <= pPath->lookaheadNextNode)", (const char *)&queryFormat, "pPath->wNegotiationStartNode <= pPath->lookaheadNextNode") )
    __debugbreak();
  if ( pPath->lookaheadNextNode >= pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3351, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
    __debugbreak();
  wPathLen = pPath->wPathLen;
  if ( wPathLen > 1 )
  {
    fCurrLength = pPath->fCurrLength;
    v4 = *((float *)&pPath->pts[wPathLen - 1] - 2);
    if ( fCurrLength > v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3352, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, v4) )
      __debugbreak();
  }
  v5 = pPath->wPathLen;
  v6 = v5 - 1;
  if ( v5 - 1 < pPath->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3355, ASSERT_TYPE_ASSERT, "(i >= pPath->wNegotiationStartNode)", (const char *)&queryFormat, "i >= pPath->wNegotiationStartNode") )
    __debugbreak();
  v7 = v6;
  if ( pPath->pts[v7].vOrigPoint.v[0] != pPath->vCurrPoint.v[0] || pPath->pts[v7].vOrigPoint.v[1] != pPath->vCurrPoint.v[1] || pPath->pts[v7].vOrigPoint.v[2] != pPath->vCurrPoint.v[2] )
    v6 = v5 - 2;
  if ( v6 >= pPath->wNegotiationStartNode )
  {
    p_iNodeNum = &pPath->pts[v6].iNodeNum;
    do
    {
      if ( ((1 << LOBYTE(Path_ConvertIndexToNode(*p_iNodeNum)->constant.type)) & 0x866C9FFC) == 0 )
        break;
      --v6;
      p_iNodeNum -= 14;
    }
    while ( v6 >= pPath->wNegotiationStartNode );
  }
  if ( v6 < pPath->wNegotiationStartNode )
  {
    v6 = pPath->wPathLen - 1;
    if ( ((1 << LOBYTE(Path_ConvertIndexToNode(pPath->pts[v6].iNodeNum)->constant.type)) & 0x866C9FFC) != 0 )
      return 7;
  }
  v10 = v6;
  if ( ((1 << LOBYTE(Path_ConvertIndexToNode(pPath->pts[v10].iNodeNum)->constant.type)) & 0x866C9FFC) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3371, ASSERT_TYPE_ASSERT, "(Path_IsPathStanceNode( Path_ConvertIndexToNode( pPath->pts[i].iNodeNum ) ))", (const char *)&queryFormat, "Path_IsPathStanceNode( Path_ConvertIndexToNode( pPath->pts[i].iNodeNum ) )") )
    __debugbreak();
  v11 = Path_ConvertIndexToNode(pPath->pts[v10].iNodeNum);
  return Path_AllowedStancesForNode(v11);
}

/*
==============
Path_BackTrack
==============
*/

void __fastcall Path_BackTrack(path_t *pPath, int newPathLength, double lookaheadIncreaseAmount)
{
  char v4; 
  __int128 v5; 
  float fCurrLength; 
  float v7; 
  int v8; 
  __int128 v9; 
  __int128 v11; 

  v4 = newPathLength;
  v5 = *(_OWORD *)&lookaheadIncreaseAmount;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2781, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  pPath->wPathLen = v4;
  if ( v4 > 1 )
  {
    fCurrLength = pPath->fCurrLength;
    v7 = *((float *)&pPath->pts[v4 - 1] - 2);
    if ( fCurrLength > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2784, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, v7) )
      __debugbreak();
  }
  v8 = pPath->flags | 0x8000;
  pPath->flags = v8;
  if ( *(float *)&lookaheadIncreaseAmount > 0.0 )
  {
    if ( (v8 & 2) == 0 )
    {
      v9 = *(_OWORD *)&lookaheadIncreaseAmount;
      *(float *)&v9 = *(float *)&lookaheadIncreaseAmount * 0.75;
      v5 = v9;
    }
    v11 = v5;
    *(float *)&v11 = *(float *)&v5 + pPath->fLookaheadAmount;
    _XMM0 = v11;
    __asm { vminss  xmm1, xmm0, cs:__real@47800000 }
    pPath->fLookaheadAmount = *(float *)&_XMM1;
  }
}

/*
==============
Path_BacktrackCompletedPath
==============
*/
void Path_BacktrackCompletedPath(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vLocalWishDelta)
{
  int v4; 
  __int128 v5; 
  __int128 v6; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  pathpoint_t *v15; 
  float v16; 
  float v17; 
  float fOrigLength; 
  float fCurrLength; 
  float v20; 
  __int128 v21; 
  __int128 v22; 
  pathpoint_t *v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v29; 
  float v30; 
  float v31; 
  __int128 v32; 
  float v33; 
  float v34; 
  __int64 v35; 
  float v36; 
  float v37; 
  float v38; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  bool v45; 
  float v46; 
  float v47; 
  float v48; 
  double v49; 
  float v50; 
  float v51; 
  int flags; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v57; 
  __int64 v60; 
  float v61; 
  vec3_t inOutPos; 

  v4 = pPath->wPathLen - 1;
  if ( vLocalWishDelta )
  {
    v5 = LODWORD(vLocalWishDelta->v[1]);
    v6 = v5;
    *(float *)&v6 = fsqrt((float)((float)(*(float *)&v5 * *(float *)&v5) + (float)(vLocalWishDelta->v[0] * vLocalWishDelta->v[0])) + (float)(vLocalWishDelta->v[2] * vLocalWishDelta->v[2]));
    _XMM4 = v6;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v61 = *(float *)&v5 * (float)(1.0 / *(float *)&_XMM0);
    v10 = vLocalWishDelta->v[0] * (float)(1.0 / *(float *)&_XMM0);
  }
  else
  {
    v10 = pPath->lookaheadDir.v[0];
    v61 = pPath->lookaheadDir.v[1];
  }
  v11 = vStartPos->v[1];
  inOutPos.v[0] = vStartPos->v[0];
  inOutPos.v[2] = vStartPos->v[2];
  inOutPos.v[1] = v11;
  Path_LocalizePos(pPath, &inOutPos);
  if ( v4 <= pPath->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2836, ASSERT_TYPE_ASSERT, "(i > pPath->wNegotiationStartNode)", (const char *)&queryFormat, "i > pPath->wNegotiationStartNode") )
    __debugbreak();
  v12 = pPath->fLookaheadAmount * 0.17647055;
  v13 = inOutPos.v[0];
  v14 = inOutPos.v[1];
  v15 = &pPath->pts[v4 - 1];
  v16 = v15->vOrigPoint.v[0] - inOutPos.v[0];
  v17 = v15->vOrigPoint.v[1] - inOutPos.v[1];
  if ( v15->fDir2D.v[0] == 0.0 && v15->fDir2D.v[1] == 0.0 && (pPath->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2842, ASSERT_TYPE_ASSERT, "(Vec2NotZero( nextPt->fDir2D ) || pPath->flags & (1 << 16))", (const char *)&queryFormat, "Vec2NotZero( nextPt->fDir2D ) || pPath->flags & PATH_FLAG_3D") )
    __debugbreak();
  fOrigLength = v15->fOrigLength;
  fCurrLength = pPath->fCurrLength;
  LODWORD(v20) = COERCE_UNSIGNED_INT((float)(v17 * v15->fDir2D.v[0]) - (float)(v16 * v15->fDir2D.v[1])) & _xmm;
  v21 = LODWORD(fCurrLength);
  *(float *)&v21 = fCurrLength * v20;
  v22 = v21 ^ _xmm;
  if ( fCurrLength > fOrigLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2847, ASSERT_TYPE_ASSERT, "( pPath->fCurrLength ) <= ( nextPt->fOrigLength )", "%s <= %s\n\t%g, %g", "pPath->fCurrLength", "nextPt->fOrigLength", fCurrLength, fOrigLength) )
    __debugbreak();
  while ( 1 )
  {
    if ( v4 >= pPath->wOrigPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2851, ASSERT_TYPE_ASSERT, "(i < pPath->wOrigPathLen)", (const char *)&queryFormat, "i < pPath->wOrigPathLen") )
      __debugbreak();
    _XMM6 = LODWORD(FLOAT_65536_0);
    v24 = &pPath->pts[v4];
    v25 = v24->vOrigPoint.v[0] - v13;
    v27 = LODWORD(v24->vOrigPoint.v[1]);
    *(float *)&v27 = v24->vOrigPoint.v[1] - v14;
    v26 = *(float *)&v27;
    if ( (float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(v25 * v25)) > 65536.0 || (pPath->flags & 0x10000) == 0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v24->vOrigPoint.v[2] - inOutPos.v[2]) & _xmm) > 72.0 )
    {
      pPath->flags |= 0x20u;
      goto LABEL_95;
    }
    *(float *)&v27 = *(float *)&v27 * v61;
    _XMM1 = v27;
    v29 = (float)(v26 * v61) + (float)(v25 * v10);
    if ( (float)(*(float *)&v27 + (float)(v25 * v10)) <= 0.0 )
      break;
    if ( v15->fOrigLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2866, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0") )
      __debugbreak();
    v30 = v15->fOrigLength;
    v31 = v30 * v20;
    v32 = v22;
    *(float *)&v32 = *(float *)&v22 + (float)(v30 * v20);
    v22 = v32;
    if ( *(float *)&v32 >= v12 )
    {
      *(float *)&v32 = *(float *)&v32 - v31;
      v35 = v32;
      if ( (float)(*(float *)&v22 - v31) >= v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2872, ASSERT_TYPE_ASSERT, "(amount - amountInc < largestAmount)", (const char *)&queryFormat, "amount - amountInc < largestAmount") )
        __debugbreak();
      if ( v31 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2873, ASSERT_TYPE_ASSERT, "(amountInc > 0)", (const char *)&queryFormat, "amountInc > 0") )
        __debugbreak();
      v36 = FLOAT_1_0;
      v38 = (float)(*(float *)&v22 - v12) / v31;
      v37 = v38;
      if ( v38 < 0.0 || v38 > 1.0 )
      {
        __asm { vxorpd  xmm1, xmm1, xmm1 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2875, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( fraction ) && ( fraction ) <= ( 1.f )", "fraction not in [0.f, 1.f]\n\t%g not in [%g, %g]", v38, *(double *)&_XMM1, DOUBLE_1_0) )
          __debugbreak();
      }
      *(_QWORD *)&v22 = v35;
$handleFraction:
      if ( v15->fOrigLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2916, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0") )
        __debugbreak();
      v44 = v37 * v15->fOrigLength;
      v43 = v44;
      v45 = v44 < v15->fOrigLength;
      if ( v44 > v15->fOrigLength )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2919, ASSERT_TYPE_ASSERT, "(dist <= nextPt->fOrigLength)", (const char *)&queryFormat, "dist <= nextPt->fOrigLength") )
          __debugbreak();
        v45 = v44 < v15->fOrigLength;
      }
      if ( v45 )
      {
        if ( v44 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2933, ASSERT_TYPE_ASSERT, "(dist >= 0)", (const char *)&queryFormat, "dist >= 0") )
          __debugbreak();
        if ( v15->fOrigLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2934, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0") )
          __debugbreak();
        v46 = v15->fOrigLength;
        pPath->fCurrLength = v46 - v44;
        if ( (float)(v46 - v44) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2937, ASSERT_TYPE_ASSERT, "(pPath->fCurrLength > 0)", (const char *)&queryFormat, "pPath->fCurrLength > 0") )
          __debugbreak();
        v47 = v15->fOrigLength;
        v48 = pPath->fCurrLength;
        if ( v47 < v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2938, ASSERT_TYPE_ASSERT, "( nextPt->fOrigLength ) >= ( pPath->fCurrLength )", "%s >= %s\n\t%g, %g", "nextPt->fOrigLength", "pPath->fCurrLength", v47, v48) )
          __debugbreak();
        HIDWORD(v49) = DWORD1(v22);
        *(float *)&v49 = *(float *)&v22 + (float)(v20 * pPath->fCurrLength);
        if ( v15->fDir2D.v[0] == 0.0 && v15->fDir2D.v[1] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2941, ASSERT_TYPE_ASSERT, "(Vec2NotZero( nextPt->fDir2D ))", (const char *)&queryFormat, "Vec2NotZero( nextPt->fDir2D )") )
          __debugbreak();
        pPath->vCurrPoint.v[0] = (float)(v43 * v15->fDir2D.v[0]) + v24->vOrigPoint.v[0];
        pPath->vCurrPoint.v[1] = (float)(v43 * v15->fDir2D.v[1]) + v24->vOrigPoint.v[1];
        pPath->vCurrPoint.v[2] = (float)((float)(v36 - v37) * v24->vOrigPoint.v[2]) + (float)(v37 * v15->vOrigPoint.v[2]);
        Path_BackTrack(pPath, v4 + 1, v49);
      }
      else if ( v4 - 1 > pPath->wNegotiationStartNode )
      {
        pPath->vCurrPoint.v[0] = v15->vOrigPoint.v[0];
        pPath->vCurrPoint.v[1] = v15->vOrigPoint.v[1];
        pPath->vCurrPoint.v[2] = v15->vOrigPoint.v[2];
        pPath->fCurrLength = *((float *)&pPath->pts[v4 - 1] - 2);
        Path_BackTrack(pPath, v4, *(double *)&v22);
      }
      return;
    }
    if ( v30 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2881, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0") )
      __debugbreak();
    if ( ++v4 > pPath->wOrigPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2884, ASSERT_TYPE_ASSERT, "(i <= pPath->wOrigPathLen)", (const char *)&queryFormat, "i <= pPath->wOrigPathLen") )
      __debugbreak();
    if ( v4 >= pPath->wOrigPathLen )
    {
      pPath->fCurrLength = v15->fOrigLength;
      pPath->vCurrPoint.v[0] = v24->vOrigPoint.v[0];
      pPath->vCurrPoint.v[1] = v24->vOrigPoint.v[1];
      pPath->vCurrPoint.v[2] = v24->vOrigPoint.v[2];
      Path_BackTrack(pPath, pPath->wOrigPathLen, *(double *)&v32);
      return;
    }
    v15 = v24;
    if ( v24->fDir2D.v[0] == 0.0 && v24->fDir2D.v[1] == 0.0 && (pPath->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2895, ASSERT_TYPE_ASSERT, "(Vec2NotZero( nextPt->fDir2D ) || pPath->flags & (1 << 16))", (const char *)&queryFormat, "Vec2NotZero( nextPt->fDir2D ) || pPath->flags & PATH_FLAG_3D") )
      __debugbreak();
    v33 = v26 * v24->fDir2D.v[0];
    v34 = v25 * v24->fDir2D.v[1];
    v13 = inOutPos.v[0];
    v14 = inOutPos.v[1];
    LODWORD(v20) = COERCE_UNSIGNED_INT(v33 - v34) & _xmm;
  }
  v41 = (float)((float)(v15->vOrigPoint.v[1] - inOutPos.v[1]) * v61) + (float)((float)(v15->vOrigPoint.v[0] - inOutPos.v[0]) * v10);
  v40 = v41;
  if ( v41 > 0.0 )
  {
    if ( v29 > 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2905, ASSERT_TYPE_ASSERT, "(d1 <= 0)", (const char *)&queryFormat, "d1 <= 0") )
      __debugbreak();
    if ( (float)(v29 - v41) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2906, ASSERT_TYPE_ASSERT, "(d1 - d2)", (const char *)&queryFormat, "d1 - d2") )
      __debugbreak();
    v42 = v29 / (float)(v29 - v41);
    v37 = v42;
    if ( v42 < 0.0 )
    {
      LODWORD(v60) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2910, ASSERT_TYPE_ASSERT, "(fraction >= 0)", "%s\n\ti: %d, d1: %f, d2: %f, fraction: %f", "fraction >= 0", v60, v29, v40, v42) )
        __debugbreak();
    }
    v36 = FLOAT_1_0;
    if ( v42 > 1.0 )
    {
      LODWORD(v60) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2913, ASSERT_TYPE_ASSERT, "(fraction <= 1.f)", "%s\n\ti: %d, d1: %f, d2: %f, fraction: %f", "fraction <= 1.f", v60, v29, v40, v42) )
        __debugbreak();
    }
    goto $handleFraction;
  }
  if ( v29 > 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2950, ASSERT_TYPE_ASSERT, "(d1 <= 0)", (const char *)&queryFormat, "d1 <= 0") )
    __debugbreak();
LABEL_95:
  pPath->vCurrPoint.v[0] = v15->vOrigPoint.v[0];
  pPath->vCurrPoint.v[1] = v15->vOrigPoint.v[1];
  pPath->vCurrPoint.v[2] = v15->vOrigPoint.v[2];
  if ( v15->fOrigLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2956, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0") )
    __debugbreak();
  if ( v4 <= pPath->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2958, ASSERT_TYPE_ASSERT, "(i > pPath->wNegotiationStartNode)", (const char *)&queryFormat, "i > pPath->wNegotiationStartNode") )
    __debugbreak();
  if ( v4 <= pPath->wNegotiationStartNode + 1 )
    v50 = 0.0;
  else
    v50 = *((float *)&pPath->pts[v4 - 1] - 2);
  pPath->wPathLen = v4;
  pPath->fCurrLength = v50;
  if ( (char)v4 > 1 )
  {
    v51 = *((float *)&pPath->pts[(char)v4 - 1] - 2);
    if ( v50 > v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2962, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v50, v51) )
      __debugbreak();
  }
  flags = pPath->flags;
  if ( (flags & 0x4000) == 0 )
  {
    v54 = v22;
    *(float *)&v54 = *(float *)&v22 + (float)(v20 * v15->fOrigLength);
    v53 = v54;
    if ( *(float *)&v54 > 0.0 )
    {
      if ( (flags & 2) == 0 )
      {
        *(float *)&v54 = *(float *)&v54 * 0.75;
        v53 = v54;
      }
      if ( (flags & 0x20) != 0 )
      {
        v55 = v53;
        *(float *)&v55 = *(float *)&v53 * 0.75;
        v53 = v55;
      }
      v57 = v53;
      *(float *)&v57 = *(float *)&v53 + pPath->fLookaheadAmount;
      _XMM1 = v57;
      __asm
      {
        vcmpltss xmm0, xmm6, xmm1
        vblendvps xmm0, xmm1, xmm6, xmm0
      }
      pPath->fLookaheadAmount = *(float *)&_XMM0;
    }
  }
}

/*
==============
Path_Begin
==============
*/
void Path_Begin(path_t *pPath)
{
  memset_0(pPath, 0, sizeof(path_t));
  pPath->fLookaheadAmount = 32768.0;
  pPath->wDodgeEntity = 2047;
}

/*
==============
Path_CalcLookahead
==============
*/
void Path_CalcLookahead(path_t *pPath, const vec3_t *vStartPos, int bReduceLookaheadAmount, const Bounds *bounds)
{
  char wPathLen; 
  float fCurrLength; 
  float v10; 
  float fLookaheadAmount; 
  __int128 v12; 
  float v13; 
  int flags; 
  int v15; 
  float v16; 
  int lookaheadNextNode; 
  float v18; 
  int v19; 
  float *v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  int v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v28; 
  float v29; 
  float v33; 
  __int128 v34; 
  vec3_t *p_vCurrPoint; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  float v43; 
  float v44; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  __int64 maxLookaheadAmountIfReduce; 
  __int64 v53; 
  int v54; 
  vec3_t inOutPos; 

  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3081, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( pPath->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3082, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3083, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode >= pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3084, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->wNegotiationStartNode < pPath->wPathLen") )
    __debugbreak();
  wPathLen = pPath->wPathLen;
  if ( wPathLen > 1 )
  {
    fCurrLength = pPath->fCurrLength;
    v10 = *((float *)&pPath->pts[wPathLen - 1] - 2);
    if ( fCurrLength > v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3085, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, v10) )
      __debugbreak();
  }
  fLookaheadAmount = pPath->fLookaheadAmount;
  v12 = 0i64;
  if ( (LODWORD(fLookaheadAmount) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3090, ASSERT_TYPE_SANITY, "( !IS_NAN( lookaheadAmount ) )", (const char *)&queryFormat, "!IS_NAN( lookaheadAmount )") )
    __debugbreak();
  if ( fLookaheadAmount <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3091, ASSERT_TYPE_ASSERT, "( ( lookaheadAmount > 0 ) )", "( lookaheadAmount ) = %g", fLookaheadAmount) )
    __debugbreak();
  if ( pPath->fCurrLength <= 0.0 || pPath->wPathLen < 2 )
  {
    Path_CalcLookahead_Completed(pPath, vStartPos, bReduceLookaheadAmount, 0.0, bounds);
  }
  else
  {
    v13 = vStartPos->v[1];
    flags = pPath->flags;
    v15 = 1;
    inOutPos.v[0] = vStartPos->v[0];
    v16 = vStartPos->v[2];
    inOutPos.v[1] = v13;
    inOutPos.v[2] = v16;
    v54 = flags;
    Path_LocalizePos(pPath, &inOutPos);
    lookaheadNextNode = pPath->wPathLen - 2;
    if ( lookaheadNextNode < pPath->wNegotiationStartNode )
    {
LABEL_49:
      Path_CalcLookahead_Completed(pPath, vStartPos, bReduceLookaheadAmount, *(float *)&v12, bounds);
    }
    else
    {
      v18 = inOutPos.v[1];
      v19 = lookaheadNextNode + 3;
      v20 = &pPath->pts[lookaheadNextNode - 1].vOrigPoint.v[1];
      while ( 1 )
      {
        if ( (((_DWORD)v20[6] & 0x7F800000) == 2139095040 || ((_DWORD)v20[7] & 0x7F800000) == 2139095040 || ((_DWORD)v20[8] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3113, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pt->vOrigPoint )[0] ) && !IS_NAN( ( pt->vOrigPoint )[1] ) && !IS_NAN( ( pt->vOrigPoint )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pt->vOrigPoint )[0] ) && !IS_NAN( ( pt->vOrigPoint )[1] ) && !IS_NAN( ( pt->vOrigPoint )[2] )") )
          __debugbreak();
        LODWORD(v21) = COERCE_UNSIGNED_INT((float)((float)(v20[7] - v18) * v20[9]) - (float)((float)(v20[6] - inOutPos.v[0]) * v20[10])) & _xmm;
        if ( v15 )
          v22 = pPath->fCurrLength;
        else
          v22 = v20[11];
        if ( v22 <= 0.0 )
        {
          LODWORD(v53) = lookaheadNextNode;
          LODWORD(maxLookaheadAmountIfReduce) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3117, ASSERT_TYPE_ASSERT, "(fLength > 0)", "%s\n\tbAtStart:%d fLength:%f fOrigLength:%f fCurrLength:%f index:%d", "fLength > 0", maxLookaheadAmountIfReduce, v22, v20[11], pPath->fCurrLength, v53) )
            __debugbreak();
        }
        v23 = v12;
        *(float *)&v23 = *(float *)&v12 + (float)(v22 * v21);
        v12 = v23;
        if ( pPath->minLookAheadNodes == 2 )
        {
          v24 = pPath->wPathLen;
          if ( v19 == v24 )
          {
            if ( lookaheadNextNode >= v24 - 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3046, ASSERT_TYPE_ASSERT, "(currentNode < pPath->wPathLen - 2)", (const char *)&queryFormat, "currentNode < pPath->wPathLen - 2") )
              __debugbreak();
            v25 = *(v20 - 1) - v20[13];
            v27 = *(unsigned int *)v20;
            v26 = *v20 - v20[14];
            v28 = v20[3];
            v29 = v20[2];
            *(float *)&v27 = fsqrt((float)(v26 * v26) + (float)(v25 * v25));
            _XMM3 = v27;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm13, xmm0
            }
            if ( (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v25) * v29) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v26) * v28)) >= 0.866 && (float)((float)(v29 * v20[9]) + (float)(v28 * v20[10])) >= 0.17299999 )
              ++pPath->minLookAheadNodes;
          }
        }
        if ( lookaheadNextNode + pPath->minLookAheadNodes <= pPath->wPathLen - 2 && *(float *)&v12 >= fLookaheadAmount )
          break;
        --lookaheadNextNode;
        --v19;
        v20 -= 7;
        v15 = 0;
        if ( lookaheadNextNode < pPath->wNegotiationStartNode )
          goto LABEL_49;
      }
      v33 = v20[11];
      v34 = v12;
      *(float *)&v34 = (float)(*(float *)&v12 - fLookaheadAmount) / v21;
      _XMM7 = v34;
      if ( v22 > v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3134, ASSERT_TYPE_ASSERT, "( fLength ) <= ( pt->fOrigLength )", "%s <= %s\n\t%g, %g", "fLength", "pt->fOrigLength", v22, v33) )
        __debugbreak();
      p_vCurrPoint = (vec3_t *)(v20 + 13);
      if ( v15 )
        p_vCurrPoint = &pPath->vCurrPoint;
      __asm { vminss  xmm11, xmm7, xmm6 }
      if ( (v54 & 0x10000) != 0 )
      {
        v38 = v20[6];
        v39 = *((unsigned int *)v20 + 7);
        v40 = v38 - p_vCurrPoint->v[0];
        v42 = v39;
        v41 = *(float *)&v39 - p_vCurrPoint->v[1];
        v43 = v20[8];
        v44 = v43 - p_vCurrPoint->v[2];
        *(float *)&v42 = fsqrt((float)((float)(v41 * v41) + (float)(v40 * v40)) + (float)(v44 * v44));
        _XMM3 = v42;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm13, xmm0
        }
        inOutPos.v[0] = (float)((float)(v40 * (float)(1.0 / *(float *)&_XMM0)) * COERCE_FLOAT(_XMM11 ^ _xmm)) + v38;
        inOutPos.v[1] = (float)((float)(v41 * (float)(1.0 / *(float *)&_XMM0)) * COERCE_FLOAT(_XMM11 ^ _xmm)) + *(float *)&v39;
        v48 = (float)((float)(v44 * (float)(1.0 / *(float *)&_XMM0)) * COERCE_FLOAT(_XMM11 ^ _xmm)) + v43;
      }
      else
      {
        v49 = COERCE_FLOAT(_XMM11 ^ _xmm) * v20[10];
        v50 = v20[8];
        inOutPos.v[0] = (float)(COERCE_FLOAT(_XMM11 ^ _xmm) * v20[9]) + v20[6];
        v51 = v50 - p_vCurrPoint->v[2];
        inOutPos.v[1] = v49 + v20[7];
        v48 = v50 - (float)((float)(v51 * *(float *)&_XMM11) / v22);
      }
      inOutPos.v[2] = v48;
      pPath->flags &= 0xFFFFFFBE;
      Path_UpdateLookaheadAmount(pPath, vStartPos, &inOutPos, bReduceLookaheadAmount, *(float *)&_XMM11, lookaheadNextNode, fLookaheadAmount, bounds);
    }
  }
}

/*
==============
Path_CalcLookahead_Completed
==============
*/

void __fastcall Path_CalcLookahead_Completed(path_t *pPath, const vec3_t *vStartPos, int bReduceLookaheadAmount, double totalArea, const Bounds *bounds)
{
  int wNegotiationStartNode; 
  int wPathLen; 
  int lookaheadNextNode; 
  __int64 v12; 

  _XMM6 = *(_OWORD *)&totalArea;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2998, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  wNegotiationStartNode = pPath->wNegotiationStartNode;
  wPathLen = pPath->wPathLen;
  lookaheadNextNode = wNegotiationStartNode;
  pPath->flags |= 0x41u;
  if ( wPathLen - 1 == wNegotiationStartNode )
    v12 = 988i64;
  else
    v12 = 28i64 * (unsigned __int8)wNegotiationStartNode;
  Path_UpdateLookaheadAmount(pPath, vStartPos, (const vec3_t *)((char *)pPath + v12), bReduceLookaheadAmount, 0.0, lookaheadNextNode, *(float *)&totalArea, bounds);
  __asm
  {
    vmaxss  xmm0, xmm6, cs:__real@47000000
    vminss  xmm1, xmm0, dword ptr [rbx+3BCh]
  }
  pPath->fLookaheadAmount = *(float *)&_XMM1;
}

/*
==============
Path_CheckDrop
==============
*/
bool Path_CheckDrop(vec3_t *pathEndPos, int entityIgnore, int mask, bool *hitStairs)
{
  float v4; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  v4 = pathEndPos->v[1];
  start.v[0] = pathEndPos->v[0];
  end.v[0] = start.v[0];
  start.v[1] = v4;
  end.v[1] = v4;
  start.v[2] = pathEndPos->v[2] + 18.0;
  end.v[2] = start.v[2] - 72.0;
  G_Main_TraceCapsule(&results, &start, &end, &actorBox, entityIgnore, mask);
  if ( results.fraction == 1.0 )
    return 0;
  if ( (results.surfaceFlags & 0x200) == 0 || results.normal.v[2] < 0.0 || results.normal.v[2] >= 0.99900001 )
    return results.normal.v[2] > 0.69999999;
  if ( hitStairs )
    *hitStairs = 1;
  return 1;
}

/*
==============
Path_CheckFromAndToNodes
==============
*/
_BOOL8 Path_CheckFromAndToNodes(PathFindInput *pathFindInput, PathBlockPlanes *blockPlanes)
{
  int iTraceMask; 
  int v4; 
  pathnode_t *v5; 
  pathnode_t *v6; 

  if ( !pathFindInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1400, ASSERT_TYPE_ASSERT, "(pathFindInput)", (const char *)&queryFormat, "pathFindInput") )
    __debugbreak();
  iTraceMask = 33685521;
  if ( !pathFindInput->pNodeTo )
  {
    v4 = pathFindInput->pPath ? pathFindInput->pPath->iTraceMask : 33685521;
    v5 = Path_NearestNode(pathFindInput->vGoalPos, v4, NULL);
    pathFindInput->pNodeTo = v5;
    if ( !v5 )
      return 0i64;
  }
  if ( pathFindInput->pNodeFrom )
    return 1i64;
  if ( pathFindInput->pPath )
    iTraceMask = pathFindInput->pPath->iTraceMask;
  v6 = Path_NearestNode(pathFindInput->vStartPos, iTraceMask, NULL);
  pathFindInput->pNodeFrom = v6;
  return v6 != NULL;
}

/*
==============
Path_Clear
==============
*/
void Path_Clear(path_t *pPath)
{
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1997, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode > 0 )
    pPath->wNegotiationStartNode = 0;
  if ( pPath->wPathLen > 0 )
    pPath->iPathClearedTime = level.time;
  *(_QWORD *)pPath->lookaheadPos.v = 0i64;
  pPath->lookaheadPos.v[2] = 0.0;
  *(_WORD *)&pPath->wPathLen = 0;
  pPath->pathChangeNotifyNode = -1;
  *(_WORD *)&pPath->pathEndAnimNotified = 0;
  pPath->parentIndex = 0;
}

/*
==============
Path_DebugDrawSnappedPositions
==============
*/
void Path_DebugDrawSnappedPositions(AINavigator *pNav, gentity_s *ent)
{
  vec3_t end; 
  vec3_t start; 
  vec3_t point; 

  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3311, ASSERT_TYPE_ASSERT, "(pNav)", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetCurPos(pNav, &end);
  pNav->GetRequestedGoalPos(pNav, &start);
  pNav->GetGoalPos(pNav, &point);
  if ( end.v[0] != ent->r.currentOrigin.v[0] || end.v[1] != ent->r.currentOrigin.v[1] || end.v[2] != ent->r.currentOrigin.v[2] )
  {
    G_DebugLine(&ent->r.currentOrigin, &end, &colorGreen, 0);
    G_DebugStarWithText(&end, &colorGreen, &colorGreen, "Snapped Ent Pos", 0.25);
  }
  if ( point.v[0] != start.v[0] || point.v[1] != start.v[1] || point.v[2] != start.v[2] )
  {
    G_DebugLine(&start, &point, &colorMagenta, 0);
    G_DebugStarWithText(&start, &colorMagenta, &colorMagenta, "Requested Goal Pos", 0.25);
    G_DebugStarWithText(&point, &colorMagenta, &colorMagenta, "Snapped Goal Pos", 0.25);
  }
}

/*
==============
Path_Exists
==============
*/
bool Path_Exists(const path_t *pPath)
{
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2026, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  return pPath->wPathLen > 0;
}

/*
==============
Path_FindPath
==============
*/
int Path_FindPath(PathFindInput *pathFindInput)
{
  int result; 
  const vec3_t *vStartPos; 
  float v4; 
  float v5; 
  path_t *pPath; 
  CustomSearchInfo_FindPath custom; 

  result = Path_CheckFromAndToNodes(pathFindInput, NULL);
  if ( result )
  {
    CustomSearchInfo_FindPath::CustomSearchInfo_FindPath(&custom, pathFindInput);
    if ( (pathFindInput->pNodeFrom->constant.spawnflags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1745, ASSERT_TYPE_ASSERT, "((pathFindInput->pNodeFrom->constant.spawnflags & PNF_DONTLINK) == 0)", (const char *)&queryFormat, "(pathFindInput->pNodeFrom->constant.spawnflags & PNF_DONTLINK) == 0") )
      __debugbreak();
    if ( (pathFindInput->pNodeTo->constant.spawnflags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1746, ASSERT_TYPE_ASSERT, "((pathFindInput->pNodeTo->constant.spawnflags & PNF_DONTLINK) == 0)", (const char *)&queryFormat, "(pathFindInput->pNodeTo->constant.spawnflags & PNF_DONTLINK) == 0") )
      __debugbreak();
    custom.m_pNodeTo = pathFindInput->pNodeTo;
    vStartPos = pathFindInput->vStartPos;
    v4 = vStartPos->v[1];
    custom.startPos.v[0] = vStartPos->v[0];
    v5 = vStartPos->v[2];
    pPath = pathFindInput->pPath;
    custom.startPos.v[1] = v4;
    custom.startPos.v[2] = v5;
    return Path_AStarAlgorithm_CustomSearchInfo_FindPath_(pathFindInput, pPath->eTeam, 1, &custom);
  }
  return result;
}

/*
==============
Path_GeneratePath
==============
*/
__int64 Path_GeneratePath(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vGoalPos, pathnode_t *pNodeFrom, pathnode_t *pNodeTo, int bIncludeGoalPos, int bAllowNegotiationLinks, int useChokePoints)
{
  unsigned int index; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  pathnode_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  int v24; 
  float v25; 
  float v26; 
  unsigned __int16 v27; 
  int flags; 
  float v29; 
  float v30; 
  unsigned __int16 iNodeNum; 
  pathnode_t *v32; 
  pathnode_t *v33; 
  int v34; 
  pathnode_t *pParent; 
  unsigned __int16 type; 
  pathnode_t *v37; 
  int v38; 
  pathnode_t *v40; 
  __int64 v41; 
  float *v42; 
  int v43; 
  int v44; 
  __int64 v45; 
  path_t *v46; 
  __int64 v47; 
  float *v48; 
  float v49; 
  __int128 v50; 
  float v51; 
  __int128 v52; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  unsigned __int16 v60; 
  int parentIndex; 
  gentity_s *v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  int v72; 
  char wPathLen; 
  float fCurrLength; 
  float v75; 
  int v76; 
  __int16 v77; 
  int v78; 
  __int16 v79; 
  vec3_t v82; 
  vec3_t inOutPos; 
  tmat33_t<vec3_t> out; 
  vec3_t delta; 
  char v86; 
  tmat33_t<vec3_t> axis; 

  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 653, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( !pNodeFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 654, ASSERT_TYPE_ASSERT, "(pNodeFrom)", (const char *)&queryFormat, "pNodeFrom") )
    __debugbreak();
  if ( !pNodeTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 655, ASSERT_TYPE_ASSERT, "(pNodeTo)", (const char *)&queryFormat, "pNodeTo") )
    __debugbreak();
  if ( !vGoalPos && bIncludeGoalPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 656, ASSERT_TYPE_ASSERT, "(vGoalPos || !bIncludeGoalPos)", (const char *)&queryFormat, "vGoalPos || !bIncludeGoalPos") )
    __debugbreak();
  Path_AddTrimmedAmount(pPath, vStartPos);
  index = pNodeFrom->constant.parent.index;
  v13 = 0;
  v14 = pNodeTo->constant.vLocalOrigin.v[0];
  v15 = pNodeTo->constant.vLocalOrigin.v[1];
  v16 = pNodeTo->constant.vLocalOrigin.v[2];
  pPath->parentIndex = index;
  v17 = vStartPos->v[1];
  inOutPos.v[0] = vStartPos->v[0];
  inOutPos.v[2] = vStartPos->v[2];
  inOutPos.v[1] = v17;
  v76 = 0;
  v18 = pNodeTo;
  v77 = index;
  Path_LocalizePos(pPath, &inOutPos);
  if ( bIncludeGoalPos )
  {
    if ( !vGoalPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 680, ASSERT_TYPE_ASSERT, "(vGoalPos)", (const char *)&queryFormat, "vGoalPos") )
      __debugbreak();
    v19 = vGoalPos->v[1];
    v82.v[0] = vGoalPos->v[0];
    v82.v[2] = vGoalPos->v[2];
    v82.v[1] = v19;
    Path_LocalizePos(pPath, &v82);
    v20 = v82.v[0];
    v21 = v82.v[1];
    v22 = v82.v[2];
    v23 = 1;
    pPath->pts[0].vOrigPoint.v[0] = v82.v[0];
    pPath->pts[0].vOrigPoint.v[1] = v21;
    pPath->pts[0].vOrigPoint.v[2] = v22;
    v24 = 1 << LOBYTE(pNodeTo->constant.type);
    if ( (v24 & 0x1E300000) != 0 || (v24 & 0x400000) != 0 )
    {
      v25 = (float)((float)(v15 - v21) * (float)(v15 - v21)) + (float)((float)(v14 - v20) * (float)(v14 - v20));
      v26 = (float)(v16 - v22) * (float)(v16 - v22);
    }
    else
    {
      v25 = (float)(v15 - v21) * (float)(v15 - v21);
      v26 = (float)(v14 - v20) * (float)(v14 - v20);
    }
    LOBYTE(v13) = (float)(v25 + v26) < 0.0000030000001;
    if ( v13 )
    {
      v27 = Path_ConvertNodeToIndex(pNodeTo);
      v13 ^= 1u;
      v76 = v13;
    }
    else
    {
      v13 = 1;
      v27 = -1;
      v76 = 1;
    }
  }
  else
  {
    v23 = 0;
    pPath->pts[0].vOrigPoint.v[0] = v14;
    pPath->pts[0].vOrigPoint.v[1] = v15;
    pPath->pts[0].vOrigPoint.v[2] = v16;
    v27 = Path_ConvertNodeToIndex(pNodeTo);
  }
  pPath->pts[0].iNodeNum = v27;
  flags = pPath->flags;
  v29 = inOutPos.v[0];
  v30 = inOutPos.v[1];
  pPath->flags = 0;
  pPath->vStartPos.v[0] = v29;
  pPath->vStartPos.v[2] = inOutPos.v[2];
  pPath->vStartPos.v[1] = v30;
  v79 = flags;
  if ( !pPath->wPathLen || (flags & 0x20000) != 0 || (_WORD)index || pPath->vFinalGoal.v[0] != pPath->pts[0].vOrigPoint.v[0] || pPath->vFinalGoal.v[1] != pPath->pts[0].vOrigPoint.v[1] || pPath->vFinalGoal.v[2] != pPath->pts[0].vOrigPoint.v[2] )
  {
    pPath->iPathEndTime = 0;
    pPath->vFinalGoal.v[0] = pPath->pts[0].vOrigPoint.v[0];
    pPath->vFinalGoal.v[1] = pPath->pts[0].vOrigPoint.v[1];
    pPath->vFinalGoal.v[2] = pPath->pts[0].vOrigPoint.v[2];
    if ( v23 )
    {
      Path_WorldifyPos(pPath, &pPath->vFinalGoal);
    }
    else
    {
      iNodeNum = pPath->pts[0].iNodeNum;
      if ( iNodeNum != 0xFFFF )
      {
        v32 = Path_ConvertIndexToNode(iNodeNum);
        pathnode_t::WorldifyPosFromParent(v32, &pPath->vFinalGoal);
      }
    }
  }
  if ( pPath->wNegotiationStartNode > 0 )
    pPath->wNegotiationStartNode = 0;
  if ( pPath->wPathLen > 0 )
    pPath->iPathClearedTime = level.time;
  v33 = pNodeFrom;
  v34 = 0;
  *(_QWORD *)pPath->lookaheadPos.v = 0i64;
  pPath->lookaheadPos.v[2] = 0.0;
  pPath->parentIndex = 0;
  *(_WORD *)&pPath->wPathLen = 0;
  pPath->pathChangeNotifyNode = -1;
  *(_WORD *)&pPath->pathEndAnimNotified = 0;
  pPath->wDodgeCount = 0;
  pPath->parentIndex = pNodeFrom->constant.parent.index;
  if ( pNodeTo )
  {
    pParent = pNodeTo->transient.pParent;
    v76 = ++v13;
    if ( pNodeTo != pNodeFrom )
    {
      do
      {
        if ( ((1 << pParent->constant.type) & 0x68010000) != 0 )
        {
          type = v18->constant.type;
          if ( ((1 << type) & 0x70020000) != 0 && (pParent->constant.target == v18->constant.targetname || (unsigned __int16)(pParent->constant.type - 29) <= 1u && (unsigned __int16)(type - 29) <= 1u) )
          {
            if ( !bAllowNegotiationLinks )
              return 0i64;
            v34 = v13;
          }
        }
        v37 = pParent->transient.pParent;
        ++v13;
        pParent->transient.pParent = v18;
        v18 = pParent;
        v76 = v13;
        pParent = v37;
      }
      while ( v18 != pNodeFrom );
    }
  }
  if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 772, ASSERT_TYPE_ASSERT, "(iTotal > 0)", (const char *)&queryFormat, "iTotal > 0") )
    __debugbreak();
  v38 = v13 - 32;
  v78 = v13 - 32;
  if ( v13 - 32 <= 0 )
  {
    if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 784, ASSERT_TYPE_ASSERT, "(iTotal > 0)", (const char *)&queryFormat, "iTotal > 0") )
      __debugbreak();
  }
  else
  {
    pPath->flags |= 4u;
    v13 = 32;
    v34 -= v38;
    v76 = 32;
    if ( v34 < 0 )
      LOBYTE(v34) = 0;
  }
  v40 = pNodeFrom;
  v41 = v13 - 1i64;
  *(_QWORD *)v82.v = v41;
  if ( v41 > 0 )
  {
    v42 = &pPath->pts[v41].vOrigPoint.v[2];
    do
    {
      *(v42 - 2) = v40->constant.vLocalOrigin.v[0];
      *(v42 - 1) = v40->constant.vLocalOrigin.v[1];
      *v42 = v40->constant.vLocalOrigin.v[2];
      *((_WORD *)v42 + 8) = Path_ConvertNodeToIndex(v40);
      if ( (unsigned __int16)(v40->constant.type - 29) <= 1u && v40->constant.target )
        pPath->flags |= 0x10000u;
      v40 = v40->transient.pParent;
      --v41;
      v42 -= 7;
    }
    while ( v41 > 0 );
    v33 = pNodeFrom;
  }
  if ( v78 > 0 )
  {
    pPath->pts[0].vOrigPoint.v[0] = v40->constant.vLocalOrigin.v[0];
    pPath->pts[0].vOrigPoint.v[1] = v40->constant.vLocalOrigin.v[1];
    pPath->pts[0].vOrigPoint.v[2] = v40->constant.vLocalOrigin.v[2];
    pPath->pts[0].iNodeNum = Path_ConvertNodeToIndex(v40);
  }
  v43 = 1 << LOBYTE(pNodeTo->constant.type);
  if ( (v43 & 0x1E300000) != 0 || (v43 & 0x400000) != 0 || (v44 = 1 << LOBYTE(v33->constant.type), (v44 & 0x1E300000) != 0) || (v44 & 0x400000) != 0 )
    pPath->flags |= 0x10000u;
  if ( v77 )
    pPath->flags |= 0x20000u;
  if ( pPath->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 813, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode == 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode == 0") )
    __debugbreak();
  pPath->wNegotiationStartNode = v34;
  if ( (v34 & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 815, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  v45 = *(_QWORD *)v82.v;
  *(_QWORD *)&pPath->pts[v45].fDir2D.y = 0i64;
  pPath->pts[v45].fDir2D.v[0] = 0.0;
  pPath->vCurrPoint.v[0] = pPath->pts[v45].vOrigPoint.v[0];
  pPath->vCurrPoint.v[1] = pPath->pts[v45].vOrigPoint.v[1];
  pPath->vCurrPoint.v[2] = pPath->pts[v45].vOrigPoint.v[2];
  if ( v13 - 1 > 0 )
  {
    v46 = pPath;
    v47 = (unsigned int)(v13 - 1);
    v48 = (float *)&pPath->pts[0].fDir2D + 1;
    do
    {
      if ( (pPath->flags & 0x10000) != 0 )
      {
        v49 = Path_Get3DPathDir(&delta, &v46->pts[1].vOrigPoint, (const vec3_t *)v46);
        v50 = LODWORD(delta.v[1]);
        v51 = delta.v[0];
        v48[1] = v49;
        v52 = v50;
        *(float *)&v52 = fsqrt((float)(*(float *)&v50 * *(float *)&v50) + (float)(v51 * v51));
        _XMM2 = v52;
        __asm
        {
          vcmpless xmm0, xmm2, xmm8
          vblendvps xmm0, xmm2, xmm7, xmm0
        }
        *v48 = *(float *)&v50 * (float)(1.0 / *(float *)&_XMM0);
        *(v48 - 1) = v51 * (float)(1.0 / *(float *)&_XMM0);
      }
      else
      {
        v56 = *(v48 - 4) - v48[3];
        *(v48 - 1) = v56;
        *v48 = *(v48 - 3) - v48[4];
        if ( (LODWORD(v56) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 101, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[0] ) )", (const char *)&queryFormat, "!IS_NAN( delta[0] )") )
          __debugbreak();
        if ( (*(_DWORD *)v48 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 102, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[1] ) )", (const char *)&queryFormat, "!IS_NAN( delta[1] )") )
          __debugbreak();
        if ( *(v48 - 1) == 0.0 && *v48 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 103, ASSERT_TYPE_ASSERT, "(delta[0] || delta[1])", (const char *)&queryFormat, "delta[0] || delta[1]") )
          __debugbreak();
        v57 = fsqrt((float)(*(v48 - 1) * *(v48 - 1)) + (float)(*v48 * *v48));
        if ( v57 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 105, ASSERT_TYPE_ASSERT, "(fDist > 0)", (const char *)&queryFormat, "fDist > 0") )
          __debugbreak();
        v58 = (float)(1.0 / v57) * *(v48 - 1);
        *v48 = (float)(1.0 / v57) * *v48;
        *(v48 - 1) = v58;
        v48[1] = v57;
      }
      v46 = (path_t *)((char *)v46 + 28);
      v48 += 7;
      --v47;
    }
    while ( v47 );
    v13 = v76;
  }
  if ( v13 <= 1 )
    v59 = 0.0;
  else
    v59 = *((float *)&pPath->pts[v13 - 1] - 2);
  pPath->fCurrLength = v59;
  if ( v13 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 841, ASSERT_TYPE_ASSERT, "(iTotal > 0)", (const char *)&queryFormat, "iTotal > 0") )
    __debugbreak();
  if ( v13 > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 842, ASSERT_TYPE_ASSERT, "(iTotal <= 32)", (const char *)&queryFormat, "iTotal <= PATH_MAX_POINTS") )
    __debugbreak();
  pPath->wPathLen = v13;
  pPath->wOrigPathLen = v13;
  if ( bAllowNegotiationLinks )
    pPath->flags |= 0x10u;
  if ( useChokePoints )
    pPath->flags |= 0x800u;
  pPath->iPathTime = level.time;
  v60 = pPath->pts[0].iNodeNum;
  if ( v60 == 0xFFFF && ((char)v13 <= 1 || (v60 = pPath->pts[1].iNodeNum, v60 == 0xFFFF)) )
    parentIndex = pPath->parentIndex;
  else
    parentIndex = Path_ConvertIndexToNode(v60)->constant.parent.index;
  if ( parentIndex )
  {
    if ( parentIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 295, ASSERT_TYPE_ASSERT, "(parentIndex < ( 2048 ))", (const char *)&queryFormat, "parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v62 = &g_entities[parentIndex];
    if ( G_IsEntityInUse(parentIndex) )
    {
      v63 = pPath->vFinalGoal.v[0] - v62->r.currentOrigin.v[0];
      v64 = pPath->vFinalGoal.v[2] - v62->r.currentOrigin.v[2];
      v65 = pPath->vFinalGoal.v[1] - v62->r.currentOrigin.v[1];
      AnglesToAxis(&v62->r.currentAngles, &axis);
      MatrixTranspose(&axis, &out);
      if ( &v86 == (char *)&pPath->vFinalGoal && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v66 = v65 * out.m[1].v[1];
      v67 = v64 * out.m[2].v[1];
      pPath->vFinalGoal.v[0] = (float)((float)(v65 * out.m[1].v[0]) + (float)(v63 * out.m[0].v[0])) + (float)(v64 * out.m[2].v[0]);
      v68 = v66 + (float)(v63 * out.m[0].v[1]);
      v69 = v65 * out.m[1].v[2];
      v70 = v68 + v67;
      v71 = v64 * out.m[2].v[2];
      pPath->vFinalGoal.v[1] = v70;
      pPath->vFinalGoal.v[2] = (float)(v69 + (float)(v63 * out.m[0].v[2])) + v71;
    }
  }
  if ( pPath->fLookaheadAmount != 0.0 )
  {
    if ( (v79 & 0x380) != 0 )
    {
      pPath->minLookAheadNodes = 0;
      if ( (v79 & 0x80u) == 0 )
      {
        pPath->fLookaheadAmount = 4096.0;
        v72 = 0;
        if ( (v79 & 0x100) != 0 )
          v72 = 2;
        pPath->minLookAheadNodes = v72;
      }
      else
      {
        pPath->fLookaheadAmount = 32768.0;
      }
      *(_QWORD *)pPath->lookaheadDir.v = 0i64;
      pPath->lookaheadDir.v[2] = 0.0;
      Path_UpdateLookaheadExtended(pPath, vStartPos, 0, 0, 1, NULL, NULL);
      pPath->minLookAheadNodes = 0;
    }
    else
    {
      Path_TransferLookahead(pPath, vStartPos);
    }
    if ( pPath->wNegotiationStartNode > pPath->lookaheadNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 883, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode <= pPath->lookaheadNextNode)", (const char *)&queryFormat, "pPath->wNegotiationStartNode <= pPath->lookaheadNextNode") )
      __debugbreak();
    if ( pPath->lookaheadNextNode >= pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 884, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
      __debugbreak();
    if ( pPath->pts[(unsigned __int8)pPath->lookaheadNextNode].fOrigLength < pPath->fLookaheadDistToNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 885, ASSERT_TYPE_ASSERT, "(pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength)", (const char *)&queryFormat, "pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength") )
      __debugbreak();
    wPathLen = pPath->wPathLen;
    if ( wPathLen > 1 )
    {
      fCurrLength = pPath->fCurrLength;
      v75 = *((float *)&pPath->pts[wPathLen - 1] - 2);
      if ( fCurrLength > v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 886, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, v75) )
        __debugbreak();
    }
    if ( pPath->fLookaheadDistToNextNode != 0.0 && pPath->lookaheadNextNode >= pPath->wPathLen - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 888, ASSERT_TYPE_ASSERT, "(!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1))", (const char *)&queryFormat, "!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1)") )
      __debugbreak();
  }
  return 1i64;
}

/*
==============
Path_Get3DPathDir
==============
*/
float Path_Get3DPathDir(vec3_t *delta, const vec3_t *vFrom, const vec3_t *vTo)
{
  float v3; 
  float v5; 
  float v6; 

  v3 = vTo->v[0] - vFrom->v[0];
  delta->v[0] = v3;
  delta->v[1] = vTo->v[1] - vFrom->v[1];
  delta->v[2] = vTo->v[2] - vFrom->v[2];
  if ( (LODWORD(v3) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 122, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[0] ) )", (const char *)&queryFormat, "!IS_NAN( delta[0] )") )
    __debugbreak();
  if ( (LODWORD(delta->v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 123, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[1] ) )", (const char *)&queryFormat, "!IS_NAN( delta[1] )") )
    __debugbreak();
  if ( (LODWORD(delta->v[2]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 124, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[2] ) )", (const char *)&queryFormat, "!IS_NAN( delta[2] )") )
    __debugbreak();
  if ( delta->v[0] == 0.0 && delta->v[1] == 0.0 && delta->v[2] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 125, ASSERT_TYPE_ASSERT, "(delta[0] || delta[1] || delta[2])", (const char *)&queryFormat, "delta[0] || delta[1] || delta[2]") )
    __debugbreak();
  v5 = fsqrt((float)((float)(delta->v[0] * delta->v[0]) + (float)(delta->v[1] * delta->v[1])) + (float)(delta->v[2] * delta->v[2]));
  if ( v5 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 127, ASSERT_TYPE_ASSERT, "(fDist > 0)", (const char *)&queryFormat, "fDist > 0") )
    __debugbreak();
  v6 = (float)(1.0 / v5) * delta->v[1];
  delta->v[0] = (float)(1.0 / v5) * delta->v[0];
  delta->v[2] = (float)(1.0 / v5) * delta->v[2];
  delta->v[1] = v6;
  return v5;
}

/*
==============
Path_GetLookaheadDir
==============
*/
void Path_GetLookaheadDir(const path_t *pPath, vec3_t *outLookaheadDir)
{
  *outLookaheadDir = pPath->lookaheadDir;
  Path_WorldifyDir(pPath, outLookaheadDir);
}

/*
==============
Path_GetNegotiationNode
==============
*/
pathnode_t *Path_GetNegotiationNode(const path_t *pPath)
{
  if ( pPath->wNegotiationStartNode <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 329, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode > 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode > 0") )
    __debugbreak();
  return Path_ConvertIndexToNode(pPath->pts[(unsigned __int8)pPath->wNegotiationStartNode].iNodeNum);
}

/*
==============
Path_GetPathFindDist
==============
*/
float Path_GetPathFindDist(const vec3_t *vStartPos, const vec3_t *vEndPos, float maxRadius)
{
  pathnode_t *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  PathFindInput pathFindInput; 
  CustomSearchInfo_FindPathWithinRadius custom; 

  pathFindInput.pNodeFrom = NULL;
  pathFindInput.bAllowJumpLinks = 0;
  memset_0(&pathFindInput.avoidExpStances, 0, 0xE0ui64);
  pathFindInput.searchEntNum = 2047;
  pathFindInput.vStartPos = vStartPos;
  pathFindInput.vGoalPos = vEndPos;
  *(_QWORD *)&pathFindInput.bAllowLadderNodes = 1i64;
  pathFindInput.bAllowNegotiationLinks = 1;
  pathFindInput.pPath = NULL;
  pathFindInput.badplacePercent = FLOAT_1_0;
  pathFindInput.pNodeTo = Path_NearestNode(vEndPos, 33685521, NULL);
  if ( !pathFindInput.pNodeTo )
    return FLOAT_N1_0;
  v5 = Path_NearestNode(vStartPos, 33685521, NULL);
  pathFindInput.pNodeFrom = v5;
  if ( !v5 )
    return FLOAT_N1_0;
  custom.m_PathLength = 0.0;
  v6 = vEndPos->v[1];
  custom.m_RadiusSq = maxRadius * maxRadius;
  custom.m_vGoalPos.v[0] = vEndPos->v[0];
  v7 = vEndPos->v[2];
  custom.m_vGoalPos.v[1] = v6;
  v8 = vStartPos->v[0];
  custom.m_pNodeFrom = v5;
  custom.m_vGoalPos.v[2] = v7;
  v9 = vStartPos->v[1];
  custom.m_vStartPos.v[0] = v8;
  v10 = vStartPos->v[2];
  custom.m_pNodeTo = pathFindInput.pNodeTo;
  custom.m_vStartPos.v[1] = v9;
  custom.m_vStartPos.v[2] = v10;
  if ( Path_AStarAlgorithm_CustomSearchInfo_FindPathWithinRadius_(&pathFindInput, TEAM_TWO, 1, &custom) )
    return custom.m_PathLength;
  else
    return FLOAT_N1_0;
}

/*
==============
Path_GetPoint
==============
*/
void Path_GetPoint(const path_t *pPath, int iPoint, vec3_t *outOrigPoint)
{
  *outOrigPoint = pPath->pts[iPoint].vOrigPoint;
  Path_WorldifyPos(pPath, outOrigPoint);
}

/*
==============
Path_HasNegotiationNode
==============
*/
bool Path_HasNegotiationNode(const path_t *path)
{
  if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2026, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  return path->wPathLen > 0 && path->wNegotiationStartNode > 0;
}

/*
==============
Path_IsNodeUseableBy
==============
*/
char Path_IsNodeUseableBy(const pathnode_t *pNode, unsigned int entNum)
{
  if ( entNum != 2047 )
  {
    if ( entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 951, ASSERT_TYPE_ASSERT, "(entNum < ( 2048 ))", (const char *)&queryFormat, "entNum < MAX_GENTITIES") )
      __debugbreak();
    G_IsEntityInUse(entNum);
  }
  return 1;
}

/*
==============
Path_IsTraversalNodePairUseableBy
==============
*/
bool Path_IsTraversalNodePairUseableBy(const pathnode_t *pStartNode, const pathnode_t *pEndNode, unsigned int entNum)
{
  __int64 v3; 
  gentity_s *v6; 
  bool result; 

  v3 = entNum;
  if ( ((1 << LOBYTE(pStartNode->constant.type)) & 0x68010000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 962, ASSERT_TYPE_ASSERT, "(Path_IsNegotiationBegin( pStartNode ))", (const char *)&queryFormat, "Path_IsNegotiationBegin( pStartNode )") )
    __debugbreak();
  if ( ((1 << LOBYTE(pEndNode->constant.type)) & 0x70020000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 963, ASSERT_TYPE_ASSERT, "(Path_IsNegotiationEnd( pEndNode ))", (const char *)&queryFormat, "Path_IsNegotiationEnd( pEndNode )") )
    __debugbreak();
  if ( pStartNode->constant.target != pEndNode->constant.targetname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 964, ASSERT_TYPE_ASSERT, "(pStartNode->constant.target == pEndNode->constant.targetname)", (const char *)&queryFormat, "pStartNode->constant.target == pEndNode->constant.targetname") )
    __debugbreak();
  if ( (_DWORD)v3 == 2047 )
    return 1;
  if ( (unsigned int)v3 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 969, ASSERT_TYPE_ASSERT, "(entNum < ( 2048 ))", (const char *)&queryFormat, "entNum < MAX_GENTITIES") )
    __debugbreak();
  v6 = &g_entities[v3];
  if ( !v6->r.isInUse )
    return 1;
  if ( !SV_BotIsBotEnt(&g_entities[v3]) )
    return 1;
  result = SV_BotCanUseTraversalLink(pStartNode, pEndNode, v6);
  if ( result )
    return 1;
  return result;
}

/*
==============
Path_LocalizeAngles
==============
*/
void Path_LocalizeAngles(const path_t *pPath, vec3_t *inOutAngles)
{
  unsigned int parentIndex; 
  unsigned int v5; 
  gentity_s *v6; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v10; 

  parentIndex = pPath->parentIndex;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 189, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      AnglesToAxis(&v6->r.currentAngles, &axis);
      AnglesToAxis(inOutAngles, &in2);
      MatrixInverse(&axis, &out);
      MatrixMultiply(&out, &in2, &v10);
      AxisToAngles(&v10, inOutAngles);
    }
  }
}

/*
==============
Path_LocalizeDir
==============
*/
void Path_LocalizeDir(const path_t *pPath, vec3_t *inOutDir)
{
  unsigned int parentIndex; 
  unsigned int v5; 
  gentity_s *v6; 
  float v7; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  parentIndex = pPath->parentIndex;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 237, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      v7 = inOutDir->v[1];
      in1.v[0] = inOutDir->v[0];
      in1.v[2] = inOutDir->v[2];
      in1.v[1] = v7;
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixInverse(&axis, &out);
      MatrixTransformVector(&in1, &out, inOutDir);
    }
  }
}

/*
==============
Path_LocalizePos
==============
*/
void Path_LocalizePos(const path_t *pPath, vec3_t *inOutPos)
{
  unsigned int parentIndex; 
  unsigned int v5; 
  gentity_s *v6; 
  float v7; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  parentIndex = pPath->parentIndex;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 143, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      v7 = inOutPos->v[1] - v6->r.currentOrigin.v[1];
      in1.v[0] = inOutPos->v[0] - v6->r.currentOrigin.v[0];
      in1.v[2] = inOutPos->v[2] - v6->r.currentOrigin.v[2];
      in1.v[1] = v7;
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixTranspose(&axis, &out);
      MatrixTransformVector(&in1, &out, inOutPos);
    }
  }
}

/*
==============
Path_LookaheadPredictionTraceExtended
==============
*/
__int64 Path_LookaheadPredictionTraceExtended(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vEndPos, const Bounds *bounds)
{
  pathnode_t *v8; 
  int v9; 
  int ownerEntNum; 
  __int16 wDodgeEntity; 
  __int64 v12; 
  float v13; 
  float v14; 
  int entityNum; 
  unsigned int physicsInstanceId; 
  int v17; 
  unsigned __int8 lookaheadNextNode; 
  const char *GameType; 
  bool b3D; 
  unsigned __int16 groundEnt; 
  int entNum; 
  vec3_t end; 
  Bounds boundsa; 
  vec3_t vTraceEndPos; 

  groundEnt = truncate_cast<unsigned short,unsigned int>(pPath->parentIndex);
  v8 = NULL;
  v9 = pPath->iTraceMask & 0xFDFFFFFF;
  b3D = BYTE2(pPath->flags) & 1;
  ownerEntNum = 2047;
  if ( !Com_GameMode_SupportsFeature(WEAPON_READY) )
    goto LABEL_12;
  if ( !pPath->wDodgeCount )
    goto LABEL_12;
  wDodgeEntity = pPath->wDodgeEntity;
  if ( wDodgeEntity == 2047 )
    goto LABEL_12;
  if ( !level.gentities[wDodgeEntity].actor )
  {
    v9 = 33685521;
    if ( (pPath->flags & 0x2000) != 0 )
      goto LABEL_33;
    lookaheadNextNode = pPath->lookaheadNextNode;
    if ( !lookaheadNextNode )
      goto LABEL_33;
    v8 = Path_ConvertIndexToNode(pPath->pts[lookaheadNextNode].iNodeNum);
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      goto LABEL_33;
LABEL_12:
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2484, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS ))", "%s\n\tAccess to pathnode_dynamic::bots", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::BOTS )") )
      __debugbreak();
    if ( !BG_BotSystemEnabled() || (GameType = SV_GameMP_GetGameType(), *GameType == aBr_2[0]) && GameType[1] == aBr_2[1] && GameType[2] == aBr_2[2] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2485, ASSERT_TYPE_ASSERT, "(!Path_MapUsesScriptedAIData())", "%s\n\tmap/mode is only set up to use scripted soldier data, should not be accessing pathnode_dynamic::bots", "!Path_MapUsesScriptedAIData()") )
        __debugbreak();
    }
    if ( v8->dynamic.bots.hasGlobalBadPlaceLink )
      return 0i64;
LABEL_33:
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      ownerEntNum = pPath->ownerEntNum;
    if ( !bounds )
      bounds = Path_GetActorBounds(v8);
    return Path_PredictionTrace(vStartPos, vEndPos, ownerEntNum, v9, &vTraceEndPos, 10.0, 1, b3D, &pPath->lookaheadHitsStairs, bounds, groundEnt);
  }
  *(_OWORD *)boundsa.midPoint.v = *(_OWORD *)s_predictionTraceBounds.midPoint.v;
  v12 = 0i64;
  end.v[0] = vEndPos->v[0];
  v13 = vStartPos->v[2];
  *(double *)&boundsa.halfSize.y = *(double *)&s_predictionTraceBounds.halfSize.y;
  v14 = vEndPos->v[1];
  end.v[2] = v13;
  end.v[1] = v14;
  entNum = wDodgeEntity;
  while ( 1 )
  {
    entityNum = *(&entNum + v12);
    boundsa.midPoint.v[2] = FLOAT_41_0;
    boundsa.halfSize.v[2] = FLOAT_31_0;
    physicsInstanceId = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, entityNum);
    if ( PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, vStartPos, &end, &boundsa, -1, physicsInstanceId, entityNum) )
      break;
    if ( ++v12 >= 1 )
    {
      v17 = !Path_PredictionTrace(vStartPos, vEndPos, 2047, v9, &vTraceEndPos, 10.0, 1, b3D, NULL, NULL, groundEnt);
      goto LABEL_10;
    }
  }
  v17 = 2;
LABEL_10:
  LOBYTE(v8) = v17 == 0;
  return (unsigned int)v8;
}

/*
==============
Path_NeedsReevaluation
==============
*/
char Path_NeedsReevaluation(const path_t *pPath)
{
  char wPathLen; 
  __int64 v3; 
  pathnode_t *v4; 
  __int64 totalLinkCount; 
  pathlink_s *Links; 
  __int64 v7; 

  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2097, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( pPath->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2100, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  wPathLen = pPath->wPathLen;
  if ( wPathLen >= 1 )
  {
    v3 = wPathLen;
    v4 = Path_ConvertIndexToNode(pPath->pts[wPathLen - 1].iNodeNum);
    totalLinkCount = v4->constant.totalLinkCount;
    if ( v4->dynamic.wLinkCount != (_DWORD)totalLinkCount )
    {
      if ( v4->constant.totalLinkCount )
      {
        Links = v4->constant.Links;
        v7 = 0i64;
        while ( Links->nodeNum != *((_WORD *)&pPath->pts[v3 - 1] - 2) )
        {
          ++v7;
          ++Links;
          if ( v7 >= totalLinkCount )
            return (pPath->flags & 4) != 0 && pPath->wPathLen <= 8;
        }
        if ( Links->disconnectCount )
          return 1;
      }
    }
  }
  return (pPath->flags & 4) != 0 && pPath->wPathLen <= 8;
}

/*
==============
Path_NodeOccupiedByOther
==============
*/
char Path_NodeOccupiedByOther(int searchEntNum, const pathnode_t *node, int nodeTeam)
{
  int v6; 
  sentient_s *NodeOwner; 
  __int64 v9; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 927, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( (unsigned int)searchEntNum >= 0x7FF )
  {
    LODWORD(v9) = searchEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 928, ASSERT_TYPE_ASSERT, "(unsigned)( searchEntNum ) < (unsigned)( ENTITYNUM_NONE )", "searchEntNum doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v9, 2047) )
      __debugbreak();
  }
  v6 = 0;
  while ( 1 )
  {
    NodeOwner = Path_GetNodeOwner(node, v6, nodeTeam);
    if ( NodeOwner )
    {
      if ( NodeOwner->ent->s.number != searchEntNum )
        break;
    }
    if ( ++v6 >= 3 )
      return 0;
  }
  return 1;
}

/*
==============
Path_OpenSet_Add
==============
*/
void Path_OpenSet_Add(PathHeap *openSet, pathnode_t *node, pathnode_t *parent, const float cost)
{
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  __int64 v10; 

  if ( !openSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1170, ASSERT_TYPE_ASSERT, "( openSet )", (const char *)&queryFormat, "openSet") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1171, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( openSet->size >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1172, ASSERT_TYPE_ASSERT, "( openSet->size < 65535 )", (const char *)&queryFormat, "openSet->size < HEAP_MAX_NODES") )
    __debugbreak();
  node->transient.pParent = parent;
  node->transient.fCost = cost;
  v7 = Path_ConvertNodeToIndex(node);
  v8 = v7;
  if ( v7 >= pathData.nodeCount )
  {
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.nodeCount )", "nodeIndex doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v10, pathData.nodeCount) )
      __debugbreak();
  }
  v9 = truncate_cast<unsigned short,unsigned int>(openSet->size);
  openSet->index[v8] = v9;
  openSet->nodes[v9] = v8;
  if ( ++openSet->size > 1 )
    PathHeap_PercolateUp(openSet, v9);
}

/*
==============
Path_OpenSet_Front
==============
*/
pathnode_t *Path_OpenSet_Front(PathHeap *openSet)
{
  __int64 v3; 

  if ( !openSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1104, ASSERT_TYPE_ASSERT, "( openSet )", (const char *)&queryFormat, "openSet") )
    __debugbreak();
  if ( !openSet->size )
    return 0i64;
  if ( openSet->nodes[0] >= pathData.nodeCount )
  {
    LODWORD(v3) = openSet->nodes[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1108, ASSERT_TYPE_ASSERT, "(unsigned)( openSet->nodes[0] ) < (unsigned)( pathData.nodeCount )", "openSet->nodes[0] doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v3, pathData.nodeCount) )
      __debugbreak();
  }
  return &pathData.nodes[openSet->nodes[0]];
}

/*
==============
Path_OpenSet_Remove
==============
*/
void Path_OpenSet_Remove(PathHeap *openSet)
{
  unsigned int v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 

  if ( !openSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1117, ASSERT_TYPE_ASSERT, "( openSet )", (const char *)&queryFormat, "openSet") )
    __debugbreak();
  if ( !openSet->size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1118, ASSERT_TYPE_ASSERT, "( openSet->size > 0 )", (const char *)&queryFormat, "openSet->size > 0") )
    __debugbreak();
  v2 = 0;
  openSet->index[openSet->nodes[0]] = -1;
  v3 = openSet->nodes[--openSet->size];
  openSet->index[v3] = 0;
  openSet->nodes[0] = v3;
  if ( openSet->size > 1 )
  {
    if ( !openSet->size )
    {
      LODWORD(v7) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1049, ASSERT_TYPE_ASSERT, "(unsigned)( node ) < (unsigned)( heap->size )", "node doesn't index heap->size\n\t%i not in [0, %i)", v7, 0) )
        __debugbreak();
    }
    while ( 1 )
    {
      v4 = 2 * v2 + 1;
      v5 = v2;
      v6 = 2 * v2 + 2;
      if ( v4 < openSet->size && PathHeap_Compare(openSet, v2, v4) )
        v2 = 2 * v2 + 1;
      if ( v6 < openSet->size && PathHeap_Compare(openSet, v2, v6) )
        v2 = v6;
      if ( v2 == v5 )
        break;
      PathHeap_SwapNodes(openSet, v2, v5);
    }
  }
}

/*
==============
Path_OpenSet_Update
==============
*/
__int64 Path_OpenSet_Update(PathHeap *openSet, pathnode_t *node, pathnode_t *parent, const float cost)
{
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int size; 
  __int64 v13; 
  __int64 v14; 

  if ( !openSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1140, ASSERT_TYPE_ASSERT, "( openSet )", (const char *)&queryFormat, "openSet") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1141, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v7 = Path_ConvertNodeToIndex(node);
  v8 = v7;
  if ( v7 >= pathData.nodeCount )
  {
    LODWORD(v13) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1144, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.nodeCount )", "nodeIndex doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v13, pathData.nodeCount) )
      __debugbreak();
  }
  v9 = openSet->index[v8];
  v10 = v9;
  if ( v9 >= openSet->size )
    return 0i64;
  if ( openSet->nodes[(unsigned __int16)v9] != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1150, ASSERT_TYPE_ASSERT, "( openSet->nodes[heapIndex] == nodeIndex )", (const char *)&queryFormat, "openSet->nodes[heapIndex] == nodeIndex") )
    __debugbreak();
  node->transient.fCost = cost;
  node->transient.pParent = parent;
  size = openSet->size;
  if ( size > 1 )
  {
    if ( v10 >= size )
    {
      LODWORD(v14) = openSet->size;
      LODWORD(v13) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1157, ASSERT_TYPE_ASSERT, "(unsigned)( heapIndex ) < (unsigned)( openSet->size )", "heapIndex doesn't index openSet->size\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    PathHeap_PercolateUp(openSet, v10);
  }
  return 1i64;
}

/*
==============
Path_PredictionTrace
==============
*/
bool Path_PredictionTrace(const vec3_t *vStartPos, const vec3_t *vEndPos, int entityIgnore, int mask, vec3_t *vTraceEndPos, float stepheight, int allowStartSolid, bool b3D, bool *hitStairs, const Bounds *useTraceBox, unsigned __int16 groundEnt)
{
  int v11; 
  double v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  bool v23; 
  bool v24; 
  float fraction; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  bool v30; 
  __int64 EntityHitId; 
  gentity_s *v32; 
  actor_s *actor; 
  actor_s *pPileUpActor; 
  playerState_s *EntityPlayerState; 
  double v36; 
  float v37; 
  float v38; 
  float v39; 
  double v40; 
  vec3_t v41; 
  const vec3_t *v42; 
  vec3_t start; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 

  v11 = mask;
  v42 = vEndPos;
  if ( b3D )
    return Path_PredictionTraceSimpleInternal(vStartPos, vEndPos, entityIgnore, mask, hitStairs, 1, useTraceBox, vTraceEndPos, groundEnt) == 1;
  bounds = actorBox;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox )
  {
    v16 = *(double *)&useTraceBox->halfSize.y;
    *(_OWORD *)bounds.midPoint.v = *(_OWORD *)useTraceBox->midPoint.v;
    *(double *)&bounds.halfSize.y = v16;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox && useTraceBox != &actorBox )
  {
    v17 = stepheight;
    v18 = (float)(bounds.halfSize.v[0] * 2.0) + stepheight;
    bounds.midPoint.v[2] = (float)(v18 + stepheight) * 0.5;
    bounds.halfSize.v[2] = (float)(v18 - stepheight) * 0.5;
  }
  else
  {
    v17 = stepheight;
    bounds.midPoint.v[2] = (float)(stepheight * 0.5) + bounds.midPoint.v[2];
    bounds.halfSize.v[2] = bounds.halfSize.v[2] - (float)(stepheight * 0.5);
  }
  v19 = vEndPos->v[1];
  v20 = vStartPos->v[2];
  end.v[0] = vEndPos->v[0];
  v21 = vStartPos->v[0];
  end.v[1] = v19;
  v22 = vStartPos->v[1];
  v23 = 0;
  start.v[0] = v21;
  start.v[1] = v22;
  end.v[2] = v20;
  start.v[2] = v20;
  if ( hitStairs )
    *hitStairs = 0;
  while ( 1 )
  {
    G_Main_TraceCapsule(&results, &start, &end, &bounds, entityIgnore, v11);
    if ( results.startsolid && !allowStartSolid )
      return 0;
    v24 = !results.allsolid;
    fraction = results.fraction;
    v26 = results.fraction * 0.99000001;
    v27 = (float)(end.v[1] - start.v[1]) * (float)(results.fraction * 0.99000001);
    v28 = end.v[2] - start.v[2];
    vTraceEndPos->v[0] = (float)((float)(end.v[0] - start.v[0]) * (float)(results.fraction * 0.99000001)) + start.v[0];
    vTraceEndPos->v[1] = v27 + start.v[1];
    v29 = (float)(v28 * v26) + start.v[2];
    vTraceEndPos->v[2] = v29;
    if ( v24 && fraction == 1.0 )
      break;
    v30 = (results.surfaceFlags & 0x200) != 0 && results.normal.v[2] >= 0.0 && results.normal.v[2] < 0.99900001;
    EntityHitId = Trace_GetEntityHitId(&results);
    v32 = &level.gentities[EntityHitId];
    if ( level.gentities[EntityHitId].sentient )
    {
      actor = v32->actor;
      if ( actor )
      {
        if ( !actor->moveMode )
        {
          pPileUpActor = actor->pPileUpActor;
          if ( !pPileUpActor || pPileUpActor->ent->s.number != entityIgnore )
            return 0;
        }
      }
      else
      {
        if ( !SV_BotIsBotEntClient(v32) )
          return 0;
        EntityPlayerState = G_GetEntityPlayerState(&level.gentities[EntityHitId]);
        if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2331, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( (float)((float)((float)(EntityPlayerState->velocity.v[0] * EntityPlayerState->velocity.v[0]) + (float)(EntityPlayerState->velocity.v[1] * EntityPlayerState->velocity.v[1])) + (float)(EntityPlayerState->velocity.v[2] * EntityPlayerState->velocity.v[2])) <= 0.0099999998 )
          return 0;
      }
      v11 &= 0xFDFFBFFF;
    }
    else if ( (float)((float)((float)(start.v[1] - vTraceEndPos->v[1]) * (float)(start.v[1] - vTraceEndPos->v[1])) + (float)((float)(start.v[0] - vTraceEndPos->v[0]) * (float)(start.v[0] - vTraceEndPos->v[0]))) >= 225.0 )
    {
      v23 = 0;
    }
    else
    {
      if ( !v30 || v23 )
        return 0;
      v23 = v30;
    }
    v36 = *(double *)vTraceEndPos->v;
    v41.v[2] = vTraceEndPos->v[2];
    *(double *)v41.v = v36;
    if ( !Path_CheckDrop(&v41, entityIgnore, v11, hitStairs) )
      return 0;
    if ( v30 )
    {
      v37 = FLOAT_30_0;
      if ( hitStairs )
        *hitStairs = 1;
    }
    else
    {
      v37 = v17;
    }
    v38 = vTraceEndPos->v[1];
    start.v[0] = vTraceEndPos->v[0];
    v39 = vTraceEndPos->v[2];
    start.v[1] = v38;
    if ( v39 >= start.v[2] )
      v39 = start.v[2] + v37;
    start.v[2] = v39;
    end.v[2] = v39;
  }
  if ( (float)(v42->v[2] - v29) > 72.0 )
    return 0;
  v40 = *(double *)vTraceEndPos->v;
  v41.v[2] = vTraceEndPos->v[2];
  *(double *)v41.v = v40;
  return Path_CheckDrop(&v41, entityIgnore, v11, hitStairs);
}

/*
==============
Path_PredictionTraceCheckForEntities
==============
*/
__int64 Path_PredictionTraceCheckForEntities(const vec3_t *vStartPos, const vec3_t *vEndPos, const int *entities, const int entityCount, int entityIgnore, int mask, bool b3D, vec3_t *vTraceEndPos, unsigned __int16 groundEnt)
{
  float v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  unsigned int physicsInstanceId; 
  vec3_t end; 
  Bounds bounds; 

  bounds = s_predictionTraceBounds;
  if ( b3D )
  {
    bounds.midPoint.v[2] = 0.0;
    bounds.halfSize.v[2] = actorBox.halfSize.v[2];
  }
  v12 = vEndPos->v[1];
  v13 = 0;
  v14 = entityCount;
  end.v[0] = vEndPos->v[0];
  end.v[2] = vStartPos->v[2];
  end.v[1] = v12;
  if ( entityCount <= 0 )
  {
LABEL_7:
    LOBYTE(v13) = !Path_PredictionTrace(vStartPos, vEndPos, entityIgnore, mask, vTraceEndPos, 10.0, 1, b3D, NULL, NULL, groundEnt);
    return v13;
  }
  else
  {
    v15 = 0i64;
    while ( 1 )
    {
      v16 = entities[v15];
      bounds.midPoint.v[2] = FLOAT_41_0;
      bounds.halfSize.v[2] = FLOAT_31_0;
      physicsInstanceId = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v16);
      if ( PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, vStartPos, &end, &bounds, -1, physicsInstanceId, entities[v15]) )
        break;
      if ( ++v15 >= v14 )
        goto LABEL_7;
    }
    *vTraceEndPos = *vStartPos;
    return 2i64;
  }
}

/*
==============
Path_PredictionTraceSimpleInternal
==============
*/
_BOOL8 Path_PredictionTraceSimpleInternal(const vec3_t *vStartPos, const vec3_t *vEndPos, int entityIgnore, int mask, bool *hitStairs, bool b3D, const Bounds *useTraceBox, vec3_t *vTraceEndPos)
{
  double v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float fraction; 
  float v18; 
  float v19; 
  float v20; 
  bool v21; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 

  bounds = actorBox;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox )
  {
    v12 = *(double *)&useTraceBox->halfSize.y;
    *(_OWORD *)bounds.midPoint.v = *(_OWORD *)useTraceBox->midPoint.v;
    *(double *)&bounds.halfSize.y = v12;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox && useTraceBox != &actorBox )
  {
    v13 = (float)(bounds.halfSize.v[0] * 2.0) + 10.0;
    v14 = (float)(v13 - 10.0) * 0.5;
    bounds.midPoint.v[2] = (float)(v13 * 0.5) + 5.0;
  }
  else
  {
    if ( !b3D )
    {
      bounds.halfSize.v[2] = bounds.halfSize.v[2] + -5.0;
      bounds.midPoint.v[2] = bounds.midPoint.v[2] + 5.0;
      goto LABEL_13;
    }
    v14 = actorBox.halfSize.v[2];
    bounds.midPoint.v[2] = 0.0;
  }
  bounds.halfSize.v[2] = v14;
  if ( b3D )
  {
    end.v[0] = vEndPos->v[0];
    v15 = vEndPos->v[2];
    goto LABEL_14;
  }
LABEL_13:
  end.v[0] = vEndPos->v[0];
  v15 = vStartPos->v[2];
LABEL_14:
  v16 = vEndPos->v[1];
  end.v[2] = v15;
  end.v[1] = v16;
  G_Main_TraceCapsule(&results, vStartPos, &end, &bounds, entityIgnore, mask & 0xFDFFFFFF);
  fraction = results.fraction;
  if ( vTraceEndPos )
  {
    v18 = end.v[1];
    vTraceEndPos->v[0] = (float)((float)(end.v[0] - vStartPos->v[0]) * results.fraction) + vStartPos->v[0];
    v19 = v18 - vStartPos->v[1];
    v20 = end.v[2];
    vTraceEndPos->v[1] = (float)(v19 * fraction) + vStartPos->v[1];
    vTraceEndPos->v[2] = (float)((float)(v20 - vStartPos->v[2]) * fraction) + vStartPos->v[2];
  }
  v21 = (results.surfaceFlags & 0x200) != 0 && results.normal.v[2] >= 0.0 && results.normal.v[2] < 0.99900001;
  if ( hitStairs )
    *hitStairs = v21;
  return !results.allsolid && (fraction == 1.0 || v21);
}

/*
==============
Path_ReduceLookaheadAmount
==============
*/
void Path_ReduceLookaheadAmount(path_t *pPath, float maxLookaheadAmountIfReduce)
{
  int flags; 
  float v8; 

  flags = pPath->flags;
  if ( (flags & 0x1000) != 0 )
  {
    _XMM1 = LODWORD(FLOAT_0_75);
    _XMM0 = flags & 2;
    __asm
    {
      vpcmpeqd xmm4, xmm0, xmm2
      vblendvps xmm0, xmm1, xmm3, xmm4
    }
    v8 = *(float *)&_XMM0 * maxLookaheadAmountIfReduce;
    pPath->fLookaheadAmount = *(float *)&_XMM0 * maxLookaheadAmountIfReduce;
    flags = pPath->flags;
  }
  else
  {
    if ( pPath->wDodgeEntity == 2047 )
      v8 = maxLookaheadAmountIfReduce * 0.80000001;
    else
      v8 = maxLookaheadAmountIfReduce * 0.5625;
    pPath->fLookaheadAmount = v8;
  }
  if ( v8 < 0.001 )
    pPath->fLookaheadAmount = 0.001;
  pPath->flags = flags & 0xFFFFFBFC;
}

/*
==============
Path_RemoveCompletedPathPoints
==============
*/
void Path_RemoveCompletedPathPoints(path_t *pPath, int pathPointIndex)
{
  char v2; 
  char wDodgeCount; 
  char v5; 
  float fCurrLength; 
  float fOrigLength; 
  int v8; 
  char v9; 
  char v10; 

  v2 = pathPointIndex;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2619, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  wDodgeCount = pPath->wDodgeCount;
  v5 = v2 + 2;
  if ( wDodgeCount >= 0 )
  {
    v9 = v5 - pPath->wPathLen;
    pPath->wPathLen = v5;
    v10 = wDodgeCount + v9;
    if ( (char)(wDodgeCount + v9) < 0 )
      v10 = 0;
    pPath->wDodgeCount = v10;
    if ( v5 > 1 )
    {
      fCurrLength = pPath->fCurrLength;
      fOrigLength = *((float *)&pPath->pts[v5 - 1] - 2);
      if ( fCurrLength > fOrigLength )
      {
        v8 = 2636;
LABEL_13:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", v8, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, fOrigLength) )
          __debugbreak();
      }
    }
  }
  else
  {
    pPath->wPathLen = v5;
    if ( v5 > 1 )
    {
      fCurrLength = pPath->fCurrLength;
      fOrigLength = pPath->pts[v2].fOrigLength;
      if ( fCurrLength > fOrigLength )
      {
        v8 = 2624;
        goto LABEL_13;
      }
    }
  }
}

/*
==============
Path_SetLookaheadToStart
==============
*/
void Path_SetLookaheadToStart(path_t *pPath, const vec3_t *vStartPos, int bTrimAmount)
{
  float v3; 
  float v7; 
  __int128 v8; 
  float v9; 
  float v13; 
  char v14; 
  vec3_t inOutPos; 

  v3 = vStartPos->v[1];
  inOutPos.v[0] = vStartPos->v[0];
  inOutPos.v[2] = vStartPos->v[2];
  inOutPos.v[1] = v3;
  Path_LocalizePos(pPath, &inOutPos);
  v8 = LODWORD(pPath->vCurrPoint.v[0]);
  v7 = pPath->vCurrPoint.v[0] - inOutPos.v[0];
  pPath->lookaheadDir.v[0] = v7;
  v9 = pPath->vCurrPoint.v[1] - inOutPos.v[1];
  pPath->lookaheadDir.v[1] = v9;
  pPath->lookaheadDir.v[2] = pPath->vCurrPoint.v[2] - inOutPos.v[2];
  *(float *)&v8 = fsqrt((float)(v7 * v7) + (float)(v9 * v9));
  _XMM4 = v8;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  pPath->lookaheadDir.v[0] = v7 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v8 = (float)(1.0 / *(float *)&_XMM0) * pPath->lookaheadDir.v[1];
  v13 = 0.0;
  pPath->lookaheadDir.v[1] = *(float *)&v8;
  pPath->fLookaheadDist = *(float *)&_XMM4;
  if ( *(float *)&_XMM4 != 0.0 )
    v13 = pPath->lookaheadDir.v[2] / *(float *)&_XMM4;
  pPath->lookaheadDir.v[2] = v13;
  v14 = pPath->wPathLen - 1;
  pPath->fLookaheadDistToNextNode = 0.0;
  pPath->lookaheadNextNode = v14;
  pPath->pathChangeNotifyNode = -1;
  Path_UpdateLookaheadExtended(pPath, vStartPos, 0, bTrimAmount, 1, NULL, NULL);
}

/*
==============
Path_SubtractTrimmedAmount
==============
*/
void Path_SubtractTrimmedAmount(path_t *pPath, const vec3_t *vStartPos)
{
  float v3; 
  float v4; 
  pathpoint_t *v5; 
  float v6; 
  float v7; 
  float v8; 
  float fOrigLength; 
  float fCurrLength; 
  int v11; 
  __int128 fOrigLength_low; 
  __int128 v13; 
  vec2_t *p_fDir2D; 
  float v15; 
  float v16; 
  __int128 v17; 
  __int128 fLookaheadAmount_low; 
  vec3_t inOutPos; 

  if ( pPath->wPathLen != pPath->wOrigPathLen )
  {
    v3 = vStartPos->v[1];
    inOutPos.v[0] = vStartPos->v[0];
    v4 = vStartPos->v[2];
    inOutPos.v[1] = v3;
    inOutPos.v[2] = v4;
    Path_LocalizePos(pPath, &inOutPos);
    if ( pPath->wPathLen <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 453, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 1)", (const char *)&queryFormat, "pPath->wPathLen > 1") )
      __debugbreak();
    v5 = &pPath->pts[pPath->wPathLen - 2];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 348, ASSERT_TYPE_ASSERT, "(pt)", (const char *)&queryFormat, "pt") )
      __debugbreak();
    v6 = inOutPos.v[1];
    v7 = inOutPos.v[0];
    LODWORD(v8) = COERCE_UNSIGNED_INT((float)((float)(v5->vOrigPoint.v[1] - inOutPos.v[1]) * v5->fDir2D.v[0]) - (float)((float)(v5->vOrigPoint.v[0] - inOutPos.v[0]) * v5->fDir2D.v[1])) & _xmm;
    if ( v5->fOrigLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 457, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0") )
      __debugbreak();
    if ( pPath->fCurrLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 458, ASSERT_TYPE_ASSERT, "(pPath->fCurrLength > 0)", (const char *)&queryFormat, "pPath->fCurrLength > 0") )
      __debugbreak();
    fOrigLength = v5->fOrigLength;
    fCurrLength = pPath->fCurrLength;
    if ( fOrigLength < fCurrLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 459, ASSERT_TYPE_ASSERT, "( pt->fOrigLength ) >= ( pPath->fCurrLength )", "%s >= %s\n\t%g, %g", "pt->fOrigLength", "pPath->fCurrLength", fOrigLength, fCurrLength) )
      __debugbreak();
    v11 = pPath->wPathLen - 1;
    fOrigLength_low = LODWORD(v5->fOrigLength);
    *(float *)&fOrigLength_low = (float)(v5->fOrigLength - pPath->fCurrLength) * v8;
    v13 = fOrigLength_low;
    if ( v11 < pPath->wOrigPathLen - 1 )
    {
      p_fDir2D = &pPath->pts[v11].fDir2D;
      do
      {
        if ( p_fDir2D == (vec2_t *)12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 348, ASSERT_TYPE_ASSERT, "(pt)", (const char *)&queryFormat, "pt") )
          __debugbreak();
        LODWORD(v15) = COERCE_UNSIGNED_INT((float)((float)(p_fDir2D[-1].v[0] - v6) * p_fDir2D->v[0]) - (float)((float)(p_fDir2D[-2].v[1] - v7) * p_fDir2D->v[1])) & _xmm;
        if ( p_fDir2D[1].v[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 467, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0") )
          __debugbreak();
        v16 = v15 * p_fDir2D[1].v[0];
        ++v11;
        p_fDir2D = (vec2_t *)((char *)p_fDir2D + 28);
        v17 = v13;
        *(float *)&v17 = *(float *)&v13 + v16;
        v13 = v17;
      }
      while ( v11 < pPath->wOrigPathLen - 1 );
    }
    fLookaheadAmount_low = LODWORD(pPath->fLookaheadAmount);
    *(float *)&fLookaheadAmount_low = pPath->fLookaheadAmount - *(float *)&v13;
    _XMM1 = fLookaheadAmount_low;
    __asm { vmaxss  xmm2, xmm1, cs:__real@42800000 }
    pPath->fLookaheadAmount = *(float *)&_XMM2;
  }
}

/*
==============
Path_TraceHitStairs
==============
*/
bool Path_TraceHitStairs(const trace_t *trace)
{
  float v2; 
  bool result; 

  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2505, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  result = 0;
  if ( (trace->surfaceFlags & 0x200) != 0 )
  {
    v2 = trace->normal.v[2];
    if ( v2 >= 0.0 && v2 < 0.99900001 )
      return 1;
  }
  return result;
}

/*
==============
Path_TransferLookahead
==============
*/
void Path_TransferLookahead(path_t *pPath, const vec3_t *vStartPos)
{
  char wPathLen; 
  float fCurrLength; 
  float v6; 
  float v7; 
  float v8; 
  float fLookaheadAmount; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  int v15; 
  int v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v23; 
  float v24; 
  float v25; 
  float *v27; 
  __int128 v28; 
  __int128 v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  bool v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  __int128 v42; 
  const vec3_t *v48; 
  path_t *v49; 
  __int128 v51; 
  float v52; 
  float v53; 
  vec3_t *vWishDelta; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  vec3_t inOutPos; 

  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 528, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( pPath->wOrigPathLen != pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 529, ASSERT_TYPE_ASSERT, "(pPath->wOrigPathLen == pPath->wPathLen)", (const char *)&queryFormat, "pPath->wOrigPathLen == pPath->wPathLen") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode >= (unsigned int)pPath->wPathLen )
  {
    LODWORD(vWishDelta) = pPath->wNegotiationStartNode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( pPath->wNegotiationStartNode ) < (unsigned)( pPath->wPathLen )", "pPath->wNegotiationStartNode doesn't index pPath->wPathLen\n\t%i not in [0, %i)", vWishDelta, pPath->wPathLen) )
      __debugbreak();
  }
  wPathLen = pPath->wPathLen;
  if ( wPathLen > 1 )
  {
    fCurrLength = pPath->fCurrLength;
    v6 = *((float *)&pPath->pts[wPathLen - 1] - 2);
    if ( fCurrLength > v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 531, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, v6) )
      __debugbreak();
  }
  v7 = vStartPos->v[1];
  inOutPos.v[0] = vStartPos->v[0];
  v8 = vStartPos->v[2];
  inOutPos.v[1] = v7;
  inOutPos.v[2] = v8;
  Path_LocalizePos(pPath, &inOutPos);
  if ( pPath->fLookaheadDist == 0.0 || pPath->lookaheadDir.v[0] == 0.0 && pPath->lookaheadDir.v[1] == 0.0 )
    goto LABEL_63;
  fLookaheadAmount = pPath->fLookaheadAmount;
  v60 = fLookaheadAmount;
  v10 = 0.0;
  if ( fLookaheadAmount <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 544, ASSERT_TYPE_ASSERT, "( ( amount > 0 ) )", "( amount ) = %g", fLookaheadAmount) )
    __debugbreak();
  v11 = pPath->lookaheadDir.v[0];
  v12 = pPath->lookaheadDir.v[1];
  v61 = v11;
  if ( v11 == 0.0 && v12 == 0.0 && (pPath->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 546, ASSERT_TYPE_ASSERT, "(Vec2NotZero( vDir ) || pPath->flags & (1 << 16))", (const char *)&queryFormat, "Vec2NotZero( vDir ) || pPath->flags & PATH_FLAG_3D") )
    __debugbreak();
  v13 = inOutPos.v[0];
  v14 = inOutPos.v[1];
  v15 = 1;
  v16 = pPath->wPathLen - 2;
  v18 = LODWORD(pPath->vCurrPoint.v[1]);
  v17 = pPath->vCurrPoint.v[1] - inOutPos.v[1];
  v19 = pPath->vCurrPoint.v[0] - inOutPos.v[0];
  *(float *)&v18 = fsqrt((float)(v17 * v17) + (float)(v19 * v19));
  _XMM5 = v18;
  __asm
  {
    vcmpless xmm0, xmm5, cs:__real@80000000
    vblendvps xmm0, xmm5, xmm1, xmm0
  }
  v23 = v19 * (float)(1.0 / *(float *)&_XMM0);
  v24 = v17 * (float)(1.0 / *(float *)&_XMM0);
  v25 = (float)((float)(v11 * v24) - (float)(v12 * v23)) * *(float *)&v18;
  v59 = (float)(v12 * v24) + (float)(v11 * v23);
  v58 = v25;
  _XMM14 = 0i64;
  if ( v16 < pPath->wNegotiationStartNode )
  {
LABEL_63:
    v48 = vStartPos;
    v49 = pPath;
  }
  else
  {
    v27 = (float *)&pPath->pts[v16].fDir2D + 1;
    while ( 1 )
    {
      v29 = *((unsigned int *)v27 - 4);
      *(float *)&v29 = *(v27 - 4) - v13;
      v28 = v29;
      v31 = *(v27 - 3) - v14;
      v30 = v31;
      if ( v15 )
        v32 = pPath->fCurrLength;
      else
        v32 = v27[1];
      if ( *(v27 - 1) == 0.0 && *v27 == 0.0 && (pPath->flags & 0x10000) == 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 562, ASSERT_TYPE_ASSERT, "(Vec2NotZero( pt->fDir2D ) || pPath->flags & (1 << 16))", (const char *)&queryFormat, "Vec2NotZero( pt->fDir2D ) || pPath->flags & PATH_FLAG_3D") )
          __debugbreak();
        v25 = v58;
      }
      v33 = (float)(v31 * *(v27 - 1)) - (float)(*(float *)&v28 * *v27);
      LODWORD(v34) = LODWORD(v33) & _xmm;
      v35 = (float)((float)((float)(v12 * *(v27 - 1)) - (float)(v11 * *v27)) * v33) <= 0.0;
      v37 = (float)(v11 * v31) - (float)(v12 * *(float *)&v28);
      v36 = v37;
      if ( !v35 && (float)(v37 * v25) < 0.0 )
      {
        Path_UpdateLookaheadExtended(pPath, vStartPos, 0, 1, 1, NULL, NULL);
        return;
      }
      if ( v32 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 574, ASSERT_TYPE_ASSERT, "(fLength > 0)", (const char *)&queryFormat, "fLength > 0") )
        __debugbreak();
      v10 = (float)(v34 * v32) + v10;
      if ( v10 >= v60 )
        break;
      --v16;
      v38 = v28;
      *(float *)&v38 = fsqrt((float)(*(float *)&v28 * *(float *)&v28) + (float)(v30 * v30));
      _XMM2 = v38;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm10, xmm0
      }
      v42 = v28;
      v25 = v36;
      v11 = v61;
      *(float *)&v42 = (float)((float)(*(float *)&v28 * (float)(1.0 / *(float *)&_XMM0)) * v61) + (float)((float)(v30 * (float)(1.0 / *(float *)&_XMM0)) * v12);
      _XMM4 = v42;
      _XMM2 = LODWORD(v59);
      __asm
      {
        vcmpless xmm0, xmm2, xmm4
        vblendvps xmm1, xmm14, xmm9, xmm0
      }
      v27 -= 7;
      v15 = 0;
      __asm { vmaxss  xmm2, xmm4, xmm2 }
      _XMM14 = _XMM1;
      v58 = v25;
      v59 = *(float *)&_XMM2;
      if ( v16 < pPath->wNegotiationStartNode )
      {
        if ( *(float *)&_XMM1 == v10 )
          goto LABEL_63;
        v48 = vStartPos;
        v49 = pPath;
        goto LABEL_47;
      }
      v13 = inOutPos.v[0];
      v14 = inOutPos.v[1];
    }
    if ( v33 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 578, ASSERT_TYPE_ASSERT, "(height)", (const char *)&queryFormat, "height") )
      __debugbreak();
    if ( v32 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 579, ASSERT_TYPE_ASSERT, "(fLength > 0)", (const char *)&queryFormat, "fLength > 0") )
      __debugbreak();
    if ( *(v27 - 1) == 0.0 && *v27 == 0.0 && (pPath->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 583, ASSERT_TYPE_ASSERT, "(Vec2NotZero( pt->fDir2D ) || pPath->flags & (1 << 16))", (const char *)&queryFormat, "Vec2NotZero( pt->fDir2D ) || pPath->flags & PATH_FLAG_3D") )
      __debugbreak();
    v51 = LODWORD(v60);
    *(float *)&v51 = (float)(v60 - v10) / v34;
    v52 = (float)(*(float *)&v51 * *(v27 - 1)) + *(v27 - 4);
    v53 = (float)((float)(*(float *)&v51 * *v27) + *(v27 - 3)) - inOutPos.v[1];
    *(float *)&v51 = fsqrt((float)(v53 * v53) + (float)((float)(v52 - inOutPos.v[0]) * (float)(v52 - inOutPos.v[0])));
    _XMM3 = v51;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v48 = vStartPos;
    v49 = pPath;
    if ( (float)((float)((float)(v53 * (float)(1.0 / *(float *)&_XMM0)) * v12) + (float)((float)((float)(v52 - inOutPos.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * v61)) < v59 )
    {
LABEL_47:
      Path_SetLookaheadToStart(v49, v48, 1);
      if ( (pPath->flags & 2) == 0 && *(float *)&_XMM14 < pPath->fLookaheadAmount )
      {
        __asm { vmaxss  xmm0, xmm14, cs:__real@42800000 }
        pPath->fLookaheadAmount = *(float *)&_XMM0;
      }
      return;
    }
  }
  Path_SetLookaheadToStart(v49, v48, 0);
}

/*
==============
Path_TrimCompletedPath
==============
*/
void Path_TrimCompletedPath(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vLocalWishDelta)
{
  char wPathLen; 
  float fCurrLength; 
  float v8; 
  __int128 v9; 
  float v10; 
  __int128 v11; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  int v20; 
  float *v21; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  pathpoint_t *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  bool v35; 
  int v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  float v45; 
  float v46; 
  float fOrigLength; 
  float v48; 
  __int64 v49; 
  __int64 v50; 
  float v51; 
  float v52; 
  vec3_t inOutPos; 

  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2665, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( pPath->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2666, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2667, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( pPath->wNegotiationStartNode >= pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2668, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->wNegotiationStartNode < pPath->wPathLen") )
    __debugbreak();
  wPathLen = pPath->wPathLen;
  if ( wPathLen > 1 )
  {
    fCurrLength = pPath->fCurrLength;
    v8 = *((float *)&pPath->pts[wPathLen - 1] - 2);
    if ( fCurrLength > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2669, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, v8) )
      __debugbreak();
  }
  if ( vLocalWishDelta )
  {
    v9 = LODWORD(vLocalWishDelta->v[1]);
    v10 = vLocalWishDelta->v[2];
    v11 = v9;
    *(float *)&v11 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(vLocalWishDelta->v[0] * vLocalWishDelta->v[0])) + (float)(v10 * v10));
    _XMM3 = v11;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm12, xmm0
    }
    v15 = vLocalWishDelta->v[0] * (float)(1.0 / *(float *)&_XMM0);
    v16 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
    v17 = v10 * (float)(1.0 / *(float *)&_XMM0);
  }
  else
  {
    v15 = pPath->lookaheadDir.v[0];
    v16 = pPath->lookaheadDir.v[1];
    v17 = pPath->lookaheadDir.v[2];
  }
  v18 = vStartPos->v[1];
  inOutPos.v[0] = vStartPos->v[0];
  inOutPos.v[2] = vStartPos->v[2];
  inOutPos.v[1] = v18;
  Path_LocalizePos(pPath, &inOutPos);
  v19 = 0;
  v20 = pPath->wPathLen - 2;
  if ( v20 >= pPath->wNegotiationStartNode )
  {
    v21 = &pPath->pts[v20].vOrigPoint.v[2];
    do
    {
      if ( (float)((float)((float)(v16 * (float)(*(v21 - 1) - inOutPos.v[1])) + (float)(v15 * (float)(*(v21 - 2) - inOutPos.v[0]))) + (float)(v17 * (float)(*v21 - inOutPos.v[2]))) > 0.0 )
        break;
      ++v19;
      --v20;
      v21 -= 7;
    }
    while ( v20 >= pPath->wNegotiationStartNode );
    if ( v19 )
    {
      v22 = pPath->wPathLen - v19;
      v23 = v22 - 2;
      if ( v22 - 2 < pPath->wNegotiationStartNode )
        return;
      v24 = v22;
      v25 = v22;
      pPath->vCurrPoint.v[0] = pPath->pts[v25 - 1].vOrigPoint.v[0];
      pPath->vCurrPoint.v[1] = pPath->pts[v25 - 1].vOrigPoint.v[1];
      pPath->vCurrPoint.v[2] = pPath->pts[v25 - 1].vOrigPoint.v[2];
      pPath->fCurrLength = *((float *)&pPath->pts[v24 - 1] - 2);
      Path_RemoveCompletedPathPoints(pPath, v23);
    }
  }
  v26 = pPath->wPathLen;
  v27 = v26 - 2;
  if ( (int)v26 - 2 >= pPath->wNegotiationStartNode )
  {
    v28 = pPath->wPathLen;
    v29 = &pPath->pts[v26 - 2];
    v52 = (float)((float)((float)(v29->vOrigPoint.v[0] - inOutPos.v[0]) * v15) + (float)((float)(v29->vOrigPoint.v[1] - inOutPos.v[1]) * v16)) + (float)((float)(v29->vOrigPoint.v[2] - inOutPos.v[2]) * v17);
    if ( v52 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2712, ASSERT_TYPE_ASSERT, "( ( d2 > 0 ) )", "( d2 ) = %g", v52) )
      __debugbreak();
    v30 = pPath->fCurrLength;
    v51 = (float)((float)((float)((float)(pPath->vCurrPoint.v[0] - inOutPos.v[0]) * v15) + (float)((float)(pPath->vCurrPoint.v[1] - inOutPos.v[1]) * v16)) + (float)((float)(pPath->vCurrPoint.v[2] - inOutPos.v[2]) * v17)) - 0.000099999997;
    if ( v51 > 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2720, ASSERT_TYPE_ASSERT, "( ( d1 <= 0 ) )", "( d1 ) = %g", v51) )
      __debugbreak();
    if ( v52 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2721, ASSERT_TYPE_ASSERT, "( ( d2 > 0 ) )", "( d2 ) = %g", v52) )
      __debugbreak();
    if ( (float)(v51 - v52) >= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2722, ASSERT_TYPE_ASSERT, "(d1 - d2 < 0)", "%s\n\t%g %g\n", "d1 - d2 < 0", v51, v52) )
      __debugbreak();
    v32 = v51 / (float)(v51 - v52);
    v31 = v32;
    if ( v32 < 0.0 )
    {
      LODWORD(v50) = pPath->wPathLen;
      LODWORD(v49) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2726, ASSERT_TYPE_ASSERT, "(fraction >= 0)", "%s\n\ti: %d, pPath->wPathLen: %d, d1: %f, d2: %f, fraction: %f", "fraction >= 0", v49, v50, v51, v52, v32) )
        __debugbreak();
    }
    if ( v32 > 1.0 )
    {
      LODWORD(v50) = pPath->wPathLen;
      LODWORD(v49) = v27;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2729, ASSERT_TYPE_ASSERT, "(fraction <= 1.f)", "%s\n\ti: %d, pPath->wPathLen: %d, d1: %f, d2: %f, fraction: %f", "fraction <= 1.f", v49, v50, v51, v52, v32) )
        __debugbreak();
    }
    if ( (LODWORD(v30) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2731, ASSERT_TYPE_SANITY, "( !IS_NAN( fLength ) )", (const char *)&queryFormat, "!IS_NAN( fLength )") )
      __debugbreak();
    if ( v30 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2732, ASSERT_TYPE_ASSERT, "(fLength > 0)", (const char *)&queryFormat, "fLength > 0") )
      __debugbreak();
    v34 = v32 * v30;
    v33 = v34;
    v35 = (float)(v31 * v30) < v30;
    if ( (float)(v31 * v30) > v30 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2735, ASSERT_TYPE_ASSERT, "(dist <= fLength)", (const char *)&queryFormat, "dist <= fLength") )
        __debugbreak();
      v35 = v34 < v30;
    }
    if ( v35 )
    {
      if ( v29->fDir2D.v[0] == 0.0 && v29->fDir2D.v[1] == 0.0 && (pPath->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2751, ASSERT_TYPE_ASSERT, "(pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & (1 << 16))", (const char *)&queryFormat, "pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & PATH_FLAG_3D") )
        __debugbreak();
      if ( v34 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2752, ASSERT_TYPE_ASSERT, "(dist >= 0)", (const char *)&queryFormat, "dist >= 0") )
        __debugbreak();
      if ( (pPath->flags & 0x10000) != 0 )
      {
        v37 = pPath->vCurrPoint.v[0];
        v39 = LODWORD(v29->vOrigPoint.v[1]);
        v38 = v29->vOrigPoint.v[1] - pPath->vCurrPoint.v[1];
        v40 = v29->vOrigPoint.v[0] - v37;
        v41 = v29->vOrigPoint.v[2] - pPath->vCurrPoint.v[2];
        *(float *)&v39 = fsqrt((float)((float)(v38 * v38) + (float)(v40 * v40)) + (float)(v41 * v41));
        _XMM1 = v39;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm12, xmm0
        }
        pPath->vCurrPoint.v[0] = (float)((float)(v40 * (float)(1.0 / *(float *)&_XMM0)) * v33) + v37;
        pPath->vCurrPoint.v[1] = (float)((float)(v38 * (float)(1.0 / *(float *)&_XMM0)) * v33) + pPath->vCurrPoint.v[1];
        v45 = (float)((float)(v41 * (float)(1.0 / *(float *)&_XMM0)) * v33) + pPath->vCurrPoint.v[2];
      }
      else
      {
        pPath->vCurrPoint.v[0] = (float)(v34 * v29->fDir2D.v[0]) + pPath->vCurrPoint.v[0];
        pPath->vCurrPoint.v[1] = (float)(v34 * v29->fDir2D.v[1]) + pPath->vCurrPoint.v[1];
        v45 = (float)((float)(v29->vOrigPoint.v[2] - pPath->vCurrPoint.v[2]) * v31) + pPath->vCurrPoint.v[2];
      }
      pPath->vCurrPoint.v[2] = v45;
      pPath->fCurrLength = v30 - v33;
      if ( (COERCE_UNSIGNED_INT(v30 - v33) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2769, ASSERT_TYPE_SANITY, "( !IS_NAN( pPath->fCurrLength ) )", (const char *)&queryFormat, "!IS_NAN( pPath->fCurrLength )") )
        __debugbreak();
      v46 = pPath->fCurrLength;
      if ( v46 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2770, ASSERT_TYPE_ASSERT, "(pPath->fCurrLength > 0)", "%s\n\tfCurrLength: %f, fLength: %f, dist: %f, fraction: %f", "pPath->fCurrLength > 0", v46, v30, v33, v31) )
        __debugbreak();
      fOrigLength = v29->fOrigLength;
      v48 = pPath->fCurrLength;
      if ( fOrigLength < v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2771, ASSERT_TYPE_ASSERT, "( pt->fOrigLength ) >= ( pPath->fCurrLength )", "%s >= %s\n\t%g, %g", "pt->fOrigLength", "pPath->fCurrLength", fOrigLength, v48) )
        __debugbreak();
      v36 = v27;
    }
    else
    {
      if ( v27 <= pPath->wNegotiationStartNode )
        return;
      pPath->vCurrPoint.v[0] = v29->vOrigPoint.v[0];
      pPath->vCurrPoint.v[1] = v29->vOrigPoint.v[1];
      pPath->vCurrPoint.v[2] = v29->vOrigPoint.v[2];
      pPath->fCurrLength = *((float *)&pPath->pts[v28 - 2] - 2);
      v36 = v27 - 1;
    }
    Path_RemoveCompletedPathPoints(pPath, v36);
  }
}

/*
==============
Path_UpdateLookahead
==============
*/
void Path_UpdateLookahead(path_t *pPath, const vec3_t *vStartPos, int bReduceLookaheadAmount, int bTrimAmount, int bAllowBacktrack, const vec3_t *vWishDelta)
{
  Path_UpdateLookaheadExtended(pPath, vStartPos, bReduceLookaheadAmount, bTrimAmount, bAllowBacktrack, vWishDelta, NULL);
}

/*
==============
Path_UpdateLookaheadAmount
==============
*/
void Path_UpdateLookaheadAmount(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vLookaheadPos, int bReduceLookaheadAmount, float dist, int lookaheadNextNode, float maxLookaheadAmountIfReduce, const Bounds *bounds)
{
  float v12; 
  int wPathLen; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  int v20; 
  int v21; 
  float fCurrLength; 
  int v23; 
  __int128 fLookaheadAmount_low; 
  int flags; 
  int v28; 
  __int128 v29; 
  __int128 v30; 
  float v31; 
  __int128 v32; 
  __int128 v33; 
  float v40; 
  char v41; 
  float v42; 
  float v43; 
  vec3_t inOutPos; 
  vec3_t vEndPos; 

  if ( pPath->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2528, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  v12 = vStartPos->v[1];
  inOutPos.v[0] = vStartPos->v[0];
  inOutPos.v[2] = vStartPos->v[2];
  inOutPos.v[1] = v12;
  Path_LocalizePos(pPath, &inOutPos);
  wPathLen = pPath->wPathLen;
  if ( pPath->lookaheadNextNode >= wPathLen - 1 )
  {
    pPath->fLookaheadDistToNextNode = 0.0;
    pPath->lookaheadNextNode = wPathLen - 1;
  }
  v14 = inOutPos.v[1];
  v15 = inOutPos.v[0];
  if ( bReduceLookaheadAmount )
  {
    Path_ReduceLookaheadAmount(pPath, maxLookaheadAmountIfReduce);
    v16 = LODWORD(vLookaheadPos->v[0]);
    v17 = vLookaheadPos->v[1];
    v18 = LODWORD(vLookaheadPos->v[2]);
    *(_QWORD *)pPath->lookaheadPos.v = 0i64;
    pPath->lookaheadPos.v[2] = 0.0;
    goto LABEL_34;
  }
  v19 = vLookaheadPos->v[1];
  vEndPos.v[0] = vLookaheadPos->v[0];
  vEndPos.v[2] = vLookaheadPos->v[2];
  vEndPos.v[1] = v19;
  Path_WorldifyPos(pPath, &vEndPos);
  if ( Path_LookaheadPredictionTraceExtended(pPath, vStartPos, &vEndPos, bounds) )
  {
    pPath->lookaheadPos.v[0] = vLookaheadPos->v[0];
    pPath->lookaheadPos.v[1] = vLookaheadPos->v[1];
    pPath->lookaheadPos.v[2] = vLookaheadPos->v[2];
    fLookaheadAmount_low = LODWORD(pPath->fLookaheadAmount);
    *(float *)&fLookaheadAmount_low = (float)(*(float *)&fLookaheadAmount_low * 1.1764705) + 6.4000001;
    _XMM2 = fLookaheadAmount_low;
    __asm { vminss  xmm3, xmm2, cs:__real@47800000 }
    flags = pPath->flags;
    v16 = LODWORD(vLookaheadPos->v[0]);
    v17 = vLookaheadPos->v[1];
    v18 = LODWORD(vLookaheadPos->v[2]);
    pPath->fLookaheadAmount = *(float *)&_XMM3;
    if ( (flags & 2) != 0 )
      v28 = flags | 0x40400;
    else
      v28 = flags | 0x40002;
    pPath->flags = v28;
    goto LABEL_34;
  }
  v16 = LODWORD(pPath->lookaheadPos.v[0]);
  if ( *(float *)&v16 == 0.0 && pPath->lookaheadPos.v[1] == 0.0 || (v17 = pPath->lookaheadPos.v[1], (float)((float)((float)(v14 - v17) * (float)(v14 - v17)) + (float)((float)(v15 - *(float *)&v16) * (float)(v15 - *(float *)&v16))) <= 1.0) )
  {
    v16 = LODWORD(vLookaheadPos->v[0]);
    v17 = vLookaheadPos->v[1];
    v18 = LODWORD(vLookaheadPos->v[2]);
    *(_QWORD *)pPath->lookaheadPos.v = 0i64;
    pPath->lookaheadPos.v[2] = 0.0;
  }
  else
  {
    v18 = LODWORD(pPath->lookaheadPos.v[2]);
  }
  if ( pPath->lookaheadNextNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2563, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode >= 0)", (const char *)&queryFormat, "pPath->lookaheadNextNode >= 0") )
    __debugbreak();
  v20 = pPath->wPathLen;
  v21 = pPath->lookaheadNextNode;
  if ( v21 == v20 - 2 )
    fCurrLength = pPath->fCurrLength;
  else
    fCurrLength = pPath->pts[(unsigned __int8)v21].fOrigLength;
  if ( (pPath->flags & 2) == 0 || (char)v21 >= (char)v20 || fCurrLength < pPath->fLookaheadDistToNextNode )
  {
    Path_ReduceLookaheadAmount(pPath, maxLookaheadAmountIfReduce);
LABEL_34:
    v30 = v18;
    *(float *)&v30 = *(float *)&v18 - inOutPos.v[2];
    v29 = v30;
    v32 = v16;
    v31 = *(float *)&v16 - v15;
    pPath->lookaheadDir.v[1] = v17 - v14;
    pPath->lookaheadDir.v[0] = *(float *)&v16 - v15;
    pPath->lookaheadDir.v[2] = *(float *)&v29;
    *(float *)&v32 = (float)(v31 * v31) + (float)((float)(v17 - v14) * (float)(v17 - v14));
    if ( (pPath->flags & 0x10000) != 0 )
    {
      v33 = v29;
      *(float *)&v33 = fsqrt((float)(*(float *)&v29 * *(float *)&v29) + (float)((float)(v31 * v31) + (float)((float)(v17 - v14) * (float)(v17 - v14))));
      _XMM3 = v33;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      pPath->lookaheadDir.v[0] = v31 * (float)(1.0 / *(float *)&_XMM0);
      pPath->lookaheadDir.v[1] = (float)(1.0 / *(float *)&_XMM0) * pPath->lookaheadDir.v[1];
      pPath->lookaheadDir.v[2] = (float)(1.0 / *(float *)&_XMM0) * pPath->lookaheadDir.v[2];
      pPath->fLookaheadDist = *(float *)&v33;
    }
    else
    {
      *(float *)&v32 = fsqrt(*(float *)&v32);
      _XMM2 = v32;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm10, xmm0
      }
      pPath->lookaheadDir.v[0] = v31 * (float)(1.0 / *(float *)&_XMM0);
      pPath->lookaheadDir.v[1] = (float)(1.0 / *(float *)&_XMM0) * pPath->lookaheadDir.v[1];
      pPath->fLookaheadDist = *(float *)&v32;
      if ( *(float *)&v32 == 0.0 )
        v40 = 0.0;
      else
        v40 = pPath->lookaheadDir.v[2] / *(float *)&v32;
      pPath->lookaheadDir.v[2] = v40;
    }
    pPath->fLookaheadDistToNextNode = dist;
    pPath->lookaheadNextNode = lookaheadNextNode;
    if ( pPath->wNegotiationStartNode > (char)lookaheadNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2599, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode <= pPath->lookaheadNextNode)", (const char *)&queryFormat, "pPath->wNegotiationStartNode <= pPath->lookaheadNextNode") )
      __debugbreak();
    if ( pPath->lookaheadNextNode >= pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2600, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
      __debugbreak();
    if ( pPath->pts[(unsigned __int8)pPath->lookaheadNextNode].fOrigLength <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2601, ASSERT_TYPE_ASSERT, "(pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength > 0)", (const char *)&queryFormat, "pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength > 0") )
      __debugbreak();
    if ( pPath->pts[(unsigned __int8)pPath->lookaheadNextNode].fOrigLength < pPath->fLookaheadDistToNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2602, ASSERT_TYPE_ASSERT, "(pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength)", (const char *)&queryFormat, "pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength") )
      __debugbreak();
    v41 = pPath->wPathLen;
    if ( v41 > 1 )
    {
      v42 = pPath->fCurrLength;
      v43 = *((float *)&pPath->pts[v41 - 1] - 2);
      if ( v42 > v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2603, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v42, v43) )
        __debugbreak();
    }
    if ( pPath->fLookaheadDistToNextNode != 0.0 && pPath->lookaheadNextNode >= pPath->wPathLen - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2604, ASSERT_TYPE_ASSERT, "(!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1))", (const char *)&queryFormat, "!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1)") )
      __debugbreak();
    if ( pPath->lookaheadNextNode >= pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2605, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
      __debugbreak();
    if ( pPath->fLookaheadDistToNextNode != 0.0 && pPath->lookaheadNextNode >= pPath->wPathLen - 1 )
    {
      v23 = 2606;
LABEL_66:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", v23, ASSERT_TYPE_ASSERT, "(!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1))", (const char *)&queryFormat, "!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1)") )
        __debugbreak();
      return;
    }
    return;
  }
  Path_ReduceLookaheadAmount(pPath, maxLookaheadAmountIfReduce);
  if ( pPath->lookaheadNextNode >= pPath->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2569, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
    __debugbreak();
  if ( pPath->fLookaheadDistToNextNode != 0.0 && pPath->lookaheadNextNode >= pPath->wPathLen - 1 )
  {
    v23 = 2570;
    goto LABEL_66;
  }
}

/*
==============
Path_UpdateLookaheadExtended
==============
*/
void Path_UpdateLookaheadExtended(path_t *pPath, const vec3_t *vStartPos, int bReduceLookaheadAmount, int bTrimAmount, int bAllowBacktrack, const vec3_t *vWishDelta, const Bounds *bounds)
{
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  char wPathLen; 
  float fCurrLength; 
  float v19; 
  float v20; 
  int flags; 
  int wNegotiationStartNode; 
  int v23; 
  float v24; 
  bool v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v30; 
  float v31; 
  __int128 v32; 
  unsigned int parentIndex; 
  gentity_s *v34; 
  __int128 v35; 
  vec3_t *p_inOutPos; 
  __int128 v37; 
  float v41; 
  float v43; 
  float v44; 
  __int64 v45; 
  char v48; 
  __int64 v49; 
  pathnode_t *v50; 
  __int64 totalLinkCount; 
  pathlink_s *Links; 
  int v53; 
  float v54; 
  unsigned int v55; 
  pathnode_t *pNodeTo; 
  float v57; 
  float v58; 
  float v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  float v72; 
  char v73; 
  PathFindInput pathFindInput; 
  CustomSearchInfo_FindPath custom; 
  vec3_t inOutPos; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v86; 

  Profile_Begin(259);
  if ( pPath->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3178, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( pPath->wPathLen <= pPath->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3179, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > pPath->wNegotiationStartNode)", (const char *)&queryFormat, "pPath->wPathLen > pPath->wNegotiationStartNode") )
    __debugbreak();
  wPathLen = pPath->wPathLen;
  if ( wPathLen > 1 )
  {
    fCurrLength = pPath->fCurrLength;
    v19 = *((float *)&pPath->pts[wPathLen - 1] - 2);
    if ( fCurrLength > v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3180, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", fCurrLength, v19) )
      __debugbreak();
  }
  v20 = vStartPos->v[1];
  inOutPos.v[0] = vStartPos->v[0];
  inOutPos.v[2] = vStartPos->v[2];
  inOutPos.v[1] = v20;
  Path_LocalizePos(pPath, &inOutPos);
  flags = pPath->flags & 0xFFFF7FDF;
  wNegotiationStartNode = pPath->wNegotiationStartNode;
  v23 = pPath->wPathLen - 1;
  pPath->flags = flags;
  v24 = pPath->vCurrPoint.v[0];
  if ( wNegotiationStartNode == v23 )
  {
    v59 = v24 - inOutPos.v[0];
    pPath->lookaheadDir.v[0] = v24 - inOutPos.v[0];
    v61 = LODWORD(pPath->vCurrPoint.v[1]);
    *(float *)&v61 = pPath->vCurrPoint.v[1] - inOutPos.v[1];
    v60 = v61;
    pPath->lookaheadDir.v[1] = *(float *)&v61;
    v63 = LODWORD(pPath->vCurrPoint.v[2]);
    *(float *)&v63 = pPath->vCurrPoint.v[2] - inOutPos.v[2];
    v62 = v63;
    v64 = v60;
    *(float *)&v64 = (float)(*(float *)&v60 * *(float *)&v60) + (float)(v59 * v59);
    pPath->lookaheadDir.v[2] = *(float *)&v62;
    if ( (flags & 0x10000) != 0 )
    {
      v65 = v62;
      *(float *)&v65 = fsqrt((float)(*(float *)&v62 * *(float *)&v62) + (float)((float)(*(float *)&v60 * *(float *)&v60) + (float)(v59 * v59)));
      _XMM3 = v65;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      pPath->lookaheadDir.v[0] = v59 * (float)(1.0 / *(float *)&_XMM0);
      pPath->lookaheadDir.v[1] = (float)(1.0 / *(float *)&_XMM0) * pPath->lookaheadDir.v[1];
      pPath->lookaheadDir.v[2] = (float)(1.0 / *(float *)&_XMM0) * pPath->lookaheadDir.v[2];
      pPath->fLookaheadDist = *(float *)&v65;
    }
    else
    {
      *(float *)&v64 = fsqrt(*(float *)&v64);
      _XMM3 = v64;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      pPath->lookaheadDir.v[0] = v59 * (float)(1.0 / *(float *)&_XMM0);
      v72 = 0.0;
      pPath->lookaheadDir.v[1] = (float)(1.0 / *(float *)&_XMM0) * pPath->lookaheadDir.v[1];
      pPath->fLookaheadDist = *(float *)&v64;
      if ( *(float *)&v64 != 0.0 )
        v72 = pPath->lookaheadDir.v[2] / *(float *)&v64;
      pPath->lookaheadDir.v[2] = v72;
    }
    v73 = pPath->wNegotiationStartNode;
    pPath->flags |= 0x41u;
    pPath->fLookaheadDistToNextNode = 0.0;
    pPath->lookaheadNextNode = v73;
  }
  else
  {
    v25 = 0;
    v86 = v7;
    v85 = v8;
    v82 = v11;
    v81 = v12;
    v80 = v13;
    v26 = v24 - inOutPos.v[0];
    v27 = pPath->vCurrPoint.v[2] - inOutPos.v[2];
    v28 = pPath->vCurrPoint.v[1] - inOutPos.v[1];
    _XMM6 = 0i64;
    if ( !vWishDelta || (v30 = LODWORD(vWishDelta->v[0]), *(float *)&v30 == 0.0) && vWishDelta->v[1] == 0.0 && vWishDelta->v[2] == 0.0 )
    {
      *(float *)&_XMM5 = pPath->lookaheadDir.v[2];
      v43 = pPath->lookaheadDir.v[0];
      v44 = pPath->lookaheadDir.v[1];
      v45 = 0i64;
      LODWORD(inOutPos.v[2]) = _XMM5;
      p_inOutPos = NULL;
    }
    else
    {
      v84 = v9;
      v31 = vWishDelta->v[2];
      v83 = v10;
      v32 = LODWORD(vWishDelta->v[1]);
      parentIndex = pPath->parentIndex;
      if ( parentIndex )
      {
        if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 237, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
          __debugbreak();
        v34 = &g_entities[pPath->parentIndex];
        if ( G_IsEntityInUse(pPath->parentIndex) )
        {
          AnglesToAxis(&v34->r.currentAngles, &axis);
          MatrixInverse(&axis, &out);
          v35 = v30;
          *(float *)&v35 = *(float *)&v30 * out.m[0].v[1];
          *(float *)&v30 = (float)((float)(*(float *)&v32 * out.m[1].v[0]) + (float)(*(float *)&v30 * out.m[0].v[0])) + (float)(v31 * out.m[2].v[0]);
          *(float *)&v35 = (float)(*(float *)&v35 + (float)(*(float *)&v32 * out.m[1].v[1])) + (float)(v31 * out.m[2].v[1]);
          v32 = v35;
        }
      }
      flags = pPath->flags;
      p_inOutPos = &inOutPos;
      v37 = v32;
      *(float *)&v37 = fsqrt((float)(*(float *)&v32 * *(float *)&v32) + (float)(*(float *)&v30 * *(float *)&v30));
      _XMM2 = v37;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm13, xmm0
      }
      v41 = 1.0 / *(float *)&_XMM0;
      _XMM0 = pPath->parentIndex;
      v43 = v41 * *(float *)&v30;
      v44 = v41 * *(float *)&v32;
      v45 = 0i64;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm5, xmm6, xmm8, xmm2
      }
      *(float *)&v37 = (float)((float)(v41 * *(float *)&v32) * pPath->lookaheadDir.v[1]) + (float)((float)(v41 * *(float *)&v30) * pPath->lookaheadDir.v[0]);
      inOutPos.v[2] = *(float *)&_XMM5;
      v25 = *(float *)&v37 <= 0.079999998;
    }
    inOutPos.v[1] = v44;
    inOutPos.v[0] = v43;
    if ( (flags & 0x40000) == 0 && level.time - pPath->iPathTime <= 250 )
      v25 = 1;
    if ( (float)((float)((float)(v44 * v28) + (float)(v43 * v26)) + (float)(*(float *)&_XMM5 * v27)) > 0.0 )
    {
      if ( bAllowBacktrack && pPath->fLookaheadAmount >= 64.0 )
        Path_BacktrackCompletedPath(pPath, vStartPos, p_inOutPos);
      goto LABEL_61;
    }
    if ( pPath->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2100, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
      __debugbreak();
    v48 = pPath->wPathLen;
    if ( v48 < 1 )
      goto LABEL_37;
    v49 = v48;
    v50 = Path_ConvertIndexToNode(pPath->pts[v48 - 1].iNodeNum);
    totalLinkCount = v50->constant.totalLinkCount;
    if ( v50->dynamic.wLinkCount == (_DWORD)totalLinkCount || !v50->constant.totalLinkCount )
      goto LABEL_37;
    Links = v50->constant.Links;
    while ( Links->nodeNum != *((_WORD *)&pPath->pts[v49 - 1] - 2) )
    {
      ++v45;
      ++Links;
      if ( v45 >= totalLinkCount )
        goto LABEL_37;
    }
    if ( Links->disconnectCount )
    {
      v53 = pPath->flags;
    }
    else
    {
LABEL_37:
      v53 = pPath->flags;
      if ( (v53 & 4) == 0 || pPath->wPathLen > 8 )
        goto LABEL_41;
    }
    if ( (v53 & 0x80000) != 0 )
    {
      v53 |= 0x100000u;
      pPath->flags = v53;
LABEL_41:
      if ( !v25 && ((v53 & 2) != 0 || pPath->fLookaheadAmount <= 16384.0) )
        Path_TrimCompletedPath(pPath, vStartPos, p_inOutPos);
      if ( bTrimAmount )
        Path_SubtractTrimmedAmount(pPath, vStartPos);
LABEL_61:
      Path_CalcLookahead(pPath, vStartPos, bReduceLookaheadAmount, bounds);
      goto LABEL_68;
    }
    v54 = pPath->vFinalGoal.v[1];
    inOutPos.v[0] = pPath->vFinalGoal.v[0];
    inOutPos.v[2] = pPath->vFinalGoal.v[2];
    inOutPos.v[1] = v54;
    Path_WorldifyPos(pPath, &inOutPos);
    pathFindInput.pNodeFrom = NULL;
    pathFindInput.pNodeTo = NULL;
    *(_QWORD *)&pathFindInput.bAllowJumpLinks = 0i64;
    memset_0(&pathFindInput.avoidExpStances, 0, 0xE0ui64);
    v55 = pPath->flags;
    pathFindInput.vGoalPos = &inOutPos;
    pathFindInput.pPath = pPath;
    pathFindInput.badplacePercent = FLOAT_1_0;
    pathFindInput.searchEntNum = 2047;
    pathFindInput.vStartPos = vStartPos;
    *(_QWORD *)&pathFindInput.bAllowNegotiationLinks = (v55 >> 4) & 1;
    pathFindInput.useChokePoints = (v55 >> 11) & 1;
    pathFindInput.pNodeTo = Path_NearestNode(&inOutPos, pPath->iTraceMask, NULL);
    if ( pathFindInput.pNodeTo )
    {
      pathFindInput.pNodeFrom = Path_NearestNode(vStartPos, pPath->iTraceMask, NULL);
      if ( pathFindInput.pNodeFrom )
      {
        CustomSearchInfo_FindPath::CustomSearchInfo_FindPath(&custom, &pathFindInput);
        if ( (pathFindInput.pNodeFrom->constant.spawnflags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1745, ASSERT_TYPE_ASSERT, "((pathFindInput->pNodeFrom->constant.spawnflags & PNF_DONTLINK) == 0)", (const char *)&queryFormat, "(pathFindInput->pNodeFrom->constant.spawnflags & PNF_DONTLINK) == 0") )
          __debugbreak();
        pNodeTo = pathFindInput.pNodeTo;
        if ( (pathFindInput.pNodeTo->constant.spawnflags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1746, ASSERT_TYPE_ASSERT, "((pathFindInput->pNodeTo->constant.spawnflags & PNF_DONTLINK) == 0)", (const char *)&queryFormat, "(pathFindInput->pNodeTo->constant.spawnflags & PNF_DONTLINK) == 0") )
          __debugbreak();
        custom.m_pNodeTo = pNodeTo;
        v57 = pathFindInput.vStartPos->v[1];
        custom.startPos.v[0] = pathFindInput.vStartPos->v[0];
        v58 = pathFindInput.vStartPos->v[2];
        custom.startPos.v[1] = v57;
        custom.startPos.v[2] = v58;
        Path_AStarAlgorithm_CustomSearchInfo_FindPath_(&pathFindInput, pathFindInput.pPath->eTeam, 1, &custom);
      }
    }
  }
LABEL_68:
  Profile_EndInternal(NULL);
}

/*
==============
Path_WorldifyAngles
==============
*/
void Path_WorldifyAngles(const path_t *pPath, vec3_t *inOutAngles)
{
  unsigned int parentIndex; 
  unsigned int v5; 
  gentity_s *v6; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  parentIndex = pPath->parentIndex;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 211, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      AnglesToAxis(&v6->r.currentAngles, &axis);
      AnglesToAxis(inOutAngles, &in1);
      MatrixMultiply(&in1, &axis, &out);
      AxisToAngles(&out, inOutAngles);
    }
  }
}

/*
==============
Path_WorldifyDir2D
==============
*/
void Path_WorldifyDir2D(const path_t *pPath, vec2_t *inOutDir)
{
  float v2; 
  float v4; 
  vec3_t inOutDira; 

  v2 = inOutDir->v[1];
  inOutDira.v[0] = inOutDir->v[0];
  inOutDira.v[2] = 0.0;
  inOutDira.v[1] = v2;
  Path_WorldifyDir(pPath, &inOutDira);
  v4 = inOutDira.v[1];
  inOutDir->v[0] = inOutDira.v[0];
  inOutDir->v[1] = v4;
}

/*
==============
Path_WorldifyDir
==============
*/
void Path_WorldifyDir(const path_t *pPath, vec3_t *inOutDir)
{
  unsigned int parentIndex; 
  unsigned int v5; 
  gentity_s *v6; 
  float v7; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 

  parentIndex = pPath->parentIndex;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 257, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      v7 = inOutDir->v[1];
      in1.v[0] = inOutDir->v[0];
      in1.v[2] = inOutDir->v[2];
      in1.v[1] = v7;
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixTransformVector(&in1, &axis, inOutDir);
    }
  }
}

/*
==============
Path_WorldifyPos
==============
*/
void Path_WorldifyPos(const path_t *pPath, vec3_t *inOutPos)
{
  unsigned int parentIndex; 
  unsigned int v5; 
  gentity_s *v6; 
  float v7; 
  float v8; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  parentIndex = pPath->parentIndex;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 163, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixTransformVector(inOutPos, &axis, &out);
      v7 = out.v[1];
      inOutPos->v[0] = out.v[0] + v6->r.currentOrigin.v[0];
      v8 = out.v[2];
      inOutPos->v[1] = v7 + v6->r.currentOrigin.v[1];
      inOutPos->v[2] = v8 + v6->r.currentOrigin.v[2];
    }
  }
}

