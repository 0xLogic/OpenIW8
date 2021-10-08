/*
==============
Nav_GetLayer
==============
*/

AINavLayer __fastcall Nav_GetLayer(const AINavigator *pNav)
{
  return ?Nav_GetLayer@@YA?AW4AINavLayer@@PEBVAINavigator@@@Z(pNav);
}

/*
==============
Nav_GetLinkUsageFlags
==============
*/

unsigned int __fastcall Nav_GetLinkUsageFlags(AINavigator *pNav)
{
  return ?Nav_GetLinkUsageFlags@@YAIPEAVAINavigator@@@Z(pNav);
}

/*
==============
Nav_VerifyNavigatorShutdown
==============
*/

void Nav_VerifyNavigatorShutdown(void)
{
  ?Nav_VerifyNavigatorShutdown@@YAXXZ();
}

/*
==============
Nav_ReadNavigator
==============
*/

AINavigator *__fastcall Nav_ReadNavigator(MemoryFile *memFile, AINavigator *pNav)
{
  return ?Nav_ReadNavigator@@YAPEAVAINavigator@@PEAUMemoryFile@@PEAV1@@Z(memFile, pNav);
}

/*
==============
Nav_MoveNavigatorToSpace
==============
*/

void __fastcall Nav_MoveNavigatorToSpace(AINavigator *pNav, nav_space_s *pSpace)
{
  ?Nav_MoveNavigatorToSpace@@YAXPEAVAINavigator@@PEAUnav_space_s@@@Z(pNav, pSpace);
}

/*
==============
AINavigator::IsGoalPosWithin
==============
*/

bool __fastcall AINavigator::IsGoalPosWithin(AINavigator *this, float radius)
{
  return ?IsGoalPosWithin@AINavigator@@UEBA_NM@Z(this, radius);
}

/*
==============
Nav_SetLayer
==============
*/

void __fastcall Nav_SetLayer(AINavigator *pNav, AINavLayer layer)
{
  ?Nav_SetLayer@@YAXPEAVAINavigator@@W4AINavLayer@@@Z(pNav, layer);
}

/*
==============
Nav_WriteNavigator
==============
*/

void __fastcall Nav_WriteNavigator(MemoryFile *memFile, AINavigator *pNav)
{
  ?Nav_WriteNavigator@@YAXPEAUMemoryFile@@PEAVAINavigator@@@Z(memFile, pNav);
}

/*
==============
Nav_CleanupNavigators
==============
*/

void Nav_CleanupNavigators(void)
{
  ?Nav_CleanupNavigators@@YAXXZ();
}

/*
==============
Nav_GetPosAlongPath
==============
*/

bool __fastcall Nav_GetPosAlongPath(const AINavigator *pNav, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pResults)
{
  return ?Nav_GetPosAlongPath@@YA_NPEBVAINavigator@@M_NPEAUnav_posAlongPathResults_t@@@Z(pNav, dist, bStopAtLink, pResults);
}

/*
==============
AINavigator::PathSuppressed
==============
*/

void __fastcall AINavigator::PathSuppressed(AINavigator *this)
{
  ?PathSuppressed@AINavigator@@QEAAXXZ(this);
}

/*
==============
Nav_IsStraightLineToGoal
==============
*/

bool __fastcall Nav_IsStraightLineToGoal(const AINavigator *pNav)
{
  return ?Nav_IsStraightLineToGoal@@YA_NPEBVAINavigator@@@Z(pNav);
}

/*
==============
AINavigator::IsAtGoalPos
==============
*/

bool __fastcall AINavigator::IsAtGoalPos(AINavigator *this)
{
  return ?IsAtGoalPos@AINavigator@@UEBA_NXZ(this);
}

/*
==============
AINavigator::SetLayer
==============
*/

void __fastcall AINavigator::SetLayer(AINavigator *this, AINavLayer layer)
{
  ?SetLayer@AINavigator@@UEAAXW4AINavLayer@@@Z(this, layer);
}

/*
==============
Nav_GetDistToNextCorner
==============
*/

double __fastcall Nav_GetDistToNextCorner(const AINavigator *pNav)
{
  double result; 

  *(float *)&result = ?Nav_GetDistToNextCorner@@YAMPEBVAINavigator@@@Z(pNav);
  return result;
}

/*
==============
AINavigator::GetRequestedGoalPos
==============
*/

void __fastcall AINavigator::GetRequestedGoalPos(AINavigator *this, vec3_t *outRequestedGoalPos)
{
  ?GetRequestedGoalPos@AINavigator@@UEBAXAEATvec3_t@@@Z(this, outRequestedGoalPos);
}

/*
==============
Nav_SetLinkUsageFlags
==============
*/

void __fastcall Nav_SetLinkUsageFlags(AINavigator *pNav, unsigned int flags)
{
  ?Nav_SetLinkUsageFlags@@YAXPEAVAINavigator@@I@Z(pNav, flags);
}

/*
==============
Nav_GetLinkUsageForSpecies
==============
*/

unsigned int __fastcall Nav_GetLinkUsageForSpecies(int species)
{
  return ?Nav_GetLinkUsageForSpecies@@YAIH@Z(species);
}

/*
==============
Nav_SetPos
==============
*/

void __fastcall Nav_SetPos(AINavigator *pNav, const vec3_t *curPos)
{
  ?Nav_SetPos@@YAXPEAVAINavigator@@AEBTvec3_t@@@Z(pNav, curPos);
}

/*
==============
AINavigator::IsGoingDown
==============
*/

bool __fastcall AINavigator::IsGoingDown(AINavigator *this)
{
  return ?IsGoingDown@AINavigator@@QEBA_NXZ(this);
}

/*
==============
Nav_GetLookaheadDir
==============
*/

void __fastcall Nav_GetLookaheadDir(const AINavigator *pNav, vec3_t *outLookaheadDir)
{
  ?Nav_GetLookaheadDir@@YAXPEBVAINavigator@@AEATvec3_t@@@Z(pNav, outLookaheadDir);
}

/*
==============
AINavigator::AINavigator
==============
*/

void __fastcall AINavigator::AINavigator(AINavigator *this)
{
  ??0AINavigator@@QEAA@XZ(this);
}

/*
==============
Nav_IsAtGoal
==============
*/

bool __fastcall Nav_IsAtGoal(const AINavigator *pNav, float radius)
{
  return ?Nav_IsAtGoal@@YA_NPEBVAINavigator@@M@Z(pNav, radius);
}

/*
==============
Nav_SetLinkUsageFlagsForUnitType
==============
*/

void __fastcall Nav_SetLinkUsageFlagsForUnitType(AINavigator *pNav, int unitType)
{
  ?Nav_SetLinkUsageFlagsForUnitType@@YAXPEAVAINavigator@@H@Z(pNav, unitType);
}

/*
==============
AINavigator::ShouldPathOutOfBounds
==============
*/

bool __fastcall AINavigator::ShouldPathOutOfBounds(AINavigator *this)
{
  return ?ShouldPathOutOfBounds@AINavigator@@QEBA_NXZ(this);
}

/*
==============
Nav_GetPosAlongPathWithArea
==============
*/

bool __fastcall Nav_GetPosAlongPathWithArea(const AINavigator *pNav, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pResults)
{
  return ?Nav_GetPosAlongPathWithArea@@YA_NPEBVAINavigator@@M_NPEAUnav_posAlongPathResults_t@@@Z(pNav, dist, bStopAtLink, pResults);
}

/*
==============
AINavigator::GetGoalPos
==============
*/

void __fastcall AINavigator::GetGoalPos(AINavigator *this, vec3_t *outGoalPos)
{
  ?GetGoalPos@AINavigator@@UEBAXAEATvec3_t@@@Z(this, outGoalPos);
}

/*
==============
Nav_GetGoalPos
==============
*/

void __fastcall Nav_GetGoalPos(const AINavigator *pNav, vec3_t *outGoalPos)
{
  ?Nav_GetGoalPos@@YAXPEBVAINavigator@@AEATvec3_t@@@Z(pNav, outGoalPos);
}

