/*
==============
Scr_EmitFunction_Precompiled
==============
*/

void __fastcall Scr_EmitFunction_Precompiled(scrContext_t *scrContext, scr_string_t filenameExt, unsigned int threadName, char *codePos)
{
  ?Scr_EmitFunction_Precompiled@@YAXAEAUscrContext_t@@W4scr_string_t@@IPEAD@Z(scrContext, filenameExt, threadName, codePos);
}

/*
==============
Scr_GetCumulOffset
==============
*/

unsigned int __fastcall Scr_GetCumulOffset(const scrContext_t *scrContext)
{
  return ?Scr_GetCumulOffset@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_PrintCompileResourceUsage
==============
*/

void __fastcall Scr_PrintCompileResourceUsage(const scrContext_t *scrContext)
{
  ?Scr_PrintCompileResourceUsage@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
CompareCaseInfo
==============
*/

int __fastcall CompareCaseInfo(const void *elem1, const void *elem2)
{
  return ?CompareCaseInfo@@YAHPEBX0@Z(elem1, elem2);
}

/*
==============
Scr_CompileStatement
==============
*/

void __fastcall Scr_CompileStatement(scrContext_t *scrContext, sval_u parseData)
{
  ?Scr_CompileStatement@@YAXAEAUscrContext_t@@Tsval_u@@@Z(scrContext, parseData);
}

/*
==============
Scr_AddThreadToFunctionList
==============
*/

void __fastcall Scr_AddThreadToFunctionList(scrContext_t *scrContext, const char *threadName, const char *codePosValue)
{
  ?Scr_AddThreadToFunctionList@@YAXAEAUscrContext_t@@PEBD1@Z(scrContext, threadName, codePosValue);
}

/*
==============
ScriptCompile
==============
*/

void __fastcall ScriptCompile(scrContext_t *scrContext, sval_u val, unsigned int filePosId, unsigned int fileCountId, unsigned int scriptId, PrecacheEntry *entries, int entriesCount, scr_string_t name, int scopeCount)
{
  ?ScriptCompile@@YAXAEAUscrContext_t@@Tsval_u@@IIIPEAUPrecacheEntry@@HW4scr_string_t@@H@Z(scrContext, val, filePosId, fileCountId, scriptId, entries, entriesCount, name, scopeCount);
}

/*
==============
Scr_SetThreadPosition_Precompiled
==============
*/

void __fastcall Scr_SetThreadPosition_Precompiled(scrContext_t *scrContext, unsigned int threadName, const char *codePos)
{
  ?Scr_SetThreadPosition_Precompiled@@YAXAEAUscrContext_t@@IPEBD@Z(scrContext, threadName, codePos);
}

/*
==============
Scr_GetPauseLocalVars
==============
*/

unsigned __int16 *__fastcall Scr_GetPauseLocalVars(const scrContext_t *scrContext)
{
  return ?Scr_GetPauseLocalVars@@YAPEAGAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
LinkFile
==============
*/

void __fastcall LinkFile(scrContext_t *scrContext, unsigned int filePosId, unsigned int fileCountId)
{
  ?LinkFile@@YAXAEAUscrContext_t@@II@Z(scrContext, filePosId, fileCountId);
}

/*
==============
AddExpressionListOpcodePos
==============
*/
void AddExpressionListOpcodePos(scrContext_t *scrContext, sval_u exprlist)
{
  sval_u *node; 

  if ( scrContext->m_varPub.developer )
  {
    node = exprlist.node->node;
    if ( *exprlist.node )
    {
      do
      {
        AddOpcodePos(scrContext, node->node[1].canonicalString, SOURCE_TYPE_NONE);
        node = node[1].node;
      }
      while ( node );
    }
  }
}

/*
==============
CheckThreadPosition
==============
*/
void CheckThreadPosition(scrContext_t *scrContext, unsigned int posId, scr_string_t name, unsigned int sourcePos)
{
  char *buf; 
  const char *v9; 
  const char *v10; 
  VariableValue out; 

  if ( scrContext->m_varPub.evaluate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3547, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.evaluate )", (const char *)&queryFormat, "!scrContext.m_varPub.evaluate") )
    __debugbreak();
  Scr_EvalVariable_Out(scrContext, posId, &out);
  if ( out.type )
  {
    if ( out.u.scriptCodePosValue )
    {
      buf = scrContext->m_parserPub.sourceBufferLookup[Scr_GetSourceBuffer(scrContext, out.u.codePosValue)].buf;
      v9 = SL_ConvertToString(name);
      CompileError(scrContext, sourcePos, "function '%s' already defined in '%s'", v9, buf);
    }
    else
    {
      v10 = SL_ConvertToString(name);
      CompileError(scrContext, sourcePos, "function '%s' already defined", v10);
    }
  }
}

/*
==============
CompareCaseInfo
==============
*/
__int64 CompareCaseInfo(const void *elem1, const void *elem2)
{
  if ( *(_DWORD *)elem1 <= *(_DWORD *)elem2 )
    return *(_DWORD *)elem1 < *(_DWORD *)elem2;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
CompileTransferRefToString
==============
*/
void CompileTransferRefToString(const scrContext_t *scrContext, scr_string_t stringValue, unsigned int user)
{
  int developer_statement; 

  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 715, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
    __debugbreak();
  developer_statement = scrContext->m_compilePub.developer_statement;
  if ( developer_statement == 2 )
  {
    Scr_CompileRemoveRefToString(scrContext, stringValue);
  }
  else if ( developer_statement != 3 )
  {
    if ( scrContext->m_compileGlob.bConstRefCount )
      SL_AddRefToString(stringValue);
    j_SL_TransferRefToUser(stringValue, user);
  }
}

/*
==============
ConnectBreakStatements
==============
*/
void ConnectBreakStatements(scrContext_t *scrContext)
{
  char *v2; 
  BreakStatementInfo *currentBreakStatement; 
  char *i; 
  signed __int64 v5; 

  if ( scrContext->m_compilePub.value_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4120, ASSERT_TYPE_ASSERT, "( !scrContext.m_compilePub.value_count )", (const char *)&queryFormat, "!scrContext.m_compilePub.value_count") )
    __debugbreak();
  v2 = TempMalloc(0i64);
  currentBreakStatement = scrContext->m_compileGlob.currentBreakStatement;
  for ( i = v2; currentBreakStatement; currentBreakStatement = currentBreakStatement->next )
  {
    v5 = i - currentBreakStatement->nextCodePos;
    if ( (unsigned __int64)(v5 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v5, "signed", i - currentBreakStatement->nextCodePos) )
      __debugbreak();
    *(_DWORD *)currentBreakStatement->codePos = v5;
  }
}

/*
==============
ConnectContinueStatements
==============
*/
void ConnectContinueStatements(scrContext_t *scrContext)
{
  char *v2; 
  ContinueStatementInfo *currentContinueStatement; 
  char *i; 
  signed __int64 v5; 

  v2 = TempMalloc(0i64);
  currentContinueStatement = scrContext->m_compileGlob.currentContinueStatement;
  for ( i = v2; currentContinueStatement; currentContinueStatement = currentContinueStatement->next )
  {
    v5 = i - currentContinueStatement->nextCodePos;
    if ( (unsigned __int64)(v5 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v5, "signed", i - currentContinueStatement->nextCodePos) )
      __debugbreak();
    *(_DWORD *)currentContinueStatement->codePos = v5;
  }
}

/*
==============
EmitArrayPrimitiveExpressionRef
==============
*/
void EmitArrayPrimitiveExpressionRef(scrContext_t *scrContext, sval_u expr, sval_u sourcePos, scr_block_t *block)
{
  sval_u v5; 

  if ( expr.node->type == 20 )
  {
    EmitVariableExpressionRef(scrContext, expr.node[1], block);
  }
  else if ( expr.node->type == 43 )
  {
    v5 = expr.node[1];
    EmitOpcode(scrContext, 6u, 0, 0);
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
      Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
    AddOpcodePos(scrContext, v5.canonicalString, SOURCE_TYPE_BREAKPOINT);
  }
  else
  {
    CompileError(scrContext, sourcePos.canonicalString, "not an lvalue", block);
  }
}

/*
==============
EmitAssignmentPos
==============
*/
void EmitAssignmentPos(scrContext_t *scrContext)
{
  char *v2; 

  if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
  {
    v2 = TempMalloc(0i64);
    Scr_AddAssignmentPos(scrContext, v2);
  }
}

/*
==============
EmitAssignmentStatement
==============
*/
void EmitAssignmentStatement(scrContext_t *scrContext, sval_u lhs, sval_u rhs, sval_u sourcePos, sval_u rhsSourcePos, scr_block_t *block)
{
  int type; 
  sval_u v9; 
  sval_u v10; 
  sval_u v11; 
  sval_u v12; 
  int v13; 
  const char *v14; 
  char *v15; 
  VariableCompileValue constValue; 

  type = sourcePos.type;
  if ( rhs.node->type == 7 && rhs.node[1].node->type == 38 )
  {
    switch ( lhs.node->type )
    {
      case 5:
        goto $LN3_3;
      case 0xF:
        v9 = lhs.node[4];
        v10 = lhs.node[3];
        v11 = lhs.node[1];
        if ( EmitOrEvalExpression(scrContext, lhs.node[2], &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitArrayPrimitiveExpressionRef(scrContext, v11, v10, block);
        EmitOpcode(scrContext, 0x57u, -1, 0);
        AddOpcodePos(scrContext, v9.canonicalString, SOURCE_TYPE_NONE);
        AddOpcodePos(scrContext, v10.canonicalString, SOURCE_TYPE_NONE);
        goto LABEL_16;
      case 0x11:
        v12 = lhs.node[2];
        EmitPrimitiveExpressionFieldObject(scrContext, lhs.node[1], lhs.node[3], block);
        EmitOpcode(scrContext, 0x25u, 0, 0);
        AddOpcodePos(scrContext, rhsSourcePos.canonicalString, SOURCE_TYPE_NONE);
        EmitCanonicalString(scrContext, v12.stringValue);
        goto LABEL_16;
      case 0x12:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4174, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
          __debugbreak();
        break;
      case 0x3D:
      case 0x5B:
        v13 = lhs.node[2].type;
        v14 = "$ and self field can only be used in the script debugger";
        if ( !scrContext->m_compilePub.script_loading )
          v14 = "not an lvalue";
        CompileError(scrContext, v13, v14);
        break;
      default:
        return;
    }
  }
  else
  {
$LN3_3:
    if ( EmitOrEvalExpression(scrContext, rhs, &constValue, block) )
      EmitValue(scrContext, &constValue);
    EmitVariableExpressionRef(scrContext, lhs, block);
    EmitOpcode(scrContext, 0x87u, -1, 0);
    AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
LABEL_16:
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
    {
      v15 = TempMalloc(0i64);
      Scr_AddAssignmentPos(scrContext, v15);
    }
  }
}

/*
==============
EmitByte
==============
*/
void EmitByte(scrContext_t *scrContext, unsigned __int8 value)
{
  unsigned __int8 *v4; 

  v4 = (unsigned __int8 *)TempMalloc(1ui64);
  scrContext->m_compileGlob.codePos = v4;
  *v4 = value;
}

/*
==============
EmitCall
==============
*/
void EmitCall(scrContext_t *scrContext, sval_u func_name, sval_u params, bool bStatement, scr_block_t *block)
{
  scr_string_t Builtin; 
  signed int v10; 
  char *v11; 
  bool v12; 
  sval_u v13; 
  unsigned int Variable; 
  unsigned int Function; 
  VariableUnion v16; 
  unsigned int NewVariable; 
  int v18; 
  bool developer_script; 
  unsigned int v20; 
  unsigned __int8 *v21; 
  unsigned __int16 v22; 
  unsigned __int8 *v23; 
  scr_block_t *v24; 
  int v25; 
  sval_u *node; 
  char *pName; 
  char *pos; 
  VariableValue out; 
  BuiltinType type; 

  pos = NULL;
  Builtin = Scr_GetBuiltin(func_name);
  v10 = Builtin;
  if ( !Builtin )
    goto $script_function;
  v11 = (char *)SL_ConvertToString(Builtin);
  v12 = scrContext->m_compilePub.developer_statement == 3;
  v13 = func_name.node[2];
  pName = v11;
  if ( v12 )
  {
    type = BUILTIN_ANY;
    Function = Scr_GetFunction(scrContext, (const char **)&pName, &type);
  }
  else
  {
    Variable = FindVariable(scrContext, scrContext->m_compilePub.builtinFunc, v10);
    if ( !Variable )
    {
      type = BUILTIN_ANY;
      v16.scriptCodePosValue = Scr_GetFunction(scrContext, (const char **)&pName, &type);
      NewVariable = GetNewVariable(scrContext, scrContext->m_compilePub.builtinFunc, v10);
      out.type = Scr_GetCodePositionType(type);
      out.u = v16;
      SetVariableValue(scrContext, NewVariable, &out);
      goto LABEL_8;
    }
    Scr_EvalVariable_Out(scrContext, Variable, &out);
    type = Scr_GetBuiltinType(out.type);
    Function = truncate_cast<unsigned int,unsigned __int64>(out.u.scriptCodePosValue);
  }
  v16.intValue = Function;
LABEL_8:
  if ( !v16.intValue )
  {
$script_function:
    if ( func_name.node->type == 29 )
    {
      scrContext->m_compileGlob.prevCumulOffset = scrContext->m_compileGlob.cumulOffset;
      EmitOpcode(scrContext, 0x15u, 1, 0);
      AddOpcodePos(scrContext, func_name.node[2].canonicalString, SOURCE_TYPE_BREAKPOINT);
    }
    v24 = block;
    v25 = EmitExpressionList(scrContext, params, block);
    EmitPostFunctionCall(scrContext, func_name, v25, 0, v24);
    if ( scrContext->m_varPub.developer )
    {
      node = params.node->node;
      if ( *params.node )
      {
        do
        {
          AddOpcodePos(scrContext, node->node[1].canonicalString, SOURCE_TYPE_NONE);
          node = node[1].node;
        }
        while ( node );
      }
    }
    if ( bStatement )
      EmitOpcode(scrContext, 0x58u, -1, 0);
    return;
  }
  if ( type == BUILTIN_DEVELOPER_ONLY )
  {
    if ( scrContext->m_compilePub.developer_statement )
    {
      type = BUILTIN_ANY;
    }
    else
    {
      developer_script = scrContext->m_varPub.developer_script;
      if ( !developer_script )
        pos = TempMalloc(0i64);
      scrContext->m_compilePub.developer_statement = 2 - developer_script;
      type = BUILTIN_DEVELOPER_ONLY;
      if ( !bStatement )
      {
        CompileError(scrContext, v13.canonicalString, "return value of developer command can not be accessed if not in a /# ... #/ comment");
        return;
      }
    }
  }
  v18 = EmitExpressionList(scrContext, params, block);
  if ( v18 < 256 )
  {
    Scr_CompileRemoveRefToString(scrContext, (scr_string_t)v10);
    v20 = v18 + 29;
    if ( v18 > 5 )
      v20 = 35;
    EmitOpcode(scrContext, v20, 1 - v18, 1);
    AddOpcodePos(scrContext, v13.canonicalString, SOURCE_TYPE_BUILTIN_CALL|SOURCE_TYPE_BREAKPOINT);
    if ( v20 == 35 )
    {
      if ( v18 != (unsigned __int8)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3162, ASSERT_TYPE_ASSERT, "( param_count == (byte)param_count )", (const char *)&queryFormat, "param_count == (byte)param_count", pName, pos) )
        __debugbreak();
      v21 = (unsigned __int8 *)TempMalloc(1ui64);
      scrContext->m_compileGlob.codePos = v21;
      *v21 = v18;
    }
    v22 = truncate_cast<unsigned short,unsigned int>(v16.uintValue);
    v23 = (unsigned __int8 *)TempMalloc(2ui64);
    scrContext->m_compileGlob.codePos = v23;
    *(_WORD *)v23 = v22;
    AddExpressionListOpcodePos(scrContext, params);
    if ( bStatement )
      EmitOpcode(scrContext, 0x58u, -1, 0);
    if ( type == BUILTIN_DEVELOPER_ONLY )
    {
      v12 = !scrContext->m_varPub.developer_script;
      scrContext->m_compilePub.developer_statement = 0;
      if ( v12 )
        TempMemorySetPos(pos);
    }
  }
  else
  {
    CompileError(scrContext, v13.canonicalString, "parameter count exceeds 256");
  }
}

/*
==============
EmitCallExpression
==============
*/
void EmitCallExpression(scrContext_t *scrContext, sval_u expr, bool bStatement, scr_block_t *block)
{
  if ( expr.node->type == 26 )
  {
    EmitCall(scrContext, expr.node[1], expr.node[2], bStatement, block);
  }
  else if ( expr.node->type == 27 )
  {
    EmitMethod(scrContext, expr.node[1], expr.node[2], expr.node[3], expr.node[4], bStatement, block);
  }
}

/*
==============
EmitCanonicalString
==============
*/
void EmitCanonicalString(scrContext_t *scrContext, scr_string_t stringValue)
{
  int developer_statement; 
  const char *v5; 
  unsigned int CanonicalString; 

  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 663, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
    __debugbreak();
  scrContext->m_compileGlob.codePos = (unsigned __int8 *)TempMalloc(4ui64);
  developer_statement = scrContext->m_compilePub.developer_statement;
  if ( developer_statement == 2 )
  {
    if ( scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 671, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "!scrContext.m_varPub.developer_script") )
      __debugbreak();
    Scr_CompileRemoveRefToString(scrContext, stringValue);
  }
  else if ( developer_statement == 3 )
  {
    *(_DWORD *)scrContext->m_compileGlob.codePos = Scr_CompileCanonicalString(stringValue);
    if ( !*(_DWORD *)scrContext->m_compileGlob.codePos )
      CompileError(scrContext, 0, "unknown field");
  }
  else
  {
    v5 = SL_ConvertToString(stringValue);
    CanonicalString = SL_GetCanonicalString(v5);
    if ( !scrContext->m_compileGlob.bConstRefCount )
      SL_RemoveRefToString(stringValue);
    scrContext->m_varPub.checksum = CanonicalString + 31 * scrContext->m_varPub.checksum;
    *(_DWORD *)scrContext->m_compileGlob.codePos = CanonicalString;
  }
}

/*
==============
EmitCaseStatement
==============
*/
void EmitCaseStatement(scrContext_t *scrContext, sval_u expr, sval_u sourcePos)
{
  int type; 
  scrContext_t *v6; 
  sval_u v7; 
  unsigned int Variable; 
  const char *v9; 
  unsigned int InternalVariableIndex; 
  unsigned int intValue; 
  int v12; 
  const char *v13; 
  bool valid; 
  unsigned int canonicalString; 
  const char *v16; 
  unsigned int v17; 
  VariableValue out; 

  type = expr.node->type;
  v6 = scrContext;
  if ( expr.node->type == 9 )
  {
    valid = IsValidArrayIndex(expr.node[1].canonicalString);
    canonicalString = expr.node[1].canonicalString;
    if ( !valid )
    {
      v16 = j_va("case index %d out of range", canonicalString);
      CompileError(v6, sourcePos.canonicalString, v16);
      return;
    }
    InternalVariableIndex = GetInternalVariableIndex(canonicalString);
    intValue = InternalVariableIndex;
    if ( InternalVariableIndex < 0x80000 )
    {
      v12 = 4939;
LABEL_23:
      v17 = InternalVariableIndex;
      v13 = "( ( name >= MEMORY_NODE_COUNT ) )";
LABEL_24:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", v12, ASSERT_TYPE_ASSERT, v13, "( name ) = %i", v17) )
        __debugbreak();
    }
  }
  else
  {
    if ( type != 13 )
    {
      if ( type != 20 )
      {
        CompileError(scrContext, sourcePos.canonicalString, "case expression must be an int or string");
        return;
      }
      v7 = expr.node[1];
      if ( v7.node->type != 5 || (CompileTransferRefToString(scrContext, v7.node[1].stringValue, 1u), Variable = FindVariable(v6, v6->m_compilePub.scriptsDefine, expr.node[1].node[1].canonicalString), scrContext = v6, !Variable) )
      {
        CompileError(scrContext, sourcePos.canonicalString, "only constant variables can be used in a switch statement");
        return;
      }
      Scr_EvalVariable_Out(v6, Variable, &out);
      if ( out.type != VAR_INTEGER )
      {
        if ( out.type != VAR_STRING )
        {
          CompileError(v6, sourcePos.canonicalString, "case constant must be an int or string");
          return;
        }
        intValue = out.u.intValue;
        CompileTransferRefToString(v6, (scr_string_t)out.u.intValue, 1u);
        if ( intValue < 0x80000 )
          goto LABEL_26;
        v17 = intValue;
        v13 = "( ( name < MEMORY_NODE_COUNT ) )";
        v12 = 4980;
        goto LABEL_24;
      }
      if ( !IsValidArrayIndex(out.u.uintValue) )
      {
        v9 = j_va("case index %d out of range", out.u.uintValue);
        CompileError(v6, sourcePos.canonicalString, v9);
        return;
      }
      InternalVariableIndex = GetInternalVariableIndex(out.u.uintValue);
      intValue = InternalVariableIndex;
      if ( InternalVariableIndex >= 0x80000 )
        goto LABEL_26;
      v12 = 4972;
      goto LABEL_23;
    }
    intValue = expr.node[1].canonicalString;
    CompileTransferRefToString(scrContext, (scr_string_t)intValue, 1u);
    if ( intValue >= 0x80000 )
    {
      v17 = intValue;
      v13 = "( ( name < MEMORY_NODE_COUNT ) )";
      v12 = 4948;
      goto LABEL_24;
    }
  }
LABEL_26:
  EmitCaseStatementInfo(v6, intValue, sourcePos);
}

/*
==============
EmitCaseStatementInfo
==============
*/
void EmitCaseStatementInfo(scrContext_t *scrContext, unsigned int name, sval_u sourcePos)
{
  int type; 
  CaseStatementInfo *v6; 

  type = sourcePos.type;
  if ( scrContext->m_compilePub.developer_statement == 2 )
  {
    if ( scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5244, ASSERT_TYPE_ASSERT, "( !scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "!scrContext.m_varPub.developer_script") )
      __debugbreak();
  }
  else
  {
    v6 = (CaseStatementInfo *)Scr_Mem_TempAlloc(scrContext, 0x20ui64, "EmitCaseStatementInfo");
    v6->name = name;
    v6->codePos = TempMalloc(0i64);
    v6->sourcePos = type;
    v6->next = scrContext->m_compileGlob.currentCaseStatement;
    scrContext->m_compileGlob.currentCaseStatement = v6;
  }
}

/*
==============
EmitCastFieldObject
==============
*/
void EmitCastFieldObject(scrContext_t *scrContext, sval_u sourcePos)
{
  int type; 

  type = sourcePos.type;
  EmitOpcode(scrContext, 0, -1, 0);
  if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
    Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
  AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
}

/*
==============
EmitCreateLocalVars
==============
*/
void EmitCreateLocalVars(scrContext_t *scrContext, scr_block_t *block, sval_u sourcePos)
{
  __int64 localVarsCreateCount; 
  int localVarsPublicCount; 
  unsigned int *p_sourcePos; 
  unsigned int v8; 
  unsigned __int8 *v9; 

  if ( scrContext->m_compilePub.developer_statement == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1632, ASSERT_TYPE_ASSERT, "( scrContext.m_compilePub.developer_statement != SCR_DEV_EVALUATE )", (const char *)&queryFormat, "scrContext.m_compilePub.developer_statement != SCR_DEV_EVALUATE") )
    __debugbreak();
  if ( block->localVarsPublicCount < block->localVarsCreateCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1635, ASSERT_TYPE_ASSERT, "( block->localVarsPublicCount >= block->localVarsCreateCount )", (const char *)&queryFormat, "block->localVarsPublicCount >= block->localVarsCreateCount") )
    __debugbreak();
  localVarsCreateCount = block->localVarsCreateCount;
  localVarsPublicCount = block->localVarsPublicCount;
  if ( (_DWORD)localVarsCreateCount != localVarsPublicCount )
  {
    if ( (int)localVarsCreateCount < localVarsPublicCount )
    {
      p_sourcePos = &block->localVars[localVarsCreateCount].sourcePos;
      do
      {
        EmitOpcode(scrContext, 0x30u, 0, 0);
        v8 = *(p_sourcePos - 1);
        if ( v8 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v8, "unsigned", *(p_sourcePos - 1)) )
          __debugbreak();
        v9 = (unsigned __int8 *)TempMalloc(2ui64);
        scrContext->m_compileGlob.codePos = v9;
        *(_WORD *)v9 = v8;
        AddOpcodePos(scrContext, *p_sourcePos, SOURCE_TYPE_NONE);
        localVarsPublicCount = block->localVarsPublicCount;
        LODWORD(localVarsCreateCount) = localVarsCreateCount + 1;
        p_sourcePos += 2;
      }
      while ( (int)localVarsCreateCount < localVarsPublicCount );
    }
    block->localVarsCreateCount = localVarsPublicCount;
  }
}

/*
==============
EmitExpressionList
==============
*/
__int64 EmitExpressionList(scrContext_t *scrContext, sval_u exprlist, scr_block_t *block)
{
  sval_u *node; 
  unsigned int v4; 
  VariableCompileValue constValue; 

  node = exprlist.node->node;
  v4 = 0;
  if ( *exprlist.node )
  {
    do
    {
      if ( EmitOrEvalExpression(scrContext, *node->node, &constValue, block) )
        EmitValue(scrContext, &constValue);
      node = node[1].node;
      ++v4;
    }
    while ( node );
  }
  return v4;
}

/*
==============
EmitForStatement
==============
*/
void EmitForStatement(scrContext_t *scrContext, sval_u stmt1, sval_u expr, sval_u stmt2, sval_u stmt, sval_u sourcePos, sval_u forSourcePos, scr_block_t *block, sval_u *forStatBlock, sval_u *forStatPostBlock)
{
  scr_block_t *v11; 
  sval_u *v14; 
  sval_u *v15; 
  char *v16; 
  bool v17; 
  char v18; 
  int intValue; 
  scr_block_t **v20; 
  unsigned __int8 *v21; 
  char *codePos; 
  scr_block_t **v23; 
  sval_u *v24; 
  unsigned __int8 *v25; 
  char *v26; 
  int childCount; 
  scr_block_t **v28; 
  VariableCompileValue constValue; 
  scr_block_t **childBlocks; 
  char *nextPos; 
  BreakStatementInfo *currentBreakStatement; 
  ContinueStatementInfo *currentContinueStatement; 
  scr_block_t **breakChildBlocks; 
  int *breakChildCount; 
  scr_block_t *breakBlock; 
  scr_block_t **continueChildBlocks; 
  int *continueChildCount; 
  bool bCanBreak; 
  bool bCanContinue; 

  v11 = block;
  bCanBreak = scrContext->m_compileGlob.bCanBreak;
  currentBreakStatement = scrContext->m_compileGlob.currentBreakStatement;
  bCanContinue = scrContext->m_compileGlob.bCanContinue;
  currentContinueStatement = scrContext->m_compileGlob.currentContinueStatement;
  scrContext->m_compileGlob.bCanBreak = 0;
  scrContext->m_compileGlob.bCanContinue = 0;
  EmitStatement(scrContext, stmt1, 0, 0, v11);
  v14 = forStatBlock;
  Scr_TransferBlock(v11, forStatBlock->block);
  EmitCreateLocalVars(scrContext, v14->block, forSourcePos);
  if ( (signed int)*(&v14->node->objectIdValue + 1) > v11->localVarsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4585, ASSERT_TYPE_ASSERT, "( forStatBlock->block->localVarsCreateCount <= block->localVarsCount )", (const char *)&queryFormat, "forStatBlock->block->localVarsCreateCount <= block->localVarsCount") )
    __debugbreak();
  v15 = forStatPostBlock;
  v11->localVarsCreateCount = *(&v14->node->objectIdValue + 1);
  Scr_TransferBlock(v11, v15->block);
  v16 = TempMalloc(0i64);
  v17 = expr.node->type == 74;
  nextPos = v16;
  if ( v17 )
  {
    v18 = 0;
    if ( !EmitOrEvalExpression(scrContext, expr.node[1], &constValue, v11) )
      goto LABEL_14;
    if ( constValue.value.type == VAR_INTEGER )
    {
      intValue = constValue.value.u.intValue != 0;
      constValue.value.u.intValue = intValue;
    }
    else
    {
      if ( constValue.value.type != VAR_FLOAT )
      {
        EmitValue(scrContext, &constValue);
        goto LABEL_14;
      }
      Scr_CastBool_NonInteger(scrContext, &constValue.value);
      intValue = constValue.value.u.intValue;
    }
    if ( !intValue )
      CompileError(scrContext, sourcePos.canonicalString, "conditional expression cannot be always false");
  }
  v18 = 1;
LABEL_14:
  breakChildBlocks = scrContext->m_compileGlob.breakChildBlocks;
  breakChildCount = scrContext->m_compileGlob.breakChildCount;
  breakBlock = scrContext->m_compileGlob.breakBlock;
  continueChildBlocks = scrContext->m_compileGlob.continueChildBlocks;
  continueChildCount = scrContext->m_compileGlob.continueChildCount;
  childCount = 0;
  LODWORD(block) = 0;
  v20 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "EmitForStatement");
  scrContext->m_compileGlob.continueChildBlocks = v20;
  childBlocks = v20;
  scrContext->m_compileGlob.continueChildCount = (int *)&block;
  scrContext->m_compileGlob.breakBlock = v14->block;
  if ( v18 )
  {
    forStatBlock = NULL;
    codePos = NULL;
    v23 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "EmitForStatement");
    v28 = v23;
    scrContext->m_compileGlob.breakChildCount = &childCount;
  }
  else
  {
    EmitOpcode(scrContext, 0x72u, -1, 0);
    AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_NONE);
    v21 = (unsigned __int8 *)TempMalloc(2ui64);
    scrContext->m_compileGlob.codePos = v21;
    *(_WORD *)v21 = 0;
    codePos = (char *)scrContext->m_compileGlob.codePos;
    forStatBlock = (sval_u *)TempMalloc(0i64);
    v23 = NULL;
    v28 = NULL;
  }
  scrContext->m_compileGlob.currentBreakStatement = NULL;
  scrContext->m_compileGlob.currentContinueStatement = NULL;
  scrContext->m_compileGlob.breakChildBlocks = v23;
  scrContext->m_compileGlob.bCanBreak = 1;
  scrContext->m_compileGlob.bCanContinue = 1;
  EmitStatement(scrContext, stmt, 0, 0, v14->block);
  Scr_AddContinueBlock(scrContext, v14->block);
  scrContext->m_compileGlob.bCanBreak = 0;
  scrContext->m_compileGlob.bCanContinue = 0;
  ConnectContinueStatements(scrContext);
  v24 = forStatPostBlock;
  Scr_InitFromChildBlocks(childBlocks, (int)block, forStatPostBlock->block);
  EmitStatement(scrContext, stmt2, 0, 0, v24->block);
  EmitOpcode(scrContext, 0x1Bu, 0, 0);
  AddOpcodePos(scrContext, forSourcePos.canonicalString, SOURCE_TYPE_NONE);
  if ( stmt.node->type == 52 )
    AddOpcodePos(scrContext, stmt.node[3].canonicalString, SOURCE_TYPE_BREAKPOINT);
  v25 = (unsigned __int8 *)TempMalloc(2ui64);
  v26 = nextPos;
  scrContext->m_compileGlob.codePos = v25;
  *(_WORD *)v25 = 0;
  *(_WORD *)scrContext->m_compileGlob.codePos = Scr_TrackJumpUshort(scrContext, (const char *)scrContext->m_compileGlob.codePos, v26, forSourcePos.canonicalString);
  if ( codePos )
    *(_WORD *)codePos = Scr_TrackJumpUshort(scrContext, codePos, (const char *)forStatBlock, forSourcePos.canonicalString);
  ConnectBreakStatements(scrContext);
  scrContext->m_compileGlob.bCanBreak = bCanBreak;
  scrContext->m_compileGlob.currentBreakStatement = currentBreakStatement;
  scrContext->m_compileGlob.bCanContinue = bCanContinue;
  scrContext->m_compileGlob.currentContinueStatement = currentContinueStatement;
  if ( v18 )
    Scr_InitFromChildBlocks(v28, childCount, v11);
  scrContext->m_compileGlob.breakChildBlocks = breakChildBlocks;
  scrContext->m_compileGlob.breakChildCount = breakChildCount;
  scrContext->m_compileGlob.breakBlock = breakBlock;
  scrContext->m_compileGlob.continueChildBlocks = continueChildBlocks;
  scrContext->m_compileGlob.continueChildCount = continueChildCount;
}

