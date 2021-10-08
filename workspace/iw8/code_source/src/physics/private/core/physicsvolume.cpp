/*
==============
G_PhysicsVolume_IsGravityScalar
==============
*/

bool __fastcall G_PhysicsVolume_IsGravityScalar(const gentity_s *entity)
{
  return ?G_PhysicsVolume_IsGravityScalar@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
CG_PhysicsVolume_Shutdown
==============
*/

void __fastcall CG_PhysicsVolume_Shutdown(LocalClientNum_t localClientNum)
{
  ?CG_PhysicsVolume_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
G_PhysicsVolume_AffectsCharacters
==============
*/

bool __fastcall G_PhysicsVolume_AffectsCharacters(const gentity_s *entity)
{
  return ?G_PhysicsVolume_AffectsCharacters@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Spawn_physicsvolume
==============
*/

void __fastcall G_Spawn_physicsvolume(gentity_s *ent)
{
  ?G_Spawn_physicsvolume@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
PhysicsVolume_IsDirectionForceApplier
==============
*/

bool __fastcall PhysicsVolume_IsDirectionForceApplier(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_IsDirectionForceApplier@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
G_PhysicsVolume_IsFocalForceApplier
==============
*/

bool __fastcall G_PhysicsVolume_IsFocalForceApplier(const gentity_s *entity)
{
  return ?G_PhysicsVolume_IsFocalForceApplier@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
CG_PhysicsVolume_GetEffectsAt
==============
*/

void __fastcall CG_PhysicsVolume_GetEffectsAt(LocalClientNum_t localClientNum, const vec3_t *point, vec3_t *gravity, vec3_t *force)
{
  ?CG_PhysicsVolume_GetEffectsAt@@YAXW4LocalClientNum_t@@AEBTvec3_t@@AEAT2@2@Z(localClientNum, point, gravity, force);
}

/*
==============
PhysicsVolume_Load
==============
*/

void __fastcall PhysicsVolume_Load(SaveGame *save)
{
  ?PhysicsVolume_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
CG_PhysicsVolume_IsInitialized
==============
*/

bool __fastcall CG_PhysicsVolume_IsInitialized(LocalClientNum_t localClientNum)
{
  return ?CG_PhysicsVolume_IsInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
PhysicsVolume_AffectsMissiles
==============
*/

bool __fastcall PhysicsVolume_AffectsMissiles(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_AffectsMissiles@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
PhysicsVolume_IsActivator
==============
*/

bool __fastcall PhysicsVolume_IsActivator(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_IsActivator@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
CG_PhysicsVolume_Update
==============
*/

void __fastcall CG_PhysicsVolume_Update(LocalClientNum_t localClientNum, centity_t *entity)
{
  ?CG_PhysicsVolume_Update@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, entity);
}

/*
==============
G_PhysicsVolume_SetDirectionForceApplier
==============
*/

void __fastcall G_PhysicsVolume_SetDirectionForceApplier(gentity_s *entity, bool enable, const vec3_t *direction, float force, float maxSpeed)
{
  ?G_PhysicsVolume_SetDirectionForceApplier@@YAXPEAUgentity_s@@_NAEBTvec3_t@@MM@Z(entity, enable, direction, force, maxSpeed);
}

/*
==============
PhysicsVolume_Write
==============
*/

void __fastcall PhysicsVolume_Write(MemoryFile *memFile)
{
  ?PhysicsVolume_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_PhysicsVolume_IsInitialized
==============
*/

bool __fastcall G_PhysicsVolume_IsInitialized()
{
  return ?G_PhysicsVolume_IsInitialized@@YA_NXZ();
}

/*
==============
G_PhysicsVolume_TriggerEvent
==============
*/

void __fastcall G_PhysicsVolume_TriggerEvent(Physics_WorldId worldId, int triggerEntNum, unsigned int triggeringBody, bool enter)
{
  ?G_PhysicsVolume_TriggerEvent@@YAXW4Physics_WorldId@@HI_N@Z(worldId, triggerEntNum, triggeringBody, enter);
}

/*
==============
G_PhysicsVolume_SetGravityScalar
==============
*/

void __fastcall G_PhysicsVolume_SetGravityScalar(gentity_s *entity, bool enable, float scale)
{
  ?G_PhysicsVolume_SetGravityScalar@@YAXPEAUgentity_s@@_NM@Z(entity, enable, scale);
}

/*
==============
G_PhysicsVolume_Update
==============
*/

void __fastcall G_PhysicsVolume_Update(gentity_s *entity)
{
  ?G_PhysicsVolume_Update@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
CG_PhysicsVolume_IsActivator
==============
*/

bool __fastcall CG_PhysicsVolume_IsActivator(const centity_t *entity)
{
  return ?CG_PhysicsVolume_IsActivator@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
G_PhysicsVolume_AffectsMissiles
==============
*/

void __fastcall G_PhysicsVolume_AffectsMissiles(gentity_s *entity, bool enable)
{
  ?G_PhysicsVolume_AffectsMissiles@@YAXPEAUgentity_s@@_N@Z(entity, enable);
}

/*
==============
PhysicsVolume_AffectsCharacters
==============
*/

bool __fastcall PhysicsVolume_AffectsCharacters(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_AffectsCharacters@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
CG_PhysicsVolume_TriggerEvent
==============
*/

void __fastcall CG_PhysicsVolume_TriggerEvent(Physics_WorldId worldId, int triggerEntNum, unsigned int triggeringBody, bool enter)
{
  ?CG_PhysicsVolume_TriggerEvent@@YAXW4Physics_WorldId@@HI_N@Z(worldId, triggerEntNum, triggeringBody, enter);
}

/*
==============
CG_PhysicsVolume_Reset
==============
*/

void __fastcall CG_PhysicsVolume_Reset(LocalClientNum_t localClientNum, centity_t *entity)
{
  ?CG_PhysicsVolume_Reset@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, entity);
}

/*
==============
PhysicsVolume_IsFocalForceApplier
==============
*/

bool __fastcall PhysicsVolume_IsFocalForceApplier(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_IsFocalForceApplier@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
CG_PhysicsVolume_IsGravityScalar
==============
*/

bool __fastcall CG_PhysicsVolume_IsGravityScalar(const centity_t *entity)
{
  return ?CG_PhysicsVolume_IsGravityScalar@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
CG_PhysicsVolume_Init
==============
*/

void __fastcall CG_PhysicsVolume_Init(LocalClientNum_t localClientNum)
{
  ?CG_PhysicsVolume_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
G_PhysicsVolume_IsEnabled
==============
*/

bool __fastcall G_PhysicsVolume_IsEnabled(const gentity_s *entity)
{
  return ?G_PhysicsVolume_IsEnabled@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
CG_PhysicsVolume_AffectsCharacters
==============
*/

bool __fastcall CG_PhysicsVolume_AffectsCharacters(const centity_t *entity)
{
  return ?CG_PhysicsVolume_AffectsCharacters@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
PhysicsVolume_SetupDvars
==============
*/

void PhysicsVolume_SetupDvars(void)
{
  ?PhysicsVolume_SetupDvars@@YAXXZ();
}

/*
==============
CG_PhysicsVolume_IsGravityVector
==============
*/

bool __fastcall CG_PhysicsVolume_IsGravityVector(const centity_t *entity)
{
  return ?CG_PhysicsVolume_IsGravityVector@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
PhysicsVolume_IsGravityVector
==============
*/

bool __fastcall PhysicsVolume_IsGravityVector(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_IsGravityVector@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
CG_PhysicsVolume_PreDestroyPhysics
==============
*/

void __fastcall CG_PhysicsVolume_PreDestroyPhysics(LocalClientNum_t localClientNum, int entNum)
{
  ?CG_PhysicsVolume_PreDestroyPhysics@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
G_PhysicsVolume_IsGravityVector
==============
*/

bool __fastcall G_PhysicsVolume_IsGravityVector(const gentity_s *entity)
{
  return ?G_PhysicsVolume_IsGravityVector@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsVolume_Enable
==============
*/

void __fastcall G_PhysicsVolume_Enable(gentity_s *entity, bool enable)
{
  ?G_PhysicsVolume_Enable@@YAXPEAUgentity_s@@_N@Z(entity, enable);
}

/*
==============
G_PhysicsVolume_IsActivator
==============
*/

bool __fastcall G_PhysicsVolume_IsActivator(const gentity_s *entity)
{
  return ?G_PhysicsVolume_IsActivator@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsVolume_SetFocalForceApplier
==============
*/

void __fastcall G_PhysicsVolume_SetFocalForceApplier(gentity_s *entity, bool enable, const vec3_t *point, float force, float maxSpeed)
{
  ?G_PhysicsVolume_SetFocalForceApplier@@YAXPEAUgentity_s@@_NAEBTvec3_t@@MM@Z(entity, enable, point, force, maxSpeed);
}

/*
==============
CG_PhysicsVolume_IsFocalForceApplier
==============
*/

bool __fastcall CG_PhysicsVolume_IsFocalForceApplier(const centity_t *entity)
{
  return ?CG_PhysicsVolume_IsFocalForceApplier@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
PhysicsVolume_DrawDebug
==============
*/

void __fastcall PhysicsVolume_DrawDebug(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?PhysicsVolume_DrawDebug@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
CG_PhysicsVolume_IsDirectionForceApplier
==============
*/

bool __fastcall CG_PhysicsVolume_IsDirectionForceApplier(const centity_t *entity)
{
  return ?CG_PhysicsVolume_IsDirectionForceApplier@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
G_PhysicsVolume_Init
==============
*/

void G_PhysicsVolume_Init(void)
{
  ?G_PhysicsVolume_Init@@YAXXZ();
}

/*
==============
CG_PhysicsVolume_CreatePhysics
==============
*/

void __fastcall CG_PhysicsVolume_CreatePhysics(LocalClientNum_t localClientNum, int entNum)
{
  ?CG_PhysicsVolume_CreatePhysics@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
PhysicsVolume_TriggerEvent
==============
*/

void __fastcall PhysicsVolume_TriggerEvent(Physics_WorldId worldId, unsigned int triggerBody, unsigned int triggeringBody, bool enter)
{
  ?PhysicsVolume_TriggerEvent@@YAXW4Physics_WorldId@@II_N@Z(worldId, triggerBody, triggeringBody, enter);
}

/*
==============
G_PhysicsVolume_Shutdown
==============
*/

void G_PhysicsVolume_Shutdown(void)
{
  ?G_PhysicsVolume_Shutdown@@YAXXZ();
}

/*
==============
G_PhysicsVolume_GetEffectsAt
==============
*/

void __fastcall G_PhysicsVolume_GetEffectsAt(const vec3_t *point, vec3_t *gravity, vec3_t *force)
{
  ?G_PhysicsVolume_GetEffectsAt@@YAXAEBTvec3_t@@AEAT1@1@Z(point, gravity, force);
}

/*
==============
G_PhysicsVolume_IsDirectionForceApplier
==============
*/

bool __fastcall G_PhysicsVolume_IsDirectionForceApplier(const gentity_s *entity)
{
  return ?G_PhysicsVolume_IsDirectionForceApplier@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsVolume_PreDestroyPhysics
==============
*/

void __fastcall G_PhysicsVolume_PreDestroyPhysics(gentity_s *entity)
{
  ?G_PhysicsVolume_PreDestroyPhysics@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsVolume_SetGravityVector
==============
*/

void __fastcall G_PhysicsVolume_SetGravityVector(gentity_s *entity, bool enable, const vec3_t *gravity)
{
  ?G_PhysicsVolume_SetGravityVector@@YAXPEAUgentity_s@@_NAEBTvec3_t@@@Z(entity, enable, gravity);
}

/*
==============
CG_PhysicsVolume_AffectsMissiles
==============
*/

bool __fastcall CG_PhysicsVolume_AffectsMissiles(const centity_t *entity)
{
  return ?CG_PhysicsVolume_AffectsMissiles@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
CG_PhysicsVolume_Destroy
==============
*/

void __fastcall CG_PhysicsVolume_Destroy(LocalClientNum_t localClientNum, centity_t *entity)
{
  ?CG_PhysicsVolume_Destroy@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, entity);
}

/*
==============
G_PhysicsVolume_AffectsCharacters
==============
*/

void __fastcall G_PhysicsVolume_AffectsCharacters(gentity_s *entity, bool enable)
{
  ?G_PhysicsVolume_AffectsCharacters@@YAXPEAUgentity_s@@_N@Z(entity, enable);
}

/*
==============
G_Create_physicsvolume
==============
*/

void __fastcall G_Create_physicsvolume(gentity_s *ent, const vec3_t *origin, float radius, float height)
{
  ?G_Create_physicsvolume@@YAXPEAUgentity_s@@AEBTvec3_t@@MM@Z(ent, origin, radius, height);
}

/*
==============
G_PhysicsVolume_AffectsMissiles
==============
*/

bool __fastcall G_PhysicsVolume_AffectsMissiles(const gentity_s *entity)
{
  return ?G_PhysicsVolume_AffectsMissiles@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsVolume_SetActivator
==============
*/

void __fastcall G_PhysicsVolume_SetActivator(gentity_s *entity, bool enable)
{
  ?G_PhysicsVolume_SetActivator@@YAXPEAUgentity_s@@_N@Z(entity, enable);
}

/*
==============
G_PhysicsVolume_CreatePhysics
==============
*/

void __fastcall G_PhysicsVolume_CreatePhysics(gentity_s *entity)
{
  ?G_PhysicsVolume_CreatePhysics@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
PhysicsVolume_IsEnabled
==============
*/

bool __fastcall PhysicsVolume_IsEnabled(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_IsEnabled@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
CG_PhysicsVolume_IsEnabled
==============
*/

bool __fastcall CG_PhysicsVolume_IsEnabled(const centity_t *entity)
{
  return ?CG_PhysicsVolume_IsEnabled@@YA_NPEBUcentity_t@@@Z(entity);
}

/*
==============
PhysicsVolume_IsGravityScalar
==============
*/

bool __fastcall PhysicsVolume_IsGravityScalar(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  return ?PhysicsVolume_IsGravityScalar@@YA_NPEBULerpEntityStatePhysicsVolume@@@Z(physicsVolume);
}

/*
==============
CG_PhysicsVolume_AffectsCharacters
==============
*/
bool CG_PhysicsVolume_AffectsCharacters(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1269, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1270, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1271, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1098, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return p_u->actor.species & 1;
}

/*
==============
CG_PhysicsVolume_AffectsMissiles
==============
*/
bool CG_PhysicsVolume_AffectsMissiles(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1280, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1281, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1282, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1107, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 2) != 0;
}

/*
==============
CG_PhysicsVolume_AllocateRuntimeData
==============
*/
void CG_PhysicsVolume_AllocateRuntimeData(LocalClientNum_t localClientNum, centity_t *entity)
{
  __int64 v2; 
  centity_t::PerTypeData v4; 
  PhysicsVolumeRuntimeData *v5; 
  __int64 v6; 
  hkArray<unsigned int,hkContainerHeapAllocator> *v7; 

  v2 = localClientNum;
  if ( !s_cgPhysicsVolumeInitialized[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 532, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 533, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v4.flightDurationMs = 0;
  v5 = s_physicsVolumeClientRuntimeData[v2];
  while ( v5->inUse )
  {
    if ( !v5[1].inUse )
    {
      ++v4.flightDurationMs;
      break;
    }
    if ( !v5[2].inUse )
    {
      v4.flightDurationMs += 2;
      break;
    }
    if ( !v5[3].inUse )
    {
      v4.flightDurationMs += 3;
      break;
    }
    v5 += 4;
    v4.flightDurationMs += 4;
    if ( v4.flightDurationMs >= 0x20u )
      goto LABEL_18;
  }
  if ( v4.flightDurationMs < 0x20u )
    goto LABEL_19;
LABEL_18:
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED0180, 40i64);
LABEL_19:
  v6 = (unsigned int)v4.flightDurationMs + 32 * v2;
  if ( s_physicsVolumeClientRuntimeData[0][v6].entityNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 552, ASSERT_TYPE_ASSERT, "(s_physicsVolumeClientRuntimeData[localClientNum][runtimeIdx].entityNum == 0)", (const char *)&queryFormat, "s_physicsVolumeClientRuntimeData[localClientNum][runtimeIdx].entityNum == 0") )
    __debugbreak();
  s_physicsVolumeClientRuntimeData[0][v6].inUse = 1;
  s_physicsVolumeClientRuntimeData[0][v6].entityNum = entity->nextState.number;
  entity->typeData = v4;
  if ( s_physicsVolumeClientRuntimeData[0][v6].bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 559, ASSERT_TYPE_ASSERT, "(!s_physicsVolumeClientRuntimeData[localClientNum][runtimeIdx].bodyIds)", (const char *)&queryFormat, "!s_physicsVolumeClientRuntimeData[localClientNum][runtimeIdx].bodyIds") )
    __debugbreak();
  v7 = PhysicsBodyIdVector_Create();
  s_physicsVolumeClientRuntimeData[0][v6].bodyIds = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 561, ASSERT_TYPE_ASSERT, "(s_physicsVolumeClientRuntimeData[localClientNum][runtimeIdx].bodyIds)", (const char *)&queryFormat, "s_physicsVolumeClientRuntimeData[localClientNum][runtimeIdx].bodyIds") )
    __debugbreak();
}

/*
==============
CG_PhysicsVolume_CreatePhysics
==============
*/
void CG_PhysicsVolume_CreatePhysics(LocalClientNum_t localClientNum, int entNum)
{
  centity_t *Entity; 
  __int32 v7; 
  __int32 v8; 
  const PhysicsAsset *AssetByName; 
  CG_PhysicsObject *v10; 
  __int64 v11; 
  bool neverDeactivate; 
  unsigned int Instance; 
  unsigned __int16 v14; 
  int Ref; 
  int moverFlags; 
  const char *v17; 
  const char *v18; 
  int v19; 
  __int16 v25; 
  __int16 v26; 
  __int16 v27; 
  __int16 v28; 
  unsigned int RigidBodyID; 
  int shapeOverride; 
  int shapeOverridea; 
  float forceType; 
  vec3_t outOrigin; 
  __int64 v35; 
  vec4_t quat; 

  v35 = -2i64;
  if ( !s_cgPhysicsVolumeInitialized[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 597, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 601, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 604, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
      __debugbreak();
  }
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 605, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 606, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( !CG_PhysicsVolume_IsEnabled(Entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 607, ASSERT_TYPE_ASSERT, "(CG_PhysicsVolume_IsEnabled( entity ))", (const char *)&queryFormat, "CG_PhysicsVolume_IsEnabled( entity )") )
    __debugbreak();
  CG_PhysicsVolume_AllocateRuntimeData(localClientNum, Entity);
  v7 = 3 * localClientNum;
  v8 = 3 * localClientNum + 3;
  AssetByName = Physics_GetAssetByName(PHYSICS_VOLUME_ASSET_NAME);
  if ( !AssetByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 617, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
  v10 = CG_PhysicsObject_Get(Entity->nextState.number, localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 621, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  v11 = v7;
  if ( v10->physicsInstances[v7 + 3] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 622, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[authWorldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[authWorldId] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v10->mapping = PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  AnglesToQuat(&Entity->pose.angles, &quat);
  neverDeactivate = CG_PhysicsVolume_IsActivator(Entity);
  Instance = Physics_CreateInstance((Physics_WorldId)v8);
  if ( Instance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 638, ASSERT_TYPE_ASSERT, "( instanceId != 0xFFFFFFFF )", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v10->physicsInstances[v11 + 3] = Instance;
  v14 = truncate_cast<unsigned short,int>(entNum);
  Ref = Physics_MakeRef(Physics_RefSystem_CEntities, Physics_RelationshipSystem_None, 0, v14);
  moverFlags = Entity->nextState.staticState.mover.moverFlags;
  if ( (Entity->nextState.lerp.u.actor.species & 4) != 0 )
  {
    if ( Physics_InstantiateAssetBody(Instance, (Physics_WorldId)v8, AssetByName, 0, Ref, &outOrigin, &quat, 1, !neverDeactivate, neverDeactivate, moverFlags, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
      goto LABEL_40;
    v17 = "Physics_InstantiateAssetBody( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
    v18 = "(Physics_InstantiateAssetBody( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
    v19 = 647;
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( moverFlags >> 16 )
    {
      __asm
      {
        vcvtsi2ss xmm0, xmm0, edx
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  [rsp+0F8h+forceType], xmm0
        vmovss  [rsp+0F8h+shapeOverride], xmm1
      }
      if ( Physics_InstantiateAssetBodyCylinder(Instance, (Physics_WorldId)v8, AssetByName, 0, Ref, &outOrigin, &quat, 1, !neverDeactivate, neverDeactivate, *(float *)&shapeOverride, forceType, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
        goto LABEL_40;
      v17 = "Physics_InstantiateAssetBodyCylinder( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
      v18 = "(Physics_InstantiateAssetBodyCylinder( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
      v19 = 657;
    }
    else
    {
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  [rsp+0F8h+shapeOverride], xmm0
      }
      if ( Physics_InstantiateAssetBodySphere(Instance, (Physics_WorldId)v8, AssetByName, 0, Ref, &outOrigin, &quat, 1, !neverDeactivate, neverDeactivate, *(float *)&shapeOverridea, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
        goto LABEL_40;
      v17 = "Physics_InstantiateAssetBodySphere( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
      v18 = "(Physics_InstantiateAssetBodySphere( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
      v19 = 661;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", v19, ASSERT_TYPE_ASSERT, v18, (const char *)&queryFormat, v17) )
    __debugbreak();
LABEL_40:
  ++AssetByName->usageCounter.clientEnt;
  v25 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_MarkPhysicsObjectAsUsed(localClientNum, v25, 1);
  v26 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_MarkPhysicsObjectAsMovable(localClientNum, v26, 1);
  v27 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_MarkPhysicsObjectAsShown(localClientNum, v27, 1);
  v28 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_CachePrimaryBodies(localClientNum, v28);
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v8, Instance, 0);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 674, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_SubscribeToTriggerEvent((Physics_WorldId)v8, RigidBodyID);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_PhysicsVolume_Destroy
==============
*/
void CG_PhysicsVolume_Destroy(LocalClientNum_t localClientNum, centity_t *entity)
{
  ;
}

/*
==============
CG_PhysicsVolume_GetEffectsAt
==============
*/
void CG_PhysicsVolume_GetEffectsAt(LocalClientNum_t localClientNum, const vec3_t *point, vec3_t *gravity, vec3_t *force)
{
  __int32 v11; 
  int v12; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  int NumHits; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  unsigned int EntityNum; 
  __int64 v20; 
  bool v21; 
  __int64 v22; 
  hkMemoryAllocator *v26; 
  hkMemoryAllocator *v27; 
  __int64 v29; 
  __int64 v30; 
  Physics_QueryPointExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v32; 
  void *retaddr; 
  float gravityScalar; 
  CgEntitySystem *EntitySystem; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = gravity;
  if ( !s_cgPhysicsVolumeInitialized[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1028, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  v11 = 3 * localClientNum + 3;
  Physics_GetGravity((const Physics_WorldId)v11, _RDI);
  v12 = 0;
  *(_QWORD *)force->v = 0i64;
  force->v[2] = 0.0;
  AllResult = PhysicsQuery_GetAllResult((Physics_WorldId)v11);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1039, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v32, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v32, -17);
  v32.m_ignorePhysicsVolumes = Physics_IgnoreVolumeOption_OnlyVolumes;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; maxDistance
    vmovss  [rsp+0E8h+extendedData.collisionBuffer], xmm2
  }
  extendedData.phaseSelection = All;
  extendedData.contents = -1;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v32;
  Physics_QueryPoint((Physics_WorldId)v11, point, *(float *)&_XMM2, &extendedData, AllResult);
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1058, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  [rsp+0E8h+gravityScalar], xmm6
  }
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( NumHits > 0 )
  {
    do
    {
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(AllResult, v12);
      if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1067, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Ref = Physics_GetRef((Physics_WorldId)v11, ClosestPointHitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      v20 = (int)EntityNum;
      v21 = EntityNum < 0x800;
      if ( EntityNum > 0x800 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1072, ASSERT_TYPE_ASSERT, "(entnum >= 0 && entnum <= ( 2048 ))", (const char *)&queryFormat, "entnum >= 0 && entnum <= MAX_GENTITIES") )
          __debugbreak();
        v21 = (unsigned int)v20 < 0x800;
      }
      if ( !v21 )
      {
        LODWORD(v30) = 2048;
        LODWORD(v29) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      v22 = (__int64)&EntitySystem->m_entities[v20];
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1074, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      PhysicsVolume_CalculateEffects((LerpEntityStatePhysicsVolume *)(v22 + 488), point, _RDI, &gravityScalar, force);
      ++v12;
    }
    while ( v12 < NumHits );
    __asm { vmovss  xmm6, [rsp+0E8h+gravityScalar] }
  }
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm6, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm0, xmm6, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
  v26 = hkMemHeapAllocator();
  v32.m_ignoreBodies.m_size = 0;
  if ( v32.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v26, v32.m_ignoreBodies.m_data, 4, v32.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v32.m_ignoreBodies.m_data = NULL;
  v32.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v27 = hkMemHeapAllocator();
  v32.m_ignoreEntities.m_size = 0;
  if ( v32.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, v32.m_ignoreEntities.m_data, 8, v32.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
}

/*
==============
CG_PhysicsVolume_Init
==============
*/
void CG_PhysicsVolume_Init(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool *v2; 

  v1 = localClientNum;
  v2 = &s_cgPhysicsVolumeInitialized[localClientNum];
  if ( *v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 90, ASSERT_TYPE_ASSERT, "(!s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "!s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  memset_0(s_physicsVolumeClientRuntimeData[v1], 0, sizeof(PhysicsVolumeRuntimeData[32]));
  *v2 = 1;
}

/*
==============
CG_PhysicsVolume_IsActivator
==============
*/
bool CG_PhysicsVolume_IsActivator(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1291, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1292, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1293, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1116, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x10) != 0;
}

/*
==============
CG_PhysicsVolume_IsDirectionForceApplier
==============
*/
bool CG_PhysicsVolume_IsDirectionForceApplier(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1324, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1325, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1326, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1143, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x80) != 0;
}

/*
==============
CG_PhysicsVolume_IsEnabled
==============
*/
bool CG_PhysicsVolume_IsEnabled(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1258, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1259, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1260, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1089, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 8) != 0;
}

/*
==============
CG_PhysicsVolume_IsFocalForceApplier
==============
*/
bool CG_PhysicsVolume_IsFocalForceApplier(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1335, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1336, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1337, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1152, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return BYTE1(p_u->anonymous.data[0]) & 1;
}

/*
==============
CG_PhysicsVolume_IsGravityScalar
==============
*/
bool CG_PhysicsVolume_IsGravityScalar(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1302, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1303, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1304, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1125, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x20) != 0;
}

/*
==============
CG_PhysicsVolume_IsGravityVector
==============
*/
bool CG_PhysicsVolume_IsGravityVector(const centity_t *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1313, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1314, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( entity->nextState.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1315, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->nextState.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->nextState.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1134, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x40) != 0;
}

/*
==============
CG_PhysicsVolume_IsInitialized
==============
*/
_BOOL8 CG_PhysicsVolume_IsInitialized(LocalClientNum_t localClientNum)
{
  return s_cgPhysicsVolumeInitialized[localClientNum];
}

/*
==============
CG_PhysicsVolume_PreDestroyPhysics
==============
*/
void CG_PhysicsVolume_PreDestroyPhysics(LocalClientNum_t localClientNum, int entNum)
{
  __int64 v2; 
  __int64 v4; 
  centity_t *Entity; 
  Physics_WorldId v6; 
  CG_PhysicsObject *v7; 
  unsigned int v8; 
  centity_t *v9; 
  __int64 flightDurationMs; 
  __int64 v11; 
  unsigned int RigidBodyID; 

  v2 = localClientNum;
  v4 = localClientNum;
  if ( !s_cgPhysicsVolumeInitialized[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 682, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)v2, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 688, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( Entity->pose.eType != 26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 689, ASSERT_TYPE_ASSERT, "(entity->pose.eType == ET_PHYSICS_VOLUME)", (const char *)&queryFormat, "entity->pose.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  v6 = 3 * v2 + 3;
  v7 = CG_PhysicsObject_Get(entNum, (LocalClientNum_t)v2);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 696, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  v8 = v7->physicsInstances[3 * (_DWORD)v2 + 3];
  if ( v8 != -1 )
  {
    if ( !s_cgPhysicsVolumeInitialized[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 569, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
      __debugbreak();
    v9 = CG_GetEntity((const LocalClientNum_t)v2, entNum);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 573, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
      __debugbreak();
    flightDurationMs = v9->typeData.flightDurationMs;
    if ( (unsigned int)flightDurationMs > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 577, ASSERT_TYPE_ASSERT, "( runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED )", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
      __debugbreak();
    v11 = flightDurationMs + 32 * v4;
    if ( s_physicsVolumeClientRuntimeData[0][v11].entityNum != entNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 578, ASSERT_TYPE_ASSERT, "( s_physicsVolumeClientRuntimeData[localClientNum][runtimeDataIndex].entityNum == entNum )", (const char *)&queryFormat, "s_physicsVolumeClientRuntimeData[localClientNum][runtimeDataIndex].entityNum == entNum") )
      __debugbreak();
    if ( !s_physicsVolumeClientRuntimeData[0][v11].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 579, ASSERT_TYPE_ASSERT, "( s_physicsVolumeClientRuntimeData[localClientNum][runtimeDataIndex].inUse )", (const char *)&queryFormat, "s_physicsVolumeClientRuntimeData[localClientNum][runtimeDataIndex].inUse") )
      __debugbreak();
    if ( !s_physicsVolumeClientRuntimeData[0][v11].bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 583, ASSERT_TYPE_ASSERT, "(s_physicsVolumeClientRuntimeData[localClientNum][runtimeDataIndex].bodyIds)", (const char *)&queryFormat, "s_physicsVolumeClientRuntimeData[localClientNum][runtimeDataIndex].bodyIds") )
      __debugbreak();
    PhysicsBodyIdVector_Destroy(s_physicsVolumeClientRuntimeData[0][v11].bodyIds);
    s_physicsVolumeClientRuntimeData[0][v11].bodyIds = NULL;
    s_physicsVolumeClientRuntimeData[0][v11].inUse = 0;
    s_physicsVolumeClientRuntimeData[0][v11].entityNum = 0;
    RigidBodyID = Physics_GetRigidBodyID(v6, v8, 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 710, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    Physics_UnsubscribeFromTriggerEvent(v6, RigidBodyID);
  }
}

/*
==============
CG_PhysicsVolume_Reset
==============
*/
void CG_PhysicsVolume_Reset(LocalClientNum_t localClientNum, centity_t *entity)
{
  ;
}

/*
==============
CG_PhysicsVolume_Shutdown
==============
*/
void CG_PhysicsVolume_Shutdown(__int64 localClientNum)
{
  unsigned __int64 v1; 
  int *p_entityNum; 
  __int64 v3; 

  v1 = (int)localClientNum;
  if ( !s_cgPhysicsVolumeInitialized[(int)localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 119, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  p_entityNum = &s_physicsVolumeClientRuntimeData[v1][0].entityNum;
  v3 = 32i64;
  do
  {
    if ( *((_BYTE *)p_entityNum - 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 123, ASSERT_TYPE_ASSERT, "(!s_physicsVolumeClientRuntimeData[localClientNum][dataIdx].inUse)", (const char *)&queryFormat, "!s_physicsVolumeClientRuntimeData[localClientNum][dataIdx].inUse") )
      __debugbreak();
    if ( *p_entityNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 124, ASSERT_TYPE_ASSERT, "(s_physicsVolumeClientRuntimeData[localClientNum][dataIdx].entityNum == 0)", (const char *)&queryFormat, "s_physicsVolumeClientRuntimeData[localClientNum][dataIdx].entityNum == 0") )
      __debugbreak();
    if ( *(_QWORD *)(p_entityNum + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 126, ASSERT_TYPE_ASSERT, "(!s_physicsVolumeClientRuntimeData[localClientNum][dataIdx].bodyIds)", (const char *)&queryFormat, "!s_physicsVolumeClientRuntimeData[localClientNum][dataIdx].bodyIds") )
      __debugbreak();
    p_entityNum += 4;
    --v3;
  }
  while ( v3 );
  if ( v1 >= 2 )
  {
    j___report_rangecheckfailure(localClientNum);
    JUMPOUT(0x140F1DAD5i64);
  }
  s_cgPhysicsVolumeInitialized[v1] = 0;
}

/*
==============
CG_PhysicsVolume_TriggerEvent
==============
*/
void CG_PhysicsVolume_TriggerEvent(Physics_WorldId worldId, int triggerEntNum, unsigned int triggeringBody, bool enter)
{
  __int64 v5; 
  LocalClientNum_t LocalClientForWorld; 
  __int64 v8; 
  CgEntitySystem *EntitySystem; 
  const centity_t *v10; 
  __int64 flightDurationMs; 
  PhysicsVolumeRuntimeData *v12; 
  hkArray<unsigned int,hkContainerHeapAllocator> *bodyIds; 
  __int64 v14; 

  v5 = triggerEntNum;
  LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
  v8 = LocalClientForWorld;
  if ( !s_cgPhysicsVolumeInitialized[LocalClientForWorld] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 292, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem(LocalClientForWorld);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 296, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  if ( (unsigned int)v5 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 299, ASSERT_TYPE_ASSERT, "(triggerEntNum >= 0 && triggerEntNum < ( 2048 ))", (const char *)&queryFormat, "triggerEntNum >= 0 && triggerEntNum < MAX_GENTITIES") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v14) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, 2048) )
      __debugbreak();
  }
  v10 = &EntitySystem->m_entities[v5];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 301, ASSERT_TYPE_ASSERT, "(triggerEntity)", (const char *)&queryFormat, "triggerEntity") )
    __debugbreak();
  if ( !CG_PhysicsVolume_IsEnabled(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 304, ASSERT_TYPE_ASSERT, "(CG_PhysicsVolume_IsEnabled( triggerEntity ))", (const char *)&queryFormat, "CG_PhysicsVolume_IsEnabled( triggerEntity )") )
    __debugbreak();
  flightDurationMs = v10->typeData.flightDurationMs;
  if ( (unsigned int)flightDurationMs > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 308, ASSERT_TYPE_ASSERT, "(runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED)", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
    __debugbreak();
  v12 = &s_physicsVolumeClientRuntimeData[v8][flightDurationMs];
  if ( !v12->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 310, ASSERT_TYPE_ASSERT, "(runtimeData->inUse)", (const char *)&queryFormat, "runtimeData->inUse") )
    __debugbreak();
  if ( v12->entityNum != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 311, ASSERT_TYPE_ASSERT, "(runtimeData->entityNum == triggerEntNum)", (const char *)&queryFormat, "runtimeData->entityNum == triggerEntNum") )
    __debugbreak();
  bodyIds = v12->bodyIds;
  if ( enter )
    PhysicsBodyIdVector_Add(bodyIds, triggeringBody);
  else
    PhysicsBodyIdVector_Remove(bodyIds, triggeringBody);
}

/*
==============
CG_PhysicsVolume_Update
==============
*/
void CG_PhysicsVolume_Update(LocalClientNum_t localClientNum, centity_t *entity)
{
  __int64 v10; 
  CG_PhysicsObject *v11; 
  __int32 v12; 
  __int64 v13; 
  unsigned int RigidBodyID; 
  __int64 flightDurationMs; 
  PhysicsVolumeRuntimeData *v18; 
  unsigned int Size; 
  unsigned int v20; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  hknpWorld *world; 
  unsigned int v26; 
  LerpEntityStateTypeUnion *p_u; 
  vec3_t *p_force; 
  unsigned int v60; 
  unsigned int v61; 
  bool IsActivator; 
  float fmt; 
  __int64 updateBroadphaseIfWarping; 
  float v70; 
  CG_PhysicsObject *v71; 
  vec3_t outOrigin; 
  __int64 v73; 
  vec3_t gravity; 
  int v75[4]; 
  vec3_t position; 
  vec3_t force; 
  vec4_t quat; 
  vec4_t orientation; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  v73 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RSI = entity;
  v10 = localClientNum;
  if ( !s_cgPhysicsVolumeInitialized[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 798, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 800, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (_RSI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 801, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
  v11 = CG_PhysicsObject_Get(_RSI->nextState.number, localClientNum);
  v71 = v11;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 807, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  v12 = 3 * localClientNum + 3;
  v13 = v12;
  if ( CG_PhysicsVolume_IsEnabled(_RSI) )
  {
    if ( v11->physicsInstances[v12] == -1 )
    {
      CG_Entity_CreatePhysics(localClientNum, _RSI->nextState.number, 0);
      if ( v11->physicsInstances[v12] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 820, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[authWorldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[authWorldId] != PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
    }
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v12, v11->physicsInstances[v12], 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 824, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( myBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( myBodyId )") )
      __debugbreak();
    CG_GetPoseOrigin(&_RSI->pose, &outOrigin);
    AnglesToQuat(&_RSI->pose.angles, &quat);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+148h+var_110], xmm0
      vmovss  xmm8, cs:__real@3f800000
      vmovss  dword ptr [rsp+148h+fmt], xmm8
    }
    Physics_KeyframeRigidBodyTo((Physics_WorldId)v12, RigidBodyID, &outOrigin, &quat, fmt, 0, 0, v70);
    flightDurationMs = _RSI->typeData.flightDurationMs;
    if ( (unsigned int)flightDurationMs > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 837, ASSERT_TYPE_ASSERT, "(runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED)", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
      __debugbreak();
    v18 = &s_physicsVolumeClientRuntimeData[v10][flightDurationMs];
    if ( !v18->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 839, ASSERT_TYPE_ASSERT, "(runtimeData->inUse)", (const char *)&queryFormat, "runtimeData->inUse") )
      __debugbreak();
    if ( !v18->bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 840, ASSERT_TYPE_ASSERT, "(runtimeData->bodyIds)", (const char *)&queryFormat, "runtimeData->bodyIds") )
      __debugbreak();
    Size = PhysicsBodyIdVector_GetSize(v18->bodyIds);
    v20 = 0;
    if ( Size )
    {
      __asm { vmovss  xmm9, cs:__real@80000000 }
      v22 = Size;
      while ( 1 )
      {
        v23 = PhysicsBodyIdVector_Get(v18->bodyIds, v20);
        v24 = v23 & 0xFFFFFF;
        if ( (v23 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 848, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !Physics_IsRigidBodyValid((Physics_WorldId)v12, v23) )
          goto LABEL_74;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 122, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Motion ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Motion ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( v24 == 0xFFFFFF )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Motion with invalid Body ID in world %i", "Physics_IsRigidBodyIdValid( bodyId )", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 181, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Motion ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( v24 == 0xFFFFFF )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 182, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Motion ID with invalid body id in world %i", "bodyId.isValid()", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v12)->world;
        if ( !world )
        {
          LODWORD(updateBroadphaseIfWarping) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 186, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get Motion Id %i: world is NULL", "world", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        v26 = *(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, v23) + 64);
        if ( v26 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 858, ASSERT_TYPE_ASSERT, "( Physics_IsMotionIdValid( motionId ) )", (const char *)&queryFormat, "Physics_IsMotionIdValid( motionId )") )
          __debugbreak();
        p_u = &_RSI->nextState.lerp.u;
        if ( _RSI == (centity_t *)-488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1125, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
          __debugbreak();
        if ( (p_u->anonymous.data[0] & 0x20) != 0 )
        {
          __asm { vmovss  xmm2, dword ptr [rsi+1ECh]; scalar }
          PhysicsGravityModifier_SetGravityScalar((const Physics_WorldId)v12, v26, *(const float *)&_XMM2);
        }
        else
        {
          if ( _RSI == (centity_t *)-488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1134, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
            __debugbreak();
          if ( (p_u->anonymous.data[0] & 0x40) != 0 )
          {
            __asm
            {
              vmovss  xmm2, dword ptr [rsi+1F8h]
              vmovss  xmm1, dword ptr [rsi+1F4h]
              vmovss  xmm0, dword ptr [rsi+1F0h]
              vmovss  dword ptr [rsp+148h+gravity], xmm0
              vmovss  dword ptr [rsp+148h+gravity+4], xmm1
              vmovss  dword ptr [rsp+148h+gravity+8], xmm2
            }
            PhysicsGravityModifier_SetGravity((const Physics_WorldId)v12, v26, &gravity);
          }
          else
          {
            if ( !PhysicsVolume_IsDirectionForceApplier((const LerpEntityStatePhysicsVolume *)&_RSI->nextState.lerp.u) )
            {
              if ( !PhysicsVolume_IsFocalForceApplier((const LerpEntityStatePhysicsVolume *)&_RSI->nextState.lerp.u) || CL_Pause_IsGamePaused() )
                goto LABEL_74;
              Physics_GetRigidBodyTransform((const Physics_WorldId)v12, v23, &position, &orientation);
              __asm
              {
                vmovss  xmm2, dword ptr [rsi+1F8h]
                vmovss  xmm1, dword ptr [rsi+1F4h]
                vmovss  xmm0, dword ptr [rsi+1F0h]
                vsubss  xmm5, xmm0, dword ptr [rsp+148h+position]
                vsubss  xmm6, xmm1, dword ptr [rsp+148h+position+4]
                vsubss  xmm7, xmm2, dword ptr [rsp+148h+position+8]
                vmulss  xmm1, xmm6, xmm6
                vmulss  xmm0, xmm5, xmm5
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm7, xmm7
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm3, xmm2, xmm2
                vcmpless xmm0, xmm3, xmm9
                vblendvps xmm1, xmm3, xmm8, xmm0
                vdivss  xmm3, xmm8, xmm1
                vmovss  xmm4, dword ptr [rsi+1ECh]
                vmulss  xmm0, xmm5, xmm3
                vmulss  xmm1, xmm0, xmm4
                vmovss  dword ptr [rsp+148h+force], xmm1
                vmulss  xmm2, xmm6, xmm3
                vmulss  xmm0, xmm2, xmm4
                vmovss  dword ptr [rsp+148h+force+4], xmm0
                vmulss  xmm1, xmm7, xmm3
                vmulss  xmm2, xmm1, xmm4
                vmovss  dword ptr [rsp+148h+force+8], xmm2
              }
              p_force = &force;
              goto LABEL_73;
            }
            if ( !CL_Pause_IsGamePaused() )
            {
              __asm
              {
                vmovss  xmm2, dword ptr [rsi+1ECh]
                vmulss  xmm0, xmm2, dword ptr [rsi+1F0h]
                vmovss  [rsp+148h+var_D0], xmm0
                vmulss  xmm1, xmm2, dword ptr [rsi+1F4h]
                vmovss  [rsp+148h+var_CC], xmm1
                vmulss  xmm0, xmm2, dword ptr [rsi+1F8h]
                vmovss  [rsp+148h+var_C8], xmm0
              }
              p_force = (vec3_t *)v75;
LABEL_73:
              __asm { vmovss  xmm3, dword ptr [rsi+1FCh]; maxSpeed }
              PhysicsForceAction_AddForce((const Physics_WorldId)v12, v23, p_force, *(const float *)&_XMM3);
            }
          }
        }
LABEL_74:
        if ( ++v20 >= v22 )
        {
          v11 = v71;
          v13 = v12;
          break;
        }
      }
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    if ( v11->physicsInstances[v12] == -1 )
      goto LABEL_85;
    CG_Entity_DestroyPhysics(localClientNum, _RSI->nextState.number);
  }
  v60 = v11->physicsInstances[v13];
  if ( v60 != -1 )
  {
    v61 = Physics_GetRigidBodyID((const Physics_WorldId)v12, v60, 0);
    if ( (v61 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 923, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    IsActivator = CG_PhysicsVolume_IsActivator(_RSI);
    Physics_EnableDeactivationForBody((Physics_WorldId)v12, v61, !IsActivator);
    if ( CG_PhysicsVolume_IsActivator(_RSI) )
      Physics_ActivateBody((Physics_WorldId)v12, v61);
  }
LABEL_85:
  CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
G_Create_physicsvolume
==============
*/

void __fastcall G_Create_physicsvolume(gentity_s *ent, const vec3_t *origin, double radius, double height)
{
  bool v10; 
  int v12; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 210, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Create_physicsvolume");
  ent->s.eType = ET_PHYSICS_VOLUME;
  ent->flags.m_flags[0] |= 0x200u;
  ent->s.lerp.u.anonymous.data[0] = 0;
  G_SetOrigin(ent, origin, 1, 1);
  __asm { vcomiss xmm7, cs:__real@46fffe00 }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 223, ASSERT_TYPE_ASSERT, "( height < 0x7FFF )", (const char *)&queryFormat, "height < 0x7FFF") )
    __debugbreak();
  __asm { vcvttss2si edi, xmm7 }
  v10 = __CFSHL__(_EDI, 16);
  v12 = _EDI << 16;
  __asm { vcomiss xmm6, cs:__real@477fff00 }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 226, ASSERT_TYPE_ASSERT, "( radius < 0xFFFF )", (const char *)&queryFormat, "radius < 0xFFFF") )
    __debugbreak();
  __asm { vcvttss2si eax, xmm6 }
  ent->s.staticState.general.xmodel = v12 | _EAX;
  SV_LinkEntity(ent);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PhysicsVolume_AffectsCharacters
==============
*/
void G_PhysicsVolume_AffectsCharacters(gentity_s *entity, bool enable)
{
  int v4; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1377, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1379, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1380, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  v4 = entity->s.lerp.u.anonymous.data[0] | 1;
  if ( !enable )
    v4 = entity->s.lerp.u.anonymous.data[0] & 0xFFFFFFFE;
  entity->s.lerp.u.anonymous.data[0] = v4;
}

/*
==============
G_PhysicsVolume_AffectsCharacters
==============
*/
bool G_PhysicsVolume_AffectsCharacters(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1173, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1175, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1176, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1098, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return p_u->actor.species & 1;
}

/*
==============
G_PhysicsVolume_AffectsMissiles
==============
*/
void G_PhysicsVolume_AffectsMissiles(gentity_s *entity, bool enable)
{
  int v4; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1396, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1398, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1399, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  v4 = entity->s.lerp.u.anonymous.data[0] | 2;
  if ( !enable )
    v4 = entity->s.lerp.u.anonymous.data[0] & 0xFFFFFFFD;
  entity->s.lerp.u.anonymous.data[0] = v4;
}

/*
==============
G_PhysicsVolume_AffectsMissiles
==============
*/
bool G_PhysicsVolume_AffectsMissiles(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1185, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1187, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1188, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1107, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 2) != 0;
}

/*
==============
G_PhysicsVolume_AllocateRuntimeData
==============
*/
void G_PhysicsVolume_AllocateRuntimeData(gentity_s *entity)
{
  unsigned int v2; 
  PhysicsVolumeRuntimeData *v3; 
  hkArray<unsigned int,hkContainerHeapAllocator> *v4; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 356, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 357, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v2 = 0;
  v3 = s_physicsVolumeServerRuntimeData;
  while ( v3->inUse )
  {
    if ( !v3[1].inUse )
    {
      ++v2;
      break;
    }
    if ( !v3[2].inUse )
    {
      v2 += 2;
      break;
    }
    if ( !v3[3].inUse )
    {
      v2 += 3;
      break;
    }
    v3 += 4;
    v2 += 4;
    if ( v2 >= 0x20 )
      goto LABEL_18;
  }
  if ( v2 < 0x20 )
    goto LABEL_19;
LABEL_18:
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143ED0180, 39i64);
LABEL_19:
  if ( s_physicsVolumeServerRuntimeData[v2].entityNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 376, ASSERT_TYPE_ASSERT, "(s_physicsVolumeServerRuntimeData[runtimeIdx].entityNum == 0)", (const char *)&queryFormat, "s_physicsVolumeServerRuntimeData[runtimeIdx].entityNum == 0") )
    __debugbreak();
  s_physicsVolumeServerRuntimeData[v2].inUse = 1;
  s_physicsVolumeServerRuntimeData[v2].entityNum = entity->s.number;
  entity->c.item[0].ammoCount = v2;
  if ( s_physicsVolumeServerRuntimeData[v2].bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 383, ASSERT_TYPE_ASSERT, "(!s_physicsVolumeServerRuntimeData[runtimeIdx].bodyIds)", (const char *)&queryFormat, "!s_physicsVolumeServerRuntimeData[runtimeIdx].bodyIds") )
    __debugbreak();
  v4 = PhysicsBodyIdVector_Create();
  s_physicsVolumeServerRuntimeData[v2].bodyIds = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 385, ASSERT_TYPE_ASSERT, "(s_physicsVolumeServerRuntimeData[runtimeIdx].bodyIds)", (const char *)&queryFormat, "s_physicsVolumeServerRuntimeData[runtimeIdx].bodyIds") )
    __debugbreak();
}

/*
==============
G_PhysicsVolume_CreatePhysics
==============
*/
void G_PhysicsVolume_CreatePhysics(gentity_s *entity)
{
  const PhysicsAsset *AssetByName; 
  G_PhysicsObject *v3; 
  LerpEntityStateTypeUnion *p_u; 
  bool neverDeactivate; 
  unsigned int Instance; 
  unsigned __int16 number; 
  int Ref; 
  int moverFlags; 
  const char *v13; 
  int v14; 
  const char *v15; 
  unsigned int RigidBodyID; 
  int shapeOverride; 
  int shapeOverridea; 
  float forceType; 
  vec3_t position; 
  vec4_t quat; 

  _RBX = entity;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 418, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 421, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( _RBX->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 422, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( !G_PhysicsVolume_IsEnabled(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 423, ASSERT_TYPE_ASSERT, "( G_PhysicsVolume_IsEnabled( entity ) )", (const char *)&queryFormat, "G_PhysicsVolume_IsEnabled( entity )") )
    __debugbreak();
  G_PhysicsVolume_AllocateRuntimeData(_RBX);
  AssetByName = Physics_GetAssetByName(PHYSICS_VOLUME_ASSET_NAME);
  if ( !AssetByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 430, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
  v3 = G_PhysicsObject_Get(_RBX);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 434, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( v3->physicsInstances[0] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 435, ASSERT_TYPE_ASSERT, "( physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_MAIN] == 0xFFFFFFFF )", (const char *)&queryFormat, "physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_MAIN] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( v3->physicsInstances[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 436, ASSERT_TYPE_ASSERT, "( physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_DETAIL] == 0xFFFFFFFF )", (const char *)&queryFormat, "physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_DETAIL] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v3->mapping = PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
    vmovss  dword ptr [rsp+0D8h+var_58], xmm0
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  dword ptr [rsp+0D8h+var_58+8], xmm0
    vmovss  dword ptr [rsp+0D8h+var_58+4], xmm1
  }
  AnglesToQuat(&_RBX->r.currentAngles, &quat);
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1197, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( _RBX->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1200, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &_RBX->s.lerp.u;
  if ( _RBX == (gentity_s *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1116, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  neverDeactivate = (p_u->anonymous.data[0] & 0x10) != 0;
  Instance = Physics_CreateInstance(PHYSICS_WORLD_ID_FIRST);
  if ( Instance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 453, ASSERT_TYPE_ASSERT, "( instanceId != 0xFFFFFFFF )", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v3->physicsInstances[0] = Instance;
  number = _RBX->s.number;
  if ( _RBX->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", number, "signed", (__int16)number) )
    __debugbreak();
  Ref = Physics_MakeRef(Physics_RefSystem_GEntities, Physics_RelationshipSystem_None, _RBX->r.modelType, number);
  moverFlags = _RBX->s.staticState.mover.moverFlags;
  if ( (p_u->actor.species & 4) != 0 )
  {
    if ( Physics_InstantiateAssetBody(Instance, PHYSICS_WORLD_ID_FIRST, AssetByName, 0, Ref, &position, &quat, 1, !neverDeactivate, neverDeactivate, moverFlags, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
      goto LABEL_50;
    v13 = "Physics_InstantiateAssetBody( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
    v14 = 462;
    v15 = "(Physics_InstantiateAssetBody( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
    }
    if ( moverFlags >> 16 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmovss  [rsp+0D8h+forceType], xmm0
        vmovss  [rsp+0D8h+shapeOverride], xmm1
      }
      if ( Physics_InstantiateAssetBodyCylinder(Instance, PHYSICS_WORLD_ID_FIRST, AssetByName, 0, Ref, &position, &quat, 1, !neverDeactivate, neverDeactivate, *(float *)&shapeOverride, forceType, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
        goto LABEL_50;
      v13 = "Physics_InstantiateAssetBodyCylinder( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
      v14 = 472;
      v15 = "(Physics_InstantiateAssetBodyCylinder( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
    }
    else
    {
      __asm { vmovss  [rsp+0D8h+shapeOverride], xmm1 }
      if ( Physics_InstantiateAssetBodySphere(Instance, PHYSICS_WORLD_ID_FIRST, AssetByName, 0, Ref, &position, &quat, 1, !neverDeactivate, neverDeactivate, *(float *)&shapeOverridea, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
        goto LABEL_50;
      v13 = "Physics_InstantiateAssetBodySphere( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
      v14 = 476;
      v15 = "(Physics_InstantiateAssetBodySphere( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", v14, ASSERT_TYPE_ASSERT, v15, (const char *)&queryFormat, v13) )
    __debugbreak();
LABEL_50:
  ++AssetByName->usageCounter.serverEnt;
  G_PhysicsObject_MarkPhysicsObjectAsUsed(_RBX->s.number, 1);
  G_PhysicsObject_MarkPhysicsObjectAsShown(_RBX->s.number, 1, 1);
  G_PhysicsObject_MarkPhysicsObjectDetailAsShown(_RBX->s.number, 1, 1);
  G_PhysicsObject_CachePrimaryBodies(_RBX->s.number);
  RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 491, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_SubscribeToTriggerEvent(PHYSICS_WORLD_ID_FIRST, RigidBodyID);
}

/*
==============
G_PhysicsVolume_Enable
==============
*/
void G_PhysicsVolume_Enable(gentity_s *entity, bool enable)
{
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1347, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1349, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1350, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( enable )
  {
    if ( !G_PhysicsVolume_IsEnabled(entity) )
    {
      entity->s.lerp.u.anonymous.data[0] |= 8u;
      if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
        __debugbreak();
      if ( GUtils::ms_gUtils->ShouldCreateEntityPhysicsOnInit(GUtils::ms_gUtils, entity) )
        G_Utils_CreateEntityPhysics(entity);
    }
  }
  else
  {
    entity->s.lerp.u.anonymous.data[0] &= ~8u;
    G_Utils_DestroyEntityPhysics(entity);
  }
}

/*
==============
G_PhysicsVolume_GetEffectsAt
==============
*/
void G_PhysicsVolume_GetEffectsAt(const vec3_t *point, vec3_t *gravity, vec3_t *force)
{
  HavokPhysics_CollisionQueryResult *AllResult; 
  int NumHits; 
  int v13; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  __int64 v17; 
  hkMemoryAllocator *v21; 
  hkMemoryAllocator *v22; 
  Physics_QueryPointExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v26; 
  char v27; 
  void *retaddr; 
  float gravityScalar; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBX = gravity;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 972, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized", -2i64) )
    __debugbreak();
  Physics_GetGravity(PHYSICS_WORLD_ID_FIRST, _RBX);
  *(_QWORD *)force->v = 0i64;
  force->v[2] = 0.0;
  AllResult = PhysicsQuery_GetAllResult(PHYSICS_WORLD_ID_FIRST);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 983, ASSERT_TYPE_ASSERT, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v26, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v26, -5);
  v26.m_ignorePhysicsVolumes = Physics_IgnoreVolumeOption_OnlyVolumes;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; maxDistance
    vmovss  [rsp+0C8h+extendedData.collisionBuffer], xmm2
  }
  extendedData.phaseSelection = All;
  extendedData.contents = -1;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v26;
  Physics_QueryPoint(PHYSICS_WORLD_ID_FIRST, point, *(float *)&_XMM2, &extendedData, AllResult);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  [rsp+0C8h+gravityScalar], xmm6
  }
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  v13 = 0;
  if ( NumHits > 0 )
  {
    do
    {
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(AllResult, v13);
      if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1007, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      v17 = EntityNum;
      if ( (unsigned int)EntityNum > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1012, ASSERT_TYPE_ASSERT, "( entnum >= 0 && entnum <= ( 2048 ) )", (const char *)&queryFormat, "entnum >= 0 && entnum <= MAX_GENTITIES") )
        __debugbreak();
      PhysicsVolume_CalculateEffects((LerpEntityStatePhysicsVolume *)&g_entities[v17].s.lerp.u, point, _RBX, &gravityScalar, force);
      ++v13;
    }
    while ( v13 < NumHits );
    __asm { vmovss  xmm6, [rsp+0C8h+gravityScalar] }
  }
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm0, xmm6, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm0
  }
  v21 = hkMemHeapAllocator();
  v26.m_ignoreBodies.m_size = 0;
  if ( v26.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v26.m_ignoreBodies.m_data, 4, v26.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v26.m_ignoreBodies.m_data = NULL;
  v26.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v22 = hkMemHeapAllocator();
  v26.m_ignoreEntities.m_size = 0;
  if ( v26.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v22, v26.m_ignoreEntities.m_data, 8, v26.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  _R11 = &v27;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
G_PhysicsVolume_Init
==============
*/
void G_PhysicsVolume_Init(void)
{
  if ( s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 80, ASSERT_TYPE_ASSERT, "( !s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "!s_gPhysicsVolumeInitialized") )
    __debugbreak();
  memset_0(s_physicsVolumeServerRuntimeData, 0, sizeof(s_physicsVolumeServerRuntimeData));
  s_gPhysicsVolumeInitialized = 1;
}

/*
==============
G_PhysicsVolume_IsActivator
==============
*/
bool G_PhysicsVolume_IsActivator(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1197, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1199, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1200, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1116, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x10) != 0;
}

/*
==============
G_PhysicsVolume_IsDirectionForceApplier
==============
*/
bool G_PhysicsVolume_IsDirectionForceApplier(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1233, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1235, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1236, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1143, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x80) != 0;
}

/*
==============
G_PhysicsVolume_IsEnabled
==============
*/
bool G_PhysicsVolume_IsEnabled(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1161, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1163, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1164, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1089, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 8) != 0;
}

/*
==============
G_PhysicsVolume_IsFocalForceApplier
==============
*/
bool G_PhysicsVolume_IsFocalForceApplier(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1245, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1247, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1248, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1152, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return BYTE1(p_u->anonymous.data[0]) & 1;
}

/*
==============
G_PhysicsVolume_IsGravityScalar
==============
*/
bool G_PhysicsVolume_IsGravityScalar(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1209, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1211, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1212, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1125, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x20) != 0;
}

/*
==============
G_PhysicsVolume_IsGravityVector
==============
*/
bool G_PhysicsVolume_IsGravityVector(const gentity_s *entity)
{
  LerpEntityStateTypeUnion *p_u; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1221, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1223, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1224, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( !p_u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1134, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (p_u->anonymous.data[0] & 0x40) != 0;
}

/*
==============
G_PhysicsVolume_IsInitialized
==============
*/
_BOOL8 G_PhysicsVolume_IsInitialized()
{
  return s_gPhysicsVolumeInitialized;
}

/*
==============
G_PhysicsVolume_PreDestroyPhysics
==============
*/
void G_PhysicsVolume_PreDestroyPhysics(gentity_s *entity)
{
  G_PhysicsObject *v2; 
  unsigned int v3; 
  __int64 ammoCount; 
  __int64 v5; 
  unsigned int RigidBodyID; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 499, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 502, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 503, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  v2 = G_PhysicsObject_Get(entity);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 507, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  v3 = v2->physicsInstances[0];
  if ( v3 != -1 )
  {
    if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 393, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
      __debugbreak();
    ammoCount = entity->c.item[0].ammoCount;
    if ( (unsigned int)ammoCount > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 398, ASSERT_TYPE_ASSERT, "( runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED )", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
      __debugbreak();
    v5 = ammoCount;
    if ( s_physicsVolumeServerRuntimeData[v5].entityNum != entity->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 399, ASSERT_TYPE_ASSERT, "( s_physicsVolumeServerRuntimeData[runtimeDataIndex].entityNum == entity->s.number )", (const char *)&queryFormat, "s_physicsVolumeServerRuntimeData[runtimeDataIndex].entityNum == entity->s.number") )
      __debugbreak();
    if ( !s_physicsVolumeServerRuntimeData[v5].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 400, ASSERT_TYPE_ASSERT, "( s_physicsVolumeServerRuntimeData[runtimeDataIndex].inUse )", (const char *)&queryFormat, "s_physicsVolumeServerRuntimeData[runtimeDataIndex].inUse") )
      __debugbreak();
    if ( !s_physicsVolumeServerRuntimeData[v5].bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 404, ASSERT_TYPE_ASSERT, "(s_physicsVolumeServerRuntimeData[runtimeDataIndex].bodyIds)", (const char *)&queryFormat, "s_physicsVolumeServerRuntimeData[runtimeDataIndex].bodyIds") )
      __debugbreak();
    PhysicsBodyIdVector_Destroy(s_physicsVolumeServerRuntimeData[v5].bodyIds);
    s_physicsVolumeServerRuntimeData[v5].bodyIds = NULL;
    s_physicsVolumeServerRuntimeData[v5].inUse = 0;
    s_physicsVolumeServerRuntimeData[v5].entityNum = 0;
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v3, 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 521, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    Physics_UnsubscribeFromTriggerEvent(PHYSICS_WORLD_ID_FIRST, RigidBodyID);
  }
}

/*
==============
G_PhysicsVolume_SetActivator
==============
*/
void G_PhysicsVolume_SetActivator(gentity_s *entity, bool enable)
{
  int v4; 
  int v5; 
  unsigned int v6; 
  G_PhysicsObject *v7; 
  unsigned int v8; 
  unsigned int RigidBodyID; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1415, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1417, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1418, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  v4 = entity->s.lerp.u.anonymous.data[0];
  v5 = v4 | 0x10;
  v6 = v4 & 0xFFFFFFEF;
  if ( !enable )
    v5 = v6;
  entity->s.lerp.u.anonymous.data[0] = v5;
  v7 = G_PhysicsObject_Get(entity);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1432, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  v8 = v7->physicsInstances[0];
  if ( v8 != -1 )
  {
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v8, 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1443, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    Physics_EnableDeactivationForBody(PHYSICS_WORLD_ID_FIRST, RigidBodyID, !enable);
    if ( enable )
      Physics_ActivateBody(PHYSICS_WORLD_ID_FIRST, RigidBodyID);
  }
}

/*
==============
G_PhysicsVolume_SetDirectionForceApplier
==============
*/

void __fastcall G_PhysicsVolume_SetDirectionForceApplier(gentity_s *entity, bool enable, const vec3_t *direction, double force, float maxSpeed)
{
  int v10; 
  float v12; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  _RBX = entity;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1505, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1507, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( _RBX->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1508, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityScalar(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1509, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityScalar( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityScalar( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityVector(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1510, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityVector( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityVector( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsFocalForceApplier(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1511, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsFocalForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsFocalForceApplier( entity )") )
    __debugbreak();
  v10 = _RBX->s.lerp.u.anonymous.data[0];
  if ( enable )
  {
    __asm { vmovss  xmm0, [rsp+48h+maxSpeed] }
    _RBX->s.lerp.u.anonymous.data[0] = v10 | 0x80;
    __asm { vmovss  dword ptr [rbx+5Ch], xmm6 }
    _RBX->s.lerp.u.anonymous.data[2] = LODWORD(direction->v[0]);
    _RBX->s.lerp.u.anonymous.data[3] = LODWORD(direction->v[1]);
    v12 = direction->v[2];
    __asm { vmovss  dword ptr [rbx+6Ch], xmm0 }
    _RBX->s.lerp.u.actor.impactVector.v[1] = v12;
  }
  else
  {
    _RBX->s.lerp.u.anonymous.data[0] = v10 & 0xFFFFFF7F;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
G_PhysicsVolume_SetFocalForceApplier
==============
*/

void __fastcall G_PhysicsVolume_SetFocalForceApplier(gentity_s *entity, bool enable, const vec3_t *point, double force, float maxSpeed)
{
  int v10; 
  float v12; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  _RBX = entity;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1532, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1534, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( _RBX->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1535, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityScalar(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1536, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityScalar( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityScalar( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityVector(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1537, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityVector( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityVector( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsDirectionForceApplier(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1538, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsDirectionForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsDirectionForceApplier( entity )") )
    __debugbreak();
  v10 = _RBX->s.lerp.u.anonymous.data[0];
  if ( enable )
  {
    __asm { vmovss  xmm0, [rsp+48h+maxSpeed] }
    _RBX->s.lerp.u.anonymous.data[0] = v10 | 0x100;
    __asm { vmovss  dword ptr [rbx+5Ch], xmm6 }
    _RBX->s.lerp.u.anonymous.data[2] = LODWORD(point->v[0]);
    _RBX->s.lerp.u.anonymous.data[3] = LODWORD(point->v[1]);
    v12 = point->v[2];
    __asm { vmovss  dword ptr [rbx+6Ch], xmm0 }
    _RBX->s.lerp.u.actor.impactVector.v[1] = v12;
  }
  else
  {
    _RBX->s.lerp.u.anonymous.data[0] = v10 & 0xFFFFFEFF;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
G_PhysicsVolume_SetGravityScalar
==============
*/

void __fastcall G_PhysicsVolume_SetGravityScalar(gentity_s *entity, bool enable, double scale)
{
  int v7; 
  unsigned int v8; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  _RBX = entity;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1457, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1459, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( _RBX->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1460, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityVector(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1461, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityVector( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityVector( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsDirectionForceApplier(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1462, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsDirectionForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsDirectionForceApplier( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsFocalForceApplier(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1463, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsFocalForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsFocalForceApplier( entity )") )
    __debugbreak();
  v7 = _RBX->s.lerp.u.anonymous.data[0];
  if ( enable )
  {
    __asm { vmovss  dword ptr [rbx+5Ch], xmm6 }
    v8 = v7 | 0x20;
  }
  else
  {
    v8 = v7 & 0xFFFFFFDF;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  _RBX->s.lerp.u.anonymous.data[0] = v8;
}

/*
==============
G_PhysicsVolume_SetGravityVector
==============
*/
void G_PhysicsVolume_SetGravityVector(gentity_s *entity, bool enable, const vec3_t *gravity)
{
  int v6; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1480, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1482, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1483, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityScalar(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1484, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityScalar( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityScalar( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsDirectionForceApplier(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1485, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsDirectionForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsDirectionForceApplier( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsFocalForceApplier(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1486, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsFocalForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsFocalForceApplier( entity )") )
    __debugbreak();
  v6 = entity->s.lerp.u.anonymous.data[0];
  if ( enable )
  {
    entity->s.lerp.u.anonymous.data[0] = v6 | 0x40;
    entity->s.lerp.u.anonymous.data[2] = LODWORD(gravity->v[0]);
    entity->s.lerp.u.anonymous.data[3] = LODWORD(gravity->v[1]);
    entity->s.lerp.u.anonymous.data[4] = LODWORD(gravity->v[2]);
  }
  else
  {
    entity->s.lerp.u.anonymous.data[0] = v6 & 0xFFFFFFBF;
  }
}

/*
==============
G_PhysicsVolume_Shutdown
==============
*/
void G_PhysicsVolume_Shutdown(void)
{
  int *p_entityNum; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 100, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  p_entityNum = &s_physicsVolumeServerRuntimeData[0].entityNum;
  do
  {
    if ( *((_BYTE *)p_entityNum - 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 104, ASSERT_TYPE_ASSERT, "( !s_physicsVolumeServerRuntimeData[dataIdx].inUse )", (const char *)&queryFormat, "!s_physicsVolumeServerRuntimeData[dataIdx].inUse") )
      __debugbreak();
    if ( *p_entityNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 105, ASSERT_TYPE_ASSERT, "( s_physicsVolumeServerRuntimeData[dataIdx].entityNum == 0 )", (const char *)&queryFormat, "s_physicsVolumeServerRuntimeData[dataIdx].entityNum == 0") )
      __debugbreak();
    if ( *(_QWORD *)(p_entityNum + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 107, ASSERT_TYPE_ASSERT, "( !s_physicsVolumeServerRuntimeData[dataIdx].bodyIds )", (const char *)&queryFormat, "!s_physicsVolumeServerRuntimeData[dataIdx].bodyIds") )
      __debugbreak();
    p_entityNum += 4;
  }
  while ( (__int64)p_entityNum < (__int64)&s_physicsVolumeClientRuntimeData[0][0].entityNum );
  s_gPhysicsVolumeInitialized = 0;
}

/*
==============
G_PhysicsVolume_TriggerEvent
==============
*/
void G_PhysicsVolume_TriggerEvent(Physics_WorldId worldId, int triggerEntNum, unsigned int triggeringBody, bool enter)
{
  __int64 v5; 
  gentity_s *v7; 
  __int64 ammoCount; 
  PhysicsVolumeRuntimeData *v9; 
  hkArray<unsigned int,hkContainerHeapAllocator> *bodyIds; 

  v5 = triggerEntNum;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 255, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 258, ASSERT_TYPE_ASSERT, "( triggerEntNum >= 0 && triggerEntNum < ( 2048 ) )", (const char *)&queryFormat, "triggerEntNum >= 0 && triggerEntNum < MAX_GENTITIES") )
    __debugbreak();
  v7 = &g_entities[v5];
  if ( !G_PhysicsVolume_IsEnabled(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 262, ASSERT_TYPE_ASSERT, "( G_PhysicsVolume_IsEnabled( triggerEntity ) )", (const char *)&queryFormat, "G_PhysicsVolume_IsEnabled( triggerEntity )") )
    __debugbreak();
  ammoCount = v7->c.item[0].ammoCount;
  if ( (unsigned int)ammoCount > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 266, ASSERT_TYPE_ASSERT, "( runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED )", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
    __debugbreak();
  v9 = &s_physicsVolumeServerRuntimeData[ammoCount];
  if ( !v9->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 268, ASSERT_TYPE_ASSERT, "( runtimeData->inUse )", (const char *)&queryFormat, "runtimeData->inUse") )
    __debugbreak();
  if ( v9->entityNum != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 269, ASSERT_TYPE_ASSERT, "( runtimeData->entityNum == triggerEntNum )", (const char *)&queryFormat, "runtimeData->entityNum == triggerEntNum") )
    __debugbreak();
  bodyIds = v9->bodyIds;
  if ( enter )
    PhysicsBodyIdVector_Add(bodyIds, triggeringBody);
  else
    PhysicsBodyIdVector_Remove(bodyIds, triggeringBody);
}

/*
==============
G_PhysicsVolume_Update
==============
*/
void G_PhysicsVolume_Update(gentity_s *entity)
{
  __int64 ammoCount; 
  PhysicsVolumeRuntimeData *v7; 
  unsigned int v8; 
  unsigned int Size; 
  unsigned int v12; 
  hknpWorld *world; 
  unsigned int v14; 
  LerpEntityStateTypeUnion *p_u; 
  vec3_t *p_force; 
  __int64 v52; 
  __int64 v53; 
  vec3_t gravity; 
  int v55[4]; 
  vec3_t position; 
  vec3_t force; 
  vec4_t orientation; 

  _RSI = entity;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 721, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( G_PhysicsVolume_IsEnabled(_RSI) )
  {
    ammoCount = _RSI->c.item[0].ammoCount;
    if ( (unsigned int)ammoCount > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 732, ASSERT_TYPE_ASSERT, "( runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED )", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
      __debugbreak();
    v7 = &s_physicsVolumeServerRuntimeData[ammoCount];
    if ( !v7->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 734, ASSERT_TYPE_ASSERT, "( runtimeData->inUse )", (const char *)&queryFormat, "runtimeData->inUse") )
      __debugbreak();
    if ( !v7->bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 735, ASSERT_TYPE_ASSERT, "( runtimeData->bodyIds )", (const char *)&queryFormat, "runtimeData->bodyIds") )
      __debugbreak();
    v8 = 0;
    Size = PhysicsBodyIdVector_GetSize(v7->bodyIds);
    if ( Size )
    {
      __asm
      {
        vmovaps [rsp+108h+var_58], xmm8
        vmovss  xmm8, cs:__real@3f800000
        vmovaps [rsp+108h+var_68], xmm9
        vmovss  xmm9, cs:__real@80000000
        vmovaps [rsp+108h+var_38], xmm6
        vmovaps [rsp+108h+var_48], xmm7
      }
      while ( 1 )
      {
        v12 = PhysicsBodyIdVector_Get(v7->bodyIds, v8);
        if ( (v12 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 743, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v12) )
          goto LABEL_49;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 122, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Motion ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (v12 & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v52) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Motion with invalid Body ID in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v52) )
            __debugbreak();
          LODWORD(v53) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 182, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Motion ID with invalid body id in world %i", "bodyId.isValid()", v53) )
            __debugbreak();
        }
        world = g_havokPhysicsWorlds[0].world;
        if ( !g_havokPhysicsWorlds[0].world )
        {
          LODWORD(v52) = g_havokPhysicsWorlds[0].world;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 186, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get Motion Id %i: world is NULL", "world", v52) )
            __debugbreak();
        }
        v14 = *(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, v12) + 64);
        if ( v14 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 753, ASSERT_TYPE_ASSERT, "( Physics_IsMotionIdValid( motionId ) )", (const char *)&queryFormat, "Physics_IsMotionIdValid( motionId )") )
          __debugbreak();
        p_u = &_RSI->s.lerp.u;
        if ( _RSI == (gentity_s *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1125, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
          __debugbreak();
        if ( (p_u->anonymous.data[0] & 0x20) != 0 )
        {
          __asm { vmovss  xmm2, dword ptr [rsi+5Ch]; scalar }
          PhysicsGravityModifier_SetGravityScalar(PHYSICS_WORLD_ID_FIRST, v14, *(const float *)&_XMM2);
        }
        else
        {
          if ( _RSI == (gentity_s *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1134, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
            __debugbreak();
          if ( (p_u->anonymous.data[0] & 0x40) != 0 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+60h]
              vmovss  xmm1, dword ptr [rsi+64h]
              vmovss  dword ptr [rsp+108h+gravity], xmm0
              vmovss  xmm0, dword ptr [rsi+68h]
              vmovss  dword ptr [rsp+108h+gravity+8], xmm0
              vmovss  dword ptr [rsp+108h+gravity+4], xmm1
            }
            PhysicsGravityModifier_SetGravity(PHYSICS_WORLD_ID_FIRST, v14, &gravity);
          }
          else
          {
            if ( PhysicsVolume_IsDirectionForceApplier((const LerpEntityStatePhysicsVolume *)&_RSI->s.lerp.u) )
            {
              __asm
              {
                vmovss  xmm2, dword ptr [rsi+5Ch]
                vmulss  xmm0, xmm2, dword ptr [rsi+60h]
                vmulss  xmm1, xmm2, dword ptr [rsi+64h]
                vmovss  [rsp+108h+var_B8], xmm0
                vmulss  xmm0, xmm2, dword ptr [rsi+68h]
                vmovss  [rsp+108h+var_B0], xmm0
                vmovss  [rsp+108h+var_B4], xmm1
              }
              p_force = (vec3_t *)v55;
LABEL_48:
              __asm { vmovss  xmm3, dword ptr [rsi+6Ch]; maxSpeed }
              PhysicsForceAction_AddForce(PHYSICS_WORLD_ID_FIRST, v12, p_force, *(const float *)&_XMM3);
              goto LABEL_49;
            }
            if ( PhysicsVolume_IsFocalForceApplier((const LerpEntityStatePhysicsVolume *)&_RSI->s.lerp.u) )
            {
              Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, v12, &position, &orientation);
              __asm
              {
                vmovss  xmm4, dword ptr [rsi+5Ch]
                vmovss  xmm0, dword ptr [rsi+60h]
                vsubss  xmm5, xmm0, dword ptr [rsp+108h+position]
                vmovss  xmm1, dword ptr [rsi+64h]
                vsubss  xmm6, xmm1, dword ptr [rsp+108h+position+4]
                vmovss  xmm0, dword ptr [rsi+68h]
                vsubss  xmm7, xmm0, dword ptr [rsp+108h+position+8]
                vmulss  xmm0, xmm7, xmm7
                vmulss  xmm2, xmm6, xmm6
                vmulss  xmm1, xmm5, xmm5
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm2, xmm3, xmm0
                vsqrtss xmm1, xmm2, xmm2
                vcmpless xmm0, xmm1, xmm9
                vblendvps xmm0, xmm1, xmm8, xmm0
                vdivss  xmm3, xmm8, xmm0
                vmulss  xmm0, xmm3, xmm5
                vmulss  xmm1, xmm0, xmm4
                vmulss  xmm2, xmm3, xmm6
                vmulss  xmm0, xmm2, xmm4
                vmovss  dword ptr [rsp+108h+force], xmm1
                vmulss  xmm1, xmm3, xmm7
                vmulss  xmm2, xmm1, xmm4
                vmovss  dword ptr [rsp+108h+force+8], xmm2
                vmovss  dword ptr [rsp+108h+force+4], xmm0
              }
              p_force = &force;
              goto LABEL_48;
            }
          }
        }
LABEL_49:
        if ( ++v8 >= Size )
        {
          __asm
          {
            vmovaps xmm9, [rsp+108h+var_68]
            vmovaps xmm8, [rsp+108h+var_58]
            vmovaps xmm7, [rsp+108h+var_48]
            vmovaps xmm6, [rsp+108h+var_38]
          }
          return;
        }
      }
    }
  }
}

/*
==============
G_Spawn_physicsvolume
==============
*/
void G_Spawn_physicsvolume(gentity_s *ent)
{
  gentity_s *v1; 
  int v2; 
  int v3; 
  int v4; 
  const char **v5; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  const char *v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 

  v1 = ent;
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 158, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  v2 = 0;
  v1->s.eType = ET_PHYSICS_VOLUME;
  v3 = 0;
  v1->flags.m_flags[0] |= 0x200u;
  v4 = -1;
  if ( level.spawnVar.numSpawnVars <= 0 )
    goto LABEL_45;
  v5 = (const char **)&level.spawnVar.spawnVars[0][1];
  do
  {
    v6 = *(v5 - 1);
    v7 = 0x7FFFFFFFi64;
    v8 = PHYSICS_VOLUME_KEY_SHAPEINDEX;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = v8 - v6;
    while ( 1 )
    {
      v10 = *(unsigned __int8 *)v6;
      v11 = v7;
      v12 = (unsigned __int8)(v6++)[v9];
      --v7;
      if ( !v11 )
      {
LABEL_21:
        v4 = atoi(*v5);
        goto LABEL_22;
      }
      if ( v10 != v12 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v14 = v12;
        if ( v10 != v14 )
          break;
      }
      if ( !v10 )
        goto LABEL_21;
    }
    v15 = (__int64)*(v5 - 1);
    v16 = 0x7FFFFFFFi64;
    v17 = PHYSICS_VOLUME_KEY_SPAWNFLAGS;
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v18 = v15 - (_QWORD)v17;
    do
    {
      v19 = (unsigned __int8)v17[v18];
      v20 = v16;
      v21 = *(unsigned __int8 *)v17++;
      --v16;
      if ( !v20 )
        break;
      if ( v19 != v21 )
      {
        v22 = v19 + 32;
        if ( (unsigned int)(v19 - 65) > 0x19 )
          v22 = v19;
        v19 = v22;
        v23 = v21 + 32;
        if ( (unsigned int)(v21 - 65) > 0x19 )
          v23 = v21;
        if ( v19 != v23 )
          goto LABEL_22;
      }
    }
    while ( v19 );
    v2 = atoi(*v5);
LABEL_22:
    ++v3;
    v5 += 2;
  }
  while ( v3 < level.spawnVar.numSpawnVars );
  v1 = ent;
  if ( v4 == -1 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 196, ASSERT_TYPE_ASSERT, "(shapeIndex != -1)", (const char *)&queryFormat, "shapeIndex != PHYSICSSHAPE_OVERRIDEID_INVALID") )
      __debugbreak();
  }
  v1->s.staticState.general.xmodel = v4;
  v1->s.lerp.u.anonymous.data[0] = v2 | 4;
  SV_LinkEntity(v1);
}

/*
==============
PhysicsVolume_AffectsCharacters
==============
*/
bool PhysicsVolume_AffectsCharacters(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1098, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return physicsVolume->flags & 1;
}

/*
==============
PhysicsVolume_AffectsMissiles
==============
*/
bool PhysicsVolume_AffectsMissiles(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1107, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (physicsVolume->flags & 2) != 0;
}

/*
==============
PhysicsVolume_CalculateEffects
==============
*/
void PhysicsVolume_CalculateEffects(LerpEntityStatePhysicsVolume *physicsVolume, const vec3_t *point, vec3_t *gravity, float *gravityScalar, vec3_t *force)
{
  unsigned int flags; 
  float vectorX; 

  _RDI = force;
  _RSI = gravity;
  _RBP = gravityScalar;
  _RBX = physicsVolume;
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1089, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  if ( (_RBX->flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 940, ASSERT_TYPE_ASSERT, "( PhysicsVolume_IsEnabled( physicsVolume ) )", (const char *)&queryFormat, "PhysicsVolume_IsEnabled( physicsVolume )") )
    __debugbreak();
  flags = _RBX->flags;
  if ( (_RBX->flags & 0x20) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vminss  xmm1, xmm0, dword ptr [rbp+0]
      vmovss  dword ptr [rbp+0], xmm1
    }
    flags = _RBX->flags;
  }
  if ( (flags & 0x40) != 0 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+10h]
      vmovss  xmm0, dword ptr [rbx+0Ch]
    }
    vectorX = _RBX->vectorX;
    __asm
    {
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  dword ptr [rsi+8], xmm1
    }
    _RSI->v[0] = vectorX;
  }
  else if ( (flags & 0x80) != 0 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+4]
      vmulss  xmm0, xmm3, dword ptr [rbx+8]
      vmovss  xmm2, dword ptr [rbx+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm4, dword ptr [rbx+10h]
      vmulss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rdi], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm0, xmm3, xmm4
      vmovss  dword ptr [rdi+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm1
    }
  }
  else if ( PhysicsVolume_IsFocalForceApplier(_RBX) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm5, xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovaps [rsp+78h+var_38], xmm6
      vsubss  xmm6, xmm1, dword ptr [r14+4]
      vmovaps [rsp+78h+var_48], xmm7
      vsubss  xmm7, xmm0, dword ptr [r14+8]
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
      vmovss  xmm4, dword ptr [rbx+4]
      vdivss  xmm3, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm1, dword ptr [rdi]
      vmulss  xmm0, xmm6, xmm3
      vmovaps xmm6, [rsp+78h+var_38]
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rdi], xmm2
      vaddss  xmm2, xmm1, dword ptr [rdi+4]
      vmulss  xmm0, xmm7, xmm3
      vmovaps xmm7, [rsp+78h+var_48]
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rdi+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
}

/*
==============
PhysicsVolume_DebugDrawArrow
==============
*/

void __fastcall PhysicsVolume_DebugDrawArrow(const vec3_t *base, const vec3_t *direction, double length, const vec4_t *color)
{
  const vec3_t *v22; 
  vec3_t cross; 
  vec3_t v1; 
  vec3_t end; 
  vec3_t v104; 
  vec3_t v105; 
  vec3_t v106; 
  vec3_t v107; 
  char v108; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovss  xmm4, dword ptr [rdx]
    vmovss  xmm3, dword ptr [rdx+4]
    vmulss  xmm0, xmm2, xmm4
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm2, xmm3
    vmovaps xmm14, xmm2
    vmovss  xmm2, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+150h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+4]
  }
  v22 = direction;
  __asm
  {
    vmulss  xmm0, xmm14, xmm2
    vmovss  dword ptr [rsp+150h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+150h+end+8], xmm1
    vmovss  dword ptr [rsp+150h+v1], xmm2
    vmovss  dword ptr [rsp+150h+v1+4], xmm4
    vmovss  dword ptr [rsp+150h+v1+8], xmm3
  }
  Vec3Cross(direction, &v1, &cross);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+150h+cross]
    vmovss  xmm5, dword ptr [rsp+150h+cross+4]
    vmovss  xmm6, dword ptr [rsp+150h+cross+8]
    vmovss  xmm8, cs:__real@3f800000
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm11, xmm4, xmm1
    vmulss  xmm12, xmm5, xmm1
    vmulss  xmm13, xmm6, xmm1
    vmovss  dword ptr [rsp+150h+cross], xmm11
    vmovss  dword ptr [rsp+150h+cross+4], xmm12
    vmovss  dword ptr [rsp+150h+cross+8], xmm13
  }
  Vec3Cross(&cross, v22, &v1);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+150h+v1]
    vmovss  xmm6, dword ptr [rsp+150h+v1+4]
    vmovss  xmm4, dword ptr [rsp+150h+v1+8]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmulss  xmm2, xmm14, cs:__real@3f666666
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
    vdivss  xmm1, xmm8, xmm0
    vmulss  xmm0, xmm2, dword ptr [rbx]
    vaddss  xmm8, xmm0, dword ptr [rdi]
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm10, xmm0, dword ptr [rdi+8]
    vmulss  xmm3, xmm5, xmm1
    vmulss  xmm5, xmm6, xmm1
    vmulss  xmm6, xmm14, cs:__real@3d4ccccd
    vmulss  xmm7, xmm4, xmm1
    vmulss  xmm1, xmm2, dword ptr [rbx+4]
    vaddss  xmm9, xmm1, dword ptr [rdi+4]
    vmulss  xmm4, xmm14, cs:__real@bd4ccccd
    vmulss  xmm1, xmm6, xmm3
    vaddss  xmm0, xmm1, xmm8
    vmovss  dword ptr [rsp+150h+var_F0], xmm0
    vmulss  xmm2, xmm6, xmm5
    vaddss  xmm1, xmm2, xmm9
    vmulss  xmm0, xmm6, xmm7
    vaddss  xmm2, xmm0, xmm10
    vmulss  xmm0, xmm4, xmm3
    vmovss  dword ptr [rsp+150h+var_F0+4], xmm1
    vaddss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rsp+150h+var_F0+8], xmm2
    vmovss  dword ptr [rsp+150h+var_E0], xmm1
    vmulss  xmm2, xmm4, xmm5
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rsp+150h+var_E0+4], xmm0
    vmulss  xmm1, xmm4, xmm7
    vaddss  xmm2, xmm1, xmm10
    vmovss  dword ptr [rsp+150h+var_E0+8], xmm2
    vmulss  xmm0, xmm6, xmm11
    vaddss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rbp+50h+var_D0], xmm1
    vmulss  xmm2, xmm6, xmm12
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rbp+50h+var_D0+4], xmm0
    vmulss  xmm1, xmm6, xmm13
    vaddss  xmm2, xmm1, xmm10
    vmulss  xmm0, xmm4, xmm11
    vaddss  xmm1, xmm0, xmm8
    vmovss  dword ptr [rbp+50h+var_D0+8], xmm2
    vmulss  xmm2, xmm4, xmm12
    vaddss  xmm0, xmm2, xmm9
    vmovss  dword ptr [rbp+50h+var_C0], xmm1
    vmulss  xmm1, xmm4, xmm13
    vaddss  xmm2, xmm1, xmm10
    vmovss  dword ptr [rbp+50h+var_C0+8], xmm2
    vmovss  dword ptr [rbp+50h+var_C0+4], xmm0
  }
  CL_AddDebugLine(base, &end, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v104, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v105, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v106, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v107, color, 0, 1, 0);
  _R11 = &v108;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
PhysicsVolume_DrawDebug
==============
*/

void __fastcall PhysicsVolume_DrawDebug(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  const ScreenPlacement *v15; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  gentity_s *v25; 
  CgEntitySystem *EntitySystem; 
  unsigned int v42; 
  unsigned int v43; 
  centity_t *Entity; 
  LerpEntityStatePhysicsVolume *p_u; 
  __int64 flightDurationMs; 
  PhysicsVolumeRuntimeData *v55; 
  unsigned int Size; 
  unsigned int v57; 
  unsigned int v58; 
  char v74; 
  char v75; 
  vec4_t *setColor; 
  vec4_t *setColora; 
  float ya; 
  float yb; 
  float yc; 
  float yd; 
  int adjust; 
  int adjusta; 
  float v95; 
  float v96; 
  unsigned int v97; 
  unsigned int v98; 
  float gravityScalar[2]; 
  float *v100; 
  ScreenPlacement *scrPlacea; 
  CgEntitySystem *v102; 
  vec3_t outOrigin; 
  float *v104; 
  __int64 v105; 
  vec4_t color; 
  vec3_t force; 
  vec3_t direction; 
  vec3_t position; 
  vec3_t gravity; 
  vec4_t orientation; 
  char dest[256]; 
  char v113; 
  void *retaddr; 

  _RAX = &retaddr;
  v105 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmm7, xmm3
  }
  _RBX = y;
  v100 = y;
  _R12 = x;
  v104 = x;
  v15 = scrPlace;
  scrPlacea = (ScreenPlacement *)scrPlace;
  if ( s_gPhysicsVolumeInitialized && s_cgPhysicsVolumeInitialized[0] )
  {
    __asm
    {
      vmovss  xmm8, [rbp+1A0h+charHeight]
      vmovss  xmm9, cs:__real@3f800000
    }
    if ( physics_volume_debugDrawServer && physics_volume_debugDrawServer->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Physics Volume Summary - Server");
      __asm
      {
        vmovss  dword ptr [rsp+2A0h+y], xmm8
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r12]; x
      }
      Physics_DrawDebugString(v15, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, ya, 0);
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
        vaddss  xmm1, xmm7, dword ptr [r12]
        vmovss  dword ptr [r12], xmm1
      }
      v22 = 0;
      v23 = 0;
      v24 = 0i64;
      do
      {
        v25 = g_entities;
        if ( g_entities[v24].r.isInUse && g_entities[v24].s.eType == ET_PHYSICS_VOLUME )
        {
          if ( (g_entities[v24].s.lerp.u.anonymous.data[0] & 8) != 0 )
            __asm { vmovups xmm0, cs:__xmm@3f8000003e4ccccd3e4ccccd3f800000 }
          else
            __asm { vmovups xmm0, cs:__xmm@3f80000000000000000000003f19999a }
          __asm { vmovups xmmword ptr [rbp+1A0h+color], xmm0 }
          LODWORD(setColor) = v23;
          Com_sprintf(dest, 0x100ui64, "Volume:%i Entity:%i", v22, setColor);
          __asm { vmovss  dword ptr [rsp+2A0h+y], xmm8 }
          _RDI = v100;
          __asm
          {
            vmovss  xmm2, dword ptr [rdi]; y
            vmovss  xmm1, dword ptr [r12]; x
          }
          Physics_DrawDebugString(scrPlacea, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, yb, 0);
          __asm
          {
            vaddss  xmm0, xmm8, dword ptr [rdi]
            vmovss  dword ptr [rdi], xmm0
          }
          Com_sprintf(dest, 0x100ui64, "%i", v22);
          __asm { vmovaps xmm2, xmm9; scale }
          CL_AddDebugString(&v25[v24].r.currentOrigin, &color, *(float *)&_XMM2, dest, 0, 1);
          __asm
          {
            vaddss  xmm0, xmm7, dword ptr [r12]
            vmovss  dword ptr [r12], xmm0
            vmovss  [rsp+2A0h+var_258], xmm8
            vmovss  [rsp+2A0h+adjust], xmm7
          }
          PhysicsVolume_DrawDebugVolume(1, v22, (LerpEntityStatePhysicsVolume *)&v25[v24].s.lerp.u, v25[v24].s.staticState.mover.moverFlags, &v25[v24].r.currentOrigin, scrPlacea, _R12, v100, *(float *)&adjust, v95);
          PhysicsVolume_DrawDebugShape(1, (LerpEntityStatePhysicsVolume *)&v25[v24].s.lerp.u, v25[v24].s.staticState.mover.moverFlags, &v25[v24].r.currentOrigin, &v25[v24].r.currentAngles);
          __asm
          {
            vmovss  xmm0, dword ptr [r12]
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [r12], xmm1
          }
          ++v22;
        }
        ++v23;
        ++v24;
      }
      while ( v23 < 0x800 );
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [r12], xmm1
      }
      _RBX = v100;
      v15 = scrPlacea;
    }
    if ( physics_volume_debugDrawClient && physics_volume_debugDrawClient->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Physics Volume Summary - Client");
      __asm
      {
        vmovss  dword ptr [rsp+2A0h+y], xmm8
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r12]; x
      }
      Physics_DrawDebugString(v15, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, yc, 0);
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
      }
      EntitySystem = CgEntitySystem::GetEntitySystem(LOCAL_CLIENT_0);
      v102 = EntitySystem;
      if ( !EntitySystem )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2046, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
          __debugbreak();
        EntitySystem = v102;
      }
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [r12]
        vmovss  dword ptr [r12], xmm0
      }
      v42 = 0;
      v97 = 0;
      v43 = 0;
      v98 = 0;
      __asm
      {
        vxorps  xmm10, xmm10, xmm10
        vmovss  xmm11, cs:__real@80000000
      }
      do
      {
        Entity = CgEntitySystem::GetEntity(EntitySystem, v43);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2055, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
          __debugbreak();
        if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_PHYSICS_VOLUME )
        {
          p_u = (LerpEntityStatePhysicsVolume *)&Entity->nextState.lerp.u;
          if ( (Entity->nextState.lerp.u.anonymous.data[0] & 8) != 0 )
            __asm { vmovups xmm0, cs:__xmm@3f8000003e4ccccd3f8000003f800000 }
          else
            __asm { vmovups xmm0, cs:__xmm@3f800000000000003f19999a3f19999a }
          __asm { vmovups xmmword ptr [rbp+1A0h+color], xmm0 }
          LODWORD(setColora) = v43;
          Com_sprintf(dest, 0x100ui64, "Volume:%i Entity:%i", v42, setColora);
          __asm
          {
            vmovss  dword ptr [rsp+2A0h+y], xmm8
            vmovss  xmm2, dword ptr [rbx]; y
            vmovss  xmm1, dword ptr [r12]; x
          }
          Physics_DrawDebugString(v15, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, yd, 0);
          __asm
          {
            vaddss  xmm0, xmm8, dword ptr [rbx]
            vmovss  dword ptr [rbx], xmm0
          }
          Com_sprintf(dest, 0x100ui64, "%i", v42);
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          __asm { vmovaps xmm2, xmm9; scale }
          CL_AddDebugString(&outOrigin, &color, *(float *)&_XMM2, dest, 0, 1);
          __asm
          {
            vaddss  xmm0, xmm7, dword ptr [r12]
            vmovss  dword ptr [r12], xmm0
            vmovss  [rsp+2A0h+var_258], xmm8
            vmovss  [rsp+2A0h+adjust], xmm7
          }
          PhysicsVolume_DrawDebugVolume(0, v42, (LerpEntityStatePhysicsVolume *)&Entity->nextState.lerp.u, Entity->nextState.staticState.mover.moverFlags, &outOrigin, v15, _R12, _RBX, *(float *)&adjusta, v96);
          PhysicsVolume_DrawDebugShape(0, (LerpEntityStatePhysicsVolume *)&Entity->nextState.lerp.u, Entity->nextState.staticState.mover.moverFlags, &outOrigin, &Entity->pose.angles);
          if ( CG_PhysicsVolume_IsEnabled(Entity) )
          {
            flightDurationMs = Entity->typeData.flightDurationMs;
            if ( (unsigned int)flightDurationMs > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2087, ASSERT_TYPE_ASSERT, "(runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED)", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
              __debugbreak();
            v55 = &s_physicsVolumeClientRuntimeData[0][flightDurationMs];
            if ( !v55->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2089, ASSERT_TYPE_ASSERT, "(runtimeData->inUse)", (const char *)&queryFormat, "runtimeData->inUse") )
              __debugbreak();
            Size = PhysicsBodyIdVector_GetSize(v55->bodyIds);
            v57 = 0;
            if ( Size )
            {
              do
              {
                v58 = PhysicsBodyIdVector_Get(v55->bodyIds, v57);
                if ( (v58 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2099, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                  __debugbreak();
                Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v58, &position, &orientation);
                CL_AddDebugLine(&outOrigin, &position, &color, 0, 1, 0);
                __asm
                {
                  vmovss  [rsp+2A0h+gravityScalar], xmm9
                  vmovss  dword ptr [rbp+1A0h+force], xmm10
                  vmovss  dword ptr [rbp+1A0h+force+4], xmm10
                  vmovss  dword ptr [rbp+1A0h+force+8], xmm10
                }
                PhysicsVolume_CalculateEffects(p_u, &position, &gravity, gravityScalar, &force);
                __asm
                {
                  vmovss  xmm6, dword ptr [rbp+1A0h+force+4]
                  vmulss  xmm1, xmm6, xmm6
                  vmovss  xmm4, dword ptr [rbp+1A0h+force]
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm2, xmm1, xmm0
                  vmovss  xmm5, dword ptr [rbp+1A0h+force+8]
                  vmulss  xmm1, xmm5, xmm5
                  vaddss  xmm0, xmm2, xmm1
                  vsqrtss xmm2, xmm0, xmm0; length
                  vcmpless xmm0, xmm2, xmm11
                  vblendvps xmm1, xmm2, xmm9, xmm0
                  vmovss  [rsp+2A0h+gravityScalar], xmm1
                  vdivss  xmm3, xmm9, xmm1
                  vmulss  xmm0, xmm4, xmm3
                  vmovss  dword ptr [rbp+1A0h+direction], xmm0
                  vmulss  xmm1, xmm6, xmm3
                  vmovss  dword ptr [rbp+1A0h+direction+4], xmm1
                  vmulss  xmm0, xmm5, xmm3
                  vmovss  dword ptr [rbp+1A0h+direction+8], xmm0
                  vcomiss xmm2, xmm10
                }
                if ( !(v74 | v75) )
                  PhysicsVolume_DebugDrawArrow(&position, &direction, *(double *)&_XMM2, &color);
                ++v57;
              }
              while ( v57 < Size );
              _R12 = v104;
              v43 = v98;
              v42 = v97;
            }
            v15 = scrPlacea;
            _RBX = v100;
          }
          __asm
          {
            vmovss  xmm0, dword ptr [r12]
            vsubss  xmm1, xmm0, xmm7
            vmovss  dword ptr [r12], xmm1
          }
          v97 = ++v42;
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        v98 = ++v43;
        EntitySystem = v102;
      }
      while ( v43 < 0x800 );
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [r12], xmm1
      }
    }
  }
  _R11 = &v113;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
PhysicsVolume_DrawDebugShape
==============
*/
void PhysicsVolume_DrawDebugShape(bool server, LerpEntityStatePhysicsVolume *physicsVolume, int shapeId, const vec3_t *origin)
{
  const vec3_t *v9; 
  _BYTE *v10; 
  hknpShape *MapEntsShape; 
  int v12; 
  int numLines; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  vec4_t color; 
  vec3_t pointArray; 

  PhysicsVolume_GetDebugDrawColor(server, (physicsVolume->flags & 8) != 0, &color);
  if ( (*v10 & 4) != 0 )
  {
    AnglesToAxis(v9, &axis);
    MapEntsShape = WorldCollision_GetMapEntsShape(shapeId);
    numLines = 0;
    Physics_GetWireframeGeometry(MapEntsShape, &pointArray, 300, &numLines);
    v12 = 0;
    if ( numLines > 0 )
    {
      _RBX = &pointArray.v[2];
      __asm { vmovaps [rsp+0EF0h+var_40], xmm6 }
      do
      {
        _RSI = _RBX - 2;
        if ( _RBX - 2 == (float *)&start && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
          __debugbreak();
        __asm
        {
          vmovss  xmm5, dword ptr [rsi]
          vmovss  xmm4, dword ptr [rbx-4]
          vmovss  xmm6, dword ptr [rbx]
          vmulss  xmm2, xmm4, dword ptr [rsp+0EF0h+axis+4]
          vmulss  xmm1, xmm5, dword ptr [rsp+0EF0h+axis]
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm6, dword ptr [rsp+0EF0h+axis+8]
          vaddss  xmm0, xmm3, xmm2
          vaddss  xmm1, xmm0, dword ptr [rdi]
          vmulss  xmm2, xmm4, dword ptr [rsp+0EF0h+axis+10h]
          vmovss  dword ptr [rsp+0EF0h+start], xmm1
          vmulss  xmm1, xmm5, dword ptr [rsp+0EF0h+axis+0Ch]
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm6, dword ptr [rsp+0EF0h+axis+14h]
          vaddss  xmm0, xmm3, xmm2
          vaddss  xmm1, xmm0, dword ptr [rdi+4]
          vmulss  xmm2, xmm4, dword ptr [rsp+0EF0h+axis+1Ch]
          vmovss  dword ptr [rsp+0EF0h+start+4], xmm1
          vmulss  xmm1, xmm5, dword ptr [rsp+0EF0h+axis+18h]
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm6, dword ptr [rsp+0EF0h+axis+20h]
          vaddss  xmm0, xmm3, xmm2
          vaddss  xmm1, xmm0, dword ptr [rdi+8]
        }
        _RSI = _RBX + 1;
        __asm { vmovss  dword ptr [rsp+0EF0h+start+8], xmm1 }
        if ( _RBX + 1 == (float *)&end && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
          __debugbreak();
        __asm
        {
          vmovss  xmm4, dword ptr [rbx+8]
          vmovss  xmm5, dword ptr [rsi]
          vmovss  xmm6, dword ptr [rbx+0Ch]
          vmulss  xmm2, xmm4, dword ptr [rsp+0EF0h+axis+4]
          vmulss  xmm1, xmm5, dword ptr [rsp+0EF0h+axis]
          vmulss  xmm0, xmm6, dword ptr [rsp+0EF0h+axis+8]
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm4, dword ptr [rsp+0EF0h+axis+10h]
          vaddss  xmm1, xmm3, xmm0
          vaddss  xmm3, xmm1, dword ptr [rdi]
          vmulss  xmm1, xmm5, dword ptr [rsp+0EF0h+axis+0Ch]
          vmulss  xmm0, xmm6, dword ptr [rsp+0EF0h+axis+14h]
          vmovss  dword ptr [rsp+0EF0h+end], xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm2, xmm4, dword ptr [rsp+0EF0h+axis+1Ch]
          vaddss  xmm1, xmm3, xmm0
          vaddss  xmm3, xmm1, dword ptr [rdi+4]
          vmulss  xmm1, xmm5, dword ptr [rsp+0EF0h+axis+18h]
          vmulss  xmm0, xmm6, dword ptr [rsp+0EF0h+axis+20h]
          vmovss  dword ptr [rsp+0EF0h+end+4], xmm3
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm1, xmm3, xmm0
          vaddss  xmm3, xmm1, dword ptr [rdi+8]
          vmovss  dword ptr [rsp+0EF0h+end+8], xmm3
        }
        CL_AddDebugLine(&start, &end, &color, 0, 1, 0);
        ++v12;
        _RBX += 6;
      }
      while ( v12 < numLines );
      __asm { vmovaps xmm6, [rsp+0EF0h+var_40] }
    }
  }
  else if ( shapeId >> 16 )
  {
    AnglesToAxis(v9, &axis);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, ebx
      vmulss  xmm0, xmm3, dword ptr [rsp+0EF0h+axis+8]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm2, xmm3, dword ptr [rsp+0EF0h+axis+14h]
      vaddss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+0EF0h+start], xmm1
      vmulss  xmm1, xmm3, dword ptr [rsp+0EF0h+axis+20h]
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+0EF0h+start+8], xmm2
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, esi; radius
      vmovss  dword ptr [rsp+0EF0h+start+4], xmm0
    }
    CG_DebugCylinder(origin, &start, *(float *)&_XMM2, &color, 0, 1);
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, esi; radius
    }
    CG_DebugSphere(origin, *(float *)&_XMM1, &color, 0, 1);
  }
}

/*
==============
PhysicsVolume_DrawDebugVolume
==============
*/
void PhysicsVolume_DrawDebugVolume(bool server, unsigned int volumeId, LerpEntityStatePhysicsVolume *physicsVolume, int shapeIndex, const vec3_t *position, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  const char *v25; 
  unsigned int flags; 
  const char *v30; 
  unsigned int v34; 
  char v101; 
  vec3_t *p_base; 
  vec4_t *setColor; 
  vec4_t *setColora; 
  vec4_t *setColorb; 
  vec4_t *setColorc; 
  vec4_t *setColord; 
  vec4_t *setColore; 
  double forceColor; 
  double forceColora; 
  double forceColorb; 
  double forceColorc; 
  double forceColord; 
  double forceColore; 
  double shadow; 
  double shadowa; 
  double shadowb; 
  double shadowc; 
  double shadowd; 
  float v187; 
  float v188; 
  float v189; 
  float v190; 
  float v191; 
  float v192; 
  double v193; 
  float v194; 
  double v195; 
  double v196; 
  float v197; 
  float v198; 
  vec3_t direction; 
  vec3_t base; 
  vec4_t color; 
  char dest[256]; 
  char v205; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RDI = physicsVolume;
  _R14 = x;
  _RBX = y;
  PhysicsVolume_GetDebugDrawColor(server, (physicsVolume->flags & 8) != 0, &color);
  if ( (int)v17 < 0 )
  {
    v18 = -(int)v17;
    v19 = (unsigned __int16)v18;
    v20 = v18 >> 16;
    if ( v20 )
      Com_sprintf(dest, 0x100ui64, "Geometry based on cylinder with radius %i height %i", v19, v20);
    else
      Com_sprintf(dest, 0x100ui64, "Geometry based on sphere with radius %i", v19);
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "Geometry based on Brush %i", v17);
  }
  __asm
  {
    vmovss  xmm8, [rbp+0E0h+charHeight]
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [r14]; x
    vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v187, 0);
  __asm
  {
    vaddss  xmm0, xmm8, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
  v25 = "Is Active";
  if ( (_RDI->flags & 8) == 0 )
    v25 = "Is Not Active";
  Com_sprintf(dest, 0x100ui64, v25);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [r14]; x
    vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v188, 0);
  __asm
  {
    vaddss  xmm0, xmm8, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
  flags = _RDI->flags;
  if ( (_RDI->flags & 3) == 3 )
  {
    Com_sprintf(dest, 0x100ui64, "Affects Characters, Missiles/Grenades and Dynamic Physics");
  }
  else if ( (flags & 1) != 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Affects Characters and Dynamic Physics");
  }
  else
  {
    v30 = "Affects Missiles/Grenades and Dynamic Physics";
    if ( (flags & 2) == 0 )
      v30 = "Only affects Dynamic Physics";
    Com_sprintf(dest, 0x100ui64, v30);
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [r14]; x
    vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v189, 0);
  __asm
  {
    vaddss  xmm0, xmm8, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
  v34 = _RDI->flags;
  if ( (_RDI->flags & 0x10) != 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Activates all dynamic physics inside");
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]; y
      vmovss  xmm1, dword ptr [r14]; x
      vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v190, 0);
    __asm
    {
      vaddss  xmm0, xmm8, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
    }
    v34 = _RDI->flags;
  }
  if ( (v34 & 0x20) == 0 )
  {
    __asm { vmovaps xmmword ptr [rsp+1E0h+var_38+8], xmm6 }
    if ( (v34 & 0x40) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+10h]
        vmovss  xmm3, dword ptr [rdi+8]
        vmovss  xmm1, dword ptr [rdi+0Ch]
        vcvtss2sd xmm0, xmm0, xmm0
        vcvtss2sd xmm3, xmm3, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  qword ptr [rsp+1E0h+forceColor], xmm0
        vmovq   r9, xmm3
        vmovsd  [rsp+1E0h+setColor], xmm1
      }
      Com_sprintf(dest, 0x100ui64, "Sets gravity t (%.2f, %.2f, %.2f)", *(double *)&_XMM3, *(double *)&setColor, forceColor);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v192, 0);
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm4, dword ptr [rdi+8]
        vmovss  xmm5, dword ptr [rdi+0Ch]
        vmovss  xmm6, dword ptr [rdi+10h]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rsp+1E0h+direction], xmm0
        vmulss  xmm0, xmm6, xmm2
        vmulss  xmm2, xmm3, cs:__real@3dcccccd
        vmovss  dword ptr [rsp+1E0h+direction+4], xmm1
      }
    }
    else
    {
      if ( (v34 & 0x80u) == 0 )
      {
        if ( (v34 & 0x100) != 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+10h]
            vmovss  xmm2, dword ptr [rdi+8]
            vmovss  xmm1, dword ptr [rdi+0Ch]
            vmovss  xmm3, dword ptr [rdi+4]
            vmovss  xmm4, dword ptr [rdi+14h]
            vmovss  dword ptr [rsp+1E0h+base+8], xmm0
            vcvtss2sd xmm5, xmm0, xmm0
            vxorps  xmm0, xmm0, xmm0
            vcomiss xmm3, xmm0
            vmovss  dword ptr [rsp+1E0h+base], xmm2
            vmovss  dword ptr [rsp+1E0h+base+4], xmm1
            vmovaps [rsp+1E0h+var_48+8], xmm7
            vcvtss2sd xmm1, xmm1, xmm1
            vcvtss2sd xmm2, xmm2, xmm2
          }
          if ( (v34 & 0x100) != 0 )
          {
            __asm
            {
              vucomiss xmm4, cs:__real@7f7fffff
              vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
              vcvtss2sd xmm3, xmm0, xmm0
              vmovq   r9, xmm3
            }
            if ( v101 )
            {
              __asm
              {
                vmovsd  qword ptr [rsp+1E0h+shadow], xmm5
                vmovsd  qword ptr [rsp+1E0h+forceColor], xmm1
                vmovsd  [rsp+1E0h+setColor], xmm2
              }
              Com_sprintf(dest, 0x100ui64, "Applies %.2f force away from (%.2f, %.2f, %.2f)", *(double *)&_XMM3, *(double *)&setColore, forceColore, shadowd);
            }
            else
            {
              __asm
              {
                vcvtss2sd xmm0, xmm4, xmm4
                vmovsd  [rsp+1E0h+var_1A8], xmm0
                vmovsd  qword ptr [rsp+1E0h+shadow], xmm5
                vmovsd  qword ptr [rsp+1E0h+forceColor], xmm1
                vmovsd  [rsp+1E0h+setColor], xmm2
              }
              Com_sprintf(dest, 0x100ui64, "Applies %.2f force away from (%.2f, %.2f, %.2f) up to speed %.2f", *(double *)&_XMM3, *(double *)&setColord, forceColord, shadowc, v196);
            }
            __asm
            {
              vmovss  xmm7, cs:__real@41200000
              vmulss  xmm2, xmm7, dword ptr [rdi+4]; length
            }
            PhysicsVolume_DebugDrawArrow(&base, &X_VEC, *(double *)&_XMM2, &color);
            __asm
            {
              vmovss  xmm6, cs:__real@c1200000
              vmulss  xmm2, xmm6, dword ptr [rdi+4]; length
            }
            PhysicsVolume_DebugDrawArrow(&base, &X_VEC, *(double *)&_XMM2, &color);
            __asm { vmulss  xmm2, xmm7, dword ptr [rdi+4]; length }
            PhysicsVolume_DebugDrawArrow(&base, &Y_VEC, *(double *)&_XMM2, &color);
            __asm { vmulss  xmm2, xmm6, dword ptr [rdi+4]; length }
            PhysicsVolume_DebugDrawArrow(&base, &Y_VEC, *(double *)&_XMM2, &color);
            __asm { vmulss  xmm2, xmm7, dword ptr [rdi+4]; length }
            PhysicsVolume_DebugDrawArrow(&base, &Z_VEC, *(double *)&_XMM2, &color);
            __asm { vmulss  xmm2, xmm6, dword ptr [rdi+4]; length }
            p_base = &base;
          }
          else
          {
            __asm
            {
              vucomiss xmm4, cs:__real@7f7fffff
              vcvtss2sd xmm3, xmm3, xmm3
              vmovq   r9, xmm3
            }
            if ( v101 )
            {
              __asm
              {
                vmovsd  qword ptr [rsp+1E0h+shadow], xmm5
                vmovsd  qword ptr [rsp+1E0h+forceColor], xmm1
                vmovsd  [rsp+1E0h+setColor], xmm2
              }
              Com_sprintf(dest, 0x100ui64, "Applies %.2f force towards (%.2f, %.2f, %.2f)", *(double *)&_XMM3, *(double *)&setColorc, forceColorc, shadowb);
            }
            else
            {
              __asm
              {
                vcvtss2sd xmm0, xmm4, xmm4
                vmovsd  [rsp+1E0h+var_1A8], xmm0
                vmovsd  qword ptr [rsp+1E0h+shadow], xmm5
                vmovsd  qword ptr [rsp+1E0h+forceColor], xmm1
                vmovsd  [rsp+1E0h+setColor], xmm2
              }
              Com_sprintf(dest, 0x100ui64, "Applies %.2f force towards (%.2f, %.2f, %.2f) up to speed %.2f", *(double *)&_XMM3, *(double *)&setColorb, forceColorb, shadowa, v195);
            }
            __asm
            {
              vmovss  xmm2, dword ptr [rsp+1E0h+base+4]
              vmovss  xmm7, cs:__real@41200000
              vmulss  xmm0, xmm7, dword ptr [rdi+4]
              vaddss  xmm1, xmm0, dword ptr [rsp+1E0h+base]
              vmovss  xmm0, dword ptr [rsp+1E0h+base+8]
              vmovss  xmm6, cs:__real@c1200000
              vmovss  dword ptr [rsp+1E0h+direction+4], xmm2
              vmulss  xmm2, xmm6, dword ptr [rdi+4]; length
              vmovss  dword ptr [rsp+1E0h+direction+8], xmm0
              vmovss  dword ptr [rsp+1E0h+direction], xmm1
            }
            PhysicsVolume_DebugDrawArrow(&direction, &X_VEC, *(double *)&_XMM2, &color);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1E0h+base]
              vmovss  xmm2, dword ptr [rsp+1E0h+base+4]
              vmulss  xmm1, xmm7, dword ptr [rdi+4]
              vsubss  xmm1, xmm0, xmm1
              vmovss  xmm0, dword ptr [rsp+1E0h+base+8]
              vmovss  dword ptr [rsp+1E0h+direction+4], xmm2
              vmulss  xmm2, xmm7, dword ptr [rdi+4]; length
              vmovss  dword ptr [rsp+1E0h+direction+8], xmm0
              vmovss  dword ptr [rsp+1E0h+direction], xmm1
            }
            PhysicsVolume_DebugDrawArrow(&direction, &X_VEC, *(double *)&_XMM2, &color);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1E0h+base]
              vmulss  xmm1, xmm7, dword ptr [rdi+4]
              vaddss  xmm2, xmm1, dword ptr [rsp+1E0h+base+4]
              vmovss  dword ptr [rsp+1E0h+direction], xmm0
              vmovss  xmm0, dword ptr [rsp+1E0h+base+8]
              vmovss  dword ptr [rsp+1E0h+direction+4], xmm2
              vmulss  xmm2, xmm6, dword ptr [rdi+4]; length
              vmovss  dword ptr [rsp+1E0h+direction+8], xmm0
            }
            PhysicsVolume_DebugDrawArrow(&direction, &Y_VEC, *(double *)&_XMM2, &color);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1E0h+base]
              vmulss  xmm2, xmm7, dword ptr [rdi+4]
              vmovss  xmm1, dword ptr [rsp+1E0h+base+4]
              vmovss  dword ptr [rsp+1E0h+direction], xmm0
              vsubss  xmm0, xmm1, xmm2
              vmovss  xmm2, dword ptr [rsp+1E0h+base+8]
              vmovss  dword ptr [rsp+1E0h+direction+8], xmm2
              vmulss  xmm2, xmm7, dword ptr [rdi+4]; length
              vmovss  dword ptr [rsp+1E0h+direction+4], xmm0
            }
            PhysicsVolume_DebugDrawArrow(&direction, &Y_VEC, *(double *)&_XMM2, &color);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1E0h+base]
              vmovss  xmm1, dword ptr [rsp+1E0h+base+4]
              vmovss  dword ptr [rsp+1E0h+direction], xmm0
              vmulss  xmm0, xmm7, dword ptr [rdi+4]
              vaddss  xmm2, xmm0, dword ptr [rsp+1E0h+base+8]
              vmovss  dword ptr [rsp+1E0h+direction+8], xmm2
              vmulss  xmm2, xmm6, dword ptr [rdi+4]; length
              vmovss  dword ptr [rsp+1E0h+direction+4], xmm1
            }
            PhysicsVolume_DebugDrawArrow(&direction, &Z_VEC, *(double *)&_XMM2, &color);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+1E0h+base]
              vmovss  xmm1, dword ptr [rsp+1E0h+base+4]
              vmulss  xmm2, xmm7, dword ptr [rdi+4]
              vmovss  dword ptr [rsp+1E0h+direction], xmm0
              vmovss  xmm0, dword ptr [rsp+1E0h+base+8]
              vmovss  dword ptr [rsp+1E0h+direction+4], xmm1
              vsubss  xmm1, xmm0, xmm2
              vmulss  xmm2, xmm7, dword ptr [rdi+4]
              vmovss  dword ptr [rsp+1E0h+direction+8], xmm1
            }
            p_base = &direction;
          }
          PhysicsVolume_DebugDrawArrow(p_base, &Z_VEC, *(double *)&_XMM2, &color);
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vmovss  xmm1, dword ptr [r14]; x
            vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
          }
          Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v197, 0);
          __asm { vmovaps xmm7, [rsp+1E0h+var_48+8] }
        }
        else
        {
          if ( (v34 & 0x10) != 0 )
            goto LABEL_38;
          Com_sprintf(dest, 0x100ui64, "Has no effect on the game");
          __asm
          {
            vmovss  xmm2, dword ptr [rbx]; y
            vmovss  xmm1, dword ptr [r14]; x
            vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
          }
          Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v198, 0);
        }
        __asm
        {
          vaddss  xmm0, xmm8, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
        }
        goto LABEL_38;
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rdi+14h]
        vucomiss xmm0, cs:__real@7f7fffff
        vmovss  xmm1, dword ptr [rdi+10h]
        vmovss  xmm2, dword ptr [rdi+0Ch]
        vmovss  xmm4, dword ptr [rdi+8]
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
        vcvtss2sd xmm1, xmm1, xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+1E0h+var_1A8], xmm0
        vmovsd  qword ptr [rsp+1E0h+shadow], xmm1
        vmovsd  qword ptr [rsp+1E0h+forceColor], xmm2
        vmovsd  [rsp+1E0h+setColor], xmm4
      }
      Com_sprintf(dest, 0x100ui64, "Applies %.2f force in the global (%.2f, %.2f, %.2f) direction up to speed %.2f", *(double *)&_XMM3, *(double *)&setColora, forceColora, shadow, v193);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx]; y
        vmovss  xmm1, dword ptr [r14]; x
        vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v194, 0);
      __asm
      {
        vaddss  xmm0, xmm8, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm4, dword ptr [rdi+8]
        vmovss  xmm5, dword ptr [rdi+0Ch]
        vmovss  xmm6, dword ptr [rdi+10h]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm2
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rsp+1E0h+direction+4], xmm1
        vmovss  xmm1, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+1E0h+direction], xmm0
        vmulss  xmm0, xmm6, xmm2
        vmulss  xmm2, xmm1, cs:__real@41200000; length
      }
    }
    __asm { vmovss  dword ptr [rsp+1E0h+direction+8], xmm0 }
    PhysicsVolume_DebugDrawArrow(position, &direction, *(double *)&_XMM2, &color);
LABEL_38:
    __asm { vmovaps xmm6, xmmword ptr [rsp+1E0h+var_38+8] }
    goto LABEL_39;
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+4]
    vcvtss2sd xmm3, xmm3, xmm3
    vmovq   r9, xmm3
  }
  Com_sprintf(dest, 0x100ui64, "Scales gravity by %.2f", *(double *)&_XMM3);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  xmm1, dword ptr [r14]; x
    vmovss  dword ptr [rsp+1E0h+var_1A8], xmm8
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &color, 0, 1, v191, 0);
  __asm
  {
    vaddss  xmm0, xmm8, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
LABEL_39:
  _R11 = &v205;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
}

/*
==============
PhysicsVolume_GetDebugDrawColor
==============
*/
void PhysicsVolume_GetDebugDrawColor(bool server, bool active, vec4_t *color)
{
  if ( server )
  {
    __asm { vmovss  xmm2, cs:__real@3f19999a }
    _ECX = 0;
    _EAX = active;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, ecx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm5, xmm1, xmm2, xmm3
      vmovss  xmm1, cs:__real@3e4ccccd
      vmovss  dword ptr [r8], xmm5
    }
    _EAX = active;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm4, ecx
      vpcmpeqd xmm3, xmm0, xmm4
      vxorps  xmm2, xmm2, xmm2
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  dword ptr [r8+4], xmm0
      vmovss  dword ptr [r8+8], xmm0
    }
    color->v[3] = 1.0;
    __asm { vmovss  [rsp+arg_0], xmm0 }
  }
  else
  {
    if ( active )
    {
      color->v[0] = 1.0;
      color->v[1] = 1.0;
      color->v[2] = 0.2;
    }
    else
    {
      color->v[0] = 0.60000002;
      *(_QWORD *)&color->xyz.y = 1058642330i64;
    }
    color->v[3] = 1.0;
  }
}

/*
==============
PhysicsVolume_IsActivator
==============
*/
bool PhysicsVolume_IsActivator(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1116, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (physicsVolume->flags & 0x10) != 0;
}

/*
==============
PhysicsVolume_IsDirectionForceApplier
==============
*/
bool PhysicsVolume_IsDirectionForceApplier(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1143, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (physicsVolume->flags & 0x80) != 0;
}

/*
==============
PhysicsVolume_IsEnabled
==============
*/
bool PhysicsVolume_IsEnabled(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1089, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (physicsVolume->flags & 8) != 0;
}

/*
==============
PhysicsVolume_IsFocalForceApplier
==============
*/
bool PhysicsVolume_IsFocalForceApplier(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1152, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return BYTE1(physicsVolume->flags) & 1;
}

/*
==============
PhysicsVolume_IsGravityScalar
==============
*/
bool PhysicsVolume_IsGravityScalar(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1125, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (physicsVolume->flags & 0x20) != 0;
}

/*
==============
PhysicsVolume_IsGravityVector
==============
*/
bool PhysicsVolume_IsGravityVector(const LerpEntityStatePhysicsVolume *physicsVolume)
{
  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1134, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  return (physicsVolume->flags & 0x40) != 0;
}

/*
==============
PhysicsVolume_Load
==============
*/
void PhysicsVolume_Load(SaveGame *save)
{
  MemoryFile *p_memFile; 
  hkArray<unsigned int,hkContainerHeapAllocator> **p_bodyIds; 
  __int64 v4; 
  hkArray<unsigned int,hkContainerHeapAllocator> *v5; 
  hkArray<unsigned int,hkContainerHeapAllocator> *v6; 
  __int64 v7; 
  unsigned int v8; 
  char p; 
  unsigned int v10; 
  unsigned int bodyId; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1595, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  p_memFile = &save->memFile;
  MemFile_ReadData(&save->memFile, 0x200ui64, s_physicsVolumeServerRuntimeData);
  p_bodyIds = &s_physicsVolumeServerRuntimeData[0].bodyIds;
  v4 = 32i64;
  do
  {
    MemFile_ReadData(p_memFile, 1ui64, &p);
    v5 = *p_bodyIds;
    if ( p )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1611, ASSERT_TYPE_ASSERT, "( runtimeData->bodyIds )", (const char *)&queryFormat, "runtimeData->bodyIds") )
        __debugbreak();
      v6 = PhysicsBodyIdVector_Create();
      *p_bodyIds = v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1613, ASSERT_TYPE_ASSERT, "( runtimeData->bodyIds )", (const char *)&queryFormat, "runtimeData->bodyIds") )
        __debugbreak();
      MemFile_ReadData(p_memFile, 4ui64, &v10);
      if ( v10 )
      {
        v7 = v10;
        do
        {
          MemFile_ReadData(p_memFile, 4ui64, &bodyId);
          v8 = bodyId;
          if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1621, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          PhysicsBodyIdVector_Add(*p_bodyIds, v8);
          --v7;
        }
        while ( v7 );
      }
    }
    else if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1629, ASSERT_TYPE_ASSERT, "( !runtimeData->bodyIds )", (const char *)&queryFormat, "!runtimeData->bodyIds") )
    {
      __debugbreak();
    }
    p_bodyIds += 2;
    --v4;
  }
  while ( v4 );
}

/*
==============
PhysicsVolume_SetupDvars
==============
*/
void PhysicsVolume_SetupDvars(void)
{
  physics_volume_debugDrawServer = Dvar_RegisterBool("NMKOLMLNSQ", 0, 4u, "Physics Volume debug draw for server data");
  physics_volume_debugDrawClient = Dvar_RegisterBool("LMTSTLNSM", 0, 4u, "Physics Volume debug draw for client data");
}

/*
==============
PhysicsVolume_TriggerEvent
==============
*/
void PhysicsVolume_TriggerEvent(Physics_WorldId worldId, unsigned int triggerBody, unsigned int triggeringBody, bool enter)
{
  int Ref; 
  int EntityNum; 
  __int64 v10; 
  gentity_s *v11; 
  __int64 ammoCount; 
  PhysicsVolumeRuntimeData *v13; 
  hkArray<unsigned int,hkContainerHeapAllocator> *bodyIds; 

  if ( Physics_IsRigidBodyValid(worldId, triggerBody) && Physics_IsRigidBodyValid(worldId, triggeringBody) )
  {
    Ref = Physics_GetRef(worldId, triggerBody);
    EntityNum = Physics_GetEntityNum(Ref);
    v10 = EntityNum;
    if ( worldId )
    {
      CG_PhysicsVolume_TriggerEvent(worldId, EntityNum, triggeringBody, enter);
    }
    else
    {
      if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 255, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
        __debugbreak();
      if ( (unsigned int)v10 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 258, ASSERT_TYPE_ASSERT, "( triggerEntNum >= 0 && triggerEntNum < ( 2048 ) )", (const char *)&queryFormat, "triggerEntNum >= 0 && triggerEntNum < MAX_GENTITIES") )
        __debugbreak();
      v11 = &g_entities[v10];
      if ( !G_PhysicsVolume_IsEnabled(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 262, ASSERT_TYPE_ASSERT, "( G_PhysicsVolume_IsEnabled( triggerEntity ) )", (const char *)&queryFormat, "G_PhysicsVolume_IsEnabled( triggerEntity )") )
        __debugbreak();
      ammoCount = v11->c.item[0].ammoCount;
      if ( (unsigned int)ammoCount > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 266, ASSERT_TYPE_ASSERT, "( runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED )", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
        __debugbreak();
      v13 = &s_physicsVolumeServerRuntimeData[ammoCount];
      if ( !v13->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 268, ASSERT_TYPE_ASSERT, "( runtimeData->inUse )", (const char *)&queryFormat, "runtimeData->inUse") )
        __debugbreak();
      if ( v13->entityNum != (_DWORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 269, ASSERT_TYPE_ASSERT, "( runtimeData->entityNum == triggerEntNum )", (const char *)&queryFormat, "runtimeData->entityNum == triggerEntNum") )
        __debugbreak();
      bodyIds = v13->bodyIds;
      if ( enter )
        PhysicsBodyIdVector_Add(bodyIds, triggeringBody);
      else
        PhysicsBodyIdVector_Remove(bodyIds, triggeringBody);
    }
  }
}

/*
==============
PhysicsVolume_Write
==============
*/
void PhysicsVolume_Write(MemoryFile *memFile)
{
  hkArray<unsigned int,hkContainerHeapAllocator> **p_bodyIds; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int i; 
  unsigned int v6; 
  unsigned int p; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1560, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  MemFile_WriteData(memFile, 0x200ui64, s_physicsVolumeServerRuntimeData);
  p_bodyIds = &s_physicsVolumeServerRuntimeData[0].bodyIds;
  v3 = 32i64;
  do
  {
    LOBYTE(p) = *p_bodyIds != NULL;
    MemFile_WriteData(memFile, 1ui64, &p);
    if ( *p_bodyIds )
    {
      p = PhysicsBodyIdVector_GetSize(*p_bodyIds);
      v4 = p;
      MemFile_WriteData(memFile, 4ui64, &p);
      for ( i = 0; i < v4; ++i )
      {
        v6 = PhysicsBodyIdVector_Get(*p_bodyIds, i);
        if ( (v6 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1582, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        p = v6;
        MemFile_WriteData(memFile, 4ui64, &p);
      }
    }
    p_bodyIds += 2;
    --v3;
  }
  while ( v3 );
}

