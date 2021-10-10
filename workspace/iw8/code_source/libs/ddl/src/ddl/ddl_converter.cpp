/*
==============
DDL::DDL_Convert
==============
*/

bool __fastcall DDL::DDL_Convert(DDLContext *ddlContext, const DDLDef *toDef, void *scratchBuff, int scratchBuffSize)
{
  return ?DDL_Convert@DDL@@YA_NPEAUDDLContext@@PEBUDDLDef@@PEAXH@Z(ddlContext, toDef, scratchBuff, scratchBuffSize);
}

/*
==============
DDL::DDL_Converter_GetValue
==============
*/

const char *__fastcall DDL::DDL_Converter_GetValue(const DDLState *state, const DDLContext *ddlContext)
{
  return ?DDL_Converter_GetValue@DDL@@YAPEBDPEBUDDLState@@PEBUDDLContext@@@Z(state, ddlContext);
}

/*
==============
DDL::DDL_Converter_ProcessStates
==============
*/

void __fastcall DDL::DDL_Converter_ProcessStates(const DDLStruct *const structDef, const int structMemberItr, DDLState *const oldState, DDLState *const newState, DDLContext *fromDDLCtx, DDLContext *toDDLCtx)
{
  ?DDL_Converter_ProcessStates@DDL@@YAXQEBUDDLStruct@@HQEAUDDLState@@1PEAUDDLContext@@2@Z(structDef, structMemberItr, oldState, newState, fromDDLCtx, toDDLCtx);
}

/*
==============
DDL::DDL_Converter_TraverseStructForPaths
==============
*/

void __fastcall DDL::DDL_Converter_TraverseStructForPaths(const DDLStruct *const structDef, const DDLContext *ddlContext, const DDLState *const baseState, int bitStart, int bitEnd)
{
  ?DDL_Converter_TraverseStructForPaths@DDL@@YAXQEBUDDLStruct@@PEBUDDLContext@@QEBUDDLState@@HH@Z(structDef, ddlContext, baseState, bitStart, bitEnd);
}

/*
==============
DDL::DDL_Converter_CopyStates
==============
*/

void __fastcall DDL::DDL_Converter_CopyStates(DDLState *const fromState, DDLContext *fromDDLCtx, DDLState *const toState, DDLContext *toDDLCtx)
{
  ?DDL_Converter_CopyStates@DDL@@YAXQEAUDDLState@@PEAUDDLContext@@01@Z(fromState, fromDDLCtx, toState, toDDLCtx);
}

/*
==============
DDL::DDL_Converter_ProcessStateForPaths
==============
*/

void __fastcall DDL::DDL_Converter_ProcessStateForPaths(const DDLStruct *const structDef, const int structMemberItr, const DDLContext *ddlContext, DDLState *const state, int bitStart, int bitEnd)
{
  ?DDL_Converter_ProcessStateForPaths@DDL@@YAXQEBUDDLStruct@@HPEBUDDLContext@@QEAUDDLState@@HH@Z(structDef, structMemberItr, ddlContext, state, bitStart, bitEnd);
}

/*
==============
DDL::DDL_Convert_GetPaths
==============
*/

bool __fastcall DDL::DDL_Convert_GetPaths(const DDLDef *ddlDef, int startByte, int endByte, DDLContext *ddlContext)
{
  return ?DDL_Convert_GetPaths@DDL@@YA_NPEBUDDLDef@@HHPEAUDDLContext@@@Z(ddlDef, startByte, endByte, ddlContext);
}

/*
==============
DDL::DDL_Converter_TraverseStruct
==============
*/

void __fastcall DDL::DDL_Converter_TraverseStruct(const DDLStruct *const structDef, const DDLState *const oldBaseState, const DDLState *const newBaseState, DDLContext *fromDDLCtx, DDLContext *toDDLCtx)
{
  ?DDL_Converter_TraverseStruct@DDL@@YAXQEBUDDLStruct@@QEBUDDLState@@1PEAUDDLContext@@2@Z(structDef, oldBaseState, newBaseState, fromDDLCtx, toDDLCtx);
}

