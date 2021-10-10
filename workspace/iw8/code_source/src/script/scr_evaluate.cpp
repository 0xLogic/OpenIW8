/*
==============
Scr_EvalArrayVariable
==============
*/

void __fastcall Scr_EvalArrayVariable(scrContext_t *scrContext, unsigned int arrayId, VariableValue *value)
{
  ?Scr_EvalArrayVariable@@YAXAEAUscrContext_t@@IPEAUVariableValue@@@Z(scrContext, arrayId, value);
}

/*
==============
Scr_EndLoadEvaluate
==============
*/

void __fastcall Scr_EndLoadEvaluate(const scrContext_t *scrContext)
{
  ?Scr_EndLoadEvaluate@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CompareCanonicalStrings
==============
*/

int __fastcall Scr_CompareCanonicalStrings(const void *arg1, const void *arg2)
{
  return ?Scr_CompareCanonicalStrings@@YAHPEBX0@Z(arg1, arg2);
}

/*
==============
Scr_GetValueString
==============
*/

void __fastcall Scr_GetValueString(scrContext_t *scrContext, unsigned int localId, VariableValue *value, int len, char *s)
{
  ?Scr_GetValueString@@YAXAEAUscrContext_t@@IPEAUVariableValue@@HPEAD@Z(scrContext, localId, value, len, s);
}

/*
==============
Scr_EvalPrimitiveExpression
==============
*/

bool __fastcall Scr_EvalPrimitiveExpression(scrContext_t *scrContext, sval_u expr, VariableCompileValue *constValue)
{
  return ?Scr_EvalPrimitiveExpression@@YA_NAEAUscrContext_t@@Tsval_u@@PEAUVariableCompileValue@@@Z(scrContext, expr, constValue);
}

/*
==============
Scr_AddDebugExprValueRefCount
==============
*/

void __fastcall Scr_AddDebugExprValueRefCount(unsigned __int16 *refCount, sval_u val)
{
  ?Scr_AddDebugExprValueRefCount@@YAXPEAGTsval_u@@@Z(refCount, val);
}

/*
==============
Scr_EvalFieldVariable
==============
*/

void __fastcall Scr_EvalFieldVariable(scrContext_t *scrContext, unsigned int fieldName, VariableValue *value, unsigned int objectId)
{
  ?Scr_EvalFieldVariable@@YAXAEAUscrContext_t@@IPEAUVariableValue@@I@Z(scrContext, fieldName, value, objectId);
}

/*
==============
Scr_CompileCanonicalString
==============
*/

unsigned int __fastcall Scr_CompileCanonicalString(scr_string_t stringValue)
{
  return ?Scr_CompileCanonicalString@@YAIW4scr_string_t@@@Z(stringValue);
}

/*
==============
Scr_ArchiveCanonicalStrings
==============
*/

void __fastcall Scr_ArchiveCanonicalStrings(const scrContext_t *scrContext)
{
  ?Scr_ArchiveCanonicalStrings@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetCanonicalString
==============
*/

const char *__fastcall Scr_GetCanonicalString(unsigned int fieldName)
{
  return ?Scr_GetCanonicalString@@YAPEBDI@Z(fieldName);
}

/*
==============
Scr_GetScriptFunction2
==============
*/

const char *__fastcall Scr_GetScriptFunction2(scrContext_t *scrContext, sval_u func_name)
{
  return ?Scr_GetScriptFunction2@@YAPEBDAEAUscrContext_t@@Tsval_u@@@Z(scrContext, func_name);
}

/*
==============
Scr_ShutdownEvaluate
==============
*/

void __fastcall Scr_ShutdownEvaluate(scrContext_t *scrContext)
{
  ?Scr_ShutdownEvaluate@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_AppendToArchiveCanonicalString
==============
*/

void __fastcall Scr_AppendToArchiveCanonicalString(const scrContext_t *scrContext, unsigned int canonicalStr)
{
  ?Scr_AppendToArchiveCanonicalString@@YAXAEBUscrContext_t@@I@Z(scrContext, canonicalStr);
}

/*
==============
Scr_CompileText
==============
*/

void __fastcall Scr_CompileText(scrContext_t *scrContext, const char *text, ScriptExpression_t *scriptExpr)
{
  ?Scr_CompileText@@YAXAEAUscrContext_t@@PEBDPEAUScriptExpression_t@@@Z(scrContext, text, scriptExpr);
}

/*
==============
Scr_EvalScriptExpression
==============
*/

bool __fastcall Scr_EvalScriptExpression(scrContext_t *scrContext, ScriptExpression_t *expr, unsigned int localId, VariableValue *value, bool freezeScope, bool freezeObjects)
{
  return ?Scr_EvalScriptExpression@@YA_NAEAUscrContext_t@@PEAUScriptExpression_t@@IPEAUVariableValue@@_N3@Z(scrContext, expr, localId, value, freezeScope, freezeObjects);
}

/*
==============
Scr_FreeDebugExprValue
==============
*/

void __fastcall Scr_FreeDebugExprValue(scrContext_t *scrContext, sval_u val)
{
  ?Scr_FreeDebugExprValue@@YAXAEAUscrContext_t@@Tsval_u@@@Z(scrContext, val);
}

/*
==============
Scr_GetFieldValue
==============
*/

void __fastcall Scr_GetFieldValue(scrContext_t *scrContext, unsigned int objectId, const char *fieldName, int len, char *text)
{
  ?Scr_GetFieldValue@@YAXAEAUscrContext_t@@IPEBDHPEAD@Z(scrContext, objectId, fieldName, len, text);
}

/*
==============
Scr_ClearDebugExprValue
==============
*/

void __fastcall Scr_ClearDebugExprValue(scrContext_t *scrContext, sval_u val)
{
  ?Scr_ClearDebugExprValue@@YAXAEAUscrContext_t@@Tsval_u@@@Z(scrContext, val);
}

/*
==============
Scr_InitEvaluate
==============
*/

void __fastcall Scr_InitEvaluate(scrContext_t *scrContext)
{
  ?Scr_InitEvaluate@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CompileExpression
==============
*/

void __fastcall Scr_CompileExpression(scrContext_t *scrContext, sval_u *expr)
{
  ?Scr_CompileExpression@@YAXAEAUscrContext_t@@PEATsval_u@@@Z(scrContext, expr);
}

/*
==============
Scr_RefScriptExpression
==============
*/

bool __fastcall Scr_RefScriptExpression(scrContext_t *scrContext, ScriptExpression_t *expr)
{
  return ?Scr_RefScriptExpression@@YA_NAEAUscrContext_t@@PEAUScriptExpression_t@@@Z(scrContext, expr);
}

/*
==============
Scr_EvalExpression
==============
*/
bool Scr_EvalExpression(scrContext_t *scrContext, sval_u expr, VariableCompileValue *constValue)
{
  sval_u v5; 
  sval_u v6; 
  sval_u v7; 
  bool result; 
  VariableCompileValue u; 
  VariableCompileValue constValuea; 

  if ( expr.node->type == 7 )
    return Scr_EvalPrimitiveExpression(scrContext, expr.node[1], constValue);
  if ( expr.node->type == 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 523, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
      __debugbreak();
    return 0;
  }
  if ( expr.node->type != 57 )
    return 0;
  v5 = expr.node[4];
  v6 = expr.node[3];
  v7 = expr.node[2];
  if ( !Scr_EvalExpression(scrContext, expr.node[1], &u) || !Scr_EvalExpression(scrContext, v7, &constValuea) )
    return 0;
  AddRefToValue(scrContext, (unsigned __int8)u.value.type, u.value.u);
  AddRefToValue(scrContext, (unsigned __int8)constValuea.value.type, constValuea.value.u);
  Scr_EvalBinaryOperator(scrContext, v6.type, &u.value, &constValuea.value);
  if ( scrContext->m_varPub.error_message )
  {
    CompileError(scrContext, v5.canonicalString, (const char *)&queryFormat);
    return 0;
  }
  constValue->value.u.scriptCodePosValue = u.value.u.scriptCodePosValue;
  constValue->value.type = u.value.type;
  result = 1;
  constValue->sourcePos = v5;
  return result;
}

/*
==============
Scr_EvalPrimitiveExpression
==============
*/
bool Scr_EvalPrimitiveExpression(scrContext_t *scrContext, sval_u expr, VariableCompileValue *constValue)
{
  bool result; 
  sval_u v5; 
  int type; 
  sval_u v7; 
  int v8; 
  sval_u v9; 
  sval_u v10; 
  sval_u v11; 

  switch ( expr.node->type )
  {
    case 9:
      Scr_EvalInteger(expr.node[1].type, expr.node[2], constValue);
      result = 1;
      break;
    case 0xA:
      Scr_EvalFloat(expr.node[1].floatValue, expr.node[2], constValue);
      result = 1;
      break;
    case 0xB:
      Scr_EvalInteger(-expr.node[1].type, expr.node[2], constValue);
      result = 1;
      break;
    case 0xC:
      Scr_EvalFloat(COERCE_FLOAT(expr.node[1].type ^ _xmm), expr.node[2], constValue);
      result = 1;
      break;
    case 0xD:
      v5 = expr.node[2];
      type = expr.node[1].type;
      if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 365, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
        __debugbreak();
      if ( !type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 366, ASSERT_TYPE_ASSERT, "( value != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "value != NULL_SCR_STRING") )
        __debugbreak();
      constValue->value.type = VAR_STRING;
      result = 1;
      constValue->value.u.intValue = type;
      constValue->sourcePos = v5;
      break;
    case 0xE:
      v7 = expr.node[2];
      v8 = expr.node[1].type;
      if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 376, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
        __debugbreak();
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 377, ASSERT_TYPE_ASSERT, "( value != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "value != NULL_SCR_STRING") )
        __debugbreak();
      constValue->value.type = VAR_ISTRING;
      result = 1;
      constValue->value.u.intValue = v8;
      constValue->sourcePos = v7;
      break;
    case 0x26:
      v9 = expr.node[1];
      if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 356, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
        __debugbreak();
      constValue->value.type = VAR_UNDEFINED;
      result = 1;
      constValue->sourcePos = v9;
      break;
    case 0x36:
      result = Scr_EvalPrimitiveExpressionList(scrContext, expr.node[1], expr.node[2], constValue);
      break;
    case 0x4C:
      v10 = expr.node[2];
      v11 = expr.node[1];
      if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 387, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
        __debugbreak();
      if ( !v11.type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 388, ASSERT_TYPE_ASSERT, "( anim.stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "anim.stringValue != NULL_SCR_STRING") )
        __debugbreak();
      constValue->value.type = VAR_PRE_ANIMATION;
      result = 1;
      constValue->value.u.intValue = v11.type;
      constValue->sourcePos = v10;
      break;
    case 0x51:
      Scr_EvalInteger(0, expr.node[1], constValue);
      result = 1;
      break;
    case 0x52:
      Scr_EvalInteger(1, expr.node[1], constValue);
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
CompareCanonicalStrings
==============
*/
__int64 CompareCanonicalStrings(const void *arg1, const void *arg2)
{
  unsigned __int8 *v2; 
  __int64 v3; 
  unsigned __int8 v4; 

  v2 = (unsigned __int8 *)*((_QWORD *)arg1 + 1);
  v3 = *((_QWORD *)arg2 + 1) - (_QWORD)v2;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 != v2[v3] )
      break;
    ++v2;
    if ( !v4 )
      return 0i64;
  }
  return v4 < v2[v3] ? -1 : 1;
}

/*
==============
Scr_AddDebugExprValueRefCount
==============
*/
void Scr_AddDebugExprValueRefCount(unsigned __int16 *refCount, sval_u val)
{
  if ( val.node->type == 92 )
    ++refCount[val.node[1].canonicalString];
}

/*
==============
Scr_AppendToArchiveCanonicalString
==============
*/
void Scr_AppendToArchiveCanonicalString(const scrContext_t *scrContext, unsigned int canonicalStr)
{
  __int64 v2; 
  CanonicalStringData *canonicalStringData; 
  unsigned int v4; 
  bool v5; 
  __int64 v6; 
  ArchivedCanonicalStringInfo *archivedCanonicalStrings; 
  __int64 v8; 
  __int64 v9; 

  v2 = canonicalStr;
  if ( scrContext->m_varPub.developer )
  {
    if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 164, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
      __debugbreak();
    if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 165, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
      __debugbreak();
    if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 166, ASSERT_TYPE_ASSERT, "( canonicalStr > 0 )", (const char *)&queryFormat, "canonicalStr > 0") )
      __debugbreak();
    if ( (unsigned int)v2 > g_scrCanonicalStringPub.canonicalStringLimit )
    {
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 167, ASSERT_TYPE_ASSERT, "( canonicalStr ) <= ( g_scrCanonicalStringPub.canonicalStringLimit )", "canonicalStr <= g_scrCanonicalStringPub.canonicalStringLimit\n\t%i, %i", v8, g_scrCanonicalStringPub.canonicalStringLimit) )
        __debugbreak();
    }
    canonicalStringData = g_scrCanonicalStringPub.canonicalStringData;
    if ( !s_scrEvaluateStringGlob.canonicalStringLookup[v2] )
    {
      v4 = g_scrCanonicalStringPub.canonicalStringData->stringOffsets[v2];
      if ( v4 )
      {
        if ( v4 < 0x64000 )
        {
LABEL_21:
          v6 = (__int64)&canonicalStringData->stringOffsets[28671] + v4 + 3;
          if ( (_DWORD)v2 != (unsigned __int16)v2 )
          {
            LODWORD(v9) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 177, ASSERT_TYPE_ASSERT, "( ( canonicalStr == ushort(canonicalStr) ) )", "%s\n\t( canonicalStr ) = %i", "( canonicalStr == ushort(canonicalStr) )", v9) )
              __debugbreak();
          }
          archivedCanonicalStrings = s_scrEvaluateStringGlob.archivedCanonicalStrings;
          s_scrEvaluateStringGlob.archivedCanonicalStrings[g_canonicalStrCount].canonicalStr = (unsigned __int16)v2;
          archivedCanonicalStrings[g_canonicalStrCount].value = (const char *)v6;
          s_scrEvaluateStringGlob.canonicalStringLookup[v2] = g_canonicalStrCount++;
          return;
        }
        LODWORD(v9) = 409600;
        LODWORD(v8) = g_scrCanonicalStringPub.canonicalStringData->stringOffsets[v2];
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 175, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( ( sizeof( *array_counter( strData.stringBuffer ) ) + 0 ) )", "offset doesn't index ARRAY_COUNT( strData.stringBuffer )\n\t%i not in [0, %i)", v8, v9);
      }
      else
      {
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 174, ASSERT_TYPE_ASSERT, "( offset )", (const char *)&queryFormat, "offset");
      }
      if ( v5 )
        __debugbreak();
      goto LABEL_21;
    }
  }
}