/*
==============
Nav_ClearNavigatorsFromSpace
==============
*/

void __fastcall Nav_ClearNavigatorsFromSpace(nav_space_s *pOldSpace, nav_space_s *pNewSpace)
{
  ?Nav_ClearNavigatorsFromSpace@@YAXPEAUnav_space_s@@0@Z(pOldSpace, pNewSpace);
}

/*
==============
Nav_GetPos
==============
*/

void __fastcall Nav_GetPos(const AINavigator *pNav, vec3_t *outCurPos)
{
  ?Nav_GetPos@@YAXPEBVAINavigator@@AEATvec3_t@@@Z(pNav, outCurPos);
}

/*
==============
Nav_SetObstacleBlockageFlags
==============
*/

void __fastcall Nav_SetObstacleBlockageFlags(AINavigator *pNav, unsigned int flags)
{
  ?Nav_SetObstacleBlockageFlags@@YAXPEAVAINavigator@@I@Z(pNav, flags);
}

/*
==============
Nav_InitStaticNavigatorData
==============
*/

void Nav_InitStaticNavigatorData(void)
{
  ?Nav_InitStaticNavigatorData@@YAXXZ();
}

/*
==============
Nav_GetLayerForSpecies
==============
*/

AINavLayer __fastcall Nav_GetLayerForSpecies(int species)
{
  return ?Nav_GetLayerForSpecies@@YA?AW4AINavLayer@@H@Z(species);
}

/*
==============
Nav_ClearGoalPos
==============
*/

void __fastcall Nav_ClearGoalPos(AINavigator *pNav)
{
  ?Nav_ClearGoalPos@@YAXPEAVAINavigator@@@Z(pNav);
}

/*
==============
Nav_SetPenaltyTableValue
==============
*/

void __fastcall Nav_SetPenaltyTableValue(AINavigator *pNav, unsigned int index, int value)
{
  ?Nav_SetPenaltyTableValue@@YAXPEAVAINavigator@@IH@Z(pNav, index, value);
}

/*
==============
Nav_DrawPath
==============
*/

void __fastcall Nav_DrawPath(const AINavigator *pNavigator, int mode)
{
  ?Nav_DrawPath@@YAXPEBVAINavigator@@H@Z(pNavigator, mode);
}

/*
==============
Nav_IsPointNearPath
==============
*/

bool __fastcall Nav_IsPointNearPath(const AINavigator *pNav, const vec3_t *point, float maxDistFromPath, float maxDistDownPath)
{
  return ?Nav_IsPointNearPath@@YA_NPEBVAINavigator@@AEBTvec3_t@@MM@Z(pNav, point, maxDistFromPath, maxDistDownPath);
}

/*
==============
AINavigator::DoPathReeval
==============
*/

bool __fastcall AINavigator::DoPathReeval(AINavigator *this)
{
  return ?DoPathReeval@AINavigator@@UEAA_NXZ(this);
}

/*
==============
Nav_ClearPenaltyTable
==============
*/

void __fastcall Nav_ClearPenaltyTable(AINavigator *pNav)
{
  ?Nav_ClearPenaltyTable@@YAXPEAVAINavigator@@@Z(pNav);
}

/*
==============
AINavigator::LocalizePosToSpace
==============
*/

void __fastcall AINavigator::LocalizePosToSpace(AINavigator *this, const vec3_t *worldPos, vec3_t *outLocalPos)
{
  ?LocalizePosToSpace@AINavigator@@IEBAXAEBTvec3_t@@AEAT2@@Z(this, worldPos, outLocalPos);
}

/*
==============
AINavigator::FindMostLikelySpace
==============
*/

nav_space_s *__fastcall AINavigator::FindMostLikelySpace(AINavigator *this, const vec3_t *pos, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  return ?FindMostLikelySpace@AINavigator@@UEBAPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@PEAU2@@Z(this, pos, layer, pIgnoreSpace);
}

/*
==============
Nav_SetPenaltyTableMode
==============
*/

void __fastcall Nav_SetPenaltyTableMode(AINavigator *pNav, bfx::PenaltyTableMode mode)
{
  ?Nav_SetPenaltyTableMode@@YAXPEAVAINavigator@@W4PenaltyTableMode@bfx@@@Z(pNav, mode);
}

/*
==============
AINavigator::GetUpVector
==============
*/

void __fastcall AINavigator::GetUpVector(AINavigator *this, vec3_t *outUp)
{
  ?GetUpVector@AINavigator@@QEBAXAEATvec3_t@@@Z(this, outUp);
}

/*
==============
Nav_TransferNavigatorsToSpace
==============
*/

void __fastcall Nav_TransferNavigatorsToSpace(nav_space_s *pNewSpace)
{
  ?Nav_TransferNavigatorsToSpace@@YAXPEAUnav_space_s@@@Z(pNewSpace);
}

/*
==============
AINavigator::BadPathNotify
==============
*/

