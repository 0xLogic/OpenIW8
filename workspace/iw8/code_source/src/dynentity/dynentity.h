/*
==============
DynEnt_GetDef
==============
*/

const DynEntityDef *__fastcall DynEnt_GetDef(DynEntityListId listId, unsigned int localId, DynEntityBasis basis)
{
  return ?DynEnt_GetDef@@YAPEBUDynEntityDef@@W4DynEntityListId@@IW4DynEntityBasis@@@Z(listId, localId, basis);
}

/*
==============
DynEnt_GetEntityCount
==============
*/

unsigned int __fastcall DynEnt_GetEntityCount(const DynEntityListId listId, const DynEntityBasis basis)
{
  return ?DynEnt_GetEntityCount@@YAIW4DynEntityListId@@W4DynEntityBasis@@@Z(listId, basis);
}

/*
==============
DynEnt_GetNumPosePartsFromDef
==============
*/

unsigned __int8 __fastcall DynEnt_GetNumPosePartsFromDef(unsigned int dynEntId, DynEntityBasis basis)
{
  return ?DynEnt_GetNumPosePartsFromDef@@YAEIW4DynEntityBasis@@@Z(dynEntId, basis);
}

/*
==============
DynEntDef_IsSpatial
==============
*/

bool __fastcall DynEntDef_IsSpatial(const DynEntityDef *dynEntDef)
{
  return ?DynEntDef_IsSpatial@@YA_NPEBUDynEntityDef@@@Z(dynEntDef);
}

/*
==============
DynEnt_GetDynEntityList
==============
*/

DynEntityList *__fastcall DynEnt_GetDynEntityList(DynEntityListId index)
{
  return ?DynEnt_GetDynEntityList@@YAPEAUDynEntityList@@W4DynEntityListId@@@Z(index);
}

/*
==============
DynEnt_ListAndLocalIdFromId
==============
*/

void __fastcall DynEnt_ListAndLocalIdFromId(const unsigned int dynEntId, DynEntityListId *listIndexOut, unsigned int *localIdOut)
{
  ?DynEnt_ListAndLocalIdFromId@@YAXIPEAW4DynEntityListId@@PEAI@Z(dynEntId, listIndexOut, localIdOut);
}

/*
==============
DynEnt_IdFromListAndLocalId
==============
*/

unsigned int __fastcall DynEnt_IdFromListAndLocalId(const DynEntityListId listIndex, const unsigned int localId)
{
  return ?DynEnt_IdFromListAndLocalId@@YAIW4DynEntityListId@@I@Z(listIndex, localId);
}

/*
==============
DynEnt_GetId
==============
*/

unsigned int __fastcall DynEnt_GetId(const DynEntityDef *dynEntDef, const DynEntityBasis basis)
{
  return ?DynEnt_GetId@@YAIPEBUDynEntityDef@@W4DynEntityBasis@@@Z(dynEntDef, basis);
}

/*
==============
DynEnt_GetDef
==============
*/

const DynEntityDef *__fastcall DynEnt_GetDef(unsigned int dynEntId, DynEntityBasis basis)
{
  return ?DynEnt_GetDef@@YAPEBUDynEntityDef@@IW4DynEntityBasis@@@Z(dynEntId, basis);
}