/*
==============
Scr_ArchiveCanonicalStrings
==============
*/
void Scr_ArchiveCanonicalStrings(const scrContext_t *scrContext)
{
  CanonicalStringData *canonicalStringData; 
  unsigned int v3; 
  unsigned int i; 
  unsigned int v5; 
  __int64 v6; 
  ArchivedCanonicalStringInfo *archivedCanonicalStrings; 
  int *canonicalStringLookup; 
  ArchivedCanonicalStringInfo *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 121, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 122, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
    __debugbreak();
  canonicalStringData = g_scrCanonicalStringPub.canonicalStringData;
  s_scrEvaluateStringGlob.archivedCanonicalStrings = (ArchivedCanonicalStringInfo *)Scr_Mem_DebugAllocAlign(scrContext, 16i64 * g_scrCanonicalStringPub.canonicalStringLimit, 8ui64, "Scr_ArchiveCanonicalStrings2");
  s_scrEvaluateStringGlob.canonicalStringLookup = (int *)Scr_Mem_DebugAllocAlign(scrContext, 4i64 * (g_scrCanonicalStringPub.canonicalStringLimit + 1), 4ui64, "Scr_ArchiveCanonicalStrings3");
  if ( g_canonicalStrCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 130, ASSERT_TYPE_ASSERT, "( !g_canonicalStrCount )", (const char *)&queryFormat, "!g_canonicalStrCount") )
    __debugbreak();
  v3 = 1;
  for ( i = 0; v3 <= g_scrCanonicalStringPub.canonicalStringLimit; ++v3 )
  {
    s_scrEvaluateStringGlob.canonicalStringLookup[v3 - 1] = 0;
    v5 = canonicalStringData->stringOffsets[v3];
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( (unsigned int)v6 >= 0x64000 )
      {
        LODWORD(v11) = 409600;
        LODWORD(v10) = v5 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 141, ASSERT_TYPE_ASSERT, "(unsigned)( offset - 1 ) < (unsigned)( ( sizeof( *array_counter( strData.stringBuffer ) ) + 0 ) )", "offset - 1 doesn't index ARRAY_COUNT( strData.stringBuffer )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( v3 != (unsigned __int16)v3 )
      {
        LODWORD(v11) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 144, ASSERT_TYPE_ASSERT, "( ( canonicalStr == (ushort)canonicalStr ) )", "%s\n\t( canonicalStr ) = %i", "( canonicalStr == (ushort)canonicalStr )", v11) )
          __debugbreak();
      }
      archivedCanonicalStrings = s_scrEvaluateStringGlob.archivedCanonicalStrings;
      s_scrEvaluateStringGlob.archivedCanonicalStrings[g_canonicalStrCount].canonicalStr = (unsigned __int16)v3;
      archivedCanonicalStrings[g_canonicalStrCount++].value = &canonicalStringData->stringBuffer[v6];
    }
  }
  if ( g_canonicalStrCount != g_lastSortedCanonicalStrCount )
  {
    g_lastSortedCanonicalStrCount = g_canonicalStrCount;
    qsort(s_scrEvaluateStringGlob.archivedCanonicalStrings, g_canonicalStrCount, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareCanonicalStrings);
    if ( g_canonicalStrCount )
    {
      canonicalStringLookup = s_scrEvaluateStringGlob.canonicalStringLookup;
      v9 = s_scrEvaluateStringGlob.archivedCanonicalStrings;
      do
      {
        canonicalStringLookup[v9[i].canonicalStr] = i;
        ++i;
      }
      while ( i < g_canonicalStrCount );
    }
  }
}

/*
==============
Scr_ClearDebugExprValue
==============
*/
void Scr_ClearDebugExprValue(scrContext_t *scrContext, sval_u val)
{
  int type; 

  type = val.node->type;
  if ( val.node->type >= 5 )
  {
    if ( type <= 6 )
    {
      if ( !val.node[4].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2516, ASSERT_TYPE_ASSERT, "( val.node[4].childIdValue != NULL_CHILD_VARIABLE_ID )", (const char *)&queryFormat, "val.node[4].childIdValue != NULL_CHILD_VARIABLE_ID") )
        __debugbreak();
      ClearVariableValue(scrContext, val.node[4].canonicalString);
    }
    else if ( ((type - 20) & 0xFFFFFFFD) == 0 )
    {
      if ( !val.node[2].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2522, ASSERT_TYPE_ASSERT, "( val.node[2].childIdValue != NULL_CHILD_VARIABLE_ID )", (const char *)&queryFormat, "val.node[2].childIdValue != NULL_CHILD_VARIABLE_ID") )
        __debugbreak();
      ClearVariableValue(scrContext, val.node[2].canonicalString);
    }
  }
}

/*
==============
Scr_CompareCanonicalStrings
==============
*/
__int64 Scr_CompareCanonicalStrings(const void *arg1, const void *arg2)
{
  return (unsigned int)(s_scrEvaluateStringGlob.canonicalStringLookup[*(unsigned int *)arg1] - s_scrEvaluateStringGlob.canonicalStringLookup[*(unsigned int *)arg2]);
}

/*
==============
Scr_CompileCallExpression
==============
*/
char Scr_CompileCallExpression(scrContext_t *scrContext, sval_u *expr)
{
  sval_u *node; 
  scr_string_t Builtin; 
  const char *ScriptFunction; 
  const char *v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  unsigned int Method; 
  scr_string_t v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  int v17; 
  const char *v18; 
  unsigned int Function; 
  BuiltinType type; 
  char *pName; 

  node = expr->node;
  if ( expr->node->type != 26 )
  {
    if ( expr->node->type == 27 )
    {
      Builtin = Scr_GetBuiltin(node[2]);
      if ( Builtin )
      {
        pName = (char *)SL_ConvertToString(Builtin);
        type = BUILTIN_ANY;
        Method = Scr_GetMethod(scrContext, (const char **)&pName, &type);
        if ( Method )
        {
          v7 = (const char *)scrContext->m_pMethTable[Method - scrContext->m_methBegin];
          if ( Scr_IsInOpcodeMemory(scrContext, v7) )
          {
            v8 = "!Scr_IsInOpcodeMemory( scrContext, codePos )";
            v9 = 1628;
            v10 = "( !Scr_IsInOpcodeMemory( scrContext, codePos ) )";
LABEL_10:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", v9, ASSERT_TYPE_ASSERT, v10, (const char *)&queryFormat, v8) )
              __debugbreak();
          }
LABEL_12:
          Scr_CompilePrimitiveExpression(scrContext, node + 1);
          node[2].node = (sval_u *)v7;
          Scr_CompileCallExpressionList(scrContext, node + 3);
          *expr = debugger_node3(scrContext, 27, expr->node[1], expr->node[2], expr->node[3]);
          return 1;
        }
      }
      else
      {
        ScriptFunction = Scr_GetScriptFunction(scrContext, node[2]);
        v7 = ScriptFunction;
        if ( ScriptFunction )
        {
          if ( !Scr_IsInOpcodeMemory(scrContext, ScriptFunction) )
          {
            v8 = "Scr_IsInOpcodeMemory( scrContext, codePos )";
            v9 = 1616;
            v10 = "( Scr_IsInOpcodeMemory( scrContext, codePos ) )";
            goto LABEL_10;
          }
          goto LABEL_12;
        }
      }
    }
    return 0;
  }
  v13 = Scr_GetBuiltin(node[1]);
  if ( v13 )
  {
    pName = (char *)SL_ConvertToString(v13);
    type = BUILTIN_ANY;
    Function = Scr_GetFunction(scrContext, (const char **)&pName, &type);
    if ( Function )
    {
      v15 = (const char *)scrContext->m_pFuncTable[Function - scrContext->m_funcBegin];
      if ( Scr_IsInOpcodeMemory(scrContext, v15) )
      {
        v16 = "!Scr_IsInOpcodeMemory( scrContext, codePos )";
        v17 = 1586;
        v18 = "( !Scr_IsInOpcodeMemory( scrContext, codePos ) )";
LABEL_20:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", v17, ASSERT_TYPE_ASSERT, v18, (const char *)&queryFormat, v16) )
          __debugbreak();
      }
LABEL_22:
      node[1].node = (sval_u *)v15;
      Scr_CompileCallExpressionList(scrContext, node + 2);
      *expr = debugger_node2(scrContext, 26, expr->node[1], expr->node[2]);
      return 1;
    }
  }
  else
  {
    v14 = Scr_GetScriptFunction(scrContext, node[1]);
    v15 = v14;
    if ( v14 )
    {
      if ( !Scr_IsInOpcodeMemory(scrContext, v14) )
      {
        v16 = "Scr_IsInOpcodeMemory( scrContext, codePos )";
        v17 = 1574;
        v18 = "( Scr_IsInOpcodeMemory( scrContext, codePos ) )";
        goto LABEL_20;
      }
      goto LABEL_22;
    }
  }
  return 0;
}

/*
==============
Scr_CompileCallExpressionList
==============
*/
void Scr_CompileCallExpressionList(scrContext_t *scrContext, sval_u *exprlist)
{
  sval_u v4; 
  sval_u v5; 
  sval_u *i; 

  v4 = debugger_node0(scrContext, 0);
  v5 = v4;
  for ( i = exprlist->node->node; i; v5 = v4 )
  {
    Scr_CompileExpression(scrContext, i->node);
    v4 = debugger_prepend_node(scrContext, *i->node, v5);
    i = i[1].node;
  }
  *exprlist = v4;
}

