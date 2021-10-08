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
  LocalClientNum_t v5; 
  int v6; 
  DynEntityClient *m_curNode; 
  unsigned __int16 m_curIndex; 
  unsigned int dynEntDefId; 
  unsigned __int8 m_curBasis; 
  __int64 v11; 
  unsigned __int16 v12; 
  DynEntityBasis v14; 
  __int64 v15; 
  DynEntityList *DynEntityList; 
  const DynEntityDef *v17; 
  unsigned int v18; 
  bool v19; 
  const dvar_t *v20; 
  const char **p_name; 
  const dvar_t *v35; 
  hknpWorld *World; 
  hknpWorld *v37; 
  hkMapBase<unsigned int,int,hkMapOperations<unsigned int> >::Pair *m_elem; 
  hkMapBase<unsigned int,int,hkMapOperations<unsigned int> >::Pair *v39; 
  __int64 v40; 
  int Ref; 
  DynEntityClient *ClientFromClientId; 
  int val; 
  int v44; 
  hkMapBase<unsigned int,int,hkMapOperations<unsigned int> >::Pair *v45; 
  char *fmt; 
  char *fmta; 
  DynEntityPose *dynEntPose; 
  DynEntityPose *dynEntPosea; 
  DynEntityPose *dynEntPoseb; 
  __int64 v55; 
  double v56; 
  DynEntCL_Active_Iterator v57; 
  hknpCollisionCacheManager::Statistics collector; 
  char v59; 
  void *retaddr; 
  DynEntityBasis basisOut; 
  unsigned __int16 clientIdOut; 
  __int16 v64; 
  unsigned int dynEntId; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v5 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "dyn ents pre physics update");
  Profile_Begin(530);
  v6 = 0;
  *(_QWORD *)&v57.m_curBasis = 0i64;
  *(_DWORD *)&v57.m_nextIndex = -1;
  v57.m_curNode = NULL;
  DynEntCL_Active_Iterator::Init(&v57, v5, DYNENT_BASIS_COUNT);
  if ( DynEntCL_Active_Iterator::Advance(&v57) )
  {
    do
    {
      m_curNode = v57.m_curNode;
      if ( !v57.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 231, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (m_curNode->flags & 6) == 6 )
      {
        m_curIndex = v57.m_curIndex;
        if ( !v57.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 142, ASSERT_TYPE_ASSERT, "(m_curNode)", (const char *)&queryFormat, "m_curNode") )
          __debugbreak();
        dynEntDefId = v57.m_curNode->dynEntDefId;
        dynEntId = dynEntDefId;
        m_curBasis = v57.m_curBasis;
        basisOut = v57.m_curBasis;
        if ( (unsigned int)v5 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v55) = 2;
          LODWORD(dynEntPose) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", dynEntPose, v55) )
            __debugbreak();
        }
        if ( m_curBasis >= 2u )
        {
          LODWORD(v55) = 2;
          LODWORD(dynEntPose) = m_curBasis;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", dynEntPose, v55) )
            __debugbreak();
        }
        v11 = m_curBasis + 2i64 * (int)v5;
        if ( !g_dynEntPoseLists[0][v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v12 = g_dynEntClientEntsAllocCount[0][v11];
        if ( m_curIndex >= v12 )
        {
          LODWORD(v55) = v12;
          LODWORD(dynEntPose) = m_curIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", dynEntPose, v55) )
            __debugbreak();
        }
        _R12 = &g_dynEntPoseLists[0][v11][m_curIndex];
        v14 = basisOut;
        v15 = dynEntDefId & 0x7FFFF;
        v64 = (dynEntDefId & 0x7FFFF) >> 16;
        clientIdOut = dynEntDefId >> 19;
        if ( (unsigned __int8)basisOut >= DYNENT_BASIS_COUNT )
        {
          LODWORD(v55) = 2;
          LODWORD(dynEntPose) = (unsigned __int8)basisOut;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", dynEntPose, v55) )
            __debugbreak();
        }
        DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(dynEntDefId >> 19));
        if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
          __debugbreak();
        if ( (unsigned int)v15 >= DynEntityList->dynEntCount[(unsigned __int8)v14] )
        {
          LODWORD(v55) = DynEntityList->dynEntCount[(unsigned __int8)v14];
          LODWORD(dynEntPose) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", dynEntPose, v55) )
            __debugbreak();
        }
        v17 = &DynEntityList->dynEntDefList[(unsigned __int8)v14][v15];
        if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 252, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 253, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
          __debugbreak();
        v18 = dynEntId;
        v19 = DynEnt_UpdateFromLink(localClientNum, basisOut, dynEntId, m_curNode, v17, _R12);
        v20 = DVARBOOL_dynEnt_debugWarped;
        if ( !DVARBOOL_dynEnt_debugWarped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugWarped") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        if ( v20->current.enabled && v19 )
        {
          if ( basisOut )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r12+54h]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovss  xmm1, dword ptr [r12+50h]
              vcvtss2sd xmm1, xmm1, xmm1
              vmovss  xmm3, dword ptr [r12+4Ch]
              vcvtss2sd xmm3, xmm3, xmm3
              vmovsd  [rsp+110h+dynEntPose], xmm0
              vmovsd  [rsp+110h+fmt], xmm1
              vmovq   r9, xmm3
            }
            Com_PrintWarning(14, "DynEnt_PrePhysicsUpdate: Linked Dynent %i using a brush at (%.2f, %.2f, %.2f) moved so far it warped\n", v18, _R9, fmta, dynEntPoseb);
          }
          else
          {
            __asm
            {
              vmovss  xmm6, dword ptr [r12+54h]
              vcvtss2sd xmm6, xmm6, xmm6
              vmovss  xmm7, dword ptr [r12+50h]
              vcvtss2sd xmm7, xmm7, xmm7
              vmovss  xmm8, dword ptr [r12+4Ch]
              vcvtss2sd xmm8, xmm8, xmm8
            }
            p_name = &v17->baseModel->name;
            if ( !v17->baseModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            __asm
            {
              vmovsd  [rsp+110h+var_E0], xmm6
              vmovsd  [rsp+110h+dynEntPose], xmm7
              vmovsd  [rsp+110h+fmt], xmm8
            }
            Com_PrintWarning(14, "DynEnt_PrePhysicsUpdate: Linked Dynent %i using model '%s' at (%.2f, %.2f, %.2f) moved so far it warped\n", v18, *p_name, *(double *)&fmt, *(double *)&dynEntPosea, v56);
          }
        }
        v5 = localClientNum;
      }
    }
    while ( DynEntCL_Active_Iterator::Advance(&v57) );
    v6 = 0;
  }
  v35 = DVARBOOL_dynEnt_debugMaxCollisionCacheCount;
  if ( !DVARBOOL_dynEnt_debugMaxCollisionCacheCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_debugMaxCollisionCacheCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( v35->current.enabled )
  {
    World = HavokPhysics_GetWorld((Physics_WorldId)(3 * v5 + 3));
    v37 = World;
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
        v39 = collector.m_numCachesPerBody.m_elem;
        do
        {
          if ( v39->key != -1 )
            break;
          ++v6;
          ++v39;
        }
        while ( v6 <= collector.m_numCachesPerBody.m_hashMod );
      }
      if ( v6 <= collector.m_numCachesPerBody.m_hashMod )
      {
        do
        {
          v40 = (__int64)&v37->m_bodyManager.m_bodies.m_objects.m_data[m_elem[v6].key];
          Ref = HavokPhysics_GetRef((const hknpBody *)v40);
          if ( Physics_GetRefSystem(Ref) == Physics_RefSystem_DynEnts && (*(_BYTE *)(v40 + 68) & 1) == 0 )
          {
            DynEnt_GetBasisAndDynEntClientId(Ref, &basisOut, &clientIdOut);
            ClientFromClientId = DynEnt_GetClientFromClientId(v5, clientIdOut, basisOut);
            if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 301, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
              __debugbreak();
            val = collector.m_numCachesPerBody.m_elem[v6].val;
            if ( ClientFromClientId->spawnCollisionCacheCount > val )
              val = ClientFromClientId->spawnCollisionCacheCount;
            ClientFromClientId->spawnCollisionCacheCount = val;
          }
          v44 = v6 + 1;
          m_elem = collector.m_numCachesPerBody.m_elem;
          if ( v6 + 1 <= collector.m_numCachesPerBody.m_hashMod )
          {
            v45 = &collector.m_numCachesPerBody.m_elem[v44];
            do
            {
              if ( v45->key != -1 )
                break;
              ++v44;
              ++v45;
            }
            while ( v44 <= collector.m_numCachesPerBody.m_hashMod );
          }
          v6 = v44;
        }
        while ( v44 <= collector.m_numCachesPerBody.m_hashMod );
      }
      hknpCollisionCacheManager::Statistics::~Statistics(&collector);
    }
  }
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
DynEnt_PropagateToDetailWorld
==============
*/
void DynEnt_PropagateToDetailWorld(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  unsigned __int16 physicsSetupNext; 
  __int64 v15; 
  unsigned __int16 v16; 
  DynEntityClient *v17; 
  __int64 physicsSystemDetailId; 
  int v19; 
  int v20; 
  const HavokPhysicsWorld *ConstWorld; 
  HavokPhysicsInstanceManager *p_instanceManager; 
  __int64 v23; 
  unsigned __int16 v24; 
  DynEntityClient *v26; 
  hknpBodyId v27; 
  int v28; 
  unsigned __int8 numPhysicsBodies; 
  hknpWorld *world; 
  unsigned int v53; 
  unsigned int v54; 
  const HavokPhysicsWorld *v55; 
  unsigned int v56; 
  Physics_WorldId v57; 
  unsigned int physicsSystemId; 
  hknpBodyId *RigidBodyID; 
  unsigned int v60; 
  unsigned int m_serialAndIndex; 
  hknpBodyId *v62; 
  int v63; 
  hknpBodyId v64; 
  hknpWorld *v65; 
  const tmat34_t<vec4_t> *v66; 
  __int64 activate; 
  __int64 v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  unsigned __int8 v113; 
  int duplicationBodyCount; 
  int duplicationCount; 
  int detailBoundedCount; 
  DynEntityClient *v118; 
  hknpBodyId result; 
  hknpBodyId v120[2]; 
  __int64 v121; 
  vec4_t out; 
  int v124[4]; 
  hkVector4f position; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 
  char v128; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovss  xmm9, cs:__real@3d000000
    vmovss  xmm10, cs:__real@42000000
  }
  v10 = localClientNum;
  duplicationCount = 0;
  duplicationBodyCount = 0;
  v11 = 0;
  v113 = 0;
  detailBoundedCount = 0;
  v12 = localClientNum;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  do
  {
    physicsSetupNext = cm.mapEnts->dynEntPhysicsSetupHead[v12][v11];
    if ( physicsSetupNext == 0xFFFF )
      goto LABEL_242;
    v15 = v11 + 2 * v12;
    v121 = v15;
    do
    {
      if ( (unsigned int)v10 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v98) = 2;
        LODWORD(activate) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", activate, v98) )
          __debugbreak();
      }
      if ( v11 >= 2u )
      {
        LODWORD(v98) = 2;
        LODWORD(activate) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", activate, v98) )
          __debugbreak();
      }
      v16 = g_dynEntClientEntsAllocCount[0][v15];
      if ( physicsSetupNext >= v16 )
      {
        LODWORD(v98) = v16;
        LODWORD(activate) = physicsSetupNext;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", activate, v98) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[0][v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v17 = &g_dynEntClientLists[0][v15][physicsSetupNext];
      v118 = v17;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 342, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      physicsSystemDetailId = v17->physicsSystemDetailId;
      if ( (_DWORD)physicsSystemDetailId == -1 )
      {
        v26 = v17;
        goto LABEL_240;
      }
      v19 = 3 * v10;
      v20 = 3 * v10 + 4;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 603, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if instance is detail bounded when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v20 > 7 )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 604, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v10 + 2) <= 5 )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 606, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
          __debugbreak();
      }
      if ( g_physicsServerWorldsCreated )
        goto LABEL_35;
      if ( v20 >= 0 )
      {
        if ( v20 <= 1 )
        {
          LODWORD(v98) = v19 + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 607, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v98) )
            __debugbreak();
        }