/*
==============
EmitFunction
==============
*/
void EmitFunction(scrContext_t *scrContext, sval_u func, sval_u sourcePos, Scr_SourceType_t type, unsigned int localOp, unsigned int farOp, int offset, int callType)
{
  int developer_statement; 
  int v11; 
  int intValue; 
  const char *ScriptFunction2; 
  unsigned int v15; 
  int v16; 
  int v17; 
  const char *v18; 
  scr_string_t CanonicalFilename; 
  PrecacheEntry *precachescriptListStart; 
  char v21; 
  unsigned int Variable; 
  unsigned int v23; 
  unsigned int ObjectInternal; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  VariableType v28; 
  scrContext_t *v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  VariableType v34; 
  unsigned int NewVariable; 
  bool v36; 
  unsigned int v37; 
  VariableValue v38; 
  VariableValue value; 
  VariableValue out; 
  unsigned int parentId; 

  developer_statement = scrContext->m_compilePub.developer_statement;
  v11 = sourcePos.type;
  if ( developer_statement == 2 )
  {
    EmitOpcode(scrContext, localOp, offset, callType);
    AddOpcodePos(scrContext, v11, type);
    Scr_CompileRemoveRefToString(scrContext, func.node[1].stringValue);
    if ( func.node->type == 24 )
    {
      Scr_CompileRemoveRefToString(scrContext, func.node[2].stringValue);
      --scrContext->m_compilePub.far_function_count;
    }
    return;
  }
  intValue = 0;
  if ( func.node->type == 23 )
  {
    if ( developer_statement == 3 )
    {
      CompileError(scrContext, sourcePos.canonicalString, "full function name required in the debugger");
      return;
    }
    v16 = func.node[1].type;
    CompileTransferRefToString(scrContext, (scr_string_t)v16, 2u);
    EmitOpcode(scrContext, localOp, offset, callType);
    v25 = 0;
    AddOpcodePos(scrContext, v11, type);
  }
  else
  {
    if ( func.node->type != 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2461, ASSERT_TYPE_ASSERT, "( func.node[0].type == ENUM_far_function )", (const char *)&queryFormat, "func.node[0].type == ENUM_far_function") )
      __debugbreak();
    if ( scrContext->m_compilePub.developer_statement == 3 )
    {
      ScriptFunction2 = Scr_GetScriptFunction2(scrContext, func);
      v38.u.scriptCodePosValue = (unsigned __int64)ScriptFunction2;
      if ( ScriptFunction2 )
      {
        v15 = Scr_CodePosToOffset(scrContext, ScriptFunction2);
        EmitUint3(scrContext, v15);
      }
      else
      {
        CompileError(scrContext, v11, "bad function name");
      }
      return;
    }
    v16 = func.node[2].type;
    v17 = func.node[1].type;
    CompileTransferRefToString(scrContext, (scr_string_t)v16, 2u);
    v18 = SL_ConvertToString((scr_string_t)v17);
    CanonicalFilename = Scr_CreateCanonicalFilename(scrContext, v18);
    Scr_CompileRemoveRefToString(scrContext, (scr_string_t)v17);
    if ( !scrContext->m_compileGlob.precachescriptList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2340, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->precachescriptList )", (const char *)&queryFormat, "pScrCompileGlob->precachescriptList") )
      __debugbreak();
    precachescriptListStart = scrContext->m_compileGlob.precachescriptListStart;
    v21 = 0;
    if ( precachescriptListStart >= scrContext->m_compileGlob.precachescriptList )
      goto LABEL_20;
    do
    {
      if ( precachescriptListStart->filenameExt == CanonicalFilename )
      {
        ++scrContext->m_compilePub.far_function_duplicate_includes;
        v21 = 1;
      }
      ++precachescriptListStart;
    }
    while ( precachescriptListStart < scrContext->m_compileGlob.precachescriptList );
    if ( !v21 )
    {
LABEL_20:
      SL_AddRefToString(CanonicalFilename);
      scrContext->m_compileGlob.precachescriptList->filenameExt = CanonicalFilename;
      scrContext->m_compileGlob.precachescriptList->sourcePos = v11;
      scrContext->m_compileGlob.precachescriptList->include = 0;
      ++scrContext->m_compileGlob.precachescriptList;
    }
    Variable = GetVariable(scrContext, scrContext->m_compilePub.scriptsPos, CanonicalFilename);
    parentId = GetObjectInternal(scrContext, Variable);
    v23 = GetVariable(scrContext, scrContext->m_compilePub.scriptsCount, CanonicalFilename);
    ObjectInternal = GetObjectInternal(scrContext, v23);
    Scr_CompileRemoveRefToString(scrContext, CanonicalFilename);
    if ( scrContext->m_compilePub.scriptFilenameExt != CanonicalFilename )
    {
      EmitOpcode(scrContext, farOp, offset, callType);
      AddOpcodePos(scrContext, v11, type);
      v25 = 1;
      v26 = FindVariable(scrContext, scrContext->m_compilePub.loadedscripts, CanonicalFilename);
      Scr_EvalVariable_Out(scrContext, v26, &out);
      if ( out.type )
      {
        v27 = FindVariable(scrContext, parentId, v16);
        if ( !v27 )
        {
          CompileErrorWithSourceLine(scrContext, v11, "unknown function");
          return;
        }
        Scr_EvalVariable_Out(scrContext, v27, &v38);
        v28 = v38.type;
        if ( v38.type != VAR_CODEPOS && v38.type != VAR_DEVELOPER_CODEPOS )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2520, ASSERT_TYPE_ASSERT, "( ( pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS ) )", "%s\n\t( pos.type ) = %i", "( pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS )", (unsigned __int8)v38.type) )
            __debugbreak();
          v28 = v38.type;
        }
        if ( !v38.u.scriptCodePosValue )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2521, ASSERT_TYPE_ASSERT, "( pos.u.codePosValue )", (const char *)&queryFormat, "pos.u.codePosValue") )
            __debugbreak();
          v28 = v38.type;
        }
        if ( v28 == VAR_CODEPOS )
        {
          v29 = scrContext;
        }
        else
        {
          if ( v28 != VAR_DEVELOPER_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2530, ASSERT_TYPE_ASSERT, "( pos.type == VAR_DEVELOPER_CODEPOS )", (const char *)&queryFormat, "pos.type == VAR_DEVELOPER_CODEPOS") )
            __debugbreak();
          if ( !scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2531, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "scrContext.m_varPub.developer_script") )
            __debugbreak();
          if ( scrContext->m_compilePub.developer_statement == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2532, ASSERT_TYPE_ASSERT, "( pScrCompilePub->developer_statement != SCR_DEV_IGNORE )", (const char *)&queryFormat, "pScrCompilePub->developer_statement != SCR_DEV_IGNORE") )
            __debugbreak();
          v29 = scrContext;
          if ( !scrContext->m_compilePub.developer_statement )
          {
            CompileError(scrContext, v11, "normal script cannot reference a function in a /# ... #/ comment");
            return;
          }
        }
        v30 = Scr_CodePosToOffset(v29, v38.u.codePosValue);
        EmitUint3(scrContext, v30);
        Scr_SetRelativeCodepos(scrContext->m_compileGlob.codePos, &scrContext->m_varPub.programBuffer[scrContext->m_compileGlob.codePos[2] | ((scrContext->m_compileGlob.codePos[1] | ((unsigned __int64)*scrContext->m_compileGlob.codePos << 8)) << 8)]);
        return;
      }
      goto LABEL_53;
    }
    EmitOpcode(scrContext, localOp, offset, callType);
    AddOpcodePos(scrContext, v11, type);
    v25 = 0;
  }
  ObjectInternal = scrContext->m_compileGlob.fileCountId;
LABEL_53:
  EmitUint3(scrContext, v25);
  v31 = GetVariable(scrContext, ObjectInternal, v16);
  v32 = GetObjectInternal(scrContext, v31);
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2578, ASSERT_TYPE_ASSERT, "( threadCountId )", (const char *)&queryFormat, "threadCountId") )
    __debugbreak();
  v33 = GetVariable(scrContext, v32, 0);
  Scr_EvalVariable_Out(scrContext, v33, &value);
  v34 = value.type;
  if ( value.type == VAR_UNDEFINED )
    goto LABEL_63;
  if ( value.type != VAR_INTEGER )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2582, ASSERT_TYPE_ASSERT, "( (count.type == VAR_UNDEFINED) || (count.type == VAR_INTEGER) )", (const char *)&queryFormat, "(count.type == VAR_UNDEFINED) || (count.type == VAR_INTEGER)") )
      __debugbreak();
    v34 = value.type;
  }
  if ( v34 )
  {
    intValue = value.u.intValue;
  }
  else
  {
LABEL_63:
    value.type = VAR_INTEGER;
    value.u.intValue = 0;
  }
  NewVariable = GetNewVariable(scrContext, v32, intValue + 1);
  v36 = scrContext->m_compilePub.developer_statement == 0;
  v37 = NewVariable;
  out.u.scriptCodePosValue = (unsigned __int64)scrContext->m_compileGlob.codePos;
  if ( v36 )
  {
    out.type = VAR_CODEPOS;
  }
  else
  {
    if ( !scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2605, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "scrContext.m_varPub.developer_script") )
      __debugbreak();
    out.type = VAR_DEVELOPER_CODEPOS;
  }
  SetNewVariableValue(scrContext, v37, &out);
  ++value.u.intValue;
  SetVariableValue(scrContext, v33, &value);
  AddOpcodePos(scrContext, v11, SOURCE_TYPE_NONE);
}

/*
==============
EmitGetFunction
==============
*/
void EmitGetFunction(scrContext_t *scrContext, sval_u func_name, sval_u sourcePos)
{
  int v6; 
  char *v7; 
  sval_u v8; 
  unsigned int Variable; 
  unsigned int v10; 
  unsigned int v11; 
  VariableUnion v12; 
  bool v13; 
  unsigned int Method; 
  unsigned int NewVariable; 
  unsigned int v16; 
  unsigned __int16 v17; 
  unsigned __int8 *v18; 
  unsigned __int16 v19; 
  VariableValue out; 
  BuiltinType type; 
  unsigned int Function; 
  char *pName; 

  if ( func_name.node->type != 23 )
    goto $script_function_0;
  v6 = func_name.node[1].type;
  if ( !v6 )
    goto $script_function_0;
  v7 = (char *)SL_ConvertToString((scr_string_t)v6);
  v13 = scrContext->m_compilePub.developer_statement == 3;
  v8 = func_name.node[2];
  pName = v7;
  if ( !v13 )
  {
    Variable = FindVariable(scrContext, scrContext->m_compilePub.builtinFunc, v6);
    if ( Variable )
    {
      Scr_EvalVariable_Out(scrContext, Variable, &out);
      type = Scr_GetBuiltinType(out.type);
      v10 = truncate_cast<unsigned int,unsigned __int64>(out.u.scriptCodePosValue);
      goto $found_func;
    }
    v11 = FindVariable(scrContext, scrContext->m_compilePub.builtinMeth, v6);
    if ( v11 )
    {
      Scr_EvalVariable_Out(scrContext, v11, &out);
      type = Scr_GetBuiltinType(out.type);
      v12.intValue = truncate_cast<unsigned int,unsigned __int64>(out.u.scriptCodePosValue);
      v13 = v12.intValue == 0;
      goto LABEL_22;
    }
    type = BUILTIN_ANY;
    Function = Scr_GetFunction(scrContext, (const char **)&pName, &type);
    v10 = Function;
    if ( !Function )
    {
      type = BUILTIN_ANY;
      Method = Scr_GetMethod(scrContext, (const char **)&pName, &type);
      v12.scriptCodePosValue = Method;
      if ( Method )
      {
        NewVariable = GetNewVariable(scrContext, scrContext->m_compilePub.builtinMeth, v6);
        out.type = Scr_GetCodePositionType(type);
        out.u = v12;
        SetVariableValue(scrContext, NewVariable, &out);
        v13 = v12.intValue == 0;
        goto LABEL_22;
      }
      v10 = Function;
    }
    v16 = GetNewVariable(scrContext, scrContext->m_compilePub.builtinFunc, v6);
    out.u.scriptCodePosValue = v10;
    out.type = Scr_GetCodePositionType(type);
    SetVariableValue(scrContext, v16, &out);
$found_func:
    if ( !v10 )
      goto $script_function_0;
    goto LABEL_17;
  }
  type = BUILTIN_ANY;
  v10 = Scr_GetFunction(scrContext, (const char **)&pName, &type);
  if ( v10 )
  {
LABEL_17:
    if ( type != BUILTIN_DEVELOPER_ONLY || scrContext->m_compilePub.developer_statement )
    {
      Scr_CompileRemoveRefToString(scrContext, (scr_string_t)v6);
      EmitOpcode(scrContext, 0x32u, 1, 0);
      AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
      v17 = truncate_cast<unsigned short,unsigned int>(v10);
      v18 = (unsigned __int8 *)TempMalloc(2ui64);
      scrContext->m_compileGlob.codePos = v18;
      *(_WORD *)v18 = v17;
      return;
    }
    goto LABEL_19;
  }
  type = BUILTIN_ANY;
  v12.intValue = Scr_GetMethod(scrContext, (const char **)&pName, &type);
  v13 = v12.intValue == 0;
LABEL_22:
  if ( !v13 )
  {
    if ( type != BUILTIN_DEVELOPER_ONLY || scrContext->m_compilePub.developer_statement )
    {
      Scr_CompileRemoveRefToString(scrContext, (scr_string_t)v6);
      EmitOpcode(scrContext, 0x55u, 1, 0);
      AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
      v19 = truncate_cast<unsigned short,unsigned int>(v12.uintValue);
      EmitUnsignedShort(scrContext, v19);
      return;
    }
LABEL_19:
    CompileError(scrContext, v8.canonicalString, "developer command can not be accessed if not in a /# ... #/ comment");
    return;
  }
$script_function_0:
  if ( scrContext->m_compilePub.developer_statement == 3 )
    CompileError(scrContext, func_name.node[2].canonicalString, "unknown builtin function");
  else
    EmitFunction(scrContext, func_name, sourcePos, SOURCE_TYPE_GETFUNCTION|SOURCE_TYPE_BREAKPOINT, 0x89u, 0x92u, 1, 0);
}

/*
==============
EmitIfElseStatement
==============
*/
void EmitIfElseStatement(scrContext_t *scrContext, sval_u expr, sval_u stmt1, sval_u stmt2, sval_u sourcePos, sval_u elseSourcePos, bool lastStatement, unsigned int endSourcePos, scr_block_t *block, sval_u *ifStatBlock, sval_u *elseStatBlock)
{
  unsigned __int8 *v14; 
  char *codePos; 
  unsigned int v16; 
  scr_block_t *node; 
  unsigned int checksum; 
  const char *v19; 
  unsigned __int8 *v20; 
  __int64 v21; 
  char *pos; 
  scr_block_t *childBlocks[2]; 
  VariableCompileValue constValue; 
  char *nextPos; 

  if ( EmitOrEvalExpression(scrContext, expr, &constValue, block) )
    EmitValue(scrContext, &constValue);
  EmitOpcode(scrContext, 0x72u, -1, 0);
  AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_NONE);
  v14 = (unsigned __int8 *)TempMalloc(2ui64);
  scrContext->m_compileGlob.codePos = v14;
  codePos = NULL;
  *(_WORD *)v14 = 0;
  pos = (char *)scrContext->m_compileGlob.codePos;
  nextPos = TempMalloc(0i64);
  Scr_TransferBlock(block, ifStatBlock->block);
  EmitStatement(scrContext, stmt1, lastStatement, endSourcePos, ifStatBlock->block);
  EmitRemoveLocalVars(scrContext, ifStatBlock->block, ifStatBlock->block);
  v16 = 0;
  node = childBlocks[0];
  checksum = scrContext->m_varPub.checksum;
  if ( !ifStatBlock->node->type )
    node = (scr_block_t *)ifStatBlock->node;
  LOBYTE(v16) = ifStatBlock->node->type == 0;
  childBlocks[0] = node;
  if ( lastStatement )
  {
    EmitOpcode(scrContext, 0x3Bu, 0, 0);
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
      Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
    AddOpcodePos(scrContext, endSourcePos, SOURCE_TYPE_BREAKPOINT);
    v19 = NULL;
  }
  else
  {
    EmitOpcode(scrContext, 0x94u, 0, 0);
    AddOpcodePos(scrContext, elseSourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
    v20 = (unsigned __int8 *)TempMalloc(4ui64);
    scrContext->m_compileGlob.codePos = v20;
    *(_DWORD *)v20 = 0;
    codePos = (char *)scrContext->m_compileGlob.codePos;
    v19 = TempMalloc(0i64);
  }
  scrContext->m_varPub.checksum = checksum + 1;
  *(_WORD *)pos = Scr_TrackJumpUshort(scrContext, pos, nextPos, endSourcePos);
  Scr_TransferBlock(block, elseStatBlock->block);
  EmitStatement(scrContext, stmt2, lastStatement, endSourcePos, elseStatBlock->block);
  EmitNOP2(scrContext, lastStatement, endSourcePos, elseStatBlock->block);
  if ( !elseStatBlock->node->type )
  {
    v21 = v16++;
    childBlocks[v21] = (scr_block_t *)elseStatBlock->node;
  }
  if ( !lastStatement )
    *(_DWORD *)codePos = Scr_TrackJump(scrContext, codePos, v19, 1, endSourcePos);
  Scr_InitFromChildBlocks(childBlocks, v16, block);
}

/*
==============
EmitIncludeList
==============
*/
void EmitIncludeList(scrContext_t *scrContext, sval_u val)
{
  _QWORD *i; 
  _DWORD *v4; 
  const char *v5; 
  scr_string_t CanonicalFilename; 
  scr_string_t v7; 
  scr_string_t v8; 
  unsigned int v9; 
  PrecacheEntry *precachescriptListStart; 
  char v11; 

  for ( i = *(_QWORD **)(*(_QWORD *)val.node + 8i64); i; i = (_QWORD *)i[1] )
  {
    v4 = (_DWORD *)*i;
    if ( *(_DWORD *)*i != 97 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 6078, ASSERT_TYPE_ASSERT, "( val.node[0].type == ENUM_include )", (const char *)&queryFormat, "val.node[0].type == ENUM_include") )
      __debugbreak();
    v5 = SL_ConvertToString((scr_string_t)v4[2]);
    CanonicalFilename = Scr_CreateCanonicalFilename(scrContext, v5);
    v7 = v4[2];
    v8 = CanonicalFilename;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 640, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
      __debugbreak();
    if ( !scrContext->m_compileGlob.bConstRefCount && scrContext->m_compilePub.developer_statement != 3 )
      SL_RemoveRefToString(v7);
    v9 = v4[4];
    if ( !scrContext->m_compileGlob.precachescriptList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2340, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->precachescriptList )", (const char *)&queryFormat, "pScrCompileGlob->precachescriptList") )
      __debugbreak();
    precachescriptListStart = scrContext->m_compileGlob.precachescriptListStart;
    v11 = 0;
    if ( precachescriptListStart >= scrContext->m_compileGlob.precachescriptList )
      goto LABEL_19;
    do
    {
      if ( precachescriptListStart->filenameExt == v8 )
      {
        ++scrContext->m_compilePub.far_function_duplicate_includes;
        v11 = 1;
      }
      ++precachescriptListStart;
    }
    while ( precachescriptListStart < scrContext->m_compileGlob.precachescriptList );
    if ( !v11 )
    {
LABEL_19:
      SL_AddRefToString(v8);
      scrContext->m_compileGlob.precachescriptList->filenameExt = v8;
      scrContext->m_compileGlob.precachescriptList->sourcePos = v9;
      scrContext->m_compileGlob.precachescriptList->include = 1;
      ++scrContext->m_compileGlob.precachescriptList;
    }
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 640, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
      __debugbreak();
    if ( !scrContext->m_compileGlob.bConstRefCount && scrContext->m_compilePub.developer_statement != 3 )
      SL_RemoveRefToString(v8);
  }
}

