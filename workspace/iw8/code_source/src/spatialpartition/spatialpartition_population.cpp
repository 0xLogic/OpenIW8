/*
==============
SpatialPartition_Population_FindPartition
==============
*/

unsigned int __fastcall SpatialPartition_Population_FindPartition(const SpatialPartition_Population *population, const vec3_t *pos)
{
  return ?SpatialPartition_Population_FindPartition@@YAIPEBUSpatialPartition_Population@@AEBTvec3_t@@@Z(population, pos);
}

/*
==============
SpatialPartition_Population_AddTransientPopulationList
==============
*/

void __fastcall SpatialPartition_Population_AddTransientPopulationList(SpatialPartition_Population *__formal, SpatialPartition_TransientPopulation *subpop, SpatialPartition_Population_Node *populationListHeadNode, const SpatialPartition_Population_Node *subpopListHeadNode, const SpatialPartition_Population_Node *subpopListTailNode)
{
  ?SpatialPartition_Population_AddTransientPopulationList@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@PEBU3@3@Z(__formal, subpop, populationListHeadNode, subpopListHeadNode, subpopListTailNode);
}

/*
==============
SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_TransientPopulation>
==============
*/

bool __fastcall SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_TransientPopulation>(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *optionalListTailNode)
{
  return ??$SpatialPartition_Population_RemoveFromList_Common@USpatialPartition_TransientPopulation@@@@YA_NPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@11@Z(population, targetNode, listHeadNode, optionalListTailNode);
}

/*
==============
SpatialPartition_Population_Remove
==============
*/

void __fastcall SpatialPartition_Population_Remove(SpatialPartition_Population *population, SpatialPartition_Population_Node *targetNode, unsigned int partitionIndex)
{
  ?SpatialPartition_Population_Remove@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@I@Z(population, targetNode, partitionIndex);
}

/*
==============
SpatialPartition_Population_AddToList
==============
*/

void __fastcall SpatialPartition_Population_AddToList(SpatialPartition_Population *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode)
{
  ?SpatialPartition_Population_AddToList@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@1@Z(population, newNode, listHeadNode);
}

/*
==============
SpatialPartition_Population_AddToList_Common<SpatialPartition_TransientPopulation>
==============
*/

void __fastcall SpatialPartition_Population_AddToList_Common<SpatialPartition_TransientPopulation>(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode)
{
  ??$SpatialPartition_Population_AddToList_Common@USpatialPartition_TransientPopulation@@@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@1@Z(population, newNode, listHeadNode);
}

/*
==============
SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_TransientPopulation>
==============
*/

void __fastcall SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_TransientPopulation>(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *listHeadNode)
{
  ??$SpatialPartition_Population_RemoveAllFromList_Common@USpatialPartition_TransientPopulation@@@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@@Z(population, listHeadNode);
}

/*
==============
SpatialPartition_Population_AddTransientPopulation
==============
*/

void __fastcall SpatialPartition_Population_AddTransientPopulation(SpatialPartition_Population *population, SpatialPartition_TransientPopulation *subpop)
{
  ?SpatialPartition_Population_AddTransientPopulation@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_TransientPopulation@@@Z(population, subpop);
}

/*
==============
SpatialPartition_Population_RemoveAll
==============
*/

void __fastcall SpatialPartition_Population_RemoveAll(SpatialPartition_Population *population)
{
  ?SpatialPartition_Population_RemoveAll@@YAXPEAUSpatialPartition_Population@@@Z(population);
}

/*
==============
SpatialPartition_TransientPopulation_AddToList
==============
*/

void __fastcall SpatialPartition_TransientPopulation_AddToList(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *listTailNode)
{
  ?SpatialPartition_TransientPopulation_AddToList@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@11@Z(population, newNode, listHeadNode, listTailNode);
}

/*
==============
SpatialPartition_TransientPopulation_RemoveFromList
==============
*/

bool __fastcall SpatialPartition_TransientPopulation_RemoveFromList(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *listTailNode)
{
  return ?SpatialPartition_TransientPopulation_RemoveFromList@@YA_NPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@11@Z(population, targetNode, listHeadNode, listTailNode);
}

/*
==============
SpatialPartition_Population_Add
==============
*/

void __fastcall SpatialPartition_Population_Add(SpatialPartition_Population *population, SpatialPartition_Population_Node *newNode, unsigned int partitionIndex)
{
  ?SpatialPartition_Population_Add@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@I@Z(population, newNode, partitionIndex);
}

/*
==============
SpatialPartition_Population_AddToList_Common<SpatialPartition_Population>
==============
*/

void __fastcall SpatialPartition_Population_AddToList_Common<SpatialPartition_Population>(SpatialPartition_Population *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode)
{
  ??$SpatialPartition_Population_AddToList_Common@USpatialPartition_Population@@@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@1@Z(population, newNode, listHeadNode);
}

/*
==============
SpatialPartition_Population_RemoveTransientPopulationList
==============
*/

void __fastcall SpatialPartition_Population_RemoveTransientPopulationList(SpatialPartition_Population *population, SpatialPartition_TransientPopulation *subpop, SpatialPartition_Population_Node *populationListHeadNode, const SpatialPartition_Population_Node *subpopListHeadNode, const SpatialPartition_Population_Node *subpopListTailNode)
{
  ?SpatialPartition_Population_RemoveTransientPopulationList@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@PEBU3@3@Z(population, subpop, populationListHeadNode, subpopListHeadNode, subpopListTailNode);
}

/*
==============
SpatialPartition_Population_RemoveFromList
==============
*/

bool __fastcall SpatialPartition_Population_RemoveFromList(SpatialPartition_Population *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode)
{
  return ?SpatialPartition_Population_RemoveFromList@@YA_NPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@1@Z(population, targetNode, listHeadNode);
}

/*
==============
SpatialPartition_PopulationTree_FindPartition
==============
*/

unsigned int __fastcall SpatialPartition_PopulationTree_FindPartition(const SpatialPartition_Population_Tree *tree, const vec3_t *pos)
{
  return ?SpatialPartition_PopulationTree_FindPartition@@YAIPEBUSpatialPartition_Population_Tree@@AEBTvec3_t@@@Z(tree, pos);
}

