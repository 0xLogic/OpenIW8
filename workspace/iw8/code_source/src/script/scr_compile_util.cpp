/*
==============
Scr_CreateVector
==============
*/

void __fastcall Scr_CreateVector(scrContext_t *scrContext, VariableCompileValue *constValue, VariableValue *value)
{
  ?Scr_CreateVector@@YAXAEAUscrContext_t@@QEAUVariableCompileValue@@PEAUVariableValue@@@Z(scrContext, constValue, value);
}

/*
==============
Scr_PopValue
==============
*/

void __fastcall Scr_PopValue(scrContext_t *scrContext)
{
  ?Scr_PopValue@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CheckMaxSwitchCases
==============
*/

void __fastcall Scr_CheckMaxSwitchCases(int count)
{
  ?Scr_CheckMaxSwitchCases@@YAXH@Z(count);
}

/*
==============
Scr_AppendChildBlocks
==============
*/

void __fastcall Scr_AppendChildBlocks(scr_block_t **childBlocks, int childCount, scr_block_t *block)
{
  ?Scr_AppendChildBlocks@@YAXQEAPEAUscr_block_t@@HPEAU1@@Z(childBlocks, childCount, block);
}

/*
==============
Scr_GetFunctionFromTable
==============
*/

unsigned int __fastcall Scr_GetFunctionFromTable(const scrContext_t *scrContext, const char **pName, BuiltinType *outType, const BuiltinFunctionTable *functionTable)
{
  return ?Scr_GetFunctionFromTable@@YAIAEBUscrContext_t@@PEAPEBDPEAW4BuiltinType@@PEBUBuiltinFunctionTable@@@Z(scrContext, pName, outType, functionTable);
}

/*
==============
Scr_MergeChildBlocks
==============
*/

void __fastcall Scr_MergeChildBlocks(scr_block_t **childBlocks, int childCount, const scr_block_t *block)
{
  ?Scr_MergeChildBlocks@@YAXQEAPEAUscr_block_t@@HPEBU1@@Z(childBlocks, childCount, block);
}

/*
==============
Scr_GetBuiltin
==============
*/

scr_string_t __fastcall Scr_GetBuiltin(sval_u func_name)
{
  return ?Scr_GetBuiltin@@YA?AW4scr_string_t@@Tsval_u@@@Z(func_name);
}

/*
==============
Scr_GetMethodFromTable
==============
*/

unsigned int __fastcall Scr_GetMethodFromTable(const scrContext_t *scrContext, const char **pName, BuiltinType *outType, const BuiltinMethodTable *methodTable)
{
  return ?Scr_GetMethodFromTable@@YAIAEBUscrContext_t@@PEAPEBDPEAW4BuiltinType@@PEBUBuiltinMethodTable@@@Z(scrContext, pName, outType, methodTable);
}

/*
==============
Scr_GetMethod
==============
*/

unsigned int __fastcall Scr_GetMethod(const scrContext_t *scrContext, const char **pName, BuiltinType *type)
{
  return ?Scr_GetMethod@@YAIAEBUscrContext_t@@PEAPEBDPEAW4BuiltinType@@@Z(scrContext, pName, type);
}

/*
==============
Scr_CheckLocalVarsCount
==============
*/

void __fastcall Scr_CheckLocalVarsCount(int localVarsCount)
{
  ?Scr_CheckLocalVarsCount@@YAXH@Z(localVarsCount);
}

/*
==============
Scr_TransferBlock
==============
*/

void __fastcall Scr_TransferBlock(const scr_block_t *from, scr_block_t *to)
{
  ?Scr_TransferBlock@@YAXPEBUscr_block_t@@PEAU1@@Z(from, to);
}

/*
==============
Scr_AddContinueBlock
==============
*/

void __fastcall Scr_AddContinueBlock(const scrContext_t *scrContext, scr_block_t *block)
{
  ?Scr_AddContinueBlock@@YAXAEBUscrContext_t@@PEAUscr_block_t@@@Z(scrContext, block);
}

/*
==============
Scr_InitFromChildBlocks
==============
*/

void __fastcall Scr_InitFromChildBlocks(scr_block_t **childBlocks, int childCount, scr_block_t *block)
{
  ?Scr_InitFromChildBlocks@@YAXQEAPEAUscr_block_t@@HPEAU1@@Z(childBlocks, childCount, block);
}

/*
==============
Scr_PushValue
==============
*/

void __fastcall Scr_PushValue(scrContext_t *scrContext, VariableCompileValue *constValue)
{
  ?Scr_PushValue@@YAXAEAUscrContext_t@@PEAUVariableCompileValue@@@Z(scrContext, constValue);
}

/*
==============
Scr_CopyBlock
==============
*/

void __fastcall Scr_CopyBlock(scrContext_t *scrContext, const scr_block_t *from, scr_block_t **to)
{
  ?Scr_CopyBlock@@YAXAEAUscrContext_t@@PEBUscr_block_t@@PEAPEAU2@@Z(scrContext, from, to);
}

/*
==============
Scr_EvalConditional
==============
*/

bool __fastcall Scr_EvalConditional(scrContext_t *scrContext, sval_u expr)
{
  return ?Scr_EvalConditional@@YA_NAEAUscrContext_t@@Tsval_u@@@Z(scrContext, expr);
}

/*
==============
Scr_CalcLocalVarsThread
==============
*/

void __fastcall Scr_CalcLocalVarsThread(scrContext_t *scrContext, sval_u exprlist, sval_u stmtlist, sval_u *stmttblock)
{
  ?Scr_CalcLocalVarsThread@@YAXAEAUscrContext_t@@Tsval_u@@1PEAT2@@Z(scrContext, exprlist, stmtlist, stmttblock);
}

/*
==============
Scr_EvalPrimitiveExpressionList
==============
*/

bool __fastcall Scr_EvalPrimitiveExpressionList(scrContext_t *scrContext, sval_u exprlist, sval_u sourcePos, VariableCompileValue *constValue)
{
  return ?Scr_EvalPrimitiveExpressionList@@YA_NAEAUscrContext_t@@Tsval_u@@1PEAUVariableCompileValue@@@Z(scrContext, exprlist, sourcePos, constValue);
}

/*
==============
Scr_AddBreakBlock
==============
*/

void __fastcall Scr_AddBreakBlock(const scrContext_t *scrContext, scr_block_t *block)
{
  ?Scr_AddBreakBlock@@YAXAEBUscrContext_t@@PEAUscr_block_t@@@Z(scrContext, block);
}

/*
==============
Scr_GetFunction
==============
*/

unsigned int __fastcall Scr_GetFunction(const scrContext_t *scrContext, const char **pName, BuiltinType *type)
{
  return ?Scr_GetFunction@@YAIAEBUscrContext_t@@PEAPEBDPEAW4BuiltinType@@@Z(scrContext, pName, type);
}

/*
==============
Scr_GetExpressionCount
==============
*/

int __fastcall Scr_GetExpressionCount(sval_u exprlist)
{
  return ?Scr_GetExpressionCount@@YAHTsval_u@@@Z(exprlist);
}

/*
==============
Scr_RegisterFunction
==============
*/

void __fastcall Scr_RegisterFunction(const scrContext_t *scrContext, __int64 func, BuiltinType type, unsigned int name)
{
  ?Scr_RegisterFunction@@YAXAEBUscrContext_t@@_JW4BuiltinType@@I@Z(scrContext, func, type, name);
}

/*
==============
Scr_AddBreakBlock
==============
*/
void Scr_AddBreakBlock(const scrContext_t *scrContext, scr_block_t *block)
{
  scr_block_t **breakChildBlocks; 
  int v5; 

  if ( block->abortLevel == None )
  {
    breakChildBlocks = scrContext->m_compileGlob.breakChildBlocks;
    if ( breakChildBlocks )
    {
      v5 = *scrContext->m_compileGlob.breakChildCount;
      if ( v5 >= 1024 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042710, 1044i64);
        breakChildBlocks = scrContext->m_compileGlob.breakChildBlocks;
        v5 = *scrContext->m_compileGlob.breakChildCount;
      }
      breakChildBlocks[v5] = block;
      ++*scrContext->m_compileGlob.breakChildCount;
    }
  }
}

