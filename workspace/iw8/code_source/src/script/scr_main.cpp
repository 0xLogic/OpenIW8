/*
==============
Scr_BeginLoadScripts
==============
*/

void __fastcall Scr_BeginLoadScripts(scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  ?Scr_BeginLoadScripts@@YAXAEAUscrContext_t@@W4ScrThreadMode@@@Z(scrContext, threadMode);
}

/*
==============
Scr_FreeScripts
==============
*/

void __fastcall Scr_FreeScripts(scrContext_t *scrContext, unsigned __int8 sys)
{
  ?Scr_FreeScripts@@YAXAEAUscrContext_t@@E@Z(scrContext, sys);
}

/*
==============
Scr_ScanFile
==============
*/

int __fastcall Scr_ScanFile(scrContext_t *scrContext, char *buf, int max_size)
{
  return ?Scr_ScanFile@@YAHAEAUscrContext_t@@PEADH@Z(scrContext, buf, max_size);
}

/*
==============
Scr_EndLoadScripts
==============
*/

void __fastcall Scr_EndLoadScripts(scrContext_t *scrContext)
{
  ?Scr_EndLoadScripts@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_ShutdownStringConstants
==============
*/

void Scr_ShutdownStringConstants(void)
{
  ?Scr_ShutdownStringConstants@@YAXXZ();
}

/*
==============
Scr_GetFunctionHandle
==============
*/

int __fastcall Scr_GetFunctionHandle(scrContext_t *scrContext, const char *const filename, const char *const name)
{
  return ?Scr_GetFunctionHandle@@YAHAEAUscrContext_t@@QEBD1@Z(scrContext, filename, name);
}

/*
==============
Scr_FreeInternalVariable
==============
*/

void __fastcall Scr_FreeInternalVariable(scrContext_t *scrContext, unsigned int *outVariable)
{
  ?Scr_FreeInternalVariable@@YAXAEAUscrContext_t@@AEAI@Z(scrContext, outVariable);
}

/*
==============
Scr_IsInOpcodeMemory
==============
*/

int __fastcall Scr_IsInOpcodeMemory(const scrContext_t *scrContext, const char *pos)
{
  return ?Scr_IsInOpcodeMemory@@YAHAEBUscrContext_t@@PEBD@Z(scrContext, pos);
}

/*
==============
Scr_ShutdownProgramHunkUser
==============
*/

void __fastcall Scr_ShutdownProgramHunkUser(scrContext_t *scrContext)
{
  ?Scr_ShutdownProgramHunkUser@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_PrecacheAnimTrees
==============
*/

void __fastcall Scr_PrecacheAnimTrees(void *(__fastcall *Alloc)(unsigned __int64), int user, const ScrThreadMode threadMode)
{
  ?Scr_PrecacheAnimTrees@@YAXP6APEAX_K@ZHW4ScrThreadMode@@@Z(Alloc, user, threadMode);
}

/*
==============
SL_GetCanonicalString
==============
*/

unsigned int __fastcall SL_GetCanonicalString(const char *str)
{
  return ?SL_GetCanonicalString@@YAIPEBD@Z(str);
}

/*
==============
Scr_AllocInternalArray
==============
*/

void __fastcall Scr_AllocInternalArray(scrContext_t *scrContext, unsigned int *outVariable)
{
  ?Scr_AllocInternalArray@@YAXAEAUscrContext_t@@AEAI@Z(scrContext, outVariable);
}

/*
==============
SL_GetLocalCanonicalString
==============
*/

unsigned int __fastcall SL_GetLocalCanonicalString(unsigned int name)
{
  return ?SL_GetLocalCanonicalString@@YAII@Z(name);
}

/*
==============
Scr_CheckThreadForInstance
==============
*/

void __fastcall Scr_CheckThreadForInstance(ScriptInstanceType inst)
{
  ?Scr_CheckThreadForInstance@@YAXW4ScriptInstanceType@@@Z(inst);
}

/*
==============
Scr_StartInlineLex
==============
*/

void __fastcall Scr_StartInlineLex(const char *buf, int len)
{
  ?Scr_StartInlineLex@@YAXPEBDH@Z(buf, len);
}

/*
==============
SL_ResetLocalCanonicalString
==============
*/

void SL_ResetLocalCanonicalString(void)
{
  ?SL_ResetLocalCanonicalString@@YAXXZ();
}

/*
==============
Scr_Main_PreCommitMemory
==============
*/

void __fastcall Scr_Main_PreCommitMemory(const scrContext_t *scrContext)
{
  ?Scr_Main_PreCommitMemory@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_CloneXAnimSubTreeRegistry
==============
*/

void Scr_CloneXAnimSubTreeRegistry(void)
{
  ?Scr_CloneXAnimSubTreeRegistry@@YAXXZ();
}

/*
==============
Scr_InitProgramHunkUser
==============
*/

void __fastcall Scr_InitProgramHunkUser(scrContext_t *scrContext)
{
  ?Scr_InitProgramHunkUser@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_BeginLoadAnimTrees
==============
*/

void __fastcall Scr_BeginLoadAnimTrees(int user)
{
  ?Scr_BeginLoadAnimTrees@@YAXH@Z(user);
}

/*
==============
Scr_EndLoadAnimTrees
==============
*/

void __fastcall Scr_EndLoadAnimTrees(int animUser)
{
  ?Scr_EndLoadAnimTrees@@YAXH@Z(animUser);
}

/*
==============
Scr_IsIdentifier
==============
*/

bool __fastcall Scr_IsIdentifier(const char *token)
{
  return ?Scr_IsIdentifier@@YA_NPEBD@Z(token);
}

/*
==============
Scr_LoadScriptInternal
==============
*/

unsigned int __fastcall Scr_LoadScriptInternal(scrContext_t *scrContext, const char *filenameExt, PrecacheEntry *entries, int entriesCount, int scopeCount)
{
  return ?Scr_LoadScriptInternal@@YAIAEAUscrContext_t@@PEBDPEAUPrecacheEntry@@HH@Z(scrContext, filenameExt, entries, entriesCount, scopeCount);
}

/*
==============
Scr_Shutdown
==============
*/

void __fastcall Scr_Shutdown(scrContext_t *scrContext)
{
  ?Scr_Shutdown@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_AllocInternalObject
==============
*/

void __fastcall Scr_AllocInternalObject(scrContext_t *scrContext, unsigned int *outVariable)
{
  ?Scr_AllocInternalObject@@YAXAEAUscrContext_t@@AEAI@Z(scrContext, outVariable);
}

/*
==============
Scr_PostCompileScripts
==============
*/

void __fastcall Scr_PostCompileScripts(scrContext_t *scrContext)
{
  ?Scr_PostCompileScripts@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_InInline
==============
*/

bool __fastcall Scr_InInline(const scrContext_t *pScrCompileContext)
{
  return ?Scr_InInline@@YA_NPEBUscrContext_t@@@Z(pScrCompileContext);
}

/*
==============
Scr_GetCurrentExtFilename
==============
*/

sval_u __fastcall Scr_GetCurrentExtFilename()
{
  return ?Scr_GetCurrentExtFilename@@YA?ATsval_u@@XZ();
}

/*
==============
Scr_InitStringConstants
==============
*/

void __fastcall Scr_InitStringConstants(const bool useReducedSpGoldLimits)
{
  ?Scr_InitStringConstants@@YAX_N@Z(useReducedSpGoldLimits);
}

/*
==============
Scr_LoadScript
==============
*/

unsigned int __fastcall Scr_LoadScript(scrContext_t *scrContext, const char *filenameExt)
{
  return ?Scr_LoadScript@@YAIAEAUscrContext_t@@PEBD@Z(scrContext, filenameExt);
}

/*
==============
Scr_CheckProgramHunkUsersClear
==============
*/

void __fastcall Scr_CheckProgramHunkUsersClear(const scrContext_t *scrContext)
{
  ?Scr_CheckProgramHunkUsersClear@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_EndInline
==============
*/

bool __fastcall Scr_EndInline()
{
  return ?Scr_EndInline@@YA_NXZ();
}

/*
==============
Scr_Main_DecommitUnusedMemory
==============
*/

void __fastcall Scr_Main_DecommitUnusedMemory(const scrContext_t *scrContext)
{
  ?Scr_Main_DecommitUnusedMemory@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
SL_GetCanonicalString
==============
*/
__int64 SL_GetCanonicalString(const char *str)
{
  const char *v1; 
  CanonicalStringData *canonicalStringData; 
  int v3; 
  unsigned int v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 result; 
  unsigned int canonicalStringBufferSize; 
  char *v13; 
  char v14; 
  __int64 v15; 
  __int64 v16; 

  v1 = str;
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 243, ASSERT_TYPE_ASSERT, "( str )", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.canonicalStringData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 244, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringData != nullptr )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringData != nullptr") )
    __debugbreak();
  if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 245, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
    __debugbreak();
  canonicalStringData = g_scrCanonicalStringPub.canonicalStringData;
  if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 190, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
    __debugbreak();
  v3 = *v1;
  v4 = 0;
  v5 = v1;
  if ( *v1 )
  {
    do
    {
      ++v5;
      v4 = v3 + 31 * v4;
      v3 = *v5;
    }
    while ( *v5 );
    if ( v5 < v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 206, ASSERT_TYPE_ASSERT, "(pos >= str)", (const char *)&queryFormat, "pos >= str") )
      __debugbreak();
  }
  v6 = truncate_cast<int,__int64>(v5 - v1);
  v7 = v4 % g_scrCanonicalStringPub.canonicalStringLimit + 1;
  v8 = canonicalStringData->stringOffsets[v7];
  LODWORD(v9) = v4 % g_scrCanonicalStringPub.canonicalStringLimit + 1;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = v8 - 1;
      if ( (unsigned int)v10 >= 0x64000 )
      {
        LODWORD(v16) = 409600;
        LODWORD(v15) = v8 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 270, ASSERT_TYPE_ASSERT, "(unsigned)( offset - 1 ) < (unsigned)( ( sizeof( *array_counter( strData.stringBuffer ) ) + 0 ) )", "offset - 1 doesn't index ARRAY_COUNT( strData.stringBuffer )\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      result = (unsigned int)v9;
      if ( !strcmp(v1, &canonicalStringData->stringBuffer[v10]) )
        break;
      v9 = (unsigned int)v9 % g_scrCanonicalStringPub.canonicalStringLimit + 1;
      if ( (_DWORD)v9 == (_DWORD)v7 )
        Sys_Error((const ObfuscateErrorText)&stru_14409B960, g_scrCanonicalStringPub.canonicalStringLimit);
      v8 = canonicalStringData->stringOffsets[v9];
      if ( !v8 )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    canonicalStringBufferSize = g_scrCanonicalStringPub.canonicalStringBufferSize;
    if ( g_scrCanonicalStringPub.canonicalStringBufferSize + v6 > 0x64000 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_14409B930);
      canonicalStringBufferSize = g_scrCanonicalStringPub.canonicalStringBufferSize;
    }
    canonicalStringData->stringOffsets[(unsigned int)v9] = canonicalStringBufferSize + 1;
    v13 = &canonicalStringData->stringBuffer[g_scrCanonicalStringPub.canonicalStringBufferSize];
    do
    {
      v14 = *v1++;
      *v13++ = v14;
    }
    while ( v14 );
    ++g_scrCanonicalStringPub.canonicalStringCount;
    result = (unsigned int)v9;
    g_scrCanonicalStringPub.canonicalStringBufferSize += v6 + 1;
  }
  return result;
}

/*
==============
SL_GetLocalCanonicalString
==============
*/
unsigned int SL_GetLocalCanonicalString(unsigned int name)
{
  const char *v1; 

  v1 = SL_ConvertToString((scr_string_t)name);
  return SL_GetCanonicalString(v1);
}

/*
==============
SL_ResetLocalCanonicalString
==============
*/
void SL_ResetLocalCanonicalString(void)
{
  ;
}

/*
==============
Scr_AllocInternalArray
==============
*/
void Scr_AllocInternalArray(scrContext_t *scrContext, unsigned int *outVariable)
{
  unsigned int v4; 

  v4 = Scr_AllocArray(scrContext);
  Scr_SetupInternalVariable(scrContext, v4, outVariable);
}

/*
==============
Scr_AllocInternalObject
==============
*/
void Scr_AllocInternalObject(scrContext_t *scrContext, unsigned int *outVariable)
{
  unsigned int v4; 

  v4 = AllocObject(scrContext);
  Scr_SetupInternalVariable(scrContext, v4, outVariable);
}

/*
==============
Scr_BeginLoadAnimTrees
==============
*/
void Scr_BeginLoadAnimTrees(int user)
{
  __int64 v1; 
  scrContext_t *v2; 
  const char *InstanceName; 
  unsigned int v4; 

  v1 = user;
  v2 = ScriptContext_GetFromAnimUser(user);
  InstanceName = ScriptContext_GetInstanceName(v2);
  Com_Printf(24, "Script Anim Parsing Begin - Scr_BeginLoadAnimTrees - %s\n", InstanceName);
  ScriptCodePos::SetVarUsagePos(&v2->m_varPub.varUsagePos, "<script compile variable>");
  if ( v2->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 724, ASSERT_TYPE_ASSERT, "( !pScrAnimPub->animtree_loading )", (const char *)&queryFormat, "!pScrAnimPub->animtree_loading") )
    __debugbreak();
  *(_WORD *)&v2->m_animPub.animtree_loading = 1;
  v2->m_animPub.xanim_num[v1] = 0;
  v2->m_animPub.xanim_lookup[v1][0].anims = NULL;
  if ( v2->m_animPub.animtrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 731, ASSERT_TYPE_ASSERT, "( !pScrAnimPub->animtrees )", (const char *)&queryFormat, "!pScrAnimPub->animtrees") )
    __debugbreak();
  v4 = Scr_AllocArray(v2);
  v2->m_animPub.animtrees = v4;
  if ( v2->m_varDebugPub.m_Inited )
    ++v2->m_varDebugPub.extRefCount[v4];
  v2->m_animPub.animtree_node = 0;
  v2->m_compilePub.developer_statement = 0;
}

/*
==============
Scr_BeginLoadScripts
==============
*/
void Scr_BeginLoadScripts(scrContext_t *scrContext, const ScrThreadMode threadMode)
{
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  const char *programBuffer; 
  unsigned int v11; 
  scrContext_t *v12; 
  const char *InstanceName; 
  unsigned int v14; 
  BuiltinType type; 

  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, "<script compile variable>");
  MT_Reset();
  if ( scrContext->m_compilePub.script_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 583, ASSERT_TYPE_ASSERT, "( !pScrCompilePub->script_loading )", (const char *)&queryFormat, "!pScrCompilePub->script_loading") )
    __debugbreak();
  scrContext->m_compilePub.script_loading = 1;
  scrContext->m_compilePub.loadThreadMode = threadMode;
  Scr_InitOpcodeLookup(scrContext);
  scrContext->m_parserPub.functionCount = 0;
  scrContext->m_compilePub.precachedEntriesHighWatermark = 0;
  scrContext->m_compilePub.scriptCompileFileListHighWatermark = 0;
  Scr_InitDebuggerMain(scrContext);
  v4 = Scr_AllocArray(scrContext);
  Scr_SetupInternalVariable(scrContext, v4, &scrContext->m_compilePub.loadedscripts);
  memset_0(scrContext->m_profileScript.profileScriptNames, 0, sizeof(scrContext->m_profileScript.profileScriptNames));
  *(_QWORD *)scrContext->m_profileScript.parentIndex = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[8] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[16] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[24] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[32] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[40] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[48] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[56] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[64] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[72] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[80] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[88] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[96] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[104] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[112] = -1i64;
  *(_QWORD *)&scrContext->m_profileScript.parentIndex[120] = -1i64;
  scrContext->m_vmPub.showError = scrContext->m_varPub.developer;
  v5 = Scr_AllocArray(scrContext);
  if ( scrContext->m_compilePub.scriptsPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 496, ASSERT_TYPE_ASSERT, "( outVariable == NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "outVariable == NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v5];
  scrContext->m_compilePub.scriptsPos = v5;
  v6 = Scr_AllocArray(scrContext);
  if ( scrContext->m_compilePub.scriptsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 496, ASSERT_TYPE_ASSERT, "( outVariable == NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "outVariable == NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v6];
  scrContext->m_compilePub.scriptsCount = v6;
  v7 = Scr_AllocArray(scrContext);
  if ( scrContext->m_compilePub.scriptsDefine && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 496, ASSERT_TYPE_ASSERT, "( outVariable == NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "outVariable == NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v7];
  scrContext->m_compilePub.scriptsDefine = v7;
  v8 = Scr_AllocArray(scrContext);
  if ( scrContext->m_compilePub.builtinFunc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 496, ASSERT_TYPE_ASSERT, "( outVariable == NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "outVariable == NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v8];
  scrContext->m_compilePub.builtinFunc = v8;
  v9 = Scr_AllocArray(scrContext);
  if ( scrContext->m_compilePub.builtinMeth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 496, ASSERT_TYPE_ASSERT, "( outVariable == NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "outVariable == NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v9];
  scrContext->m_compilePub.builtinMeth = v9;
  if ( !scrContext->m_varPub.programHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 646, ASSERT_TYPE_ASSERT, "(pScrVarPub->programHunkUser)", (const char *)&queryFormat, "pScrVarPub->programHunkUser") )
    __debugbreak();
  TempMemoryReset(scrContext->m_varPub.programHunkUser);
  Scr_Mem_TempCheckClear(scrContext);
  if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 652, ASSERT_TYPE_ASSERT, "( pScrVarPub->readWriteTempHunkUser )", (const char *)&queryFormat, "pScrVarPub->readWriteTempHunkUser") )
    __debugbreak();
  scrContext->m_varPub.programBuffer = TempMalloc(0i64);
  scrContext->m_compilePub.programLen = 0;
  programBuffer = scrContext->m_varPub.programBuffer;
  scrContext->m_varPub.endScriptBuffer = NULL;
  v11 = (unsigned __int8)programBuffer & 0x1F;
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 668, ASSERT_TYPE_ASSERT, "( ( !((uintptr_t)pScrVarPub->programBuffer & 31) ) )", "%s\n\t( ((uintptr_t)pScrVarPub->programBuffer & 31) ) = 0x%llx", "( !((uintptr_t)pScrVarPub->programBuffer & 31) )", v11) )
    __debugbreak();
  SL_BeginLoadScripts(scrContext);
  Scr_InitEvaluate(scrContext);
  scrContext->m_varPub.fieldBuffer = NULL;
  scrContext->m_compilePub.value_count = 0;
  Scr_ClearErrorMessage(scrContext);
  scrContext->m_animPub.animTreeNames = 0;
  Scr_SetLoadedImpureScript(0);
  v12 = ScriptContext_GetFromAnimUser(1);
  InstanceName = ScriptContext_GetInstanceName(v12);
  Com_Printf(24, "Script Anim Parsing Begin - Scr_BeginLoadAnimTrees - %s\n", InstanceName);
  ScriptCodePos::SetVarUsagePos(&v12->m_varPub.varUsagePos, "<script compile variable>");
  if ( v12->m_animPub.animtree_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 724, ASSERT_TYPE_ASSERT, "( !pScrAnimPub->animtree_loading )", (const char *)&queryFormat, "!pScrAnimPub->animtree_loading") )
    __debugbreak();
  *(_WORD *)&v12->m_animPub.animtree_loading = 1;
  v12->m_animPub.xanim_num[1] = 0;
  v12->m_animPub.xanim_lookup[1][0].anims = NULL;
  if ( v12->m_animPub.animtrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 731, ASSERT_TYPE_ASSERT, "( !pScrAnimPub->animtrees )", (const char *)&queryFormat, "!pScrAnimPub->animtrees") )
    __debugbreak();
  v14 = Scr_AllocArray(v12);
  v12->m_animPub.animtrees = v14;
  if ( v12->m_varDebugPub.m_Inited )
    ++v12->m_varDebugPub.extRefCount[v14];
  v12->m_animPub.animtree_node = 0;
  v12->m_compilePub.developer_statement = 0;
  memset_0(scrContext->m_pFuncTable, 0, 8i64 * scrContext->m_funcCount);
  memset_0(scrContext->m_pMethTable, 0, 8i64 * scrContext->m_methCount);
  Scr_GetFunction(scrContext, NULL, &type);
  Scr_GetMethod(scrContext, NULL, &type);
}

