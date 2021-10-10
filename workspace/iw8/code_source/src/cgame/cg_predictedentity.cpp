/*
==============
CgPredictedEntitySystem::GetEntityIndex
==============
*/

int __fastcall CgPredictedEntitySystem::GetEntityIndex(CgPredictedEntitySystem *this, CgPredictedEntity *ent)
{
  return ?GetEntityIndex@CgPredictedEntitySystem@@IEBAHPEAUCgPredictedEntity@@@Z(this, ent);
}

/*
==============
CgPredictedEntitySystem::SpawnClientTrajectoryEntity
==============
*/

CgPredictedEntity *__fastcall CgPredictedEntitySystem::SpawnClientTrajectoryEntity(CgPredictedEntitySystem *this, CgPredictedEntity *parentEntity)
{
  return ?SpawnClientTrajectoryEntity@CgPredictedEntitySystem@@QEAAPEAUCgPredictedEntity@@PEAU2@@Z(this, parentEntity);
}

/*
==============
CgPredictedEntitySystem::EvalSnapshotEnt
==============
*/

void __fastcall CgPredictedEntitySystem::EvalSnapshotEnt(CgPredictedEntitySystem *this, centity_t *cent)
{
  ?EvalSnapshotEnt@CgPredictedEntitySystem@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgPredictedEntitySystem::Update
==============
*/

void __fastcall CgPredictedEntitySystem::Update(CgPredictedEntitySystem *this)
{
  ?Update@CgPredictedEntitySystem@@QEAAXXZ(this);
}

/*
==============
CgPredictedEntitySystem::IsPredictedEntityInUse
==============
*/

bool __fastcall CgPredictedEntitySystem::IsPredictedEntityInUse(CgPredictedEntitySystem *this, const int predictedEntIdx)
{
  return ?IsPredictedEntityInUse@CgPredictedEntitySystem@@QEBA_NH@Z(this, predictedEntIdx);
}

/*
==============
CgPredictedEntityTrajectory::GetTargetPos
==============
*/

bool __fastcall CgPredictedEntityTrajectory::GetTargetPos(CgPredictedEntityTrajectory *this, vec3_t *outPos)
{
  return ?GetTargetPos@CgPredictedEntityTrajectory@@UEBA_NAEATvec3_t@@@Z(this, outPos);
}

/*
==============
CgPredictedEntitySystem::GetDObj
==============
*/

DObj *__fastcall CgPredictedEntitySystem::GetDObj(CgPredictedEntitySystem *this, CgPredictedEntity *ent, DObjModel *dobjModels, unsigned __int16 numModels, bool *outCreatedNew)
{
  return ?GetDObj@CgPredictedEntitySystem@@QEAAPEAUDObj@@PEAUCgPredictedEntity@@PEAUDObjModel@@GPEA_N@Z(this, ent, dobjModels, numModels, outCreatedNew);
}

/*
==============
CgPredictedEntitySystem::GetPoseForDObjHandle
==============
*/

const cpose_t *__fastcall CgPredictedEntitySystem::GetPoseForDObjHandle(CgPredictedEntitySystem *this, const int dobjHandle)
{
  return ?GetPoseForDObjHandle@CgPredictedEntitySystem@@QEBAPEBUcpose_t@@H@Z(this, dobjHandle);
}

/*
==============
CgPredictedEntitySystem::GetPredictedEntityPose
==============
*/

const cpose_t *__fastcall CgPredictedEntitySystem::GetPredictedEntityPose(CgPredictedEntitySystem *this, const int predictedEntIdx)
{
  return ?GetPredictedEntityPose@CgPredictedEntitySystem@@QEBAPEBUcpose_t@@H@Z(this, predictedEntIdx);
}

/*
==============
CgPredictedEntityTrajectory::GetDObj
==============
*/

DObj *__fastcall CgPredictedEntityTrajectory::GetDObj(CgPredictedEntityTrajectory *this)
{
  return ?GetDObj@CgPredictedEntityTrajectory@@QEBAPEAUDObj@@XZ(this);
}

/*
==============
CgPredictedEntityTrajectory::IsClient
==============
*/

bool __fastcall CgPredictedEntityTrajectory::IsClient(CgPredictedEntityTrajectory *this)
{
  return ?IsClient@CgPredictedEntityTrajectory@@UEBA_NXZ(this);
}

/*
==============
CgPredictedEntitySystem::ResetEntity
==============
*/

void __fastcall CgPredictedEntitySystem::ResetEntity(CgPredictedEntitySystem *this, CgPredictedEntity *ent)
{
  ?ResetEntity@CgPredictedEntitySystem@@IEAAXPEAUCgPredictedEntity@@@Z(this, ent);
}

/*
==============
CgPredictedEntitySystem::GetSystem
==============
*/

CgPredictedEntitySystem *__fastcall CgPredictedEntitySystem::GetSystem(const LocalClientNum_t localClientNum)
{
  return ?GetSystem@CgPredictedEntitySystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgPredictedEntitySystem::HasAssociatedPredictedEntity
==============
*/

bool __fastcall CgPredictedEntitySystem::HasAssociatedPredictedEntity(CgPredictedEntitySystem *this, centity_t *cent)
{
  return ?HasAssociatedPredictedEntity@CgPredictedEntitySystem@@QEBA_NPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgPredictedEntitySystem::CanSpawnNewEntities
==============
*/

bool __fastcall CgPredictedEntitySystem::CanSpawnNewEntities(CgPredictedEntitySystem *this)
{
  return ?CanSpawnNewEntities@CgPredictedEntitySystem@@QEBA_NXZ(this);
}

/*
==============
CgPredictedEntitySystem::InitEntity
==============
*/

void __fastcall CgPredictedEntitySystem::InitEntity(CgPredictedEntitySystem *this, CgPredictedEntity *ent)
{
  ?InitEntity@CgPredictedEntitySystem@@IEAAXPEAUCgPredictedEntity@@@Z(this, ent);
}

/*
==============
CgPredictedEntitySystem::DisassociateFromPredictedEntity
==============
*/

void __fastcall CgPredictedEntitySystem::DisassociateFromPredictedEntity(CgPredictedEntitySystem *this, centity_t *cent)
{
  ?DisassociateFromPredictedEntity@CgPredictedEntitySystem@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgPredictedEntitySystem::UpdateMissile
==============
*/

void __fastcall CgPredictedEntitySystem::UpdateMissile(CgPredictedEntitySystem *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  ?UpdateMissile@CgPredictedEntitySystem@@IEAAXPEAUCgPredictedEntity@@HHH@Z(this, ent, prevUpdateTime, updateTime, timeElapsed);
}

/*
==============
CgPredictedEntitySystem::FreePredictedEntity
==============
*/

void __fastcall CgPredictedEntitySystem::FreePredictedEntity(CgPredictedEntitySystem *this, CgPredictedEntity *entToFree)
{
  ?FreePredictedEntity@CgPredictedEntitySystem@@QEAAXPEAUCgPredictedEntity@@@Z(this, entToFree);
}

/*
==============
CgPredictedEntityTrajectory::GetPhysicsWorld
==============
*/

int __fastcall CgPredictedEntityTrajectory::GetPhysicsWorld(CgPredictedEntityTrajectory *this)
{
  return ?GetPhysicsWorld@CgPredictedEntityTrajectory@@UEBAHXZ(this);
}

/*
==============
CgPredictedEntitySystem::UpdatePose
==============
*/

void __fastcall CgPredictedEntitySystem::UpdatePose(CgPredictedEntitySystem *this, CgPredictedEntity *ent, vec3_t *newOrigin, vec3_t *newAngles)
{
  ?UpdatePose@CgPredictedEntitySystem@@QEAAXPEAUCgPredictedEntity@@AEATvec3_t@@1@Z(this, ent, newOrigin, newAngles);
}

/*
==============
CgPredictedEntitySystem::Shutdown
==============
*/

void __fastcall CgPredictedEntitySystem::Shutdown(CgPredictedEntitySystem *this)
{
  ?Shutdown@CgPredictedEntitySystem@@IEAAXXZ(this);
}

/*
==============
CgPredictedEntitySystem::GetBoneTransform
==============
*/

bool __fastcall CgPredictedEntitySystem::GetBoneTransform(CgPredictedEntitySystem *this, const int predictedEntIdx, unsigned __int8 boneIndex, vec3_t *outPos, tmat33_t<vec3_t> *outAxis, bool *outBoneVisible)
{
  return ?GetBoneTransform@CgPredictedEntitySystem@@QEBA_NHEAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@AEA_N@Z(this, predictedEntIdx, boneIndex, outPos, outAxis, outBoneVisible);
}

/*
==============
CgPredictedEntitySystem::CopyEntityOrientation
==============
*/

void __fastcall CgPredictedEntitySystem::CopyEntityOrientation(CgPredictedEntitySystem *this, const int predictedEntIdx, vec3_t *outPos, tmat33_t<vec3_t> *outAxis)
{
  ?CopyEntityOrientation@CgPredictedEntitySystem@@QEBAXHAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(this, predictedEntIdx, outPos, outAxis);
}

/*
==============
CgPredictedEntitySystem::SpawnPredictedEntity
==============
*/

CgPredictedEntity *__fastcall CgPredictedEntitySystem::SpawnPredictedEntity(CgPredictedEntitySystem *this)
{
  return ?SpawnPredictedEntity@CgPredictedEntitySystem@@QEAAPEAUCgPredictedEntity@@XZ(this);
}

/*
==============
CgPredictedEntitySystem::PreAddPacketEntitiesUpdateMissile
==============
*/

void __fastcall CgPredictedEntitySystem::PreAddPacketEntitiesUpdateMissile(CgPredictedEntitySystem *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  ?PreAddPacketEntitiesUpdateMissile@CgPredictedEntitySystem@@IEAAXPEAUCgPredictedEntity@@HHH@Z(this, ent, prevUpdateTime, updateTime, timeElapsed);
}

/*
==============
CgPredictedEntitySystem::PreAddPacketEntitiesUpdate
==============
*/

void __fastcall CgPredictedEntitySystem::PreAddPacketEntitiesUpdate(CgPredictedEntitySystem *this)
{
  ?PreAddPacketEntitiesUpdate@CgPredictedEntitySystem@@QEAAXXZ(this);
}

/*
==============
CgPredictedEntitySystem::~CgPredictedEntitySystem
==============
*/

void __fastcall CgPredictedEntitySystem::~CgPredictedEntitySystem(CgPredictedEntitySystem *this)
{
  ??1CgPredictedEntitySystem@@UEAA@XZ(this);
}

/*
==============
CgPredictedEntitySystem::PostSnapshotInit
==============
*/

void __fastcall CgPredictedEntitySystem::PostSnapshotInit(CgPredictedEntitySystem *this)
{
  ?PostSnapshotInit@CgPredictedEntitySystem@@QEAAXXZ(this);
}

/*
==============
CgPredictedEntityTrajectory::CgPredictedEntityTrajectory
==============
*/

void __fastcall CgPredictedEntityTrajectory::CgPredictedEntityTrajectory(CgPredictedEntityTrajectory *this, const LocalClientNum_t localClientNum, const CgPredictedEntity *ent)
{
  ??0CgPredictedEntityTrajectory@@QEAA@W4LocalClientNum_t@@PEBUCgPredictedEntity@@@Z(this, localClientNum, ent);
}

/*
==============
CgPredictedEntitySystem::InitClientTrajectoryEntity
==============
*/

void __fastcall CgPredictedEntitySystem::InitClientTrajectoryEntity(CgPredictedEntitySystem *this, CgPredictedEntity *parentEntity, CgPredictedEntity *clientTrajectoryEntity)
{
  ?InitClientTrajectoryEntity@CgPredictedEntitySystem@@IEAAXPEAUCgPredictedEntity@@0@Z(this, parentEntity, clientTrajectoryEntity);
}

/*
==============
CgPredictedEntitySystem::GetParentAxis
==============
*/

bool __fastcall CgPredictedEntitySystem::GetParentAxis(CgPredictedEntitySystem *this, CgPredictedEntity *ent, tmat43_t<vec3_t> *outParentAxis)
{
  return ?GetParentAxis@CgPredictedEntitySystem@@QEBA_NPEAUCgPredictedEntity@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(this, ent, outParentAxis);
}

/*
==============
CgPredictedEntityTrajectory::CgPredictedEntityTrajectory
==============
*/
void CgPredictedEntityTrajectory::CgPredictedEntityTrajectory(CgPredictedEntityTrajectory *this, const LocalClientNum_t localClientNum, const CgPredictedEntity *ent)
{
  BgTrajectory::BgTrajectory(this);
  this->m_ent = ent;
  this->__vftable = (CgPredictedEntityTrajectory_vtbl *)&CgPredictedEntityTrajectory::`vftable';
  this->m_localClientNum = localClientNum;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 46, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  this->m_es = &ent->s.lerp;
}

/*
==============
CgPredictedEntitySystem::~CgPredictedEntitySystem
==============
*/
void CgPredictedEntitySystem::~CgPredictedEntitySystem(CgPredictedEntitySystem *this)
{
  this->__vftable = (CgPredictedEntitySystem_vtbl *)&BgPredictedEntitySystem::`vftable';
}

/*
==============
CgPredictedEntitySystem::CanSpawnNewEntities
==============
*/
bool CgPredictedEntitySystem::CanSpawnNewEntities(CgPredictedEntitySystem *this)
{
  return this->m_firstFreeEntity || this->m_numEntities < 32;
}

/*
==============
CgPredictedEntitySystem::CopyEntityOrientation
==============
*/
void CgPredictedEntitySystem::CopyEntityOrientation(CgPredictedEntitySystem *this, const int predictedEntIdx, vec3_t *outPos, tmat33_t<vec3_t> *outAxis)
{
  __int64 v4; 
  cpose_t *p_pose; 
  float v9; 
  vec3_t angles; 

  v4 = predictedEntIdx;
  if ( (unsigned int)predictedEntIdx >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 679, ASSERT_TYPE_ASSERT, "(unsigned)( predictedEntIdx ) < (unsigned)( ( 32 ) )", "predictedEntIdx doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", predictedEntIdx, 32) )
    __debugbreak();
  if ( this->m_entities[v4].isInUse )
  {
    p_pose = &this->m_entities[v4].pose;
    CG_GetPoseOrigin(p_pose, outPos);
    if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    v9 = p_pose->angles.v[1];
    angles.v[0] = p_pose->angles.v[0];
    angles.v[2] = p_pose->angles.v[2];
    angles.v[1] = v9;
    AnglesToAxis(&angles, outAxis);
  }
  else
  {
    *(_QWORD *)outPos->v = 0i64;
    outPos->v[2] = 0.0;
    MatrixIdentity33(outAxis);
  }
}

/*
==============
CgPredictedEntitySystem::DisassociateFromPredictedEntity
==============
*/
void CgPredictedEntitySystem::DisassociateFromPredictedEntity(CgPredictedEntitySystem *this, centity_t *cent)
{
  unsigned int number; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 558, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  number = cent->nextState.number;
  if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
    __debugbreak();
  this->m_centPredictedEntityLookup.array[(unsigned __int64)number >> 5] &= ~(0x80000000 >> (number & 0x1F));
}

/*
==============
CgPredictedEntitySystem::EvalSnapshotEnt
==============
*/
void CgPredictedEntitySystem::EvalSnapshotEnt(CgPredictedEntitySystem *this, centity_t *cent)
{
  int ClientNumFromPredictionKey; 
  int v5; 
  CgPredictedEntityState *p_predictionState; 
  const dvar_t *v7; 
  cg_t *LocalClientGlobals; 
  cg_t *v9; 
  unsigned int number; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 423, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 424, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType == ET_MISSILE && !BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&cent->nextState.lerp.u) )
  {
    ClientNumFromPredictionKey = BgPredictedEntitySystem::GetClientNumFromPredictionKey((const unsigned int *)&cent->nextState.lerp.u);
    if ( ClientNumFromPredictionKey == CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.clientNum )
    {
      v5 = 0;
      if ( this->m_numEntities <= 0 )
      {
LABEL_16:
        v7 = DCONST_DVARBOOL_cg_predictedMissileDebug;
        if ( !DCONST_DVARBOOL_cg_predictedMissileDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_predictedMissileDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( v7->current.enabled )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
          if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 499, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          if ( LocalClientGlobals->time - cent->nextState.lerp.u.anonymous.data[2] < VALIDATION_TIME_MS && !CG_Missile_HasPredictedMissileForTime(cent->nextState.lerp.u.anonymous.data[0]) )
          {
            LODWORD(v15) = cent->nextState.lerp.u.anonymous.data[0];
            LODWORD(v14) = cent->nextState.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 506, ASSERT_TYPE_ASSERT, "( CG_Missile_HasPredictedMissileForTime( static_cast<int>( es->lerp.u.missile.predictionKey[0] ) ) )", "No predicted missile entity created for ent %d with server time %u.", v14, v15) )
              __debugbreak();
          }
        }
      }
      else
      {
        p_predictionState = &this->m_entities[0].predictionState;
        while ( !*((_BYTE *)p_predictionState + 48) || *p_predictionState == CLIENT_TRAJECTORY_ENTITY || !BgPredictedEntitySystem::IsSamePredictionKey((const unsigned int *)&cent->nextState.lerp.u, (const unsigned int *)p_predictionState - 191) )
        {
          ++v5;
          p_predictionState += 226;
          if ( v5 >= this->m_numEntities )
            goto LABEL_16;
        }
        if ( *p_predictionState == WAITING_FOR_SERVER_ENT )
          *p_predictionState = BLENDING_TO_SERVER_ENT;
        v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 469, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        number = cent->nextState.number;
        if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", cent->nextState.number, 2048) )
          __debugbreak();
        this->m_centPredictedEntityLookup.array[(unsigned __int64)number >> 5] |= 0x80000000 >> (number & 0x1F);
        v11 = *((_DWORD *)p_predictionState + 4) == 0;
        *((_DWORD *)p_predictionState + 3) = cent->nextState.number;
        if ( v11 )
          p_predictionState[4] = (CgPredictedEntityState)v9->time;
        v12 = *(_QWORD *)(p_predictionState - 25);
        if ( v12 )
        {
          *(_DWORD *)(v12 + 864) = cent->nextState.number;
          v13 = *(_QWORD *)(p_predictionState - 25);
          if ( !*(_DWORD *)(v13 + 868) )
            *(_DWORD *)(v13 + 868) = v9->time;
        }
      }
    }
  }
}

