/*
==============
HavokPhysics_ManifoldCache_SetFriction
==============
*/

void __fastcall HavokPhysics_ManifoldCache_SetFriction(Physics_ManifoldCache *manifoldCache, const float friction)
{
  ?HavokPhysics_ManifoldCache_SetFriction@@YAXAEAUPhysics_ManifoldCache@@M@Z(manifoldCache, friction);
}

/*
==============
HavokPhysics_ManifoldCallback_InitForWorld
==============
*/

void __fastcall HavokPhysics_ManifoldCallback_InitForWorld(Physics_WorldId worldId)
{
  ?HavokPhysics_ManifoldCallback_InitForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysics_ManifoldCache_GetStaticFrictionExtra
==============
*/

double __fastcall HavokPhysics_ManifoldCache_GetStaticFrictionExtra(const Physics_ManifoldCache *manifoldCache)
{
  double result; 

  *(float *)&result = ?HavokPhysics_ManifoldCache_GetStaticFrictionExtra@@YAMAEBUPhysics_ManifoldCache@@@Z(manifoldCache);
  return result;
}

/*
==============
HavokPhysics_ManifoldCallback_ShutdownForWorld
==============
*/

void __fastcall HavokPhysics_ManifoldCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  ?HavokPhysics_ManifoldCallback_ShutdownForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysics_ManifoldCache_SetRestitution
==============
*/

void __fastcall HavokPhysics_ManifoldCache_SetRestitution(Physics_ManifoldCache *manifoldCache, const float restitution)
{
  ?HavokPhysics_ManifoldCache_SetRestitution@@YAXAEAUPhysics_ManifoldCache@@M@Z(manifoldCache, restitution);
}

/*
==============
HavokPhysics_ManifoldCache_SetStaticFrictionExtra
==============
*/

void __fastcall HavokPhysics_ManifoldCache_SetStaticFrictionExtra(Physics_ManifoldCache *manifoldCache, const float staticFrictionExtra)
{
  ?HavokPhysics_ManifoldCache_SetStaticFrictionExtra@@YAXAEAUPhysics_ManifoldCache@@M@Z(manifoldCache, staticFrictionExtra);
}

/*
==============
HavokPhysics_ManifoldCallback_UnregisterBody
==============
*/

void __fastcall HavokPhysics_ManifoldCallback_UnregisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (__fastcall *callback)(Physics_ManifoldCallback_Data *), bool allowCantFind)
{
  ?HavokPhysics_ManifoldCallback_UnregisterBody@@YAXW4Physics_WorldId@@UhknpBodyId@@P6AXPEAUPhysics_ManifoldCallback_Data@@@Z_N@Z(worldId, bodyId, callback, allowCantFind);
}

/*
==============
HavokPhysics_ManifoldCache_GetFriction
==============
*/

double __fastcall HavokPhysics_ManifoldCache_GetFriction(const Physics_ManifoldCache *manifoldCache)
{
  double result; 

  *(float *)&result = ?HavokPhysics_ManifoldCache_GetFriction@@YAMAEBUPhysics_ManifoldCache@@@Z(manifoldCache);
  return result;
}

/*
==============
HavokPhysics_ManifoldCache_GetRestitution
==============
*/

double __fastcall HavokPhysics_ManifoldCache_GetRestitution(const Physics_ManifoldCache *manifoldCache)
{
  double result; 

  *(float *)&result = ?HavokPhysics_ManifoldCache_GetRestitution@@YAMAEBUPhysics_ManifoldCache@@@Z(manifoldCache);
  return result;
}

/*
==============
HavokPhysics_ManifoldCallback_RegisterBody
==============
*/

void __fastcall HavokPhysics_ManifoldCallback_RegisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (__fastcall *callback)(Physics_ManifoldCallback_Data *))
{
  ?HavokPhysics_ManifoldCallback_RegisterBody@@YAXW4Physics_WorldId@@UhknpBodyId@@P6AXPEAUPhysics_ManifoldCallback_Data@@@Z@Z(worldId, bodyId, callback);
}

/*
==============
HavokPhysics_ManifoldCache_GetFriction
==============
*/
float HavokPhysics_ManifoldCache_GetFriction(const Physics_ManifoldCache *manifoldCache)
{
  float result; 

  if ( !manifoldCache->m_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 190, ASSERT_TYPE_ASSERT, "(manifoldCache.m_cache)", (const char *)&queryFormat, "manifoldCache.m_cache") )
    __debugbreak();
  LODWORD(result) = *((__int16 *)manifoldCache->m_cache + 26) << 16;
  return result;
}