/*
==============
Scr_CheckProgramHunkUsersClear
==============
*/
void Scr_CheckProgramHunkUsersClear(const scrContext_t *scrContext)
{
  Scr_Mem_TempCheckClear(scrContext);
  Scr_Mem_DebugCheckClear(scrContext);
  if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 456, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.readWriteTempHunkUser )", (const char *)&queryFormat, "scrContext.m_varPub.readWriteTempHunkUser") )
    __debugbreak();
  if ( Mem_HunkUser_GetUsedSize(scrContext->m_varPub.readWriteTempHunkUser) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 457, ASSERT_TYPE_ASSERT, "( Mem_HunkUser_GetUsedSize( scrContext.m_varPub.readWriteTempHunkUser ) == 0 )", (const char *)&queryFormat, "Mem_HunkUser_GetUsedSize( scrContext.m_varPub.readWriteTempHunkUser ) == 0") )
      __debugbreak();
  }
}

/*
==============
Scr_CheckThreadForInstance
==============
*/
void Scr_CheckThreadForInstance(ScriptInstanceType inst)
{
  ;
}

/*
==============
Scr_CloneXAnimSubTreeRegistry
==============
*/
void Scr_CloneXAnimSubTreeRegistry(void)
{
  XAnimSubTreeRegistry_CloneServerToClient(1u, 0x81u);
}

