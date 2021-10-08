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
  bfx::VolumeHandle v8; 
  bool v12; 
  AINavigator_vtbl *v16; 
  scrContext_t *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  bfx::VolumeHandle pClosestVolume; 
  __int64 v22; 
  AINavigator3D *v23; 
  vec3_t outClosestPos; 
  vec3_t v25; 

  v22 = -2i64;
  _RSI = this;
  v23 = this;
  AINavigator::AINavigator(this, pEnt, layer);
  _RSI->__vftable = (AINavigator_vtbl *)&AINavigator3D::`vftable';
  bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(&_RSI->m_Path);
  *(_QWORD *)&_RSI->m_PathSpecOfCurPath.m_volumeUsageFlags = -1i64;
  _RSI->m_PathSpecOfCurPath.m_maxSearchDist = 0.0;
  *(_QWORD *)&_RSI->m_PathSpec.m_volumeUsageFlags = -1i64;
  _RSI->m_PathSpec.m_maxSearchDist = 0.0;
  bfx::VolumeHandle::VolumeHandle(&_RSI->m_hGoalVolume);
  bfx::VolumeHandle::VolumeHandle(&_RSI->m_hCurVolume);
  `eh vector constructor iterator'(_RSI->m_CachedCorners, 0x18ui64, 5ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::nav_cornerdata_3D_t, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
  *(_QWORD *)&_RSI->m_PathSpec.m_volumeUsageFlags = -1i64;
  _RSI->m_PathSpec.m_maxSearchDist = 0.0;
  _RSI->m_bSnapGoalToClosestVerticalPos = 0;
  _RSI->m_PrevCornerSegment = 0;
  _RSI->m_pSpace = Nav_GetDefaultSpace();
  _RSI->ClearPath(_RSI);
  _RBX = &_RSI->m_CurSnappedPos;
  if ( !_RSI->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 811, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  Nav3D_GetClosestVolume(_RSI->m_pSpace, &_RSI->m_CurSnappedPos, &_RSI->m_PathSpec, &pClosestVolume);
  if ( bfx::VolumeHandle::IsValid(&pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle((bfx::VolumeHandle *)&v25, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(&_RSI->m_CurSnappedPos, v8, &outClosestPos);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  dword ptr [rsp+98h+outClosestPos], xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+98h+outClosestPos+4], xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+98h+outClosestPos+8], xmm0
    }
  }
  v12 = 0;
  if ( _RSI->m_bPathRequested && bfx::VolumeHandle::IsValid(&pClosestVolume) )
    v12 = !bfx::PolylinePath3DRCPtr::IsValid(&_RSI->m_Path) || !AINavigator3D::UpdateCurSegment(_RSI, &outClosestPos, &pClosestVolume);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outClosestPos]
    vmovss  dword ptr [rsi+30h], xmm0
    vmovss  xmm1, dword ptr [rsp+98h+outClosestPos+4]
    vmovss  dword ptr [rsi+34h], xmm1
    vmovss  xmm0, dword ptr [rsp+98h+outClosestPos+8]
    vmovss  dword ptr [rsi+38h], xmm0
  }
  bfx::VolumeHandle::operator=(&_RSI->m_hCurVolume, &pClosestVolume);
  v16 = _RSI->__vftable;
  if ( v12 )
  {
    if ( !v16->DoPathFind(_RSI) )
    {
      _RSI->GetRequestedGoalPos(_RSI, &v25);
      AINavigator::BadPathNotify(_RSI, &v25);
      _RSI->m_TimeOfLastPathFindFail = level.time;
    }
  }
  else
  {
    v16->UpdatePathOutOfBounds(_RSI);
  }
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  if ( !allowOffMeshSpawn && !Nav3D_IsPointOnMesh(_RSI->m_pSpace, &pEnt->r.currentOrigin, &_RSI->m_PathSpec) )
  {
    v17 = ScriptContext_Server();
    v18 = vtos(&pEnt->r.currentOrigin);
    v19 = SL_ConvertToString(pEnt->classname);
    v20 = j_va("Creating a 3D Navigator on entity '%s' at location %s outside of all Nav Volumes", v19, v18);
    Scr_Error(COM_ERR_5288, v17, v20);
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
  int v4; 
  int NCorners; 
  int v7; 
  float fmt; 
  int startSegmenta; 
  __int64 startSegment; 
  int bGetCornerAfterThreshold; 

  m_LastCachedCornerIdx = this->m_LastCachedCornerIdx;
  if ( this->m_CachedCorners[m_LastCachedCornerIdx].m_bIsGoal )
    return 0;
  v4 = ((int)m_LastCachedCornerIdx + 1) % 5;
  if ( v4 == this->m_CurCachedCornerIdx )
  {
    bGetCornerAfterThreshold = this->m_CurCachedCornerIdx;
    startSegmenta = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 794, ASSERT_TYPE_ASSERT, "( nextLastCorner ) != ( m_CurCachedCornerIdx )", "nextLastCorner != m_CurCachedCornerIdx\n\t%i, %i", startSegmenta, bGetCornerAfterThreshold) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+48h+fmt], xmm0
  }
  NCorners = AINavigator3D::CalculateNextNCorners(this, &this->m_CachedCorners[v4], &this->m_CachedCornersLastSegment[v4], 1, fmt, this->m_CachedCornersLastSegment[this->m_LastCachedCornerIdx] + 1, 1);
  v7 = NCorners;
  if ( NCorners <= 0 )
  {
    LODWORD(startSegment) = NCorners;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 800, ASSERT_TYPE_ASSERT, "( nCornersAdded ) > ( 0 )", "nCornersAdded > 0\n\t%i, %i", startSegment, 0i64) )
      __debugbreak();
    return v7 > 0;
  }
  else
  {
    this->m_LastCachedCornerIdx = v4;
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
  void *v14; 
  bfx::PolylinePath3DRCPtr *p_m_Path; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int NumSegments; 
  int v26; 
  bfx::VolumePathSegment *Segment; 
  const bfx::VolumeHandle *Volume; 
  int v33; 
  __int64 v34; 
  bfx::VolumePathSegment *v37; 
  bool v46; 
  bool IsStraightLineReachable; 
  const bfx::VolumeHandle *v48; 
  const bfx::VolumeHandle *v58; 
  __int64 v66; 
  __int64 v67; 
  bfx::VolumeHandle rhs; 
  bfx::VolumeHandle result; 
  __int64 v70; 
  nav_cornerdata_3D_t *v71; 
  AINavigator3D *v72; 
  bfx::VolumeHandle v73; 
  bfx::VolumeHandle v74; 
  bfx::PolylinePath3DRCPtr *v75; 
  __int64 v76; 
  vec3_t startPos; 
  vec3_t endPos; 
  __int64 v79; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v79;
  v76 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  v14 = (void *)maxCorners;
  v71 = pOutCorners;
  v72 = this;
  LODWORD(v70) = startSegment;
  if ( !pOutCorners && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 588, ASSERT_TYPE_ASSERT, "( pOutCorners )", (const char *)&queryFormat, "pOutCorners") )
    __debugbreak();
  p_m_Path = &this->m_Path;
  v75 = &this->m_Path;
  if ( bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
  {
    v19 = 0;
    if ( (int)v14 <= 0 )
    {
      LODWORD(v66) = (_DWORD)v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 593, ASSERT_TYPE_ASSERT, "( maxCorners ) > ( 0 )", "maxCorners > 0\n\t%i, %i", v66, 0i64) )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm10, xmm10, xmm10
      vmovss  xmm2, [rbp+50h+pathDistThreshold]
      vcmpless xmm1, xmm2, xmm10
      vmovss  xmm0, cs:__real@7f7fffff
      vblendvps xmm0, xmm2, xmm0, xmm1
      vmovss  [rbp+50h+pathDistThreshold], xmm0
    }
    NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&this->m_Path);
    v26 = NumSegments;
    if ( startSegment >= NumSegments )
    {
      LODWORD(v67) = NumSegments;
      LODWORD(v66) = startSegment;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 600, ASSERT_TYPE_ASSERT, "(unsigned)( startSegment ) < (unsigned)( numSegments )", "startSegment doesn't index numSegments\n\t%i not in [0, %i)", v66, v67) )
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
      _RAX = bfx::VolumePathSegment::GetStartPos(Segment);
      __asm
      {
        vmovss  xmm2, dword ptr [rax+8]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rax]
        vmovss  dword ptr [rbp+50h+startPos], xmm0
        vmovss  dword ptr [rbp+50h+startPos+4], xmm1
        vmovss  dword ptr [rbp+50h+startPos+8], xmm2
      }
      Volume = bfx::VolumePathSegment::GetVolume(Segment, &result);
      bfx::VolumeHandle::operator=(&rhs, Volume);
      bfx::VolumeHandle::~VolumeHandle(&result);
    }
    v33 = startSegment;
    if ( startSegment < v26 )
    {
      result.m_pProxy = v14;
      v34 = 0i64;
      _RDI = (__int64)v71;
      __asm { vmovss  xmm11, [rbp+50h+pathDistThreshold] }
      while ( 1 )
      {
        v37 = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(p_m_Path, v33);
        if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 629, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
          __debugbreak();
        _RAX = bfx::VolumePathSegment::GetStartPos(v37);
        __asm
        {
          vmovss  xmm7, dword ptr [rax+8]
          vmovss  xmm8, dword ptr [rax+4]
          vmovss  xmm9, dword ptr [rax]
        }
        _RAX = bfx::VolumePathSegment::GetEndPos(v37);
        __asm
        {
          vmovss  xmm6, dword ptr [rax+8]
          vmovss  xmm5, dword ptr [rax+4]
          vmovss  xmm4, dword ptr [rax]
          vmovss  dword ptr [rbp+50h+endPos], xmm4
          vmovss  dword ptr [rbp+50h+endPos+4], xmm5
          vmovss  dword ptr [rbp+50h+endPos+8], xmm6
        }
        v46 = v33 <= (unsigned int)v70;
        if ( v33 != (_DWORD)v70 )
        {
          if ( !bfx::VolumeHandle::IsValid(&rhs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 636, ASSERT_TYPE_ASSERT, "( prevVolume.IsValid() )", (const char *)&queryFormat, "prevVolume.IsValid()") )
            __debugbreak();
          IsStraightLineReachable = Nav3D_IsStraightLineReachable(v72->m_pSpace, &startPos, &endPos, &v72->m_PathSpecOfCurPath);
          v46 = !IsStraightLineReachable;
          if ( !IsStraightLineReachable )
          {
            if ( !bfx::VolumeHandle::IsValid(&rhs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 642, ASSERT_TYPE_ASSERT, "( prevVolume.IsValid() )", (const char *)&queryFormat, "prevVolume.IsValid()") )
              __debugbreak();
            __asm
            {
              vmovss  dword ptr [rdi], xmm9
              vmovss  dword ptr [rdi+4], xmm8
              vmovss  dword ptr [rdi+8], xmm7
            }
            bfx::VolumeHandle::operator=(&v71[v19].m_hVolume, &rhs);
            *(_BYTE *)(_RDI + 20) = 0;
            if ( pOutLastSegments )
            {
              if ( v33 - 1 >= (unsigned int)v26 )
              {
                LODWORD(v67) = v26;
                LODWORD(v66) = v33 - 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 650, ASSERT_TYPE_ASSERT, "(unsigned)( iSegment - 1 ) < (unsigned)( numSegments )", "iSegment - 1 doesn't index numSegments\n\t%i not in [0, %i)", v66, v67) )
                  __debugbreak();
              }
              pOutLastSegments[v34] = v33 - 1;
            }
            ++v19;
            ++v34;
            _RDI += 24i64;
            __asm
            {
              vmovss  dword ptr [rbp+50h+startPos], xmm9
              vmovss  dword ptr [rbp+50h+startPos+4], xmm8
              vmovss  dword ptr [rbp+50h+startPos+8], xmm7
            }
            v48 = bfx::VolumePathSegment::GetVolume(v37, &v73);
            bfx::VolumeHandle::operator=(&rhs, v48);
            bfx::VolumeHandle::~VolumeHandle(&v73);
            v46 = v34 <= (unsigned __int64)result.m_pProxy;
            if ( v34 >= (__int64)result.m_pProxy )
              break;
          }
          __asm
          {
            vmovss  xmm6, dword ptr [rbp+50h+endPos+8]
            vmovss  xmm5, dword ptr [rbp+50h+endPos+4]
            vmovss  xmm4, dword ptr [rbp+50h+endPos]
          }
        }
        __asm
        {
          vsubss  xmm0, xmm4, xmm9
          vsubss  xmm2, xmm5, xmm8
          vsubss  xmm3, xmm6, xmm7
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vaddss  xmm10, xmm10, xmm0
          vcomiss xmm10, xmm11
        }
        if ( v46 )
        {
          if ( v33 != v26 - 1 )
            goto LABEL_43;
          __asm
          {
            vmovss  dword ptr [rdi], xmm4
            vmovss  dword ptr [rdi+4], xmm5
            vmovss  dword ptr [rdi+8], xmm6
          }
          v58 = bfx::VolumePathSegment::GetVolume(v37, &v74);
          bfx::VolumeHandle::operator=(&v71[v19].m_hVolume, v58);
          bfx::VolumeHandle::~VolumeHandle(&v74);
          *(_BYTE *)(_RDI + 20) = 1;
          if ( pOutLastSegments )
            pOutLastSegments[v34] = v33;
          ++v19;
          ++v34;
          _RDI += 24i64;
          if ( v34 < (__int64)result.m_pProxy )
          {
LABEL_43:
            ++v33;
            p_m_Path = v75;
            if ( v33 < v26 )
              continue;
          }
        }
        break;
      }
    }
    bfx::VolumeHandle::~VolumeHandle(&rhs);
    v18 = v19;
  }
  else
  {
    v18 = 0i64;
  }
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
  return v18;
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
  AINavigator3D *v25; 
  char v26; 
  char v27; 
  unsigned __int8 v28; 
  bfx::PolylinePath3DRCPtr result; 
  bfx::VolumeHandle pClosestVolume; 
  bfx::VolumeHandle v32; 
  __int64 v33; 
  nav_pathfind_3D_input_t pInput; 
  vec3_t outSnappedPos; 
  vec3_t pos; 
  int v37[4]; 

  v33 = -2i64;
  _RBX = this;
  this->GetCurPos(this, (vec3_t *)v37);
  _RBX->GetRequestedGoalPos(_RBX, &pos);
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  if ( _RBX->m_bSnapGoalToClosestVerticalPos )
  {
    AINavigator3D::SnapPosToClosestVerticalPos(_RBX, &pos, &outSnappedPos);
    Nav3D_GetClosestVolume(_RBX->m_pSpace, &outSnappedPos, &_RBX->m_PathSpec, &pClosestVolume);
  }
  else
  {
    Nav3D_GetClosestVolume(_RBX->m_pSpace, &pos, &_RBX->m_PathSpec, &pClosestVolume);
    bfx::VolumeHandle::VolumeHandle(&v32, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(&pos, v2, &outSnappedPos);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outSnappedPos]
    vmovss  dword ptr [rbx+24h], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+outSnappedPos+4]
    vmovss  dword ptr [rbx+28h], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+outSnappedPos+8]
    vmovss  dword ptr [rbx+2Ch], xmm0
  }
  bfx::VolumeHandle::VolumeHandle(&pInput.m_hStartVolume);
  bfx::VolumeHandle::VolumeHandle(&pInput.m_hGoalVolume);
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_18]
    vmovss  dword ptr [rbp+57h+pInput.m_StartPos], xmm0
    vmovss  xmm1, [rbp+57h+var_14]
    vmovss  dword ptr [rbp+57h+pInput.m_StartPos+4], xmm1
    vmovss  xmm0, [rbp+57h+var_10]
    vmovss  dword ptr [rbp+57h+pInput.m_StartPos+8], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+outSnappedPos]
    vmovss  dword ptr [rbp+57h+pInput.m_GoalPos], xmm1
    vmovss  xmm0, dword ptr [rbp+57h+outSnappedPos+4]
    vmovss  dword ptr [rbp+57h+pInput.m_GoalPos+4], xmm0
    vmovss  xmm1, dword ptr [rbp+57h+outSnappedPos+8]
    vmovss  dword ptr [rbp+57h+pInput.m_GoalPos+8], xmm1
  }
  bfx::VolumeHandle::operator=(&pInput.m_hStartVolume, &_RBX->m_hCurVolume);
  bfx::VolumeHandle::operator=(&pInput.m_hGoalVolume, &pClosestVolume);
  bfx::VolumeHandle::operator=(&_RBX->m_hGoalVolume, &pClosestVolume);
  pInput.m_bSnapPoints = 0;
  pInput.m_pPathSpec = &_RBX->m_PathSpec;
  AINavigator3D::FindPath(_RBX, &result, &pInput);
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&result) )
  {
    v25 = _RBX;
LABEL_14:
    _RBX->ClearPath(v25);
    v28 = 0;
    goto LABEL_15;
  }
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 915, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&result);
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&result, NumSegments - 1);
  if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 920, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
    __debugbreak();
  bfx::VolumePathSegment::GetEndPos(Segment);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outSnappedPos]
    vsubss  xmm3, xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rbp+57h+outSnappedPos+4]
    vsubss  xmm2, xmm1, dword ptr [rax+4]
    vmovss  xmm0, dword ptr [rbp+57h+outSnappedPos+8]
    vsubss  xmm4, xmm0, dword ptr [rax+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
  }
  v25 = _RBX;
  __asm { vcomiss xmm2, cs:__real@40800000 }
  if ( !(v26 | v27) )
    goto LABEL_14;
  AINavigator3D::SetPath(_RBX, &result, &pInput);
  v28 = 1;