LABEL_35:
        if ( (unsigned int)v20 <= 7 )
          goto LABEL_38;
      }
      LODWORD(v98) = v19 + 4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 761, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to check if instance is detail bounded with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
        __debugbreak();
LABEL_38:
      ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v20);
      if ( !ConstWorld->world )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 766, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics IsInstanceDeactivated %i: world is NULL", "havokPhysicsWorld->world", v98) )
          __debugbreak();
      }
      p_instanceManager = &ConstWorld->instanceManager;
      if ( !p_instanceManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 107, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
        __debugbreak();
      if ( p_instanceManager->buffer[physicsSystemDetailId].detailModel )
      {
        ++detailBoundedCount;
        if ( (unsigned int)v10 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v98) = 2;
          LODWORD(activate) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", activate, v98) )
            __debugbreak();
        }
        v11 = v113;
        if ( v113 >= 2u )
        {
          LODWORD(v98) = 2;
          LODWORD(activate) = v113;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", activate, v98) )
            __debugbreak();
        }
        v23 = v113 + 2i64 * (int)v10;
        if ( !g_dynEntPoseLists[0][v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v24 = g_dynEntClientEntsAllocCount[0][v23];
        if ( physicsSetupNext >= v24 )
        {
          LODWORD(v98) = v24;
          LODWORD(activate) = physicsSetupNext;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", activate, v98) )
            __debugbreak();
        }
        _RSI = &g_dynEntPoseLists[0][v23][physicsSetupNext];
        if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 361, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        v26 = v118;
        v27.m_serialAndIndex = v118->detailBoundBody;
        v28 = v27.m_serialAndIndex & 0xFFFFFF;
        if ( (v27.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 365, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        numPhysicsBodies = v118->numPhysicsBodies;
        if ( numPhysicsBodies == 1 )
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 507, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v20 > 7 )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 508, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( v28 == 0xFFFFFF )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 509, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v98) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+4Ch]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v99 & 0x7F800000) == 2139095040 )
            goto LABEL_247;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+50h]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v100 & 0x7F800000) == 2139095040 )
            goto LABEL_247;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+54h]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v101 & 0x7F800000) == 2139095040 )
          {
LABEL_247:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 510, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm1, xmm9, dword ptr [rsi+4Ch]
            vmulss  xmm0, xmm9, dword ptr [rsi+50h]
            vmulss  xmm2, xmm9, dword ptr [rsi+54h]
            vmovss  [rbp+70h+var_D0], xmm1
            vmovss  [rbp+70h+var_CC], xmm0
            vmovss  [rbp+70h+var_C8], xmm2
            vmovss  [rbp+70h+var_C4], xmm11
          }
          if ( (unsigned int)v20 > 7 )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 661, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( v28 == 0xFFFFFF )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 662, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v98) )
              __debugbreak();
          }
          world = HavokPhysics_GetMutableWorld((Physics_WorldId)v20)->world;
          if ( !world )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 666, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v98) )
              __debugbreak();
          }
          ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, __int64))world->setBodyPosition)(&world->hknpWorldWriter, v27.m_serialAndIndex, v124, 1i64);
          _RSI->detailBodyToBoneMapCached = 0;
        }
        else
        {
          if ( numPhysicsBodies <= 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 377, ASSERT_TYPE_ASSERT, "(dynEntClient->numPhysicsBodies > 1)", (const char *)&queryFormat, "dynEntClient->numPhysicsBodies > 1") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+30h]
            vmovss  xmm2, dword ptr [rsi+34h]
            vmovss  xmm3, dword ptr [rsi+38h]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm6, xmm2, xmm2
          }
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 621, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to update detail bounds when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v20 > 7 )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 622, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to update detail bounds with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( v28 == 0xFFFFFF )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 623, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to update detail bounds with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v98) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v10 + 2) <= 5 )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 624, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to update detail bounds in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 625, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to update detail bounds in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v98) )
              __debugbreak();
          }
          if ( !Physics_IsDetailWorld((Physics_WorldId)v20) )
          {
            LODWORD(v98) = 3 * v10 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 626, ASSERT_TYPE_ASSERT, "(Physics_IsDetailWorld( worldId ))", "%s\n\tPhysics: Trying to update detail bounds with non detail world index %i", "Physics_IsDetailWorld( worldId )", v98) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+24h]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v102 & 0x7F800000) == 2139095040 )
            goto LABEL_248;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+28h]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v103 & 0x7F800000) == 2139095040 )
            goto LABEL_248;
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+2Ch]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v104 & 0x7F800000) == 2139095040 )
          {
LABEL_248:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 627, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to update detail bounds with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
              __debugbreak();
          }
          __asm { vmovss  [rsp+170h+var_130], xmm6 }
          if ( (v105 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 628, ASSERT_TYPE_ASSERT, "(!IS_NAN( radius ))", "%s\n\tPhysics: Trying to update detail bounds with invalid radius", "!IS_NAN( radius )") )
            __debugbreak();
          __asm
          {
            vmulss  xmm1, xmm9, dword ptr [rsi+24h]
            vmulss  xmm0, xmm9, dword ptr [rsi+28h]
            vmulss  xmm2, xmm9, dword ptr [rsi+2Ch]
            vmulss  xmm3, xmm6, xmm9; radius
            vmovss  dword ptr [rbp+70h+position.m_quad], xmm1
            vmovss  dword ptr [rbp+70h+position.m_quad+4], xmm0
            vmovss  dword ptr [rbp+70h+position.m_quad+8], xmm2
            vmovss  dword ptr [rbp+70h+position.m_quad+0Ch], xmm11
          }
          HavokPhysics_UpdateDetailBounds((const Physics_WorldId)v20, v27, &position, *(const float *)&_XMM3);
          _RSI->detailBodyToBoneMapCached = 0;
        }
        goto LABEL_240;
      }
      v26 = v118;
      ++duplicationCount;
      v53 = v118->numPhysicsBodies;
      v54 = v118->physicsSystemDetailId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v20 > 7 )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
          __debugbreak();
      }
      if ( v54 == -1 )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v98) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(3 * v10 + 2) <= 5 )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        if ( v20 < 0 )
          goto LABEL_139;
        if ( v20 <= 1 )
        {
          LODWORD(v98) = v19 + 4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v98) )
            __debugbreak();
        }
      }
      if ( (unsigned int)v20 > 7 )
      {
LABEL_139:
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
          __debugbreak();
      }
      if ( v54 == -1 )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v98) )
          __debugbreak();
      }
      v55 = HavokPhysics_GetConstWorld((Physics_WorldId)v20);
      if ( !v55->world )
      {
        LODWORD(v98) = v19 + 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v98) )
          __debugbreak();
      }
      if ( v53 != HavokPhysicsInstanceManager_GetBodyCount(&v55->instanceManager, v54) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 393, ASSERT_TYPE_ASSERT, "(numRigidBodies == Physics_GetNumRigidBodys( Physics_GetClientDetailWorldId( localClientNum ), dynEntClient->physicsSystemDetailId ))", (const char *)&queryFormat, "numRigidBodies == Physics_GetNumRigidBodys( DYNENT_PHYSICS_DETAIL_WORLD( localClientNum ), dynEntClient->physicsSystemDetailId )") )
        __debugbreak();
      v56 = 0;
      if ( v53 )
      {
        v57 = v19 + 3;
        duplicationBodyCount += v53;
        do
        {
          physicsSystemId = v26->physicsSystemId;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v57 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( physicsSystemId == -1 )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v98) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v57 - 2) <= 5 )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v57 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v98) )
              __debugbreak();
          }
          RigidBodyID = HavokPhysics_GetRigidBodyID(&result, v57, physicsSystemId, v56);
          v60 = v26->physicsSystemDetailId;
          m_serialAndIndex = RigidBodyID->m_serialAndIndex;
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v20 > 7 )
          {
            LODWORD(v98) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( v60 == -1 )
          {
            LODWORD(v98) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v98) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v20 - 2) <= 5 )
          {
            LODWORD(v98) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
          {
            LODWORD(v98) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v98) )
              __debugbreak();
          }
          v62 = HavokPhysics_GetRigidBodyID(v120, (const Physics_WorldId)v20, v60, v56);
          v63 = m_serialAndIndex & 0xFFFFFF;
          v64.m_serialAndIndex = v62->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 403, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( fromBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( fromBodyId )") )
            __debugbreak();
          if ( (v64.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 404, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( toBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( toBodyId )") )
            __debugbreak();
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v57 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( v63 == 0xFFFFFF )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v98) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v57 - 2) <= 5 )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v98) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v57 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v98) )
              __debugbreak();
          }
          if ( (unsigned int)v57 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( v63 == 0xFFFFFF )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v98) )
              __debugbreak();
          }
          v65 = HavokPhysics_GetConstWorld(v57)->world;
          if ( !v65 )
          {
            LODWORD(v98) = v57;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v98) )
              __debugbreak();
          }
          v66 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))v65->getBodyTransform)(&v65->hknpWorldReader, m_serialAndIndex);
          __asm
          {
            vmulss  xmm6, xmm10, dword ptr [rax+30h]
            vmulss  xmm7, xmm10, dword ptr [rax+34h]
            vmulss  xmm8, xmm10, dword ptr [rax+38h]
          }
          Axis34ToQuat(v66, &out);
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v20 > 7 )
          {
            LODWORD(v98) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v98) )
              __debugbreak();
          }
          if ( (v64.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
          {
            LODWORD(v98) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v98) )
              __debugbreak();
          }
          __asm { vmovss  [rsp+170h+var_130], xmm6 }
          if ( (v106 & 0x7F800000) == 2139095040 )
            goto LABEL_249;
          __asm { vmovss  [rsp+170h+var_130], xmm7 }
          if ( (v107 & 0x7F800000) == 2139095040 )
            goto LABEL_249;
          __asm { vmovss  [rsp+170h+var_130], xmm8 }
          if ( (v108 & 0x7F800000) == 2139095040 )
          {
LABEL_249:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+70h+out]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v109 & 0x7F800000) == 2139095040 )
            goto LABEL_250;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+70h+out+4]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v110 & 0x7F800000) == 2139095040 )
            goto LABEL_250;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+70h+out+8]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v111 & 0x7F800000) == 2139095040 )
            goto LABEL_250;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+70h+out+0Ch]
            vmovss  [rsp+170h+var_130], xmm0
          }
          if ( (v112 & 0x7F800000) == 2139095040 )
          {
LABEL_250:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm5, dword ptr [rbp+70h+out]
            vinsertps xmm5, xmm5, dword ptr [rbp+70h+out+4], 10h
            vinsertps xmm5, xmm5, dword ptr [rbp+70h+out+8], 20h
            vinsertps xmm5, xmm5, dword ptr [rbp+70h+out+0Ch], 30h
            vmulss  xmm0, xmm6, xmm9
            vmovss  dword ptr [rbp+70h+hkPosition.m_quad], xmm0
            vmulss  xmm0, xmm8, xmm9
            vmovss  dword ptr [rbp+70h+hkPosition.m_quad+8], xmm0
            vdpps   xmm0, xmm5, xmm5, 0FFh
            vrsqrtps xmm4, xmm0
            vmulss  xmm1, xmm7, xmm9
            vmovss  dword ptr [rbp+70h+hkPosition.m_quad+4], xmm1
            vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
            vmovups [rbp+70h+var_F0], xmm0
            vmulps  xmm0, xmm0, xmm4
            vmulps  xmm2, xmm0, xmm4
            vsubps  xmm3, xmm1, xmm2
            vmulps  xmm2, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
            vmulps  xmm1, xmm3, xmm2
            vmulps  xmm3, xmm1, xmm5
            vmovups xmmword ptr [rbp+70h+hkOrientation.m_vec.m_quad], xmm3
            vmovss  dword ptr [rbp+70h+hkPosition.m_quad+0Ch], xmm11
          }
          HavokPhysics_WarpRigidBodyTo((const Physics_WorldId)v20, v64, &hkPosition, &hkOrientation, 0, 0);
          v26 = v118;
          ++v56;
        }
        while ( v56 < v53 );
      }
      v11 = v113;
      v10 = localClientNum;