/*
==============
DDL::DDL_Convert
==============
*/
char DDL::DDL_Convert(DDLContext *ddlContext, const DDLDef *toDef, void *scratchBuff, int scratchBuffSize)
{
  int byteSize; 
  DDLContext ddlContexta; 
  DDLState newBaseState; 
  DDLState result; 

  if ( ddlContext->obfuscated )
    return 0;
  DDL_GetRootState(&result, ddlContext->def);
  DDL_GetRootState(&newBaseState, toDef);
  byteSize = toDef->byteSize;
  if ( ddlContext->len < byteSize || !scratchBuff || scratchBuffSize < byteSize || !DDL_ResetContext(scratchBuff, scratchBuffSize, toDef, &ddlContexta, NULL, NULL) )
    return 0;
  DDL::DDL_Converter_TraverseStruct(ddlContext->def->structList, &result, &newBaseState, ddlContext, &ddlContexta);
  if ( !ddlContext->def->minimalHeader )
    DDL::DDL_Header_UpdateDataChecksum(&ddlContexta);
  memcpy_0(ddlContext->buff, ddlContexta.buff, toDef->byteSize);
  ddlContext->def = toDef;
  DDL::DDL_Buffer_DirtySet(ddlContext, 0, toDef->bitSize);
  return 1;
}

/*
==============
DDL::DDL_Convert_GetPaths
==============
*/
char DDL::DDL_Convert_GetPaths(const DDLDef *ddlDef, int startByte, int endByte, DDLContext *ddlContext)
{
  DDLStruct *structList; 
  DDLState result; 

  DDL_GetRootState(&result, ddlDef);
  structList = ddlDef->structList;
  DDL::s_pathStackTop = -1;
  DDL::DDL_Converter_TraverseStructForPaths(structList, ddlContext, &result, 8 * startByte, 8 * endByte + 7);
  return 1;
}

/*
==============
DDL::DDL_Converter_CopyStates
==============
*/
void DDL::DDL_Converter_CopyStates(DDLState *const fromState, DDLContext *fromDDLCtx, DDLState *const toState, DDLContext *toDDLCtx)
{
  int type; 
  int v8; 
  const char *String; 
  unsigned __int64 UInt64; 
  const char *Enum; 
  double Float; 
  double FixedPoint; 
  int Int; 
  unsigned int UInt; 

  type = fromState->member->type;
  v8 = toState->member->type;
  if ( type != v8 )
  {
    if ( type )
    {
      if ( type != 1 || v8 != 2 )
        return;
    }
    else if ( (unsigned int)(v8 - 1) > 1 )
    {
      return;
    }
$LN22_251:
    UInt = DDL_GetUInt(fromState, fromDDLCtx);
    DDL_SetUInt(toState, toDDLCtx, UInt);
    return;
  }
  switch ( 0x40000000u )
  {
    case 0u:
    case 1u:
    case 2u:
      goto $LN22_251;
    case 3u:
      Int = DDL_GetInt(fromState, fromDDLCtx);
      DDL_SetInt(toState, toDDLCtx, Int);
      break;
    case 4u:
    case 5u:
      UInt64 = DDL_GetUInt64(fromState, fromDDLCtx);
      DDL_SetUInt64(toState, toDDLCtx, UInt64);
      break;
    case 6u:
      Float = DDL_GetFloat(fromState, fromDDLCtx);
      DDL_SetFloat(toState, toDDLCtx, *(float *)&Float);
      break;
    case 7u:
      FixedPoint = DDL_GetFixedPoint(fromState, fromDDLCtx);
      DDL_SetFixedPoint(toState, toDDLCtx, *(const float *)&FixedPoint);
      break;
    case 8u:
      String = DDL_GetString(fromState, fromDDLCtx);
      DDL_SetString(toState, toDDLCtx, String);
      break;
    case 0xAu:
      Enum = DDL_GetEnum(fromState, fromDDLCtx);
      DDL_SetEnum(toState, toDDLCtx, Enum);
      break;
    default:
      return;
  }
}

/*
==============
DDL::DDL_Converter_GetValue
==============
*/
char *DDL::DDL_Converter_GetValue(const DDLState *state, const DDLContext *ddlContext)
{
  DDLValue Value; 
  char *result; 

  if ( !ddlContext )
    return DDL::DDL_va((const char *)&queryFormat.fmt + 3);
  Value = DDL_GetValue(state, ddlContext);
  switch ( state->member->type )
  {
    case 0:
    case 1:
    case 2:
    case 3:
      result = DDL::DDL_va("%u", Value.uintValue);
      break;
    case 4:
    case 5:
      result = DDL::DDL_va("%llu", Value.uint64Value);
      break;
    case 6:
      result = DDL::DDL_va("%f", Value.fixedPointValue);
      break;
    case 8:
      result = DDL::DDL_va((const char *)&queryFormat, Value.uint64Value);
      break;
    default:
      return DDL::DDL_va((const char *)&queryFormat.fmt + 3);
  }
  return result;
}

