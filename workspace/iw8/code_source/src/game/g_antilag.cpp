/*
==============
GAntiLag::GetOriginForClosestCharacters
==============
*/

void __fastcall GAntiLag::GetOriginForClosestCharacters(GAntiLag *this, int entIndex, vec3_t *outOrigin)
{
  ?GetOriginForClosestCharacters@GAntiLag@@MEAAXHAEATvec3_t@@@Z(this, entIndex, outOrigin);
}

/*
==============
GAntiLag::AntiLagScene
==============
*/

void __fastcall GAntiLag::AntiLagScene(GAntiLag *this, int gameTime, unsigned int contextFlags, int entIndex, const char *debugId)
{
  ?AntiLagScene@GAntiLag@@UEAAXHIHPEBD@Z(this, gameTime, contextFlags, entIndex, debugId);
}

/*
==============
GAntiLag::GetEntityStateAndPhysicsInfo
==============
*/

bool __fastcall GAntiLag::GetEntityStateAndPhysicsInfo(GAntiLag *this, int entIndex, const entityState_t **outEs, const PhysicsObject **outPhysicsObj)
{
  return ?GetEntityStateAndPhysicsInfo@GAntiLag@@MEAA_NHPEAPEBUentityState_t@@PEAPEBVPhysicsObject@@@Z(this, entIndex, outEs, outPhysicsObj);
}

/*
==============
G_Antilag_UpdateClosestEntities
==============
*/

void __fastcall G_Antilag_UpdateClosestEntities(const unsigned int clientNum)
{
  ?G_Antilag_UpdateClosestEntities@@YAXI@Z(clientNum);
}

/*
==============
GAntiLag::AntiLagSceneEnt
==============
*/

void __fastcall GAntiLag::AntiLagSceneEnt(GAntiLag *this, int entIndex, int gameTime, unsigned int contextFlags, const BgAntiLagFrameHistory *startFrame, const BgAntiLagFrameHistory *endFrame, float progress)
{
  ?AntiLagSceneEnt@GAntiLag@@MEAAXHHIPEBUBgAntiLagFrameHistory@@0M@Z(this, entIndex, gameTime, contextFlags, startFrame, endFrame, progress);
}

/*
==============
GAntiLag::RestoreAntiLagScene
==============
*/

void __fastcall GAntiLag::RestoreAntiLagScene(GAntiLag *this, const char *debugId, bool skipWorldUpdate)
{
  ?RestoreAntiLagScene@GAntiLag@@UEAAXPEBD_N@Z(this, debugId, skipWorldUpdate);
}

/*
==============
GAntiLag::ShouldArchiveEntity
==============
*/