/*
==============
Scr_AddContinueBlock
==============
*/
void Scr_AddContinueBlock(const scrContext_t *scrContext, scr_block_t *block)
{
  scr_block_t **continueChildBlocks; 
  int v5; 

  if ( block->abortLevel == None )
  {
    continueChildBlocks = scrContext->m_compileGlob.continueChildBlocks;
    if ( continueChildBlocks )
    {
      v5 = *scrContext->m_compileGlob.continueChildCount;
      if ( v5 >= 1024 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042710, 1044i64);
        continueChildBlocks = scrContext->m_compileGlob.continueChildBlocks;
        v5 = *scrContext->m_compileGlob.continueChildCount;
      }
      continueChildBlocks[v5] = block;
      ++*scrContext->m_compileGlob.continueChildCount;
    }
  }
}

/*
==============
Scr_AppendChildBlocks
==============
*/
void Scr_AppendChildBlocks(scr_block_t **childBlocks, int childCount, scr_block_t *block)
{
  __int64 v5; 
  __int64 v6; 
  scr_block_t *v7; 
  scr_block_t *v8; 
  int v9; 
  __int64 v10; 
  __int64 localVarsCount; 
  int v12; 
  scr_localVar_t v13; 
  scr_localVar_t *localVars; 
  __int64 v15; 
  scr_block_t *v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  _DWORD *v20; 

  if ( childCount && block->abortLevel == None )
  {
    v5 = childCount;
    if ( childCount > 0 )
    {
      v6 = 0i64;
      do
      {
        v7 = childBlocks[v6++];
        v7->abortLevel = None;
      }
      while ( v6 < v5 );
    }
    v8 = *childBlocks;
    v9 = 0;
    if ( (*childBlocks)->localVarsCount > 0 )
    {
      v10 = 24i64;
      do
      {
        localVarsCount = block->localVarsCount;
        v12 = 0;
        v13 = *(scr_localVar_t *)((char *)&v8->abortLevel + v10);
        if ( (int)localVarsCount <= 0 )
          goto LABEL_14;
        localVars = block->localVars;
        while ( localVars->canonicalStr != v13.canonicalStr )
        {
          ++v12;
          ++localVars;
          if ( v12 >= (int)localVarsCount )
            goto LABEL_14;
        }
        if ( v12 < 0 )
        {
LABEL_14:
          v15 = 1i64;
          if ( v5 <= 1 )
          {
LABEL_22:
            block->localVars[localVarsCount] = v13;
            ++block->localVarsCount;
          }
          else
          {
            while ( 1 )
            {
              v16 = childBlocks[v15];
              v17 = 0;
              v18 = 0i64;
              v19 = v16->localVarsCount;
              if ( v19 <= 0 )
                break;
              v20 = (_DWORD *)v16->localVars;
              while ( *v20 != v13.canonicalStr )
              {
                ++v17;
                ++v18;
                v20 += 2;
                if ( v18 >= v19 )
                  goto $not_found;
              }
              if ( v17 < 0 )
                break;
              if ( ++v15 >= v5 )
                goto LABEL_22;
            }
          }
        }
$not_found:
        v8 = *childBlocks;
        ++v9;
        v10 += 8i64;
      }
      while ( v9 < (*childBlocks)->localVarsCount );
    }
  }
}