void __fastcall AINavigator::BadPathNotify(AINavigator *this, const vec3_t *goalPos)
{
  ?BadPathNotify@AINavigator@@IEBAXAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
Nav_Teleport
==============
*/

void __fastcall Nav_Teleport(AINavigator *pNav, const vec3_t *newPos)
{
  ?Nav_Teleport@@YAXPEAVAINavigator@@AEBTvec3_t@@@Z(pNav, newPos);
}

/*
==============
Nav_CleanupStaticNavigatorData
==============
*/

void Nav_CleanupStaticNavigatorData(void)
{
  ?Nav_CleanupStaticNavigatorData@@YAXXZ();
}

/*
==============
Nav_ReEvalPathTask_Get
==============
*/

AITask *__fastcall Nav_ReEvalPathTask_Get(int entNum)
{
  return ?Nav_ReEvalPathTask_Get@@YAPEAUAITask@@H@Z(entNum);
}

/*
==============
AINavigator::Free
==============
*/

void __fastcall AINavigator::Free(AINavigator *this)
{
  ?Free@AINavigator@@UEAAXXZ(this);
}

/*
==============
Nav_GetNavigator
==============
*/

AINavigator *__fastcall Nav_GetNavigator(const gentity_s *pEnt)
{
  return ?Nav_GetNavigator@@YAPEAVAINavigator@@PEBUgentity_s@@@Z(pEnt);
}

/*
==============
AINavigator::GetSnappedPathStartPos
==============
*/

void __fastcall AINavigator::GetSnappedPathStartPos(AINavigator *this, vec3_t *outStartPos)
{
  ?GetSnappedPathStartPos@AINavigator@@UEBAXAEATvec3_t@@@Z(this, outStartPos);
}

/*
==============
Nav_SetGoalPos
==============
*/

bool __fastcall Nav_SetGoalPos(AINavigator *pNav, const vec3_t *goalPos, float minDistFromCurGoal)
{
  return ?Nav_SetGoalPos@@YA_NPEAVAINavigator@@AEBTvec3_t@@M@Z(pNav, goalPos, minDistFromCurGoal);
}

/*
==============
Nav_PreUpdateNavigators
==============
*/

void Nav_PreUpdateNavigators(void)
{
  ?Nav_PreUpdateNavigators@@YAXXZ();
}

/*
==============
Nav_GetLayerForUnitType
==============
*/

AINavLayer __fastcall Nav_GetLayerForUnitType(int unitType)
{
  return ?Nav_GetLayerForUnitType@@YA?AW4AINavLayer@@H@Z(unitType);
}

/*
==============
AINavigator::ClearGoal
==============
*/

void __fastcall AINavigator::ClearGoal(AINavigator *this)
{
  ?ClearGoal@AINavigator@@UEAAXXZ(this);
}

/*
==============
Nav_GetPathDistToGoal
==============
*/

double __fastcall Nav_GetPathDistToGoal(const AINavigator *pNav)
{
  double result; 

  *(float *)&result = ?Nav_GetPathDistToGoal@@YAMPEBVAINavigator@@@Z(pNav);
  return result;
}

/*
==============
Nav_ClearCachedData
==============
*/

void __fastcall Nav_ClearCachedData(const nav_space_s *pSpace)
{
  ?Nav_ClearCachedData@@YAXPEBUnav_space_s@@@Z(pSpace);
}

/*
==============
AINavigator::WorldChanged
==============
*/

void __fastcall AINavigator::WorldChanged(AINavigator *this)
{
  ?WorldChanged@AINavigator@@UEAAXXZ(this);
}

/*
==============
AINavigator::GetCurPos
==============
*/

void __fastcall AINavigator::GetCurPos(AINavigator *this, vec3_t *outCurPos)
{
  ?GetCurPos@AINavigator@@UEBAXAEATvec3_t@@@Z(this, outCurPos);
}

/*
==============
AINavigator::ClearPath
==============
*/

void __fastcall AINavigator::ClearPath(AINavigator *this)
{
  ?ClearPath@AINavigator@@UEAAXXZ(this);
}

/*
==============
AINavigator::UpdatePathOutOfBounds
==============
*/

void __fastcall AINavigator::UpdatePathOutOfBounds(AINavigator *this)
{
  ?UpdatePathOutOfBounds@AINavigator@@UEAAXXZ(this);
}

/*
==============
AINavigator::WorldifyPosFromSpace
==============
*/

void __fastcall AINavigator::WorldifyPosFromSpace(AINavigator *this, const vec3_t *localPos, vec3_t *outWorldPos)
{
  ?WorldifyPosFromSpace@AINavigator@@IEBAXAEBTvec3_t@@AEAT2@@Z(this, localPos, outWorldPos);
}

/*
==============
Nav_CalculateNextNCorners
==============
*/

int __fastcall Nav_CalculateNextNCorners(const AINavigator *pNav, int maxCorners, nav_cornerdata_t *corners, float pathDistThreshold)
{
  return ?Nav_CalculateNextNCorners@@YAHPEBVAINavigator@@HPEAUnav_cornerdata_t@@M@Z(pNav, maxCorners, corners, pathDistThreshold);
}

/*
==============
AINavigator::Teleport
==============
*/

void __fastcall AINavigator::Teleport(AINavigator *this, const vec3_t *curPos)
{
  ?Teleport@AINavigator@@UEAAXAEBTvec3_t@@@Z(this, curPos);
}

/*
==============
Nav_FreeNavigator
==============
*/

void __fastcall Nav_FreeNavigator(AINavigator *pNav)
{
  ?Nav_FreeNavigator@@YAXPEAVAINavigator@@@Z(pNav);
}

/*
==============
AINavigator::SetSpace
==============
*/

void __fastcall AINavigator::SetSpace(AINavigator *this, nav_space_s *pSpace)
{
  ?SetSpace@AINavigator@@UEAAXPEAUnav_space_s@@@Z(this, pSpace);
}

/*
==============
AINavigator::AINavigator
==============
*/

void __fastcall AINavigator::AINavigator(AINavigator *this, gentity_s *pEnt, AINavLayer layer)
{
  ??0AINavigator@@QEAA@PEAUgentity_s@@W4AINavLayer@@@Z(this, pEnt, layer);
}

/*
==============
Nav_HasPath
==============
*/

bool __fastcall Nav_HasPath(const AINavigator *pNav)
{
  return ?Nav_HasPath@@YA_NPEBVAINavigator@@@Z(pNav);
}

/*
==============
Nav_ReEvalPathTask_Update
==============
*/

bool __fastcall Nav_ReEvalPathTask_Update(AITask *pTask)
{
  return ?Nav_ReEvalPathTask_Update@@YA_NPEAUAITask@@@Z(pTask);
}

/*
==============
Nav_GetRequestedGoalPos
==============
*/

void __fastcall Nav_GetRequestedGoalPos(const AINavigator *pNav, vec3_t *outRequestedGoalPos)
{
  ?Nav_GetRequestedGoalPos@@YAXPEBVAINavigator@@AEATvec3_t@@@Z(pNav, outRequestedGoalPos);
}

/*
==============
AINavigator::AINavigator
==============
*/
void AINavigator::AINavigator(AINavigator *this, gentity_s *pEnt, AINavLayer layer)
{
  nav_space_s *MostLikelySpaceWithRadius; 

  _RSI = this;
  this->__vftable = (AINavigator_vtbl *)&AINavigator::`vftable';
  this->m_pEnt = pEnt;
  this->m_CurSegment = 0;
  this->m_Layer = layer;
  *(_QWORD *)&this->m_TimeOfLastPathUpdate = 0i64;
  this->m_TimeOfLastPathSuppressed = 0;
  this->m_DistFromGoalToPathToRequestedGoal = 36.0;
  *(_QWORD *)&this->m_MaxDeviationFromPath = 1086324736i64;
  bfx::LinkHandle::LinkHandle(&this->m_hLink);
  _RSI->m_TimeOfLastBlockage = 0;
  _RSI->m_bBlocked = 0;
  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 84, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt", -2i64, this) )
    __debugbreak();
  _RAX = _RSI->m_pEnt;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+100h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm3, xmm0, dword ptr [rax+10Ch]
    vmovss  xmm1, dword ptr [rax+104h]
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm0, xmm1, dword ptr [rax+110h]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm1, xmm2, xmm2; radius
  }
  MostLikelySpaceWithRadius = Nav_FindMostLikelySpaceWithRadius(&pEnt->r.currentOrigin, *(float *)&_XMM1, layer, NULL);
  _RSI->m_pSpace = MostLikelySpaceWithRadius;
  if ( !MostLikelySpaceWithRadius )
    _RSI->m_pSpace = Nav_GetDefaultSpace();
  AINavigator::LocalizePosToSpace(_RSI, &pEnt->r.currentOrigin, &_RSI->m_LocalCurSnappedPos);
  AINavigator::WorldifyPosFromSpace(_RSI, &_RSI->m_LocalCurSnappedPos, &_RSI->m_CurSnappedPos);
  _RSI->m_LocalRequestedGoalPos.v[0] = _RSI->m_LocalCurSnappedPos.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+58h]
    vmovss  dword ptr [rsi+40h], xmm0
    vmovss  xmm1, dword ptr [rsi+5Ch]
    vmovss  dword ptr [rsi+44h], xmm1
  }
  _RSI->m_LocalSnappedGoalPos.v[0] = _RSI->m_LocalCurSnappedPos.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+58h]
    vmovss  dword ptr [rsi+4Ch], xmm0
    vmovss  xmm1, dword ptr [rsi+5Ch]
    vmovss  dword ptr [rsi+50h], xmm1
  }
  _RSI->m_RequestedGoalPos.v[0] = _RSI->m_CurSnappedPos.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+34h]
    vmovss  dword ptr [rsi+1Ch], xmm0
    vmovss  xmm1, dword ptr [rsi+38h]
    vmovss  dword ptr [rsi+20h], xmm1
  }
  _RSI->m_SnappedGoalPos.v[0] = _RSI->m_CurSnappedPos.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+34h]
    vmovss  dword ptr [rsi+28h], xmm0
    vmovss  xmm1, dword ptr [rsi+38h]
    vmovss  dword ptr [rsi+2Ch], xmm1
  }
  _RSI->m_ReevalPathTask.entNum = _RSI->m_pEnt->s.number;
  _RSI->m_ReevalPathTask.status[0] = 0;
}

/*
==============
AINavigator::AINavigator
==============
*/
void AINavigator::AINavigator(AINavigator *this)
{
  this->__vftable = (AINavigator_vtbl *)&AINavigator::`vftable';
  bfx::LinkHandle::LinkHandle(&this->m_hLink);
  this->m_bInUse = 0;
}

/*
==============
AINavigator::BadPathNotify
==============
*/
void AINavigator::BadPathNotify(AINavigator *this, const vec3_t *goalPos)
{
  int time; 
  const char *v5; 
  const char *v6; 
  scrContext_t *v7; 
  int v8; 

  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 278, ASSERT_TYPE_ASSERT, "( m_pEnt )", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  time = level.time;
  v5 = vtos(goalPos);
  v6 = vtos(&this->m_pEnt->r.currentOrigin);
  v8 = time;
  Com_Printf(18, "%sAI (entity %d, origin %s) couldn't find path to goal %s. Time: %d\n", "^1", (unsigned int)this->m_pEnt->s.number, v6, v5, v8);
  v7 = ScriptContext_Server();
  Scr_AddVector(v7, goalPos->v);
  GScr_Notify(this->m_pEnt, scr_const.bad_path, 1u);
}

/*
==============
AINavigator::ClearGoal
==============
*/
void AINavigator::ClearGoal(AINavigator *this)
{
  this->ClearPath(this);
  this->m_LocalSnappedGoalPos = this->m_LocalCurSnappedPos;
  this->m_LocalRequestedGoalPos = this->m_LocalCurSnappedPos;
  this->m_SnappedGoalPos = this->m_CurSnappedPos;
  this->m_RequestedGoalPos = this->m_CurSnappedPos;
}

/*
==============
AINavigator::ClearPath
==============
*/
void AINavigator::ClearPath(AINavigator *this)
{
  AITask_ReevalPath *p_m_ReevalPathTask; 

  p_m_ReevalPathTask = &this->m_ReevalPathTask;
  if ( p_m_ReevalPathTask->status[0] == 1 )
    AIScheduler::RemoveReevalPathTask(p_m_ReevalPathTask);
  bfx::LinkHandle::Release(&this->m_hLink);
  *(_WORD *)&this->m_bMultiGoalPath = 0;
  this->m_bPathingOutOfBounds = 0;
}

/*
==============
AINavigator::DoPathReeval
==============
*/
__int64 AINavigator::DoPathReeval(AINavigator *this)
{
  return ((__int64 (__fastcall *)(AINavigator *))this->DoPathFind)(this);
}

/*
==============
AINavigator::FindMostLikelySpace
==============
*/
nav_space_s *AINavigator::FindMostLikelySpace(AINavigator *this, const vec3_t *pos, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  _RAX = this->m_pEnt;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+100h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm3, xmm0, dword ptr [rax+10Ch]
    vmovss  xmm0, dword ptr [rax+104h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm0, xmm0, dword ptr [rax+110h]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm1, xmm2, xmm2; radius
  }
  return Nav_FindMostLikelySpaceWithRadius(pos, *(float *)&_XMM1, layer, pIgnoreSpace);
}

/*
==============
AINavigator::Free
==============
*/
void AINavigator::Free(AINavigator *this)
{
  AITask_ReevalPath *p_m_ReevalPathTask; 

  p_m_ReevalPathTask = &this->m_ReevalPathTask;
  if ( p_m_ReevalPathTask->status[0] == 1 )
    AIScheduler::RemoveReevalPathTask(p_m_ReevalPathTask);
  bfx::LinkHandle::Release(&this->m_hLink);
  this->m_pSpace = NULL;
  this->m_pEnt = NULL;
  this->m_bInUse = 0;
}

/*
==============
AINavigator::GetCurPos
==============
*/
void AINavigator::GetCurPos(AINavigator *this, vec3_t *outCurPos)
{
  *outCurPos = this->m_CurSnappedPos;
}

/*
==============
AINavigator::GetGoalPos
==============
*/
void AINavigator::GetGoalPos(AINavigator *this, vec3_t *outGoalPos)
{
  *outGoalPos = this->m_SnappedGoalPos;
}

/*
==============
AINavigator::GetRequestedGoalPos
==============
*/
void AINavigator::GetRequestedGoalPos(AINavigator *this, vec3_t *outRequestedGoalPos)
{
  *outRequestedGoalPos = this->m_RequestedGoalPos;
}

/*
==============
AINavigator::GetSnappedPathStartPos
==============
*/
void AINavigator::GetSnappedPathStartPos(AINavigator *this, vec3_t *outStartPos)
{
  if ( !this->m_bPathRequested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 185, ASSERT_TYPE_ASSERT, "( m_bPathRequested )", (const char *)&queryFormat, "m_bPathRequested") )
    __debugbreak();
  AINavigator::WorldifyPosFromSpace(this, &this->m_LocalSnappedPathStartPos, outStartPos);
}