/*
==============
Scr_CompareFunctions
==============
*/
__int64 Scr_CompareFunctions(const void *a, const void *b)
{
  unsigned __int8 *v2; 
  __int64 v3; 
  unsigned __int8 v4; 
  __int64 result; 
  unsigned __int8 *v6; 
  __int64 v7; 
  unsigned __int8 v8; 

  v2 = *(unsigned __int8 **)a;
  v3 = *(_QWORD *)b - *(_QWORD *)a;
  while ( 1 )
  {
    v4 = *v2;
    if ( *v2 != v2[v3] )
      break;
    ++v2;
    if ( !v4 )
    {
      result = 0i64;
      goto LABEL_6;
    }
  }
  result = v4 < v2[v3] ? -1 : 1;
LABEL_6:
  if ( !(_DWORD)result )
  {
    v6 = (unsigned __int8 *)*((_QWORD *)a + 1);
    v7 = *((_QWORD *)b + 1) - (_QWORD)v6;
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 != v6[v7] )
        break;
      ++v6;
      if ( !v8 )
        return 0i64;
    }
    return v8 < v6[v7] ? -1 : 1;
  }
  return result;
}

/*
==============
Scr_DumpScrParserPubFunctionList
==============
*/
void Scr_DumpScrParserPubFunctionList(const scrContext_t *scrContext, int numElements)
{
  __int64 v3; 
  const char *v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int m_scrDebugFunctionCount; 

  v3 = numElements;
  if ( numElements >= scrContext->m_scrDebugFunctionCount )
  {
    m_scrDebugFunctionCount = scrContext->m_scrDebugFunctionCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1283, ASSERT_TYPE_ASSERT, "(unsigned)( numElements ) < (unsigned)( scrContext.m_scrDebugFunctionCount )", "numElements doesn't index scrContext.m_scrDebugFunctionCount\n\t%i not in [0, %i)", numElements, m_scrDebugFunctionCount) )
      __debugbreak();
  }
  Com_Printf(24, "SCR_DEBUG_FUNCTION_BUFFER_SIZE = %d\n", scrContext->m_scrDebugFunctionBufferSize);
  v4 = "client";
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
    v4 = "server";
  Com_Printf(24, "scrParserPub[%s].functionList dump\n", v4);
  Com_Printf(24, "------------------------------\n");
  v5 = v3;
  if ( (int)v3 > 0 )
  {
    v6 = 0i64;
    do
    {
      Com_Printf(24, "%s::%s\n", scrContext->m_parserPub.functionList[v6].filenameExt, scrContext->m_parserPub.functionList[v6].name);
      ++v6;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
Scr_EndInline
==============
*/
bool Scr_EndInline()
{
  scrContext_t *v0; 
  __int64 in_ptr_stack_top; 
  __int64 v2; 
  bool result; 

  v0 = g_pScrCompileContext;
  in_ptr_stack_top = g_pScrCompileContext->m_compilePub.in_ptr_stack_top;
  if ( (int)in_ptr_stack_top <= 0 )
    return 0;
  g_pScrCompileContext->m_compilePub.in_ptr_stack_top = in_ptr_stack_top - 1;
  g_out_pos = *(&g_sourcePos + in_ptr_stack_top);
  g_sourcePos = g_sourcePos_stack[v0->m_compilePub.in_ptr_stack_top];
  v2 = v0->m_compilePub.in_ptr_stack_top;
  v0->m_compilePub.in_ptr = v0->m_compilePub.in_ptr_stack[v2];
  v0->m_parserPub.scriptExtFilename = v0->m_compilePub.scriptExtFilename_stack[v2];
  result = 1;
  v0->m_parserPub.sourceBuf = v0->m_compilePub.sourceBuf_stack[v0->m_compilePub.in_ptr_stack_top];
  return result;
}

/*
==============
Scr_EndLoadAnimTrees
==============
*/
void Scr_EndLoadAnimTrees(int animUser)
{
  scrContext_t *v1; 
  unsigned int animtree_node; 
  const char *InstanceName; 

  v1 = ScriptContext_GetFromAnimUser(animUser);
  if ( !v1->m_animPub.animtrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1510, ASSERT_TYPE_ASSERT, "( pScrAnimPub->animtrees )", (const char *)&queryFormat, "pScrAnimPub->animtrees") )
    __debugbreak();
  ClearObject(v1, v1->m_animPub.animtrees);
  if ( v1->m_varDebugPub.m_Inited )
    --v1->m_varDebugPub.extRefCount[v1->m_animPub.animtrees];
  RemoveRefToObject(v1, v1->m_animPub.animtrees);
  animtree_node = v1->m_animPub.animtree_node;
  v1->m_animPub.animtrees = 0;
  if ( animtree_node )
    RemoveRefToObject(v1, animtree_node);
  SL_ShutdownSystem(2u);
  if ( v1->m_varPub.programBuffer && !v1->m_varPub.endScriptBuffer )
    v1->m_varPub.endScriptBuffer = TempMalloc(0i64);
  *(_WORD *)&v1->m_animPub.animtree_loading = 0;
  ScriptCodePos::SetVarUsagePos(&v1->m_varPub.varUsagePos, NULL);
  InstanceName = ScriptContext_GetInstanceName(v1);
  Com_Printf(24, "Script Anim Parsing Complete - Scr_EndLoadAnimTrees - %s\n", InstanceName);
}

/*
==============
Scr_EndLoadScripts
==============
*/
void Scr_EndLoadScripts(scrContext_t *scrContext)
{
  const char *filenameExt; 
  char *v3; 
  unsigned int v4; 
  unsigned int i; 
  scrDebugFunctionInfo *v6; 
  __int64 v7; 
  bool v8; 
  unsigned int v9; 
  char *v10; 
  char v11; 
  __int64 v12; 
  const char *name; 
  unsigned int v14; 
  char *v15; 
  char v16; 
  char *v17; 

  Scr_Mem_AcquireScriptLocks();
  qsort(scrContext->m_parserPub.functionList, scrContext->m_parserPub.functionCount, 0x20ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Scr_CompareFunctions);
  filenameExt = NULL;
  v3 = NULL;
  v4 = 0;
  for ( i = 0; i < scrContext->m_parserPub.functionCount; v6->name = v17 )
  {
    v6 = &scrContext->m_parserPub.functionList[i];
    if ( v6->filenameExt != filenameExt )
    {
      v7 = -1i64;
      do
        v8 = v6->filenameExt[++v7] == 0;
      while ( !v8 );
      v9 = v7 + v4 + 1;
      filenameExt = v6->filenameExt;
      if ( v9 > scrContext->m_scrDebugFunctionBufferSize )
      {
        Scr_DumpScrParserPubFunctionList(scrContext, i);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14409C630, 738i64);
        filenameExt = v6->filenameExt;
      }
      v10 = (char *)filenameExt;
      v3 = &scrContext->m_parserPub.functionBuffer[v4];
      do
      {
        v11 = *v10;
        v10[v3 - filenameExt] = *v10;
        ++v10;
      }
      while ( v11 );
      v4 = v9;
    }
    v6->filenameExt = v3;
    v12 = -1i64;
    name = v6->name;
    do
      v8 = name[++v12] == 0;
    while ( !v8 );
    v14 = v12 + v4 + 1;
    if ( v14 > scrContext->m_scrDebugFunctionBufferSize )
    {
      Scr_DumpScrParserPubFunctionList(scrContext, i);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14409C630, 739i64);
      name = v6->name;
    }
    v15 = &scrContext->m_parserPub.functionBuffer[v4];
    do
    {
      v16 = *name++;
      *v15++ = v16;
    }
    while ( v16 );
    ++i;
    v17 = &scrContext->m_parserPub.functionBuffer[v4];
    v4 = v14;
  }
  if ( g_scrCanonicalStringPub.canonicalStringData )
  {
    if ( !g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1390, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit > 0 )", (const char *)&queryFormat, "g_scrCanonicalStringPub.canonicalStringLimit > 0") )
      __debugbreak();
    Scr_EndLoadEvaluate(scrContext);
    SL_EndLoadScripts(scrContext);
  }
  SL_ShutdownSystem(2u);
  if ( scrContext->m_compilePub.script_loading )
    Scr_InitDebugger(scrContext, (const ScrThreadMode)scrContext->m_compilePub.loadThreadMode);
  *(_WORD *)&scrContext->m_compilePub.script_loading = 0;
  Scr_FreeInternalVariable(scrContext, &scrContext->m_compilePub.loadedscripts);
  Scr_Mem_ReleaseScriptLocks();
  Scr_FreeInternalVariable(scrContext, &scrContext->m_compilePub.scriptsPos);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_compilePub.scriptsCount);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_compilePub.scriptsDefine);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_compilePub.builtinFunc);
  Scr_FreeInternalVariable(scrContext, &scrContext->m_compilePub.builtinMeth);
  MT_Reset();
}