/*
==============
SpatialPartition_TransientPopulation_AddByPopulationIndex
==============
*/

void __fastcall SpatialPartition_TransientPopulation_AddByPopulationIndex(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *node, unsigned int partitionIndex)
{
  ?SpatialPartition_TransientPopulation_AddByPopulationIndex@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@I@Z(population, node, partitionIndex);
}

/*
==============
SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_Population>
==============
*/

bool __fastcall SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_Population>(SpatialPartition_Population *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *optionalListTailNode)
{
  return ??$SpatialPartition_Population_RemoveFromList_Common@USpatialPartition_Population@@@@YA_NPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@11@Z(population, targetNode, listHeadNode, optionalListTailNode);
}

/*
==============
SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>
==============
*/

SpatialPartition_Population_Node *__fastcall SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>(const SpatialPartition_Population *population, const SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode)
{
  return ??$SpatialPartition_Population_FindPreviousNode@USpatialPartition_Population@@@@YAPEAUSpatialPartition_Population_Node@@PEBUSpatialPartition_Population@@PEBU0@PEAU0@@Z(population, targetNode, listHeadNode);
}

/*
==============
SpatialPartition_TransientPopulation_Add
==============
*/

void __fastcall SpatialPartition_TransientPopulation_Add(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *newNode, unsigned int partitionLocalIndex)
{
  ?SpatialPartition_TransientPopulation_Add@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@I@Z(population, newNode, partitionLocalIndex);
}

/*
==============
SpatialPartition_TransientPopulation_Remove
==============
*/

void __fastcall SpatialPartition_TransientPopulation_Remove(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *targetNode, unsigned int partitionLocalIndex)
{
  ?SpatialPartition_TransientPopulation_Remove@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@I@Z(population, targetNode, partitionLocalIndex);
}

/*
==============
SpatialPartition_Population_FindPreviousNode<SpatialPartition_TransientPopulation>
==============
*/

SpatialPartition_Population_Node *__fastcall SpatialPartition_Population_FindPreviousNode<SpatialPartition_TransientPopulation>(const SpatialPartition_TransientPopulation *population, const SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode)
{
  return ??$SpatialPartition_Population_FindPreviousNode@USpatialPartition_TransientPopulation@@@@YAPEAUSpatialPartition_Population_Node@@PEBUSpatialPartition_TransientPopulation@@PEBU0@PEAU0@@Z(population, targetNode, listHeadNode);
}

/*
==============
SpatialPartition_TransientPopulation_RemoveAllFromList
==============
*/

void __fastcall SpatialPartition_TransientPopulation_RemoveAllFromList(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *listTailNode)
{
  ?SpatialPartition_TransientPopulation_RemoveAllFromList@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@1@Z(population, listHeadNode, listTailNode);
}

/*
==============
SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_Population>
==============
*/

void __fastcall SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_Population>(SpatialPartition_Population *population, SpatialPartition_Population_Node *listHeadNode)
{
  ??$SpatialPartition_Population_RemoveAllFromList_Common@USpatialPartition_Population@@@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@@Z(population, listHeadNode);
}

/*
==============
SpatialPartition_Population_RemoveTransientPopulation
==============
*/

void __fastcall SpatialPartition_Population_RemoveTransientPopulation(SpatialPartition_Population *population, SpatialPartition_TransientPopulation *subpop)
{
  ?SpatialPartition_Population_RemoveTransientPopulation@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_TransientPopulation@@@Z(population, subpop);
}

/*
==============
SpatialPartition_TransientPopulation_GetLocalPartitionIndex
==============
*/

unsigned int __fastcall SpatialPartition_TransientPopulation_GetLocalPartitionIndex(const SpatialPartition_TransientPopulation *population, unsigned int partitionIndex)
{
  return ?SpatialPartition_TransientPopulation_GetLocalPartitionIndex@@YAIPEBUSpatialPartition_TransientPopulation@@I@Z(population, partitionIndex);
}

/*
==============
SpatialPartition_Population_RemoveAllFromList
==============
*/

void __fastcall SpatialPartition_Population_RemoveAllFromList(SpatialPartition_Population *population, SpatialPartition_Population_Node *listHeadNode)
{
  ?SpatialPartition_Population_RemoveAllFromList@@YAXPEAUSpatialPartition_Population@@PEAUSpatialPartition_Population_Node@@@Z(population, listHeadNode);
}

/*
==============
SpatialPartition_TransientPopulation_RemoveByPopulationIndex
==============
*/

void __fastcall SpatialPartition_TransientPopulation_RemoveByPopulationIndex(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *node, unsigned int partitionIndex)
{
  ?SpatialPartition_TransientPopulation_RemoveByPopulationIndex@@YAXPEAUSpatialPartition_TransientPopulation@@PEAUSpatialPartition_Population_Node@@I@Z(population, node, partitionIndex);
}

/*
==============
SpatialPartition_Population_AddToList_Common<SpatialPartition_Population>
==============
*/
void SpatialPartition_Population_AddToList_Common<SpatialPartition_Population>(SpatialPartition_Population *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode)
{
  __int64 v6; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 49, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 50, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 51, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v6 = population->getIndexFromNode(population, newNode);
  if ( population->getNodeFromIndex(population, v6) != newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 54, ASSERT_TYPE_ASSERT, "(population->getNodeFromIndex( population, newNodeIndex ) == newNode)", (const char *)&queryFormat, "population->getNodeFromIndex( population, newNodeIndex ) == newNode") )
    __debugbreak();
  newNode->spatialNodeNext = listHeadNode->spatialNodeNext;
  listHeadNode->spatialNodeNext = v6;
}

/*
==============
SpatialPartition_Population_AddToList_Common<SpatialPartition_TransientPopulation>
==============
*/
void SpatialPartition_Population_AddToList_Common<SpatialPartition_TransientPopulation>(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode)
{
  __int64 v6; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 49, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 50, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 51, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v6 = population->getIndexFromNode(population, newNode);
  if ( population->getNodeFromIndex(population, v6) != newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 54, ASSERT_TYPE_ASSERT, "(population->getNodeFromIndex( population, newNodeIndex ) == newNode)", (const char *)&queryFormat, "population->getNodeFromIndex( population, newNodeIndex ) == newNode") )
    __debugbreak();
  newNode->spatialNodeNext = listHeadNode->spatialNodeNext;
  listHeadNode->spatialNodeNext = v6;
}