/*
==============
DDL::DDL_Converter_ProcessStateForPaths
==============
*/
void DDL::DDL_Converter_ProcessStateForPaths(const DDLStruct *const structDef, const int structMemberItr, const DDLContext *ddlContext, DDLState *const state, int bitStart, int bitEnd)
{
  int offset; 
  int i; 

  if ( state->member->type == 9 )
  {
    DDL::DDL_Converter_TraverseStructForPaths(&state->ddlDef->structList[structDef->members[structMemberItr].externalIndex], ddlContext, state, bitStart, bitEnd);
  }
  else if ( DDL_StateIsLeaf(state) )
  {
    offset = state->offset;
    if ( offset <= bitEnd && offset + state->member->bitSize / state->member->arraySize > bitStart )
    {
      memset_0(dest, 0, 0x80ui64);
      for ( i = 0; i <= DDL::s_pathStackTop; ++i )
        DDL::DDL_strcat(dest, 0x80ui64, DDL::s_pathStack[(__int64)i]);
    }
  }
}

/*
==============
DDL::DDL_Converter_ProcessStates
==============
*/
void DDL::DDL_Converter_ProcessStates(const DDLStruct *const structDef, const int structMemberItr, DDLState *const oldState, DDLState *const newState, DDLContext *fromDDLCtx, DDLContext *toDDLCtx)
{
  int type; 
  int v9; 
  const char *String; 
  unsigned __int64 UInt64; 
  const char *Enum; 
  double Float; 
  double FixedPoint; 
  int Int; 
  unsigned int UInt; 

  if ( oldState->member->type == 9 && newState->member->type == 9 )
  {
    DDL::DDL_Converter_TraverseStruct(&oldState->ddlDef->structList[structDef->members[structMemberItr].externalIndex], oldState, newState, fromDDLCtx, toDDLCtx);
    return;
  }
  if ( DDL_StateIsLeaf(oldState) && DDL_StateIsLeaf(newState) )
  {
    type = oldState->member->type;
    v9 = newState->member->type;
    if ( type != v9 )
    {
      if ( type )
      {
        if ( type != 1 || v9 != 2 )
          return;
      }
      else if ( (unsigned int)(v9 - 1) > 1 )
      {
        return;
      }
LABEL_19:
      UInt = DDL_GetUInt(oldState, fromDDLCtx);
      DDL_SetUInt(newState, toDDLCtx, UInt);
      return;
    }
    switch ( type )
    {
      case 0:
      case 1:
      case 2:
        goto LABEL_19;
      case 3:
        Int = DDL_GetInt(oldState, fromDDLCtx);
        DDL_SetInt(newState, toDDLCtx, Int);
        break;
      case 4:
      case 5:
        UInt64 = DDL_GetUInt64(oldState, fromDDLCtx);
        DDL_SetUInt64(newState, toDDLCtx, UInt64);
        break;
      case 6:
        Float = DDL_GetFloat(oldState, fromDDLCtx);
        DDL_SetFloat(newState, toDDLCtx, *(float *)&Float);
        break;
      case 7:
        FixedPoint = DDL_GetFixedPoint(oldState, fromDDLCtx);
        DDL_SetFixedPoint(newState, toDDLCtx, *(const float *)&FixedPoint);
        break;
      case 8:
        String = DDL_GetString(oldState, fromDDLCtx);
        DDL_SetString(newState, toDDLCtx, String);
        break;
      case 10:
        Enum = DDL_GetEnum(oldState, fromDDLCtx);
        DDL_SetEnum(newState, toDDLCtx, Enum);
        break;
      default:
        return;
    }
  }
}

