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
  int useChokePoints; 
  bool v18; 
  team_t eTeam; 
  int v29; 
  char v30; 
  int v32; 
  const dvar_t *v54; 
  vec3_t pos; 

  _RDI = pathFindInput;
  _RBX = this;
  __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
  if ( !pathFindInput )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1433, ASSERT_TYPE_ASSERT, "( pathFindInput )", (const char *)&queryFormat, "pathFindInput") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1382, ASSERT_TYPE_ASSERT, "(pathFindInput)", (const char *)&queryFormat, "pathFindInput") )
      __debugbreak();
  }
  if ( !_RDI->pNodeTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1383, ASSERT_TYPE_ASSERT, "(pathFindInput->pNodeTo)", (const char *)&queryFormat, "pathFindInput->pNodeTo") )
    __debugbreak();
  if ( !_RDI->vStartPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1384, ASSERT_TYPE_ASSERT, "(pathFindInput->vStartPos)", (const char *)&queryFormat, "pathFindInput->vStartPos") )
    __debugbreak();
  pathnode_t::GetPos(_RDI->pNodeTo, &pos);
  _ER15 = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+pos]
    vmovss  xmm1, dword ptr [rsp+0A8h+pos+4]
    vsubss  xmm3, xmm0, dword ptr [rax]
    vmovss  xmm0, dword ptr [rsp+0A8h+pos+8]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vsubss  xmm4, xmm0, dword ptr [rax+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm4, cs:__real@48800000
  }
  useChokePoints = _RDI->useChokePoints;
  _RBX->randomWeightIndex = 0;
  v18 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( v18 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+0C0h]
      vmovups xmmword ptr [rbx+0B8h], xmm0
    }
    _RBX->avoidExpPosPercent[4] = _RDI->avoidExpPosPercent[4];
    __asm
    {
      vucomiss xmm7, dword ptr [rbx+0B8h]
      vmovups ymm0, ymmword ptr [rdi+48h]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovsd  xmm1, qword ptr [rdi+68h]
      vmovsd  qword ptr [rbx+60h], xmm1
      vmovups ymm0, ymmword ptr [rdi+70h]
      vmovups ymmword ptr [rbx+68h], ymm0
      vmovups xmm1, xmmword ptr [rdi+90h]
      vmovups xmmword ptr [rbx+88h], xmm1
      vmovsd  xmm0, qword ptr [rdi+0A0h]
      vmovsd  qword ptr [rbx+98h], xmm0
    }
    _RBX->avoidExpPosDir[4].v[2] = _RDI->avoidExpPosDir[4].v[2];
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+0ACh]
      vmovups xmmword ptr [rbx+0A4h], xmm0
    }
    _RBX->avoidExpPosDot[4] = _RDI->avoidExpPosDot[4];
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi+0D4h]
      vmovups xmmword ptr [rbx+0CCh], xmm0
    }
    _RBX->avoidExpPosRadiusSq[4] = _RDI->avoidExpPosRadiusSq[4];
    _RBX->avoidExpStances = _RDI->avoidExpStances;
    _RBX->avoidExpSkyPercent = _RDI->avoidExpSkyPercent;
    _RBX->avoidExpGenPercent = _RDI->avoidExpGenPercent;
    _RBX->avoidExpLOSPercent = _RDI->avoidExpLOSPercent;
    _RBX->avoidExpTrafficPercent = _RDI->avoidExpTrafficPercent;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    _RBX->pathSpreadPercent = _RDI->pathSpreadPercent;
    if ( _RDI->pPath )
      eTeam = _RDI->pPath->eTeam;
    else
      eTeam = TEAM_ZERO;
    _RBX->pathSpreadTeam = eTeam;
    _RBX->avoidLocationPos.v[0] = _RDI->avoidLocationPos.v[0];
    _RBX->avoidLocationPos.v[1] = _RDI->avoidLocationPos.v[1];
    _RBX->avoidLocationPos.v[2] = _RDI->avoidLocationPos.v[2];
    _RBX->avoidLocationPercent = _RDI->avoidLocationPercent;
    _RBX->avoidLocationMaxDist = _RDI->avoidLocationMaxDist;
    _RBX->pathZoneCosts = _RDI->pathZoneCosts;
    _RBX->pathZoneCostsCount = _RDI->pathZoneCostsCount;
    _RBX->traversalCostPercent = _RDI->traversalCostPercent;
  }
  *(_QWORD *)_RBX->randomNodeCosts = 0i64;
  *(_QWORD *)&_RBX->randomNodeCosts[2] = 0i64;
  if ( useChokePoints )
  {
    v29 = G_rand();
    v30 = G_rand() % 4;
    _RSI = DCONST_DVARFLT_ai_pathChokePointCost;
    v32 = v29 & ~(1 << v30);
    if ( !DCONST_DVARFLT_ai_pathChokePointCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_pathChokePointCost") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm3, dword ptr [rsi+28h] }
    _EAX = v32 & 1;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
      vmovss  dword ptr [rbx+28h], xmm0
    }
    _EAX = v32 & 2;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
      vmovss  dword ptr [rbx+2Ch], xmm0
    }
    _EAX = v32 & 4;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
      vmovss  dword ptr [rbx+30h], xmm0
    }
    _EDI = v32 & 8;
    __asm
    {
      vmovd   xmm0, edi
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm7, xmm2
      vmovss  dword ptr [rbx+34h], xmm0
    }
  }
  else
  {
    *(_QWORD *)_RBX->chokePointWeights = 0i64;
    *(_QWORD *)&_RBX->chokePointWeights[2] = 0i64;
  }
  v54 = DCONST_DVARFLT_ai_pathNegotiationOverlapCost;
  __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
  if ( !DCONST_DVARFLT_ai_pathNegotiationOverlapCost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_pathNegotiationOverlapCost") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  LODWORD(_RBX->negotiationOverlapCost) = v54->current.integer;
}

/*
==============
AI_BuildSearchArea
==============
*/

void __fastcall AI_BuildSearchArea(ai_search_t *search, const vec3_t *targetDirection, double targetVelocity, int time, ai_common_t *aiCommon, bool ignoreNodesBehind, ai_search_type_t mode)
{
  char v24; 
  bool v25; 
  char v42; 
  bool v46; 
  bool v49; 
  char v77; 
  pathnode_t *v78; 
  bool v80; 
  int v160; 
  __int64 v161; 
  __int64 v177; 
  double v178; 
  double v179; 
  double v180; 
  __int64 v181; 
  __int64 v182; 
  double v183; 
  double v184; 
  double v185; 
  double v186; 
  vec3_t pos; 
  char v195; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RDI = targetDirection;
  _R14 = search;
  __asm { vmovaps xmm7, xmm2 }
  if ( !search && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4098, ASSERT_TYPE_ASSERT, "( search )", (const char *)&queryFormat, "search") )
    __debugbreak();
  if ( time <= 0 )
  {
    LODWORD(v177) = time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4099, ASSERT_TYPE_ASSERT, "( time ) > ( 0 )", "time > 0\n\t%i, %i", v177, 0i64) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm7, xmm10
    vxorpd  xmm6, xmm6, xmm6
  }
  if ( !_R14->nodeNearestSearchOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4101, ASSERT_TYPE_ASSERT, "( search->nodeNearestSearchOrigin )", (const char *)&queryFormat, "search->nodeNearestSearchOrigin") )
    __debugbreak();
  memset_0(_R14->nodes, 0, sizeof(_R14->nodes));
  __asm
  {
    vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm9, cs:__real@3f800000
  }
  *(_DWORD *)&_R14->totalNodeCount = 0;
  _R14->currentNodePicked = -1;
  _R14->mode = mode;
  _R14->percentofNodesToSearch = 0.89999998;
  __asm
  {
    vmovss  xmm14, dword ptr [rdi]
    vmovss  xmm15, dword ptr [rdi+4]
    vmulss  xmm1, xmm15, xmm15
    vmulss  xmm0, xmm14, xmm14
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcomiss xmm2, cs:__real@3dcccccd
    vmovss  xmm1, cs:__real@80000000
  }
  if ( v24 | v25 )
  {
    v42 = 0;
    v24 = 0;
    v25 = 1;
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm9
      vandps  xmm0, xmm0, xmm13
      vcomiss xmm0, cs:__real@3c23d70a
    }
    if ( !(v24 | v25) )
    {
      __asm
      {
        vcmpless xmm0, xmm2, xmm1
        vblendvps xmm0, xmm2, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm14, xmm14, xmm1
        vmulss  xmm15, xmm15, xmm1
      }
    }
    v42 = 1;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+24h]
    vcomiss xmm0, xmm10
    vmovsd  xmm8, cs:__real@3ff0000000000000
  }
  if ( v24 )
    goto LABEL_62;
  __asm { vcomiss xmm0, xmm9 }
  if ( !(v24 | v25) )
  {
LABEL_62:
    __asm
    {
      vmovsd  [rsp+158h+var_120], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+158h+var_128], xmm6
      vmovsd  [rsp+158h+var_130], xmm0
    }
    v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4137, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( search->highestPriorityDistScalar ) && ( search->highestPriorityDistScalar ) <= ( 1.0f )", "search->highestPriorityDistScalar not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v178, v183, v186);
    v24 = 0;
    v25 = !v46;
    if ( v46 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vcomiss xmm0, xmm10
  }
  if ( v24 | v25 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+158h+var_128], xmm6
      vmovsd  [rsp+158h+var_130], xmm0
    }
    v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4138, ASSERT_TYPE_ASSERT, "( search->maxSearchDistScalar ) > ( 0.0f )", "search->maxSearchDistScalar > 0.0f\n\t%g, %g", v179, v184);
    v24 = 0;
    v25 = !v49;
    if ( v49 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+28h]
    vcomiss xmm0, xmm9
  }
  if ( !(v24 | v25) )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+158h+var_128], xmm8
      vmovsd  [rsp+158h+var_130], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4139, ASSERT_TYPE_ASSERT, "( search->maxSearchDistScalar ) <= ( 1.0f )", "search->maxSearchDistScalar <= 1.0f\n\t%g, %g", v180, v185) )
      __debugbreak();
  }
  __asm { vminss  xmm7, xmm7, cs:__real@432a0000 }
  _RDI = _R14->nodeNearestSearchOrigin;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmulss  xmm0, xmm1, xmm7
    vmulss  xmm1, xmm1, cs:__real@432a0000
    vmulss  xmm12, xmm1, dword ptr [r14+28h]
    vmulss  xmm11, xmm0, dword ptr [r14+24h]
    vmovss  [rsp+158h+var_108], xmm7
  }
  if ( ignoreNodesBehind )
  {
    if ( !aiCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4148, ASSERT_TYPE_ASSERT, "( aiCommon )", (const char *)&queryFormat, "aiCommon") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [r14+4]
      vmovss  xmm6, cs:__real@80000000
      vsubss  xmm5, xmm0, dword ptr [rax]
      vsubss  xmm4, xmm1, dword ptr [rax+4]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, xmm6
      vblendvps xmm0, xmm3, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm8, xmm5, xmm1
      vmovss  [rsp+158h+var_100], xmm8
      vmulss  xmm8, xmm4, xmm1
      vmovss  [rsp+158h+var_104], xmm8
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+158h+var_108]
      vmovss  xmm6, cs:__real@80000000
      vmovss  [rsp+158h+var_104], xmm0
      vmovss  xmm0, [rsp+158h+var_108]
      vmovss  [rsp+158h+var_100], xmm0
    }
  }
  Path_ClearAllNodeTransientData();
  _RDI->transient.fCost = 0.5;
  v78 = _RDI;
  do
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+0B0h]
      vcomiss xmm8, xmm12
    }
    if ( v77 )
    {
      pathnode_t::GetPos(_RDI, &pos);
      v80 = 1;
      if ( ignoreNodesBehind )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+158h+pos]
          vmovss  xmm1, dword ptr [rsp+158h+pos+4]
          vsubss  xmm5, xmm0, dword ptr [rax]
          vsubss  xmm4, xmm1, dword ptr [rax+4]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm1, xmm2, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcmpless xmm0, xmm3, xmm6
          vblendvps xmm0, xmm3, xmm9, xmm0
          vdivss  xmm1, xmm9, xmm0
          vmulss  xmm0, xmm4, xmm1
          vmulss  xmm3, xmm0, [rsp+158h+var_104]
          vmulss  xmm1, xmm5, xmm1
          vmulss  xmm2, xmm1, [rsp+158h+var_100]
          vaddss  xmm0, xmm3, xmm2
          vcomiss xmm0, cs:__real@bdcccccd
        }
        v80 = !__CFADD__(aiCommon->ent, 304i64) && aiCommon->ent != (gentity_s *)-304i64;
      }
      if ( _R14->totalNodeCount < 0x80u && v80 )
      {
        __asm
        {
          vcomiss xmm8, xmm10
          vcomiss xmm8, xmm11
          vsubss  xmm6, xmm8, xmm11
          vandps  xmm6, xmm6, xmm13
          vcomiss xmm11, xmm12
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4018, ASSERT_TYPE_ASSERT, "( optimalDistance < maxDistance )", (const char *)&queryFormat, "optimalDistance < maxDistance") )
          __debugbreak();
        __asm
        {
          vsubss  xmm0, xmm12, xmm11
          vdivss  xmm1, xmm6, xmm0
          vsubss  xmm0, xmm9, xmm1; val
          vmovaps xmm2, xmm9; max
          vmovaps xmm1, xmm10; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmovss  xmm6, cs:__real@447a0000
          vmulss  xmm1, xmm0, xmm6
          vcvttss2si ebx, xmm1
        }
        if ( v42 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+158h+pos]
            vsubss  xmm5, xmm0, dword ptr [r14]
            vmovss  xmm1, dword ptr [rsp+158h+pos+4]
            vsubss  xmm4, xmm1, dword ptr [r14+4]
            vmulss  xmm0, xmm5, xmm5
            vmulss  xmm2, xmm4, xmm4
            vaddss  xmm1, xmm2, xmm0
            vsqrtss xmm3, xmm1, xmm1
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm9, xmm0
            vdivss  xmm1, xmm9, xmm0
            vmulss  xmm0, xmm1, xmm4
            vmulss  xmm1, xmm1, xmm5
            vmulss  xmm2, xmm1, xmm14
            vmulss  xmm3, xmm0, xmm15
            vaddss  xmm0, xmm3, xmm2
            vsubss  xmm0, xmm0, cs:__real@3f333333; val
            vmovaps xmm2, xmm9; max
            vmovaps xmm1, xmm10; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm0, xmm0, cs:__real@40555555; val
            vmovaps xmm2, xmm9; max
            vmovaps xmm1, xmm10; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmulss  xmm1, xmm0, xmm6
            vcvttss2si esi, xmm1
          }
          _EAX = 0;
          __asm
          {
            vcomiss xmm7, cs:__real@432a0000
            vmovd   xmm0, esi
            vmovd   xmm2, eax
            vpcmpgtd xmm1, xmm0, xmm2
            vmovss  xmm0, cs:__real@3ecccccd
            vmovss  xmm2, cs:__real@3f0ccccd
            vblendvps xmm0, xmm2, xmm0, xmm1
            vmovss  [rsp+158h+var_F8], xmm0
            vmovd   xmm0, esi
            vmovd   xmm1, eax
            vpcmpgtd xmm2, xmm0, xmm1
            vmovss  xmm0, cs:__real@3f19999a
            vmovss  xmm1, cs:__real@3ee66666
            vblendvps xmm0, xmm1, xmm0, xmm2
            vmovss  [rsp+158h+var_FC], xmm0
            vmulss  xmm0, xmm7, cs:__real@3a9a33ce
            vmovss  xmm1, cs:__real@3e4ccccd
            vsubss  xmm1, xmm1, xmm0
            vmovss  xmm0, [rsp+158h+var_F8]
            vaddss  xmm6, xmm1, [rsp+158h+var_FC]
            vsubss  xmm7, xmm0, xmm1
            vaddss  xmm1, xmm7, xmm6
            vsubss  xmm2, xmm1, xmm9
            vandps  xmm2, xmm2, xmm13
            vcomiss xmm2, cs:__real@3a83126f
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, esi
            vmulss  xmm3, xmm0, xmm7
            vmovss  xmm7, [rsp+158h+var_108]
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, ebx
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm0, xmm3, xmm2
            vcvttss2si ebx, xmm0
          }
        }
        if ( _EBX < 1 )
          _EBX = 1;
        if ( Path_ConvertNodeToIndex(_RDI) == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4184, ASSERT_TYPE_ASSERT, "( Path_ConvertNodeToIndex( currentOpenNode ) != 0xffff )", (const char *)&queryFormat, "Path_ConvertNodeToIndex( currentOpenNode ) != PATHNODE_INVALID") )
          __debugbreak();
        if ( _EBX >= 0xFFFF )
        {
          LODWORD(v182) = 0xFFFF;
          LODWORD(v181) = _EBX;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4185, ASSERT_TYPE_ASSERT, "( currentOpenNodePriority ) < ( 0xffff )", "currentOpenNodePriority < AI_SEARCH_NODE_MAX_PRIORITY\n\t%i, %i", v181, v182) )
            __debugbreak();
        }
        _R14->nodes[_R14->totalNodeCount].nodeIndex = Path_ConvertNodeToIndex(_RDI);
        if ( (unsigned int)_EBX > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)_EBX, "signed", _EBX) )
          __debugbreak();
        _R14->nodes[_R14->totalNodeCount++].priority = _EBX;
        ++_R14->currentNodeCount;
      }
      v160 = 0;
      if ( _RDI->dynamic.wLinkCount > 0 )
      {
        v161 = 0i64;
        do
        {
          _RAX = Path_ConvertIndexToNode(_RDI->constant.Links[v161].nodeNum);
          __asm { vcomiss xmm10, dword ptr [rax+0B0h] }
          if ( !v24 )
          {
            _RAX = Path_ConvertIndexToNode(_RDI->constant.Links[v161].nodeNum);
            __asm
            {
              vaddss  xmm0, xmm8, dword ptr [rbx+rcx]
              vmovss  dword ptr [rax+0B0h], xmm0
            }
            v78->transient.pNextOpen = _RAX;
            v78 = _RAX;
          }
          ++v160;
          ++v161;
        }
        while ( v160 < _RDI->dynamic.wLinkCount );
      }
    }
    _RDI = _RDI->transient.pNextOpen;
    __asm { vmovss  xmm6, cs:__real@80000000 }
    v77 = 0;
  }
  while ( _RDI );
  _R11 = &v195;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
AI_FindEntrances
==============
*/
pathnode_t *AI_FindEntrances(const vec3_t *point, unsigned __int16 *results, int maxNumResults)
{
  __int64 v8; 
  bool v9; 
  bool v10; 
  pathnode_t *result; 
  pathnode_t *v18; 
  const dvar_t *v19; 
  int v20; 
  const dvar_t *v21; 
  int EntrancesByNodeInternal; 
  const dvar_t *v23; 
  int v24; 
  const dvar_t *v25; 
  const dvar_t *v29; 
  __int64 i; 
  pathnode_t *v31; 
  int v33; 
  pathnode_t *v35; 
  unsigned int NumOverlappingEntrancesForNode; 
  const char *v39; 
  unsigned __int16 *v41; 
  __int64 v42; 
  pathnode_t *v43; 
  unsigned int v46; 
  const char *v47; 
  __int64 duration; 
  __int64 v52; 
  int numRemovedResultsOut[4]; 
  vec3_t origin; 
  vec3_t pos; 
  vec3_t xyz; 
  Bounds box; 
  unsigned __int16 removedResultsOut[32]; 
  unsigned __int16 v59[104]; 

  __asm { vmovaps [rsp+220h+var_40], xmm6 }
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3881, ASSERT_TYPE_ASSERT, "( results )", (const char *)&queryFormat, "results") )
    __debugbreak();
  v8 = 0i64;
  v9 = maxNumResults == 0;
  if ( maxNumResults <= 0 )
  {
    LODWORD(duration) = maxNumResults;
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3882, ASSERT_TYPE_ASSERT, "( maxNumResults ) > ( 0 )", "maxNumResults > 0\n\t%i, %i", duration, 0i64);
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:?level@@3Ulevel_locals_t@@A.pathnodeWorldSize; level_locals_t level
    vaddss  xmm1, xmm0, dword ptr cs:?level@@3Ulevel_locals_t@@A.pathnodeWorldSize+4; level_locals_t level
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm2, xmm6
  }
  if ( v9 )
  {
    __asm { vmovss  xmm1, cs:__real@44fa0000 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm2, cs:__real@3f4ccccd
      vminss  xmm1, xmm0, cs:__real@44fa0000; searchDistance
    }
  }
  result = AI_FindEntrances_FindNearestNode(point, *(float *)&_XMM1);
  v18 = result;
  if ( result )
  {
    v19 = DVARINT_ai_showNodes;
    v20 = 0;
    numRemovedResultsOut[0] = 0;
    if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.integer < 8 )
      goto LABEL_23;
    v21 = DVARINT_ai_showNodes;
    if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.integer > 9 )
    {
LABEL_23:
      EntrancesByNodeInternal = AI_FindEntrancesByNodeInternal(v18, results, maxNumResults, NULL, NULL);
    }
    else
    {
      if ( maxNumResults > 32 )
      {
        LODWORD(v52) = 32;
        LODWORD(duration) = maxNumResults;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3902, ASSERT_TYPE_ASSERT, "( maxNumResults ) <= ( MAX_NUM_REMOVED_RESULTS )", "maxNumResults <= MAX_NUM_REMOVED_RESULTS\n\t%i, %i", duration, v52) )
          __debugbreak();
      }
      EntrancesByNodeInternal = AI_FindEntrancesByNodeInternal(v18, results, maxNumResults, removedResultsOut, numRemovedResultsOut);
      v20 = numRemovedResultsOut[0];
    }
    v23 = DVARINT_ai_showNodes;
    v24 = EntrancesByNodeInternal;
    if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.integer >= 8 )
    {
      v25 = DVARINT_ai_showNodes;
      if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.integer <= 10 )
      {
        __asm
        {
          vmovss  xmm1, cs:__real@41800000
          vmovups xmm0, cs:__xmm@41800000418000000000000000000000
          vmovss  dword ptr [rbp+120h+box.halfSize+4], xmm1
          vmovss  dword ptr [rbp+120h+box.halfSize+8], xmm1
          vmovups xmmword ptr [rbp+120h+box.midPoint], xmm0
        }
        pathnode_t::GetPos(v18, &pos);
        __asm { vxorps  xmm2, xmm2, xmm2; yaw }
        G_DebugBox(&pos, &box, *(float *)&_XMM2, &colorBlack, 0, 0);
        v29 = DVARINT_ai_showNodes;
        if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( v29->current.integer == 8 )
        {
          if ( v24 > 0 )
          {
            for ( i = 0i64; i < v24; ++i )
            {
              v31 = Path_ConvertIndexToNode(results[i]);
              pathnode_t::GetPos(v31, &origin);
              __asm { vmovaps xmm2, xmm6; yaw }
              G_DebugBox(&origin, &box, *(float *)&_XMM2, &colorGreen, 0, 0);
            }
          }
        }
        else if ( Dvar_GetInt_Internal_DebugName(DVARINT_ai_showNodes, "ai_showNodes") == 9 )
        {
          __asm { vmovaps [rsp+220h+var_50], xmm7 }
          if ( v24 + v20 > 100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3942, ASSERT_TYPE_ASSERT, "( entrancesCount + entrancesRemoved ) <= ( 100 )", "%s <= %s\n\t%i, %i", "entrancesCount + entrancesRemoved", "100", v24 + v20, 100) )
            __debugbreak();
          v33 = 0;
          if ( v24 > 0 )
          {
            memcpy_0(v59, results, 2i64 * v24);
            v33 = v24;
          }
          if ( v20 > 0 )
          {
            memcpy_0(&v59[v33], removedResultsOut, 2i64 * (unsigned int)v20);
            v33 += v20;
          }
          __asm { vmovss  xmm7, cs:__real@3f800000 }
          if ( v24 > 0 )
          {
            do
            {
              v35 = Path_ConvertIndexToNode(results[v8]);
              pathnode_t::GetPos(v35, &origin);
              __asm { vmovaps xmm2, xmm6; yaw }
              G_DebugBox(&origin, &box, *(float *)&_XMM2, &colorGreen, 0, 0);
              __asm { vmovsd  xmm0, qword ptr [rsp+220h+pos] }
              xyz.v[2] = pos.v[2];
              __asm { vmovsd  qword ptr [rbp+120h+xyz], xmm0 }
              NumOverlappingEntrancesForNode = AI_FindEntrances_GetNumOverlappingEntrancesForNode(v59, v33, v35, &xyz);
              v39 = j_va("%i", NumOverlappingEntrancesForNode);
              __asm { vmovaps xmm2, xmm7; scale }
              G_Main_AddDebugStringWithDuration(&origin, &colorGreen, *(float *)&_XMM2, v39, 0);
              ++v8;
            }
            while ( v8 < v24 );
          }
          if ( v20 > 0 )
          {
            v41 = removedResultsOut;
            v42 = (unsigned int)v20;
            do
            {
              v43 = Path_ConvertIndexToNode(*v41);
              pathnode_t::GetPos(v43, &xyz);
              __asm { vmovaps xmm2, xmm6; yaw }
              G_DebugBox(&xyz, &box, *(float *)&_XMM2, &colorWhite, 0, 0);
              __asm { vmovsd  xmm0, qword ptr [rsp+220h+pos] }
              origin.v[2] = pos.v[2];
              __asm { vmovsd  qword ptr [rsp+220h+origin], xmm0 }
              v46 = AI_FindEntrances_GetNumOverlappingEntrancesForNode(v59, v33, v43, &origin);
              v47 = j_va("%i", v46);
              __asm { vmovaps xmm2, xmm7; scale }
              G_Main_AddDebugStringWithDuration(&xyz, &colorWhite, *(float *)&_XMM2, v47, 0);
              ++v41;
              --v42;
            }
            while ( v42 );
          }
          __asm { vmovaps xmm7, [rsp+220h+var_50] }
        }
      }
    }
    result = (pathnode_t *)(unsigned int)v24;
  }
  __asm { vmovaps xmm6, [rsp+220h+var_40] }
  return result;
}