/*
==============
EmitMethod
==============
*/
void EmitMethod(scrContext_t *scrContext, sval_u expr, sval_u func_name, sval_u params, sval_u methodSourcePos, bool bStatement, scr_block_t *block)
{
  scr_string_t Builtin; 
  signed int v12; 
  char *v13; 
  bool v14; 
  sval_u v15; 
  unsigned int Variable; 
  unsigned int Method; 
  unsigned int v18; 
  VariableUnion v19; 
  unsigned int NewVariable; 
  bool v21; 
  int v22; 
  bool developer_script; 
  unsigned int v24; 
  unsigned __int8 *v25; 
  unsigned __int16 v26; 
  unsigned __int8 *v27; 
  int v28; 
  scr_block_t *v29; 
  int v30; 
  sval_u *node; 
  unsigned int val; 
  scr_string_t stringValue; 
  char *pName; 
  char *pos; 
  VariableValue out; 
  VariableCompileValue constValue; 
  VariableCompileValue v38; 
  BuiltinType type; 

  pos = NULL;
  Builtin = Scr_GetBuiltin(func_name);
  stringValue = Builtin;
  v12 = Builtin;
  if ( !Builtin )
    goto $script_method;
  v13 = (char *)SL_ConvertToString(Builtin);
  v14 = scrContext->m_compilePub.developer_statement == 3;
  v15 = func_name.node[2];
  pName = v13;
  if ( v14 )
  {
    type = BUILTIN_ANY;
    Method = Scr_GetMethod(scrContext, (const char **)&pName, &type);
  }
  else
  {
    Variable = FindVariable(scrContext, scrContext->m_compilePub.builtinMeth, v12);
    if ( !Variable )
    {
      type = BUILTIN_ANY;
      v18 = Scr_GetMethod(scrContext, (const char **)&pName, &type);
      v19.scriptCodePosValue = v18;
      val = v18;
      NewVariable = GetNewVariable(scrContext, scrContext->m_compilePub.builtinMeth, v12);
      out.type = Scr_GetCodePositionType(type);
      out.u = v19;
      SetVariableValue(scrContext, NewVariable, &out);
      v12 = stringValue;
      goto LABEL_8;
    }
    Scr_EvalVariable_Out(scrContext, Variable, &out);
    type = Scr_GetBuiltinType(out.type);
    Method = truncate_cast<unsigned int,unsigned __int64>(out.u.scriptCodePosValue);
  }
  val = Method;
  v19.intValue = Method;
LABEL_8:
  if ( !v19.intValue )
  {
$script_method:
    if ( func_name.node->type == 29 )
    {
      scrContext->m_compileGlob.prevCumulOffset = scrContext->m_compileGlob.cumulOffset;
      EmitOpcode(scrContext, 0x15u, 1, 0);
      AddOpcodePos(scrContext, func_name.node[2].canonicalString, SOURCE_TYPE_BREAKPOINT);
    }
    v29 = block;
    v30 = EmitExpressionList(scrContext, params, block);
    if ( EmitOrEvalPrimitiveExpression(scrContext, expr, &v38, v29) )
      EmitValue(scrContext, &v38);
    EmitPostFunctionCall(scrContext, func_name, v30, 1, v29);
    AddOpcodePos(scrContext, methodSourcePos.canonicalString, SOURCE_TYPE_NONE);
    if ( scrContext->m_varPub.developer )
    {
      node = params.node->node;
      if ( *params.node )
      {
        do
        {
          AddOpcodePos(scrContext, node->node[1].canonicalString, SOURCE_TYPE_NONE);
          node = node[1].node;
        }
        while ( node );
      }
    }
    if ( bStatement )
      EmitOpcode(scrContext, 0x58u, -1, 0);
    return;
  }
  v21 = bStatement;
  if ( type == BUILTIN_DEVELOPER_ONLY )
  {
    if ( scrContext->m_compilePub.developer_statement )
    {
      type = BUILTIN_ANY;
    }
    else
    {
      developer_script = scrContext->m_varPub.developer_script;
      if ( !developer_script )
        pos = TempMalloc(0i64);
      scrContext->m_compilePub.developer_statement = 2 - developer_script;
      type = BUILTIN_DEVELOPER_ONLY;
      if ( !v21 )
      {
        CompileError(scrContext, v15.canonicalString, "return value of developer command can not be accessed if not in a /# ... #/ comment");
        return;
      }
    }
  }
  v22 = EmitExpressionList(scrContext, params, block);
  if ( EmitOrEvalPrimitiveExpression(scrContext, expr, &constValue, block) )
    EmitValue(scrContext, &constValue);
  if ( v22 < 256 )
  {
    Scr_CompileRemoveRefToString(scrContext, (scr_string_t)v12);
    v24 = v22 + 126;
    if ( v22 > 5 )
      v24 = 132;
    EmitOpcode(scrContext, v24, -v22, 1);
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
      Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
    AddOpcodePos(scrContext, v15.canonicalString, SOURCE_TYPE_BUILTIN_CALL|SOURCE_TYPE_BREAKPOINT);
    if ( v24 == 132 )
    {
      v25 = (unsigned __int8 *)TempMalloc(1ui64);
      scrContext->m_compileGlob.codePos = v25;
      *v25 = v22;
    }
    v26 = truncate_cast<unsigned short,unsigned int>(val);
    v27 = (unsigned __int8 *)TempMalloc(2ui64);
    v28 = methodSourcePos.type;
    scrContext->m_compileGlob.codePos = v27;
    *(_WORD *)v27 = v26;
    AddOpcodePos(scrContext, v28, SOURCE_TYPE_NONE);
    AddExpressionListOpcodePos(scrContext, params);
    if ( bStatement )
      EmitOpcode(scrContext, 0x58u, -1, 0);
    EmitAssignmentPos(scrContext);
    if ( type == BUILTIN_DEVELOPER_ONLY )
    {
      v14 = !scrContext->m_varPub.developer_script;
      scrContext->m_compilePub.developer_statement = 0;
      if ( v14 )
        TempMemorySetPos(pos);
    }
  }
  else
  {
    CompileError(scrContext, v15.canonicalString, "parameter count exceeds 256");
  }
}

/*
==============
EmitNOP2
==============
*/
void EmitNOP2(scrContext_t *scrContext, bool lastStatement, unsigned int endSourcePos, scr_block_t *block)
{
  unsigned int checksum; 

  checksum = scrContext->m_varPub.checksum;
  if ( lastStatement )
  {
    EmitOpcode(scrContext, 0x3Bu, 0, 0);
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
      Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
    AddOpcodePos(scrContext, endSourcePos, SOURCE_TYPE_BREAKPOINT);
  }
  else
  {
    EmitRemoveLocalVars(scrContext, block, block);
  }
  scrContext->m_varPub.checksum = checksum + 1;
}

/*
==============
EmitObject
==============
*/
void EmitObject(scrContext_t *scrContext, sval_u expr, sval_u sourcePos)
{
  int type; 
  const char *v5; 
  const char *v6; 
  char v7; 
  unsigned int v8; 
  unsigned int v9; 
  VariableType ObjectType; 
  unsigned __int8 *v11; 
  EntityClass ClassnumForCharId; 
  int v13; 
  unsigned __int8 *v14; 
  unsigned __int8 *v15; 

  type = sourcePos.type;
  if ( scrContext->m_compilePub.script_loading )
  {
    CompileError(scrContext, sourcePos.canonicalString, "$ can only be used in the script debugger");
  }
  else
  {
    v5 = SL_ConvertToString(expr.stringValue);
    v6 = v5;
    v7 = *v5;
    if ( *v5 == 116 )
    {
      v8 = atoi(v5 + 1);
      v9 = v8;
      if ( v8 && v8 < scrContext->m_variableListParentSize && !IsObjectFree(scrContext, v8) && ((ObjectType = GetObjectType(scrContext, v9), (unsigned __int8)(ObjectType - 17) <= 3u) || ObjectType == VAR_DEAD_THREAD) )
      {
        EmitOpcode(scrContext, 0x9Du, 1, 0);
        v11 = (unsigned __int8 *)TempMalloc(4ui64);
        scrContext->m_compileGlob.codePos = v11;
        *(_DWORD *)v11 = v9;
      }
      else
      {
        CompileError(scrContext, type, "bad expression");
      }
    }
    else if ( v7 == 97 )
    {
      CompileError(scrContext, type, "argument expressions not supported in statements");
    }
    else
    {
      ClassnumForCharId = Scr_GetClassnumForCharId(scrContext, v7);
      if ( ClassnumForCharId != ENTITY_CLASS_COUNT && ((v13 = atoi(v6 + 1)) != 0 || v6[1] == 48) )
      {
        EmitOpcode(scrContext, 0x9Cu, 1, 0);
        v14 = (unsigned __int8 *)TempMalloc(4ui64);
        scrContext->m_compileGlob.codePos = v14;
        *(_DWORD *)v14 = (unsigned __int8)ClassnumForCharId;
        v15 = (unsigned __int8 *)TempMalloc(4ui64);
        scrContext->m_compileGlob.codePos = v15;
        *(_DWORD *)v15 = v13;
      }
      else
      {
        CompileError(scrContext, type, "bad expression");
      }
    }
  }
}