bool __fastcall GAntiLag::ShouldArchiveEntity(GAntiLag *this, gentity_s *ent)
{
  return ?ShouldArchiveEntity@GAntiLag@@IEAA_NPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GAntiLag::ArchiveScene
==============
*/

void __fastcall GAntiLag::ArchiveScene(GAntiLag *this, const bool *clientHasSnapshot, int time)
{
  ?ArchiveScene@GAntiLag@@QEAAXQEB_NH@Z(this, clientHasSnapshot, time);
}

/*
==============
GAntiLag::IsWorldUpIncludedOnEntity
==============
*/

bool __fastcall GAntiLag::IsWorldUpIncludedOnEntity(GAntiLag *this, int entIndex)
{
  return ?IsWorldUpIncludedOnEntity@GAntiLag@@UEBA_NH@Z(this, entIndex);
}

/*
==============
GAntiLag::RestoreAntiLagSceneEnt
==============
*/

void __fastcall GAntiLag::RestoreAntiLagSceneEnt(GAntiLag *this, const BgAntiLagRewindEntity *rewindEnt, unsigned int contextFlags)
{
  ?RestoreAntiLagSceneEnt@GAntiLag@@MEAAXPEBUBgAntiLagRewindEntity@@I@Z(this, rewindEnt, contextFlags);
}

/*
==============
GAntiLag::PhysicsWarpEntity
==============
*/

void __fastcall GAntiLag::PhysicsWarpEntity(GAntiLag *this, gentity_s *ent, bool warpMain, bool warpDetail)
{
  ?PhysicsWarpEntity@GAntiLag@@IEAAXPEAUgentity_s@@_N1@Z(this, ent, warpMain, warpDetail);
}

/*
==============
GAntiLag::RewindPlayerMuzzleTrace
==============
*/

void __fastcall GAntiLag::RewindPlayerMuzzleTrace(GAntiLag *this, const int gameTime, int entIndex, vec3_t *origin, vec3_t *angles)
{
  ?RewindPlayerMuzzleTrace@GAntiLag@@QEBAXHHAEATvec3_t@@0@Z(this, gameTime, entIndex, origin, angles);
}

/*
==============
GAntiLag::ProcessBone
==============
*/

void __fastcall GAntiLag::ProcessBone(GAntiLag *this, BgAntiLagBone *bone, const entityState_t *es)
{
  ?ProcessBone@GAntiLag@@MEAAXPEAUBgAntiLagBone@@PEBUentityState_t@@@Z(this, bone, es);
}

/*
==============
GAntiLag::MarkEntitiesForArchiving
==============
*/

void __fastcall GAntiLag::MarkEntitiesForArchiving(GAntiLag *this, BgAntiLagFrameHistory *frame)
{
  ?MarkEntitiesForArchiving@GAntiLag@@MEAAXPEAUBgAntiLagFrameHistory@@@Z(this, frame);
}

/*
==============
G_AntiLag_GetServerSystem
==============
*/

BgAntiLag *__fastcall G_AntiLag_GetServerSystem()
{
  return ?G_AntiLag_GetServerSystem@@YAPEAVBgAntiLag@@XZ();
}

/*
==============
GAntiLag::EntityStateToAntiLagEntity
==============
*/

bool __fastcall GAntiLag::EntityStateToAntiLagEntity(GAntiLag *this, int entityIndex, BgAntiLagEntity *entData, bool allowPSAccess)
{
  return ?EntityStateToAntiLagEntity@GAntiLag@@MEBA_NHPEAUBgAntiLagEntity@@_N@Z(this, entityIndex, entData, allowPSAccess);
}

/*
==============
GAntiLag::AntiLagScene
==============
*/
void GAntiLag::AntiLagScene(GAntiLag *this, int gameTime, unsigned int contextFlags, int entIndex, const char *debugId)
{
  const dvar_t *v5; 
  const dvar_t *v10; 
  char *Value; 
  int *v12; 
  _QWORD *v13; 
  char *v14; 
  int *v15; 
  unsigned __int64 v16; 
  ThreadContext CurrentThreadContext; 
  AntilagDebugMethod m_debugMethod; 
  __int32 v19; 
  __int32 v20; 
  bool Bool_Internal_DebugName; 
  __int64 rewindPoses; 
  __int64 v23; 

  v5 = DVARINT_sv_testValue;
  if ( !DVARINT_sv_testValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_testValue") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( level.time - gameTime > v5->current.integer )
  {
    v10 = DVARINT_sv_testValue;
    if ( !DVARINT_sv_testValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_testValue") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    gameTime = level.time - v10->current.integer;
  }
  if ( BgAntiLag::AntiLagSceneRefcount(this, contextFlags, gameTime, debugId) )
  {
    this->m_numPhysicsCharacterRestoreStates = 0;
    this->m_numPhysicsObjectRestoreStates = 0;
    Value = (char *)Sys_GetValue(0);
    v12 = (int *)(Value + 33216);
    if ( (unsigned int)(*((_DWORD *)Value + 8304) + 1) >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(rewindPoses) = *((_DWORD *)Value + 8304) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", rewindPoses, v23) )
        __debugbreak();
    }
    if ( (unsigned int)++*v12 >= 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(rewindPoses) = *v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", rewindPoses, v23) )
        __debugbreak();
    }
    v13 = Value + 2088;
    v14 = Value + 40;
    if ( *v13 < (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v13 += 8i64;
    if ( *v13 >= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v13 = v12;
    if ( *v13 <= (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v15 = &v12[*v12 + 2];
    v16 = __rdtsc();
    *v15 = v16;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 778, NULL, 0);
    BgAntiLag::ValidateAntiLagScene(this, contextFlags);
    Sys_ProfBeginNamedEvent(0xFFFF0000, "GAntiLag Internal");
    m_debugMethod = this->m_debugMethod;
    if ( m_debugMethod )
    {
      v19 = m_debugMethod - 3;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          BgAntiLag::AntiLagSceneInternal(this, entIndex, entIndex, contextFlags, gameTime, 0);
          this->SaveDebugCharacterPoses(this, ANTILAG_DEBUG_STORE_REWIND);
          goto LABEL_36;
        }
        if ( v20 == 1 )
        {
          BgAntiLag::AntiLagSceneInternal(this, entIndex, entIndex, contextFlags, gameTime, 1);
          this->SaveDebugCharacterPoses(this, ANTILAG_DEBUG_STORE_ARCHIVED_POSE);
LABEL_36:
          Sys_ProfEndNamedEvent();
          if ( (contextFlags & 0x800) == 0 )
            Physics_SetNoQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 1);
          if ( (contextFlags & 0x1000) == 0 )
            Physics_SetNoQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
          Profile_EndInternal(NULL);
          return;
        }
      }
      else
      {
        this->SaveDebugCharacterPoses(this, ANTILAG_DEBUG_STORE_CURRENT);
      }
    }
    Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_rewindPoseArchive, "sv_rewindPoseArchive");
    BgAntiLag::AntiLagSceneInternal(this, entIndex, entIndex, contextFlags, gameTime, Bool_Internal_DebugName);
    goto LABEL_36;
  }
}

/*
==============
GAntiLag::AntiLagSceneEnt
==============
*/
void GAntiLag::AntiLagSceneEnt(GAntiLag *this, int entIndex, int gameTime, unsigned int contextFlags, const BgAntiLagFrameHistory *startFrame, const BgAntiLagFrameHistory *endFrame, float progress)
{
  __int64 v8; 
  gentity_s *v10; 
  const BgAntiLagEntityHistory *EntityDataFromIndex; 
  const BgAntiLagEntityHistory *v12; 
  BgAntiLagRewindEntity *v13; 
  bool v14; 
  bool v15; 
  __int64 m_numPhysicsCharacterRestoreStates; 
  unsigned int m_numPhysicsObjectRestoreStates; 
  __int64 entIndexa; 
  __int64 contextFlagsa; 
  vec3_t outOrigin; 
  vec3_t destPosition; 
  __int64 v22; 
  BgAntiLagEntityInfo outData; 

  v22 = -2i64;
  v8 = entIndex;
  if ( !startFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 70, ASSERT_TYPE_ASSERT, "( startFrame )", (const char *)&queryFormat, "startFrame") )
    __debugbreak();
  if ( !endFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 71, ASSERT_TYPE_ASSERT, "( endFrame )", (const char *)&queryFormat, "endFrame") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(entIndexa) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 72, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndexa, 2048) )
      __debugbreak();
  }
  v10 = &g_entities[v8];
  if ( v10->r.isInUse )
  {
    if ( !BG_IsCharacterEntity(&g_entities[v8].s) || v10->s.eType != ET_PLAYER )
      goto LABEL_18;
    if ( (unsigned int)v8 >= level.maxclients )
    {
      LODWORD(contextFlagsa) = level.maxclients;
      LODWORD(entIndexa) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 86, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( level.maxclients )", "entIndex doesn't index level.maxclients\n\t%i not in [0, %i)", entIndexa, contextFlagsa) )
        __debugbreak();
    }
    if ( level.clients[v8].sess.connected == CON_CONNECTED && level.clients[v8].sess.sessionState == SESS_STATE_PLAYING )
    {
LABEL_18:
      EntityDataFromIndex = BgAntiLag::GetEntityDataFromIndex(this, startFrame, v8);
      v12 = BgAntiLag::GetEntityDataFromIndex(this, endFrame, v8);
      if ( EntityDataFromIndex && v12 )
      {
        v10->flags.m_flags[1] |= 8 * GameModeFlagValues::ms_mpValue;
        v13 = this->AllocNewRewindEnt(this, (unsigned int)v8);
        outData.boneInfo.boneList.m_usedSize = 0;
        outData.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::BlendEntity(this, startFrame, endFrame, NULL, progress, v8, contextFlags, &outData);
        BgAntiLag::CopyPosition(this, v8, &v10->r.currentOrigin, &v10->r.currentAngles, &destPosition, &v13->angles);
        BgAntiLagEntity_SetOrigin(v13, &destPosition);
        BgAntiLagEntity_GetOrigin(&outData, &outOrigin);
        BgAntiLag::CopyPosition(this, v8, &outOrigin, &outData.angles, &v10->r.currentOrigin, &v10->r.currentAngles);
        if ( v10->r.isInUse && (contextFlags & 0x400) != 0 )
        {
          v14 = (contextFlags & 0x800) != 0;
          v15 = (contextFlags & 0x1000) != 0;
          if ( BG_IsCharacterEntity(&v10->s) )
          {
            if ( this->m_numPhysicsCharacterRestoreStates + 2 >= 0x1F0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 822, ASSERT_TYPE_ASSERT, "( m_numPhysicsCharacterRestoreStates + 2 < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS_RESTORE_STATES )", "Too many physics characters being anti-lagged at once; either don't rewind both detail and world or bump the limit.") )
              __debugbreak();
            m_numPhysicsCharacterRestoreStates = this->m_numPhysicsCharacterRestoreStates;
            if ( (unsigned int)(m_numPhysicsCharacterRestoreStates + 2) < 0x1F0 )
              this->m_numPhysicsCharacterRestoreStates += G_PhysicsCharacterProxy_AntilagTeleport(v10, v14, v15, &this->m_physicsCharacterRestoreStates[m_numPhysicsCharacterRestoreStates]);
          }
          else
          {
            if ( this->m_numPhysicsObjectRestoreStates + 2 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 830, ASSERT_TYPE_ASSERT, "( m_numPhysicsObjectRestoreStates + 2 < ( 2048 ) )", "Too many physics objects being anti-lagged at once; either don't rewind both detail and world or bump the limit.") )
              __debugbreak();
            m_numPhysicsObjectRestoreStates = this->m_numPhysicsObjectRestoreStates;
            if ( m_numPhysicsObjectRestoreStates + 2 < 0x800 )
              this->m_numPhysicsObjectRestoreStates += G_PhysicsObject_AntilagWarp(v10, v14, v15, &this->m_physicsObjectRestoreStates[(unsigned __int64)m_numPhysicsObjectRestoreStates]);
          }
          SV_LinkEntity(v10);
        }
        memset(&outOrigin, 0, sizeof(outOrigin));
        memset(&destPosition, 0, sizeof(destPosition));
      }
    }
  }
}