/*
==============
SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>
==============
*/
SpatialPartition_Population_Node *SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>(const SpatialPartition_Population *population, const SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode)
{
  unsigned int v6; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 85, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 86, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 87, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v6 = population->getIndexFromNode(population, targetNode);
  if ( listHeadNode )
  {
    do
    {
      if ( listHeadNode->spatialNodeNext == v6 )
        return listHeadNode;
      if ( listHeadNode->spatialNodeNext == -1 )
        return 0i64;
      listHeadNode = (SpatialPartition_Population_Node *)((__int64 (__fastcall *)(const SpatialPartition_Population *))population->getNodeFromIndex)(population);
    }
    while ( listHeadNode );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 99, ASSERT_TYPE_ASSERT, "(curNode)", (const char *)&queryFormat, "curNode") )
      __debugbreak();
  }
  return 0i64;
}

/*
==============
SpatialPartition_Population_FindPreviousNode<SpatialPartition_TransientPopulation>
==============
*/
SpatialPartition_Population_Node *SpatialPartition_Population_FindPreviousNode<SpatialPartition_TransientPopulation>(const SpatialPartition_TransientPopulation *population, const SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode)
{
  unsigned int v6; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 85, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 86, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 87, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v6 = population->getIndexFromNode(population, targetNode);
  if ( listHeadNode )
  {
    do
    {
      if ( listHeadNode->spatialNodeNext == v6 )
        return listHeadNode;
      if ( listHeadNode->spatialNodeNext == -1 )
        return 0i64;
      listHeadNode = (SpatialPartition_Population_Node *)((__int64 (__fastcall *)(const SpatialPartition_TransientPopulation *))population->getNodeFromIndex)(population);
    }
    while ( listHeadNode );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 99, ASSERT_TYPE_ASSERT, "(curNode)", (const char *)&queryFormat, "curNode") )
      __debugbreak();
  }
  return 0i64;
}

/*
==============
SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_Population>
==============
*/
void SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_Population>(SpatialPartition_Population *population, SpatialPartition_Population_Node *listHeadNode)
{
  unsigned int i; 
  _DWORD *v5; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 157, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( listHeadNode )
  {
    for ( i = listHeadNode->spatialNodeNext; i != -1; i = -1 )
    {
      v5 = (_DWORD *)((__int64 (__fastcall *)(SpatialPartition_Population *))population->getNodeFromIndex)(population);
      *v5 = -1;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 158, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
  {
    __debugbreak();
  }
}

/*
==============
SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_TransientPopulation>
==============
*/
void SpatialPartition_Population_RemoveAllFromList_Common<SpatialPartition_TransientPopulation>(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *listHeadNode)
{
  unsigned int i; 
  _DWORD *v5; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 157, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( listHeadNode )
  {
    for ( i = listHeadNode->spatialNodeNext; i != -1; i = -1 )
    {
      v5 = (_DWORD *)((__int64 (__fastcall *)(SpatialPartition_TransientPopulation *))population->getNodeFromIndex)(population);
      *v5 = -1;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 158, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
  {
    __debugbreak();
  }
}

/*
==============
SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_Population>
==============
*/
bool SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_Population>(SpatialPartition_Population *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *optionalListTailNode)
{
  SpatialPartition_Population_Node *Previous; 
  SpatialPartition_Population_Node *v9; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 113, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 114, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 115, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  Previous = SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>(population, targetNode, listHeadNode);
  v9 = Previous;
  if ( Previous )
  {
    if ( optionalListTailNode && optionalListTailNode->spatialNodeNext == population->getIndexFromNode(population, targetNode) )
    {
      if ( targetNode->spatialNodeNext != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 131, ASSERT_TYPE_ASSERT, "( targetNode->spatialNodeNext ) == ( SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE )", "%s == %s\n\t%u, %u", "targetNode->spatialNodeNext", "SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE", targetNode->spatialNodeNext, -1) )
        __debugbreak();
      optionalListTailNode->spatialNodeNext = population->getIndexFromNode(population, v9);
    }
    v9->spatialNodeNext = targetNode->spatialNodeNext;
    LOBYTE(Previous) = 1;
  }
  return (char)Previous;
}

/*
==============
SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_TransientPopulation>
==============
*/
char SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_TransientPopulation>(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *optionalListTailNode)
{
  unsigned int v8; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 113, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 114, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 115, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 85, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 86, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 87, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v8 = population->getIndexFromNode(population, targetNode);
  if ( !listHeadNode )
    return 0;
  while ( listHeadNode->spatialNodeNext != v8 )
  {
    if ( listHeadNode->spatialNodeNext == -1 )
      return 0;
    listHeadNode = (SpatialPartition_Population_Node *)((__int64 (__fastcall *)(SpatialPartition_TransientPopulation *))population->getNodeFromIndex)(population);
    if ( !listHeadNode )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 99, ASSERT_TYPE_ASSERT, "(curNode)", (const char *)&queryFormat, "curNode") )
        __debugbreak();
      return 0;
    }
  }
  if ( optionalListTailNode && optionalListTailNode->spatialNodeNext == population->getIndexFromNode(population, targetNode) )
  {
    if ( targetNode->spatialNodeNext != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 131, ASSERT_TYPE_ASSERT, "( targetNode->spatialNodeNext ) == ( SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE )", "%s == %s\n\t%u, %u", "targetNode->spatialNodeNext", "SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE", targetNode->spatialNodeNext, -1) )
      __debugbreak();
    optionalListTailNode->spatialNodeNext = population->getIndexFromNode(population, listHeadNode);
  }
  listHeadNode->spatialNodeNext = targetNode->spatialNodeNext;
  return 1;
}

