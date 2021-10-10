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
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 2169, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2510, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
    goto LABEL_11;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
    __debugbreak();
  if ( !ps->activeExecutionIsVictim )
  {
LABEL_11:
    ps->origin.v[0] = ps->origin.v[0] + this->m_moverAppliedDelta.v[0];
    ps->origin.v[1] = ps->origin.v[1] + this->m_moverAppliedDelta.v[1];
    ps->origin.v[2] = ps->origin.v[2] + this->m_moverAppliedDelta.v[2];
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
  gentity_s *v12; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  float v15; 
  float fraction; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  const dvar_t *v23; 
  vec3_t trBase; 
  __int64 v26; 
  vec3_t start; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  v26 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "GMovingPlatforms BoltImpactEffectToMovingPlatform");
  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  if ( allowBolt && GMovingPlatforms::ms_instance->ShouldHandleAsMovingPlatformThatIsActuallyMoving(GMovingPlatforms::ms_instance, other) && (other->flags.m_flags[0] & 0x8000) == 0 )
  {
    if ( createTempEnt )
    {
      v12 = G_Utils_SpawnEventEntity(&ent->r.currentOrigin, event);
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(Instance, ent->s.weaponHandle);
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 448, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      Instance->SetWeapon(Instance, &v12->s.weaponHandle, Weapon);
      v12->s.surfType = ent->s.surfType;
      ent->r.eventTime = level.time;
    }
    else
    {
      v12 = ent;
      G_Utils_AddEvent(ent, event, eventParm);
    }
    if ( additionalTrace )
    {
      *(_QWORD *)start.v = *(_QWORD *)ent->r.currentOrigin.v;
      v15 = ent->r.currentOrigin.v[2];
      start.v[2] = v15 + 30.0;
      end.v[0] = start.v[0];
      end.v[1] = start.v[1];
      end.v[2] = v15 - 30.0;
      G_Missile_Trace(ent, &results, &start, &end, &ent->r.box, ent->s.number, 2047, baseEnt->clipmask, 1);
      if ( results.fraction < 1.0 && results.hitType == TRACE_HITTYPE_ENTITY && BGMovingPlatforms::IsMovingPlatform(results.hitId) && BGMovingPlatforms::IsPlatformType(g_entities[results.hitId].s.eType) )
      {
        fraction = results.fraction;
        v12->r.currentOrigin.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
        v12->r.currentOrigin.v[1] = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
        v12->r.currentOrigin.v[2] = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
      }
    }
    v12->s.otherEntityNum = other->s.number;
    v12->s.lerp.u.anonymous.data[4] |= 1u;
    v17 = v12->r.currentOrigin.v[0] - other->r.currentOrigin.v[0];
    v18 = v12->r.currentOrigin.v[1] - other->r.currentOrigin.v[1];
    v19 = v12->r.currentOrigin.v[2] - other->r.currentOrigin.v[2];
    AnglesToAxis(&other->r.currentAngles, &axis);
    trBase.v[0] = (float)((float)(v18 * axis.m[0].v[1]) + (float)(v17 * axis.m[0].v[0])) + (float)(v19 * axis.m[0].v[2]);
    trBase.v[1] = (float)((float)(v18 * axis.m[1].v[1]) + (float)(v17 * axis.m[1].v[0])) + (float)(v19 * axis.m[1].v[2]);
    trBase.v[2] = (float)((float)(v18 * axis.m[2].v[1]) + (float)(v17 * axis.m[2].v[0])) + (float)(v19 * axis.m[2].v[2]);
    Trajectory_SetTrBase(&v12->s.lerp.pos, &trBase);
    v20 = v12->r.currentOrigin.v[0];
    v21 = v12->r.currentOrigin.v[1];
    v22 = v12->r.currentOrigin.v[2];
    G_SetOriginAndAngle(v12, &trBase, &ent->r.currentAngles, 1, 1);
    v12->s.lerp.pos.trDelta.v[0] = v20;
    v12->s.lerp.pos.trDelta.v[1] = v21;
    v12->s.lerp.pos.trDelta.v[2] = v22;
    v23 = DVARBOOL_killswitch_mover_missile_impact_lod_fix_enabled;
    if ( !DVARBOOL_killswitch_mover_missile_impact_lod_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mover_missile_impact_lod_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
      GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&v12->flags, GameModeFlagValues::ms_mpValue, 0x25u);
    Sys_ProfEndNamedEvent();
    memset(&trBase, 0, sizeof(trBase));
    return 1i64;
  }
  else
  {
    Sys_ProfEndNamedEvent();
    return 0i64;
  }
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
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  GTrajectory v12; 
  vec3_t outPos; 
  vec3_t outAng; 

  if ( ent->tagInfo )
  {
    *outMove = *deltaOrigin;
    *outAMove = *deltaAngles;
  }
  else if ( ent->s.eType == ET_SCRIPTMOVER && (ent->s.lerp.u.anonymous.data[2] & 0x200) != 0 && ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH && ent->s.lerp.apos.trType == TR_PHYSICS_SERVER_AUTH )
  {
    *outMove = ent->moverInfo.m_deltaOrigin;
    *outAMove = ent->moverInfo.m_deltaAngles;
  }
  else
  {
    GTrajectory::GTrajectory(&v12, ent);
    BgTrajectory::EvaluateTrajectories(&v12, level.time, &outPos, &outAng);
    v7 = outPos.v[1];
    outMove->v[0] = outPos.v[0] - ent->r.currentOrigin.v[0];
    v8 = outPos.v[2];
    outMove->v[1] = v7 - ent->r.currentOrigin.v[1];
    v9 = outAng.v[0];
    outMove->v[2] = v8 - ent->r.currentOrigin.v[2];
    v10 = outAng.v[1];
    outAMove->v[0] = v9 - ent->r.currentAngles.v[0];
    v11 = outAng.v[2];
    outAMove->v[1] = v10 - ent->r.currentAngles.v[1];
    outAMove->v[2] = v11 - ent->r.currentAngles.v[2];
  }
}

