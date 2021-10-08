/*
==============
HavokPhysics_VelocityCachingModifier::postContactJacobianSetup
==============
*/

void __fastcall HavokPhysics_VelocityCachingModifier::postContactJacobianSetup(HavokPhysics_VelocityCachingModifier *this, const hknpSimulationThreadContext *tl, const hknpSolverInfo *solverInfo, const hknpCdBodyBase *cdBodyA, const hknpCdBodyBase *cdBodyB, const hknpManifoldCollisionCache *cache, const hknpManifold *manifold, hknpStreamContactJacobian *jac)
{
  ?postContactJacobianSetup@HavokPhysics_VelocityCachingModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBUhknpSolverInfo@@AEBUhknpCdBodyBase@@2PEBUhknpManifoldCollisionCache@@PEBUhknpManifold@@PEAUhknpStreamContactJacobian@@@Z(this, tl, solverInfo, cdBodyA, cdBodyB, cache, manifold, jac);
}

/*
==============
HavokPhysicsSVFX_RegisterWorld
==============
*/

void __fastcall HavokPhysicsSVFX_RegisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum, unsigned int rigidBodyCount)
{
  ?HavokPhysicsSVFX_RegisterWorld@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@I@Z(worldId, localClientNum, rigidBodyCount);
}

/*
==============
HavokPhysicsSVFX_IsWorldRegistered
==============
*/

bool __fastcall HavokPhysicsSVFX_IsWorldRegistered(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  return ?HavokPhysicsSVFX_IsWorldRegistered@@YA_NW4Physics_WorldId@@W4LocalClientNum_t@@@Z(worldId, localClientNum);
}

/*
==============
HavokPhysicsSVFX_Update
==============
*/

void __fastcall HavokPhysicsSVFX_Update(Physics_WorldId worldId, LocalClientNum_t localClientNum, float timeStep)
{
  ?HavokPhysicsSVFX_Update@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@M@Z(worldId, localClientNum, timeStep);
}

/*
==============
HavokPhysicsSVFX_DrawDebugWorld
==============
*/

void __fastcall HavokPhysicsSVFX_DrawDebugWorld(const int worldId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsSVFX_DrawDebugWorld@@YAXHPEBUScreenPlacement@@PEAM1MM@Z(worldId, scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysics_VelocityCachingModifier::manifoldCreatedCallback
==============
*/

void __fastcall HavokPhysics_VelocityCachingModifier::manifoldCreatedCallback(HavokPhysics_VelocityCachingModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBody *cdBodyA, const hknpCdBody *cdBodyB, hknpModifier::ManifoldCreatedCallbackInput *input)
{
  ?manifoldCreatedCallback@HavokPhysics_VelocityCachingModifier@@UEAAXAEBVhknpSimulationThreadContext@@AEBVhknpModifierSharedData@@AEBUhknpCdBody@@2PEIAUManifoldCreatedCallbackInput@hknpModifier@@@Z(this, tl, sharedData, cdBodyA, cdBodyB, input);
}

/*
==============
HavokPhysicsSVFX_UnregisterBody
==============
*/

void __fastcall HavokPhysicsSVFX_UnregisterBody(Physics_WorldId worldId, hknpBodyId bodyId, LocalClientNum_t localClientNum)
{
  ?HavokPhysicsSVFX_UnregisterBody@@YAXW4Physics_WorldId@@UhknpBodyId@@W4LocalClientNum_t@@@Z(worldId, bodyId, localClientNum);
}

/*
==============
HavokPhysicsSVFX_UnregisterWorld
==============
*/

void __fastcall HavokPhysicsSVFX_UnregisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  ?HavokPhysicsSVFX_UnregisterWorld@@YAXW4Physics_WorldId@@W4LocalClientNum_t@@@Z(worldId, localClientNum);
}

/*
==============
HavokPhysicsSVFX_DrawSFX
==============
*/

void __fastcall HavokPhysicsSVFX_DrawSFX(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsSVFX_DrawSFX@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsSVFX_DrawVFX
==============
*/

void __fastcall HavokPhysicsSVFX_DrawVFX(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?HavokPhysicsSVFX_DrawVFX@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
HavokPhysicsSVFX_RegisterBody
==============
*/

void __fastcall HavokPhysicsSVFX_RegisterBody(Physics_WorldId worldId, hknpBodyId bodyId, LocalClientNum_t localClientNum)
{
  ?HavokPhysicsSVFX_RegisterBody@@YAXW4Physics_WorldId@@UhknpBodyId@@W4LocalClientNum_t@@@Z(worldId, bodyId, localClientNum);
}

/*
==============
HavokPhysicsSVFX_AddNewContact
==============
*/
void HavokPhysicsSVFX_AddNewContact(const hknpWorld *world, const hknpBodyId *bodyIds, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *shapeKeys, const int numImpulseGivingContactPoints, const int numCollisionContactPoints, const hkVector4f *position, const hkVector4f *normal, const unsigned int *surfaceFlagData, const float speed, const float *masses, const float angle)
{
  unsigned __int64 m_userData; 
  unsigned __int64 v15; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  unsigned __int64 v17; 
  signed int v18; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *v19; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *contacts; 
  __int64 v21; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  HavokPhysicsSVFXContact *m_data; 
  unsigned __int64 m_size; 
  __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  hkMemoryAllocator *v28; 
  int v29; 
  int v30; 
  __int64 v31; 
  __int64 v32; 
  hkMemoryAllocator *v33; 
  int v34; 
  int v35; 
  __int64 v36; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *v37; 
  hkMemoryAllocator *v38; 
  unsigned __int64 v39; 
  Physics_WorldId v47; 
  int VFXEventAsset; 
  __int64 v49; 
  unsigned __int64 key; 
  unsigned __int64 val[9]; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 362, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( !bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 363, ASSERT_TYPE_ASSERT, "(bodyIds)", (const char *)&queryFormat, "bodyIds") )
    __debugbreak();
  if ( !shapeKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 364, ASSERT_TYPE_ASSERT, "(shapeKeys)", (const char *)&queryFormat, "shapeKeys") )
    __debugbreak();
  m_userData = world->m_userData;
  val[0] = HavokPhysicsSVFX_MakeKey(bodyIds);
  v15 = val[0];
  if ( !shapeKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 332, ASSERT_TYPE_ASSERT, "(shapeKeys)", (const char *)&queryFormat, "shapeKeys") )
    __debugbreak();
  contactIndirection = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  v17 = shapeKeys[1].m_value | ((unsigned __int64)shapeKeys->m_value << 32);
  key = val[0];
  v18 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&contactIndirection->m_map, &key);
  v19 = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  contacts = s_havokPhysicsSVFXWorlds[m_userData].contacts;
  if ( v18 > v19->m_map.m_hashMod )
  {
    m_size = contacts->m_size;
    v33 = hkMemHeapAllocator();
    v34 = contacts->m_size;
    v35 = v34;
    if ( v34 == (contacts->m_capacityAndFlags & 0x3FFFFFFF) )
    {
      hkArrayUtil::_reserveMore(v33, contacts, 200);
      v34 = contacts->m_size;
      v35 = v34;
    }
    v36 = (__int64)&contacts->m_data[v34];
    if ( v36 )
    {
      *(_DWORD *)(v36 + 160) = -1;
      *(_QWORD *)(v36 + 164) = 0i64;
      *(_QWORD *)(v36 + 176) = 0i64;
      *(_QWORD *)(v36 + 184) = 0i64;
      *(_DWORD *)(v36 + 192) = 0;
      v35 = contacts->m_size;
    }
    val[0] = m_size;
    contacts->m_size = v35 + 1;
    v37 = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
    key = v15;
    v38 = hkMemHeapAllocator();
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&v37->m_map, v38, &key, val);
    v39 = m_size;
    s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[v39].next = -1;
    s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[v39].prev = -1;
  }
  else
  {
    v21 = v18;
    m_elem = v19->m_map.m_elem;
    m_data = contacts->m_data;
    m_size = SLODWORD(m_elem[v21].val);
    v25 = m_size;
    if ( contacts->m_data[m_size].next != -1 )
    {
      do
      {
        if ( m_data[v25].shapeKey == v17 )
          break;
        m_size = m_data[v25].next;
        v25 = m_size;
      }
      while ( m_data[m_size].next != -1 );
    }
    v26 = (int)m_size;
    if ( m_data[v26].shapeKey != v17 && m_data[v26].isValid )
    {
      v27 = contacts->m_size;
      v28 = hkMemHeapAllocator();
      v29 = contacts->m_size;
      v30 = v29;
      if ( v29 == (contacts->m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v28, contacts, 200);
        v29 = contacts->m_size;
        v30 = v29;
      }
      v31 = (__int64)&contacts->m_data[v29];
      if ( v31 )
      {
        *(_DWORD *)(v31 + 160) = -1;
        *(_QWORD *)(v31 + 164) = 0i64;
        *(_QWORD *)(v31 + 176) = 0i64;
        *(_QWORD *)(v31 + 184) = 0i64;
        *(_DWORD *)(v31 + 192) = 0;
        v30 = contacts->m_size;
      }
      v32 = v27;
      contacts->m_size = v30 + 1;
      s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[v26].next = v27;
      s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[v32].prev = m_size;
      LODWORD(m_size) = v27;
      v15 = val[0];
      s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[v32].next = -1;
    }
  }
  if ( (unsigned int)m_size >= s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size )
  {
    LODWORD(v49) = m_size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( contactIndex ) < (unsigned)( fxWorld->contacts->getSize() )", "contactIndex doesn't index fxWorld->contacts->getSize()\n\t%i not in [0, %i)", v49, s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size) )
      __debugbreak();
  }
  __asm { vmovss  xmm3, cs:__real@42000000 }
  _RDI = &s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[(int)m_size];
  _RDI->numImpulseGivingContactPoints = numImpulseGivingContactPoints;
  _RDI->numCollisionContactPoints = numCollisionContactPoints;
  _RDI->isValid = 1;
  _RDI->bodyIDKey = v15;
  _RDI->shapeKey = v17;
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [rax]
    vmovss  dword ptr [rdi+28h], xmm0
    vmulss  xmm2, xmm3, dword ptr [rax+4]
    vmovss  xmm0, [rsp+98h+arg_50]
    vmovss  dword ptr [rdi+2Ch], xmm2
    vmulss  xmm1, xmm3, dword ptr [rax+8]
    vmovss  dword ptr [rdi+30h], xmm1
    vmulss  xmm1, xmm3, [rsp+98h+arg_40]
  }
  *(_QWORD *)_RDI->normal.v = normal->m_quad.m128_u64[0];
  LODWORD(_RDI->normal.v[2]) = normal->m_quad.m128_i32[2];
  _RDI->surfaceFlagData[0] = *surfaceFlagData;
  _RDI->surfaceFlagData[1] = surfaceFlagData[1];
  __asm { vmovss  dword ptr [rdi+48h], xmm1 }
  _RDI->masses[0] = *masses;
  _RDI->masses[1] = masses[1];
  _RDI->hitSpeed = _RDI->speed;
  __asm
  {
    vmovss  dword ptr [rdi+54h], xmm0
    vmovss  dword ptr [rdi+5Ch], xmm0
  }
  v47 = world->m_userData;
  _RDI->sfxAssetIndex = Physics_GetSFXEventAsset(v47, bodyIds->m_serialAndIndex, bodyIds[1].m_serialAndIndex, &_RDI->sfxEventAsset);
  VFXEventAsset = Physics_GetVFXEventAsset(v47, bodyIds->m_serialAndIndex, bodyIds[1].m_serialAndIndex, &_RDI->vfxEventAsset);
  _RDI->eventFlags |= 1u;
  _RDI->vfxAssetIndex = VFXEventAsset;
  _RDI->debugDrawEventFlags = _RDI->eventFlags;
}

/*
==============
HavokPhysicsSVFX_AddPotentialHitEvent
==============
*/
void HavokPhysicsSVFX_AddPotentialHitEvent(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact)
{
  __int64 v2; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *potentialEventList; 
  hkMemoryAllocator *v5; 
  int m_size; 

  v2 = worldId;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 347, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  potentialEventList = s_havokPhysicsSVFXWorlds[v2].potentialEventList;
  v5 = hkMemHeapAllocator();
  m_size = potentialEventList->m_size;
  if ( m_size == (potentialEventList->m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v5, potentialEventList, 8);
    m_size = potentialEventList->m_size;
  }
  potentialEventList->m_data[m_size] = contact;
  ++potentialEventList->m_size;
}

/*
==============
HavokPhysicsSVFX_Coalesce
==============
*/
void HavokPhysicsSVFX_Coalesce(Physics_WorldId worldId)
{
  __int64 v1; 
  int v2; 
  int v3; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *contacts; 
  HavokPhysicsSVFXContact *m_data; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v6; 
  __int64 v7; 
  __int64 next; 
  __int64 prev; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  Dummy *v11; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v12; 
  __int64 m_size; 
  HavokPhysicsSVFXContact *v14; 
  HavokPhysicsSVFXContact *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v19; 
  __int64 v20; 
  __int64 v21; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *v22; 
  int v23; 
  unsigned __int64 *p_val; 
  unsigned __int64 key; 

  v1 = worldId;
  v2 = 0;
  v3 = 0;
  contacts = s_havokPhysicsSVFXWorlds[v1].contacts;
  m_data = contacts->m_data;
  if ( contacts->m_data != &contacts->m_data[contacts->m_size] )
  {
    v6 = s_havokPhysicsSVFXWorlds[v1].contacts;
    v7 = 0i64;
    while ( 1 )
    {
      if ( v2 >= 20 )
        return;
      if ( m_data->isValid )
      {
        ++m_data;
        ++v3;
        ++v7;
        contacts = v6;
        goto LABEL_30;
      }
      next = m_data->next;
      ++v2;
      if ( (_DWORD)next != -1 )
      {
        contacts->m_data[next].prev = m_data->prev;
        v6 = s_havokPhysicsSVFXWorlds[v1].contacts;
      }
      prev = m_data->prev;
      if ( (_DWORD)prev == -1 )
      {
        contactIndirection = s_havokPhysicsSVFXWorlds[v1].contactIndirection;
        key = m_data->bodyIDKey;
        v11 = hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&contactIndirection->m_map, &key);
        if ( (int)v11 > s_havokPhysicsSVFXWorlds[v1].contactIndirection->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2133, ASSERT_TYPE_ASSERT, "(s_havokPhysicsSVFXWorlds[worldId].contactIndirection->isValid( indirectionIt ))", (const char *)&queryFormat, "s_havokPhysicsSVFXWorlds[worldId].contactIndirection->isValid( indirectionIt )") )
          __debugbreak();
        if ( m_data->next == -1 )
          hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::remove(&s_havokPhysicsSVFXWorlds[v1].contactIndirection->m_map, v11);
        else
          s_havokPhysicsSVFXWorlds[v1].contactIndirection->m_map.m_elem[(int)v11].val = m_data->next;
      }
      else
      {
        v6->m_data[prev].next = m_data->next;
      }
      v12 = s_havokPhysicsSVFXWorlds[v1].contacts;
      m_size = v12->m_size;
      v12->m_size = m_size - 1;
      if ( (_DWORD)m_size - 1 != v3 )
      {
        v14 = v12->m_data;
        v15 = &v14[v7];
        v16 = (__int64)&v14[m_size - 1];
        v17 = 25i64;
        v18 = v16 - (_QWORD)v15;
        do
        {
          *(_QWORD *)&v15->isValid = *(_QWORD *)(&v15->isValid + v18);
          v15 = (HavokPhysicsSVFXContact *)((char *)v15 + 8);
          --v17;
        }
        while ( v17 );
      }
      v19 = s_havokPhysicsSVFXWorlds[v1].contacts;
      if ( v3 >= v19->m_size )
        goto LABEL_28;
      v20 = m_data->next;
      if ( (_DWORD)v20 != -1 )
      {
        v19->m_data[v20].prev = v3;
        v19 = s_havokPhysicsSVFXWorlds[v1].contacts;
      }
      v21 = m_data->prev;
      if ( (_DWORD)v21 == -1 )
        break;
      v19->m_data[v21].next = v3;
      contacts = s_havokPhysicsSVFXWorlds[v1].contacts;
LABEL_30:
      v6 = contacts;
      if ( m_data == &contacts->m_data[contacts->m_size] )
        return;
    }
    v22 = s_havokPhysicsSVFXWorlds[v1].contactIndirection;
    key = m_data->bodyIDKey;
    v23 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&v22->m_map, &key);
    if ( v23 > s_havokPhysicsSVFXWorlds[v1].contactIndirection->m_map.m_hashMod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2168, ASSERT_TYPE_ASSERT, "(s_havokPhysicsSVFXWorlds[worldId].contactIndirection->isValid( indirectionIt ))", (const char *)&queryFormat, "s_havokPhysicsSVFXWorlds[worldId].contactIndirection->isValid( indirectionIt )") )
      __debugbreak();
    p_val = &s_havokPhysicsSVFXWorlds[v1].contactIndirection->m_map.m_elem[v23].val;
    if ( *(_DWORD *)p_val == s_havokPhysicsSVFXWorlds[v1].contacts->m_size )
      *p_val = v3;
LABEL_28:
    contacts = s_havokPhysicsSVFXWorlds[v1].contacts;
    goto LABEL_30;
  }
}

/*
==============
HavokPhysicsSVFX_DrawDebugWorld
==============
*/
void HavokPhysicsSVFX_DrawDebugWorld(const int worldId, const ScreenPlacement *scrPlace, float *x, float *y)
{
  __int64 v8; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *contacts; 
  HavokPhysicsSVFXContact *m_data; 
  int v15; 
  __int64 v23; 
  vec4_t color; 
  vec3_t end; 
  char _Buffer[256]; 
  void *retaddr; 

  _R11 = &retaddr;
  v8 = worldId;
  if ( s_havokPhysicsSVFXWorlds[v8].isInitialized )
  {
    contacts = s_havokPhysicsSVFXWorlds[v8].contacts;
    m_data = contacts->m_data;
    if ( m_data != &m_data[contacts->m_size] )
    {
      _RBX = &m_data->position.v[1];
      __asm
      {
        vmovaps xmmword ptr [r11-28h], xmm6
        vmovss  xmm6, cs:__real@41400000
        vmovaps xmmword ptr [r11-38h], xmm7
        vmovss  xmm7, cs:__real@42652ee0
        vmovaps xmmword ptr [r11-48h], xmm8
        vmovss  xmm8, cs:__real@3f800000
      }
      do
      {
        v15 = *((_DWORD *)_RBX + 28);
        if ( (v15 & 1) != 0 )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen }
        }
        else if ( (v15 & 2) != 0 )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorYellow@@3Tvec4_t@@B; vec4_t const colorYellow }
        }
        else if ( (v15 & 4) != 0 )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed }
        }
        else if ( m_data->isValid )
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorBlue@@3Tvec4_t@@B; vec4_t const colorBlue }
        }
        else
        {
          __asm { vmovups xmm0, xmmword ptr cs:?colorCyan@@3Tvec4_t@@B; vec4_t const colorCyan }
        }
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbx+8]
          vaddss  xmm2, xmm1, dword ptr [rbx-4]
          vmulss  xmm1, xmm6, dword ptr [rbx+0Ch]
          vmovss  dword ptr [rsp+1A8h+end], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx]
          vmulss  xmm1, xmm6, dword ptr [rbx+10h]
          vmovss  dword ptr [rsp+1A8h+end+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx+4]
          vmovss  dword ptr [rsp+1A8h+end+8], xmm2
          vmovups xmmword ptr [rsp+1A8h+color], xmm0
        }
        CG_DebugLine((const vec3_t *)(_RBX - 1), &end, &color, 0, 0);
        v23 = *((int *)_RBX - 5);
        if ( (_DWORD)v23 != -1 )
          CG_DebugLine((const vec3_t *)(_RBX - 1), &s_havokPhysicsSVFXWorlds[v8].contacts->m_data[v23].position, &colorWhite, 0, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmovss  xmm2, dword ptr [rbx+1Ch]
          vmulss  xmm1, xmm0, xmm7
          vcvtss2sd xmm3, xmm1, xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        j_sprintf(_Buffer, "S:%.2f A:%.2f", *(double *)&_XMM2, *(double *)&_XMM3);
        __asm { vmovaps xmm2, xmm8; scale }
        CL_AddDebugString((const vec3_t *)(_RBX - 1), &color, *(float *)&_XMM2, _Buffer, 0, 1);
        ++m_data;
        _RBX += 50;
      }
      while ( m_data != &s_havokPhysicsSVFXWorlds[v8].contacts->m_data[s_havokPhysicsSVFXWorlds[v8].contacts->m_size] );
      __asm
      {
        vmovaps xmm8, [rsp+1A8h+var_48]
        vmovaps xmm7, [rsp+1A8h+var_38]
        vmovaps xmm6, [rsp+1A8h+var_28]
      }
    }
  }
}

