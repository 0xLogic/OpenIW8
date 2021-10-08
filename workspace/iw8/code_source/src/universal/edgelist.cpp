/*
==============
MapEdgeList_Add
==============
*/

void __fastcall MapEdgeList_Add(MapEdgeList *mapEdgeList)
{
  ?MapEdgeList_Add@@YAXPEAUMapEdgeList@@@Z(mapEdgeList);
}

/*
==============
MapEdgeList_MakeEdgeIndex
==============
*/

unsigned int __fastcall MapEdgeList_MakeEdgeIndex(unsigned int listIndex, unsigned int entryIndex)
{
  return ?MapEdgeList_MakeEdgeIndex@@YAIII@Z(listIndex, entryIndex);
}

/*
==============
MapEdgeList_GetEntryIndex
==============
*/

unsigned int __fastcall MapEdgeList_GetEntryIndex(unsigned int edgeIndex)
{
  return ?MapEdgeList_GetEntryIndex@@YAII@Z(edgeIndex);
}

/*
==============
MapEdgeList_TryLookupSegment
==============
*/

const float4 (*__fastcall MapEdgeList_TryLookupSegment(unsigned int edgeIndex))[2]
{
  return ?MapEdgeList_TryLookupSegment@@YAPEAY01$$CBUfloat4@@I@Z(edgeIndex);
}

/*
==============
MapEdgeList_LookupSegment
==============
*/

const float4 (*__fastcall MapEdgeList_LookupSegment(unsigned int edgeIndex))[2]
{
  return ?MapEdgeList_LookupSegment@@YAAEAY01$$CBUfloat4@@I@Z(edgeIndex);
}

/*
==============
MapEdgeList_GetListIndex
==============
*/

unsigned int __fastcall MapEdgeList_GetListIndex(unsigned int edgeIndex)
{
  return ?MapEdgeList_GetListIndex@@YAII@Z(edgeIndex);
}

/*
==============
MapEdgeList_Remove
==============
*/

void __fastcall MapEdgeList_Remove(MapEdgeList *mapEdgeList)
{
  ?MapEdgeList_Remove@@YAXPEAUMapEdgeList@@@Z(mapEdgeList);
}

/*
==============
MapEdgeList_LookupMetadata
==============
*/

const FlaggedEdgeMetadata *__fastcall MapEdgeList_LookupMetadata(unsigned int edgeIndex)
{
  return ?MapEdgeList_LookupMetadata@@YAAEBUFlaggedEdgeMetadata@@I@Z(edgeIndex);
}

/*
==============
MapEdgeList_TryLookupMetadata
==============
*/

const FlaggedEdgeMetadata *__fastcall MapEdgeList_TryLookupMetadata(unsigned int edgeIndex)
{
  return ?MapEdgeList_TryLookupMetadata@@YAPEBUFlaggedEdgeMetadata@@I@Z(edgeIndex);
}

/*
==============
MapEdgeList_GetList
==============
*/

const MapEdgeList *__fastcall MapEdgeList_GetList(unsigned int edgeIndex)
{
  return ?MapEdgeList_GetList@@YAPEBUMapEdgeList@@I@Z(edgeIndex);
}

/*
==============
MapEdgeList_IsLoaded
==============
*/

bool __fastcall MapEdgeList_IsLoaded(unsigned int edgeIndex)
{
  return ?MapEdgeList_IsLoaded@@YA_NI@Z(edgeIndex);
}

/*
==============
MapEdgeList_Add
==============
*/
void MapEdgeList_Add(MapEdgeList *mapEdgeList)
{
  if ( !mapEdgeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 8, ASSERT_TYPE_ASSERT, "(mapEdgeList)", (const char *)&queryFormat, "mapEdgeList") )
    __debugbreak();
  Com_Printf(16, "Adding MapEdgeList %s for transient %u\n", mapEdgeList->name, mapEdgeList->transientIndex);
}

/*
==============
MapEdgeList_GetEntryIndex
==============
*/
__int64 MapEdgeList_GetEntryIndex(unsigned int edgeIndex)
{
  return edgeIndex & 0xFFFFF;
}

/*
==============
MapEdgeList_GetList
==============
*/
MapEdgeList *MapEdgeList_GetList(unsigned int edgeIndex)
{
  __int64 v1; 
  MapEdgeList *result; 
  __int64 v3; 
  unsigned int numEdgeLists; 

  v1 = edgeIndex >> 20;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 36, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  if ( (unsigned int)v1 >= cm.mapEnts->numEdgeLists )
  {
    numEdgeLists = cm.mapEnts->numEdgeLists;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 37, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( cm.mapEnts->numEdgeLists )", "listIndex doesn't index cm.mapEnts->numEdgeLists\n\t%i not in [0, %i)", v3, numEdgeLists) )
      __debugbreak();
  }
  result = cm.mapEnts->edgeLists[v1];
  if ( !result || !result->valid )
    return 0i64;
  return result;
}

/*
==============
MapEdgeList_GetListIndex
==============
*/
__int64 MapEdgeList_GetListIndex(unsigned int edgeIndex)
{
  return edgeIndex >> 20;
}

/*
==============
MapEdgeList_IsLoaded
==============
*/
bool MapEdgeList_IsLoaded(unsigned int edgeIndex)
{
  return MapEdgeList_GetList(edgeIndex) != NULL;
}

