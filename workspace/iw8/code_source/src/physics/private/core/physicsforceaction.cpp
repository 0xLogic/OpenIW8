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

void __fastcall PhysicsForceAction_AddForce(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *force, double maxSpeed)
{
  __int64 v5; 
  bool *v10; 
  __int64 v11; 

  v5 = worldId;
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RSI = bodyId & 0xFFFFFF;
  __asm { vmovaps xmm6, xmm3 }
  if ( (unsigned int)_RSI >= s_physicsForceActionBodyCounts[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( s_physicsForceActionBodyCounts[worldId] )", "bodyIdx doesn't index s_physicsForceActionBodyCounts[worldId]\n\t%i not in [0, %i)", bodyId & 0xFFFFFF, s_physicsForceActionBodyCounts[worldId]) )
    __debugbreak();
  _RBX = s_physicsForceActionBodyForces[v5];
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 304, ASSERT_TYPE_ASSERT, "( forces ) != ( nullptr )", "%s != %s\n\t%p, %p", "forces", "nullptr", NULL, NULL) )
    __debugbreak();
  _R14 = s_physicsForceActionBodyMaxSpeeds[v5];
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 307, ASSERT_TYPE_ASSERT, "( maxSpeeds ) != ( nullptr )", "%s != %s\n\t%p, %p", "maxSpeeds", "nullptr", NULL, NULL) )
    __debugbreak();
  v10 = s_physicsForceActionBodyEntryValids[v5];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 310, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !v10[_RSI] )
  {
    v11 = _RSI;
    *(_QWORD *)_RBX[v11].v = 0i64;
    _RBX[v11].v[2] = 0.0;
    _R14[_RSI] = 3.4028235e38;
    v10[_RSI] = 1;
  }
  _RAX = 3 * _RSI;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rax*4]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rbx+rax*4], xmm1
    vmovss  xmm2, dword ptr [rbx+rax*4+4]
    vaddss  xmm0, xmm2, dword ptr [rbp+4]
    vmovss  dword ptr [rbx+rax*4+4], xmm0
    vmovss  xmm1, dword ptr [rbx+rax*4+8]
    vaddss  xmm2, xmm1, dword ptr [rbp+8]
    vmovss  dword ptr [rbx+rax*4+8], xmm2
    vmovss  xmm0, dword ptr [r14+rsi*4]
    vminss  xmm1, xmm0, xmm6
    vmovaps xmm6, [rsp+88h+var_38]
    vmovss  dword ptr [r14+rsi*4], xmm1
  }
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
  unsigned int v10; 
  bool *v11; 
  __int64 m_worldId; 
  __int64 m_serialAndIndex; 
  hknpWorldWriter_vtbl *v20; 
  bool v31; 
  bool v32; 
  Physics_WorldId v34; 
  unsigned int v35; 
  hknpWorld *v37; 
  __int64 v38; 
  Physics_WorldId v40; 
  unsigned int v41; 
  hknpWorld *v61; 
  __int64 result; 
  __int64 v65; 
  __int128 v66; 
  __int128 v67; 

  __asm { vmovaps [rsp+0E8h+var_58], xmm7 }
  _RBX = this->m_bodyId.m_serialAndIndex & 0xFFFFFF;
  __asm { vmovaps xmm7, xmm2 }
  v10 = s_physicsForceActionBodyCounts[this->m_worldId];
  if ( (unsigned int)_RBX > v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 98, ASSERT_TYPE_ASSERT, "( bodyIdx ) <= ( s_physicsForceActionBodyCounts[m_worldId] )", "bodyIdx not in [0, s_physicsForceActionBodyCounts[m_worldId]]\n\t%u not in [0, %u]", _RBX, v10) )
    __debugbreak();
  v11 = s_physicsForceActionBodyEntryValids[this->m_worldId];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 101, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( v11[_RBX] )
  {
    m_worldId = this->m_worldId;
    __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
    _RDI = s_physicsForceActionBodyForces[m_worldId];
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 106, ASSERT_TYPE_ASSERT, "( forces ) != ( nullptr )", "%s != %s\n\t%p, %p", "forces", "nullptr", NULL, NULL) )
      __debugbreak();
    __asm { vmovss  xmm6, cs:__real@3d000000 }
    m_serialAndIndex = this->m_bodyId.m_serialAndIndex;
    _RAX = 3 * _RBX;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rax*4]
      vmulss  xmm2, xmm6, dword ptr [rdi+rax*4+4]
      vmulss  xmm3, xmm6, dword ptr [rdi+rax*4+8]
    }
    v20 = world->hknpWorldWriter::__vftable;
    __asm
    {
      vmulss  xmm5, xmm0, xmm6
      vinsertps xmm5, xmm5, xmm2, 10h
      vxorps  xmm0, xmm0, xmm0
      vinsertps xmm5, xmm5, xmm3, 20h ; ' '
      vinsertps xmm5, xmm5, xmm0, 30h ; '0'
      vmovaps xmm4, xmm7
      vshufps xmm4, xmm4, xmm4, 0
      vmulps  xmm0, xmm4, xmm5
      vmovups [rsp+0E8h+var_98], xmm5
      vmovups [rsp+0E8h+var_98], xmm0
    }
    ((void (__fastcall *)(hknpWorldWriter *, __int64, __int128 *, _QWORD))v20->applyBodyLinearImpulse)(&world->hknpWorldWriter, m_serialAndIndex, &v66, 0i64);
    _RDI = s_physicsForceActionBodyMaxSpeeds[this->m_worldId];
    v31 = _RDI == NULL;
    if ( !_RDI )
    {
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsforceaction.cpp", 121, ASSERT_TYPE_ASSERT, "( maxSpeeds ) != ( nullptr )", "%s != %s\n\t%p, %p", "maxSpeeds", "nullptr", NULL, NULL);
      v31 = !v32;
      if ( v32 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rbx*4]
      vucomiss xmm0, cs:__real@7f7fffff
    }
    if ( !v31 )
    {
      v34 = this->m_worldId;
      v35 = this->m_bodyId.m_serialAndIndex;
      __asm
      {
        vmovaps [rsp+0E8h+var_68], xmm8
        vmulss  xmm8, xmm0, xmm6
      }
      if ( (unsigned int)v34 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v65) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
          __debugbreak();
      }
      if ( (v35 & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v65) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v65) )
          __debugbreak();
      }
      v37 = HavokPhysics_GetConstWorld(v34)->world;
      if ( !v37 )
      {
        LODWORD(v65) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v65) )
          __debugbreak();
      }
      v38 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v37->getBody)(&v37->hknpWorldReader, v35);
      _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v37->getMotion)(&v37->hknpWorldReader, *(unsigned int *)(v38 + 64));
      v40 = this->m_worldId;
      v41 = this->m_bodyId.m_serialAndIndex;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmm7, xmmword ptr [rax+40h]
        vdpps   xmm6, xmm7, xmm7, 7Fh
        vcmpleps xmm5, xmm6, xmm0
        vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
        vrsqrtps xmm4, xmm6
        vmulps  xmm1, xmm6, xmm4
        vmulps  xmm2, xmm1, xmm4
        vmulps  xmm1, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
        vsubps  xmm3, xmm0, xmm2
        vmulps  xmm2, xmm3, xmm1
        vmulps  xmm0, xmm2, xmm6
        vandnps xmm4, xmm5, xmm0
        vdivss  xmm1, xmm8, xmm4
        vmovaps xmm8, [rsp+0E8h+var_68]
        vminss  xmm0, xmm1, cs:__real@3f800000
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm0, xmm0, xmm7
        vmovups [rsp+0E8h+var_88], xmm6
        vmovups [rsp+0E8h+var_88], xmm0
      }
      if ( (unsigned int)v40 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v65) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 455, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
          __debugbreak();
      }
      if ( (v41 & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v65) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 456, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v65) )
          __debugbreak();
      }
      v61 = HavokPhysics_GetMutableWorld(v40)->world;
      if ( !v61 )
      {
        LODWORD(v65) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 460, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinVel %i: world is NULL", "world", v65) )
          __debugbreak();
      }
      ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int128 *, _QWORD))v61->setBodyLinearVelocity)(&v61->hknpWorldWriter, v41, &v67, 0i64);
    }
    __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
    result = 0i64;
  }
  else
  {
    result = 0i64;
  }
  __asm { vmovaps xmm7, [rsp+0E8h+var_58] }
  return result;
}

