/*
==============
Scr_DisassembleFunction
==============
*/

void __fastcall Scr_DisassembleFunction(scrContext_t *scrContext, const char *filename, const char *funcname)
{
  ?Scr_DisassembleFunction@@YAXAEAUscrContext_t@@PEBD1@Z(scrContext, filename, funcname);
}

/*
==============
Scr_DisassembleWOptions
==============
*/

const char *__fastcall Scr_DisassembleWOptions(scrContext_t *scrContext, const char *pos, bool dPrint, scrDebugFunctionInfo *activeFunctionInfo)
{
  return ?Scr_DisassembleWOptions@@YAPEBDAEAUscrContext_t@@PEBD_NPEAUscrDebugFunctionInfo@@@Z(scrContext, pos, dPrint, activeFunctionInfo);
}

/*
==============
Scr_DisassembleAddress
==============
*/

void __fastcall Scr_DisassembleAddress(scrContext_t *scrContext, const char *codePos)
{
  ?Scr_DisassembleAddress@@YAXAEAUscrContext_t@@PEBD@Z(scrContext, codePos);
}

/*
==============
Scr_Disassemble
==============
*/

const char *__fastcall Scr_Disassemble(scrContext_t *scrContext, const char *pos)
{
  return ?Scr_Disassemble@@YAPEBDAEAUscrContext_t@@PEBD@Z(scrContext, pos);
}

/*
==============
Scr_GetLocalVarName
==============
*/

const char *__fastcall Scr_GetLocalVarName(unsigned int name)
{
  return ?Scr_GetLocalVarName@@YAPEBDI@Z(name);
}

/*
==============
Scr_FindUnusedVariables
==============
*/

void __fastcall Scr_FindUnusedVariables(scrContext_t *scrContext)
{
  ?Scr_FindUnusedVariables@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ClassifyFunctions
==============
*/

void __fastcall Scr_ClassifyFunctions(scrContext_t *scrContext)
{
  ?Scr_ClassifyFunctions@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_DisassemblePrint
==============
*/
void Scr_DisassemblePrint(const char *formatString, ...)
{
  char dest[16384]; 
  va_list va; 

  va_start(va, formatString);
  Com_vsprintf_truncate(dest, 0x4000ui64, 0x4000ui64, formatString, va);
  Com_Printf(23, (const char *)&queryFormat, dest);
}

/*
==============
Scr_RemoveLocalVarsPrint
==============
*/
const char *Scr_RemoveLocalVarsPrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  unsigned int v4; 
  const char *v5; 

  Scr_PrintOpHeader(def, pos);
  v4 = *((unsigned __int8 *)pos + 1);
  v5 = pos + 2;
  if ( s_ignoreLocalVars )
  {
    if ( s_disassemblePrint )
      Scr_DisPrint(" stack - %d\n", v4);
  }
  else
  {
    s_localVarCnt -= v4;
    if ( s_localVarCnt < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 833, ASSERT_TYPE_ASSERT, "(s_localVarCnt >= 0)", (const char *)&queryFormat, "s_localVarCnt >= 0") )
      __debugbreak();
    if ( s_disassemblePrint )
      Scr_DisPrint(" %d\n", v4);
  }
  return v5;
}

/*
==============
Scr_DefaultOpcodePrint
==============
*/
const char *Scr_DefaultOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  const char *v4; 
  __int64 v6; 
  OP_argType *args; 
  OP_argType v8; 

  v4 = pos + 1;
  Scr_PrintOpHeader(def, pos);
  v6 = 0i64;
  args = def->args;
  do
  {
    v8 = *args;
    if ( *args == OP_ARG_NONE )
      break;
    ++v6;
    ++args;
    v4 = Scr_DisassembleArg(scrContext, v8, v4);
  }
  while ( v6 < 5 );
  if ( s_disassemblePrint )
    Scr_DisPrint("\n");
  return v4;
}

/*
==============
Scr_WaitOpcodePrint
==============
*/
const char *Scr_WaitOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  ++s_threadDetectCount;
  if ( s_activeFunctionInfo )
    s_activeFunctionInfo->callsWait = 1;
  return Scr_DefaultOpcodePrint(scrContext, def, pos);
}

/*
==============
Scr_ScrFuncOpcodePrint
==============
*/
const char *Scr_ScrFuncOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  scrDebugFunctionInfo *v3; 
  int v6; 
  unsigned int functionCount; 
  scrDebugFunctionInfo *v8; 

  v3 = s_activeFunctionInfo;
  if ( s_activeFunctionInfo )
  {
    s_activeFunctionInfo->callsScrFunc = 1;
    v6 = 0;
    functionCount = scrContext->m_parserPub.functionCount;
    if ( functionCount )
    {
      while ( 1 )
      {
        v8 = &scrContext->m_parserPub.functionList[v6];
        if ( v8->codePosValue == &pos[(__int64)(int)(*(_DWORD *)pos << 8) >> 8] )
          break;
        if ( ++v6 >= functionCount )
          return Scr_DefaultOpcodePrint(scrContext, def, pos);
      }
      if ( v8->callsWait || v8->callsFuncWithWait )
      {
        ++s_threadDetectCount;
        v3->callsFuncWithWait = 1;
      }
      if ( s_classifyPass == 1 )
        ++v8->calledCount;
    }
  }
  return Scr_DefaultOpcodePrint(scrContext, def, pos);
}

/*
==============
Scr_FormalParamsPrint
==============
*/
const char *Scr_FormalParamsPrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  return Scr_FormalParamsPrint_Internal(scrContext, def, pos, OP_ARG_LVC);
}

/*
==============
Scr_FormalParamsPrint_Precompiled
==============
*/
const char *Scr_FormalParamsPrint_Precompiled(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  return Scr_FormalParamsPrint_Internal(scrContext, def, pos, OP_ARG_LVCP);
}

/*
==============
Scr_BuiltinOpcodePrint
==============
*/
const char *Scr_BuiltinOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  const char *v4; 
  const char *v6; 
  unsigned int v7; 
  int opcode; 
  unsigned int v9; 
  __int64 v10; 
  const char **m_pFuncNames; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 

  v4 = pos + 1;
  v6 = "badbuiltin";
  v7 = 0;
  Scr_PrintOpHeader(def, pos);
  opcode = def->opcode;
  switch ( def->opcode )
  {
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
      v9 = *(unsigned __int16 *)v4;
      v7 = opcode - 29;
      v4 += 2;
      builtin = v9;
      if ( (scrContext->m_funcBegin > v9 || v9 >= scrContext->m_funcEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 999, ASSERT_TYPE_ASSERT, "(( scrContext.m_funcBegin <= builtin ) && ( builtin < scrContext.m_funcEnd ))", (const char *)&queryFormat, "( scrContext.m_funcBegin <= builtin ) && ( builtin < scrContext.m_funcEnd )") )
        __debugbreak();
      goto LABEL_6;
    case 0x23:
      v13 = *(unsigned __int16 *)(v4 + 1);
      v7 = *(unsigned __int8 *)v4;
      v4 += 3;
      builtin = v13;
      if ( (scrContext->m_funcBegin > v13 || v13 >= scrContext->m_funcEnd) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1017, ASSERT_TYPE_ASSERT, "(( scrContext.m_funcBegin <= builtin ) && ( builtin < scrContext.m_funcEnd ))", (const char *)&queryFormat, "( scrContext.m_funcBegin <= builtin ) && ( builtin < scrContext.m_funcEnd )") )
      {
        __debugbreak();
        v10 = builtin - scrContext->m_funcBegin;
        m_pFuncNames = scrContext->m_pFuncNames;
      }
      else
      {
LABEL_6:
        v10 = builtin - scrContext->m_funcBegin;
        m_pFuncNames = scrContext->m_pFuncNames;
      }
      goto LABEL_23;
    case 0x34:
      return v4 + 1;
    case 0x7E:
    case 0x7F:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
      v14 = *(unsigned __int16 *)v4;
      v7 = opcode - 126;
      v4 += 2;
      builtin = v14;
      if ( scrContext->m_methBegin <= v14 && v14 < scrContext->m_methEnd )
        goto LABEL_22;
      v15 = 1032;
      goto LABEL_20;
    case 0x84:
      v16 = *(unsigned __int16 *)(v4 + 1);
      v7 = *(unsigned __int8 *)v4;
      v4 += 3;
      builtin = v16;
      if ( scrContext->m_methBegin <= v16 && v16 < scrContext->m_methEnd )
        goto LABEL_22;
      v15 = 1046;
LABEL_20:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", v15, ASSERT_TYPE_ASSERT, "(( scrContext.m_methBegin <= builtin ) && ( builtin < scrContext.m_methEnd ))", (const char *)&queryFormat, "( scrContext.m_methBegin <= builtin ) && ( builtin < scrContext.m_methEnd )") )
        __debugbreak();
LABEL_22:
      v10 = builtin - scrContext->m_methBegin;
      m_pFuncNames = scrContext->m_pMethNames;