/*
==============
HavokPhysicsSVFX_DrawSFX
==============
*/

void __fastcall HavokPhysicsSVFX_DrawSFX(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  int v12; 
  hkMap<unsigned int,PhysicsSFXEventAsset *,hkMapOperations<unsigned int>,hkContainerHeapAllocator> *v13; 
  __int64 m_hashMod; 
  __int64 v15; 
  hkMapBase<unsigned int,PhysicsSFXEventAsset *,hkMapOperations<unsigned int> >::Pair *m_elem; 
  __int64 v17; 
  __int64 v18; 
  hkMapBase<unsigned int,PhysicsSFXEventAsset *,hkMapOperations<unsigned int> >::Pair *v19; 
  int m_size; 
  unsigned int v25; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *m_data; 
  SndAliasList *Alias; 
  const char *v29; 
  const vec4_t *v30; 
  hkMemoryAllocator *v35; 
  hkMemoryAllocator *v36; 
  vec4_t *setColor; 
  float v41; 
  float v42; 
  hkArray<HavokPhysicsSVFX_DrawSVFX_AssetData,hkContainerHeapAllocator> data; 
  hkPointerMap<unsigned __int64,unsigned int,hkContainerHeapAllocator> dataMap; 
  __int64 v45; 
  char dest[264]; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v45 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm7, xmm3
  }
  _R15 = y;
  _R14 = x;
  data.m_data = NULL;
  data.m_size = 0;
  data.m_capacityAndFlags = 0x80000000;
  dataMap.m_map.m_elem = NULL;
  dataMap.m_map.m_numElems = 0;
  dataMap.m_map.m_hashMod = -1;
  HavokPhysics_LockAssetRead();
  v12 = 0;
  v13 = g_physicsSFXEventAssets;
  m_hashMod = g_physicsSFXEventAssets->m_hashMod;
  if ( (int)m_hashMod >= 0 )
  {
    v15 = 0i64;
    m_elem = g_physicsSFXEventAssets->m_elem;
    do
    {
      if ( m_elem->key != -1 )
        break;
      ++v12;
      ++v15;
      ++m_elem;
    }
    while ( v15 <= m_hashMod );
  }
  if ( v12 <= (int)m_hashMod )
  {
    do
    {
      HavokPhysicsSVFX_DrawSFX_CollectAssetData(&v13->m_elem[v12++].val->rules, &data, &dataMap);
      v13 = g_physicsSFXEventAssets;
      v17 = g_physicsSFXEventAssets->m_hashMod;
      if ( v12 > (int)v17 )
        break;
      v18 = v12;
      v19 = &g_physicsSFXEventAssets->m_elem[v12];
      do
      {
        if ( v19->key != -1 )
          break;
        ++v12;
        ++v18;
        ++v19;
      }
      while ( v18 <= v17 );
    }
    while ( v12 <= (int)v17 );
  }
  HavokPhysics_UnlockAssetRead();
  Com_sprintf(dest, 0x100ui64, "%i SFXEvent Assets", (unsigned int)data.m_size);
  __asm
  {
    vmovss  xmm6, [rbp+0E0h+charHeight]
    vmovss  [rsp+1E0h+var_1A8], xmm6
    vmovss  xmm2, dword ptr [r15]; y
    vmovss  xmm1, dword ptr [r14]; x
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v41, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [r15]
    vmovss  dword ptr [r15], xmm0
  }
  m_size = data.m_size;
  if ( data.m_size > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFX_DrawSVFX_AssetData,hkBool (*)(HavokPhysicsSVFX_DrawSVFX_AssetData &,HavokPhysicsSVFX_DrawSVFX_AssetData &)>(data.m_data, 0, data.m_size - 1, HavokPhysicsSVFX_DrawSVFX_Sort);
    m_size = data.m_size;
  }
  v25 = 0;
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
  }
  m_data = data.m_data;
  if ( data.m_data != &data.m_data[m_size] )
  {
    do
    {
      Alias = SND_TryFindAlias(m_data->name);
      v29 = "Alias Doesn't Exist";
      if ( Alias )
        v29 = "Alias Exists";
      LODWORD(setColor) = m_data->count;
      Com_sprintf(dest, 0x100ui64, "%i: %i x %s: %s", v25, setColor, m_data->name, v29);
      v30 = &colorRed;
      if ( Alias )
        v30 = &colorWhite;
      __asm
      {
        vmovss  [rsp+1E0h+var_1A8], xmm6
        vmovss  xmm2, dword ptr [r15]; y
        vmovss  xmm1, dword ptr [r14]; x
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, v30, 0, 1, v42, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [r15]
        vmovss  dword ptr [r15], xmm0
      }
      ++m_data;
      ++v25;
    }
    while ( m_data != &data.m_data[data.m_size] );
    __asm { vmovss  xmm0, dword ptr [r14] }
  }
  __asm
  {
    vsubss  xmm0, xmm0, xmm7
    vmovss  dword ptr [r14], xmm0
  }
  v35 = hkMemHeapAllocator();
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::clearAndDeallocate(&dataMap.m_map, v35);
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::~hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>(&dataMap.m_map);
  v36 = hkMemHeapAllocator();
  data.m_size = 0;
  if ( data.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v36, data.m_data, 16, data.m_capacityAndFlags & 0x3FFFFFFF);
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
HavokPhysicsSVFX_DrawSFX_CollectAssetData
==============
*/
void HavokPhysicsSVFX_DrawSFX_CollectAssetData(PhysicsSFXEventAssetRules *rules, hkArray<HavokPhysicsSVFX_DrawSVFX_AssetData,hkContainerHeapAllocator> *data, hkPointerMap<unsigned __int64,unsigned int,hkContainerHeapAllocator> *dataMap)
{
  PhysicsSFXEventAssetRule *v6; 
  char *hitSoundAlias; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  int v11; 
  __int64 val_low; 
  hkMemoryAllocator *v13; 
  int m_size; 
  int v15; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *m_data; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *v17; 
  __int64 v18; 
  char *v19; 
  hkMemoryAllocator *v20; 
  char *scrapeSoundAlias; 
  unsigned __int64 v22; 
  int v23; 
  __int64 v24; 
  hkMemoryAllocator *v25; 
  int v26; 
  int v27; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *v28; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *v29; 
  __int64 v30; 
  char *v31; 
  hkMemoryAllocator *v32; 
  int i; 
  int j; 
  int k; 
  int m; 
  int n; 
  int ii; 
  int jj; 
  int kk; 
  unsigned __int64 key; 
  unsigned __int64 v42; 

  if ( !rules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2459, ASSERT_TYPE_ASSERT, "(rules)", (const char *)&queryFormat, "rules") )
    __debugbreak();
  if ( rules->numrules > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2460, ASSERT_TYPE_ASSERT, "(rules->numrules <= 1)", (const char *)&queryFormat, "rules->numrules <= 1") )
    __debugbreak();
  if ( rules->numrules )
  {
    v6 = rules->rules;
    switch ( v6->type )
    {
      case Types_PhysicsSFXEventSoundRule:
        hitSoundAlias = v6->u.soundRule.hitSoundAlias;
        v8 = -1i64;
        if ( hitSoundAlias && *hitSoundAlias )
        {
          v9 = -1i64;
          do
            ++v9;
          while ( hitSoundAlias[v9] );
          v10 = Com_BlockChecksumKey32(hitSoundAlias, (unsigned int)v9, 0);
          key = v10;
          v11 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&dataMap->m_map, &key);
          if ( v11 > dataMap->m_map.m_hashMod )
          {
            v13 = hkMemHeapAllocator();
            m_size = data->m_size;
            v15 = m_size;
            if ( m_size == (data->m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v13, data, 16);
              m_size = data->m_size;
              v15 = m_size;
            }
            m_data = data->m_data;
            v17 = &data->m_data[m_size];
            if ( v17 )
            {
              v17->name = NULL;
              v17->count = 0;
              v15 = data->m_size;
              m_data = data->m_data;
            }
            data->m_size = v15 + 1;
            v18 = v15;
            v19 = v6->u.soundRule.hitSoundAlias;
            v42 = v10;
            ++m_data[v18].count;
            m_data[v18].name = v19;
            key = (unsigned int)(data->m_size - 1);
            v20 = hkMemHeapAllocator();
            hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&dataMap->m_map, v20, &v42, &key);
          }
          else
          {
            val_low = SLODWORD(dataMap->m_map.m_elem[v11].val);
            data->m_data[val_low].name = v6->u.soundRule.hitSoundAlias;
            ++data->m_data[val_low].count;
          }
        }
        scrapeSoundAlias = v6->u.soundRule.scrapeSoundAlias;
        if ( scrapeSoundAlias && *scrapeSoundAlias )
        {
          do
            ++v8;
          while ( scrapeSoundAlias[v8] );
          v22 = Com_BlockChecksumKey32(scrapeSoundAlias, (unsigned int)v8, 0);
          key = v22;
          v23 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&dataMap->m_map, &key);
          if ( v23 > dataMap->m_map.m_hashMod )
          {
            v25 = hkMemHeapAllocator();
            v26 = data->m_size;
            v27 = v26;
            if ( v26 == (data->m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v25, data, 16);
              v26 = data->m_size;
              v27 = v26;
            }
            v28 = data->m_data;
            v29 = &data->m_data[v26];
            if ( v29 )
            {
              v29->name = NULL;
              v29->count = 0;
              v27 = data->m_size;
              v28 = data->m_data;
            }
            data->m_size = v27 + 1;
            v30 = v27;
            v31 = v6->u.soundRule.scrapeSoundAlias;
            v42 = v22;
            ++v28[v30].count;
            v28[v30].name = v31;
            key = (unsigned int)(data->m_size - 1);
            v32 = hkMemHeapAllocator();
            hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&dataMap->m_map, v32, &v42, &key);
          }
          else
          {
            v24 = SLODWORD(dataMap->m_map.m_elem[v23].val);
            data->m_data[v24].name = v6->u.soundRule.scrapeSoundAlias;
            ++data->m_data[v24].count;
          }
        }
        break;
      case Types_PhysicsSFXEventMaterialRule:
        for ( i = 0; i < v6->u.materialRule.numentries; ++i )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[24 * i + 8], data, dataMap);
        break;
      case Types_PhysicsSFXEventAngleRule:
        for ( j = 0; j < v6->u.materialRule.numentries; ++j )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[40 * j + 24], data, dataMap);
        break;
      case Types_PhysicsSFXEventSpeedRule:
        for ( k = 0; k < v6->u.materialRule.numentries; ++k )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[40 * k + 24], data, dataMap);
        break;
      case Types_PhysicsSFXEventMassRule:
        for ( m = 0; m < v6->u.materialRule.numentries; ++m )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[40 * m + 24], data, dataMap);
        break;
      case Types_PhysicsSFXEventGravityRule:
        for ( n = 0; n < v6->u.materialRule.numentries; ++n )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[24 * n + 8], data, dataMap);
        break;
      case Types_PhysicsSFXEventAtmosphereRule:
        for ( ii = 0; ii < v6->u.materialRule.numentries; ++ii )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[24 * ii + 8], data, dataMap);
        break;
      case Types_PhysicsSFXEventCameraDistanceRule:
        for ( jj = 0; jj < v6->u.materialRule.numentries; ++jj )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[24 * jj + 8], data, dataMap);
        break;
      case Types_PhysicsSFXEventFrequencyRule:
        for ( kk = 0; kk < v6->u.materialRule.numentries; ++kk )
          HavokPhysicsSVFX_DrawSFX_CollectAssetData((PhysicsSFXEventAssetRules *)&v6->u.soundRule.scrapeSoundAlias[24 * kk + 8], data, dataMap);
        break;
      default:
        return;
    }
  }
}

/*
==============
HavokPhysicsSVFX_DrawSVFX_Sort
==============
*/
hkBool *HavokPhysicsSVFX_DrawSVFX_Sort(hkBool *result, HavokPhysicsSVFX_DrawSVFX_AssetData *a, HavokPhysicsSVFX_DrawSVFX_AssetData *b)
{
  if ( !a->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 86, ASSERT_TYPE_ASSERT, "(a.name)", (const char *)&queryFormat, "a.name") )
    __debugbreak();
  if ( !b->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 87, ASSERT_TYPE_ASSERT, "(b.name)", (const char *)&queryFormat, "b.name") )
    __debugbreak();
  result->m_bool = I_stricmp(a->name, b->name) < 0;
  return result;
}

/*
==============
HavokPhysicsSVFX_DrawVFX
==============
*/

void __fastcall HavokPhysicsSVFX_DrawVFX(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  int v12; 
  hkMap<unsigned int,PhysicsVFXEventAsset *,hkMapOperations<unsigned int>,hkContainerHeapAllocator> *v13; 
  __int64 m_hashMod; 
  __int64 v15; 
  hkMapBase<unsigned int,PhysicsVFXEventAsset *,hkMapOperations<unsigned int> >::Pair *m_elem; 
  __int64 v17; 
  __int64 v18; 
  hkMapBase<unsigned int,PhysicsVFXEventAsset *,hkMapOperations<unsigned int> >::Pair *v19; 
  int m_size; 
  unsigned int v25; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *m_data; 
  int v28; 
  const char *v29; 
  const vec4_t *v30; 
  hkMemoryAllocator *v35; 
  hkMemoryAllocator *v36; 
  vec4_t *setColor; 
  float v41; 
  float v42; 
  hkArray<HavokPhysicsSVFX_DrawSVFX_AssetData,hkContainerHeapAllocator> data; 
  hkPointerMap<unsigned __int64,unsigned int,hkContainerHeapAllocator> dataMap; 
  __int64 v45; 
  char dest[264]; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v45 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm7, xmm3
  }
  _R15 = y;
  _RSI = x;
  data.m_data = NULL;
  data.m_size = 0;
  data.m_capacityAndFlags = 0x80000000;
  dataMap.m_map.m_elem = NULL;
  dataMap.m_map.m_numElems = 0;
  dataMap.m_map.m_hashMod = -1;
  HavokPhysics_LockAssetRead();
  v12 = 0;
  v13 = g_physicsVFXEventAssets;
  m_hashMod = g_physicsVFXEventAssets->m_hashMod;
  if ( (int)m_hashMod >= 0 )
  {
    v15 = 0i64;
    m_elem = g_physicsVFXEventAssets->m_elem;
    do
    {
      if ( m_elem->key != -1 )
        break;
      ++v12;
      ++v15;
      ++m_elem;
    }
    while ( v15 <= m_hashMod );
  }
  if ( v12 <= (int)m_hashMod )
  {
    do
    {
      HavokPhysicsSVFX_DrawVFX_CollectAssetData(&v13->m_elem[v12++].val->rules, &data, &dataMap);
      v13 = g_physicsVFXEventAssets;
      v17 = g_physicsVFXEventAssets->m_hashMod;
      if ( v12 > (int)v17 )
        break;
      v18 = v12;
      v19 = &g_physicsVFXEventAssets->m_elem[v12];
      do
      {
        if ( v19->key != -1 )
          break;
        ++v12;
        ++v18;
        ++v19;
      }
      while ( v18 <= v17 );
    }
    while ( v12 <= (int)v17 );
  }
  HavokPhysics_UnlockAssetRead();
  Com_sprintf(dest, 0x100ui64, "%i VFXEvent Assets", (unsigned int)data.m_size);
  __asm
  {
    vmovss  xmm6, [rbp+0E0h+charHeight]
    vmovss  [rsp+1E0h+var_1A8], xmm6
    vmovss  xmm2, dword ptr [r15]; y
    vmovss  xmm1, dword ptr [rsi]; x
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v41, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [r15]
    vmovss  dword ptr [r15], xmm0
  }
  m_size = data.m_size;
  if ( data.m_size > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFX_DrawSVFX_AssetData,hkBool (*)(HavokPhysicsSVFX_DrawSVFX_AssetData &,HavokPhysicsSVFX_DrawSVFX_AssetData &)>(data.m_data, 0, data.m_size - 1, HavokPhysicsSVFX_DrawSVFX_Sort);
    m_size = data.m_size;
  }
  v25 = 0;
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm0
  }
  m_data = data.m_data;
  if ( data.m_data != &data.m_data[m_size] )
  {
    do
    {
      I_strlwr((char *)m_data->name);
      v28 = DB_XAssetExists(ASSET_TYPE_VFX, m_data->name);
      v29 = "Not Loaded";
      if ( v28 == 1 )
        v29 = "Loaded";
      LODWORD(setColor) = m_data->count;
      Com_sprintf(dest, 0x100ui64, "%i: %i x %s: %s", v25, setColor, m_data->name, v29);
      v30 = &colorRed;
      if ( v28 == 1 )
        v30 = &colorWhite;
      __asm
      {
        vmovss  [rsp+1E0h+var_1A8], xmm6
        vmovss  xmm2, dword ptr [r15]; y
        vmovss  xmm1, dword ptr [rsi]; x
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, v30, 0, 1, v42, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [r15]
        vmovss  dword ptr [r15], xmm0
      }
      ++m_data;
      ++v25;
    }
    while ( m_data != &data.m_data[data.m_size] );
    __asm { vmovss  xmm0, dword ptr [rsi] }
  }
  __asm
  {
    vsubss  xmm0, xmm0, xmm7
    vmovss  dword ptr [rsi], xmm0
  }
  v35 = hkMemHeapAllocator();
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::clearAndDeallocate(&dataMap.m_map, v35);
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::~hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>(&dataMap.m_map);
  v36 = hkMemHeapAllocator();
  data.m_size = 0;
  if ( data.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v36, data.m_data, 16, data.m_capacityAndFlags & 0x3FFFFFFF);
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
HavokPhysicsSVFX_DrawVFX_CollectAssetData
==============
*/
void HavokPhysicsSVFX_DrawVFX_CollectAssetData(PhysicsVFXEventAssetRules *rules, hkArray<HavokPhysicsSVFX_DrawSVFX_AssetData,hkContainerHeapAllocator> *data, hkPointerMap<unsigned __int64,unsigned int,hkContainerHeapAllocator> *dataMap)
{
  PhysicsVFXEventAssetRule *v6; 
  char *hitParticleEffectAlias; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  int v11; 
  __int64 val_low; 
  hkMemoryAllocator *v13; 
  int m_size; 
  int v15; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *m_data; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *v17; 
  __int64 v18; 
  char *v19; 
  hkMemoryAllocator *v20; 
  char *scrapeParticleEffectAlias; 
  unsigned __int64 v22; 
  int v23; 
  __int64 v24; 
  hkMemoryAllocator *v25; 
  int v26; 
  int v27; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *v28; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *v29; 
  __int64 v30; 
  char *v31; 
  hkMemoryAllocator *v32; 
  int i; 
  int j; 
  int k; 
  int m; 
  int n; 
  int ii; 
  int jj; 
  int kk; 
  unsigned __int64 key; 
  unsigned __int64 v42; 

  if ( !rules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2639, ASSERT_TYPE_ASSERT, "(rules)", (const char *)&queryFormat, "rules") )
    __debugbreak();
  if ( rules->numrules > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2640, ASSERT_TYPE_ASSERT, "(rules->numrules <= 1)", (const char *)&queryFormat, "rules->numrules <= 1") )
    __debugbreak();
  if ( rules->numrules )
  {
    v6 = rules->rules;
    switch ( v6->type )
    {
      case Types_PhysicsVFXEventParticleEffectRule:
        hitParticleEffectAlias = v6->u.particleEffectRule.hitParticleEffectAlias;
        v8 = -1i64;
        if ( hitParticleEffectAlias && *hitParticleEffectAlias )
        {
          v9 = -1i64;
          do
            ++v9;
          while ( hitParticleEffectAlias[v9] );
          v10 = Com_BlockChecksumKey32(hitParticleEffectAlias, (unsigned int)v9, 0);
          key = v10;
          v11 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&dataMap->m_map, &key);
          if ( v11 > dataMap->m_map.m_hashMod )
          {
            v13 = hkMemHeapAllocator();
            m_size = data->m_size;
            v15 = m_size;
            if ( m_size == (data->m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v13, data, 16);
              m_size = data->m_size;
              v15 = m_size;
            }
            m_data = data->m_data;
            v17 = &data->m_data[m_size];
            if ( v17 )
            {
              v17->name = NULL;
              v17->count = 0;
              v15 = data->m_size;
              m_data = data->m_data;
            }
            data->m_size = v15 + 1;
            v18 = v15;
            v19 = v6->u.particleEffectRule.hitParticleEffectAlias;
            v42 = v10;
            ++m_data[v18].count;
            m_data[v18].name = v19;
            key = (unsigned int)(data->m_size - 1);
            v20 = hkMemHeapAllocator();
            hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&dataMap->m_map, v20, &v42, &key);
          }
          else
          {
            val_low = SLODWORD(dataMap->m_map.m_elem[v11].val);
            data->m_data[val_low].name = v6->u.particleEffectRule.hitParticleEffectAlias;
            ++data->m_data[val_low].count;
          }
        }
        scrapeParticleEffectAlias = v6->u.particleEffectRule.scrapeParticleEffectAlias;
        if ( scrapeParticleEffectAlias && *scrapeParticleEffectAlias )
        {
          do
            ++v8;
          while ( scrapeParticleEffectAlias[v8] );
          v22 = Com_BlockChecksumKey32(scrapeParticleEffectAlias, (unsigned int)v8, 0);
          key = v22;
          v23 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&dataMap->m_map, &key);
          if ( v23 > dataMap->m_map.m_hashMod )
          {
            v25 = hkMemHeapAllocator();
            v26 = data->m_size;
            v27 = v26;
            if ( v26 == (data->m_capacityAndFlags & 0x3FFFFFFF) )
            {
              hkArrayUtil::_reserveMore(v25, data, 16);
              v26 = data->m_size;
              v27 = v26;
            }
            v28 = data->m_data;
            v29 = &data->m_data[v26];
            if ( v29 )
            {
              v29->name = NULL;
              v29->count = 0;
              v27 = data->m_size;
              v28 = data->m_data;
            }
            data->m_size = v27 + 1;
            v30 = v27;
            v31 = v6->u.particleEffectRule.scrapeParticleEffectAlias;
            v42 = v22;
            ++v28[v30].count;
            v28[v30].name = v31;
            key = (unsigned int)(data->m_size - 1);
            v32 = hkMemHeapAllocator();
            hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::insert(&dataMap->m_map, v32, &v42, &key);
          }
          else
          {
            v24 = SLODWORD(dataMap->m_map.m_elem[v23].val);
            data->m_data[v24].name = v6->u.particleEffectRule.scrapeParticleEffectAlias;
            ++data->m_data[v24].count;
          }
        }
        break;
      case Types_PhysicsVFXEventMaterialRule:
        for ( i = 0; i < v6->u.materialRule.numentries; ++i )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * i + 8], data, dataMap);
        break;
      case Types_PhysicsVFXEventAngleRule:
        for ( j = 0; j < v6->u.materialRule.numentries; ++j )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * j + 8], data, dataMap);
        break;
      case Types_PhysicsVFXEventSpeedRule:
        for ( k = 0; k < v6->u.materialRule.numentries; ++k )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * k + 8], data, dataMap);
        break;
      case Types_PhysicsVFXEventMassRule:
        for ( m = 0; m < v6->u.materialRule.numentries; ++m )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * m + 8], data, dataMap);
        break;
      case Types_PhysicsVFXEventGravityRule:
        for ( n = 0; n < v6->u.materialRule.numentries; ++n )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * n + 8], data, dataMap);
        break;
      case Types_PhysicsVFXEventAtmosphereRule:
        for ( ii = 0; ii < v6->u.materialRule.numentries; ++ii )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * ii + 8], data, dataMap);
        break;
      case Types_PhysicsVFXEventCameraDistanceRule:
        for ( jj = 0; jj < v6->u.materialRule.numentries; ++jj )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * jj + 8], data, dataMap);
        break;
      case Types_PhysicsVFXEventFrequencyRule:
        for ( kk = 0; kk < v6->u.materialRule.numentries; ++kk )
          HavokPhysicsSVFX_DrawVFX_CollectAssetData((PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * kk + 8], data, dataMap);
        break;
      default:
        return;
    }
  }
}

