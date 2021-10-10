/*
==============
R_TG_InvalidateIfResolutionChanged
==============
*/

void __fastcall R_TG_InvalidateIfResolutionChanged(unsigned int newDisplayWidth, unsigned int newDisplayHeight, unsigned int newSceneWidth, unsigned int newSceneHeight)
{
  ?R_TG_InvalidateIfResolutionChanged@@YAXIIII@Z(newDisplayWidth, newDisplayHeight, newSceneWidth, newSceneHeight);
}

/*
==============
R_TG_Invalidate
==============
*/

void R_TG_Invalidate(void)
{
  ?R_TG_Invalidate@@YAXXZ();
}

/*
==============
R_TG_GetScriptOptions
==============
*/

R_TG_ScriptOptions *__fastcall R_TG_GetScriptOptions(R_TG_ScriptOptions *result)
{
  return ?R_TG_GetScriptOptions@@YA?AUR_TG_ScriptOptions@@XZ(result);
}

/*
==============
R_TG_GetEnabled
==============
*/

bool __fastcall R_TG_GetEnabled()
{
  return ?R_TG_GetEnabled@@YA_NXZ();
}

/*
==============
R_TG_Init
==============
*/

void R_TG_Init(void)
{
  ?R_TG_Init@@YAXXZ();
}

/*
==============
R_TG_SetViewCount
==============
*/

void __fastcall R_TG_SetViewCount(unsigned int viewCount)
{
  ?R_TG_SetViewCount@@YAXI@Z(viewCount);
}

/*
==============
R_TG_Shutdown
==============
*/

void R_TG_Shutdown(void)
{
  ?R_TG_Shutdown@@YAXXZ();
}

/*
==============
R_TG_InitClear
==============
*/

void R_TG_InitClear(void)
{
  ?R_TG_InitClear@@YAXXZ();
}

/*
==============
R_TG_SetScript
==============
*/

unsigned int __fastcall R_TG_SetScript(unsigned int scriptIndex, unsigned int sceneWidth, unsigned int sceneHeight, unsigned int displayWidth, unsigned int displayHeight, const GfxViewportFeatures *features, const R_TG_CompileOptions *options)
{
  return ?R_TG_SetScript@@YAIIIIIIAEBUGfxViewportFeatures@@AEBUR_TG_CompileOptions@@@Z(scriptIndex, sceneWidth, sceneHeight, displayWidth, displayHeight, features, options);
}

/*
==============
R_TG_ShutdownWorld
==============
*/

void R_TG_ShutdownWorld(void)
{
  ?R_TG_ShutdownWorld@@YAXXZ();
}

/*
==============
R_TG_GetMemoryUsage
==============
*/

unsigned __int64 __fastcall R_TG_GetMemoryUsage()
{
  return ?R_TG_GetMemoryUsage@@YA_KXZ();
}

/*
==============
R_TG_SetScript
==============
*/

bool __fastcall R_TG_SetScript(unsigned int sceneWidth, unsigned int sceneHeight, unsigned int displayWidth, unsigned int displayHeight, const GfxViewportFeatures *features, unsigned int *scriptIndex, unsigned int *permutationOverride)
{
  return ?R_TG_SetScript@@YA_NIIIIAEBUGfxViewportFeatures@@AEAI1@Z(sceneWidth, sceneHeight, displayWidth, displayHeight, features, scriptIndex, permutationOverride);
}