LABEL_23:
      v6 = m_pFuncNames[v10];
      goto LABEL_24;
    case 0x93:
      if ( s_disassemblePrint )
        Scr_DisPrint(" (%d args)\n", *(unsigned __int8 *)v4);
      return v4 + 1;
    default:
LABEL_24:
      if ( s_disassemblePrint )
        Scr_DisPrint(" %s (%d args)\n", v6, v7);
      return v4;
  }
}

/*
==============
Scr_SwitchOpcodePrint
==============
*/
const char *Scr_SwitchOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  __int64 v6; 
  const char *v7; 
  unsigned __int16 v8; 
  const char *v9; 
  int v10; 
  unsigned int *v11; 
  const char *v12; 
  int v13; 
  bool v14; 
  __int64 v16; 
  __int64 v17; 
  char v18[16]; 

  Scr_PrintOpHeader(def, pos);
  v6 = *(int *)(pos + 1);
  if ( s_disassemblePrint )
  {
    Scr_DisPrint(" startcase @ ");
    if ( s_disassemblePrint )
    {
      Scr_DisPrint("0x%016llX", &pos[v6 + 5]);
      if ( s_disassemblePrint )
        Scr_DisPrint("\n");
    }
  }
  if ( s_calculateBlocks )
    Scr_AddBlockStart(pos, CTX_JUMPSWITCH, pos, 0);
  Scr_DisassembleLength(scrContext, pos + 5, def->opcode, v6);
  if ( s_disassemblePrint )
    Scr_DisPrint("0x%016llX", &pos[v6 + 5]);
  v7 = &pos[v6 + 7];
  v8 = *(_WORD *)&pos[v6 + 5];
  if ( s_disassemblePrint )
    Scr_DisPrint("\tcaseCount %d\n", v8);
  for ( ; v8; --v8 )
  {
    if ( s_disassemblePrint )
      Scr_DisPrint("0x%016llX", v7);
    v9 = v7 + 4;
    v10 = *((_DWORD *)v7 + 1) << 8;
    v11 = (unsigned int *)v7;
    v7 += 7;
    v12 = &v9[(__int64)v10 >> 8];
    if ( s_disassemblePrint )
    {
      Scr_DisPrint("\tcase %d: ", *v11);
      v13 = 0;
      v18[0] = 0;
      v14 = s_lastJumpTarget == 0;
      if ( s_lastJumpTarget <= 0 )
      {
LABEL_19:
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1111, ASSERT_TYPE_ASSERT, "(jmp > 0 || s_lastJumpTarget == 0)", (const char *)&queryFormat, "jmp > 0 || s_lastJumpTarget == 0", *(_QWORD *)v18) )
          __debugbreak();
      }
      else
      {
        while ( s_jumpTargets[v13].target != v12 )
        {
          if ( ++v13 >= s_lastJumpTarget )
          {
            v14 = s_lastJumpTarget == 0;
            goto LABEL_19;
          }
        }
        if ( v13 >= 26 )
          v16 = (v13 >= 676) + 2i64;
        else
          v16 = 1i64;
        v17 = 0i64;
        do
        {
          v18[v17++] = v13 % 26 + 65;
          v13 /= 26;
        }
        while ( v17 < v16 );
        *(_WORD *)&v18[v16] = 58;
      }
      Scr_DisPrint("\tjump %s\n", v18);
    }
    if ( s_gatherJumps )
      Scr_AddJumpTarget(v12);
    if ( s_calculateBlocks )
      Scr_AddBlockStart(v12, CTX_JUMPSWITCHTGT, pos, 0);
  }
  return v7;
}

/*
==============
Scr_EndSwitchOpcodePrint
==============
*/
const char *Scr_EndSwitchOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  s_handlingSwitch = 1;
  return Scr_DefaultOpcodePrint(scrContext, def, pos);
}

/*
==============
Scr_ProfPrint
==============
*/
const char *Scr_ProfPrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  unsigned int v5; 
  const char *v6; 
  bool v7; 
  unsigned __int8 v8; 
  __int16 *v9; 
  unsigned __int16 *v10; 

  Scr_PrintOpHeader(def, pos);
  v5 = *((unsigned __int8 *)pos + 1);
  v6 = pos + 2;
  v7 = s_disassemblePrint;
  if ( s_disassemblePrint )
  {
    Scr_DisPrint(" level=%d", v5);
    v7 = s_disassemblePrint;
  }
  if ( v5 == 1 )
  {
    v8 = *v6++;
    if ( v7 )
    {
      Scr_DisPrint(" iPI=%d", v8);
      v7 = s_disassemblePrint;
    }
  }
  if ( def->opcode == 160 )
  {
    v9 = (__int16 *)(v6 + 2);
    v10 = (unsigned __int16 *)v6;
    v6 += 4;
    if ( !v7 )
      return v6;
    Scr_DisPrint(" zNC=%d gPI=%d", *v10, (unsigned int)*v9);
    v7 = s_disassemblePrint;
  }
  if ( v7 )
    Scr_DisPrint("\n");
  return v6;
}

/*
==============
Scr_JumpOpcodePrint
==============
*/
const char *Scr_JumpOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  __int64 v3; 
  const char *v5; 
  bool v6; 
  char label[16]; 

  v3 = *(int *)(pos + 1);
  Scr_PrintOpHeader(def, pos);
  v5 = s_jumpAddr;
  if ( &pos[v3 + 5] > s_jumpAddr )
    v5 = &pos[v3 + 5];
  s_jumpAddr = v5;
  if ( s_disassemblePrint )
  {
    Scr_DisPrint(" ");
    if ( s_disassemblePrint )
      Scr_DisPrint("0x%016llX", &pos[v3 + 5]);
    if ( Scr_CheckJumpLabel(&pos[v3 + 5], label) <= 0 && s_lastJumpTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1205, ASSERT_TYPE_ASSERT, "(jmp > 0 || s_lastJumpTarget == 0)", (const char *)&queryFormat, "jmp > 0 || s_lastJumpTarget == 0") )
      __debugbreak();
    Scr_DisPrint("\t%s\n", label);
  }
  else
  {
    if ( s_gatherJumps )
      Scr_AddJumpTarget(&pos[v3 + 5]);
    if ( s_calculateBlocks && (int)v3 > 0 )
    {
      v6 = s_prevOpcode == 47 || s_prevOpcode == 59 || s_prevOpcode == 148;
      Scr_AddBlockStart(pos, CTX_JUMP, pos, v6);
      Scr_AddBlockStart(&pos[v3 + 5], CTX_JUMPTGT, pos, 0);
    }
  }
  return pos + 5;
}

/*
==============
Scr_JumpTestOpcodePrint
==============
*/
const char *Scr_JumpTestOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  int opcode; 
  unsigned __int16 v4; 
  const char *v6; 
  char label[16]; 

  opcode = def->opcode;
  v4 = *(_WORD *)(pos + 1);
  Scr_PrintOpHeader(def, pos);
  if ( opcode == 27 )
  {
    if ( s_disassemblePrint )
    {
      Scr_DisPrint(" ");
      if ( s_disassemblePrint )
        Scr_DisPrint("0x%016llX", &pos[-v4 + 3]);
      if ( Scr_CheckJumpLabel(&pos[-v4 + 3], label) <= 0 && s_lastJumpTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1282, ASSERT_TYPE_ASSERT, "(jmp > 0 || s_lastJumpTarget == 0)", (const char *)&queryFormat, "jmp > 0 || s_lastJumpTarget == 0") )
        __debugbreak();
      goto LABEL_11;
    }
    if ( s_gatherJumps )
      Scr_AddJumpTarget(&pos[-v4 + 3]);
    if ( s_calculateBlocks )
    {
      Scr_AddBlockStart(&pos[-v4 + 3], CTX_JUMPBACKTGT, pos, 0);
      Scr_AddBlockStart(pos + 3, CTX_JUMPBACK, pos, 0);
    }
  }
  else
  {
    v6 = s_jumpAddr;
    if ( &pos[v4 + 3] > s_jumpAddr )
      v6 = &pos[v4 + 3];
    s_jumpAddr = v6;
    if ( s_disassemblePrint )
    {
      Scr_DisPrint(" ");
      if ( s_disassemblePrint )
        Scr_DisPrint("0x%016llX", &pos[v4 + 3]);
      if ( Scr_CheckJumpLabel(&pos[v4 + 3], label) <= 0 && s_lastJumpTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1250, ASSERT_TYPE_ASSERT, "(jmp > 0 || s_lastJumpTarget == 0)", (const char *)&queryFormat, "jmp > 0 || s_lastJumpTarget == 0") )
        __debugbreak();
LABEL_11:
      Scr_DisPrint("\t%s\n", label);
      return pos + 3;
    }
    if ( s_gatherJumps )
      Scr_AddJumpTarget(&pos[v4 + 3]);
    if ( s_calculateBlocks && v4 )
    {
      Scr_AddBlockStart(pos + 3, CTX_JUMPIF, pos, 0);
      Scr_AddBlockStart(&pos[v4 + 3], CTX_JUMPIFTGT, pos, 0);
    }
  }
  return pos + 3;
}