/*
==============
CgPredictedEntitySystem::FreePredictedEntity
==============
*/
void CgPredictedEntitySystem::FreePredictedEntity(CgPredictedEntitySystem *this, CgPredictedEntity *entToFree)
{
  CgPredictedEntity *clientTrajectoryEntity; 
  int serverEntNum; 
  centity_t *Entity; 
  unsigned int number; 
  __int64 m_localClientNum; 
  ParticleManager *v9; 
  CgPredictedEntity *m_firstFreeEntity; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  while ( 1 )
  {
    if ( !entToFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 232, ASSERT_TYPE_ASSERT, "(entToFree)", (const char *)&queryFormat, "entToFree") )
      __debugbreak();
    if ( !entToFree->isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 233, ASSERT_TYPE_ASSERT, "(entToFree->isInUse)", (const char *)&queryFormat, "entToFree->isInUse") )
      __debugbreak();
    if ( entToFree->nextFree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 234, ASSERT_TYPE_ASSERT, "(!entToFree->nextFree)", (const char *)&queryFormat, "!entToFree->nextFree") )
      __debugbreak();
    clientTrajectoryEntity = entToFree->clientTrajectoryEntity;
    if ( entToFree->predictionState != CLIENT_TRAJECTORY_ENTITY )
    {
      serverEntNum = entToFree->serverEntNum;
      if ( serverEntNum != 2047 )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, serverEntNum);
        if ( (Entity->flags & 1) != 0 )
        {
          number = Entity->nextState.number;
          if ( number >= 0x800 )
          {
            LODWORD(v14) = 2048;
            LODWORD(v13) = Entity->nextState.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
              __debugbreak();
          }
          this->m_centPredictedEntityLookup.array[(unsigned __int64)number >> 5] &= ~(0x80000000 >> (number & 0x1F));
        }
      }
    }
    m_localClientNum = this->m_localClientNum;
    if ( (unsigned int)m_localClientNum >= 2 )
    {
      LODWORD(v12) = 2;
      LODWORD(v11) = this->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v9 = &g_particleManager[m_localClientNum];
    if ( v9 )
      ParticleManager::KillAllSystemsOnDObjImmediate(v9, entToFree->s.number, 1);
    Com_SafeClientDObjFree(entToFree->s.number, this->m_localClientNum);
    CgPredictedEntitySystem::ResetEntity(this, entToFree);
    m_firstFreeEntity = this->m_firstFreeEntity;
    this->m_firstFreeEntity = entToFree;
    if ( m_firstFreeEntity )
      entToFree->nextFree = m_firstFreeEntity;
    else
      this->m_lastFreeEntity = entToFree;
    if ( !clientTrajectoryEntity || !clientTrajectoryEntity->isInUse )
      break;
    entToFree = clientTrajectoryEntity;
  }
}

