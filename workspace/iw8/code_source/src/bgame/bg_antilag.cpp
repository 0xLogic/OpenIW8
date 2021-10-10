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
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1463, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !closestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1464, ASSERT_TYPE_ASSERT, "(closestCharacters)", (const char *)&queryFormat, "closestCharacters") )
    __debugbreak();
  if ( !closestCharactersDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1465, ASSERT_TYPE_ASSERT, "(closestCharactersDistSq)", (const char *)&queryFormat, "closestCharactersDistSq") )
    __debugbreak();
  this->GetOriginForClosestCharacters(this, es->number, (vec3_t *)&v10);
  v9 = (float)((float)((float)(origin->v[1] - v11) * (float)(origin->v[1] - v11)) + (float)((float)(origin->v[0] - v10) * (float)(origin->v[0] - v10))) + (float)((float)(origin->v[2] - v12) * (float)(origin->v[2] - v12));
  if ( v9 >= *closestCharactersDistSq )
  {
    if ( v9 < closestCharactersDistSq[1] )
    {
      closestCharacters[1] = es->number;
      closestCharactersDistSq[1] = v9;
    }
  }
  else
  {
    closestCharacters[1] = *closestCharacters;
    closestCharactersDistSq[1] = *closestCharactersDistSq;
    *closestCharacters = es->number;
    *closestCharactersDistSq = v9;
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
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( this->m_lerpMoverCommandCount > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1753, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
    __debugbreak();
  if ( this->m_lerpMoverCommandBegin >= 0x64 )
  {
    LODWORD(v8) = this->m_lerpMoverCommandBegin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1754, ASSERT_TYPE_ASSERT, "(unsigned)( m_lerpMoverCommandBegin ) < (unsigned)( 100 )", "m_lerpMoverCommandBegin doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", v8, 100) )
      __debugbreak();
  }
  m_lerpMoverCommandCount = this->m_lerpMoverCommandCount;
  if ( m_lerpMoverCommandCount < 0x64 )
  {
    LerpMoverCommandIndex = BgAntiLag::GetLerpMoverCommandIndex(this, m_lerpMoverCommandCount);
    v6 = LerpMoverCommandIndex;
    if ( LerpMoverCommandIndex >= 0x64 )
    {
      LODWORD(v9) = 100;
      LODWORD(v8) = LerpMoverCommandIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1761, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( 100 )", "commandIndex doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    v7 = v6;
    *(__m256i *)&this->m_lerpMoverCommands[v7].userId = *(__m256i *)&cmd->userId;
    *(__m256i *)this->m_lerpMoverCommands[v7].startOrigin.v = *(__m256i *)cmd->startOrigin.v;
    *(__m256i *)&this->m_lerpMoverCommands[v7].endOrigin.y = *(__m256i *)&cmd->endOrigin.y;
    *(_OWORD *)&this->m_lerpMoverCommands[v7].radius = *(_OWORD *)&cmd->radius;
    this->m_lerpMoverCommands[v7].secondsDecel = cmd->secondsDecel;
    if ( ++this->m_lerpMoverCommandCount > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1765, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
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
  bool v17; 

  if ( *outNumInfoItems >= maxOutInfos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 804, ASSERT_TYPE_ASSERT, "(*outNumInfoItems < maxOutInfos)", (const char *)&queryFormat, "*outNumInfoItems < maxOutInfos") )
    __debugbreak();
  v15 = *outNumInfoItems;
  outData = &outInfoList[v15];
  *outNumInfoItems = v15 + 1;
  memset_0(outData, 0, sizeof(BgAntiLagEntityInfo));
  if ( (contextFlags & 8) == 0 && timePastEndFrame || (v17 = BgAntiLag::BlendEntity(this, startFrame, endFrame, velHintFrame, progress, entIndex, contextFlags, outData), timePastEndFrame) || !v17 )
  {
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
  int v5; 
  BgAntiLagFrameHistory *CurrentHistoryFrame; 
  BgAntiLagRewindScene *m_rewindScene; 
  unsigned int v11; 
  BgAntiLagRewindScene *v12; 
  BgAntiLagFrameHistory *v13; 
  BgAntiLagFrameHistory *v14; 
  int m_usedSize; 
  int v17; 
  int v18; 
  int v19; 
  AntiLagVector<unsigned int,248> *p_characterList; 
  unsigned int v21; 
  const BgAntiLagEntityHistory *EntityDataFromIndex; 
  unsigned int v23; 
  int v24; 
  AntiLagVector<unsigned int,2048> *p_otherEntList; 
  int *v26; 
  unsigned int v27; 
  const BgAntiLagEntityHistory *v28; 
  int v29; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *outEndFrame; 
  BgAntiLagFrameHistory *frame; 

  v5 = gameTime;
  if ( gameTime <= 0 )
    return 0;
  CurrentHistoryFrame = BgAntiLag::GetCurrentHistoryFrame(this);
  if ( !CurrentHistoryFrame )
    return 0;
  if ( CurrentHistoryFrame->time <= v5 )
    return 0;
  m_rewindScene = this->m_rewindScene;
  v11 = 0;
  outStartFrame = NULL;
  m_rewindScene->entityBackup.m_usedSize = 0;
  v12 = this->m_rewindScene;
  *(float *)&gameTime = 0.0;
  outEndFrame = NULL;
  v12->contextFlags = contextFlags;
  this->m_rewindScene->inUse = 1;
  if ( !BgAntiLag::GetFrameInfoAtTime(this, clientIndex, v5, &outStartFrame, &outEndFrame, (float *)&gameTime) )
    return 0;
  v13 = outStartFrame;
  v14 = outEndFrame;
  if ( (!outStartFrame || !outEndFrame) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1190, ASSERT_TYPE_ASSERT, "(startFrame && endFrame)", (const char *)&queryFormat, "startFrame && endFrame") )
    __debugbreak();
  if ( v5 > v14->time )
  {
    if ( v13 != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1198, ASSERT_TYPE_ASSERT, "(startFrame == endFrame)", (const char *)&queryFormat, "startFrame == endFrame") )
      __debugbreak();
    return 0;
  }
  frame = BgAntiLag::GetCurrentHistoryFrame(this);
  v29 = frame->time - v13->time;
  if ( (contextFlags & 0x10) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "Antilag Characters");
    m_usedSize = v13->characterList.m_usedSize;
    v17 = 0;
    v13 = outStartFrame;
    v14 = outEndFrame;
    v18 = gameTime;
    if ( m_usedSize > 0 )
    {
      v19 = m_usedSize;
      p_characterList = &outStartFrame->characterList;
      do
      {
        v21 = *AntiLagVector<unsigned int,248>::operator[](p_characterList, v17);
        if ( ignoreEntIndex != v21 )
        {
          EntityDataFromIndex = BgAntiLag::GetEntityDataFromIndex(this, frame, v21);
          if ( !EntityDataFromIndex || v29 >= EntityDataFromIndex->timeSinceChange )
            ((void (__fastcall *)(BgAntiLag *, _QWORD, _QWORD, _QWORD, BgAntiLagFrameHistory *, BgAntiLagFrameHistory *, int))this->AntiLagSceneEnt)(this, v21, (unsigned int)v5, contextFlags, v13, v14, v18);
        }
        ++v17;
        p_characterList = &v13->characterList;
      }
      while ( v17 < v19 );
      v11 = 0;
    }
    Sys_ProfEndNamedEvent();
  }
  if ( (contextFlags & 0x20) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "Antilag Movers");
    v23 = v13->otherEntList.m_usedSize;
    v13 = outStartFrame;
    v14 = outEndFrame;
    v24 = gameTime;
    if ( v23 )
    {
      p_otherEntList = &outStartFrame->otherEntList;
      do
      {
        v26 = (int *)AntiLagVector<unsigned int,2048>::operator[](p_otherEntList, v11);
        v27 = *v26;
        v28 = BgAntiLag::GetEntityDataFromIndex(this, frame, *v26);
        if ( !v28 || ((contextFlags & 0x100) == 0 || (v28->flags & 1) != 0) && (unsigned int)(v28->entType - 3) > 1 && v29 >= v28->timeSinceChange )
          ((void (__fastcall *)(BgAntiLag *, _QWORD, _QWORD, _QWORD, BgAntiLagFrameHistory *, BgAntiLagFrameHistory *, int))this->AntiLagSceneEnt)(this, v27, (unsigned int)v5, contextFlags, v13, v14, v24);
        ++v11;
        p_otherEntList = &v13->otherEntList;
      }
      while ( v11 < v23 );
    }
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Antilag Pose");
  ((void (__fastcall *)(BgAntiLag *, BgAntiLagFrameHistory *, BgAntiLagFrameHistory *))this->AntiLagSceneHandlePoseRewind)(this, v13, v14);
  Sys_ProfEndNamedEvent();
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
char BgAntiLag::BlendEntity(BgAntiLag *this, const BgAntiLagFrameHistory *startFrame, const BgAntiLagFrameHistory *endFrame, const BgAntiLagFrameHistory *velocityHintFrame, float progress, int entIndex, unsigned int contextFlags, BgAntiLagEntityInfo *outData)
{
  BgAntiLagEntityInfo *v11; 
  BgAntiLagEntityHistory *EntityDataFromIndex; 
  const BgAntiLagEntityHistory *v13; 
  __int64 v14; 
  BgAntiLagEntityHistoryExtended *v15; 
  BgAntiLagEntityHistoryExtended *v16; 
  int extDataHandle; 
  char v18; 
  const vec3_t *p_angles; 
  unsigned int v24; 
  unsigned int v25; 
  BgAntiLagBoneInfo *p_boneInfo; 
  AntiLagVector<BgAntiLagBone,3> *v27; 
  const BgAntiLagBone *v28; 
  BgAntiLagBone *v29; 
  const BgAntiLagBone *v30; 
  const BgAntiLagBone *v31; 
  int v32; 
  const BgAntiLagBone *v33; 
  unsigned int v34; 
  float *v36; 
  BgAntiLagEntity *v37; 
  char *v38; 
  char *v39; 
  float v41; 
  unsigned __int8 *p_flags; 
  unsigned int v44; 
  unsigned int i; 
  const BgAntiLagBone *v46; 
  unsigned int v47; 
  float *doorAngle; 
  signed __int64 v49; 
  unsigned __int8 v50; 
  char v51; 
  const BgAntiLagFrameHistory *v52; 
  float v53; 
  int v54; 
  int v55; 
  BgAntiLagFrameHistory *v56; 
  const BgAntiLagEntityHistory *v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  __int64 v67; 
  vec3_t origin; 
  unsigned int m_usedSize; 
  int v70; 
  vec3_t v71; 
  vec3_t outOrigin; 
  vec3_t v73; 
  vec3_t v74; 
  vec3_t v75; 
  vec3_t v76; 
  AntiLagVector<BgAntiLagBone,3> *p_boneList; 
  const BgAntiLagEntityHistory *v78; 
  BgAntiLagEntity *antilagEntity; 
  const BgAntiLagFrameHistory *v80; 
  int v81[3]; 
  BgAntiLagEntityInfo *v82; 
  const BgAntiLagFrameHistory *v83; 
  BgAntiLagFrameHistory *frame; 
  BgAntiLag *v85; 
  vec3_t v86; 
  __int64 v87; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 

  v87 = -2i64;
  frame = (BgAntiLagFrameHistory *)velocityHintFrame;
  v80 = endFrame;
  v83 = startFrame;
  v85 = this;
  v70 = entIndex;
  v11 = outData;
  v82 = outData;
  if ( !startFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 447, ASSERT_TYPE_ASSERT, "(startFrame)", (const char *)&queryFormat, "startFrame") )
    __debugbreak();
  if ( !endFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 448, ASSERT_TYPE_ASSERT, "(endFrame)", (const char *)&queryFormat, "endFrame") )
    __debugbreak();
  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 449, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  memset_0(outData, 0, sizeof(BgAntiLagEntityInfo));
  if ( (unsigned int)entIndex >= 0x800 )
  {
    LODWORD(v67) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 454, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v67, 2048) )
      __debugbreak();
  }
  EntityDataFromIndex = (BgAntiLagEntityHistory *)BgAntiLag::GetEntityDataFromIndex(this, startFrame, entIndex);
  antilagEntity = EntityDataFromIndex;
  v13 = BgAntiLag::GetEntityDataFromIndex(this, endFrame, entIndex);
  v14 = (__int64)v13;
  v78 = v13;
  if ( !EntityDataFromIndex || !v13 )
    return 0;
  v15 = NULL;
  v16 = NULL;
  p_boneList = NULL;
  extDataHandle = EntityDataFromIndex->extDataHandle;
  if ( extDataHandle != -1 && v13->extDataHandle != -1 )
  {
    v15 = (BgAntiLagEntityHistoryExtended *)AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](&startFrame->entityDataExtended, extDataHandle);
    v16 = (BgAntiLagEntityHistoryExtended *)AntiLagVector<BgAntiLagEntityHistoryExtended,200>::operator[](&v80->entityDataExtended, *(_DWORD *)(v14 + 56));
    p_boneList = &v16->boneInfo.boneList;
  }
  v18 = contextFlags;
  if ( progress != 0.0 )
  {
    if ( progress != 1.0 )
    {
      if ( (contextFlags & 0xD) != 0 )
      {
        BgAntiLagEntity_GetOrigin(EntityDataFromIndex, &outOrigin);
        BgAntiLagEntity_GetOrigin((const BgAntiLagEntity *)v14, &v71);
        origin.v[0] = (float)((float)(v71.v[0] - outOrigin.v[0]) * progress) + outOrigin.v[0];
        origin.v[1] = (float)((float)(v71.v[1] - outOrigin.v[1]) * progress) + outOrigin.v[1];
        origin.v[2] = (float)((float)(v71.v[2] - outOrigin.v[2]) * progress) + outOrigin.v[2];
        BgAntiLagEntity_SetOrigin(outData, &origin);
        memset(&origin, 0, sizeof(origin));
        memset(&v71, 0, sizeof(v71));
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      if ( (contextFlags & 0xA) != 0 )
      {
        p_angles = &EntityDataFromIndex->angles;
        if ( EntityDataFromIndex->angles.v[2] == 0.0 && *(float *)(v14 + 20) == 0.0 )
        {
          _XMM6 = 0i64;
          __asm { vroundss xmm0, xmm6, xmm2, 1 }
          outData->angles.v[0] = (float)((float)((float)((float)((float)(*(float *)(v14 + 12) - p_angles->v[0]) * 0.0027777778) - *(float *)&_XMM0) * 360.0) * progress) + p_angles->v[0];
          __asm { vroundss xmm3, xmm6, xmm2, 1 }
          outData->angles.v[1] = (float)((float)((float)((float)((float)(*(float *)(v14 + 16) - EntityDataFromIndex->angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + EntityDataFromIndex->angles.v[1];
          __asm { vroundss xmm3, xmm6, xmm2, 1 }
          outData->angles.v[2] = (float)((float)((float)((float)((float)(*(float *)(v14 + 20) - EntityDataFromIndex->angles.v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + EntityDataFromIndex->angles.v[2];
        }
        else
        {
          AnglesToQuat(p_angles, &quat);
          AnglesToQuat((const vec3_t *)(v14 + 12), &to);
          QuatSlerp(&quat, &to, progress, &result);
          UnitQuatToAngles(&result, &outData->angles);
        }
      }
      outData->entityIndex = *(_WORD *)(v14 + 26);
      outData->flags = *(_BYTE *)(v14 + 24);
      if ( v15 )
      {
        if ( v16 )
        {
          if ( (contextFlags & 4) != 0 )
          {
            m_usedSize = v16->boneInfo.boneList.m_usedSize;
            v24 = v15->boneInfo.boneList.m_usedSize;
            v25 = 0;
            if ( m_usedSize )
            {
              p_boneInfo = &outData->boneInfo;
              *(_QWORD *)origin.v = &outData->boneInfo;
              v27 = p_boneList;
              do
              {
                v28 = AntiLagVector<BgAntiLagBone,3>::operator[](v27, v25);
                v29 = AntiLagVector<BgAntiLagBone,3>::push_back(&p_boneInfo->boneList, v28);
                if ( v27 != (AntiLagVector<BgAntiLagBone,3> *)v15 )
                {
                  v30 = AntiLagVector<BgAntiLagBone,3>::operator[](v27, v25);
                  if ( v25 < v24 && AntiLagVector<BgAntiLagBone,3>::operator[](&v15->boneInfo.boneList, v25)->boneId == v30->boneId )
                  {
                    v31 = AntiLagVector<BgAntiLagBone,3>::operator[](&v15->boneInfo.boneList, v25);
                    if ( v31->dataValid && v30->dataValid )
                    {
                      v29->origin.v[0] = (float)((float)(v30->origin.v[0] - v31->origin.v[0]) * progress) + v31->origin.v[0];
                      v29->origin.v[1] = (float)((float)(v30->origin.v[1] - v31->origin.v[1]) * progress) + v31->origin.v[1];
                      v29->origin.v[2] = (float)((float)(v30->origin.v[2] - v31->origin.v[2]) * progress) + v31->origin.v[2];
                    }
                  }
                  else
                  {
                    v32 = 0;
                    if ( v24 )
                    {
                      while ( 1 )
                      {
                        v33 = AntiLagVector<BgAntiLagBone,3>::operator[](&v15->boneInfo.boneList, v32);
                        if ( v33->boneId == v30->boneId )
                          break;
                        if ( ++v32 >= v24 )
                          goto LABEL_45;
                      }
                      if ( v33->dataValid && v30->dataValid )
                      {
                        v29->origin.v[0] = (float)((float)(v30->origin.v[0] - v33->origin.v[0]) * progress) + v33->origin.v[0];
                        v29->origin.v[1] = (float)((float)(v30->origin.v[1] - v33->origin.v[1]) * progress) + v33->origin.v[1];
                        v29->origin.v[2] = (float)((float)(v30->origin.v[2] - v33->origin.v[2]) * progress) + v33->origin.v[2];
                      }
                    }
LABEL_45:
                    p_boneInfo = *(BgAntiLagBoneInfo **)origin.v;
                  }
                }
                ++v25;
              }
              while ( v25 < m_usedSize );
              v11 = v82;
              v14 = (__int64)v78;
            }
          }
        }
      }
      v34 = 0;
      _XMM6 = 0i64;
      v36 = (float *)(v14 + 28);
      v37 = antilagEntity;
      v38 = (char *)antilagEntity - v14;
      v39 = (char *)v11 - v14;
      do
      {
        __asm { vroundss xmm3, xmm6, xmm2, 1 }
        v41 = (float)((float)((float)((float)(*v36 - *(float *)((char *)v36 + (_QWORD)v38)) * 0.0027777778) - *(float *)&_XMM3) * 1.0) * progress;
        __asm { vroundss xmm3, xmm6, xmm1, 1 }
        *(float *)((char *)v36 + (_QWORD)v39) = (float)((float)(v41 + (float)(0.0027777778 * *(float *)((char *)v36 + (_QWORD)v38))) - *(float *)&_XMM3) * 360.0;
        *(float *)((char *)v36 + (_QWORD)v39 + 8) = *(float *)((char *)v36 + (_QWORD)v38 + 8);
        if ( BgAntiLagEntity_GetDoorOwner(v37, v34) )
          BgAntiLagEntity_SetDoorOwner(v11, v34);
        ++v34;
        ++v36;
      }
      while ( v34 < 2 );
      goto LABEL_73;
    }
    EntityDataFromIndex = (BgAntiLagEntityHistory *)v14;
  }
  if ( (contextFlags & 0xD) != 0 )
  {
    BgAntiLagEntity_GetOrigin(EntityDataFromIndex, &v86);
    BgAntiLagEntity_SetOrigin(outData, &v86);
    memset(&v86, 0, sizeof(v86));
    v18 = contextFlags;
  }
  if ( (contextFlags & 0xA) != 0 )
    outData->angles = EntityDataFromIndex->angles;
  outData->entityIndex = *(_WORD *)(v14 + 26);
  p_flags = &EntityDataFromIndex->flags;
  outData->flags = EntityDataFromIndex->flags;
  if ( v15 && v16 && (v18 & 4) != 0 )
  {
    if ( progress != 0.0 )
      v15 = v16;
    v44 = v15->boneInfo.boneList.m_usedSize;
    for ( i = 0; i < v44; ++i )
    {
      v46 = AntiLagVector<BgAntiLagBone,3>::operator[](&v15->boneInfo.boneList, i);
      AntiLagVector<BgAntiLagBone,3>::push_back(&outData->boneInfo.boneList, v46);
    }
  }
  v47 = 0;
  doorAngle = outData->doorAngle;
  v49 = (char *)EntityDataFromIndex - (char *)outData;
  do
  {
    *doorAngle = *(float *)((char *)doorAngle + v49);
    doorAngle[2] = *(float *)((char *)doorAngle + v49 + 8);
    v50 = *p_flags;
    if ( v47 )
      v51 = v50 >> 6;
    else
      v51 = v50 >> 5;
    if ( (v51 & 1) != 0 )
      BgAntiLagEntity_SetDoorOwner(outData, v47);
    ++v47;
    ++doorAngle;
  }
  while ( v47 < 2 );
  v14 = (__int64)v78;
  v37 = antilagEntity;
LABEL_73:
  if ( (contextFlags & 8) != 0 )
  {
    v52 = v83;
    v53 = (float)(v80->time - v83->time) * 0.001;
    if ( v53 <= 0.0 )
    {
      *(_QWORD *)v11->velocity.v = 0i64;
      *(_QWORD *)&v11->velocity.z = 0i64;
      *(_QWORD *)&v11->angVelocity.y = 0i64;
    }
    else
    {
      BgAntiLagEntity_GetOrigin(v37, &v74);
      BgAntiLagEntity_GetOrigin((const BgAntiLagEntity *)v14, &v73);
      v11->velocity.v[0] = (float)(v73.v[0] - v74.v[0]) * (float)(1.0 / v53);
      v11->velocity.v[1] = (float)(v73.v[1] - v74.v[1]) * (float)(1.0 / v53);
      v11->velocity.v[2] = (float)(v73.v[2] - v74.v[2]) * (float)(1.0 / v53);
      *(float *)v81 = *(float *)(v14 + 12) - v37->angles.v[0];
      *(float *)&v81[1] = *(float *)(v14 + 16) - v37->angles.v[1];
      v54 = v81[1];
      *(float *)&v81[2] = *(float *)(v14 + 20) - v37->angles.v[2];
      v55 = v81[2];
      v11->angVelocity.v[0] = *(float *)v81 * (float)(1.0 / v53);
      v11->angVelocity.v[1] = *(float *)&v54 * (float)(1.0 / v53);
      v11->angVelocity.v[2] = *(float *)&v55 * (float)(1.0 / v53);
      memset(&v73, 0, sizeof(v73));
      memset(&v74, 0, sizeof(v74));
    }
    v56 = frame;
    if ( frame )
    {
      v57 = BgAntiLag::GetEntityDataFromIndex(v85, frame, v70);
      if ( v57 )
      {
        v58 = (float)(v52->time - v56->time) * 0.001;
        if ( v58 > 0.0 )
        {
          BgAntiLagEntity_GetOrigin(v37, &v76);
          BgAntiLagEntity_GetOrigin(v57, &v75);
          v59 = 1.0 / v58;
          v60 = (float)(v76.v[0] - v75.v[0]) * (float)(1.0 / v58);
          v61 = (float)(v76.v[1] - v75.v[1]) * (float)(1.0 / v58);
          v62 = (float)(v76.v[2] - v75.v[2]) * (float)(1.0 / v58);
          if ( v37 == (BgAntiLagEntity *)v14 )
          {
            v11->velocity.v[0] = v60;
            v11->velocity.v[1] = v61;
            v11->velocity.v[2] = v62;
          }
          else
          {
            v11->velocity.v[0] = (float)((float)(v11->velocity.v[0] - v60) * progress) + v60;
            v11->velocity.v[1] = (float)((float)(v11->velocity.v[1] - v61) * progress) + v61;
            v11->velocity.v[2] = (float)((float)(v11->velocity.v[2] - v62) * progress) + v62;
          }
          v63 = (float)(v37->angles.v[0] - v57->angles.v[0]) * v59;
          v64 = (float)(v37->angles.v[1] - v57->angles.v[1]) * v59;
          v65 = (float)(v37->angles.v[2] - v57->angles.v[2]) * v59;
          if ( v37 == (BgAntiLagEntity *)v14 )
          {
            v11->angVelocity.v[0] = v63;
            v11->angVelocity.v[1] = v64;
            v11->angVelocity.v[2] = v65;
          }
          else
          {
            v11->angVelocity.v[0] = (float)((float)(v11->angVelocity.v[0] - v63) * progress) + v63;
            v11->angVelocity.v[1] = (float)((float)(v11->angVelocity.v[1] - v64) * progress) + v64;
            v11->angVelocity.v[2] = (float)((float)(v11->angVelocity.v[2] - v65) * progress) + v65;
          }
          memset(&v75, 0, sizeof(v75));
          memset(&v76, 0, sizeof(v76));
        }
      }
    }
    memset(v81, 0, sizeof(v81));
  }
  return 1;
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
_BOOL8 BgAntiLag::CompareFrames(BgAntiLag *this, const BgAntiLagFrameHistory *prevFrame, const BgAntiLagFrameHistory *nextFrame, const BgAntiLagEntityHistory *prevHistory, const BgAntiLagEntityHistory *nextHistory)
{
  bool v6; 
  vec3_t v8; 
  vec3_t outOrigin; 

  BgAntiLagEntity_GetOrigin(prevHistory, &outOrigin);
  BgAntiLagEntity_GetOrigin(nextHistory, &v8);
  v6 = outOrigin.v[0] == v8.v[0] && outOrigin.v[1] == v8.v[1] && outOrigin.v[2] == v8.v[2] && nextHistory->angles.v[0] == prevHistory->angles.v[0] && nextHistory->angles.v[1] == prevHistory->angles.v[1] && nextHistory->angles.v[2] == prevHistory->angles.v[2] && prevHistory->flags == nextHistory->flags && prevHistory->extDataHandle == nextHistory->extDataHandle;
  memset(&v8, 0, sizeof(v8));
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v6;
}

/*
==============
BgAntiLag::CopyPosition
==============
*/
void BgAntiLag::CopyPosition(BgAntiLag *this, const int entIndex, const vec3_t *srcPosition, const vec3_t *srcAngles, vec3_t *destPosition, vec3_t *destAngles)
{
  __int64 v9; 

  if ( ((LODWORD(srcPosition->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(srcPosition->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(srcPosition->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1310, ASSERT_TYPE_ASSERT, "(!IS_NAN(srcPosition[0]) && !IS_NAN(srcPosition[1]) && !IS_NAN(srcPosition[2]))", "%s\n\tent %i's origin is invalid - (%f, %f, %f)", "!IS_NAN(srcPosition[0]) && !IS_NAN(srcPosition[1]) && !IS_NAN(srcPosition[2])", entIndex, srcPosition->v[0], srcPosition->v[1], srcPosition->v[2]) )
    __debugbreak();
  if ( (LODWORD(srcAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(srcAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(srcAngles->v[2]) & 0x7F800000) == 2139095040 )
  {
    LODWORD(v9) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1311, ASSERT_TYPE_ASSERT, "(!IS_NAN(srcAngles[0]) && !IS_NAN(srcAngles[1]) && !IS_NAN(srcAngles[2]))", "%s\n\tent %i's angles are invalid - (%f, %f, %f)", "!IS_NAN(srcAngles[0]) && !IS_NAN(srcAngles[1]) && !IS_NAN(srcAngles[2])", v9, srcAngles->v[0], srcAngles->v[1], srcAngles->v[2]) )
      __debugbreak();
  }
  *destPosition = *srcPosition;
  *destAngles = *srcAngles;
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
  __int64 v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  vec3_t v19; 
  vec3_t outOrigin; 

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
        LODWORD(v18) = v9->boneInfo.boneList.m_usedSize;
        LODWORD(v17) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      this->ProcessBone(this, (BgAntiLagBone *)((char *)v9 + 20 * (int)i), es);
    }
  }
  flags = this->m_preArchiveData[es->number].flags;
  if ( (flags & 2) != 0 )
    entHistory->flags |= 1u;
  if ( (flags & 8) != 0 )
  {
    entHistory->flags |= 8u;
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
        v15 = (__int64)*AntiLagVector<BgAntiLagEntityHistory *,600>::operator[](&m_prevFrame->entityDataStandard, v14);
        BgAntiLagEntity_GetOrigin((const BgAntiLagEntity *)v15, &outOrigin);
        BgAntiLagEntity_GetOrigin(entHistory, &v19);
        if ( outOrigin.v[0] == v19.v[0] && outOrigin.v[1] == v19.v[1] && outOrigin.v[2] == v19.v[2] && entHistory->angles.v[0] == *(float *)(v15 + 12) && entHistory->angles.v[1] == *(float *)(v15 + 16) && entHistory->angles.v[2] == *(float *)(v15 + 20) && *(_BYTE *)(v15 + 24) == entHistory->flags && *(_DWORD *)(v15 + 56) == entHistory->extDataHandle )
        {
          memset(&v19, 0, sizeof(v19));
          memset(&outOrigin, 0, sizeof(outOrigin));
          v16 = antiLagFrame->time + *(unsigned __int16 *)(v15 + 52) - this->m_prevFrame->time;
          if ( (unsigned int)(v16 - 1) > 0xFFFD )
            entHistory->timeSinceChange = -1;
          else
            entHistory->timeSinceChange = truncate_cast<unsigned short,int>(v16);
        }
        else
        {
          memset(&v19, 0, sizeof(v19));
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
  float v6; 

  if ( BGVehicles::IsRemoteDrivingVehicle(ps) )
  {
    *outIgnoreEntIndex = ps->vehicleState.entity;
    outOrigin->v[0] = ps->vehicleState.origin.v[0];
    outOrigin->v[1] = ps->vehicleState.origin.v[1];
    v6 = ps->vehicleState.origin.v[2];
  }
  else
  {
    *outIgnoreEntIndex = ps->clientNum;
    outOrigin->v[0] = ps->origin.v[0];
    outOrigin->v[1] = ps->origin.v[1];
    v6 = ps->origin.v[2];
  }
  outOrigin->v[2] = v6;
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
  unsigned int *v11; 
  __int64 v12; 
  BgAntiLagFrameHistory *endFrame; 
  BgAntiLagFrameHistory *startFrame; 
  bool timePastEndFrame; 
  const BgAntiLagEntityHistory *EntityDataFromIndex; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  unsigned int v20; 
  float v21; 
  float *outProgress; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *velHintFrame[3]; 
  float v28; 
  int v29; 

  v29 = gameTime;
  velHintFrame[1] = (BgAntiLagFrameHistory *)-2i64;
  v11 = outNumInfoItems;
  if ( !outNumInfoItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1543, ASSERT_TYPE_ASSERT, "(outNumInfoItems)", (const char *)&queryFormat, "outNumInfoItems") )
    __debugbreak();
  if ( !outInfoList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1544, ASSERT_TYPE_ASSERT, "(outInfoList)", (const char *)&queryFormat, "outInfoList") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "BgAntiLag::GetClosestCharacters");
  v12 = 0i64;
  *v11 = 0;
  outStartFrame = NULL;
  outNumInfoItems = NULL;
  velHintFrame[0] = NULL;
  v28 = 0.0;
  if ( (contextFlags & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
  if ( !BgAntiLag::GetFrameInfoAtTime(this, clientNum, gameTime, &outStartFrame, (BgAntiLagFrameHistory **)&outNumInfoItems, &v28) )
    goto LABEL_28;
  endFrame = (BgAntiLagFrameHistory *)outNumInfoItems;
  startFrame = outStartFrame;
  if ( (!outStartFrame || !outNumInfoItems) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 730, ASSERT_TYPE_ASSERT, "(*outStartFrame && *outEndFrame)", (const char *)&queryFormat, "*outStartFrame && *outEndFrame") )
    __debugbreak();
  if ( (contextFlags & 8) != 0 )
  {
    outStartFrame = NULL;
    *(float *)&outNumInfoItems = 0.0;
    BgAntiLag::GetFrameInfoAtTime(this, clientNum, startFrame->time - 1, velHintFrame, &outStartFrame, (float *)&outNumInfoItems);
  }
  timePastEndFrame = v29 > endFrame->time;
  EntityDataFromIndex = BgAntiLag::GetEntityDataFromIndex(this, startFrame, clientNum);
  if ( EntityDataFromIndex )
  {
    v17 = EntityDataFromIndex->closestCharacters[0];
    v18 = EntityDataFromIndex->closestCharacters[1];
    v19 = 0i64;
    if ( v17 )
    {
      LODWORD(outNumInfoItems) = v17 - 1;
      v19 = 1i64;
    }
    if ( v18 )
    {
      *((_DWORD *)&outNumInfoItems + v19) = v18 - 1;
      v19 = (unsigned int)(v19 + 1);
    }
    if ( (unsigned int)v19 > 2 )
    {
      LODWORD(outProgress) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1574, ASSERT_TYPE_ASSERT, "( numClosestCharacters ) <= ( 2 )", "numClosestCharacters not in [0, NUM_ANTILAG_CLOSEST_CHARACTERS]\n\t%u not in [0, %u]", outProgress, 2) )
        __debugbreak();
    }
    if ( v19 )
    {
      v20 = maxOutInfos;
      v21 = v28;
      do
        BgAntiLag::AddListAtTimeInfo(this, clientNum, *((_DWORD *)&outNumInfoItems + v12++), contextFlags, v20, v11, outInfoList, startFrame, endFrame, velHintFrame[0], timePastEndFrame, v21);
      while ( v12 < v19 );
    }
LABEL_28:
    LOBYTE(v12) = 1;
  }
  Sys_ProfEndNamedEvent();
  return (unsigned __int8)v12;
}

/*
==============
BgAntiLag::GetClosestLerpMovers
==============
*/
void BgAntiLag::GetClosestLerpMovers(BgAntiLag *this, const unsigned int time, const vec3_t *origin, const float radius, const float height, BgAntiLagLerpMoversClosest *out_movers)
{
  __int128 v6; 
  __int128 v7; 
  bool v8; 
  BgAntiLagLerpMoversClosest *v10; 
  unsigned int v13; 
  char v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int LerpMoverCommandIndex; 
  __int64 v18; 
  __int64 v19; 
  unsigned int userId; 
  unsigned int startTime; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  int *v29; 
  vec3_t *out_result; 
  __int64 v31; 
  __int64 v32; 
  __int64 fAccelTimeSec; 
  __int64 fDecelTimeSec; 
  int v35[4]; 
  __int128 v36; 
  __int128 v37; 

  v8 = this->m_lerpMoverCommandCount <= 0x64;
  v10 = out_movers;
  v36 = v7;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1641, ASSERT_TYPE_ASSERT, "(m_lerpMoverCommandCount <= 100)", (const char *)&queryFormat, "m_lerpMoverCommandCount <= MAX_ANTILAG_LERP_MOVER_COMMANDS") )
    __debugbreak();
  if ( this->m_lerpMoverCommandBegin >= 0x64 )
  {
    LODWORD(fAccelTimeSec) = this->m_lerpMoverCommandBegin;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1642, ASSERT_TYPE_ASSERT, "(unsigned)( m_lerpMoverCommandBegin ) < (unsigned)( 100 )", "m_lerpMoverCommandBegin doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", fAccelTimeSec, 100) )
      __debugbreak();
  }
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( this->m_lerpMoverCommandCount )
  {
    v37 = v6;
    do
    {
      LerpMoverCommandIndex = BgAntiLag::GetLerpMoverCommandIndex(this, v15);
      v18 = LerpMoverCommandIndex;
      if ( LerpMoverCommandIndex >= 0x64 )
      {
        LODWORD(fDecelTimeSec) = 100;
        LODWORD(fAccelTimeSec) = LerpMoverCommandIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1656, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( ( sizeof( *array_counter( m_lerpMoverCommands ) ) + 0 ) )", "commandIndex doesn't index m_lerpMoverCommands\n\t%i not in [0, %i)", fAccelTimeSec, fDecelTimeSec) )
          __debugbreak();
      }
      v19 = v18;
      userId = this->m_lerpMoverCommands[v18].userId;
      startTime = this->m_lerpMoverCommands[v18].startTime;
      if ( userId > 0x7A120 )
        v14 = 1;
      if ( time > startTime && time <= this->m_lerpMoverCommands[v19].endTime )
      {
        v22 = origin->v[2];
        v23 = this->m_lerpMoverCommands[v19].origin.v[2];
        if ( v23 <= (float)(v22 + height) && (float)(v23 + this->m_lerpMoverCommands[v19].height) >= v22 )
        {
          v24 = this->m_lerpMoverCommands[v19].origin.v[0] - origin->v[0];
          v25 = this->m_lerpMoverCommands[v19].origin.v[1] - origin->v[1];
          if ( (float)((float)(radius + this->m_lerpMoverCommands[v19].radius) * (float)(radius + this->m_lerpMoverCommands[v19].radius)) > (float)((float)(v25 * v25) + (float)(v24 * v24)) )
          {
            v26 = 0;
            if ( v16 )
            {
              while ( 1 )
              {
                v27 = (unsigned int)v35[v26];
                if ( this->m_lerpMoverCommands[v27].userId == userId )
                  break;
                if ( ++v26 >= v16 )
                  goto LABEL_22;
              }
              if ( this->m_lerpMoverCommands[v27].startTime < startTime )
                v35[v26] = v15;
            }
            else
            {
LABEL_22:
              if ( v16 < 3 )
              {
                v28 = v16++;
                v35[v28] = v18;
              }
            }
          }
        }
      }
      ++v15;
    }
    while ( v15 < this->m_lerpMoverCommandCount );
    v10 = out_movers;
  }
  v10->profileCount = 0;
  if ( v14 )
    v10->profileCount = this->m_lerpMoverCommandCount;
  v10->stateCount = v16;
  if ( v16 )
  {
    v29 = v35;
    out_result = &v10->states[0].angles;
    do
    {
      if ( v13 >= 3 )
      {
        LODWORD(fDecelTimeSec) = 3;
        LODWORD(fAccelTimeSec) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1715, ASSERT_TYPE_ASSERT, "(unsigned)( pendingCommandNum ) < (unsigned)( 3 )", "pendingCommandNum doesn't index MAX_ANTILAG_LERP_MOVER_STATES\n\t%i not in [0, %i)", fAccelTimeSec, fDecelTimeSec) )
          __debugbreak();
      }
      v31 = (unsigned int)*v29;
      if ( (unsigned int)v31 >= 0x64 )
      {
        LODWORD(fDecelTimeSec) = 100;
        LODWORD(fAccelTimeSec) = *v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1717, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( 100 )", "commandIndex doesn't index MAX_ANTILAG_LERP_MOVER_COMMANDS\n\t%i not in [0, %i)", fAccelTimeSec, fDecelTimeSec) )
          __debugbreak();
      }
      v32 = v31;
      ScriptableBg_LerpVector(&this->m_lerpMoverCommands[v32].startOrigin, &this->m_lerpMoverCommands[v32].endOrigin, this->m_lerpMoverCommands[v32].startTime, time, this->m_lerpMoverCommands[v32].seconds, this->m_lerpMoverCommands[v32].secondsAccel, this->m_lerpMoverCommands[v32].secondsDecel, out_result - 1);
      ScriptableBg_LerpVector(&this->m_lerpMoverCommands[v32].startAngles, &this->m_lerpMoverCommands[v32].endAngles, this->m_lerpMoverCommands[v32].startTime, time, this->m_lerpMoverCommands[v32].seconds, this->m_lerpMoverCommands[v32].secondsAccel, this->m_lerpMoverCommands[v32].secondsDecel, out_result);
      ++v13;
      *(_QWORD *)&out_result[1].y = &this->m_lerpMoverCommands[v32].bounds;
      ++v29;
      out_result = (vec3_t *)((char *)out_result + 40);
    }
    while ( v13 < v16 );
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
  BgAntiLagFrameHistory *v10; 
  BgAntiLagFrameHistory *v11; 
  const BgAntiLagFrameHistory *v12; 
  int v13; 
  bool v14; 
  int v15; 
  bool v16; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *v19; 
  float outProgress; 

  outData = outInfo;
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 768, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  memset_0(outData, 0, sizeof(BgAntiLagEntityInfo));
  v10 = NULL;
  outStartFrame = NULL;
  outInfo = NULL;
  v19 = NULL;
  outProgress = 0.0;
  if ( (contextFlags & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
  if ( !BgAntiLag::GetFrameInfoAtTime(this, clientNum, time, &outStartFrame, (BgAntiLagFrameHistory **)&outInfo, &outProgress) )
    goto LABEL_19;
  v11 = outStartFrame;
  v12 = (const BgAntiLagFrameHistory *)outInfo;
  if ( (!outStartFrame || !outInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 730, ASSERT_TYPE_ASSERT, "(*outStartFrame && *outEndFrame)", (const char *)&queryFormat, "*outStartFrame && *outEndFrame") )
    __debugbreak();
  if ( (contextFlags & 8) != 0 )
  {
    v13 = v11->time;
    outStartFrame = NULL;
    BgAntiLag::GetFrameInfoAtTime(this, clientNum, v13 - 1, &v19, &outStartFrame, (float *)&outInfo);
    v10 = v19;
  }
  v14 = time > v12->time;
  if ( (contextFlags & 8) != 0 || time <= v12->time )
  {
    v15 = entityNum;
    v16 = BgAntiLag::BlendEntity(this, v11, v12, v10, outProgress, entityNum, contextFlags, outData);
    if ( !v14 && v16 )
      return 1;
  }
  else
  {
LABEL_19:
    v15 = entityNum;
  }
  this->EntityStateToAntiLagEntity(this, v15, outData, 0);
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
  BgAntiLagFrameHistory *v12; 
  int v13; 
  volatile unsigned int m_usedSize; 
  volatile unsigned int v15; 
  int v16; 
  char v17; 
  volatile unsigned int v18; 
  BgAntiLagFrameHistory *v19; 
  __int64 v20; 
  BgAntiLagFrameHistory *v21; 
  __int64 v22; 
  BgAntiLagEntityHistory *v23; 
  float *outProgress; 
  BgAntiLagEntityInfo *v25; 
  char v26; 
  float v27; 
  float v28; 
  unsigned int v29; 
  BgAntiLagFrameHistory *outEndFrame; 
  BgAntiLagFrameHistory *outStartFrame; 
  BgAntiLagFrameHistory *velHintFrame; 
  BgAntiLagFrameHistory *v33; 
  bool timePastEndFrame; 

  if ( !outNumInfoItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 836, ASSERT_TYPE_ASSERT, "(outNumInfoItems)", (const char *)&queryFormat, "outNumInfoItems") )
    __debugbreak();
  if ( !outInfoList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 837, ASSERT_TYPE_ASSERT, "(outInfoList)", (const char *)&queryFormat, "outInfoList") )
    __debugbreak();
  *outNumInfoItems = 0;
  outStartFrame = NULL;
  outEndFrame = NULL;
  velHintFrame = NULL;
  v27 = 0.0;
  if ( (contextFlags & 0x80u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1134, ASSERT_TYPE_ASSERT, "(!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND))", "%s\n\tGetEntityInfoAtTime does not support ANTILAG_CONTEXT_POSE_REWIND.", "!(contextFlags & ANTILAG_CONTEXT_POSE_REWIND)") )
    __debugbreak();
  if ( BgAntiLag::GetFrameInfoAtTime(this, clientNum, time, &outStartFrame, &outEndFrame, &v27) )
  {
    i = outEndFrame;
    v12 = outStartFrame;
    if ( (!outStartFrame || !outEndFrame) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 730, ASSERT_TYPE_ASSERT, "(*outStartFrame && *outEndFrame)", (const char *)&queryFormat, "*outStartFrame && *outEndFrame") )
      __debugbreak();
    if ( (contextFlags & 8) != 0 )
    {
      v13 = v12->time;
      v33 = NULL;
      BgAntiLag::GetFrameInfoAtTime(this, clientNum, v13 - 1, &velHintFrame, &v33, &v28);
    }
    timePastEndFrame = time > i->time;
    if ( (contextFlags & 0x10) != 0 )
    {
      m_usedSize = i->characterList.m_usedSize;
      v15 = 0;
      for ( i = outEndFrame; v15 < m_usedSize; ++v15 )
      {
        if ( v15 >= i->characterList.m_usedSize )
        {
          LODWORD(v25) = i->characterList.m_usedSize;
          LODWORD(outProgress) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v25) )
            __debugbreak();
        }
        v16 = i->characterList.m_data[v15];
        i = outEndFrame;
        if ( clientNum != v16 )
          BgAntiLag::AddListAtTimeInfo(this, clientNum, v16, contextFlags, maxOutInfos, outNumInfoItems, outInfoList, outStartFrame, outEndFrame, velHintFrame, timePastEndFrame, v27);
      }
    }
    if ( (contextFlags & 0x60) != 0 )
    {
      if ( (contextFlags & 0x60) == 64 )
      {
        v17 = 1;
        v26 = 1;
        if ( !i->hasFakeActors )
          return;
      }
      else
      {
        v17 = 0;
        v26 = 0;
      }
      v18 = 0;
      v29 = i->otherEntList.m_usedSize;
      if ( v29 )
      {
        do
        {
          v19 = outEndFrame;
          if ( v18 >= outEndFrame->otherEntList.m_usedSize )
          {
            LODWORD(v25) = outEndFrame->otherEntList.m_usedSize;
            LODWORD(outProgress) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v25) )
              __debugbreak();
          }
          v20 = (int)v19->otherEntList.m_data[v18];
          if ( !v17 )
            goto LABEL_52;
          v21 = outEndFrame;
          if ( !outEndFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 621, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
            __debugbreak();
          if ( (unsigned int)v20 >= 0x800 )
          {
            LODWORD(v25) = 2048;
            LODWORD(outProgress) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 622, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outProgress, v25) )
              __debugbreak();
          }
          v22 = v21->entityData[v20];
          if ( (_DWORD)v22 == -1 )
            goto LABEL_50;
          if ( (unsigned int)v22 >= v21->entityDataStandard.m_usedSize )
          {
            LODWORD(v25) = v21->entityDataStandard.m_usedSize;
            LODWORD(outProgress) = v21->entityData[v20];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v25) )
              __debugbreak();
          }
          if ( v21->entityDataStandard.m_data[v22]->entType == -1 )
          {
LABEL_50:
            v23 = NULL;
          }
          else
          {
            if ( (unsigned int)v22 >= v21->entityDataStandard.m_usedSize )
            {
              LODWORD(v25) = v21->entityDataStandard.m_usedSize;
              LODWORD(outProgress) = v22;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 683, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", outProgress, v25) )
                __debugbreak();
            }
            v23 = v21->entityDataStandard.m_data[v22];
          }
          if ( (v23->flags & 8) != 0 )
LABEL_52:
            BgAntiLag::AddListAtTimeInfo(this, clientNum, v20, contextFlags, maxOutInfos, outNumInfoItems, outInfoList, outStartFrame, outEndFrame, velHintFrame, timePastEndFrame, v27);
          v17 = v26;
          ++v18;
        }
        while ( v18 < v29 );
      }
    }
  }
}

