/*
==============
PrivateMapRotation_RemoveEntry
==============
*/

void __fastcall PrivateMapRotation_RemoveEntry(LobbyMapRotation *maps, const char *name)
{
  ?PrivateMapRotation_RemoveEntry@@YAXPEAULobbyMapRotation@@PEBD@Z(maps, name);
}

/*
==============
PrivateMapRotation_SetInitialMapSelection
==============
*/

void __fastcall PrivateMapRotation_SetInitialMapSelection(LobbyMapRotation *mapRot, unsigned int initialMapIndex)
{
  ?PrivateMapRotation_SetInitialMapSelection@@YAXPEAULobbyMapRotation@@I@Z(mapRot, initialMapIndex);
}

/*
==============
PrivateMapRotation_ClearAll
==============
*/

void __fastcall PrivateMapRotation_ClearAll(LobbyMapRotation *maps)
{
  ?PrivateMapRotation_ClearAll@@YAXPEAULobbyMapRotation@@@Z(maps);
}

/*
==============
PrivateMapRotation_ClearNextMapSelection
==============
*/

void __fastcall PrivateMapRotation_ClearNextMapSelection(LobbyMapRotation *mapRot)
{
  ?PrivateMapRotation_ClearNextMapSelection@@YAXPEAULobbyMapRotation@@@Z(mapRot);
}

/*
==============
PrivateMapRotation_AddNewEntry
==============
*/

int __fastcall PrivateMapRotation_AddNewEntry(LobbyMapRotation *maps, const char *name)
{
  return ?PrivateMapRotation_AddNewEntry@@YAHPEAULobbyMapRotation@@PEBD@Z(maps, name);
}

/*
==============
PrivateMapRotation_GetNextMapSelection
==============
*/

LobbyMapRotationEntry *__fastcall PrivateMapRotation_GetNextMapSelection(LobbyMapRotation *mapRot)
{
  return ?PrivateMapRotation_GetNextMapSelection@@YAPEAULobbyMapRotationEntry@@PEAULobbyMapRotation@@@Z(mapRot);
}

/*
==============
PrivateMapRotation_AddNewEntry
==============
*/
__int64 PrivateMapRotation_AddNewEntry(LobbyMapRotation *maps, const char *name)
{
  unsigned int entryCount; 
  unsigned int v5; 
  unsigned int i; 
  __int64 v7; 
  LobbyMapRotationEntry *v8; 
  const char *v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  __int64 v14; 
  __int64 v15; 

  if ( !maps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 129, ASSERT_TYPE_ASSERT, "(maps)", (const char *)&queryFormat, "maps") )
    __debugbreak();
  entryCount = maps->entryCount;
  v5 = 0;
  for ( i = 0; i < maps->entryCount; ++i )
  {
    v7 = 24i64;
    v8 = &maps->entry[i];
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( (LobbyMapRotation *)((char *)maps + 28 * i) == (LobbyMapRotation *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = (const char *)(name - (const char *)v8);
    while ( 1 )
    {
      v10 = v8->name[(_QWORD)v9];
      v11 = v7;
      v12 = v8->name[0];
      v8 = (LobbyMapRotationEntry *)((char *)v8 + 1);
      --v7;
      if ( !v11 )
        return i;
      if ( v10 != v12 )
        break;
      if ( !v10 )
        return i;
    }
    entryCount = maps->entryCount;
  }
  if ( entryCount >= 0x10 )
    return 0xFFFFi64;
  v14 = entryCount;
  Core_strcpy(maps->entry[v14].name, 0x18ui64, name);
  maps->entry[v14].weight = 1;
  if ( ++maps->entryCount == 1 )
  {
    maps->lastPlayedIndex = 0xFFFF;
    maps->nextIndex = entryCount;
    Dvar_SetString_Internal(DVARSTR_ui_mapname, maps->entry[v14].name);
    if ( maps->entryCount )
    {
      do
      {
        v15 = v5++;
        maps->entry[v15].weight = 1;
      }
      while ( v5 < maps->entryCount );
    }
  }
  return entryCount;
}

/*
==============
PrivateMapRotation_CalculateTotalWeight
==============
*/
__int64 PrivateMapRotation_CalculateTotalWeight(LobbyMapRotation *mapRot)
{
  unsigned int entryCount; 
  unsigned int v3; 
  unsigned int v4; 
  int *p_weight; 
  unsigned int v6; 
  __int64 v7; 

  while ( 1 )
  {
    if ( !mapRot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 25, ASSERT_TYPE_ASSERT, "(mapRot)", (const char *)&queryFormat, "mapRot") )
      __debugbreak();
    if ( !mapRot->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 26, ASSERT_TYPE_ASSERT, "(mapRot->entryCount > 0)", (const char *)&queryFormat, "mapRot->entryCount > 0") )
      __debugbreak();
    entryCount = mapRot->entryCount;
    v3 = 0;
    v4 = 0;
    if ( mapRot->entryCount )
    {
      p_weight = &mapRot->entry[0].weight;
      do
      {
        if ( v4 != mapRot->lastPlayedIndex || entryCount <= 1 )
          v3 += *p_weight;
        ++v4;
        p_weight += 7;
      }
      while ( v4 < entryCount );
      if ( v3 )
        break;
    }
    v6 = 0;
    if ( entryCount )
    {
      do
      {
        v7 = v6++;
        mapRot->entry[v7].weight = 1;
      }
      while ( v6 < mapRot->entryCount );
    }
  }
  return v3;
}

