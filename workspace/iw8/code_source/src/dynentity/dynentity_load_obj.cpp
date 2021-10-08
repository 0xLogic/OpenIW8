/*
==============
DynEnt_Spatial_GetIndexFromNode
==============
*/

unsigned int __fastcall DynEnt_Spatial_GetIndexFromNode(const SpatialPartition_Population *population, const SpatialPartition_Population_Node *node)
{
  return ?DynEnt_Spatial_GetIndexFromNode@@YAIPEBUSpatialPartition_Population@@PEBUSpatialPartition_Population_Node@@@Z(population, node);
}

/*
==============
DynEnt_Spatial_GetTransientFromNode
==============
*/

unsigned int __fastcall DynEnt_Spatial_GetTransientFromNode(const SpatialPartition_Population *__formal, SpatialPartition_Population_Node *node)
{
  return ?DynEnt_Spatial_GetTransientFromNode@@YAIPEBUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@@Z(__formal, node);
}

/*
==============
DynEnt_Spatial_TransientPopulation_GetNodeFromIndex
==============
*/

SpatialPartition_Population_Node *__fastcall DynEnt_Spatial_TransientPopulation_GetNodeFromIndex(const SpatialPartition_TransientPopulation *population, unsigned int combinedIndex)
{
  return ?DynEnt_Spatial_TransientPopulation_GetNodeFromIndex@@YAPEAUSpatialPartition_Population_Node@@PEBUSpatialPartition_TransientPopulation@@I@Z(population, combinedIndex);
}

/*
==============
DynEnt_Spatial_RemoveDynEntityList
==============
*/

void __fastcall DynEnt_Spatial_RemoveDynEntityList(MapEnts *mapEnts, DynEntityList *dynEntList)
{
  ?DynEnt_Spatial_RemoveDynEntityList@@YAXPEAUMapEnts@@PEAUDynEntityList@@@Z(mapEnts, dynEntList);
}

/*
==============
DynEnt_Spatial_AddDynEntityList
==============
*/

void __fastcall DynEnt_Spatial_AddDynEntityList(MapEnts *mapEnts, DynEntityList *dynEntList)
{
  ?DynEnt_Spatial_AddDynEntityList@@YAXPEAUMapEnts@@PEAUDynEntityList@@@Z(mapEnts, dynEntList);
}

/*
==============
DynEnt_Spatial_GetDefFromNode
==============
*/

DynEntityDef *__fastcall DynEnt_Spatial_GetDefFromNode(SpatialPartition_Population_Node *node)
{
  return ?DynEnt_Spatial_GetDefFromNode@@YAPEAUDynEntityDef@@PEAUSpatialPartition_Population_Node@@@Z(node);
}

/*
==============
DynEnt_Spatial_GetNodeFromIndex
==============
*/

SpatialPartition_Population_Node *__fastcall DynEnt_Spatial_GetNodeFromIndex(const SpatialPartition_Population *population, unsigned int combinedIndex)
{
  return ?DynEnt_Spatial_GetNodeFromIndex@@YAPEAUSpatialPartition_Population_Node@@PEBUSpatialPartition_Population@@I@Z(population, combinedIndex);
}

/*
==============
DynEnt_Spatial_TransientPopulation_GetIndexFromNode
==============
*/

unsigned int __fastcall DynEnt_Spatial_TransientPopulation_GetIndexFromNode(const SpatialPartition_TransientPopulation *population, const SpatialPartition_Population_Node *node)
{
  return ?DynEnt_Spatial_TransientPopulation_GetIndexFromNode@@YAIPEBUSpatialPartition_TransientPopulation@@PEBUSpatialPartition_Population_Node@@@Z(population, node);
}

