/*
==============
ScriptContext_GetVarListParentSize
==============
*/

unsigned int __fastcall ScriptContext_GetVarListParentSize(const scrContext_t *scrContext)
{
  return ?ScriptContext_GetVarListParentSize@@YAIAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_Server
==============
*/

scrContext_t *__fastcall ScriptContext_Server()
{
  return ?ScriptContext_Server@@YAAEAUscrContext_t@@XZ();
}

/*
==============
ScriptContext_GetWeaponTable
==============
*/

GScrWeaponTable *__fastcall ScriptContext_GetWeaponTable(scrContext_t *scrContext)
{
  return ?ScriptContext_GetWeaponTable@@YAPEAUGScrWeaponTable@@AEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_GetFirst
==============
*/

scrContext_t *__fastcall ScriptContext_GetFirst()
{
  return ?ScriptContext_GetFirst@@YAPEAUscrContext_t@@XZ();
}

/*
==============
ScriptContext_GetClassMapName
==============
*/

const char *__fastcall ScriptContext_GetClassMapName(const scrContext_t *scrContext, const EntityClass entClass)
{
  return ?ScriptContext_GetClassMapName@@YAPEBDAEBUscrContext_t@@W4EntityClass@@@Z(scrContext, entClass);
}

/*
==============
ScriptContext_SetVarUsageScriptCodePos
==============
*/

void __fastcall ScriptContext_SetVarUsageScriptCodePos(scrContext_t *scrContext, const ScriptCodePos varUsageScriptPos)
{
  ?ScriptContext_SetVarUsageScriptCodePos@@YAXAEAUscrContext_t@@UScriptCodePos@@@Z(scrContext, varUsageScriptPos);
}

/*
==============
ScriptContext_GetForFilename
==============
*/

scrContext_t *__fastcall ScriptContext_GetForFilename(const char *filename)
{
  return ?ScriptContext_GetForFilename@@YAAEAUscrContext_t@@PEBD@Z(filename);
}

/*
==============
ScriptContext_GetFromInstance
==============
*/

scrContext_t *__fastcall ScriptContext_GetFromInstance(ScriptInstanceType inst)
{
  return ?ScriptContext_GetFromInstance@@YAAEAUscrContext_t@@W4ScriptInstanceType@@@Z(inst);
}

/*
==============
Profile_EndAllScript
==============
*/

void __fastcall Profile_EndAllScript(scrContext_t *scrContext)
{
  ?Profile_EndAllScript@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_GetNext
==============
*/

scrContext_t *__fastcall ScriptContext_GetNext(scrContext_t *pScrContext)
{
  return ?ScriptContext_GetNext@@YAPEAUscrContext_t@@PEAU1@@Z(pScrContext);
}

/*
==============
ScriptContext_MemoryClear
==============
*/

void __fastcall ScriptContext_MemoryClear(scrContext_t *scrContext)
{
  ?ScriptContext_MemoryClear@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_Initialize
==============
*/

void __fastcall ScriptContext_Initialize(ScriptInstanceType inst)
{
  ?ScriptContext_Initialize@@YAXW4ScriptInstanceType@@@Z(inst);
}

/*
==============
ScriptContext_GetInstanceName
==============
*/

const char *__fastcall ScriptContext_GetInstanceName(const scrContext_t *scrContext)
{
  return ?ScriptContext_GetInstanceName@@YAPEBDAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_SetVarUsagePos
==============
*/

void __fastcall ScriptContext_SetVarUsagePos(scrContext_t *scrContext, const char *varUsagePos)
{
  ?ScriptContext_SetVarUsagePos@@YAXAEAUscrContext_t@@PEBD@Z(scrContext, varUsagePos);
}

/*
==============
ScriptContext_GetProfile
==============
*/

ProfileScript *__fastcall ScriptContext_GetProfile(scrContext_t *scrContext)
{
  return ?ScriptContext_GetProfile@@YAPEAUProfileScript@@AEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_MemoryFree
==============
*/

void __fastcall ScriptContext_MemoryFree(scrContext_t *scrContext)
{
  ?ScriptContext_MemoryFree@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_GetFromAnimUser
==============
*/

scrContext_t *__fastcall ScriptContext_GetFromAnimUser(int animUser)
{
  return ?ScriptContext_GetFromAnimUser@@YAAEAUscrContext_t@@H@Z(animUser);
}

/*
==============
ScriptContext_GetProfileConst
==============
*/

const ProfileScript *__fastcall ScriptContext_GetProfileConst(const scrContext_t *scrContext)
{
  return ?ScriptContext_GetProfileConst@@YAPEBUProfileScript@@AEBUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_GetVarUsageScriptCodePos
==============
*/

ScriptCodePos __fastcall ScriptContext_GetVarUsageScriptCodePos(const scrContext_t *scrContext)
{
  return ?ScriptContext_GetVarUsageScriptCodePos@@YA?AUScriptCodePos@@AEBUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_MemoryAllocate
==============
*/

void __fastcall ScriptContext_MemoryAllocate(scrContext_t *scrContext)
{
  ?ScriptContext_MemoryAllocate@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_MemoryInit
==============
*/

void __fastcall ScriptContext_MemoryInit(scrContext_t *scrContext, const char *gameType, const unsigned int maxClientCount)
{
  ?ScriptContext_MemoryInit@@YAXAEAUscrContext_t@@PEBDI@Z(scrContext, gameType, maxClientCount);
}

/*
==============
ScriptContext_HasTimeArrayId
==============
*/

bool __fastcall ScriptContext_HasTimeArrayId(const scrContext_t *scrContext)
{
  return ?ScriptContext_HasTimeArrayId@@YA_NAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_GetFrameRate
==============
*/

double __fastcall ScriptContext_GetFrameRate(const scrContext_t *scrContext)
{
  double result; 

  *(float *)&result = ?ScriptContext_GetFrameRate@@YAMAEBUscrContext_t@@@Z(scrContext);
  return result;
}

/*
==============
ScriptContext_InitDumpStack
==============
*/

void __fastcall ScriptContext_InitDumpStack(scrContext_t *scrContext)
{
  ?ScriptContext_InitDumpStack@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_GetInstance
==============
*/

ScriptInstanceType __fastcall ScriptContext_GetInstance(const scrContext_t *scrContext)
{
  return ?ScriptContext_GetInstance@@YA?AW4ScriptInstanceType@@AEBUscrContext_t@@@Z(scrContext);
}

/*
==============
ScriptContext_GetWeaponTableConst
==============
*/

const GScrWeaponTable *__fastcall ScriptContext_GetWeaponTableConst(const scrContext_t *scrContext)
{
  return ?ScriptContext_GetWeaponTableConst@@YAPEBUGScrWeaponTable@@AEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Profile_EndAllScript
==============
*/
void Profile_EndAllScript(scrContext_t *scrContext)
{
  unsigned int v1; 
  __int64 v3; 
  unsigned int v4; 
  bitarray<128> *v5; 
  unsigned int v6; 
  unsigned int *p_totalTime; 
  bitarray<128> *v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  int v11; 
  bitarray<128> *v13; 
  bitarray<128> *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int m_variableListParentSize; 

  v1 = 0;
  m_variableListParentSize = scrContext->m_variableListParentSize;
  if ( m_variableListParentSize )
  {
    v3 = 0i64;
    do
    {
      v4 = 0;
      v5 = &scrContext->m_profileScript.threadId[v3];
      while ( !v5->array[0] )
      {
        ++v4;
        v5 = (bitarray<128> *)((char *)v5 + 4);
        if ( v4 >= 4 )
          goto LABEL_28;
      }
      v6 = 0;
      p_totalTime = &scrContext->m_profileScript.write[0].totalTime;
      do
      {
        v8 = &scrContext->m_profileScript.threadId[v3];
        if ( v6 >= 0x80 )
        {
          LODWORD(v16) = 128;
          LODWORD(v15) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, v16) )
            __debugbreak();
        }
        v9 = 0x80000000 >> (v6 & 0x1F);
        v10 = (unsigned __int64)v6 >> 5;
        if ( (v9 & v8->array[v10]) != 0 )
        {
          v11 = __rdtsc();
          if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 284, ASSERT_TYPE_ASSERT, "( fsID != NULL_OBJECT_VARIABLE_ID )", (const char *)&queryFormat, "fsID != NULL_OBJECT_VARIABLE_ID") )
            __debugbreak();
          if ( (*(p_totalTime - 3))-- == 1 )
            *p_totalTime += v11 - *(p_totalTime - 1);
          v13 = &scrContext->m_profileScript.threadId[v3];
          if ( v6 >= 0x80 )
          {
            LODWORD(v16) = 128;
            LODWORD(v15) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, v16) )
              __debugbreak();
          }
          if ( (v9 & v13->array[v10]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.h", 291, ASSERT_TYPE_ASSERT, "( scrContext.m_profileScript.threadId[fsID].testBit( profileIndex ) )", (const char *)&queryFormat, "scrContext.m_profileScript.threadId[fsID].testBit( profileIndex )") )
            __debugbreak();
          v14 = &scrContext->m_profileScript.threadId[v3];
          if ( v6 >= 0x80 )
          {
            LODWORD(v18) = 128;
            LODWORD(v17) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v17, v18) )
              __debugbreak();
          }
          v14->array[v10] &= ~v9;
        }
        ++v6;
        p_totalTime += 4;
      }
      while ( (int)v6 < 128 );
LABEL_28:
      ++v1;
      ++v3;
    }
    while ( v1 < m_variableListParentSize );
  }
}

/*
==============
ScriptContext_AllocAlign
==============
*/
void *ScriptContext_AllocAlign(const scrContext_t *scrContext, unsigned __int64 size, unsigned __int64 alignment)
{
  void *v6; 

  if ( !scrContext->m_hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 643, ASSERT_TYPE_ASSERT, "( scrContext.m_hunkUser != nullptr )", (const char *)&queryFormat, "scrContext.m_hunkUser != nullptr") )
    __debugbreak();
  v6 = Mem_HunkUser_AllocInternal(scrContext->m_hunkUser, size, alignment, "ScriptContext_AllocAlign");
  memset_0(v6, 0, size);
  return v6;
}

/*
==============
ScriptContext_GetClassMapName
==============
*/
const char *ScriptContext_GetClassMapName(const scrContext_t *scrContext, const EntityClass entClass)
{
  int v5; 
  int v6; 

  if ( (unsigned __int8)entClass >= ENTITY_CLASS_COUNT )
  {
    v6 = 11;
    v5 = (unsigned __int8)entClass;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( entClass ) < (unsigned)( ENTITY_CLASS_COUNT )", "entClass doesn't index ENTITY_CLASS_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return scrContext->m_varPub.m_classMap[(unsigned __int8)entClass].name;
}

/*
==============
ScriptContext_GetFirst
==============
*/
scrContext_t *ScriptContext_GetFirst()
{
  return g_pScrContexts[0];
}

/*
==============
ScriptContext_GetForFilename
==============
*/
scrContext_t *ScriptContext_GetForFilename(const char *filename)
{
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 229, ASSERT_TYPE_ASSERT, "( filename )", (const char *)&queryFormat, "filename") )
    __debugbreak();
  if ( !Core_EndsWith(filename, ".gsc") && !Core_EndsWith(filename, ".gsh") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 236, ASSERT_TYPE_ASSERT, "( Core_EndsWith( filename, \".gsc\" ) || Core_EndsWith( filename, \".gsh\" ) )", (const char *)&queryFormat, "Core_EndsWith( filename, SCR_GSC_EXT ) || Core_EndsWith( filename, SCR_GSH_EXT )") )
    __debugbreak();
  return &g_scrContext_Server;
}

/*
==============
ScriptContext_GetFrameRate
==============
*/
float ScriptContext_GetFrameRate(const scrContext_t *scrContext)
{
  __asm { vmovss  xmm0, dword ptr [rcx+5D7Ch] }
  return *(float *)&_XMM0;
}

/*
==============
ScriptContext_GetFromAnimUser
==============
*/
scrContext_t *ScriptContext_GetFromAnimUser(int animUser)
{
  return &g_scrContext_Server;
}

/*
==============
ScriptContext_GetFromInstance
==============
*/
scrContext_t *ScriptContext_GetFromInstance(ScriptInstanceType inst)
{
  int v3; 
  int v4; 

  if ( inst )
  {
    v4 = 1;
    v3 = (unsigned __int8)inst;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 257, ASSERT_TYPE_ASSERT, "(unsigned)( inst ) < (unsigned)( SCRIPTINSTANCE_COUNT )", "inst doesn't index SCRIPTINSTANCE_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return g_pScrContexts[(unsigned __int8)inst];
}

/*
==============
ScriptContext_GetInstance
==============
*/
__int64 ScriptContext_GetInstance(const scrContext_t *scrContext)
{
  return (unsigned __int8)scrContext->m_Instance;
}

/*
==============
ScriptContext_GetInstanceName
==============
*/
const char *ScriptContext_GetInstanceName(const scrContext_t *scrContext)
{
  const char *result; 

  result = "client";
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
    return "server";
  return result;
}

/*
==============
ScriptContext_GetNext
==============
*/
scrContext_t *ScriptContext_GetNext(scrContext_t *pScrContext)
{
  ScriptInstanceType m_Instance; 

  if ( !pScrContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 371, ASSERT_TYPE_ASSERT, "( pScrContext )", (const char *)&queryFormat, "pScrContext") )
    __debugbreak();
  m_Instance = pScrContext->m_Instance;
  if ( m_Instance )
    return (scrContext_t *)qword_147EF2798[(unsigned __int8)m_Instance];
  else
    return 0i64;
}

/*
==============
ScriptContext_GetProfile
==============
*/
ProfileScript *ScriptContext_GetProfile(scrContext_t *scrContext)
{
  return &scrContext->m_profileScript;
}

/*
==============
ScriptContext_GetProfileConst
==============
*/
ProfileScript *ScriptContext_GetProfileConst(const scrContext_t *scrContext)
{
  return &scrContext->m_profileScript;
}

/*
==============
ScriptContext_GetVarListParentSize
==============
*/
__int64 ScriptContext_GetVarListParentSize(const scrContext_t *scrContext)
{
  return scrContext->m_variableListParentSize;
}

/*
==============
ScriptContext_GetVarUsageScriptCodePos
==============
*/
ScriptCodePos ScriptContext_GetVarUsageScriptCodePos(const scrContext_t *scrContext)
{
  return (ScriptCodePos)scrContext->m_varPub.varUsagePos.m_genericPos;
}

/*
==============
ScriptContext_GetWeaponTable
==============
*/
GScrWeaponTable *ScriptContext_GetWeaponTable(scrContext_t *scrContext)
{
  return &scrContext->m_weaponTable;
}

/*
==============
ScriptContext_GetWeaponTableConst
==============
*/
GScrWeaponTable *ScriptContext_GetWeaponTableConst(const scrContext_t *scrContext)
{
  return &scrContext->m_weaponTable;
}

/*
==============
ScriptContext_HasTimeArrayId
==============
*/
bool ScriptContext_HasTimeArrayId(const scrContext_t *scrContext)
{
  return scrContext->m_varPub.timeArrayId != 0;
}

/*
==============
ScriptContext_InitDumpStack
==============
*/
void ScriptContext_InitDumpStack(scrContext_t *scrContext)
{
  __asm
  {
    vmovsd  xmm1, cs:__real@43e0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rax+28h]
    vdivsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcomisd xmm2, xmm1
    vsubsd  xmm2, xmm2, xmm1
    vcomisd xmm2, xmm1
    vcvttsd2si rax, xmm2
  }
  scrContext->m_dumpStack.m_threshRawTimerCount = _RAX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, dword ptr [rax+28h]
    vdivsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vcomisd xmm2, xmm1
    vsubsd  xmm2, xmm2, xmm1
    vcomisd xmm2, xmm1
    vcvttsd2si rax, xmm2
  }
  scrContext->m_dumpStack.m_threshRawMaxResetTime = _RAX;
}

/*
==============
ScriptContext_Initialize
==============
*/
void ScriptContext_Initialize(ScriptInstanceType inst)
{
  scrContext_t *v2; 

  if ( inst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 71, ASSERT_TYPE_ASSERT, "(unsigned)( inst ) < (unsigned)( SCRIPTINSTANCE_COUNT )", "inst doesn't index SCRIPTINSTANCE_COUNT\n\t%i not in [0, %i)", (unsigned __int8)inst, 1) )
    __debugbreak();
  v2 = g_pScrContexts[(unsigned __int8)inst];
  v2->m_Instance = inst;
  *(_QWORD *)&v2->m_jmpDepth = 0i64;
  v2->m_debuggerGlob.m_pDynamic = &g_debuggerGlobDynamic[(unsigned __int8)inst];
  v2->m_parserBasePointer = 0i64;
  v2->m_errorLevel = 0;
  *(_QWORD *)&v2->m_threadCount = 0i64;
  v2->m_tempAllocHighWatermark = 0i64;
  if ( inst )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 124, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid script instance!") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 147, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid script instance!") )
      __debugbreak();
  }
  else
  {
    ScriptContext_Setup_Server(v2);
    v2->m_debugSys.port = 28970;
    v2->m_debugSys.critSect = CRITSECT_DEBUG_SOCKET_SERVER;
  }
  NET_InitDebug(v2);
  *(_QWORD *)&v2->m_dumpStack.m_scriptThreadThreshLoopsPerCheck = 0i64;
  v2->m_dumpStack.m_scriptThreadThreshStopDumpingTime = 0i64;
  v2->m_dumpStack.m_threshRawTimerCount = 0i64;
  v2->m_dumpStack.m_threshRawMaxResetTime = 0i64;
  v2->m_dumpStack.m_prevStartTime = 0i64;
}