/*
==============
GAntiLag::ArchiveScene
==============
*/
void GAntiLag::ArchiveScene(GAntiLag *this, const bool *clientHasSnapshot, __int64 time)
{
  __int64 v4; 
  BgAntiLagFrameHistory *v5; 
  __int64 v6; 
  gentity_s *v7; 
  entityType_s eType; 
  BgAntiLagEntityHistory *EntityData; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  GHandler *Handler; 
  _BOOL8 v16; 
  unsigned int m_maxSize; 
  unsigned int number; 
  int v19; 
  unsigned int v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 

  v4 = 0i64;
  v5 = this->StartSceneArchive(this, clientHasSnapshot, time);
  v6 = 2048i64;
  do
  {
    v7 = &g_entities[v4];
    if ( g_entities[v4].r.isInUse && BgAntiLag::ShouldArchiveEnt(this, &g_entities[v4].s) )
    {
      eType = v7->s.eType;
      if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
      {
        EntityData = BgAntiLag::AllocateEntityData(this, v5, &v7->s);
        if ( !EntityData )
          goto LABEL_39;
        LOBYTE(v16) = 1;
        this->EntityStateToAntiLagEntity(this, v7->s.number, EntityData, v16);
        m_maxSize = 2048;
        number = v7->s.number;
        if ( v5->otherEntList.m_maxSize )
          m_maxSize = v5->otherEntList.m_maxSize;
        if ( v5->otherEntList.m_usedSize >= m_maxSize )
        {
          v19 = 2048;
          if ( v5->otherEntList.m_maxSize )
            v19 = v5->otherEntList.m_maxSize;
          LODWORD(v23) = v19;
          LODWORD(v22) = v5->otherEntList.m_usedSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 700, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        v20 = 2048;
        if ( v5->otherEntList.m_maxSize )
          v20 = v5->otherEntList.m_maxSize;
        if ( v5->otherEntList.m_usedSize >= v20 )
        {
          v21 = 2048;
          if ( v5->otherEntList.m_maxSize )
            v21 = v5->otherEntList.m_maxSize;
          LODWORD(v23) = v21;
          LODWORD(v22) = v5->otherEntList.m_usedSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        v5->otherEntList.m_data[v5->otherEntList.m_usedSize++] = number;
      }
      else
      {
        EntityData = this->ArchiveCharacter(this, v7, v5);
        if ( !EntityData )
          goto LABEL_39;
        v10 = 248;
        v11 = v7->s.number;
        if ( v5->characterList.m_maxSize )
          v10 = v5->characterList.m_maxSize;
        if ( v5->characterList.m_usedSize >= v10 )
        {
          v12 = 248;
          if ( v5->characterList.m_maxSize )
            v12 = v5->characterList.m_maxSize;
          LODWORD(v23) = v12;
          LODWORD(v22) = v5->characterList.m_usedSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 700, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        v13 = 248;
        if ( v5->characterList.m_maxSize )
          v13 = v5->characterList.m_maxSize;
        if ( v5->characterList.m_usedSize >= v13 )
        {
          v14 = 248;
          if ( v5->characterList.m_maxSize )
            v14 = v5->characterList.m_maxSize;
          LODWORD(v23) = v14;
          LODWORD(v22) = v5->characterList.m_usedSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 691, ASSERT_TYPE_ASSERT, "(unsigned)( m_usedSize ) < (unsigned)( max_size() )", "m_usedSize doesn't index max_size()\n\t%i not in [0, %i)", v22, v23) )
            __debugbreak();
        }
        v5->characterList.m_data[v5->characterList.m_usedSize++] = v11;
        Handler = GHandler::getHandler();
        BgAntiLag::ArchiveClosestCharacters(this, EntityData, Handler);
      }
      BgAntiLag::FinalizeEntityArchive(this, v5, EntityData, &v7->s);
    }
LABEL_39:
    ++v4;
    --v6;
  }
  while ( v6 );
}

/*
==============
GAntiLag::EntityStateToAntiLagEntity
==============
*/
__int64 GAntiLag::EntityStateToAntiLagEntity(GAntiLag *this, int entityIndex, BgAntiLagEntity *entData, bool allowPSAccess)
{
  gentity_s *v8; 
  unsigned __int8 v9; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v11; 
  unsigned int v12; 
  float *p_commandTime; 
  vec3_t *p_angles; 
  float v15; 
  GHandler *Handler; 
  gclient_s *client; 
  float v18; 
  trajectory_t_secure *p_pos; 
  float v20; 
  float v21; 
  int suitIndex; 
  float *doorAngle; 
  float *p_moveType; 
  __int64 v26; 
  __int64 v27; 
  vec3_t origin; 
  __int64 v29[2]; 
  WorldUpReferenceFrame v30; 

  v29[1] = -2i64;
  if ( !entData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 495, ASSERT_TYPE_ASSERT, "(entData)", (const char *)&queryFormat, "entData") )
    __debugbreak();
  if ( (unsigned int)entityIndex >= 0x800 )
  {
    LODWORD(v26) = entityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 496, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, 2048) )
      __debugbreak();
  }
  *(_QWORD *)entData->origin.origin.v = 0i64;
  *(_QWORD *)&entData->origin.origin.z = 0i64;
  *(_QWORD *)&entData->angles.y = 0i64;
  *(_QWORD *)&entData->flags = 0i64;
  *(_QWORD *)&entData->doorAngle[1] = 0i64;
  *(_QWORD *)&entData->doorIndex[1] = 0i64;
  v8 = &g_entities[entityIndex];
  if ( v8->r.isInUse )
  {
    BgAntiLag::EntityStateToAntiLagEntityInternal(this, &g_entities[entityIndex].s, entData);
    if ( (entityIndex < 0 || (unsigned int)entityIndex > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)entityIndex, "signed", entityIndex) )
      __debugbreak();
    entData->entityIndex = entityIndex;
    if ( G_Weapon_EntityHasShield(v8) )
      entData->flags |= 4u;
    if ( !allowPSAccess || (EntityPlayerStateConst = G_GetEntityPlayerStateConst(v8), (v11 = EntityPlayerStateConst) == NULL) )
    {
      entData->angles.v[0] = v8->r.currentAngles.v[0];
      entData->angles.v[1] = v8->r.currentAngles.v[1];
      entData->angles.v[2] = v8->r.currentAngles.v[2];
      origin = v8->r.currentOrigin;
LABEL_54:
      BgAntiLagEntity_SetOrigin(entData, &origin);
      v9 = 1;
      goto LABEL_55;
    }
    v12 = 0;
    if ( BG_IsPlayerLinked(EntityPlayerStateConst) && (p_commandTime = (float *)&v8->client->ps.commandTime) != NULL )
    {
      p_angles = &entData->angles;
      entData->angles.v[0] = p_commandTime[16012];
      entData->angles.v[1] = p_commandTime[16013];
      entData->angles.v[2] = p_commandTime[16014];
    }
    else
    {
      if ( !BG_IsTurretActive(v11) || BG_Turret_IsUsingNonRemoteTurretAndUnlinked(v11) )
        v15 = v8->s.lerp.apos.trBase.v[1];
      else
        v15 = v8->r.currentAngles.v[1];
      p_angles = &entData->angles;
      entData->angles.v[2] = 0.0;
      entData->angles.v[1] = v15;
      entData->angles.v[0] = 0.0;
    }
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v30, v11, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v30, p_angles);
    if ( BG_IsPlayerLinked(v11) && (client = v8->client) != NULL )
    {
      *(_QWORD *)origin.v = *(_QWORD *)client->linkModelOrigin.v;
      v18 = client->linkModelOrigin.v[2];
    }
    else
    {
      p_pos = &v8->s.lerp.pos;
      if ( !p_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
      {
        v29[0] = (__int64)&origin;
        v20 = p_pos->trBase.v[0];
        v21 = p_pos->trBase.v[1];
        LODWORD(origin.v[2]) = s_trbase_aab_Z ^ LODWORD(v21) ^ LODWORD(p_pos->trBase.v[2]);
        LODWORD(origin.v[1]) = s_trbase_aab_Y ^ LODWORD(v20) ^ LODWORD(v21);
        LODWORD(origin.v[0]) = LODWORD(v20) ^ ~s_trbase_aab_X;
        memset(v29, 0, 8ui64);
        *(float *)v29 = origin.v[0];
        if ( (LODWORD(origin.v[0]) & 0x7F800000) == 2139095040 || (*(float *)v29 = origin.v[1], (LODWORD(origin.v[1]) & 0x7F800000) == 2139095040) || (*(float *)v29 = origin.v[2], (LODWORD(origin.v[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
        goto LABEL_39;
      }
      *(_QWORD *)origin.v = *(_QWORD *)p_pos->trBase.v;
      v18 = p_pos->trBase.v[2];
    }
    origin.v[2] = v18;
LABEL_39:
    if ( NetConstStrings_GetCountForType(NETCONSTSTRINGTYPE_SUIT) > 0xFF )
    {
      LODWORD(v27) = 255;
      LODWORD(v26) = NetConstStrings_GetCountForType(NETCONSTSTRINGTYPE_SUIT);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 546, ASSERT_TYPE_ASSERT, "( NetConstStrings_GetCountForType( NETCONSTSTRINGTYPE_SUIT ) ) <= ( 0xffui8 )", "NetConstStrings_GetCountForType( NETCONSTSTRINGTYPE_SUIT ) not in [0, UINT8_MAX]\n\t%u not in [0, %u]", v26, v27) )
        __debugbreak();
    }
    suitIndex = v11->suitIndex;
    if ( (suitIndex < 0 || (unsigned int)suitIndex > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)suitIndex, "signed", suitIndex) )
      __debugbreak();
    entData->suitIndex = suitIndex;
    doorAngle = entData->doorAngle;
    p_moveType = (float *)&v11->doorState[0].moveType;
    do
    {
      doorAngle[2] = *(p_moveType - 3);
      *doorAngle = *(p_moveType - 2);
      if ( *(_DWORD *)p_moveType )
      {
        if ( v12 )
          entData->flags |= 0x40u;
        else
          entData->flags |= 0x20u;
      }
      ++v12;
      ++doorAngle;
      p_moveType += 4;
    }
    while ( v12 < 2 );
    goto LABEL_54;
  }
  v9 = 0;
LABEL_55:
  memset(&origin, 0, sizeof(origin));
  return v9;
}

/*
==============
G_AntiLag_GetServerSystem
==============
*/
GAntiLag *G_AntiLag_GetServerSystem()
{
  GAntiLag *result; 

  result = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    return GAntiLag::ms_gAntiLagData;
  }
  return result;
}