LABEL_15:
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr(&result);
  bfx::VolumeHandle::~VolumeHandle(&pInput.m_hGoalVolume);
  bfx::VolumeHandle::~VolumeHandle(&pInput.m_hStartVolume);
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v28;
}

/*
==============
AINavigator3D::DrawPath
==============
*/
void AINavigator3D::DrawPath(AINavigator3D *this, int mode)
{
  const dvar_t *v6; 
  signed int NumSegments; 
  signed int i; 
  bfx::VolumePathSegment *Segment; 
  nav_space_s *DefaultSpace; 
  bool IsStraightLineReachable; 
  const vec4_t *v20; 
  int NCorners; 
  __int64 v26; 
  nav_space_s *v32; 
  bool v33; 
  const vec4_t *v34; 
  float fmt; 
  vec3_t end; 
  vec3_t start; 
  vec3_t endPos; 
  vec3_t startPos; 
  nav_cornerdata_3D_t ptr[32]; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RSI = this;
  if ( bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
  {
    v6 = DCONST_DVARBOOL_ai_showBfxPath;
    if ( !DCONST_DVARBOOL_ai_showBfxPath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showBfxPath") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&_RSI->m_Path);
      for ( i = _RSI->m_CurSegment; i < NumSegments; ++i )
      {
        Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&_RSI->m_Path, i);
        _RAX = bfx::VolumePathSegment::GetStartPos(Segment);
        __asm
        {
          vmovss  xmm2, dword ptr [rax+8]
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rsp+3D0h+startPos], xmm0
          vmovss  dword ptr [rsp+3D0h+startPos+4], xmm1
          vmovss  dword ptr [rbp+2D0h+startPos+8], xmm2
        }
        _RAX = bfx::VolumePathSegment::GetEndPos(Segment);
        __asm
        {
          vmovss  xmm2, dword ptr [rax+8]
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  xmm0, dword ptr [rax]
          vmovss  dword ptr [rsp+3D0h+endPos], xmm0
          vmovss  dword ptr [rsp+3D0h+endPos+4], xmm1
          vmovss  dword ptr [rsp+3D0h+endPos+8], xmm2
        }
        if ( mode < 3 || (DefaultSpace = Nav_GetDefaultSpace(), IsStraightLineReachable = Nav3D_IsStraightLineReachable(DefaultSpace, &startPos, &endPos, &_RSI->m_PathSpecOfCurPath), v20 = &colorRed, IsStraightLineReachable) )
          v20 = &colorBlue;
        G_DebugLine(&startPos, &endPos, v20, 0);
      }
    }
    `eh vector constructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::nav_cornerdata_3D_t, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
    __asm
    {
      vmovss  xmm0, cs:__real@4b18967f
      vmovss  dword ptr [rsp+3D0h+fmt], xmm0
    }
    NCorners = AINavigator3D::CalculateNextNCorners(_RSI, ptr, NULL, 32, fmt, _RSI->m_CurSegment, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+30h]
      vmovss  dword ptr [rsp+3D0h+start], xmm0
      vmovss  xmm1, dword ptr [rsi+34h]
      vmovss  dword ptr [rsp+3D0h+start+4], xmm1
      vmovss  xmm0, dword ptr [rsi+38h]
      vmovss  dword ptr [rsp+3D0h+start+8], xmm0
    }
    v26 = NCorners;
    if ( NCorners > 0 )
    {
      _RDI = &ptr[0].m_Pos.v[2];
      __asm { vmovss  xmm6, cs:__real@40c00000 }
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi-8]
          vmovss  dword ptr [rsp+3D0h+end], xmm0
          vmovss  xmm1, dword ptr [rdi-4]
          vmovss  dword ptr [rsp+3D0h+end+4], xmm1
          vmovss  xmm0, dword ptr [rdi]
          vmovss  dword ptr [rsp+3D0h+end+8], xmm0
        }
        if ( mode < 3 || (v32 = Nav_GetDefaultSpace(), v33 = Nav3D_IsStraightLineReachable(v32, &start, &end, &_RSI->m_PathSpecOfCurPath), v34 = &colorRed, v33) )
          v34 = &colorMagenta;
        G_DebugLine(&start, &end, v34, 0);
        __asm { vmovaps xmm1, xmm6; radius }
        G_DebugCircle(&end, *(float *)&_XMM1, &colorMagenta, 0, 1, 1);
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+3D0h+end]
          vmovsd  qword ptr [rsp+3D0h+start], xmm0
        }
        start.v[2] = end.v[2];
        _RDI += 6;
        --v26;
      }
      while ( v26 );
    }
    `eh vector destructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
  }
  _R11 = &v45;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  const bfx::VolumeHandle *ClosestVolume; 
  const bfx::VolumeHandle *v14; 
  const bfx::PolylinePath3DRCPtr *Path3DCustom; 
  float v18; 
  bfx::Vector3 pos; 
  bfx::Vector3 v20; 
  bfx::VolumeHandle v21; 
  bfx::PolylinePath3DRCPtr *v22; 
  bfx::VolumeHandle v23; 
  bfx::VolumeHandle resulta; 

  v22 = result;
  _RBX = pInput;
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 932, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&v23);
  bfx::VolumeHandle::VolumeHandle(&v21);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rbp+pos.m_x], xmm0
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  [rbp+pos.m_y], xmm1
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+pos.m_z], xmm0
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rbp+var_18.m_x], xmm0
    vmovss  xmm1, dword ptr [rbx+10h]
    vmovss  [rbp+var_18.m_y], xmm1
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rbp+var_18.m_z], xmm0
  }
  _RDI = _RBX->m_pPathSpec;
  if ( !_RDI )
    _RDI = &this->m_PathSpec;
  if ( bfx::VolumeHandle::IsValid(&_RBX->m_hStartVolume) )
  {
    bfx::VolumeHandle::operator=(&v23, &_RBX->m_hStartVolume);
  }
  else if ( !bfx::VolumeHandle::IsValid(&v23) )
  {
    ClosestVolume = bfx::GetClosestVolume(&resulta, &this->m_pSpace->hSpace, &pos, _RDI);
    bfx::VolumeHandle::operator=(&v23, ClosestVolume);
    bfx::VolumeHandle::~VolumeHandle(&resulta);
  }
  if ( !bfx::VolumeHandle::IsValid(&v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 959, ASSERT_TYPE_ASSERT, "( hStartVolume.IsValid() )", (const char *)&queryFormat, "hStartVolume.IsValid()") )
    __debugbreak();
  if ( bfx::VolumeHandle::IsValid(&_RBX->m_hGoalVolume) )
  {
    bfx::VolumeHandle::operator=(&v21, &_RBX->m_hGoalVolume);
  }
  else if ( !bfx::VolumeHandle::IsValid(&v21) )
  {
    v14 = bfx::GetClosestVolume(&resulta, &this->m_pSpace->hSpace, &v20, _RDI);
    bfx::VolumeHandle::operator=(&v21, v14);
    bfx::VolumeHandle::~VolumeHandle(&resulta);
  }
  if ( !bfx::VolumeHandle::IsValid(&v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 969, ASSERT_TYPE_ASSERT, "( hGoalVolume.IsValid() )", (const char *)&queryFormat, "hGoalVolume.IsValid()") )
    __debugbreak();
  bfx::PolylinePath3DRCPtr::PolylinePath3DRCPtr(result);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+78h+var_48], xmm0
  }
  Path3DCustom = Nav_FindPath3DCustom((bfx::PolylinePath3DRCPtr *)&resulta, this->m_pSpace, &_RBX->m_StartPos, &_RBX->m_GoalPos, _RDI->m_volumeUsageFlags, _RDI->m_applyPenaltyFlags, v18);
  bfx::PolylinePath3DRCPtr::operator=(result, Path3DCustom);
  bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr((bfx::PolylinePath3DRCPtr *)&resulta);
  bfx::VolumeHandle::~VolumeHandle(&v21);
  bfx::VolumeHandle::~VolumeHandle(&v23);
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
  bfx::VolumeHandle v6; 
  bfx::VolumeHandle v7; 
  vec3_t origin; 

  __asm { vmovsd  xmm0, qword ptr [rdx] }
  origin.v[2] = pos->v[2];
  __asm { vmovsd  qword ptr [rsp+48h+origin], xmm0 }
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

  _RBX = outPoint;
  if ( !bfx::PolylinePath3DRCPtr::IsValid((bfx::PolylinePath3DRCPtr *)path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 915, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments((bfx::PolylinePath3DRCPtr *)path);
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment((bfx::PolylinePath3DRCPtr *)path, NumSegments - 1);
  if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 920, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
    __debugbreak();
  _RAX = bfx::VolumePathSegment::GetEndPos(Segment);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  xmm0, dword ptr [rax+4]
  }
  *(float *)&_RAX = _RAX->m_x;
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  dword ptr [rbx+8], xmm1
  }
  LODWORD(_RBX->v[0]) = (_DWORD)_RAX;
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
  nav_cornerdata_t *v10; 
  __int64 result; 
  __int64 v13; 
  int v18; 
  int v19; 
  int m_LastCachedCornerIdx; 
  int v21; 
  float *v22; 
  signed int v23; 
  bool v24; 
  int v25; 
  int NCorners; 
  const nav_cornerdata_3D_t *v44; 
  __int64 v45; 
  float fmt; 
  __int64 startSegment; 
  __int64 startSegmenta; 
  __int64 v51; 
  __int64 v52; 
  int v53; 
  int v54; 
  __int64 v56; 
  int v57[4]; 
  nav_cornerdata_3D_t ptr[32]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmm6, xmm3
  }
  v10 = pOutCorners;
  _RSI = this;
  if ( bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
  {
    v13 = 0i64;
    if ( maxCorners <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 494, ASSERT_TYPE_ASSERT, "( maxCorners ) > ( 0 )", "maxCorners > 0\n\t%i, %i", maxCorners, 0i64) )
      __debugbreak();
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 495, ASSERT_TYPE_ASSERT, "( pOutCorners )", (const char *)&queryFormat, "pOutCorners") )
      __debugbreak();
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcmpless xmm1, xmm6, xmm7
      vmovss  xmm0, cs:__real@7f7fffff
      vblendvps xmm6, xmm6, xmm0, xmm1
    }
    v18 = 5;
    if ( maxCorners < 5 )
      v18 = maxCorners;
    v19 = maxCorners - 5;
    if ( maxCorners - 5 < 0 )
      v19 = 0;
    v53 = v19;
    _RSI->GetCurPos(_RSI, (vec3_t *)v57);
    m_LastCachedCornerIdx = _RSI->m_LastCachedCornerIdx;
    v21 = 0;
    v56 = v18;
    if ( v18 <= 0 )
    {
LABEL_25:
      if ( v19 > 0 )
      {
        if ( v19 > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 539, ASSERT_TYPE_ASSERT, "(numAdditionalCorners <= cMaxCorners)", "%s\n\tToo many corners requested.  Increase local stack.", "numAdditionalCorners <= cMaxCorners") )
          __debugbreak();
        `eh vector constructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::nav_cornerdata_3D_t, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
        __asm
        {
          vsubss  xmm0, xmm6, xmm7
          vmovss  dword ptr [rsp+3E8h+fmt], xmm0
        }
        NCorners = AINavigator3D::CalculateNextNCorners(_RSI, ptr, NULL, v19, fmt, _RSI->m_CachedCornersLastSegment[m_LastCachedCornerIdx] + 1, bGetCornerAfterThreshold);
        if ( NCorners > 0 )
        {
          v44 = ptr;
          v45 = (unsigned int)NCorners;
          do
          {
            if ( v21 >= (unsigned int)maxCorners )
            {
              LODWORD(v52) = maxCorners;
              LODWORD(startSegmenta) = v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 546, ASSERT_TYPE_ASSERT, "(unsigned)( numCorners ) < (unsigned)( maxCorners )", "numCorners doesn't index maxCorners\n\t%i not in [0, %i)", startSegmenta, v52) )
                __debugbreak();
            }
            AINavigator3D::ConvertCornerData(_RSI, v44++, &v10[v21++]);
            --v45;
          }
          while ( v45 );
        }
        `eh vector destructor iterator'(ptr, 0x18ui64, 0x20ui64, (void (__fastcall *)(void *))nav_cornerdata_3D_t::~nav_cornerdata_3D_t);
      }
    }
    else
    {
      v22 = &v10->m_Pos.v[2];
      while ( 1 )
      {
        if ( v21 >= maxCorners )
        {
          LODWORD(v51) = maxCorners;
          LODWORD(startSegment) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 511, ASSERT_TYPE_ASSERT, "( numCorners ) < ( maxCorners )", "numCorners < maxCorners\n\t%i, %i", startSegment, v51) )
            __debugbreak();
        }
        v23 = v21 + _RSI->m_CurCachedCornerIdx;
        v24 = v23 <= (unsigned int)(5 * (v23 / 5));
        v25 = v23 % 5;
        v54 = v25;
        _R15 = v25;
        _R14 = (__int64)&_RSI->m_CachedCorners[v25];
        __asm
        {
          vmovss  xmm5, dword ptr [r14]
          vsubss  xmm3, xmm5, [rsp+3E8h+var_388]
          vmovss  xmm0, dword ptr [r14+4]
          vsubss  xmm2, xmm0, [rsp+3E8h+var_384]
          vmovss  xmm1, dword ptr [r14+8]
          vsubss  xmm4, xmm1, [rsp+3E8h+var_380]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vaddss  xmm7, xmm7, xmm0
          vcomiss xmm7, xmm6
        }
        if ( !v24 )
          break;
        __asm
        {
          vmovss  [rsp+3E8h+var_388], xmm5
          vmovss  xmm0, dword ptr [rsi+r15*8+0FCh]
          vmovss  [rsp+3E8h+var_384], xmm0
          vmovss  xmm1, dword ptr [rsi+r15*8+100h]
          vmovss  [rsp+3E8h+var_380], xmm1
        }
        if ( v22 == (float *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1224, ASSERT_TYPE_ASSERT, "( pToCorner )", (const char *)&queryFormat, "pToCorner") )
          __debugbreak();
        *(v22 - 2) = *(float *)_R14;
        *(v22 - 1) = *(float *)(_R14 + 4);
        *(_QWORD *)v22 = *(unsigned int *)(_R14 + 8);
        bfx::LinkHandle::Release((bfx::LinkHandle *)(v22 + 2));
        *((_BYTE *)v22 + 25) = 0;
        *((_BYTE *)v22 + 24) = *(_BYTE *)(_R14 + 20);
        v22[7] = NAN;
        ++v21;
        ++v13;
        v22 += 10;
        if ( _RSI->m_CachedCorners[_R15].m_bIsGoal )
          goto LABEL_36;
        if ( v13 >= v56 )
        {
          v10 = pOutCorners;
          v19 = v53;
          m_LastCachedCornerIdx = v54;
          goto LABEL_25;
        }
      }
      if ( bGetCornerAfterThreshold )
        AINavigator3D::ConvertCornerData(_RSI, &_RSI->m_CachedCorners[v25], &pOutCorners[v21++]);
    }