/*
==============
AINavigator::GetUpVector
==============
*/
void AINavigator::GetUpVector(AINavigator *this, vec3_t *outUp)
{
  nav_space_s *m_pSpace; 

  m_pSpace = this->m_pSpace;
  if ( m_pSpace )
  {
    Nav_GetSpaceUp(m_pSpace, outUp);
  }
  else
  {
    outUp->v[2] = 1.0;
    *(_QWORD *)outUp->v = 0i64;
  }
}

/*
==============
AINavigator::IsAtGoalPos
==============
*/
bool AINavigator::IsAtGoalPos(AINavigator *this)
{
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  return VecNCompareCustomEpsilon(this->m_LocalCurSnappedPos.v, this->m_LocalSnappedGoalPos.v, *(float *)&_XMM2, 3);
}

/*
==============
AINavigator::IsGoalPosWithin
==============
*/

char __fastcall AINavigator::IsGoalPosWithin(AINavigator *this, double radius)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = this;
  __asm
  {
    vmovaps xmm6, xmm1
    vmovss  xmm0, dword ptr [rbx+48h]
    vsubss  xmm3, xmm0, dword ptr [rbx+54h]
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vsubss  xmm2, xmm1, dword ptr [rbx+58h]
    vmovss  xmm0, dword ptr [rbx+50h]
    vsubss  xmm4, xmm0, dword ptr [rbx+5Ch]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm1, xmm4
  }
  return 1;
}

/*
==============
AINavigator::IsGoingDown
==============
*/
bool AINavigator::IsGoingDown(AINavigator *this)
{
  bool result; 
  char v5; 
  char v6[8]; 
  char v8[8]; 

  result = this->HasPath(this);
  if ( result )
  {
    this->GetCurPos(this, (vec3_t *)v8);
    this->GetNextCorner(this, (vec3_t *)v6);
    __asm
    {
      vmovss  xmm0, [rsp+58h+var_30]
      vsubss  xmm1, xmm0, [rsp+58h+var_20]
      vcomiss xmm1, cs:__real@3a83126f
    }
    return v5;
  }
  return result;
}

/*
==============
AINavigator::LocalizePosToSpace
==============
*/
void AINavigator::LocalizePosToSpace(AINavigator *this, const vec3_t *worldPos, vec3_t *outLocalPos)
{
  nav_space_s *m_pSpace; 
  vec4_t worldRot; 
  vec4_t outLocalRot; 

  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 148, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  __asm { vmovups xmm0, cs:__xmm@3f800000000000000000000000000000 }
  m_pSpace = this->m_pSpace;
  __asm { vmovups xmmword ptr [rsp+78h+worldRot], xmm0 }
  Nav_SpaceConvertWorldToLocal(m_pSpace, worldPos, &worldRot, outLocalPos, &outLocalRot);
}

/*
==============
Nav_CalculateNextNCorners
==============
*/

__int64 __fastcall Nav_CalculateNextNCorners(const AINavigator *pNav, int maxCorners, nav_cornerdata_t *corners, double pathDistThreshold)
{
  __int64 result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 633, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  __asm { vmovaps xmm3, xmm6 }
  result = ((__int64 (__fastcall *)(const AINavigator *, nav_cornerdata_t *, _QWORD))pNav->GetNextNCorners)(pNav, corners, (unsigned int)maxCorners);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
Nav_CleanupNavigators
==============
*/
void Nav_CleanupNavigators(void)
{
  AINavigator2D::CleanupAll();
  AINavigator3D::CleanupAll();
}

/*
==============
Nav_CleanupStaticNavigatorData
==============
*/

void Nav_CleanupStaticNavigatorData(void)
{
  Nav_CleanupStaticNavigatorData3D();
}

/*
==============
Nav_ClearCachedData
==============
*/

void __fastcall Nav_ClearCachedData(const nav_space_s *pSpace)
{
  AINavigator2D::ClearCachedData(pSpace);
}

/*
==============
Nav_ClearGoalPos
==============
*/
void Nav_ClearGoalPos(AINavigator *pNav)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 529, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->ClearGoal(pNav);
}