/*
==============
AI_FindEntrancesByNodeInternal
==============
*/
__int64 AI_FindEntrancesByNodeInternal(pathnode_t *startNode, unsigned __int16 *results, int maxNumResults, unsigned __int16 *removedResultsOut, int *numRemovedResultsOut)
{
  unsigned __int16 *v9; 
  pathnode_t *v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v15; 
  bool v16; 
  bool v17; 
  unsigned __int16 nodeCost_low; 
  unsigned int linkIndex; 
  bool v26; 
  bool v27; 
  unsigned __int16 v29; 
  __int64 v30; 
  int v31; 
  unsigned __int16 v32; 
  const dvar_t *v36; 
  unsigned __int16 LastVisibleNodeIndex; 
  pathnode_t *v38; 
  pathnode_t *v39; 
  pathnode_t *pParent; 
  pathnode_t *v41; 
  pathnode_t *v42; 
  pathnode_t *i; 
  unsigned __int16 *v47; 
  pathnode_t *v48; 
  unsigned __int16 v49; 
  pathnode_t *v50; 
  const dvar_t *v51; 
  int v52; 
  pathnode_t *v53; 
  __int64 v55; 
  int curNumResults; 
  __int64 v57; 
  void *retaddr; 
  int v65; 

  _RAX = &retaddr;
  v9 = results;
  v10 = startNode;
  v11 = maxNumResults;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  if ( !startNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3732, ASSERT_TYPE_ASSERT, "( startNode )", (const char *)&queryFormat, "startNode") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3733, ASSERT_TYPE_ASSERT, "( results )", (const char *)&queryFormat, "results") )
    __debugbreak();
  v12 = 0i64;
  if ( v11 <= 0 )
  {
    LODWORD(v55) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3734, ASSERT_TYPE_ASSERT, "( maxNumResults ) > ( 0 )", "maxNumResults > 0\n\t%i, %i", v55, 0i64) )
      __debugbreak();
  }
  Profile_Begin(407);
  v13 = 0;
  curNumResults = 0;
  Path_ClearAllNodeTransientData();
  Path_ResetAllNodeTransientLinkIndex();
  v10->transient.fCost = 0.5;
  _RBP = v10;
  v15 = Path_NodesVisibleNoPeek(v10, v10);
  v16 = v15 == 0;
  if ( !v15 )
  {
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3761, ASSERT_TYPE_ASSERT, "(Path_NodesVisibleNoPeek( startNode, currentOpenNode ))", (const char *)&queryFormat, "Path_NodesVisibleNoPeek( startNode, currentOpenNode )");
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:?level@@3Ulevel_locals_t@@A.pathnodeWorldSize; level_locals_t level
    vaddss  xmm1, xmm0, dword ptr cs:?level@@3Ulevel_locals_t@@A.pathnodeWorldSize+4; level_locals_t level
    vmulss  xmm2, xmm1, cs:__real@3f000000
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm2, xmm7
    vmovaps [rsp+0C8h+var_78], xmm8
  }
  v57 = (__int64)v10;
  if ( v16 )
  {
    __asm { vmovss  xmm8, cs:__real@44fa0000 }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm2, cs:__real@3f4ccccd
      vminss  xmm8, xmm0, cs:__real@44fa0000
    }
  }
  while ( v13 < v11 )
  {
    if ( ((1 << LOBYTE(_RBP->constant.type)) & 0x1E700000) == 0 )
    {
      if ( Path_NodesVisibleNoPeek(v10, _RBP) )
      {
        nodeCost_low = Path_ConvertNodeToIndex(_RBP);
        _RBP->transient.linkIndex = nodeCost_low;
        linkIndex = nodeCost_low;
        _RBP->transient.pParent = _RBP;
      }
      else
      {
        nodeCost_low = LOWORD(_RBP->transient.nodeCost);
        linkIndex = _RBP->transient.linkIndex;
      }
      v26 = linkIndex < nodeCost_low;
      if ( linkIndex != nodeCost_low )
      {
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3671, ASSERT_TYPE_ASSERT, "(currentNode->transient.linkIndex == static_cast<pathnode_id>( currentNode->transient.linkIndex ))", (const char *)&queryFormat, "currentNode->transient.linkIndex == static_cast<pathnode_id>( currentNode->transient.linkIndex )");
        v26 = 0;
        if ( v27 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+0B0h]
        vcomiss xmm6, xmm8
      }
      v29 = LOWORD(_RBP->transient.nodeCost);
      if ( !v26 )
      {
        AI_FindEntrances_AddNodeToEntranceResults(v9, &curNumResults, v29, _RBP);
        goto LABEL_64;
      }
      if ( _RBP->dynamic.wLinkCount > 0 )
      {
        v30 = v57;
        v31 = 0;
        do
        {
          v32 = *(unsigned __int16 *)((char *)&_RBP->constant.Links->nodeNum + v12);
          _RDI = Path_ConvertIndexToNode(v32);
          _RAX = Path_ConvertIndexToNode(v32);
          __asm { vcomiss xmm7, dword ptr [rax+0B0h] }
          if ( v26 )
          {
            if ( !Path_NodesVisibleNoPeek(v10, _RDI) && !Path_NodesVisibleNoPeek(v10, _RBP) )
            {
              LastVisibleNodeIndex = AI_FindEntrances_GetLastVisibleNodeIndex(_RDI);
              if ( v29 != LastVisibleNodeIndex )
              {
                v38 = Path_ConvertIndexToNode(v29);
                v39 = Path_ConvertIndexToNode(LastVisibleNodeIndex);
                if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3685, ASSERT_TYPE_ASSERT, "( node1 )", (const char *)&queryFormat, "node1") )
                  __debugbreak();
                if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3686, ASSERT_TYPE_ASSERT, "( node2 )", (const char *)&queryFormat, "node2") )
                  __debugbreak();
                if ( v38 == v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3687, ASSERT_TYPE_ASSERT, "( node1 != node2 )", (const char *)&queryFormat, "node1 != node2") )
                  __debugbreak();
                if ( !v38->transient.pParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3688, ASSERT_TYPE_ASSERT, "( node1->transient.pParent )", (const char *)&queryFormat, "node1->transient.pParent") )
                  __debugbreak();
                if ( !v39->transient.pParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3689, ASSERT_TYPE_ASSERT, "( node2->transient.pParent )", (const char *)&queryFormat, "node2->transient.pParent") )
                  __debugbreak();
                pParent = v38;
                while ( 1 )
                {
                  if ( !pParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3695, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
                    __debugbreak();
                  if ( pParent == v39 )
                    break;
                  pParent = pParent->transient.pParent;
                  if ( pParent == v38 )
                  {
                    v41 = v39->transient.pParent;
                    v42 = v39;
                    for ( i = v38->transient.pParent; v41 != v39; v41 = v41->transient.pParent )
                      v42 = v41;
                    v38->transient.pParent = v39;
                    v42->transient.pParent = i;
                    break;
                  }
                }
                v10 = startNode;
              }
            }
          }
          else
          {
            __asm
            {
              vaddss  xmm0, xmm6, dword ptr [r15+rcx]
              vmovss  dword ptr [rdi+0B0h], xmm0
            }
            _RDI->transient.linkIndex = v29;
            *(_QWORD *)(v30 + 152) = _RDI;
            v30 = (__int64)_RDI;
            v36 = DVARINT_ai_showNodes;
            if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v36);
            if ( v36->current.integer == 10 )
              _RDI->transient.pPrevOpen = _RBP;
          }
          ++v31;
          v12 += 12i64;
        }
        while ( v31 < _RBP->dynamic.wLinkCount );
        v9 = results;
        v57 = v30;
        v12 = 0i64;
LABEL_64:
        v13 = curNumResults;
      }
      v11 = maxNumResults;
    }
    _RBP = _RBP->transient.pNextOpen;
    if ( !_RBP )
      break;
  }
  __asm
  {
    vmovaps xmm8, [rsp+0C8h+var_78]
    vmovaps xmm7, [rsp+0C8h+var_68]
    vmovaps xmm6, [rsp+0C8h+var_58]
  }
  v65 = 0;
  if ( v13 > 0 )
  {
    v47 = v9;
    do
    {
      if ( v13 >= v11 )
        break;
      v48 = Path_ConvertIndexToNode(*v47);
      do
      {
        if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3853, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
          __debugbreak();
        v49 = Path_ConvertNodeToIndex(v48);
        AI_FindEntrances_AddNodeToEntranceResults(v9, &curNumResults, v49, v48);
        v48 = v48->transient.pParent;
        v50 = Path_ConvertIndexToNode(*v47);
        v13 = curNumResults;
      }
      while ( v48 != v50 && curNumResults < v11 );
      ++v47;
      ++v65;
    }
    while ( v65 < curNumResults );
    LODWORD(v12) = 0;
  }
  AI_FindEntrances_RemoveOverlappingEntrancesInternal(v9, &curNumResults, startNode, removedResultsOut, numRemovedResultsOut);
  v51 = DVARINT_ai_showNodes;
  if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  v52 = curNumResults;
  if ( v51->current.integer == 10 && curNumResults > 0 )
  {
    do
    {
      v53 = Path_ConvertIndexToNode(*v9);
      AI_FindEntrances_DrawEntranceAndPathDebug(v53, v12);
      LODWORD(v12) = v12 + 1;
      ++v9;
    }
    while ( (int)v12 < v52 );
  }
  Profile_EndInternal(NULL);
  return (unsigned int)v52;
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

void __fastcall AI_FindEntrances_DrawEntranceAndPathDebug(pathnode_t *node, int resultsIndex, double _XMM2_8)
{
  const dvar_t *v5; 
  int v8; 
  pathnode_t *v18; 
  pathnode_t *v19; 
  pathnode_t *i; 
  vec4_t color; 
  vec3_t pos; 
  vec3_t origin; 
  vec3_t v34; 
  vec3_t v35; 
  vec3_t end; 
  vec3_t start; 
  Bounds box; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  v5 = DVARINT_ai_showNodes;
  if ( !DVARINT_ai_showNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer != 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3484, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DVARINT_ai_showNodes, \"ai_showNodes\" ) == AI_SHOW_NODES_ENUM_ENTRANCES_AND_PATHS)", (const char *)&queryFormat, "Dvar_GetInt( ai_showNodes ) == AI_SHOW_NODES_ENUM_ENTRANCES_AND_PATHS") )
    __debugbreak();
  v8 = resultsIndex % 7;
  if ( v8 )
  {
    switch ( v8 )
    {
      case 1:
        __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
        break;
      case 2:
        __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
        break;
      case 3:
        __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
        break;
      case 4:
        __asm { vmovups xmm0, xmmword ptr cs:?colorMagenta@@3Tvec4_t@@B; vec4_t const colorMagenta }
        break;
      case 5:
        __asm { vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan }
        break;
      case 6:
        __asm { vmovups xmm0, xmmword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite }
        break;
      default:
        goto LABEL_22;
    }
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
  }
  __asm { vmovups xmmword ptr [rbp+57h+color], xmm0 }
LABEL_22:
  __asm
  {
    vmovss  xmm1, cs:__real@41800000
    vmovups xmm0, cs:__xmm@41800000418000000000000000000000
    vmovss  dword ptr [rbp+57h+box.halfSize+4], xmm1
    vmovss  dword ptr [rbp+57h+box.halfSize+8], xmm1
    vmovups xmmword ptr [rbp+57h+box.midPoint], xmm0
  }
  pathnode_t::GetPos(node, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+pos]
    vmovss  xmm1, dword ptr [rbp+57h+pos+4]
    vmovss  dword ptr [rbp+57h+origin], xmm0
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
    vaddss  xmm0, xmm6, dword ptr [rbp+57h+pos+8]
    vxorps  xmm2, xmm2, xmm2; yaw
    vmovss  dword ptr [rbp+57h+origin+8], xmm0
    vmovss  dword ptr [rbp+57h+origin+4], xmm1
  }
  G_DebugBox(&origin, &box, *(float *)&_XMM2, &color, 0, 0);
  v18 = Path_ConvertIndexToNode(node->transient.iSearchFrame);
  v19 = v18;
  if ( node != v18 )
  {
    pathnode_t::GetPos(v18, &v34);
    __asm
    {
      vmovss  xmm1, cs:__real@40a00000
      vmovups xmm0, cs:__xmm@40a0000040a000000000000000000000
      vmovups xmmword ptr [rbp+57h+box.midPoint], xmm0
      vmovss  xmm0, dword ptr [rbp+57h+var_70]
      vmovss  dword ptr [rbp+57h+var_60], xmm0
      vaddss  xmm0, xmm6, dword ptr [rbp+57h+var_70+8]
      vmovss  dword ptr [rbp+57h+box.halfSize+4], xmm1
      vmovss  dword ptr [rbp+57h+box.halfSize+8], xmm1
      vmovss  xmm1, dword ptr [rbp+57h+var_70+4]
      vxorps  xmm2, xmm2, xmm2; yaw
      vmovss  dword ptr [rbp+57h+var_60+8], xmm0
      vmovss  dword ptr [rbp+57h+var_60+4], xmm1
    }
    G_DebugBox(&v35, &box, *(float *)&_XMM2, &color, 1, 0);
  }
  for ( i = v19->transient.pPrevOpen; i; i = i->transient.pPrevOpen )
  {
    pathnode_t::GetPos(i, &start);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbp+57h+start+8]
      vmovss  dword ptr [rbp+57h+start+8], xmm1
    }
    pathnode_t::GetPos(v19, &end);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbp+57h+end+8]
      vmovss  dword ptr [rbp+57h+end+8], xmm1
    }
    G_DebugLine(&start, &end, &color, 1);
    v19 = i;
  }
  _R11 = &vars0;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
AI_FindEntrances_FindNearestNode
==============
*/

pathnode_t *__fastcall AI_FindEntrances_FindNearestNode(const vec3_t *point, double searchDistance)
{
  signed __int64 v2; 
  void *v5; 
  pathnode_t *result; 
  __int64 v13; 
  double v14; 
  double v15; 
  int returnCount; 
  NearestNodeInput pInput; 
  pathsort_s nodes; 

  v5 = alloca(v2);
  __asm
  {
    vmovaps [rsp+30A8h+var_18], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps xmm6, xmm1
  }
  if ( (unsigned __int64)&v13 == _security_cookie )
  {
    __asm
    {
      vmovsd  [rsp+30A8h+var_3078], xmm0
      vcvtss2sd xmm1, xmm6, xmm1
      vmovsd  [rsp+30A8h+var_3080], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3443, ASSERT_TYPE_ASSERT, "( searchDistance ) > ( 0 )", "searchDistance > 0\n\t%g, %g", v14, v15) )
      __debugbreak();
  }
  pInput.entNum = 2047;
  pInput.blockPlanes = NULL;
  pInput.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
  *(_WORD *)&pInput.bAllowCrouch = 257;
  pInput.baseBounds = &actorBox;
  pInput.bAllowFailedUnuseable = 1;
  __asm { vmovss  [rsp+30A8h+pInput.fMaxDist], xmm6 }
  pInput.vOrigin = point;
  pInput.traceMask = 33685521;
  pInput.typeFlags = -510656514;
  result = Path_NearestNodeExtended(&pInput, &nodes, 768, &returnCount, 0);
  if ( !result )
  {
    __asm { vmovaps xmm1, xmm6; fMaxDist }
    result = Path_NearestNodeByDistanceOnly(point, *(float *)&_XMM1);
  }
  __asm { vmovaps xmm6, [rsp+30A8h+var_18] }
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
  __int64 v15; 
  unsigned int v39; 
  __int64 v43; 
  pathnode_t *v45; 
  char v69; 
  char v70; 
  __int64 result; 
  vec3_t pos; 
  vec3_t v85; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps [rsp+118h+var_A8], xmm14
    vmovaps [rsp+118h+var_B8], xmm15
  }
  v15 = curNumResults;
  _RBX = startOrigin;
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3553, ASSERT_TYPE_ASSERT, "( results )", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !nodeTesting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3554, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
    __debugbreak();
  pathnode_t::GetPos(nodeTesting, &pos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+118h+pos]
    vmovss  xmm1, dword ptr [rsp+118h+pos+4]
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm10, dword ptr [rbx]
    vmovss  xmm11, dword ptr [rbx+4]
    vmovss  xmm12, dword ptr [rbx+8]
    vmovss  xmm13, cs:__real@80000000
    vsubss  xmm6, xmm0, xmm10
    vmovss  xmm0, dword ptr [rsp+118h+pos+8]
    vsubss  xmm5, xmm1, xmm11
    vsubss  xmm4, xmm0, xmm12
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, xmm13
    vblendvps xmm0, xmm1, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
  }
  v39 = 0;
  __asm
  {
    vmulss  xmm0, xmm4, xmm1
    vmovss  [rsp+118h+var_E8], xmm0
    vmulss  xmm14, xmm6, xmm1
    vmulss  xmm15, xmm5, xmm1
  }
  if ( v15 > 0 )
  {
    __asm { vmovaps [rsp+118h+var_58], xmm9 }
    v43 = 0i64;
    __asm
    {
      vmovss  xmm9, cs:__real@3f7c28f6
      vmovaps [rsp+118h+var_38], xmm7
    }
    do
    {
      v45 = Path_ConvertIndexToNode(results[v43]);
      if ( v45 != nodeTesting )
      {
        pathnode_t::GetPos(v45, &v85);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+118h+var_D0]
          vmovss  xmm1, dword ptr [rsp+118h+var_D0+4]
          vsubss  xmm4, xmm0, xmm10
          vmovss  xmm0, dword ptr [rsp+118h+var_D0+8]
          vsubss  xmm6, xmm1, xmm11
          vsubss  xmm7, xmm0, xmm12
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm13
          vblendvps xmm0, xmm1, xmm8, xmm0
          vdivss  xmm5, xmm8, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm2, xmm1, xmm15
          vmulss  xmm3, xmm0, xmm14
          vmulss  xmm0, xmm5, xmm7
          vmulss  xmm1, xmm0, [rsp+118h+var_E8]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, xmm9
        }
        if ( !(v69 | v70) )
          ++v39;
      }
      ++v43;
    }
    while ( v43 < v15 );
    __asm
    {
      vmovaps xmm9, [rsp+118h+var_58]
      vmovaps xmm7, [rsp+118h+var_38]
    }
  }
  result = v39;
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+118h+var_A8]
    vmovaps xmm15, [rsp+118h+var_B8]
  }
  return result;
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
  int v15; 
  int NumOverlappingEntrancesForNode; 
  int v17; 
  vec3_t v18; 
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
      __asm { vmovsd  xmm0, qword ptr [rsp+0A8h+pos] }
      v15 = *curNumResults;
      v18.v[2] = pos.v[2];
      __asm { vmovsd  [rsp+0A8h+var_78], xmm0 }
      NumOverlappingEntrancesForNode = AI_FindEntrances_GetNumOverlappingEntrancesForNode(results, v15, v13, &v18);
      if ( NumOverlappingEntrancesForNode > v9 )
      {
        v9 = NumOverlappingEntrancesForNode;
        v12 = v11;
      }
      v17 = *curNumResults;
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
      v17 = *curNumResults;
    }
    results[v12] = results[v17 - 1];
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
  unsigned __int16 v20; 
  __int16 v21; 
  char v22; 
  const pathnode_t *v23; 
  gentity_s *ent; 
  bool v25; 
  bool v26; 
  unsigned __int16 v27; 
  bool v35; 
  __int16 v48; 
  unsigned int v49; 
  __int64 v55; 
  __int64 v56; 
  pathnode_t *v57; 
  int v58; 
  bool v59; 
  unsigned int v60; 
  __int64 v61; 
  const pathnode_t *v62; 
  unsigned int wLinkCount; 
  unsigned __int16 framesVisible; 
  int v77; 
  __int64 v78; 
  __int64 v79; 
  unsigned int v80; 
  int v81; 
  __int64 v107; 
  __int64 v108; 
  char v109; 
  unsigned int v111; 
  __int16 nodeIndex; 
  pathnode_t *node1; 
  unsigned __int16 v115; 
  unsigned int priority; 
  unsigned int v117; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v119; 
  vec3_t forward; 
  vec3_t pos; 
  vec3_t vPoint; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = search;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-98h], xmm11
  }
  if ( !search && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4251, ASSERT_TYPE_ASSERT, "( search )", (const char *)&queryFormat, "search") )
    __debugbreak();
  if ( !aiCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4252, ASSERT_TYPE_ASSERT, "( aiCommon )", (const char *)&queryFormat, "aiCommon") )
    __debugbreak();
  if ( !aiCommon->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4253, ASSERT_TYPE_ASSERT, "( aiCommon->ent )", (const char *)&queryFormat, "aiCommon->ent") )
    __debugbreak();
  if ( !aiCommon->ent->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4254, ASSERT_TYPE_ASSERT, "( aiCommon->ent->sentient )", (const char *)&queryFormat, "aiCommon->ent->sentient") )
    __debugbreak();
  currentNodeCount = _RBX->currentNodeCount;
  if ( currentNodeCount > 0x80u )
  {
    LODWORD(v107) = currentNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4255, ASSERT_TYPE_ASSERT, "( search->currentNodeCount ) <= ( 128 )", "search->currentNodeCount <= PATH_MAX_AI_SEARCH_NODES\n\t%i, %i", v107, 128) )
      __debugbreak();
  }
  totalNodeCount = _RBX->totalNodeCount;
  if ( totalNodeCount > 0x80u )
  {
    LODWORD(v108) = 128;
    LODWORD(v107) = totalNodeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4256, ASSERT_TYPE_ASSERT, "( search->totalNodeCount ) <= ( 128 )", "search->totalNodeCount <= PATH_MAX_AI_SEARCH_NODES\n\t%i, %i", v107, v108) )
      __debugbreak();
  }
  v20 = -1;
  nodeIndex = -1;
  v21 = -1;
  v22 = 1;
  v117 = 0;
  priority = 0;
  v109 = 1;
  v23 = Sentient_NearestNode(aiCommon->ent->sentient);
  node1 = (pathnode_t *)v23;
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4290, ASSERT_TYPE_ASSERT, "( nodeNearestAI )", (const char *)&queryFormat, "nodeNearestAI") )
    __debugbreak();
  AIActorInterface::AIActorInterface(&v119.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v119.m_newAgentInterface);
  v119.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v119.m_botInterface);
  v119.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v119.m_botAgentInterface);
  ent = aiCommon->ent;
  v119.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  v119.m_pAI = NULL;
  AICommonWrapper::Setup(&v119, ent);
  m_pAI = v119.m_pAI;
  v25 = v119.m_pAI == NULL;
  if ( !v119.m_pAI )
  {
    v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4292, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI");
    v25 = !v26;
    if ( v26 )
      __debugbreak();
  }
  v27 = _RBX->currentNodeCount;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ecx
    vdivss  xmm2, xmm1, xmm0
    vsubss  xmm0, xmm7, xmm2
    vcomiss xmm0, dword ptr [rbx+20h]
  }
  if ( !v25 )
  {
    *(_DWORD *)&_RBX->currentNodeCount = -65536;
    v27 = 0;
  }
  v35 = prioritizeForward;
  __asm { vmovss  xmm11, cs:__real@80000000 }
  if ( prioritizeForward )
  {
    AngleVectors(&aiCommon->ent->r.currentAngles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+0F0h+forward]
      vmovss  xmm4, dword ptr [rbp+0F0h+forward+4]
    }
    v27 = _RBX->currentNodeCount;
    v35 = prioritizeForward;
    __asm
    {
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, xmm11
      vblendvps xmm0, xmm2, xmm7, xmm0
      vdivss  xmm1, xmm7, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm1
      vmovss  dword ptr [rbp+0F0h+forward+4], xmm1
      vmovss  dword ptr [rbp+0F0h+forward], xmm0
    }
  }
  v48 = 15;
  if ( !slowSearch )
    v48 = 6;
  v115 = v48;
  v49 = 0;
  v111 = 0;
  if ( v27 )
  {
    __asm
    {
      vmovaps [rsp+1F0h+var_48+8], xmm6
      vmovaps [rsp+1F0h+var_68+8], xmm8
      vmovss  xmm8, cs:__real@3dcccccd
      vmovaps [rsp+1F0h+var_78+8], xmm9
      vmovss  xmm9, cs:__real@becccccd
      vmovaps [rsp+1F0h+var_88+8], xmm10
      vmovss  xmm10, cs:__real@42200000
      vmovaps [rsp+1F0h+var_A8+8], xmm12
      vmovss  xmm12, cs:__real@44fd2000
      vmovaps [rsp+1F0h+var_B8+8], xmm13
      vmovss  xmm13, cs:__real@3f451eb8
    }
    while ( 1 )
    {
      if ( v49 >= 0x80 )
      {
        LODWORD(v108) = 128;
        LODWORD(v107) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4313, ASSERT_TYPE_ASSERT, "(unsigned)( searchNodesIndex ) < (unsigned)( 128 )", "searchNodesIndex doesn't index PATH_MAX_AI_SEARCH_NODES\n\t%i not in [0, %i)", v107, v108) )
          __debugbreak();
        v49 = v111;
      }
      v55 = v49;
      v56 = 3i64 * v49 + 24;
      v57 = Path_ConvertIndexToNode(*((_WORD *)_RBX->searchOrigin.v + v56));
      pathnode_t::GetPos(v57, &pos);
      if ( !v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4219, ASSERT_TYPE_ASSERT, "( nodeTesting )", (const char *)&queryFormat, "nodeTesting") )
        __debugbreak();
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4220, ASSERT_TYPE_ASSERT, "( nodeNearestAI )", (const char *)&queryFormat, "nodeNearestAI") )
        __debugbreak();
      v58 = Path_NodesVisibleNoPeek(v57, v23);
      v59 = 0;
      if ( v58 || (v60 = 0, v59 = v57->dynamic.wLinkCount != 0, v57->dynamic.wLinkCount <= 0) )
      {
LABEL_48:
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+0F0h+pos+4]
          vmovss  xmm4, dword ptr [rbp+0F0h+pos]
          vmovss  xmm6, dword ptr [rbp+0F0h+pos+8]
          vsubss  xmm0, xmm5, dword ptr [rax+134h]
          vsubss  xmm2, xmm4, dword ptr [rax+130h]
          vsubss  xmm3, xmm6, dword ptr [rax+138h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm12
        }
        if ( v59 )
        {
          _RBX->nodes[v55].framesVisible = v115 + 1;
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm6, xmm10
            vmovss  dword ptr [rbp+0F0h+vPoint+8], xmm0
            vmovss  dword ptr [rbp+0F0h+vPoint], xmm4
            vmovss  dword ptr [rbp+0F0h+vPoint+4], xmm5
          }
          if ( AICommonInterface::PointInFov(m_pAI, &vPoint) )
          {
            if ( _RBX->nodes[v55].framesVisible >= 0xFFFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4329, ASSERT_TYPE_ASSERT, "( search->nodes[searchNodesIndex].framesVisible < 0xffff - 1 )", (const char *)&queryFormat, "search->nodes[searchNodesIndex].framesVisible < AI_SEARCH_NODE_MAX_VISIBLE_FRAMES - 1") )
              __debugbreak();
            ++_RBX->nodes[v55].framesVisible;
          }
        }
      }
      else
      {
        v61 = 0i64;
        while ( 1 )
        {
          v62 = Path_ConvertIndexToNode(v57->constant.Links[v61].nodeNum);
          if ( !Path_NodesVisibleNoPeek(v62, node1) )
            break;
          wLinkCount = v57->dynamic.wLinkCount;
          ++v60;
          ++v61;
          v59 = v60 < wLinkCount;
          if ( (int)v60 >= (int)wLinkCount )
            goto LABEL_48;
        }
      }
      framesVisible = _RBX->nodes[v55].framesVisible;
      if ( framesVisible > v115 )
      {
        v77 = _RBX->currentNodeCount;
        if ( (unsigned int)(v77 - 1) >= 0x80 )
        {
          LODWORD(v108) = 128;
          LODWORD(v107) = v77 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 4337, ASSERT_TYPE_ASSERT, "(unsigned)( (search->currentNodeCount-1) ) < (unsigned)( 128 )", "(search->currentNodeCount-1) doesn't index PATH_MAX_AI_SEARCH_NODES\n\t%i not in [0, %i)", v107, v108) )
            __debugbreak();
        }
        v78 = 3 * v55 + 24;
        v79 = 3i64 * _RBX->currentNodeCount + 21;
        *(float *)((char *)_RBX->searchOrigin.v + 2 * v78) = *(float *)((char *)_RBX->searchOrigin.v + 2 * v79);
        *((_WORD *)&_RBX->searchOrigin.y + v78) = *((_WORD *)&_RBX->searchOrigin.y + v79);
        --_RBX->currentNodeCount;
        v80 = v111 - 1;
LABEL_75:
        v22 = v109;