LABEL_36:
    result = (unsigned int)v21;
  }
  else
  {
    result = 0i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+3E8h+var_58]
    vmovaps xmm7, [rsp+3E8h+var_68]
  }
  return result;
}

/*
==============
AINavigator3D::GetPathDistToGoal
==============
*/
float AINavigator3D::GetPathDistToGoal(AINavigator3D *this)
{
  unsigned int NumSegments; 
  signed int m_CurSegment; 
  signed int v19; 
  bfx::VolumePathSegment *Segment; 
  int v40[4]; 

  _RBX = this;
  if ( bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
  {
    if ( _RBX->m_bPathingOutOfBounds )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  xmm1, dword ptr [rbx+1Ch]
        vsubss  xmm3, xmm0, dword ptr [rax+130h]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rbx+20h]
        vsubss  xmm4, xmm0, dword ptr [rax+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm0, xmm2, xmm2
      }
    }
    else
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vxorps  xmm6, xmm6, xmm6
      }
      NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&_RBX->m_Path);
      m_CurSegment = _RBX->m_CurSegment;
      v19 = NumSegments;
      while ( m_CurSegment < v19 )
      {
        Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&_RBX->m_Path, m_CurSegment);
        if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 184, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
          __debugbreak();
        if ( m_CurSegment == _RBX->m_CurSegment )
        {
          _RBX->GetCurPos(_RBX, (vec3_t *)v40);
        }
        else
        {
          _RAX = bfx::VolumePathSegment::GetStartPos(Segment);
          __asm
          {
            vmovss  xmm2, dword ptr [rax+8]
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  xmm0, dword ptr [rax]
            vmovss  [rsp+88h+var_58], xmm0
            vmovss  [rsp+88h+var_54], xmm1
            vmovss  [rsp+88h+var_50], xmm2
          }
        }
        _RAX = bfx::VolumePathSegment::GetEndPos(Segment);
        ++m_CurSegment;
        __asm
        {
          vmovss  xmm1, dword ptr [rax+4]
          vsubss  xmm3, xmm1, [rsp+88h+var_54]
          vmovss  xmm2, dword ptr [rax+8]
          vmovss  xmm0, dword ptr [rax]
          vsubss  xmm4, xmm0, [rsp+88h+var_58]
          vsubss  xmm5, xmm2, [rsp+88h+var_50]
          vmulss  xmm3, xmm3, xmm3
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm4, xmm3, xmm1
          vmulss  xmm2, xmm5, xmm5
          vaddss  xmm3, xmm4, xmm2
          vsqrtss xmm1, xmm3, xmm3
          vaddss  xmm6, xmm6, xmm1
        }
      }
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+88h+var_38]
      }
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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

  p_m_Path = &this->m_Path;
  if ( bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    *(float *)&_XMM0 = bfx::PolylinePath3DRCPtr::CalcLength(p_m_Path);
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(double *)&_XMM0;
}

