/*
==============
DynEntCL_Spatial_FindPartitionForDynEnt
==============
*/

int __fastcall DynEntCL_Spatial_FindPartitionForDynEnt(const DynEntityDef *def)
{
  return ?DynEntCL_Spatial_FindPartitionForDynEnt@@YAHPEBUDynEntityDef@@@Z(def);
}

/*
==============
DynEntCL_Spatial_AllocateClientMemory
==============
*/

void __fastcall DynEntCL_Spatial_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  ?DynEntCL_Spatial_AllocateClientMemory@@YAXPEAUHunkUser@@I@Z(hunkUser, maxLocalClients);
}

/*
==============
DynEntCL_Spatial_DynEntityListAboutToRemove
==============
*/

void __fastcall DynEntCL_Spatial_DynEntityListAboutToRemove(DynEntityListId listId)
{
  ?DynEntCL_Spatial_DynEntityListAboutToRemove@@YAXW4DynEntityListId@@@Z(listId);
}

/*
==============
DynEntCL_Spatial_DeferredAddNoSpatial
==============
*/

void __fastcall DynEntCL_Spatial_DeferredAddNoSpatial(LocalClientNum_t localClientNum, const bitarray<1536> *dynEntListAdded)
{
  ?DynEntCL_Spatial_DeferredAddNoSpatial@@YAXW4LocalClientNum_t@@AEBV?$bitarray@$0GAA@@@@Z(localClientNum, dynEntListAdded);
}

/*
==============
DynEntCL_Spatial_DynEntityListAdded
==============
*/

void __fastcall DynEntCL_Spatial_DynEntityListAdded(DynEntityListId listId)
{
  ?DynEntCL_Spatial_DynEntityListAdded@@YAXW4DynEntityListId@@@Z(listId);
}

/*
==============
DynEntCL_Spatial_MarkIfMissingCollisionTiles
==============
*/

bool __fastcall DynEntCL_Spatial_MarkIfMissingCollisionTiles(LocalClientNum_t localClientNum)
{
  return ?DynEntCL_Spatial_MarkIfMissingCollisionTiles@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_Spatial_FreeClientMemory
==============
*/

void DynEntCL_Spatial_FreeClientMemory(void)
{
  ?DynEntCL_Spatial_FreeClientMemory@@YAXXZ();
}

/*
==============
DynEntCL_Spatial_UpdateCmd
==============
*/

void __fastcall DynEntCL_Spatial_UpdateCmd(const void *const cmdInfo)
{
  ?DynEntCL_Spatial_UpdateCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
DynEntCL_Spatial_Iterator::Advance
==============
*/

bool __fastcall DynEntCL_Spatial_Iterator::Advance(DynEntCL_Spatial_Iterator *this)
{
  return ?Advance@DynEntCL_Spatial_Iterator@@QEAA_NXZ(this);
}

/*
==============
DynEntCL_Spatial_DeferredRemove
==============
*/

void __fastcall DynEntCL_Spatial_DeferredRemove(LocalClientNum_t localClientNum, const bitarray<1536> *dynEntListRemoved)
{
  ?DynEntCL_Spatial_DeferredRemove@@YAXW4LocalClientNum_t@@AEBV?$bitarray@$0GAA@@@@Z(localClientNum, dynEntListRemoved);
}

/*
==============
DynEntCL_Spatial_DebugDrawOverlay
==============
*/

void __fastcall DynEntCL_Spatial_DebugDrawOverlay(DynEntitySpatialPopulationType populationIndex, float zoomWorldSize)
{
  ?DynEntCL_Spatial_DebugDrawOverlay@@YAXW4DynEntitySpatialPopulationType@@M@Z(populationIndex, zoomWorldSize);
}

/*
==============
DynEntCL_Spatial_UpdateNeeded
==============
*/

bool __fastcall DynEntCL_Spatial_UpdateNeeded(SpatialPartition_PopulationSort_ClientData *clientData)
{
  return ?DynEntCL_Spatial_UpdateNeeded@@YA_NPEAUSpatialPartition_PopulationSort_ClientData@@@Z(clientData);
}

/*
==============
DynEntCL_Spatial_Iterator::Init
==============
*/

void __fastcall DynEntCL_Spatial_Iterator::Init(DynEntCL_Spatial_Iterator *this, LocalClientNum_t localClientNum, DynEntityBasis filterBasis)
{
  ?Init@DynEntCL_Spatial_Iterator@@QEAAXW4LocalClientNum_t@@W4DynEntityBasis@@@Z(this, localClientNum, filterBasis);
}

/*
==============
DynEntCL_Spatial_SortByDistanceAndView
==============
*/

void __fastcall DynEntCL_Spatial_SortByDistanceAndView(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos, const vec3_t *lookAtDir, const float fovInDegrees)
{
  ?DynEntCL_Spatial_SortByDistanceAndView@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBTvec3_t@@1M@Z(clientData, viewPos, lookAtDir, fovInDegrees);
}

/*
==============
DynEntCL_Spatial_IsAnyClientInitialized
==============
*/

bool __fastcall DynEntCL_Spatial_IsAnyClientInitialized()
{
  return ?DynEntCL_Spatial_IsAnyClientInitialized@@YA_NXZ();
}

/*
==============
DynEntCL_Spatial_Shutdown
==============
*/

void __fastcall DynEntCL_Spatial_Shutdown(LocalClientNum_t localClientNum)
{
  ?DynEntCL_Spatial_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_Spatial_RemoveDynEntityList
==============
*/

void __fastcall DynEntCL_Spatial_RemoveDynEntityList(LocalClientNum_t localClientNum, DynEntityListId dynEntListId)
{
  ?DynEntCL_Spatial_RemoveDynEntityList@@YAXW4LocalClientNum_t@@W4DynEntityListId@@@Z(localClientNum, dynEntListId);
}

/*
==============
DynEntCL_Spatial_PostLoad
==============
*/

void __fastcall DynEntCL_Spatial_PostLoad(LocalClientNum_t localClientNum)
{
  ?DynEntCL_Spatial_PostLoad@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_Spatial_SortByDistance
==============
*/

void __fastcall DynEntCL_Spatial_SortByDistance(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos)
{
  ?DynEntCL_Spatial_SortByDistance@@YAXPEAUSpatialPartition_PopulationSort_ClientData@@AEBTvec3_t@@@Z(clientData, viewPos);
}

/*
==============
DynEntCL_Spatial_Init
==============
*/

void __fastcall DynEntCL_Spatial_Init(LocalClientNum_t localClientNum)
{
  ?DynEntCL_Spatial_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_Spatial_IsInitialized
==============
*/

bool __fastcall DynEntCL_Spatial_IsInitialized(LocalClientNum_t localClientNum)
{
  return ?DynEntCL_Spatial_IsInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
DynEntCL_Spatial_DebugDrawWorld
==============
*/

void __fastcall DynEntCL_Spatial_DebugDrawWorld(DynEntitySpatialPopulationType populationIndex)
{
  ?DynEntCL_Spatial_DebugDrawWorld@@YAXW4DynEntitySpatialPopulationType@@@Z(populationIndex);
}

/*
==============
DynEntCL_Spatial_AddNoSpatial
==============
*/

void __fastcall DynEntCL_Spatial_AddNoSpatial(LocalClientNum_t localClientNum, DynEntityListId dynEntListId)
{
  ?DynEntCL_Spatial_AddNoSpatial@@YAXW4LocalClientNum_t@@W4DynEntityListId@@@Z(localClientNum, dynEntListId);
}

/*
==============
DynEntCL_Spatial_DynEntityListAboutToSwap
==============
*/

void __fastcall DynEntCL_Spatial_DynEntityListAboutToSwap(DynEntityListId listId)
{
  ?DynEntCL_Spatial_DynEntityListAboutToSwap@@YAXW4DynEntityListId@@@Z(listId);
}

/*
==============
DynEntCL_Spatial_CollisionUpdateNeeded
==============
*/

bool __fastcall DynEntCL_Spatial_CollisionUpdateNeeded(SpatialPartition_PopulationSort_ClientData *clientData)
{
  return ?DynEntCL_Spatial_CollisionUpdateNeeded@@YA_NPEAUSpatialPartition_PopulationSort_ClientData@@@Z(clientData);
}

/*
==============
DynEntCL_Spatial_GetTransient
==============
*/
__int64 DynEntCL_Spatial_GetTransient(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  __int16 spatialNodeNext; 
  __int16 spatialNodeNext_high; 

  spatialNodeNext = node[5].spatialNodeNext;
  if ( spatialNodeNext )
  {
    spatialNodeNext_high = HIWORD(node[6].spatialNodeNext);
    if ( spatialNodeNext_high )
    {
      if ( spatialNodeNext_high != spatialNodeNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 158, ASSERT_TYPE_ASSERT, "(def->dynEntityListId == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == def->dynEntityListId)", (const char *)&queryFormat, "def->dynEntityListId == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == def->dynEntityListId") )
        __debugbreak();
    }
  }
  return HIWORD(node[6].spatialNodeNext);
}

/*
==============
DynEntCL_Spatial_GetPriority
==============
*/
__int64 DynEntCL_Spatial_GetPriority(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  return HIBYTE(node[1].spatialNodeNext);
}

/*
==============
DynEntCL_Spatial_GetPriority_SparseOccluders
==============
*/
__int64 DynEntCL_Spatial_GetPriority_SparseOccluders(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  return 0i64;
}

/*
==============
DynEntCL_Spatial_GetPosition
==============
*/
void DynEntCL_Spatial_GetPosition(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node, vec3_t *out_pos)
{
  *(double *)out_pos->v = *(double *)&node[-3].spatialNodeNext;
  LODWORD(out_pos->z) = (SpatialPartition_Population_Node)node[-1].spatialNodeNext;
}

/*
==============
DynEntCL_Spatial_IsActive
==============
*/
bool DynEntCL_Spatial_IsActive(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  return ((unsigned __int8)(1 << clientData->localClientNum) & node[1].spatialNodeNext) != 0;
}

/*
==============
DynEntCL_Spatial_IsActive_SparseOccluder
==============
*/
bool DynEntCL_Spatial_IsActive_SparseOccluder(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  return ((unsigned __int8)(1 << clientData->localClientNum) & node[1].spatialNodeNext) != 0;
}

/*
==============
DynEntCL_Spatial_CanActivate
==============
*/
bool DynEntCL_Spatial_CanActivate(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  const DynEntityDef *v2; 
  DynEntityBasis basis; 
  unsigned int Id; 
  __int64 v7; 
  int v8; 

  v2 = (const DynEntityDef *)&node[-11];
  if ( ((unsigned __int8)(1 << clientData->localClientNum) & node[1].spatialNodeNext) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 206, ASSERT_TYPE_ASSERT, "(0 == (def->clientActiveMask & (1u << clientData->localClientNum)))", (const char *)&queryFormat, "0 == (def->clientActiveMask & (1u << clientData->localClientNum))") )
    __debugbreak();
  basis = v2->basis;
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    v8 = 2;
    LODWORD(v7) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  Id = DynEnt_GetId(v2, (const DynEntityBasis)v2->basis);
  return DynEntCL_DynEntCanActivate(clientData->localClientNum, Id, v2->basis);
}

/*
==============
DynEntCL_Spatial_Activate
==============
*/
void DynEntCL_Spatial_Activate(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node, const unsigned int sortedPartitionIndex)
{
  SpatialPartition_Population_Node *v3; 
  DynEntityBasis v6; 
  unsigned int Id; 
  __int64 associateScriptables; 
  int v9; 

  v3 = node - 11;
  if ( (node[1].spatialNodeNext & (unsigned __int8)(1 << clientData->localClientNum)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 215, ASSERT_TYPE_ASSERT, "(0 == (def->clientActiveMask & (1u << clientData->localClientNum)))", (const char *)&queryFormat, "0 == (def->clientActiveMask & (1u << clientData->localClientNum))") )
    __debugbreak();
  if ( HIBYTE(v3[12].spatialNodeNext) >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 216, ASSERT_TYPE_ASSERT, "(def->priority < DYNENT_RADIAL_PRIORITY_LEVEL_COUNT)", (const char *)&queryFormat, "def->priority < DYNENT_RADIAL_PRIORITY_LEVEL_COUNT") )
    __debugbreak();
  if ( !DynEntCL_Spatial_CanActivate(clientData, node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 217, ASSERT_TYPE_ASSERT, "(DynEntCL_Spatial_CanActivate( clientData, node ))", (const char *)&queryFormat, "DynEntCL_Spatial_CanActivate( clientData, node )") )
    __debugbreak();
  v6 = BYTE1(v3[12].spatialNodeNext);
  LOBYTE(v3[12].spatialNodeNext) |= 1 << clientData->localClientNum;
  if ( (unsigned __int8)v6 >= DYNENT_BASIS_COUNT )
  {
    v9 = 2;
    LODWORD(associateScriptables) = (unsigned __int8)v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, v9) )
      __debugbreak();
  }
  Id = DynEnt_GetId((const DynEntityDef *)v3, (const DynEntityBasis)BYTE1(v3[12].spatialNodeNext));
  DynEntCL_AddEntity(clientData->localClientNum, Id, v6, 1, 0, 1);
}

/*
==============
DynEntCL_Spatial_Activate_SparseOccluder
==============
*/
void DynEntCL_Spatial_Activate_SparseOccluder(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node, const unsigned int sortedPartitionIndex)
{
  unsigned __int8 spatialNodeNext_high; 
  unsigned __int8 v7; 
  unsigned int Id; 
  __int64 associateScriptables; 
  __int64 v10; 
  int v11; 
  int v12; 

  if ( (node[1].spatialNodeNext & (unsigned __int8)(1 << clientData->localClientNum)) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 226, ASSERT_TYPE_ASSERT, "(0 == (def->clientActiveMask & (1u << clientData->localClientNum)))", (const char *)&queryFormat, "0 == (def->clientActiveMask & (1u << clientData->localClientNum))") )
    __debugbreak();
  spatialNodeNext_high = HIBYTE(node[1].spatialNodeNext);
  if ( spatialNodeNext_high != 3 )
  {
    v12 = 3;
    v11 = spatialNodeNext_high;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 227, ASSERT_TYPE_ASSERT, "( def->priority ) == ( DYNENT_PRIORITY_SPARSE_OCCLUDER )", "%s == %s\n\t%u, %u", "def->priority", "DYNENT_PRIORITY_SPARSE_OCCLUDER", v11, v12) )
      __debugbreak();
  }
  if ( !DynEntCL_Spatial_CanActivate(clientData, node) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 228, ASSERT_TYPE_ASSERT, "(DynEntCL_Spatial_CanActivate( clientData, node ))", (const char *)&queryFormat, "DynEntCL_Spatial_CanActivate( clientData, node )") )
    __debugbreak();
  v7 = BYTE1(node[1].spatialNodeNext);
  if ( v7 >= 2u )
  {
    LODWORD(v10) = 2;
    LODWORD(associateScriptables) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, v10) )
      __debugbreak();
  }
  Id = DynEnt_GetId((const DynEntityDef *)&node[-11], (const DynEntityBasis)BYTE1(node[1].spatialNodeNext));
  LOBYTE(node[1].spatialNodeNext) |= 1 << LOBYTE(clientData->localClientNum);
  DynEntCL_AddEntity(clientData->localClientNum, Id, SBYTE1(node[1].spatialNodeNext), 1, 0, 1);
  DynEntCL_Spatial_SparseOccluderActivated(clientData, (const DynEntityDef *)&node[-11], sortedPartitionIndex);
}