/*
==============
G_Antilag_UpdateClosestEntities
==============
*/
void G_Antilag_UpdateClosestEntities(const unsigned int clientNum)
{
  gentity_s *GEntity; 
  gclient_s *client; 
  int outIgnoreEntIndex; 
  vec3_t outOrigin; 

  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 851, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  GEntity = G_GetGEntity(clientNum);
  client = GEntity->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 855, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&GEntity->s) )
  {
    if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 868, ASSERT_TYPE_ASSERT, "( ps != nullptr )", (const char *)&queryFormat, "ps != nullptr") )
      __debugbreak();
    BgAntiLag::GetAntilagPlayerOrigin(&client->ps, &outIgnoreEntIndex, &outOrigin);
    BgAntiLag::GetNearestEntities(PHYSICS_WORLD_ID_FIRST, &client->ps, outIgnoreEntIndex, &outOrigin, &client->nearEntities);
  }
  else
  {
    *(_QWORD *)client->nearEntities.array = 0i64;
    *(_QWORD *)&client->nearEntities.array[2] = 0i64;
    *(_QWORD *)&client->nearEntities.array[4] = 0i64;
    *(_QWORD *)&client->nearEntities.array[6] = 0i64;
    *(_QWORD *)&client->nearEntities.array[8] = 0i64;
    *(_QWORD *)&client->nearEntities.array[10] = 0i64;
    *(_QWORD *)&client->nearEntities.array[12] = 0i64;
    *(_QWORD *)&client->nearEntities.array[14] = 0i64;
    *(_QWORD *)&client->nearEntities.array[16] = 0i64;
    *(_QWORD *)&client->nearEntities.array[18] = 0i64;
    *(_QWORD *)&client->nearEntities.array[20] = 0i64;
    *(_QWORD *)&client->nearEntities.array[22] = 0i64;
    *(_QWORD *)&client->nearEntities.array[24] = 0i64;
    *(_QWORD *)&client->nearEntities.array[26] = 0i64;
    *(_QWORD *)&client->nearEntities.array[28] = 0i64;
    *(_QWORD *)&client->nearEntities.array[30] = 0i64;
    *(_QWORD *)&client->nearEntities.array[32] = 0i64;
    *(_QWORD *)&client->nearEntities.array[34] = 0i64;
    *(_QWORD *)&client->nearEntities.array[36] = 0i64;
    *(_QWORD *)&client->nearEntities.array[38] = 0i64;
    *(_QWORD *)&client->nearEntities.array[40] = 0i64;
    *(_QWORD *)&client->nearEntities.array[42] = 0i64;
    *(_QWORD *)&client->nearEntities.array[44] = 0i64;
    *(_QWORD *)&client->nearEntities.array[46] = 0i64;
    *(_QWORD *)&client->nearEntities.array[48] = 0i64;
    *(_QWORD *)&client->nearEntities.array[50] = 0i64;
    *(_QWORD *)&client->nearEntities.array[52] = 0i64;
    *(_QWORD *)&client->nearEntities.array[54] = 0i64;
    *(_QWORD *)&client->nearEntities.array[56] = 0i64;
    *(_QWORD *)&client->nearEntities.array[58] = 0i64;
    *(_QWORD *)&client->nearEntities.array[60] = 0i64;
    *(_QWORD *)&client->nearEntities.array[62] = 0i64;
  }
}