/*
==============
AINavigator3D::GetPosAlongPath
==============
*/

void __fastcall AINavigator3D::GetPosAlongPath(AINavigator3D *this, double dist, vec3_t *outPos)
{
  __int64 v9; 
  char v14; 
  int v15[5]; 
  bfx::AreaHandle v16; 
  bfx::LinkHandle v17; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = outPos;
  __asm { vmovaps xmm6, xmm1 }
  bfx::AreaHandle::AreaHandle(&v16);
  bfx::LinkHandle::LinkHandle(&v17);
  v14 = 0;
  __asm { vmovaps xmm1, xmm6 }
  ((void (__fastcall *)(AINavigator3D *, __int64, _QWORD, int *, char))this->GetPosAlongPath)(this, v9, 0i64, v15, v14);
  __asm
  {
    vmovss  xmm0, [rsp+98h+var_60]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, [rsp+98h+var_5C]
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, [rsp+98h+var_58]
    vmovss  dword ptr [rdi+8], xmm0
  }
  bfx::LinkHandle::~LinkHandle(&v17);
  bfx::AreaHandle::~AreaHandle(&v16);
  __asm { vmovaps xmm6, [rsp+98h+var_18] }
}

/*
==============
AINavigator3D::GetPosAlongPath
==============
*/

void __fastcall AINavigator3D::GetPosAlongPath(AINavigator3D *this, double dist, bool bStopAtLink, nav_posAlongPathResults_t *pOutResults, bool bCalcArea)
{
  __asm
  {
    vmovaps [rsp+120h+var_80], xmm13
    vmovaps xmm13, xmm1
  }
  if ( !pOutResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 336, ASSERT_TYPE_ASSERT, "(pOutResults)", (const char *)&queryFormat, "pOutResults") )
    __debugbreak();
  if ( bCalcArea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 338, ASSERT_TYPE_ASSERT, "(!bCalcArea)", (const char *)&queryFormat, "!bCalcArea") )
    __debugbreak();
  bfx::AreaHandle::Release(&pOutResults->m_hArea);
  bfx::LinkHandle::Release(&pOutResults->m_hLink);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm13, xmm0
  }
  *(_QWORD *)&pOutResults->m_PosType = 0i64;
  this->GetCurPos(this, (vec3_t *)pOutResults);
  __asm { vmovaps xmm13, [rsp+120h+var_80] }
}

/*
==============
AINavigator3D::GetPrevCorner
==============
*/
void AINavigator3D::GetPrevCorner(AINavigator3D *this, vec3_t *corner)
{
  __int64 m_CurCachedCornerIdx; 
  __int64 v8; 
  int v9; 

  _RBX = this;
  _RDI = corner;
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 571, ASSERT_TYPE_ASSERT, "( m_Path.IsValid() )", (const char *)&queryFormat, "m_Path.IsValid()") )
    __debugbreak();
  if ( _RBX->m_CurCachedCornerIdx >= 5u )
  {
    v9 = 5;
    LODWORD(v8) = _RBX->m_CurCachedCornerIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 572, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurCachedCornerIdx ) < (unsigned)( cMaxNumCachedCorners )", "m_CurCachedCornerIdx doesn't index cMaxNumCachedCorners\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  m_CurCachedCornerIdx = _RBX->m_CurCachedCornerIdx;
  _RCX = 3 * m_CurCachedCornerIdx;
  if ( (int)m_CurCachedCornerIdx <= 0 )
  {
    _RDI->v[0] = _RBX->m_CachedCorners[m_CurCachedCornerIdx].m_Pos.v[0];
    _RDI->v[1] = _RBX->m_CachedCorners[m_CurCachedCornerIdx].m_Pos.v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rcx*8+100h]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  else
  {
    _RDI->v[0] = *((float *)&_RBX->m_PathSpec.m_applyPenaltyFlags + 6 * m_CurCachedCornerIdx);
    _RDI->v[1] = *(&_RBX->m_PathSpec.m_maxSearchDist + 6 * m_CurCachedCornerIdx);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rcx*8+0E8h]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
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

