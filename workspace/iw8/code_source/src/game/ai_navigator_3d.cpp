/*
==============
AINavigator3D::GetNextNCorners
==============
*/

int __fastcall AINavigator3D::GetNextNCorners(AINavigator3D *this, nav_cornerdata_t *pOutCorners, int maxCorners, float pathDistThreshold, bool bGetCornerAfterThreshold)
{
  return ?GetNextNCorners@AINavigator3D@@UEBAHPEAUnav_cornerdata_t@@HM_N@Z(this, pOutCorners, maxCorners, pathDistThreshold, bGetCornerAfterThreshold);
}

/*
==============
AINavigator3D::IsStraightLineToGoal
==============
*/

bool __fastcall AINavigator3D::IsStraightLineToGoal(AINavigator3D *this)
{
  return ?IsStraightLineToGoal@AINavigator3D@@UEBA_NXZ(this);
}

/*
==============
AINavigator3D::SetCurPos
==============
*/

void __fastcall AINavigator3D::SetCurPos(AINavigator3D *this, const vec3_t *curPos)
{
  ?SetCurPos@AINavigator3D@@UEAAXAEBTvec3_t@@@Z(this, curPos);
}

/*
==============
AINavigator3D::GetPrevCorner
==============
*/

void __fastcall AINavigator3D::GetPrevCorner(AINavigator3D *this, vec3_t *corner)
{
  ?GetPrevCorner@AINavigator3D@@UEBAXAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator3D::SetSpace
==============
*/

void __fastcall AINavigator3D::SetSpace(AINavigator3D *this, nav_space_s *pSpace)
{
  ?SetSpace@AINavigator3D@@UEAAXPEAUnav_space_s@@@Z(this, pSpace);
}

/*
==============
AINavigator3D::GetNextMultiGoalPathGoal
==============
*/

unsigned __int8 __fastcall AINavigator3D::GetNextMultiGoalPathGoal(AINavigator3D *this, unsigned __int8 prevPoint, vec3_t *outPoint, bool *pbOutIsPathPoint)
{
  return ?GetNextMultiGoalPathGoal@AINavigator3D@@UEBAEEAEATvec3_t@@PEA_N@Z(this, prevPoint, outPoint, pbOutIsPathPoint);
}

/*
==============
AINavigator3D::ClearGoal
==============
*/

void __fastcall AINavigator3D::ClearGoal(AINavigator3D *this)
{
  ?ClearGoal@AINavigator3D@@UEAAXXZ(this);
}

/*
==============
AINavigator3D::IsPathDistToGoalAtLeast
==============
*/

bool __fastcall AINavigator3D::IsPathDistToGoalAtLeast(AINavigator3D *this, float dist)
{
  return ?IsPathDistToGoalAtLeast@AINavigator3D@@UEBA_NM@Z(this, dist);
}

/*
==============
AINavigator3D::DrawPath
==============
*/

void __fastcall AINavigator3D::DrawPath(AINavigator3D *this, int mode)
{
  ?DrawPath@AINavigator3D@@UEBAXH@Z(this, mode);
}

/*
==============
AINavigator3D::GetPathDistToGoalOrLink
==============
*/

double __fastcall AINavigator3D::GetPathDistToGoalOrLink(AINavigator3D *this)
{
  double result; 

  *(float *)&result = ?GetPathDistToGoalOrLink@AINavigator3D@@UEBAMXZ(this);
  return result;
}

/*
==============
Nav_CleanupStaticNavigatorData3D
==============
*/

void Nav_CleanupStaticNavigatorData3D(void)
{
  ?Nav_CleanupStaticNavigatorData3D@@YAXXZ();
}

/*
==============
AINavigator3D::ReadNavigator
==============
*/

AINavigator3D *__fastcall AINavigator3D::ReadNavigator(MemoryFile *memFile, int index)
{
  return ?ReadNavigator@AINavigator3D@@SAPEAV1@PEAUMemoryFile@@H@Z(memFile, index);
}

/*
==============
AINavigator3D::UpdateCurSegment
==============
*/

bool __fastcall AINavigator3D::UpdateCurSegment(AINavigator3D *this, const vec3_t *newPos, const bfx::VolumeHandle *hNewVolume)
{
  return ?UpdateCurSegment@AINavigator3D@@IEAA_NAEBTvec3_t@@AEBVVolumeHandle@bfx@@@Z(this, newPos, hNewVolume);
}

/*
==============
AINavigator3D::ConvertCornerData
==============
*/

void __fastcall AINavigator3D::ConvertCornerData(AINavigator3D *this, const nav_cornerdata_3D_t *fromCorner, nav_cornerdata_t *pToCorner)
{
  ?ConvertCornerData@AINavigator3D@@IEBAXAEBUnav_cornerdata_3D_t@@PEAUnav_cornerdata_t@@@Z(this, fromCorner, pToCorner);
}

/*
==============
AINavigator3D::TraceFromCurPos
==============
*/

bool __fastcall AINavigator3D::TraceFromCurPos(AINavigator3D *this, const vec3_t *endPos, vec3_t *outHitPos)
{
  return ?TraceFromCurPos@AINavigator3D@@UEBA_NAEBTvec3_t@@AEAT2@@Z(this, endPos, outHitPos);
}

/*
==============
AINavigator3D::Free
==============
*/

void __fastcall AINavigator3D::Free(AINavigator3D *this)
{
  ?Free@AINavigator3D@@UEAAXXZ(this);
}

/*
==============
AINavigator3D::CanAddMultiGoalPathGoal
==============
*/

bool __fastcall AINavigator3D::CanAddMultiGoalPathGoal(AINavigator3D *this)
{
  return ?CanAddMultiGoalPathGoal@AINavigator3D@@UEAA_NXZ(this);
}

/*
==============
AINavigator3D::IsNextCornerGoal
==============
*/

bool __fastcall AINavigator3D::IsNextCornerGoal(AINavigator3D *this)
{
  return ?IsNextCornerGoal@AINavigator3D@@UEBA_NXZ(this);
}

/*
==============
AINavigator3D::TransferNavigatorsToSpace
==============
*/

void __fastcall AINavigator3D::TransferNavigatorsToSpace(nav_space_s *pNewSpace)
{
  ?TransferNavigatorsToSpace@AINavigator3D@@SAXPEAUnav_space_s@@@Z(pNewSpace);
}

/*
==============
AINavigator3D::GetPrevCornerPassed
==============
*/

void __fastcall AINavigator3D::GetPrevCornerPassed(AINavigator3D *this, vec3_t *corner)
{
  ?GetPrevCornerPassed@AINavigator3D@@UEBAXAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator3D::IsNextCornerMultiGoalPathGoal
==============
*/

bool __fastcall AINavigator3D::IsNextCornerMultiGoalPathGoal(AINavigator3D *this)
{
  return ?IsNextCornerMultiGoalPathGoal@AINavigator3D@@UEBA_NXZ(this);
}

/*
==============
AINavigator3D::CacheOneMoreCorner
==============
*/

bool __fastcall AINavigator3D::CacheOneMoreCorner(AINavigator3D *this)
{
  return ?CacheOneMoreCorner@AINavigator3D@@IEAA_NXZ(this);
}

/*
==============
AINavigator3D::GetNavIndex
==============
*/

int __fastcall AINavigator3D::GetNavIndex(AINavigator3D *this)
{
  return ?GetNavIndex@AINavigator3D@@UEBAHXZ(this);
}

/*
==============
AINavigator3D::HasPath
==============
*/

bool __fastcall AINavigator3D::HasPath(AINavigator3D *this)
{
  return ?HasPath@AINavigator3D@@UEBA_NXZ(this);
}

/*
==============
AINavigator3D::GetFinalPathPoint
==============
*/

void __fastcall AINavigator3D::GetFinalPathPoint(AINavigator3D *this, const bfx::PolylinePath3DRCPtr *path, vec3_t *outPoint)
{
  ?GetFinalPathPoint@AINavigator3D@@IEBAXAEBVPolylinePath3DRCPtr@bfx@@AEATvec3_t@@@Z(this, path, outPoint);
}

/*
==============
Nav_Create3DNavigator
==============
*/

AINavigator *__fastcall Nav_Create3DNavigator(gentity_s *pEnt, AINavLayer planLayer, bool allowOffMeshSpawn)
{
  return ?Nav_Create3DNavigator@@YAPEAVAINavigator@@PEAUgentity_s@@W4AINavLayer@@_N@Z(pEnt, planLayer, allowOffMeshSpawn);
}

/*
==============
AINavigator3D::IsNodeReachable
==============
*/

bool __fastcall AINavigator3D::IsNodeReachable(AINavigator3D *this, const pathnode_t *node)
{
  return ?IsNodeReachable@AINavigator3D@@UEAA_NPEBUpathnode_t@@@Z(this, node);
}

/*
==============
AINavigator3D::FindMostLikelySpace
==============
*/

nav_space_s *__fastcall AINavigator3D::FindMostLikelySpace(AINavigator3D *this, const vec3_t *pos, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  return ?FindMostLikelySpace@AINavigator3D@@UEBAPEAUnav_space_s@@AEBTvec3_t@@W4AINavLayer@@PEAU2@@Z(this, pos, layer, pIgnoreSpace);
}

/*
==============
AINavigator3D::ClearPath
==============
*/

void __fastcall AINavigator3D::ClearPath(AINavigator3D *this)
{
  ?ClearPath@AINavigator3D@@UEAAXXZ(this);
}

/*
==============
AINavigator3D::SetGoalPos
==============
*/

bool __fastcall AINavigator3D::SetGoalPos(AINavigator3D *this, const vec3_t *goalPos)
{
  return ?SetGoalPos@AINavigator3D@@UEAA_NAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
AINavigator3D::UpdatePathOutOfBounds
==============
*/

void __fastcall AINavigator3D::UpdatePathOutOfBounds(AINavigator3D *this)
{
  ?UpdatePathOutOfBounds@AINavigator3D@@UEAAXXZ(this);
}

/*
==============
AINavigator3D::AddMultiGoalPathGoal
==============
*/

bool __fastcall AINavigator3D::AddMultiGoalPathGoal(AINavigator3D *this, const vec3_t *goalPos)
{
  return ?AddMultiGoalPathGoal@AINavigator3D@@UEAA_NAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
AINavigator3D::GetPosAlongPath
==============
*/

void __fastcall AINavigator3D::GetPosAlongPath(AINavigator3D *this, float dist, vec3_t *outPos)
{
  ?GetPosAlongPath@AINavigator3D@@QEBAXMAEATvec3_t@@@Z(this, dist, outPos);
}

/*
==============
AINavigator3D::IsPathDistToGoalOrLinkAtLeast
==============
*/

bool __fastcall AINavigator3D::IsPathDistToGoalOrLinkAtLeast(AINavigator3D *this, float dist)
{
  return ?IsPathDistToGoalOrLinkAtLeast@AINavigator3D@@UEBA_NM@Z(this, dist);
}

/*
==============
AINavigator3D::GetFinalPathPoint
==============
*/

void __fastcall AINavigator3D::GetFinalPathPoint(AINavigator3D *this, vec3_t *outPoint)
{
  ?GetFinalPathPoint@AINavigator3D@@QEBAXAEATvec3_t@@@Z(this, outPoint);
}

/*
==============
AINavigator3D::AINavigator3D
==============
*/

void __fastcall AINavigator3D::AINavigator3D(AINavigator3D *this, gentity_s *pEnt, AINavLayer layer, bool allowOffMeshSpawn)
{
  ??0AINavigator3D@@QEAA@PEAUgentity_s@@W4AINavLayer@@_N@Z(this, pEnt, layer, allowOffMeshSpawn);
}

/*
==============
AINavigator3D::WriteNavigator
==============
*/

void __fastcall AINavigator3D::WriteNavigator(AINavigator3D *this, MemoryFile *memFile)
{
  ?WriteNavigator@AINavigator3D@@UEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
AINavigator3D::GetClosestReachablePoint
==============
*/

void __fastcall AINavigator3D::GetClosestReachablePoint(AINavigator3D *this, const vec3_t *pos, vec3_t *closestPos)
{
  ?GetClosestReachablePoint@AINavigator3D@@UEBAXTvec3_t@@AEAT2@@Z(this, pos, closestPos);
}

/*
==============
AINavigator3D::GetPosAlongPath
==============
*/

void __fastcall AINavigator3D::GetPosAlongPath(AINavigator3D *this, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pOutResults, bool bCalcArea)
{
  ?GetPosAlongPath@AINavigator3D@@UEBAXM_NPEAUnav_posAlongPathResults_t@@0@Z(this, dist, bStopAtLink, pOutResults, bCalcArea);
}

/*
==============
AINavigator3D::AINavigator3D
==============
*/

void __fastcall AINavigator3D::AINavigator3D(AINavigator3D *this)
{
  ??0AINavigator3D@@QEAA@XZ(this);
}

/*
==============
AINavigator3D::CleanupAll
==============
*/

void AINavigator3D::CleanupAll(void)
{
  ?CleanupAll@AINavigator3D@@SAXXZ();
}

/*
==============
AINavigator3D::DoPathFind
==============
*/

bool __fastcall AINavigator3D::DoPathFind(AINavigator3D *this)
{
  return ?DoPathFind@AINavigator3D@@UEAA_NXZ(this);
}

/*
==============
AINavigator3D::Trace
==============
*/

bool __fastcall AINavigator3D::Trace(AINavigator3D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return ?Trace@AINavigator3D@@UEBA_NAEBTvec3_t@@0@Z(this, startPos, endPos);
}

/*
==============
AINavigator3D::IsPosReachable
==============
*/

bool __fastcall AINavigator3D::IsPosReachable(AINavigator3D *this, const vec3_t *goalPos)
{
  return ?IsPosReachable@AINavigator3D@@UEBA_NAEBTvec3_t@@@Z(this, goalPos);
}

/*
==============
AINavigator3D::ClearNavigatorsFromSpace
==============
*/

void __fastcall AINavigator3D::ClearNavigatorsFromSpace(nav_space_s *pOldSpace, nav_space_s *pNewSpace)
{
  ?ClearNavigatorsFromSpace@AINavigator3D@@SAXPEAUnav_space_s@@0@Z(pOldSpace, pNewSpace);
}

/*
==============
AINavigator3D::IsWithinDistOfSegment
==============
*/

bool __fastcall AINavigator3D::IsWithinDistOfSegment(AINavigator3D *this, const int segmentIndex, const vec3_t *pos, const float maxDist)
{
  return ?IsWithinDistOfSegment@AINavigator3D@@IEAA_NHAEBTvec3_t@@M@Z(this, segmentIndex, pos, maxDist);
}

/*
==============
AINavigator3D::FindPath
==============
*/

bfx::PolylinePath3DRCPtr *__fastcall AINavigator3D::FindPath(AINavigator3D *this, bfx::PolylinePath3DRCPtr *result, const nav_pathfind_3D_input_t *pInput)
{
  return ?FindPath@AINavigator3D@@IEBA?AVPolylinePath3DRCPtr@bfx@@PEBUnav_pathfind_3D_input_t@@@Z(this, result, pInput);
}

/*
==============
AINavigator3D::GetPathLength
==============
*/

double __fastcall AINavigator3D::GetPathLength(AINavigator3D *this)
{
  double result; 

  *(float *)&result = ?GetPathLength@AINavigator3D@@UEBAMXZ(this);
  return result;
}

/*
==============
AINavigator3D::TraceFromCurPos
==============
*/

bool __fastcall AINavigator3D::TraceFromCurPos(AINavigator3D *this, const vec3_t *endPos)
{
  return ?TraceFromCurPos@AINavigator3D@@UEBA_NAEBTvec3_t@@@Z(this, endPos);
}

/*
==============
AINavigator3D::GetPathDistToGoal
==============
*/

double __fastcall AINavigator3D::GetPathDistToGoal(AINavigator3D *this)
{
  double result; 

  *(float *)&result = ?GetPathDistToGoal@AINavigator3D@@UEBAMXZ(this);
  return result;
}

/*
==============
AINavigator3D::CalculateNextNCorners
==============
*/

int __fastcall AINavigator3D::CalculateNextNCorners(AINavigator3D *this, nav_cornerdata_3D_t *pOutCorners, int *pOutLastSegments, int maxCorners, float pathDistThreshold, int startSegment, bool bGetCornerAfterThreshold)
{
  return ?CalculateNextNCorners@AINavigator3D@@IEBAHPEAUnav_cornerdata_3D_t@@PEAHHMH_N@Z(this, pOutCorners, pOutLastSegments, maxCorners, pathDistThreshold, startSegment, bGetCornerAfterThreshold);
}

/*
==============
AINavigator3D::IsStraightLineReachable
==============
*/

bool __fastcall AINavigator3D::IsStraightLineReachable(AINavigator3D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return ?IsStraightLineReachable@AINavigator3D@@UEBA_NAEBTvec3_t@@0@Z(this, startPos, endPos);
}

/*
==============
AINavigator3D::SetPath
==============
*/

void __fastcall AINavigator3D::SetPath(AINavigator3D *this, const bfx::PolylinePath3DRCPtr *path, const nav_pathfind_3D_input_t *pInput)
{
  ?SetPath@AINavigator3D@@QEAAXAEBVPolylinePath3DRCPtr@bfx@@PEBUnav_pathfind_3D_input_t@@@Z(this, path, pInput);
}

/*
==============
AINavigator3D::SnapPosToClosestVerticalPos
==============
*/

bool __fastcall AINavigator3D::SnapPosToClosestVerticalPos(AINavigator3D *this, const vec3_t *pos, vec3_t *outSnappedPos)
{
  return ?SnapPosToClosestVerticalPos@AINavigator3D@@IEBA_NAEBTvec3_t@@AEAT2@@Z(this, pos, outSnappedPos);
}

/*
==============
AINavigator3D::Trace
==============
*/

bool __fastcall AINavigator3D::Trace(AINavigator3D *this, const vec3_t *startPos, const vec3_t *endPos, vec3_t *outHitPos)
{
  return ?Trace@AINavigator3D@@UEBA_NAEBTvec3_t@@0AEAT2@@Z(this, startPos, endPos, outHitPos);
}

/*
==============
AINavigator3D::GetNextCorner
==============
*/

void __fastcall AINavigator3D::GetNextCorner(AINavigator3D *this, vec3_t *corner)
{
  ?GetNextCorner@AINavigator3D@@UEBAXAEATvec3_t@@@Z(this, corner);
}

/*
==============
AINavigator3D::IsPathLengthAtLeast
==============
*/

bool __fastcall AINavigator3D::IsPathLengthAtLeast(AINavigator3D *this, float dist)
{
  return ?IsPathLengthAtLeast@AINavigator3D@@UEBA_NM@Z(this, dist);
}

/*
==============
AINavigator3D::AINavigator3D
==============
*/
void AINavigator3D::AINavigator3D(AINavigator3D *this, gentity_s *pEnt, AINavLayer layer, bool allowOffMeshSpawn)
{
  bfx::VolumeHandle v7; 
  bool v8; 
  AINavigator_vtbl *v9; 
  scrContext_t *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  bfx::VolumeHandle pClosestVolume; 
  __int64 v15; 
  AINavigator3D *v16; 
  vec3_t outClosestPos; 
  vec3_t v18; 

  v15 = -2i64;
  v16 = this;
  AINavigator::AINavigator(this, pEnt, layer);
  this->__vftable = (AINavigator_vtbl *)&AINavigator3D::`vftable';
  bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(&this->m_Path);
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_volumeUsageFlags = -1i64;
  this->m_PathSpecOfCurPath.m_maxSearchDist = 0.0;
  *(_QWORD *)&this->m_PathSpec.m_volumeUsageFlags = -1i64;
  this->m_PathSpec.m_maxSearchDist = 0.0;
  bfx::VolumeHandle::VolumeHandle(&this->m_hGoalVolume);
  bfx::VolumeHandle::VolumeHandle(&this->m_hCurVolume);
  `eh vector constructor iterator'(this->m_CachedCorners, 0x18ui64, 5ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::nav_cornerdata_3D_t, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
  *(_QWORD *)&this->m_PathSpec.m_volumeUsageFlags = -1i64;
  this->m_PathSpec.m_maxSearchDist = 0.0;
  this->m_bSnapGoalToClosestVerticalPos = 0;
  this->m_PrevCornerSegment = 0;
  this->m_pSpace = Nav_GetDefaultSpace();
  this->ClearPath(this);
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 811, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  Nav3D_GetClosestVolume(this->m_pSpace, &this->m_CurSnappedPos, &this->m_PathSpec, &pClosestVolume);
  if ( bfx::VolumeHandle::IsValid(&pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle((bfx::VolumeHandle *)&v18, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(&this->m_CurSnappedPos, v7, &outClosestPos);
  }
  else
  {
    outClosestPos = this->m_CurSnappedPos;
  }
  v8 = 0;
  if ( this->m_bPathRequested && bfx::VolumeHandle::IsValid(&pClosestVolume) )
    v8 = !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) || !AINavigator3D::UpdateCurSegment(this, &outClosestPos, &pClosestVolume);
  this->m_CurSnappedPos = outClosestPos;
  bfx::VolumeHandle::operator=(&this->m_hCurVolume, &pClosestVolume);
  v9 = this->__vftable;
  if ( v8 )
  {
    if ( !v9->DoPathFind(this) )
    {
      this->GetRequestedGoalPos(this, &v18);
      AINavigator::BadPathNotify(this, &v18);
      this->m_TimeOfLastPathFindFail = level.time;
    }
  }
  else
  {
    v9->UpdatePathOutOfBounds(this);
  }
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  if ( !allowOffMeshSpawn && !Nav3D_IsPointOnMesh(this->m_pSpace, &pEnt->r.currentOrigin, &this->m_PathSpec) )
  {
    v10 = ScriptContext_Server();
    v11 = vtos(&pEnt->r.currentOrigin);
    v12 = SL_ConvertToString(pEnt->classname);
    v13 = j_va("Creating a 3D Navigator on entity '%s' at location %s outside of all Nav Volumes", v12, v11);
    Scr_Error(COM_ERR_5288, v10, v13);
  }
}

/*
==============
AINavigator3D::AINavigator3D
==============
*/
void AINavigator3D::AINavigator3D(AINavigator3D *this)
{
  AINavigator::AINavigator(this);
  this->__vftable = (AINavigator_vtbl *)&AINavigator3D::`vftable';
  bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(&this->m_Path);
  *(_QWORD *)&this->m_PathSpecOfCurPath.m_volumeUsageFlags = -1i64;
  this->m_PathSpecOfCurPath.m_maxSearchDist = 0.0;
  *(_QWORD *)&this->m_PathSpec.m_volumeUsageFlags = -1i64;
  this->m_PathSpec.m_maxSearchDist = 0.0;
  bfx::VolumeHandle::VolumeHandle(&this->m_hGoalVolume);
  bfx::VolumeHandle::VolumeHandle(&this->m_hCurVolume);
  `eh vector constructor iterator'(this->m_CachedCorners, 0x18ui64, 5ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::nav_cornerdata_3D_t, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
  *(_QWORD *)&this->m_PathSpec.m_volumeUsageFlags = -1i64;
  this->m_PathSpec.m_maxSearchDist = 0.0;
  this->m_bSnapGoalToClosestVerticalPos = 0;
}

/*
==============
AINavigator3D::AddMultiGoalPathGoal
==============
*/
bool AINavigator3D::AddMultiGoalPathGoal(AINavigator3D *this, const vec3_t *goalPos)
{
  return 0;
}

/*
==============
AINavigator3D::CacheOneMoreCorner
==============
*/
bool AINavigator3D::CacheOneMoreCorner(AINavigator3D *this)
{
  __int64 m_LastCachedCornerIdx; 
  int v3; 
  int NCorners; 
  int v5; 
  int startSegmenta; 
  __int64 startSegment; 
  int bGetCornerAfterThreshold; 

  m_LastCachedCornerIdx = this->m_LastCachedCornerIdx;
  if ( this->m_CachedCorners[m_LastCachedCornerIdx].m_bIsGoal )
    return 0;
  v3 = ((int)m_LastCachedCornerIdx + 1) % 5;
  if ( v3 == this->m_CurCachedCornerIdx )
  {
    bGetCornerAfterThreshold = this->m_CurCachedCornerIdx;
    startSegmenta = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 794, ASSERT_TYPE_ASSERT, "( nextLastCorner ) != ( m_CurCachedCornerIdx )", "nextLastCorner != m_CurCachedCornerIdx\n\t%i, %i", startSegmenta, bGetCornerAfterThreshold) )
      __debugbreak();
  }
  NCorners = AINavigator3D::CalculateNextNCorners(this, &this->m_CachedCorners[v3], &this->m_CachedCornersLastSegment[v3], 1, 0.0, this->m_CachedCornersLastSegment[this->m_LastCachedCornerIdx] + 1, 1);
  v5 = NCorners;
  if ( NCorners <= 0 )
  {
    LODWORD(startSegment) = NCorners;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 800, ASSERT_TYPE_ASSERT, "( nCornersAdded ) > ( 0 )", "nCornersAdded > 0\n\t%i, %i", startSegment, 0i64) )
      __debugbreak();
    return v5 > 0;
  }
  else
  {
    this->m_LastCachedCornerIdx = v3;
    return NCorners > 0;
  }
}

/*
==============
AINavigator3D::CalculateNextNCorners
==============
*/
__int64 AINavigator3D::CalculateNextNCorners(AINavigator3D *this, nav_cornerdata_3D_t *pOutCorners, int *pOutLastSegments, int maxCorners, float pathDistThreshold, int startSegment)
{
  void *v6; 
  bfx::PolylinePath3DRCPtr *p_m_Path; 
  unsigned int v11; 
  __int128 v12; 
  unsigned int NumSegments; 
  int v17; 
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *v19; 
  float m_z; 
  float m_y; 
  const bfx::VolumeHandle *Volume; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  bfx::VolumePathSegment *v26; 
  const bfx::Vector3 *v27; 
  float v28; 
  float v29; 
  float m_x; 
  const bfx::Vector3 *v31; 
  float v32; 
  float v33; 
  float v34; 
  const bfx::VolumeHandle *v35; 
  __int128 v36; 
  const bfx::VolumeHandle *v37; 
  __int64 v38; 
  __int64 v39; 
  bfx::VolumeHandle rhs; 
  bfx::VolumeHandle result; 
  __int64 v42; 
  nav_cornerdata_3D_t *v43; 
  AINavigator3D *v44; 
  bfx::VolumeHandle v45; 
  bfx::VolumeHandle v46; 
  bfx::PolylinePath3DRCPtr *v47; 
  __int64 v48; 
  vec3_t startPos; 
  vec3_t endPos; 

  v48 = -2i64;
  v6 = (void *)maxCorners;
  v43 = pOutCorners;
  v44 = this;
  LODWORD(v42) = startSegment;
  if ( !pOutCorners && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 588, ASSERT_TYPE_ASSERT, "( pOutCorners )", (const char *)&queryFormat, "pOutCorners") )
    __debugbreak();
  p_m_Path = &this->m_Path;
  v47 = &this->m_Path;
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    return 0i64;
  v11 = 0;
  if ( (int)v6 <= 0 )
  {
    LODWORD(v38) = (_DWORD)v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 593, ASSERT_TYPE_ASSERT, "( maxCorners ) > ( 0 )", "maxCorners > 0\n\t%i, %i", v38, 0i64) )
      __debugbreak();
  }
  v12 = 0i64;
  _XMM2 = LODWORD(pathDistThreshold);
  __asm
  {
    vcmpless xmm1, xmm2, xmm10
    vblendvps xmm0, xmm2, xmm0, xmm1
  }
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path);
  v17 = NumSegments;
  if ( startSegment >= NumSegments )
  {
    LODWORD(v39) = NumSegments;
    LODWORD(v38) = startSegment;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 600, ASSERT_TYPE_ASSERT, "(unsigned)( startSegment ) < (unsigned)( numSegments )", "startSegment doesn't index numSegments\n\t%i not in [0, %i)", v38, v39) )
      __debugbreak();
  }
  bfx::VolumeHandle::VolumeHandle(&rhs);
  if ( startSegment == this->m_CurSegment )
  {
    this->GetCurPos(this, &startPos);
    bfx::VolumeHandle::operator=(&rhs, &this->m_hCurVolume);
  }
  else
  {
    Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, startSegment);
    if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 616, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    v19 = bfx::VolumePathSegment::GetStartPos(Segment);
    m_z = v19->m_z;
    m_y = v19->m_y;
    startPos.v[0] = v19->m_x;
    startPos.v[1] = m_y;
    startPos.v[2] = m_z;
    Volume = bfx::VolumePathSegment::GetVolume(Segment, &result);
    bfx::VolumeHandle::operator=(&rhs, Volume);
    bfx::VolumeHandle::~VolumeHandle(&result);
  }
  v23 = startSegment;
  if ( startSegment < v17 )
  {
    result.m_pProxy = v6;
    v24 = 0i64;
    v25 = (__int64)v43;
    while ( 1 )
    {
      v26 = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(p_m_Path, v23);
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 629, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
        __debugbreak();
      v27 = bfx::VolumePathSegment::GetStartPos(v26);
      v28 = v27->m_z;
      v29 = v27->m_y;
      m_x = v27->m_x;
      v31 = bfx::VolumePathSegment::GetEndPos(v26);
      v32 = v31->m_z;
      v33 = v31->m_y;
      v34 = v31->m_x;
      endPos.v[0] = v31->m_x;
      endPos.v[1] = v33;
      endPos.v[2] = v32;
      if ( v23 != (_DWORD)v42 )
      {
        if ( !bfx::VolumeHandle::IsValid(&rhs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 636, ASSERT_TYPE_ASSERT, "( prevVolume.IsValid() )", (const char *)&queryFormat, "prevVolume.IsValid()") )
          __debugbreak();
        if ( !Nav3D_IsStraightLineReachable(v44->m_pSpace, &startPos, &endPos, &v44->m_PathSpecOfCurPath) )
        {
          if ( !bfx::VolumeHandle::IsValid(&rhs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 642, ASSERT_TYPE_ASSERT, "( prevVolume.IsValid() )", (const char *)&queryFormat, "prevVolume.IsValid()") )
            __debugbreak();
          *(float *)v25 = m_x;
          *(float *)(v25 + 4) = v29;
          *(float *)(v25 + 8) = v28;
          bfx::VolumeHandle::operator=(&v43[v11].m_hVolume, &rhs);
          *(_BYTE *)(v25 + 20) = 0;
          if ( pOutLastSegments )
          {
            if ( v23 - 1 >= (unsigned int)v17 )
            {
              LODWORD(v39) = v17;
              LODWORD(v38) = v23 - 1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 650, ASSERT_TYPE_ASSERT, "(unsigned)( iSegment - 1 ) < (unsigned)( numSegments )", "iSegment - 1 doesn't index numSegments\n\t%i not in [0, %i)", v38, v39) )
                __debugbreak();
            }
            pOutLastSegments[v24] = v23 - 1;
          }
          ++v11;
          ++v24;
          v25 += 24i64;
          startPos.v[0] = m_x;
          startPos.v[1] = v29;
          startPos.v[2] = v28;
          v35 = bfx::VolumePathSegment::GetVolume(v26, &v45);
          bfx::VolumeHandle::operator=(&rhs, v35);
          bfx::VolumeHandle::~VolumeHandle(&v45);
          if ( v24 >= (__int64)result.m_pProxy )
            break;
        }
        v32 = endPos.v[2];
        v33 = endPos.v[1];
        v34 = endPos.v[0];
      }
      v36 = v12;
      *(float *)&v36 = *(float *)&v12 + fsqrt((float)((float)((float)(v34 - m_x) * (float)(v34 - m_x)) + (float)((float)(v33 - v29) * (float)(v33 - v29))) + (float)((float)(v32 - v28) * (float)(v32 - v28)));
      v12 = v36;
      if ( *(float *)&v36 <= *(float *)&_XMM0 )
      {
        if ( v23 != v17 - 1 )
          goto LABEL_43;
        *(float *)v25 = v34;
        *(float *)(v25 + 4) = v33;
        *(float *)(v25 + 8) = v32;
        v37 = bfx::VolumePathSegment::GetVolume(v26, &v46);
        bfx::VolumeHandle::operator=(&v43[v11].m_hVolume, v37);
        bfx::VolumeHandle::~VolumeHandle(&v46);
        *(_BYTE *)(v25 + 20) = 1;
        if ( pOutLastSegments )
          pOutLastSegments[v24] = v23;
        ++v11;
        ++v24;
        v25 += 24i64;
        if ( v24 < (__int64)result.m_pProxy )
        {
LABEL_43:
          ++v23;
          p_m_Path = v47;
          if ( v23 < v17 )
            continue;
        }
      }
      break;
    }
  }
  bfx::VolumeHandle::~VolumeHandle(&rhs);
  return v11;
}

