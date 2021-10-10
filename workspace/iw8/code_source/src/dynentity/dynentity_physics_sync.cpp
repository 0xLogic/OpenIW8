/*
==============
DynEnt_UpdateDetailPhysics
==============
*/

unsigned int __fastcall DynEnt_UpdateDetailPhysics(Physics_WorldId fromWorldId, Physics_WorldId worldId, unsigned __int16 dynEntClientId, LocalClientNum_t localClientNum)
{
  return ?DynEnt_UpdateDetailPhysics@@YAIW4Physics_WorldId@@0GW4LocalClientNum_t@@@Z(fromWorldId, worldId, dynEntClientId, localClientNum);
}

/*
==============
DynEnt_PrePhysicsUpdate
==============
*/

void __fastcall DynEnt_PrePhysicsUpdate(LocalClientNum_t localClientNum)
{
  ?DynEnt_PrePhysicsUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEnt_PropagateToDetailWorld
==============
*/

void __fastcall DynEnt_PropagateToDetailWorld(LocalClientNum_t localClientNum)
{
  ?DynEnt_PropagateToDetailWorld@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEnt_PrePhysicsUpdate
==============
*/
void DynEnt_PrePhysicsUpdate(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  int v2; 
  DynEntityClient *m_curNode; 
  unsigned __int16 m_curIndex; 
  unsigned int dynEntDefId; 
  unsigned __int8 m_curBasis; 
  __int64 v7; 
  unsigned __int16 v8; 
  DynEntityPose *v9; 
  DynEntityBasis v10; 
  __int64 v11; 
  DynEntityList *DynEntityList; 
  const DynEntityDef *v13; 
  unsigned int v14; 
  bool v15; 
  const dvar_t *v16; 
  double v17; 
  double v18; 
  double v19; 
  const char **p_name; 
  const dvar_t *v21; 
  hknpWorld *World; 
  hknpWorld *v23; 
  hkMapBase<unsigned int,int,hkMapOperations<unsigned int> >::Pair *m_elem; 
  hkMapBase<unsigned int,int,hkMapOperations<unsigned int> >::Pair *v25; 
  __int64 v26; 
  int Ref; 
  DynEntityClient *ClientFromClientId; 
  int val; 
  int v30; 
  hkMapBase<unsigned int,int,hkMapOperations<unsigned int> >::Pair *v31; 
  DynEntityPose *dynEntPose; 
  __int64 v33; 
  DynEntCL_Active_Iterator v34; 
  hknpCollisionCacheManager::Statistics collector; 
  DynEntityBasis basisOut; 
  unsigned __int16 clientIdOut; 
  __int16 v39; 
  unsigned int dynEntId; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "dyn ents pre physics update");
  Profile_Begin(530);
  v2 = 0;
  *(_QWORD *)&v34.m_curBasis = 0i64;
  *(_DWORD *)&v34.m_nextIndex = -1;
  v34.m_curNode = NULL;
  DynEntCL_Active_Iterator::Init(&v34, v1, DYNENT_BASIS_COUNT);
  if ( DynEntCL_Active_Iterator::Advance(&v34) )
  {
    do
    {
      m_curNode = v34.m_curNode;
      if ( !v34.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 231, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (m_curNode->flags & 6) == 6 )
      {
        m_curIndex = v34.m_curIndex;
        if ( !v34.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 142, ASSERT_TYPE_ASSERT, "(m_curNode)", (const char *)&queryFormat, "m_curNode") )
          __debugbreak();
        dynEntDefId = v34.m_curNode->dynEntDefId;
        dynEntId = dynEntDefId;
        m_curBasis = v34.m_curBasis;
        basisOut = v34.m_curBasis;
        if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v33) = 2;
          LODWORD(dynEntPose) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntPose, v33) )
            __debugbreak();
        }
        if ( m_curBasis >= 2u )
        {
          LODWORD(v33) = 2;
          LODWORD(dynEntPose) = m_curBasis;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", dynEntPose, v33) )
            __debugbreak();
        }
        v7 = m_curBasis + 2i64 * (int)v1;
        if ( !g_dynEntPoseLists[0][v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v8 = g_dynEntClientEntsAllocCount[0][v7];
        if ( m_curIndex >= v8 )
        {
          LODWORD(v33) = v8;
          LODWORD(dynEntPose) = m_curIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", dynEntPose, v33) )
            __debugbreak();
        }
        v9 = &g_dynEntPoseLists[0][v7][m_curIndex];
        v10 = basisOut;
        v11 = dynEntDefId & 0x7FFFF;
        v39 = (dynEntDefId & 0x7FFFF) >> 16;
        clientIdOut = dynEntDefId >> 19;
        if ( (unsigned __int8)basisOut >= DYNENT_BASIS_COUNT )
        {
          LODWORD(v33) = 2;
          LODWORD(dynEntPose) = (unsigned __int8)basisOut;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", dynEntPose, v33) )
            __debugbreak();
        }
        DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(dynEntDefId >> 19));
        if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
          __debugbreak();
        if ( (unsigned int)v11 >= DynEntityList->dynEntCount[(unsigned __int8)v10] )
        {
          LODWORD(v33) = DynEntityList->dynEntCount[(unsigned __int8)v10];
          LODWORD(dynEntPose) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", dynEntPose, v33) )
            __debugbreak();
        }
        v13 = &DynEntityList->dynEntDefList[(unsigned __int8)v10][v11];
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 252, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 253, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
          __debugbreak();
        v14 = dynEntId;
        v15 = DynEnt_UpdateFromLink(localClientNum, basisOut, dynEntId, m_curNode, v13, v9);
        v16 = DVARBOOL_dynEnt_debugWarped;
        if ( !DVARBOOL_dynEnt_debugWarped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWarped") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled && v15 )
        {
          if ( basisOut )
          {
            Com_PrintWarning(14, "DynEnt_PrePhysicsUpdate: Linked Dynent %i using a brush at (%.2f, %.2f, %.2f) moved so far it warped\n", v14, v9->pose.origin.v[0], v9->pose.origin.v[1], v9->pose.origin.v[2]);
          }
          else
          {
            v17 = v9->pose.origin.v[2];
            v18 = v9->pose.origin.v[1];
            v19 = v9->pose.origin.v[0];
            p_name = &v13->baseModel->name;
            if ( !v13->baseModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            Com_PrintWarning(14, "DynEnt_PrePhysicsUpdate: Linked Dynent %i using model '%s' at (%.2f, %.2f, %.2f) moved so far it warped\n", v14, *p_name, v19, v18, v17);
          }
        }
        v1 = localClientNum;
      }
    }
    while ( DynEntCL_Active_Iterator::Advance(&v34) );
    v2 = 0;
  }
  v21 = DVARBOOL_dynEnt_debugMaxCollisionCacheCount;
  if ( !DVARBOOL_dynEnt_debugMaxCollisionCacheCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugMaxCollisionCacheCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.enabled )
  {
    World = HavokPhysics_GetWorld((Physics_WorldId)(3 * v1 + 3));
    v23 = World;
    if ( World )
    {
      collector.m_cacheTypes.m_storage = 1;
      collector.m_numCachesPerBody.m_elem = NULL;
      collector.m_numCachesPerBody.m_numElems = 0;
      collector.m_numCachesPerBody.m_hashMod = -1;
      collector.m_totalBytesPerBody.m_elem = NULL;
      collector.m_totalBytesPerBody.m_numElems = 0;
      collector.m_totalBytesPerBody.m_hashMod = -1;
      collector.m_numChildCachesPerBodyA.m_elem = NULL;
      collector.m_numChildCachesPerBodyA.m_numElems = 0;
      collector.m_numChildCachesPerBodyA.m_hashMod = -1;
      hknpCollisionCacheManager::gatherStatistics(World->m_collisionCacheManager, World, &collector);
      m_elem = collector.m_numCachesPerBody.m_elem;
      if ( collector.m_numCachesPerBody.m_hashMod >= 0 )
      {
        v25 = collector.m_numCachesPerBody.m_elem;
        do
        {
          if ( v25->key != -1 )
            break;
          ++v2;
          ++v25;
        }
        while ( v2 <= collector.m_numCachesPerBody.m_hashMod );
      }
      if ( v2 <= collector.m_numCachesPerBody.m_hashMod )
      {
        do
        {
          v26 = (__int64)&v23->m_bodyManager.m_bodies.m_objects.m_data[m_elem[v2].key];
          Ref = HavokPhysics_GetRef((const hknpBody *)v26);
          if ( Physics_GetRefSystem(Ref) == Physics_RefSystem_DynEnts && (*(_BYTE *)(v26 + 68) & 1) == 0 )
          {
            DynEnt_GetBasisAndDynEntClientId(Ref, &basisOut, &clientIdOut);
            ClientFromClientId = DynEnt_GetClientFromClientId(v1, clientIdOut, basisOut);
            if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 301, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
              __debugbreak();
            val = collector.m_numCachesPerBody.m_elem[v2].val;
            if ( ClientFromClientId->spawnCollisionCacheCount > val )
              val = ClientFromClientId->spawnCollisionCacheCount;
            ClientFromClientId->spawnCollisionCacheCount = val;
          }
          v30 = v2 + 1;
          m_elem = collector.m_numCachesPerBody.m_elem;
          if ( v2 + 1 <= collector.m_numCachesPerBody.m_hashMod )
          {
            v31 = &collector.m_numCachesPerBody.m_elem[v30];
            do
            {
              if ( v31->key != -1 )
                break;
              ++v30;
              ++v31;
            }
            while ( v30 <= collector.m_numCachesPerBody.m_hashMod );
          }
          v2 = v30;
        }
        while ( v30 <= collector.m_numCachesPerBody.m_hashMod );
      }
      hknpCollisionCacheManager::Statistics::~Statistics(&collector);
    }
  }
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_PropagateToDetailWorld
==============
*/
void DynEnt_PropagateToDetailWorld(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  unsigned __int8 v2; 
  __int64 v3; 
  unsigned __int16 physicsSetupNext; 
  __int64 v5; 
  unsigned __int16 v6; 
  DynEntityClient *v7; 
  __int64 physicsSystemDetailId; 
  int v9; 
  int v10; 
  const HavokPhysicsWorld *ConstWorld; 
  HavokPhysicsInstanceManager *p_instanceManager; 
  __int64 v13; 
  unsigned __int16 v14; 
  DynEntityPose *v15; 
  DynEntityClient *v16; 
  hknpBodyId v17; 
  int v18; 
  unsigned __int8 numPhysicsBodies; 
  int v20; 
  int v21; 
  hknpWorld *world; 
  float v23; 
  float v24; 
  float v25; 
  unsigned int v26; 
  unsigned int v27; 
  const HavokPhysicsWorld *v28; 
  unsigned int v29; 
  Physics_WorldId v30; 
  unsigned int physicsSystemId; 
  hknpBodyId *RigidBodyID; 
  unsigned int v33; 
  unsigned int m_serialAndIndex; 
  hknpBodyId *v35; 
  int v36; 
  hknpBodyId v37; 
  hknpWorld *v38; 
  const tmat34_t<vec4_t> *v39; 
  float v40; 
  float v41; 
  float v42; 
  __int64 activate; 
  __int64 v50; 
  unsigned __int8 v51; 
  int duplicationBodyCount; 
  int duplicationCount; 
  int detailBoundedCount; 
  DynEntityClient *v56; 
  hknpBodyId result; 
  hknpBodyId v58[2]; 
  __int64 v59; 
  __m128 v60; 
  vec4_t out; 
  int v62[4]; 
  hkVector4f position; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  v1 = localClientNum;
  duplicationCount = 0;
  duplicationBodyCount = 0;
  v2 = 0;
  v51 = 0;
  detailBoundedCount = 0;
  v3 = localClientNum;
  do
  {
    physicsSetupNext = cm.mapEnts->dynEntPhysicsSetupHead[v3][v2];
    if ( physicsSetupNext == 0xFFFF )
      goto LABEL_242;
    v5 = v2 + 2 * v3;
    v59 = v5;
    do
    {
      if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v50) = 2;
        LODWORD(activate) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", activate, v50) )
          __debugbreak();
      }
      if ( v2 >= 2u )
      {
        LODWORD(v50) = 2;
        LODWORD(activate) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", activate, v50) )
          __debugbreak();
      }
      v6 = g_dynEntClientEntsAllocCount[0][v5];
      if ( physicsSetupNext >= v6 )
      {
        LODWORD(v50) = v6;
        LODWORD(activate) = physicsSetupNext;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", activate, v50) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[0][v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v7 = &g_dynEntClientLists[0][v5][physicsSetupNext];
      v56 = v7;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 342, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      physicsSystemDetailId = v7->physicsSystemDetailId;
      if ( (_DWORD)physicsSystemDetailId == -1 )
      {
        v16 = v7;
        goto LABEL_240;
      }
      v9 = 3 * v1;
      v10 = 3 * v1 + 4;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 603, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if instance is detail bounded when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v10 > 7 )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 604, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v1 + 2) <= 5 )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 606, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
        goto LABEL_35;
      if ( v10 >= 0 )
      {
        if ( v10 <= 1 )
        {
          LODWORD(v50) = v9 + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 607, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
            __debugbreak();
        }
LABEL_35:
        if ( (unsigned int)v10 <= 7 )
          goto LABEL_38;
      }
      LODWORD(v50) = v9 + 4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 761, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to check if instance is detail bounded with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
        __debugbreak();