bool __fastcall AINavigator3D::IsPathDistToGoalAtLeast(AINavigator3D *this, double dist)
{
  bool result; 
  signed int NumSegments; 
  signed int m_CurSegment; 
  signed int v22; 
  bfx::VolumePathSegment *Segment; 
  char v41; 
  int v44[4]; 

  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovaps [rsp+98h+var_48], xmm7
  }
  _RDI = this;
  __asm { vmovaps xmm7, xmm1 }
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) )
    goto LABEL_13;
  if ( _RDI->m_bPathingOutOfBounds )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+18h]
      vmovss  xmm1, dword ptr [rdi+1Ch]
      vsubss  xmm3, xmm0, dword ptr [rax]
      vsubss  xmm2, xmm1, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rdi+20h]
      vsubss  xmm4, xmm0, dword ptr [rax+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcomiss xmm1, xmm7
    }
    result = !__CFADD__(_RDI->m_pEnt, 304i64);
    goto LABEL_14;
  }
  __asm { vxorps  xmm6, xmm6, xmm6 }
  NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&_RDI->m_Path);
  m_CurSegment = _RDI->m_CurSegment;
  v22 = NumSegments;
  if ( m_CurSegment >= NumSegments )
  {
LABEL_13:
    result = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&_RDI->m_Path, m_CurSegment);
    if ( !Segment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 224, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
      __debugbreak();
    if ( m_CurSegment == _RDI->m_CurSegment )
    {
      _RDI->GetCurPos(_RDI, (vec3_t *)v44);
    }
    else
    {
      _RAX = bfx::VolumePathSegment::GetStartPos(Segment);
      __asm
      {
        vmovss  xmm2, dword ptr [rax+8]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rax]
        vmovss  [rsp+98h+var_68], xmm0
        vmovss  [rsp+98h+var_64], xmm1
        vmovss  [rsp+98h+var_60], xmm2
      }
    }
    _RAX = bfx::VolumePathSegment::GetEndPos(Segment);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm3, xmm0, [rsp+98h+var_68]
      vmovss  xmm1, dword ptr [rax+4]
      vsubss  xmm2, xmm1, [rsp+98h+var_64]
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm4, xmm0, [rsp+98h+var_60]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vaddss  xmm6, xmm6, xmm1
      vcomiss xmm6, xmm7
    }
    if ( !v41 )
      break;
    if ( ++m_CurSegment >= v22 )
      goto LABEL_13;
  }
  result = 1;
LABEL_14:
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_38]
    vmovaps xmm7, [rsp+98h+var_48]
  }
  return result;
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

bool __fastcall AINavigator3D::IsPathLengthAtLeast(AINavigator3D *this, double dist)
{
  bool result; 
  char v9; 

  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  result = bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path);
  if ( result )
  {
    *(double *)&_XMM0 = ((double (__fastcall *)(AINavigator3D *))this->GetPathLength)(this);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
    return !v9;
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+38h+var_18] }
  }
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

bool __fastcall AINavigator3D::IsWithinDistOfSegment(AINavigator3D *this, const int segmentIndex, const vec3_t *pos, double maxDist)
{
  bfx::VolumePathSegment *Segment; 
  float m_z; 
  char v12; 
  char v13; 
  float v17; 
  bool result; 
  float v46; 
  vec3_t end; 
  vec3_t start; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
  }
  _RSI = pos;
  __asm { vmovaps xmm7, xmm3 }
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&this->m_Path, segmentIndex);
  _RAX = bfx::VolumePathSegment::GetStartPos(Segment);
  __asm { vmovsd  xmm6, qword ptr [rax] }
  m_z = _RAX->m_z;
  __asm { vmovsd  [rsp+0A8h+var_88], xmm6 }
  _RAX = bfx::VolumePathSegment::GetEndPos(Segment);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+0A8h+var_88]
    vmovsd  xmm0, qword ptr [rax]
  }
  v17 = _RAX->m_z;
  __asm
  {
    vmovsd  [rsp+0A8h+var_78], xmm0
    vmovss  xmm1, dword ptr [rsp+0A8h+var_78+4]
    vmovsd  qword ptr [rsp+0A8h+end], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+var_78]
    vsubss  xmm3, xmm0, xmm5
    vmovsd  qword ptr [rsp+0A8h+start], xmm6
    vmovss  xmm6, dword ptr [rsp+0A8h+var_88+4]
    vsubss  xmm2, xmm1, xmm6
    vmulss  xmm2, xmm2, xmm2
  }
  v46 = v17;
  __asm
  {
    vmovss  xmm0, [rsp+0A8h+var_70]
    vsubss  xmm4, xmm0, [rsp+0A8h+var_80]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@3a83126f
  }
  start.v[2] = m_z;
  end.v[2] = v17;
  if ( v12 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm1, dword ptr [rsi+4]
      vsubss  xmm3, xmm0, xmm5
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm4, xmm0, [rsp+0A8h+var_80]
      vsubss  xmm2, xmm1, xmm6
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm0, xmm3, xmm0
    }
  }
  else
  {
    *(double *)&_XMM0 = PointToLineSegmentDistSq(_RSI, &start, &end);
  }
  __asm
  {
    vmulss  xmm1, xmm7, xmm7
    vcomiss xmm1, xmm0
  }
  result = !(v12 | v13);
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_28]
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
  return result;
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
  __int64 v15; 
  gentity_s *v16; 
  __int64 v26; 
  __int64 v27; 
  int NCorners; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v45; 
  AINavigator3D *v48; 
  float fmt; 
  __int64 startSegment; 
  __int64 bGetCornerAfterThreshold; 
  char v62[4]; 
  AINavLayer planLayer; 
  unsigned int p; 
  bfx::PolylinePath3DRCPtr result; 
  bfx::VolumeHandle rhs; 
  __int64 v67; 
  nav_pathfind_3D_input_t pInput; 
  vec3_t origin; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  v67 = -2i64;
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
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  v15 = (int)p;
  if ( p >= 0x800 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1349, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", p, 2048) )
      __debugbreak();
    LODWORD(bGetCornerAfterThreshold) = 2048;
    LODWORD(startSegment) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", startSegment, bGetCornerAfterThreshold) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v15].r.isInUse != g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1350, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( entNum ) )", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
    __debugbreak();
  v16 = &g_entities[v15];
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm12, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm13, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm14, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm8, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm9, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm10, xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovaps xmm11, xmm0 }
  Nav_Create3DNavigator(v16, planLayer, 1, index);
  v27 = v26;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1364, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  _RSI = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 600i64))(v27);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1367, ASSERT_TYPE_ASSERT, "( pNav3D )", (const char *)&queryFormat, "pNav3D") )
    __debugbreak();
  MemFile_ReadData(memFile, 0xCui64, (void *)(_RSI + 220));
  MemFile_ReadData(memFile, 0xCui64, (void *)(_RSI + 208));
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  *(_DWORD *)(_RSI + 116) = planLayer;
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  *(_DWORD *)(_RSI + 192) = planLayer;
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  *(_DWORD *)(_RSI + 120) = planLayer;
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  *(_DWORD *)(_RSI + 124) = planLayer;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsi+0A0h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsi+0A4h], xmm0 }
  MemFile_ReadData(memFile, 1ui64, v62);
  *(_BYTE *)(_RSI + 168) = v62[0];
  *(_DWORD *)(_RSI + 132) = v15;
  MemFile_ReadData(memFile, 1ui64, v62);
  *(_BYTE *)(_RSI + 128) = v62[0];
  MemFile_ReadData(memFile, 4ui64, &planLayer);
  *(_DWORD *)(_RSI + 136) = planLayer;
  MemFile_ReadData(memFile, 1ui64, v62);
  *(_BYTE *)(_RSI + 169) = v62[0];
  MemFile_ReadData(memFile, 1ui64, v62);
  *(_BYTE *)(_RSI + 170) = v62[0];
  MemFile_ReadData(memFile, 1ui64, v62);
  *(_BYTE *)(_RSI + 171) = v62[0];
  __asm
  {
    vmovss  dword ptr [rsi+30h], xmm12
    vmovss  dword ptr [rsi+34h], xmm13
    vmovss  dword ptr [rsi+38h], xmm14
    vmovss  dword ptr [rsi+18h], xmm6
    vmovss  dword ptr [rsi+1Ch], xmm7
    vmovss  dword ptr [rsi+20h], xmm8
    vmovss  dword ptr [rsi+24h], xmm9
    vmovss  dword ptr [rsi+28h], xmm10
    vmovss  dword ptr [rsi+2Ch], xmm11
  }
  Nav3D_GetClosestVolume(*(nav_space_s **)(_RSI + 16), (const vec3_t *)(_RSI + 48), (const bfx::Path3DSpec *)(_RSI + 220), (bfx::VolumeHandle *)(_RSI + 240));
  MemFile_ReadData(memFile, 1ui64, v62);
  if ( v62[0] )
  {
    if ( !*(_BYTE *)(_RSI + 171) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1396, ASSERT_TYPE_ASSERT, "( pNav3D->m_bPathRequested )", (const char *)&queryFormat, "pNav3D->m_bPathRequested") )
      __debugbreak();
    if ( !bfx::VolumeHandle::IsValid((bfx::VolumeHandle *)(_RSI + 240)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1397, ASSERT_TYPE_ASSERT, "( pNav3D->m_hCurVolume.IsValid() )", (const char *)&queryFormat, "pNav3D->m_hCurVolume.IsValid()") )
      __debugbreak();
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbp+80h+origin], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbp+80h+origin+4], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm
    {
      vmovss  dword ptr [rbp+80h+origin+8], xmm0
      vmovss  xmm1, dword ptr [rbp+80h+origin]
      vmovss  dword ptr [rsi+60h], xmm1
      vmovss  xmm2, dword ptr [rbp+80h+origin+4]
      vmovss  dword ptr [rsi+64h], xmm2
      vmovss  dword ptr [rsi+68h], xmm0
    }
    bfx::VolumeHandle::VolumeHandle(&pInput.m_hStartVolume);
    bfx::VolumeHandle::VolumeHandle(&pInput.m_hGoalVolume);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+80h+origin]
      vmovss  dword ptr [rsp+180h+pInput.m_StartPos], xmm0
      vmovss  xmm1, dword ptr [rbp+80h+origin+4]
      vmovss  dword ptr [rsp+180h+pInput.m_StartPos+4], xmm1
      vmovss  xmm0, dword ptr [rbp+80h+origin+8]
      vmovss  dword ptr [rsp+180h+pInput.m_StartPos+8], xmm0
      vmovss  xmm1, dword ptr [rsi+24h]
      vmovss  dword ptr [rsp+180h+pInput.m_GoalPos], xmm1
      vmovss  xmm0, dword ptr [rsi+28h]
      vmovss  dword ptr [rsp+180h+pInput.m_GoalPos+4], xmm0
      vmovss  xmm1, dword ptr [rsi+2Ch]
      vmovss  dword ptr [rsp+180h+pInput.m_GoalPos+8], xmm1
    }
    pInput.m_bSnapPoints = 0;
    pInput.m_pPathSpec = (bfx::Path3DSpec *)(_RSI + 208);
    Nav3D_GetClosestVolume(*(nav_space_s **)(_RSI + 16), &origin, (const bfx::Path3DSpec *)(_RSI + 208), (bfx::VolumeHandle *)(_RSI + 240));
    if ( !bfx::VolumeHandle::IsValid((bfx::VolumeHandle *)(_RSI + 240)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1408, ASSERT_TYPE_ASSERT, "(pNav3D->m_hCurVolume.IsValid())", (const char *)&queryFormat, "pNav3D->m_hCurVolume.IsValid()") )
      __debugbreak();
    bfx::VolumeHandle::operator=(&pInput.m_hStartVolume, (const bfx::VolumeHandle *)(_RSI + 240));
    AINavigator3D::FindPath((AINavigator3D *)_RSI, &result, &pInput);
    if ( bfx::PolylinePath3DRCPtr::IsValid(&result) )
    {
      AINavigator3D::SetPath((AINavigator3D *)_RSI, &result, &pInput);
      MemFile_ReadData(memFile, 4ui64, &p);
      MemFile_ReadData(memFile, 4ui64, &planLayer);
      *(_DWORD *)(_RSI + 396) = planLayer;
      MemFile_ReadData(memFile, 4ui64, &planLayer);
      *(_DWORD *)(_RSI + 400) = planLayer;
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rsi+194h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rsi+198h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rsi+19Ch], xmm0 }
      *(_DWORD *)(_RSI + 108) = *(_DWORD *)(_RSI + 400);
      *(_DWORD *)(_RSI + 48) = *(_DWORD *)(_RSI + 404);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+198h]
        vmovss  dword ptr [rsi+34h], xmm0
        vmovss  xmm1, dword ptr [rsi+19Ch]
        vmovss  dword ptr [rsi+38h], xmm1
      }
      bfx::VolumeHandle::VolumeHandle(&rhs, (const bfx::VolumeHandle *)(_RSI + 240));
      Nav3D_GetClosestVolume(*(nav_space_s **)(_RSI + 16), (const vec3_t *)(_RSI + 48), (const bfx::Path3DSpec *)(_RSI + 208), (bfx::VolumeHandle *)(_RSI + 240));
      __asm
      {
        vmovss  xmm0, cs:__real@497423f0
        vmovss  dword ptr [rsp+180h+fmt], xmm0
      }
      NCorners = AINavigator3D::CalculateNextNCorners((AINavigator3D *)_RSI, (nav_cornerdata_3D_t *)(_RSI + 248), (int *)(_RSI + 368), 5, fmt, *(_DWORD *)(_RSI + 396), 1);
      v41 = NCorners;
      *(_DWORD *)(_RSI + 388) = 0;
      *(_DWORD *)(_RSI + 392) = NCorners - 1;
      __asm
      {
        vmovss  dword ptr [rsi+30h], xmm12
        vmovss  dword ptr [rsi+34h], xmm13
        vmovss  dword ptr [rsi+38h], xmm14
      }
      bfx::VolumeHandle::operator=((bfx::VolumeHandle *)(_RSI + 240), &rhs);
      *(_DWORD *)(_RSI + 108) = p;
      MemFile_ReadData(memFile, 4ui64, &planLayer);
      v42 = planLayer;
      if ( planLayer > NAV_LAYER_HUMAN )
      {
        v43 = v41;
        _RBX = _RSI + 256;
        v45 = planLayer;
        do
        {
          *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
          __asm { vmovaps xmm7, xmm0 }
          *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
          if ( v42 == v43 )
          {
            __asm
            {
              vmovss  dword ptr [rbx-8], xmm6
              vmovss  dword ptr [rbx-4], xmm7
              vmovss  dword ptr [rbx], xmm0
            }
          }
          _RBX += 24i64;
          --v45;
        }
        while ( v45 );
      }
      bfx::VolumeHandle::~VolumeHandle(&rhs);
    }
    bfx::PolylinePath3DRCPtr::~PolylinePath3DRCPtr(&result);
    bfx::VolumeHandle::~VolumeHandle(&pInput.m_hGoalVolume);
    bfx::VolumeHandle::~VolumeHandle(&pInput.m_hStartVolume);
  }
  v48 = (AINavigator3D *)_RSI;
  _R11 = &v70;
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
  }
  return v48;
}