/*
==============
Scr_EvalVariableOpcodePrint
==============
*/
const char *Scr_EvalVariableOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  const char *v4; 
  unsigned int v5; 
  void (*v6)(const char *, ...); 
  const char *CanonicalDebugString; 

  Scr_PrintOpHeader(def, pos);
  v4 = pos + 5;
  v5 = *(_DWORD *)(pos + 1);
  if ( s_disassemblePrint )
  {
    v6 = Scr_DisPrint;
    CanonicalDebugString = Scr_GetCanonicalDebugString(v5);
    v6(" \"%s\"\n", CanonicalDebugString);
  }
  return v4;
}

/*
==============
Scr_LocalVarOpcodePrint
==============
*/
const char *Scr_LocalVarOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  const char *v4; 
  __int64 v5; 
  int opcode; 
  unsigned int v7; 
  unsigned int v8; 
  const char *v9; 
  __int64 v10; 
  unsigned int v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  int v17; 
  void (*v18)(const char *, ...); 
  const char *v19; 
  __int64 v20; 
  void (*v21)(const char *, ...); 
  const char *CanonicalDebugString; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  bool *v26; 
  unsigned int *v27; 
  __int64 v28; 
  const char *v30; 

  v4 = pos + 1;
  LODWORD(v5) = 0;
  Scr_PrintOpHeader(def, pos);
  opcode = def->opcode;
  switch ( def->opcode )
  {
    case 1:
    case 0x44:
    case 0x47:
    case 0x63:
    case 0x71:
    case 0x8E:
      LODWORD(v5) = *(unsigned __int8 *)v4++;
      if ( s_ignoreLocalVars )
        break;
      if ( s_localVarCnt - (int)v5 - 1 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1433, ASSERT_TYPE_ASSERT, "(( s_localVarCnt - idx - 1 ) >= 0)", (const char *)&queryFormat, "( s_localVarCnt - idx - 1 ) >= 0") )
        __debugbreak();
      LODWORD(v5) = s_localVarCnt - v5 - 1;
      if ( (int)v5 >= 0 )
        goto LABEL_32;
      v17 = 1435;
      goto LABEL_30;
    case 3:
      v23 = *(unsigned __int8 *)v4;
      if ( !s_ignoreLocalVars )
      {
        s_localVarCnt -= v23;
        if ( s_localVarCnt < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1451, ASSERT_TYPE_ASSERT, "(s_localVarCnt >= 0)", (const char *)&queryFormat, "s_localVarCnt >= 0") )
          __debugbreak();
        if ( (_DWORD)v23 )
        {
          v24 = v23;
          v25 = s_localUnusedVarCnt;
          v26 = &s_localVarUsed[s_localVarCnt];
          v27 = &s_localVarScrNames[s_localVarCnt];
          do
          {
            if ( !*v26 )
            {
              v28 = v25++;
              s_localUnusedVarScrNames[v28] = *v27;
            }
            ++v26;
            ++v27;
            --v24;
          }
          while ( v24 );
          s_localUnusedVarCnt = v25;
        }
      }
      if ( s_disassemblePrint )
        Scr_DisPrint(" %d\n", (unsigned int)v23);
      return v4 + 1;
    case 0x11:
    case 0x24:
    case 0x2E:
    case 0x3E:
    case 0x8F:
      if ( s_ignoreLocalVars )
        break;
      LODWORD(v5) = s_localVarCnt - 1;
      if ( s_localVarCnt - 1 < 0 )
      {
        v17 = 1393;
LABEL_30:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", v17, ASSERT_TYPE_ASSERT, "(idx >= 0)", (const char *)&queryFormat, "idx >= 0") )
          __debugbreak();
      }
LABEL_32:
      if ( Scr_TestEvalVariable(def->opcode) )
        s_localVarUsed[v20] = 1;
      if ( !s_disassemblePrint )
        return v4;
      v21 = Scr_DisPrint;
      CanonicalDebugString = Scr_GetCanonicalDebugString(s_localVarScrNames[v20]);
      v21(" %s", CanonicalDebugString);
      break;
    case 0x30:
    case 0x45:
    case 0x52:
    case 0x5B:
      v11 = *(unsigned __int16 *)v4;
      s_localVarScrName = 0;
      v12 = Scr_GetCanonicalDebugString(v11);
      s_localVarScrName = v11;
      if ( s_disassemblePrint )
        Scr_DisPrint(" %s", v12);
      v4 += 2;
      goto $ProcessLocalVars;
    case 0x3F:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
      if ( s_ignoreLocalVars )
      {
        LODWORD(v5) = opcode - 62;
      }
      else
      {
        LODWORD(v5) = s_localVarCnt - opcode + 61;
        if ( (int)v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1414, ASSERT_TYPE_ASSERT, "(idx >= 0)", (const char *)&queryFormat, "idx >= 0") )
          __debugbreak();
        if ( s_disassemblePrint )
        {
          v18 = Scr_DisPrint;
          v19 = Scr_GetCanonicalDebugString(s_localVarScrNames[(int)v5]);
          v18(" %s", v19);
        }
        s_localVarUsed[(int)v5] = 1;
      }
      break;
    case 0xB9:
    case 0xBA:
    case 0xBB:
    case 0xBC:
      v7 = *(unsigned __int8 *)v4++;
      v8 = v7;
      s_localVarScrName = 0;
      v9 = j_va("lv%d", v7);
      s_localVarScrName = SL_GetCanonicalString(v9);
      if ( s_disassemblePrint )
        Scr_DisPrint(" lv%d", v8);
$ProcessLocalVars:
      if ( s_ignoreLocalVars )
        break;
      v5 = s_localVarCnt;
      if ( (unsigned __int64)s_localVarCnt >= 0x100 )
      {
        j___report_rangecheckfailure(v10);
        __debugbreak();
      }
      v13 = def->opcode;
      s_localVarUsed[s_localVarCnt] = 0;
      if ( Scr_TestEvalVariable(v13) )
        s_localVarUsed[v5] = 1;
      s_localVarScrNames[v5] = s_localVarScrName;
      s_localVarCnt = v5 + 1;
      if ( (int)v5 + 1 < 256 )
        break;
      v14 = "s_localVarCnt < MAX_LOCALVARS";
      v15 = 1378;
      v16 = "(s_localVarCnt < 256)";
LABEL_50:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", v15, ASSERT_TYPE_ASSERT, v16, (const char *)&queryFormat, v14) )
        __debugbreak();
      break;
    default:
      v14 = "0";
      v15 = 1468;
      v16 = "(0)";
      goto LABEL_50;
  }
  if ( s_disassemblePrint )
  {
    v30 = " lv%d\n";
    if ( s_ignoreLocalVars )
      v30 = " stack-%d\n";
    Scr_DisPrint(v30, (unsigned int)v5);
  }
  return v4;
}

/*
==============
Scr_ScriptFunctionOpcodePrint
==============
*/
const char *Scr_ScriptFunctionOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  int v5; 
  const char *v6; 
  scrDebugFunctionInfo *v7; 
  const char *v8; 
  const char *v9; 
  int v10; 
  unsigned int functionCount; 
  scrDebugFunctionInfo *v12; 
  char buf[1024]; 

  Scr_PrintOpHeader(def, pos);
  v5 = *(_DWORD *)(pos + 1);
  v6 = pos + 1;
  v7 = s_activeFunctionInfo;
  v8 = pos + 4;
  v9 = &v6[(__int64)(v5 << 8) >> 8];
  if ( s_activeFunctionInfo )
  {
    s_activeFunctionInfo->callsScrFunc = 1;
    v10 = 0;
    functionCount = scrContext->m_parserPub.functionCount;
    if ( functionCount )
    {
      while ( 1 )
      {
        v12 = &scrContext->m_parserPub.functionList[v10];
        if ( v12->codePosValue == v9 )
          break;
        if ( ++v10 >= functionCount )
          goto LABEL_11;
      }
      if ( v12->callsWait || v12->callsFuncWithWait )
      {
        ++s_threadDetectCount;
        v7->callsFuncWithWait = 1;
      }
      if ( s_classifyPass == 1 )
        ++v12->calledCount;
    }
  }
LABEL_11:
  if ( s_disassemblePrint )
  {
    Scr_FindScriptFunction(scrContext, v9, buf, 0x400u);
    Scr_DisPrint(" %s\n", buf);
  }
  return v8;
}