/*
==============
GAntiLag::GetEntityStateAndPhysicsInfo
==============
*/
bool GAntiLag::GetEntityStateAndPhysicsInfo(GAntiLag *this, int entIndex, const entityState_t **outEs, const PhysicsObject **outPhysicsObj)
{
  __int64 v4; 
  gentity_s *v7; 
  bool result; 
  int v10; 

  v4 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 )
  {
    v10 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 801, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, v10) )
      __debugbreak();
  }
  v7 = &g_entities[v4];
  if ( !v7->r.isInUse )
    return 0;
  *outPhysicsObj = G_PhysicsObject_Get(v7);
  result = 1;
  *outEs = &v7->s;
  return result;
}

/*
==============
GAntiLag::GetOriginForClosestCharacters
==============
*/
void GAntiLag::GetOriginForClosestCharacters(GAntiLag *this, int entIndex, vec3_t *outOrigin)
{
  *outOrigin = G_GetGEntity(entIndex)->r.currentOrigin;
}

/*
==============
GAntiLag::IsWorldUpIncludedOnEntity
==============
*/
bool GAntiLag::IsWorldUpIncludedOnEntity(GAntiLag *this, int entIndex)
{
  __int64 v2; 
  int IsEntityInUse; 
  int v7; 

  v2 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 41, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, v7) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_LADDER_AIM|0x80) )
  {
    IsEntityInUse = G_IsEntityInUse(v2);
    if ( IsEntityInUse )
      LOBYTE(IsEntityInUse) = ((8 * GameModeFlagValues::ms_mpValue) & g_entities[v2].flags.m_flags[1]) != 0;
  }
  else
  {
    LOBYTE(IsEntityInUse) = this->m_sceneAntiLagRefCount > 0;
  }
  return IsEntityInUse;
}

