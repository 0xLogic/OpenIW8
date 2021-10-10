/*
==============
CgAntiLag::DrawDebugCountMovingEnts
==============
*/

void __fastcall CgAntiLag::DrawDebugCountMovingEnts(LocalClientNum_t localClientNum, BgAntiLagFrameHistory *frame, DebugAntilagCollector *collector, bool drawMovers)
{
  ?DrawDebugCountMovingEnts@CgAntiLag@@SAXW4LocalClientNum_t@@PEAUBgAntiLagFrameHistory@@PEAUDebugAntilagCollector@@_N@Z(localClientNum, frame, collector, drawMovers);
}

/*
==============
CgAntiLag::AntiLagSceneEnt
==============
*/

void __fastcall CgAntiLag::AntiLagSceneEnt(CgAntiLag *this, int entIndex, int gameTime, unsigned int contextFlags, const BgAntiLagFrameHistory *startFrame, const BgAntiLagFrameHistory *endFrame, float progress)
{
  ?AntiLagSceneEnt@CgAntiLag@@MEAAXHHIPEBUBgAntiLagFrameHistory@@0M@Z(this, entIndex, gameTime, contextFlags, startFrame, endFrame, progress);
}

/*
==============
CgAntiLag::AntiLagScene
==============
*/

void __fastcall CgAntiLag::AntiLagScene(CgAntiLag *this, const int gameTime, unsigned int contextFlags, int entIndex, const char *debugId)
{
  ?AntiLagScene@CgAntiLag@@UEAAXHIHPEBD@Z(this, gameTime, contextFlags, entIndex, debugId);
}

/*
==============
CgAntiLag::ResetClientHistory
==============
*/