/*
==============
ScriptContext_LoadMemoryValues
==============
*/
void ScriptContext_LoadMemoryValues(scrContext_t *scrContext, const char *gameType, const unsigned int maxClientCount)
{
  const RawFile *rawfile; 
  unsigned int m_variableListParentSize; 
  unsigned int m_variableListChildSize; 
  char buf[8192]; 

  if ( DB_XAssetExists(ASSET_TYPE_RAWFILE, "script_memory.json") )
  {
    rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, "script_memory.json", 1).rawfile;
    if ( ((unsigned int)DB_GetRawFileLen(rawfile) >= 0x2000 || DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, "script_memory.json")) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 610, ASSERT_TYPE_ASSERT, "(rawFileLen < MAX_JSON_BUFFER_LEN && !DB_IsXAssetDefault( ASSET_TYPE_RAWFILE, \"script_memory.json\" ))", (const char *)&queryFormat, "rawFileLen < MAX_JSON_BUFFER_LEN && !DB_IsXAssetDefault( ASSET_TYPE_RAWFILE, SCR_CONTEXT_MEMORY_JSON )") )
      __debugbreak();
    DB_GetRawBuffer(rawfile, buf, 0x2000);
    ScriptContext_ParseMemoryJson(scrContext, gameType, maxClientCount, buf);
    m_variableListParentSize = scrContext->m_variableListParentSize;
    m_variableListChildSize = scrContext->m_variableListChildSize;
  }
  else
  {
    m_variableListParentSize = 70016;
    scrContext->m_scrDebugFunctionCount = 36864;
    m_variableListChildSize = 163840;
    scrContext->m_variableListParentSize = 70016;
    scrContext->m_variableListChildSize = 163840;
    scrContext->m_scrDebugFunctionBufferSize = 460800;
  }
  scrContext->m_variableListParentSizeDev = 80 * m_variableListParentSize / 0x64;
  scrContext->m_variableListParentSizeWarn = 70 * m_variableListParentSize / 0x64;
  scrContext->m_variableListChildSizeDev = 80 * m_variableListChildSize / 0x64;
  scrContext->m_variableListChildSizeWarn = 70 * m_variableListChildSize / 0x64;
}