/*
==============
GAntiLag::MarkEntitiesForArchiving
==============
*/
void GAntiLag::MarkEntitiesForArchiving(GAntiLag *this, BgAntiLagFrameHistory *frame)
{
  const char *v3; 
  __int64 v4; 
  __int64 v5; 
  const char *MapName; 
  char v7; 
  __int64 v8; 
  char v9; 
  char v10; 
  unsigned int i; 
  gentity_s *v12; 
  playerState_s *EntityPlayerState; 
  const char *v14; 
  __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  const char *v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  const char *v23; 
  __int64 v24; 
  char v25; 
  __int64 v26; 
  char v27; 
  __int64 v28; 
  unsigned int v29; 
  __int64 v30; 
  gentity_s *v31; 
  entityType_s eType; 
  playerState_s *v33; 
  int entity; 
  __int16 linkEnt; 
  gentity_s *GEntity; 
  bool IsVehicleEntity; 
  int v38; 
  __int16 viewlocked_entNum; 
  unsigned __int16 number; 
  __int64 v41; 
  unsigned int v42; 
  __int64 v43; 
  unsigned __int16 v44; 
  __int64 v45; 
  __int64 v46; 
  int v47; 
  entityType_s v48; 
  const float *v; 
  int v50; 
  const dvar_t *v51; 
  G_PhysicsObject *v52; 
  unsigned int v53; 
  unsigned int v54; 
  int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  int RigidBodyContents; 
  int v58; 
  __int64 v59; 
  __int64 v60; 
  char v61; 
  unsigned int v62; 
  __int64 v63; 
  int outIgnoreEntIndex; 
  hknpBodyId result; 
  BgAntiLagFrameHistory *framea; 
  float v1[4]; 
  vec3_t outOrigin; 

  framea = frame;
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 577, ASSERT_TYPE_ASSERT, "(frame)", (const char *)&queryFormat, "frame") )
    __debugbreak();
  v3 = "mp_donetsk";
  v4 = 10i64;
  v5 = 10i64;
  MapName = SV_Game_GetMapName();
  if ( !MapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v7 = v3[MapName - "mp_donetsk"];
    v8 = v5;
    v9 = *v3++;
    --v5;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      v14 = "mp_br_sector";
      v15 = 12i64;
      if ( !MapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v16 = v14[MapName - "mp_br_sector"];
        v17 = v15;
        v18 = *v14++;
        --v15;
        if ( !v17 )
          goto LABEL_10;
        if ( v16 != v18 )
        {
          v19 = "mp_kstenod";
          if ( !MapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v20 = v19[MapName - "mp_kstenod"];
            v21 = v4;
            v22 = *v19++;
            --v4;
            if ( !v21 )
              goto LABEL_10;
            if ( v20 != v22 )
            {
              v23 = "mp_don";
              v24 = 6i64;
              if ( !MapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                __debugbreak();
              do
              {
                v25 = v23[MapName - "mp_don"];
                v26 = v24;
                v27 = *v23++;
                --v24;
                if ( !v26 )
                  break;
                if ( v25 != v27 )
                  goto LABEL_48;
              }
              while ( v25 );
              v28 = -1i64;
              do
                ++v28;
              while ( MapName[v28] );
              if ( (unsigned int)v28 <= 6 || (unsigned __int8)(MapName[6] - 48) > 9u )
              {
LABEL_48:
                v10 = 0;
                goto LABEL_11;
              }
              goto LABEL_10;
            }
            if ( !v20 )
              goto LABEL_10;
          }
        }
        if ( !v16 )
          goto LABEL_10;
      }
    }
  }
  while ( v7 );
LABEL_10:
  v10 = 1;
LABEL_11:
  v61 = v10;
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    for ( i = 0; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      v12 = &g_entities[i];
      if ( v12->r.isInUse )
      {
        EntityPlayerState = G_GetEntityPlayerState(v12);
        if ( EntityPlayerState )
        {
          if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 212, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
            __debugbreak();
          EntityPlayerState->pm_flags.m_flags[1] &= ~0x4000000u;
        }
      }
    }
    v10 = v61;
  }
  v29 = 0;
  v62 = 0;
  v30 = 0i64;
  v63 = 0i64;
  do
  {
    v31 = &g_entities[v30];
    if ( !v31->r.isInUse )
      goto LABEL_148;
    eType = v31->s.eType;
    if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM )
    {
      BgAntiLag::MarkPreArchiveFlag(this, v31->s.number, 3);
      if ( v31->client )
      {
        v33 = G_GetEntityPlayerState(v31);
        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 638, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        entity = v33->vehicleState.entity;
        if ( entity && entity != 2047 )
          BgAntiLag::MarkPreArchiveFlag(this, entity, 3);
        linkEnt = v33->linkEnt;
        if ( linkEnt && linkEnt != 2047 )
        {
          GEntity = G_GetGEntity(linkEnt);
          IsVehicleEntity = BG_IsVehicleEntity(&GEntity->s);
          v38 = 3;
          if ( !IsVehicleEntity )
            v38 = 6;
          BgAntiLag::MarkPreArchiveFlag(this, v33->linkEnt, v38);
        }
        if ( BG_IsTurretActiveFlags(&v33->eFlags) )
        {
          viewlocked_entNum = v33->viewlocked_entNum;
          if ( viewlocked_entNum != 2047 )
            BgAntiLag::MarkPreArchiveFlag(this, viewlocked_entNum, 1);
        }
        if ( BGMovingPlatforms::IsOnMovingPlatform(v33) )
          BgAntiLag::MarkPreArchiveFlag(this, v33->movingPlatforms.m_movingPlatformEntity, 6);
        BgAntiLag::GetAntilagPlayerOrigin(v33, &outIgnoreEntIndex, &outOrigin);
        BgAntiLag::MarkBroadPhaseEntsForUpdate(this, framea, v33, &outOrigin, &v31->client->nearEntities);
      }
      goto LABEL_148;
    }
    if ( BG_IsTurretActiveFlags(&v31->s.lerp.eFlags) )
    {
      number = v31->r.ownerNum.number;
      if ( number )
      {
        v41 = number;
        v42 = number - 1;
        if ( v42 >= 0x800 )
        {
          LODWORD(v60) = 2048;
          LODWORD(v59) = v42;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v59, v60) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v43 = v41 - 1;
        if ( g_entities[v43].r.isInUse != g_entityIsInUse[v43] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v43] )
        {
          LODWORD(v60) = v31->r.ownerNum.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v60) )
            __debugbreak();
        }
        v44 = v31->r.ownerNum.number;
        if ( v44 )
        {
          if ( (unsigned int)v44 - 1 >= 0x7FF )
          {
            LODWORD(v60) = 2047;
            LODWORD(v59) = v44 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v59, v60) )
              __debugbreak();
          }
          v45 = v31->r.ownerNum.number;
          if ( (unsigned int)(v45 - 1) >= 0x800 )
          {
            LODWORD(v60) = 2048;
            LODWORD(v59) = v45 - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v59, v60) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          v46 = v45 - 1;
          if ( g_entities[v46].r.isInUse != g_entityIsInUse[v46] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v46] )
          {
            LODWORD(v60) = v31->r.ownerNum.number - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v60) )
              __debugbreak();
          }
          if ( g_entities[v31->r.ownerNum.number - 1].client )
          {
            v47 = 4;
LABEL_147:
            BgAntiLag::MarkPreArchiveFlag(this, v31->s.number, v47);
            goto LABEL_148;
          }
        }
      }
      goto LABEL_148;
    }
    v48 = v31->s.eType;
    if ( v48 == ET_SCRIPTMOVER && v31->s.un.scriptMoverType == 1 )
    {
      BgAntiLag::MarkPreArchiveFlag(this, v31->s.number, 11);
      goto LABEL_148;
    }
    if ( ((v48 - 12) & 0xFFFD) == 0 )
    {
      if ( !v31->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 722, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      v = v31->vehicle->phys.vel.v;
      v1[0] = 0.0;
      v1[1] = 0.0;
      v1[2] = 0.0;
      if ( !VecNCompareCustomEpsilon(v, v1, 0.001, 3) )
      {
        v50 = v31->s.number;
        if ( v10 )
          BgAntiLag::MarkPreArchiveFlag(this, v50, 6);
        else
          BgAntiLag::MarkPreArchiveFlag(this, v50, 3);
      }
      goto LABEL_148;
    }
    if ( v48 == ET_SCRIPTMOVER && (v31->s.staticState.vehiclePlayer.playerIndex & 0x40) != 0 )
    {
      BgAntiLag::MarkPreArchiveFlag(this, v31->s.number, 3);
      goto LABEL_148;
    }
    v51 = DCONST_DVARMPBOOL_antilagAutoIncludeMovers;
    if ( !DCONST_DVARMPBOOL_antilagAutoIncludeMovers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagAutoIncludeMovers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    if ( v51->current.enabled )
    {
      if ( v31->s.eType != ET_SCRIPTMOVER )
      {
        if ( !BG_IsVehicleEntity(&v31->s) )
          goto LABEL_148;
        v47 = 6;
        goto LABEL_147;
      }
      v52 = G_PhysicsObject_Get(v31);
      if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 760, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
        __debugbreak();
      v53 = v52->physicsInstances[0];
      if ( v53 != -1 )
      {
        v54 = 0;
        NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v53);
        if ( NumRigidBodys > 0 )
        {
          while ( 1 )
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( !g_physicsServerWorldsCreated )
            {
              LODWORD(v60) = 0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v60) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v53, v54)->m_serialAndIndex;
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 768, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            RigidBodyContents = Physics_GetRigidBodyContents(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex);
            if ( (RigidBodyContents & 0x2014011) != 0 )
              break;
            if ( (RigidBodyContents & 0x2806931) != 0 )
            {
              v58 = 4;
              goto LABEL_141;
            }
LABEL_142:
            if ( (int)++v54 >= NumRigidBodys )
            {
              v30 = v63;
              v29 = v62;
              goto LABEL_148;
            }
          }
          v58 = 6;
LABEL_141:
          BgAntiLag::MarkPreArchiveFlag(this, v31->s.number, v58);
          goto LABEL_142;
        }
      }
    }
