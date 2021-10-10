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
  gentity_s *m_pEnt; 
  float v7; 
  float v8; 
  nav_space_s *MostLikelySpaceWithRadius; 

  this->__vftable = (AINavigator_vtbl *)&AINavigator::`vftable';
  this->m_pEnt = pEnt;
  this->m_CurSegment = 0;
  this->m_Layer = layer;
  *(_QWORD *)&this->m_TimeOfLastPathUpdate = 0i64;
  this->m_TimeOfLastPathSuppressed = 0;
  this->m_DistFromGoalToPathToRequestedGoal = 36.0;
  *(_QWORD *)&this->m_MaxDeviationFromPath = 1086324736i64;
  bfx::LinkHandle::LinkHandle(&this->m_hLink);
  this->m_TimeOfLastBlockage = 0;
  this->m_bBlocked = 0;
  if ( !pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 84, ASSERT_TYPE_ASSERT, "( pEnt )", (const char *)&queryFormat, "pEnt", -2i64, this) )
    __debugbreak();
  m_pEnt = this->m_pEnt;
  v7 = COERCE_FLOAT(LODWORD(m_pEnt->r.box.midPoint.v[0]) & _xmm) + m_pEnt->r.box.halfSize.v[0];
  v8 = COERCE_FLOAT(LODWORD(m_pEnt->r.box.midPoint.v[1]) & _xmm) + m_pEnt->r.box.halfSize.v[1];
  MostLikelySpaceWithRadius = Nav_FindMostLikelySpaceWithRadius(&pEnt->r.currentOrigin, fsqrt((float)(v8 * v8) + (float)(v7 * v7)), layer, NULL);
  this->m_pSpace = MostLikelySpaceWithRadius;
  if ( !MostLikelySpaceWithRadius )
    this->m_pSpace = Nav_GetDefaultSpace();
  AINavigator::LocalizePosToSpace(this, &pEnt->r.currentOrigin, &this->m_LocalCurSnappedPos);
  AINavigator::WorldifyPosFromSpace(this, &this->m_LocalCurSnappedPos, &this->m_CurSnappedPos);
  this->m_LocalRequestedGoalPos.v[0] = this->m_LocalCurSnappedPos.v[0];
  this->m_LocalRequestedGoalPos.v[1] = this->m_LocalCurSnappedPos.v[1];
  this->m_LocalRequestedGoalPos.v[2] = this->m_LocalCurSnappedPos.v[2];
  this->m_LocalSnappedGoalPos.v[0] = this->m_LocalCurSnappedPos.v[0];
  this->m_LocalSnappedGoalPos.v[1] = this->m_LocalCurSnappedPos.v[1];
  this->m_LocalSnappedGoalPos.v[2] = this->m_LocalCurSnappedPos.v[2];
  this->m_RequestedGoalPos.v[0] = this->m_CurSnappedPos.v[0];
  this->m_RequestedGoalPos.v[1] = this->m_CurSnappedPos.v[1];
  this->m_RequestedGoalPos.v[2] = this->m_CurSnappedPos.v[2];
  this->m_SnappedGoalPos.v[0] = this->m_CurSnappedPos.v[0];
  this->m_SnappedGoalPos.v[1] = this->m_CurSnappedPos.v[1];
  this->m_SnappedGoalPos.v[2] = this->m_CurSnappedPos.v[2];
  this->m_ReevalPathTask.entNum = this->m_pEnt->s.number;
  this->m_ReevalPathTask.status[0] = 0;
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
  gentity_s *m_pEnt; 
  float v5; 
  float v6; 

  m_pEnt = this->m_pEnt;
  v5 = COERCE_FLOAT(LODWORD(m_pEnt->r.box.midPoint.v[0]) & _xmm) + m_pEnt->r.box.halfSize.v[0];
  v6 = COERCE_FLOAT(LODWORD(m_pEnt->r.box.midPoint.v[1]) & _xmm) + m_pEnt->r.box.halfSize.v[1];
  return Nav_FindMostLikelySpaceWithRadius(pos, fsqrt((float)(v6 * v6) + (float)(v5 * v5)), layer, pIgnoreSpace);
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
  return VecNCompareCustomEpsilon(this->m_LocalCurSnappedPos.v, this->m_LocalSnappedGoalPos.v, 0.001, 3);
}

/*
==============
AINavigator::IsGoalPosWithin
==============
*/
bool AINavigator::IsGoalPosWithin(AINavigator *this, float radius)
{
  float v3; 
  float v4; 
  float v5; 

  if ( radius < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 225, ASSERT_TYPE_ASSERT, "( radius >= 0.f )", (const char *)&queryFormat, "radius >= 0.f") )
    __debugbreak();
  v3 = this->m_LocalSnappedGoalPos.v[0] - this->m_LocalCurSnappedPos.v[0];
  v4 = this->m_LocalSnappedGoalPos.v[1] - this->m_LocalCurSnappedPos.v[1];
  v5 = this->m_LocalSnappedGoalPos.v[2] - this->m_LocalCurSnappedPos.v[2];
  return (float)(radius * radius) >= (float)((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5));
}

/*
==============
AINavigator::IsGoingDown
==============
*/
bool AINavigator::IsGoingDown(AINavigator *this)
{
  bool result; 
  char v3[8]; 
  float v4; 
  char v5[8]; 
  float v6; 

  result = this->HasPath(this);
  if ( result )
  {
    this->GetCurPos(this, (vec3_t *)v5);
    this->GetNextCorner(this, (vec3_t *)v3);
    return (float)(v4 - v6) < 0.001;
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
  m_pSpace = this->m_pSpace;
  worldRot = (vec4_t)_xmm;
  Nav_SpaceConvertWorldToLocal(m_pSpace, worldPos, &worldRot, outLocalPos, &outLocalRot);
}

/*
==============
Nav_CalculateNextNCorners
==============
*/
__int64 Nav_CalculateNextNCorners(const AINavigator *pNav, int maxCorners, nav_cornerdata_t *corners, float pathDistThreshold)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 633, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  return ((__int64 (__fastcall *)(const AINavigator *, nav_cornerdata_t *, _QWORD))pNav->GetNextNCorners)(pNav, corners, (unsigned int)maxCorners);
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
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 

  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 582, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  pNav->GetNextCorner((AINavigator *)pNav, (vec3_t *)&v6);
  pNav->GetCurPos((AINavigator *)pNav, (vec3_t *)&v3);
  return fsqrt((float)((float)((float)(v4 - v7) * (float)(v4 - v7)) + (float)((float)(v3 - v6) * (float)(v3 - v6))) + (float)((float)(v5 - v8) * (float)(v5 - v8)));
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
  bool v4; 
  AINavigator_vtbl *v5; 
  __int64 v6; 
  __int64 v7; 
  AINavigator_vtbl *v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  int fmt; 
  unsigned int v16; 
  float v17; 
  float v18; 
  int v19[4]; 
  int v20[5]; 
  bfx::AreaHandle v21; 
  bfx::LinkHandle v22; 

  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 550, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&v21);
  bfx::LinkHandle::LinkHandle(&v22);
  if ( pNav->HasPath((AINavigator *)pNav) )
  {
    v4 = !pNav->IsNextCornerGoal((AINavigator *)pNav);
    v5 = pNav->__vftable;
    if ( v4 )
    {
      v4 = !v5->HasPath((AINavigator *)pNav);
      v8 = pNav->__vftable;
      if ( v4 )
      {
        v8->GetNextCorner((AINavigator *)pNav, (vec3_t *)&v16);
      }
      else
      {
        LOBYTE(fmt) = 0;
        LOBYTE(v7) = 1;
        ((void (__fastcall *)(const AINavigator *, __int64, __int64, int *, int))v8->GetPosAlongPath)(pNav, v6, v7, v20, fmt);
        v16 = v20[0];
        v17 = *(float *)&v20[1];
        v18 = *(float *)&v20[2];
      }
    }
    else
    {
      v5->GetRequestedGoalPos((AINavigator *)pNav, (vec3_t *)&v16);
    }
    pNav->GetCurPos((AINavigator *)pNav, (vec3_t *)v19);
    v9 = v16;
    v10 = v17 - *(float *)&v19[1];
    v11 = v18 - *(float *)&v19[2];
    *(float *)&v9 = fsqrt((float)((float)((float)(*(float *)&v16 - *(float *)v19) * (float)(*(float *)&v16 - *(float *)v19)) + (float)(v10 * v10)) + (float)(v11 * v11));
    _XMM3 = v9;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm0
    }
    outLookaheadDir->v[0] = (float)(*(float *)&v16 - *(float *)v19) * (float)(1.0 / *(float *)&_XMM1);
    outLookaheadDir->v[1] = v10 * (float)(1.0 / *(float *)&_XMM1);
    outLookaheadDir->v[2] = v11 * (float)(1.0 / *(float *)&_XMM1);
  }
  else
  {
    *(_QWORD *)outLookaheadDir->v = 0i64;
    outLookaheadDir->v[2] = 0.0;
  }
  bfx::LinkHandle::~LinkHandle(&v22);
  bfx::AreaHandle::~AreaHandle(&v21);
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
bool Nav_GetPosAlongPath(const AINavigator *pNav, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pResults)
{
  bool result; 
  __int64 v8; 
  int fmt; 

  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 610, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( !pResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 611, ASSERT_TYPE_ASSERT, "( pResults )", (const char *)&queryFormat, "pResults") )
    __debugbreak();
  result = pNav->HasPath((AINavigator *)pNav);
  if ( result )
  {
    LOBYTE(fmt) = 0;
    ((void (__fastcall *)(const AINavigator *, __int64, bool, nav_posAlongPathResults_t *, int))pNav->GetPosAlongPath)(pNav, v8, bStopAtLink, pResults, fmt);
    return 1;
  }
  return result;
}

/*
==============
Nav_GetPosAlongPathWithArea
==============
*/
bool Nav_GetPosAlongPathWithArea(const AINavigator *pNav, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pResults)
{
  bool result; 
  __int64 v8; 
  int fmt; 

  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 621, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( !pResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 622, ASSERT_TYPE_ASSERT, "( pResults )", (const char *)&queryFormat, "pResults") )
    __debugbreak();
  result = pNav->HasPath((AINavigator *)pNav);
  if ( result )
  {
    LOBYTE(fmt) = 1;
    ((void (__fastcall *)(const AINavigator *, __int64, bool, nav_posAlongPathResults_t *, int))pNav->GetPosAlongPath)(pNav, v8, bStopAtLink, pResults, fmt);
    return 1;
  }
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
__int64 Nav_IsAtGoal(const AINavigator *pNav, float radius)
{
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 536, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  return ((__int64 (__fastcall *)(const AINavigator *))pNav->IsGoalPosWithin)(pNav);
}

/*
==============
Nav_IsPointNearPath
==============
*/
_BOOL8 Nav_IsPointNearPath(const AINavigator *pNav, const vec3_t *point, float maxDistFromPath, float maxDistDownPath)
{
  int v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  bool v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  float *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v30; 
  float v31; 
  float v32; 
  float ptr; 
  float v34; 
  float v35; 

  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 640, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  `eh vector constructor iterator'(&ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::nav_cornerdata_t, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  if ( !pNav && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 633, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  v6 = ((__int64 (__fastcall *)(const AINavigator *, float *, __int64))pNav->GetNextNCorners)(pNav, &ptr, 10i64);
  if ( !v6 )
  {
    pNav->GetNextCorner((AINavigator *)pNav, (vec3_t *)&ptr);
    v6 = 1;
  }
  pNav->GetCurPos((AINavigator *)pNav, (vec3_t *)&v30);
  v7 = v32;
  if ( v6 != 1 )
  {
    if ( v6 <= 0 )
    {
LABEL_23:
      v11 = 0;
      goto LABEL_24;
    }
    v9 = v31;
    v8 = v30;
    v10 = FLOAT_1_0;
    goto LABEL_14;
  }
  v8 = v30;
  v9 = v31;
  v10 = FLOAT_1_0;
  if ( (float)((float)((float)((float)(v34 - v31) * (float)(v34 - v31)) + (float)((float)(ptr - v30) * (float)(ptr - v30))) + (float)((float)(v35 - v32) * (float)(v35 - v32))) >= 1.0 )
  {
LABEL_14:
    v12 = point->v[0];
    v13 = point->v[1];
    v14 = point->v[2];
    v15 = 0i64;
    v16 = &v35;
    while ( 1 )
    {
      v17 = v8;
      v18 = v9;
      v19 = v7;
      v30 = *(v16 - 2);
      v31 = *(v16 - 1);
      v7 = *v16;
      v32 = v7;
      v21 = LODWORD(v31);
      v20 = v31 - v9;
      *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)((float)(v30 - v8) * (float)(v30 - v8))) + (float)((float)(v7 - v19) * (float)(v7 - v19)));
      _XMM3 = v21;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm14, xmm0
      }
      *(float *)&_XMM0 = v10 / *(float *)&_XMM1;
      v25 = (float)(v10 / *(float *)&_XMM1) * (float)(v30 - v8);
      v26 = (float)(v10 / *(float *)&_XMM1) * v20;
      v27 = *(float *)&_XMM0 * (float)(v7 - v19);
      v9 = v31;
      if ( (float)((float)((float)(v26 * (float)(v13 - v31)) + (float)(v25 * (float)(v12 - v30))) + (float)(v27 * (float)(v14 - v7))) <= maxDistFromPath )
      {
        v28 = (float)((float)(v26 * (float)(v13 - v18)) + (float)(v25 * (float)(v12 - v17))) + (float)(v27 * (float)(v14 - v19));
        if ( (v28 >= 0.0 || v28 >= COERCE_FLOAT(LODWORD(maxDistFromPath) ^ _xmm)) && (float)((float)((float)((float)(v13 - (float)((float)(v26 * v28) + v18)) * (float)(v13 - (float)((float)(v26 * v28) + v18))) + (float)((float)(v12 - (float)((float)(v25 * v28) + v17)) * (float)(v12 - (float)((float)(v25 * v28) + v17)))) + (float)((float)(v14 - (float)((float)(v27 * v28) + v19)) * (float)(v14 - (float)((float)(v27 * v28) + v19)))) < (float)(maxDistFromPath * maxDistFromPath) )
        {
          v11 = 1;
          goto LABEL_24;
        }
        v9 = v31;
      }
      ++v15;
      v16 += 10;
      if ( v15 >= v6 )
        goto LABEL_23;
      v8 = v30;
      v10 = FLOAT_1_0;
    }
  }
  v11 = (float)(maxDistFromPath * maxDistFromPath) > (float)((float)((float)((float)(point->v[1] - v31) * (float)(point->v[1] - v31)) + (float)((float)(point->v[0] - v30) * (float)(point->v[0] - v30))) + (float)((float)(point->v[2] - v32) * (float)(point->v[2] - v32)));
