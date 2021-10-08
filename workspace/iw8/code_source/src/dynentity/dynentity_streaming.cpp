/*
==============
DynEnt_TransientsLoaded
==============
*/

void __fastcall DynEnt_TransientsLoaded(unsigned int transientWorldIndex)
{
  ?DynEnt_TransientsLoaded@@YAXI@Z(transientWorldIndex);
}

/*
==============
DynEnt_Streaming_Init
==============
*/

void __fastcall DynEnt_Streaming_Init(const LocalClientNum_t localClientNum)
{
  ?DynEnt_Streaming_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEnt_PrepareForXModelDetailCollisionChange
==============
*/

void __fastcall DynEnt_PrepareForXModelDetailCollisionChange(XModelDetailCollision *assetToBeChanged)
{
  ?DynEnt_PrepareForXModelDetailCollisionChange@@YAXPEAUXModelDetailCollision@@@Z(assetToBeChanged);
}

/*
==============
DynEnt_PrepareForXModelChange
==============
*/

void __fastcall DynEnt_PrepareForXModelChange(XModel *assetToBeChanged)
{
  ?DynEnt_PrepareForXModelChange@@YAXPEAUXModel@@@Z(assetToBeChanged);
}

/*
==============
DynEnt_PrepareForPhysicsAssetChange
==============
*/

void __fastcall DynEnt_PrepareForPhysicsAssetChange(PhysicsAsset *assetToBeChanged)
{
  ?DynEnt_PrepareForPhysicsAssetChange@@YAXPEAUPhysicsAsset@@@Z(assetToBeChanged);
}

/*
==============
DynEnt_PostAssetChange
==============
*/

void DynEnt_PostAssetChange(void)
{
  ?DynEnt_PostAssetChange@@YAXXZ();
}

/*
==============
DynEnt_TransientsUnloading
==============
*/

void __fastcall DynEnt_TransientsUnloading(unsigned int worldTransientIndex)
{
  ?DynEnt_TransientsUnloading@@YAXI@Z(worldTransientIndex);
}

/*
==============
DynEnt_AreAssetsInThisTransientZone
==============
*/
bool DynEnt_AreAssetsInThisTransientZone(const XModel *const model, const int spTransientZoneIndex)
{
  XModelDetailCollision *detailCollision; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 89, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  detailCollision = model->detailCollision;
  return detailCollision && spTransientZoneIndex == DB_GetXAssetZoneIndex(ASSET_TYPE_XMODEL_DETAIL_COLLISION, detailCollision->name);
}

/*
==============
DynEnt_PostAssetChange
==============
*/
void DynEnt_PostAssetChange(void)
{
  unsigned int v0; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  LocalClientNum_t v3; 
  __int64 v4; 
  unsigned __int8 matchPose; 
  DynEntityListId v6; 
  DynEntityList *DynEntityList; 
  __int64 v8; 
  __int64 v9; 
  DynEntityListId v10; 
  int v11; 
  DynEntityList *v12; 
  char *v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  char *v17; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  DynEntityClient *v21; 
  unsigned __int16 v22; 
  const XModel *activeModel; 
  const XModel *v24; 
  const cmodel_t *BrushModel; 
  bool v26; 
  __int64 physicsShapeOverride; 
  XModel *detailModel; 
  __int64 v29; 
  __int64 v30; 
  DynEntityListId *v31; 
  DynEntityListId v32; 
  unsigned int v33; 
  __int64 v34; 
  DynEntityListId *v35; 

  v0 = 0;
  if ( cm.mapEnts )
  {
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v32 = dynEntityListsCount;
    v31 = dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 540, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    v31 = NULL;
    v32 = 0;
    dynEntListIds = NULL;
  }
  if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 543, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v3 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v4 = 0i64;
    v34 = 0i64;
    do
    {
      if ( DynEntCl_IsInitialized(v3) )
      {
        v35 = dynEntListIds;
        if ( dynEntityListsCount )
        {
          v30 = (unsigned __int16)dynEntityListsCount;
          do
          {
            for ( matchPose = 0; matchPose < 2u; ++matchPose )
            {
              v6 = *dynEntListIds;
              if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
              {
                LODWORD(detailModel) = 1536;
                LODWORD(physicsShapeOverride) = (unsigned __int16)v6;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                  __debugbreak();
              }
              DynEntityList = DynEnt_GetDynEntityList(v6);
              if ( DynEntityList )
              {
                v8 = matchPose;
                v33 = DynEntityList->dynEntCount[matchPose];
                if ( v33 )
                {
                  v9 = 0i64;
                  v29 = 0i64;
                  do
                  {
                    v10 = *dynEntListIds;
                    if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
                    {
                      LODWORD(detailModel) = 1536;
                      LODWORD(physicsShapeOverride) = (unsigned __int16)v10;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                        __debugbreak();
                    }
                    if ( v0 >= 0x7FFFF )
                    {
                      LODWORD(detailModel) = 0x7FFFF;
                      LODWORD(physicsShapeOverride) = v0;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                        __debugbreak();
                    }
                    v11 = v0 | ((unsigned __int16)v10 << 19);
                    v12 = DynEnt_GetDynEntityList(*dynEntListIds);
                    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                      __debugbreak();
                    if ( v0 >= v12->dynEntCount[v8] )
                    {
                      LODWORD(detailModel) = v12->dynEntCount[v8];
                      LODWORD(physicsShapeOverride) = v0;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                        __debugbreak();
                    }
                    v13 = (char *)v12->dynEntDefList[v8] + v9;
                    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 564, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                      __debugbreak();
                    v14 = v34;
                    v15 = *(_WORD *)&v13[v34 + 56];
                    if ( v15 != 0xFFFF )
                    {
                      if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
                      {
                        LODWORD(detailModel) = 2;
                        LODWORD(physicsShapeOverride) = v3;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                          __debugbreak();
                        v14 = v34;
                      }
                      v16 = v14 + v8;
                      v17 = (char *)s_dynentsUndergoingAssetChange + 0x2000 * v16;
                      if ( ((0x80000000 >> (v15 & 0x1F)) & *(_DWORD *)&v17[4 * ((unsigned __int64)v15 >> 5)]) != 0 )
                      {
                        v18 = *(_WORD *)&v13[v14 + 56];
                        if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
                        {
                          LODWORD(detailModel) = 2;
                          LODWORD(physicsShapeOverride) = v3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 63, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                            __debugbreak();
                        }
                        *(_DWORD *)&v17[4 * ((unsigned __int64)v18 >> 5)] &= ~(0x80000000 >> (v18 & 0x1F));
                        v19 = *(_WORD *)&v13[v34 + 56];
                        if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
                        {
                          LODWORD(detailModel) = 2;
                          LODWORD(physicsShapeOverride) = v3;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                            __debugbreak();
                        }
                        v20 = g_dynEntClientEntsAllocCount[0][v16];
                        if ( v19 >= v20 )
                        {
                          LODWORD(detailModel) = v20;
                          LODWORD(physicsShapeOverride) = v19;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                            __debugbreak();
                        }
                        if ( !g_dynEntClientLists[0][v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                          __debugbreak();
                        v21 = &g_dynEntClientLists[0][v16][v19];
                        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 583, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                          __debugbreak();
                        v22 = v21->flags | 0x40;
                        v21->flags = v22;
                        if ( matchPose )
                        {
                          if ( (v21->flags & 2) == 0 )
                          {
                            BrushModel = CM_GetBrushModel(*((unsigned __int16 *)v13 + 33));
                            if ( !BrushModel->physicsAsset )
                            {
                              LODWORD(detailModel) = *((unsigned __int16 *)v13 + 33);
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 617, ASSERT_TYPE_ASSERT, "(cmodel->physicsAsset)", "%s\n\tDynEnt: Missing Physics asset for brush %i.", "cmodel->physicsAsset", detailModel) )
                                __debugbreak();
                            }
                            if ( BrushModel->physicsShapeOverrideIdx == 0xFFFF )
                            {
                              LODWORD(detailModel) = *((unsigned __int16 *)v13 + 33);
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 618, ASSERT_TYPE_ASSERT, "(cmodel->physicsShapeOverrideIdx != static_cast<ushort>(-1))", "%s\n\tDynEnt: No Physics shape override for brush %i.", "cmodel->physicsShapeOverrideIdx != static_cast<ushort>(PHYSICSSHAPE_OVERRIDEID_INVALID)", detailModel) )
                                __debugbreak();
                            }
                            DynEnt_SetupPhysics(v3, v11, DYNENT_BASIS_BRUSH, NULL, BrushModel->physicsAsset, BrushModel->physicsShapeOverrideIdx, NULL, 1, 0, 0);
                          }
                          DynEnt_LinkBrush(v3, v11);
                        }
                        else
                        {
                          if ( (v22 & 2) == 0 )
                          {
                            activeModel = v21->activeModel;
                            if ( v21->activeModel )
                            {
                              v24 = NULL;
                              if ( activeModel->detailCollision )
                                v24 = v21->activeModel;
                              DynEnt_SetupPhysics(v3, v11, DYNENT_BASIS_MODEL, activeModel, activeModel->physicsAsset, -1, v24, 1, matchPose, matchPose);
                            }
                          }
                          DynEnt_LinkModel(v3, v11);
                        }
                      }
                      dynEntListIds = v35;
                      v8 = matchPose;
                    }
                    ++v0;
                    v9 = v29 + 80;
                    v29 += 80i64;
                  }
                  while ( v0 < v33 );
                }
                v0 = 0;
              }
            }
            ++dynEntListIds;
            v26 = v30-- == 1;
            v35 = dynEntListIds;
          }
          while ( !v26 );
          v4 = v34;
        }
      }
      dynEntityListsCount = v32;
      v4 += 2i64;
      dynEntListIds = v31;
      ++v3;
      v34 = v4;
    }
    while ( v3 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
DynEnt_PrepareForPhysicsAssetChange
==============
*/
void DynEnt_PrepareForPhysicsAssetChange(PhysicsAsset *assetToBeChanged)
{
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  LocalClientNum_t v3; 
  __int64 v4; 
  int v5; 
  DynEntityListId *v6; 
  DynEntityBasis v7; 
  DynEntityListId v8; 
  DynEntityList *DynEntityList; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  DynEntityListId v13; 
  int v14; 
  DynEntityList *v15; 
  DynEntityDef *v16; 
  const unsigned __int16 *v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  DynEntityClient *v21; 
  unsigned int physicsSystemId; 
  PhysicsAsset *InstanceAsset; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 
  DynEntityListId *v30; 
  DynEntityListId v32; 
  LocalClientNum_t localClientNum; 
  Physics_WorldId worldId; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_PrepareForPhysicsAssetChange");
  if ( cm.mapEnts )
  {
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v32 = dynEntityListsCount;
    v30 = dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 461, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    v30 = NULL;
    v32 = 0;
    dynEntListIds = NULL;
  }
  if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 464, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v3 = LOCAL_CLIENT_0;
  localClientNum = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v4 = 0i64;
    v5 = 3;
    worldId = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
    v28 = 0i64;
    while ( 1 )
    {
      if ( DynEntCl_IsInitialized(v3) )
      {
        v6 = dynEntListIds;
        if ( dynEntityListsCount )
          break;
      }
LABEL_61:
      dynEntityListsCount = v32;
      ++v3;
      dynEntListIds = v30;
      v5 += 3;
      v4 += 2i64;
      localClientNum = v3;
      worldId = v5;
      v28 = v4;
      if ( v3 >= SLODWORD(cl_maxLocalClients) )
        goto LABEL_62;
    }
    v29 = (unsigned __int16)dynEntityListsCount;
LABEL_15:
    v7 = DYNENT_BASIS_MODEL;
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v26) = 1536;
        LODWORD(v25) = (unsigned __int16)v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      DynEntityList = DynEnt_GetDynEntityList(v8);
      if ( DynEntityList )
      {
        v10 = (unsigned __int8)v7;
        v11 = 0;
        v27 = DynEntityList->dynEntCount[(unsigned __int8)v7];
        if ( v27 )
          break;
      }
LABEL_58:
      if ( (unsigned __int8)++v7 >= DYNENT_BASIS_COUNT )
      {
        ++v6;
        if ( !--v29 )
        {
          v5 = worldId;
          goto LABEL_61;
        }
        goto LABEL_15;
      }
    }
    v12 = 0i64;
    while ( 1 )
    {
      v13 = *v6;
      if ( *v6 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v26) = 1536;
        LODWORD(v25) = (unsigned __int16)v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      if ( v11 >= 0x7FFFF )
      {
        LODWORD(v26) = 0x7FFFF;
        LODWORD(v25) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v14 = v11 | ((unsigned __int16)v13 << 19);
      v15 = DynEnt_GetDynEntityList(*v6);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( v11 >= v15->dynEntCount[v10] )
      {
        LODWORD(v26) = v15->dynEntCount[v10];
        LODWORD(v25) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v16 = &v15->dynEntDefList[v10][v12];
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 487, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      v17 = (unsigned __int16 *)((char *)v16->clientId + v4);
      v18 = *v17;
      if ( *v17 == 0xFFFF )
        goto LABEL_56;
      if ( (unsigned int)worldId >= (PHYSICS_WORLD_ID_COUNT|PHYSICS_WORLD_ID_SERVER_LAST) )
      {
        LODWORD(v26) = 2;
        LODWORD(v25) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      v19 = v28 + v10;
      v20 = g_dynEntClientEntsAllocCount[0][v19];
      if ( v18 >= v20 )
      {
        LODWORD(v26) = v20;
        LODWORD(v25) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[0][v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v21 = &g_dynEntClientLists[0][v19][v18];
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 496, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (v21->flags & 1) == 0 )
        break;
      physicsSystemId = v21->physicsSystemId;
      if ( physicsSystemId == -1 )
        break;
      InstanceAsset = (PhysicsAsset *)Physics_GetInstanceAsset(worldId, physicsSystemId);
      if ( !InstanceAsset || InstanceAsset != assetToBeChanged )
        break;
      v24 = v14;
      v3 = localClientNum;
      DynEnt_UnlinkEntity(localClientNum, v24, v7, 1, 1);
      DynEnt_Streaming_SetDynentUndergoingAssetChange(localClientNum, v7, *v17);
      v10 = (unsigned __int8)v7;
LABEL_57:
      v4 = v28;
      ++v11;
      ++v12;
      if ( v11 >= v27 )
        goto LABEL_58;
    }
    v10 = (unsigned __int8)v7;
LABEL_56:
    v3 = localClientNum;
    goto LABEL_57;
  }
LABEL_62:
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_PrepareForXModelChange
==============
*/
void DynEnt_PrepareForXModelChange(XModel *assetToBeChanged)
{
  __int64 v1; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  LocalClientNum_t v4; 
  __int64 v5; 
  DynEntityBasis i; 
  DynEntityListId v7; 
  DynEntityList *DynEntityList; 
  unsigned int v9; 
  __int64 v10; 
  DynEntityListId v11; 
  int v12; 
  DynEntityList *v13; 
  DynEntityDef *v14; 
  const unsigned __int16 *v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  DynEntityClient *v19; 
  bool v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  DynEntityListId *v25; 
  DynEntityListId v27; 
  unsigned int v28; 
  DynEntityListId *v29; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_PrepareForXModelChange");
  v1 = 0i64;
  if ( cm.mapEnts )
  {
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v27 = dynEntityListsCount;
    v25 = dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 318, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    v25 = NULL;
    v27 = 0;
    dynEntListIds = NULL;
  }
  if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 321, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v4 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v5 = 0i64;
    v23 = 0i64;
    do
    {
      if ( DynEntCl_IsInitialized(v4) )
      {
        v29 = dynEntListIds;
        if ( dynEntityListsCount )
        {
          v24 = (unsigned __int16)dynEntityListsCount;
          do
          {
            for ( i = DYNENT_BASIS_MODEL; (unsigned __int8)i < DYNENT_BASIS_COUNT; ++i )
            {
              v7 = *dynEntListIds;
              if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
              {
                LODWORD(v22) = 1536;
                LODWORD(v21) = (unsigned __int16)v7;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v21, v22) )
                  __debugbreak();
              }
              DynEntityList = DynEnt_GetDynEntityList(v7);
              if ( DynEntityList )
              {
                v9 = 0;
                v10 = 4i64 * (unsigned __int8)i + 12;
                v28 = *(_DWORD *)((char *)&DynEntityList->name + v10);
                if ( v28 )
                {
                  do
                  {
                    v11 = *dynEntListIds;
                    if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
                    {
                      LODWORD(v22) = 1536;
                      LODWORD(v21) = (unsigned __int16)v11;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v21, v22) )
                        __debugbreak();
                    }
                    if ( v9 >= 0x7FFFF )
                    {
                      LODWORD(v22) = 0x7FFFF;
                      LODWORD(v21) = v9;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v21, v22) )
                        __debugbreak();
                    }
                    v12 = v9 | ((unsigned __int16)v11 << 19);
                    v13 = DynEnt_GetDynEntityList(*dynEntListIds);
                    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                      __debugbreak();
                    if ( v9 >= *(_DWORD *)((char *)&v13->name + v10) )
                    {
                      LODWORD(v22) = *(_DWORD *)((char *)&v13->name + v10);
                      LODWORD(v21) = v9;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v21, v22) )
                        __debugbreak();
                    }
                    v14 = &v13->dynEntDefList[(unsigned __int8)i][v1];
                    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 342, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                      __debugbreak();
                    v15 = (unsigned __int16 *)((char *)v14->clientId + v23);
                    v16 = *v15;
                    if ( *v15 != 0xFFFF )
                    {
                      if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT )
                      {
                        LODWORD(v22) = 2;
                        LODWORD(v21) = v4;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
                          __debugbreak();
                      }
                      v17 = (unsigned __int8)i + v23;
                      v18 = g_dynEntClientEntsAllocCount[0][v17];
                      if ( v16 >= v18 )
                      {
                        LODWORD(v22) = v18;
                        LODWORD(v21) = v16;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v21, v22) )
                          __debugbreak();
                      }
                      if ( !g_dynEntClientLists[0][v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                        __debugbreak();
                      v19 = &g_dynEntClientLists[0][v17][v16];
                      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 351, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
                        __debugbreak();
                      if ( (v19->flags & 1) != 0 && v19->activeModel && v19->activeModel == assetToBeChanged )
                      {
                        DynEnt_UnlinkEntity(v4, v12, i, 1, 1);
                        DynEnt_Streaming_SetDynentUndergoingAssetChange(v4, i, *v15);
                      }
                      dynEntListIds = v29;
                    }
                    v10 = 4i64 * (unsigned __int8)i + 12;
                    ++v9;
                    ++v1;
                  }
                  while ( v9 < v28 );
                  v1 = 0i64;
                }
              }
            }
            ++dynEntListIds;
            v20 = v24-- == 1;
            v29 = dynEntListIds;
          }
          while ( !v20 );
          v5 = v23;
        }
      }
      dynEntityListsCount = v27;
      v5 += 2i64;
      dynEntListIds = v25;
      ++v4;
      v23 = v5;
    }
    while ( v4 < SLODWORD(cl_maxLocalClients) );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_PrepareForXModelDetailCollisionChange