/*
==============
Scr_CompileCanonicalString
==============
*/
__int64 Scr_CompileCanonicalString(scr_string_t stringValue)
{
  const char *v2; 
  int v3; 
  int v4; 
  char *v5; 
  unsigned __int8 *v6; 
  int v7; 
  const char *v8; 
  unsigned __int8 v9; 
  int v10; 

  Scr_SortArchivedStrings();
  v2 = SL_ConvertToString(stringValue);
  v3 = g_canonicalStrCount;
  v4 = 0;
  v5 = (char *)v2;
  if ( !g_canonicalStrCount )
    return 0i64;
  while ( 1 )
  {
    v6 = (unsigned __int8 *)v5;
    v7 = (v3 + v4) / 2;
    v8 = (const char *)(s_scrEvaluateStringGlob.archivedCanonicalStrings[v7].value - (const char *)v5);
    while ( 1 )
    {
      v9 = *v6;
      if ( *v6 != v8[(_QWORD)v6] )
        break;
      ++v6;
      if ( !v9 )
      {
        v10 = 0;
        goto LABEL_7;
      }
    }
    v10 = v9 < (unsigned int)v8[(_QWORD)v6] ? -1 : 1;
LABEL_7:
    if ( v10 >= 0 )
      break;
    v3 = (v3 + v4) / 2;
LABEL_11:
    if ( v4 >= v3 )
      return 0i64;
  }
  if ( v10 > 0 )
  {
    v4 = v7 + 1;
    goto LABEL_11;
  }
  return s_scrEvaluateStringGlob.archivedCanonicalStrings[v7].canonicalStr;
}

/*
==============
Scr_CompileExpression
==============
*/
void Scr_CompileExpression(scrContext_t *scrContext, sval_u *expr)
{
  sval_u *node; 
  int type; 
  sval_u v6; 

  node = expr->node;
  switch ( node->type )
  {
    case 7:
      Scr_CompilePrimitiveExpression(scrContext, node + 1);
      type = 7;
      v6 = expr->node[1];
      goto LABEL_8;
    case 8:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2334, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
        __debugbreak();
      break;
    case 0x37:
    case 0x38:
      Scr_CompileExpression(scrContext, node + 1);
      Scr_CompileExpression(scrContext, expr->node + 2);
      *expr = debugger_node2(scrContext, expr->node->type, expr->node[1], expr->node[2]);
      break;
    case 0x39:
      Scr_CompileExpression(scrContext, node + 1);
      Scr_CompileExpression(scrContext, expr->node + 2);
      *expr = debugger_node3(scrContext, expr->node->type, expr->node[1], expr->node[2], expr->node[3]);
      break;
    case 0x3A:
    case 0x3B:
      Scr_CompileExpression(scrContext, node + 1);
      v6 = expr->node[1];
      type = expr->node->type;
LABEL_8:
      *expr = debugger_node1(scrContext, type, v6);
      break;
    default:
      return;
  }
}

/*
==============
Scr_CompilePrimitiveExpression
==============
*/
void Scr_CompilePrimitiveExpression(scrContext_t *scrContext, sval_u *expr)
{
  sval_u *node; 
  int type; 
  int ExpressionCount; 
  sval_u ***v7; 
  sval_u **v8; 
  sval_u v9; 
  sval_u *v10; 
  sval_u *p_val1; 
  sval_u *v12; 
  sval_u v13; 
  const char *v14; 
  sval_u v15; 
  sval_u val1; 
  sval_u val2; 
  sval_u val3; 

  node = expr->node;
  type = expr->node->type;
  switch ( type )
  {
    case 9:
    case 10:
    case 11:
    case 12:
      v13 = debugger_node1(scrContext, type, node[1]);
      break;
    case 13:
    case 14:
      v14 = SL_ConvertToString(node[1].stringValue);
      v13 = debugger_string(scrContext, expr->node->type, v14);
      break;
    case 20:
      Scr_CompileVariableExpression(scrContext, node + 1);
      v15.type = AllocValue(scrContext);
      v13 = debugger_node2(scrContext, 20, expr->node[1], v15);
      break;
    case 22:
      if ( !Scr_CompileCallExpression(scrContext, node + 1) )
        goto LABEL_21;
      v15.type = AllocValue(scrContext);
      v13 = debugger_node2(scrContext, 22, expr->node[1], v15);
      break;
    case 36:
      Scr_CompileExpression(scrContext, node + 1);
      v13 = debugger_node1(scrContext, 36, expr->node[1]);
      break;
    case 37:
      Scr_CompileExpression(scrContext, node + 1);
      v13 = debugger_node1(scrContext, 37, expr->node[1]);
      break;
    case 38:
    case 42:
    case 43:
    case 44:
    case 75:
    case 81:
    case 82:
      goto $LN9_126;
    case 39:
      v13 = debugger_node2(scrContext, type, 0i64, 0i64);
      break;
    case 54:
      ExpressionCount = Scr_GetExpressionCount(node[1]);
      if ( ExpressionCount == 1 )
      {
        v7 = (sval_u ***)node[1].node;
        v8 = *v7;
        Scr_CompileExpression(scrContext, **v7);
        v9 = **v8;
      }
      else if ( ExpressionCount == 3 )
      {
        v10 = node[1].node->node;
        if ( v10 )
        {
          p_val1 = &val1;
          do
          {
            Scr_CompileExpression(scrContext, v10->node);
            v12 = v10->node;
            ++p_val1;
            v10 = v10[1].node;
            p_val1[-1] = *v12;
          }
          while ( v10 );
        }
        v9 = debugger_node3(scrContext, 90, val1, val2, val3);
      }
      else
      {
        v9 = debugger_node0(scrContext, 95);
      }
      node[1] = v9;
      v13 = debugger_node1(scrContext, 54, expr->node[1]);
      break;
    case 60:
      Scr_CompilePrimitiveExpression(scrContext, node + 1);
      v13 = debugger_node1(scrContext, 60, expr->node[1]);
      break;
    case 84:
      ++scrContext->m_vmDebugPub.checkBreakon;
      scrContext->m_evaluateGlob.m_breakonExpr = 1;
      Scr_CompilePrimitiveExpression(scrContext, expr->node + 1);
      Scr_CompileExpression(scrContext, expr->node + 2);
      v13 = debugger_node3(scrContext, expr->node->type, expr->node[1], expr->node[2], 0i64);
      break;
    default:
LABEL_21:
      type = 95;
$LN9_126:
      v13 = debugger_node0(scrContext, type);
      break;
  }
  *expr = v13;
}

/*
==============
Scr_CompileText
==============
*/
void Scr_CompileText(scrContext_t *scrContext, const char *text, ScriptExpression_t *scriptExpr)
{
  scrContext->m_parseTreeGlob.m_debugExprHead = NULL;
  scrContext->m_evaluateGlob.m_breakonExpr = 0;
  Scr_CompileTextInternal(scrContext, text, scriptExpr);
  if ( !scrContext->m_parseTreeGlob.m_debugExprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2480, ASSERT_TYPE_ASSERT, "( scrContext.m_parseTreeGlob.m_debugExprHead )", (const char *)&queryFormat, "scrContext.m_parseTreeGlob.m_debugExprHead") )
    __debugbreak();
  scriptExpr->exprHead = scrContext->m_parseTreeGlob.m_debugExprHead;
  scriptExpr->breakonExpr = scrContext->m_evaluateGlob.m_breakonExpr;
}

/*
==============
Scr_CompileTextInternal
==============
*/
void Scr_CompileTextInternal(scrContext_t *scrContext, const char *text, ScriptExpression_t *scriptExpr)
{
  const char *error_message; 
  _DWORD *node; 
  const char *m_scriptPos; 
  bool v9; 
  HunkUser *v10; 
  const char *v11; 
  const char *v12; 
  char *v13; 

  if ( !strcmp_0(text, "<locals>") )
  {
    scriptExpr->parseData = debugger_node1(scrContext, 93, 0i64);
    return;
  }
  g_pScrCompileContext = scrContext;
  Scr_InitAllocNode(scrContext);
  scrContext->m_compilePub.parseBuf = text;
  scrContext->m_compilePub.in_ptr = "*";
  scrContext->m_compilePub.in_ptr_valid = 0;
  if ( scrContext->m_varPub.error_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2396, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_message )", (const char *)&queryFormat, "!pScrVarPub->error_message") )
    __debugbreak();
  if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2398, ASSERT_TYPE_ASSERT, "( pScrVarPub->evaluate )", (const char *)&queryFormat, "pScrVarPub->evaluate") )
    __debugbreak();
  ScriptParse(&scriptExpr->parseData, 2u);
  scrContext->m_compilePub.parseBuf = NULL;
  error_message = scrContext->m_varPub.error_message;
  if ( error_message )
  {
    if ( *text )
      Com_PrintError(23, "%s\n", error_message);
    Scr_ClearErrorMessage(scrContext);
    scriptExpr->parseData = debugger_node0(scrContext, 95);
  }
  else
  {
    scrContext->m_compilePub.developer_statement = 3;
    node = scriptExpr->parseData.node;
    scriptExpr->parseData.node = scriptExpr->parseData.node[1].node;
    if ( *node != 74 )
    {
      if ( *node != 94 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2428, ASSERT_TYPE_ASSERT, "( expr.node[0].type == ENUM_statement )", (const char *)&queryFormat, "expr.node[0].type == ENUM_statement") )
        __debugbreak();
      v10 = Mem_HunkUser_Create(0x4000000ui64, "Scr_CompileTextInternal", TRACK_DEBUG, MEM_ALLOC_FLAG_NONE);
      TempMemoryReset(v10);
      v11 = TempMalloc(0i64);
      Scr_CompileStatement(scrContext, scriptExpr->parseData);
      v12 = scrContext->m_varPub.error_message;
      if ( v12 )
      {
        Com_PrintError(23, "%s\n", v12);
        Scr_ClearErrorMessage(scrContext);
        scriptExpr->parseData = debugger_node0(scrContext, 96);
        SL_ShutdownSystem(2u);
        Mem_HunkUser_Destroy(v10);
      }
      else
      {
        v13 = TempMalloc(0i64);
        if ( v13 < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2441, ASSERT_TYPE_ASSERT, "( end >= start )", (const char *)&queryFormat, "end >= start") )
          __debugbreak();
        if ( v13 - v11 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2442, ASSERT_TYPE_ASSERT, "( ( end - start ) <= 2147483647 )", (const char *)&queryFormat, "( end - start ) <= INT_MAX") )
          __debugbreak();
        scriptExpr->parseData = debugger_buffer(scrContext, 94, v11, (int)v13 - (int)v11, 0x20ui64);
        Mem_HunkUser_Destroy(v10);
      }
      goto LABEL_30;
    }
    m_scriptPos = scrContext->m_varPub.varUsagePos.m_scriptPos;
    ScriptCodePos::SetVarUsagePosIfNull(&scrContext->m_varPub.varUsagePos, "<debug expression>");
    Scr_CompileExpression(scrContext, &scriptExpr->parseData);
    v9 = scrContext->m_varPub.error_message == NULL;
    scrContext->m_varPub.varUsagePos.m_genericPos = (unsigned __int64)m_scriptPos;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2423, ASSERT_TYPE_ASSERT, "( !pScrVarPub->error_message )", (const char *)&queryFormat, "!pScrVarPub->error_message") )
      __debugbreak();
  }
  SL_ShutdownSystem(2u);
LABEL_30:
  Scr_ShutdownAllocNode(scrContext);
}