LABEL_76:
        v23 = node1;
        v35 = prioritizeForward;
        goto LABEL_77;
      }
      if ( !needsNodeReturn || !v109 )
      {
LABEL_74:
        v80 = v111;
        goto LABEL_75;
      }
      if ( _RBX->currentNodePicked == *((_WORD *)_RBX->searchOrigin.v + v56) )
      {
        v80 = v111;
        v22 = 0;
        v109 = 0;
        v20 = *((_WORD *)_RBX->searchOrigin.v + v56);
        goto LABEL_76;
      }
      if ( _RBX->mode == AI_SEARCH_QUICK && framesVisible )
        goto LABEL_74;
      v23 = node1;
      v81 = Path_NodesVisibleNoPeek(v57, node1);
      v35 = prioritizeForward;
      if ( v81 )
        break;
      if ( prioritizeForward )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0F0h+pos]
          vmovss  xmm1, dword ptr [rbp+0F0h+pos+4]
          vsubss  xmm5, xmm0, dword ptr [rax+130h]
          vsubss  xmm4, xmm1, dword ptr [rax+134h]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm1, xmm2, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcmpless xmm0, xmm3, xmm11
          vblendvps xmm0, xmm3, xmm7, xmm0
          vdivss  xmm1, xmm7, xmm0
          vmulss  xmm0, xmm4, xmm1
          vmulss  xmm3, xmm0, dword ptr [rbp+0F0h+forward+4]
          vmulss  xmm1, xmm5, xmm1
          vmulss  xmm2, xmm1, dword ptr [rbp+0F0h+forward]
          vaddss  xmm0, xmm3, xmm2
          vcomiss xmm0, xmm13
        }
        if ( _RBX->nodes[v55].priority > priority )
        {
          priority = _RBX->nodes[v55].priority;
          nodeIndex = _RBX->nodes[v55].nodeIndex;
        }
      }
      v22 = v109;
      if ( _RBX->nodes[v55].priority <= v117 )
        goto LABEL_73;
      v117 = _RBX->nodes[v55].priority;
      v20 = _RBX->nodes[v55].nodeIndex;
      v80 = v111;
LABEL_77:
      v111 = v80 + 1;
      v49 = v80 + 1;
      if ( v80 + 1 >= _RBX->currentNodeCount )
      {
        v21 = nodeIndex;
        __asm
        {
          vmovaps xmm13, [rsp+1F0h+var_B8+8]
          vmovaps xmm12, [rsp+1F0h+var_A8+8]
          vmovaps xmm10, [rsp+1F0h+var_88+8]
          vmovaps xmm9, [rsp+1F0h+var_78+8]
          vmovaps xmm8, [rsp+1F0h+var_68+8]
          vmovaps xmm6, [rsp+1F0h+var_48+8]
        }
        goto LABEL_79;
      }
    }
    v22 = v109;
LABEL_73:
    v80 = v111;
    goto LABEL_77;
  }
LABEL_79:
  __asm
  {
    vmovaps xmm11, [rsp+1F0h+var_98+8]
    vmovaps xmm7, [rsp+1F0h+var_58+8]
  }
  if ( needsNodeReturn )
  {
    if ( v22 )
    {
      if ( _RBX->mode == AI_SEARCH_QUICK && _RBX->currentNodePicked != 0xFFFF )
      {
        v20 = -1;
        goto LABEL_88;
      }
      if ( v35 && v21 != -1 )
        v20 = v21;
    }
    if ( v20 != 0xFFFF )
    {
LABEL_89:
      _RBX->currentNodePicked = v20;
      return v20;
    }
LABEL_88:
    _RBX->currentNodeCount = 0;
    goto LABEL_89;
  }
  return v20;
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

float __fastcall CustomSearchInfo_FindPath::ExposureCost(CustomSearchInfo_FindPath *this, double value, double maxValue, double percent)
{
  bool v11; 
  bool v12; 
  bool v13; 
  bool v14; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm8, xmm2
  }
  v11 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
  v12 = !v11;
  if ( !v11 )
  {
    v13 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
    v12 = !v13;
    if ( !v13 )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1521, ASSERT_TYPE_ASSERT, "( G_Bot_UsePathExposureCost() || G_Bot_SystemActive() )", (const char *)&queryFormat, "G_Bot_UsePathExposureCost() || G_Bot_SystemActive()");
      v12 = !v14;
      if ( v14 )
        __debugbreak();
    }
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm8, xmm7
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1522, ASSERT_TYPE_ASSERT, "( maxValue != 0 )", (const char *)&queryFormat, "maxValue != 0") )
    __debugbreak();
  __asm
  {
    vcomiss xmm6, xmm7
    vdivss  xmm1, xmm9, xmm8
    vmulss  xmm0, xmm1, cs:__real@43800000
    vmulss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
  return *(float *)&_XMM0;
}

/*
==============
CustomSearchInfo_FindPath::GetNodeCost
==============
*/
float CustomSearchInfo_FindPath::GetNodeCost(CustomSearchInfo_FindPath *this, pathnode_t *pSuccessor, const vec3_t *vGoalPos)
{
  bool v12; 
  pathnode_t *v16; 
  bool v54; 
  unsigned int v74; 
  bool v77; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  v12 = (unsigned __int64)&v86 == _security_cookie;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  xmm1, dword ptr [rcx+0Ch]
  }
  _RBX = this;
  v16 = pSuccessor;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovss  xmm8, cs:__real@47800000
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovss  xmm13, dword ptr [rdx+20h]
    vsubss  xmm3, xmm0, xmm13
    vmovss  xmm0, dword ptr [rcx+10h]
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovss  xmm14, dword ptr [rdx+24h]
    vsubss  xmm2, xmm1, xmm14
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, dword ptr [r8]
    vmovaps [rsp+148h+var_D8], xmm15
    vmovss  xmm15, dword ptr [rdx+28h]
    vsubss  xmm4, xmm0, xmm15
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm5, xmm3, xmm0
    vcomiss xmm5, xmm8
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm2, xmm1, xmm13
    vmovss  xmm1, dword ptr [r8+8]
    vsubss  xmm4, xmm1, xmm15
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
    vsubss  xmm3, xmm0, xmm14
  }
  if ( !v12 )
  {
    __asm
    {
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm8
    }
    _RAX = this->randomWeightIndex;
    __asm { vmovss  xmm6, dword ptr [rcx+rax*4+18h] }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+3Ch]
    vmovss  xmm8, cs:__real@3f800000
    vcomiss xmm0, xmm8
  }
  if ( !v12 )
  {
    __asm
    {
      vcomiss xmm0, xmm5
      vaddss  xmm6, xmm6, dword ptr [rcx+38h]
    }
  }
  if ( (pSuccessor->constant.spawnflags & 0x20) != 0 )
    __asm { vaddss  xmm6, xmm6, dword ptr [rcx+rax*4+28h] }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    __asm
    {
      vmovaps [rsp+148h+var_78], xmm9
      vmovss  xmm9, dword ptr [rbx+0E0h]
      vucomiss xmm9, xmm7
      vmovaps [rsp+148h+var_88], xmm10
      vmovss  xmm9, dword ptr [rbx+0E4h]
      vucomiss xmm9, xmm7
      vmovss  xmm9, dword ptr [rbx+0E8h]
      vucomiss xmm9, xmm7
      vmovss  xmm10, cs:__real@437f0000
      vmovss  xmm9, dword ptr [rbx+0ECh]
      vucomiss xmm9, xmm7
    }
    _RDI = _RBX->avoidExpPosPercent;
    __asm
    {
      vucomiss xmm7, dword ptr [rdi]
      vmovaps xmm9, [rsp+148h+var_78]
      vmovaps xmm10, [rsp+148h+var_88]
    }
  }
  v54 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
  __asm { vmovaps xmm8, [rsp+148h+var_68] }
  if ( v54 )
  {
    __asm
    {
      vucomiss xmm7, dword ptr [rbx+110h]
      vmovss  xmm2, dword ptr [rbx+114h]; max
      vcomiss xmm2, xmm7
      vmovss  xmm0, dword ptr [rbx+104h]
      vmovss  xmm3, dword ptr [rbx+108h]
      vsubss  xmm5, xmm0, xmm13
      vmovss  xmm0, dword ptr [rbx+10Ch]
      vsubss  xmm4, xmm3, xmm14
      vsubss  xmm0, xmm0, xmm15
      vmulss  xmm4, xmm4, xmm4
      vmulss  xmm3, xmm5, xmm5
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm5, xmm4, xmm3
      vaddss  xmm4, xmm5, xmm0
      vsqrtss xmm3, xmm4, xmm4
      vsubss  xmm0, xmm2, xmm3; val
      vmovaps xmm1, xmm7; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+110h]; percent
      vmovss  xmm2, dword ptr [rbx+114h]; maxValue
      vmovaps xmm1, xmm0; value
    }
    *(double *)&_XMM0 = CustomSearchInfo_FindPath::ExposureCost(_RBX, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vaddss  xmm6, xmm6, xmm0 }
    if ( _RBX->pathZoneCostsCount )
    {
      v74 = Path_NodeZoneFromNode(v16);
      if ( v74 != 255 )
      {
        if ( !_RBX->pathZoneCosts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1640, ASSERT_TYPE_ASSERT, "( pathZoneCosts )", (const char *)&queryFormat, "pathZoneCosts") )
          __debugbreak();
        if ( v74 >= _RBX->pathZoneCostsCount )
        {
          LODWORD(v88) = _RBX->pathZoneCostsCount;
          LODWORD(v87) = v74;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1641, ASSERT_TYPE_ASSERT, "(unsigned)( zone ) < (unsigned)( pathZoneCostsCount )", "zone doesn't index pathZoneCostsCount\n\t%i not in [0, %i)", v87, v88) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vaddss  xmm6, xmm6, xmm0
        }
      }
    }
  }
  v77 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE);
  __asm
  {
    vmovaps xmm15, [rsp+148h+var_D8]
    vmovaps xmm14, [rsp+148h+var_C8]
    vmovaps xmm13, [rsp+148h+var_B8]
    vmovaps xmm7, [rsp+148h+var_58]
  }
  if ( v77 && (v16->constant.spawnflags & 4) != 0 && v16->constant.type == 1 )
  {
    __asm
    {
      vmaxss  xmm0, xmm6, cs:__real@43800000
      vmulss  xmm6, xmm0, cs:__real@40000000
    }
  }
  __asm { vmovaps xmm0, xmm6 }
  _RBX->randomWeightIndex = (_RBX->randomWeightIndex + 1) % 4;
  __asm { vmovaps xmm6, [rsp+148h+var_48] }
  return *(float *)&_XMM0;
}

/*
==============
PathHeap_Compare
==============
*/
__int64 PathHeap_Compare(const PathHeap *heap, const unsigned int node1, const unsigned int node2)
{
  __int64 v3; 
  __int64 v5; 
  unsigned int nodeCount; 
  __int64 v14; 
  __int64 v15; 

  v3 = node2;
  v5 = node1;
  if ( !heap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1007, ASSERT_TYPE_ASSERT, "( heap )", (const char *)&queryFormat, "heap") )
    __debugbreak();
  if ( (unsigned int)v5 >= heap->size )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( node1 ) < (unsigned)( heap->size )", "node1 doesn't index heap->size\n\t%i not in [0, %i)", v14, heap->size) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= heap->size )
  {
    LODWORD(v15) = heap->size;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1009, ASSERT_TYPE_ASSERT, "(unsigned)( node2 ) < (unsigned)( heap->size )", "node2 doesn't index heap->size\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  nodeCount = pathData.nodeCount;
  if ( heap->nodes[v5] >= pathData.nodeCount )
  {
    LODWORD(v15) = pathData.nodeCount;
    LODWORD(v14) = heap->nodes[v5];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1010, ASSERT_TYPE_ASSERT, "(unsigned)( heap->nodes[node1] ) < (unsigned)( pathData.nodeCount )", "heap->nodes[node1] doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
    nodeCount = pathData.nodeCount;
  }
  if ( heap->nodes[v3] >= nodeCount )
  {
    LODWORD(v15) = nodeCount;
    LODWORD(v14) = heap->nodes[v3];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1011, ASSERT_TYPE_ASSERT, "(unsigned)( heap->nodes[node2] ) < (unsigned)( pathData.nodeCount )", "heap->nodes[node2] doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  _RDI = &pathData.nodes[heap->nodes[v5]];
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1014, ASSERT_TYPE_ASSERT, "( pathNode1 )", (const char *)&queryFormat, "pathNode1") )
    __debugbreak();
  _RBX = &pathData.nodes[heap->nodes[v3]];
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1016, ASSERT_TYPE_ASSERT, "( pathNode2 )", (const char *)&queryFormat, "pathNode2") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+0B4h]
    vaddss  xmm2, xmm1, dword ptr [rbx+0B0h]
    vmovss  xmm0, dword ptr [rdi+0B4h]
    vaddss  xmm3, xmm0, dword ptr [rdi+0B0h]
    vcomiss xmm3, xmm2
  }
  return 0i64;
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
    if ( (unsigned int)PathHeap_Compare(heap, node, v4) )
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
  int wPathLen; 
  signed int v15; 
  unsigned int wOrigPathLen; 
  bool v46; 
  bool v47; 
  bool v48; 
  bool v53; 
  __int64 v56; 
  bool v60; 
  bool v62; 
  bool v74; 
  bool v75; 
  bool v80; 
  double v90; 
  double v91; 
  double v92; 
  vec3_t inOutPos; 

  wPathLen = pPath->wPathLen;
  _RSI = vStartPos;
  _RBX = pPath;
  v15 = wPathLen - 1;
  if ( pPath->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 379, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( wPathLen && _RBX->wNegotiationStartNode > v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 380, ASSERT_TYPE_ASSERT, "(i == -1 || pPath->wNegotiationStartNode <= i)", (const char *)&queryFormat, "i == -1 || pPath->wNegotiationStartNode <= i") )
    __debugbreak();
  if ( v15 > _RBX->wNegotiationStartNode )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovaps [rsp+138h+var_38], xmm6
      vmovaps [rsp+138h+var_48], xmm7
      vmovaps [rsp+138h+var_58], xmm8
      vmovaps [rsp+138h+var_68], xmm9
      vmovaps [rsp+138h+var_78], xmm10
      vmovaps [rsp+138h+var_88], xmm11
      vmovaps [rsp+138h+var_98], xmm12
      vmovss  dword ptr [rsp+138h+inOutPos], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vmovaps [rsp+138h+var_A8], xmm13
      vmovaps [rsp+138h+var_B8], xmm14
      vmovaps [rsp+138h+var_C8], xmm15
      vmovss  dword ptr [rsp+138h+inOutPos+4], xmm1
      vmovss  dword ptr [rsp+138h+inOutPos+8], xmm0
    }
    Path_LocalizePos(_RBX, &inOutPos);
    __asm
    {
      vmovss  xmm12, dword ptr [rsp+138h+inOutPos]
      vmovss  xmm13, dword ptr [rsp+138h+inOutPos+4]
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm15, xmm15, xmm15
      vsubss  xmm1, xmm12, dword ptr [rcx+rbx]
      vsubss  xmm0, xmm13, dword ptr [rcx+rbx+4]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm14, xmm2, xmm2
    }
    if ( wPathLen > _RBX->wOrigPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 393, ASSERT_TYPE_ASSERT, "(i < pPath->wOrigPathLen)", (const char *)&queryFormat, "i < pPath->wOrigPathLen") )
      __debugbreak();
    __asm
    {
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm11, cs:__real@47000000
    }
    _RSI = &_RBX->pts[v15];
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm1, dword ptr [rsi+4]
      }
      wOrigPathLen = _RBX->wOrigPathLen;
      _RDI = _RSI;
      __asm
      {
        vsubss  xmm7, xmm0, xmm12
        vsubss  xmm9, xmm1, xmm13
        vmulss  xmm0, xmm9, xmm9
        vmulss  xmm2, xmm7, xmm7
        vaddss  xmm1, xmm2, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, xmm14
        vblendvps xmm1, xmm15, xmm8, xmm0
      }
      ++v15;
      ++_RSI;
      __asm
      {
        vmovaps xmm15, xmm1
        vmovss  [rsp+138h+var_E8], xmm1
        vminss  xmm14, xmm3, xmm14
      }
      v46 = v15 < wOrigPathLen;
      v47 = v15 <= wOrigPathLen;
      if ( v15 >= (int)wOrigPathLen )
        break;
      __asm { vucomiss xmm6, dword ptr [rdi+0Ch] }
      if ( v15 == wOrigPathLen )
      {
        __asm { vucomiss xmm6, dword ptr [rdi+10h] }
        if ( v15 == wOrigPathLen )
        {
          v46 = 0;
          v47 = (_RBX->flags & 0x10000) == 0;
          if ( (_RBX->flags & 0x10000) == 0 )
          {
            v48 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 410, ASSERT_TYPE_ASSERT, "(pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & (1 << 16))", (const char *)&queryFormat, "pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & PATH_FLAG_3D");
            v46 = 0;
            v47 = !v48;
            if ( v48 )
              __debugbreak();
          }
        }
      }
      __asm
      {
        vcomiss xmm6, dword ptr [rdi+14h]
        vmulss  xmm0, xmm7, dword ptr [rdi+10h]
        vmulss  xmm1, xmm9, dword ptr [rdi+0Ch]
        vsubss  xmm7, xmm1, xmm0
        vandps  xmm7, xmm7, xmm10
      }
      if ( !v46 )
      {
        v53 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 412, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0");
        v47 = !v53;
        if ( v53 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm7, dword ptr [rdi+14h]
        vaddss  xmm8, xmm8, xmm0
        vcomiss xmm8, xmm11
      }
    }
    while ( v47 );
    __asm { vmovaps xmm14, [rsp+138h+var_B8] }
    v56 = _RBX->wPathLen - 2i64;
    __asm
    {
      vmovaps xmm11, [rsp+138h+var_88]
      vmovaps xmm9, [rsp+138h+var_68]
      vmovaps xmm8, [rsp+138h+var_58]
    }
    v60 = __CFADD__(_RBX, 28 * v56);
    if ( !&_RBX->pts[v56] )
    {
      v62 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 348, ASSERT_TYPE_ASSERT, "(pt)", (const char *)&queryFormat, "pt");
      v60 = 0;
      if ( v62 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm6, dword ptr [rdi+14h]
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  xmm2, dword ptr [rdi]
      vsubss  xmm1, xmm0, xmm13
      vmulss  xmm3, xmm1, dword ptr [rdi+0Ch]
      vmovaps xmm13, [rsp+138h+var_A8]
      vsubss  xmm0, xmm2, xmm12
      vmulss  xmm1, xmm0, dword ptr [rdi+10h]
      vmovaps xmm12, [rsp+138h+var_98]
      vsubss  xmm7, xmm3, xmm1
      vandps  xmm7, xmm7, xmm10
      vmovaps xmm10, [rsp+138h+var_78]
    }
    if ( !v60 )
    {
      v74 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 419, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0");
      v60 = 0;
      if ( v74 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, dword ptr [rbx+3D8h] }
    if ( !v60 )
    {
      v75 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 420, ASSERT_TYPE_ASSERT, "(pPath->fCurrLength > 0)", (const char *)&queryFormat, "pPath->fCurrLength > 0");
      v60 = 0;
      if ( v75 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+14h]
      vmovss  xmm0, dword ptr [rbx+3D8h]
      vcomiss xmm1, xmm0
    }
    if ( v60 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+138h+var_F8], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+138h+var_100], xmm1
      }
      v80 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 421, ASSERT_TYPE_ASSERT, "( pt->fOrigLength ) >= ( pPath->fCurrLength )", "%s >= %s\n\t%g, %g", "pt->fOrigLength", "pPath->fCurrLength", v91, v92);
      v60 = 0;
      if ( v80 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+14h]
      vsubss  xmm1, xmm0, dword ptr [rbx+3D8h]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm7, xmm2, xmm15
      vmovaps xmm15, [rsp+138h+var_C8]
      vcomiss xmm7, xmm6
      vmovaps xmm6, [rsp+138h+var_38]
    }
    if ( v60 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+138h+var_110], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 424, ASSERT_TYPE_ASSERT, "( ( closestAmount >= 0 ) )", "( closestAmount ) = %g", v90) )
        __debugbreak();
    }
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [rbx+3BCh]
      vmovaps xmm7, [rsp+138h+var_48]
      vmovss  dword ptr [rbx+3BCh], xmm0
    }
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
  int v8; 
  int v9; 
  char v10; 
  unsigned __int16 *p_iNodeNum; 
  __int64 v17; 
  const pathnode_t *v18; 
  double v19; 
  double v20; 

  _RBX = pPath;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3347, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( _RBX->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3348, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  if ( _RBX->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3349, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( _RBX->wNegotiationStartNode > _RBX->lookaheadNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3350, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode <= pPath->lookaheadNextNode)", (const char *)&queryFormat, "pPath->wNegotiationStartNode <= pPath->lookaheadNextNode") )
    __debugbreak();
  if ( _RBX->lookaheadNextNode >= _RBX->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3351, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
    __debugbreak();
  wPathLen = _RBX->wPathLen;
  if ( wPathLen > 1 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
    _RCX = 28i64 * wPathLen;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx-24h]
      vcomiss xmm1, xmm0
    }
    if ( !(((unsigned __int128)(28 * (__int128)wPathLen) >> 64 != 0) | v10) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+48h+var_10], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+48h+var_18], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3352, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v19, v20) )
        __debugbreak();
    }
  }
  v8 = _RBX->wPathLen;
  v9 = v8 - 1;
  if ( v8 - 1 < _RBX->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3355, ASSERT_TYPE_ASSERT, "(i >= pPath->wNegotiationStartNode)", (const char *)&queryFormat, "i >= pPath->wNegotiationStartNode") )
    __debugbreak();
  _RCX = 28i64 * v9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rbx]
    vucomiss xmm0, dword ptr [rbx+3DCh]
  }
  if ( !v10 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rbx+4]
    vucomiss xmm0, dword ptr [rbx+3E0h]
  }
  if ( !v10 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rbx+8]
    vucomiss xmm0, dword ptr [rbx+3E4h]
  }
  if ( !v10 )
LABEL_26:
    v9 = v8 - 2;
  if ( v9 >= _RBX->wNegotiationStartNode )
  {
    p_iNodeNum = &_RBX->pts[v9].iNodeNum;
    do
    {
      if ( ((1 << LOBYTE(Path_ConvertIndexToNode(*p_iNodeNum)->constant.type)) & 0x866C9FFC) == 0 )
        break;
      --v9;
      p_iNodeNum -= 14;
    }
    while ( v9 >= _RBX->wNegotiationStartNode );
  }
  if ( v9 < _RBX->wNegotiationStartNode )
  {
    v9 = _RBX->wPathLen - 1;
    if ( ((1 << LOBYTE(Path_ConvertIndexToNode(_RBX->pts[v9].iNodeNum)->constant.type)) & 0x866C9FFC) != 0 )
      return 7;
  }
  v17 = v9;
  if ( ((1 << LOBYTE(Path_ConvertIndexToNode(_RBX->pts[v17].iNodeNum)->constant.type)) & 0x866C9FFC) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3371, ASSERT_TYPE_ASSERT, "(Path_IsPathStanceNode( Path_ConvertIndexToNode( pPath->pts[i].iNodeNum ) ))", (const char *)&queryFormat, "Path_IsPathStanceNode( Path_ConvertIndexToNode( pPath->pts[i].iNodeNum ) )") )
    __debugbreak();
  v18 = Path_ConvertIndexToNode(_RBX->pts[v17].iNodeNum);
  return Path_AllowedStancesForNode(v18);
}

/*
==============
Path_BackTrack
==============
*/

void __fastcall Path_BackTrack(path_t *pPath, int newPathLength, double lookaheadIncreaseAmount)
{
  char v6; 
  char v9; 
  bool v12; 
  int v13; 
  double v18; 
  double v19; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = pPath;
  v6 = newPathLength;
  __asm { vmovaps xmm6, xmm2 }
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2781, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  _RBX->wPathLen = v6;
  if ( v6 > 1 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
    _RCX = 28i64 * v6;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx-24h]
      vcomiss xmm1, xmm0
    }
    if ( !(((unsigned __int128)(28 * (__int128)v6) >> 64 != 0) | v9) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+58h+var_20], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+58h+var_28], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2784, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v18, v19) )
        __debugbreak();
    }
  }
  v12 = (_RBX->flags & 0x8000) != 0;
  v13 = _RBX->flags | 0x8000;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  _RBX->flags = v13;
  if ( !(v12 | v9) )
  {
    if ( (v13 & 2) == 0 )
      __asm { vmulss  xmm6, xmm6, cs:__real@3f400000 }
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rbx+3BCh]
      vminss  xmm1, xmm0, cs:__real@47800000
      vmovss  dword ptr [rbx+3BCh], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