/*
==============
GMovingPlatforms::ComputeMovingPlatformEntityDeltas
==============
*/
char GMovingPlatforms::ComputeMovingPlatformEntityDeltas(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles, vec3_t *outDeltaOrigin, vec3_t *outDeltaAngles, bool warp)
{
  *(_QWORD *)outDeltaOrigin->v = 0i64;
  outDeltaOrigin->v[2] = 0.0;
  *(_QWORD *)outDeltaAngles->v = 0i64;
  outDeltaAngles->v[2] = 0.0;
  if ( ent->tagInfo )
  {
    if ( GMovingPlatformClient::CanPush(ent) )
    {
      if ( warp )
        G_GeneralLink(ent);
      else
        G_GeneralLinkNoWarp(ent);
      outDeltaOrigin->v[0] = ent->r.currentOrigin.v[0] - prevOrigin->v[0];
      outDeltaOrigin->v[1] = ent->r.currentOrigin.v[1] - prevOrigin->v[1];
      outDeltaOrigin->v[2] = ent->r.currentOrigin.v[2] - prevOrigin->v[2];
      outDeltaAngles->v[0] = ent->r.currentAngles.v[0] - prevAngles->v[0];
      outDeltaAngles->v[1] = ent->r.currentAngles.v[1] - prevAngles->v[1];
      outDeltaAngles->v[2] = ent->r.currentAngles.v[2] - prevAngles->v[2];
      ent->r.currentOrigin.v[0] = prevOrigin->v[0];
      ent->r.currentOrigin.v[1] = prevOrigin->v[1];
      ent->r.currentOrigin.v[2] = prevOrigin->v[2];
      ent->r.currentAngles.v[0] = prevAngles->v[0];
      ent->r.currentAngles.v[1] = prevAngles->v[1];
      ent->r.currentAngles.v[2] = prevAngles->v[2];
      SV_LinkEntity(ent);
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
  bool v12; 
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
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionMantleFloorFix, "playerCharacterCollisionMantleFloorFix") && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerState->pm_flags, ACTIVE, 5u) || !VecNCompareCustomEpsilon(g_entities[EntityPlayerState->movingPlatforms.m_movingPlatformEntity].s.lerp.pos.trDelta.v, vec3_origin.v, 0.001, 3) || !VecNCompareCustomEpsilon(g_entities[EntityPlayerState->movingPlatforms.m_movingPlatformEntity].s.lerp.apos.trDelta.v, vec3_origin.v, 0.001, 3) )
        return;
      v11 = 1;
    }
    v12 = v11;
    if ( !BGMovingPlatforms::IsOnMovingPlatform(EntityPlayerState) )
      v12 = 1;
    if ( !BG_IsPlayerZeroG(EntityPlayerState) || BG_IsPlayerZeroGWalking(EntityPlayerState) && !v12 )
    {
      number = platform->s.number;
      m_movingPlatformEntity = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
      Handler = GHandler::getHandler();
      BGMovingPlatformPS::SetMoverEntityID(&EntityPlayerState->movingPlatforms, EntityPlayerState, Handler, m_movingPlatformEntity, number, v12, 1);
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
  playerState_s *EntityPlayerState; 
  vec3_t *p_deltaAngles; 
  gentity_s *v8; 
  float v9; 
  float v10; 
  GMovingPlatforms *MovingPlatforms; 
  int v12; 
  float v13; 
  float v14; 
  float v15; 
  __int16 viewlocked_entNum; 
  gentity_s *GEntity; 
  gentity_s *v18; 
  __int64 v19; 
  GTurret *v20; 
  vec3_t *outNewOrigin; 
  vec3_t trBase; 
  vec3_t platformAngles; 
  vec3_t outAppliedDelta; 

  EntityPlayerState = G_GetEntityPlayerState(character);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 969, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)this->m_moverAppliedDelta.v = 0i64;
  this->m_moverAppliedDelta.v[2] = 0.0;
  if ( BGMovingPlatforms::IsMovingPlatform(this->m_deferredData.platformId) )
  {
    if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    if ( GMovingPlatforms::ms_instance->ShouldAllowPlatformMovement(GMovingPlatforms::ms_instance, character) && G_IsEntityInUse(this->m_deferredData.platformId) )
    {
      p_deltaAngles = &this->m_deferredData.deltaAngles;
      v8 = &g_entities[this->m_deferredData.platformId];
      GMovingPlatformClient::TryPushingClient(this, character, v8, &this->m_deferredData.deltaOrigin, &this->m_deferredData.deltaAngles, &trBase);
      v9 = trBase.v[1];
      character->r.currentOrigin.v[0] = trBase.v[0];
      character->r.currentOrigin.v[2] = trBase.v[2];
      character->r.currentOrigin.v[1] = v9;
      Trajectory_SetTrBase(&character->s.lerp.pos, &trBase);
      G_PhysicsCharacterProxy_Teleport(character, 0);
      *outNeedsBroadPhaseWarp = 1;
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0xDu) )
      {
        v10 = v8->r.currentAngles.v[1] - this->m_deferredData.deltaAngles.v[1];
        platformAngles.v[0] = v8->r.currentAngles.v[0] - p_deltaAngles->v[0];
        platformAngles.v[2] = v8->r.currentAngles.v[2] - this->m_deferredData.deltaAngles.v[2];
        platformAngles.v[1] = v10;
        MovingPlatforms = GMovingPlatforms::GetMovingPlatforms();
        v12 = MovingPlatforms->ShouldUseImprovedAimAlgorithm(MovingPlatforms);
        BGMovingPlatformClient::UpdatePlayerAngles(this, EntityPlayerState, &this->m_deferredData.deltaAngles, &platformAngles, &outAppliedDelta, v12);
        BGMovingPlatforms::UpdateDirection(&EntityPlayerState->velocity, &v8->r.currentAngles, &this->m_deferredData.deltaAngles);
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerState->pm_flags, ACTIVE, 5u) )
        {
          BGMovingPlatforms::UpdatePoint(&EntityPlayerState->mantleState.startPosition, &v8->r.currentOrigin, &v8->r.currentAngles, &this->m_deferredData.deltaAngles, &this->m_deferredData.deltaOrigin);
          if ( p_deltaAngles->v[0] != 0.0 || this->m_deferredData.deltaAngles.v[1] != 0.0 || this->m_deferredData.deltaAngles.v[2] != 0.0 || this->m_deferredData.deltaOrigin.v[0] != 0.0 || this->m_deferredData.deltaOrigin.v[1] != 0.0 || this->m_deferredData.deltaOrigin.v[2] != 0.0 )
            EntityPlayerState->mantleState.flags |= 0x1000u;
        }
      }
      v13 = trBase.v[1];
      v14 = trBase.v[0];
      this->m_moverAppliedDelta.v[0] = trBase.v[0] - EntityPlayerState->origin.v[0];
      v15 = trBase.v[2];
      this->m_moverAppliedDelta.v[1] = v13 - EntityPlayerState->origin.v[1];
      this->m_moverAppliedDelta.v[2] = v15 - EntityPlayerState->origin.v[2];
      EntityPlayerState->origin.v[0] = v14;
      EntityPlayerState->origin.v[1] = trBase.v[1];
      EntityPlayerState->origin.v[2] = trBase.v[2];
      if ( BG_IsTurretActive(EntityPlayerState) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerState->pm_flags, ACTIVE, 0x1Cu) )
      {
        viewlocked_entNum = EntityPlayerState->viewlocked_entNum;
        if ( viewlocked_entNum != 2047 )
        {
          GEntity = G_GetGEntity(viewlocked_entNum);
          v18 = GEntity;
          if ( GEntity->s.eType == ET_TURRET )
          {
            if ( !GEntity->turretHandle.m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
              __debugbreak();
            v19 = v18->turretHandle.m_objIndex - 1;
            if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
              __debugbreak();
            if ( (unsigned int)v19 >= 0x80 )
            {
              LODWORD(outNewOrigin) = v19;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", outNewOrigin, 128) )
                __debugbreak();
            }
            if ( !GTurret::ms_turretArray[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
              __debugbreak();
            v20 = GTurret::ms_turretArray[v19];
            if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1051, ASSERT_TYPE_ASSERT, "(turret)", (const char *)&queryFormat, "turret") )
              __debugbreak();
            v20->m_data.userOrigin = trBase;
          }
        }
      }
    }
  }
  else
  {
    GMovingPlatformClient::UnresolvedCollisionOnlyUpdate(this, character, EntityPlayerState);
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
  float v13; 
  int v15; 
  float v16; 
  char v17[8]; 
  BgAntiLagEntityInfo outInfo; 

  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
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
    AnglesToAxis(&outInfo.angles, (tmat33_t<vec3_t> *)outPrev);
    v10 = outInfo.origin.origin.v[1];
    v12 = outInfo.origin.origin.v[2];
    BYTE2(v15) = (unsigned int)(v11 + 80) >> 24;
    LOWORD(v15) = (unsigned int)&outInfo >> 8;
    HIBYTE(v15) = (unsigned __int8)&outInfo;
    LODWORD(outPrev->m[3].v[1]) = LODWORD(outInfo.origin.origin.v[2]) ^ v15 ^ s_antilag_aab_Y ^ LODWORD(outInfo.origin.origin.v[0]);
    LODWORD(outPrev->m[3].v[2]) = LODWORD(v10) ^ LODWORD(v12) ^ v15 ^ s_antilag_aab_Z;
    LODWORD(outPrev->m[3].v[0]) = LODWORD(v10) ^ v15 ^ ~s_antilag_aab_X;
    v13 = outPrev->m[3].v[0];
    memset(v17, 0, sizeof(v17));
    v16 = v13;
    if ( (LODWORD(v13) & 0x7F800000) == 2139095040 || (v16 = outPrev->m[3].v[1], (LODWORD(v16) & 0x7F800000) == 2139095040) || (v16 = outPrev->m[3].v[2], (LODWORD(v16) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )", v16, &outInfo) )
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
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  const gentity_s *v7; 
  const tmat43_t<vec3_t> *v8; 
  const tmat43_t<vec3_t> *v9; 
  unsigned int Instance; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  bool v17; 
  float v18; 
  float v20; 
  float v22; 
  float v24; 
  float v26; 
  float v28; 
  bool v30; 
  float v36; 
  float v38; 
  __int64 v40; 
  hknpBodyId result; 
  const gentity_s *v42; 
  const tmat43_t<vec3_t> *v43; 
  vec3_t angles; 
  vec3_t v45; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> v49; 
  tmat43_t<vec3_t> outPrev; 
  tmat43_t<vec3_t> outCurr; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 

  v7 = player;
  v42 = player;
  *(_QWORD *)v45.v = platformCurrToLocal;
  v8 = platformCurrToLocal;
  v43 = platformPrevToLocal;
  v9 = platformPrevToLocal;
  if ( GMovingPlatformClient::CanPush(childEnt) && !BG_IsCharacterEntity(&childEnt->s) )
  {
    if ( !childEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1935, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( childEnt->s.eType != ET_SCRIPTMOVER || childEnt->s.un.scriptMoverType != 1 )
    {
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, childEnt);
      v12 = Instance;
      if ( Instance != -1 )
      {
        v13 = 0;
        NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance);
        if ( NumRigidBodys )
        {
          v54 = v4;
          v53 = v5;
          v52 = v6;
          _XMM13 = 0i64;
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( !g_physicsServerWorldsCreated )
            {
              LODWORD(v40) = 0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v40) )
                __debugbreak();
            }
            RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v12, v13);
            Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex, &position, &orientation);
            v17 = fsqrt((float)((float)((float)(childEnt->r.currentOrigin.v[1] - position.v[1]) * (float)(childEnt->r.currentOrigin.v[1] - position.v[1])) + (float)((float)(childEnt->r.currentOrigin.v[0] - position.v[0]) * (float)(childEnt->r.currentOrigin.v[0] - position.v[0]))) + (float)((float)(childEnt->r.currentOrigin.v[2] - position.v[2]) * (float)(childEnt->r.currentOrigin.v[2] - position.v[2]))) > 0.0099999998;
            UnitQuatToAngles(&orientation, &angles);
            v18 = 0.0027777778 * childEnt->r.currentAngles.v[2];
            __asm { vroundss xmm3, xmm13, xmm2, 1 }
            v20 = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM3) * 360.0;
            __asm { vroundss xmm3, xmm13, xmm2, 1 }
            v22 = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
            __asm { vroundss xmm3, xmm13, xmm2, 1 }
            v24 = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM3) * 360.0;
            __asm { vroundss xmm3, xmm13, xmm2, 1 }
            v26 = (float)((float)(0.0027777778 * childEnt->r.currentAngles.v[0]) - *(float *)&_XMM3) * 360.0;
            __asm { vroundss xmm3, xmm13, xmm2, 1 }
            v28 = (float)(0.0027777778 * childEnt->r.currentAngles.v[1]) - *(float *)&_XMM3;
            __asm { vroundss xmm3, xmm13, xmm2, 1 }
            angles.v[0] = v20;
            angles.v[1] = v22;
            angles.v[2] = v24;
            if ( fsqrt((float)((float)((float)((float)(v28 * 360.0) - v22) * (float)((float)(v28 * 360.0) - v22)) + (float)((float)(v26 - v20) * (float)(v26 - v20))) + (float)((float)((float)((float)(v18 - *(float *)&_XMM3) * 360.0) - v24) * (float)((float)((float)(v18 - *(float *)&_XMM3) * 360.0) - v24))) > 0.0099999998 || v17 )
            {
              Com_PrintWarning(1, "Moving platform rigid body mismatch is not allowed. This will cause collision errors. Entity %d\n", (unsigned int)childEnt->s.number);
              g_serverMoverDebugRigidBodyMismatch = childEnt->s.number;
            }
            ++v13;
          }
          while ( v13 < NumRigidBodys );
          v7 = v42;
          v9 = v43;
          v8 = *(const tmat43_t<vec3_t> **)v45.v;
        }
        if ( G_DebugMovingPlatforms_GetCurrAndPrevTransforms(v7, childEnt, &outPrev, &outCurr) )
        {
          MatrixMultiply43(&outPrev, v9, &out);
          MatrixMultiply43(&outCurr, v8, &v49);
          v30 = fsqrt((float)((float)((float)(v49.m[3].v[1] - out.m[3].v[1]) * (float)(v49.m[3].v[1] - out.m[3].v[1])) + (float)((float)(v49.m[3].v[0] - out.m[3].v[0]) * (float)(v49.m[3].v[0] - out.m[3].v[0]))) + (float)((float)(v49.m[3].v[2] - out.m[3].v[2]) * (float)(v49.m[3].v[2] - out.m[3].v[2]))) > 0.124;
          AxisToAngles((const tmat33_t<vec3_t> *)&out, &v45);
          _XMM7 = 0i64;
          __asm { vroundss xmm2, xmm7, xmm1, 1 }
          v45.v[0] = (float)((float)(0.0027777778 * v45.v[0]) - *(float *)&_XMM2) * 360.0;
          __asm { vroundss xmm2, xmm7, xmm1, 1 }
          v45.v[1] = (float)((float)(0.0027777778 * v45.v[1]) - *(float *)&_XMM2) * 360.0;
          __asm { vroundss xmm2, xmm7, xmm1, 1 }
          v45.v[2] = (float)((float)(0.0027777778 * v45.v[2]) - *(float *)&_XMM2) * 360.0;
          AxisToAngles((const tmat33_t<vec3_t> *)&v49, &angles);
          __asm { vroundss xmm3, xmm7, xmm2, 1 }
          v36 = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM3) * 360.0;
          __asm { vroundss xmm3, xmm7, xmm2, 1 }
          v38 = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
          __asm { vroundss xmm3, xmm7, xmm2, 1 }
          angles.v[2] = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM3) * 360.0;
          angles.v[0] = v36;
          angles.v[1] = v38;
          if ( fsqrt((float)((float)((float)(v38 - v45.v[1]) * (float)(v38 - v45.v[1])) + (float)((float)(v36 - v45.v[0]) * (float)(v36 - v45.v[0]))) + (float)((float)(angles.v[2] - v45.v[2]) * (float)(angles.v[2] - v45.v[2]))) > 0.0099999998 || v30 )
          {
            Com_PrintWarning(1, "Moving platform sub skeletal displacement is not allowed. This will cause collision errors. Entity %d\n", (unsigned int)g_serverMoverDebugSkeletonMismatch);
            g_serverMoverDebugSkeletonMismatch = childEnt->s.number;
          }
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
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1596, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, v6) )
      __debugbreak();
  }
  v3 = v2;
  return g_entities[v2].moverInfo.m_deltaAngles.v[0] != 0.0 || g_entities[v3].moverInfo.m_deltaAngles.v[1] != 0.0 || g_entities[v3].moverInfo.m_deltaAngles.v[2] != 0.0 || g_entities[v3].moverInfo.m_deltaOrigin.v[0] != 0.0 || g_entities[v3].moverInfo.m_deltaOrigin.v[1] != 0.0 || g_entities[v3].moverInfo.m_deltaOrigin.v[2] != 0.0;
}

