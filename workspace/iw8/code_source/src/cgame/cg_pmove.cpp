/*
==============
CgPMove::EndPhysicserfProbe
==============
*/

void __fastcall CgPMove::EndPhysicserfProbe(CgPMove *this)
{
  ?EndPhysicserfProbe@CgPMove@@UEBAXXZ(this);
}

/*
==============
CgPMove::OnGestureOffhandTriggered
==============
*/

void __fastcall CgPMove::OnGestureOffhandTriggered(CgPMove *this)
{
  ?OnGestureOffhandTriggered@CgPMove@@UEAAXXZ(this);
}

/*
==============
CgPMove::CgPMove
==============
*/

void __fastcall CgPMove::CgPMove(CgPMove *this)
{
  ??0CgPMove@@QEAA@XZ(this);
}

/*
==============
CgPMove::SetMantleHint
==============
*/

void __fastcall CgPMove::SetMantleHint(CgPMove *this, bool enabled)
{
  ?SetMantleHint@CgPMove@@UEAAX_N@Z(this, enabled);
}

/*
==============
CgPMove::~CgPMove
==============
*/

void __fastcall CgPMove::~CgPMove(CgPMove *this)
{
  ??1CgPMove@@UEAA@XZ(this);
}

/*
==============
CG_PMove_UpdateZSmoothing
==============
*/

void __fastcall CG_PMove_UpdateZSmoothing(const pmove_t *const pm)
{
  ?CG_PMove_UpdateZSmoothing@@YAXQEBVpmove_t@@@Z(pm);
}

/*
==============
CgPMove::InitExternalSystems
==============
*/

void __fastcall CgPMove::InitExternalSystems(CgPMove *this)
{
  ?InitExternalSystems@CgPMove@@QEAAXXZ(this);
}

/*
==============
CgPMove::GetEntityBounds
==============
*/

void __fastcall CgPMove::GetEntityBounds(CgPMove *this, int entId, int suitIndex, EffectiveStance stance, bool hasShield, Bounds *outBounds)
{
  ?GetEntityBounds@CgPMove@@UEBAXHHW4EffectiveStance@@_NPEAUBounds@@@Z(this, entId, suitIndex, stance, hasShield, outBounds);
}

/*
==============
CgPMove::OnOffHandInit
==============
*/

void __fastcall CgPMove::OnOffHandInit(CgPMove *this)
{
  ?OnOffHandInit@CgPMove@@UEBAXXZ(this);
}

/*
==============
CgPMove::SetSkydiveBasejumpGroundHeight
==============
*/

void __fastcall CgPMove::SetSkydiveBasejumpGroundHeight(CgPMove *this, const float height)
{
  ?SetSkydiveBasejumpGroundHeight@CgPMove@@UEBAXM@Z(this, height);
}

/*
==============
CgPMove::CanSkipFindMantleSurface
==============
*/

bool __fastcall CgPMove::CanSkipFindMantleSurface(CgPMove *this)
{
  return ?CanSkipFindMantleSurface@CgPMove@@UEBA_NXZ(this);
}

/*
==============
CgPMove::IsWorldUpVolume
==============
*/

bool __fastcall CgPMove::IsWorldUpVolume(CgPMove *this, const int entId)
{
  return ?IsWorldUpVolume@CgPMove@@UEBA_NH@Z(this, entId);
}

/*
==============
CgPMove::GetWorldUpParentOrientation
==============
*/

bool __fastcall CgPMove::GetWorldUpParentOrientation(CgPMove *this, int entId, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?GetWorldUpParentOrientation@CgPMove@@UEBA_NHAEATvec3_t@@0@Z(this, entId, outOrigin, outAngles);
}

/*
==============
CgPMove::UpdatePredictionError
==============
*/

void __fastcall CgPMove::UpdatePredictionError(CgPMove *this, const bool isOnMovingPlatform, const bool isTeleported)
{
  ?UpdatePredictionError@CgPMove@@QEAAX_N0@Z(this, isOnMovingPlatform, isTeleported);
}

/*
==============
CgPMove::StartPhysicsPerfProbe
==============
*/

void __fastcall CgPMove::StartPhysicsPerfProbe(CgPMove *this)
{
  ?StartPhysicsPerfProbe@CgPMove@@UEBAXXZ(this);
}