/*
==============
ScriptContext_MemoryAllocate
==============
*/
void ScriptContext_MemoryAllocate(scrContext_t *scrContext)
{
  __int64 m_variableListParentSize; 
  __int64 m_variableListChildSize; 
  Scr_DebugThreadTimes *v4; 
  unsigned __int64 v5; 
  scrDebugFunctionInfo *v6; 
  unsigned __int64 m_scrDebugFunctionBufferSize; 

  m_variableListParentSize = scrContext->m_variableListParentSize;
  m_variableListChildSize = scrContext->m_variableListChildSize;
  scrContext->m_varGlob.objectVariableValue = (ObjectVariableValue *)ScriptContext_AllocAlign(scrContext, 12 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varGlob.objectVariableChildren = (ObjectVariableChildren *)ScriptContext_AllocAlign(scrContext, 8 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varGlob.childVariableBucket = (unsigned int *)ScriptContext_AllocAlign(scrContext, 0x40000ui64, 0x40ui64);
  scrContext->m_varGlob.childVariableValue = (ChildVariableValue *)ScriptContext_AllocAlign(scrContext, 32i64 * (unsigned int)m_variableListChildSize, 0x40ui64);
  scrContext->m_varPub.saveIdMap = (unsigned int *)ScriptContext_AllocAlign(scrContext, 4 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varPub.saveIdMapRev = (unsigned int *)ScriptContext_AllocAlign(scrContext, 4 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varDebugPub.objectVarUsage = (ScriptCodePos *)ScriptContext_AllocAlign(scrContext, 8 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varDebugPub.childVarUsage = (ScriptCodePos *)ScriptContext_AllocAlign(scrContext, 8 * m_variableListChildSize, 0x40ui64);
  scrContext->m_varDebugPub.extRefCount = (unsigned __int16 *)ScriptContext_AllocAlign(scrContext, 2 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varDebugPub.refCount = (unsigned __int16 *)ScriptContext_AllocAlign(scrContext, 2 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varDebugPub.objectLeakCount = (int *)ScriptContext_AllocAlign(scrContext, 4 * m_variableListParentSize, 0x40ui64);
  scrContext->m_varDebugPub.childLeakCount = (int *)ScriptContext_AllocAlign(scrContext, 4i64 * (unsigned int)m_variableListChildSize, 0x40ui64);
  scrContext->m_debuggerGlob.m_debugCallStack = (unsigned int *)ScriptContext_AllocAlign(scrContext, 4 * m_variableListParentSize, 0x40ui64);
  scrContext->m_debuggerGlob.m_debugCallStackEntry = (DebugCallStackEntry *)ScriptContext_AllocAlign(scrContext, 4 * m_variableListParentSize, 0x40ui64);
  scrContext->m_debuggerGlob.m_debugCallStackEntry2 = (DebugCallStackEntry2 *)ScriptContext_AllocAlign(scrContext, 4 * m_variableListParentSize, 0x40ui64);
  v4 = (Scr_DebugThreadTimes *)ScriptContext_AllocAlign(scrContext, 8 * m_variableListParentSize, 0x40ui64);
  v5 = 32i64 * scrContext->m_scrDebugFunctionCount;
  scrContext->m_debuggerGlob.m_debugThreadTimes = v4;
  v6 = (scrDebugFunctionInfo *)ScriptContext_AllocAlign(scrContext, v5, 0x40ui64);
  m_scrDebugFunctionBufferSize = scrContext->m_scrDebugFunctionBufferSize;
  scrContext->m_parserPub.functionList = v6;
  scrContext->m_parserPub.functionBuffer = (char *)ScriptContext_AllocAlign(scrContext, m_scrDebugFunctionBufferSize, 0x40ui64);
  scrContext->m_profileScript.threadId = (bitarray<128> *)ScriptContext_AllocAlign(scrContext, 16 * m_variableListParentSize, 0x40ui64);
  Scr_InitVariables(scrContext);
}

/*
==============
ScriptContext_MemoryClear
==============
*/
void ScriptContext_MemoryClear(scrContext_t *scrContext)
{
  HunkUser *m_hunkUser; 

  m_hunkUser = scrContext->m_hunkUser;
  if ( m_hunkUser )
    Mem_HunkUser_Reset(m_hunkUser);
}

/*
==============
ScriptContext_MemoryFree
==============
*/
void ScriptContext_MemoryFree(scrContext_t *scrContext)
{
  HunkUser *m_hunkUser; 

  if ( scrContext->m_hunkUser )
  {
    Scr_Shutdown(scrContext);
    m_hunkUser = scrContext->m_hunkUser;
    scrContext->m_varGlob.objectVariableValue = NULL;
    scrContext->m_varGlob.objectVariableChildren = NULL;
    scrContext->m_varGlob.childVariableBucket = NULL;
    scrContext->m_varGlob.childVariableValue = NULL;
    scrContext->m_varPub.saveIdMap = NULL;
    scrContext->m_varPub.saveIdMapRev = NULL;
    scrContext->m_varDebugPub.objectVarUsage = NULL;
    scrContext->m_varDebugPub.childVarUsage = NULL;
    scrContext->m_varDebugPub.extRefCount = NULL;
    scrContext->m_varDebugPub.refCount = NULL;
    scrContext->m_varDebugPub.objectLeakCount = NULL;
    scrContext->m_varDebugPub.childLeakCount = NULL;
    scrContext->m_debuggerGlob.m_debugCallStack = NULL;
    scrContext->m_debuggerGlob.m_debugCallStackEntry = NULL;
    scrContext->m_debuggerGlob.m_debugCallStackEntry2 = NULL;
    scrContext->m_debuggerGlob.m_debugThreadTimes = NULL;
    scrContext->m_parserPub.functionList = NULL;
    scrContext->m_parserPub.functionBuffer = NULL;
    scrContext->m_profileScript.threadId = NULL;
    Mem_HunkUser_Destroy(m_hunkUser);
    scrContext->m_hunkUser = NULL;
  }
}

/*
==============
ScriptContext_MemoryInit
==============
*/
void ScriptContext_MemoryInit(scrContext_t *scrContext, const char *gameType, const unsigned int maxClientCount)
{
  __int64 m_variableListParentSize; 
  __int64 m_variableListChildSize; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 

  ScriptContext_LoadMemoryValues(scrContext, gameType, maxClientCount);
  m_variableListParentSize = scrContext->m_variableListParentSize;
  m_variableListChildSize = scrContext->m_variableListChildSize;
  v6 = (8 * m_variableListParentSize + 63) & 0xFFFFFFFFFFFFFFC0ui64;
  v7 = (4 * m_variableListParentSize + 63) & 0xFFFFFFFFFFFFFFC0ui64;
  v8 = v6 + ((12 * m_variableListParentSize + 63) & 0xFFFFFFFFFFFFFFC0ui64) + ((32 * m_variableListChildSize + 63) & 0xFFFFFFFFFFFFFFC0ui64);
  v9 = v8 + 2 * v7 + 0x40000;
  Com_Printf(24, "ScriptContext_GetMemoryReserveSize: Ship: %u\n", (unsigned int)(v8 + 2 * v7 + 0x40000));
  v10 = 2 * m_variableListParentSize + 63;
  v11 = (16 * m_variableListParentSize + 63) & 0xFFFFFFFFFFFFFFC0ui64;
  v12 = ((scrContext->m_scrDebugFunctionBufferSize + 63i64) & 0xFFFFFFFFFFFFFFC0ui64) + ((32i64 * scrContext->m_scrDebugFunctionCount + 63) & 0xFFFFFFFFFFFFFFC0ui64) + ((8 * m_variableListChildSize + 63) & 0xFFFFFFFFFFFFFFC0ui64) + 2 * (v6 + (v10 & 0xFFFFFFFFFFFFFFC0ui64) + 2 * v7) + ((4 * m_variableListChildSize + 63) & 0xFFFFFFFFFFFFFFC0ui64) + v9;
  Com_Printf(24, "ScriptContext_GetMemoryReserveSize: Dev : %u\n", (unsigned int)(v12 + v11 + 0x2000));
  scrContext->m_hunkUser = Mem_HunkUser_Create(v12 + v11 + 0x2000, "scrContext.m_hunkUser", TRACK_SCRIPT, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
}

/*
==============
ScriptContext_ParseInt
==============
*/
void ScriptContext_ParseInt(const scrContext_t *scrContext, const bdJSONDeserializer *parseObj, const bdJSONDeserializer *minObj, const char *key, const char *coreMode, const char *gameType, unsigned int *outValue)
{
  const char *v10; 
  unsigned int *v11; 
  const char *v12; 
  unsigned int v13; 
  unsigned int value; 

  if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 489, ASSERT_TYPE_ASSERT, "( key )", (const char *)&queryFormat, "key") )
    __debugbreak();
  if ( !minObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 490, ASSERT_TYPE_ASSERT, "( minObj )", (const char *)&queryFormat, "minObj") )
    __debugbreak();
  if ( !parseObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 491, ASSERT_TYPE_ASSERT, "( parseObj )", (const char *)&queryFormat, "parseObj") )
    __debugbreak();
  v10 = coreMode;
  if ( !coreMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 492, ASSERT_TYPE_ASSERT, "( coreMode )", (const char *)&queryFormat, "coreMode") )
    __debugbreak();
  v11 = outValue;
  if ( !outValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 493, ASSERT_TYPE_ASSERT, "( outValue )", (const char *)&queryFormat, "outValue") )
    __debugbreak();
  *v11 = 0;
  value = 0;
  if ( !bdJSONDeserializer::getUInt32((bdJSONDeserializer *)minObj, key, &value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 499, ASSERT_TYPE_ASSERT, "( (minObj->getUInt32( key, minimum )) )", "ScriptContext_ParseInt: minimum key %s not found for coreMode %s\n", key, v10) )
    __debugbreak();
  if ( !bdJSONDeserializer::getUInt32((bdJSONDeserializer *)parseObj, key, v11) )
  {
    v12 = (char *)&queryFormat.fmt + 3;
    if ( gameType )
      v12 = gameType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 500, ASSERT_TYPE_ASSERT, "( (parseObj->getUInt32( key, *outValue )) )", "ScriptContext_ParseInt: key %s not found for gameMode %s and gametype %s\n", key, v10, v12) )
      __debugbreak();
  }
  v13 = value;
  if ( *v11 > value )
    v13 = *v11;
  *v11 = v13;
}