/*
==============
HavokPhysicsSVFX_GetParticleRotation
==============
*/
void HavokPhysicsSVFX_GetParticleRotation(const HavokPhysicsSVFXContact *contact, vec4_t *quatOut)
{
  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  _RDI = contact;
  _RBX = quatOut;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1585, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  xmm4, cs:__real@3f800000
    vcomiss xmm0, xmm4
    vmovss  xmm6, dword ptr [rdi+34h]
    vmovss  xmm5, dword ptr [rdi+38h]
    vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
    vmovss  dword ptr [rbx+0Ch], xmm1
    vmovaps xmm6, [rsp+78h+var_18]
  }
}

/*
==============
HavokPhysicsSVFX_IsWorldRegistered
==============
*/
_BOOL8 HavokPhysicsSVFX_IsWorldRegistered(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  return s_havokPhysicsSVFXWorlds[worldId].isInitialized;
}

/*
==============
HavokPhysicsSVFX_MakeKey
==============
*/
unsigned __int64 HavokPhysicsSVFX_MakeKey(const hknpBodyId *bodyIds)
{
  if ( !bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 298, ASSERT_TYPE_ASSERT, "(bodyIds)", (const char *)&queryFormat, "bodyIds") )
    __debugbreak();
  if ( (bodyIds->m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 299, ASSERT_TYPE_ASSERT, "(bodyIds[0].isValid())", (const char *)&queryFormat, "bodyIds[0].isValid()") )
    __debugbreak();
  if ( (bodyIds[1].m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 300, ASSERT_TYPE_ASSERT, "(bodyIds[1].isValid())", (const char *)&queryFormat, "bodyIds[1].isValid()") )
    __debugbreak();
  return bodyIds[1].m_serialAndIndex | ((unsigned __int64)bodyIds->m_serialAndIndex << 32);
}