/*
==============
R_TG_SetScript
==============
*/
bool R_TG_SetScript(unsigned int sceneWidth, unsigned int sceneHeight, unsigned int displayWidth, unsigned int displayHeight, const GfxViewportFeatures *features, unsigned int *scriptIndex, unsigned int *permutationOverride)
{
  int v8; 
  int v12; 
  int v13; 
  int v14; 
  __int16 v15; 
  bool v16; 
  unsigned int v17; 
  int integer; 
  R_TG_CompileOptions options; 

  v8 = 0;
  if ( !r_tgCompileSplitBarriers->current.enabled || (v12 = 64, ((2 * (r_tgCompileAliasedAllocs->current.enabled | (unsigned __int8)(8 * (r_tgCompileMergedBarriers->current.enabled | (2 * r_tgCompileBatchCompute->current.enabled))))) & 0x10) != 0) )
    v12 = 0;
  v13 = (8 * (r_tgCompileExtendResourceLifetimes->current.enabled | (2 * (r_tgCompileAliasedAllocs->current.enabled | (8 * (r_tgCompileMergedBarriers->current.enabled | (2 * r_tgCompileBatchCompute->current.enabled))))))) | v12 | (32 * r_tgCompileTiledAllocs->current.enabled);
  if ( !r_tgCompileAsyncCompute->current.enabled || (v14 = 1024, !r_asyncCompute->current.enabled) )
    v14 = 0;
  v15 = 0;
  if ( !r_deviceDebug->current.enabled )
    v15 = 1024;
  options.0 = ($A935A4976E45DD8E81616BB314CED90C)((v13 | v14) & (*(_DWORD *)&v15 | 0xFFFFFBFF));
  v16 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
  if ( r_tgCompileDccRts->current.enabled && v16 )
    v8 = 2048;
  options.0 = ($A935A4976E45DD8E81616BB314CED90C)(v8 | options.raw & 0xFFFFF7FF);
  options.0 = ($A935A4976E45DD8E81616BB314CED90C)(options.raw ^ (*(_WORD *)&options.0 ^ (unsigned __int16)(r_tgCompileFastClearRts->current.color[0] << 12)) & 0x1000);
  options.0 = ($A935A4976E45DD8E81616BB314CED90C)(options.raw ^ (*(_WORD *)&options.0 ^ (unsigned __int16)(r_tgCompileLimitDecompressRts->current.color[0] << 13)) & 0x2000);
  options.0 = ($A935A4976E45DD8E81616BB314CED90C)(options.raw ^ (*(_WORD *)&options.0 ^ (unsigned __int16)((unsigned __int16)r_tgCompileDumpInfo->current.integer << 14)) & 0x4000);
  options.0 = ($A935A4976E45DD8E81616BB314CED90C)(options.raw ^ (options.raw ^ (r_tgCompileFastMemoryLimitSize->current.integer << 15)) & 0xF8000);
  v17 = R_TG_SetScript(r_tgScript->current.unsignedInt, sceneWidth, sceneHeight, displayWidth, displayHeight, features, &options);
  integer = -1;
  *scriptIndex = v17;
  if ( r_tgPermutationIndex->current.integer != -1 )
    integer = r_tgPermutationIndex->current.integer;
  *permutationOverride = integer;
  return R_TG_GetEnabled();
}

/*
==============
R_TG_GetEnabled
==============
*/
bool R_TG_GetEnabled()
{
  bool result; 

  if ( !g_R_TG_scriptIndex || !g_R_TG_valid )
    return g_R_TG_freeCountdown != 0;
  result = 1;
  if ( g_R_TG_freeCountdown )
    return 1;
  return result;
}

/*
==============
R_TG_GetMemoryUsage
==============
*/
unsigned __int64 R_TG_GetMemoryUsage()
{
  return g_R_TG_taskGraph.heapMemoryUsage;
}

/*
==============
R_TG_GetScriptOptions
==============
*/
R_TG_ScriptOptions *R_TG_GetScriptOptions(R_TG_ScriptOptions *result)
{
  *result = g_R_TG_scriptOptions;
  return result;
}

/*
==============
R_TG_Init
==============
*/
void R_TG_Init(void)
{
  R_TG_CompileInit();
  R_TG_VendorInit();
  memset_0(&g_R_TG_taskGraph, 0, sizeof(g_R_TG_taskGraph));
  g_R_TG_scriptIndex = 0;
  *(_QWORD *)g_R_TG_scriptOptions.dwords = 0i64;
  *(_QWORD *)&g_R_TG_scriptOptions.dwords[2] = 0i64;
  g_R_TG_compileSettings = 0;
}