/*
==============
EmitOpcode
==============
*/
void EmitOpcode(scrContext_t *scrContext, unsigned int op, int offset, int callType)
{
  __int64 v4; 
  unsigned __int8 *v8; 
  int value_count; 
  VariableCompileValue *value_start; 
  __int64 v11; 
  int cumulOffset; 
  bool v13; 
  int v14; 
  unsigned __int8 *opcodePos; 
  unsigned __int8 v16; 
  unsigned int v17; 
  unsigned __int8 *v18; 
  unsigned __int8 v19; 
  unsigned __int8 *v20; 
  unsigned __int8 v21; 
  unsigned __int8 *v22; 
  unsigned __int8 v23; 
  unsigned __int8 *v24; 
  unsigned __int8 *v25; 
  unsigned __int8 v26; 
  unsigned __int8 v27; 
  unsigned __int8 *v28; 
  unsigned __int8 *v29; 
  unsigned int v30; 
  unsigned __int8 *v31; 
  unsigned __int8 *v32; 
  int v33; 
  __int64 v34; 

  v4 = op;
  if ( op >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 779, ASSERT_TYPE_ASSERT, "(unsigned)( op ) < (unsigned)( 256 )", "op doesn't index 256\n\t%i not in [0, %i)", op, 256) )
    __debugbreak();
  if ( scrContext->m_compilePub.developer_statement == 3 )
  {
    v8 = (unsigned __int8 *)TempMalloc(1ui64);
    scrContext->m_compileGlob.codePos = v8;
    *v8 = v4;
    return;
  }
  value_count = scrContext->m_compilePub.value_count;
  if ( value_count )
  {
    scrContext->m_compilePub.value_count = 0;
    if ( value_count > 0 )
    {
      value_start = scrContext->m_compileGlob.value_start;
      v11 = (unsigned int)value_count;
      do
      {
        EmitValue(scrContext, value_start++);
        --v11;
      }
      while ( v11 );
    }
  }
  cumulOffset = scrContext->m_compileGlob.cumulOffset;
  v13 = cumulOffset == 0;
  v14 = cumulOffset + offset;
  scrContext->m_compileGlob.cumulOffset = cumulOffset + offset;
  if ( scrContext->m_compileGlob.maxOffset < cumulOffset + offset )
    scrContext->m_compileGlob.maxOffset = v14;
  if ( callType && scrContext->m_compileGlob.maxCallOffset < v14 )
    scrContext->m_compileGlob.maxCallOffset = v14;
  scrContext->m_varPub.checksum = v4 + 31 * scrContext->m_varPub.checksum;
  opcodePos = scrContext->m_compilePub.opcodePos;
  if ( opcodePos )
  {
    scrContext->m_compileGlob.codePos = opcodePos;
    switch ( (int)v4 )
    {
      case 0:
        v29 = scrContext->m_compilePub.opcodePos;
        if ( *v29 == 68 )
        {
          *v29 = 71;
        }
        else
        {
          v30 = *v29 - 62;
          if ( v30 > 5 )
            goto LABEL_93;
          *v29 = 71;
          EmitByte(scrContext, v30);
        }
        return;
      case 5:
        if ( *scrContext->m_compilePub.opcodePos != 58 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = -118;
        return;
      case 25:
      case 28:
        v31 = scrContext->m_compilePub.opcodePos;
        if ( *v31 != 89 )
          goto LABEL_93;
        if ( (unsigned int)v4 > 0xFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v4, "unsigned", v4) )
            __debugbreak();
          v31 = scrContext->m_compilePub.opcodePos;
        }
        *v31 = v4;
        Scr_FixJump(scrContext);
        return;
      case 41:
        if ( *scrContext->m_compilePub.opcodePos != 58 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 72;
        return;
      case 44:
        v20 = scrContext->m_compilePub.opcodePos;
        v21 = *v20;
        if ( *v20 == 54 )
        {
          *v20 = 60;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        else if ( v21 == 124 )
        {
          *v20 = 123;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        else
        {
          if ( v21 != 97 )
            goto LABEL_93;
          *v20 = 7;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        return;
      case 49:
        v24 = scrContext->m_compilePub.opcodePos;
        if ( *v24 != 48 )
          goto LABEL_93;
        *v24 = 82;
        return;
      case 51:
        if ( *scrContext->m_compilePub.opcodePos != 58 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = -104;
        if ( !scrContext->m_compileGlob.prevOpcodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1051, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->prevOpcodePos )", (const char *)&queryFormat, "pScrCompileGlob->prevOpcodePos") )
          __debugbreak();
        if ( *scrContext->m_compileGlob.prevOpcodePos == 21 )
        {
          if ( (char *)scrContext->m_compilePub.opcodePos != TempMalloc(0i64) - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1054, ASSERT_TYPE_ASSERT, "( pScrCompilePub->opcodePos == (byte *)TempMalloc( 0 ) - 1 )", (const char *)&queryFormat, "pScrCompilePub->opcodePos == (byte *)TempMalloc( 0 ) - 1") )
            __debugbreak();
          TempMemorySetPos((char *)scrContext->m_compilePub.opcodePos);
          --scrContext->m_compilePub.opcodePos;
          scrContext->m_compilePub.allowedBreakpoint = scrContext->m_compileGlob.prevCumulOffset == 0;
          scrContext->m_compileGlob.prevOpcodePos = NULL;
          scrContext->m_compileGlob.codePos = scrContext->m_compilePub.opcodePos;
          *scrContext->m_compilePub.opcodePos = 79;
        }
        return;
      case 57:
        v16 = *scrContext->m_compilePub.opcodePos;
        if ( v16 == 68 )
        {
          RemoveOpcodePos(scrContext);
          *scrContext->m_compilePub.opcodePos = 99;
        }
        else
        {
          v17 = v16 - 62;
          if ( v17 > 5 )
            goto LABEL_93;
          RemoveOpcodePos(scrContext);
          *scrContext->m_compilePub.opcodePos = 99;
          EmitByte(scrContext, v17);
        }
        return;
      case 89:
        v32 = scrContext->m_compilePub.opcodePos;
        v33 = *v32;
        if ( (unsigned __int8)(v33 - 61) <= 0x39u && (v34 = 0x200000010400001i64, _bittest64(&v34, (unsigned int)(v33 - 61))) || (_BYTE)v33 == 10 || (_BYTE)v33 == 16 || (_BYTE)v33 == 0x97 )
        {
          if ( (_BYTE)v33 == 119 )
            *v32 = -91;
        }
        else
        {
          if ( (_BYTE)v33 != 119 )
            goto LABEL_93;
          *v32 = -91;
        }
        return;
      case 90:
        v18 = scrContext->m_compilePub.opcodePos;
        v19 = *v18;
        if ( *v18 == 113 )
        {
          RemoveOpcodePos(scrContext);
          *scrContext->m_compilePub.opcodePos = -114;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        else if ( v19 == 0x8F )
        {
          RemoveOpcodePos(scrContext);
          *scrContext->m_compilePub.opcodePos = 46;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        else
        {
          if ( v19 != 111 )
            goto LABEL_93;
          *v18 = 69;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        return;
      case 96:
        if ( *scrContext->m_compilePub.opcodePos != 21 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 117;
        return;
      case 101:
        if ( *scrContext->m_compilePub.opcodePos != 58 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 23;
        return;
      case 108:
        v27 = *scrContext->m_compilePub.opcodePos;
        if ( v27 == 113 )
        {
          RemoveOpcodePos(scrContext);
          *scrContext->m_compilePub.opcodePos = -116;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        else
        {
          if ( v27 != 0x8F )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1014, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
              __debugbreak();
            goto LABEL_93;
          }
          RemoveOpcodePos(scrContext);
          *scrContext->m_compilePub.opcodePos = 17;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        return;
      case 109:
        v22 = scrContext->m_compilePub.opcodePos;
        v23 = *v22;
        if ( *v22 == 54 )
        {
          *v22 = 4;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        else if ( v23 == 124 )
        {
          *v22 = 8;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        else
        {
          if ( v23 != 97 )
            goto LABEL_93;
          *v22 = -115;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            goto LABEL_90;
        }
        return;
      case 110:
        if ( *scrContext->m_compilePub.opcodePos != 58 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 53;
        return;
      case 114:
        if ( *scrContext->m_compilePub.opcodePos != 119 )
          goto LABEL_93;
        Scr_FixJump(scrContext);
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 14;
        return;
      case 135:
        v25 = scrContext->m_compilePub.opcodePos;
        v26 = *v25;
        if ( *v25 == 113 )
        {
          RemoveOpcodePos(scrContext);
          *scrContext->m_compilePub.opcodePos = 1;
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
          {
LABEL_90:
            Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
            return;
          }
        }
        else
        {
          switch ( v26 )
          {
            case 0x8F:
              RemoveOpcodePos(scrContext);
              *scrContext->m_compilePub.opcodePos = 36;
              if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
                goto LABEL_90;
              break;
            case 0x6Fu:
              *v25 = 91;
              if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
                goto LABEL_90;
              break;
            case 4u:
              RemoveOpcodePos(scrContext);
              *scrContext->m_compilePub.opcodePos = 24;
              if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
                goto LABEL_90;
              break;
            case 8u:
              RemoveOpcodePos(scrContext);
              *scrContext->m_compilePub.opcodePos = 56;
              if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
                goto LABEL_90;
              break;
            case 0x8D:
              RemoveOpcodePos(scrContext);
              *scrContext->m_compilePub.opcodePos = 76;
              if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
                goto LABEL_90;
              break;
            default:
              goto LABEL_93;
          }
        }
        break;
      case 143:
        if ( *scrContext->m_compilePub.opcodePos != 48 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 111;
        return;
      case 150:
        if ( *scrContext->m_compilePub.opcodePos != 58 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 96;
        if ( !scrContext->m_compileGlob.prevOpcodePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1072, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->prevOpcodePos )", (const char *)&queryFormat, "pScrCompileGlob->prevOpcodePos") )
          __debugbreak();
        if ( *scrContext->m_compileGlob.prevOpcodePos == 21 )
        {
          if ( (char *)scrContext->m_compilePub.opcodePos != TempMalloc(0i64) - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1075, ASSERT_TYPE_ASSERT, "( pScrCompilePub->opcodePos == (byte *)TempMalloc( 0 ) - 1 )", (const char *)&queryFormat, "pScrCompilePub->opcodePos == (byte *)TempMalloc( 0 ) - 1") )
            __debugbreak();
          TempMemorySetPos((char *)scrContext->m_compilePub.opcodePos);
          --scrContext->m_compilePub.opcodePos;
          scrContext->m_compilePub.allowedBreakpoint = scrContext->m_compileGlob.prevCumulOffset == 0;
          scrContext->m_compileGlob.prevOpcodePos = NULL;
          scrContext->m_compileGlob.codePos = scrContext->m_compilePub.opcodePos;
          *scrContext->m_compilePub.opcodePos = 117;
        }
        return;
      case 152:
        if ( *scrContext->m_compilePub.opcodePos != 21 )
          goto LABEL_93;
        RemoveOpcodePos(scrContext);
        *scrContext->m_compilePub.opcodePos = 79;
        return;
      default:
LABEL_93:
        Scr_ClearTrackedJumps(scrContext, scrContext->m_compilePub.opcodePos);
        if ( *scrContext->m_compilePub.opcodePos == 111 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1200, ASSERT_TYPE_ASSERT, "( *pScrCompilePub->opcodePos != OP_EvalNewLocalVariableRefCached0 )", (const char *)&queryFormat, "*pScrCompilePub->opcodePos != OP_EvalNewLocalVariableRefCached0") )
          __debugbreak();
        opcodePos = scrContext->m_compilePub.opcodePos;
        goto LABEL_97;
    }
  }
  else
  {
LABEL_97:
    scrContext->m_compilePub.allowedBreakpoint = v13;
    scrContext->m_compileGlob.prevOpcodePos = opcodePos;
    v28 = (unsigned __int8 *)TempMalloc(1ui64);
    scrContext->m_compilePub.opcodePos = v28;
    scrContext->m_compileGlob.codePos = v28;
    *scrContext->m_compilePub.opcodePos = v4;
  }
}

/*
==============
EmitOrEvalExpression
==============
*/
bool EmitOrEvalExpression(scrContext_t *scrContext, sval_u expr, VariableCompileValue *constValue, scr_block_t *block)
{
  bool v8; 
  bool result; 
  sval_u v10; 
  sval_u v11; 
  sval_u v12; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  char *codePos; 
  const char *v16; 
  sval_u v17; 
  sval_u v18; 
  sval_u v19; 
  unsigned int type; 
  unsigned int v21; 
  sval_u v22; 
  VariableCompileValue constValuea; 
  VariableCompileValue v24; 
  VariableCompileValue v25; 

  switch ( expr.node->type )
  {
    case 7:
      return EmitOrEvalPrimitiveExpression(scrContext, expr.node[1], constValue, block);
    case 8:
      if ( scrContext->m_compileGlob.bConstRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3959, ASSERT_TYPE_ASSERT, "( !scrContext.m_compileGlob.bConstRefCount )", (const char *)&queryFormat, "!scrContext.m_compileGlob.bConstRefCount") )
        __debugbreak();
      scrContext->m_compileGlob.bConstRefCount = 1;
      v8 = EmitOrEvalExpression(scrContext, expr.node[1], constValue, block);
      if ( !scrContext->m_compileGlob.bConstRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3962, ASSERT_TYPE_ASSERT, "( scrContext.m_compileGlob.bConstRefCount )", (const char *)&queryFormat, "scrContext.m_compileGlob.bConstRefCount") )
        __debugbreak();
      scrContext->m_compileGlob.bConstRefCount = 0;
      return v8;
    case 0x37:
      v10 = expr.node[4];
      v11 = expr.node[3];
      v12 = expr.node[2];
      if ( EmitOrEvalExpression(scrContext, expr.node[1], &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      v13 = 28;
      goto LABEL_13;
    case 0x38:
      v10 = expr.node[4];
      v11 = expr.node[3];
      v12 = expr.node[2];
      if ( EmitOrEvalExpression(scrContext, expr.node[1], &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      v13 = 25;
LABEL_13:
      EmitOpcode(scrContext, v13, -1, 0);
      AddOpcodePos(scrContext, v11.canonicalString, SOURCE_TYPE_NONE);
      v14 = (unsigned __int8 *)TempMalloc(2ui64);
      scrContext->m_compileGlob.codePos = v14;
      *(_WORD *)v14 = 0;
      codePos = (char *)scrContext->m_compileGlob.codePos;
      v16 = TempMalloc(0i64);
      if ( EmitOrEvalExpression(scrContext, v12, &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      EmitOpcode(scrContext, 0x59u, 0, 0);
      AddOpcodePos(scrContext, v10.canonicalString, SOURCE_TYPE_NONE);
      *(_WORD *)codePos = Scr_TrackJumpUshort(scrContext, codePos, v16, v10.canonicalString);
      return 0;
    case 0x39:
      v17 = expr.node[4];
      v18 = expr.node[3];
      v19 = expr.node[2];
      if ( !EmitOrEvalExpression(scrContext, expr.node[1], &constValuea, block) )
      {
        if ( EmitOrEvalExpression(scrContext, v19, &v24, block) )
          EmitValue(scrContext, &v24);
LABEL_23:
        EmitOpcode(scrContext, v18.canonicalString, -1, 0);
        type = v17.type;
LABEL_34:
        AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
        return 0;
      }
      Scr_PushValue(scrContext, &constValuea);
      if ( !EmitOrEvalExpression(scrContext, v19, &v25, block) )
        goto LABEL_23;
      Scr_PopValue(scrContext);
      Scr_EvalBinaryOperator(scrContext, v18.type, &constValuea.value, &v25.value);
      if ( !scrContext->m_varPub.error_message )
      {
        constValue->value.u.scriptCodePosValue = constValuea.value.u.scriptCodePosValue;
        constValue->value.type = constValuea.value.type;
        result = 1;
        constValue->sourcePos = v17;
        return result;
      }
      CompileError(scrContext, v17.canonicalString, (const char *)&queryFormat);
      return 0;
    case 0x3A:
      if ( EmitOrEvalExpression(scrContext, expr.node[1], &v25, block) )
        EmitValue(scrContext, &v25);
      v21 = 119;
      goto LABEL_33;
    case 0x3B:
      if ( EmitOrEvalExpression(scrContext, expr.node[1], &v25, block) )
        EmitValue(scrContext, &v25);
      v21 = 115;
LABEL_33:
      v22 = expr.node[2];
      EmitOpcode(scrContext, v21, 0, 0);
      type = v22.type;
      goto LABEL_34;
    default:
      return 0;
  }
}

/*
==============
EmitOrEvalPrimitiveExpression
==============
*/
bool EmitOrEvalPrimitiveExpression(scrContext_t *scrContext, sval_u expr, VariableCompileValue *constValue, scr_block_t *block)
{
  bool result; 
  sval_u v7; 
  unsigned int v8; 
  Scr_SourceType_t v9; 
  unsigned int v10; 
  sval_u v11; 
  sval_u **node; 
  sval_u *v13; 
  unsigned int animTreeIndex; 
  sval_u v15; 
  unsigned __int8 v16; 
  unsigned __int8 *v17; 
  VariableCompileValue constValuea; 

  switch ( expr.node->type )
  {
    case 0x14:
      return EmitOrEvalVariableExpression(scrContext, expr.node[1], constValue, block);
    case 0x15:
      EmitGetFunction(scrContext, expr.node[1], expr.node[2]);
      return 0;
    case 0x16:
      EmitCallExpression(scrContext, expr.node[1], 0, block);
      return 0;
    case 0x24:
      v7 = expr.node[2];
      if ( EmitOrEvalExpression(scrContext, expr.node[1], &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      v8 = 167;
      goto LABEL_7;
    case 0x25:
      v7 = expr.node[2];
      if ( EmitOrEvalExpression(scrContext, expr.node[1], &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      v8 = 168;
      goto LABEL_7;
    case 0x27:
      v7 = expr.node[1];
      v10 = 58;
      goto LABEL_15;
    case 0x29:
      v7 = expr.node[1];
      v10 = 9;
      goto LABEL_15;
    case 0x2A:
      v7 = expr.node[1];
      v10 = 38;
      goto LABEL_15;
    case 0x2B:
      v7 = expr.node[1];
      v10 = 55;
      goto LABEL_15;
    case 0x2C:
      v7 = expr.node[1];
      v10 = 133;
LABEL_15:
      EmitOpcode(scrContext, v10, 1, 0);
      v9 = SOURCE_TYPE_BREAKPOINT;
      goto LABEL_8;
    case 0x36:
      return EmitOrEvalPrimitiveExpressionList(scrContext, expr.node[1], expr.node[2], constValue, block);
    case 0x3C:
      v7 = expr.node[2];
      if ( EmitOrEvalPrimitiveExpression(scrContext, expr.node[1], &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      v8 = 39;
LABEL_7:
      EmitOpcode(scrContext, v8, 0, 0);
      v9 = SOURCE_TYPE_NONE;
LABEL_8:
      AddOpcodePos(scrContext, v7.canonicalString, v9);
      goto LABEL_9;
    case 0x4B:
      v11 = expr.node[2];
      node = (sval_u **)expr.node[1].node;
      EmitOpcode(scrContext, 0x6Au, 1, 0);
      AddOpcodePos(scrContext, v11.canonicalString, SOURCE_TYPE_BREAKPOINT);
      v13 = *node;
      if ( *node )
      {
        do
        {
          if ( EmitOrEvalExpression(scrContext, *v13->node, &constValuea, block) )
            EmitValue(scrContext, &constValuea);
          EmitOpcode(scrContext, 0x2Au, -1, 0);
          v13 = v13[1].node;
        }
        while ( v13 );
        result = 0;
      }
      else
      {
LABEL_9:
        result = 0;
      }
      break;
    case 0x53:
      animTreeIndex = scrContext->m_animPub.animTreeIndex;
      v15 = expr.node[1];
      if ( animTreeIndex )
      {
        if ( animTreeIndex < 0x100 )
        {
          EmitOpcode(scrContext, 0x62u, 1, 0);
          AddOpcodePos(scrContext, v15.canonicalString, SOURCE_TYPE_BREAKPOINT);
          v16 = scrContext->m_animPub.animTreeIndex;
          v17 = (unsigned __int8 *)TempMalloc(1ui64);
          scrContext->m_compileGlob.codePos = v17;
          *v17 = v16;
        }
        else
        {
          CompileError(scrContext, v15.canonicalString, "EmitAnimTree: 256 anim trees exceeded");
        }
        result = 0;
      }
      else
      {
        CompileError(scrContext, v15.canonicalString, "#using_animtree was not specified");
        result = 0;
      }
      break;
    case 0x54:
      CompileError(scrContext, expr.node[3].canonicalString, "illegal function name");
      result = 0;
      break;
    default:
      result = Scr_EvalPrimitiveExpression(scrContext, expr, constValue);
      break;
  }
  return result;
}

/*
==============
EmitOrEvalPrimitiveExpressionList
==============
*/
bool EmitOrEvalPrimitiveExpressionList(scrContext_t *scrContext, sval_u exprlist, sval_u sourcePos, VariableCompileValue *constValue, scr_block_t *block)
{
  int ExpressionCount; 
  bool result; 
  char v11; 
  sval_u *node; 
  bool v13; 
  sval_u *i; 
  VariableCompileValue constValuea; 

  if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3712, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
    __debugbreak();
  ExpressionCount = Scr_GetExpressionCount(exprlist);
  if ( ExpressionCount == 1 )
    return EmitOrEvalExpression(scrContext, (sval_u)exprlist.node->node->node->node, constValue, block);
  if ( ExpressionCount == 3 )
  {
    v11 = 1;
    node = exprlist.node->node;
    if ( !*(_QWORD *)exprlist.node )
      goto LABEL_26;
    do
    {
      v13 = EmitOrEvalExpression(scrContext, *node->node, &constValuea, block);
      if ( v11 )
      {
        v11 = v13;
        if ( v13 )
          Scr_PushValue(scrContext, &constValuea);
      }
      else if ( v13 )
      {
        EmitValue(scrContext, &constValuea);
      }
      node = node[1].node;
    }
    while ( node );
    if ( v11 )
    {
LABEL_26:
      if ( scrContext->m_compilePub.value_count < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3747, ASSERT_TYPE_ASSERT, "( scrContext.m_compilePub.value_count >= 3 )", (const char *)&queryFormat, "scrContext.m_compilePub.value_count >= 3") )
        __debugbreak();
      scrContext->m_compilePub.value_count -= 3;
      Scr_CreateVector(scrContext, &scrContext->m_compileGlob.value_start[scrContext->m_compilePub.value_count], &constValue->value);
      result = 1;
      constValue->sourcePos = sourcePos;
    }
    else
    {
      EmitOpcode(scrContext, 0x54u, -2, 0);
      AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
      if ( scrContext->m_varPub.developer )
      {
        for ( i = exprlist.node->node; i; i = i[1].node )
          AddOpcodePos(scrContext, i->node[1].canonicalString, SOURCE_TYPE_NONE);
      }
      return 0;
    }
  }
  else
  {
    CompileError(scrContext, sourcePos.canonicalString, "expression list must have 1 or 3 parameters");
    return 0;
  }
  return result;
}

/*
==============
EmitOrEvalVariableExpression
==============
*/
bool EmitOrEvalVariableExpression(scrContext_t *scrContext, sval_u expr, VariableCompileValue *constValue, scr_block_t *block)
{
  sval_u v7; 
  sval_u v8; 
  unsigned int Variable; 
  bool result; 
  int LocalVarIndex; 
  unsigned __int8 v12; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  sval_u v15; 
  sval_u v16; 
  sval_u v17; 
  sval_u v18; 
  sval_u v19; 
  int type; 
  const char *v21; 
  VariableCompileValue constValuea; 

  switch ( expr.node->type )
  {
    case 5:
      v7 = expr.node[2];
      v8 = expr.node[1];
      if ( scrContext->m_compilePub.developer_statement == 3 )
      {
        EmitOpcode(scrContext, 0x9Eu, 1, 0);
        EmitCanonicalString(scrContext, v8.stringValue);
        return 0;
      }
      Variable = FindVariable(scrContext, scrContext->m_compilePub.scriptsDefine, v8.canonicalString);
      if ( !Variable )
      {
        LocalVarIndex = Scr_FindLocalVarIndex(scrContext, v8.stringValue, v7, 0, block, 1);
        v12 = LocalVarIndex;
        v13 = LocalVarIndex + 62;
        if ( LocalVarIndex > 5 )
          v13 = 68;
        EmitOpcode(scrContext, v13, 1, 0);
        if ( v13 == 68 )
        {
          v14 = (unsigned __int8 *)TempMalloc(1ui64);
          scrContext->m_compileGlob.codePos = v14;
          *v14 = v12;
        }
        AddOpcodePos(scrContext, v7.canonicalString, SOURCE_TYPE_BREAKPOINT);
        return 0;
      }
      if ( scrContext->m_compileGlob.bConstRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1996, ASSERT_TYPE_ASSERT, "( !scrContext.m_compileGlob.bConstRefCount )", (const char *)&queryFormat, "!scrContext.m_compileGlob.bConstRefCount") )
        __debugbreak();
      if ( scrContext->m_compilePub.developer_statement == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1998, ASSERT_TYPE_ASSERT, "( scrContext.m_compilePub.developer_statement != SCR_DEV_EVALUATE )", (const char *)&queryFormat, "scrContext.m_compilePub.developer_statement != SCR_DEV_EVALUATE") )
        __debugbreak();
      SL_RemoveRefToString(v8.stringValue);
      Scr_EvalVariable_Out(scrContext, Variable, &constValue->value);
      result = 1;
      constValue->sourcePos = v7;
      return result;
    case 0xF:
      v15 = expr.node[4];
      v16 = expr.node[3];
      v17 = expr.node[1];
      if ( EmitOrEvalExpression(scrContext, expr.node[2], &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      if ( EmitOrEvalPrimitiveExpression(scrContext, v17, &constValuea, block) )
        EmitValue(scrContext, &constValuea);
      EmitOpcode(scrContext, 0x39u, -1, 0);
      AddOpcodePos(scrContext, v15.canonicalString, SOURCE_TYPE_NONE);
      AddOpcodePos(scrContext, v16.canonicalString, SOURCE_TYPE_BREAKPOINT);
      return 0;
    case 0x11:
      v18 = expr.node[3];
      v19 = expr.node[2];
      EmitPrimitiveExpressionFieldObject(scrContext, expr.node[1], v18, block);
      EmitOpcode(scrContext, 0x2Cu, 1, 0);
      AddOpcodePos(scrContext, v18.canonicalString, SOURCE_TYPE_NONE);
      EmitCanonicalString(scrContext, v19.stringValue);
      return 0;
    case 0x12:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2247, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
        __debugbreak();
      return 0;
    case 0x3D:
      type = expr.node[2].type;
      v21 = "self field can only be used in the script debugger";
      if ( !scrContext->m_compilePub.script_loading )
        v21 = "self field in assignment expression not currently supported";
      CompileError(scrContext, type, v21);
      return 0;
    case 0x5B:
      EmitObject(scrContext, expr.node[1], expr.node[2]);
      return 0;
    default:
      return 0;
  }
}

/*
==============
EmitPostFunctionCall
==============
*/
void EmitPostFunctionCall(scrContext_t *scrContext, sval_u func_name, int param_count, bool bMethod, scr_block_t *block)
{
  sval_u v8; 
  int v9; 
  unsigned int v10; 
  unsigned __int8 *v11; 
  sval_u *node; 
  sval_u v13; 
  sval_u v14; 
  sval_u v15; 
  int v16; 
  unsigned int v17; 
  unsigned __int8 v18; 
  int v19; 
  sval_u v20; 
  sval_u *v21; 
  sval_u v22; 
  sval_u v23; 
  unsigned int v24; 
  int v25; 
  int v26; 
  sval_u v27; 
  sval_u *v28; 
  sval_u v29; 
  sval_u v30; 
  int v31; 
  unsigned int v32; 
  sval_u v33; 
  unsigned __int8 *v34; 
  VariableCompileValue constValue; 

  if ( func_name.node->type != 29 )
  {
    if ( func_name.node->type != 33 )
    {
      if ( func_name.node->type != 34 )
      {
        if ( func_name.node->type == 35 )
        {
          v8 = func_name.node[2];
          if ( EmitOrEvalExpression(scrContext, func_name.node[1], &constValue, block) )
            EmitValue(scrContext, &constValue);
          v9 = -param_count;
          v10 = 147;
          if ( bMethod )
            v9 = ~param_count;
          if ( bMethod )
            v10 = 52;
          EmitOpcode(scrContext, v10, v9, 2);
          AddOpcodePos(scrContext, v8.canonicalString, SOURCE_TYPE_BUILTIN_CALL|SOURCE_TYPE_BREAKPOINT);
          if ( param_count != (unsigned __int8)param_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3059, ASSERT_TYPE_ASSERT, "( param_count == (byte)param_count )", (const char *)&queryFormat, "param_count == (byte)param_count") )
            __debugbreak();
          v11 = (unsigned __int8 *)TempMalloc(1ui64);
          scrContext->m_compileGlob.codePos = v11;
          *v11 = param_count;
        }
        return;
      }
      node = func_name.node[1].node;
      v13 = func_name.node[3];
      v14 = func_name.node[2];
      if ( node->type != 21 )
      {
        if ( node->type == 25 )
        {
          v15 = node[2];
          if ( EmitOrEvalExpression(scrContext, node[1], &constValue, block) )
            EmitValue(scrContext, &constValue);
          v16 = -param_count;
          v17 = 70;
          if ( bMethod )
            v16 = ~param_count;
          if ( bMethod )
            v17 = 20;
          EmitOpcode(scrContext, v17, v16, 2);
          AddOpcodePos(scrContext, v15.canonicalString, SOURCE_TYPE_CALL_POINTER|SOURCE_TYPE_BREAKPOINT);
          v18 = param_count;
          if ( param_count == (unsigned __int8)param_count )
            goto LABEL_61;
          v19 = 2993;
          goto LABEL_59;
        }
LABEL_62:
        AddOpcodePos(scrContext, v14.canonicalString, SOURCE_TYPE_NONE);
        return;
      }
      v20 = node[1];
      if ( bMethod )
        EmitFunction(scrContext, v20, v13, SOURCE_TYPE_CALL|SOURCE_TYPE_BREAKPOINT, 0x6Eu, 5u, -param_count, 2);
      else
        EmitFunction(scrContext, v20, v13, SOURCE_TYPE_CALL|SOURCE_TYPE_BREAKPOINT, 0x35u, 0x8Au, 1 - param_count, 2);
      v18 = param_count;
      if ( param_count != (unsigned __int8)param_count )
      {
        v19 = 2959;
        goto LABEL_59;
      }
LABEL_61:
      v34 = (unsigned __int8 *)TempMalloc(1ui64);
      scrContext->m_compileGlob.codePos = v34;
      *v34 = v18;
      goto LABEL_62;
    }
LABEL_44:
    v28 = func_name.node[1].node;
    v29 = func_name.node[3];
    v14 = func_name.node[2];
    if ( v28->type == 21 )
    {
      v33 = v28[1];
      if ( bMethod )
        EmitFunction(scrContext, v33, v29, SOURCE_TYPE_CALL|SOURCE_TYPE_BREAKPOINT, 0x29u, 0x65u, -param_count, 2);
      else
        EmitFunction(scrContext, v33, v29, SOURCE_TYPE_CALL|SOURCE_TYPE_BREAKPOINT, 0x48u, 0x17u, 1 - param_count, 2);
      v18 = param_count;
      if ( param_count == (unsigned __int8)param_count )
        goto LABEL_61;
      v19 = 2944;
    }
    else
    {
      if ( v28->type != 25 )
        goto LABEL_62;
      v30 = v28[2];
      if ( EmitOrEvalExpression(scrContext, v28[1], &constValue, block) )
        EmitValue(scrContext, &constValue);
      v31 = -param_count;
      v32 = 116;
      if ( bMethod )
        v31 = ~param_count;
      if ( bMethod )
        v32 = 104;
      EmitOpcode(scrContext, v32, v31, 2);
      AddOpcodePos(scrContext, v30.canonicalString, SOURCE_TYPE_CALL_POINTER|SOURCE_TYPE_BREAKPOINT);
      v18 = param_count;
      if ( param_count == (unsigned __int8)param_count )
        goto LABEL_61;
      v19 = 2976;
    }
LABEL_59:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", v19, ASSERT_TYPE_ASSERT, "( param_count == (byte)param_count )", (const char *)&queryFormat, "param_count == (byte)param_count") )
      __debugbreak();
    goto LABEL_61;
  }
  if ( scrContext->m_compilePub.developer_statement == 3 )
    goto LABEL_44;
  v21 = func_name.node[1].node;
  v22 = func_name.node[2];
  if ( v21->type == 21 )
  {
    v27 = v21[1];
    scrContext->m_compilePub.pauseBlock = block;
    if ( bMethod )
      EmitFunction(scrContext, v27, v22, SOURCE_TYPE_CALL|SOURCE_TYPE_BREAKPOINT, 0x33u, 0x96u, ~param_count, 3);
    else
      EmitFunction(scrContext, v27, v22, SOURCE_TYPE_CALL|SOURCE_TYPE_BREAKPOINT, 0x98u, 0x60u, -param_count, 3);
    scrContext->m_compilePub.pauseBlock = NULL;
  }
  else if ( v21->type == 25 )
  {
    v23 = v21[2];
    if ( EmitOrEvalExpression(scrContext, v21[1], &constValue, block) )
      EmitValue(scrContext, &constValue);
    v24 = 105;
    v25 = -2 - param_count;
    v26 = ~param_count;
    if ( bMethod )
      v26 = v25;
    if ( bMethod )
      v24 = 74;
    EmitOpcode(scrContext, v24, v26, 3);
    scrContext->m_compilePub.pauseBlock = block;
    AddOpcodePos(scrContext, v23.canonicalString, SOURCE_TYPE_CALL_POINTER);
    scrContext->m_compilePub.pauseBlock = NULL;
    AddOpcodePos(scrContext, v22.canonicalString, SOURCE_TYPE_NONE);
  }
}

/*
==============
EmitPrimitiveExpressionFieldObject
==============
*/
void EmitPrimitiveExpressionFieldObject(scrContext_t *scrContext, sval_u expr, sval_u sourcePos, scr_block_t *block)
{
  sval_u v5; 
  sval_u *node; 
  unsigned int v7; 
  sval_u *v8; 
  sval_u *v9; 
  sval_u *v10; 
  unsigned int type; 
  sval_u *v12; 
  sval_u v13; 
  sval_u v14; 
  VariableCompileValue constValue; 

  v5.type = sourcePos.type;
  node = expr.node;
  v7 = expr.node->type - 20;
  while ( 2 )
  {
    switch ( v7 )
    {
      case 0u:
        if ( EmitOrEvalVariableExpression(scrContext, node[1], &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitCastFieldObject(scrContext, node[2]);
        return;
      case 2u:
        v12 = node[1].node;
        if ( v12->type == 26 )
        {
          EmitCall(scrContext, v12[1], v12[2], 0, block);
          v13 = v12[3];
          EmitOpcode(scrContext, 0, -1, 0);
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
        }
        else
        {
          if ( v12->type != 27 )
            return;
          EmitMethod(scrContext, v12[1], v12[2], v12[3], v12[4], 0, block);
          v13 = v12[5];
          EmitOpcode(scrContext, 0, -1, 0);
          if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
            Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
        }
        AddOpcodePos(scrContext, v13.canonicalString, SOURCE_TYPE_NONE);
        return;
      case 0x13u:
        v14 = node[1];
        EmitOpcode(scrContext, 0x36u, 0, 0);
        if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
          Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
        goto LABEL_38;
      case 0x16u:
        v14 = node[1];
        EmitOpcode(scrContext, 0x7Cu, 0, 0);
        if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
          Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
        goto LABEL_38;
      case 0x18u:
        v14 = node[1];
        EmitOpcode(scrContext, 0x61u, 0, 0);
        if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
          Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
LABEL_38:
        AddOpcodePos(scrContext, v14.canonicalString, SOURCE_TYPE_BREAKPOINT);
        return;
      case 0x22u:
        v8 = node[1].node->node;
        if ( !v8 || v8[1].node )
          goto LABEL_7;
        v9 = v8->node;
        v10 = v9->node;
        if ( v9->node->type == 7 )
        {
          v5 = v10[2];
          node = v10[1].node;
          v7 = node->type - 20;
          if ( v7 > 0x22 )
          {
LABEL_7:
            type = v5.type;
            goto LABEL_8;
          }
          continue;
        }
        if ( v9->node->type == 8 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4101, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented") )
            __debugbreak();
        }
        else
        {
          type = v9[1].canonicalString;
LABEL_8:
          CompileError(scrContext, type, "not an object", block);
        }
        return;
      default:
        goto LABEL_7;
    }
  }
}

/*
==============
EmitProfStatement
==============
*/
void EmitProfStatement(scrContext_t *scrContext, sval_u profileName, int level, sval_u sourcePos, unsigned __int8 op)
{
  int type; 
  int v7; 
  const char *v9; 
  const char *v10; 
  unsigned __int64 v11; 
  unsigned __int8 v12; 
  int v13; 
  const char *v14; 
  unsigned __int8 v15; 
  int v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 

  type = sourcePos.type;
  v7 = profileName.type;
  if ( scrContext->m_compilePub.developer_statement == 3 )
  {
    CompileError(scrContext, 0, "illegal statement in debugger");
    return;
  }
  v9 = SL_ConvertToString(profileName.stringValue);
  v10 = v9;
  if ( !v9 || !*v9 )
  {
    v14 = "Profiling: invalid tag";
    goto LABEL_27;
  }
  v11 = -1i64;
  do
    ++v11;
  while ( v9[v11] );
  if ( v11 >= 0x20 )
  {
    CompileError(scrContext, type, "Profiling: tag must be less than 32 characters");
    return;
  }
  EmitOpcode(scrContext, op, 0, 0);
  if ( (unsigned int)(level - 1) > 0xFE )
  {
    v14 = "Profiling level must be in range 1-255";
    goto LABEL_27;
  }
  v12 = truncate_cast<unsigned char,int>(level);
  EmitByte(scrContext, v12);
  if ( level != 1 )
  {
LABEL_17:
    if ( op == 0xA0 )
    {
      v16 = ScriptDebugData_AddProfileString_Runtime(v10);
      v17 = v16;
      if ( v16 == -1 )
      {
        v14 = "max general profile names exceeded - use fewer tags or ask code to expand the buffer";
        goto LABEL_27;
      }
      v18 = (unsigned __int8 *)TempMalloc(2ui64);
      scrContext->m_compileGlob.codePos = v18;
      *(_WORD *)v18 = 0;
      if ( (unsigned int)(v17 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v17, "signed", v17) )
        __debugbreak();
      v19 = (unsigned __int8 *)TempMalloc(2ui64);
      scrContext->m_compileGlob.codePos = v19;
      *(_WORD *)v19 = v17;
    }
    AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
    Scr_CompileRemoveRefToString(scrContext, (scr_string_t)v7);
    return;
  }
  v13 = Profile_AddScriptName(scrContext, v10);
  if ( v13 >= 0 )
  {
    if ( v13 >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5385, ASSERT_TYPE_ASSERT, "( internalProfileIndex < 128 )", (const char *)&queryFormat, "internalProfileIndex < PROF_SCRIPT_COUNT") )
      __debugbreak();
    v15 = truncate_cast<unsigned char,int>(v13);
    EmitByte(scrContext, v15);
    goto LABEL_17;
  }
  v14 = "max internal profile names exceeded - use a lower level";
LABEL_27:
  CompileError(scrContext, type, v14);
}

/*
==============
EmitRemoveLocalVars
==============
*/
void EmitRemoveLocalVars(scrContext_t *scrContext, scr_block_t *block, scr_block_t *outerBlock)
{
  int v6; 
  unsigned __int8 v7; 
  unsigned __int8 *v8; 

  if ( block->abortLevel == None )
  {
    if ( block->localVarsCreateCount < block->localVarsPublicCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1665, ASSERT_TYPE_ASSERT, "( block->localVarsCreateCount >= block->localVarsPublicCount )", (const char *)&queryFormat, "block->localVarsCreateCount >= block->localVarsPublicCount") )
      __debugbreak();
    if ( block->localVarsPublicCount < outerBlock->localVarsPublicCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1666, ASSERT_TYPE_ASSERT, "( block->localVarsPublicCount >= outerBlock->localVarsPublicCount )", (const char *)&queryFormat, "block->localVarsPublicCount >= outerBlock->localVarsPublicCount") )
      __debugbreak();
    v6 = block->localVarsCreateCount - outerBlock->localVarsPublicCount;
    if ( v6 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1668, ASSERT_TYPE_ASSERT, "( removeCount >= 0 )", (const char *)&queryFormat, "removeCount >= 0") )
      __debugbreak();
    if ( v6 )
    {
      EmitOpcode(scrContext, 3u, 0, 0);
      v7 = truncate_cast<unsigned char,int>(v6);
      v8 = (unsigned __int8 *)TempMalloc(1ui64);
      scrContext->m_compileGlob.codePos = v8;
      *v8 = v7;
      block->localVarsCreateCount = block->localVarsPublicCount;
    }
  }
}

/*
==============
EmitStatement
==============
*/
void EmitStatement(scrContext_t *scrContext, sval_u val, bool lastStatement, unsigned int endSourcePos, scr_block_t *block)
{
  int developer_statement; 
  unsigned __int64 v10; 
  __int64 v11; 
  sval_u *node; 
  sval_u v13; 
  sval_u v14; 
  sval_u v15; 
  sval_u v16; 
  sval_u v17; 
  unsigned int type; 
  sval_u v19; 
  sval_u v20; 
  unsigned __int8 *v21; 
  char *codePos; 
  const char *v23; 
  sval_u v24; 
  sval_u v25; 
  unsigned int v26; 
  unsigned int v27; 
  sval_u v28; 
  sval_u v29; 
  sval_u v30; 
  sval_u v31; 
  sval_u v32; 
  char *v33; 
  sval_u v34; 
  unsigned int checksum; 
  scr_block_t *v36; 
  sval_u *v37; 
  sval_u *v38; 
  char *v39; 
  scr_block_t *v40; 
  sval_u *v41; 
  sval_u *v42; 
  unsigned int v43; 
  sval_u v44; 
  sval_u v45; 
  sval_u **v46; 
  sval_u v47; 
  sval_u *v48; 
  int v49; 
  sval_u *v50; 
  sval_u v51; 
  sval_u v52; 
  sval_u v53; 
  sval_u v54; 
  unsigned __int8 *v55; 
  BreakStatementInfo *v56; 
  sval_u v57; 
  unsigned __int8 *v58; 
  ContinueStatementInfo *v59; 
  sval_u v60; 
  sval_u v61; 
  int v62; 
  VariableCompileValue constValue; 

  developer_statement = scrContext->m_compilePub.developer_statement;
  if ( developer_statement != 3 || (v10 = val.node->type, (unsigned int)v10 <= 0x34) && (v11 = 0x1E000010000004i64, _bittest64(&v11, v10)) || (_DWORD)v10 == 67 )
  {
    switch ( val.node->type )
    {
      case 2:
        EmitAssignmentStatement(scrContext, val.node[1], val.node[2], val.node[3], val.node[4], block);
        return;
      case 3:
        EmitVariableExpressionRef(scrContext, val.node[1], block);
        EmitOpcode(scrContext, 0x6Cu, 0, 0);
        return;
      case 0x1C:
        node = val.node[1].node;
        if ( node->type == 26 )
        {
          EmitCall(scrContext, node[1], node[2], 1, block);
        }
        else if ( node->type == 27 )
        {
          EmitMethod(scrContext, node[1], node[2], node[3], node[4], 1, block);
        }
        return;
      case 0x1E:
        v13 = val.node[2];
        v14 = val.node[1];
        if ( block->abortLevel == None )
          block->abortLevel = 3;
        if ( EmitOrEvalExpression(scrContext, v14, &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitOpcode(scrContext, 0x2Fu, -1, 0);
        if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
          Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
        AddOpcodePos(scrContext, v13.canonicalString, SOURCE_TYPE_NONE);
        return;
      case 0x1F:
        v15 = val.node[1];
        if ( block->abortLevel == None )
          block->abortLevel = 3;
        EmitOpcode(scrContext, 0x3Bu, 0, 0);
        if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
          Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
        AddOpcodePos(scrContext, v15.canonicalString, SOURCE_TYPE_BREAKPOINT);
        return;
      case 0x20:
        v16 = val.node[3];
        v17 = val.node[2];
        if ( EmitOrEvalExpression(scrContext, val.node[1], &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitOpcode(scrContext, 0x5Du, -1, 0);
        scrContext->m_compilePub.pauseBlock = block;
        AddOpcodePos(scrContext, v16.canonicalString, SOURCE_TYPE_WAIT);
        type = v16.type;
        scrContext->m_compilePub.pauseBlock = NULL;
        goto LABEL_97;
      case 0x2D:
        v19 = val.node[3];
        v20 = val.node[2];
        if ( EmitOrEvalExpression(scrContext, val.node[1], &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitOpcode(scrContext, 0x72u, -1, 0);
        AddOpcodePos(scrContext, v19.canonicalString, SOURCE_TYPE_NONE);
        v21 = (unsigned __int8 *)TempMalloc(2ui64);
        scrContext->m_compileGlob.codePos = v21;
        *(_WORD *)v21 = 0;
        codePos = (char *)scrContext->m_compileGlob.codePos;
        v23 = TempMalloc(0i64);
        Scr_TransferBlock(block, val.node[4].block);
        EmitStatement(scrContext, v20, lastStatement, endSourcePos, val.node[4].block);
        if ( val.node[4].node[1].type != block->localVarsCreateCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4332, ASSERT_TYPE_ASSERT, "( ifStatBlock->block->localVarsPublicCount == block->localVarsCreateCount )", (const char *)&queryFormat, "ifStatBlock->block->localVarsPublicCount == block->localVarsCreateCount") )
          __debugbreak();
        EmitNOP2(scrContext, lastStatement, endSourcePos, val.node[4].block);
        *(_WORD *)codePos = Scr_TrackJumpUshort(scrContext, codePos, v23, endSourcePos);
        return;
      case 0x2E:
        EmitIfElseStatement(scrContext, val.node[1], val.node[2], val.node[3], val.node[4], val.node[5], lastStatement, endSourcePos, block, val.node + 6, val.node + 7);
        return;
      case 0x2F:
        EmitWhileStatement(scrContext, val.node[1], val.node[2], val.node[3], val.node[4], block, val.node + 5);
        return;
      case 0x30:
        EmitForStatement(scrContext, val.node[1], val.node[2], val.node[3], val.node[4], val.node[5], val.node[6], block, val.node + 7, val.node + 8);
        return;
      case 0x31:
        v24 = val.node[2];
        v25 = val.node[1];
        if ( scrContext->m_compileGlob.forceNotCreate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4715, ASSERT_TYPE_ASSERT, "( !scrContext.m_compileGlob.forceNotCreate )", (const char *)&queryFormat, "!scrContext.m_compileGlob.forceNotCreate") )
          __debugbreak();
        scrContext->m_compileGlob.forceNotCreate = 1;
        EmitVariableExpressionRef(scrContext, v25, block);
        if ( !scrContext->m_compileGlob.forceNotCreate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4718, ASSERT_TYPE_ASSERT, "( scrContext.m_compileGlob.forceNotCreate )", (const char *)&queryFormat, "scrContext.m_compileGlob.forceNotCreate") )
          __debugbreak();
        v26 = 125;
        goto LABEL_46;
      case 0x32:
        v24 = val.node[2];
        v28 = val.node[1];
        if ( scrContext->m_compileGlob.forceNotCreate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4728, ASSERT_TYPE_ASSERT, "( !scrContext.m_compileGlob.forceNotCreate )", (const char *)&queryFormat, "!scrContext.m_compileGlob.forceNotCreate") )
          __debugbreak();
        scrContext->m_compileGlob.forceNotCreate = 1;
        EmitVariableExpressionRef(scrContext, v28, block);
        if ( !scrContext->m_compileGlob.forceNotCreate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4731, ASSERT_TYPE_ASSERT, "( scrContext.m_compileGlob.forceNotCreate )", (const char *)&queryFormat, "scrContext.m_compileGlob.forceNotCreate") )
          __debugbreak();
        v26 = 13;
LABEL_46:
        scrContext->m_compileGlob.forceNotCreate = 0;
        EmitOpcode(scrContext, v26, 1, 0);
        AddOpcodePos(scrContext, v24.canonicalString, SOURCE_TYPE_NONE);
        EmitOpcode(scrContext, 0x87u, -1, 0);
        v27 = v24.type;
        goto LABEL_65;
      case 0x33:
        v29 = val.node[4];
        v30 = val.node[3];
        v31 = val.node[2];
        v32 = val.node[1];
        if ( scrContext->m_compileGlob.bConstRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3940, ASSERT_TYPE_ASSERT, "( !scrContext.m_compileGlob.bConstRefCount )", (const char *)&queryFormat, "!scrContext.m_compileGlob.bConstRefCount") )
          __debugbreak();
        scrContext->m_compileGlob.bConstRefCount = 1;
        if ( EmitOrEvalVariableExpression(scrContext, v32, &constValue, block) )
          EmitValue(scrContext, &constValue);
        if ( !scrContext->m_compileGlob.bConstRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3943, ASSERT_TYPE_ASSERT, "( scrContext.m_compileGlob.bConstRefCount )", (const char *)&queryFormat, "scrContext.m_compileGlob.bConstRefCount") )
          __debugbreak();
        scrContext->m_compileGlob.bConstRefCount = 0;
        if ( EmitOrEvalExpression(scrContext, v31, &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitOpcode(scrContext, v30.canonicalString, -1, 0);
        AddOpcodePos(scrContext, v29.canonicalString, SOURCE_TYPE_NONE);
        EmitVariableExpressionRef(scrContext, v32, block);
        EmitOpcode(scrContext, 0x87u, -1, 0);
        v27 = v29.type;
LABEL_65:
        AddOpcodePos(scrContext, v27, SOURCE_TYPE_NONE);
        if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
        {
          v33 = TempMalloc(0i64);
          Scr_AddAssignmentPos(scrContext, v33);
        }
        return;
      case 0x34:
        EmitStatementList(scrContext, val.node[1], lastStatement, endSourcePos, block);
        return;
      case 0x35:
        v34 = val.node[1];
        if ( developer_statement )
        {
          CompileError(scrContext, val.node[2].canonicalString, "cannot recurse /#");
        }
        else
        {
          checksum = scrContext->m_varPub.checksum;
          Scr_TransferBlock(block, val.node[3].block);
          if ( scrContext->m_varPub.developer_script )
          {
            scrContext->m_compilePub.developer_statement = 1;
            v36 = val.node[3].block;
            v37 = *(sval_u **)(*(_QWORD *)v34.node + 8i64);
            if ( v37 )
            {
              do
              {
                v38 = v37[1].node;
                EmitStatement(scrContext, *v37, 0, 0, v36);
                v37 = v38;
              }
              while ( v38 );
              v36 = val.node[3].block;
            }
            EmitRemoveLocalVars(scrContext, v36, v36);
            scrContext->m_compilePub.developer_statement = 0;
            scrContext->m_varPub.checksum = checksum;
          }
          else
          {
            v39 = TempMalloc(0i64);
            if ( scrContext->m_lockJmpDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 148, ASSERT_TYPE_ASSERT, "( scrContext.m_lockJmpDepth == 0 )", (const char *)&queryFormat, "scrContext.m_lockJmpDepth == 0") )
              __debugbreak();
            scrContext->m_lockJmpDepth = scrContext->m_jmpDepth;
            scrContext->m_compilePub.developer_statement = 2;
            v40 = val.node[3].block;
            v41 = *(sval_u **)(*(_QWORD *)v34.node + 8i64);
            if ( v41 )
            {
              do
              {
                v42 = v41[1].node;
                EmitStatement(scrContext, *v41, 0, 0, v40);
                v41 = v42;
              }
              while ( v42 );
            }
            TempMemorySetPos(v39);
            *(_QWORD *)&scrContext->m_jmpDepth = (unsigned int)scrContext->m_lockJmpDepth;
            scrContext->m_compilePub.developer_statement = 0;
            scrContext->m_varPub.checksum = checksum;
          }
        }
        return;
      case 0x3F:
        EmitWaittillStatement(scrContext, val.node[1], val.node[2], val.node[3], val.node[4], block);
        return;
      case 0x40:
        EmitWaittillmatchStatement(scrContext, val.node[1], val.node[2], val.node[3], val.node[4], block);
        return;
      case 0x41:
        v43 = 120;
        goto LABEL_86;
      case 0x42:
        v43 = 121;
LABEL_86:
        v44 = val.node[1];
        EmitOpcode(scrContext, v43, 0, 0);
        scrContext->m_compilePub.pauseBlock = block;
        AddOpcodePos(scrContext, v44.canonicalString, (Scr_SourceType_t)129);
        scrContext->m_compilePub.pauseBlock = NULL;
        AddOpcodePos(scrContext, v44.canonicalString, SOURCE_TYPE_NONE);
        return;
      case 0x43:
        v45 = val.node[4];
        v17 = val.node[3];
        v46 = (sval_u **)val.node[2].node;
        v47 = val.node[1];
        EmitOpcode(scrContext, 0x95u, 1, 0);
        AddOpcodePos(scrContext, v17.canonicalString, SOURCE_TYPE_BREAKPOINT);
        v48 = *v46;
        v49 = 0;
        v50 = NULL;
        if ( v48 )
        {
          do
          {
            v50 = v48;
            if ( EmitOrEvalExpression(scrContext, *v48->node, &constValue, block) )
              EmitValue(scrContext, &constValue);
            v48 = v48[1].node;
            ++v49;
          }
          while ( v48 );
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4859, ASSERT_TYPE_ASSERT, "( start_node )", (const char *)&queryFormat, "start_node") )
        {
          __debugbreak();
        }
        if ( EmitOrEvalPrimitiveExpression(scrContext, v47, &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitOpcode(scrContext, 0x12u, -2 - v49, 0);
        AddOpcodePos(scrContext, v45.canonicalString, SOURCE_TYPE_NOTIFY);
        type = v50->node[1].canonicalString;
LABEL_97:
        AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
        AddOpcodePos(scrContext, v17.canonicalString, SOURCE_TYPE_NONE);
        return;
      case 0x44:
        v51 = val.node[4];
        v52 = val.node[3];
        v53 = val.node[1];
        if ( EmitOrEvalExpression(scrContext, val.node[2], &constValue, block) )
          EmitValue(scrContext, &constValue);
        if ( EmitOrEvalPrimitiveExpression(scrContext, v53, &constValue, block) )
          EmitValue(scrContext, &constValue);
        EmitOpcode(scrContext, 0x2Bu, -2, 0);
        AddOpcodePos(scrContext, v51.canonicalString, SOURCE_TYPE_NONE);
        AddOpcodePos(scrContext, v52.canonicalString, SOURCE_TYPE_NONE);
        return;
      case 0x45:
        EmitSwitchStatement(scrContext, val.node[1], val.node[2], val.node[3], lastStatement, endSourcePos, block);
        return;
      case 0x46:
        CompileError(scrContext, val.node[2].canonicalString, "illegal case statement");
        return;
      case 0x47:
        CompileError(scrContext, val.node[1].canonicalString, "illegal default statement");
        return;
      case 0x48:
        v54 = val.node[1];
        if ( !scrContext->m_compileGlob.bCanBreak || block->abortLevel )
        {
          CompileError(scrContext, v54.canonicalString, "illegal break statement");
        }
        else
        {
          Scr_AddBreakBlock(scrContext, block);
          if ( !scrContext->m_compileGlob.breakBlock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5269, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->breakBlock )", (const char *)&queryFormat, "pScrCompileGlob->breakBlock") )
            __debugbreak();
          EmitRemoveLocalVars(scrContext, block, scrContext->m_compileGlob.breakBlock);
          block->abortLevel = 2;
          EmitOpcode(scrContext, 0x94u, 0, 0);
          AddOpcodePos(scrContext, v54.canonicalString, SOURCE_TYPE_BREAKPOINT);
          v55 = (unsigned __int8 *)TempMalloc(4ui64);
          scrContext->m_compileGlob.codePos = v55;
          *(_DWORD *)v55 = 0;
          if ( scrContext->m_compilePub.developer_statement != 2 )
          {
            v56 = (BreakStatementInfo *)Scr_Mem_TempAlloc(scrContext, 0x18ui64, "EmitBreakStatement");
            v56->codePos = (const char *)scrContext->m_compileGlob.codePos;
            v56->nextCodePos = TempMalloc(0i64);
            v56->next = scrContext->m_compileGlob.currentBreakStatement;
            scrContext->m_compileGlob.currentBreakStatement = v56;
          }
        }
        return;
      case 0x49:
        v57 = val.node[1];
        if ( !scrContext->m_compileGlob.bCanContinue || block->abortLevel )
        {
          CompileError(scrContext, v57.canonicalString, "illegal continue statement");
        }
        else
        {
          Scr_AddContinueBlock(scrContext, block);
          EmitRemoveLocalVars(scrContext, block, block);
          block->abortLevel = 1;
          EmitOpcode(scrContext, 0x94u, 0, 0);
          AddOpcodePos(scrContext, v57.canonicalString, SOURCE_TYPE_BREAKPOINT);
          v58 = (unsigned __int8 *)TempMalloc(4ui64);
          scrContext->m_compileGlob.codePos = v58;
          *(_DWORD *)v58 = 0;
          if ( scrContext->m_compilePub.developer_statement != 2 )
          {
            v59 = (ContinueStatementInfo *)Scr_Mem_TempAlloc(scrContext, 0x18ui64, "EmitContinueStatement");
            v59->codePos = (const char *)scrContext->m_compileGlob.codePos;
            v59->nextCodePos = TempMalloc(0i64);
            v59->next = scrContext->m_compileGlob.currentContinueStatement;
            scrContext->m_compileGlob.currentContinueStatement = v59;
          }
        }
        return;
      case 0x55:
        v60 = val.node[1];
        if ( scrContext->m_varPub.developer_script )
        {
          EmitOpcode(scrContext, 0xA2u, 0, 0);
          AddOpcodePos(scrContext, v60.canonicalString, SOURCE_TYPE_BREAKPOINT);
        }
        return;
      case 0x56:
        EmitProfStatement(scrContext, val.node[1], 1, val.node[2], 0xA0u);
        return;
      case 0x57:
        v61 = val.node[2];
        v62 = 1;
        goto LABEL_125;
      case 0x58:
        EmitProfStatement(scrContext, val.node[1], val.node[2].type, val.node[3], 0xA0u);
        return;
      case 0x59:
        v61 = val.node[3];
        v62 = val.node[2].type;
LABEL_125:
        EmitProfStatement(scrContext, val.node[1], v62, v61, 0xA1u);
        break;
      default:
        return;
    }
  }
  else
  {
    CompileError(scrContext, 0, "illegal statement in debugger");
  }
}

/*
==============
EmitStatementList
==============
*/
void EmitStatementList(scrContext_t *scrContext, sval_u val, bool lastStatement, unsigned int endSourcePos, scr_block_t *block)
{
  sval_u *v8; 
  sval_u *node; 
  sval_u v10; 
  bool v11; 

  v8 = *(sval_u **)(*(_QWORD *)val.node + 8i64);
  if ( v8 )
  {
    while ( 1 )
    {
      node = v8[1].node;
      if ( !lastStatement )
        goto LABEL_8;
      v10 = v8[1];
      if ( node )
        break;
LABEL_7:
      v11 = 1;
LABEL_9:
      EmitStatement(scrContext, *v8, v11, endSourcePos, block);
      v8 = node;
      if ( !node )
        return;
    }
    if ( !scrContext->m_varPub.developer_script )
    {
      while ( *(_DWORD *)v10.node->type == 53 )
      {
        v10 = v10.node[1];
        if ( !v10.node )
          goto LABEL_7;
      }
    }
LABEL_8:
    v11 = 0;
    goto LABEL_9;
  }
}

/*
==============
EmitSwitchStatement
==============
*/
void EmitSwitchStatement(scrContext_t *scrContext, sval_u expr, sval_u stmtlist, sval_u sourcePos, bool lastStatement, unsigned int endSourcePos, scr_block_t *block)
{
  int type; 
  CaseStatementInfo *currentCaseStatement; 
  unsigned __int8 *v11; 
  int v12; 
  unsigned __int8 *codePos; 
  unsigned int v14; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  char *v17; 
  CaseStatementInfo *v18; 
  int *i; 
  unsigned int name; 
  unsigned __int8 *v21; 
  unsigned int v22; 
  unsigned __int8 *v23; 
  CaseStatementInfo *v24; 
  int v25; 
  unsigned __int8 *v26; 
  __int64 v27; 
  unsigned __int8 *v28; 
  BreakStatementInfo *currentBreakStatement; 
  VariableCompileValue constValue; 
  bool bCanBreak; 

  type = sourcePos.type;
  currentCaseStatement = scrContext->m_compileGlob.currentCaseStatement;
  bCanBreak = scrContext->m_compileGlob.bCanBreak;
  currentBreakStatement = scrContext->m_compileGlob.currentBreakStatement;
  scrContext->m_compileGlob.bCanBreak = 0;
  if ( EmitOrEvalExpression(scrContext, expr, &constValue, block) )
    EmitValue(scrContext, &constValue);
  EmitOpcode(scrContext, 0x86u, -1, 0);
  v11 = (unsigned __int8 *)TempMalloc(4ui64);
  scrContext->m_compileGlob.codePos = v11;
  v12 = 0;
  *(_DWORD *)v11 = 0;
  codePos = scrContext->m_compileGlob.codePos;
  v14 = (unsigned int)TempMalloc(0i64);
  scrContext->m_compileGlob.currentCaseStatement = NULL;
  scrContext->m_compileGlob.currentBreakStatement = NULL;
  EmitSwitchStatementList(scrContext, stmtlist, lastStatement, endSourcePos, block);
  EmitOpcode(scrContext, 0x56u, 0, 0);
  AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
  v15 = (unsigned __int8 *)TempMalloc(2ui64);
  scrContext->m_compileGlob.codePos = v15;
  *(_WORD *)v15 = 0;
  v16 = scrContext->m_compileGlob.codePos;
  *(_DWORD *)codePos = (_DWORD)v16 - v14;
  v17 = TempMalloc(0i64);
  v18 = scrContext->m_compileGlob.currentCaseStatement;
  for ( i = (int *)v17; v18; v18 = v18->next )
  {
    name = v18->name;
    v21 = (unsigned __int8 *)TempMalloc(4ui64);
    scrContext->m_compileGlob.codePos = v21;
    *(_DWORD *)v21 = name;
    v22 = Scr_CodePosToOffset(scrContext, v18->codePos);
    v23 = (unsigned __int8 *)TempMalloc(4ui64);
    scrContext->m_compileGlob.codePos = v23;
    ++v12;
    *(_DWORD *)v23 = v22;
  }
  *(_WORD *)v16 = v12;
  qsort(i, v12, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareCaseInfo);
  TempMemorySetPos((char *)i);
  if ( v12 )
  {
    while ( 1 )
    {
      if ( v12 > 1 && *i == i[2] )
      {
        v24 = scrContext->m_compileGlob.currentCaseStatement;
        if ( v24 )
          break;
      }
LABEL_11:
      v25 = *i;
      v26 = (unsigned __int8 *)TempMalloc(4ui64);
      scrContext->m_compileGlob.codePos = v26;
      *(_DWORD *)v26 = v25;
      v27 = i[1];
      if ( (i[1] & 0xFFFFFF) != v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1401, ASSERT_TYPE_ASSERT, "(( ( offset ) & SCRIPT_UINT3_MASK ) == ( offset ))", (const char *)&queryFormat, "( ( offset ) & SCRIPT_UINT3_MASK ) == ( offset )") )
        __debugbreak();
      if ( (v27 & 0xFFFFFF) != (_DWORD)v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1379, ASSERT_TYPE_ASSERT, "(( ( value ) & SCRIPT_UINT3_MASK ) == ( value ))", (const char *)&queryFormat, "( ( value ) & SCRIPT_UINT3_MASK ) == ( value )") )
        __debugbreak();
      v28 = (unsigned __int8 *)TempMalloc(3ui64);
      scrContext->m_compileGlob.codePos = v28;
      *v28 = BYTE2(v27);
      scrContext->m_compileGlob.codePos[1] = BYTE1(v27);
      scrContext->m_compileGlob.codePos[2] = v27;
      Scr_SetRelativeCodepos(scrContext->m_compileGlob.codePos, &scrContext->m_varPub.programBuffer[scrContext->m_compileGlob.codePos[2] | ((scrContext->m_compileGlob.codePos[1] | ((unsigned __int64)*scrContext->m_compileGlob.codePos << 8)) << 8)]);
      i += 2;
      if ( !--v12 )
        goto LABEL_18;
    }
    while ( v24->name != *i )
    {
      v24 = v24->next;
      if ( !v24 )
        goto LABEL_11;
    }
    CompileError(scrContext, v24->sourcePos, "duplicate case expression");
  }
  else
  {
LABEL_18:
    ConnectBreakStatements(scrContext);
    scrContext->m_compileGlob.bCanBreak = bCanBreak;
    scrContext->m_compileGlob.currentBreakStatement = currentBreakStatement;
    scrContext->m_compileGlob.currentCaseStatement = currentCaseStatement;
  }
}

/*
==============
EmitSwitchStatementList
==============
*/
void EmitSwitchStatementList(scrContext_t *scrContext, sval_u val, bool lastStatement, unsigned int endSourcePos, scr_block_t *block)
{
  scr_block_t **v9; 
  scr_block_t **v10; 
  char v11; 
  sval_u *v12; 
  scr_block_t *v13; 
  sval_u *node; 
  sval_u *v15; 
  int type; 
  sval_u v17; 
  bool v18; 
  scr_block_t *v19; 
  bool v20; 
  scr_block_t *v21; 
  scr_block_t *v22; 
  scr_block_t *v23; 
  int *breakChildCount; 
  scr_block_t *breakBlock; 
  int childCount; 
  scr_block_t **breakChildBlocks; 

  breakChildBlocks = scrContext->m_compileGlob.breakChildBlocks;
  breakChildCount = scrContext->m_compileGlob.breakChildCount;
  breakBlock = scrContext->m_compileGlob.breakBlock;
  childCount = 0;
  v9 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "EmitSwitchStatementList");
  scrContext->m_compileGlob.breakChildBlocks = v9;
  v10 = v9;
  scrContext->m_compileGlob.breakBlock = NULL;
  scrContext->m_compileGlob.breakChildCount = &childCount;
  v11 = 0;
  v12 = *(sval_u **)(*(_QWORD *)val.node + 8i64);
  if ( v12 )
  {
    v13 = block;
    while ( 1 )
    {
      node = v12->node;
      v15 = v12[1].node;
      type = v12->node->type;
      if ( (unsigned int)(type - 70) <= 1 )
      {
        if ( scrContext->m_compileGlob.breakBlock )
        {
          if ( !scrContext->m_compileGlob.bCanBreak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5043, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->bCanBreak )", (const char *)&queryFormat, "pScrCompileGlob->bCanBreak") )
            __debugbreak();
          v21 = scrContext->m_compileGlob.breakBlock;
          scrContext->m_compileGlob.bCanBreak = 0;
          EmitRemoveLocalVars(scrContext, v21, v21);
          node = v12->node;
          type = v12->node->type;
        }
        if ( type == 70 )
        {
          scrContext->m_compileGlob.breakBlock = node[3].block;
          EmitCaseStatement(scrContext, v12->node[1], v12->node[2]);
        }
        else
        {
          scrContext->m_compileGlob.breakBlock = node[2].block;
          v11 = 1;
          EmitCaseStatementInfo(scrContext, 0, v12->node[1]);
        }
        Scr_TransferBlock(v13, scrContext->m_compileGlob.breakBlock);
        if ( scrContext->m_compileGlob.bCanBreak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5062, ASSERT_TYPE_ASSERT, "( !pScrCompileGlob->bCanBreak )", (const char *)&queryFormat, "!pScrCompileGlob->bCanBreak") )
          __debugbreak();
        scrContext->m_compileGlob.bCanBreak = 1;
        goto LABEL_30;
      }
      if ( !scrContext->m_compileGlob.breakBlock )
      {
        CompileError(scrContext, endSourcePos, "missing case statement", "pScrCompileGlob->bCanBreak");
        return;
      }
      if ( !lastStatement )
        goto LABEL_11;
      v17 = v12[1];
      if ( v15 )
        break;
LABEL_10:
      v18 = 1;
LABEL_12:
      EmitStatement(scrContext, *v12, v18, endSourcePos, scrContext->m_compileGlob.breakBlock);
      v19 = scrContext->m_compileGlob.breakBlock;
      if ( v19 && v19->abortLevel )
      {
        v20 = !scrContext->m_compileGlob.bCanBreak;
        scrContext->m_compileGlob.breakBlock = NULL;
        if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5081, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->bCanBreak )", (const char *)&queryFormat, "pScrCompileGlob->bCanBreak") )
          __debugbreak();
        scrContext->m_compileGlob.bCanBreak = 0;
      }
LABEL_30:
      v12 = v15;
      if ( !v15 )
      {
        if ( scrContext->m_compileGlob.breakBlock )
        {
          if ( !scrContext->m_compileGlob.bCanBreak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5087, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->bCanBreak )", (const char *)&queryFormat, "pScrCompileGlob->bCanBreak") )
            __debugbreak();
          v22 = scrContext->m_compileGlob.breakBlock;
          scrContext->m_compileGlob.bCanBreak = 0;
          EmitRemoveLocalVars(scrContext, v22, v22);
        }
        if ( v11 )
        {
          v23 = scrContext->m_compileGlob.breakBlock;
          if ( v23 )
            Scr_AddBreakBlock(scrContext, v23);
          Scr_InitFromChildBlocks(v10, childCount, v13);
        }
        goto LABEL_40;
      }
    }
    if ( !scrContext->m_varPub.developer_script )
    {
      while ( *(_DWORD *)v17.node->type == 53 )
      {
        v17 = v17.node[1];
        if ( !v17.node )
          goto LABEL_10;
      }
    }
LABEL_11:
    v18 = 0;
    goto LABEL_12;
  }
LABEL_40:
  scrContext->m_compileGlob.breakChildBlocks = breakChildBlocks;
  scrContext->m_compileGlob.breakChildCount = breakChildCount;
  scrContext->m_compileGlob.breakBlock = breakBlock;
}

/*
==============
EmitThread
==============
*/
void EmitThread(scrContext_t *scrContext, sval_u val)
{
  sval_u v4; 
  sval_u v5; 
  sval_u v6; 
  sval_u v7; 
  const char *scriptExtFilename; 
  const char *v9; 
  const char *v10; 
  unsigned int NewVariable; 
  int type; 
  const char *v13; 
  char *v14; 
  unsigned int checksum; 
  char *v16; 
  VariableCompileValue constValue; 

  SL_ResetLocalCanonicalString();
  *(_QWORD *)&scrContext->m_jmpDepth = 0i64;
  switch ( val.node->type )
  {
    case 'M':
      Scr_CalcLocalVarsThread(scrContext, val.node[2], val.node[3], val.node + 6);
      if ( scrContext->m_compileGlob.in_developer_thread )
      {
        if ( scrContext->m_compilePub.developer_statement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5902, ASSERT_TYPE_ASSERT, "( pScrCompilePub->developer_statement == SCR_DEV_NO )", (const char *)&queryFormat, "pScrCompilePub->developer_statement == SCR_DEV_NO") )
          __debugbreak();
        if ( scrContext->m_varPub.developer_script )
        {
          scrContext->m_compilePub.developer_statement = 1;
          InitThread(scrContext, 1);
          Scr_SetThreadPosition(scrContext, val);
          EmitThreadInternal(scrContext, val, val.node[4], val.node[5], val.node[6].block);
        }
        else
        {
          v14 = TempMalloc(0i64);
          checksum = scrContext->m_varPub.checksum;
          scrContext->m_compilePub.developer_statement = 2;
          v16 = v14;
          InitThread(scrContext, 1);
          EmitThreadInternal(scrContext, val, val.node[4], val.node[5], val.node[6].block);
          TempMemorySetPos(v16);
          scrContext->m_varPub.checksum = checksum;
        }
        scrContext->m_compilePub.developer_statement = 0;
      }
      else
      {
        InitThread(scrContext, 0);
        Scr_SetThreadPosition(scrContext, val);
        EmitThreadInternal(scrContext, val, val.node[4], val.node[5], val.node[6].block);
      }
      break;
    case 'N':
      if ( scrContext->m_compileGlob.in_developer_thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5981, ASSERT_TYPE_ASSERT, "( !pScrCompileGlob->in_developer_thread )", (const char *)&queryFormat, "!pScrCompileGlob->in_developer_thread") )
        __debugbreak();
      scrContext->m_compileGlob.in_developer_thread = 1;
      break;
    case 'O':
      if ( !scrContext->m_compileGlob.in_developer_thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5986, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->in_developer_thread )", (const char *)&queryFormat, "pScrCompileGlob->in_developer_thread") )
        __debugbreak();
      scrContext->m_compileGlob.in_developer_thread = 0;
      break;
    case 'P':
      if ( scrContext->m_compileGlob.in_developer_thread )
      {
        CompileError(scrContext, val.node[2].canonicalString, "cannot put #using_animtree inside /# ... #/ comment");
      }
      else
      {
        type = val.node[3].type;
        v13 = SL_ConvertToString(val.node[1].stringValue);
        Scr_UsingTree(v13, type, 1);
        Scr_CompileRemoveRefToString(scrContext, val.node[1].stringValue);
      }
      break;
    case 'c':
      v4 = val.node[5];
      v5 = val.node[4];
      v6 = val.node[3];
      v7 = val.node[1];
      if ( !EmitOrEvalExpression(scrContext, val.node[2], &constValue, NULL) )
      {
        scriptExtFilename = scrContext->m_parserPub.scriptExtFilename;
        if ( v4.type )
          scrContext->m_parserPub.scriptExtFilename = SL_ConvertToStringSafe(v4.stringValue);
        CompileError(scrContext, v5.canonicalString, "Expression does not evaluate to a primitive value");
        scrContext->m_parserPub.scriptExtFilename = scriptExtFilename;
      }
      if ( FindVariable(scrContext, scrContext->m_compilePub.scriptsDefine, v7.canonicalString) )
      {
        v9 = scrContext->m_parserPub.scriptExtFilename;
        if ( v4.type )
          scrContext->m_parserPub.scriptExtFilename = SL_ConvertToStringSafe(v4.stringValue);
        if ( v7.type )
        {
          if ( (unsigned int)(16 * v7.type) >= 0x800000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_stringlist.h", 159, ASSERT_TYPE_ASSERT, "( stringValue * MT_NODE_SIZE < MT_SIZE )", (const char *)&queryFormat, "stringValue * MT_NODE_SIZE < MT_SIZE") )
            __debugbreak();
          v10 = &scrMemTreePub.mt_buffer[16 * v7.type + 8];
        }
        else
        {
          v10 = (char *)&queryFormat.fmt + 3;
        }
        CompileError(scrContext, v6.canonicalString, "Duplicate define %s", v10);
        scrContext->m_parserPub.scriptExtFilename = v9;
      }
      if ( v4.type )
        SL_RemoveRefToString(v4.stringValue);
      NewVariable = GetNewVariable(scrContext, scrContext->m_compilePub.scriptsDefine, v7.canonicalString);
      SL_RemoveRefToString(v7.stringValue);
      SetNewVariableValue(scrContext, NewVariable, &constValue.value);
      break;
  }
}

/*
==============
EmitThreadInternal
==============
*/
void EmitThreadInternal(scrContext_t *scrContext, sval_u val, sval_u sourcePos, sval_u endSourcePos, scr_block_t *block)
{
  int type; 
  int v7; 
  sval_u v9; 
  unsigned __int8 v10; 
  scr_block_t *v11; 
  sval_u *node; 
  __int64 v13; 
  unsigned __int8 *v14; 
  sval_u **v15; 
  char *v16; 
  const char *v17; 
  const char *v18; 
  sval_u *v19; 
  sval_u *v20; 
  sval_u *v21; 
  bool v22; 
  int sourcePosa; 

  sourcePosa = sourcePos.type;
  type = endSourcePos.type;
  v7 = sourcePos.type;
  AddThreadStartOpcodePos(scrContext, sourcePos.canonicalString);
  scrContext->m_compileGlob.cumulOffset = 0;
  *(_QWORD *)&scrContext->m_compileGlob.maxOffset = 0i64;
  CompileTransferRefToString(scrContext, val.node[1].stringValue, 2u);
  v9 = val.node[2];
  v10 = 0;
  v11 = block;
  node = v9.node->node;
  v13 = *(_QWORD *)(*(_QWORD *)v9.node + 8i64);
  if ( !v13 )
    goto LABEL_17;
  do
  {
    if ( ++v10 == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5720, ASSERT_TYPE_ASSERT, "(count < 255)", (const char *)&queryFormat, "count < 255") )
      __debugbreak();
    v13 = *(_QWORD *)(v13 + 8);
  }
  while ( v13 );
  v7 = sourcePosa;
  v11 = block;
  if ( !v10 )
  {
LABEL_17:
    EmitOpcode(scrContext, 0x4Bu, 0, 0);
LABEL_18:
    AddOpcodePos(scrContext, v7, SOURCE_TYPE_NONE);
    goto LABEL_19;
  }
  EmitOpcode(scrContext, 0xA6u, 0, 0);
  if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
    Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
  v14 = (unsigned __int8 *)TempMalloc(1ui64);
  scrContext->m_compileGlob.codePos = v14;
  *v14 = v10;
  v15 = (sval_u **)node[1].node;
  if ( !v15 )
  {
LABEL_13:
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
    {
      v16 = TempMalloc(0i64);
      Scr_AddAssignmentPos(scrContext, v16);
    }
    goto LABEL_18;
  }
  while ( !Scr_FindLocalVarIndex(scrContext, (*v15)->stringValue, (*v15)[1], 1, block, 0) )
  {
    v15 = (sval_u **)v15[1];
    if ( !v15 )
      goto LABEL_13;
  }
  v17 = SL_ConvertToString(val.node[1].stringValue);
  v18 = j_va("duplicate parameter names in %s", v17);
  CompileError(scrContext, type, v18);
LABEL_19:
  v19 = *(sval_u **)(*(_QWORD *)val.node[3].node + 8i64);
  if ( v19 )
  {
    do
    {
      v20 = v19[1].node;
      v21 = v20;
      if ( v20 )
      {
        if ( !scrContext->m_varPub.developer_script )
        {
          while ( v21->node->type == 53 )
          {
            v21 = v21[1].node;
            if ( !v21 )
              goto LABEL_24;
          }
        }
        v22 = 0;
      }
      else
      {
LABEL_24:
        v22 = 1;
      }
      EmitStatement(scrContext, *v19, v22, type, v11);
      v19 = v20;
    }
    while ( v20 );
  }
  EmitOpcode(scrContext, 0x3Bu, 0, 0);
  if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
    Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
  *(_QWORD *)&scrContext->m_jmpDepth = 0i64;
  if ( !scrContext->m_varPub.error_message )
  {
    AddOpcodePos(scrContext, type, SOURCE_TYPE_BREAKPOINT);
    AddOpcodePos(scrContext, 0xFFFFFFFE, SOURCE_TYPE_NONE);
    if ( scrContext->m_compileGlob.cumulOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 5853, ASSERT_TYPE_ASSERT, "( !pScrCompileGlob->cumulOffset )", (const char *)&queryFormat, "!pScrCompileGlob->cumulOffset") )
      __debugbreak();
    if ( scrContext->m_compileGlob.maxOffset + (scrContext->m_compileGlob.maxCallOffset << 6) >= 2048 )
      CompileError(scrContext, v7, "function exceeds operand stack size");
  }
}

/*
==============
EmitThreadList
==============
*/
void EmitThreadList(scrContext_t *scrContext, sval_u val)
{
  sval_u v2; 
  _QWORD *v4; 
  _DWORD *v5; 
  bool in_developer_thread; 
  unsigned int v7; 
  signed int v8; 
  unsigned int Variable; 
  VariableType v10; 
  sval_u *i; 
  VariableValue value; 
  BuiltinType type; 
  sval_u v14; 
  char *pName; 

  v14 = val;
  scrContext->m_compileGlob.in_developer_thread = 0;
  v2 = val;
  v4 = *(_QWORD **)(*(_QWORD *)val.node + 8i64);
  if ( !v4 )
    goto LABEL_22;
  do
  {
    v5 = (_DWORD *)*v4;
    switch ( *(_DWORD *)*v4 )
    {
      case 'M':
        pName = (char *)SL_ConvertToString((scr_string_t)v5[2]);
        type = BUILTIN_ANY;
        if ( Scr_GetFunction(scrContext, (const char **)&pName, &type) || Scr_GetMethod(scrContext, (const char **)&pName, &type) )
        {
          CompileError(scrContext, v5[8], "Trying to override builtin function '%s'.", pName);
        }
        else
        {
          in_developer_thread = scrContext->m_compileGlob.in_developer_thread;
          if ( !in_developer_thread || scrContext->m_varPub.developer_script )
          {
            v7 = v5[8];
            v8 = v5[2];
            Variable = GetVariable(scrContext, scrContext->m_compileGlob.filePosId, v8);
            CheckThreadPosition(scrContext, Variable, (scr_string_t)v8, v7);
            value.u.scriptCodePosValue = 0i64;
            v10 = VAR_DEVELOPER_CODEPOS;
            if ( !in_developer_thread )
              v10 = VAR_CODEPOS;
            value.type = v10;
            SetNewVariableValue(scrContext, Variable, &value);
          }
        }
        break;
      case 'N':
        if ( scrContext->m_compileGlob.in_developer_thread )
        {
          CompileError(scrContext, v5[2], "cannot recurse /#");
        }
        else
        {
          scrContext->m_compileGlob.in_developer_thread = 1;
          scrContext->m_compileGlob.developer_thread_sourcePos = v5[2];
        }
        break;
      case 'O':
        if ( scrContext->m_compileGlob.in_developer_thread )
          scrContext->m_compileGlob.in_developer_thread = 0;
        else
          CompileError(scrContext, v5[2], "#/ has no matching /#");
        break;
    }
    v4 = (_QWORD *)v4[1];
  }
  while ( v4 );
  v2 = v14;
  if ( scrContext->m_compileGlob.in_developer_thread )
  {
    CompileError(scrContext, scrContext->m_compileGlob.developer_thread_sourcePos, "/# has no matching #/");
  }
  else
  {
LABEL_22:
    *(_WORD *)scrContext->m_compileGlob.firstThread = 257;
    if ( scrContext->m_compileGlob.in_developer_thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 6046, ASSERT_TYPE_ASSERT, "( !pScrCompileGlob->in_developer_thread )", (const char *)&queryFormat, "!pScrCompileGlob->in_developer_thread") )
      __debugbreak();
    for ( i = *(sval_u **)(*(_QWORD *)v2.node + 8i64); i; i = i[1].node )
      EmitThread(scrContext, *i);
    if ( scrContext->m_compileGlob.in_developer_thread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 6072, ASSERT_TYPE_ASSERT, "( !pScrCompileGlob->in_developer_thread )", (const char *)&queryFormat, "!pScrCompileGlob->in_developer_thread") )
      __debugbreak();
  }
}

/*
==============
EmitUint3
==============
*/
void EmitUint3(scrContext_t *scrContext, unsigned int value)
{
  unsigned __int8 *v4; 

  if ( (value & 0xFFFFFF) != value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1379, ASSERT_TYPE_ASSERT, "(( ( value ) & SCRIPT_UINT3_MASK ) == ( value ))", (const char *)&queryFormat, "( ( value ) & SCRIPT_UINT3_MASK ) == ( value )") )
    __debugbreak();
  v4 = (unsigned __int8 *)TempMalloc(3ui64);
  scrContext->m_compileGlob.codePos = v4;
  *v4 = BYTE2(value);
  scrContext->m_compileGlob.codePos[1] = BYTE1(value);
  scrContext->m_compileGlob.codePos[2] = value;
}

/*
==============
EmitUnsignedShort
==============
*/
void EmitUnsignedShort(scrContext_t *scrContext, unsigned __int16 value)
{
  unsigned __int8 *v4; 

  v4 = (unsigned __int8 *)TempMalloc(2ui64);
  scrContext->m_compileGlob.codePos = v4;
  *(_WORD *)v4 = value;
}

/*
==============
EmitValue
==============
*/
void EmitValue(scrContext_t *scrContext, VariableCompileValue *constValue)
{
  sval_u sourcePos; 
  unsigned int v4; 
  int v5; 
  unsigned __int8 *v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  unsigned __int8 *v9; 
  sval_u v10; 
  int v11; 
  unsigned __int8 *v12; 
  sval_u v13; 
  int intValue; 
  unsigned int v15; 
  unsigned __int8 *v16; 
  sval_u v17; 
  const float *scriptCodePosValue; 
  const float *v19; 
  __int64 v20; 
  unsigned __int8 *v21; 
  int v22; 
  sval_u v23; 
  int v24; 
  unsigned __int8 *v25; 

  switch ( constValue->value.type )
  {
    case VAR_UNDEFINED:
      sourcePos = constValue->sourcePos;
      v4 = 26;
      goto LABEL_6;
    case VAR_STRING:
      v13 = constValue->sourcePos;
      intValue = constValue->value.u.intValue;
      v15 = 122;
      goto LABEL_19;
    case VAR_ISTRING:
      v13 = constValue->sourcePos;
      intValue = constValue->value.u.intValue;
      v15 = 95;
LABEL_19:
      EmitOpcode(scrContext, v15, 1, 0);
      AddOpcodePos(scrContext, v13.canonicalString, SOURCE_TYPE_BREAKPOINT);
      v16 = (unsigned __int8 *)TempMalloc(4ui64);
      scrContext->m_compileGlob.codePos = v16;
      *(_DWORD *)v16 = intValue;
      CompileTransferRefToString(scrContext, (scr_string_t)intValue, 1u);
      return;
    case VAR_VECTOR:
      v17 = constValue->sourcePos;
      scriptCodePosValue = (const float *)constValue->value.u.scriptCodePosValue;
      EmitOpcode(scrContext, 0x13u, 1, 0);
      AddOpcodePos(scrContext, v17.canonicalString, SOURCE_TYPE_BREAKPOINT);
      v19 = scriptCodePosValue;
      v20 = 3i64;
      do
      {
        v21 = (unsigned __int8 *)TempMallocAlignStrict(4ui64);
        v22 = *(_DWORD *)v19++;
        scrContext->m_compileGlob.codePos = v21;
        *(_DWORD *)v21 = v22;
        --v20;
      }
      while ( v20 );
      RemoveRefToVector(scrContext, scriptCodePosValue);
      return;
    case VAR_FLOAT:
      v10 = constValue->sourcePos;
      v11 = constValue->value.u.intValue;
      EmitOpcode(scrContext, 0x70u, 1, 0);
      AddOpcodePos(scrContext, v10.canonicalString, SOURCE_TYPE_BREAKPOINT);
      v12 = (unsigned __int8 *)TempMalloc(4ui64);
      scrContext->m_compileGlob.codePos = v12;
      *(_DWORD *)v12 = v11;
      return;
    case VAR_INTEGER:
      v5 = constValue->value.u.intValue;
      sourcePos = constValue->sourcePos;
      if ( constValue->value.u.intValue < 0 )
      {
        if ( v5 > -256 )
        {
          EmitOpcode(scrContext, 0x51u, 1, 0);
          AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
          v7 = (unsigned __int8 *)TempMalloc(1ui64);
          scrContext->m_compileGlob.codePos = v7;
          *v7 = -(char)v5;
          return;
        }
        if ( v5 > -65536 )
        {
          EmitOpcode(scrContext, 0x50u, 1, 0);
          AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
          v8 = (unsigned __int8 *)TempMalloc(2ui64);
          scrContext->m_compileGlob.codePos = v8;
          *(_WORD *)v8 = -(__int16)v5;
          return;
        }
        goto LABEL_15;
      }
      if ( v5 )
      {
        if ( v5 < 256 )
        {
          EmitOpcode(scrContext, 0x16u, 1, 0);
          AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
          v6 = (unsigned __int8 *)TempMalloc(1ui64);
          scrContext->m_compileGlob.codePos = v6;
          *v6 = v5;
          return;
        }
        if ( v5 < 0x10000 )
        {
          EmitOpcode(scrContext, 0x66u, 1, 0);
          AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
          EmitUnsignedShort(scrContext, v5);
          return;
        }
LABEL_15:
        EmitOpcode(scrContext, 0x49u, 1, 0);
        AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
        v9 = (unsigned __int8 *)TempMalloc(4ui64);
        scrContext->m_compileGlob.codePos = v9;
        *(_DWORD *)v9 = v5;
        return;
      }
      v4 = 92;
LABEL_6:
      EmitOpcode(scrContext, v4, 1, 0);
      AddOpcodePos(scrContext, sourcePos.canonicalString, SOURCE_TYPE_BREAKPOINT);
      return;
    case VAR_PRE_ANIMATION:
      v23 = constValue->sourcePos;
      v24 = constValue->value.u.intValue;
      EmitOpcode(scrContext, 0x91u, 1, 0);
      AddOpcodePos(scrContext, v23.canonicalString, SOURCE_TYPE_BREAKPOINT);
      v25 = (unsigned __int8 *)TempMalloc(8ui64);
      scrContext->m_compileGlob.codePos = v25;
      *(_QWORD *)v25 = -1i64;
      if ( scrContext->m_compilePub.developer_statement != 2 )
        Scr_EmitAnimation(scrContext, (const char *)scrContext->m_compileGlob.codePos, v24, v23.canonicalString);
      Scr_CompileRemoveRefToString(scrContext, (scr_string_t)v24);
      return;
    default:
      return;
  }
}

/*
==============
EmitVariableExpressionRef
==============
*/
void EmitVariableExpressionRef(scrContext_t *scrContext, sval_u expr, scr_block_t *block)
{
  sval_u v6; 
  sval_u v7; 
  int LocalVarIndex; 
  unsigned int v9; 
  unsigned __int8 *v10; 
  sval_u v11; 
  sval_u v12; 
  sval_u v13; 
  sval_u v14; 
  int type; 
  const char *v16; 
  VariableCompileValue constValue; 

  switch ( expr.node->type )
  {
    case 5:
      v6 = expr.node[2];
      v7 = expr.node[1];
      if ( scrContext->m_compilePub.developer_statement == 3 )
      {
        EmitOpcode(scrContext, 0x9Fu, 0, 0);
        EmitCanonicalString(scrContext, v7.stringValue);
      }
      else
      {
        LocalVarIndex = Scr_FindLocalVarIndex(scrContext, v7.stringValue, v6, 1, block, 1);
        v9 = 143;
        if ( LocalVarIndex )
          v9 = 113;
        EmitOpcode(scrContext, v9, 0, 0);
        if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
          Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
        if ( LocalVarIndex )
        {
          v10 = (unsigned __int8 *)TempMalloc(1ui64);
          scrContext->m_compileGlob.codePos = v10;
          *v10 = LocalVarIndex;
        }
        AddOpcodePos(scrContext, v6.canonicalString, SOURCE_TYPE_BREAKPOINT);
      }
      break;
    case 0xF:
      v11 = expr.node[3];
      v12 = expr.node[1];
      v13 = expr.node[4];
      if ( EmitOrEvalExpression(scrContext, expr.node[2], &constValue, block) )
        EmitValue(scrContext, &constValue);
      EmitArrayPrimitiveExpressionRef(scrContext, v12, v11, block);
      EmitOpcode(scrContext, 0x5Au, -1, 0);
      AddOpcodePos(scrContext, v13.canonicalString, SOURCE_TYPE_NONE);
      AddOpcodePos(scrContext, v11.canonicalString, SOURCE_TYPE_BREAKPOINT);
      break;
    case 0x11:
      v14 = expr.node[2];
      EmitPrimitiveExpressionFieldObject(scrContext, expr.node[1], expr.node[3], block);
      EmitOpcode(scrContext, 0x6Du, 0, 0);
      EmitCanonicalString(scrContext, v14.stringValue);
      break;
    case 0x12:
      if ( scrContext->m_compileGlob.bConstRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4014, ASSERT_TYPE_ASSERT, "( !scrContext.m_compileGlob.bConstRefCount )", (const char *)&queryFormat, "!scrContext.m_compileGlob.bConstRefCount") )
        __debugbreak();
      scrContext->m_compileGlob.bConstRefCount = 1;
      EmitVariableExpressionRef(scrContext, expr.node[1], block);
      if ( !scrContext->m_compileGlob.bConstRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4017, ASSERT_TYPE_ASSERT, "( scrContext.m_compileGlob.bConstRefCount )", (const char *)&queryFormat, "scrContext.m_compileGlob.bConstRefCount") )
        __debugbreak();
      scrContext->m_compileGlob.bConstRefCount = 0;
      break;
    case 0x3D:
    case 0x5B:
      type = expr.node[2].type;
      v16 = "$ and self field can only be used in the script debugger";
      if ( !scrContext->m_compilePub.script_loading )
        v16 = "not an lvalue";
      CompileError(scrContext, type, v16);
      break;
    default:
      return;
  }
}

/*
==============
EmitWaittillStatement
==============
*/
void EmitWaittillStatement(scrContext_t *scrContext, sval_u obj, sval_u exprlist, sval_u sourcePos, sval_u waitSourcePos, scr_block_t *block)
{
  int type; 
  __int64 v9; 
  scr_string_t **i; 
  sval_u v11; 
  unsigned __int8 LocalVarIndex; 
  unsigned __int8 *v13; 
  char *v14; 
  VariableCompileValue constValue; 

  type = sourcePos.type;
  v9 = *(_QWORD *)(*(_QWORD *)exprlist.node + 8i64);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4757, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( EmitOrEvalExpression(scrContext, **(sval_u **)v9, &constValue, block) )
    EmitValue(scrContext, &constValue);
  if ( EmitOrEvalPrimitiveExpression(scrContext, obj, &constValue, block) )
    EmitValue(scrContext, &constValue);
  EmitOpcode(scrContext, 0x5Eu, -2, 0);
  scrContext->m_compilePub.pauseBlock = block;
  AddOpcodePos(scrContext, waitSourcePos.canonicalString, SOURCE_TYPE_WAIT);
  scrContext->m_compilePub.pauseBlock = NULL;
  AddOpcodePos(scrContext, waitSourcePos.canonicalString, SOURCE_TYPE_NONE);
  AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
  AddOpcodePos(scrContext, *(_DWORD *)(*(_QWORD *)v9 + 8i64), SOURCE_TYPE_NONE);
  for ( i = *(scr_string_t ***)(v9 + 8); i; i = (scr_string_t **)i[1] )
  {
    v11 = *(sval_u *)(*i + 2);
    LocalVarIndex = Scr_FindLocalVarIndex(scrContext, **i, v11, 1, block, 1);
    EmitOpcode(scrContext, 0x28u, 0, 0);
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
      Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
    v13 = (unsigned __int8 *)TempMalloc(1ui64);
    scrContext->m_compileGlob.codePos = v13;
    *v13 = LocalVarIndex;
    AddOpcodePos(scrContext, v11.canonicalString, SOURCE_TYPE_NONE);
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
    {
      v14 = TempMalloc(0i64);
      Scr_AddAssignmentPos(scrContext, v14);
    }
  }
  EmitOpcode(scrContext, 0x67u, 0, 0);
}

/*
==============
EmitWaittillmatchStatement
==============
*/
void EmitWaittillmatchStatement(scrContext_t *scrContext, sval_u obj, sval_u exprlist, sval_u sourcePos, sval_u waitSourcePos, scr_block_t *block)
{
  int type; 
  __int64 v10; 
  __int64 v11; 
  int i; 
  __int64 v13; 
  _QWORD *j; 
  unsigned __int8 *v15; 
  unsigned __int8 *v16; 
  VariableCompileValue constValue; 

  type = sourcePos.type;
  v10 = *(_QWORD *)(*(_QWORD *)exprlist.node + 8i64);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4787, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  v11 = *(_QWORD *)(v10 + 8);
  for ( i = 0; v11; ++i )
  {
    if ( EmitOrEvalExpression(scrContext, **(sval_u **)v11, &constValue, block) )
      EmitValue(scrContext, &constValue);
    v11 = *(_QWORD *)(v11 + 8);
  }
  v13 = *(_QWORD *)(*(_QWORD *)exprlist.node + 8i64);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4803, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( EmitOrEvalExpression(scrContext, **(sval_u **)v13, &constValue, block) )
    EmitValue(scrContext, &constValue);
  if ( EmitOrEvalPrimitiveExpression(scrContext, obj, &constValue, block) )
    EmitValue(scrContext, &constValue);
  EmitOpcode(scrContext, 0xBu, -2 - i, 0);
  scrContext->m_compilePub.pauseBlock = block;
  AddOpcodePos(scrContext, waitSourcePos.canonicalString, SOURCE_TYPE_WAIT);
  scrContext->m_compilePub.pauseBlock = NULL;
  AddOpcodePos(scrContext, waitSourcePos.canonicalString, SOURCE_TYPE_NONE);
  AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
  AddOpcodePos(scrContext, *(_DWORD *)(*(_QWORD *)v13 + 8i64), SOURCE_TYPE_NONE);
  for ( j = *(_QWORD **)(v13 + 8); j; j = (_QWORD *)j[1] )
    AddOpcodePos(scrContext, *(_DWORD *)(*j + 8i64), SOURCE_TYPE_NONE);
  if ( i >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4832, ASSERT_TYPE_ASSERT, "( exprCount < 256 )", (const char *)&queryFormat, "exprCount < 256") )
    __debugbreak();
  v15 = (unsigned __int8 *)TempMalloc(1ui64);
  scrContext->m_compileGlob.codePos = v15;
  *v15 = i;
  v16 = (unsigned __int8 *)TempMalloc(1ui64);
  scrContext->m_compileGlob.codePos = v16;
  *v16 = 77;
  EmitOpcode(scrContext, 0x67u, 0, 0);
}

/*
==============
EmitWhileStatement
==============
*/
void EmitWhileStatement(scrContext_t *scrContext, sval_u expr, sval_u stmt, sval_u sourcePos, sval_u whileSourcePos, scr_block_t *block, sval_u *whileStatBlock)
{
  sval_u *v8; 
  int type; 
  bool bCanContinue; 
  scr_block_t *node; 
  char v15; 
  bool v16; 
  char *codePos; 
  int intValue; 
  unsigned __int8 *v19; 
  scr_block_t **v20; 
  unsigned __int8 *v21; 
  char *v22; 
  scr_block_t **childBlocks; 
  VariableCompileValue constValue; 
  char *nextPos; 
  BreakStatementInfo *currentBreakStatement; 
  ContinueStatementInfo *currentContinueStatement; 
  scr_block_t **breakChildBlocks; 
  int *breakChildCount; 
  scr_block_t *breakBlock; 
  scr_block_t **continueChildBlocks; 
  int *continueChildCount; 
  bool bCanBreak; 
  bool v34; 
  const char *blocka; 

  v8 = whileStatBlock;
  type = sourcePos.type;
  bCanBreak = scrContext->m_compileGlob.bCanBreak;
  currentBreakStatement = scrContext->m_compileGlob.currentBreakStatement;
  bCanContinue = scrContext->m_compileGlob.bCanContinue;
  scrContext->m_compileGlob.bCanBreak = 0;
  scrContext->m_compileGlob.bCanContinue = 0;
  node = (scr_block_t *)v8->node;
  v34 = bCanContinue;
  currentContinueStatement = scrContext->m_compileGlob.currentContinueStatement;
  Scr_TransferBlock(block, node);
  EmitCreateLocalVars(scrContext, v8->block, whileSourcePos);
  if ( (signed int)*(&v8->node->objectIdValue + 1) > block->localVarsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 4439, ASSERT_TYPE_ASSERT, "( whileStatBlock->block->localVarsCreateCount <= block->localVarsCount )", (const char *)&queryFormat, "whileStatBlock->block->localVarsCreateCount <= block->localVarsCount") )
    __debugbreak();
  block->localVarsCreateCount = *(&v8->node->objectIdValue + 1);
  nextPos = TempMalloc(0i64);
  v15 = 0;
  v16 = EmitOrEvalExpression(scrContext, expr, &constValue, block);
  codePos = NULL;
  if ( v16 )
  {
    if ( constValue.value.type == VAR_INTEGER )
    {
      intValue = constValue.value.u.intValue != 0;
      constValue.value.u.intValue = intValue;
    }
    else
    {
      if ( constValue.value.type != VAR_FLOAT )
      {
        EmitValue(scrContext, &constValue);
        goto LABEL_13;
      }
      Scr_CastBool_NonInteger(scrContext, &constValue.value);
      intValue = constValue.value.u.intValue;
    }
    if ( !intValue )
      CompileError(scrContext, type, "conditional expression cannot be always false");
    v15 = 1;
  }
LABEL_13:
  breakChildBlocks = scrContext->m_compileGlob.breakChildBlocks;
  breakChildCount = scrContext->m_compileGlob.breakChildCount;
  breakBlock = scrContext->m_compileGlob.breakBlock;
  continueChildBlocks = scrContext->m_compileGlob.continueChildBlocks;
  continueChildCount = scrContext->m_compileGlob.continueChildCount;
  scrContext->m_compileGlob.continueChildBlocks = NULL;
  scrContext->m_compileGlob.breakBlock = v8->block;
  LODWORD(whileStatBlock) = 0;
  if ( v15 )
  {
    blocka = NULL;
    v20 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "EmitWhileStatement");
    scrContext->m_compileGlob.breakChildCount = (int *)&whileStatBlock;
  }
  else
  {
    EmitOpcode(scrContext, 0x72u, -1, 0);
    AddOpcodePos(scrContext, type, SOURCE_TYPE_NONE);
    v19 = (unsigned __int8 *)TempMalloc(2ui64);
    scrContext->m_compileGlob.codePos = v19;
    *(_WORD *)v19 = 0;
    codePos = (char *)scrContext->m_compileGlob.codePos;
    blocka = TempMalloc(0i64);
    v20 = NULL;
  }
  scrContext->m_compileGlob.breakChildBlocks = v20;
  childBlocks = v20;
  scrContext->m_compileGlob.bCanBreak = 1;
  scrContext->m_compileGlob.currentBreakStatement = NULL;
  scrContext->m_compileGlob.currentContinueStatement = NULL;
  scrContext->m_compileGlob.bCanContinue = 1;
  EmitStatement(scrContext, stmt, 0, 0, v8->block);
  if ( v8->node->type != 3 )
    v8->node->type = 0;
  scrContext->m_compileGlob.bCanBreak = 0;
  scrContext->m_compileGlob.bCanContinue = 0;
  ConnectContinueStatements(scrContext);
  EmitOpcode(scrContext, 0x1Bu, 0, 0);
  AddOpcodePos(scrContext, whileSourcePos.canonicalString, SOURCE_TYPE_NONE);
  if ( stmt.node->type == 52 )
    AddOpcodePos(scrContext, stmt.node[3].canonicalString, SOURCE_TYPE_BREAKPOINT);
  v21 = (unsigned __int8 *)TempMalloc(2ui64);
  v22 = nextPos;
  scrContext->m_compileGlob.codePos = v21;
  *(_WORD *)v21 = 0;
  *(_WORD *)scrContext->m_compileGlob.codePos = Scr_TrackJumpUshort(scrContext, (const char *)scrContext->m_compileGlob.codePos, v22, type);
  if ( codePos )
    *(_WORD *)codePos = Scr_TrackJumpUshort(scrContext, codePos, blocka, type);
  ConnectBreakStatements(scrContext);
  scrContext->m_compileGlob.bCanBreak = bCanBreak;
  scrContext->m_compileGlob.currentBreakStatement = currentBreakStatement;
  scrContext->m_compileGlob.bCanContinue = v34;
  scrContext->m_compileGlob.currentContinueStatement = currentContinueStatement;
  if ( v15 )
    Scr_InitFromChildBlocks(childBlocks, (int)whileStatBlock, block);
  scrContext->m_compileGlob.breakChildBlocks = breakChildBlocks;
  scrContext->m_compileGlob.breakChildCount = breakChildCount;
  scrContext->m_compileGlob.breakBlock = breakBlock;
  scrContext->m_compileGlob.continueChildBlocks = continueChildBlocks;
  scrContext->m_compileGlob.continueChildCount = continueChildCount;
}

/*
==============
InitThread
==============
*/
void InitThread(scrContext_t *scrContext, int type)
{
  scrContext->m_compileGlob.currentCaseStatement = NULL;
  scrContext->m_compileGlob.bCanBreak = 0;
  scrContext->m_compileGlob.currentBreakStatement = NULL;
  scrContext->m_compileGlob.bCanContinue = 0;
  scrContext->m_compileGlob.currentContinueStatement = NULL;
  scrContext->m_compileGlob.breakChildBlocks = NULL;
  scrContext->m_compileGlob.continueChildBlocks = NULL;
  if ( scrContext->m_compileGlob.firstThread[type] )
  {
    scrContext->m_compileGlob.firstThread[type] = 0;
    scrContext->m_compilePub.opcodePos = NULL;
    EmitOpcode(scrContext, 0x3Bu, 0, 0);
    if ( scrContext->m_varPub.developer && scrContext->m_compilePub.developer_statement != 3 )
      Scr_AddAssignmentPos(scrContext, (char *)scrContext->m_compilePub.opcodePos);
    AddOpcodePos(scrContext, 0, SOURCE_TYPE_NONE);
    AddOpcodePos(scrContext, 0xFFFFFFFE, SOURCE_TYPE_NONE);
  }
}

/*
==============
LinkFile
==============
*/
void LinkFile(scrContext_t *scrContext, unsigned int filePosId, unsigned int fileCountId)
{
  unsigned int v4; 
  unsigned int FirstSibling; 
  unsigned int Object; 
  unsigned int SiblingName; 
  unsigned int Variable; 
  scrContext_t *v10; 
  VariableValue *p_out; 
  VariableValue out; 
  VariableValue pos; 

  pos.type = VAR_UNDEFINED;
  pos.u.scriptCodePosValue = 0i64;
  v4 = fileCountId;
  FirstSibling = FindFirstSibling(scrContext, fileCountId);
  if ( FirstSibling )
  {
    do
    {
      Object = FindObject(scrContext, FirstSibling);
      if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3518, ASSERT_TYPE_ASSERT, "( threadCountId )", (const char *)&queryFormat, "threadCountId") )
        __debugbreak();
      SiblingName = GetSiblingName(scrContext, FirstSibling);
      Variable = FindVariable(scrContext, filePosId, SiblingName);
      v10 = scrContext;
      if ( Variable )
      {
        Scr_EvalVariable_Out(scrContext, Variable, &out);
        if ( out.type != VAR_CODEPOS && out.type != VAR_DEVELOPER_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3527, ASSERT_TYPE_ASSERT, "( pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS )", (const char *)&queryFormat, "pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS") )
          __debugbreak();
        if ( !out.u.scriptCodePosValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3531, ASSERT_TYPE_ASSERT, "( pos.u.codePosValue )", (const char *)&queryFormat, "pos.u.codePosValue") )
          __debugbreak();
        p_out = &out;
        v10 = scrContext;
      }
      else
      {
        p_out = &pos;
      }
      LinkThread(v10, Object, p_out, 1, (scr_string_t)0);
      FirstSibling = FindNextSibling(scrContext, FirstSibling);
    }
    while ( FirstSibling );
    v4 = fileCountId;
  }
  ClearObject(scrContext, v4);
}