/*
==============
DynEntCL_Spatial_Deactivate
==============
*/
void DynEntCL_Spatial_Deactivate(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  SpatialPartition_Population_Node *v2; 
  DynEntityBasis v4; 
  unsigned int Id; 
  __int64 v6; 
  int v7; 

  v2 = node - 11;
  if ( (node[1].spatialNodeNext & (unsigned __int8)(1 << clientData->localClientNum)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 239, ASSERT_TYPE_ASSERT, "(0 != ( def->clientActiveMask & ( 1u << clientData->localClientNum ) ))", (const char *)&queryFormat, "0 != ( def->clientActiveMask & ( 1u << clientData->localClientNum ) )") )
    __debugbreak();
  if ( HIBYTE(v2[12].spatialNodeNext) >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 240, ASSERT_TYPE_ASSERT, "(def->priority < DYNENT_RADIAL_PRIORITY_LEVEL_COUNT)", (const char *)&queryFormat, "def->priority < DYNENT_RADIAL_PRIORITY_LEVEL_COUNT") )
    __debugbreak();
  v4 = BYTE1(v2[12].spatialNodeNext);
  LOBYTE(v2[12].spatialNodeNext) &= ~(1 << clientData->localClientNum);
  if ( (unsigned __int8)v4 >= DYNENT_BASIS_COUNT )
  {
    v7 = 2;
    LODWORD(v6) = (unsigned __int8)v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  Id = DynEnt_GetId((const DynEntityDef *)v2, (const DynEntityBasis)BYTE1(v2[12].spatialNodeNext));
  DynEntCL_RemoveEntity(clientData->localClientNum, Id, v4, 0, 1);
}

/*
==============
DynEntCL_Spatial_Deactivate_SparseOccluder
==============
*/
void DynEntCL_Spatial_Deactivate_SparseOccluder(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  SpatialPartition_Population_Node *v2; 
  unsigned __int8 spatialNodeNext_high; 
  DynEntityBasis v5; 
  unsigned int Id; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  v2 = node - 11;
  if ( (node[1].spatialNodeNext & (unsigned __int8)(1 << clientData->localClientNum)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 249, ASSERT_TYPE_ASSERT, "(0 != (def->clientActiveMask & (1u << clientData->localClientNum)))", (const char *)&queryFormat, "0 != (def->clientActiveMask & (1u << clientData->localClientNum))") )
    __debugbreak();
  spatialNodeNext_high = HIBYTE(v2[12].spatialNodeNext);
  if ( spatialNodeNext_high != 3 )
  {
    v10 = 3;
    v9 = spatialNodeNext_high;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 250, ASSERT_TYPE_ASSERT, "( def->priority ) == ( DYNENT_PRIORITY_SPARSE_OCCLUDER )", "%s == %s\n\t%u, %u", "def->priority", "DYNENT_PRIORITY_SPARSE_OCCLUDER", v9, v10) )
      __debugbreak();
  }
  v5 = BYTE1(v2[12].spatialNodeNext);
  LOBYTE(v2[12].spatialNodeNext) &= ~(1 << clientData->localClientNum);
  if ( (unsigned __int8)v5 >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = (unsigned __int8)v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  Id = DynEnt_GetId((const DynEntityDef *)v2, (const DynEntityBasis)BYTE1(v2[12].spatialNodeNext));
  DynEntCL_RemoveEntity(clientData->localClientNum, Id, v5, 0, 1);
}

/*
==============
DynEntCL_Spatial_IsCollisionTileMissing
==============
*/
__int64 DynEntCL_Spatial_IsCollisionTileMissing(SpatialPartition_PopulationSort_ClientData *clientData, SpatialPartition_Population_Node *node)
{
  DynEntityClient *ClientFromClientId; 

  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 258, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 259, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  ClientFromClientId = DynEnt_GetClientFromClientId(clientData->localClientNum, *((_WORD *)&node[3].spatialNodeNext + (int)clientData->localClientNum), (DynEntityBasis)BYTE1(node[1].spatialNodeNext));
  if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 262, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  return ClientFromClientId->flags >> 15;
}

/*
==============
DynEntCL_Spatial_Iterator::Advance
==============
*/
char DynEntCL_Spatial_Iterator::Advance(DynEntCL_Spatial_Iterator *this)
{
  unsigned int m_filterBasis; 
  SpatialPartition_Population_Node *v3; 
  __int64 v4; 
  unsigned int m_curPopulationIndexLimit; 
  DynEntityListId v6; 
  unsigned __int8 v7; 
  DynEntityList *v8; 
  DynEntityListId v9; 
  unsigned __int8 v10; 
  DynEntityList *v11; 
  unsigned int v12; 
  unsigned __int8 v13; 
  unsigned int *p_m_curDynEntLocalId; 
  DynEntityListId *p_m_curDynEntListId; 
  unsigned int Id; 
  DynEntityListId m_curDynEntListId; 
  unsigned __int8 v18; 
  DynEntityList *DynEntityList; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int8 v22; 
  DynEntityListId v23; 
  DynEntityList *v24; 
  unsigned __int8 v26; 
  __int64 m_curDynEntLocalId; 
  DynEntityListId v28; 
  DynEntityList *v29; 
  __int64 v30; 
  __int64 v31; 
  DynEntityListId *v32; 
  unsigned __int8 v33; 
  DynEntityListId v34; 
  DynEntityList *v35; 
  unsigned int v36; 
  unsigned int m_curBasisIterLimit; 
  unsigned int v38; 
  bool v39; 
  DynEntityListId *dynEntListIds; 
  unsigned __int8 m_curBasis; 
  DynEntityListId v42; 
  DynEntityList *v43; 
  unsigned int v44; 
  __int64 v45; 
  __int64 v46; 

  if ( this->m_curPopulationIndex < this->m_curPopulationIndexLimit )
  {
    do
    {
      while ( SpatialPartition_PopulationSort_ActiveNodeIterator::Advance(&this->m_iter) )
      {
        m_filterBasis = this->m_filterBasis;
        v3 = this->m_iter.m_curNode - 11;
        if ( m_filterBasis == 2 || BYTE1(v3[12].spatialNodeNext) == m_filterBasis )
        {
          if ( this->m_iter.m_curNode == (SpatialPartition_Population_Node *)44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1027, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          v13 = BYTE1(v3[12].spatialNodeNext);
          if ( v13 >= 2u )
          {
            LODWORD(v45) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, 2) )
              __debugbreak();
          }
          p_m_curDynEntLocalId = &this->m_curDynEntLocalId;
          p_m_curDynEntListId = &this->m_curDynEntListId;
          Id = DynEnt_GetId((const DynEntityDef *)v3, (const DynEntityBasis)BYTE1(v3[12].spatialNodeNext));
          DynEnt_ListAndLocalIdFromId(Id, &this->m_curDynEntListId, &this->m_curDynEntLocalId);
          m_curDynEntListId = this->m_curDynEntListId;
          this->m_curBasis = BYTE1(v3[12].spatialNodeNext);
          v18 = BYTE1(v3[12].spatialNodeNext);
          if ( (unsigned __int16)m_curDynEntListId >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(v46) = 1536;
            LODWORD(v45) = (unsigned __int16)m_curDynEntListId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          if ( v18 >= 2u )
          {
            LODWORD(v46) = 2;
            LODWORD(v45) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          DynEntityList = DynEnt_GetDynEntityList(m_curDynEntListId);
          v20 = 0;
          if ( DynEntityList )
            v21 = DynEntityList->dynEntCount[v18];
          else
            v21 = 0;
          if ( *p_m_curDynEntLocalId >= v21 )
          {
            v22 = BYTE1(v3[12].spatialNodeNext);
            v23 = *p_m_curDynEntListId;
            if ( *p_m_curDynEntListId >= DEFAULT_DYNENTITY_LIST_ID )
            {
              LODWORD(v46) = 1536;
              LODWORD(v45) = (unsigned __int16)v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v45, v46) )
                __debugbreak();
            }
            if ( v22 >= 2u )
            {
              LODWORD(v46) = 2;
              LODWORD(v45) = v22;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, v46) )
                __debugbreak();
            }
            v24 = DynEnt_GetDynEntityList(v23);
            if ( v24 )
              v20 = v24->dynEntCount[v22];
            LODWORD(v46) = v20;
            LODWORD(v45) = *p_m_curDynEntLocalId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1031, ASSERT_TYPE_ASSERT, "(unsigned)( m_curDynEntLocalId ) < (unsigned)( DynEnt_GetEntityCount( m_curDynEntListId, def->basis ) )", "m_curDynEntLocalId doesn't index DynEnt_GetEntityCount( m_curDynEntListId, def->basis )\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          return 1;
        }
      }
      v4 = ++this->m_curPopulationIndex;
      m_curPopulationIndexLimit = this->m_curPopulationIndexLimit;
      if ( (unsigned int)v4 < m_curPopulationIndexLimit )
      {
        SpatialPartition_PopulationSort_ActiveNodeIterator::Init(&this->m_iter, g_dynEntSpatialSortClientData[this->m_localClientNum][v4], &s_dynEntSpatialCallbacks[(unsigned __int64)(unsigned int)v4], NULL);
        m_curPopulationIndexLimit = this->m_curPopulationIndexLimit;
      }
    }
    while ( this->m_curPopulationIndex < m_curPopulationIndexLimit );
  }
  if ( this->m_curBasis >= this->m_curBasisIterLimit )
    return 0;
  while ( this->m_curDynEntExpectedListId >= this->m_curDynEntExpectedListIterLimit )
  {
LABEL_92:
    m_curBasisIterLimit = this->m_curBasisIterLimit;
    v38 = this->m_curBasis + 1;
    this->m_curBasis = v38;
    if ( v38 >= m_curBasisIterLimit )
      return 0;
    v39 = this->m_curDynEntExpectedListIterLimit == 0;
    this->m_curDynEntExpectedListId = 0;
    if ( v39 )
      goto LABEL_109;
    if ( !cm.mapEnts )
    {
      dynEntListIds = NULL;
LABEL_97:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1080, ASSERT_TYPE_ASSERT, "(expectedListIds)", (const char *)&queryFormat, "expectedListIds") )
        __debugbreak();
      goto LABEL_99;
    }
    dynEntListIds = cm.mapEnts->dynEntListIds;
    if ( !dynEntListIds )
      goto LABEL_97;
