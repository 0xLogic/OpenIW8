/*
==============
PhysicsGravityModifier::getEnabledFunctions
==============
*/

int __fastcall PhysicsGravityModifier::getEnabledFunctions(PhysicsGravityModifier *this)
{
  return ?getEnabledFunctions@PhysicsGravityModifier@@UEAAHXZ(this);
}

/*
==============
PhysicsGravityModifier_Load
==============
*/

void __fastcall PhysicsGravityModifier_Load(SaveGame *save)
{
  ?PhysicsGravityModifier_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
PhysicsGravityModifier_SetGravityScalar
==============
*/

void __fastcall PhysicsGravityModifier_SetGravityScalar(const Physics_WorldId worldId, const unsigned int motionId, const float scalar)
{
  ?PhysicsGravityModifier_SetGravityScalar@@YAXW4Physics_WorldId@@IM@Z(worldId, motionId, scalar);
}

/*
==============
PhysicsGravityModifier_SetGravity
==============
*/

void __fastcall PhysicsGravityModifier_SetGravity(const Physics_WorldId worldId, const unsigned int motionId, const vec3_t *gravity)
{
  ?PhysicsGravityModifier_SetGravity@@YAXW4Physics_WorldId@@IAEBTvec3_t@@@Z(worldId, motionId, gravity);
}

/*
==============
PhysicsGravityModifier_ClearCache
==============
*/

void __fastcall PhysicsGravityModifier_ClearCache(const Physics_WorldId worldId)
{
  ?PhysicsGravityModifier_ClearCache@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsGravityModifier_Write
==============
*/

void __fastcall PhysicsGravityModifier_Write(MemoryFile *memFile)
{
  ?PhysicsGravityModifier_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
PhysicsGravityModifier_Destroy
==============
*/

void __fastcall PhysicsGravityModifier_Destroy(hknpModifier *modifier)
{
  ?PhysicsGravityModifier_Destroy@@YAXPEAVhknpModifier@@@Z(modifier);
}

/*
==============
PhysicsGravityModifier::PhysicsGravityModifier
==============
*/

void __fastcall PhysicsGravityModifier::PhysicsGravityModifier(PhysicsGravityModifier *this, Physics_WorldId worldId)
{
  ??0PhysicsGravityModifier@@QEAA@W4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
PhysicsGravityModifier_IsInitialized
==============
*/

bool __fastcall PhysicsGravityModifier_IsInitialized(const Physics_WorldId worldId)
{
  return ?PhysicsGravityModifier_IsInitialized@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsGravityModifier_Create
==============
*/

hknpModifier *__fastcall PhysicsGravityModifier_Create(const Physics_WorldId worldId)
{
  return ?PhysicsGravityModifier_Create@@YAPEAVhknpModifier@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsGravityModifier::modifyMotionGravity
==============
*/

void __fastcall PhysicsGravityModifier::modifyMotionGravity(PhysicsGravityModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hkVector4f *gravity)
{
  ?modifyMotionGravity@PhysicsGravityModifier@@UEAAXAEBVhknpSimulationThreadContext@@UhknpMotionId@@AEAVhkVector4f@@@Z(this, tl, motionId, gravity);
}

/*
==============
PhysicsGravityModifier_Init
==============
*/

void __fastcall PhysicsGravityModifier_Init(const Physics_WorldId worldId, const unsigned int numMotions)
{
  ?PhysicsGravityModifier_Init@@YAXW4Physics_WorldId@@I@Z(worldId, numMotions);
}

/*
==============
PhysicsGravityModifier_Shutdown
==============
*/

void __fastcall PhysicsGravityModifier_Shutdown(const Physics_WorldId worldId)
{
  ?PhysicsGravityModifier_Shutdown@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsGravityModifier::PhysicsGravityModifier
==============
*/
void PhysicsGravityModifier::PhysicsGravityModifier(PhysicsGravityModifier *this, Physics_WorldId worldId)
{
  this->m_worldId = worldId;
  this->__vftable = (PhysicsGravityModifier_vtbl *)&PhysicsGravityModifier::`vftable';
}

/*
==============
PhysicsGravityModifier_ClearCache
==============
*/
void PhysicsGravityModifier_ClearCache(const Physics_WorldId worldId)
{
  __int64 v1; 
  bool *v2; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 209, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  v2 = s_physicsGravityModifierMotionEntryValids[v1];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 212, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  memset_0(v2, 0, s_physicsGravityModifierMotionCounts[v1]);
}

/*
==============
PhysicsGravityModifier_Create
==============
*/
hknpModifier *PhysicsGravityModifier_Create(const Physics_WorldId worldId)
{
  hkMemoryRouter *Value; 
  hknpModifier *result; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 183, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  result = (hknpModifier *)Value->m_heap->blockAlloc(Value->m_heap, 16i64);
  if ( result )
  {
    LODWORD(result[1].__vftable) = worldId;
    result->__vftable = (hknpModifier_vtbl *)&PhysicsGravityModifier::`vftable';
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 187, ASSERT_TYPE_ASSERT, "( modifier ) != ( nullptr )", "%s != %s\n\t%p, %p", "modifier", "nullptr", NULL, NULL) )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
PhysicsGravityModifier_Destroy
==============
*/
void PhysicsGravityModifier_Destroy(hknpModifier *modifier)
{
  if ( modifier )
  {
    ((void (__fastcall *)(hknpModifier *, __int64))modifier->~hknpModifier)(modifier, 1i64);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 198, ASSERT_TYPE_ASSERT, "( modifier ) != ( nullptr )", "%s != %s\n\t%p, %p", "modifier", "nullptr", NULL, NULL) )
  {
    __debugbreak();
  }
}

/*
==============
PhysicsGravityModifier_Init
==============
*/
void PhysicsGravityModifier_Init(const Physics_WorldId worldId, const unsigned int numMotions)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  char *v8; 
  char *v9; 
  vec3_t *v10; 
  vec3_t *v11; 
  float *v12; 
  char *v13; 
  bool *v14; 
  char *v15; 
  __int64 v16; 

  v2 = worldId;
  v3 = numMotions;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 105, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  if ( !(_DWORD)v3 )
  {
    LODWORD(v16) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 106, ASSERT_TYPE_ASSERT, "( numMotions ) > ( 0 )", "%s > %s\n\t%u, %u", "numMotions", "0", v16, 0i64) )
      __debugbreak();
  }
  v4 = (12 * v3 + 15) & 0xFFFFFFF0i64;
  s_physicsGravityModifierMotionCounts[v2] = v3;
  v5 = v2;
  v6 = (v4 + 4 * v3 + 15) & 0xFFFFFFF0i64;
  v7 = (v3 + v6 + 15) & 0xFFFFFFF0i64;
  v8 = s_physicsGravityModifierMotionAllocations[v5];
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 127, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionAllocations[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsGravityModifierMotionAllocations[worldId]", "nullptr", v8, NULL) )
    __debugbreak();
  v9 = (char *)Mem_Virtual_Alloc(v7, "PhysicsGravityModifier", TRACK_MISC);
  s_physicsGravityModifierMotionAllocations[v5] = v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 129, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionAllocations[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionAllocations[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  memset_0(s_physicsGravityModifierMotionAllocations[v5], 0, v7);
  v10 = s_physicsGravityModifierMotionGravityVectors[v5];
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 133, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionGravityVectors[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsGravityModifierMotionGravityVectors[worldId]", "nullptr", v10, NULL) )
    __debugbreak();
  v11 = (vec3_t *)s_physicsGravityModifierMotionAllocations[v5];
  s_physicsGravityModifierMotionGravityVectors[v5] = v11;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 135, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionGravityVectors[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionGravityVectors[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  v12 = s_physicsGravityModifierMotionGravityScalars[v5];
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 137, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionGravityScalars[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsGravityModifierMotionGravityScalars[worldId]", "nullptr", v12, NULL) )
    __debugbreak();
  v13 = s_physicsGravityModifierMotionAllocations[v5];
  s_physicsGravityModifierMotionGravityScalars[v5] = (float *)&v13[v4];
  if ( !&v13[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 139, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionGravityScalars[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionGravityScalars[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  v14 = s_physicsGravityModifierMotionEntryValids[v5];
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 141, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionEntryValids[worldId] ) == ( nullptr )", "%s == %s\n\t%p, %p", "s_physicsGravityModifierMotionEntryValids[worldId]", "nullptr", v14, NULL) )
    __debugbreak();
  v15 = s_physicsGravityModifierMotionAllocations[v5];
  s_physicsGravityModifierMotionEntryValids[v5] = (bool *)&v15[v6];
  if ( !&v15[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 143, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionEntryValids[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionEntryValids[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
}

/*
==============
PhysicsGravityModifier_IsInitialized
==============
*/
bool PhysicsGravityModifier_IsInitialized(const Physics_WorldId worldId)
{
  __int64 v1; 
  int v4; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 175, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, v4) )
      __debugbreak();
  }
  return s_physicsGravityModifierMotionCounts[v1] != 0;
}

/*
==============
PhysicsGravityModifier_Load
==============
*/
void PhysicsGravityModifier_Load(SaveGame *save)
{
  MemoryFile *p_memFile; 
  unsigned int *v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int p; 

  p_memFile = &save->memFile;
  v2 = s_physicsGravityModifierMotionCounts;
  v3 = 0i64;
  do
  {
    MemFile_ReadData(p_memFile, 4ui64, &p);
    v4 = p;
    *v2 = p;
    if ( (_DWORD)v4 )
    {
      v5 = (unsigned int)v4;
      MemFile_ReadData(p_memFile, 12 * v4, s_physicsGravityModifierMotionGravityVectors[v3]);
      MemFile_ReadData(p_memFile, 4 * v5, s_physicsGravityModifierMotionGravityScalars[v3]);
      MemFile_ReadData(p_memFile, (unsigned int)v5, s_physicsGravityModifierMotionEntryValids[v3]);
    }
    ++v2;
    ++v3;
  }
  while ( (__int64)v2 <= (__int64)&s_physicsGravityModifierMotionCounts[1] );
}

/*
==============
PhysicsGravityModifier_SetGravity
==============
*/
void PhysicsGravityModifier_SetGravity(const Physics_WorldId worldId, const unsigned int motionId, const vec3_t *gravity)
{
  __int64 v3; 
  __int64 v5; 
  vec3_t *v6; 
  float *v7; 
  bool *v8; 
  __int64 v9; 

  v3 = worldId;
  v5 = motionId;
  if ( motionId >= s_physicsGravityModifierMotionCounts[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 252, ASSERT_TYPE_ASSERT, "(unsigned)( motionId ) < (unsigned)( s_physicsGravityModifierMotionCounts[worldId] )", "motionId doesn't index s_physicsGravityModifierMotionCounts[worldId]\n\t%i not in [0, %i)", motionId, s_physicsGravityModifierMotionCounts[worldId]) )
    __debugbreak();
  v6 = s_physicsGravityModifierMotionGravityVectors[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 255, ASSERT_TYPE_ASSERT, "( gravityVectors ) != ( nullptr )", "%s != %s\n\t%p, %p", "gravityVectors", "nullptr", NULL, NULL) )
    __debugbreak();
  v7 = s_physicsGravityModifierMotionGravityScalars[v3];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 258, ASSERT_TYPE_ASSERT, "( gravityScalars ) != ( nullptr )", "%s != %s\n\t%p, %p", "gravityScalars", "nullptr", NULL, NULL) )
    __debugbreak();
  v8 = s_physicsGravityModifierMotionEntryValids[v3];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 261, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !v8[v5] )
  {
    v7[v5] = 1.0;
    v8[v5] = 1;
  }
  v9 = v5;
  v6[v9].v[0] = gravity->v[0];
  v6[v9].v[1] = gravity->v[1];
  v6[v9].v[2] = gravity->v[2];
}

/*
==============
PhysicsGravityModifier_SetGravityScalar
==============
*/

void __fastcall PhysicsGravityModifier_SetGravityScalar(const Physics_WorldId worldId, const unsigned int motionId, double scalar)
{
  __int64 v4; 
  bool *v9; 
  __int64 v23; 
  __int64 v24; 

  v4 = worldId;
  __asm
  {
    vmovaps [rsp+98h+var_48], xmm6
    vmovaps xmm6, xmm2
  }
  _RBP = motionId;
  if ( motionId >= s_physicsGravityModifierMotionCounts[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 223, ASSERT_TYPE_ASSERT, "(unsigned)( motionId ) < (unsigned)( s_physicsGravityModifierMotionCounts[worldId] )", "motionId doesn't index s_physicsGravityModifierMotionCounts[worldId]\n\t%i not in [0, %i)", motionId, s_physicsGravityModifierMotionCounts[worldId]) )
    __debugbreak();
  _R15 = s_physicsGravityModifierMotionGravityVectors[v4];
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 226, ASSERT_TYPE_ASSERT, "( gravityVectors ) != ( nullptr )", "%s != %s\n\t%p, %p", "gravityVectors", "nullptr", NULL, NULL) )
    __debugbreak();
  _RSI = s_physicsGravityModifierMotionGravityScalars[v4];
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 229, ASSERT_TYPE_ASSERT, "( gravityScalars ) != ( nullptr )", "%s != %s\n\t%p, %p", "gravityScalars", "nullptr", NULL, NULL) )
    __debugbreak();
  v9 = s_physicsGravityModifierMotionEntryValids[v4];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 232, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  _RBX = _RBP;
  if ( v9[_RBP] )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+rbp*4]
      vminss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rsi+rbp*4], xmm1
    }
  }
  else
  {
    _RBP = 3 * _RBP;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v4 > 7 )
    {
      LODWORD(v23) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
        __debugbreak();
      if ( (unsigned int)v4 > 7 )
      {
        LODWORD(v24) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
          __debugbreak();
      }
    }
    __asm { vmovss  xmm2, cs:__real@42000000 }
    _RCX = HavokPhysics_GetConstWorld((Physics_WorldId)v4)->world;
    __asm
    {
      vmovups xmm3, xmmword ptr [rcx+0AC0h]
      vmulss  xmm0, xmm3, xmm2
      vmovss  dword ptr [r15+rbp*4], xmm0
      vshufps xmm1, xmm3, xmm3, 55h ; 'U'
      vmulss  xmm0, xmm1, xmm2
      vmovss  dword ptr [r15+rbp*4+4], xmm0
      vshufps xmm3, xmm3, xmm3, 0AAh ; 'ª'
      vmulss  xmm0, xmm3, xmm2
      vmovss  dword ptr [r15+rbp*4+8], xmm0
      vmovss  dword ptr [rsi+rbx*4], xmm6
    }
    v9[_RBX] = 1;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
}

/*
==============
PhysicsGravityModifier_Shutdown
==============
*/
void PhysicsGravityModifier_Shutdown(const Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 150, ASSERT_TYPE_ASSERT, "( PHYSICS_WORLD_ID_FIRST ) <= ( worldId ) && ( worldId ) <= ( PHYSICS_WORLD_ID_COUNT )", "worldId not in [PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_COUNT]\n\t%i not in [%i, %i]", worldId, 0i64, 8) )
    __debugbreak();
  if ( !s_physicsGravityModifierMotionGravityVectors[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 153, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionGravityVectors[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionGravityVectors[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  s_physicsGravityModifierMotionGravityVectors[v1] = NULL;
  if ( !s_physicsGravityModifierMotionGravityScalars[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 156, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionGravityScalars[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionGravityScalars[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  s_physicsGravityModifierMotionGravityScalars[v1] = NULL;
  if ( !s_physicsGravityModifierMotionEntryValids[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 159, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionEntryValids[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionEntryValids[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  s_physicsGravityModifierMotionEntryValids[v1] = NULL;
  if ( !s_physicsGravityModifierMotionAllocations[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 163, ASSERT_TYPE_ASSERT, "( s_physicsGravityModifierMotionAllocations[worldId] ) != ( nullptr )", "%s != %s\n\t%p, %p", "s_physicsGravityModifierMotionAllocations[worldId]", "nullptr", NULL, NULL) )
    __debugbreak();
  Mem_Virtual_Free(s_physicsGravityModifierMotionAllocations[v1]);
  s_physicsGravityModifierMotionAllocations[v1] = NULL;
  s_physicsGravityModifierMotionCounts[v1] = 0;
}

/*
==============
PhysicsGravityModifier_Write
==============
*/
void PhysicsGravityModifier_Write(MemoryFile *memFile)
{
  int *v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int p; 

  v2 = (int *)s_physicsGravityModifierMotionCounts;
  v3 = 0i64;
  do
  {
    p = *v2;
    v4 = p;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( (_DWORD)v4 )
    {
      MemFile_WriteData(memFile, 12 * v4, s_physicsGravityModifierMotionGravityVectors[v3]);
      MemFile_WriteData(memFile, 4 * v4, s_physicsGravityModifierMotionGravityScalars[v3]);
      MemFile_WriteData(memFile, (unsigned int)v4, s_physicsGravityModifierMotionEntryValids[v3]);
    }
    ++v2;
    ++v3;
  }
  while ( (__int64)v2 <= (__int64)&s_physicsGravityModifierMotionCounts[1] );
}

/*
==============
PhysicsGravityModifier::getEnabledFunctions
==============
*/
__int64 PhysicsGravityModifier::getEnabledFunctions(PhysicsGravityModifier *this)
{
  return 1024i64;
}

/*
==============
PhysicsGravityModifier::modifyMotionGravity
==============
*/
void PhysicsGravityModifier::modifyMotionGravity(PhysicsGravityModifier *this, const hknpSimulationThreadContext *tl, hknpMotionId motionId, hkVector4f *gravity)
{
  unsigned int v8; 
  bool *v9; 
  hknpSolverStepInfo *m_solverStepInfo; 

  _RBX = motionId.m_value;
  _RSI = gravity;
  v8 = s_physicsGravityModifierMotionCounts[this->m_worldId];
  if ( motionId.m_value > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 75, ASSERT_TYPE_ASSERT, "( motionIdx ) <= ( s_physicsGravityModifierMotionCounts[m_worldId] )", "motionIdx not in [0, s_physicsGravityModifierMotionCounts[m_worldId]]\n\t%u not in [0, %u]", motionId.m_value, v8) )
    __debugbreak();
  v9 = s_physicsGravityModifierMotionEntryValids[this->m_worldId];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 78, ASSERT_TYPE_ASSERT, "( entryValids ) != ( nullptr )", "%s != %s\n\t%p, %p", "entryValids", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( v9[_RBX] )
  {
    if ( !s_physicsGravityModifierMotionGravityVectors[this->m_worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 83, ASSERT_TYPE_ASSERT, "( gravityVectors ) != ( nullptr )", "%s != %s\n\t%p, %p", "gravityVectors", "nullptr", NULL, NULL) )
      __debugbreak();
    _RDI = s_physicsGravityModifierMotionGravityScalars[this->m_worldId];
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsgravitymodifier.cpp", 86, ASSERT_TYPE_ASSERT, "( gravityScalars ) != ( nullptr )", "%s != %s\n\t%p, %p", "gravityScalars", "nullptr", NULL, NULL) )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, cs:__real@3d000000
      vmulss  xmm0, xmm3, dword ptr [rbp+rax*4+0]
      vmovss  dword ptr [rsi], xmm0
      vmulss  xmm2, xmm3, dword ptr [rbp+rax*4+4]
      vmovss  dword ptr [rsi+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+rax*4+8]
      vmovss  dword ptr [rsi+8], xmm1
    }
    _RSI->m_quad.m128_i32[3] = 0;
    __asm
    {
      vbroadcastss xmm0, dword ptr [rdi+rbx*4]
      vmulps  xmm1, xmm0, xmmword ptr [rsi]
      vmovups xmmword ptr [rsi], xmm1
    }
    m_solverStepInfo = tl->m_solverStepInfo;
    if ( m_solverStepInfo )
    {
      if ( m_solverStepInfo->m_solverInfo )
      {
        __asm
        {
          vmulps  xmm0, xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rsi], xmm0
        }
      }
    }
  }
}