Path_BacktrackCompletedPath
==============
*/
void Path_BacktrackCompletedPath(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vLocalWishDelta)
{
  int v15; 
  __int64 v40; 
  bool v42; 
  bool v43; 
  bool v49; 
  __int64 v62; 
  bool v73; 
  bool v83; 
  bool v84; 
  bool v85; 
  bool v99; 
  bool v101; 
  bool v106; 
  int flags; 
  char v116; 
  double v134; 
  __int64 v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 
  vec3_t inOutPos; 
  char v148; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps [rsp+138h+var_C8], xmm15
  }
  _RBX = pPath;
  v15 = pPath->wPathLen - 1;
  if ( vLocalWishDelta )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [r8]
      vmovss  xmm6, dword ptr [r8+4]
      vmovss  xmm3, dword ptr [r8+8]
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm6, xmm6, xmm1
      vmovss  [rsp+138h+var_E8], xmm6
      vmulss  xmm15, xmm5, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+3A4h]
      vmovss  xmm15, dword ptr [rcx+3A0h]
      vmovss  [rsp+138h+var_E8], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+138h+inOutPos], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+138h+inOutPos+8], xmm0
    vmovss  dword ptr [rsp+138h+inOutPos+4], xmm1
  }
  Path_LocalizePos(pPath, &inOutPos);
  if ( v15 <= _RBX->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2836, ASSERT_TYPE_ASSERT, "(i > pPath->wNegotiationStartNode)", (const char *)&queryFormat, "i > pPath->wNegotiationStartNode") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3BCh]
    vmulss  xmm14, xmm0, cs:__real@3e34b4b2
    vmovss  xmm9, dword ptr [rsp+138h+inOutPos]
    vmovss  xmm12, dword ptr [rsp+138h+inOutPos+4]
  }
  v40 = 28i64 * (v15 - 1);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v42 = (path_t *)((char *)_RBX + v40) == NULL;
  v43 = __CFADD__(_RBX, v40) || v42;
  _RDI = (float *)((char *)_RBX + v40);
  __asm
  {
    vucomiss xmm7, dword ptr [rdi+0Ch]
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vsubss  xmm6, xmm0, xmm9
    vsubss  xmm8, xmm1, xmm12
  }
  if ( v42 )
  {
    __asm { vucomiss xmm7, dword ptr [rdi+10h] }
    if ( v42 )
    {
      v43 = (_RBX->flags & 0x10000) == 0;
      if ( (_RBX->flags & 0x10000) == 0 )
      {
        v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2842, ASSERT_TYPE_ASSERT, "(Vec2NotZero( nextPt->fDir2D ) || pPath->flags & (1 << 16))", (const char *)&queryFormat, "Vec2NotZero( nextPt->fDir2D ) || pPath->flags & PATH_FLAG_3D");
        v43 = !v49;
        if ( v49 )
          __debugbreak();
      }
    }
  }
  __asm
  {
    vmulss  xmm1, xmm8, dword ptr [rdi+0Ch]
    vmulss  xmm0, xmm6, dword ptr [rdi+10h]
    vmovss  xmm13, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm2, dword ptr [rdi+14h]
    vsubss  xmm10, xmm1, xmm0
    vmovss  xmm1, dword ptr [rbx+3D8h]
    vcomiss xmm1, xmm2
    vandps  xmm10, xmm10, xmm13
    vmulss  xmm0, xmm1, xmm10
    vxorps  xmm11, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  if ( !v43 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rsp+138h+var_F8], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+138h+var_100], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2847, ASSERT_TYPE_ASSERT, "( pPath->fCurrLength ) <= ( nextPt->fOrigLength )", "%s <= %s\n\t%g, %g", "pPath->fCurrLength", "nextPt->fOrigLength", v138, v142) )
      __debugbreak();
  }
  if ( v15 >= _RBX->wOrigPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2851, ASSERT_TYPE_ASSERT, "(i < pPath->wOrigPathLen)", (const char *)&queryFormat, "i < pPath->wOrigPathLen") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@47800000 }
  v62 = 28i64 * v15;
  v43 = __CFADD__(_RBX, v62) || (path_t *)((char *)_RBX + v62) == NULL;
  _R14 = (char *)_RBX + v62;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm9, xmm0, xmm9
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm3, xmm0, dword ptr [rsp+138h+inOutPos+8]
    vsubss  xmm12, xmm1, xmm12
    vmulss  xmm2, xmm12, xmm12
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm0, xmm2, xmm1
    vcomiss xmm0, xmm6
  }
  if ( !v43 )
    goto LABEL_54;
  v73 = (_RBX->flags & 0x10000) == 0;
  if ( (_RBX->flags & 0x10000) != 0 )
    goto LABEL_21;
  __asm
  {
    vandps  xmm3, xmm3, xmm13
    vcomiss xmm3, cs:__real@42900000
  }
  if ( (_RBX->flags & 0x10000) == 0 )
  {
LABEL_21:
    __asm
    {
      vmovss  xmm2, [rsp+138h+var_E8]
      vmulss  xmm1, xmm12, xmm2
      vmulss  xmm0, xmm9, xmm15
      vaddss  xmm8, xmm1, xmm0
      vcomiss xmm8, xmm7
    }
    if ( (_RBX->flags & 0x10000) != 0 )
    {
      __asm { vcomiss xmm7, dword ptr [rdi+14h] }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2866, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+14h]
        vmulss  xmm6, xmm0, xmm10
        vaddss  xmm11, xmm11, xmm6
        vcomiss xmm11, xmm14
        vsubss  xmm8, xmm11, xmm6
        vcomiss xmm8, xmm14
      }
      v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2872, ASSERT_TYPE_ASSERT, "(amount - amountInc < largestAmount)", (const char *)&queryFormat, "amount - amountInc < largestAmount");
      v84 = !v83;
      if ( v83 )
        __debugbreak();
      __asm { vcomiss xmm6, xmm7 }
      if ( !v83 )
      {
        v85 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2873, ASSERT_TYPE_ASSERT, "(amountInc > 0)", (const char *)&queryFormat, "amountInc > 0");
        v84 = !v85;
        if ( v85 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm12, cs:__real@3f800000
        vsubss  xmm0, xmm11, xmm14
        vdivss  xmm6, xmm0, xmm6
        vcomiss xmm6, xmm7
        vcomiss xmm6, xmm12
      }
      if ( !v84 )
      {
        __asm
        {
          vmovsd  xmm0, cs:__real@3ff0000000000000
          vmovsd  [rsp+138h+var_100], xmm0
          vxorpd  xmm1, xmm1, xmm1
          vmovsd  [rsp+138h+var_108], xmm1
          vcvtss2sd xmm2, xmm6, xmm6
          vmovsd  [rsp+138h+var_110], xmm2
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2875, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( fraction ) && ( fraction ) <= ( 1.f )", "fraction not in [0.f, 1.f]\n\t%g not in [%g, %g]", v134, v136, v139) )
          __debugbreak();
      }
      __asm { vmovaps xmm11, xmm8 }
$handleFraction:
      __asm { vcomiss xmm7, dword ptr [rdi+14h] }
      v106 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2916, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0");
      if ( v106 )
        __debugbreak();
      __asm
      {
        vmulss  xmm8, xmm6, dword ptr [rdi+14h]
        vcomiss xmm8, dword ptr [rdi+14h]
      }
      if ( v106 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2919, ASSERT_TYPE_ASSERT, "(dist <= nextPt->fOrigLength)", (const char *)&queryFormat, "dist <= nextPt->fOrigLength") )
          __debugbreak();
        __asm { vcomiss xmm8, dword ptr [rdi+14h] }
      }
      if ( v15 - 1 > _RBX->wNegotiationStartNode )
      {
        _RBX->vCurrPoint.v[0] = *_RDI;
        _RBX->vCurrPoint.v[1] = _RDI[1];
        _RBX->vCurrPoint.v[2] = _RDI[2];
        __asm { vmovaps xmm2, xmm11; lookaheadIncreaseAmount }
        _RBX->fCurrLength = *((float *)&_RBX->pts[v15 - 1] - 2);
        Path_BackTrack(_RBX, v15, *(double *)&_XMM2);
      }
      goto LABEL_74;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+138h+inOutPos+4]
      vmulss  xmm3, xmm1, xmm2
      vmovss  xmm2, dword ptr [rdi]
      vsubss  xmm0, xmm2, dword ptr [rsp+138h+inOutPos]
      vmulss  xmm1, xmm0, xmm15
      vaddss  xmm9, xmm3, xmm1
      vcomiss xmm9, xmm7
    }
    if ( (_RBX->flags & 0x10000) != 0 )
    {
      __asm { vcomiss xmm8, xmm7 }
      if ( (_RBX->flags & 0x10000) != 0 )
      {
        v99 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2905, ASSERT_TYPE_ASSERT, "(d1 <= 0)", (const char *)&queryFormat, "d1 <= 0");
        v73 = !v99;
        if ( v99 )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm6, xmm8, xmm9
        vucomiss xmm6, xmm7
      }
      if ( v73 )
      {
        v101 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2906, ASSERT_TYPE_ASSERT, "(d1 - d2)", (const char *)&queryFormat, "d1 - d2");
        v73 = !v101;
        if ( v101 )
          __debugbreak();
      }
      __asm
      {
        vdivss  xmm6, xmm8, xmm6
        vcomiss xmm6, xmm7
        vmovss  xmm12, cs:__real@3f800000
        vcomiss xmm6, xmm12
      }
      if ( !v73 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+138h+var_F0], xmm0
          vcvtss2sd xmm1, xmm9, xmm9
          vmovsd  [rsp+138h+var_F8], xmm1
          vcvtss2sd xmm2, xmm8, xmm8
          vmovsd  [rsp+138h+var_100], xmm2
        }
        LODWORD(v135) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2913, ASSERT_TYPE_ASSERT, "(fraction <= 1.f)", "%s\n\ti: %d, d1: %f, d2: %f, fraction: %f", "fraction <= 1.f", v135, v140, v143, v144) )
          __debugbreak();
      }
      goto $handleFraction;
    }
    __asm { vcomiss xmm8, xmm7 }
    if ( (_RBX->flags & 0x10000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2950, ASSERT_TYPE_ASSERT, "(d1 <= 0)", (const char *)&queryFormat, "d1 <= 0") )
      __debugbreak();
  }
  else
  {
LABEL_54:
    _RBX->flags |= 0x20u;
  }
  _RBX->vCurrPoint.v[0] = *_RDI;
  _RBX->vCurrPoint.v[1] = _RDI[1];
  _RBX->vCurrPoint.v[2] = _RDI[2];
  __asm { vcomiss xmm7, dword ptr [rdi+14h] }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2956, ASSERT_TYPE_ASSERT, "(nextPt->fOrigLength > 0)", (const char *)&queryFormat, "nextPt->fOrigLength > 0") )
    __debugbreak();
  if ( v15 <= _RBX->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2958, ASSERT_TYPE_ASSERT, "(i > pPath->wNegotiationStartNode)", (const char *)&queryFormat, "i > pPath->wNegotiationStartNode") )
    __debugbreak();
  if ( v15 <= _RBX->wNegotiationStartNode + 1 )
  {
    __asm { vmovaps xmm1, xmm7 }
  }
  else
  {
    _RAX = 28i64 * v15;
    __asm { vmovss  xmm1, dword ptr [rax+rbx-24h] }
  }
  _RBX->wPathLen = v15;
  __asm { vmovss  dword ptr [rbx+3D8h], xmm1 }
  if ( (char)v15 > 1 )
  {
    _RCX = 28i64 * (char)v15;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx-24h]
      vcomiss xmm1, xmm0
    }
    if ( (unsigned __int128)(28 * (__int128)(char)v15) >> 64 == 0 && !v42 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+138h+var_100], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+138h+var_108], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2962, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v137, v141) )
        __debugbreak();
    }
  }
  flags = _RBX->flags;
  if ( (flags & 0x4000) == 0 )
  {
    __asm
    {
      vmulss  xmm0, xmm10, dword ptr [rdi+14h]
      vaddss  xmm1, xmm11, xmm0
      vcomiss xmm1, xmm7
    }
    if ( !(((_RBX->flags & 0x4000) != 0) | v116) )
    {
      __asm { vmovss  xmm0, cs:__real@3f400000 }
      if ( (flags & 2) == 0 )
        __asm { vmulss  xmm1, xmm1, xmm0 }
      if ( (flags & 0x20) != 0 )
        __asm { vmulss  xmm1, xmm1, xmm0 }
      __asm
      {
        vaddss  xmm1, xmm1, dword ptr [rbx+3BCh]
        vcmpltss xmm0, xmm6, xmm1
        vblendvps xmm0, xmm1, xmm6, xmm0
        vmovss  dword ptr [rbx+3BCh], xmm0
      }
    }
  }
LABEL_74:
  _R11 = &v148;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, [rsp+138h+var_C8]
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
  char v21; 
  bool v29; 
  bool v30; 
  bool v31; 
  bool v33; 
  int flags; 
  int v37; 
  int v39; 
  int v43; 
  int v63; 
  int v64; 
  bool v65; 
  bool v66; 
  unsigned int v88; 
  unsigned int v89; 
  float fmt; 
  double lookaheadNextNode; 
  __int64 maxLookaheadAmountIfReduce; 
  double maxLookaheadAmountIfReducea; 
  float maxLookaheadAmountIfReduceb; 
  Bounds *boundsa; 
  Bounds *boundsb; 
  Bounds *boundsc; 
  double v152; 
  double v153; 
  double v154; 
  __int64 v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  vec3_t inOutPos; 
  char v172; 

  __asm
  {
    vmovaps [rsp+158h+var_88], xmm10
    vmovaps [rsp+158h+var_98], xmm11
    vmovaps [rsp+158h+var_A8], xmm12
  }
  _R15 = vStartPos;
  _RBX = pPath;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3081, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( _RBX->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3082, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  if ( _RBX->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3083, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( _RBX->wNegotiationStartNode >= _RBX->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3084, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->wNegotiationStartNode < pPath->wPathLen") )
    __debugbreak();
  wPathLen = _RBX->wPathLen;
  if ( wPathLen > 1 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
    _RCX = 28i64 * wPathLen;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx-24h]
      vcomiss xmm1, xmm0
    }
    if ( !(((unsigned __int128)(28 * (__int128)wPathLen) >> 64 != 0) | v21) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+158h+bounds], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+158h+maxLookaheadAmountIfReduce], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3085, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", maxLookaheadAmountIfReducea, *(double *)&boundsa) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm12, dword ptr [rbx+3BCh]
    vmovss  [rsp+158h+var_F8], xmm12
    vxorps  xmm11, xmm11, xmm11
    vxorps  xmm10, xmm10, xmm10
  }
  v29 = (v156 & 0x7F800000u) < 0x7F800000;
  v30 = (v156 & 0x7F800000u) <= 0x7F800000;
  if ( (v156 & 0x7F800000) == 2139095040 )
  {
    v31 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3090, ASSERT_TYPE_SANITY, "( !IS_NAN( lookaheadAmount ) )", (const char *)&queryFormat, "!IS_NAN( lookaheadAmount )");
    v29 = 0;
    v30 = !v31;
    if ( v31 )
      __debugbreak();
  }
  __asm { vcomiss xmm12, xmm11 }
  if ( v30 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm12, xmm12
      vmovsd  qword ptr [rsp+158h+lookaheadNextNode], xmm0
    }
    v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3091, ASSERT_TYPE_ASSERT, "( ( lookaheadAmount > 0 ) )", "( lookaheadAmount ) = %g", lookaheadNextNode);
    v29 = 0;
    if ( v33 )
      __debugbreak();
  }
  __asm { vcomiss xmm11, dword ptr [rbx+3D8h] }
  if ( v29 && _RBX->wPathLen >= 2 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vmovss  xmm1, dword ptr [r15+4]
    }
    flags = _RBX->flags;
    v37 = 1;
    __asm
    {
      vmovaps [rsp+158h+var_48], xmm6
      vmovaps [rsp+158h+var_58], xmm7
      vmovaps [rsp+158h+var_68], xmm8
      vmovaps [rsp+158h+var_78], xmm9
      vmovss  dword ptr [rsp+158h+inOutPos], xmm0
      vmovss  xmm0, dword ptr [r15+8]
      vmovaps [rsp+158h+var_B8], xmm13
      vmovaps [rsp+158h+var_C8], xmm14
      vmovaps [rsp+158h+var_D8], xmm15
      vmovss  dword ptr [rsp+158h+inOutPos+4], xmm1
      vmovss  dword ptr [rsp+158h+inOutPos+8], xmm0
    }
    v160 = flags;
    Path_LocalizePos(_RBX, &inOutPos);
    v39 = _RBX->wPathLen - 2;
    if ( v39 < _RBX->wNegotiationStartNode )
    {
LABEL_49:
      __asm { vmovaps xmm3, xmm10; totalArea }
      Path_CalcLookahead_Completed(_RBX, _R15, bReduceLookaheadAmount, *(float *)&_XMM3, bounds);
    }
    else
    {
      __asm
      {
        vmovss  xmm15, dword ptr [rsp+158h+inOutPos+4]
        vmovss  xmm13, cs:__real@3f800000
        vmovss  xmm14, cs:__real@3e3126e9
      }
      v43 = v39 + 3;
      _RDI = (__int64)&_RBX->pts[v39 - 1].vOrigPoint.y;
      while ( 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+18h]
          vmovss  [rsp+158h+var_F8], xmm0
        }
        if ( (v157 & 0x7F800000) == 2139095040 )
          goto LABEL_62;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1Ch]
          vmovss  [rsp+158h+var_F8], xmm0
        }
        if ( (v158 & 0x7F800000) == 2139095040 )
          goto LABEL_62;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+20h]
          vmovss  [rsp+158h+var_F8], xmm0
        }
        if ( (v159 & 0x7F800000) == 2139095040 )
        {
LABEL_62:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3113, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pt->vOrigPoint )[0] ) && !IS_NAN( ( pt->vOrigPoint )[1] ) && !IS_NAN( ( pt->vOrigPoint )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pt->vOrigPoint )[0] ) && !IS_NAN( ( pt->vOrigPoint )[1] ) && !IS_NAN( ( pt->vOrigPoint )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+1Ch]
          vmovss  xmm2, dword ptr [rdi+18h]
          vsubss  xmm1, xmm0, xmm15
          vmulss  xmm3, xmm1, dword ptr [rdi+24h]
          vsubss  xmm0, xmm2, dword ptr [rsp+158h+inOutPos]
          vmulss  xmm1, xmm0, dword ptr [rdi+28h]
          vsubss  xmm9, xmm3, xmm1
          vandps  xmm9, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        }
        if ( v37 )
          __asm { vmovss  xmm6, dword ptr [rbx+3D8h] }
        else
          __asm { vmovss  xmm6, dword ptr [rdi+2Ch] }
        __asm { vcomiss xmm6, xmm11 }
        if ( !v37 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+3D8h]
            vmovss  xmm1, dword ptr [rdi+2Ch]
          }
          LODWORD(v155) = v39;
          __asm
          {
            vcvtss2sd xmm0, xmm0, xmm0
            vmovsd  [rsp+158h+var_110], xmm0
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  [rsp+158h+var_118], xmm1
            vcvtss2sd xmm2, xmm6, xmm6
            vmovsd  [rsp+158h+bounds], xmm2
          }
          LODWORD(maxLookaheadAmountIfReduce) = (unsigned __int8)v37;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3117, ASSERT_TYPE_ASSERT, "(fLength > 0)", "%s\n\tbAtStart:%d fLength:%f fOrigLength:%f fCurrLength:%f index:%d", "fLength > 0", maxLookaheadAmountIfReduce, *(double *)&boundsb, v152, v154, v155) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm6, xmm9
          vaddss  xmm10, xmm10, xmm0
        }
        if ( _RBX->minLookAheadNodes == 2 )
        {
          v63 = _RBX->wPathLen;
          if ( v43 == v63 )
          {
            v64 = v63 - 2;
            v65 = v39 < (unsigned int)v64;
            if ( v39 >= v64 )
            {
              v66 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3046, ASSERT_TYPE_ASSERT, "(currentNode < pPath->wPathLen - 2)", (const char *)&queryFormat, "currentNode < pPath->wPathLen - 2");
              v65 = 0;
              if ( v66 )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rdi-4]
              vsubss  xmm4, xmm0, dword ptr [rdi+34h]
              vmovss  xmm1, dword ptr [rdi]
              vsubss  xmm5, xmm1, dword ptr [rdi+38h]
              vmovss  xmm7, dword ptr [rdi+0Ch]
              vmovss  xmm8, dword ptr [rdi+8]
              vmulss  xmm0, xmm4, xmm4
              vmulss  xmm2, xmm5, xmm5
              vaddss  xmm1, xmm2, xmm0
              vsqrtss xmm3, xmm1, xmm1
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm13, xmm0
              vdivss  xmm1, xmm13, xmm0
              vmulss  xmm0, xmm1, xmm4
              vmulss  xmm1, xmm1, xmm5
              vmulss  xmm2, xmm1, xmm7
              vmulss  xmm3, xmm0, xmm8
              vaddss  xmm0, xmm3, xmm2
              vcomiss xmm0, cs:__real@3f5db22d
            }
            if ( !v65 )
            {
              __asm
              {
                vmulss  xmm1, xmm8, dword ptr [rdi+24h]
                vmulss  xmm0, xmm7, dword ptr [rdi+28h]
                vaddss  xmm1, xmm1, xmm0
                vcomiss xmm1, xmm14
              }
              ++_RBX->minLookAheadNodes;
            }
          }
        }
        v88 = _RBX->wPathLen - 2;
        v89 = v39 + _RBX->minLookAheadNodes;
        if ( (int)v89 <= (int)v88 )
        {
          __asm { vcomiss xmm10, xmm12 }
          if ( v89 >= v88 )
            break;
        }
        --v39;
        --v43;
        _RDI -= 28i64;
        v37 = 0;
        if ( v39 < _RBX->wNegotiationStartNode )
          goto LABEL_49;
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+2Ch]
        vcomiss xmm6, xmm1
        vsubss  xmm0, xmm10, xmm12
        vdivss  xmm7, xmm0, xmm9
      }
      if ( v89 > v88 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+158h+var_118], xmm0
          vcvtss2sd xmm1, xmm6, xmm6
          vmovsd  [rsp+158h+bounds], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3134, ASSERT_TYPE_ASSERT, "( fLength ) <= ( pt->fOrigLength )", "%s <= %s\n\t%g, %g", "fLength", "pt->fOrigLength", *(double *)&boundsc, v153) )
          __debugbreak();
      }
      __asm { vminss  xmm11, xmm7, xmm6 }
      if ( (v160 & 0x10000) != 0 )
      {
        __asm
        {
          vmovss  xmm7, dword ptr [rdi+18h]
          vmovss  xmm9, dword ptr [rdi+1Ch]
          vsubss  xmm5, xmm7, dword ptr [rcx]
          vsubss  xmm6, xmm9, dword ptr [rcx+4]
          vmovss  xmm10, dword ptr [rdi+20h]
          vsubss  xmm8, xmm10, dword ptr [rcx+8]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm13, xmm0
          vxorps  xmm3, xmm11, cs:__xmm@80000000800000008000000080000000
          vdivss  xmm4, xmm13, xmm0
          vmulss  xmm0, xmm5, xmm4
          vmulss  xmm1, xmm0, xmm3
          vaddss  xmm2, xmm1, xmm7
          vmulss  xmm0, xmm6, xmm4
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rsp+158h+inOutPos], xmm2
          vaddss  xmm2, xmm1, xmm9
          vmulss  xmm0, xmm8, xmm4
          vmulss  xmm1, xmm0, xmm3
          vmovss  dword ptr [rsp+158h+inOutPos+4], xmm2
          vaddss  xmm2, xmm1, xmm10
          vmovss  dword ptr [rsp+158h+inOutPos+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm2, xmm11, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm2, dword ptr [rdi+24h]
          vaddss  xmm1, xmm0, dword ptr [rdi+18h]
          vmulss  xmm0, xmm2, dword ptr [rdi+28h]
          vmovss  xmm3, dword ptr [rdi+20h]
          vmovss  dword ptr [rsp+158h+inOutPos], xmm1
          vaddss  xmm1, xmm0, dword ptr [rdi+1Ch]
          vsubss  xmm0, xmm3, dword ptr [rcx+8]
          vmovss  dword ptr [rsp+158h+inOutPos+4], xmm1
          vmulss  xmm1, xmm0, xmm11
          vdivss  xmm2, xmm1, xmm6
          vsubss  xmm3, xmm3, xmm2
          vmovss  dword ptr [rsp+158h+inOutPos+8], xmm3
        }
      }
      _RBX->flags &= 0xFFFFFFBE;
      __asm
      {
        vmovss  [rsp+158h+maxLookaheadAmountIfReduce], xmm12
        vmovss  dword ptr [rsp+158h+fmt], xmm11
      }
      Path_UpdateLookaheadAmount(_RBX, _R15, &inOutPos, bReduceLookaheadAmount, fmt, v39, maxLookaheadAmountIfReduceb, bounds);
    }
    __asm
    {
      vmovaps xmm14, [rsp+158h+var_C8]
      vmovaps xmm13, [rsp+158h+var_B8]
      vmovaps xmm9, [rsp+158h+var_78]
      vmovaps xmm8, [rsp+158h+var_68]
      vmovaps xmm7, [rsp+158h+var_58]
      vmovaps xmm6, [rsp+158h+var_48]
      vmovaps xmm15, [rsp+158h+var_D8]
    }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3; totalArea }
    Path_CalcLookahead_Completed(_RBX, _R15, bReduceLookaheadAmount, *(float *)&_XMM3, bounds);
  }
  _R11 = &v172;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm12, xmmword ptr [r11-80h]
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
  __int64 v14; 
  float fmt; 
  float v20; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = pPath;
  __asm { vmovaps xmm6, xmm3 }
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2998, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  wNegotiationStartNode = _RBX->wNegotiationStartNode;
  wPathLen = _RBX->wPathLen;
  lookaheadNextNode = wNegotiationStartNode;
  _RBX->flags |= 0x41u;
  if ( wPathLen - 1 == wNegotiationStartNode )
    v14 = 988i64;
  else
    v14 = 28i64 * (unsigned __int8)wNegotiationStartNode;
  __asm
  {
    vmovss  [rsp+58h+var_28], xmm6
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+58h+fmt], xmm0
  }
  Path_UpdateLookaheadAmount(_RBX, vStartPos, (const vec3_t *)((char *)_RBX + v14), bReduceLookaheadAmount, fmt, lookaheadNextNode, v20, bounds);
  __asm
  {
    vmaxss  xmm0, xmm6, cs:__real@47000000
    vminss  xmm1, xmm0, dword ptr [rbx+3BCh]
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rbx+3BCh], xmm1
  }
}