/*
==============
HavokPhysicsSVFX_OnContactImpulseEvent
==============
*/
void HavokPhysicsSVFX_OnContactImpulseEvent(const hknpEventHandlerInput *input, const hknpEvent *event)
{
  signed __int64 v2; 
  void *v13; 
  hknpContactSolverEvent *v14; 
  int m_sizePaddedTo16_low; 
  int v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  const hknpStreamContactJacobian *v21; 
  const hknpBodyId *p_m_filterBits; 
  hknpWorld *m_world; 
  unsigned __int64 m_userData; 
  signed int v25; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  unsigned int val; 
  HavokPhysicsSVFXContact *v28; 
  const hknpStreamContactSolverTypes::JacModHdr *v29; 
  const hknpStreamContactJacobian *v30; 
  const hknpStreamContactSolverTypes::JacModHdr *v31; 
  __int64 v32; 
  hknpWorldReader *v33; 
  hknpWorldReader_vtbl *v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  const hknpStreamContactJacobian *m_contactJacobian; 
  unsigned int v39; 
  const hknpStreamContactSolverTypes::JacModHdr *JacModHdr; 
  const hknpStreamContactJacobian *v41; 
  const hknpStreamContactSolverTypes::JacModHdr *v42; 
  int v44; 
  unsigned __int64 v49; 
  unsigned int v50; 
  const hknpTriangleShape *TriangleShape; 
  unsigned __int64 v63; 
  __int64 v64; 
  float v65; 
  unsigned int v66; 
  unsigned int *p_m_instanceId; 
  __int64 v68; 
  int v69; 
  __int64 v70; 
  __int64 m_size; 
  __int64 v72; 
  unsigned int v76; 
  const hknpTriangleShape *m_shape; 
  __int64 v88; 
  __int64 v89; 
  float v90; 
  int v91; 
  unsigned int *v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  const hknpManifoldCollisionCache *ManifoldCollisionCache; 
  __int16 *v107; 
  hkSimdFloat32 *p_velocities; 
  __int64 v109; 
  const hknpStreamContactJacobian *v115; 
  __int64 v121; 
  const hknpWorld **v179; 
  bool v230; 
  __int64 v232; 
  const hknpWorld *v241; 
  __int64 v253; 
  float v254; 
  float v255; 
  float zero; 
  float v257; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> v258; 
  unsigned int m_value; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKeys[2]; 
  hknpMotion *motionA; 
  unsigned int v262[2]; 
  __int64 v263; 
  __int64 v264; 
  hkVector4f v265; 
  __int64 v266; 
  unsigned __int64 key; 
  int v268; 
  __int64 v269; 
  hknpMotion *motionB; 
  __int16 v271[2]; 
  int v272; 
  unsigned __int64 userData; 
  __int16 v274[2]; 
  int v275; 
  unsigned __int64 v276; 
  __int64 v277; 
  const hknpTriangleShape *v278; 
  __int128 v279; 
  __int64 v280; 
  hknpShapeCollector v281; 
  hkVector4f normal; 
  hkcdManifold4 manifoldOut; 
  hknpInplaceTriangleShape v284; 
  hkVector4f v285; 
  __int128 v286; 
  __int128 v287; 
  __int128 v288; 
  hkSimdFloat32 velocities; 
  char v300; 

  v13 = alloca(v2);
  v280 = -2i64;
  __asm
  {
    vmovaps [rsp+1070h+var_40], xmm6
    vmovaps [rsp+1070h+var_50], xmm7
    vmovaps [rsp+1070h+var_60], xmm8
    vmovaps [rsp+1070h+var_70], xmm9
    vmovaps [rsp+1070h+var_80], xmm10
    vmovaps [rsp+1070h+var_90], xmm11
    vmovaps [rsp+1070h+var_A0], xmm12
    vmovaps [rsp+1070h+var_B0], xmm13
    vmovaps [rsp+1070h+var_C0], xmm14
    vmovaps [rsp+1070h+var_D0], xmm15
  }
  v14 = (hknpContactSolverEvent *)event;
  *(_QWORD *)&v279 = event;
  *(_QWORD *)&shapeKeys[0].m_value = input;
  m_sizePaddedTo16_low = LOBYTE(event[4].m_sizePaddedTo16);
  v268 = m_sizePaddedTo16_low;
  if ( m_sizePaddedTo16_low == 4 )
    goto LABEL_102;
  v17 = m_sizePaddedTo16_low - 1;
  if ( !v17 )
  {
LABEL_5:
    v19 = *(_QWORD *)&event[2].m_secondaryType;
    if ( v19 && (v20 = *(_QWORD *)(v19 + 56)) != 0 )
    {
      *(_WORD *)(v20 + 34) |= 2u;
      zero = 0.0;
      v19 = *(_QWORD *)&event[2].m_secondaryType;
    }
    else
    {
      LODWORD(zero) = -2147220992;
    }
    if ( v19 && (v32 = *(_QWORD *)(v19 + 56)) != 0 )
    {
      *(_WORD *)(v32 + 34) |= 4u;
      zero = 0.0;
    }
    else
    {
      LODWORD(zero) = -2147220992;
    }
    v33 = &input->m_world->hknpWorldReader;
    v34 = v33->__vftable;
    key = (unsigned __int64)&event[1].m_filterBits;
    v35 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v34->getBody)(v33, *(unsigned int *)&event[1].m_filterBits);
    v264 = v35;
    v36 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getBody)(&input->m_world->hknpWorldReader, v14->m_bodyIds[1].m_serialAndIndex);
    v269 = v36;
    motionA = (hknpMotion *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getMotion)(&input->m_world->hknpWorldReader, *(unsigned int *)(v35 + 64));
    motionB = (hknpMotion *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getMotion)(&input->m_world->hknpWorldReader, *(unsigned int *)(v36 + 64));
    v37 = *(_QWORD *)(v35 + 96);
    v263 = v37;
    v266 = *(_QWORD *)(v36 + 96);
    m_contactJacobian = v14->m_contactJacobian;
    v39 = -1;
    if ( m_contactJacobian )
    {
      JacModHdr = hknpStreamContactJacobianUtil::getJacModHdr(m_contactJacobian);
      v258.m_value = hknpStreamContactJacobianUtil::getJacModMfoldData(JacModHdr)->m_shapeKeyA.m_value;
      v41 = v14->m_contactJacobian;
      if ( v41 )
      {
        v42 = hknpStreamContactJacobianUtil::getJacModHdr(v41);
        m_value = hknpStreamContactJacobianUtil::getJacModMfoldData(v42)->m_shapeKeyB.m_value;
LABEL_40:
        __asm { vmovss  xmm1, cs:__real@3c75c28f; radius }
        hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v284, *(float *)&_XMM1);
        v44 = 0;
        v281.m_internal.m_shapeBuffer.m_shape = NULL;
        v281.m_internal.m_shapeBuffer.m_buffer = v281.m_internal.m_shapeBuffer.m_storage;
        v281.m_internal.m_shapeBuffer.m_bufferSize = 2048;
        v281.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpInplaceShapeBuffer<2048>::`vftable';
        v281.m_internal.m_shapeTags[0] = -1;
        v281.m_internal.m_shape = NULL;
        v281.m_parentShape = NULL;
        v281.m_shapeTagPath.m_size = 0;
        *(_QWORD *)&v281.m_internal.m_flags.m_storage = 8i64;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
          vmovups ymmword ptr [rbp+0F70h+var_F40.m_transform.m_rotation.baseclass_0.m_col0.m_quad], ymm0
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
          vmovups ymmword ptr [rbp+0F70h+var_F40.m_transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
          vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
          vmovups xmmword ptr [rbp+0F70h+var_F40.m_internal.m_scale.m_quad], xmm0
          vmovss  xmm6, cs:__real@34000000
          vmovss  [rsp+1070h+zero], xmm6
        }
        v49 = 1i64;
        if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &zero) )
        {
          v50 = v281.m_internal.m_flags.m_storage | 4;
          v281.m_internal.m_flags.m_storage |= 4u;
          __asm
          {
            vmovups xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+260h; __m128 const near * const g_vectorfConstants
            vmovups [rbp+0F70h+var_160], xmm4
            vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
            vsubps  xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
            vmovups xmm1, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
            vandnps xmm3, xmm1, xmm2
            vcmpleps xmm5, xmm3, xmm4
            vxorps  xmm2, xmm2, xmm2
            vpxor   xmm0, xmm0, xmm0
            vpcmpeqd xmm1, xmm0, xmm0
            vblendps xmm2, xmm2, xmm1, 7
            vpand   xmm0, xmm5, xmm2
            vptest  xmm0, xmm2
          }
          if ( _CF )
            v281.m_internal.m_flags.m_storage = v50 | 1;
        }
        v281.m_internal.m_shapeTags[0] = -1;
        (*(void (__fastcall **)(_QWORD, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *, __int64, hknpShapeCollector *))(**(_QWORD **)(v35 + 96) + 176i64))(*(_QWORD *)(v35 + 96), &v258, 1i64, &v281);
        if ( (v281.m_internal.m_flags.m_storage & 0x10) != 0 )
          TriangleShape = hknpShapeCollector::getTriangleShape(&v281, 0, (hknpTriangleShape *)&v284);
        else
          TriangleShape = (const hknpTriangleShape *)v281.m_internal.m_shape;
        v278 = TriangleShape;
        v272 = *(_DWORD *)(v35 + 108);
        v271[0] = *(_WORD *)(v35 + 106);
        if ( (*(_QWORD *)(v35 + 160) & 0xFFFFFFFF00000000ui64) != 0 || (v63 = 0i64, *(_DWORD *)(v37 + 40)) )
          v63 = 1i64;
        userData = v63;
        if ( v281.m_parentShape )
        {
          v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(**(_QWORD **)&shapeKeys[0].m_value + 32i64) + 24i64))(**(_QWORD **)&shapeKeys[0].m_value + 32i64);
          v277 = v64;
          v65 = *(float *)&v258.m_value;
          LODWORD(v257) = (hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>)v258.m_value;
          LOWORD(zero) = v281.m_internal.m_shapeTags[0];
          v285.m_quad.m128_u64[0] = (unsigned __int64)v281.m_parentShape;
          v66 = -1;
          v262[0] = 0;
          if ( v281.m_shapeTagPath.m_size > 0 )
          {
            p_m_instanceId = &v281.m_shapeTagPath.m_data[0].m_instanceId;
            v68 = v264;
            v69 = 0;
            v70 = v64;
            m_size = v281.m_shapeTagPath.m_size;
            do
            {
              v72 = *((_QWORD *)p_m_instanceId - 1);
              v66 = v66 & hknpShapeKeyPath_usedBitsMaskTable[v69] | (((*p_m_instanceId + 1) << (32 - (v69 + *(_BYTE *)(v72 + 27)))) - 1);
              v69 += *(unsigned __int8 *)(v72 + 27);
              (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v70 + 32i64))(v70, *((unsigned __int16 *)p_m_instanceId - 8), 5i64, v68, v263, v72, v66, *((_QWORD *)p_m_instanceId + 1), v271);
              p_m_instanceId += 8;
              --m_size;
            }
            while ( m_size );
            v39 = -1;
            v65 = v257;
            v44 = 0;
            v14 = (hknpContactSolverEvent *)v279;
            v36 = v269;
            v64 = v277;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, unsigned __int64, float, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v64 + 32i64))(v64, LOWORD(zero), 5i64, v264, v263, v285.m_quad.m128_u64[0], COERCE_FLOAT(LODWORD(v65)), v278, v271);
          v63 = userData;
          v49 = 1i64;
        }
        v262[0] = Physics_GetSurfaceFlagsFromUserData(v63);
        v281.m_internal.m_shape = NULL;
        v281.m_parentShape = NULL;
        v281.m_shapeTagPath.m_size = 0;
        *(_QWORD *)&v281.m_internal.m_flags.m_storage = 8i64;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+200h; __m128 const near * const g_vectorfConstants
          vmovups ymmword ptr [rbp+0F70h+var_F40.m_transform.m_rotation.baseclass_0.m_col0.m_quad], ymm0
          vmovups ymm0, ymmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+220h; __m128 const near * const g_vectorfConstants
          vmovups ymmword ptr [rbp+0F70h+var_F40.m_transform.m_rotation.baseclass_0.m_col2.m_quad], ymm0
          vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
          vmovups xmmword ptr [rbp+0F70h+var_F40.m_internal.m_scale.m_quad], xmm0
          vmovss  [rsp+1070h+var_100C], xmm6
        }
        if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &v257) )
        {
          v76 = v281.m_internal.m_flags.m_storage | 4;
          v281.m_internal.m_flags.m_storage |= 4u;
          __asm
          {
            vmovups xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+260h; __m128 const near * const g_vectorfConstants
            vmovups [rbp+0F70h+var_160], xmm4
            vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+230h; __m128 const near * const g_vectorfConstants
            vsubps  xmm2, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+50h; __m128 const near * const g_vectorfConstants
            vmovups xmm1, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
            vandnps xmm3, xmm1, xmm2
            vcmpleps xmm5, xmm3, xmm4
            vxorps  xmm2, xmm2, xmm2
            vpxor   xmm0, xmm0, xmm0
            vpcmpeqd xmm1, xmm0, xmm0
            vblendps xmm2, xmm2, xmm1, 7
            vpand   xmm0, xmm2, xmm5
            vptest  xmm0, xmm2
          }
          if ( _CF )
            v281.m_internal.m_flags.m_storage = v76 | 1;
        }
        v281.m_internal.m_shapeTags[0] = -1;
        (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, hknpShapeCollector *))(**(_QWORD **)(v36 + 96) + 176i64))(*(_QWORD *)(v36 + 96), &m_value, 1i64, &v281);
        if ( (v281.m_internal.m_flags.m_storage & 0x10) != 0 )
          m_shape = hknpShapeCollector::getTriangleShape(&v281, 0, (hknpTriangleShape *)&v284);
        else
          m_shape = (const hknpTriangleShape *)v281.m_internal.m_shape;
        v263 = (__int64)m_shape;
        v275 = *(_DWORD *)(v36 + 108);
        v274[0] = *(_WORD *)(v36 + 106);
        v88 = v266;
        if ( (*(_QWORD *)(v36 + 160) & 0xFFFFFFFF00000000ui64) != 0 || *(_DWORD *)(v266 + 40) )
        {
          v276 = 1i64;
        }
        else
        {
          v49 = 0i64;
          v276 = 0i64;
        }
        if ( v281.m_parentShape )
        {
          v89 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(**(_QWORD **)&shapeKeys[0].m_value + 32i64) + 24i64))(**(_QWORD **)&shapeKeys[0].m_value + 32i64);
          v264 = v89;
          v90 = *(float *)&m_value;
          LODWORD(v257) = m_value;
          LOWORD(zero) = v281.m_internal.m_shapeTags[0];
          v265.m_quad.m128_u64[0] = (unsigned __int64)v281.m_parentShape;
          v91 = 0;
          if ( v281.m_shapeTagPath.m_size > 0 )
          {
            v92 = &v281.m_shapeTagPath.m_data[0].m_instanceId;
            v93 = v269;
            v94 = v89;
            v95 = v281.m_shapeTagPath.m_size;
            do
            {
              v96 = *((_QWORD *)v92 - 1);
              v39 = v39 & hknpShapeKeyPath_usedBitsMaskTable[v91] | (((*v92 + 1) << (32 - (v91 + *(_BYTE *)(v96 + 27)))) - 1);
              v91 += *(unsigned __int8 *)(v96 + 27);
              (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v94 + 32i64))(v94, *((unsigned __int16 *)v92 - 8), 5i64, v93, v266, v96, v39, *((_QWORD *)v92 + 1), v274);
              v92 += 8;
              --v95;
            }
            while ( v95 );
            v90 = v257;
            v44 = 0;
            v14 = (hknpContactSolverEvent *)v279;
            v89 = v264;
            v88 = v266;
          }
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, unsigned __int64, float, __int64, __int16 *))(*(_QWORD *)v89 + 32i64))(v89, LOWORD(zero), 5i64, v269, v88, v265.m_quad.m128_u64[0], COERCE_FLOAT(LODWORD(v90)), v263, v274);
          v49 = v276;
        }
        v262[1] = Physics_GetSurfaceFlagsFromUserData(v49);
        hknpContactSolverEvent::calculateManifold(v14, **(const hknpWorld ***)&shapeKeys[0].m_value, &manifoldOut);
        __asm
        {
          vmovups xmm2, xmmword ptr [rbp+0F70h+manifoldOut.m_normal.m_quad]
          vmovups xmmword ptr [rbp+0F70h+normal.m_quad], xmm2
          vpxor   xmm0, xmm0, xmm0
          vpinsrw xmm0, xmm0, eax, 1
          vpshufd xmm1, xmm0, 40h ; '@'
          vxorps  xmm0, xmm1, xmm2
          vmovups [rbp+0F70h+var_F60], xmm0
          vxorps  xmm12, xmm12, xmm12
          vxorps  xmm15, xmm15, xmm15
          vmovups [rbp+0F70h+var_140], xmm15
          vmovups [rbp+0F70h+var_130], xmm12
          vxorps  xmm13, xmm13, xmm13
          vmovups [rbp+0F70h+var_160], xmm13
          vxorps  xmm14, xmm14, xmm14
          vmovups [rbp+0F70h+var_150], xmm14
        }
        ManifoldCollisionCache = hknpContactJacobianUtil::getManifoldCollisionCache(v14->m_contactJacobian);
        if ( ManifoldCollisionCache )
        {
          if ( (ManifoldCollisionCache->m_propertyKeysUsed & 0x10) == 0 || (v107 = (__int16 *)((char *)&ManifoldCollisionCache->hknpCollisionCache + 16 * ManifoldCollisionCache->m_propertiesStartOffsetDiv16 + ((ManifoldCollisionCache->m_propertyOffsets >> 14) & 0x3C))) == NULL )
          {
LABEL_100:
            v281.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
            if ( v281.m_internal.m_shapeBuffer.m_shape )
              ((void (__fastcall *)(hknpShape *, _QWORD))v281.m_internal.m_shapeBuffer.m_shape->~hkBaseObject)(v281.m_internal.m_shapeBuffer.m_shape, 0i64);
            goto LABEL_102;
          }
          LODWORD(v287) = *v107 << 16;
          DWORD1(v287) = v107[1] << 16;
          DWORD2(v287) = v107[2] << 16;
          LODWORD(v288) = v107[3] << 16;
          DWORD1(v288) = v107[4] << 16;
          DWORD2(v288) = v107[5] << 16;
          v285.m_quad.m128_i32[0] = v107[6] << 16;
          v285.m_quad.m128_i32[1] = v107[7] << 16;
          v285.m_quad.m128_i32[2] = v107[8] << 16;
          LODWORD(v286) = v107[9] << 16;
          DWORD1(v286) = v107[10] << 16;
          DWORD2(v286) = v107[11] << 16;
          __asm
          {
            vmovups xmm15, [rbp+0F70h+var_140]
            vmovups xmm14, [rbp+0F70h+var_150]
            vmovups xmm13, [rbp+0F70h+var_160]
          }
        }
        p_velocities = &velocities;
        v109 = 4i64;
        do
        {
          hkSimdFloat32::hkSimdFloat32(p_velocities++);
          --v109;
        }
        while ( v109 );
        _RDI = motionA;
        hknpContactJacobianUtil::getProjVelDiff(v14->m_contactJacobian, motionA, motionB, &normal, &velocities);
        __asm
        {
          vmovups xmm11, xmm12
          vmovups xmm3, xmm12
          vmovups [rbp+0F70h+var_160], xmm3
          vmovups xmm4, xmm12
          vmovups [rbp+0F70h+var_FD0], xmm4
        }
        _ER15 = 0;
        v115 = v14->m_contactJacobian;
        if ( v115 )
        {
          _ER12 = v115->m_info.m_data.m_numPoints;
          if ( v115->m_info.m_data.m_numPoints )
          {
LABEL_84:
            if ( _ER12 )
            {
              _RCX = manifoldOut.m_positions;
              _ZF = v14[1].m_bodyIds == NULL;
              _R13 = v14[1].m_bodyIds;
              _RAX = _R13;
              v121 = _ER12;
              __asm
              {
                vxorps  xmm10, xmm10, xmm10
                vmovups xmm12, [rbp+0F70h+var_130]
              }
              _RSI = motionB;
              do
              {
                __asm
                {
                  vmovups xmm9, xmmword ptr [rcx]
                  vaddps  xmm11, xmm9, xmm11
                  vmovss  xmm0, dword ptr [rax]
                  vucomiss xmm0, xmm10
                }
                if ( !_ZF )
                {
                  __asm
                  {
                    vsubps  xmm7, xmm9, xmmword ptr [rdi]
                    vmovups xmm3, xmmword ptr [rdi+10h]
                    vshufps xmm6, xmm3, xmm3, 0FFh
                    vmulps  xmm0, xmm6, xmm6
                    vsubps  xmm5, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
                    vdpps   xmm1, xmm3, xmm13, 7Fh
                    vmulps  xmm4, xmm1, xmm3
                    vshufps xmm0, xmm13, xmm13, 0C9h ; 'É'
                    vmulps  xmm2, xmm3, xmm0
                    vshufps xmm1, xmm3, xmm3, 0C9h ; 'É'
                    vmulps  xmm0, xmm13, xmm1
                    vsubps  xmm2, xmm2, xmm0
                    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
                    vmulps  xmm3, xmm1, xmm6
                    vmulps  xmm0, xmm13, xmm5
                    vaddps  xmm1, xmm0, xmm4
                    vaddps  xmm2, xmm1, xmm3
                    vaddps  xmm4, xmm2, xmm2
                    vshufps xmm0, xmm7, xmm7, 0C9h ; 'É'
                    vmulps  xmm2, xmm4, xmm0
                    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
                    vmulps  xmm0, xmm7, xmm1
                    vsubps  xmm2, xmm2, xmm0
                    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
                    vaddps  xmm8, xmm15, xmm1
                    vsubps  xmm7, xmm9, xmmword ptr [rsi]
                    vmovups xmm3, xmmword ptr [rsi+10h]
                    vshufps xmm6, xmm3, xmm3, 0FFh
                    vmulps  xmm0, xmm6, xmm6
                    vsubps  xmm5, xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
                    vdpps   xmm1, xmm3, xmm14, 7Fh
                    vmulps  xmm4, xmm1, xmm3
                    vshufps xmm0, xmm14, xmm14, 0C9h ; 'É'
                    vmulps  xmm2, xmm3, xmm0
                    vshufps xmm1, xmm3, xmm3, 0C9h ; 'É'
                    vmulps  xmm0, xmm14, xmm1
                    vsubps  xmm2, xmm2, xmm0
                    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
                    vmulps  xmm3, xmm1, xmm6
                    vmulps  xmm0, xmm14, xmm5
                    vaddps  xmm1, xmm0, xmm4
                    vaddps  xmm2, xmm1, xmm3
                    vaddps  xmm4, xmm2, xmm2
                    vshufps xmm0, xmm7, xmm7, 0C9h ; 'É'
                    vmulps  xmm2, xmm4, xmm0
                    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
                    vmulps  xmm0, xmm7, xmm1
                    vsubps  xmm2, xmm2, xmm0
                    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
                    vaddps  xmm0, xmm12, xmm1
                  }
                  ++_ER15;
                  __asm
                  {
                    vaddps  xmm3, xmm8, [rbp+0F70h+var_160]
                    vmovups [rbp+0F70h+var_160], xmm3
                    vaddps  xmm4, xmm0, [rbp+0F70h+var_FD0]
                    vmovups [rbp+0F70h+var_FD0], xmm4
                  }
                }
                ++_RAX;
                ++_RCX;
                _ZF = --v121 == 0;
              }
              while ( v121 );
              __asm { vxorps  xmm12, xmm12, xmm12 }
              v179 = *(const hknpWorld ***)&shapeKeys[0].m_value;
              if ( _ER15 > 0 )
              {
                __asm
                {
                  vmovd   xmm0, r12d
                  vcvtdq2ps xmm0, xmm0
                  vmovss  xmm2, cs:__real@3f800000
                  vdivss  xmm1, xmm2, xmm0
                  vshufps xmm1, xmm1, xmm1, 0
                  vmulps  xmm8, xmm11, xmm1
                  vmovd   xmm0, r15d
                  vcvtdq2ps xmm0, xmm0
                  vdivss  xmm2, xmm2, xmm0
                  vshufps xmm2, xmm2, xmm2, 0
                  vmulps  xmm1, xmm3, xmm2
                  vmulps  xmm0, xmm4, xmm2
                  vsubps  xmm4, xmm1, xmm0
                  vdpps   xmm5, xmm4, xmm4, 7Fh
                  vcmpleps xmm3, xmm5, xmm12
                  vrsqrtps xmm1, xmm5
                  vmulps  xmm2, xmm1, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
                  vmulps  xmm0, xmm1, xmm5
                  vmulps  xmm1, xmm1, xmm0
                  vmovups xmm0, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
                  vsubps  xmm1, xmm0, xmm1
                  vmulps  xmm2, xmm1, xmm2
                  vandnps xmm0, xmm3, xmm2
                  vmulps  xmm6, xmm0, xmm4
                  vmulps  xmm7, xmm0, xmm5
                  vmovsd  xmm1, qword ptr [rdi+20h]
                  vpxor   xmm4, xmm4, xmm4
                  vpunpcklwd xmm3, xmm4, xmm1
                  vshufps xmm0, xmm3, xmm3, 0FFh
                  vcmpeqps xmm2, xmm12, xmm0
                  vrcpps  xmm1, xmm0
                  vmulps  xmm0, xmm1, xmm0
                  vmovups xmm5, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
                  vsubps  xmm0, xmm5, xmm0
                  vmulps  xmm1, xmm0, xmm1
                  vandnps xmm2, xmm2, xmm1
                  vmovss  dword ptr [rsp+1070h+motionA], xmm2
                }
                _RAX = motionB;
                __asm
                {
                  vmovsd  xmm1, qword ptr [rax+20h]
                  vpunpcklwd xmm3, xmm4, xmm1
                  vshufps xmm0, xmm3, xmm3, 0FFh
                  vcmpeqps xmm4, xmm12, xmm0
                  vrcpps  xmm2, xmm0
                  vmulps  xmm0, xmm2, xmm0
                  vsubps  xmm1, xmm5, xmm0
                  vmulps  xmm2, xmm1, xmm2
                  vandnps xmm0, xmm4, xmm2
                  vmovss  dword ptr [rsp+1070h+motionA+4], xmm0
                  vdpps   xmm0, xmm6, [rbp+0F70h+var_F60], 0F70h+var_F40.m_shapeTagPath.m_data+7; X
                }
                *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
                __asm
                {
                  vmovss  xmm2, cs:__real@3fc90fdb; max
                  vmovss  xmm1, cs:__real@bfc90fdb; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vmovaps xmm2, xmm0 }
                v232 = 0i64;
                _RAX = &velocities;
                __asm
                {
                  vmovss  xmm3, cs:__real@3fb33333
                  vmovss  xmm5, cs:__real@bdcccccd
                  vmovss  xmm4, cs:__real@3dcccccd
                }
                do
                {
                  __asm { vcomiss xmm2, xmm3 }
                  if ( !_CF )
                    break;
                  __asm
                  {
                    vmovss  xmm1, dword ptr [r13+0]
                    vucomiss xmm1, xmm10
                  }
                  if ( !v230 )
                  {
                    __asm
                    {
                      vmovups xmm0, xmmword ptr [rax]
                      vdivss  xmm1, xmm0, xmm7
                      vcomiss xmm1, xmm5
                    }
                    if ( _CF )
                    {
                      __asm { vcomiss xmm7, xmm4 }
                      if ( !_CF && !v230 )
                        ++v44;
                    }
                  }
                  ++v232;
                  ++_R13;
                  ++_RAX;
                  _CF = v232 < (unsigned __int64)_ER12;
                  v230 = v232 == _ER12;
                }
                while ( v232 < _ER12 );
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbp+0F70h+normal.m_quad]
                  vmovdqa [rbp+0F70h+var_FD0], xmm8
                  vmovss  [rsp+1070h+var_1020], xmm2
                }
                v241 = *v179;
                __asm
                {
                  vmovdqa [rbp+0F70h+var_160], xmm0
                  vmovss  dword ptr [rsp+1070h+var_1030], xmm7
                }
                if ( v268 == 1 )
                  HavokPhysicsSVFX_AddNewContact(v241, (const hknpBodyId *)key, &v258, _ER15, v44, &v265, &v285, v262, v254, (const float *)&motionA, v255);
                else
                  HavokPhysicsSVFX_UpdateContact(v241, (const hknpBodyId *)key, &v258, _ER15, v44, &v265, &v285, v262, v254, (const float *)&motionA, v255);
              }
            }
            goto LABEL_100;
          }
        }
        else
        {
          _ER12 = 0;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 817, ASSERT_TYPE_ASSERT, "(numContactPoints > 0)", (const char *)&queryFormat, "numContactPoints > 0") )
          __debugbreak();
        _RDI = motionA;
        __asm
        {
          vmovups xmm4, xmm12
          vmovups xmm3, xmm12
        }
        goto LABEL_84;
      }
    }
    else
    {
      v258.m_value = -1;
    }
    m_value = -1;
    goto LABEL_40;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_102;
    goto LABEL_5;
  }
  v21 = *(const hknpStreamContactJacobian **)&event[2].m_secondaryType;
  if ( v21 )
  {
    v29 = hknpStreamContactJacobianUtil::getJacModHdr(v21);
    shapeKeys[0] = hknpStreamContactJacobianUtil::getJacModMfoldData(v29)->m_shapeKeyA;
    v30 = v14->m_contactJacobian;
    if ( v30 )
    {
      v31 = hknpStreamContactJacobianUtil::getJacModHdr(v30);
      shapeKeys[1] = hknpStreamContactJacobianUtil::getJacModMfoldData(v31)->m_shapeKeyB;
    }
    else
    {
      shapeKeys[1].m_value = -1;
    }
    HavokPhysicsSVFX_RemoveContact(input->m_world, v14->m_bodyIds, shapeKeys);
  }
  else
  {
    p_m_filterBits = (const hknpBodyId *)&event[1].m_filterBits;
    m_world = input->m_world;
    if ( !input->m_world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 592, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    if ( !p_m_filterBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 593, ASSERT_TYPE_ASSERT, "(bodyIds)", (const char *)&queryFormat, "bodyIds") )
      __debugbreak();
    m_userData = m_world->m_userData;
    if ( (p_m_filterBits[1].m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
    {
      HavokPhysicsSVFX_RemoveAllContacts(m_world, (const hknpBodyId)p_m_filterBits->m_serialAndIndex);
    }
    else if ( (p_m_filterBits->m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
    {
      HavokPhysicsSVFX_RemoveAllContacts(m_world, p_m_filterBits[1]);
    }
    else
    {
      key = HavokPhysicsSVFX_MakeKey(p_m_filterBits);
      v25 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsSVFXWorlds[m_userData].contactIndirection->m_map, &key);
      contactIndirection = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
      if ( v25 <= contactIndirection->m_map.m_hashMod )
      {
        val = contactIndirection->m_map.m_elem[v25].val;
        if ( val >= s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size )
        {
          LODWORD(v253) = contactIndirection->m_map.m_elem[v25].val;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 623, ASSERT_TYPE_ASSERT, "(unsigned)( contactIndex ) < (unsigned)( fxWorld->contacts->getSize() )", "contactIndex doesn't index fxWorld->contacts->getSize()\n\t%i not in [0, %i)", v253, s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size) )
            __debugbreak();
        }
        for ( ; val != -1; val = v28->next )
        {
          v28 = &s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[val];
          v28->isValid = 0;
          v28->eventFlags |= 4u;
        }
      }
    }
  }
LABEL_102:
  _R11 = &v300;
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
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
HavokPhysicsSVFX_OrderEventsForSound
==============
*/
hkBool *HavokPhysicsSVFX_OrderEventsForSound(hkBool *result, HavokPhysicsSVFXContact **a, HavokPhysicsSVFXContact **b)
{
  PhysicsSFXEventAsset *sfxEventAsset; 
  PhysicsSFXEventAsset *v7; 
  int priority; 
  int v9; 

  _R9 = *a;
  sfxEventAsset = (*a)->sfxEventAsset;
  if ( sfxEventAsset )
  {
    _RAX = *b;
    v7 = (*b)->sfxEventAsset;
    if ( v7 )
    {
      priority = sfxEventAsset->priority;
      v9 = v7->priority;
      if ( priority == v9 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r9+78h]
          vcomiss xmm0, dword ptr [rax+78h]
        }
        result->m_bool = priority < (unsigned int)v9;
      }
      else
      {
        result->m_bool = priority > v9;
      }
      return result;
    }
    else
    {
      result->m_bool = 1;
      return result;
    }
  }
  else
  {
    result->m_bool = 0;
    return result;
  }
}

/*
==============
HavokPhysicsSVFX_OrderEventsForVisuals
==============
*/
hkBool *HavokPhysicsSVFX_OrderEventsForVisuals(hkBool *result, HavokPhysicsSVFXContact **a, HavokPhysicsSVFXContact **b)
{
  PhysicsVFXEventAsset *v4; 
  PhysicsVFXEventAsset *vfxEventAsset; 
  int priority; 

  _R9 = *a;
  if ( *a && (v4 = _R9->vfxEventAsset) != NULL )
  {
    _RAX = *b;
    if ( *b && (vfxEventAsset = _RAX->vfxEventAsset) != NULL )
    {
      priority = v4->priority;
      if ( priority == vfxEventAsset->priority )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r9+78h]
          vcomiss xmm0, dword ptr [rax+78h]
        }
        result->m_bool = (unsigned int)priority < vfxEventAsset->priority;
      }
      else
      {
        result->m_bool = priority > vfxEventAsset->priority;
      }
      return result;
    }
    else
    {
      result->m_bool = 1;
      return result;
    }
  }
  else
  {
    result->m_bool = 0;
    return result;
  }
}

/*
==============
HavokPhysicsSVFX_PlayHitEvents
==============
*/
void HavokPhysicsSVFX_PlayHitEvents(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *potentialEventList; 
  int m_size; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *v15; 
  HavokPhysicsSVFXContact **m_data; 
  unsigned __int64 v23; 
  bool v24; 
  unsigned __int64 v38; 
  int v39; 
  HavokPhysicsSVFXContact **v45; 
  unsigned __int64 v46; 
  bool v47; 
  int time; 
  const char **p_hitParticleEffectAlias; 
  const char *v62; 
  ParticleSystemHandle v69; 
  unsigned __int64 bodyIDKey_high; 
  unsigned __int8 *vfxBodyCount; 
  unsigned __int64 v72; 
  char v73; 
  unsigned __int64 v76; 
  __int64 duration; 
  ParticleSystemFlags particleSystemFlags; 
  __int128 v83; 
  vec4_t quatOut; 
  float4 emitterOrientationQuat; 
  float4 emitterPos; 
  char _Buffer[256]; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v6 = worldId;
  _R13 = 0x140000000ui64;
  v8 = worldId;
  v9 = localClientNum;
  potentialEventList = s_havokPhysicsSVFXWorlds[v8].potentialEventList;
  m_size = potentialEventList->m_size;
  if ( m_size > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFXContact *,hkBool (*)(HavokPhysicsSVFXContact * &,HavokPhysicsSVFXContact * &)>(potentialEventList->m_data, 0, m_size - 1, HavokPhysicsSVFX_OrderEventsForSound);
    potentialEventList = s_havokPhysicsSVFXWorlds[v8].potentialEventList;
  }
  __asm
  {
    vmovss  xmm8, cs:__real@42652ee0
    vmovss  xmm6, cs:__real@3f800000
  }
  _RSI = 5 * v6;
  v15 = potentialEventList;
  __asm
  {
    vmovss  xmm0, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitSoundsRegainedPerFrame[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
    vaddss  xmm1, xmm0, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitSoundsRemaining[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.maxNumHitSounds[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
    vmaxss  xmm1, xmm1, xmm0
    vmovss  rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitSoundsRemaining[r13+rsi*8], xmm1; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
  }
  m_data = potentialEventList->m_data;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v23 = (unsigned __int64)&potentialEventList->m_data[potentialEventList->m_size];
  v24 = potentialEventList->m_data < (HavokPhysicsSVFXContact **)v23;
  if ( potentialEventList->m_data != (HavokPhysicsSVFXContact **)v23 )
  {
    do
    {
      __asm { vcomiss xmm7, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitSoundsRemaining[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas }
      if ( !v24 )
        break;
      if ( !*m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1962, ASSERT_TYPE_ASSERT, "(*contactIt)", (const char *)&queryFormat, "*contactIt") )
        __debugbreak();
      if ( physicsSVFX_debugDrawSFXHits )
      {
        if ( physicsSVFX_debugDrawSFXHitsTime )
        {
          if ( physicsSVFX_debugDrawSFXHits->current.enabled )
          {
            _RAX = physicsSVFX_debugDrawSFXHitsSpeedThreshold;
            if ( physicsSVFX_debugDrawSFXHitsSpeedThreshold )
            {
              _RCX = physicsSVFX_debugDrawSFXHitsAngleThreshold;
              if ( physicsSVFX_debugDrawSFXHitsAngleThreshold )
              {
                _RDX = *m_data;
                __asm
                {
                  vmovss  xmm2, dword ptr [rdx+58h]
                  vcomiss xmm2, dword ptr [rax+28h]
                  vmovss  xmm0, dword ptr [rdx+5Ch]
                  vmulss  xmm1, xmm0, xmm8
                  vcomiss xmm1, dword ptr [rcx+28h]
                }
                if ( !physicsSVFX_debugDrawSFXHitsAngleThreshold )
                {
                  __asm
                  {
                    vcvtss2sd xmm3, xmm1, xmm1
                    vcvtss2sd xmm2, xmm2, xmm2
                    vmovq   r9, xmm3
                    vmovq   r8, xmm2
                  }
                  j_sprintf(_Buffer, "S:%.2f A:%.2f", *(double *)&_XMM2, *(double *)&_XMM3);
                  __asm { vmovaps xmm2, xmm6; scale }
                  CL_AddDebugString(&(*m_data)->position, &colorWhite, *(float *)&_XMM2, _Buffer, 0, physicsSVFX_debugDrawSFXHitsTime->current.integer);
                }
              }
            }
          }
        }
      }
      if ( HavokPhysicsSVFX_PlayHitSound((Physics_WorldId)v6, *m_data, (LocalClientNum_t)v9) )
      {
        __asm
        {
          vmovss  xmm0, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitSoundsRemaining[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
          vsubss  xmm1, xmm0, xmm6
          vmovss  rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitSoundsRemaining[r13+rsi*8], xmm1; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
        }
      }
      v15 = s_havokPhysicsSVFXWorlds[v8].potentialEventList;
      ++m_data;
      potentialEventList = v15;
      v38 = (unsigned __int64)&v15->m_data[v15->m_size];
      v24 = (unsigned __int64)m_data < v38;
    }
    while ( m_data != (HavokPhysicsSVFXContact **)v38 );
  }
  v39 = v15->m_size;
  if ( v39 > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFXContact *,hkBool (*)(HavokPhysicsSVFXContact * &,HavokPhysicsSVFXContact * &)>(v15->m_data, 0, v39 - 1, HavokPhysicsSVFX_OrderEventsForVisuals);
    potentialEventList = s_havokPhysicsSVFXWorlds[v8].potentialEventList;
  }
  __asm
  {
    vmovss  xmm0, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitParticlesRegainedPerFrame[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
    vaddss  xmm1, xmm0, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitParticlesRemaining[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.maxNumHitParticles[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
    vmaxss  xmm1, xmm1, xmm0
    vmovss  rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitParticlesRemaining[r13+rsi*8], xmm1; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
  }
  v45 = potentialEventList->m_data;
  v46 = (unsigned __int64)&potentialEventList->m_data[potentialEventList->m_size];
  v47 = potentialEventList->m_data < (HavokPhysicsSVFXContact **)v46;
  if ( potentialEventList->m_data == (HavokPhysicsSVFXContact **)v46 )
  {
    potentialEventList->m_size = 0;
  }
  else
  {
    do
    {
      __asm { vcomiss xmm7, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitParticlesRemaining[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas }
      if ( !v47 )
        break;
      if ( !*v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1988, ASSERT_TYPE_ASSERT, "(*contactIt)", (const char *)&queryFormat, "*contactIt") )
        __debugbreak();
      if ( physicsSVFX_debugDrawVFXHits )
      {
        if ( physicsSVFX_debugDrawVFXHitsTime )
        {
          if ( physicsSVFX_debugDrawVFXHits->current.enabled )
          {
            _RAX = physicsSVFX_debugDrawVFXHitsSpeedThreshold;
            if ( physicsSVFX_debugDrawVFXHitsSpeedThreshold )
            {
              _RDX = physicsSVFX_debugDrawVFXHitsAngleThreshold;
              if ( physicsSVFX_debugDrawVFXHitsAngleThreshold )
              {
                _RCX = *v45;
                __asm
                {
                  vmovss  xmm2, dword ptr [rcx+58h]
                  vcomiss xmm2, dword ptr [rax+28h]
                  vmovss  xmm0, dword ptr [rcx+5Ch]
                  vmulss  xmm1, xmm0, xmm8
                  vcomiss xmm1, dword ptr [rdx+28h]
                }
                if ( !physicsSVFX_debugDrawVFXHitsAngleThreshold )
                {
                  __asm
                  {
                    vcvtss2sd xmm3, xmm1, xmm1
                    vcvtss2sd xmm2, xmm2, xmm2
                    vmovq   r9, xmm3
                    vmovq   r8, xmm2
                  }
                  j_sprintf(_Buffer, "S:%.2f A:%.2f", *(double *)&_XMM2, *(double *)&_XMM3);
                  __asm { vmovaps xmm2, xmm6; scale }
                  CL_AddDebugString(&(*v45)->position, &colorWhite, *(float *)&_XMM2, _Buffer, 0, physicsSVFX_debugDrawVFXHitsTime->current.integer);
                }
              }
            }
          }
        }
      }
      _RBX = *v45;
      if ( !*v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1688, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
        __debugbreak();
      time = CG_GetLocalClientGlobals((const LocalClientNum_t)v9)->time;
      p_hitParticleEffectAlias = (const char **)&_RBX->vfxRule->hitParticleEffectAlias;
      if ( p_hitParticleEffectAlias )
      {
        v62 = *p_hitParticleEffectAlias;
        if ( *p_hitParticleEffectAlias )
        {
          if ( *v62 )
          {
            if ( (unsigned int)v9 >= 2 )
            {
              LODWORD(particleSystemFlags) = 2;
              LODWORD(duration) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", duration, particleSystemFlags) )
                __debugbreak();
            }
            __asm { vmovss  xmm0, dword ptr [rbx+28h] }
            HIDWORD(v83) = 0;
            __asm
            {
              vmovups xmm3, xmmword ptr [rsp+50h]
              vmovss  xmm3, xmm3, xmm0
              vinsertps xmm3, xmm3, dword ptr [rbx+2Ch], 10h
              vinsertps xmm3, xmm3, dword ptr [rbx+30h], 20h ; ' '
              vmovups xmmword ptr [rsp+50h], xmm3
              vmovups xmmword ptr [rsp+208h+emitterPos.v], xmm3
            }
            HavokPhysicsSVFX_GetParticleRotation(_RBX, &quatOut);
            __asm
            {
              vmovups xmm0, xmmword ptr [rsp+208h+quatOut]
              vmovups xmmword ptr [rsp+208h+emitterOrientationQuat.v], xmm0
            }
            v69 = ParticleManager::AddSystemByName(&g_particleManager[v9], (LocalClientNum_t)v9, v62, &emitterPos, &emitterOrientationQuat, time, PARTICLE_SYSTEM_FLAG_AUTO_DELETE, NULL);
            if ( _RBX->vfxAssetIndex )
              LODWORD(bodyIDKey_high) = _RBX->bodyIDKey;
            else
              bodyIDKey_high = HIDWORD(_RBX->bodyIDKey);
            vfxBodyCount = s_havokPhysicsSVFXWorlds[v8].vfxBodyCount;
            v72 = bodyIDKey_high & 0xFFFFFF;
            v73 = -1;
            if ( (unsigned int)vfxBodyCount[v72] + 1 < 0xFF )
              v73 = vfxBodyCount[v72] + 1;
            vfxBodyCount[v72] = v73;
            if ( v69 )
            {
              __asm
              {
                vmovss  xmm0, rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitParticlesRemaining[r13+rsi*8]; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
                vsubss  xmm1, xmm0, xmm6
                vmovss  rva ?s_havokPhysicsSVFXWorldDatas@@3PAUHavokPhysicsSVFX_WorldData@@A.numHitParticlesRemaining[r13+rsi*8], xmm1; HavokPhysicsSVFX_WorldData near * s_havokPhysicsSVFXWorldDatas
              }
            }
          }
        }
      }
      potentialEventList = s_havokPhysicsSVFXWorlds[v8].potentialEventList;
      ++v45;
      v76 = (unsigned __int64)&potentialEventList->m_data[potentialEventList->m_size];
      v47 = (unsigned __int64)v45 < v76;
    }
    while ( v45 != (HavokPhysicsSVFXContact **)v76 );
    potentialEventList->m_size = 0;
  }
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
HavokPhysicsSVFX_PlayHitSound
==============
*/
bool HavokPhysicsSVFX_PlayHitSound(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum)
{
  __int64 v4; 
  const char **p_hitSoundAlias; 
  const char *v8; 
  unsigned __int64 bodyIDKey_high; 
  unsigned __int64 v10; 
  char v11; 
  unsigned __int8 *sfxBodyCount; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  bool v15; 
  unsigned __int8 v16; 
  char v17; 
  bool v18; 
  unsigned __int64 PhysicsSndEntHandle; 
  unsigned __int64 v21; 
  bool v22; 
  float fmt; 

  v4 = worldId;
  _RBX = contact;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1631, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  p_hitSoundAlias = (const char **)&_RBX->sfxRule->hitSoundAlias;
  if ( !p_hitSoundAlias )
    return 0;
  v8 = *p_hitSoundAlias;
  if ( !*p_hitSoundAlias || !*v8 )
    return 0;
  if ( _RBX->sfxAssetIndex )
    LODWORD(bodyIDKey_high) = _RBX->bodyIDKey;
  else
    bodyIDKey_high = HIDWORD(_RBX->bodyIDKey);
  v10 = bodyIDKey_high & 0xFFFFFF;
  v11 = -1;
  sfxBodyCount = s_havokPhysicsSVFXWorlds[v4].sfxBodyCount;
  if ( (unsigned int)sfxBodyCount[v10] + 1 < 0xFF )
    v11 = sfxBodyCount[v10] + 1;
  sfxBodyCount[v10] = v11;
  if ( !HavokPhysics_IsRigidBodyValid((Physics_WorldId)v4, (hknpBodyId)bodyIDKey_high) )
    return 0;
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  Ref = HavokPhysics_GetRef((Physics_WorldId)v4, (hknpBodyId)bodyIDKey_high);
  RefSystem = Physics_GetRefSystem(Ref);
  v15 = RefSystem == Physics_RefSystem_Ragdoll;
  if ( RefSystem == Physics_RefSystem_Ragdoll )
    LODWORD(bodyIDKey_high) = Physics_GetRefSubSystem(Ref);
  v16 = truncate_cast<unsigned char,enum Physics_WorldId>((Physics_WorldId)v4);
  PhysicsSndEntHandle = CG_GeneratePhysicsSndEntHandle(localClientNum, v16, v15, bodyIDKey_high);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+90h]
  }
  v21 = PhysicsSndEntHandle;
  if ( !(v17 | v18) )
  {
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1664, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundVolumeScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundVolumeScalar >= 0.f");
    v17 = 0;
    v18 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm6, dword ptr [rbx+94h]
    vmovaps xmm6, [rsp+88h+var_38]
  }
  if ( !(v17 | v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1665, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundPitchScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundPitchScalar >= 0.f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+94h]
    vmovss  xmm3, dword ptr [rbx+90h]; volumeScale
    vmovss  dword ptr [rsp+88h+fmt], xmm0
  }
  return SND_PlaySurfaceSound(v8, (_RBX->surfaceFlagData[1 - _RBX->sfxAssetIndex] >> 19) & 0x3F, v21, *(float *)&_XMM3, fmt, 0, &_RBX->position) != 0;
}

/*
==============
HavokPhysicsSVFX_PlayScrapeEvents
==============
*/
void HavokPhysicsSVFX_PlayScrapeEvents(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v4; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> **p_potentialEventList; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *v6; 
  int m_size; 
  HavokPhysicsSVFXContact **m_data; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *v9; 
  int v10; 
  HavokPhysicsSVFXContact **v11; 

  v2 = worldId;
  v4 = worldId;
  p_potentialEventList = &s_havokPhysicsSVFXWorlds[worldId].potentialEventList;
  v6 = *p_potentialEventList;
  m_size = (*p_potentialEventList)->m_size;
  if ( m_size > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFXContact *,hkBool (*)(HavokPhysicsSVFXContact * &,HavokPhysicsSVFXContact * &)>(v6->m_data, 0, m_size - 1, HavokPhysicsSVFX_OrderEventsForSound);
    v6 = *p_potentialEventList;
  }
  m_data = v6->m_data;
  v9 = v6;
  if ( v6->m_data != &v6->m_data[v6->m_size] )
  {
    do
    {
      if ( s_havokPhysicsSVFXWorldDatas[v2].numScrapeSoundsPlaying >= s_havokPhysicsSVFXWorldDatas[v2].maxNumScrapeSounds )
        break;
      if ( !*m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2023, ASSERT_TYPE_ASSERT, "(*contactIt)", (const char *)&queryFormat, "*contactIt") )
        __debugbreak();
      HavokPhysicsSVFX_PlayScrapeSound((Physics_WorldId)v2, *m_data, localClientNum);
      v9 = *p_potentialEventList;
      ++m_data;
      v6 = *p_potentialEventList;
    }
    while ( m_data != &(*p_potentialEventList)->m_data[(*p_potentialEventList)->m_size] );
    v4 = v2;
  }
  v10 = v9->m_size;
  if ( v10 > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFXContact *,hkBool (*)(HavokPhysicsSVFXContact * &,HavokPhysicsSVFXContact * &)>(v9->m_data, 0, v10 - 1, HavokPhysicsSVFX_OrderEventsForVisuals);
    v6 = *p_potentialEventList;
  }
  v11 = v6->m_data;
  if ( v6->m_data != &v6->m_data[v6->m_size] )
  {
    do
    {
      if ( s_havokPhysicsSVFXWorldDatas[v4].numScrapeParticlesPlaying >= s_havokPhysicsSVFXWorldDatas[v4].maxNumScrapeParticles )
        break;
      if ( !*v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2033, ASSERT_TYPE_ASSERT, "(*contactIt)", (const char *)&queryFormat, "*contactIt") )
        __debugbreak();
      HavokPhysicsSVFX_PlayScrapeParticle((Physics_WorldId)v2, *v11, localClientNum);
      v6 = *p_potentialEventList;
      ++v11;
    }
    while ( v11 != &(*p_potentialEventList)->m_data[(*p_potentialEventList)->m_size] );
  }
  v6->m_size = 0;
}

/*
==============
HavokPhysicsSVFX_PlayScrapeParticle
==============
*/
bool HavokPhysicsSVFX_PlayScrapeParticle(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  int spawnTimeMsec; 
  PhysicsVFXEventAssetParticleEffectRule *vfxRule; 
  const char *scrapeParticleEffectAlias; 
  ParticleManager *ParticleManager; 
  ParticleManager *v11; 
  ParticleSystemHandle v18; 
  float4 emitterPos; 
  vec4_t quatOut; 
  float4 emitterOrientationQuat; 

  v3 = worldId;
  _RDI = contact;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1847, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  spawnTimeMsec = CG_GetLocalClientGlobals(localClientNum)->time;
  vfxRule = _RDI->vfxRule;
  _RDI->scrapeData.vfxScrapeRule = vfxRule;
  if ( !vfxRule )
    return 0;
  scrapeParticleEffectAlias = vfxRule->scrapeParticleEffectAlias;
  if ( !scrapeParticleEffectAlias || !*scrapeParticleEffectAlias )
    return 0;
  ParticleManager = ParticleManager::GetParticleManager(localClientNum);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  v11 = ParticleManager;
  emitterPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+40h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdi+2Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+30h], 20h ; ' '
    vmovups xmmword ptr [rsp+40h], xmm3
    vmovups xmmword ptr [rsp+40h], xmm3
  }
  HavokPhysicsSVFX_GetParticleRotation(_RDI, &quatOut);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0A8h+quatOut]
    vmovups xmmword ptr [rsp+0A8h+emitterOrientationQuat.v], xmm0
  }
  v18 = ParticleManager::AddSystemByName(v11, localClientNum, scrapeParticleEffectAlias, &emitterPos, &emitterOrientationQuat, spawnTimeMsec, PARTICLE_SYSTEM_FLAG_AUTO_DELETE, NULL);
  _RDI->scrapeData.particleSystem = v18;
  if ( v18 )
  {
    ++s_havokPhysicsSVFXWorldDatas[v3].numScrapeParticlesPlaying;
    _RDI->scrapeData.updateTimer = 0.0;
  }
  return v18 != PARTICLE_SYSTEM_INVALID_HANDLE;
}

/*
==============
HavokPhysicsSVFX_PlayScrapeSound
==============
*/
bool HavokPhysicsSVFX_PlayScrapeSound(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum)
{
  __int64 v5; 
  const char *scrapeSoundAlias; 
  bool v10; 
  bool v14; 
  unsigned __int64 bodyIDKey_high; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  bool v28; 
  unsigned __int8 v29; 
  unsigned __int64 PhysicsSndEntHandle; 
  int v32; 
  float fmt; 

  v5 = worldId;
  _RBX = contact;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1738, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  _RAX = _RBX->sfxRule;
  _RBX->scrapeData.sfxScrapeRule = _RAX;
  if ( !_RAX )
    return 0;
  scrapeSoundAlias = _RAX->scrapeSoundAlias;
  if ( !scrapeSoundAlias )
    return 0;
  v10 = *scrapeSoundAlias == 0;
  if ( !*scrapeSoundAlias )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+10h]
    vcomiss xmm0, dword ptr [rax+14h]
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm6, xmm7
  }
  if ( *scrapeSoundAlias )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1756, ASSERT_TYPE_ASSERT, "(contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax >= contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin)", (const char *)&queryFormat, "contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax >= contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin");
    v10 = !v14;
    if ( v14 )
      __debugbreak();
  }
  _RAX = _RBX->scrapeData.sfxScrapeRule;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+10h]
    vmovss  xmm3, dword ptr [rax+14h]
    vucomiss xmm1, xmm3
  }
  if ( !v10 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vsubss  xmm2, xmm0, xmm1
      vsubss  xmm1, xmm3, xmm1
      vdivss  xmm0, xmm2, xmm1; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm6, xmm0 }
  }
  v10 = _RBX->sfxAssetIndex == 0;
  __asm
  {
    vmovss  dword ptr [rbx+0A4h], xmm6
    vmovaps xmm6, [rsp+68h+var_28]
  }
  if ( v10 )
    bodyIDKey_high = HIDWORD(_RBX->bodyIDKey);
  else
    LODWORD(bodyIDKey_high) = _RBX->bodyIDKey;
  Ref = HavokPhysics_GetRef((Physics_WorldId)v5, (hknpBodyId)bodyIDKey_high);
  RefSystem = Physics_GetRefSystem(Ref);
  v28 = RefSystem == Physics_RefSystem_Ragdoll;
  if ( RefSystem == Physics_RefSystem_Ragdoll )
    LODWORD(bodyIDKey_high) = Physics_GetRefSubSystem(Ref);
  v29 = truncate_cast<unsigned char,enum Physics_WorldId>((Physics_WorldId)v5);
  PhysicsSndEntHandle = CG_GeneratePhysicsSndEntHandle(localClientNum, v29, v28, bodyIDKey_high);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+0A4h]; volume
    vmovss  dword ptr [rsp+68h+fmt], xmm7
  }
  v32 = SND_PlayVirtualLoopSound(scrapeSoundAlias, PhysicsSndEntHandle, &_RBX->position, *(float *)&_XMM3, fmt);
  __asm { vmovaps xmm7, [rsp+68h+var_38] }
  _RBX->scrapeData.sndId = v32;
  if ( v32 != -1 )
  {
    ++s_havokPhysicsSVFXWorldDatas[v5].numScrapeSoundsPlaying;
    _RBX->scrapeData.updateTimer = 0.0;
  }
  return v32 != -1;
}

/*
==============
HavokPhysicsSVFX_RegisterBody
==============
*/
void HavokPhysicsSVFX_RegisterBody(Physics_WorldId worldId, hknpBodyId bodyId, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  unsigned int v5; 

  v3 = worldId;
  HavokPhysics_SubscribeToEvent(worldId, CONTACT_IMPULSE, bodyId, HavokPhysicsSVFX_OnContactImpulseEvent, "SVFX");
  v5 = bodyId.m_serialAndIndex & 0xFFFFFF;
  s_havokPhysicsSVFXWorlds[v3].sfxBodyCount[v5] = 0;
  s_havokPhysicsSVFXWorlds[v3].vfxBodyCount[v5] = 0;
}

/*
==============
HavokPhysicsSVFX_RegisterWorld
==============
*/
void HavokPhysicsSVFX_RegisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum, unsigned int rigidBodyCount)
{
  __int64 v3; 
  __int64 v5; 
  hkMemoryRouter *Value; 
  HavokPhysics_VelocityCachingModifier *v7; 
  hkMemoryRouter *v8; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v9; 
  hkMemoryRouter *v10; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *v11; 
  hkMemoryRouter *v12; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *v13; 
  char *v14; 

  v3 = rigidBodyCount;
  v5 = worldId;
  if ( !s_havokPhysicsSVFXWorlds[v5].isInitialized )
  {
    if ( s_havokPhysicsSVFXWorlds[v5].velocityCachingModifier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 953, ASSERT_TYPE_ASSERT, "(!s_havokPhysicsSVFXWorlds[worldId].velocityCachingModifier)", (const char *)&queryFormat, "!s_havokPhysicsSVFXWorlds[worldId].velocityCachingModifier", -2i64) )
      __debugbreak();
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v7 = (HavokPhysics_VelocityCachingModifier *)Value->m_heap->blockAlloc(Value->m_heap, 8i64);
    if ( v7 )
      v7->__vftable = (HavokPhysics_VelocityCachingModifier_vtbl *)&HavokPhysics_VelocityCachingModifier::`vftable';
    else
      v7 = NULL;
    s_havokPhysicsSVFXWorlds[v5].velocityCachingModifier = v7;
    HavokPhysics_AddModifier(worldId, v7);
    if ( s_havokPhysicsSVFXWorlds[v5].contacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 958, ASSERT_TYPE_ASSERT, "(!s_havokPhysicsSVFXWorlds[worldId].contacts)", (const char *)&queryFormat, "!s_havokPhysicsSVFXWorlds[worldId].contacts") )
      __debugbreak();
    v8 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v8 )
      v8 = hkMemoryRouter::s_fallbackRouter;
    v9 = (hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *)v8->m_heap->blockAlloc(v8->m_heap, 16i64);
    if ( v9 )
    {
      v9->m_data = NULL;
      v9->m_size = 0;
      v9->m_capacityAndFlags = 0x80000000;
    }
    else
    {
      v9 = NULL;
    }
    s_havokPhysicsSVFXWorlds[v5].contacts = v9;
    if ( s_havokPhysicsSVFXWorlds[v5].contactIndirection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 960, ASSERT_TYPE_ASSERT, "(!s_havokPhysicsSVFXWorlds[worldId].contactIndirection)", (const char *)&queryFormat, "!s_havokPhysicsSVFXWorlds[worldId].contactIndirection") )
      __debugbreak();
    v10 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v10 )
      v10 = hkMemoryRouter::s_fallbackRouter;
    v11 = (hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *)v10->m_heap->blockAlloc(v10->m_heap, 16i64);
    if ( v11 )
    {
      v11->m_map.m_elem = NULL;
      v11->m_map.m_numElems = 0;
      v11->m_map.m_hashMod = -1;
    }
    else
    {
      v11 = NULL;
    }
    s_havokPhysicsSVFXWorlds[v5].contactIndirection = v11;
    if ( s_havokPhysicsSVFXWorlds[v5].potentialEventList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 964, ASSERT_TYPE_ASSERT, "(!s_havokPhysicsSVFXWorlds[worldId].potentialEventList)", (const char *)&queryFormat, "!s_havokPhysicsSVFXWorlds[worldId].potentialEventList") )
      __debugbreak();
    v12 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v12 )
      v12 = hkMemoryRouter::s_fallbackRouter;
    v13 = (hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *)v12->m_heap->blockAlloc(v12->m_heap, 16i64);
    if ( v13 )
    {
      v13->m_data = NULL;
      v13->m_size = 0;
      v13->m_capacityAndFlags = 0x80000000;
    }
    else
    {
      v13 = NULL;
    }
    s_havokPhysicsSVFXWorlds[v5].potentialEventList = v13;
    v14 = (char *)Mem_Virtual_Alloc((unsigned int)(2 * v3), "PhysicsSVFX_CountBuffers", TRACK_MISC);
    memset_0(v14, 0, (unsigned int)(2 * v3));
    s_havokPhysicsSVFXWorlds[v5].sfxBodyCount = (unsigned __int8 *)v14;
    s_havokPhysicsSVFXWorlds[v5].vfxBodyCount = (unsigned __int8 *)&v14[v3];
    s_havokPhysicsSVFXWorlds[v5].isInitialized = 1;
  }
}