/*
==============
GMovingPlatforms::KeyframeMarkedEntities
==============
*/
void GMovingPlatforms::KeyframeMarkedEntities(int numEntities)
{
  unsigned int m_characterCount; 
  __int64 v3; 
  __int64 v4; 
  gentity_s *v5; 
  G_PhysicsObject *v6; 
  unsigned int v7; 
  unsigned int v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  bool v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
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
    v3 = (int)ComCharacterLimits::ms_gameData.m_characterCount;
    v4 = (int)ComCharacterLimits::ms_gameData.m_characterCount;
    do
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
      v5 = &g_entities[v4];
      if ( m_characterCount >= 0x800 )
      {
        LODWORD(updateBroadphaseIfWarping) = 2048;
        LODWORD(canWarp) = m_characterCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v3] )
        goto LABEL_38;
      if ( !GMovingPlatforms::IsEntityKeyframedMover(v5) )
        goto LABEL_38;
      v6 = G_PhysicsObject_Get(v5);
      if ( !v6 )
        goto LABEL_38;
      v7 = v6->physicsInstances[0];
      v8 = v6->physicsInstances[1];
      if ( v7 == -1 && v8 != -1 )
        goto LABEL_38;
      memcpy_0(&dummyEnt, v5, sizeof(dummyEnt));
      v9 = v5->r.currentOrigin.v[0];
      v10 = v5->r.currentOrigin.v[1];
      v11 = v5->r.currentOrigin.v[2];
      v12 = v5->r.currentAngles.v[0];
      v13 = v5->r.currentAngles.v[1];
      v14 = v5->r.currentAngles.v[2];
      position = v5->r.currentOrigin;
      angles = v5->r.currentAngles;
      v15 = v5->tagInfo == NULL;
      deltaOrigin.v[0] = 0.0;
      deltaOrigin.v[1] = 0.0;
      deltaOrigin.v[2] = 0.0;
      deltaAngles.v[0] = 0.0;
      deltaAngles.v[1] = 0.0;
      deltaAngles.v[2] = 0.0;
      if ( v15 )
      {
        if ( !BgTrajectory::IsAnimatedTrajectory(&v5->s.lerp.pos) )
          goto LABEL_30;
      }
      else if ( GMovingPlatformClient::CanPush(v5) )
      {
        G_GeneralLinkNoWarp(v5);
        v16 = v5->r.currentOrigin.v[1] - v10;
        deltaOrigin.v[0] = v5->r.currentOrigin.v[0] - v9;
        v17 = v5->r.currentOrigin.v[2] - v11;
        deltaOrigin.v[1] = v16;
        v18 = v5->r.currentAngles.v[0] - v12;
        deltaOrigin.v[2] = v17;
        v19 = v5->r.currentAngles.v[1] - v13;
        deltaAngles.v[0] = v18;
        v20 = v5->r.currentAngles.v[2];
        v5->r.currentOrigin.v[0] = v9;
        v5->r.currentOrigin.v[1] = v10;
        v5->r.currentOrigin.v[2] = v11;
        deltaAngles.v[2] = v20 - v14;
        deltaAngles.v[1] = v19;
        v5->r.currentAngles.v[0] = v12;
        v5->r.currentAngles.v[1] = v13;
        v5->r.currentAngles.v[2] = v14;
        SV_LinkEntity(v5);
LABEL_30:
        outMove.v[0] = 0.0;
        outMove.v[1] = 0.0;
        outMove.v[2] = 0.0;
        outAMove.v[0] = 0.0;
        outAMove.v[1] = 0.0;
        outAMove.v[2] = 0.0;
        GMovingPlatforms::ComputeMoverPushDeltas(v5, &deltaOrigin, &deltaAngles, &outMove, &outAMove);
        position.v[0] = outMove.v[0] + v5->r.currentOrigin.v[0];
        position.v[1] = outMove.v[1] + v5->r.currentOrigin.v[1];
        position.v[2] = outMove.v[2] + v5->r.currentOrigin.v[2];
        angles.v[0] = outAMove.v[0] + v5->r.currentAngles.v[0];
        angles.v[1] = outAMove.v[1] + v5->r.currentAngles.v[1];
        angles.v[2] = outAMove.v[2] + v5->r.currentAngles.v[2];
      }
      memcpy_0(v5, &dummyEnt, sizeof(gentity_s));
      if ( ((v5->r.modelType - 1) & 0xFD) != 0 )
        AnglesToQuat(&angles, &quat);
      else
        quat = quat_identity;
      if ( v7 != -1 )
        Physics_KeyframeInstanceTo(PHYSICS_WORLD_ID_FIRST, v7, &position, &quat, 1.0, 1, 0, 0.0);
      if ( v8 != -1 )
        Physics_WarpInstanceTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v8, &position, &quat, 0);
LABEL_38:
      ++m_characterCount;
      ++v3;
      ++v4;
    }
    while ( (int)m_characterCount < numEntities );
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
  float v4; 
  void (__fastcall *reached)(gentity_s *); 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1493, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
    __debugbreak();
  G_CalcFixedLinkTargetAxis(ent, &axis);
  if ( G_VerifyLinkedMoveTarget(ent, &axis.m[3], 2065) )
  {
    v4 = axis.m[3].v[1];
    ent->r.currentOrigin.v[0] = axis.m[3].v[0];
    ent->r.currentOrigin.v[2] = axis.m[3].v[2];
    ent->r.currentOrigin.v[1] = v4;
  }
  if ( linkedRotationData->aposLocal.trType <= (unsigned int)TR_INTERPOLATE )
  {
    AnglesToAxis(&linkedRotationData->aposLocal.trBase, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, &out);
    AxisToAngles(&out, &ent->r.currentAngles);
    G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 1, 1);
  }
  else
  {
    BgTrajectory::LegacyEvaluateTrajectory(&linkedRotationData->aposLocal, level.time, &ent->r.currentAngles);
    AnglesToAxis(&ent->r.currentAngles, &in1);
    MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&axis, &out);
    AxisToAngles(&out, &ent->r.currentAngles);
    G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 1, 1);
    if ( level.time >= linkedRotationData->aposLocal.trTime + linkedRotationData->aposLocal.trDuration )
    {
      reached = G_Main_GetEntHandlerList(ent)->reached;
      if ( reached )
        reached(ent);
    }
  }
  ent->s.lerp.pos.trType = TR_INTERPOLATE;
  ent->s.lerp.apos.trType = TR_INTERPOLATE;
  SV_LinkEntity(ent);
}