/*
==============
HavokPhysics_ManifoldCache_GetRestitution
==============
*/
float HavokPhysics_ManifoldCache_GetRestitution(const Physics_ManifoldCache *manifoldCache)
{
  float result; 

  if ( !manifoldCache->m_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 222, ASSERT_TYPE_ASSERT, "(manifoldCache.m_cache)", (const char *)&queryFormat, "manifoldCache.m_cache") )
    __debugbreak();
  LODWORD(result) = *((__int16 *)manifoldCache->m_cache + 28) << 16;
  return result;
}

/*
==============
HavokPhysics_ManifoldCache_GetStaticFrictionExtra
==============
*/
float HavokPhysics_ManifoldCache_GetStaticFrictionExtra(const Physics_ManifoldCache *manifoldCache)
{
  float result; 

  if ( !manifoldCache->m_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 206, ASSERT_TYPE_ASSERT, "(manifoldCache.m_cache)", (const char *)&queryFormat, "manifoldCache.m_cache") )
    __debugbreak();
  LODWORD(result) = *((__int16 *)manifoldCache->m_cache + 27) << 16;
  return result;
}

/*
==============
HavokPhysics_ManifoldCache_SetFriction
==============
*/
void HavokPhysics_ManifoldCache_SetFriction(Physics_ManifoldCache *manifoldCache, const float friction)
{
  float v3; 

  if ( !manifoldCache->m_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 198, ASSERT_TYPE_ASSERT, "(manifoldCache.m_cache)", (const char *)&queryFormat, "manifoldCache.m_cache") )
    __debugbreak();
  v3 = friction * 1.0039062;
  *((_WORD *)manifoldCache->m_cache + 26) = HIWORD(v3);
}

/*
==============
HavokPhysics_ManifoldCache_SetRestitution
==============
*/
void HavokPhysics_ManifoldCache_SetRestitution(Physics_ManifoldCache *manifoldCache, const float restitution)
{
  float v3; 

  if ( !manifoldCache->m_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 230, ASSERT_TYPE_ASSERT, "(manifoldCache.m_cache)", (const char *)&queryFormat, "manifoldCache.m_cache") )
    __debugbreak();
  v3 = restitution * 1.0039062;
  *((_WORD *)manifoldCache->m_cache + 28) = HIWORD(v3);
}

/*
==============
HavokPhysics_ManifoldCache_SetStaticFrictionExtra
==============
*/
void HavokPhysics_ManifoldCache_SetStaticFrictionExtra(Physics_ManifoldCache *manifoldCache, const float staticFrictionExtra)
{
  float v3; 

  if ( !manifoldCache->m_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 214, ASSERT_TYPE_ASSERT, "(manifoldCache.m_cache)", (const char *)&queryFormat, "manifoldCache.m_cache") )
    __debugbreak();
  v3 = staticFrictionExtra * 1.0039062;
  *((_WORD *)manifoldCache->m_cache + 27) = HIWORD(v3);
}

/*
==============
HavokPhysics_ManifoldCallback_InitForWorld
==============
*/
void HavokPhysics_ManifoldCallback_InitForWorld(Physics_WorldId worldId)
{
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> **v1; 
  hkMemoryRouter *Value; 
  __int64 v3; 
  hkMemoryAllocator *v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = &s_callbackMaps[worldId];
  if ( *v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 54, ASSERT_TYPE_ASSERT, "( s_callbackMaps[worldId] == 0 )", (const char *)&queryFormat, "s_callbackMaps[worldId] == NULL", -2i64) )
    __debugbreak();
  Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
  if ( !Value )
    Value = hkMemoryRouter::s_fallbackRouter;
  v3 = (__int64)Value->m_heap->blockAlloc(Value->m_heap, 16i64);
  if ( v3 )
  {
    v4 = hkMemHeapAllocator();
    v5 = (__int64)v4->blockAlloc(v4, 256i64);
    *(_QWORD *)v3 = v5;
    v6 = 0i64;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 15;
    if ( v5 )
    {
      do
      {
        *(_DWORD *)(v6 + *(_QWORD *)v3) = -1;
        v6 += 16i64;
      }
      while ( v6 < 256 );
      *(_DWORD *)(v3 + 8) &= 0x80000000;
    }
    *v1 = (hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *)v3;
  }
  else
  {
    *v1 = NULL;
  }
}

