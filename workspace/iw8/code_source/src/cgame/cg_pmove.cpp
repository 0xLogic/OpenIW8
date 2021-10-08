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

void __fastcall CG_PMove_UpdateZSmoothing(const pmove_t *const pm, __int64 a2, double _XMM2_8)
{
  CgHandler *Handler; 
  int v16; 
  bool v17; 
  unsigned int pm_type; 
  char v23; 
  char v24; 
  const dvar_t *v34; 
  const char *v35; 
  char v48; 
  char v49; 
  int time; 
  double v82; 
  double v83; 
  WorldUpReferenceFrame v84; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)pm->localClientNum);
  Handler = CgHandler::getHandler(pm->localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v84, &_RDI->predictedPlayerState, Handler);
  *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v84, &_RDI->predictedPlayerState.origin);
  v16 = _RDI->time - _RDI->stepViewStart;
  v17 = (pm->m_flags & 0x100) == 0;
  __asm { vmovaps xmm6, xmm0 }
  if ( (pm->m_flags & 0x100) == 0 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+59698h]
    vucomiss xmm6, xmm0
  }
  if ( (pm->m_flags & 0x100) == 0 || (pm_type = _RDI->predictedPlayerState.pm_type, v17 = (pm_type & 0xFFFFFFFC) == 0, (pm_type & 0xFFFFFFFC) != 0) || (v17 = pm_type <= 1, pm_type == 1) )
  {
LABEL_27:
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vcomiss xmm0, dword ptr [rdi+5969Ch]
      vmovss  dword ptr [rdi+59698h], xmm6
    }
    if ( !v17 )
      _RDI->stepViewChange = 0.0;
  }
  else
  {
    _RBX = DCONST_DVARFLT_cg_viewZSmoothingMin;
    __asm
    {
      vmovaps [rsp+108h+var_28], xmm7
      vmovaps [rsp+108h+var_38], xmm8
      vsubss  xmm8, xmm6, xmm0
      vandps  xmm7, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( !DCONST_DVARFLT_cg_viewZSmoothingMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZSmoothingMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vcomiss xmm7, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rdi+5969Ch]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
    }
    if ( v23 )
    {
      __asm
      {
        vcomiss xmm0, xmm1
        vmovss  dword ptr [rdi+59698h], xmm6
      }
      if ( !(v23 | v24) )
        _RDI->stepViewChange = 0.0;
    }
    else
    {
      __asm
      {
        vcomiss xmm0, xmm1
        vmovaps [rsp+108h+var_48], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vmovaps [rsp+108h+var_58], xmm10
        vmovaps [rsp+108h+var_68], xmm11
        vmovaps [rsp+108h+var_78], xmm12
        vmovaps [rsp+108h+var_88], xmm13
        vxorps  xmm7, xmm7, xmm7
        vxorps  xmm2, xmm2, xmm2
      }
      if ( v23 && v16 >= 0 )
      {
        __asm
        {
          vdivss  xmm0, xmm0, xmm1
          vsubss  xmm0, xmm9, xmm0
          vmulss  xmm2, xmm0, dword ptr [rdi+59694h]
        }
      }
      __asm { vaddss  xmm8, xmm2, xmm8 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingMax, "cg_viewZSmoothingMax");
      __asm { vcomiss xmm8, xmm7 }
      if ( v23 | v24 )
      {
        __asm
        {
          vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
          vmaxss  xmm2, xmm1, xmm8
          vmovss  dword ptr [rdi+59694h], xmm2
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingDownTimeMin, "cg_viewZSmoothingDownTimeMin");
        v34 = DCONST_DVARFLT_cg_viewZSmoothingDownTimeMax;
        v35 = "cg_viewZSmoothingDownTimeMax";
      }
      else
      {
        __asm
        {
          vminss  xmm1, xmm0, xmm8
          vmovss  dword ptr [rdi+59694h], xmm1
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingUpTimeMin, "cg_viewZSmoothingUpTimeMin");
        v34 = DCONST_DVARFLT_cg_viewZSmoothingUpTimeMax;
        v35 = "cg_viewZSmoothingUpTimeMax";
      }
      __asm { vmovaps xmm12, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v34, v35);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+48h]
        vmovss  xmm3, dword ptr [rdi+4Ch]
        vmovaps xmm13, xmm0
        vmovss  xmm0, dword ptr [rdi+44h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm11, xmm2, xmm1
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedFloor, "cg_viewZSmoothingPlayerSpeedFloor");
      __asm { vmulss  xmm10, xmm0, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedCeil, "cg_viewZSmoothingPlayerSpeedCeil");
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm11, xmm1
      }
      if ( v48 )
      {
        __asm { vcomiss xmm11, xmm10 }
        if ( v48 | v49 )
        {
          __asm { vmovaps xmm7, xmm9 }
        }
        else
        {
          __asm
          {
            vsubss  xmm8, xmm1, xmm10
            vucomiss xmm8, xmm7
          }
          if ( v49 )
          {
            __asm
            {
              vxorpd  xmm0, xmm0, xmm0
              vmovsd  [rsp+108h+var_C8], xmm0
              vcvtss2sd xmm1, xmm8, xmm8
              vmovsd  [rsp+108h+var_D0], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 452, ASSERT_TYPE_ASSERT, "( maxSpeedSquared - minSpeedSquared ) != ( 0.0f )", "%s != %s\n\t%g, %g", "maxSpeedSquared - minSpeedSquared", "0.0f", v82, v83) )
              __debugbreak();
          }
          __asm
          {
            vsubss  xmm0, xmm11, xmm10
            vdivss  xmm1, xmm0, xmm8
            vsubss  xmm7, xmm9, xmm1
          }
        }
      }
      __asm
      {
        vmulss  xmm0, xmm12, cs:__real@447a0000
        vmulss  xmm1, xmm13, cs:__real@447a0000
        vmovaps xmm13, [rsp+108h+var_88]
        vmovaps xmm12, [rsp+108h+var_78]
        vmovaps xmm11, [rsp+108h+var_68]
        vmovaps xmm10, [rsp+108h+var_58]
        vmovaps xmm9, [rsp+108h+var_48]
        vcvttss2si ecx, xmm0
        vcvttss2si eax, xmm1
        vmovd   xmm2, ecx
      }
      _ECX = _ECX - _EAX;
      time = _RDI->time;
      __asm
      {
        vmovd   xmm0, ecx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, xmm7
        vcvtdq2ps xmm2, xmm2
        vsubss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rdi+5969Ch], xmm2
        vmovss  dword ptr [rdi+59698h], xmm6
      }
      _RDI->stepViewStart = time;
    }
    __asm
    {
      vmovaps xmm7, [rsp+108h+var_28]
      vmovaps xmm8, [rsp+108h+var_38]
    }
  }
  _R11 = &v92;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  CG_PhysicsObject *v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  bool v35; 
  char *fmt; 
  double v67; 
  __int64 v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  hknpBodyId result; 

  v16 = CG_PhysicsObject_Get(entityId, this->localClientNum);
  if ( v16 )
  {
    v17 = v16->physicsInstances[2];
    if ( v17 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 500, ASSERT_TYPE_ASSERT, "( physicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v18 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT_FIRST, v17);
    if ( NumRigidBodys )
    {
      __asm
      {
        vmovaps [rsp+1A8h+var_48], xmm6
        vmovaps [rsp+1A8h+var_58], xmm7
        vmovaps [rsp+1A8h+var_68], xmm8
        vmovaps [rsp+1A8h+var_78], xmm9
        vmovaps [rsp+1A8h+var_88], xmm10
        vmovaps [rsp+1A8h+var_98], xmm11
        vmovaps [rsp+1A8h+var_A8], xmm12
        vmovaps [rsp+1A8h+var_B8], xmm13
        vmovaps [rsp+1A8h+var_C8], xmm14
        vmovaps [rsp+1A8h+var_D8], xmm15
      }
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v17 == -1 )
        {
          LODWORD(v68) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v68) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated )
        {
          LODWORD(v68) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v68) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_CLIENT_FIRST, v17, v18)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v68) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v68) )
            __debugbreak();
        }
        world = g_havokPhysicsWorlds[2].world;
        if ( !g_havokPhysicsWorlds[2].world )
        {
          LODWORD(v68) = 2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v68) )
            __debugbreak();
        }
        _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm15, dword ptr [rax+8]
          vmovss  xmm14, dword ptr [rax+10h]
          vmovss  xmm13, dword ptr [rax+14h]
          vmovss  xmm12, dword ptr [rax+18h]
          vmovss  xmm11, dword ptr [rax+20h]
          vmovss  xmm10, dword ptr [rax+24h]
          vmovss  xmm9, dword ptr [rax+28h]
          vmovss  xmm8, dword ptr [rax+30h]
          vmovss  xmm7, dword ptr [rax+34h]
          vmovss  xmm6, dword ptr [rax+38h]
          vmovss  [rsp+1A8h+var_F4], xmm0
          vmovss  xmm0, dword ptr [rax+4]
          vmovss  [rsp+1A8h+var_F8], xmm0
        }
        v35 = this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
        __asm
        {
          vmovss  xmm2, cs:__real@42000000
          vmulss  xmm0, xmm6, xmm2
          vmulss  xmm1, xmm7, xmm2
          vcvtss2sd xmm4, xmm0, xmm0
          vmulss  xmm0, xmm8, xmm2
          vcvtss2sd xmm2, xmm0, xmm0
          vcvtss2sd xmm5, xmm10, xmm10
          vmovss  xmm10, [rsp+1A8h+var_F8]
          vcvtss2sd xmm0, xmm11, xmm11
          vmovss  xmm11, [rsp+1A8h+var_F4]
          vcvtss2sd xmm3, xmm1, xmm1
          vcvtss2sd xmm1, xmm9, xmm9
          vcvtss2sd xmm6, xmm12, xmm12
          vmovsd  xmm12, cs:__real@3ff0000000000000
          vmovsd  [rsp+1A8h+var_108], xmm12
          vmovsd  [rsp+1A8h+var_110], xmm4
          vmovsd  [rsp+1A8h+var_118], xmm3
          vmovsd  [rsp+1A8h+var_120], xmm2
          vxorpd  xmm2, xmm2, xmm2
          vmovsd  [rsp+1A8h+var_128], xmm2
          vmovsd  [rsp+1A8h+var_130], xmm1
          vmovsd  [rsp+1A8h+var_138], xmm5
          vmovsd  [rsp+1A8h+var_140], xmm0
          vmovsd  [rsp+1A8h+var_148], xmm2
          vmovsd  [rsp+1A8h+var_150], xmm6
          vcvtss2sd xmm7, xmm13, xmm13
          vmovsd  [rsp+1A8h+var_158], xmm7
          vcvtss2sd xmm8, xmm14, xmm14
          vmovsd  [rsp+1A8h+var_160], xmm8
          vmovsd  [rsp+1A8h+var_168], xmm2
          vcvtss2sd xmm9, xmm15, xmm15
          vmovsd  [rsp+1A8h+var_170], xmm9
          vcvtss2sd xmm10, xmm10, xmm10
          vmovsd  [rsp+1A8h+var_178], xmm10
          vcvtss2sd xmm11, xmm11, xmm11
          vmovsd  [rsp+1A8h+var_180], xmm11
        }
        LODWORD(fmt) = v18;
        j_printf("   t: %i, h: %i, e: %i, idx: %i, trans: %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a\n", (unsigned int)commandTime, !v35, (unsigned int)entityId, fmt, v67, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83);
        ++v18;
      }
      while ( v18 < NumRigidBodys );
      __asm
      {
        vmovaps xmm15, [rsp+1A8h+var_D8]
        vmovaps xmm14, [rsp+1A8h+var_C8]
        vmovaps xmm13, [rsp+1A8h+var_B8]
        vmovaps xmm12, [rsp+1A8h+var_A8]
        vmovaps xmm11, [rsp+1A8h+var_98]
        vmovaps xmm10, [rsp+1A8h+var_88]
        vmovaps xmm9, [rsp+1A8h+var_78]
        vmovaps xmm8, [rsp+1A8h+var_68]
        vmovaps xmm7, [rsp+1A8h+var_58]
        vmovaps xmm6, [rsp+1A8h+var_48]
      }
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
  unsigned int v16; 
  unsigned int v17; 
  const DObj *v18; 
  Bounds *outCollisionBounds; 
  __int64 v26; 

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
      LODWORD(v26) = 2;
      LODWORD(outCollisionBounds) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outCollisionBounds, v26) )
        __debugbreak();
    }
    v16 = 2533 * localClientNum + number;
    if ( v16 >= 0x13CA )
    {
      LODWORD(v26) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v26) )
        __debugbreak();
    }
    v17 = clientObjMap[v16];
    if ( v17 )
    {
      if ( v17 >= (unsigned int)s_objCount )
      {
        LODWORD(v26) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v26) )
          __debugbreak();
      }
      v18 = (const DObj *)s_objBuf[v17];
    }
    else
    {
      v18 = NULL;
    }
    _RBX = outBounds;
    CG_PhysicsCharacterProxy_GetCollisionBounds(v18, p_nextState, suitIndex, stance, 0, outBounds);
    if ( hasShield )
    {
      _RDI = DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset;
      if ( !DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionShieldOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+28h]
        vaddss  xmm0, xmm2, dword ptr [rbx+0Ch]
        vmovss  dword ptr [rbx+0Ch], xmm0
        vaddss  xmm1, xmm2, dword ptr [rbx+10h]
        vmovss  dword ptr [rbx+10h], xmm1
        vaddss  xmm0, xmm2, dword ptr [rbx+14h]
        vmovss  dword ptr [rbx+14h], xmm0
      }
    }
  }
  else
  {
    _RAX = outBounds;
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?playerBox@@3UBounds@@B.midPoint; Bounds const playerBox
      vmovups xmmword ptr [rax], xmm0
      vmovsd  xmm1, qword ptr cs:?playerBox@@3UBounds@@B.halfSize+4; Bounds const playerBox
      vmovsd  qword ptr [rax+10h], xmm1
    }
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

  _RSI = outOrigin;
  Entity = CG_GetEntity((const LocalClientNum_t)this->localClientNum, entId);
  if ( ((Entity->flags & 1) == 0 || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 0xFu)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 59, ASSERT_TYPE_ASSERT, "(IsWorldUpVolume( entId ))", (const char *)&queryFormat, "IsWorldUpVolume( entId )") )
    __debugbreak();
  *(_QWORD *)outAngles->v = 0i64;
  outAngles->v[2] = 0.0;
  *(_QWORD *)_RSI->v = 0i64;
  _RSI->v[2] = 0.0;
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
  FunctionPointer_origin(&p_pose->origin.origin.origin, _RSI);
  if ( p_pose->isPosePrecise )
  {
    __asm
    {
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmovd   xmm0, dword ptr [rsi]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovd   xmm0, dword ptr [rsi+4]
      vcvtdq2pd xmm0, xmm0
      vmovss  dword ptr [rsi], xmm1
      vmulsd  xmm1, xmm0, xmm3
      vmovd   xmm0, dword ptr [rsi+8]
      vcvtsd2ss xmm2, xmm1, xmm1
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm1, xmm0, xmm3
      vmovss  dword ptr [rsi+4], xmm2
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  dword ptr [rsi+8], xmm2
    }
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

void __fastcall CgPMove::SetSkydiveBasejumpGroundHeight(CgPMove *this, double height)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum);
  _RBX = _RAX;
  if ( _RAX )
  {
    __asm
    {
      vmovss  dword ptr [rax+0BA1C8h], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pmove.cpp", 523, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rbx+0BA1C8h], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
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
  int time; 
  const vec3_t *p_origin; 
  LocalClientNum_t localClientNum; 
  CGMovingPlatformClient *p_movingPlatforms; 
  int toTime; 
  vec3_t out; 
  vec3_t outDeltaAngles; 
  vec3_t outDeltaPlatformOrigin; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->localClientNum);
  _RDI = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.commandTime == LocalClientGlobals->oldCommandTime )
  {
    time = LocalClientGlobals->time;
    p_origin = &LocalClientGlobals->predictedPlayerState.origin;
    localClientNum = this->localClientNum;
    p_movingPlatforms = &LocalClientGlobals->movingPlatforms;
    __asm { vmovaps [rsp+0E8h+var_18], xmm6 }
    toTime = LocalClientGlobals->oldTime;
    __asm
    {
      vmovaps [rsp+0E8h+var_38], xmm8
      vmovaps [rsp+0E8h+var_48], xmm9
      vmovaps [rsp+0E8h+var_58], xmm10
    }
    CGMovingPlatformClient::AdjustPositionForMover(p_movingPlatforms, localClientNum, p_origin, time, toTime, &out, &outDeltaPlatformOrigin, &outDeltaAngles, this);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+596A8h]
      vsubss  xmm8, xmm0, dword ptr [rsp+0E8h+var_98]
      vmovss  xmm1, dword ptr [rdi+596ACh]
      vmovss  xmm0, dword ptr [rdi+596B0h]
      vsubss  xmm9, xmm1, dword ptr [rsp+0E8h+var_98+4]
      vsubss  xmm10, xmm0, dword ptr [rsp+0E8h+var_98+8]
      vmulss  xmm1, xmm9, xmm9
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
    }
    if ( !isTeleported && !isOnMovingPlatform )
      __asm { vcomiss xmm6, cs:__real@3dcccccd }
    __asm
    {
      vmovaps xmm9, [rsp+0E8h+var_48]
      vmovaps xmm8, [rsp+0E8h+var_38]
      vmovaps xmm6, [rsp+0E8h+var_18]
      vmovaps xmm10, [rsp+0E8h+var_58]
    }
  }
}