/*
==============
Path_CheckDrop
==============
*/
bool Path_CheckDrop(vec3_t *pathEndPos, int entityIgnore, int mask, bool *hitStairs)
{
  char v10; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmovss  dword ptr [rsp+0D8h+start], xmm1
    vmovss  dword ptr [rsp+0D8h+end], xmm1
    vmovss  dword ptr [rsp+0D8h+start+4], xmm0
    vmovss  dword ptr [rsp+0D8h+end+4], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vaddss  xmm1, xmm0, cs:__real@41900000
    vmovss  dword ptr [rsp+0D8h+start+8], xmm1
    vsubss  xmm1, xmm1, cs:__real@42900000
    vmovss  dword ptr [rsp+0D8h+end+8], xmm1
  }
  G_Main_TraceCapsule(&results, &start, &end, &actorBox, entityIgnore, mask);
  __asm
  {
    vmovss  xmm5, [rsp+0D8h+results.fraction]
    vucomiss xmm5, cs:__real@3f800000
  }
  if ( v10 )
    return 0;
  __asm { vmovss  xmm1, dword ptr [rsp+0D8h+results.normal+8] }
  if ( (results.surfaceFlags & 0x200) != 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
      vcomiss xmm1, cs:__real@3f7fbe77
    }
  }
  __asm { vcomiss xmm1, cs:__real@3f333333 }
  return (results.surfaceFlags & 0x200) != 0;
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
  char v5; 
  float fmt; 
  float fmta; 
  float fmtb; 
  vec3_t end; 
  vec3_t start; 
  vec3_t point; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3311, ASSERT_TYPE_ASSERT, "(pNav)", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetCurPos(pNav, &end);
  pNav->GetRequestedGoalPos(pNav, &start);
  pNav->GetGoalPos(pNav, &point);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+end]
    vmovss  xmm6, cs:__real@3e800000
  }
  _RCX = &ent->r.currentOrigin;
  __asm { vucomiss xmm0, dword ptr [rcx] }
  if ( !v5 )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+end+4]
    vucomiss xmm0, dword ptr [rcx+4]
  }
  if ( !v5 )
    goto LABEL_7;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+end+8]
    vucomiss xmm0, dword ptr [rcx+8]
  }
  if ( !v5 )
  {
LABEL_7:
    G_DebugLine(_RCX, &end, &colorGreen, 0);
    __asm { vmovss  dword ptr [rsp+88h+fmt], xmm6 }
    G_DebugStarWithText(&end, &colorGreen, &colorGreen, "Snapped Ent Pos", fmt);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+point]
    vucomiss xmm0, dword ptr [rsp+88h+start]
  }
  if ( !v5 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+point+4]
    vucomiss xmm0, dword ptr [rsp+88h+start+4]
  }
  if ( !v5 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+point+8]
    vucomiss xmm0, dword ptr [rsp+88h+start+8]
  }
  if ( !v5 )
  {
LABEL_11:
    G_DebugLine(&start, &point, &colorMagenta, 0);
    __asm { vmovss  dword ptr [rsp+88h+fmt], xmm6 }
    G_DebugStarWithText(&start, &colorMagenta, &colorMagenta, "Requested Goal Pos", fmta);
    __asm { vmovss  dword ptr [rsp+88h+fmt], xmm6 }
    G_DebugStarWithText(&point, &colorMagenta, &colorMagenta, "Snapped Goal Pos", fmtb);
  }
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
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
    _RAX = pathFindInput->vStartPos;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rsp+168h+custom.startPos], xmm0
      vmovss  xmm0, dword ptr [rax+8]
    }
    pPath = pathFindInput->pPath;
    __asm
    {
      vmovss  dword ptr [rsp+168h+custom.startPos+4], xmm1
      vmovss  dword ptr [rsp+168h+custom.startPos+8], xmm0
    }
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
  int v20; 
  pathnode_t *v27; 
  int v34; 
  int v35; 
  bool v36; 
  unsigned __int16 v48; 
  int flags; 
  unsigned __int16 iNodeNum; 
  pathnode_t *v56; 
  pathnode_t *v57; 
  int v58; 
  pathnode_t *pParent; 
  unsigned __int16 type; 
  pathnode_t *v61; 
  int v62; 
  __int64 result; 
  pathnode_t *v64; 
  __int64 v65; 
  __int64 p_z; 
  int v67; 
  int v68; 
  __int64 v69; 
  path_t *v73; 
  __int64 v74; 
  bool v91; 
  bool v92; 
  bool v93; 
  bool v94; 
  unsigned __int16 v105; 
  int parentIndex; 
  bool v107; 
  gentity_s *v108; 
  int IsEntityInUse; 
  bool v117; 
  int v133; 
  char wPathLen; 
  bool v137; 
  bool v143; 
  Bounds *bounds; 
  double v150; 
  int v151; 
  __int16 v152; 
  int v153; 
  int v154; 
  int v155; 
  __int16 v156; 
  vec3_t v159; 
  vec3_t inOutPos; 
  tmat33_t<vec3_t> out; 
  vec3_t delta; 
  char v163[16]; 
  tmat33_t<vec3_t> axis; 
  char v166; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R13 = pNodeTo;
  _RSI = vGoalPos;
  _RBX = pPath;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 653, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( !pNodeFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 654, ASSERT_TYPE_ASSERT, "(pNodeFrom)", (const char *)&queryFormat, "pNodeFrom") )
    __debugbreak();
  if ( !pNodeTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 655, ASSERT_TYPE_ASSERT, "(pNodeTo)", (const char *)&queryFormat, "pNodeTo") )
    __debugbreak();
  if ( !_RSI && bIncludeGoalPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 656, ASSERT_TYPE_ASSERT, "(vGoalPos || !bIncludeGoalPos)", (const char *)&queryFormat, "vGoalPos || !bIncludeGoalPos") )
    __debugbreak();
  Path_AddTrimmedAmount(_RBX, vStartPos);
  _RAX = vStartPos;
  index = pNodeFrom->constant.parent.index;
  v20 = 0;
  __asm
  {
    vmovss  xmm6, dword ptr [r13+20h]
    vmovss  xmm7, dword ptr [r13+24h]
    vmovss  xmm8, dword ptr [r13+28h]
  }
  _RBX->parentIndex = index;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rsp+170h+inOutPos], xmm0
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rsp+170h+inOutPos+8], xmm0
    vmovss  dword ptr [rsp+170h+inOutPos+4], xmm1
  }
  v151 = 0;
  v27 = pNodeTo;
  v152 = index;
  Path_LocalizePos(_RBX, &inOutPos);
  if ( bIncludeGoalPos )
  {
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 680, ASSERT_TYPE_ASSERT, "(vGoalPos)", (const char *)&queryFormat, "vGoalPos") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+170h+var_110], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+170h+var_110+8], xmm0
      vmovss  dword ptr [rsp+170h+var_110+4], xmm1
    }
    Path_LocalizePos(_RBX, &v159);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+170h+var_110]
      vmovss  xmm3, dword ptr [rsp+170h+var_110+4]
      vmovss  xmm1, dword ptr [rsp+170h+var_110+8]
    }
    v34 = 1;
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx+4], xmm3
      vmovss  dword ptr [rbx+8], xmm1
    }
    v35 = 1 << LOBYTE(pNodeTo->constant.type);
    v36 = 0;
    if ( (v35 & 0x1E300000) != 0 || (v36 = (v35 & 0x400000) != 0) )
    {
      __asm
      {
        vsubss  xmm2, xmm6, xmm0
        vsubss  xmm0, xmm7, xmm3
        vsubss  xmm3, xmm8, xmm1
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vsubss  xmm0, xmm7, xmm3
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm1, xmm1
      }
    }
    __asm
    {
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, cs:__real@3649539c
    }
    LOBYTE(v20) = v36;
    if ( v20 )
    {
      v48 = Path_ConvertNodeToIndex(pNodeTo);
      v20 ^= 1u;
      v151 = v20;
    }
    else
    {
      v20 = 1;
      v48 = -1;
      v151 = 1;
    }
  }
  else
  {
    v34 = 0;
    __asm
    {
      vmovss  dword ptr [rbx], xmm6
      vmovss  dword ptr [rbx+4], xmm7
      vmovss  dword ptr [rbx+8], xmm8
    }
    v48 = Path_ConvertNodeToIndex(pNodeTo);
  }
  _RBX->pts[0].iNodeNum = v48;
  flags = _RBX->flags;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+170h+inOutPos]
    vmovss  xmm1, dword ptr [rsp+170h+inOutPos+4]
  }
  _RBX->flags = 0;
  __asm
  {
    vmovss  dword ptr [rbx+394h], xmm0
    vmovss  xmm0, dword ptr [rsp+170h+inOutPos+8]
    vmovss  dword ptr [rbx+39Ch], xmm0
    vmovss  dword ptr [rbx+398h], xmm1
  }
  v156 = flags;
  if ( !_RBX->wPathLen || (flags & 0x20000) != 0 || (_WORD)index )
  {
    _RBX->iPathEndTime = 0;
    _RBX->vFinalGoal.v[0] = _RBX->pts[0].vOrigPoint.v[0];
    _RBX->vFinalGoal.v[1] = _RBX->pts[0].vOrigPoint.v[1];
    _RBX->vFinalGoal.v[2] = _RBX->pts[0].vOrigPoint.v[2];
    if ( v34 )
    {
      Path_WorldifyPos(_RBX, &_RBX->vFinalGoal);
    }
    else
    {
      iNodeNum = _RBX->pts[0].iNodeNum;
      if ( iNodeNum != 0xFFFF )
      {
        v56 = Path_ConvertIndexToNode(iNodeNum);
        pathnode_t::WorldifyPosFromParent(v56, &_RBX->vFinalGoal);
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+388h]
      vucomiss xmm0, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rbx+38Ch]
      vucomiss xmm0, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rbx+390h]
      vucomiss xmm0, dword ptr [rbx+8]
    }
  }
  if ( _RBX->wNegotiationStartNode > 0 )
    _RBX->wNegotiationStartNode = 0;
  if ( _RBX->wPathLen > 0 )
    _RBX->iPathClearedTime = level.time;
  v57 = pNodeFrom;
  v58 = 0;
  *(_QWORD *)_RBX->lookaheadPos.v = 0i64;
  _RBX->lookaheadPos.v[2] = 0.0;
  _RBX->parentIndex = 0;
  *(_WORD *)&_RBX->wPathLen = 0;
  _RBX->pathChangeNotifyNode = -1;
  *(_WORD *)&_RBX->pathEndAnimNotified = 0;
  _RBX->wDodgeCount = 0;
  _RBX->parentIndex = pNodeFrom->constant.parent.index;
  if ( pNodeTo )
  {
    pParent = pNodeTo->transient.pParent;
    v151 = ++v20;
    if ( pNodeTo != pNodeFrom )
    {
      do
      {
        if ( ((1 << pParent->constant.type) & 0x68010000) != 0 )
        {
          type = v27->constant.type;
          if ( ((1 << type) & 0x70020000) != 0 && (pParent->constant.target == v27->constant.targetname || (unsigned __int16)(pParent->constant.type - 29) <= 1u && (unsigned __int16)(type - 29) <= 1u) )
          {
            if ( !bAllowNegotiationLinks )
            {
              result = 0i64;
              goto LABEL_155;
            }
            v58 = v20;
          }
        }
        v61 = pParent->transient.pParent;
        ++v20;
        pParent->transient.pParent = v27;
        v27 = pParent;
        v151 = v20;
        pParent = v61;
      }
      while ( v27 != pNodeFrom );
    }
  }
  __asm { vmovaps xmmword ptr [rsp+170h+var_78+8], xmm9 }
  if ( v20 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 772, ASSERT_TYPE_ASSERT, "(iTotal > 0)", (const char *)&queryFormat, "iTotal > 0") )
    __debugbreak();
  v62 = v20 - 32;
  v155 = v20 - 32;
  if ( v20 - 32 <= 0 )
  {
    if ( v20 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 784, ASSERT_TYPE_ASSERT, "(iTotal > 0)", (const char *)&queryFormat, "iTotal > 0") )
      __debugbreak();
  }
  else
  {
    _RBX->flags |= 4u;
    v20 = 32;
    v58 -= v62;
    v151 = 32;
    if ( v58 < 0 )
      LOBYTE(v58) = 0;
  }
  v64 = pNodeFrom;
  v65 = v20 - 1i64;
  *(_QWORD *)v159.v = v65;
  if ( v65 > 0 )
  {
    p_z = (__int64)&_RBX->pts[v65].vOrigPoint.z;
    do
    {
      *(float *)(p_z - 8) = v64->constant.vLocalOrigin.v[0];
      *(float *)(p_z - 4) = v64->constant.vLocalOrigin.v[1];
      *(float *)p_z = v64->constant.vLocalOrigin.v[2];
      *(_WORD *)(p_z + 16) = Path_ConvertNodeToIndex(v64);
      if ( (unsigned __int16)(v64->constant.type - 29) <= 1u && v64->constant.target )
        _RBX->flags |= 0x10000u;
      v64 = v64->transient.pParent;
      --v65;
      p_z -= 28i64;
    }
    while ( v65 > 0 );
    v57 = pNodeFrom;
  }
  if ( v155 > 0 )
  {
    _RBX->pts[0].vOrigPoint.v[0] = v64->constant.vLocalOrigin.v[0];
    _RBX->pts[0].vOrigPoint.v[1] = v64->constant.vLocalOrigin.v[1];
    _RBX->pts[0].vOrigPoint.v[2] = v64->constant.vLocalOrigin.v[2];
    _RBX->pts[0].iNodeNum = Path_ConvertNodeToIndex(v64);
  }
  v67 = 1 << LOBYTE(pNodeTo->constant.type);
  if ( (v67 & 0x1E300000) != 0 || (v67 & 0x400000) != 0 || (v68 = 1 << LOBYTE(v57->constant.type), (v68 & 0x1E300000) != 0) || (v68 & 0x400000) != 0 )
    _RBX->flags |= 0x10000u;
  if ( v152 )
    _RBX->flags |= 0x20000u;
  if ( _RBX->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 813, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode == 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode == 0") )
    __debugbreak();
  _RBX->wNegotiationStartNode = v58;
  if ( (v58 & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 815, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  v69 = *(_QWORD *)v159.v;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  *(_QWORD *)&_RBX->pts[v69].fDir2D.y = 0i64;
  _RBX->pts[v69].fDir2D.v[0] = 0.0;
  _RBX->vCurrPoint.v[0] = _RBX->pts[v69].vOrigPoint.v[0];
  _RBX->vCurrPoint.v[1] = _RBX->pts[v69].vOrigPoint.v[1];
  _RBX->vCurrPoint.v[2] = _RBX->pts[v69].vOrigPoint.v[2];
  if ( v20 - 1 > 0 )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@80000000
      vmovss  xmm7, cs:__real@3f800000
    }
    v73 = _RBX;
    v74 = (unsigned int)(v20 - 1);
    _RDI = (float *)&_RBX->pts[0].fDir2D + 1;
    do
    {
      if ( (_RBX->flags & 0x10000) != 0 )
      {
        *(float *)&_XMM0 = Path_Get3DPathDir(&delta, &v73->pts[1].vOrigPoint, (const vec3_t *)v73);
        __asm
        {
          vmovss  xmm4, dword ptr [rbp+70h+delta+4]
          vmovss  xmm3, dword ptr [rbp+70h+delta]
          vmovss  dword ptr [rdi+4], xmm0
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, xmm8
          vblendvps xmm0, xmm2, xmm7, xmm0
          vdivss  xmm1, xmm7, xmm0
          vmulss  xmm0, xmm3, xmm1
          vmulss  xmm1, xmm4, xmm1
          vmovss  dword ptr [rdi], xmm1
          vmovss  dword ptr [rdi-4], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi-10h]
          vsubss  xmm2, xmm0, dword ptr [rdi+0Ch]
          vmovss  dword ptr [rdi-4], xmm2
          vmovss  xmm0, dword ptr [rdi-0Ch]
          vsubss  xmm1, xmm0, dword ptr [rdi+10h]
          vmovss  [rsp+170h+var_12C], xmm2
          vmovss  dword ptr [rdi], xmm1
        }
        if ( (v153 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 101, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[0] ) )", (const char *)&queryFormat, "!IS_NAN( delta[0] )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  [rsp+170h+var_12C], xmm0
        }
        v91 = (v154 & 0x7F800000) == 2139095040;
        v92 = (v154 & 0x7F800000u) <= 0x7F800000;
        if ( (v154 & 0x7F800000) == 2139095040 )
        {
          v93 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 102, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[1] ) )", (const char *)&queryFormat, "!IS_NAN( delta[1] )");
          v91 = !v93;
          v92 = !v93;
          if ( v93 )
            __debugbreak();
        }
        __asm { vucomiss xmm9, dword ptr [rdi-4] }
        if ( v91 )
        {
          __asm { vucomiss xmm9, dword ptr [rdi] }
          if ( v91 )
          {
            v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 103, ASSERT_TYPE_ASSERT, "(delta[0] || delta[1])", (const char *)&queryFormat, "delta[0] || delta[1]");
            v92 = !v94;
            if ( v94 )
              __debugbreak();
          }
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]
          vmovss  xmm0, dword ptr [rdi-4]
          vmulss  xmm2, xmm0, xmm0
          vmulss  xmm1, xmm1, xmm1
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm6, xmm2, xmm2
          vcomiss xmm6, xmm9
        }
        if ( v92 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 105, ASSERT_TYPE_ASSERT, "(fDist > 0)", (const char *)&queryFormat, "fDist > 0") )
          __debugbreak();
        __asm
        {
          vdivss  xmm1, xmm7, xmm6
          vmulss  xmm0, xmm1, dword ptr [rdi-4]
          vmulss  xmm1, xmm1, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm1
          vmovss  dword ptr [rdi-4], xmm0
          vmovss  dword ptr [rdi+4], xmm6
        }
      }
      v73 = (path_t *)((char *)v73 + 28);
      _RDI += 7;
      --v74;
    }
    while ( v74 );
    v20 = v151;
  }
  if ( v20 <= 1 )
  {
    __asm { vmovaps xmm0, xmm9 }
  }
  else
  {
    _RCX = 28i64 * v20;
    __asm { vmovss  xmm0, dword ptr [rcx+rbx-24h] }
  }
  __asm { vmovss  dword ptr [rbx+3D8h], xmm0 }
  if ( v20 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 841, ASSERT_TYPE_ASSERT, "(iTotal > 0)", (const char *)&queryFormat, "iTotal > 0") )
    __debugbreak();
  if ( v20 > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 842, ASSERT_TYPE_ASSERT, "(iTotal <= 32)", (const char *)&queryFormat, "iTotal <= PATH_MAX_POINTS") )
    __debugbreak();
  _RBX->wPathLen = v20;
  _RBX->wOrigPathLen = v20;
  if ( bAllowNegotiationLinks )
    _RBX->flags |= 0x10u;
  if ( useChokePoints )
    _RBX->flags |= 0x800u;
  _RBX->iPathTime = level.time;
  v105 = _RBX->pts[0].iNodeNum;
  if ( v105 == 0xFFFF && ((char)v20 <= 1 || (v105 = _RBX->pts[1].iNodeNum, v105 == 0xFFFF)) )
    parentIndex = _RBX->parentIndex;
  else
    parentIndex = Path_ConvertIndexToNode(v105)->constant.parent.index;
  v107 = parentIndex == 0;
  if ( parentIndex )
  {
    if ( parentIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 295, ASSERT_TYPE_ASSERT, "(parentIndex < ( 2048 ))", (const char *)&queryFormat, "parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v108 = &g_entities[parentIndex];
    IsEntityInUse = G_IsEntityInUse(parentIndex);
    v107 = IsEntityInUse == 0;
    if ( IsEntityInUse )
    {
      _RDI = &_RBX->vFinalGoal;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm6, xmm0, dword ptr [rsi+130h]
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  xmm1, dword ptr [rdi+4]
        vsubss  xmm8, xmm0, dword ptr [rsi+138h]
        vsubss  xmm7, xmm1, dword ptr [rsi+134h]
      }
      AnglesToAxis(&v108->r.currentAngles, &axis);
      MatrixTranspose(&axis, &out);
      v107 = v163 == (char *)&_RBX->vFinalGoal;
      if ( v163 == (char *)&_RBX->vFinalGoal )
      {
        v117 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out");
        v107 = !v117;
        if ( v117 )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm3, xmm7, dword ptr [rbp+70h+out+0Ch]
        vmulss  xmm2, xmm6, dword ptr [rbp+70h+out]
        vmulss  xmm1, xmm8, dword ptr [rbp+70h+out+18h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm3, xmm7, dword ptr [rbp+70h+out+10h]
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm8, dword ptr [rbp+70h+out+1Ch]
        vmovss  dword ptr [rdi], xmm2
        vmulss  xmm2, xmm6, dword ptr [rbp+70h+out+4]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm3, xmm7, dword ptr [rbp+70h+out+14h]
        vaddss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm8, dword ptr [rbp+70h+out+20h]
        vmovss  dword ptr [rdi+4], xmm2
        vmulss  xmm2, xmm6, dword ptr [rbp+70h+out+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [rdi+8], xmm2
      }
    }
  }
  __asm { vucomiss xmm9, dword ptr [rbx+3BCh] }
  if ( !v107 )
  {
    if ( (v156 & 0x380) != 0 )
    {
      _RBX->minLookAheadNodes = 0;
      if ( (v156 & 0x80u) == 0 )
      {
        _RBX->fLookaheadAmount = 4096.0;
        v133 = 0;
        if ( (v156 & 0x100) != 0 )
          v133 = 2;
        _RBX->minLookAheadNodes = v133;
      }
      else
      {
        _RBX->fLookaheadAmount = 32768.0;
      }
      *(_QWORD *)_RBX->lookaheadDir.v = 0i64;
      _RBX->lookaheadDir.v[2] = 0.0;
      Path_UpdateLookaheadExtended(_RBX, vStartPos, 0, 0, 1, NULL, NULL);
      _RBX->minLookAheadNodes = 0;
    }
    else
    {
      Path_TransferLookahead(_RBX, vStartPos);
    }
    if ( _RBX->wNegotiationStartNode > _RBX->lookaheadNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 883, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode <= pPath->lookaheadNextNode)", (const char *)&queryFormat, "pPath->wNegotiationStartNode <= pPath->lookaheadNextNode") )
      __debugbreak();
    if ( _RBX->lookaheadNextNode >= _RBX->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 884, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
      __debugbreak();
    _RCX = 28i64 * (unsigned __int8)_RBX->lookaheadNextNode;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+14h]
      vcomiss xmm0, dword ptr [rbx+3C0h]
    }
    if ( !is_mul_ok(0x1Cui64, (unsigned __int8)_RBX->lookaheadNextNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 885, ASSERT_TYPE_ASSERT, "(pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength)", (const char *)&queryFormat, "pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength") )
      __debugbreak();
    wPathLen = _RBX->wPathLen;
    v137 = wPathLen == 1;
    if ( wPathLen > 1 )
    {
      __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
      _RCX = 28i64 * wPathLen;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx-24h]
        vcomiss xmm1, xmm0
      }
      if ( (unsigned __int128)(28 * (__int128)wPathLen) >> 64 == 0 && !v137 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+170h+var_138], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+170h+bounds], xmm1
        }
        v143 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 886, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", *(double *)&bounds, v150);
        v137 = !v143;
        if ( v143 )
          __debugbreak();
      }
    }
    __asm { vucomiss xmm9, dword ptr [rbx+3C0h] }
    if ( !v137 && _RBX->lookaheadNextNode >= _RBX->wPathLen - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 888, ASSERT_TYPE_ASSERT, "(!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1))", (const char *)&queryFormat, "!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1)") )
      __debugbreak();
  }
  __asm { vmovaps xmm9, xmmword ptr [rsp+170h+var_78+8] }
  result = 1i64;
LABEL_155:
  _R11 = &v166;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
Path_Get3DPathDir
==============
*/
float Path_Get3DPathDir(vec3_t *delta, const vec3_t *vFrom, const vec3_t *vTo)
{
  bool v14; 
  bool v15; 
  bool v16; 
  bool v18; 
  int v39; 
  int v40; 
  int v41; 

  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vsubss  xmm2, xmm0, dword ptr [rdx]
    vmovss  dword ptr [rcx], xmm2
    vmovss  xmm0, dword ptr [r8+4]
    vsubss  xmm1, xmm0, dword ptr [rdx+4]
    vmovss  dword ptr [rcx+4], xmm1
    vmovss  xmm0, dword ptr [r8+8]
    vsubss  xmm1, xmm0, dword ptr [rdx+8]
    vmovss  [rsp+58h+arg_0], xmm2
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  _RBX = delta;
  __asm { vmovss  dword ptr [rcx+8], xmm1 }
  if ( (v39 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 122, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[0] ) )", (const char *)&queryFormat, "!IS_NAN( delta[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 123, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[1] ) )", (const char *)&queryFormat, "!IS_NAN( delta[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  v14 = (v41 & 0x7F800000) == 2139095040;
  v15 = (v41 & 0x7F800000u) <= 0x7F800000;
  if ( (v41 & 0x7F800000) == 2139095040 )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 124, ASSERT_TYPE_SANITY, "( !IS_NAN( delta[2] ) )", (const char *)&queryFormat, "!IS_NAN( delta[2] )");
    v14 = !v16;
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rbx]
  }
  if ( v14 )
  {
    __asm { vucomiss xmm6, dword ptr [rbx+4] }
    if ( v14 )
    {
      __asm { vucomiss xmm6, dword ptr [rbx+8] }
      if ( v14 )
      {
        v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 125, ASSERT_TYPE_ASSERT, "(delta[0] || delta[1] || delta[2])", (const char *)&queryFormat, "delta[0] || delta[1] || delta[2]");
        v15 = !v18;
        if ( v18 )
          __debugbreak();
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
    vcomiss xmm7, xmm6
  }
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 127, ASSERT_TYPE_ASSERT, "(fDist > 0)", (const char *)&queryFormat, "fDist > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovaps xmm6, [rsp+58h+var_18]
    vdivss  xmm3, xmm1, xmm7
    vmulss  xmm2, xmm3, dword ptr [rbx]
    vmulss  xmm1, xmm3, dword ptr [rbx+4]
    vmovss  dword ptr [rbx], xmm2
    vmulss  xmm2, xmm3, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  dword ptr [rbx+4], xmm1
    vmovaps xmm0, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
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

float __fastcall Path_GetPathFindDist(const vec3_t *vStartPos, const vec3_t *vEndPos, double maxRadius)
{
  pathnode_t *v9; 
  PathFindInput pathFindInput; 
  CustomSearchInfo_FindPathWithinRadius custom; 

  __asm { vmovaps [rsp+1A0h+var_20], xmm6 }
  _RDI = vEndPos;
  _RSI = vStartPos;
  pathFindInput.pNodeFrom = NULL;
  pathFindInput.bAllowJumpLinks = 0;
  __asm { vmovaps xmm6, xmm2 }
  memset_0(&pathFindInput.avoidExpStances, 0, 0xE0ui64);
  pathFindInput.searchEntNum = 2047;
  pathFindInput.vStartPos = _RSI;
  pathFindInput.vGoalPos = _RDI;
  *(_QWORD *)&pathFindInput.bAllowLadderNodes = 1i64;
  pathFindInput.bAllowNegotiationLinks = 1;
  pathFindInput.pPath = NULL;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+1A0h+pathFindInput.badplacePercent], xmm0
  }
  pathFindInput.pNodeTo = Path_NearestNode(_RDI, 33685521, NULL);
  if ( !pathFindInput.pNodeTo )
    goto LABEL_5;
  v9 = Path_NearestNode(_RSI, 33685521, NULL);
  pathFindInput.pNodeFrom = v9;
  if ( !v9 )
    goto LABEL_5;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rbp+0A0h+custom.m_PathLength], xmm1
    vmovss  xmm1, dword ptr [rdi+4]
    vmulss  xmm0, xmm6, xmm6
    vmovss  [rbp+0A0h+custom.m_RadiusSq], xmm0
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rbp+0A0h+custom.m_vGoalPos], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+0A0h+custom.m_vGoalPos+4], xmm1
    vmovss  xmm1, dword ptr [rsi]
  }
  custom.m_pNodeFrom = v9;
  __asm
  {
    vmovss  dword ptr [rbp+0A0h+custom.m_vGoalPos+8], xmm0
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+0A0h+custom.m_vStartPos], xmm1
    vmovss  xmm1, dword ptr [rsi+8]
  }
  custom.m_pNodeTo = pathFindInput.pNodeTo;
  __asm
  {
    vmovss  dword ptr [rbp+0A0h+custom.m_vStartPos+4], xmm0
    vmovss  dword ptr [rbp+0A0h+custom.m_vStartPos+8], xmm1
  }
  if ( Path_AStarAlgorithm_CustomSearchInfo_FindPathWithinRadius_(&pathFindInput, TEAM_TWO, 1, &custom) )
    __asm { vmovss  xmm0, [rbp+0A0h+custom.m_PathLength] }
  else
LABEL_5:
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  __asm { vmovaps xmm6, [rsp+1A0h+var_20] }
  return *(float *)&_XMM0;
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
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  parentIndex = pPath->parentIndex;
  _RDI = inOutDir;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 237, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+0A8h+in1], xmm0
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+0A8h+in1+8], xmm0
        vmovss  dword ptr [rsp+0A8h+in1+4], xmm1
      }
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixInverse(&axis, &out);
      MatrixTransformVector(&in1, &out, _RDI);
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
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  parentIndex = pPath->parentIndex;
  _RDI = inOutPos;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 143, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, dword ptr [rbx+130h]
        vmovss  xmm2, dword ptr [rdi+4]
        vsubss  xmm0, xmm2, dword ptr [rbx+134h]
        vmovss  dword ptr [rsp+0A8h+in1], xmm1
        vmovss  xmm1, dword ptr [rdi+8]
        vsubss  xmm2, xmm1, dword ptr [rbx+138h]
        vmovss  dword ptr [rsp+0A8h+in1+8], xmm2
        vmovss  dword ptr [rsp+0A8h+in1+4], xmm0
      }
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixTranspose(&axis, &out);
      MatrixTransformVector(&in1, &out, _RDI);
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
  pathnode_t *v10; 
  int v11; 
  int ownerEntNum; 
  __int16 wDodgeEntity; 
  __int64 v17; 
  int entityNum; 
  unsigned int Instance; 
  int v25; 
  unsigned __int8 lookaheadNextNode; 
  const char *GameType; 
  float physicsInstanceId; 
  float physicsInstanceIda; 
  bool b3D; 
  unsigned __int16 groundEnt; 
  int entNum; 
  vec3_t end; 
  Bounds boundsa; 
  vec3_t vTraceEndPos; 

  _R13 = vEndPos;
  _RBP = vStartPos;
  groundEnt = truncate_cast<unsigned short,unsigned int>(pPath->parentIndex);
  v10 = NULL;
  v11 = pPath->iTraceMask & 0xFDFFFFFF;
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
    v11 = 33685521;
    if ( (pPath->flags & 0x2000) != 0 )
      goto LABEL_33;
    lookaheadNextNode = pPath->lookaheadNextNode;
    if ( !lookaheadNextNode )
      goto LABEL_33;
    v10 = Path_ConvertIndexToNode(pPath->pts[lookaheadNextNode].iNodeNum);
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
    if ( v10->dynamic.bots.hasGlobalBadPlaceLink )
      return 0i64;