LABEL_99:
    m_curBasis = this->m_curBasis;
    v42 = dynEntListIds[this->m_curDynEntExpectedListId];
    this->m_curDynEntListId = v42;
    this->m_curDynEntLocalId = -1;
    if ( (unsigned __int16)v42 >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v46) = 1536;
      LODWORD(v45) = (unsigned __int16)v42;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    if ( m_curBasis >= 2u )
    {
      LODWORD(v46) = 2;
      LODWORD(v45) = m_curBasis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    v43 = DynEnt_GetDynEntityList(v42);
    if ( v43 )
      v44 = v43->dynEntCount[m_curBasis];
    else
      v44 = 0;
    this->m_curDynEntLocalIterLimit = v44;
    m_curBasisIterLimit = this->m_curBasisIterLimit;
    v38 = this->m_curBasis;
LABEL_109:
    if ( v38 >= m_curBasisIterLimit )
      return 0;
  }
  while ( 2 )
  {
    if ( ++this->m_curDynEntLocalId > this->m_curDynEntLocalIterLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1048, ASSERT_TYPE_ASSERT, "(m_curDynEntLocalId <= m_curDynEntLocalIterLimit)", (const char *)&queryFormat, "m_curDynEntLocalId <= m_curDynEntLocalIterLimit") )
      __debugbreak();
    if ( this->m_curDynEntLocalId >= this->m_curDynEntLocalIterLimit )
    {
LABEL_75:
      if ( ++this->m_curDynEntExpectedListId >= this->m_curDynEntExpectedListIterLimit )
        goto LABEL_91;
      if ( cm.mapEnts )
      {
        v32 = cm.mapEnts->dynEntListIds;
        if ( v32 )
        {
LABEL_81:
          v33 = this->m_curBasis;
          v34 = v32[this->m_curDynEntExpectedListId];
          this->m_curDynEntListId = v34;
          this->m_curDynEntLocalId = -1;
          if ( (unsigned __int16)v34 >= DEFAULT_DYNENTITY_LIST_ID )
          {
            LODWORD(v46) = 1536;
            LODWORD(v45) = (unsigned __int16)v34;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          if ( v33 >= 2u )
          {
            LODWORD(v46) = 2;
            LODWORD(v45) = v33;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          v35 = DynEnt_GetDynEntityList(v34);
          if ( v35 )
            v36 = v35->dynEntCount[v33];
          else
            v36 = 0;
          this->m_curDynEntLocalIterLimit = v36;
LABEL_91:
          if ( this->m_curDynEntExpectedListId >= this->m_curDynEntExpectedListIterLimit )
            goto LABEL_92;
          continue;
        }
      }
      else
      {
        v32 = NULL;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1066, ASSERT_TYPE_ASSERT, "(expectedListIds)", (const char *)&queryFormat, "expectedListIds") )
        __debugbreak();
      goto LABEL_81;
    }
    break;
  }
  while ( 1 )
  {
    v6 = this->m_curDynEntListId;
    v7 = this->m_curBasis;
    if ( (unsigned __int16)v6 >= DEFAULT_DYNENTITY_LIST_ID )
    {
      LODWORD(v46) = 1536;
      LODWORD(v45) = (unsigned __int16)v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    if ( v7 >= 2u )
    {
      LODWORD(v46) = 2;
      LODWORD(v45) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    v8 = DynEnt_GetDynEntityList(v6);
    if ( !v8 || this->m_curDynEntLocalId >= v8->dynEntCount[v7] )
    {
      v9 = this->m_curDynEntListId;
      v10 = this->m_curBasis;
      if ( (unsigned __int16)v9 >= DEFAULT_DYNENTITY_LIST_ID )
      {
        LODWORD(v46) = 1536;
        LODWORD(v45) = (unsigned __int16)v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      if ( v10 >= 2u )
      {
        LODWORD(v46) = 2;
        LODWORD(v45) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      v11 = DynEnt_GetDynEntityList(v9);
      if ( v11 )
        v12 = v11->dynEntCount[v10];
      else
        v12 = 0;
      LODWORD(v46) = v12;
      LODWORD(v45) = this->m_curDynEntLocalId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1051, ASSERT_TYPE_ASSERT, "(unsigned)( m_curDynEntLocalId ) < (unsigned)( DynEnt_GetEntityCount( m_curDynEntListId, static_cast<DynEntityBasis>(m_curBasis) ) )", "m_curDynEntLocalId doesn't index DynEnt_GetEntityCount( m_curDynEntListId, static_cast<DynEntityBasis>(m_curBasis) )\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    v26 = this->m_curBasis;
    m_curDynEntLocalId = this->m_curDynEntLocalId;
    v28 = this->m_curDynEntListId;
    if ( v26 >= 2u )
    {
      LODWORD(v46) = 2;
      LODWORD(v45) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    v29 = DynEnt_GetDynEntityList(v28);
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
      __debugbreak();
    v30 = v26 + 3i64;
    if ( (unsigned int)m_curDynEntLocalId >= *((_DWORD *)&v29->name + v30) )
    {
      LODWORD(v46) = *((_DWORD *)&v29->name + v30);
      LODWORD(v45) = m_curDynEntLocalId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v45, v46) )
        __debugbreak();
    }
    v31 = *((_QWORD *)&v29->name + v30) + 80 * m_curDynEntLocalId;
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1053, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( *(_WORD *)(v31 + 2i64 * (int)this->m_localClientNum + 56) != 0xFFFF )
      return 1;
    if ( ++this->m_curDynEntLocalId >= this->m_curDynEntLocalIterLimit )
      goto LABEL_75;
  }
}

/*
==============
DynEntCL_Spatial_AddNoSpatial
==============
*/
void DynEntCL_Spatial_AddNoSpatial(LocalClientNum_t localClientNum, DynEntityListId dynEntListId)
{
  __int64 v2; 
  DynEntityList *DynEntityList; 
  SpatialPartition_TransientPopulation *v5; 
  __int64 p_dynEntNoSpatialList; 
  DynEntityBasis v7; 
  unsigned int Id; 
  __int64 associateScriptables; 
  __int64 v10; 

  v2 = localClientNum;
  DynEntityList = DynEnt_GetDynEntityList(dynEntListId);
  v5 = DynEntityList->dynEntSpatialPopulation[0];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 583, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( DynEntityList->index != dynEntListId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 584, ASSERT_TYPE_ASSERT, "(dynEntityList && dynEntityList->index == dynEntListId)", (const char *)&queryFormat, "dynEntityList && dynEntityList->index == dynEntListId") )
    __debugbreak();
  p_dynEntNoSpatialList = (__int64)&DynEntityList->dynEntNoSpatialList;
  while ( p_dynEntNoSpatialList )
  {
    if ( *(_DWORD *)p_dynEntNoSpatialList == -1 )
      break;
    p_dynEntNoSpatialList = ((__int64 (__fastcall *)(SpatialPartition_TransientPopulation *))v5->getNodeFromIndex)(v5);
    if ( !p_dynEntNoSpatialList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 597, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    if ( *(_WORD *)(p_dynEntNoSpatialList + 2 * v2 + 12) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 599, ASSERT_TYPE_ASSERT, "(def->clientId[localClientNum] == 0xFFFF)", (const char *)&queryFormat, "def->clientId[localClientNum] == DYNENT_INVALID_CLIENT_ID") )
      __debugbreak();
    v7 = *(_BYTE *)(p_dynEntNoSpatialList + 5);
    if ( (unsigned __int8)v7 >= DYNENT_BASIS_COUNT )
    {
      LODWORD(v10) = 2;
      LODWORD(associateScriptables) = (unsigned __int8)v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, v10) )
        __debugbreak();
    }
    Id = DynEnt_GetId((const DynEntityDef *)(p_dynEntNoSpatialList - 44), (const DynEntityBasis)*(_BYTE *)(p_dynEntNoSpatialList + 5));
    DynEntCL_AddEntity((LocalClientNum_t)v2, Id, v7, 0, 0, 1);
  }
}

/*
==============
DynEntCL_Spatial_AllocateBitarray
==============
*/
void DynEntCL_Spatial_AllocateBitarray(HunkUser *hunkUser, bitarray_dynamic *bitarray, unsigned int bitCount)
{
  void *v6; 
  unsigned int v7; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 49, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  v6 = NULL;
  v7 = (bitCount + 31) >> 5;
  if ( v7 )
  {
    if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
      __debugbreak();
    v6 = Mem_HunkUser_AllocInternal(hunkUser, 4i64 * v7, 4ui64, "DynEnt_AllocBuf");
    memset_0(v6, 0, 4i64 * v7);
  }
  bitarray->array = (unsigned int *)v6;
  bitarray->wordCount = v7;
  bitarray->bitCount = bitCount;
}

/*
==============
DynEntCL_Spatial_AllocateClientMemory
==============
*/
void DynEntCL_Spatial_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  void *v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  unsigned __int8 v7; 
  SpatialPartition_Population *v8; 
  SpatialPartition_Population_TransientMap *v9; 
  unsigned int partitionCount; 
  bitarray_dynamic *v11; 
  unsigned int v12; 
  unsigned int v13; 
  bitarray_dynamic *v14; 
  __int64 v15; 
  unsigned int transientCount; 
  __int64 v17; 
  SpatialPartition_PopulationSort_DependentClientData *v18; 
  SpatialPartition_PopulationSort_DependentClientData **v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  SpatialPartition_PopulationSort_DependentClientData **v23; 
  unsigned int v24; 
  DynEntityListId dynEntityListsCount; 
  unsigned int v26; 

  v24 = maxLocalClients;
  if ( maxLocalClients > 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 62, ASSERT_TYPE_ASSERT, "( maxLocalClients ) <= ( 2 )", "%s <= %s\n\t%u, %u", "maxLocalClients", "STATIC_MAX_LOCAL_CLIENTS", maxLocalClients, 2) )
      __debugbreak();
    maxLocalClients = v24;
  }
  v3 = NULL;
  if ( cm.mapEnts )
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
  else
    dynEntityListsCount = 0;
  v26 = 0;
  v4 = 0;
  if ( maxLocalClients )
  {
    v5 = 1;
    v23 = g_dynEntSpatialSortOccluderCollisionClientData;
    v6 = s_dynEntsSpatialAllocated;
    v21 = 1;
    v22 = 0i64;
    while ( 1 )
    {
      if ( (v5 & v6) != 0 )
      {
        LODWORD(v20) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 66, ASSERT_TYPE_ASSERT, "(!(s_dynEntsSpatialAllocated & (1 << localClientNum)))", "%s\n\tTrying to allocate DynEnt_Linking spatial memory for already allocated local client number %u.\n", "!(s_dynEntsSpatialAllocated & (1 << localClientNum))", v20) )
          __debugbreak();
      }
      v7 = 0;
      while ( 1 )
      {
        if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.h", 44, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
          __debugbreak();
        v8 = cm.mapEnts->dynEntSpatialPopulation[v7];
        if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.h", LODWORD(cm.mapEnts) + 52, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
          __debugbreak();
        v9 = cm.mapEnts->dynEntSpatialTransientMap[v7];
        if ( v8 )
          partitionCount = v8->partitionCount;
        else
          partitionCount = 0;
        if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
          __debugbreak();
        v11 = (bitarray_dynamic *)Mem_HunkUser_AllocInternal(hunkUser, 0x100ui64, 8ui64, "DynEnt_AllocBuf");
        memset_0(v11, 0, 0x100ui64);
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 74, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
          __debugbreak();
        v11->wordCount = partitionCount;
        if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
          __debugbreak();
        if ( partitionCount )
        {
          v3 = Mem_HunkUser_AllocInternal(hunkUser, 8i64 * partitionCount, 4ui64, "DynEnt_AllocBuf");
          memset_0(v3, 0, 8i64 * partitionCount);
        }
        *(_QWORD *)&v11[6].wordCount = v3;
        DynEntCL_Spatial_AllocateBitarray(hunkUser, v11 + 7, partitionCount);
        DynEntCL_Spatial_AllocateBitarray(hunkUser, v11 + 8, partitionCount);
        v12 = 0;
        if ( v9 )
          v12 = partitionCount;
        DynEntCL_Spatial_AllocateBitarray(hunkUser, v11 + 9, v12);
        DynEntCL_Spatial_AllocateBitarray(hunkUser, v11 + 10, v12);
        v13 = 0;
        if ( (unsigned __int16)dynEntityListsCount > 1u )
          v13 = partitionCount;
        DynEntCL_Spatial_AllocateBitarray(hunkUser, v11 + 11, v13);
        DynEntCL_Spatial_AllocateBitarray(hunkUser, v11 + 12, v13);
        DynEntCL_Spatial_AllocateBitarray(hunkUser, v11 + 13, partitionCount);
        v14 = v11 + 14;
        v15 = 2i64;
        do
        {
          if ( v9 )
            transientCount = v9->transientCount;
          else
            transientCount = 0;
          DynEntCL_Spatial_AllocateBitarray(hunkUser, v14++, transientCount);
          --v15;
        }
        while ( v15 );
        v17 = v22;
        *((_QWORD *)&g_dynEntSpatialSortClientData[0][v22] + v7) = v11;
        if ( v7 == 1 )
        {
          if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_utility.h", 28, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
            __debugbreak();
          v18 = (SpatialPartition_PopulationSort_DependentClientData *)Mem_HunkUser_AllocInternal(hunkUser, 0x20ui64, 8ui64, "DynEnt_AllocBuf");
          v18->anyActivePartitionBitfield.array = NULL;
          *(_QWORD *)&v18->anyActivePartitionBitfield.wordCount = 0i64;
          v18->anyAvailablePartitionBitfield.array = NULL;
          *(_QWORD *)&v18->anyAvailablePartitionBitfield.wordCount = 0i64;
          DynEntCL_Spatial_AllocateBitarray(hunkUser, &v18->anyActivePartitionBitfield, partitionCount);
          DynEntCL_Spatial_AllocateBitarray(hunkUser, &v18->anyAvailablePartitionBitfield, partitionCount);
          v19 = v23;
          v17 = v22;
          *v23 = v18;
        }
        else
        {
          v19 = v23;
        }
        if ( ++v7 >= 2u )
          break;
        v3 = NULL;
      }
      v6 = s_dynEntsSpatialAllocated | (1 << v26);
      v5 = __ROL4__(v21, 1);
      v22 = v17 + 2;
      v4 = v26 + 1;
      v23 = v19 + 1;
      s_dynEntsSpatialAllocated = v6;
      v26 = v4;
      v21 = v5;
      if ( v4 >= v24 )
        break;
      v3 = NULL;
    }
    s_dynEntsSpatialClientDataInitialized = 0;
  }
  else
  {
    s_dynEntsSpatialClientDataInitialized = 0;
  }
}

