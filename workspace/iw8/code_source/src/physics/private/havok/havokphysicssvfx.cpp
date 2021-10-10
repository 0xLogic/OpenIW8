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
  HavokPhysicsSVFXContact *v40; 
  Physics_WorldId v41; 
  int VFXEventAsset; 
  __int64 v43; 
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
    LODWORD(v43) = m_size;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( contactIndex ) < (unsigned)( fxWorld->contacts->getSize() )", "contactIndex doesn't index fxWorld->contacts->getSize()\n\t%i not in [0, %i)", v43, s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size) )
      __debugbreak();
  }
  v40 = &s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[(int)m_size];
  v40->numImpulseGivingContactPoints = numImpulseGivingContactPoints;
  v40->numCollisionContactPoints = numCollisionContactPoints;
  v40->isValid = 1;
  v40->bodyIDKey = v15;
  v40->shapeKey = v17;
  v40->position.v[0] = 32.0 * position->m_quad.m128_f32[0];
  v40->position.v[1] = 32.0 * position->m_quad.m128_f32[1];
  v40->position.v[2] = 32.0 * position->m_quad.m128_f32[2];
  *(_QWORD *)v40->normal.v = normal->m_quad.m128_u64[0];
  LODWORD(v40->normal.v[2]) = normal->m_quad.m128_i32[2];
  v40->surfaceFlagData[0] = *surfaceFlagData;
  v40->surfaceFlagData[1] = surfaceFlagData[1];
  v40->speed = 32.0 * speed;
  v40->masses[0] = *masses;
  v40->masses[1] = masses[1];
  v40->hitSpeed = v40->speed;
  v40->angle = angle;
  v40->hitAngle = angle;
  v41 = world->m_userData;
  v40->sfxAssetIndex = Physics_GetSFXEventAsset(v41, bodyIds->m_serialAndIndex, bodyIds[1].m_serialAndIndex, &v40->sfxEventAsset);
  VFXEventAsset = Physics_GetVFXEventAsset(v41, bodyIds->m_serialAndIndex, bodyIds[1].m_serialAndIndex, &v40->vfxEventAsset);
  v40->eventFlags |= 1u;
  v40->vfxAssetIndex = VFXEventAsset;
  v40->debugDrawEventFlags = v40->eventFlags;
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
  __int64 v4; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *contacts; 
  HavokPhysicsSVFXContact *m_data; 
  float *v7; 
  int v8; 
  vec4_t v9; 
  float v10; 
  float v11; 
  __int64 v12; 
  vec4_t color; 
  vec3_t end; 
  char _Buffer[256]; 

  v4 = worldId;
  if ( s_havokPhysicsSVFXWorlds[v4].isInitialized )
  {
    contacts = s_havokPhysicsSVFXWorlds[v4].contacts;
    m_data = contacts->m_data;
    if ( m_data != &m_data[contacts->m_size] )
    {
      v7 = &m_data->position.v[1];
      do
      {
        v8 = *((_DWORD *)v7 + 28);
        if ( (v8 & 1) != 0 )
        {
          v9 = colorGreen;
        }
        else if ( (v8 & 2) != 0 )
        {
          v9 = colorYellow;
        }
        else if ( (v8 & 4) != 0 )
        {
          v9 = colorRed;
        }
        else if ( m_data->isValid )
        {
          v9 = colorBlue;
        }
        else
        {
          v9 = colorCyan;
        }
        v10 = 12.0 * v7[3];
        end.v[0] = (float)(12.0 * v7[2]) + *(v7 - 1);
        v11 = 12.0 * v7[4];
        end.v[1] = v10 + *v7;
        end.v[2] = v11 + v7[1];
        color = v9;
        CG_DebugLine((const vec3_t *)(v7 - 1), &end, &color, 0, 0);
        v12 = *((int *)v7 - 5);
        if ( (_DWORD)v12 != -1 )
          CG_DebugLine((const vec3_t *)(v7 - 1), &s_havokPhysicsSVFXWorlds[v4].contacts->m_data[v12].position, &colorWhite, 0, 0);
        j_sprintf(_Buffer, "S:%.2f A:%.2f", v7[7], (float)(v7[10] * 57.295776));
        CL_AddDebugString((const vec3_t *)(v7 - 1), &color, 1.0, _Buffer, 0, 1);
        ++m_data;
        v7 += 50;
      }
      while ( m_data != &s_havokPhysicsSVFXWorlds[v4].contacts->m_data[s_havokPhysicsSVFXWorlds[v4].contacts->m_size] );
    }
  }
}

