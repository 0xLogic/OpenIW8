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
  __int32 v5; 
  __int32 v6; 
  const PhysicsAsset *AssetByName; 
  CG_PhysicsObject *v8; 
  __int64 v9; 
  bool neverDeactivate; 
  unsigned int Instance; 
  unsigned __int16 v12; 
  int Ref; 
  int shapeOverride; 
  const char *v15; 
  const char *v16; 
  int v17; 
  int v18; 
  int v19; 
  __int16 v20; 
  __int16 v21; 
  __int16 v22; 
  __int16 v23; 
  unsigned int RigidBodyID; 
  vec3_t outOrigin; 
  __int64 v27; 
  vec4_t quat; 

  v27 = -2i64;
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
  v5 = 3 * localClientNum;
  v6 = 3 * localClientNum + 3;
  AssetByName = Physics_GetAssetByName(PHYSICS_VOLUME_ASSET_NAME);
  if ( !AssetByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 617, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
  v8 = CG_PhysicsObject_Get(Entity->nextState.number, localClientNum);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 621, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  v9 = v5;
  if ( v8->physicsInstances[v5 + 3] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 622, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[authWorldId] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[authWorldId] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v8->mapping = PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  AnglesToQuat(&Entity->pose.angles, &quat);
  neverDeactivate = CG_PhysicsVolume_IsActivator(Entity);
  Instance = Physics_CreateInstance((Physics_WorldId)v6);
  if ( Instance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 638, ASSERT_TYPE_ASSERT, "( instanceId != 0xFFFFFFFF )", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v8->physicsInstances[v9 + 3] = Instance;
  v12 = truncate_cast<unsigned short,int>(entNum);
  Ref = Physics_MakeRef(Physics_RefSystem_CEntities, Physics_RelationshipSystem_None, 0, v12);
  shapeOverride = Entity->nextState.staticState.mover.moverFlags;
  if ( (Entity->nextState.lerp.u.actor.species & 4) != 0 )
  {
    if ( Physics_InstantiateAssetBody(Instance, (Physics_WorldId)v6, AssetByName, 0, Ref, &outOrigin, &quat, 1, !neverDeactivate, neverDeactivate, shapeOverride, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
      goto LABEL_40;
    v15 = "Physics_InstantiateAssetBody( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
    v16 = "(Physics_InstantiateAssetBody( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
    v17 = 647;
  }
  else
  {
    v18 = (unsigned __int16)shapeOverride;
    v19 = shapeOverride >> 16;
    if ( v19 )
    {
      if ( Physics_InstantiateAssetBodyCylinder(Instance, (Physics_WorldId)v6, AssetByName, 0, Ref, &outOrigin, &quat, 1, !neverDeactivate, neverDeactivate, (float)v18, (float)v19, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
        goto LABEL_40;
      v15 = "Physics_InstantiateAssetBodyCylinder( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
      v16 = "(Physics_InstantiateAssetBodyCylinder( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
      v17 = 657;
    }
    else
    {
      if ( Physics_InstantiateAssetBodySphere(Instance, (Physics_WorldId)v6, AssetByName, 0, Ref, &outOrigin, &quat, 1, !neverDeactivate, neverDeactivate, (float)v18, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
        goto LABEL_40;
      v15 = "Physics_InstantiateAssetBodySphere( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
      v16 = "(Physics_InstantiateAssetBodySphere( instanceId, authWorldId, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
      v17 = 661;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", v17, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v15) )
    __debugbreak();
LABEL_40:
  ++AssetByName->usageCounter.clientEnt;
  v20 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_MarkPhysicsObjectAsUsed(localClientNum, v20, 1);
  v21 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_MarkPhysicsObjectAsMovable(localClientNum, v21, 1);
  v22 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_MarkPhysicsObjectAsShown(localClientNum, v22, 1);
  v23 = truncate_cast<short,int>(entNum);
  CG_PhysicsObject_CachePrimaryBodies(localClientNum, v23);
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v6, Instance, 0);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 674, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_SubscribeToTriggerEvent((Physics_WorldId)v6, RigidBodyID);
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
  __int32 v8; 
  int v9; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  float v11; 
  int NumHits; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  unsigned int EntityNum; 
  __int64 v16; 
  bool v17; 
  __int64 v18; 
  hkMemoryAllocator *v19; 
  hkMemoryAllocator *v20; 
  __int64 v21; 
  __int64 v22; 
  Physics_QueryPointExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v24; 
  float gravityScalar; 
  CgEntitySystem *EntitySystem; 

  if ( !s_cgPhysicsVolumeInitialized[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1028, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  v8 = 3 * localClientNum + 3;
  Physics_GetGravity((const Physics_WorldId)v8, gravity);
  v9 = 0;
  *(_QWORD *)force->v = 0i64;
  force->v[2] = 0.0;
  AllResult = PhysicsQuery_GetAllResult((Physics_WorldId)v8);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1039, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v24, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v24, -17);
  v24.m_ignorePhysicsVolumes = Physics_IgnoreVolumeOption_OnlyVolumes;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = -1;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v24;
  Physics_QueryPoint((Physics_WorldId)v8, point, 0.0, &extendedData, AllResult);
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1058, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  v11 = FLOAT_1_0;
  gravityScalar = FLOAT_1_0;
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( NumHits > 0 )
  {
    do
    {
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(AllResult, v9);
      if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1067, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Ref = Physics_GetRef((Physics_WorldId)v8, ClosestPointHitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      v16 = (int)EntityNum;
      v17 = EntityNum < 0x800;
      if ( EntityNum > 0x800 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1072, ASSERT_TYPE_ASSERT, "(entnum >= 0 && entnum <= ( 2048 ))", (const char *)&queryFormat, "entnum >= 0 && entnum <= MAX_GENTITIES") )
          __debugbreak();
        v17 = (unsigned int)v16 < 0x800;
      }
      if ( !v17 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v18 = (__int64)&EntitySystem->m_entities[v16];
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1074, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      PhysicsVolume_CalculateEffects((LerpEntityStatePhysicsVolume *)(v18 + 488), point, gravity, &gravityScalar, force);
      ++v9;
    }
    while ( v9 < NumHits );
    v11 = gravityScalar;
  }
  gravity->v[0] = v11 * gravity->v[0];
  gravity->v[1] = v11 * gravity->v[1];
  gravity->v[2] = v11 * gravity->v[2];
  v19 = hkMemHeapAllocator();
  v24.m_ignoreBodies.m_size = 0;
  if ( v24.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v19, v24.m_ignoreBodies.m_data, 4, v24.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v24.m_ignoreBodies.m_data = NULL;
  v24.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v20 = hkMemHeapAllocator();
  v24.m_ignoreEntities.m_size = 0;
  if ( v24.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v20, v24.m_ignoreEntities.m_data, 8, v24.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
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
  __int64 v4; 
  CG_PhysicsObject *v5; 
  __int32 v6; 
  __int64 v7; 
  unsigned int RigidBodyID; 
  __int64 flightDurationMs; 
  PhysicsVolumeRuntimeData *v10; 
  unsigned int Size; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  hknpWorld *world; 
  unsigned int v17; 
  LerpEntityStateTypeUnion *p_u; 
  float v19; 
  float v20; 
  float v21; 
  vec3_t *p_force; 
  float v23; 
  float v24; 
  __int128 m_data; 
  float v26; 
  float v30; 
  unsigned int v31; 
  unsigned int v32; 
  bool IsActivator; 
  __int64 updateBroadphaseIfWarping; 
  CG_PhysicsObject *v35; 
  vec3_t outOrigin; 
  __int64 v37; 
  vec3_t gravity; 
  int v39[4]; 
  vec3_t position; 
  vec3_t force; 
  vec4_t quat; 
  vec4_t orientation; 

  v37 = -2i64;
  v4 = localClientNum;
  if ( !s_cgPhysicsVolumeInitialized[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 798, ASSERT_TYPE_ASSERT, "(s_cgPhysicsVolumeInitialized[localClientNum])", (const char *)&queryFormat, "s_cgPhysicsVolumeInitialized[localClientNum]") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 800, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 801, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
  v5 = CG_PhysicsObject_Get(entity->nextState.number, localClientNum);
  v35 = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 807, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  v6 = 3 * localClientNum + 3;
  v7 = v6;
  if ( CG_PhysicsVolume_IsEnabled(entity) )
  {
    if ( v5->physicsInstances[v6] == -1 )
    {
      CG_Entity_CreatePhysics(localClientNum, entity->nextState.number, 0);
      if ( v5->physicsInstances[v6] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 820, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[authWorldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[authWorldId] != PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
    }
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v6, v5->physicsInstances[v6], 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 824, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( myBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( myBodyId )") )
      __debugbreak();
    CG_GetPoseOrigin(&entity->pose, &outOrigin);
    AnglesToQuat(&entity->pose.angles, &quat);
    Physics_KeyframeRigidBodyTo((Physics_WorldId)v6, RigidBodyID, &outOrigin, &quat, 1.0, 0, 0, 0.0);
    flightDurationMs = entity->typeData.flightDurationMs;
    if ( (unsigned int)flightDurationMs > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 837, ASSERT_TYPE_ASSERT, "(runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED)", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
      __debugbreak();
    v10 = &s_physicsVolumeClientRuntimeData[v4][flightDurationMs];
    if ( !v10->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 839, ASSERT_TYPE_ASSERT, "(runtimeData->inUse)", (const char *)&queryFormat, "runtimeData->inUse") )
      __debugbreak();
    if ( !v10->bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 840, ASSERT_TYPE_ASSERT, "(runtimeData->bodyIds)", (const char *)&queryFormat, "runtimeData->bodyIds") )
      __debugbreak();
    Size = PhysicsBodyIdVector_GetSize(v10->bodyIds);
    v12 = 0;
    if ( Size )
    {
      v13 = Size;
      while ( 1 )
      {
        v14 = PhysicsBodyIdVector_Get(v10->bodyIds, v12);
        v15 = v14 & 0xFFFFFF;
        if ( (v14 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 848, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !Physics_IsRigidBodyValid((Physics_WorldId)v6, v14) )
          goto LABEL_74;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 122, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Motion ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(updateBroadphaseIfWarping) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Motion ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( v15 == 0xFFFFFF )
        {
          LODWORD(updateBroadphaseIfWarping) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Motion with invalid Body ID in world %i", "Physics_IsRigidBodyIdValid( bodyId )", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(updateBroadphaseIfWarping) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 181, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Motion ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        if ( v15 == 0xFFFFFF )
        {
          LODWORD(updateBroadphaseIfWarping) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 182, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Motion ID with invalid body id in world %i", "bodyId.isValid()", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v6)->world;
        if ( !world )
        {
          LODWORD(updateBroadphaseIfWarping) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 186, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get Motion Id %i: world is NULL", "world", updateBroadphaseIfWarping) )
            __debugbreak();
        }
        v17 = *(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, v14) + 64);
        if ( v17 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 858, ASSERT_TYPE_ASSERT, "( Physics_IsMotionIdValid( motionId ) )", (const char *)&queryFormat, "Physics_IsMotionIdValid( motionId )") )
          __debugbreak();
        p_u = &entity->nextState.lerp.u;
        if ( entity == (centity_t *)-488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1125, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
          __debugbreak();
        if ( (p_u->anonymous.data[0] & 0x20) != 0 )
        {
          PhysicsGravityModifier_SetGravityScalar((const Physics_WorldId)v6, v17, entity->nextState.lerp.u.turret.gunAngles.v[1]);
        }
        else
        {
          if ( entity == (centity_t *)-488i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1134, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
            __debugbreak();
          if ( (p_u->anonymous.data[0] & 0x40) != 0 )
          {
            v19 = entity->nextState.lerp.u.actor.impactVector.v[1];
            v20 = entity->nextState.lerp.u.actor.impactVector.v[0];
            LODWORD(gravity.v[0]) = entity->nextState.lerp.u.anonymous.data[2];
            gravity.v[1] = v20;
            gravity.v[2] = v19;
            PhysicsGravityModifier_SetGravity((const Physics_WorldId)v6, v17, &gravity);
          }
          else
          {
            if ( !PhysicsVolume_IsDirectionForceApplier((const LerpEntityStatePhysicsVolume *)&entity->nextState.lerp.u) )
            {
              if ( !PhysicsVolume_IsFocalForceApplier((const LerpEntityStatePhysicsVolume *)&entity->nextState.lerp.u) || CL_Pause_IsGamePaused() )
                goto LABEL_74;
              Physics_GetRigidBodyTransform((const Physics_WorldId)v6, v14, &position, &orientation);
              v23 = entity->nextState.lerp.u.turret.gunAngles.v[2] - position.v[0];
              m_data = entity->nextState.lerp.u.agentCorpse.attachModels[2].m_data;
              v24 = entity->nextState.lerp.u.actor.impactVector.v[0] - position.v[1];
              v26 = entity->nextState.lerp.u.actor.impactVector.v[1] - position.v[2];
              *(float *)&m_data = fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v26 * v26));
              _XMM3 = m_data;
              __asm
              {
                vcmpless xmm0, xmm3, xmm9
                vblendvps xmm1, xmm3, xmm8, xmm0
              }
              v30 = entity->nextState.lerp.u.turret.gunAngles.v[1];
              force.v[0] = (float)(v23 * (float)(1.0 / *(float *)&_XMM1)) * v30;
              force.v[1] = (float)(v24 * (float)(1.0 / *(float *)&_XMM1)) * v30;
              force.v[2] = (float)(v26 * (float)(1.0 / *(float *)&_XMM1)) * v30;
              p_force = &force;
              goto LABEL_73;
            }
            if ( !CL_Pause_IsGamePaused() )
            {
              v21 = entity->nextState.lerp.u.turret.gunAngles.v[1];
              *(float *)v39 = v21 * entity->nextState.lerp.u.turret.gunAngles.v[2];
              *(float *)&v39[1] = v21 * entity->nextState.lerp.u.actor.impactVector.v[0];
              *(float *)&v39[2] = v21 * entity->nextState.lerp.u.actor.impactVector.v[1];
              p_force = (vec3_t *)v39;
LABEL_73:
              PhysicsForceAction_AddForce((const Physics_WorldId)v6, v14, p_force, entity->nextState.lerp.u.actor.impactVector.v[2]);
            }
          }
        }
LABEL_74:
        if ( ++v12 >= v13 )
        {
          v5 = v35;
          v7 = v6;
          break;
        }
      }
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  else
  {
    if ( v5->physicsInstances[v6] == -1 )
      goto LABEL_85;
    CG_Entity_DestroyPhysics(localClientNum, entity->nextState.number);
  }
  v31 = v5->physicsInstances[v7];
  if ( v31 != -1 )
  {
    v32 = Physics_GetRigidBodyID((const Physics_WorldId)v6, v31, 0);
    if ( (v32 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 923, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    IsActivator = CG_PhysicsVolume_IsActivator(entity);
    Physics_EnableDeactivationForBody((Physics_WorldId)v6, v32, !IsActivator);
    if ( CG_PhysicsVolume_IsActivator(entity) )
      Physics_ActivateBody((Physics_WorldId)v6, v32);
  }
LABEL_85:
  CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
}

/*
==============
G_Create_physicsvolume
==============
*/
void G_Create_physicsvolume(gentity_s *ent, const vec3_t *origin, float radius, float height)
{
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 210, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Create_physicsvolume");
  ent->s.eType = ET_PHYSICS_VOLUME;
  ent->flags.m_flags[0] |= 0x200u;
  ent->s.lerp.u.anonymous.data[0] = 0;
  G_SetOrigin(ent, origin, 1, 1);
  if ( height >= 32767.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 223, ASSERT_TYPE_ASSERT, "( height < 0x7FFF )", (const char *)&queryFormat, "height < 0x7FFF") )
    __debugbreak();
  if ( radius >= 65535.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 226, ASSERT_TYPE_ASSERT, "( radius < 0xFFFF )", (const char *)&queryFormat, "radius < 0xFFFF") )
    __debugbreak();
  ent->s.staticState.general.xmodel = ((int)height << 16) | (int)radius;
  SV_LinkEntity(ent);
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
  float v4; 
  LerpEntityStateTypeUnion *p_u; 
  bool neverDeactivate; 
  unsigned int Instance; 
  __int16 number; 
  int Ref; 
  int shapeOverride; 
  const char *v11; 
  int v12; 
  const char *v13; 
  unsigned int RigidBodyID; 
  vec3_t position; 
  vec4_t quat; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 418, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 421, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 422, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( !G_PhysicsVolume_IsEnabled(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 423, ASSERT_TYPE_ASSERT, "( G_PhysicsVolume_IsEnabled( entity ) )", (const char *)&queryFormat, "G_PhysicsVolume_IsEnabled( entity )") )
    __debugbreak();
  G_PhysicsVolume_AllocateRuntimeData(entity);
  AssetByName = Physics_GetAssetByName(PHYSICS_VOLUME_ASSET_NAME);
  if ( !AssetByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 430, ASSERT_TYPE_ASSERT, "(physicsAsset)", (const char *)&queryFormat, "physicsAsset") )
    __debugbreak();
  v3 = G_PhysicsObject_Get(entity);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 434, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( v3->physicsInstances[0] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 435, ASSERT_TYPE_ASSERT, "( physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_MAIN] == 0xFFFFFFFF )", (const char *)&queryFormat, "physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_MAIN] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( v3->physicsInstances[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 436, ASSERT_TYPE_ASSERT, "( physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_DETAIL] == 0xFFFFFFFF )", (const char *)&queryFormat, "physicsObj->physicsInstances[PHYSICS_WORLD_ID_SERVER_DETAIL] == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v3->mapping = PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
  v4 = entity->r.currentOrigin.v[1];
  position.v[0] = entity->r.currentOrigin.v[0];
  position.v[2] = entity->r.currentOrigin.v[2];
  position.v[1] = v4;
  AnglesToQuat(&entity->r.currentAngles, &quat);
  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1197, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1200, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  p_u = &entity->s.lerp.u;
  if ( entity == (gentity_s *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1116, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  neverDeactivate = (p_u->anonymous.data[0] & 0x10) != 0;
  Instance = Physics_CreateInstance(PHYSICS_WORLD_ID_FIRST);
  if ( Instance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 453, ASSERT_TYPE_ASSERT, "( instanceId != 0xFFFFFFFF )", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v3->physicsInstances[0] = Instance;
  number = entity->s.number;
  if ( entity->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)number, "signed", number) )
    __debugbreak();
  Ref = Physics_MakeRef(Physics_RefSystem_GEntities, Physics_RelationshipSystem_None, entity->r.modelType, number);
  shapeOverride = entity->s.staticState.mover.moverFlags;
  if ( (p_u->actor.species & 4) != 0 )
  {
    if ( Physics_InstantiateAssetBody(Instance, PHYSICS_WORLD_ID_FIRST, AssetByName, 0, Ref, &position, &quat, 1, !neverDeactivate, neverDeactivate, shapeOverride, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
      goto LABEL_50;
    v11 = "Physics_InstantiateAssetBody( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
    v12 = 462;
    v13 = "(Physics_InstantiateAssetBody( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, shapeIndex, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
  }
  else if ( shapeOverride >> 16 )
  {
    if ( Physics_InstantiateAssetBodyCylinder(Instance, PHYSICS_WORLD_ID_FIRST, AssetByName, 0, Ref, &position, &quat, 1, !neverDeactivate, neverDeactivate, (float)(unsigned __int16)shapeOverride, (float)(shapeOverride >> 16), Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
      goto LABEL_50;
    v11 = "Physics_InstantiateAssetBodyCylinder( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
    v12 = 472;
    v13 = "(Physics_InstantiateAssetBodyCylinder( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, (float)height, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
  }
  else
  {
    if ( Physics_InstantiateAssetBodySphere(Instance, PHYSICS_WORLD_ID_FIRST, AssetByName, 0, Ref, &position, &quat, 1, !neverDeactivate, neverDeactivate, (float)(unsigned __int16)shapeOverride, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, 0) )
      goto LABEL_50;
    v11 = "Physics_InstantiateAssetBodySphere( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false )";
    v12 = 476;
    v13 = "(Physics_InstantiateAssetBodySphere( instanceId, PHYSICS_WORLD_ID_SERVER_MAIN, physicsAsset, 0, ref, position, orientation, true, !isActivating, isActivating, (float)radius, Physics_InstantiationForceTypeKeyframed, Physics_InstantiationFilterTypeNone, false ))";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", v12, ASSERT_TYPE_ASSERT, v13, (const char *)&queryFormat, v11) )
    __debugbreak();
LABEL_50:
  ++AssetByName->usageCounter.serverEnt;
  G_PhysicsObject_MarkPhysicsObjectAsUsed(entity->s.number, 1);
  G_PhysicsObject_MarkPhysicsObjectAsShown(entity->s.number, 1, 1);
  G_PhysicsObject_MarkPhysicsObjectDetailAsShown(entity->s.number, 1, 1);
  G_PhysicsObject_CachePrimaryBodies(entity->s.number);
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
  float v7; 
  int NumHits; 
  int v9; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  __int64 v13; 
  hkMemoryAllocator *v14; 
  hkMemoryAllocator *v15; 
  Physics_QueryPointExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v17; 
  float gravityScalar; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 972, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized", -2i64) )
    __debugbreak();
  Physics_GetGravity(PHYSICS_WORLD_ID_FIRST, gravity);
  *(_QWORD *)force->v = 0i64;
  force->v[2] = 0.0;
  AllResult = PhysicsQuery_GetAllResult(PHYSICS_WORLD_ID_FIRST);
  if ( !AllResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 983, ASSERT_TYPE_ASSERT, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v17, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v17, -5);
  v17.m_ignorePhysicsVolumes = Physics_IgnoreVolumeOption_OnlyVolumes;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = -1;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v17;
  Physics_QueryPoint(PHYSICS_WORLD_ID_FIRST, point, 0.0, &extendedData, AllResult);
  v7 = FLOAT_1_0;
  gravityScalar = FLOAT_1_0;
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  v9 = 0;
  if ( NumHits > 0 )
  {
    do
    {
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(AllResult, v9);
      if ( (ClosestPointHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1007, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      v13 = EntityNum;
      if ( (unsigned int)EntityNum > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1012, ASSERT_TYPE_ASSERT, "( entnum >= 0 && entnum <= ( 2048 ) )", (const char *)&queryFormat, "entnum >= 0 && entnum <= MAX_GENTITIES") )
        __debugbreak();
      PhysicsVolume_CalculateEffects((LerpEntityStatePhysicsVolume *)&g_entities[v13].s.lerp.u, point, gravity, &gravityScalar, force);
      ++v9;
    }
    while ( v9 < NumHits );
    v7 = gravityScalar;
  }
  gravity->v[0] = v7 * gravity->v[0];
  gravity->v[1] = v7 * gravity->v[1];
  gravity->v[2] = v7 * gravity->v[2];
  v14 = hkMemHeapAllocator();
  v17.m_ignoreBodies.m_size = 0;
  if ( v17.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v14, v17.m_ignoreBodies.m_data, 4, v17.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v17.m_ignoreBodies.m_data = NULL;
  v17.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v15 = hkMemHeapAllocator();
  v17.m_ignoreEntities.m_size = 0;
  if ( v17.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v15, v17.m_ignoreEntities.m_data, 8, v17.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
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
void G_PhysicsVolume_SetDirectionForceApplier(gentity_s *entity, bool enable, const vec3_t *direction, float force, float maxSpeed)
{
  int v8; 
  int v9; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1505, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1507, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1508, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityScalar(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1509, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityScalar( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityScalar( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityVector(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1510, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityVector( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityVector( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsFocalForceApplier(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1511, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsFocalForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsFocalForceApplier( entity )") )
    __debugbreak();
  v8 = entity->s.lerp.u.anonymous.data[0];
  if ( enable )
  {
    entity->s.lerp.u.anonymous.data[0] = v8 | 0x80;
    entity->s.lerp.u.turret.gunAngles.v[1] = force;
    entity->s.lerp.u.anonymous.data[2] = LODWORD(direction->v[0]);
    entity->s.lerp.u.anonymous.data[3] = LODWORD(direction->v[1]);
    v9 = LODWORD(direction->v[2]);
    entity->s.lerp.u.actor.impactVector.v[2] = maxSpeed;
    entity->s.lerp.u.anonymous.data[4] = v9;
  }
  else
  {
    entity->s.lerp.u.anonymous.data[0] = v8 & 0xFFFFFF7F;
  }
}

/*
==============
G_PhysicsVolume_SetFocalForceApplier
==============
*/
void G_PhysicsVolume_SetFocalForceApplier(gentity_s *entity, bool enable, const vec3_t *point, float force, float maxSpeed)
{
  int v8; 
  int v9; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1532, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1534, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1535, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityScalar(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1536, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityScalar( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityScalar( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityVector(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1537, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityVector( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityVector( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsDirectionForceApplier(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1538, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsDirectionForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsDirectionForceApplier( entity )") )
    __debugbreak();
  v8 = entity->s.lerp.u.anonymous.data[0];
  if ( enable )
  {
    entity->s.lerp.u.anonymous.data[0] = v8 | 0x100;
    entity->s.lerp.u.turret.gunAngles.v[1] = force;
    entity->s.lerp.u.anonymous.data[2] = LODWORD(point->v[0]);
    entity->s.lerp.u.anonymous.data[3] = LODWORD(point->v[1]);
    v9 = LODWORD(point->v[2]);
    entity->s.lerp.u.actor.impactVector.v[2] = maxSpeed;
    entity->s.lerp.u.anonymous.data[4] = v9;
  }
  else
  {
    entity->s.lerp.u.anonymous.data[0] = v8 & 0xFFFFFEFF;
  }
}

/*
==============
G_PhysicsVolume_SetGravityScalar
==============
*/
void G_PhysicsVolume_SetGravityScalar(gentity_s *entity, bool enable, float scale)
{
  int v5; 
  int v6; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1457, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1459, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( entity->s.eType != ET_PHYSICS_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1460, ASSERT_TYPE_ASSERT, "( entity->s.eType == ET_PHYSICS_VOLUME )", (const char *)&queryFormat, "entity->s.eType == ET_PHYSICS_VOLUME") )
    __debugbreak();
  if ( G_PhysicsVolume_IsGravityVector(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1461, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsGravityVector( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsGravityVector( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsDirectionForceApplier(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1462, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsDirectionForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsDirectionForceApplier( entity )") )
    __debugbreak();
  if ( G_PhysicsVolume_IsFocalForceApplier(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1463, ASSERT_TYPE_ASSERT, "( !G_PhysicsVolume_IsFocalForceApplier( entity ) )", (const char *)&queryFormat, "!G_PhysicsVolume_IsFocalForceApplier( entity )") )
    __debugbreak();
  v5 = entity->s.lerp.u.anonymous.data[0];
  if ( enable )
  {
    entity->s.lerp.u.turret.gunAngles.v[1] = scale;
    v6 = v5 | 0x20;
  }
  else
  {
    v6 = v5 & 0xFFFFFFDF;
  }
  entity->s.lerp.u.anonymous.data[0] = v6;
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
  PhysicsVolumeRuntimeData *v3; 
  unsigned int v4; 
  unsigned int Size; 
  unsigned int v6; 
  hknpWorld *world; 
  unsigned int v8; 
  LerpEntityStateTypeUnion *p_u; 
  float v10; 
  float v11; 
  int v12; 
  vec3_t *p_force; 
  float v14; 
  float v15; 
  float v16; 
  __int128 m_data; 
  float v18; 
  __int64 v22; 
  __int64 v23; 
  vec3_t gravity; 
  int v25[4]; 
  vec3_t position; 
  vec3_t force; 
  vec4_t orientation; 

  if ( !s_gPhysicsVolumeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 721, ASSERT_TYPE_ASSERT, "( s_gPhysicsVolumeInitialized )", (const char *)&queryFormat, "s_gPhysicsVolumeInitialized") )
    __debugbreak();
  if ( G_PhysicsVolume_IsEnabled(entity) )
  {
    ammoCount = entity->c.item[0].ammoCount;
    if ( (unsigned int)ammoCount > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 732, ASSERT_TYPE_ASSERT, "( runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED )", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
      __debugbreak();
    v3 = &s_physicsVolumeServerRuntimeData[ammoCount];
    if ( !v3->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 734, ASSERT_TYPE_ASSERT, "( runtimeData->inUse )", (const char *)&queryFormat, "runtimeData->inUse") )
      __debugbreak();
    if ( !v3->bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 735, ASSERT_TYPE_ASSERT, "( runtimeData->bodyIds )", (const char *)&queryFormat, "runtimeData->bodyIds") )
      __debugbreak();
    v4 = 0;
    Size = PhysicsBodyIdVector_GetSize(v3->bodyIds);
    if ( Size )
    {
      do
      {
        v6 = PhysicsBodyIdVector_Get(v3->bodyIds, v4);
        if ( (v6 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 743, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v6) )
          goto LABEL_48;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 122, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Motion ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (v6 & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v22) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Motion with invalid Body ID in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v22) )
            __debugbreak();
          LODWORD(v23) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 182, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Motion ID with invalid body id in world %i", "bodyId.isValid()", v23) )
            __debugbreak();
        }
        world = g_havokPhysicsWorlds[0].world;
        if ( !g_havokPhysicsWorlds[0].world )
        {
          LODWORD(v22) = g_havokPhysicsWorlds[0].world;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 186, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get Motion Id %i: world is NULL", "world", v22) )
            __debugbreak();
        }
        v8 = *(_DWORD *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, v6) + 64);
        if ( v8 == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 753, ASSERT_TYPE_ASSERT, "( Physics_IsMotionIdValid( motionId ) )", (const char *)&queryFormat, "Physics_IsMotionIdValid( motionId )") )
          __debugbreak();
        p_u = &entity->s.lerp.u;
        if ( entity == (gentity_s *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1125, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
          __debugbreak();
        if ( (p_u->anonymous.data[0] & 0x20) != 0 )
        {
          PhysicsGravityModifier_SetGravityScalar(PHYSICS_WORLD_ID_FIRST, v8, entity->s.lerp.u.turret.gunAngles.v[1]);
        }
        else
        {
          if ( entity == (gentity_s *)-88i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1134, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
            __debugbreak();
          if ( (p_u->anonymous.data[0] & 0x40) != 0 )
          {
            v10 = entity->s.lerp.u.actor.impactVector.v[0];
            LODWORD(gravity.v[0]) = entity->s.lerp.u.anonymous.data[2];
            LODWORD(gravity.v[2]) = entity->s.lerp.u.anonymous.data[4];
            gravity.v[1] = v10;
            PhysicsGravityModifier_SetGravity(PHYSICS_WORLD_ID_FIRST, v8, &gravity);
          }
          else
          {
            if ( PhysicsVolume_IsDirectionForceApplier((const LerpEntityStatePhysicsVolume *)&entity->s.lerp.u) )
            {
              v11 = entity->s.lerp.u.turret.gunAngles.v[1];
              *(float *)&v12 = v11 * entity->s.lerp.u.actor.impactVector.v[0];
              *(float *)v25 = v11 * entity->s.lerp.u.turret.gunAngles.v[2];
              *(float *)&v25[2] = v11 * entity->s.lerp.u.actor.impactVector.v[1];
              v25[1] = v12;
              p_force = (vec3_t *)v25;
LABEL_47:
              PhysicsForceAction_AddForce(PHYSICS_WORLD_ID_FIRST, v6, p_force, entity->s.lerp.u.actor.impactVector.v[2]);
              goto LABEL_48;
            }
            if ( PhysicsVolume_IsFocalForceApplier((const LerpEntityStatePhysicsVolume *)&entity->s.lerp.u) )
            {
              Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, v6, &position, &orientation);
              v14 = entity->s.lerp.u.turret.gunAngles.v[1];
              v15 = entity->s.lerp.u.turret.gunAngles.v[2] - position.v[0];
              m_data = entity->s.lerp.u.agentCorpse.attachModels[2].m_data;
              v16 = entity->s.lerp.u.actor.impactVector.v[0] - position.v[1];
              v18 = entity->s.lerp.u.actor.impactVector.v[1] - position.v[2];
              *(float *)&m_data = fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v18 * v18));
              _XMM1 = m_data;
              __asm
              {
                vcmpless xmm0, xmm1, xmm9
                vblendvps xmm0, xmm1, xmm8, xmm0
              }
              force.v[0] = (float)((float)(1.0 / *(float *)&_XMM0) * v15) * v14;
              force.v[2] = (float)((float)(1.0 / *(float *)&_XMM0) * v18) * v14;
              force.v[1] = (float)((float)(1.0 / *(float *)&_XMM0) * v16) * v14;
              p_force = &force;
              goto LABEL_47;
            }
          }
        }
LABEL_48:
        ++v4;
      }
      while ( v4 < Size );
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
  float vectorZ; 
  float vectorX; 
  float scaleValue; 
  float vectorY; 
  float v16; 
  float v17; 
  float v18; 
  __int128 vectorY_low; 
  float v20; 

  if ( !physicsVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 1089, ASSERT_TYPE_ASSERT, "( physicsVolume )", (const char *)&queryFormat, "physicsVolume") )
    __debugbreak();
  if ( (physicsVolume->flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 940, ASSERT_TYPE_ASSERT, "( PhysicsVolume_IsEnabled( physicsVolume ) )", (const char *)&queryFormat, "PhysicsVolume_IsEnabled( physicsVolume )") )
    __debugbreak();
  flags = physicsVolume->flags;
  if ( (physicsVolume->flags & 0x20) != 0 )
  {
    _XMM0 = LODWORD(physicsVolume->scaleValue);
    __asm { vminss  xmm1, xmm0, dword ptr [rbp+0] }
    *gravityScalar = *(float *)&_XMM1;
    flags = physicsVolume->flags;
  }
  if ( (flags & 0x40) != 0 )
  {
    vectorZ = physicsVolume->vectorZ;
    vectorX = physicsVolume->vectorX;
    gravity->v[1] = physicsVolume->vectorY;
    gravity->v[2] = vectorZ;
    gravity->v[0] = vectorX;
  }
  else if ( (flags & 0x80) != 0 )
  {
    scaleValue = physicsVolume->scaleValue;
    vectorY = physicsVolume->vectorY;
    v16 = physicsVolume->vectorZ;
    force->v[0] = (float)(scaleValue * physicsVolume->vectorX) + force->v[0];
    force->v[1] = (float)(scaleValue * vectorY) + force->v[1];
    force->v[2] = (float)(scaleValue * v16) + force->v[2];
  }
  else if ( PhysicsVolume_IsFocalForceApplier(physicsVolume) )
  {
    v17 = physicsVolume->vectorX - point->v[0];
    vectorY_low = LODWORD(physicsVolume->vectorY);
    v18 = physicsVolume->vectorY - point->v[1];
    v20 = physicsVolume->vectorZ - point->v[2];
    *(float *)&vectorY_low = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v20 * v20));
    _XMM4 = vectorY_low;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    *(float *)&_XMM4 = physicsVolume->scaleValue;
    force->v[0] = (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + force->v[0];
    force->v[1] = (float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + force->v[1];
    force->v[2] = (float)((float)(v20 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM4) + force->v[2];
  }
}

/*
==============
PhysicsVolume_DebugDrawArrow
==============
*/
void PhysicsVolume_DebugDrawArrow(const vec3_t *base, const vec3_t *direction, float length, const vec4_t *color)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v9; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  float v24; 
  float v25; 
  float v26; 
  vec3_t cross; 
  vec3_t v1; 
  vec3_t end; 
  vec3_t v30; 
  vec3_t v31; 
  vec3_t v32; 
  vec3_t v33; 

  v4 = direction->v[0];
  v5 = direction->v[1];
  v6 = (float)(length * direction->v[0]) + base->v[0];
  v7 = length * v5;
  v9 = direction->v[2];
  end.v[0] = v6;
  end.v[1] = v7 + base->v[1];
  end.v[2] = (float)(length * v9) + base->v[2];
  v1.v[0] = v9;
  v1.v[1] = v4;
  v1.v[2] = v5;
  Vec3Cross(direction, &v1, &cross);
  v13 = LODWORD(cross.v[0]);
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
  _XMM3 = v13;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  cross.v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
  v17 = cross.v[0];
  cross.v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
  v18 = cross.v[1];
  cross.v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
  v19 = cross.v[2];
  Vec3Cross(&cross, direction, &v1);
  v20 = LODWORD(v1.v[1]);
  *(float *)&v20 = fsqrt((float)((float)(*(float *)&v20 * *(float *)&v20) + (float)(v1.v[0] * v1.v[0])) + (float)(v1.v[2] * v1.v[2]));
  _XMM3 = v20;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm8, xmm0
  }
  v24 = (float)((float)(length * 0.89999998) * direction->v[0]) + base->v[0];
  v25 = (float)((float)(length * 0.89999998) * direction->v[2]) + base->v[2];
  v26 = (float)((float)(length * 0.89999998) * direction->v[1]) + base->v[1];
  v30.v[0] = (float)((float)(length * 0.050000001) * (float)(v1.v[0] * (float)(1.0 / *(float *)&_XMM0))) + v24;
  v30.v[1] = (float)((float)(length * 0.050000001) * (float)(v1.v[1] * (float)(1.0 / *(float *)&_XMM0))) + v26;
  v30.v[2] = (float)((float)(length * 0.050000001) * (float)(v1.v[2] * (float)(1.0 / *(float *)&_XMM0))) + v25;
  v31.v[0] = (float)((float)(length * -0.050000001) * (float)(v1.v[0] * (float)(1.0 / *(float *)&_XMM0))) + v24;
  v31.v[1] = (float)((float)(length * -0.050000001) * (float)(v1.v[1] * (float)(1.0 / *(float *)&_XMM0))) + v26;
  v31.v[2] = (float)((float)(length * -0.050000001) * (float)(v1.v[2] * (float)(1.0 / *(float *)&_XMM0))) + v25;
  v32.v[0] = (float)((float)(length * 0.050000001) * v17) + v24;
  v32.v[1] = (float)((float)(length * 0.050000001) * v18) + v26;
  v32.v[2] = (float)((float)(length * 0.050000001) * v19) + v25;
  v33.v[0] = (float)((float)(length * -0.050000001) * v17) + v24;
  v33.v[2] = (float)((float)(length * -0.050000001) * v19) + v25;
  v33.v[1] = (float)((float)(length * -0.050000001) * v18) + v26;
  CL_AddDebugLine(base, &end, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v30, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v31, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v32, color, 0, 1, 0);
  CL_AddDebugLine(&end, &v33, color, 0, 1, 0);
}

/*
==============
PhysicsVolume_DrawDebug
==============
*/
void PhysicsVolume_DrawDebug(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  float *v5; 
  float *v6; 
  const ScreenPlacement *v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  gentity_s *v11; 
  vec4_t v12; 
  CgEntitySystem *EntitySystem; 
  unsigned int v14; 
  unsigned int v15; 
  centity_t *Entity; 
  LerpEntityStatePhysicsVolume *p_u; 
  vec4_t v18; 
  __int64 flightDurationMs; 
  PhysicsVolumeRuntimeData *v20; 
  unsigned int Size; 
  unsigned int v22; 
  unsigned int v23; 
  __int128 v25; 
  vec4_t *setColor; 
  vec4_t *setColora; 
  unsigned int v30; 
  unsigned int v31; 
  float gravityScalar[2]; 
  float *v33; 
  ScreenPlacement *scrPlacea; 
  CgEntitySystem *v35; 
  vec3_t outOrigin; 
  float *v37; 
  __int64 v38; 
  vec4_t color; 
  vec3_t force; 
  vec3_t direction; 
  vec3_t position; 
  vec3_t gravity; 
  vec4_t orientation; 
  char dest[256]; 

  v38 = -2i64;
  v5 = y;
  v33 = y;
  v6 = x;
  v37 = x;
  v7 = scrPlace;
  scrPlacea = (ScreenPlacement *)scrPlace;
  if ( s_gPhysicsVolumeInitialized && s_cgPhysicsVolumeInitialized[0] )
  {
    if ( physics_volume_debugDrawServer && physics_volume_debugDrawServer->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Physics Volume Summary - Server");
      Physics_DrawDebugString(v7, *v6, *v5, dest, &colorWhite, 0, 1, charHeight, 0);
      *v5 = charHeight + *v5;
      *v6 = tabWidth + *v6;
      v8 = 0;
      v9 = 0;
      v10 = 0i64;
      do
      {
        v11 = g_entities;
        if ( g_entities[v10].r.isInUse && g_entities[v10].s.eType == ET_PHYSICS_VOLUME )
        {
          if ( (g_entities[v10].s.lerp.u.anonymous.data[0] & 8) != 0 )
            v12 = (vec4_t)_xmm;
          else
            v12 = (vec4_t)_xmm;
          color = v12;
          LODWORD(setColor) = v9;
          Com_sprintf(dest, 0x100ui64, "Volume:%i Entity:%i", v8, setColor);
          Physics_DrawDebugString(scrPlacea, *v6, *v33, dest, &color, 0, 1, charHeight, 0);
          *v33 = charHeight + *v33;
          Com_sprintf(dest, 0x100ui64, "%i", v8);
          CL_AddDebugString(&v11[v10].r.currentOrigin, &color, 1.0, dest, 0, 1);
          *v6 = tabWidth + *v6;
          PhysicsVolume_DrawDebugVolume(1, v8, (LerpEntityStatePhysicsVolume *)&v11[v10].s.lerp.u, v11[v10].s.staticState.mover.moverFlags, &v11[v10].r.currentOrigin, scrPlacea, v6, v33, tabWidth, charHeight);
          PhysicsVolume_DrawDebugShape(1, (LerpEntityStatePhysicsVolume *)&v11[v10].s.lerp.u, v11[v10].s.staticState.mover.moverFlags, &v11[v10].r.currentOrigin, &v11[v10].r.currentAngles);
          *v6 = *v6 - tabWidth;
          ++v8;
        }
        ++v9;
        ++v10;
      }
      while ( v9 < 0x800 );
      *v6 = *v6 - tabWidth;
      v5 = v33;
      v7 = scrPlacea;
    }
    if ( physics_volume_debugDrawClient && physics_volume_debugDrawClient->current.enabled )
    {
      Com_sprintf(dest, 0x100ui64, "Physics Volume Summary - Client");
      Physics_DrawDebugString(v7, *v6, *v5, dest, &colorWhite, 0, 1, charHeight, 0);
      *v5 = charHeight + *v5;
      EntitySystem = CgEntitySystem::GetEntitySystem(LOCAL_CLIENT_0);
      v35 = EntitySystem;
      if ( !EntitySystem )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2046, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
          __debugbreak();
        EntitySystem = v35;
      }
      *v6 = tabWidth + *v6;
      v14 = 0;
      v30 = 0;
      v15 = 0;
      v31 = 0;
      do
      {
        Entity = CgEntitySystem::GetEntity(EntitySystem, v15);
        if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2055, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
          __debugbreak();
        if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_PHYSICS_VOLUME )
        {
          p_u = (LerpEntityStatePhysicsVolume *)&Entity->nextState.lerp.u;
          if ( (Entity->nextState.lerp.u.anonymous.data[0] & 8) != 0 )
            v18 = (vec4_t)_xmm;
          else
            v18 = (vec4_t)_xmm;
          color = v18;
          LODWORD(setColora) = v15;
          Com_sprintf(dest, 0x100ui64, "Volume:%i Entity:%i", v14, setColora);
          Physics_DrawDebugString(v7, *v6, *v5, dest, &color, 0, 1, charHeight, 0);
          *v5 = charHeight + *v5;
          Com_sprintf(dest, 0x100ui64, "%i", v14);
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          CL_AddDebugString(&outOrigin, &color, 1.0, dest, 0, 1);
          *v6 = tabWidth + *v6;
          PhysicsVolume_DrawDebugVolume(0, v14, (LerpEntityStatePhysicsVolume *)&Entity->nextState.lerp.u, Entity->nextState.staticState.mover.moverFlags, &outOrigin, v7, v6, v5, tabWidth, charHeight);
          PhysicsVolume_DrawDebugShape(0, (LerpEntityStatePhysicsVolume *)&Entity->nextState.lerp.u, Entity->nextState.staticState.mover.moverFlags, &outOrigin, &Entity->pose.angles);
          if ( CG_PhysicsVolume_IsEnabled(Entity) )
          {
            flightDurationMs = Entity->typeData.flightDurationMs;
            if ( (unsigned int)flightDurationMs > 0x1F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2087, ASSERT_TYPE_ASSERT, "(runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED)", (const char *)&queryFormat, "runtimeDataIndex >= 0 && runtimeDataIndex < PHYSICS_VOLUME_MAX_ENABLED") )
              __debugbreak();
            v20 = &s_physicsVolumeClientRuntimeData[0][flightDurationMs];
            if ( !v20->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2089, ASSERT_TYPE_ASSERT, "(runtimeData->inUse)", (const char *)&queryFormat, "runtimeData->inUse") )
              __debugbreak();
            Size = PhysicsBodyIdVector_GetSize(v20->bodyIds);
            v22 = 0;
            if ( Size )
            {
              do
              {
                v23 = PhysicsBodyIdVector_Get(v20->bodyIds, v22);
                if ( (v23 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsvolume.cpp", 2099, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                  __debugbreak();
                Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v23, &position, &orientation);
                CL_AddDebugLine(&outOrigin, &position, &color, 0, 1, 0);
                gravityScalar[0] = FLOAT_1_0;
                force.v[0] = 0.0;
                force.v[1] = 0.0;
                force.v[2] = 0.0;
                PhysicsVolume_CalculateEffects(p_u, &position, &gravity, gravityScalar, &force);
                v25 = LODWORD(force.v[1]);
                *(float *)&v25 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(force.v[0] * force.v[0])) + (float)(force.v[2] * force.v[2]));
                _XMM2 = v25;
                __asm
                {
                  vcmpless xmm0, xmm2, xmm11
                  vblendvps xmm1, xmm2, xmm9, xmm0
                }
                gravityScalar[0] = *(float *)&_XMM1;
                direction.v[0] = force.v[0] * (float)(1.0 / *(float *)&_XMM1);
                direction.v[1] = force.v[1] * (float)(1.0 / *(float *)&_XMM1);
                direction.v[2] = force.v[2] * (float)(1.0 / *(float *)&_XMM1);
                if ( *(float *)&v25 > 0.0 )
                  PhysicsVolume_DebugDrawArrow(&position, &direction, *(float *)&v25, &color);
                ++v22;
              }
              while ( v22 < Size );
              v6 = v37;
              v15 = v31;
              v14 = v30;
            }
            v7 = scrPlacea;
            v5 = v33;
          }
          *v6 = *v6 - tabWidth;
          v30 = ++v14;
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        v31 = ++v15;
        EntitySystem = v35;
      }
      while ( v15 < 0x800 );
      *v6 = *v6 - tabWidth;
    }
  }
}

/*
==============
PhysicsVolume_DrawDebugShape
==============
*/
void PhysicsVolume_DrawDebugShape(bool server, LerpEntityStatePhysicsVolume *physicsVolume, int shapeId, const vec3_t *origin)
{
  const vec3_t *v6; 
  _BYTE *v7; 
  hknpShape *MapEntsShape; 
  int v9; 
  float *v10; 
  float *v11; 
  float v12; 
  float v13; 
  float v14; 
  float *v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  int v20; 
  float v21; 
  int numLines; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t end; 
  vec4_t color; 
  vec3_t pointArray; 

  PhysicsVolume_GetDebugDrawColor(server, (physicsVolume->flags & 8) != 0, &color);
  if ( (*v7 & 4) != 0 )
  {
    AnglesToAxis(v6, &axis);
    MapEntsShape = WorldCollision_GetMapEntsShape(shapeId);
    numLines = 0;
    Physics_GetWireframeGeometry(MapEntsShape, &pointArray, 300, &numLines);
    v9 = 0;
    if ( numLines > 0 )
    {
      v10 = &pointArray.v[2];
      do
      {
        v11 = v10 - 2;
        if ( v10 - 2 == (float *)&start && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
          __debugbreak();
        v12 = *v11;
        v13 = *(v10 - 1);
        v14 = *v10;
        start.v[0] = (float)((float)((float)(v13 * axis.m[0].v[1]) + (float)(*v11 * axis.m[0].v[0])) + (float)(*v10 * axis.m[0].v[2])) + origin->v[0];
        start.v[1] = (float)((float)((float)(v13 * axis.m[1].v[1]) + (float)(v12 * axis.m[1].v[0])) + (float)(v14 * axis.m[1].v[2])) + origin->v[1];
        v15 = v10 + 1;
        start.v[2] = (float)((float)((float)(v13 * axis.m[2].v[1]) + (float)(v12 * axis.m[2].v[0])) + (float)(v14 * axis.m[2].v[2])) + origin->v[2];
        if ( v10 + 1 == (float *)&end && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
          __debugbreak();
        v16 = v10[2];
        v17 = *v15;
        v18 = v10[3];
        end.v[0] = (float)((float)((float)(v16 * axis.m[0].v[1]) + (float)(*v15 * axis.m[0].v[0])) + (float)(v18 * axis.m[0].v[2])) + origin->v[0];
        end.v[1] = (float)((float)((float)(v16 * axis.m[1].v[1]) + (float)(v17 * axis.m[1].v[0])) + (float)(v18 * axis.m[1].v[2])) + origin->v[1];
        end.v[2] = (float)((float)((float)(v16 * axis.m[2].v[1]) + (float)(v17 * axis.m[2].v[0])) + (float)(v18 * axis.m[2].v[2])) + origin->v[2];
        CL_AddDebugLine(&start, &end, &color, 0, 1, 0);
        ++v9;
        v10 += 6;
      }
      while ( v9 < numLines );
    }
  }
  else
  {
    v19 = (unsigned __int16)shapeId;
    v20 = shapeId >> 16;
    if ( v20 )
    {
      AnglesToAxis(v6, &axis);
      v21 = (float)((float)v20 * axis.m[1].v[2]) + origin->v[1];
      start.v[0] = (float)((float)v20 * axis.m[0].v[2]) + origin->v[0];
      start.v[2] = (float)((float)v20 * axis.m[2].v[2]) + origin->v[2];
      start.v[1] = v21;
      CG_DebugCylinder(origin, &start, (float)v19, &color, 0, 1);
    }
    else
    {
      CG_DebugSphere(origin, (float)v19, &color, 0, 1);
    }
  }
}

/*
==============
PhysicsVolume_DrawDebugVolume
==============
*/
void PhysicsVolume_DrawDebugVolume(bool server, unsigned int volumeId, LerpEntityStatePhysicsVolume *physicsVolume, int shapeIndex, const vec3_t *position, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  const char *v15; 
  unsigned int flags; 
  const char *v17; 
  unsigned int v18; 
  __int128 vectorX_low; 
  float vectorY; 
  float vectorZ; 
  __int128 v22; 
  float v26; 
  float v27; 
  float v28; 
  float limit; 
  double scaleValue; 
  double v31; 
  double v32; 
  double vectorX; 
  __int128 v34; 
  float v35; 
  float v36; 
  __int128 v37; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  vec3_t *p_base; 
  double v64; 
  vec3_t direction; 
  vec3_t base; 
  vec4_t color; 
  char dest[256]; 

  PhysicsVolume_GetDebugDrawColor(server, (physicsVolume->flags & 8) != 0, &color);
  if ( (int)v11 < 0 )
  {
    v12 = -(int)v11;
    v13 = (unsigned __int16)v12;
    v14 = v12 >> 16;
    if ( v14 )
      Com_sprintf(dest, 0x100ui64, "Geometry based on cylinder with radius %i height %i", v13, v14);
    else
      Com_sprintf(dest, 0x100ui64, "Geometry based on sphere with radius %i", v13);
  }
  else
  {
    Com_sprintf(dest, 0x100ui64, "Geometry based on Brush %i", v11);
  }
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  v15 = "Is Active";
  if ( (physicsVolume->flags & 8) == 0 )
    v15 = "Is Not Active";
  Com_sprintf(dest, 0x100ui64, v15);
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  flags = physicsVolume->flags;
  if ( (physicsVolume->flags & 3) == 3 )
  {
    Com_sprintf(dest, 0x100ui64, "Affects Characters, Missiles/Grenades and Dynamic Physics");
  }
  else if ( (flags & 1) != 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Affects Characters and Dynamic Physics");
  }
  else
  {
    v17 = "Affects Missiles/Grenades and Dynamic Physics";
    if ( (flags & 2) == 0 )
      v17 = "Only affects Dynamic Physics";
    Com_sprintf(dest, 0x100ui64, v17);
  }
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  v18 = physicsVolume->flags;
  if ( (physicsVolume->flags & 0x10) != 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Activates all dynamic physics inside");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v18 = physicsVolume->flags;
  }
  if ( (v18 & 0x20) != 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Scales gravity by %.2f", physicsVolume->scaleValue);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    return;
  }
  if ( (v18 & 0x40) != 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Sets gravity t (%.2f, %.2f, %.2f)", physicsVolume->vectorX, physicsVolume->vectorY, physicsVolume->vectorZ);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    vectorX_low = LODWORD(physicsVolume->vectorX);
    vectorY = physicsVolume->vectorY;
    vectorZ = physicsVolume->vectorZ;
    v22 = vectorX_low;
    *(float *)&v22 = fsqrt((float)((float)(*(float *)&vectorX_low * *(float *)&vectorX_low) + (float)(vectorY * vectorY)) + (float)(vectorZ * vectorZ));
    _XMM3 = v22;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v26 = vectorY * (float)(1.0 / *(float *)&_XMM0);
    direction.v[0] = *(float *)&vectorX_low * (float)(1.0 / *(float *)&_XMM0);
    v27 = vectorZ * (float)(1.0 / *(float *)&_XMM0);
    v28 = *(float *)&v22 * 0.1;
    direction.v[1] = v26;
LABEL_26:
    direction.v[2] = v27;
    PhysicsVolume_DebugDrawArrow(position, &direction, v28, &color);
    return;
  }
  if ( (v18 & 0x80u) != 0 )
  {
    limit = physicsVolume->limit;
    scaleValue = physicsVolume->scaleValue;
    v31 = physicsVolume->vectorZ;
    v32 = physicsVolume->vectorY;
    vectorX = physicsVolume->vectorX;
    if ( limit == 3.4028235e38 )
      Com_sprintf(dest, 0x100ui64, "Applies %.2f force in the global (%.2f, %.2f, %.2f) direction", scaleValue, vectorX, v32, v31);
    else
      Com_sprintf(dest, 0x100ui64, "Applies %.2f force in the global (%.2f, %.2f, %.2f) direction up to speed %.2f", scaleValue, vectorX, v32, v31, limit);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
    *y = charHeight + *y;
    v34 = LODWORD(physicsVolume->vectorX);
    v35 = physicsVolume->vectorY;
    v36 = physicsVolume->vectorZ;
    v37 = v34;
    *(float *)&v37 = fsqrt((float)((float)(*(float *)&v34 * *(float *)&v34) + (float)(v35 * v35)) + (float)(v36 * v36));
    _XMM3 = v37;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    direction.v[1] = v35 * (float)(1.0 / *(float *)&_XMM0);
    v41 = physicsVolume->scaleValue;
    direction.v[0] = *(float *)&v34 * (float)(1.0 / *(float *)&_XMM0);
    v27 = v36 * (float)(1.0 / *(float *)&_XMM0);
    v28 = v41 * 10.0;
    goto LABEL_26;
  }
  if ( (v18 & 0x100) != 0 )
  {
    v42 = physicsVolume->vectorX;
    v43 = physicsVolume->vectorY;
    v44 = physicsVolume->scaleValue;
    v45 = physicsVolume->limit;
    base.v[2] = physicsVolume->vectorZ;
    v46 = base.v[2];
    base.v[0] = v42;
    base.v[1] = v43;
    v47 = v43;
    v48 = v42;
    if ( v44 < 0.0 )
    {
      v64 = COERCE_FLOAT(LODWORD(v44) ^ _xmm);
      if ( v45 == 3.4028235e38 )
        Com_sprintf(dest, 0x100ui64, "Applies %.2f force away from (%.2f, %.2f, %.2f)", v64, v48, v47, v46);
      else
        Com_sprintf(dest, 0x100ui64, "Applies %.2f force away from (%.2f, %.2f, %.2f) up to speed %.2f", v64, v48, v47, v46, v45);
      PhysicsVolume_DebugDrawArrow(&base, &X_VEC, 10.0 * physicsVolume->scaleValue, &color);
      PhysicsVolume_DebugDrawArrow(&base, &X_VEC, -10.0 * physicsVolume->scaleValue, &color);
      PhysicsVolume_DebugDrawArrow(&base, &Y_VEC, 10.0 * physicsVolume->scaleValue, &color);
      PhysicsVolume_DebugDrawArrow(&base, &Y_VEC, -10.0 * physicsVolume->scaleValue, &color);
      PhysicsVolume_DebugDrawArrow(&base, &Z_VEC, 10.0 * physicsVolume->scaleValue, &color);
      v62 = -10.0 * physicsVolume->scaleValue;
      p_base = &base;
    }
    else
    {
      v50 = v44;
      v49 = v44;
      if ( v45 == 3.4028235e38 )
        Com_sprintf(dest, 0x100ui64, "Applies %.2f force towards (%.2f, %.2f, %.2f)", v50, v48, v47, v46);
      else
        Com_sprintf(dest, 0x100ui64, "Applies %.2f force towards (%.2f, %.2f, %.2f) up to speed %.2f", v49, v48, v47, v46, v45);
      v51 = (float)(10.0 * physicsVolume->scaleValue) + base.v[0];
      direction.v[1] = base.v[1];
      v52 = -10.0 * physicsVolume->scaleValue;
      direction.v[2] = base.v[2];
      direction.v[0] = v51;
      PhysicsVolume_DebugDrawArrow(&direction, &X_VEC, v52, &color);
      v53 = base.v[0] - (float)(10.0 * physicsVolume->scaleValue);
      direction.v[1] = base.v[1];
      v54 = 10.0 * physicsVolume->scaleValue;
      direction.v[2] = base.v[2];
      direction.v[0] = v53;
      PhysicsVolume_DebugDrawArrow(&direction, &X_VEC, v54, &color);
      v55 = 10.0 * physicsVolume->scaleValue;
      direction.v[0] = base.v[0];
      direction.v[1] = v55 + base.v[1];
      v56 = -10.0 * physicsVolume->scaleValue;
      direction.v[2] = base.v[2];
      PhysicsVolume_DebugDrawArrow(&direction, &Y_VEC, v56, &color);
      v57 = 10.0 * physicsVolume->scaleValue;
      direction.v[0] = base.v[0];
      direction.v[2] = base.v[2];
      v58 = 10.0 * physicsVolume->scaleValue;
      direction.v[1] = base.v[1] - v57;
      PhysicsVolume_DebugDrawArrow(&direction, &Y_VEC, v58, &color);
      direction.v[0] = base.v[0];
      direction.v[2] = (float)(10.0 * physicsVolume->scaleValue) + base.v[2];
      v59 = -10.0 * physicsVolume->scaleValue;
      direction.v[1] = base.v[1];
      PhysicsVolume_DebugDrawArrow(&direction, &Z_VEC, v59, &color);
      v60 = 10.0 * physicsVolume->scaleValue;
      direction.v[0] = base.v[0];
      direction.v[1] = base.v[1];
      v61 = base.v[2] - v60;
      v62 = 10.0 * physicsVolume->scaleValue;
      direction.v[2] = v61;
      p_base = &direction;
    }
    PhysicsVolume_DebugDrawArrow(p_base, &Z_VEC, v62, &color);
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
  }
  else
  {
    if ( (v18 & 0x10) != 0 )
      return;
    Com_sprintf(dest, 0x100ui64, "Has no effect on the game");
    Physics_DrawDebugString(scrPlace, *x, *y, dest, &color, 0, 1, charHeight, 0);
  }
  *y = charHeight + *y;
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
    _XMM0 = active;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm5, xmm1, xmm2, xmm3 }
    _XMM1 = LODWORD(FLOAT_0_2);
    color->v[0] = *(float *)&_XMM5;
    _XMM0 = active;
    __asm
    {
      vpcmpeqd xmm3, xmm0, xmm4
      vblendvps xmm0, xmm1, xmm2, xmm3
    }
    color->v[1] = *(float *)&_XMM0;
    color->v[2] = *(float *)&_XMM0;
    color->v[3] = 1.0;
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