/*
==============
Scr_CompileVariableExpression
==============
*/
void Scr_CompileVariableExpression(scrContext_t *scrContext, sval_u *expr)
{
  sval_u *node; 
  scrContext_t *v5; 
  int v6; 
  sval_u *v7; 
  int type; 
  sval_u v9; 
  sval_u v10; 
  sval_u v11; 
  unsigned int v12; 
  const char *v13; 
  const char *v14; 
  char v15; 
  unsigned int v16; 
  unsigned int v17; 
  VariableType ObjectType; 
  int v19; 
  sval_u val2; 
  sval_u val1; 

  node = expr->node;
  switch ( expr->node->type )
  {
    case 5:
      expr->node[1].type = Scr_CompileCanonicalString(node[1].stringValue);
      v5 = scrContext;
      if ( !expr->node[1].type )
      {
        v6 = 4;
        goto LABEL_40;
      }
      val2.type = AllocValue(scrContext);
      *expr = debugger_node4(scrContext, 5, expr->node[1], 0i64, 0i64, val2);
      return;
    case 0xF:
      Scr_CompileExpression(scrContext, node + 2);
      Scr_CompilePrimitiveExpression(scrContext, expr->node + 1);
      *expr = debugger_node2(scrContext, 15, expr->node[1], expr->node[2]);
      return;
    case 0x11:
      v7 = node[1].node;
      type = v7->type;
      if ( v7->type == 20 )
      {
        Scr_CompileVariableExpression(scrContext, v7 + 1);
        v12 = AllocValue(scrContext);
        type = 20;
        goto LABEL_17;
      }
      if ( type == 22 )
      {
        Scr_CompileCallExpression(scrContext, v7 + 1);
        v12 = AllocValue(scrContext);
        type = 22;
LABEL_17:
        val2.type = v12;
        v10 = val2;
        v11 = node[1].node[1];
        goto LABEL_18;
      }
      if ( type == 39 )
      {
        v10.node = NULL;
        v11.node = NULL;
LABEL_18:
        v9 = debugger_node2(scrContext, type, v11, v10);
        goto LABEL_19;
      }
      if ( ((type - 42) & 0xFFFFFFFD) != 0 )
        type = 95;
      v9 = debugger_node0(scrContext, type);
LABEL_19:
      node[1] = v9;
      expr->node[2].type = Scr_CompileCanonicalString(expr->node[2].stringValue);
      v5 = scrContext;
      if ( !expr->node[2].type )
      {
        v6 = 16;
        goto LABEL_40;
      }
      *expr = debugger_node3(scrContext, 17, expr->node[1], expr->node[2], 0i64);
      return;
    case 0x12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 923, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
        __debugbreak();
      return;
    case 0x3D:
      Scr_CompilePrimitiveExpression(scrContext, node + 1);
      *expr = debugger_node1(scrContext, 61, expr->node[1]);
      return;
    case 0x5B:
      v13 = SL_ConvertToString(node[1].stringValue);
      v14 = v13;
      v15 = *v13;
      if ( *v13 == 116 )
      {
        v16 = atoi(v13 + 1);
        v17 = v16;
        if ( !v16 )
          goto LABEL_39;
        if ( v16 >= scrContext->m_variableListParentSize )
          goto LABEL_39;
        val2.type = v16;
        if ( IsObjectFree(scrContext, v16) )
          goto LABEL_39;
        ObjectType = GetObjectType(scrContext, v17);
        if ( (unsigned __int8)(ObjectType - 17) > 3u && ObjectType != VAR_DEAD_THREAD )
          goto LABEL_39;
        *expr = debugger_node1(scrContext, 92, val2);
        AddRefToObject(scrContext, v17);
      }
      else if ( v15 == 97 )
      {
        v19 = atoi(v13 + 1);
        if ( v19 <= 0 && (v14[1] != serv[0] || v14[2] != serv[1]) )
          goto LABEL_39;
        val2.type = v19;
        *expr = debugger_node1(scrContext, 98, val2);
      }
      else
      {
        val1.type = (unsigned __int8)Scr_GetClassnumForCharId(scrContext, v15);
        if ( val1.type == 11 )
          goto LABEL_39;
        val2.type = atoi(v14 + 1);
        if ( !val2.type && v14[1] != 48 )
          goto LABEL_39;
        *expr = debugger_node3(scrContext, 91, val1, val2, 0i64);
      }
      return;
    default:
LABEL_39:
      v6 = 95;
      v5 = scrContext;
LABEL_40:
      *expr = debugger_node0(v5, v6);
      return;
  }
}

/*
==============
Scr_EndLoadEvaluate
==============
*/
void Scr_EndLoadEvaluate(const scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.developer )
    Scr_ArchiveCanonicalStrings(scrContext);
}

/*
==============
Scr_EvalArrayVariable
==============
*/
void Scr_EvalArrayVariable(scrContext_t *scrContext, unsigned int arrayId, VariableValue *value)
{
  int type; 
  VariableUnion u; 
  VariableValue valuea; 

  if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 527, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
    __debugbreak();
  valuea.type = VAR_POINTER;
  valuea.u.intValue = arrayId;
  AddRefToObject(scrContext, arrayId);
  if ( scrContext->m_varPub.error_message || (Scr_EvalArray(scrContext, &valuea, value), scrContext->m_varPub.error_message) )
  {
    RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
    type = (unsigned __int8)valuea.type;
    u = valuea.u;
    value->type = VAR_UNDEFINED;
    RemoveRefToValue(scrContext, type, u);
  }
}

/*
==============
Scr_EvalCallExpression
==============
*/
void Scr_EvalCallExpression(scrContext_t *scrContext, sval_u expr, unsigned int localId, VariableValue *value)
{
  if ( expr.node->type == 26 )
  {
    Scr_EvalFunction(scrContext, expr.node[1], expr.node[2], localId, value);
  }
  else if ( expr.node->type == 27 )
  {
    Scr_EvalMethod(scrContext, expr.node[1], expr.node[2], expr.node[3], localId, value);
  }
}

/*
==============
Scr_EvalFieldVariable
==============
*/
void Scr_EvalFieldVariable(scrContext_t *scrContext, unsigned int fieldName, VariableValue *value, unsigned int objectId)
{
  if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1175, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
    __debugbreak();
  Scr_EvalFieldVariableInternal(scrContext, objectId, fieldName, value);
}

/*
==============
Scr_EvalFieldVariableInternal
==============
*/
void Scr_EvalFieldVariableInternal(scrContext_t *scrContext, unsigned int objectId, unsigned int fieldName, VariableValue *value)
{
  const char *v8; 
  ComErrorCode v9; 
  VariableValue *top; 
  unsigned int outparamcount; 

  if ( !fieldName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1138, ASSERT_TYPE_ASSERT, "( fieldName )", (const char *)&queryFormat, "fieldName") )
    __debugbreak();
  if ( !IsFieldObject(scrContext, objectId) )
  {
    value->type = VAR_UNDEFINED;
    v8 = "not a field object";
    v9 = COM_ERR_1919;
LABEL_9:
    Scr_Error(v9, scrContext, v8);
    return;
  }
  top = scrContext->m_vmPub.top;
  outparamcount = scrContext->m_vmPub.outparamcount;
  scrContext->m_vmPub.outparamcount = 0;
  Scr_FindVariableField_Out(scrContext, objectId, fieldName, value);
  scrContext->m_vmPub.outparamcount = outparamcount;
  scrContext->m_vmPub.top = top;
  if ( value->type == VAR_UNDEFINED && !FindVariable(scrContext, objectId, fieldName) )
  {
    v8 = "unknown field";
    v9 = COM_ERR_1920;
    goto LABEL_9;
  }
}

/*
==============
Scr_EvalFunction
==============
*/
void Scr_EvalFunction(scrContext_t *scrContext, sval_u func_name, sval_u params, unsigned int localId, VariableValue *value)
{
  scrContext_t *v6; 
  int v7; 
  BOOL v8; 
  unsigned int outparamcount; 
  int ProgramBufferOffset; 
  int v11; 
  int m_errorLevel; 
  __int64 v13; 
  int v14; 

  v6 = scrContext;
  Scr_PreEvalBuiltin(scrContext, params, localId);
  if ( !v6->m_varPub.error_message )
  {
    if ( Scr_IsInOpcodeMemory(v6, func_name.codePosValue) )
    {
      v7 = Scr_IgnoreErrors(v6);
      v8 = v7 == 0;
      if ( !v7 )
        Scr_EnableBreakpoints(v6, 0);
      outparamcount = v6->m_vmPub.outparamcount;
      *(_QWORD *)&v6->m_vmPub.inparamcount = outparamcount;
      ProgramBufferOffset = GetProgramBufferOffset(v6, func_name.codePosValue);
      Scr_AddExecThread(v6, ProgramBufferOffset, outparamcount);
      --v6->m_vmPub.outparamcount;
      ++v6->m_vmPub.inparamcount;
      if ( v8 )
      {
        if ( !Scr_IgnoreErrors(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1850, ASSERT_TYPE_ASSERT, "( Scr_IgnoreErrors( scrContext ) )", (const char *)&queryFormat, "Scr_IgnoreErrors( scrContext )") )
          __debugbreak();
        Scr_EnableBreakpoints(v6, 1);
      }
    }
    else
    {
      if ( ++v6->m_errorLevel >= 0x41u )
      {
        v14 = 65;
        m_errorLevel = v6->m_errorLevel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1857, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_errorLevel ) < (unsigned)( ( sizeof( *array_counter( scrContext.m_error ) ) + 0 ) )", "scrContext.m_errorLevel doesn't index ARRAY_COUNT( scrContext.m_error )\n\t%i not in [0, %i)", m_errorLevel, v14) )
          __debugbreak();
      }
      v6->m_largeLocalMark[v6->m_errorLevel] = Mem_LargeLocal_GetMark();
      v11 = setjmp(v6->m_error[(__int64)v6->m_errorLevel]);
      v6 = scrContext;
      if ( !v11 )
        ((void (__fastcall *)(scrContext_t *))func_name.node)(scrContext);
      Mem_LargeLocal_ResetToMark(scrContext->m_largeLocalMark[scrContext->m_errorLevel]);
      if ( scrContext->m_errorLevel < 0 )
      {
        LODWORD(v13) = scrContext->m_errorLevel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1873, ASSERT_TYPE_ASSERT, "( ( scrContext.m_errorLevel >= 0 ) )", "%s\n\t( scrContext.m_errorLevel ) = %i", "( scrContext.m_errorLevel >= 0 )", v13) )
          __debugbreak();
      }
      --scrContext->m_errorLevel;
    }
  }
  Scr_PostEvalBuiltin(v6, value);
}