/*
==============
DynEnt_GetDef
==============
*/
DynEntityDef *DynEnt_GetDef(unsigned int dynEntId, DynEntityBasis basis)
{
  __int64 v2; 
  unsigned int v3; 
  DynEntityList *DynEntityList; 
  __int64 v7; 
  __int64 v8; 

  v2 = dynEntId & 0x7FFFF;
  v3 = dynEntId >> 19;
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", (unsigned __int8)basis, 2) )
    __debugbreak();
  DynEntityList = DynEnt_GetDynEntityList((DynEntityListId)v3);
  if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
    __debugbreak();
  if ( (unsigned int)v2 >= DynEntityList->dynEntCount[(unsigned __int8)basis] )
  {
    LODWORD(v8) = DynEntityList->dynEntCount[(unsigned __int8)basis];
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return &DynEntityList->dynEntDefList[(unsigned __int8)basis][v2];
}

/*
==============
DynEnt_GetDynEntityList
==============
*/
DynEntityList *DynEnt_GetDynEntityList(DynEntityListId index)
{
  DynEntityList *result; 
  int v3; 
  int v4; 

  if ( (unsigned __int16)index >= DEFAULT_DYNENTITY_LIST_ID )
  {
    v4 = 1536;
    v3 = (unsigned __int16)index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 117, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "index doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  result = &g_dynEntityLists[(unsigned __int64)(unsigned __int16)index];
  if ( result->index == DEFAULT_DYNENTITY_LIST_ID )
    return 0i64;
  return result;
}

/*
==============
DynEnt_GetDef
==============
*/
DynEntityDef *DynEnt_GetDef(DynEntityListId listId, unsigned int localId, DynEntityBasis basis)
{
  __int64 v3; 
  DynEntityList *DynEntityList; 
  __int64 v8; 
  __int64 v9; 

  v3 = localId;
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", (unsigned __int8)basis, 2) )
    __debugbreak();
  DynEntityList = DynEnt_GetDynEntityList(listId);
  if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 238, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
    __debugbreak();
  if ( (unsigned int)v3 >= DynEntityList->dynEntCount[(unsigned __int8)basis] )
  {
    LODWORD(v9) = DynEntityList->dynEntCount[(unsigned __int8)basis];
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  return &DynEntityList->dynEntDefList[(unsigned __int8)basis][v3];
}

/*
==============
DynEnt_GetEntityCount
==============
*/
DynEntityList *DynEnt_GetEntityCount(const DynEntityListId listId, const DynEntityBasis basis)
{
  DynEntityList *result; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  if ( (unsigned __int16)listId >= DEFAULT_DYNENTITY_LIST_ID )
  {
    v8 = 1536;
    v6 = (unsigned __int16)listId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 161, ASSERT_TYPE_ASSERT, "(unsigned)( listId ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listId doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = (unsigned __int8)basis;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 162, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  result = DynEnt_GetDynEntityList(listId);
  if ( result )
    return (DynEntityList *)result->dynEntCount[(unsigned __int8)basis];
  return result;
}

/*
==============
DynEnt_GetId
==============
*/
__int64 DynEnt_GetId(const DynEntityDef *dynEntDef, const DynEntityBasis basis)
{
  DynEntityListId *p_dynEntityListId; 
  DynEntityList *DynEntityList; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  DynEntityListId v9; 
  __int64 v11; 
  __int64 v12; 

  if ( (unsigned __int8)basis >= DYNENT_BASIS_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 214, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", (unsigned __int8)basis, 2) )
    __debugbreak();
  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 215, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  p_dynEntityListId = &dynEntDef->dynEntityListId;
  DynEntityList = DynEnt_GetDynEntityList(dynEntDef->dynEntityListId);
  if ( !DynEntityList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 217, ASSERT_TYPE_ASSERT, "(dynEntList)", (const char *)&queryFormat, "dynEntList") )
    __debugbreak();
  v6 = (unsigned __int8)basis + 3i64;
  if ( (unsigned __int64)dynEntDef < *((_QWORD *)&DynEntityList->name + v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 218, ASSERT_TYPE_ASSERT, "(dynEntDef >= dynEntList->dynEntDefList[basis])", (const char *)&queryFormat, "dynEntDef >= dynEntList->dynEntDefList[basis]") )
    __debugbreak();
  v7 = (__int64)((unsigned __int128)(((__int64)dynEntDef - *((_QWORD *)&DynEntityList->name + v6)) * (__int128)0x6666666666666667i64) >> 64) >> 5;
  v8 = (v7 >> 63) + v7;
  if ( (v8 < 0 || (unsigned __int64)v8 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v8, "signed", v8) )
    __debugbreak();
  if ( (unsigned int)v8 >= *((_DWORD *)&DynEntityList->name + v6) )
  {
    LODWORD(v12) = *((_DWORD *)&DynEntityList->name + v6);
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 220, ASSERT_TYPE_SANITY, "(unsigned)( localId ) < (unsigned)( dynEntList->dynEntCount[basis] )", "localId doesn't index dynEntList->dynEntCount[basis]\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v9 = *p_dynEntityListId;
  if ( *p_dynEntityListId >= DEFAULT_DYNENTITY_LIST_ID )
  {
    LODWORD(v12) = 1536;
    LODWORD(v11) = (unsigned __int16)v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= 0x7FFFF )
  {
    LODWORD(v12) = 0x7FFFF;
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  return (unsigned int)v8 | ((unsigned __int16)v9 << 19);
}

/*
==============
DynEnt_ListAndLocalIdFromId
==============
*/
void DynEnt_ListAndLocalIdFromId(const unsigned int dynEntId, DynEntityListId *listIndexOut, unsigned int *localIdOut)
{
  if ( !listIndexOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 67, ASSERT_TYPE_ASSERT, "(listIndexOut)", (const char *)&queryFormat, "listIndexOut") )
    __debugbreak();
  if ( !localIdOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 68, ASSERT_TYPE_ASSERT, "(localIdOut)", (const char *)&queryFormat, "localIdOut") )
    __debugbreak();
  *localIdOut = dynEntId & 0x7FFFF;
  *listIndexOut = truncate_cast<enum DynEntityListId,unsigned int>(dynEntId >> 19);
}

/*
==============
DynEntDef_IsSpatial
==============
*/
bool DynEntDef_IsSpatial(const DynEntityDef *dynEntDef)
{
  DynEntitySpatialActivationMode priority; 

  if ( !dynEntDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 380, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  priority = dynEntDef->priority;
  return priority != DYNENT_PRIORITY_LEVEL_ALWAYS_ACTIVE && priority != DYNENT_PRIORITY_NO_SPATIAL_DEACTIVATABLE;
}

/*
==============
DynEnt_GetNumPosePartsFromDef
==============
*/
unsigned __int8 DynEnt_GetNumPosePartsFromDef(unsigned int dynEntId, DynEntityBasis basis)
{
  unsigned int v3; 
  DynEntityListId v4; 
  const DynEntityDef *Def; 

  v3 = dynEntId & 0x7FFFF;
  v4 = truncate_cast<enum DynEntityListId,unsigned int>(dynEntId >> 19);
  Def = DynEnt_GetDef(v4, v3, basis);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 282, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( (unsigned __int8)(Def->type - 3) > 1u && (Def->basis || Def->noPhysics) )
    return 1;
  else
    return Def->scriptableMaxPartCount;
}

/*
==============
DynEnt_IdFromListAndLocalId
==============
*/
__int64 DynEnt_IdFromListAndLocalId(const DynEntityListId listIndex, const unsigned int localId)
{
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  if ( (unsigned __int16)listIndex >= DEFAULT_DYNENTITY_LIST_ID )
  {
    v8 = 1536;
    v6 = (unsigned __int16)listIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( MAX_MAP_TRANSIENT_ZONES )", "listIndex doesn't index MAX_DYNENTITY_LIST_DEFS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( localId >= 0x7FFFF )
  {
    LODWORD(v7) = 0x7FFFF;
    LODWORD(v5) = localId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity.h", 59, ASSERT_TYPE_ASSERT, "(unsigned)( localId ) < (unsigned)( ((1 << 19) -1) )", "localId doesn't index DYNENTS_PER_DYNENTITY_LIST_MAX_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return localId | ((unsigned __int16)listIndex << 19);
}