==============
*/
void DynEnt_PrepareForXModelDetailCollisionChange(XModelDetailCollision *assetToBeChanged)
{
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  LocalClientNum_t v3; 
  __int64 v4; 
  int v5; 
  DynEntityListId *v6; 
  DynEntityBasis v7; 
  DynEntityListId v8; 
  DynEntityList *DynEntityList; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  DynEntityListId v13; 
  int v14; 
  DynEntityList *v15; 
  DynEntityDef *v16; 
  const unsigned __int16 *v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  DynEntityClient *v21; 
  unsigned int physicsSystemDetailId; 
  const XModel *InstanceDetailModel; 
  XModelDetailCollision *detailCollision; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  __int64 v30; 
  DynEntityListId *v31; 
  DynEntityListId v33; 
  LocalClientNum_t localClientNum; 
  Physics_WorldId worldId; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "DynEnt_PrepareForXModelDetailCollisionChange");
  if ( cm.mapEnts )
  {
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v33 = dynEntityListsCount;
    v31 = dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 389, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    v31 = NULL;
    v33 = 0;
    dynEntListIds = NULL;
  }
  if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 392, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v3 = LOCAL_CLIENT_0;
  localClientNum = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v4 = 0i64;
    v5 = 4;
    worldId = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
    v29 = 0i64;
    while ( 1 )
    {
      if ( DynEntCl_IsInitialized(v3) )
      {
        v6 = dynEntListIds;
        if ( dynEntityListsCount )
          break;
      }
LABEL_62:
      dynEntityListsCount = v33;
      ++v3;
      dynEntListIds = v31;
      v5 += 3;
      v4 += 2i64;
      localClientNum = v3;
      worldId = v5;
      v29 = v4;
      if ( v3 >= SLODWORD(cl_maxLocalClients) )
        goto LABEL_63;
    }
    v30 = (unsigned __int16)dynEntityListsCount;