/*
==============
BgAntiLag::GetFrameInfoAtTime
==============
*/
bool BgAntiLag::GetFrameInfoAtTime(BgAntiLag *this, int clientIndex, int gameTime, BgAntiLagFrameHistory **outStartFrame, BgAntiLagFrameHistory **outEndFrame, float *outProgress)
{
  __int64 v8; 
  const dvar_t *v11; 
  char v12; 
  unsigned int CurrentFrameIndex; 
  unsigned int m_antiLagHistorySize; 
  BgAntiLagFrameHistory *v15; 
  BgAntiLagFrameHistory *v16; 
  int time; 
  BgAntiLagFrameHistory *v18; 
  int v19; 
  __int64 v20; 
  BgAntiLagFrameHistory *v21; 
  int v22; 
  BgAntiLagFrameHistory **outEndFramea; 

  v8 = clientIndex;
  if ( !outStartFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 267, ASSERT_TYPE_ASSERT, "(outStartFrame)", (const char *)&queryFormat, "outStartFrame") )
    __debugbreak();
  if ( !outEndFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 268, ASSERT_TYPE_ASSERT, "(outEndFrame)", (const char *)&queryFormat, "outEndFrame") )
    __debugbreak();
  if ( !outProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 269, ASSERT_TYPE_ASSERT, "(outProgress)", (const char *)&queryFormat, "outProgress") )
    __debugbreak();
  *outStartFrame = NULL;
  *outEndFrame = NULL;
  *outProgress = 0.0;
  if ( (int)v8 < 0 )
    goto LABEL_20;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)v8 >= (int)ComCharacterLimits::ms_gameData.m_clientCount )
    goto LABEL_20;
  v11 = DVARBOOL_sv_rewindFilterUnsentPositions;
  if ( !DVARBOOL_sv_rewindFilterUnsentPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_rewindFilterUnsentPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
    v12 = 1;
  else
LABEL_20:
    v12 = 0;
  Sys_ProfBeginNamedEvent(0, "GetFrameInfoAtTime()");
  CurrentFrameIndex = BgAntiLag::GetCurrentFrameIndex(this);
  m_antiLagHistorySize = this->m_antiLagHistorySize;
  v15 = this->m_antiLagHistory[this->m_nextAntiLagHistory];
  v16 = this->m_antiLagHistory[CurrentFrameIndex];
  outEndFramea = (BgAntiLagFrameHistory **)v16;
  time = v16->time;
  if ( time > 0 && !v15->time )
  {
    v15 = this->m_antiLagHistory[0];
    m_antiLagHistorySize = CurrentFrameIndex;
  }
  if ( gameTime <= time )
  {
    if ( gameTime >= v15->time )
    {
      v19 = 0;
      if ( m_antiLagHistorySize )
      {
        while ( 1 )
        {
          v20 = (int)((CurrentFrameIndex + m_antiLagHistorySize - v19) % m_antiLagHistorySize);
          v21 = this->m_antiLagHistory[v20];
          if ( gameTime > v21->time && (!v12 || v21->clientDataValid[v8]) )
            break;
          if ( ++v19 >= m_antiLagHistorySize )
            goto LABEL_28;
        }
        v22 = 1;
        *outStartFrame = v21;
        if ( m_antiLagHistorySize > 1 )
        {
          do
          {
            v16 = this->m_antiLagHistory[(v22 + (int)v20) % m_antiLagHistorySize];
            if ( gameTime <= v16->time && (!v12 || v16->clientDataValid[v8]) )
              goto LABEL_27;
          }
          while ( ++v22 < m_antiLagHistorySize );
        }
      }
    }
    else if ( !v12 || v15->clientDataValid[v8] )
    {
      *outEndFrame = v15;
    }
  }
  else if ( !v12 || v16->clientDataValid[v8] )
  {
LABEL_27:
    *outEndFrame = v16;
  }
LABEL_28:
  v18 = *outStartFrame;
  if ( *outEndFrame )
  {
    if ( v18 )
    {
      if ( gameTime <= v18->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 347, ASSERT_TYPE_ASSERT, "( gameTime > (*outStartFrame)->time )", (const char *)&queryFormat, "gameTime > (*outStartFrame)->time") )
        __debugbreak();
      if ( (*outEndFrame)->time <= (*outStartFrame)->time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 348, ASSERT_TYPE_ASSERT, "( (*outEndFrame)->time > (*outStartFrame)->time )", (const char *)&queryFormat, "(*outEndFrame)->time > (*outStartFrame)->time") )
        __debugbreak();
      *outProgress = (float)(gameTime - (*outStartFrame)->time) / (float)((*outEndFrame)->time - (*outStartFrame)->time);
    }
    else
    {
      *outStartFrame = *outEndFrame;
      *outProgress = 1.0;
    }
  }
  else if ( v18 )
  {
    *outEndFrame = v18;
    *outProgress = 0.0;
  }
  if ( v15 && (!*((_DWORD *)outEndFramea + 7978) || !v15->time) )
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
bool BgAntiLag::GetLerpMoverOverlap(BgAntiLag *this, const vec3_t *playerOrigin, const float playerRadius, const float playerHeight, const BgAntiLagLerpMoverCmd *command)
{
  float v5; 
  float v6; 
  float v7; 

  v5 = playerOrigin->v[2];
  v6 = command->origin.v[2];
  if ( v6 > (float)(v5 + playerHeight) || (float)(v6 + command->height) < v5 )
    return 0;
  v7 = command->origin.v[1] - playerOrigin->v[1];
  return (float)((float)(playerRadius + command->radius) * (float)(playerRadius + command->radius)) > (float)((float)(v7 * v7) + (float)((float)(command->origin.v[0] - playerOrigin->v[0]) * (float)(command->origin.v[0] - playerOrigin->v[0])));
}