LABEL_33:
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      ownerEntNum = pPath->ownerEntNum;
    if ( !bounds )
      bounds = Path_GetActorBounds(v10);
    __asm
    {
      vmovss  xmm0, cs:__real@41200000
      vmovss  [rsp+118h+physicsInstanceId], xmm0
    }
    return Path_PredictionTrace(_RBP, _R13, ownerEntNum, v11, &vTraceEndPos, physicsInstanceIda, 1, b3D, &pPath->lookaheadHitsStairs, bounds, groundEnt);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr cs:s_predictionTraceBounds.midPoint
    vmovsd  xmm1, qword ptr cs:s_predictionTraceBounds.halfSize+4
    vmovups xmmword ptr [rsp+118h+bounds.midPoint], xmm0
    vmovss  xmm0, dword ptr [r13+0]
    vmovaps [rsp+118h+var_58], xmm6
  }
  v17 = 0i64;
  __asm
  {
    vmovss  xmm6, cs:__real@42240000
    vmovss  dword ptr [rsp+118h+end], xmm0
    vmovss  xmm0, dword ptr [rbp+8]
    vmovsd  qword ptr [rsp+118h+bounds.halfSize+4], xmm1
    vmovss  xmm1, dword ptr [r13+4]
    vmovaps [rsp+118h+var_68], xmm7
    vmovss  xmm7, cs:__real@41f80000
    vmovss  dword ptr [rsp+118h+end+8], xmm0
    vmovss  dword ptr [rsp+118h+end+4], xmm1
  }
  entNum = wDodgeEntity;
  while ( 1 )
  {
    entityNum = *(&entNum + v17);
    __asm
    {
      vmovss  dword ptr [rsp+118h+bounds.midPoint+8], xmm6
      vmovss  dword ptr [rsp+118h+bounds.halfSize+8], xmm7
    }
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, entityNum);
    if ( PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, _RBP, &end, &boundsa, -1, Instance, entityNum) )
      break;
    if ( ++v17 >= 1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@41200000
        vmovss  [rsp+118h+physicsInstanceId], xmm0
      }
      v25 = !Path_PredictionTrace(_RBP, _R13, 2047, v11, &vTraceEndPos, physicsInstanceId, 1, b3D, NULL, NULL, groundEnt);
      goto LABEL_10;
    }
  }
  v25 = 2;
LABEL_10:
  __asm
  {
    vmovaps xmm7, [rsp+118h+var_68]
    vmovaps xmm6, [rsp+118h+var_58]
  }
  LOBYTE(v10) = v25 == 0;
  return (unsigned int)v10;
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

void __fastcall Path_OpenSet_Add(PathHeap *openSet, pathnode_t *node, pathnode_t *parent, double cost)
{
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  __int64 v13; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = node;
  __asm { vmovaps xmm6, xmm3 }
  if ( !openSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1170, ASSERT_TYPE_ASSERT, "( openSet )", (const char *)&queryFormat, "openSet") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1171, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( openSet->size >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1172, ASSERT_TYPE_ASSERT, "( openSet->size < 65535 )", (const char *)&queryFormat, "openSet->size < HEAP_MAX_NODES") )
    __debugbreak();
  _RDI->transient.pParent = parent;
  __asm { vmovss  dword ptr [rdi+0B0h], xmm6 }
  v9 = Path_ConvertNodeToIndex(_RDI);
  v10 = v9;
  if ( v9 >= pathData.nodeCount )
  {
    LODWORD(v13) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.nodeCount )", "nodeIndex doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v13, pathData.nodeCount) )
      __debugbreak();
  }
  v11 = truncate_cast<unsigned short,unsigned int>(openSet->size);
  openSet->index[v10] = v11;
  openSet->nodes[v11] = v10;
  if ( ++openSet->size > 1 )
    PathHeap_PercolateUp(openSet, v11);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
      if ( v4 < openSet->size && (unsigned int)PathHeap_Compare(openSet, v2, v4) )
        v2 = 2 * v2 + 1;
      if ( v6 < openSet->size )
      {
        if ( (unsigned int)PathHeap_Compare(openSet, v2, v6) )
          v2 = v6;
      }
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

__int64 __fastcall Path_OpenSet_Update(PathHeap *openSet, pathnode_t *node, pathnode_t *parent, double cost)
{
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int size; 
  __int64 result; 
  __int64 v16; 
  __int64 v17; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RSI = node;
  __asm { vmovaps xmm6, xmm3 }
  if ( !openSet && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1140, ASSERT_TYPE_ASSERT, "( openSet )", (const char *)&queryFormat, "openSet") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1141, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v9 = Path_ConvertNodeToIndex(_RSI);
  v10 = v9;
  if ( v9 >= pathData.nodeCount )
  {
    LODWORD(v16) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1144, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( pathData.nodeCount )", "nodeIndex doesn't index pathData.nodeCount\n\t%i not in [0, %i)", v16, pathData.nodeCount) )
      __debugbreak();
  }
  v11 = openSet->index[v10];
  v12 = v11;
  if ( v11 >= openSet->size )
  {
    result = 0i64;
  }
  else
  {
    if ( openSet->nodes[(unsigned __int16)v11] != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1150, ASSERT_TYPE_ASSERT, "( openSet->nodes[heapIndex] == nodeIndex )", (const char *)&queryFormat, "openSet->nodes[heapIndex] == nodeIndex") )
      __debugbreak();
    __asm { vmovss  dword ptr [rsi+0B0h], xmm6 }
    _RSI->transient.pParent = parent;
    size = openSet->size;
    if ( size > 1 )
    {
      if ( v12 >= size )
      {
        LODWORD(v17) = openSet->size;
        LODWORD(v16) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1157, ASSERT_TYPE_ASSERT, "(unsigned)( heapIndex ) < (unsigned)( openSet->size )", "heapIndex doesn't index openSet->size\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      PathHeap_PercolateUp(openSet, v12);
    }
    result = 1i64;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
  return result;
}

/*
==============
Path_PredictionTrace
==============
*/
bool Path_PredictionTrace(const vec3_t *vStartPos, const vec3_t *vEndPos, int entityIgnore, int mask, vec3_t *vTraceEndPos, float stepheight, int allowStartSolid, bool b3D, bool *hitStairs, const Bounds *useTraceBox, unsigned __int16 groundEnt)
{
  int v21; 
  bool result; 
  bool v56; 
  __int64 EntityHitId; 
  gentity_s *v73; 
  actor_s *actor; 
  actor_s *pPileUpActor; 
  bool v87; 
  bool v88; 
  vec3_t v115; 
  const vec3_t *v116; 
  vec3_t start; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 

  v21 = mask;
  _RSI = vTraceEndPos;
  _R13 = vEndPos;
  _RBX = useTraceBox;
  _RDI = vStartPos;
  v116 = vEndPos;
  if ( b3D )
    return Path_PredictionTraceSimpleInternal(vStartPos, vEndPos, entityIgnore, mask, hitStairs, 1, useTraceBox, vTraceEndPos, groundEnt) == 1;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
    vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
    vmovaps [rsp+1F0h+var_80], xmm9
    vmovaps [rsp+1F0h+var_90], xmm10
    vmovaps [rsp+1F0h+var_A0], xmm11
    vmovaps [rsp+1F0h+var_B0], xmm12
    vmovaps [rsp+1F0h+var_C0], xmm13
    vmovaps [rsp+1F0h+var_D0], xmm14
    vmovaps [rsp+1F0h+var_E0], xmm15
    vmovups xmmword ptr [rbp+0F0h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rbp+0F0h+bounds.halfSize+4], xmm1
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovsd  xmm1, qword ptr [rbx+10h]
      vmovups xmmword ptr [rbp+0F0h+bounds.midPoint], xmm0
      vmovsd  qword ptr [rbp+0F0h+bounds.halfSize+4], xmm1
    }
  }
  __asm { vmovaps [rsp+1F0h+var_70], xmm8 }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox && useTraceBox != &actorBox )
  {
    __asm
    {
      vmovss  xmm8, [rbp+0F0h+stepheight]
      vmovss  xmm0, dword ptr [rbp+0F0h+bounds.halfSize]
      vmulss  xmm1, xmm0, cs:__real@40000000
      vaddss  xmm3, xmm1, xmm8
      vaddss  xmm0, xmm3, xmm8
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vsubss  xmm1, xmm3, xmm8
      vmulss  xmm2, xmm1, cs:__real@3f000000
      vmovss  dword ptr [rbp+0F0h+bounds.midPoint+8], xmm0
      vmovss  dword ptr [rbp+0F0h+bounds.halfSize+8], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+0F0h+bounds.halfSize+8]
      vmovss  xmm8, [rbp+0F0h+stepheight]
      vmulss  xmm3, xmm8, cs:__real@3f000000
      vaddss  xmm1, xmm3, dword ptr [rbp+0F0h+bounds.midPoint+8]
      vsubss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rbp+0F0h+bounds.midPoint+8], xmm1
      vmovss  dword ptr [rbp+0F0h+bounds.halfSize+8], xmm0
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  xmm1, dword ptr [r13+4]
    vmovss  xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+1F0h+end], xmm0
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+1F0h+end+4], xmm1
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+1F0h+start], xmm0
    vmovss  dword ptr [rsp+1F0h+start+4], xmm1
    vmovss  dword ptr [rbp+0F0h+end+8], xmm2
    vmovss  dword ptr [rsp+1F0h+start+8], xmm2
  }
  if ( hitStairs )
    *hitStairs = 0;
  __asm
  {
    vmovss  xmm15, cs:__real@3f7d70a4
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm9, cs:__real@3f7fbe77
    vmovss  xmm14, cs:__real@3c23d70a
    vmovss  xmm13, cs:__real@43610000
    vmovss  xmm10, cs:__real@41f00000
    vmovaps [rsp+1F0h+var_50], xmm6
    vmovaps [rsp+1F0h+var_60], xmm7
    vxorps  xmm12, xmm12, xmm12
  }
  while ( 1 )
  {
    G_Main_TraceCapsule(&results, &start, &end, &bounds, entityIgnore, v21);
    if ( results.startsolid && !allowStartSolid )
      goto LABEL_25;
    v56 = !results.allsolid;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1F0h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+start]
      vmovss  xmm0, dword ptr [rsp+1F0h+end+4]
      vmovss  xmm7, [rbp+0F0h+results.fraction]
      vmulss  xmm6, xmm7, xmm15
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsp+1F0h+start]
      vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+start+4]
      vmovss  xmm0, dword ptr [rbp+0F0h+end+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+start+8]
      vmovss  dword ptr [rsi], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+1F0h+start+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsi+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+1F0h+start+8]
      vmovss  dword ptr [rsi+8], xmm3
    }
    if ( v56 )
    {
      __asm { vucomiss xmm7, xmm11 }
      if ( v56 )
        break;
    }
    if ( (results.surfaceFlags & 0x200) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0F0h+results.normal+8]
        vcomiss xmm0, xmm12
        vcomiss xmm0, xmm9
      }
    }
    EntityHitId = Trace_GetEntityHitId(&results);
    v73 = &level.gentities[EntityHitId];
    if ( level.gentities[EntityHitId].sentient )
    {
      actor = v73->actor;
      if ( actor )
      {
        if ( !actor->moveMode )
        {
          pPileUpActor = actor->pPileUpActor;
          if ( !pPileUpActor || pPileUpActor->ent->s.number != entityIgnore )
            goto LABEL_25;
        }
      }
      else
      {
        if ( !SV_BotIsBotEntClient(v73) )
          goto LABEL_25;
        _RBX = G_GetEntityPlayerState(&level.gentities[EntityHitId]);
        v87 = _RBX == NULL;
        if ( !_RBX )
        {
          v88 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2331, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
          v87 = !v88;
          if ( v88 )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+3Ch]
          vmovss  xmm2, dword ptr [rbx+40h]
          vmovss  xmm3, dword ptr [rbx+44h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm14
        }
        if ( v87 )
          goto LABEL_25;
      }
      v21 &= 0xFDFFBFFF;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1F0h+start]
        vmovss  xmm1, dword ptr [rsp+1F0h+start+4]
        vsubss  xmm2, xmm1, dword ptr [rsi+4]
        vsubss  xmm4, xmm0, dword ptr [rsi]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm1, xmm13
      }
    }
    __asm { vmovsd  xmm0, qword ptr [rsi] }
    v115.v[2] = vTraceEndPos->v[2];
    __asm { vmovsd  [rsp+1F0h+var_1A0], xmm0 }
    if ( !Path_CheckDrop(&v115, entityIgnore, v21, hitStairs) )
      goto LABEL_25;
    __asm
    {
      vmovaps xmm2, xmm8
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm3, dword ptr [rsp+1F0h+start+8]
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+1F0h+start], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vcomiss xmm0, xmm3
      vmovss  dword ptr [rsp+1F0h+start+4], xmm1
      vaddss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rsp+1F0h+start+8], xmm0
      vmovss  dword ptr [rbp+0F0h+end+8], xmm0
    }
  }
  _RAX = v116;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm1, xmm0, xmm3
    vcomiss xmm1, cs:__real@42900000
  }
  if ( !v56 )
  {
LABEL_25:
    result = 0;
    goto LABEL_26;
  }
  __asm { vmovsd  xmm0, qword ptr [rsi] }
  v115.v[2] = vTraceEndPos->v[2];
  __asm { vmovsd  [rsp+1F0h+var_1A0], xmm0 }
  result = Path_CheckDrop(&v115, entityIgnore, v21, hitStairs);
LABEL_26:
  __asm
  {
    vmovaps xmm7, [rsp+1F0h+var_60]
    vmovaps xmm6, [rsp+1F0h+var_50]
    vmovaps xmm8, [rsp+1F0h+var_70]
    vmovaps xmm11, [rsp+1F0h+var_A0]
    vmovaps xmm10, [rsp+1F0h+var_90]
    vmovaps xmm9, [rsp+1F0h+var_80]
    vmovaps xmm12, [rsp+1F0h+var_B0]
    vmovaps xmm13, [rsp+1F0h+var_C0]
    vmovaps xmm14, [rsp+1F0h+var_D0]
    vmovaps xmm15, [rsp+1F0h+var_E0]
  }
  return result;
}

/*
==============
Path_PredictionTraceCheckForEntities
==============
*/
__int64 Path_PredictionTraceCheckForEntities(const vec3_t *vStartPos, const vec3_t *vEndPos, const int *entities, const int entityCount, int entityIgnore, int mask, bool b3D, vec3_t *vTraceEndPos, unsigned __int16 groundEnt)
{
  const vec3_t *v12; 
  const vec3_t *v13; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v25; 
  int v26; 
  unsigned int Instance; 
  __int64 result; 
  float physicsInstanceId; 
  vec3_t end; 
  Bounds bounds; 

  v12 = vEndPos;
  v13 = vStartPos;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:s_predictionTraceBounds.midPoint
    vmovsd  xmm1, qword ptr cs:s_predictionTraceBounds.halfSize+4
    vmovups xmmword ptr [rsp+0E8h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+0E8h+bounds.halfSize+4], xmm1
  }
  if ( b3D )
  {
    __asm
    {
      vmovss  xmm1, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0E8h+bounds.midPoint+8], xmm0
      vmovss  dword ptr [rsp+0E8h+bounds.halfSize+8], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
  }
  v20 = 0;
  __asm
  {
    vmovaps [rsp+0E8h+var_48], xmm6
    vmovaps [rsp+0E8h+var_58], xmm7
  }
  v21 = entityCount;
  __asm
  {
    vmovss  dword ptr [rsp+0E8h+end], xmm0
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+0E8h+end+8], xmm0
    vmovss  dword ptr [rsp+0E8h+end+4], xmm1
  }
  if ( entityCount <= 0 )
  {
LABEL_7:
    __asm
    {
      vmovss  xmm0, cs:__real@41200000
      vmovss  [rsp+0E8h+physicsInstanceId], xmm0
    }
    LOBYTE(v20) = !Path_PredictionTrace(v13, v12, entityIgnore, mask, vTraceEndPos, physicsInstanceId, 1, b3D, NULL, NULL, groundEnt);
    result = v20;
  }
  else
  {
    __asm
    {
      vmovss  xmm6, cs:__real@42240000
      vmovss  xmm7, cs:__real@41f80000
    }
    v25 = 0i64;
    while ( 1 )
    {
      v26 = entities[v25];
      __asm
      {
        vmovss  dword ptr [rsp+0E8h+bounds.midPoint+8], xmm6
        vmovss  dword ptr [rsp+0E8h+bounds.halfSize+8], xmm7
      }
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v26);
      if ( PhysicsQuery_LegacyEntitySightTrace(PHYSICS_WORLD_ID_FIRST, v13, &end, &bounds, -1, Instance, entities[v25]) )
        break;
      if ( ++v25 >= v21 )
        goto LABEL_7;
    }
    *vTraceEndPos = *v13;
    result = 2i64;
  }
  __asm
  {
    vmovaps xmm7, [rsp+0E8h+var_58]
    vmovaps xmm6, [rsp+0E8h+var_48]
  }
  return result;
}

/*
==============
Path_PredictionTraceSimpleInternal
==============
*/
__int64 Path_PredictionTraceSimpleInternal(const vec3_t *vStartPos, const vec3_t *vEndPos, int entityIgnore, int mask, bool *hitStairs, bool b3D, const Bounds *useTraceBox, vec3_t *vTraceEndPos)
{
  __int64 result; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
    vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
  }
  _RSI = vStartPos;
  _RBX = useTraceBox;
  _R12 = vTraceEndPos;
  __asm
  {
    vmovups xmmword ptr [rsp+120h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+120h+bounds.halfSize+4], xmm1
  }
  _RDI = vEndPos;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovsd  xmm1, qword ptr [rbx+10h]
      vmovups xmmword ptr [rsp+120h+bounds.midPoint], xmm0
      vmovsd  qword ptr [rsp+120h+bounds.halfSize+4], xmm1
    }
  }
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE) && useTraceBox && useTraceBox != &actorBox )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+120h+bounds.halfSize]
      vmulss  xmm1, xmm0, cs:__real@40000000
      vaddss  xmm2, xmm1, cs:__real@41200000
      vmulss  xmm0, xmm2, cs:__real@3f000000
      vaddss  xmm1, xmm0, cs:__real@40a00000
      vsubss  xmm2, xmm2, cs:__real@41200000
      vmulss  xmm0, xmm2, cs:__real@3f000000
      vmovss  dword ptr [rsp+120h+bounds.midPoint+8], xmm1
    }
  }
  else
  {
    if ( !b3D )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+120h+bounds.midPoint+8]
        vmovss  xmm2, dword ptr [rsp+120h+bounds.halfSize+8]
        vaddss  xmm1, xmm0, cs:__real@40a00000
        vaddss  xmm0, xmm2, cs:__real@c0a00000
        vmovss  dword ptr [rsp+120h+bounds.halfSize+8], xmm0
        vmovss  dword ptr [rsp+120h+bounds.midPoint+8], xmm1
      }
      goto LABEL_13;
    }
    __asm
    {
      vmovss  xmm0, dword ptr cs:?actorBox@@3UBounds@@B.halfSize+8; Bounds const actorBox
      vmovss  dword ptr [rsp+120h+bounds.midPoint+8], xmm7
    }
  }
  __asm { vmovss  dword ptr [rsp+120h+bounds.halfSize+8], xmm0 }
  if ( b3D )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr [rsp+120h+end], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
    }
    goto LABEL_14;
  }
LABEL_13:
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsp+120h+end], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
  }
LABEL_14:
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+120h+end+8], xmm0
    vmovss  dword ptr [rsp+120h+end+4], xmm1
  }
  G_Main_TraceCapsule(&results, _RSI, &end, &bounds, entityIgnore, mask & 0xFDFFFFFF);
  __asm { vmovss  xmm6, [rsp+120h+results.fraction] }
  if ( vTraceEndPos )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+120h+end]
      vsubss  xmm1, xmm0, dword ptr [rsi]
      vmovss  xmm0, dword ptr [rsp+120h+end+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsi]
      vmovss  dword ptr [r12], xmm3
      vsubss  xmm1, xmm0, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rsp+120h+end+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [r12+4], xmm3
      vsubss  xmm1, xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [r12+8], xmm3
    }
  }
  if ( (results.surfaceFlags & 0x200) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+37h+results.normal+8]
      vcomiss xmm0, xmm7
      vcomiss xmm0, cs:__real@3f7fbe77
    }
  }
  if ( hitStairs )
    *hitStairs = 0;
  if ( results.allsolid )
  {
    result = 0i64;
  }
  else
  {
    __asm { vucomiss xmm6, cs:__real@3f800000 }
    result = 1i64;
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
Path_ReduceLookaheadAmount
==============
*/

void __fastcall Path_ReduceLookaheadAmount(path_t *pPath, double maxLookaheadAmountIfReduce)
{
  int flags; 
  bool v8; 

  flags = pPath->flags;
  __asm { vmovaps xmm5, xmm1 }
  if ( (flags & 0x1000) != 0 )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3f100000
      vmovss  xmm1, cs:__real@3f400000
    }
    _EAX = pPath->flags & 2;
    __asm { vmovd   xmm0, eax }
    v8 = 0;
    _EDX = 0;
    __asm
    {
      vmovd   xmm2, edx
      vpcmpeqd xmm4, xmm0, xmm2
      vblendvps xmm0, xmm1, xmm3, xmm4
      vmulss  xmm2, xmm0, xmm5
      vmovss  dword ptr [rcx+3BCh], xmm2
    }
    flags = pPath->flags;
  }
  else
  {
    v8 = pPath->wDodgeEntity < 0x7FFu;
    if ( pPath->wDodgeEntity == 2047 )
      __asm { vmulss  xmm2, xmm5, cs:__real@3f4ccccd }
    else
      __asm { vmulss  xmm2, xmm5, cs:__real@3f100000 }
    __asm { vmovss  dword ptr [rcx+3BCh], xmm2 }
  }
  __asm { vcomiss xmm2, cs:__real@3a83126f }
  if ( v8 )
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
  char v7; 
  int v10; 
  char v11; 
  char v12; 
  double v16; 
  double v17; 

  v2 = pathPointIndex;
  _RBX = pPath;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2619, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  wDodgeCount = _RBX->wDodgeCount;
  v5 = v2 + 2;
  if ( wDodgeCount >= 0 )
  {
    v11 = v5 - _RBX->wPathLen;
    _RBX->wPathLen = v5;
    v12 = wDodgeCount + v11;
    if ( (char)(wDodgeCount + v11) < 0 )
      v12 = 0;
    _RBX->wDodgeCount = v12;
    if ( v5 > 1 )
    {
      __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
      _RCX = 28i64 * v5;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx-24h]
        vcomiss xmm1, xmm0
      }
      if ( !(((unsigned __int128)(28 * (__int128)v5) >> 64 != 0) | v7) )
      {
        v10 = 2636;
LABEL_13:
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+48h+var_10], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+48h+var_18], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", v10, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v16, v17) )
          __debugbreak();
      }
    }
  }
  else
  {
    _RBX->wPathLen = v5;
    if ( v5 > 1 )
    {
      __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
      _RCX = 28i64 * v2;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx+14h]
        vcomiss xmm1, xmm0
      }
      if ( !(((unsigned __int128)(28 * (__int128)v2) >> 64 != 0) | v7) )
      {
        v10 = 2624;
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
  const vec3_t *v6; 
  char v26; 
  char v28; 
  vec3_t inOutPos; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+68h+inOutPos], xmm0
    vmovss  xmm0, dword ptr [rdx+8]
  }
  v6 = vStartPos;
  _RBX = pPath;
  __asm
  {
    vmovss  dword ptr [rsp+68h+inOutPos+8], xmm0
    vmovss  dword ptr [rsp+68h+inOutPos+4], xmm1
  }
  Path_LocalizePos(pPath, &inOutPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3DCh]
    vsubss  xmm3, xmm0, dword ptr [rsp+68h+inOutPos]
    vmovss  dword ptr [rbx+3A0h], xmm3
    vmovss  xmm0, dword ptr [rbx+3E0h]
    vsubss  xmm2, xmm0, dword ptr [rsp+68h+inOutPos+4]
    vmovss  dword ptr [rbx+3A4h], xmm2
    vmovss  xmm1, dword ptr [rbx+3E4h]
    vsubss  xmm0, xmm1, dword ptr [rsp+68h+inOutPos+8]
    vmovss  dword ptr [rbx+3A8h], xmm0
    vmulss  xmm0, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm4, xmm1, xmm1
    vcmpless xmm0, xmm4, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rbx+3A0h], xmm0
    vmulss  xmm1, xmm1, dword ptr [rbx+3A4h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm4, xmm0
    vmovss  dword ptr [rbx+3A4h], xmm1
    vmovss  dword ptr [rbx+3B8h], xmm4
  }
  if ( !v26 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3A8h]
      vdivss  xmm0, xmm0, xmm4
    }
  }
  __asm { vmovss  dword ptr [rbx+3A8h], xmm0 }
  v28 = _RBX->wPathLen - 1;
  _RBX->fLookaheadDistToNextNode = 0.0;
  _RBX->lookaheadNextNode = v28;
  _RBX->pathChangeNotifyNode = -1;
  Path_UpdateLookaheadExtended(_RBX, v6, 0, bTrimAmount, 1, NULL, NULL);
}

/*
==============
Path_SubtractTrimmedAmount
==============
*/
void Path_SubtractTrimmedAmount(path_t *pPath, const vec3_t *vStartPos)
{
  __int64 v13; 
  bool v14; 
  bool v16; 
  bool v29; 
  bool v30; 
  int v35; 
  double v59; 
  double v60; 
  vec3_t inOutPos; 
  void *retaddr; 

  _R11 = &retaddr;
  _RDI = pPath;
  if ( pPath->wPathLen != pPath->wOrigPathLen )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vmovss  xmm1, dword ptr [rdx+4]
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
      vmovss  dword ptr [rsp+0F8h+inOutPos], xmm0
      vmovss  xmm0, dword ptr [rdx+8]
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovaps [rsp+0F8h+var_88], xmm11
      vmovss  dword ptr [rsp+0F8h+inOutPos+4], xmm1
      vmovss  dword ptr [rsp+0F8h+inOutPos+8], xmm0
    }
    Path_LocalizePos(pPath, &inOutPos);
    if ( _RDI->wPathLen <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 453, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 1)", (const char *)&queryFormat, "pPath->wPathLen > 1") )
      __debugbreak();
    v13 = _RDI->wPathLen - 2i64;
    v14 = __CFADD__(_RDI, 28 * v13);
    if ( !&_RDI->pts[v13] )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 348, ASSERT_TYPE_ASSERT, "(pt)", (const char *)&queryFormat, "pt");
      v14 = 0;
      if ( v16 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rbx]
      vmovss  xmm9, dword ptr [rsp+0F8h+inOutPos+4]
      vmovss  xmm10, dword ptr [rsp+0F8h+inOutPos]
      vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vsubss  xmm0, xmm0, xmm9
      vmulss  xmm2, xmm0, dword ptr [rbx+0Ch]
      vsubss  xmm0, xmm1, xmm10
      vmulss  xmm1, xmm0, dword ptr [rbx+10h]
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm8, dword ptr [rbx+14h]
      vsubss  xmm6, xmm2, xmm1
      vandps  xmm6, xmm6, xmm11
    }
    if ( !v14 )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 457, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0");
      v14 = 0;
      if ( v29 )
        __debugbreak();
    }
    __asm { vcomiss xmm8, dword ptr [rdi+3D8h] }
    if ( !v14 )
    {
      v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 458, ASSERT_TYPE_ASSERT, "(pPath->fCurrLength > 0)", (const char *)&queryFormat, "pPath->fCurrLength > 0");
      v14 = 0;
      if ( v30 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+14h]
      vmovss  xmm0, dword ptr [rdi+3D8h]
      vcomiss xmm1, xmm0
    }
    if ( v14 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0F8h+var_B8], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0F8h+var_C0], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 459, ASSERT_TYPE_ASSERT, "( pt->fOrigLength ) >= ( pPath->fCurrLength )", "%s >= %s\n\t%g, %g", "pt->fOrigLength", "pPath->fCurrLength", v59, v60) )
        __debugbreak();
    }
    v35 = _RDI->wPathLen - 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14h]
      vsubss  xmm1, xmm0, dword ptr [rdi+3D8h]
      vmulss  xmm7, xmm1, xmm6
    }
    if ( v35 < _RDI->wOrigPathLen - 1 )
    {
      _RBX = (__int64)&_RDI->pts[v35].fDir2D;
      do
      {
        _RBP = _RBX - 12;
        if ( _RBX == 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 348, ASSERT_TYPE_ASSERT, "(pt)", (const char *)&queryFormat, "pt") )
          __debugbreak();
        __asm
        {
          vcomiss xmm8, dword ptr [rbx+8]
          vmovss  xmm0, dword ptr [rbx-8]
          vmovss  xmm2, dword ptr [rbp+0]
          vsubss  xmm1, xmm0, xmm9
          vmulss  xmm3, xmm1, dword ptr [rbx]
          vsubss  xmm0, xmm2, xmm10
          vmulss  xmm1, xmm0, dword ptr [rbx+4]
          vsubss  xmm6, xmm3, xmm1
          vandps  xmm6, xmm6, xmm11
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 467, ASSERT_TYPE_ASSERT, "(pt->fOrigLength > 0)", (const char *)&queryFormat, "pt->fOrigLength > 0") )
          __debugbreak();
        __asm { vmulss  xmm0, xmm6, dword ptr [rbx+8] }
        ++v35;
        _RBX += 28i64;
        __asm { vaddss  xmm7, xmm7, xmm0 }
      }
      while ( v35 < _RDI->wOrigPathLen - 1 );
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+3BCh]
      vmovaps xmm11, [rsp+0F8h+var_88]
      vmovaps xmm10, [rsp+0F8h+var_78]
      vmovaps xmm9, [rsp+0F8h+var_68]
      vmovaps xmm8, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_38]
      vsubss  xmm1, xmm0, xmm7
      vmaxss  xmm2, xmm1, cs:__real@42800000
      vmovaps xmm7, [rsp+0F8h+var_48]
      vmovss  dword ptr [rdi+3BCh], xmm2
    }
  }
}