/*
==============
SpatialPartition_PopulationTree_FindPartition
==============
*/
__int64 SpatialPartition_PopulationTree_FindPartition(const SpatialPartition_Population_Tree *tree, const vec3_t *pos)
{
  int v6; 
  bool v8; 
  bool v9; 
  __int64 v12; 
  __int64 v13; 

  _R15 = pos;
  if ( !tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 10, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 11, ASSERT_TYPE_ASSERT, "(tree->partitionCount > 0)", (const char *)&queryFormat, "tree->partitionCount > 0") )
    __debugbreak();
  _RBX = 0i64;
  while ( 1 )
  {
    if ( (unsigned int)_RBX >= tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 15, ASSERT_TYPE_ASSERT, "(partitionIndex < tree->partitionCount)", (const char *)&queryFormat, "partitionIndex < tree->partitionCount") )
      __debugbreak();
    _RBP = tree->partitions;
    v6 = *((_DWORD *)&tree->partitions[_RBX] + 1);
    if ( (v6 & 0x7FFFFFFC) == 0 )
      break;
    if ( (v6 & 3) == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 19, ASSERT_TYPE_ASSERT, "(partition.axis < 3)", (const char *)&queryFormat, "partition.axis < 3") )
      __debugbreak();
    _RDI = *((_DWORD *)&_RBP[_RBX] + 1) & 3;
    v8 = (*((_DWORD *)&_RBP[_RBX] + 1) & 3) != 3;
    if ( (*((_DWORD *)&_RBP[_RBX] + 1) & 3) == 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = *((_DWORD *)&_RBP[_RBX] + 1) & 3;
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13);
      v8 = 0;
      if ( v9 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rbx*8+0]
      vcomiss xmm0, dword ptr [r15+rdi*4]
    }
    if ( v8 )
      _RBX = (*((_DWORD *)&_RBP[_RBX] + 1) >> 2) & 0x1FFFFFFF;
    else
      _RBX = (unsigned int)(_RBX + 1);
  }
  return (unsigned int)_RBX;
}

/*
==============
SpatialPartition_Population_Add
==============
*/
void SpatialPartition_Population_Add(SpatialPartition_Population *population, SpatialPartition_Population_Node *newNode, unsigned int partitionIndex)
{
  __int64 v3; 
  SpatialPartition_Population_Node *buckets; 
  unsigned int *p_spatialNodeNext; 
  __int64 v8; 

  v3 = partitionIndex;
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 188, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 189, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( (unsigned int)v3 >= population->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 190, ASSERT_TYPE_ASSERT, "(partitionIndex < population->partitionCount)", (const char *)&queryFormat, "partitionIndex < population->partitionCount") )
    __debugbreak();
  if ( population->bucketsAreChanging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 191, ASSERT_TYPE_ASSERT, "(!population->bucketsAreChanging)", (const char *)&queryFormat, "!population->bucketsAreChanging") )
    __debugbreak();
  buckets = population->buckets;
  population->bucketsAreChanging = 1;
  p_spatialNodeNext = &buckets[v3].spatialNodeNext;
  if ( !newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 50, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( !p_spatialNodeNext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 51, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v8 = population->getIndexFromNode(population, newNode);
  if ( population->getNodeFromIndex(population, v8) != newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 54, ASSERT_TYPE_ASSERT, "(population->getNodeFromIndex( population, newNodeIndex ) == newNode)", (const char *)&queryFormat, "population->getNodeFromIndex( population, newNodeIndex ) == newNode") )
    __debugbreak();
  newNode->spatialNodeNext = *p_spatialNodeNext;
  *p_spatialNodeNext = v8;
  ++population->currentPopulation;
  population->bucketsAreChanging = 0;
}

/*
==============
SpatialPartition_Population_AddToList
==============
*/
void SpatialPartition_Population_AddToList(SpatialPartition_Population *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode)
{
  __int64 v6; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 49, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 50, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 51, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v6 = population->getIndexFromNode(population, newNode);
  if ( population->getNodeFromIndex(population, v6) != newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 54, ASSERT_TYPE_ASSERT, "(population->getNodeFromIndex( population, newNodeIndex ) == newNode)", (const char *)&queryFormat, "population->getNodeFromIndex( population, newNodeIndex ) == newNode") )
    __debugbreak();
  newNode->spatialNodeNext = listHeadNode->spatialNodeNext;
  listHeadNode->spatialNodeNext = v6;
}

/*
==============
SpatialPartition_Population_AddTransientPopulation
==============
*/
void SpatialPartition_Population_AddTransientPopulation(SpatialPartition_Population *population, SpatialPartition_TransientPopulation *subpop)
{
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  SpatialPartition_Population_Node *v8; 
  SpatialPartition_Population_Node *v9; 
  SpatialPartition_Population_Node *v10; 
  unsigned int *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 298, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !subpop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 299, ASSERT_TYPE_ASSERT, "(subpop)", (const char *)&queryFormat, "subpop") )
    __debugbreak();
  if ( subpop->partitionCount > population->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 300, ASSERT_TYPE_ASSERT, "( subpop->partitionCount ) <= ( population->partitionCount )", "%s <= %s\n\t%u, %u", "subpop->partitionCount", "population->partitionCount", subpop->partitionCount, population->partitionCount) )
    __debugbreak();
  if ( population->bucketsAreChanging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 301, ASSERT_TYPE_ASSERT, "(!population->bucketsAreChanging)", (const char *)&queryFormat, "!population->bucketsAreChanging") )
    __debugbreak();
  v4 = 0i64;
  population->bucketsAreChanging = 1;
  if ( subpop->partitionCount )
  {
    v5 = "partitionIndex doesn't index population->partitionCount\n\t%i not in [0, %i)";
    do
    {
      v6 = v4;
      if ( subpop->buckets[v4].spatialNodeNext != -1 )
      {
        if ( subpop->bucketTails[v6].spatialNodeNext == -1 )
        {
          LODWORD(v15) = -1;
          LODWORD(v14) = -1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 307, ASSERT_TYPE_ASSERT, "( subpop->bucketTails[partitionLocalIndex].spatialNodeNext ) != ( SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE )", "%s != %s\n\t%u, %u", "subpop->bucketTails[partitionLocalIndex].spatialNodeNext", "SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE", v14, v15) )
            __debugbreak();
          v5 = "partitionIndex doesn't index population->partitionCount\n\t%i not in [0, %i)";
        }
        v7 = subpop->partitionIds[v6];
        if ( (unsigned int)v7 >= population->partitionCount )
        {
          LODWORD(v13) = population->partitionCount;
          LODWORD(v12) = subpop->partitionIds[v6];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 309, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( population->partitionCount )", "partitionIndex doesn't index population->partitionCount\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v8 = &subpop->bucketTails[v6];
        v9 = &subpop->buckets[v6];
        v10 = &population->buckets[v7];
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 345, ASSERT_TYPE_ASSERT, "(populationListHeadNode)", (const char *)&queryFormat, "populationListHeadNode") )
          __debugbreak();
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 346, ASSERT_TYPE_ASSERT, "(subpopListHeadNode)", (const char *)&queryFormat, "subpopListHeadNode") )
          __debugbreak();
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 347, ASSERT_TYPE_ASSERT, "(subpopListTailNode)", (const char *)&queryFormat, "subpopListTailNode") )
          __debugbreak();
        v11 = (unsigned int *)((__int64 (__fastcall *)(SpatialPartition_TransientPopulation *, _QWORD, const char *))subpop->getNodeFromIndex)(subpop, v8->spatialNodeNext, v5);
        v5 = "partitionIndex doesn't index population->partitionCount\n\t%i not in [0, %i)";
        *v11 = v10->spatialNodeNext;
        v10->spatialNodeNext = v9->spatialNodeNext;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < subpop->partitionCount );
  }
  population->currentPopulation += subpop->currentPopulation;
  population->bucketsAreChanging = 0;
}