/*
==============
HavokPhysics_ManifoldCallback_OnManifoldEvent
==============
*/
void HavokPhysics_ManifoldCallback_OnManifoldEvent(const hknpEventHandlerInput *input, const hknpEvent *event)
{
  __int64 v2; 
  Physics_WorldId WorldId; 
  __int64 m_bodiesAreReversed; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v12; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> **v13; 
  signed int Key; 
  int m_secondaryType_low; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v16; 
  signed int v17; 
  __int64 v18; 
  int m_hashMod; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v20; 
  __int64 v21; 
  int v22[3]; 
  int v23; 
  __int64 v24; 

  v2 = *(_QWORD *)&event[5].m_filterBits;
  if ( v2 )
    *(_WORD *)(v2 + 34) |= 0xE0u;
  WorldId = HavokPhysics_GetWorldId(input->m_world);
  m_bodiesAreReversed = input->m_bodiesAreReversed;
  v7 = WorldId;
  v8 = *((_DWORD *)&event[1].m_filterBits + m_bodiesAreReversed);
  v9 = *((_DWORD *)&event[1].m_filterBits + (unsigned int)(1 - m_bodiesAreReversed));
  v10 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->isBodyValid)(&input->m_world->hknpWorldReader, v8);
  v11 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->isBodyValid)(&input->m_world->hknpWorldReader, v9);
  if ( v10 && v11 )
  {
    v12 = s_callbackMaps[v7];
    v13 = &s_callbackMaps[v7];
    Key = (unsigned int)hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::findKey(v12, v8);
    if ( Key > v12->m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 92, ASSERT_TYPE_ASSERT, "( s_callbackMaps[worldId]->isValid( it ) )", (const char *)&queryFormat, "s_callbackMaps[worldId]->isValid( it )") )
      __debugbreak();
    v24 = *(_QWORD *)&event[5].m_filterBits;
    m_secondaryType_low = LOBYTE(event[2].m_secondaryType);
    v22[0] = v7;
    v22[1] = v8;
    v22[2] = v9;
    switch ( m_secondaryType_low )
    {
      case 1:
        v23 = 0;
        break;
      case 2:
        v23 = 1;
        break;
      case 4:
        v23 = 2;
        break;
      case 8:
        v23 = 3;
        break;
      default:
        LODWORD(v21) = m_secondaryType_low;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled manifold status encountered: %d", v21) )
          __debugbreak();
        v23 = 4;
        break;
    }
    v16 = *v13;
    if ( Key <= (*v13)->m_hashMod )
    {
      do
      {
        v16->m_elem[Key].val.callback((Physics_ManifoldCallback_Data *)v22);
        v16 = *v13;
        v17 = Key + 1;
        v18 = Key + 1;
        m_hashMod = (*v13)->m_hashMod;
        while ( v17 > m_hashMod )
        {
LABEL_26:
          v17 = 0;
          v18 = 0i64;
        }
        v20 = &(*v13)->m_elem[v18];
        while ( v20->key != -1 )
        {
          if ( v20->key == v8 )
            goto LABEL_28;
          ++v17;
          ++v20;
          if ( v17 > m_hashMod )
            goto LABEL_26;
        }
        v17 = m_hashMod + 1;
LABEL_28:
        Key = v17;
      }
      while ( v17 <= m_hashMod );
    }
  }
}

/*
==============
HavokPhysics_ManifoldCallback_RegisterBody
==============
*/
void HavokPhysics_ManifoldCallback_RegisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (*callback)(Physics_ManifoldCallback_Data *))
{
  hknpWorld *World; 

  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::insert(s_callbackMaps[worldId], bodyId.m_serialAndIndex, (ManifoldCallbackEntry)callback);
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 150, ASSERT_TYPE_ASSERT, "( world )", (const char *)&queryFormat, "world") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int64))World->enableBodyFlags)(&World->hknpWorldWriter, bodyId.m_serialAndIndex, 64i64);
  HavokPhysics_SubscribeToEvent(worldId, MANIFOLD, bodyId, HavokPhysics_ManifoldCallback_OnManifoldEvent, "ManifoldCallback");
}

/*
==============
HavokPhysics_ManifoldCallback_ShutdownForWorld
==============
*/
void HavokPhysics_ManifoldCallback_ShutdownForWorld(Physics_WorldId worldId)
{
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> **v1; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v2; 
  hkMemoryAllocator *v3; 
  hkMemoryRouter *Value; 

  v1 = &s_callbackMaps[worldId];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 62, ASSERT_TYPE_ASSERT, "( s_callbackMaps[worldId] != 0 )", (const char *)&queryFormat, "s_callbackMaps[worldId] != NULL", -2i64) )
    __debugbreak();
  v2 = *v1;
  if ( *v1 )
  {
    if ( v2->m_numElems >= 0 )
    {
      v3 = hkMemHeapAllocator();
      v3->blockFree(v3, v2->m_elem, 16 * (v2->m_hashMod + 1));
    }
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, v2, 16);
  }
  *v1 = NULL;
}