/*
==============
DynEnt_Spatial_AddDynEntityList
==============
*/
void DynEnt_Spatial_AddDynEntityList(MapEnts *mapEnts, DynEntityList *dynEntList)
{
  SpatialPartition_TransientPopulation **dynEntSpatialPopulation; 
  SpatialPartition_TransientPopulation **v5; 
  __int64 v6; 
  SpatialPartition_Population_Node *p_dynEntNoSpatialList; 
  SpatialPartition_Population_Node *p_dynEntNoSpatialListTail; 

  if ( !mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 234, ASSERT_TYPE_ASSERT, "(mapEnts)", (const char *)&queryFormat, "mapEnts") )
    __debugbreak();
  if ( !dynEntList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 235, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
    __debugbreak();
  dynEntSpatialPopulation = dynEntList->dynEntSpatialPopulation;
  v5 = dynEntList->dynEntSpatialPopulation;
  v6 = 2i64;
  do
  {
    (*v5)->getIndexFromNode = DynEnt_Spatial_TransientPopulation_GetIndexFromNode;
    (*v5)->getNodeFromIndex = DynEnt_Spatial_TransientPopulation_GetNodeFromIndex;
    (*v5)->userData = dynEntList;
    SpatialPartition_Population_AddTransientPopulation(*(SpatialPartition_Population **)((char *)v5 + (char *)mapEnts - (char *)dynEntList + 416), *v5);
    ++v5;
    --v6;
  }
  while ( v6 );
  p_dynEntNoSpatialList = &dynEntList->dynEntNoSpatialList;
  if ( dynEntList->dynEntNoSpatialList.spatialNodeNext != -1 )
  {
    p_dynEntNoSpatialListTail = &dynEntList->dynEntNoSpatialListTail;
    if ( p_dynEntNoSpatialListTail->spatialNodeNext == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 248, ASSERT_TYPE_ASSERT, "( dynEntList->dynEntNoSpatialListTail.spatialNodeNext ) != ( SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE )", "%s != %s\n\t%u, %u", "dynEntList->dynEntNoSpatialListTail.spatialNodeNext", "SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE", -1, -1) )
      __debugbreak();
    SpatialPartition_Population_AddTransientPopulationList(mapEnts->dynEntSpatialPopulation[0], *dynEntSpatialPopulation, &mapEnts->dynEntNoSpatialList, p_dynEntNoSpatialList, p_dynEntNoSpatialListTail);
  }
}

/*
==============
DynEnt_Spatial_GetDefFromNode
==============
*/
SpatialPartition_Population_Node *DynEnt_Spatial_GetDefFromNode(SpatialPartition_Population_Node *node)
{
  return node - 11;
}

/*
==============
DynEnt_Spatial_GetIndexFromNode
==============
*/
__int64 DynEnt_Spatial_GetIndexFromNode(const SpatialPartition_Population *population, const SpatialPartition_Population_Node *node)
{
  char *userData; 
  const SpatialPartition_Population_Node *v4; 
  unsigned __int8 v5; 
  unsigned __int8 *v6; 
  unsigned __int16 spatialNodeNext; 
  const DynEntityListId *v8; 
  char *v9; 
  __int16 v10; 
  unsigned int v11; 
  __int64 v13; 
  __int64 v14; 

  userData = (char *)population->userData;
  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 186, ASSERT_TYPE_ASSERT, "(curDynEnts)", (const char *)&queryFormat, "curDynEnts") )
    __debugbreak();
  v4 = node - 11;
  v5 = BYTE1(v4[12].spatialNodeNext);
  v6 = (unsigned __int8 *)&v4[12].spatialNodeNext + 1;
  if ( v5 >= 2u )
  {
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 188, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v13, 2) )
      __debugbreak();
  }
  spatialNodeNext = v4[16].spatialNodeNext;
  v8 = (const DynEntityListId *)&v4[16];
  if ( spatialNodeNext >= 0x600u )
  {
    LODWORD(v14) = 1536;
    LODWORD(v13) = spatialNodeNext;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 189, ASSERT_TYPE_ASSERT, "(unsigned)( def->dynEntityListId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "def->dynEntityListId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v9 = &userData[64 * (unsigned __int64)*(unsigned __int16 *)v8];
  v10 = *((_WORD *)v9 + 4);
  if ( v10 != *v8 && v10 != 1537 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 191, ASSERT_TYPE_ASSERT, "(dynEntList->index == def->dynEntityListId || dynEntList->index == DYNENTITY_LIST_ID_UNLOADING)", (const char *)&queryFormat, "dynEntList->index == def->dynEntityListId || dynEntList->index == DYNENTITY_LIST_ID_UNLOADING") )
    __debugbreak();
  v11 = truncate_cast<unsigned int,__int64>(((__int64)v4 - *(_QWORD *)&v9[8 * *v6 + 24]) / 80);
  if ( v11 >= *(_DWORD *)&v9[4 * *v6 + 12] )
  {
    LODWORD(v14) = *(_DWORD *)&v9[4 * *v6 + 12];
    LODWORD(v13) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[def->basis] )", "localId doesn't index dynEntList->dynEntCount[def->basis]\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  return (*v6 << 31) | DynEnt_IdFromListAndLocalId(*v8, v11);
}