/*
==============
DynEntCL_Spatial_CollisionUpdateNeeded
==============
*/
__int64 DynEntCL_Spatial_CollisionUpdateNeeded(SpatialPartition_PopulationSort_ClientData *clientData)
{
  SpatialPartition_PopulationSort_DependentClientData *v2; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  unsigned int sortedPartitionCount; 
  const dvar_t *v5; 
  float v6; 
  __int64 v7; 
  unsigned __int64 partitionIndex; 
  unsigned int *array; 
  unsigned __int8 v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEntCL_Spatial_CollisionUpdateNeeded");
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 611, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( !clientData->population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 612, ASSERT_TYPE_ASSERT, "(clientData->population)", (const char *)&queryFormat, "clientData->population") )
    __debugbreak();
  if ( clientData->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(v12) = clientData->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( clientData->localClientNum ) < (unsigned)( 2 )", "clientData->localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, 2) )
      __debugbreak();
  }
  v2 = g_dynEntSpatialSortOccluderCollisionClientData[clientData->localClientNum];
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 615, ASSERT_TYPE_ASSERT, "(collisionData)", (const char *)&queryFormat, "collisionData") )
    __debugbreak();
  if ( clientData->population->partitionCount > v2->anyActivePartitionBitfield.bitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 616, ASSERT_TYPE_ASSERT, "( clientData->population->partitionCount ) <= ( collisionData->anyActivePartitionBitfield.bitCount )", "%s <= %s\n\t%u, %u", "clientData->population->partitionCount", "collisionData->anyActivePartitionBitfield.bitCount", clientData->population->partitionCount, v2->anyActivePartitionBitfield.bitCount) )
    __debugbreak();
  if ( clientData->population->partitionCount > v2->anyAvailablePartitionBitfield.bitCount )
  {
    LODWORD(v15) = v2->anyAvailablePartitionBitfield.bitCount;
    LODWORD(v14) = clientData->population->partitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 617, ASSERT_TYPE_ASSERT, "( clientData->population->partitionCount ) <= ( collisionData->anyAvailablePartitionBitfield.bitCount )", "%s <= %s\n\t%u, %u", "clientData->population->partitionCount", "collisionData->anyAvailablePartitionBitfield.bitCount", v14, v15) )
      __debugbreak();
  }
  sortedPartitions = clientData->sortedPartitions;
  sortedPartitionCount = clientData->sortedPartitionCount;
  v5 = DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance;
  if ( !DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialSparseOccluderCollisionActivationDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.value * v5->current.value;
  v7 = 0i64;
  if ( sortedPartitionCount )
  {
    while ( 1 )
    {
      partitionIndex = sortedPartitions[v7].partitionIndex;
      if ( v6 <= sortedPartitions[v7].distanceSq )
      {
        if ( (unsigned int)partitionIndex >= v2->anyActivePartitionBitfield.bitCount )
        {
          LODWORD(v13) = v2->anyActivePartitionBitfield.bitCount;
          LODWORD(v12) = sortedPartitions[v7].partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
            __debugbreak();
        }
        array = v2->anyActivePartitionBitfield.array;
      }
      else
      {
        if ( (unsigned int)partitionIndex >= v2->anyAvailablePartitionBitfield.bitCount )
        {
          LODWORD(v13) = v2->anyAvailablePartitionBitfield.bitCount;
          LODWORD(v12) = sortedPartitions[v7].partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
            __debugbreak();
        }
        array = v2->anyAvailablePartitionBitfield.array;
      }
      if ( ((0x80000000 >> (partitionIndex & 0x1F)) & array[partitionIndex >> 5]) != 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= sortedPartitionCount )
        goto LABEL_34;
    }
    v10 = 1;
  }
  else
  {
LABEL_34:
    v10 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v10;
}

/*
==============
DynEntCL_Spatial_DebugDrawOverlay
==============
*/
void DynEntCL_Spatial_DebugDrawOverlay(DynEntitySpatialPopulationType populationIndex, float zoomWorldSize)
{
  int v3; 
  __int64 i; 
  SpatialPartition_Population_Node *p_dynEntNoSpatialList; 
  const vec3_t *LastCameraPos; 
  int v7; 
  int v8; 

  if ( (unsigned __int8)populationIndex >= DYNENT_SPATIAL_POPULATION_TYPE_COUNT )
  {
    v8 = 2;
    v7 = (unsigned __int8)populationIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 939, ASSERT_TYPE_ASSERT, "(unsigned)( populationIndex ) < (unsigned)( DYNENT_SPATIAL_POPULATION_TYPE_COUNT )", "populationIndex doesn't index DYNENT_SPATIAL_POPULATION_TYPE_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( cm.mapEnts == (MapEnts *)-456i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 940, ASSERT_TYPE_ASSERT, "(cm.mapEnts->dynEntSpatialPopulation)", (const char *)&queryFormat, "cm.mapEnts->dynEntSpatialPopulation") )
    __debugbreak();
  v3 = 0;
  for ( i = 0i64; ; ++i )
  {
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( v3 >= cls.m_localClientsActive.activeCount )
      break;
    p_dynEntNoSpatialList = &cm.mapEnts->dynEntNoSpatialList;
    LastCameraPos = DynEntCL_GetLastCameraPos((LocalClientNum_t)v3);
    SpatialPartition_PopulationSort_DebugDrawOverlay(g_dynEntSpatialSortClientData[i][(unsigned __int8)populationIndex], &s_dynEntSpatialCallbacks[(unsigned __int64)(unsigned __int8)populationIndex], LastCameraPos, zoomWorldSize, p_dynEntNoSpatialList);
    ++v3;
  }
}

/*
==============
DynEntCL_Spatial_DebugDrawWorld
==============
*/
void DynEntCL_Spatial_DebugDrawWorld(DynEntitySpatialPopulationType populationIndex)
{
  int v2; 
  __int64 i; 
  const vec3_t *LastCameraPos; 
  int v5; 
  int v6; 

  if ( (unsigned __int8)populationIndex >= DYNENT_SPATIAL_POPULATION_TYPE_COUNT )
  {
    v6 = 2;
    v5 = (unsigned __int8)populationIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 929, ASSERT_TYPE_ASSERT, "(unsigned)( populationIndex ) < (unsigned)( DYNENT_SPATIAL_POPULATION_TYPE_COUNT )", "populationIndex doesn't index DYNENT_SPATIAL_POPULATION_TYPE_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = 0;
  for ( i = 0i64; ; ++i )
  {
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( v2 >= cls.m_localClientsActive.activeCount )
      break;
    LastCameraPos = DynEntCL_GetLastCameraPos((LocalClientNum_t)v2);
    SpatialPartition_PopulationSort_DebugDrawWorld(g_dynEntSpatialSortClientData[i][(unsigned __int8)populationIndex], &s_dynEntSpatialCallbacks[(unsigned __int64)(unsigned __int8)populationIndex], LastCameraPos);
    ++v2;
  }
}

/*
==============
DynEntCL_Spatial_DeferredAddNoSpatial
==============
*/
void DynEntCL_Spatial_DeferredAddNoSpatial(LocalClientNum_t localClientNum, const bitarray<1536> *dynEntListAdded)
{
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  DynEntityList *DynEntityList; 
  SpatialPartition_TransientPopulation *v9; 
  SpatialPartition_Population_Node *p_dynEntNoSpatialList; 
  __int64 spatialNodeNext; 
  DynEntityBasis v12; 
  unsigned int Id; 
  __int64 associateScriptables; 
  __int64 v15; 

  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEntCL_Spatial_DeferredAddNoSpatial");
  LODWORD(v4) = 0;
  v5 = dynEntListAdded->array[0];
  while ( v5 )
  {
LABEL_5:
    v6 = __lzcnt(v5);
    v7 = v6 + 32 * v4;
    if ( v6 >= 0x20 )
    {
      LODWORD(v15) = 32;
      LODWORD(associateScriptables) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", associateScriptables, v15) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v5 &= ~(0x80000000 >> v6);
    if ( v7 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum DynEntityListId __cdecl truncate_cast_impl<enum DynEntityListId,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v6 + 32 * v4), "unsigned", v7) )
      __debugbreak();
    DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)(v6 + 32 * v4));
    v9 = DynEntityList->dynEntSpatialPopulation[0];
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 583, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
      __debugbreak();
    if ( DynEntityList->index != (_WORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 584, ASSERT_TYPE_ASSERT, "(dynEntityList && dynEntityList->index == dynEntListId)", (const char *)&queryFormat, "dynEntityList && dynEntityList->index == dynEntListId") )
      __debugbreak();
    p_dynEntNoSpatialList = &DynEntityList->dynEntNoSpatialList;
    while ( p_dynEntNoSpatialList )
    {
      spatialNodeNext = p_dynEntNoSpatialList->spatialNodeNext;
      if ( (_DWORD)spatialNodeNext == -1 )
        break;
      p_dynEntNoSpatialList = (SpatialPartition_Population_Node *)((__int64 (__fastcall *)(SpatialPartition_TransientPopulation *, __int64, const char *))v9->getNodeFromIndex)(v9, spatialNodeNext, "iter->bits & bit");
      if ( !p_dynEntNoSpatialList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 597, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      if ( *((_WORD *)&p_dynEntNoSpatialList[3].spatialNodeNext + v3) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 599, ASSERT_TYPE_ASSERT, "(def->clientId[localClientNum] == 0xFFFF)", (const char *)&queryFormat, "def->clientId[localClientNum] == DYNENT_INVALID_CLIENT_ID") )
        __debugbreak();
      v12 = BYTE1(p_dynEntNoSpatialList[1].spatialNodeNext);
      if ( (unsigned __int8)v12 >= DYNENT_BASIS_COUNT )
      {
        LODWORD(v15) = 2;
        LODWORD(associateScriptables) = (unsigned __int8)v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 228, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", associateScriptables, v15) )
          __debugbreak();
      }
      Id = DynEnt_GetId((const DynEntityDef *)&p_dynEntNoSpatialList[-11], (const DynEntityBasis)BYTE1(p_dynEntNoSpatialList[1].spatialNodeNext));
      DynEntCL_AddEntity((LocalClientNum_t)v3, Id, v12, 0, 0, 1);
    }
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x30 )
      break;
    v5 = dynEntListAdded->array[v4];
    if ( v5 )
      goto LABEL_5;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEntCL_Spatial_DeferredRemove
==============
*/
void DynEntCL_Spatial_DeferredRemove(LocalClientNum_t localClientNum, const bitarray<1536> *dynEntListRemoved)
{
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEntCL_Spatial_DeferredRemove");
  LODWORD(v4) = 0;
  v5 = dynEntListRemoved->array[0];
  while ( v5 )
  {
LABEL_5:
    v6 = __lzcnt(v5);
    v7 = v6 + 32 * v4;
    if ( v6 >= 0x20 )
    {
      LODWORD(v9) = 32;
      LODWORD(v8) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (v5 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v5 &= ~(0x80000000 >> v6);
    if ( v7 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum DynEntityListId __cdecl truncate_cast_impl<enum DynEntityListId,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v6 + 32 * v4), "unsigned", v7) )
      __debugbreak();
    DynEntCL_Spatial_RemoveDynEntityList(localClientNum, (DynEntityListId)(v6 + 32 * v4));
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x30 )
      break;
    v5 = dynEntListRemoved->array[v4];
    if ( v5 )
      goto LABEL_5;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEntCL_Spatial_DynEntityListAboutToRemove
==============
*/
void DynEntCL_Spatial_DynEntityListAboutToRemove(DynEntityListId listId)
{
  DynEntityList *DynEntityList; 

  if ( s_dynEntsSpatialClientDataInitialized )
  {
    DynEntityList = DynEnt_GetDynEntityList(listId);
    if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 446, ASSERT_TYPE_ASSERT, "(dynEntityList)", (const char *)&queryFormat, "dynEntityList") )
      __debugbreak();
    if ( DynEntityList->dynEntCountTotal )
    {
      if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 452, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_DYNENT_SPATIAL ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_DYNENT_SPATIAL )") )
        __debugbreak();
      DynEnt_Spatial_RemoveDynEntityList(cm.mapEnts, DynEntityList);
    }
  }
}