/*
==============
HavokPhysicsSVFX_DrawSFX
==============
*/
void HavokPhysicsSVFX_DrawSFX(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int v8; 
  hkMap<unsigned int,PhysicsSFXEventAsset *,hkMapOperations<unsigned int>,hkContainerHeapAllocator> *v9; 
  __int64 m_hashMod; 
  __int64 v11; 
  hkMapBase<unsigned int,PhysicsSFXEventAsset *,hkMapOperations<unsigned int> >::Pair *m_elem; 
  __int64 v13; 
  __int64 v14; 
  hkMapBase<unsigned int,PhysicsSFXEventAsset *,hkMapOperations<unsigned int> >::Pair *v15; 
  int m_size; 
  unsigned int v17; 
  float v18; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *m_data; 
  SndAliasList *Alias; 
  const char *v21; 
  const vec4_t *v22; 
  hkMemoryAllocator *v23; 
  hkMemoryAllocator *v24; 
  vec4_t *setColor; 
  hkArray<HavokPhysicsSVFX_DrawSVFX_AssetData,hkContainerHeapAllocator> data; 
  hkPointerMap<unsigned __int64,unsigned int,hkContainerHeapAllocator> dataMap; 
  __int64 v28; 
  char dest[264]; 

  v28 = -2i64;
  data.m_data = NULL;
  data.m_size = 0;
  data.m_capacityAndFlags = 0x80000000;
  dataMap.m_map.m_elem = NULL;
  dataMap.m_map.m_numElems = 0;
  dataMap.m_map.m_hashMod = -1;
  HavokPhysics_LockAssetRead();
  v8 = 0;
  v9 = g_physicsSFXEventAssets;
  m_hashMod = g_physicsSFXEventAssets->m_hashMod;
  if ( (int)m_hashMod >= 0 )
  {
    v11 = 0i64;
    m_elem = g_physicsSFXEventAssets->m_elem;
    do
    {
      if ( m_elem->key != -1 )
        break;
      ++v8;
      ++v11;
      ++m_elem;
    }
    while ( v11 <= m_hashMod );
  }
  if ( v8 <= (int)m_hashMod )
  {
    do
    {
      HavokPhysicsSVFX_DrawSFX_CollectAssetData(&v9->m_elem[v8++].val->rules, &data, &dataMap);
      v9 = g_physicsSFXEventAssets;
      v13 = g_physicsSFXEventAssets->m_hashMod;
      if ( v8 > (int)v13 )
        break;
      v14 = v8;
      v15 = &g_physicsSFXEventAssets->m_elem[v8];
      do
      {
        if ( v15->key != -1 )
          break;
        ++v8;
        ++v14;
        ++v15;
      }
      while ( v14 <= v13 );
    }
    while ( v8 <= (int)v13 );
  }
  HavokPhysics_UnlockAssetRead();
  Com_sprintf(dest, 0x100ui64, "%i SFXEvent Assets", (unsigned int)data.m_size);
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  m_size = data.m_size;
  if ( data.m_size > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFX_DrawSVFX_AssetData,hkBool (*)(HavokPhysicsSVFX_DrawSVFX_AssetData &,HavokPhysicsSVFX_DrawSVFX_AssetData &)>(data.m_data, 0, data.m_size - 1, HavokPhysicsSVFX_DrawSVFX_Sort);
    m_size = data.m_size;
  }
  v17 = 0;
  v18 = tabWidth + *x;
  *x = v18;
  m_data = data.m_data;
  if ( data.m_data != &data.m_data[m_size] )
  {
    do
    {
      Alias = SND_TryFindAlias(m_data->name);
      v21 = "Alias Doesn't Exist";
      if ( Alias )
        v21 = "Alias Exists";
      LODWORD(setColor) = m_data->count;
      Com_sprintf(dest, 0x100ui64, "%i: %i x %s: %s", v17, setColor, m_data->name, v21);
      v22 = &colorRed;
      if ( Alias )
        v22 = &colorWhite;
      Physics_DrawDebugString(scrPlace, *x, *y, dest, v22, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      ++m_data;
      ++v17;
    }
    while ( m_data != &data.m_data[data.m_size] );
    v18 = *x;
  }
  *x = v18 - tabWidth;
  v23 = hkMemHeapAllocator();
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::clearAndDeallocate(&dataMap.m_map, v23);
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::~hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>(&dataMap.m_map);
  v24 = hkMemHeapAllocator();
  data.m_size = 0;
  if ( data.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v24, data.m_data, 16, data.m_capacityAndFlags & 0x3FFFFFFF);
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
void HavokPhysicsSVFX_DrawVFX(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  int v8; 
  hkMap<unsigned int,PhysicsVFXEventAsset *,hkMapOperations<unsigned int>,hkContainerHeapAllocator> *v9; 
  __int64 m_hashMod; 
  __int64 v11; 
  hkMapBase<unsigned int,PhysicsVFXEventAsset *,hkMapOperations<unsigned int> >::Pair *m_elem; 
  __int64 v13; 
  __int64 v14; 
  hkMapBase<unsigned int,PhysicsVFXEventAsset *,hkMapOperations<unsigned int> >::Pair *v15; 
  int m_size; 
  unsigned int v17; 
  float v18; 
  HavokPhysicsSVFX_DrawSVFX_AssetData *m_data; 
  int v20; 
  const char *v21; 
  const vec4_t *v22; 
  hkMemoryAllocator *v23; 
  hkMemoryAllocator *v24; 
  vec4_t *setColor; 
  hkArray<HavokPhysicsSVFX_DrawSVFX_AssetData,hkContainerHeapAllocator> data; 
  hkPointerMap<unsigned __int64,unsigned int,hkContainerHeapAllocator> dataMap; 
  __int64 v28; 
  char dest[264]; 

  v28 = -2i64;
  data.m_data = NULL;
  data.m_size = 0;
  data.m_capacityAndFlags = 0x80000000;
  dataMap.m_map.m_elem = NULL;
  dataMap.m_map.m_numElems = 0;
  dataMap.m_map.m_hashMod = -1;
  HavokPhysics_LockAssetRead();
  v8 = 0;
  v9 = g_physicsVFXEventAssets;
  m_hashMod = g_physicsVFXEventAssets->m_hashMod;
  if ( (int)m_hashMod >= 0 )
  {
    v11 = 0i64;
    m_elem = g_physicsVFXEventAssets->m_elem;
    do
    {
      if ( m_elem->key != -1 )
        break;
      ++v8;
      ++v11;
      ++m_elem;
    }
    while ( v11 <= m_hashMod );
  }
  if ( v8 <= (int)m_hashMod )
  {
    do
    {
      HavokPhysicsSVFX_DrawVFX_CollectAssetData(&v9->m_elem[v8++].val->rules, &data, &dataMap);
      v9 = g_physicsVFXEventAssets;
      v13 = g_physicsVFXEventAssets->m_hashMod;
      if ( v8 > (int)v13 )
        break;
      v14 = v8;
      v15 = &g_physicsVFXEventAssets->m_elem[v8];
      do
      {
        if ( v15->key != -1 )
          break;
        ++v8;
        ++v14;
        ++v15;
      }
      while ( v14 <= v13 );
    }
    while ( v8 <= (int)v13 );
  }
  HavokPhysics_UnlockAssetRead();
  Com_sprintf(dest, 0x100ui64, "%i VFXEvent Assets", (unsigned int)data.m_size);
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  m_size = data.m_size;
  if ( data.m_size > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFX_DrawSVFX_AssetData,hkBool (*)(HavokPhysicsSVFX_DrawSVFX_AssetData &,HavokPhysicsSVFX_DrawSVFX_AssetData &)>(data.m_data, 0, data.m_size - 1, HavokPhysicsSVFX_DrawSVFX_Sort);
    m_size = data.m_size;
  }
  v17 = 0;
  v18 = tabWidth + *x;
  *x = v18;
  m_data = data.m_data;
  if ( data.m_data != &data.m_data[m_size] )
  {
    do
    {
      I_strlwr((char *)m_data->name);
      v20 = DB_XAssetExists(ASSET_TYPE_VFX, m_data->name);
      v21 = "Not Loaded";
      if ( v20 == 1 )
        v21 = "Loaded";
      LODWORD(setColor) = m_data->count;
      Com_sprintf(dest, 0x100ui64, "%i: %i x %s: %s", v17, setColor, m_data->name, v21);
      v22 = &colorRed;
      if ( v20 == 1 )
        v22 = &colorWhite;
      Physics_DrawDebugString(scrPlace, *x, *y, dest, v22, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      ++m_data;
      ++v17;
    }
    while ( m_data != &data.m_data[data.m_size] );
    v18 = *x;
  }
  *x = v18 - tabWidth;
  v23 = hkMemHeapAllocator();
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::clearAndDeallocate(&dataMap.m_map, v23);
  hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::~hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>(&dataMap.m_map);
  v24 = hkMemHeapAllocator();
  data.m_size = 0;
  if ( data.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v24, data.m_data, 16, data.m_capacityAndFlags & 0x3FFFFFFF);
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
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  vec3_t axis; 

  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1585, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  v4 = contact->normal.v[2];
  if ( v4 < 1.0 )
  {
    if ( v4 >= -0.99989998 )
    {
      v5 = (float)(v4 + 1.0) * 2.0;
      v6 = fsqrt(v5);
      LODWORD(v7) = COERCE_UNSIGNED_INT(contact->normal.v[1] * (float)(1.0 / v6)) ^ _xmm;
      v8 = contact->normal.v[0] * (float)(1.0 / v6);
      v9 = fsqrt((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v5 * 0.25));
      quatOut->v[0] = v7;
      quatOut->v[1] = v8;
      quatOut->v[3] = v6 * 0.5;
      quatOut->v[2] = 0.0;
      if ( v9 != 0.0 )
      {
        quatOut->v[0] = v7 * (float)(1.0 / v9);
        quatOut->v[3] = (float)(v6 * 0.5) * (float)(1.0 / v9);
        quatOut->v[1] = v8 * (float)(1.0 / v9);
        quatOut->v[2] = 0.0;
      }
    }
    else
    {
      axis.v[1] = 0.0;
      axis.v[2] = 0.0;
      axis.v[0] = FLOAT_1_0;
      AngleRadAxisToQuat(3.1415927, &axis, quatOut);
    }
  }
  else
  {
    *quatOut = quat_identity;
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
  void *v3; 
  hknpContactSolverEvent *v4; 
  int m_sizePaddedTo16_low; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  const hknpStreamContactJacobian *v11; 
  const hknpBodyId *p_m_filterBits; 
  hknpWorld *m_world; 
  unsigned __int64 m_userData; 
  signed int v15; 
  hkPointerMap<unsigned __int64,int,hkContainerHeapAllocator> *contactIndirection; 
  unsigned int val; 
  HavokPhysicsSVFXContact *v18; 
  const hknpStreamContactSolverTypes::JacModHdr *v19; 
  const hknpStreamContactJacobian *v20; 
  const hknpStreamContactSolverTypes::JacModHdr *v21; 
  __int64 v22; 
  hknpWorldReader *v23; 
  hknpWorldReader_vtbl *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  const hknpStreamContactJacobian *m_contactJacobian; 
  unsigned int v29; 
  const hknpStreamContactSolverTypes::JacModHdr *JacModHdr; 
  const hknpStreamContactJacobian *v31; 
  const hknpStreamContactSolverTypes::JacModHdr *v32; 
  int v33; 
  unsigned __int64 v34; 
  unsigned int v35; 
  const hknpTriangleShape *TriangleShape; 
  unsigned __int64 v48; 
  __int64 v49; 
  float v50; 
  unsigned int v51; 
  unsigned int *p_m_instanceId; 
  __int64 v53; 
  int v54; 
  __int64 v55; 
  __int64 m_size; 
  __int64 v57; 
  unsigned int v59; 
  const hknpTriangleShape *m_shape; 
  __int64 v69; 
  __int64 v70; 
  float v71; 
  int v72; 
  unsigned int *v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __m128 v81; 
  __m128 m_quad; 
  __m128 v83; 
  const hknpManifoldCollisionCache *ManifoldCollisionCache; 
  __int16 *v85; 
  hkSimdFloat32 *p_velocities; 
  __int64 v87; 
  hknpMotion *v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v91; 
  int v92; 
  const hknpStreamContactJacobian *v93; 
  unsigned int m_numPoints; 
  hkVector4f *m_positions; 
  float *p_m_serialAndIndex; 
  float *v97; 
  __int64 v98; 
  __m128 v99; 
  __m128 v100; 
  __m128 v102; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  __m128 v111; 
  __m128 v113; 
  __m128 v114; 
  __m128 v115; 
  __m128 v116; 
  const hknpWorld **v118; 
  __m128 v119; 
  __m128 v120; 
  __m128 v121; 
  __m128 v122; 
  float v129; 
  double v142; 
  __int64 v143; 
  hkSimdFloat32 *v144; 
  const hknpWorld *v145; 
  __int64 v146; 
  float zero; 
  float v148; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> v149; 
  unsigned int m_value; 
  hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> shapeKeys[2]; 
  hknpMotion *motionA; 
  unsigned int v153[2]; 
  __int64 v154; 
  __int64 v155; 
  hkVector4f v156; 
  __int64 v157; 
  unsigned __int64 key; 
  int v159; 
  __int64 v160; 
  hknpMotion *motionB; 
  __int16 v162[2]; 
  int v163; 
  unsigned __int64 userData; 
  __int16 v165[2]; 
  int v166; 
  unsigned __int64 v167; 
  __int64 v168; 
  const hknpTriangleShape *v169; 
  __int128 v170; 
  __int64 v171; 
  hknpShapeCollector v172; 
  hkVector4f normal; 
  hkcdManifold4 manifoldOut; 
  hknpInplaceTriangleShape v175; 
  hkVector4f v176; 
  __m128 v177; 
  __m128 v178; 
  __m128 v179; 
  hkSimdFloat32 velocities; 

  v3 = alloca(v2);
  v171 = -2i64;
  v4 = (hknpContactSolverEvent *)event;
  *(_QWORD *)&v170 = event;
  *(_QWORD *)&shapeKeys[0].m_value = input;
  m_sizePaddedTo16_low = LOBYTE(event[4].m_sizePaddedTo16);
  v159 = m_sizePaddedTo16_low;
  if ( m_sizePaddedTo16_low != 4 )
  {
    v7 = m_sizePaddedTo16_low - 1;
    if ( !v7 )
      goto LABEL_5;
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return;
LABEL_5:
      v9 = *(_QWORD *)&event[2].m_secondaryType;
      if ( v9 && (v10 = *(_QWORD *)(v9 + 56)) != 0 )
      {
        *(_WORD *)(v10 + 34) |= 2u;
        zero = 0.0;
        v9 = *(_QWORD *)&event[2].m_secondaryType;
      }
      else
      {
        LODWORD(zero) = -2147220992;
      }
      if ( v9 && (v22 = *(_QWORD *)(v9 + 56)) != 0 )
      {
        *(_WORD *)(v22 + 34) |= 4u;
        zero = 0.0;
      }
      else
      {
        LODWORD(zero) = -2147220992;
      }
      v23 = &input->m_world->hknpWorldReader;
      v24 = v23->__vftable;
      key = (unsigned __int64)&event[1].m_filterBits;
      v25 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v24->getBody)(v23, *(unsigned int *)&event[1].m_filterBits);
      v155 = v25;
      v26 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getBody)(&input->m_world->hknpWorldReader, v4->m_bodyIds[1].m_serialAndIndex);
      v160 = v26;
      motionA = (hknpMotion *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getMotion)(&input->m_world->hknpWorldReader, *(unsigned int *)(v25 + 64));
      motionB = (hknpMotion *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))input->m_world->getMotion)(&input->m_world->hknpWorldReader, *(unsigned int *)(v26 + 64));
      v27 = *(_QWORD *)(v25 + 96);
      v154 = v27;
      v157 = *(_QWORD *)(v26 + 96);
      m_contactJacobian = v4->m_contactJacobian;
      v29 = -1;
      if ( m_contactJacobian )
      {
        JacModHdr = hknpStreamContactJacobianUtil::getJacModHdr(m_contactJacobian);
        v149.m_value = (unsigned int)hknpStreamContactJacobianUtil::getJacModMfoldData(JacModHdr)->m_shapeKeyA;
        v31 = v4->m_contactJacobian;
        if ( v31 )
        {
          v32 = hknpStreamContactJacobianUtil::getJacModHdr(v31);
          m_value = hknpStreamContactJacobianUtil::getJacModMfoldData(v32)->m_shapeKeyB.m_value;
LABEL_40:
          hknpInplaceTriangleShape::hknpInplaceTriangleShape(&v175, 0.015);
          v33 = 0;
          v172.m_internal.m_shapeBuffer.m_shape = NULL;
          v172.m_internal.m_shapeBuffer.m_buffer = v172.m_internal.m_shapeBuffer.m_storage;
          v172.m_internal.m_shapeBuffer.m_bufferSize = 2048;
          v172.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpInplaceShapeBuffer<2048>::`vftable';
          v172.m_internal.m_shapeTags[0] = -1;
          v172.m_internal.m_shape = NULL;
          v172.m_parentShape = NULL;
          v172.m_shapeTagPath.m_size = 0;
          *(_QWORD *)&v172.m_internal.m_flags.m_storage = 8i64;
          *(__m256i *)v172.m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
          *(__m256i *)v172.m_transform.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
          v172.m_internal.m_scale.m_quad = g_vectorfConstants[6];
          zero = FLOAT_1_1920929eN7;
          v34 = 1i64;
          if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &zero) )
          {
            v35 = v172.m_internal.m_flags.m_storage | 4;
            v172.m_internal.m_flags.m_storage |= 4u;
            v176.m_quad = g_vectorfConstants[38];
            _XMM0 = g_vectorfConstants[35];
            _mm128_sub_ps(g_vectorfConstants[35], g_vectorfConstants[5]);
            _XMM1 = *(_OWORD *)hkMath::hkSse_signMask;
            __asm
            {
              vandnps xmm3, xmm1, xmm2
              vcmpleps xmm5, xmm3, xmm4
            }
            _XMM2 = 0i64;
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vpcmpeqd xmm1, xmm0, xmm0
              vblendps xmm2, xmm2, xmm1, 7
              vpand   xmm0, xmm5, xmm2
              vptest  xmm0, xmm2
            }
            if ( _CF )
              v172.m_internal.m_flags.m_storage = v35 | 1;
          }
          v172.m_internal.m_shapeTags[0] = -1;
          (*(void (__fastcall **)(_QWORD, hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant> *, __int64, hknpShapeCollector *))(**(_QWORD **)(v25 + 96) + 176i64))(*(_QWORD *)(v25 + 96), &v149, 1i64, &v172);
          if ( (v172.m_internal.m_flags.m_storage & 0x10) != 0 )
            TriangleShape = hknpShapeCollector::getTriangleShape(&v172, 0, (hknpTriangleShape *)&v175);
          else
            TriangleShape = (const hknpTriangleShape *)v172.m_internal.m_shape;
          v169 = TriangleShape;
          v163 = *(_DWORD *)(v25 + 108);
          v162[0] = *(_WORD *)(v25 + 106);
          if ( (*(_QWORD *)(v25 + 160) & 0xFFFFFFFF00000000ui64) != 0 || (v48 = 0i64, *(_DWORD *)(v27 + 40)) )
            v48 = 1i64;
          userData = v48;
          if ( v172.m_parentShape )
          {
            v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(**(_QWORD **)&shapeKeys[0].m_value + 32i64) + 24i64))(**(_QWORD **)&shapeKeys[0].m_value + 32i64);
            v168 = v49;
            v50 = *(float *)&v149.m_value;
            v148 = *(float *)&v149.m_value;
            LOWORD(zero) = v172.m_internal.m_shapeTags[0];
            v176.m_quad.m128_u64[0] = (unsigned __int64)v172.m_parentShape;
            v51 = -1;
            v153[0] = 0;
            if ( v172.m_shapeTagPath.m_size > 0 )
            {
              p_m_instanceId = &v172.m_shapeTagPath.m_data[0].m_instanceId;
              v53 = v155;
              v54 = 0;
              v55 = v49;
              m_size = v172.m_shapeTagPath.m_size;
              do
              {
                v57 = *((_QWORD *)p_m_instanceId - 1);
                v51 = v51 & hknpShapeKeyPath_usedBitsMaskTable[v54] | (((*p_m_instanceId + 1) << (32 - (v54 + *(_BYTE *)(v57 + 27)))) - 1);
                v54 += *(unsigned __int8 *)(v57 + 27);
                (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v55 + 32i64))(v55, *((unsigned __int16 *)p_m_instanceId - 8), 5i64, v53, v154, v57, v51, *((_QWORD *)p_m_instanceId + 1), v162);
                p_m_instanceId += 8;
                --m_size;
              }
              while ( m_size );
              v29 = -1;
              v50 = v148;
              v33 = 0;
              v4 = (hknpContactSolverEvent *)v170;
              v26 = v160;
              v49 = v168;
            }
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, unsigned __int64, float, const hknpTriangleShape *, __int16 *))(*(_QWORD *)v49 + 32i64))(v49, LOWORD(zero), 5i64, v155, v154, v176.m_quad.m128_u64[0], COERCE_FLOAT(LODWORD(v50)), v169, v162);
            v48 = userData;
            v34 = 1i64;
          }
          v153[0] = Physics_GetSurfaceFlagsFromUserData(v48);
          v172.m_internal.m_shape = NULL;
          v172.m_parentShape = NULL;
          v172.m_shapeTagPath.m_size = 0;
          *(_QWORD *)&v172.m_internal.m_flags.m_storage = 8i64;
          *(__m256i *)v172.m_transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
          *(__m256i *)v172.m_transform.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
          _XMM0 = g_vectorfConstants[6];
          v172.m_internal.m_scale.m_quad = g_vectorfConstants[6];
          v148 = FLOAT_1_1920929eN7;
          if ( hkMatrix3Impl<float>::isApproximatelyEqual((hkMatrix3Impl<float> *)&g_vectorfConstants[32], (const hkMatrix3Impl<float> *)&g_vectorfConstants[32], &v148) )
          {
            v59 = v172.m_internal.m_flags.m_storage | 4;
            v172.m_internal.m_flags.m_storage |= 4u;
            v176.m_quad = g_vectorfConstants[38];
            _XMM0 = g_vectorfConstants[35];
            _mm128_sub_ps(g_vectorfConstants[35], g_vectorfConstants[5]);
            _XMM1 = *(_OWORD *)hkMath::hkSse_signMask;
            __asm
            {
              vandnps xmm3, xmm1, xmm2
              vcmpleps xmm5, xmm3, xmm4
            }
            _XMM2 = 0i64;
            __asm
            {
              vpxor   xmm0, xmm0, xmm0
              vpcmpeqd xmm1, xmm0, xmm0
              vblendps xmm2, xmm2, xmm1, 7
              vpand   xmm0, xmm2, xmm5
              vptest  xmm0, xmm2
            }
            if ( _CF )
              v172.m_internal.m_flags.m_storage = v59 | 1;
          }
          v172.m_internal.m_shapeTags[0] = -1;
          (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, hknpShapeCollector *))(**(_QWORD **)(v26 + 96) + 176i64))(*(_QWORD *)(v26 + 96), &m_value, 1i64, &v172);
          if ( (v172.m_internal.m_flags.m_storage & 0x10) != 0 )
            m_shape = hknpShapeCollector::getTriangleShape(&v172, 0, (hknpTriangleShape *)&v175);
          else
            m_shape = (const hknpTriangleShape *)v172.m_internal.m_shape;
          v154 = (__int64)m_shape;
          v166 = *(_DWORD *)(v26 + 108);
          v165[0] = *(_WORD *)(v26 + 106);
          v69 = v157;
          if ( (*(_QWORD *)(v26 + 160) & 0xFFFFFFFF00000000ui64) != 0 || *(_DWORD *)(v157 + 40) )
          {
            v167 = 1i64;
          }
          else
          {
            v34 = 0i64;
            v167 = 0i64;
          }
          if ( v172.m_parentShape )
          {
            v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(**(_QWORD **)&shapeKeys[0].m_value + 32i64) + 24i64))(**(_QWORD **)&shapeKeys[0].m_value + 32i64);
            v155 = v70;
            v71 = *(float *)&m_value;
            v148 = *(float *)&m_value;
            LOWORD(zero) = v172.m_internal.m_shapeTags[0];
            v156.m_quad.m128_u64[0] = (unsigned __int64)v172.m_parentShape;
            v72 = 0;
            if ( v172.m_shapeTagPath.m_size > 0 )
            {
              v73 = &v172.m_shapeTagPath.m_data[0].m_instanceId;
              v74 = v160;
              v75 = v70;
              v76 = v172.m_shapeTagPath.m_size;
              do
              {
                v77 = *((_QWORD *)v73 - 1);
                v29 = v29 & hknpShapeKeyPath_usedBitsMaskTable[v72] | (((*v73 + 1) << (32 - (v72 + *(_BYTE *)(v77 + 27)))) - 1);
                v72 += *(unsigned __int8 *)(v77 + 27);
                (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64, unsigned int, _QWORD, __int16 *))(*(_QWORD *)v75 + 32i64))(v75, *((unsigned __int16 *)v73 - 8), 5i64, v74, v157, v77, v29, *((_QWORD *)v73 + 1), v165);
                v73 += 8;
                --v76;
              }
              while ( v76 );
              v71 = v148;
              v33 = 0;
              v4 = (hknpContactSolverEvent *)v170;
              v70 = v155;
              v69 = v157;
            }
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, unsigned __int64, float, __int64, __int16 *))(*(_QWORD *)v70 + 32i64))(v70, LOWORD(zero), 5i64, v160, v69, v156.m_quad.m128_u64[0], COERCE_FLOAT(LODWORD(v71)), v154, v165);
            v34 = v167;
          }
          v153[1] = Physics_GetSurfaceFlagsFromUserData(v34);
          hknpContactSolverEvent::calculateManifold(v4, **(const hknpWorld ***)&shapeKeys[0].m_value, &manifoldOut);
          normal.m_quad = (__m128)manifoldOut.m_normal;
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vpinsrw xmm0, xmm0, eax, 1
            vpshufd xmm1, xmm0, 40h ; '@'
          }
          v170 = _XMM1 ^ *(_OWORD *)&manifoldOut.m_normal;
          v81 = 0i64;
          v178 = 0i64;
          v179 = 0i64;
          m_quad = 0i64;
          v176.m_quad = 0i64;
          v83 = 0i64;
          v177 = 0i64;
          ManifoldCollisionCache = hknpContactJacobianUtil::getManifoldCollisionCache(v4->m_contactJacobian);
          if ( ManifoldCollisionCache )
          {
            if ( (ManifoldCollisionCache->m_propertyKeysUsed & 0x10) == 0 || (v85 = (__int16 *)((char *)&ManifoldCollisionCache->hknpCollisionCache + 16 * ManifoldCollisionCache->m_propertiesStartOffsetDiv16 + ((ManifoldCollisionCache->m_propertyOffsets >> 14) & 0x3C))) == NULL )
            {
LABEL_100:
              v172.m_internal.m_shapeBuffer.__vftable = (hknpInplaceShapeBuffer<2048>_vtbl *)hknpShapeBuffer::`vftable';
              if ( v172.m_internal.m_shapeBuffer.m_shape )
                ((void (__fastcall *)(hknpShape *, _QWORD))v172.m_internal.m_shapeBuffer.m_shape->~hkBaseObject)(v172.m_internal.m_shapeBuffer.m_shape, 0i64);
              return;
            }
            v178.m128_i32[0] = *v85 << 16;
            v178.m128_i32[1] = v85[1] << 16;
            v178.m128_i32[2] = v85[2] << 16;
            v179.m128_i32[0] = v85[3] << 16;
            v179.m128_i32[1] = v85[4] << 16;
            v179.m128_i32[2] = v85[5] << 16;
            v176.m_quad.m128_i32[0] = v85[6] << 16;
            v176.m_quad.m128_i32[1] = v85[7] << 16;
            v176.m_quad.m128_i32[2] = v85[8] << 16;
            v177.m128_i32[0] = v85[9] << 16;
            v177.m128_i32[1] = v85[10] << 16;
            v177.m128_i32[2] = v85[11] << 16;
            v81 = v178;
            v83 = v177;
            m_quad = v176.m_quad;
          }
          p_velocities = &velocities;
          v87 = 4i64;
          do
          {
            hkSimdFloat32::hkSimdFloat32(p_velocities++);
            --v87;
          }
          while ( v87 );
          v88 = motionA;
          hknpContactJacobianUtil::getProjVelDiff(v4->m_contactJacobian, motionA, motionB, &normal, &velocities);
          v89 = 0i64;
          v90 = 0i64;
          v176.m_quad = 0i64;
          v91 = 0i64;
          v156.m_quad = 0i64;
          v92 = 0;
          v93 = v4->m_contactJacobian;
          if ( v93 )
          {
            m_numPoints = v93->m_info.m_data.m_numPoints;
            if ( v93->m_info.m_data.m_numPoints )
            {
LABEL_84:
              if ( m_numPoints )
              {
                m_positions = manifoldOut.m_positions;
                p_m_serialAndIndex = (float *)&v4[1].m_bodyIds[0].m_serialAndIndex;
                v97 = p_m_serialAndIndex;
                v98 = m_numPoints;
                do
                {
                  v99 = m_positions->m_quad;
                  v89 = _mm128_add_ps(m_positions->m_quad, v89);
                  if ( *v97 != 0.0 )
                  {
                    v100 = _mm128_sub_ps(v99, v88->m_centerOfMass.m_quad);
                    _XMM3 = v88->m_orientation.m_vec.m_quad;
                    v102 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
                    __asm { vdpps   xmm1, xmm3, xmm13, 7Fh }
                    v104 = _mm128_sub_ps(_mm128_mul_ps(_XMM3, _mm_shuffle_ps(m_quad, m_quad, 201)), _mm128_mul_ps(m_quad, _mm_shuffle_ps(_XMM3, _XMM3, 201)));
                    v105 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(m_quad, _mm128_sub_ps(_mm128_mul_ps(v102, v102), g_vectorfConstants[21])), _mm128_mul_ps(_XMM1, _XMM3)), _mm128_mul_ps(_mm_shuffle_ps(v104, v104, 201), v102));
                    v106 = _mm128_add_ps(v105, v105);
                    v107 = _mm128_sub_ps(_mm128_mul_ps(v106, _mm_shuffle_ps(v100, v100, 201)), _mm128_mul_ps(v100, _mm_shuffle_ps(v106, v106, 201)));
                    v108 = _mm128_add_ps(v81, _mm_shuffle_ps(v107, v107, 201));
                    v109 = _mm128_sub_ps(v99, motionB->m_centerOfMass.m_quad);
                    _XMM3.m_vec.m_quad = (__m128)motionB->m_orientation;
                    v111 = _mm_shuffle_ps(_XMM3.m_vec.m_quad, _XMM3.m_vec.m_quad, 255);
                    __asm { vdpps   xmm1, xmm3, xmm14, 7Fh }
                    v113 = _mm128_sub_ps(_mm128_mul_ps(_XMM3.m_vec.m_quad, _mm_shuffle_ps(v83, v83, 201)), _mm128_mul_ps(v83, _mm_shuffle_ps(_XMM3.m_vec.m_quad, _XMM3.m_vec.m_quad, 201)));
                    v114 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(v83, _mm128_sub_ps(_mm128_mul_ps(v111, v111), g_vectorfConstants[21])), _mm128_mul_ps(_XMM1, _XMM3.m_vec.m_quad)), _mm128_mul_ps(_mm_shuffle_ps(v113, v113, 201), v111));
                    v115 = _mm128_add_ps(v114, v114);
                    v116 = _mm128_sub_ps(_mm128_mul_ps(v115, _mm_shuffle_ps(v109, v109, 201)), _mm128_mul_ps(v109, _mm_shuffle_ps(v115, v115, 201)));
                    ++v92;
                    v90 = _mm128_add_ps(v108, v176.m_quad);
                    v176.m_quad = v90;
                    v91 = _mm128_add_ps(_mm128_add_ps(v179, _mm_shuffle_ps(v116, v116, 201)), v156.m_quad);
                    v156.m_quad = v91;
                  }
                  ++v97;
                  ++m_positions;
                  --v98;
                }
                while ( v98 );
                _XMM12 = 0i64;
                v118 = *(const hknpWorld ***)&shapeKeys[0].m_value;
                if ( v92 > 0 )
                {
                  v119 = (__m128)LODWORD(FLOAT_1_0);
                  v119.m128_f32[0] = 1.0 / _mm_cvtepi32_ps((__m128i)m_numPoints).m128_f32[0];
                  v120 = _mm128_mul_ps(v89, _mm_shuffle_ps(v119, v119, 0));
                  v121 = (__m128)LODWORD(FLOAT_1_0);
                  v121.m128_f32[0] = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)v92).m128_f32[0];
                  v122 = _mm_shuffle_ps(v121, v121, 0);
                  _XMM4 = _mm128_sub_ps(_mm128_mul_ps(v90, v122), _mm128_mul_ps(v91, v122));
                  __asm
                  {
                    vdpps   xmm5, xmm4, xmm4, 7Fh
                    vcmpleps xmm3, xmm5, xmm12
                    vrsqrtps xmm1, xmm5
                  }
                  _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_XMM1, _mm128_mul_ps(_XMM1, _XMM5))), _mm128_mul_ps(_XMM1, *(__m128 *)hkMath::hkSse_floatHalf));
                  __asm { vandnps xmm0, xmm3, xmm2 }
                  _XMM6 = _mm128_mul_ps(_XMM0, _XMM4);
                  LODWORD(v129) = _mm128_mul_ps(_XMM0, _XMM5).m128_u32[0];
                  __asm
                  {
                    vpxor   xmm4, xmm4, xmm4
                    vpunpcklwd xmm3, xmm4, xmm1
                  }
                  _XMM0 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
                  __asm
                  {
                    vcmpeqps xmm2, xmm12, xmm0
                    vrcpps  xmm1, xmm0
                  }
                  _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM1, _XMM0)), _XMM1);
                  __asm { vandnps xmm2, xmm2, xmm1 }
                  *(float *)&motionA = *(float *)&_XMM2;
                  __asm { vpunpcklwd xmm3, xmm4, xmm1 }
                  _XMM0 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
                  __asm
                  {
                    vcmpeqps xmm4, xmm12, xmm0
                    vrcpps  xmm2, xmm0
                  }
                  _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM2, _XMM0)), _XMM2);
                  __asm { vandnps xmm0, xmm4, xmm2 }
                  *((float *)&motionA + 1) = *(float *)&_XMM0;
                  __asm { vdpps   xmm0, xmm6, [rbp+0F70h+var_F60], 0F70h+var_F40.m_shapeTagPath.m_data+7; X }
                  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
                  v142 = I_fclamp(*(float *)&_XMM0, -1.5707964, 1.5707964);
                  v143 = 0i64;
                  v144 = &velocities;
                  do
                  {
                    if ( *(float *)&v142 >= 1.4 )
                      break;
                    if ( *p_m_serialAndIndex != 0.0 && (float)(COERCE_FLOAT(*v144) / v129) < -0.1 && v129 > 0.1 )
                      ++v33;
                    ++v143;
                    ++p_m_serialAndIndex;
                    ++v144;
                  }
                  while ( v143 < m_numPoints );
                  v156.m_quad = v120;
                  v145 = *v118;
                  v176.m_quad = normal.m_quad;
                  if ( v159 == 1 )
                    HavokPhysicsSVFX_AddNewContact(v145, (const hknpBodyId *)key, &v149, v92, v33, &v156, &v176, v153, v129, (const float *)&motionA, *(const float *)&v142);
                  else
                    HavokPhysicsSVFX_UpdateContact(v145, (const hknpBodyId *)key, &v149, v92, v33, &v156, &v176, v153, v129, (const float *)&motionA, *(const float *)&v142);
                }
              }
              goto LABEL_100;
            }
          }
          else
          {
            m_numPoints = 0;
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 817, ASSERT_TYPE_ASSERT, "(numContactPoints > 0)", (const char *)&queryFormat, "numContactPoints > 0") )
            __debugbreak();
          v88 = motionA;
          v91 = 0i64;
          v90 = 0i64;
          goto LABEL_84;
        }
      }
      else
      {
        *(float *)&v149.m_value = NAN;
      }
      *(float *)&m_value = NAN;
      goto LABEL_40;
    }
    v11 = *(const hknpStreamContactJacobian **)&event[2].m_secondaryType;
    if ( v11 )
    {
      v19 = hknpStreamContactJacobianUtil::getJacModHdr(v11);
      shapeKeys[0] = hknpStreamContactJacobianUtil::getJacModMfoldData(v19)->m_shapeKeyA;
      v20 = v4->m_contactJacobian;
      if ( v20 )
      {
        v21 = hknpStreamContactJacobianUtil::getJacModHdr(v20);
        shapeKeys[1] = hknpStreamContactJacobianUtil::getJacModMfoldData(v21)->m_shapeKeyB;
      }
      else
      {
        shapeKeys[1].m_value = -1;
      }
      HavokPhysicsSVFX_RemoveContact(input->m_world, v4->m_bodyIds, shapeKeys);
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
        v15 = (unsigned int)hkMapBase<unsigned __int64,unsigned __int64,hkMapOperations<unsigned __int64>>::findKey(&s_havokPhysicsSVFXWorlds[m_userData].contactIndirection->m_map, &key);
        contactIndirection = s_havokPhysicsSVFXWorlds[m_userData].contactIndirection;
        if ( v15 <= contactIndirection->m_map.m_hashMod )
        {
          val = contactIndirection->m_map.m_elem[v15].val;
          if ( val >= s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size )
          {
            LODWORD(v146) = contactIndirection->m_map.m_elem[v15].val;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 623, ASSERT_TYPE_ASSERT, "(unsigned)( contactIndex ) < (unsigned)( fxWorld->contacts->getSize() )", "contactIndex doesn't index fxWorld->contacts->getSize()\n\t%i not in [0, %i)", v146, s_havokPhysicsSVFXWorlds[m_userData].contacts->m_size) )
              __debugbreak();
          }
          for ( ; val != -1; val = v18->next )
          {
            v18 = &s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data[val];
            v18->isValid = 0;
            v18->eventFlags |= 4u;
          }
        }
      }
    }
  }
}