/*
==============
CgPredictedEntitySystem::GetBoneTransform
==============
*/
bool CgPredictedEntitySystem::GetBoneTransform(CgPredictedEntitySystem *this, const int predictedEntIdx, unsigned __int8 boneIndex, vec3_t *outPos, tmat33_t<vec3_t> *outAxis, bool *outBoneVisible)
{
  __int64 v6; 
  __int64 v10; 
  const DObj *ClientDObj; 
  const DObj *v12; 
  __int64 v14; 
  __int64 v16; 
  int v17; 

  v6 = predictedEntIdx;
  if ( (unsigned int)predictedEntIdx >= 0x20 )
  {
    v17 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 651, ASSERT_TYPE_ASSERT, "(unsigned)( predictedEntIdx ) < (unsigned)( ( 32 ) )", "predictedEntIdx doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", predictedEntIdx, v17) )
      __debugbreak();
  }
  *(_QWORD *)outPos->v = 0i64;
  outPos->v[2] = 0.0;
  MatrixIdentity33(outAxis);
  v10 = v6;
  if ( !this->m_entities[v6].isInUse )
    return 0;
  ClientDObj = Com_GetClientDObj(this->m_entities[v10].s.number, this->m_localClientNum);
  v12 = ClientDObj;
  if ( !ClientDObj )
    return 0;
  if ( boneIndex >= (unsigned int)DObjGetNumBones(ClientDObj) )
  {
    LODWORD(v16) = DObjGetNumBones(v12);
    LODWORD(v14) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 669, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DObjGetNumBones( obj ) )", "boneIndex doesn't index DObjGetNumBones( obj )\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  *outBoneVisible = !bitarray_base<bitarray<256>>::testBit(&v12->hidePartBits, boneIndex);
  return CG_DObjGetWorldBoneMatrix(&this->m_entities[v10].pose, v12, boneIndex, outAxis, outPos) == 1;
}