/*
==============
Scr_CalcLocalVarsStatement
==============
*/
void Scr_CalcLocalVarsStatement(scrContext_t *scrContext, sval_u val, scr_block_t *block)
{
  sval_u *node; 
  sval_u *v6; 
  sval_u v7; 
  sval_u *v8; 
  sval_u v9; 
  sval_u *v10; 
  sval_u v11; 
  sval_u *v12; 
  unsigned int v13; 
  ScriptAbort v14; 
  int type; 
  int v16; 
  __int64 v17; 
  sval_u v18; 
  sval_u *v19; 
  bool v20; 
  int v21; 
  scr_block_t **v22; 
  scr_block_t **v23; 
  scr_block_t **v24; 
  sval_u v25; 
  sval_u v26; 
  sval_u *v27; 
  bool v28; 
  int v29; 
  scr_block_t **v30; 
  scr_block_t **v31; 
  scr_block_t **v32; 
  sval_u v33; 
  __int64 v34; 
  sval_u **i; 
  int *to; 
  sval_u *toa; 
  scr_block_t **breakChildBlocks; 
  sval_u *v39; 
  scr_block_t **continueChildBlocks; 
  int *breakChildCount; 
  int *continueChildCount; 
  scr_block_t **v43; 
  scr_block_t **v44; 
  scr_block_t *childBlocks[3]; 
  int v46; 
  int childCount; 

  switch ( val.node->type )
  {
    case 2:
    case 0x31:
    case 0x32:
    case 0x33:
      node = val.node[1].node;
      if ( node->type == 5 )
      {
        Scr_RegisterLocalVar(scrContext, node[1].stringValue, node[2], block);
      }
      else if ( node->type == 15 )
      {
        v6 = node[1].node;
        if ( v6->type == 20 )
          Scr_CalcLocalVarsVariableExpressionRef(scrContext, v6[1], block);
      }
      break;
    case 0x1E:
    case 0x1F:
      if ( block->abortLevel == None )
        block->abortLevel = 3;
      break;
    case 0x2D:
      v7 = val.node[2];
      v8 = val.node + 4;
      Scr_CopyBlock(scrContext, block, (scr_block_t **)&val.node[4]);
      Scr_CalcLocalVarsStatement(scrContext, v7, v8->block);
      goto LABEL_40;
    case 0x2E:
      v9 = val.node[3];
      v10 = val.node + 6;
      v11 = val.node[2];
      v12 = val.node + 7;
      v13 = 0;
      v14 = 3;
      Scr_CopyBlock(scrContext, block, (scr_block_t **)&val.node[6]);
      Scr_CalcLocalVarsStatement(scrContext, v11, v10->block);
      type = v10->node->type;
      if ( type <= 3 )
      {
        v14 = v10->node->type;
        if ( !type )
        {
          childBlocks[0] = v10->block;
          v13 = 1;
        }
      }
      Scr_CopyBlock(scrContext, block, (scr_block_t **)v12);
      Scr_CalcLocalVarsStatement(scrContext, v9, v12->block);
      v16 = v12->node->type;
      if ( v16 <= v14 )
      {
        v14 = v12->node->type;
        if ( !v16 )
        {
          v17 = v13++;
          childBlocks[v17] = (scr_block_t *)v12->node;
        }
      }
      if ( block->abortLevel == None )
        block->abortLevel = v14;
      Scr_AppendChildBlocks(childBlocks, v13, block);
      Scr_MergeChildBlocks(childBlocks, v13, block);
      break;
    case 0x2F:
      v18 = val.node[2];
      v19 = val.node + 5;
      v20 = Scr_EvalConditional(scrContext, val.node[1]);
      v21 = 0;
      breakChildBlocks = scrContext->m_compileGlob.breakChildBlocks;
      to = scrContext->m_compileGlob.breakChildCount;
      continueChildBlocks = scrContext->m_compileGlob.continueChildBlocks;
      continueChildCount = scrContext->m_compileGlob.continueChildCount;
      childCount = 0;
      v46 = 0;
      v22 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "Scr_CalcLocalVarsWhileStatement");
      scrContext->m_compileGlob.continueChildBlocks = v22;
      v23 = v22;
      scrContext->m_compileGlob.continueChildCount = &v46;
      if ( v20 )
      {
        v24 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "Scr_CalcLocalVarsWhileStatement");
        scrContext->m_compileGlob.breakChildCount = &childCount;
      }
      else
      {
        v24 = NULL;
      }
      scrContext->m_compileGlob.breakChildBlocks = v24;
      Scr_CopyBlock(scrContext, block, (scr_block_t **)v19);
      Scr_CalcLocalVarsStatement(scrContext, v18, v19->block);
      Scr_AddContinueBlock(scrContext, v19->block);
      if ( v46 > 0 )
      {
        do
          Scr_AppendChildBlocks(&v23[v21++], 1, block);
        while ( v21 < v46 );
      }
      if ( v20 )
        Scr_AppendChildBlocks(v24, childCount, block);
      Scr_MergeChildBlocks((scr_block_t **)v19, 1, block);
      scrContext->m_compileGlob.breakChildBlocks = breakChildBlocks;
      scrContext->m_compileGlob.breakChildCount = to;
      scrContext->m_compileGlob.continueChildBlocks = continueChildBlocks;
      scrContext->m_compileGlob.continueChildCount = continueChildCount;
      break;
    case 0x30:
      v25 = val.node[4];
      v26 = val.node[3];
      v27 = val.node[2].node;
      v39 = val.node + 8;
      toa = val.node + 7;
      Scr_CalcLocalVarsStatement(scrContext, val.node[1], block);
      v28 = v27->type != 74 || Scr_EvalConditional(scrContext, v27[1]);
      v43 = scrContext->m_compileGlob.breakChildBlocks;
      v29 = 0;
      breakChildCount = scrContext->m_compileGlob.breakChildCount;
      v44 = scrContext->m_compileGlob.continueChildBlocks;
      childBlocks[0] = (scr_block_t *)scrContext->m_compileGlob.continueChildCount;
      childCount = 0;
      v46 = 0;
      v30 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "Scr_CalcLocalVarsForStatement");
      scrContext->m_compileGlob.continueChildBlocks = v30;
      v31 = v30;
      scrContext->m_compileGlob.continueChildCount = &v46;
      if ( v28 )
      {
        v32 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "Scr_CalcLocalVarsForStatement");
        scrContext->m_compileGlob.breakChildCount = &childCount;
      }
      else
      {
        v32 = NULL;
      }
      scrContext->m_compileGlob.breakChildBlocks = v32;
      Scr_CopyBlock(scrContext, block, (scr_block_t **)toa);
      Scr_CopyBlock(scrContext, block, (scr_block_t **)v39);
      Scr_CalcLocalVarsStatement(scrContext, v25, toa->block);
      Scr_AddContinueBlock(scrContext, toa->block);
      if ( v46 > 0 )
      {
        do
          Scr_AppendChildBlocks(&v31[v29++], 1, block);
        while ( v29 < v46 );
      }
      Scr_CalcLocalVarsStatement(scrContext, v26, v39->block);
      Scr_AppendChildBlocks((scr_block_t **)v39, 1, block);
      Scr_MergeChildBlocks((scr_block_t **)v39, 1, block);
      if ( v28 )
        Scr_AppendChildBlocks(v32, childCount, block);
      Scr_MergeChildBlocks((scr_block_t **)toa, 1, block);
      scrContext->m_compileGlob.breakChildBlocks = v43;
      scrContext->m_compileGlob.breakChildCount = breakChildCount;
      scrContext->m_compileGlob.continueChildBlocks = v44;
      scrContext->m_compileGlob.continueChildCount = (int *)childBlocks[0];
      break;
    case 0x34:
      Scr_CalcLocalVarsStatementList(scrContext, val.node[1], block);
      break;
    case 0x35:
      v33 = val.node[1];
      v8 = val.node + 3;
      Scr_CopyBlock(scrContext, block, (scr_block_t **)&val.node[3]);
      Scr_CalcLocalVarsStatementList(scrContext, v33, v8->block);
LABEL_40:
      Scr_MergeChildBlocks((scr_block_t **)v8, 1, block);
      break;
    case 0x3F:
      v34 = *(_QWORD *)(*(_QWORD *)val.node[2].node + 8i64);
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 843, ASSERT_TYPE_ASSERT, "( node )", (const char *)&queryFormat, "node") )
        __debugbreak();
      for ( i = *(sval_u ***)(v34 + 8); i; i = (sval_u **)i[1] )
        Scr_RegisterLocalVar(scrContext, (*i)->stringValue, (*i)[1], block);
      break;
    case 0x45:
      Scr_CalcLocalVarsSwitchStatement(scrContext, val.node[2], block);
      break;
    case 0x48:
      Scr_AddBreakBlock(scrContext, block);
      if ( block->abortLevel == None )
        block->abortLevel = 2;
      break;
    case 0x49:
      Scr_AddContinueBlock(scrContext, block);
      if ( block->abortLevel == None )
        block->abortLevel = 1;
      break;
    default:
      return;
  }
}

/*
==============
Scr_CalcLocalVarsStatementList
==============
*/
void Scr_CalcLocalVarsStatementList(scrContext_t *scrContext, sval_u val, scr_block_t *block)
{
  sval_u *i; 

  for ( i = *(sval_u **)(*(_QWORD *)val.node + 8i64); i; i = i[1].node )
    Scr_CalcLocalVarsStatement(scrContext, *i, block);
}