/*
==============
Scr_FreeInternalVariable
==============
*/
void Scr_FreeInternalVariable(scrContext_t *scrContext, unsigned int *outVariable)
{
  __int64 v2; 

  v2 = *outVariable;
  if ( !(_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1356, ASSERT_TYPE_ASSERT, "( localVariable != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "localVariable != NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  ClearObject(scrContext, v2);
  if ( scrContext->m_varDebugPub.m_Inited )
    --scrContext->m_varDebugPub.extRefCount[v2];
  RemoveRefToEmptyObject(scrContext, v2);
  *outVariable = 0;
}

/*
==============
Scr_FreeScripts
==============
*/
void Scr_FreeScripts(scrContext_t *scrContext, unsigned __int8 sys)
{
  scrContext_t *v3; 
  unsigned int animtree_node; 
  const char *InstanceName; 

  if ( sys != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1547, ASSERT_TYPE_ASSERT, "( sys == SCR_SYS_GAME )", (const char *)&queryFormat, "sys == SCR_SYS_GAME") )
    __debugbreak();
  Scr_Mem_TempCheckClear(scrContext);
  if ( scrContext->m_compilePub.script_loading )
  {
    scrContext->m_compilePub.script_loading = 0;
    Scr_EndLoadScripts(scrContext);
  }
  if ( scrContext->m_animPub.animtree_loading )
  {
    scrContext->m_animPub.animtree_loading = 0;
    v3 = ScriptContext_GetFromAnimUser(1);
    if ( !v3->m_animPub.animtrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1510, ASSERT_TYPE_ASSERT, "( pScrAnimPub->animtrees )", (const char *)&queryFormat, "pScrAnimPub->animtrees") )
      __debugbreak();
    ClearObject(v3, v3->m_animPub.animtrees);
    if ( v3->m_varDebugPub.m_Inited )
      --v3->m_varDebugPub.extRefCount[v3->m_animPub.animtrees];
    RemoveRefToObject(v3, v3->m_animPub.animtrees);
    animtree_node = v3->m_animPub.animtree_node;
    v3->m_animPub.animtrees = 0;
    if ( animtree_node )
      RemoveRefToObject(v3, animtree_node);
    SL_ShutdownSystem(2u);
    if ( v3->m_varPub.programBuffer && !v3->m_varPub.endScriptBuffer )
      v3->m_varPub.endScriptBuffer = TempMalloc(0i64);
    *(_WORD *)&v3->m_animPub.animtree_loading = 0;
    ScriptCodePos::SetVarUsagePos(&v3->m_varPub.varUsagePos, NULL);
    InstanceName = ScriptContext_GetInstanceName(v3);
    Com_Printf(24, "Script Anim Parsing Complete - Scr_EndLoadAnimTrees - %s\n", InstanceName);
  }
  Scr_Mem_AcquireScriptLocks();
  Scr_ShutdownDebugger(scrContext);
  Scr_ShutdownDebuggerMain(scrContext);
  Scr_ShutdownEvaluate(scrContext);
  SL_ShutdownSystem(1u);
  Scr_ShutdownOpcodeLookup(scrContext);
  Scr_Mem_ReleaseScriptLocks();
  if ( !scrContext->m_varPub.programHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 466, ASSERT_TYPE_ASSERT, "(pScrVarPub->programHunkUser)", (const char *)&queryFormat, "pScrVarPub->programHunkUser") )
    __debugbreak();
  Mem_HunkUser_Reset(scrContext->m_varPub.programHunkUser);
  g_scrCanonicalStringPub.canonicalStringData = NULL;
  if ( !scrContext->m_varPub.canonicalStringHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 477, ASSERT_TYPE_ASSERT, "(pScrVarPub->canonicalStringHunkUser)", (const char *)&queryFormat, "pScrVarPub->canonicalStringHunkUser") )
    __debugbreak();
  Mem_HunkUser_Reset(scrContext->m_varPub.canonicalStringHunkUser);
  Scr_Mem_TempCheckClear(scrContext);
  Scr_Mem_DebugReset(scrContext);
  if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 488, ASSERT_TYPE_ASSERT, "( pScrVarPub->readWriteTempHunkUser )", (const char *)&queryFormat, "pScrVarPub->readWriteTempHunkUser") )
    __debugbreak();
  if ( Mem_HunkUser_GetUsedSize(scrContext->m_varPub.readWriteTempHunkUser) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 489, ASSERT_TYPE_ASSERT, "( Mem_HunkUser_GetUsedSize( pScrVarPub->readWriteTempHunkUser ) == 0 )", (const char *)&queryFormat, "Mem_HunkUser_GetUsedSize( pScrVarPub->readWriteTempHunkUser ) == 0") )
    __debugbreak();
  scrContext->m_varPub.programBuffer = NULL;
  scrContext->m_compilePub.programLen = 0;
  scrContext->m_varPub.checksum = 0;
  scrContext->m_varPub.endScriptBuffer = NULL;
}

