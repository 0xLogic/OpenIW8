/*
==============
GAntiLagMP::InvalidateArchivedCharacterPositions
==============
*/

void __fastcall GAntiLagMP::InvalidateArchivedCharacterPositions(const int characterIndex)
{
  ?InvalidateArchivedCharacterPositions@GAntiLagMP@@SAXH@Z(characterIndex);
}

/*
==============
GAntiLagMP::ClearCharacterHistory
==============
*/

void __fastcall GAntiLagMP::ClearCharacterHistory(GAntiLagMP *this, const int characterIndex)
{
  ?ClearCharacterHistory@GAntiLagMP@@QEAAXH@Z(this, characterIndex);
}

/*
==============
GAntiLagMP::GetAntilagTraceInfo
==============
*/

SvAntilagArchiveInfo *__fastcall GAntiLagMP::GetAntilagTraceInfo(GAntiLagMP *this)
{
  return ?GetAntilagTraceInfo@GAntiLagMP@@MEAAPEAUSvAntilagArchiveInfo@@XZ(this);
}

/*
==============
GAntiLagMP::OnBroadphaseCollection
==============
*/

void __fastcall GAntiLagMP::OnBroadphaseCollection(GAntiLagMP *this, int entIndex, playerState_s *playerPs)
{
  ?OnBroadphaseCollection@GAntiLagMP@@UEAAXHPEAUplayerState_s@@@Z(this, entIndex, playerPs);
}

/*
==============
GAntiLagMP::RewindPositionsInternal
==============
*/

void __fastcall GAntiLagMP::RewindPositionsInternal(GAntiLagMP *this, const int gameTime, int clientIndex, bool rewindMainPhysics, bool rewindDetailPhysics, bool permitInvalidEntityRestore, const char *debugId)
{
  ?RewindPositionsInternal@GAntiLagMP@@IEAAXHH_N00PEBD@Z(this, gameTime, clientIndex, rewindMainPhysics, rewindDetailPhysics, permitInvalidEntityRestore, debugId);
}

/*
==============
GAntiLagMP::AntiLagSceneHandlePoseRewind
==============
*/

void __fastcall GAntiLagMP::AntiLagSceneHandlePoseRewind(GAntiLagMP *this, BgAntiLagFrameHistory *startFrame, BgAntiLagFrameHistory *endFrame, float progress, bool doRewind)
{
  ?AntiLagSceneHandlePoseRewind@GAntiLagMP@@UEAAXPEAUBgAntiLagFrameHistory@@0M_N@Z(this, startFrame, endFrame, progress, doRewind);
}

/*
==============
GAntiLagMP::AntiLagRestoreSceneHandlePoseRewind
==============
*/

void __fastcall GAntiLagMP::AntiLagRestoreSceneHandlePoseRewind(GAntiLagMP *this)
{
  ?AntiLagRestoreSceneHandlePoseRewind@GAntiLagMP@@UEAAXXZ(this);
}

/*
==============
GAntiLagMP::RewindPositions
==============
*/

void __fastcall GAntiLagMP::RewindPositions(GAntiLagMP *this, const int gameTime, const gentity_s *attacker, bool rewindMainPhysics, bool rewindDetailPhysics, bool permitInvalidEntityRestore, const char *debugId)
{
  ?RewindPositions@GAntiLagMP@@MEAAXHPEBUgentity_s@@_N11PEBD@Z(this, gameTime, attacker, rewindMainPhysics, rewindDetailPhysics, permitInvalidEntityRestore, debugId);
}

/*
==============
GAntiLagMP::ShouldPerformMuzzlePointAntiLag
==============
*/

bool __fastcall GAntiLagMP::ShouldPerformMuzzlePointAntiLag(GAntiLagMP *this, const int gameTime, const gentity_s *attacker)
{
  return ?ShouldPerformMuzzlePointAntiLag@GAntiLagMP@@MEBA_NHPEBUgentity_s@@@Z(this, gameTime, attacker);
}

/*
==============
GAntiLagMP::ShouldPerformBulletFireAntiLag
==============
*/

bool __fastcall GAntiLagMP::ShouldPerformBulletFireAntiLag(GAntiLagMP *this, const int gameTime, const gentity_s *attacker)
{
  return ?ShouldPerformBulletFireAntiLag@GAntiLagMP@@MEBA_NHPEBUgentity_s@@@Z(this, gameTime, attacker);
}

/*
==============
GAntiLagMP::DrawDebugCharacterPoses
==============
*/

void __fastcall GAntiLagMP::DrawDebugCharacterPoses(GAntiLagMP *this, GAntilagDebugStoreType storeType)
{
  ?DrawDebugCharacterPoses@GAntiLagMP@@MEAAXW4GAntilagDebugStoreType@@@Z(this, storeType);
}

/*
==============
GAntiLagMP::RestorePositions
==============
*/

void __fastcall GAntiLagMP::RestorePositions(GAntiLagMP *this, const gentity_s *attacker, const char *debugId)
{
  ?RestorePositions@GAntiLagMP@@MEAAXPEBUgentity_s@@PEBD@Z(this, attacker, debugId);
}

/*
==============
GAntiLagMP::ArchiveAntilagFrame
==============
*/

void __fastcall GAntiLagMP::ArchiveAntilagFrame(GAntiLagMP *this, const bool *clientHasSnapshot)
{
  ?ArchiveAntilagFrame@GAntiLagMP@@QEAAXQEB_N@Z(this, clientHasSnapshot);
}

/*
==============
GAntiLagMP::ShouldPerformFireMeleeAntiLag
==============
*/

bool __fastcall GAntiLagMP::ShouldPerformFireMeleeAntiLag(GAntiLagMP *this, const int gameTime, const gentity_s *attacker)
{
  return ?ShouldPerformFireMeleeAntiLag@GAntiLagMP@@MEBA_NHPEBUgentity_s@@@Z(this, gameTime, attacker);
}