/*
==============
HavokPhysicsSVFX_OrderEventsForSound
==============
*/
hkBool *HavokPhysicsSVFX_OrderEventsForSound(hkBool *result, HavokPhysicsSVFXContact **a, HavokPhysicsSVFXContact **b)
{
  HavokPhysicsSVFXContact *v3; 
  PhysicsSFXEventAsset *sfxEventAsset; 
  HavokPhysicsSVFXContact *v6; 
  PhysicsSFXEventAsset *v7; 
  int priority; 
  int v9; 

  v3 = *a;
  sfxEventAsset = (*a)->sfxEventAsset;
  if ( sfxEventAsset )
  {
    v6 = *b;
    v7 = (*b)->sfxEventAsset;
    if ( v7 )
    {
      priority = sfxEventAsset->priority;
      v9 = v7->priority;
      if ( priority == v9 )
        result->m_bool = v3->distanceSqFromPlayer < v6->distanceSqFromPlayer;
      else
        result->m_bool = priority > v9;
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
  HavokPhysicsSVFXContact *v3; 
  PhysicsVFXEventAsset *v4; 
  HavokPhysicsSVFXContact *v5; 
  PhysicsVFXEventAsset *vfxEventAsset; 
  int priority; 

  v3 = *a;
  if ( *a && (v4 = v3->vfxEventAsset) != NULL )
  {
    v5 = *b;
    if ( *b && (vfxEventAsset = v5->vfxEventAsset) != NULL )
    {
      priority = v4->priority;
      if ( priority == vfxEventAsset->priority )
        result->m_bool = v3->distanceSqFromPlayer < v5->distanceSqFromPlayer;
      else
        result->m_bool = priority > vfxEventAsset->priority;
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
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *potentialEventList; 
  int m_size; 
  __int64 v7; 
  hkArray<HavokPhysicsSVFXContact *,hkContainerHeapAllocator> *v8; 
  __int128 numHitSoundsRegainedPerFrame_low; 
  HavokPhysicsSVFXContact **m_data; 
  float hitSpeed; 
  float v14; 
  int v15; 
  __int128 numHitParticlesRegainedPerFrame_low; 
  HavokPhysicsSVFXContact **v19; 
  float v20; 
  float v21; 
  HavokPhysicsSVFXContact *v22; 
  int time; 
  const char **p_hitParticleEffectAlias; 
  const char *v25; 
  __m128 v27; 
  ParticleSystemHandle v30; 
  unsigned __int64 bodyIDKey_high; 
  unsigned __int8 *vfxBodyCount; 
  unsigned __int64 v33; 
  char v34; 
  __int64 duration; 
  ParticleSystemFlags particleSystemFlags; 
  __m128 v37; 
  vec4_t quatOut; 
  float4 emitterOrientationQuat; 
  float4 emitterPos; 
  char _Buffer[256]; 

  v2 = worldId;
  v3 = worldId;
  v4 = localClientNum;
  potentialEventList = s_havokPhysicsSVFXWorlds[v3].potentialEventList;
  m_size = potentialEventList->m_size;
  if ( m_size > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFXContact *,hkBool (*)(HavokPhysicsSVFXContact * &,HavokPhysicsSVFXContact * &)>(potentialEventList->m_data, 0, m_size - 1, HavokPhysicsSVFX_OrderEventsForSound);
    potentialEventList = s_havokPhysicsSVFXWorlds[v3].potentialEventList;
  }
  v7 = v2;
  v8 = potentialEventList;
  numHitSoundsRegainedPerFrame_low = LODWORD(s_havokPhysicsSVFXWorldDatas[v2].numHitSoundsRegainedPerFrame);
  *(float *)&numHitSoundsRegainedPerFrame_low = s_havokPhysicsSVFXWorldDatas[v2].numHitSoundsRegainedPerFrame + s_havokPhysicsSVFXWorldDatas[v2].numHitSoundsRemaining;
  _XMM1 = numHitSoundsRegainedPerFrame_low;
  __asm { vmaxss  xmm1, xmm1, xmm0 }
  s_havokPhysicsSVFXWorldDatas[v2].numHitSoundsRemaining = *(float *)&_XMM1;
  m_data = potentialEventList->m_data;
  if ( potentialEventList->m_data != &potentialEventList->m_data[potentialEventList->m_size] )
  {
    do
    {
      if ( s_havokPhysicsSVFXWorldDatas[v2].numHitSoundsRemaining <= 0.0 )
        break;
      if ( !*m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1962, ASSERT_TYPE_ASSERT, "(*contactIt)", (const char *)&queryFormat, "*contactIt") )
        __debugbreak();
      if ( physicsSVFX_debugDrawSFXHits )
      {
        if ( physicsSVFX_debugDrawSFXHitsTime )
        {
          if ( physicsSVFX_debugDrawSFXHits->current.enabled )
          {
            if ( physicsSVFX_debugDrawSFXHitsSpeedThreshold )
            {
              if ( physicsSVFX_debugDrawSFXHitsAngleThreshold )
              {
                hitSpeed = (*m_data)->hitSpeed;
                if ( hitSpeed >= physicsSVFX_debugDrawSFXHitsSpeedThreshold->current.value )
                {
                  v14 = (*m_data)->hitAngle * 57.295776;
                  if ( v14 <= physicsSVFX_debugDrawSFXHitsAngleThreshold->current.value )
                  {
                    j_sprintf(_Buffer, "S:%.2f A:%.2f", hitSpeed, v14);
                    CL_AddDebugString(&(*m_data)->position, &colorWhite, 1.0, _Buffer, 0, physicsSVFX_debugDrawSFXHitsTime->current.integer);
                  }
                }
              }
            }
          }
        }
      }
      if ( HavokPhysicsSVFX_PlayHitSound((Physics_WorldId)v2, *m_data, (LocalClientNum_t)v4) )
        s_havokPhysicsSVFXWorldDatas[v2].numHitSoundsRemaining = s_havokPhysicsSVFXWorldDatas[v2].numHitSoundsRemaining - 1.0;
      v8 = s_havokPhysicsSVFXWorlds[v3].potentialEventList;
      ++m_data;
      potentialEventList = v8;
    }
    while ( m_data != &v8->m_data[v8->m_size] );
  }
  v15 = v8->m_size;
  if ( v15 > 1 )
  {
    hkAlgorithm::quickSortRecursive<HavokPhysicsSVFXContact *,hkBool (*)(HavokPhysicsSVFXContact * &,HavokPhysicsSVFXContact * &)>(v8->m_data, 0, v15 - 1, HavokPhysicsSVFX_OrderEventsForVisuals);
    potentialEventList = s_havokPhysicsSVFXWorlds[v3].potentialEventList;
  }
  numHitParticlesRegainedPerFrame_low = LODWORD(s_havokPhysicsSVFXWorldDatas[v2].numHitParticlesRegainedPerFrame);
  *(float *)&numHitParticlesRegainedPerFrame_low = s_havokPhysicsSVFXWorldDatas[v2].numHitParticlesRegainedPerFrame + s_havokPhysicsSVFXWorldDatas[v2].numHitParticlesRemaining;
  _XMM1 = numHitParticlesRegainedPerFrame_low;
  __asm { vmaxss  xmm1, xmm1, xmm0 }
  s_havokPhysicsSVFXWorldDatas[v2].numHitParticlesRemaining = *(float *)&_XMM1;
  v19 = potentialEventList->m_data;
  if ( potentialEventList->m_data == &potentialEventList->m_data[potentialEventList->m_size] )
  {
    potentialEventList->m_size = 0;
  }
  else
  {
    do
    {
      if ( s_havokPhysicsSVFXWorldDatas[v7].numHitParticlesRemaining <= 0.0 )
        break;
      if ( !*v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1988, ASSERT_TYPE_ASSERT, "(*contactIt)", (const char *)&queryFormat, "*contactIt") )
        __debugbreak();
      if ( physicsSVFX_debugDrawVFXHits )
      {
        if ( physicsSVFX_debugDrawVFXHitsTime )
        {
          if ( physicsSVFX_debugDrawVFXHits->current.enabled )
          {
            if ( physicsSVFX_debugDrawVFXHitsSpeedThreshold )
            {
              if ( physicsSVFX_debugDrawVFXHitsAngleThreshold )
              {
                v20 = (*v19)->hitSpeed;
                if ( v20 >= physicsSVFX_debugDrawVFXHitsSpeedThreshold->current.value )
                {
                  v21 = (*v19)->hitAngle * 57.295776;
                  if ( v21 <= physicsSVFX_debugDrawVFXHitsAngleThreshold->current.value )
                  {
                    j_sprintf(_Buffer, "S:%.2f A:%.2f", v20, v21);
                    CL_AddDebugString(&(*v19)->position, &colorWhite, 1.0, _Buffer, 0, physicsSVFX_debugDrawVFXHitsTime->current.integer);
                  }
                }
              }
            }
          }
        }
      }
      v22 = *v19;
      if ( !*v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1688, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
        __debugbreak();
      time = CG_GetLocalClientGlobals((const LocalClientNum_t)v4)->time;
      p_hitParticleEffectAlias = (const char **)&v22->vfxRule->hitParticleEffectAlias;
      if ( p_hitParticleEffectAlias )
      {
        v25 = *p_hitParticleEffectAlias;
        if ( *p_hitParticleEffectAlias )
        {
          if ( *v25 )
          {
            if ( (unsigned int)v4 >= 2 )
            {
              LODWORD(particleSystemFlags) = 2;
              LODWORD(duration) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", duration, particleSystemFlags) )
                __debugbreak();
            }
            v37.m128_i32[3] = 0;
            v27 = v37;
            v27.m128_f32[0] = v22->position.v[0];
            _XMM3 = v27;
            __asm
            {
              vinsertps xmm3, xmm3, dword ptr [rbx+2Ch], 10h
              vinsertps xmm3, xmm3, dword ptr [rbx+30h], 20h ; ' '
            }
            v37 = _XMM3;
            emitterPos.v = _XMM3;
            HavokPhysicsSVFX_GetParticleRotation(v22, &quatOut);
            emitterOrientationQuat.v = (__m128)quatOut;
            v30 = ParticleManager::AddSystemByName(&g_particleManager[v4], (LocalClientNum_t)v4, v25, &emitterPos, &emitterOrientationQuat, time, PARTICLE_SYSTEM_FLAG_AUTO_DELETE, NULL);
            if ( v22->vfxAssetIndex )
              LODWORD(bodyIDKey_high) = v22->bodyIDKey;
            else
              bodyIDKey_high = HIDWORD(v22->bodyIDKey);
            vfxBodyCount = s_havokPhysicsSVFXWorlds[v3].vfxBodyCount;
            v33 = bodyIDKey_high & 0xFFFFFF;
            v34 = -1;
            if ( (unsigned int)vfxBodyCount[v33] + 1 < 0xFF )
              v34 = vfxBodyCount[v33] + 1;
            vfxBodyCount[v33] = v34;
            if ( v30 )
              s_havokPhysicsSVFXWorldDatas[v7].numHitParticlesRemaining = s_havokPhysicsSVFXWorldDatas[v7].numHitParticlesRemaining - 1.0;
          }
        }
      }
      potentialEventList = s_havokPhysicsSVFXWorlds[v3].potentialEventList;
      ++v19;
    }
    while ( v19 != &potentialEventList->m_data[potentialEventList->m_size] );
    potentialEventList->m_size = 0;
  }
}

/*
==============
HavokPhysicsSVFX_PlayHitSound
==============
*/
bool HavokPhysicsSVFX_PlayHitSound(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  PhysicsSFXEventAssetSoundRule *sfxRule; 
  const char *hitSoundAlias; 
  unsigned __int64 bodyIDKey_high; 
  unsigned __int64 v9; 
  char v10; 
  unsigned __int8 *sfxBodyCount; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  bool v14; 
  unsigned __int8 v15; 
  unsigned __int64 PhysicsSndEntHandle; 

  v3 = worldId;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1631, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  sfxRule = contact->sfxRule;
  if ( !sfxRule )
    return 0;
  hitSoundAlias = sfxRule->hitSoundAlias;
  if ( !sfxRule->hitSoundAlias || !*hitSoundAlias )
    return 0;
  if ( contact->sfxAssetIndex )
    LODWORD(bodyIDKey_high) = contact->bodyIDKey;
  else
    bodyIDKey_high = HIDWORD(contact->bodyIDKey);
  v9 = bodyIDKey_high & 0xFFFFFF;
  v10 = -1;
  sfxBodyCount = s_havokPhysicsSVFXWorlds[v3].sfxBodyCount;
  if ( (unsigned int)sfxBodyCount[v9] + 1 < 0xFF )
    v10 = sfxBodyCount[v9] + 1;
  sfxBodyCount[v9] = v10;
  if ( !HavokPhysics_IsRigidBodyValid((Physics_WorldId)v3, (hknpBodyId)bodyIDKey_high) )
    return 0;
  Ref = HavokPhysics_GetRef((Physics_WorldId)v3, (hknpBodyId)bodyIDKey_high);
  RefSystem = Physics_GetRefSystem(Ref);
  v14 = RefSystem == Physics_RefSystem_Ragdoll;
  if ( RefSystem == Physics_RefSystem_Ragdoll )
    LODWORD(bodyIDKey_high) = Physics_GetRefSubSystem(Ref);
  v15 = truncate_cast<unsigned char,enum Physics_WorldId>((Physics_WorldId)v3);
  PhysicsSndEntHandle = CG_GeneratePhysicsSndEntHandle(localClientNum, v15, v14, bodyIDKey_high);
  if ( contact->sfxHitSoundVolumeScalar < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1664, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundVolumeScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundVolumeScalar >= 0.f") )
    __debugbreak();
  if ( contact->sfxHitSoundPitchScalar < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1665, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundPitchScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundPitchScalar >= 0.f") )
    __debugbreak();
  return SND_PlaySurfaceSound(hitSoundAlias, (contact->surfaceFlagData[1 - contact->sfxAssetIndex] >> 19) & 0x3F, PhysicsSndEntHandle, contact->sfxHitSoundVolumeScalar, contact->sfxHitSoundPitchScalar, 0, &contact->position) != 0;
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
  float v10; 
  ParticleManager *v11; 
  __m128 v; 
  ParticleSystemHandle v16; 
  float4 emitterPos; 
  vec4_t quatOut; 
  float4 emitterOrientationQuat; 

  v3 = worldId;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1847, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  spawnTimeMsec = CG_GetLocalClientGlobals(localClientNum)->time;
  vfxRule = contact->vfxRule;
  contact->scrapeData.vfxScrapeRule = vfxRule;
  if ( !vfxRule )
    return 0;
  scrapeParticleEffectAlias = vfxRule->scrapeParticleEffectAlias;
  if ( !scrapeParticleEffectAlias || !*scrapeParticleEffectAlias )
    return 0;
  ParticleManager = ParticleManager::GetParticleManager(localClientNum);
  v10 = contact->position.v[0];
  v11 = ParticleManager;
  emitterPos.v.m128_i32[3] = 0;
  v = emitterPos.v;
  v.m128_f32[0] = v10;
  _XMM3 = v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdi+2Ch], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+30h], 20h ; ' '
  }
  emitterPos.v = _XMM3;
  HavokPhysicsSVFX_GetParticleRotation(contact, &quatOut);
  emitterOrientationQuat.v = (__m128)quatOut;
  v16 = ParticleManager::AddSystemByName(v11, localClientNum, scrapeParticleEffectAlias, &emitterPos, &emitterOrientationQuat, spawnTimeMsec, PARTICLE_SYSTEM_FLAG_AUTO_DELETE, NULL);
  contact->scrapeData.particleSystem = v16;
  if ( v16 )
  {
    ++s_havokPhysicsSVFXWorldDatas[v3].numScrapeParticlesPlaying;
    contact->scrapeData.updateTimer = 0.0;
  }
  return v16 != PARTICLE_SYSTEM_INVALID_HANDLE;
}

/*
==============
HavokPhysicsSVFX_PlayScrapeSound
==============
*/
bool HavokPhysicsSVFX_PlayScrapeSound(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  PhysicsSFXEventAssetSoundRule *sfxRule; 
  const char *scrapeSoundAlias; 
  float v8; 
  PhysicsSFXEventAssetSoundRule *sfxScrapeRule; 
  float scrapeSoundVolumeSpeedThresholdMin; 
  float scrapeSoundVolumeSpeedThresholdMax; 
  double v12; 
  bool v13; 
  unsigned __int64 bodyIDKey_high; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  bool v17; 
  unsigned __int8 v18; 
  unsigned __int64 PhysicsSndEntHandle; 
  int v20; 

  v3 = worldId;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1738, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  sfxRule = contact->sfxRule;
  contact->scrapeData.sfxScrapeRule = sfxRule;
  if ( !sfxRule )
    return 0;
  scrapeSoundAlias = sfxRule->scrapeSoundAlias;
  if ( !scrapeSoundAlias || !*scrapeSoundAlias )
    return 0;
  v8 = FLOAT_1_0;
  if ( sfxRule->scrapeSoundVolumeSpeedThresholdMin > sfxRule->scrapeSoundVolumeSpeedThresholdMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1756, ASSERT_TYPE_ASSERT, "(contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax >= contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin)", (const char *)&queryFormat, "contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax >= contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin") )
    __debugbreak();
  sfxScrapeRule = contact->scrapeData.sfxScrapeRule;
  scrapeSoundVolumeSpeedThresholdMin = sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin;
  scrapeSoundVolumeSpeedThresholdMax = sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax;
  if ( scrapeSoundVolumeSpeedThresholdMin != scrapeSoundVolumeSpeedThresholdMax )
  {
    v12 = I_fclamp((float)(contact->speed - scrapeSoundVolumeSpeedThresholdMin) / (float)(scrapeSoundVolumeSpeedThresholdMax - scrapeSoundVolumeSpeedThresholdMin), 0.0, 1.0);
    v8 = *(float *)&v12;
  }
  v13 = contact->sfxAssetIndex == 0;
  contact->scrapeData.sndVolume = v8;
  if ( v13 )
    bodyIDKey_high = HIDWORD(contact->bodyIDKey);
  else
    LODWORD(bodyIDKey_high) = contact->bodyIDKey;
  Ref = HavokPhysics_GetRef((Physics_WorldId)v3, (hknpBodyId)bodyIDKey_high);
  RefSystem = Physics_GetRefSystem(Ref);
  v17 = RefSystem == Physics_RefSystem_Ragdoll;
  if ( RefSystem == Physics_RefSystem_Ragdoll )
    LODWORD(bodyIDKey_high) = Physics_GetRefSubSystem(Ref);
  v18 = truncate_cast<unsigned char,enum Physics_WorldId>((Physics_WorldId)v3);
  PhysicsSndEntHandle = CG_GeneratePhysicsSndEntHandle(localClientNum, v18, v17, bodyIDKey_high);
  v20 = SND_PlayVirtualLoopSound(scrapeSoundAlias, PhysicsSndEntHandle, &contact->position, contact->scrapeData.sndVolume, 1.0);
  contact->scrapeData.sndId = v20;
  if ( v20 != -1 )
  {
    ++s_havokPhysicsSVFXWorldDatas[v3].numScrapeSoundsPlaying;
    contact->scrapeData.updateTimer = 0.0;
  }
  return v20 != -1;
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
  __int64 v8; 
  PhysicsSFXEventAssetRule *v9; 
  int numentries; 
  int v11; 
  int v12; 
  char *scrapeSoundAlias; 
  int v14; 
  bool v15; 
  __int64 v16; 
  int v17; 
  float v18; 
  __int64 v19; 
  float *v20; 
  char *v21; 
  __int64 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int64 v27; 
  float speed; 
  __int64 v29; 
  float *v30; 
  char *v31; 
  float v32; 
  float v33; 
  float v34; 
  __int64 v35; 
  float v36; 
  __int64 v37; 
  char *v38; 
  float v39; 
  float v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  float *v44; 
  unsigned __int64 bodyIDKey_high; 
  __int64 v46; 
  int v47; 
  int v48; 
  __int64 v49; 
  char *v50; 

  v8 = worldId;
  while ( 1 )
  {
    if ( !rules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1099, ASSERT_TYPE_ASSERT, "(rules)", (const char *)&queryFormat, "rules") )
      __debugbreak();
    if ( rules->numrules > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1100, ASSERT_TYPE_ASSERT, "(rules->numrules <= 1)", (const char *)&queryFormat, "rules->numrules <= 1") )
      __debugbreak();
    if ( !rules->numrules )
      return 0i64;
    v9 = rules->rules;
    switch ( v9->type )
    {
      case Types_PhysicsSFXEventSoundRule:
        return &v9->u;
      case Types_PhysicsSFXEventMaterialRule:
        numentries = v9->u.materialRule.numentries;
        v11 = 0;
        v12 = numentries;
        if ( numentries > 0 )
        {
          scrapeSoundAlias = v9->u.soundRule.scrapeSoundAlias;
          do
          {
            v14 = *(_DWORD *)scrapeSoundAlias;
            if ( !*(_DWORD *)scrapeSoundAlias || v14 == 36 )
              v12 = v11;
            if ( ((contact->surfaceFlagData[1 - contact->sfxAssetIndex] >> 19) & 0x3F) == v14 )
              break;
            ++v11;
            scrapeSoundAlias += 24;
          }
          while ( v11 < numentries );
        }
        v15 = v11 < numentries;
        if ( v11 < numentries )
          goto LABEL_20;
        if ( v12 >= numentries )
          return 0i64;
        v15 = v11 < numentries;
LABEL_20:
        if ( v15 )
          v12 = v11;
        rules = (PhysicsSFXEventAssetRules *)&v9->u.soundRule.scrapeSoundAlias[24 * v12 + 8];
        continue;
      case Types_PhysicsSFXEventAngleRule:
        v16 = v9->u.materialRule.numentries;
        v17 = 0;
        v18 = contact->angle * 57.295776;
        v19 = 0i64;
        if ( (int)v16 > 0 )
        {
          v20 = (float *)v9->u.soundRule.scrapeSoundAlias;
          do
          {
            if ( v18 <= *v20 )
              break;
            ++v17;
            ++v19;
            v20 += 10;
          }
          while ( v19 < v16 );
        }
        if ( v17 >= (int)v16 )
          return 0i64;
        v21 = v9->u.soundRule.scrapeSoundAlias;
        v22 = 5 * v19;
        v23 = *(float *)&v21[40 * v19 + 4];
        v24 = *(float *)&v21[40 * v19 + 8];
        if ( !v17 )
        {
          if ( v23 != v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1170, ASSERT_TYPE_ASSERT, "(angleRule->entries[entryId].hitSoundVolumeModifierMin == angleRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "angleRule->entries[entryId].hitSoundVolumeModifierMin == angleRule->entries[entryId].hitSoundVolumeModifierMax") )
            __debugbreak();
          if ( *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v19 + 16] != *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v19 + 12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1171, ASSERT_TYPE_ASSERT, "(angleRule->entries[entryId].hitSoundPitchModifierMin == angleRule->entries[entryId].hitSoundPitchModifierMax)", (const char *)&queryFormat, "angleRule->entries[entryId].hitSoundPitchModifierMin == angleRule->entries[entryId].hitSoundPitchModifierMax") )
            __debugbreak();
          goto LABEL_35;
        }
        if ( v23 > v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1177, ASSERT_TYPE_ASSERT, "(angleRule->entries[entryId].hitSoundVolumeModifierMin <= angleRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "angleRule->entries[entryId].hitSoundVolumeModifierMin <= angleRule->entries[entryId].hitSoundVolumeModifierMax") )
          __debugbreak();
        if ( *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v19 + 16] < *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v19 + 12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1178, ASSERT_TYPE_ASSERT, "(angleRule->entries[entryId].hitSoundPitchModifierMin <= angleRule->entries[entryId].hitSoundPitchModifierMax)", (const char *)&queryFormat, "angleRule->entries[entryId].hitSoundPitchModifierMin <= angleRule->entries[entryId].hitSoundPitchModifierMax") )
          __debugbreak();
        v26 = (float)(v18 - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v19 - 40]) / (float)(*(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v19] - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v19 - 40]);
        v25 = v26;
        if ( (v26 < 0.0 || v26 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1180, ASSERT_TYPE_ASSERT, "(lerpValue >= 0.f && lerpValue <= 1.f)", (const char *)&queryFormat, "lerpValue >= 0.f && lerpValue <= 1.f") )
          __debugbreak();
        goto LABEL_46;
      case Types_PhysicsSFXEventSpeedRule:
        v27 = v9->u.materialRule.numentries;
        v17 = 0;
        speed = contact->speed;
        v29 = 0i64;
        if ( (int)v27 > 0 )
        {
          v30 = (float *)v9->u.soundRule.scrapeSoundAlias;
          do
          {
            if ( speed >= *v30 )
              break;
            ++v17;
            ++v29;
            v30 += 10;
          }
          while ( v29 < v27 );
        }
        if ( v17 >= (int)v27 )
          return 0i64;
        v31 = v9->u.soundRule.scrapeSoundAlias;
        v22 = 5 * v29;
        v32 = *(float *)&v31[40 * v29 + 4];
        v33 = *(float *)&v31[40 * v29 + 8];
        if ( !v17 )
        {
          if ( v32 != v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1207, ASSERT_TYPE_ASSERT, "(speedRule->entries[entryId].hitSoundVolumeModifierMin == speedRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "speedRule->entries[entryId].hitSoundVolumeModifierMin == speedRule->entries[entryId].hitSoundVolumeModifierMax") )
            __debugbreak();
          if ( *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 16] == *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 12] || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1208, ASSERT_TYPE_ASSERT, "(speedRule->entries[entryId].hitSoundPitchModifierMin == speedRule->entries[entryId].hitSoundPitchModifierMax)", (const char *)&queryFormat, "speedRule->entries[entryId].hitSoundPitchModifierMin == speedRule->entries[entryId].hitSoundPitchModifierMax") )
            goto LABEL_35;
          goto LABEL_59;
        }
        if ( v32 > v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1214, ASSERT_TYPE_ASSERT, "(speedRule->entries[entryId].hitSoundVolumeModifierMin <= speedRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "speedRule->entries[entryId].hitSoundVolumeModifierMin <= speedRule->entries[entryId].hitSoundVolumeModifierMax") )
          __debugbreak();
        if ( *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 16] < *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1215, ASSERT_TYPE_ASSERT, "(speedRule->entries[entryId].hitSoundPitchModifierMin <= speedRule->entries[entryId].hitSoundPitchModifierMax)", (const char *)&queryFormat, "speedRule->entries[entryId].hitSoundPitchModifierMin <= speedRule->entries[entryId].hitSoundPitchModifierMax") )
          __debugbreak();
        v34 = 1.0 - (float)((float)(speed - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 - 40]) / (float)(*(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29] - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 - 40]));
        v25 = v34;
        if ( v34 >= 0.0 && v34 <= 1.0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1217, ASSERT_TYPE_ASSERT, "(lerpValue >= 0.f && lerpValue <= 1.f)", (const char *)&queryFormat, "lerpValue >= 0.f && lerpValue <= 1.f") )
          goto LABEL_46;
        goto LABEL_69;
      case Types_PhysicsSFXEventMassRule:
        v35 = v9->u.materialRule.numentries;
        v17 = 0;
        v29 = 0i64;
        v36 = contact->masses[1 - contact->sfxAssetIndex];
        if ( (int)v35 > 0 )
        {
          v37 = 0i64;
          do
          {
            if ( v36 == 0.0 )
              break;
            if ( v36 >= *(float *)&v9->u.soundRule.scrapeSoundAlias[v37] )
              break;
            ++v17;
            ++v29;
            v37 += 40i64;
          }
          while ( v29 < v35 );
        }
        if ( v17 >= (int)v35 )
          return 0i64;
        v38 = v9->u.soundRule.scrapeSoundAlias;
        v22 = 5 * v29;
        v39 = *(float *)&v38[40 * v29 + 4];
        v40 = *(float *)&v38[40 * v29 + 8];
        if ( !v17 )
        {
          if ( v39 != v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1244, ASSERT_TYPE_ASSERT, "(massRule->entries[entryId].hitSoundVolumeModifierMin == massRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "massRule->entries[entryId].hitSoundVolumeModifierMin == massRule->entries[entryId].hitSoundVolumeModifierMax") )
            __debugbreak();
          if ( *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 16] == *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 12] || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1245, ASSERT_TYPE_ASSERT, "(massRule->entries[entryId].hitSoundPitchModifierMin == massRule->entries[entryId].hitSoundPitchModifierMax)", (const char *)&queryFormat, "massRule->entries[entryId].hitSoundPitchModifierMin == massRule->entries[entryId].hitSoundPitchModifierMax") )
          {
LABEL_35:
            *volumeScalar = *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 4] * *volumeScalar;
            *pitchScalar = *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 12] * *pitchScalar;
          }
          else
          {
LABEL_59:
            __debugbreak();
            *volumeScalar = *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 4] * *volumeScalar;
            *pitchScalar = *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 12] * *pitchScalar;
          }
          goto LABEL_47;
        }
        if ( v39 > v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1251, ASSERT_TYPE_ASSERT, "(massRule->entries[entryId].hitSoundVolumeModifierMin <= massRule->entries[entryId].hitSoundVolumeModifierMax)", (const char *)&queryFormat, "massRule->entries[entryId].hitSoundVolumeModifierMin <= massRule->entries[entryId].hitSoundVolumeModifierMax") )
          __debugbreak();
        if ( *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 16] < *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1252, ASSERT_TYPE_ASSERT, "(massRule->entries[entryId].hitSoundPitchModifierMin <= massRule->entries[entryId].hitSoundPitchModifierMax)", (const char *)&queryFormat, "massRule->entries[entryId].hitSoundPitchModifierMin <= massRule->entries[entryId].hitSoundPitchModifierMax") )
          __debugbreak();
        v34 = 1.0 - (float)((float)(v36 - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 - 40]) / (float)(*(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29] - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 - 40]));
        v25 = v34;
        if ( v34 >= 0.0 && v34 <= 1.0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1254, ASSERT_TYPE_ASSERT, "(lerpValue >= 0.f && lerpValue <= 1.f)", (const char *)&queryFormat, "lerpValue >= 0.f && lerpValue <= 1.f") )
        {
LABEL_46:
          *volumeScalar = (float)((float)((float)(*(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 8] - *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 4]) * v25) + *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 4]) * *volumeScalar;
          *pitchScalar = (float)((float)((float)(*(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 16] - *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 12]) * v25) + *(float *)&v9->u.soundRule.scrapeSoundAlias[8 * v22 + 12]) * *pitchScalar;