/*
==============
DDL::DDL_Converter_TraverseStruct
==============
*/
void DDL::DDL_Converter_TraverseStruct(const DDLStruct *const structDef, const DDLState *const oldBaseState, const DDLState *const newBaseState, DDLContext *fromDDLCtx, DDLContext *toDDLCtx)
{
  const DDLState *v7; 
  const DDLState *v8; 
  int v10; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 enumIndex; 
  bool v16; 
  DDLState *p_fromState; 
  DDLState *p_toState; 
  DDLState toState; 
  DDLState fromState; 
  DDLState v23; 
  DDLState v24; 
  DDLState v25; 

  v7 = newBaseState;
  v8 = oldBaseState;
  v10 = 0;
  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  *(_OWORD *)&fromState.member = _XMM0;
  v24.isValid = 0;
  v24.offset = 0;
  v24.arrayIndex = -1;
  *(_OWORD *)&v24.member = _XMM0;
  v23.isValid = 0;
  v23.offset = 0;
  v23.arrayIndex = -1;
  *(_OWORD *)&v23.member = _XMM0;
  if ( structDef->memberCount <= 0 )
    return;
  v12 = 0i64;
  do
  {
    if ( DDL::DDL_Lookup_IsRestrictedName(structDef->members[v12].name) || !DDL_MoveToName(v8, &toState, structDef->members[v12].name) || !DDL_MoveToName(v7, &fromState, structDef->members[v12].name) )
      goto LABEL_29;
    v13 = 0;
    if ( toState.member->arraySize <= 0 )
      goto LABEL_28;
    v14 = 0i64;
    do
    {
      if ( !toState.member->isArray )
      {
        if ( DDL::DDL_Lookup_IsArrayRoot(&fromState) )
        {
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v25.isValid = 0;
          v25.offset = 0;
          v25.arrayIndex = -1;
          *(_OWORD *)&v25.member = _XMM0;
          if ( !DDL_MoveToIndex(&fromState, &v25, 0) )
            goto LABEL_26;
          p_fromState = &v25;
        }
        else
        {
LABEL_23:
          p_fromState = &fromState;
        }
        p_toState = &toState;
        goto LABEL_25;
      }
      if ( !fromState.member->isArray )
        goto LABEL_23;
      enumIndex = toState.member->enumIndex;
      if ( (_DWORD)enumIndex != -1 || fromState.member->enumIndex != -1 )
      {
        if ( !DDL_MoveToName(&toState, &v24, toState.ddlDef->enumList[enumIndex].members[v14]) )
          goto LABEL_26;
        v16 = DDL_MoveToName(&fromState, &v23, toState.ddlDef->enumList[toState.member->enumIndex].members[v14]);
LABEL_15:
        if ( !v16 )
          goto LABEL_26;
        p_fromState = &v23;
        p_toState = &v24;
LABEL_25:
        DDL::DDL_Converter_ProcessStates(structDef, v10, p_toState, p_fromState, fromDDLCtx, toDDLCtx);
        goto LABEL_26;
      }
      if ( v13 < fromState.member->arraySize && DDL::DDL_Lookup_MoveToIndex(&toState, &v24, v13, 0) )
      {
        v16 = DDL::DDL_Lookup_MoveToIndex(&fromState, &v23, v13, 1);
        goto LABEL_15;
      }
LABEL_26:
      ++v13;
      ++v14;
    }
    while ( v13 < toState.member->arraySize );
    v7 = newBaseState;
LABEL_28:
    v8 = oldBaseState;
LABEL_29:
    ++v10;
    ++v12;
  }
  while ( v10 < structDef->memberCount );
}