/*
==============
CgPredictedEntitySystem::GetDObj
==============
*/
DObj *CgPredictedEntitySystem::GetDObj(CgPredictedEntitySystem *this, CgPredictedEntity *ent, DObjModel *dobjModels, unsigned __int16 numModels, bool *outCreatedNew)
{
  DObj *result; 
  __int16 v10; 
  __int64 v11; 
  const XModel **models; 
  DObjModel *v13; 
  DObj *v14; 
  __int64 requiresIKPreCache; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 289, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !outCreatedNew && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 290, ASSERT_TYPE_ASSERT, "(outCreatedNew)", (const char *)&queryFormat, "outCreatedNew") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 225, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (unsigned int)(((char *)ent - (char *)this - 24) / 904) >= 0x20 )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 225, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    LODWORD(requiresIKPreCache) = ((char *)ent - (char *)this - 24) / 904;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( GetEntityIndex( ent ) ) < (unsigned)( ( 32 ) )", "GetEntityIndex( ent ) doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", requiresIKPreCache, 32) )
      __debugbreak();
  }
  result = Com_GetClientDObj(ent->s.number, this->m_localClientNum);
  if ( result )
  {
    v10 = result->numModels;
    if ( v10 == numModels )
    {
      v11 = 0i64;
      if ( numModels )
      {
        models = result->models;
        v13 = dobjModels;
        while ( *models == v13->model )
        {
          ++v11;
          ++models;
          ++v13;
          if ( v11 >= numModels )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        if ( v10 == numModels )
        {
          *outCreatedNew = 0;
          return result;
        }
      }
    }
    Com_SafeClientDObjFree(ent->s.number, this->m_localClientNum);
  }
  v14 = Com_ClientDObjCreate(dobjModels, numModels, NULL, ent->s.number, this->m_localClientNum, 0, ent->s.number);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 324, ASSERT_TYPE_ASSERT, "(newObj)", (const char *)&queryFormat, "newObj") )
    __debugbreak();
  *outCreatedNew = 1;
  return v14;
}

/*
==============
CgPredictedEntityTrajectory::GetDObj
==============
*/
DObj *CgPredictedEntityTrajectory::GetDObj(CgPredictedEntityTrajectory *this)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 58, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgPredictedEntityTrajectory::GetDObj() is not implemented") )
    __debugbreak();
  return 0i64;
}

/*
==============
CgPredictedEntitySystem::GetEntityIndex
==============
*/
signed __int64 CgPredictedEntitySystem::GetEntityIndex(CgPredictedEntitySystem *this, CgPredictedEntity *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 225, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return ((char *)ent - (char *)this - 24) / 904;
}

/*
==============
CgPredictedEntitySystem::GetParentAxis
==============
*/
bool CgPredictedEntitySystem::GetParentAxis(CgPredictedEntitySystem *this, CgPredictedEntity *ent, tmat43_t<vec3_t> *outParentAxis)
{
  centity_t *Entity; 
  const DObj *ClientDObj; 
  scr_string_t tagName; 
  int number; 
  const char *Name; 
  unsigned int predictedEntNum; 
  const char *v13; 
  __int64 v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 599, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->linkInfo.parentEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 600, ASSERT_TYPE_ASSERT, "(ent->linkInfo.parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ent->linkInfo.parentEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, ent->linkInfo.parentEntNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 603, ASSERT_TYPE_ASSERT, "(CENextValid( parent ))", (const char *)&queryFormat, "CENextValid( parent )") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(Entity->nextState.number, this->m_localClientNum);
  if ( !ClientDObj )
  {
    Com_PrintWarning(14, "Predicted Ent %d, couldn't get client DObj for parent ent %d.\n", (unsigned int)ent->predictedEntNum, (unsigned int)Entity->nextState.number);
    return 0;
  }
  tagName = ent->linkInfo.tagName;
  if ( tagName )
  {
    if ( CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, tagName, (tmat33_t<vec3_t> *)outParentAxis, &outParentAxis->m[3]) == 1 )
      return 1;
    number = Entity->nextState.number;
    Name = DObjGetName(ClientDObj);
    predictedEntNum = ent->predictedEntNum;
    v13 = SL_ConvertToString(ent->linkInfo.tagName);
    LODWORD(v14) = number;
    Com_PrintWarning(14, "Couldn't get world matrix for bone %s in dobj for predicted ent %d ( model %s ), parent of ent %d.\n", v13, predictedEntNum, Name, v14);
  }
  return CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_origin, (tmat33_t<vec3_t> *)outParentAxis, &outParentAxis->m[3]) == 1;
}

/*
==============
CgPredictedEntityTrajectory::GetPhysicsWorld
==============
*/
__int64 CgPredictedEntityTrajectory::GetPhysicsWorld(CgPredictedEntityTrajectory *this)
{
  return (unsigned int)(3 * this->m_localClientNum + 2);
}

/*
==============
CgPredictedEntitySystem::GetPoseForDObjHandle
==============
*/
cpose_t *CgPredictedEntitySystem::GetPoseForDObjHandle(CgPredictedEntitySystem *this, const int dobjHandle)
{
  unsigned int v4; 
  __int64 v6; 
  __int64 v8; 
  int v9; 
  int v10; 

  if ( (unsigned int)(dobjHandle - 2501) > 0x1F )
  {
    v10 = 2532;
    v9 = 2501;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 587, ASSERT_TYPE_ASSERT, "( ((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) ) <= ( dobjHandle ) && ( dobjHandle ) <= ( ((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1 )", "dobjHandle not in [DOBJ_HANDLE_FIRST_PREDICTED_ENT, DOBJ_HANDLE_FIRST_PREDICTED_ENT + MAX_PREDICTED_ENTS - 1]\n\t%i not in [%i, %i]", dobjHandle, v9, v10) )
      __debugbreak();
  }
  v4 = dobjHandle - 2501;
  if ( v4 >= 0x20 )
  {
    LODWORD(v8) = 32;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 591, ASSERT_TYPE_ASSERT, "(unsigned)( entIdx ) < (unsigned)( ( 32 ) )", "entIdx doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  return &this->m_entities[v4].pose;
}

/*
==============
CgPredictedEntitySystem::GetPredictedEntityPose
==============
*/
const cpose_t *CgPredictedEntitySystem::GetPredictedEntityPose(CgPredictedEntitySystem *this, const int predictedEntIdx)
{
  __int64 v2; 
  char *v4; 
  int v7; 

  v2 = predictedEntIdx;
  if ( (unsigned int)predictedEntIdx >= 0x20 )
  {
    v7 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 642, ASSERT_TYPE_ASSERT, "(unsigned)( predictedEntIdx ) < (unsigned)( ( 32 ) )", "predictedEntIdx doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", predictedEntIdx, v7) )
      __debugbreak();
  }
  v4 = (char *)this + 904 * v2;
  if ( !v4[924] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 643, ASSERT_TYPE_ASSERT, "(m_entities[predictedEntIdx].isInUse)", (const char *)&queryFormat, "m_entities[predictedEntIdx].isInUse") )
    __debugbreak();
  return (const cpose_t *)(v4 + 448);
}