/*
==============
SpatialPartition_Population_AddTransientPopulationList
==============
*/
void SpatialPartition_Population_AddTransientPopulationList(SpatialPartition_Population *__formal, SpatialPartition_TransientPopulation *subpop, SpatialPartition_Population_Node *populationListHeadNode, const SpatialPartition_Population_Node *subpopListHeadNode, const SpatialPartition_Population_Node *subpopListTailNode)
{
  if ( !subpop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 344, ASSERT_TYPE_ASSERT, "(subpop)", (const char *)&queryFormat, "subpop") )
    __debugbreak();
  if ( !populationListHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 345, ASSERT_TYPE_ASSERT, "(populationListHeadNode)", (const char *)&queryFormat, "populationListHeadNode") )
    __debugbreak();
  if ( !subpopListHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 346, ASSERT_TYPE_ASSERT, "(subpopListHeadNode)", (const char *)&queryFormat, "subpopListHeadNode") )
    __debugbreak();
  if ( !subpopListTailNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 347, ASSERT_TYPE_ASSERT, "(subpopListTailNode)", (const char *)&queryFormat, "subpopListTailNode") )
    __debugbreak();
  subpop->getNodeFromIndex(subpop, subpopListTailNode->spatialNodeNext)->spatialNodeNext = populationListHeadNode->spatialNodeNext;
  populationListHeadNode->spatialNodeNext = subpopListHeadNode->spatialNodeNext;
}

/*
==============
SpatialPartition_Population_FindPartition
==============
*/
__int64 SpatialPartition_Population_FindPartition(const SpatialPartition_Population *population, const vec3_t *pos)
{
  const SpatialPartition_Population_Tree *tree; 
  int v6; 
  bool v8; 
  bool v9; 
  __int64 v12; 
  __int64 v13; 

  tree = population->tree;
  _R15 = pos;
  if ( !population->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 10, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 11, ASSERT_TYPE_ASSERT, "(tree->partitionCount > 0)", (const char *)&queryFormat, "tree->partitionCount > 0") )
    __debugbreak();
  _RBX = 0i64;
  while ( 1 )
  {
    if ( (unsigned int)_RBX >= tree->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 15, ASSERT_TYPE_ASSERT, "(partitionIndex < tree->partitionCount)", (const char *)&queryFormat, "partitionIndex < tree->partitionCount") )
      __debugbreak();
    _RBP = tree->partitions;
    v6 = *((_DWORD *)&tree->partitions[_RBX] + 1);
    if ( (v6 & 0x7FFFFFFC) == 0 )
      break;
    if ( (v6 & 3) == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 19, ASSERT_TYPE_ASSERT, "(partition.axis < 3)", (const char *)&queryFormat, "partition.axis < 3") )
      __debugbreak();
    _RDI = *((_DWORD *)&_RBP[_RBX] + 1) & 3;
    v8 = (*((_DWORD *)&_RBP[_RBX] + 1) & 3) != 3;
    if ( (*((_DWORD *)&_RBP[_RBX] + 1) & 3) == 3 )
    {
      LODWORD(v13) = 3;
      LODWORD(v12) = *((_DWORD *)&_RBP[_RBX] + 1) & 3;
      v9 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v12, v13);
      v8 = 0;
      if ( v9 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rbx*8+0]
      vcomiss xmm0, dword ptr [r15+rdi*4]
    }
    if ( v8 )
      _RBX = (*((_DWORD *)&_RBP[_RBX] + 1) >> 2) & 0x1FFFFFFF;
    else
      _RBX = (unsigned int)(_RBX + 1);
  }
  return (unsigned int)_RBX;
}

/*
==============
SpatialPartition_Population_Remove
==============
*/
void SpatialPartition_Population_Remove(SpatialPartition_Population *population, SpatialPartition_Population_Node *targetNode, unsigned int partitionIndex)
{
  __int64 v3; 
  SpatialPartition_Population_Node *buckets; 
  SpatialPartition_Population_Node *v7; 
  SpatialPartition_Population_Node *Previous; 
  __int64 v9; 

  v3 = partitionIndex;
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 201, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 202, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( (unsigned int)v3 >= population->partitionCount )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( population->partitionCount )", "partitionIndex doesn't index population->partitionCount\n\t%i not in [0, %i)", v9, population->partitionCount) )
      __debugbreak();
  }
  if ( population->bucketsAreChanging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 204, ASSERT_TYPE_ASSERT, "(!population->bucketsAreChanging)", (const char *)&queryFormat, "!population->bucketsAreChanging") )
    __debugbreak();
  buckets = population->buckets;
  population->bucketsAreChanging = 1;
  v7 = &buckets[v3];
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 114, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 115, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  Previous = SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>(population, targetNode, v7);
  if ( Previous )
  {
    Previous->spatialNodeNext = targetNode->spatialNodeNext;
    --population->currentPopulation;
    population->bucketsAreChanging = 0;
  }
  else
  {
    population->bucketsAreChanging = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 214, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Node was not found to remove!") )
      __debugbreak();
  }
}