/*
==============
GMovingPlatforms::MoverPush
==============
*/
void GMovingPlatforms::MoverPush(gentity_s *pusher, const vec3_t *move, const vec3_t *amove)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  const vec3_t *v13; 
  const vec3_t *v15; 
  double v16; 
  vec3_t *p_currentAngles; 
  bool v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  unsigned int v36; 
  int v37; 
  float v38; 
  __int64 v39; 
  playerState_s *EntityPlayerState; 
  const playerState_s *v41; 
  int number; 
  int m_movingPlatformEntity; 
  gentity_s *v44; 
  double v45; 
  GHandler *Handler; 
  double v47; 
  int v48; 
  __int64 v49; 
  __int64 v50; 
  char v51; 
  unsigned int v52; 
  gentity_s *v53; 
  entityType_s eType; 
  playerState_s *v55; 
  __int64 v56; 
  vec3_t *v57; 
  __int16 *v58; 
  vec3_t *v59; 
  __int64 v60; 
  gentity_s *v61; 
  GMovingPlatformClient *v62; 
  int *ignoreEnts; 
  PhysicsQuery_Collected<unsigned short> *collectedEnts; 
  PhysicsQuery_Collected<unsigned short> v65; 
  float v66; 
  vec3_t *amovea; 
  vec3_t *movea; 
  Bounds rotatedBounds; 
  Bounds baseBounds; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v74; 
  __int16 v75[2048]; 
  __int16 v76[2048]; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v86; 

  v86 = v3;
  v13 = move;
  v85 = v4;
  v84 = v5;
  v83 = v6;
  v15 = amove;
  v82 = v7;
  v81 = v8;
  v80 = v9;
  v79 = v10;
  movea = (vec3_t *)move;
  v78 = v11;
  v77 = v12;
  amovea = (vec3_t *)amove;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_MovingPlatform MoverPush");
  v16 = *(double *)&pusher->r.box.halfSize.y;
  *(_OWORD *)baseBounds.midPoint.v = *(_OWORD *)pusher->r.box.midPoint.v;
  p_currentAngles = &pusher->r.currentAngles;
  v18 = pusher->r.currentAngles.v[0] == 0.0;
  *(double *)&baseBounds.halfSize.y = v16;
  if ( v18 && pusher->r.currentAngles.v[1] == 0.0 && pusher->r.currentAngles.v[2] == 0.0 && v15->v[0] == 0.0 && v15->v[1] == 0.0 && v15->v[2] == 0.0 )
  {
    v19 = FLOAT_1_0;
    v20 = baseBounds.midPoint.v[0] + pusher->r.currentOrigin.v[0];
    v21 = baseBounds.midPoint.v[1] + pusher->r.currentOrigin.v[1];
    v22 = baseBounds.midPoint.v[2] + pusher->r.currentOrigin.v[2];
    v23 = baseBounds.halfSize.v[0] + 1.0;
    v24 = baseBounds.halfSize.v[1] + 1.0;
    v25 = baseBounds.halfSize.v[2] + 1.0;
  }
  else
  {
    AnglesToAxis(&pusher->r.currentAngles, &axis);
    Bounds_Transform(&baseBounds, &pusher->r.currentOrigin, &axis, &rotatedBounds);
    v19 = FLOAT_1_0;
    v22 = rotatedBounds.midPoint.v[2];
    v21 = rotatedBounds.midPoint.v[1];
    v20 = rotatedBounds.midPoint.v[0];
    v23 = rotatedBounds.halfSize.v[0] + 1.0;
    v25 = rotatedBounds.halfSize.v[2] + 1.0;
    v24 = rotatedBounds.halfSize.v[1] + 1.0;
  }
  v26 = v21 + v13->v[1];
  v27 = v20 + v13->v[0];
  v66 = v22 + v13->v[2];
  v28 = 0.5 * v13->v[0];
  v29 = v28 + v20;
  v30 = COERCE_FLOAT(LODWORD(v28) & _xmm) + v23;
  v31 = 0.5 * v13->v[1];
  v32 = v31 + v21;
  v33 = COERCE_FLOAT(LODWORD(v31) & _xmm) + v24;
  v34 = 0.5 * v13->v[2];
  v35 = COERCE_FLOAT(LODWORD(v34) & _xmm) + v25;
  aabbMin.v[0] = v29 - v30;
  aabbMin.v[1] = v32 - v33;
  aabbMin.v[2] = (float)(v34 + v22) - v35;
  aabbMax.v[0] = v29 + v30;
  aabbMax.v[1] = v33 + v32;
  rotatedBounds.midPoint.v[0] = v29;
  rotatedBounds.halfSize.v[0] = v30;
  rotatedBounds.midPoint.v[1] = v32;
  rotatedBounds.halfSize.v[1] = v33;
  rotatedBounds.midPoint.v[2] = v34 + v22;
  rotatedBounds.halfSize.v[2] = v35;
  aabbMax.v[2] = (float)(v34 + v22) + v35;
  SV_UnlinkEntity(pusher);
  v36 = 0;
  v65.ids = (unsigned __int16 *)v75;
  v65.count = 0;
  v65.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 24960, 0, NULL, &v65, NULL, 1);
  v37 = 0;
  if ( level.maxclients > 0 )
  {
    v38 = v66;
    do
    {
      if ( (unsigned int)v37 >= 0x800 )
      {
        LODWORD(collectedEnts) = 2048;
        LODWORD(ignoreEnts) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v39 = v37;
      if ( g_entities[v39].r.isInUse != g_entityIsInUse[v37] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v37] )
      {
        EntityPlayerState = G_GetEntityPlayerState(&g_entities[v39]);
        v41 = EntityPlayerState;
        if ( EntityPlayerState )
        {
          number = pusher->s.number;
          m_movingPlatformEntity = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
          if ( number == m_movingPlatformEntity )
            goto LABEL_29;
          v44 = g_entities;
          v45 = *(double *)&g_entities[v39].r.absBox.halfSize.y;
          *(_OWORD *)rotatedBounds.midPoint.v = *(_OWORD *)g_entities[v39].r.absBox.midPoint.v;
          *(double *)&rotatedBounds.halfSize.y = v45;
          Handler = GHandler::getHandler();
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v74, v41, Handler);
          if ( v74.m_axisAdjusted )
          {
            v47 = *(double *)&v44[v39].r.box.halfSize.y;
            *(_OWORD *)baseBounds.midPoint.v = *(_OWORD *)v44[v39].r.box.midPoint.v;
            *(double *)&baseBounds.halfSize.y = v47;
            AnglesToAxis(&v41->viewangles, &axis);
            WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v74, &axis);
            Bounds_Transform(&baseBounds, &v44[v39].r.currentOrigin, &axis, &rotatedBounds);
            baseBounds.halfSize.v[0] = v19 + baseBounds.halfSize.v[0];
            baseBounds.halfSize.v[1] = v19 + baseBounds.halfSize.v[1];
            baseBounds.halfSize.v[2] = v19 + baseBounds.halfSize.v[2];
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(rotatedBounds.midPoint.v[0] - v27) & _xmm) < (float)(v23 + rotatedBounds.halfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(rotatedBounds.midPoint.v[1] - v26) & _xmm) < (float)(v24 + rotatedBounds.halfSize.v[1]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(rotatedBounds.midPoint.v[2] - v38) & _xmm) < (float)(v25 + rotatedBounds.halfSize.v[2]) || number == m_movingPlatformEntity )
          {
LABEL_29:
            v36 = 0;
            v48 = 0;
            if ( v65.count )
            {
              while ( (unsigned __int16)v75[v48] != v37 )
              {
                if ( ++v48 >= v65.count )
                  goto LABEL_32;
              }
            }
            else
            {
LABEL_32:
              if ( (v37 < 0 || (unsigned int)v37 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v37, "signed", v37) )
                __debugbreak();
              v49 = v65.count++;
              v75[v49] = v37;
            }
          }
          else
          {
            v36 = 0;
          }
        }
      }
      ++v37;
    }
    while ( v37 < level.maxclients );
    v15 = amovea;
    p_currentAngles = &pusher->r.currentAngles;
    v13 = movea;
  }
  pusher->r.currentOrigin.v[0] = pusher->r.currentOrigin.v[0] + v13->v[0];
  pusher->r.currentOrigin.v[1] = pusher->r.currentOrigin.v[1] + v13->v[1];
  pusher->r.currentOrigin.v[2] = pusher->r.currentOrigin.v[2] + v13->v[2];
  p_currentAngles->v[0] = v15->v[0] + p_currentAngles->v[0];
  p_currentAngles->v[1] = p_currentAngles->v[1] + v15->v[1];
  p_currentAngles->v[2] = p_currentAngles->v[2] + v15->v[2];
  if ( (pusher->flags.m_flags[0] & 0x20) == 0 || (v50 = 1i64, !GMovingPlatformClient::CanPush(pusher)) )
    v50 = 0i64;
  v51 = 0;
  v52 = 0;
  if ( !v65.count )
    goto LABEL_73;
  do
  {
    v53 = &g_entities[(unsigned __int16)v75[v52]];
    if ( v50 )
    {
      if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      eType = v53->s.eType;
      if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && !GUtils::AreEntsInSameLinkTree(v53, pusher) )
      {
        GScr_AddEntity(pusher);
        GScr_Notify(v53, scr_const.touching_platform, 1u);
      }
    }
    v55 = G_GetEntityPlayerState(v53);
    if ( v55 )
    {
      if ( v53->s.groundEntityNum == pusher->s.number || v55->movingPlatforms.m_movingPlatformEntity == pusher->s.number || (G_PhysicsObject_WarpToCurrentTransform(pusher, 1), SV_LinkEntity(pusher), v51 = 1, GMovingPlatformClient::TestEntityPosition(v53, &v53->r.currentOrigin) == pusher) )
      {
        v56 = v36++;
        v76[v56] = v75[v52];
      }
    }
    ++v52;
  }
  while ( v52 < v65.count );
  if ( !v51 )
  {
LABEL_73:
    if ( !GMovingPlatforms::IsEntityKeyframedMover(pusher) )
      G_PhysicsObject_WarpToCurrentTransform(pusher, 0);
    SV_LinkEntity(pusher);
  }
  if ( v36 )
  {
    v57 = amovea;
    v58 = v76;
    v59 = movea;
    v60 = v36;
    do
    {
      v61 = &g_entities[(unsigned __int16)*v58];
      if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
        __debugbreak();
      v62 = GMovingPlatforms::ms_instance->GetClientFromEntity(GMovingPlatforms::ms_instance, v61);
      if ( v62 )
        GMovingPlatformClient::DeferredAddCharacter(v62, v61, pusher, v59, v57);
      ++v58;
      --v60;
    }
    while ( v60 );
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
  stepSlide.deltaTime = (float)(level.time - level.previousTime) * 0.001;
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
  void (__fastcall *v9)(gentity_s *); 
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
        outMove.v[0] = 0.0;
        outMove.v[1] = 0.0;
        outMove.v[2] = 0.0;
        outAMove.v[0] = 0.0;
        outAMove.v[1] = 0.0;
        outAMove.v[2] = 0.0;
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
            v9 = G_Main_GetEntHandlerList(ent)->reached;
            if ( v9 )
              v9(ent);
          }
        }
      }
      else
      {
        stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
        stepSlide.deltaTime = (float)(level.time - level.previousTime) * 0.001;
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
  gentity_s *v4; 
  playerState_s *EntityPlayerState; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 

  if ( BGMovingPlatforms::IsMovingPlatform(this->m_deferredData.platformId) )
  {
    this->m_deferredData.backupOrigin.v[0] = character->r.currentOrigin.v[0];
    this->m_deferredData.backupOrigin.v[1] = character->r.currentOrigin.v[1];
    this->m_deferredData.backupOrigin.v[2] = character->r.currentOrigin.v[2];
    v4 = &g_entities[this->m_deferredData.platformId];
    EntityPlayerState = G_GetEntityPlayerState(character);
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0xDu) )
    {
      v6 = v4->r.currentOrigin.v[1] - this->m_deferredData.deltaOrigin.v[1];
      v7 = v4->r.currentOrigin.v[0] - this->m_deferredData.deltaOrigin.v[0];
      v8 = v4->r.currentOrigin.v[2] - this->m_deferredData.deltaOrigin.v[2];
      v9 = v4->r.currentAngles.v[1] - this->m_deferredData.deltaAngles.v[1];
      angles.v[0] = v4->r.currentAngles.v[0] - this->m_deferredData.deltaAngles.v[0];
      angles.v[2] = v4->r.currentAngles.v[2] - this->m_deferredData.deltaAngles.v[2];
      angles.v[1] = v9;
      AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
      axis.m[3].v[0] = v7;
      axis.m[3].v[1] = v6;
      axis.m[3].v[2] = v8;
      MatrixInverseOrthogonal43(&axis, &out);
      MatrixTransformVector43(&character->r.currentOrigin, &out, &in1);
      AnglesToAxis(&v4->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
      v10 = v4->r.currentOrigin.v[1];
      axis.m[3].v[0] = v4->r.currentOrigin.v[0];
      axis.m[3].v[2] = v4->r.currentOrigin.v[2];
      axis.m[3].v[1] = v10;
      MatrixTransformVector43(&in1, &axis, &character->r.currentOrigin);
      G_PhysicsCharacterProxy_Teleport(character, 1);
    }
  }
}