/*
==============
CgPredictedEntitySystem::GetSystem
==============
*/
CgPredictedEntitySystem *CgPredictedEntitySystem::GetSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgPredictedEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 115, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the predicted entity system for localClientNum %d but the predicted entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgPredictedEntitySystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgPredictedEntitySystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgPredictedEntitySystem::ms_systemsArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 117, ASSERT_TYPE_ASSERT, "(ms_systemsArray[localClientNum])", "%s\n\tTrying to access unallocated predicted entity system for localClientNum %d\n", "ms_systemsArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgPredictedEntitySystem::ms_systemsArray[v1];
}

/*
==============
CgPredictedEntityTrajectory::GetTargetPos
==============
*/
bool CgPredictedEntityTrajectory::GetTargetPos(CgPredictedEntityTrajectory *this, vec3_t *outPos)
{
  const CgPredictedEntity *m_ent; 
  unsigned int m_mapEntryId; 
  const cpose_t *PoseExtended; 
  bool result; 
  __int64 v8; 
  vec3_t outOrigin; 

  if ( !this->m_ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 71, ASSERT_TYPE_ASSERT, "(m_ent)", (const char *)&queryFormat, "m_ent") )
    __debugbreak();
  m_ent = this->m_ent;
  if ( m_ent->s.eType != ET_MISSILE || (m_mapEntryId = m_ent->s.lerp.u.player.executionWeaponHandle.m_mapEntryId, m_mapEntryId == 2047) )
  {
    result = 0;
    *(_QWORD *)outPos->v = 0i64;
    outPos->v[2] = 0.0;
  }
  else
  {
    if ( m_mapEntryId >= 0x800 )
    {
      LODWORD(v8) = m_mapEntryId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 78, ASSERT_TYPE_ASSERT, "(unsigned)( m_ent->s.lerp.u.missile.targetEnt ) < (unsigned)( ( 2048 ) )", "m_ent->s.lerp.u.missile.targetEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
        __debugbreak();
    }
    PoseExtended = CG_GetPoseExtended((LocalClientNum_t)this->m_localClientNum, this->m_ent->s.lerp.u.anonymous.data[5], 0);
    CG_GetPoseOrigin(PoseExtended, &outOrigin);
    *outPos = outOrigin;
    result = 1;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  return result;
}

/*
==============
CgPredictedEntitySystem::HasAssociatedPredictedEntity
==============
*/
bool CgPredictedEntitySystem::HasAssociatedPredictedEntity(CgPredictedEntitySystem *this, centity_t *cent)
{
  unsigned int number; 
  __int64 v6; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 551, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  number = cent->nextState.number;
  if ( number >= 0x800 )
  {
    LODWORD(v6) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v6, 2048) )
      __debugbreak();
  }
  return ((0x80000000 >> (number & 0x1F)) & this->m_centPredictedEntityLookup.array[(unsigned __int64)number >> 5]) != 0;
}