/*
==============
Scr_EvalMethod
==============
*/
void Scr_EvalMethod(scrContext_t *scrContext, sval_u expr, sval_u func_name, sval_u params, unsigned int localId, VariableValue *value)
{
  scrContext_t *v8; 
  VariableType type; 
  const char *NameForType; 
  const char *v11; 
  int intValue; 
  int v13; 
  BOOL v14; 
  unsigned int outparamcount; 
  int ProgramBufferOffset; 
  int v17; 
  VariableType ObjectType; 
  const char *v19; 
  const char *v20; 
  scr_entref_t EntityIdRef; 
  int m_errorLevel; 
  __int64 v23; 
  int v24; 
  int id; 
  VariableValue objId; 

  v8 = scrContext;
  Scr_EvalPrimitiveExpression(scrContext, expr, localId, &objId);
  type = objId.type;
  if ( objId.type != VAR_POINTER )
  {
    v8->m_varPub.error_index = -1;
    NameForType = Scr_GetNameForType(type);
    v11 = j_va("%s is not an object", NameForType);
    Scr_Error(COM_ERR_1924, v8, v11);
  }
  Scr_PreEvalBuiltin(v8, params, localId);
  if ( !v8->m_varPub.error_message )
  {
    intValue = objId.u.intValue;
    id = objId.u.intValue;
    if ( Scr_IsInOpcodeMemory(v8, func_name.codePosValue) )
    {
      v13 = Scr_IgnoreErrors(v8);
      v14 = v13 == 0;
      if ( !v13 )
        Scr_EnableBreakpoints(v8, 0);
      outparamcount = v8->m_vmPub.outparamcount;
      *(_QWORD *)&v8->m_vmPub.inparamcount = outparamcount;
      ProgramBufferOffset = GetProgramBufferOffset(v8, func_name.codePosValue);
      Scr_AddExecThreadInternal(v8, ProgramBufferOffset, intValue, outparamcount);
      --v8->m_vmPub.outparamcount;
      ++v8->m_vmPub.inparamcount;
      if ( v14 )
      {
        if ( !Scr_IgnoreErrors(v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1929, ASSERT_TYPE_ASSERT, "( Scr_IgnoreErrors( scrContext ) )", (const char *)&queryFormat, "Scr_IgnoreErrors( scrContext )") )
          __debugbreak();
        Scr_EnableBreakpoints(v8, 1);
      }
    }
    else
    {
      if ( ++v8->m_errorLevel >= 0x41u )
      {
        v24 = 65;
        m_errorLevel = v8->m_errorLevel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1936, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_errorLevel ) < (unsigned)( ( sizeof( *array_counter( scrContext.m_error ) ) + 0 ) )", "scrContext.m_errorLevel doesn't index ARRAY_COUNT( scrContext.m_error )\n\t%i not in [0, %i)", m_errorLevel, v24) )
          __debugbreak();
      }
      v8->m_largeLocalMark[v8->m_errorLevel] = Mem_LargeLocal_GetMark();
      v17 = setjmp(v8->m_error[(__int64)v8->m_errorLevel]);
      v8 = scrContext;
      if ( !v17 )
      {
        if ( GetObjectType(scrContext, id) != VAR_ENTITY )
        {
          ObjectType = GetObjectType(scrContext, id);
          scrContext->m_varPub.error_index = -1;
          v19 = Scr_GetNameForType(ObjectType);
          v20 = j_va("%s is not an entity", v19);
          Scr_Error(COM_ERR_1925, scrContext, v20);
        }
        EntityIdRef = Scr_GetEntityIdRef(scrContext, id);
        ((void (__fastcall *)(_QWORD, _QWORD))func_name.node)(scrContext, EntityIdRef);
      }
      Mem_LargeLocal_ResetToMark(scrContext->m_largeLocalMark[scrContext->m_errorLevel]);
      if ( scrContext->m_errorLevel < 0 )
      {
        LODWORD(v23) = scrContext->m_errorLevel;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1959, ASSERT_TYPE_ASSERT, "( ( scrContext.m_errorLevel >= 0 ) )", "%s\n\t( scrContext.m_errorLevel ) = %i", "( scrContext.m_errorLevel >= 0 )", v23) )
          __debugbreak();
      }
      --scrContext->m_errorLevel;
    }
  }
  Scr_PostEvalBuiltin(v8, value);
  RemoveRefToValue(v8, (unsigned __int8)objId.type, objId.u);
}

/*
==============
Scr_EvalPrimitiveExpression
==============
*/
void Scr_EvalPrimitiveExpression(scrContext_t *scrContext, sval_u expr, unsigned int localId, VariableValue *value)
{
  unsigned int canonicalString; 
  unsigned int String; 
  unsigned int Self; 
  int v10; 
  int type; 
  VariableType v12; 
  VariableUnion u; 
  VariableValue v14; 
  VariableValue valuea; 

  canonicalString = localId;
  switch ( expr.node->type )
  {
    case 9:
      value->type = VAR_INTEGER;
      value->u.intValue = expr.node[1].type;
      break;
    case 0xA:
      value->type = VAR_FLOAT;
      value->u.intValue = expr.node[1].type;
      break;
    case 0xB:
      value->type = VAR_INTEGER;
      value->u.intValue = -expr.node[1].type;
      break;
    case 0xC:
      value->type = VAR_FLOAT;
      value->u.floatValue = COERCE_FLOAT(expr.node[1].type ^ _xmm);
      break;
    case 0xD:
      value->type = VAR_STRING;
      goto LABEL_8;
    case 0xE:
      value->type = VAR_ISTRING;
LABEL_8:
      String = j_SL_GetString_(expr.node[1].codePosValue, 0, 21);
      Scr_SetStringValue(value, String);
      break;
    case 0x14:
      Scr_EvalVariableExpression(scrContext, expr.node[1], localId, value);
      break;
    case 0x16:
      Scr_EvalCallExpression(scrContext, expr.node[1], localId, value);
      break;
    case 0x24:
      Scr_EvalExpression_0(scrContext, expr.node[1], localId, value);
      Scr_IsDefined(scrContext, value);
      break;
    case 0x25:
      Scr_EvalExpression_0(scrContext, expr.node[1], localId, value);
      Scr_IsTrueOpcode(scrContext, value);
      break;
    case 0x26:
      value->type = VAR_UNDEFINED;
      break;
    case 0x27:
      if ( scrContext->m_evaluateGlob.freezeScope )
        canonicalString = expr.node[1].canonicalString;
      if ( canonicalString && Scr_IsThreadAlive(scrContext, canonicalString) )
      {
        Self = Scr_GetSelf(scrContext, canonicalString);
        value->type = VAR_POINTER;
        value->u.intValue = Self;
        v10 = Self;
        AddRefToObject(scrContext, Self);
      }
      else
      {
        canonicalString = 0;
        value->type = VAR_UNDEFINED;
        v10 = 0;
        Scr_Error(COM_ERR_1921, scrContext, "thread not active");
      }
      if ( scrContext->m_evaluateGlob.freezeObjects )
      {
        if ( expr.node[1].type != canonicalString || expr.node[2].type != v10 )
          scrContext->m_evaluateGlob.objectChanged = 1;
      }
      else
      {
        expr.node[1].type = canonicalString;
        expr.node[2].type = v10;
      }
      break;
    case 0x28:
      if ( !expr.node[2].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1271, ASSERT_TYPE_ASSERT, "( expr.node[2].objectIdValue != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "expr.node[2].objectIdValue != NULL_OBJECT_VARIABLE_ID") )
        __debugbreak();
      value->type = VAR_POINTER;
      type = expr.node[2].type;
      value->u.intValue = type;
      AddRefToObject(scrContext, type);
      break;
    case 0x2A:
      value->type = VAR_POINTER;
      value->u.intValue = scrContext->m_varPub.levelId;
      AddRefToObject(scrContext, scrContext->m_varPub.levelId);
      break;
    case 0x2B:
      Scr_EvalVariable_Out(scrContext, scrContext->m_varPub.gameId, value);
      break;
    case 0x2C:
      value->type = VAR_POINTER;
      value->u.intValue = scrContext->m_varPub.animId;
      AddRefToObject(scrContext, scrContext->m_varPub.animId);
      break;
    case 0x36:
      Scr_EvalExpression_0(scrContext, expr.node[1], localId, value);
      break;
    case 0x3C:
      Scr_EvalPrimitiveExpression(scrContext, expr.node[1], localId, value);
      Scr_EvalSizeValue(scrContext, value);
      break;
    case 0x4B:
      value->type = VAR_UNDEFINED;
      Scr_Error(COM_ERR_1922, scrContext, "cannot evaluate []");
      break;
    case 0x51:
      value->type = VAR_INTEGER;
      value->u.intValue = 0;
      break;
    case 0x52:
      value->type = VAR_INTEGER;
      value->u.intValue = 1;
      break;
    case 0x54:
      Scr_EvalPrimitiveExpression(scrContext, expr.node[1], localId, &valuea);
      Scr_EvalExpression_0(scrContext, expr.node[2], canonicalString, &v14);
      v12 = valuea.type;
      u = valuea.u;
      if ( valuea.type == VAR_POINTER && v14.type == VAR_STRING && scrContext->m_evaluateGlob.m_breakonObject == valuea.u.intValue && scrContext->m_evaluateGlob.m_breakonString == v14.u.intValue )
      {
        scrContext->m_evaluateGlob.m_breakonHit = 1;
        ++expr.node[3].type;
      }
      RemoveRefToValue(scrContext, (unsigned __int8)v12, u);
      RemoveRefToValue(scrContext, (unsigned __int8)v14.type, v14.u);
      value->type = VAR_INTEGER;
      value->u.intValue = expr.node[3].type;
      break;
    case 0x5F:
      value->type = VAR_UNDEFINED;
      Scr_Error(COM_ERR_1923, scrContext, "bad expression");
      break;
    default:
      return;
  }
}

/*
==============
Scr_EvalScriptExpression
==============
*/
_BOOL8 Scr_EvalScriptExpression(scrContext_t *scrContext, ScriptExpression_t *expr, unsigned int localId, VariableValue *value, bool freezeScope, bool freezeObjects)
{
  if ( !expr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2494, ASSERT_TYPE_ASSERT, "( expr )", (const char *)&queryFormat, "expr") )
    __debugbreak();
  scrContext->m_evaluateGlob.freezeScope = freezeScope;
  *(_WORD *)&scrContext->m_evaluateGlob.freezeObjects = freezeObjects;
  Scr_EvalExpression_0(scrContext, expr->parseData, localId, value);
  return scrContext->m_evaluateGlob.objectChanged;
}