/*
==============
GMovingPlatforms::PredictPositions
==============
*/
void GMovingPlatforms::PredictPositions(void)
{
  unsigned int i; 
  gentity_s *v1; 
  GMovingPlatformClient *v2; 
  gentity_s *v3; 
  playerState_s *EntityPlayerState; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  __int64 v10; 
  __int64 v11; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  vec3_t in1; 
  tmat43_t<vec3_t> out; 

  for ( i = 0; ; ++i )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i >= ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    if ( i >= 0x800 )
    {
      LODWORD(v11) = 2048;
      LODWORD(v10) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
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
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 871, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
        __debugbreak();
      if ( BGMovingPlatforms::IsMovingPlatform(v2->m_deferredData.platformId) )
      {
        v2->m_deferredData.backupOrigin.v[0] = v1->r.currentOrigin.v[0];
        v2->m_deferredData.backupOrigin.v[1] = v1->r.currentOrigin.v[1];
        v2->m_deferredData.backupOrigin.v[2] = v1->r.currentOrigin.v[2];
        v3 = &g_entities[v2->m_deferredData.platformId];
        EntityPlayerState = G_GetEntityPlayerState(v1);
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 0xDu) )
        {
          v5 = v3->r.currentOrigin.v[0] - v2->m_deferredData.deltaOrigin.v[0];
          v6 = v3->r.currentOrigin.v[2] - v2->m_deferredData.deltaOrigin.v[2];
          v7 = v3->r.currentOrigin.v[1] - v2->m_deferredData.deltaOrigin.v[1];
          v8 = v3->r.currentAngles.v[1] - v2->m_deferredData.deltaAngles.v[1];
          angles.v[0] = v3->r.currentAngles.v[0] - v2->m_deferredData.deltaAngles.v[0];
          angles.v[2] = v3->r.currentAngles.v[2] - v2->m_deferredData.deltaAngles.v[2];
          angles.v[1] = v8;
          AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
          axis.m[3].v[0] = v5;
          axis.m[3].v[1] = v7;
          axis.m[3].v[2] = v6;
          MatrixInverseOrthogonal43(&axis, &out);
          MatrixTransformVector43(&v1->r.currentOrigin, &out, &in1);
          AnglesToAxis(&v3->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
          v9 = v3->r.currentOrigin.v[1];
          axis.m[3].v[0] = v3->r.currentOrigin.v[0];
          axis.m[3].v[2] = v3->r.currentOrigin.v[2];
          axis.m[3].v[1] = v9;
          MatrixTransformVector43(&in1, &axis, &v1->r.currentOrigin);
          G_PhysicsCharacterProxy_Teleport(v1, 1);
        }
      }
    }
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
  bool v4; 
  bool v5; 
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
        v4 = quat.v[3] != 1.0 && quat.v[3] != -1.0;
        v5 = (float)((float)((float)(in1.v[0] * in1.v[0]) + (float)(in1.v[1] * in1.v[1])) + (float)(in1.v[2] * in1.v[2])) != 0.0;
        if ( v4 )
        {
          QuatToAxis(&quat, &axis);
          AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&in2);
          MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)&in2, &out);
          AxisToAngles(&out, &ent->r.currentAngles);
        }
        if ( v5 )
        {
          AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &in2);
          MatrixTransformVector43(&in1, &in2, &origin);
          G_SetOriginAndAngle(ent, &origin, &ent->r.currentAngles, 1, 1);
          if ( ent->r.isLinked )
            SV_LinkEntity(ent);
        }
        else if ( v4 )
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
  __int64 v4; 
  playerState_s *ps; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  scrContext_t *v9; 
  BgTrace v10; 
  float value; 
  float v12; 
  float v13; 
  trace_t results; 

  v4 = touchingEnt;
  if ( G_MovingPlatforms_DoesMoveTypeSupportMovers(character) && (!BGMovingPlatforms::IsMovingPlatform(v4) || g_entities[v4].s.eType != ET_INVISIBLE) )
  {
    value = 0.0;
    v12 = 0.0;
    v13 = 0.0;
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x100) )
    {
LABEL_14:
      v9 = ScriptContext_Server();
      Scr_AddVector(v9, &value);
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
    BgTrace::BgTrace(&v10, PlayerTraceInfo);
    BgTrace::LegacyTraceHandler(&v10, PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &ps->origin, &character->client->playerBox, ps->clientNum, character->clipmask & 0xFDFFBFFF, ps);
    if ( results.startsolid || results.allsolid )
    {
      value = results.closestPointsPenetration * results.normal.v[0];
      v12 = results.closestPointsPenetration * results.normal.v[1];
      v13 = results.closestPointsPenetration * results.normal.v[2];
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
  double v6; 
  const playerState_s *ps; 
  unsigned __int16 EntityHitId; 
  int skipEntities; 
  Bounds bounds; 
  trace_t results; 

  if ( !BG_IsCharacterEntity(&ent->s) )
    return 0i64;
  v4 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    return 0i64;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = ent->s.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 128, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &ent->s ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &ent->s )") )
    __debugbreak();
  v6 = *(double *)&ent->r.box.halfSize.y;
  *(_OWORD *)bounds.midPoint.v = *(_OWORD *)ent->r.box.midPoint.v;
  *(double *)&bounds.halfSize.y = v6;
  Bounds_ExpandToWidth(&bounds);
  ps = G_GetEntityPlayerState(ent);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 134, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  skipEntities = ent->s.number;
  PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, vOrigin, vOrigin, &bounds, &skipEntities, 1, ent->clipmask & 0xFDFFFFFF, ps, 0, NULL, NULL);
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
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 184, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( trace->fraction < 1.0 && trace->hitType == TRACE_HITTYPE_ENTITY && BGMovingPlatforms::IsMovingPlatform(trace->hitId) )
    return BGMovingPlatforms::IsPlatformType(g_entities[trace->hitId].s.eType);
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
  __int128 v6; 
  playerState_s *EntityPlayerState; 
  gclient_s *client; 
  const dvar_t *v12; 
  double v13; 
  float v14; 
  float v15; 
  float v16; 
  GHandler *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  GMovingPlatformClient *ClientFromGEntity; 
  int clipMask; 
  GHandler *handler; 
  scrContext_t *v26; 
  bool v27; 
  BOOL flags; 
  vec3_t outVel; 
  vec3_t oldAngles; 
  vec3_t oldOrigin; 
  Bounds bounds; 
  BGMovingPlatformSolver v33; 
  __int128 v34; 

  *(_QWORD *)outVel.v = this;
  EntityPlayerState = G_GetEntityPlayerState(check);
  if ( !EntityPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 649, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( EntityPlayerState->movingPlatforms.m_movingPlatformEntity != pusher->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 650, ASSERT_TYPE_ASSERT, "(ps->movingPlatforms.GetMoverEntityID() == pusher->s.number)", "%s\n\tclient = %d, platform = %d, pusher = %d", "ps->movingPlatforms.GetMoverEntityID() == pusher->s.number", check->s.number, EntityPlayerState->movingPlatforms.m_movingPlatformEntity, pusher->s.number) )
    __debugbreak();
  *outNewOrigin = check->r.currentOrigin;
  if ( check->r.box.halfSize.v[0] == 0.0 || check->r.box.halfSize.v[2] == 0.0 )
  {
    Com_PrintWarning(1, "Bounds for player is 0, but is expecting a volume. Penetration will not be resolved.\n");
    return;
  }
  if ( !BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    if ( !Vec3ZeroEpsilon(move) || !Vec3ZeroEpsilon(amove) )
      goto LABEL_16;
LABEL_21:
    v12 = DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix;
    if ( !DVARBOOL_playerCharacterCollisionUnresolvedCollisionFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionUnresolvedCollisionFix") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
      GMovingPlatformClient::UnresolvedCollisionOnlyUpdate(*(GMovingPlatformClient **)outVel.v, check, EntityPlayerState);
    return;
  }
  if ( move->v[0] == 0.0 && move->v[1] == 0.0 && move->v[2] == 0.0 && amove->v[0] == 0.0 && amove->v[1] == 0.0 && amove->v[2] == 0.0 )
    goto LABEL_21;
LABEL_16:
  v34 = v6;
  if ( BGMovingPlatformPS::UseRockingMoverWallFix2() && (client = check->client) != NULL )
  {
    bounds = client->playerBox;
  }
  else
  {
    v13 = *(double *)&check->r.box.halfSize.y;
    *(_OWORD *)bounds.midPoint.v = *(_OWORD *)check->r.box.midPoint.v;
    *(double *)&bounds.halfSize.y = v13;
    Bounds_ExpandToWidth(&bounds);
  }
  v14 = EntityPlayerState->movingPlatforms.m_moverUpAngles.v[0];
  v15 = EntityPlayerState->movingPlatforms.m_moverUpAngles.v[1];
  v16 = EntityPlayerState->movingPlatforms.m_moverUpAngles.v[2];
  v17 = GHandler::getHandler();
  BGMovingPlatformPS::UpdateMoverUpAngles(&EntityPlayerState->movingPlatforms, EntityPlayerState, v17, &bounds);
  v18 = pusher->r.currentOrigin.v[1] - move->v[1];
  oldOrigin.v[0] = pusher->r.currentOrigin.v[0] - move->v[0];
  v19 = pusher->r.currentOrigin.v[2] - move->v[2];
  oldOrigin.v[1] = v18;
  v20 = pusher->r.currentAngles.v[0] - amove->v[0];
  oldOrigin.v[2] = v19;
  v21 = pusher->r.currentAngles.v[1] - amove->v[1];
  oldAngles.v[0] = v20;
  oldAngles.v[2] = pusher->r.currentAngles.v[2] - amove->v[2];
  oldAngles.v[1] = v21;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v22 = (float)level.frameDuration * 0.001;
  flags = BGMovingPlatforms::IsMoverOptimized(&pusher->s);
  ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(check);
  if ( !ClientFromGEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 709, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
    __debugbreak();
  clipMask = check->clipmask & 0xFDFFFFFF;
  handler = GHandler::getHandler();
  BGMovingPlatformSolver::BGMovingPlatformSolver(&v33, EntityPlayerState, ClientFromGEntity, &pusher->r.currentOrigin, &pusher->r.currentAngles, &oldOrigin, &oldAngles, &check->r.currentOrigin, pusher->s.number, pusher->s.index.brushModel, handler, LOCAL_CLIENT_INVALID, &bounds, v22, clipMask, flags);
  if ( BGMovingPlatformSolver::SolveSystem(&v33) )
  {
    if ( v33.m_push )
    {
      BGMovingPlatformSolver::GetLinearPlatformVelcity(&v33, &outVel);
      if ( outVel.v[0] != 0.0 || outVel.v[1] != 0.0 || outVel.v[2] != 0.0 )
      {
        outVel.v[0] = outVel.v[0] * 1.1363636;
        outVel.v[2] = outVel.v[2] * 1.1363636;
        outVel.v[1] = outVel.v[1] * 1.1363636;
        v26 = ScriptContext_Server();
        Scr_AddVector(v26, outVel.v);
        GScr_AddEntity(check);
        GScr_Notify(pusher, scr_const.player_pushed, 2u);
      }
    }
  }
  else
  {
    if ( BGMovingPlatformClient::NeedToResolveCollision(ClientFromGEntity, EntityPlayerState) && !v33.m_actorResolve && EntityPlayerState->pm_type < 7 )
      GMovingPlatformClient::SendUnresolvedCollision(*(GMovingPlatformClient **)outVel.v, pusher, check, v33.m_failedTraceHitId);
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)outVel.v + 16i64))(*(_QWORD *)outVel.v, (unsigned int)pusher->s.number, (unsigned int)v33.m_failedTraceHitId) )
    {
      *outNewOrigin = check->r.currentOrigin;
      if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
      {
        EntityPlayerState->movingPlatforms.m_moverUpAngles.v[0] = v14;
        EntityPlayerState->movingPlatforms.m_moverUpAngles.v[1] = v15;
        EntityPlayerState->movingPlatforms.m_moverUpAngles.v[2] = v16;
      }
      return;
    }
  }
  v27 = v14 != EntityPlayerState->movingPlatforms.m_moverUpAngles.v[0] || v15 != EntityPlayerState->movingPlatforms.m_moverUpAngles.v[1] || v16 != EntityPlayerState->movingPlatforms.m_moverUpAngles.v[2];
  if ( !BGMovingPlatformSolver::ValidateFinalPositionVsStaticWorld(&v33, v27) && BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    EntityPlayerState->movingPlatforms.m_moverUpAngles.v[0] = v14;
    EntityPlayerState->movingPlatforms.m_moverUpAngles.v[1] = v15;
    EntityPlayerState->movingPlatforms.m_moverUpAngles.v[2] = v16;
  }
  BGMovingPlatformSolver::GetTransformedOrigin(&v33, outNewOrigin);
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
  double v7; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  BgTrace v9; 
  Bounds bounds; 
  trace_t results; 

  if ( BGMovingPlatforms::IsOnMovingPlatform(ps) && G_IsEntityInUse(ps->movingPlatforms.m_movingPlatformEntity) )
  {
    ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(character);
    if ( !ClientFromGEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 890, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
      __debugbreak();
    if ( BGMovingPlatformClient::NeedToResolveCollision(ClientFromGEntity, ps) )
    {
      if ( ps->pm_type < 7 )
      {
        v7 = *(double *)&character->r.box.halfSize.y;
        *(_OWORD *)bounds.midPoint.v = *(_OWORD *)character->r.box.midPoint.v;
        *(double *)&bounds.halfSize.y = v7;
        Bounds_ExpandToWidth(&bounds);
        PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(character->s.number);
        BgTrace::BgTrace(&v9, PlayerTraceInfo);
        BgTrace::LegacyTraceHandler(&v9, PHYSICS_WORLD_ID_FIRST, &results, &character->r.currentOrigin, &character->r.currentOrigin, &bounds, character->s.number, character->clipmask & 0xFDFFBFFF, ps);
        if ( results.startsolid )
        {
          if ( !G_IsEntityInUse(ps->movingPlatforms.m_movingPlatformEntity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 914, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ps->movingPlatforms.GetMoverEntityID() ))", (const char *)&queryFormat, "G_IsEntityInUse( ps->movingPlatforms.GetMoverEntityID() )") )
            __debugbreak();
          GMovingPlatformClient::SendUnresolvedCollision(this, &g_entities[ps->movingPlatforms.m_movingPlatformEntity], character, results.hitId);
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
  Vehicle *vehicle; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 

  if ( ent->s.eType == ET_VEHICLE )
  {
    if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 230, ASSERT_TYPE_ASSERT, "(ent->vehicle)", (const char *)&queryFormat, "ent->vehicle") )
      __debugbreak();
    vehicle = ent->vehicle;
    v5 = vehicle->phys.prevOrigin.v[0] - ent->r.currentOrigin.v[0];
    v6 = vehicle->phys.prevOrigin.v[1] - ent->r.currentOrigin.v[1];
    v7 = vehicle->phys.prevOrigin.v[2] - ent->r.currentOrigin.v[2];
    v8 = vehicle->phys.prevAngles.v[1];
    v9 = (float)((float)(v5 * v5) + (float)(v6 * v6)) + (float)(v7 * v7);
    v10 = vehicle->phys.prevAngles.v[0] - ent->r.currentAngles.v[0];
    v11 = vehicle->phys.prevAngles.v[2];
  }
  else
  {
    v12 = prevOrigin->v[1] - ent->r.currentOrigin.v[1];
    v13 = prevOrigin->v[2] - ent->r.currentOrigin.v[2];
    v8 = prevAngles->v[1];
    v9 = (float)((float)(v12 * v12) + (float)((float)(prevOrigin->v[0] - ent->r.currentOrigin.v[0]) * (float)(prevOrigin->v[0] - ent->r.currentOrigin.v[0]))) + (float)(v13 * v13);
    v10 = prevAngles->v[0] - ent->r.currentAngles.v[0];
    v11 = prevAngles->v[2];
  }
  if ( v9 > 0.0000010000001 || (float)((float)((float)((float)(v8 - ent->r.currentAngles.v[1]) * (float)(v8 - ent->r.currentAngles.v[1])) + (float)(v10 * v10)) + (float)((float)(v11 - ent->r.currentAngles.v[2]) * (float)(v11 - ent->r.currentAngles.v[2]))) > 0.0000010000001 )
    GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::SetFlagInternal(&ent->flags, ACTIVE, 5u);
  else
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
  ent->moverInfo.m_deltaOrigin.v[0] = ent->r.currentOrigin.v[0] - prevOrigin->v[0];
  ent->moverInfo.m_deltaOrigin.v[1] = ent->r.currentOrigin.v[1] - prevOrigin->v[1];
  ent->moverInfo.m_deltaOrigin.v[2] = ent->r.currentOrigin.v[2] - prevOrigin->v[2];
  ent->moverInfo.m_deltaAngles.v[0] = ent->r.currentAngles.v[0] - prevAngles->v[0];
  ent->moverInfo.m_deltaAngles.v[1] = ent->r.currentAngles.v[1] - prevAngles->v[1];
  ent->moverInfo.m_deltaAngles.v[2] = ent->r.currentAngles.v[2] - prevAngles->v[2];
}

/*
==============
GMovingPlatforms::UpdateMoverPhysicsVelocity
==============
*/
void GMovingPlatforms::UpdateMoverPhysicsVelocity(gentity_s *ent, const vec3_t *prevOrigin, const vec3_t *prevAngles)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1614, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType == ET_SCRIPTMOVER && (ent->s.lerp.u.anonymous.data[2] & 0x200) != 0 )
  {
    if ( ent->s.lerp.pos.trType != TR_PHYSICS_SERVER_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1617, ASSERT_TYPE_ASSERT, "( ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH )", (const char *)&queryFormat, "ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH") )
      __debugbreak();
    if ( ent->s.lerp.apos.trType != TR_PHYSICS_SERVER_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1618, ASSERT_TYPE_ASSERT, "( ent->s.lerp.apos.trType == TR_PHYSICS_SERVER_AUTH )", (const char *)&queryFormat, "ent->s.lerp.apos.trType == TR_PHYSICS_SERVER_AUTH") )
      __debugbreak();
    ent->moverInfo.m_deltaOrigin.v[0] = ent->r.currentOrigin.v[0] - prevOrigin->v[0];
    ent->moverInfo.m_deltaOrigin.v[1] = ent->r.currentOrigin.v[1] - prevOrigin->v[1];
    ent->moverInfo.m_deltaOrigin.v[2] = ent->r.currentOrigin.v[2] - prevOrigin->v[2];
    ent->moverInfo.m_deltaAngles.v[0] = ent->r.currentAngles.v[0] - prevAngles->v[0];
    ent->moverInfo.m_deltaAngles.v[1] = ent->r.currentAngles.v[1] - prevAngles->v[1];
    ent->moverInfo.m_deltaAngles.v[2] = ent->r.currentAngles.v[2] - prevAngles->v[2];
  }
}

