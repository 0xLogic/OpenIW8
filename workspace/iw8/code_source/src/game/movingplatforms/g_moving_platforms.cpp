/*
==============
GMovingPlatforms::GMovingPlatforms
==============
*/

void __fastcall GMovingPlatforms::GMovingPlatforms(GMovingPlatforms *this)
{
  ??0GMovingPlatforms@@QEAA@XZ(this);
}

/*
==============
GMovingPlatformClient::PredictPosition
==============
*/

void __fastcall GMovingPlatformClient::PredictPosition(GMovingPlatformClient *this, gentity_s *character)
{
  ?PredictPosition@GMovingPlatformClient@@AEAAXPEAUgentity_s@@@Z(this, character);
}

/*
==============
GMovingPlatformClient::GetCharacterEntityInfo
==============
*/

int __fastcall GMovingPlatformClient::GetCharacterEntityInfo(GMovingPlatformClient *this, int entId, BGMovingPlatformClient::CharacterInfo *outInfo)
{
  return ?GetCharacterEntityInfo@GMovingPlatformClient@@UEBAHHPEAUCharacterInfo@BGMovingPlatformClient@@@Z(this, entId, outInfo);
}

/*
==============
GMovingPlatformClient::UpdateLinkToBlendPos
==============
*/

void __fastcall GMovingPlatformClient::UpdateLinkToBlendPos(GMovingPlatformClient *this, gentity_s *ent)
{
  ?UpdateLinkToBlendPos@GMovingPlatformClient@@QEAAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
GMovingPlatforms::MoverSlide
==============
*/

void __fastcall GMovingPlatforms::MoverSlide(gentity_s *ent)
{
  ?MoverSlide@GMovingPlatforms@@CAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::UpdateMoverInternalVelocity
==============
*/

void __fastcall GMovingPlatforms::UpdateMoverInternalVelocity(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles)
{
  ?UpdateMoverInternalVelocity@GMovingPlatforms@@CAXPEAUgentity_s@@AEBTvec3_t@@1@Z(ent, prevOrigin, prevAngles);
}

/*
==============
GMovingPlatformClient::CanPush
==============
*/

int __fastcall GMovingPlatformClient::CanPush(const gentity_s *ent)
{
  return ?CanPush@GMovingPlatformClient@@SAHPEBUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::DeferredUpdateAll
==============
*/

void GMovingPlatforms::DeferredUpdateAll(void)
{
  ?DeferredUpdateAll@GMovingPlatforms@@SAXXZ();
}

/*
==============
GMovingPlatformClient::ApplyMoverDelta
==============
*/

void __fastcall GMovingPlatformClient::ApplyMoverDelta(GMovingPlatformClient *this, playerState_s *ps)
{
  ?ApplyMoverDelta@GMovingPlatformClient@@QEBAXPEAUplayerState_s@@@Z(this, ps);
}

/*
==============
GMovingPlatforms::UpdateMovingPlatformEntityInternal
==============
*/

void __fastcall GMovingPlatforms::UpdateMovingPlatformEntityInternal(gentity_s *ent, const vec3_t *deltaOrigin, const vec3_t *deltaAngles)
{
  ?UpdateMovingPlatformEntityInternal@GMovingPlatforms@@SAXPEAUgentity_s@@AEBTvec3_t@@1@Z(ent, deltaOrigin, deltaAngles);
}

/*
==============
GMovingPlatformClient::ResetPredictedPosition
==============
*/

void __fastcall GMovingPlatformClient::ResetPredictedPosition(GMovingPlatformClient *this, gentity_s *character)
{
  ?ResetPredictedPosition@GMovingPlatformClient@@AEAAXPEAUgentity_s@@@Z(this, character);
}

/*
==============
GMovingPlatformClient::SendUnresolvedCollision
==============
*/

void __fastcall GMovingPlatformClient::SendUnresolvedCollision(GMovingPlatformClient *this, gentity_s *pusher, gentity_s *character, int touchingEnt)
{
  ?SendUnresolvedCollision@GMovingPlatformClient@@AEAAXPEAUgentity_s@@0H@Z(this, pusher, character, touchingEnt);
}

/*
==============
GMovingPlatformClient::UpdatePlatformTrace
==============
*/

void __fastcall GMovingPlatformClient::UpdatePlatformTrace(GMovingPlatformClient *this, gentity_s *clientEnt, int forceLongTrace)
{
  ?UpdatePlatformTrace@GMovingPlatformClient@@QEAAXPEAUgentity_s@@H@Z(this, clientEnt, forceLongTrace);
}

/*
==============
GMovingPlatformClient::ClearDeferredData
==============
*/

void __fastcall GMovingPlatformClient::ClearDeferredData(GMovingPlatformClient *this)
{
  ?ClearDeferredData@GMovingPlatformClient@@QEAAXXZ(this);
}

/*
==============
GMovingPlatformClient::DeferredUpdate
==============
*/

void __fastcall GMovingPlatformClient::DeferredUpdate(GMovingPlatformClient *this, gentity_s *character, bool *outNeedsBroadPhaseWarp)
{
  ?DeferredUpdate@GMovingPlatformClient@@AEAAXPEAUgentity_s@@AEA_N@Z(this, character, outNeedsBroadPhaseWarp);
}

/*
==============
GMovingPlatformClient::ClearPlatformEntity
==============
*/

void __fastcall GMovingPlatformClient::ClearPlatformEntity(GMovingPlatformClient *this, playerState_s *ps)
{
  ?ClearPlatformEntity@GMovingPlatformClient@@AEAAXPEAUplayerState_s@@@Z(this, ps);
}

/*
==============
GMovingPlatformClient::GMovingPlatformClient
==============
*/

void __fastcall GMovingPlatformClient::GMovingPlatformClient(GMovingPlatformClient *this)
{
  ??0GMovingPlatformClient@@QEAA@XZ(this);
}

/*
==============
GMovingPlatforms::~GMovingPlatforms
==============
*/

void __fastcall GMovingPlatforms::~GMovingPlatforms(GMovingPlatforms *this)
{
  ??1GMovingPlatforms@@UEAA@XZ(this);
}

/*
==============
GMovingPlatforms::RunMoverNonScriptedAnim
==============
*/

void __fastcall GMovingPlatforms::RunMoverNonScriptedAnim(gentity_s *ent)
{
  ?RunMoverNonScriptedAnim@GMovingPlatforms@@CAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::ComputeMoverPushDeltas
==============
*/

void __fastcall GMovingPlatforms::ComputeMoverPushDeltas(const gentity_s *ent, const vec3_t *deltaOrigin, const vec3_t *deltaAngles, vec3_t *outMove, vec3_t *outAMove)
{
  ?ComputeMoverPushDeltas@GMovingPlatforms@@SAXPEBUgentity_s@@AEBTvec3_t@@1AEAT3@2@Z(ent, deltaOrigin, deltaAngles, outMove, outAMove);
}

/*
==============
GMovingPlatformClient::TryPushingClient
==============
*/

void __fastcall GMovingPlatformClient::TryPushingClient(GMovingPlatformClient *this, gentity_s *check, gentity_s *pusher, const vec3_t *move, const vec3_t *amove, vec3_t *outNewOrigin)
{
  ?TryPushingClient@GMovingPlatformClient@@AEAAXPEAUgentity_s@@0AEBTvec3_t@@1AEAT3@@Z(this, check, pusher, move, amove, outNewOrigin);
}

/*
==============
GMovingPlatforms::MoverPush
==============
*/

void __fastcall GMovingPlatforms::MoverPush(gentity_s *pusher, const vec3_t *move, const vec3_t *amove)
{
  ?MoverPush@GMovingPlatforms@@CAXPEAUgentity_s@@AEBTvec3_t@@1@Z(pusher, move, amove);
}

/*
==============
GMovingPlatforms::ResetPredictedPositions
==============
*/

void GMovingPlatforms::ResetPredictedPositions(void)
{
  ?ResetPredictedPositions@GMovingPlatforms@@SAXXZ();
}

/*
==============
GMovingPlatforms::InitClient
==============
*/

void __fastcall GMovingPlatforms::InitClient(gentity_s *clientEnt, BgObjectHandle<GMovingPlatformClient> *moverHandle)
{
  ?InitClient@GMovingPlatforms@@SAXPEAUgentity_s@@PEAV?$BgObjectHandle@VGMovingPlatformClient@@@@@Z(clientEnt, moverHandle);
}

/*
==============
GMovingPlatformClient::GetDeferredDeltaOriginAndAngles
==============
*/

void __fastcall GMovingPlatformClient::GetDeferredDeltaOriginAndAngles(GMovingPlatformClient *this, vec3_t *outDelta, vec3_t *outAngleDelta)
{
  ?GetDeferredDeltaOriginAndAngles@GMovingPlatformClient@@QEAAXAEATvec3_t@@0@Z(this, outDelta, outAngleDelta);
}

/*
==============
GMovingPlatforms::KeyframeMarkedEntities
==============
*/

void __fastcall GMovingPlatforms::KeyframeMarkedEntities(int numEntities)
{
  ?KeyframeMarkedEntities@GMovingPlatforms@@SAXH@Z(numEntities);
}

/*
==============
GMovingPlatformEntityTracking::AttemptGrenadeLink
==============
*/

void __fastcall GMovingPlatformEntityTracking::AttemptGrenadeLink(GMovingPlatformEntityTracking *this, gentity_s *grenade, const trace_t *impact)
{
  ?AttemptGrenadeLink@GMovingPlatformEntityTracking@@QEAAXPEAUgentity_s@@PEBUtrace_t@@@Z(this, grenade, impact);
}

/*
==============
GMovingPlatformClient::UnresolvedCollisionOnlyUpdate
==============
*/

void __fastcall GMovingPlatformClient::UnresolvedCollisionOnlyUpdate(GMovingPlatformClient *this, gentity_s *character, playerState_s *ps)
{
  ?UnresolvedCollisionOnlyUpdate@GMovingPlatformClient@@AEAAXPEAUgentity_s@@PEAUplayerState_s@@@Z(this, character, ps);
}

/*
==============
GMovingPlatforms::IsEntityKeyframedMover
==============
*/

bool __fastcall GMovingPlatforms::IsEntityKeyframedMover(const gentity_s *ent)
{
  return ?IsEntityKeyframedMover@GMovingPlatforms@@SA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::BoltImpactEffectToMovingPlatform
==============
*/

int __fastcall GMovingPlatforms::BoltImpactEffectToMovingPlatform(gentity_s *ent, unsigned int event, unsigned int eventParm, int createTempEnt, gentity_s *baseEnt, int allowBolt, int additionalTrace, gentity_s *other)
{
  return ?BoltImpactEffectToMovingPlatform@GMovingPlatforms@@SAHPEAUgentity_s@@IIH0HH0@Z(ent, event, eventParm, createTempEnt, baseEnt, allowBolt, additionalTrace, other);
}

/*
==============
GMovingPlatforms::MoverTeam
==============
*/

void __fastcall GMovingPlatforms::MoverTeam(gentity_s *ent, const vec3_t *deltaOrigin, const vec3_t *deltaAngles)
{
  ?MoverTeam@GMovingPlatforms@@CAXPEAUgentity_s@@AEBTvec3_t@@1@Z(ent, deltaOrigin, deltaAngles);
}

/*
==============
GMovingPlatforms::UnmarkEntityKeyframedMover
==============
*/

void __fastcall GMovingPlatforms::UnmarkEntityKeyframedMover(const gentity_s *ent)
{
  ?UnmarkEntityKeyframedMover@GMovingPlatforms@@SAXPEBUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::PredictPositions
==============
*/

void GMovingPlatforms::PredictPositions(void)
{
  ?PredictPositions@GMovingPlatforms@@SAXXZ();
}

/*
==============
GMovingPlatforms::AnimScriptThink
==============
*/

void __fastcall GMovingPlatforms::AnimScriptThink(gentity_s *ent)
{
  ?AnimScriptThink@GMovingPlatforms@@SAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::UpdateAllPlatformTraces
==============
*/

void GMovingPlatforms::UpdateAllPlatformTraces(void)
{
  ?UpdateAllPlatformTraces@GMovingPlatforms@@SAXXZ();
}

/*
==============
GMovingPlatforms::UpdateEntityMoveFlag
==============
*/

void __fastcall GMovingPlatforms::UpdateEntityMoveFlag(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles)
{
  ?UpdateEntityMoveFlag@GMovingPlatforms@@SAXPEAUgentity_s@@AEBTvec3_t@@1@Z(ent, prevOrigin, prevAngles);
}

/*
==============
GMovingPlatformClient::DeferredAddCharacter
==============
*/

void __fastcall GMovingPlatformClient::DeferredAddCharacter(GMovingPlatformClient *this, gentity_s *character, const gentity_s *platform, const vec3_t *move, const vec3_t *amove)
{
  ?DeferredAddCharacter@GMovingPlatformClient@@QEAAXPEAUgentity_s@@PEBU2@AEBTvec3_t@@2@Z(this, character, platform, move, amove);
}

/*
==============
GMovingPlatforms::GetSaveField
==============
*/

const saveField_t *__fastcall GMovingPlatforms::GetSaveField(GMovingPlatforms *this)
{
  return ?GetSaveField@GMovingPlatforms@@QEAAPEBUsaveField_t@@XZ(this);
}

/*
==============
GMovingPlatformClient::IsMovingPlatformMoving
==============
*/

bool __fastcall GMovingPlatformClient::IsMovingPlatformMoving(GMovingPlatformClient *this, int entityNum)
{
  return ?IsMovingPlatformMoving@GMovingPlatformClient@@UEBA_NH@Z(this, entityNum);
}

/*
==============
GMovingPlatforms::UpdateMovingPlatformEntity
==============
*/

void __fastcall GMovingPlatforms::UpdateMovingPlatformEntity(gentity_s *ent)
{
  ?UpdateMovingPlatformEntity@GMovingPlatforms@@SAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::UpdatePlayerLocalOffset
==============
*/

void __fastcall GMovingPlatforms::UpdatePlayerLocalOffset(playerState_s *ps)
{
  ?UpdatePlayerLocalOffset@GMovingPlatforms@@SAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
GMovingPlatforms::UpdateMoverPhysicsVelocity
==============
*/

void __fastcall GMovingPlatforms::UpdateMoverPhysicsVelocity(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles)
{
  ?UpdateMoverPhysicsVelocity@GMovingPlatforms@@SAXPEAUgentity_s@@AEBTvec3_t@@1@Z(ent, prevOrigin, prevAngles);
}

/*
==============
GMovingPlatformClient::TestEntityPosition
==============
*/

gentity_s *__fastcall GMovingPlatformClient::TestEntityPosition(gentity_s *ent, const vec3_t *vOrigin)
{
  return ?TestEntityPosition@GMovingPlatformClient@@CAPEAUgentity_s@@PEAU2@AEBTvec3_t@@@Z(ent, vOrigin);
}

/*
==============
GMovingPlatforms::MarkEntityKeyframedMover
==============
*/

void __fastcall GMovingPlatforms::MarkEntityKeyframedMover(const gentity_s *ent)
{
  ?MarkEntityKeyframedMover@GMovingPlatforms@@SAXPEBUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::GetMoverEntityFromPs
==============
*/

gentity_s *__fastcall GMovingPlatforms::GetMoverEntityFromPs(playerState_s *ps)
{
  return ?GetMoverEntityFromPs@GMovingPlatforms@@SAPEAUgentity_s@@PEAUplayerState_s@@@Z(ps);
}

/*
==============
G_Debug_TestPlayerCollisionPoint
==============
*/

void __fastcall G_Debug_TestPlayerCollisionPoint(const gentity_s *player)
{
  ?G_Debug_TestPlayerCollisionPoint@@YAXPEBUgentity_s@@@Z(player);
}

/*
==============
GMovingPlatforms::TraceHitMovingPlatform
==============
*/

int __fastcall GMovingPlatforms::TraceHitMovingPlatform(const trace_t *trace)
{
  return ?TraceHitMovingPlatform@GMovingPlatforms@@SAHPEBUtrace_t@@@Z(trace);
}

/*
==============
GMovingPlatforms::DeferredReset
==============
*/

void GMovingPlatforms::DeferredReset(void)
{
  ?DeferredReset@GMovingPlatforms@@SAXXZ();
}

/*
==============
GMovingPlatformClient::DoEntitiesShareHierarchy
==============
*/

bool __fastcall GMovingPlatformClient::DoEntitiesShareHierarchy(GMovingPlatformClient *this, int ent0, int ent1)
{
  return ?DoEntitiesShareHierarchy@GMovingPlatformClient@@UEBA_NHH@Z(this, ent0, ent1);
}

/*
==============
GMovingPlatforms::GetClientFromGEntity
==============
*/

GMovingPlatformClient *__fastcall GMovingPlatforms::GetClientFromGEntity(gentity_s *ent)
{
  return ?GetClientFromGEntity@GMovingPlatforms@@SAPEAVGMovingPlatformClient@@PEAUgentity_s@@@Z(ent);
}

/*
==============
GMovingPlatforms::MoverLinkAndRotate
==============
*/

void __fastcall GMovingPlatforms::MoverLinkAndRotate(gentity_s *ent, const TagInfoLinkedRotation *const linkedRotationData)
{
  ?MoverLinkAndRotate@GMovingPlatforms@@CAXPEAUgentity_s@@QEBUTagInfoLinkedRotation@@@Z(ent, linkedRotationData);
}

/*
==============
GMovingPlatforms::ComputeMovingPlatformEntityDeltas
==============
*/

bool __fastcall GMovingPlatforms::ComputeMovingPlatformEntityDeltas(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles, vec3_t *outDeltaOrigin, vec3_t *outDeltaAngles, bool warp)
{
  return ?ComputeMovingPlatformEntityDeltas@GMovingPlatforms@@SA_NPEAUgentity_s@@AEBTvec3_t@@1AEAT3@2_N@Z(ent, prevOrigin, prevAngles, outDeltaOrigin, outDeltaAngles, warp);
}

/*
==============
GMovingPlatformClient::GetMoverEntityInfo
==============
*/

int __fastcall GMovingPlatformClient::GetMoverEntityInfo(GMovingPlatformClient *this, int entId, BGMovingPlatformClient::MoverInfo *outInfo)
{
  return ?GetMoverEntityInfo@GMovingPlatformClient@@UEBAHHPEAUMoverInfo@BGMovingPlatformClient@@@Z(this, entId, outInfo);
}

/*
==============
GMovingPlatformClient::GMovingPlatformClient
==============
*/
void GMovingPlatformClient::GMovingPlatformClient(GMovingPlatformClient *this)
{
  GHandler *Handler; 

  Handler = GHandler::getHandler();
  BGMovingPlatformClient::BGMovingPlatformClient(this, Handler, LOCAL_CLIENT_INVALID);
  this->m_lastValidGroundTime = 0;
  this->__vftable = (GMovingPlatformClient_vtbl *)&GMovingPlatformClient::`vftable';
}

/*
==============
GMovingPlatforms::GMovingPlatforms
==============
*/
void GMovingPlatforms::GMovingPlatforms(GMovingPlatforms *this)
{
  GMovingPlatformClient *m_moverClientArray; 
  __int64 v3; 

  BGMovingPlatforms::BGMovingPlatforms(this);
  this->__vftable = (GMovingPlatforms_vtbl *)&GMovingPlatforms::`vftable';
  m_moverClientArray = this->m_moverClientArray;
  v3 = 248i64;
  do
  {
    GMovingPlatformClient::GMovingPlatformClient(m_moverClientArray++);
    --v3;
  }
  while ( v3 );
}

/*
==============
GMovingPlatforms::~GMovingPlatforms
==============
*/
void GMovingPlatforms::~GMovingPlatforms(GMovingPlatforms *this)
{
  this->__vftable = (GMovingPlatforms_vtbl *)&GMovingPlatforms::`vftable';
  LOBYTE(GMovingPlatforms::ms_allocatedType) = 0;
  BGMovingPlatforms::~BGMovingPlatforms(this);
}

/*
==============
GMovingPlatforms::AnimScriptThink
==============
*/

void __fastcall GMovingPlatforms::AnimScriptThink(gentity_s *ent)
{
  G_Animscripted_Think(ent);
}

/*
==============
GMovingPlatformClient::ApplyMoverDelta
==============
*/
void GMovingPlatformClient::ApplyMoverDelta(GMovingPlatformClient *this, playerState_s *ps)
{
  _RBX = ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2169, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
    goto LABEL_11;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
    __debugbreak();
  if ( !_RBX->activeExecutionIsVictim )
  {
LABEL_11:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vaddss  xmm1, xmm0, dword ptr [rdi+48h]
      vmovss  dword ptr [rbx+30h], xmm1
      vmovss  xmm2, dword ptr [rbx+34h]
      vaddss  xmm0, xmm2, dword ptr [rdi+4Ch]
      vmovss  dword ptr [rbx+34h], xmm0
      vmovss  xmm1, dword ptr [rbx+38h]
      vaddss  xmm2, xmm1, dword ptr [rdi+50h]
      vmovss  dword ptr [rbx+38h], xmm2
    }
  }
}

/*
==============
GMovingPlatformEntityTracking::AttemptGrenadeLink
==============
*/
void GMovingPlatformEntityTracking::AttemptGrenadeLink(GMovingPlatformEntityTracking *this, gentity_s *grenade, const trace_t *impact)
{
  gentity_s *v5; 
  GMovingPlatforms *MovingPlatforms; 
  scr_string_t partName; 

  EntHandle::setEnt(&this->m_trackEnt, NULL);
  if ( GMovingPlatforms::TraceHitMovingPlatform(impact) )
  {
    v5 = &g_entities[impact->hitId];
    if ( v5->s.eType == ET_SCRIPTMOVER )
    {
      G_SetOrigin(grenade, &grenade->r.currentOrigin, 1, 1);
      MovingPlatforms = GMovingPlatforms::GetMovingPlatforms();
      if ( MovingPlatforms->ShouldGrenadeLinkPartname(MovingPlatforms) )
        partName = impact->partName;
      else
        partName = 0;
      G_EntLinkTo(grenade, v5, partName, 0, NULL);
      G_Utils_AddEvent(grenade, 0x72u, 0);
    }
  }
}

/*
==============
GMovingPlatforms::BoltImpactEffectToMovingPlatform
==============
*/
__int64 GMovingPlatforms::BoltImpactEffectToMovingPlatform(gentity_s *ent, unsigned int event, unsigned int eventParm, int createTempEnt, gentity_s *baseEnt, int allowBolt, int additionalTrace, gentity_s *other)
{
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  char v25; 
  const dvar_t *v63; 
  __int64 result; 
  vec3_t trBase; 
  __int64 v70; 
  vec3_t start; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RDI = ent;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GMovingPlatforms BoltImpactEffectToMovingPlatform");
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  if ( allowBolt && GMovingPlatforms::ms_instance->ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatforms::ms_instance, other) && (other->flags.m_flags[0] & 0x8000) == 0 )
  {
    if ( createTempEnt )
    {
      _RBX = G_Utils_SpawnEventEntity(&_RDI->r.currentOrigin, event);
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(Instance, _RDI->s.weaponHandle);
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 448, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      Instance->SetWeapon(Instance, &_RBX->s.weaponHandle, Weapon);
      _RBX->s.surfType = _RDI->s.surfType;
      _RDI->r.eventTime = level.time;
    }
    else
    {
      _RBX = _RDI;
      G_Utils_AddEvent(_RDI, event, eventParm);
    }
    if ( additionalTrace )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rdi+130h]
        vmovss  dword ptr [rsp+180h+start], xmm4
        vmovss  xmm3, dword ptr [rdi+134h]
        vmovss  dword ptr [rsp+180h+start+4], xmm3
        vmovss  xmm2, dword ptr [rdi+138h]
        vaddss  xmm0, xmm2, cs:__real@41f00000
        vmovss  dword ptr [rsp+180h+start+8], xmm0
        vmovss  dword ptr [rsp+180h+end], xmm4
        vmovss  dword ptr [rsp+180h+end+4], xmm3
        vsubss  xmm0, xmm2, cs:__real@41f00000
        vmovss  dword ptr [rbp+80h+end+8], xmm0
      }
      G_Missile_Trace(_RDI, &results, &start, &end, &_RDI->r.box, _RDI->s.number, 2047, baseEnt->clipmask, 1);
      __asm
      {
        vmovss  xmm0, [rbp+80h+results.fraction]
        vcomiss xmm0, cs:__real@3f800000
      }
      if ( v25 )
      {
        if ( results.hitType == TRACE_HITTYPE_ENTITY && BGMovingPlatforms::IsMovingPlatform(results.hitId) && BGMovingPlatforms::IsPlatformType(g_entities[results.hitId].s.eType) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+180h+end]
            vsubss  xmm1, xmm0, dword ptr [rsp+180h+start]
            vmovss  xmm5, [rbp+80h+results.fraction]
            vmulss  xmm1, xmm1, xmm5
            vaddss  xmm0, xmm1, dword ptr [rsp+180h+start]
            vmovss  dword ptr [rbx+130h], xmm0
            vmovss  xmm1, dword ptr [rsp+180h+end+4]
            vsubss  xmm0, xmm1, dword ptr [rsp+180h+start+4]
            vmulss  xmm2, xmm0, xmm5
            vaddss  xmm3, xmm2, dword ptr [rsp+180h+start+4]
            vmovss  dword ptr [rbx+134h], xmm3
            vmovss  xmm0, dword ptr [rbp+80h+end+8]
            vsubss  xmm1, xmm0, dword ptr [rsp+180h+start+8]
            vmulss  xmm2, xmm1, xmm5
            vaddss  xmm3, xmm2, dword ptr [rsp+180h+start+8]
            vmovss  dword ptr [rbx+138h], xmm3
          }
        }
      }
    }
    _RBX->s.otherEntityNum = other->s.number;
    _RBX->s.lerp.u.anonymous.data[4] |= 1u;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vsubss  xmm8, xmm0, dword ptr [r14+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vsubss  xmm6, xmm1, dword ptr [r14+134h]
      vmovss  xmm0, dword ptr [rbx+138h]
      vsubss  xmm7, xmm0, dword ptr [r14+138h]
    }
    AnglesToAxis(&other->r.currentAngles, &axis);
    __asm
    {
      vmulss  xmm3, xmm6, dword ptr [rbp+80h+axis+4]
      vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm7, dword ptr [rbp+80h+axis+8]
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsp+180h+trBase], xmm2
      vmulss  xmm3, xmm6, dword ptr [rbp+80h+axis+10h]
      vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis+0Ch]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm7, dword ptr [rbp+80h+axis+14h]
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsp+180h+trBase+4], xmm2
      vmulss  xmm3, xmm6, dword ptr [rbp+80h+axis+1Ch]
      vmulss  xmm2, xmm8, dword ptr [rbp+80h+axis+18h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm1, xmm7, dword ptr [rbp+80h+axis+20h]
      vaddss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsp+180h+trBase+8], xmm2
    }
    Trajectory_SetTrBase(&_RBX->s.lerp.pos, &trBase);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+130h]
      vmovss  xmm7, dword ptr [rbx+134h]
      vmovss  xmm8, dword ptr [rbx+138h]
    }
    G_SetOriginAndAngle(_RBX, &trBase, &_RDI->r.currentAngles, 1, 1);
    __asm
    {
      vmovss  dword ptr [rbx+28h], xmm6
      vmovss  dword ptr [rbx+2Ch], xmm7
      vmovss  dword ptr [rbx+30h], xmm8
    }
    v63 = DVARBOOL_killswitch_mover_missile_impact_lod_fix_enabled;
    if ( !DVARBOOL_killswitch_mover_missile_impact_lod_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mover_missile_impact_lod_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    if ( v63->current.enabled )
      GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&_RBX->flags, GameModeFlagValues::ms_mpValue, 0x25u);
    Sys_ProfEndNamedEvent();
    memset(&trBase, 0, sizeof(trBase));
    result = 1i64;
  }
  else
  {
    Sys_ProfEndNamedEvent();
    result = 0i64;
  }
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
GMovingPlatformClient::CanPush
==============
*/
__int64 GMovingPlatformClient::CanPush(const gentity_s *ent)
{
  unsigned int Instance; 
  __int64 v3; 

  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, ent->s.number);
  if ( Instance == -1 )
    return 0i64;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", 0) )
    __debugbreak();
  if ( !g_havokPhysicsWorlds[0].world )
  {
    LODWORD(v3) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v3) )
      __debugbreak();
  }
  if ( !HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, Instance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1154, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstanceId ) > 0)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstanceId ) > 0") )
    __debugbreak();
  return Physics_GetRigidBodyContents(PHYSICS_WORLD_ID_FIRST, Instance, 0) & 0x2014011;
}

/*
==============
GMovingPlatformClient::ClearDeferredData
==============
*/
void GMovingPlatformClient::ClearDeferredData(GMovingPlatformClient *this)
{
  this->m_deferredData.platformId = 2047;
}

/*
==============
GMovingPlatformClient::ClearPlatformEntity
==============
*/
void GMovingPlatformClient::ClearPlatformEntity(GMovingPlatformClient *this, playerState_s *ps)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 198, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BGMovingPlatformPS::ClearMoverID(&ps->movingPlatforms, ps, this->m_bgHandler);
}

/*
==============
GMovingPlatforms::ComputeMoverPushDeltas
==============
*/
void GMovingPlatforms::ComputeMoverPushDeltas(const gentity_s *ent, const vec3_t *deltaOrigin, const vec3_t *deltaAngles, vec3_t *outMove, vec3_t *outAMove)
{
  GTrajectory v21; 
  vec3_t outPos; 
  vec3_t outAng; 

  _RDI = outMove;
  _RSI = outAMove;
  if ( ent->tagInfo )
  {
    *outMove = *deltaOrigin;
    *(_QWORD *)outAMove->v = *(_QWORD *)deltaAngles->v;
    __asm
    {
      vmovss  xmm0, dword ptr [r8+8]
      vmovss  dword ptr [rsi+8], xmm0
    }
  }
  else if ( ent->s.eType == ET_SCRIPTMOVER && (ent->s.lerp.u.anonymous.data[2] & 0x200) != 0 && ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH && ent->s.lerp.apos.trType == TR_PHYSICS_SERVER_AUTH )
  {
    *outMove = ent->moverInfo.m_deltaOrigin;
    *(_QWORD *)outAMove->v = *(_QWORD *)ent->moverInfo.m_deltaAngles.v;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+2BCh]
      vmovss  dword ptr [rsi+8], xmm0
    }
  }
  else
  {
    GTrajectory::GTrajectory(&v21, ent);
    BgTrajectory::EvaluateTrajectories(&v21, level.time, &outPos, &outAng);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+78h+outPos]
      vsubss  xmm1, xmm0, dword ptr [rbx+130h]
      vmovss  xmm2, dword ptr [rsp+78h+outPos+4]
      vmovss  dword ptr [rdi], xmm1
      vsubss  xmm0, xmm2, dword ptr [rbx+134h]
      vmovss  xmm1, dword ptr [rsp+78h+outPos+8]
      vmovss  dword ptr [rdi+4], xmm0
      vsubss  xmm2, xmm1, dword ptr [rbx+138h]
      vmovss  xmm0, dword ptr [rsp+78h+outAng]
      vmovss  dword ptr [rdi+8], xmm2
      vsubss  xmm1, xmm0, dword ptr [rbx+13Ch]
      vmovss  xmm2, dword ptr [rsp+78h+outAng+4]
      vmovss  dword ptr [rsi], xmm1
      vsubss  xmm0, xmm2, dword ptr [rbx+140h]
      vmovss  xmm1, dword ptr [rsp+78h+outAng+8]
      vmovss  dword ptr [rsi+4], xmm0
      vsubss  xmm2, xmm1, dword ptr [rbx+144h]
      vmovss  dword ptr [rsi+8], xmm2
    }
  }
}

/*
==============
GMovingPlatforms::ComputeMovingPlatformEntityDeltas
==============
*/
char GMovingPlatforms::ComputeMovingPlatformEntityDeltas(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles, vec3_t *outDeltaOrigin, vec3_t *outDeltaAngles, bool warp)
{
  _RSI = outDeltaAngles;
  *(_QWORD *)outDeltaOrigin->v = 0i64;
  _RDI = outDeltaOrigin;
  outDeltaOrigin->v[2] = 0.0;
  _RBX = ent;
  *(_QWORD *)outDeltaAngles->v = 0i64;
  outDeltaAngles->v[2] = 0.0;
  if ( ent->tagInfo )
  {
    if ( GMovingPlatformClient::CanPush(ent) )
    {
      if ( warp )
        G_GeneralLink(_RBX);
      else
        G_GeneralLinkNoWarp(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vsubss  xmm1, xmm0, dword ptr [r15]
        vmovss  dword ptr [rdi], xmm1
        vmovss  xmm0, dword ptr [rbx+134h]
        vsubss  xmm1, xmm0, dword ptr [r15+4]
        vmovss  dword ptr [rdi+4], xmm1
        vmovss  xmm0, dword ptr [rbx+138h]
        vsubss  xmm1, xmm0, dword ptr [r15+8]
        vmovss  dword ptr [rdi+8], xmm1
        vmovss  xmm0, dword ptr [rbx+13Ch]
        vsubss  xmm1, xmm0, dword ptr [r14]
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm0, dword ptr [rbx+140h]
        vsubss  xmm1, xmm0, dword ptr [r14+4]
        vmovss  dword ptr [rsi+4], xmm1
        vmovss  xmm0, dword ptr [rbx+144h]
        vsubss  xmm1, xmm0, dword ptr [r14+8]
        vmovss  dword ptr [rsi+8], xmm1
      }
      _RBX->r.currentOrigin.v[0] = prevOrigin->v[0];
      _RBX->r.currentOrigin.v[1] = prevOrigin->v[1];
      _RBX->r.currentOrigin.v[2] = prevOrigin->v[2];
      _RBX->r.currentAngles.v[0] = prevAngles->v[0];
      _RBX->r.currentAngles.v[1] = prevAngles->v[1];
      _RBX->r.currentAngles.v[2] = prevAngles->v[2];
      SV_LinkEntity(_RBX);
      return 1;
    }
  }
  else if ( !BgTrajectory::IsAnimatedTrajectory(&ent->s.lerp.pos) )
  {
    return 1;
  }
  return 0;
}

/*
==============
GMovingPlatformClient::DeferredAddCharacter
==============
*/
void GMovingPlatformClient::DeferredAddCharacter(GMovingPlatformClient *this, gentity_s *character, const gentity_s *platform, const vec3_t *move, const vec3_t *amove)
{
  playerState_s *EntityPlayerState; 
  const dvar_t *v10; 
  char v11; 
  bool v14; 
  int number; 
  int m_movingPlatformEntity; 
  GHandler *Handler; 
  __int64 push; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( character->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(push) = character->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1070, ASSERT_TYPE_ASSERT, "(unsigned)( character->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "character->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", push, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  EntityPlayerState = G_GetEntityPlayerState(character);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1073, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled && (!GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerState->pm_flags, ACTIVE, 5u) || BGMovingPlatforms::IsOnMovingPlatform(EntityPlayerState)) )
  {
    v11 = 0;
    if ( BGMovingPlatforms::IsOnMovingPlatform(EntityPlayerState) && EntityPlayerState->movingPlatforms.m_movingPlatformEntity != platform->s.number )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionMantleFloorFix, "playerCharacterCollisionMantleFloorFix") && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerState->pm_flags, ACTIVE, 5u) )
        return;
      __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
      if ( !VecNCompareCustomEpsilon(g_entities[EntityPlayerState->movingPlatforms.m_movingPlatformEntity].s.lerp.pos.trDelta.v, vec3_origin.v, *(float *)&_XMM2, 3) )
        return;
      __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
      if ( !VecNCompareCustomEpsilon(g_entities[EntityPlayerState->movingPlatforms.m_movingPlatformEntity].s.lerp.apos.trDelta.v, vec3_origin.v, *(float *)&_XMM2, 3) )
        return;
      v11 = 1;
    }
    v14 = v11;
    if ( !BGMovingPlatforms::IsOnMovingPlatform(EntityPlayerState) )
      v14 = 1;
    if ( !BG_IsPlayerZeroG(EntityPlayerState) || BG_IsPlayerZeroGWalking(EntityPlayerState) && !v14 )
    {
      number = platform->s.number;
      m_movingPlatformEntity = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
      Handler = GHandler::getHandler();
      BGMovingPlatformPS::SetMoverEntityID(&EntityPlayerState->movingPlatforms, EntityPlayerState, Handler, m_movingPlatformEntity, number, v14, 1);
      this->m_deferredData.platformId = platform->s.number;
      this->m_deferredData.deltaOrigin.v[0] = move->v[0];
      this->m_deferredData.deltaOrigin.v[1] = move->v[1];
      this->m_deferredData.deltaOrigin.v[2] = move->v[2];
      this->m_deferredData.deltaAngles = *amove;
    }
  }
}

/*
==============
GMovingPlatforms::DeferredReset
==============
*/
void GMovingPlatforms::DeferredReset(void)
{
  unsigned int i; 
  gentity_s *v1; 
  GMovingPlatformClient *v2; 
  __int64 v3; 
  __int64 v4; 

  for ( i = 0; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( i >= 0x800 )
    {
      LODWORD(v4) = 2048;
      LODWORD(v3) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[i] )
    {
      v1 = &g_entities[i];
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v2 = GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, v1);
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 791, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
        __debugbreak();
      v2->m_deferredData.platformId = 2047;
    }
  }
}

/*
==============
GMovingPlatformClient::DeferredUpdate
==============
*/
void GMovingPlatformClient::DeferredUpdate(GMovingPlatformClient *this, gentity_s *character, bool *outNeedsBroadPhaseWarp)
{
  GMovingPlatforms *MovingPlatforms; 
  int v20; 
  char v21; 
  __int16 viewlocked_entNum; 
  gentity_s *GEntity; 
  gentity_s *v33; 
  __int64 v34; 
  vec3_t *outNewOrigin; 
  vec3_t trBase; 
  vec3_t platformAngles; 
  vec3_t outAppliedDelta; 

  _RDI = this;
  _RSI = character;
  _RBX = G_GetEntityPlayerState(character);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 969, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)_RDI->m_moverAppliedDelta.v = 0i64;
  _RDI->m_moverAppliedDelta.v[2] = 0.0;
  if ( BGMovingPlatforms::IsMovingPlatform(_RDI->m_deferredData.platformId) )
  {
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    if ( GMovingPlatforms::ms_instance->ShouldAllowPlatformMovement(GMovingPlatforms::ms_instance, _RSI) && G_IsEntityInUse(_RDI->m_deferredData.platformId) )
    {
      _RBP = &_RDI->m_deferredData.deltaAngles;
      _R14 = &_RDI->m_deferredData.deltaOrigin;
      _R15 = &g_entities[_RDI->m_deferredData.platformId];
      GMovingPlatformClient::TryPushingClient(_RDI, _RSI, _R15, &_RDI->m_deferredData.deltaOrigin, &_RDI->m_deferredData.deltaAngles, &trBase);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+trBase]
        vmovss  xmm1, dword ptr [rsp+0B8h+trBase+4]
        vmovss  dword ptr [rsi+130h], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+trBase+8]
        vmovss  dword ptr [rsi+138h], xmm0
        vmovss  dword ptr [rsi+134h], xmm1
      }
      Trajectory_SetTrBase(&_RSI->s.lerp.pos, &trBase);
      G_PhysicsCharacterProxy_Teleport(_RSI, 0);
      *outNeedsBroadPhaseWarp = 1;
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 0xDu) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15+13Ch]
          vsubss  xmm1, xmm0, dword ptr [rbp+0]
          vmovss  xmm2, dword ptr [r15+140h]
          vsubss  xmm0, xmm2, dword ptr [rbp+4]
          vmovss  dword ptr [rsp+0B8h+platformAngles], xmm1
          vmovss  xmm1, dword ptr [r15+144h]
          vsubss  xmm2, xmm1, dword ptr [rbp+8]
          vmovss  dword ptr [rsp+0B8h+platformAngles+8], xmm2
          vmovss  dword ptr [rsp+0B8h+platformAngles+4], xmm0
        }
        MovingPlatforms = GMovingPlatforms::GetMovingPlatforms();
        v20 = MovingPlatforms->ShouldUseImprovedAimAlgorithm(MovingPlatforms);
        BGMovingPlatformClient::UpdatePlayerAngles(_RDI, _RBX, &_RDI->m_deferredData.deltaAngles, &platformAngles, &outAppliedDelta, v20);
        BGMovingPlatforms::UpdateDirection(&_RBX->velocity, &_R15->r.currentAngles, &_RDI->m_deferredData.deltaAngles);
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 5u) )
        {
          BGMovingPlatforms::UpdatePoint(&_RBX->mantleState.startPosition, &_R15->r.currentOrigin, &_R15->r.currentAngles, &_RDI->m_deferredData.deltaAngles, &_RDI->m_deferredData.deltaOrigin);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vucomiss xmm0, dword ptr [rbp+0]
          }
          if ( !v21 )
            goto LABEL_19;
          __asm { vucomiss xmm0, dword ptr [rbp+4] }
          if ( !v21 )
            goto LABEL_19;
          __asm { vucomiss xmm0, dword ptr [rbp+8] }
          if ( !v21 )
            goto LABEL_19;
          __asm { vucomiss xmm0, dword ptr [r14] }
          if ( !v21 )
            goto LABEL_19;
          __asm { vucomiss xmm0, dword ptr [r14+4] }
          if ( !v21 )
            goto LABEL_19;
          __asm { vucomiss xmm0, dword ptr [r14+8] }
          if ( !v21 )
LABEL_19:
            _RBX->mantleState.flags |= 0x1000u;
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+0B8h+trBase+4]
        vmovss  xmm3, dword ptr [rsp+0B8h+trBase]
        vsubss  xmm0, xmm3, dword ptr [rbx+30h]
        vmovss  dword ptr [rdi+48h], xmm0
        vsubss  xmm2, xmm1, dword ptr [rbx+34h]
        vmovss  xmm0, dword ptr [rsp+0B8h+trBase+8]
        vmovss  dword ptr [rdi+4Ch], xmm2
        vsubss  xmm1, xmm0, dword ptr [rbx+38h]
        vmovss  dword ptr [rdi+50h], xmm1
        vmovss  dword ptr [rbx+30h], xmm3
        vmovss  xmm0, dword ptr [rsp+0B8h+trBase+4]
        vmovss  dword ptr [rbx+34h], xmm0
        vmovss  xmm1, dword ptr [rsp+0B8h+trBase+8]
        vmovss  dword ptr [rbx+38h], xmm1
      }
      if ( BG_IsTurretActive(_RBX) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x1Cu) )
      {
        viewlocked_entNum = _RBX->viewlocked_entNum;
        if ( viewlocked_entNum != 2047 )
        {
          GEntity = G_GetGEntity(viewlocked_entNum);
          v33 = GEntity;
          if ( GEntity->s.eType == ET_TURRET )
          {
            if ( !GEntity->turretHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
              __debugbreak();
            v34 = v33->turretHandle.m_objIndex - 1;
            if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
              __debugbreak();
            if ( (unsigned int)v34 >= 0x80 )
            {
              LODWORD(outNewOrigin) = v34;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", outNewOrigin, 128) )
                __debugbreak();
            }
            if ( !GTurret::ms_turretArray[v34] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
              __debugbreak();
            _RBX = GTurret::ms_turretArray[v34];
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1051, ASSERT_TYPE_ASSERT, "(turret)", (const char *)&queryFormat, "turret") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0B8h+trBase]
              vmovss  dword ptr [rbx+3Ch], xmm0
              vmovss  xmm1, dword ptr [rsp+0B8h+trBase+4]
              vmovss  dword ptr [rbx+40h], xmm1
              vmovss  xmm0, dword ptr [rsp+0B8h+trBase+8]
              vmovss  dword ptr [rbx+44h], xmm0
            }
          }
        }
      }
    }
  }
  else
  {
    GMovingPlatformClient::UnresolvedCollisionOnlyUpdate(_RDI, _RSI, _RBX);
  }
}

/*
==============
GMovingPlatforms::DeferredUpdateAll
==============
*/
void GMovingPlatforms::DeferredUpdateAll(void)
{
  unsigned int v0; 
  unsigned int i; 
  gentity_s *v2; 
  GMovingPlatformClient *v3; 
  gclient_s *client; 
  int v5; 
  GHandler *Handler; 
  playerState_s *EntityPlayerState; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  __int64 m_movingPlatformEntity; 
  const dvar_t *v11; 
  playerState_s *v12; 
  int *p_m_movingPlatformEntity; 
  const gentity_s *GEntity; 
  const gentity_s *RootParent; 
  gentity_s *v16; 
  GMovingPlatformClient *v17; 
  __int64 v18; 
  __int64 v19; 
  bool outNeedsBroadPhaseWarp; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> platformCurrToLocal; 
  tmat43_t<vec3_t> platformPrevToLocal; 

  v0 = 0;
  outNeedsBroadPhaseWarp = 0;
  for ( i = 0; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( i >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[i] )
    {
      v2 = &g_entities[i];
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v3 = GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, v2);
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 933, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
        __debugbreak();
      G_Debug_TestPlayerCollisionPoint(v2);
      GMovingPlatformClient::DeferredUpdate(v3, v2, &outNeedsBroadPhaseWarp);
      client = v2->client;
      if ( client )
      {
        v5 = v2->clipmask & 0xFDFFBFFF;
        Handler = GHandler::getHandler();
        BGMovingPlatformPS::ResetMoverUpAngles(&client->ps.movingPlatforms, &v2->client->ps, Handler, v5);
      }
      EntityPlayerState = G_GetEntityPlayerState(v2);
      if ( EntityPlayerState )
      {
        v8 = DVARBOOL_killswitch_mover_killcam_timespsace_fix_enabled;
        if ( !DVARBOOL_killswitch_mover_killcam_timespsace_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mover_killcam_timespsace_fix_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( !v8->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
          goto LABEL_41;
        v9 = DCONST_DVARBOOL_usePmoveMoverSystem;
        if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        if ( v9->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 159, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_usePmoveMoverSystem, \"usePmoveMoverSystem\" ))", (const char *)&queryFormat, "!Dconst_GetBool( usePmoveMoverSystem )") )
          __debugbreak();
        m_movingPlatformEntity = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
        if ( (_DWORD)m_movingPlatformEntity != 2047 )
        {
          if ( (unsigned int)m_movingPlatformEntity >= 0x800 )
          {
            LODWORD(v19) = 2048;
            LODWORD(v18) = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( moverId ) < (unsigned)( ( 2048 ) )", "moverId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          AnglesAndOriginToMatrix43(&g_entities[m_movingPlatformEntity].r.currentAngles, &g_entities[m_movingPlatformEntity].r.currentOrigin, &result);
          MatrixInverseOrthogonal43(&result, &out);
          MatrixTransformVector43(&EntityPlayerState->origin, &out, &EntityPlayerState->movingPlatforms.m_moverPlayerOffset);
        }
        else
        {
LABEL_41:
          EntityPlayerState->movingPlatforms.m_moverPlayerOffset.v[2] = 0.0;
          *(_QWORD *)EntityPlayerState->movingPlatforms.m_moverPlayerOffset.v = 0i64;
        }
      }
      G_Debug_TestPlayerCollisionPoint(v2);
      v11 = DVARBOOL_moverDebug;
      if ( !DVARBOOL_moverDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "moverDebug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled && !v2->s.number )
      {
        if ( v2->client )
        {
          v12 = G_GetEntityPlayerState(v2);
          g_serverMoverDebugSkeletonMismatch = 0;
          g_serverMoverDebugMoverID = 0;
          if ( level.time >= 50 )
          {
            p_m_movingPlatformEntity = &v12->movingPlatforms.m_movingPlatformEntity;
            if ( BGMovingPlatformPS::IsOnMovingPlatform(&v12->movingPlatforms) )
            {
              g_serverMoverDebugMoverID = *p_m_movingPlatformEntity;
              GEntity = G_GetGEntity(g_serverMoverDebugMoverID);
              if ( G_DebugMovingPlatforms_GetCurrAndPrevTransforms(v2, GEntity, &out, &result) )
              {
                MatrixInverseOrthogonal43(&out, &platformPrevToLocal);
                MatrixInverseOrthogonal43(&result, &platformCurrToLocal);
                RootParent = GUtils::GetRootParent(GEntity);
                G_DebugMovingPlatforms_ValidateChildrenTransforms(v2, GEntity, RootParent, &platformPrevToLocal, &platformCurrToLocal);
              }
            }
          }
        }
      }
    }
  }
  if ( outNeedsBroadPhaseWarp )
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v0 >= ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( v0 >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v0].r.isInUse != g_entityIsInUse[v0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v0] )
    {
      v16 = &g_entities[v0];
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v17 = GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, v16);
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 791, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
        __debugbreak();
      v17->m_deferredData.platformId = 2047;
    }
    ++v0;
  }
}

/*
==============
GMovingPlatformClient::DoEntitiesShareHierarchy
==============
*/
bool GMovingPlatformClient::DoEntitiesShareHierarchy(GMovingPlatformClient *this, int ent0, int ent1)
{
  const gentity_s *GEntity; 
  const gentity_s *v5; 

  GEntity = G_GetGEntity(ent0);
  v5 = G_GetGEntity(ent1);
  return GUtils::AreEntsInSameLinkTree(GEntity, v5);
}

/*
==============
G_DebugMovingPlatforms_GetCurrAndPrevTransforms
==============
*/
_BOOL8 G_DebugMovingPlatforms_GetCurrAndPrevTransforms(const gentity_s *player, const gentity_s *ent, tmat43_t<vec3_t> *outPrev, tmat43_t<vec3_t> *outCurr)
{
  GAntiLag *v8; 
  bool EntityInfoAtTime; 
  float v10; 
  int v11; 
  float v12; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  char v21[8]; 
  BgAntiLagEntityInfo outInfo; 

  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  _R14 = outPrev;
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2187, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2188, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v8 = GAntiLag::ms_gAntiLagData;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  if ( level.time < level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2192, ASSERT_TYPE_ASSERT, "( level.time >= G_Level_GetFrameDuration() )", (const char *)&queryFormat, "level.time >= G_Level_GetFrameDuration()") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  EntityInfoAtTime = BgAntiLag::GetEntityInfoAtTime(v8, player->s.number, ent->s.number, 3u, level.time - level.frameDuration, &outInfo);
  if ( EntityInfoAtTime )
  {
    AnglesToAxis(&outInfo.angles, (tmat33_t<vec3_t> *)_R14);
    v10 = outInfo.origin.origin.v[1];
    v12 = outInfo.origin.origin.v[2];
    BYTE2(v17) = (unsigned int)(v11 + 80) >> 24;
    LOWORD(v17) = (unsigned int)&outInfo >> 8;
    HIBYTE(v17) = (unsigned __int8)&outInfo;
    LODWORD(_R14->m[3].v[1]) = LODWORD(outInfo.origin.origin.v[2]) ^ v17 ^ s_antilag_aab_Y ^ LODWORD(outInfo.origin.origin.v[0]);
    LODWORD(_R14->m[3].v[2]) = LODWORD(v10) ^ LODWORD(v12) ^ v17 ^ s_antilag_aab_Z;
    LODWORD(_R14->m[3].v[0]) = LODWORD(v10) ^ v17 ^ ~s_antilag_aab_X;
    __asm { vmovss  xmm0, dword ptr [r14+24h] }
    memset(v21, 0, sizeof(v21));
    __asm { vmovss  [rsp+138h+var_108], xmm0 }
    if ( (v18 & 0x7F800000) == 2139095040 )
      goto LABEL_29;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+28h]
      vmovss  [rsp+138h+var_108], xmm0
    }
    if ( (v19 & 0x7F800000) == 2139095040 )
      goto LABEL_29;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+2Ch]
      vmovss  [rsp+138h+var_108], xmm0
    }
    if ( (v20 & 0x7F800000) == 2139095040 )
    {
LABEL_29:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
    AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)outCurr);
    outCurr->m[3].v[0] = ent->r.currentOrigin.v[0];
    outCurr->m[3].v[1] = ent->r.currentOrigin.v[1];
    outCurr->m[3].v[2] = ent->r.currentOrigin.v[2];
  }
  return EntityInfoAtTime;
}

/*
==============
G_DebugMovingPlatforms_ValidateChildTransform
==============
*/
void G_DebugMovingPlatforms_ValidateChildTransform(const gentity_s *player, const gentity_s *childEnt, const tmat43_t<vec3_t> *platformPrevToLocal, const tmat43_t<vec3_t> *platformCurrToLocal)
{
  const gentity_s *v13; 
  const tmat43_t<vec3_t> *v14; 
  const tmat43_t<vec3_t> *v15; 
  unsigned int Instance; 
  unsigned int v18; 
  unsigned int v23; 
  unsigned int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  char v77; 
  char v78; 
  __int64 v140; 
  hknpBodyId result; 
  const gentity_s *v142; 
  const tmat43_t<vec3_t> *v143; 
  vec3_t angles; 
  vec3_t v145; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> v149; 
  tmat43_t<vec3_t> outPrev; 
  tmat43_t<vec3_t> outCurr; 

  v13 = player;
  v142 = player;
  *(_QWORD *)v145.v = platformCurrToLocal;
  v14 = platformCurrToLocal;
  v143 = platformPrevToLocal;
  v15 = platformPrevToLocal;
  _RBX = childEnt;
  if ( GMovingPlatformClient::CanPush(childEnt) && !BG_IsCharacterEntity(&_RBX->s) )
  {
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1935, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( _RBX->s.eType != ET_SCRIPTMOVER || _RBX->s.un.scriptMoverType != 1 )
    {
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RBX);
      v18 = Instance;
      if ( Instance != -1 )
      {
        __asm
        {
          vmovaps [rsp+230h+var_50], xmm6
          vmovaps [rsp+230h+var_60], xmm7
          vmovaps [rsp+230h+var_90], xmm10
          vmovaps [rsp+230h+var_A0], xmm11
          vmovaps [rsp+230h+var_B0], xmm12
          vmovaps [rsp+230h+var_D0], xmm14
          vmovss  xmm14, cs:__real@3c23d70a
          vmovss  xmm10, cs:__real@3b360b61
          vmovss  xmm11, cs:__real@3f000000
          vmovss  xmm12, cs:__real@43b40000
        }
        v23 = 0;
        NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance);
        if ( NumRigidBodys )
        {
          __asm
          {
            vmovaps [rsp+230h+var_70], xmm8
            vmovaps [rsp+230h+var_80], xmm9
            vmovaps [rsp+230h+var_C0], xmm13
            vxorps  xmm13, xmm13, xmm13
          }
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( !g_physicsServerWorldsCreated )
            {
              LODWORD(v140) = 0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v140) )
                __debugbreak();
            }
            RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v18, v23);
            Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex, &position, &orientation);
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+130h]
              vsubss  xmm3, xmm0, dword ptr [rsp+230h+position]
              vmovss  xmm1, dword ptr [rbx+134h]
              vsubss  xmm2, xmm1, dword ptr [rsp+230h+position+4]
              vmovss  xmm0, dword ptr [rbx+138h]
              vsubss  xmm4, xmm0, dword ptr [rbp+130h+position+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vcomiss xmm1, xmm14
            }
            UnitQuatToAngles(&orientation, &angles);
            __asm
            {
              vmulss  xmm4, xmm10, dword ptr [rsp+230h+angles]
              vmulss  xmm5, xmm10, dword ptr [rbx+140h]
              vmulss  xmm7, xmm10, dword ptr [rbx+144h]
              vaddss  xmm2, xmm4, xmm11
              vroundss xmm3, xmm13, xmm2, 1
              vsubss  xmm1, xmm4, xmm3
              vmulss  xmm4, xmm10, dword ptr [rsp+230h+angles+4]
              vmulss  xmm6, xmm1, xmm12
              vaddss  xmm2, xmm4, xmm11
              vroundss xmm3, xmm13, xmm2, 1
              vsubss  xmm1, xmm4, xmm3
              vmulss  xmm4, xmm10, dword ptr [rsp+230h+angles+8]
              vmulss  xmm9, xmm1, xmm12
              vaddss  xmm2, xmm4, xmm11
              vroundss xmm3, xmm13, xmm2, 1
              vsubss  xmm1, xmm4, xmm3
              vmulss  xmm4, xmm10, dword ptr [rbx+13Ch]
              vmulss  xmm8, xmm1, xmm12
              vaddss  xmm2, xmm4, xmm11
              vroundss xmm3, xmm13, xmm2, 1
              vsubss  xmm1, xmm4, xmm3
              vmulss  xmm0, xmm1, xmm12
              vaddss  xmm2, xmm5, xmm11
              vroundss xmm3, xmm13, xmm2, 1
              vsubss  xmm1, xmm5, xmm3
              vaddss  xmm2, xmm7, xmm11
              vroundss xmm3, xmm13, xmm2, 1
              vmovss  dword ptr [rsp+230h+angles], xmm6
              vsubss  xmm6, xmm0, xmm6
              vmulss  xmm0, xmm1, xmm12
              vsubss  xmm1, xmm7, xmm3
              vsubss  xmm5, xmm0, xmm9
              vmulss  xmm0, xmm1, xmm12
              vmulss  xmm2, xmm5, xmm5
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm3, xmm2, xmm1
              vsubss  xmm4, xmm0, xmm8
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vcomiss xmm1, xmm14
              vmovss  dword ptr [rsp+230h+angles+4], xmm9
              vmovss  dword ptr [rsp+230h+angles+8], xmm8
            }
            if ( !(v77 | v78) )
            {
              Com_PrintWarning(1, "Moving platform rigid body mismatch is not allowed. This will cause collision errors. Entity %d\n", (unsigned int)_RBX->s.number);
              g_serverMoverDebugRigidBodyMismatch = _RBX->s.number;
            }
            ++v23;
          }
          while ( v23 < NumRigidBodys );
          v13 = v142;
          v15 = v143;
          v14 = *(const tmat43_t<vec3_t> **)v145.v;
          __asm
          {
            vmovaps xmm13, [rsp+230h+var_C0]
            vmovaps xmm9, [rsp+230h+var_80]
            vmovaps xmm8, [rsp+230h+var_70]
          }
        }
        if ( G_DebugMovingPlatforms_GetCurrAndPrevTransforms(v13, _RBX, &outPrev, &outCurr) )
        {
          MatrixMultiply43(&outPrev, v15, &out);
          MatrixMultiply43(&outCurr, v14, &v149);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+130h+var_168+24h]
            vsubss  xmm3, xmm0, dword ptr [rbp+130h+out+24h]
            vmovss  xmm1, dword ptr [rbp+130h+var_168+28h]
            vsubss  xmm2, xmm1, dword ptr [rbp+130h+out+28h]
            vmovss  xmm0, dword ptr [rbp+130h+var_168+2Ch]
            vsubss  xmm4, xmm0, dword ptr [rbp+130h+out+2Ch]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcomiss xmm1, cs:__real@3dfdf3b6
          }
          AxisToAngles((const tmat33_t<vec3_t> *)&out, &v145);
          __asm
          {
            vmulss  xmm3, xmm10, dword ptr [rsp+230h+var_1C8]
            vaddss  xmm1, xmm3, xmm11
            vxorps  xmm7, xmm7, xmm7
            vroundss xmm2, xmm7, xmm1, 1
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm3, xmm10, dword ptr [rsp+230h+var_1C8+4]
            vmulss  xmm1, xmm0, xmm12
            vmovss  dword ptr [rsp+230h+var_1C8], xmm1
            vaddss  xmm1, xmm3, xmm11
            vroundss xmm2, xmm7, xmm1, 1
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm3, xmm10, dword ptr [rsp+230h+var_1C8+8]
            vmulss  xmm1, xmm0, xmm12
            vmovss  dword ptr [rsp+230h+var_1C8+4], xmm1
            vaddss  xmm1, xmm3, xmm11
            vroundss xmm2, xmm7, xmm1, 1
            vsubss  xmm0, xmm3, xmm2
            vmulss  xmm1, xmm0, xmm12
            vmovss  dword ptr [rsp+230h+var_1C8+8], xmm1
          }
          AxisToAngles((const tmat33_t<vec3_t> *)&v149, &angles);
          __asm
          {
            vmulss  xmm4, xmm10, dword ptr [rsp+230h+angles]
            vaddss  xmm2, xmm4, xmm11
            vroundss xmm3, xmm7, xmm2, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm4, xmm10, dword ptr [rsp+230h+angles+4]
            vmulss  xmm6, xmm1, xmm12
            vaddss  xmm2, xmm4, xmm11
            vroundss xmm3, xmm7, xmm2, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm4, xmm10, dword ptr [rsp+230h+angles+8]
            vmulss  xmm5, xmm1, xmm12
            vsubss  xmm0, xmm5, dword ptr [rsp+230h+var_1C8+4]
            vaddss  xmm2, xmm4, xmm11
            vroundss xmm3, xmm7, xmm2, 1
            vsubss  xmm1, xmm4, xmm3
            vsubss  xmm3, xmm6, dword ptr [rsp+230h+var_1C8]
            vmulss  xmm2, xmm1, xmm12
            vsubss  xmm4, xmm2, dword ptr [rsp+230h+var_1C8+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm3, xmm3
            vmovss  dword ptr [rsp+230h+angles+8], xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm0, xmm2, xmm2
            vcomiss xmm0, xmm14
            vmovss  dword ptr [rsp+230h+angles], xmm6
            vmovss  dword ptr [rsp+230h+angles+4], xmm5
          }
          if ( !(v77 | v78) )
          {
            Com_PrintWarning(1, "Moving platform sub skeletal displacement is not allowed. This will cause collision errors. Entity %d\n", (unsigned int)g_serverMoverDebugSkeletonMismatch);
            g_serverMoverDebugSkeletonMismatch = _RBX->s.number;
          }
        }
        __asm
        {
          vmovaps xmm12, [rsp+230h+var_B0]
          vmovaps xmm11, [rsp+230h+var_A0]
          vmovaps xmm10, [rsp+230h+var_90]
          vmovaps xmm7, [rsp+230h+var_60]
          vmovaps xmm6, [rsp+230h+var_50]
          vmovaps xmm14, [rsp+230h+var_D0]
        }
      }
    }
  }
}

/*
==============
G_DebugMovingPlatforms_ValidateChildrenTransforms
==============
*/
void G_DebugMovingPlatforms_ValidateChildrenTransforms(const gentity_s *player, const gentity_s *platform, const gentity_s *parent, const tmat43_t<vec3_t> *platformPrevToLocal, const tmat43_t<vec3_t> *platformCurrToLocal)
{
  EntityTagInfo *tagInfo; 
  const gentity_s *next; 

  do
  {
    if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2309, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
      __debugbreak();
    if ( !platform && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2310, ASSERT_TYPE_ASSERT, "( platform )", (const char *)&queryFormat, "platform") )
      __debugbreak();
    if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2311, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
      __debugbreak();
    if ( platform != parent )
      G_DebugMovingPlatforms_ValidateChildTransform(player, parent, platformPrevToLocal, platformCurrToLocal);
    tagInfo = parent->tagInfo;
    if ( tagInfo )
    {
      next = tagInfo->next;
      if ( next )
        G_DebugMovingPlatforms_ValidateChildrenTransforms(player, platform, next, platformPrevToLocal, platformCurrToLocal);
    }
    parent = parent->tagChildren;
  }
  while ( parent );
}

/*
==============
G_Debug_TestPlayerCollisionPoint
==============
*/
void G_Debug_TestPlayerCollisionPoint(const gentity_s *player)
{
  const dvar_t *v1; 
  gclient_s *client; 
  GHandler *Handler; 

  v1 = DCONST_DVARINT_playerCharacterCollisionDebugWallExploits;
  if ( !DCONST_DVARINT_playerCharacterCollisionDebugWallExploits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionDebugWallExploits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer != -1 )
  {
    if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2394, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
      __debugbreak();
    client = player->client;
    if ( client )
    {
      Handler = GHandler::getHandler();
      BG_Debug_TestPlayerCollisionPoint(&client->ps, Handler, 65553, &client->playerBox);
    }
  }
}

/*
==============
G_MovingPlatforms_DoesMoveTypeSupportMovers
==============
*/
bool G_MovingPlatforms_DoesMoveTypeSupportMovers(gentity_s *clientEnt)
{
  playerState_s *EntityPlayerState; 
  gclient_s *client; 
  int pm_type; 
  bool result; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 254, ASSERT_TYPE_ASSERT, "(clientEnt)", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(clientEnt);
  result = 0;
  if ( EntityPlayerState )
  {
    client = clientEnt->client;
    if ( !client || client->sess.sessionState != SESS_STATE_SPECTATOR )
    {
      pm_type = EntityPlayerState->pm_type;
      if ( (pm_type & 0xFFFFFFFC) == 0 && pm_type != 2 )
        return 1;
    }
  }
  return result;
}

/*
==============
GMovingPlatformClient::GetCharacterEntityInfo
==============
*/
__int64 GMovingPlatformClient::GetCharacterEntityInfo(GMovingPlatformClient *this, int entId, BGMovingPlatformClient::CharacterInfo *outInfo)
{
  __int64 v3; 
  gentity_s *v5; 
  gclient_s *client; 
  EffectiveStance EffectiveStance; 
  const playerState_s *p_playerState; 
  EffectiveStance v10; 

  v3 = entId;
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1550, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  if ( !G_IsEntityInUse(v3) )
    return 0i64;
  v5 = &g_entities[v3];
  if ( !BG_IsCharacterEntity(&v5->s) )
    return 0i64;
  outInfo->angles.v[0] = v5->r.currentAngles.v[0];
  outInfo->angles.v[1] = v5->r.currentAngles.v[1];
  outInfo->angles.v[2] = v5->r.currentAngles.v[2];
  outInfo->origin.v[0] = v5->r.currentOrigin.v[0];
  outInfo->origin.v[1] = v5->r.currentOrigin.v[1];
  outInfo->origin.v[2] = v5->r.currentOrigin.v[2];
  client = v5->client;
  if ( client )
  {
    EffectiveStance = PM_GetEffectiveStance(&v5->client->ps);
    outInfo->bound = BG_Suit_GetBounds(client->ps.suitIndex, EffectiveStance);
    return 1i64;
  }
  else
  {
    p_playerState = &v5->agent->playerState;
    if ( p_playerState )
    {
      v10 = PM_GetEffectiveStance(p_playerState);
      outInfo->bound = BG_Suit_GetBounds(p_playerState->suitIndex, v10);
    }
    else
    {
      outInfo->bound = &playerBox;
    }
    return 1i64;
  }
}

/*
==============
GMovingPlatforms::GetClientFromGEntity
==============
*/
GMovingPlatformClient *GMovingPlatforms::GetClientFromGEntity(gentity_s *ent)
{
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  return GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, ent);
}

/*
==============
GMovingPlatformClient::GetDeferredDeltaOriginAndAngles
==============
*/
void GMovingPlatformClient::GetDeferredDeltaOriginAndAngles(GMovingPlatformClient *this, vec3_t *outDelta, vec3_t *outAngleDelta)
{
  *outDelta = this->m_deferredData.deltaOrigin;
  *outAngleDelta = this->m_deferredData.deltaAngles;
}

/*
==============
GMovingPlatforms::GetMoverEntityFromPs
==============
*/
gentity_s *GMovingPlatforms::GetMoverEntityFromPs(playerState_s *ps)
{
  BGMovingPlatformPS *p_movingPlatforms; 

  p_movingPlatforms = &ps->movingPlatforms;
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&ps->movingPlatforms) && G_IsEntityInUse(p_movingPlatforms->m_movingPlatformEntity) )
    return &g_entities[p_movingPlatforms->m_movingPlatformEntity];
  else
    return 0i64;
}

/*
==============
GMovingPlatformClient::GetMoverEntityInfo
==============
*/
int GMovingPlatformClient::GetMoverEntityInfo(GMovingPlatformClient *this, int entId, BGMovingPlatformClient::MoverInfo *outInfo)
{
  __int64 v3; 
  int result; 
  gentity_s *v6; 

  v3 = entId;
  if ( !outInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1578, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  result = G_IsEntityInUse(v3);
  if ( result )
  {
    v6 = &g_entities[v3];
    outInfo->angles.v[0] = v6->r.currentAngles.v[0];
    outInfo->angles.v[1] = v6->r.currentAngles.v[1];
    outInfo->angles.v[2] = v6->r.currentAngles.v[2];
    outInfo->origin.v[0] = v6->r.currentOrigin.v[0];
    outInfo->origin.v[1] = v6->r.currentOrigin.v[1];
    outInfo->origin.v[2] = v6->r.currentOrigin.v[2];
    outInfo->entNum = v6->s.number;
    outInfo->brushId = v6->s.index.brushModel;
    return 1;
  }
  return result;
}

/*
==============
GMovingPlatforms::GetSaveField
==============
*/
const saveField_t *GMovingPlatforms::GetSaveField(GMovingPlatforms *this)
{
  return s_moving_platform_fields;
}

/*
==============
GMovingPlatforms::InitClient
==============
*/
void GMovingPlatforms::InitClient(gentity_s *clientEnt, BgObjectHandle<GMovingPlatformClient> *moverHandle)
{
  unsigned int number; 
  GMovingPlatformClient *ClientFromGEntity; 
  __int64 v6; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 100, ASSERT_TYPE_ASSERT, "(clientEnt)", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  number = clientEnt->s.number;
  if ( number >= 0xF8 )
  {
    LODWORD(v6) = clientEnt->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 24, ASSERT_TYPE_ASSERT, "(unsigned)( objectIndex ) < (unsigned)( ObjectType::MAX_COUNT )", "objectIndex doesn't index ObjectType::MAX_COUNT\n\t%i not in [0, %i)", v6, 248) )
      __debugbreak();
  }
  moverHandle->m_objIndex = number + 1;
  if ( number == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 26, ASSERT_TYPE_ASSERT, "( IsDefined() )", (const char *)&queryFormat, "IsDefined()") )
    __debugbreak();
  ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(clientEnt);
  if ( ClientFromGEntity )
  {
    ClientFromGEntity->m_deferredData.platformId = 2047;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 104, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
      __debugbreak();
    MEMORY[0x44] = 2047;
  }
}

/*
==============
GMovingPlatforms::IsEntityKeyframedMover
==============
*/
bool GMovingPlatforms::IsEntityKeyframedMover(const gentity_s *ent)
{
  __int16 number; 
  __int64 v4; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2071, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned __int16)number > 0x7FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2073, ASSERT_TYPE_ASSERT, "(num >= 0 && num < ( 2048 ))", (const char *)&queryFormat, "num >= 0 && num < MAX_GENTITIES") )
    __debugbreak();
  if ( !G_IsEntityInUse(number) )
    return 0;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v4) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v4, 2048) )
      __debugbreak();
  }
  return ((0x80000000 >> (number & 0x1F)) & GMovingPlatforms::ms_gentityKeyframedMover.array[(unsigned __int64)(unsigned int)number >> 5]) != 0;
}

/*
==============
GMovingPlatformClient::IsMovingPlatformMoving
==============
*/
bool GMovingPlatformClient::IsMovingPlatformMoving(GMovingPlatformClient *this, int entityNum)
{
  __int64 v3; 
  char v5; 
  int v10; 

  v3 = entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    v10 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1596, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, v10) )
      __debugbreak();
  }
  _RAX = g_entities;
  _RCX = 1456 * v3;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rcx+rax+2B4h]
  }
  if ( !v5 )
    return 1;
  __asm { vucomiss xmm0, dword ptr [rcx+rax+2B8h] }
  if ( !v5 )
    return 1;
  __asm { vucomiss xmm0, dword ptr [rcx+rax+2BCh] }
  if ( !v5 )
    return 1;
  __asm { vucomiss xmm0, dword ptr [rcx+rax+2A8h] }
  if ( !v5 )
    return 1;
  __asm { vucomiss xmm0, dword ptr [rcx+rax+2ACh] }
  if ( !v5 )
    return 1;
  __asm { vucomiss xmm0, dword ptr [rcx+rax+2B0h] }
  return !v5;
}

/*
==============
GMovingPlatforms::KeyframeMarkedEntities
==============
*/
void GMovingPlatforms::KeyframeMarkedEntities(int numEntities)
{
  unsigned int m_characterCount; 
  __int64 v11; 
  __int64 v13; 
  G_PhysicsObject *v16; 
  unsigned int v17; 
  unsigned int v18; 
  bool v30; 
  float fmt; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  float v67; 
  vec3_t position; 
  vec3_t deltaAngles; 
  vec3_t deltaOrigin; 
  vec3_t outMove; 
  vec3_t outAMove; 
  vec3_t angles; 
  vec4_t quat; 

  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  if ( (int)ComCharacterLimits::ms_gameData.m_characterCount < numEntities )
  {
    v11 = (int)ComCharacterLimits::ms_gameData.m_characterCount;
    __asm
    {
      vmovaps [rsp+160h+var_30], xmm6
      vmovaps [rsp+160h+var_A0], xmm13
      vmovss  xmm13, cs:__real@3f800000
      vmovaps [rsp+160h+var_40], xmm7
      vmovaps [rsp+160h+var_50], xmm8
      vmovaps [rsp+160h+var_60], xmm9
      vmovaps [rsp+160h+var_70], xmm10
      vmovaps [rsp+160h+var_80], xmm11
      vmovaps [rsp+160h+var_90], xmm12
    }
    v13 = (int)ComCharacterLimits::ms_gameData.m_characterCount;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    while ( 1 )
    {
      if ( m_characterCount >= 0x800 )
      {
        LODWORD(updateBroadphaseIfWarping) = 2048;
        LODWORD(canWarp) = m_characterCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      _RBX = &g_entities[v13];
      if ( m_characterCount >= 0x800 )
      {
        LODWORD(updateBroadphaseIfWarping) = 2048;
        LODWORD(canWarp) = m_characterCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v13].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v11] )
        goto LABEL_38;
      if ( !GMovingPlatforms::IsEntityKeyframedMover(_RBX) )
        goto LABEL_38;
      v16 = G_PhysicsObject_Get(_RBX);
      if ( !v16 )
        goto LABEL_38;
      v17 = v16->physicsInstances[0];
      v18 = v16->physicsInstances[1];
      if ( v17 == -1 && v18 != -1 )
        goto LABEL_38;
      memcpy_0(&dummyEnt, _RBX, sizeof(dummyEnt));
      __asm
      {
        vmovss  xmm7, dword ptr [rbx+130h]
        vmovss  xmm8, dword ptr [rbx+134h]
        vmovss  xmm9, dword ptr [rbx+138h]
        vmovss  xmm10, dword ptr [rbx+13Ch]
        vmovss  xmm11, dword ptr [rbx+140h]
        vmovss  xmm12, dword ptr [rbx+144h]
        vmovss  dword ptr [rsp+160h+position], xmm7
        vmovss  xmm0, dword ptr [rbx+134h]
        vmovss  dword ptr [rsp+160h+position+4], xmm0
        vmovss  xmm1, dword ptr [rbx+138h]
        vmovss  dword ptr [rsp+160h+position+8], xmm1
        vmovss  xmm0, dword ptr [rbx+13Ch]
        vmovss  dword ptr [rbp+60h+angles], xmm0
        vmovss  xmm1, dword ptr [rbx+140h]
        vmovss  dword ptr [rbp+60h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rbx+144h]
        vmovss  dword ptr [rbp+60h+angles+8], xmm0
      }
      v30 = _RBX->tagInfo == NULL;
      __asm
      {
        vmovss  dword ptr [rsp+160h+deltaOrigin], xmm6
        vmovss  dword ptr [rsp+160h+deltaOrigin+4], xmm6
        vmovss  dword ptr [rsp+160h+deltaOrigin+8], xmm6
        vmovss  dword ptr [rsp+160h+deltaAngles], xmm6
        vmovss  dword ptr [rsp+160h+deltaAngles+4], xmm6
        vmovss  dword ptr [rsp+160h+deltaAngles+8], xmm6
      }
      if ( v30 )
      {
        if ( !BgTrajectory::IsAnimatedTrajectory(&_RBX->s.lerp.pos) )
          goto LABEL_30;
      }
      else if ( GMovingPlatformClient::CanPush(_RBX) )
      {
        G_GeneralLinkNoWarp(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vmovss  xmm2, dword ptr [rbx+134h]
          vsubss  xmm1, xmm0, xmm7
          vsubss  xmm0, xmm2, xmm8
          vmovss  dword ptr [rsp+160h+deltaOrigin], xmm1
          vmovss  xmm1, dword ptr [rbx+138h]
          vsubss  xmm2, xmm1, xmm9
          vmovss  dword ptr [rsp+160h+deltaOrigin+4], xmm0
          vmovss  xmm0, dword ptr [rbx+13Ch]
          vsubss  xmm1, xmm0, xmm10
          vmovss  dword ptr [rsp+160h+deltaOrigin+8], xmm2
          vmovss  xmm2, dword ptr [rbx+140h]
          vsubss  xmm0, xmm2, xmm11
          vmovss  dword ptr [rsp+160h+deltaAngles], xmm1
          vmovss  xmm1, dword ptr [rbx+144h]
          vmovss  dword ptr [rbx+130h], xmm7
          vmovss  dword ptr [rbx+134h], xmm8
          vmovss  dword ptr [rbx+138h], xmm9
          vsubss  xmm2, xmm1, xmm12
          vmovss  dword ptr [rsp+160h+deltaAngles+8], xmm2
          vmovss  dword ptr [rsp+160h+deltaAngles+4], xmm0
          vmovss  dword ptr [rbx+13Ch], xmm10
          vmovss  dword ptr [rbx+140h], xmm11
          vmovss  dword ptr [rbx+144h], xmm12
        }
        SV_LinkEntity(_RBX);
LABEL_30:
        __asm
        {
          vmovss  dword ptr [rsp+160h+outMove], xmm6
          vmovss  dword ptr [rsp+160h+outMove+4], xmm6
          vmovss  dword ptr [rsp+160h+outMove+8], xmm6
          vmovss  dword ptr [rbp+60h+outAMove], xmm6
          vmovss  dword ptr [rbp+60h+outAMove+4], xmm6
          vmovss  dword ptr [rbp+60h+outAMove+8], xmm6
        }
        GMovingPlatforms::ComputeMoverPushDeltas(_RBX, &deltaOrigin, &deltaAngles, &outMove, &outAMove);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+160h+outMove]
          vaddss  xmm1, xmm0, dword ptr [rbx+130h]
          vmovss  xmm2, dword ptr [rsp+160h+outMove+4]
          vmovss  dword ptr [rsp+160h+position], xmm1
          vaddss  xmm0, xmm2, dword ptr [rbx+134h]
          vmovss  xmm1, dword ptr [rsp+160h+outMove+8]
          vmovss  dword ptr [rsp+160h+position+4], xmm0
          vaddss  xmm2, xmm1, dword ptr [rbx+138h]
          vmovss  xmm0, dword ptr [rbp+60h+outAMove]
          vmovss  dword ptr [rsp+160h+position+8], xmm2
          vaddss  xmm1, xmm0, dword ptr [rbx+13Ch]
          vmovss  xmm2, dword ptr [rbp+60h+outAMove+4]
          vmovss  dword ptr [rbp+60h+angles], xmm1
          vaddss  xmm0, xmm2, dword ptr [rbx+140h]
          vmovss  xmm1, dword ptr [rbp+60h+outAMove+8]
          vmovss  dword ptr [rbp+60h+angles+4], xmm0
          vaddss  xmm2, xmm1, dword ptr [rbx+144h]
          vmovss  dword ptr [rbp+60h+angles+8], xmm2
        }
      }
      memcpy_0(_RBX, &dummyEnt, sizeof(gentity_s));
      if ( ((_RBX->r.modelType - 1) & 0xFD) != 0 )
      {
        AnglesToQuat(&angles, &quat);
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
          vmovups xmmword ptr [rbp+60h+quat], xmm0
        }
      }
      if ( v17 != -1 )
      {
        __asm
        {
          vmovss  [rsp+160h+var_128], xmm6
          vmovss  dword ptr [rsp+160h+fmt], xmm13
        }
        Physics_KeyframeInstanceTo(PHYSICS_WORLD_ID_FIRST, v17, &position, &quat, fmt, 1, 0, v67);
      }
      if ( v18 != -1 )
        Physics_WarpInstanceTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v18, &position, &quat, 0);
LABEL_38:
      ++m_characterCount;
      ++v11;
      ++v13;
      if ( (int)m_characterCount >= numEntities )
      {
        __asm
        {
          vmovaps xmm13, [rsp+160h+var_A0]
          vmovaps xmm12, [rsp+160h+var_90]
          vmovaps xmm11, [rsp+160h+var_80]
          vmovaps xmm10, [rsp+160h+var_70]
          vmovaps xmm9, [rsp+160h+var_60]
          vmovaps xmm8, [rsp+160h+var_50]
          vmovaps xmm7, [rsp+160h+var_40]
          vmovaps xmm6, [rsp+160h+var_30]
        }
        return;
      }
    }
  }
}

/*
==============
GMovingPlatforms::MarkEntityKeyframedMover
==============
*/
void GMovingPlatforms::MarkEntityKeyframedMover(const gentity_s *ent)
{
  __int16 number; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2050, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned __int16)number > 0x7FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2052, ASSERT_TYPE_ASSERT, "(num >= 0 && num < ( 2048 ))", (const char *)&queryFormat, "num >= 0 && num < MAX_GENTITIES") )
    __debugbreak();
  if ( G_IsEntityInUse(number) )
  {
    if ( (unsigned int)number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
      __debugbreak();
    GMovingPlatforms::ms_gentityKeyframedMover.array[(unsigned __int64)(unsigned int)number >> 5] |= 0x80000000 >> (number & 0x1F);
  }
}

/*
==============
GMovingPlatforms::MoverLinkAndRotate
==============
*/
void GMovingPlatforms::MoverLinkAndRotate(gentity_s *ent, const TagInfoLinkedRotation *const linkedRotationData)
{
  void (__fastcall *reached)(gentity_s *); 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  _RDI = ent;
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1493, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
    __debugbreak();
  G_CalcFixedLinkTargetAxis(_RDI, &axis);
  if ( G_VerifyLinkedMoveTarget(_RDI, &axis.m[3], 2065) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+axis+24h]
      vmovss  xmm1, dword ptr [rsp+0D8h+axis+28h]
      vmovss  dword ptr [rdi+130h], xmm0
      vmovss  xmm0, dword ptr [rsp+0D8h+axis+2Ch]
      vmovss  dword ptr [rdi+138h], xmm0
      vmovss  dword ptr [rdi+134h], xmm1
    }
  }
  if ( linkedRotationData->aposLocal.trType <= (unsigned int)TR_INTERPOLATE )
  {
    AnglesToAxis(&linkedRotationData->aposLocal.trBase, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, &out);
    AxisToAngles(&out, &_RDI->r.currentAngles);
    G_SetOriginAndAngle(_RDI, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 1);
  }
  else
  {
    BgTrajectory::LegacyEvaluateTrajectory(&linkedRotationData->aposLocal, level.time, &_RDI->r.currentAngles);
    AnglesToAxis(&_RDI->r.currentAngles, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, &out);
    AxisToAngles(&out, &_RDI->r.currentAngles);
    G_SetOriginAndAngle(_RDI, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 1);
    if ( level.time >= linkedRotationData->aposLocal.trTime + linkedRotationData->aposLocal.trDuration )
    {
      reached = G_Main_GetEntHandlerList(_RDI)->reached;
      if ( reached )
        reached(_RDI);
    }
  }
  _RDI->s.lerp.pos.trType = TR_INTERPOLATE;
  _RDI->s.lerp.apos.trType = TR_INTERPOLATE;
  SV_LinkEntity(_RDI);
}

/*
==============
GMovingPlatforms::MoverPush
==============
*/
void GMovingPlatforms::MoverPush(gentity_s *pusher, const vec3_t *move, const vec3_t *amove)
{
  char v15; 
  unsigned int v59; 
  int v62; 
  playerState_s *EntityPlayerState; 
  const playerState_s *v66; 
  int number; 
  int m_movingPlatformEntity; 
  GHandler *Handler; 
  char v73; 
  int v91; 
  __int64 v92; 
  __int64 v113; 
  char v114; 
  unsigned int v115; 
  gentity_s *v116; 
  entityType_s eType; 
  playerState_s *v118; 
  __int64 v119; 
  vec3_t *v120; 
  __int16 *v121; 
  vec3_t *v122; 
  __int64 v123; 
  gentity_s *v124; 
  GMovingPlatformClient *v125; 
  int *ignoreEnts; 
  PhysicsQuery_Collected<unsigned short> *collectedEnts; 
  PhysicsQuery_Collected<unsigned short> v128; 
  vec3_t *amovea; 
  vec3_t *movea; 
  Bounds rotatedBounds; 
  Bounds baseBounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v137; 
  __int16 v138[2048]; 
  __int16 v139[2048]; 

  __asm
  {
    vmovaps [rsp+21F0h+var_30], xmm6
    vmovaps [rsp+21F0h+var_40], xmm7
  }
  _RDI = pusher;
  __asm
  {
    vmovaps [rsp+21F0h+var_50], xmm8
    vmovaps [rsp+21F0h+var_60], xmm9
  }
  _R15 = amove;
  __asm
  {
    vmovaps [rsp+21F0h+var_70], xmm10
    vmovaps [rsp+21F0h+var_80], xmm11
    vmovaps [rsp+21F0h+var_90], xmm12
    vmovaps [rsp+21F0h+var_A0], xmm13
  }
  movea = (vec3_t *)move;
  __asm
  {
    vmovaps [rsp+21F0h+var_B0], xmm14
    vmovaps [rsp+21F0h+var_C0], xmm15
  }
  amovea = (vec3_t *)amove;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_MovingPlatform MoverPush");
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+100h]
    vmovsd  xmm1, qword ptr [rdi+110h]
    vmovups xmmword ptr [rbp+20F0h+baseBounds.midPoint], xmm0
    vxorps  xmm0, xmm0, xmm0
  }
  _R14 = &_RDI->r.currentAngles;
  __asm
  {
    vucomiss xmm0, dword ptr [r14]
    vmovsd  qword ptr [rbp+20F0h+baseBounds.halfSize+4], xmm1
  }
  if ( !v15 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [rdi+140h] }
  if ( !v15 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [rdi+144h] }
  if ( !v15 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [r15] }
  if ( !v15 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [r15+4] }
  if ( !v15 )
    goto LABEL_8;
  __asm { vucomiss xmm0, dword ptr [r15+8] }
  if ( v15 )
  {
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rbp+20F0h+baseBounds.midPoint]
      vmovss  xmm1, dword ptr [rbp+20F0h+baseBounds.midPoint+4]
      vaddss  xmm4, xmm0, dword ptr [rdi+130h]
      vaddss  xmm5, xmm1, dword ptr [rdi+134h]
      vmovss  xmm0, dword ptr [rbp+20F0h+baseBounds.midPoint+8]
      vmovss  xmm1, dword ptr [rbp+20F0h+baseBounds.halfSize]
      vaddss  xmm8, xmm0, dword ptr [rdi+138h]
      vmovss  xmm0, dword ptr [rbp+20F0h+baseBounds.halfSize+4]
      vaddss  xmm11, xmm1, xmm9
      vmovss  xmm1, dword ptr [rbp+20F0h+baseBounds.halfSize+8]
      vaddss  xmm12, xmm0, xmm9
      vaddss  xmm13, xmm1, xmm9
    }
  }
  else
  {
LABEL_8:
    AnglesToAxis(&_RDI->r.currentAngles, &axis);
    Bounds_Transform(&baseBounds, &_RDI->r.currentOrigin, &axis, &rotatedBounds);
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rbp+20F0h+rotatedBounds.halfSize]
      vmovss  xmm1, dword ptr [rbp+20F0h+rotatedBounds.halfSize+4]
      vmovss  xmm8, dword ptr [rbp+20F0h+rotatedBounds.midPoint+8]
      vmovss  xmm5, dword ptr [rsp+21F0h+rotatedBounds.midPoint+4]
      vmovss  xmm4, dword ptr [rsp+21F0h+rotatedBounds.midPoint]
      vaddss  xmm11, xmm0, xmm9
      vmovss  xmm0, dword ptr [rbp+20F0h+rotatedBounds.halfSize+8]
      vaddss  xmm13, xmm0, xmm9
      vaddss  xmm12, xmm1, xmm9
    }
  }
  __asm
  {
    vaddss  xmm2, xmm8, dword ptr [r12+8]
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm15, xmm5, dword ptr [r12+4]
    vaddss  xmm14, xmm4, dword ptr [r12]
    vmovss  [rsp+21F0h+var_2190], xmm2
    vmovss  xmm2, cs:__real@3f000000
    vmulss  xmm0, xmm2, dword ptr [r12]
    vaddss  xmm7, xmm0, xmm4
    vandps  xmm0, xmm0, xmm10
    vaddss  xmm6, xmm0, xmm11
    vmulss  xmm0, xmm2, dword ptr [r12+4]
    vaddss  xmm5, xmm0, xmm5
    vandps  xmm0, xmm0, xmm10
    vaddss  xmm4, xmm0, xmm12
    vmulss  xmm0, xmm2, dword ptr [r12+8]
    vaddss  xmm3, xmm0, xmm8
    vandps  xmm0, xmm0, xmm10
    vaddss  xmm2, xmm0, xmm13
    vsubss  xmm0, xmm7, xmm6
    vsubss  xmm1, xmm5, xmm4
    vmovss  dword ptr [rbp+20F0h+aabbMin], xmm0
    vmovss  dword ptr [rbp+20F0h+aabbMin+4], xmm1
    vsubss  xmm0, xmm3, xmm2
    vaddss  xmm1, xmm7, xmm6
    vmovss  dword ptr [rbp+20F0h+aabbMin+8], xmm0
    vmovss  dword ptr [rbp+20F0h+aabbMax], xmm1
    vaddss  xmm0, xmm4, xmm5
    vaddss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rbp+20F0h+aabbMax+4], xmm0
    vmovss  dword ptr [rsp+21F0h+rotatedBounds.midPoint], xmm7
    vmovss  dword ptr [rbp+20F0h+rotatedBounds.halfSize], xmm6
    vmovss  dword ptr [rsp+21F0h+rotatedBounds.midPoint+4], xmm5
    vmovss  dword ptr [rbp+20F0h+rotatedBounds.halfSize+4], xmm4
    vmovss  dword ptr [rbp+20F0h+rotatedBounds.midPoint+8], xmm3
    vmovss  dword ptr [rbp+20F0h+rotatedBounds.halfSize+8], xmm2
    vmovss  dword ptr [rbp+20F0h+aabbMax+8], xmm1
  }
  SV_UnlinkEntity(_RDI);
  v59 = 0;
  v128.ids = (unsigned __int16 *)v138;
  v128.count = 0;
  v128.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 24960, 0, NULL, &v128, NULL, 1);
  __asm
  {
    vmovaps xmm8, [rsp+21F0h+var_50]
    vmovaps xmm7, [rsp+21F0h+var_40]
  }
  v62 = 0;
  if ( level.maxclients > 0 )
  {
    __asm { vmovss  xmm6, [rsp+21F0h+var_2190] }
    do
    {
      if ( (unsigned int)v62 >= 0x800 )
      {
        LODWORD(collectedEnts) = 2048;
        LODWORD(ignoreEnts) = v62;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      _RSI = v62;
      if ( g_entities[_RSI].r.isInUse != g_entityIsInUse[v62] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v62] )
      {
        EntityPlayerState = G_GetEntityPlayerState(&g_entities[_RSI]);
        v66 = EntityPlayerState;
        if ( EntityPlayerState )
        {
          number = _RDI->s.number;
          m_movingPlatformEntity = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
          if ( number == m_movingPlatformEntity )
            goto LABEL_29;
          _R15 = g_entities;
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi+r15+118h]
            vmovsd  xmm1, qword ptr [rsi+r15+128h]
            vmovups xmmword ptr [rsp+21F0h+rotatedBounds.midPoint], xmm0
            vmovsd  qword ptr [rbp+20F0h+rotatedBounds.halfSize+4], xmm1
          }
          Handler = GHandler::getHandler();
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v137, v66, Handler);
          v73 = 0;
          if ( v137.m_axisAdjusted )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rsi+r15+100h]
              vmovsd  xmm1, qword ptr [rsi+r15+110h]
              vmovups xmmword ptr [rbp+20F0h+baseBounds.midPoint], xmm0
              vmovsd  qword ptr [rbp+20F0h+baseBounds.halfSize+4], xmm1
            }
            AnglesToAxis(&v66->viewangles, &axis);
            WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v137, &axis);
            Bounds_Transform(&baseBounds, &_R15[_RSI].r.currentOrigin, &axis, &rotatedBounds);
            __asm
            {
              vaddss  xmm1, xmm9, dword ptr [rbp+20F0h+baseBounds.halfSize]
              vaddss  xmm0, xmm9, dword ptr [rbp+20F0h+baseBounds.halfSize+4]
              vaddss  xmm2, xmm9, dword ptr [rbp+20F0h+baseBounds.halfSize+8]
              vmovss  dword ptr [rbp+20F0h+baseBounds.halfSize], xmm1
              vmovss  dword ptr [rbp+20F0h+baseBounds.halfSize+4], xmm0
              vmovss  dword ptr [rbp+20F0h+baseBounds.halfSize+8], xmm2
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+21F0h+rotatedBounds.midPoint]
            vaddss  xmm1, xmm11, dword ptr [rbp+20F0h+rotatedBounds.halfSize]
            vsubss  xmm2, xmm0, xmm14
            vandps  xmm2, xmm2, xmm10
            vcomiss xmm2, xmm1
          }
          if ( v73 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+21F0h+rotatedBounds.midPoint+4]
              vaddss  xmm1, xmm12, dword ptr [rbp+20F0h+rotatedBounds.halfSize+4]
              vsubss  xmm2, xmm0, xmm15
              vandps  xmm2, xmm2, xmm10
              vcomiss xmm2, xmm1
            }
            if ( v73 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+20F0h+rotatedBounds.midPoint+8]
                vaddss  xmm1, xmm13, dword ptr [rbp+20F0h+rotatedBounds.halfSize+8]
                vsubss  xmm2, xmm0, xmm6
                vandps  xmm2, xmm2, xmm10
                vcomiss xmm2, xmm1
              }
              if ( v73 )
                goto LABEL_29;
            }
          }
          if ( number == m_movingPlatformEntity )
          {
LABEL_29:
            v59 = 0;
            v91 = 0;
            if ( v128.count )
            {
              while ( (unsigned __int16)v138[v91] != v62 )
              {
                if ( ++v91 >= v128.count )
                  goto LABEL_32;
              }
            }
            else
            {
LABEL_32:
              if ( (v62 < 0 || (unsigned int)v62 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v62, "signed", v62) )
                __debugbreak();
              v92 = v128.count++;
              v138[v92] = v62;
            }
          }
          else
          {
            v59 = 0;
          }
        }
      }
      ++v62;
    }
    while ( v62 < level.maxclients );
    _R15 = amovea;
    _R14 = &_RDI->r.currentAngles;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+130h]
    vaddss  xmm1, xmm0, dword ptr [r12]
    vmovaps xmm15, [rsp+21F0h+var_C0]
    vmovaps xmm14, [rsp+21F0h+var_B0]
    vmovaps xmm13, [rsp+21F0h+var_A0]
    vmovaps xmm12, [rsp+21F0h+var_90]
    vmovaps xmm11, [rsp+21F0h+var_80]
    vmovaps xmm10, [rsp+21F0h+var_70]
    vmovaps xmm9, [rsp+21F0h+var_60]
    vmovaps xmm6, [rsp+21F0h+var_30]
    vmovss  dword ptr [rdi+130h], xmm1
    vmovss  xmm2, dword ptr [rdi+134h]
    vaddss  xmm0, xmm2, dword ptr [r12+4]
    vmovss  dword ptr [rdi+134h], xmm0
    vmovss  xmm1, dword ptr [rdi+138h]
    vaddss  xmm2, xmm1, dword ptr [r12+8]
    vmovss  dword ptr [rdi+138h], xmm2
    vmovss  xmm0, dword ptr [r15]
    vaddss  xmm1, xmm0, dword ptr [r14]
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm2, dword ptr [r14+4]
    vaddss  xmm0, xmm2, dword ptr [r15+4]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vaddss  xmm2, xmm1, dword ptr [r15+8]
    vmovss  dword ptr [r14+8], xmm2
  }
  if ( (_RDI->flags.m_flags[0] & 0x20) == 0 || (v113 = 1i64, !GMovingPlatformClient::CanPush(_RDI)) )
    v113 = 0i64;
  v114 = 0;
  v115 = 0;
  if ( !v128.count )
    goto LABEL_73;
  do
  {
    v116 = &g_entities[(unsigned __int16)v138[v115]];
    if ( v113 )
    {
      if ( !v116 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = v116->s.eType;
      if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && !GUtils::AreEntsInSameLinkTree(v116, _RDI) )
      {
        GScr_AddEntity(_RDI);
        GScr_Notify(v116, scr_const.touching_platform, 1u);
      }
    }
    v118 = G_GetEntityPlayerState(v116);
    if ( v118 )
    {
      if ( v116->s.groundEntityNum == _RDI->s.number || v118->movingPlatforms.m_movingPlatformEntity == _RDI->s.number || (G_PhysicsObject_WarpToCurrentTransform(_RDI, 1), SV_LinkEntity(_RDI), v114 = 1, GMovingPlatformClient::TestEntityPosition(v116, &v116->r.currentOrigin) == _RDI) )
      {
        v119 = v59++;
        v139[v119] = v138[v115];
      }
    }
    ++v115;
  }
  while ( v115 < v128.count );
  if ( !v114 )
  {
LABEL_73:
    if ( !GMovingPlatforms::IsEntityKeyframedMover(_RDI) )
      G_PhysicsObject_WarpToCurrentTransform(_RDI, 0);
    SV_LinkEntity(_RDI);
  }
  if ( v59 )
  {
    v120 = amovea;
    v121 = v139;
    v122 = movea;
    v123 = v59;
    do
    {
      v124 = &g_entities[(unsigned __int16)*v121];
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v125 = GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, v124);
      if ( v125 )
        GMovingPlatformClient::DeferredAddCharacter(v125, v124, _RDI, v122, v120);
      ++v121;
      --v123;
    }
    while ( v123 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
GMovingPlatforms::MoverSlide
==============
*/
void GMovingPlatforms::MoverSlide(gentity_s *ent)
{
  GStepSlideMove stepSlide; 

  stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  [rsp+0C8h+stepSlide.baseclass_0.deltaTime], xmm1
  }
  stepSlide.origin = &ent->r.currentOrigin;
  stepSlide.velocity = &ent->c.mover.pos.pos2;
  stepSlide.bounds = (const Bounds *)&ent->c;
  *(_WORD *)&stepSlide.gravity = 1;
  stepSlide.zerog = 0;
  stepSlide.inSolid = NULL;
  stepSlide.passEntities[0] = ent->s.number;
  stepSlide.passEntityCount = 1;
  stepSlide.clipMask = 33619985;
  stepSlide.velocityClipType = VELOCITY_CLIP_PLAYER;
  G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
  BgStepSlideMove::StepSlideMove(&stepSlide);
  if ( ent->r.isLinked )
    SV_LinkEntity(ent);
  BgStepSlideMove::~BgStepSlideMove(&stepSlide);
}

/*
==============
GMovingPlatforms::MoverTeam
==============
*/
void GMovingPlatforms::MoverTeam(gentity_s *ent, const vec3_t *deltaOrigin, const vec3_t *deltaAngles)
{
  trajectory_t_secure *p_pos; 
  GMovingPlatforms *MovingPlatforms; 
  void (__fastcall *reached)(gentity_s *); 
  void (__fastcall *v14)(gentity_s *); 
  GStepSlideMove stepSlide; 
  vec3_t outAMove; 
  vec3_t outMove; 

  p_pos = &ent->s.lerp.pos;
  if ( ent->s.lerp.pos.trType != TR_PHYSICS_CLIENT_AUTH )
  {
    if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory", -2i64) )
      __debugbreak();
    if ( (unsigned int)(p_pos->trType - 23) > 5 )
    {
      MovingPlatforms = GMovingPlatforms::GetMovingPlatforms();
      if ( MovingPlatforms->ShouldForceStationaryMover(MovingPlatforms) )
      {
        if ( p_pos->trType == TR_INTERPOLATE && (ent->flags.m_flags[0] & 0x80000) == 0 )
          p_pos->trType = TR_STATIONARY;
        if ( ent->s.lerp.apos.trType == TR_INTERPOLATE )
          ent->s.lerp.apos.trType = TR_STATIONARY;
      }
      if ( ent->tagInfo )
        goto LABEL_19;
      if ( p_pos->trType == TR_STATIONARY && ent->s.lerp.apos.trType == TR_STATIONARY )
        return;
      if ( (ent->flags.m_flags[0] & 0x80000) == 0 )
      {
LABEL_19:
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+57h+outMove], xmm0
          vmovss  dword ptr [rbp+57h+outMove+4], xmm0
          vmovss  dword ptr [rbp+57h+outMove+8], xmm0
          vmovss  dword ptr [rbp+57h+outAMove], xmm0
          vmovss  dword ptr [rbp+57h+outAMove+4], xmm0
          vmovss  dword ptr [rbp+57h+outAMove+8], xmm0
        }
        GMovingPlatforms::ComputeMoverPushDeltas(ent, deltaOrigin, deltaAngles, &outMove, &outAMove);
        GMovingPlatforms::MoverPush(ent, &outMove, &outAMove);
        if ( p_pos->trType )
        {
          if ( p_pos->trType != TR_PHYSICS_SERVER_AUTH && !ent->tagInfo && level.time >= ent->s.lerp.pos.trTime + ent->s.lerp.pos.trDuration )
          {
            reached = G_Main_GetEntHandlerList(ent)->reached;
            if ( reached )
              reached(ent);
          }
        }
        if ( ent->s.lerp.apos.trType )
        {
          if ( p_pos->trType != TR_PHYSICS_SERVER_AUTH && !ent->tagInfo && level.time >= ent->s.lerp.apos.trTime + ent->s.lerp.apos.trDuration )
          {
            v14 = G_Main_GetEntHandlerList(ent)->reached;
            if ( v14 )
              v14(ent);
          }
        }
      }
      else
      {
        stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vmovss  [rbp+57h+stepSlide.baseclass_0.deltaTime], xmm1
        }
        stepSlide.origin = &ent->r.currentOrigin;
        stepSlide.velocity = &ent->c.mover.pos.pos2;
        stepSlide.bounds = (const Bounds *)&ent->c;
        *(_WORD *)&stepSlide.gravity = 1;
        stepSlide.zerog = 0;
        stepSlide.inSolid = NULL;
        stepSlide.passEntities[0] = ent->s.number;
        stepSlide.passEntityCount = 1;
        stepSlide.clipMask = 33619985;
        stepSlide.velocityClipType = VELOCITY_CLIP_PLAYER;
        G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
        BgStepSlideMove::StepSlideMove(&stepSlide);
        if ( ent->r.isLinked )
          SV_LinkEntity(ent);
        BgStepSlideMove::~BgStepSlideMove(&stepSlide);
      }
    }
  }
}

/*
==============
GMovingPlatformClient::PredictPosition
==============
*/
void GMovingPlatformClient::PredictPosition(GMovingPlatformClient *this, gentity_s *character)
{
  playerState_s *EntityPlayerState; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 

  if ( BGMovingPlatforms::IsMovingPlatform(this->m_deferredData.platformId) )
  {
    this->m_deferredData.backupOrigin.v[0] = character->r.currentOrigin.v[0];
    this->m_deferredData.backupOrigin.v[1] = character->r.currentOrigin.v[1];
    this->m_deferredData.backupOrigin.v[2] = character->r.currentOrigin.v[2];
    _RBP = &g_entities[this->m_deferredData.platformId];
    EntityPlayerState = G_GetEntityPlayerState(character);
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0xDu) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+130h]
        vmovss  xmm1, dword ptr [rbp+134h]
        vmovss  xmm2, dword ptr [rbp+140h]
        vmovaps [rsp+0F8h+var_28], xmm6
        vmovaps [rsp+0F8h+var_38], xmm7
        vsubss  xmm7, xmm1, dword ptr [rdi+30h]
        vmovaps [rsp+0F8h+var_48], xmm8
        vsubss  xmm8, xmm0, dword ptr [rdi+2Ch]
        vmovss  xmm0, dword ptr [rbp+138h]
        vsubss  xmm6, xmm0, dword ptr [rdi+34h]
        vmovss  xmm0, dword ptr [rbp+13Ch]
        vsubss  xmm1, xmm0, dword ptr [rdi+38h]
        vsubss  xmm0, xmm2, dword ptr [rdi+3Ch]
        vmovss  dword ptr [rsp+0F8h+angles], xmm1
        vmovss  xmm1, dword ptr [rbp+144h]
        vsubss  xmm2, xmm1, dword ptr [rdi+40h]
        vmovss  dword ptr [rsp+0F8h+angles+8], xmm2
        vmovss  dword ptr [rsp+0F8h+angles+4], xmm0
      }
      AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
      __asm
      {
        vmovss  [rsp+0F8h+var_A4], xmm8
        vmovss  [rsp+0F8h+var_A0], xmm7
        vmovss  [rsp+0F8h+var_9C], xmm6
      }
      MatrixInverseOrthogonal43(&axis, &out);
      MatrixTransformVector43(&character->r.currentOrigin, &out, &in1);
      AnglesToAxis(&_RBP->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+130h]
        vmovss  xmm1, dword ptr [rbp+134h]
        vmovss  [rsp+0F8h+var_A4], xmm0
        vmovss  xmm0, dword ptr [rbp+138h]
        vmovss  [rsp+0F8h+var_9C], xmm0
        vmovss  [rsp+0F8h+var_A0], xmm1
      }
      MatrixTransformVector43(&in1, &axis, &character->r.currentOrigin);
      G_PhysicsCharacterProxy_Teleport(character, 1);
      __asm
      {
        vmovaps xmm8, [rsp+0F8h+var_48]
        vmovaps xmm7, [rsp+0F8h+var_38]
        vmovaps xmm6, [rsp+0F8h+var_28]
      }
    }
  }
}

/*
==============
GMovingPlatforms::PredictPositions
==============
*/
void GMovingPlatforms::PredictPositions()
{
  unsigned int i; 
  gentity_s *v5; 
  GMovingPlatformClient *v6; 
  playerState_s *EntityPlayerState; 
  __int64 v27; 
  __int64 v28; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  for ( i = 0; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( i >= 0x800 )
    {
      LODWORD(v28) = 2048;
      LODWORD(v27) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v27, v28) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[i] )
    {
      v5 = &g_entities[i];
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v6 = GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, v5);
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 871, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
        __debugbreak();
      if ( BGMovingPlatforms::IsMovingPlatform(v6->m_deferredData.platformId) )
      {
        v6->m_deferredData.backupOrigin.v[0] = v5->r.currentOrigin.v[0];
        v6->m_deferredData.backupOrigin.v[1] = v5->r.currentOrigin.v[1];
        v6->m_deferredData.backupOrigin.v[2] = v5->r.currentOrigin.v[2];
        _R15 = &g_entities[v6->m_deferredData.platformId];
        EntityPlayerState = G_GetEntityPlayerState(v5);
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0xDu) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r15+130h]
            vsubss  xmm8, xmm0, dword ptr [rsi+2Ch]
            vmovss  xmm0, dword ptr [r15+138h]
            vsubss  xmm6, xmm0, dword ptr [rsi+34h]
            vmovss  xmm1, dword ptr [r15+134h]
            vmovss  xmm0, dword ptr [r15+13Ch]
            vsubss  xmm7, xmm1, dword ptr [rsi+30h]
            vsubss  xmm1, xmm0, dword ptr [rsi+38h]
            vmovss  xmm2, dword ptr [r15+140h]
            vsubss  xmm0, xmm2, dword ptr [rsi+3Ch]
            vmovss  dword ptr [rsp+128h+angles], xmm1
            vmovss  xmm1, dword ptr [r15+144h]
            vsubss  xmm2, xmm1, dword ptr [rsi+40h]
            vmovss  dword ptr [rsp+128h+angles+8], xmm2
            vmovss  dword ptr [rsp+128h+angles+4], xmm0
          }
          AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
          __asm
          {
            vmovss  [rsp+128h+var_B4], xmm8
            vmovss  [rsp+128h+var_B0], xmm7
            vmovss  [rsp+128h+var_AC], xmm6
          }
          MatrixInverseOrthogonal43(&axis, &out);
          MatrixTransformVector43(&v5->r.currentOrigin, &out, &in1);
          AnglesToAxis(&_R15->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
          __asm
          {
            vmovss  xmm0, dword ptr [r15+130h]
            vmovss  xmm1, dword ptr [r15+134h]
            vmovss  [rsp+128h+var_B4], xmm0
            vmovss  xmm0, dword ptr [r15+138h]
            vmovss  [rsp+128h+var_AC], xmm0
            vmovss  [rsp+128h+var_B0], xmm1
          }
          MatrixTransformVector43(&in1, &axis, &v5->r.currentOrigin);
          G_PhysicsCharacterProxy_Teleport(v5, 1);
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+128h+var_58]
    vmovaps xmm7, [rsp+128h+var_48]
    vmovaps xmm6, [rsp+128h+var_38]
  }
}

/*
==============
GMovingPlatformClient::ResetPredictedPosition
==============
*/
void GMovingPlatformClient::ResetPredictedPosition(GMovingPlatformClient *this, gentity_s *character)
{
  if ( BGMovingPlatforms::IsMovingPlatform(this->m_deferredData.platformId) )
  {
    character->r.currentOrigin.v[0] = this->m_deferredData.backupOrigin.v[0];
    character->r.currentOrigin.v[1] = this->m_deferredData.backupOrigin.v[1];
    character->r.currentOrigin.v[2] = this->m_deferredData.backupOrigin.v[2];
    G_PhysicsCharacterProxy_Teleport(character, 1);
  }
}

/*
==============
GMovingPlatforms::ResetPredictedPositions
==============
*/
void GMovingPlatforms::ResetPredictedPositions(void)
{
  unsigned int i; 
  gentity_s *v1; 
  GMovingPlatformClient *v2; 
  __int64 v3; 
  __int64 v4; 

  for ( i = 0; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( i >= 0x800 )
    {
      LODWORD(v4) = 2048;
      LODWORD(v3) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[i].r.isInUse != g_entityIsInUse[i] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[i] )
    {
      v1 = &g_entities[i];
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v2 = GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, v1);
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 818, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
        __debugbreak();
      if ( BGMovingPlatforms::IsMovingPlatform(v2->m_deferredData.platformId) )
      {
        v1->r.currentOrigin.v[0] = v2->m_deferredData.backupOrigin.v[0];
        v1->r.currentOrigin.v[1] = v2->m_deferredData.backupOrigin.v[1];
        v1->r.currentOrigin.v[2] = v2->m_deferredData.backupOrigin.v[2];
        G_PhysicsCharacterProxy_Teleport(v1, 1);
      }
    }
  }
}

/*
==============
GMovingPlatforms::RunMoverNonScriptedAnim
==============
*/
void GMovingPlatforms::RunMoverNonScriptedAnim(gentity_s *ent)
{
  const DObj *ServerDObjForEnt; 
  const DObj *v3; 
  char v4; 
  char v6; 
  char v16; 
  vec3_t in1; 
  vec4_t quat; 
  vec3_t origin; 
  tmat43_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( !ent->tagInfo && !BgTrajectory::IsAnimatedTrajectory(&ent->s.lerp.pos) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    v3 = ServerDObjForEnt;
    if ( ServerDObjForEnt )
    {
      if ( DObjGetTree(ServerDObjForEnt) )
      {
        XAnimCalcDelta3D(v3, 0, XANIM_SUBTREE_DEFAULT, 0, &quat, &in1, 1);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+108h+quat+0Ch]
          vucomiss xmm0, cs:__real@3f800000
        }
        if ( v4 )
        {
          v6 = 0;
          v4 = 1;
        }
        else
        {
          __asm { vucomiss xmm0, cs:__real@bf800000 }
          v6 = 1;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+108h+in1]
          vmovss  xmm1, dword ptr [rsp+108h+in1+4]
          vmulss  xmm3, xmm0, xmm0
          vmovss  xmm0, dword ptr [rsp+108h+in1+8]
          vmulss  xmm2, xmm1, xmm1
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm1, xmm0, xmm0
          vaddss  xmm3, xmm4, xmm1
          vxorps  xmm2, xmm2, xmm2
          vucomiss xmm3, xmm2
        }
        if ( v4 )
          v16 = 0;
        else
          v16 = 1;
        if ( v6 )
        {
          QuatToAxis(&quat, &axis);
          AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&in2);
          MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)&in2, &out);
          AxisToAngles(&out, &ent->r.currentAngles);
        }
        if ( v16 )
        {
          AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &in2);
          MatrixTransformVector43(&in1, &in2, &origin);
          G_SetOriginAndAngle(ent, &origin, &ent->r.currentAngles, 1, 1);
          if ( ent->r.isLinked )
            SV_LinkEntity(ent);
        }
        else if ( v6 )
        {
          G_SetAngle(ent, &ent->r.currentAngles, 1, 1);
        }
      }
    }
  }
}

/*
==============
GMovingPlatformClient::SendUnresolvedCollision
==============
*/
void GMovingPlatformClient::SendUnresolvedCollision(GMovingPlatformClient *this, gentity_s *pusher, gentity_s *character, int touchingEnt)
{
  __int64 v5; 
  playerState_s *ps; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  scrContext_t *v15; 
  BgTrace v16; 
  float value; 
  trace_t results; 

  v5 = touchingEnt;
  if ( G_MovingPlatforms_DoesMoveTypeSupportMovers(character) && (!BGMovingPlatforms::IsMovingPlatform(v5) || g_entities[v5].s.eType != ET_INVISIBLE) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+108h+value], xmm0
      vmovss  [rsp+108h+var_94], xmm0
      vmovss  [rsp+108h+var_90], xmm0
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) )
    {
LABEL_14:
      v15 = ScriptContext_Server();
      Scr_AddVector(v15, &value);
      GScr_AddEntity(pusher);
      GScr_Notify(character, scr_const.unresolved_collision, 2u);
      GScr_AddEntity(character);
      GScr_Notify(pusher, scr_const.unresolved_collision, 1u);
      return;
    }
    if ( !character->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 618, ASSERT_TYPE_ASSERT, "(character->client)", (const char *)&queryFormat, "character->client") )
      __debugbreak();
    ps = G_GetEntityPlayerState(character);
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 620, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(character->s.number);
    BgTrace::BgTrace(&v16, PlayerTraceInfo);
    BgTrace::LegacyTraceHandler(&v16, PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &ps->origin, &character->client->playerBox, ps->clientNum, character->clipmask & 0xFDFFBFFF, ps);
    if ( results.startsolid || results.allsolid )
    {
      __asm
      {
        vmovss  xmm3, [rsp+108h+results.closestPointsPenetration]
        vmulss  xmm1, xmm3, dword ptr [rsp+108h+results.normal]
        vmulss  xmm0, xmm3, dword ptr [rsp+108h+results.normal+4]
        vmulss  xmm2, xmm3, dword ptr [rsp+108h+results.normal+8]
        vmovss  [rsp+108h+value], xmm1
        vmovss  [rsp+108h+var_94], xmm0
        vmovss  [rsp+108h+var_90], xmm2
      }
      goto LABEL_14;
    }
  }
}

/*
==============
GMovingPlatformClient::TestEntityPosition
==============
*/
gentity_s *GMovingPlatformClient::TestEntityPosition(gentity_s *ent, const vec3_t *vOrigin)
{
  const dvar_t *v4; 
  entityType_s eType; 
  const playerState_s *ps; 
  unsigned __int16 EntityHitId; 
  int skipEntities; 
  Bounds bounds; 
  trace_t results; 

  _RBX = ent;
  if ( !BG_IsCharacterEntity(&ent->s) )
    return 0i64;
  v4 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    return 0i64;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = _RBX->s.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 128, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+100h]
    vmovsd  xmm1, qword ptr [rbx+110h]
    vmovups xmmword ptr [rsp+108h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+108h+bounds.halfSize+4], xmm1
  }
  Bounds_ExpandToWidth(&bounds);
  ps = G_GetEntityPlayerState(_RBX);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 134, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  skipEntities = _RBX->s.number;
  PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, vOrigin, vOrigin, &bounds, &skipEntities, 1, _RBX->clipmask & 0xFDFFFFFF, ps, 0, NULL, NULL);
  EntityHitId = Trace_GetEntityHitId(&results);
  if ( results.startsolid || results.allsolid )
    return &g_entities[EntityHitId];
  else
    return 0i64;
}

/*
==============
GMovingPlatforms::TraceHitMovingPlatform
==============
*/
int GMovingPlatforms::TraceHitMovingPlatform(const trace_t *trace)
{
  bool v2; 
  bool v3; 

  _RBX = trace;
  v2 = trace == NULL;
  if ( !trace )
  {
    v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 184, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace");
    v2 = !v3;
    if ( v3 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rbx]
  }
  if ( !v2 && _RBX->hitType == TRACE_HITTYPE_ENTITY && BGMovingPlatforms::IsMovingPlatform(_RBX->hitId) )
    return BGMovingPlatforms::IsPlatformType(g_entities[_RBX->hitId].s.eType);
  else
    return 0;
}

/*
==============
GMovingPlatformClient::TryPushingClient
==============
*/
void GMovingPlatformClient::TryPushingClient(GMovingPlatformClient *this, gentity_s *check, gentity_s *pusher, const vec3_t *move, const vec3_t *amove, vec3_t *outNewOrigin)
{
  int number; 
  int m_movingPlatformEntity; 
  bool v17; 
  bool v18; 
  const dvar_t *v23; 
  GHandler *v29; 
  GMovingPlatformClient *ClientFromGEntity; 
  int clipMask; 
  GHandler *handler; 
  int v48; 
  char v50; 
  bool v51; 
  scrContext_t *v63; 
  bool v64; 
  float v65; 
  BOOL flags; 
  vec3_t outVel; 
  vec3_t oldAngles; 
  vec3_t oldOrigin; 
  Bounds bounds; 
  BGMovingPlatformSolver v71; 

  __asm { vmovaps [rsp+230h+var_50], xmm6 }
  _RBX = move;
  _R13 = pusher;
  *(_QWORD *)outVel.v = this;
  _RSI = check;
  _RDI = G_GetEntityPlayerState(check);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 649, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  number = _R13->s.number;
  m_movingPlatformEntity = _RDI->movingPlatforms.m_movingPlatformEntity;
  v17 = m_movingPlatformEntity == number;
  if ( m_movingPlatformEntity != number )
  {
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 650, ASSERT_TYPE_ASSERT, "(ps->movingPlatforms.GetMoverEntityID() == pusher->s.number)", "%s\n\tclient = %d, platform = %d, pusher = %d", "ps->movingPlatforms.GetMoverEntityID() == pusher->s.number", _RSI->s.number, _RDI->movingPlatforms.m_movingPlatformEntity, _R13->s.number);
    v17 = !v18;
    if ( v18 )
      __debugbreak();
  }
  *outNewOrigin = _RSI->r.currentOrigin;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rsi+10Ch]
  }
  if ( v17 )
  {
    Com_PrintWarning(1, "Bounds for player is 0, but is expecting a volume. Penetration will not be resolved.\n");
    goto LABEL_37;
  }
  __asm { vucomiss xmm6, dword ptr [rsi+114h] }
  if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    __asm { vucomiss xmm6, dword ptr [rbx] }
    goto LABEL_10;
  }
  if ( !Vec3ZeroEpsilon(_RBX) || !Vec3ZeroEpsilon(amove) )
  {
LABEL_10:
    __asm
    {
      vmovaps [rsp+230h+var_60], xmm7
      vmovaps [rsp+230h+var_70], xmm8
      vmovaps [rsp+230h+var_80], xmm9
      vmovaps [rsp+230h+var_90], xmm10
    }
    if ( BGMovingPlatformPS::UseRockingMoverWallFix2() && (_RAX = _RSI->client) != NULL )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax+0AA84h]
        vmovups xmmword ptr [rbp+130h+bounds.midPoint], xmm0
        vmovsd  xmm1, qword ptr [rax+0AA94h]
        vmovsd  qword ptr [rbp+130h+bounds.halfSize+4], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+100h]
        vmovsd  xmm1, qword ptr [rsi+110h]
        vmovups xmmword ptr [rbp+130h+bounds.midPoint], xmm0
        vmovsd  qword ptr [rbp+130h+bounds.halfSize+4], xmm1
      }
      Bounds_ExpandToWidth(&bounds);
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rdi+60h]
      vmovss  xmm8, dword ptr [rdi+64h]
      vmovss  xmm9, dword ptr [rdi+68h]
    }
    v29 = GHandler::getHandler();
    BGMovingPlatformPS::UpdateMoverUpAngles(&_RDI->movingPlatforms, _RDI, v29, &bounds);
    __asm
    {
      vmovss  xmm0, dword ptr [r13+130h]
      vsubss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [r13+134h]
      vsubss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+130h+var_188], xmm1
      vmovss  xmm1, dword ptr [r13+138h]
      vsubss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+130h+var_188+4], xmm0
      vmovss  xmm0, dword ptr [r13+13Ch]
      vsubss  xmm1, xmm0, dword ptr [r12]
      vmovss  dword ptr [rbp+130h+var_188+8], xmm2
      vmovss  xmm2, dword ptr [r13+140h]
      vsubss  xmm0, xmm2, dword ptr [r12+4]
      vmovss  dword ptr [rbp+130h+var_198], xmm1
      vmovss  xmm1, dword ptr [r13+144h]
      vsubss  xmm2, xmm1, dword ptr [r12+8]
      vmovss  dword ptr [rbp+130h+var_198+8], xmm2
      vmovss  dword ptr [rbp+130h+var_198+4], xmm0
    }
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
      vmulss  xmm10, xmm0, cs:__real@3a83126f
    }
    flags = BGMovingPlatforms::IsMoverOptimized(&_R13->s);
    ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(_RSI);
    if ( !ClientFromGEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 709, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
      __debugbreak();
    clipMask = _RSI->clipmask & 0xFDFFFFFF;
    handler = GHandler::getHandler();
    __asm { vmovss  [rsp+230h+var_1C8], xmm10 }
    BGMovingPlatformSolver::BGMovingPlatformSolver(&v71, _RDI, ClientFromGEntity, &_R13->r.currentOrigin, &_R13->r.currentAngles, &oldOrigin, &oldAngles, &_RSI->r.currentOrigin, _R13->s.number, _R13->s.index.brushModel, handler, LOCAL_CLIENT_INVALID, &bounds, v65, clipMask, flags);
    v48 = BGMovingPlatformSolver::SolveSystem(&v71);
    __asm { vmovaps xmm10, [rsp+230h+var_90] }
    if ( v48 )
    {
      v51 = v71.m_push == 0;
      if ( v71.m_push )
      {
        BGMovingPlatformSolver::GetLinearPlatformVelcity(&v71, &outVel);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+130h+outVel]
          vucomiss xmm0, xmm6
          vmovss  xmm3, dword ptr [rbp+130h+outVel+8]
          vmovss  xmm1, dword ptr [rbp+130h+outVel+4]
        }
        if ( !v51 )
          goto LABEL_42;
        __asm { vucomiss xmm1, xmm6 }
        if ( !v51 )
          goto LABEL_42;
        __asm { vucomiss xmm3, xmm6 }
        if ( !v51 )
        {
LABEL_42:
          __asm
          {
            vmovss  xmm2, cs:__real@3f91745d
            vmulss  xmm0, xmm0, xmm2
            vmovss  dword ptr [rbp+130h+outVel], xmm0
            vmulss  xmm0, xmm3, xmm2
            vmulss  xmm1, xmm1, xmm2
            vmovss  dword ptr [rbp+130h+outVel+8], xmm0
            vmovss  dword ptr [rbp+130h+outVel+4], xmm1
          }
          v63 = ScriptContext_Server();
          Scr_AddVector(v63, outVel.v);
          GScr_AddEntity(_RSI);
          GScr_Notify(_R13, scr_const.player_pushed, 2u);
        }
      }
    }
    else
    {
      if ( BGMovingPlatformClient::NeedToResolveCollision(ClientFromGEntity, _RDI) && !v71.m_actorResolve && _RDI->pm_type < 7 )
        GMovingPlatformClient::SendUnresolvedCollision(*(GMovingPlatformClient **)outVel.v, _R13, _RSI, v71.m_failedTraceHitId);
      v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)outVel.v + 16i64))(*(_QWORD *)outVel.v, (unsigned int)_R13->s.number, (unsigned int)v71.m_failedTraceHitId);
      v51 = v50 == 0;
      if ( !v50 )
      {
        *outNewOrigin = _RSI->r.currentOrigin;
        if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
        {
          __asm
          {
            vmovss  dword ptr [rdi+60h], xmm7
            vmovss  dword ptr [rdi+64h], xmm8
            vmovss  dword ptr [rdi+68h], xmm9
          }
        }
LABEL_36:
        __asm
        {
          vmovaps xmm8, [rsp+230h+var_70]
          vmovaps xmm7, [rsp+230h+var_60]
          vmovaps xmm9, [rsp+230h+var_80]
        }
        goto LABEL_37;
      }
    }
    __asm { vucomiss xmm7, dword ptr [rdi+60h] }
    if ( !v51 )
      goto LABEL_47;
    __asm { vucomiss xmm8, dword ptr [rdi+64h] }
    if ( !v51 )
      goto LABEL_47;
    __asm { vucomiss xmm9, dword ptr [rdi+68h] }
    if ( v51 )
      v64 = 0;
    else
LABEL_47:
      v64 = 1;
    if ( !BGMovingPlatformSolver::ValidateFinalPositionVsStaticWorld(&v71, v64) && BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
    {
      __asm
      {
        vmovss  dword ptr [rdi+60h], xmm7
        vmovss  dword ptr [rdi+64h], xmm8
        vmovss  dword ptr [rdi+68h], xmm9
      }
    }
    BGMovingPlatformSolver::GetTransformedOrigin(&v71, outNewOrigin);
    goto LABEL_36;
  }
  v23 = DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix;
  if ( !DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUnresolvedCollisionFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    GMovingPlatformClient::UnresolvedCollisionOnlyUpdate(*(GMovingPlatformClient **)outVel.v, _RSI, _RDI);
LABEL_37:
  __asm { vmovaps xmm6, [rsp+230h+var_50] }
}

/*
==============
GMovingPlatforms::UnmarkEntityKeyframedMover
==============
*/
void GMovingPlatforms::UnmarkEntityKeyframedMover(const gentity_s *ent)
{
  __int16 number; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2062, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned __int16)number > 0x7FFu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2064, ASSERT_TYPE_ASSERT, "(num >= 0 && num < ( 2048 ))", (const char *)&queryFormat, "num >= 0 && num < MAX_GENTITIES") )
    __debugbreak();
  if ( (unsigned int)number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
    __debugbreak();
  GMovingPlatforms::ms_gentityKeyframedMover.array[(unsigned __int64)(unsigned int)number >> 5] &= ~(0x80000000 >> (number & 0x1F));
}

/*
==============
GMovingPlatformClient::UnresolvedCollisionOnlyUpdate
==============
*/
void GMovingPlatformClient::UnresolvedCollisionOnlyUpdate(GMovingPlatformClient *this, gentity_s *character, playerState_s *ps)
{
  GMovingPlatformClient *ClientFromGEntity; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  BgTrace v10; 
  Bounds bounds; 
  trace_t results; 

  _RDI = character;
  if ( BGMovingPlatforms::IsOnMovingPlatform(ps) && G_IsEntityInUse(ps->movingPlatforms.m_movingPlatformEntity) )
  {
    ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(_RDI);
    if ( !ClientFromGEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 890, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
      __debugbreak();
    if ( BGMovingPlatformClient::NeedToResolveCollision(ClientFromGEntity, ps) )
    {
      if ( ps->pm_type < 7 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi+100h]
          vmovsd  xmm1, qword ptr [rdi+110h]
          vmovups xmmword ptr [rsp+118h+bounds.midPoint], xmm0
          vmovsd  qword ptr [rsp+118h+bounds.halfSize+4], xmm1
        }
        Bounds_ExpandToWidth(&bounds);
        PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(_RDI->s.number);
        BgTrace::BgTrace(&v10, PlayerTraceInfo);
        BgTrace::LegacyTraceHandler(&v10, PHYSICS_WORLD_ID_FIRST, &results, &_RDI->r.currentOrigin, &_RDI->r.currentOrigin, &bounds, _RDI->s.number, _RDI->clipmask & 0xFDFFBFFF, ps);
        if ( results.startsolid )
        {
          if ( !G_IsEntityInUse(ps->movingPlatforms.m_movingPlatformEntity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 914, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ps->movingPlatforms.GetMoverEntityID() ))", (const char *)&queryFormat, "G_IsEntityInUse( ps->movingPlatforms.GetMoverEntityID() )") )
            __debugbreak();
          GMovingPlatformClient::SendUnresolvedCollision(this, &g_entities[ps->movingPlatforms.m_movingPlatformEntity], _RDI, results.hitId);
        }
      }
    }
  }
}

/*
==============
GMovingPlatforms::UpdateAllPlatformTraces
==============
*/
void GMovingPlatforms::UpdateAllPlatformTraces(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  gentity_s *v3; 
  gclient_s *client; 
  GMovingPlatforms *v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  v0 = 0;
  if ( level.maxclients > 0 )
  {
    v1 = 0i64;
    v2 = 0i64;
    do
    {
      if ( (unsigned int)v0 >= 0x800 )
      {
        LODWORD(v8) = 2048;
        LODWORD(v7) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v1].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v2] )
      {
        v3 = &g_entities[v1];
        if ( !g_entities[v1].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1947, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
          __debugbreak();
        client = v3->client;
        if ( client->sess.sessionState == SESS_STATE_PLAYING )
        {
          if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
            __debugbreak();
          v5 = GMovingPlatforms::ms_instance;
          if ( !client->movingPlatformHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
            __debugbreak();
          v6 = client->movingPlatformHandle.m_objIndex - 1;
          if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
            __debugbreak();
          if ( v6 >= 0xF8 )
          {
            LODWORD(v8) = 248;
            LODWORD(v7) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", v7, v8) )
              __debugbreak();
          }
          GMovingPlatformClient::UpdatePlatformTrace(&v5->m_moverClientArray[v6], v3, 0);
        }
      }
      ++v0;
      ++v2;
      ++v1;
    }
    while ( v0 < level.maxclients );
  }
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  GMovingPlatforms::ms_instance->UpdateAllPlatformTracesForAgents(GMovingPlatforms::ms_instance);
}

/*
==============
GMovingPlatforms::UpdateEntityMoveFlag
==============
*/
void GMovingPlatforms::UpdateEntityMoveFlag(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles)
{
  if ( ent->s.eType == ET_VEHICLE )
  {
    if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 230, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
      __debugbreak();
    _RAX = ent->vehicle;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0FCh]
      vsubss  xmm2, xmm0, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rax+100h]
      vsubss  xmm3, xmm1, dword ptr [rbx+134h]
      vmovss  xmm0, dword ptr [rax+104h]
      vsubss  xmm4, xmm0, dword ptr [rbx+138h]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, dword ptr [rax+118h]
      vaddss  xmm5, xmm3, xmm0
      vmovss  xmm0, dword ptr [rax+114h]
      vsubss  xmm3, xmm0, dword ptr [rbx+13Ch]
      vmovss  xmm0, dword ptr [rax+11Ch]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vsubss  xmm3, xmm0, dword ptr [rcx+130h]
      vmovss  xmm1, dword ptr [rdx+4]
      vsubss  xmm2, xmm1, dword ptr [rcx+134h]
      vmovss  xmm0, dword ptr [rdx+8]
      vsubss  xmm4, xmm0, dword ptr [rcx+138h]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, dword ptr [r8+4]
      vaddss  xmm5, xmm3, xmm0
      vmovss  xmm0, dword ptr [r8]
      vsubss  xmm3, xmm0, dword ptr [rbx+13Ch]
      vmovss  xmm0, dword ptr [r8+8]
    }
  }
  __asm
  {
    vsubss  xmm2, xmm1, dword ptr [rbx+140h]
    vsubss  xmm4, xmm0, dword ptr [rbx+144h]
    vcomiss xmm5, cs:__real@358637be
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm4, cs:__real@358637be
  }
  ent->flags.m_flags[0] &= ~0x20u;
}

/*
==============
GMovingPlatformClient::UpdateLinkToBlendPos
==============
*/
void GMovingPlatformClient::UpdateLinkToBlendPos(GMovingPlatformClient *this, gentity_s *ent)
{
  __int64 platformEnt; 
  gentity_s *v4; 
  vec3_t outPlatformDelta; 
  vec3_t outPlatformADelta; 

  if ( BGMovingPlatforms::IsMovingPlatform(ent->c.blend.platformEnt) )
  {
    platformEnt = ent->c.blend.platformEnt;
    v4 = &g_entities[platformEnt];
    if ( G_IsEntityInUse(platformEnt) )
    {
      if ( GMovingPlatformEntityTracking::GetTrackingDelta(&v4->movingPlatformTrack, v4, &outPlatformDelta, &outPlatformADelta) )
        BGMovingPlatforms::UpdatePoint((vec3_t *)&ent->c, &v4->r.currentOrigin, &v4->r.currentAngles, &outPlatformADelta, &outPlatformDelta);
    }
  }
}

/*
==============
GMovingPlatforms::UpdateMoverInternalVelocity
==============
*/
void GMovingPlatforms::UpdateMoverInternalVelocity(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vsubss  xmm1, xmm0, dword ptr [rdx]
    vmovss  dword ptr [rcx+2A8h], xmm1
    vmovss  xmm2, dword ptr [rcx+134h]
    vsubss  xmm0, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [rcx+2ACh], xmm0
    vmovss  xmm1, dword ptr [rcx+138h]
    vsubss  xmm2, xmm1, dword ptr [rdx+8]
    vmovss  dword ptr [rcx+2B0h], xmm2
    vmovss  xmm0, dword ptr [rcx+13Ch]
    vsubss  xmm1, xmm0, dword ptr [r8]
    vmovss  dword ptr [rcx+2B4h], xmm1
    vmovss  xmm2, dword ptr [rcx+140h]
    vsubss  xmm0, xmm2, dword ptr [r8+4]
    vmovss  dword ptr [rcx+2B8h], xmm0
    vmovss  xmm1, dword ptr [rcx+144h]
    vsubss  xmm2, xmm1, dword ptr [r8+8]
    vmovss  dword ptr [rcx+2BCh], xmm2
  }
}

/*
==============
GMovingPlatforms::UpdateMoverPhysicsVelocity
==============
*/
void GMovingPlatforms::UpdateMoverPhysicsVelocity(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles)
{
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1614, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( _RBX->s.eType == ET_SCRIPTMOVER && (_RBX->s.lerp.u.anonymous.data[2] & 0x200) != 0 )
  {
    if ( _RBX->s.lerp.pos.trType != TR_PHYSICS_SERVER_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1617, ASSERT_TYPE_ASSERT, "( ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH )", (const char *)&queryFormat, "ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH") )
      __debugbreak();
    if ( _RBX->s.lerp.apos.trType != TR_PHYSICS_SERVER_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1618, ASSERT_TYPE_ASSERT, "( ent->s.lerp.apos.trType == TR_PHYSICS_SERVER_AUTH )", (const char *)&queryFormat, "ent->s.lerp.apos.trType == TR_PHYSICS_SERVER_AUTH") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vsubss  xmm1, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rbx+2A8h], xmm1
      vmovss  xmm2, dword ptr [rbx+134h]
      vsubss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rbx+2ACh], xmm0
      vmovss  xmm1, dword ptr [rbx+138h]
      vsubss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rbx+2B0h], xmm2
      vmovss  xmm0, dword ptr [rbx+13Ch]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbx+2B4h], xmm1
      vmovss  xmm2, dword ptr [rbx+140h]
      vsubss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rbx+2B8h], xmm0
      vmovss  xmm1, dword ptr [rbx+144h]
      vsubss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rbx+2BCh], xmm2
    }
  }
}

/*
==============
GMovingPlatforms::UpdateMovingPlatformEntity
==============
*/
void GMovingPlatforms::UpdateMovingPlatformEntity(gentity_s *ent)
{
  trajectory_t_secure *p_pos; 
  bool IsRagdollTrajectory; 
  const dvar_t *v19; 
  bool v20; 
  GHandler *Handler; 
  bool v22; 
  const DObj *ServerDObjForEnt; 
  const DObj *v36; 
  bool v37; 
  char v39; 
  char v48; 
  bool IsEntityKeyframedMover; 
  bool v50; 
  vec3_t in1; 
  vec3_t origin; 
  vec4_t rot; 
  tmat43_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovss  xmm7, dword ptr [rcx+130h]
    vmovss  xmm8, dword ptr [rcx+134h]
    vmovss  xmm9, dword ptr [rcx+138h]
    vmovss  xmm10, dword ptr [rcx+13Ch]
    vmovss  xmm11, dword ptr [rcx+140h]
    vmovss  xmm12, dword ptr [rcx+144h]
  }
  _RBX = ent;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
  {
    if ( _RBX->scripted )
    {
      G_Animscripted_Think(_RBX);
      p_pos = &_RBX->s.lerp.pos;
      IsRagdollTrajectory = Com_IsRagdollTrajectory(&_RBX->s.lerp.pos);
      v19 = DVARBOOL_g_useCheapScriptedMoversForLargeMap;
      v20 = IsRagdollTrajectory;
      if ( !DVARBOOL_g_useCheapScriptedMoversForLargeMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useCheapScriptedMoversForLargeMap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v22 = 1;
      if ( v19->current.enabled )
      {
        Handler = GHandler::getHandler();
        if ( BG_IsGameTypeQuick_BR(Handler) )
          v22 = 0;
      }
      G_SetOriginAndAngle(_RBX, &_RBX->r.currentOrigin, &_RBX->r.currentAngles, 1, v22);
      SV_LinkEntity(_RBX);
      if ( _RBX->scripted )
      {
        p_pos->trType = TR_INTERPOLATE;
        _RBX->s.lerp.apos.trType = TR_INTERPOLATE;
        G_Main_RunThink(_RBX);
        if ( v20 )
        {
          p_pos->trType = TR_FIRST_RAGDOLL;
          _RBX->s.lerp.apos.trType = TR_FIRST_RAGDOLL;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vsubss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rbx+2A8h], xmm1
          vmovss  xmm2, dword ptr [rbx+134h]
          vsubss  xmm0, xmm2, xmm8
          vmovss  dword ptr [rbx+2ACh], xmm0
          vmovss  xmm1, dword ptr [rbx+138h]
          vsubss  xmm2, xmm1, xmm9
          vmovss  dword ptr [rbx+2B0h], xmm2
          vmovss  xmm0, dword ptr [rbx+13Ch]
          vsubss  xmm1, xmm0, xmm10
          vmovss  dword ptr [rbx+2B4h], xmm1
          vmovss  xmm2, dword ptr [rbx+140h]
          vsubss  xmm0, xmm2, xmm11
          vmovss  dword ptr [rbx+2B8h], xmm0
          vmovss  xmm1, dword ptr [rbx+144h]
          vsubss  xmm2, xmm1, xmm12
          vmovss  dword ptr [rbx+2BCh], xmm2
        }
        goto LABEL_48;
      }
      if ( v20 )
      {
        p_pos->trType = TR_FIRST_RAGDOLL;
        _RBX->s.lerp.apos.trType = TR_FIRST_RAGDOLL;
      }
      else
      {
        if ( p_pos->trType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1850, ASSERT_TYPE_ASSERT, "( isRagdoll || ent->s.lerp.pos.trType == TR_STATIONARY )", (const char *)&queryFormat, "isRagdoll || ent->s.lerp.pos.trType == TR_STATIONARY") )
          __debugbreak();
        if ( _RBX->s.lerp.apos.trType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1851, ASSERT_TYPE_ASSERT, "( isRagdoll || ent->s.lerp.apos.trType == TR_STATIONARY )", (const char *)&queryFormat, "isRagdoll || ent->s.lerp.apos.trType == TR_STATIONARY") )
          __debugbreak();
      }
    }
    else if ( !_RBX->tagInfo && !BgTrajectory::IsAnimatedTrajectory(&_RBX->s.lerp.pos) )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(_RBX);
      v36 = ServerDObjForEnt;
      if ( ServerDObjForEnt )
      {
        if ( DObjGetTree(ServerDObjForEnt) )
        {
          XAnimCalcDelta3D(v36, 0, XANIM_SUBTREE_DEFAULT, 0, &rot, &in1, 1);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+190h+rot+0Ch]
            vucomiss xmm0, cs:__real@3f800000
          }
          if ( v37 )
          {
            v39 = 0;
            v37 = 1;
          }
          else
          {
            __asm { vucomiss xmm0, cs:__real@bf800000 }
            v39 = 1;
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+190h+in1]
            vmovss  xmm1, dword ptr [rsp+190h+in1+4]
            vmulss  xmm2, xmm1, xmm1
            vmulss  xmm3, xmm0, xmm0
            vmovss  xmm0, dword ptr [rsp+190h+in1+8]
            vmulss  xmm1, xmm0, xmm0
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vucomiss xmm2, xmm6
          }
          v48 = !v37;
          if ( v39 )
          {
            QuatToAxis(&rot, &axis);
            AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)&in2);
            MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)&in2, &out);
            AxisToAngles(&out, &_RBX->r.currentAngles);
          }
          if ( v48 )
          {
            AnglesAndOriginToMatrix43(&_RBX->r.currentAngles, &_RBX->r.currentOrigin, &in2);
            MatrixTransformVector43(&in1, &in2, &origin);
            G_SetOriginAndAngle(_RBX, &origin, &_RBX->r.currentAngles, 1, 1);
            if ( _RBX->r.isLinked )
              SV_LinkEntity(_RBX);
          }
          else if ( v39 )
          {
            G_SetAngle(_RBX, &_RBX->r.currentAngles, 1, 1);
          }
        }
      }
    }
  }
  IsEntityKeyframedMover = GMovingPlatforms::IsEntityKeyframedMover(_RBX);
  __asm { vmovss  dword ptr [rsp+190h+in1], xmm6 }
  v50 = !IsEntityKeyframedMover;
  v37 = _RBX->tagInfo == NULL;
  __asm
  {
    vmovss  dword ptr [rsp+190h+in1+4], xmm6
    vmovss  dword ptr [rsp+190h+in1+8], xmm6
    vmovss  dword ptr [rsp+190h+origin], xmm6
    vmovss  dword ptr [rsp+190h+origin+4], xmm6
    vmovss  dword ptr [rsp+190h+origin+8], xmm6
  }
  if ( v37 )
  {
    BgTrajectory::IsAnimatedTrajectory(&_RBX->s.lerp.pos);
  }
  else if ( GMovingPlatformClient::CanPush(_RBX) )
  {
    if ( v50 )
      G_GeneralLink(_RBX);
    else
      G_GeneralLinkNoWarp(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  xmm2, dword ptr [rbx+134h]
      vsubss  xmm1, xmm0, xmm7
      vsubss  xmm0, xmm2, xmm8
      vmovss  dword ptr [rsp+190h+in1], xmm1
      vmovss  xmm1, dword ptr [rbx+138h]
      vsubss  xmm2, xmm1, xmm9
      vmovss  dword ptr [rsp+190h+in1+4], xmm0
      vmovss  xmm0, dword ptr [rbx+13Ch]
      vsubss  xmm1, xmm0, xmm10
      vmovss  dword ptr [rsp+190h+in1+8], xmm2
      vmovss  xmm2, dword ptr [rbx+140h]
      vsubss  xmm0, xmm2, xmm11
      vmovss  dword ptr [rsp+190h+origin], xmm1
      vmovss  xmm1, dword ptr [rbx+144h]
      vmovss  dword ptr [rbx+130h], xmm7
      vmovss  dword ptr [rbx+134h], xmm8
      vmovss  dword ptr [rbx+138h], xmm9
      vsubss  xmm2, xmm1, xmm12
      vmovss  dword ptr [rsp+190h+origin+8], xmm2
      vmovss  dword ptr [rsp+190h+origin+4], xmm0
      vmovss  dword ptr [rbx+13Ch], xmm10
      vmovss  dword ptr [rbx+140h], xmm11
      vmovss  dword ptr [rbx+144h], xmm12
    }
    SV_LinkEntity(_RBX);
  }
  GMovingPlatforms::UpdateMovingPlatformEntityInternal(_RBX, &in1, &origin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rbx+2A8h], xmm1
    vmovss  xmm2, dword ptr [rbx+134h]
    vsubss  xmm0, xmm2, xmm8
    vmovss  dword ptr [rbx+2ACh], xmm0
    vmovss  xmm1, dword ptr [rbx+138h]
    vsubss  xmm2, xmm1, xmm9
    vmovss  dword ptr [rbx+2B0h], xmm2
    vmovss  xmm0, dword ptr [rbx+13Ch]
    vsubss  xmm1, xmm0, xmm10
    vmovss  dword ptr [rbx+2B4h], xmm1
    vmovss  xmm2, dword ptr [rbx+140h]
    vsubss  xmm0, xmm2, xmm11
    vmovss  dword ptr [rbx+2B8h], xmm0
    vmovss  xmm1, dword ptr [rbx+144h]
    vsubss  xmm2, xmm1, xmm12
    vmovss  dword ptr [rbx+2BCh], xmm2
  }
  G_Main_RunThink(_RBX);
LABEL_48:
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
GMovingPlatforms::UpdateMovingPlatformEntityInternal
==============
*/
void GMovingPlatforms::UpdateMovingPlatformEntityInternal(gentity_s *ent, const vec3_t *deltaOrigin, const vec3_t *deltaAngles)
{
  const vec3_t *v3; 
  int time; 
  EntityTagInfo *tagInfo; 
  __int64 p_extraDataUnion; 
  void (__fastcall *reached)(gentity_s *); 
  tmat33_t<vec3_t> v21; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v3 = deltaAngles;
  _RBX = deltaOrigin;
  _RDI = ent;
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    GTrajectory::GTrajectory((GTrajectory *)&v21, _RDI);
    if ( _RDI->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1738, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "ent->s.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    time = _RDI->s.lerp.u.anonymous.data[5];
    if ( time <= 0 )
      time = level.time;
    BgTrajectory::EvaluateTrajectories((BgTrajectory *)&v21, time, &_RDI->r.currentOrigin, &_RDI->r.currentAngles);
    SV_LinkEntity(_RDI);
    return;
  }
  if ( !ent->tagInfo )
  {
LABEL_14:
    GMovingPlatforms::MoverTeam(ent, deltaOrigin, deltaAngles);
    return;
  }
  if ( GMovingPlatformClient::CanPush(ent) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  xmm3, dword ptr [rbx+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@461c4000
    }
    G_PhysicsObject_WarpToCurrentTransform(_RDI, 0);
    deltaAngles = v3;
    deltaOrigin = _RBX;
    ent = _RDI;
    goto LABEL_14;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) )
    goto LABEL_42;
  tagInfo = _RDI->tagInfo;
  if ( tagInfo->animScriptedDataInUse )
    goto LABEL_42;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 59, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( _RDI->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 60, ASSERT_TYPE_ASSERT, "(!ent->tagInfo->animScriptedDataInUse)", "%s\n\tLinked rotation data is not valid on linked entities that are animscripted.  They share the same memory space.\n", "!ent->tagInfo->animScriptedDataInUse") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 61, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ))", "%s\n\tLinked rotation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
    __debugbreak();
  p_extraDataUnion = (__int64)&_RDI->tagInfo->extraDataUnion;
  if ( _RDI->tagInfo == (EntityTagInfo *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1769, ASSERT_TYPE_ASSERT, "( linkedRotationData )", (const char *)&queryFormat, "linkedRotationData") )
    __debugbreak();
  if ( _RDI->s.eType == ET_SCRIPTMOVER && *(_BYTE *)(p_extraDataUnion + 36) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1493, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
      __debugbreak();
    G_CalcFixedLinkTargetAxis(_RDI, &axis);
    if ( G_VerifyLinkedMoveTarget(_RDI, &axis.m[3], 2065) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+axis+24h]
        vmovss  xmm1, dword ptr [rsp+0C8h+axis+28h]
        vmovss  dword ptr [rdi+130h], xmm0
        vmovss  xmm0, dword ptr [rsp+0C8h+axis+2Ch]
        vmovss  dword ptr [rdi+138h], xmm0
        vmovss  dword ptr [rdi+134h], xmm1
      }
    }
    if ( *(_DWORD *)p_extraDataUnion <= 1u )
    {
      AnglesToAxis((const vec3_t *)(p_extraDataUnion + 12), &v21);
      MatrixMultiply(&v21, (const tmat33_t<vec3_t> *)&axis, &out);
      AxisToAngles(&out, &_RDI->r.currentAngles);
      G_SetOriginAndAngle(_RDI, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 1);
    }
    else
    {
      BgTrajectory::LegacyEvaluateTrajectory((const trajectory_t_secure *)p_extraDataUnion, level.time, &_RDI->r.currentAngles);
      AnglesToAxis(&_RDI->r.currentAngles, &v21);
      MatrixMultiply(&v21, (const tmat33_t<vec3_t> *)&axis, &out);
      AxisToAngles(&out, &_RDI->r.currentAngles);
      G_SetOriginAndAngle(_RDI, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 1);
      if ( level.time >= *(_DWORD *)(p_extraDataUnion + 4) + *(_DWORD *)(p_extraDataUnion + 8) )
      {
        reached = G_Main_GetEntHandlerList(_RDI)->reached;
        if ( reached )
          reached(_RDI);
      }
    }
    _RDI->s.lerp.pos.trType = TR_INTERPOLATE;
    _RDI->s.lerp.apos.trType = TR_INTERPOLATE;
    SV_LinkEntity(_RDI);
  }
  else
  {
LABEL_42:
    G_GeneralLink(_RDI);
  }
}

/*
==============
GMovingPlatformClient::UpdatePlatformTrace
==============
*/
void GMovingPlatformClient::UpdatePlatformTrace(GMovingPlatformClient *this, gentity_s *clientEnt, int forceLongTrace)
{
  playerState_s *ps; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  gclient_s *client; 
  int v14; 
  __int64 m_movingPlatformEntity; 
  gentity_s *v16; 
  int number; 
  int entity; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  char v20; 
  bool IsMoverOptimized; 
  unsigned int *p_movingPlatforms; 
  bool v23; 
  GMovingPlatformClient *ClientFromGEntity; 
  int clipmask; 
  unsigned int EntityHitId; 
  gentity_s *v52; 
  unsigned int Instance; 
  char v54; 
  GMovingPlatforms *MovingPlatforms; 
  unsigned int v56; 
  GHandler *Handler; 
  unsigned int m_contactEnt; 
  int v59; 
  GHandler *v60; 
  unsigned int v88; 
  GHandler *v90; 
  int v91; 
  int v96; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  GHandler *v98; 
  GHandler *v99; 
  GHandler *v100; 
  Bounds *bounds; 
  __int64 passEntityNum; 
  char v103; 
  int integer; 
  int v105; 
  BgTrace v107; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outUp; 
  vec3_t forward; 
  vec3_t v112; 
  vec3_t right; 
  trace_t results; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v116; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 292, ASSERT_TYPE_ASSERT, "(clientEnt)", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  ps = G_GetEntityPlayerState(clientEnt);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 295, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v11 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    if ( !G_MovingPlatforms_DoesMoveTypeSupportMovers(clientEnt) )
    {
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      return;
    }
    if ( ps->groundEntityNum != 2047 )
      this->m_lastValidGroundTime = level.time;
    v12 = DVARINT_movingPlatformTrackLastPlatformInAirTimerMS;
    if ( !DVARINT_movingPlatformTrackLastPlatformInAirTimerMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformTrackLastPlatformInAirTimerMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v105 = level.time - this->m_lastValidGroundTime;
    integer = v12->current.integer;
    client = clientEnt->client;
    if ( client && (client->flags & 0x20) != 0 )
    {
      if ( BGMovingPlatforms::IsOnMovingPlatform(ps) && G_IsEntityInUse(ps->movingPlatforms.m_movingPlatformEntity) )
        return;
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      clientEnt->client->flags &= ~0x20u;
    }
    v14 = 0;
    m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
    v16 = NULL;
    if ( !G_EntIsLinked(clientEnt) && !BG_IsTurretActive(ps) || (v103 = 0, (ps->linkFlags.m_flags[0] & 4) != 0) )
      v103 = 1;
    number = clientEnt->s.number;
    entity = ps->vehicleState.entity;
    __asm
    {
      vmovaps [rsp+220h+var_40], xmm6
      vmovaps [rsp+220h+var_50], xmm7
      vmovaps [rsp+220h+var_60], xmm8
      vmovaps [rsp+220h+var_70], xmm9
    }
    PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(number);
    BgTrace::BgTrace(&v107, PlayerTraceInfo);
    v20 = 0;
    if ( entity == 2047 )
      v20 = v103;
    if ( !v20 )
    {
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      goto LABEL_86;
    }
    IsMoverOptimized = 0;
    p_movingPlatforms = (unsigned int *)&ps->movingPlatforms;
    if ( BGMovingPlatforms::IsOnMovingPlatform(ps) )
      IsMoverOptimized = BGMovingPlatforms::IsMoverOptimized(&g_entities[*p_movingPlatforms].s);
    v23 = BGMovingPlatforms::IsOnMovingPlatform(ps) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xDu) && !BG_IsPlayerZeroG(ps);
    __asm { vmovss  xmm9, cs:__real@3f800000 }
    if ( forceLongTrace )
      goto LABEL_41;
    if ( v23 )
    {
      if ( !IsMoverOptimized )
      {
LABEL_41:
        ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(clientEnt);
        if ( !ClientFromGEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 377, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
          __debugbreak();
        BGMovingPlatformClient::ResolvePlatformUp(ClientFromGEntity, ps, &outUp);
        __asm
        {
          vmovss  xmm3, cs:LONG_TRACE_DOWN
          vmovss  xmm8, cs:__real@3c23d70a
          vmulss  xmm0, xmm8, dword ptr [rbp+120h+outUp]
          vaddss  xmm1, xmm0, dword ptr [rdi+30h]
          vmulss  xmm0, xmm8, dword ptr [rbp+120h+outUp+4]
          vmulss  xmm2, xmm3, dword ptr [rbp+120h+outUp+4]
        }
        clipmask = clientEnt->clipmask;
        __asm
        {
          vmovss  dword ptr [rbp+120h+start], xmm1
          vaddss  xmm5, xmm0, dword ptr [rdi+34h]
          vmulss  xmm0, xmm8, dword ptr [rbp+120h+outUp+8]
          vmovss  dword ptr [rbp+120h+start+4], xmm5
          vaddss  xmm4, xmm0, dword ptr [rdi+38h]
          vmulss  xmm0, xmm3, dword ptr [rbp+120h+outUp]
          vaddss  xmm1, xmm0, xmm1
          vmovss  dword ptr [rbp+120h+end], xmm1
          vmulss  xmm1, xmm3, dword ptr [rbp+120h+outUp+8]
          vaddss  xmm0, xmm2, xmm5
          vaddss  xmm2, xmm1, xmm4
          vmovss  dword ptr [rbp+120h+end+8], xmm2
          vmovss  dword ptr [rbp+120h+start+8], xmm4
          vmovss  dword ptr [rbp+120h+end+4], xmm0
        }
        BgTrace::LegacyTraceHandler(&v107, PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &clientEnt->r.box, ps->clientNum, clipmask & 0xFDFFBFFF, ps);
        EntityHitId = Trace_GetEntityHitId(&results);
        if ( results.allsolid || results.startsolid )
        {
          __asm
          {
            vmovss  xmm4, cs:__real@40a00000
            vmovss  xmm1, dword ptr [rbp+120h+start]
            vmulss  xmm3, xmm4, dword ptr [rbp+120h+outUp+4]
            vmulss  xmm2, xmm4, dword ptr [rbp+120h+outUp]
            vsubss  xmm2, xmm1, xmm2
            vmovss  xmm1, dword ptr [rbp+120h+start+4]
            vmovss  dword ptr [rbp+120h+end], xmm2
            vsubss  xmm2, xmm1, xmm3
            vmulss  xmm3, xmm4, dword ptr [rbp+120h+outUp+8]
            vmovss  xmm1, dword ptr [rbp+120h+start+8]
            vmovss  dword ptr [rbp+120h+end+4], xmm2
            vsubss  xmm2, xmm1, xmm3
            vmovss  dword ptr [rbp+120h+end+8], xmm2
          }
          v52 = &g_entities[*p_movingPlatforms];
          Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v52);
          PhysicsQuery_LegacyCapsuleBrushEntityTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &clientEnt->r.box, clientEnt->clipmask & 0xFDFFBFFF, Instance, v52->s.index.brushModel, &v52->r.currentOrigin, &v52->r.currentAngles, ps);
          __asm
          {
            vmovss  xmm0, [rbp+120h+results.fraction]
            vcomiss xmm0, xmm9
          }
          if ( v54 )
            EntityHitId = *p_movingPlatforms;
        }
        else
        {
          __asm
          {
            vmovss  xmm0, [rbp+120h+results.fraction]
            vcomiss xmm0, xmm8
          }
        }
        MovingPlatforms = GMovingPlatforms::GetMovingPlatforms();
        if ( MovingPlatforms->ShouldJumpBetweenPlatforms(MovingPlatforms) )
        {
          v56 = m_movingPlatformEntity;
          if ( EntityHitId != 2047 )
            v56 = EntityHitId;
          EntityHitId = v56;
        }
        else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_movingPlatformJumpMomentumFix2, "movingPlatformJumpMomentumFix2") && v105 <= integer && EntityHitId != (_DWORD)m_movingPlatformEntity && ps->groundEntityNum == 2047 )
        {
          EntityHitId = m_movingPlatformEntity;
        }
        goto LABEL_63;
      }
    }
    else if ( !IsMoverOptimized )
    {
      goto LABEL_57;
    }
    if ( ps->groundEntityNum == 2047 && v105 <= integer )
    {
      EntityHitId = m_movingPlatformEntity;
LABEL_63:
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      if ( EntityHitId == 2047 )
      {
        v14 = 0;
        v16 = NULL;
      }
      else
      {
        if ( EntityHitId >= 0x800 )
        {
          LODWORD(passEntityNum) = 2048;
          LODWORD(bounds) = EntityHitId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 451, ASSERT_TYPE_ASSERT, "(unsigned)( entBelowPlayer ) < (unsigned)( ( 2048 ) )", "entBelowPlayer doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", bounds, passEntityNum) )
            __debugbreak();
        }
        v16 = &g_entities[EntityHitId];
        if ( v16 && BGMovingPlatforms::IsPlatformType(v16->s.eType) )
        {
          Handler = GHandler::getHandler();
          BGMovingPlatformPS::SetMoverEntityID(&ps->movingPlatforms, ps, Handler, m_movingPlatformEntity, EntityHitId, 0, 1);
          v14 = 0;
          goto LABEL_86;
        }
        v14 = 0;
      }
      m_contactEnt = this->m_contactEnt;
      if ( m_contactEnt )
      {
        if ( m_contactEnt != 2047 )
        {
          if ( m_contactEnt >= 0x800 )
          {
            LODWORD(passEntityNum) = 2048;
            LODWORD(bounds) = this->m_contactEnt;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 468, ASSERT_TYPE_ASSERT, "(unsigned)( m_contactEnt ) < (unsigned)( ( 2048 ) )", "m_contactEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", bounds, passEntityNum) )
              __debugbreak();
          }
          v16 = &g_entities[this->m_contactEnt];
        }
        if ( v16 && BGMovingPlatforms::IsPlatformType(v16->s.eType) )
        {
          v59 = v16->s.number;
          v60 = GHandler::getHandler();
          BGMovingPlatformPS::SetMoverEntityID(&ps->movingPlatforms, ps, v60, m_movingPlatformEntity, v59, 1, 0);
        }
      }
      else if ( (unsigned int)m_movingPlatformEntity < 0x7FE )
      {
        if ( clientEnt->client )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm8, xmm0, cs:__real@3c010204
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm6, xmm6, xmm6
            vucomiss xmm8, xmm6
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm7, xmm0, cs:__real@3c010204
          }
          AngleVectors(&ps->viewangles, &forward, &right, NULL);
          __asm
          {
            vmulss  xmm2, xmm8, dword ptr [rbp+120h+forward]
            vmulss  xmm4, xmm7, dword ptr [rbp+120h+right+4]
            vmulss  xmm3, xmm7, dword ptr [rbp+120h+right]
            vaddss  xmm3, xmm3, xmm2
            vmulss  xmm2, xmm8, dword ptr [rbp+120h+forward+4]
            vaddss  xmm5, xmm4, xmm2
            vmulss  xmm0, xmm3, xmm3
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm1, xmm1, xmm0
            vsqrtss xmm2, xmm1, xmm1
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm0, xmm2, xmm9, xmm0
            vdivss  xmm1, xmm9, xmm0
            vmulss  xmm3, xmm3, xmm1
            vmulss  xmm0, xmm3, cs:__real@41200000
            vmulss  xmm4, xmm5, xmm1
            vaddss  xmm1, xmm0, dword ptr [rdi+30h]
            vmulss  xmm2, xmm4, cs:__real@41200000
            vaddss  xmm0, xmm2, dword ptr [rdi+34h]
            vmovss  dword ptr [rbp+120h+var_150], xmm1
            vmovss  xmm1, dword ptr [rdi+38h]
          }
          v16 = &g_entities[m_movingPlatformEntity];
          __asm
          {
            vmovss  dword ptr [rbp+120h+var_150+8], xmm1
            vmovss  dword ptr [rbp+120h+forward+8], xmm6
            vmovss  dword ptr [rbp+120h+forward], xmm3
            vmovss  dword ptr [rbp+120h+forward+4], xmm4
            vmovss  dword ptr [rbp+120h+var_150+4], xmm0
          }
          v88 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v16);
          PhysicsQuery_LegacyCapsuleBrushEntityTrace(PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &v112, &clientEnt->r.box, clientEnt->clipmask & 0xFDFFBFFF, v88, v16->s.index.brushModel, &v16->r.currentOrigin, &v16->r.currentAngles, ps);
          __asm
          {
            vmovss  xmm0, [rbp+120h+results.fraction]
            vcomiss xmm0, xmm9
          }
          if ( v54 )
          {
            v90 = GHandler::getHandler();
            BGMovingPlatformPS::SetMoverEntityID(&ps->movingPlatforms, ps, v90, m_movingPlatformEntity, m_movingPlatformEntity, 1, 0);
          }
        }
      }
LABEL_86:
      v91 = BGMovingPlatforms::IsOnMovingPlatform(ps);
      __asm
      {
        vmovaps xmm9, [rsp+220h+var_70]
        vmovaps xmm8, [rsp+220h+var_60]
        vmovaps xmm7, [rsp+220h+var_50]
        vmovaps xmm6, [rsp+220h+var_40]
      }
      if ( v91 )
      {
        if ( v16 )
        {
          v96 = 1;
          if ( (v16->flags.m_flags[0] & 0x20) != 0 )
            goto LABEL_91;
        }
      }
      else
      {
        v16 = NULL;
      }
      v96 = 0;
LABEL_91:
      g_serverMoverWorldUpInvalid = 0;
      if ( v16 )
      {
        if ( WorldUpReferenceFrame::HasValidWorldUpInPs(ps) && v96 && v16->s.number != ps->worldUpRefEnt && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xFu) && !GUtils::AreEntsInSameLinkTree(&g_entities[ps->worldUpRefEnt], v16) )
        {
          Com_PrintWarning(1, "SetWorldUpReference() is being used on an entity that is not linked to or the actual moving platform the player is on.\n");
          g_serverMoverWorldUpInvalid = 1;
        }
        p_otherFlags = &ps->otherFlags;
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xDu) )
          v14 = 1;
      }
      else
      {
        p_otherFlags = &ps->otherFlags;
      }
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xEu) )
      {
        if ( !v14 || !v96 )
        {
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0xEu);
          BgTrace::LegacyTraceHandler(&v107, PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &ps->origin, &clientEnt->r.box, ps->clientNum, clientEnt->clipmask & 0xFDFFBFFF, ps);
          if ( results.allsolid )
          {
            v100 = GHandler::getHandler();
            BGMovingPlatforms::SetAlternateCollision(ps, v100);
          }
        }
      }
      else if ( v14 && v96 )
      {
        v98 = GHandler::getHandler();
        BGMovingPlatforms::SetAlternateCollision(ps, v98);
        BgTrace::LegacyTraceHandler(&v107, PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &ps->origin, &clientEnt->r.box, ps->clientNum, clientEnt->clipmask & 0xFDFFBFFF, ps);
        if ( results.allsolid )
        {
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0xEu);
        }
        else
        {
          AnglesToAxis(&v16->r.currentAngles, &axis);
          v99 = GHandler::getHandler();
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v116, ps, v99);
          WorldUpReferenceFrame::GetUpContribution(&v116, &axis.m[2]);
        }
      }
      return;
    }
LABEL_57:
    EntityHitId = ps->groundEntityNum;
    goto LABEL_63;
  }
}

/*
==============
GMovingPlatforms::UpdatePlayerLocalOffset
==============
*/
void GMovingPlatforms::UpdatePlayerLocalOffset(playerState_s *ps)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  __int64 m_movingPlatformEntity; 
  __int64 v5; 
  __int64 v6; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> out; 

  v1 = DVARBOOL_killswitch_mover_killcam_timespsace_fix_enabled;
  if ( !DVARBOOL_killswitch_mover_killcam_timespsace_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mover_killcam_timespsace_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled || !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    goto LABEL_17;
  v3 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 159, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_usePmoveMoverSystem, \"usePmoveMoverSystem\" ))", (const char *)&queryFormat, "!Dconst_GetBool( usePmoveMoverSystem )") )
    __debugbreak();
  m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
  if ( (_DWORD)m_movingPlatformEntity != 2047 )
  {
    if ( (unsigned int)m_movingPlatformEntity >= 0x800 )
    {
      LODWORD(v6) = 2048;
      LODWORD(v5) = ps->movingPlatforms.m_movingPlatformEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( moverId ) < (unsigned)( ( 2048 ) )", "moverId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    AnglesAndOriginToMatrix43(&g_entities[m_movingPlatformEntity].r.currentAngles, &g_entities[m_movingPlatformEntity].r.currentOrigin, &result);
    MatrixInverseOrthogonal43(&result, &out);
    MatrixTransformVector43(&ps->origin, &out, &ps->movingPlatforms.m_moverPlayerOffset);
  }
  else
  {
LABEL_17:
    ps->movingPlatforms.m_moverPlayerOffset.v[2] = 0.0;
    *(_QWORD *)ps->movingPlatforms.m_moverPlayerOffset.v = 0i64;
  }
}