/*
==============
CgPMove::DebugPrintRigidBodyTransform
==============
*/

void __fastcall CgPMove::DebugPrintRigidBodyTransform(CgPMove *this, const int commandTime, const int entityId)
{
  ?DebugPrintRigidBodyTransform@CgPMove@@UEAAXHH@Z(this, commandTime, entityId);
}

/*
==============
CG_PMove_ApplyPMoveFlags
==============
*/

void __fastcall CG_PMove_ApplyPMoveFlags(const pmove_t *const pm)
{
  ?CG_PMove_ApplyPMoveFlags@@YAXQEBVpmove_t@@@Z(pm);
}

/*
==============
CgPMove::CgPMove
==============
*/
void CgPMove::CgPMove(CgPMove *this)
{
  this->__vftable = (CgPMove_vtbl *)&pmove_t::`vftable';
  this->ps = NULL;
  *(_QWORD *)&this->tracemask = 0i64;
  this->m_flags = 0;
  this->mountHint = NULL;
  this->speed = 0.0;
  *(_QWORD *)&this->mantleDuration = 0i64;
  this->fWaistPitch = 0.0;
  *(_WORD *)&this->initialCall = 0;
  this->isExtrapolation = 0;
  this->groundSurfaceType = 0;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&this->refFrame);
  this->localClientNum = LOCAL_CLIENT_0;
  this->m_stepHeight = 0.0;
  this->m_bgHandler = NULL;
  this->antiLag = NULL;
  this->vehicles = NULL;
  this->bounds = NULL;
  this->ground = NULL;
  this->groundPersistent = NULL;
  this->footstepEventType = NULL;
  this->movingPlatforms = NULL;
  this->weaponMap = NULL;
  this->m_trace = NULL;
  this->m_playerTraceInfo = NULL;
  memset_0(&this->cmd, 0, 0x210ui64);
  *(_QWORD *)this->touchents = 0i64;
  *(_QWORD *)&this->touchents[4] = 0i64;
  *(_QWORD *)&this->touchents[8] = 0i64;
  *(_QWORD *)&this->touchents[12] = 0i64;
  *(_QWORD *)&this->touchents[16] = 0i64;
  *(_QWORD *)&this->touchents[20] = 0i64;
  *(_QWORD *)&this->touchents[24] = 0i64;
  *(_QWORD *)&this->touchents[28] = 0i64;
  *(_QWORD *)this->toucherflags = 0i64;
  *(_QWORD *)&this->toucherflags[8] = 0i64;
  *(_QWORD *)&this->toucherflags[16] = 0i64;
  *(_QWORD *)&this->toucherflags[24] = 0i64;
  *(_QWORD *)this->mantleEndPos.v = 0i64;
  this->mantleEndPos.v[2] = 0.0;
  *(_QWORD *)&this->offhandAdsWeapon.weaponIdx = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.stickerIndices[3] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.weaponAttachments[2] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.weaponAttachments[10] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.attachmentVariationIndices[5] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.attachmentVariationIndices[13] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.attachmentVariationIndices[21] = 0i64;
  *(_DWORD *)&this->offhandAdsWeapon.weaponCamo = 0;
  this->__vftable = (CgPMove_vtbl *)&CgPMove::`vftable';
}