/*
==============
DynEnt_Spatial_GetNodeFromIndex
==============
*/
SpatialPartition_Population_Node *DynEnt_Spatial_GetNodeFromIndex(const SpatialPartition_Population *population, unsigned int combinedIndex)
{
  char *userData; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  char *v8; 
  __int16 v9; 
  __int64 v11; 
  __int64 v12; 

  userData = (char *)population->userData;
  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 164, ASSERT_TYPE_ASSERT, "(curDynEnts)", (const char *)&queryFormat, "curDynEnts") )
    __debugbreak();
  v4 = combinedIndex >> 31;
  v5 = combinedIndex & 0x7FFFFFFF;
  v6 = (combinedIndex & 0x7FFFFFFF) >> 19;
  v7 = v5 & 0x7FFFF;
  if ( (unsigned __int16)v6 >= 0x600u )
  {
    LODWORD(v11) = (unsigned __int16)v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v11, 1536) )
      __debugbreak();
  }
  v8 = &userData[64 * (unsigned __int64)(unsigned __int16)v6];
  v9 = *((_WORD *)v8 + 4);
  if ( v9 != (_WORD)v6 && v9 != 1537 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 173, ASSERT_TYPE_ASSERT, "(dynEntList->index == listId || dynEntList->index == DYNENTITY_LIST_ID_UNLOADING)", (const char *)&queryFormat, "dynEntList->index == listId || dynEntList->index == DYNENTITY_LIST_ID_UNLOADING") )
    __debugbreak();
  if ( (unsigned int)v7 >= *(_DWORD *)&v8[4 * v4 + 12] )
  {
    LODWORD(v12) = *(_DWORD *)&v8[4 * v4 + 12];
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( *(unsigned __int8 *)(*(_QWORD *)&v8[8 * v4 + 24] + 80 * v7 + 49) != (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 175, ASSERT_TYPE_ASSERT, "(dynEntList->dynEntDefList[basis][localId].basis == basis)", (const char *)&queryFormat, "dynEntList->dynEntDefList[basis][localId].basis == basis") )
    __debugbreak();
  if ( *(_WORD *)(*(_QWORD *)&v8[8 * v4 + 24] + 80 * v7 + 64) != (_WORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 176, ASSERT_TYPE_ASSERT, "(dynEntList->dynEntDefList[basis][localId].dynEntityListId == listId)", (const char *)&queryFormat, "dynEntList->dynEntDefList[basis][localId].dynEntityListId == listId") )
    __debugbreak();
  return (SpatialPartition_Population_Node *)(*(_QWORD *)&v8[8 * v4 + 24] + 80 * v7 + 44);
}

/*
==============
DynEnt_Spatial_GetTransientFromNode
==============
*/
__int64 DynEnt_Spatial_GetTransientFromNode(const SpatialPartition_Population *__formal, SpatialPartition_Population_Node *node)
{
  __int16 spatialNodeNext; 
  __int16 spatialNodeNext_high; 

  spatialNodeNext = node[5].spatialNodeNext;
  if ( spatialNodeNext )
  {
    spatialNodeNext_high = HIWORD(node[6].spatialNodeNext);
    if ( spatialNodeNext_high )
    {
      if ( spatialNodeNext_high != spatialNodeNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 280, ASSERT_TYPE_ASSERT, "(def->dynEntityListId == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == def->dynEntityListId)", (const char *)&queryFormat, "def->dynEntityListId == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == TRANSIENT_ZONE_ALWAYSLOADED || def->transientIndexStored == def->dynEntityListId") )
        __debugbreak();
    }
  }
  return HIWORD(node[6].spatialNodeNext);
}

/*
==============
DynEnt_Spatial_RemoveDynEntityList
==============
*/
void DynEnt_Spatial_RemoveDynEntityList(MapEnts *mapEnts, DynEntityList *dynEntList)
{
  SpatialPartition_Population **dynEntSpatialPopulation; 
  __int64 v5; 

  if ( !mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 256, ASSERT_TYPE_ASSERT, "(mapEnts)", (const char *)&queryFormat, "mapEnts") )
    __debugbreak();
  if ( !dynEntList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 257, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
    __debugbreak();
  dynEntSpatialPopulation = mapEnts->dynEntSpatialPopulation;
  v5 = 2i64;
  do
  {
    SpatialPartition_Population_RemoveTransientPopulation(*dynEntSpatialPopulation, *(SpatialPartition_TransientPopulation **)((char *)dynEntSpatialPopulation + (char *)dynEntList - (char *)mapEnts - 416));
    ++dynEntSpatialPopulation;
    --v5;
  }
  while ( v5 );
  if ( dynEntList->dynEntNoSpatialList.spatialNodeNext != -1 )
  {
    if ( dynEntList->dynEntNoSpatialListTail.spatialNodeNext == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 264, ASSERT_TYPE_ASSERT, "( dynEntList->dynEntNoSpatialListTail.spatialNodeNext ) != ( SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE )", "%s != %s\n\t%u, %u", "dynEntList->dynEntNoSpatialListTail.spatialNodeNext", "SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE", -1, -1) )
      __debugbreak();
    SpatialPartition_Population_RemoveTransientPopulationList(mapEnts->dynEntSpatialPopulation[0], dynEntList->dynEntSpatialPopulation[0], &mapEnts->dynEntNoSpatialList, &dynEntList->dynEntNoSpatialList, &dynEntList->dynEntNoSpatialListTail);
  }
}