/*
==============
LinkThread
==============
*/
void LinkThread(scrContext_t *scrContext, unsigned int threadCountId, VariableValue *pos, bool allowFarCall)
{
  unsigned int Variable; 
  int v9; 
  unsigned int v10; 
  VariableUnion *VariableValueAddress; 
  VariableType ValueType; 
  VariableType v13; 
  const char *scriptCodePosValue; 
  VariableValue out; 

  Variable = FindVariable(scrContext, threadCountId, 0);
  if ( Variable )
  {
    Scr_EvalVariable_Out(scrContext, Variable, &out);
    if ( out.type != VAR_INTEGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3425, ASSERT_TYPE_ASSERT, "( count.type == VAR_INTEGER )", (const char *)&queryFormat, "count.type == VAR_INTEGER") )
      __debugbreak();
    if ( out.u.intValue <= 0 )
    {
LABEL_30:
      RemoveVariable(scrContext, threadCountId, 0);
    }
    else
    {
      v9 = 1;
      while ( 1 )
      {
        v10 = FindVariable(scrContext, threadCountId, v9);
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3430, ASSERT_TYPE_ASSERT, "( valueId )", (const char *)&queryFormat, "valueId") )
          __debugbreak();
        VariableValueAddress = GetVariableValueAddress(scrContext, v10);
        ValueType = GetValueType(scrContext, v10);
        v13 = ValueType;
        if ( ValueType != VAR_CODEPOS && ValueType != VAR_DEVELOPER_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3434, ASSERT_TYPE_ASSERT, "( type == VAR_CODEPOS || type == VAR_DEVELOPER_CODEPOS )", (const char *)&queryFormat, "type == VAR_CODEPOS || type == VAR_DEVELOPER_CODEPOS") )
          __debugbreak();
        scriptCodePosValue = (const char *)VariableValueAddress->scriptCodePosValue;
        if ( !Scr_IsInOpcodeMemory(scrContext, VariableValueAddress->codePosValue) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3446, ASSERT_TYPE_ASSERT, "(Scr_IsInOpcodeMemory( scrContext, codePosValue ))", (const char *)&queryFormat, "Scr_IsInOpcodeMemory( scrContext, codePosValue )") )
          __debugbreak();
        if ( pos->type == VAR_DEVELOPER_CODEPOS )
        {
          if ( !scrContext->m_varPub.developer_script && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3451, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.developer_script )", (const char *)&queryFormat, "scrContext.m_varPub.developer_script") )
            __debugbreak();
          if ( v13 == VAR_CODEPOS )
            break;
        }
        if ( pos->type && (allowFarCall || (*((unsigned __int8 *)scriptCodePosValue + 2) | ((*((unsigned __int8 *)scriptCodePosValue + 1) | (*(unsigned __int8 *)scriptCodePosValue << 8)) << 8)) != 1) )
        {
          Scr_SetRelativeCodepos((unsigned __int8 *)VariableValueAddress->vectorValue, pos->u.codePosValue);
          RemoveVariable(scrContext, threadCountId, v9);
        }
        else
        {
          CompileError2_WithSourceLine(scrContext, scriptCodePosValue, "unknown function");
        }
        if ( v9++ >= out.u.intValue )
          goto LABEL_30;
      }
      CompileError2(scrContext, scriptCodePosValue, "normal script cannot reference a function in a /# ... #/ comment");
    }
  }
}