/*
==============
Scr_ScriptNativeFunctionOpcodePrint
==============
*/
const char *Scr_ScriptNativeFunctionOpcodePrint(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos)
{
  unsigned __int16 v4; 

  Scr_PrintOpHeader(def, pos);
  v4 = *(_WORD *)(pos + 1);
  if ( pos[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_bytecode_util.h", 141, ASSERT_TYPE_ASSERT, "( *codePos == 0 )", (const char *)&queryFormat, "*codePos == 0") )
    __debugbreak();
  if ( s_disassemblePrint )
    Scr_DisPrint(" %d\n", v4);
  return pos + 4;
}

/*
==============
InitBlockNodes
==============
*/
blockType_t *InitBlockNodes()
{
  blockNode_s *v0; 
  __int64 v1; 
  blockNode_s *v2; 
  blockNode_s *v3; 
  blockType_t *result; 
  __int64 v5; 

  v0 = s_blockNodes;
  v1 = 1023i64;
  s_freeBlockNodes = s_blockNodes;
  v2 = s_blockNodes;
  v3 = s_blockNodes + 1;
  do
  {
    v2->next = v3++;
    v2->opcodePos = NULL;
    ++v2;
    --v1;
  }
  while ( v1 );
  result = s_blocks;
  v5 = 1024i64;
  v0[1023].opcodePos = NULL;
  v0[1023].next = NULL;
  s_numBlocks = 0;
  do
  {
    result->begin = NULL;
    result->blocks = NULL;
    ++result;
    --v5;
  }
  while ( v5 );
  return result;
}

/*
==============
Scr_AddBlockStart
==============
*/
__int64 Scr_AddBlockStart(const char *begin, contextType_t context, const char *opcodePos, bool mustBeReferenced)
{
  blockNode_s *v4; 
  int v9; 
  int v10; 
  blockType_t *v11; 
  const char **p_begin; 
  __int64 result; 
  __int64 v14; 
  blockType_t *v15; 
  bool v16; 

  v4 = s_freeBlockNodes;
  if ( !s_freeBlockNodes )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 331, ASSERT_TYPE_ASSERT, "(s_freeBlockNodes)", (const char *)&queryFormat, "s_freeBlockNodes") )
      __debugbreak();
    v4 = s_freeBlockNodes;
  }
  v9 = 0;
  v10 = s_numBlocks;
  v11 = s_blocks;
  s_freeBlockNodes = v4->next;
  v4->next = NULL;
  v4->opcodePos = opcodePos;
  v4->context = context;
  if ( v10 <= 0 )
  {
LABEL_9:
    if ( v10 >= 1024 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 355, ASSERT_TYPE_ASSERT, "(s_numBlocks < 1024)", (const char *)&queryFormat, "s_numBlocks < MAX_BLOCKS") )
        __debugbreak();
      v11 = s_blocks;
      v10 = s_numBlocks;
    }
    result = (unsigned int)v10;
    v14 = v10;
    v11[v14].begin = begin;
    s_numBlocks = v10 + 1;
    v11[v14].blocks = v4;
    v11[v14].mustBeReferenced = mustBeReferenced;
  }
  else
  {
    p_begin = &v11->begin;
    while ( *p_begin != begin )
    {
      ++v9;
      p_begin += 3;
      if ( v9 >= v10 )
        goto LABEL_9;
    }
    v15 = &v11[v9];
    v16 = v15->mustBeReferenced || mustBeReferenced;
    v15->mustBeReferenced = v16;
    v4->next = v15->blocks;
    v15->blocks = v4;
    return (unsigned int)v9;
  }
  return result;
}

/*
==============
Scr_AddContext
==============
*/
__int64 Scr_AddContext(const char *pos)
{
  int v1; 
  __int64 result; 
  LocalVars_t *v4; 

  v1 = s_maxLocalVarContext;
  if ( s_maxLocalVarContext >= 512 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 396, ASSERT_TYPE_ASSERT, "(s_maxLocalVarContext < 512)", (const char *)&queryFormat, "s_maxLocalVarContext < MAX_LV_BLOCK_DEPTH") )
      __debugbreak();
    v1 = s_maxLocalVarContext;
  }
  result = 0i64;
  if ( v1 <= 0 )
    goto LABEL_11;
  v4 = s_localVarContexts;
  while ( v4->pos != pos )
  {
    result = (unsigned int)(result + 1);
    ++v4;
    if ( (int)result >= v1 )
      goto LABEL_11;
  }
  if ( (int)result < 0 )
  {
LABEL_11:
    result = (unsigned int)v1;
    s_maxLocalVarContext = v1 + 1;
    s_localVarContexts[v1].pos = pos;
  }
  return result;
}

/*
==============
Scr_AddJumpTarget
==============
*/
void Scr_AddJumpTarget(const char *tgt)
{
  int v1; 
  int v2; 
  JumpTarget_t *v4; 

  v1 = s_lastJumpTarget;
  v2 = 0;
  if ( s_lastJumpTarget <= 0 )
  {
LABEL_5:
    if ( s_lastJumpTarget >= 512 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 199, ASSERT_TYPE_ASSERT, "(s_lastJumpTarget < 512)", (const char *)&queryFormat, "s_lastJumpTarget < MAX_JUMP_TARGETS") )
        __debugbreak();
      v1 = s_lastJumpTarget;
    }
    s_lastJumpTarget = v1 + 1;
    s_jumpTargets[v1].target = tgt;
  }
  else
  {
    v4 = s_jumpTargets;
    while ( v4->target != tgt )
    {
      ++v2;
      ++v4;
      if ( v2 >= s_lastJumpTarget )
        goto LABEL_5;
    }
  }
}

/*
==============
Scr_CheckContextChange
==============
*/
void Scr_CheckContextChange(const char *pos)
{
  char v2; 
  int v3; 
  actionType_t action; 
  __int64 context; 
  unsigned int v6; 
  int v7; 
  unsigned int *v8; 
  int v9; 
  unsigned int *v10; 
  LocalVars_t *v11; 
  bool v12; 
  int v13; 
  unsigned int *v14; 

  if ( s_numActionBlocks > 0 && s_currentActionBlock < s_numActionBlocks )
  {
    if ( pos > s_actionBlocks[s_currentActionBlock].pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 529, ASSERT_TYPE_ASSERT, "(pos <= s_actionBlocks[s_currentActionBlock].pos)", (const char *)&queryFormat, "pos <= s_actionBlocks[s_currentActionBlock].pos") )
      __debugbreak();
    v2 = 0;
    if ( s_currentActionBlock < s_numActionBlocks )
    {
      v3 = s_localVarCnt;
      while ( 1 )
      {
        if ( pos != s_actionBlocks[s_currentActionBlock].pos )
          return;
        action = s_actionBlocks[s_currentActionBlock].action;
        context = s_actionBlocks[s_currentActionBlock].context;
        v6 = v3;
        if ( action )
          break;
        v11 = &s_localVarContexts[context];
        memcpy_0(v11->localVarScrNames, s_localVarScrNames, 4i64 * v3);
        v12 = !s_debugContextChanges;
        v11->localVarCnt = v3;
        if ( !v12 )
        {
          Scr_DisPrint("---- Context Copy to %d  lvc=%d\n", (unsigned int)context, (unsigned int)v3);
          Scr_DisPrint("       ");
          v13 = 0;
          if ( s_localVarCnt > 0 )
          {
            v14 = s_localVarScrNames;
            do
            {
              Scr_DisPrint("%d ", *v14);
              ++v13;
              ++v14;
            }
            while ( v13 < s_localVarCnt );
          }
LABEL_32:
          Scr_DisPrint("\n");
          v3 = s_localVarCnt;
        }
LABEL_33:
        if ( ++s_currentActionBlock >= s_numActionBlocks )
          return;
      }
      if ( action != ACT_RESTORE )
        goto LABEL_33;
      if ( v2 )
      {
        if ( v3 == s_localVarContexts[context].localVarCnt )
        {
          v7 = 0;
          if ( v3 > 0 )
          {
            v8 = s_localVarScrNames;
            do
            {
              if ( *v8 != *(_DWORD *)((char *)&s_localVarContexts->pos + (_QWORD)v8 + 1040 * context - (_QWORD)s_localVarScrNames + 12) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 560, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_CheckContextChange: localVarContexts don't match with multiple restores on the same opcode\n") )
                  __debugbreak();
                v3 = s_localVarCnt;
              }
              ++v7;
              ++v8;
            }
            while ( v7 < v3 );
          }
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 566, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scr_CheckContextChange: localVarCnts don't match with multiple restores on the same opcode\n") )
        {
          __debugbreak();
        }
      }
      v2 = 1;
      s_localVarCnt = s_localVarContexts[context].localVarCnt;
      v3 = s_localVarCnt;
      memcpy_0(s_localVarScrNames, s_localVarContexts[context].localVarScrNames, 4i64 * s_localVarCnt);
      if ( !s_debugContextChanges )
        goto LABEL_33;
      Scr_DisPrint("---- Context Restore from %d  lvc %d -> %d\n", (unsigned int)context, v6, (unsigned int)v3);
      Scr_DisPrint("       ");
      v9 = 0;
      if ( s_localVarCnt > 0 )
      {
        v10 = s_localVarScrNames;
        do
        {
          Scr_DisPrint("%d ", *v10);
          ++v9;
          ++v10;
        }
        while ( v9 < s_localVarCnt );
      }
      goto LABEL_32;
    }
  }
}