LABEL_38:
      ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v10);
      if ( !ConstWorld->world )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 766, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics IsInstanceDeactivated %i: world is NULL", "havokPhysicsWorld->world", v50) )
          __debugbreak();
      }
      p_instanceManager = &ConstWorld->instanceManager;
      if ( !p_instanceManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 107, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
        __debugbreak();
      if ( p_instanceManager->buffer[physicsSystemDetailId].detailModel )
      {
        ++detailBoundedCount;
        if ( (unsigned int)v1 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v50) = 2;
          LODWORD(activate) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", activate, v50) )
            __debugbreak();
        }
        v2 = v51;
        if ( v51 >= 2u )
        {
          LODWORD(v50) = 2;
          LODWORD(activate) = v51;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", activate, v50) )
            __debugbreak();
        }
        v13 = v51 + 2i64 * (int)v1;
        if ( !g_dynEntPoseLists[0][v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v14 = g_dynEntClientEntsAllocCount[0][v13];
        if ( physicsSetupNext >= v14 )
        {
          LODWORD(v50) = v14;
          LODWORD(activate) = physicsSetupNext;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", activate, v50) )
            __debugbreak();
        }
        v15 = &g_dynEntPoseLists[0][v13][physicsSetupNext];
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 361, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        v16 = v56;
        v17.m_serialAndIndex = v56->detailBoundBody;
        v18 = v17.m_serialAndIndex & 0xFFFFFF;
        if ( (v17.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 365, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        numPhysicsBodies = v56->numPhysicsBodies;
        if ( numPhysicsBodies == 1 )
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 507, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v10 > 7 )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 508, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( v18 == 0xFFFFFF )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 509, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v50) )
              __debugbreak();
          }
          if ( ((LODWORD(v15->pose.origin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v15->pose.origin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v15->pose.origin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 510, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
            __debugbreak();
          *(float *)&v20 = 0.03125 * v15->pose.origin.v[1];
          *(float *)&v21 = 0.03125 * v15->pose.origin.v[2];
          *(float *)v62 = 0.03125 * v15->pose.origin.v[0];
          v62[1] = v20;
          v62[2] = v21;
          *(float *)&v62[3] = 0.0;
          if ( (unsigned int)v10 > 7 )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 661, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( v18 == 0xFFFFFF )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 662, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v50) )
              __debugbreak();
          }
          world = HavokPhysics_GetMutableWorld((Physics_WorldId)v10)->world;
          if ( !world )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 666, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v50) )
              __debugbreak();
          }
          ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, __int64))world->setBodyPosition)(&world->hknpWorldWriter, v17.m_serialAndIndex, v62, 1i64);
          v15->detailBodyToBoneMapCached = 0;
        }
        else
        {
          if ( numPhysicsBodies <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 377, ASSERT_TYPE_ASSERT, "(dynEntClient->numPhysicsBodies > 1)", (const char *)&queryFormat, "dynEntClient->numPhysicsBodies > 1") )
            __debugbreak();
          v23 = fsqrt((float)((float)(v15->bounds.halfSize.v[0] * v15->bounds.halfSize.v[0]) + (float)(v15->bounds.halfSize.v[1] * v15->bounds.halfSize.v[1])) + (float)(v15->bounds.halfSize.v[2] * v15->bounds.halfSize.v[2]));
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 621, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to update detail bounds when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v10 > 7 )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 622, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to update detail bounds with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( v18 == 0xFFFFFF )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 623, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to update detail bounds with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v50) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v1 + 2) <= 5 )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 624, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to update detail bounds in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= 1 )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 625, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to update detail bounds in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
              __debugbreak();
          }
          if ( !Physics_IsDetailWorld((Physics_WorldId)v10) )
          {
            LODWORD(v50) = 3 * v1 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 626, ASSERT_TYPE_ASSERT, "(Physics_IsDetailWorld( worldId ))", "%s\n\tPhysics: Trying to update detail bounds with non detail world index %i", "Physics_IsDetailWorld( worldId )", v50) )
              __debugbreak();
          }
          if ( ((LODWORD(v15->bounds.midPoint.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v15->bounds.midPoint.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v15->bounds.midPoint.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 627, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to update detail bounds with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
            __debugbreak();
          if ( (LODWORD(v23) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 628, ASSERT_TYPE_ASSERT, "(!IS_NAN( radius ))", "%s\n\tPhysics: Trying to update detail bounds with invalid radius", "!IS_NAN( radius )") )
            __debugbreak();
          v24 = 0.03125 * v15->bounds.midPoint.v[1];
          v25 = 0.03125 * v15->bounds.midPoint.v[2];
          position.m_quad.m128_f32[0] = 0.03125 * v15->bounds.midPoint.v[0];
          position.m_quad.m128_f32[1] = v24;
          position.m_quad.m128_f32[2] = v25;
          position.m_quad.m128_f32[3] = 0.0;
          HavokPhysics_UpdateDetailBounds((const Physics_WorldId)v10, v17, &position, v23 * 0.03125);
          v15->detailBodyToBoneMapCached = 0;
        }
        goto LABEL_240;
      }
      v16 = v56;
      ++duplicationCount;
      v26 = v56->numPhysicsBodies;
      v27 = v56->physicsSystemDetailId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v10 > 7 )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
          __debugbreak();
      }
      if ( v27 == -1 )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v50) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v1 + 2) <= 5 )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        if ( v10 < 0 )
          goto LABEL_139;
        if ( v10 <= 1 )
        {
          LODWORD(v50) = v9 + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
            __debugbreak();
        }
      }
      if ( (unsigned int)v10 > 7 )
      {
LABEL_139:
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
          __debugbreak();
      }
      if ( v27 == -1 )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v50) )
          __debugbreak();
      }
      v28 = HavokPhysics_GetConstWorld((Physics_WorldId)v10);
      if ( !v28->world )
      {
        LODWORD(v50) = v9 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v50) )
          __debugbreak();
      }
      if ( v26 != HavokPhysicsInstanceManager_GetBodyCount(&v28->instanceManager, v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 393, ASSERT_TYPE_ASSERT, "(numRigidBodies == Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( localClientNum ), dynEntClient->physicsSystemDetailId ))", (const char *)&queryFormat, "numRigidBodies == Physics_GetNumRigidBodys( DYNENT_PHYSICS_DETAIL_WORLD( localClientNum ), dynEntClient->physicsSystemDetailId )") )
        __debugbreak();
      v29 = 0;
      if ( v26 )
      {
        v30 = v9 + 3;
        duplicationBodyCount += v26;
        do
        {
          physicsSystemId = v16->physicsSystemId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v30 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( physicsSystemId == -1 )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v50) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v30 - 2) <= 5 )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v30 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
              __debugbreak();
          }
          RigidBodyID = HavokPhysics_GetRigidBodyID(&result, v30, physicsSystemId, v29);
          v33 = v16->physicsSystemDetailId;
          m_serialAndIndex = RigidBodyID->m_serialAndIndex;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v10 > 7 )
          {
            LODWORD(v50) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( v33 == -1 )
          {
            LODWORD(v50) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v50) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v10 - 2) <= 5 )
          {
            LODWORD(v50) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= 1 )
          {
            LODWORD(v50) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
              __debugbreak();
          }
          v35 = HavokPhysics_GetRigidBodyID(v58, (const Physics_WorldId)v10, v33, v29);
          v36 = m_serialAndIndex & 0xFFFFFF;
          v37.m_serialAndIndex = v35->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 403, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
            __debugbreak();
          if ( (v37.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 404, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
            __debugbreak();
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v30 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( v36 == 0xFFFFFF )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v50) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v30 - 2) <= 5 )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v50) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v30 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v50) )
              __debugbreak();
          }
          if ( (unsigned int)v30 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( v36 == 0xFFFFFF )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v50) )
              __debugbreak();
          }
          v38 = HavokPhysics_GetConstWorld(v30)->world;
          if ( !v38 )
          {
            LODWORD(v50) = v30;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v50) )
              __debugbreak();
          }
          v39 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v38->getBodyTransform)(&v38->hknpWorldReader, m_serialAndIndex);
          v40 = 32.0 * v39[1].m[0].v[0];
          v41 = 32.0 * v39[1].m[0].v[1];
          v42 = 32.0 * v39[1].m[0].v[2];
          Axis34ToQuat(v39, &out);
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v10 > 7 )
          {
            LODWORD(v50) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v50) )
              __debugbreak();
          }
          if ( (v37.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
          {
            LODWORD(v50) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v50) )
              __debugbreak();
          }
          if ( ((LODWORD(v40) & 0x7F800000) == 2139095040 || (LODWORD(v41) & 0x7F800000) == 2139095040 || (LODWORD(v42) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
            __debugbreak();
          if ( ((LODWORD(out.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
            __debugbreak();
          _XMM5 = LODWORD(out.v[0]);
          __asm
          {
            vinsertps xmm5, xmm5, dword ptr [rbp+70h+out+4], 10h
            vinsertps xmm5, xmm5, dword ptr [rbp+70h+out+8], 20h
            vinsertps xmm5, xmm5, dword ptr [rbp+70h+out+0Ch], 30h
          }
          hkPosition.m_quad.m128_f32[0] = v40 * 0.03125;
          hkPosition.m_quad.m128_f32[2] = v42 * 0.03125;
          __asm
          {
            vdpps   xmm0, xmm5, xmm5, 0FFh
            vrsqrtps xmm4, xmm0
          }
          hkPosition.m_quad.m128_f32[1] = v41 * 0.03125;
          v60 = _XMM0;
          hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
          hkPosition.m_quad.m128_f32[3] = 0.0;
          HavokPhysics_WarpRigidBodyTo((const Physics_WorldId)v10, v37, &hkPosition, &hkOrientation, 0, 0);
          v16 = v56;
          ++v29;
        }
        while ( v29 < v26 );
      }
      v2 = v51;
      v1 = localClientNum;
LABEL_240:
      physicsSetupNext = v16->physicsSetupNext;
      v5 = v59;
    }
    while ( physicsSetupNext != 0xFFFF );
    v3 = v1;
LABEL_242:
    v51 = ++v2;
  }
  while ( v2 < 2u );
  Physics_SetCGDynEntDetailPropagationDebugData(v1, detailBoundedCount, duplicationCount, duplicationBodyCount);
}

/*
==============
DynEnt_UpdateDetailPhysics
==============
*/
__int64 DynEnt_UpdateDetailPhysics(Physics_WorldId fromWorldId, Physics_WorldId worldId, unsigned __int16 dynEntClientId, LocalClientNum_t localClientNum)
{
  __int64 v5; 
  DynEntityClient *ClientFromClientId; 
  DynEntityPose *PoseFromClientId; 
  unsigned int physicsSystemDetailId; 
  unsigned int NumRigidBodys; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  unsigned int v14; 
  unsigned __int8 numParts; 
  unsigned __int8 *p_detailBodyToBoneMap0; 
  unsigned int posePart1FirstIndex; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  DynEnt_ExtraPosePart *v21; 
  unsigned int v22; 
  __int64 activate; 
  __int64 v24; 
  int v25; 
  hknpBodyId result; 

  v5 = localClientNum;
  ClientFromClientId = DynEnt_GetClientFromClientId(localClientNum, dynEntClientId, DYNENT_BASIS_MODEL);
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 434, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  PoseFromClientId = DynEnt_GetPoseFromClientId((LocalClientNum_t)v5, dynEntClientId, DYNENT_BASIS_MODEL);
  if ( !PoseFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 438, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  if ( PoseFromClientId->detailBodyToBoneMapCached )
    return ClientFromClientId->physicsSystemDetailId;
  Profile_Begin(767);
  physicsSystemDetailId = ClientFromClientId->physicsSystemDetailId;
  if ( physicsSystemDetailId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 450, ASSERT_TYPE_ASSERT, "(toPhysicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "toPhysicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, physicsSystemDetailId);
  v12 = NumRigidBodys;
  if ( NumRigidBodys > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)NumRigidBodys, "unsigned", NumRigidBodys) )
    __debugbreak();
  if ( v12 <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 454, ASSERT_TYPE_ASSERT, "(numBodies > 1)", (const char *)&queryFormat, "numBodies > 1") )
    __debugbreak();
  v13 = 0;
  v25 = v12 - 1;
  if ( v25 > 0 )
  {
    v14 = 0;
    do
    {
      if ( v13 >= PoseFromClientId->numParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 458, ASSERT_TYPE_ASSERT, "(bodyIdx < dynEntPose->numParts)", (const char *)&queryFormat, "bodyIdx < dynEntPose->numParts") )
        __debugbreak();
      numParts = PoseFromClientId->numParts;
      if ( v13 >= numParts )
      {
        LODWORD(v24) = numParts;
        LODWORD(activate) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 277, ASSERT_TYPE_ASSERT, "(unsigned)( bodyIdx ) < (unsigned)( pose->numParts )", "bodyIdx doesn't index pose->numParts\n\t%i not in [0, %i)", activate, v24) )
          __debugbreak();
      }
      if ( v13 )
      {
        posePart1FirstIndex = PoseFromClientId->posePart1FirstIndex;
        if ( posePart1FirstIndex + v14 - 1 >= g_dynEntExtraPosePartsAllocCount[v5] )
        {
          LODWORD(v24) = g_dynEntExtraPosePartsAllocCount[v5];
          LODWORD(activate) = posePart1FirstIndex + v14 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 283, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + bodyIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + bodyIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", activate, v24) )
            __debugbreak();
        }
        p_detailBodyToBoneMap0 = &g_dynEntPoseExtraDetailBodyToBoneMap[v5][v14 - 1 + PoseFromClientId->posePart1FirstIndex];
      }
      else
      {
        p_detailBodyToBoneMap0 = &PoseFromClientId->detailBodyToBoneMap0;
      }
      if ( !p_detailBodyToBoneMap0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 460, ASSERT_TYPE_ASSERT, "(boneId)", (const char *)&queryFormat, "boneId") )
        __debugbreak();
      if ( *p_detailBodyToBoneMap0 == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 461, ASSERT_TYPE_ASSERT, "(*boneId != 255)", (const char *)&queryFormat, "*boneId != NO_BONEINDEX") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
          __debugbreak();
      }
      if ( physicsSystemDetailId == -1 )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v24) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v24) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, worldId, physicsSystemDetailId, v14)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 465, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      v19 = *p_detailBodyToBoneMap0;
      v20 = PoseFromClientId->numParts;
      if ( *p_detailBodyToBoneMap0 >= v20 )
      {
        LODWORD(v24) = v20;
        LODWORD(activate) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localPoseIdx ) < (unsigned)( pose->numParts )", "localPoseIdx doesn't index pose->numParts\n\t%i not in [0, %i)", activate, v24) )
          __debugbreak();
      }
      if ( v19 )
      {
        v22 = PoseFromClientId->posePart1FirstIndex;
        if ( v22 + v19 - 1 >= g_dynEntExtraPosePartsAllocCount[v5] )
        {
          LODWORD(v24) = g_dynEntExtraPosePartsAllocCount[v5];
          LODWORD(activate) = v22 + v19 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( pose->posePart1FirstIndex + localPoseIdx - 1 ) < (unsigned)( g_dynEntExtraPosePartsAllocCount[localClientNum] )", "pose->posePart1FirstIndex + localPoseIdx - 1 doesn't index g_dynEntExtraPosePartsAllocCount[localClientNum]\n\t%i not in [0, %i)", activate, v24) )
            __debugbreak();
        }
        v21 = &g_dynEntPoseExtraParts[v5][v19 - 1 + PoseFromClientId->posePart1FirstIndex];
      }
      else
      {
        v21 = (DynEnt_ExtraPosePart *)PoseFromClientId;
      }
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 469, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
        __debugbreak();
      Physics_WarpLeafDetailRigidBodyTo(worldId, m_serialAndIndex, &v21->posePart.origin, &v21->posePart.quat, 0, 0);
      v14 = ++v13;
    }
    while ( v13 < v25 );
  }
  PoseFromClientId->detailBodyToBoneMapCached = 1;
  Profile_EndInternal(NULL);
  return physicsSystemDetailId;
}