/*
==============
Scr_AddThreadToFunctionList
==============
*/
void Scr_AddThreadToFunctionList(scrContext_t *scrContext, const char *threadName, const char *codePosValue)
{
  __int64 functionCount; 
  __int64 m_scrDebugFunctionCount; 
  const char *v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 

  functionCount = scrContext->m_parserPub.functionCount;
  m_scrDebugFunctionCount = scrContext->m_scrDebugFunctionCount;
  if ( (unsigned int)functionCount >= (unsigned int)m_scrDebugFunctionCount )
  {
    Com_Printf(24, "SCR_DEBUG_FUNCTION_COUNT = %d\n", m_scrDebugFunctionCount);
    v8 = "client";
    if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
      v8 = "server";
    Com_Printf(24, "scrParserPub[%s].functionList dump\n", v8);
    Com_Printf(24, "------------------------------\n");
    v9 = scrContext->m_scrDebugFunctionCount;
    if ( v9 )
    {
      v10 = v9;
      v11 = 0i64;
      do
      {
        Com_Printf(24, "%s::%s\n", scrContext->m_parserPub.functionList[v11].filenameExt, scrContext->m_parserPub.functionList[v11].name);
        ++v11;
        --v10;
      }
      while ( v10 );
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144095D60, 1142i64);
  }
  v12 = SL_ConvertToString(scrContext->m_compilePub.scriptFilenameExt);
  v13 = functionCount;
  scrContext->m_parserPub.functionList[v13].filenameExt = v12;
  scrContext->m_parserPub.functionList[v13].name = threadName;
  scrContext->m_parserPub.functionList[v13].codePosValue = codePosValue;
  scrContext->m_parserPub.functionCount = functionCount + 1;
}