/*
==============
Nav_ClearNavigatorsFromSpace
==============
*/
void Nav_ClearNavigatorsFromSpace(nav_space_s *pOldSpace, nav_space_s *pNewSpace)
{
  if ( !pOldSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 461, ASSERT_TYPE_ASSERT, "( pOldSpace )", (const char *)&queryFormat, "pOldSpace") )
    __debugbreak();
  AINavigator2D::ClearNavigatorsFromSpace(pOldSpace, pNewSpace);
  AINavigator3D::ClearNavigatorsFromSpace(pOldSpace, pNewSpace);
}

/*
==============
Nav_ClearPenaltyTable
==============
*/
void Nav_ClearPenaltyTable(AINavigator *pNav)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 416, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->ClearPenaltyTable(pNav);
}

/*
==============
Nav_DrawPath
==============
*/
void Nav_DrawPath(const AINavigator *pNavigator, int mode)
{
  if ( !pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 809, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  pNavigator->DrawPath((AINavigator *)pNavigator, mode);
}

/*
==============
Nav_FreeNavigator
==============
*/
void Nav_FreeNavigator(AINavigator *pNav)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 310, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  bfx::LinkHandle::Release(&pNav->m_hLink);
  pNav->Free(pNav);
}

/*
==============
Nav_GetDistToNextCorner
==============
*/
float Nav_GetDistToNextCorner(const AINavigator *pNav)
{
  int v15[4]; 
  int v16; 

  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 582, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetNextCorner((AINavigator *)pNav, (vec3_t *)&v16);
  pNav->GetCurPos((AINavigator *)pNav, (vec3_t *)v15);
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_38]
    vsubss  xmm3, xmm0, [rsp+68h+var_28]
    vmovss  xmm1, [rsp+68h+var_34]
    vsubss  xmm2, xmm1, [rsp+68h+var_24]
    vmovss  xmm0, [rsp+68h+var_30]
    vsubss  xmm4, xmm0, [rsp+68h+var_20]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm0, xmm2, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
Nav_GetGoalPos
==============
*/
void Nav_GetGoalPos(const AINavigator *pNav, vec3_t *outGoalPos)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 515, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetGoalPos((AINavigator *)pNav, outGoalPos);
}

/*
==============
Nav_GetLayer
==============
*/
__int64 Nav_GetLayer(const AINavigator *pNav)
{
  if ( pNav )
    return (unsigned int)pNav->m_Layer;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 319, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  return MEMORY[0x70];
}

/*
==============
Nav_GetLayerForSpecies
==============
*/
__int64 Nav_GetLayerForSpecies(int species)
{
  return 0i64;
}

/*
==============
Nav_GetLayerForUnitType
==============
*/
__int64 Nav_GetLayerForUnitType(int unitType)
{
  return 0i64;
}

/*
==============
Nav_GetLinkUsageFlags
==============
*/
__int64 Nav_GetLinkUsageFlags(AINavigator *pNav)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 385, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  return ((__int64 (__fastcall *)(AINavigator *))pNav->GetLinkUsageFlags)(pNav);
}

/*
==============
Nav_GetLinkUsageForSpecies
==============
*/
__int64 Nav_GetLinkUsageForSpecies(int species)
{
  return 1i64;
}

/*
==============
Nav_GetLookaheadDir
==============
*/
void Nav_GetLookaheadDir(const AINavigator *pNav, vec3_t *outLookaheadDir)
{
  bool v6; 
  AINavigator_vtbl *v7; 
  __int64 v8; 
  __int64 v9; 
  AINavigator_vtbl *v10; 
  int fmt; 
  int v36; 
  int v39; 
  int v40[5]; 
  bfx::AreaHandle v41; 
  bfx::LinkHandle v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = outLookaheadDir;
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 550, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&v41);
  bfx::LinkHandle::LinkHandle(&v42);
  if ( pNav->HasPath((AINavigator *)pNav) )
  {
    v6 = !pNav->IsNextCornerGoal((AINavigator *)pNav);
    v7 = pNav->__vftable;
    if ( v6 )
    {
      v6 = !v7->HasPath((AINavigator *)pNav);
      v10 = pNav->__vftable;
      if ( v6 )
      {
        v10->GetNextCorner((AINavigator *)pNav, (vec3_t *)&v36);
      }
      else
      {
        LOBYTE(fmt) = 0;
        LOBYTE(v9) = 1;
        __asm { vmovss  xmm1, cs:__real@41c00000 }
        ((void (__fastcall *)(const AINavigator *, __int64, __int64, int *, int))v10->GetPosAlongPath)(pNav, v8, v9, v40, fmt);
        __asm
        {
          vmovss  xmm0, [rsp+0C8h+var_68]
          vmovss  [rsp+0C8h+var_88], xmm0
          vmovss  xmm1, [rsp+0C8h+var_64]
          vmovss  [rsp+0C8h+var_84], xmm1
          vmovss  xmm0, [rsp+0C8h+var_60]
          vmovss  [rsp+0C8h+var_80], xmm0
        }
      }
    }
    else
    {
      v7->GetRequestedGoalPos((AINavigator *)pNav, (vec3_t *)&v36);
    }
    pNav->GetCurPos((AINavigator *)pNav, (vec3_t *)&v39);
    __asm
    {
      vmovss  xmm0, [rsp+0C8h+var_88]
      vsubss  xmm6, xmm0, [rsp+0C8h+var_78]
      vmovss  xmm1, [rsp+0C8h+var_84]
      vsubss  xmm4, xmm1, [rsp+0C8h+var_74]
      vmovss  xmm0, [rsp+0C8h+var_80]
      vsubss  xmm5, xmm0, [rsp+0C8h+var_70]
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm3, xmm2, xmm0
      vdivss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rdi], xmm0
      vmulss  xmm1, xmm4, xmm2
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  else
  {
    *(_QWORD *)_RDI->v = 0i64;
    _RDI->v[2] = 0.0;
  }
  bfx::LinkHandle::~LinkHandle(&v42);
  bfx::AreaHandle::~AreaHandle(&v41);
  __asm { vmovaps xmm6, [rsp+0C8h+var_18] }
}

/*
==============
Nav_GetNavigator
==============
*/
AINavigator *Nav_GetNavigator(const gentity_s *pEnt)
{
  actor_s *actor; 
  ai_agent_t *ScriptedAgentInfo; 

  actor = pEnt->actor;
  if ( actor )
    return actor->pNavigator;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    return 0i64;
  if ( !pEnt->agent || !SV_Agent_IsScripted(pEnt->s.number) )
    return SV_Bot_GetNavigator(pEnt);
  ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(pEnt);
  if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 51, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  return ScriptedAgentInfo->pNavigator;
}

/*
==============
Nav_GetPathDistToGoal
==============
*/
void Nav_GetPathDistToGoal(const AINavigator *pNav)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 602, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetPathDistToGoal((AINavigator *)pNav);
}

/*
==============
Nav_GetPos
==============
*/
void Nav_GetPos(const AINavigator *pNav, vec3_t *outCurPos)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 440, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetCurPos((AINavigator *)pNav, outCurPos);
}

/*
==============
Nav_GetPosAlongPath
==============
*/