/*
==============
AINavigator3D::CanAddMultiGoalPathGoal
==============
*/
bool AINavigator3D::CanAddMultiGoalPathGoal(AINavigator3D *this)
{
  return 0;
}

/*
==============
AINavigator3D::CleanupAll
==============
*/
void AINavigator3D::CleanupAll(void)
{
  unsigned int v0; 
  bool *p_m_bInUse; 
  char *v2; 
  bfx::VolumeHandle *v3; 
  __int64 v4; 

  v0 = 0;
  p_m_bInUse = &s_Navigators3D.m_bInUse;
  do
  {
    if ( *p_m_bInUse )
    {
      v2 = (char *)&s_Navigators3D + 424 * (int)v0;
      AINavigator::Free((AINavigator *)v2);
      bfx::PolylinePath3DRCPtr::Release((bfx::PolylinePath3DRCPtr *)v2 + 25);
      bfx::VolumeHandle::Release((bfx::VolumeHandle *)v2 + 30);
      bfx::VolumeHandle::Release((bfx::VolumeHandle *)v2 + 29);
      v3 = (bfx::VolumeHandle *)(v2 + 260);
      v4 = 5i64;
      do
      {
        bfx::VolumeHandle::Release(v3);
        v3 += 3;
        --v4;
      }
      while ( v4 );
    }
    ++v0;
    p_m_bInUse += 424;
  }
  while ( v0 < 0x110 );
}