/*
==============
CgPMove::~CgPMove
==============
*/
void CgPMove::~CgPMove(CgPMove *this)
{
  this->__vftable = (CgPMove_vtbl *)&pmove_t::`vftable';
}

/*
==============
CG_PMove_ApplyPMoveFlags
==============
*/
void CG_PMove_ApplyPMoveFlags(const pmove_t *const pm)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  int m_flags; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  int v8; 
  MovementAnimState *animMoveState; 
  vec3_t cameraPosition; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 530, ASSERT_TYPE_ASSERT, "(pm != nullptr)", (const char *)&queryFormat, "pm != nullptr", -2i64) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
  v3 = LocalClientGlobals;
  m_flags = pm->m_flags;
  if ( (m_flags & 4) != 0 )
  {
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(cameraPosition.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(cameraPosition.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(cameraPosition.v[2]) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    CG_Glass_BreakGlass(pm->localClientNum, &cameraPosition, pm->glassBreakIndex, &pm->glassBreakPos, &pm->glassBreakDir);
    memset(&cameraPosition, 0, sizeof(cameraPosition));
    m_flags = pm->m_flags;
  }
  if ( (m_flags & 0x20) != 0 )
  {
    v8 = 0;
    animMoveState = v3->animMoveState;
    do
      MovementAnimState::Reset(animMoveState++, (const LocalClientNum_t)pm->localClientNum, (const PlayerHandIndex)v8++);
    while ( v8 < 2 );
  }
}

/*
==============
CG_PMove_UpdateZSmoothing
==============
*/
void CG_PMove_UpdateZSmoothing(const pmove_t *const pm)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  double UpContribution; 
  int v5; 
  float v6; 
  float prevViewHeight; 
  int pm_type; 
  const dvar_t *v9; 
  float v10; 
  float stepLerpTime; 
  float v13; 
  float v14; 
  float v15; 
  double Float_Internal_DebugName; 
  const dvar_t *v18; 
  const char *v19; 
  float v22; 
  double v23; 
  float v24; 
  float v25; 
  float v26; 
  float v28; 
  int time; 
  bool v31; 
  WorldUpReferenceFrame v32; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
  Handler = CgHandler::getHandler(pm->localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v32, &LocalClientGlobals->predictedPlayerState, Handler);
  UpContribution = WorldUpReferenceFrame::GetUpContribution(&v32, &LocalClientGlobals->predictedPlayerState.origin);
  v5 = LocalClientGlobals->time - LocalClientGlobals->stepViewStart;
  v6 = *(float *)&UpContribution;
  if ( (pm->m_flags & 0x100) == 0 || (prevViewHeight = LocalClientGlobals->prevViewHeight, v6 == prevViewHeight) || (pm_type = LocalClientGlobals->predictedPlayerState.pm_type, (pm_type & 0xFFFFFFFC) != 0) || pm_type == 1 )
  {
    v31 = (float)v5 <= LocalClientGlobals->stepLerpTime;
    LocalClientGlobals->prevViewHeight = v6;
    if ( !v31 )
      LocalClientGlobals->stepViewChange = 0.0;
  }
  else
  {
    v9 = DCONST_DVARFLT_cg_viewZSmoothingMin;
    v10 = v6 - prevViewHeight;
    if ( !DCONST_DVARFLT_cg_viewZSmoothingMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZSmoothingMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    stepLerpTime = LocalClientGlobals->stepLerpTime;
    v13 = (float)v5;
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - prevViewHeight) & _xmm) < v9->current.value )
    {
      LocalClientGlobals->prevViewHeight = v6;
      if ( v13 > stepLerpTime )
        LocalClientGlobals->stepViewChange = 0.0;
    }
    else
    {
      v14 = 0.0;
      v15 = 0.0;
      if ( v13 < stepLerpTime && v5 >= 0 )
      {
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        v15 = (float)(1.0 - (float)(v13 / stepLerpTime)) * LocalClientGlobals->stepViewChange;
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingMax, "cg_viewZSmoothingMax");
      if ( (float)(v15 + v10) <= 0.0 )
      {
        _XMM1 = _XMM0 ^ _xmm;
        __asm { vmaxss  xmm2, xmm1, xmm8 }
        LocalClientGlobals->stepViewChange = *(float *)&_XMM2;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingDownTimeMin, "cg_viewZSmoothingDownTimeMin");
        v18 = DCONST_DVARFLT_cg_viewZSmoothingDownTimeMax;
        v19 = "cg_viewZSmoothingDownTimeMax";
      }
      else
      {
        __asm { vminss  xmm1, xmm0, xmm8 }
        LocalClientGlobals->stepViewChange = *(float *)&_XMM1;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingUpTimeMin, "cg_viewZSmoothingUpTimeMin");
        v18 = DCONST_DVARFLT_cg_viewZSmoothingUpTimeMax;
        v19 = "cg_viewZSmoothingUpTimeMax";
      }
      v22 = *(float *)&Float_Internal_DebugName;
      v23 = Dvar_GetFloat_Internal_DebugName(v18, v19);
      v24 = *(float *)&v23;
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      v25 = (float)((float)(LocalClientGlobals->predictedPlayerState.velocity.v[0] * LocalClientGlobals->predictedPlayerState.velocity.v[0]) + (float)(LocalClientGlobals->predictedPlayerState.velocity.v[1] * LocalClientGlobals->predictedPlayerState.velocity.v[1])) + (float)(LocalClientGlobals->predictedPlayerState.velocity.v[2] * LocalClientGlobals->predictedPlayerState.velocity.v[2]);
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedFloor, "cg_viewZSmoothingPlayerSpeedFloor");
      v26 = *(float *)&_XMM0 * *(float *)&_XMM0;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedCeil, "cg_viewZSmoothingPlayerSpeedCeil");
      if ( v25 < (float)(*(float *)&_XMM0 * *(float *)&_XMM0) )
      {
        if ( v25 > v26 )
        {
          v28 = (float)(*(float *)&_XMM0 * *(float *)&_XMM0) - v26;
          if ( v28 == 0.0 )
          {
            __asm { vxorpd  xmm0, xmm0, xmm0 }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 452, ASSERT_TYPE_ASSERT, "( maxSpeedSquared - minSpeedSquared ) != ( 0.0f )", "%s != %s\n\t%g, %g", "maxSpeedSquared - minSpeedSquared", "0.0f", v28, *(double *)&_XMM0) )
              __debugbreak();
          }
          v14 = 1.0 - (float)((float)(v25 - v26) / v28);
        }
        else
        {
          v14 = FLOAT_1_0;
        }
      }
      time = LocalClientGlobals->time;
      LocalClientGlobals->stepLerpTime = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)(float)(v22 * 1000.0)).m128_f32[0] - (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)((int)(float)(v22 * 1000.0) - (int)(float)(v24 * 1000.0))).m128_f32[0] * v14);
      LocalClientGlobals->prevViewHeight = v6;
      LocalClientGlobals->stepViewStart = time;
    }
  }
}

/*
==============
CgPMove::CanSkipFindMantleSurface
==============
*/
bool CgPMove::CanSkipFindMantleSurface(CgPMove *this)
{
  const dvar_t *v1; 

  if ( this->initialCall )
    return 1;
  v1 = DCONST_DVARMPBOOL_mantle_draw_hint;
  if ( !DCONST_DVARMPBOOL_mantle_draw_hint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mantle_draw_hint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return !v1->current.enabled;
}

/*
==============
CgPMove::DebugPrintRigidBodyTransform
==============
*/
void CgPMove::DebugPrintRigidBodyTransform(CgPMove *this, const int commandTime, const int entityId)
{
  CG_PhysicsObject *v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  __int64 v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v21; 
  float v22; 
  bool v23; 
  __int128 v24; 
  char *fmt; 
  __int64 v28; 
  float v29; 
  float v30; 
  hknpBodyId result; 

  v6 = CG_PhysicsObject_Get(entityId, this->localClientNum);
  if ( v6 )
  {
    v7 = v6->physicsInstances[2];
    if ( v7 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 500, ASSERT_TYPE_ASSERT, "( physicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v8 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT_FIRST, v7);
    if ( NumRigidBodys )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v7 == -1 )
        {
          LODWORD(v28) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated )
        {
          LODWORD(v28) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_CLIENT_FIRST, v7, v8)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v28) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v28) )
            __debugbreak();
        }
        world = g_havokPhysicsWorlds[2].world;
        if ( !g_havokPhysicsWorlds[2].world )
        {
          LODWORD(v28) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v28) )
            __debugbreak();
        }
        v12 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        v13 = *(float *)(v12 + 8);
        v14 = *(float *)(v12 + 16);
        v15 = *(float *)(v12 + 20);
        v16 = *(float *)(v12 + 24);
        v17 = *(float *)(v12 + 32);
        v18 = *(float *)(v12 + 36);
        v19 = *(float *)(v12 + 40);
        v20 = *(unsigned int *)(v12 + 48);
        v21 = *(float *)(v12 + 52);
        v22 = *(float *)(v12 + 56);
        v30 = *(float *)v12;
        v29 = *(float *)(v12 + 4);
        v23 = this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
        *((_QWORD *)&v24 + 1) = *((_QWORD *)&v20 + 1);
        *(double *)&v24 = (float)(*(float *)&v20 * 32.0);
        _XMM2 = v24;
        __asm { vxorpd  xmm2, xmm2, xmm2 }
        LODWORD(fmt) = v8;
        j_printf("   t: %i, h: %i, e: %i, idx: %i, trans: %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a\n", (unsigned int)commandTime, !v23, (unsigned int)entityId, fmt, v30, v29, v13, *(double *)&_XMM2, v14, v15, v16, *(double *)&_XMM2, v17, v18, v19, *(double *)&_XMM2, *(double *)&v24, (float)(v21 * 32.0), (float)(v22 * 32.0), DOUBLE_1_0);
        ++v8;
      }
      while ( v8 < NumRigidBodys );
    }
  }
}

/*
==============
CgPMove::EndPhysicserfProbe
==============
*/

void __fastcall CgPMove::EndPhysicserfProbe(CgPMove *this)
{
  PhysPerfTrack_PMoveClientTimeStop();
}

/*
==============
CgPMove::GetEntityBounds
==============
*/
void CgPMove::GetEntityBounds(CgPMove *this, int entId, int suitIndex, EffectiveStance stance, bool hasShield, Bounds *outBounds)
{
  centity_t *Entity; 
  LocalClientNum_t localClientNum; 
  const entityState_t *p_nextState; 
  unsigned int number; 
  unsigned int v13; 
  unsigned int v14; 
  const DObj *v15; 
  const dvar_t *v16; 
  float value; 
  Bounds *outCollisionBounds; 
  __int64 v19; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->localClientNum, entId);
  if ( (Entity->flags & 1) != 0 )
  {
    localClientNum = this->localClientNum;
    p_nextState = &Entity->nextState;
    number = Entity->nextState.number;
    if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", Entity->nextState.number) )
      __debugbreak();
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v19) = 2;
      LODWORD(outCollisionBounds) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outCollisionBounds, v19) )
        __debugbreak();
    }
    v13 = 2533 * localClientNum + number;
    if ( v13 >= 0x13CA )
    {
      LODWORD(v19) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v19) )
        __debugbreak();
    }
    v14 = clientObjMap[v13];
    if ( v14 )
    {
      if ( v14 >= (unsigned int)s_objCount )
      {
        LODWORD(v19) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v19) )
          __debugbreak();
      }
      v15 = (const DObj *)s_objBuf[v14];
    }
    else
    {
      v15 = NULL;
    }
    CG_PhysicsCharacterProxy_GetCollisionBounds(v15, p_nextState, suitIndex, stance, 0, outBounds);
    if ( hasShield )
    {
      v16 = DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset;
      if ( !DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionShieldOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      value = v16->current.value;
      outBounds->halfSize.v[0] = value + outBounds->halfSize.v[0];
      outBounds->halfSize.v[1] = value + outBounds->halfSize.v[1];
      outBounds->halfSize.v[2] = value + outBounds->halfSize.v[2];
    }
  }
  else
  {
    *outBounds = playerBox;
  }
}

/*
==============
CgPMove::GetWorldUpParentOrientation
==============
*/
char CgPMove::GetWorldUpParentOrientation(CgPMove *this, int entId, vec3_t *outOrigin, vec3_t *outAngles)
{
  centity_t *Entity; 
  centity_t *v9; 
  centity_t *v10; 
  const cpose_t *p_pose; 
  entityState_t *p_nextState; 
  entityType_s eType; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v18; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->localClientNum, entId);
  if ( ((Entity->flags & 1) == 0 || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0xFu)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 59, ASSERT_TYPE_ASSERT, "(IsWorldUpVolume( entId ))", (const char *)&queryFormat, "IsWorldUpVolume( entId )") )
    __debugbreak();
  *(_QWORD *)outAngles->v = 0i64;
  outAngles->v[2] = 0.0;
  *(_QWORD *)outOrigin->v = 0i64;
  outOrigin->v[2] = 0.0;
  v9 = CG_GetEntity((const LocalClientNum_t)this->localClientNum, entId);
  if ( (v9->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 65, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (*(_DWORD *)&v9->nextState.clientLinkInfo & 0x7FF) == 0 )
    return 0;
  v10 = CG_GetEntity((const LocalClientNum_t)this->localClientNum, (*(_DWORD *)&v9->nextState.clientLinkInfo & 0x7FFu) - 1);
  p_pose = &v10->pose;
  if ( (v10->flags & 1) == 0 )
    return 0;
  p_nextState = &v10->nextState;
  if ( v10 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = p_nextState->eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 75, ASSERT_TYPE_ASSERT, "(!BG_IsCharacterEntity( &parent->nextState ))", "%s\n\tIt would not be safe to access player positions in that way as part of pmove", "!BG_IsCharacterEntity( &parent->nextState )") )
    __debugbreak();
  if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
  FunctionPointer_origin(&p_pose->origin.origin.origin, outOrigin);
  if ( p_pose->isPosePrecise )
  {
    _XMM0 = LODWORD(outOrigin->v[0]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v18;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    _XMM0 = LODWORD(outOrigin->v[1]);
    __asm { vcvtdq2pd xmm0, xmm0 }
    outOrigin->v[0] = *(float *)&_XMM1;
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v18;
    _XMM0 = LODWORD(outOrigin->v[2]);
    __asm
    {
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
    }
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
    _XMM1 = v18;
    outOrigin->v[1] = *(float *)&_XMM2;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    outOrigin->v[2] = *(float *)&_XMM2;
  }
  outAngles->v[0] = p_pose->angles.v[0];
  outAngles->v[1] = p_pose->angles.v[1];
  outAngles->v[2] = p_pose->angles.v[2];
  return 1;
}

/*
==============
CgPMove::InitExternalSystems
==============
*/
void CgPMove::InitExternalSystems(CgPMove *this)
{
  cg_t *LocalClientGlobals; 
  int localClientNum; 
  CgAntiLag *Instance; 
  __int64 v5; 
  __int64 v6; 
  LocalClientNum_t v7; 
  __int64 v8; 
  __int64 v9; 
  LocalClientNum_t v10; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum);
  this->m_bgHandler = &LocalClientGlobals->m_bgHandler;
  WorldUpReferenceFrame::Init(&this->refFrame, &LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->m_bgHandler);
  localClientNum = this->localClientNum;
  this->movingPlatforms = &LocalClientGlobals->movingPlatforms;
  BGMovingPlatformClient::InitPMove(&LocalClientGlobals->movingPlatforms, localClientNum);
  if ( CgAntiLag::IsDisabledForMigration((const LocalClientNum_t)this->localClientNum) )
    Instance = NULL;
  else
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->localClientNum);
  this->antiLag = Instance;
  v5 = this->localClientNum;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    v10 = this->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v10) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v9) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v5] )
  {
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v9) )
      __debugbreak();
  }
  this->vehicles = CgVehicleSystem::ms_vehicleSystemArray[v5];
  v6 = this->localClientNum;
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v7 = this->localClientNum;
  this->weaponMap = CgWeaponMap::ms_instance[v6];
  this->m_playerTraceInfo = CgPlayerTraceInfo::GetPlayerTraceInfo(v7);
}

/*
==============
CgPMove::IsWorldUpVolume
==============
*/
bool CgPMove::IsWorldUpVolume(CgPMove *this, const int entId)
{
  centity_t *Entity; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->localClientNum, entId);
  return (Entity->flags & 1) != 0 && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0xFu);
}

/*
==============
CgPMove::OnGestureOffhandTriggered
==============
*/
void CgPMove::OnGestureOffhandTriggered(CgPMove *this)
{
  cg_t *LocalClientGlobals; 
  playerState_s *ps; 
  int weaponState; 
  Weapon *p_weaponSelect; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  const Weapon *v8; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 262, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  ps = this->ps;
  weaponState = ps->weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 7) <= 5 || weaponState == 50 )
  {
    p_weaponSelect = &LocalClientGlobals->weaponSelect;
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(this->weaponMap, ps);
    v7 = BG_UsingAlternate(this->ps);
    v8 = BG_HighPriorityWeapon_Get(this->weaponMap, this->ps);
    if ( memcmp_0(p_weaponSelect, v8, 0x3Cui64) && !BG_AllowWeaponSwitchWhileHoldingGrenade(CurrentWeaponForPlayer, v7) && CurrentWeaponForPlayer->weaponIdx )
    {
      if ( memcmp_0(p_weaponSelect, CurrentWeaponForPlayer, 0x3Cui64) )
        CG_SelectWeapon(this->localClientNum, CurrentWeaponForPlayer, v7);
    }
  }
}

/*
==============
CgPMove::OnOffHandInit
==============
*/
void CgPMove::OnOffHandInit(CgPMove *this)
{
  cg_t *LocalClientGlobals; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v4; 
  bool v5; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 298, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(this->weaponMap, this->ps);
  v4 = CurrentWeaponForPlayer;
  if ( CurrentWeaponForPlayer->weaponIdx && memcmp_0(CurrentWeaponForPlayer, &LocalClientGlobals->weaponSelect, 0x3Cui64) && !BG_IsWeaponMeleeOverride(this->weaponMap, this->ps, v4) && !BG_HasLadderHand(this->ps) )
  {
    v5 = BG_UsingAlternate(this->ps);
    CG_SelectWeapon(this->localClientNum, v4, v5);
  }
}

/*
==============
CgPMove::SetMantleHint
==============
*/
void CgPMove::SetMantleHint(CgPMove *this, bool enabled)
{
  CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum)->hasMantleHint = enabled;
}

/*
==============
CgPMove::SetSkydiveBasejumpGroundHeight
==============
*/
void CgPMove::SetSkydiveBasejumpGroundHeight(CgPMove *this, const float height)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum);
  if ( LocalClientGlobals )
  {
    LocalClientGlobals->skydiveClientState.debugBaseJumpHeight = height;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 523, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0xBA1C8] = height;
  }
}

/*
==============
CgPMove::StartPhysicsPerfProbe
==============
*/
void CgPMove::StartPhysicsPerfProbe(CgPMove *this)
{
  PhysPerfTrack_PMoveClientTimeStart();
  PhysPerfTrack_PMoveClientCountAdd();
}

/*
==============
CgPMove::UpdatePredictionError
==============
*/
void CgPMove::UpdatePredictionError(CgPMove *this, const bool isOnMovingPlatform, const bool isTeleported)
{
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  float v8; 
  float v9; 
  float v10; 
  __int128 v11; 
  float v12; 
  double Float_Internal_DebugName; 
  int v14; 
  float v15; 
  __int128 v16; 
  vec3_t out; 
  vec3_t outDeltaAngles; 
  vec3_t outDeltaPlatformOrigin; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum);
  v7 = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.commandTime == LocalClientGlobals->oldCommandTime )
  {
    CGMovingPlatformClient::AdjustPositionForMover(&LocalClientGlobals->movingPlatforms, this->localClientNum, &LocalClientGlobals->predictedPlayerState.origin, LocalClientGlobals->time, LocalClientGlobals->oldTime, &out, &outDeltaPlatformOrigin, &outDeltaAngles, this);
    v8 = v7->oldOrigin.v[0] - out.v[0];
    v9 = v7->oldOrigin.v[1] - out.v[1];
    v10 = v7->oldOrigin.v[2] - out.v[2];
    *((_QWORD *)&v11 + 1) = 0i64;
    v12 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
    if ( !isTeleported && !isOnMovingPlatform && v12 > 0.1 )
    {
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_showmiss, "cg_showmiss") )
        Com_PrintError(17, "Prediction miss: %f\n", v12);
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
      if ( *(float *)&Float_Internal_DebugName == 0.0 )
      {
        *(_QWORD *)v7->predictedError.v = 0i64;
        v7->predictedError.v[2] = 0.0;
      }
      else
      {
        v14 = v7->time - v7->predictedErrorTime;
        *(double *)&v11 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
        v15 = 1.0 / *(float *)&v11;
        *(double *)&v11 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
        v16 = v11;
        *(float *)&v16 = (float)(*(float *)&v11 - (float)v14) * v15;
        _XMM2 = v16;
        __asm { vmaxss  xmm6, xmm2, xmm7 }
        if ( *(float *)&_XMM6 > 0.0 )
        {
          if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_showmiss, "cg_showmiss") )
            Com_Printf(17, "Double prediction decay: %f\n", *(float *)&_XMM6);
        }
        v7->predictedError.v[0] = *(float *)&_XMM6 * v7->predictedError.v[0];
        v7->predictedError.v[1] = *(float *)&_XMM6 * v7->predictedError.v[1];
        v7->predictedError.v[2] = *(float *)&_XMM6 * v7->predictedError.v[2];
      }
      v7->predictedError.v[0] = v8 + v7->predictedError.v[0];
      v7->predictedError.v[1] = v9 + v7->predictedError.v[1];
      v7->predictedError.v[2] = v10 + v7->predictedError.v[2];
      v7->predictedErrorTime = v7->oldTime;
    }
  }
}