/*
==============
Scr_CalcLocalVarsSwitchStatement
==============
*/
void Scr_CalcLocalVarsSwitchStatement(scrContext_t *scrContext, sval_u stmtlist, scr_block_t *block)
{
  scr_block_t **breakChildBlocks; 
  ScriptAbort v7; 
  scr_block_t *v8; 
  int v9; 
  scr_block_t **v10; 
  sval_u *node; 
  __int64 v12; 
  ScriptAbort abortLevel; 
  char v14; 
  __int64 v15; 
  scr_block_t *v16; 
  __int64 v17; 
  scr_block_t *v18; 
  __int128 v19; 
  sval_u v20; 
  scr_block_t **v21; 
  scr_block_t **childBlocks; 
  char v23; 
  int childCount; 
  int *breakChildCount; 

  breakChildBlocks = scrContext->m_compileGlob.breakChildBlocks;
  v21 = breakChildBlocks;
  breakChildCount = scrContext->m_compileGlob.breakChildCount;
  childCount = 0;
  v7 = 3;
  childBlocks = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "Scr_CalcLocalVarsSwitchStatement");
  scrContext->m_compileGlob.breakChildBlocks = childBlocks;
  v8 = NULL;
  v23 = 0;
  scrContext->m_compileGlob.breakChildCount = &childCount;
  v9 = 0;
  v10 = (scr_block_t **)Scr_Mem_TempAlloc(scrContext, 0x2000ui64, "Scr_CalcLocalVarsSwitchStatement");
  node = *(sval_u **)(*(_QWORD *)stmtlist.node + 8i64);
  if ( !node )
  {
    scrContext->m_compileGlob.breakChildBlocks = breakChildBlocks;
    goto LABEL_30;
  }
  v12 = 0i64;
  do
  {
    if ( (unsigned int)(node->node->type - 70) > 1 )
    {
      if ( v8 )
      {
        Scr_CalcLocalVarsStatement(scrContext, *node, v8);
        abortLevel = v8->abortLevel;
        if ( v8->abortLevel )
        {
          if ( abortLevel == 2 )
          {
            v7 = None;
            v8->abortLevel = None;
            if ( v12 >= 1024 )
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042710, 1044i64);
            ++v9;
            v10[v12++] = v8;
          }
          else if ( abortLevel <= v7 )
          {
            v7 = v8->abortLevel;
          }
          v8 = NULL;
        }
      }
      goto LABEL_13;
    }
    v8 = (scr_block_t *)Scr_Mem_TempAlloc(scrContext, 0x218ui64, "Scr_CopyBlock");
    v16 = v8;
    v17 = 4i64;
    v18 = block;
    do
    {
      v16 = (scr_block_t *)((char *)v16 + 128);
      v19 = *(_OWORD *)&v18->abortLevel;
      v18 = (scr_block_t *)((char *)v18 + 128);
      *(_OWORD *)&v16[-1].localVars[48].canonicalStr = v19;
      *(_OWORD *)&v16[-1].localVars[50].canonicalStr = *(_OWORD *)&v18[-1].localVars[50].canonicalStr;
      *(_OWORD *)&v16[-1].localVars[52].canonicalStr = *(_OWORD *)&v18[-1].localVars[52].canonicalStr;
      *(_OWORD *)&v16[-1].localVars[54].canonicalStr = *(_OWORD *)&v18[-1].localVars[54].canonicalStr;
      *(_OWORD *)&v16[-1].localVars[56].canonicalStr = *(_OWORD *)&v18[-1].localVars[56].canonicalStr;
      *(_OWORD *)&v16[-1].localVars[58].canonicalStr = *(_OWORD *)&v18[-1].localVars[58].canonicalStr;
      *(_OWORD *)&v16[-1].localVars[60].canonicalStr = *(_OWORD *)&v18[-1].localVars[60].canonicalStr;
      *(_OWORD *)&v16[-1].localVars[62].canonicalStr = *(_OWORD *)&v18[-1].localVars[62].canonicalStr;
      --v17;
    }
    while ( v17 );
    *(_OWORD *)&v16->abortLevel = *(_OWORD *)&v18->abortLevel;
    *(_QWORD *)v16->localVarsInitBits = *(_QWORD *)v18->localVarsInitBits;
    v8->localVarsPublicCount = 0;
    v20 = *node;
    if ( node->node->type == 70 )
    {
      v20.node[3].node = (sval_u *)v8;
LABEL_13:
      v14 = v23;
      goto LABEL_14;
    }
    v20.node[2].node = (sval_u *)v8;
    v14 = 1;
    v23 = 1;
LABEL_14:
    node = node[1].node;
  }
  while ( node );
  if ( v14 )
  {
    if ( v8 )
    {
      Scr_AddBreakBlock(scrContext, v8);
      if ( v9 >= 1024 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042710, 1044i64);
      v15 = v9++;
      v10[v15] = v8;
    }
    if ( block->abortLevel == None )
      block->abortLevel = v7;
    Scr_AppendChildBlocks(childBlocks, childCount, block);
    Scr_MergeChildBlocks(v10, v9, block);
  }
  scrContext->m_compileGlob.breakChildBlocks = v21;
LABEL_30:
  scrContext->m_compileGlob.breakChildCount = breakChildCount;
}

/*
==============
Scr_CalcLocalVarsThread
==============
*/
void Scr_CalcLocalVarsThread(scrContext_t *scrContext, sval_u exprlist, sval_u stmtlist, sval_u *stmttblock)
{
  sval_u *v8; 
  scr_block_t *node; 
  sval_u **v10; 
  sval_u *i; 

  v8 = (sval_u *)Scr_Mem_TempAlloc(scrContext, 0x218ui64, "Scr_CalcLocalVarsThread");
  stmttblock->node = v8;
  v8->type = 0;
  *(&stmttblock->node->objectIdValue + 1) = 0;
  *(&stmttblock->node[1].objectIdValue + 1) = 0;
  stmttblock->node[1].type = 0;
  stmttblock->node[2].node = NULL;
  node = (scr_block_t *)stmttblock->node;
  v10 = *(sval_u ***)(*(_QWORD *)exprlist.node + 8i64);
  if ( v10 )
  {
    do
    {
      Scr_RegisterLocalVar(scrContext, (*v10)->stringValue, (*v10)[1], node);
      v10 = (sval_u **)v10[1];
    }
    while ( v10 );
    node = (scr_block_t *)stmttblock->node;
  }
  for ( i = *(sval_u **)(*(_QWORD *)stmtlist.node + 8i64); i; i = i[1].node )
    Scr_CalcLocalVarsStatement(scrContext, *i, node);
}

/*
==============
Scr_CalcLocalVarsVariableExpressionRef
==============
*/
void Scr_CalcLocalVarsVariableExpressionRef(scrContext_t *scrContext, sval_u expr, scr_block_t *block)
{
  int type; 
  sval_u *node; 

  type = expr.node->type;
  if ( expr.node->type == 5 )
  {
LABEL_5:
    Scr_RegisterLocalVar(scrContext, expr.node[1].stringValue, expr.node[2], block);
  }
  else
  {
    while ( type == 15 )
    {
      node = expr.node[1].node;
      if ( node->type != 20 )
        break;
      expr = node[1];
      type = expr.node->type;
      if ( expr.node->type == 5 )
        goto LABEL_5;
    }
  }
}

/*
==============
Scr_CheckLocalVarsCount
==============
*/
void Scr_CheckLocalVarsCount(int localVarsCount)
{
  if ( localVarsCount >= 64 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042690, 1043i64);
}

/*
==============
Scr_CheckMaxSwitchCases
==============
*/
void Scr_CheckMaxSwitchCases(int count)
{
  if ( count >= 1024 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042710, 1044i64);
}

/*
==============
Scr_CopyBlock
==============
*/
void Scr_CopyBlock(scrContext_t *scrContext, const scr_block_t *from, scr_block_t **to)
{
  scr_block_t *v5; 
  __int64 v6; 
  __int128 v7; 

  v5 = (scr_block_t *)Scr_Mem_TempAlloc(scrContext, 0x218ui64, "Scr_CopyBlock");
  *to = v5;
  v6 = 4i64;
  do
  {
    v5 = (scr_block_t *)((char *)v5 + 128);
    v7 = *(_OWORD *)&from->abortLevel;
    from = (const scr_block_t *)((char *)from + 128);
    *(_OWORD *)&v5[-1].localVars[48].canonicalStr = v7;
    *(_OWORD *)&v5[-1].localVars[50].canonicalStr = *(_OWORD *)&from[-1].localVars[50].canonicalStr;
    *(_OWORD *)&v5[-1].localVars[52].canonicalStr = *(_OWORD *)&from[-1].localVars[52].canonicalStr;
    *(_OWORD *)&v5[-1].localVars[54].canonicalStr = *(_OWORD *)&from[-1].localVars[54].canonicalStr;
    *(_OWORD *)&v5[-1].localVars[56].canonicalStr = *(_OWORD *)&from[-1].localVars[56].canonicalStr;
    *(_OWORD *)&v5[-1].localVars[58].canonicalStr = *(_OWORD *)&from[-1].localVars[58].canonicalStr;
    *(_OWORD *)&v5[-1].localVars[60].canonicalStr = *(_OWORD *)&from[-1].localVars[60].canonicalStr;
    *(_OWORD *)&v5[-1].localVars[62].canonicalStr = *(_OWORD *)&from[-1].localVars[62].canonicalStr;
    --v6;
  }
  while ( v6 );
  *(_OWORD *)&v5->abortLevel = *(_OWORD *)&from->abortLevel;
  *(_QWORD *)v5->localVarsInitBits = *(_QWORD *)from->localVarsInitBits;
  (*to)->localVarsPublicCount = 0;
}