/*
==============
AINavigator3D::ClearGoal
==============
*/
void AINavigator3D::ClearGoal(AINavigator3D *this)
{
  AINavigator::ClearGoal(this);
  bfx::VolumeHandle::operator=(&this->m_hGoalVolume, &this->m_hCurVolume);
}

/*
==============
AINavigator3D::ClearNavigatorsFromSpace
==============
*/
void AINavigator3D::ClearNavigatorsFromSpace(nav_space_s *pOldSpace, nav_space_s *pNewSpace)
{
  signed int maxSentients; 
  __int64 v5; 
  AINavigator *v6; 
  nav_space_s *m_pSpace; 
  nav_space_s *v8; 
  nav_space_s *(__fastcall *FindMostLikelySpace)(AINavigator *, const vec3_t *, const AINavLayer, nav_space_s *); 
  AINavLayer Layer; 

  maxSentients = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 71, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators3D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators3D )\n\t%i, %i", level.maxSentients, 272) )
      __debugbreak();
    maxSentients = level.maxSentients;
  }
  v5 = maxSentients;
  if ( maxSentients > 0 )
  {
    v6 = &s_Navigators3D;
    do
    {
      if ( v6->m_bInUse )
      {
        m_pSpace = v6->m_pSpace;
        if ( m_pSpace == pOldSpace )
        {
          if ( pNewSpace )
          {
            v8 = pNewSpace;
          }
          else
          {
            FindMostLikelySpace = v6->FindMostLikelySpace;
            Layer = Nav_GetLayer(v6);
            v8 = FindMostLikelySpace(v6, &v6->m_CurSnappedPos, (const AINavLayer)Layer, m_pSpace);
          }
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1279, ASSERT_TYPE_ASSERT, "( pDestinationSpace )", (const char *)&queryFormat, "pDestinationSpace") )
            __debugbreak();
          Nav_MoveNavigatorToSpace(v6, v8);
        }
      }
      v6 = (AINavigator *)((char *)v6 + 424);
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
AINavigator3D::ClearPath
==============
*/
void AINavigator3D::ClearPath(AINavigator3D *this)
{
  AINavigator::ClearPath(this);
  bfx::PolylinePath3DRCPtr::Release(&this->m_Path);
  this->m_CurSegment = 0;
}

/*
==============
AINavigator3D::ConvertCornerData
==============
*/
void AINavigator3D::ConvertCornerData(AINavigator3D *this, const nav_cornerdata_3D_t *fromCorner, nav_cornerdata_t *pToCorner)
{
  if ( !pToCorner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1224, ASSERT_TYPE_ASSERT, "( pToCorner )", (const char *)&queryFormat, "pToCorner") )
    __debugbreak();
  pToCorner->m_Pos.v[0] = fromCorner->m_Pos.v[0];
  pToCorner->m_Pos.v[1] = fromCorner->m_Pos.v[1];
  *(_QWORD *)&pToCorner->m_Pos.z = LODWORD(fromCorner->m_Pos.v[2]);
  bfx::LinkHandle::Release(&pToCorner->m_hLink);
  pToCorner->m_bBackwardsLink = 0;
  pToCorner->m_bIsGoal = fromCorner->m_bIsGoal;
  pToCorner->m_pathPointIndex = -1;
}

/*
==============
AINavigator3D::DoPathFind
==============
*/
__int64 AINavigator3D::DoPathFind(AINavigator3D *this)
{
  bfx::VolumeHandle v2; 
  unsigned int NumSegments; 
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *EndPos; 
  AINavigator3D *v6; 
  unsigned __int8 v7; 
  bfx::PolylinePath3DRCPtr result; 
  bfx::VolumeHandle pClosestVolume; 
  bfx::VolumeHandle v11; 
  __int64 v12; 
  nav_pathfind_3D_input_t pInput; 
  vec3_t outSnappedPos; 
  vec3_t pos; 
  int v16[4]; 

  v12 = -2i64;
  this->GetCurPos(this, (vec3_t *)v16);
  this->GetRequestedGoalPos(this, &pos);
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  if ( this->m_bSnapGoalToClosestVerticalPos )
  {
    AINavigator3D::SnapPosToClosestVerticalPos(this, &pos, &outSnappedPos);
    Nav3D_GetClosestVolume(this->m_pSpace, &outSnappedPos, &this->m_PathSpec, &pClosestVolume);
  }
  else
  {
    Nav3D_GetClosestVolume(this->m_pSpace, &pos, &this->m_PathSpec, &pClosestVolume);
    bfx::VolumeHandle::VolumeHandle(&v11, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(&pos, v2, &outSnappedPos);
  }
  this->m_SnappedGoalPos = outSnappedPos;
  bfx::VolumeHandle::VolumeHandle(&pInput.m_hStartVolume);
  bfx::VolumeHandle::VolumeHandle(&pInput.m_hGoalVolume);
  pInput.m_StartPos.v[0] = *(float *)v16;
  pInput.m_StartPos.v[1] = *(float *)&v16[1];
  pInput.m_StartPos.v[2] = *(float *)&v16[2];
  pInput.m_GoalPos = outSnappedPos;
  bfx::VolumeHandle::operator=(&pInput.m_hStartVolume, &this->m_hCurVolume);
  bfx::VolumeHandle::operator=(&pInput.m_hGoalVolume, &pClosestVolume);
  bfx::VolumeHandle::operator=(&this->m_hGoalVolume, &pClosestVolume);
  pInput.m_bSnapPoints = 0;
  pInput.m_pPathSpec = &this->m_PathSpec;
  AINavigator3D::FindPath(this, &result, &pInput);
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&result) )
  {
    v6 = this;
LABEL_14:
    this->ClearPath(v6);
    v7 = 0;
    goto LABEL_15;
  }
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 915, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&result);
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&result, NumSegments - 1);
  if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 920, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
    __debugbreak();
  EndPos = bfx::VolumePathSegment::GetEndPos(Segment);
  v6 = this;
  if ( (float)((float)((float)((float)(outSnappedPos.v[1] - EndPos->m_y) * (float)(outSnappedPos.v[1] - EndPos->m_y)) + (float)((float)(outSnappedPos.v[0] - EndPos->m_x) * (float)(outSnappedPos.v[0] - EndPos->m_x))) + (float)((float)(outSnappedPos.v[2] - EndPos->m_z) * (float)(outSnappedPos.v[2] - EndPos->m_z))) > 4.0 )
    goto LABEL_14;
  AINavigator3D::SetPath(this, &result, &pInput);
  v7 = 1;
LABEL_15:
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr(&result);
  bfx::VolumeHandle::~VolumeHandle(&pInput.m_hGoalVolume);
  bfx::VolumeHandle::~VolumeHandle(&pInput.m_hStartVolume);
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v7;
}

/*
==============
AINavigator3D::DrawPath
==============
*/
void AINavigator3D::DrawPath(AINavigator3D *this, int mode)
{
  const dvar_t *v4; 
  signed int NumSegments; 
  int i; 
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *v8; 
  float m_z; 
  float m_y; 
  const bfx::Vector3 *v11; 
  float v12; 
  float v13; 
  nav_space_s *DefaultSpace; 
  bool IsStraightLineReachable; 
  const vec4_t *v16; 
  int NCorners; 
  __int64 v18; 
  float *v19; 
  nav_space_s *v20; 
  bool v21; 
  const vec4_t *v22; 
  vec3_t end; 
  vec3_t start; 
  vec3_t endPos; 
  vec3_t startPos; 
  nav_cornerdata_3D_t ptr[32]; 

  if ( bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
  {
    v4 = DCONST_DVARBOOL_ai_showBfxPath;
    if ( !DCONST_DVARBOOL_ai_showBfxPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showBfxPath") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path);
      for ( i = this->m_CurSegment; i < NumSegments; ++i )
      {
        Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, i);
        v8 = bfx::VolumePathSegment::GetStartPos(Segment);
        m_z = v8->m_z;
        m_y = v8->m_y;
        startPos.v[0] = v8->m_x;
        startPos.v[1] = m_y;
        startPos.v[2] = m_z;
        v11 = bfx::VolumePathSegment::GetEndPos(Segment);
        v12 = v11->m_z;
        v13 = v11->m_y;
        endPos.v[0] = v11->m_x;
        endPos.v[1] = v13;
        endPos.v[2] = v12;
        if ( mode < 3 || (DefaultSpace = Nav_GetDefaultSpace(), IsStraightLineReachable = Nav3D_IsStraightLineReachable(DefaultSpace, &startPos, &endPos, &this->m_PathSpecOfCurPath), v16 = &colorRed, IsStraightLineReachable) )
          v16 = &colorBlue;
        G_DebugLine(&startPos, &endPos, v16, 0);
      }
    }
    `eh vector constructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::nav_cornerdata_3D_t, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
    NCorners = AINavigator3D::CalculateNextNCorners(this, ptr, NULL, 32, 9999999.0, this->m_CurSegment, 1);
    start = this->m_CurSnappedPos;
    v18 = NCorners;
    if ( NCorners > 0 )
    {
      v19 = &ptr[0].m_Pos.v[2];
      do
      {
        end = *(vec3_t *)(v19 - 2);
        if ( mode < 3 || (v20 = Nav_GetDefaultSpace(), v21 = Nav3D_IsStraightLineReachable(v20, &start, &end, &this->m_PathSpecOfCurPath), v22 = &colorRed, v21) )
          v22 = &colorMagenta;
        G_DebugLine(&start, &end, v22, 0);
        G_DebugCircle(&end, 6.0, &colorMagenta, 0, 1, 1);
        start = end;
        v19 += 6;
        --v18;
      }
      while ( v18 );
    }
    `eh vector destructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
  }
}

/*
==============
AINavigator3D::FindMostLikelySpace
==============
*/

nav_space_s *__fastcall AINavigator3D::FindMostLikelySpace(AINavigator3D *this, const vec3_t *pos, const AINavLayer layer, nav_space_s *pIgnoreSpace)
{
  return Nav_GetDefaultSpace();
}

/*
==============
AINavigator3D::FindPath
==============
*/
bfx::PolylinePath3DRCPtr *AINavigator3D::FindPath(AINavigator3D *this, bfx::PolylinePath3DRCPtr *result, const nav_pathfind_3D_input_t *pInput)
{
  bfx::Path3DSpec *m_pPathSpec; 
  const bfx::VolumeHandle *ClosestVolume; 
  const bfx::VolumeHandle *v8; 
  const bfx::PolylinePath3DRCPtr *Path3DCustom; 
  bfx::Vector3 pos; 
  bfx::Vector3 m_GoalPos; 
  bfx::VolumeHandle v13; 
  bfx::PolylinePath3DRCPtr *v14; 
  bfx::VolumeHandle v15; 
  bfx::VolumeHandle resulta; 

  v14 = result;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 932, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&v15);
  bfx::VolumeHandle::VolumeHandle(&v13);
  pos = (bfx::Vector3)pInput->m_StartPos;
  m_GoalPos = (bfx::Vector3)pInput->m_GoalPos;
  m_pPathSpec = pInput->m_pPathSpec;
  if ( !m_pPathSpec )
    m_pPathSpec = &this->m_PathSpec;
  if ( bfx::VolumeHandle::IsValid(&pInput->m_hStartVolume) )
  {
    bfx::VolumeHandle::operator=(&v15, &pInput->m_hStartVolume);
  }
  else if ( !bfx::VolumeHandle::IsValid(&v15) )
  {
    ClosestVolume = bfx::GetClosestVolume(&resulta, &this->m_pSpace->hSpace, &pos, m_pPathSpec);
    bfx::VolumeHandle::operator=(&v15, ClosestVolume);
    bfx::VolumeHandle::~VolumeHandle(&resulta);
  }
  if ( !bfx::VolumeHandle::IsValid(&v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 959, ASSERT_TYPE_ASSERT, "( hStartVolume.IsValid() )", (const char *)&queryFormat, "hStartVolume.IsValid()") )
    __debugbreak();
  if ( bfx::VolumeHandle::IsValid(&pInput->m_hGoalVolume) )
  {
    bfx::VolumeHandle::operator=(&v13, &pInput->m_hGoalVolume);
  }
  else if ( !bfx::VolumeHandle::IsValid(&v13) )
  {
    v8 = bfx::GetClosestVolume(&resulta, &this->m_pSpace->hSpace, &m_GoalPos, m_pPathSpec);
    bfx::VolumeHandle::operator=(&v13, v8);
    bfx::VolumeHandle::~VolumeHandle(&resulta);
  }
  if ( !bfx::VolumeHandle::IsValid(&v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 969, ASSERT_TYPE_ASSERT, "( hGoalVolume.IsValid() )", (const char *)&queryFormat, "hGoalVolume.IsValid()") )
    __debugbreak();
  bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(result);
  Path3DCustom = Nav_FindPath3DCustom((bfx::PolylinePath3DRCPtr *)&resulta, this->m_pSpace, &pInput->m_StartPos, &pInput->m_GoalPos, m_pPathSpec->m_volumeUsageFlags, m_pPathSpec->m_applyPenaltyFlags, m_pPathSpec->m_maxSearchDist);
  bfx::PolylinePath3DRCPtr::operator=(result, Path3DCustom);
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr((bfx::PolylinePath3DRCPtr *)&resulta);
  bfx::VolumeHandle::~VolumeHandle(&v13);
  bfx::VolumeHandle::~VolumeHandle(&v15);
  return result;
}