/*
==============
AINavigator3D::SetCurPos
==============
*/
void AINavigator3D::SetCurPos(AINavigator3D *this, const vec3_t *curPos)
{
  bfx::VolumeHandle v4; 
  bool v8; 
  AINavigator_vtbl *v12; 
  bfx::VolumeHandle pClosestVolume; 
  __int64 v14; 
  vec3_t outClosestPos; 
  vec3_t v16; 

  v14 = -2i64;
  _RDI = curPos;
  _RBX = this;
  if ( !this->m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 811, ASSERT_TYPE_ASSERT, "( m_pSpace )", (const char *)&queryFormat, "m_pSpace") )
    __debugbreak();
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  Nav3D_GetClosestVolume(_RBX->m_pSpace, _RDI, &_RBX->m_PathSpec, &pClosestVolume);
  if ( bfx::VolumeHandle::IsValid(&pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle((bfx::VolumeHandle *)&v16, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(_RDI, v4, &outClosestPos);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr [rsp+78h+outClosestPos], xmm0
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+78h+outClosestPos+4], xmm1
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+78h+outClosestPos+8], xmm0
    }
  }
  v8 = 0;
  if ( _RBX->m_bPathRequested && bfx::VolumeHandle::IsValid(&pClosestVolume) )
    v8 = !bfx::PolylinePath3DRCPtr::IsValid(&_RBX->m_Path) || !AINavigator3D::UpdateCurSegment(_RBX, &outClosestPos, &pClosestVolume);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+outClosestPos]
    vmovss  dword ptr [rbx+30h], xmm0
    vmovss  xmm1, dword ptr [rsp+78h+outClosestPos+4]
    vmovss  dword ptr [rbx+34h], xmm1
    vmovss  xmm0, dword ptr [rsp+78h+outClosestPos+8]
    vmovss  dword ptr [rbx+38h], xmm0
  }
  bfx::VolumeHandle::operator=(&_RBX->m_hCurVolume, &pClosestVolume);
  v12 = _RBX->__vftable;
  if ( v8 )
  {
    if ( !v12->DoPathFind(_RBX) )
    {
      _RBX->GetRequestedGoalPos(_RBX, &v16);
      AINavigator::BadPathNotify(_RBX, &v16);
      _RBX->m_TimeOfLastPathFindFail = level.time;
    }
  }
  else
  {
    v12->UpdatePathOutOfBounds(_RBX);
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
  bool v7; 
  AINavigator_vtbl *v8; 
  bool v9; 

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
  if ( this->HasPath(this) )
  {
    __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
    if ( VecNCompareCustomEpsilon(goalPos->v, this->m_RequestedGoalPos.v, *(float *)&_XMM2, 3) )
      return 1;
  }
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  this->m_RequestedGoalPos.v[0] = goalPos->v[0];
  this->m_RequestedGoalPos.v[1] = goalPos->v[1];
  this->m_RequestedGoalPos.v[2] = goalPos->v[2];
  v7 = VecNCompareCustomEpsilon(this->m_CurSnappedPos.v, this->m_RequestedGoalPos.v, *(float *)&_XMM2, 3);
  v8 = this->__vftable;
  if ( v7 )
  {
    v8->ClearPath(this);
    return 1;
  }
  v9 = v8->DoPathFind(this);
  if ( !v9 )
    AINavigator::BadPathNotify(this, goalPos);
  result = v9;
  this->m_bPathRequested = v9;
  return result;
}