/*
==============
Scr_CreateVector
==============
*/
void Scr_CreateVector(scrContext_t *scrContext, VariableCompileValue *constValue, VariableValue *value)
{
  float *v4; 
  int v5; 
  VariableCompileValue *v6; 
  __int64 i; 
  VariableType type; 
  float floatValue; 
  int v12; 
  const char *NameForType; 
  int v14; 
  float v; 
  int v16; 
  int v17; 

  v4 = (float *)&v17;
  v5 = 0;
  v6 = constValue;
  for ( i = 0i64; i < 3; ++i )
  {
    type = v6->value.type;
    if ( type == VAR_FLOAT )
    {
      floatValue = v6->value.u.floatValue;
    }
    else
    {
      if ( type != VAR_INTEGER )
      {
        NameForType = Scr_GetNameForType(type);
        CompileError(scrContext, constValue[v5].sourcePos.canonicalString, "type %s is not a float", NameForType);
        return;
      }
      floatValue = (float)v6->value.u.intValue;
    }
    *v4-- = floatValue;
    ++v5;
    ++v6;
  }
  *(float *)&v14 = v;
  v12 = LODWORD(v) & 0x7F800000;
  value->type = VAR_VECTOR;
  if ( v12 == 2139095040 || (v14 = v16, (v16 & 0x7F800000) == 2139095040) || (v14 = v17, (v17 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 329, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vec )[0] ) && !IS_NAN( ( vec )[1] ) && !IS_NAN( ( vec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vec )[0] ) && !IS_NAN( ( vec )[1] ) && !IS_NAN( ( vec )[2] )", v14) )
      __debugbreak();
  }
  value->u.scriptCodePosValue = (unsigned __int64)Scr_AllocVector(scrContext, &v);
}

/*
==============
Scr_EvalConditional
==============
*/
bool Scr_EvalConditional(scrContext_t *scrContext, sval_u expr)
{
  VariableType type; 
  bool v4; 
  int intValue; 
  VariableCompileValue constValue; 

  if ( Scr_EvalExpression(scrContext, expr, &constValue) )
  {
    type = constValue.value.type;
    v4 = 0;
    if ( constValue.value.type == VAR_INTEGER )
    {
      intValue = constValue.value.u.intValue != 0;
      constValue.value.u.intValue = intValue;
    }
    else
    {
      if ( constValue.value.type != VAR_FLOAT )
      {
LABEL_7:
        RemoveRefToValue(scrContext, (unsigned __int8)type, constValue.value.u);
        return v4;
      }
      Scr_CastBool_NonInteger(scrContext, &constValue.value);
      type = constValue.value.type;
      intValue = constValue.value.u.intValue;
    }
    v4 = intValue != 0;
    goto LABEL_7;
  }
  return 0;
}

/*
==============
Scr_EvalFloat
==============
*/
void Scr_EvalFloat(float value, sval_u sourcePos, VariableCompileValue *constValue)
{
  if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 346, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
    __debugbreak();
  constValue->value.u.floatValue = value;
  constValue->sourcePos = sourcePos;
  constValue->value.type = VAR_FLOAT;
}

/*
==============
Scr_EvalInteger
==============
*/
void Scr_EvalInteger(int value, sval_u sourcePos, VariableCompileValue *constValue)
{
  if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 336, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
    __debugbreak();
  constValue->value.u.intValue = value;
  constValue->sourcePos = sourcePos;
  constValue->value.type = VAR_INTEGER;
}

/*
==============
Scr_EvalPrimitiveExpressionList
==============
*/
bool Scr_EvalPrimitiveExpressionList(scrContext_t *scrContext, sval_u exprlist, sval_u sourcePos, VariableCompileValue *constValue)
{
  sval_u *node; 
  int v9; 
  int v10; 
  sval_u *v11; 
  bool result; 
  int i; 
  __int64 v14; 
  VariableCompileValue *v15; 
  float *v16; 
  VariableType type; 
  float floatValue; 
  int v19; 
  const char *NameForType; 
  int v21; 
  float v; 
  int v23; 
  int v24; 
  VariableCompileValue constValuea[3]; 

  if ( !constValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 400, ASSERT_TYPE_ASSERT, "( constValue )", (const char *)&queryFormat, "constValue") )
    __debugbreak();
  node = exprlist.node->node;
  v9 = 0;
  v10 = 0;
  v11 = node;
  if ( node )
  {
    do
    {
      v11 = v11[1].node;
      ++v10;
    }
    while ( v11 );
    if ( v10 == 1 )
      return Scr_EvalExpression(scrContext, *node->node, constValue);
    if ( v10 == 3 )
    {
      for ( i = 0; Scr_EvalExpression(scrContext, *node->node, &constValuea[i]); ++i )
      {
        node = node[1].node;
        if ( !node )
        {
          v14 = 0i64;
          v15 = constValuea;
          v16 = (float *)&v24;
          do
          {
            type = v15->value.type;
            if ( type == VAR_FLOAT )
            {
              floatValue = v15->value.u.floatValue;
            }
            else
            {
              if ( type != VAR_INTEGER )
              {
                NameForType = Scr_GetNameForType(type);
                CompileError(scrContext, constValuea[v9].sourcePos.canonicalString, "type %s is not a float", NameForType);
                result = 1;
                constValue->sourcePos = sourcePos;
                return result;
              }
              floatValue = (float)v15->value.u.intValue;
            }
            *v16-- = floatValue;
            ++v9;
            ++v14;
            ++v15;
          }
          while ( v14 < 3 );
          *(float *)&v21 = v;
          v19 = LODWORD(v) & 0x7F800000;
          constValue->value.type = VAR_VECTOR;
          if ( v19 == 2139095040 || (v21 = v23, (v23 & 0x7F800000) == 2139095040) || (v21 = v24, (v24 & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 329, ASSERT_TYPE_SANITY, "( !IS_NAN( ( vec )[0] ) && !IS_NAN( ( vec )[1] ) && !IS_NAN( ( vec )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( vec )[0] ) && !IS_NAN( ( vec )[1] ) && !IS_NAN( ( vec )[2] )", v21) )
              __debugbreak();
          }
          constValue->value.u.scriptCodePosValue = (unsigned __int64)Scr_AllocVector(scrContext, &v);
          result = 1;
          constValue->sourcePos = sourcePos;
          return result;
        }
      }
    }
  }
  return 0;
}

/*
==============
Scr_GetBuiltin
==============
*/
__int64 Scr_GetBuiltin(sval_u func_name)
{
  sval_u v1; 
  _DWORD *node; 

  if ( func_name.node->type == 29 && (v1 = func_name.node[1], v1.node->type == 21) && (node = v1.node[1].node, *node == 23) )
    return (unsigned int)node[2];
  else
    return 0i64;
}

/*
==============
Scr_GetExpressionCount
==============
*/
__int64 Scr_GetExpressionCount(sval_u exprlist)
{
  sval_u *node; 
  __int64 result; 

  node = exprlist.node->node;
  result = 0i64;
  if ( *exprlist.node )
  {
    do
    {
      node = node[1].node;
      result = (unsigned int)(result + 1);
    }
    while ( node );
  }
  return result;
}

/*
==============
Scr_GetFunction
==============
*/
unsigned int Scr_GetFunction(const scrContext_t *scrContext, const char **pName, BuiltinType *type)
{
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
    return GScr_GetFunction(pName, type);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1192, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_GetFunction: Invalid script instance.") )
    __debugbreak();
  return 0;
}