/*
==============
DDL::DDL_Converter_TraverseStructForPaths
==============
*/
void DDL::DDL_Converter_TraverseStructForPaths(const DDLStruct *const structDef, const DDLContext *ddlContext, const DDLState *const baseState, int bitStart, int bitEnd)
{
  const DDLState *v8; 
  int v9; 
  int v11; 
  __int64 v12; 
  int v13; 
  const char *Value; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  const char *v18; 
  const char *v19; 
  int v20; 
  __int64 v21; 
  __int64 enumIndex; 
  const char *v23; 
  char *v24; 
  int v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  int v30; 
  int structMemberItr; 
  __int64 v32; 
  DDLState toState; 
  DDLState state; 

  toState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v8 = baseState;
  toState.offset = 0;
  v9 = bitStart;
  toState.arrayIndex = -1;
  v11 = 0;
  state.isValid = 0;
  *(_OWORD *)&toState.member = _XMM0;
  state.offset = 0;
  state.arrayIndex = -1;
  *(_OWORD *)&state.member = _XMM0;
  structMemberItr = 0;
  if ( structDef->memberCount > 0 )
  {
    v12 = 0i64;
    v13 = bitEnd;
    v32 = 0i64;
    do
    {
      if ( DDL_MoveToName(v8, &toState, *(const char **)((char *)&structDef->members->name + v12)) )
      {
        Value = DDL::DDL_Converter_GetValue(&toState, ddlContext);
        v15 = v32;
        v16 = DDL::s_pathStackTop;
        v17 = *(__int64 *)((char *)&structDef->members->name + v32);
        if ( DDL::s_pathStackTop != 16 )
        {
          ++DDL::s_pathStackTop;
          v18 = ".%s %s";
          if ( v16 + 1 <= 0 )
            v18 = "%s %s";
          v19 = DDL::DDL_va(v18, v17, Value);
          DDL::DDL_strcpy(DDL::s_pathStack[(__int64)DDL::s_pathStackTop], 0x80ui64, v19);
          v15 = v32;
          v16 = DDL::s_pathStackTop;
        }
        v20 = 0;
        if ( toState.member->arraySize > 0 )
        {
          v21 = 0i64;
          while ( 1 )
          {
            if ( toState.member->isArray )
            {
              enumIndex = toState.member->enumIndex;
              if ( (_DWORD)enumIndex == -1 )
              {
                if ( DDL_MoveToIndex(&toState, &state, v20) )
                {
                  v23 = DDL::DDL_Converter_GetValue(&toState, ddlContext);
                  v24 = DDL::DDL_va("%d", (unsigned int)v20);
                  v25 = DDL::s_pathStackTop;
                  if ( DDL::s_pathStackTop != 16 )
                  {
                    v26 = v23;
                    v27 = v24;
                    goto LABEL_18;
                  }
                  goto LABEL_19;
                }
              }
              else if ( DDL_MoveToName(&toState, &state, toState.ddlDef->enumList[enumIndex].members[v21]) )
              {
                v28 = DDL::DDL_Converter_GetValue(&toState, ddlContext);
                v27 = toState.ddlDef->enumList[toState.member->enumIndex].members[v21];
                v25 = DDL::s_pathStackTop;
                if ( DDL::s_pathStackTop != 16 )
                {
                  v26 = v28;
LABEL_18:
                  DDL::s_pathStackTop = v25 + 1;
                  v29 = DDL::DDL_va("[%s] %s", v27, v26);
                  DDL::DDL_strcpy(DDL::s_pathStack[(__int64)DDL::s_pathStackTop], 0x80ui64, v29);
                }
LABEL_19:
                DDL::DDL_Converter_ProcessStateForPaths(structDef, structMemberItr, ddlContext, &state, v9, v13);
                v16 = DDL::s_pathStackTop;
                if ( DDL::s_pathStackTop > -1 )
                {
                  memset_0(DDL::s_pathStack[(__int64)DDL::s_pathStackTop], 0, sizeof(char[128]));
                  DDL::s_pathStackTop = --v16;
                }
                goto LABEL_31;
              }
            }
            else if ( toState.member->type == 9 )
            {
              DDL::DDL_Converter_TraverseStructForPaths(&toState.ddlDef->structList[*(int *)((char *)&structDef->members->externalIndex + v15)], ddlContext, &toState, v9, v13);
            }
            else if ( DDL_StateIsLeaf(&toState) && toState.offset <= v13 && toState.offset + toState.member->bitSize / toState.member->arraySize > v9 )
            {
              memset_0(dest, 0, 0x80ui64);
              v16 = DDL::s_pathStackTop;
              v30 = 0;
              if ( DDL::s_pathStackTop >= 0 )
              {
                do
                {
                  DDL::DDL_strcat(dest, 0x80ui64, DDL::s_pathStack[(__int64)v30]);
                  v16 = DDL::s_pathStackTop;
                  ++v30;
                }
                while ( v30 <= DDL::s_pathStackTop );
                v13 = bitEnd;
              }
              v9 = bitStart;
              goto LABEL_31;
            }
            v16 = DDL::s_pathStackTop;
LABEL_31:
            ++v20;
            v15 = v32;
            ++v21;
            if ( v20 >= toState.member->arraySize )
            {
              v11 = structMemberItr;
              break;
            }
          }
        }
        if ( v16 > -1 )
        {
          memset_0(DDL::s_pathStack[(__int64)v16], 0, sizeof(char[128]));
          DDL::s_pathStackTop = v16 - 1;
        }
        v12 = v32;
      }
      v8 = baseState;
      ++v11;
      v12 += 48i64;
      structMemberItr = v11;
      v32 = v12;
    }
    while ( v11 < structDef->memberCount );
  }
}