LABEL_15:
    v7 = DYNENT_BASIS_MODEL;
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v27) = 1536;
        LODWORD(v26) = (unsigned __int16)v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      DynEntityList = DynEnt_GetDynEntityList(v8);
      if ( DynEntityList )
      {
        v10 = (unsigned __int8)v7;
        v11 = 0;
        v28 = DynEntityList->dynEntCount[(unsigned __int8)v7];
        if ( v28 )
          break;
      }
LABEL_59:
      if ( (unsigned __int8)++v7 >= DYNENT_BASIS_COUNT )
      {
        ++v6;
        if ( !--v30 )
        {
          v5 = worldId;
          goto LABEL_62;
        }
        goto LABEL_15;
      }
    }
    v12 = 0i64;
    while ( 1 )
    {
      v13 = *v6;
      if ( *v6 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v27) = 1536;
        LODWORD(v26) = (unsigned __int16)v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( v11 >= 0x7FFFF )
      {
        LODWORD(v27) = 0x7FFFF;
        LODWORD(v26) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v14 = v11 | ((unsigned __int16)v13 << 19);
      v15 = DynEnt_GetDynEntityList(*v6);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
        __debugbreak();
      if ( v11 >= v15->dynEntCount[v10] )
      {
        LODWORD(v27) = v15->dynEntCount[v10];
        LODWORD(v26) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v16 = &v15->dynEntDefList[v10][v12];
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 412, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
        __debugbreak();
      v17 = (unsigned __int16 *)((char *)v16->clientId + v4);
      v18 = *v17;
      if ( *v17 == 0xFFFF )
        goto LABEL_57;
      if ( (unsigned int)worldId >= (PHYSICS_WORLD_ID_COUNT|PHYSICS_WORLD_ID_CLIENT0_PREDICTIVE) )
      {
        LODWORD(v27) = 2;
        LODWORD(v26) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      v19 = v29 + v10;
      v20 = g_dynEntClientEntsAllocCount[0][v19];
      if ( v18 >= v20 )
      {
        LODWORD(v27) = v20;
        LODWORD(v26) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( !g_dynEntClientLists[0][v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
        __debugbreak();
      v21 = &g_dynEntClientLists[0][v19][v18];
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 421, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (v21->flags & 1) == 0 )
        break;
      physicsSystemDetailId = v21->physicsSystemDetailId;
      if ( physicsSystemDetailId == -1 )
        break;
      InstanceDetailModel = Physics_GetInstanceDetailModel(worldId, physicsSystemDetailId);
      if ( !InstanceDetailModel )
        break;
      detailCollision = InstanceDetailModel->detailCollision;
      if ( !detailCollision || detailCollision != assetToBeChanged )
        break;
      v25 = v14;
      v3 = localClientNum;
      DynEnt_UnlinkEntity(localClientNum, v25, v7, 1, 1);
      DynEnt_Streaming_SetDynentUndergoingAssetChange(localClientNum, v7, *v17);
      v10 = (unsigned __int8)v7;
LABEL_58:
      v4 = v29;
      ++v11;
      ++v12;
      if ( v11 >= v28 )
        goto LABEL_59;
    }
    v10 = (unsigned __int8)v7;
LABEL_57:
    v3 = localClientNum;
    goto LABEL_58;
  }
LABEL_63:
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEnt_Streaming_Init
==============
*/
void DynEnt_Streaming_Init(const LocalClientNum_t localClientNum)
{
  bitarray<65536> *v1; 
  __int64 v2; 

  v1 = s_dynentsUndergoingAssetChange[(__int64)(int)localClientNum];
  v2 = 256i64;
  do
  {
    *(_QWORD *)v1->array = 0i64;
    *(_QWORD *)&v1->array[2] = 0i64;
    *(_QWORD *)&v1->array[4] = 0i64;
    v1 = (bitarray<65536> *)((char *)v1 + 64);
    *(_QWORD *)&v1[-1].array[2038] = 0i64;
    *(_QWORD *)&v1[-1].array[2040] = 0i64;
    *(_QWORD *)&v1[-1].array[2042] = 0i64;
    *(_QWORD *)&v1[-1].array[2044] = 0i64;
    *(_QWORD *)&v1[-1].array[2046] = 0i64;
    --v2;
  }
  while ( v2 );
}

/*
==============
DynEnt_Streaming_SetDynentUndergoingAssetChange
==============
*/
void DynEnt_Streaming_SetDynentUndergoingAssetChange(const LocalClientNum_t localClientNum, const DynEntityBasis basis, const unsigned __int16 dynEntClientId)
{
  __int64 v3; 
  char *v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 45, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 46, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v6 = (char *)s_dynentsUndergoingAssetChange + 0x2000 * ((unsigned __int8)basis + 2 * v3);
  *(_DWORD *)&v6[4 * ((unsigned __int64)dynEntClientId >> 5)] |= 0x80000000 >> (dynEntClientId & 0x1F);
}

/*
==============
DynEnt_TransientsLoaded
==============
*/
void DynEnt_TransientsLoaded(unsigned int transientWorldIndex)
{
  __int64 v1; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  LocalClientNum_t v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned __int16 (*v7)[2]; 
  DynEntityClient *(*v8)[2]; 
  DynEntityListId v9; 
  DynEntityList *DynEntityList; 
  unsigned int v11; 
  __int64 v12; 
  DynEntityListId v13; 
  unsigned int v14; 
  DynEntityList *v15; 
  DynEntityDef *v16; 
  unsigned __int16 v17; 
  __int64 v18; 
  const DynEntityDef *Def; 
  DynEntitySpatialActivationMode priority; 
  __int16 v21; 
  const XModel *v22; 
  const XModel *v23; 
  bool v24; 
  __int64 physicsShapeOverride; 
  XModel *detailModel; 
  DynEntityListId *v27; 
  DynEntityClient *(*v28)[2]; 
  unsigned int v29; 
  __int64 v30; 
  unsigned __int16 (*v31)[2]; 
  __int64 v32; 
  __int64 v33; 
  DynEntityListId *v34; 
  __int64 v35; 
  DynEntityListId v36; 
  int spTransientZoneIndex; 

  v1 = transientWorldIndex;
  spTransientZoneIndex = DB_Zones_GetZoneIndexFromWorldTransientIndex(transientWorldIndex);
  if ( cm.mapEnts )
  {
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v36 = dynEntityListsCount;
    v34 = dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 114, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    v34 = NULL;
    v36 = 0;
    dynEntListIds = NULL;
  }
  if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 117, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v4 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v5 = 0i64;
    v6 = 56i64;
    v7 = g_dynEntClientEntsAllocCount;
    v33 = 0i64;
    v8 = g_dynEntClientLists;
    v31 = g_dynEntClientEntsAllocCount;
    v28 = g_dynEntClientLists;
    v30 = 56i64;
    do
    {
      if ( DynEntCl_IsInitialized(v4) )
      {
        if ( (unsigned int)v1 >= 0x600 )
        {
          LODWORD(detailModel) = 1536;
          LODWORD(physicsShapeOverride) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 126, ASSERT_TYPE_ASSERT, "(unsigned)( transientWorldIndex ) < (unsigned)( ( sizeof( *array_counter( g_dynentTransientZoneStates[localClientNum] ) ) + 0 ) )", "transientWorldIndex doesn't index ARRAY_COUNT( g_dynentTransientZoneStates[localClientNum] )\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
            __debugbreak();
        }
        v27 = dynEntListIds;
        v35 = v5 + v1;
        g_dynentTransientZoneStates[0][v5 + v1] = 1;
        if ( dynEntityListsCount )
        {
          v32 = (unsigned __int16)dynEntityListsCount;
          do
          {
            v9 = *dynEntListIds;
            if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(detailModel) = 1536;
              LODWORD(physicsShapeOverride) = (unsigned __int16)v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                __debugbreak();
            }
            DynEntityList = DynEnt_GetDynEntityList(v9);
            if ( DynEntityList )
            {
              v29 = DynEntityList->dynEntCount[0];
              v11 = 0;
              if ( v29 )
              {
                v12 = 0i64;
                do
                {
                  v13 = *dynEntListIds;
                  if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
                  {
                    LODWORD(detailModel) = 1536;
                    LODWORD(physicsShapeOverride) = (unsigned __int16)v13;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                      __debugbreak();
                  }
                  if ( v11 >= 0x7FFFF )
                  {
                    LODWORD(detailModel) = 0x7FFFF;
                    LODWORD(physicsShapeOverride) = v11;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                      __debugbreak();
                  }
                  v14 = v11 | ((unsigned __int16)v13 << 19);
                  v15 = DynEnt_GetDynEntityList(*dynEntListIds);
                  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                    __debugbreak();
                  if ( v11 >= v15->dynEntCount[0] )
                  {
                    LODWORD(detailModel) = v15->dynEntCount[0];
                    LODWORD(physicsShapeOverride) = v11;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                      __debugbreak();
                  }
                  v16 = &v15->dynEntDefList[0][v12];
                  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 142, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                    __debugbreak();
                  v17 = *(_WORD *)((char *)&v16->baseModel + v30);
                  if ( v17 == 0xFFFF )
                  {
                    v18 = 0i64;
                  }
                  else
                  {
                    if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT )
                    {
                      LODWORD(detailModel) = 2;
                      LODWORD(physicsShapeOverride) = v4;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                        __debugbreak();
                    }
                    if ( v17 >= *(_WORD *)v31 )
                    {
                      LODWORD(detailModel) = *(_WORD *)v31;
                      LODWORD(physicsShapeOverride) = v17;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                        __debugbreak();
                    }
                    if ( !(*v28)[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                      __debugbreak();
                    v18 = (__int64)&(*v28)[0][v17];
                  }
                  if ( v16->isTransient )
                  {
                    if ( v16->type == DYNENT_TYPE_SCRIPTABLEINST && v18 && (*(_BYTE *)(v18 + 28) & 1) != 0 && *(_QWORD *)v18 )
                    {
                      if ( DynEnt_AreAssetsInThisTransientZone(*(const XModel *const *)v18, spTransientZoneIndex) )
                        DynEnt_ChangeActiveModelForScriptable(v4, v14, *(const XModel **)v18);
                    }
                    else if ( v16->transientIndexStored == (_DWORD)v1 )
                    {
                      if ( (unsigned int)v1 >= 0x600 )
                      {
                        LODWORD(detailModel) = 1536;
                        LODWORD(physicsShapeOverride) = v1;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( transientWorldIndex ) < (unsigned)( ( sizeof( *array_counter( g_dynentTransientZoneHasData[localClientNum] ) ) + 0 ) )", "transientWorldIndex doesn't index ARRAY_COUNT( g_dynentTransientZoneHasData[localClientNum] )\n\t%i not in [0, %i)", physicsShapeOverride, detailModel) )
                          __debugbreak();
                      }
                      g_dynentTransientZoneHasData[0][v35] = 1;
                      Def = DynEnt_GetDef((DynEntityListId)(v14 >> 19), v14 & 0x7FFFF, DYNENT_BASIS_MODEL);
                      if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 380, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                        __debugbreak();
                      priority = Def->priority;
                      if ( priority == DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE || priority == DYNENT_PRIORITY_NO_SPATIAL_DEACTIVATABLE )
                      {
                        v16->transientZoneLoaded = 1;
                        if ( v18 && (v21 = *(_WORD *)(v18 + 28), (v21 & 0x100) != 0) )
                        {
                          if ( (v21 & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 185, ASSERT_TYPE_ASSERT, "(dynEntClient->flags & (1 << 5))", (const char *)&queryFormat, "dynEntClient->flags & DYNENT_CL_NO_EVICT") )
                            __debugbreak();
                          *(_WORD *)(v18 + 28) |= 0x41u;
                          if ( (*(_BYTE *)(v18 + 28) & 2) == 0 )
                          {
                            v22 = *(const XModel **)v18;
                            if ( *(_QWORD *)v18 )
                            {
                              v23 = NULL;
                              if ( v22->detailCollision )
                                v23 = *(const XModel **)v18;
                              DynEnt_SetupPhysics(v4, v14, DYNENT_BASIS_MODEL, v22, v22->physicsAsset, -1, v23, 1, 0, 0);
                            }
                          }
                          DynEnt_LinkModel(v4, v14);
                        }
                        else
                        {
                          DynEntCL_AddEntity(v4, v14, DYNENT_BASIS_MODEL, 1, 0, 1);
                        }
                      }
                      dynEntListIds = v27;
                    }
                  }
                  ++v11;
                  ++v12;
                }
                while ( v11 < v29 );
              }
            }
            ++dynEntListIds;
            v24 = v32-- == 1;
            v27 = dynEntListIds;
          }
          while ( !v24 );
          v8 = v28;
          v7 = v31;
          v6 = v30;
          v5 = v33;
        }
      }
      dynEntityListsCount = v36;
      v6 += 2i64;
      dynEntListIds = v34;
      ++v7;
      ++v8;
      v30 = v6;
      v31 = v7;
      v5 += 1536i64;
      v28 = v8;
      ++v4;
      v33 = v5;
    }
    while ( v4 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
DynEnt_TransientsUnloading
==============
*/
void DynEnt_TransientsUnloading(unsigned int worldTransientIndex)
{
  __int64 v1; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  LocalClientNum_t v4; 
  __int64 v5; 
  __int64 v6; 
  bool v7; 
  DynEntityBasis i; 
  DynEntityListId v9; 
  DynEntityList *DynEntityList; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  DynEntityListId v14; 
  int v15; 
  DynEntityList *v16; 
  DynEntityDef *v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  DynEntityClient *v21; 
  unsigned __int16 flags; 
  unsigned __int16 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  DynEntityListId *v29; 
  __int64 v30; 
  __int64 v31; 
  DynEntityListId *v32; 
  DynEntityListId v34; 
  int spTransientZoneIndex; 
  unsigned int v36; 

  v1 = worldTransientIndex;
  spTransientZoneIndex = DB_Zones_GetZoneIndexFromWorldTransientIndex(worldTransientIndex);
  if ( cm.mapEnts )
  {
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
    dynEntListIds = cm.mapEnts->dynEntListIds;
    v34 = dynEntityListsCount;
    v32 = dynEntListIds;
    if ( dynEntityListsCount && !dynEntListIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 223, ASSERT_TYPE_ASSERT, "(listCount == 0 || listIds)", (const char *)&queryFormat, "listCount == 0 || listIds") )
      __debugbreak();
  }
  else
  {
    dynEntityListsCount = 0;
    v34 = 0;
    dynEntListIds = NULL;
    v32 = NULL;
  }
  if ( SLODWORD(cl_maxLocalClients) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 226, ASSERT_TYPE_ASSERT, "((cl_maxLocalClients) <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "MAX_LOCAL_CLIENTS <= DYNENT_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  v4 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    v5 = 0i64;
    v28 = 0i64;
    v6 = v1;
    v31 = v1;
    do
    {
      if ( (unsigned int)v1 >= 0x600 )
      {
        LODWORD(v26) = 1536;
        LODWORD(v24) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 229, ASSERT_TYPE_ASSERT, "(unsigned)( worldTransientIndex ) < (unsigned)( ( sizeof( *array_counter( g_dynentTransientZoneStates[localClientNum] ) ) + 0 ) )", "worldTransientIndex doesn't index ARRAY_COUNT( g_dynentTransientZoneStates[localClientNum] )\n\t%i not in [0, %i)", v24, v26) )
          __debugbreak();
        LODWORD(v27) = 1536;
        LODWORD(v25) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 230, ASSERT_TYPE_ASSERT, "(unsigned)( worldTransientIndex ) < (unsigned)( ( sizeof( *array_counter( g_dynentTransientZoneHasData[localClientNum] ) ) + 0 ) )", "worldTransientIndex doesn't index ARRAY_COUNT( g_dynentTransientZoneHasData[localClientNum] )\n\t%i not in [0, %i)", v25, v27) )
          __debugbreak();
      }
      if ( g_dynentTransientZoneStates[0][v6] )
      {
        v7 = !g_dynentTransientZoneHasData[0][v6];
        g_dynentTransientZoneStates[0][v6] = 0;
        if ( !v7 )
        {
          g_dynentTransientZoneHasData[0][v6] = 0;
          v29 = dynEntListIds;
          if ( dynEntityListsCount )
          {
            v30 = (unsigned __int16)dynEntityListsCount;
            do
            {
              for ( i = DYNENT_BASIS_MODEL; (unsigned __int8)i < DYNENT_BASIS_COUNT; ++i )
              {
                v9 = *dynEntListIds;
                if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
                {
                  LODWORD(v26) = 1536;
                  LODWORD(v24) = (unsigned __int16)v9;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v24, v26) )
                    __debugbreak();
                }
                DynEntityList = DynEnt_GetDynEntityList(v9);
                if ( DynEntityList )
                {
                  v11 = 0;
                  v12 = 4i64 * (unsigned __int8)i + 12;
                  v36 = *(_DWORD *)((char *)&DynEntityList->name + v12);
                  if ( v36 )
                  {
                    v13 = 0i64;
                    do
                    {
                      v14 = *dynEntListIds;
                      if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
                      {
                        LODWORD(v26) = 1536;
                        LODWORD(v24) = (unsigned __int16)v14;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v24, v26) )
                          __debugbreak();
                      }
                      if ( v11 >= 0x7FFFF )
                      {
                        LODWORD(v26) = 0x7FFFF;
                        LODWORD(v24) = v11;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v24, v26) )
                          __debugbreak();
                      }
                      v15 = v11 | ((unsigned __int16)v14 << 19);
                      v16 = DynEnt_GetDynEntityList(*dynEntListIds);
                      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
                        __debugbreak();
                      if ( v11 >= *(_DWORD *)((char *)&v16->name + v12) )
                      {
                        LODWORD(v26) = *(_DWORD *)((char *)&v16->name + v12);
                        LODWORD(v24) = v11;
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v24, v26) )
                          __debugbreak();
                      }
                      v17 = &v16->dynEntDefList[(unsigned __int8)i][v13];
                      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_streaming.cpp", 259, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
                        __debugbreak();
                      v18 = *(unsigned __int16 *)((char *)v17->clientId + v28);
                      if ( v18 == 0xFFFF )
                      {
                        v21 = NULL;
                      }
                      else
                      {
                        if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT )
                        {
                          LODWORD(v26) = 2;
                          LODWORD(v24) = v4;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v26) )
                            __debugbreak();
                        }
                        v19 = (unsigned __int8)i + v28;
                        v20 = g_dynEntClientEntsAllocCount[0][v19];
                        if ( v18 >= v20 )
                        {
                          LODWORD(v26) = v20;
                          LODWORD(v24) = v18;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v24, v26) )
                            __debugbreak();
                        }
                        if ( !g_dynEntClientLists[0][v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
                          __debugbreak();
                        v21 = &g_dynEntClientLists[0][v19][v18];
                        dynEntListIds = v29;
                      }
                      if ( v17->isTransient )
                      {
                        if ( v21 )
                        {
                          flags = v21->flags;
                          if ( (flags & 1) != 0 )
                          {
                            if ( v17->type == DYNENT_TYPE_SCRIPTABLEINST && v21->activeModel && (flags & 2) != 0 )
                            {
                              if ( DynEnt_AreAssetsInThisTransientZone(v21->activeModel, spTransientZoneIndex) )
                                DynEnt_UnlinkEntity(v4, v15, DYNENT_BASIS_MODEL, 1, 1);
                            }
                            else if ( v17->transientIndexStored == worldTransientIndex )
                            {
                              v17->transientZoneLoaded = 0;
                              v23 = v21->flags;
                              if ( (v23 & 2) != 0 )
                              {
                                DynEnt_UnlinkEntity(v4, v15, i, 1, 0);
                                v23 = v21->flags;
                              }
                              v21->flags = v23 & 0xFFFE;
                            }
                          }
                        }
                      }
                      v12 = 4i64 * (unsigned __int8)i + 12;
                      ++v11;
                      ++v13;
                    }
                    while ( v11 < v36 );
                  }
                }
              }
              ++dynEntListIds;
              v7 = v30-- == 1;
              v29 = dynEntListIds;
            }
            while ( !v7 );
            v5 = v28;
            LODWORD(v1) = worldTransientIndex;
            v6 = v31;
          }
        }
      }
      dynEntityListsCount = v34;
      dynEntListIds = v32;
      v6 += 1536i64;
      v5 += 2i64;
      ++v4;
      v31 = v6;
      v28 = v5;
    }
    while ( v4 < SLODWORD(cl_maxLocalClients) );
  }
}