/*
==============
SpatialPartition_Population_RemoveAll
==============
*/
void SpatialPartition_Population_RemoveAll(SpatialPartition_Population *population)
{
  __int64 v2; 
  SpatialPartition_Population_Node *v3; 
  int i; 
  _DWORD *v5; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 220, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( population->bucketsAreChanging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 221, ASSERT_TYPE_ASSERT, "(!population->bucketsAreChanging)", (const char *)&queryFormat, "!population->bucketsAreChanging") )
    __debugbreak();
  v2 = 0i64;
  population->bucketsAreChanging = 1;
  if ( population->partitionCount )
  {
    do
    {
      v3 = &population->buckets[v2];
      if ( v3 )
      {
        for ( i = v3->spatialNodeNext; i != -1; i = -1 )
        {
          v5 = (_DWORD *)((__int64 (__fastcall *)(SpatialPartition_Population *))population->getNodeFromIndex)(population);
          *v5 = -1;
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 158, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
      {
        __debugbreak();
      }
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < population->partitionCount );
    population->currentPopulation = 0;
    population->bucketsAreChanging = 0;
  }
  else
  {
    population->currentPopulation = 0;
    population->bucketsAreChanging = 0;
  }
}

/*
==============
SpatialPartition_Population_RemoveAllFromList
==============
*/
void SpatialPartition_Population_RemoveAllFromList(SpatialPartition_Population *population, SpatialPartition_Population_Node *listHeadNode)
{
  unsigned int i; 
  _DWORD *v5; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 157, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( listHeadNode )
  {
    for ( i = listHeadNode->spatialNodeNext; i != -1; i = -1 )
    {
      v5 = (_DWORD *)((__int64 (__fastcall *)(SpatialPartition_Population *))population->getNodeFromIndex)(population);
      *v5 = -1;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 158, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
  {
    __debugbreak();
  }
}

/*
==============
SpatialPartition_Population_RemoveFromList
==============
*/
bool SpatialPartition_Population_RemoveFromList(SpatialPartition_Population *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode)
{
  SpatialPartition_Population_Node *Previous; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 113, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 114, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 115, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  Previous = SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>(population, targetNode, listHeadNode);
  if ( Previous )
  {
    Previous->spatialNodeNext = targetNode->spatialNodeNext;
    LOBYTE(Previous) = 1;
  }
  return (char)Previous;
}

/*
==============
SpatialPartition_Population_RemoveTransientPopulation
==============
*/
void SpatialPartition_Population_RemoveTransientPopulation(SpatialPartition_Population *population, SpatialPartition_TransientPopulation *subpop)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 320, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !subpop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 321, ASSERT_TYPE_ASSERT, "(subpop)", (const char *)&queryFormat, "subpop") )
    __debugbreak();
  if ( subpop->partitionCount > population->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 322, ASSERT_TYPE_ASSERT, "( subpop->partitionCount ) <= ( population->partitionCount )", "%s <= %s\n\t%u, %u", "subpop->partitionCount", "population->partitionCount", subpop->partitionCount, population->partitionCount) )
    __debugbreak();
  if ( population->currentPopulation < subpop->currentPopulation )
  {
    LODWORD(v10) = subpop->currentPopulation;
    LODWORD(v9) = population->currentPopulation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 323, ASSERT_TYPE_ASSERT, "( population->currentPopulation ) >= ( subpop->currentPopulation )", "%s >= %s\n\t%u, %u", "population->currentPopulation", "subpop->currentPopulation", v9, v10) )
      __debugbreak();
  }
  if ( population->bucketsAreChanging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 324, ASSERT_TYPE_ASSERT, "(!population->bucketsAreChanging)", (const char *)&queryFormat, "!population->bucketsAreChanging") )
    __debugbreak();
  v4 = 0i64;
  for ( population->bucketsAreChanging = 1; (unsigned int)v4 < subpop->partitionCount; v4 = (unsigned int)(v4 + 1) )
  {
    v5 = v4;
    if ( subpop->buckets[v4].spatialNodeNext != -1 )
    {
      if ( subpop->bucketTails[v5].spatialNodeNext == -1 )
      {
        LODWORD(v10) = -1;
        LODWORD(v9) = -1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 331, ASSERT_TYPE_ASSERT, "( subpop->bucketTails[partitionLocalIndex].spatialNodeNext ) != ( SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE )", "%s != %s\n\t%u, %u", "subpop->bucketTails[partitionLocalIndex].spatialNodeNext", "SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE", v9, v10) )
          __debugbreak();
      }
      v6 = subpop->partitionIds[v5];
      if ( (unsigned int)v6 >= population->partitionCount )
      {
        LODWORD(v8) = population->partitionCount;
        LODWORD(v7) = subpop->partitionIds[v5];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 333, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( population->partitionCount )", "partitionIndex doesn't index population->partitionCount\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      SpatialPartition_Population_RemoveTransientPopulationList(population, subpop, &population->buckets[v6], &subpop->buckets[v5], &subpop->bucketTails[v5]);
    }
  }
  population->currentPopulation -= subpop->currentPopulation;
  population->bucketsAreChanging = 0;
}

/*
==============
SpatialPartition_Population_RemoveTransientPopulationList
==============
*/
void SpatialPartition_Population_RemoveTransientPopulationList(SpatialPartition_Population *population, SpatialPartition_TransientPopulation *subpop, SpatialPartition_Population_Node *populationListHeadNode, const SpatialPartition_Population_Node *subpopListHeadNode, const SpatialPartition_Population_Node *subpopListTailNode)
{
  const SpatialPartition_Population_Node *v9; 
  SpatialPartition_Population_Node *v10; 
  SpatialPartition_Population_Node *Previous; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 357, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !subpop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 358, ASSERT_TYPE_ASSERT, "(subpop)", (const char *)&queryFormat, "subpop") )
    __debugbreak();
  if ( !populationListHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 359, ASSERT_TYPE_ASSERT, "(populationListHeadNode)", (const char *)&queryFormat, "populationListHeadNode") )
    __debugbreak();
  if ( !subpopListHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 360, ASSERT_TYPE_ASSERT, "(subpopListHeadNode)", (const char *)&queryFormat, "subpopListHeadNode") )
    __debugbreak();
  if ( !subpopListTailNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 361, ASSERT_TYPE_ASSERT, "(subpopListTailNode)", (const char *)&queryFormat, "subpopListTailNode") )
    __debugbreak();
  v9 = subpop->getNodeFromIndex(subpop, subpopListHeadNode->spatialNodeNext);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 365, ASSERT_TYPE_ASSERT, "(subPopBeginNode)", (const char *)&queryFormat, "subPopBeginNode") )
    __debugbreak();
  v10 = subpop->getNodeFromIndex(subpop, subpopListTailNode->spatialNodeNext);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 367, ASSERT_TYPE_ASSERT, "(subpopTailNode)", (const char *)&queryFormat, "subpopTailNode") )
    __debugbreak();
  Previous = SpatialPartition_Population_FindPreviousNode<SpatialPartition_Population>(population, v9, populationListHeadNode);
  if ( !Previous && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 371, ASSERT_TYPE_ASSERT, "(popPrevNode)", (const char *)&queryFormat, "popPrevNode") )
    __debugbreak();
  Previous->spatialNodeNext = v10->spatialNodeNext;
  v10->spatialNodeNext = -1;
}