/*
==============
R_TG_InitClear
==============
*/
void R_TG_InitClear(void)
{
  memset_0(&g_R_TG_taskGraph, 0, sizeof(g_R_TG_taskGraph));
  g_R_TG_scriptIndex = 0;
  *(_QWORD *)g_R_TG_scriptOptions.dwords = 0i64;
  *(_QWORD *)&g_R_TG_scriptOptions.dwords[2] = 0i64;
  g_R_TG_compileSettings = 0;
}

/*
==============
R_TG_Invalidate
==============
*/
void R_TG_Invalidate(void)
{
  R_TG_Destroy(&g_R_TG_taskGraph);
  memset_0(&g_R_TG_taskGraph, 0, sizeof(g_R_TG_taskGraph));
  g_R_TG_scriptIndex = 0;
  *(_QWORD *)g_R_TG_scriptOptions.dwords = 0i64;
  *(_QWORD *)&g_R_TG_scriptOptions.dwords[2] = 0i64;
  g_R_TG_compileSettings = 0;
}

/*
==============
R_TG_InvalidateIfResolutionChanged
==============
*/
void R_TG_InvalidateIfResolutionChanged(unsigned int newDisplayWidth, unsigned int newDisplayHeight, unsigned int newSceneWidth, unsigned int newSceneHeight)
{
  if ( g_R_TG_displayWidth != newDisplayWidth || g_R_TG_displayHeight != newDisplayHeight || g_R_TG_sceneWidth != newSceneWidth || g_R_TG_sceneHeight != newSceneHeight )
  {
    R_TG_Destroy(&g_R_TG_taskGraph);
    memset_0(&g_R_TG_taskGraph, 0, sizeof(g_R_TG_taskGraph));
    g_R_TG_scriptIndex = 0;
    *(_QWORD *)g_R_TG_scriptOptions.dwords = 0i64;
    *(_QWORD *)&g_R_TG_scriptOptions.dwords[2] = 0i64;
    g_R_TG_compileSettings = 0;
  }
}