/*
==============
ScriptContext_ParseMemoryJson
==============
*/
void ScriptContext_ParseMemoryJson(scrContext_t *scrContext, const char *gameType, const unsigned int maxClientCount, const char *buffer)
{
  const char *v7; 
  const char *ActiveGameModeStr; 
  bdJSONDeserializer *p_parseObj; 
  unsigned int *p_m_variableListParentSize; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int *p_m_variableListChildSize; 
  unsigned int v16; 
  unsigned int v17; 
  char *gameTypea; 
  char *gameTypeb; 
  unsigned int *outValue; 
  unsigned int *outValuea; 
  bdJSONDeserializer minObj; 
  bdJSONDeserializer v23; 
  __int64 v24; 
  bdJSONDeserializer v25; 
  bdJSONDeserializer parseObj; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v28; 
  bdJSONDeserializer v29; 
  bool UInt32; 
  bool v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 

  v33 = maxClientCount;
  v24 = -2i64;
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 545, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 546, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", (const char *)&queryFormat, "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  bdJSONDeserializer::bdJSONDeserializer(&v28, buffer);
  bdJSONDeserializer::bdJSONDeserializer(&value);
  bdJSONDeserializer::bdJSONDeserializer(&v23);
  bdJSONDeserializer::bdJSONDeserializer(&parseObj);
  bdJSONDeserializer::bdJSONDeserializer(&v29);
  bdJSONDeserializer::bdJSONDeserializer(&v25);
  bdJSONDeserializer::bdJSONDeserializer(&minObj);
  v7 = "client";
  if ( scrContext->m_Instance == SCRIPTINSTANCE_SERVER )
    v7 = "server";
  ActiveGameModeStr = Com_GameMode_GetActiveGameModeStr();
  if ( !bdJSONDeserializer::getObject(&v28, v7, &value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 561, ASSERT_TYPE_ASSERT, "( (deserializer.getObject( instanceString, instanceObj )) )", "ScriptContext_ParseMemoryJson: instance key %s not found\n", v7) )
    __debugbreak();
  if ( !bdJSONDeserializer::getObject(&value, ActiveGameModeStr, &v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 562, ASSERT_TYPE_ASSERT, "( (instanceObj.getObject( coreModeString, coreModeObj )) )", "ScriptContext_ParseMemoryJson: core mode key %s not found under instance %s\n", ActiveGameModeStr, v7) )
    __debugbreak();
  if ( !gameType || (p_parseObj = &parseObj, !bdJSONDeserializer::getObject(&v23, gameType, &parseObj)) )
    p_parseObj = &v23;
  if ( !bdJSONDeserializer::getObject(&v28, "minimum", &v25) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 573, ASSERT_TYPE_ASSERT, "( (deserializer.getObject( MINIMUM_STRING, minimumObj )) )", "ScriptContext_ParseMemoryJson: key minimum not found\n") )
    __debugbreak();
  if ( !bdJSONDeserializer::getObject(&v25, ActiveGameModeStr, &minObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 574, ASSERT_TYPE_ASSERT, "( (minimumObj.getObject( coreModeString, minimumCoreObj )) )", "ScriptContext_ParseMemoryJson: core mode key %s not found under minimum\n", ActiveGameModeStr) )
    __debugbreak();
  p_m_variableListParentSize = &scrContext->m_variableListParentSize;
  ScriptContext_ParseInt(scrContext, p_parseObj, &minObj, "VARIABLELIST_PARENT_SIZE", ActiveGameModeStr, gameType, &scrContext->m_variableListParentSize);
  if ( scrContext->m_variableListParentSize >= 0x40000 )
  {
    LODWORD(outValue) = 0x40000;
    LODWORD(gameTypea) = scrContext->m_variableListParentSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 577, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_variableListParentSize ) < (unsigned)( ( 1 << 18 ) )", "scrContext.m_variableListParentSize doesn't index VARIABLELIST_PARENT_SIZE_MAX\n\t%i not in [0, %i)", gameTypea, outValue) )
      __debugbreak();
  }
  ScriptContext_ParseInt(scrContext, p_parseObj, &minObj, "VARIABLELIST_CHILD_SIZE", ActiveGameModeStr, gameType, &scrContext->m_variableListChildSize);
  if ( *p_m_variableListParentSize + scrContext->m_variableListChildSize == -1 )
  {
    LODWORD(outValuea) = -1;
    LODWORD(gameTypeb) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 580, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_variableListParentSize + scrContext.m_variableListChildSize ) < (unsigned)( ( ( (size_t)1 << ( sizeof( VariableID ) * 8 ) ) - 1 ) )", "scrContext.m_variableListParentSize + scrContext.m_variableListChildSize doesn't index VARIABLELIST_SIZE_MAX\n\t%i not in [0, %i)", gameTypeb, outValuea) )
      __debugbreak();
  }
  if ( scrContext == (scrContext_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 511, ASSERT_TYPE_ASSERT, "( outValue )", (const char *)&queryFormat, "outValue") )
    __debugbreak();
  v11 = 0;
  v34 = 0;
  v32 = 0;
  v12 = 0;
  UInt32 = bdJSONDeserializer::getUInt32(&minObj, "VARIABLELIST_PARENT_SIZE_PER_PLAYER", &v34);
  if ( bdJSONDeserializer::getUInt32(p_parseObj, "VARIABLELIST_PARENT_SIZE_PER_PLAYER", &v32) )
    v12 = v33 * v32;
  if ( UInt32 )
  {
    v13 = v34;
    if ( v12 > v34 )
      v13 = v12;
    v12 = v13;
  }
  v14 = v12 + *p_m_variableListParentSize;
  *p_m_variableListParentSize = v14;
  if ( v14 >= 0x40000 )
  {
    LODWORD(outValuea) = 0x40000;
    LODWORD(gameTypeb) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 583, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_variableListParentSize ) < (unsigned)( ( 1 << 18 ) )", "scrContext.m_variableListParentSize doesn't index VARIABLELIST_PARENT_SIZE_MAX\n\t%i not in [0, %i)", gameTypeb, outValuea) )
      __debugbreak();
  }
  p_m_variableListChildSize = &scrContext->m_variableListChildSize;
  if ( scrContext == (scrContext_t *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 511, ASSERT_TYPE_ASSERT, "( outValue )", (const char *)&queryFormat, "outValue") )
    __debugbreak();
  v34 = 0;
  v32 = 0;
  v31 = bdJSONDeserializer::getUInt32(&minObj, "VARIABLELIST_CHILD_SIZE_PER_PLAYER", &v34);
  if ( bdJSONDeserializer::getUInt32(p_parseObj, "VARIABLELIST_CHILD_SIZE_PER_PLAYER", &v32) )
    v11 = v33 * v32;
  if ( v31 )
  {
    v16 = v34;
    if ( v11 > v34 )
      v16 = v11;
    v11 = v16;
  }
  v17 = v11 + *p_m_variableListChildSize;
  *p_m_variableListChildSize = v17;
  if ( v17 + *p_m_variableListParentSize == -1 )
  {
    LODWORD(outValuea) = -1;
    LODWORD(gameTypeb) = *p_m_variableListParentSize + v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_context.cpp", 586, ASSERT_TYPE_ASSERT, "(unsigned)( scrContext.m_variableListParentSize + scrContext.m_variableListChildSize ) < (unsigned)( ( ( (size_t)1 << ( sizeof( VariableID ) * 8 ) ) - 1 ) )", "scrContext.m_variableListParentSize + scrContext.m_variableListChildSize doesn't index VARIABLELIST_SIZE_MAX\n\t%i not in [0, %i)", gameTypeb, outValuea) )
      __debugbreak();
  }
  ScriptContext_ParseInt(scrContext, p_parseObj, &minObj, "SCR_DEBUG_FUNCTION_COUNT", ActiveGameModeStr, gameType, &scrContext->m_scrDebugFunctionCount);
  ScriptContext_ParseInt(scrContext, p_parseObj, &minObj, "SCR_DEBUG_FUNCTION_BUFFER_SIZE", ActiveGameModeStr, gameType, &scrContext->m_scrDebugFunctionBufferSize);
  bdJSONDeserializer::~bdJSONDeserializer(&minObj);
  bdJSONDeserializer::~bdJSONDeserializer(&v25);
  bdJSONDeserializer::~bdJSONDeserializer(&v29);
  bdJSONDeserializer::~bdJSONDeserializer(&parseObj);
  bdJSONDeserializer::~bdJSONDeserializer(&v23);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
  bdJSONDeserializer::~bdJSONDeserializer(&v28);
}

/*
==============
ScriptContext_Server
==============
*/
scrContext_t *ScriptContext_Server()
{
  return &g_scrContext_Server;
}

/*
==============
ScriptContext_SetVarUsagePos
==============
*/
void ScriptContext_SetVarUsagePos(scrContext_t *scrContext, const char *varUsagePos)
{
  ScriptCodePos::SetVarUsagePos(&scrContext->m_varPub.varUsagePos, varUsagePos);
}

/*
==============
ScriptContext_SetVarUsageScriptCodePos
==============
*/
void ScriptContext_SetVarUsageScriptCodePos(scrContext_t *scrContext, const ScriptCodePos varUsageScriptPos)
{
  scrContext->m_varPub.varUsagePos = varUsageScriptPos;
}