/*
==============
Path_TraceHitStairs
==============
*/
bool Path_TraceHitStairs(const trace_t *trace)
{
  _RBX = trace;
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2505, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( (_RBX->surfaceFlags & 0x200) != 0 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+18h]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
      vcomiss xmm1, cs:__real@3f7fbe77
    }
  }
  return 0;
}

/*
==============
Path_TransferLookahead
==============
*/
void Path_TransferLookahead(path_t *pPath, const vec3_t *vStartPos)
{
  char wPathLen; 
  char v23; 
  bool v24; 
  bool v29; 
  int v36; 
  const vec3_t *v99; 
  path_t *v100; 
  vec3_t *vWishDelta; 
  vec3_t *vWishDeltaa; 
  Bounds *bounds; 
  double v114; 
  vec3_t inOutPos; 

  __asm { vmovaps [rsp+138h+var_38], xmm6 }
  _RSI = vStartPos;
  _RBX = pPath;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 528, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( _RBX->wOrigPathLen != _RBX->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 529, ASSERT_TYPE_ASSERT, "(pPath->wOrigPathLen == pPath->wPathLen)", (const char *)&queryFormat, "pPath->wOrigPathLen == pPath->wPathLen") )
    __debugbreak();
  if ( _RBX->wNegotiationStartNode >= (unsigned int)_RBX->wPathLen )
  {
    LODWORD(vWishDelta) = _RBX->wNegotiationStartNode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( pPath->wNegotiationStartNode ) < (unsigned)( pPath->wPathLen )", "pPath->wNegotiationStartNode doesn't index pPath->wPathLen\n\t%i not in [0, %i)", vWishDelta, _RBX->wPathLen) )
      __debugbreak();
  }
  wPathLen = _RBX->wPathLen;
  if ( wPathLen > 1 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
    _RCX = 28i64 * wPathLen;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx-24h]
      vcomiss xmm1, xmm0
    }
    if ( (unsigned __int128)(28 * (__int128)wPathLen) >> 64 == 0 && !v24 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+138h+var_100], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+138h+bounds], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 531, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", *(double *)&bounds, v114) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovaps [rsp+138h+var_48], xmm7
    vmovaps [rsp+138h+var_58], xmm8
    vmovaps [rsp+138h+var_68], xmm9
    vmovaps [rsp+138h+var_78], xmm10
    vmovaps [rsp+138h+var_88], xmm11
    vmovaps [rsp+138h+var_98], xmm12
    vmovss  dword ptr [rsp+138h+inOutPos], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovaps [rsp+138h+var_A8], xmm13
    vmovaps [rsp+138h+var_B8], xmm14
    vmovaps [rsp+138h+var_C8], xmm15
    vmovss  dword ptr [rsp+138h+inOutPos+4], xmm1
    vmovss  dword ptr [rsp+138h+inOutPos+8], xmm0
  }
  Path_LocalizePos(_RBX, &inOutPos);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rbx+3B8h]
  }
  if ( v24 )
    goto LABEL_27;
  __asm { vucomiss xmm6, dword ptr [rbx+3A0h] }
  if ( v24 )
    __asm { vucomiss xmm6, dword ptr [rbx+3A4h] }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3BCh]
    vcomiss xmm0, xmm6
    vmovss  [rsp+138h+var_F0], xmm0
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v23 | v24 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+138h+vWishDelta], xmm0
    }
    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 544, ASSERT_TYPE_ASSERT, "( ( amount > 0 ) )", "( amount ) = %g", *(double *)&vWishDeltaa);
    v24 = !v29;
    if ( v29 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm11, dword ptr [rbx+3A0h]
    vucomiss xmm11, xmm6
    vmovss  xmm15, dword ptr [rbx+3A4h]
    vmovss  [rsp+138h+var_EC], xmm11
  }
  if ( v24 )
  {
    __asm { vucomiss xmm15, xmm6 }
    if ( v24 && (_RBX->flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 546, ASSERT_TYPE_ASSERT, "(Vec2NotZero( vDir ) || pPath->flags & (1 << 16))", (const char *)&queryFormat, "Vec2NotZero( vDir ) || pPath->flags & PATH_FLAG_3D") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3DCh]
    vmovss  xmm1, dword ptr [rbx+3E0h]
    vmovss  xmm7, dword ptr [rsp+138h+inOutPos]
    vmovss  xmm8, dword ptr [rsp+138h+inOutPos+4]
  }
  v36 = _RBX->wPathLen - 2;
  __asm
  {
    vsubss  xmm3, xmm1, xmm8
    vsubss  xmm4, xmm0, xmm7
    vmulss  xmm2, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm5, xmm1, xmm1
    vcmpless xmm0, xmm5, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm5, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm4, xmm4, xmm1
    vmulss  xmm3, xmm3, xmm1
    vmulss  xmm2, xmm11, xmm3
    vmulss  xmm0, xmm15, xmm4
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm5, xmm1, xmm5
    vmulss  xmm0, xmm11, xmm4
    vmulss  xmm3, xmm15, xmm3
    vaddss  xmm1, xmm3, xmm0
    vmovss  [rsp+138h+var_F4], xmm1
    vmovss  [rsp+138h+var_F8], xmm5
    vxorps  xmm14, xmm14, xmm14
  }
  if ( v36 < _RBX->wNegotiationStartNode )
  {
LABEL_27:
    v99 = _RSI;
    v100 = _RBX;
  }
  else
  {
    _RDI = (__int64)&_RBX->pts[v36].fDir2D.y;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi-10h]
      vmovss  xmm1, dword ptr [rdi-0Ch]
      vsubss  xmm12, xmm0, xmm7
      vsubss  xmm13, xmm1, xmm8
      vmovss  xmm7, dword ptr [rbx+3D8h]
      vucomiss xmm6, dword ptr [rdi-4]
      vmulss  xmm1, xmm13, dword ptr [rdi-4]
      vmulss  xmm0, xmm12, dword ptr [rdi]
      vsubss  xmm10, xmm1, xmm0
      vmulss  xmm0, xmm11, dword ptr [rdi]
      vmulss  xmm1, xmm15, dword ptr [rdi-4]
      vandps  xmm8, xmm10, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm10
      vcomiss xmm2, xmm6
      vmulss  xmm1, xmm11, xmm13
      vmulss  xmm0, xmm15, xmm12
      vsubss  xmm11, xmm1, xmm0
      vmulss  xmm0, xmm11, xmm5
      vcomiss xmm0, xmm6
      vcomiss xmm7, xmm6
      vmulss  xmm0, xmm8, xmm7
      vaddss  xmm9, xmm0, xmm9
      vcomiss xmm9, [rsp+138h+var_F0]
      vucomiss xmm10, xmm6
      vcomiss xmm7, xmm6
      vucomiss xmm6, dword ptr [rdi-4]
      vmovss  xmm0, [rsp+138h+var_F0]
      vsubss  xmm0, xmm0, xmm9
      vdivss  xmm3, xmm0, xmm8
      vmulss  xmm1, xmm3, dword ptr [rdi-4]
      vaddss  xmm2, xmm1, dword ptr [rdi-10h]
      vmulss  xmm0, xmm3, dword ptr [rdi]
      vaddss  xmm1, xmm0, dword ptr [rdi-0Ch]
      vsubss  xmm4, xmm1, dword ptr [rsp+138h+inOutPos+4]
      vsubss  xmm5, xmm2, dword ptr [rsp+138h+inOutPos]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm1
      vmulss  xmm1, xmm5, xmm1
      vmulss  xmm2, xmm1, [rsp+138h+var_EC]
      vmulss  xmm3, xmm0, xmm15
      vaddss  xmm0, xmm3, xmm2
      vcomiss xmm0, [rsp+138h+var_F4]
    }
    v99 = _RSI;
    v100 = _RBX;
  }
  Path_SetLookaheadToStart(v100, v99, 0);
  __asm
  {
    vmovaps xmm15, [rsp+138h+var_C8]
    vmovaps xmm14, [rsp+138h+var_B8]
    vmovaps xmm13, [rsp+138h+var_A8]
    vmovaps xmm12, [rsp+138h+var_98]
    vmovaps xmm11, [rsp+138h+var_88]
    vmovaps xmm10, [rsp+138h+var_78]
    vmovaps xmm9, [rsp+138h+var_68]
    vmovaps xmm8, [rsp+138h+var_58]
    vmovaps xmm7, [rsp+138h+var_48]
    vmovaps xmm6, [rsp+138h+var_38]
  }
}

/*
==============
Path_TrimCompletedPath
==============
*/
void Path_TrimCompletedPath(path_t *pPath, const vec3_t *vStartPos, const vec3_t *vLocalWishDelta)
{
  char wPathLen; 
  int v38; 
  int v39; 
  bool v41; 
  int wNegotiationStartNode; 
  int v56; 
  int v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  int v61; 
  __int64 v62; 
  __int64 v63; 
  bool v64; 
  bool v65; 
  bool v81; 
  bool v98; 
  bool v102; 
  bool v110; 
  bool v121; 
  bool v127; 
  bool v128; 
  bool v129; 
  bool v130; 
  bool v131; 
  bool v133; 
  int v134; 
  bool v135; 
  bool v171; 
  bool v172; 
  bool v173; 
  bool v179; 
  double v192; 
  double v193; 
  double v194; 
  __int64 v195; 
  double v196; 
  double v197; 
  double v198; 
  __int64 v199; 
  double v200; 
  double v201; 
  double v202; 
  double v203; 
  double v204; 
  double v205; 
  double v206; 
  double v207; 
  double v208; 
  double v209; 
  double v210; 
  double v211; 
  double v212; 
  int v214; 
  int v215; 
  vec3_t inOutPos; 
  char v226; 

  __asm
  {
    vmovaps [rsp+108h+var_48], xmm8
    vmovaps [rsp+108h+var_88], xmm12
  }
  _RDI = vLocalWishDelta;
  _RSI = vStartPos;
  _RBX = pPath;
  if ( !pPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2665, ASSERT_TYPE_ASSERT, "(pPath)", (const char *)&queryFormat, "pPath") )
    __debugbreak();
  if ( _RBX->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2666, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  if ( _RBX->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2667, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( _RBX->wNegotiationStartNode >= _RBX->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2668, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->wNegotiationStartNode < pPath->wPathLen") )
    __debugbreak();
  wPathLen = _RBX->wPathLen;
  if ( wPathLen > 1 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
    _RCX = 28i64 * wPathLen;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx-24h]
      vcomiss xmm1, xmm0
    }
    if ( (unsigned __int128)(28 * (__int128)wPathLen) >> 64 == 0 && !v128 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+108h+var_D0], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+108h+var_D8], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2669, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v196, v200) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovaps [rsp+108h+var_28], xmm6
    vmovaps [rsp+108h+var_38], xmm7
    vmovaps [rsp+108h+var_58], xmm9
    vmovss  xmm12, cs:__real@3f800000
  }
  if ( _RDI )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm5, dword ptr [rdi+4]
      vmovss  xmm6, dword ptr [rdi+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm12, xmm0
      vdivss  xmm1, xmm12, xmm0
      vmulss  xmm7, xmm4, xmm1
      vmulss  xmm9, xmm5, xmm1
      vmulss  xmm6, xmm6, xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+3A0h]
      vmovss  xmm9, dword ptr [rbx+3A4h]
      vmovss  xmm6, dword ptr [rbx+3A8h]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+108h+inOutPos], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+108h+inOutPos+8], xmm0
    vmovss  dword ptr [rsp+108h+inOutPos+4], xmm1
  }
  Path_LocalizePos(_RBX, &inOutPos);
  v38 = 0;
  v39 = _RBX->wPathLen - 2;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( v39 >= _RBX->wNegotiationStartNode )
  {
    v41 = (unsigned __int128)(28 * (__int128)v39) >> 64 != 0 || v128;
    _RDX = (__int64)&_RBX->pts[v39].vOrigPoint.z;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdx-8]
        vsubss  xmm3, xmm0, dword ptr [rsp+108h+inOutPos]
        vmovss  xmm1, dword ptr [rdx-4]
        vsubss  xmm2, xmm1, dword ptr [rsp+108h+inOutPos+4]
        vmovss  xmm0, dword ptr [rdx]
        vsubss  xmm4, xmm0, dword ptr [rsp+108h+inOutPos+8]
        vmulss  xmm2, xmm9, xmm2
        vmulss  xmm1, xmm7, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm6, xmm4
        vaddss  xmm2, xmm3, xmm0
        vmovss  [rsp+108h+var_A4], xmm2
        vmovss  xmm1, [rsp+108h+var_A4]
        vcomiss xmm1, xmm8
      }
      if ( !v41 )
        break;
      wNegotiationStartNode = _RBX->wNegotiationStartNode;
      ++v38;
      --v39;
      _RDX -= 28i64;
      v41 = v39 <= (unsigned int)wNegotiationStartNode;
    }
    while ( v39 >= wNegotiationStartNode );
    if ( v38 )
    {
      v56 = _RBX->wPathLen - v38;
      v57 = v56 - 2;
      if ( v56 - 2 < _RBX->wNegotiationStartNode )
        goto LABEL_82;
      v58 = v56;
      v59 = v56;
      _RBX->vCurrPoint.v[0] = _RBX->pts[v59 - 1].vOrigPoint.v[0];
      _RBX->vCurrPoint.v[1] = _RBX->pts[v59 - 1].vOrigPoint.v[1];
      _RBX->vCurrPoint.v[2] = _RBX->pts[v59 - 1].vOrigPoint.v[2];
      _RBX->fCurrLength = *((float *)&_RBX->pts[v58 - 1] - 2);
      Path_RemoveCompletedPathPoints(_RBX, v57);
    }
  }
  v60 = _RBX->wPathLen;
  v61 = v60 - 2;
  if ( (int)v60 - 2 >= _RBX->wNegotiationStartNode )
  {
    v62 = 28 * (v60 - 2);
    v63 = _RBX->wPathLen;
    v64 = __CFADD__(_RBX, v62);
    v65 = __CFADD__(_RBX, v62) || (path_t *)((char *)_RBX + v62) == NULL;
    _RDI = (float *)((char *)_RBX + v62);
    __asm
    {
      vmovaps [rsp+108h+var_68], xmm10
      vmovaps [rsp+108h+var_78], xmm11
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm2, xmm0, dword ptr [rsp+108h+inOutPos]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm3, xmm1, dword ptr [rsp+108h+inOutPos+4]
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+108h+inOutPos+8]
      vmulss  xmm2, xmm2, xmm7
      vmulss  xmm1, xmm3, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm6
      vaddss  xmm2, xmm3, xmm0
      vmovss  [rsp+108h+var_A4], xmm2
      vmovss  xmm1, [rsp+108h+var_A4]
      vcomiss xmm1, xmm8
    }
    if ( v65 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_A4]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+108h+var_E0], xmm1
      }
      v81 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2712, ASSERT_TYPE_ASSERT, "( ( d2 > 0 ) )", "( d2 ) = %g", v192);
      v64 = 0;
      v65 = !v81;
      if ( v81 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3DCh]
      vsubss  xmm2, xmm0, dword ptr [rsp+108h+inOutPos]
      vmovss  xmm1, dword ptr [rbx+3E0h]
      vsubss  xmm3, xmm1, dword ptr [rsp+108h+inOutPos+4]
      vmovss  xmm0, dword ptr [rbx+3E4h]
      vsubss  xmm4, xmm0, dword ptr [rsp+108h+inOutPos+8]
      vmovss  xmm11, dword ptr [rbx+3D8h]
      vmulss  xmm2, xmm2, xmm7
      vmulss  xmm1, xmm3, xmm9
      vmulss  xmm0, xmm4, xmm6
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsubss  xmm1, xmm2, cs:__real@38d1b717
      vmovss  [rsp+108h+var_A8], xmm1
      vmovss  xmm0, [rsp+108h+var_A8]
      vcomiss xmm0, xmm8
    }
    if ( !v65 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_A8]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+108h+var_E0], xmm1
      }
      v98 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2720, ASSERT_TYPE_ASSERT, "( ( d1 <= 0 ) )", "( d1 ) = %g", v193);
      v64 = 0;
      v65 = !v98;
      if ( v98 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, [rsp+108h+var_A4]
      vcomiss xmm0, xmm8
    }
    if ( v65 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_A4]
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+108h+var_E0], xmm1
      }
      v102 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2721, ASSERT_TYPE_ASSERT, "( ( d2 > 0 ) )", "( d2 ) = %g", v194);
      v64 = 0;
      v65 = !v102;
      if ( v102 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, [rsp+108h+var_A8]
      vmovss  xmm0, [rsp+108h+var_A4]
      vsubss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm8
    }
    if ( !v64 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_A4]
        vmovss  xmm1, [rsp+108h+var_A8]
        vcvtss2sd xmm3, xmm0, xmm0
        vmovsd  [rsp+108h+var_D0], xmm3
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+108h+var_D8], xmm2
      }
      v110 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2722, ASSERT_TYPE_ASSERT, "(d1 - d2 < 0)", "%s\n\t%g %g\n", "d1 - d2 < 0", v197, v201);
      v64 = 0;
      v65 = !v110;
      if ( v110 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm2, [rsp+108h+var_A8]
      vmovss  xmm1, [rsp+108h+var_A8]
      vmovss  xmm0, [rsp+108h+var_A4]
      vsubss  xmm1, xmm1, xmm0
      vdivss  xmm10, xmm2, xmm1
      vcomiss xmm10, xmm8
    }
    if ( v64 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_A4]
        vmovss  xmm1, [rsp+108h+var_A8]
        vcvtss2sd xmm4, xmm10, xmm10
        vmovsd  [rsp+108h+var_B8], xmm4
        vcvtss2sd xmm3, xmm0, xmm0
        vmovsd  [rsp+108h+var_C0], xmm3
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+108h+var_C8], xmm2
      }
      LODWORD(v199) = _RBX->wPathLen;
      LODWORD(v195) = v61;
      v121 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2726, ASSERT_TYPE_ASSERT, "(fraction >= 0)", "%s\n\ti: %d, pPath->wPathLen: %d, d1: %f, d2: %f, fraction: %f", "fraction >= 0", v195, v199, v204, v208, v211);
      v65 = !v121;
      if ( v121 )
        __debugbreak();
    }
    __asm { vcomiss xmm10, xmm12 }
    if ( !v65 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_A4]
        vmovss  xmm1, [rsp+108h+var_A8]
        vcvtss2sd xmm4, xmm10, xmm10
        vmovsd  [rsp+108h+var_B8], xmm4
        vcvtss2sd xmm3, xmm0, xmm0
        vmovsd  [rsp+108h+var_C0], xmm3
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+108h+var_C8], xmm2
      }
      LODWORD(v199) = _RBX->wPathLen;
      LODWORD(v195) = v61;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2729, ASSERT_TYPE_ASSERT, "(fraction <= 1.f)", "%s\n\ti: %d, pPath->wPathLen: %d, d1: %f, d2: %f, fraction: %f", "fraction <= 1.f", v195, v199, v205, v209, v212) )
        __debugbreak();
    }
    __asm { vmovss  [rsp+108h+var_A8], xmm11 }
    v127 = (v214 & 0x7F800000u) < 0x7F800000;
    v128 = (v214 & 0x7F800000) == 2139095040;
    v129 = (v214 & 0x7F800000u) <= 0x7F800000;
    if ( (v214 & 0x7F800000) == 2139095040 )
    {
      v130 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2731, ASSERT_TYPE_SANITY, "( !IS_NAN( fLength ) )", (const char *)&queryFormat, "!IS_NAN( fLength )");
      v127 = 0;
      v128 = !v130;
      v129 = !v130;
      if ( v130 )
        __debugbreak();
    }
    __asm { vcomiss xmm11, xmm8 }
    if ( v129 )
    {
      v131 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2732, ASSERT_TYPE_ASSERT, "(fLength > 0)", (const char *)&queryFormat, "fLength > 0");
      v127 = 0;
      v128 = !v131;
      v129 = !v131;
      if ( v131 )
        __debugbreak();
    }
    __asm
    {
      vmulss  xmm9, xmm10, xmm11
      vcomiss xmm9, xmm11
    }
    if ( !v129 )
    {
      v133 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2735, ASSERT_TYPE_ASSERT, "(dist <= fLength)", (const char *)&queryFormat, "dist <= fLength");
      v127 = 0;
      v128 = !v133;
      if ( v133 )
        __debugbreak();
      __asm { vcomiss xmm9, xmm11 }
    }
    if ( v127 )
    {
      __asm { vucomiss xmm8, dword ptr [rdi+0Ch] }
      if ( v128 )
      {
        __asm { vucomiss xmm8, dword ptr [rdi+10h] }
        if ( v128 )
        {
          v127 = 0;
          if ( (_RBX->flags & 0x10000) == 0 )
          {
            v135 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2751, ASSERT_TYPE_ASSERT, "(pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & (1 << 16))", (const char *)&queryFormat, "pt->fDir2D[0] || pt->fDir2D[1] || pPath->flags & PATH_FLAG_3D");
            v127 = 0;
            if ( v135 )
              __debugbreak();
          }
        }
      }
      __asm { vcomiss xmm9, xmm8 }
      if ( v127 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2752, ASSERT_TYPE_ASSERT, "(dist >= 0)", (const char *)&queryFormat, "dist >= 0") )
        __debugbreak();
      if ( (_RBX->flags & 0x10000) != 0 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+3DCh]
          vmovss  xmm0, dword ptr [rdi]
          vmovss  xmm1, dword ptr [rdi+4]
          vsubss  xmm5, xmm1, dword ptr [rbx+3E0h]
          vsubss  xmm4, xmm0, xmm6
          vmovss  xmm0, dword ptr [rdi+8]
          vsubss  xmm7, xmm0, dword ptr [rbx+3E4h]
          vmulss  xmm0, xmm7, xmm7
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm12, xmm0
          vdivss  xmm3, xmm12, xmm0
          vmulss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm2, xmm1, xmm6
          vmulss  xmm0, xmm5, xmm3
          vmulss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rbx+3DCh], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx+3E0h]
          vmulss  xmm0, xmm7, xmm3
          vmulss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rbx+3E0h], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx+3E4h]
          vmovss  dword ptr [rbx+3E4h], xmm2
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm9, dword ptr [rdi+0Ch]
          vaddss  xmm1, xmm0, dword ptr [rbx+3DCh]
          vmovss  dword ptr [rbx+3DCh], xmm1
          vmulss  xmm0, xmm9, dword ptr [rdi+10h]
          vaddss  xmm1, xmm0, dword ptr [rbx+3E0h]
          vmovss  dword ptr [rbx+3E0h], xmm1
          vmovss  xmm3, dword ptr [rbx+3E4h]
          vmovss  xmm0, dword ptr [rdi+8]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm10
          vaddss  xmm3, xmm2, xmm3
          vmovss  dword ptr [rbx+3E4h], xmm3
        }
      }
      __asm
      {
        vsubss  xmm0, xmm11, xmm9
        vmovss  [rsp+108h+var_A8], xmm0
        vmovss  dword ptr [rbx+3D8h], xmm0
      }
      v171 = (v215 & 0x7F800000u) < 0x7F800000;
      v172 = (v215 & 0x7F800000u) <= 0x7F800000;
      if ( (v215 & 0x7F800000) == 2139095040 )
      {
        v173 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2769, ASSERT_TYPE_SANITY, "( !IS_NAN( pPath->fCurrLength ) )", (const char *)&queryFormat, "!IS_NAN( pPath->fCurrLength )");
        v171 = 0;
        v172 = !v173;
        if ( v173 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+3D8h]
        vcomiss xmm3, xmm8
      }
      if ( v172 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm10, xmm10
          vmovsd  [rsp+108h+var_C0], xmm0
          vcvtss2sd xmm1, xmm9, xmm9
          vmovsd  [rsp+108h+var_C8], xmm1
          vcvtss2sd xmm2, xmm11, xmm11
          vmovsd  [rsp+108h+var_D0], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+108h+var_D8], xmm3
        }
        v179 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2770, ASSERT_TYPE_ASSERT, "(pPath->fCurrLength > 0)", "%s\n\tfCurrLength: %f, fLength: %f, dist: %f, fraction: %f", "pPath->fCurrLength > 0", v198, v202, v206, v210);
        v171 = 0;
        if ( v179 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+14h]
        vmovss  xmm0, dword ptr [rbx+3D8h]
        vcomiss xmm1, xmm0
      }
      if ( v171 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+108h+var_C8], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+108h+var_D0], xmm1
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2771, ASSERT_TYPE_ASSERT, "( pt->fOrigLength ) >= ( pPath->fCurrLength )", "%s >= %s\n\t%g, %g", "pt->fOrigLength", "pPath->fCurrLength", v203, v207) )
          __debugbreak();
      }
      v134 = v61;
    }
    else
    {
      if ( v61 <= _RBX->wNegotiationStartNode )
      {
LABEL_81:
        __asm
        {
          vmovaps xmm10, [rsp+108h+var_68]
          vmovaps xmm11, [rsp+108h+var_78]
        }
        goto LABEL_82;
      }
      _RBX->vCurrPoint.v[0] = *_RDI;
      _RBX->vCurrPoint.v[1] = _RDI[1];
      _RBX->vCurrPoint.v[2] = _RDI[2];
      _RBX->fCurrLength = *((float *)&_RBX->pts[v63 - 2] - 2);
      v134 = v61 - 1;
    }
    Path_RemoveCompletedPathPoints(_RBX, v134);
    goto LABEL_81;
  }
