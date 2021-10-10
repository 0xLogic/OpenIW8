/*
==============
GPMove::GetEntityBounds
==============
*/

void __fastcall GPMove::GetEntityBounds(GPMove *this, int entId, int suitIndex, EffectiveStance stance, bool hasShield, Bounds *outBounds)
{
  ?GetEntityBounds@GPMove@@UEBAXHHW4EffectiveStance@@_NPEAUBounds@@@Z(this, entId, suitIndex, stance, hasShield, outBounds);
}

/*
==============
GPMove::EndPhysicserfProbe
==============
*/

void __fastcall GPMove::EndPhysicserfProbe(GPMove *this)
{
  ?EndPhysicserfProbe@GPMove@@UEBAXXZ(this);
}

/*
==============
GPMove::SetMantleHint
==============
*/

void __fastcall GPMove::SetMantleHint(GPMove *this, bool enabled)
{
  ?SetMantleHint@GPMove@@UEAAX_N@Z(this, enabled);
}

/*
==============
GPMove::DebugPrintRigidBodyTransform
==============
*/

void __fastcall GPMove::DebugPrintRigidBodyTransform(GPMove *this, const int commandTime, const int entityId)
{
  ?DebugPrintRigidBodyTransform@GPMove@@UEAAXHH@Z(this, commandTime, entityId);
}

/*
==============
GPMove::~GPMove
==============
*/

void __fastcall GPMove::~GPMove(GPMove *this)
{
  ??1GPMove@@UEAA@XZ(this);
}

/*
==============
GPMove::IsWorldUpVolume
==============
*/

bool __fastcall GPMove::IsWorldUpVolume(GPMove *this, const int entId)
{
  return ?IsWorldUpVolume@GPMove@@UEBA_NH@Z(this, entId);
}

/*
==============
GPMove::OnGestureOffhandTriggered
==============
*/

void __fastcall GPMove::OnGestureOffhandTriggered(GPMove *this)
{
  ?OnGestureOffhandTriggered@GPMove@@UEAAXXZ(this);
}

/*
==============
GPMove::GetWorldUpParentOrientation
==============
*/

bool __fastcall GPMove::GetWorldUpParentOrientation(GPMove *this, int entId, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?GetWorldUpParentOrientation@GPMove@@UEBA_NHAEATvec3_t@@0@Z(this, entId, outOrigin, outAngles);
}

/*
==============
GPMove::CanSkipFindMantleSurface
==============
*/

bool __fastcall GPMove::CanSkipFindMantleSurface(GPMove *this)
{
  return ?CanSkipFindMantleSurface@GPMove@@UEBA_NXZ(this);
}

/*
==============
GPMove::GPMove
==============
*/

void __fastcall GPMove::GPMove(GPMove *this)
{
  ??0GPMove@@QEAA@XZ(this);
}

/*
==============
GPMove::StartPhysicsPerfProbe
==============
*/

void __fastcall GPMove::StartPhysicsPerfProbe(GPMove *this)
{
  ?StartPhysicsPerfProbe@GPMove@@UEBAXXZ(this);
}

/*
==============
GPMove::GPMove
==============
*/
void GPMove::GPMove(GPMove *this)
{
  this->__vftable = (GPMove_vtbl *)&pmove_t::`vftable';
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
  this->__vftable = (GPMove_vtbl *)&GPMove::`vftable';
  this->m_isUserMoveWorker = 0;
}