LABEL_148:
    v10 = v61;
    ++v29;
    ++v30;
    v62 = v29;
    v63 = v30;
  }
  while ( v29 < 0x800 );
}

/*
==============
GAntiLag::PhysicsWarpEntity
==============
*/
void GAntiLag::PhysicsWarpEntity(GAntiLag *this, gentity_s *ent, bool warpMain, bool warpDetail)
{
  __int64 m_numPhysicsCharacterRestoreStates; 
  unsigned int m_numPhysicsObjectRestoreStates; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 817, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&ent->s) )
  {
    if ( this->m_numPhysicsCharacterRestoreStates + 2 >= 0x1F0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 822, ASSERT_TYPE_ASSERT, "( m_numPhysicsCharacterRestoreStates + 2 < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS_RESTORE_STATES )", "Too many physics characters being anti-lagged at once; either don't rewind both detail and world or bump the limit.") )
      __debugbreak();
    m_numPhysicsCharacterRestoreStates = this->m_numPhysicsCharacterRestoreStates;
    if ( (unsigned int)(m_numPhysicsCharacterRestoreStates + 2) < 0x1F0 )
      this->m_numPhysicsCharacterRestoreStates += G_PhysicsCharacterProxy_AntilagTeleport(ent, warpMain, warpDetail, &this->m_physicsCharacterRestoreStates[m_numPhysicsCharacterRestoreStates]);
  }
  else
  {
    if ( this->m_numPhysicsObjectRestoreStates + 2 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 830, ASSERT_TYPE_ASSERT, "( m_numPhysicsObjectRestoreStates + 2 < ( 2048 ) )", "Too many physics objects being anti-lagged at once; either don't rewind both detail and world or bump the limit.") )
      __debugbreak();
    m_numPhysicsObjectRestoreStates = this->m_numPhysicsObjectRestoreStates;
    if ( m_numPhysicsObjectRestoreStates + 2 < 0x800 )
      this->m_numPhysicsObjectRestoreStates += G_PhysicsObject_AntilagWarp(ent, warpMain, warpDetail, &this->m_physicsObjectRestoreStates[(unsigned __int64)m_numPhysicsObjectRestoreStates]);
  }
}

/*
==============
GAntiLag::ProcessBone
==============
*/
void GAntiLag::ProcessBone(GAntiLag *this, BgAntiLagBone *bone, const entityState_t *es)
{
  gentity_s *v5; 

  if ( !bone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 314, ASSERT_TYPE_ASSERT, "(bone)", (const char *)&queryFormat, "bone") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 315, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v5 = &g_entities[es->number];
  if ( v5->r.isInUse )
  {
    if ( G_Utils_DObjGetWorldTagPos(v5, bone->boneId, &bone->origin) )
      bone->dataValid = 1;
  }
}