/*
==============
DynEntCL_Spatial_DynEntityListAboutToSwap
==============
*/
void DynEntCL_Spatial_DynEntityListAboutToSwap(DynEntityListId listId)
{
  if ( s_dynEntsSpatialClientDataInitialized )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143D65A40);
}

/*
==============
DynEntCL_Spatial_DynEntityListAdded
==============
*/
void DynEntCL_Spatial_DynEntityListAdded(DynEntityListId listId)
{
  SpatialPartition_TransientPopulation **dynEntSpatialPopulation; 
  __int64 v2; 
  __int64 v3; 
  SpatialPartition_PopulationSort_ClientData *(*v4)[2]; 
  __int64 v5; 
  int v6; 
  DynEntityDef **v7; 
  int v8; 
  bool v9; 
  unsigned __int8 v10; 
  const SpatialPartition_PopulationSort_Callbacks *v11; 
  SpatialPartition_PopulationSort_ClientData **v12; 
  char *v13; 
  const SpatialPartition_TransientPopulation *v14; 
  __int64 v15; 
  __int64 v16; 
  DynEntityList *dynEntList; 
  int v18; 
  SpatialPartition_PopulationSort_ClientData *(*v19)[2]; 

  dynEntList = DynEnt_GetDynEntityList(listId);
  if ( !dynEntList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 400, ASSERT_TYPE_ASSERT, "(dynEntityList)", (const char *)&queryFormat, "dynEntityList") )
    __debugbreak();
  if ( dynEntList->dynEntCountTotal )
  {
    dynEntSpatialPopulation = dynEntList->dynEntSpatialPopulation;
    v2 = 2i64;
    do
    {
      if ( !*dynEntSpatialPopulation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 408, ASSERT_TYPE_ASSERT, "(dynEntityList->dynEntSpatialPopulation[populationIndex])", (const char *)&queryFormat, "dynEntityList->dynEntSpatialPopulation[populationIndex]") )
        __debugbreak();
      (*dynEntSpatialPopulation)->userData = dynEntList;
      (*dynEntSpatialPopulation)->getIndexFromNode = DynEnt_Spatial_TransientPopulation_GetIndexFromNode;
      v3 = (__int64)*dynEntSpatialPopulation++;
      *(_QWORD *)(v3 + 24) = DynEnt_Spatial_TransientPopulation_GetNodeFromIndex;
      --v2;
    }
    while ( v2 );
    if ( s_dynEntsSpatialClientDataInitialized )
    {
      if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 418, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_DYNENT_SPATIAL ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_ADD_DYNENT_SPATIAL )") )
        __debugbreak();
      v4 = g_dynEntSpatialSortClientData;
      v5 = 456i64 - (_QWORD)g_dynEntSpatialSortClientData;
      v19 = g_dynEntSpatialSortClientData;
      v6 = 0;
      v7 = &dynEntList[-7].dynEntDefList[1];
      v8 = 1;
      v9 = 1;
      v18 = 1;
      do
      {
        if ( !v9 )
        {
          LODWORD(v16) = 2;
          LODWORD(v15) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 365, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
          v7 = &dynEntList[-7].dynEntDefList[1];
          v4 = v19;
        }
        if ( (v8 & s_dynEntsSpatialClientDataInitialized) != 0 )
        {
          v10 = 0;
          v11 = s_dynEntSpatialCallbacks;
          v12 = (SpatialPartition_PopulationSort_ClientData **)v4;
          v13 = (char *)v7 + v5;
          do
          {
            if ( !*(SpatialPartition_PopulationSort_ClientData **)((char *)v12 + v5 + (unsigned __int64)cm.mapEnts) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 427, ASSERT_TYPE_ASSERT, "(cm.mapEnts->dynEntSpatialPopulation[populationIndex])", (const char *)&queryFormat, "cm.mapEnts->dynEntSpatialPopulation[populationIndex]") )
              __debugbreak();
            v14 = *(const SpatialPartition_TransientPopulation **)((char *)v12 + (_QWORD)v13);
            if ( (unsigned int)v6 >= 2 )
            {
              LODWORD(v16) = 2;
              LODWORD(v15) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            SpatialPartition_PopulationSort_PreTransientPopulationAdded(*v12, v11, v14);
            ++v10;
            ++v12;
            ++v11;
          }
          while ( v10 < 2u );
          v8 = v18;
          v4 = v19;
        }
        v7 = &dynEntList[-7].dynEntDefList[1];
        v8 = __ROL4__(v8, 1);
        ++v4;
        v18 = v8;
        ++v6;
        v19 = v4;
        v5 -= 16i64;
        v9 = (unsigned int)v6 < 2;
      }
      while ( v6 < 2 );
      DynEnt_Spatial_AddDynEntityList(cm.mapEnts, dynEntList);
    }
  }
}

/*
==============
DynEntCL_Spatial_FindPartitionForDynEnt
==============
*/
__int64 DynEntCL_Spatial_FindPartitionForDynEnt(const DynEntityDef *def)
{
  DynEntitySpatialActivationMode priority; 
  __int64 v4; 
  MapEnts *mapEnts; 
  unsigned int v6; 
  SpatialPartition_Population_NodeIterator v8; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 479, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  priority = def->priority;
  if ( (unsigned __int8)priority <= DYNENT_RADIAL_PRIORITY_LEVEL_HIGH )
  {
    v4 = 456i64;
  }
  else if ( priority == DYNENT_PRIORITY_SPARSE_OCCLUDER )
  {
    v4 = 464i64;
  }
  else
  {
    v4 = 480i64;
  }
  mapEnts = cm.mapEnts;
  v6 = 0;
  if ( !(*(_DWORD **)((char *)&cm.mapEnts->name + v4))[10] )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v8.m_population = _XMM0;
    v8.m_curIndex = -1;
    SpatialPartition_Population_NodeIterator::Init(&v8, *(const SpatialPartition_Population **)((char *)&mapEnts->name + v4), v6);
    if ( SpatialPartition_Population_NodeIterator::Advance(&v8) )
      break;
LABEL_16:
    mapEnts = cm.mapEnts;
    if ( ++v6 >= (*(_DWORD **)((char *)&cm.mapEnts->name + v4))[10] )
      return 0xFFFFFFFFi64;
  }
  while ( 1 )
  {
    if ( !v8.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
      __debugbreak();
    if ( def == (const DynEntityDef *)&v8.m_curNode[-11] )
      return v6;
    if ( !SpatialPartition_Population_NodeIterator::Advance(&v8) )
      goto LABEL_16;
  }
}

/*
==============
DynEntCL_Spatial_FreeClientMemory
==============
*/
void DynEntCL_Spatial_FreeClientMemory(void)
{
  s_dynEntsSpatialAllocated = 0;
  g_dynEntSpatialSortClientData[0][0] = NULL;
  qword_1490AC4B8 = 0i64;
  qword_1490AC4C0 = 0i64;
  qword_1490AC4C8 = 0i64;
  g_dynEntSpatialSortOccluderCollisionClientData[0] = NULL;
  qword_1490AC4D8 = 0i64;
}

/*
==============
DynEntCL_Spatial_Init
==============
*/
void DynEntCL_Spatial_Init(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  __int64 v3; 
  SpatialPartition_PopulationSort_ClientData **v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  MapEnts *mapEnts; 
  __int64 v11; 
  __int64 v12; 
  DynEntityListId dynEntityListsCount; 
  DynEntityListId *dynEntListIds; 
  __int64 v15; 
  DynEntityListId v16; 
  DynEntityList *v17; 
  const SpatialPartition_PopulationSort_Callbacks *v18; 
  const unsigned int *v19; 
  __int64 v20; 
  __int64 v21; 
  SpatialPartition_PopulationSort_ClientData **v23; 
  __int64 v24; 

  v1 = localClientNum;
  v2 = 1 << localClientNum;
  if ( ((1 << localClientNum) & s_dynEntsSpatialAllocated) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 340, ASSERT_TYPE_ASSERT, "(s_dynEntsSpatialAllocated & (1 << localClientNum))", "%s\n\tTrying to init DynEntity spatial data for client num that has not been allocated (%u).\n", "s_dynEntsSpatialAllocated & (1 << localClientNum)", localClientNum) )
    __debugbreak();
  if ( (!cm.mapEnts->dynEntSpatialPopulation[0] || !cm.mapEnts->dynEntSpatialPopulation[1]) && cm.mapEnts->dynEntCountTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 341, ASSERT_TYPE_ASSERT, "((cm.mapEnts->dynEntSpatialPopulation[0] && cm.mapEnts->dynEntSpatialPopulation[1]) || DynEnt_GetTotalMapDynEntCount() == 0)", (const char *)&queryFormat, "(cm.mapEnts->dynEntSpatialPopulation[0] && cm.mapEnts->dynEntSpatialPopulation[1]) || DynEnt_GetTotalMapDynEntCount() == 0") )
    __debugbreak();
  v3 = 16 * v1;
  v4 = g_dynEntSpatialSortClientData[v1];
  v24 = 16 * v1;
  v23 = v4;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 342, ASSERT_TYPE_ASSERT, "(g_dynEntSpatialSortClientData[localClientNum])", (const char *)&queryFormat, "g_dynEntSpatialSortClientData[localClientNum]") )
    __debugbreak();
  v5 = 2i64;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v21) = 2;
    LODWORD(v20) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 365, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( (v2 & s_dynEntsSpatialClientDataInitialized) != 0 )
  {
    LODWORD(v21) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 343, ASSERT_TYPE_ASSERT, "(!DynEntCL_Spatial_IsInitialized(localClientNum))", "%s\n\tTrying to init DynEntity spatial data for client num that has already been initialized (%u).\n", "!DynEntCL_Spatial_IsInitialized(localClientNum)", v21) )
      __debugbreak();
  }
  if ( !s_dynEntsSpatialClientDataInitialized )
  {
    v6 = 456i64;
    v7 = 2i64;
    do
    {
      if ( !*(const char **)((char *)&cm.mapEnts->name + v6) && cm.mapEnts && cm.mapEnts->dynEntCountTotal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 298, ASSERT_TYPE_ASSERT, "(cm.mapEnts->dynEntSpatialPopulation[populationIndex] || DynEnt_GetTotalMapDynEntCount() == 0)", (const char *)&queryFormat, "cm.mapEnts->dynEntSpatialPopulation[populationIndex] || DynEnt_GetTotalMapDynEntCount() == 0") )
        __debugbreak();
      v8 = *(__int64 *)((char *)&cm.mapEnts->name + v6);
      if ( v8 )
      {
        *(_QWORD *)(v8 + 16) = DynEnt_Spatial_GetNodeFromIndex;
        v9 = 0;
        (*(_QWORD **)((char *)&cm.mapEnts->name + v6))[3] = DynEnt_Spatial_GetIndexFromNode;
        (*(_QWORD **)((char *)&cm.mapEnts->name + v6))[4] = g_dynEntityLists;
        mapEnts = cm.mapEnts;
        v11 = *(__int64 *)((char *)&cm.mapEnts->name + v6);
        if ( *(_DWORD *)(v11 + 40) )
        {
          do
          {
            v12 = v9++;
            *(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v12) = -1;
            mapEnts = cm.mapEnts;
            v11 = *(__int64 *)((char *)&cm.mapEnts->name + v6);
          }
          while ( v9 < *(_DWORD *)(v11 + 40) );
        }
        (*(_DWORD **)((char *)&mapEnts->name + v6))[11] = 0;
      }
      v6 += 8i64;
      --v7;
    }
    while ( v7 );
    cm.mapEnts->dynEntNoSpatialList.spatialNodeNext = -1;
    if ( cm.mapEnts )
    {
      dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
      dynEntListIds = cm.mapEnts->dynEntListIds;
    }
    else
    {
      dynEntityListsCount = 0;
      dynEntListIds = NULL;
    }
    v4 = g_dynEntSpatialSortClientData[v1];
    v5 = 2i64;
    LODWORD(v1) = localClientNum;
    v3 = v24;
    if ( dynEntityListsCount )
    {
      v15 = (unsigned __int16)dynEntityListsCount;
      do
      {
        v16 = *dynEntListIds;
        if ( *dynEntListIds >= DEFAULT_DYNENTITY_LIST_ID )
        {
          LODWORD(v21) = 1536;
          LODWORD(v20) = (unsigned __int16)v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v17 = &g_dynEntityLists[(unsigned __int64)(unsigned __int16)v16];
        if ( v17->index == DEFAULT_DYNENTITY_LIST_ID )
          v17 = NULL;
        if ( v17 )
          DynEnt_Spatial_AddDynEntityList(cm.mapEnts, v17);
        ++dynEntListIds;
        --v15;
      }
      while ( v15 );
      v4 = v23;
      v5 = 2i64;
      v3 = v24;
      LODWORD(v1) = localClientNum;
    }
  }
  v18 = s_dynEntSpatialCallbacks;
  v19 = DYNENT_SPATIAL_PRIORITY_COUNT_FOR_POPULATION_TYPE;
  do
  {
    SpatialPartition_PopulationSort_InitializeClientData((const LocalClientNum_t)v1, *(SpatialPartition_Population **)((char *)v4 + 456 - v3 - (_QWORD)g_dynEntSpatialSortClientData + (unsigned __int64)cm.mapEnts), *(SpatialPartition_Population_TransientMap **)((char *)v4 + 472 - v3 - (_QWORD)g_dynEntSpatialSortClientData + (unsigned __int64)cm.mapEnts), *v19, *v4);
    SpatialPartition_PopulationSort_RemoveAll(*v4++, v18++, 0);
    ++v19;
    --v5;
  }
  while ( v5 );
  s_dynEntsSpatialClientDataInitialized |= 1 << v1;
}