/*
==============
GPMove::~GPMove
==============
*/
void GPMove::~GPMove(GPMove *this)
{
  this->__vftable = (GPMove_vtbl *)&pmove_t::`vftable';
}

/*
==============
GPMove::CanSkipFindMantleSurface
==============
*/
bool GPMove::CanSkipFindMantleSurface(GPMove *this)
{
  return SV_BotIsBotEnt(&g_entities[this->ps->clientNum]) == 0;
}

/*
==============
GPMove::DebugPrintRigidBodyTransform
==============
*/
void GPMove::DebugPrintRigidBodyTransform(GPMove *this, const int commandTime, const int entityId)
{
  G_PhysicsObject *v6; 
  unsigned int v7; 
  unsigned int NumRigidBodys; 
  unsigned int i; 
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
  __int64 v29; 
  float v30; 
  float v31; 
  hknpBodyId result; 

  v6 = G_PhysicsObject_Get(entityId);
  if ( v6 )
  {
    v7 = v6->physicsInstances[0];
    if ( v7 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 582, ASSERT_TYPE_ASSERT, "( physicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v7);
    for ( i = 0; i < NumRigidBodys; ++i )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v7 == -1 )
      {
        LODWORD(v29) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v29) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v29) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v29) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v7, i)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v29) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v29) )
          __debugbreak();
      }
      world = g_havokPhysicsWorlds[0].world;
      if ( !g_havokPhysicsWorlds[0].world )
      {
        LODWORD(v29) = g_havokPhysicsWorlds[0].world;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v29) )
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
      v31 = *(float *)v12;
      v30 = *(float *)(v12 + 4);
      v23 = this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
      *((_QWORD *)&v24 + 1) = *((_QWORD *)&v20 + 1);
      *(double *)&v24 = (float)(*(float *)&v20 * 32.0);
      _XMM2 = v24;
      __asm { vxorpd  xmm2, xmm2, xmm2 }
      LODWORD(v28) = i;
      LODWORD(fmt) = entityId;
      Com_Printf(20, "   t: %i, h: %i, e: %i, idx: %i, trans: %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a\n", (unsigned int)commandTime, !v23, fmt, v28, v31, v30, v13, *(double *)&_XMM2, v14, v15, v16, *(double *)&_XMM2, v17, v18, v19, *(double *)&_XMM2, *(double *)&v24, (float)(v21 * 32.0), (float)(v22 * 32.0), DOUBLE_1_0);
    }
  }
}

/*
==============
GPMove::EndPhysicserfProbe
==============
*/
void GPMove::EndPhysicserfProbe(GPMove *this)
{
  if ( !this->m_isUserMoveWorker )
    PhysPerfTrack_PMoveServerTimeStop();
}

/*
==============
GPMove::GetEntityBounds
==============
*/
void GPMove::GetEntityBounds(GPMove *this, int entId, int suitIndex, EffectiveStance stance, bool hasShield, Bounds *outBounds)
{
  __int64 v6; 
  const gentity_s *v9; 
  const DObj *ServerDObjForEnt; 
  const dvar_t *v11; 
  float value; 
  int v14; 

  v6 = entId;
  if ( (unsigned int)entId >= 0x800 )
  {
    v14 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( entId ) < (unsigned)( ( 2048 ) )", "entId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entId, v14) )
      __debugbreak();
  }
  v9 = &g_entities[v6];
  ServerDObjForEnt = Com_GetServerDObjForEnt(v9);
  G_PhysicsCharacterProxy_GetCollisionBounds(ServerDObjForEnt, &v9->s, suitIndex, stance, outBounds);
  if ( hasShield )
  {
    v11 = DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset;
    if ( !DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionShieldOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
    outBounds->halfSize.v[0] = value + outBounds->halfSize.v[0];
    outBounds->halfSize.v[1] = value + outBounds->halfSize.v[1];
    outBounds->halfSize.v[2] = value + outBounds->halfSize.v[2];
  }
}

/*
==============
GPMove::GetWorldUpParentOrientation
==============
*/
bool GPMove::GetWorldUpParentOrientation(GPMove *this, int entId, vec3_t *outOrigin, vec3_t *outAngles)
{
  gentity_s *GEntity; 
  gentity_s *v8; 
  EntityTagInfo *tagInfo; 
  float *parent; 
  float *v11; 

  if ( (unsigned int)entId >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( entId ) < (unsigned)( ( 2048 ) )", "entId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entId, 2048) )
    __debugbreak();
  if ( !G_IsEntityInUse(entId) )
    goto LABEL_26;
  GEntity = G_GetGEntity(entId);
  if ( !GEntity->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 179, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  if ( GEntity->client || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&GEntity->s.lerp.eFlags, ACTIVE, 0xFu) )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 194, ASSERT_TYPE_ASSERT, "( IsWorldUpVolume( entId ) )", (const char *)&queryFormat, "IsWorldUpVolume( entId )") )
      __debugbreak();
  }
  *(_QWORD *)outAngles->v = 0i64;
  outAngles->v[2] = 0.0;
  *(_QWORD *)outOrigin->v = 0i64;
  outOrigin->v[2] = 0.0;
  v8 = G_GetGEntity(entId);
  if ( !v8->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 200, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  tagInfo = v8->tagInfo;
  if ( tagInfo )
  {
    if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 204, ASSERT_TYPE_ASSERT, "( ent->tagInfo->parent )", (const char *)&queryFormat, "ent->tagInfo->parent") )
      __debugbreak();
    if ( v8->tagInfo->parent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 205, ASSERT_TYPE_ASSERT, "(ent->tagInfo->parent->client == nullptr)", "%s\n\tIt would not be safe to access player positions in that way as part of pmove", "ent->tagInfo->parent->client == nullptr") )
      __debugbreak();
    parent = (float *)v8->tagInfo->parent;
    outOrigin->v[0] = parent[76];
    outOrigin->v[1] = parent[77];
    outOrigin->v[2] = parent[78];
    v11 = (float *)v8->tagInfo->parent;
    outAngles->v[0] = v11[79];
    outAngles->v[1] = v11[80];
    outAngles->v[2] = v11[81];
    LOBYTE(tagInfo) = 1;
  }
  return (char)tagInfo;
}

/*
==============
GPMove::IsWorldUpVolume
==============
*/
bool GPMove::IsWorldUpVolume(GPMove *this, const int entId)
{
  gentity_s *GEntity; 

  if ( !G_IsEntityInUse(entId) )
    return 0;
  GEntity = G_GetGEntity(entId);
  if ( !GEntity->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 179, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  return !GEntity->client && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&GEntity->s.lerp.eFlags, ACTIVE, 0xFu);
}

/*
==============
GPMove::OnGestureOffhandTriggered
==============
*/
void GPMove::OnGestureOffhandTriggered(GPMove *this)
{
  ;
}

/*
==============
GPMove::SetMantleHint
==============
*/
void GPMove::SetMantleHint(GPMove *this, bool enabled)
{
  bot_data_t *EntityData; 

  EntityData = Bot_GetEntityData(&g_entities[this->ps->clientNum]);
  if ( EntityData )
    EntityData->botInfo.hasMantleHint = enabled;
}

/*
==============
GPMove::StartPhysicsPerfProbe
==============
*/
void GPMove::StartPhysicsPerfProbe(GPMove *this)
{
  if ( !this->m_isUserMoveWorker )
  {
    PhysPerfTrack_PMoveServerTimeStart();
    PhysPerfTrack_PMoveServerCountAdd();
  }
}