/*
==============
PrivateMapRotation_ClearAll
==============
*/
void PrivateMapRotation_ClearAll(LobbyMapRotation *maps)
{
  if ( !maps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 195, ASSERT_TYPE_ASSERT, "(maps)", (const char *)&queryFormat, "maps") )
    __debugbreak();
  maps->entryCount = 0;
  maps->nextIndex = 0xFFFF;
  maps->lastPlayedIndex = 0xFFFF;
}

/*
==============
PrivateMapRotation_ClearNextMapSelection
==============
*/
void PrivateMapRotation_ClearNextMapSelection(LobbyMapRotation *mapRot)
{
  __int64 nextIndex; 
  __int64 v3; 

  if ( !mapRot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 112, ASSERT_TYPE_ASSERT, "(mapRot)", (const char *)&queryFormat, "mapRot") )
    __debugbreak();
  nextIndex = mapRot->nextIndex;
  if ( (_DWORD)nextIndex != 0xFFFF )
  {
    if ( mapRot->entry[nextIndex].weight <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 116, ASSERT_TYPE_ASSERT, "(mapRot->entry[mapRot->nextIndex].weight > 0)", (const char *)&queryFormat, "mapRot->entry[mapRot->nextIndex].weight > 0") )
      __debugbreak();
    v3 = 28 * (mapRot->nextIndex + 1i64);
    --*(unsigned int *)((char *)&mapRot->entryCount + v3);
    mapRot->lastPlayedIndex = mapRot->nextIndex;
    mapRot->nextIndex = 0xFFFF;
  }
}

/*
==============
PrivateMapRotation_GetIndexByWeight
==============
*/
__int64 PrivateMapRotation_GetIndexByWeight(LobbyMapRotation *mapRot, int weight)
{
  unsigned int entryCount; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  int *p_weight; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  int v12; 
  __int64 v14; 
  int v15; 

  if ( !mapRot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 53, ASSERT_TYPE_ASSERT, "(mapRot)", (const char *)&queryFormat, "mapRot") )
    __debugbreak();
  if ( !mapRot->entryCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 54, ASSERT_TYPE_ASSERT, "(mapRot->entryCount > 0)", (const char *)&queryFormat, "mapRot->entryCount > 0") )
      __debugbreak();
    if ( !mapRot->entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 26, ASSERT_TYPE_ASSERT, "(mapRot->entryCount > 0)", (const char *)&queryFormat, "mapRot->entryCount > 0") )
      __debugbreak();
  }
  entryCount = mapRot->entryCount;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( !mapRot->entryCount )
    goto LABEL_17;
  p_weight = &mapRot->entry[0].weight;
  do
  {
    if ( v7 != mapRot->lastPlayedIndex || entryCount <= 1 )
      v6 += *p_weight;
    ++v7;
    p_weight += 7;
  }
  while ( v7 < entryCount );
  if ( !v6 )
  {
LABEL_17:
    v9 = 0;
    if ( entryCount )
    {
      do
      {
        v10 = v9++;
        mapRot->entry[v10].weight = 1;
      }
      while ( v9 < mapRot->entryCount );
    }
    v6 = PrivateMapRotation_CalculateTotalWeight(mapRot);
  }
  if ( weight >= v6 )
  {
    v15 = PrivateMapRotation_CalculateTotalWeight(mapRot);
    LODWORD(v14) = weight;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 57, ASSERT_TYPE_ASSERT, "(unsigned)( weight ) < (unsigned)( PrivateMapRotation_CalculateTotalWeight( mapRot ) )", "weight doesn't index PrivateMapRotation_CalculateTotalWeight( mapRot )\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v11 = mapRot->entryCount;
  v12 = weight + 1;
  if ( !mapRot->entryCount )
    return v11;
  while ( 1 )
  {
    if ( v5 != mapRot->lastPlayedIndex || v11 <= 1 )
    {
      v12 -= mapRot->entry[v5].weight;
      if ( v12 <= 0 )
        break;
    }
    if ( ++v5 >= v11 )
      return v11;
  }
  return v5;
}