/*
==============
Scr_EvalVariableExpression
==============
*/
void Scr_EvalVariableExpression(scrContext_t *scrContext, sval_u expr, unsigned int localId, VariableValue *value)
{
  unsigned int canonicalString; 
  const char *v8; 
  ComErrorCode v9; 
  int v10; 
  sval_u v11; 
  unsigned int Variable; 
  bool freezeObjects; 
  sval_u v14; 
  int type; 
  VariableUnion u; 
  sval_u *node; 
  unsigned int Self; 
  sval_u *v19; 
  unsigned int EntityId; 
  int v21; 
  int v22; 
  int v23; 
  VariableType v24; 
  const char *v25; 
  char *v26; 
  ComErrorCode v27; 
  int intValue; 
  VariableType ObjectType; 
  const char *v30; 
  unsigned int v31; 
  const char *NameForType; 
  __int64 v33; 
  VariableValue *v34; 
  VariableUnion v35; 
  int v36; 
  VariableValue out; 

  canonicalString = localId;
  switch ( expr.node->type )
  {
    case 4:
      v8 = "unknown variable";
      v9 = COM_ERR_1909;
      goto LABEL_89;
    case 5:
      if ( scrContext->m_evaluateGlob.freezeScope )
        canonicalString = expr.node[2].canonicalString;
      v10 = 0;
      if ( canonicalString && Scr_IsThreadAlive(scrContext, canonicalString) )
      {
        v11 = expr.node[1];
        if ( !v11.type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 578, ASSERT_TYPE_ASSERT, "( expr.stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "expr.stringValue != NULL_SCR_STRING") )
          __debugbreak();
        Variable = FindVariable(scrContext, canonicalString, v11.canonicalString);
        if ( Variable )
        {
          Scr_EvalVariable_Out(scrContext, Variable, value);
        }
        else
        {
          value->type = VAR_UNDEFINED;
          Scr_Error(COM_ERR_1903, scrContext, "unknown variable");
        }
        if ( !scrContext->m_varPub.error_message )
        {
          AddRefToValue(scrContext, (unsigned __int8)value->type, value->u);
          v10 = Scr_EvalFieldObject(scrContext, expr.node[4].canonicalString, value);
          Scr_ClearErrorMessage(scrContext);
        }
      }
      else
      {
        value->type = VAR_UNDEFINED;
        canonicalString = 0;
        Scr_Error(COM_ERR_1910, scrContext, "thread not active");
      }
      freezeObjects = scrContext->m_evaluateGlob.freezeObjects;
      if ( freezeObjects )
      {
        if ( expr.node[2].type != canonicalString )
          scrContext->m_evaluateGlob.objectChanged = 1;
      }
      else
      {
        expr.node[2].type = canonicalString;
        freezeObjects = scrContext->m_evaluateGlob.freezeObjects;
      }
      if ( freezeObjects )
        goto LABEL_67;
      expr.node[3].type = v10;
      return;
    case 6:
      v8 = "thread not active";
      v9 = COM_ERR_1911;
      goto LABEL_89;
    case 0xF:
      v14 = expr.node[1];
      Scr_EvalExpression_0(scrContext, expr.node[2], localId, value);
      Scr_EvalPrimitiveExpression(scrContext, v14, canonicalString, &out);
      if ( scrContext->m_varPub.error_message || (Scr_EvalArray(scrContext, &out, value), scrContext->m_varPub.error_message) )
      {
        RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
        type = (unsigned __int8)out.type;
        u = out.u;
        value->type = VAR_UNDEFINED;
        RemoveRefToValue(scrContext, type, u);
      }
      return;
    case 0x10:
      v8 = "unknown field";
      v9 = COM_ERR_1912;
      goto LABEL_89;
    case 0x11:
      node = expr.node[1].node;
      switch ( node->type )
      {
        case 0x14:
          Scr_EvalVariableExpression(scrContext, node[1], localId, &out);
          goto LABEL_31;
        case 0x16:
          v19 = node[1].node;
          if ( v19->type == 26 )
          {
            Scr_EvalFunction(scrContext, v19[1], v19[2], localId, &out);
          }
          else if ( v19->type == 27 )
          {
            Scr_EvalMethod(scrContext, v19[1], v19[2], v19[3], localId, &out);
          }
LABEL_31:
          Self = Scr_EvalFieldObject(scrContext, node[2].canonicalString, &out);
          break;
        case 0x27:
          if ( scrContext->m_evaluateGlob.freezeScope )
            canonicalString = node[1].canonicalString;
          if ( canonicalString && Scr_IsThreadAlive(scrContext, canonicalString) )
          {
            Self = Scr_GetSelf(scrContext, canonicalString);
          }
          else
          {
            Self = 0;
            canonicalString = 0;
            Scr_Error(COM_ERR_1917, scrContext, "thread not active");
          }
          if ( scrContext->m_evaluateGlob.freezeObjects )
          {
            if ( node[1].type != canonicalString || node[2].type != Self )
              scrContext->m_evaluateGlob.objectChanged = 1;
          }
          else
          {
            node[1].type = canonicalString;
            node[2].type = Self;
          }
          break;
        case 0x28:
          if ( !node[2].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1067, ASSERT_TYPE_ASSERT, "( expr.node[2].objectIdValue != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "expr.node[2].objectIdValue != NULL_OBJECT_VARIABLE_ID") )
            __debugbreak();
          Self = node[2].canonicalString;
          break;
        case 0x2A:
          Self = scrContext->m_varPub.levelId;
          break;
        case 0x2C:
          Self = scrContext->m_varPub.animId;
          break;
        default:
          Scr_Error(COM_ERR_1918, scrContext, "bad expression");
          Self = 0;
          break;
      }
      if ( scrContext->m_evaluateGlob.freezeObjects )
      {
        if ( expr.node[3].type != Self )
          scrContext->m_evaluateGlob.objectChanged = 1;
      }
      else
      {
        expr.node[3].type = Self;
      }
      if ( !Self )
      {
        value->type = VAR_UNDEFINED;
        v8 = "unknown object";
        v9 = COM_ERR_1913;
        goto LABEL_90;
      }
      Scr_EvalFieldVariableInternal(scrContext, Self, expr.node[2].canonicalString, value);
      return;
    case 0x12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 695, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
        __debugbreak();
      return;
    case 0x13:
      v8 = "unknown object";
      v9 = COM_ERR_1914;
      goto LABEL_89;
    case 0x3D:
      Scr_EvalPrimitiveExpression(scrContext, expr.node[1], localId, value);
      v24 = value->type;
      if ( v24 == VAR_POINTER )
      {
        intValue = value->u.intValue;
        ObjectType = GetObjectType(scrContext, value->u.intValue);
        if ( (unsigned __int8)ObjectType >= VAR_THREAD )
        {
          if ( (unsigned __int8)ObjectType <= VAR_CHILD_THREAD )
          {
            value->type = VAR_POINTER;
            v31 = Scr_GetSelf(scrContext, intValue);
            value->u.intValue = v31;
            AddRefToObject(scrContext, v31);
            RemoveRefToObject(scrContext, intValue);
            return;
          }
          if ( ObjectType == VAR_DEAD_THREAD )
          {
            v30 = "thread not active";
            v27 = COM_ERR_1906;
            goto LABEL_84;
          }
        }
        NameForType = Scr_GetNameForType(value->type);
        v26 = j_va("self cannot be applied to %s", NameForType);
        v27 = COM_ERR_1907;
      }
      else
      {
        v25 = Scr_GetNameForType(v24);
        v26 = j_va("self cannot be applied to %s", v25);
        v27 = COM_ERR_1905;
      }
      v30 = v26;
LABEL_84:
      Scr_Error(v27, scrContext, v30);
      RemoveRefToValue(scrContext, (unsigned __int8)value->type, value->u);
      value->type = VAR_UNDEFINED;
      return;
    case 0x5B:
      EntityId = Scr_FindEntityId(scrContext, expr.node[2].canonicalString, (EntityClass)LOBYTE(expr.node[1].type), LOCAL_CLIENT_0);
      v10 = EntityId;
      if ( EntityId )
      {
        value->type = VAR_POINTER;
        value->u.intValue = EntityId;
        AddRefToObject(scrContext, EntityId);
      }
      else
      {
        value->type = VAR_UNDEFINED;
        Scr_Error(COM_ERR_1904, scrContext, "unknown object");
        v10 = 0;
      }
      if ( scrContext->m_evaluateGlob.freezeObjects )
      {
LABEL_67:
        if ( expr.node[3].type != v10 )
          scrContext->m_evaluateGlob.objectChanged = 1;
      }
      else
      {
        expr.node[3].type = v10;
      }
      return;
    case 0x5C:
      v21 = expr.node[1].type;
      if ( v21 && Scr_IsThreadAlive(scrContext, v21) )
      {
        v22 = expr.node[1].type;
        value->u.intValue = v22;
        value->type = VAR_POINTER;
        AddRefToObject(scrContext, v22);
        return;
      }
      v23 = expr.node[1].type;
      if ( v23 )
      {
        RemoveRefToObject(scrContext, v23);
        expr.node[1].type = 0;
      }
      value->type = VAR_UNDEFINED;
      v8 = "thread not active";
      v9 = COM_ERR_1915;
      goto LABEL_90;
    case 0x5F:
      v8 = "bad expression";
      v9 = COM_ERR_1916;
LABEL_89:
      value->type = VAR_UNDEFINED;
      goto LABEL_90;
    case 0x62:
      v33 = expr.node[1].canonicalString;
      if ( (unsigned int)v33 >= scrContext->m_vmPub.breakpointOutparamcount )
      {
        value->type = VAR_UNDEFINED;
        v8 = j_va("parameter %d does not exist", v33);
        v9 = COM_ERR_1908;
LABEL_90:
        Scr_Error(v9, scrContext, v8);
      }
      else
      {
        v34 = &scrContext->m_vmPub.top[-(unsigned int)v33];
        v35 = v34->u;
        value->u.scriptCodePosValue = v34->u.scriptCodePosValue;
        v36 = (unsigned __int8)v34->type;
        value->type = v36;
        AddRefToValue(scrContext, v36, v35);
      }
      return;
    default:
      return;
  }
}

/*
==============
Scr_FreeDebugExprValue
==============
*/
void Scr_FreeDebugExprValue(scrContext_t *scrContext, sval_u val)
{
  int type; 
  int v5; 

  type = val.node->type;
  if ( type >= 5 )
  {
    if ( type <= 6 )
    {
      if ( !val.node[4].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2568, ASSERT_TYPE_ASSERT, "( val.node[4].childIdValue )", (const char *)&queryFormat, "val.node[4].childIdValue") )
        __debugbreak();
      FreeValue(scrContext, val.node[4].canonicalString);
    }
    else if ( ((type - 20) & 0xFFFFFFFD) != 0 )
    {
      if ( type == 92 )
      {
        v5 = val.node[1].type;
        if ( v5 )
        {
          RemoveRefToObject(scrContext, v5);
          val.node[1].type = 0;
        }
      }
    }
    else
    {
      if ( !val.node[2].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2574, ASSERT_TYPE_ASSERT, "( val.node[2].childIdValue )", (const char *)&queryFormat, "val.node[2].childIdValue") )
        __debugbreak();
      FreeValue(scrContext, val.node[2].canonicalString);
    }
  }
}

/*
==============
Scr_GetCanonicalString
==============
*/
const char *Scr_GetCanonicalString(unsigned int fieldName)
{
  __int64 v1; 
  __int64 v3; 

  v1 = fieldName;
  Scr_SortArchivedStrings();
  if ( !(_DWORD)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 197, ASSERT_TYPE_ASSERT, "( fieldName )", (const char *)&queryFormat, "fieldName") )
    __debugbreak();
  if ( s_scrEvaluateStringGlob.canonicalStringLookup[v1] >= (unsigned int)g_canonicalStrCount )
  {
    LODWORD(v3) = s_scrEvaluateStringGlob.canonicalStringLookup[v1];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 198, ASSERT_TYPE_ASSERT, "(unsigned)( (unsigned)s_scrEvaluateStringGlob.canonicalStringLookup[fieldName] ) < (unsigned)( g_canonicalStrCount )", "(unsigned)s_scrEvaluateStringGlob.canonicalStringLookup[fieldName] doesn't index g_canonicalStrCount\n\t%i not in [0, %i)", v3, g_canonicalStrCount) )
      __debugbreak();
  }
  return s_scrEvaluateStringGlob.archivedCanonicalStrings[s_scrEvaluateStringGlob.canonicalStringLookup[v1]].value;
}

/*
==============
Scr_GetFieldValue
==============
*/
void Scr_GetFieldValue(scrContext_t *scrContext, unsigned int objectId, const char *fieldName, int len, char *text)
{
  unsigned int v8; 
  VariableValue value; 

  if ( SL_FindString(fieldName) )
    goto LABEL_5;
  v8 = Scr_CompileCanonicalString((scr_string_t)0);
  if ( !v8 )
    goto LABEL_5;
  Scr_EvalFieldVariableInternal(scrContext, objectId, v8, &value);
  if ( scrContext->m_varPub.error_message )
  {
    Scr_ClearErrorMessage(scrContext);
LABEL_5:
    *text = 0;
    return;
  }
  Scr_GetValueString(scrContext, 0, &value, len, text);
  RemoveRefToValue(scrContext, (unsigned __int8)value.type, value.u);
}

/*
==============
Scr_GetScriptFunction2
==============
*/
const char *Scr_GetScriptFunction2(scrContext_t *scrContext, sval_u func_name)
{
  const char *v4; 
  unsigned __int64 v5; 
  const char *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  signed __int64 v10; 
  char *v11; 
  unsigned int v12; 
  unsigned int functionCount; 
  unsigned int v14; 
  scrDebugFunctionInfo *functionList; 
  char *v16; 
  __int64 v17; 
  signed __int64 v18; 
  unsigned __int8 v19; 
  int v20; 
  bool v21; 
  char *v22; 
  signed __int64 v23; 
  unsigned __int8 v24; 
  char v26[256]; 
  char newFilename[256]; 

  if ( func_name.node->type != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1494, ASSERT_TYPE_ASSERT, "(func_name.node[0].type == ENUM_far_function)", (const char *)&queryFormat, "func_name.node[0].type == ENUM_far_function") )
    __debugbreak();
  v4 = SL_ConvertToString(func_name.node[1].stringValue);
  v5 = 256i64;
  v6 = SL_ConvertToString(func_name.node[2].stringValue);
  Scr_CreateCanonicalFilenameInternal(newFilename, v4, 256);
  v7 = -1i64;
  do
    ++v7;
  while ( v6[v7] );
  v8 = v7 + 1;
  if ( v8 < 0x100 )
    v5 = v8;
  v9 = 0i64;
  if ( v5 )
  {
    v10 = v6 - v26;
    do
    {
      v11 = &v26[v9];
      v12 = v26[v9++ + v10] - 65;
      *v11 = v11[v10] + (v12 < 0x1A ? 0x20 : 0);
    }
    while ( v9 < v5 );
  }
  functionCount = scrContext->m_parserPub.functionCount;
  v14 = 0;
  if ( !functionCount )
    return 0i64;
  functionList = scrContext->m_parserPub.functionList;
  while ( 1 )
  {
    v16 = newFilename;
    v17 = (functionCount + v14) >> 1;
    v18 = functionList[v17].filenameExt - (const char *)newFilename;
    while ( 1 )
    {
      v19 = *v16;
      if ( *v16 != v16[v18] )
        break;
      ++v16;
      if ( !v19 )
      {
        v20 = 0;
        goto LABEL_18;
      }
    }
    v20 = v19 < (unsigned __int8)v16[v18] ? -1 : 1;
LABEL_18:
    v21 = v20 < 0;
    if ( !v20 )
    {
      v22 = v26;
      v23 = functionList[v17].name - (const char *)v26;
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 != v22[v23] )
          break;
        ++v22;
        if ( !v24 )
        {
          v20 = 0;
          goto LABEL_24;
        }
      }
      v20 = v24 < (unsigned __int8)v22[v23] ? -1 : 1;