/*
==============
GAntiLag::RestoreAntiLagScene
==============
*/
void GAntiLag::RestoreAntiLagScene(GAntiLag *this, const char *debugId, bool skipWorldUpdate)
{
  unsigned int m_sceneAntiLagContext; 

  m_sceneAntiLagContext = this->m_sceneAntiLagContext;
  if ( BgAntiLag::RestoreAntiLagSceneRefcount(this, debugId) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "GAntiLag RestoreAntiLagScene");
    Sys_ProfBeginNamedEvent(0xFFFF0000, "GAntiLag RestoreAntiLagScene Internal");
    BgAntiLag::RestoreAntiLagSceneInternal(this, m_sceneAntiLagContext);
    Sys_ProfEndNamedEvent();
    G_PhysicsCharacterProxy_AntilagRestore(this->m_physicsCharacterRestoreStates, this->m_numPhysicsCharacterRestoreStates, (m_sceneAntiLagContext & 0x2000) != 0);
    G_PhysicsObject_AntilagRestore(this->m_physicsObjectRestoreStates, this->m_numPhysicsObjectRestoreStates, (m_sceneAntiLagContext & 0x2000) != 0);
    if ( (m_sceneAntiLagContext & 0x800) != 0 )
    {
      if ( !skipWorldUpdate )
        Physics_ClearAntilagFlags(PHYSICS_WORLD_ID_FIRST);
    }
    else
    {
      Physics_SetNoQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 0);
    }
    if ( (m_sceneAntiLagContext & 0x1000) != 0 )
    {
      if ( !skipWorldUpdate )
        Physics_ClearAntilagFlags(PHYSICS_WORLD_ID_SERVER_DETAIL);
    }
    else
    {
      Physics_SetNoQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
GAntiLag::RestoreAntiLagSceneEnt
==============
*/
void GAntiLag::RestoreAntiLagSceneEnt(GAntiLag *this, const BgAntiLagRewindEntity *rewindEnt, unsigned int contextFlags)
{
  __int16 v3; 
  gentity_s *v6; 
  vec3_t *destAngles; 
  vec3_t outOrigin; 

  v3 = contextFlags;
  if ( !rewindEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 227, ASSERT_TYPE_ASSERT, "(rewindEnt)", (const char *)&queryFormat, "rewindEnt") )
    __debugbreak();
  if ( rewindEnt->entIndex >= 0x800u )
  {
    LODWORD(destAngles) = rewindEnt->entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( rewindEnt->entIndex ) < (unsigned)( ( 2048 ) )", "rewindEnt->entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", destAngles, 2048) )
      __debugbreak();
  }
  v6 = &g_entities[rewindEnt->entIndex];
  v6->flags.m_flags[1] &= ~(8 * GameModeFlagValues::ms_mpValue);
  BgAntiLagEntity_GetOrigin(rewindEnt, &outOrigin);
  BgAntiLag::CopyPosition(this, v6->s.number, &outOrigin, &rewindEnt->angles, &v6->r.currentOrigin, &v6->r.currentAngles);
  if ( v6->r.isInUse && (v3 & 0x400) != 0 )
    SV_LinkEntity(v6);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
GAntiLag::RewindPlayerMuzzleTrace
==============
*/
void GAntiLag::RewindPlayerMuzzleTrace(GAntiLag *this, const int gameTime, int entIndex, vec3_t *origin, vec3_t *angles)
{
  __int64 v6; 
  gentity_s *v9; 
  const playerState_s *EntityPlayerStateConst; 
  EntityTagInfo *tagInfo; 
  int number; 
  vec3_t v13; 
  vec3_t origina; 
  vec3_t outOrigin; 
  __int64 v16; 
  tmat43_t<vec3_t> v17; 
  tmat43_t<vec3_t> in; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> v21; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> v23; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> v25; 
  tmat43_t<vec3_t> v26; 
  BgAntiLagEntityInfo outInfo; 
  BgAntiLagEntityInfo v28; 
  BgAntiLagEntityInfo v29; 

  v16 = -2i64;
  v6 = entIndex;
  if ( (unsigned int)entIndex >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 407, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "entIndex doesn't index MAX_ANTILAG_CLIENT_AGENTS\n\t%i not in [0, %i)", entIndex, 248) )
    __debugbreak();
  v9 = &g_entities[v6];
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(v9);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 411, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  tagInfo = v9->tagInfo;
  if ( tagInfo && tagInfo->parent )
  {
    number = tagInfo->parent->s.number;
  }
  else
  {
    if ( !BGMovingPlatformPS::IsOnMovingPlatform(&EntityPlayerStateConst->movingPlatforms) )
      return;
    number = EntityPlayerStateConst->movingPlatforms.m_movingPlatformEntity;
  }
  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  BgAntiLag::GetEntityInfoAtTime(this, EntityPlayerStateConst->clientNum, v6, 3u, level.time, &outInfo);
  v28.boneInfo.boneList.m_usedSize = 0;
  v28.boneInfo.boneList.m_maxSize = 0;
  BgAntiLag::GetEntityInfoAtTime(this, EntityPlayerStateConst->clientNum, number, 3u, level.time, &v28);
  v29.boneInfo.boneList.m_usedSize = 0;
  v29.boneInfo.boneList.m_maxSize = 0;
  BgAntiLag::GetEntityInfoAtTime(this, EntityPlayerStateConst->clientNum, number, 3u, gameTime, &v29);
  AnglesAndOriginToMatrix43(angles, origin, &result);
  BgAntiLagEntity_GetOrigin(&outInfo, &outOrigin);
  AnglesAndOriginToMatrix43(&outInfo.angles, &outOrigin, &in);
  MatrixInverseOrthogonal43(&in, &out);
  MatrixMultiply43(&result, &out, &in1);
  BgAntiLagEntity_GetOrigin(&v28, &origina);
  AnglesAndOriginToMatrix43(&v28.angles, &origina, &v21);
  MatrixInverseOrthogonal43(&v21, &in2);
  MatrixMultiply43(&in, &in2, &v23);
  BgAntiLagEntity_GetOrigin(&v29, &v13);
  AnglesAndOriginToMatrix43(&v29.angles, &v13, &v25);
  MatrixMultiply43(&in1, &v23, &v26);
  MatrixMultiply43(&v26, &v25, &v17);
  if ( this->ShouldApplyMuzzleRewindAngles(this) )
    AxisToAngles((const tmat33_t<vec3_t> *)&v17, angles);
  *origin = v17.m[3];
  memset(&v13, 0, sizeof(v13));
  memset(&origina, 0, sizeof(origina));
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
GAntiLag::ShouldArchiveEntity
==============
*/
bool GAntiLag::ShouldArchiveEntity(GAntiLag *this, gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 305, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.cpp", 306, ASSERT_TYPE_ASSERT, "(ent->r.isInUse)", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  return BgAntiLag::ShouldArchiveEnt(this, &ent->s);
}