/*
==============
Scr_ClearTrackedJumps
==============
*/
void Scr_ClearTrackedJumps(scrContext_t *scrContext, unsigned __int8 *pos)
{
  int m_jmpDepth; 
  int v5; 
  int v6; 
  const char **p_tgt_addr; 
  int v8; 

  m_jmpDepth = scrContext->m_jmpDepth;
  if ( m_jmpDepth > 0 )
  {
    v5 = m_jmpDepth - 1;
    if ( v5 >= scrContext->m_lockJmpDepth )
    {
      v6 = v5 + 1;
      p_tgt_addr = &scrContext->m_jmpStack[v5].tgt_addr;
      do
      {
        if ( *p_tgt_addr <= (const char *)pos )
        {
          v8 = scrContext->m_jmpDepth;
          if ( v8 - v5 - 1 > 0 )
          {
            memmove_0(&scrContext->m_jmpStack[v5], &scrContext->m_jmpStack[v6], 32i64 * (scrContext->m_jmpDepth - v5 - 1));
            v8 = scrContext->m_jmpDepth;
          }
          scrContext->m_jmpDepth = v8 - 1;
        }
        --v5;
        --v6;
        p_tgt_addr -= 4;
      }
      while ( v5 >= scrContext->m_lockJmpDepth );
    }
  }
}

/*
==============
Scr_CodePosToOffset
==============
*/
__int64 Scr_CodePosToOffset(const scrContext_t *scrContext, const char *codePos)
{
  signed __int64 v4; 

  if ( codePos < scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1359, ASSERT_TYPE_ASSERT, "(codePos >= scrContext.m_varPub.programBuffer)", (const char *)&queryFormat, "codePos >= scrContext.m_varPub.programBuffer") )
    __debugbreak();
  v4 = codePos - scrContext->m_varPub.programBuffer;
  if ( (v4 & 0xFFFFFF) != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1361, ASSERT_TYPE_ASSERT, "(( ( offset ) & SCRIPT_UINT3_MASK ) == ( offset ))", (const char *)&queryFormat, "( ( offset ) & SCRIPT_UINT3_MASK ) == ( offset )") )
    __debugbreak();
  return (unsigned int)v4;
}

/*
==============
Scr_CompileRemoveRefToString
==============
*/
void Scr_CompileRemoveRefToString(const scrContext_t *scrContext, scr_string_t stringValue)
{
  if ( !stringValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 640, ASSERT_TYPE_ASSERT, "( stringValue != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stringValue != NULL_SCR_STRING") )
    __debugbreak();
  if ( !scrContext->m_compileGlob.bConstRefCount && scrContext->m_compilePub.developer_statement != 3 )
    SL_RemoveRefToString(stringValue);
}

/*
==============
Scr_CompileStatement
==============
*/
void Scr_CompileStatement(scrContext_t *scrContext, sval_u parseData)
{
  EmitStatement(scrContext, parseData, 0, 0, NULL);
  EmitOpcode(scrContext, 0x9Bu, 0, 0);
}

/*
==============
Scr_Compiler_DevPrintCompileStack
==============
*/
void Scr_Compiler_DevPrintCompileStack(scrContext_t *scrContext)
{
  int v2; 
  scr_string_t *scriptCompileFileList; 
  int v4; 
  __int64 v5; 
  scr_string_t v6; 
  const char *v7; 
  char v8[1024]; 

  v2 = 0;
  if ( scrContext->m_compilePub.scriptCompileFileListCount )
  {
    scriptCompileFileList = scrContext->m_compilePub.scriptCompileFileList;
    do
    {
      v4 = 1023;
      v5 = 0i64;
      if ( v2 < 1023 )
        v4 = v2;
      if ( v4 > 0 )
      {
        v5 = v4;
        memset(v8, 43, v4);
      }
      v6 = *scriptCompileFileList;
      v8[v5] = 0;
      v7 = SL_ConvertToString(v6);
      Com_Printf(1, "%s%s\n", v8, v7);
      ++v2;
      ++scriptCompileFileList;
    }
    while ( v2 < scrContext->m_compilePub.scriptCompileFileListCount );
  }
}

/*
==============
Scr_EmitFunction_Precompiled
==============
*/
void Scr_EmitFunction_Precompiled(scrContext_t *scrContext, scr_string_t filenameExt, unsigned int threadName, char *codePos)
{
  unsigned int Variable; 
  unsigned int ObjectInternal; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  VariableType type; 
  int intValue; 
  unsigned int NewVariable; 
  VariableValue value; 
  VariableValue out; 
  VariableValue v22; 

  if ( !scrContext->m_compileGlob.precachescriptList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2628, ASSERT_TYPE_ASSERT, "( pScrCompileGlob->precachescriptList )", (const char *)&queryFormat, "pScrCompileGlob->precachescriptList") )
    __debugbreak();
  if ( FindVariable(scrContext, scrContext->m_compilePub.scriptsPos, filenameExt) )
  {
    SL_RemoveRefToString(filenameExt);
  }
  else
  {
    scrContext->m_compileGlob.precachescriptList->filenameExt = filenameExt;
    ++scrContext->m_compileGlob.precachescriptList;
  }
  Variable = GetVariable(scrContext, scrContext->m_compilePub.scriptsPos, filenameExt);
  ObjectInternal = GetObjectInternal(scrContext, Variable);
  v10 = GetVariable(scrContext, scrContext->m_compilePub.scriptsCount, filenameExt);
  v11 = GetObjectInternal(scrContext, v10);
  v12 = FindVariable(scrContext, scrContext->m_compilePub.loadedscripts, filenameExt);
  Scr_EvalVariable_Out(scrContext, v12, &out);
  if ( out.type )
  {
    v13 = FindVariable(scrContext, ObjectInternal, threadName);
    if ( !v13 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440957D0, 1141i64);
    Scr_EvalVariable_Out(scrContext, v13, &v22);
    if ( v22.type != VAR_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2668, ASSERT_TYPE_ASSERT, "( ( pos.type == VAR_CODEPOS ) )", "%s\n\t( pos.type ) = %i", "( pos.type == VAR_CODEPOS )", (unsigned __int8)v22.type) )
      __debugbreak();
    if ( !v22.u.scriptCodePosValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2669, ASSERT_TYPE_ASSERT, "( pos.u.codePosValue )", (const char *)&queryFormat, "pos.u.codePosValue") )
      __debugbreak();
    Scr_SetRelativeCodepos((unsigned __int8 *)codePos, v22.u.codePosValue);
  }
  else
  {
    v14 = GetVariable(scrContext, v11, threadName);
    v15 = GetObjectInternal(scrContext, v14);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2676, ASSERT_TYPE_ASSERT, "( threadCountId )", (const char *)&queryFormat, "threadCountId") )
      __debugbreak();
    v16 = GetVariable(scrContext, v15, 0);
    Scr_EvalVariable_Out(scrContext, v16, &value);
    type = value.type;
    if ( value.type == VAR_UNDEFINED )
      goto LABEL_27;
    if ( value.type != VAR_INTEGER )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2680, ASSERT_TYPE_ASSERT, "( (count.type == VAR_UNDEFINED) || (count.type == VAR_INTEGER) )", (const char *)&queryFormat, "(count.type == VAR_UNDEFINED) || (count.type == VAR_INTEGER)") )
        __debugbreak();
      type = value.type;
    }
    if ( type )
    {
      intValue = value.u.intValue;
    }
    else
    {
LABEL_27:
      intValue = 0;
      value.type = VAR_INTEGER;
      value.u.intValue = 0;
    }
    NewVariable = GetNewVariable(scrContext, v15, intValue + 1);
    out.u.scriptCodePosValue = (unsigned __int64)codePos;
    out.type = VAR_CODEPOS;
    SetNewVariableValue(scrContext, NewVariable, &out);
    ++value.u.intValue;
    SetVariableValue(scrContext, v16, &value);
  }
}