/*
==============
Scr_CheckJumpLabel
==============
*/
__int64 Scr_CheckJumpLabel(const char *tgt, char *label)
{
  int v2; 
  __int64 v3; 
  int v4; 
  unsigned int v6; 
  __int64 v7; 

  v2 = s_lastJumpTarget;
  v3 = 0i64;
  *label = 0;
  v4 = 0;
  if ( v2 <= 0 )
    return 0i64;
  while ( s_jumpTargets[v4].target != tgt )
  {
    if ( ++v4 >= v2 )
      return 0i64;
  }
  if ( v4 >= 26 )
  {
    if ( v4 >= 676 )
    {
      v6 = 4;
      v7 = 3i64;
    }
    else
    {
      v6 = 3;
      v7 = 2i64;
    }
  }
  else
  {
    v6 = 2;
    v7 = 1i64;
  }
  do
  {
    label[v3++] = v4 % 26 + 65;
    v4 /= 26;
  }
  while ( v3 < v7 );
  *(_WORD *)&label[v7] = 58;
  return v6;
}

/*
==============
Scr_ClassifyFunctions
==============
*/
void Scr_ClassifyFunctions(scrContext_t *scrContext)
{
  unsigned int i; 
  scrDebugFunctionInfo *v3; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 
  scrDebugFunctionInfo *v7; 
  const char *codePosValue; 
  unsigned int j; 
  scrDebugFunctionInfo *v10; 
  const char *v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  Mem_LargeLocal v18; 
  Mem_LargeLocal v19; 
  Mem_LargeLocal v20; 
  Mem_LargeLocal v21; 

  Mem_LargeLocal::Mem_LargeLocal(&v21, 0x82000ui64, "localVarContexts_t localVarContexts");
  s_localVarContexts = (LocalVars_t *)v21.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v20, 0x8000ui64, "actionBlocks_t actionBlocks");
  s_actionBlocks = (actionBlock_t *)v20.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v19, 0x6000ui64, "blockTypes_t blocks");
  s_blocks = (blockType_t *)v19.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v18, 0x6000ui64, "blockNodes_t blockNodes");
  s_blockNodes = (blockNode_s *)v18.m_ptr;
  s_lastJumpTarget = 0;
  s_numBlocks = 0;
  s_disassemblePrint = 0;
  s_gatherJumps = 0;
  s_ignoreLocalVars = 1;
  s_calculateBlocks = 0;
  s_activeFunctionInfo = NULL;
  InitBlockNodes();
  for ( i = 0; i < scrContext->m_parserPub.functionCount; ++i )
  {
    v3 = &scrContext->m_parserPub.functionList[i];
    *(_WORD *)&v3->callsWait = 0;
    v3->callsScrFunc = 0;
    v3->calledCount = 0;
  }
  v4 = 1;
  s_classifyPass = 1;
  v5 = s_threadDetectCount;
  do
  {
    Com_Printf(23, "Classify pass %d, threadDetectCount = %d\n", v4, (unsigned int)v5);
    v5 = 0;
    s_threadDetectCount = 0;
    v6 = 0;
    if ( scrContext->m_parserPub.functionCount )
    {
      do
      {
        v7 = &scrContext->m_parserPub.functionList[v6];
        if ( s_debugCatchFuncIdx >= 0 && s_debugCatchFuncIdx == v6 )
          Com_Printf(23, "Caught function %s\n", v7->name);
        s_activeFunctionInfo = v7;
        s_lastJumpTarget = 0;
        if ( !v7->callsWait && !v7->callsFuncWithWait )
        {
          codePosValue = v7->codePosValue;
          s_prevLine = -1;
          if ( codePosValue )
          {
            s_localVarCnt = 0;
            s_localUnusedVarCnt = 0;
            s_jumpAddr = NULL;
            Scr_DisassembleLength(scrContext, codePosValue, -1, 0);
          }
        }
        ++v6;
      }
      while ( v6 < scrContext->m_parserPub.functionCount );
      v5 = s_threadDetectCount;
    }
    v4 = ++s_classifyPass;
  }
  while ( v5 > 0 );
  s_activeFunctionInfo = NULL;
  s_classifyPass = 0;
  Com_Printf(23, "file,function,callsScrFunc,callsWait,callsFuncWithWait,calledCount,size\n");
  for ( j = 0; j < scrContext->m_parserPub.functionCount; ++j )
  {
    v10 = &scrContext->m_parserPub.functionList[j];
    s_lastJumpTarget = 0;
    v11 = v10->codePosValue;
    s_prevLine = -1;
    if ( v11 )
    {
      s_localVarCnt = 0;
      s_localUnusedVarCnt = 0;
      s_jumpAddr = NULL;
      v12 = (unsigned int)Scr_DisassembleLength(scrContext, v11, -1, 0);
      LODWORD(v11) = v10->codePosValue;
    }
    else
    {
      v12 = 0;
    }
    LODWORD(v17) = v12 - (_DWORD)v11;
    LODWORD(v16) = v10->calledCount;
    LODWORD(v15) = v10->callsFuncWithWait;
    LODWORD(v14) = v10->callsWait;
    LODWORD(v13) = v10->callsScrFunc;
    Com_Printf(23, "%s,%s,%d,%d,%d,%d,%d\n", v10->filenameExt, v10->name, v13, v14, v15, v16, v17);
  }
  s_disassemblePrint = 1;
  s_localVarContexts = NULL;
  s_actionBlocks = NULL;
  s_blocks = NULL;
  s_blockNodes = NULL;
  Mem_LargeLocal::~Mem_LargeLocal(&v18);
  Mem_LargeLocal::~Mem_LargeLocal(&v19);
  Mem_LargeLocal::~Mem_LargeLocal(&v20);
  Mem_LargeLocal::~Mem_LargeLocal(&v21);
}

/*
==============
Scr_CompareActionBlocks
==============
*/
bool Scr_CompareActionBlocks(actionBlock_t *a, actionBlock_t *b)
{
  actionType_t action; 
  bool result; 

  result = 1;
  if ( a->pos >= b->pos )
  {
    if ( a->pos != b->pos )
      return 0;
    action = a->action;
    if ( action <= b->action && (action != b->action || a->context <= b->context) )
      return 0;
  }
  return result;
}

/*
==============
Scr_CompareBlocks
==============
*/
bool Scr_CompareBlocks(blockType_t *a, blockType_t *b)
{
  return a->begin < b->begin;
}

/*
==============
Scr_CompareTargets
==============
*/
bool Scr_CompareTargets(JumpTarget_t *a, JumpTarget_t *b)
{
  return a->target < b->target;
}

/*
==============
Scr_Disassemble
==============
*/
const char *Scr_Disassemble(scrContext_t *scrContext, const char *pos)
{
  return Scr_DisassembleWOptions(scrContext, pos, 1, NULL);
}

/*
==============
Scr_DisassembleAddress
==============
*/
void Scr_DisassembleAddress(scrContext_t *scrContext, const char *codePos)
{
  char buf[1024]; 

  Scr_FindScriptFunction(scrContext, codePos, buf, 0x400u);
  Com_Printf(23, "Disassemble from address within %s\n", buf);
  Scr_DisassembleWOptions(scrContext, codePos, 1, NULL);
}