/*
==============
R_TG_SetScript
==============
*/
__int64 R_TG_SetScript(unsigned int scriptIndex, unsigned int sceneWidth, unsigned int sceneHeight, unsigned int displayWidth, unsigned int displayHeight, const GfxViewportFeatures *features, const R_TG_CompileOptions *options)
{
  unsigned int v8; 
  __int64 v10; 
  unsigned int raw; 
  __int16 v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  void (__fastcall *pOptions)(const GfxViewportFeatures *, const R_TG_ScriptSystemOptions *, R_TG_ScriptOptions *); 
  unsigned int v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned __int64 v29; 
  unsigned int v30; 
  const char *v31; 
  unsigned int v33; 
  unsigned int _displayWidth; 
  unsigned __int64 prev; 
  R_TG_ScriptOptions v36; 
  R_TG_Script script; 

  v8 = g_R_TG_taskGraphViewCount;
  v10 = scriptIndex;
  raw = options->raw;
  v12 = options->raw;
  v13 = (options->raw >> 1) & 0x200;
  _displayWidth = displayWidth;
  v14 = v12 & 0x800 | v13;
  v15 = 0;
  v16 = v14 >> 8;
  if ( g_R_TG_taskGraphViewCount > 1 )
    v15 = 4;
  v17 = 0;
  v36 = (R_TG_ScriptOptions)0i64;
  v18 = 0;
  v33 = v15 | v16;
  v19 = 0;
  v20 = 0;
  if ( (unsigned int)v10 < 5 )
  {
    pOptions = g_R_TG_scriptFuncs[(unsigned int)v10].pOptions;
    if ( pOptions )
    {
      pOptions(features, (const R_TG_ScriptSystemOptions *)&v33, &v36);
      v19 = v36.dwords[1];
      v17 = v36.dwords[0];
      v8 = g_R_TG_taskGraphViewCount;
      raw = options->raw;
      v20 = v36.dwords[3];
      v18 = v36.dwords[2];
    }
  }
  v22 = g_R_TG_scriptIndex;
  v23 = g_R_TG_seenScript0 || (_DWORD)v10 == 0;
  g_R_TG_seenScript0 = v23;
  if ( (_DWORD)v10 && g_R_TG_scriptIndex )
  {
    v24 = v17 == g_R_TG_scriptOptions.dwords[0];
    v25 = 0;
    v26 = v24 && v19 == g_R_TG_scriptOptions.dwords[1];
    if ( v18 == g_R_TG_scriptOptions.dwords[2] )
      v25 = v26;
    if ( v20 != g_R_TG_scriptOptions.dwords[3] || !v25 || raw != g_R_TG_compileSettings )
    {
      v22 = 0;
      g_R_TG_scriptIndex = 0;
    }
  }
  if ( (_DWORD)v10 == v22 || (unsigned int)v10 >= 5 )
    return 0i64;
  v27 = g_R_TG_freeCountdown;
  if ( v23 || g_R_TG_taskGraph.taskCount )
  {
    if ( !g_R_TG_freeCountdown )
    {
      v28 = v8 * g_R_TG_freeFrameDelay;
      goto LABEL_23;
    }
  }
  else if ( !g_R_TG_freeCountdown )
  {
LABEL_24:
    R_RT_ResetCommitSizeMax();
    if ( (_DWORD)v10 )
    {
      if ( g_R_TG_taskGraph.resourceCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_setup.cpp", 282, ASSERT_TYPE_ASSERT, "(g_R_TG_taskGraph.resourceCount == 0)", (const char *)&queryFormat, "g_R_TG_taskGraph.resourceCount == 0") )
          __debugbreak();
      }
      v29 = R_TG_TimerStart();
      v30 = _displayWidth;
      v31 = g_R_TG_scriptNames[v10];
      prev = v29;
      R_TG_Script::Init(&script, v31, sceneWidth, sceneHeight, _displayWidth, displayHeight, g_R_TG_taskGraphViewCount);
      g_R_TG_compileSettings = raw;
      g_R_TG_displayWidth = v30;
      g_R_TG_displayHeight = displayHeight;
      g_R_TG_sceneWidth = sceneWidth;
      g_R_TG_scriptOptions = v36;
      g_R_TG_sceneHeight = sceneHeight;
      g_R_TG_scriptFuncs[v10].pScript(&script, &v36);
      memset_0(g_R_TG_taskGraphViewInfo, 0, sizeof(g_R_TG_taskGraphViewInfo));
      g_R_TG_taskGraphViewInfo[0].permutationMask = -1;
      g_R_TG_taskGraphViewInfo[1].permutationMask = -1;
      g_R_TG_valid = R_TG_Create(&script, options, &g_R_TG_taskGraph);
      g_R_TG_taskGraph.compileTimeMs = R_TG_TimerAdd("TaskGraph", &prev) / 0x3E8;
    }
    g_R_TG_scriptIndex = v10;
    return 0i64;
  }
  if ( g_R_TG_freeCountdown == v8 * g_R_TG_freeFrameDelay )
  {
    R_TG_Destroy(&g_R_TG_taskGraph);
    v27 = g_R_TG_freeCountdown;
  }
  v28 = v27 - 1;
LABEL_23:
  g_R_TG_freeCountdown = v28;
  if ( !v28 )
    goto LABEL_24;
  return 0xFFFFFFFFi64;
}

/*
==============
R_TG_SetViewCount
==============
*/
void R_TG_SetViewCount(unsigned int viewCount)
{
  g_R_TG_taskGraphViewCount = viewCount;
}

/*
==============
R_TG_Shutdown
==============
*/
void R_TG_Shutdown(void)
{
  R_TG_Destroy(&g_R_TG_taskGraph);
}

/*
==============
R_TG_ShutdownWorld
==============
*/
void R_TG_ShutdownWorld(void)
{
  R_TG_Destroy(&g_R_TG_taskGraph);
  memset_0(&g_R_TG_taskGraph, 0, sizeof(g_R_TG_taskGraph));
  g_R_TG_scriptIndex = 0;
  *(_QWORD *)g_R_TG_scriptOptions.dwords = 0i64;
  *(_QWORD *)&g_R_TG_scriptOptions.dwords[2] = 0i64;
  g_R_TG_compileSettings = 0;
}