/*
==============
GMovingPlatforms::UpdateMovingPlatformEntity
==============
*/
void GMovingPlatforms::UpdateMovingPlatformEntity(gentity_s *ent)
{
  float v1; 
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  trajectory_t_secure *p_pos; 
  bool IsRagdollTrajectory; 
  const dvar_t *v10; 
  bool v11; 
  GHandler *Handler; 
  bool v13; 
  const DObj *ServerDObjForEnt; 
  const DObj *v15; 
  bool v16; 
  bool v17; 
  bool IsEntityKeyframedMover; 
  bool v19; 
  bool v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t in1; 
  vec3_t origin; 
  vec4_t rot; 
  tmat43_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v1 = ent->r.currentOrigin.v[0];
  v2 = ent->r.currentOrigin.v[1];
  v3 = ent->r.currentOrigin.v[2];
  v4 = ent->r.currentAngles.v[0];
  v5 = ent->r.currentAngles.v[1];
  v6 = ent->r.currentAngles.v[2];
  if ( Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) )
  {
    if ( ent->scripted )
    {
      G_Animscripted_Think(ent);
      p_pos = &ent->s.lerp.pos;
      IsRagdollTrajectory = Com_IsRagdollTrajectory(&ent->s.lerp.pos);
      v10 = DVARBOOL_g_useCheapScriptedMoversForLargeMap;
      v11 = IsRagdollTrajectory;
      if ( !DVARBOOL_g_useCheapScriptedMoversForLargeMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_useCheapScriptedMoversForLargeMap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      v13 = 1;
      if ( v10->current.enabled )
      {
        Handler = GHandler::getHandler();
        if ( BG_IsGameTypeQuick_BR(Handler) )
          v13 = 0;
      }
      G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 1, v13);
      SV_LinkEntity(ent);
      if ( ent->scripted )
      {
        p_pos->trType = TR_INTERPOLATE;
        ent->s.lerp.apos.trType = TR_INTERPOLATE;
        G_Main_RunThink(ent);
        if ( v11 )
        {
          p_pos->trType = TR_FIRST_RAGDOLL;
          ent->s.lerp.apos.trType = TR_FIRST_RAGDOLL;
        }
        ent->moverInfo.m_deltaOrigin.v[0] = ent->r.currentOrigin.v[0] - v1;
        ent->moverInfo.m_deltaOrigin.v[1] = ent->r.currentOrigin.v[1] - v2;
        ent->moverInfo.m_deltaOrigin.v[2] = ent->r.currentOrigin.v[2] - v3;
        ent->moverInfo.m_deltaAngles.v[0] = ent->r.currentAngles.v[0] - v4;
        ent->moverInfo.m_deltaAngles.v[1] = ent->r.currentAngles.v[1] - v5;
        ent->moverInfo.m_deltaAngles.v[2] = ent->r.currentAngles.v[2] - v6;
        return;
      }
      if ( v11 )
      {
        p_pos->trType = TR_FIRST_RAGDOLL;
        ent->s.lerp.apos.trType = TR_FIRST_RAGDOLL;
      }
      else
      {
        if ( p_pos->trType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1850, ASSERT_TYPE_ASSERT, "( isRagdoll || ent->s.lerp.pos.trType == TR_STATIONARY )", (const char *)&queryFormat, "isRagdoll || ent->s.lerp.pos.trType == TR_STATIONARY") )
          __debugbreak();
        if ( ent->s.lerp.apos.trType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1851, ASSERT_TYPE_ASSERT, "( isRagdoll || ent->s.lerp.apos.trType == TR_STATIONARY )", (const char *)&queryFormat, "isRagdoll || ent->s.lerp.apos.trType == TR_STATIONARY") )
          __debugbreak();
      }
    }
    else if ( !ent->tagInfo && !BgTrajectory::IsAnimatedTrajectory(&ent->s.lerp.pos) )
    {
      ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
      v15 = ServerDObjForEnt;
      if ( ServerDObjForEnt )
      {
        if ( DObjGetTree(ServerDObjForEnt) )
        {
          XAnimCalcDelta3D(v15, 0, XANIM_SUBTREE_DEFAULT, 0, &rot, &in1, 1);
          v16 = rot.v[3] != 1.0 && rot.v[3] != -1.0;
          v17 = (float)((float)((float)(in1.v[0] * in1.v[0]) + (float)(in1.v[1] * in1.v[1])) + (float)(in1.v[2] * in1.v[2])) != 0.0;
          if ( v16 )
          {
            QuatToAxis(&rot, &axis);
            AnglesToAxis(&ent->r.currentAngles, (tmat33_t<vec3_t> *)&in2);
            MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)&in2, &out);
            AxisToAngles(&out, &ent->r.currentAngles);
          }
          if ( v17 )
          {
            AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &in2);
            MatrixTransformVector43(&in1, &in2, &origin);
            G_SetOriginAndAngle(ent, &origin, &ent->r.currentAngles, 1, 1);
            if ( ent->r.isLinked )
              SV_LinkEntity(ent);
          }
          else if ( v16 )
          {
            G_SetAngle(ent, &ent->r.currentAngles, 1, 1);
          }
        }
      }
    }
  }
  IsEntityKeyframedMover = GMovingPlatforms::IsEntityKeyframedMover(ent);
  in1.v[0] = 0.0;
  v19 = !IsEntityKeyframedMover;
  v20 = ent->tagInfo == NULL;
  in1.v[1] = 0.0;
  in1.v[2] = 0.0;
  origin.v[0] = 0.0;
  origin.v[1] = 0.0;
  origin.v[2] = 0.0;
  if ( v20 )
  {
    BgTrajectory::IsAnimatedTrajectory(&ent->s.lerp.pos);
  }
  else if ( GMovingPlatformClient::CanPush(ent) )
  {
    if ( v19 )
      G_GeneralLink(ent);
    else
      G_GeneralLinkNoWarp(ent);
    v21 = ent->r.currentOrigin.v[1] - v2;
    in1.v[0] = ent->r.currentOrigin.v[0] - v1;
    v22 = ent->r.currentOrigin.v[2] - v3;
    in1.v[1] = v21;
    v23 = ent->r.currentAngles.v[0] - v4;
    in1.v[2] = v22;
    v24 = ent->r.currentAngles.v[1] - v5;
    origin.v[0] = v23;
    v25 = ent->r.currentAngles.v[2];
    ent->r.currentOrigin.v[0] = v1;
    ent->r.currentOrigin.v[1] = v2;
    ent->r.currentOrigin.v[2] = v3;
    origin.v[2] = v25 - v6;
    origin.v[1] = v24;
    ent->r.currentAngles.v[0] = v4;
    ent->r.currentAngles.v[1] = v5;
    ent->r.currentAngles.v[2] = v6;
    SV_LinkEntity(ent);
  }
  GMovingPlatforms::UpdateMovingPlatformEntityInternal(ent, &in1, &origin);
  ent->moverInfo.m_deltaOrigin.v[0] = ent->r.currentOrigin.v[0] - v1;
  ent->moverInfo.m_deltaOrigin.v[1] = ent->r.currentOrigin.v[1] - v2;
  ent->moverInfo.m_deltaOrigin.v[2] = ent->r.currentOrigin.v[2] - v3;
  ent->moverInfo.m_deltaAngles.v[0] = ent->r.currentAngles.v[0] - v4;
  ent->moverInfo.m_deltaAngles.v[1] = ent->r.currentAngles.v[1] - v5;
  ent->moverInfo.m_deltaAngles.v[2] = ent->r.currentAngles.v[2] - v6;
  G_Main_RunThink(ent);
}