bool __fastcall Nav_GetPosAlongPath(const AINavigator *pNav, double dist, bool bStopAtLink, nav_posAlongPathResults_t *pResults)
{
  bool result; 
  __int64 v10; 
  int fmt; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 610, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( !pResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 611, ASSERT_TYPE_ASSERT, "( pResults )", (const char *)&queryFormat, "pResults") )
    __debugbreak();
  result = pNav->HasPath((AINavigator *)pNav);
  if ( result )
  {
    LOBYTE(fmt) = 0;
    __asm { vmovaps xmm1, xmm6 }
    ((void (__fastcall *)(const AINavigator *, __int64, bool, nav_posAlongPathResults_t *, int))pNav->GetPosAlongPath)(pNav, v10, bStopAtLink, pResults, fmt);
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
Nav_GetPosAlongPathWithArea
==============
*/

bool __fastcall Nav_GetPosAlongPathWithArea(const AINavigator *pNav, double dist, bool bStopAtLink, nav_posAlongPathResults_t *pResults)
{
  bool result; 
  __int64 v10; 
  int fmt; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 621, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( !pResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 622, ASSERT_TYPE_ASSERT, "( pResults )", (const char *)&queryFormat, "pResults") )
    __debugbreak();
  result = pNav->HasPath((AINavigator *)pNav);
  if ( result )
  {
    LOBYTE(fmt) = 1;
    __asm { vmovaps xmm1, xmm6 }
    ((void (__fastcall *)(const AINavigator *, __int64, bool, nav_posAlongPathResults_t *, int))pNav->GetPosAlongPath)(pNav, v10, bStopAtLink, pResults, fmt);
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
Nav_GetRequestedGoalPos
==============
*/
void Nav_GetRequestedGoalPos(const AINavigator *pNav, vec3_t *outRequestedGoalPos)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 522, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetRequestedGoalPos((AINavigator *)pNav, outRequestedGoalPos);
}

/*
==============
Nav_HasPath
==============
*/
__int64 Nav_HasPath(const AINavigator *pNav)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 543, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  return ((__int64 (__fastcall *)(const AINavigator *))pNav->HasPath)(pNav);
}

/*
==============
Nav_InitStaticNavigatorData
==============
*/

void Nav_InitStaticNavigatorData(void)
{
  Nav_InitStaticNavigatorData2D();
}

/*
==============
Nav_IsAtGoal
==============
*/

__int64 __fastcall Nav_IsAtGoal(const AINavigator *pNav, double radius)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 536, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  __asm
  {
    vmovaps xmm1, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return ((__int64 (__fastcall *)(const AINavigator *))pNav->IsGoalPosWithin)(pNav);
}

/*
==============
Nav_IsPointNearPath
==============
*/

__int64 __fastcall Nav_IsPointNearPath(const AINavigator *pNav, const vec3_t *point, double maxDistFromPath, double maxDistDownPath)
{
  int v20; 
  bool v39; 
  bool v40; 
  unsigned __int64 v41; 
  unsigned __int8 v96; 
  __int64 result; 
  int v109; 
  int ptr[2]; 
  int v113; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  _RSI = point;
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 640, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  `eh vector constructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 633, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  __asm { vmovaps xmm3, xmm6 }
  v20 = ((__int64 (__fastcall *)(const AINavigator *, int *, __int64))pNav->GetNextNCorners)(pNav, ptr, 10i64);
  if ( !v20 )
  {
    pNav->GetNextCorner((AINavigator *)pNav, (vec3_t *)ptr);
    v20 = 1;
  }
  pNav->GetCurPos((AINavigator *)pNav, (vec3_t *)&v109);
  __asm { vmovss  xmm15, [rsp+2A8h+var_260] }
  if ( v20 == 1 )
  {
    __asm
    {
      vmovss  xmm0, [rsp+2A8h+ptr]
      vmovss  xmm6, [rsp+2A8h+var_268]
      vsubss  xmm3, xmm0, xmm6
      vmovss  xmm1, [rsp+2A8h+var_254]
      vmovss  xmm5, [rsp+2A8h+var_264]
      vsubss  xmm2, xmm1, xmm5
      vmovss  xmm0, [rsp+2A8h+var_250]
      vsubss  xmm4, xmm0, xmm15
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vmovss  xmm14, cs:__real@3f800000
      vcomiss xmm2, xmm14
    }
  }
  else
  {
    if ( v20 <= 0 )
    {
LABEL_22:
      v96 = 0;
      goto LABEL_23;
    }
    __asm
    {
      vmovss  xmm5, [rsp+2A8h+var_264]
      vmovss  xmm6, [rsp+2A8h+var_268]
      vmovss  xmm14, cs:__real@3f800000
    }
  }
  __asm
  {
    vmovss  xmm8, dword ptr [rsi]
    vmovss  xmm9, dword ptr [rsi+4]
    vmovss  xmm10, dword ptr [rsi+8]
  }
  v39 = 0;
  v40 = 1;
  v41 = 0i64;
  _RCX = &v113;
  while ( 1 )
  {
    __asm
    {
      vmovaps xmm11, xmm6
      vmovaps xmm12, xmm5
      vmovaps xmm13, xmm15
      vmovss  xmm1, dword ptr [rcx-8]
      vmovss  [rsp+2A8h+var_268], xmm1
      vmovss  xmm0, dword ptr [rcx-4]
      vmovss  [rsp+2A8h+var_264], xmm0
      vmovss  xmm15, dword ptr [rcx]
      vmovss  [rsp+2A8h+var_260], xmm15
      vsubss  xmm4, xmm1, xmm6
      vsubss  xmm5, xmm0, xmm5
      vsubss  xmm6, xmm15, xmm13
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm14, xmm0
      vdivss  xmm0, xmm14, xmm1
      vmulss  xmm4, xmm0, xmm4
      vmulss  xmm14, xmm0, xmm5
      vmulss  xmm6, xmm0, xmm6
      vsubss  xmm2, xmm8, [rsp+2A8h+var_268]
      vmovss  xmm5, [rsp+2A8h+var_264]
      vsubss  xmm0, xmm9, xmm5
      vsubss  xmm3, xmm10, xmm15
      vmulss  xmm1, xmm14, xmm0
      vmulss  xmm0, xmm4, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm7
    }
    if ( !v40 )
      goto LABEL_19;
    __asm
    {
      vsubss  xmm2, xmm8, xmm11
      vsubss  xmm0, xmm9, xmm12
      vsubss  xmm3, xmm10, xmm13
      vmulss  xmm1, xmm14, xmm0
      vmulss  xmm0, xmm4, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm3
      vaddss  xmm5, xmm2, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm5, xmm0
    }
    if ( !v39 )
      goto LABEL_26;
    __asm
    {
      vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000
      vcomiss xmm5, xmm0
    }
    if ( !v39 )
    {
LABEL_26:
      __asm
      {
        vmulss  xmm0, xmm4, xmm5
        vaddss  xmm4, xmm0, xmm11
        vmulss  xmm1, xmm14, xmm5
        vaddss  xmm3, xmm1, xmm12
        vmulss  xmm0, xmm6, xmm5
        vaddss  xmm2, xmm0, xmm13
        vsubss  xmm4, xmm8, xmm4
        vsubss  xmm1, xmm9, xmm3
        vsubss  xmm5, xmm10, xmm2
        vmulss  xmm2, xmm1, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm0, xmm7, xmm7
        vcomiss xmm4, xmm0
      }
      if ( v39 )
        break;
    }
    __asm { vmovss  xmm5, [rsp+2A8h+var_264] }
LABEL_19:
    ++v41;
    _RCX += 10;
    v39 = v41 < v20;
    v40 = v41 <= v20;
    if ( (__int64)v41 >= v20 )
      goto LABEL_22;
    __asm
    {
      vmovss  xmm6, [rsp+2A8h+var_268]
      vmovss  xmm14, cs:__real@3f800000
    }
  }
  v96 = 1;
LABEL_23:
  `eh vector destructor iterator'(ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  result = v96;
  _R11 = &v114;
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
  return result;
}

/*
==============
Nav_IsStraightLineToGoal
==============
*/
__int64 Nav_IsStraightLineToGoal(const AINavigator *pNav)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 595, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  return ((__int64 (__fastcall *)(const AINavigator *))pNav->IsStraightLineToGoal)(pNav);
}

/*
==============
Nav_MoveNavigatorToSpace
==============
*/
void Nav_MoveNavigatorToSpace(AINavigator *pNav, nav_space_s *pSpace)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 454, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->SetSpace(pNav, pSpace);
}

/*
==============
Nav_PreUpdateNavigators
==============
*/

void Nav_PreUpdateNavigators(void)
{
  AINavigator2D::PreUpdateAll();
}