/*
==============
Scr_GetCurrentExtFilename
==============
*/
sval_u Scr_GetCurrentExtFilename()
{
  int in_ptr_stack_top; 
  __int64 v2; 

  in_ptr_stack_top = g_pScrCompileContext->m_compilePub.in_ptr_stack_top;
  if ( in_ptr_stack_top <= 0 )
    LODWORD(v2) = 0;
  else
    LODWORD(v2) = j_SL_GetString_(extFilename[(__int64)(in_ptr_stack_top - 1)], 0, 16);
  return (sval_u)v2;
}

/*
==============
Scr_GetFunctionHandle
==============
*/
__int64 Scr_GetFunctionHandle(scrContext_t *scrContext, const char *const filename, const char *const name)
{
  unsigned __int64 v6; 
  signed int CanonicalFilename; 
  unsigned int Variable; 
  unsigned int Object; 
  unsigned int LowercaseString; 
  unsigned int v11; 
  VariableUnion u; 
  const char *programBuffer; 
  unsigned int v14; 
  VariableValue out; 

  if ( !scrContext->m_compilePub.scriptsPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 111, ASSERT_TYPE_ASSERT, "( scrContext.m_compilePub.scriptsPos )", (const char *)&queryFormat, "scrContext.m_compilePub.scriptsPos") )
    __debugbreak();
  v6 = -1i64;
  do
    ++v6;
  while ( filename[v6] );
  if ( v6 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 113, ASSERT_TYPE_ASSERT, "( ( strlen( filename ) < 128 ) )", "%s\n\t( filename ) = %s", "( strlen( filename ) < 128 )", filename) )
    __debugbreak();
  CanonicalFilename = Scr_CreateCanonicalFilename(scrContext, filename);
  Variable = FindVariable(scrContext, scrContext->m_compilePub.scriptsPos, CanonicalFilename);
  SL_RemoveRefToString((scr_string_t)CanonicalFilename);
  if ( !Variable )
    return 0i64;
  Object = FindObject(scrContext, Variable);
  if ( !Object && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 123, ASSERT_TYPE_ASSERT, "( id )", (const char *)&queryFormat, &valueOut) )
    __debugbreak();
  LowercaseString = SL_FindLowercaseString(name);
  if ( !LowercaseString )
    return 0i64;
  v11 = FindVariable(scrContext, Object, LowercaseString);
  if ( !v11 )
    return 0i64;
  Scr_EvalVariable_Out(scrContext, v11, &out);
  if ( out.type != VAR_CODEPOS && out.type != VAR_DEVELOPER_CODEPOS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 142, ASSERT_TYPE_ASSERT, "( pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS )", (const char *)&queryFormat, "pos.type == VAR_CODEPOS || pos.type == VAR_DEVELOPER_CODEPOS") )
    __debugbreak();
  u = out.u;
  if ( !scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 73, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "scrContext.m_varPub.programBuffer") )
    __debugbreak();
  if ( !u.scriptCodePosValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 74, ASSERT_TYPE_ASSERT, "( pos )", (const char *)&queryFormat, "pos") )
    __debugbreak();
  programBuffer = scrContext->m_varPub.programBuffer;
  if ( u.scriptCodePosValue - (unsigned __int64)programBuffer >= scrContext->m_compilePub.programLen )
    return 0i64;
  if ( u.scriptCodePosValue < (unsigned __int64)programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 151, ASSERT_TYPE_ASSERT, "( codePos >= scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "codePos >= scrContext.m_varPub.programBuffer") )
    __debugbreak();
  v14 = truncate_cast<int,__int64>(u.scriptCodePosValue - (unsigned __int64)scrContext->m_varPub.programBuffer);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 153, ASSERT_TYPE_ASSERT, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  return v14;
}

/*
==============
Scr_InInline
==============
*/
bool Scr_InInline(const scrContext_t *pScrCompileContext)
{
  return pScrCompileContext->m_compilePub.in_ptr_stack_top > 0;
}