/*
==============
HavokPhysicsSVFX_RemoveAllContacts
==============
*/
void HavokPhysicsSVFX_RemoveAllContacts(const hknpWorld *world, const hknpBodyId bodyId)
{
  __int64 m_serialAndIndex; 
  unsigned __int64 m_userData; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> **p_contactIndirection; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 m_hashMod; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *m_elem; 
  __int64 i; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> **p_contacts; 
  unsigned int val; 
  unsigned __int64 key; 
  int v16; 
  __int64 v17; 
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64> >::Pair *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  m_serialAndIndex = bodyId.m_serialAndIndex;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 548, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 549, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", (const char *)&queryFormat, "bodyId.isValid()") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 285, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", (const char *)&queryFormat, "bodyId.isValid()") )
      __debugbreak();
  }
  m_userData = world->m_userData;
  contactIndirection = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  p_contactIndirection = &s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  v7 = m_serialAndIndex << 32;
  v8 = 0;
  v9 = m_serialAndIndex;
  m_hashMod = contactIndirection->m_map.m_hashMod;
  if ( (int)m_hashMod >= 0 )
  {
    m_elem = contactIndirection->m_map.m_elem;
    for ( i = 0i64; i <= m_hashMod; ++i )
    {
      if ( m_elem->key != -1i64 )
        break;
      ++v8;
      ++m_elem;
    }
  }
  if ( v8 <= (int)m_hashMod )
  {
    p_contacts = &s_havokPhysicsSVFXWorlds[m_userData].contacts;
    do
    {
      val = contactIndirection->m_map.m_elem[v8].val;
      key = contactIndirection->m_map.m_elem[v8].key;
      if ( val >= (*p_contacts)->m_size )
      {
        LODWORD(v21) = (*p_contacts)->m_size;
        LODWORD(v20) = contactIndirection->m_map.m_elem[v8].val;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( contactIndex ) < (unsigned)( fxWorld->contacts->getSize() )", "contactIndex doesn't index fxWorld->contacts->getSize()\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v16 = v8 + 1;
      if ( v8 + 1 <= (*p_contactIndirection)->m_map.m_hashMod )
      {
        v17 = v16;
        v18 = &(*p_contactIndirection)->m_map.m_elem[v16];
        do
        {
          if ( v18->key != -1i64 )
            break;
          ++v16;
          ++v17;
          ++v18;
        }
        while ( v17 <= (*p_contactIndirection)->m_map.m_hashMod );
      }
      if ( ((v9 & key) == v9 || (v7 & key) == v7) && val != -1 )
      {
        do
        {
          v19 = (__int64)&(*p_contacts)->m_data[val];
          *(_DWORD *)(v19 + 152) |= 4u;
          val = *(_DWORD *)(v19 + 24);
          *(_BYTE *)v19 = 0;
        }
        while ( val != -1 );
      }
      contactIndirection = *p_contactIndirection;
      v8 = v16;
    }
    while ( v16 <= (*p_contactIndirection)->m_map.m_hashMod );
  }
}