/*
==============
AINavigator3D::Free
==============
*/
void AINavigator3D::Free(AINavigator3D *this)
{
  bfx::VolumeHandle *p_m_hVolume; 
  __int64 v3; 

  AINavigator::Free(this);
  bfx::PolylinePath3DRCPtr::Release(&this->m_Path);
  bfx::VolumeHandle::Release(&this->m_hCurVolume);
  bfx::VolumeHandle::Release(&this->m_hGoalVolume);
  p_m_hVolume = &this->m_CachedCorners[0].m_hVolume;
  v3 = 5i64;
  do
  {
    bfx::VolumeHandle::Release(p_m_hVolume);
    p_m_hVolume += 3;
    --v3;
  }
  while ( v3 );
}

/*
==============
AINavigator3D::GetClosestReachablePoint
==============
*/
void AINavigator3D::GetClosestReachablePoint(AINavigator3D *this, const vec3_t *pos, vec3_t *closestPos)
{
  double v3; 
  bfx::VolumeHandle v6; 
  bfx::VolumeHandle v7; 
  vec3_t origin; 

  v3 = *(double *)pos->v;
  origin.v[2] = pos->v[2];
  *(double *)origin.v = v3;
  bfx::VolumeHandle::VolumeHandle(&v7, &this->m_hCurVolume);
  Nav3D_GetClosestReachablePos(v6, &origin, &this->m_PathSpec, closestPos);
}

/*
==============
AINavigator3D::GetFinalPathPoint
==============
*/
void AINavigator3D::GetFinalPathPoint(AINavigator3D *this, const bfx::PolylinePath3DRCPtr *path, vec3_t *outPoint)
{
  unsigned int NumSegments; 
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *EndPos; 
  float m_z; 
  float m_y; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid((bfx::PolylinePath3DRCPtr *)path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 915, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments((bfx::PolylinePath3DRCPtr *)path);
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment((bfx::PolylinePath3DRCPtr *)path, NumSegments - 1);
  if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 920, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
    __debugbreak();
  EndPos = bfx::VolumePathSegment::GetEndPos(Segment);
  m_z = EndPos->m_z;
  m_y = EndPos->m_y;
  *(float *)&EndPos = EndPos->m_x;
  outPoint->v[1] = m_y;
  outPoint->v[2] = m_z;
  LODWORD(outPoint->v[0]) = (_DWORD)EndPos;
}

/*
==============
AINavigator3D::GetFinalPathPoint
==============
*/
void AINavigator3D::GetFinalPathPoint(AINavigator3D *this, vec3_t *outPoint)
{
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 926, ASSERT_TYPE_ASSERT, "( m_Path.IsValid() )", (const char *)&queryFormat, "m_Path.IsValid()") )
    __debugbreak();
  AINavigator3D::GetFinalPathPoint(this, &this->m_Path, outPoint);
}

/*
==============
AINavigator3D::GetNavIndex
==============
*/
signed __int64 AINavigator3D::GetNavIndex(AINavigator3D *this)
{
  return ((char *)this - (char *)&s_Navigators3D) / 424;
}

/*
==============
AINavigator3D::GetNextCorner
==============
*/
void AINavigator3D::GetNextCorner(AINavigator3D *this, vec3_t *corner)
{
  __int64 m_CurCachedCornerIdx; 
  __int64 v5; 
  int v6; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 564, ASSERT_TYPE_ASSERT, "( m_Path.IsValid() )", (const char *)&queryFormat, "m_Path.IsValid()") )
    __debugbreak();
  if ( this->m_CurCachedCornerIdx >= 5u )
  {
    v6 = 5;
    LODWORD(v5) = this->m_CurCachedCornerIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 565, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurCachedCornerIdx ) < (unsigned)( cMaxNumCachedCorners )", "m_CurCachedCornerIdx doesn't index cMaxNumCachedCorners\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  m_CurCachedCornerIdx = this->m_CurCachedCornerIdx;
  corner->v[0] = this->m_CachedCorners[this->m_CurCachedCornerIdx].m_Pos.v[0];
  corner->v[1] = this->m_CachedCorners[m_CurCachedCornerIdx].m_Pos.v[1];
  corner->v[2] = this->m_CachedCorners[m_CurCachedCornerIdx].m_Pos.v[2];
}

/*
==============
AINavigator3D::GetNextMultiGoalPathGoal
==============
*/
unsigned __int8 AINavigator3D::GetNextMultiGoalPathGoal(AINavigator3D *this, unsigned __int8 prevPoint, vec3_t *outPoint, bool *pbOutIsPathPoint)
{
  return -1;
}

/*
==============
AINavigator3D::GetNextNCorners
==============
*/

__int64 __fastcall AINavigator3D::GetNextNCorners(AINavigator3D *this, nav_cornerdata_t *pOutCorners, int maxCorners, double pathDistThreshold, bool bGetCornerAfterThreshold)
{
  nav_cornerdata_t *v7; 
  __int64 v10; 
  __int128 v11; 
  int v14; 
  int v15; 
  int m_LastCachedCornerIdx; 
  unsigned int v17; 
  float *v18; 
  int v19; 
  __int64 v20; 
  nav_cornerdata_3D_t *v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  int NCorners; 
  const nav_cornerdata_3D_t *v26; 
  __int64 v27; 
  __int64 startSegment; 
  __int64 startSegmenta; 
  __int64 v30; 
  __int64 v31; 
  int v32; 
  int v33; 
  __int64 v35; 
  float v36; 
  float v37; 
  float v38; 
  nav_cornerdata_3D_t ptr[32]; 

  _XMM6 = *(_OWORD *)&pathDistThreshold;
  v7 = pOutCorners;
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    return 0i64;
  v10 = 0i64;
  if ( maxCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 494, ASSERT_TYPE_ASSERT, "( maxCorners ) > ( 0 )", "maxCorners > 0\n\t%i, %i", maxCorners, 0i64) )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 495, ASSERT_TYPE_ASSERT, "( pOutCorners )", (const char *)&queryFormat, "pOutCorners") )
    __debugbreak();
  v11 = 0i64;
  __asm
  {
    vcmpless xmm1, xmm6, xmm7
    vblendvps xmm6, xmm6, xmm0, xmm1
  }
  v14 = 5;
  if ( maxCorners < 5 )
    v14 = maxCorners;
  v15 = maxCorners - 5;
  if ( maxCorners - 5 < 0 )
    v15 = 0;
  v32 = v15;
  this->GetCurPos(this, (vec3_t *)&v36);
  m_LastCachedCornerIdx = this->m_LastCachedCornerIdx;
  v17 = 0;
  v35 = v14;
  if ( v14 <= 0 )
  {
LABEL_25:
    if ( v15 > 0 )
    {
      if ( v15 > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 539, ASSERT_TYPE_ASSERT, "(numAdditionalCorners <= cMaxCorners)", "%s\n\tToo many corners requested.  Increase local stack.", "numAdditionalCorners <= cMaxCorners") )
        __debugbreak();
      `eh vector constructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::nav_cornerdata_3D_t, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
      NCorners = AINavigator3D::CalculateNextNCorners(this, ptr, NULL, v15, *(float *)&_XMM6 - *(float *)&v11, this->m_CachedCornersLastSegment[m_LastCachedCornerIdx] + 1, bGetCornerAfterThreshold);
      if ( NCorners > 0 )
      {
        v26 = ptr;
        v27 = (unsigned int)NCorners;
        do
        {
          if ( v17 >= maxCorners )
          {
            LODWORD(v31) = maxCorners;
            LODWORD(startSegmenta) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 546, ASSERT_TYPE_ASSERT, "(unsigned)( numCorners ) < (unsigned)( maxCorners )", "numCorners doesn't index maxCorners\n\t%i not in [0, %i)", startSegmenta, v31) )
              __debugbreak();
          }
          AINavigator3D::ConvertCornerData(this, v26++, &v7[v17++]);
          --v27;
        }
        while ( v27 );
      }
      `eh vector destructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
    }
  }
  else
  {
    v18 = &v7->m_Pos.v[2];
    while ( 1 )
    {
      if ( (int)v17 >= maxCorners )
      {
        LODWORD(v30) = maxCorners;
        LODWORD(startSegment) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 511, ASSERT_TYPE_ASSERT, "( numCorners ) < ( maxCorners )", "numCorners < maxCorners\n\t%i, %i", startSegment, v30) )
          __debugbreak();
      }
      v19 = (int)(v17 + this->m_CurCachedCornerIdx) % 5;
      v33 = v19;
      v20 = v19;
      v21 = &this->m_CachedCorners[v19];
      v22 = this->m_CachedCorners[v19].m_Pos.v[1] - v37;
      v23 = this->m_CachedCorners[v19].m_Pos.v[2] - v38;
      v24 = v11;
      *(float *)&v24 = *(float *)&v11 + fsqrt((float)((float)(v22 * v22) + (float)((float)(v21->m_Pos.v[0] - v36) * (float)(v21->m_Pos.v[0] - v36))) + (float)(v23 * v23));
      v11 = v24;
      if ( *(float *)&v24 > *(float *)&_XMM6 )
        break;
      v36 = v21->m_Pos.v[0];
      v37 = this->m_CachedCorners[v19].m_Pos.v[1];
      v38 = this->m_CachedCorners[v19].m_Pos.v[2];
      if ( v18 == (float *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1224, ASSERT_TYPE_ASSERT, "( pToCorner )", (const char *)&queryFormat, "pToCorner") )
        __debugbreak();
      *(v18 - 2) = v21->m_Pos.v[0];
      *(v18 - 1) = v21->m_Pos.v[1];
      *(_QWORD *)v18 = LODWORD(v21->m_Pos.v[2]);
      bfx::LinkHandle::Release((bfx::LinkHandle *)(v18 + 2));
      *((_BYTE *)v18 + 25) = 0;
      *((_BYTE *)v18 + 24) = v21->m_bIsGoal;
      v18[7] = NAN;
      ++v17;
      ++v10;
      v18 += 10;
      if ( this->m_CachedCorners[v20].m_bIsGoal )
        return v17;
      if ( v10 >= v35 )
      {
        v7 = pOutCorners;
        v15 = v32;
        m_LastCachedCornerIdx = v33;
        goto LABEL_25;
      }
    }
    if ( bGetCornerAfterThreshold )
      AINavigator3D::ConvertCornerData(this, &this->m_CachedCorners[v19], &pOutCorners[v17++]);
  }
  return v17;
}

/*
==============
AINavigator3D::GetPathDistToGoal
==============
*/
float AINavigator3D::GetPathDistToGoal(AINavigator3D *this)
{
  gentity_s *m_pEnt; 
  float v4; 
  float v5; 
  float v6; 
  __int128 v7; 
  unsigned int NumSegments; 
  int m_CurSegment; 
  int i; 
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *StartPos; 
  float m_z; 
  float m_y; 
  const bfx::Vector3 *EndPos; 
  __int128 v16; 
  float m_x; 
  float v18; 
  float v19; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    return 0.0;
  if ( this->m_bPathingOutOfBounds )
  {
    m_pEnt = this->m_pEnt;
    v4 = this->m_RequestedGoalPos.v[0] - m_pEnt->r.currentOrigin.v[0];
    v5 = this->m_RequestedGoalPos.v[1] - m_pEnt->r.currentOrigin.v[1];
    v6 = this->m_RequestedGoalPos.v[2] - m_pEnt->r.currentOrigin.v[2];
    return fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6));
  }
  else
  {
    v7 = 0i64;
    NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path);
    m_CurSegment = this->m_CurSegment;
    for ( i = NumSegments; m_CurSegment < i; v7 = v16 )
    {
      Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, m_CurSegment);
      if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 184, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
        __debugbreak();
      if ( m_CurSegment == this->m_CurSegment )
      {
        this->GetCurPos(this, (vec3_t *)&m_x);
      }
      else
      {
        StartPos = bfx::VolumePathSegment::GetStartPos(Segment);
        m_z = StartPos->m_z;
        m_y = StartPos->m_y;
        m_x = StartPos->m_x;
        v18 = m_y;
        v19 = m_z;
      }
      EndPos = bfx::VolumePathSegment::GetEndPos(Segment);
      ++m_CurSegment;
      v16 = v7;
      *(float *)&v16 = *(float *)&v7 + fsqrt((float)((float)((float)(EndPos->m_y - v18) * (float)(EndPos->m_y - v18)) + (float)((float)(EndPos->m_x - m_x) * (float)(EndPos->m_x - m_x))) + (float)((float)(EndPos->m_z - v19) * (float)(EndPos->m_z - v19)));
    }
    return *(float *)&v7;
  }
}

/*
==============
AINavigator3D::GetPathDistToGoalOrLink
==============
*/
void AINavigator3D::GetPathDistToGoalOrLink(AINavigator3D *this)
{
  this->GetPathDistToGoal(this);
}

/*
==============
AINavigator3D::GetPathLength
==============
*/
double AINavigator3D::GetPathLength(AINavigator3D *this)
{
  bfx::PolylinePath3DRCPtr *p_m_Path; 
  double result; 

  p_m_Path = &this->m_Path;
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    return 0.0;
  *(float *)&result = bfx::PolylinePath3DRCPtr::CalcLength(p_m_Path);
  return result;
}

/*
==============
AINavigator3D::GetPosAlongPath
==============
*/
void AINavigator3D::GetPosAlongPath(AINavigator3D *this, float dist, vec3_t *outPos)
{
  __int64 v5; 
  vec3_t v6; 
  bfx::AreaHandle v7; 
  bfx::LinkHandle v8; 

  bfx::AreaHandle::AreaHandle(&v7);
  bfx::LinkHandle::LinkHandle(&v8);
  ((void (__fastcall *)(AINavigator3D *, __int64, _QWORD, vec3_t *, _BYTE))this->GetPosAlongPath)(this, v5, 0i64, &v6, 0);
  *outPos = v6;
  bfx::LinkHandle::~LinkHandle(&v8);
  bfx::AreaHandle::~AreaHandle(&v7);
}