/*
==============
Scr_InitProgramHunkUser
==============
*/
void Scr_InitProgramHunkUser(scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.programHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 344, ASSERT_TYPE_ASSERT, "(!pScrVarPub->programHunkUser)", (const char *)&queryFormat, "!pScrVarPub->programHunkUser") )
    __debugbreak();
  if ( scrContext->m_varPub.canonicalStringHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 345, ASSERT_TYPE_ASSERT, "(!pScrVarPub->canonicalStringHunkUser)", (const char *)&queryFormat, "!pScrVarPub->canonicalStringHunkUser") )
    __debugbreak();
  if ( scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 347, ASSERT_TYPE_ASSERT, "(!pScrVarPub->readWriteTempHunkUser)", (const char *)&queryFormat, "!pScrVarPub->readWriteTempHunkUser") )
    __debugbreak();
  scrContext->m_varPub.programHunkUser = Mem_HunkUser_Create(0x400000ui64, "scrContext.m_varPub.programHunkUser", TRACK_SCRIPT, MEM_ALLOC_FLAG_MINIMAL_TRACKING);
  scrContext->m_varPub.canonicalStringHunkUser = Mem_HunkUser_Create(0x80000ui64, "scrContext.m_varPub.canonicalStringHunkUser", TRACK_SCRIPT, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  scrContext->m_varPub.readWriteTempHunkUser = Mem_HunkUser_Create(0x1000000ui64, "scrContext.m_varPub.readWriteTempHunkUser", TRACK_MISC, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  Scr_Mem_TempInit(scrContext);
  Scr_Mem_DebugInit(scrContext);
  Scr_Parser_InitHunkUsers(scrContext);
}

/*
==============
Scr_InitStringConstants
==============
*/
void Scr_InitStringConstants(const bool useReducedSpGoldLimits)
{
  unsigned int v2; 

  if ( g_scrCanonicalStringPub.opaqueStringCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 524, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.opaqueStringCount == 0 )", "String constants initialized multiple times") )
    __debugbreak();
  if ( g_scrCanonicalStringPub.canonicalStringLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 525, ASSERT_TYPE_ASSERT, "( g_scrCanonicalStringPub.canonicalStringLimit == 0 )", "String constants initialized multiple times") )
    __debugbreak();
  v2 = 72013;
  if ( useReducedSpGoldLimits )
    v2 = 58048;
  g_scrCanonicalStringPub.opaqueStringCount = v2;
  g_scrCanonicalStringPub.canonicalStringLimit = (!useReducedSpGoldLimits << 12) + 24575;
}

/*
==============
Scr_IsIdentifier
==============
*/
char Scr_IsIdentifier(const char *token)
{
  char v1; 
  const char *v2; 

  v1 = *token;
  v2 = token;
  if ( *token )
  {
    while ( (unsigned __int8)(v1 - 97) <= 0x19u || (unsigned __int8)(v1 - 65) <= 0x19u || (unsigned __int8)(v1 - 48) <= 9u || v1 == 95 )
    {
      v1 = *++v2;
      if ( !v1 )
        return 1;
    }
  }
  return 0;
}

/*
==============
Scr_IsInOpcodeMemory
==============
*/
_BOOL8 Scr_IsInOpcodeMemory(const scrContext_t *scrContext, const char *pos)
{
  if ( !scrContext->m_varPub.programBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 73, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.programBuffer )", (const char *)&queryFormat, "scrContext.m_varPub.programBuffer") )
    __debugbreak();
  if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 74, ASSERT_TYPE_ASSERT, "( pos )", (const char *)&queryFormat, "pos") )
    __debugbreak();
  return (unsigned __int64)(pos - scrContext->m_varPub.programBuffer) < scrContext->m_compilePub.programLen;
}

/*
==============
Scr_LoadScript
==============
*/
__int64 Scr_LoadScript(scrContext_t *scrContext, const char *filenameExt)
{
  Mem_LargeLocal v5; 

  Mem_LargeLocal::Mem_LargeLocal(&v5, 0x8CA0ui64, "PrecacheEntry_array entries");
  scrContext->m_compilePub.scriptCompileFileListCount = 0;
  LODWORD(filenameExt) = Scr_LoadScriptInternal(scrContext, filenameExt, (PrecacheEntry *)v5.m_ptr, 0, 0);
  Mem_LargeLocal::~Mem_LargeLocal(&v5);
  return (unsigned int)filenameExt;
}

/*
==============
Scr_LoadScriptInternal
==============
*/
unsigned int Scr_LoadScriptInternal(scrContext_t *scrContext, const char *filenameExt, PrecacheEntry *entries, int entriesCount, int scopeCount)
{
  unsigned __int64 v7; 
  scr_string_t name; 
  unsigned int Variable; 
  unsigned int NewVariable; 
  const char *sourceBuf; 
  ScrThreadMode loadThreadMode; 
  const char *v14; 
  const char *v15; 
  unsigned int animTreeNames; 
  int v17; 
  const char *scriptExtFilename; 
  unsigned int scriptsPos; 
  unsigned int v20; 
  unsigned int ObjectInternal; 
  unsigned int v22; 
  char *v23; 
  char v24; 
  char *v25; 
  char v26; 
  unsigned int fileCountId; 
  scr_string_t scriptFilenameExt; 
  unsigned int v30; 
  sval_u parseData; 
  const char *v33; 
  char v34[1024]; 

  if ( !scrContext->m_compilePub.script_loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 948, ASSERT_TYPE_ASSERT, "( pScrCompilePub->script_loading )", (const char *)&queryFormat, "pScrCompilePub->script_loading") )
    __debugbreak();
  if ( !Sys_IsMainThread() && (!Sys_IsServerThread() || scrContext->m_compilePub.loadThreadMode != ASYNC_SERVER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 952, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || (Sys_IsServerThread() && (pScrCompilePub->loadThreadMode == ScrThreadMode::ASYNC_SERVER)) )", (const char *)&queryFormat, "Sys_IsMainThread() || (Sys_IsServerThread() && (pScrCompilePub->loadThreadMode == ScrThreadMode::ASYNC_SERVER))") )
    __debugbreak();
  v7 = -1i64;
  do
    ++v7;
  while ( filenameExt[v7] );
  if ( v7 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 954, ASSERT_TYPE_ASSERT, "( ( strlen( filenameExt ) < 128 ) )", "%s\n\t( filenameExt ) = %s", "( strlen( filenameExt ) < 128 )", filenameExt) )
    __debugbreak();
  Scr_Mem_TempCheckClear(scrContext);
  name = Scr_CreateCanonicalFilename(scrContext, filenameExt);
  if ( FindVariable(scrContext, scrContext->m_compilePub.loadedscripts, name) )
  {
    SL_RemoveRefToString(name);
    Variable = FindVariable(scrContext, scrContext->m_compilePub.scriptsPos, name);
    if ( Variable )
      return FindObject(scrContext, Variable);
    else
      return 0;
  }
  else
  {
    NewVariable = GetNewVariable(scrContext, scrContext->m_compilePub.loadedscripts, name);
    SL_RemoveRefToString(name);
    sourceBuf = scrContext->m_parserPub.sourceBuf;
    ProfLoad_Begin("Scr_AddSourceBuffer");
    loadThreadMode = scrContext->m_compilePub.loadThreadMode;
    v14 = TempMalloc(0i64);
    v15 = Scr_AddSourceBuffer(scrContext, filenameExt, v14, 1, loadThreadMode, -1);
    ProfLoad_End();
    if ( v15 )
    {
      animTreeNames = scrContext->m_animPub.animTreeNames;
      v17 = 0;
      scrContext->m_animPub.animTreeNames = 0;
      *(_QWORD *)&scrContext->m_compilePub.far_function_count = 0i64;
      g_pScrCompileContext = scrContext;
      v30 = animTreeNames;
      Scr_InitAllocNode(scrContext);
      scriptExtFilename = scrContext->m_parserPub.scriptExtFilename;
      scrContext->m_parserPub.scriptExtFilename = filenameExt;
      v33 = scriptExtFilename;
      scriptFilenameExt = scrContext->m_compilePub.scriptFilenameExt;
      scrContext->m_compilePub.in_ptr = "+";
      scrContext->m_compilePub.scriptFilenameExt = name;
      scrContext->m_compilePub.parseBuf = v15;
      scrContext->m_compilePub.in_ptr_valid = 0;
      ScriptParse(&parseData, 0);
      scriptsPos = scrContext->m_compilePub.scriptsPos;
      scrContext->m_compilePub.parseBuf = NULL;
      v20 = GetVariable(scrContext, scriptsPos, name);
      ObjectInternal = GetObjectInternal(scrContext, v20);
      v22 = GetVariable(scrContext, scrContext->m_compilePub.scriptsCount, name);
      fileCountId = GetObjectInternal(scrContext, v22);
      if ( com_showParseTree->current.enabled )
      {
        if ( scopeCount > 0 )
        {
          v23 = v34;
          do
          {
            ++v23;
            v24 = 32;
            if ( (v17 & 1) != 0 )
              v24 = 43;
            ++v17;
            *(v23 - 1) = v24;
          }
          while ( v17 < scopeCount );
        }
        v25 = &v34[v17 - (_QWORD)filenameExt];
        do
        {
          v26 = *filenameExt;
          filenameExt[(_QWORD)v25] = *filenameExt;
          ++filenameExt;
        }
        while ( v26 );
        Com_Printf(16, "%s\n", v34);
      }
      ProfLoad_Begin("ScriptCompile");
      if ( scrContext->m_varPub.error_message )
      {
        Scr_ShutdownAllocNode(scrContext);
        Scr_Mem_TempClear(scrContext);
      }
      else
      {
        ScriptCompile(scrContext, parseData, ObjectInternal, fileCountId, NewVariable, entries, entriesCount, name, scopeCount);
      }
      ProfLoad_End();
      if ( !scrContext->m_varPub.error_message )
        RemoveVariable(scrContext, scrContext->m_compilePub.scriptsCount, name);
      scrContext->m_parserPub.scriptExtFilename = v33;
      scrContext->m_parserPub.sourceBuf = sourceBuf;
      scrContext->m_compilePub.scriptFilenameExt = scriptFilenameExt;
      scrContext->m_animPub.animTreeNames = v30;
      Scr_Mem_TempCheckClear(scrContext);
      return ObjectInternal;
    }
    else
    {
      return 0;
    }
  }
}

