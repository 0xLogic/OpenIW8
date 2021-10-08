/*
==============
BgAntiLag::AddListAtTimeInfo
==============
*/

void __fastcall BgAntiLag::AddListAtTimeInfo(BgAntiLag *this, int clientNum, int entIndex, unsigned int contextFlags, unsigned int maxOutInfos, unsigned int *outNumInfoItems, BgAntiLagEntityInfo *outInfoList, BgAntiLagFrameHistory *startFrame, BgAntiLagFrameHistory *endFrame, BgAntiLagFrameHistory *velHintFrame, bool timePastEndFrame, float progress)
{
  ?AddListAtTimeInfo@BgAntiLag@@IEBAXHHIIPEAIPEAUBgAntiLagEntityInfo@@PEAUBgAntiLagFrameHistory@@22_NM@Z(this, clientNum, entIndex, contextFlags, maxOutInfos, outNumInfoItems, outInfoList, startFrame, endFrame, velHintFrame, timePastEndFrame, progress);
}

/*
==============
BgAntiLag::IsTimeAheadofOrCurrentWithMostRecentDatabase
==============
*/

bool __fastcall BgAntiLag::IsTimeAheadofOrCurrentWithMostRecentDatabase(BgAntiLag *this, const int gameTime)
{
  return ?IsTimeAheadofOrCurrentWithMostRecentDatabase@BgAntiLag@@IEAA_NH@Z(this, gameTime);
}

/*
==============
BgAntiLag::CompareFrames
==============
*/

bool __fastcall BgAntiLag::CompareFrames(BgAntiLag *this, const BgAntiLagFrameHistory *prevFrame, const BgAntiLagFrameHistory *nextFrame, const BgAntiLagEntityHistory *prevHistory, const BgAntiLagEntityHistory *nextHistory)
{
  return ?CompareFrames@BgAntiLag@@IEAA_NPEBUBgAntiLagFrameHistory@@0PEBUBgAntiLagEntityHistory@@1@Z(this, prevFrame, nextFrame, prevHistory, nextHistory);
}

/*
==============
BgAntiLag::ShouldArchiveEnt
==============
*/

bool __fastcall BgAntiLag::ShouldArchiveEnt(BgAntiLag *this, const entityState_t *es)
{
  return ?ShouldArchiveEnt@BgAntiLag@@IEAA_NPEBUentityState_t@@@Z(this, es);
}

/*
==============
BgAntiLag::AllocateEntityData
==============
*/

BgAntiLagEntityHistory *__fastcall BgAntiLag::AllocateEntityData(BgAntiLag *this, BgAntiLagFrameHistory *frame, const entityState_t *es)
{
  return ?AllocateEntityData@BgAntiLag@@IEAAPEAUBgAntiLagEntityHistory@@PEAUBgAntiLagFrameHistory@@PEBUentityState_t@@@Z(this, frame, es);
}

/*
==============
BgAntiLag::GetAntiLagRefcount
==============
*/

int __fastcall BgAntiLag::GetAntiLagRefcount(BgAntiLag *this)
{
  return ?GetAntiLagRefcount@BgAntiLag@@QEBAHXZ(this);
}

/*
==============
BgAntiLag::ValidateRefCountZero
==============
*/

void __fastcall BgAntiLag::ValidateRefCountZero(BgAntiLag *this, const char *debugId)
{
  ?ValidateRefCountZero@BgAntiLag@@QEBAXPEBD@Z(this, debugId);
}

/*
==============
BgAntiLag::MarkPreArchive_AddGeneral
==============
*/

void __fastcall BgAntiLag::MarkPreArchive_AddGeneral(BgAntiLag *this, int entIndex, int flags)
{
  ?MarkPreArchive_AddGeneral@BgAntiLag@@IEAAXHH@Z(this, entIndex, flags);
}

/*
==============
BgAntiLag::CollectFrameInfoForEntityQuery
==============
*/

bool __fastcall BgAntiLag::CollectFrameInfoForEntityQuery(BgAntiLag *this, int clientNum, unsigned int contextFlags, int time, BgAntiLagFrameHistory **outStartFrame, BgAntiLagFrameHistory **outEndFrame, BgAntiLagFrameHistory **outVelHintFrame, bool *outtimePastEndFrame, float *outProgress)
{
  return ?CollectFrameInfoForEntityQuery@BgAntiLag@@IEBA_NHIHPEAPEAUBgAntiLagFrameHistory@@00PEA_NPEAM@Z(this, clientNum, contextFlags, time, outStartFrame, outEndFrame, outVelHintFrame, outtimePastEndFrame, outProgress);
}

/*
==============
BgAntiLag::BlendEntity
==============
*/

bool __fastcall BgAntiLag::BlendEntity(BgAntiLag *this, const BgAntiLagFrameHistory *startFrame, const BgAntiLagFrameHistory *endFrame, const BgAntiLagFrameHistory *velocityHintFrame, float progress, int entIndex, unsigned int contextFlags, BgAntiLagEntityInfo *outData)
{
  return ?BlendEntity@BgAntiLag@@IEBA_NPEBUBgAntiLagFrameHistory@@00MHIPEAUBgAntiLagEntityInfo@@@Z(this, startFrame, endFrame, velocityHintFrame, progress, entIndex, contextFlags, outData);
}

/*
==============
BgAntiLag::GetNearestEntities
==============
*/

void __fastcall BgAntiLag::GetNearestEntities(const Physics_WorldId worldId, const playerState_s *const ps, const int entIndex, const vec3_t *origin, bitarray<2048> *outNearestEntities)
{
  ?GetNearestEntities@BgAntiLag@@SAXW4Physics_WorldId@@QEBUplayerState_s@@HAEBTvec3_t@@AEAV?$bitarray@$0IAA@@@@Z(worldId, ps, entIndex, origin, outNearestEntities);
}

/*
==============
BgAntiLag::FinalizeEntityArchive
==============
*/

void __fastcall BgAntiLag::FinalizeEntityArchive(BgAntiLag *this, BgAntiLagFrameHistory *antiLagFrame, BgAntiLagEntityHistory *entHistory, const entityState_t *es)
{
  ?FinalizeEntityArchive@BgAntiLag@@IEAAXPEAUBgAntiLagFrameHistory@@PEAUBgAntiLagEntityHistory@@PEBUentityState_t@@@Z(this, antiLagFrame, entHistory, es);
}

/*
==============
BgAntiLag::GetAntilagPlayerOrigin
==============
*/

void __fastcall BgAntiLag::GetAntilagPlayerOrigin(const playerState_s *const ps, int *outIgnoreEntIndex, vec3_t *outOrigin)
{
  ?GetAntilagPlayerOrigin@BgAntiLag@@SAXQEBUplayerState_s@@AEAHAEATvec3_t@@@Z(ps, outIgnoreEntIndex, outOrigin);
}

/*
==============
BgAntiLag::InvalidateClientData
==============
*/

void __fastcall BgAntiLag::InvalidateClientData(BgAntiLag *this, int clientIndex)
{
  ?InvalidateClientData@BgAntiLag@@QEAAXH@Z(this, clientIndex);
}

/*
==============
BgAntiLag::ProcessBonesForEnt
==============
*/

void __fastcall BgAntiLag::ProcessBonesForEnt(BgAntiLag *this, BgAntiLagEntityHistoryExtended *extData, const entityState_t *es)
{
  ?ProcessBonesForEnt@BgAntiLag@@IEAAXPEAUBgAntiLagEntityHistoryExtended@@PEBUentityState_t@@@Z(this, extData, es);
}

/*
==============
BgAntiLag::AllocateExtendedData
==============
*/

BgAntiLagEntityHistoryExtended *__fastcall BgAntiLag::AllocateExtendedData(BgAntiLag *this, BgAntiLagFrameHistory *antiLagFrame, BgAntiLagEntityHistory *entFrame)
{
  return ?AllocateExtendedData@BgAntiLag@@IEAAPEAUBgAntiLagEntityHistoryExtended@@PEAUBgAntiLagFrameHistory@@PEAUBgAntiLagEntityHistory@@@Z(this, antiLagFrame, entFrame);
}

/*
==============
BgAntiLag::AddClosestCharacter
==============
*/

void __fastcall BgAntiLag::AddClosestCharacter(BgAntiLag *this, const entityState_t *es, const vec3_t *origin, int *closestCharacters, float *closestCharactersDistSq)
{
  ?AddClosestCharacter@BgAntiLag@@IEAAXPEBUentityState_t@@AEBTvec3_t@@PEAHPEAM@Z(this, es, origin, closestCharacters, closestCharactersDistSq);
}

/*
==============
BgAntiLag::RestoreAntiLagSceneRefcount
==============
*/

bool __fastcall BgAntiLag::RestoreAntiLagSceneRefcount(BgAntiLag *this, const char *debugId)
{
  return ?RestoreAntiLagSceneRefcount@BgAntiLag@@IEAA_NPEBD@Z(this, debugId);
}

/*
==============
BgAntiLag::GetFrameInfoAtTime
==============
*/

bool __fastcall BgAntiLag::GetFrameInfoAtTime(BgAntiLag *this, int clientIndex, int gameTime, BgAntiLagFrameHistory **outStartFrame, BgAntiLagFrameHistory **outEndFrame, float *outProgress)
{
  return ?GetFrameInfoAtTime@BgAntiLag@@IEBA_NHHPEAPEAUBgAntiLagFrameHistory@@0PEAM@Z(this, clientIndex, gameTime, outStartFrame, outEndFrame, outProgress);
}

/*
==============
BgAntiLag::MarkBroadPhaseEntsForUpdate
==============
*/

void __fastcall BgAntiLag::MarkBroadPhaseEntsForUpdate(BgAntiLag *this, BgAntiLagFrameHistory *frame, playerState_s *ps, const vec3_t *origin, const bitarray<2048> *nearestEntities)
{
  ?MarkBroadPhaseEntsForUpdate@BgAntiLag@@IEAAXPEAUBgAntiLagFrameHistory@@PEAUplayerState_s@@AEBTvec3_t@@AEBV?$bitarray@$0IAA@@@@Z(this, frame, ps, origin, nearestEntities);
}

/*
==============
BgAntiLag::UnpackClosestCharacters
==============
*/

int __fastcall BgAntiLag::UnpackClosestCharacters(BgAntiLag *this, const BgAntiLagEntity *entAntilag, int *outClosestCharacters)
{
  return ?UnpackClosestCharacters@BgAntiLag@@IEBAHPEBUBgAntiLagEntity@@PEAH@Z(this, entAntilag, outClosestCharacters);
}

/*
==============
BgAntiLag::RestoreAntiLagSceneInternal
==============
*/

void __fastcall BgAntiLag::RestoreAntiLagSceneInternal(BgAntiLag *this, unsigned int contextFlags)
{
  ?RestoreAntiLagSceneInternal@BgAntiLag@@IEAAXI@Z(this, contextFlags);
}

/*
==============
BgAntiLag::GetLerpMoverCommandIndex
==============
*/

unsigned int __fastcall BgAntiLag::GetLerpMoverCommandIndex(BgAntiLag *this, const unsigned int commandNum)
{
  return ?GetLerpMoverCommandIndex@BgAntiLag@@IEBAII@Z(this, commandNum);
}

/*
==============
BgAntiLag::AntiLagSceneInternal
==============
*/

bool __fastcall BgAntiLag::AntiLagSceneInternal(BgAntiLag *this, int clientIndex, int ignoreEntIndex, unsigned int contextFlags, int gameTime, bool rewindPoses)
{
  return ?AntiLagSceneInternal@BgAntiLag@@IEAA_NHHIH_N@Z(this, clientIndex, ignoreEntIndex, contextFlags, gameTime, rewindPoses);
}

/*
==============
BgAntiLag::GetBoneOriginFromBoneName
==============
*/

bool __fastcall BgAntiLag::GetBoneOriginFromBoneName(BgAntiLag *this, const BgAntiLagEntityInfo *info, scr_string_t boneName, vec3_t *outOrigin)
{
  return ?GetBoneOriginFromBoneName@BgAntiLag@@QEBA_NPEBUBgAntiLagEntityInfo@@W4scr_string_t@@AEATvec3_t@@@Z(this, info, boneName, outOrigin);
}

/*
==============
BgAntiLag::GetEntityInfoListAtTime
==============
*/

void __fastcall BgAntiLag::GetEntityInfoListAtTime(BgAntiLag *this, const int clientNum, const unsigned int contextFlags, const int time, const unsigned int maxOutInfos, unsigned int *outNumInfoItems, BgAntiLagEntityInfo *outInfoList)
{
  ?GetEntityInfoListAtTime@BgAntiLag@@QEBAXHIHIPEAIPEAUBgAntiLagEntityInfo@@@Z(this, clientNum, contextFlags, time, maxOutInfos, outNumInfoItems, outInfoList);
}

/*
==============
BgAntiLag::PrintRefCountAssertInfo
==============
*/

void __fastcall BgAntiLag::PrintRefCountAssertInfo(BgAntiLag *this)
{
  ?PrintRefCountAssertInfo@BgAntiLag@@IEBAXXZ(this);
}

/*
==============
BgAntiLag::StartSceneArchive
==============
*/

BgAntiLagFrameHistory *__fastcall BgAntiLag::StartSceneArchive(BgAntiLag *this, const bool *clientHasSnapshot, int time)
{
  return ?StartSceneArchive@BgAntiLag@@MEAAPEAUBgAntiLagFrameHistory@@QEB_NH@Z(this, clientHasSnapshot, time);
}

/*
==============
BgAntiLag::AddLerpMoverCommand
==============
*/

void __fastcall BgAntiLag::AddLerpMoverCommand(BgAntiLag *this, const BgAntiLagLerpMoverCmd *cmd)
{
  ?AddLerpMoverCommand@BgAntiLag@@QEAAXAEBUBgAntiLagLerpMoverCmd@@@Z(this, cmd);
}

/*
==============
BgAntiLag::ArchiveClosestCharacters
==============
*/

void __fastcall BgAntiLag::ArchiveClosestCharacters(BgAntiLag *this, BgAntiLagEntity *entAntilag, const BgHandler *handler)
{
  ?ArchiveClosestCharacters@BgAntiLag@@IEAAXPEAUBgAntiLagEntity@@PEBVBgHandler@@@Z(this, entAntilag, handler);
}

/*
==============
BgAntiLag::CopyPosition
==============
*/

void __fastcall BgAntiLag::CopyPosition(BgAntiLag *this, const int entIndex, const vec3_t *srcPosition, const vec3_t *srcAngles, vec3_t *destPosition, vec3_t *destAngles)
{
  ?CopyPosition@BgAntiLag@@IEAAXHAEBTvec3_t@@0AEAT2@1@Z(this, entIndex, srcPosition, srcAngles, destPosition, destAngles);
}

/*
==============
BgAntiLag::GetCurrentFrameIndex
==============
*/

unsigned int __fastcall BgAntiLag::GetCurrentFrameIndex(BgAntiLag *this)
{
  return ?GetCurrentFrameIndex@BgAntiLag@@IEBAIXZ(this);
}

/*
==============
BgAntiLag::GetCurrentHistoryFrame
==============
*/

BgAntiLagFrameHistory *__fastcall BgAntiLag::GetCurrentHistoryFrame(BgAntiLag *this)
{
  return ?GetCurrentHistoryFrame@BgAntiLag@@QEAAPEAUBgAntiLagFrameHistory@@XZ(this);
}

/*
==============
BgAntiLag::GetClosestCharacters
==============
*/

bool __fastcall BgAntiLag::GetClosestCharacters(BgAntiLag *this, const int clientNum, const unsigned int contextFlags, const int gameTime, const unsigned int maxOutInfos, unsigned int *outNumInfoItems, BgAntiLagEntityInfo *outInfoList)
{
  return ?GetClosestCharacters@BgAntiLag@@QEBA_NHIHIPEAIPEAUBgAntiLagEntityInfo@@@Z(this, clientNum, contextFlags, gameTime, maxOutInfos, outNumInfoItems, outInfoList);
}

/*
==============
BgAntiLag::GetLerpMoverOverlap
==============
*/

bool __fastcall BgAntiLag::GetLerpMoverOverlap(BgAntiLag *this, const vec3_t *playerOrigin, const float playerRadius, const float playerHeight, const BgAntiLagLerpMoverCmd *command)
{
  return ?GetLerpMoverOverlap@BgAntiLag@@IEBA_NAEBTvec3_t@@MMAEBUBgAntiLagLerpMoverCmd@@@Z(this, playerOrigin, playerRadius, playerHeight, command);
}

/*
==============
BgAntiLag::PackClosestCharacters
==============
*/

void __fastcall BgAntiLag::PackClosestCharacters(BgAntiLag *this, const playerState_s *ps, const int *closestCharacters, const float *closestCharactersDistSq)
{
  ?PackClosestCharacters@BgAntiLag@@IEAAXPEBUplayerState_s@@PEBHPEBM@Z(this, ps, closestCharacters, closestCharactersDistSq);
}

/*
==============
BgAntiLag::ValidateAntiLagEntityQuery
==============
*/

void __fastcall BgAntiLag::ValidateAntiLagEntityQuery(BgAntiLag *this, unsigned int contextFlags)
{
  ?ValidateAntiLagEntityQuery@BgAntiLag@@IEBAXI@Z(this, contextFlags);
}

/*
==============
BgAntiLag::AntiLagSceneRefcount
==============
*/

bool __fastcall BgAntiLag::AntiLagSceneRefcount(BgAntiLag *this, unsigned int contextFlags, int time, const char *debugId)
{
  return ?AntiLagSceneRefcount@BgAntiLag@@IEAA_NIHPEBD@Z(this, contextFlags, time, debugId);
}

/*
==============
BgAntiLag::MarkPreArchive_AddNonCritical
==============
*/