/*
==============
DynEnt_Spatial_TransientPopulation_GetIndexFromNode
==============
*/
__int64 DynEnt_Spatial_TransientPopulation_GetIndexFromNode(const SpatialPartition_TransientPopulation *population, const SpatialPartition_Population_Node *node)
{
  _WORD *userData; 
  const SpatialPartition_Population_Node *v4; 
  unsigned __int8 v5; 
  unsigned __int8 *v6; 
  unsigned __int16 v7; 
  const DynEntityListId *v8; 
  unsigned int v9; 
  __int64 v11; 
  __int64 v12; 

  userData = population->userData;
  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 220, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
    __debugbreak();
  v4 = node - 11;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 222, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  v5 = BYTE1(v4[12].spatialNodeNext);
  v6 = (unsigned __int8 *)&v4[12].spatialNodeNext + 1;
  if ( v5 >= 2u )
  {
    LODWORD(v11) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 223, ASSERT_TYPE_ASSERT, "(unsigned)( def->basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "def->basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  v7 = userData[4];
  v8 = (const DynEntityListId *)&v4[16];
  if ( v7 != LOWORD(v4[16].spatialNodeNext) && v7 != 1537 )
  {
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 224, ASSERT_TYPE_ASSERT, "( ( dynEntList->index == def->dynEntityListId || dynEntList->index == DYNENTITY_LIST_ID_UNLOADING ) )", "( dynEntList->index ) = %u", v11) )
      __debugbreak();
  }
  v9 = truncate_cast<unsigned int,__int64>(((__int64)v4 - *(_QWORD *)&userData[4 * *v6 + 12]) / 80);
  if ( v9 >= *(_DWORD *)&userData[2 * *v6 + 6] )
  {
    LODWORD(v12) = *(_DWORD *)&userData[2 * *v6 + 6];
    LODWORD(v11) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[def->basis] )", "localId doesn't index dynEntList->dynEntCount[def->basis]\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  return (*v6 << 31) | DynEnt_IdFromListAndLocalId(*v8, v9);
}

/*
==============
DynEnt_Spatial_TransientPopulation_GetNodeFromIndex
==============
*/
SpatialPartition_Population_Node *DynEnt_Spatial_TransientPopulation_GetNodeFromIndex(const SpatialPartition_TransientPopulation *population, unsigned int combinedIndex)
{
  _WORD *userData; 
  __int16 v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v10; 

  userData = population->userData;
  if ( !userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 202, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
    __debugbreak();
  v4 = userData[4];
  v5 = combinedIndex >> 31;
  v6 = combinedIndex & 0x7FFFFFFF;
  v7 = (combinedIndex & 0x7FFFFFFF) >> 19;
  v8 = v6 & 0x7FFFF;
  if ( v4 != (_WORD)v7 && v4 != 1537 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 209, ASSERT_TYPE_ASSERT, "(dynEntList->index == listId || dynEntList->index == DYNENTITY_LIST_ID_UNLOADING)", (const char *)&queryFormat, "dynEntList->index == listId || dynEntList->index == DYNENTITY_LIST_ID_UNLOADING") )
    __debugbreak();
  if ( (unsigned int)v8 >= *(_DWORD *)&userData[2 * v5 + 6] )
  {
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 210, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v10, *(_DWORD *)&userData[2 * v5 + 6]) )
      __debugbreak();
  }
  if ( *(unsigned __int8 *)(*(_QWORD *)&userData[4 * v5 + 12] + 80 * v8 + 49) != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 211, ASSERT_TYPE_ASSERT, "(dynEntList->dynEntDefList[basis][localId].basis == basis)", (const char *)&queryFormat, "dynEntList->dynEntDefList[basis][localId].basis == basis") )
    __debugbreak();
  if ( *(_WORD *)(*(_QWORD *)&userData[4 * v5 + 12] + 80 * v8 + 64) != (_WORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_load_obj.cpp", 212, ASSERT_TYPE_ASSERT, "(dynEntList->dynEntDefList[basis][localId].dynEntityListId == listId)", (const char *)&queryFormat, "dynEntList->dynEntDefList[basis][localId].dynEntityListId == listId") )
    __debugbreak();
  return (SpatialPartition_Population_Node *)(*(_QWORD *)&userData[4 * v5 + 12] + 80 * v8 + 44);
}