/*
==============
MapEdgeList_LookupMetadata
==============
*/
FlaggedEdgeMetadata *MapEdgeList_LookupMetadata(unsigned int edgeIndex)
{
  const MapEdgeList *List; 
  const MapEdgeList *v3; 
  __int64 v4; 
  unsigned int numEdges; 
  FlaggedEdgeMetadata *edgeMetadata; 
  FlaggedEdgeMetadata *v7; 
  __int64 v9; 
  __int64 v10; 

  List = MapEdgeList_GetList(edgeIndex);
  v3 = List;
  v4 = edgeIndex & 0xFFFFF;
  if ( List )
  {
    numEdges = List->numEdges;
    if ( (unsigned int)v4 >= numEdges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( subIndex ) < (unsigned)( mapEdgeList->numEdges )", "subIndex doesn't index mapEdgeList->numEdges\n\t%i not in [0, %i)", edgeIndex & 0xFFFFF, numEdges) )
      __debugbreak();
    edgeMetadata = v3->edgeMetadata;
    v7 = &edgeMetadata[v4];
    if ( v7 )
      return &edgeMetadata[v4];
  }
  else
  {
    v7 = NULL;
  }
  LODWORD(v10) = edgeIndex & 0xFFFFF;
  LODWORD(v9) = edgeIndex >> 20;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 92, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Edge (%u, %u) not loaded", v9, v10) )
    __debugbreak();
  return v7;
}

/*
==============
MapEdgeList_LookupSegment
==============
*/
const float4 (*MapEdgeList_LookupSegment(unsigned int edgeIndex))[2]
{
  const MapEdgeList *List; 
  const MapEdgeList *v3; 
  unsigned int v4; 
  unsigned int numEdges; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  List = MapEdgeList_GetList(edgeIndex);
  v3 = List;
  v4 = edgeIndex & 0xFFFFF;
  if ( !List )
  {
    v6 = 0i64;
LABEL_8:
    LODWORD(v9) = edgeIndex & 0xFFFFF;
    LODWORD(v8) = edgeIndex >> 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 103, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Edge (%u, %u) not loaded", v8, v9) )
      __debugbreak();
    return (const float4 (*)[2])v6;
  }
  numEdges = List->numEdges;
  if ( v4 >= numEdges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 79, ASSERT_TYPE_ASSERT, "(unsigned)( subIndex ) < (unsigned)( mapEdgeList->numEdges )", "subIndex doesn't index mapEdgeList->numEdges\n\t%i not in [0, %i)", edgeIndex & 0xFFFFF, numEdges) )
    __debugbreak();
  v6 = (__int64)v3->edges[v4];
  if ( !v6 )
    goto LABEL_8;
  return (const float4 (*)[2])v6;
}

/*
==============
MapEdgeList_MakeEdgeIndex
==============
*/
__int64 MapEdgeList_MakeEdgeIndex(unsigned int listIndex, unsigned int entryIndex)
{
  return entryIndex | (listIndex << 20);
}

/*
==============
MapEdgeList_Remove
==============
*/
void MapEdgeList_Remove(MapEdgeList *mapEdgeList)
{
  if ( !mapEdgeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 15, ASSERT_TYPE_ASSERT, "(mapEdgeList)", (const char *)&queryFormat, "mapEdgeList") )
    __debugbreak();
  Com_Printf(16, "Removing MapEdgeList %s for transient %u\n", mapEdgeList->name, mapEdgeList->transientIndex);
}

/*
==============
MapEdgeList_TryLookupMetadata
==============
*/
const MapEdgeList *MapEdgeList_TryLookupMetadata(unsigned int edgeIndex)
{
  const MapEdgeList *result; 
  const FlaggedEdgeMetadata *v3; 
  float v4; 
  __int64 v5; 

  result = MapEdgeList_GetList(edgeIndex);
  v3 = (const FlaggedEdgeMetadata *)result;
  if ( result )
  {
    v4 = *(float *)&result->numEdges;
    v5 = edgeIndex & 0xFFFFF;
    if ( (unsigned int)v5 >= LODWORD(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( subIndex ) < (unsigned)( mapEdgeList->numEdges )", "subIndex doesn't index mapEdgeList->numEdges\n\t%i not in [0, %i)", v5, v4) )
      __debugbreak();
    return (const MapEdgeList *)(*(_QWORD *)&v3[9] + 8 * v5);
  }
  return result;
}

/*
==============
MapEdgeList_TryLookupSegment
==============
*/
const float4 (*MapEdgeList_TryLookupSegment(unsigned int edgeIndex))[2]
{
  const float4 (*result)[2]; 
  const float4 (*v3)[2]; 
  unsigned int v4; 
  unsigned int v5; 

  result = (const float4 (*)[2])MapEdgeList_GetList(edgeIndex);
  v3 = result;
  if ( result )
  {
    v4 = (*result)[3].v.m128_u32[2];
    v5 = edgeIndex & 0xFFFFF;
    if ( v5 >= v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\edgelist.cpp", 79, ASSERT_TYPE_ASSERT, "(unsigned)( subIndex ) < (unsigned)( mapEdgeList->numEdges )", "subIndex doesn't index mapEdgeList->numEdges\n\t%i not in [0, %i)", v5, v4) )
      __debugbreak();
    return (const float4 (*)[2])((*v3)[4].v.m128_u64[0] + 32i64 * v5);
  }
  return result;
}

