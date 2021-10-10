/*
==============
PhysicsForceAction_Init
==============
*/

void __fastcall PhysicsForceAction_Init(const Physics_WorldId worldId, const unsigned int numBodies)
{
  ?PhysicsForceAction_Init@@YAXW4Physics_WorldId@@I@Z(worldId, numBodies);
}

/*
==============
PhysicsForceAction_IsInitialized
==============
*/

bool __fastcall PhysicsForceAction_IsInitialized(const Physics_WorldId worldId)
{
  return ?PhysicsForceAction_IsInitialized@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsForceAction_AddForce
==============
*/

void __fastcall PhysicsForceAction_AddForce(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *force, const float maxSpeed)
{
  ?PhysicsForceAction_AddForce@@YAXW4Physics_WorldId@@IAEBTvec3_t@@M@Z(worldId, bodyId, force, maxSpeed);
}

/*
==============
PhysicsForceAction_Write
==============
*/

void __fastcall PhysicsForceAction_Write(MemoryFile *memFile)
{
  ?PhysicsForceAction_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
PhysicsForceAction::PhysicsForceAction
==============
*/

void __fastcall PhysicsForceAction::PhysicsForceAction(PhysicsForceAction *this, Physics_WorldId worldId, unsigned int bodyId)
{
  ??0PhysicsForceAction@@QEAA@W4Physics_WorldId@@I@Z(this, worldId, bodyId);
}

/*
==============
PhysicsForceAction_Shutdown
==============
*/

void __fastcall PhysicsForceAction_Shutdown(const Physics_WorldId worldId)
{
  ?PhysicsForceAction_Shutdown@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsForceAction_Destroy
==============
*/

void __fastcall PhysicsForceAction_Destroy(hknpUnaryAction *action)
{
  ?PhysicsForceAction_Destroy@@YAXPEAVhknpUnaryAction@@@Z(action);
}

/*
==============
PhysicsForceAction::applyAction
==============
*/

hknpAction::Result __fastcall PhysicsForceAction::applyAction(PhysicsForceAction *this, hknpWorld *world, float deltaTime)
{
  return ?applyAction@PhysicsForceAction@@UEAA?AW4Result@hknpAction@@PEAVhknpWorld@@M@Z(this, world, deltaTime);
}

/*
==============
PhysicsForceAction_Load
==============
*/

void __fastcall PhysicsForceAction_Load(SaveGame *save)
{
  ?PhysicsForceAction_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
PhysicsForceAction_ClearCache
==============
*/

void __fastcall PhysicsForceAction_ClearCache(const Physics_WorldId worldId)
{
  ?PhysicsForceAction_ClearCache@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsForceAction_Create
==============
*/

hknpUnaryAction *__fastcall PhysicsForceAction_Create(const Physics_WorldId worldId, const unsigned int bodyId)
{
  return ?PhysicsForceAction_Create@@YAPEAVhknpUnaryAction@@W4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsForceAction::~PhysicsForceAction
==============
*/

void __fastcall PhysicsForceAction::~PhysicsForceAction(PhysicsForceAction *this)
{
  ??1PhysicsForceAction@@UEAA@XZ(this);
}

/*
==============
PhysicsForceAction_Get
==============
*/

hknpUnaryAction *__fastcall PhysicsForceAction_Get(const Physics_WorldId worldId, const unsigned int bodyId)
{
  return ?PhysicsForceAction_Get@@YAPEAVhknpUnaryAction@@W4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
PhysicsForceAction::operator delete
==============
*/

void __fastcall PhysicsForceAction::operator delete(void *p, unsigned __int64 nbytes)
{
  ??3PhysicsForceAction@@SAXPEAX_K@Z(p, nbytes);
}

/*
==============
PhysicsForceAction::PhysicsForceAction
==============
*/
void PhysicsForceAction::PhysicsForceAction(PhysicsForceAction *this, Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v4; 
  PhysicsForceAction **v5; 
  bool *v6; 

  this->m_propertyBag.m_bag = NULL;
  *(_DWORD *)&this->m_memSizeAndFlags = 0x1FFFF;
  this->m_userData = 0i64;
  this->m_bodyId.m_serialAndIndex = bodyId;
  this->__vftable = (PhysicsForceAction_vtbl *)&PhysicsForceAction::`vftable';
  this->m_worldId = worldId;
  v4 = bodyId & 0xFFFFFF;
  if ( (unsigned int)v4 > s_physicsForceActionBodyCounts[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 61, ASSERT_TYPE_ASSERT, "( bodyIdx ) <= ( s_physicsForceActionBodyCounts[m_worldId] )", "bodyIdx not in [0, s_physicsForceActionBodyCounts[m_worldId]]\n\t%u not in [0, %u]", v4, s_physicsForceActionBodyCounts[worldId]) )
    __debugbreak();
  v5 = s_physicsForceActionBodyActions[this->m_worldId];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 64, ASSERT_TYPE_ASSERT, "( actions ) != ( nullptr )", "%s != %s\n\t%p, %p", "actions", "nullptr", NULL, NULL) )
    __debugbreak();
  v6 = s_physicsForceActionBodyEntryValids[this->m_worldId];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 66, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  v5[v4] = this;
  v6[v4] = 0;
}

/*
==============
PhysicsForceAction::~PhysicsForceAction
==============
*/
void PhysicsForceAction::~PhysicsForceAction(PhysicsForceAction *this)
{
  __int64 v2; 
  unsigned int v3; 
  PhysicsForceAction **v4; 
  bool *v5; 

  this->__vftable = (PhysicsForceAction_vtbl *)&PhysicsForceAction::`vftable';
  v2 = this->m_bodyId.m_serialAndIndex & 0xFFFFFF;
  v3 = s_physicsForceActionBodyCounts[this->m_worldId];
  if ( (unsigned int)v2 > v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 79, ASSERT_TYPE_ASSERT, "( bodyIdx ) <= ( s_physicsForceActionBodyCounts[m_worldId] )", "bodyIdx not in [0, s_physicsForceActionBodyCounts[m_worldId]]\n\t%u not in [0, %u]", v2, v3) )
    __debugbreak();
  v4 = s_physicsForceActionBodyActions[this->m_worldId];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 82, ASSERT_TYPE_ASSERT, "( actions ) != ( nullptr )", "%s != %s\n\t%p, %p", "actions", "nullptr", NULL, NULL) )
    __debugbreak();
  v5 = s_physicsForceActionBodyEntryValids[this->m_worldId];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 84, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  v4[v2] = NULL;
  v5[v2] = 0;
  this->__vftable = (PhysicsForceAction_vtbl *)hknpAction::`vftable';
  hkReferencedObject::~hkReferencedObject(this);
}

/*
==============
PhysicsForceAction::operator delete
==============
*/
void PhysicsForceAction::operator delete(void *p, unsigned __int64 nbytes)
{
  int v2; 
  hkMemoryRouter *Value; 

  if ( p )
  {
    v2 = nbytes;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    if ( *((_WORD *)p + 8) != 0xFFFF )
      v2 = *((unsigned __int16 *)p + 8);
    Value->m_heap->blockFree(Value->m_heap, p, v2);
  }
}

/*
==============
PhysicsForceAction_AddForce
==============
*/
void PhysicsForceAction_AddForce(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *force, const float maxSpeed)
{
  __int64 v4; 
  __int64 v5; 
  vec3_t *v7; 
  float *v8; 
  bool *v9; 
  __int64 v10; 
  __int64 v11; 

  v4 = worldId;
  v5 = bodyId & 0xFFFFFF;
  if ( (unsigned int)v5 >= s_physicsForceActionBodyCounts[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( s_physicsForceActionBodyCounts[worldId] )", "bodyIdx doesn't index s_physicsForceActionBodyCounts[worldId]\n\t%i not in [0, %i)", bodyId & 0xFFFFFF, s_physicsForceActionBodyCounts[worldId]) )
    __debugbreak();
  v7 = s_physicsForceActionBodyForces[v4];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 304, ASSERT_TYPE_ASSERT, "( forces ) != ( nullptr )", "%s != %s\n\t%p, %p", "forces", "nullptr", NULL, NULL) )
    __debugbreak();
  v8 = s_physicsForceActionBodyMaxSpeeds[v4];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 307, ASSERT_TYPE_ASSERT, "( maxSpeeds ) != ( nullptr )", "%s != %s\n\t%p, %p", "maxSpeeds", "nullptr", NULL, NULL) )
    __debugbreak();
  v9 = s_physicsForceActionBodyEntryValids[v4];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 310, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !v9[v5] )
  {
    v10 = v5;
    *(_QWORD *)v7[v10].v = 0i64;
    v7[v10].v[2] = 0.0;
    v8[v5] = 3.4028235e38;
    v9[v5] = 1;
  }
  v11 = v5;
  v7[v11].v[0] = v7[v5].v[0] + force->v[0];
  v7[v11].v[1] = v7[v5].v[1] + force->v[1];
  v7[v11].v[2] = v7[v5].v[2] + force->v[2];
  _XMM0 = LODWORD(v8[v5]);
  __asm { vminss  xmm1, xmm0, xmm6 }
  v8[v5] = *(float *)&_XMM1;
}

/*
==============
PhysicsForceAction_ClearCache
==============
*/
void PhysicsForceAction_ClearCache(const Physics_WorldId worldId)
{
  __int64 v1; 
  bool *v2; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 286, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  v2 = s_physicsForceActionBodyEntryValids[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 289, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  memset_0(v2, 0, s_physicsForceActionBodyCounts[v1]);
}

/*
==============
PhysicsForceAction_Create
==============
*/
hknpUnaryAction *PhysicsForceAction_Create(const Physics_WorldId worldId, const unsigned int bodyId)
{
  __int64 v3; 
  __int64 v4; 
  hkMemoryRouter *Value; 
  __int64 v6; 
  __int64 v7; 
  PhysicsForceAction **v8; 
  bool *v9; 
  __int64 v11; 
  __int64 v12; 

  v3 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 237, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  v4 = bodyId & 0xFFFFFF;
  if ( (_DWORD)v4 == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 238, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v6 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 48i64);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 0i64;
    *(_DWORD *)(v6 + 16) = 0x1FFFF;
    *(_QWORD *)(v6 + 24) = 0i64;
    *(_DWORD *)(v6 + 32) = bodyId;
    *(_QWORD *)v6 = &PhysicsForceAction::`vftable';
    *(_DWORD *)(v6 + 40) = v3;
    if ( (unsigned int)v4 > s_physicsForceActionBodyCounts[v3] )
    {
      LODWORD(v12) = s_physicsForceActionBodyCounts[v3];
      LODWORD(v11) = bodyId & 0xFFFFFF;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 61, ASSERT_TYPE_ASSERT, "( bodyIdx ) <= ( s_physicsForceActionBodyCounts[m_worldId] )", "bodyIdx not in [0, s_physicsForceActionBodyCounts[m_worldId]]\n\t%u not in [0, %u]", v11, v12) )
        __debugbreak();
    }
    v8 = s_physicsForceActionBodyActions[*(int *)(v7 + 40)];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 64, ASSERT_TYPE_ASSERT, "( actions ) != ( nullptr )", "%s != %s\n\t%p, %p", "actions", "nullptr", NULL, NULL) )
      __debugbreak();
    v9 = s_physicsForceActionBodyEntryValids[*(int *)(v7 + 40)];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 66, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
      __debugbreak();
    v8[v4] = (PhysicsForceAction *)v7;
    v9[v4] = 0;
  }
  else
  {
    v7 = 0i64;
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 242, ASSERT_TYPE_ASSERT, "( action ) != ( nullptr )", "%s != %s\n\t%p, %p", "action", "nullptr", NULL, NULL) )
    __debugbreak();
  return (hknpUnaryAction *)v7;
}