/*
==============
GAntiLagMP::DrawDebug
==============
*/

void __fastcall GAntiLagMP::DrawDebug(GAntiLagMP *this)
{
  ?DrawDebug@GAntiLagMP@@QEAAXXZ(this);
}

/*
==============
GAntiLagMP::GAntiLagMP
==============
*/

void __fastcall GAntiLagMP::GAntiLagMP(GAntiLagMP *this)
{
  ??0GAntiLagMP@@QEAA@XZ(this);
}

/*
==============
GAntiLagMP::GetAntilagDebugCharacterInfo
==============
*/

AntilagDebugCharacterInfo *__fastcall GAntiLagMP::GetAntilagDebugCharacterInfo(GAntiLagMP *this, GAntilagDebugStoreType storeType, const int characterIndex)
{
  return ?GetAntilagDebugCharacterInfo@GAntiLagMP@@IEAAPEAUAntilagDebugCharacterInfo@@W4GAntilagDebugStoreType@@H@Z(this, storeType, characterIndex);
}

/*
==============
GAntiLagMP::StartSceneArchive
==============
*/

BgAntiLagFrameHistory *__fastcall GAntiLagMP::StartSceneArchive(GAntiLagMP *this, const bool *clientHasSnapshot, int time)
{
  return ?StartSceneArchive@GAntiLagMP@@UEAAPEAUBgAntiLagFrameHistory@@QEB_NH@Z(this, clientHasSnapshot, time);
}

/*
==============
GAntiLagMP::SaveDebugCharacterPoses
==============
*/

void __fastcall GAntiLagMP::SaveDebugCharacterPoses(GAntiLagMP *this, GAntilagDebugStoreType storeType)
{
  ?SaveDebugCharacterPoses@GAntiLagMP@@MEAAXW4GAntilagDebugStoreType@@@Z(this, storeType);
}

/*
==============
GAntiLagMP::ArchiveStateForCharacter
==============
*/

void __fastcall GAntiLagMP::ArchiveStateForCharacter(GAntiLagMP *this, MemoryFile *memFile, const int characterIndex)
{
  ?ArchiveStateForCharacter@GAntiLagMP@@QEAAXPEAUMemoryFile@@H@Z(this, memFile, characterIndex);
}

/*
==============
GAntiLagMP::ArchiveCharacter
==============
*/

BgAntiLagEntityHistory *__fastcall GAntiLagMP::ArchiveCharacter(GAntiLagMP *this, gentity_s *ent, BgAntiLagFrameHistory *frameHistory)
{
  return ?ArchiveCharacter@GAntiLagMP@@UEAAPEAUBgAntiLagEntityHistory@@PEAUgentity_s@@PEAUBgAntiLagFrameHistory@@@Z(this, ent, frameHistory);
}