/*
==============
HavokPhysics_ManifoldCallback_UnregisterBody
==============
*/
void HavokPhysics_ManifoldCallback_UnregisterBody(Physics_WorldId worldId, hknpBodyId bodyId, void (*callback)(Physics_ManifoldCallback_Data *), bool allowCantFind)
{
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v7; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> **v8; 
  signed int Key; 
  unsigned int v11; 
  int m_hashMod; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *m_elem; 
  int v14; 
  __int64 v15; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v16; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator> *v17; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v18; 
  int v19; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned int v25; 
  hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::Pair *v26; 
  __int64 v27; 

  v7 = s_callbackMaps[worldId];
  v8 = &s_callbackMaps[worldId];
  Key = (unsigned int)hkMultiMap<unsigned int,ManifoldCallbackEntry,hkMultiMapOperations<unsigned int>,hkContainerHeapAllocator>::findKey(v7, bodyId.m_serialAndIndex);
  v11 = Key;
  if ( !allowCantFind && Key > v7->m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 165, ASSERT_TYPE_ASSERT, "( allowCantFind || s_callbackMaps[worldId]->isValid( it ) )", (const char *)&queryFormat, "allowCantFind || s_callbackMaps[worldId]->isValid( it )") )
    __debugbreak();
  m_hashMod = (*v8)->m_hashMod;
  if ( (int)v11 > m_hashMod )
  {
LABEL_17:
    if ( !allowCantFind && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsmanifoldcallback.cpp", 184, ASSERT_TYPE_ASSERT, "(allowCantFind)", "%s\n\tFailed to find entry", "allowCantFind") )
      __debugbreak();
  }
  else
  {
    m_elem = (*v8)->m_elem;
    while ( m_elem[v11].val.callback != callback )
    {
      v14 = v11 + 1;
      v15 = (int)(v11 + 1);
      while ( v14 > m_hashMod )
      {
LABEL_14:
        v14 = 0;
        v15 = 0i64;
      }
      v16 = &m_elem[v15];
      while ( v16->key != -1 )
      {
        if ( v16->key == bodyId.m_serialAndIndex )
          goto LABEL_16;
        ++v14;
        ++v16;
        if ( v14 > m_hashMod )
          goto LABEL_14;
      }
      v14 = m_hashMod + 1;
LABEL_16:
      v11 = v14;
      if ( v14 > m_hashMod )
        goto LABEL_17;
    }
    HavokPhysics_UnsubscribeFromEvent(worldId, MANIFOLD, bodyId, HavokPhysics_ManifoldCallback_OnManifoldEvent);
    v17 = *v8;
    v18 = (*v8)->m_elem;
    --v17->m_numElems;
    v18[v11].key = -1;
    v19 = v17->m_hashMod;
    v20 = v17->m_elem;
    v21 = v19 & (v19 + v11);
    if ( v17->m_elem[v21].key != -1 )
    {
      do
        v21 = v19 & (v19 + v21);
      while ( v20[v21].key != -1 );
    }
    v22 = v19 & (v11 + 1);
    v23 = v19 & (v21 + 1);
    v24 = v22;
    if ( v20[v24].key != -1 )
    {
      do
      {
        v25 = v19 & (-1640531535 * (v20[v24].key >> 4));
        if ( v22 < v23 || (v26 = v20, v25 <= v11) )
        {
          if ( v22 >= v11 || v25 <= v11 && v25 > v22 )
          {
            if ( v25 <= v11 || (v26 = v20, v25 >= v23) )
            {
              v27 = v11;
              v11 = v22;
              v27 *= 2i64;
              *(&v20->key + 2 * v27) = v20[v24].key;
              *((_QWORD *)&v17->m_elem->val.callback + v27) = v17->m_elem[v24].val.callback;
              v17->m_elem[v24].key = -1;
              v19 = v17->m_hashMod;
              v26 = v17->m_elem;
            }
          }
          else
          {
            v26 = v20;
          }
        }
        v20 = v26;
        v22 = v19 & (v22 + 1);
        v24 = v22;
      }
      while ( v26[v24].key != -1 );
    }
  }
}