/*
==============
GMovingPlatforms::UpdateMovingPlatformEntityInternal
==============
*/
void GMovingPlatforms::UpdateMovingPlatformEntityInternal(gentity_s *ent, const vec3_t *deltaOrigin, const vec3_t *deltaAngles)
{
  const vec3_t *v3; 
  const vec3_t *v4; 
  gentity_s *v5; 
  int time; 
  EntityTagInfo *tagInfo; 
  __int64 p_extraDataUnion; 
  float v9; 
  void (__fastcall *reached)(gentity_s *); 
  tmat33_t<vec3_t> v11; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v3 = deltaAngles;
  v4 = deltaOrigin;
  v5 = ent;
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    GTrajectory::GTrajectory((GTrajectory *)&v11, v5);
    if ( v5->s.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1738, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "ent->s.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    time = v5->s.lerp.u.anonymous.data[5];
    if ( time <= 0 )
      time = level.time;
    BgTrajectory::EvaluateTrajectories((BgTrajectory *)&v11, time, &v5->r.currentOrigin, &v5->r.currentAngles);
    SV_LinkEntity(v5);
    return;
  }
  if ( !ent->tagInfo )
  {
LABEL_16:
    GMovingPlatforms::MoverTeam(ent, deltaOrigin, deltaAngles);
    return;
  }
  if ( GMovingPlatformClient::CanPush(ent) )
  {
    if ( (float)((float)((float)(v4->v[0] * v4->v[0]) + (float)(v4->v[1] * v4->v[1])) + (float)(v4->v[2] * v4->v[2])) > 10000.0 )
      G_PhysicsObject_WarpToCurrentTransform(v5, 0);
    deltaAngles = v3;
    deltaOrigin = v4;
    ent = v5;
    goto LABEL_16;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) )
    goto LABEL_44;
  tagInfo = v5->tagInfo;
  if ( tagInfo->animScriptedDataInUse )
    goto LABEL_44;
  if ( !tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 59, ASSERT_TYPE_ASSERT, "( ent->tagInfo )", (const char *)&queryFormat, "ent->tagInfo") )
    __debugbreak();
  if ( v5->tagInfo->animScriptedDataInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 60, ASSERT_TYPE_ASSERT, "(!ent->tagInfo->animScriptedDataInUse)", "%s\n\tLinked rotation data is not valid on linked entities that are animscripted.  They share the same memory space.\n", "!ent->tagInfo->animScriptedDataInUse") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_entity_tag.h", 61, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ))", "%s\n\tLinked rotation data is not available in this game mode", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
    __debugbreak();
  p_extraDataUnion = (__int64)&v5->tagInfo->extraDataUnion;
  if ( v5->tagInfo == (EntityTagInfo *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1769, ASSERT_TYPE_ASSERT, "( linkedRotationData )", (const char *)&queryFormat, "linkedRotationData") )
    __debugbreak();
  if ( v5->s.eType == ET_SCRIPTMOVER && *(_BYTE *)(p_extraDataUnion + 36) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE_FATAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 1493, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_LINKED_ROTATION )") )
      __debugbreak();
    G_CalcFixedLinkTargetAxis(v5, &axis);
    if ( G_VerifyLinkedMoveTarget(v5, &axis.m[3], 2065) )
    {
      v9 = axis.m[3].v[1];
      v5->r.currentOrigin.v[0] = axis.m[3].v[0];
      v5->r.currentOrigin.v[2] = axis.m[3].v[2];
      v5->r.currentOrigin.v[1] = v9;
    }
    if ( *(_DWORD *)p_extraDataUnion <= 1u )
    {
      AnglesToAxis((const vec3_t *)(p_extraDataUnion + 12), &v11);
      MatrixMultiply(&v11, (const tmat33_t<vec3_t> *)&axis, &out);
      AxisToAngles(&out, &v5->r.currentAngles);
      G_SetOriginAndAngle(v5, &v5->r.currentOrigin, &v5->r.currentAngles, 1, 1);
    }
    else
    {
      BgTrajectory::LegacyEvaluateTrajectory((const trajectory_t_secure *)p_extraDataUnion, level.time, &v5->r.currentAngles);
      AnglesToAxis(&v5->r.currentAngles, &v11);
      MatrixMultiply(&v11, (const tmat33_t<vec3_t> *)&axis, &out);
      AxisToAngles(&out, &v5->r.currentAngles);
      G_SetOriginAndAngle(v5, &v5->r.currentOrigin, &v5->r.currentAngles, 1, 1);
      if ( level.time >= *(_DWORD *)(p_extraDataUnion + 4) + *(_DWORD *)(p_extraDataUnion + 8) )
      {
        reached = G_Main_GetEntHandlerList(v5)->reached;
        if ( reached )
          reached(v5);
      }
    }
    v5->s.lerp.pos.trType = TR_INTERPOLATE;
    v5->s.lerp.apos.trType = TR_INTERPOLATE;
    SV_LinkEntity(v5);
  }
  else
  {
LABEL_44:
    G_GeneralLink(v5);
  }
}