void __fastcall BgAntiLag::MarkPreArchive_AddNonCritical(BgAntiLag *this, int entIndex, int flags)
{
  ?MarkPreArchive_AddNonCritical@BgAntiLag@@IEAAXHH@Z(this, entIndex, flags);
}

/*
==============
BgAntiLag::AllowInRewindScene
==============
*/

bool __fastcall BgAntiLag::AllowInRewindScene(BgAntiLag *this, int entType)
{
  return ?AllowInRewindScene@BgAntiLag@@IEBA_NH@Z(this, entType);
}

/*
==============
BgAntiLag::GetClosestLerpMovers
==============
*/

void __fastcall BgAntiLag::GetClosestLerpMovers(BgAntiLag *this, const unsigned int time, const vec3_t *origin, const float radius, const float height, BgAntiLagLerpMoversClosest *out_movers)
{
  ?GetClosestLerpMovers@BgAntiLag@@QEBAXIAEBTvec3_t@@MMAEAUBgAntiLagLerpMoversClosest@@@Z(this, time, origin, radius, height, out_movers);
}

/*
==============
BgAntiLag::MarkPreArchive_RemoveNonCritical
==============
*/

void __fastcall BgAntiLag::MarkPreArchive_RemoveNonCritical(BgAntiLag *this)
{
  ?MarkPreArchive_RemoveNonCritical@BgAntiLag@@IEAAXXZ(this);
}

/*
==============
BgAntiLag::EntityStateToAntiLagEntityInternal
==============
*/

void __fastcall BgAntiLag::EntityStateToAntiLagEntityInternal(BgAntiLag *this, const entityState_t *es, BgAntiLagEntity *entData)
{
  ?EntityStateToAntiLagEntityInternal@BgAntiLag@@IEBAXPEBUentityState_t@@PEAUBgAntiLagEntity@@@Z(this, es, entData);
}

/*
==============
BgAntiLag::PurgeLerpMoverCommands
==============
*/

void __fastcall BgAntiLag::PurgeLerpMoverCommands(BgAntiLag *this, const unsigned int time)
{
  ?PurgeLerpMoverCommands@BgAntiLag@@QEAAXI@Z(this, time);
}

/*
==============
BgAntiLag::AllocNewRewindEnt
==============
*/

BgAntiLagRewindEntity *__fastcall BgAntiLag::AllocNewRewindEnt(BgAntiLag *this, int entIndex)
{
  return ?AllocNewRewindEnt@BgAntiLag@@MEAAPEAUBgAntiLagRewindEntity@@H@Z(this, entIndex);
}

/*
==============
BgAntiLag::ClearHistory
==============
*/

void __fastcall BgAntiLag::ClearHistory(BgAntiLag *this)
{
  ?ClearHistory@BgAntiLag@@QEAAXXZ(this);
}

/*
==============
BgAntiLag::BgAntiLag
==============
*/

void __fastcall BgAntiLag::BgAntiLag(BgAntiLag *this)
{
  ??0BgAntiLag@@QEAA@XZ(this);
}

/*
==============
BgAntiLag::GetEntityInfoAtTime
==============
*/

bool __fastcall BgAntiLag::GetEntityInfoAtTime(BgAntiLag *this, const int clientNum, const int entityNum, const unsigned int contextFlags, const int time, BgAntiLagEntityInfo *outInfo)
{
  return ?GetEntityInfoAtTime@BgAntiLag@@QEBA_NHHIHPEAUBgAntiLagEntityInfo@@@Z(this, clientNum, entityNum, contextFlags, time, outInfo);
}

/*
==============
BgAntiLag::RemoveEntityFromHistory
==============
*/

void __fastcall BgAntiLag::RemoveEntityFromHistory(BgAntiLag *this, int entIndex)
{
  ?RemoveEntityFromHistory@BgAntiLag@@IEAAXH@Z(this, entIndex);
}

/*
==============
BgAntiLag::MarkBoneForUpdate
==============
*/

void __fastcall BgAntiLag::MarkBoneForUpdate(BgAntiLag *this, BgAntiLagFrameHistory *frame, const entityState_t *es, scr_string_t boneId)
{
  ?MarkBoneForUpdate@BgAntiLag@@IEAAXPEAUBgAntiLagFrameHistory@@PEBUentityState_t@@W4scr_string_t@@@Z(this, frame, es, boneId);
}

/*
==============
BgAntiLag::ValidateAntiLagScene
==============
*/

void __fastcall BgAntiLag::ValidateAntiLagScene(BgAntiLag *this, unsigned int contextFlags)
{
  ?ValidateAntiLagScene@BgAntiLag@@IEBAXI@Z(this, contextFlags);
}

/*
==============
BgAntiLag::AddRefCountDebugItem
==============
*/

void __fastcall BgAntiLag::AddRefCountDebugItem(BgAntiLag *this, int index, const char *debugString)
{
  ?AddRefCountDebugItem@BgAntiLag@@IEAAXHPEBD@Z(this, index, debugString);
}

/*
==============
BgAntiLag::MarkPreArchiveFlag
==============
*/

void __fastcall BgAntiLag::MarkPreArchiveFlag(BgAntiLag *this, int entIndex, int flags)
{
  ?MarkPreArchiveFlag@BgAntiLag@@QEAAXHH@Z(this, entIndex, flags);
}