/*
==============
Nav_ReEvalPathTask_Get
==============
*/
ai_common_t *Nav_ReEvalPathTask_Get(int entNum)
{
  __int64 v1; 
  ai_common_t *result; 
  AITask *v3; 

  v1 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v1].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 715, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  result = AI_GetAICommon(&g_entities[v1]);
  v3 = (AITask *)result;
  if ( result )
  {
    if ( !result->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 720, ASSERT_TYPE_ASSERT, "( pAI->pNavigator )", (const char *)&queryFormat, "pAI->pNavigator") )
      __debugbreak();
    return (ai_common_t *)(*(_QWORD *)&v3[12].timestamp + 128i64);
  }
  return result;
}

/*
==============
Nav_ReEvalPathTask_Update
==============
*/
char Nav_ReEvalPathTask_Update(AITask *pTask)
{
  __int64 entNum; 
  __int64 v4; 
  gentity_s *v5; 
  ai_common_t *AICommon; 
  ai_common_t *v7; 
  char v8; 
  char v9; 
  AIScriptedInterface *v11; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  __int64 v15; 
  AIActorInterface v16; 
  AIAgentInterface v17; 
  AIScriptedInterface *v18; 
  vec3_t outLookaheadDir; 

  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 729, ASSERT_TYPE_ASSERT, "( pTask )", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  entNum = pTask->entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v15) = pTask->entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 730, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pTask->entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pTask->entNum )") )
    __debugbreak();
  v4 = pTask->entNum;
  v5 = &g_entities[v4];
  if ( v5->health <= 0 )
    return 0;
  AICommon = AI_GetAICommon(&g_entities[v4]);
  v7 = AICommon;
  if ( !AICommon )
    return 0;
  if ( !AICommon->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 740, ASSERT_TYPE_ASSERT, "( pAI->pNavigator )", (const char *)&queryFormat, "pAI->pNavigator") )
    __debugbreak();
  *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator *))v7->pNavigator->HasPath)(v7->pNavigator);
  v9 = v8;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+0B8h+outLookaheadDir], xmm0
    vmovss  dword ptr [rsp+0B8h+outLookaheadDir+4], xmm0
    vmovss  dword ptr [rsp+0B8h+outLookaheadDir+8], xmm0
  }
  if ( v8 )
    Nav_GetLookaheadDir(v7->pNavigator, &outLookaheadDir);
  v7->pNavigator->DoPathReeval(v7->pNavigator);
  if ( !v9 || !v7->pNavigator->HasPath(v7->pNavigator) )
    return 1;
  AIActorInterface::AIActorInterface(&v16);
  AIAgentInterface::AIAgentInterface(&v17);
  v11 = NULL;
  v17.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v18 = NULL;
  if ( v5->agent )
  {
    if ( SV_Agent_IsScripted(v5->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v5);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v17, ScriptedAgentInfo);
      v18 = &v17;
      AIScriptedInterface::PathChangeNotify(&v17, &outLookaheadDir);
      return 1;
    }
    v11 = v18;
  }
  actor = v5->actor;
  if ( !actor )
  {
    if ( v11 )
      AIScriptedInterface::PathChangeNotify(v11, &outLookaheadDir);
    return 1;
  }
  if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
    __debugbreak();
  AIActorInterface::SetActor(&v16, v5->actor);
  v18 = &v16;
  AIScriptedInterface::PathChangeNotify(&v16, &outLookaheadDir);
  return 1;
}

/*
==============
Nav_ReadNavigator
==============
*/
AINavigator2D *Nav_ReadNavigator(MemoryFile *memFile, AINavigator *pNav)
{
  char p; 
  int index; 

  if ( pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 834, ASSERT_TYPE_ASSERT, "( !pNav )", (const char *)&queryFormat, "!pNav") )
    __debugbreak();
  MemFile_ReadData(memFile, 1ui64, &p);
  if ( !p )
    return 0i64;
  MemFile_ReadData(memFile, 1ui64, &p);
  MemFile_ReadData(memFile, 4ui64, &index);
  if ( p )
    return (AINavigator2D *)AINavigator3D::ReadNavigator(memFile, index);
  else
    return AINavigator2D::ReadNavigator(memFile, index);
}

/*
==============
Nav_SetGoalPos
==============
*/
__int64 Nav_SetGoalPos(AINavigator *pNav, const vec3_t *goalPos, float minDistFromCurGoal)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 508, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  return ((__int64 (__fastcall *)(AINavigator *, const vec3_t *))pNav->SetGoalPos)(pNav, goalPos);
}

/*
==============
Nav_SetLayer
==============
*/
void Nav_SetLayer(AINavigator *pNav, AINavLayer layer)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 334, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->SetLayer(pNav, layer);
}

/*
==============
Nav_SetLinkUsageFlags
==============
*/
void Nav_SetLinkUsageFlags(AINavigator *pNav, unsigned int flags)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 378, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->SetLinkUsageFlags(pNav, flags);
}

/*
==============
Nav_SetLinkUsageFlagsForUnitType
==============
*/
void Nav_SetLinkUsageFlagsForUnitType(AINavigator *pNav, int unitType)
{
  __int64 v2; 
  unsigned int v4; 

  v2 = unitType;
  if ( (unsigned int)unitType >= 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 354, ASSERT_TYPE_ASSERT, "(unsigned)( unitType ) < (unsigned)( MAX_AI_UNITTYPES )", "unitType doesn't index MAX_AI_UNITTYPES\n\t%i not in [0, %i)", unitType, 7) )
    __debugbreak();
  if ( !pNav )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 355, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 385, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
      __debugbreak();
  }
  v4 = pNav->GetLinkUsageFlags(pNav);
  pNav->SetLinkUsageFlags(pNav, s_UnitTypeToLinkFlagMap[v2] | v4 & 0xFFFFFF00);
}

/*
==============
Nav_SetObstacleBlockageFlags
==============
*/
void Nav_SetObstacleBlockageFlags(AINavigator *pNav, unsigned int flags)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 392, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    flags |= 1u;
  pNav->SetObstacleBlockageFlags(pNav, flags);
}

/*
==============
Nav_SetPenaltyTableMode
==============
*/
void Nav_SetPenaltyTableMode(AINavigator *pNav, bfx::PenaltyTableMode mode)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 408, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->SetPenaltyTableMode(pNav, mode);
}

/*
==============
Nav_SetPenaltyTableValue
==============
*/
void Nav_SetPenaltyTableValue(AINavigator *pNav, unsigned int index, int value)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 424, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( (unsigned __int8)value != value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 425, ASSERT_TYPE_ASSERT, "( (value & 0xff) == value )", (const char *)&queryFormat, "(value & 0xff) == value") )
    __debugbreak();
  pNav->SetPenaltyTableValue(pNav, index, value);
}

/*
==============
Nav_SetPos
==============
*/
void Nav_SetPos(AINavigator *pNav, const vec3_t *curPos)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 433, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->SetCurPos(pNav, curPos);
}

/*
==============
Nav_Teleport
==============
*/
void Nav_Teleport(AINavigator *pNav, const vec3_t *newPos)
{
  AINavigator2D *v4; 
  nav_space_s *ClosestVerticalPosInMostLikelySpace; 
  bfx::AreaHandle pOutArea; 
  __int64 v10; 
  bfx::AreaHandle v11; 
  vec3_t outClosestPos; 

  v10 = -2i64;
  _RDI = newPos;
  bfx::AreaHandle::AreaHandle(&v11);
  v4 = pNav->Get2DNavigator(pNav);
  if ( v4 )
  {
    bfx::AreaHandle::AreaHandle(&pOutArea);
    ClosestVerticalPosInMostLikelySpace = AINavigator2D::GetClosestVerticalPosInMostLikelySpace(v4, _RDI, &outClosestPos, &pOutArea);
    bfx::AreaHandle::~AreaHandle(&pOutArea);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr [rsp+68h+outClosestPos], xmm0
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+68h+outClosestPos+4], xmm1
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+68h+outClosestPos+8], xmm0
    }
    ClosestVerticalPosInMostLikelySpace = pNav->FindMostLikelySpace(pNav, _RDI, (unsigned int)pNav->m_Layer, 0i64);
  }
  if ( ClosestVerticalPosInMostLikelySpace != pNav->m_pSpace )
    pNav->SetSpace(pNav, ClosestVerticalPosInMostLikelySpace);
  pNav->SetCurPos(pNav, &outClosestPos);
  bfx::AreaHandle::~AreaHandle(&v11);
}