/*
==============
CgPredictedEntitySystem::InitClientTrajectoryEntity
==============
*/
void CgPredictedEntitySystem::InitClientTrajectoryEntity(CgPredictedEntitySystem *this, CgPredictedEntity *parentEntity, CgPredictedEntity *clientTrajectoryEntity)
{
  int predictedEntNum; 
  cpose_t *p_pose; 
  void (__fastcall *v7)(const vec3_t *, vec4_t *); 
  cpose_t *v8; 
  cpose_t *v9; 
  __int64 v10; 
  __int64 v11; 
  char *v12; 
  cpose_t *v13; 
  __int64 v14; 
  CgPredictedEntity *v15; 
  CgPredictedEntity *v16; 
  __int64 v17; 
  char *v18; 
  __int16 v19; 
  __int64 v20; 
  vec3_t outOrigin; 
  __int64 v22; 
  char v23[344]; 
  void (__fastcall *functionPointer)(const vec4_t *, vec3_t *); 
  void (__fastcall *Origin)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 

  v22 = -2i64;
  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 565, ASSERT_TYPE_ASSERT, "(parentEntity)", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  if ( !clientTrajectoryEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 566, ASSERT_TYPE_ASSERT, "(clientTrajectoryEntity)", (const char *)&queryFormat, "clientTrajectoryEntity") )
    __debugbreak();
  predictedEntNum = clientTrajectoryEntity->predictedEntNum;
  p_pose = &clientTrajectoryEntity->pose;
  v7 = ObfuscateSetFunctionPointer_origin(clientTrajectoryEntity->pose.origin.Set_origin, &clientTrajectoryEntity->pose);
  functionPointer = ObfuscateGetFunctionPointer_origin(clientTrajectoryEntity->pose.origin.Get_origin, &clientTrajectoryEntity->pose);
  Origin = ObfuscateSetFunctionPointer_prevOrigin(clientTrajectoryEntity->pose.prevOrigin.Set_prevOrigin, &clientTrajectoryEntity->pose);
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(clientTrajectoryEntity->pose.prevOrigin.Get_prevOrigin, &clientTrajectoryEntity->pose);
  v8 = &clientTrajectoryEntity->pose;
  v9 = &parentEntity->pose;
  v10 = 2i64;
  v11 = 2i64;
  do
  {
    *(_OWORD *)&v8->eType = *(_OWORD *)&v9->eType;
    *(_OWORD *)&v8->ragdollHandle = *(_OWORD *)&v9->ragdollHandle;
    *(_OWORD *)&v8->actualOrigin.y = *(_OWORD *)&v9->actualOrigin.y;
    *(_OWORD *)&v8->origin.Get_origin = *(_OWORD *)&v9->origin.Get_origin;
    *(SecureOrigin::secureUnion *)((char *)&v8->origin.origin + 8) = *(SecureOrigin::secureUnion *)((char *)&v9->origin.origin + 8);
    *(_OWORD *)&v8->angles.z = *(_OWORD *)&v9->angles.z;
    *(_OWORD *)&v8->prevOrigin.Get_prevOrigin = *(_OWORD *)&v9->prevOrigin.Get_prevOrigin;
    v8 = (cpose_t *)((char *)v8 + 128);
    *((_OWORD *)&v8[-1].moverFx + 7) = *(vec4_t *)((char *)&v9->prevOrigin.prevOrigin + 8);
    v9 = (cpose_t *)((char *)v9 + 128);
    --v11;
  }
  while ( v11 );
  *(_OWORD *)&v8->eType = *(_OWORD *)&v9->eType;
  *(_OWORD *)&v8->ragdollHandle = *(_OWORD *)&v9->ragdollHandle;
  clientTrajectoryEntity->pose.origin.Set_origin = NULL;
  clientTrajectoryEntity->pose.origin.Get_origin = NULL;
  clientTrajectoryEntity->pose.prevOrigin.Set_prevOrigin = NULL;
  clientTrajectoryEntity->pose.prevOrigin.Get_prevOrigin = NULL;
  clientTrajectoryEntity->pose.origin.Set_origin = ObfuscateSetFunctionPointer_origin(v7, &clientTrajectoryEntity->pose);
  clientTrajectoryEntity->pose.origin.Get_origin = ObfuscateGetFunctionPointer_origin(functionPointer, &clientTrajectoryEntity->pose);
  clientTrajectoryEntity->pose.prevOrigin.Set_prevOrigin = ObfuscateSetFunctionPointer_prevOrigin(Origin, &clientTrajectoryEntity->pose);
  clientTrajectoryEntity->pose.prevOrigin.Get_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(FunctionPointer_prevOrigin, &clientTrajectoryEntity->pose);
  CG_GetPoseOrigin(&parentEntity->pose, &outOrigin);
  CG_SetPoseOrigin(&clientTrajectoryEntity->pose, &outOrigin);
  CG_GetPrevPoseOrigin(&parentEntity->pose, &outOrigin);
  CG_SetPrevPoseOrigin(&clientTrajectoryEntity->pose, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
  v12 = v23;
  v13 = &clientTrajectoryEntity->pose;
  v14 = 2i64;
  do
  {
    *(__m256i *)v12 = *(__m256i *)&v13->eType;
    *((__m256i *)v12 + 1) = *(__m256i *)&v13->actualOrigin.y;
    *((__m256i *)v12 + 2) = *(__m256i *)&v13->origin.origin.secureOrigin.xyz.z;
    *((_OWORD *)v12 + 6) = *(_OWORD *)&v13->prevOrigin.Get_prevOrigin;
    v12 += 128;
    *((_OWORD *)v12 - 1) = *(vec4_t *)((char *)&v13->prevOrigin.prevOrigin + 8);
    v13 = (cpose_t *)((char *)v13 + 128);
    --v14;
  }
  while ( v14 );
  *(__m256i *)v12 = *(__m256i *)&v13->eType;
  v15 = clientTrajectoryEntity;
  v16 = parentEntity;
  v17 = 7i64;
  do
  {
    *(_OWORD *)&v15->s.number = *(_OWORD *)&v16->s.number;
    *(_OWORD *)&v15->s.lerp.pos.trType = *(_OWORD *)&v16->s.lerp.pos.trType;
    *(_OWORD *)&v15->s.lerp.pos.trBase.y = *(_OWORD *)&v16->s.lerp.pos.trBase.y;
    *(_OWORD *)&v15->s.lerp.pos.trDelta.z = *(_OWORD *)&v16->s.lerp.pos.trDelta.z;
    *(_OWORD *)v15->s.lerp.apos.trBase.v = *(_OWORD *)v16->s.lerp.apos.trBase.v;
    *(_OWORD *)&v15->s.lerp.apos.trDelta.y = *(_OWORD *)&v16->s.lerp.apos.trDelta.y;
    *(_OWORD *)&v15->s.lerp.u.vehicle.bodyPitch = *(_OWORD *)&v16->s.lerp.u.vehicle.bodyPitch;
    v15 = (CgPredictedEntity *)((char *)v15 + 128);
    *(LerpEntityStateInfoVolumeGrapple *)&v15[-1].ownerEntNum = *(LerpEntityStateInfoVolumeGrapple *)((char *)&v16->s.lerp.u.infoVolumeGrapple + 24);
    v16 = (CgPredictedEntity *)((char *)v16 + 128);
    --v17;
  }
  while ( v17 );
  *(_QWORD *)&v15->s.number = *(_QWORD *)&v16->s.number;
  v18 = v23;
  do
  {
    *(__m256i *)&p_pose->eType = *(__m256i *)v18;
    *(__m256i *)&p_pose->actualOrigin.y = *((__m256i *)v18 + 1);
    *(__m256i *)&p_pose->origin.origin.secureOrigin.xyz.z = *((__m256i *)v18 + 2);
    *(_OWORD *)&p_pose->prevOrigin.Get_prevOrigin = *((_OWORD *)v18 + 6);
    p_pose = (cpose_t *)((char *)p_pose + 128);
    *((_OWORD *)&p_pose[-1].moverFx + 7) = *((_OWORD *)v18 + 7);
    v18 += 128;
    --v10;
  }
  while ( v10 );
  *(__m256i *)&p_pose->eType = *(__m256i *)v18;
  clientTrajectoryEntity->predictionState = CLIENT_TRAJECTORY_ENTITY;
  clientTrajectoryEntity->predictedEntNum = predictedEntNum;
  v19 = truncate_cast<short,unsigned int>(predictedEntNum + 2501);
  clientTrajectoryEntity->s.number = v19;
  if ( (unsigned int)(v19 - 2501) > 0x1F )
  {
    LODWORD(v20) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 578, ASSERT_TYPE_ASSERT, "( ENTITYNUM_PREDICTED_ENT_START ) <= ( clientTrajectoryEntity->s.number ) && ( clientTrajectoryEntity->s.number ) <= ( ENTITYNUM_PREDICTED_ENT_END - 1 )", "clientTrajectoryEntity->s.number not in [ENTITYNUM_PREDICTED_ENT_START, ENTITYNUM_PREDICTED_ENT_END - 1]\n\t%i not in [%i, %i]", v20, 2501, 2532) )
      __debugbreak();
  }
  parentEntity->clientTrajectoryEntity = clientTrajectoryEntity;
}

/*
==============
CgPredictedEntitySystem::InitEntity
==============
*/
void CgPredictedEntitySystem::InitEntity(CgPredictedEntitySystem *this, CgPredictedEntity *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 181, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  CgPredictedEntitySystem::ResetEntity(this, ent);
  ent->isInUse = 1;
  ent->predictionState = WAITING_FOR_SERVER_ENT;
}

/*
==============
CgPredictedEntityTrajectory::IsClient
==============
*/
char CgPredictedEntityTrajectory::IsClient(CgPredictedEntityTrajectory *this)
{
  return 1;
}

/*
==============
CgPredictedEntitySystem::IsPredictedEntityInUse
==============
*/
_BOOL8 CgPredictedEntitySystem::IsPredictedEntityInUse(CgPredictedEntitySystem *this, const int predictedEntIdx)
{
  __int64 v2; 
  int v6; 

  v2 = predictedEntIdx;
  if ( (unsigned int)predictedEntIdx >= 0x20 )
  {
    v6 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( predictedEntIdx ) < (unsigned)( ( 32 ) )", "predictedEntIdx doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", predictedEntIdx, v6) )
      __debugbreak();
  }
  return this->m_entities[v2].isInUse;
}

/*
==============
CgPredictedEntitySystem::PostSnapshotInit
==============
*/
void CgPredictedEntitySystem::PostSnapshotInit(CgPredictedEntitySystem *this)
{
  __int64 m_localClientNum; 
  CgWeaponMap *v3; 
  int v4; 
  int *p_serverEntNum; 
  __int64 v6; 
  _BYTE v7[96]; 
  __int128 v8; 
  __int64 v9; 

  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[m_localClientNum];
  v4 = 0;
  *(_QWORD *)this->m_centPredictedEntityLookup.array = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[2] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[4] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[6] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[8] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[10] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[12] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[14] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[16] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[18] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[20] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[22] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[24] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[26] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[28] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[30] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[32] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[34] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[36] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[38] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[40] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[42] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[44] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[46] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[48] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[50] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[52] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[54] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[56] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[58] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[60] = 0i64;
  *(_QWORD *)&this->m_centPredictedEntityLookup.array[62] = 0i64;
  if ( this->m_numEntities > 0 )
  {
    p_serverEntNum = &this->m_entities[0].serverEntNum;
    do
    {
      if ( *((_BYTE *)p_serverEntNum + 36) )
      {
        v6 = *((_QWORD *)p_serverEntNum - 78);
        *(__m256i *)v7 = *((__m256i *)p_serverEntNum - 23);
        *(__m256i *)&v7[32] = *((__m256i *)p_serverEntNum - 22);
        *(__m256i *)&v7[64] = *((__m256i *)p_serverEntNum - 21);
        v8 = *((_OWORD *)p_serverEntNum - 40);
        v9 = v6;
        *p_serverEntNum = 2047;
        if ( !CgWeaponMap::FixUpWeaponHandle(v3, (BgWeaponHandle *)&v7[4], (const Weapon *)(p_serverEntNum - 24)) )
          CgPredictedEntitySystem::FreePredictedEntity(this, (CgPredictedEntity *)(p_serverEntNum - 216));
      }
      ++v4;
      p_serverEntNum += 226;
    }
    while ( v4 < this->m_numEntities );
  }
}