LABEL_24:
  `eh vector destructor iterator'(&ptr, 0x28ui64, 0xAui64, (void (__fastcall *)(void *))nav_cornerdata_t::~nav_cornerdata_t);
  return v11;
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
  __int64 v3; 
  gentity_s *v4; 
  ai_common_t *AICommon; 
  ai_common_t *v6; 
  bool v7; 
  AIScriptedInterface *v8; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  __int64 v12; 
  AIActorInterface v13; 
  AIAgentInterface v14; 
  AIScriptedInterface *v15; 
  vec3_t outLookaheadDir; 

  if ( !pTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 729, ASSERT_TYPE_ASSERT, "( pTask )", (const char *)&queryFormat, "pTask") )
    __debugbreak();
  entNum = pTask->entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    LODWORD(v12) = pTask->entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[entNum].r.isInUse != g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[entNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 730, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( pTask->entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( pTask->entNum )") )
    __debugbreak();
  v3 = pTask->entNum;
  v4 = &g_entities[v3];
  if ( v4->health <= 0 )
    return 0;
  AICommon = AI_GetAICommon(&g_entities[v3]);
  v6 = AICommon;
  if ( !AICommon )
    return 0;
  if ( !AICommon->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 740, ASSERT_TYPE_ASSERT, "( pAI->pNavigator )", (const char *)&queryFormat, "pAI->pNavigator") )
    __debugbreak();
  v7 = v6->pNavigator->HasPath(v6->pNavigator);
  outLookaheadDir.v[0] = 0.0;
  outLookaheadDir.v[1] = 0.0;
  outLookaheadDir.v[2] = 0.0;
  if ( v7 )
    Nav_GetLookaheadDir(v6->pNavigator, &outLookaheadDir);
  v6->pNavigator->DoPathReeval(v6->pNavigator);
  if ( !v7 || !v6->pNavigator->HasPath(v6->pNavigator) )
    return 1;
  AIActorInterface::AIActorInterface(&v13);
  AIAgentInterface::AIAgentInterface(&v14);
  v8 = NULL;
  v14.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v15 = NULL;
  if ( v4->agent )
  {
    if ( SV_Agent_IsScripted(v4->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v4);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v14, ScriptedAgentInfo);
      v15 = &v14;
      AIScriptedInterface::PathChangeNotify(&v14, &outLookaheadDir);
      return 1;
    }
    v8 = v15;
  }
  actor = v4->actor;
  if ( !actor )
  {
    if ( v8 )
      AIScriptedInterface::PathChangeNotify(v8, &outLookaheadDir);
    return 1;
  }
  if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
    __debugbreak();
  AIActorInterface::SetActor(&v13, v4->actor);
  v15 = &v13;
  AIScriptedInterface::PathChangeNotify(&v13, &outLookaheadDir);
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
  __int64 v7; 
  bfx::AreaHandle v8; 
  vec3_t outClosestPos; 

  v7 = -2i64;
  bfx::AreaHandle::AreaHandle(&v8);
  v4 = pNav->Get2DNavigator(pNav);
  if ( v4 )
  {
    bfx::AreaHandle::AreaHandle(&pOutArea);
    ClosestVerticalPosInMostLikelySpace = AINavigator2D::GetClosestVerticalPosInMostLikelySpace(v4, newPos, &outClosestPos, &pOutArea);
    bfx::AreaHandle::~AreaHandle(&pOutArea);
  }
  else
  {
    outClosestPos = *newPos;
    ClosestVerticalPosInMostLikelySpace = pNav->FindMostLikelySpace(pNav, newPos, (unsigned int)pNav->m_Layer, 0i64);
  }
  if ( ClosestVerticalPosInMostLikelySpace != pNav->m_pSpace )
    pNav->SetSpace(pNav, ClosestVerticalPosInMostLikelySpace);
  pNav->SetCurPos(pNav, &outClosestPos);
  bfx::AreaHandle::~AreaHandle(&v8);
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
  float v5; 
  float v6; 
  float v7; 
  nav_space_s *v8; 
  nav_space_s *v9; 
  vec3_t outLocalPos; 
  vec4_t worldRot; 
  vec4_t outLocalRot; 

  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 148, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  m_pSpace = this->m_pSpace;
  worldRot = (vec4_t)_xmm;
  Nav_SpaceConvertWorldToLocal(m_pSpace, curPos, &worldRot, &outLocalPos, &outLocalRot);
  v5 = outLocalPos.v[0];
  v6 = outLocalPos.v[1];
  v7 = outLocalPos.v[2];
  this->m_LocalCurSnappedPos.v[0] = outLocalPos.v[0];
  this->m_LocalCurSnappedPos.v[1] = v6;
  this->m_LocalCurSnappedPos.v[2] = v7;
  this->m_LocalRequestedGoalPos.v[0] = v5;
  this->m_LocalRequestedGoalPos.v[1] = v6;
  this->m_LocalRequestedGoalPos.v[2] = v7;
  this->m_LocalSnappedGoalPos.v[0] = v5;
  this->m_LocalSnappedGoalPos.v[1] = v6;
  this->m_LocalSnappedGoalPos.v[2] = v7;
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator.cpp", 159, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  v8 = this->m_pSpace;
  worldRot = (vec4_t)_xmm;
  Nav_SpaceConvertLocalToWorld(v8, &outLocalPos, &worldRot, &this->m_CurSnappedPos, &outLocalRot);
  this->m_RequestedGoalPos.v[0] = this->m_CurSnappedPos.v[0];
  this->m_RequestedGoalPos.v[1] = this->m_CurSnappedPos.v[1];
  this->m_RequestedGoalPos.v[2] = this->m_CurSnappedPos.v[2];
  this->m_SnappedGoalPos.v[0] = this->m_CurSnappedPos.v[0];
  this->m_SnappedGoalPos.v[1] = this->m_CurSnappedPos.v[1];
  this->m_SnappedGoalPos.v[2] = this->m_CurSnappedPos.v[2];
  v9 = this->FindMostLikelySpace(this, curPos, (unsigned int)this->m_Layer, 0i64);
  this->SetSpace(this, v9);
  this->ClearPath(this);
}

/*
==============
AINavigator::UpdatePathOutOfBounds
==============
*/
void AINavigator::UpdatePathOutOfBounds(AINavigator *this)
{
  __int128 v1; 
  AINavigator_vtbl *v3; 
  float m_DistFromGoalToPathToRequestedGoal; 
  gentity_s *m_pEnt; 
  float v6; 
  float v7; 
  float v8; 
  __int128 v9; 

  if ( !this->m_bPathingOutOfBounds && this->HasPath(this) )
  {
    v3 = this->__vftable;
    v9 = v1;
    m_DistFromGoalToPathToRequestedGoal = this->m_DistFromGoalToPathToRequestedGoal;
    v3->GetGoalPos(this, (vec3_t *)&v6);
    m_pEnt = this->m_pEnt;
    if ( (float)((float)((float)((float)(v7 - m_pEnt->r.currentOrigin.v[1]) * (float)(v7 - m_pEnt->r.currentOrigin.v[1])) + (float)((float)(v6 - m_pEnt->r.currentOrigin.v[0]) * (float)(v6 - m_pEnt->r.currentOrigin.v[0]))) + (float)((float)(v8 - m_pEnt->r.currentOrigin.v[2]) * (float)(v8 - m_pEnt->r.currentOrigin.v[2]))) < (float)(m_DistFromGoalToPathToRequestedGoal * m_DistFromGoalToPathToRequestedGoal) && !((unsigned __int8 (__fastcall *)(AINavigator *))this->IsPathDistToGoalAtLeast)(this) )
      this->m_bPathingOutOfBounds = 1;
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
  m_pSpace = this->m_pSpace;
  localRot = (vec4_t)_xmm;
  Nav_SpaceConvertLocalToWorld(m_pSpace, localPos, &localRot, outWorldPos, &outWorldRot);
}