/*
==============
Scr_GetFunctionFromTable
==============
*/
__int64 Scr_GetFunctionFromTable(const scrContext_t *scrContext, const char **pName, BuiltinType *outType, const BuiltinFunctionTable *functionTable)
{
  unsigned int v4; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int name; 
  BuiltinType type; 
  void (__fastcall *actionFunc)(scrContext_t *); 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 count; 
  const char *v19; 
  const BuiltinFunctionDef *functions; 
  __int64 v21; 
  unsigned int m_funcBegin; 
  const char **m_pFuncNames; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 

  v4 = 0;
  if ( !pName )
  {
    v9 = 0;
    if ( functionTable->count )
    {
      v10 = 0i64;
      do
      {
        name = functionTable->functions[v10].name;
        type = functionTable->functions[v10].type;
        actionFunc = functionTable->functions[v10].actionFunc;
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1225, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
          __debugbreak();
        v14 = name - scrContext->m_funcBegin;
        if ( v14 >= scrContext->m_funcCount )
        {
          v16 = name - scrContext->m_methBegin;
          if ( (unsigned int)v16 >= scrContext->m_methCount )
          {
            LODWORD(v25) = scrContext->m_methCount;
            LODWORD(v24) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( name ) < (unsigned)( scrContext.m_methCount )", "name doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          if ( scrContext->m_pMethTable[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1256, ASSERT_TYPE_ASSERT, "( ( !scrContext.m_pMethTable[name] ) )", "( scrContext.m_pMethNames[name] ) = %s", scrContext->m_pMethNames[v16]) )
            __debugbreak();
          scrContext->m_pMethTable[v16] = (__int64)actionFunc;
          if ( type != scrContext->m_methTypes[v16] )
          {
            LODWORD(v27) = scrContext->m_methTypes[v16];
            LODWORD(v26) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1263, ASSERT_TYPE_ASSERT, "( type ) == ( scrContext.m_methTypes[name] )", "%s == %s\n\t%i, %i", "type", "scrContext.m_methTypes[name]", v26, v27) )
              __debugbreak();
          }
          scrContext->m_vmDebugPub.m_pFuncTable[(unsigned int)(v16 + scrContext->m_funcCount)].breakpointCount = 0;
        }
        else
        {
          v15 = v14;
          if ( scrContext->m_pFuncTable[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1233, ASSERT_TYPE_ASSERT, "( ( !scrContext.m_pFuncTable[name] ) )", "( scrContext.m_pFuncNames[name] ) = %s", scrContext->m_pFuncNames[v14]) )
            __debugbreak();
          scrContext->m_pFuncTable[v15] = (__int64)actionFunc;
          if ( type != scrContext->m_funcTypes[v15] )
          {
            LODWORD(v27) = scrContext->m_funcTypes[v15];
            LODWORD(v26) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1240, ASSERT_TYPE_ASSERT, "( type ) == ( scrContext.m_funcTypes[name] )", "%s == %s\n\t%i, %i", "type", "scrContext.m_funcTypes[name]", v26, v27) )
              __debugbreak();
          }
          scrContext->m_vmDebugPub.m_pFuncTable[v15].breakpointCount = 0;
        }
        v10 = ++v9;
      }
      while ( v9 < functionTable->count );
    }
    return 0i64;
  }
  count = functionTable->count;
  v19 = *pName;
  if ( !count )
    return 0i64;
  functions = functionTable->functions;
  v21 = 0i64;
  m_funcBegin = scrContext->m_funcBegin;
  m_pFuncNames = scrContext->m_pFuncNames;
  while ( strcmp(v19, m_pFuncNames[functions[v21].name - m_funcBegin]) )
  {
    v21 = ++v4;
    if ( v4 >= count )
      return 0i64;
  }
  *pName = m_pFuncNames[functions[v21].name - m_funcBegin];
  *outType = functionTable->functions[v21].type;
  return functionTable->functions[v21].name;
}

/*
==============
Scr_GetMethod
==============
*/
unsigned int Scr_GetMethod(const scrContext_t *scrContext, const char **pName, BuiltinType *type)
{
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
    return GScr_GetMethod(pName, type);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1213, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_GetMethod: Invalid script instance.") )
    __debugbreak();
  return 0;
}

/*
==============
Scr_GetMethodFromTable
==============
*/
__int64 Scr_GetMethodFromTable(const scrContext_t *scrContext, const char **pName, BuiltinType *outType, const BuiltinMethodTable *methodTable)
{
  unsigned int v4; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int name; 
  BuiltinType type; 
  void (__fastcall *actionFunc)(scrContext_t *, scr_entref_t); 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 count; 
  const char *v19; 
  const BuiltinMethodDef *methods; 
  __int64 v21; 
  unsigned int m_methBegin; 
  const char **m_pMethNames; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 

  v4 = 0;
  if ( !pName )
  {
    v9 = 0;
    if ( methodTable->count )
    {
      v10 = 0i64;
      do
      {
        name = methodTable->methods[v10].name;
        type = methodTable->methods[v10].type;
        actionFunc = methodTable->methods[v10].actionFunc;
        if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1225, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
          __debugbreak();
        v14 = name - scrContext->m_funcBegin;
        if ( v14 >= scrContext->m_funcCount )
        {
          v16 = name - scrContext->m_methBegin;
          if ( (unsigned int)v16 >= scrContext->m_methCount )
          {
            LODWORD(v25) = scrContext->m_methCount;
            LODWORD(v24) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( name ) < (unsigned)( scrContext.m_methCount )", "name doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          if ( scrContext->m_pMethTable[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1256, ASSERT_TYPE_ASSERT, "( ( !scrContext.m_pMethTable[name] ) )", "( scrContext.m_pMethNames[name] ) = %s", scrContext->m_pMethNames[v16]) )
            __debugbreak();
          scrContext->m_pMethTable[v16] = (__int64)actionFunc;
          if ( type != scrContext->m_methTypes[v16] )
          {
            LODWORD(v27) = scrContext->m_methTypes[v16];
            LODWORD(v26) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1263, ASSERT_TYPE_ASSERT, "( type ) == ( scrContext.m_methTypes[name] )", "%s == %s\n\t%i, %i", "type", "scrContext.m_methTypes[name]", v26, v27) )
              __debugbreak();
          }
          scrContext->m_vmDebugPub.m_pFuncTable[(unsigned int)(v16 + scrContext->m_funcCount)].breakpointCount = 0;
        }
        else
        {
          v15 = v14;
          if ( scrContext->m_pFuncTable[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1233, ASSERT_TYPE_ASSERT, "( ( !scrContext.m_pFuncTable[name] ) )", "( scrContext.m_pFuncNames[name] ) = %s", scrContext->m_pFuncNames[v14]) )
            __debugbreak();
          scrContext->m_pFuncTable[v15] = (__int64)actionFunc;
          if ( type != scrContext->m_funcTypes[v15] )
          {
            LODWORD(v27) = scrContext->m_funcTypes[v15];
            LODWORD(v26) = type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1240, ASSERT_TYPE_ASSERT, "( type ) == ( scrContext.m_funcTypes[name] )", "%s == %s\n\t%i, %i", "type", "scrContext.m_funcTypes[name]", v26, v27) )
              __debugbreak();
          }
          scrContext->m_vmDebugPub.m_pFuncTable[v15].breakpointCount = 0;
        }
        v10 = ++v9;
      }
      while ( v9 < methodTable->count );
    }
    return 0i64;
  }
  count = methodTable->count;
  v19 = *pName;
  if ( !count )
    return 0i64;
  methods = methodTable->methods;
  v21 = 0i64;
  m_methBegin = scrContext->m_methBegin;
  m_pMethNames = scrContext->m_pMethNames;
  while ( strcmp(v19, m_pMethNames[methods[v21].name - m_methBegin]) )
  {
    v21 = ++v4;
    if ( v4 >= count )
      return 0i64;
  }
  *pName = m_pMethNames[methods[v21].name - m_methBegin];
  *outType = methodTable->methods[v21].type;
  return methodTable->methods[v21].name;
}