void __fastcall CgAntiLag::ResetClientHistory(const LocalClientNum_t localClientNum)
{
  ?ResetClientHistory@CgAntiLag@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLag::IsDisabledForMigration
==============
*/

bool __fastcall CgAntiLag::IsDisabledForMigration(const LocalClientNum_t localClientNum)
{
  return ?IsDisabledForMigration@CgAntiLag@@SA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLag::StartSceneArchiveClient
==============
*/

void __fastcall CgAntiLag::StartSceneArchiveClient(CgAntiLag *this, int time)
{
  ?StartSceneArchiveClient@CgAntiLag@@QEAAXH@Z(this, time);
}

/*
==============
CgAntiLag::ArchiveDelayedEntity
==============
*/

void __fastcall CgAntiLag::ArchiveDelayedEntity(CgAntiLag *this, centity_t *cent)
{
  ?ArchiveDelayedEntity@CgAntiLag@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgAntiLag::ArchiveEntity
==============
*/

void __fastcall CgAntiLag::ArchiveEntity(CgAntiLag *this, const centity_t *cent, bool calcClosetPlayers)
{
  ?ArchiveEntity@CgAntiLag@@QEAAXPEBUcentity_t@@_N@Z(this, cent, calcClosetPlayers);
}

/*
==============
CgAntiLag::GetOriginForClosestCharacters
==============
*/

void __fastcall CgAntiLag::GetOriginForClosestCharacters(CgAntiLag *this, int entIndex, vec3_t *outOrigin)
{
  ?GetOriginForClosestCharacters@CgAntiLag@@MEAAXHAEATvec3_t@@@Z(this, entIndex, outOrigin);
}

/*
==============
CgAntiLag::GetInstance
==============
*/

CgAntiLag *__fastcall CgAntiLag::GetInstance(const LocalClientNum_t localClientNum)
{
  return ?GetInstance@CgAntiLag@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLag::IsWorldUpIncludedOnEntity
==============
*/

bool __fastcall CgAntiLag::IsWorldUpIncludedOnEntity(CgAntiLag *this, int entIndex)
{
  return ?IsWorldUpIncludedOnEntity@CgAntiLag@@UEBA_NH@Z(this, entIndex);
}

/*
==============
CgAntiLag::ShouldArchiveEntity
==============
*/

bool __fastcall CgAntiLag::ShouldArchiveEntity(CgAntiLag *this, const centity_t *cent)
{
  return ?ShouldArchiveEntity@CgAntiLag@@IEAA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgAntiLag::DrawDebug
==============
*/

void __fastcall CgAntiLag::DrawDebug(LocalClientNum_t localClientNum)
{
  ?DrawDebug@CgAntiLag@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgAntiLag::ProcessBone
==============
*/

void __fastcall CgAntiLag::ProcessBone(CgAntiLag *this, BgAntiLagBone *bone, const entityState_t *es)
{
  ?ProcessBone@CgAntiLag@@EEAAXPEAUBgAntiLagBone@@PEBUentityState_t@@@Z(this, bone, es);
}

/*
==============
CgAntiLag::MarkEntitiesForArchiving
==============
*/

void __fastcall CgAntiLag::MarkEntitiesForArchiving(CgAntiLag *this, BgAntiLagFrameHistory *frame)
{
  ?MarkEntitiesForArchiving@CgAntiLag@@EEAAXPEAUBgAntiLagFrameHistory@@@Z(this, frame);
}

/*
==============
CgAntiLag::DrawDebugLerpMovers
==============
*/

void __fastcall CgAntiLag::DrawDebugLerpMovers(CgAntiLag *this)
{
  ?DrawDebugLerpMovers@CgAntiLag@@QEBAXXZ(this);
}

/*
==============
CgAntiLag::GetEntityStateAndPhysicsInfo
==============
*/

bool __fastcall CgAntiLag::GetEntityStateAndPhysicsInfo(CgAntiLag *this, int entIndex, const entityState_t **outEs, const PhysicsObject **outPhysicsObj)
{
  return ?GetEntityStateAndPhysicsInfo@CgAntiLag@@MEAA_NHPEAPEBUentityState_t@@PEAPEBVPhysicsObject@@@Z(this, entIndex, outEs, outPhysicsObj);
}

/*
==============
CgAntiLag::CgAntiLag
==============
*/

void __fastcall CgAntiLag::CgAntiLag(CgAntiLag *this, int localClientNum)
{
  ??0CgAntiLag@@QEAA@H@Z(this, localClientNum);
}

/*
==============
CgAntiLag::RestoreAntiLagScene
==============
*/

void __fastcall CgAntiLag::RestoreAntiLagScene(CgAntiLag *this, const char *debugId, bool skipWorldUpdate)
{
  ?RestoreAntiLagScene@CgAntiLag@@UEAAXPEBD_N@Z(this, debugId, skipWorldUpdate);
}

/*
==============
CgAntiLag::RestoreAntiLagSceneEnt
==============
*/

void __fastcall CgAntiLag::RestoreAntiLagSceneEnt(CgAntiLag *this, const BgAntiLagRewindEntity *rewindEnt, unsigned int contextFlags)
{
  ?RestoreAntiLagSceneEnt@CgAntiLag@@MEAAXPEBUBgAntiLagRewindEntity@@I@Z(this, rewindEnt, contextFlags);
}

/*
==============
CgAntiLag::EntityStateToAntiLagEntity
==============
*/

bool __fastcall CgAntiLag::EntityStateToAntiLagEntity(CgAntiLag *this, int entityIndex, BgAntiLagEntity *entData, bool allowPSAccess)
{
  return ?EntityStateToAntiLagEntity@CgAntiLag@@UEBA_NHPEAUBgAntiLagEntity@@_N@Z(this, entityIndex, entData, allowPSAccess);
}

/*
==============
CgAntiLag::CgAntiLag
==============
*/
void CgAntiLag::CgAntiLag(CgAntiLag *this, int localClientNum)
{
  BgAntiLagRewindScene *p_m_rewindSceneInst; 
  __int64 v5; 

  BgAntiLag::BgAntiLag(this);
  this->__vftable = (CgAntiLag_vtbl *)&CgAntiLag::`vftable';
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
  this->m_disableForMigration = 0;
  this->m_localClientNum = localClientNum;
  this->m_currFrame = NULL;
}

/*
==============
CgAntiLag::AntiLagScene
==============
*/
void CgAntiLag::AntiLagScene(CgAntiLag *this, const int gameTime, unsigned int contextFlags, int entIndex, const char *debugId)
{
  const dvar_t *v5; 
  __int32 v10; 

  v5 = DCONST_DVARBOOL_antilagAllowClientSceneAntilag;
  if ( !DCONST_DVARBOOL_antilagAllowClientSceneAntilag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagAllowClientSceneAntilag") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && BgAntiLag::AntiLagSceneRefcount(this, contextFlags, gameTime, debugId) )
  {
    Profile_Begin(779);
    v10 = 3 * this->m_localClientNum + 2;
    Physics_LockWorld((Physics_WorldId)v10);
    BgAntiLag::AntiLagSceneInternal(this, entIndex, entIndex, contextFlags, gameTime, 0);
    if ( (contextFlags & 0x400) != 0 )
      CG_AntiLag_PhysicsWarpUpdateBroadPhase(this->m_localClientNum);
    Physics_UnlockWorld((Physics_WorldId)v10);
    Profile_EndInternal(NULL);
  }
}

/*
==============
CgAntiLag::AntiLagSceneEnt
==============
*/
void CgAntiLag::AntiLagSceneEnt(CgAntiLag *this, int entIndex, int gameTime, unsigned int contextFlags, const BgAntiLagFrameHistory *startFrame, const BgAntiLagFrameHistory *endFrame, float progress)
{
  centity_t *Entity; 
  const BgAntiLagEntityHistory *EntityDataFromIndex; 
  const BgAntiLagEntityHistory *v12; 
  BgAntiLagRewindEntity *v13; 
  __int64 entIndexa; 
  vec3_t origin; 
  vec3_t destPosition; 
  vec3_t outOrigin; 
  __int64 v18; 
  BgAntiLagEntityInfo outData; 

  v18 = -2i64;
  if ( !startFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 119, ASSERT_TYPE_ASSERT, "( startFrame )", (const char *)&queryFormat, "startFrame") )
    __debugbreak();
  if ( !endFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 120, ASSERT_TYPE_ASSERT, "( endFrame )", (const char *)&queryFormat, "endFrame") )
    __debugbreak();
  if ( (unsigned int)entIndex >= 0x800 )
  {
    LODWORD(entIndexa) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 121, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndexa, 2048) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  if ( (Entity->flags & 1) != 0 )
  {
    EntityDataFromIndex = BgAntiLag::GetEntityDataFromIndex(this, startFrame, entIndex);
    v12 = BgAntiLag::GetEntityDataFromIndex(this, endFrame, entIndex);
    if ( EntityDataFromIndex )
    {
      if ( v12 )
      {
        v13 = this->AllocNewRewindEnt(this, (unsigned int)entIndex);
        outData.boneInfo.boneList.m_usedSize = 0;
        outData.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::BlendEntity(this, startFrame, endFrame, NULL, progress, entIndex, contextFlags, &outData);
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        BgAntiLag::CopyPosition(this, entIndex, &outOrigin, &Entity->pose.angles, &destPosition, &v13->angles);
        BgAntiLagEntity_SetOrigin(v13, &destPosition);
        if ( (contextFlags & 0x400) != 0 )
        {
          BgAntiLagEntity_GetOrigin(&outData, &origin);
          CG_AntiLag_PhysicsWarpEntity(this->m_localClientNum, Entity, &origin, &outData.angles);
          memset(&origin, 0, sizeof(origin));
        }
        memset(&destPosition, 0, sizeof(destPosition));
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
    }
  }
}

/*
==============
CgAntiLag::ArchiveDelayedEntity
==============
*/
void CgAntiLag::ArchiveDelayedEntity(CgAntiLag *this, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  float v5; 
  float v6; 
  float v7; 
  float frameInterpolation; 
  unsigned int v9; 
  vec3_t outOrigin; 
  vec3_t inOrigin; 
  __int64 v14; 
  CgTrajectory v15; 
  vec3_t outPos; 
  vec3_t v17; 
  vec3_t v18; 
  vec3_t outAng; 

  v14 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 400, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( CgAntiLag::ShouldArchiveEntity(this, cent) )
  {
    CgTrajectory::CgTrajectory(&v15, (const LocalClientNum_t)this->m_localClientNum, cent, &cent->prevState);
    BgTrajectory::EvaluateTrajectories(&v15, LocalClientGlobals->snap->serverTime, &outPos, &outAng);
    v15.m_es = &cent->nextState.lerp;
    BgTrajectory::EvaluateTrajectories(&v15, LocalClientGlobals->nextSnap->serverTime, &v17, &v18);
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    inOrigin = outOrigin;
    v5 = cent->pose.angles.v[0];
    v6 = cent->pose.angles.v[1];
    v7 = cent->pose.angles.v[2];
    frameInterpolation = LocalClientGlobals->frameInterpolation;
    outOrigin.v[0] = (float)((float)(v17.v[0] - outPos.v[0]) * frameInterpolation) + outPos.v[0];
    outOrigin.v[1] = (float)((float)(v17.v[1] - outPos.v[1]) * frameInterpolation) + outPos.v[1];
    outOrigin.v[2] = (float)((float)(v17.v[2] - outPos.v[2]) * frameInterpolation) + outPos.v[2];
    CG_SetPoseOrigin(&cent->pose, &outOrigin);
    v9 = 0;
    _XMM8 = 0i64;
    do
    {
      __asm { vroundss xmm3, xmm8, xmm2, 1 }
      cent->pose.angles.v[v9] = (float)((float)((float)((float)((float)(v18.v[v9] - outAng.v[v9]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * LocalClientGlobals->frameInterpolation) + outAng.v[v9];
      ++v9;
    }
    while ( v9 < 3 );
    CgAntiLag::ArchiveEntity(this, cent, 0);
    CG_SetPoseOrigin(&cent->pose, &inOrigin);
    cent->pose.angles.v[0] = v5;
    cent->pose.angles.v[1] = v6;
    cent->pose.angles.v[2] = v7;
    memset(&outOrigin, 0, sizeof(outOrigin));
    memset(&inOrigin, 0, sizeof(inOrigin));
  }
}

/*
==============
CgAntiLag::ArchiveEntity
==============
*/
void CgAntiLag::ArchiveEntity(CgAntiLag *this, const centity_t *cent, bool calcClosetPlayers)
{
  entityState_t *p_nextState; 
  BgAntiLagEntityHistory *EntityData; 
  _BOOL8 v8; 
  BgAntiLagEntityHistory *v9; 
  bool IsCharacterEntity; 
  BgAntiLagFrameHistory *m_currFrame; 
  int v12; 
  int v13; 
  unsigned int v14; 
  int m_maxSize; 
  unsigned int v16; 
  BgAntiLagFrameHistory *v17; 
  unsigned int number; 
  int v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  unsigned int v24; 
  CgHandler *Handler; 
  __int64 v26; 
  __int64 v27; 

  Profile_Begin(777);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 337, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( this->m_currFrame )
  {
    if ( (cent->flags & 1) != 0 && CgAntiLag::ShouldArchiveEntity(this, cent) )
    {
      p_nextState = &cent->nextState;
      EntityData = BgAntiLag::AllocateEntityData(this, this->m_currFrame, &cent->nextState);
      v9 = EntityData;
      if ( EntityData )
      {
        LOBYTE(v8) = 1;
        this->EntityStateToAntiLagEntity(this, p_nextState->number, EntityData, v8);
        IsCharacterEntity = BG_IsCharacterEntity(&cent->nextState);
        m_currFrame = this->m_currFrame;
        if ( IsCharacterEntity )
        {
          v12 = Sys_InterlockedIncrement(&m_currFrame->characterList.m_usedSize);
          v13 = 248;
          v14 = v12 - 1;
          m_maxSize = this->m_currFrame->characterList.m_maxSize;
          v16 = 248;
          if ( m_maxSize )
            v16 = this->m_currFrame->characterList.m_maxSize;
          if ( v14 >= v16 )
          {
            if ( m_maxSize )
              v13 = this->m_currFrame->characterList.m_maxSize;
            LODWORD(v26) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 373, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( m_currFrame->characterList.max_size() )", "characterIndex doesn't index m_currFrame->characterList.max_size()\n\t%i not in [0, %i)", v26, v13) )
              __debugbreak();
          }
          v17 = this->m_currFrame;
          number = p_nextState->number;
          if ( v14 >= v17->characterList.m_usedSize )
          {
            LODWORD(v27) = v17->characterList.m_usedSize;
            LODWORD(v26) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v17->characterList.m_data[v14] = number;
        }
        else
        {
          v19 = Sys_InterlockedIncrement(&m_currFrame->otherEntList.m_usedSize);
          v20 = 2048;
          v21 = v19 - 1;
          v22 = this->m_currFrame->otherEntList.m_maxSize;
          v23 = 2048;
          if ( v22 )
            v23 = this->m_currFrame->otherEntList.m_maxSize;
          if ( v21 >= v23 )
          {
            if ( v22 )
              v20 = this->m_currFrame->otherEntList.m_maxSize;
            LODWORD(v26) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 380, ASSERT_TYPE_ASSERT, "(unsigned)( otherEntIndex ) < (unsigned)( m_currFrame->otherEntList.max_size() )", "otherEntIndex doesn't index m_currFrame->otherEntList.max_size()\n\t%i not in [0, %i)", v26, v20) )
              __debugbreak();
          }
          v24 = p_nextState->number;
          *AntiLagVector<unsigned int,2048>::operator[](&this->m_currFrame->otherEntList, v21) = v24;
        }
        BgAntiLag::FinalizeEntityArchive(this, this->m_currFrame, v9, p_nextState);
        if ( calcClosetPlayers )
        {
          Handler = CgHandler::getHandler(this->m_localClientNum);
          BgAntiLag::ArchiveClosestCharacters(this, v9, Handler);
        }
      }
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
CG_AntiLag_PhysicsWarpEntity
==============
*/
void CG_AntiLag_PhysicsWarpEntity(LocalClientNum_t localClientNum, centity_t *ent, const vec3_t *origin, const vec3_t *angles)
{
  entityState_t *p_nextState; 
  CgHandler *Handler; 
  __int64 v10; 
  unsigned int v11; 
  vec4_t quat; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 92, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) != 0 )
  {
    p_nextState = &ent->nextState;
    if ( !BG_IsCharacterEntity(&ent->nextState) )
    {
      if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 72, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
        __debugbreak();
      Handler = CgHandler::getHandler(localClientNum);
      v10 = Handler->GetPhysicsWorldId(Handler);
      v11 = CG_PhysicsObject_Get(p_nextState->number, localClientNum)->physicsInstances[v10];
      if ( v11 != -1 )
      {
        AnglesToQuat(angles, &quat);
        Physics_WarpInstanceTo((Physics_WorldId)v10, v11, origin, &quat, 0);
      }
    }
  }
}

/*
==============
CG_AntiLag_PhysicsWarpUpdateBroadPhase
==============
*/
void CG_AntiLag_PhysicsWarpUpdateBroadPhase(LocalClientNum_t localClientNum)
{
  CgHandler *Handler; 
  Physics_WorldId v3; 

  Handler = CgHandler::getHandler(localClientNum);
  v3 = Handler->GetPhysicsWorldId(Handler);
  CG_PhysicsCharacterProxy_Update(localClientNum, v3, PHYSICS_WORLD_ID_INVALID, PHYSICS_WORLD_ID_INVALID);
  Physics_UpdateBroadphase(v3, 1);
}

/*
==============
CgAntiLag::DrawDebug
==============
*/
void CgAntiLag::DrawDebug(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  BgAntiLag *ServerSystem; 
  CgAntiLag *Instance; 
  bool v5; 
  const ScreenPlacement *v6; 
  BgAntiLagFrameHistory *CurrentHistoryFrame; 
  const dvar_t *v8; 
  BgAntiLagFrameHistory *v9; 
  BgAntiLagFrameHistory *v10; 
  const dvar_t *v11; 
  BgAntiLagFrameHistory *v12; 
  CgAntiLag *v13; 
  DebugAntilagCollector collector; 
  DebugAntilagCollector v15; 
  char dest[256]; 

  v1 = DCONST_DVARINT_antilagDebug;
  v2 = localClientNum;
  if ( !DCONST_DVARINT_antilagDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer > 0 && CG_GetLocalClientGlobals((const LocalClientNum_t)v2) && !CgAntiLag::IsDisabledForMigration((const LocalClientNum_t)v2) )
  {
    ServerSystem = G_AntiLag_GetServerSystem();
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)v2);
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v6 = &scrPlaceViewDisplay[v2];
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 831, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
          __debugbreak();
        goto LABEL_14;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v5 )
        __debugbreak();
    }
    v6 = &scrPlaceFull;
LABEL_14:
    CurrentHistoryFrame = BgAntiLag::GetCurrentHistoryFrame(ServerSystem);
    v8 = DCONST_DVARINT_antilagDebug;
    v9 = CurrentHistoryFrame;
    if ( !DCONST_DVARINT_antilagDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    CgAntiLag::DrawDebugCountMovingEnts((LocalClientNum_t)v2, v9, &collector, v8->current.integer == 3);
    v10 = BgAntiLag::GetCurrentHistoryFrame(Instance);
    v11 = DCONST_DVARINT_antilagDebug;
    v12 = v10;
    if ( !DCONST_DVARINT_antilagDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    CgAntiLag::DrawDebugCountMovingEnts((LocalClientNum_t)v2, v12, &v15, v11->current.integer == 2);
    v13 = CgAntiLag::GetInstance((const LocalClientNum_t)v2);
    CgAntiLag::DrawDebugLerpMovers(v13);
    Core_strcpy(dest, 0x100ui64, "Server");
    CG_DrawStringExt(v6, 2.0, 18.0, dest, &colorYellow, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Characters:\t\t\t\t\t%d", collector.characters);
    CG_DrawStringExt(v6, 2.0, 26.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Player Collision Moving:\t\t%d", collector.playerCollisionMoving);
    CG_DrawStringExt(v6, 2.0, 34.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "No Player Collision Moving:\t%d", collector.noCollisionMoving);
    CG_DrawStringExt(v6, 2.0, 42.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Player Collision Static:\t\t%d", collector.playerCollision);
    CG_DrawStringExt(v6, 2.0, 50.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "No Player Collision Static:\t%d", collector.noCollision);
    CG_DrawStringExt(v6, 2.0, 58.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Missiles:\t\t\t\t\t\t%d", collector.missiles);
    CG_DrawStringExt(v6, 2.0, 66.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Bone Ents:\t\t\t\t\t%d", collector.boneEnts);
    CG_DrawStringExt(v6, 2.0, 74.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Core_strcpy(dest, 0x100ui64, "Client");
    CG_DrawStringExt(v6, 2.0, 90.0, dest, &colorYellow, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Characters:\t\t\t\t\t%d", v15.characters);
    CG_DrawStringExt(v6, 2.0, 98.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Player Collision Moving:\t\t%d", v15.playerCollisionMoving);
    CG_DrawStringExt(v6, 2.0, 106.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "No Player Collision Moving:\t%d", v15.noCollisionMoving);
    CG_DrawStringExt(v6, 2.0, 114.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Player Collision Static:\t\t%d", v15.playerCollision);
    CG_DrawStringExt(v6, 2.0, 122.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "No Player Collision Static:\t%d", v15.noCollision);
    CG_DrawStringExt(v6, 2.0, 130.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Missiles:\t\t\t\t\t\t%d", v15.missiles);
    CG_DrawStringExt(v6, 2.0, 138.0, dest, &colorWhite, 0, 1, 8.0, 0);
    Com_sprintf(dest, 0x100ui64, "Bone Ents:\t\t\t\t\t%d", v15.boneEnts);
    CG_DrawStringExt(v6, 2.0, 146.0, dest, &colorWhite, 0, 1, 8.0, 0);
  }
}

/*
==============
CgAntiLag::DrawDebugCountMovingEnts
==============
*/
void CgAntiLag::DrawDebugCountMovingEnts(LocalClientNum_t localClientNum, BgAntiLagFrameHistory *frame, DebugAntilagCollector *collector, bool drawMovers)
{
  __int64 v6; 
  volatile int i; 
  volatile int v8; 
  AntiLagVector<unsigned int,2048> *p_otherEntList; 
  volatile int *p_m_usedSize; 
  __int64 v11; 
  __int64 v12; 
  BgAntiLagEntityHistory *v13; 
  CgEntitySystem *v14; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v20; 
  __int64 v30; 
  __int64 v31; 
  vec3_t start; 
  volatile int *v34; 
  __int64 v35; 
  vec3_t end; 

  v35 = -2i64;
  v6 = localClientNum;
  if ( !collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 680, ASSERT_TYPE_ASSERT, "(collector)", (const char *)&queryFormat, "collector") )
    __debugbreak();
  *(_QWORD *)&collector->characters = 0i64;
  *(_QWORD *)&collector->playerCollision = 0i64;
  *(_QWORD *)&collector->noCollision = 0i64;
  collector->boneEnts = 0;
  collector->boneEnts = frame->entityDataExtended.m_usedSize;
  for ( i = 0; i < frame->characterList.m_usedSize; ++i )
    ++collector->characters;
  v8 = 0;
  if ( frame->otherEntList.m_usedSize > 0 )
  {
    p_otherEntList = &frame->otherEntList;
    p_m_usedSize = &frame->otherEntList.m_usedSize;
    v34 = &frame->otherEntList.m_usedSize;
    do
    {
      if ( (unsigned int)v8 >= *p_m_usedSize )
      {
        LODWORD(v31) = *p_m_usedSize;
        LODWORD(v30) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      v11 = (int)p_otherEntList->m_data[0];
      v12 = frame->entityData[p_otherEntList->m_data[0]];
      if ( (unsigned int)v12 >= frame->entityDataStandard.m_usedSize )
      {
        LODWORD(v31) = frame->entityDataStandard.m_usedSize;
        LODWORD(v30) = frame->entityData[p_otherEntList->m_data[0]];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 675, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_usedSize )", "index doesn't index m_usedSize\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      v13 = frame->entityDataStandard.m_data[v12];
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 694, ASSERT_TYPE_ASSERT, "(entData)", (const char *)&queryFormat, "entData") )
        __debugbreak();
      if ( v13->entType == 4 )
      {
        ++collector->missiles;
      }
      else if ( v13->timeSinceChange )
      {
        if ( (v13->flags & 1) != 0 )
          ++collector->playerCollision;
        else
          ++collector->noCollision;
      }
      else if ( (v13->flags & 1) != 0 )
      {
        if ( drawMovers )
        {
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v31) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v31) )
              __debugbreak();
          }
          if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v31) = CgEntitySystem::ms_allocatedCount;
            LODWORD(v30) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v6] )
          {
            LODWORD(v31) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v31) )
              __debugbreak();
          }
          v14 = CgEntitySystem::ms_entitySystemArray[v6];
          if ( (unsigned int)v11 >= 0x800 )
          {
            LODWORD(v31) = 2048;
            LODWORD(v30) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          p_pose = &v14->m_entities[v11].pose;
          if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
          FunctionPointer_origin(&p_pose->origin.origin.origin, &start);
          if ( p_pose->isPosePrecise )
          {
            _XMM0 = LODWORD(start.v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v20;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            start.v[0] = *(float *)&_XMM2;
            _XMM0 = LODWORD(start.v[1]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v20;
            __asm { vcvtsd2ss xmm3, xmm1, xmm1 }
            start.v[1] = *(float *)&_XMM3;
            _XMM0 = LODWORD(start.v[2]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v20;
            __asm { vcvtsd2ss xmm4, xmm1, xmm1 }
            start.v[2] = *(float *)&_XMM4;
          }
          else
          {
            *(float *)&_XMM4 = start.v[2];
            *(float *)&_XMM3 = start.v[1];
            *(float *)&_XMM2 = start.v[0];
          }
          end.v[0] = *(float *)&_XMM2;
          end.v[1] = *(float *)&_XMM3;
          end.v[2] = *(float *)&_XMM4 + 2000.0;
          CG_DebugLine(&start, &end, &colorRed, 1, 0);
          memset(&start, 0, sizeof(start));
        }
        ++collector->playerCollisionMoving;
      }
      else
      {
        ++collector->noCollisionMoving;
      }
      ++v8;
      p_otherEntList = (AntiLagVector<unsigned int,2048> *)((char *)p_otherEntList + 4);
      p_m_usedSize = v34;
    }
    while ( v8 < frame->otherEntList.m_usedSize );
  }
}

/*
==============
CgAntiLag::DrawDebugLerpMovers
==============
*/
void CgAntiLag::DrawDebugLerpMovers(CgAntiLag *this)
{
  LocalClientNum_t m_localClientNum; 
  cg_t *LocalClientGlobals; 
  unsigned int serverTime; 
  const Bounds *Bounds; 
  float v6; 
  float v7; 
  const vec3_t *p_origin; 
  unsigned int i; 
  unsigned int LerpMoverCommandIndex; 
  __int64 v11; 
  BgAntiLagLerpMoverCmd *v12; 
  float v13; 
  float v14; 
  vec4_t *v15; 
  __int64 fAccelTimeSec; 
  __int64 fDecelTimeSec; 
  vec3_t dir; 
  vec3_t center; 
  vec4_t color; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> rotation; 

  dir.v[0] = 0.0;
  dir.v[1] = 0.0;
  m_localClientNum = this->m_localClientNum;
  dir.v[2] = FLOAT_1_0;
  LocalClientGlobals = CG_GetLocalClientGlobals(m_localClientNum);
  serverTime = LocalClientGlobals->snap->serverTime;
  Bounds = BG_Suit_GetBounds(LocalClientGlobals->predictedPlayerState.suitIndex, PM_EFF_STANCE_DEFAULT);
  v6 = Bounds->halfSize.v[0];
  v7 = Bounds->halfSize.v[2];
  YawToAxis(LocalClientGlobals->predictedPlayerState.viewangles.v[1], &axis);
  p_origin = &LocalClientGlobals->predictedPlayerState.origin;
  end.v[0] = (float)(v6 * axis.m[0].v[0]) + LocalClientGlobals->predictedPlayerState.origin.v[0];
  end.v[1] = (float)(v6 * axis.m[0].v[1]) + LocalClientGlobals->predictedPlayerState.origin.v[1];
  end.v[2] = (float)(v6 * axis.m[0].v[2]) + LocalClientGlobals->predictedPlayerState.origin.v[2];
  CG_DebugLine(&LocalClientGlobals->predictedPlayerState.origin, &end, &colorWhite, 0, 1);
  CG_DebugCircle(&LocalClientGlobals->predictedPlayerState.origin, v6, &dir, &colorWhite, 0, 1);
  for ( i = 0; i < this->m_lerpMoverCommandCount; ++i )
  {
    LerpMoverCommandIndex = BgAntiLag::GetLerpMoverCommandIndex(this, i);
    v11 = LerpMoverCommandIndex;
    if ( LerpMoverCommandIndex >= 0x64 )
    {
      LODWORD(fDecelTimeSec) = 100;
      LODWORD(fAccelTimeSec) = LerpMoverCommandIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( commandIndex ) < (unsigned)( ( sizeof( *array_counter( m_lerpMoverCommands ) ) + 0 ) )", "commandIndex doesn't index m_lerpMoverCommands\n\t%i not in [0, %i)", fAccelTimeSec, fDecelTimeSec) )
        __debugbreak();
    }
    v12 = &this->m_lerpMoverCommands[v11];
    ScriptableBg_LerpVector(&v12->startOrigin, &v12->endOrigin, v12->startTime, serverTime, v12->seconds, v12->secondsAccel, v12->secondsDecel, &origin);
    ScriptableBg_LerpVector(&v12->startAngles, &v12->endAngles, v12->startTime, serverTime, v12->seconds, v12->secondsAccel, v12->secondsDecel, &angles);
    AnglesToAxis(&angles, &rotation);
    v13 = v12->height + v12->origin.v[2];
    v14 = v12->origin.v[1];
    center.v[0] = v12->origin.v[0];
    center.v[1] = v14;
    center.v[2] = v13;
    if ( serverTime <= v12->startTime || (v15 = &colorBlue, serverTime > v12->endTime) )
      v15 = &colorRed;
    color = *v15;
    if ( BgAntiLag::GetLerpMoverOverlap(this, p_origin, v6, v7, v12) )
      color = colorGreen;
    CG_DebugLine(&v12->origin, &center, &color, 0, 1);
    CG_DebugCircle(&v12->origin, v12->radius, &dir, &color, 0, 1);
    CG_DebugCircle(&center, v12->radius, &dir, &color, 0, 1);
    CG_DebugBoxOriented(&origin, &v12->bounds, &rotation, &color, 0, 1);
  }
}

/*
==============
CgAntiLag::EntityStateToAntiLagEntity
==============
*/
__int64 CgAntiLag::EntityStateToAntiLagEntity(CgAntiLag *this, int entityIndex, BgAntiLagEntity *entData, bool allowPSAccess)
{
  __int64 v5; 
  centity_t *Entity; 
  const centity_t *v8; 
  unsigned __int8 v9; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  int suitIndex; 
  unsigned int v13; 
  float *doorAngle; 
  bool *p_owner; 
  __int64 v17; 
  __int64 v18; 
  vec3_t outOrigin; 

  v5 = entityIndex;
  if ( !entData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 270, ASSERT_TYPE_ASSERT, "(entData)", (const char *)&queryFormat, "entData") )
    __debugbreak();
  *(_QWORD *)entData->origin.origin.v = 0i64;
  *(_QWORD *)&entData->origin.origin.z = 0i64;
  *(_QWORD *)&entData->angles.y = 0i64;
  *(_QWORD *)&entData->flags = 0i64;
  *(_QWORD *)&entData->doorAngle[1] = 0i64;
  *(_QWORD *)&entData->doorIndex[1] = 0i64;
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v5);
  v8 = Entity;
  if ( (Entity->flags & 1) != 0 )
  {
    BgAntiLag::EntityStateToAntiLagEntityInternal(this, &Entity->nextState, entData);
    entData->entityIndex = truncate_cast<unsigned short,int>(v5);
    if ( CG_Weapons_EntityHasShield((const LocalClientNum_t)this->m_localClientNum, v8) )
      entData->flags |= 4u;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v5) )
    {
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)v5 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v17, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v5);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v5);
      }
      if ( CharacterInfo )
      {
        if ( NetConstStrings_GetCountForType(NETCONSTSTRINGTYPE_SUIT) > 0xFF )
        {
          LODWORD(v18) = 255;
          LODWORD(v17) = NetConstStrings_GetCountForType(NETCONSTSTRINGTYPE_SUIT);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 293, ASSERT_TYPE_ASSERT, "( NetConstStrings_GetCountForType( NETCONSTSTRINGTYPE_SUIT ) ) <= ( 0xffui8 )", "NetConstStrings_GetCountForType( NETCONSTSTRINGTYPE_SUIT ) not in [0, UINT8_MAX]\n\t%u not in [0, %u]", v17, v18) )
            __debugbreak();
        }
        suitIndex = CharacterInfo->suitIndex;
        if ( (suitIndex < 0 || (unsigned int)suitIndex > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)suitIndex, "signed", suitIndex) )
          __debugbreak();
        entData->suitIndex = suitIndex;
        v13 = 0;
        doorAngle = entData->doorAngle;
        p_owner = &CharacterInfo->doorState[0].owner;
        do
        {
          doorAngle[2] = *((float *)p_owner - 2);
          *doorAngle = *((float *)p_owner - 1);
          if ( *p_owner )
          {
            if ( v13 )
              entData->flags |= 0x40u;
            else
              entData->flags |= 0x20u;
          }
          ++v13;
          ++doorAngle;
          p_owner += 12;
        }
        while ( v13 < 2 );
      }
    }
    entData->angles.v[0] = v8->pose.angles.v[0];
    entData->angles.v[1] = v8->pose.angles.v[1];
    entData->angles.v[2] = v8->pose.angles.v[2];
    CG_GetPoseOrigin(&v8->pose, &outOrigin);
    BgAntiLagEntity_SetOrigin(entData, &outOrigin);
    v9 = 1;
  }
  else
  {
    v9 = 0;
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  return v9;
}

/*
==============
CgAntiLag::GetEntityStateAndPhysicsInfo
==============
*/
bool CgAntiLag::GetEntityStateAndPhysicsInfo(CgAntiLag *this, int entIndex, const entityState_t **outEs, const PhysicsObject **outPhysicsObj)
{
  centity_t *Entity; 
  bool result; 
  const entityState_t *p_nextState; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 607, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 )
    return 0;
  p_nextState = &Entity->nextState;
  *outPhysicsObj = CG_PhysicsObject_Get(p_nextState->number, this->m_localClientNum);
  result = 1;
  *outEs = p_nextState;
  return result;
}

/*
==============
CgAntiLag::GetInstance
==============
*/
CgAntiLag *CgAntiLag::GetInstance(const LocalClientNum_t localClientNum)
{
  CgAntiLag **v1; 
  CgAntiLag *result; 

  v1 = &CgAntiLag::ms_instance[localClientNum];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 55, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  result = *v1;
  if ( (*v1)->m_disableForMigration )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 56, ASSERT_TYPE_ASSERT, "(!ms_instance[localClientNum]->m_disableForMigration)", "%s\n\tNot allowed to access anti-lag when the system is disabled", "!ms_instance[localClientNum]->m_disableForMigration") )
      __debugbreak();
    return *v1;
  }
  return result;
}

/*
==============
CgAntiLag::GetOriginForClosestCharacters
==============
*/
void CgAntiLag::GetOriginForClosestCharacters(CgAntiLag *this, int entIndex, vec3_t *outOrigin)
{
  centity_t *Entity; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  CG_GetPoseOrigin(&Entity->pose, outOrigin);
}

/*
==============
CgAntiLag::IsDisabledForMigration
==============
*/
_BOOL8 CgAntiLag::IsDisabledForMigration(const LocalClientNum_t localClientNum)
{
  CgAntiLag **v1; 

  v1 = &CgAntiLag::ms_instance[localClientNum];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 64, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return (*v1)->m_disableForMigration;
}

/*
==============
CgAntiLag::IsWorldUpIncludedOnEntity
==============
*/
bool CgAntiLag::IsWorldUpIncludedOnEntity(CgAntiLag *this, int entIndex)
{
  return Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_LADDER_AIM|0x80) || this->m_sceneAntiLagRefCount > 0;
}

/*
==============
CgAntiLag::MarkEntitiesForArchiving
==============
*/
void CgAntiLag::MarkEntitiesForArchiving(CgAntiLag *this, BgAntiLagFrameHistory *frame)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  __int64 v7; 
  int entity; 
  __int16 linkEnt; 
  __int16 viewlocked_entNum; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  int v14; 
  CgAntiLag_vtbl *v15; 
  __int16 *v16; 
  __int16 *v17; 
  __int16 v18; 
  int v19; 
  int v20; 
  __int16 *v21; 
  __int16 v22; 
  const dvar_t *v23; 
  unsigned int v24; 
  unsigned int v25; 
  int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  int RigidBodyContents; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  __int16 *v32; 
  int v33; 
  int outIgnoreEntIndex; 
  unsigned int v35; 
  __int64 v36; 
  hknpBodyId result; 
  vec3_t outOrigin; 
  bitarray<2048> outNearestEntities; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  Handler = CgHandler::getHandler(this->m_localClientNum);
  v7 = Handler->GetPhysicsWorldId(Handler);
  BgAntiLag::MarkPreArchiveFlag(this, LocalClientGlobals->clientNum, 3);
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  if ( entity && entity != 2047 )
    BgAntiLag::MarkPreArchiveFlag(this, entity, 3);
  linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
  if ( linkEnt && linkEnt != 2047 )
    BgAntiLag::MarkPreArchiveFlag(this, linkEnt, 3);
  if ( LocalClientGlobals == (cg_t *)-384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 6u) )
    goto LABEL_16;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_16:
    viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
    if ( viewlocked_entNum != 2047 )
      BgAntiLag::MarkPreArchiveFlag(this, viewlocked_entNum, 1);
  }
  if ( BGMovingPlatforms::IsOnMovingPlatform(p_predictedPlayerState) )
    BgAntiLag::MarkPreArchiveFlag(this, LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity, 6);
  BgAntiLag::GetAntilagPlayerOrigin(p_predictedPlayerState, &outIgnoreEntIndex, &outOrigin);
  BgAntiLag::GetNearestEntities((const Physics_WorldId)v7, p_predictedPlayerState, outIgnoreEntIndex, &outOrigin, &outNearestEntities);
  BgAntiLag::MarkBroadPhaseEntsForUpdate(this, frame, p_predictedPlayerState, &outOrigin, &outNearestEntities);
  v11 = outNearestEntities.array[0];
  LODWORD(v12) = 0;
  v33 = 0;
LABEL_21:
  while ( v11 )
  {
LABEL_24:
    v13 = __lzcnt(v11);
    v14 = v13 + 32 * v12;
    if ( v13 >= 0x20 )
    {
      LODWORD(v31) = 32;
      LODWORD(v30) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    if ( (v11 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v15 = this->__vftable;
    v11 &= ~(0x80000000 >> v13);
    v35 = v11;
    if ( v15->GetEntityStateAndPhysicsInfo(this, v14, (const entityState_t **)&v32, (const PhysicsObject **)&v36) )
    {
      v16 = v32;
      v17 = v32;
      if ( !v32 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        v16 = v32;
      }
      v18 = v17[4];
      if ( ((v18 - 1) & 0xFFED) == 0 && v18 != 3 )
      {
        v19 = v14;
LABEL_38:
        v20 = 3;
LABEL_39:
        BgAntiLag::MarkPreArchiveFlag(this, v19, v20);
        goto LABEL_21;
      }
      v21 = v16;
      if ( !v16 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1935, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        v16 = v32;
      }
      if ( v21[4] == 6 && v21[100] == 1 )
      {
        v19 = *v16;
        v20 = 11;
        goto LABEL_39;
      }
      v22 = v16[4];
      if ( v22 == 11 )
      {
        v19 = *v16;
        v20 = 4;
        goto LABEL_39;
      }
      if ( ((v22 - 12) & 0xFFFD) == 0 )
      {
        v19 = *v16;
        v20 = 6;
        goto LABEL_39;
      }
      if ( v22 == 6 && (v16[62] & 0x40) != 0 )
      {
        v19 = *v16;
        goto LABEL_38;
      }
      v23 = DCONST_DVARMPBOOL_antilagAutoIncludeMovers;
      if ( !DCONST_DVARMPBOOL_antilagAutoIncludeMovers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "antilagAutoIncludeMovers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled && v32[4] == 6 )
      {
        if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 553, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
          __debugbreak();
        v24 = *(_DWORD *)(v36 + 4 * v7 + 4);
        if ( v24 != -1 )
        {
          v25 = 0;
          NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, v24);
          if ( NumRigidBodys > 0 )
          {
            while ( 1 )
            {
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( (unsigned int)v7 > 7 )
              {
                LODWORD(v31) = v7;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v31) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
              {
                LODWORD(v31) = v7;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v31) )
                  __debugbreak();
              }
              if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
              {
                LODWORD(v31) = v7;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v31) )
                  __debugbreak();
              }
              m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v7, v24, v25)->m_serialAndIndex;
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 561, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                __debugbreak();
              RigidBodyContents = Physics_GetRigidBodyContents((const Physics_WorldId)v7, m_serialAndIndex);
              if ( (RigidBodyContents & 0x2014011) != 0 )
                break;
              if ( (RigidBodyContents & 0x2806931) != 0 )
              {
                v29 = 4;
                goto LABEL_85;
              }
LABEL_86:
              if ( (int)++v25 >= NumRigidBodys )
              {
                LODWORD(v12) = v33;
                v11 = v35;
                goto LABEL_21;
              }
            }
            v29 = 6;
LABEL_85:
            BgAntiLag::MarkPreArchiveFlag(this, *v32, v29);
            goto LABEL_86;
          }
        }
      }
    }
  }
  while ( 1 )
  {
    v12 = (unsigned int)(v12 + 1);
    v33 = v12;
    if ( (unsigned int)v12 >= 0x40 )
      break;
    v11 = outNearestEntities.array[v12];
    if ( v11 )
      goto LABEL_24;
  }
}

/*
==============
CgAntiLag::ProcessBone
==============
*/
void CgAntiLag::ProcessBone(CgAntiLag *this, BgAntiLagBone *bone, const entityState_t *es)
{
  centity_t *Entity; 
  unsigned int number; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v9; 
  unsigned int v10; 
  const DObj *v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !bone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 584, ASSERT_TYPE_ASSERT, "(bone)", (const char *)&queryFormat, "bone") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 585, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, es->number);
  if ( (Entity->flags & 1) != 0 )
  {
    number = es->number;
    m_localClientNum = this->m_localClientNum;
    if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", number) )
      __debugbreak();
    if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v13) = 2;
      LODWORD(v12) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v9 = 2533 * m_localClientNum + number;
    if ( v9 >= 0x13CA )
    {
      LODWORD(v13) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v13) )
        __debugbreak();
    }
    v10 = clientObjMap[v9];
    if ( v10 )
    {
      if ( v10 >= (unsigned int)s_objCount )
      {
        LODWORD(v13) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v13) )
          __debugbreak();
      }
      v11 = (const DObj *)s_objBuf[v10];
      if ( v11 )
      {
        if ( CG_DObjGetWorldTagPos(&Entity->pose, v11, bone->boneId, &bone->origin) )
          bone->dataValid = 1;
      }
    }
  }
}

/*
==============
CgAntiLag::ResetClientHistory
==============
*/
void CgAntiLag::ResetClientHistory(const LocalClientNum_t localClientNum)
{
  CgAntiLag *Instance; 

  if ( !CgAntiLag::IsDisabledForMigration(localClientNum) )
  {
    Instance = CgAntiLag::GetInstance(localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 628, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
      __debugbreak();
    BgAntiLag::ClearHistory(Instance);
  }
}

/*
==============
CgAntiLag::RestoreAntiLagScene
==============
*/
void CgAntiLag::RestoreAntiLagScene(CgAntiLag *this, const char *debugId, bool skipWorldUpdate)
{
  unsigned int m_sceneAntiLagContext; 
  __int32 v6; 

  m_sceneAntiLagContext = this->m_sceneAntiLagContext;
  if ( BgAntiLag::RestoreAntiLagSceneRefcount(this, debugId) )
  {
    v6 = 3 * this->m_localClientNum + 2;
    Physics_LockWorld((Physics_WorldId)v6);
    BgAntiLag::RestoreAntiLagSceneInternal(this, m_sceneAntiLagContext);
    if ( (m_sceneAntiLagContext & 0x400) != 0 && !skipWorldUpdate )
      CG_AntiLag_PhysicsWarpUpdateBroadPhase(this->m_localClientNum);
    Physics_UnlockWorld((Physics_WorldId)v6);
  }
}

/*
==============
CgAntiLag::RestoreAntiLagSceneEnt
==============
*/
void CgAntiLag::RestoreAntiLagSceneEnt(CgAntiLag *this, const BgAntiLagRewindEntity *rewindEnt, unsigned int contextFlags)
{
  __int16 v3; 
  centity_t *Entity; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  vec3_t v10; 
  vec3_t outOrigin; 
  vec3_t origin; 

  v3 = contextFlags;
  if ( rewindEnt->entIndex >= 0x800u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 208, ASSERT_TYPE_ASSERT, "(unsigned)( rewindEnt->entIndex ) < (unsigned)( ( 2048 ) )", "rewindEnt->entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", rewindEnt->entIndex, 2048) )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, rewindEnt->entIndex);
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  BgAntiLagEntity_GetOrigin(rewindEnt, &v10);
  if ( !VecNCompareCustomEpsilon(v10.v, outOrigin.v, 0.001, 3) )
  {
    LODWORD(v7) = rewindEnt->entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 222, ASSERT_TYPE_ASSERT, "(Vec3CompareEpsilon( rewindEntOrg, tmpOrg2 ))", "%s\n\tEnt Num %d, Type %d, In Use %d, %f %f %f, %f %f %f", "Vec3CompareEpsilon( rewindEntOrg, tmpOrg2 )", v7, Entity->nextState.eType, Entity->flags & 1, v10.v[0], v10.v[1], v10.v[2], outOrigin.v[0], outOrigin.v[1], outOrigin.v[2]) )
      __debugbreak();
  }
  if ( !VecNCompareCustomEpsilon(rewindEnt->angles.v, Entity->pose.angles.v, 0.001, 3) )
  {
    LODWORD(v9) = Entity->flags & 1;
    LODWORD(v8) = Entity->nextState.eType;
    LODWORD(v7) = rewindEnt->entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 228, ASSERT_TYPE_ASSERT, "(Vec3CompareEpsilon( rewindEnt->angles, cent->pose.angles ))", "%s\n\tEnt Num %d, Type %d, In Use %d, %f %f %f, %f %f %f", "Vec3CompareEpsilon( rewindEnt->angles, cent->pose.angles )", v7, v8, v9, rewindEnt->angles.v[0], rewindEnt->angles.v[1], rewindEnt->angles.v[2], Entity->pose.angles.v[0], Entity->pose.angles.v[1], Entity->pose.angles.v[2]) )
      __debugbreak();
  }
  if ( (v3 & 0x400) != 0 )
  {
    CG_GetPoseOrigin(&Entity->pose, &origin);
    CG_AntiLag_PhysicsWarpEntity(this->m_localClientNum, Entity, &origin, &Entity->pose.angles);
    memset(&origin, 0, sizeof(origin));
  }
  memset(&v10, 0, sizeof(v10));
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CgAntiLag::ShouldArchiveEntity
==============
*/
bool CgAntiLag::ShouldArchiveEntity(CgAntiLag *this, const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 326, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 327, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  return BgAntiLag::ShouldArchiveEnt(this, &cent->nextState);
}

/*
==============
CgAntiLag::StartSceneArchiveClient
==============
*/
void CgAntiLag::StartSceneArchiveClient(CgAntiLag *this, int time)
{
  BgAntiLagFrameHistory *started; 

  started = BgAntiLag::StartSceneArchive(this, NULL, time);
  this->m_currFrame = started;
  if ( !started && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_antilag.cpp", 320, ASSERT_TYPE_ASSERT, "(m_currFrame)", (const char *)&queryFormat, "m_currFrame") )
    __debugbreak();
}