/*
==============
Scr_DisassembleArg
==============
*/
const char *Scr_DisassembleArg(const scrContext_t *scrContext, OP_argType arg, const char *pos)
{
  unsigned int v3; 
  __int64 v4; 
  const char *v6; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  unsigned int functionCount; 
  scrDebugFunctionInfo *functionList; 
  __int64 v13; 
  unsigned __int16 NativeCodePos; 
  unsigned int v15; 
  const char *CanonicalDebugString; 
  unsigned int v17; 
  const char *v18; 
  unsigned int v19; 
  void (*v20)(const char *, ...); 
  const char *v21; 
  char *posa; 
  int v24; 
  char dest[1024]; 

  v3 = 0;
  posa = (char *)pos;
  v4 = (unsigned int)(arg - 1);
  s_localVarScrName = 0;
  v6 = pos;
  switch ( (int)v4 )
  {
    case 0:
      v6 = pos + 4;
      if ( s_disassemblePrint )
        Scr_DisPrint(" %d", *(unsigned int *)pos);
      break;
    case 1:
      v6 = pos + 8;
      v7 = *(_QWORD *)pos;
      if ( s_disassemblePrint )
      {
        Scr_DisPrint(" ", v4, pos, 0x140000000ui64);
        if ( s_disassemblePrint )
          Scr_DisPrint("0x%016llX", v7);
      }
      break;
    case 2:
      v6 = pos + 1;
      if ( s_disassemblePrint )
        Scr_DisPrint(" %d", *(unsigned __int8 *)pos);
      break;
    case 3:
      v6 = pos + 4;
      v8 = SL_ConvertToString((scr_string_t)*(_DWORD *)pos);
      if ( s_disassemblePrint )
        Scr_DisPrint(" \"%s\"", v8);
      break;
    case 4:
      v6 = pos + 2;
      if ( s_disassemblePrint )
        Scr_DisPrint(" %d", *(unsigned __int16 *)pos);
      break;
    case 5:
      v6 = pos + 4;
      LODWORD(posa) = *(_DWORD *)pos;
      if ( s_disassemblePrint )
        Scr_DisPrint(" %f", *(float *)&posa, pos, 0x140000000ui64);
      break;
    case 6:
      v6 = pos + 12;
      v9 = *((_DWORD *)pos + 2);
      posa = *(char **)pos;
      v24 = v9;
      if ( s_disassemblePrint )
        Scr_DisPrint(" [%f, %f, %f]", *(float *)&posa, *((float *)&posa + 1), v24);
      break;
    case 7:
      v6 = pos + 3;
      v10 = &pos[(__int64)(int)(*(_DWORD *)pos << 8) >> 8];
      if ( s_disassemblePrint )
      {
        Scr_DisPrint(" ", v4, pos, 0x140000000ui64);
        functionCount = scrContext->m_parserPub.functionCount;
        if ( functionCount )
        {
          functionList = scrContext->m_parserPub.functionList;
          while ( functionList[v3].codePosValue != v10 )
          {
            if ( ++v3 >= functionCount )
              goto LABEL_24;
          }
          v13 = v3;
          Core_strcpy(dest, 0x400ui64, functionList[v13].filenameExt);
          I_strcat(dest, 0x400ui64, "::");
          I_strcat(dest, 0x400ui64, scrContext->m_parserPub.functionList[v13].name);
          Scr_DisPrint((const char *)&queryFormat, dest);
        }
        else
        {
LABEL_24:
          if ( s_disassemblePrint )
            Scr_DisPrint("0x%016llX", v10);
        }
      }
      break;
    case 8:
      NativeCodePos = Scr_ReadNativeCodePos((const char **)&posa);
      if ( s_disassemblePrint )
      {
        Scr_DisPrint(" ");
        Scr_DisPrint("%d", NativeCodePos);
      }
      v6 = posa;
      break;
    case 9:
      v15 = *(unsigned __int16 *)pos;
      v6 = pos + 2;
      CanonicalDebugString = Scr_GetCanonicalDebugString(v15);
      s_localVarScrName = v15;
      if ( s_disassemblePrint )
        Scr_DisPrint(" %s", CanonicalDebugString);
      break;
    case 10:
      v6 = pos + 1;
      v17 = *(unsigned __int8 *)pos;
      v18 = j_va("lv%d", *(unsigned __int8 *)pos);
      s_localVarScrName = SL_GetCanonicalString(v18);
      if ( s_disassemblePrint )
        Scr_DisPrint(" lv%d", v17);
      break;
    case 11:
      v6 = pos + 1;
      v19 = scrContext->m_vmPub.localVars[-*(unsigned __int8 *)pos];
      if ( s_disassemblePrint && !s_ignoreLocalVars )
      {
        v20 = Scr_DisPrint;
        v21 = Scr_GetCanonicalDebugString(*(&s_localUnusedVarCnt + s_localVarCnt - *(unsigned __int8 *)pos));
        v20(" %s %d", v21, v19);
      }
      break;
    case 12:
      v6 = pos + 1;
      if ( s_disassemblePrint )
        Scr_DisPrint(" ( %d args )", *(unsigned __int8 *)pos);
      break;
    default:
      return v6;
  }
  return v6;
}

/*
==============
Scr_DisassembleFunction
==============
*/
void Scr_DisassembleFunction(scrContext_t *scrContext, const char *filename, const char *funcname)
{
  unsigned int v3; 
  __int64 v7; 
  const char *filenameExt; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  const char *name; 
  const char *v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 

  v3 = 0;
  if ( scrContext->m_parserPub.functionCount )
  {
LABEL_2:
    if ( filename )
    {
      v7 = 0x7FFFFFFFi64;
      filenameExt = scrContext->m_parserPub.functionList[v3].filenameExt;
      if ( !filenameExt && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v9 = (const char *)(filename - filenameExt);
      do
      {
        v10 = (unsigned __int8)filenameExt[(_QWORD)v9];
        v11 = v7;
        v12 = *(unsigned __int8 *)filenameExt++;
        --v7;
        if ( !v11 )
          break;
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
          {
LABEL_31:
            if ( ++v3 < scrContext->m_parserPub.functionCount )
              goto LABEL_2;
            goto LABEL_32;
          }
        }
      }
      while ( v10 );
    }
    v15 = 0x7FFFFFFFi64;
    name = scrContext->m_parserPub.functionList[v3].name;
    if ( !funcname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v17 = (const char *)(funcname - name);
    do
    {
      v18 = (unsigned __int8)name[(_QWORD)v17];
      v19 = v15;
      v20 = *(unsigned __int8 *)name++;
      --v15;
      if ( !v19 )
        break;
      if ( v18 != v20 )
      {
        v21 = v18 + 32;
        if ( (unsigned int)(v18 - 65) > 0x19 )
          v21 = v18;
        v18 = v21;
        v22 = v20 + 32;
        if ( (unsigned int)(v20 - 65) > 0x19 )
          v22 = v20;
        if ( v18 != v22 )
          goto LABEL_31;
      }
    }
    while ( v18 );
  }
LABEL_32:
  if ( v3 < scrContext->m_parserPub.functionCount )
  {
    Scr_DisassembleWOptions(scrContext, scrContext->m_parserPub.functionList[v3].codePosValue, 1, NULL);
  }
  else if ( filename )
  {
    Com_Printf(23, "Script Disassembly unable to find file %s function %s\n", filename, funcname);
  }
  else
  {
    Com_Printf(23, "Script Disassembly unable to find function %s\n", funcname);
  }
}

/*
==============
Scr_DisassembleLength
==============
*/
const char *Scr_DisassembleLength(scrContext_t *scrContext, const char *pos, int prevOpcode, int len)
{
  int v4; 
  __int64 v5; 
  const char *v6; 
  scrContext_t *v7; 
  const char *v8; 
  int v9; 
  opcoodePrintDef_s *v10; 
  int v11; 
  ScriptCodePos v12; 
  int v13; 
  bool v14; 
  opcoodePrintDef_s *v15; 
  const char *result; 
  int msgPos; 
  scrContext_t *v18; 
  char msg[1024]; 

  v4 = len;
  msgPos = len;
  LODWORD(v5) = prevOpcode;
  v18 = scrContext;
  v6 = pos;
  v7 = scrContext;
  v8 = NULL;
  if ( len > 0 )
    v8 = &pos[len];
  if ( !s_opcodePrintListInitialized )
  {
    v9 = 0;
    v10 = s_opcodePrintList;
    do
    {
      if ( v10->opcode != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1799, ASSERT_TYPE_ASSERT, "( s_opcodePrintList[opcodeIndex].opcode == opcodeIndex )", (const char *)&queryFormat, "s_opcodePrintList[opcodeIndex].opcode == opcodeIndex") )
        __debugbreak();
      ++v9;
      ++v10;
    }
    while ( (__int64)v10 < (__int64)&unk_147EF3F90 );
    v7 = v18;
    v4 = msgPos;
    s_opcodePrintListInitialized = 1;
  }
  s_prevOpcode = v5;
  while ( 1 )
  {
    v11 = s_prevLine;
    if ( s_disassemblePrint && v7->m_varPub.developer )
    {
      msgPos = 0;
      v12.m_scriptPos = ScriptCodePos::CreateScriptPos(v6 + 1).m_scriptPos;
      v13 = Scr_PrintPrevCodePosToBufferWOptions(v7, msg, 1024, &msgPos, v12, 0, 0, 1, 0);
      if ( v13 != v11 )
        Scr_DisPrint((const char *)&queryFormat, msg);
    }
    else
    {
      v13 = -1;
    }
    s_prevLine = v13;
    if ( !s_ignoreLocalVars )
      Scr_CheckContextChange(v6);
    s_prevOpcode = v5;
    v5 = *(unsigned __int8 *)v6;
    if ( (unsigned int)v5 >= 0xBE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1868, ASSERT_TYPE_ASSERT, "(( opcode >= 0 ) && ( opcode < OP_count ))", (const char *)&queryFormat, "( opcode >= OP_Begin ) && ( opcode < OP_count )") )
      __debugbreak();
    v14 = s_handlingSwitch;
    if ( (_BYTE)v5 != 0x94 )
      v14 = 0;
    s_handlingSwitch = v14;
    v15 = &s_opcodePrintList[v5];
    if ( v15->opcode != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 1871, ASSERT_TYPE_ASSERT, "(def->opcode == opcode)", (const char *)&queryFormat, "def->opcode == opcode") )
      __debugbreak();
    result = v15->printopcode(v7, v15, v6);
    v6 = result;
    if ( !result )
      break;
    if ( v4 )
    {
      if ( result >= v8 )
        return result;
    }
    else if ( (_BYTE)v5 == 59 && result > s_jumpAddr )
    {
      return result;
    }
  }
  return result;
}