/*
==============
SpatialPartition_TransientPopulation_Add
==============
*/
void SpatialPartition_TransientPopulation_Add(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *newNode, unsigned int partitionLocalIndex)
{
  __int64 v3; 

  v3 = partitionLocalIndex;
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 254, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 255, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( (unsigned int)v3 >= population->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 256, ASSERT_TYPE_ASSERT, "(partitionLocalIndex < population->partitionCount)", (const char *)&queryFormat, "partitionLocalIndex < population->partitionCount") )
    __debugbreak();
  SpatialPartition_TransientPopulation_AddToList(population, newNode, &population->buckets[v3], &population->bucketTails[v3]);
  ++population->currentPopulation;
}

/*
==============
SpatialPartition_TransientPopulation_AddByPopulationIndex
==============
*/
void SpatialPartition_TransientPopulation_AddByPopulationIndex(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *node, unsigned int partitionIndex)
{
  unsigned int LocalPartitionIndex; 
  __int64 v7; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 280, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  LocalPartitionIndex = SpatialPartition_TransientPopulation_GetLocalPartitionIndex(population, partitionIndex);
  v7 = LocalPartitionIndex;
  if ( LocalPartitionIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 282, ASSERT_TYPE_ASSERT, "(partitionLocalIndex != SPATIAL_PARTITION_TRANSIENTPOPULATION_PARTITION_INDEX_NOT_FOUND)", "%s\n\tTrying to add node to a SpatialPartition_TransientPopulation for partition index %i not found.\n", "partitionLocalIndex != SPATIAL_PARTITION_TRANSIENTPOPULATION_PARTITION_INDEX_NOT_FOUND", partitionIndex) )
    __debugbreak();
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 254, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 255, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( (unsigned int)v7 >= population->partitionCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 256, ASSERT_TYPE_ASSERT, "(partitionLocalIndex < population->partitionCount)", (const char *)&queryFormat, "partitionLocalIndex < population->partitionCount") )
    __debugbreak();
  SpatialPartition_TransientPopulation_AddToList(population, node, &population->buckets[v7], &population->bucketTails[v7]);
  ++population->currentPopulation;
}

/*
==============
SpatialPartition_TransientPopulation_AddToList
==============
*/
void SpatialPartition_TransientPopulation_AddToList(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *newNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *listTailNode)
{
  __int64 v8; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 70, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 71, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  if ( !listTailNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 72, ASSERT_TYPE_ASSERT, "(listTailNode)", (const char *)&queryFormat, "listTailNode") )
    __debugbreak();
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 49, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 50, ASSERT_TYPE_ASSERT, "(newNode)", (const char *)&queryFormat, "newNode") )
    __debugbreak();
  if ( !listHeadNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 51, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
    __debugbreak();
  v8 = population->getIndexFromNode(population, newNode);
  if ( population->getNodeFromIndex(population, v8) != newNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 54, ASSERT_TYPE_ASSERT, "(population->getNodeFromIndex( population, newNodeIndex ) == newNode)", (const char *)&queryFormat, "population->getNodeFromIndex( population, newNodeIndex ) == newNode") )
    __debugbreak();
  newNode->spatialNodeNext = listHeadNode->spatialNodeNext;
  listHeadNode->spatialNodeNext = v8;
  if ( listTailNode->spatialNodeNext == -1 )
  {
    listTailNode->spatialNodeNext = v8;
    if ( newNode->spatialNodeNext != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 77, ASSERT_TYPE_ASSERT, "( newNode->spatialNodeNext ) == ( SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE )", "%s == %s\n\t%u, %u", "newNode->spatialNodeNext", "SPATIAL_PARTITION_POPULATION_NODE_INDEX_NONE", newNode->spatialNodeNext, -1) )
      __debugbreak();
  }
}

/*
==============
SpatialPartition_TransientPopulation_GetLocalPartitionIndex
==============
*/
__int64 SpatialPartition_TransientPopulation_GetLocalPartitionIndex(const SpatialPartition_TransientPopulation *population, unsigned int partitionIndex)
{
  __int64 partitionCount; 
  unsigned int *partitionIds; 
  unsigned int *v6; 
  unsigned int *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *v10; 
  unsigned int *v11; 
  unsigned int *v12; 
  unsigned int *v13; 
  __int64 v14; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 234, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  partitionCount = population->partitionCount;
  if ( !(_DWORD)partitionCount )
    return 0xFFFFFFFFi64;
  partitionIds = population->partitionIds;
  v6 = &partitionIds[partitionCount];
  if ( partitionIds != v6 )
  {
    v7 = partitionIds + 1;
    if ( partitionIds + 1 != v6 )
    {
      v8 = *partitionIds;
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 < v8 )
          break;
        ++v7;
        v8 = v9;
        if ( v7 == v6 )
          goto LABEL_13;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 239, ASSERT_TYPE_ASSERT, "(ntl::is_sorted( &population->partitionIds[0], population->partitionIds + population->partitionCount ))", (const char *)&queryFormat, "ntl::is_sorted( &population->partitionIds[0], population->partitionIds + population->partitionCount )") )
        __debugbreak();
    }
  }