LABEL_82:
  __asm
  {
    vmovaps xmm9, [rsp+108h+var_58]
    vmovaps xmm7, [rsp+108h+var_38]
    vmovaps xmm6, [rsp+108h+var_28]
  }
  _R11 = &v226;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm12, xmmword ptr [r11-70h]
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
  int wPathLen; 
  int v36; 
  int v37; 
  char v41; 
  bool v42; 
  bool v43; 
  int v44; 
  int flags; 
  int v51; 
  bool v56; 
  char v80; 
  bool v81; 
  bool v87; 
  char v88; 
  bool v89; 
  bool v90; 
  double v99; 
  double v100; 
  vec3_t inOutPos; 
  vec3_t vEndPos; 
  char v107; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps [rsp+108h+var_98], xmm12
  }
  _RDI = vLookaheadPos;
  _RSI = vStartPos;
  _RBX = pPath;
  if ( pPath->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2528, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+108h+inOutPos], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+108h+inOutPos+8], xmm0
    vmovss  dword ptr [rsp+108h+inOutPos+4], xmm1
  }
  Path_LocalizePos(_RBX, &inOutPos);
  wPathLen = _RBX->wPathLen;
  if ( _RBX->lookaheadNextNode >= wPathLen - 1 )
  {
    _RBX->fLookaheadDistToNextNode = 0.0;
    _RBX->lookaheadNextNode = wPathLen - 1;
  }
  __asm
  {
    vmovss  xmm11, dword ptr [rsp+108h+inOutPos+4]
    vmovss  xmm12, dword ptr [rsp+108h+inOutPos]
    vmovss  xmm10, cs:__real@3f800000
    vmovaps [rsp+108h+var_48], xmm7
    vmovaps [rsp+108h+var_58], xmm8
    vmovaps [rsp+108h+var_68], xmm9
    vxorps  xmm6, xmm6, xmm6
  }
  if ( bReduceLookaheadAmount )
  {
    __asm { vmovss  xmm1, [rsp+108h+maxLookaheadAmountIfReduce]; maxLookaheadAmountIfReduce }
    Path_ReduceLookaheadAmount(_RBX, *(double *)&_XMM1);
    __asm
    {
      vmovss  xmm7, dword ptr [rdi]
      vmovss  xmm8, dword ptr [rdi+4]
      vmovss  xmm9, dword ptr [rdi+8]
    }
    *(_QWORD *)_RBX->lookaheadPos.v = 0i64;
    _RBX->lookaheadPos.v[2] = 0.0;
    goto LABEL_29;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+108h+vEndPos], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+108h+vEndPos+8], xmm0
    vmovss  dword ptr [rsp+108h+vEndPos+4], xmm1
  }
  Path_WorldifyPos(_RBX, &vEndPos);
  if ( Path_LookaheadPredictionTraceExtended(_RBX, _RSI, &vEndPos, bounds) )
  {
    _RBX->lookaheadPos.v[0] = _RDI->v[0];
    _RBX->lookaheadPos.v[1] = _RDI->v[1];
    _RBX->lookaheadPos.v[2] = _RDI->v[2];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+3BCh]
      vmulss  xmm1, xmm0, cs:__real@3f969696
      vaddss  xmm2, xmm1, cs:__real@40cccccd
      vminss  xmm3, xmm2, cs:__real@47800000
    }
    flags = _RBX->flags;
    __asm
    {
      vmovss  xmm7, dword ptr [rdi]
      vmovss  xmm8, dword ptr [rdi+4]
      vmovss  xmm9, dword ptr [rdi+8]
      vmovss  dword ptr [rbx+3BCh], xmm3
    }
    if ( (flags & 2) != 0 )
      v51 = flags | 0x40400;
    else
      v51 = flags | 0x40002;
    _RBX->flags = v51;
    goto LABEL_29;
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+3ACh]
    vucomiss xmm7, xmm6
    vucomiss xmm6, dword ptr [rbx+3B0h]
    vmovss  xmm7, dword ptr [rdi]
    vmovss  xmm8, dword ptr [rdi+4]
    vmovss  xmm9, dword ptr [rdi+8]
  }
  *(_QWORD *)_RBX->lookaheadPos.v = 0i64;
  _RBX->lookaheadPos.v[2] = 0.0;
  if ( _RBX->lookaheadNextNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2563, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode >= 0)", (const char *)&queryFormat, "pPath->lookaheadNextNode >= 0") )
    __debugbreak();
  v36 = _RBX->wPathLen;
  v37 = _RBX->lookaheadNextNode;
  if ( v37 == v36 - 2 )
  {
    __asm { vmovss  xmm0, dword ptr [rbx+3D8h] }
  }
  else
  {
    _RCX = 28i64 * (unsigned __int8)v37;
    __asm { vmovss  xmm0, dword ptr [rcx+rbx+14h] }
  }
  if ( (_RBX->flags & 2) == 0 )
    goto LABEL_24;
  if ( (char)v37 >= (char)v36 )
    goto LABEL_24;
  __asm { vcomiss xmm0, dword ptr [rbx+3C0h] }
  if ( (unsigned __int8)v37 < (unsigned __int8)v36 )
  {
LABEL_24:
    __asm { vmovss  xmm1, [rsp+108h+maxLookaheadAmountIfReduce]; maxLookaheadAmountIfReduce }
    Path_ReduceLookaheadAmount(_RBX, *(double *)&_XMM1);
LABEL_29:
    __asm
    {
      vsubss  xmm2, xmm9, dword ptr [rsp+108h+inOutPos+8]
      vsubss  xmm0, xmm8, xmm11
      vsubss  xmm4, xmm7, xmm12
      vmovss  dword ptr [rbx+3A4h], xmm0
      vmulss  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbx+3A0h], xmm4
      vmovss  dword ptr [rbx+3A8h], xmm2
    }
    v56 = (_RBX->flags & 0x10000) == 0;
    __asm
    {
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm1, xmm0
    }
    if ( (_RBX->flags & 0x10000) != 0 )
    {
      __asm
      {
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm1, xmm0, xmm3
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm2, xmm10, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbx+3A0h], xmm0
        vmulss  xmm1, xmm2, dword ptr [rbx+3A4h]
        vmovss  dword ptr [rbx+3A4h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+3A8h]
        vmovss  dword ptr [rbx+3A8h], xmm0
        vmovss  dword ptr [rbx+3B8h], xmm3
      }
    }
    else
    {
      __asm
      {
        vsqrtss xmm2, xmm3, xmm3
        vucomiss xmm2, xmm6
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm10, xmm0
        vdivss  xmm1, xmm10, xmm0
        vmulss  xmm0, xmm4, xmm1
        vmovss  dword ptr [rbx+3A0h], xmm0
        vmulss  xmm1, xmm1, dword ptr [rbx+3A4h]
        vmovss  dword ptr [rbx+3A4h], xmm1
        vmovss  dword ptr [rbx+3B8h], xmm2
      }
      if ( v56 )
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+3A8h]
          vdivss  xmm1, xmm0, xmm2
        }
      }
      __asm { vmovss  dword ptr [rbx+3A8h], xmm1 }
    }
    __asm
    {
      vmovss  xmm0, [rsp+108h+dist]
      vmovss  dword ptr [rbx+3C0h], xmm0
    }
    _RBX->lookaheadNextNode = lookaheadNextNode;
    if ( _RBX->wNegotiationStartNode > (char)lookaheadNextNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2599, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode <= pPath->lookaheadNextNode)", (const char *)&queryFormat, "pPath->wNegotiationStartNode <= pPath->lookaheadNextNode") )
      __debugbreak();
    if ( _RBX->lookaheadNextNode >= _RBX->wPathLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2600, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen") )
      __debugbreak();
    _RCX = 28i64 * (unsigned __int8)_RBX->lookaheadNextNode;
    __asm { vcomiss xmm6, dword ptr [rcx+rbx+14h] }
    if ( is_mul_ok(0x1Cui64, (unsigned __int8)_RBX->lookaheadNextNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2601, ASSERT_TYPE_ASSERT, "(pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength > 0)", (const char *)&queryFormat, "pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength > 0") )
      __debugbreak();
    _RCX = 28i64 * (unsigned __int8)_RBX->lookaheadNextNode;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx+14h]
      vcomiss xmm0, dword ptr [rbx+3C0h]
    }
    if ( !is_mul_ok(0x1Cui64, (unsigned __int8)_RBX->lookaheadNextNode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2602, ASSERT_TYPE_ASSERT, "(pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength)", (const char *)&queryFormat, "pPath->fLookaheadDistToNextNode <= pPath->pts[static_cast<unsigned char>( pPath->lookaheadNextNode )].fOrigLength") )
      __debugbreak();
    v80 = _RBX->wPathLen;
    v81 = v80 == 1;
    if ( v80 > 1 )
    {
      __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
      _RCX = 28i64 * v80;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx+rbx-24h]
        vcomiss xmm1, xmm0
      }
      if ( (unsigned __int128)(28 * (__int128)v80) >> 64 == 0 && !v81 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+108h+var_D0], xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+108h+var_D8], xmm1
        }
        v87 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2603, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v99, v100);
        v81 = !v87;
        if ( v87 )
          __debugbreak();
      }
    }
    __asm { vucomiss xmm6, dword ptr [rbx+3C0h] }
    if ( !v81 && _RBX->lookaheadNextNode >= _RBX->wPathLen - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2604, ASSERT_TYPE_ASSERT, "(!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1))", (const char *)&queryFormat, "!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1)") )
      __debugbreak();
    v88 = _RBX->wPathLen;
    v89 = _RBX->lookaheadNextNode == (unsigned __int8)v88;
    if ( _RBX->lookaheadNextNode >= v88 )
    {
      v90 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2605, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen");
      v89 = !v90;
      if ( v90 )
        __debugbreak();
    }
    __asm { vucomiss xmm6, dword ptr [rbx+3C0h] }
    if ( !v89 && _RBX->lookaheadNextNode >= _RBX->wPathLen - 1 )
    {
      v44 = 2606;
LABEL_61:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", v44, ASSERT_TYPE_ASSERT, "(!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1))", (const char *)&queryFormat, "!pPath->fLookaheadDistToNextNode || (pPath->lookaheadNextNode < pPath->wPathLen - 1)") )
        __debugbreak();
      goto LABEL_63;
    }
    goto LABEL_63;
  }
  __asm { vmovss  xmm1, [rsp+108h+maxLookaheadAmountIfReduce]; maxLookaheadAmountIfReduce }
  Path_ReduceLookaheadAmount(_RBX, *(double *)&_XMM1);
  v41 = _RBX->wPathLen;
  v42 = _RBX->lookaheadNextNode == (unsigned __int8)v41;
  if ( _RBX->lookaheadNextNode >= v41 )
  {
    v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2569, ASSERT_TYPE_ASSERT, "(pPath->lookaheadNextNode < pPath->wPathLen)", (const char *)&queryFormat, "pPath->lookaheadNextNode < pPath->wPathLen");
    v42 = !v43;
    if ( v43 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, dword ptr [rbx+3C0h] }
  if ( !v42 && _RBX->lookaheadNextNode >= _RBX->wPathLen - 1 )
  {
    v44 = 2570;
    goto LABEL_61;
  }
LABEL_63:
  __asm
  {
    vmovaps xmm9, [rsp+108h+var_68]
    vmovaps xmm8, [rsp+108h+var_58]
    vmovaps xmm7, [rsp+108h+var_48]
  }
  _R11 = &v107;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
Path_UpdateLookaheadExtended
==============
*/
void Path_UpdateLookaheadExtended(path_t *pPath, const vec3_t *vStartPos, int bReduceLookaheadAmount, int bTrimAmount, int bAllowBacktrack, const vec3_t *vWishDelta, const Bounds *bounds)
{
  char wPathLen; 
  unsigned int flags; 
  int wNegotiationStartNode; 
  int v29; 
  char v32; 
  unsigned int parentIndex; 
  gentity_s *v44; 
  vec3_t *p_inOutPos; 
  char v81; 
  int v82; 
  char v92; 
  __int64 v93; 
  pathnode_t *v94; 
  __int64 totalLinkCount; 
  pathlink_s *Links; 
  int v97; 
  unsigned int v102; 
  pathnode_t *pNodeTo; 
  char v117; 
  char v137; 
  double v139; 
  double v140; 
  PathFindInput pathFindInput; 
  CustomSearchInfo_FindPath custom; 
  vec3_t inOutPos; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 

  _RBX = pPath;
  _RSI = vStartPos;
  Profile_Begin(259);
  if ( _RBX->wNegotiationStartNode < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3178, ASSERT_TYPE_ASSERT, "(pPath->wNegotiationStartNode >= 0)", (const char *)&queryFormat, "pPath->wNegotiationStartNode >= 0") )
    __debugbreak();
  if ( _RBX->wPathLen <= _RBX->wNegotiationStartNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3179, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > pPath->wNegotiationStartNode)", (const char *)&queryFormat, "pPath->wPathLen > pPath->wNegotiationStartNode") )
    __debugbreak();
  wPathLen = _RBX->wPathLen;
  if ( wPathLen > 1 )
  {
    __asm { vmovss  xmm1, dword ptr [rbx+3D8h] }
    _RCX = 28i64 * wPathLen;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+rbx-24h]
      vcomiss xmm1, xmm0
    }
    if ( !(((unsigned __int128)(28 * (__int128)wPathLen) >> 64 != 0) | v117) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+3B0h+var_378], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+3B0h+var_380], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 3180, ASSERT_TYPE_ASSERT, "(pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength)", "%s\n\tpPath->fCurrLength: %g, pPath->pts[pPath->wPathLen - 2].fOrigLength: %g", "pPath->wPathLen <= 1 || pPath->fCurrLength <= pPath->pts[pPath->wPathLen - 2].fOrigLength", v139, v140) )
        __debugbreak();
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+2B0h+inOutPos], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+2B0h+inOutPos+8], xmm0
    vmovss  dword ptr [rbp+2B0h+inOutPos+4], xmm1
    vmovaps [rsp+3B0h+var_B0], xmm13
  }
  Path_LocalizePos(_RBX, &inOutPos);
  flags = _RBX->flags & 0xFFFF7FDF;
  wNegotiationStartNode = _RBX->wNegotiationStartNode;
  v29 = _RBX->wPathLen - 1;
  _RBX->flags = flags;
  __asm { vmovss  xmm0, dword ptr [rbx+3DCh] }
  if ( wNegotiationStartNode == v29 )
  {
    __asm
    {
      vsubss  xmm4, xmm0, dword ptr [rbp+2B0h+inOutPos]
      vmovss  dword ptr [rbx+3A0h], xmm4
      vmovss  xmm0, dword ptr [rbx+3E0h]
      vsubss  xmm1, xmm0, dword ptr [rbp+2B0h+inOutPos+4]
      vmovss  dword ptr [rbx+3A4h], xmm1
      vmovss  xmm0, dword ptr [rbx+3E4h]
      vsubss  xmm2, xmm0, dword ptr [rbp+2B0h+inOutPos+8]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm1, xmm1
      vaddss  xmm3, xmm1, xmm0
      vmovss  dword ptr [rbx+3A8h], xmm2
    }
    if ( (flags & 0x10000) != 0 )
    {
      __asm
      {
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm1, xmm0, xmm3
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, cs:__real@80000000
        vmovss  xmm1, cs:__real@3f800000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbx+3A0h], xmm0
        vmulss  xmm0, xmm2, dword ptr [rbx+3A4h]
        vmovss  dword ptr [rbx+3A4h], xmm0
        vmulss  xmm0, xmm2, dword ptr [rbx+3A8h]
        vmovss  dword ptr [rbx+3A8h], xmm0
        vmovss  dword ptr [rbx+3B8h], xmm3
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm3, xmm3
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbx+3A0h], xmm0
        vmulss  xmm0, xmm2, dword ptr [rbx+3A4h]
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm3, xmm1
        vmovss  dword ptr [rbx+3A4h], xmm0
        vmovss  dword ptr [rbx+3B8h], xmm3
      }
      if ( !v117 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+3A8h]
          vdivss  xmm1, xmm0, xmm3
        }
      }
      __asm { vmovss  dword ptr [rbx+3A8h], xmm1 }
    }
    v137 = _RBX->wNegotiationStartNode;
    _RBX->flags |= 0x41u;
    _RBX->fLookaheadDistToNextNode = 0.0;
    _RBX->lookaheadNextNode = v137;
  }
  else
  {
    _RAX = vWishDelta;
    v32 = 0;
    __asm
    {
      vmovaps [rsp+3B0h+var_40], xmm6
      vmovaps [rsp+3B0h+var_50], xmm7
      vmovaps [rsp+3B0h+var_80], xmm10
      vmovaps [rsp+3B0h+var_90], xmm11
      vmovaps [rsp+3B0h+var_A0], xmm12
      vsubss  xmm10, xmm0, dword ptr [rbp+2B0h+inOutPos]
      vmovss  xmm0, dword ptr [rbx+3E4h]
      vmovss  xmm1, dword ptr [rbx+3E0h]
      vsubss  xmm12, xmm0, dword ptr [rbp+2B0h+inOutPos+8]
      vsubss  xmm11, xmm1, dword ptr [rbp+2B0h+inOutPos+4]
      vmovss  xmm13, cs:__real@3f800000
      vxorps  xmm6, xmm6, xmm6
    }
    if ( vWishDelta )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rax]
        vucomiss xmm7, xmm6
        vmovaps [rsp+3B0h+var_60], xmm8
        vmovss  xmm8, dword ptr [rax+8]
        vmovaps [rsp+3B0h+var_70], xmm9
        vmovss  xmm9, dword ptr [rax+4]
      }
      parentIndex = _RBX->parentIndex;
      if ( parentIndex )
      {
        if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 237, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
          __debugbreak();
        v44 = &g_entities[_RBX->parentIndex];
        if ( G_IsEntityInUse(_RBX->parentIndex) )
        {
          AnglesToAxis(&v44->r.currentAngles, &axis);
          MatrixInverse(&axis, &out);
          __asm
          {
            vmulss  xmm2, xmm9, dword ptr [rbp+2B0h+out+0Ch]
            vmulss  xmm1, xmm7, dword ptr [rbp+2B0h+out]
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm2, xmm8, dword ptr [rbp+2B0h+out+18h]
            vmovaps xmm4, xmm9
            vmulss  xmm0, xmm4, dword ptr [rbp+2B0h+out+10h]
            vmovaps xmm5, xmm7
            vmulss  xmm1, xmm5, dword ptr [rbp+2B0h+out+4]
            vaddss  xmm7, xmm3, xmm2
            vmulss  xmm2, xmm8, dword ptr [rbp+2B0h+out+1Ch]
            vaddss  xmm3, xmm1, xmm0
            vmulss  xmm0, xmm4, dword ptr [rbp+2B0h+out+14h]
            vaddss  xmm9, xmm3, xmm2
            vmulss  xmm3, xmm5, dword ptr [rbp+2B0h+out+8]
            vmulss  xmm2, xmm8, dword ptr [rbp+2B0h+out+20h]
            vaddss  xmm4, xmm3, xmm0
            vaddss  xmm8, xmm4, xmm2
          }
        }
      }
      flags = _RBX->flags;
      p_inOutPos = &inOutPos;
      __asm
      {
        vmulss  xmm1, xmm9, xmm9
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm13, xmm0
        vdivss  xmm1, xmm13, xmm0
        vmovd   xmm0, dword ptr [rbx+400h]
        vmulss  xmm4, xmm1, xmm7
        vmulss  xmm3, xmm1, xmm9
        vmovaps xmm9, [rsp+3B0h+var_70]
      }
      _RDI = 0i64;
      __asm
      {
        vmovd   xmm1, edi
        vpcmpeqd xmm2, xmm0, xmm1
        vmulss  xmm1, xmm3, dword ptr [rbx+3A4h]
        vmulss  xmm0, xmm4, dword ptr [rbx+3A0h]
        vblendvps xmm5, xmm6, xmm8, xmm2
        vmovaps xmm8, [rsp+3B0h+var_60]
        vaddss  xmm1, xmm1, xmm0
        vcomiss xmm1, cs:__real@3da3d70a
        vmovss  dword ptr [rbp+2B0h+inOutPos+8], xmm5
      }
      v32 = 1;
    }
    else
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+3A8h]
        vmovss  xmm4, dword ptr [rbx+3A0h]
        vmovss  xmm3, dword ptr [rbx+3A4h]
      }
      _RDI = 0i64;
      __asm { vmovss  dword ptr [rbp+2B0h+inOutPos+8], xmm5 }
      p_inOutPos = NULL;
    }
    __asm
    {
      vmovaps xmm7, [rsp+3B0h+var_50]
      vmovss  dword ptr [rbp+2B0h+inOutPos+4], xmm3
      vmovss  dword ptr [rbp+2B0h+inOutPos], xmm4
    }
    v81 = ((flags & 0x40000) != 0) | v117;
    if ( (flags & 0x40000) == 0 )
    {
      v82 = level.time - _RBX->iPathTime;
      v81 = (unsigned int)v82 <= 0xFA;
      if ( v82 <= 250 )
        v32 = 1;
    }
    __asm
    {
      vmulss  xmm1, xmm3, xmm11
      vmovaps xmm11, [rsp+3B0h+var_90]
      vmulss  xmm0, xmm4, xmm10
      vmovaps xmm10, [rsp+3B0h+var_80]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm12
      vmovaps xmm12, [rsp+3B0h+var_A0]
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm6
      vmovaps xmm6, [rsp+3B0h+var_40]
    }
    if ( !v81 )
    {
      if ( bAllowBacktrack )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@42800000
          vcomiss xmm0, dword ptr [rbx+3BCh]
        }
      }
      goto LABEL_57;
    }
    if ( _RBX->wPathLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 2100, ASSERT_TYPE_ASSERT, "(pPath->wPathLen > 0)", (const char *)&queryFormat, "pPath->wPathLen > 0") )
      __debugbreak();
    v92 = _RBX->wPathLen;
    if ( v92 < 1 )
      goto LABEL_34;
    v93 = v92;
    v94 = Path_ConvertIndexToNode(_RBX->pts[v92 - 1].iNodeNum);
    totalLinkCount = v94->constant.totalLinkCount;
    if ( v94->dynamic.wLinkCount == (_DWORD)totalLinkCount || !v94->constant.totalLinkCount )
      goto LABEL_34;
    Links = v94->constant.Links;
    while ( Links->nodeNum != *((_WORD *)&_RBX->pts[v93 - 1] - 2) )
    {
      ++_RDI;
      ++Links;
      if ( _RDI >= totalLinkCount )
        goto LABEL_34;
    }
    if ( Links->disconnectCount )
    {
      v97 = _RBX->flags;
    }
    else
    {
LABEL_34:
      v97 = _RBX->flags;
      if ( (v97 & 4) == 0 || _RBX->wPathLen > 8 )
        goto LABEL_38;
    }
    if ( (v97 & 0x80000) != 0 )
    {
      v97 |= 0x100000u;
      _RBX->flags = v97;
LABEL_38:
      if ( !v32 )
      {
        if ( (v97 & 2) == 0 )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@46800000
            vcomiss xmm0, dword ptr [rbx+3BCh]
          }
        }
        Path_TrimCompletedPath(_RBX, _RSI, p_inOutPos);
      }
      if ( bTrimAmount )
        Path_SubtractTrimmedAmount(_RBX, _RSI);
LABEL_57:
      Path_CalcLookahead(_RBX, _RSI, bReduceLookaheadAmount, bounds);
      goto LABEL_64;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+388h]
      vmovss  xmm1, dword ptr [rbx+38Ch]
      vmovss  dword ptr [rbp+2B0h+inOutPos], xmm0
      vmovss  xmm0, dword ptr [rbx+390h]
      vmovss  dword ptr [rbp+2B0h+inOutPos+8], xmm0
      vmovss  dword ptr [rbp+2B0h+inOutPos+4], xmm1
    }
    Path_WorldifyPos(_RBX, &inOutPos);
    pathFindInput.pNodeFrom = NULL;
    pathFindInput.pNodeTo = NULL;
    *(_QWORD *)&pathFindInput.bAllowJumpLinks = 0i64;
    memset_0(&pathFindInput.avoidExpStances, 0, 0xE0ui64);
    v102 = _RBX->flags;
    pathFindInput.vGoalPos = &inOutPos;
    pathFindInput.pPath = _RBX;
    __asm { vmovss  [rbp+2B0h+pathFindInput.badplacePercent], xmm13 }
    pathFindInput.searchEntNum = 2047;
    pathFindInput.vStartPos = _RSI;
    *(_QWORD *)&pathFindInput.bAllowNegotiationLinks = (v102 >> 4) & 1;
    pathFindInput.useChokePoints = (v102 >> 11) & 1;
    pathFindInput.pNodeTo = Path_NearestNode(&inOutPos, _RBX->iTraceMask, NULL);
    if ( pathFindInput.pNodeTo )
    {
      pathFindInput.pNodeFrom = Path_NearestNode(_RSI, _RBX->iTraceMask, NULL);
      if ( pathFindInput.pNodeFrom )
      {
        CustomSearchInfo_FindPath::CustomSearchInfo_FindPath(&custom, &pathFindInput);
        if ( (pathFindInput.pNodeFrom->constant.spawnflags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1745, ASSERT_TYPE_ASSERT, "((pathFindInput->pNodeFrom->constant.spawnflags & PNF_DONTLINK) == 0)", (const char *)&queryFormat, "(pathFindInput->pNodeFrom->constant.spawnflags & PNF_DONTLINK) == 0") )
          __debugbreak();
        pNodeTo = pathFindInput.pNodeTo;
        if ( (pathFindInput.pNodeTo->constant.spawnflags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 1746, ASSERT_TYPE_ASSERT, "((pathFindInput->pNodeTo->constant.spawnflags & PNF_DONTLINK) == 0)", (const char *)&queryFormat, "(pathFindInput->pNodeTo->constant.spawnflags & PNF_DONTLINK) == 0") )
          __debugbreak();
        _RAX = pathFindInput.vStartPos;
        custom.m_pNodeTo = pNodeTo;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  dword ptr [rbp+2B0h+custom.startPos], xmm0
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  dword ptr [rbp+2B0h+custom.startPos+4], xmm1
          vmovss  dword ptr [rbp+2B0h+custom.startPos+8], xmm0
        }
        Path_AStarAlgorithm_CustomSearchInfo_FindPath_(&pathFindInput, pathFindInput.pPath->eTeam, 1, &custom);
      }
    }
  }
LABEL_64:
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm13, [rsp+3B0h+var_B0] }
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
  vec3_t inOutDira; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  dword ptr [rsp+48h+inOutDir], xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  _RBX = inOutDir;
  __asm
  {
    vmovss  dword ptr [rsp+48h+inOutDir+8], xmm0
    vmovss  dword ptr [rsp+48h+inOutDir+4], xmm1
  }
  Path_WorldifyDir(pPath, &inOutDira);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+inOutDir]
    vmovss  xmm1, dword ptr [rsp+48h+inOutDir+4]
    vmovss  dword ptr [rbx], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
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
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 

  parentIndex = pPath->parentIndex;
  _RBX = inOutDir;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 257, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+78h+in1], xmm0
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rsp+78h+in1+8], xmm0
        vmovss  dword ptr [rsp+78h+in1+4], xmm1
      }
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixTransformVector(&in1, &axis, _RBX);
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
  vec3_t out; 
  tmat33_t<vec3_t> axis; 

  parentIndex = pPath->parentIndex;
  _RDI = inOutPos;
  if ( parentIndex )
  {
    if ( parentIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_navigation.cpp", 163, ASSERT_TYPE_ASSERT, "(pPath->parentIndex < ( 2048 ))", (const char *)&queryFormat, "pPath->parentIndex < MAX_GENTITIES") )
      __debugbreak();
    v5 = pPath->parentIndex;
    v6 = &g_entities[v5];
    if ( G_IsEntityInUse(v5) )
    {
      AnglesToAxis(&v6->r.currentAngles, &axis);
      MatrixTransformVector(_RDI, &axis, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+78h+out]
        vaddss  xmm1, xmm0, dword ptr [rbx+130h]
        vmovss  xmm2, dword ptr [rsp+78h+out+4]
        vmovss  dword ptr [rdi], xmm1
        vaddss  xmm0, xmm2, dword ptr [rbx+134h]
        vmovss  xmm1, dword ptr [rsp+78h+out+8]
        vmovss  dword ptr [rdi+4], xmm0
        vaddss  xmm2, xmm1, dword ptr [rbx+138h]
        vmovss  dword ptr [rdi+8], xmm2
      }
    }
  }
}