/*
==============
HavokPhysicsSVFX_RemoveContact
==============
*/
void HavokPhysicsSVFX_RemoveContact(const hknpWorld *world, const hknpBodyId *bodyIds, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *shapeKeys)
{
  unsigned __int64 m_userData; 
  unsigned __int64 v7; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  unsigned __int64 v9; 
  signed int v10; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *v11; 
  unsigned int val; 
  HavokPhysicsSVFXContact *v13; 
  __int64 v14; 
  unsigned __int64 key; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 639, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( !bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 640, ASSERT_TYPE_ASSERT, "(bodyIds)", (const char *)&queryFormat, "bodyIds") )
    __debugbreak();
  if ( !shapeKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 641, ASSERT_TYPE_ASSERT, "(shapeKeys)", (const char *)&queryFormat, "shapeKeys") )
    __debugbreak();
  m_userData = world->m_userData;
  v7 = HavokPhysicsSVFX_MakeKey(bodyIds);
  if ( !shapeKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 332, ASSERT_TYPE_ASSERT, "(shapeKeys)", (const char *)&queryFormat, "shapeKeys") )
    __debugbreak();
  contactIndirection = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  v9 = shapeKeys[1].m_value | ((unsigned __int64)shapeKeys->m_value << 32);
  key = v7;
  v10 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&contactIndirection->m_map, &key);
  v11 = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  if ( v10 <= v11->m_map.m_hashMod )
  {
    val = v11->m_map.m_elem[v10].val;
    if ( val >= s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size )
    {
      LODWORD(v14) = v11->m_map.m_elem[v10].val;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 661, ASSERT_TYPE_ASSERT, "(unsigned)( contactIndex ) < (unsigned)( fxWorld->contacts->getSize() )", "contactIndex doesn't index fxWorld->contacts->getSize()\n\t%i not in [0, %i)", v14, s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size) )
        __debugbreak();
    }
    if ( val != -1 )
    {
      while ( 1 )
      {
        v13 = &s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[val];
        if ( v13->shapeKey == v9 )
          break;
        val = v13->next;
        if ( val == -1 )
          return;
      }
      v13->eventFlags |= 4u;
      v13->isValid = 0;
    }
  }
}

/*
==============
HavokPhysicsSVFX_RunSFXRules
==============
*/
PhysicsSFXEventAssetRuleUnion *HavokPhysicsSVFX_RunSFXRules(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, PhysicsSFXEventAssetRules *rules, float *volumeScalar, float *pitchScalar)
{
  __int64 v14; 
  PhysicsSFXEventAssetRule *v16; 
  int numentries; 
  int v18; 
  int v19; 
  char *scrapeSoundAlias; 
  int v21; 
  bool v22; 
  unsigned __int64 v23; 
  int v24; 
  unsigned __int64 v27; 
  bool v28; 
  bool v42; 
  bool v43; 
  unsigned __int64 v63; 
  unsigned __int64 v65; 
  bool v66; 
  bool v83; 
  bool v84; 
  int v105; 
  unsigned __int64 v112; 
  int v113; 
  unsigned __int64 v115; 
  bool v116; 
  unsigned __int64 bodyIDKey_high; 
  __int64 v121; 
  int v122; 
  int v123; 
  __int64 v124; 
  char *v125; 
  PhysicsSFXEventAssetRuleUnion *result; 
  char v133; 
  void *retaddr; 

  _RAX = &retaddr;
  _R12 = pitchScalar;
  _R15 = volumeScalar;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RBP = contact;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm8, cs:__real@3f800000
  }
  v14 = worldId;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  while ( 1 )
  {
    if ( !rules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1099, ASSERT_TYPE_ASSERT, "(rules)", (const char *)&queryFormat, "rules") )
      __debugbreak();
    if ( rules->numrules > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1100, ASSERT_TYPE_ASSERT, "(rules->numrules <= 1)", (const char *)&queryFormat, "rules->numrules <= 1") )
      __debugbreak();
    if ( !rules->numrules )
      break;
    v16 = rules->rules;
    switch ( v16->type )
    {
      case Types_PhysicsSFXEventSoundRule:
        result = &v16->u;
        goto LABEL_77;
      case Types_PhysicsSFXEventMaterialRule:
        numentries = v16->u.materialRule.numentries;
        v18 = 0;
        v19 = numentries;
        if ( numentries > 0 )
        {
          scrapeSoundAlias = v16->u.soundRule.scrapeSoundAlias;
          do
          {
            v21 = *(_DWORD *)scrapeSoundAlias;
            if ( !*(_DWORD *)scrapeSoundAlias || v21 == 36 )
              v19 = v18;
            if ( ((_RBP->surfaceFlagData[1 - _RBP->sfxAssetIndex] >> 19) & 0x3F) == v21 )
              break;
            ++v18;
            scrapeSoundAlias += 24;
          }
          while ( v18 < numentries );
        }
        v22 = v18 < numentries;
        if ( v18 < numentries )
          goto LABEL_20;
        if ( v19 >= numentries )
          goto LABEL_76;
        v22 = v18 < numentries;
LABEL_20:
        if ( v22 )
          v19 = v18;
        rules = (PhysicsSFXEventAssetRules *)&v16->u.soundRule.scrapeSoundAlias[24 * v19 + 8];
        continue;
      case Types_PhysicsSFXEventAngleRule:
        v23 = v16->u.materialRule.numentries;
        v24 = 0;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+54h]
          vmulss  xmm6, xmm0, cs:__real@42652ee0
        }
        v27 = 0i64;
        v28 = (_DWORD)v23 == 0;
        if ( (int)v23 > 0 )
        {
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          do
          {
            __asm { vcomiss xmm6, dword ptr [rax] }
            if ( v28 )
              break;
            ++v24;
            ++v27;
            _RAX += 40;
            v28 = v27 <= v23;
          }
          while ( (__int64)v27 < (__int64)v23 );
        }
        if ( v24 >= (int)v23 )
          goto LABEL_76;
        _RAX = v16->u.soundRule.scrapeSoundAlias;
        _RSI = 5 * v27;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rsi*8+4]
          vmovss  xmm1, dword ptr [rax+rsi*8+8]
        }
        if ( !v24 )
        {
          __asm { vucomiss xmm0, xmm1 }
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+rsi*8+10h]
            vucomiss xmm0, dword ptr [rax+rsi*8+0Ch]
          }
          goto LABEL_30;
        }
        __asm { vcomiss xmm0, xmm1 }
        v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1177, ASSERT_TYPE_ASSERT, "(angleRule->entries[entryId].hitSoundVolumeModifierMin <= angleRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "angleRule->entries[entryId].hitSoundVolumeModifierMin <= angleRule->entries[entryId].hitSoundVolumeModifierMax");
        v43 = !v42;
        if ( v42 )
          __debugbreak();
        _RAX = v16->u.soundRule.scrapeSoundAlias;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rsi*8+10h]
          vcomiss xmm0, dword ptr [rax+rsi*8+0Ch]
        }
        _RCX = _RAX;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi*8]
          vsubss  xmm1, xmm0, dword ptr [rcx+rax*8-28h]
          vsubss  xmm2, xmm6, dword ptr [rcx+rax*8-28h]
          vdivss  xmm6, xmm2, xmm1
          vcomiss xmm6, xmm7
          vcomiss xmm6, xmm8
        }
        if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1180, ASSERT_TYPE_ASSERT, "(lerpValue >= 0.f && lerpValue <= 1.f)", (const char *)&queryFormat, "lerpValue >= 0.f && lerpValue <= 1.f") )
          __debugbreak();
        goto LABEL_36;
      case Types_PhysicsSFXEventSpeedRule:
        v63 = v16->u.materialRule.numentries;
        v24 = 0;
        __asm { vmovss  xmm6, dword ptr [rbp+48h] }
        v65 = 0i64;
        v66 = 0;
        if ( (int)v63 > 0 )
        {
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          do
          {
            __asm { vcomiss xmm6, dword ptr [rax] }
            if ( !v66 )
              break;
            ++v24;
            ++v65;
            _RAX += 40;
            v66 = v65 < v63;
          }
          while ( (__int64)v65 < (__int64)v63 );
        }
        if ( v24 >= (int)v63 )
          goto LABEL_76;
        _RAX = v16->u.soundRule.scrapeSoundAlias;
        _RSI = 5 * v65;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rsi*8+4]
          vmovss  xmm1, dword ptr [rax+rsi*8+8]
        }
        if ( !v24 )
        {
          __asm { vucomiss xmm0, xmm1 }
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+rsi*8+10h]
            vucomiss xmm0, dword ptr [rax+rsi*8+0Ch]
          }
LABEL_30:
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+rsi*8+4]
            vmulss  xmm1, xmm0, dword ptr [r15]
            vmovss  dword ptr [r15], xmm1
          }
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+rsi*8+0Ch]
            vmulss  xmm1, xmm0, dword ptr [r12]
            vmovss  dword ptr [r12], xmm1
          }
          goto LABEL_37;
        }
        __asm { vcomiss xmm0, xmm1 }
        v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1214, ASSERT_TYPE_ASSERT, "(speedRule->entries[entryId].hitSoundVolumeModifierMin <= speedRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "speedRule->entries[entryId].hitSoundVolumeModifierMin <= speedRule->entries[entryId].hitSoundVolumeModifierMax");
        v84 = !v83;
        if ( v83 )
          __debugbreak();
        _RAX = v16->u.soundRule.scrapeSoundAlias;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rsi*8+10h]
          vcomiss xmm0, dword ptr [rax+rsi*8+0Ch]
        }
        _RCX = _RAX;
        __asm
        {
          vsubss  xmm2, xmm6, dword ptr [rcx+rax*8-28h]
          vmovss  xmm0, dword ptr [rcx+rsi*8]
          vsubss  xmm1, xmm0, dword ptr [rcx+rax*8-28h]
          vdivss  xmm2, xmm2, xmm1
          vsubss  xmm6, xmm8, xmm2
          vcomiss xmm6, xmm7
          vcomiss xmm6, xmm8
        }
        if ( v84 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1217, ASSERT_TYPE_ASSERT, "(lerpValue >= 0.f && lerpValue <= 1.f)", (const char *)&queryFormat, "lerpValue >= 0.f && lerpValue <= 1.f") )
        {
LABEL_36:
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+rsi*8+8]
            vsubss  xmm1, xmm0, dword ptr [rax+rsi*8+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+rsi*8+4]
            vmulss  xmm0, xmm3, dword ptr [r15]
            vmovss  dword ptr [r15], xmm0
          }
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+rsi*8+10h]
            vsubss  xmm1, xmm0, dword ptr [rax+rsi*8+0Ch]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+rsi*8+0Ch]
            vmulss  xmm0, xmm3, dword ptr [r12]
            vmovss  dword ptr [r12], xmm0
          }