/*
==============
AINavigator3D::SetPath
==============
*/
void AINavigator3D::SetPath(AINavigator3D *this, const bfx::PolylinePath3DRCPtr *path, const nav_pathfind_3D_input_t *pInput)
{
  int NCorners; 
  bool v10; 
  float fmt; 

  _RBX = this;
  if ( !bfx::PolylinePath3DRCPtr::IsValid((bfx::PolylinePath3DRCPtr *)path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 988, ASSERT_TYPE_ASSERT, "( path.IsValid() )", (const char *)&queryFormat, "path.IsValid()") )
    __debugbreak();
  if ( !pInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 989, ASSERT_TYPE_ASSERT, "( pInput )", (const char *)&queryFormat, "pInput") )
    __debugbreak();
  bfx::PolylinePath3DRCPtr::operator=(&_RBX->m_Path, path);
  _RAX = pInput->m_pPathSpec;
  __asm
  {
    vmovsd  xmm0, qword ptr [rax]
    vmovsd  qword ptr [rbx+0D0h], xmm0
    vmovss  xmm0, cs:__real@497423f0
  }
  _RBX->m_PathSpecOfCurPath.m_maxSearchDist = _RAX->m_maxSearchDist;
  _RBX->m_CurSegment = 0;
  _RBX->m_PrevCornerSegment = 0;
  _RBX->m_TimeOfLastPathUpdate = level.time;
  _RBX->m_LocalSnappedPathStartPos.v[0] = pInput->m_StartPos.v[0];
  _RBX->m_LocalSnappedPathStartPos.v[1] = pInput->m_StartPos.v[1];
  _RBX->m_LocalSnappedPathStartPos.v[2] = pInput->m_StartPos.v[2];
  __asm { vmovss  dword ptr [rsp+48h+fmt], xmm0 }
  NCorners = AINavigator3D::CalculateNextNCorners(_RBX, _RBX->m_CachedCorners, _RBX->m_CachedCornersLastSegment, 5, fmt, 0, 1);
  _RBX->m_CalculateCornersStartSegment = 0;
  _RBX->m_CalculateCornersCurPos.v[0] = _RBX->m_CurSnappedPos.v[0];
  _RBX->m_CalculateCornersCurPos.v[1] = _RBX->m_CurSnappedPos.v[1];
  _RBX->m_CalculateCornersCurPos.v[2] = _RBX->m_CurSnappedPos.v[2];
  v10 = _RBX->m_ReevalPathTask.status[0] == 1;
  _RBX->m_CurCachedCornerIdx = 0;
  _RBX->m_LastCachedCornerIdx = NCorners - 1;
  _RBX->m_bPathRequested = 1;
  _RBX->m_bPathingOutOfBounds = 0;
  if ( v10 )
    AIScheduler::RemoveReevalPathTask(&_RBX->m_ReevalPathTask);
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
  unsigned __int8 v7; 
  bfx::VolumeHandle v8; 
  char v9; 
  bfx::VolumeHandle v17; 
  bfx::VolumeHandle v30; 
  bfx::VolumeHandle pClosestVolume; 
  bfx::VolumeHandle rhs; 
  __int64 v33; 
  vec3_t origin; 
  vec3_t outUp; 
  nav_probe_results_3D_s pOutResults; 

  v33 = -2i64;
  _RBX = outSnappedPos;
  Nav_GetSpaceUp(this->m_pSpace, &outUp);
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  Nav3D_GetClosestVolume(this->m_pSpace, pos, &this->m_PathSpec, &pClosestVolume);
  if ( bfx::VolumeHandle::IsValid(&pClosestVolume) )
  {
    bfx::VolumeHandle::VolumeHandle(&v30, &pClosestVolume);
    Nav3D_GetClosestPointInsideVolume(pos, v8, _RBX);
    *(double *)&_XMM0 = Nav_Get2DDistanceSqWithUp(pos, _RBX, &outUp);
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( v9 )
    {
      v7 = 1;
    }
    else
    {
      bfx::VolumeHandle::VolumeHandle(&rhs);
      __asm
      {
        vmovss  xmm3, cs:__real@42400000
        vmulss  xmm1, xmm3, dword ptr [rbp+57h+outUp]
        vaddss  xmm2, xmm1, dword ptr [rdi]
        vmovss  dword ptr [rbp+57h+origin], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+57h+outUp+4]
        vaddss  xmm2, xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rbp+57h+origin+4], xmm2
        vmulss  xmm1, xmm3, dword ptr [rbp+57h+outUp+8]
        vaddss  xmm2, xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rbp+57h+origin+8], xmm2
      }
      Nav3D_GetClosestVolume(this->m_pSpace, &origin, &this->m_PathSpec, &rhs);
      bfx::VolumeHandle::VolumeHandle(&v30, &rhs);
      Nav3D_GetClosestPointInsideVolume(&origin, v17, &origin);
      *(double *)&_XMM0 = Nav_Get2DDistanceSqWithUp(pos, &origin, &outUp);
      __asm { vcomiss xmm0, cs:__real@43100000 }
      if ( v9 )
      {
        Nav_Trace3D(this->m_pSpace, &origin, pos, &this->m_PathSpec, &pOutResults);
        if ( pOutResults.m_bCollided )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+var_50.m_EndPos]
            vmovss  dword ptr [rbx], xmm0
            vmovss  xmm1, dword ptr [rbp+57h+var_50.m_EndPos+4]
            vmovss  dword ptr [rbx+4], xmm1
            vmovss  xmm0, dword ptr [rbp+57h+var_50.m_EndPos+8]
            vmovss  dword ptr [rbx+8], xmm0
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, [rbp+57h+var_50.m_DistTraveled]
            vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
            vmulss  xmm2, xmm3, dword ptr [rbp+57h+outUp]
            vaddss  xmm0, xmm2, dword ptr [rbp+57h+origin]
            vmovss  dword ptr [rbx], xmm0
            vmulss  xmm2, xmm3, dword ptr [rbp+57h+outUp+4]
            vaddss  xmm0, xmm2, dword ptr [rbp+57h+origin+4]
            vmovss  dword ptr [rbx+4], xmm0
            vmulss  xmm2, xmm3, dword ptr [rbp+57h+outUp+8]
            vaddss  xmm0, xmm2, dword ptr [rbp+57h+origin+8]
            vmovss  dword ptr [rbx+8], xmm0
          }
        }
        v7 = 1;
      }
      else
      {
        v7 = 0;
      }
      bfx::VolumeHandle::~VolumeHandle(&rhs);
    }
  }
  else
  {
    v7 = 0;
  }
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return v7;
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
  nav_probe_results_3D_s pOutResults; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
    vmovaps [rsp+0A8h+var_48], xmm8
  }
  _RSI = outHitPos;
  _RBX = endPos;
  result = Nav_Trace3D(this->m_pSpace, startPos, endPos, &this->m_PathSpec, &pOutResults);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm6, xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm7, xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm8, xmm0, dword ptr [rdi+8]
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm2, xmm7, xmm7
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm3, [rsp+0A8h+var_78.m_DistTraveled]
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm5, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm0, xmm1, xmm3
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm7, xmm5
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsi], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm2, xmm8, xmm5
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsi+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsi+8], xmm1
    vmovaps xmm6, [rsp+0A8h+var_28]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, [rsp+0A8h+var_48]
  }
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
bool AINavigator3D::UpdateCurSegment(AINavigator3D *this, const vec3_t *newPos, const bfx::VolumeHandle *hNewVolume)
{
  bfx::VolumePathSegment *Segment; 
  bfx::VolumeHandle *Volume; 
  bool v12; 
  bool v13; 
  bfx::VolumePathSegment *v15; 
  float v18; 
  char v19; 
  __int64 m_CurCachedCornerIdx; 
  int v47; 
  unsigned int v48; 
  int NCorners; 
  int m_CurSegment; 
  bfx::VolumePathSegment *v52; 
  const bfx::VolumeHandle *v53; 
  __int64 v54; 
  int v55; 
  int v56; 
  __int64 m_LastCachedCornerIdx; 
  int v58; 
  int v60; 
  __int64 v61; 
  int v62; 
  bool v63; 
  float fmt; 
  float fmta; 
  __int64 startSegment; 
  __int64 startSegmenta; 
  __int64 v70; 
  unsigned int NumSegments; 
  bfx::VolumeHandle result; 
  float m_z; 
  bfx::VolumeHandle rhs; 
  float v76; 
  __int64 v77; 
  vec3_t end; 
  vec3_t start; 
  void *retaddr; 

  _RAX = &retaddr;
  v77 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R14 = newPos;
  _RSI = this;
  if ( !bfx::PolylinePath3DRCPtr::IsValid(&this->m_Path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 712, ASSERT_TYPE_ASSERT, "( m_Path.IsValid() )", (const char *)&queryFormat, "m_Path.IsValid()") )
    __debugbreak();
  if ( _RSI->m_CurSegment >= bfx::PolylinePath3DRCPtr::GetNumSegments(&_RSI->m_Path) )
  {
    NumSegments = bfx::PolylinePath3DRCPtr::GetNumSegments(&_RSI->m_Path);
    LODWORD(startSegment) = _RSI->m_CurSegment;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 713, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurSegment ) < (unsigned)( m_Path.GetNumSegments() )", "m_CurSegment doesn't index m_Path.GetNumSegments()\n\t%i not in [0, %i)", startSegment, NumSegments) )
      __debugbreak();
  }
  Segment = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&_RSI->m_Path, _RSI->m_CurSegment);
  if ( AINavigator::ShouldPathOutOfBounds(_RSI) && _RSI->IsNextCornerGoal(_RSI) )
    goto LABEL_20;
  if ( bfx::VolumeHandle::operator==((bfx::VolumeHandle *)hNewVolume, &_RSI->m_hCurVolume) )
  {
    Volume = bfx::VolumePathSegment::GetVolume(Segment, &result);
    v12 = bfx::VolumeHandle::operator!=(Volume, hNewVolume);
    bfx::VolumeHandle::~VolumeHandle(&result);
    if ( v12 )
    {
LABEL_11:
      v13 = 0;
      goto LABEL_50;
    }
    __asm { vmovss  xmm7, dword ptr [rsi+0A4h] }
    v15 = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&_RSI->m_Path, _RSI->m_CurSegment);
    _RAX = bfx::VolumePathSegment::GetStartPos(v15);
    __asm
    {
      vmovsd  xmm6, qword ptr [rax]
      vmovsd  [rbp+57h+result.m_pProxy], xmm6
    }
    m_z = _RAX->m_z;
    v18 = m_z;
    _RAX = bfx::VolumePathSegment::GetEndPos(v15);
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vmovsd  [rbp+57h+var_98], xmm0
    }
    v76 = _RAX->m_z;
    __asm { vmovsd  qword ptr [rbp+57h+start], xmm6 }
    start.v[2] = v18;
    __asm { vmovsd  qword ptr [rbp+57h+end], xmm0 }
    end.v[2] = v76;
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+57h+result.m_pProxy]
      vmovss  xmm0, dword ptr [rbp+57h+var_98]
      vsubss  xmm3, xmm0, xmm5
      vmovss  xmm6, dword ptr [rbp+57h+result.m_pProxy+4]
      vmovss  xmm1, dword ptr [rbp+57h+var_98+4]
      vsubss  xmm2, xmm1, xmm6
      vmovss  xmm0, [rbp+57h+var_90]
      vsubss  xmm4, xmm0, [rbp+57h+var_A8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@3a83126f
    }
    if ( v19 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm3, xmm0, xmm5
        vmovss  xmm1, dword ptr [r14+4]
        vsubss  xmm2, xmm1, xmm6
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm4, xmm0, [rbp+57h+var_A8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm0, xmm3, xmm0
      }
    }
    else
    {
      *(double *)&_XMM0 = PointToLineSegmentDistSq(_R14, &start, &end);
    }
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vcomiss xmm0, xmm1
    }
    if ( !v19 )
    {
      if ( !Nav3D_IsStraightLineReachable(_RSI->m_pSpace, &_RSI->m_CurSnappedPos, &_RSI->m_CachedCorners[_RSI->m_CurCachedCornerIdx].m_Pos, &_RSI->m_PathSpecOfCurPath) )
        goto LABEL_11;
      m_CurCachedCornerIdx = _RSI->m_CurCachedCornerIdx;
      if ( !_RSI->m_CachedCorners[m_CurCachedCornerIdx].m_bIsGoal )
      {
        v47 = m_CurCachedCornerIdx + 1;
        v48 = (int)((unsigned __int64)(1717986919i64 * ((int)m_CurCachedCornerIdx + 1)) >> 32) >> 1;
        if ( Nav3D_IsStraightLineReachable(_RSI->m_pSpace, &_RSI->m_CurSnappedPos, &_RSI->m_CachedCorners[v47 - 5 * ((v48 >> 31) + v48)].m_Pos, &_RSI->m_PathSpecOfCurPath) )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@497423f0
            vmovss  dword ptr [rsp+0F0h+fmt], xmm0
          }
          NCorners = AINavigator3D::CalculateNextNCorners(_RSI, _RSI->m_CachedCorners, _RSI->m_CachedCornersLastSegment, 5, fmt, _RSI->m_CurSegment, 0);
          _RSI->m_CurCachedCornerIdx = 0;
          _RSI->m_LastCachedCornerIdx = NCorners - 1;
          m_CurSegment = _RSI->m_CurSegment;
          _RSI->m_PrevCornerSegment = m_CurSegment;
          _RSI->m_CalculateCornersStartSegment = m_CurSegment;
          _RSI->m_CalculateCornersCurPos.v[0] = _RSI->m_CurSnappedPos.v[0];
          _RSI->m_CalculateCornersCurPos.v[1] = _RSI->m_CurSnappedPos.v[1];
          _RSI->m_CalculateCornersCurPos.v[2] = _RSI->m_CurSnappedPos.v[2];
        }
      }
    }