LABEL_24:
      v21 = v20 < 0;
    }
    if ( !v21 )
      break;
    functionCount = (functionCount + v14) >> 1;
LABEL_29:
    if ( v14 >= functionCount )
      return 0i64;
  }
  if ( v20 > 0 )
  {
    v14 = ((functionCount + v14) >> 1) + 1;
    goto LABEL_29;
  }
  return functionList[v17].codePosValue;
}

/*
==============
Scr_GetScriptFunction
==============
*/
const char *Scr_GetScriptFunction(scrContext_t *scrContext, sval_u func_name)
{
  sval_u v3; 
  _DWORD *node; 
  const char *v5; 
  unsigned __int64 v6; 
  const char *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  signed __int64 v12; 
  char *v13; 
  unsigned int v14; 
  unsigned int functionCount; 
  unsigned int v16; 
  scrDebugFunctionInfo *functionList; 
  char *v18; 
  __int64 v19; 
  signed __int64 v20; 
  unsigned __int8 v21; 
  int v22; 
  bool v23; 
  char *v24; 
  signed __int64 v25; 
  unsigned __int8 v26; 
  char v28[256]; 
  char newFilename[256]; 

  if ( func_name.node->type != 29 )
    return 0i64;
  v3 = func_name.node[1];
  if ( v3.node->type != 21 )
    return 0i64;
  node = v3.node[1].node;
  if ( *node != 24 )
    return 0i64;
  v5 = SL_ConvertToString((scr_string_t)node[2]);
  v6 = 256i64;
  v7 = SL_ConvertToString((scr_string_t)node[4]);
  Scr_CreateCanonicalFilenameInternal(newFilename, v5, 256);
  v8 = -1i64;
  do
    ++v8;
  while ( v7[v8] );
  v9 = v8 + 1;
  if ( v9 < 0x100 )
    v6 = v9;
  v10 = 0i64;
  v11 = 0i64;
  if ( v6 )
  {
    v12 = v7 - v28;
    do
    {
      v13 = &v28[v11];
      v14 = v28[v11++ + v12] - 65;
      *v13 = v13[v12] + (v14 < 0x1A ? 0x20 : 0);
    }
    while ( v11 < v6 );
  }
  functionCount = scrContext->m_parserPub.functionCount;
  v16 = 0;
  if ( functionCount )
  {
    functionList = scrContext->m_parserPub.functionList;
    while ( 1 )
    {
      v18 = newFilename;
      v19 = (functionCount + v16) >> 1;
      v20 = functionList[v19].filenameExt - (const char *)newFilename;
      while ( 1 )
      {
        v21 = *v18;
        if ( *v18 != v18[v20] )
          break;
        ++v18;
        if ( !v21 )
        {
          v22 = 0;
          goto LABEL_18;
        }
      }
      v22 = v21 < (unsigned __int8)v18[v20] ? -1 : 1;
LABEL_18:
      v23 = v22 < 0;
      if ( !v22 )
      {
        v24 = v28;
        v25 = functionList[v19].name - (const char *)v28;
        while ( 1 )
        {
          v26 = *v24;
          if ( *v24 != v24[v25] )
            break;
          ++v24;
          if ( !v26 )
          {
            v22 = 0;
            goto LABEL_24;
          }
        }
        v22 = v26 < (unsigned __int8)v24[v25] ? -1 : 1;
LABEL_24:
        v23 = v22 < 0;
      }
      if ( v23 )
      {
        functionCount = (functionCount + v16) >> 1;
      }
      else
      {
        if ( v22 <= 0 )
          return functionList[v19].codePosValue;
        v16 = ((functionCount + v16) >> 1) + 1;
      }
      if ( v16 >= functionCount )
        return 0i64;
    }
  }
  return (const char *)v10;
}

/*
==============
Scr_GetValueString
==============
*/
void Scr_GetValueString(scrContext_t *scrContext, unsigned int localId, VariableValue *value, int len, char *s)
{
  unsigned __int64 v5; 
  const char *v9; 
  const char *v10; 
  VariableUnion u; 
  unsigned int scriptCodePosValue; 
  const XAnim_s *Anims; 
  const char *AnimDebugName; 
  __int64 v15; 
  const char **m_pFuncNames; 
  unsigned int intValue; 
  VariableType ObjectType; 
  unsigned int EntNum; 
  char EntClassId; 
  __int64 ArraySize; 
  const char *NameForType; 
  const char *v23; 
  char *fmt; 

  v5 = len;
  if ( value->type >= VAR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 356, ASSERT_TYPE_ASSERT, "( (unsigned)value->type < VAR_COUNT )", (const char *)&queryFormat, "(unsigned)value->type < VAR_COUNT") )
    __debugbreak();
  switch ( value->type )
  {
    case VAR_UNDEFINED:
      Core_strcpy(s, v5, "undefined");
      return;
    case VAR_POINTER:
      intValue = value->u.intValue;
      ObjectType = GetObjectType(scrContext, value->u.intValue);
      if ( ObjectType == VAR_ENTITY )
      {
        EntNum = Scr_GetEntNum(scrContext, intValue);
        EntClassId = Scr_GetEntClassId(scrContext, intValue);
        LODWORD(fmt) = EntNum;
        Com_sprintf(s, v5, "$%c%i", (unsigned int)EntClassId, fmt);
        return;
      }
      if ( intValue == scrContext->m_varPub.levelId )
      {
        Core_strcpy(s, v5, "level");
        return;
      }
      if ( intValue == scrContext->m_varPub.animId )
      {
        Core_strcpy(s, v5, "anim");
        return;
      }
      if ( (unsigned __int8)ObjectType >= VAR_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 443, ASSERT_TYPE_ASSERT, "( (unsigned)type < VAR_COUNT )", (const char *)&queryFormat, "(unsigned)type < VAR_COUNT") )
        __debugbreak();
      if ( (unsigned __int8)ObjectType < VAR_THREAD )
        goto LABEL_37;
      if ( (unsigned __int8)ObjectType <= VAR_CHILD_THREAD )
      {
        Com_sprintf(s, v5, "$t%i", intValue);
      }
      else
      {
        if ( ObjectType == VAR_OBJECT )
        {
          if ( localId && intValue == Scr_GetSelf(scrContext, localId) )
          {
            Core_strcpy(s, v5, "self");
            return;
          }
        }
        else if ( ObjectType == VAR_ARRAY )
        {
          ArraySize = GetArraySize(scrContext, intValue);
          Com_sprintf(s, v5, "<array of size %i>", ArraySize);
          return;
        }
LABEL_37:
        NameForType = Scr_GetNameForType(ObjectType);
        Com_sprintf(s, v5, "<%s>", NameForType);
      }
      return;
    case VAR_STRING:
      v9 = SL_ConvertToString((scr_string_t)value->u.intValue);
      Com_sprintf(s, v5, "\"%s\"", v9);
      return;
    case VAR_ISTRING:
      v10 = SL_ConvertToString((scr_string_t)value->u.intValue);
      Com_sprintf(s, v5, "&\"%s\"", v10);
      return;
    case VAR_VECTOR:
      Com_sprintf(s, v5, "(%g, %g, %g)", *value->u.vectorValue, *(float *)(value->u.scriptCodePosValue + 4), *(float *)(value->u.scriptCodePosValue + 8));
      return;
    case VAR_FLOAT:
      Com_sprintf(s, v5, "%g", value->u.floatValue);
      return;
    case VAR_INTEGER:
      Com_sprintf(s, v5, "%i", value->u.uintValue);
      return;
    case VAR_FUNCTION:
      if ( ScriptCodePos::IsScriptPos_Generic(value->u.scriptCodePosValue) )
        Scr_GetCodePos(scrContext, (const char *)(value->u.scriptCodePosValue - 1), 1u, s, v5);
      else
        Com_sprintf(s, v5, "native.");
      return;
    case VAR_BUILTIN_FUNCTION:
      v15 = value->u.intValue - scrContext->m_funcBegin;
      m_pFuncNames = scrContext->m_pFuncNames;
      goto LABEL_16;
    case VAR_BUILTIN_METHOD:
      v15 = value->u.intValue - scrContext->m_methBegin;
      m_pFuncNames = scrContext->m_pMethNames;
LABEL_16:
      Com_sprintf(s, v5, "::%s", m_pFuncNames[v15]);
      return;
    case VAR_ANIMATION:
      u = value->u;
      scriptCodePosValue = (unsigned __int16)value->u.scriptCodePosValue;
      Anims = Scr_GetAnims(scrContext, HIWORD(u.uintValue));
      AnimDebugName = XAnimGetAnimDebugName(Anims, scriptCodePosValue);
      Com_sprintf(s, v5, "%%%s", AnimDebugName);
      return;
    default:
      v23 = Scr_GetNameForType(value->type);
      Com_sprintf(s, v5, "<%s>", v23);
      return;
  }
}

/*
==============
Scr_InitEvaluate
==============
*/
void Scr_InitEvaluate(scrContext_t *scrContext)
{
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_scrEvaluateStringGlob = _XMM0;
  g_canonicalStrCount = 0;
  g_lastSortedCanonicalStrCount = 0;
  Scr_InitParseTreeMemory(scrContext);
}

/*
==============
Scr_PostEvalBuiltin
==============
*/
void Scr_PostEvalBuiltin(scrContext_t *scrContext, VariableValue *value)
{
  unsigned int inparamcount; 
  VariableValue *top; 

  if ( !scrContext->m_vmPub.debugCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1797, ASSERT_TYPE_ASSERT, "( pScrVmPub->debugCode )", (const char *)&queryFormat, "pScrVmPub->debugCode") )
    __debugbreak();
  scrContext->m_vmPub.debugCode = 0;
  if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1800, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
    __debugbreak();
  scrContext->m_varPub.evaluate = 1;
  Scr_ClearOutParams(scrContext);
  inparamcount = scrContext->m_vmPub.inparamcount;
  if ( inparamcount )
  {
    if ( inparamcount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1807, ASSERT_TYPE_ASSERT, "( pScrVmPub->inparamcount == 1 )", (const char *)&queryFormat, "pScrVmPub->inparamcount == 1") )
      __debugbreak();
    top = scrContext->m_vmPub.top;
    scrContext->m_vmPub.inparamcount = 0;
    value->u.scriptCodePosValue = top->u.scriptCodePosValue;
    value->type = top->type;
    --scrContext->m_vmPub.top;
  }
  else
  {
    value->type = VAR_UNDEFINED;
  }
}