LABEL_240:
      physicsSetupNext = v26->physicsSetupNext;
      v15 = v121;
    }
    while ( physicsSetupNext != 0xFFFF );
    v12 = v10;
LABEL_242:
    v113 = ++v11;
  }
  while ( v11 < 2u );
  Physics_SetCGDynEntDetailPropagationDebugData(v10, detailBoundedCount, duplicationCount, duplicationBodyCount);
  _R11 = &v128;
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
  unsigned __int8 numPhysicsBodies; 
  unsigned __int8 v47; 
  __int32 v48; 
  unsigned int RigidBodyID; 
  unsigned __int8 numParts; 
  const char *v51; 
  int v64; 
  unsigned __int8 v67; 
  unsigned int v68; 
  unsigned __int8 v69; 
  const char *v70; 
  float fmt; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  __int64 v91; 
  float v92; 
  __int64 v93; 
  __int64 v94; 
  bool v95; 
  int v97[4]; 
  GfxPlacement *v98; 
  vec3_t *p_origin; 
  __int64 v100; 
  vec3_t v0; 
  vec4_t orientationAsQuat; 
  vec3_t position; 
  vec4_t orientation; 
  tmat43_t<dvec3_t> out; 
  tmat43_t<dvec3_t> axis; 
  tmat43_t<dvec3_t> v107; 

  v100 = -2i64;
  v8 = localClientNum;
  _RSI = dynEntPose;
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
    FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v97);
    if ( p_pose->isPosePrecise )
    {
      __asm
      {
        vmovd   xmm0, [rsp+220h+var_1C8]
        vcvtdq2pd xmm0, xmm0
        vmovsd  xmm2, cs:__real@3f30000000000000
        vmulsd  xmm0, xmm0, xmm2
        vcvtsd2ss xmm3, xmm0, xmm0
        vmovss  [rsp+220h+var_1C8], xmm3
        vmovd   xmm1, [rsp+220h+var_1C4]
        vcvtdq2pd xmm1, xmm1
        vmulsd  xmm0, xmm1, xmm2
        vcvtsd2ss xmm4, xmm0, xmm0
        vmovss  [rsp+220h+var_1C4], xmm4
        vmovd   xmm1, [rsp+220h+var_1C0]
        vcvtdq2pd xmm1, xmm1
        vmulsd  xmm0, xmm1, xmm2
        vcvtsd2ss xmm5, xmm0, xmm0
        vmovss  [rsp+220h+var_1C0], xmm5
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm5, [rsp+220h+var_1C0]
        vmovss  xmm4, [rsp+220h+var_1C4]
        vmovss  xmm3, [rsp+220h+var_1C8]
      }
    }
    __asm
    {
      vcvtss2sd xmm0, xmm3, xmm3
      vmovsd  [rbp+120h+var_B8], xmm0
      vcvtss2sd xmm1, xmm4, xmm4
      vmovsd  [rbp+120h+var_B0], xmm1
      vcvtss2sd xmm0, xmm5, xmm5
      vmovsd  [rbp+120h+var_A8], xmm0
    }
    DynEnt_AnglesToAxis(&dynEntDef->linkTo->angleOffset, (tmat33_t<dvec3_t> *)&v107);
    _RAX = dynEntDef->linkTo;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+4]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+120h+var_58], xmm0
      vmovss  xmm1, dword ptr [rax+8]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rbp+120h+var_50], xmm1
      vmovss  xmm0, dword ptr [rax+0Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rbp+120h+var_48], xmm0
    }
    DynEnt_MatrixMultiply43(&v107, &axis, &out);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+120h+out+48h]
      vcvtpd2ps xmm0, xmm0
      vmovss  [rbp+120h+v0], xmm0
      vmovsd  xmm1, qword ptr [rbp+120h+out+50h]
      vcvtpd2ps xmm1, xmm1
      vmovss  [rbp+120h+var_19C], xmm1
      vmovsd  xmm0, qword ptr [rbp+120h+out+58h]
      vcvtpd2ps xmm0, xmm0
      vmovss  [rbp+120h+var_198], xmm0
    }
    DynEnt_AxisComponentsToQuat(out.m, &out.m[1], &out.m[2], &orientationAsQuat);
    v95 = 0;
    __asm { vmovss  xmm2, cs:__real@3c23d70a; epsilon }
    if ( dynEntClient->physicsSystemId == -1 )
    {
      if ( VecNCompareCustomEpsilon(v0.v, dynEntPose->pose.origin.v, *(float *)&_XMM2, 3) )
      {
        __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
        if ( VecNCompareCustomEpsilon(orientationAsQuat.v, dynEntPose->pose.quat.v, *(float *)&_XMM2, 4) )
          goto LABEL_74;
      }
      dynEntClient->flags |= 0x40u;
      __asm
      {
        vmovss  xmm0, [rbp+120h+v0]
        vmovss  dword ptr [rsi+4Ch], xmm0
        vmovss  xmm1, [rbp+120h+var_19C]
        vmovss  dword ptr [rsi+50h], xmm1
        vmovss  xmm0, [rbp+120h+var_198]
        vmovss  dword ptr [rsi+54h], xmm0
      }
    }
    else
    {
      numPhysicsBodies = dynEntClient->numPhysicsBodies;
      _R12 = &dynEntPose->pose.origin;
      p_origin = &dynEntPose->pose.origin;
      if ( VecNCompareCustomEpsilon(v0.v, dynEntPose->pose.origin.v, *(float *)&_XMM2, 3) )
      {
        _R15 = &dynEntPose->pose;
        v98 = &dynEntPose->pose;
        __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
        if ( VecNCompareCustomEpsilon(orientationAsQuat.v, dynEntPose->pose.quat.v, *(float *)&_XMM2, 4) )
        {
          v47 = 0;
          if ( numPhysicsBodies )
          {
            v48 = 3 * localClientNum + 3;
            do
            {
              RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v48, dynEntClient->physicsSystemId, v47);
              if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 157, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
                __debugbreak();
              Physics_SetRigidBodyVelocity((Physics_WorldId)v48, RigidBodyID, &vec3_origin, &vec3_origin);
              Physics_GetRigidBodyTransform((const Physics_WorldId)v48, RigidBodyID, &position, &orientation);
              numParts = dynEntPose->numParts;
              if ( v47 >= numParts )
              {
                v51 = dynEntClient->activeModel ? dynEntClient->activeModel->name : "Unknown";
                LODWORD(v94) = numParts;
                LODWORD(v91) = numPhysicsBodies;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 168, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", v51, v91, v94) )
                  __debugbreak();
              }
              _RDI = DynEnt_GetPosePartFromPose(localClientNum, dynEntPose, v47);
              if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 170, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
                __debugbreak();
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+120h+position]
                vmovss  dword ptr [rdi+10h], xmm0
                vmovss  xmm1, dword ptr [rbp+120h+position+4]
                vmovss  dword ptr [rdi+14h], xmm1
                vmovss  xmm0, dword ptr [rbp+120h+position+8]
                vmovss  dword ptr [rdi+18h], xmm0
                vmovss  xmm1, dword ptr [rbp+120h+orientation]
                vmovss  dword ptr [rdi], xmm1
                vmovss  xmm0, dword ptr [rbp+120h+orientation+4]
                vmovss  dword ptr [rdi+4], xmm0
                vmovss  xmm1, dword ptr [rbp+120h+orientation+8]
                vmovss  dword ptr [rdi+8], xmm1
                vmovss  xmm0, dword ptr [rbp+120h+orientation+0Ch]
                vmovss  dword ptr [rdi+0Ch], xmm0
              }
              ++v47;
            }
            while ( v47 < numPhysicsBodies );
            _R15 = v98;
            _R12 = p_origin;
          }
          __asm
          {
            vmovss  xmm0, [rbp+120h+v0]
            vmovss  dword ptr [r12], xmm0
            vmovss  xmm1, [rbp+120h+var_19C]
            vmovss  dword ptr [r12+4], xmm1
            vmovss  xmm0, [rbp+120h+var_198]
            vmovss  dword ptr [r12+8], xmm0
            vmovups xmm1, xmmword ptr [rbp+120h+orientationAsQuat]
            vmovups xmmword ptr [r15], xmm1
          }
          goto LABEL_74;
        }
        v8 = localClientNum;
      }
      dynEntClient->flags |= 0x40u;
      v64 = 3 * v8 + 3;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+220h+var_1E8], xmm0
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+220h+fmt], xmm0
      }
      v95 = Physics_KeyframeInstanceTo((Physics_WorldId)v64, dynEntClient->physicsSystemId, &v0, &orientationAsQuat, fmt, 1, 0, v92) == Physics_MovementType_Warped;
      v67 = 0;
      if ( numPhysicsBodies )
      {
        do
        {
          v68 = Physics_GetRigidBodyID((const Physics_WorldId)v64, dynEntClient->physicsSystemId, v67);
          if ( (v68 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 132, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransformAfterWarpInstanceTo((Physics_WorldId)v64, dynEntClient->physicsSystemId, v68, &v0, &orientationAsQuat, &position, &orientation);
          v69 = dynEntPose->numParts;
          if ( v67 >= v69 )
          {
            v70 = dynEntClient->activeModel ? dynEntClient->activeModel->name : "Unknown";
            LODWORD(v94) = v69;
            LODWORD(v93) = numPhysicsBodies;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 140, ASSERT_TYPE_ASSERT, "(rigidBodyIdx < dynEntPose->numParts)", "%s\n\tDynEnt %s has %i rigid bodies and %i parts - there must be at least as many parts as bodies", "rigidBodyIdx < dynEntPose->numParts", v70, v93, v94) )
              __debugbreak();
          }
          _RDI = DynEnt_GetPosePartFromPose(localClientNum, dynEntPose, v67);
          if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_physics_sync.cpp", 142, ASSERT_TYPE_ASSERT, "(posePart)", (const char *)&queryFormat, "posePart") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+120h+position]
            vmovss  dword ptr [rdi+10h], xmm0
            vmovss  xmm1, dword ptr [rbp+120h+position+4]
            vmovss  dword ptr [rdi+14h], xmm1
            vmovss  xmm0, dword ptr [rbp+120h+position+8]
            vmovss  dword ptr [rdi+18h], xmm0
            vmovss  xmm1, dword ptr [rbp+120h+orientation]
            vmovss  dword ptr [rdi], xmm1
            vmovss  xmm0, dword ptr [rbp+120h+orientation+4]
            vmovss  dword ptr [rdi+4], xmm0
            vmovss  xmm1, dword ptr [rbp+120h+orientation+8]
            vmovss  dword ptr [rdi+8], xmm1
            vmovss  xmm0, dword ptr [rbp+120h+orientation+0Ch]
            vmovss  dword ptr [rdi+0Ch], xmm0
          }
          ++v67;
        }
        while ( v67 < numPhysicsBodies );
        _R12 = &dynEntPose->pose.origin;
      }
      __asm
      {
        vmovss  xmm0, [rbp+120h+v0]
        vmovss  dword ptr [r12], xmm0
        vmovss  xmm1, [rbp+120h+var_19C]
        vmovss  dword ptr [r12+4], xmm1
        vmovss  xmm0, [rbp+120h+var_198]
        vmovss  dword ptr [r12+8], xmm0
      }
    }
    __asm
    {
      vmovups xmm1, xmmword ptr [rbp+120h+orientationAsQuat]
      vmovups xmmword ptr [rsi+3Ch], xmm1
    }
LABEL_74:
    memset(v97, 0, 0xCui64);
    return v95;
  }
  return 0;
}

