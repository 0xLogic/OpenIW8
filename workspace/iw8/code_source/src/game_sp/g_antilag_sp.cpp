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
  __int64 v17; 
  unsigned int *p_m_antiLagHistorySize; 
  __int64 i; 
  __int64 v24; 
  GAntiLagFrameHistorySP *v25; 
  unsigned int m_maxSize; 
  BgAntiLagEntityHistory *m_entDataList; 
  __int64 v28; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v37; 
  BgAntiLagEntityHistory *v38; 
  unsigned int v42; 
  unsigned int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  char v49[8]; 
  __int64 v50; 
  char v51[8]; 
  __int64 v52; 
  int v53[3]; 
  bool v54; 
  int j; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  volatile unsigned int v63; 

  v52 = -2i64;
  v2 = memFile;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.cpp", 150, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  IsWriting = MemFile_IsWriting(v2);
  v5 = !IsWriting;
  v54 = !IsWriting;
  if ( IsWriting )
  {
    v6 = 0i64;
    v62 = 0;
    if ( this->m_antiLagHistorySize )
    {
      do
      {
        if ( (unsigned int)v6 >= 0x14 )
          break;
        v7 = (unsigned int)v6;
        v50 = (unsigned int)v6;
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
            v44 = (int)v13;
            if ( (GAntiLagSP *)((char *)this + v12 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 810, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity", v13) )
              __debugbreak();
            LOWORD(v58) = *(_WORD *)((char *)&v44 + 1);
            BYTE2(v58) = HIBYTE(v44);
            HIBYTE(v58) = (_BYTE)v13;
            v53[1] = LODWORD(v13->origin.origin.v[2]) ^ LODWORD(v13->origin.origin.v[0]) ^ v58 ^ s_antilag_aab_Y;
            v53[2] = LODWORD(v13->origin.origin.v[1]) ^ LODWORD(v13->origin.origin.v[2]) ^ v58 ^ s_antilag_aab_Z;
            v53[0] = LODWORD(v13->origin.origin.v[1]) ^ v58 ^ ~s_antilag_aab_X;
            memset(v49, 0, sizeof(v49));
            __asm
            {
              vmovss  xmm0, [rbp+var_20]
              vmovss  dword ptr [rbp+var_48], xmm0
            }
            if ( (v45 & 0x7F800000) == 2139095040 )
              goto LABEL_59;
            __asm
            {
              vmovss  xmm0, [rbp+var_1C]
              vmovss  dword ptr [rbp+var_48], xmm0
            }
            if ( (v46 & 0x7F800000) == 2139095040 )
              goto LABEL_59;
            __asm
            {
              vmovss  xmm0, [rbp+var_18]
              vmovss  dword ptr [rbp+var_48], xmm0
            }
            if ( (v47 & 0x7F800000) == 2139095040 )
            {
LABEL_59:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
            }
            v17 = v10 + v11;
            _RDI = &this->m_antiLagHistoryFrames[0].m_entDataList[v17];
            if ( (GAntiLagSP *)((char *)this + v17 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 861, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, [rbp+var_20]
              vmovss  dword ptr [rdi], xmm0
              vmovss  xmm1, [rbp+var_1C]
              vmovss  dword ptr [rdi+4], xmm1
              vmovss  xmm0, [rbp+var_18]
              vmovss  dword ptr [rdi+8], xmm0
            }
            ++v9;
            ++v10;
            v7 = v50;
          }
          while ( v9 < m_usedSize );
          LODWORD(v6) = v62;
        }
        v6 = (unsigned int)(v6 + 1);
        v62 = v6;
      }
      while ( (unsigned int)v6 < this->m_antiLagHistorySize );
      v2 = memFile;
      v5 = v54;
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
      v24 = (unsigned int)i;
      v25 = &this->m_antiLagHistoryFrames[v24];
      this->m_antiLagHistory[i] = v25;
      m_maxSize = this->m_antiLagHistoryFrames[v24].entityDataStandard.m_maxSize;
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
      m_entDataList = v25->m_entDataList;
      v28 = m_maxSize;
      do
      {
        v25->entityDataStandard.m_data[0] = m_entDataList++;
        v25 = (GAntiLagFrameHistorySP *)((char *)v25 + 8);
        --v28;
      }
      while ( v28 );
    }
  }
  v29 = 0i64;
  for ( j = 0; (unsigned int)v29 < *p_m_antiLagHistorySize; j = v29 )
  {
    if ( (unsigned int)v29 >= 0x14 )
      break;
    v63 = this->m_antiLagHistory[v29]->entityDataStandard.m_usedSize;
    v30 = 0;
    if ( v63 )
    {
      v31 = 0i64;
      do
      {
        if ( v30 >= 0x258 )
          break;
        v32 = v31 + 1132i64 * (unsigned int)v29;
        _RDI = &this->m_antiLagHistoryFrames[0].m_entDataList[v32];
        if ( (GAntiLagSP *)((char *)this + v32 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 850, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rdi]
          vmovss  [rbp+var_20], xmm0
          vmovss  xmm1, dword ptr [rdi+4]
          vmovss  [rbp+var_1C], xmm1
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  [rbp+var_18], xmm0
        }
        v37 = 1132i64 * (unsigned int)v29 + v30;
        v38 = &this->m_antiLagHistoryFrames[0].m_entDataList[v37];
        v48 = (int)v38;
        if ( (GAntiLagSP *)((char *)this + v37 * 60) == (GAntiLagSP *)-226912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 830, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity", v38) )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, [rbp+var_20]
          vmovss  [rbp+arg_10], xmm0
        }
        if ( (v59 & 0x7F800000) == 2139095040 )
          goto LABEL_60;
        __asm
        {
          vmovss  xmm0, [rbp+var_1C]
          vmovss  [rbp+arg_10], xmm0
        }
        if ( (v60 & 0x7F800000) == 2139095040 )
          goto LABEL_60;
        __asm
        {
          vmovss  xmm0, [rbp+var_18]
          vmovss  [rbp+arg_10], xmm0
        }
        if ( (v61 & 0x7F800000) == 2139095040 )
        {
LABEL_60:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 753, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        LOWORD(v57) = *(_WORD *)((char *)&v48 + 1);
        BYTE2(v57) = HIBYTE(v48);
        HIBYTE(v57) = (_BYTE)v38;
        v42 = v57 ^ v53[0] ^ ~s_antilag_aab_X;
        v43 = s_antilag_aab_Z ^ v57 ^ v42 ^ v53[2];
        LODWORD(v38->origin.origin.v[0]) = s_antilag_aab_Y ^ v57 ^ v43 ^ v53[1];
        LODWORD(v38->origin.origin.v[1]) = v42;
        LODWORD(v38->origin.origin.v[2]) = v43;
        memset(v51, 0, sizeof(v51));
        ++v30;
        ++v31;
      }
      while ( v30 < v63 );
      LODWORD(v29) = j;
      p_m_antiLagHistorySize = &this->m_antiLagHistorySize;
    }
    v29 = (unsigned int)(v29 + 1);
  }
  memset(v53, 0, sizeof(v53));
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