LABEL_47:
          rules = (PhysicsSFXEventAssetRules *)&v9->u.soundRule.scrapeSoundAlias[40 * v17 + 24];
          continue;
        }
LABEL_69:
        __debugbreak();
        *volumeScalar = (float)((float)((float)(*(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 8] - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 4]) * v34) + *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 4]) * *volumeScalar;
        *pitchScalar = (float)((float)((float)(*(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 16] - *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 12]) * v25) + *(float *)&v9->u.soundRule.scrapeSoundAlias[40 * v29 + 12]) * *pitchScalar;
        rules = (PhysicsSFXEventAssetRules *)&v9->u.soundRule.scrapeSoundAlias[40 * v17 + 24];
        break;
      case Types_PhysicsSFXEventGravityRule:
      case Types_PhysicsSFXEventAtmosphereRule:
        if ( v9->u.materialRule.numentries <= 0 )
          return 0i64;
        rules = (PhysicsSFXEventAssetRules *)(v9->u.soundRule.scrapeSoundAlias + 8);
        continue;
      case Types_PhysicsSFXEventCameraDistanceRule:
        v41 = v9->u.materialRule.numentries;
        v42 = 0;
        v43 = 0i64;
        if ( (int)v41 > 0 )
        {
          v44 = (float *)v9->u.soundRule.scrapeSoundAlias;
          do
          {
            if ( contact->distanceSqFromPlayer < (float)(*v44 * *v44) )
              break;
            ++v42;
            ++v43;
            v44 += 6;
          }
          while ( v43 < v41 );
        }
        if ( v42 >= (int)v41 )
          return 0i64;
        rules = (PhysicsSFXEventAssetRules *)&v9->u.soundRule.scrapeSoundAlias[24 * v42 + 8];
        continue;
      case Types_PhysicsSFXEventFrequencyRule:
        if ( contact->sfxAssetIndex )
          LODWORD(bodyIDKey_high) = contact->bodyIDKey;
        else
          bodyIDKey_high = HIDWORD(contact->bodyIDKey);
        v46 = v9->u.materialRule.numentries;
        v47 = 0;
        v48 = s_havokPhysicsSVFXWorlds[v8].sfxBodyCount[bodyIDKey_high & 0xFFFFFF];
        v49 = 0i64;
        if ( (int)v46 > 0 )
        {
          v50 = v9->u.soundRule.scrapeSoundAlias;
          do
          {
            if ( v48 < *(_DWORD *)v50 )
              break;
            ++v47;
            ++v49;
            v50 += 24;
          }
          while ( v49 < v46 );
        }
        if ( v47 >= (int)v46 )
          return 0i64;
        rules = (PhysicsSFXEventAssetRules *)&v9->u.soundRule.scrapeSoundAlias[24 * v47 + 8];
        continue;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1345, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid rule") )
          __debugbreak();
        return 0i64;
    }
  }
}