/*
==============
CgPredictedEntitySystem::PreAddPacketEntitiesUpdate
==============
*/
void CgPredictedEntitySystem::PreAddPacketEntitiesUpdate(CgPredictedEntitySystem *this)
{
  cg_t *LocalClientGlobals; 
  int v3; 
  entityType_s *p_initialSpawnType; 
  int frametime; 
  int time; 
  int oldTime; 
  CgMissile *System; 
  __int64 v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 370, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v3 = 0;
  if ( this->m_numEntities > 0 )
  {
    p_initialSpawnType = &this->m_entities[0].initialSpawnType;
    do
    {
      if ( *((_BYTE *)p_initialSpawnType + 40) )
      {
        if ( *p_initialSpawnType == ET_MISSILE )
        {
          frametime = LocalClientGlobals->frametime;
          time = LocalClientGlobals->time;
          oldTime = LocalClientGlobals->oldTime;
          System = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
          if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 525, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
            __debugbreak();
          CgMissile::PreAddPacketEntitiesUpdateMissile(System, (CgPredictedEntity *)(p_initialSpawnType - 430), oldTime, time, frametime);
        }
        else
        {
          LODWORD(v9) = *((__int16 *)p_initialSpawnType - 426);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 386, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled entity type: %d in CgPredictedEntitySystem::PreAddPacketEntitiesUpdate.", v9) )
            __debugbreak();
        }
      }
      ++v3;
      p_initialSpawnType += 452;
    }
    while ( v3 < this->m_numEntities );
  }
}

/*
==============
CgPredictedEntitySystem::PreAddPacketEntitiesUpdateMissile
==============
*/
void CgPredictedEntitySystem::PreAddPacketEntitiesUpdateMissile(CgPredictedEntitySystem *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  CgMissile *System; 

  System = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 525, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  CgMissile::PreAddPacketEntitiesUpdateMissile(System, ent, prevUpdateTime, updateTime, timeElapsed);
}

/*
==============
CgPredictedEntitySystem::ResetEntity
==============
*/
void CgPredictedEntitySystem::ResetEntity(CgPredictedEntitySystem *this, CgPredictedEntity *ent)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int EntityIndex; 
  __int16 v7; 
  __int64 v8; 
  __int64 v9; 
  bdRandom v10; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 192, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  memset_0(ent, 0, sizeof(CgPredictedEntity));
  bdRandom::bdRandom(&v10);
  v4 = bdRandom::nextUInt(&v10) % 0x22;
  bdRandom::~bdRandom(&v10);
  bdRandom::bdRandom(&v10);
  v5 = bdRandom::nextUInt(&v10) % 0x22;
  bdRandom::~bdRandom(&v10);
  CG_ResetPoseZero(&ent->pose, v5, v4);
  EntityIndex = CgPredictedEntitySystem::GetEntityIndex(this, ent);
  ent->predictedEntNum = EntityIndex;
  if ( EntityIndex >= 0x20 )
  {
    LODWORD(v8) = EntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( ent->predictedEntNum ) < (unsigned)( ( 32 ) )", "ent->predictedEntNum doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", v8, 32) )
      __debugbreak();
  }
  v7 = truncate_cast<short,unsigned int>(ent->predictedEntNum + 2501);
  ent->s.number = v7;
  if ( (unsigned int)(v7 - 2501) > 0x1F )
  {
    LODWORD(v9) = 2501;
    LODWORD(v8) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 209, ASSERT_TYPE_ASSERT, "( ENTITYNUM_PREDICTED_ENT_START ) <= ( ent->s.number ) && ( ent->s.number ) <= ( ENTITYNUM_PREDICTED_ENT_END - 1 )", "ent->s.number not in [ENTITYNUM_PREDICTED_ENT_START, ENTITYNUM_PREDICTED_ENT_END - 1]\n\t%i not in [%i, %i]", v8, v9, 2532) )
      __debugbreak();
  }
  ent->serverEntNum = 2047;
  ent->parentEntNum = 2047;
  ent->ownerEntNum = 2047;
  ent->missileTargetEnt = 2047;
  ent->predictionState = WAITING_TO_SPAWN;
  ent->initialSpawnType = ET_FIRST;
  ent->linkInfo = (CgPredictedEntityLinkInfo)2047i64;
  ent->entityWeapon = NULL_WEAPON;
}

/*
==============
CgPredictedEntitySystem::Shutdown
==============
*/
void CgPredictedEntitySystem::Shutdown(CgPredictedEntitySystem *this)
{
  int v1; 
  bool *p_isInUse; 
  CgPredictedEntity *v4; 
  int v5; 
  centity_t *Entity; 
  unsigned int number; 
  __int64 m_localClientNum; 
  ParticleManager *v9; 
  CgPredictedEntity *m_firstFreeEntity; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v1 = 0;
  if ( this->m_numEntities > 0 )
  {
    p_isInUse = &this->m_entities[0].isInUse;
    do
    {
      if ( *p_isInUse )
      {
        if ( *(_QWORD *)(p_isInUse - 140) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 234, ASSERT_TYPE_ASSERT, "(!entToFree->nextFree)", (const char *)&queryFormat, "!entToFree->nextFree") )
          __debugbreak();
        v4 = *(CgPredictedEntity **)(p_isInUse - 148);
        if ( *((_DWORD *)p_isInUse - 12) != 1 )
        {
          v5 = *((_DWORD *)p_isInUse - 9);
          if ( v5 != 2047 )
          {
            Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v5);
            if ( (Entity->flags & 1) != 0 )
            {
              number = Entity->nextState.number;
              if ( number >= 0x800 )
              {
                LODWORD(v14) = 2048;
                LODWORD(v13) = Entity->nextState.number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
                  __debugbreak();
              }
              this->m_centPredictedEntityLookup.array[(unsigned __int64)number >> 5] &= ~(0x80000000 >> (number & 0x1F));
            }
          }
        }
        m_localClientNum = this->m_localClientNum;
        if ( (unsigned int)m_localClientNum >= 2 )
        {
          LODWORD(v12) = 2;
          LODWORD(v11) = this->m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        v9 = &g_particleManager[m_localClientNum];
        if ( v9 )
          ParticleManager::KillAllSystemsOnDObjImmediate(v9, *((__int16 *)p_isInUse - 450), 1);
        Com_SafeClientDObjFree(*((__int16 *)p_isInUse - 450), this->m_localClientNum);
        CgPredictedEntitySystem::ResetEntity(this, (CgPredictedEntity *)(p_isInUse - 900));
        m_firstFreeEntity = this->m_firstFreeEntity;
        this->m_firstFreeEntity = (CgPredictedEntity *)(p_isInUse - 900);
        if ( m_firstFreeEntity )
          *(_QWORD *)(p_isInUse - 140) = m_firstFreeEntity;
        else
          this->m_lastFreeEntity = (CgPredictedEntity *)(p_isInUse - 900);
        if ( v4 )
        {
          if ( v4->isInUse )
            CgPredictedEntitySystem::FreePredictedEntity(this, v4);
        }
      }
      ++v1;
      p_isInUse += 904;
    }
    while ( v1 < this->m_numEntities );
  }
}