/*
==============
PrivateMapRotation_GetNextMapSelection
==============
*/
LobbyMapRotationEntry *PrivateMapRotation_GetNextMapSelection(LobbyMapRotation *mapRot)
{
  unsigned int entryCount; 
  unsigned int nextIndex; 
  int v5; 
  int v6; 
  unsigned int IndexByWeight; 
  __int64 v8; 

  if ( !mapRot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 89, ASSERT_TYPE_ASSERT, "(mapRot)", (const char *)&queryFormat, "mapRot") )
    __debugbreak();
  entryCount = mapRot->entryCount;
  if ( !mapRot->entryCount )
    return 0i64;
  nextIndex = mapRot->nextIndex;
  if ( nextIndex == 0xFFFF || nextIndex >= entryCount )
  {
    if ( !entryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 95, ASSERT_TYPE_ASSERT, "(mapRot->entryCount > 0)", (const char *)&queryFormat, "mapRot->entryCount > 0") )
      __debugbreak();
    v5 = PrivateMapRotation_CalculateTotalWeight(mapRot);
    if ( v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 97, ASSERT_TYPE_ASSERT, "(totalweight > 0)", (const char *)&queryFormat, "totalweight > 0") )
      __debugbreak();
    v6 = I_irand(0, v5);
    IndexByWeight = PrivateMapRotation_GetIndexByWeight(mapRot, v6);
    mapRot->nextIndex = IndexByWeight;
    if ( IndexByWeight >= mapRot->entryCount )
    {
      LODWORD(v8) = IndexByWeight;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( mapRot->nextIndex ) < (unsigned)( mapRot->entryCount )", "mapRot->nextIndex doesn't index mapRot->entryCount\n\t%i not in [0, %i)", v8, mapRot->entryCount) )
        __debugbreak();
    }
  }
  Dvar_SetString_Internal(DVARSTR_ui_mapname, mapRot->entry[mapRot->nextIndex].name);
  return &mapRot->entry[mapRot->nextIndex];
}