/*
==============
HavokPhysicsSVFX_RunVFXRules
==============
*/
PhysicsVFXEventAssetRuleUnion *HavokPhysicsSVFX_RunVFXRules(Physics_WorldId worldId, HavokPhysicsSVFXContact *contact, PhysicsVFXEventAssetRules *rules)
{
  __int64 v4; 
  PhysicsVFXEventAssetRule *v6; 
  int numentries; 
  int v8; 
  int v9; 
  char *scrapeParticleEffectAlias; 
  int v11; 
  bool v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  float *v16; 
  bool v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  float *v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  float *v30; 
  unsigned __int64 bodyIDKey_high; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  char *v35; 

  v4 = worldId;
  while ( 1 )
  {
    if ( !rules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1353, ASSERT_TYPE_ASSERT, "(rules)", (const char *)&queryFormat, "rules") )
      __debugbreak();
    if ( rules->numrules > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1354, ASSERT_TYPE_ASSERT, "(rules->numrules <= 1)", (const char *)&queryFormat, "rules->numrules <= 1") )
      __debugbreak();
    if ( !rules->numrules )
      return 0i64;
    v6 = rules->rules;
    switch ( v6->type )
    {
      case Types_PhysicsVFXEventParticleEffectRule:
        return &v6->u;
      case Types_PhysicsVFXEventMaterialRule:
        numentries = v6->u.materialRule.numentries;
        v8 = 0;
        v9 = numentries;
        if ( numentries > 0 )
        {
          scrapeParticleEffectAlias = v6->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            v11 = *(_DWORD *)scrapeParticleEffectAlias;
            if ( !*(_DWORD *)scrapeParticleEffectAlias || v11 == 36 )
              v9 = v8;
            if ( ((contact->surfaceFlagData[1 - contact->vfxAssetIndex] >> 19) & 0x3F) == v11 )
              break;
            ++v8;
            scrapeParticleEffectAlias += 24;
          }
          while ( v8 < numentries );
        }
        v12 = v8 < numentries;
        if ( v8 < numentries )
          goto LABEL_20;
        if ( v9 >= numentries )
          return 0i64;
        v12 = v8 < numentries;