/*
==============
DynEntCL_Spatial_IsAnyClientInitialized
==============
*/
bool DynEntCL_Spatial_IsAnyClientInitialized()
{
  return s_dynEntsSpatialClientDataInitialized != 0;
}

/*
==============
DynEntCL_Spatial_IsInitialized
==============
*/
unsigned __int8 DynEntCL_Spatial_IsInitialized(LocalClientNum_t localClientNum)
{
  int v2; 
  int v5; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 365, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  v2 = s_dynEntsSpatialClientDataInitialized;
  return _bittest(&v2, localClientNum);
}

/*
==============
DynEntCL_Spatial_MarkIfMissingCollisionTiles
==============
*/
unsigned int DynEntCL_Spatial_MarkIfMissingCollisionTiles(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int result; 
  unsigned __int8 v3; 
  SpatialPartition_PopulationSort_ClientData **v4; 
  SpatialPartition_PopulationSort_ClientData *v5; 
  bitarray_dynamic *p_partitionCollisionTransientMissingBitfield; 
  unsigned int wordCount; 
  unsigned int v8; 
  unsigned int *array; 
  unsigned int v10; 
  unsigned __int64 i; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 v14; 
  DynEntityClient *m_curNode; 
  unsigned __int8 m_curBasis; 
  unsigned __int16 m_curIndex; 
  __int64 v18; 
  DynEntityPose **v19; 
  unsigned __int16 v20; 
  __int64 v21; 
  DynEntityBasis v22; 
  int v23; 
  DynEntityListId v24; 
  const DynEntityDef *Def; 
  DynEntitySpatialActivationMode priority; 
  DynEntitySpatialActivationMode v27; 
  unsigned __int8 v28; 
  SpatialPartition_PopulationSort_ClientData *v29; 
  unsigned __int64 spatialPartitionIndex; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  DynEntCL_Active_Iterator v35; 
  __int16 gridIdx; 

  v1 = localClientNum;
  result = WorldCollision_GetNumTilesToExpect();
  if ( result )
  {
    Sys_ProfBeginNamedEvent(0xFFD2691E, "DynEntCL_Spatial_MarkIfMissingCollisionTiles");
    if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 527, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
      __debugbreak();
    v3 = 0;
    v4 = g_dynEntSpatialSortClientData[v1];
    do
    {
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v32) = 2;
        LODWORD(v31) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      v5 = *v4;
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 531, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      p_partitionCollisionTransientMissingBitfield = &v5->partitionCollisionTransientMissingBitfield;
      wordCount = v5->partitionCollisionTransientMissingBitfield.wordCount;
      v8 = 0;
      if ( wordCount )
      {
        if ( wordCount >= 4 )
        {
          array = p_partitionCollisionTransientMissingBitfield->array;
          if ( p_partitionCollisionTransientMissingBitfield->array > (unsigned int *)p_partitionCollisionTransientMissingBitfield || &p_partitionCollisionTransientMissingBitfield->array[(unsigned __int64)(wordCount - 1)] < (unsigned int *)p_partitionCollisionTransientMissingBitfield )
          {
            v10 = wordCount & 0xFFFFFFFC;
            do
              v8 += 4;
            while ( v8 < v10 );
            for ( i = (16 * ((unsigned __int64)(v10 + 3) >> 2)) >> 2; i; --i )
              *array++ = 0;
          }
        }
        if ( v8 < wordCount )
        {
          v12 = v8;
          v13 = wordCount - v8;
          do
          {
            p_partitionCollisionTransientMissingBitfield->array[v12++] = 0;
            --v13;
          }
          while ( v13 );
        }
      }
      v5->anyPartitionCollisionTransientMissing = 0;
      ++v3;
      ++v4;
    }
    while ( v3 < 2u );
    *(_QWORD *)&v35.m_curBasis = 0i64;
    *(_DWORD *)&v35.m_nextIndex = -1;
    v35.m_curNode = NULL;
    DynEntCL_Active_Iterator::Init(&v35, (LocalClientNum_t)v1, DYNENT_BASIS_COUNT);
    v14 = 0;
    while ( DynEntCL_Active_Iterator::Advance(&v35) )
    {
      m_curNode = v35.m_curNode;
      if ( !v35.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 544, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
        __debugbreak();
      if ( (m_curNode->flags & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 545, ASSERT_TYPE_ASSERT, "(0 == (dynEntClient->flags & (1 << 15)))", (const char *)&queryFormat, "0 == (dynEntClient->flags & DYNENT_CL_COLLISION_TILE_MISSING)") )
        __debugbreak();
      if ( (m_curNode->flags & 0x4000) != 0 && m_curNode->physicsSystemDetailId != -1 )
      {
        m_curBasis = v35.m_curBasis;
        m_curIndex = v35.m_curIndex;
        if ( (unsigned int)v1 >= 2 )
        {
          LODWORD(v32) = 2;
          LODWORD(v31) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 184, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        if ( m_curBasis >= 2u )
        {
          LODWORD(v32) = 2;
          LODWORD(v31) = m_curBasis;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 185, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        v18 = 2 * v1 + m_curBasis;
        v19 = &g_dynEntPoseLists[0][v18];
        if ( !*v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 186, ASSERT_TYPE_ASSERT, "(g_dynEntPoseLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntPoseLists[localClientNum][basis]") )
          __debugbreak();
        v20 = g_dynEntClientEntsAllocCount[0][v18];
        if ( m_curIndex >= v20 )
        {
          LODWORD(v32) = v20;
          LODWORD(v31) = m_curIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 187, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        v21 = (__int64)&(*v19)[m_curIndex];
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 550, ASSERT_TYPE_ASSERT, "(dynEntPose)", (const char *)&queryFormat, "dynEntPose") )
          __debugbreak();
        if ( !WorldCollision_IsCollisionReadyAt((const Physics_WorldId)(3 * v1 + 3), (const vec2_t *)(v21 + 76), &gridIdx) )
        {
          v22 = v35.m_curBasis;
          v23 = m_curNode->dynEntDefId & 0x7FFFF;
          v24 = truncate_cast<enum DynEntityListId,unsigned int>(m_curNode->dynEntDefId >> 19);
          Def = DynEnt_GetDef(v24, v23, v22);
          if ( !Def )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 555, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 380, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
              __debugbreak();
          }
          priority = Def->priority;
          if ( priority != DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE && priority != DYNENT_PRIORITY_NO_SPATIAL_DEACTIVATABLE )
          {
            m_curNode->flags |= 0x8000u;
            v27 = Def->priority;
            if ( (unsigned __int8)v27 <= DYNENT_RADIAL_PRIORITY_LEVEL_HIGH )
            {
              v28 = 0;
            }
            else if ( v27 == DYNENT_PRIORITY_SPARSE_OCCLUDER )
            {
              v28 = 1;
            }
            else
            {
              v28 = 3;
              LODWORD(v32) = 2;
              LODWORD(v31) = 3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 565, ASSERT_TYPE_ASSERT, "(unsigned)( populationIndex ) < (unsigned)( DYNENT_SPATIAL_POPULATION_TYPE_COUNT )", "populationIndex doesn't index DYNENT_SPATIAL_POPULATION_TYPE_COUNT\n\t%i not in [0, %i)", v31, v32) )
                __debugbreak();
            }
            if ( (unsigned int)v1 >= 2 )
            {
              LODWORD(v32) = 2;
              LODWORD(v31) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
                __debugbreak();
            }
            if ( v28 >= 2u )
            {
              LODWORD(v32) = 2;
              LODWORD(v31) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( populationIndex ) < (unsigned)( DYNENT_SPATIAL_POPULATION_TYPE_COUNT )", "populationIndex doesn't index DYNENT_SPATIAL_POPULATION_TYPE_COUNT\n\t%i not in [0, %i)", v31, v32) )
                __debugbreak();
            }
            v29 = g_dynEntSpatialSortClientData[v1][v28];
            if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 567, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
              __debugbreak();
            v29->anyPartitionCollisionTransientMissing = 1;
            spatialPartitionIndex = Def->spatialPartitionIndex;
            if ( (unsigned int)spatialPartitionIndex >= v29->partitionCollisionTransientMissingBitfield.bitCount )
            {
              LODWORD(v34) = v29->partitionCollisionTransientMissingBitfield.bitCount;
              LODWORD(v33) = Def->spatialPartitionIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v33, v34) )
                __debugbreak();
            }
            v29->partitionCollisionTransientMissingBitfield.array[spatialPartitionIndex >> 5] |= 0x80000000 >> (spatialPartitionIndex & 0x1F);
            v14 = 1;
          }
        }
      }
    }
    Sys_ProfEndNamedEvent();
    return v14;
  }
  return result;
}

/*
==============
DynEntCL_Spatial_PostLoad
==============
*/
void DynEntCL_Spatial_PostLoad(LocalClientNum_t localClientNum)
{
  const SpatialPartition_PopulationSort_Callbacks *v2; 
  unsigned __int8 v3; 
  SpatialPartition_PopulationSort_ClientData **v4; 
  __int64 v5; 
  __int64 v6; 

  v2 = s_dynEntSpatialCallbacks;
  v3 = 0;
  v4 = g_dynEntSpatialSortClientData[localClientNum];
  do
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v6) = 2;
      LODWORD(v5) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    SpatialPartition_PopulationSort_PostLoad(*v4, v2);
    ++v3;
    ++v4;
    ++v2;
  }
  while ( v3 < 2u );
}

/*
==============
DynEntCL_Spatial_RemoveDynEntityList
==============
*/
void DynEntCL_Spatial_RemoveDynEntityList(LocalClientNum_t localClientNum, DynEntityListId dynEntListId)
{
  __int64 v2; 
  DynEntityList *DynEntityList; 
  unsigned __int8 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  SpatialPartition_TransientPopulation *v8; 
  SpatialPartition_PopulationSort_ClientData *v9; 
  __int64 p_dynEntNoSpatialList; 
  __int64 v11; 
  unsigned __int16 v12; 
  unsigned __int8 v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  DynEntityClient *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  SpatialPartition_PopulationSort_ClientData *v20; 
  unsigned __int8 v21; 
  DynEntityList *v22; 

  v2 = localClientNum;
  DynEntityList = DynEnt_GetDynEntityList(dynEntListId);
  v22 = DynEntityList;
  if ( DynEntityList->index != DYNENTITY_LIST_ID_UNLOADING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 657, ASSERT_TYPE_ASSERT, "(dynEntityList->index == DYNENTITY_LIST_ID_UNLOADING)", (const char *)&queryFormat, "dynEntityList->index == DYNENTITY_LIST_ID_UNLOADING") )
    __debugbreak();
  v4 = 0;
  v5 = v2;
  v21 = 0;
  v6 = v2;
  do
  {
    v7 = v4;
    v19 = v4;
    v8 = DynEntityList->dynEntSpatialPopulation[v4];
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v18) = 2;
      LODWORD(v17) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v9 = g_dynEntSpatialSortClientData[v5][v4];
    v20 = v9;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 663, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
      __debugbreak();
    if ( !v9->jobInProgress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 664, ASSERT_TYPE_ASSERT, "(clientData->jobInProgress)", (const char *)&queryFormat, "clientData->jobInProgress") )
      __debugbreak();
    if ( !v4 )
    {
      p_dynEntNoSpatialList = (__int64)&DynEntityList->dynEntNoSpatialList;
      if ( p_dynEntNoSpatialList )
      {
        v11 = 2 * v6;
        do
        {
          if ( *(_DWORD *)p_dynEntNoSpatialList == -1 )
            break;
          p_dynEntNoSpatialList = ((__int64 (__fastcall *)(SpatialPartition_TransientPopulation *))v8->getNodeFromIndex)(v8);
          if ( !p_dynEntNoSpatialList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 681, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          v12 = *(_WORD *)(p_dynEntNoSpatialList + 2 * v6 + 12);
          if ( v12 != 0xFFFF )
          {
            v13 = *(_BYTE *)(p_dynEntNoSpatialList + 5);
            if ( (unsigned int)v2 >= 2 )
            {
              LODWORD(v18) = 2;
              LODWORD(v17) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v18) )
                __debugbreak();
            }
            if ( v13 >= 2u )
            {
              LODWORD(v18) = 2;
              LODWORD(v17) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v17, v18) )
                __debugbreak();
            }
            v14 = v13 + v11;
            v15 = g_dynEntClientEntsAllocCount[0][v14];
            if ( v12 >= v15 )
            {
              LODWORD(v18) = v15;
              LODWORD(v17) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v17, v18) )
                __debugbreak();
            }
            if ( !g_dynEntClientLists[0][v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v16 = &g_dynEntClientLists[0][v14][v12];
            if ( (v16->flags & 0x20) != 0 )
            {
              DynEntCL_RemoveEntity((LocalClientNum_t)v2, v16->dynEntDefId, *(DynEntityBasis *)(p_dynEntNoSpatialList + 5), 0, 1);
              v16->activeModel = NULL;
            }
            v6 = v2;
          }
        }
        while ( p_dynEntNoSpatialList );
        v4 = v21;
        v7 = v19;
        v9 = v20;
      }
      DynEntityList = v22;
    }
    SpatialPartition_PopulationSort_PostTransientPopulationRemoved(v9, &s_dynEntSpatialCallbacks[v7], v8, 1);
    ++v4;
    v5 = v6;
    v21 = v4;
  }
  while ( v4 < 2u );
}