LABEL_37:
          rules = (PhysicsSFXEventAssetRules *)&v16->u.soundRule.scrapeSoundAlias[40 * v24 + 24];
          continue;
        }
        __debugbreak();
        _RAX = v16->u.soundRule.scrapeSoundAlias;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rsi*8+8]
          vsubss  xmm1, xmm0, dword ptr [rax+rsi*8+4]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rax+rsi*8+4]
          vmulss  xmm0, xmm3, dword ptr [r15]
          vmovss  dword ptr [r15], xmm0
        }
        _RAX = v16->u.soundRule.scrapeSoundAlias;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rsi*8+10h]
          vsubss  xmm1, xmm0, dword ptr [rax+rsi*8+0Ch]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rax+rsi*8+0Ch]
          vmulss  xmm0, xmm3, dword ptr [r12]
          vmovss  dword ptr [r12], xmm0
        }
        rules = (PhysicsSFXEventAssetRules *)&v16->u.soundRule.scrapeSoundAlias[40 * v24 + 24];
        break;
      case Types_PhysicsSFXEventMassRule:
        v105 = v16->u.materialRule.numentries;
        v24 = 0;
        _RAX = 1 - _RBP->sfxAssetIndex;
        __asm { vmovss  xmm6, dword ptr [rbp+rax*4+4Ch] }
        if ( v105 > 0 )
          __asm { vucomiss xmm6, xmm7 }
        if ( v105 <= 0 )
          goto LABEL_76;
        _RAX = v16->u.soundRule.scrapeSoundAlias;
        _RSI = 0i64;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+rsi*8+4]
          vmovss  xmm1, dword ptr [rax+rsi*8+8]
          vucomiss xmm0, xmm1
          vmovss  xmm0, dword ptr [rax+rsi*8+10h]
          vucomiss xmm0, dword ptr [rax+rsi*8+0Ch]
        }
        goto LABEL_30;
      case Types_PhysicsSFXEventGravityRule:
      case Types_PhysicsSFXEventAtmosphereRule:
        if ( v16->u.materialRule.numentries <= 0 )
          goto LABEL_76;
        rules = (PhysicsSFXEventAssetRules *)(v16->u.soundRule.scrapeSoundAlias + 8);
        continue;
      case Types_PhysicsSFXEventCameraDistanceRule:
        v112 = v16->u.materialRule.numentries;
        v113 = 0;
        __asm { vmovss  xmm2, dword ptr [rbp+78h] }
        v115 = 0i64;
        v116 = 0;
        if ( (int)v112 > 0 )
        {
          _RAX = v16->u.soundRule.scrapeSoundAlias;
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vmulss  xmm1, xmm0, xmm0
              vcomiss xmm2, xmm1
            }
            if ( v116 )
              break;
            ++v113;
            ++v115;
            _RAX += 24;
            v116 = v115 < v112;
          }
          while ( (__int64)v115 < (__int64)v112 );
        }
        if ( v113 >= (int)v112 )
          goto LABEL_76;
        rules = (PhysicsSFXEventAssetRules *)&v16->u.soundRule.scrapeSoundAlias[24 * v113 + 8];
        continue;
      case Types_PhysicsSFXEventFrequencyRule:
        if ( _RBP->sfxAssetIndex )
          LODWORD(bodyIDKey_high) = _RBP->bodyIDKey;
        else
          bodyIDKey_high = HIDWORD(_RBP->bodyIDKey);
        v121 = v16->u.materialRule.numentries;
        v122 = 0;
        v123 = s_havokPhysicsSVFXWorlds[v14].sfxBodyCount[bodyIDKey_high & 0xFFFFFF];
        v124 = 0i64;
        if ( (int)v121 > 0 )
        {
          v125 = v16->u.soundRule.scrapeSoundAlias;
          do
          {
            if ( v123 < *(_DWORD *)v125 )
              break;
            ++v122;
            ++v124;
            v125 += 24;
          }
          while ( v124 < v121 );
        }
        if ( v122 >= (int)v121 )
          goto LABEL_76;
        rules = (PhysicsSFXEventAssetRules *)&v16->u.soundRule.scrapeSoundAlias[24 * v122 + 8];
        continue;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1345, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid rule") )
          __debugbreak();
        goto LABEL_76;
    }
  }
LABEL_76:
  result = NULL;
LABEL_77:
  _R11 = &v133;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
  return result;
}

/*
==============
HavokPhysicsSVFX_RunVFXRules
==============
*/
PhysicsVFXEventAssetRuleUnion *HavokPhysicsSVFX_RunVFXRules(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, PhysicsVFXEventAssetRules *rules)
{
  __int64 v6; 
  PhysicsVFXEventAssetRule *v8; 
  int numentries; 
  int v10; 
  int v11; 
  char *scrapeParticleEffectAlias; 
  int v13; 
  bool v14; 
  unsigned __int64 v15; 
  int v16; 
  unsigned __int64 v19; 
  bool v20; 
  bool v22; 
  unsigned __int64 v23; 
  int v24; 
  unsigned __int64 v26; 
  bool v27; 
  int v29; 
  unsigned __int64 v32; 
  int v33; 
  unsigned __int64 v35; 
  bool v36; 
  unsigned __int64 bodyIDKey_high; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  char *v44; 
  PhysicsVFXEventAssetRuleUnion *result; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  v6 = worldId;
  _RDI = contact;
  while ( 1 )
  {
    if ( !rules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1353, ASSERT_TYPE_ASSERT, "(rules)", (const char *)&queryFormat, "rules") )
      __debugbreak();
    if ( rules->numrules > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1354, ASSERT_TYPE_ASSERT, "(rules->numrules <= 1)", (const char *)&queryFormat, "rules->numrules <= 1") )
      __debugbreak();
    if ( !rules->numrules )
      break;
    v8 = rules->rules;
    switch ( v8->type )
    {
      case Types_PhysicsVFXEventParticleEffectRule:
        result = &v8->u;
        goto LABEL_60;
      case Types_PhysicsVFXEventMaterialRule:
        numentries = v8->u.materialRule.numentries;
        v10 = 0;
        v11 = numentries;
        if ( numentries > 0 )
        {
          scrapeParticleEffectAlias = v8->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            v13 = *(_DWORD *)scrapeParticleEffectAlias;
            if ( !*(_DWORD *)scrapeParticleEffectAlias || v13 == 36 )
              v11 = v10;
            if ( ((_RDI->surfaceFlagData[1 - _RDI->vfxAssetIndex] >> 19) & 0x3F) == v13 )
              break;
            ++v10;
            scrapeParticleEffectAlias += 24;
          }
          while ( v10 < numentries );
        }
        v14 = v10 < numentries;
        if ( v10 < numentries )
          goto LABEL_20;
        if ( v11 >= numentries )
          goto LABEL_59;
        v14 = v10 < numentries;
LABEL_20:
        if ( v14 )
          v11 = v10;
        rules = (PhysicsVFXEventAssetRules *)&v8->u.particleEffectRule.scrapeParticleEffectAlias[24 * v11 + 8];
        break;
      case Types_PhysicsVFXEventAngleRule:
        v15 = v8->u.materialRule.numentries;
        v16 = 0;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+54h]
          vmulss  xmm1, xmm0, cs:__real@42652ee0
        }
        v19 = 0i64;
        v20 = (_DWORD)v15 == 0;
        if ( (int)v15 > 0 )
        {
          _RAX = v8->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            __asm { vcomiss xmm1, dword ptr [rax] }
            if ( v20 )
              break;
            ++v16;
            ++v19;
            _RAX += 24;
            v20 = v19 <= v15;
          }
          while ( (__int64)v19 < (__int64)v15 );
        }
        v22 = v16 < (int)v15;
        goto LABEL_28;
      case Types_PhysicsVFXEventSpeedRule:
        v23 = v8->u.materialRule.numentries;
        v24 = 0;
        __asm { vmovss  xmm0, dword ptr [rdi+48h] }
        v26 = 0i64;
        v27 = 0;
        if ( (int)v23 > 0 )
        {
          _RAX = v8->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            __asm { vcomiss xmm0, dword ptr [rax] }
            if ( !v27 )
              break;
            ++v24;
            ++v26;
            _RAX += 24;
            v27 = v26 < v23;
          }
          while ( (__int64)v26 < (__int64)v23 );
        }
        if ( v24 >= (int)v23 )
          goto LABEL_59;
        rules = (PhysicsVFXEventAssetRules *)&v8->u.particleEffectRule.scrapeParticleEffectAlias[24 * v24 + 8];
        continue;
      case Types_PhysicsVFXEventMassRule:
        v29 = v8->u.materialRule.numentries;
        _RAX = 1 - _RDI->vfxAssetIndex;
        __asm { vmovss  xmm0, dword ptr [rdi+rax*4+4Ch] }
        if ( v29 > 0 )
          __asm { vucomiss xmm0, xmm6 }
        if ( v29 <= 0 )
          goto LABEL_59;
        rules = (PhysicsVFXEventAssetRules *)(v8->u.particleEffectRule.scrapeParticleEffectAlias + 8);
        continue;
      case Types_PhysicsVFXEventGravityRule:
      case Types_PhysicsVFXEventAtmosphereRule:
        if ( v8->u.materialRule.numentries <= 0 )
          goto LABEL_59;
        rules = (PhysicsVFXEventAssetRules *)(v8->u.particleEffectRule.scrapeParticleEffectAlias + 8);
        continue;
      case Types_PhysicsVFXEventCameraDistanceRule:
        v32 = v8->u.materialRule.numentries;
        v33 = 0;
        __asm { vmovss  xmm2, dword ptr [rdi+78h] }
        v35 = 0i64;
        v36 = 0;
        if ( (int)v32 > 0 )
        {
          _RAX = v8->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vmulss  xmm1, xmm0, xmm0
              vcomiss xmm2, xmm1
            }
            if ( v36 )
              break;
            ++v33;
            ++v35;
            _RAX += 24;
            v36 = v35 < v32;
          }
          while ( (__int64)v35 < (__int64)v32 );
        }
        if ( v33 >= (int)v32 )
          goto LABEL_59;
        rules = (PhysicsVFXEventAssetRules *)&v8->u.particleEffectRule.scrapeParticleEffectAlias[24 * v33 + 8];
        continue;
      case Types_PhysicsVFXEventFrequencyRule:
        if ( _RDI->vfxAssetIndex )
          LODWORD(bodyIDKey_high) = _RDI->bodyIDKey;
        else
          bodyIDKey_high = HIDWORD(_RDI->bodyIDKey);
        v41 = v8->u.materialRule.numentries;
        v16 = 0;
        v42 = s_havokPhysicsSVFXWorlds[v6].vfxBodyCount[bodyIDKey_high & 0xFFFFFF];
        v43 = 0i64;
        if ( (int)v41 > 0 )
        {
          v44 = v8->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            if ( v42 < *(_DWORD *)v44 )
              break;
            ++v16;
            ++v43;
            v44 += 24;
          }
          while ( v43 < v41 );
        }
        v22 = v16 < (int)v41;
LABEL_28:
        if ( !v22 )
          goto LABEL_59;
        rules = (PhysicsVFXEventAssetRules *)&v8->u.particleEffectRule.scrapeParticleEffectAlias[24 * v16 + 8];
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1548, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid rule") )
          __debugbreak();
        goto LABEL_59;
    }
  }
LABEL_59:
  result = NULL;
LABEL_60:
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return result;
}

/*
==============
HavokPhysicsSVFX_StopScrapeParticle
==============
*/
void HavokPhysicsSVFX_StopScrapeParticle(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  __int64 v5; 
  ParticleSystemHandle particleSystem; 
  __int64 v7; 

  v3 = localClientNum;
  v5 = worldId;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1901, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  particleSystem = contact->scrapeData.particleSystem;
  if ( particleSystem )
  {
    ParticleManager::StopSystem(&g_particleManager[v3], particleSystem);
    contact->scrapeData.particleSystem = PARTICLE_SYSTEM_INVALID_HANDLE;
    --s_havokPhysicsSVFXWorldDatas[v5].numScrapeParticlesPlaying;
  }
}

/*
==============
HavokPhysicsSVFX_StopScrapeSound
==============
*/
void HavokPhysicsSVFX_StopScrapeSound(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact)
{
  __int64 v2; 

  v2 = worldId;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1794, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  if ( contact->scrapeData.sfxScrapeRule )
  {
    SND_StopVirtualLoopSound(contact->scrapeData.sndId);
    contact->scrapeData.sndId = -1;
    --s_havokPhysicsSVFXWorldDatas[v2].numScrapeSoundsPlaying;
  }
}

/*
==============
HavokPhysicsSVFX_UnregisterBody
==============
*/
void HavokPhysicsSVFX_UnregisterBody(Physics_WorldId worldId, hknpBodyId bodyId, LocalClientNum_t localClientNum)
{
  const hknpWorld *World; 

  HavokPhysics_UnsubscribeFromEvent(worldId, CONTACT_IMPULSE, bodyId, HavokPhysicsSVFX_OnContactImpulseEvent);
  World = HavokPhysics_GetWorld(worldId);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1042, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  HavokPhysicsSVFX_RemoveAllContacts(World, bodyId);
}

/*
==============
HavokPhysicsSVFX_UnregisterWorld
==============
*/
void HavokPhysicsSVFX_UnregisterWorld(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *potentialEventList; 
  hkMemoryAllocator *v5; 
  int m_capacityAndFlags; 
  hkMemoryRouter *Value; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  hkMemoryAllocator *v9; 
  hkMemoryRouter *v10; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *contacts; 
  hkMemoryAllocator *v12; 
  int v13; 
  hkMemoryRouter *v14; 
  HavokPhysics_VelocityCachingModifier *velocityCachingModifier; 

  v3 = worldId;
  if ( !s_havokPhysicsSVFXWorlds[v3].isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 985, ASSERT_TYPE_ASSERT, "(s_havokPhysicsSVFXWorlds[worldId].isInitialized)", (const char *)&queryFormat, "s_havokPhysicsSVFXWorlds[worldId].isInitialized", -2i64) )
    __debugbreak();
  s_havokPhysicsSVFXWorlds[v3].isInitialized = 0;
  Mem_Virtual_Free(s_havokPhysicsSVFXWorlds[v3].sfxBodyCount);
  s_havokPhysicsSVFXWorlds[v3].sfxBodyCount = NULL;
  s_havokPhysicsSVFXWorlds[v3].vfxBodyCount = NULL;
  if ( !s_havokPhysicsSVFXWorlds[v3].potentialEventList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 997, ASSERT_TYPE_ASSERT, "(s_havokPhysicsSVFXWorlds[worldId].potentialEventList)", (const char *)&queryFormat, "s_havokPhysicsSVFXWorlds[worldId].potentialEventList") )
    __debugbreak();
  potentialEventList = s_havokPhysicsSVFXWorlds[v3].potentialEventList;
  if ( potentialEventList )
  {
    v5 = hkMemHeapAllocator();
    potentialEventList->m_size = 0;
    m_capacityAndFlags = potentialEventList->m_capacityAndFlags;
    if ( m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v5, potentialEventList->m_data, 8, m_capacityAndFlags & 0x3FFFFFFF);
    potentialEventList->m_data = NULL;
    potentialEventList->m_capacityAndFlags = 0x80000000;
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    Value->m_heap->blockFree(Value->m_heap, potentialEventList, 16);
  }
  s_havokPhysicsSVFXWorlds[v3].potentialEventList = NULL;
  if ( !s_havokPhysicsSVFXWorlds[v3].contactIndirection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1002, ASSERT_TYPE_ASSERT, "(s_havokPhysicsSVFXWorlds[worldId].contactIndirection)", (const char *)&queryFormat, "s_havokPhysicsSVFXWorlds[worldId].contactIndirection") )
    __debugbreak();
  contactIndirection = s_havokPhysicsSVFXWorlds[v3].contactIndirection;
  if ( contactIndirection )
  {
    v9 = hkMemHeapAllocator();
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::clearAndDeallocate(&contactIndirection->m_map, v9);
    hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::~hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>(&contactIndirection->m_map);
    v10 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v10 )
      v10 = hkMemoryRouter::s_fallbackRouter;
    v10->m_heap->blockFree(v10->m_heap, contactIndirection, 16);
  }
  s_havokPhysicsSVFXWorlds[v3].contactIndirection = NULL;
  if ( !s_havokPhysicsSVFXWorlds[v3].contacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1005, ASSERT_TYPE_ASSERT, "(s_havokPhysicsSVFXWorlds[worldId].contacts)", (const char *)&queryFormat, "s_havokPhysicsSVFXWorlds[worldId].contacts") )
    __debugbreak();
  contacts = s_havokPhysicsSVFXWorlds[v3].contacts;
  if ( contacts )
  {
    v12 = hkMemHeapAllocator();
    contacts->m_size = 0;
    v13 = contacts->m_capacityAndFlags;
    if ( v13 >= 0 )
      hkMemoryAllocator::bufFree2(v12, contacts->m_data, 200, v13 & 0x3FFFFFFF);
    contacts->m_data = NULL;
    contacts->m_capacityAndFlags = 0x80000000;
    v14 = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !v14 )
      v14 = hkMemoryRouter::s_fallbackRouter;
    v14->m_heap->blockFree(v14->m_heap, contacts, 16);
  }
  s_havokPhysicsSVFXWorlds[v3].contacts = NULL;
  HavokPhysics_RemoveModifier(worldId, s_havokPhysicsSVFXWorlds[v3].velocityCachingModifier);
  if ( !s_havokPhysicsSVFXWorlds[v3].velocityCachingModifier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1011, ASSERT_TYPE_ASSERT, "(s_havokPhysicsSVFXWorlds[worldId].velocityCachingModifier)", (const char *)&queryFormat, "s_havokPhysicsSVFXWorlds[worldId].velocityCachingModifier") )
    __debugbreak();
  velocityCachingModifier = s_havokPhysicsSVFXWorlds[v3].velocityCachingModifier;
  if ( velocityCachingModifier )
    ((void (__fastcall *)(HavokPhysics_VelocityCachingModifier *, __int64))velocityCachingModifier->~hknpModifier)(velocityCachingModifier, 1i64);
  s_havokPhysicsSVFXWorlds[v3].velocityCachingModifier = NULL;
}

/*
==============
HavokPhysicsSVFX_Update
==============
*/

void __fastcall HavokPhysicsSVFX_Update(Physics_WorldId worldId, LocalClientNum_t localClientNum, double timeStep)
{
  __int64 v6; 
  __int64 v9; 
  __int64 v10; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *contacts; 
  HavokPhysicsSVFXContact *m_data; 
  PhysicsSFXEventAssetRules *v29; 
  char v31; 
  bool v32; 
  PhysicsSFXEventAssetRuleUnion *v33; 
  bool v34; 
  PhysicsVFXEventAssetRules *v35; 
  PhysicsVFXEventAssetRuleUnion *v36; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v38; 
  int sndId; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v43; 
  HavokPhysicsSVFXContact *v45; 
  int v46; 

  __asm { vmovaps [rsp+0B8h+var_68], xmm8 }
  v6 = worldId;
  __asm { vmovaps xmm8, xmm2 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2192, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_START) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2196, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_START ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_START )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_PREP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2197, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_PREP ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_PREP )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_COLLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2198, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_COLLIDE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_COLLIDE )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_SOLVE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2199, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_SOLVE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_SOLVE )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_FX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2200, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_FX ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_FX )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2201, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_END ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_PHYSICS_STEP_WORLD_END )") )
    __debugbreak();
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    v9 = v6;
    v10 = v6;
    if ( s_havokPhysicsSVFXWorlds[v6].isInitialized )
    {
      __asm
      {
        vmovaps [rsp+0B8h+var_48], xmm6
        vxorps  xmm6, xmm6, xmm6
        vmovss  [rsp+0B8h+var_80], xmm6
        vmovss  [rsp+0B8h+var_7C], xmm6
        vmovss  [rsp+0B8h+var_78], xmm6
      }
      if ( (unsigned int)(v6 - 2) <= 5 )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        p_view = &LocalClientGlobals->refdef.view;
        if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        if ( p_view == (RefdefView *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
      }
      contacts = s_havokPhysicsSVFXWorlds[v10].contacts;
      m_data = contacts->m_data;
      if ( contacts->m_data != &contacts->m_data[contacts->m_size] )
      {
        __asm { vmovaps [rsp+0B8h+var_58], xmm7 }
        _RBP = &m_data->position.v[2];
        __asm { vmovss  xmm7, cs:__real@3f800000 }
        do
        {
          if ( (unsigned int)(v6 - 2) > 5 )
          {
            __asm { vmovaps xmm5, xmm7 }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp-8]
              vsubss  xmm3, xmm0, [rsp+0B8h+var_80]
              vmovss  xmm1, dword ptr [rbp-4]
              vmovss  xmm0, dword ptr [rbp+0]
              vsubss  xmm2, xmm1, [rsp+0B8h+var_7C]
              vsubss  xmm4, xmm0, [rsp+0B8h+var_78]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm5, xmm3, xmm0
            }
          }
          __asm { vmovss  dword ptr [rbp+48h], xmm5 }
          v29 = (PhysicsSFXEventAssetRules *)*((_QWORD *)_RBP + 6);
          if ( v29 )
          {
            _R15 = _RBP + 25;
            _RBP[25] = 1.0;
            _RBP[24] = 1.0;
            v33 = HavokPhysicsSVFX_RunSFXRules((Physics_WorldId)v6, m_data, v29 + 1, _RBP + 24, _RBP + 25);
            __asm { vcomiss xmm6, dword ptr [rbp+60h] }
            *((_QWORD *)_RBP + 10) = v33;
            if ( !(v31 | v32) )
            {
              v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1566, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundVolumeScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundVolumeScalar >= 0.f");
              v31 = 0;
              v32 = !v34;
              if ( v34 )
                __debugbreak();
            }
            __asm { vcomiss xmm6, dword ptr [r15] }
            if ( !(v31 | v32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1567, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundPitchScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundPitchScalar >= 0.f") )
              __debugbreak();
          }
          else
          {
            *((_QWORD *)_RBP + 10) = 0i64;
          }
          v35 = (PhysicsVFXEventAssetRules *)*((_QWORD *)_RBP + 7);
          if ( v35 )
            v36 = HavokPhysicsSVFX_RunVFXRules((Physics_WorldId)v6, m_data, v35 + 1);
          else
            v36 = NULL;
          *((_QWORD *)_RBP + 11) = v36;
          ++m_data;
          contacts = s_havokPhysicsSVFXWorlds[v10].contacts;
          _RBP += 50;
        }
        while ( m_data != &contacts->m_data[contacts->m_size] );
        __asm { vmovaps xmm7, [rsp+0B8h+var_58] }
        m_data = contacts->m_data;
        v9 = v6;
      }
      if ( m_data != &m_data[contacts->m_size] )
      {
        do
        {
          if ( (m_data->eventFlags & 1) != 0 )
            HavokPhysicsSVFX_AddPotentialHitEvent((Physics_WorldId)v6, m_data);
          ++m_data;
        }
        while ( m_data != &s_havokPhysicsSVFXWorlds[v10].contacts->m_data[s_havokPhysicsSVFXWorlds[v10].contacts->m_size] );
      }
      HavokPhysicsSVFX_PlayHitEvents((Physics_WorldId)v6, LOCAL_CLIENT_0);
      v38 = s_havokPhysicsSVFXWorlds[v10].contacts;
      _RBX = v38->m_data;
      if ( v38->m_data != &v38->m_data[v38->m_size] )
      {
        __asm { vmovss  xmm6, cs:__real@3f000000 }
        do
        {
          if ( (_RBX->eventFlags & 2) != 0 )
          {
            if ( _RBX->scrapeData.sndId != -1 || _RBX->scrapeData.particleSystem )
              HavokPhysicsSVFX_UpdateScrapeEvent((Physics_WorldId)v6, _RBX, LOCAL_CLIENT_0);
            else
              HavokPhysicsSVFX_AddPotentialHitEvent((Physics_WorldId)v6, _RBX);
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+0C0h]
              vcomiss xmm0, xmm6
            }
            sndId = _RBX->scrapeData.sndId;
            if ( sndId != -1 && _RBX->scrapeData.sfxScrapeRule )
            {
              SND_StopVirtualLoopSound(sndId);
              _RBX->scrapeData.sndId = -1;
              --s_havokPhysicsSVFXWorldDatas[v9].numScrapeSoundsPlaying;
            }
            if ( _RBX->scrapeData.particleSystem )
              HavokPhysicsSVFX_StopScrapeParticle((Physics_WorldId)v6, _RBX, LOCAL_CLIENT_0);
          }
          ++_RBX;
        }
        while ( _RBX != &s_havokPhysicsSVFXWorlds[v10].contacts->m_data[s_havokPhysicsSVFXWorlds[v10].contacts->m_size] );
      }
      HavokPhysicsSVFX_PlayScrapeEvents((Physics_WorldId)v6, LOCAL_CLIENT_0);
      v43 = s_havokPhysicsSVFXWorlds[v10].contacts;
      __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
      v45 = v43->m_data;
      if ( v43->m_data != &v43->m_data[v43->m_size] )
      {
        do
        {
          if ( (v45->eventFlags & 4) != 0 )
          {
            v46 = v45->scrapeData.sndId;
            if ( v46 != -1 && v45->scrapeData.sfxScrapeRule )
            {
              SND_StopVirtualLoopSound(v46);
              v45->scrapeData.sndId = -1;
              --s_havokPhysicsSVFXWorldDatas[v9].numScrapeSoundsPlaying;
            }
            if ( v45->scrapeData.particleSystem )
              HavokPhysicsSVFX_StopScrapeParticle((Physics_WorldId)v6, v45, LOCAL_CLIENT_0);
          }
          v45->debugDrawEventFlags = v45->eventFlags;
          v45->eventFlags = 0;
          ++v45;
        }
        while ( v45 != &s_havokPhysicsSVFXWorlds[v10].contacts->m_data[s_havokPhysicsSVFXWorlds[v10].contacts->m_size] );
      }
      HavokPhysicsSVFX_Coalesce((Physics_WorldId)v6);
    }
  }
  __asm { vmovaps xmm8, [rsp+0B8h+var_68] }
}