/*
==============
CgPredictedEntitySystem::SpawnClientTrajectoryEntity
==============
*/
CgPredictedEntity *CgPredictedEntitySystem::SpawnClientTrajectoryEntity(CgPredictedEntitySystem *this, CgPredictedEntity *parentEntity)
{
  CgPredictedEntity *m_firstFreeEntity; 
  CgPredictedEntity *nextFree; 
  __int64 m_numEntities; 

  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 164, ASSERT_TYPE_ASSERT, "(parentEntity)", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  m_firstFreeEntity = this->m_firstFreeEntity;
  if ( m_firstFreeEntity )
  {
    nextFree = m_firstFreeEntity->nextFree;
    this->m_firstFreeEntity = nextFree;
    if ( !nextFree )
      this->m_lastFreeEntity = NULL;
    m_firstFreeEntity->nextFree = NULL;
  }
  else
  {
    m_numEntities = this->m_numEntities;
    if ( (int)m_numEntities >= 32 )
    {
      Com_PrintWarning(17, "Reached the maximum number of client predicted entities. We might need to increase MAX_PREDICTED_ENTS(%d) to handle more.", 32i64);
      return 0i64;
    }
    this->m_numEntities = m_numEntities + 1;
    m_firstFreeEntity = &this->m_entities[m_numEntities];
  }
  if ( !m_firstFreeEntity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 154, ASSERT_TYPE_ASSERT, "(spawnedEnt)", (const char *)&queryFormat, "spawnedEnt") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 181, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  CgPredictedEntitySystem::ResetEntity(this, m_firstFreeEntity);
  m_firstFreeEntity->isInUse = 1;
  m_firstFreeEntity->predictionState = WAITING_FOR_SERVER_ENT;
  CgPredictedEntitySystem::InitClientTrajectoryEntity(this, parentEntity, m_firstFreeEntity);
  return m_firstFreeEntity;
}

/*
==============
CgPredictedEntitySystem::SpawnPredictedEntity
==============
*/
CgPredictedEntity *CgPredictedEntitySystem::SpawnPredictedEntity(CgPredictedEntitySystem *this)
{
  CgPredictedEntity *m_firstFreeEntity; 
  CgPredictedEntity *nextFree; 
  __int64 m_numEntities; 
  CgPredictedEntity *result; 

  m_firstFreeEntity = this->m_firstFreeEntity;
  if ( m_firstFreeEntity )
  {
    nextFree = m_firstFreeEntity->nextFree;
    this->m_firstFreeEntity = nextFree;
    if ( !nextFree )
      this->m_lastFreeEntity = NULL;
    m_firstFreeEntity->nextFree = NULL;
  }
  else
  {
    m_numEntities = this->m_numEntities;
    if ( (int)m_numEntities >= 32 )
    {
      Com_PrintWarning(17, "Reached the maximum number of client predicted entities. We might need to increase MAX_PREDICTED_ENTS(%d) to handle more.", 32i64);
      return 0i64;
    }
    this->m_numEntities = m_numEntities + 1;
    m_firstFreeEntity = &this->m_entities[m_numEntities];
  }
  if ( !m_firstFreeEntity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 154, ASSERT_TYPE_ASSERT, "(spawnedEnt)", (const char *)&queryFormat, "spawnedEnt") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 181, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  CgPredictedEntitySystem::ResetEntity(this, m_firstFreeEntity);
  result = m_firstFreeEntity;
  m_firstFreeEntity->isInUse = 1;
  m_firstFreeEntity->predictionState = WAITING_FOR_SERVER_ENT;
  return result;
}

/*
==============
CgPredictedEntitySystem::Update
==============
*/
void CgPredictedEntitySystem::Update(CgPredictedEntitySystem *this)
{
  cg_t *LocalClientGlobals; 
  int v3; 
  entityType_s *p_initialSpawnType; 
  int frametime; 
  int time; 
  int oldTime; 
  CgMissile *System; 
  __int64 v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 344, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v3 = 0;
  if ( this->m_numEntities > 0 )
  {
    p_initialSpawnType = &this->m_entities[0].initialSpawnType;
    do
    {
      if ( *((_BYTE *)p_initialSpawnType + 40) )
      {
        if ( *p_initialSpawnType == ET_MISSILE )
        {
          frametime = LocalClientGlobals->frametime;
          time = LocalClientGlobals->time;
          oldTime = LocalClientGlobals->oldTime;
          System = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
          if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 516, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
            __debugbreak();
          CgMissile::UpdateMissilePrediction(System, (CgPredictedEntity *)(p_initialSpawnType - 430), oldTime, time, frametime);
        }
        else
        {
          LODWORD(v9) = *((__int16 *)p_initialSpawnType - 426);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 360, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled entity type: %d in CgPredictedEntitySystem::Update.", v9) )
            __debugbreak();
        }
      }
      ++v3;
      p_initialSpawnType += 452;
    }
    while ( v3 < this->m_numEntities );
  }
}

/*
==============
CgPredictedEntitySystem::UpdateMissile
==============
*/
void CgPredictedEntitySystem::UpdateMissile(CgPredictedEntitySystem *this, CgPredictedEntity *ent, const int prevUpdateTime, const int updateTime, const int timeElapsed)
{
  CgMissile *System; 

  System = CgMissile::GetSystem((const LocalClientNum_t)this->m_localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 516, ASSERT_TYPE_ASSERT, "(missileSystem)", (const char *)&queryFormat, "missileSystem") )
    __debugbreak();
  CgMissile::UpdateMissilePrediction(System, ent, prevUpdateTime, updateTime, timeElapsed);
}

/*
==============
CgPredictedEntitySystem::UpdatePose
==============
*/
void CgPredictedEntitySystem::UpdatePose(CgPredictedEntitySystem *this, CgPredictedEntity *ent, vec3_t *newOrigin, vec3_t *newAngles)
{
  signed __int64 v8; 
  __int64 v9; 
  vec3_t outOrigin; 

  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 533, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 225, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  v8 = ((char *)ent - (char *)this - 24) / 904;
  if ( (unsigned int)v8 >= 0x20 )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 225, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    LODWORD(v9) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.cpp", 534, ASSERT_TYPE_ASSERT, "(unsigned)( GetEntityIndex( ent ) ) < (unsigned)( ( 32 ) )", "GetEntityIndex( ent ) doesn't index MAX_PREDICTED_ENTS\n\t%i not in [0, %i)", v9, 32) )
      __debugbreak();
  }
  ent->pose.eType = ent->s.eType;
  ent->pose.prevAngles.v[0] = ent->pose.angles.v[0];
  ent->pose.prevAngles.v[1] = ent->pose.angles.v[1];
  ent->pose.prevAngles.v[2] = ent->pose.angles.v[2];
  CG_GetPrevPoseOrigin(&ent->pose, &outOrigin);
  CG_SetPrevPoseOrigin(&ent->pose, &outOrigin);
  CG_SetPoseOrigin(&ent->pose, newOrigin);
  ent->pose.angles.v[0] = newAngles->v[0];
  ent->pose.angles.v[1] = newAngles->v[1];
  ent->pose.angles.v[2] = newAngles->v[2];
  memset(&outOrigin, 0, sizeof(outOrigin));
}