/*
==============
Scr_Main_DecommitUnusedMemory
==============
*/
void Scr_Main_DecommitUnusedMemory(const scrContext_t *scrContext)
{
  Mem_HunkUser_DecommitUnused(scrContext->m_varPub.programHunkUser);
  Mem_HunkUser_DecommitUnused(scrContext->m_varPub.canonicalStringHunkUser);
  Mem_HunkUser_DecommitUnused(scrContext->m_varPub.readWriteTempHunkUser);
  Scr_Mem_TempDecommitUnused(scrContext);
  Scr_Mem_DebugDecommitUnused(scrContext);
  Scr_Parser_DecommitUnusedHunkUsers(scrContext);
  Scr_DecommitUnusedNodeUser(scrContext);
}

/*
==============
Scr_Main_PreCommitMemory
==============
*/
void Scr_Main_PreCommitMemory(const scrContext_t *scrContext)
{
  Mem_HunkUser_CommitReserve(scrContext->m_varPub.programHunkUser);
  Mem_HunkUser_CommitReserve(scrContext->m_varPub.canonicalStringHunkUser);
  Mem_HunkUser_CommitReserve(scrContext->m_varPub.readWriteTempHunkUser);
  Scr_Mem_TempPreAllocate(scrContext);
  Scr_Mem_DebugPreAllocate(scrContext);
  Scr_Parser_PreCommitHunkUsers(scrContext);
  Scr_PreCommitNodeUser(scrContext);
}

/*
==============
Scr_PostCompileScripts
==============
*/
void Scr_PostCompileScripts(scrContext_t *scrContext)
{
  char *fmt; 
  __int64 v3; 
  unsigned int opaqueStringCount; 

  if ( scrContext->m_compilePub.programLen != (unsigned int)TempMalloc(0i64) - LODWORD(scrContext->m_varPub.programBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1244, ASSERT_TYPE_ASSERT, "( scrContext.m_compilePub.programLen == static_cast<uint>( TempMalloc( 0 ) - scrContext.m_varPub.programBuffer ) )", (const char *)&queryFormat, "scrContext.m_compilePub.programLen == static_cast<uint>( TempMalloc( 0 ) - scrContext.m_varPub.programBuffer )") )
    __debugbreak();
  if ( scrContext->m_animPub.animTreeNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 1247, ASSERT_TYPE_ASSERT, "( !scrContext.m_animPub.animTreeNames )", (const char *)&queryFormat, "!scrContext.m_animPub.animTreeNames") )
    __debugbreak();
  Scr_PrintLookupBufferUsage(scrContext);
  Scr_PrintCompileResourceUsage(scrContext);
  opaqueStringCount = g_scrCanonicalStringPub.opaqueStringCount;
  LODWORD(v3) = 400;
  LODWORD(fmt) = g_scrCanonicalStringPub.canonicalStringBufferSize >> 10;
  Com_Printf(24, "Script compile canonical strings: count %i/%i, buffer %i/%i (kb). Opaque count %i\n", g_scrCanonicalStringPub.canonicalStringCount, g_scrCanonicalStringPub.canonicalStringLimit, fmt, v3, opaqueStringCount);
}

/*
==============
Scr_PrecacheAnimTrees
==============
*/
void Scr_PrecacheAnimTrees(void *(*Alloc)(unsigned __int64), int user, const ScrThreadMode threadMode)
{
  __int64 v3; 
  scrContext_t *v6; 
  bool v7; 
  unsigned int i; 

  v3 = user;
  Sys_ProfBeginNamedEvent(0xFFFFFFu, "Scr_PrecacheAnimTrees");
  v6 = ScriptContext_GetFromAnimUser(v3);
  XAnimPushCheckFatalErrorFlag();
  v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_LADDER_AIM|0x80);
  if ( v7 )
    DB_AssetQuery_Push();
  XAnimAcquireMemoryLocks();
  for ( i = 1; i <= v6->m_animPub.xanim_num[v3]; ++i )
    Scr_LoadAnimTreeAtIndex(i, Alloc, v3, threadMode);
  Scr_ClearSharedParameterTreeNames(v6);
  XanimReleaseMemoryLocks();
  if ( v7 )
    DB_AssetQuery_Pop();
  if ( XAnimPopCheckFatalErrorFlag() )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14409C730, 740i64);
  Sys_ProfEndNamedEvent();
}

/*
==============
Scr_ScanFile
==============
*/
__int64 Scr_ScanFile(scrContext_t *scrContext, char *buf, int max_size)
{
  unsigned int v3; 
  __int64 v5; 
  __int64 v7; 
  const char *in_ptr; 
  char v9; 
  __int64 result; 

  v3 = 0;
  v5 = max_size;
  if ( max_size > 0 )
  {
    v7 = 0i64;
    do
    {
      in_ptr = scrContext->m_compilePub.in_ptr;
      v9 = *in_ptr;
      scrContext->m_compilePub.in_ptr = in_ptr + 1;
      if ( !v9 )
        break;
      if ( v9 == 10 )
      {
        result = v3 + 1;
        buf[v3] = 10;
        return result;
      }
      buf[v7] = v9;
      ++v3;
      ++v7;
    }
    while ( v7 < v5 );
    if ( !v9 )
    {
      if ( scrContext->m_compilePub.in_ptr_valid )
      {
        --scrContext->m_compilePub.in_ptr;
        return v3;
      }
      if ( !scrContext->m_compilePub.parseBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 771, ASSERT_TYPE_ASSERT, "(pScrCompilePub->parseBuf)", (const char *)&queryFormat, "pScrCompilePub->parseBuf") )
        __debugbreak();
      scrContext->m_compilePub.in_ptr = scrContext->m_compilePub.parseBuf;
      scrContext->m_compilePub.in_ptr_valid = 1;
      scrContext->m_compilePub.in_ptr_stack_top = 0;
    }
  }
  return v3;
}