/*
==============
Nav_TransferNavigatorsToSpace
==============
*/
void Nav_TransferNavigatorsToSpace(nav_space_s *pNewSpace)
{
  if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 470, ASSERT_TYPE_ASSERT, "( pNewSpace )", (const char *)&queryFormat, "pNewSpace") )
    __debugbreak();
  AINavigator2D::TransferNavigatorsToSpace(pNewSpace);
  AINavigator3D::TransferNavigatorsToSpace(pNewSpace);
}

/*
==============
Nav_VerifyNavigatorShutdown
==============
*/

void Nav_VerifyNavigatorShutdown(void)
{
  AINavigator2D::VerifyShutdown();
}

/*
==============
Nav_WriteNavigator
==============
*/
void Nav_WriteNavigator(MemoryFile *memFile, AINavigator *pNav)
{
  int p; 

  LOBYTE(p) = pNav != NULL;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( pNav )
  {
    LOBYTE(p) = pNav->Is3D(pNav);
    MemFile_WriteData(memFile, 1ui64, &p);
    p = pNav->GetNavIndex(pNav);
    MemFile_WriteData(memFile, 4ui64, &p);
    pNav->WriteNavigator(pNav, memFile);
  }
}

/*
==============
AINavigator::PathSuppressed
==============
*/
void AINavigator::PathSuppressed(AINavigator *this)
{
  this->ClearPath(this);
  this->m_TimeOfLastPathSuppressed = level.time;
}

/*
==============
AINavigator::SetLayer
==============
*/
void AINavigator::SetLayer(AINavigator *this, AINavLayer layer)
{
  AINavigator_vtbl *v4; 
  nav_space_s *v5; 
  char v6[16]; 

  if ( this->m_Layer != layer )
  {
    this->GetCurPos(this, (vec3_t *)v6);
    v4 = this->__vftable;
    this->m_Layer = layer;
    v4->ClearPath(this);
    v5 = this->FindMostLikelySpace(this, v6, (unsigned int)layer, 0i64);
    this->SetSpace(this, v5);
  }
}

/*
==============
AINavigator::SetSpace
==============
*/
void AINavigator::SetSpace(AINavigator *this, nav_space_s *pSpace)
{
  this->m_pSpace = pSpace;
}

/*
==============
AINavigator::ShouldPathOutOfBounds
==============
*/
_BOOL8 AINavigator::ShouldPathOutOfBounds(AINavigator *this)
{
  return this->m_bPathingOutOfBounds;
}

/*
==============
AINavigator::Teleport
==============
*/
void AINavigator::Teleport(AINavigator *this, const vec3_t *curPos)
{
  nav_space_s *m_pSpace; 
  nav_space_s *v10; 
  __int64 v11; 
  vec3_t outLocalPos; 
  vec4_t worldRot; 
  vec4_t outLocalRot; 

  _RDI = this;
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 148, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  __asm { vmovups xmm0, cs:__xmm@3f800000000000000000000000000000 }
  m_pSpace = _RDI->m_pSpace;
  __asm { vmovups xmmword ptr [rsp+88h+worldRot], xmm0 }
  Nav_SpaceConvertWorldToLocal(m_pSpace, curPos, &worldRot, &outLocalPos, &outLocalRot);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+88h+outLocalPos]
    vmovss  xmm1, dword ptr [rsp+88h+outLocalPos+4]
    vmovss  xmm0, dword ptr [rsp+88h+outLocalPos+8]
    vmovss  dword ptr [rdi+54h], xmm2
    vmovss  dword ptr [rdi+58h], xmm1
    vmovss  dword ptr [rdi+5Ch], xmm0
    vmovss  dword ptr [rdi+3Ch], xmm2
    vmovss  dword ptr [rdi+40h], xmm1
    vmovss  dword ptr [rdi+44h], xmm0
    vmovss  dword ptr [rdi+48h], xmm2
    vmovss  dword ptr [rdi+4Ch], xmm1
    vmovss  dword ptr [rdi+50h], xmm0
  }
  if ( !_RDI->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 159, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  __asm { vmovups xmm0, cs:__xmm@3f800000000000000000000000000000 }
  v10 = _RDI->m_pSpace;
  __asm { vmovups xmmword ptr [rsp+88h+worldRot], xmm0 }
  Nav_SpaceConvertLocalToWorld(v10, &outLocalPos, &worldRot, &_RDI->m_CurSnappedPos, &outLocalRot);
  _RDI->m_RequestedGoalPos.v[0] = _RDI->m_CurSnappedPos.v[0];
  _RDI->m_RequestedGoalPos.v[1] = _RDI->m_CurSnappedPos.v[1];
  _RDI->m_RequestedGoalPos.v[2] = _RDI->m_CurSnappedPos.v[2];
  _RDI->m_SnappedGoalPos.v[0] = _RDI->m_CurSnappedPos.v[0];
  _RDI->m_SnappedGoalPos.v[1] = _RDI->m_CurSnappedPos.v[1];
  _RDI->m_SnappedGoalPos.v[2] = _RDI->m_CurSnappedPos.v[2];
  v11 = (__int64)_RDI->FindMostLikelySpace(_RDI, curPos, (const AINavLayer)_RDI->m_Layer, NULL);
  _RDI->SetSpace(_RDI, (nav_space_s *)v11);
  _RDI->ClearPath(_RDI);
}

/*
==============
AINavigator::UpdatePathOutOfBounds
==============
*/
void AINavigator::UpdatePathOutOfBounds(AINavigator *this)
{
  AINavigator_vtbl *v3; 
  char v18; 
  int v21[4]; 

  _RBX = this;
  if ( !this->m_bPathingOutOfBounds && this->HasPath(this) )
  {
    v3 = _RBX->__vftable;
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovss  xmm6, dword ptr [rbx+0A0h]
    }
    v3->GetGoalPos(_RBX, (vec3_t *)v21);
    __asm
    {
      vmovss  xmm0, [rsp+58h+var_38]
      vmovss  xmm1, [rsp+58h+var_34]
      vsubss  xmm3, xmm0, dword ptr [rax+130h]
      vsubss  xmm2, xmm1, dword ptr [rax+134h]
      vmovss  xmm0, [rsp+58h+var_30]
      vsubss  xmm4, xmm0, dword ptr [rax+138h]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm6, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm0
      vcomiss xmm4, xmm1
    }
    if ( v18 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0A0h]
        vaddss  xmm1, xmm0, cs:__real@40c00000
      }
      if ( !((unsigned __int8 (__fastcall *)(AINavigator *))_RBX->IsPathDistToGoalAtLeast)(_RBX) )
        _RBX->m_bPathingOutOfBounds = 1;
    }
  }
}

/*
==============
AINavigator::WorldChanged
==============
*/
void AINavigator::WorldChanged(AINavigator *this)
{
  AITask_ReevalPath *p_m_ReevalPathTask; 

  p_m_ReevalPathTask = &this->m_ReevalPathTask;
  if ( p_m_ReevalPathTask->status[0] != 1 )
    AIScheduler::AddReevalPathTask(p_m_ReevalPathTask);
}

/*
==============
AINavigator::WorldifyPosFromSpace
==============
*/
void AINavigator::WorldifyPosFromSpace(AINavigator *this, const vec3_t *localPos, vec3_t *outWorldPos)
{
  nav_space_s *m_pSpace; 
  vec4_t localRot; 
  vec4_t outWorldRot; 

  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 159, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  __asm { vmovups xmm0, cs:__xmm@3f800000000000000000000000000000 }
  m_pSpace = this->m_pSpace;
  __asm { vmovups xmmword ptr [rsp+78h+localRot], xmm0 }
  Nav_SpaceConvertLocalToWorld(m_pSpace, localPos, &localRot, outWorldPos, &outWorldRot);
}