LABEL_13:
  v10 = population->partitionIds;
  v11 = &v10[population->partitionCount];
  v12 = v11 - 1;
  while ( v10 <= v12 )
  {
    v13 = &v10[(v12 - v10) / 2];
    if ( (int)(partitionIndex - *v13) <= 0 )
    {
      if ( (int)(partitionIndex - *v13) >= 0 )
        goto LABEL_20;
      v12 = v13 - 1;
    }
    else
    {
      v10 = v13 + 1;
    }
  }
  v13 = v11;
LABEL_20:
  if ( v13 == v11 )
    return 0xFFFFFFFFi64;
  if ( v13 >= v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 246, ASSERT_TYPE_ASSERT, "( bucketIdPtr ) < ( population->partitionIds + population->partitionCount )", "%s < %s\n\t%p, %p", "bucketIdPtr", "population->partitionIds + population->partitionCount", v13, v11) )
    __debugbreak();
  if ( v13 < population->partitionIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 247, ASSERT_TYPE_ASSERT, "( bucketIdPtr ) >= ( population->partitionIds )", "%s >= %s\n\t%p, %p", "bucketIdPtr", "population->partitionIds", v13, population->partitionIds) )
    __debugbreak();
  v14 = v13 - population->partitionIds;
  if ( (v14 < 0 || (unsigned __int64)v14 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v14, "signed", v14) )
    __debugbreak();
  return (unsigned int)v14;
}

/*
==============
SpatialPartition_TransientPopulation_Remove
==============
*/
void SpatialPartition_TransientPopulation_Remove(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *targetNode, unsigned int partitionLocalIndex)
{
  __int64 v3; 
  SpatialPartition_Population_Node *v6; 
  SpatialPartition_Population_Node *v7; 
  __int64 v8; 

  v3 = partitionLocalIndex;
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 265, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !targetNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 266, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( (unsigned int)v3 >= population->partitionCount )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( partitionLocalIndex ) < (unsigned)( population->partitionCount )", "partitionLocalIndex doesn't index population->partitionCount\n\t%i not in [0, %i)", v8, population->partitionCount) )
      __debugbreak();
  }
  v6 = &population->buckets[v3];
  v7 = &population->bucketTails[v3];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 149, ASSERT_TYPE_ASSERT, "(listTailNode)", (const char *)&queryFormat, "listTailNode") )
    __debugbreak();
  if ( SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_TransientPopulation>(population, targetNode, v6, v7) )
  {
    --population->currentPopulation;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Node was not found to remove!") )
  {
    __debugbreak();
  }
}

/*
==============
SpatialPartition_TransientPopulation_RemoveAllFromList
==============
*/
void SpatialPartition_TransientPopulation_RemoveAllFromList(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *listTailNode)
{
  unsigned int i; 
  _DWORD *v7; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 157, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( listHeadNode )
  {
    for ( i = listHeadNode->spatialNodeNext; i != -1; i = -1 )
    {
      v7 = (_DWORD *)((__int64 (__fastcall *)(SpatialPartition_TransientPopulation *))population->getNodeFromIndex)(population);
      *v7 = -1;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 158, ASSERT_TYPE_ASSERT, "(listHeadNode)", (const char *)&queryFormat, "listHeadNode") )
  {
    __debugbreak();
  }
  if ( !listTailNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 181, ASSERT_TYPE_ASSERT, "(listTailNode)", (const char *)&queryFormat, "listTailNode") )
    __debugbreak();
  listTailNode->spatialNodeNext = -1;
}

/*
==============
SpatialPartition_TransientPopulation_RemoveByPopulationIndex
==============
*/
void SpatialPartition_TransientPopulation_RemoveByPopulationIndex(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *node, unsigned int partitionIndex)
{
  unsigned int LocalPartitionIndex; 
  __int64 v7; 
  SpatialPartition_Population_Node *v8; 
  SpatialPartition_Population_Node *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 289, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  LocalPartitionIndex = SpatialPartition_TransientPopulation_GetLocalPartitionIndex(population, partitionIndex);
  v7 = LocalPartitionIndex;
  if ( LocalPartitionIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 291, ASSERT_TYPE_ASSERT, "(partitionLocalIndex != SPATIAL_PARTITION_TRANSIENTPOPULATION_PARTITION_INDEX_NOT_FOUND)", "%s\n\tTrying to remove node to a SpatialPartition_TransientPopulation for partition index %i not found.\n", "partitionLocalIndex != SPATIAL_PARTITION_TRANSIENTPOPULATION_PARTITION_INDEX_NOT_FOUND", partitionIndex) )
    __debugbreak();
  if ( !population && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 265, ASSERT_TYPE_ASSERT, "(population)", (const char *)&queryFormat, "population") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 266, ASSERT_TYPE_ASSERT, "(targetNode)", (const char *)&queryFormat, "targetNode") )
    __debugbreak();
  if ( (unsigned int)v7 >= population->partitionCount )
  {
    LODWORD(v11) = population->partitionCount;
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( partitionLocalIndex ) < (unsigned)( population->partitionCount )", "partitionLocalIndex doesn't index population->partitionCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = &population->buckets[v7];
  v9 = &population->bucketTails[v7];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 149, ASSERT_TYPE_ASSERT, "(listTailNode)", (const char *)&queryFormat, "listTailNode") )
    __debugbreak();
  if ( SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_TransientPopulation>(population, node, v8, v9) )
  {
    --population->currentPopulation;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 274, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Node was not found to remove!") )
  {
    __debugbreak();
  }
}

/*
==============
SpatialPartition_TransientPopulation_RemoveFromList
==============
*/
bool SpatialPartition_TransientPopulation_RemoveFromList(SpatialPartition_TransientPopulation *population, SpatialPartition_Population_Node *targetNode, SpatialPartition_Population_Node *listHeadNode, SpatialPartition_Population_Node *listTailNode)
{
  if ( !listTailNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\spatialpartition\\spatialpartition_population.cpp", 149, ASSERT_TYPE_ASSERT, "(listTailNode)", (const char *)&queryFormat, "listTailNode") )
    __debugbreak();
  return SpatialPartition_Population_RemoveFromList_Common<SpatialPartition_TransientPopulation>(population, targetNode, listHeadNode, listTailNode);
}