LABEL_20:
        if ( v12 )
          v9 = v8;
        rules = (PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * v9 + 8];
        break;
      case Types_PhysicsVFXEventAngleRule:
        v13 = v6->u.materialRule.numentries;
        v14 = 0;
        v15 = 0i64;
        if ( (int)v13 > 0 )
        {
          v16 = (float *)v6->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            if ( (float)(contact->angle * 57.295776) <= *v16 )
              break;
            ++v14;
            ++v15;
            v16 += 6;
          }
          while ( v15 < v13 );
        }
        v17 = v14 < (int)v13;
        goto LABEL_28;
      case Types_PhysicsVFXEventSpeedRule:
        v18 = v6->u.materialRule.numentries;
        v19 = 0;
        v20 = 0i64;
        if ( (int)v18 > 0 )
        {
          v21 = (float *)v6->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            if ( contact->speed >= *v21 )
              break;
            ++v19;
            ++v20;
            v21 += 6;
          }
          while ( v20 < v18 );
        }
        if ( v19 >= (int)v18 )
          return 0i64;
        rules = (PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * v19 + 8];
        continue;
      case Types_PhysicsVFXEventMassRule:
        v22 = v6->u.materialRule.numentries;
        v23 = 0;
        v24 = 0i64;
        v25 = contact->masses[1 - contact->vfxAssetIndex];
        if ( (int)v22 > 0 )
        {
          v26 = 0i64;
          do
          {
            if ( v25 == 0.0 )
              break;
            if ( v25 >= *(float *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[v26] )
              break;
            ++v23;
            ++v24;
            v26 += 24i64;
          }
          while ( v24 < v22 );
        }
        if ( v23 >= (int)v22 )
          return 0i64;
        rules = (PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * v23 + 8];
        continue;
      case Types_PhysicsVFXEventGravityRule:
      case Types_PhysicsVFXEventAtmosphereRule:
        if ( v6->u.materialRule.numentries <= 0 )
          return 0i64;
        rules = (PhysicsVFXEventAssetRules *)(v6->u.particleEffectRule.scrapeParticleEffectAlias + 8);
        continue;
      case Types_PhysicsVFXEventCameraDistanceRule:
        v27 = v6->u.materialRule.numentries;
        v28 = 0;
        v29 = 0i64;
        if ( (int)v27 > 0 )
        {
          v30 = (float *)v6->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            if ( contact->distanceSqFromPlayer < (float)(*v30 * *v30) )
              break;
            ++v28;
            ++v29;
            v30 += 6;
          }
          while ( v29 < v27 );
        }
        if ( v28 >= (int)v27 )
          return 0i64;
        rules = (PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * v28 + 8];
        continue;
      case Types_PhysicsVFXEventFrequencyRule:
        if ( contact->vfxAssetIndex )
          LODWORD(bodyIDKey_high) = contact->bodyIDKey;
        else
          bodyIDKey_high = HIDWORD(contact->bodyIDKey);
        v32 = v6->u.materialRule.numentries;
        v14 = 0;
        v33 = s_havokPhysicsSVFXWorlds[v4].vfxBodyCount[bodyIDKey_high & 0xFFFFFF];
        v34 = 0i64;
        if ( (int)v32 > 0 )
        {
          v35 = v6->u.particleEffectRule.scrapeParticleEffectAlias;
          do
          {
            if ( v33 < *(_DWORD *)v35 )
              break;
            ++v14;
            ++v34;
            v35 += 24;
          }
          while ( v34 < v32 );
        }
        v17 = v14 < (int)v32;
