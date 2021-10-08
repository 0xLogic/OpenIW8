/*
==============
DDL::DDL_Lookup_MoveNextWithPath
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveNextWithPath(DDLState *state, char *path, int pathLength)
{
  return ?DDL_Lookup_MoveNextWithPath@DDL@@YA_NPEAUDDLState@@PEADH@Z(state, path, pathLength);
}

/*
==============
DDL::DDL_Lookup_IsArrayRoot
==============
*/

bool __fastcall DDL::DDL_Lookup_IsArrayRoot(const DDLState *state)
{
  return ?DDL_Lookup_IsArrayRoot@DDL@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL::DDL_Lookup_MoveToStart
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveToStart(DDLState *resultState, DDLDef *ddl, bool createPath)
{
  return ?DDL_Lookup_MoveToStart@DDL@@YA_NPEAUDDLState@@PEAUDDLDef@@_N@Z(resultState, ddl, createPath);
}

/*
==============
DDL::DDL_Lookup_IsRestrictedNameHash
==============
*/

bool __fastcall DDL::DDL_Lookup_IsRestrictedNameHash(unsigned int nameHash)
{
  return ?DDL_Lookup_IsRestrictedNameHash@DDL@@YA_NI@Z(nameHash);
}

/*
==============
DDL::DDL_Lookup_MoveToNameHash
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveToNameHash(const DDLState *fromState, DDLState *toState, const char *name, unsigned int nameHash, bool suppressErrors)
{
  return ?DDL_Lookup_MoveToNameHash@DDL@@YA_NPEBUDDLState@@PEAU2@PEBDI_N@Z(fromState, toState, name, nameHash, suppressErrors);
}

/*
==============
DDL::DDL_Lookup_GetEnumString
==============
*/

const char *__fastcall DDL::DDL_Lookup_GetEnumString(const DDLState *state, int enumValue)
{
  return ?DDL_Lookup_GetEnumString@DDL@@YAPEBDPEBUDDLState@@H@Z(state, enumValue);
}

/*
==============
DDL::DDL_Member_IsArray
==============
*/

bool __fastcall DDL::DDL_Member_IsArray(const DDLMember *member)
{
  return ?DDL_Member_IsArray@DDL@@YA_NPEBUDDLMember@@@Z(member);
}

/*
==============
DDL::DDL_Lookup_MoveToStartWithPath
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveToStartWithPath(DDLState *resultState, DDLDef *ddl, char *path, int pathLength)
{
  return ?DDL_Lookup_MoveToStartWithPath@DDL@@YA_NPEAUDDLState@@PEAUDDLDef@@PEADH@Z(resultState, ddl, path, pathLength);
}

/*
==============
DDL::DDL_Lookup_IsArrayMember
==============
*/

bool __fastcall DDL::DDL_Lookup_IsArrayMember(const DDLState *state)
{
  return ?DDL_Lookup_IsArrayMember@DDL@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL::DDL_Lookup_MoveToOffset
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveToOffset(DDLState *resultState, DDLDef *ddl, int offset)
{
  return ?DDL_Lookup_MoveToOffset@DDL@@YA_NPEAUDDLState@@PEAUDDLDef@@H@Z(resultState, ddl, offset);
}

/*
==============
DDL::DDL_Lookup_MoveToNextMember
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveToNextMember(DDLState *state, bool createPath, bool skipPad)
{
  return ?DDL_Lookup_MoveToNextMember@DDL@@YA_NPEAUDDLState@@_N1@Z(state, createPath, skipPad);
}

/*
==============
DDL::DDL_Lookup_IterateArray
==============
*/

bool __fastcall DDL::DDL_Lookup_IterateArray(DDLState *state)
{
  return ?DDL_Lookup_IterateArray@DDL@@YA_NPEAUDDLState@@@Z(state);
}

/*
==============
DDL::DDL_Lookup_MoveToIndex
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveToIndex(const DDLState *fromState, DDLState *toState, int index, bool suppressErrors)
{
  return ?DDL_Lookup_MoveToIndex@DDL@@YA_NPEBUDDLState@@PEAU2@H_N@Z(fromState, toState, index, suppressErrors);
}

/*
==============
DDL::DDL_Lookup_FindEnumIndexByHash
==============
*/

int __fastcall DDL::DDL_Lookup_FindEnumIndexByHash(const DDLDef *def, int enumIndex, unsigned int hashValue)
{
  return ?DDL_Lookup_FindEnumIndexByHash@DDL@@YAHPEBUDDLDef@@HI@Z(def, enumIndex, hashValue);
}

/*
==============
DDL::DDL_Lookup_IsRestrictedName
==============
*/

bool __fastcall DDL::DDL_Lookup_IsRestrictedName(const char *name)
{
  return ?DDL_Lookup_IsRestrictedName@DDL@@YA_NPEBD@Z(name);
}

/*
==============
DDL::DDL_Member_IsEnumArray
==============
*/

bool __fastcall DDL::DDL_Member_IsEnumArray(const DDLMember *member)
{
  return ?DDL_Member_IsEnumArray@DDL@@YA_NPEBUDDLMember@@@Z(member);
}

/*
==============
DDL::DDL_Lookup_MoveToName
==============
*/

bool __fastcall DDL::DDL_Lookup_MoveToName(const DDLState *fromState, DDLState *toState, const char *name, bool suppressErrors)
{
  return ?DDL_Lookup_MoveToName@DDL@@YA_NPEBUDDLState@@PEAU2@PEBD_N@Z(fromState, toState, name, suppressErrors);
}

/*
==============
DDL::DDL_Lookup_IsEnumArrayMember
==============
*/

bool __fastcall DDL::DDL_Lookup_IsEnumArrayMember(const DDLState *state)
{
  return ?DDL_Lookup_IsEnumArrayMember@DDL@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL::DDL_Lookup_IsEnumArrayRoot
==============
*/

bool __fastcall DDL::DDL_Lookup_IsEnumArrayRoot(const DDLState *state)
{
  return ?DDL_Lookup_IsEnumArrayRoot@DDL@@YA_NPEBUDDLState@@@Z(state);
}

/*
==============
DDL::MoveToNextIndex
==============
*/

bool __fastcall DDL::MoveToNextIndex(DDLState *state)
{
  return ?MoveToNextIndex@DDL@@YA_NPEAUDDLState@@@Z(state);
}

/*
==============
DDL::DDL_Lookup_FindEnumIndexByHash
==============
*/
__int64 DDL::DDL_Lookup_FindEnumIndexByHash(const DDLDef *def, int enumIndex, unsigned int hashValue)
{
  int v3; 
  __int64 v4; 
  DDLEnum *enumList; 
  int v6; 
  DDLHash *list; 
  int v8; 

  v3 = 0;
  v4 = enumIndex;
  enumList = def->enumList;
  v6 = enumList[v4].hashTable.count - 1;
  if ( v6 < 0 )
    return 0xFFFFFFFFi64;
  list = enumList[v4].hashTable.list;
  while ( 1 )
  {
    v8 = (v6 + v3) / 2;
    if ( hashValue <= list[v8].hash )
      break;
    v3 = v8 + 1;
LABEL_7:
    if ( v3 > v6 )
      return 0xFFFFFFFFi64;
  }
  if ( hashValue < list[v8].hash )
  {
    v6 = v8 - 1;
    goto LABEL_7;
  }
  return (unsigned int)list[v8].index;
}

/*
==============
DDL::DDL_Lookup_GetEnumString
==============
*/
const char *DDL::DDL_Lookup_GetEnumString(const DDLState *state, int enumValue)
{
  __int64 externalIndex; 
  DDLEnum *v3; 

  externalIndex = state->member->externalIndex;
  if ( (_DWORD)externalIndex == -1 )
    return (char *)&queryFormat.fmt + 3;
  if ( enumValue < 0 )
    return (char *)&queryFormat.fmt + 3;
  v3 = &state->ddlDef->enumList[externalIndex];
  if ( enumValue >= v3->memberCount )
    return (char *)&queryFormat.fmt + 3;
  else
    return v3->members[enumValue];
}

/*
==============
DDL::DDL_Lookup_IsArrayMember
==============
*/
bool DDL::DDL_Lookup_IsArrayMember(const DDLState *state)
{
  DDLMember *member; 

  member = state->member;
  return member && member->isArray && member->enumIndex == -1 && state->arrayIndex != -1;
}

/*
==============
DDL::DDL_Lookup_IsArrayRoot
==============
*/
bool DDL::DDL_Lookup_IsArrayRoot(const DDLState *state)
{
  DDLMember *member; 

  member = state->member;
  return member && member->isArray && member->enumIndex == -1 && state->arrayIndex == -1;
}

/*
==============
DDL::DDL_Lookup_IsEnumArrayMember
==============
*/
bool DDL::DDL_Lookup_IsEnumArrayMember(const DDLState *state)
{
  DDLMember *member; 

  member = state->member;
  return member && member->isArray && member->enumIndex != -1 && state->arrayIndex != -1;
}

/*
==============
DDL::DDL_Lookup_IsEnumArrayRoot
==============
*/
bool DDL::DDL_Lookup_IsEnumArrayRoot(const DDLState *state)
{
  DDLMember *member; 

  member = state->member;
  return member && member->isArray && member->enumIndex != -1 && state->arrayIndex == -1;
}

/*
==============
DDL::DDL_Lookup_IsRestrictedName
==============
*/
bool DDL::DDL_Lookup_IsRestrictedName(const char *name)
{
  return name && *name == 95;
}

/*
==============
DDL::DDL_Lookup_IsRestrictedNameHash
==============
*/
bool DDL::DDL_Lookup_IsRestrictedNameHash(unsigned int nameHash)
{
  return nameHash == DDL::DDL_HashString("__pad", 0);
}

/*
==============
DDL::DDL_Lookup_IterateArray
==============
*/
bool DDL::DDL_Lookup_IterateArray(DDLState *state)
{
  bool v2; 
  bool v3; 
  DDLMember *member; 
  int arrayIndex; 
  int arraySize; 
  bool result; 

  v2 = state && state->isValid && state->ddlDef;
  v3 = 0;
  if ( state )
    v3 = v2;
  if ( !v3 )
    return 0;
  member = state->member;
  if ( !member )
    return 0;
  if ( !member->isArray )
    return 0;
  arrayIndex = state->arrayIndex;
  arraySize = member->arraySize;
  if ( arrayIndex + 1 >= arraySize )
    return 0;
  if ( arrayIndex != -1 )
    state->offset += member->bitSize / arraySize;
  state->arrayIndex = arrayIndex + 1;
  result = 1;
  state->isValid = 1;
  return result;
}

/*
==============
DDL::DDL_Lookup_MoveNextWithPath
==============
*/
char DDL::DDL_Lookup_MoveNextWithPath(DDLState *state, char *path, int pathLength)
{
  int v3; 
  unsigned __int64 v4; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  DDLMember *member; 
  DDLMember *v12; 
  const char *PathFromStack; 
  int arrayIndex; 

  v3 = 0;
  v4 = pathLength;
  DDL::g_pathStackTop = 0;
  v7 = state && state->isValid && state->ddlDef;
  v8 = 0;
  if ( state )
    v8 = v7;
  if ( v8 )
  {
    v9 = state && state->isValid && state->ddlDef;
    v10 = 0;
    if ( state )
      v10 = v9;
    if ( v10 )
    {
      member = state->member;
      if ( member )
        v3 = state->offset + member->bitSize / member->arraySize;
      v12 = DDL::FindInStruct(state->ddlDef->structList, state->ddlDef, 0, v3, &arrayIndex, 1);
      if ( v12 )
      {
        state->member = v12;
        state->arrayIndex = arrayIndex;
        state->offset = v3;
        state->isValid = 1;
        PathFromStack = DDL::GetPathFromStack();
        DDL::DDL_strcpy(path, v4, PathFromStack);
        return 1;
      }
    }
    memset_0(path, 0, v4);
  }
  return 0;
}

/*
==============
DDL::DDL_Lookup_MoveToIndex
==============
*/
bool DDL::DDL_Lookup_MoveToIndex(const DDLState *fromState, DDLState *toState, int index, bool suppressErrors)
{
  DDLMember *member; 
  bool result; 

  if ( !fromState )
    return 0;
  member = fromState->member;
  if ( !member || !toState || index >= member->arraySize || index < 0 )
    return 0;
  toState->member = member;
  toState->offset = fromState->offset + index * (member->bitSize / member->arraySize);
  toState->arrayIndex = index;
  toState->ddlDef = fromState->ddlDef;
  result = 1;
  toState->isValid = 1;
  return result;
}

/*
==============
DDL::DDL_Lookup_MoveToName
==============
*/
bool DDL::DDL_Lookup_MoveToName(const DDLState *fromState, DDLState *toState, const char *name, bool suppressErrors)
{
  unsigned int v8; 

  if ( !name || *name == 95 )
    return 0;
  v8 = DDL::DDL_HashString(name, 0);
  return DDL::DDL_Lookup_MoveToNameHash(fromState, toState, name, v8, suppressErrors);
}

/*
==============
DDL::DDL_Lookup_MoveToNameHash
==============
*/
bool DDL::DDL_Lookup_MoveToNameHash(const DDLState *fromState, DDLState *toState, const char *name, unsigned int nameHash, bool suppressErrors)
{
  bool v8; 
  int v9; 
  bool v10; 
  DDLMember *member; 
  DDLMember *v12; 
  DDLMember *StructMemberByHash; 
  bool result; 
  __int64 enumIndex; 
  DDLEnum *v16; 
  int v17; 
  DDLHash *list; 
  int v19; 
  int index; 
  int v21; 
  DDLMember *v22; 

  v8 = fromState && fromState->isValid && fromState->ddlDef;
  v9 = 0;
  v10 = 0;
  if ( toState )
    v10 = v8;
  if ( !v10 )
    return 0;
  if ( !nameHash )
    return 0;
  member = fromState->member;
  if ( member )
  {
    if ( (unsigned int)(member->type - 9) > 1 && (!member->isArray || fromState->arrayIndex != -1) )
      return 0;
  }
  toState->ddlDef = fromState->ddlDef;
  v12 = fromState->member;
  if ( !v12 )
  {
    StructMemberByHash = DDL::GetStructMemberByHash(name, nameHash, fromState->ddlDef->structList, suppressErrors);
    toState->member = StructMemberByHash;
    if ( !StructMemberByHash )
      return 0;
    toState->arrayIndex = -1;
    toState->offset = StructMemberByHash->offset;
    result = 1;
    toState->isValid = 1;
    return result;
  }
  if ( !v12->isArray || (enumIndex = v12->enumIndex, (_DWORD)enumIndex == -1) || fromState->arrayIndex != -1 )
  {
    v22 = DDL::GetStructMemberByHash(name, nameHash, &fromState->ddlDef->structList[v12->externalIndex], suppressErrors);
    toState->member = v22;
    if ( !v22 )
      return 0;
    toState->arrayIndex = -1;
    v21 = fromState->offset + v22->offset;
LABEL_32:
    toState->offset = v21;
    toState->ddlDef = fromState->ddlDef;
    result = 1;
    toState->isValid = 1;
    return result;
  }
  v16 = &fromState->ddlDef->enumList[enumIndex];
  v17 = v16->hashTable.count - 1;
  if ( v17 < 0 )
    return 0;
  list = v16->hashTable.list;
  while ( 1 )
  {
    v19 = (v17 + v9) / 2;
    if ( nameHash <= list[v19].hash )
      break;
    v9 = v19 + 1;
LABEL_26:
    if ( v9 > v17 )
      return 0;
  }
  if ( nameHash < list[v19].hash )
  {
    v17 = v19 - 1;
    goto LABEL_26;
  }
  index = list[v19].index;
  if ( index != -1 )
  {
    toState->member = v12;
    v21 = fromState->offset + index * (fromState->member->bitSize / fromState->member->arraySize);
    toState->arrayIndex = index;
    goto LABEL_32;
  }
  return 0;
}

/*
==============
DDL::DDL_Lookup_MoveToNextMember
==============
*/
bool DDL::DDL_Lookup_MoveToNextMember(DDLState *state, bool createPath, bool skipPad)
{
  bool v6; 
  bool v7; 
  DDLMember *v8; 
  DDLMember *member; 
  int v10; 
  int arrayIndex; 

  v6 = state && state->isValid && state->ddlDef;
  v7 = 0;
  if ( state )
    v7 = v6;
  if ( v7 )
  {
    member = state->member;
    while ( 1 )
    {
      v10 = 0;
      if ( member )
        v10 = state->offset + member->bitSize / member->arraySize;
      v8 = DDL::FindInStruct(state->ddlDef->structList, state->ddlDef, 0, v10, &arrayIndex, createPath);
      member = v8;
      if ( !v8 )
        break;
      state->arrayIndex = arrayIndex;
      state->member = v8;
      state->offset = v10;
      state->isValid = 1;
      if ( !skipPad || v8->type != 11 )
      {
        LOBYTE(v8) = 1;
        return (char)v8;
      }
    }
  }
  else
  {
    LOBYTE(v8) = 0;
  }
  return (char)v8;
}

/*
==============
DDL::DDL_Lookup_MoveToOffset
==============
*/
bool DDL::DDL_Lookup_MoveToOffset(DDLState *resultState, DDLDef *ddl, int offset)
{
  DDLMember *v4; 
  int arrayIndex; 

  resultState->ddlDef = ddl;
  resultState->offset = 0;
  v4 = DDL::FindInStruct(ddl->structList, ddl, 0, offset, &arrayIndex, 0);
  resultState->arrayIndex = arrayIndex;
  resultState->member = v4;
  if ( v4 )
  {
    resultState->isValid = 1;
    LOBYTE(v4) = 1;
  }
  return (char)v4;
}

/*
==============
DDL::DDL_Lookup_MoveToStart
==============
*/
bool DDL::DDL_Lookup_MoveToStart(DDLState *resultState, DDLDef *ddl, bool createPath)
{
  DDLMember *v4; 
  int arrayIndex; 

  resultState->ddlDef = ddl;
  resultState->offset = 0;
  v4 = DDL::FindInStruct(ddl->structList, ddl, 0, 0, &arrayIndex, createPath);
  resultState->arrayIndex = arrayIndex;
  resultState->member = v4;
  if ( v4 )
  {
    resultState->isValid = 1;
    LOBYTE(v4) = 1;
  }
  return (char)v4;
}

/*
==============
DDL::DDL_Lookup_MoveToStartWithPath
==============
*/
char DDL::DDL_Lookup_MoveToStartWithPath(DDLState *resultState, DDLDef *ddl, char *path, int pathLength)
{
  unsigned __int64 v5; 
  DDLMember *v7; 
  const char *PathFromStack; 
  int arrayIndex; 

  v5 = pathLength;
  DDL::g_pathStackTop = 0;
  resultState->offset = 0;
  resultState->ddlDef = ddl;
  v7 = DDL::FindInStruct(ddl->structList, ddl, 0, 0, &arrayIndex, 1);
  resultState->arrayIndex = arrayIndex;
  resultState->member = v7;
  if ( v7 )
  {
    resultState->isValid = 1;
    PathFromStack = DDL::GetPathFromStack();
    DDL::DDL_strcpy(path, v5, PathFromStack);
    return 1;
  }
  else
  {
    memset_0(path, 0, v5);
    return 0;
  }
}

/*
==============
DDL::DDL_Member_IsArray
==============
*/
bool DDL::DDL_Member_IsArray(const DDLMember *member)
{
  return member && member->isArray && member->enumIndex == -1;
}

/*
==============
DDL::DDL_Member_IsEnumArray
==============
*/
bool DDL::DDL_Member_IsEnumArray(const DDLMember *member)
{
  return member && member->isArray && member->enumIndex != -1;
}

/*
==============
DDL::FindInStruct
==============
*/
DDLMember *DDL::FindInStruct(DDLStruct *structDef, const DDLDef *ddl, int parentOffset, int searchOffset, int *arrayIndex, bool createPath)
{
  int *v6; 
  int v7; 
  bool v9; 
  __int64 i; 
  DDLMember *members; 
  int *v15; 
  int v16; 
  DDLMember *v17; 
  int v18; 
  int v19; 
  int v20; 
  __int64 enumIndex; 
  const char *v23; 
  const char *v24; 
  int v25; 
  __int64 v26; 
  const char *v27; 
  char dest[256]; 

  v6 = arrayIndex;
  v7 = 0;
  v9 = createPath;
  if ( structDef->memberCount <= 0 )
    return 0i64;
  for ( i = 12i64; ; i += 48i64 )
  {
    members = structDef->members;
    v15 = (int *)((char *)members + i);
    if ( *(int *)((char *)&members->bitSize + i) != 9 )
      break;
    v16 = 0;
    if ( v15[7] > 0 )
    {
      while ( 1 )
      {
        v17 = DDL::FindInStruct(&ddl->structList[*(int *)((char *)&members->limitSize + i)], ddl, parentOffset + *(int *)((char *)&members->index + i) + v16 * (*(_DWORD *)((char *)&members->name + i) / *(int *)((char *)&members->externalIndex + i)), searchOffset, v6, v9);
        if ( v17 )
          break;
        members = structDef->members;
        ++v16;
        v6 = arrayIndex;
        v9 = createPath;
        if ( v16 >= *(int *)((char *)&members->externalIndex + i) )
          goto LABEL_11;
      }
      if ( createPath )
      {
        memset_0(dest, 0, sizeof(dest));
        DDL::DDL_strcat(dest, 0x100ui64, structDef->members[v7].name);
        if ( structDef->members[v7].isArray )
        {
          DDL::DDL_strcat(dest, 0x100ui64, "[");
          enumIndex = structDef->members[v7].enumIndex;
          if ( (int)enumIndex <= -1 )
            v23 = DDL::DDL_va("%d", (unsigned int)v16);
          else
            v23 = ddl->enumList[enumIndex].members[v16];
          DDL::DDL_strcat(dest, 0x100ui64, v23);
          v24 = "].";
        }
        else
        {
          v24 = ".";
        }
        DDL::DDL_strcat(dest, 0x100ui64, v24);
        if ( DDL::g_pathStackTop != 16 )
        {
          DDL::DDL_strcpy(DDL::g_pathStack[(__int64)DDL::g_pathStackTop], 0x100ui64, dest);
          ++DDL::g_pathStackTop;
        }
      }
      return v17;
    }
LABEL_12:
    if ( ++v7 >= structDef->memberCount )
      return 0i64;
  }
  v18 = v15[7];
  v19 = 0;
  v20 = parentOffset;
  if ( v18 <= 0 )
  {
LABEL_11:
    v9 = createPath;
    goto LABEL_12;
  }
  while ( searchOffset != v15[2] + v20 )
  {
    ++v19;
    v20 += *v15 / v18;
    if ( v19 >= v18 )
      goto LABEL_11;
  }
  v25 = -1;
  if ( *((_BYTE *)v15 + 24) )
    v25 = v19;
  *v6 = v25;
  if ( createPath )
  {
    memset_0(dest, 0, sizeof(dest));
    DDL::DDL_strcat(dest, 0x100ui64, structDef->members[v7].name);
    if ( structDef->members[v7].isArray )
    {
      DDL::DDL_strcat(dest, 0x100ui64, "[");
      v26 = structDef->members[v7].enumIndex;
      if ( (int)v26 <= -1 )
        v27 = DDL::DDL_va("%d", (unsigned int)*v6);
      else
        v27 = ddl->enumList[v26].members[*v6];
      DDL::DDL_strcat(dest, 0x100ui64, v27);
      DDL::DDL_strcat(dest, 0x100ui64, "]");
    }
    if ( DDL::g_pathStackTop != 16 )
    {
      DDL::DDL_strcpy(DDL::g_pathStack[(__int64)DDL::g_pathStackTop], 0x100ui64, dest);
      ++DDL::g_pathStackTop;
    }
  }
  return &structDef->members[v7];
}

/*
==============
DDL::GetPathFromStack
==============
*/
char *DDL::GetPathFromStack()
{
  int v0; 
  const char *v1; 

  memset_0(path, 0, sizeof(path));
  v0 = DDL::g_pathStackTop - 1;
  if ( DDL::g_pathStackTop - 1 >= 0 )
  {
    v1 = DDL::g_pathStack[(__int64)v0];
    do
    {
      DDL::DDL_strcat(path, 0x100ui64, v1);
      v1 -= 256;
      --v0;
    }
    while ( v0 >= 0 );
  }
  return path;
}

/*
==============
DDL::GetStructMemberByHash
==============
*/
DDLMember *DDL::GetStructMemberByHash(const char *memberName, unsigned int memberNameHash, DDLStruct *structDef, bool suppressErrors)
{
  int v4; 
  int v5; 
  int v6; 
  DDLHash *list; 
  int v8; 
  DDLMember *result; 
  int v10; 
  DDLHash *v11; 
  int v12; 

  v4 = 0;
  v5 = structDef->hashTableUpper.count - 1;
  v6 = 0;
  if ( v5 < 0 )
    goto LABEL_10;
  list = structDef->hashTableUpper.list;
  while ( 1 )
  {
    v8 = (v5 + v6) / 2;
    if ( memberNameHash <= list[v8].hash )
      break;
    v6 = v8 + 1;
LABEL_7:
    if ( v6 > v5 )
      goto LABEL_10;
  }
  if ( memberNameHash < list[v8].hash )
  {
    v5 = v8 - 1;
    goto LABEL_7;
  }
  result = &structDef->members[list[v8].index];
  if ( result )
    return result;
LABEL_10:
  v10 = structDef->hashTableLower.count - 1;
  if ( v10 < 0 )
    return 0i64;
  v11 = structDef->hashTableLower.list;
  while ( 2 )
  {
    v12 = (v10 + v4) / 2;
    if ( memberNameHash > v11[v12].hash )
    {
      v4 = v12 + 1;
      goto LABEL_16;
    }
    if ( memberNameHash < v11[v12].hash )
    {
      v10 = v12 - 1;
LABEL_16:
      if ( v4 > v10 )
        return 0i64;
      continue;
    }
    break;
  }
  result = &structDef->members[v11[v12].index];
  if ( !result )
    return 0i64;
  return result;
}

/*
==============
DDL::MoveToNextIndex
==============
*/
bool DDL::MoveToNextIndex(DDLState *state)
{
  int arrayIndex; 
  DDLMember *member; 
  int arraySize; 
  bool result; 

  arrayIndex = state->arrayIndex;
  member = state->member;
  arraySize = member->arraySize;
  if ( arrayIndex + 1 >= arraySize )
    return 0;
  if ( arrayIndex != -1 )
    state->offset += member->bitSize / arraySize;
  state->arrayIndex = arrayIndex + 1;
  result = 1;
  state->isValid = 1;
  return result;
}