/*
==============
GMovingPlatformClient::UpdatePlatformTrace
==============
*/
void GMovingPlatformClient::UpdatePlatformTrace(GMovingPlatformClient *this, gentity_s *clientEnt, int forceLongTrace)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  playerState_s *ps; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  gclient_s *client; 
  int v13; 
  __int64 m_movingPlatformEntity; 
  gentity_s *v15; 
  int number; 
  int entity; 
  GPlayerTraceInfo *PlayerTraceInfo; 
  char v19; 
  bool IsMoverOptimized; 
  unsigned int *p_movingPlatforms; 
  bool v22; 
  GMovingPlatformClient *ClientFromGEntity; 
  int clipmask; 
  float v25; 
  unsigned int EntityHitId; 
  gentity_s *v27; 
  unsigned int Instance; 
  GMovingPlatforms *MovingPlatforms; 
  unsigned int v30; 
  GHandler *Handler; 
  unsigned int m_contactEnt; 
  int v33; 
  GHandler *v34; 
  gclient_s *v35; 
  float v36; 
  __int128 v37; 
  float v38; 
  float v39; 
  float v43; 
  float v44; 
  unsigned int v45; 
  GHandler *v46; 
  int v47; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  GHandler *v49; 
  GHandler *v50; 
  GHandler *v51; 
  Bounds *bounds; 
  __int64 passEntityNum; 
  char v54; 
  int integer; 
  int v56; 
  BgTrace v58; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outUp; 
  vec3_t forward; 
  vec3_t v63; 
  vec3_t right; 
  trace_t results; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 

  if ( !clientEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 292, ASSERT_TYPE_ASSERT, "(clientEnt)", (const char *)&queryFormat, "clientEnt") )
    __debugbreak();
  ps = G_GetEntityPlayerState(clientEnt);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 295, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v10 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 5u) )
  {
    if ( !G_MovingPlatforms_DoesMoveTypeSupportMovers(clientEnt) )
    {
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      return;
    }
    if ( ps->groundEntityNum != 2047 )
      this->m_lastValidGroundTime = level.time;
    v11 = DVARINT_movingPlatformTrackLastPlatformInAirTimerMS;
    if ( !DVARINT_movingPlatformTrackLastPlatformInAirTimerMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "movingPlatformTrackLastPlatformInAirTimerMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v56 = level.time - this->m_lastValidGroundTime;
    integer = v11->current.integer;
    client = clientEnt->client;
    if ( client && (client->flags & 0x20) != 0 )
    {
      if ( BGMovingPlatforms::IsOnMovingPlatform(ps) && G_IsEntityInUse(ps->movingPlatforms.m_movingPlatformEntity) )
        return;
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      clientEnt->client->flags &= ~0x20u;
    }
    v13 = 0;
    m_movingPlatformEntity = ps->movingPlatforms.m_movingPlatformEntity;
    v15 = NULL;
    if ( !G_EntIsLinked(clientEnt) && !BG_IsTurretActive(ps) || (v54 = 0, (ps->linkFlags.m_flags[0] & 4) != 0) )
      v54 = 1;
    number = clientEnt->s.number;
    entity = ps->vehicleState.entity;
    v71 = v3;
    v70 = v4;
    v69 = v5;
    v68 = v6;
    PlayerTraceInfo = GPlayerTraceInfo::GetPlayerTraceInfo(number);
    BgTrace::BgTrace(&v58, PlayerTraceInfo);
    v19 = 0;
    if ( entity == 2047 )
      v19 = v54;
    if ( !v19 )
    {
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      goto LABEL_89;
    }
    IsMoverOptimized = 0;
    p_movingPlatforms = (unsigned int *)&ps->movingPlatforms;
    if ( BGMovingPlatforms::IsOnMovingPlatform(ps) )
      IsMoverOptimized = BGMovingPlatforms::IsMoverOptimized(&g_entities[*p_movingPlatforms].s);
    v22 = BGMovingPlatforms::IsOnMovingPlatform(ps) && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xDu) && !BG_IsPlayerZeroG(ps);
    if ( forceLongTrace )
      goto LABEL_41;
    if ( v22 )
    {
      if ( !IsMoverOptimized )
      {
LABEL_41:
        ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(clientEnt);
        if ( !ClientFromGEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.cpp", 377, ASSERT_TYPE_ASSERT, "(movingPlatformClient)", (const char *)&queryFormat, "movingPlatformClient") )
          __debugbreak();
        BGMovingPlatformClient::ResolvePlatformUp(ClientFromGEntity, ps, &outUp);
        clipmask = clientEnt->clipmask;
        start.v[0] = (float)(0.0099999998 * outUp.v[0]) + ps->origin.v[0];
        start.v[1] = (float)(0.0099999998 * outUp.v[1]) + ps->origin.v[1];
        v25 = (float)(0.0099999998 * outUp.v[2]) + ps->origin.v[2];
        end.v[0] = (float)(LONG_TRACE_DOWN * outUp.v[0]) + start.v[0];
        end.v[2] = (float)(LONG_TRACE_DOWN * outUp.v[2]) + v25;
        start.v[2] = v25;
        end.v[1] = (float)(LONG_TRACE_DOWN * outUp.v[1]) + start.v[1];
        BgTrace::LegacyTraceHandler(&v58, PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &clientEnt->r.box, ps->clientNum, clipmask & 0xFDFFBFFF, ps);
        EntityHitId = Trace_GetEntityHitId(&results);
        if ( results.allsolid || results.startsolid || results.fraction < 0.0099999998 && EntityHitId != *p_movingPlatforms )
        {
          end.v[0] = start.v[0] - (float)(5.0 * outUp.v[0]);
          end.v[1] = start.v[1] - (float)(5.0 * outUp.v[1]);
          end.v[2] = start.v[2] - (float)(5.0 * outUp.v[2]);
          v27 = &g_entities[*p_movingPlatforms];
          Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v27);
          PhysicsQuery_LegacyCapsuleBrushEntityTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &clientEnt->r.box, clientEnt->clipmask & 0xFDFFBFFF, Instance, v27->s.index.brushModel, &v27->r.currentOrigin, &v27->r.currentAngles, ps);
          if ( results.fraction < 1.0 )
            EntityHitId = *p_movingPlatforms;
        }
        MovingPlatforms = GMovingPlatforms::GetMovingPlatforms();
        if ( MovingPlatforms->ShouldJumpBetweenPlatforms(MovingPlatforms) )
        {
          v30 = m_movingPlatformEntity;
          if ( EntityHitId != 2047 )
            v30 = EntityHitId;
          EntityHitId = v30;
        }
        else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_movingPlatformJumpMomentumFix2, "movingPlatformJumpMomentumFix2") && v56 <= integer && EntityHitId != (_DWORD)m_movingPlatformEntity && ps->groundEntityNum == 2047 )
        {
          EntityHitId = m_movingPlatformEntity;
        }
        goto LABEL_64;
      }
    }
    else if ( !IsMoverOptimized )
    {
      goto LABEL_58;
    }
    if ( ps->groundEntityNum == 2047 && v56 <= integer )
    {
      EntityHitId = m_movingPlatformEntity;
LABEL_64:
      GMovingPlatformClient::ClearPlatformEntity(this, ps);
      if ( EntityHitId == 2047 )
      {
        v13 = 0;
        v15 = NULL;
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
        v15 = &g_entities[EntityHitId];
        if ( v15 && BGMovingPlatforms::IsPlatformType(v15->s.eType) )
        {
          Handler = GHandler::getHandler();
          BGMovingPlatformPS::SetMoverEntityID(&ps->movingPlatforms, ps, Handler, m_movingPlatformEntity, EntityHitId, 0, 1);
          v13 = 0;
          goto LABEL_89;
        }
        v13 = 0;
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
          v15 = &g_entities[this->m_contactEnt];
        }
        if ( v15 && BGMovingPlatforms::IsPlatformType(v15->s.eType) )
        {
          v33 = v15->s.number;
          v34 = GHandler::getHandler();
          BGMovingPlatformPS::SetMoverEntityID(&ps->movingPlatforms, ps, v34, m_movingPlatformEntity, v33, 1, 0);
        }
      }
      else if ( (unsigned int)m_movingPlatformEntity < 0x7FE )
      {
        v35 = clientEnt->client;
        if ( v35 )
        {
          v36 = (float)v35->sess.cmd.forwardmove * 0.0078740157;
          v37 = 0i64;
          *(float *)&v37 = (float)v35->sess.cmd.rightmove * 0.0078740157;
          if ( v36 != 0.0 || *(float *)&v37 != 0.0 )
          {
            AngleVectors(&ps->viewangles, &forward, &right, NULL);
            v38 = (float)(*(float *)&v37 * right.v[0]) + (float)(v36 * forward.v[0]);
            v39 = (float)(*(float *)&v37 * right.v[1]) + (float)(v36 * forward.v[1]);
            *(float *)&v37 = fsqrt((float)(v39 * v39) + (float)(v38 * v38));
            _XMM2 = v37;
            __asm
            {
              vcmpless xmm0, xmm2, cs:__real@80000000
              vblendvps xmm0, xmm2, xmm9, xmm0
            }
            v43 = v38 * (float)(1.0 / *(float *)&_XMM0);
            v44 = (float)((float)(v39 * (float)(1.0 / *(float *)&_XMM0)) * 10.0) + ps->origin.v[1];
            v63.v[0] = (float)(v43 * 10.0) + ps->origin.v[0];
            v15 = &g_entities[m_movingPlatformEntity];
            v63.v[2] = ps->origin.v[2];
            forward.v[2] = 0.0;
            forward.v[0] = v43;
            forward.v[1] = v39 * (float)(1.0 / *(float *)&_XMM0);
            v63.v[1] = v44;
            v45 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v15);
            PhysicsQuery_LegacyCapsuleBrushEntityTrace(PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &v63, &clientEnt->r.box, clientEnt->clipmask & 0xFDFFBFFF, v45, v15->s.index.brushModel, &v15->r.currentOrigin, &v15->r.currentAngles, ps);
            if ( results.fraction < 1.0 )
            {
              v46 = GHandler::getHandler();
              BGMovingPlatformPS::SetMoverEntityID(&ps->movingPlatforms, ps, v46, m_movingPlatformEntity, m_movingPlatformEntity, 1, 0);
            }
          }
        }
      }
LABEL_89:
      if ( BGMovingPlatforms::IsOnMovingPlatform(ps) )
      {
        if ( v15 )
        {
          v47 = 1;
          if ( (v15->flags.m_flags[0] & 0x20) != 0 )
            goto LABEL_94;
        }
      }
      else
      {
        v15 = NULL;
      }
      v47 = 0;
LABEL_94:
      g_serverMoverWorldUpInvalid = 0;
      if ( v15 )
      {
        if ( WorldUpReferenceFrame::HasValidWorldUpInPs(ps) && v47 && v15->s.number != ps->worldUpRefEnt && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xFu) && !GUtils::AreEntsInSameLinkTree(&g_entities[ps->worldUpRefEnt], v15) )
        {
          Com_PrintWarning(1, "SetWorldUpReference() is being used on an entity that is not linked to or the actual moving platform the player is on.\n");
          g_serverMoverWorldUpInvalid = 1;
        }
        p_otherFlags = &ps->otherFlags;
        if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xDu) )
          v13 = 1;
      }
      else
      {
        p_otherFlags = &ps->otherFlags;
      }
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xEu) )
      {
        if ( !v13 || !v47 )
        {
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0xEu);
          BgTrace::LegacyTraceHandler(&v58, PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &ps->origin, &clientEnt->r.box, ps->clientNum, clientEnt->clipmask & 0xFDFFBFFF, ps);
          if ( results.allsolid )
          {
            v51 = GHandler::getHandler();
            BGMovingPlatforms::SetAlternateCollision(ps, v51);
          }
        }
      }
      else if ( v13 && v47 )
      {
        v49 = GHandler::getHandler();
        BGMovingPlatforms::SetAlternateCollision(ps, v49);
        BgTrace::LegacyTraceHandler(&v58, PHYSICS_WORLD_ID_FIRST, &results, &ps->origin, &ps->origin, &clientEnt->r.box, ps->clientNum, clientEnt->clipmask & 0xFDFFBFFF, ps);
        if ( results.allsolid )
        {
          GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(p_otherFlags, ACTIVE, 0xEu);
        }
        else
        {
          AnglesToAxis(&v15->r.currentAngles, &axis);
          v50 = GHandler::getHandler();
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v67, ps, v50);
          WorldUpReferenceFrame::GetUpContribution(&v67, &axis.m[2]);
        }
      }
      return;
    }
LABEL_58:
    EntityHitId = ps->groundEntityNum;
    goto LABEL_64;
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