/*
==============
Scr_PreEvalBuiltin
==============
*/
void Scr_PreEvalBuiltin(scrContext_t *scrContext, sval_u params, unsigned int localId)
{
  int ExpressionCount; 
  __int64 v7; 
  sval_u *node; 
  int v9; 
  VariableValue *top; 
  __int64 *v11; 
  __int64 i; 
  __int64 v13[24]; 

  if ( scrContext->m_vmPub.outparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1745, ASSERT_TYPE_ASSERT, "( !pScrVmPub->outparamcount )", (const char *)&queryFormat, "!pScrVmPub->outparamcount") )
    __debugbreak();
  if ( scrContext->m_vmPub.inparamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1746, ASSERT_TYPE_ASSERT, "( !pScrVmPub->inparamcount )", (const char *)&queryFormat, "!pScrVmPub->inparamcount") )
    __debugbreak();
  ExpressionCount = Scr_GetExpressionCount(params);
  v7 = ExpressionCount;
  if ( ExpressionCount > 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1749, ASSERT_TYPE_ASSERT, "( expr_count <= cMaxParams )", (const char *)&queryFormat, "expr_count <= cMaxParams") )
    __debugbreak();
  if ( scrContext->m_vmPub.top < scrContext->m_vmPub.stack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1750, ASSERT_TYPE_ASSERT, "( pScrVmPub->top >= pScrVmPub->stack )", (const char *)&queryFormat, "pScrVmPub->top >= pScrVmPub->stack") )
    __debugbreak();
  if ( scrContext->m_vmPub.top > scrContext->m_vmPub.maxstack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1751, ASSERT_TYPE_ASSERT, "( pScrVmPub->top <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pScrVmPub->top <= pScrVmPub->maxstack") )
    __debugbreak();
  if ( &scrContext->m_vmPub.top[v7] > scrContext->m_vmPub.maxstack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1752, ASSERT_TYPE_ASSERT, "( pScrVmPub->top + expr_count <= pScrVmPub->maxstack )", (const char *)&queryFormat, "pScrVmPub->top + expr_count <= pScrVmPub->maxstack") )
    __debugbreak();
  node = params.node->node;
  v9 = 0;
  top = scrContext->m_vmPub.top;
  if ( *params.node )
  {
    v11 = v13;
    do
    {
      *v11++ = (__int64)node;
      node = node[1].node;
      ++v9;
    }
    while ( node );
  }
  if ( v9 != (_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1765, ASSERT_TYPE_ASSERT, "( index == expr_count )", (const char *)&queryFormat, "index == expr_count") )
    __debugbreak();
  for ( i = (int)v7 - 1; i >= 0; Scr_EvalExpression_0(scrContext, *(sval_u *)v13[i--], localId, scrContext->m_vmPub.top) )
    ++scrContext->m_vmPub.top;
  if ( scrContext->m_vmPub.top != &top[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1774, ASSERT_TYPE_ASSERT, "( pScrVmPub->top == startTop + expr_count )", (const char *)&queryFormat, "pScrVmPub->top == startTop + expr_count") )
    __debugbreak();
  scrContext->m_vmPub.outparamcount = v7;
  if ( !scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1779, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "scrContext.m_varPub.evaluate") )
    __debugbreak();
  scrContext->m_varPub.evaluate = 0;
  if ( scrContext->m_vmPub.debugCode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 1782, ASSERT_TYPE_ASSERT, "( !pScrVmPub->debugCode )", (const char *)&queryFormat, "!pScrVmPub->debugCode") )
    __debugbreak();
  scrContext->m_vmPub.debugCode = 1;
}

/*
==============
Scr_RefCall
==============
*/
__int64 Scr_RefCall(scrContext_t *scrContext, sval_u params)
{
  sval_u *node; 
  unsigned __int8 v3; 
  bool v5; 

  node = params.node->node;
  v3 = 0;
  if ( *params.node )
  {
    do
    {
      v5 = Scr_RefExpression(scrContext, *node);
      node = node[1].node;
      if ( v5 )
        v3 = 1;
    }
    while ( node );
  }
  return v3;
}

/*
==============
Scr_RefExpression
==============
*/
bool Scr_RefExpression(scrContext_t *scrContext, sval_u expr)
{
  unsigned int v3; 
  bool result; 
  sval_u v5; 
  bool v6; 
  bool v7; 
  bool v8; 
  sval_u v9; 
  sval_u v10; 
  bool v11; 
  bool v12; 

  v3 = expr.node->type - 7;
  while ( 2 )
  {
    switch ( v3 )
    {
      case 0u:
        return Scr_RefPrimitiveExpression(scrContext, expr.node[1]);
      case 1u:
        if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2295, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
          goto LABEL_4;
        __debugbreak();
        return 0;
      case 0x30u:
      case 0x31u:
      case 0x32u:
        v5 = expr.node[2];
        v6 = Scr_RefExpression(scrContext, expr.node[1]);
        v7 = Scr_RefExpression(scrContext, v5);
        v8 = !v6;
        goto LABEL_9;
      case 0x33u:
      case 0x34u:
        expr = expr.node[1];
        v3 = expr.node->type - 7;
        if ( v3 <= 0x56 )
          continue;
        goto LABEL_4;
      case 0x53u:
        v9 = expr.node[3];
        v10 = expr.node[2];
        v11 = Scr_RefExpression(scrContext, expr.node[1]);
        v12 = Scr_RefExpression(scrContext, v10);
        v7 = Scr_RefExpression(scrContext, v9);
        if ( !v11 )
        {
          v8 = !v12;
LABEL_9:
          if ( v8 && !v7 )
            goto LABEL_4;
        }
        result = 1;
        break;
      case 0x56u:
        return Scr_RefToChildVariable(scrContext, expr.node[1].canonicalString);
      default:
LABEL_4:
        result = 0;
        break;
    }
    return result;
  }
}

/*
==============
Scr_RefPrimitiveExpression
==============
*/
char Scr_RefPrimitiveExpression(scrContext_t *scrContext, sval_u expr)
{
  sval_u *node; 
  unsigned int v3; 
  char result; 
  sval_u *v6; 
  bool v7; 
  unsigned int canonicalString; 
  sval_u v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  sval_u *v13; 
  sval_u **v14; 
  bool v15; 
  sval_u *v16; 
  char v17; 
  bool v18; 
  bool v19; 
  bool v20; 
  sval_u v21; 
  bool v22; 
  bool v23; 

  while ( 2 )
  {
    node = expr.node;
    v3 = expr.node->type - 20;
LABEL_2:
    switch ( v3 )
    {
      case 0u:
        v6 = node[1].node;
        switch ( v6->type )
        {
          case 5:
            v7 = Scr_RefToObjectVariable(scrContext, v6[2].canonicalString);
            canonicalString = v6[3].canonicalString;
            if ( !v7 )
              goto LABEL_13;
            if ( canonicalString )
            {
              v6->type = 6;
              return 0;
            }
            else
            {
              v6[2].type = 0;
              return 1;
            }
          case 0xF:
            v9 = v6[1];
            v10 = Scr_RefExpression(scrContext, v6[2]);
            v11 = Scr_RefPrimitiveExpression(scrContext, v9);
            if ( v10 )
              goto LABEL_27;
            if ( !v11 )
              goto LABEL_43;
            return 1;
          case 0x11:
            v12 = Scr_RefPrimitiveExpression(scrContext, v6[1]);
            canonicalString = v6[3].canonicalString;
            if ( v12 )
            {
              if ( !canonicalString )
                goto LABEL_27;
              v6->type = 19;
              result = 0;
            }
            else
            {
LABEL_13:
              if ( !Scr_RefToObjectVariable(scrContext, canonicalString) )
                goto LABEL_43;
              v6[3].type = 0;
              result = 1;
            }
            break;
          case 0x12:
            if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 845, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
              goto LABEL_43;
            __debugbreak();
            return 0;
          case 0x3D:
            expr = v6[1];
            continue;
          case 0x5B:
            return Scr_RefToObjectVariable(scrContext, v6[3].canonicalString);
          case 0x5C:
            return Scr_RefToObjectVariable(scrContext, v6[1].canonicalString);
          default:
            goto LABEL_43;
        }
        return result;
      case 2u:
        v13 = node[1].node;
        if ( v13->type != 26 )
        {
          if ( v13->type != 27 )
            goto LABEL_43;
          v14 = (sval_u **)v13[3].node;
          v15 = Scr_RefPrimitiveExpression(scrContext, v13[1]);
          v16 = *v14;
          v17 = 0;
          v18 = v15;
          while ( v16 )
          {
            v19 = Scr_RefExpression(scrContext, *v16);
            v16 = v16[1].node;
            if ( v19 )
              v17 = 1;
          }
          if ( !v18 )
          {
            v20 = v17 == 0;
            goto LABEL_42;
          }
          goto LABEL_27;
        }
        return Scr_RefCall(scrContext, v13[2]);
      case 0x10u:
      case 0x11u:
      case 0x22u:
        return Scr_RefExpression(scrContext, node[1]);
      case 0x13u:
        if ( !Scr_RefToObjectVariable(scrContext, node[1].canonicalString) )
          return Scr_RefToObjectVariable(scrContext, node[2].canonicalString);
        if ( node[2].type )
        {
          node[1].type = 0;
          goto LABEL_27;
        }
        node->type = 40;
        return Scr_RefToObjectVariable(scrContext, node[2].canonicalString);
      case 0x14u:
        return Scr_RefToObjectVariable(scrContext, node[2].canonicalString);
      case 0x17u:
        return Scr_RefToChildVariable(scrContext, scrContext->m_varPub.gameId);
      case 0x28u:
        node = node[1].node;
        v3 = node->type - 20;
        if ( v3 <= 0x40 )
          goto LABEL_2;
        return 0;
      case 0x40u:
        v21 = node[2];
        v22 = Scr_RefPrimitiveExpression(scrContext, node[1]);
        v23 = Scr_RefExpression(scrContext, v21);
        if ( !v22 )
        {
          v20 = !v23;
LABEL_42:
          if ( v20 )
            goto LABEL_43;
        }
LABEL_27:
        result = 1;
        break;
      default:
LABEL_43:
        result = 0;
        break;
    }
    return result;
  }
}

/*
==============
Scr_RefScriptExpression
==============
*/
_BOOL8 Scr_RefScriptExpression(scrContext_t *scrContext, ScriptExpression_t *expr)
{
  bool v4; 

  if ( !expr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2539, ASSERT_TYPE_ASSERT, "( expr )", (const char *)&queryFormat, "expr") )
    __debugbreak();
  v4 = Scr_RefExpression(scrContext, expr->parseData);
  if ( !expr->exprHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_evaluate.cpp", 2542, ASSERT_TYPE_ASSERT, "( expr->exprHead )", (const char *)&queryFormat, "expr->exprHead") )
    __debugbreak();
  Scr_ClearDebugExpr(scrContext, expr->exprHead);
  return v4;
}

/*
==============
Scr_ShutdownEvaluate
==============
*/
void Scr_ShutdownEvaluate(scrContext_t *scrContext)
{
  if ( s_scrEvaluateStringGlob.archivedCanonicalStrings )
  {
    Scr_Mem_DebugFree(scrContext, s_scrEvaluateStringGlob.archivedCanonicalStrings);
    s_scrEvaluateStringGlob.archivedCanonicalStrings = NULL;
  }
  if ( s_scrEvaluateStringGlob.canonicalStringLookup )
  {
    Scr_Mem_DebugFree(scrContext, s_scrEvaluateStringGlob.canonicalStringLookup);
    s_scrEvaluateStringGlob.canonicalStringLookup = NULL;
  }
  g_canonicalStrCount = 0;
  g_lastSortedCanonicalStrCount = 0;
  Scr_ShutdownParseTreeMemory(scrContext);
}

/*
==============
Scr_SortArchivedStrings
==============
*/
__int64 Scr_SortArchivedStrings()
{
  __int64 result; 
  int *canonicalStringLookup; 
  ArchivedCanonicalStringInfo *archivedCanonicalStrings; 

  result = g_canonicalStrCount;
  if ( g_canonicalStrCount != g_lastSortedCanonicalStrCount )
  {
    g_lastSortedCanonicalStrCount = g_canonicalStrCount;
    qsort(s_scrEvaluateStringGlob.archivedCanonicalStrings, g_canonicalStrCount, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareCanonicalStrings);
    result = 0i64;
    if ( g_canonicalStrCount )
    {
      canonicalStringLookup = s_scrEvaluateStringGlob.canonicalStringLookup;
      archivedCanonicalStrings = s_scrEvaluateStringGlob.archivedCanonicalStrings;
      do
      {
        canonicalStringLookup[archivedCanonicalStrings[(unsigned int)result].canonicalStr] = result;
        result = (unsigned int)(result + 1);
      }
      while ( (unsigned int)result < g_canonicalStrCount );
    }
  }
  return result;
}