/*
==============
AINavigator3D::GetPosAlongPath
==============
*/
void AINavigator3D::GetPosAlongPath(AINavigator3D *this, float dist, bool bStopAtLink, nav_posAlongPathResults_t *pOutResults, bool bCalcArea)
{
  float v8; 
  __int128 v9; 
  float v10; 
  int *p_number; 
  int i; 
  float v17; 
  __int128 v18; 
  float v19; 
  __int128 v21; 
  float m_PathDistToPos; 
  float v25; 
  float v26; 
  signed int NumSegments; 
  signed int v28; 
  bfx::VolumePathSegment *Segment; 
  bool m_bPathingOutOfBounds; 
  const bfx::Vector3 *StartPos; 
  float m_z; 
  float m_y; 
  vec3_t *p_m_RequestedGoalPos; 
  __int128 v35; 
  float v36; 
  float v37; 
  float v38; 
  __int128 v40; 
  float v41; 
  float v44; 
  float v45; 
  float v46; 
  __int64 v47; 
  float m_x; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  int v54[4]; 

  if ( !pOutResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 336, ASSERT_TYPE_ASSERT, "(pOutResults)", (const char *)&queryFormat, "pOutResults") )
    __debugbreak();
  if ( bCalcArea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 338, ASSERT_TYPE_ASSERT, "(!bCalcArea)", (const char *)&queryFormat, "!bCalcArea") )
    __debugbreak();
  bfx::AreaHandle::Release(&pOutResults->m_hArea);
  bfx::LinkHandle::Release(&pOutResults->m_hLink);
  *(_QWORD *)&pOutResults->m_PosType = 0i64;
  if ( dist == 0.0 || !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
  {
    this->GetCurPos(this, (vec3_t *)pOutResults);
    return;
  }
  if ( !bfx::VolumeHandle::IsValid(&this->m_hCurVolume) )
  {
    this->GetCurPos(this, (vec3_t *)v54);
    this->GetGoalPos(this, (vec3_t *)&m_x);
    v9 = LODWORD(v49);
    v8 = v49 - *(float *)&v54[1];
    v10 = v50 - *(float *)&v54[2];
    *(float *)&v9 = fsqrt((float)((float)(v8 * v8) + (float)((float)(m_x - *(float *)v54) * (float)(m_x - *(float *)v54))) + (float)(v10 * v10));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vminss  xmm5, xmm4, xmm13
    }
    pOutResults->m_Pos.v[0] = (float)((float)(m_x - *(float *)v54) * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM5;
    pOutResults->m_Pos.v[2] = (float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM5;
    pOutResults->m_Pos.v[1] = (float)(v8 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM5;
    pOutResults->m_PathDistToPos = *(float *)&_XMM5;
    if ( *(float *)&_XMM5 <= dist )
      pOutResults->m_PosType = POS_AT_GOAL;
    return;
  }
  if ( AINavigator::ShouldPathOutOfBounds(this) )
  {
    p_number = (int *)&this->m_pEnt->s.number;
    v51 = *((float *)p_number + 76);
    v52 = *((float *)p_number + 77);
    v53 = *((float *)p_number + 78);
  }
  else
  {
    this->GetCurPos(this, (vec3_t *)&v51);
  }
  if ( this->m_CurCachedCornerIdx >= 5u )
  {
    LODWORD(v47) = this->m_CurCachedCornerIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurCachedCornerIdx ) < (unsigned)( cMaxNumCachedCorners )", "m_CurCachedCornerIdx doesn't index cMaxNumCachedCorners\n\t%i not in [0, %i)", v47, 5) )
      __debugbreak();
  }
  for ( i = this->m_CurCachedCornerIdx; ; i = (i + 1) % 5 )
  {
    if ( AINavigator::ShouldPathOutOfBounds(this) )
    {
      v17 = this->m_RequestedGoalPos.v[0];
      v18 = LODWORD(this->m_RequestedGoalPos.v[1]);
      v19 = this->m_RequestedGoalPos.v[2];
    }
    else
    {
      v17 = this->m_CachedCorners[i].m_Pos.v[0];
      v18 = LODWORD(this->m_CachedCorners[i].m_Pos.v[1]);
      v19 = this->m_CachedCorners[i].m_Pos.v[2];
    }
    v21 = v18;
    *(float *)&v21 = fsqrt((float)((float)((float)(*(float *)&v18 - v52) * (float)(*(float *)&v18 - v52)) + (float)((float)(v17 - v51) * (float)(v17 - v51))) + (float)((float)(v19 - v53) * (float)(v19 - v53)));
    _XMM3 = v21;
    m_PathDistToPos = pOutResults->m_PathDistToPos;
    __asm
    {
      vcmpless xmm0, xmm3, xmm15
      vblendvps xmm0, xmm3, xmm14, xmm0
    }
    v25 = (float)(*(float *)&v18 - v52) * (float)(1.0 / *(float *)&_XMM0);
    v26 = (float)(v19 - v53) * (float)(1.0 / *(float *)&_XMM0);
    if ( (float)(m_PathDistToPos + *(float *)&v21) > dist )
    {
      pOutResults->m_Pos.v[0] = (float)((float)((float)(v17 - v51) * (float)(1.0 / *(float *)&_XMM0)) * (float)(dist - m_PathDistToPos)) + v51;
      pOutResults->m_Pos.v[1] = (float)(v25 * (float)(dist - m_PathDistToPos)) + v52;
      pOutResults->m_Pos.v[2] = (float)(v26 * (float)(dist - m_PathDistToPos)) + v53;
      pOutResults->m_PathDistToPos = (float)(dist - m_PathDistToPos) + pOutResults->m_PathDistToPos;
      return;
    }
    pOutResults->m_PathDistToPos = m_PathDistToPos + *(float *)&v21;
    if ( this->m_CachedCorners[i].m_bIsGoal )
    {
      pOutResults->m_Pos.v[0] = v17;
      pOutResults->m_Pos.v[1] = *(float *)&v18;
      pOutResults->m_Pos.v[2] = v19;
      pOutResults->m_PosType = POS_AT_GOAL;
      return;
    }
    v51 = v17;
    v52 = *(float *)&v18;
    v53 = v19;
    if ( i == this->m_LastCachedCornerIdx )
      break;
  }
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path);
  v28 = this->m_CachedCornersLastSegment[this->m_LastCachedCornerIdx] + 1;
  if ( v28 < NumSegments )
  {
    while ( 1 )
    {
      Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, v28);
      if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 437, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
        __debugbreak();
      m_bPathingOutOfBounds = this->m_bPathingOutOfBounds;
      if ( v28 != this->m_CurSegment && !m_bPathingOutOfBounds )
        break;
      this->GetCurPos(this, (vec3_t *)&m_x);
      if ( !m_bPathingOutOfBounds )
        goto LABEL_33;
      p_m_RequestedGoalPos = &this->m_RequestedGoalPos;
LABEL_34:
      v35 = LODWORD(p_m_RequestedGoalPos->v[1]);
      v40 = v35;
      v36 = p_m_RequestedGoalPos->v[0];
      v37 = p_m_RequestedGoalPos->v[0] - m_x;
      v38 = p_m_RequestedGoalPos->v[2];
      *(float *)&v40 = fsqrt((float)((float)((float)(*(float *)&v35 - v49) * (float)(*(float *)&v35 - v49)) + (float)(v37 * v37)) + (float)((float)(v38 - v50) * (float)(v38 - v50)));
      _XMM3 = v40;
      v41 = pOutResults->m_PathDistToPos;
      __asm
      {
        vcmpless xmm0, xmm3, xmm15
        vblendvps xmm0, xmm3, xmm14, xmm0
      }
      v44 = v37 * (float)(1.0 / *(float *)&_XMM0);
      v45 = (float)(*(float *)&v35 - v49) * (float)(1.0 / *(float *)&_XMM0);
      v46 = (float)(v38 - v50) * (float)(1.0 / *(float *)&_XMM0);
      if ( (float)(v41 + *(float *)&v40) >= dist )
      {
        pOutResults->m_Pos.v[0] = (float)(v44 * (float)(dist - v41)) + m_x;
        pOutResults->m_Pos.v[1] = (float)(v45 * (float)(dist - v41)) + v49;
        pOutResults->m_Pos.v[2] = (float)(v46 * (float)(dist - v41)) + v50;
        pOutResults->m_PathDistToPos = (float)(dist - v41) + pOutResults->m_PathDistToPos;
        return;
      }
      pOutResults->m_PathDistToPos = v41 + *(float *)&v40;
      if ( v28 == NumSegments - 1 )
      {
        pOutResults->m_Pos.v[0] = v36;
        pOutResults->m_Pos.v[1] = *(float *)&v35;
        pOutResults->m_Pos.v[2] = v38;
        pOutResults->m_PosType = POS_AT_GOAL;
        return;
      }
      if ( ++v28 >= NumSegments )
        return;
    }
    StartPos = bfx::VolumePathSegment::GetStartPos(Segment);
    m_z = StartPos->m_z;
    m_y = StartPos->m_y;
    m_x = StartPos->m_x;
    v49 = m_y;
    v50 = m_z;
LABEL_33:
    p_m_RequestedGoalPos = (vec3_t *)bfx::VolumePathSegment::GetEndPos(Segment);
    goto LABEL_34;
  }
}

/*
==============
AINavigator3D::GetPrevCorner
==============
*/
void AINavigator3D::GetPrevCorner(AINavigator3D *this, vec3_t *corner)
{
  __int64 m_CurCachedCornerIdx; 
  float v5; 
  __int64 v6; 
  int v7; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 571, ASSERT_TYPE_ASSERT, "( m_Path.IsValid() )", (const char *)&queryFormat, "m_Path.IsValid()") )
    __debugbreak();
  if ( this->m_CurCachedCornerIdx >= 5u )
  {
    v7 = 5;
    LODWORD(v6) = this->m_CurCachedCornerIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 572, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurCachedCornerIdx ) < (unsigned)( cMaxNumCachedCorners )", "m_CurCachedCornerIdx doesn't index cMaxNumCachedCorners\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  m_CurCachedCornerIdx = this->m_CurCachedCornerIdx;
  if ( (int)m_CurCachedCornerIdx <= 0 )
  {
    corner->v[0] = this->m_CachedCorners[m_CurCachedCornerIdx].m_Pos.v[0];
    corner->v[1] = this->m_CachedCorners[m_CurCachedCornerIdx].m_Pos.v[1];
    v5 = this->m_CachedCorners[m_CurCachedCornerIdx].m_Pos.v[2];
  }
  else
  {
    corner->v[0] = *((float *)&this->m_PathSpec.m_applyPenaltyFlags + 6 * m_CurCachedCornerIdx);
    corner->v[1] = *(&this->m_PathSpec.m_maxSearchDist + 6 * m_CurCachedCornerIdx);
    v5 = *((float *)&this->m_hGoalVolume.m_pProxy + 6 * m_CurCachedCornerIdx);
  }
  corner->v[2] = v5;
}

/*
==============
AINavigator3D::GetPrevCornerPassed
==============
*/
void AINavigator3D::GetPrevCornerPassed(AINavigator3D *this, vec3_t *corner)
{
  this->GetPrevCorner(this, corner);
}

/*
==============
AINavigator3D::HasPath
==============
*/
bool AINavigator3D::HasPath(AINavigator3D *this)
{
  return bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path);
}

/*
==============
AINavigator3D::IsNextCornerGoal
==============
*/
_BOOL8 AINavigator3D::IsNextCornerGoal(AINavigator3D *this)
{
  __int64 v3; 
  int v4; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 557, ASSERT_TYPE_ASSERT, "( m_Path.IsValid() )", (const char *)&queryFormat, "m_Path.IsValid()") )
    __debugbreak();
  if ( this->m_CurCachedCornerIdx >= 5u )
  {
    v4 = 5;
    LODWORD(v3) = this->m_CurCachedCornerIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 558, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurCachedCornerIdx ) < (unsigned)( cMaxNumCachedCorners )", "m_CurCachedCornerIdx doesn't index cMaxNumCachedCorners\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return this->m_CachedCorners[this->m_CurCachedCornerIdx].m_bIsGoal;
}

/*
==============
AINavigator3D::IsNextCornerMultiGoalPathGoal
==============
*/
bool AINavigator3D::IsNextCornerMultiGoalPathGoal(AINavigator3D *this)
{
  return 0;
}

/*
==============
AINavigator3D::IsNodeReachable
==============
*/
_BOOL8 AINavigator3D::IsNodeReachable(AINavigator3D *this, const pathnode_t *node)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int64 v6; 
  bfx::Path3DSpec *p_m_PathSpec; 
  bool IsVolumeReachableFromVolume; 
  bfx::VolumeHandle pClosestVolume; 
  __int64 v11; 
  vec3_t pos; 

  v11 = -2i64;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 290, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  v4 = Path_ConvertNodeToIndex(node);
  v5 = v4;
  v6 = v4;
  if ( v4 < 0x400u && bfx::VolumeHandle::IsValid(&s_hVolumeCache[v4]) )
  {
    bfx::VolumeHandle::operator=(&pClosestVolume, &s_hVolumeCache[v6]);
    p_m_PathSpec = &this->m_PathSpec;
LABEL_11:
    IsVolumeReachableFromVolume = bfx::IsVolumeReachableFromVolume(&this->m_hCurVolume, &pClosestVolume, p_m_PathSpec);
    goto LABEL_12;
  }
  p_m_PathSpec = &this->m_PathSpec;
  if ( Nav3D_GetClosestVolume(this->m_pSpace, &pos, &this->m_PathSpec, &pClosestVolume) )
  {
    if ( v5 < 0x400u )
      bfx::VolumeHandle::operator=(&s_hVolumeCache[v6], &pClosestVolume);
    goto LABEL_11;
  }
  IsVolumeReachableFromVolume = 0;
LABEL_12:
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return IsVolumeReachableFromVolume;
}

/*
==============
AINavigator3D::IsPathDistToGoalAtLeast
==============
*/
bool AINavigator3D::IsPathDistToGoalAtLeast(AINavigator3D *this, float dist)
{
  float v4; 
  float v5; 
  __int128 v7; 
  signed int NumSegments; 
  int m_CurSegment; 
  signed int v10; 
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *StartPos; 
  float m_z; 
  float m_y; 
  const bfx::Vector3 *EndPos; 
  __int128 v16; 
  float m_x; 
  float v18; 
  float v19; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    return 0;
  if ( this->m_bPathingOutOfBounds )
  {
    v4 = this->m_RequestedGoalPos.v[1] - this->m_pEnt->r.currentOrigin.v[1];
    v5 = this->m_RequestedGoalPos.v[2] - this->m_pEnt->r.currentOrigin.v[2];
    return fsqrt((float)((float)(v4 * v4) + (float)((float)(this->m_RequestedGoalPos.v[0] - this->m_pEnt->r.currentOrigin.v[0]) * (float)(this->m_RequestedGoalPos.v[0] - this->m_pEnt->r.currentOrigin.v[0]))) + (float)(v5 * v5)) >= dist;
  }
  v7 = 0i64;
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path);
  m_CurSegment = this->m_CurSegment;
  v10 = NumSegments;
  if ( m_CurSegment >= NumSegments )
    return 0;
  while ( 1 )
  {
    Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, m_CurSegment);
    if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 224, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    if ( m_CurSegment == this->m_CurSegment )
    {
      this->GetCurPos(this, (vec3_t *)&m_x);
    }
    else
    {
      StartPos = bfx::VolumePathSegment::GetStartPos(Segment);
      m_z = StartPos->m_z;
      m_y = StartPos->m_y;
      m_x = StartPos->m_x;
      v18 = m_y;
      v19 = m_z;
    }
    EndPos = bfx::VolumePathSegment::GetEndPos(Segment);
    v16 = v7;
    *(float *)&v16 = *(float *)&v7 + fsqrt((float)((float)((float)(EndPos->m_y - v18) * (float)(EndPos->m_y - v18)) + (float)((float)(EndPos->m_x - m_x) * (float)(EndPos->m_x - m_x))) + (float)((float)(EndPos->m_z - v19) * (float)(EndPos->m_z - v19)));
    v7 = v16;
    if ( *(float *)&v16 >= dist )
      break;
    if ( ++m_CurSegment >= v10 )
      return 0;
  }
  return 1;
}