/*
==============
Scr_InitFromChildBlocks
==============
*/
void Scr_InitFromChildBlocks(scr_block_t **childBlocks, int childCount, scr_block_t *block)
{
  scr_block_t *v3; 
  scr_block_t **v4; 
  int localVarsPublicCount; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  char v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 v13; 
  int v14; 
  __int64 v15; 
  scr_block_t *v16; 
  unsigned __int8 *v17; 
  __int64 v18; 
  __int64 v19; 
  char v21; 
  unsigned __int8 *v23; 

  if ( childCount )
  {
    v3 = block;
    v4 = childBlocks;
    localVarsPublicCount = (*childBlocks)->localVarsPublicCount;
    v6 = childCount;
    if ( childCount > 1i64 )
    {
      v7 = 1i64;
      do
      {
        v8 = localVarsPublicCount;
        localVarsPublicCount = childBlocks[v7]->localVarsPublicCount;
        if ( localVarsPublicCount >= v8 )
          localVarsPublicCount = v8;
        ++v7;
      }
      while ( v7 < v6 );
    }
    if ( block->localVarsCreateCount > localVarsPublicCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 52, ASSERT_TYPE_ASSERT, "( block->localVarsCreateCount <= localVarsCreateCount )", (const char *)&queryFormat, "block->localVarsCreateCount <= localVarsCreateCount") )
      __debugbreak();
    if ( localVarsPublicCount > v3->localVarsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 53, ASSERT_TYPE_ASSERT, "( localVarsCreateCount <= block->localVarsCount )", (const char *)&queryFormat, "localVarsCreateCount <= block->localVarsCount") )
      __debugbreak();
    v9 = 0;
    v3->localVarsCreateCount = localVarsPublicCount;
    v18 = localVarsPublicCount;
    if ( localVarsPublicCount > 0 )
    {
      v10 = 1;
      v21 = 1;
      v11 = 24i64;
      do
      {
        if ( v9 >= v3->localVarsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 58, ASSERT_TYPE_ASSERT, "( i < block->localVarsCount )", (const char *)&queryFormat, "i < block->localVarsCount") )
          __debugbreak();
        v12 = (__int64)v9 >> 3;
        v23 = &v3->localVarsInitBits[v12];
        v13 = *v23;
        if ( (*v23 & (unsigned __int8)v10) == 0 )
        {
          v14 = *(ScriptAbort *)((char *)&v3->abortLevel + v11);
          v15 = 0i64;
          if ( v6 <= 0 )
          {
            v17 = &v3->localVarsInitBits[v12];
LABEL_34:
            *v17 = v13 | (1 << (v9 & 7));
          }
          else
          {
            v19 = v12 + 16;
            while ( 1 )
            {
              v16 = v4[v15];
              if ( localVarsPublicCount > v16->localVarsPublicCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 71, ASSERT_TYPE_ASSERT, "( localVarsCreateCount <= childBlock->localVarsPublicCount )", (const char *)&queryFormat, "localVarsCreateCount <= childBlock->localVarsPublicCount") )
                __debugbreak();
              if ( v9 >= v16->localVarsPublicCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 72, ASSERT_TYPE_ASSERT, "( i < childBlock->localVarsPublicCount )", (const char *)&queryFormat, "i < childBlock->localVarsPublicCount") )
                __debugbreak();
              if ( *(ScriptAbort *)((char *)&v16->abortLevel + v11) != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 75, ASSERT_TYPE_ASSERT, "( childBlock->localVars[i].canonicalStr == canonicalStr )", (const char *)&queryFormat, "childBlock->localVars[i].canonicalStr == canonicalStr") )
                __debugbreak();
              if ( ((unsigned __int8)(1 << (v9 & 7)) & *((_BYTE *)&v16->abortLevel + v19)) == 0 )
                break;
              v4 = childBlocks;
              if ( ++v15 >= v6 )
              {
                v17 = v23;
                v13 = *v23;
                goto LABEL_34;
              }
            }
          }
          v4 = childBlocks;
          v10 = v21;
          v3 = block;
        }
        v10 = __ROL1__(v10, 1);
        ++v9;
        v21 = v10;
        v11 += 8i64;
        --v18;
      }
      while ( v18 );
    }
  }
}

/*
==============
Scr_MergeChildBlocks
==============
*/
void Scr_MergeChildBlocks(scr_block_t **childBlocks, int childCount, const scr_block_t *block)
{
  __int64 v4; 
  scr_block_t *v5; 
  int v6; 
  __int64 v7; 
  _QWORD *localVars; 
  int localVarsCount; 
  int v10; 
  __int64 v11; 
  _DWORD *v12; 
  scr_localVar_t *v13; 
  __int64 v14; 
  __int64 v15; 
  scr_block_t **v16; 
  __int64 v17; 

  if ( childCount )
  {
    v16 = childBlocks;
    if ( block->abortLevel == None )
    {
      v15 = childCount;
      if ( childCount > 0 )
      {
        v4 = 0i64;
        v17 = 0i64;
        do
        {
          v5 = childBlocks[v4];
          if ( v5->localVarsPublicCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 151, ASSERT_TYPE_ASSERT, "( !childBlock->localVarsPublicCount )", (const char *)&queryFormat, "!childBlock->localVarsPublicCount") )
            __debugbreak();
          v6 = 0;
          v7 = 0i64;
          v5->localVarsPublicCount = block->localVarsCount;
          if ( block->localVarsCount > 0 )
          {
            localVars = (_QWORD *)v5->localVars;
            do
            {
              localVarsCount = v5->localVarsCount;
              v10 = v6;
              v11 = *(_QWORD *)((char *)localVars + (char *)block - (char *)v5);
              if ( v6 >= localVarsCount )
                goto LABEL_16;
              v12 = localVars;
              while ( *v12 != (_DWORD)v11 )
              {
                ++v10;
                v12 += 2;
                if ( v10 >= localVarsCount )
                  goto LABEL_16;
              }
              if ( v10 < 0 )
              {
LABEL_16:
                v10 = v5->localVarsCount;
                if ( localVarsCount >= 64 )
                {
                  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042690, 1043i64);
                  localVarsCount = v5->localVarsCount;
                }
                v5->localVarsCount = localVarsCount + 1;
              }
              if ( v10 > v7 )
              {
                v13 = &v5->localVars[v10];
                v14 = v10 - v7;
                do
                {
                  *v13 = v13[-1];
                  --v13;
                  --v14;
                }
                while ( v14 );
              }
              *localVars = v11;
              ++v6;
              ++localVars;
              ++v7;
            }
            while ( v6 < block->localVarsCount );
          }
          childBlocks = v16;
          v4 = v17 + 1;
          v17 = v4;
        }
        while ( v4 < v15 );
      }
    }
  }
}

/*
==============
Scr_PopValue
==============
*/
void Scr_PopValue(scrContext_t *scrContext)
{
  if ( scrContext->m_compilePub.value_count )
  {
    --scrContext->m_compilePub.value_count;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 299, ASSERT_TYPE_ASSERT, "( scrContext.m_compilePub.value_count )", (const char *)&queryFormat, "scrContext.m_compilePub.value_count") )
      __debugbreak();
    --scrContext->m_compilePub.value_count;
  }
}