/*
==============
GAntiLagMP::GAntiLagMP
==============
*/
void GAntiLagMP::GAntiLagMP(GAntiLagMP *this)
{
  GAntiLagFrameHistoryMP *m_antiLagHistoryFrames; 
  __int64 v3; 
  BgAntiLagRewindSceneMP *p_m_rewindSceneInst; 
  __int64 v5; 

  BgAntiLag::BgAntiLag(this);
  this->m_debugMethod = ANTILAG_DEBUG_METHOD_DISABLED;
  this->__vftable = (GAntiLagMP_vtbl *)&GAntiLagMP::`vftable';
  m_antiLagHistoryFrames = this->m_antiLagHistoryFrames;
  v3 = 40i64;
  do
  {
    GAntiLagFrameHistoryMP::GAntiLagFrameHistoryMP(m_antiLagHistoryFrames++);
    --v3;
  }
  while ( v3 );
  p_m_rewindSceneInst = &this->m_rewindSceneInst;
  v5 = 2048i64;
  do
  {
    BgAntiLagRewindEntity::BgAntiLagRewindEntity(p_m_rewindSceneInst->entityBackup.m_data);
    p_m_rewindSceneInst = (BgAntiLagRewindSceneMP *)((char *)p_m_rewindSceneInst + 52);
    --v5;
  }
  while ( v5 );
  this->m_rewindSceneInst.entityBackup.m_usedSize = 0;
  this->m_rewindSceneInst.entityBackup.m_maxSize = 0;
  this->m_performMissileAntiLag = 1;
  BgAntiLag::ConnectDataCommon<GAntiLagFrameHistoryMP,BgAntiLagRewindSceneMP>(this, this->m_antiLagHistoryFrames, 0x28u, &this->m_rewindSceneInst);
  this->m_printAntilagWarnings = 1;
}

/*
==============
GAntiLagMP::AntiLagRestoreSceneHandlePoseRewind
==============
*/
void GAntiLagMP::AntiLagRestoreSceneHandlePoseRewind(GAntiLagMP *this)
{
  int v2; 
  bool *hasAntilagPose; 
  XAnimTree **savedTree; 
  const DObj *ServerDObjForEntnum; 
  const DObj *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( this->m_rewindSceneInst.poseValid )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "GAntiLag Restore Pose");
    v2 = 0;
    hasAntilagPose = this->m_rewindSceneInst.poseRewind.hasAntilagPose;
    savedTree = this->m_rewindSceneInst.poseRewind.savedTree;
    do
    {
      if ( *hasAntilagPose )
      {
        if ( this == (GAntiLagMP *)-4401024i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 148, ASSERT_TYPE_ASSERT, "( antilagInfo )", (const char *)&queryFormat, "antilagInfo") )
          __debugbreak();
        if ( (unsigned int)v2 >= 0xF8 )
        {
          LODWORD(v8) = 248;
          LODWORD(v7) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 149, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( antilagInfo->savedTree ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( antilagInfo->savedTree )\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        ServerDObjForEntnum = Com_GetServerDObjForEntnum(v2);
        v6 = ServerDObjForEntnum;
        if ( ServerDObjForEntnum && ServerDObjForEntnum->tree )
        {
          XAnimClearTree(ServerDObjForEntnum);
          Profile_Begin(402);
          XAnimMoveAnimTree(*savedTree, v6->tree);
          Profile_EndInternal(NULL);
          DObjLock(v6);
          DObjSkelReset(v6);
          DObjUnlock(v6);
        }
        *hasAntilagPose = 0;
      }
      if ( *savedTree )
      {
        Com_XAnimFreeSmallTree(*savedTree);
        *savedTree = NULL;
      }
      ++v2;
      ++savedTree;
      ++hasAntilagPose;
    }
    while ( v2 < 248 );
    Sys_ProfEndNamedEvent();
    this->m_rewindSceneInst.poseValid = 0;
  }
}

/*
==============
GAntiLagMP::AntiLagSceneHandlePoseRewind
==============
*/
void GAntiLagMP::AntiLagSceneHandlePoseRewind(GAntiLagMP *this, BgAntiLagFrameHistory *startFrame, BgAntiLagFrameHistory *endFrame, float progress)
{
  __int64 v7; 
  XAnimTree **savedTree; 

  if ( !startFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 350, ASSERT_TYPE_ASSERT, "(startFrame)", (const char *)&queryFormat, "startFrame") )
    __debugbreak();
  if ( !endFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 351, ASSERT_TYPE_ASSERT, "(endFrame)", (const char *)&queryFormat, "endFrame") )
    __debugbreak();
  v7 = 0i64;
  savedTree = this->m_rewindSceneInst.poseRewind.savedTree;
  do
  {
    if ( this->m_rewindSceneInst.poseRewind.hasAntilagPose[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 360, ASSERT_TYPE_ASSERT, "( !m_rewindSceneInst.poseRewind.hasAntilagPose[characterIndex] )", (const char *)&queryFormat, "!m_rewindSceneInst.poseRewind.hasAntilagPose[characterIndex]") )
      __debugbreak();
    if ( *savedTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 361, ASSERT_TYPE_ASSERT, "( !m_rewindSceneInst.poseRewind.savedTree[characterIndex] )", (const char *)&queryFormat, "!m_rewindSceneInst.poseRewind.savedTree[characterIndex]") )
      __debugbreak();
    ++v7;
    ++savedTree;
  }
  while ( v7 < 248 );
  this->m_rewindSceneInst.poseRewind.fromFrame = (SvAntilagArchiveFrame *)&startFrame[1].entityDataExtended.m_data[17].boneInfo.boneList.m_data[1].dataValid;
  this->m_rewindSceneInst.poseRewind.progress = progress;
  this->m_rewindSceneInst.poseRewind.toFrame = (SvAntilagArchiveFrame *)&endFrame[1].entityDataExtended.m_data[17].boneInfo.boneList.m_data[1].dataValid;
  this->m_rewindSceneInst.poseValid = 1;
}

/*
==============
GAntiLagMP::ArchiveAntilagFrame
==============
*/
void GAntiLagMP::ArchiveAntilagFrame(GAntiLagMP *this, const bool *clientHasSnapshot)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 

  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  GAntiLag::ArchiveScene(this, clientHasSnapshot, PersistentGlobalsMP->time);
}

/*
==============
GAntiLagMP::ArchiveCharacter
==============
*/
BgAntiLagEntityHistory *GAntiLagMP::ArchiveCharacter(GAntiLagMP *this, gentity_s *ent, BgAntiLagFrameHistory *frameHistory)
{
  BgAntiLagEntityHistory *EntityData; 
  BgAntiLagEntityHistory *v7; 
  __int64 v9; 
  int v10; 

  if ( ((ent->s.eType - 1) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 309, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_PLAYER || ent->s.eType == ET_AGENT)", (const char *)&queryFormat, "ent->s.eType == ET_PLAYER || ent->s.eType == ET_AGENT") )
    __debugbreak();
  if ( !G_Antilag_MP_ShouldArchiveCharacter(ent->s.number) )
    return 0i64;
  if ( ent->s.number >= 0xF8u )
  {
    v10 = 248;
    LODWORD(v9) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 316, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.number ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "ent->s.number doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  EntityData = BgAntiLag::AllocateEntityData(this, frameHistory, &ent->s);
  v7 = EntityData;
  if ( !EntityData )
    return 0i64;
  GAntiLag::EntityStateToAntiLagEntity(this, ent->s.number, EntityData, 1);
  G_AntiLag_ArchiveCharacterController(ent->s.number, ent, (SvAntilagArchiveControllers *)&frameHistory[1].entityDataExtended.m_data[17].boneInfo.boneList.m_data[1].dataValid);
  G_AntiLag_ArchiveCharacterTree(ent->s.number, (SvAntilagArchiveAnims *)&frameHistory[2].entityDataStandard.m_data[542]);
  return v7;
}

/*
==============
GAntiLagMP::ArchiveStateForCharacter
==============
*/
void GAntiLagMP::ArchiveStateForCharacter(GAntiLagMP *this, MemoryFile *memFile, const int characterIndex)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 96, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
}

/*
==============
GAntiLagMP::ClearCharacterHistory
==============
*/
void GAntiLagMP::ClearCharacterHistory(GAntiLagMP *this, const int characterIndex)
{
  __int64 v4; 
  unsigned int m_characterCount; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( characterIndex >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v4) = characterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "characterIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v4, m_characterCount) )
      __debugbreak();
  }
  BgAntiLag::RemoveEntityFromHistory(this, characterIndex);
}

/*
==============
GAntiLagMP::DrawDebug
==============
*/
void GAntiLagMP::DrawDebug(GAntiLagMP *this)
{
  const dvar_t *v2; 
  GAntilagDebugStoreType v3; 
  const dvar_t *v4; 
  BgAntiLagFrameHistory *CurrentHistoryFrame; 
  __int64 v6; 
  float v7; 
  const char *v8; 
  float v9; 
  const char *v10; 

  v2 = DVARINT_bg_debugRewindPositions;
  if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  switch ( v2->current.integer )
  {
    case 3:
      v3 = ANTILAG_DEBUG_STORE_CURRENT;
      goto LABEL_10;
    case 4:
      v3 = ANTILAG_DEBUG_STORE_REWIND;
      goto LABEL_10;
    case 5:
      v3 = ANTILAG_DEBUG_STORE_ARCHIVED_POSE;
LABEL_10:
      GAntiLagMP::DrawDebugCharacterPoses(this, v3);
      break;
  }
  v4 = DVARBOOL_bg_debugPoseRewindMemory;
  if ( !DVARBOOL_bg_debugPoseRewindMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugPoseRewindMemory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    CurrentHistoryFrame = BgAntiLag::GetCurrentHistoryFrame(this);
    if ( CurrentHistoryFrame )
    {
      G_Main_AddDebugString2D(100.0, 100.0, &colorYellow, 1.25, "AntiLag Pose Memory Usage");
      v6 = LODWORD(CurrentHistoryFrame[2].entityDataExtended.m_data[51].boneInfo.boneList.m_data[1].origin.v[2]);
      v7 = (float)v6;
      v8 = j_va("Anim Info: %d/%lu (%.1f%%, %lu/%lu bytes)", v6, 1000i64, (float)(v7 * 0.1), 16 * v6, 16000i64);
      G_Main_AddDebugString2D(100.0, 125.0, &colorWhite, 1.25, v8);
      v9 = (float)CurrentHistoryFrame[2].otherEntList.m_data[199];
      v10 = j_va("Custom Node Data: %d/%lu bytes (%.1f%%)", CurrentHistoryFrame[2].otherEntList.m_data[199], 14336i64, (float)(v9 * 0.0069754464));
      G_Main_AddDebugString2D(100.0, 150.0, &colorWhite, 1.25, v10);
    }
  }
}

/*
==============
GAntiLagMP::DrawDebugCharacterPoses
==============
*/
void GAntiLagMP::DrawDebugCharacterPoses(GAntiLagMP *this, GAntilagDebugStoreType storeType)
{
  __int64 v2; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  int integer; 
  AntilagDebugCharacterInfo *v7; 
  int i; 
  AntilagDebugCharacterInfo *AntilagDebugCharacterInfo; 
  __int64 v10; 
  __int64 v11; 
  vec4_t color[2]; 
  __int128 v13; 

  v2 = storeType;
  *(__m256i *)color[0].v = _ymm;
  v13 = _xmm;
  if ( storeType != ANTILAG_DEBUG_STORE_ARCHIVED_POSE )
    goto LABEL_6;
  v4 = DVARBOOL_sv_rewindPoseArchive;
  if ( !DVARBOOL_sv_rewindPoseArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_rewindPoseArchive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
LABEL_6:
    v5 = DVARINT_bg_debugRewindCharacter;
    if ( !DVARINT_bg_debugRewindCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindCharacter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    integer = v5->current.integer;
    if ( integer < -1 || integer > this->m_antilagDebugCharacterCount )
    {
      LODWORD(v11) = -1;
      LODWORD(v10) = integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 580, ASSERT_TYPE_ASSERT, "( -1 ) <= ( debugCharacterIndex ) && ( debugCharacterIndex ) <= ( m_antilagDebugCharacterCount )", "debugCharacterIndex not in [-1, m_antilagDebugCharacterCount]\n\t%i not in [%i, %i]", v10, v11, this->m_antilagDebugCharacterCount) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( this->m_antilagDebugCharacterCount < (int)ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v11) = ComCharacterLimits::ms_gameData.m_characterCount;
      LODWORD(v10) = this->m_antilagDebugCharacterCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 581, ASSERT_TYPE_ASSERT, "( m_antilagDebugCharacterCount ) >= ( ComCharacterLimits::GetCharacterMaxCount() )", "m_antilagDebugCharacterCount >= ComCharacterLimits::GetCharacterMaxCount()\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    if ( integer < 0 )
    {
      for ( i = 0; ; ++i )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
          break;
        AntilagDebugCharacterInfo = GAntiLagMP::GetAntilagDebugCharacterInfo(this, (GAntilagDebugStoreType)v2, i);
        G_AntilagMP_DrawDebugCharacterPose(&color[v2], AntilagDebugCharacterInfo);
      }
    }
    else
    {
      v7 = GAntiLagMP::GetAntilagDebugCharacterInfo(this, (GAntilagDebugStoreType)v2, integer);
      G_AntilagMP_DrawDebugCharacterPose(&color[v2], v7);
    }
  }
}

/*
==============
G_AntiLag_ArchiveCharacterController
==============
*/
void G_AntiLag_ArchiveCharacterController(const int characterIndex, const gentity_s *ent, SvAntilagArchiveControllers *archiveCtrl)
{
  __int64 v4; 
  const dvar_t *v6; 
  __int64 v7; 
  __int64 v8; 
  clientControllers_t *v9; 
  __int16 v10; 
  __int64 v11; 
  __int64 v12; 

  v4 = characterIndex;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v4 >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "characterIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v12, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 228, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !archiveCtrl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 229, ASSERT_TYPE_ASSERT, "( archiveCtrl )", (const char *)&queryFormat, "archiveCtrl") )
    __debugbreak();
  v6 = DVARBOOL_sv_rewindPoseArchive;
  if ( !DVARBOOL_sv_rewindPoseArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_rewindPoseArchive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)v4);
    v8 = v7;
    if ( (!v7 || !*(_DWORD *)(v7 + 4)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 236, ASSERT_TYPE_ASSERT, "( ci && ci->infoValid )", (const char *)&queryFormat, "ci && ci->infoValid") )
      __debugbreak();
    Profile_Begin(398);
    v9 = (clientControllers_t *)(v8 + 2812);
    if ( *(_DWORD *)(v8 + 2568) )
    {
      if ( !BG_AnimationState_UpdateControllers(&ent->s, (const characterInfo_t *)v8, v9) )
        memset_0((void *)(v8 + 2812), 0, 0x78ui64);
    }
    else
    {
      BG_Player_DoControllersInternal(&ent->s, (const characterInfo_t *)v8, v9);
    }
    Profile_EndInternal(NULL);
    if ( *(_DWORD *)(v8 + 2568) )
      v10 = truncate_cast<short,unsigned int>((ent->s.animInfo.animData >> 18) & 0x3F);
    else
      v10 = -1;
    archiveCtrl->animClass[v4] = v10;
    v11 = v4;
    *(__m256i *)archiveCtrl->controllers[v11].angles[0].v = *(__m256i *)(v8 + 2812);
    *(__m256i *)&archiveCtrl->controllers[v11].angles[2].z = *(__m256i *)(v8 + 2844);
    *(__m256i *)&archiveCtrl->controllers[v11].tag_origin_offset.y = *(__m256i *)(v8 + 2876);
    *(_OWORD *)archiveCtrl->controllers[v11].hand_ik_local_ang[0].v = *(_OWORD *)(v8 + 2908);
    *(double *)&archiveCtrl->controllers[v11].hand_ik_local_ang[1].y = *(double *)(v8 + 2924);
  }
}

/*
==============
G_AntiLag_ArchiveCharacterTree
==============
*/
char G_AntiLag_ArchiveCharacterTree(const int characterIndex, SvAntilagArchiveAnims *animInfo)
{
  __int64 v3; 
  const dvar_t *v4; 
  const DObj *ServerDObjForEntnum; 
  __int64 customNodeDataSize; 
  unsigned int antilagAnimInfoCount; 
  unsigned int v8; 
  unsigned int *outCustomNodeDataWritten; 

  v3 = characterIndex;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v3 >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(outCustomNodeDataWritten) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "characterIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", outCustomNodeDataWritten, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 189, ASSERT_TYPE_ASSERT, "( animInfo )", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v4 = DVARBOOL_sv_rewindPoseArchive;
  if ( !DVARBOOL_sv_rewindPoseArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_rewindPoseArchive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  ServerDObjForEntnum = Com_GetServerDObjForEntnum(v3);
  if ( !ServerDObjForEntnum || animInfo->antilagAnimInfoCount >= 0x3E8 || animInfo->customNodeDataSize >= 0x3800 )
    return 0;
  Profile_Begin(397);
  customNodeDataSize = animInfo->customNodeDataSize;
  antilagAnimInfoCount = animInfo->antilagAnimInfoCount;
  animInfo->characterCustomNodeDataStart[v3] = customNodeDataSize;
  animInfo->characterInfoStart[v3] = antilagAnimInfoCount;
  v8 = XAnimSaveAnimTreeForAntilag(ServerDObjForEntnum, &animInfo->antilagAnimInfo[antilagAnimInfoCount], 1000 - antilagAnimInfoCount, &animInfo->customNodeData[customNodeDataSize], 14336 - customNodeDataSize, &animInfo->characterCustomNodeDataSize[v3]);
  animInfo->characterInfoCount[v3] = v8;
  animInfo->antilagAnimInfoCount += v8;
  animInfo->customNodeDataSize += animInfo->characterCustomNodeDataSize[v3];
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
G_AntilagMP_DrawDebugCharacterPose
==============
*/
void G_AntilagMP_DrawDebugCharacterPose(const vec4_t *color, AntilagDebugCharacterInfo *info)
{
  int boneCount; 
  int v5; 
  __int64 duration; 
  __int64 v7; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 543, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
    __debugbreak();
  boneCount = info->boneCount;
  if ( boneCount )
  {
    v5 = 0;
    if ( boneCount > 0 )
    {
      do
      {
        if ( (unsigned int)v5 >= 0x80 )
        {
          LODWORD(v7) = 128;
          LODWORD(duration) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 550, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ( sizeof( *array_counter( info->bones ) ) + 0 ) )", "boneIndex doesn't index ARRAY_COUNT( info->bones )\n\t%i not in [0, %i)", duration, v7) )
            __debugbreak();
        }
        G_DebugBoxOriented(&info->bones[v5].worldPos, &info->bones[v5].bounds, (const tmat33_t<vec3_t> *)&info->bones[v5].worldRot, color, 0, 0);
        ++v5;
      }
      while ( v5 < info->boneCount );
    }
  }
}

/*
==============
G_AntilagMP_SaveDebugCharacterPose
==============
*/
void G_AntilagMP_SaveDebugCharacterPose(const int characterIndex, AntilagDebugCharacterInfo *outCharacterInfo)
{
  AntilagDebugCharacterInfo *v2; 
  const gentity_s *v4; 
  const DObj *v5; 
  __int64 v6; 
  const characterInfo_t *v7; 
  const BgAnimStatic *v8; 
  double Time; 
  unsigned int XAnimIndex; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int v12; 
  double Rate; 
  int v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int8 v19; 
  unsigned int v20; 
  XBoneInfo *v21; 
  __int64 boneCount; 
  int v24; 
  __int64 v25; 
  double v26; 
  __int64 p_y; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned __int8 inOutIndex[8]; 
  __int64 v34; 
  int v35; 
  int NumModels; 
  int modelIndex; 
  AntilagDebugCharacterInfo *v38; 
  const XModel *Model; 
  DObj *ServerDObjForEnt; 
  const gentity_s *v41; 
  tmat43_t<vec3_t> outTagMat; 
  XBoneInfo *boneInfo[254]; 

  v2 = outCharacterInfo;
  v38 = outCharacterInfo;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( characterIndex >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v29) = characterIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 460, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "characterIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v29, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  v41 = SV_GentityNum(characterIndex);
  v4 = v41;
  ServerDObjForEnt = Com_GetServerDObjForEnt(v41);
  v5 = ServerDObjForEnt;
  if ( ServerDObjForEnt )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v6 = *(_QWORD *)&GStatic::ms_gameStatics;
    v7 = (const characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)characterIndex);
    v8 = (const BgAnimStatic *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v2->boneCount = 0;
    if ( v7->usingAnimState )
    {
      v2->legsAnimIndex = 0;
      v2->legsAnimRate = 0.0;
      LODWORD(Time) = 0;
    }
    else
    {
      if ( PlayerASM_IsEnabled() )
      {
        XAnimIndex = BG_PlayerASM_GetXAnimIndex(v7->legs.animsetIndex, v7->legs.animationNumber);
      }
      else
      {
        SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(v7);
        XAnimIndex = BG_AnimationMP_GetXAnimIndex(v8, SuitAnimIndexFromCharacter, v7->legs.animationNumber & 0xFFFFEFFF);
      }
      v2->legsAnimIndex = XAnimIndex;
      v12 = XAnimIndex;
      Rate = XAnimGetRate(v5->tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndex);
      v2->legsAnimRate = *(float *)&Rate;
      Time = XAnimGetTime(v5->tree, 0, XANIM_SUBTREE_DEFAULT, v12);
    }
    v2->legsAnimTime = *(float *)&Time;
    DObjGetBoneInfo(v5, boneInfo);
    NumModels = DObjGetNumModels(v5);
    v14 = NumModels;
    if ( NumModels <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 504, ASSERT_TYPE_ASSERT, "( modelCount > 0 )", (const char *)&queryFormat, "modelCount > 0") )
      __debugbreak();
    v15 = 0;
    v35 = 0;
    if ( NumModels > 0 )
    {
      do
      {
        Model = DObjGetModel(v5, v15);
        v16 = (__int64)Model;
        if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 509, ASSERT_TYPE_ASSERT, "( model )", (const char *)&queryFormat, "model") )
          __debugbreak();
        v17 = 0i64;
        v18 = 0i64;
        v34 = 0i64;
        if ( *(_BYTE *)(v16 + 20) )
        {
          do
          {
            v19 = *(_BYTE *)(v17 + *(_QWORD *)(v16 + 184));
            if ( v19 >= 0x16u )
            {
              LODWORD(v31) = 22;
              LODWORD(v29) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 515, ASSERT_TYPE_ASSERT, "(unsigned)( modelBonePartClassification ) < (unsigned)( HITLOC_NUM )", "modelBonePartClassification doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v29, v31) )
                __debugbreak();
              v17 = v34;
            }
            if ( v19 )
            {
              v20 = *(unsigned __int8 *)(v16 + 20);
              inOutIndex[0] = -2;
              if ( (unsigned int)v18 >= v20 )
              {
                LODWORD(v31) = v20;
                LODWORD(v29) = v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( model->numBones )", "boneIndex doesn't index model->numBones\n\t%i not in [0, %i)", v29, v31) )
                  __debugbreak();
              }
              if ( !*(_QWORD *)(v16 + 152) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 174, ASSERT_TYPE_ASSERT, "(model->boneNames)", (const char *)&queryFormat, "model->boneNames") )
                __debugbreak();
              if ( DObjGetBoneIndexInternal_13(v5, *(scr_string_t *)(*(_QWORD *)(v16 + 152) + 4 * v18), inOutIndex, &modelIndex) )
              {
                v21 = boneInfo[inOutIndex[0]];
                if ( v21->bounds.halfSize.v[0] != 0.0 || v21->bounds.halfSize.v[1] != 0.0 || v21->bounds.halfSize.v[2] != 0.0 )
                {
                  G_Utils_DObjGetWorldBoneIndexMatrix(v4, inOutIndex[0], &outTagMat);
                  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 440, ASSERT_TYPE_ASSERT, "( bounds )", (const char *)&queryFormat, "bounds") )
                    __debugbreak();
                  boneCount = v2->boneCount;
                  if ( (unsigned int)boneCount < 0x80 )
                  {
                    v24 = 0;
                    v25 = (__int64)&v2->bones[boneCount];
                    *(_OWORD *)v25 = *(_OWORD *)v21->bounds.midPoint.v;
                    v26 = *(double *)&v21->bounds.halfSize.y;
                    p_y = (__int64)&v2->bones[boneCount].worldRot.row0.y;
                    *(double *)(v25 + 16) = v26;
                    do
                    {
                      if ( (unsigned int)v24 >= 4 )
                      {
                        LODWORD(v31) = 4;
                        LODWORD(v29) = v24;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v29, v31) )
                          __debugbreak();
                        LODWORD(v32) = 4;
                        LODWORD(v30) = v24;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v30, v32) )
                          __debugbreak();
                      }
                      ++v24;
                      *(_DWORD *)(p_y - 4) = *(_DWORD *)((char *)&outTagMat.m[-3] + p_y - v25 - 4);
                      *(float *)p_y = *(float *)((char *)outTagMat.m[-3].v + p_y - v25);
                      *(_DWORD *)(p_y + 4) = *(_DWORD *)((char *)&outTagMat.m[-2] + p_y - v25 - 8);
                      p_y += 12i64;
                    }
                    while ( v24 < 3 );
                    v2 = v38;
                    v16 = (__int64)Model;
                    v5 = ServerDObjForEnt;
                    v4 = v41;
                    *(vec3_t *)(v25 + 24) = outTagMat.m[3];
                    ++v2->boneCount;
                  }
                }
              }
              v17 = v34;
            }
            v28 = *(unsigned __int8 *)(v16 + 20);
            ++v17;
            v18 = (unsigned int)(v18 + 1);
            v34 = v17;
          }
          while ( (int)v18 < v28 );
          v14 = NumModels;
        }
        v15 = v35 + 1;
        v35 = v15;
      }
      while ( v15 < v14 );
    }
  }
}

/*
==============
G_Antilag_MP_ShouldArchiveCharacter
==============
*/
__int64 G_Antilag_MP_ShouldArchiveCharacter(const int characterIndex)
{
  __int64 v1; 
  gentity_s *v2; 
  SvClient *CommonClient; 
  gentity_s *v4; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  unsigned int v7; 
  gentity_s *gentity; 
  gagent_s *agent; 
  __int64 v10; 
  __int64 v11; 

  v1 = characterIndex;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned int)v1 >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v10) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 261, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "characterIndex doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v10, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  v2 = &g_entities[v1];
  if ( !v2->r.isLinked || (v2->r.svFlags & 1) != 0 )
    return 0i64;
  if ( (int)v1 >= (int)SvClient::ms_clientCount )
  {
    PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v1 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v1, ComCharacterLimits::ms_gameData.m_clientCount) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v7 = v1 - ComCharacterLimits::ms_gameData.m_clientCount;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v7 >= ComCharacterLimits::ms_gameData.m_agentCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v11) = ComCharacterLimits::ms_gameData.m_agentCount;
      LODWORD(v10) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    gentity = PersistentGlobalsMP->agents[v7].gentity;
    if ( !gentity )
      return 0i64;
    if ( gentity != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 294, ASSERT_TYPE_ASSERT, "( agent->gentity == characterEntity )", (const char *)&queryFormat, "agent->gentity == characterEntity") )
      __debugbreak();
    agent = v2->agent;
    if ( !agent || agent->agentState.entityNum != (_DWORD)v1 )
      return 0i64;
  }
  else
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(v1);
    if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 274, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
    v4 = CommonClient->gentity;
    if ( !v4 )
      return 0i64;
    if ( v4 != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 279, ASSERT_TYPE_ASSERT, "( client->gentity == characterEntity )", (const char *)&queryFormat, "client->gentity == characterEntity") )
      __debugbreak();
    if ( SV_BotIsBot(v1) && SvClient::GetCommonClient(v1)->state < CS_CONNECTED )
      return 0i64;
  }
  return 1i64;
}

/*
==============
GAntiLagMP::GetAntilagDebugCharacterInfo
==============
*/
AntilagDebugCharacterInfo *GAntiLagMP::GetAntilagDebugCharacterInfo(GAntiLagMP *this, GAntilagDebugStoreType storeType, const int characterIndex)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int m_antilagDebugCharacterCount; 

  v4 = characterIndex;
  v5 = storeType;
  if ( (unsigned int)characterIndex >= this->m_antilagDebugCharacterCount )
  {
    m_antilagDebugCharacterCount = this->m_antilagDebugCharacterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 559, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( m_antilagDebugCharacterCount )", "characterIndex doesn't index m_antilagDebugCharacterCount\n\t%i not in [0, %i)", characterIndex, m_antilagDebugCharacterCount) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 3 )
  {
    LODWORD(v9) = 3;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 560, ASSERT_TYPE_ASSERT, "(unsigned)( storeType ) < (unsigned)( ( sizeof( *array_counter( m_antilagDebugCharacters ) ) + 0 ) )", "storeType doesn't index ARRAY_COUNT( m_antilagDebugCharacters )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return &this->m_antilagDebugCharacters[v5][v4];
}

/*
==============
GAntiLagMP::GetAntilagTraceInfo
==============
*/
SvAntilagArchiveInfo *GAntiLagMP::GetAntilagTraceInfo(GAntiLagMP *this)
{
  if ( this->m_rewindSceneInst.poseValid )
    return &this->m_rewindSceneInst.poseRewind;
  else
    return 0i64;
}

/*
==============
GAntiLagMP::InvalidateArchivedCharacterPositions
==============
*/
void GAntiLagMP::InvalidateArchivedCharacterPositions(const int characterIndex)
{
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  BgAntiLag::InvalidateClientData(GAntiLag::ms_gAntiLagData, characterIndex);
}

/*
==============
GAntiLagMP::OnBroadphaseCollection
==============
*/
void GAntiLagMP::OnBroadphaseCollection(GAntiLagMP *this, int entIndex, playerState_s *playerPs)
{
  __int64 v4; 
  const dvar_t *v5; 
  float value; 
  playerState_s *EntityPlayerState; 
  playerState_s *v8; 
  float v9; 
  float v10; 
  float v11; 
  __int64 v12; 

  v4 = entIndex;
  if ( !playerPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 414, ASSERT_TYPE_ASSERT, "(playerPs)", (const char *)&queryFormat, "playerPs") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 415, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, 2048) )
      __debugbreak();
  }
  v5 = DCONST_DVARFLT_playerCharacterCollisionQuantizationRange;
  if ( !DCONST_DVARFLT_playerCharacterCollisionQuantizationRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionQuantizationRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  value = v5->current.value;
  EntityPlayerState = G_GetEntityPlayerState(&g_entities[v4]);
  v8 = EntityPlayerState;
  if ( EntityPlayerState )
  {
    if ( EntityPlayerState != playerPs )
    {
      v9 = playerPs->origin.v[0] - EntityPlayerState->origin.v[0];
      v10 = playerPs->origin.v[1] - EntityPlayerState->origin.v[1];
      v11 = playerPs->origin.v[2] - EntityPlayerState->origin.v[2];
      if ( (float)((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11)) < (float)(value * value) )
      {
        if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
          __debugbreak();
        v8->pm_flags.m_flags[1] |= 0x4000000u;
        if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 201, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
          __debugbreak();
        playerPs->pm_flags.m_flags[1] |= 0x4000000u;
      }
    }
  }
}

/*
==============
GAntiLagMP::RestorePositions
==============
*/
void GAntiLagMP::RestorePositions(GAntiLagMP *this, const gentity_s *attacker, const char *debugId)
{
  GAntiLag::RestoreAntiLagScene(this, debugId, 0);
}

/*
==============
GAntiLagMP::RewindPositions
==============
*/
void GAntiLagMP::RewindPositions(GAntiLagMP *this, const int gameTime, const gentity_s *attacker, bool rewindMainPhysics, bool rewindDetailPhysics, bool permitInvalidEntityRestore, const char *debugId)
{
  int v11; 
  int v12; 
  int v13; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 133, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  v11 = 3251;
  if ( !rewindMainPhysics )
    v11 = 179;
  v12 = v11 | 0x1400;
  if ( !rewindDetailPhysics )
    v12 = v11;
  v13 = v12 | 0x2000;
  if ( !permitInvalidEntityRestore )
    v13 = v12;
  GAntiLag::AntiLagScene(this, gameTime, v13, attacker->s.number, debugId);
}

/*
==============
GAntiLagMP::RewindPositionsInternal
==============
*/
void GAntiLagMP::RewindPositionsInternal(GAntiLagMP *this, const int gameTime, int clientIndex, bool rewindMainPhysics, bool rewindDetailPhysics, bool permitInvalidEntityRestore, const char *debugId)
{
  int v8; 
  int v9; 
  int v10; 

  v8 = 3251;
  if ( !rewindMainPhysics )
    v8 = 179;
  v9 = v8 | 0x1400;
  if ( !rewindDetailPhysics )
    v9 = v8;
  v10 = v9 | 0x2000;
  if ( !permitInvalidEntityRestore )
    v10 = v9;
  GAntiLag::AntiLagScene(this, gameTime, v10, clientIndex, debugId);
}

/*
==============
GAntiLagMP::SaveDebugCharacterPoses
==============
*/
void GAntiLagMP::SaveDebugCharacterPoses(GAntiLagMP *this, GAntilagDebugStoreType storeType)
{
  const dvar_t *v4; 
  int i; 
  const DObj *ServerDObjForEntnum; 
  DObj *v7; 
  gentity_s *v8; 
  AntilagDebugCharacterInfo *AntilagDebugCharacterInfo; 
  __int64 v10; 
  __int64 v11; 
  DObjPartBits partBits; 

  if ( storeType != ANTILAG_DEBUG_STORE_ARCHIVED_POSE )
    goto LABEL_28;
  v4 = DVARBOOL_sv_rewindPoseArchive;
  if ( !DVARBOOL_sv_rewindPoseArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_rewindPoseArchive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
LABEL_28:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( this->m_antilagDebugCharacterCount < (int)ComCharacterLimits::ms_gameData.m_characterCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v11) = ComCharacterLimits::ms_gameData.m_characterCount;
      LODWORD(v10) = this->m_antilagDebugCharacterCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.cpp", 606, ASSERT_TYPE_ASSERT, "( m_antilagDebugCharacterCount ) >= ( ComCharacterLimits::GetCharacterMaxCount() )", "m_antilagDebugCharacterCount >= ComCharacterLimits::GetCharacterMaxCount()\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    for ( i = 0; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      ServerDObjForEntnum = Com_GetServerDObjForEntnum(i);
      v7 = (DObj *)ServerDObjForEntnum;
      if ( ServerDObjForEntnum )
      {
        DObjLock(ServerDObjForEntnum);
        DObjSkelReset(v7);
        DObjUnlock(v7);
        DObjTracelinePartBits(v7, &partBits);
        v8 = SV_GentityNum(i);
        if ( storeType == ANTILAG_DEBUG_STORE_ARCHIVED_POSE )
          G_Utils_DObjCalcAntilagPose(v8, &this->m_rewindSceneInst.poseRewind, &partBits);
        else
          G_Utils_DObjCalcPose(v8, &partBits);
        AntilagDebugCharacterInfo = GAntiLagMP::GetAntilagDebugCharacterInfo(this, storeType, i);
        G_AntilagMP_SaveDebugCharacterPose(i, AntilagDebugCharacterInfo);
      }
    }
  }
}

/*
==============
GAntiLagMP::ShouldPerformBulletFireAntiLag
==============
*/
bool GAntiLagMP::ShouldPerformBulletFireAntiLag(GAntiLagMP *this, const int gameTime, const gentity_s *attacker)
{
  return attacker->client != NULL;
}

/*
==============
GAntiLagMP::ShouldPerformFireMeleeAntiLag
==============
*/
bool GAntiLagMP::ShouldPerformFireMeleeAntiLag(GAntiLagMP *this, const int gameTime, const gentity_s *attacker)
{
  const playerState_s *EntityPlayerStateConst; 
  const dvar_t *v4; 

  EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT|0x80) )
    return 0;
  v4 = DVARBOOL_killswitch_mover_melee_fix_enabled;
  if ( !DVARBOOL_killswitch_mover_melee_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mover_melee_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.enabled && EntityPlayerStateConst && BGMovingPlatformPS::IsOnMovingPlatform(&EntityPlayerStateConst->movingPlatforms);
}

/*
==============
GAntiLagMP::ShouldPerformMuzzlePointAntiLag
==============
*/
char GAntiLagMP::ShouldPerformMuzzlePointAntiLag(GAntiLagMP *this, const int gameTime, const gentity_s *attacker)
{
  return 1;
}

/*
==============
GAntiLagMP::StartSceneArchive
==============
*/
BgAntiLagFrameHistory *GAntiLagMP::StartSceneArchive(GAntiLagMP *this, const bool *clientHasSnapshot, int time)
{
  BgAntiLagFrameHistory *started; 

  started = BgAntiLag::StartSceneArchive(this, clientHasSnapshot, time);
  memset_0(&started[1].entityDataExtended.m_data[17].boneInfo.boneList.m_data[1].dataValid, 0, 0xFC38ui64);
  return started;
}