LABEL_20:
    v13 = 1;
    goto LABEL_50;
  }
  if ( _RSI->m_CurSegment == bfx::PolylinePath3DRCPtr::GetNumSegments(&_RSI->m_Path) - 1 )
    goto LABEL_20;
  bfx::VolumeHandle::VolumeHandle(&rhs);
  v52 = (bfx::VolumePathSegment *)bfx::PolylinePath3DRCPtr::GetSegment(&_RSI->m_Path, _RSI->m_CurSegment + 1);
  if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 755, ASSERT_TYPE_ASSERT, "( pSegment )", (const char *)&queryFormat, "pSegment") )
    __debugbreak();
  v53 = bfx::VolumePathSegment::GetVolume(v52, &result);
  bfx::VolumeHandle::operator=(&rhs, v53);
  bfx::VolumeHandle::~VolumeHandle(&result);
  if ( bfx::VolumeHandle::operator==((bfx::VolumeHandle *)hNewVolume, &rhs) )
  {
    if ( _RSI->m_CurCachedCornerIdx >= 5u )
    {
      LODWORD(v70) = 5;
      LODWORD(startSegment) = _RSI->m_CurCachedCornerIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 759, ASSERT_TYPE_ASSERT, "(unsigned)( m_CurCachedCornerIdx ) < (unsigned)( cMaxNumCachedCorners )", "m_CurCachedCornerIdx doesn't index cMaxNumCachedCorners\n\t%i not in [0, %i)", startSegment, v70) )
        __debugbreak();
    }
    v54 = _RSI->m_CurCachedCornerIdx;
    v55 = _RSI->m_CurSegment;
    if ( _RSI->m_CachedCornersLastSegment[v54] == v55 && !_RSI->m_CachedCorners[v54].m_bIsGoal )
    {
      _RSI->m_PrevCornerSegment = v55 + 1;
      if ( (_DWORD)v54 == _RSI->m_LastCachedCornerIdx )
      {
        LODWORD(v70) = _RSI->m_LastCachedCornerIdx;
        LODWORD(startSegment) = v54;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 766, ASSERT_TYPE_ASSERT, "( m_CurCachedCornerIdx ) != ( m_LastCachedCornerIdx )", "m_CurCachedCornerIdx != m_LastCachedCornerIdx\n\t%i, %i", startSegment, v70) )
          __debugbreak();
      }
      v56 = (_RSI->m_CurCachedCornerIdx + 1) % 5;
      _RSI->m_CurCachedCornerIdx = v56;
      m_LastCachedCornerIdx = _RSI->m_LastCachedCornerIdx;
      if ( !_RSI->m_CachedCorners[m_LastCachedCornerIdx].m_bIsGoal )
      {
        v58 = ((int)m_LastCachedCornerIdx + 1) % 5;
        if ( v58 == v56 )
        {
          LODWORD(v70) = v56;
          LODWORD(startSegment) = v58;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 794, ASSERT_TYPE_ASSERT, "( nextLastCorner ) != ( m_CurCachedCornerIdx )", "nextLastCorner != m_CurCachedCornerIdx\n\t%i, %i", startSegment, v70) )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+0F0h+fmt], xmm0
        }
        v60 = AINavigator3D::CalculateNextNCorners(_RSI, &_RSI->m_CachedCorners[v58], &_RSI->m_CachedCornersLastSegment[v58], 1, fmta, _RSI->m_CachedCornersLastSegment[_RSI->m_LastCachedCornerIdx] + 1, 1);
        if ( v60 <= 0 )
        {
          LODWORD(startSegmenta) = v60;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 800, ASSERT_TYPE_ASSERT, "( nCornersAdded ) > ( 0 )", "nCornersAdded > 0\n\t%i, %i", startSegmenta, 0i64) )
            __debugbreak();
        }
        else
        {
          _RSI->m_LastCachedCornerIdx = v58;
        }
      }
    }
    ++_RSI->m_CurSegment;
    v61 = _RSI->m_LastCachedCornerIdx;
    v62 = _RSI->m_CurCachedCornerIdx;
    if ( (_DWORD)v61 != v62 && ((int)v61 - v62 + 5) % 5 < 4 && !_RSI->m_CachedCorners[v61].m_bIsGoal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 778, ASSERT_TYPE_ASSERT, "( m_CachedCorners[ m_LastCachedCornerIdx ].m_bIsGoal )", (const char *)&queryFormat, "m_CachedCorners[ m_LastCachedCornerIdx ].m_bIsGoal") )
      __debugbreak();
    v63 = 1;
  }
  else
  {
    v63 = 0;
  }
  bfx::VolumeHandle::~VolumeHandle(&rhs);
  v13 = v63;
LABEL_50:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+0F0h+var_48+8]
    vmovaps xmm7, [rsp+0F0h+var_58+8]
  }
  return v13;
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
  char v6; 
  int v7; 
  int i; 
  int p; 

  _RDI = this;
  if ( !this->m_pEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_navigator_3d.cpp", 1293, ASSERT_TYPE_ASSERT, "( m_pEnt )", (const char *)&queryFormat, "m_pEnt") )
    __debugbreak();
  p = _RDI->m_pEnt->s.number;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RDI->m_Layer;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, &_RDI->m_CurSnappedPos);
  MemFile_WriteData(memFile, 0xCui64, &_RDI->m_RequestedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &_RDI->m_SnappedGoalPos);
  MemFile_WriteData(memFile, 0xCui64, &_RDI->m_PathSpec);
  MemFile_WriteData(memFile, 0xCui64, &_RDI->m_PathSpecOfCurPath);
  p = _RDI->m_TimeOfLastPathUpdate;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RDI->m_TimeOfLastBlockage;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RDI->m_TimeOfLastPathFindFail;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RDI->m_TimeOfLastPathSuppressed;
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rdi+0A0h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rdi+0A4h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  LOBYTE(p) = _RDI->m_bPathingOutOfBounds;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RDI->m_ReevalPathTask.status[0];
  MemFile_WriteData(memFile, 1ui64, &p);
  p = _RDI->m_ReevalPathTask.timestamp;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = _RDI->m_bAllowSkipMultigoalPoint;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RDI->m_bMultiGoalPath;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RDI->m_bPathRequested;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = bfx::PolylinePath3DRCPtr::IsValid(&_RDI->m_Path);
  v6 = p;
  MemFile_WriteData(memFile, 1ui64, &p);
  if ( v6 )
  {
    MemFile_WriteData(memFile, 0xCui64, &_RDI->m_LocalSnappedPathStartPos);
    p = _RDI->m_CurSegment;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = _RDI->m_PrevCornerSegment;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = _RDI->m_CalculateCornersStartSegment;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 0xCui64, &_RDI->m_CalculateCornersCurPos);
    p = (_RDI->m_LastCachedCornerIdx - _RDI->m_CurCachedCornerIdx + 5) % 5 + 1;
    v7 = p;
    MemFile_WriteData(memFile, 4ui64, &p);
    for ( i = 0; i < v7; ++i )
      MemFile_WriteData(memFile, 0xCui64, &_RDI->m_CachedCorners[(i + _RDI->m_CurCachedCornerIdx) % 5]);
  }
}