/*
==============
DynEntCL_Spatial_Shutdown
==============
*/
void DynEntCL_Spatial_Shutdown(LocalClientNum_t localClientNum)
{
  int v2; 
  int v4; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 365, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = s_dynEntsSpatialClientDataInitialized;
  if ( _bittest(&v2, localClientNum) )
    s_dynEntsSpatialClientDataInitialized &= ~(1 << localClientNum);
}

/*
==============
DynEntCL_Spatial_SortByDistance
==============
*/

void __fastcall DynEntCL_Spatial_SortByDistance(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos)
{
  SpatialPartition_PopulationSort_SortByDistance(clientData, viewPos);
}

/*
==============
DynEntCL_Spatial_SortByDistanceAndView
==============
*/
void DynEntCL_Spatial_SortByDistanceAndView(SpatialPartition_PopulationSort_ClientData *clientData, const vec3_t *viewPos, const vec3_t *lookAtDir, const float fovInDegrees)
{
  const dvar_t *v4; 

  v4 = DCONST_DVARFLT_dynEnt_spatialViewBasedStartDistance;
  if ( !DCONST_DVARFLT_dynEnt_spatialViewBasedStartDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialViewBasedStartDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  SpatialPartition_PopulationSort_SortByDistanceWithViewAngle(clientData, viewPos, v4->current.value, lookAtDir, fovInDegrees);
}

/*
==============
DynEntCL_Spatial_SparseOccluderActivated
==============
*/
void DynEntCL_Spatial_SparseOccluderActivated(const SpatialPartition_PopulationSort_ClientData *clientData, const DynEntityDef *def, const unsigned int sortedPartitionIndex)
{
  __int64 v3; 
  __int64 v6; 
  const dvar_t *v7; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  float value; 
  bitarray_base<bitarray_dynamic> *v10; 
  bool v11; 
  DynEntityClient *ClientFromClientId; 
  unsigned int partitionIndex; 
  __int64 v14; 

  v3 = sortedPartitionIndex;
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 120, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 121, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (unsigned int)v3 >= clientData->sortedPartitionCount )
  {
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 122, ASSERT_TYPE_ASSERT, "(unsigned)( sortedPartitionIndex ) < (unsigned)( clientData->sortedPartitionCount )", "sortedPartitionIndex doesn't index clientData->sortedPartitionCount\n\t%i not in [0, %i)", v14, clientData->sortedPartitionCount) )
      __debugbreak();
  }
  if ( (def->collisionFlags & 1) != 0 )
  {
    v6 = v3;
    v7 = DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance;
    sortedPartitions = clientData->sortedPartitions;
    if ( !DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialSparseOccluderCollisionActivationDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    value = v7->current.value;
    v10 = (bitarray_base<bitarray_dynamic> *)g_dynEntSpatialSortOccluderCollisionClientData[clientData->localClientNum];
    v11 = (float)(value * value) <= sortedPartitions[v6].distanceSq;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 132, ASSERT_TYPE_ASSERT, "(collisionClientData)", (const char *)&queryFormat, "collisionClientData") )
      __debugbreak();
    ClientFromClientId = DynEnt_GetClientFromClientId(clientData->localClientNum, def->clientId[clientData->localClientNum], def->basis);
    if ( !ClientFromClientId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 134, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    partitionIndex = sortedPartitions[v6].partitionIndex;
    if ( v11 )
    {
      bitarray_base<bitarray_dynamic>::setBit(v10 + 16, partitionIndex);
      ClientFromClientId->flags |= 0x2000u;
    }
    else
    {
      bitarray_base<bitarray_dynamic>::setBit(v10, partitionIndex);
      ClientFromClientId->flags &= ~0x2000u;
    }
  }
}

/*
==============
DynEntCL_Spatial_UpdateCmd
==============
*/
void DynEntCL_Spatial_UpdateCmd(const void *const cmdInfo)
{
  int *v1; 
  __int64 v2; 
  char v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned __int8 v8; 
  const SpatialPartition_PopulationSort_Callbacks *v9; 
  SpatialPartition_PopulationSort_ClientData **v10; 
  SpatialPartition_PopulationSort_ClientData *v11; 
  SpatialPartition_PopulationSort_ClientData **v12; 
  int v13; 
  unsigned __int8 v14; 
  int *v15; 
  SpatialPartition_PopulationSort_ClientData **v16; 
  SpatialPartition_PopulationSort_ClientData *v17; 
  int v18; 
  __int64 priorityCount; 
  int *numActivatedForPriority; 
  _DWORD *v21; 
  char v22; 
  __int64 v23; 
  SpatialPartition_PopulationSort_ClientData *v24; 
  int v25; 
  int v26; 
  int maxActivatedTotal; 
  int v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int *v32; 
  SpatialPartition_PopulationSort_ClientData *v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  __int64 v38; 
  int *v39; 
  const SpatialPartition_PopulationSort_ClientData *v40; 
  unsigned __int8 i; 
  SpatialPartition_PopulationSort_ClientData *v42; 
  __int64 v43; 
  __int64 v44; 
  int v46; 
  int v47; 
  __int64 v48; 

  v1 = (int *)cmdInfo;
  Profile_Begin(535);
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 843, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  v2 = *v1;
  v3 = *((_BYTE *)v1 + 4);
  LODWORD(v4) = 0;
  if ( (v3 & 0x10) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEntCL_Spatial_DeferredRemove");
    v5 = v1[51];
    while ( v5 )
    {
LABEL_9:
      v6 = __lzcnt(v5);
      v7 = v6 + 32 * v4;
      if ( v6 >= 0x20 )
      {
        LODWORD(v44) = 32;
        LODWORD(v43) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      if ( (v5 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v5 &= ~(0x80000000 >> v6);
      if ( v7 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum DynEntityListId __cdecl truncate_cast_impl<enum DynEntityListId,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)(v6 + 32 * v4), "unsigned", v7) )
        __debugbreak();
      DynEntCL_Spatial_RemoveDynEntityList((LocalClientNum_t)v2, (DynEntityListId)(v6 + 32 * v4));
      v1 = (int *)cmdInfo;
    }
    while ( 1 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 0x30 )
        break;
      v5 = v1[v4 + 51];
      if ( v5 )
        goto LABEL_9;
    }
    Sys_ProfEndNamedEvent();
    v3 = *((_BYTE *)v1 + 4);
  }
  if ( (v3 & 8) != 0 )
  {
    DynEntCL_Spatial_DeferredAddNoSpatial((LocalClientNum_t)v2, (const bitarray<1536> *)(v1 + 3));
    v3 = *((_BYTE *)v1 + 4);
  }
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 6) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 863, ASSERT_TYPE_ASSERT, "(!(cmd->flags & (DYNENT_SPATIAL_WORKER_UPDATE_NEEDED_COMMON | DYNENT_SPATIAL_WORKER_UPDATE_NEEDED_OCCLUDERS)))", (const char *)&queryFormat, "!(cmd->flags & (DYNENT_SPATIAL_WORKER_UPDATE_NEEDED_COMMON | DYNENT_SPATIAL_WORKER_UPDATE_NEEDED_OCCLUDERS))") )
      __debugbreak();
    v8 = 0;
    v9 = s_dynEntSpatialCallbacks;
    v10 = g_dynEntSpatialSortClientData[v2];
    do
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v44) = 2;
        LODWORD(v43) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v11 = *v10;
      if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 867, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      SpatialPartition_PopulationSort_RemoveAll(v11, v9, 1);
      ++v8;
      ++v10;
      ++v9;
    }
    while ( v8 < 2u );
    v12 = g_dynEntSpatialSortClientData[v2];
  }
  else
  {
    v13 = 0;
    v14 = 0;
    v15 = &v46;
    v48 = 16 * v2;
    v16 = g_dynEntSpatialSortClientData[v2];
    do
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v44) = 2;
        LODWORD(v43) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v17 = *v16;
      if ( !*v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 880, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      v18 = 0;
      *v15 = 0;
      priorityCount = v17->priorityCount;
      if ( (_DWORD)priorityCount )
      {
        numActivatedForPriority = v17->numActivatedForPriority;
        do
        {
          v18 += *numActivatedForPriority++;
          --priorityCount;
        }
        while ( priorityCount );
        *v15 = v18;
      }
      v13 += v18;
      ++v14;
      ++v16;
      ++v15;
    }
    while ( v14 < 2u );
    v21 = cmdInfo;
    v22 = *((_BYTE *)cmdInfo + 4);
    v23 = v48;
    v12 = g_dynEntSpatialSortClientData[v2];
    if ( (v22 & 4) != 0 )
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v44) = 2;
        LODWORD(v43) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v24 = *(SpatialPartition_PopulationSort_ClientData **)((char *)&g_dynEntSpatialSortClientData[0][1] + v23);
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 892, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      v25 = *((_DWORD *)cmdInfo + 2);
      Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEntCL_Spatial_UpdatePopulation");
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 719, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      v26 = v47;
      maxActivatedTotal = 0;
      if ( v25 + v47 - v13 > 0 )
        maxActivatedTotal = v25 + v47 - v13;
      if ( v24->settings.maxActivatedTotal < maxActivatedTotal )
        maxActivatedTotal = v24->settings.maxActivatedTotal;
      v24->settings.maxActivatedTotal = maxActivatedTotal;
      SpatialPartition_PopulationSort_Update(v24, &s_dynEntSpatialCallbacks[1]);
      v28 = v13 - v26;
      v29 = 0;
      v30 = v24->priorityCount;
      v31 = 0;
      if ( (_DWORD)v30 )
      {
        v32 = v24->numActivatedForPriority;
        do
        {
          v29 += *v32;
          v31 = v29;
          ++v32;
          --v30;
        }
        while ( v30 );
      }
      v13 = v31 + v28;
      Sys_ProfEndNamedEvent();
      v21 = cmdInfo;
      v22 = *((_BYTE *)cmdInfo + 4);
    }
    if ( (v22 & 2) != 0 )
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v44) = 2;
        LODWORD(v43) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v33 = *(SpatialPartition_PopulationSort_ClientData **)((char *)g_dynEntSpatialSortClientData[0] + v23);
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 899, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      v34 = v21[2];
      Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEntCL_Spatial_UpdatePopulation");
      if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 719, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      v35 = v34 + v46 - v13;
      v36 = 0;
      v37 = 0;
      if ( v35 > 0 )
        v37 = v35;
      if ( v33->settings.maxActivatedTotal < v37 )
        v37 = v33->settings.maxActivatedTotal;
      v33->settings.maxActivatedTotal = v37;
      SpatialPartition_PopulationSort_Update(v33, s_dynEntSpatialCallbacks);
      v38 = v33->priorityCount;
      if ( (_DWORD)v38 )
      {
        v39 = v33->numActivatedForPriority;
        do
        {
          v36 += *v39++;
          --v38;
        }
        while ( v38 );
      }
      Sys_ProfEndNamedEvent();
      v22 = *((_BYTE *)cmdInfo + 4);
    }
    if ( (v22 & 0x20) != 0 )
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v44) = 2;
        LODWORD(v43) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v40 = *(SpatialPartition_PopulationSort_ClientData **)((char *)&g_dynEntSpatialSortClientData[0][1] + v23);
      if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 906, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
        __debugbreak();
      DynEntCL_Spatial_UpdateCollisions(v40);
    }
  }
  for ( i = 0; i < 2u; ++i )
  {
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v44) = 2;
      LODWORD(v43) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    v42 = *v12;
    if ( !*v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 914, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
      __debugbreak();
    v42->jobInProgress = 0;
    ++v12;
  }
  Profile_EndInternal(NULL);
  DynEntCL_VerifyClientLists((const LocalClientNum_t)v2);
}