LABEL_28:
        if ( !v17 )
          return 0i64;
        rules = (PhysicsVFXEventAssetRules *)&v6->u.particleEffectRule.scrapeParticleEffectAlias[24 * v14 + 8];
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1548, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid rule") )
          __debugbreak();
        return 0i64;
    }
  }
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
void HavokPhysicsSVFX_Update(Physics_WorldId worldId, LocalClientNum_t localClientNum, float timeStep)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *contacts; 
  HavokPhysicsSVFXContact *m_data; 
  float *v13; 
  float v14; 
  PhysicsSFXEventAssetRules *v15; 
  PhysicsSFXEventAssetRuleUnion *v16; 
  bool v17; 
  PhysicsVFXEventAssetRules *v18; 
  PhysicsVFXEventAssetRuleUnion *v19; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v20; 
  HavokPhysicsSVFXContact *v21; 
  float updateTimer; 
  int sndId; 
  hkArray<HavokPhysicsSVFXContact,hkContainerHeapAllocator> *v24; 
  HavokPhysicsSVFXContact *v25; 
  int v26; 
  float v27; 
  float v28; 
  float v29; 

  v3 = worldId;
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
    v5 = v3;
    v6 = v3;
    if ( s_havokPhysicsSVFXWorlds[v3].isInitialized )
    {
      v27 = 0.0;
      v28 = 0.0;
      v29 = 0.0;
      if ( (unsigned int)(v3 - 2) <= 5 )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        p_view = &LocalClientGlobals->refdef.view;
        if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        refdefViewOrg_aab = p_view->refdefViewOrg_aab;
        v = (_DWORD *)p_view->org.org.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        LODWORD(v27) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
        LODWORD(v28) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
        LODWORD(v29) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
      }
      contacts = s_havokPhysicsSVFXWorlds[v6].contacts;
      m_data = contacts->m_data;
      if ( contacts->m_data != &contacts->m_data[contacts->m_size] )
      {
        v13 = &m_data->position.v[2];
        do
        {
          if ( (unsigned int)(v3 - 2) > 5 )
            v14 = FLOAT_1_0;
          else
            v14 = (float)((float)((float)(*(v13 - 1) - v28) * (float)(*(v13 - 1) - v28)) + (float)((float)(*(v13 - 2) - v27) * (float)(*(v13 - 2) - v27))) + (float)((float)(*v13 - v29) * (float)(*v13 - v29));
          v13[18] = v14;
          v15 = (PhysicsSFXEventAssetRules *)*((_QWORD *)v13 + 6);
          if ( v15 )
          {
            v13[25] = 1.0;
            v13[24] = 1.0;
            v16 = HavokPhysicsSVFX_RunSFXRules((Physics_WorldId)v3, m_data, v15 + 1, v13 + 24, v13 + 25);
            v17 = v13[24] >= 0.0;
            *((_QWORD *)v13 + 10) = v16;
            if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1566, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundVolumeScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundVolumeScalar >= 0.f") )
              __debugbreak();
            if ( v13[25] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1567, ASSERT_TYPE_ASSERT, "(contact->sfxHitSoundPitchScalar >= 0.f)", (const char *)&queryFormat, "contact->sfxHitSoundPitchScalar >= 0.f") )
              __debugbreak();
          }
          else
          {
            *((_QWORD *)v13 + 10) = 0i64;
          }
          v18 = (PhysicsVFXEventAssetRules *)*((_QWORD *)v13 + 7);
          if ( v18 )
            v19 = HavokPhysicsSVFX_RunVFXRules((Physics_WorldId)v3, m_data, v18 + 1);
          else
            v19 = NULL;
          *((_QWORD *)v13 + 11) = v19;
          ++m_data;
          contacts = s_havokPhysicsSVFXWorlds[v6].contacts;
          v13 += 50;
        }
        while ( m_data != &contacts->m_data[contacts->m_size] );
        m_data = contacts->m_data;
        v5 = v3;
      }
      if ( m_data != &m_data[contacts->m_size] )
      {
        do
        {
          if ( (m_data->eventFlags & 1) != 0 )
            HavokPhysicsSVFX_AddPotentialHitEvent((Physics_WorldId)v3, m_data);
          ++m_data;
        }
        while ( m_data != &s_havokPhysicsSVFXWorlds[v6].contacts->m_data[s_havokPhysicsSVFXWorlds[v6].contacts->m_size] );
      }
      HavokPhysicsSVFX_PlayHitEvents((Physics_WorldId)v3, LOCAL_CLIENT_0);
      v20 = s_havokPhysicsSVFXWorlds[v6].contacts;
      v21 = v20->m_data;
      if ( v20->m_data != &v20->m_data[v20->m_size] )
      {
        do
        {
          if ( (v21->eventFlags & 2) != 0 )
          {
            if ( v21->scrapeData.sndId != -1 || v21->scrapeData.particleSystem )
              HavokPhysicsSVFX_UpdateScrapeEvent((Physics_WorldId)v3, v21, LOCAL_CLIENT_0);
            else
              HavokPhysicsSVFX_AddPotentialHitEvent((Physics_WorldId)v3, v21);
          }
          else
          {
            updateTimer = v21->scrapeData.updateTimer;
            if ( updateTimer >= 0.5 )
            {
              sndId = v21->scrapeData.sndId;
              if ( sndId != -1 && v21->scrapeData.sfxScrapeRule )
              {
                SND_StopVirtualLoopSound(sndId);
                v21->scrapeData.sndId = -1;
                --s_havokPhysicsSVFXWorldDatas[v5].numScrapeSoundsPlaying;
              }
              if ( v21->scrapeData.particleSystem )
                HavokPhysicsSVFX_StopScrapeParticle((Physics_WorldId)v3, v21, LOCAL_CLIENT_0);
            }
            else
            {
              v21->scrapeData.updateTimer = updateTimer + timeStep;
            }
          }
          ++v21;
        }
        while ( v21 != &s_havokPhysicsSVFXWorlds[v6].contacts->m_data[s_havokPhysicsSVFXWorlds[v6].contacts->m_size] );
      }
      HavokPhysicsSVFX_PlayScrapeEvents((Physics_WorldId)v3, LOCAL_CLIENT_0);
      v24 = s_havokPhysicsSVFXWorlds[v6].contacts;
      v25 = v24->m_data;
      if ( v24->m_data != &v24->m_data[v24->m_size] )
      {
        do
        {
          if ( (v25->eventFlags & 4) != 0 )
          {
            v26 = v25->scrapeData.sndId;
            if ( v26 != -1 && v25->scrapeData.sfxScrapeRule )
            {
              SND_StopVirtualLoopSound(v26);
              v25->scrapeData.sndId = -1;
              --s_havokPhysicsSVFXWorldDatas[v5].numScrapeSoundsPlaying;
            }
            if ( v25->scrapeData.particleSystem )
              HavokPhysicsSVFX_StopScrapeParticle((Physics_WorldId)v3, v25, LOCAL_CLIENT_0);
          }
          v25->debugDrawEventFlags = v25->eventFlags;
          v25->eventFlags = 0;
          ++v25;
        }
        while ( v25 != &s_havokPhysicsSVFXWorlds[v6].contacts->m_data[s_havokPhysicsSVFXWorlds[v6].contacts->m_size] );
      }
      HavokPhysicsSVFX_Coalesce((Physics_WorldId)v3);
    }
  }
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
  HavokPhysicsSVFXContact *m_data; 
  __int64 v23; 
  int v24; 
  int eventFlags; 
  unsigned __int64 key[2]; 
  hkVector4f v27[4]; 

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
      v27[0] = (hkVector4f)normal->m_quad;
      *(hkVector4f *)key = (hkVector4f)position->m_quad;
      HavokPhysicsSVFX_AddNewContact(world, bodyIds, shapeKeys, numImpulseGivingContactPoints, numCollisionContactPoints, (const hkVector4f *)key, v27, surfaceFlagData, speed, masses, angle);
    }
    else
    {
      m_data = s_havokPhysicsSVFXWorlds[m_userData].contacts->m_data;
      while ( 1 )
      {
        v23 = val;
        if ( m_data[v23].shapeKey == v18 )
          break;
        val = m_data[v23].next;
        if ( val == -1 )
          goto LABEL_19;
      }
      m_data[v23].isValid = 1;
      if ( m_data[v23].bodyIDKey != v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 511, ASSERT_TYPE_ASSERT, "(contact->bodyIDKey == key)", (const char *)&queryFormat, "contact->bodyIDKey == key") )
        __debugbreak();
      if ( m_data[v23].shapeKey != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 512, ASSERT_TYPE_ASSERT, "(contact->shapeKey == shapeKey)", (const char *)&queryFormat, "contact->shapeKey == shapeKey") )
        __debugbreak();
      v24 = m_data[v23].numCollisionContactPoints;
      m_data[v23].numCollisionContactPoints = numCollisionContactPoints;
      m_data[v23].numImpulseGivingContactPoints = numImpulseGivingContactPoints;
      m_data[v23].position.v[0] = 32.0 * position->m_quad.m128_f32[0];
      m_data[v23].position.v[1] = 32.0 * position->m_quad.m128_f32[1];
      m_data[v23].position.v[2] = 32.0 * position->m_quad.m128_f32[2];
      *(_QWORD *)m_data[v23].normal.v = normal->m_quad.m128_u64[0];
      LODWORD(m_data[v23].normal.v[2]) = normal->m_quad.m128_i32[2];
      m_data[v23].surfaceFlagData[0] = *surfaceFlagData;
      m_data[v23].surfaceFlagData[1] = surfaceFlagData[1];
      m_data[v23].speed = 32.0 * speed;
      m_data[v23].masses[0] = *masses;
      m_data[v23].masses[1] = masses[1];
      eventFlags = m_data[v23].eventFlags;
      m_data[v23].angle = angle;
      if ( m_data[v23].numCollisionContactPoints > v24 )
      {
        eventFlags |= 1u;
        m_data[v23].hitSpeed = m_data[v23].speed;
        m_data[v23].hitAngle = angle;
      }
      m_data[v23].eventFlags = eventFlags | 2;
    }
  }
  else
  {
    *(hkVector4f *)key = (hkVector4f)normal->m_quad;
    v27[0] = (hkVector4f)position->m_quad;
    HavokPhysicsSVFX_AddNewContact(world, bodyIds, shapeKeys, numImpulseGivingContactPoints, numCollisionContactPoints, v27, (const hkVector4f *)key, surfaceFlagData, speed, masses, angle);
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
  int v7; 
  PhysicsSFXEventAssetSoundRule *sfxScrapeRule; 
  const char *scrapeSoundAlias; 
  const char *v10; 
  float v11; 
  PhysicsSFXEventAssetSoundRule *v12; 
  float scrapeSoundVolumeSpeedThresholdMin; 
  float scrapeSoundVolumeSpeedThresholdMax; 
  float sndVolume; 
  int sndId; 
  PhysicsVFXEventAssetParticleEffectRule *vfxRule; 
  PhysicsVFXEventAssetParticleEffectRule *vfxScrapeRule; 
  const char *scrapeParticleEffectAlias; 
  const char *v20; 

  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 2045, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  sfxRule = contact->sfxRule;
  v7 = 0;
  sfxScrapeRule = contact->scrapeData.sfxScrapeRule;
  contact->scrapeData.updateTimer = 0.0;
  if ( sfxRule == sfxScrapeRule || sfxRule && sfxScrapeRule && (scrapeSoundAlias = sfxScrapeRule->scrapeSoundAlias, v10 = sfxRule->scrapeSoundAlias, (scrapeSoundAlias != NULL) == (v10 != NULL)) && (!v10 || !scrapeSoundAlias || !I_stricmp(v10, scrapeSoundAlias)) )
  {
    if ( contact->scrapeData.sndId != -1 )
    {
      v11 = FLOAT_1_0;
      if ( contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin > contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1819, ASSERT_TYPE_ASSERT, "(contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax >= contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin)", (const char *)&queryFormat, "contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMax >= contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeSpeedThresholdMin") )
        __debugbreak();
      v12 = contact->scrapeData.sfxScrapeRule;
      scrapeSoundVolumeSpeedThresholdMin = v12->scrapeSoundVolumeSpeedThresholdMin;
      scrapeSoundVolumeSpeedThresholdMax = v12->scrapeSoundVolumeSpeedThresholdMax;
      if ( scrapeSoundVolumeSpeedThresholdMin != scrapeSoundVolumeSpeedThresholdMax )
        LODWORD(v11) = COERCE_UNSIGNED_INT64(I_fclamp((float)(contact->speed - scrapeSoundVolumeSpeedThresholdMin) / (float)(scrapeSoundVolumeSpeedThresholdMax - scrapeSoundVolumeSpeedThresholdMin), 0.0, 1.0));
      sndVolume = contact->scrapeData.sndVolume;
      if ( v11 <= sndVolume )
        v11 = (float)((float)(1.0 - contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeBlendSpeed) * sndVolume) + (float)(v11 * contact->scrapeData.sfxScrapeRule->scrapeSoundVolumeBlendSpeed);
      sndId = contact->scrapeData.sndId;
      contact->scrapeData.sndVolume = v11;
      SND_UpdateVirtualLoopSound(sndId, &contact->position, v11, 1.0);
    }
  }
  else
  {
    HavokPhysicsSVFX_StopScrapeSound(worldId, contact);
    HavokPhysicsSVFX_PlayScrapeSound(worldId, contact, localClientNum);
  }
  vfxRule = contact->vfxRule;
  vfxScrapeRule = contact->scrapeData.vfxScrapeRule;
  if ( vfxRule == vfxScrapeRule || vfxRule && vfxScrapeRule && (scrapeParticleEffectAlias = vfxScrapeRule->scrapeParticleEffectAlias, v20 = vfxRule->scrapeParticleEffectAlias, LOBYTE(v7) = scrapeParticleEffectAlias != NULL, v7 == (v20 != NULL)) && (!v20 || !scrapeParticleEffectAlias || !I_stricmp(v20, scrapeParticleEffectAlias)) )
  {
    HavokPhysicsSVFX_UpdateScrapeParticle(contact, localClientNum);
  }
  else
  {
    HavokPhysicsSVFX_StopScrapeParticle(worldId, contact, localClientNum);
    HavokPhysicsSVFX_PlayScrapeParticle(worldId, contact, localClientNum);
  }
}