/*
==============
PrivateMapRotation_RemoveEntry
==============
*/
void PrivateMapRotation_RemoveEntry(LobbyMapRotation *maps, const char *name)
{
  unsigned int v4; 
  __int64 v5; 
  LobbyMapRotationEntry *v6; 
  const char *v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  unsigned int entryCount; 
  __int64 v12; 
  LobbyMapRotationEntry *v13; 
  LobbyMapRotationEntry *v14; 
  unsigned int nextIndex; 
  int v16; 
  int v17; 
  unsigned int IndexByWeight; 
  __int64 v19; 

  if ( !maps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 158, ASSERT_TYPE_ASSERT, "(maps)", (const char *)&queryFormat, "maps") )
    __debugbreak();
  v4 = 0;
  if ( maps->entryCount )
  {
LABEL_5:
    v5 = 24i64;
    v6 = &maps->entry[v4];
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( (LobbyMapRotation *)((char *)maps + 28 * v4) == (LobbyMapRotation *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = (const char *)(name - (const char *)v6);
    do
    {
      v8 = v6->name[(_QWORD)v7];
      v9 = v5;
      v10 = v6->name[0];
      v6 = (LobbyMapRotationEntry *)((char *)v6 + 1);
      --v5;
      if ( !v9 )
        break;
      if ( v8 != v10 )
      {
        if ( ++v4 < maps->entryCount )
          goto LABEL_5;
        break;
      }
    }
    while ( v8 );
  }
  if ( v4 != maps->entryCount )
  {
    entryCount = maps->entryCount - 1;
    maps->entryCount = entryCount;
    if ( entryCount != v4 )
    {
      if ( ((28 * (entryCount - v4)) & 0x80000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 174, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(( maps->entryCount - mapIndex ) * sizeof( maps->entry[0] )))", "%s\n\tMemmove has negative length. (( maps->entryCount - mapIndex ) * sizeof( maps->entry[0] ))", "0 <= static_cast<int>(( maps->entryCount - mapIndex ) * sizeof( maps->entry[0] ))") )
        __debugbreak();
      v12 = v4 + 1;
      v13 = &maps->entry[v12];
      if ( (v13 < maps->entry || &maps->entry[v12 + maps->entryCount - v4] > (LobbyMapRotationEntry *)&maps->lastPlayedIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 174, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&maps->entry[mapIndex + 1])) >= reinterpret_cast<const byte*>((maps->entry)) && reinterpret_cast<const byte*>((&maps->entry[mapIndex + 1]))+((( maps->entryCount - mapIndex ) * sizeof( maps->entry[0] ))) <= reinterpret_cast<const byte*>((maps->entry))+((sizeof( maps->entry ))))", "%s\n\tMemmove from (&maps->entry[mapIndex + 1]) exceeded bounds of maps->entry", "reinterpret_cast<const byte*>((&maps->entry[mapIndex + 1])) >= reinterpret_cast<const byte*>((maps->entry)) && reinterpret_cast<const byte*>((&maps->entry[mapIndex + 1]))+((( maps->entryCount - mapIndex ) * sizeof( maps->entry[0] ))) <= reinterpret_cast<const byte*>((maps->entry))+((sizeof( maps->entry )))") )
        __debugbreak();
      v14 = &maps->entry[v4];
      if ( (v14 < maps->entry || &maps->entry[v4 + (unsigned __int64)(maps->entryCount - v4)] > (LobbyMapRotationEntry *)&maps->lastPlayedIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 174, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((&maps->entry[mapIndex])) >= reinterpret_cast<const byte*>((maps->entry)) && reinterpret_cast<const byte*>((&maps->entry[mapIndex]))+((( maps->entryCount - mapIndex ) * sizeof( maps->entry[0] ))) <= reinterpret_cast<const byte*>((maps->entry))+((sizeof( maps->entry ))))", "%s\n\tMemmove to (&maps->entry[mapIndex]) exceeded bounds of maps->entry", "reinterpret_cast<const byte*>((&maps->entry[mapIndex])) >= reinterpret_cast<const byte*>((maps->entry)) && reinterpret_cast<const byte*>((&maps->entry[mapIndex]))+((( maps->entryCount - mapIndex ) * sizeof( maps->entry[0] ))) <= reinterpret_cast<const byte*>((maps->entry))+((sizeof( maps->entry )))") )
        __debugbreak();
      memmove_0(v14, v13, 28i64 * (maps->entryCount - v4));
      entryCount = maps->entryCount;
    }
    if ( entryCount )
    {
      nextIndex = maps->nextIndex;
      if ( nextIndex <= v4 )
      {
        if ( nextIndex == v4 )
        {
          if ( nextIndex == 0xFFFF || nextIndex >= entryCount )
          {
            v16 = PrivateMapRotation_CalculateTotalWeight(maps);
            if ( v16 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 97, ASSERT_TYPE_ASSERT, "(totalweight > 0)", (const char *)&queryFormat, "totalweight > 0") )
              __debugbreak();
            v17 = I_irand(0, v16);
            IndexByWeight = PrivateMapRotation_GetIndexByWeight(maps, v17);
            maps->nextIndex = IndexByWeight;
            if ( IndexByWeight >= maps->entryCount )
            {
              LODWORD(v19) = IndexByWeight;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( mapRot->nextIndex ) < (unsigned)( mapRot->entryCount )", "mapRot->nextIndex doesn't index mapRot->entryCount\n\t%i not in [0, %i)", v19, maps->entryCount) )
                __debugbreak();
            }
          }
          Dvar_SetString_Internal(DVARSTR_ui_mapname, maps->entry[maps->nextIndex].name);
        }
      }
      else
      {
        maps->nextIndex = nextIndex - 1;
      }
    }
    else
    {
      maps->entryCount = 0;
      maps->nextIndex = 0xFFFF;
      maps->lastPlayedIndex = 0xFFFF;
    }
    if ( maps->lastPlayedIndex >= v4 )
      maps->lastPlayedIndex = 0xFFFF;
  }
}

/*
==============
PrivateMapRotation_SetInitialMapSelection
==============
*/
void PrivateMapRotation_SetInitialMapSelection(LobbyMapRotation *mapRot, unsigned int initialMapIndex)
{
  __int64 v2; 
  unsigned int i; 
  __int64 v5; 

  v2 = initialMapIndex;
  if ( !mapRot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_maprotation.cpp", 78, ASSERT_TYPE_ASSERT, "(mapRot)", (const char *)&queryFormat, "mapRot") )
    __debugbreak();
  mapRot->lastPlayedIndex = 0xFFFF;
  mapRot->nextIndex = v2;
  Dvar_SetString_Internal(DVARSTR_ui_mapname, mapRot->entry[v2].name);
  for ( i = 0; i < mapRot->entryCount; mapRot->entry[v5].weight = 1 )
    v5 = i++;
}