/*
==============
AINavigator3D::IsPathDistToGoalOrLinkAtLeast
==============
*/
__int64 AINavigator3D::IsPathDistToGoalOrLinkAtLeast(AINavigator3D *this, float dist)
{
  return ((__int64 (__fastcall *)(AINavigator3D *))this->IsPathDistToGoalAtLeast)(this);
}

/*
==============
AINavigator3D::IsPathLengthAtLeast
==============
*/
bool AINavigator3D::IsPathLengthAtLeast(AINavigator3D *this, float dist)
{
  bool result; 

  result = bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path);
  if ( result )
    return this->GetPathLength(this) >= dist;
  return result;
}

/*
==============
AINavigator3D::IsPosReachable
==============
*/
_BOOL8 AINavigator3D::IsPosReachable(AINavigator3D *this, const vec3_t *goalPos)
{
  bool v4; 
  bfx::VolumeHandle pClosestVolume; 

  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  v4 = Nav3D_GetClosestVolume(this->m_pSpace, goalPos, &this->m_PathSpec, &pClosestVolume) && bfx::IsVolumeReachableFromVolume(&this->m_hCurVolume, &pClosestVolume, &this->m_PathSpec);
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v4;
}

/*
==============
AINavigator3D::IsStraightLineReachable
==============
*/
bool AINavigator3D::IsStraightLineReachable(AINavigator3D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  return Nav3D_IsStraightLineReachable(this->m_pSpace, startPos, endPos, &this->m_PathSpec);
}

/*
==============
AINavigator3D::IsStraightLineToGoal
==============
*/
char AINavigator3D::IsStraightLineToGoal(AINavigator3D *this)
{
  char *Value; 
  int *v4; 
  _QWORD *v5; 
  char *v6; 
  int *v7; 
  unsigned __int64 v8; 
  ThreadContext CurrentThreadContext; 
  bool IsStraightLineReachable; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  vec3_t endPos; 
  vec3_t startPos; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    return 1;
  Value = (char *)Sys_GetValue(0);
  v4 = (int *)(Value + 12896);
  if ( (unsigned int)(*((_DWORD *)Value + 3224) + 1) >= 3 )
  {
    v14 = 3;
    v12 = *((_DWORD *)Value + 3224) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( (unsigned int)++*v4 >= 3 )
  {
    LODWORD(v13) = 3;
    LODWORD(v11) = *v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v5 = Value + 2088;
  v6 = Value + 40;
  if ( *v5 < (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v5 += 8i64;
  if ( *v5 >= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v5 = v4;
  if ( *v5 <= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v7 = &v4[*v4 + 2];
  v8 = __rdtsc();
  *v7 = v8;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 270, NULL, 0);
  this->GetCurPos(this, &startPos);
  this->GetGoalPos(this, &endPos);
  IsStraightLineReachable = Nav3D_IsStraightLineReachable(this->m_pSpace, &startPos, &endPos, &this->m_PathSpecOfCurPath);
  Profile_EndInternal(NULL);
  return IsStraightLineReachable;
}

/*
==============
AINavigator3D::IsWithinDistOfSegment
==============
*/
bool AINavigator3D::IsWithinDistOfSegment(AINavigator3D *this, const int segmentIndex, const vec3_t *pos, const float maxDist)
{
  bfx::VolumePathSegment *Segment; 
  const bfx::Vector3 *StartPos; 
  double v7; 
  float m_z; 
  const bfx::Vector3 *EndPos; 
  float v10; 
  double v11; 
  double v13; 
  vec3_t end; 
  vec3_t start; 

  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, segmentIndex);
  StartPos = bfx::VolumePathSegment::GetStartPos(Segment);
  v7 = *(double *)&StartPos->m_x;
  m_z = StartPos->m_z;
  v13 = *(double *)&StartPos->m_x;
  EndPos = bfx::VolumePathSegment::GetEndPos(Segment);
  v10 = EndPos->m_z;
  *(_QWORD *)end.v = *(_QWORD *)&EndPos->m_x;
  *(double *)start.v = v7;
  start.v[2] = m_z;
  end.v[2] = v10;
  if ( (float)((float)((float)((float)(end.v[1] - *((float *)&v13 + 1)) * (float)(end.v[1] - *((float *)&v13 + 1))) + (float)((float)(end.v[0] - *(float *)&v13) * (float)(end.v[0] - *(float *)&v13))) + (float)((float)(v10 - m_z) * (float)(v10 - m_z))) >= 0.001 )
    v11 = PointToLineSegmentDistSq(pos, &start, &end);
  else
    *(float *)&v11 = (float)((float)((float)(pos->v[1] - *((float *)&v13 + 1)) * (float)(pos->v[1] - *((float *)&v13 + 1))) + (float)((float)(pos->v[0] - *(float *)&v13) * (float)(pos->v[0] - *(float *)&v13))) + (float)((float)(pos->v[2] - m_z) * (float)(pos->v[2] - m_z));
  return (float)(maxDist * maxDist) > *(float *)&v11;
}

/*
==============
Nav_CleanupStaticNavigatorData3D
==============
*/
void Nav_CleanupStaticNavigatorData3D(void)
{
  bfx::VolumeHandle *v0; 
  __int64 v1; 

  v0 = s_hVolumeCache;
  v1 = 1024i64;
  do
  {
    bfx::VolumeHandle::Release(v0++);
    --v1;
  }
  while ( v1 );
}

/*
==============
Nav_Create3DNavigator
==============
*/
AINavigator *Nav_Create3DNavigator(gentity_s *pEnt, AINavLayer planLayer, bool allowOffMeshSpawn)
{
  return Nav_Create3DNavigator(pEnt, planLayer, allowOffMeshSpawn, -1);
}

/*
==============
Nav_Create3DNavigator
==============
*/
void Nav_Create3DNavigator(gentity_s *pEnt, AINavLayer planLayer, bool allowOffMeshSpawn, int index)
{
  __int64 v4; 
  unsigned int v8; 
  __int64 v9; 
  AINavigator3D *v10; 
  bool v11; 
  signed int maxSentients; 
  int v13; 
  __int64 v14; 
  bool *p_m_bInUse; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  int v20; 

  v4 = index;
  if ( !Nav_MeshLoaded() && !Nav_MeshWillBeLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 120, ASSERT_TYPE_ASSERT, "( Nav_MeshLoaded() || Nav_MeshWillBeLoaded() )", (const char *)&queryFormat, "Nav_MeshLoaded() || Nav_MeshWillBeLoaded()") )
    __debugbreak();
  if ( (int)v4 < 0 )
  {
    maxSentients = level.maxSentients;
    if ( level.maxSentients > 0x110 )
    {
      v20 = 272;
      LODWORD(v17) = level.maxSentients;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 71, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators3D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators3D )\n\t%i, %i", v17, v20) )
        __debugbreak();
      maxSentients = level.maxSentients;
    }
    v13 = 0;
    if ( maxSentients <= 0 )
      goto LABEL_28;
    v14 = 0i64;
    p_m_bInUse = &s_Navigators3D.m_bInUse;
    while ( *p_m_bInUse )
    {
      ++v13;
      ++v14;
      p_m_bInUse += 424;
      if ( v14 >= maxSentients )
        goto LABEL_28;
    }
    v10 = (AINavigator3D *)((char *)&s_Navigators3D + 424 * v13);
    v10->m_bInUse = 1;
    if ( !v10 )
    {
LABEL_28:
      if ( (unsigned int)maxSentients > 0x110 )
      {
        LODWORD(v18) = 272;
        LODWORD(v17) = maxSentients;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 71, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators3D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators3D )\n\t%i, %i", v17, v18) )
          __debugbreak();
        maxSentients = level.maxSentients;
      }
      LODWORD(v18) = maxSentients;
      v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 131, ASSERT_TYPE_ASSERT, "(pNav)", "%s\n\tRan out of 3D navigators to alloc!  Max %d.", "pNav", v18);
      goto LABEL_33;
    }
LABEL_37:
    AINavigator3D::AINavigator3D(v10, pEnt, planLayer, allowOffMeshSpawn);
    *(_BYTE *)(v16 + 196) = 0;
    return;
  }
  v8 = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    v19 = 272;
    LODWORD(v17) = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 71, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators3D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators3D )\n\t%i, %i", v17, v19) )
      __debugbreak();
    v8 = level.maxSentients;
  }
  if ( (unsigned int)v4 >= v8 )
  {
    if ( v8 > 0x110 )
    {
      LODWORD(v18) = 272;
      LODWORD(v17) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 71, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators3D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators3D )\n\t%i, %i", v17, v18) )
        __debugbreak();
      v8 = level.maxSentients;
    }
    LODWORD(v18) = v8;
    LODWORD(v17) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 78, ASSERT_TYPE_ASSERT, "(unsigned)( iNav ) < (unsigned)( Nav_GetNavigator3DMaxCount() )", "iNav doesn't index Nav_GetNavigator3DMaxCount()\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v9 = 424 * v4;
  if ( !*(&s_Navigators3D.m_bInUse + 424 * v4) )
  {
    v10 = (AINavigator3D *)((char *)&s_Navigators3D + v9);
    *(&s_Navigators3D.m_bInUse + v9) = 1;
    if ( (AINavigator *)((char *)&s_Navigators3D + v9) )
      goto LABEL_37;
  }
  LODWORD(v18) = v4;
  v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 126, ASSERT_TYPE_ASSERT, "(pNav)", "%s\n\tUnable to alloc 3D navigator %d!  Navigator slot already in use.", "pNav", v18);
LABEL_33:
  if ( v11 )
    __debugbreak();
}