/*
==============
Scr_DisassembleWOptions
==============
*/
const char *Scr_DisassembleWOptions(scrContext_t *scrContext, const char *pos, bool dPrint, scrDebugFunctionInfo *activeFunctionInfo)
{
  int v8; 
  __int64 v9; 
  const char *v10; 
  Mem_LargeLocal v12; 
  Mem_LargeLocal v13; 
  Mem_LargeLocal v14; 
  Mem_LargeLocal v15; 

  Mem_LargeLocal::Mem_LargeLocal(&v15, 0x82000ui64, "localVarContexts_t localVarContexts");
  s_localVarContexts = (LocalVars_t *)v15.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v14, 0x8000ui64, "actionBlocks_t actionBlocks");
  s_actionBlocks = (actionBlock_t *)v14.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v13, 0x6000ui64, "blockTypes_t blocks");
  s_blocks = (blockType_t *)v13.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v12, 0x6000ui64, "blockNodes_t blockNodes");
  s_blockNodes = (blockNode_s *)v12.m_ptr;
  s_lastJumpTarget = 0;
  s_numBlocks = 0;
  s_numActionBlocks = 0;
  s_maxLocalVarContext = 0;
  s_disassemblePrint = 0;
  s_gatherJumps = 1;
  s_ignoreLocalVars = 1;
  s_calculateBlocks = 1;
  s_activeFunctionInfo = NULL;
  InitBlockNodes();
  s_prevLine = -1;
  if ( pos )
  {
    s_localVarCnt = 0;
    s_localUnusedVarCnt = 0;
    s_jumpAddr = NULL;
    Scr_DisassembleLength(scrContext, pos, -1, 0);
    v8 = s_lastJumpTarget;
  }
  std::_Sort_unchecked<JumpTarget_t *,bool (*)(JumpTarget_t,JumpTarget_t)>(s_jumpTargets, &s_jumpTargets[v8], v8, Scr_CompareTargets);
  Scr_FixupBlocks(v9);
  s_calculateBlocks = 0;
  s_ignoreLocalVars = 0;
  s_gatherJumps = 0;
  s_disassemblePrint = dPrint;
  s_activeFunctionInfo = activeFunctionInfo;
  s_prevLine = -1;
  if ( pos )
  {
    s_localVarCnt = 0;
    s_localUnusedVarCnt = 0;
    s_jumpAddr = NULL;
    v10 = Scr_DisassembleLength(scrContext, pos, -1, 0);
  }
  else
  {
    v10 = NULL;
  }
  s_localVarContexts = NULL;
  s_actionBlocks = NULL;
  s_blocks = NULL;
  s_blockNodes = NULL;
  Mem_LargeLocal::~Mem_LargeLocal(&v12);
  Mem_LargeLocal::~Mem_LargeLocal(&v13);
  Mem_LargeLocal::~Mem_LargeLocal(&v14);
  Mem_LargeLocal::~Mem_LargeLocal(&v15);
  return v10;
}

/*
==============
Scr_FindScriptFunction
==============
*/
void Scr_FindScriptFunction(const scrContext_t *scrContext, const char *pos, char *buf, unsigned int bufSize)
{
  unsigned __int64 v5; 
  unsigned int sourceBufferLookupLen; 
  unsigned int v8; 
  SourceBufferInfo *sourceBufferLookup; 
  __int64 v10; 
  __int64 v11; 
  unsigned int functionLookupLen; 
  __int64 v13; 

  v5 = bufSize;
  if ( scrContext->m_varPub.developer && (sourceBufferLookupLen = scrContext->m_parserPub.sourceBufferLookupLen, v8 = 0, sourceBufferLookupLen) )
  {
    sourceBufferLookup = scrContext->m_parserPub.sourceBufferLookup;
    while ( 1 )
    {
      v10 = 0i64;
      v11 = v8;
      functionLookupLen = sourceBufferLookup[v11].functionLookupLen;
      if ( functionLookupLen )
        break;
LABEL_8:
      if ( ++v8 >= sourceBufferLookupLen )
        goto LABEL_9;
    }
    while ( 1 )
    {
      v13 = (__int64)&sourceBufferLookup[v11].functionLookupStatic[v10];
      if ( *(_QWORD *)v13 <= (unsigned __int64)pos && (unsigned __int64)pos <= *(_QWORD *)(v13 + 8) )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= functionLookupLen )
        goto LABEL_8;
    }
    Com_sprintf(buf, v5, "%s::%s", sourceBufferLookup[v11].buf, (const char *)(v13 + 16));
  }
  else
  {
LABEL_9:
    Com_sprintf(buf, v5, "0x%016llX", pos);
  }
}

/*
==============
Scr_FindUnusedVariables
==============
*/
void Scr_FindUnusedVariables(scrContext_t *scrContext)
{
  unsigned int i; 
  scrDebugFunctionInfo *v3; 
  int v4; 
  bool *v5; 
  unsigned int *v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  unsigned int *v10; 
  const char *CanonicalDebugString; 

  s_disassemblePrint = 0;
  Com_Printf(23, "Unused variables by function\n");
  for ( i = 0; i < scrContext->m_parserPub.functionCount; s_localUnusedVarCnt = 0 )
  {
    v3 = &scrContext->m_parserPub.functionList[i];
    if ( s_debugCatchFuncIdx >= 0 && s_debugCatchFuncIdx == i )
      Com_Printf(23, "Caught function %s\n", v3->name);
    Scr_DisassembleWOptions(scrContext, v3->codePosValue, 0, v3);
    v4 = s_localUnusedVarCnt;
    if ( s_localVarCnt > 0 )
    {
      v5 = s_localVarUsed;
      v6 = s_localVarScrNames;
      v7 = (unsigned int)s_localVarCnt;
      do
      {
        if ( !*v5 )
        {
          v8 = v4++;
          s_localUnusedVarScrNames[v8] = *v6;
        }
        ++v5;
        ++v6;
        --v7;
      }
      while ( v7 );
      s_localUnusedVarCnt = v4;
    }
    if ( v4 > 0 )
    {
      Com_Printf(23, "%s,%s\n", v3->filenameExt, v3->name);
      v9 = 0;
      if ( s_localUnusedVarCnt > 0 )
      {
        v10 = s_localUnusedVarScrNames;
        do
        {
          CanonicalDebugString = Scr_GetCanonicalDebugString(*v10);
          Com_Printf(23, "   %s\n", CanonicalDebugString);
          ++v9;
          ++v10;
        }
        while ( v9 < s_localUnusedVarCnt );
      }
    }
    ++i;
  }
  s_activeFunctionInfo = NULL;
  s_disassemblePrint = 1;
}