/*
==============
HavokPhysicsSVFX_UpdateContact
==============
*/
void HavokPhysicsSVFX_UpdateContact(const hknpWorld *world, const hknpBodyId *bodyIds, const hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *shapeKeys, const int numImpulseGivingContactPoints, const int numCollisionContactPoints, const hkVector4f *position, const hkVector4f *normal, const unsigned int *surfaceFlagData, const float speed, const float *masses, const float angle)
{
  unsigned __int64 m_userData; 
  unsigned __int64 v16; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  unsigned __int64 v18; 
  signed int v19; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *v20; 
  int val; 
  int v36; 
  int eventFlags; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  unsigned __int64 key[2]; 
  hkVector4f v49[4]; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 471, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( !bodyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 472, ASSERT_TYPE_ASSERT, "(bodyIds)", (const char *)&queryFormat, "bodyIds") )
    __debugbreak();
  if ( !shapeKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 473, ASSERT_TYPE_ASSERT, "(shapeKeys)", (const char *)&queryFormat, "shapeKeys") )
    __debugbreak();
  m_userData = world->m_userData;
  v16 = HavokPhysicsSVFX_MakeKey(bodyIds);
  if ( !shapeKeys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 332, ASSERT_TYPE_ASSERT, "(shapeKeys)", (const char *)&queryFormat, "shapeKeys") )
    __debugbreak();
  contactIndirection = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  v18 = shapeKeys[1].m_value | ((unsigned __int64)shapeKeys->m_value << 32);
  key[0] = v16;
  v19 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&contactIndirection->m_map, key);
  v20 = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
  if ( v19 <= v20->m_map.m_hashMod )
  {
    val = v20->m_map.m_elem[v19].val;
    if ( val == -1 )
    {
LABEL_19:
      _RAX = normal;
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = position;
      __asm
      {
        vmovups [rsp+0B8h+var_48], xmm0
        vmovss  xmm0, [rsp+0B8h+arg_50]
        vmovss  [rsp+0B8h+var_68], xmm0
        vmovups xmm1, xmmword ptr [rax]
        vmovss  xmm0, [rsp+0B8h+arg_40]
        vmovss  [rsp+0B8h+var_78], xmm0
        vmovups xmmword ptr [rsp+0B8h+key], xmm1
      }
      HavokPhysicsSVFX_AddNewContact(world, bodyIds, shapeKeys, numImpulseGivingContactPoints, numCollisionContactPoints, (const hkVector4f *)key, v49, surfaceFlagData, v45, masses, v47);
    }
    else
    {
      _RDI = s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data;
      while ( 1 )
      {
        _RBX = val;
        if ( _RDI[_RBX].shapeKey == v18 )
          break;
        val = _RDI[_RBX].next;
        if ( val == -1 )
          goto LABEL_19;
      }
      _RDI[_RBX].isValid = 1;
      if ( _RDI[_RBX].bodyIDKey != v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 511, ASSERT_TYPE_ASSERT, "(contact->bodyIDKey == key)", (const char *)&queryFormat, "contact->bodyIDKey == key") )
        __debugbreak();
      if ( _RDI[_RBX].shapeKey != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 512, ASSERT_TYPE_ASSERT, "(contact->shapeKey == shapeKey)", (const char *)&queryFormat, "contact->shapeKey == shapeKey") )
        __debugbreak();
      v36 = _RDI[_RBX].numCollisionContactPoints;
      __asm { vmovss  xmm3, cs:__real@42000000 }
      _RDI[_RBX].numCollisionContactPoints = numCollisionContactPoints;
      _RDI[_RBX].numImpulseGivingContactPoints = numImpulseGivingContactPoints;
      __asm
      {
        vmulss  xmm0, xmm3, dword ptr [rax]
        vmovss  dword ptr [rbx+rdi+28h], xmm0
        vmulss  xmm2, xmm3, dword ptr [rax+4]
        vmovss  xmm0, [rsp+0B8h+arg_50]
        vmovss  dword ptr [rbx+rdi+2Ch], xmm2
        vmulss  xmm1, xmm3, dword ptr [rax+8]
        vmovss  dword ptr [rbx+rdi+30h], xmm1
        vmulss  xmm1, xmm3, [rsp+0B8h+arg_40]
      }
      *(_QWORD *)_RDI[_RBX].normal.v = normal->m_quad.m128_u64[0];
      LODWORD(_RDI[_RBX].normal.v[2]) = normal->m_quad.m128_i32[2];
      _RDI[_RBX].surfaceFlagData[0] = *surfaceFlagData;
      _RDI[_RBX].surfaceFlagData[1] = surfaceFlagData[1];
      __asm { vmovss  dword ptr [rbx+rdi+48h], xmm1 }
      _RDI[_RBX].masses[0] = *masses;
      _RDI[_RBX].masses[1] = masses[1];
      eventFlags = _RDI[_RBX].eventFlags;
      __asm { vmovss  dword ptr [rbx+rdi+54h], xmm0 }
      if ( _RDI[_RBX].numCollisionContactPoints > v36 )
      {
        eventFlags |= 1u;
        _RDI[_RBX].hitSpeed = _RDI[_RBX].speed;
        __asm { vmovss  dword ptr [rbx+rdi+5Ch], xmm0 }
      }
      _RDI[_RBX].eventFlags = eventFlags | 2;
    }
  }
  else
  {
    _RAX = normal;
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = position;
    __asm
    {
      vmovups xmmword ptr [rsp+0B8h+key], xmm0
      vmovss  xmm0, [rsp+0B8h+arg_50]
      vmovss  [rsp+0B8h+var_68], xmm0
      vmovups xmm1, xmmword ptr [rax]
      vmovss  xmm0, [rsp+0B8h+arg_40]
      vmovss  [rsp+0B8h+var_78], xmm0
      vmovups [rsp+0B8h+var_48], xmm1
    }
    HavokPhysicsSVFX_AddNewContact(world, bodyIds, shapeKeys, numImpulseGivingContactPoints, numCollisionContactPoints, v49, (const hkVector4f *)key, surfaceFlagData, v44, masses, v46);
  }
}

/*
==============
HavokPhysicsSVFX_UpdateScrapeEvent
==============
*/
void HavokPhysicsSVFX_UpdateScrapeEvent(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum)
{
  PhysicsSFXEventAssetSoundRule *sfxRule; 
  int v9; 
  PhysicsSFXEventAssetSoundRule *sfxScrapeRule; 
  const char *scrapeSoundAlias; 
  const char *v12; 
  bool v13; 
  bool v14; 
  int sndId; 
  PhysicsVFXEventAssetParticleEffectRule *vfxRule; 
  PhysicsVFXEventAssetParticleEffectRule *vfxScrapeRule; 
  const char *scrapeParticleEffectAlias; 
  const char *v39; 

  _RBX = contact;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2045, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  sfxRule = _RBX->sfxRule;
  v9 = 0;
  sfxScrapeRule = _RBX->scrapeData.sfxScrapeRule;
  _RBX->scrapeData.updateTimer = 0.0;
  if ( sfxRule == sfxScrapeRule || sfxRule && sfxScrapeRule && (scrapeSoundAlias = sfxScrapeRule->scrapeSoundAlias, v12 = sfxRule->scrapeSoundAlias, (scrapeSoundAlias != NULL) == (v12 != NULL)) && (!v12 || !scrapeSoundAlias || !I_stricmp(v12, scrapeSoundAlias)) )
  {
    v13 = _RBX->scrapeData.sndId != -1;
    v14 = _RBX->scrapeData.sndId == -1;
    if ( _RBX->scrapeData.sndId != -1 )
    {
      _RAX = _RBX->scrapeData.sfxScrapeRule;
      __asm
      {
        vmovaps [rsp+58h+var_18], xmm6
        vmovaps [rsp+58h+var_28], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm0, dword ptr [rax+10h]
        vcomiss xmm0, dword ptr [rax+14h]
        vmovaps xmm6, xmm7
        vmovss  xmm1, dword ptr [rax+10h]
        vmovss  xmm3, dword ptr [rax+14h]
        vucomiss xmm1, xmm3
      }
      if ( _RBX->scrapeData.sndId != -1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+48h]
          vsubss  xmm2, xmm0, xmm1
          vsubss  xmm1, xmm3, xmm1
          vdivss  xmm0, xmm2, xmm1; val
          vmovaps xmm2, xmm7; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+0A4h]
        vcomiss xmm6, xmm2
      }
      if ( v13 || v14 )
      {
        __asm
        {
          vsubss  xmm0, xmm7, dword ptr [rax+18h]
          vmulss  xmm1, xmm6, dword ptr [rax+18h]
          vmulss  xmm4, xmm0, xmm2
          vaddss  xmm6, xmm4, xmm1
        }
      }
      sndId = _RBX->scrapeData.sndId;
      __asm
      {
        vmovaps xmm3, xmm7; pitch
        vmovaps xmm2, xmm6; volume
        vmovss  dword ptr [rbx+0A4h], xmm6
      }
      SND_UpdateVirtualLoopSound(sndId, &_RBX->position, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vmovaps xmm7, [rsp+58h+var_28]
        vmovaps xmm6, [rsp+58h+var_18]
      }
    }
  }
  else
  {
    HavokPhysicsSVFX_StopScrapeSound(worldId, _RBX);
    HavokPhysicsSVFX_PlayScrapeSound(worldId, _RBX, localClientNum);
  }
  vfxRule = _RBX->vfxRule;
  vfxScrapeRule = _RBX->scrapeData.vfxScrapeRule;
  if ( vfxRule == vfxScrapeRule || vfxRule && vfxScrapeRule && (scrapeParticleEffectAlias = vfxScrapeRule->scrapeParticleEffectAlias, v39 = vfxRule->scrapeParticleEffectAlias, LOBYTE(v9) = scrapeParticleEffectAlias != NULL, v9 == (v39 != NULL)) && (!v39 || !scrapeParticleEffectAlias || !I_stricmp(v39, scrapeParticleEffectAlias)) )
  {
    HavokPhysicsSVFX_UpdateScrapeParticle(_RBX, localClientNum);
  }
  else
  {
    HavokPhysicsSVFX_StopScrapeParticle(worldId, _RBX, localClientNum);
    HavokPhysicsSVFX_PlayScrapeParticle(worldId, _RBX, localClientNum);
  }
}

/*
==============
HavokPhysicsSVFX_UpdateScrapeParticle
==============
*/

void __fastcall HavokPhysicsSVFX_UpdateScrapeParticle(HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum, double _XMM2_8)
{
  __int64 v5; 
  __int64 v7; 
  unsigned int v9; 
  __int64 v10; 
  const float4 *v17; 
  vector3 *v18; 
  float4 normal[2]; 
  float4 v35[2]; 
  __int128 v36; 
  vec4_t quatOut; 

  v5 = localClientNum;
  _RDI = contact;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1923, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  v7 = v5 << 12;
  _RBX = NULL;
  v9 = 0;
  if ( g_particleSystemsGeneration[v7 + (_RDI->scrapeData.particleSystem & 0xFFF)].__all32 == _RDI->scrapeData.particleSystem )
    v9 = _RDI->scrapeData.particleSystem & 0xFFF;
  v10 = v7 + v9;
  if ( g_particleSystems[0][v10] >= (ParticleSystem *)0x1000 )
    _RBX = g_particleSystems[0][v10];
  if ( _RBX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovaps [rsp+0B8h+var_18], xmm6
    }
    HIDWORD(v36) = 0;
    __asm
    {
      vmovups xmm6, xmmword ptr [rsp+70h]
      vmovss  xmm6, xmm6, xmm0
      vinsertps xmm6, xmm6, dword ptr [rdi+2Ch], 10h
      vinsertps xmm6, xmm6, dword ptr [rdi+30h], 20h ; ' '
    }
    HavokPhysicsSVFX_GetParticleRotation(_RDI, &quatOut);
    __asm { vmovups xmm0, xmmword ptr [rsp+0B8h+quatOut] }
    Float4UnitQuatToAxis(v18, v17);
    __asm
    {
      vmovups xmmword ptr [rsp+0B8h+normal.v+10h], xmm1
      vmovups xmmword ptr [rsp+0B8h+normal.v], xmm0
      vmovups ymm3, ymmword ptr [rsp+0B8h+normal.v]
      vmovups ymmword ptr [rsp+0B8h+normal.v], ymm3
      vmovups xmmword ptr [rsp+0B8h+var_68.v], xmm2
    }
    Particle_AssertFloat4IsNormalized(normal);
    Particle_AssertFloat4IsNormalized(&normal[1]);
    Particle_AssertFloat4IsNormalized(v35);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0B8h+normal.v+10h]
      vmovups xmm3, xmmword ptr [rsp+0B8h+normal.v]
      vmovups xmm2, xmmword ptr [rsp+0B8h+var_68.v]
      vshufps xmm4, xmm3, xmm0, 44h ; 'D'
      vshufps xmm1, xmm2, xmm6, 44h ; 'D'
      vmovups xmmword ptr [rbx+10h], xmm0
      vmovups xmmword ptr [rbx], xmm3
      vshufps xmm3, xmm3, xmm0, 0EEh ; 'î'
      vshufps xmm0, xmm4, xmm1, 88h ; 'ˆ'
      vshufps xmm1, xmm4, xmm1, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0B8h+normal.v+10h], xmm1
      vmovups xmmword ptr [rsp+0B8h+normal.v], xmm0
      vmovups xmmword ptr [rbx+20h], xmm2
      vshufps xmm2, xmm2, xmm6, 0EEh ; 'î'
      vshufps xmm0, xmm3, xmm2, 88h ; 'ˆ'
      vshufps xmm1, xmm3, xmm2, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0B8h+var_68.v], xmm0
      vmovups ymm0, ymmword ptr [rsp+0B8h+normal.v]
      vmovups xmmword ptr [rsp+0B8h+var_68.v+10h], xmm1
      vmovups ymm1, ymmword ptr [rsp+0B8h+var_68.v]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovups xmmword ptr [rbx+30h], xmm6
      vmovaps xmm6, [rsp+0B8h+var_18]
      vmovups ymmword ptr [rbx+60h], ymm1
    }
  }
}

/*
==============
HavokPhysics_VelocityCachingModifier::manifoldCreatedCallback
==============
*/
void HavokPhysics_VelocityCachingModifier::manifoldCreatedCallback(HavokPhysics_VelocityCachingModifier *this, const hknpSimulationThreadContext *tl, const hknpModifierSharedData *sharedData, const hknpCdBody *cdBodyA, const hknpCdBody *cdBodyB, hknpModifier::ManifoldCreatedCallbackInput *input)
{
  _QWORD *Property; 

  Property = hknpManifoldCollisionCache::allocateProperty(input->m_collisionCache, USER_PROPERTY_0, 0x18u, 0x10u);
  if ( Property )
  {
    *Property = 0i64;
    Property[1] = 0i64;
    Property[2] = 0i64;
  }
  else
  {
    Com_PrintWarning(20, "Can't allocate VelocityProperties in the collision cache. This is probably because soft-contacts were enabled for the body. See IWH-88681");
  }
}

/*
==============
HavokPhysics_VelocityCachingModifier::postContactJacobianSetup
==============
*/
void HavokPhysics_VelocityCachingModifier::postContactJacobianSetup(HavokPhysics_VelocityCachingModifier *this, const hknpSimulationThreadContext *tl, const hknpSolverInfo *solverInfo, const hknpCdBodyBase *cdBodyA, const hknpCdBodyBase *cdBodyB, const hknpManifoldCollisionCache *cache)
{
  _WORD *v6; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  hkVector4f angularVelWorldOut; 

  if ( (cache->m_propertyKeysUsed & 0x10) != 0 )
  {
    v6 = (_WORD *)((char *)&cache->hknpCollisionCache + 16 * cache->m_propertiesStartOffsetDiv16 + ((cache->m_propertyOffsets >> 14) & 0x3C));
    if ( v6 )
    {
      _RCX = (hknpMotion *)cdBodyA->m_motion;
      _RBX = (hknpMotion *)cdBodyB->m_motion;
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx+40h]
        vmovups xmmword ptr [rsp+58h+angularVelWorldOut.m_quad], xmm0
        vmovss  [rsp+58h+var_38], xmm0
      }
      *v6 = HIWORD(v21);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+4]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[1] = HIWORD(v22);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+8]
        vmovss  [rsp+58h+var_38], xmm0
        vmovups xmm0, xmmword ptr [rbx+40h]
      }
      v6[2] = HIWORD(v23);
      __asm
      {
        vmovups xmmword ptr [rsp+58h+angularVelWorldOut.m_quad], xmm0
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[3] = HIWORD(v24);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+4]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[4] = HIWORD(v25);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+8]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[5] = HIWORD(v26);
      hknpMotion::getAngularVelocity(_RCX, &angularVelWorldOut);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[6] = HIWORD(v27);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+4]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[7] = HIWORD(v28);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+8]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[8] = HIWORD(v29);
      hknpMotion::getAngularVelocity(_RBX, &angularVelWorldOut);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[9] = HIWORD(v30);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+4]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[10] = HIWORD(v31);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+58h+angularVelWorldOut.m_quad+8]
        vmovss  [rsp+58h+var_38], xmm0
      }
      v6[11] = HIWORD(v32);
    }
  }
}