/*
==============
Scr_PushValue
==============
*/
void Scr_PushValue(scrContext_t *scrContext, VariableCompileValue *constValue)
{
  __int64 value_count; 
  VariableCompileValue *v4; 

  value_count = scrContext->m_compilePub.value_count;
  if ( (int)value_count < 32 )
  {
    v4 = &scrContext->m_compileGlob.value_start[value_count];
    v4->value.u.scriptCodePosValue = constValue->value.u.scriptCodePosValue;
    v4->value.type = constValue->value.type;
    v4->sourcePos.node = constValue->sourcePos.node;
    ++scrContext->m_compilePub.value_count;
  }
  else
  {
    CompileError(scrContext, constValue->sourcePos.canonicalString, "VALUE_STACK_SIZE exceeded", scrContext);
  }
}

/*
==============
Scr_RegisterFunction
==============
*/
void Scr_RegisterFunction(const scrContext_t *scrContext, __int64 func, BuiltinType type, unsigned int name)
{
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1225, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  v8 = name - scrContext->m_funcBegin;
  if ( v8 >= scrContext->m_funcCount )
  {
    v10 = name - scrContext->m_methBegin;
    if ( v10 >= scrContext->m_methCount )
    {
      LODWORD(v11) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1253, ASSERT_TYPE_ASSERT, "(unsigned)( name ) < (unsigned)( scrContext.m_methCount )", "name doesn't index scrContext.m_methCount\n\t%i not in [0, %i)", v11, scrContext->m_methCount) )
        __debugbreak();
    }
    if ( scrContext->m_pMethTable[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1256, ASSERT_TYPE_ASSERT, "( ( !scrContext.m_pMethTable[name] ) )", "( scrContext.m_pMethNames[name] ) = %s", scrContext->m_pMethNames[v10]) )
      __debugbreak();
    scrContext->m_pMethTable[v10] = func;
    if ( type != scrContext->m_methTypes[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1263, ASSERT_TYPE_ASSERT, "( type ) == ( scrContext.m_methTypes[name] )", "%s == %s\n\t%i, %i", "type", "scrContext.m_methTypes[name]", type, scrContext->m_methTypes[v10]) )
      __debugbreak();
    scrContext->m_vmDebugPub.m_pFuncTable[v10 + scrContext->m_funcCount].breakpointCount = 0;
  }
  else
  {
    v9 = v8;
    if ( scrContext->m_pFuncTable[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1233, ASSERT_TYPE_ASSERT, "( ( !scrContext.m_pFuncTable[name] ) )", "( scrContext.m_pFuncNames[name] ) = %s", scrContext->m_pFuncNames[v8]) )
      __debugbreak();
    scrContext->m_pFuncTable[v9] = func;
    if ( type != scrContext->m_funcTypes[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 1240, ASSERT_TYPE_ASSERT, "( type ) == ( scrContext.m_funcTypes[name] )", "%s == %s\n\t%i, %i", "type", "scrContext.m_funcTypes[name]", type, scrContext->m_funcTypes[v9]) )
      __debugbreak();
    scrContext->m_vmDebugPub.m_pFuncTable[v9].breakpointCount = 0;
  }
}

/*
==============
Scr_RegisterLocalVar
==============
*/
void Scr_RegisterLocalVar(scrContext_t *scrContext, scr_string_t name, sval_u sourcePos, scr_block_t *block)
{
  int type; 
  unsigned int LocalCanonicalString; 
  int localVarsCount; 
  int v10; 
  unsigned int v11; 
  scr_localVar_t *localVars; 

  type = sourcePos.type;
  if ( block->abortLevel == None )
  {
    if ( FindVariable(scrContext, scrContext->m_compilePub.scriptsDefine, name) )
      CompileError(scrContext, type, "Variable is already declared as a define");
    LocalCanonicalString = SL_GetLocalCanonicalString(name);
    localVarsCount = block->localVarsCount;
    v10 = 0;
    v11 = LocalCanonicalString;
    if ( localVarsCount <= 0 )
    {
LABEL_8:
      if ( localVarsCount >= 64 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042690, 1043i64);
        localVarsCount = block->localVarsCount;
      }
      block->localVars[localVarsCount].canonicalStr = v11;
      block->localVars[block->localVarsCount++].sourcePos = type;
    }
    else
    {
      localVars = block->localVars;
      while ( localVars->canonicalStr != LocalCanonicalString )
      {
        ++v10;
        ++localVars;
        if ( v10 >= localVarsCount )
          goto LABEL_8;
      }
    }
  }
}

/*
==============
Scr_TransferBlock
==============
*/
void Scr_TransferBlock(const scr_block_t *from, scr_block_t *to)
{
  int v4; 
  scr_localVar_t *localVars; 
  __int64 i; 
  int localVarsPublicCount; 
  int localVarsCreateCount; 
  int localVarsCount; 
  int v10; 
  scr_localVar_t v11; 
  scr_localVar_t *v12; 
  int v13; 
  int v14; 
  scr_localVar_t *v15; 
  __int64 v16; 
  __int64 v17; 

  if ( to->localVarsPublicCount > from->localVarsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 181, ASSERT_TYPE_ASSERT, "( to->localVarsPublicCount <= from->localVarsCount )", (const char *)&queryFormat, "to->localVarsPublicCount <= from->localVarsCount") )
    __debugbreak();
  v4 = 0;
  localVars = to->localVars;
  for ( i = 0i64; ; ++i )
  {
    localVarsPublicCount = to->localVarsPublicCount;
    if ( v4 >= localVarsPublicCount )
    {
      localVarsCreateCount = from->localVarsCreateCount;
      if ( v4 >= localVarsCreateCount )
        break;
    }
    localVarsCount = to->localVarsCount;
    v10 = v4;
    v11 = *(scr_localVar_t *)((char *)localVars + (char *)from - (char *)to);
    if ( v4 >= localVarsCount )
      goto LABEL_13;
    v12 = localVars;
    while ( v12->canonicalStr != v11.canonicalStr )
    {
      ++v10;
      ++v12;
      if ( v10 >= localVarsCount )
        goto LABEL_13;
    }
    if ( v10 < 0 )
    {
LABEL_13:
      v10 = to->localVarsCount;
      if ( localVarsCount >= 64 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144042690, 1043i64);
        localVarsCount = to->localVarsCount;
      }
      to->localVarsCount = localVarsCount + 1;
    }
    v13 = to->localVarsPublicCount;
    if ( v10 >= v13 )
    {
      v14 = v13 + 1;
      to->localVarsPublicCount = v14;
      if ( v14 > from->localVarsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 200, ASSERT_TYPE_ASSERT, "( to->localVarsPublicCount <= from->localVarsCount )", (const char *)&queryFormat, "to->localVarsPublicCount <= from->localVarsCount") )
        __debugbreak();
    }
    if ( v10 > i )
    {
      v15 = &to->localVars[v10];
      v16 = v10 - i;
      do
      {
        *v15 = v15[-1];
        --v15;
        --v16;
      }
      while ( v16 );
    }
    v17 = (__int64)v4 >> 3;
    *localVars = v11;
    if ( ((unsigned __int8)(1 << (v4 & 7)) & from->localVarsInitBits[v17]) != 0 )
      to->localVarsInitBits[v17] |= 1 << (v4 & 7);
    ++v4;
    ++localVars;
  }
  if ( localVarsCreateCount > localVarsPublicCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_compile_util.cpp", 217, ASSERT_TYPE_ASSERT, "( from->localVarsCreateCount <= to->localVarsPublicCount )", (const char *)&queryFormat, "from->localVarsCreateCount <= to->localVarsPublicCount") )
    __debugbreak();
  to->localVarsCreateCount = from->localVarsCreateCount;
  to->abortLevel = None;
}