/*
==============
Scr_FixupBlocks
==============
*/
void Scr_FixupBlocks()
{
  __int64 v0; 
  blockType_t *v1; 
  blockType_t *v2; 
  __int64 v3; 
  bool mustBeReferenced; 
  blockNode_s *blocks; 
  blockType_t *v6; 
  __int64 v7; 
  blockNode_s *i; 
  int v9; 
  __int64 v10; 
  char *v11; 
  __int64 v12; 
  int v13; 
  const char *v14; 
  __int64 v15; 
  actionBlock_t *v16; 
  bool v17; 
  LocalVars_t *v18; 
  const char *v19; 
  __int64 v20; 
  actionBlock_t *v21; 
  const char *v22; 
  const char *v23; 
  __int64 v24; 
  actionBlock_t *v25; 
  LocalVars_t *v26; 
  LocalVars_t *v27; 
  int v28; 
  __int64 v29; 

  std::_Sort_unchecked<blockType_t *,bool (*)(blockType_t,blockType_t)>(s_blocks, &s_blocks[s_numBlocks], 24i64 * s_numBlocks / 24, Scr_CompareBlocks);
  v0 = (unsigned int)s_numBlocks;
  v1 = s_blocks;
  if ( s_numBlocks > 0 )
  {
    v2 = s_blocks;
    v3 = (unsigned int)s_numBlocks;
    do
    {
      mustBeReferenced = v2->mustBeReferenced;
      if ( mustBeReferenced )
      {
        blocks = v2->blocks;
        if ( blocks )
        {
          while ( blocks->opcodePos == v2->begin )
          {
            blocks = blocks->next;
            if ( !blocks )
            {
              mustBeReferenced = v2->mustBeReferenced;
              goto LABEL_8;
            }
          }
          v2->mustBeReferenced = 0;
        }
        else
        {
LABEL_8:
          if ( mustBeReferenced )
          {
            v6 = v1;
            v7 = v0;
            do
            {
              if ( v6 != v2 )
              {
                for ( i = v6->blocks; i; i = i->next )
                {
                  if ( i->opcodePos == v2->begin )
                    i->context = CTX_NOP;
                }
              }
              ++v6;
              --v7;
            }
            while ( v7 );
          }
        }
      }
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  v28 = 0;
  v9 = 0;
  if ( (int)v0 > 0 )
  {
    v10 = 0i64;
    v29 = 0i64;
    do
    {
      v11 = (char *)v1 + v10;
      if ( !*(&v1->mustBeReferenced + v10) )
      {
        v12 = *((_QWORD *)v11 + 1);
        if ( v12 )
        {
          do
          {
            switch ( *(_DWORD *)(v12 + 16) )
            {
              case 0:
                v13 = Scr_AddContext(*(const char **)v12);
                v23 = *(const char **)v11;
                if ( s_numActionBlocks >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 410, ASSERT_TYPE_ASSERT, "(s_numActionBlocks < 2048)", (const char *)&queryFormat, "s_numActionBlocks < MAX_ACTIONBLOCKS") )
                  __debugbreak();
                goto LABEL_39;
              case 1:
                v13 = 0;
                if ( s_maxLocalVarContext <= 0 )
                  goto LABEL_52;
                v26 = s_localVarContexts;
                while ( v26->pos != *(const char **)v12 )
                {
                  ++v13;
                  ++v26;
                  if ( v13 >= s_maxLocalVarContext )
                    goto LABEL_52;
                }
                goto LABEL_55;
              case 2:
                v13 = Scr_AddContext(*(const char **)v12);
                v14 = *(const char **)v12;
                if ( s_numActionBlocks >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 410, ASSERT_TYPE_ASSERT, "(s_numActionBlocks < 2048)", (const char *)&queryFormat, "s_numActionBlocks < MAX_ACTIONBLOCKS") )
                  __debugbreak();
                v15 = s_numActionBlocks;
                v16 = s_actionBlocks;
                v17 = ++s_numActionBlocks < 2048;
                s_actionBlocks[v15].pos = v14;
                v16[v15].action = ACT_COPY;
                v16[v15].context = v13;
                goto LABEL_56;
              case 3:
                v13 = 0;
                if ( s_maxLocalVarContext <= 0 )
                  goto LABEL_52;
                v18 = s_localVarContexts;
                while ( v18->pos != *(const char **)v12 )
                {
                  ++v13;
                  ++v18;
                  if ( v13 >= s_maxLocalVarContext )
                    goto LABEL_52;
                }
                goto LABEL_55;
              case 5:
                v13 = Scr_AddContext(*(const char **)v11);
                v19 = *(const char **)v11;
                if ( s_numActionBlocks >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 410, ASSERT_TYPE_ASSERT, "(s_numActionBlocks < 2048)", (const char *)&queryFormat, "s_numActionBlocks < MAX_ACTIONBLOCKS") )
                  __debugbreak();
                v20 = s_numActionBlocks;
                v21 = s_actionBlocks;
                v17 = ++s_numActionBlocks < 2048;
                s_actionBlocks[v20].pos = v19;
                v21[v20].action = ACT_COPY;
                v21[v20].context = v13;
                v22 = *(const char **)v12;
                goto LABEL_57;
              case 6:
                v13 = Scr_AddContext(*(const char **)v11);
                v23 = *(const char **)v11;
                if ( s_numActionBlocks >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 410, ASSERT_TYPE_ASSERT, "(s_numActionBlocks < 2048)", (const char *)&queryFormat, "s_numActionBlocks < MAX_ACTIONBLOCKS") )
                {
                  __debugbreak();
                  v24 = s_numActionBlocks++;
                  v25 = s_actionBlocks;
                  s_actionBlocks[v24].pos = v23;
                  v25[v24].action = ACT_COPY;
                }
                else
                {
LABEL_39:
                  v24 = s_numActionBlocks++;
                  v25 = s_actionBlocks;
                  s_actionBlocks[v24].pos = v23;
                  v25[v24].action = ACT_COPY;
                }
                goto LABEL_61;
              case 7:
                v13 = 0;
                if ( s_maxLocalVarContext <= 0 )
                  goto LABEL_52;
                v27 = s_localVarContexts;
                break;
              default:
                goto LABEL_62;
            }
            while ( v27->pos != *(const char **)v12 )
            {
              ++v13;
              ++v27;
              if ( v13 >= s_maxLocalVarContext )
              {
LABEL_52:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 389, ASSERT_TYPE_ASSERT, "(!mustExist)", (const char *)&queryFormat, "!mustExist") )
                  __debugbreak();
                v13 = -1;
                break;
              }
            }
LABEL_55:
            v17 = s_numActionBlocks < 2048;
LABEL_56:
            v22 = *(const char **)v11;
LABEL_57:
            if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 410, ASSERT_TYPE_ASSERT, "(s_numActionBlocks < 2048)", (const char *)&queryFormat, "s_numActionBlocks < MAX_ACTIONBLOCKS") )
              __debugbreak();
            v24 = s_numActionBlocks++;
            v25 = s_actionBlocks;
            s_actionBlocks[v24].pos = v22;
            v25[v24].action = ACT_RESTORE;
LABEL_61:
            v25[v24].context = v13;
LABEL_62:
            v12 = *(_QWORD *)(v12 + 8);
          }
          while ( v12 );
          v1 = s_blocks;
          LODWORD(v0) = s_numBlocks;
          v9 = v28;
          v10 = v29;
        }
      }
      ++v9;
      v10 += 24i64;
      v28 = v9;
      v29 = v10;
    }
    while ( v9 < (int)v0 );
  }
  std::_Sort_unchecked<actionBlock_t *,bool (*)(actionBlock_t,actionBlock_t)>(s_actionBlocks, &s_actionBlocks[s_numActionBlocks], (16i64 * s_numActionBlocks) >> 4, Scr_CompareActionBlocks);
  s_currentActionBlock = 0;
}

/*
==============
Scr_FormalParamsPrint_Internal
==============
*/
const char *Scr_FormalParamsPrint_Internal(scrContext_t *scrContext, opcoodePrintDef_s *def, const char *pos, OP_argType argType)
{
  unsigned __int8 v7; 
  unsigned __int8 v8; 
  const char *i; 
  __int64 v10; 
  __int64 v11; 
  const char *v12; 

  Scr_PrintOpHeader(def, pos);
  v7 = pos[1];
  v8 = 0;
  for ( i = pos + 2; v8 < v7; ++v8 )
  {
    i = Scr_DisassembleArg(scrContext, argType, i);
    if ( s_ignoreLocalVars )
    {
      v11 = 0i64;
    }
    else
    {
      if ( s_localVarCnt >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 936, ASSERT_TYPE_ASSERT, "(s_localVarCnt < 256)", (const char *)&queryFormat, "s_localVarCnt < MAX_LOCALVARS") )
        __debugbreak();
      v11 = s_localVarCnt;
      if ( (unsigned __int64)s_localVarCnt >= 0x100 )
      {
        j___report_rangecheckfailure(v10);
        JUMPOUT(0x141461EC0i64);
      }
      s_localVarScrNames[s_localVarCnt] = s_localVarScrName;
      s_localVarCnt = v11 + 1;
      s_localVarUsed[v11] = 0;
    }
    if ( s_disassemblePrint )
    {
      v12 = ":lv%d ";
      if ( s_ignoreLocalVars )
        v12 = ":stack-%d ";
      Scr_DisPrint(v12, v11);
    }
  }
  if ( s_disassemblePrint )
    Scr_DisPrint("\n");
  return i;
}

/*
==============
Scr_GetCanonicalDebugString
==============
*/
const char *Scr_GetCanonicalDebugString(unsigned int canonicalStr)
{
  unsigned int OpaqueStringCount; 
  CanonicalStringData *canonicalStringData; 
  unsigned int v4; 

  if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 635, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 636, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
    __debugbreak();
  OpaqueStringCount = SL_GetOpaqueStringCount();
  if ( canonicalStr > OpaqueStringCount )
    canonicalStr -= OpaqueStringCount;
  canonicalStringData = g_scrCanonicalStringPub.canonicalStringData;
  v4 = g_scrCanonicalStringPub.canonicalStringData->stringOffsets[canonicalStr];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_disassembler.cpp", 647, ASSERT_TYPE_ASSERT, "( offset )", (const char *)&queryFormat, "offset") )
    __debugbreak();
  return (char *)&canonicalStringData->stringOffsets[28671] + v4 + 3;
}

/*
==============
Scr_GetLocalVarName
==============
*/

const char *__fastcall Scr_GetLocalVarName(unsigned int name)
{
  return Scr_GetCanonicalDebugString(name);
}

/*
==============
Scr_PrintOpHeader
==============
*/
void Scr_PrintOpHeader(opcoodePrintDef_s *def, const char *pos)
{
  int v4; 
  __int64 v5; 
  void (*v6)(const char *, ...); 
  const char *OpcodeName; 
  char label[16]; 

  if ( s_disassemblePrint )
  {
    if ( s_lastJumpTarget )
    {
      if ( pos )
      {
        v4 = Scr_CheckJumpLabel(pos, label);
        Scr_DisPrint((const char *)&queryFormat, label);
        if ( v4 < 6 )
        {
          v5 = (unsigned int)(6 - v4);
          do
          {
            Scr_DisPrint(" ");
            --v5;
          }
          while ( v5 );
        }
      }
    }
    if ( s_disassemblePrint )
      Scr_DisPrint("0x%016llX", pos);
    v6 = Scr_DisPrint;
    OpcodeName = Scr_GetOpcodeName(def->opcode);
    v6("   %s", OpcodeName);
  }
}

/*
==============
Scr_TestEvalVariable
==============
*/
bool Scr_TestEvalVariable(const int opcode)
{
  bool result; 

  switch ( opcode )
  {
    case 46:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 71:
    case 99:
    case 113:
    case 142:
    case 143:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