/*
==============
PhysicsForceAction_Destroy
==============
*/
void PhysicsForceAction_Destroy(hknpUnaryAction *action)
{
  unsigned __int16 m_refCount; 
  signed __int32 v3[8]; 

  if ( !action && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 253, ASSERT_TYPE_ASSERT, "( action ) != ( nullptr )", "%s != %s\n\t%p, %p", "action", "nullptr", NULL, NULL) )
    __debugbreak();
  _InterlockedOr(v3, 0);
  m_refCount = action->m_refCount;
  _InterlockedOr(v3, 0);
  if ( m_refCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 256, ASSERT_TYPE_ASSERT, "(action->getReferenceCount() == 1)", (const char *)&queryFormat, "action->getReferenceCount() == 1") )
    __debugbreak();
  hkReferencedObject::removeReference(action);
}

/*
==============
PhysicsForceAction_Get
==============
*/
PhysicsForceAction *PhysicsForceAction_Get(const Physics_WorldId worldId, const unsigned int bodyId)
{
  __int64 v2; 
  __int64 v4; 
  PhysicsForceAction **v5; 
  __int64 v7; 
  __int64 v8; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 265, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  v4 = bodyId & 0xFFFFFF;
  if ( (_DWORD)v4 == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 266, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( (unsigned int)v4 >= s_physicsForceActionBodyCounts[v2] )
  {
    LODWORD(v8) = s_physicsForceActionBodyCounts[v2];
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 270, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( s_physicsForceActionBodyCounts[worldId] )", "bodyIdx doesn't index s_physicsForceActionBodyCounts[worldId]\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = s_physicsForceActionBodyActions[v2];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 273, ASSERT_TYPE_ASSERT, "( actions ) != ( nullptr )", "%s != %s\n\t%p, %p", "actions", "nullptr", NULL, NULL) )
    __debugbreak();
  return v5[v4];
}

/*
==============
PhysicsForceAction_Init
==============
*/
void PhysicsForceAction_Init(const Physics_WorldId worldId, const unsigned int numBodies)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  char *v11; 
  char *v12; 
  PhysicsForceAction **v13; 
  PhysicsForceAction **v14; 
  vec3_t *v15; 
  char *v16; 
  float *v17; 
  char *v18; 
  bool *v19; 
  char *v20; 
  __int64 v21; 

  v2 = worldId;
  v3 = numBodies;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 148, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  if ( !(_DWORD)v3 )
  {
    LODWORD(v21) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 149, ASSERT_TYPE_ASSERT, "( numBodies ) > ( 0 )", "%s > %s\n\t%u, %u", "numBodies", "0", v21, 0i64) )
      __debugbreak();
  }
  v4 = v2;
  v5 = (8 * v3 + 15) & 0xFFFFFFF0i64;
  s_physicsForceActionBodyCounts[v2] = v3;
  v6 = (v5 + 12 * v3 + 15) & 0xFFFFFFF0i64;
  v7 = (v6 + 4 * v3 + 15) & 0xFFFFFFF0i64;
  v8 = v3 + v7 + 15;
  v9 = v4;
  v10 = v8 & 0xFFFFFFF0;
  v11 = s_physicsForceActionAllocations[v4];
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 174, ASSERT_TYPE_ASSERT, "( s_physicsForceActionAllocations[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsForceActionAllocations[worldId]", "nullptr", v11, NULL) )
    __debugbreak();
  v12 = (char *)Mem_Virtual_Alloc(v10, "PhysicsForceAction", TRACK_MISC);
  s_physicsForceActionAllocations[v9] = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 176, ASSERT_TYPE_ASSERT, "( s_physicsForceActionAllocations[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionAllocations[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  memset_0(s_physicsForceActionAllocations[v9], 0, v10);
  v13 = s_physicsForceActionBodyActions[v9];
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 180, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyActions[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsForceActionBodyActions[worldId]", "nullptr", v13, NULL) )
    __debugbreak();
  v14 = (PhysicsForceAction **)s_physicsForceActionAllocations[v9];
  s_physicsForceActionBodyActions[v9] = v14;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 182, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyActions[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyActions[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  v15 = s_physicsForceActionBodyForces[v9];
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 184, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyForces[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsForceActionBodyForces[worldId]", "nullptr", v15, NULL) )
    __debugbreak();
  v16 = s_physicsForceActionAllocations[v9];
  s_physicsForceActionBodyForces[v9] = (vec3_t *)&v16[v5];
  if ( !&v16[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 186, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyForces[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyForces[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  v17 = s_physicsForceActionBodyMaxSpeeds[v9];
  if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 188, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyMaxSpeeds[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsForceActionBodyMaxSpeeds[worldId]", "nullptr", v17, NULL) )
    __debugbreak();
  v18 = s_physicsForceActionAllocations[v9];
  s_physicsForceActionBodyMaxSpeeds[v9] = (float *)&v18[v6];
  if ( !&v18[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 190, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyMaxSpeeds[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyMaxSpeeds[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  v19 = s_physicsForceActionBodyEntryValids[v9];
  if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 192, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyEntryValids[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsForceActionBodyEntryValids[worldId]", "nullptr", v19, NULL) )
    __debugbreak();
  v20 = s_physicsForceActionAllocations[v9];
  s_physicsForceActionBodyEntryValids[v9] = (bool *)&v20[v7];
  if ( !&v20[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 194, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyEntryValids[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyEntryValids[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
}

/*
==============
PhysicsForceAction_IsInitialized
==============
*/
bool PhysicsForceAction_IsInitialized(const Physics_WorldId worldId)
{
  __int64 v1; 
  int v4; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 229, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, v4) )
      __debugbreak();
  }
  return s_physicsForceActionBodyCounts[v1] != 0;
}

/*
==============
PhysicsForceAction_Load
==============
*/
void PhysicsForceAction_Load(SaveGame *save)
{
  int v1; 
  hkDefaultPropertyBag *m_bag; 
  __int64 v3; 
  MemoryFile *p_memFile; 
  unsigned __int64 v5; 
  void *v6; 
  hknpWorld *World; 
  unsigned __int64 v8; 
  hknpActionManager *ActionManager; 
  unsigned __int64 m_userData; 
  hknpAction action; 
  char v12; 
  unsigned int p; 
  unsigned int bodyId; 

  v1 = 0;
  m_bag = (hkDefaultPropertyBag *)s_physicsForceActionBodyCounts;
  v3 = 0i64;
  action.m_propertyBag.m_bag = (hkDefaultPropertyBag *)s_physicsForceActionBodyCounts;
  *(_QWORD *)&action.m_memSizeAndFlags = 0i64;
  p_memFile = &save->memFile;
  do
  {
    MemFile_ReadData(p_memFile, 4ui64, &p);
    v5 = p;
    LODWORD(m_bag->m_propertyMap.m_items.m_data) = p;
    if ( (_DWORD)v5 )
    {
      v6 = *(PhysicsForceAction ***)((char *)s_physicsForceActionBodyActions + v3);
      action.m_userData = v5;
      memset_0(v6, 0, 8 * v5);
      World = HavokPhysics_GetWorld((Physics_WorldId)v1);
      if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 373, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world") )
        __debugbreak();
      v8 = v5;
      do
      {
        MemFile_ReadData(p_memFile, 1ui64, &v12);
        if ( v12 )
        {
          MemFile_ReadData(p_memFile, 4ui64, &bodyId);
          if ( !PhysicsForceAction_Create((const Physics_WorldId)v1, bodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 382, ASSERT_TYPE_ASSERT, "( action ) != ( nullptr )", "%s != %s\n\t%p, %p", "action", "nullptr", NULL, NULL) )
            __debugbreak();
          ActionManager = hknpWorld::getActionManager(World);
          hknpActionManager::addAction(ActionManager, &action);
        }
        --v8;
      }
      while ( v8 );
      v3 = *(_QWORD *)&action.m_memSizeAndFlags;
      m_bag = action.m_propertyBag.m_bag;
      m_userData = action.m_userData;
      MemFile_ReadData(p_memFile, 12 * action.m_userData, *(vec3_t **)((char *)s_physicsForceActionBodyForces + *(_QWORD *)&action.m_memSizeAndFlags));
      MemFile_ReadData(p_memFile, 4 * m_userData, *(float **)((char *)s_physicsForceActionBodyMaxSpeeds + v3));
      MemFile_ReadData(p_memFile, m_userData, *(bool **)((char *)s_physicsForceActionBodyEntryValids + v3));
    }
    m_bag = (hkDefaultPropertyBag *)((char *)m_bag + 4);
    v3 += 8i64;
    ++v1;
    action.m_propertyBag.m_bag = m_bag;
    *(_QWORD *)&action.m_memSizeAndFlags = v3;
  }
  while ( v1 <= 1 );
}

/*
==============
PhysicsForceAction_Shutdown
==============
*/
void PhysicsForceAction_Shutdown(const Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 201, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  if ( !s_physicsForceActionBodyActions[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 204, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyActions[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyActions[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  s_physicsForceActionBodyActions[v1] = NULL;
  if ( !s_physicsForceActionBodyForces[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 207, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyForces[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyForces[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  s_physicsForceActionBodyForces[v1] = NULL;
  if ( !s_physicsForceActionBodyMaxSpeeds[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 210, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyMaxSpeeds[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyMaxSpeeds[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  s_physicsForceActionBodyMaxSpeeds[v1] = NULL;
  if ( !s_physicsForceActionBodyEntryValids[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 213, ASSERT_TYPE_ASSERT, "( s_physicsForceActionBodyEntryValids[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionBodyEntryValids[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  s_physicsForceActionBodyEntryValids[v1] = NULL;
  if ( !s_physicsForceActionAllocations[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 217, ASSERT_TYPE_ASSERT, "( s_physicsForceActionAllocations[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsForceActionAllocations[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  Mem_Virtual_Free(s_physicsForceActionAllocations[v1]);
  s_physicsForceActionAllocations[v1] = NULL;
  s_physicsForceActionBodyCounts[v1] = 0;
}

/*
==============
PhysicsForceAction_Write
==============
*/
void PhysicsForceAction_Write(MemoryFile *memFile)
{
  int *v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  PhysicsForceAction *v8; 
  unsigned int p; 

  v2 = (int *)s_physicsForceActionBodyCounts;
  v3 = 0i64;
  do
  {
    p = *v2;
    v4 = p;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( v4 )
    {
      v5 = 0i64;
      v6 = v4;
      v7 = v4;
      do
      {
        v8 = s_physicsForceActionBodyActions[v3][v5];
        LOBYTE(p) = v8 != NULL;
        MemFile_WriteData(memFile, 1ui64, &p);
        if ( v8 )
        {
          p = v8->m_bodyId.m_serialAndIndex;
          MemFile_WriteData(memFile, 4ui64, &p);
        }
        ++v5;
        --v7;
      }
      while ( v7 );
      MemFile_WriteData(memFile, 12 * v6, s_physicsForceActionBodyForces[v3]);
      MemFile_WriteData(memFile, 4 * v6, s_physicsForceActionBodyMaxSpeeds[v3]);
      MemFile_WriteData(memFile, v6, s_physicsForceActionBodyEntryValids[v3]);
    }
    ++v2;
    ++v3;
  }
  while ( (__int64)v2 <= (__int64)&s_physicsForceActionBodyCounts[1] );
}

/*
==============
PhysicsForceAction::applyAction
==============
*/

__int64 __fastcall PhysicsForceAction::applyAction(PhysicsForceAction *this, hknpWorld *world, double deltaTime)
{
  __int128 v3; 
  __int64 v5; 
  unsigned int v7; 
  bool *v8; 
  vec3_t *v9; 
  __int64 m_serialAndIndex; 
  hknpWorldWriter_vtbl *v11; 
  __int128 v13; 
  float *v17; 
  __int128 v18; 
  Physics_WorldId m_worldId; 
  unsigned int v20; 
  __int128 v21; 
  hknpWorld *v22; 
  __int64 v23; 
  __int64 v24; 
  Physics_WorldId v25; 
  unsigned int v26; 
  hknpWorld *v34; 
  __int64 v36; 
  __m128 v37; 
  __int128 v38[3]; 

  v5 = this->m_bodyId.m_serialAndIndex & 0xFFFFFF;
  v7 = s_physicsForceActionBodyCounts[this->m_worldId];
  if ( (unsigned int)v5 > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 98, ASSERT_TYPE_ASSERT, "( bodyIdx ) <= ( s_physicsForceActionBodyCounts[m_worldId] )", "bodyIdx not in [0, s_physicsForceActionBodyCounts[m_worldId]]\n\t%u not in [0, %u]", v5, v7) )
    __debugbreak();
  v8 = s_physicsForceActionBodyEntryValids[this->m_worldId];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 101, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !v8[v5] )
    return 0i64;
  v9 = s_physicsForceActionBodyForces[this->m_worldId];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 106, ASSERT_TYPE_ASSERT, "( forces ) != ( nullptr )", "%s != %s\n\t%p, %p", "forces", "nullptr", NULL, NULL) )
    __debugbreak();
  m_serialAndIndex = this->m_bodyId.m_serialAndIndex;
  v11 = world->hknpWorldWriter::__vftable;
  v13 = LODWORD(v9[v5].v[0]);
  *(float *)&v13 = v9[v5].v[0] * 0.03125;
  _XMM5 = v13;
  __asm
  {
    vinsertps xmm5, xmm5, xmm2, 10h
    vinsertps xmm5, xmm5, xmm3, 20h ; ' '
    vinsertps xmm5, xmm5, xmm0, 30h ; '0'
  }
  v37 = _mm128_mul_ps(_mm_shuffle_ps(*(__m128 *)&deltaTime, *(__m128 *)&deltaTime, 0), _XMM5);
  ((void (__fastcall *)(hknpWorldWriter *, __int64, __m128 *, _QWORD))v11->applyBodyLinearImpulse)(&world->hknpWorldWriter, m_serialAndIndex, &v37, 0i64);
  v17 = s_physicsForceActionBodyMaxSpeeds[this->m_worldId];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 121, ASSERT_TYPE_ASSERT, "( maxSpeeds ) != ( nullptr )", "%s != %s\n\t%p, %p", "maxSpeeds", "nullptr", NULL, NULL) )
    __debugbreak();
  v18 = LODWORD(v17[v5]);
  if ( *(float *)&v18 != 3.4028235e38 )
  {
    m_worldId = this->m_worldId;
    v20 = this->m_bodyId.m_serialAndIndex;
    v38[2] = v3;
    v21 = v18;
    *(float *)&v21 = *(float *)&v18 * 0.03125;
    if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      LODWORD(v36) = m_worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v36) )
        __debugbreak();
    }
    if ( (v20 & 0xFFFFFF) == 0xFFFFFF )
    {
      LODWORD(v36) = m_worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v36) )
        __debugbreak();
    }
    v22 = HavokPhysics_GetConstWorld(m_worldId)->world;
    if ( !v22 )
    {
      LODWORD(v36) = m_worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v36) )
        __debugbreak();
    }
    v23 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v22->getBody)(&v22->hknpWorldReader, v20);
    v24 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v22->getMotion)(&v22->hknpWorldReader, *(unsigned int *)(v23 + 64));
    v25 = this->m_worldId;
    v26 = this->m_bodyId.m_serialAndIndex;
    _XMM7 = *(__m128 *)(v24 + 64);
    __asm
    {
      vdpps   xmm6, xmm7, xmm7, 7Fh
      vcmpleps xmm5, xmm6, xmm0
      vrsqrtps xmm4, xmm6
    }
    _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM6, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM6);
    __asm { vandnps xmm4, xmm5, xmm0 }
    *(float *)&v21 = *(float *)&v21 / *(float *)&_XMM4;
    _XMM1 = v21;
    __asm { vminss  xmm0, xmm1, cs:__real@3f800000 }
    v38[0] = (__int128)_mm128_mul_ps(_mm_shuffle_ps(_XMM0, _XMM0, 0), _XMM7);
    if ( (unsigned int)v25 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      LODWORD(v36) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 455, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v36) )
        __debugbreak();
    }
    if ( (v26 & 0xFFFFFF) == 0xFFFFFF )
    {
      LODWORD(v36) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 456, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v36) )
        __debugbreak();
    }
    v34 = HavokPhysics_GetMutableWorld(v25)->world;
    if ( !v34 )
    {
      LODWORD(v36) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 460, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinVel %i: world is NULL", "world", v36) )
        __debugbreak();
    }
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int128 *, _QWORD))v34->setBodyLinearVelocity)(&v34->hknpWorldWriter, v26, v38, 0i64);
  }
  return 0i64;
}