/*
==============
Scr_FindLocalVarIndex
==============
*/
__int64 Scr_FindLocalVarIndex(scrContext_t *scrContext, scr_string_t name, sval_u sourcePos, bool create, scr_block_t *block, bool emitOpcode)
{
  int type; 
  unsigned int v8; 
  int v9; 
  unsigned int LocalCanonicalString; 
  scr_localVar_t *localVars; 
  int localVarsCreateCount; 
  unsigned int canonicalStr; 
  unsigned __int8 *v14; 
  bool v15; 
  unsigned __int8 v16; 
  unsigned __int8 *v17; 

  type = sourcePos.type;
  v8 = name;
  if ( scrContext->m_compilePub.developer_statement == 3 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1564, ASSERT_TYPE_ASSERT, "( scrContext.m_compilePub.developer_statement != SCR_DEV_EVALUATE )", (const char *)&queryFormat, "scrContext.m_compilePub.developer_statement != SCR_DEV_EVALUATE") )
      __debugbreak();
    v8 = name;
  }
  if ( !block )
    goto $unreachable;
  v9 = 0;
  LocalCanonicalString = SL_GetLocalCanonicalString(v8);
  if ( block->localVarsCount <= 0 )
  {
LABEL_18:
    v15 = create;
LABEL_19:
    if ( !v15 || scrContext->m_compileGlob.forceNotCreate )
    {
LABEL_21:
      CompileError(scrContext, type, "uninitialised variable");
      return 0i64;
    }
$unreachable:
    CompileError(scrContext, type, "unreachable code");
    return 0i64;
  }
  localVars = block->localVars;
  while ( 1 )
  {
    localVarsCreateCount = block->localVarsCreateCount;
    if ( v9 == localVarsCreateCount )
    {
      block->localVarsCreateCount = localVarsCreateCount + 1;
      if ( emitOpcode )
        EmitOpcode(scrContext, 0x30u, 0, 0);
      canonicalStr = localVars->canonicalStr;
      if ( localVars->canonicalStr > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)canonicalStr, "unsigned", localVars->canonicalStr) )
        __debugbreak();
      v14 = (unsigned __int8 *)TempMalloc(2ui64);
      scrContext->m_compileGlob.codePos = v14;
      *(_WORD *)v14 = canonicalStr;
      if ( emitOpcode )
        AddOpcodePos(scrContext, localVars->sourcePos, SOURCE_TYPE_NONE);
    }
    if ( localVars->canonicalStr == LocalCanonicalString )
      break;
    ++v9;
    ++localVars;
    if ( v9 >= block->localVarsCount )
      goto LABEL_18;
  }
  Scr_CompileRemoveRefToString(scrContext, name);
  v16 = 1 << (v9 & 7);
  v17 = &block->localVarsInitBits[(__int64)v9 >> 3];
  if ( (*v17 & v16) != 0 )
    goto LABEL_26;
  v15 = create;
  if ( !create )
    goto LABEL_21;
  if ( scrContext->m_compileGlob.forceNotCreate )
    goto LABEL_19;
  *v17 |= v16;
LABEL_26:
  if ( block->localVarsCreateCount - 1 < v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1613, ASSERT_TYPE_ASSERT, "( (block->localVarsCreateCount - 1) >= i )", (const char *)&queryFormat, "(block->localVarsCreateCount - 1) >= i") )
    __debugbreak();
  return (unsigned int)(block->localVarsCreateCount - v9 - 1);
}

/*
==============
Scr_FixJump
==============
*/
void Scr_FixJump(scrContext_t *scrContext)
{
  const char **p_nxt_addr; 
  int v3; 
  unsigned __int8 *v4; 

  if ( scrContext->m_jmpDepth > 0 )
  {
    p_nxt_addr = &scrContext->m_jmpStack[0].nxt_addr;
    v3 = 0;
    do
    {
      if ( p_nxt_addr[1] == TempMalloc(0i64) )
      {
        v4 = (unsigned __int8 *)(scrContext->m_compilePub.opcodePos - (unsigned __int8 *)*p_nxt_addr);
        if ( *((_BYTE *)p_nxt_addr + 16) )
        {
          *(_DWORD *)*(p_nxt_addr - 1) = truncate_cast<int,unsigned __int64>(scrContext->m_compilePub.opcodePos - (unsigned __int8 *)*p_nxt_addr);
        }
        else
        {
          if ( (unsigned __int64)v4 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned __int16)v4, "unsigned", scrContext->m_compilePub.opcodePos - (unsigned __int8 *)*p_nxt_addr) )
            __debugbreak();
          *(_WORD *)*(p_nxt_addr - 1) = (_WORD)v4;
        }
      }
      ++v3;
      p_nxt_addr += 4;
    }
    while ( v3 < scrContext->m_jmpDepth );
    Scr_ClearTrackedJumps(scrContext, scrContext->m_compilePub.opcodePos);
  }
}

/*
==============
Scr_GetBuiltinType
==============
*/
__int64 Scr_GetBuiltinType(VariableType type)
{
  if ( type == VAR_CODEPOS )
    return 0i64;
  if ( type != VAR_DEVELOPER_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2721, ASSERT_TYPE_ASSERT, "( type == VAR_DEVELOPER_CODEPOS )", (const char *)&queryFormat, "type == VAR_DEVELOPER_CODEPOS") )
    __debugbreak();
  return 1i64;
}

/*
==============
Scr_GetCodePositionType
==============
*/
char Scr_GetCodePositionType(BuiltinType type)
{
  if ( type == BUILTIN_ANY )
    return 7;
  if ( type != BUILTIN_DEVELOPER_ONLY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 2735, ASSERT_TYPE_ASSERT, "( type == BuiltinType::BUILTIN_DEVELOPER_ONLY )", (const char *)&queryFormat, "type == BuiltinType::BUILTIN_DEVELOPER_ONLY") )
    __debugbreak();
  return 14;
}

/*
==============
Scr_GetCumulOffset
==============
*/
__int64 Scr_GetCumulOffset(const scrContext_t *scrContext)
{
  __int64 result; 

  result = (unsigned int)scrContext->m_compileGlob.cumulOffset;
  if ( (int)result < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1685, ASSERT_TYPE_ASSERT, "( ( scrContext.m_compileGlob.cumulOffset >= 0 ) )", "%s\n\t( scrContext.m_compileGlob.cumulOffset ) = %i", "( scrContext.m_compileGlob.cumulOffset >= 0 )", scrContext->m_compileGlob.cumulOffset) )
      __debugbreak();
    return (unsigned int)scrContext->m_compileGlob.cumulOffset;
  }
  return result;
}

/*
==============
Scr_GetPauseLocalVars
==============
*/
unsigned __int16 *Scr_GetPauseLocalVars(const scrContext_t *scrContext)
{
  scr_block_t *pauseBlock; 
  __int64 localVarsCreateCount; 
  _WORD *v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 i; 
  scr_block_t *v9; 
  unsigned int v10; 

  pauseBlock = scrContext->m_compilePub.pauseBlock;
  if ( !pauseBlock )
    return 0i64;
  localVarsCreateCount = pauseBlock->localVarsCreateCount;
  if ( !(_DWORD)localVarsCreateCount )
    return 0i64;
  v4 = Scr_Mem_DebugAllocAlign(scrContext, 2 * localVarsCreateCount + 2, 2ui64, "Scr_GetPauseLocalVars");
  v5 = 0;
  v6 = localVarsCreateCount;
  if ( (int)localVarsCreateCount > 0 )
  {
    v7 = 24i64;
    for ( i = 0i64; i < v6; ++i )
    {
      v9 = scrContext->m_compilePub.pauseBlock;
      v10 = *(ScriptAbort *)((char *)&v9->abortLevel + v7);
      if ( v10 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v10, "unsigned", *(unsigned int *)((char *)&v9->abortLevel + v7)) )
        __debugbreak();
      v4[i] = v10;
      if ( !(_WORD)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 1709, ASSERT_TYPE_ASSERT, "( localVars[localVarIndex] )", (const char *)&queryFormat, "localVars[localVarIndex]") )
        __debugbreak();
      v7 += 8i64;
    }
    v5 = v6;
  }
  v4[v5] = 0;
  return v4;
}

/*
==============
Scr_PrintCompileResourceUsage
==============
*/
void Scr_PrintCompileResourceUsage(const scrContext_t *scrContext)
{
  void (*v1)(int, const char *, ...); 
  int v2; 
  unsigned int v4; 
  bool v5; 
  __int64 v6; 

  v1 = Com_PrintWarning;
  v2 = 100 * scrContext->m_compilePub.precachedEntriesHighWatermark;
  v4 = (100 * (unsigned int)scrContext->m_compilePub.scriptCompileFileListHighWatermark) >> 8;
  v5 = v2 >= 270000;
  if ( v4 > 0x5A )
    v5 = 1;
  if ( !v5 )
    v1 = Com_Printf;
  v1(24, "Script Compiler Resource Usage (used/available)\n");
  v1(24, "\tprecachedEntries: %i/%i (%i %%)\n", (unsigned int)scrContext->m_compilePub.precachedEntriesHighWatermark, 3000i64, v2 / 3000);
  LODWORD(v6) = v4;
  v1(24, "\tcompileFileList: %u/%u (%u %%)\n", scrContext->m_compilePub.scriptCompileFileListHighWatermark, 256i64, v6);
}

/*
==============
Scr_SetThreadPosition
==============
*/
void Scr_SetThreadPosition(scrContext_t *scrContext, sval_u val)
{
  unsigned int Variable; 
  const char *v5; 
  const char *v6; 
  __int64 functionCount; 
  const char *v8; 
  __int64 m_scrDebugFunctionCount; 
  const char *v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  const char *v14; 
  __int64 v15; 

  Variable = FindVariable(scrContext, scrContext->m_compileGlob.filePosId, val.node[1].canonicalString);
  v5 = TempMalloc(0i64);
  GetVariableValueAddress(scrContext, Variable)->scriptCodePosValue = (unsigned __int64)v5;
  v6 = SL_ConvertToString(val.node[1].stringValue);
  functionCount = scrContext->m_parserPub.functionCount;
  v8 = v6;
  m_scrDebugFunctionCount = scrContext->m_scrDebugFunctionCount;
  if ( (unsigned int)functionCount >= (unsigned int)m_scrDebugFunctionCount )
  {
    Com_Printf(24, "SCR_DEBUG_FUNCTION_COUNT = %d\n", m_scrDebugFunctionCount);
    v10 = "client";
    if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
      v10 = "server";
    Com_Printf(24, "scrParserPub[%s].functionList dump\n", v10);
    Com_Printf(24, "------------------------------\n");
    v11 = scrContext->m_scrDebugFunctionCount;
    if ( v11 )
    {
      v12 = 0i64;
      v13 = v11;
      do
      {
        Com_Printf(24, "%s::%s\n", scrContext->m_parserPub.functionList[v12].filenameExt, scrContext->m_parserPub.functionList[v12].name);
        ++v12;
        --v13;
      }
      while ( v13 );
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144095D60, 1142i64);
  }
  v14 = SL_ConvertToString(scrContext->m_compilePub.scriptFilenameExt);
  v15 = functionCount;
  scrContext->m_parserPub.functionList[v15].filenameExt = v14;
  scrContext->m_parserPub.functionList[v15].name = v8;
  scrContext->m_parserPub.functionList[v15].codePosValue = v5;
  scrContext->m_parserPub.functionCount = functionCount + 1;
}

/*
==============
Scr_SetThreadPosition_Precompiled
==============
*/
void Scr_SetThreadPosition_Precompiled(scrContext_t *scrContext, unsigned int threadName, const char *codePos)
{
  unsigned int NewVariable; 
  VariableValue value; 

  NewVariable = GetNewVariable(scrContext, scrContext->m_compileGlob.filePosId, threadName);
  value.type = VAR_CODEPOS;
  value.u.scriptCodePosValue = (unsigned __int64)codePos;
  SetNewVariableValue(scrContext, NewVariable, &value);
}

/*
==============
Scr_TrackJump
==============
*/
__int64 Scr_TrackJump(scrContext_t *scrContext, const char *pos, const char *nextPos, bool intJmp, unsigned int sourcePos)
{
  char *v9; 
  __int64 m_jmpDepth; 
  unsigned int v11; 
  const char *v12; 
  __int64 v13; 

  v9 = TempMalloc(0i64);
  m_jmpDepth = scrContext->m_jmpDepth;
  v11 = (_DWORD)v9 - (_DWORD)nextPos;
  v12 = v9;
  if ( (unsigned int)m_jmpDepth >= 0x30 )
  {
    CompileError(scrContext, sourcePos, "Function jump complexity exceeded current limit.  Please have a programmer increase JMP_DEPTH.  See log for details.");
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 107, ASSERT_TYPE_ASSERT, "(jmpdepth < JMP_DEPTH)", (const char *)&queryFormat, "jmpdepth < JMP_DEPTH") )
      __debugbreak();
  }
  v13 = m_jmpDepth;
  scrContext->m_jmpStack[v13].jmp_addr = pos;
  scrContext->m_jmpStack[v13].nxt_addr = nextPos;
  scrContext->m_jmpStack[v13].tgt_addr = v12;
  scrContext->m_jmpStack[v13].intJmp = intJmp;
  if ( ++scrContext->m_jmpDepth == 36 )
    Com_PrintWarning(24, "Scr_TrackJump reached 75%% of the max depth, please increase the max depth for safety\n");
  return v11;
}

/*
==============
Scr_TrackJumpUshort
==============
*/
__int64 Scr_TrackJumpUshort(scrContext_t *scrContext, const char *pos, const char *nextPos, unsigned int sourcePos)
{
  int v4; 
  unsigned __int16 v5; 

  v4 = Scr_TrackJump(scrContext, pos, nextPos, 0, sourcePos);
  v5 = v4;
  if ( (v4 < 0 || (unsigned int)v4 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v4, "signed", v4) )
    __debugbreak();
  return v5;
}

/*
==============
ScriptCompile
==============
*/
void ScriptCompile(scrContext_t *scrContext, sval_u val, unsigned int filePosId, unsigned int fileCountId, unsigned int scriptId, PrecacheEntry *entries, int entriesCount, scr_string_t name, int scopeCount)
{
  PrecacheEntry *v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int16 scriptCompileFileListCount; 
  bool v15; 
  unsigned __int16 v16; 
  int far_function_count; 
  int v18; 
  int precachedEntriesHighWatermark; 
  int v20; 
  char *v21; 
  VariableUnion v22; 
  unsigned int v23; 
  VariableUnion u; 
  __int64 v25; 
  int v26; 
  scr_string_t filenameExt; 
  const char *v28; 
  unsigned int ScriptInternal; 
  __int64 v30; 
  PrecacheEntry *v31; 
  unsigned int NextSibling; 
  signed int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int ObjectInternal; 
  unsigned int FirstSibling; 
  unsigned int Object; 
  unsigned int SiblingName; 
  unsigned int Variable; 
  scrContext_t *v42; 
  VariableValue *p_out; 
  const char *v44; 
  __int64 v45; 
  VariableValue v46; 
  VariableValue value; 
  VariableValue out; 
  VariableValue v49; 
  __int64 v50; 
  int entriesCounta; 
  unsigned int namea; 

  v9 = NULL;
  scrContext->m_compileGlob.filePosId = filePosId;
  scrContext->m_compileGlob.fileCountId = fileCountId;
  scrContext->m_compileGlob.bConstRefCount = 0;
  v10 = fileCountId;
  scrContext->m_animPub.animTreeIndex = 0;
  v11 = filePosId;
  scrContext->m_compilePub.developer_statement = 0;
  scriptCompileFileListCount = scrContext->m_compilePub.scriptCompileFileListCount;
  v15 = scriptCompileFileListCount < 0x100u;
  if ( scriptCompileFileListCount == 256 )
  {
    Scr_Compiler_DevPrintCompileStack(scrContext);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144096D00, 6526i64, 256i64);
    scriptCompileFileListCount = scrContext->m_compilePub.scriptCompileFileListCount;
    v15 = scriptCompileFileListCount < 0x100u;
  }
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 6133, ASSERT_TYPE_ASSERT, "(unsigned)( pScrCompilePub.scriptCompileFileListCount ) < (unsigned)( ( sizeof( *array_counter( pScrCompilePub.scriptCompileFileList ) ) + 0 ) )", "pScrCompilePub.scriptCompileFileListCount doesn't index ARRAY_COUNT( pScrCompilePub.scriptCompileFileList )\n\t%i not in [0, %i)", scriptCompileFileListCount, 256) )
    __debugbreak();
  scrContext->m_compilePub.scriptCompileFileList[scrContext->m_compilePub.scriptCompileFileListCount] = name;
  v16 = scrContext->m_compilePub.scriptCompileFileListCount + 1;
  scrContext->m_compilePub.scriptCompileFileListCount = v16;
  if ( v16 > scrContext->m_compilePub.scriptCompileFileListHighWatermark )
    scrContext->m_compilePub.scriptCompileFileListHighWatermark = v16;
  far_function_count = scrContext->m_compilePub.far_function_count;
  if ( far_function_count )
    v9 = &entries[entriesCount];
  v18 = far_function_count + entriesCount;
  precachedEntriesHighWatermark = v18;
  if ( scrContext->m_compilePub.precachedEntriesHighWatermark > v18 )
    precachedEntriesHighWatermark = scrContext->m_compilePub.precachedEntriesHighWatermark;
  scrContext->m_compilePub.precachedEntriesHighWatermark = precachedEntriesHighWatermark;
  if ( v18 > 3000 )
  {
    Scr_Compiler_DevPrintCompileStack(scrContext);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144096F70, 1143i64, 3000i64);
  }
  scrContext->m_compileGlob.precachescriptListStart = v9;
  scrContext->m_compileGlob.precachescriptList = v9;
  EmitIncludeList(scrContext, *val.node);
  EmitThreadList(scrContext, val.node[1]);
  v20 = v18 - scrContext->m_compilePub.far_function_duplicate_includes;
  entriesCounta = v20;
  ClearObject(scrContext, scrContext->m_compilePub.scriptsDefine);
  v21 = TempMalloc(0i64);
  scrContext->m_compilePub.programLen = truncate_cast<int,__int64>(v21 - scrContext->m_varPub.programBuffer);
  Scr_ShutdownAllocNode(scrContext);
  Scr_Mem_TempClear(scrContext);
  if ( scrContext->m_compilePub.far_function_count - scrContext->m_compilePub.far_function_duplicate_includes != scrContext->m_compileGlob.precachescriptList - v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 6265, ASSERT_TYPE_ASSERT, "( (pScrCompilePub->far_function_count - pScrCompilePub->far_function_duplicate_includes) == pScrCompileGlob->precachescriptList - precachescriptList )", (const char *)&queryFormat, "(pScrCompilePub->far_function_count - pScrCompilePub->far_function_duplicate_includes) == pScrCompileGlob->precachescriptList - precachescriptList") )
    __debugbreak();
  v22.scriptCodePosValue = truncate_cast<int,__int64>(scrContext->m_compileGlob.precachescriptList - v9);
  namea = AllocObject(scrContext);
  v23 = namea;
  v46.u = v22;
  u = v22;
  if ( v22.intValue <= 0 )
  {
LABEL_39:
    ClearObject(scrContext, v23);
    RemoveRefToEmptyObject(scrContext, v23);
    if ( !scrContext->m_varPub.error_message )
    {
      out.type = VAR_UNDEFINED;
      out.u.scriptCodePosValue = 0i64;
      FirstSibling = FindFirstSibling(scrContext, v10);
      if ( FirstSibling )
      {
        do
        {
          Object = FindObject(scrContext, FirstSibling);
          if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3518, ASSERT_TYPE_ASSERT, "( threadCountId )", (const char *)&queryFormat, "threadCountId") )
            __debugbreak();
          SiblingName = GetSiblingName(scrContext, FirstSibling);
          Variable = FindVariable(scrContext, v11, SiblingName);
          v42 = scrContext;
          if ( Variable )
          {
            Scr_EvalVariable_Out(scrContext, Variable, &v46);
            if ( v46.type != VAR_CODEPOS && v46.type != VAR_DEVELOPER_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3527, ASSERT_TYPE_ASSERT, "( pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS )", (const char *)&queryFormat, "pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS") )
              __debugbreak();
            if ( !v46.u.scriptCodePosValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 3531, ASSERT_TYPE_ASSERT, "( pos.u.codePosValue )", (const char *)&queryFormat, "pos.u.codePosValue") )
              __debugbreak();
            p_out = &v46;
            v42 = scrContext;
          }
          else
          {
            p_out = &out;
          }
          LinkThread(v42, Object, p_out, 1);
          FirstSibling = FindNextSibling(scrContext, FirstSibling);
        }
        while ( FirstSibling );
        v10 = fileCountId;
      }
      ClearObject(scrContext, v10);
    }
    v49.type = VAR_INTEGER;
    SetVariableValue(scrContext, scriptId, &v49);
    if ( !scrContext->m_compilePub.scriptCompileFileListCount )
    {
      LODWORD(v45) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 6147, ASSERT_TYPE_ASSERT, "( pScrCompilePub.scriptCompileFileListCount ) > ( 0 )", "pScrCompilePub.scriptCompileFileListCount > 0\n\t%i, %i", v45, 0i64) )
        __debugbreak();
    }
    --scrContext->m_compilePub.scriptCompileFileListCount;
  }
  else
  {
    v25 = 0i64;
    v26 = scopeCount + 1;
    v50 = 0i64;
    while ( 1 )
    {
      filenameExt = v9->filenameExt;
      ProfLoad_End();
      v28 = SL_ConvertToString(filenameExt);
      ScriptInternal = Scr_LoadScriptInternal(scrContext, v28, entries, v20, v26);
      ProfLoad_Begin("ScriptCompile");
      if ( !ScriptInternal )
        break;
      SL_RemoveRefToString(filenameExt);
      if ( v9->include )
      {
        v30 = v25 + 1;
        if ( v25 + 1 < (__int64)u.vectorValue )
        {
          v31 = v9 + 1;
          while ( v31->include )
          {
            if ( v31->filenameExt == filenameExt )
            {
              CompileError(scrContext, v31->sourcePos, "Duplicate #include");
              return;
            }
            ++v30;
            ++v31;
            if ( v30 >= (__int64)u.vectorValue )
              break;
          }
        }
        v9->include = 0;
        value.type = VAR_CODEPOS;
        NextSibling = FindFirstSibling(scrContext, ScriptInternal);
        if ( NextSibling )
        {
          do
          {
            Scr_EvalVariable_Out(scrContext, NextSibling, &out);
            if ( out.type != VAR_CODEPOS && out.type != VAR_DEVELOPER_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compiler.cpp", 6343, ASSERT_TYPE_ASSERT, "( (includePos.type == VAR_CODEPOS) || (includePos.type == VAR_DEVELOPER_CODEPOS) )", (const char *)&queryFormat, "(includePos.type == VAR_CODEPOS) || (includePos.type == VAR_DEVELOPER_CODEPOS)") )
              __debugbreak();
            v33 = GetSiblingName(scrContext, NextSibling);
            v34 = FindVariable(scrContext, filePosId, v33);
            if ( v34 )
              CheckThreadPosition(scrContext, v34, (scr_string_t)v33, v9->sourcePos);
            v35 = GetVariable(scrContext, namea, v33);
            CheckThreadPosition(scrContext, v35, (scr_string_t)v33, v9->sourcePos);
            value.u = *GetVariableValueAddress(scrContext, NextSibling);
            SetNewVariableValue(scrContext, v35, &value);
            v36 = GetVariable(scrContext, fileCountId, v33);
            ObjectInternal = GetObjectInternal(scrContext, v36);
            LinkThread(scrContext, ObjectInternal, &out, 0);
            RemoveVariable(scrContext, fileCountId, v33);
            NextSibling = FindNextSibling(scrContext, NextSibling);
          }
          while ( NextSibling );
          u = v46.u;
          v25 = v50;
          v20 = entriesCounta;
        }
      }
      ++v25;
      ++v9;
      v50 = v25;
      if ( v25 >= (__int64)u.vectorValue )
      {
        v11 = filePosId;
        v23 = namea;
        v10 = fileCountId;
        goto LABEL_39;
      }
      v26 = scopeCount + 1;
    }
    v44 = SL_ConvertToString(filenameExt);
    CompileError(scrContext, v9->sourcePos, "Could not find script '%s'", v44);
  }
}