/*
==============
HavokPhysicsSVFX_UpdateScrapeParticle
==============
*/

void __fastcall HavokPhysicsSVFX_UpdateScrapeParticle(HavokPhysicsSVFXContact *contact, LocalClientNum_t localClientNum, double a3)
{
  float4 v3; 
  __int64 v4; 
  __int64 v6; 
  ParticleSystem *v7; 
  unsigned __int32 v8; 
  __int64 v9; 
  float v10; 
  __int128 v12; 
  vec4_t v15; 
  const float4 *v16; 
  vector3 *v17; 
  __m128 v; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m256i v25; 
  float4 normal[2]; 
  float4 v27[2]; 
  __int128 v28; 
  vec4_t quatOut; 

  v4 = localClientNum;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicssvfx.cpp", 1923, ASSERT_TYPE_ASSERT, "(contact)", (const char *)&queryFormat, "contact") )
    __debugbreak();
  v6 = v4 << 12;
  v7 = NULL;
  v8 = 0;
  if ( g_particleSystemsGeneration[v6 + (contact->scrapeData.particleSystem & 0xFFF)].__all32 == contact->scrapeData.particleSystem )
    v8 = contact->scrapeData.particleSystem & 0xFFF;
  v9 = v6 + v8;
  if ( g_particleSystems[0][v9] >= (ParticleSystem *)0x1000 )
    v7 = g_particleSystems[0][v9];
  if ( v7 )
  {
    v10 = contact->position.v[0];
    HIDWORD(v28) = 0;
    v12 = v28;
    *(float *)&v12 = v10;
    _XMM6 = v12;
    __asm
    {
      vinsertps xmm6, xmm6, dword ptr [rdi+2Ch], 10h
      vinsertps xmm6, xmm6, dword ptr [rdi+30h], 20h ; ' '
    }
    HavokPhysicsSVFX_GetParticleRotation(contact, &quatOut);
    v15 = quatOut;
    Float4UnitQuatToAxis(v17, v16);
    normal[1] = (float4)v3.v;
    normal[0] = (float4)v15;
    v27[0] = *(float4 *)&a3;
    Particle_AssertFloat4IsNormalized(normal);
    Particle_AssertFloat4IsNormalized(&normal[1]);
    Particle_AssertFloat4IsNormalized(v27);
    v = normal[1].v;
    v19 = normal[0].v;
    v20 = v27[0].v;
    v21 = _mm_shuffle_ps(normal[0].v, normal[1].v, 68);
    v22 = _mm_shuffle_ps(v27[0].v, _XMM6, 68);
    v7->m_systemTransform.y = normal[1];
    v7->m_systemTransform.x.v = v19;
    v23 = _mm_shuffle_ps(v19, v, 238);
    normal[1].v = _mm_shuffle_ps(v21, v22, 221);
    normal[0].v = _mm_shuffle_ps(v21, v22, 136);
    v7->m_systemTransform.z.v = v20;
    v24 = _mm_shuffle_ps(v20, _XMM6, 238);
    v27[0].v = _mm_shuffle_ps(v23, v24, 136);
    v27[1].v = _mm_shuffle_ps(v23, v24, 221);
    v25 = *(__m256i *)v27[0].v.m128_f32;
    *(__m256i *)v7->m_systemTransformTranspose.x.v.m128_f32 = *(__m256i *)normal[0].v.m128_f32;
    v7->m_systemTransform.w.v = _XMM6;
    *(__m256i *)v7->m_systemTransformTranspose.z.v.m128_f32 = v25;
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
  hknpMotion *m_motion; 
  hknpMotion *v8; 
  __m128 m_quad; 
  hkVector4f angularVelWorldOut; 

  if ( (cache->m_propertyKeysUsed & 0x10) != 0 )
  {
    v6 = (_WORD *)((char *)&cache->hknpCollisionCache + 16 * cache->m_propertiesStartOffsetDiv16 + ((cache->m_propertyOffsets >> 14) & 0x3C));
    if ( v6 )
    {
      m_motion = (hknpMotion *)cdBodyA->m_motion;
      v8 = (hknpMotion *)cdBodyB->m_motion;
      angularVelWorldOut.m_quad = (__m128)m_motion->m_linearVelocityAndSpeedLimit;
      *v6 = angularVelWorldOut.m_quad.m128_i16[1];
      v6[1] = angularVelWorldOut.m_quad.m128_i16[3];
      m_quad = v8->m_linearVelocityAndSpeedLimit.m_quad;
      v6[2] = angularVelWorldOut.m_quad.m128_i16[5];
      angularVelWorldOut.m_quad = m_quad;
      v6[3] = m_quad.m128_i16[1];
      v6[4] = angularVelWorldOut.m_quad.m128_i16[3];
      v6[5] = angularVelWorldOut.m_quad.m128_i16[5];
      hknpMotion::getAngularVelocity(m_motion, &angularVelWorldOut);
      v6[6] = angularVelWorldOut.m_quad.m128_i16[1];
      v6[7] = angularVelWorldOut.m_quad.m128_i16[3];
      v6[8] = angularVelWorldOut.m_quad.m128_i16[5];
      hknpMotion::getAngularVelocity(v8, &angularVelWorldOut);
      v6[9] = angularVelWorldOut.m_quad.m128_i16[1];
      v6[10] = angularVelWorldOut.m_quad.m128_i16[3];
      v6[11] = angularVelWorldOut.m_quad.m128_i16[5];
    }
  }
}