/*
==============
BgAntiLag::GetNearestEntities
==============
*/
void BgAntiLag::GetNearestEntities(const Physics_WorldId worldId, const playerState_s *const ps, const int entIndex, const vec3_t *origin, bitarray<2048> *outNearestEntities)
{
  __int128 v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  float value; 
  float v11; 
  float v12; 
  bitarray<2048> *v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  PhysicsQuery_Collected<unsigned int> *collectedScriptables; 
  __int64 removeDuplicates; 
  int ignoreEnts; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  char v22; 
  __int128 v23; 

  v6 = DCONST_DVARFLT_antilagBroadPhaseSize;
  v7 = 0;
  v23 = v5;
  ignoreEnts = entIndex;
  collectedEnts.ids = (unsigned __int16 *)&v22;
  collectedEnts.count = 0;
  collectedEnts.countMax = 600;
  aabbMin.v[0] = FLOAT_N1_0;
  aabbMin.v[1] = FLOAT_N1_0;
  aabbMin.v[2] = FLOAT_N1_0;
  aabbMax.v[0] = FLOAT_1_0;
  aabbMax.v[1] = FLOAT_1_0;
  aabbMax.v[2] = FLOAT_1_0;
  if ( !DCONST_DVARFLT_antilagBroadPhaseSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagBroadPhaseSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  aabbMin.v[0] = (float)(value * aabbMin.v[0]) + origin->v[0];
  aabbMin.v[1] = (float)(value * aabbMin.v[1]) + origin->v[1];
  v11 = (float)(value * aabbMax.v[0]) + origin->v[0];
  aabbMin.v[2] = (float)(value * aabbMin.v[2]) + origin->v[2];
  v12 = (float)(value * aabbMax.v[1]) + origin->v[1];
  aabbMax.v[0] = v11;
  aabbMax.v[2] = (float)(value * aabbMax.v[2]) + origin->v[2];
  aabbMax.v[1] = v12;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(worldId, &aabbMin, &aabbMax, 42035505, 1u, &ignoreEnts, &collectedEnts, NULL, 1);
  v13 = outNearestEntities;
  v14 = 4i64;
  do
  {
    *(_QWORD *)v13->array = 0i64;
    *(_QWORD *)&v13->array[2] = 0i64;
    *(_QWORD *)&v13->array[4] = 0i64;
    v13 = (bitarray<2048> *)((char *)v13 + 64);
    *(_QWORD *)&v13[-1].array[54] = 0i64;
    *(_QWORD *)&v13[-1].array[56] = 0i64;
    *(_QWORD *)&v13[-1].array[58] = 0i64;
    *(_QWORD *)&v13[-1].array[60] = 0i64;
    *(_QWORD *)&v13[-1].array[62] = 0i64;
    --v14;
  }
  while ( v14 );
  if ( collectedEnts.count )
  {
    do
    {
      v15 = collectedEnts.ids[v7];
      if ( (unsigned int)v15 >= 0x800 )
      {
        LODWORD(removeDuplicates) = 2048;
        LODWORD(collectedScriptables) = collectedEnts.ids[v7];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", collectedScriptables, removeDuplicates) )
          __debugbreak();
      }
      ++v7;
      outNearestEntities->array[v15 >> 5] |= 0x80000000 >> (v15 & 0x1F);
    }
    while ( v7 < collectedEnts.count );
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
  float v7; 
  int v8; 
  __int64 v9; 
  unsigned int v10; 
  float v11; 
  unsigned int v12; 
  int v13; 
  __int64 v14; 
  __int16 v15; 
  __int64 v16; 
  __int16 *v17; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  __int64 clientNum; 
  __int64 v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  __int16 *v26; 
  const vec3_t *v27; 
  char v28[8]; 
  float v29; 
  float v30; 
  float v31; 

  v27 = origin;
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1322, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1323, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = FLOAT_3_4028235e38;
  v25 = -1;
  v8 = -1;
  v24 = -1;
  LODWORD(v9) = 0;
  v10 = nearestEntities->array[0];
  v11 = FLOAT_3_4028235e38;
  while ( v10 )
  {
LABEL_11:
    v12 = __lzcnt(v10);
    v13 = v12 + 32 * v9;
    if ( v12 >= 0x20 )
    {
      LODWORD(v23) = 32;
      LODWORD(v22) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v22, v23) )
        __debugbreak();
    }
    if ( (v10 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v10 &= ~(0x80000000 >> v12);
    v8 = v24;
    if ( this->GetEntityStateAndPhysicsInfo(this, v13, (const entityState_t **)&v26, (const PhysicsObject **)v28) )
    {
      v14 = (__int64)v26;
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v15 = *(_WORD *)(v14 + 8);
      if ( ((v15 - 1) & 0xFFED) != 0 || v15 == 3 )
      {
        v16 = (__int64)v26;
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1935, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( *(_WORD *)(v16 + 8) != 6 || *(_WORD *)(v16 + 200) != 1 )
          goto LABEL_35;
      }
      v17 = v26;
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1463, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      this->GetOriginForClosestCharacters(this, *v17, (vec3_t *)&v29);
      v18 = (float)((float)((float)(v27->v[1] - v30) * (float)(v27->v[1] - v30)) + (float)((float)(v27->v[0] - v29) * (float)(v27->v[0] - v29))) + (float)((float)(v27->v[2] - v31) * (float)(v27->v[2] - v31));
      if ( v18 < v7 )
      {
        v8 = v25;
        v11 = v7;
        v25 = *v17;
        v24 = v8;
        v7 = (float)((float)((float)(v27->v[1] - v30) * (float)(v27->v[1] - v30)) + (float)((float)(v27->v[0] - v29) * (float)(v27->v[0] - v29))) + (float)((float)(v27->v[2] - v31) * (float)(v27->v[2] - v31));
        goto LABEL_36;
      }
      if ( v18 >= v11 )
      {
LABEL_35:
        v8 = v24;
      }
      else
      {
        v8 = *v17;
        v24 = v8;
        v11 = (float)((float)((float)(v27->v[1] - v30) * (float)(v27->v[1] - v30)) + (float)((float)(v27->v[0] - v29) * (float)(v27->v[0] - v29))) + (float)((float)(v27->v[2] - v31) * (float)(v27->v[2] - v31));
      }
LABEL_36:
      this->OnBroadphaseCollection(this, v13, ps);
    }
  }
  while ( 1 )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 0x40 )
      break;
    v10 = nearestEntities->array[v9];
    if ( v10 )
      goto LABEL_11;
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1492, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v19 = DCONST_DVARFLT_antilagClosestCharactersRadius;
  if ( !DCONST_DVARFLT_antilagClosestCharactersRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagClosestCharactersRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  v20 = v19->current.value * v19->current.value;
  if ( ps->clientNum >= 0x800u )
  {
    LODWORD(v23) = 2048;
    LODWORD(v22) = ps->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( ( 2048 ) )", "ps->clientNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  clientNum = ps->clientNum;
  if ( v25 != -1 && v7 < v20 )
    this->m_preArchiveData[clientNum].closestCharacters[0] = truncate_cast<unsigned short,int>(v25 + 1);
  if ( v8 != -1 && v11 < v20 )
    this->m_preArchiveData[clientNum].closestCharacters[1] = truncate_cast<unsigned short,int>(v8 + 1);
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
  const dvar_t *v8; 
  float v9; 
  __int64 clientNum; 
  int v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1492, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !closestCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1493, ASSERT_TYPE_ASSERT, "(closestCharacters)", (const char *)&queryFormat, "closestCharacters") )
    __debugbreak();
  if ( !closestCharactersDistSq && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1494, ASSERT_TYPE_ASSERT, "(closestCharactersDistSq)", (const char *)&queryFormat, "closestCharactersDistSq") )
    __debugbreak();
  v8 = DCONST_DVARFLT_antilagClosestCharactersRadius;
  if ( !DCONST_DVARFLT_antilagClosestCharactersRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagClosestCharactersRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value * v8->current.value;
  if ( ps->clientNum >= 0x800u )
  {
    LODWORD(v13) = 2048;
    LODWORD(v12) = ps->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.cpp", 1500, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( ( 2048 ) )", "ps->clientNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  clientNum = ps->clientNum;
  if ( *closestCharacters != -1 && v9 > *closestCharactersDistSq )
    this->m_preArchiveData[clientNum].closestCharacters[0] = truncate_cast<unsigned short,int>(*closestCharacters + 1);
  v11 = closestCharacters[1];
  if ( v11 != -1 && v9 > closestCharactersDistSq[1] )
    this->m_preArchiveData[clientNum].closestCharacters[1] = truncate_cast<unsigned short,int>(v11 + 1);
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

