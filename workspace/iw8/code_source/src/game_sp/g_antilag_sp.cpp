/*
==============
GAntiLagSP::ArchiveSaveGame
==============
*/

void __fastcall GAntiLagSP::ArchiveSaveGame(GAntiLagSP *this, MemoryFile *memFile)
{
  ?ArchiveSaveGame@GAntiLagSP@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GAntiLagSP::RewindPositions
==============
*/

void __fastcall GAntiLagSP::RewindPositions(GAntiLagSP *this, const int gameTime, const gentity_s *attacker, bool rewindMainPhysics, bool rewindDetailPhysics, bool permitInvalidEntityRestore, const char *debugId)
{
  ?RewindPositions@GAntiLagSP@@MEAAXHPEBUgentity_s@@_N11PEBD@Z(this, gameTime, attacker, rewindMainPhysics, rewindDetailPhysics, permitInvalidEntityRestore, debugId);
}

/*
==============
GAntiLagSP::GAntiLagSP
==============
*/

void __fastcall GAntiLagSP::GAntiLagSP(GAntiLagSP *this)
{
  ??0GAntiLagSP@@QEAA@XZ(this);
}

/*
==============
GAntiLagSP::ArchiveAntilagFrame
==============
*/

void __fastcall GAntiLagSP::ArchiveAntilagFrame(GAntiLagSP *this)
{
  ?ArchiveAntilagFrame@GAntiLagSP@@QEAAXXZ(this);
}

/*
==============
GAntiLagSP::RestorePositions
==============
*/

void __fastcall GAntiLagSP::RestorePositions(GAntiLagSP *this, const gentity_s *attacker, const char *debugId)
{
  ?RestorePositions@GAntiLagSP@@MEAAXPEBUgentity_s@@PEBD@Z(this, attacker, debugId);
}

/*
==============
GAntiLagSP::ShouldPerformBulletFireAntiLag
==============
*/

bool __fastcall GAntiLagSP::ShouldPerformBulletFireAntiLag(GAntiLagSP *this, const int gameTime, const gentity_s *attacker)
{
  return ?ShouldPerformBulletFireAntiLag@GAntiLagSP@@MEBA_NHPEBUgentity_s@@@Z(this, gameTime, attacker);
}

/*
==============
GAntiLagSP::ArchiveCharacter
==============
*/

BgAntiLagEntityHistory *__fastcall GAntiLagSP::ArchiveCharacter(GAntiLagSP *this, gentity_s *ent, BgAntiLagFrameHistory *frameHistory)
{
  return ?ArchiveCharacter@GAntiLagSP@@UEAAPEAUBgAntiLagEntityHistory@@PEAUgentity_s@@PEAUBgAntiLagFrameHistory@@@Z(this, ent, frameHistory);
}

/*
==============
GAntiLagSP::ShouldPerformFireMeleeAntiLag
==============
*/

bool __fastcall GAntiLagSP::ShouldPerformFireMeleeAntiLag(GAntiLagSP *this, const int gameTime, const gentity_s *attacker)
{
  return ?ShouldPerformFireMeleeAntiLag@GAntiLagSP@@MEBA_NHPEBUgentity_s@@@Z(this, gameTime, attacker);
}

/*
==============
GAntiLagSP::ShouldPerformMuzzlePointAntiLag
==============
*/

bool __fastcall GAntiLagSP::ShouldPerformMuzzlePointAntiLag(GAntiLagSP *this, const int gameTime, const gentity_s *attacker)
{
  return ?ShouldPerformMuzzlePointAntiLag@GAntiLagSP@@MEBA_NHPEBUgentity_s@@@Z(this, gameTime, attacker);
}

/*
==============
GAntiLagSP::GetAntilagTraceInfo
==============
*/

SvAntilagArchiveInfo *__fastcall GAntiLagSP::GetAntilagTraceInfo(GAntiLagSP *this)
{
  return ?GetAntilagTraceInfo@GAntiLagSP@@MEAAPEAUSvAntilagArchiveInfo@@XZ(this);
}

/*
==============
GAntiLagSP::GAntiLagSP
==============
*/
void GAntiLagSP::GAntiLagSP(GAntiLagSP *this)
{
  GAntiLagFrameHistorySP *m_antiLagHistoryFrames; 
  __int64 v3; 
  BgAntiLagRewindScene *p_m_rewindSceneInst; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  BgAntiLagEntityHistory *m_entDataList; 
  __int64 v9; 

  BgAntiLag::BgAntiLag(this);
  this->m_debugMethod = ANTILAG_DEBUG_METHOD_DISABLED;
  this->__vftable = (GAntiLagSP_vtbl *)&GAntiLagSP::`vftable';
  m_antiLagHistoryFrames = this->m_antiLagHistoryFrames;
  v3 = 20i64;
  do
  {
    GAntiLagFrameHistorySP::GAntiLagFrameHistorySP(m_antiLagHistoryFrames++);
    --v3;
  }
  while ( v3 );
  p_m_rewindSceneInst = &this->m_rewindSceneInst;
  v5 = 2048i64;
  do
  {
    BgAntiLagRewindEntity::BgAntiLagRewindEntity(p_m_rewindSceneInst->entityBackup.m_data);
    p_m_rewindSceneInst = (BgAntiLagRewindScene *)((char *)p_m_rewindSceneInst + 52);
    --v5;
  }
  while ( v5 );
  this->m_rewindSceneInst.entityBackup.m_usedSize = 0;
  this->m_rewindSceneInst.entityBackup.m_maxSize = 0;
  *(_QWORD *)&this->m_sceneAntiLagRefCount = 0i64;
  this->m_sceneAntiLagTime = 0;
  this->m_antiLagHistorySize = 20;
  v6 = 0;
  do
  {
    memset_0(&this->m_antiLagHistoryFrames[v6], 0, sizeof(this->m_antiLagHistoryFrames[v6]));
    this->m_antiLagHistory[v6] = &this->m_antiLagHistoryFrames[v6];
    v7 = 0i64;
    m_entDataList = this->m_antiLagHistoryFrames[v6].m_entDataList;
    v9 = 300i64;
    do
    {
      this->m_antiLagHistory[v6]->entityDataStandard.m_data[v7] = m_entDataList;
      this->m_antiLagHistory[v6]->entityDataStandard.m_data[v7 + 1] = m_entDataList + 1;
      m_entDataList += 2;
      v7 += 2i64;
      --v9;
    }
    while ( v9 );
    this->m_antiLagHistory[v6++]->entityDataStandard.m_maxSize = 600;
  }
  while ( v6 < this->m_antiLagHistorySize );
  this->m_rewindScene = &this->m_rewindSceneInst;
  *(_WORD *)&this->m_performMissileAntiLag = 0;
}

/*
==============
GAntiLagSP::ArchiveAntilagFrame
==============
*/
void GAntiLagSP::ArchiveAntilagFrame(GAntiLagSP *this)
{
  GAntiLag::ArchiveScene(this, NULL, level.time);
}

/*
==============
GAntiLagSP::ArchiveCharacter
==============
*/
BgAntiLagEntityHistory *GAntiLagSP::ArchiveCharacter(GAntiLagSP *this, gentity_s *ent, BgAntiLagFrameHistory *frameHistory)
{
  entityType_s eType; 
  BgAntiLagEntityHistory *EntityData; 
  _BOOL8 v8; 
  BgAntiLagEntityHistory *v9; 

  eType = ent->s.eType;
  if ( eType != ET_PLAYER && eType != ET_ACTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.cpp", 215, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_PLAYER || ent->s.eType == ET_ACTOR)", (const char *)&queryFormat, "ent->s.eType == ET_PLAYER || ent->s.eType == ET_ACTOR") )
    __debugbreak();
  if ( !ent->r.isInUse )
    return 0i64;
  EntityData = BgAntiLag::AllocateEntityData(this, frameHistory, &ent->s);
  v9 = EntityData;
  if ( !EntityData )
    return 0i64;
  LOBYTE(v8) = 1;
  this->EntityStateToAntiLagEntity(this, ent->s.number, EntityData, v8);
  return v9;
}

/*
==============
GAntiLagSP::ArchiveSaveGame
==============
*/
void GAntiLagSP::ArchiveSaveGame(GAntiLagSP *this, MemoryFile *memFile)
{
  MemoryFile *v2; 
  bool IsWriting; 
  bool v5; 
  __int64 v6; 
  __int64 v7; 
  volatile unsigned int m_usedSize; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  BgAntiLagEntityHistory *v13; 
  __int64 v14; 
  BgAntiLagEntityHistory *v15; 
  unsigned int *p_m_antiLagHistorySize; 
  __int64 i; 
  __int64 v18; 
  GAntiLagFrameHistorySP *v19; 
  unsigned int m_maxSize; 
  BgAntiLagEntityHistory *m_entDataList; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  int *v27; 
  __int64 v28; 
  BgAntiLagEntityHistory *v29; 
  unsigned int v30; 
  unsigned int v31; 
  BgAntiLagEntityHistory *v32; 
  int v33; 
  char v34[8]; 
  __int64 v35; 
  char v36[8]; 
  __int64 v37; 
  int v38[3]; 
  bool v39; 
  int j; 
  int v42; 
  int v43; 
  int v44; 
  volatile unsigned int v45; 

  v37 = -2i64;
  v2 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.cpp", 150, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  IsWriting = MemFile_IsWriting(v2);
  v5 = !IsWriting;
  v39 = !IsWriting;
  if ( IsWriting )
  {
    v6 = 0i64;
    v44 = 0;
    if ( this->m_antiLagHistorySize )
    {
      do
      {
        if ( (unsigned int)v6 >= 0x14 )
          break;
        v7 = (unsigned int)v6;
        v35 = (unsigned int)v6;
        m_usedSize = this->m_antiLagHistory[v6]->entityDataStandard.m_usedSize;
        v9 = 0;
        if ( m_usedSize )
        {
          v10 = 0i64;
          do
          {
            if ( v9 >= 0x258 )
              break;
            v11 = 1132 * v7;
            v12 = 1132 * v7 + v9;
            v13 = &this->m_antiLagHistoryFrames[0].m_entDataList[v12];
            v32 = v13;
            if ( (GAntiLagSP *)((char *)this + v12 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 810, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity", v13) )
              __debugbreak();
            LOWORD(v43) = *(_WORD *)((char *)&v32 + 1);
            BYTE2(v43) = BYTE3(v32);
            HIBYTE(v43) = (_BYTE)v13;
            v38[1] = LODWORD(v13->origin.origin.v[2]) ^ LODWORD(v13->origin.origin.v[0]) ^ v43 ^ s_antilag_aab_Y;
            v38[2] = LODWORD(v13->origin.origin.v[1]) ^ LODWORD(v13->origin.origin.v[2]) ^ v43 ^ s_antilag_aab_Z;
            v38[0] = LODWORD(v13->origin.origin.v[1]) ^ v43 ^ ~s_antilag_aab_X;
            memset(v34, 0, sizeof(v34));
            *(float *)&v32 = *(float *)v38;
            if ( (v38[0] & 0x7F800000) != 2139095040 )
            {
              *(float *)&v32 = *(float *)&v38[1];
              if ( (v38[1] & 0x7F800000) != 2139095040 )
              {
                *(float *)&v32 = *(float *)&v38[2];
                if ( (v38[2] & 0x7F800000) != 2139095040 )
                  continue;
              }
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )", v32) )
              __debugbreak();
            v14 = v10 + v11;
            v15 = &this->m_antiLagHistoryFrames[0].m_entDataList[v14];
            if ( (GAntiLagSP *)((char *)this + v14 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 861, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
              __debugbreak();
            v15->origin.origin.v[0] = *(float *)v38;
            v15->origin.origin.v[1] = *(float *)&v38[1];
            v15->origin.origin.v[2] = *(float *)&v38[2];
            ++v9;
            ++v10;
            v7 = v35;
          }
          while ( v9 < m_usedSize );
          LODWORD(v6) = v44;
        }
        v6 = (unsigned int)(v6 + 1);
        v44 = v6;
      }
      while ( (unsigned int)v6 < this->m_antiLagHistorySize );
      v2 = memFile;
      v5 = v39;
    }
  }
  MemFile_ArchiveData(v2, 1358400, this->m_antiLagHistoryFrames);
  MemFile_ArchiveData(v2, 4, &this->m_antiLagHistorySize);
  MemFile_ArchiveData(v2, 4, &this->m_nextAntiLagHistory);
  p_m_antiLagHistorySize = &this->m_antiLagHistorySize;
  if ( v5 )
  {
    for ( i = 0i64; (unsigned int)i < *p_m_antiLagHistorySize; i = (unsigned int)(i + 1) )
    {
      v18 = (unsigned int)i;
      v19 = &this->m_antiLagHistoryFrames[v18];
      this->m_antiLagHistory[i] = v19;
      m_maxSize = this->m_antiLagHistoryFrames[v18].entityDataStandard.m_maxSize;
      if ( m_maxSize )
      {
        if ( m_maxSize > 0x258 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.cpp", 188, ASSERT_TYPE_ASSERT, "(size <= 600)", (const char *)&queryFormat, "size <= MAX_TOTAL_ANTILAG_PER_FRAME_ENTS") )
            __debugbreak();
          p_m_antiLagHistorySize = &this->m_antiLagHistorySize;
        }
      }
      else
      {
        m_maxSize = 600;
      }
      m_entDataList = v19->m_entDataList;
      v22 = m_maxSize;
      do
      {
        v19->entityDataStandard.m_data[0] = m_entDataList++;
        v19 = (GAntiLagFrameHistorySP *)((char *)v19 + 8);
        --v22;
      }
      while ( v22 );
    }
  }
  v23 = 0i64;
  for ( j = 0; (unsigned int)v23 < *p_m_antiLagHistorySize; j = v23 )
  {
    if ( (unsigned int)v23 >= 0x14 )
      break;
    v45 = this->m_antiLagHistory[v23]->entityDataStandard.m_usedSize;
    v24 = 0;
    if ( v45 )
    {
      v25 = 0i64;
      do
      {
        if ( v24 >= 0x258 )
          break;
        v26 = v25 + 1132i64 * (unsigned int)v23;
        v27 = (int *)&this->m_antiLagHistoryFrames[0].m_entDataList[v26];
        if ( (GAntiLagSP *)((char *)this + v26 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 850, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
          __debugbreak();
        v38[0] = *v27;
        v38[1] = v27[1];
        v38[2] = v27[2];
        v28 = 1132i64 * (unsigned int)v23 + v24;
        v29 = &this->m_antiLagHistoryFrames[0].m_entDataList[v28];
        v33 = (int)v29;
        if ( (GAntiLagSP *)((char *)this + v28 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 830, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity", v29) )
          __debugbreak();
        if ( ((v38[0] & 0x7F800000) == 2139095040 || (v38[1] & 0x7F800000) == 2139095040 || (v38[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 753, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
        LOWORD(v42) = *(_WORD *)((char *)&v33 + 1);
        BYTE2(v42) = HIBYTE(v33);
        HIBYTE(v42) = (_BYTE)v29;
        v30 = v42 ^ v38[0] ^ ~s_antilag_aab_X;
        v31 = s_antilag_aab_Z ^ v42 ^ v30 ^ v38[2];
        LODWORD(v29->origin.origin.v[0]) = s_antilag_aab_Y ^ v42 ^ v31 ^ v38[1];
        LODWORD(v29->origin.origin.v[1]) = v30;
        LODWORD(v29->origin.origin.v[2]) = v31;
        memset(v36, 0, sizeof(v36));
        ++v24;
        ++v25;
      }
      while ( v24 < v45 );
      LODWORD(v23) = j;
      p_m_antiLagHistorySize = &this->m_antiLagHistorySize;
    }
    v23 = (unsigned int)(v23 + 1);
  }
  memset(v38, 0, sizeof(v38));
}

/*
==============
G_AntiLagSP_ShouldFixAim
==============
*/
bool G_AntiLagSP_ShouldFixAim(const gentity_s *attacker, int gameTime)
{
  gclient_s *client; 
  bool result; 

  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.cpp", 44, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  result = 0;
  if ( gameTime != level.time )
  {
    client = attacker->client;
    if ( client )
    {
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
        return 1;
    }
  }
  return result;
}

/*
==============
GAntiLagSP::GetAntilagTraceInfo
==============
*/
SvAntilagArchiveInfo *GAntiLagSP::GetAntilagTraceInfo(GAntiLagSP *this)
{
  return 0i64;
}

/*
==============
GAntiLagSP::RestorePositions
==============
*/
void GAntiLagSP::RestorePositions(GAntiLagSP *this, const gentity_s *attacker, const char *debugId)
{
  this->RestoreAntiLagScene(this, debugId, 0);
}

/*
==============
GAntiLagSP::RewindPositions
==============
*/
void GAntiLagSP::RewindPositions(GAntiLagSP *this, const int gameTime, const gentity_s *attacker, bool rewindMainPhysics, bool rewindDetailPhysics, bool permitInvalidEntityRestore, const char *debugId)
{
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.cpp", 104, ASSERT_TYPE_ASSERT, "( attacker != nullptr )", (const char *)&queryFormat, "attacker != nullptr") )
    __debugbreak();
  this->AntiLagScene(this, gameTime, (permitInvalidEntityRestore << 13) + 7219, attacker->s.number, debugId);
}

/*
==============
GAntiLagSP::ShouldPerformBulletFireAntiLag
==============
*/
bool GAntiLagSP::ShouldPerformBulletFireAntiLag(GAntiLagSP *this, const int gameTime, const gentity_s *attacker)
{
  const playerState_s *EntityPlayerStateConst; 
  bool result; 

  result = 0;
  if ( attacker->client )
  {
    if ( G_AntiLagSP_ShouldFixAim(attacker, gameTime) )
      return 1;
    if ( !G_EntIsLinked(attacker) )
    {
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(attacker);
      if ( !EntityPlayerStateConst || !BGMovingPlatforms::IsOnMovingPlatform(EntityPlayerStateConst) )
        return 1;
    }
  }
  return result;
}

/*
==============
GAntiLagSP::ShouldPerformFireMeleeAntiLag
==============
*/
bool GAntiLagSP::ShouldPerformFireMeleeAntiLag(GAntiLagSP *this, const int gameTime, const gentity_s *attacker)
{
  return G_AntiLagSP_ShouldFixAim(attacker, gameTime);
}

/*
==============
GAntiLagSP::ShouldPerformMuzzlePointAntiLag
==============
*/
bool GAntiLagSP::ShouldPerformMuzzlePointAntiLag(GAntiLagSP *this, const int gameTime, const gentity_s *attacker)
{
  return G_AntiLagSP_ShouldFixAim(attacker, gameTime);
}