/*
==============
DynEnt_UpdateFromLink
==============
*/
bool DynEnt_UpdateFromLink(LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned int dynEntId, DynEntityClient *dynEntClient, const DynEntityDef *dynEntDef, DynEntityPose *dynEntPose)
{
  LocalClientNum_t v8; 
  centity_t *AnchorEntity; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v15; 
  ClientEntityLinkToDef *linkTo; 
  unsigned __int8 numPhysicsBodies; 
  vec3_t *p_origin; 
  GfxPlacement *v34; 
  unsigned __int8 v35; 
  __int32 v36; 
  unsigned int RigidBodyID; 
  unsigned __int8 numParts; 
  const char *v39; 
  GfxPlacement *PosePartFromPose; 
  int v41; 
  unsigned __int8 v42; 
  unsigned int v43; 
  unsigned __int8 v44; 
  const char *v45; 
  GfxPlacement *v46; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  bool v53; 
  int v55[4]; 
  GfxPlacement *v56; 
  vec3_t *v57; 
  __int64 v58; 
  vec3_t v0; 
  vec4_t orientationAsQuat; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<dvec3_t> out; 
  tmat43_t<dvec3_t> axis; 
  tmat43_t<dvec3_t> v65; 

  v58 = -2i64;
  v8 = localClientNum;
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", (unsigned __int8)basis, 2) )
    __debugbreak();
  if ( dynEntId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 67, ASSERT_TYPE_ASSERT, "(dynEntId != 0xffffffffui32)", (const char *)&queryFormat, "dynEntId != DYNENT_INVALID_ID") )
    __debugbreak();
  if ( !dynEntClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 68, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 69, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( (unsigned __int8)(dynEntDef->type - 5) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 70, ASSERT_TYPE_ASSERT, "(dynEntDef->type == DYNENT_TYPE_LINKED || dynEntDef->type == DYNENT_TYPE_LINKED_NOSHADOW)", (const char *)&queryFormat, "dynEntDef->type == DYNENT_TYPE_LINKED || dynEntDef->type == DYNENT_TYPE_LINKED_NOSHADOW") )
    __debugbreak();
  if ( !dynEntDef->linkTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 71, ASSERT_TYPE_ASSERT, "(dynEntDef->linkTo)", (const char *)&queryFormat, "dynEntDef->linkTo") )
    __debugbreak();
  if ( dynEntDef->linkTo->anchorIndex >= 0x100u )
  {
    LODWORD(updateBroadphaseIfWarping) = 256;
    LODWORD(canWarp) = dynEntDef->linkTo->anchorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 72, ASSERT_TYPE_ASSERT, "(unsigned)( dynEntDef->linkTo->anchorIndex ) < (unsigned)( 256 )", "dynEntDef->linkTo->anchorIndex doesn't index CLIENTENT_MAX_ANCHORS\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
      __debugbreak();
  }
  if ( !dynEntPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 73, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
    __debugbreak();
  AnchorEntity = DynEnt_GetAnchorEntity(v8, dynEntDef->linkTo->anchorIndex);
  p_pose = &AnchorEntity->pose;
  if ( AnchorEntity && (AnchorEntity->flags & 1) != 0 )
  {
    DynEnt_AnglesToAxis(&AnchorEntity->pose.angles, (tmat33_t<dvec3_t> *)&axis);
    if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
    FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v55);
    if ( p_pose->isPosePrecise )
    {
      _XMM0 = (unsigned int)v55[0];
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v15;
      __asm { vcvtsd2ss xmm3, xmm0, xmm0 }
      v55[0] = _XMM3;
      _XMM1 = (unsigned int)v55[1];
      __asm { vcvtdq2pd xmm1, xmm1 }
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v15 = *(double *)&_XMM1 * 0.000244140625;
      _XMM0 = v15;
      __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
      v55[1] = _XMM4;
      _XMM1 = (unsigned int)v55[2];
      __asm { vcvtdq2pd xmm1, xmm1 }
      *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v15 = *(double *)&_XMM1 * 0.000244140625;
      _XMM0 = v15;
      __asm { vcvtsd2ss xmm5, xmm0, xmm0 }
      v55[2] = _XMM5;
    }
    else
    {
      LODWORD(_XMM5) = v55[2];
      LODWORD(_XMM4) = v55[1];
      LODWORD(_XMM3) = v55[0];
    }
    axis.m[3].x = *(float *)&_XMM3;
    axis.m[3].y = *(float *)&_XMM4;
    axis.m[3].z = *(float *)&_XMM5;
    DynEnt_AnglesToAxis(&dynEntDef->linkTo->angleOffset, (tmat33_t<dvec3_t> *)&v65);
    linkTo = dynEntDef->linkTo;
    v65.m[3].x = linkTo->originOffset.v[0];
    v65.m[3].y = linkTo->originOffset.v[1];
    v65.m[3].z = linkTo->originOffset.v[2];
    DynEnt_MatrixMultiply43(&v65, &axis, &out);
    _XMM0 = *(unsigned __int64 *)&out.m[3].x;
    __asm { vcvtpd2ps xmm0, xmm0 }
    v0.v[0] = *(float *)&_XMM0;
    _XMM1 = *(unsigned __int64 *)&out.m[3].y;
    __asm { vcvtpd2ps xmm1, xmm1 }
    v0.v[1] = *(float *)&_XMM1;
    _XMM0 = *(unsigned __int64 *)&out.m[3].z;
    __asm { vcvtpd2ps xmm0, xmm0 }
    v0.v[2] = *(float *)&_XMM0;
    DynEnt_AxisComponentsToQuat(out.m, &out.m[1], &out.m[2], &orientationAsQuat);
    v53 = 0;
    if ( dynEntClient->physicsSystemId == -1 )
    {
      if ( VecNCompareCustomEpsilon(v0.v, dynEntPose->pose.origin.v, 0.0099999998, 3) && VecNCompareCustomEpsilon(orientationAsQuat.v, dynEntPose->pose.quat.v, 0.001, 4) )
        goto LABEL_74;
      dynEntClient->flags |= 0x40u;
      dynEntPose->pose.origin = v0;
    }
    else
    {
      numPhysicsBodies = dynEntClient->numPhysicsBodies;
      p_origin = &dynEntPose->pose.origin;
      v57 = &dynEntPose->pose.origin;
      if ( VecNCompareCustomEpsilon(v0.v, dynEntPose->pose.origin.v, 0.0099999998, 3) )
      {
        v34 = &dynEntPose->pose;
        v56 = &dynEntPose->pose;
        if ( VecNCompareCustomEpsilon(orientationAsQuat.v, dynEntPose->pose.quat.v, 0.001, 4) )
        {
          v35 = 0;
          if ( numPhysicsBodies )
          {
            v36 = 3 * localClientNum + 3;
            do
            {
              RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v36, dynEntClient->physicsSystemId, v35);
              if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 157, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                __debugbreak();
              Physics_SetRigidBodyVelocity((Physics_WorldId)v36, RigidBodyID, &vec3_origin, &vec3_origin);
              Physics_GetRigidBodyTransform((const Physics_WorldId)v36, RigidBodyID, &position, &orientation);
              numParts = dynEntPose->numParts;
              if ( v35 >= numParts )
              {
                v39 = dynEntClient->activeModel ? dynEntClient->activeModel->name : "Unknown";
                LODWORD(v52) = numParts;
                LODWORD(v50) = numPhysicsBodies;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 168, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", v39, v50, v52) )
                  __debugbreak();
              }
              PosePartFromPose = DynEnt_GetPosePartFromPose(localClientNum, dynEntPose, v35);
              if ( !PosePartFromPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 170, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
                __debugbreak();
              PosePartFromPose->origin = position;
              PosePartFromPose->quat = orientation;
              ++v35;
            }
            while ( v35 < numPhysicsBodies );
            v34 = v56;
            p_origin = v57;
          }
          *p_origin = v0;
          v34->quat = orientationAsQuat;
          goto LABEL_74;
        }
        v8 = localClientNum;
      }
      dynEntClient->flags |= 0x40u;
      v41 = 3 * v8 + 3;
      v53 = Physics_KeyframeInstanceTo((Physics_WorldId)v41, dynEntClient->physicsSystemId, &v0, &orientationAsQuat, 1.0, 1, 0, 0.0) == Physics_MovementType_Warped;
      v42 = 0;
      if ( numPhysicsBodies )
      {
        do
        {
          v43 = Physics_GetRigidBodyID((const Physics_WorldId)v41, dynEntClient->physicsSystemId, v42);
          if ( (v43 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 132, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransformAfterWarpInstanceTo((Physics_WorldId)v41, dynEntClient->physicsSystemId, v43, &v0, &orientationAsQuat, &position, &orientation);
          v44 = dynEntPose->numParts;
          if ( v42 >= v44 )
          {
            v45 = dynEntClient->activeModel ? dynEntClient->activeModel->name : "Unknown";
            LODWORD(v52) = v44;
            LODWORD(v51) = numPhysicsBodies;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 140, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", v45, v51, v52) )
              __debugbreak();
          }
          v46 = DynEnt_GetPosePartFromPose(localClientNum, dynEntPose, v42);
          if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 142, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
            __debugbreak();
          v46->origin = position;
          v46->quat = orientation;
          ++v42;
        }
        while ( v42 < numPhysicsBodies );
        p_origin = &dynEntPose->pose.origin;
      }
      *p_origin = v0;
    }
    dynEntPose->pose.quat = orientationAsQuat;
LABEL_74:
    memset(v55, 0, 0xCui64);
    return v53;
  }
  return 0;
}