/*
==============
AINavigator3D::ReadNavigator
==============
*/
AINavigator3D *AINavigator3D::ReadNavigator(MemoryFile *memFile, int index)
{
  __int64 v4; 
  gentity_s *v5; 
  double Float; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  double v18; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  __int64 v24; 
  __int64 v25; 
  AINavigator3D *v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  int NCorners; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  float *v39; 
  __int64 v40; 
  double v41; 
  float v42; 
  double v43; 
  float v44; 
  double v45; 
  __int64 startSegment; 
  __int64 bGetCornerAfterThreshold; 
  char v49[4]; 
  AINavLayer planLayer; 
  unsigned int p; 
  bfx::PolylinePath3DRCPtr result; 
  bfx::VolumeHandle rhs; 
  __int64 v54; 
  nav_pathfind_3D_input_t pInput; 
  vec3_t origin; 

  v54 = -2i64;
  MemFile_ReadData(memFile, 4ui64, &p);
  v4 = (int)p;
  if ( p >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1349, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", p, 2048) )
      __debugbreak();
    LODWORD(bGetCornerAfterThreshold) = 2048;
    LODWORD(startSegment) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", startSegment, bGetCornerAfterThreshold) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1350, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  v5 = &g_entities[v4];
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  Float = MemFile_ReadFloat(memFile);
  v7 = *(float *)&Float;
  v8 = MemFile_ReadFloat(memFile);
  v9 = *(float *)&v8;
  v10 = MemFile_ReadFloat(memFile);
  v11 = *(float *)&v10;
  v12 = MemFile_ReadFloat(memFile);
  v13 = *(float *)&v12;
  v14 = MemFile_ReadFloat(memFile);
  v15 = *(float *)&v14;
  v16 = MemFile_ReadFloat(memFile);
  v17 = *(float *)&v16;
  v18 = MemFile_ReadFloat(memFile);
  v19 = *(float *)&v18;
  v20 = MemFile_ReadFloat(memFile);
  v21 = *(float *)&v20;
  v22 = MemFile_ReadFloat(memFile);
  v23 = *(float *)&v22;
  Nav_Create3DNavigator(v5, planLayer, 1, index);
  v25 = v24;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1364, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  v26 = (AINavigator3D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 600i64))(v25);
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1367, ASSERT_TYPE_ASSERT, "( pNav3D )", (const char *)&queryFormat, "pNav3D") )
    __debugbreak();
  MemFile_ReadData(memFile, 0xCui64, &v26->m_PathSpec);
  MemFile_ReadData(memFile, 0xCui64, &v26->m_PathSpecOfCurPath);
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  v26->m_TimeOfLastPathUpdate = planLayer;
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  v26->m_TimeOfLastBlockage = planLayer;
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  v26->m_TimeOfLastPathFindFail = planLayer;
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  v26->m_TimeOfLastPathSuppressed = planLayer;
  v27 = MemFile_ReadFloat(memFile);
  v26->m_DistFromGoalToPathToRequestedGoal = *(float *)&v27;
  v28 = MemFile_ReadFloat(memFile);
  v26->m_MaxDeviationFromPath = *(float *)&v28;
  MemFile_ReadData(memFile, 1ui64, v49);
  v26->m_bPathingOutOfBounds = v49[0];
  v26->m_ReevalPathTask.entNum = v4;
  MemFile_ReadData(memFile, 1ui64, v49);
  v26->m_ReevalPathTask.status[0] = v49[0];
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  v26->m_ReevalPathTask.timestamp = planLayer;
  MemFile_ReadData(memFile, 1ui64, v49);
  v26->m_bAllowSkipMultigoalPoint = v49[0];
  MemFile_ReadData(memFile, 1ui64, v49);
  v26->m_bMultiGoalPath = v49[0];
  MemFile_ReadData(memFile, 1ui64, v49);
  v26->m_bPathRequested = v49[0];
  v26->m_CurSnappedPos.v[0] = v7;
  v26->m_CurSnappedPos.v[1] = v9;
  v26->m_CurSnappedPos.v[2] = v11;
  v26->m_RequestedGoalPos.v[0] = v13;
  v26->m_RequestedGoalPos.v[1] = v15;
  v26->m_RequestedGoalPos.v[2] = v17;
  v26->m_SnappedGoalPos.v[0] = v19;
  v26->m_SnappedGoalPos.v[1] = v21;
  v26->m_SnappedGoalPos.v[2] = v23;
  Nav3D_GetClosestVolume(v26->m_pSpace, &v26->m_CurSnappedPos, &v26->m_PathSpec, &v26->m_hCurVolume);
  MemFile_ReadData(memFile, 1ui64, v49);
  if ( v49[0] )
  {
    if ( !v26->m_bPathRequested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1396, ASSERT_TYPE_ASSERT, "( pNav3D->m_bPathRequested )", (const char *)&queryFormat, "pNav3D->m_bPathRequested") )
      __debugbreak();
    if ( !bfx::VolumeHandle::IsValid(&v26->m_hCurVolume) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1397, ASSERT_TYPE_ASSERT, "( pNav3D->m_hCurVolume.IsValid() )", (const char *)&queryFormat, "pNav3D->m_hCurVolume.IsValid()") )
      __debugbreak();
    v29 = MemFile_ReadFloat(memFile);
    origin.v[0] = *(float *)&v29;
    v30 = MemFile_ReadFloat(memFile);
    origin.v[1] = *(float *)&v30;
    v31 = MemFile_ReadFloat(memFile);
    origin.v[2] = *(float *)&v31;
    v26->m_LocalSnappedPathStartPos.v[0] = origin.v[0];
    v26->m_LocalSnappedPathStartPos.v[1] = origin.v[1];
    v26->m_LocalSnappedPathStartPos.v[2] = *(float *)&v31;
    bfx::VolumeHandle::VolumeHandle(&pInput.m_hStartVolume);
    bfx::VolumeHandle::VolumeHandle(&pInput.m_hGoalVolume);
    pInput.m_StartPos = origin;
    pInput.m_GoalPos = v26->m_SnappedGoalPos;
    pInput.m_bSnapPoints = 0;
    pInput.m_pPathSpec = &v26->m_PathSpecOfCurPath;
    Nav3D_GetClosestVolume(v26->m_pSpace, &origin, &v26->m_PathSpecOfCurPath, &v26->m_hCurVolume);
    if ( !bfx::VolumeHandle::IsValid(&v26->m_hCurVolume) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1408, ASSERT_TYPE_ASSERT, "(pNav3D->m_hCurVolume.IsValid())", (const char *)&queryFormat, "pNav3D->m_hCurVolume.IsValid()") )
      __debugbreak();
    bfx::VolumeHandle::operator=(&pInput.m_hStartVolume, &v26->m_hCurVolume);
    AINavigator3D::FindPath(v26, &result, &pInput);
    if ( bfx::PolylinePath3DRCPtr::IsValid(&result) )
    {
      AINavigator3D::SetPath(v26, &result, &pInput);
      MemFile_ReadData(memFile, 4ui64, &p);
      MemFile_ReadData(memFile, 4ui64, &planLayer);
      v26->m_PrevCornerSegment = planLayer;
      MemFile_ReadData(memFile, 4ui64, &planLayer);
      v26->m_CalculateCornersStartSegment = planLayer;
      v32 = MemFile_ReadFloat(memFile);
      v26->m_CalculateCornersCurPos.v[0] = *(float *)&v32;
      v33 = MemFile_ReadFloat(memFile);
      v26->m_CalculateCornersCurPos.v[1] = *(float *)&v33;
      v34 = MemFile_ReadFloat(memFile);
      v26->m_CalculateCornersCurPos.v[2] = *(float *)&v34;
      v26->m_CurSegment = v26->m_CalculateCornersStartSegment;
      v26->m_CurSnappedPos.v[0] = v26->m_CalculateCornersCurPos.v[0];
      v26->m_CurSnappedPos.v[1] = v26->m_CalculateCornersCurPos.v[1];
      v26->m_CurSnappedPos.v[2] = v26->m_CalculateCornersCurPos.v[2];
      bfx::VolumeHandle::VolumeHandle(&rhs, &v26->m_hCurVolume);
      Nav3D_GetClosestVolume(v26->m_pSpace, &v26->m_CurSnappedPos, &v26->m_PathSpecOfCurPath, &v26->m_hCurVolume);
      NCorners = AINavigator3D::CalculateNextNCorners(v26, v26->m_CachedCorners, v26->m_CachedCornersLastSegment, 5, 999999.0, v26->m_PrevCornerSegment, 1);
      v36 = NCorners;
      v26->m_CurCachedCornerIdx = 0;
      v26->m_LastCachedCornerIdx = NCorners - 1;
      v26->m_CurSnappedPos.v[0] = v7;
      v26->m_CurSnappedPos.v[1] = v9;
      v26->m_CurSnappedPos.v[2] = v11;
      bfx::VolumeHandle::operator=(&v26->m_hCurVolume, &rhs);
      v26->m_CurSegment = p;
      MemFile_ReadData(memFile, 4ui64, &planLayer);
      v37 = planLayer;
      if ( planLayer > NAV_LAYER_HUMAN )
      {
        v38 = v36;
        v39 = &v26->m_CachedCorners[0].m_Pos.v[2];
        v40 = planLayer;
        do
        {
          v41 = MemFile_ReadFloat(memFile);
          v42 = *(float *)&v41;
          v43 = MemFile_ReadFloat(memFile);
          v44 = *(float *)&v43;
          v45 = MemFile_ReadFloat(memFile);
          if ( v37 == v38 )
          {
            *(v39 - 2) = v42;
            *(v39 - 1) = v44;
            *v39 = *(float *)&v45;
          }
          v39 += 6;
          --v40;
        }
        while ( v40 );
      }
      bfx::VolumeHandle::~VolumeHandle(&rhs);
    }
    bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr(&result);
    bfx::VolumeHandle::~VolumeHandle(&pInput.m_hGoalVolume);
    bfx::VolumeHandle::~VolumeHandle(&pInput.m_hStartVolume);
  }
  return v26;
}

/*
==============
AINavigator3D::SetCurPos
==============
*/
void AINavigator3D::SetCurPos(AINavigator3D *this, const vec3_t *curPos)
{
  bfx::VolumeHandle v4; 
  bool v5; 
  AINavigator_vtbl *v6; 
  bfx::VolumeHandle pClosestVolume; 
  __int64 v8; 
  vec3_t outClosestPos; 
  vec3_t v10; 

  v8 = -2i64;
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 811, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  Nav3D_GetClosestVolume(this->m_pSpace, curPos, &this->m_PathSpec, &pClosestVolume);
  if ( bfx::VolumeHandle::IsValid(&pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle((bfx::VolumeHandle *)&v10, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(curPos, v4, &outClosestPos);
  }
  else
  {
    outClosestPos = *curPos;
  }
  v5 = 0;
  if ( this->m_bPathRequested && bfx::VolumeHandle::IsValid(&pClosestVolume) )
    v5 = !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) || !AINavigator3D::UpdateCurSegment(this, &outClosestPos, &pClosestVolume);
  this->m_CurSnappedPos = outClosestPos;
  bfx::VolumeHandle::operator=(&this->m_hCurVolume, &pClosestVolume);
  v6 = this->__vftable;
  if ( v5 )
  {
    if ( !v6->DoPathFind(this) )
    {
      this->GetRequestedGoalPos(this, &v10);
      AINavigator::BadPathNotify(this, &v10);
      this->m_TimeOfLastPathFindFail = level.time;
    }
  }
  else
  {
    v6->UpdatePathOutOfBounds(this);
  }
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
}

/*
==============
AINavigator3D::SetGoalPos
==============
*/
bool AINavigator3D::SetGoalPos(AINavigator3D *this, const vec3_t *goalPos)
{
  bool result; 
  bool v5; 
  AINavigator_vtbl *v6; 
  bool v7; 

  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 871, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  if ( !bfx::VolumeHandle::IsValid(&this->m_hCurVolume) )
  {
    this->SetCurPos(this, &this->m_CurSnappedPos);
    if ( !bfx::VolumeHandle::IsValid(&this->m_hCurVolume) )
    {
      this->m_bPathRequested = 0;
      AINavigator::BadPathNotify(this, goalPos);
      return 0;
    }
  }
  if ( !bfx::VolumeHandle::IsValid(&this->m_hCurVolume) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 887, ASSERT_TYPE_ASSERT, "(m_hCurVolume.IsValid())", "%s\n\tMust call SetCurPos on 3d Navigator before calling SetGoalPos", "m_hCurVolume.IsValid()") )
    __debugbreak();
  if ( this->HasPath(this) && VecNCompareCustomEpsilon(goalPos->v, this->m_RequestedGoalPos.v, 0.001, 3) )
    return 1;
  this->m_RequestedGoalPos.v[0] = goalPos->v[0];
  this->m_RequestedGoalPos.v[1] = goalPos->v[1];
  this->m_RequestedGoalPos.v[2] = goalPos->v[2];
  v5 = VecNCompareCustomEpsilon(this->m_CurSnappedPos.v, this->m_RequestedGoalPos.v, 0.001, 3);
  v6 = this->__vftable;
  if ( v5 )
  {
    v6->ClearPath(this);
    return 1;
  }
  v7 = v6->DoPathFind(this);
  if ( !v7 )
    AINavigator::BadPathNotify(this, goalPos);
  result = v7;
  this->m_bPathRequested = v7;
  return result;
}