/*
==============
DynEntCL_Spatial_UpdateCollisions
==============
*/
void DynEntCL_Spatial_UpdateCollisions(const SpatialPartition_PopulationSort_ClientData *clientData)
{
  __int64 localClientNum; 
  SpatialPartition_PopulationSort_DependentClientData *v3; 
  SpatialPartition_PopulationSort_Entry *sortedPartitions; 
  __int64 sortedPartitionCount; 
  const dvar_t *v6; 
  float v8; 
  bool v9; 
  unsigned __int64 partitionIndex; 
  char v11; 
  char v12; 
  SpatialPartition_Population_Node *m_curNode; 
  SpatialPartition_Population_Node *v14; 
  unsigned __int8 v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  unsigned __int16 v18; 
  DynEntityClient *v19; 
  unsigned __int16 flags; 
  bool v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  SpatialPartition_PopulationSort_DependentClientData *v28; 
  SpatialPartition_Population_NodeIterator v29; 
  SpatialPartition_PopulationSort_Entry *v31; 
  __int64 i; 

  Sys_ProfBeginNamedEvent(0xFFFF6347, "DynEntCL_Spatial_UpdateCollisions");
  if ( !clientData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 742, ASSERT_TYPE_ASSERT, "(clientData)", (const char *)&queryFormat, "clientData") )
    __debugbreak();
  if ( !clientData->population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 743, ASSERT_TYPE_ASSERT, "(clientData->population)", (const char *)&queryFormat, "clientData->population") )
    __debugbreak();
  if ( clientData->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(v24) = clientData->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 744, ASSERT_TYPE_ASSERT, "(unsigned)( clientData->localClientNum ) < (unsigned)( 2 )", "clientData->localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, 2) )
      __debugbreak();
  }
  localClientNum = clientData->localClientNum;
  v3 = g_dynEntSpatialSortOccluderCollisionClientData[localClientNum];
  v28 = v3;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 747, ASSERT_TYPE_ASSERT, "(collisionData)", (const char *)&queryFormat, "collisionData") )
    __debugbreak();
  if ( clientData->population->partitionCount > v3->anyActivePartitionBitfield.bitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 748, ASSERT_TYPE_ASSERT, "( clientData->population->partitionCount ) <= ( collisionData->anyActivePartitionBitfield.bitCount )", "%s <= %s\n\t%u, %u", "clientData->population->partitionCount", "collisionData->anyActivePartitionBitfield.bitCount", clientData->population->partitionCount, v3->anyActivePartitionBitfield.bitCount) )
    __debugbreak();
  if ( clientData->population->partitionCount > v3->anyAvailablePartitionBitfield.bitCount )
  {
    LODWORD(v27) = v3->anyAvailablePartitionBitfield.bitCount;
    LODWORD(v26) = clientData->population->partitionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 749, ASSERT_TYPE_ASSERT, "( clientData->population->partitionCount ) <= ( collisionData->anyAvailablePartitionBitfield.bitCount )", "%s <= %s\n\t%u, %u", "clientData->population->partitionCount", "collisionData->anyAvailablePartitionBitfield.bitCount", v26, v27) )
      __debugbreak();
  }
  sortedPartitions = clientData->sortedPartitions;
  v31 = sortedPartitions;
  sortedPartitionCount = clientData->sortedPartitionCount;
  v6 = DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance;
  if ( !DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialSparseOccluderCollisionActivationDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  _XMM0 = v6->current.unsignedInt;
  v8 = *(float *)&_XMM0 * *(float *)&_XMM0;
  if ( (_DWORD)sortedPartitionCount )
  {
    for ( i = sortedPartitionCount; i; --i )
    {
      v9 = v8 > sortedPartitions->distanceSq;
      partitionIndex = sortedPartitions->partitionIndex;
      if ( v8 <= sortedPartitions->distanceSq )
      {
        if ( (unsigned int)partitionIndex >= v3->anyActivePartitionBitfield.bitCount )
        {
          LODWORD(v25) = v3->anyActivePartitionBitfield.bitCount;
          LODWORD(v24) = sortedPartitions->partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v25) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (partitionIndex & 0x1F)) & v3->anyActivePartitionBitfield.array[partitionIndex >> 5]) == 0 )
          goto LABEL_86;
      }
      else
      {
        if ( (unsigned int)partitionIndex >= v3->anyAvailablePartitionBitfield.bitCount )
        {
          LODWORD(v25) = v3->anyAvailablePartitionBitfield.bitCount;
          LODWORD(v24) = sortedPartitions->partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v25) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (partitionIndex & 0x1F)) & v3->anyAvailablePartitionBitfield.array[partitionIndex >> 5]) == 0 )
          goto LABEL_86;
      }
      v11 = 0;
      v12 = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v29.m_population = _XMM0;
      v29.m_curIndex = -1;
      SpatialPartition_Population_NodeIterator::Init(&v29, clientData->population, sortedPartitions->partitionIndex);
      if ( SpatialPartition_Population_NodeIterator::Advance(&v29) )
      {
        do
        {
          if ( !v29.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population_iterator.h", 99, ASSERT_TYPE_ASSERT, "(m_curNode != nullptr)", (const char *)&queryFormat, "m_curNode != nullptr") )
            __debugbreak();
          m_curNode = v29.m_curNode;
          if ( !v29.m_curNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 769, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
            __debugbreak();
          v14 = m_curNode - 11;
          if ( m_curNode == (SpatialPartition_Population_Node *)44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 771, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
            __debugbreak();
          if ( (v14[19].spatialNodeNext & 0x100) != 0 && ((unsigned __int8)(1 << localClientNum) & v14[12].spatialNodeNext) != 0 )
          {
            v15 = BYTE1(v14[12].spatialNodeNext);
            v16 = *((_WORD *)&v14[14].spatialNodeNext + localClientNum);
            if ( (unsigned int)localClientNum >= 2 )
            {
              LODWORD(v25) = 2;
              LODWORD(v24) = localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
                __debugbreak();
            }
            if ( v15 >= 2u )
            {
              LODWORD(v25) = 2;
              LODWORD(v24) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v24, v25) )
                __debugbreak();
            }
            v17 = v15 + 2 * localClientNum;
            v18 = g_dynEntClientEntsAllocCount[0][v17];
            if ( v16 >= v18 )
            {
              LODWORD(v25) = v18;
              LODWORD(v24) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v24, v25) )
                __debugbreak();
            }
            if ( !g_dynEntClientLists[0][v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
              __debugbreak();
            v19 = &g_dynEntClientLists[0][v17][v16];
            if ( !v19 )
            {
              LODWORD(v24) = *((unsigned __int16 *)&v14[14].spatialNodeNext + localClientNum);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 778, ASSERT_TYPE_ASSERT, "( ( dynEntClient ) )", "( dynEntDef->clientId[localClientNum] ) = %u", v24) )
                __debugbreak();
            }
            flags = v19->flags;
            if ( ((flags & 0x2000) != 0) == v9 )
            {
              v21 = 1;
              if ( BYTE2(v14[12].spatialNodeNext) == 3 )
              {
                v21 = ScriptableCl_TryRequestDynEntCollisionActivationChange((const LocalClientNum_t)localClientNum, v14[15].spatialNodeNext, v9);
                flags = v19->flags;
              }
              if ( v21 )
              {
                if ( v9 )
                  flags &= ~0x2000u;
                else
                  flags |= 0x2000u;
                v19->flags = flags;
              }
            }
            if ( (flags & 0x2000) != 0 )
              v12 = 1;
            else
              v11 = 1;
          }
        }
        while ( SpatialPartition_Population_NodeIterator::Advance(&v29) );
        v3 = v28;
        sortedPartitions = v31;
      }
      v22 = sortedPartitions->partitionIndex;
      if ( v12 )
      {
        bitarray_base<bitarray_dynamic>::setBit(&v3->anyAvailablePartitionBitfield, sortedPartitions->partitionIndex);
      }
      else
      {
        if ( (unsigned int)v22 >= v3->anyAvailablePartitionBitfield.bitCount )
        {
          LODWORD(v27) = v3->anyAvailablePartitionBitfield.bitCount;
          LODWORD(v26) = sortedPartitions->partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
            __debugbreak();
        }
        v3->anyAvailablePartitionBitfield.array[v22 >> 5] &= ~(0x80000000 >> (v22 & 0x1F));
      }
      v23 = sortedPartitions->partitionIndex;
      if ( v11 )
      {
        bitarray_base<bitarray_dynamic>::setBit((bitarray_base<bitarray_dynamic> *)v3, sortedPartitions->partitionIndex);
      }
      else
      {
        if ( (unsigned int)v23 >= v3->anyActivePartitionBitfield.bitCount )
        {
          LODWORD(v27) = v3->anyActivePartitionBitfield.bitCount;
          LODWORD(v26) = sortedPartitions->partitionIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
            __debugbreak();
        }
        v3->anyActivePartitionBitfield.array[v23 >> 5] &= ~(0x80000000 >> (v23 & 0x1F));
      }
LABEL_86:
      v31 = ++sortedPartitions;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
DynEntCL_Spatial_UpdateNeeded
==============
*/
bool DynEntCL_Spatial_UpdateNeeded(SpatialPartition_PopulationSort_ClientData *clientData)
{
  SpatialPartition_PopulationSort_CheckTransients(clientData);
  return SpatialPartition_PopulationSort_UpdateNeeded(clientData);
}

/*
==============
DynEntCL_Spatial_Iterator::Init
==============
*/
void DynEntCL_Spatial_Iterator::Init(DynEntCL_Spatial_Iterator *this, LocalClientNum_t localClientNum, DynEntityBasis filterBasis)
{
  unsigned int v5; 
  unsigned __int8 v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  unsigned int v9; 
  unsigned int EntityCount; 
  unsigned int v11; 
  DynEntityListId dynEntityListsCount; 
  int v13; 
  DynEntityListId *dynEntListIds; 
  DynEntityListId v15; 
  __int64 v16; 
  __int64 v17; 

  this->m_filterBasis = (unsigned __int8)filterBasis;
  v5 = (unsigned __int8)filterBasis;
  this->m_localClientNum = localClientNum;
  v6 = 0;
  while ( g_dynEntSpatialSortClientData[localClientNum][v6] && cm.mapEnts && cm.mapEnts->dynEntSpatialPopulation[v6] )
  {
    if ( ++v6 >= 2u )
    {
      v7 = DCONST_DVARBOOL_dynEnt_spatialEnabled;
      if ( !DCONST_DVARBOOL_dynEnt_spatialEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
      {
        v8 = DCONST_DVARBOOL_dynEnt_spatialIteratorEnabled;
        if ( !DCONST_DVARBOOL_dynEnt_spatialIteratorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dynEnt_spatialIteratorEnabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.enabled )
        {
          this->m_curPopulationIndex = 0;
          this->m_curPopulationIndexLimit = 2;
          if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 974, ASSERT_TYPE_ASSERT, "(cm.mapEnts != nullptr)", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
            __debugbreak();
          if ( filterBasis == DYNENT_BASIS_COUNT )
            goto LABEL_23;
          if ( (unsigned __int8)filterBasis >= DYNENT_BASIS_COUNT )
          {
            LODWORD(v17) = 2;
            LODWORD(v16) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 81, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          if ( cm.mapEnts && cm.mapEnts->dynEntCount[(unsigned __int8)filterBasis] )
LABEL_23:
            SpatialPartition_PopulationSort_ActiveNodeIterator::Init(&this->m_iter, g_dynEntSpatialSortClientData[this->m_localClientNum][this->m_curPopulationIndex], &s_dynEntSpatialCallbacks[(unsigned __int64)this->m_curPopulationIndex], &cm.mapEnts->dynEntNoSpatialList);
          *(_QWORD *)&this->m_curBasis = 0i64;
          this->m_curDynEntListId = 0;
          *(_QWORD *)&this->m_curDynEntExpectedListId = 0i64;
          *(_QWORD *)&this->m_curDynEntLocalId = 0i64;
          return;
        }
      }
      break;
    }
  }
  v9 = 2;
  if ( filterBasis != DYNENT_BASIS_COUNT )
    v9 = v5 + 1;
  EntityCount = 0;
  v11 = 0;
  if ( filterBasis != DYNENT_BASIS_COUNT )
    v11 = v5;
  this->m_curBasis = v11;
  this->m_curBasisIterLimit = v9;
  this->m_curDynEntExpectedListId = 0;
  if ( cm.mapEnts )
    dynEntityListsCount = cm.mapEnts->dynEntityListsCount;
  else
    dynEntityListsCount = 0;
  v13 = (unsigned __int16)dynEntityListsCount;
  this->m_curDynEntExpectedListIterLimit = (unsigned __int16)dynEntityListsCount;
  if ( cm.mapEnts )
    dynEntListIds = cm.mapEnts->dynEntListIds;
  else
    dynEntListIds = NULL;
  if ( v13 )
  {
    if ( !dynEntListIds )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_spatial.cpp", 1007, ASSERT_TYPE_ASSERT, "(m_curDynEntExpectedListIterLimit == 0 || expectedListIds)", (const char *)&queryFormat, "m_curDynEntExpectedListIterLimit == 0 || expectedListIds") )
        __debugbreak();
      goto LABEL_39;
    }
LABEL_44:
    v15 = *dynEntListIds;
    goto LABEL_40;
  }
  if ( dynEntListIds )
    goto LABEL_44;
LABEL_39:
  v15 = DEFAULT_DYNENTITY_LIST_ID;
LABEL_40:
  this->m_curDynEntListId = v15;
  this->m_curDynEntLocalId = -1;
  if ( v15 != DEFAULT_DYNENTITY_LIST_ID )
    EntityCount = DynEnt_GetEntityCount(v15, (const DynEntityBasis)LOBYTE(this->m_curBasis));
  this->m_curDynEntLocalIterLimit = EntityCount;
}