/*
==============
Scr_SetupInternalVariable
==============
*/
void Scr_SetupInternalVariable(scrContext_t *scrContext, unsigned int inVariable, unsigned int *outVariable)
{
  __int64 v4; 

  v4 = inVariable;
  if ( *outVariable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 496, ASSERT_TYPE_ASSERT, "( outVariable == NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "outVariable == NULL_OBJECT_VARIABLE_ID") )
    __debugbreak();
  if ( scrContext->m_varDebugPub.m_Inited )
    ++scrContext->m_varDebugPub.extRefCount[v4];
  *outVariable = v4;
}

/*
==============
Scr_Shutdown
==============
*/
void Scr_Shutdown(scrContext_t *scrContext)
{
  if ( scrContext->m_varPub.bInited )
  {
    scrContext->m_varPub.bInited = 0;
    Scr_ShutdownVariables(scrContext);
    Profile_EndAllScript(scrContext);
  }
}

/*
==============
Scr_ShutdownProgramHunkUser
==============
*/
void Scr_ShutdownProgramHunkUser(scrContext_t *scrContext)
{
  if ( !scrContext->m_varPub.programHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 372, ASSERT_TYPE_ASSERT, "(pScrVarPub->programHunkUser)", (const char *)&queryFormat, "pScrVarPub->programHunkUser") )
    __debugbreak();
  if ( !scrContext->m_varPub.canonicalStringHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 373, ASSERT_TYPE_ASSERT, "(pScrVarPub->canonicalStringHunkUser)", (const char *)&queryFormat, "pScrVarPub->canonicalStringHunkUser") )
    __debugbreak();
  if ( !scrContext->m_varPub.readWriteTempHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 375, ASSERT_TYPE_ASSERT, "(pScrVarPub->readWriteTempHunkUser)", (const char *)&queryFormat, "pScrVarPub->readWriteTempHunkUser") )
    __debugbreak();
  Mem_HunkUser_Destroy(scrContext->m_varPub.programHunkUser);
  Mem_HunkUser_Destroy(scrContext->m_varPub.canonicalStringHunkUser);
  Mem_HunkUser_Destroy(scrContext->m_varPub.readWriteTempHunkUser);
  scrContext->m_varPub.programHunkUser = NULL;
  scrContext->m_varPub.canonicalStringHunkUser = NULL;
  scrContext->m_varPub.readWriteTempHunkUser = NULL;
  Scr_Mem_TempShutdown(scrContext);
  Scr_Mem_DebugShutdown(scrContext);
  Scr_Parser_ShutdownHunkUsers(scrContext);
}

/*
==============
Scr_ShutdownStringConstants
==============
*/
void Scr_ShutdownStringConstants(void)
{
  *(_QWORD *)&g_scrCanonicalStringPub.canonicalStringLimit = 0i64;
}

/*
==============
Scr_StartInlineLex
==============
*/
void Scr_StartInlineLex(const char *buf, int len)
{
  scrContext_t *v2; 
  __int64 v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  scrContext_t *v9; 
  const char *v10; 
  int prevIndex; 
  __int64 v12; 
  __int64 v13; 
  char *v14; 
  signed __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  ScrThreadMode loadThreadMode; 
  const char *v22; 
  char *v23; 
  __int64 in_ptr_stack_top; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  char Destination[256]; 
  char dest[256]; 
  char goldname[256]; 

  v2 = g_pScrCompileContext;
  if ( g_pScrCompileContext->m_compilePub.in_ptr_stack_top >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 844, ASSERT_TYPE_ASSERT, "(pScrCompilePub->in_ptr_stack_top < 4)", (const char *)&queryFormat, "pScrCompilePub->in_ptr_stack_top < MAX_INLINE_DEPTH") )
LABEL_3:
    __debugbreak();
  while ( *buf == 32 || *buf == 9 )
  {
    ++buf;
    if ( --len <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 850, ASSERT_TYPE_ASSERT, "(len > 0)", (const char *)&queryFormat, "len > 0") )
      goto LABEL_3;
  }
  v5 = len;
  v6 = 0x800000000002400i64;
  while ( 1 )
  {
    v7 = buf[v5 - 1];
    if ( (unsigned __int8)v7 > 0x3Bu || !_bittest64(&v6, v7) )
      break;
    --len;
    if ( --v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_main.cpp", 855, ASSERT_TYPE_ASSERT, "(len > 0)", (const char *)&queryFormat, "len > 0") )
      __debugbreak();
  }
  strncpy(Destination, buf, len);
  if ( (unsigned __int64)len >= 0x100 )
  {
    j___report_rangecheckfailure(v8);
    JUMPOUT(0x14153CCCEi64);
  }
  Destination[len] = 0;
  Com_sprintf(dest, 0x100ui64, "%s.gsh", Destination);
  Scr_CreateCanonicalFilenameInternal(extFilename[(__int64)v2->m_compilePub.in_ptr_stack_top], dest, 256);
  ProfLoad_Begin("Scr_AddSourceBuffer");
  v9 = g_pScrCompileContext;
  v10 = extFilename[(__int64)v2->m_compilePub.in_ptr_stack_top];
  if ( g_pScrCompileContext->m_varPub.developer )
  {
    prevIndex = 0;
    if ( (int)g_pScrCompileContext->m_parserPub.sourceBufferLookupLen <= 0 )
    {
LABEL_39:
      prevIndex = -2;
    }
    else
    {
      v12 = 0i64;
LABEL_20:
      v13 = 0x7FFFFFFFi64;
      v14 = v9->m_parserPub.sourceBufferLookup[v12].buf;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v15 = v10 - v14;
      do
      {
        v16 = (unsigned __int8)v14[v15];
        v17 = v13;
        v18 = (unsigned __int8)*v14++;
        --v13;
        if ( !v17 )
          break;
        if ( v16 != v18 )
        {
          v19 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v19 = v16;
          v16 = v19;
          v20 = v18 + 32;
          if ( (unsigned int)(v18 - 65) > 0x19 )
            v20 = v18;
          if ( v16 != v20 )
          {
            if ( Scr_UseSPGoldScript(v10, goldname, 0x100ui64) && !I_stricmp(goldname, v9->m_parserPub.sourceBufferLookup[v12].buf) )
              break;
            ++prevIndex;
            ++v12;
            if ( prevIndex < (signed int)v9->m_parserPub.sourceBufferLookupLen )
              goto LABEL_20;
            goto LABEL_39;
          }
        }
      }
      while ( v16 );
    }
  }
  else
  {
    prevIndex = -1;
  }
  v2->m_compilePub.sourceBuf_stack[v2->m_compilePub.in_ptr_stack_top] = v2->m_parserPub.sourceBuf;
  loadThreadMode = v2->m_compilePub.loadThreadMode;
  v22 = TempMalloc(0i64);
  v23 = Scr_AddSourceBuffer(g_pScrCompileContext, extFilename[(__int64)v2->m_compilePub.in_ptr_stack_top], v22, 1, loadThreadMode, prevIndex);
  ProfLoad_End();
  in_ptr_stack_top = v2->m_compilePub.in_ptr_stack_top;
  if ( v23 )
  {
    g_out_pos_stack[in_ptr_stack_top] = g_out_pos;
    v25 = g_sourcePos;
    g_out_pos = 0;
    v26 = v2->m_compilePub.in_ptr_stack_top;
    g_sourcePos = 0;
    g_sourcePos_stack[v26] = v25;
    v2->m_compilePub.in_ptr_stack[v2->m_compilePub.in_ptr_stack_top] = v2->m_compilePub.in_ptr;
    v27 = v2->m_compilePub.in_ptr_stack_top;
    v2->m_compilePub.parseBuf = v23;
    v2->m_compilePub.in_ptr = v23;
    v2->m_compilePub.scriptExtFilename_stack[v27] = v2->m_parserPub.scriptExtFilename;
    v2->m_parserPub.scriptExtFilename = extFilename[(__int64)v2->m_compilePub.in_ptr_stack_top++];
  }
  else
  {
    CompileError(g_pScrCompileContext, g_sourcePos, "Failed to find #inline file %s", extFilename[in_ptr_stack_top]);
  }
}