/*
==============
AINavigator3D::SetPath
==============
*/
void AINavigator3D::SetPath(AINavigator3D *this, const bfx::PolylinePath3DRCPtr *path, const nav_pathfind_3D_input_t *pInput)
{
  bfx::Path3DSpec *m_pPathSpec; 
  int NCorners; 
  bool v8; 

  if ( !bfx::PolylinePath3DRCPtr::IsValid((bfx::PolylinePath3DRCPtr *)path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 988, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 989, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  bfx::PolylinePath3DRCPtr::operator=(&this->m_Path, path);
  m_pPathSpec = pInput->m_pPathSpec;
  *(double *)&this->m_PathSpecOfCurPath.m_volumeUsageFlags = *(double *)&m_pPathSpec->m_volumeUsageFlags;
  this->m_PathSpecOfCurPath.m_maxSearchDist = m_pPathSpec->m_maxSearchDist;
  this->m_CurSegment = 0;
  this->m_PrevCornerSegment = 0;
  this->m_TimeOfLastPathUpdate = level.time;
  this->m_LocalSnappedPathStartPos.v[0] = pInput->m_StartPos.v[0];
  this->m_LocalSnappedPathStartPos.v[1] = pInput->m_StartPos.v[1];
  this->m_LocalSnappedPathStartPos.v[2] = pInput->m_StartPos.v[2];
  NCorners = AINavigator3D::CalculateNextNCorners(this, this->m_CachedCorners, this->m_CachedCornersLastSegment, 5, 999999.0, 0, 1);
  this->m_CalculateCornersStartSegment = 0;
  this->m_CalculateCornersCurPos.v[0] = this->m_CurSnappedPos.v[0];
  this->m_CalculateCornersCurPos.v[1] = this->m_CurSnappedPos.v[1];
  this->m_CalculateCornersCurPos.v[2] = this->m_CurSnappedPos.v[2];
  v8 = this->m_ReevalPathTask.status[0] == 1;
  this->m_CurCachedCornerIdx = 0;
  this->m_LastCachedCornerIdx = NCorners - 1;
  this->m_bPathRequested = 1;
  this->m_bPathingOutOfBounds = 0;
  if ( v8 )
    AIScheduler::RemoveReevalPathTask(&this->m_ReevalPathTask);
}

/*
==============
AINavigator3D::SetSpace
==============
*/
void AINavigator3D::SetSpace(AINavigator3D *this, nav_space_s *pSpace)
{
  AINavigator_vtbl *v2; 

  v2 = this->__vftable;
  this->m_pSpace = pSpace;
  ((void (*)(void))v2->ClearPath)();
}

/*
==============
AINavigator3D::SnapPosToClosestVerticalPos
==============
*/
__int64 AINavigator3D::SnapPosToClosestVerticalPos(AINavigator3D *this, const vec3_t *pos, vec3_t *outSnappedPos)
{
  unsigned __int8 v6; 
  bfx::VolumeHandle v7; 
  double v8; 
  bfx::VolumeHandle v9; 
  double v10; 
  float v11; 
  bfx::VolumeHandle v13; 
  bfx::VolumeHandle pClosestVolume; 
  bfx::VolumeHandle rhs; 
  __int64 v16; 
  vec3_t origin; 
  vec3_t outUp; 
  nav_probe_results_3D_s pOutResults; 

  v16 = -2i64;
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  Nav3D_GetClosestVolume(this->m_pSpace, pos, &this->m_PathSpec, &pClosestVolume);
  if ( bfx::VolumeHandle::IsValid(&pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle(&v13, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(pos, v7, outSnappedPos);
    v8 = Nav_Get2DDistanceSqWithUp(pos, outSnappedPos, &outUp);
    if ( *(float *)&v8 >= 1.0 )
    {
      bfx::VolumeHandle::VolumeHandle(&rhs);
      origin.v[0] = (float)(48.0 * outUp.v[0]) + pos->v[0];
      origin.v[1] = (float)(48.0 * outUp.v[1]) + pos->v[1];
      origin.v[2] = (float)(48.0 * outUp.v[2]) + pos->v[2];
      Nav3D_GetClosestVolume(this->m_pSpace, &origin, &this->m_PathSpec, &rhs);
      bfx::VolumeHandle::VolumeHandle(&v13, &rhs);
      Nav3D_GetClosestPointInsideVolume(&origin, v9, &origin);
      v10 = Nav_Get2DDistanceSqWithUp(pos, &origin, &outUp);
      if ( *(float *)&v10 >= 144.0 )
      {
        v6 = 0;
      }
      else
      {
        Nav_Trace3D(this->m_pSpace, &origin, pos, &this->m_PathSpec, &pOutResults);
        if ( pOutResults.m_bCollided )
        {
          outSnappedPos->v[0] = pOutResults.m_EndPos.v[0];
          outSnappedPos->v[1] = pOutResults.m_EndPos.v[1];
          outSnappedPos->v[2] = pOutResults.m_EndPos.v[2];
        }
        else
        {
          LODWORD(v11) = LODWORD(pOutResults.m_DistTraveled) ^ _xmm;
          outSnappedPos->v[0] = (float)(COERCE_FLOAT(LODWORD(pOutResults.m_DistTraveled) ^ _xmm) * outUp.v[0]) + origin.v[0];
          outSnappedPos->v[1] = (float)(v11 * outUp.v[1]) + origin.v[1];
          outSnappedPos->v[2] = (float)(v11 * outUp.v[2]) + origin.v[2];
        }
        v6 = 1;
      }
      bfx::VolumeHandle::~VolumeHandle(&rhs);
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v6;
}

/*
==============
AINavigator3D::Trace
==============
*/
bool AINavigator3D::Trace(AINavigator3D *this, const vec3_t *startPos, const vec3_t *endPos)
{
  nav_probe_results_3D_s pOutResults; 

  return Nav_Trace3D(this->m_pSpace, startPos, endPos, &this->m_PathSpec, &pOutResults);
}

/*
==============
AINavigator3D::Trace
==============
*/
bool AINavigator3D::Trace(AINavigator3D *this, const vec3_t *startPos, const vec3_t *endPos, vec3_t *outHitPos)
{
  bool result; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v11; 
  float m_DistTraveled; 
  float v16; 
  float v17; 
  nav_probe_results_3D_s pOutResults; 

  result = Nav_Trace3D(this->m_pSpace, startPos, endPos, &this->m_PathSpec, &pOutResults);
  v8 = endPos->v[0] - startPos->v[0];
  v10 = LODWORD(endPos->v[1]);
  v9 = endPos->v[1] - startPos->v[1];
  v11 = endPos->v[2] - startPos->v[2];
  m_DistTraveled = pOutResults.m_DistTraveled;
  *(float *)&v10 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v11 * v11));
  _XMM4 = v10;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v16 = 1.0 / *(float *)&_XMM0;
  v17 = (float)((float)(v8 * (float)(1.0 / *(float *)&_XMM0)) * pOutResults.m_DistTraveled) + startPos->v[0];
  *(float *)&_XMM0 = (float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * pOutResults.m_DistTraveled;
  outHitPos->v[0] = v17;
  outHitPos->v[1] = *(float *)&_XMM0 + startPos->v[1];
  outHitPos->v[2] = (float)((float)(v11 * v16) * m_DistTraveled) + startPos->v[2];
  return result;
}

/*
==============
AINavigator3D::TraceFromCurPos
==============
*/
__int64 AINavigator3D::TraceFromCurPos(AINavigator3D *this, const vec3_t *endPos)
{
  return ((__int64 (__fastcall *)(AINavigator3D *, vec3_t *, const vec3_t *))this->Trace)(this, &this->m_CurSnappedPos, endPos);
}

/*
==============
AINavigator3D::TraceFromCurPos
==============
*/
__int64 AINavigator3D::TraceFromCurPos(AINavigator3D *this, const vec3_t *endPos, vec3_t *outHitPos)
{
  return ((__int64 (__fastcall *)(AINavigator3D *, vec3_t *, const vec3_t *, vec3_t *))this->Trace)(this, &this->m_CurSnappedPos, endPos, outHitPos);
}

/*
==============
AINavigator3D::TransferNavigatorsToSpace
==============
*/
void AINavigator3D::TransferNavigatorsToSpace(nav_space_s *pNewSpace)
{
  signed int maxSentients; 
  __int64 v3; 
  AINavigator *v4; 
  nav_space_s *(__fastcall *FindMostLikelySpace)(AINavigator *, const vec3_t *, const AINavLayer, nav_space_s *); 
  AINavLayer Layer; 
  __int64 v7; 

  if ( !pNewSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1237, ASSERT_TYPE_ASSERT, "( pNewSpace )", (const char *)&queryFormat, "pNewSpace") )
    __debugbreak();
  maxSentients = level.maxSentients;
  if ( level.maxSentients > 0x110 )
  {
    LODWORD(v7) = level.maxSentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 71, ASSERT_TYPE_ASSERT, "( level.maxSentients ) <= ( ( sizeof( *array_counter( s_Navigators3D ) ) + 0 ) )", "level.maxSentients <= ARRAY_COUNT( s_Navigators3D )\n\t%i, %i", v7, 272) )
      __debugbreak();
    maxSentients = level.maxSentients;
  }
  v3 = maxSentients;
  if ( maxSentients > 0 )
  {
    v4 = &s_Navigators3D;
    do
    {
      if ( v4->m_bInUse && v4->m_pSpace != pNewSpace )
      {
        FindMostLikelySpace = v4->FindMostLikelySpace;
        Layer = Nav_GetLayer(v4);
        if ( FindMostLikelySpace(v4, &v4->m_CurSnappedPos, (const AINavLayer)Layer, NULL) == pNewSpace )
          v4->SetSpace(v4, pNewSpace);
      }
      v4 = (AINavigator *)((char *)v4 + 424);
      --v3;
    }
    while ( v3 );
  }
}

/*
==============
AINavigator3D::UpdateCurSegment
==============
*/
char AINavigator3D::UpdateCurSegment(AINavigator3D *this, const vec3_t *newPos, const bfx::VolumeHandle *hNewVolume)
{
  bfx::VolumePathSegment *Segment; 
  bfx::VolumeHandle *Volume; 
  bool v8; 
  float m_MaxDeviationFromPath; 
  bfx::VolumePathSegment *v11; 
  const bfx::Vector3 *StartPos; 
  void *m_pProxy; 
  float v14; 
  double v15; 
  __int64 m_CurCachedCornerIdx; 
  int v17; 
  unsigned int v18; 
  int NCorners; 
  int m_CurSegment; 
  bfx::VolumePathSegment *v21; 
  const bfx::VolumeHandle *v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  __int64 m_LastCachedCornerIdx; 
  int v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  char v31; 
  __int64 startSegment; 
  __int64 startSegmenta; 
  __int64 v34; 
  unsigned int NumSegments; 
  bfx::VolumeHandle result; 
  float m_z; 
  bfx::VolumeHandle rhs; 
  vec3_t v39; 
  __int64 v40; 
  vec3_t end; 
  vec3_t start; 

  v40 = -2i64;
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 712, ASSERT_TYPE_ASSERT, "( m_Path.IsValid() )", (const char *)&queryFormat, "m_Path.IsValid()") )
    __debugbreak();
  if ( this->m_CurSegment >= bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path) )
  {
    NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path);
    LODWORD(startSegment) = this->m_CurSegment;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 713, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurSegment ) < (unsigned)( m_Path.GetNumSegments() )", "m_CurSegment doesn't index m_Path.GetNumSegments()\n\t%i not in [0, %i)", startSegment, NumSegments) )
      __debugbreak();
  }
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, this->m_CurSegment);
  if ( AINavigator::ShouldPathOutOfBounds(this) && this->IsNextCornerGoal(this) )
    return 1;
  if ( bfx::VolumeHandle::operator==((bfx::VolumeHandle *)hNewVolume, &this->m_hCurVolume) )
  {
    Volume = bfx::VolumePathSegment::GetVolume(Segment, &result);
    v8 = bfx::VolumeHandle::operator!=(Volume, hNewVolume);
    bfx::VolumeHandle::~VolumeHandle(&result);
    if ( v8 )
      return 0;
    m_MaxDeviationFromPath = this->m_MaxDeviationFromPath;
    v11 = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, this->m_CurSegment);
    StartPos = bfx::VolumePathSegment::GetStartPos(v11);
    result.m_pProxy = *(void **)&StartPos->m_x;
    m_pProxy = result.m_pProxy;
    m_z = StartPos->m_z;
    v14 = m_z;
    v39 = (vec3_t)*bfx::VolumePathSegment::GetEndPos(v11);
    *(double *)start.v = *(double *)&m_pProxy;
    start.v[2] = v14;
    end = v39;
    if ( (float)((float)((float)((float)(v39.v[1] - *((float *)&result.m_pProxy + 1)) * (float)(v39.v[1] - *((float *)&result.m_pProxy + 1))) + (float)((float)(v39.v[0] - *(float *)&result.m_pProxy) * (float)(v39.v[0] - *(float *)&result.m_pProxy))) + (float)((float)(v39.v[2] - m_z) * (float)(v39.v[2] - m_z))) >= 0.001 )
      v15 = PointToLineSegmentDistSq(newPos, &start, &end);
    else
      *(float *)&v15 = (float)((float)((float)(newPos->v[1] - *((float *)&result.m_pProxy + 1)) * (float)(newPos->v[1] - *((float *)&result.m_pProxy + 1))) + (float)((float)(newPos->v[0] - *(float *)&result.m_pProxy) * (float)(newPos->v[0] - *(float *)&result.m_pProxy))) + (float)((float)(newPos->v[2] - m_z) * (float)(newPos->v[2] - m_z));
    if ( *(float *)&v15 >= (float)(m_MaxDeviationFromPath * m_MaxDeviationFromPath) )
    {
      if ( !Nav3D_IsStraightLineReachable(this->m_pSpace, &this->m_CurSnappedPos, &this->m_CachedCorners[this->m_CurCachedCornerIdx].m_Pos, &this->m_PathSpecOfCurPath) )
        return 0;
      m_CurCachedCornerIdx = this->m_CurCachedCornerIdx;
      if ( !this->m_CachedCorners[m_CurCachedCornerIdx].m_bIsGoal )
      {
        v17 = m_CurCachedCornerIdx + 1;
        v18 = (int)((unsigned __int64)(1717986919i64 * ((int)m_CurCachedCornerIdx + 1)) >> 32) >> 1;
        if ( Nav3D_IsStraightLineReachable(this->m_pSpace, &this->m_CurSnappedPos, &this->m_CachedCorners[v17 - 5 * ((v18 >> 31) + v18)].m_Pos, &this->m_PathSpecOfCurPath) )
        {
          NCorners = AINavigator3D::CalculateNextNCorners(this, this->m_CachedCorners, this->m_CachedCornersLastSegment, 5, 999999.0, this->m_CurSegment, 0);
          this->m_CurCachedCornerIdx = 0;
          this->m_LastCachedCornerIdx = NCorners - 1;
          m_CurSegment = this->m_CurSegment;
          this->m_PrevCornerSegment = m_CurSegment;
          this->m_CalculateCornersStartSegment = m_CurSegment;
          this->m_CalculateCornersCurPos.v[0] = this->m_CurSnappedPos.v[0];
          this->m_CalculateCornersCurPos.v[1] = this->m_CurSnappedPos.v[1];
          this->m_CalculateCornersCurPos.v[2] = this->m_CurSnappedPos.v[2];
        }
      }
    }
    return 1;
  }
  if ( this->m_CurSegment == bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path) - 1 )
    return 1;
  bfx::VolumeHandle::VolumeHandle(&rhs);
  v21 = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, this->m_CurSegment + 1);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 755, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
    __debugbreak();
  v22 = bfx::VolumePathSegment::GetVolume(v21, &result);
  bfx::VolumeHandle::operator=(&rhs, v22);
  bfx::VolumeHandle::~VolumeHandle(&result);
  if ( bfx::VolumeHandle::operator==((bfx::VolumeHandle *)hNewVolume, &rhs) )
  {
    if ( this->m_CurCachedCornerIdx >= 5u )
    {
      LODWORD(v34) = 5;
      LODWORD(startSegment) = this->m_CurCachedCornerIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 759, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurCachedCornerIdx ) < (unsigned)( cMaxNumCachedCorners )", "m_CurCachedCornerIdx doesn't index cMaxNumCachedCorners\n\t%i not in [0, %i)", startSegment, v34) )
        __debugbreak();
    }
    v23 = this->m_CurCachedCornerIdx;
    v24 = this->m_CurSegment;
    if ( this->m_CachedCornersLastSegment[v23] == v24 && !this->m_CachedCorners[v23].m_bIsGoal )
    {
      this->m_PrevCornerSegment = v24 + 1;
      if ( (_DWORD)v23 == this->m_LastCachedCornerIdx )
      {
        LODWORD(v34) = this->m_LastCachedCornerIdx;
        LODWORD(startSegment) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 766, ASSERT_TYPE_ASSERT, "( m_CurCachedCornerIdx ) != ( m_LastCachedCornerIdx )", "m_CurCachedCornerIdx != m_LastCachedCornerIdx\n\t%i, %i", startSegment, v34) )
          __debugbreak();
      }
      v25 = (this->m_CurCachedCornerIdx + 1) % 5;
      this->m_CurCachedCornerIdx = v25;
      m_LastCachedCornerIdx = this->m_LastCachedCornerIdx;
      if ( !this->m_CachedCorners[m_LastCachedCornerIdx].m_bIsGoal )
      {
        v27 = ((int)m_LastCachedCornerIdx + 1) % 5;
        if ( v27 == v25 )
        {
          LODWORD(v34) = v25;
          LODWORD(startSegment) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 794, ASSERT_TYPE_ASSERT, "( nextLastCorner ) != ( m_CurCachedCornerIdx )", "nextLastCorner != m_CurCachedCornerIdx\n\t%i, %i", startSegment, v34) )
            __debugbreak();
        }
        v28 = AINavigator3D::CalculateNextNCorners(this, &this->m_CachedCorners[v27], &this->m_CachedCornersLastSegment[v27], 1, 0.0, this->m_CachedCornersLastSegment[this->m_LastCachedCornerIdx] + 1, 1);
        if ( v28 <= 0 )
        {
          LODWORD(startSegmenta) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 800, ASSERT_TYPE_ASSERT, "( nCornersAdded ) > ( 0 )", "nCornersAdded > 0\n\t%i, %i", startSegmenta, 0i64) )
            __debugbreak();
        }
        else
        {
          this->m_LastCachedCornerIdx = v27;
        }
      }
    }
    ++this->m_CurSegment;
    v29 = this->m_LastCachedCornerIdx;
    v30 = this->m_CurCachedCornerIdx;
    if ( (_DWORD)v29 != v30 && ((int)v29 - v30 + 5) % 5 < 4 && !this->m_CachedCorners[v29].m_bIsGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 778, ASSERT_TYPE_ASSERT, "( m_CachedCorners[ m_LastCachedCornerIdx ].m_bIsGoal )", (const char *)&queryFormat, "m_CachedCorners[ m_LastCachedCornerIdx ].m_bIsGoal") )
      __debugbreak();
    v31 = 1;
  }
  else
  {
    v31 = 0;
  }
  bfx::VolumeHandle::~VolumeHandle(&rhs);
  return v31;
}

/*
==============
AINavigator3D::UpdatePathOutOfBounds
==============
*/
void AINavigator3D::UpdatePathOutOfBounds(AINavigator3D *this)
{
  AINavigator::UpdatePathOutOfBounds(this);
  if ( bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && !Nav3D_IsPointOnMesh(this->m_pSpace, &this->m_pEnt->r.currentOrigin, &this->m_PathSpec) && !Nav3D_IsPointOnMesh(this->m_pSpace, &this->m_RequestedGoalPos, &this->m_PathSpec) && bfx::VolumeHandle::IsValid(&this->m_hGoalVolume) && bfx::VolumeHandle::IsValid(&this->m_hCurVolume) && bfx::VolumeHandle::operator==(&this->m_hGoalVolume, &this->m_hCurVolume) )
    this->m_bPathingOutOfBounds = 1;
}

/*
==============
AINavigator3D::WriteNavigator
==============
*/
void AINavigator3D::WriteNavigator(AINavigator3D *this, MemoryFile *memFile)
{
  char v4; 
  int v5; 
  int i; 
  int p; 

  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1293, ASSERT_TYPE_ASSERT, "( m_pEnt )", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  p = this->m_pEnt->s.number;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_Layer;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &this->m_CurSnappedPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_RequestedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_SnappedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &this->m_PathSpec);
  MemFile_WriteData(memFile, 0xCui64, &this->m_PathSpecOfCurPath);
  p = this->m_TimeOfLastPathUpdate;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_TimeOfLastBlockage;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_TimeOfLastPathFindFail;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = this->m_TimeOfLastPathSuppressed;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, this->m_DistFromGoalToPathToRequestedGoal);
  MemFile_WriteFloat(memFile, this->m_MaxDeviationFromPath);
  LOBYTE(p) = this->m_bPathingOutOfBounds;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->m_ReevalPathTask.status[0];
  MemFile_WriteData(memFile, 1ui64, &p);
  p = this->m_ReevalPathTask.timestamp;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = this->m_bAllowSkipMultigoalPoint;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->m_bMultiGoalPath;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = this->m_bPathRequested;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path);
  v4 = p;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v4 )
  {
    MemFile_WriteData(memFile, 0xCui64, &this->m_LocalSnappedPathStartPos);
    p = this->m_CurSegment;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = this->m_PrevCornerSegment;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = this->m_CalculateCornersStartSegment;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 0xCui64, &this->m_CalculateCornersCurPos);
    p = (this->m_LastCachedCornerIdx - this->m_CurCachedCornerIdx + 5) % 5 + 1;
    v5 = p;
    MemFile_WriteData(memFile, 4ui64, &p);
    for ( i = 0; i < v5; ++i )
      MemFile_WriteData(memFile, 0xCui64, &this->m_CachedCorners[(i + this->m_CurCachedCornerIdx) % 5]);
  }
}