/*
==============
BgAntiLag::BgAntiLag
==============
*/
void BgAntiLag::BgAntiLag(BgAntiLag *this)
{
  this->m_timeContext.gameTime = -1;
  this->__vftable = (BgAntiLag_vtbl *)&BgAntiLag::`vftable';
  *(_QWORD *)&this->m_antiLagHistorySize = 0i64;
  this->m_prevFrame = NULL;
  *(_QWORD *)&this->m_lerpMoverCommandBegin = 0i64;
}

/*
==============
BgAntiLag::AddClosestCharacter
==============
*/
void BgAntiLag::AddClosestCharacter(BgAntiLag *this, const entityState_t *es, const vec3_t *origin, int *closestCharacters, float *closestCharactersDistSq)
{
  char v10; 
  int v22; 

  _RBX = closestCharactersDistSq;
  _RBP = origin;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1463, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !closestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1464, ASSERT_TYPE_ASSERT, "(closestCharacters)", (const char *)&queryFormat, "closestCharacters") )
    __debugbreak();
  if ( !closestCharactersDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1465, ASSERT_TYPE_ASSERT, "(closestCharactersDistSq)", (const char *)&queryFormat, "closestCharactersDistSq") )
    __debugbreak();
  this->GetOriginForClosestCharacters(this, es->number, (vec3_t *)&v22);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm3, xmm0, [rsp+78h+var_48]
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm2, xmm1, [rsp+78h+var_44]
    vsubss  xmm4, xmm0, [rsp+78h+var_40]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm5, xmm3, xmm0
    vcomiss xmm5, dword ptr [rbx]
  }
  if ( v10 )
  {
    closestCharacters[1] = *closestCharacters;
    closestCharactersDistSq[1] = *closestCharactersDistSq;
    *closestCharacters = es->number;
    __asm { vmovss  dword ptr [rbx], xmm5 }
  }
  else
  {
    __asm { vcomiss xmm5, dword ptr [rbx+4] }
    if ( v10 )
    {
      closestCharacters[1] = es->number;
      __asm { vmovss  dword ptr [rbx+4], xmm5 }
    }
  }
}

/*
==============
BgAntiLag::AddLerpMoverCommand
==============
*/
void BgAntiLag::AddLerpMoverCommand(BgAntiLag *this, const BgAntiLagLerpMoverCmd *cmd)
{
  unsigned int m_lerpMoverCommandCount; 
  unsigned int LerpMoverCommandIndex; 
  __int64 v6; 
  __int64 v12; 
  __int64 v13; 

  _RSI = cmd;
  _RBX = this;
  if ( this->m_lerpMoverCommandCount > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1753, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
    __debugbreak();
  if ( _RBX->m_lerpMoverCommandBegin >= 0x64 )
  {
    LODWORD(v12) = _RBX->m_lerpMoverCommandBegin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1754, ASSERT_TYPE_ASSERT, "(unsigned)( m_lerpMoverCommandBegin ) < (unsigned)( 100 )", "m_lerpMoverCommandBegin doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", v12, 100) )
      __debugbreak();
  }
  m_lerpMoverCommandCount = _RBX->m_lerpMoverCommandCount;
  if ( m_lerpMoverCommandCount < 0x64 )
  {
    LerpMoverCommandIndex = BgAntiLag::GetLerpMoverCommandIndex(_RBX, m_lerpMoverCommandCount);
    v6 = LerpMoverCommandIndex;
    if ( LerpMoverCommandIndex >= 0x64 )
    {
      LODWORD(v13) = 100;
      LODWORD(v12) = LerpMoverCommandIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1761, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( 100 )", "commandIndex doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    __asm { vmovups ymm0, ymmword ptr [rsi] }
    _RCX = v6;
    __asm
    {
      vmovups ymmword ptr [rcx+rbx+8678h], ymm0
      vmovups ymm1, ymmword ptr [rsi+20h]
      vmovups ymmword ptr [rcx+rbx+8698h], ymm1
      vmovups ymm0, ymmword ptr [rsi+40h]
      vmovups ymmword ptr [rcx+rbx+86B8h], ymm0
      vmovups xmm1, xmmword ptr [rsi+60h]
      vmovups xmmword ptr [rcx+rbx+86D8h], xmm1
    }
    _RBX->m_lerpMoverCommands[_RCX].secondsDecel = _RSI->secondsDecel;
    if ( ++_RBX->m_lerpMoverCommandCount > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1765, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
      __debugbreak();
  }
}

/*
==============
BgAntiLag::AddListAtTimeInfo
==============
*/
void BgAntiLag::AddListAtTimeInfo(BgAntiLag *this, int clientNum, int entIndex, unsigned int contextFlags, unsigned int maxOutInfos, unsigned int *outNumInfoItems, BgAntiLagEntityInfo *outInfoList, BgAntiLagFrameHistory *startFrame, BgAntiLagFrameHistory *endFrame, BgAntiLagFrameHistory *velHintFrame, bool timePastEndFrame, float progress)
{
  __int64 v15; 
  BgAntiLagEntityInfo *outData; 
  bool v18; 
  float fmt; 

  if ( *outNumInfoItems >= maxOutInfos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 804, ASSERT_TYPE_ASSERT, "(*outNumInfoItems < maxOutInfos)", (const char *)&queryFormat, "*outNumInfoItems < maxOutInfos") )
    __debugbreak();
  v15 = *outNumInfoItems;
  outData = &outInfoList[v15];
  *outNumInfoItems = v15 + 1;
  memset_0(outData, 0, sizeof(BgAntiLagEntityInfo));
  if ( (contextFlags & 8) == 0 && timePastEndFrame )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, [rsp+48h+progress]
    vmovss  dword ptr [rsp+48h+fmt], xmm0
  }
  v18 = BgAntiLag::BlendEntity(this, startFrame, endFrame, velHintFrame, fmt, entIndex, contextFlags, outData);
  if ( timePastEndFrame || !v18 )
  {
LABEL_12:
    if ( !this->EntityStateToAntiLagEntity(this, entIndex, outData, 0) )
      --*outNumInfoItems;
  }
}

/*
==============
BgAntiLag::AddRefCountDebugItem
==============
*/
void BgAntiLag::AddRefCountDebugItem(BgAntiLag *this, int index, const char *debugString)
{
  __int64 v3; 
  int v7; 

  v3 = index;
  if ( (unsigned int)index >= 0x20 )
  {
    v7 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1378, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 32 )", "index doesn't index MAX_REFCOUNT_DEPTH\n\t%i not in [0, %i)", index, v7) )
      __debugbreak();
  }
  if ( (_DWORD)v3 != this->m_sceneAntiLagRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1379, ASSERT_TYPE_ASSERT, "(index == m_sceneAntiLagRefCount)", (const char *)&queryFormat, "index == m_sceneAntiLagRefCount") )
    __debugbreak();
  Core_strcpy(this->m_refCountDebugStack[v3].type, 0x100ui64, debugString);
}

/*
==============
BgAntiLag::AllocNewRewindEnt
==============
*/
BgAntiLagRewindEntity *BgAntiLag::AllocNewRewindEnt(BgAntiLag *this, int entIndex)
{
  BgAntiLagRewindScene *m_rewindScene; 
  unsigned int m_maxSize; 
  int v5; 
  BgAntiLagRewindEntity *v6; 
  BgAntiLagRewindEntity *result; 
  __int64 v8; 
  volatile int m_usedSize; 
  __int64 v10; 
  int v11; 

  m_rewindScene = this->m_rewindScene;
  m_maxSize = 2048;
  if ( m_rewindScene->entityBackup.m_maxSize )
    m_maxSize = m_rewindScene->entityBackup.m_maxSize;
  if ( m_rewindScene->entityBackup.m_usedSize >= m_maxSize )
  {
    v5 = 2048;
    if ( m_rewindScene->entityBackup.m_maxSize )
      v5 = m_rewindScene->entityBackup.m_maxSize;
    v11 = v5;
    m_usedSize = m_rewindScene->entityBackup.m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", m_usedSize, v11) )
      __debugbreak();
  }
  v6 = &m_rewindScene->entityBackup.m_data[m_rewindScene->entityBackup.m_usedSize++];
  if ( (unsigned int)entIndex >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v8) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 702, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  result = v6;
  v6->entIndex = entIndex;
  return result;
}

/*
==============
BgAntiLag::AllocateEntityData
==============
*/
BgAntiLagEntityHistory *BgAntiLag::AllocateEntityData(BgAntiLag *this, BgAntiLagFrameHistory *frame, const entityState_t *es)
{
  __int64 number; 
  __int16 *v7; 
  unsigned int v8; 
  int v10; 
  int m_maxSize; 
  __int64 v12; 
  bool v13; 
  bool IsCharacterEntity; 
  __int64 v15; 
  __int64 v16; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 383, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 384, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
    __debugbreak();
  number = es->number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v15) = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 387, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
  }
  v7 = &frame->entityData[number];
  v8 = *v7;
  if ( v8 == -1 )
  {
    if ( (((_BYTE)frame - 64) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &frame->entityDataStandard.m_usedSize) )
      __debugbreak();
    v10 = _InterlockedExchangeAdd(&frame->entityDataStandard.m_usedSize, 1u);
    m_maxSize = 600;
    if ( frame->entityDataStandard.m_maxSize )
      m_maxSize = frame->entityDataStandard.m_maxSize;
    if ( v10 >= m_maxSize )
    {
      Sys_InterlockedDecrement(&frame->entityDataStandard.m_usedSize);
      v12 = 0i64;
    }
    else
    {
      v12 = (__int64)*AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](&frame->entityDataStandard, v10);
      if ( (unsigned int)(v10 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v10, "signed", v10) )
        __debugbreak();
      *v7 = v10;
      if ( v12 )
      {
        *(_DWORD *)(v12 + 48) = es->eType;
        *(_WORD *)(v12 + 52) = 0;
        *(_DWORD *)(v12 + 56) = -1;
        return (BgAntiLagEntityHistory *)v12;
      }
    }
    v13 = this->OnlyUseWarningsForMarkAssert(this);
    IsCharacterEntity = BG_IsCharacterEntity(es);
    Antilag_DebugAssert("Could not allocate antilag entity data.", IsCharacterEntity, v13);
    return (BgAntiLagEntityHistory *)v12;
  }
  if ( v8 >= frame->entityDataStandard.m_usedSize )
  {
    LODWORD(v16) = frame->entityDataStandard.m_usedSize;
    LODWORD(v15) = *v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 393, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( frame->entityDataStandard.size() )", "dataIndex doesn't index frame->entityDataStandard.size()\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  return *AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](&frame->entityDataStandard, v8);
}

/*
==============
BgAntiLag::AllocateExtendedData
==============
*/
BgAntiLagEntityHistoryExtended *BgAntiLag::AllocateExtendedData(BgAntiLag *this, BgAntiLagFrameHistory *antiLagFrame, BgAntiLagEntityHistory *entFrame)
{
  int extDataHandle; 
  BgAntiLagEntityHistoryExtended *result; 
  int v7; 
  unsigned int m_maxSize; 
  __int64 v9; 

  if ( !entFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 430, ASSERT_TYPE_ASSERT, "(entFrame)", (const char *)&queryFormat, "entFrame") )
    __debugbreak();
  extDataHandle = entFrame->extDataHandle;
  if ( extDataHandle != -1 )
    return AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](&antiLagFrame->entityDataExtended, extDataHandle);
  v7 = 200;
  m_maxSize = 200;
  if ( antiLagFrame->entityDataExtended.m_maxSize )
    m_maxSize = antiLagFrame->entityDataExtended.m_maxSize;
  if ( antiLagFrame->entityDataExtended.m_usedSize >= m_maxSize )
  {
    if ( antiLagFrame->entityDataExtended.m_maxSize )
      v7 = antiLagFrame->entityDataExtended.m_maxSize;
    LODWORD(v9) = antiLagFrame->entityDataExtended.m_usedSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", v9, v7) )
      __debugbreak();
  }
  result = &antiLagFrame->entityDataExtended.m_data[antiLagFrame->entityDataExtended.m_usedSize++];
  *(_QWORD *)result->boneInfo.boneList.m_data[0].origin.v = 0i64;
  *(_QWORD *)&result->boneInfo.boneList.m_data[0].origin.z = 0i64;
  *(_QWORD *)&result->boneInfo.boneList.m_data[0].dataValid = 0i64;
  *(_QWORD *)&result->boneInfo.boneList.m_data[1].origin.y = 0i64;
  *(_QWORD *)&result->boneInfo.boneList.m_data[1].boneId = 0i64;
  *(_QWORD *)result->boneInfo.boneList.m_data[2].origin.v = 0i64;
  *(_QWORD *)&result->boneInfo.boneList.m_data[2].origin.z = 0i64;
  *(_QWORD *)&result->boneInfo.boneList.m_data[2].dataValid = 0i64;
  result->boneInfo.boneList.m_maxSize = 0;
  entFrame->extDataHandle = antiLagFrame->entityDataExtended.m_usedSize - 1;
  return result;
}

/*
==============
BgAntiLag::AllowInRewindScene
==============
*/
bool BgAntiLag::AllowInRewindScene(BgAntiLag *this, int entType)
{
  return (unsigned int)(entType - 3) > 1;
}

/*
==============
BgAntiLag::AntiLagSceneInternal
==============
*/
char BgAntiLag::AntiLagSceneInternal(BgAntiLag *this, int clientIndex, int ignoreEntIndex, unsigned int contextFlags, int gameTime)
{
  int v7; 
  BgAntiLagFrameHistory *CurrentHistoryFrame; 
  BgAntiLagRewindScene *m_rewindScene; 
  unsigned int v13; 
  BgAntiLagRewindScene *v15; 
  BgAntiLagFrameHistory *v16; 
  BgAntiLagFrameHistory *v17; 
  int m_usedSize; 
  int v20; 
  int v22; 
  AntiLagVector<unsigned int,248> *p_characterList; 
  unsigned int v24; 
  const BgAntiLagEntityHistory *EntityDataFromIndex; 
  unsigned int v26; 
  AntiLagVector<unsigned int,2048> *p_otherEntList; 
  int *v28; 
  unsigned int v29; 
  const BgAntiLagEntityHistory *v30; 
  int v33; 
  int v34; 
  int v35; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *outEndFrame; 
  BgAntiLagFrameHistory *frame; 

  v7 = gameTime;
  if ( gameTime <= 0 )
    return 0;
  CurrentHistoryFrame = BgAntiLag::GetCurrentHistoryFrame(this);
  if ( !CurrentHistoryFrame )
    return 0;
  if ( CurrentHistoryFrame->time <= v7 )
    return 0;
  m_rewindScene = this->m_rewindScene;
  v13 = 0;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  outStartFrame = NULL;
  m_rewindScene->entityBackup.m_usedSize = 0;
  v15 = this->m_rewindScene;
  __asm { vmovss  [rsp+98h+gameTime], xmm0 }
  outEndFrame = NULL;
  v15->contextFlags = contextFlags;
  this->m_rewindScene->inUse = 1;
  if ( !BgAntiLag::GetFrameInfoAtTime(this, clientIndex, v7, &outStartFrame, &outEndFrame, (float *)&gameTime) )
    return 0;
  v16 = outStartFrame;
  v17 = outEndFrame;
  if ( (!outStartFrame || !outEndFrame) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1190, ASSERT_TYPE_ASSERT, "(startFrame && endFrame)", (const char *)&queryFormat, "startFrame && endFrame") )
    __debugbreak();
  if ( v7 > v17->time )
  {
    if ( v16 != v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1198, ASSERT_TYPE_ASSERT, "(startFrame == endFrame)", (const char *)&queryFormat, "startFrame == endFrame") )
      __debugbreak();
    return 0;
  }
  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  frame = BgAntiLag::GetCurrentHistoryFrame(this);
  v35 = frame->time - v16->time;
  if ( (contextFlags & 0x10) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "Antilag Characters");
    m_usedSize = v16->characterList.m_usedSize;
    v20 = 0;
    v16 = outStartFrame;
    v17 = outEndFrame;
    __asm { vmovss  xmm6, [rsp+98h+gameTime] }
    if ( m_usedSize > 0 )
    {
      v22 = m_usedSize;
      p_characterList = &outStartFrame->characterList;
      do
      {
        v24 = *AntiLagVector<unsigned int,248>::operator[](p_characterList, v20);
        if ( ignoreEntIndex != v24 )
        {
          EntityDataFromIndex = BgAntiLag::GetEntityDataFromIndex(this, frame, v24);
          if ( !EntityDataFromIndex || v35 >= EntityDataFromIndex->timeSinceChange )
          {
            __asm { vmovss  [rsp+98h+var_68], xmm6 }
            ((void (__fastcall *)(BgAntiLag *, _QWORD, _QWORD, _QWORD, BgAntiLagFrameHistory *, BgAntiLagFrameHistory *, int))this->AntiLagSceneEnt)(this, v24, (unsigned int)v7, contextFlags, v16, v17, v33);
          }
        }
        ++v20;
        p_characterList = &v16->characterList;
      }
      while ( v20 < v22 );
      v13 = 0;
    }
    Sys_ProfEndNamedEvent();
  }
  else
  {
    __asm { vmovss  xmm6, [rsp+98h+gameTime] }
  }
  if ( (contextFlags & 0x20) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "Antilag Movers");
    v26 = v16->otherEntList.m_usedSize;
    v16 = outStartFrame;
    v17 = outEndFrame;
    __asm { vmovss  xmm6, [rsp+98h+gameTime] }
    if ( v26 )
    {
      p_otherEntList = &outStartFrame->otherEntList;
      do
      {
        v28 = (int *)AntiLagVector<unsigned int,2048>::operator[](p_otherEntList, v13);
        v29 = *v28;
        v30 = BgAntiLag::GetEntityDataFromIndex(this, frame, *v28);
        if ( !v30 || ((contextFlags & 0x100) == 0 || (v30->flags & 1) != 0) && (unsigned int)(v30->entType - 3) > 1 && v35 >= v30->timeSinceChange )
        {
          __asm { vmovss  [rsp+98h+var_68], xmm6 }
          ((void (__fastcall *)(BgAntiLag *, _QWORD, _QWORD, _QWORD, BgAntiLagFrameHistory *, BgAntiLagFrameHistory *, int))this->AntiLagSceneEnt)(this, v29, (unsigned int)v7, contextFlags, v16, v17, v34);
        }
        ++v13;
        p_otherEntList = &v16->otherEntList;
      }
      while ( v13 < v26 );
    }
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Antilag Pose");
  __asm { vmovaps xmm3, xmm6 }
  ((void (__fastcall *)(BgAntiLag *, BgAntiLagFrameHistory *, BgAntiLagFrameHistory *))this->AntiLagSceneHandlePoseRewind)(this, v16, v17);
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return 1;
}

/*
==============
BgAntiLag::AntiLagSceneRefcount
==============
*/
bool BgAntiLag::AntiLagSceneRefcount(BgAntiLag *this, unsigned int contextFlags, int time, const char *debugId)
{
  int m_sceneAntiLagRefCount; 
  __int64 v9; 
  __int64 v11; 

  m_sceneAntiLagRefCount = this->m_sceneAntiLagRefCount;
  if ( m_sceneAntiLagRefCount <= 0 )
  {
    if ( m_sceneAntiLagRefCount )
    {
      Com_Printf(0, "Antilag refcount error: On %s request.\n", debugId);
      BgAntiLag::PrintRefCountAssertInfo(this);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1416, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "m_sceneAntiLagRefCount == 0") )
        __debugbreak();
    }
    this->m_sceneAntiLagContext = contextFlags;
    this->m_sceneAntiLagTime = time;
  }
  else
  {
    if ( (contextFlags & this->m_sceneAntiLagContext) != contextFlags )
    {
      Com_Printf(0, "Antilag refcount error: On %s request.\n", debugId);
      BgAntiLag::PrintRefCountAssertInfo(this);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1411, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Context %d", contextFlags) )
        __debugbreak();
    }
    if ( time != this->m_sceneAntiLagTime )
    {
      Com_Printf(0, "Antilag refcount error: On %s request.\n", debugId);
      BgAntiLag::PrintRefCountAssertInfo(this);
      LODWORD(v11) = time;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1412, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "time %d", v11) )
        __debugbreak();
    }
  }
  v9 = this->m_sceneAntiLagRefCount;
  if ( (unsigned int)v9 >= 0x20 )
  {
    LODWORD(v11) = this->m_sceneAntiLagRefCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1378, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 32 )", "index doesn't index MAX_REFCOUNT_DEPTH\n\t%i not in [0, %i)", v11, 32) )
      __debugbreak();
  }
  if ( (_DWORD)v9 != this->m_sceneAntiLagRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1379, ASSERT_TYPE_ASSERT, "(index == m_sceneAntiLagRefCount)", (const char *)&queryFormat, "index == m_sceneAntiLagRefCount") )
    __debugbreak();
  Core_strcpy(this->m_refCountDebugStack[v9].type, 0x100ui64, debugId);
  return ++this->m_sceneAntiLagRefCount == 1;
}

/*
==============
Antilag_DebugAssert
==============
*/
void Antilag_DebugAssert(const char *message, bool character, bool onlyUseWarnings)
{
  const dvar_t *v3; 
  const dvar_t *v6; 
  const dvar_t *v7; 

  v3 = DCONST_DVARINT_antilagWarningLevel;
  if ( !onlyUseWarnings )
  {
    if ( !DCONST_DVARINT_antilagWarningLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagWarningLevel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.integer )
    {
      v6 = DCONST_DVARINT_antilagWarningLevel;
      if ( !DCONST_DVARINT_antilagWarningLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagWarningLevel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.integer != 1 )
      {
        v7 = DCONST_DVARINT_antilagWarningLevel;
        if ( !DCONST_DVARINT_antilagWarningLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagWarningLevel") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( v7->current.integer == 2 )
          goto LABEL_24;
        return;
      }
      if ( !character )
      {
LABEL_24:
        Com_PrintWarning(0, (const char *)&queryFormat, message);
        return;
      }
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 84, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat, message) )
        return;
    }
    else if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 77, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat, message) )
    {
      return;
    }
    __debugbreak();
    return;
  }
  if ( !DCONST_DVARINT_antilagWarningLevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagWarningLevel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer < 3 )
    goto LABEL_24;
}

/*
==============
BgAntiLag::ArchiveClosestCharacters
==============
*/
void BgAntiLag::ArchiveClosestCharacters(BgAntiLag *this, BgAntiLagEntity *entAntilag, const BgHandler *handler)
{
  const dvar_t *v3; 
  unsigned __int16 entityIndex; 
  __int64 v7; 
  __int64 v8; 

  v3 = DCONST_DVARBOOL_antilagUseClosestCharacters;
  if ( !DCONST_DVARBOOL_antilagUseClosestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagUseClosestCharacters") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    entityIndex = entAntilag->entityIndex;
    if ( entityIndex >= 0x800u )
    {
      LODWORD(v8) = 2048;
      LODWORD(v7) = entityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1597, ASSERT_TYPE_ASSERT, "(unsigned)( entAntilag->entityIndex ) < (unsigned)( ( 2048 ) )", "entAntilag->entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    entAntilag->closestCharacters[0] = this->m_preArchiveData[entAntilag->entityIndex].closestCharacters[0];
    entAntilag->closestCharacters[1] = this->m_preArchiveData[entAntilag->entityIndex].closestCharacters[1];
  }
}

/*
==============
BgAntiLag::BlendEntity
==============
*/
bool BgAntiLag::BlendEntity(BgAntiLag *this, const BgAntiLagFrameHistory *startFrame, const BgAntiLagFrameHistory *endFrame, const BgAntiLagFrameHistory *velocityHintFrame, float progress, int entIndex, unsigned int contextFlags, BgAntiLagEntityInfo *outData)
{
  const BgAntiLagEntityHistory *EntityDataFromIndex; 
  BgAntiLagEntityHistoryExtended *v24; 
  BgAntiLagEntityHistoryExtended *v25; 
  int extDataHandle; 
  char v27; 
  unsigned int v48; 
  unsigned int v49; 
  BgAntiLagBoneInfo *p_boneInfo; 
  AntiLagVector<BgAntiLagBone,3> *v51; 
  const BgAntiLagBone *v52; 
  int v67; 
  const BgAntiLagBone *v68; 
  unsigned int v81; 
  char *v85; 
  unsigned __int8 *p_flags; 
  unsigned int v102; 
  unsigned int i; 
  const BgAntiLagBone *v104; 
  unsigned int v105; 
  float *doorAngle; 
  signed __int64 v107; 
  unsigned __int8 v108; 
  char v109; 
  const BgAntiLagFrameHistory *v110; 
  BgAntiLagFrameHistory *v133; 
  const BgAntiLagEntityHistory *v134; 
  bool v181; 
  __int64 v190; 
  vec3_t origin; 
  unsigned int m_usedSize; 
  int v193; 
  vec3_t v194; 
  vec3_t outOrigin; 
  vec3_t v196; 
  vec3_t v197; 
  vec3_t v198; 
  vec3_t v199; 
  AntiLagVector<BgAntiLagBone,3> *p_boneList; 
  const BgAntiLagEntityHistory *v201; 
  BgAntiLagEntity *antilagEntity; 
  const BgAntiLagFrameHistory *v203; 
  int v204[3]; 
  BgAntiLagEntityInfo *v205; 
  const BgAntiLagFrameHistory *v206; 
  BgAntiLagFrameHistory *frame; 
  BgAntiLag *v208; 
  vec3_t v209; 
  __int64 v210; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  char v214; 
  void *retaddr; 

  _RAX = &retaddr;
  v210 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  frame = (BgAntiLagFrameHistory *)velocityHintFrame;
  v203 = endFrame;
  v206 = startFrame;
  v208 = this;
  v193 = entIndex;
  _RBX = outData;
  v205 = outData;
  if ( !startFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 447, ASSERT_TYPE_ASSERT, "(startFrame)", (const char *)&queryFormat, "startFrame") )
    __debugbreak();
  if ( !endFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 448, ASSERT_TYPE_ASSERT, "(endFrame)", (const char *)&queryFormat, "endFrame") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 449, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  memset_0(outData, 0, sizeof(BgAntiLagEntityInfo));
  if ( (unsigned int)entIndex >= 0x800 )
  {
    LODWORD(v190) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 454, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v190, 2048) )
      __debugbreak();
  }
  _R15 = (BgAntiLagEntityHistory *)BgAntiLag::GetEntityDataFromIndex(this, startFrame, entIndex);
  antilagEntity = _R15;
  EntityDataFromIndex = BgAntiLag::GetEntityDataFromIndex(this, endFrame, entIndex);
  _R13 = (__int64)EntityDataFromIndex;
  v201 = EntityDataFromIndex;
  if ( !_R15 || !EntityDataFromIndex )
  {
    v181 = 0;
    goto LABEL_87;
  }
  v24 = NULL;
  v25 = NULL;
  p_boneList = NULL;
  extDataHandle = _R15->extDataHandle;
  if ( extDataHandle != -1 && EntityDataFromIndex->extDataHandle != -1 )
  {
    v24 = (BgAntiLagEntityHistoryExtended *)AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](&startFrame->entityDataExtended, extDataHandle);
    v25 = (BgAntiLagEntityHistoryExtended *)AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](&v203->entityDataExtended, *(_DWORD *)(_R13 + 56));
    p_boneList = &v25->boneInfo.boneList;
  }
  v27 = contextFlags;
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vmovss  xmm12, cs:__real@3f800000
    vmovss  xmm7, [rbp+110h+progress]
    vucomiss xmm7, xmm11
  }
  if ( (contextFlags & 0xA) != 0 )
  {
    __asm { vucomiss xmm7, xmm12 }
    if ( (contextFlags & 0xA) != 0 )
    {
      if ( (contextFlags & 0xD) != 0 )
      {
        BgAntiLagEntity_GetOrigin(_R15, &outOrigin);
        BgAntiLagEntity_GetOrigin((const BgAntiLagEntity *)_R13, &v194);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+210h+var_1B8]
          vsubss  xmm1, xmm0, dword ptr [rsp+210h+outOrigin]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm3, xmm2, dword ptr [rsp+210h+outOrigin]
          vmovss  dword ptr [rsp+210h+origin], xmm3
          vmovss  xmm0, dword ptr [rsp+210h+var_1B8+4]
          vsubss  xmm1, xmm0, dword ptr [rsp+210h+outOrigin+4]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm3, xmm2, dword ptr [rsp+210h+outOrigin+4]
          vmovss  dword ptr [rsp+210h+origin+4], xmm3
          vmovss  xmm0, dword ptr [rsp+210h+var_1B8+8]
          vsubss  xmm1, xmm0, dword ptr [rsp+210h+outOrigin+8]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm3, xmm2, dword ptr [rsp+210h+outOrigin+8]
          vmovss  dword ptr [rsp+210h+origin+8], xmm3
        }
        BgAntiLagEntity_SetOrigin(outData, &origin);
        memset(&origin, 0, sizeof(origin));
        memset(&v194, 0, sizeof(v194));
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      __asm
      {
        vmovss  xmm8, cs:__real@3b360b61
        vmovss  xmm9, cs:__real@3f000000
        vmovss  xmm10, cs:__real@43b40000
      }
      if ( (contextFlags & 0xA) != 0 )
      {
        _RCX = &_R15->angles;
        __asm { vucomiss xmm11, dword ptr [rcx+8] }
        AnglesToQuat(&_R15->angles, &quat);
        AnglesToQuat((const vec3_t *)(_R13 + 12), &to);
        __asm { vmovaps xmm2, xmm7; frac }
        QuatSlerp(&quat, &to, *(float *)&_XMM2, &result);
        UnitQuatToAngles(&result, &outData->angles);
      }
      outData->entityIndex = *(_WORD *)(_R13 + 26);
      outData->flags = *(_BYTE *)(_R13 + 24);
      if ( v24 )
      {
        if ( v25 )
        {
          if ( (contextFlags & 4) != 0 )
          {
            m_usedSize = v25->boneInfo.boneList.m_usedSize;
            v48 = v24->boneInfo.boneList.m_usedSize;
            v49 = 0;
            if ( m_usedSize )
            {
              p_boneInfo = &outData->boneInfo;
              *(_QWORD *)origin.v = &outData->boneInfo;
              v51 = p_boneList;
              do
              {
                v52 = AntiLagVector<BgAntiLagBone,3>::operator[](v51, v49);
                _R13 = AntiLagVector<BgAntiLagBone,3>::push_back(&p_boneInfo->boneList, v52);
                if ( v51 != (AntiLagVector<BgAntiLagBone,3> *)v24 )
                {
                  _RSI = AntiLagVector<BgAntiLagBone,3>::operator[](v51, v49);
                  if ( v49 < v48 && AntiLagVector<BgAntiLagBone,3>::operator[](&v24->boneInfo.boneList, v49)->boneId == _RSI->boneId )
                  {
                    if ( AntiLagVector<BgAntiLagBone,3>::operator[](&v24->boneInfo.boneList, v49)->dataValid && _RSI->dataValid )
                    {
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rsi]
                        vsubss  xmm1, xmm0, dword ptr [rax]
                        vmulss  xmm2, xmm1, xmm7
                        vaddss  xmm3, xmm2, dword ptr [rax]
                        vmovss  dword ptr [r13+0], xmm3
                        vmovss  xmm0, dword ptr [rsi+4]
                        vsubss  xmm1, xmm0, dword ptr [rax+4]
                        vmulss  xmm2, xmm1, xmm7
                        vaddss  xmm3, xmm2, dword ptr [rax+4]
                        vmovss  dword ptr [r13+4], xmm3
                        vmovss  xmm0, dword ptr [rsi+8]
                        vsubss  xmm1, xmm0, dword ptr [rax+8]
                        vmulss  xmm2, xmm1, xmm7
                        vaddss  xmm3, xmm2, dword ptr [rax+8]
                        vmovss  dword ptr [r13+8], xmm3
                      }
                    }
                  }
                  else
                  {
                    v67 = 0;
                    if ( v48 )
                    {
                      while ( 1 )
                      {
                        v68 = AntiLagVector<BgAntiLagBone,3>::operator[](&v24->boneInfo.boneList, v67);
                        if ( v68->boneId == _RSI->boneId )
                          break;
                        if ( ++v67 >= v48 )
                          goto LABEL_42;
                      }
                      if ( v68->dataValid && _RSI->dataValid )
                      {
                        __asm
                        {
                          vmovss  xmm0, dword ptr [rsi]
                          vsubss  xmm1, xmm0, dword ptr [rax]
                          vmulss  xmm2, xmm1, xmm7
                          vaddss  xmm3, xmm2, dword ptr [rax]
                          vmovss  dword ptr [r13+0], xmm3
                          vmovss  xmm0, dword ptr [rsi+4]
                          vsubss  xmm1, xmm0, dword ptr [rax+4]
                          vmulss  xmm2, xmm1, xmm7
                          vaddss  xmm3, xmm2, dword ptr [rax+4]
                          vmovss  dword ptr [r13+4], xmm3
                          vmovss  xmm0, dword ptr [rsi+8]
                          vsubss  xmm1, xmm0, dword ptr [rax+8]
                          vmulss  xmm2, xmm1, xmm7
                          vaddss  xmm3, xmm2, dword ptr [rax+8]
                          vmovss  dword ptr [r13+8], xmm3
                        }
                      }
                    }
LABEL_42:
                    p_boneInfo = *(BgAntiLagBoneInfo **)origin.v;
                  }
                }
                ++v49;
              }
              while ( v49 < m_usedSize );
              _RBX = v205;
              _R13 = (__int64)v201;
            }
          }
        }
      }
      v81 = 0;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      _RSI = _R13 + 28;
      _R12 = antilagEntity;
      v85 = (char *)antilagEntity - _R13;
      _R15 = (char *)_RBX - _R13;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vsubss  xmm1, xmm0, dword ptr [r14+rsi]
          vmulss  xmm4, xmm1, xmm8
          vaddss  xmm2, xmm4, xmm9
          vroundss xmm3, xmm6, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm12
          vmulss  xmm3, xmm1, xmm7
          vmulss  xmm2, xmm8, dword ptr [r14+rsi]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm1, xmm4, xmm9
          vroundss xmm3, xmm6, xmm1, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm10
          vmovss  dword ptr [r15+rsi], xmm1
        }
        *(_DWORD *)&_R15[_RSI + 8] = *(_DWORD *)&v85[_RSI + 8];
        if ( BgAntiLagEntity_GetDoorOwner(_R12, v81) )
          BgAntiLagEntity_SetDoorOwner(_RBX, v81);
        ++v81;
        _RSI += 4i64;
      }
      while ( v81 < 2 );
      goto LABEL_70;
    }
    _R15 = (BgAntiLagEntityHistory *)_R13;
  }
  if ( (contextFlags & 0xD) != 0 )
  {
    BgAntiLagEntity_GetOrigin(_R15, &v209);
    BgAntiLagEntity_SetOrigin(outData, &v209);
    memset(&v209, 0, sizeof(v209));
    v27 = contextFlags;
  }
  if ( (contextFlags & 0xA) != 0 )
  {
    outData->angles.v[0] = _R15->angles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [r15+10h]
      vmovss  dword ptr [rbx+10h], xmm0
      vmovss  xmm1, dword ptr [r15+14h]
      vmovss  dword ptr [rbx+14h], xmm1
    }
  }
  outData->entityIndex = *(_WORD *)(_R13 + 26);
  p_flags = &_R15->flags;
  outData->flags = _R15->flags;
  if ( v24 && v25 && (v27 & 4) != 0 )
  {
    __asm { vucomiss xmm7, xmm11 }
    if ( (v27 & 4) != 0 )
      v24 = v25;
    v102 = v24->boneInfo.boneList.m_usedSize;
    for ( i = 0; i < v102; ++i )
    {
      v104 = AntiLagVector<BgAntiLagBone,3>::operator[](&v24->boneInfo.boneList, i);
      AntiLagVector<BgAntiLagBone,3>::push_back(&outData->boneInfo.boneList, v104);
    }
  }
  v105 = 0;
  doorAngle = outData->doorAngle;
  v107 = (char *)_R15 - (char *)outData;
  do
  {
    *doorAngle = *(float *)((char *)doorAngle + v107);
    doorAngle[2] = *(float *)((char *)doorAngle + v107 + 8);
    v108 = *p_flags;
    if ( v105 )
      v109 = v108 >> 6;
    else
      v109 = v108 >> 5;
    if ( (v109 & 1) != 0 )
      BgAntiLagEntity_SetDoorOwner(outData, v105);
    ++v105;
    ++doorAngle;
  }
  while ( v105 < 2 );
  _R13 = (__int64)v201;
  _R12 = antilagEntity;
LABEL_70:
  if ( (contextFlags & 8) != 0 )
  {
    v110 = v206;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  xmm6, cs:__real@3a83126f
      vmulss  xmm8, xmm0, xmm6
      vcomiss xmm8, xmm11
    }
    if ( v203->time <= (unsigned int)v206->time )
    {
      *(_QWORD *)_RBX->velocity.v = 0i64;
      *(_QWORD *)&_RBX->velocity.z = 0i64;
      *(_QWORD *)&_RBX->angVelocity.y = 0i64;
    }
    else
    {
      BgAntiLagEntity_GetOrigin(_R12, &v197);
      BgAntiLagEntity_GetOrigin((const BgAntiLagEntity *)_R13, &v196);
      __asm
      {
        vdivss  xmm5, xmm12, xmm8
        vmovss  xmm0, dword ptr [rsp+210h+var_198]
        vsubss  xmm1, xmm0, dword ptr [rbp+110h+var_188]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rbx+74h], xmm2
        vmovss  xmm0, dword ptr [rsp+210h+var_198+4]
        vsubss  xmm1, xmm0, dword ptr [rbp+110h+var_188+4]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rbx+78h], xmm2
        vmovss  xmm0, dword ptr [rbp+110h+var_198+8]
        vsubss  xmm1, xmm0, dword ptr [rbp+110h+var_188+8]
        vmulss  xmm2, xmm1, xmm5
        vmovss  dword ptr [rbx+7Ch], xmm2
        vmovss  xmm0, dword ptr [r13+0Ch]
        vsubss  xmm4, xmm0, dword ptr [r12+0Ch]
        vmovss  [rbp+110h+var_138], xmm4
        vmovss  xmm1, dword ptr [r13+10h]
        vsubss  xmm3, xmm1, dword ptr [r12+10h]
        vmovss  [rbp+110h+var_134], xmm3
        vmovss  xmm0, dword ptr [r13+14h]
        vsubss  xmm2, xmm0, dword ptr [r12+14h]
        vmovss  [rbp+110h+var_130], xmm2
        vmulss  xmm0, xmm4, xmm5
        vmovss  dword ptr [rbx+80h], xmm0
        vmulss  xmm1, xmm3, xmm5
        vmovss  dword ptr [rbx+84h], xmm1
        vmulss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rbx+88h], xmm0
      }
      memset(&v196, 0, sizeof(v196));
      memset(&v197, 0, sizeof(v197));
    }
    v133 = frame;
    if ( frame )
    {
      v134 = BgAntiLag::GetEntityDataFromIndex(v208, frame, v193);
      if ( v134 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm6, xmm0, xmm6
          vcomiss xmm6, xmm11
        }
        if ( v110->time > (unsigned int)v133->time )
        {
          BgAntiLagEntity_GetOrigin(_R12, &v199);
          BgAntiLagEntity_GetOrigin(v134, &v198);
          __asm
          {
            vdivss  xmm4, xmm12, xmm6
            vmovss  xmm0, dword ptr [rbp+110h+var_168]
            vsubss  xmm1, xmm0, dword ptr [rbp+110h+var_178]
            vmulss  xmm3, xmm1, xmm4
            vmovss  xmm2, dword ptr [rbp+110h+var_168+4]
            vsubss  xmm0, xmm2, dword ptr [rbp+110h+var_178+4]
            vmulss  xmm5, xmm0, xmm4
            vmovss  xmm1, dword ptr [rbp+110h+var_168+8]
            vsubss  xmm2, xmm1, dword ptr [rbp+110h+var_178+8]
            vmulss  xmm6, xmm2, xmm4
          }
          if ( _R12 == (BgAntiLagEntity *)_R13 )
          {
            __asm
            {
              vmovss  dword ptr [rbx+74h], xmm3
              vmovss  dword ptr [rbx+78h], xmm5
              vmovss  dword ptr [rbx+7Ch], xmm6
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+74h]
              vsubss  xmm1, xmm0, xmm3
              vmulss  xmm2, xmm1, xmm7
              vaddss  xmm3, xmm2, xmm3
              vmovss  dword ptr [rbx+74h], xmm3
              vmovss  xmm0, dword ptr [rbx+78h]
              vsubss  xmm1, xmm0, xmm5
              vmulss  xmm2, xmm1, xmm7
              vaddss  xmm3, xmm2, xmm5
              vmovss  dword ptr [rbx+78h], xmm3
              vmovss  xmm0, dword ptr [rbx+7Ch]
              vsubss  xmm1, xmm0, xmm6
              vmulss  xmm2, xmm1, xmm7
              vaddss  xmm3, xmm2, xmm6
              vmovss  dword ptr [rbx+7Ch], xmm3
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r12+0Ch]
            vsubss  xmm1, xmm0, dword ptr [rdi+0Ch]
            vmulss  xmm3, xmm1, xmm4
            vmovss  xmm2, dword ptr [r12+10h]
            vsubss  xmm0, xmm2, dword ptr [rdi+10h]
            vmulss  xmm5, xmm0, xmm4
            vmovss  xmm1, dword ptr [r12+14h]
            vsubss  xmm2, xmm1, dword ptr [rdi+14h]
            vmulss  xmm4, xmm2, xmm4
          }
          if ( _R12 == (BgAntiLagEntity *)_R13 )
          {
            __asm
            {
              vmovss  dword ptr [rbx+80h], xmm3
              vmovss  dword ptr [rbx+84h], xmm5
              vmovss  dword ptr [rbx+88h], xmm4
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+80h]
              vsubss  xmm1, xmm0, xmm3
              vmulss  xmm2, xmm1, xmm7
              vaddss  xmm3, xmm2, xmm3
              vmovss  dword ptr [rbx+80h], xmm3
              vmovss  xmm0, dword ptr [rbx+84h]
              vsubss  xmm1, xmm0, xmm5
              vmulss  xmm2, xmm1, xmm7
              vaddss  xmm3, xmm2, xmm5
              vmovss  dword ptr [rbx+84h], xmm3
              vmovss  xmm0, dword ptr [rbx+88h]
              vsubss  xmm1, xmm0, xmm4
              vmulss  xmm2, xmm1, xmm7
              vaddss  xmm3, xmm2, xmm4
              vmovss  dword ptr [rbx+88h], xmm3
            }
          }
          memset(&v198, 0, sizeof(v198));
          memset(&v199, 0, sizeof(v199));
        }
      }
    }
    memset(v204, 0, sizeof(v204));
  }
  v181 = 1;
LABEL_87:
  _R11 = &v214;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
  return v181;
}

/*
==============
BgAntiLag::ClearHistory
==============
*/
void BgAntiLag::ClearHistory(BgAntiLag *this)
{
  unsigned int v1; 
  __int64 v2; 

  v1 = 0;
  for ( this->m_nextAntiLagHistory = 0; v1 < this->m_antiLagHistorySize; this->m_antiLagHistory[v2]->time = 0 )
    v2 = v1++;
}

/*
==============
BgAntiLag::CollectFrameInfoForEntityQuery
==============
*/
char BgAntiLag::CollectFrameInfoForEntityQuery(BgAntiLag *this, int clientNum, unsigned int contextFlags, int time, BgAntiLagFrameHistory **outStartFrame, BgAntiLagFrameHistory **outEndFrame, BgAntiLagFrameHistory **outVelHintFrame, bool *outtimePastEndFrame, float *outProgress)
{
  BgAntiLagFrameHistory **v9; 
  char v11; 
  BgAntiLagFrameHistory **v13; 
  BgAntiLagFrameHistory **v14; 
  bool *v15; 
  float *v16; 
  BgAntiLagFrameHistory *v17; 
  float v20; 

  v9 = outStartFrame;
  v11 = contextFlags;
  if ( !outStartFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 711, ASSERT_TYPE_ASSERT, "(outStartFrame)", (const char *)&queryFormat, "outStartFrame") )
    __debugbreak();
  v13 = outEndFrame;
  if ( !outEndFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 712, ASSERT_TYPE_ASSERT, "(outEndFrame)", (const char *)&queryFormat, "outEndFrame") )
    __debugbreak();
  v14 = outVelHintFrame;
  if ( !outVelHintFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 713, ASSERT_TYPE_ASSERT, "(outVelHintFrame)", (const char *)&queryFormat, "outVelHintFrame") )
    __debugbreak();
  v15 = outtimePastEndFrame;
  if ( !outtimePastEndFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 714, ASSERT_TYPE_ASSERT, "(outtimePastEndFrame)", (const char *)&queryFormat, "outtimePastEndFrame") )
    __debugbreak();
  v16 = outProgress;
  if ( !outProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 715, ASSERT_TYPE_ASSERT, "(outProgress)", (const char *)&queryFormat, "outProgress") )
    __debugbreak();
  *v9 = NULL;
  *v13 = NULL;
  *v14 = NULL;
  *v15 = 0;
  *v16 = 0.0;
  if ( v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
  if ( !BgAntiLag::GetFrameInfoAtTime(this, clientNum, time, v9, v13, v16) )
    return 0;
  if ( (!*v9 || !*v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 730, ASSERT_TYPE_ASSERT, "(*outStartFrame && *outEndFrame)", (const char *)&queryFormat, "*outStartFrame && *outEndFrame") )
    __debugbreak();
  if ( (v11 & 8) != 0 )
  {
    v17 = *v9;
    outStartFrame = NULL;
    BgAntiLag::GetFrameInfoAtTime(this, clientNum, v17->time - 1, v14, (BgAntiLagFrameHistory **)&outStartFrame, &v20);
  }
  if ( time > (*v13)->time )
    *v15 = 1;
  return 1;
}

/*
==============
BgAntiLag::CompareFrames
==============
*/
__int64 BgAntiLag::CompareFrames(BgAntiLag *this, const BgAntiLagFrameHistory *prevFrame, const BgAntiLagFrameHistory *nextFrame, const BgAntiLagEntityHistory *prevHistory, const BgAntiLagEntityHistory *nextHistory)
{
  char v7; 
  unsigned __int8 v14; 
  vec3_t v16; 
  vec3_t outOrigin; 

  _RDI = prevHistory;
  BgAntiLagEntity_GetOrigin(prevHistory, &outOrigin);
  _RBX = nextHistory;
  BgAntiLagEntity_GetOrigin(nextHistory, &v16);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outOrigin]
    vucomiss xmm0, dword ptr [rsp+58h+var_30]
  }
  if ( !v7 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outOrigin+4]
    vucomiss xmm0, dword ptr [rsp+58h+var_30+4]
  }
  if ( !v7 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outOrigin+8]
    vucomiss xmm0, dword ptr [rsp+58h+var_30+8]
  }
  if ( !v7 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vucomiss xmm0, dword ptr [rdi+0Ch]
  }
  if ( !v7 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vucomiss xmm0, dword ptr [rdi+10h]
  }
  if ( !v7 )
    goto LABEL_10;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vucomiss xmm0, dword ptr [rdi+14h]
  }
  if ( !v7 )
    goto LABEL_10;
  if ( _RDI->flags == nextHistory->flags && _RDI->extDataHandle == nextHistory->extDataHandle )
    v14 = 1;
  else
LABEL_10:
    v14 = 0;
  memset(&v16, 0, sizeof(v16));
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v14;
}

/*
==============
BgAntiLag::CopyPosition
==============
*/
void BgAntiLag::CopyPosition(BgAntiLag *this, const int entIndex, const vec3_t *srcPosition, const vec3_t *srcAngles, vec3_t *destPosition, vec3_t *destAngles)
{
  vec3_t *v8; 
  __int64 v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 

  __asm
  {
    vmovss  xmm1, dword ptr [r8]
    vmovss  [rsp+58h+arg_10], xmm1
  }
  _RDI = (vec3_t *)srcAngles;
  v8 = (vec3_t *)srcPosition;
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+58h+arg_10], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  [rsp+58h+arg_10], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
  {
LABEL_14:
    __asm
    {
      vmovss  xmm2, dword ptr [r8+8]
      vmovss  xmm0, dword ptr [r8+4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+58h+var_10], xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+58h+var_18], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+58h+var_20], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1310, ASSERT_TYPE_ASSERT, "(!IS_NAN(srcPosition[0]) && !IS_NAN(srcPosition[1]) && !IS_NAN(srcPosition[2]))", "%s\n\tent %i's origin is invalid - (%f, %f, %f)", "!IS_NAN(srcPosition[0]) && !IS_NAN(srcPosition[1]) && !IS_NAN(srcPosition[2])", entIndex, v26, v28, v30) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vmovss  [rsp+58h+arg_10], xmm1
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+58h+arg_10], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+58h+arg_10], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+8]
      vmovss  xmm0, dword ptr [rdi+4]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+58h+var_10], xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+58h+var_18], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+58h+var_20], xmm1
    }
    LODWORD(v25) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1311, ASSERT_TYPE_ASSERT, "(!IS_NAN(srcAngles[0]) && !IS_NAN(srcAngles[1]) && !IS_NAN(srcAngles[2]))", "%s\n\tent %i's angles are invalid - (%f, %f, %f)", "!IS_NAN(srcAngles[0]) && !IS_NAN(srcAngles[1]) && !IS_NAN(srcAngles[2])", v25, v27, v29, v31) )
      __debugbreak();
  }
  *destPosition = *v8;
  *destAngles = *_RDI;
}

/*
==============
BgAntiLag::EntityStateToAntiLagEntityInternal
==============
*/
void BgAntiLag::EntityStateToAntiLagEntityInternal(BgAntiLag *this, const entityState_t *es, BgAntiLagEntity *entData)
{
  entData->flags = 0;
}

/*
==============
BgAntiLag::FinalizeEntityArchive
==============
*/
void BgAntiLag::FinalizeEntityArchive(BgAntiLag *this, BgAntiLagFrameHistory *antiLagFrame, BgAntiLagEntityHistory *entHistory, const entityState_t *es)
{
  int extDataHandle; 
  BgAntiLagEntityHistoryExtended *v9; 
  volatile unsigned int m_usedSize; 
  volatile unsigned int i; 
  int flags; 
  BgAntiLagFrameHistory *m_prevFrame; 
  __int16 v14; 
  char v16; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  vec3_t v26; 
  vec3_t outOrigin; 

  _RBX = entHistory;
  extDataHandle = entHistory->extDataHandle;
  if ( extDataHandle != -1 )
  {
    v9 = AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](&antiLagFrame->entityDataExtended, extDataHandle);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 975, ASSERT_TYPE_ASSERT, "(extData)", (const char *)&queryFormat, "extData") )
      __debugbreak();
    if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 976, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    m_usedSize = v9->boneInfo.boneList.m_usedSize;
    for ( i = 0; i < m_usedSize; ++i )
    {
      if ( i >= v9->boneInfo.boneList.m_usedSize )
      {
        LODWORD(v25) = v9->boneInfo.boneList.m_usedSize;
        LODWORD(v24) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      this->ProcessBone(this, (BgAntiLagBone *)((char *)v9 + 20 * (int)i), es);
    }
  }
  flags = this->m_preArchiveData[es->number].flags;
  if ( (flags & 2) != 0 )
    _RBX->flags |= 1u;
  if ( (flags & 8) != 0 )
  {
    _RBX->flags |= 8u;
    antiLagFrame->hasFakeActors = 1;
  }
  if ( !BG_IsCharacterEntity(es) )
  {
    m_prevFrame = (BgAntiLagFrameHistory *)this->m_prevFrame;
    if ( m_prevFrame )
    {
      v14 = m_prevFrame->entityData[es->number];
      if ( v14 != -1 )
      {
        _RSI = (__int64)*AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](&m_prevFrame->entityDataStandard, v14);
        BgAntiLagEntity_GetOrigin((const BgAntiLagEntity *)_RSI, &outOrigin);
        BgAntiLagEntity_GetOrigin(_RBX, &v26);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+98h+outOrigin]
          vucomiss xmm0, dword ptr [rsp+98h+var_50]
        }
        if ( !v16 )
          goto LABEL_31;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+98h+outOrigin+4]
          vucomiss xmm0, dword ptr [rsp+98h+var_50+4]
        }
        if ( !v16 )
          goto LABEL_31;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+98h+outOrigin+8]
          vucomiss xmm0, dword ptr [rsp+98h+var_50+8]
        }
        if ( !v16 )
          goto LABEL_31;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vucomiss xmm0, dword ptr [rsi+0Ch]
        }
        if ( !v16 )
          goto LABEL_31;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10h]
          vucomiss xmm0, dword ptr [rsi+10h]
        }
        if ( !v16 )
          goto LABEL_31;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+14h]
          vucomiss xmm0, dword ptr [rsi+14h]
        }
        if ( !v16 )
          goto LABEL_31;
        if ( *(_BYTE *)(_RSI + 24) == _RBX->flags && *(_DWORD *)(_RSI + 56) == _RBX->extDataHandle )
        {
          memset(&v26, 0, sizeof(v26));
          memset(&outOrigin, 0, sizeof(outOrigin));
          v23 = antiLagFrame->time + *(unsigned __int16 *)(_RSI + 52) - this->m_prevFrame->time;
          if ( (unsigned int)(v23 - 1) > 0xFFFD )
            _RBX->timeSinceChange = -1;
          else
            _RBX->timeSinceChange = truncate_cast<unsigned short,int>(v23);
        }
        else
        {
LABEL_31:
          memset(&v26, 0, sizeof(v26));
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
    }
  }
}

/*
==============
BgAntiLag::GetAntiLagRefcount
==============
*/
__int64 BgAntiLag::GetAntiLagRefcount(BgAntiLag *this)
{
  return (unsigned int)this->m_sceneAntiLagRefCount;
}

/*
==============
BgAntiLag::GetAntilagPlayerOrigin
==============
*/
void BgAntiLag::GetAntilagPlayerOrigin(const playerState_s *const ps, int *outIgnoreEntIndex, vec3_t *outOrigin)
{
  _RDI = outOrigin;
  _RBX = ps;
  if ( BGVehicles::IsRemoteDrivingVehicle(ps) )
  {
    *outIgnoreEntIndex = _RBX->vehicleState.entity;
    _RDI->v[0] = _RBX->vehicleState.origin.v[0];
    _RDI->v[1] = _RBX->vehicleState.origin.v[1];
    __asm { vmovss  xmm0, dword ptr [rbx+134h] }
  }
  else
  {
    *outIgnoreEntIndex = _RBX->clientNum;
    _RDI->v[0] = _RBX->origin.v[0];
    _RDI->v[1] = _RBX->origin.v[1];
    __asm { vmovss  xmm0, dword ptr [rbx+38h] }
  }
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
}

/*
==============
BgAntiLag::GetBoneOriginFromBoneName
==============
*/
char BgAntiLag::GetBoneOriginFromBoneName(BgAntiLag *this, const BgAntiLagEntityInfo *info, scr_string_t boneName, vec3_t *outOrigin)
{
  volatile unsigned int m_usedSize; 
  volatile unsigned int v8; 
  __int64 v10; 
  __int64 v11; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1074, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  m_usedSize = info->boneInfo.boneList.m_usedSize;
  v8 = 0;
  if ( !m_usedSize )
    goto LABEL_10;
  while ( 1 )
  {
    if ( v8 >= info->boneInfo.boneList.m_usedSize )
    {
      LODWORD(v11) = info->boneInfo.boneList.m_usedSize;
      LODWORD(v10) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( boneName == info->boneInfo.boneList.m_data[v8].boneId )
      break;
    if ( ++v8 >= m_usedSize )
      goto LABEL_10;
  }
  if ( info->boneInfo.boneList.m_data[v8].dataValid )
  {
    if ( v8 >= info->boneInfo.boneList.m_usedSize )
    {
      LODWORD(v11) = info->boneInfo.boneList.m_usedSize;
      LODWORD(v10) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    outOrigin->v[0] = info->boneInfo.boneList.m_data[v8].origin.v[0];
    outOrigin->v[1] = info->boneInfo.boneList.m_data[v8].origin.v[1];
    outOrigin->v[2] = info->boneInfo.boneList.m_data[v8].origin.v[2];
    return 1;
  }
  else
  {
LABEL_10:
    BgAntiLagEntity_GetOrigin(info, outOrigin);
    return 0;
  }
}

/*
==============
BgAntiLag::GetClosestCharacters
==============
*/
__int64 BgAntiLag::GetClosestCharacters(BgAntiLag *this, const int clientNum, const unsigned int contextFlags, const int gameTime, const unsigned int maxOutInfos, unsigned int *outNumInfoItems, BgAntiLagEntityInfo *outInfoList)
{
  unsigned int *v13; 
  __int64 v14; 
  BgAntiLagFrameHistory *endFrame; 
  BgAntiLagFrameHistory *startFrame; 
  bool timePastEndFrame; 
  const BgAntiLagEntityHistory *EntityDataFromIndex; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 result; 
  float *outProgress; 
  float v28; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *velHintFrame[3]; 
  void *retaddr; 
  float v35; 
  int v36; 

  _RAX = &retaddr;
  v36 = gameTime;
  velHintFrame[1] = (BgAntiLagFrameHistory *)-2i64;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  v13 = outNumInfoItems;
  if ( !outNumInfoItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1543, ASSERT_TYPE_ASSERT, "(outNumInfoItems)", (const char *)&queryFormat, "outNumInfoItems") )
    __debugbreak();
  if ( !outInfoList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1544, ASSERT_TYPE_ASSERT, "(outInfoList)", (const char *)&queryFormat, "outInfoList") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BgAntiLag::GetClosestCharacters");
  v14 = 0i64;
  *v13 = 0;
  outStartFrame = NULL;
  outNumInfoItems = NULL;
  velHintFrame[0] = NULL;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+0D8h+arg_10], xmm6
  }
  if ( (contextFlags & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
  if ( !BgAntiLag::GetFrameInfoAtTime(this, clientNum, gameTime, &outStartFrame, (BgAntiLagFrameHistory **)&outNumInfoItems, &v35) )
    goto LABEL_28;
  endFrame = (BgAntiLagFrameHistory *)outNumInfoItems;
  startFrame = outStartFrame;
  if ( (!outStartFrame || !outNumInfoItems) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 730, ASSERT_TYPE_ASSERT, "(*outStartFrame && *outEndFrame)", (const char *)&queryFormat, "*outStartFrame && *outEndFrame") )
    __debugbreak();
  if ( (contextFlags & 8) != 0 )
  {
    outStartFrame = NULL;
    __asm { vmovss  dword ptr [rsp+0D8h+outNumInfoItems], xmm6 }
    BgAntiLag::GetFrameInfoAtTime(this, clientNum, startFrame->time - 1, velHintFrame, &outStartFrame, (float *)&outNumInfoItems);
  }
  timePastEndFrame = v36 > endFrame->time;
  EntityDataFromIndex = BgAntiLag::GetEntityDataFromIndex(this, startFrame, clientNum);
  if ( EntityDataFromIndex )
  {
    v20 = EntityDataFromIndex->closestCharacters[0];
    v21 = EntityDataFromIndex->closestCharacters[1];
    v22 = 0i64;
    if ( v20 )
    {
      LODWORD(outNumInfoItems) = v20 - 1;
      v22 = 1i64;
    }
    if ( v21 )
    {
      *((_DWORD *)&outNumInfoItems + v22) = v21 - 1;
      v22 = (unsigned int)(v22 + 1);
    }
    if ( (unsigned int)v22 > 2 )
    {
      LODWORD(outProgress) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1574, ASSERT_TYPE_ASSERT, "( numClosestCharacters ) <= ( 2 )", "numClosestCharacters not in [0, NUM_ANTILAG_CLOSEST_CHARACTERS]\n\t%u not in [0, %u]", outProgress, 2) )
        __debugbreak();
    }
    if ( v22 )
    {
      v23 = maxOutInfos;
      __asm { vmovss  xmm6, [rsp+0D8h+arg_10] }
      do
      {
        __asm { vmovss  [rsp+0D8h+var_80], xmm6 }
        BgAntiLag::AddListAtTimeInfo(this, clientNum, *((_DWORD *)&outNumInfoItems + v14++), contextFlags, v23, v13, outInfoList, startFrame, endFrame, velHintFrame[0], timePastEndFrame, v28);
      }
      while ( v14 < v22 );
    }
LABEL_28:
    LOBYTE(v14) = 1;
  }
  Sys_ProfEndNamedEvent();
  result = (unsigned __int8)v14;
  __asm { vmovaps xmm6, [rsp+0D8h+var_58] }
  return result;
}

/*
==============
BgAntiLag::GetClosestLerpMovers
==============
*/

void __fastcall BgAntiLag::GetClosestLerpMovers(BgAntiLag *this, const unsigned int time, const vec3_t *origin, double radius, const float height, BgAntiLagLerpMoversClosest *out_movers)
{
  bool v8; 
  BgAntiLagLerpMoversClosest *v10; 
  unsigned int v14; 
  char v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int LerpMoverCommandIndex; 
  __int64 v20; 
  unsigned int userId; 
  unsigned int startTime; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  int *v42; 
  vec3_t *out_result; 
  __int64 v44; 
  float fmt; 
  float fmta; 
  __int64 fAccelTimeSec; 
  float fAccelTimeSeca; 
  float fAccelTimeSecb; 
  __int64 fDecelTimeSec; 
  float fDecelTimeSeca; 
  float fDecelTimeSecb; 
  int v60[4]; 

  v8 = this->m_lerpMoverCommandCount <= 0x64;
  _R12 = origin;
  v10 = out_movers;
  __asm { vmovaps [rsp+0B8h+var_58], xmm7 }
  _RDI = this;
  __asm { vmovaps xmm7, xmm3 }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1641, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
    __debugbreak();
  if ( _RDI->m_lerpMoverCommandBegin >= 0x64 )
  {
    LODWORD(fAccelTimeSec) = _RDI->m_lerpMoverCommandBegin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1642, ASSERT_TYPE_ASSERT, "(unsigned)( m_lerpMoverCommandBegin ) < (unsigned)( 100 )", "m_lerpMoverCommandBegin doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", fAccelTimeSec, 100) )
      __debugbreak();
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( _RDI->m_lerpMoverCommandCount )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm6
      vmovss  xmm6, [rsp+0B8h+height]
    }
    do
    {
      LerpMoverCommandIndex = BgAntiLag::GetLerpMoverCommandIndex(_RDI, v16);
      v20 = LerpMoverCommandIndex;
      if ( LerpMoverCommandIndex >= 0x64 )
      {
        LODWORD(fDecelTimeSec) = 100;
        LODWORD(fAccelTimeSec) = LerpMoverCommandIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1656, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( ( sizeof( *array_counter( m_lerpMoverCommands ) ) + 0 ) )", "commandIndex doesn't index m_lerpMoverCommands\n\t%i not in [0, %i)", fAccelTimeSec, fDecelTimeSec) )
          __debugbreak();
      }
      _RCX = v20;
      userId = _RDI->m_lerpMoverCommands[v20].userId;
      startTime = _RDI->m_lerpMoverCommands[v20].startTime;
      if ( userId > 0x7A120 )
        v15 = 1;
      if ( time > startTime && time <= _RDI->m_lerpMoverCommands[_RCX].endTime )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r12+8]
          vmovss  xmm2, dword ptr [rcx+rdi+86D4h]
          vaddss  xmm0, xmm1, xmm6
          vcomiss xmm2, xmm0
        }
        if ( time <= _RDI->m_lerpMoverCommands[_RCX].endTime )
        {
          __asm
          {
            vaddss  xmm0, xmm2, dword ptr [rcx+rdi+86DCh]
            vcomiss xmm0, xmm1
          }
          if ( time >= _RDI->m_lerpMoverCommands[_RCX].endTime )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rcx+rdi+86CCh]
              vmovss  xmm1, dword ptr [rcx+rdi+86D0h]
              vsubss  xmm4, xmm0, dword ptr [r12]
              vsubss  xmm2, xmm1, dword ptr [r12+4]
              vaddss  xmm5, xmm7, dword ptr [rcx+rdi+86D8h]
              vmulss  xmm3, xmm2, xmm2
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm5, xmm5
              vcomiss xmm1, xmm4
            }
            if ( time > _RDI->m_lerpMoverCommands[_RCX].endTime )
            {
              v37 = 0;
              if ( v17 )
              {
                while ( 1 )
                {
                  v38 = (unsigned int)v60[v37];
                  if ( _RDI->m_lerpMoverCommands[v38].userId == userId )
                    break;
                  if ( ++v37 >= v17 )
                    goto LABEL_22;
                }
                if ( _RDI->m_lerpMoverCommands[v38].startTime < startTime )
                  v60[v37] = v16;
              }
              else
              {
LABEL_22:
                if ( v17 < 3 )
                {
                  v39 = v17++;
                  v60[v39] = v20;
                }
              }
            }
          }
        }
      }
      ++v16;
    }
    while ( v16 < _RDI->m_lerpMoverCommandCount );
    v10 = out_movers;
    __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  }
  __asm { vmovaps xmm7, [rsp+0B8h+var_58] }
  v10->profileCount = 0;
  if ( v15 )
    v10->profileCount = _RDI->m_lerpMoverCommandCount;
  v10->stateCount = v17;
  if ( v17 )
  {
    v42 = v60;
    out_result = &v10->states[0].angles;
    do
    {
      if ( v14 >= 3 )
      {
        LODWORD(fDecelTimeSec) = 3;
        LODWORD(fAccelTimeSec) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1715, ASSERT_TYPE_ASSERT, "(unsigned)( pendingCommandNum ) < (unsigned)( 3 )", "pendingCommandNum doesn't index MAX_ANTILAG_LERP_MOVER_STATES\n\t%i not in [0, %i)", fAccelTimeSec, fDecelTimeSec) )
          __debugbreak();
      }
      v44 = (unsigned int)*v42;
      if ( (unsigned int)v44 >= 0x64 )
      {
        LODWORD(fDecelTimeSec) = 100;
        LODWORD(fAccelTimeSec) = *v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1717, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( 100 )", "commandIndex doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", fAccelTimeSec, fDecelTimeSec) )
          __debugbreak();
      }
      _RBX = v44;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rdi+86E8h]
        vmovss  xmm1, dword ptr [rbx+rdi+86E4h]
        vmovss  [rsp+0B8h+fDecelTimeSec], xmm0
        vmovss  xmm0, dword ptr [rbx+rdi+86E0h]
        vmovss  [rsp+0B8h+fAccelTimeSec], xmm1
        vmovss  dword ptr [rsp+0B8h+fmt], xmm0
      }
      ScriptableBg_LerpVector(&_RDI->m_lerpMoverCommands[_RBX].startOrigin, &_RDI->m_lerpMoverCommands[_RBX].endOrigin, _RDI->m_lerpMoverCommands[_RBX].startTime, time, fmt, fAccelTimeSeca, fDecelTimeSeca, out_result - 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rdi+86E8h]
        vmovss  xmm1, dword ptr [rbx+rdi+86E4h]
        vmovss  [rsp+0B8h+fDecelTimeSec], xmm0
        vmovss  xmm0, dword ptr [rbx+rdi+86E0h]
        vmovss  [rsp+0B8h+fAccelTimeSec], xmm1
        vmovss  dword ptr [rsp+0B8h+fmt], xmm0
      }
      ScriptableBg_LerpVector(&_RDI->m_lerpMoverCommands[_RBX].startAngles, &_RDI->m_lerpMoverCommands[_RBX].endAngles, _RDI->m_lerpMoverCommands[_RBX].startTime, time, fmta, fAccelTimeSecb, fDecelTimeSecb, out_result);
      ++v14;
      *(_QWORD *)&out_result[1].y = &_RDI->m_lerpMoverCommands[_RBX].bounds;
      ++v42;
      out_result = (vec3_t *)((char *)out_result + 40);
    }
    while ( v14 < v17 );
  }
}

/*
==============
BgAntiLag::GetCurrentFrameIndex
==============
*/
__int64 BgAntiLag::GetCurrentFrameIndex(BgAntiLag *this)
{
  unsigned int m_nextAntiLagHistory; 

  if ( !this->m_antiLagHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 230, ASSERT_TYPE_ASSERT, "(m_antiLagHistorySize)", (const char *)&queryFormat, "m_antiLagHistorySize") )
    __debugbreak();
  m_nextAntiLagHistory = this->m_nextAntiLagHistory;
  if ( !m_nextAntiLagHistory )
    m_nextAntiLagHistory = this->m_antiLagHistorySize;
  return m_nextAntiLagHistory - 1;
}

/*
==============
BgAntiLag::GetCurrentHistoryFrame
==============
*/
BgAntiLagFrameHistory *BgAntiLag::GetCurrentHistoryFrame(BgAntiLag *this)
{
  __int64 CurrentFrameIndex; 
  __int64 v4; 
  unsigned int m_antiLagHistorySize; 

  if ( !this->m_antiLagHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 237, ASSERT_TYPE_ASSERT, "(m_antiLagHistorySize)", (const char *)&queryFormat, "m_antiLagHistorySize") )
    __debugbreak();
  CurrentFrameIndex = BgAntiLag::GetCurrentFrameIndex(this);
  if ( (unsigned int)CurrentFrameIndex >= this->m_antiLagHistorySize )
  {
    m_antiLagHistorySize = this->m_antiLagHistorySize;
    LODWORD(v4) = CurrentFrameIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 240, ASSERT_TYPE_ASSERT, "(unsigned)( currentFrameIndex ) < (unsigned)( m_antiLagHistorySize )", "currentFrameIndex doesn't index m_antiLagHistorySize\n\t%i not in [0, %i)", v4, m_antiLagHistorySize) )
      __debugbreak();
  }
  return this->m_antiLagHistory[CurrentFrameIndex];
}

/*
==============
BgAntiLag::GetEntityInfoAtTime
==============
*/
char BgAntiLag::GetEntityInfoAtTime(BgAntiLag *this, const int clientNum, const int entityNum, const unsigned int contextFlags, const int time, BgAntiLagEntityInfo *outInfo)
{
  BgAntiLagEntityInfo *outData; 
  BgAntiLagFrameHistory *v11; 
  BgAntiLagFrameHistory *v13; 
  const BgAntiLagFrameHistory *v14; 
  int v15; 
  bool v16; 
  int v18; 
  bool v19; 
  float fmt; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *v23; 
  float outProgress; 

  outData = outInfo;
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 768, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  memset_0(outData, 0, sizeof(BgAntiLagEntityInfo));
  v11 = NULL;
  outStartFrame = NULL;
  outInfo = NULL;
  v23 = NULL;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+88h+arg_18], xmm0
  }
  if ( (contextFlags & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
  if ( !BgAntiLag::GetFrameInfoAtTime(this, clientNum, time, &outStartFrame, (BgAntiLagFrameHistory **)&outInfo, &outProgress) )
    goto LABEL_19;
  v13 = outStartFrame;
  v14 = (const BgAntiLagFrameHistory *)outInfo;
  if ( (!outStartFrame || !outInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 730, ASSERT_TYPE_ASSERT, "(*outStartFrame && *outEndFrame)", (const char *)&queryFormat, "*outStartFrame && *outEndFrame") )
    __debugbreak();
  if ( (contextFlags & 8) != 0 )
  {
    v15 = v13->time;
    outStartFrame = NULL;
    BgAntiLag::GetFrameInfoAtTime(this, clientNum, v15 - 1, &v23, &outStartFrame, (float *)&outInfo);
    v11 = v23;
  }
  v16 = time > v14->time;
  if ( (contextFlags & 8) != 0 || time <= v14->time )
  {
    __asm { vmovss  xmm0, [rsp+88h+arg_18] }
    v18 = entityNum;
    __asm { vmovss  dword ptr [rsp+88h+fmt], xmm0 }
    v19 = BgAntiLag::BlendEntity(this, v13, v14, v11, fmt, entityNum, contextFlags, outData);
    if ( !v16 && v19 )
      return 1;
  }
  else
  {
LABEL_19:
    v18 = entityNum;
  }
  this->EntityStateToAntiLagEntity(this, v18, outData, 0);
  return 0;
}

/*
==============
BgAntiLag::GetEntityInfoListAtTime
==============
*/
void BgAntiLag::GetEntityInfoListAtTime(BgAntiLag *this, const int clientNum, const unsigned int contextFlags, const int time, const unsigned int maxOutInfos, unsigned int *outNumInfoItems, BgAntiLagEntityInfo *outInfoList)
{
  BgAntiLagFrameHistory *i; 
  BgAntiLagFrameHistory *v14; 
  int v15; 
  volatile unsigned int m_usedSize; 
  volatile unsigned int v17; 
  int v18; 
  char v20; 
  volatile unsigned int v21; 
  BgAntiLagFrameHistory *v22; 
  __int64 v23; 
  BgAntiLagFrameHistory *v24; 
  __int64 v25; 
  BgAntiLagEntityHistory *v26; 
  float *outProgress; 
  BgAntiLagEntityInfo *v30; 
  float v31; 
  float v32; 
  char v33; 
  float v34; 
  float v35; 
  unsigned int v36; 
  BgAntiLagFrameHistory *outEndFrame; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *velHintFrame; 
  BgAntiLagFrameHistory *v40; 
  bool timePastEndFrame; 

  __asm { vmovaps [rsp+0D0h+var_40], xmm6 }
  if ( !outNumInfoItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 836, ASSERT_TYPE_ASSERT, "(outNumInfoItems)", (const char *)&queryFormat, "outNumInfoItems") )
    __debugbreak();
  if ( !outInfoList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 837, ASSERT_TYPE_ASSERT, "(outInfoList)", (const char *)&queryFormat, "outInfoList") )
    __debugbreak();
  *outNumInfoItems = 0;
  outStartFrame = NULL;
  outEndFrame = NULL;
  velHintFrame = NULL;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+3Fh+var_6C], xmm6
  }
  if ( (contextFlags & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
  if ( BgAntiLag::GetFrameInfoAtTime(this, clientNum, time, &outStartFrame, &outEndFrame, &v34) )
  {
    i = outEndFrame;
    v14 = outStartFrame;
    if ( (!outStartFrame || !outEndFrame) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 730, ASSERT_TYPE_ASSERT, "(*outStartFrame && *outEndFrame)", (const char *)&queryFormat, "*outStartFrame && *outEndFrame") )
      __debugbreak();
    if ( (contextFlags & 8) != 0 )
    {
      v15 = v14->time;
      v40 = NULL;
      BgAntiLag::GetFrameInfoAtTime(this, clientNum, v15 - 1, &velHintFrame, &v40, &v35);
    }
    timePastEndFrame = time > i->time;
    if ( (contextFlags & 0x10) != 0 )
    {
      m_usedSize = i->characterList.m_usedSize;
      v17 = 0;
      for ( i = outEndFrame; v17 < m_usedSize; ++v17 )
      {
        if ( v17 >= i->characterList.m_usedSize )
        {
          LODWORD(v30) = i->characterList.m_usedSize;
          LODWORD(outProgress) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v30) )
            __debugbreak();
        }
        v18 = i->characterList.m_data[v17];
        i = outEndFrame;
        if ( clientNum != v18 )
        {
          __asm
          {
            vmovss  xmm0, [rbp+3Fh+var_6C]
            vmovss  [rsp+0D0h+var_78], xmm0
          }
          BgAntiLag::AddListAtTimeInfo(this, clientNum, v18, contextFlags, maxOutInfos, outNumInfoItems, outInfoList, outStartFrame, outEndFrame, velHintFrame, timePastEndFrame, v31);
        }
      }
    }
    if ( (contextFlags & 0x60) != 0 )
    {
      if ( (contextFlags & 0x60) == 64 )
      {
        v20 = 1;
        v33 = 1;
        if ( !i->hasFakeActors )
          goto LABEL_54;
      }
      else
      {
        v20 = 0;
        v33 = 0;
      }
      v21 = 0;
      v36 = i->otherEntList.m_usedSize;
      if ( v36 )
      {
        do
        {
          v22 = outEndFrame;
          if ( v21 >= outEndFrame->otherEntList.m_usedSize )
          {
            LODWORD(v30) = outEndFrame->otherEntList.m_usedSize;
            LODWORD(outProgress) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v30) )
              __debugbreak();
          }
          v23 = (int)v22->otherEntList.m_data[v21];
          if ( !v20 )
            goto LABEL_52;
          v24 = outEndFrame;
          if ( !outEndFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 621, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
            __debugbreak();
          if ( (unsigned int)v23 >= 0x800 )
          {
            LODWORD(v30) = 2048;
            LODWORD(outProgress) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 622, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outProgress, v30) )
              __debugbreak();
          }
          v25 = v24->entityData[v23];
          if ( (_DWORD)v25 == -1 )
            goto LABEL_50;
          if ( (unsigned int)v25 >= v24->entityDataStandard.m_usedSize )
          {
            LODWORD(v30) = v24->entityDataStandard.m_usedSize;
            LODWORD(outProgress) = v24->entityData[v23];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v30) )
              __debugbreak();
          }
          if ( v24->entityDataStandard.m_data[v25]->entType == -1 )
          {
LABEL_50:
            v26 = NULL;
          }
          else
          {
            if ( (unsigned int)v25 >= v24->entityDataStandard.m_usedSize )
            {
              LODWORD(v30) = v24->entityDataStandard.m_usedSize;
              LODWORD(outProgress) = v25;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v30) )
                __debugbreak();
            }
            v26 = v24->entityDataStandard.m_data[v25];
          }
          if ( (v26->flags & 8) != 0 )
          {
LABEL_52:
            __asm
            {
              vmovss  xmm0, [rbp+3Fh+var_6C]
              vmovss  [rsp+0D0h+var_78], xmm0
            }
            BgAntiLag::AddListAtTimeInfo(this, clientNum, v23, contextFlags, maxOutInfos, outNumInfoItems, outInfoList, outStartFrame, outEndFrame, velHintFrame, timePastEndFrame, v32);
          }
          v20 = v33;
          ++v21;
        }
        while ( v21 < v36 );
      }
    }
  }
LABEL_54:
  __asm { vmovaps xmm6, [rsp+0D0h+var_40] }
}

/*
==============
BgAntiLag::GetFrameInfoAtTime
==============
*/
bool BgAntiLag::GetFrameInfoAtTime(BgAntiLag *this, int clientIndex, int gameTime, BgAntiLagFrameHistory **outStartFrame, BgAntiLagFrameHistory **outEndFrame, float *outProgress)
{
  __int64 v10; 
  const dvar_t *v14; 
  char v15; 
  unsigned int CurrentFrameIndex; 
  unsigned int m_antiLagHistorySize; 
  BgAntiLagFrameHistory *v18; 
  BgAntiLagFrameHistory *v19; 
  int time; 
  BgAntiLagFrameHistory *v21; 
  int v27; 
  __int64 v28; 
  BgAntiLagFrameHistory *v29; 
  int v30; 
  BgAntiLagFrameHistory **outEndFramea; 

  v10 = clientIndex;
  if ( !outStartFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 267, ASSERT_TYPE_ASSERT, "(outStartFrame)", (const char *)&queryFormat, "outStartFrame") )
    __debugbreak();
  if ( !outEndFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 268, ASSERT_TYPE_ASSERT, "(outEndFrame)", (const char *)&queryFormat, "outEndFrame") )
    __debugbreak();
  _R12 = outProgress;
  if ( !outProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 269, ASSERT_TYPE_ASSERT, "(outProgress)", (const char *)&queryFormat, "outProgress") )
    __debugbreak();
  *outStartFrame = NULL;
  *outEndFrame = NULL;
  *outProgress = 0.0;
  if ( (int)v10 < 0 )
    goto LABEL_20;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)v10 >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
    goto LABEL_20;
  v14 = DVARBOOL_sv_rewindFilterUnsentPositions;
  if ( !DVARBOOL_sv_rewindFilterUnsentPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_rewindFilterUnsentPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
    v15 = 1;
  else
LABEL_20:
    v15 = 0;
  Sys_ProfBeginNamedEvent(0, "GetFrameInfoAtTime()");
  CurrentFrameIndex = BgAntiLag::GetCurrentFrameIndex(this);
  m_antiLagHistorySize = this->m_antiLagHistorySize;
  v18 = this->m_antiLagHistory[this->m_nextAntiLagHistory];
  v19 = this->m_antiLagHistory[CurrentFrameIndex];
  outEndFramea = (BgAntiLagFrameHistory **)v19;
  time = v19->time;
  if ( time > 0 && !v18->time )
  {
    v18 = this->m_antiLagHistory[0];
    m_antiLagHistorySize = CurrentFrameIndex;
  }
  if ( gameTime <= time )
  {
    if ( gameTime >= v18->time )
    {
      v27 = 0;
      if ( m_antiLagHistorySize )
      {
        while ( 1 )
        {
          v28 = (int)((CurrentFrameIndex + m_antiLagHistorySize - v27) % m_antiLagHistorySize);
          v29 = this->m_antiLagHistory[v28];
          if ( gameTime > v29->time && (!v15 || v29->clientDataValid[v10]) )
            break;
          if ( ++v27 >= m_antiLagHistorySize )
            goto LABEL_28;
        }
        v30 = 1;
        *outStartFrame = v29;
        if ( m_antiLagHistorySize > 1 )
        {
          do
          {
            v19 = this->m_antiLagHistory[(v30 + (int)v28) % m_antiLagHistorySize];
            if ( gameTime <= v19->time && (!v15 || v19->clientDataValid[v10]) )
              goto LABEL_27;
          }
          while ( ++v30 < m_antiLagHistorySize );
        }
      }
    }
    else if ( !v15 || v18->clientDataValid[v10] )
    {
      *outEndFrame = v18;
    }
  }
  else if ( !v15 || v19->clientDataValid[v10] )
  {
LABEL_27:
    *outEndFrame = v19;
  }
LABEL_28:
  v21 = *outStartFrame;
  if ( *outEndFrame )
  {
    if ( v21 )
    {
      if ( gameTime <= v21->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 347, ASSERT_TYPE_ASSERT, "( gameTime > (*outStartFrame)->time )", (const char *)&queryFormat, "gameTime > (*outStartFrame)->time") )
        __debugbreak();
      if ( (*outEndFrame)->time <= (*outStartFrame)->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 348, ASSERT_TYPE_ASSERT, "( (*outEndFrame)->time > (*outStartFrame)->time )", (const char *)&queryFormat, "(*outEndFrame)->time > (*outStartFrame)->time") )
        __debugbreak();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, ebp
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm1, xmm1, xmm0
        vmovss  dword ptr [r12], xmm1
      }
    }
    else
    {
      *outStartFrame = *outEndFrame;
      *outProgress = 1.0;
    }
  }
  else if ( v21 )
  {
    *outEndFrame = v21;
    *outProgress = 0.0;
  }
  if ( v18 && (!*((_DWORD *)outEndFramea + 7978) || !v18->time) )
  {
    *outStartFrame = NULL;
    *outEndFrame = NULL;
  }
  Sys_ProfEndNamedEvent();
  return *outStartFrame && *outEndFrame;
}

/*
==============
BgAntiLag::GetLerpMoverCommandIndex
==============
*/
__int64 BgAntiLag::GetLerpMoverCommandIndex(BgAntiLag *this, const unsigned int commandNum)
{
  unsigned int v4; 
  unsigned int v5; 
  __int64 v7; 
  __int64 v8; 
  int v9; 

  if ( this->m_lerpMoverCommandCount > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1625, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
    __debugbreak();
  if ( this->m_lerpMoverCommandBegin >= 0x64 )
  {
    v9 = 100;
    LODWORD(v7) = this->m_lerpMoverCommandBegin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1626, ASSERT_TYPE_ASSERT, "(unsigned)( m_lerpMoverCommandBegin ) < (unsigned)( 100 )", "m_lerpMoverCommandBegin doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( commandNum > this->m_lerpMoverCommandCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1627, ASSERT_TYPE_ASSERT, "(commandNum <= m_lerpMoverCommandCount)", (const char *)&queryFormat, "commandNum <= m_lerpMoverCommandCount") )
    __debugbreak();
  v4 = commandNum + this->m_lerpMoverCommandBegin;
  v5 = v4 - 100;
  if ( v4 < 0x64 )
    v5 = v4;
  if ( v5 >= 0x64 )
  {
    LODWORD(v8) = 100;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1634, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( 100 )", "commandIndex doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return v5;
}

/*
==============
BgAntiLag::GetLerpMoverOverlap
==============
*/

bool __fastcall BgAntiLag::GetLerpMoverOverlap(BgAntiLag *this, const vec3_t *playerOrigin, double playerRadius, const float playerHeight, const BgAntiLagLerpMoverCmd *command)
{
  char v5; 
  char v6; 

  _RAX = command;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+8]
    vaddss  xmm0, xmm1, xmm3
    vmovss  xmm4, dword ptr [rax+5Ch]
    vcomiss xmm4, xmm0
  }
  if ( !(v5 | v6) )
    return 0;
  __asm
  {
    vaddss  xmm0, xmm4, dword ptr [rax+64h]
    vcomiss xmm0, xmm1
  }
  if ( v5 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+54h]
    vmovss  xmm1, dword ptr [rax+58h]
    vaddss  xmm5, xmm2, dword ptr [rax+60h]
    vsubss  xmm4, xmm0, dword ptr [rdx]
    vsubss  xmm2, xmm1, dword ptr [rdx+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vcomiss xmm1, xmm4
  }
  return !(v5 | v6);
}

/*
==============
BgAntiLag::GetNearestEntities
==============
*/
void BgAntiLag::GetNearestEntities(const Physics_WorldId worldId, const playerState_s *const ps, const int entIndex, const vec3_t *origin, bitarray<2048> *outNearestEntities)
{
  unsigned int v9; 
  bitarray<2048> *v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  PhysicsQuery_Collected<unsigned int> *collectedScriptables; 
  __int64 removeDuplicates; 
  int ignoreEnts; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  char v34; 

  __asm
  {
    vmovss  xmm0, cs:__real@bf800000
    vmovss  xmm1, cs:__real@3f800000
  }
  _RDI = DCONST_DVARFLT_antilagBroadPhaseSize;
  v9 = 0;
  __asm { vmovaps [rsp+580h+var_30], xmm6 }
  ignoreEnts = entIndex;
  collectedEnts.ids = (unsigned __int16 *)&v34;
  collectedEnts.count = 0;
  collectedEnts.countMax = 600;
  __asm
  {
    vmovss  dword ptr [rsp+580h+aabbMin], xmm0
    vmovss  dword ptr [rsp+580h+aabbMin+4], xmm0
    vmovss  dword ptr [rbp+480h+aabbMin+8], xmm0
    vmovss  dword ptr [rsp+580h+aabbMax], xmm1
    vmovss  dword ptr [rsp+580h+aabbMax+4], xmm1
    vmovss  dword ptr [rsp+580h+aabbMax+8], xmm1
  }
  if ( !DCONST_DVARFLT_antilagBroadPhaseSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagBroadPhaseSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmulss  xmm0, xmm6, dword ptr [rsp+580h+aabbMin]
    vaddss  xmm1, xmm0, dword ptr [r14]
    vmulss  xmm0, xmm6, dword ptr [rsp+580h+aabbMin+4]
    vmulss  xmm2, xmm6, dword ptr [rsp+580h+aabbMax]
    vmovss  dword ptr [rsp+580h+aabbMin], xmm1
    vaddss  xmm1, xmm0, dword ptr [r14+4]
    vmulss  xmm0, xmm6, dword ptr [rbp+480h+aabbMin+8]
    vmovss  dword ptr [rsp+580h+aabbMin+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [r14+8]
    vaddss  xmm0, xmm2, dword ptr [r14]
    vmovss  dword ptr [rbp+480h+aabbMin+8], xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+580h+aabbMax+4]
    vaddss  xmm2, xmm1, dword ptr [r14+4]
    vmovss  dword ptr [rsp+580h+aabbMax], xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+580h+aabbMax+8]
    vaddss  xmm1, xmm0, dword ptr [r14+8]
    vmovss  dword ptr [rsp+580h+aabbMax+8], xmm1
    vmovss  dword ptr [rsp+580h+aabbMax+4], xmm2
  }
  PhysicsQuery_ImmediateAABBBroadphaseQuery(worldId, &aabbMin, &aabbMax, 42035505, 1u, &ignoreEnts, &collectedEnts, NULL, 1);
  __asm { vmovaps xmm6, [rsp+580h+var_30] }
  v25 = outNearestEntities;
  v26 = 4i64;
  do
  {
    *(_QWORD *)v25->array = 0i64;
    *(_QWORD *)&v25->array[2] = 0i64;
    *(_QWORD *)&v25->array[4] = 0i64;
    v25 = (bitarray<2048> *)((char *)v25 + 64);
    *(_QWORD *)&v25[-1].array[54] = 0i64;
    *(_QWORD *)&v25[-1].array[56] = 0i64;
    *(_QWORD *)&v25[-1].array[58] = 0i64;
    *(_QWORD *)&v25[-1].array[60] = 0i64;
    *(_QWORD *)&v25[-1].array[62] = 0i64;
    --v26;
  }
  while ( v26 );
  if ( collectedEnts.count )
  {
    do
    {
      v27 = collectedEnts.ids[v9];
      if ( (unsigned int)v27 >= 0x800 )
      {
        LODWORD(removeDuplicates) = 2048;
        LODWORD(collectedScriptables) = collectedEnts.ids[v9];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", collectedScriptables, removeDuplicates) )
          __debugbreak();
      }
      ++v9;
      outNearestEntities->array[v27 >> 5] |= 0x80000000 >> (v27 & 0x1F);
    }
    while ( v9 < collectedEnts.count );
  }
}

/*
==============
BgAntiLag::InvalidateClientData
==============
*/
void BgAntiLag::InvalidateClientData(BgAntiLag *this, int clientIndex)
{
  __int64 v3; 
  __int64 i; 
  BgAntiLagFrameHistory *v5; 

  v3 = clientIndex;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)v3 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    for ( i = 0i64; (unsigned int)i < this->m_antiLagHistorySize; v5->clientDataValid[v3] = 0 )
    {
      v5 = this->m_antiLagHistory[i];
      i = (unsigned int)(i + 1);
    }
  }
}

/*
==============
BgAntiLag::IsTimeAheadofOrCurrentWithMostRecentDatabase
==============
*/
bool BgAntiLag::IsTimeAheadofOrCurrentWithMostRecentDatabase(BgAntiLag *this, const int gameTime)
{
  BgAntiLagFrameHistory *CurrentHistoryFrame; 

  CurrentHistoryFrame = BgAntiLag::GetCurrentHistoryFrame(this);
  return !CurrentHistoryFrame || CurrentHistoryFrame->time <= gameTime;
}

/*
==============
BgAntiLag::MarkBoneForUpdate
==============
*/
void BgAntiLag::MarkBoneForUpdate(BgAntiLag *this, BgAntiLagFrameHistory *frame, const entityState_t *es, scr_string_t boneId)
{
  BgAntiLagEntityHistory *EntityData; 
  BgAntiLagEntityHistory *v9; 
  int extDataHandle; 
  BgAntiLagEntityHistoryExtended *v11; 
  int v12; 
  unsigned int m_maxSize; 
  BgAntiLagBone *v14; 
  __int64 v15; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1140, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1141, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
    __debugbreak();
  EntityData = BgAntiLag::AllocateEntityData(this, frame, es);
  v9 = EntityData;
  if ( EntityData )
  {
    extDataHandle = EntityData->extDataHandle;
    if ( extDataHandle == -1 )
    {
      v12 = 200;
      m_maxSize = 200;
      if ( frame->entityDataExtended.m_maxSize )
        m_maxSize = frame->entityDataExtended.m_maxSize;
      if ( frame->entityDataExtended.m_usedSize >= m_maxSize )
      {
        if ( frame->entityDataExtended.m_maxSize )
          v12 = frame->entityDataExtended.m_maxSize;
        LODWORD(v15) = frame->entityDataExtended.m_usedSize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", v15, v12) )
          __debugbreak();
      }
      v11 = &frame->entityDataExtended.m_data[frame->entityDataExtended.m_usedSize++];
      *(_QWORD *)v11->boneInfo.boneList.m_data[0].origin.v = 0i64;
      *(_QWORD *)&v11->boneInfo.boneList.m_data[0].origin.z = 0i64;
      *(_QWORD *)&v11->boneInfo.boneList.m_data[0].dataValid = 0i64;
      *(_QWORD *)&v11->boneInfo.boneList.m_data[1].origin.y = 0i64;
      *(_QWORD *)&v11->boneInfo.boneList.m_data[1].boneId = 0i64;
      *(_QWORD *)v11->boneInfo.boneList.m_data[2].origin.v = 0i64;
      *(_QWORD *)&v11->boneInfo.boneList.m_data[2].origin.z = 0i64;
      *(_QWORD *)&v11->boneInfo.boneList.m_data[2].dataValid = 0i64;
      v11->boneInfo.boneList.m_maxSize = 0;
      v9->extDataHandle = frame->entityDataExtended.m_usedSize - 1;
    }
    else
    {
      v11 = AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](&frame->entityDataExtended, extDataHandle);
    }
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1151, ASSERT_TYPE_ASSERT, "(extData)", (const char *)&queryFormat, "extData") )
      __debugbreak();
    v14 = AntiLagVector<BgAntiLagBone,3>::push_back(&v11->boneInfo.boneList);
    v14->dataValid = 0;
    v14->boneId = boneId;
  }
}

/*
==============
BgAntiLag::MarkBroadPhaseEntsForUpdate
==============
*/
void BgAntiLag::MarkBroadPhaseEntsForUpdate(BgAntiLag *this, BgAntiLagFrameHistory *frame, playerState_s *ps, const vec3_t *origin, const bitarray<2048> *nearestEntities)
{
  int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v16; 
  int v17; 
  __int64 v18; 
  __int16 v19; 
  __int64 v20; 
  __int16 *v21; 
  char v22; 
  __int64 clientNum; 
  __int64 v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  __int16 *v47; 
  const vec3_t *v48; 
  char v49[8]; 
  int v50; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v48 = origin;
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1322, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1323, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vmovss  xmm8, cs:__real@7f7fffff }
  v46 = -1;
  v12 = -1;
  v45 = -1;
  LODWORD(v13) = 0;
  v14 = nearestEntities->array[0];
  __asm { vmovaps xmm7, xmm8 }
  while ( v14 )
  {
LABEL_11:
    v16 = __lzcnt(v14);
    v17 = v16 + 32 * v13;
    if ( v16 >= 0x20 )
    {
      LODWORD(v44) = 32;
      LODWORD(v43) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    if ( (v14 & (0x80000000 >> v16)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v14 &= ~(0x80000000 >> v16);
    v12 = v45;
    if ( this->GetEntityStateAndPhysicsInfo(this, v17, (const entityState_t **)&v47, (const PhysicsObject **)v49) )
    {
      v18 = (__int64)v47;
      if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v19 = *(_WORD *)(v18 + 8);
      if ( ((v19 - 1) & 0xFFED) != 0 || v19 == 3 )
      {
        v20 = (__int64)v47;
        if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1935, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( *(_WORD *)(v20 + 8) != 6 || *(_WORD *)(v20 + 200) != 1 )
          goto LABEL_35;
      }
      v21 = v47;
      if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1463, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      this->GetOriginForClosestCharacters(this, *v21, (vec3_t *)&v50);
      _RAX = v48;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vsubss  xmm3, xmm0, [rsp+0E8h+var_88]
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  xmm0, dword ptr [rax+8]
        vsubss  xmm2, xmm1, [rsp+0E8h+var_84]
        vsubss  xmm4, xmm0, [rsp+0E8h+var_80]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm5, xmm3, xmm0
        vcomiss xmm5, xmm8
      }
      if ( v22 )
      {
        v12 = v46;
        __asm { vmovaps xmm7, xmm8 }
        v46 = *v21;
        v45 = v12;
        __asm { vmovaps xmm8, xmm5 }
        goto LABEL_36;
      }
      __asm { vcomiss xmm5, xmm7 }
      if ( v22 )
      {
        v12 = *v21;
        v45 = v12;
        __asm { vmovaps xmm7, xmm5 }
      }
      else
      {
LABEL_35:
        v12 = v45;
      }
LABEL_36:
      this->OnBroadphaseCollection(this, v17, ps);
    }
  }
  while ( 1 )
  {
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= 0x40 )
      break;
    v14 = nearestEntities->array[v13];
    if ( v14 )
      goto LABEL_11;
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1492, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_antilagClosestCharactersRadius;
  if ( !DCONST_DVARFLT_antilagClosestCharactersRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagClosestCharactersRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm6, xmm0, xmm0
  }
  if ( ps->clientNum >= 0x800u )
  {
    LODWORD(v44) = 2048;
    LODWORD(v43) = ps->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( ( 2048 ) )", "ps->clientNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v43, v44) )
      __debugbreak();
  }
  clientNum = ps->clientNum;
  if ( v46 != -1 )
  {
    __asm { vcomiss xmm8, xmm6 }
    this->m_preArchiveData[clientNum].closestCharacters[0] = truncate_cast<unsigned short,int>(v46 + 1);
  }
  if ( v12 != -1 )
  {
    __asm { vcomiss xmm7, xmm6 }
    this->m_preArchiveData[clientNum].closestCharacters[1] = truncate_cast<unsigned short,int>(v12 + 1);
  }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
BgAntiLag::MarkPreArchiveFlag
==============
*/
void BgAntiLag::MarkPreArchiveFlag(BgAntiLag *this, int entIndex, int flags)
{
  __int64 v3; 
  int v6; 
  BgAntilagPreArchiveData *v7; 
  BgAntiLagFrameHistory *CurrentHistoryFrame; 
  BgAntiLagFrameHistory *v9; 
  unsigned int v10; 
  int m_maxSize; 
  int v12; 
  unsigned int m_currFrameEntityCount; 
  unsigned int m_currFrameNonCriticalEntCount; 
  __int64 v15; 
  const dvar_t *v16; 
  bool v17; 
  bool (__fastcall *OnlyUseWarningsForMarkAssert)(BgAntiLag *); 
  bool v19; 
  bool IsCharacterEntity; 
  bool v21; 
  __int64 v22; 
  __int64 v23; 
  entityState_t *v24; 
  char v25; 

  v3 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, 2048) )
    __debugbreak();
  if ( (flags & 5) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 135, ASSERT_TYPE_ASSERT, "(flags & (ANTILAG_MARK_FORCE_INCLUDE | ANTILAG_MARK_POTENTIAL_INCLUDE))", (const char *)&queryFormat, "flags & (ANTILAG_MARK_FORCE_INCLUDE | ANTILAG_MARK_POTENTIAL_INCLUDE)") )
    __debugbreak();
  v6 = this->m_preArchiveData[v3].flags;
  v7 = &this->m_preArchiveData[v3];
  if ( (v6 & 5) != 0 && ((flags & 1) == 0 || (v6 & 1) != 0) )
  {
    v7->flags = flags | v6;
  }
  else
  {
    CurrentHistoryFrame = BgAntiLag::GetCurrentHistoryFrame(this);
    v9 = CurrentHistoryFrame;
    v10 = 600;
    if ( (flags & 1) != 0 )
    {
      m_maxSize = CurrentHistoryFrame->entityDataStandard.m_maxSize;
      v12 = 600;
      m_currFrameEntityCount = this->m_currFrameEntityCount;
      if ( m_maxSize )
        v12 = m_maxSize;
      if ( m_currFrameEntityCount == v12 )
      {
        m_currFrameNonCriticalEntCount = this->m_currFrameNonCriticalEntCount;
        if ( m_currFrameNonCriticalEntCount )
        {
          this->m_currFrameEntityCount = m_currFrameEntityCount - 1;
          v15 = m_currFrameNonCriticalEntCount - 1;
          this->m_currFrameNonCriticalEntCount = v15;
          if ( this->m_preArchiveNonCriticalList[v15] >= 0x800 )
          {
            LODWORD(v23) = 2048;
            LODWORD(v22) = this->m_preArchiveNonCriticalList[v15];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( m_preArchiveNonCriticalList[m_currFrameNonCriticalEntCount] ) < (unsigned)( ( 2048 ) )", "m_preArchiveNonCriticalList[m_currFrameNonCriticalEntCount] doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v22, v23) )
              __debugbreak();
          }
          this->m_preArchiveData[this->m_preArchiveNonCriticalList[this->m_currFrameNonCriticalEntCount]].flags = 0;
        }
      }
      v7->flags |= flags;
      ++this->m_currFrameEntityCount;
    }
    else if ( (flags & 4) != 0 )
    {
      v16 = DCONST_DVARMPINT_antilagArchiveCap;
      if ( !DCONST_DVARMPINT_antilagArchiveCap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagArchiveCap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( this->m_currFrameEntityCount < v16->current.integer )
      {
        if ( this->m_currFrameNonCriticalEntCount >= 0x800 )
        {
          LODWORD(v23) = 2048;
          LODWORD(v22) = this->m_currFrameNonCriticalEntCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( m_currFrameNonCriticalEntCount ) < (unsigned)( ( 2048 ) )", "m_currFrameNonCriticalEntCount doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        this->m_preArchiveNonCriticalList[this->m_currFrameNonCriticalEntCount++] = v3;
        v7->flags |= flags;
        ++this->m_currFrameEntityCount;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 179, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown antilag pre archive flag.") )
    {
      __debugbreak();
    }
    if ( v9->entityDataStandard.m_maxSize )
      v10 = v9->entityDataStandard.m_maxSize;
    if ( this->m_currFrameEntityCount > v10 )
    {
      v17 = this->GetEntityStateAndPhysicsInfo(this, v3, (const entityState_t **)&v24, (const PhysicsObject **)&v25);
      OnlyUseWarningsForMarkAssert = this->OnlyUseWarningsForMarkAssert;
      if ( v17 )
      {
        v19 = OnlyUseWarningsForMarkAssert(this);
        IsCharacterEntity = BG_IsCharacterEntity(v24);
        Antilag_DebugAssert("Ran out of critical antilag entity slots for marking.", IsCharacterEntity, v19);
      }
      else
      {
        v21 = OnlyUseWarningsForMarkAssert(this);
        Antilag_DebugAssert("Ran out of critical antilag entity slots for marking but could not determine type.", 0, v21);
      }
    }
  }
}

/*
==============
BgAntiLag::MarkPreArchive_AddGeneral
==============
*/
void BgAntiLag::MarkPreArchive_AddGeneral(BgAntiLag *this, int entIndex, int flags)
{
  this->m_preArchiveData[entIndex].flags |= flags;
  ++this->m_currFrameEntityCount;
}

/*
==============
BgAntiLag::MarkPreArchive_AddNonCritical
==============
*/
void BgAntiLag::MarkPreArchive_AddNonCritical(BgAntiLag *this, int entIndex, int flags)
{
  __int64 v4; 
  unsigned int m_currFrameNonCriticalEntCount; 
  int v7; 

  v4 = entIndex;
  if ( this->m_currFrameNonCriticalEntCount >= 0x800 )
  {
    v7 = 2048;
    m_currFrameNonCriticalEntCount = this->m_currFrameNonCriticalEntCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( m_currFrameNonCriticalEntCount ) < (unsigned)( ( 2048 ) )", "m_currFrameNonCriticalEntCount doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", m_currFrameNonCriticalEntCount, v7) )
      __debugbreak();
  }
  this->m_preArchiveNonCriticalList[this->m_currFrameNonCriticalEntCount++] = v4;
  this->m_preArchiveData[v4].flags |= flags;
  ++this->m_currFrameEntityCount;
}

/*
==============
BgAntiLag::MarkPreArchive_RemoveNonCritical
==============
*/
void BgAntiLag::MarkPreArchive_RemoveNonCritical(BgAntiLag *this)
{
  unsigned int v2; 
  unsigned int v3; 
  int v4; 

  --this->m_currFrameNonCriticalEntCount;
  --this->m_currFrameEntityCount;
  v2 = this->m_preArchiveNonCriticalList[this->m_currFrameNonCriticalEntCount];
  if ( v2 >= 0x800 )
  {
    v4 = 2048;
    v3 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( m_preArchiveNonCriticalList[m_currFrameNonCriticalEntCount] ) < (unsigned)( ( 2048 ) )", "m_preArchiveNonCriticalList[m_currFrameNonCriticalEntCount] doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  this->m_preArchiveData[this->m_preArchiveNonCriticalList[this->m_currFrameNonCriticalEntCount]].flags = 0;
}

/*
==============
BgAntiLag::PackClosestCharacters
==============
*/
void BgAntiLag::PackClosestCharacters(BgAntiLag *this, const playerState_s *ps, const int *closestCharacters, const float *closestCharactersDistSq)
{
  __int64 v12; 
  __int64 v13; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = closestCharactersDistSq;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1492, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !closestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1493, ASSERT_TYPE_ASSERT, "(closestCharacters)", (const char *)&queryFormat, "closestCharacters") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1494, ASSERT_TYPE_ASSERT, "(closestCharactersDistSq)", (const char *)&queryFormat, "closestCharactersDistSq") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_antilagClosestCharactersRadius;
  if ( !DCONST_DVARFLT_antilagClosestCharactersRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagClosestCharactersRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm6, xmm0, xmm0
  }
  if ( ps->clientNum >= 0x800u )
  {
    LODWORD(v13) = 2048;
    LODWORD(v12) = ps->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( ( 2048 ) )", "ps->clientNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( *closestCharacters != -1 )
    __asm { vcomiss xmm6, dword ptr [rdi] }
  if ( closestCharacters[1] != -1 )
    __asm { vcomiss xmm6, dword ptr [rdi+4] }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BgAntiLag::PrintRefCountAssertInfo
==============
*/
void BgAntiLag::PrintRefCountAssertInfo(BgAntiLag *this)
{
  int i; 

  Com_Printf(0, "Antilag refcount error: Time %d, Context %d\n", (unsigned int)this->m_sceneAntiLagTime, this->m_sceneAntiLagContext);
  for ( i = 0; i < this->m_sceneAntiLagRefCount; ++i )
    Com_Printf(0, "Antilag stack depth %d, Item %s\n", (unsigned int)i, this->m_refCountDebugStack[(__int64)i].type);
}

/*
==============
BgAntiLag::ProcessBonesForEnt
==============
*/
void BgAntiLag::ProcessBonesForEnt(BgAntiLag *this, BgAntiLagEntityHistoryExtended *extData, const entityState_t *es)
{
  volatile unsigned int m_usedSize; 
  volatile unsigned int i; 
  __int64 v8; 
  __int64 v9; 

  if ( !extData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 975, ASSERT_TYPE_ASSERT, "(extData)", (const char *)&queryFormat, "extData") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 976, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  m_usedSize = extData->boneInfo.boneList.m_usedSize;
  for ( i = 0; i < m_usedSize; ++i )
  {
    if ( i >= extData->boneInfo.boneList.m_usedSize )
    {
      LODWORD(v9) = extData->boneInfo.boneList.m_usedSize;
      LODWORD(v8) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    this->ProcessBone(this, (BgAntiLagBone *)((char *)extData + 20 * (int)i), es);
  }
}

/*
==============
BgAntiLag::PurgeLerpMoverCommands
==============
*/
void BgAntiLag::PurgeLerpMoverCommands(BgAntiLag *this, const unsigned int time)
{
  unsigned int i; 
  __int64 m_lerpMoverCommandBegin; 
  unsigned int v6; 
  __int64 v7; 
  int v8; 

  if ( time >= 0x7D0 )
  {
    if ( this->m_lerpMoverCommandCount > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1736, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
      __debugbreak();
    if ( this->m_lerpMoverCommandBegin >= 0x64 )
    {
      v8 = 100;
      LODWORD(v7) = this->m_lerpMoverCommandBegin;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1737, ASSERT_TYPE_ASSERT, "(unsigned)( m_lerpMoverCommandBegin ) < (unsigned)( 100 )", "m_lerpMoverCommandBegin doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    for ( i = this->m_lerpMoverCommandCount; i; this->m_lerpMoverCommandBegin = v6 )
    {
      m_lerpMoverCommandBegin = this->m_lerpMoverCommandBegin;
      if ( this->m_lerpMoverCommands[m_lerpMoverCommandBegin].endTime >= time - 2000 )
        break;
      --i;
      v6 = m_lerpMoverCommandBegin + 1;
      this->m_lerpMoverCommandCount = i;
      if ( (unsigned int)(m_lerpMoverCommandBegin + 1) >= 0x64 )
        v6 = 0;
    }
  }
}

/*
==============
BgAntiLag::RemoveEntityFromHistory
==============
*/
void BgAntiLag::RemoveEntityFromHistory(BgAntiLag *this, int entIndex)
{
  __int64 v2; 
  __int64 i; 
  BgAntiLagFrameHistory *v5; 
  int v7; 

  v2 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1116, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, v7) )
      __debugbreak();
  }
  for ( i = 0i64; (unsigned int)i < this->m_antiLagHistorySize; v5->entityData[v2] = -1 )
  {
    v5 = this->m_antiLagHistory[i];
    i = (unsigned int)(i + 1);
  }
}

/*
==============
BgAntiLag::RestoreAntiLagSceneInternal
==============
*/
void BgAntiLag::RestoreAntiLagSceneInternal(BgAntiLag *this, unsigned int contextFlags)
{
  unsigned int v2; 
  volatile unsigned int m_usedSize; 
  BgAntiLagRewindScene *m_rewindScene; 
  __int64 v7; 
  __int64 v8; 

  v2 = 0;
  m_usedSize = this->m_rewindScene->entityBackup.m_usedSize;
  if ( m_usedSize )
  {
    do
    {
      m_rewindScene = this->m_rewindScene;
      if ( v2 >= m_rewindScene->entityBackup.m_usedSize )
      {
        LODWORD(v8) = m_rewindScene->entityBackup.m_usedSize;
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      this->RestoreAntiLagSceneEnt(this, (const BgAntiLagRewindEntity *)((char *)m_rewindScene + 52 * (int)v2++), contextFlags);
    }
    while ( v2 < m_usedSize );
  }
  this->AntiLagRestoreSceneHandlePoseRewind(this);
  this->m_rewindScene->entityBackup.m_usedSize = 0;
  this->m_rewindScene->inUse = 0;
}

/*
==============
BgAntiLag::RestoreAntiLagSceneRefcount
==============
*/
bool BgAntiLag::RestoreAntiLagSceneRefcount(BgAntiLag *this, const char *debugId)
{
  int m_sceneAntiLagRefCount; 
  __int64 v5; 
  char *v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 

  m_sceneAntiLagRefCount = this->m_sceneAntiLagRefCount;
  if ( m_sceneAntiLagRefCount <= 0 )
  {
    Com_Printf(0, "Antilag refcount error: On %s request.\n", debugId);
    BgAntiLag::PrintRefCountAssertInfo(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1434, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "m_sceneAntiLagRefCount > 0") )
      __debugbreak();
    m_sceneAntiLagRefCount = this->m_sceneAntiLagRefCount;
  }
  v5 = 0x7FFFFFFFi64;
  v6 = (char *)&this->m_antiLagHistory[32 * (__int64)m_sceneAntiLagRefCount + 170] + 4;
  if ( !debugId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = (const char *)(debugId - v6);
  do
  {
    v8 = v6[(_QWORD)v7];
    v9 = v5;
    v10 = *v6++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      Com_Printf(0, "Antilag refcount error: On %s request.\n", debugId);
      BgAntiLag::PrintRefCountAssertInfo(this);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to pop invalid antilag stack item.") )
        __debugbreak();
      break;
    }
  }
  while ( v8 );
  if ( this->m_sceneAntiLagRefCount-- == 1 )
    *(_QWORD *)&this->m_sceneAntiLagContext = 0i64;
  return this->m_sceneAntiLagRefCount == 0;
}

/*
==============
BgAntiLag::ShouldArchiveEnt
==============
*/
bool BgAntiLag::ShouldArchiveEnt(BgAntiLag *this, const entityState_t *es)
{
  int flags; 
  bool result; 
  int number; 
  int v7; 

  if ( es->number >= 0x800u )
  {
    v7 = 2048;
    number = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( 2048 ) )", "es->number doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", number, v7) )
      __debugbreak();
  }
  result = 0;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0x11u) )
  {
    flags = this->m_preArchiveData[es->number].flags;
    if ( (flags & 1) != 0 || (flags & 4) != 0 )
      return 1;
  }
  return result;
}

/*
==============
BgAntiLag::StartSceneArchive
==============
*/
BgAntiLagFrameHistory *BgAntiLag::StartSceneArchive(BgAntiLag *this, const bool *clientHasSnapshot, int time)
{
  BgAntiLagFrameHistory *CurrentHistoryFrame; 
  unsigned int v7; 
  __int64 m_nextAntiLagHistory; 
  __int64 v9; 
  BgAntiLagFrameHistory *v10; 
  unsigned int v11; 
  unsigned int *m_preArchiveNonCriticalList; 
  __int16 *entityData; 
  __int64 v14; 
  bool v15; 
  __int64 v17; 

  if ( !this->m_antiLagHistorySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 914, ASSERT_TYPE_ASSERT, "( m_antiLagHistorySize > 0 )", (const char *)&queryFormat, "m_antiLagHistorySize > 0") )
    __debugbreak();
  if ( this->m_nextAntiLagHistory >= this->m_antiLagHistorySize )
  {
    LODWORD(v17) = this->m_nextAntiLagHistory;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 915, ASSERT_TYPE_ASSERT, "(unsigned)( m_nextAntiLagHistory ) < (unsigned)( m_antiLagHistorySize )", "m_nextAntiLagHistory doesn't index m_antiLagHistorySize\n\t%i not in [0, %i)", v17, this->m_antiLagHistorySize) )
      __debugbreak();
  }
  CurrentHistoryFrame = BgAntiLag::GetCurrentHistoryFrame(this);
  v7 = 0;
  this->m_prevFrame = CurrentHistoryFrame;
  if ( !CurrentHistoryFrame->time )
    this->m_prevFrame = NULL;
  m_nextAntiLagHistory = this->m_nextAntiLagHistory;
  v9 = 2048i64;
  v10 = this->m_antiLagHistory[m_nextAntiLagHistory];
  v11 = m_nextAntiLagHistory + 1;
  m_preArchiveNonCriticalList = this->m_preArchiveNonCriticalList;
  if ( v11 >= this->m_antiLagHistorySize )
    v11 = 0;
  this->m_nextAntiLagHistory = v11;
  entityData = v10->entityData;
  v10->time = time;
  v10->hasFakeActors = 0;
  v10->entityDataStandard.m_usedSize = 0;
  v10->entityDataExtended.m_usedSize = 0;
  v10->characterList.m_usedSize = 0;
  v10->otherEntList.m_usedSize = 0;
  this->m_currFrameEntityCount = 0;
  this->m_currFrameNonCriticalEntCount = 0;
  do
  {
    *entityData++ = -1;
    *m_preArchiveNonCriticalList++ = 0;
    --v9;
  }
  while ( v9 );
  memset_0(this->m_preArchiveData, 0, sizeof(this->m_preArchiveData));
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCount > 0xC8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 953, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientMaxCount() ) <= ( ( sizeof( *array_counter( antiLagFrame->clientDataValid ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientMaxCount()", "ARRAY_COUNT( antiLagFrame->clientDataValid )", ComCharacterLimits::ms_gameData.m_clientCount, 200) )
      __debugbreak();
  }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v7 >= ComCharacterLimits::ms_gameData.m_clientCount )
      break;
    v14 = v7;
    if ( clientHasSnapshot )
    {
      v15 = clientHasSnapshot[v7++];
      v10->clientDataValid[v14] = v15;
    }
    else
    {
      ++v7;
      v10->clientDataValid[v14] = 1;
    }
  }
  this->MarkEntitiesForArchiving(this, v10);
  return v10;
}

/*
==============
BgAntiLag::UnpackClosestCharacters
==============
*/
__int64 BgAntiLag::UnpackClosestCharacters(BgAntiLag *this, const BgAntiLagEntity *entAntilag, int *outClosestCharacters)
{
  unsigned __int16 v5; 
  __int64 result; 
  unsigned __int16 v7; 
  int v8; 
  __int64 v9; 

  if ( !outClosestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1519, ASSERT_TYPE_ASSERT, "(outClosestCharacters)", (const char *)&queryFormat, "outClosestCharacters") )
    __debugbreak();
  v5 = entAntilag->closestCharacters[0];
  result = 0i64;
  v7 = entAntilag->closestCharacters[1];
  if ( v5 )
  {
    *outClosestCharacters = v5 - 1;
    result = 1i64;
  }
  if ( v7 )
  {
    v8 = v7;
    v9 = (unsigned int)result;
    result = (unsigned int)(result + 1);
    outClosestCharacters[v9] = v8 - 1;
  }
  return result;
}

/*
==============
BgAntiLag::ValidateAntiLagEntityQuery
==============
*/
void BgAntiLag::ValidateAntiLagEntityQuery(BgAntiLag *this, unsigned int contextFlags)
{
  if ( (contextFlags & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
}

/*
==============
BgAntiLag::ValidateAntiLagScene
==============
*/
void BgAntiLag::ValidateAntiLagScene(BgAntiLag *this, unsigned int contextFlags)
{
  char v2; 

  v2 = contextFlags;
  if ( (contextFlags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1127, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_BONE_POS))", "%s\n\tAntilag Scene does not support ANTILAG_CONTEXT_BONE_POS.", "!(contextFlags & ANTILAG_CONTEXT_BONE_POS)") )
    __debugbreak();
  if ( (v2 & 8) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1128, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_VELOCITY))", "%s\n\tAntilag Scene does not support ANTILAG_CONTEXT_VELOCITY.", "!(contextFlags & ANTILAG_CONTEXT_VELOCITY)") )
    __debugbreak();
}

/*
==============
BgAntiLag::ValidateRefCountZero
==============
*/
void BgAntiLag::ValidateRefCountZero(BgAntiLag *this, const char *debugId)
{
  if ( this->m_sceneAntiLagRefCount )
  {
    Com_Printf(0, "Antilag refcount error: On %s request.\n", debugId);
    BgAntiLag::PrintRefCountAssertInfo(this);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1402, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "m_sceneAntiLagRefCount == 0") )
      __debugbreak();
  }
}

