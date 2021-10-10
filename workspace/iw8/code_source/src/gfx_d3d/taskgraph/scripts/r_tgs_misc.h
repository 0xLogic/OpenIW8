/*
==============
R_TGS_Blur
==============
*/

void __fastcall R_TGS_Blur(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle *color, bool useDisplaySize)
{
  ?R_TGS_Blur@@YAXPEAUR_TG_Script@@AEBUR_TG_ViewOptions@@AEAUR_TG_Handle@@_N@Z(pScript, options, color, useDisplaySize);
}

/*
==============
R_TGS_SunShadows
==============
*/

void __fastcall R_TGS_SunShadows(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle sceneIndices, R_TG_Handle sceneIndirectArgs, R_TG_Handle scenePerSurfData, R_TG_Handle nullDepthTarget, R_TG_Handle nullTexture, R_TG_Handle nullBuffer, R_TG_Handle beginFrameToken, R_TG_Handle shadowIndicesToken, R_TG_Handle *shadowAsyncToken, R_TG_Handle *shadowDrawToken, R_TG_Handle *sunshadowCascades, R_TG_Handle *sunshadowCascade0ForViewmodel, R_TG_Handle *sunshadowMins, R_TG_Handle *sunshadowMin0ForViewmodel, R_TG_Handle *sunshadowCache, R_TG_Handle *sunshadowCacheBackface, R_TG_Handle *sunshadowTranslucentExtinction, R_TG_Handle *compressedCascades, R_TG_Handle *sunshadowTranslucentExtinctionMask)
{
  ?R_TGS_SunShadows@@YAXPEAUR_TG_Script@@AEBUR_TG_ViewOptions@@UR_TG_Handle@@2222222AEAU3@3QEAU3@34333343@Z(pScript, options, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, nullTexture, nullBuffer, beginFrameToken, shadowIndicesToken, shadowAsyncToken, shadowDrawToken, sunshadowCascades, sunshadowCascade0ForViewmodel, sunshadowMins, sunshadowMin0ForViewmodel, sunshadowCache, sunshadowCacheBackface, sunshadowTranslucentExtinction, compressedCascades, sunshadowTranslucentExtinctionMask);
}

/*
==============
R_TG_GetScriptViewFeatures
==============
*/

void __fastcall R_TG_GetScriptViewFeatures(const GfxViewportFeatures *features, const R_TG_ScriptSystemOptions *systemOptions, R_TG_ScriptOptions *outScriptOptions)
{
  ?R_TG_GetScriptViewFeatures@@YAXAEBUGfxViewportFeatures@@AEBUR_TG_ScriptSystemOptions@@AEAUR_TG_ScriptOptions@@@Z(features, systemOptions, outScriptOptions);
}

/*
==============
R_TGS_SunShadows_Downsample
==============
*/

void __fastcall R_TGS_SunShadows_Downsample(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle token, R_TG_Handle *sunshadowCascades, R_TG_Handle sunshadowCascade0ForViewmodel, R_TG_Handle *sunshadowMins, R_TG_Handle *sunshadowMin0ForViewmodel, R_TG_Handle nullTexture)
{
  ?R_TGS_SunShadows_Downsample@@YAXPEAUR_TG_Script@@AEBUR_TG_ViewOptions@@UR_TG_Handle@@QEAU3@23AEAU3@2@Z(pScript, options, token, sunshadowCascades, sunshadowCascade0ForViewmodel, sunshadowMins, sunshadowMin0ForViewmodel, nullTexture);
}

/*
==============
R_TGS_SpotShadows
==============
*/

void __fastcall R_TGS_SpotShadows(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle sceneIndices, R_TG_Handle sceneIndirectArgs, R_TG_Handle scenePerSurfData, R_TG_Handle nullDepthTarget, R_TG_Handle nullTexture, R_TG_Handle beginFrameToken, R_TG_Handle *staleCache)
{
  ?R_TGS_SpotShadows@@YAXPEAUR_TG_Script@@AEBUR_TG_ViewOptions@@UR_TG_Handle@@22222AEAU3@@Z(pScript, options, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, nullTexture, beginFrameToken, staleCache);
}

/*
==============
R_TG_ResolveOptionsDependencies
==============
*/

void __fastcall R_TG_ResolveOptionsDependencies(R_TG_ViewOptions *options)
{
  ?R_TG_ResolveOptionsDependencies@@YAXAEAUR_TG_ViewOptions@@@Z(options);
}

/*
==============
R_TG_RunScriptOffscreenTarget
==============
*/

void __fastcall R_TG_RunScriptOffscreenTarget(R_TG_Script *pScript, const R_TG_ScriptOptions *__formal)
{
  ?R_TG_RunScriptOffscreenTarget@@YAXPEAUR_TG_Script@@AEBUR_TG_ScriptOptions@@@Z(pScript, __formal);
}

/*
==============
R_TGS_DrawPrepass
==============
*/

unsigned int __fastcall R_TGS_DrawPrepass(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle sceneIndices, R_TG_Handle sceneWorkgroupArgs, R_TG_Handle sceneIndirectArgs, R_TG_Handle scenePerSurfData, R_TG_Handle vrsHWMask, R_TG_Handle beginFrameToken, R_TG_Handle *sceneVisBuffer, R_TG_Handle *sceneEntityIDVelocity, R_TG_Handle *sceneDepth, R_TG_Handle *ssrMask, R_TG_Handle *prepassViewModelToken, R_TG_Handle *prepassWorldToken)
{
  return ?R_TGS_DrawPrepass@@YAIPEAUR_TG_Script@@AEBUR_TG_ViewOptions@@UR_TG_Handle@@22222AEAU3@33333@Z(pScript, options, sceneIndices, sceneWorkgroupArgs, sceneIndirectArgs, scenePerSurfData, vrsHWMask, beginFrameToken, sceneVisBuffer, sceneEntityIDVelocity, sceneDepth, ssrMask, prepassViewModelToken, prepassWorldToken);
}

/*
==============
R_TG_RunScriptHudOnly
==============
*/

void __fastcall R_TG_RunScriptHudOnly(R_TG_Script *pScript, const R_TG_ScriptOptions *__formal)
{
  ?R_TG_RunScriptHudOnly@@YAXPEAUR_TG_Script@@AEBUR_TG_ScriptOptions@@@Z(pScript, __formal);
}

/*
==============
R_TG_RunScriptViewMinimal
==============
*/

void __fastcall R_TG_RunScriptViewMinimal(R_TG_Script *pScript, const R_TG_ScriptOptions *scriptOptions)
{
  ?R_TG_RunScriptViewMinimal@@YAXPEAUR_TG_Script@@AEBUR_TG_ScriptOptions@@@Z(pScript, scriptOptions);
}

/*
==============
R_TG_RunScriptView
==============
*/

void __fastcall R_TG_RunScriptView(R_TG_Script *pScript, const R_TG_ScriptOptions *scriptOptions)
{
  ?R_TG_RunScriptView@@YAXPEAUR_TG_Script@@AEBUR_TG_ScriptOptions@@@Z(pScript, scriptOptions);
}

/*
==============
R_TGS_GetScaledSceneSize
==============
*/

void __fastcall R_TGS_GetScaledSceneSize(R_TG_Script *pScript, const R_TG_ViewOptions *options, unsigned int *scaledSceneWidth, unsigned int *scaledSceneHeight)
{
  ?R_TGS_GetScaledSceneSize@@YAXPEAUR_TG_Script@@AEBUR_TG_ViewOptions@@AEAI2@Z(pScript, options, scaledSceneWidth, scaledSceneHeight);
}

/*
==============
R_TGS_Blur
==============
*/
void R_TGS_Blur(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle *color, bool useDisplaySize)
{
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int m_index; 
  unsigned int v13; 
  R_TG_AddTaskStack stack; 

  if ( useDisplaySize )
  {
    v6 = pScript->displaySize.v[0];
    v7 = pScript->displaySize.v[1];
  }
  else
  {
    v6 = pScript->sceneFullSize.v[0];
    v7 = pScript->sceneFullSize.v[1];
  }
  v8 = (v7 + 1) >> 1;
  v9 = (v7 + 3) >> 2;
  v10 = (v6 + 1) >> 1;
  v11 = (v6 + 3) >> 2;
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  m_index = g_R_TG_Def_RBT_Blur_Mip1_Apply.m_index;
  stack.paramArgs[0] = v10;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit", *(_QWORD *)stack.paramArgs) )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v8;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount++] = &color->index;
  R_TG_AddTask(pScript, m_index, &stack);
  memset_0(&stack, 0, sizeof(stack));
  ++stack.paramArgCount;
  v13 = g_R_TG_Def_RBT_Blur_Mip2_Apply.m_index;
  stack.paramArgs[0] = v10;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit", *(_QWORD *)stack.paramArgs) )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v8;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v11;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.paramArgs[stack.paramArgCount++] = v9;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount++] = &color->index;
  R_TG_AddTask(pScript, v13, &stack);
}

/*
==============
R_TGS_DrawPrepass
==============
*/
unsigned int R_TGS_DrawPrepass(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle sceneIndices, R_TG_Handle sceneWorkgroupArgs, R_TG_Handle sceneIndirectArgs, R_TG_Handle scenePerSurfData, R_TG_Handle vrsHWMask, R_TG_Handle beginFrameToken, R_TG_Handle *sceneVisBuffer, R_TG_Handle *sceneEntityIDVelocity, R_TG_Handle *sceneDepth, R_TG_Handle *ssrMask, R_TG_Handle *prepassViewModelToken, R_TG_Handle *prepassWorldToken)
{
  unsigned int v14; 
  R_TG_Handle *v15; 
  unsigned int m_index; 
  R_TG_Handle *v18; 
  __int64 handleArgCount; 
  __int64 v20; 
  R_TG_Handle *v21; 
  __int64 v22; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  unsigned int v35; 
  __int64 v36; 
  R_TG_Script *v37; 
  unsigned int v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  unsigned int v48; 
  R_TG_AddTaskStack stack; 
  unsigned int v52; 
  unsigned int index; 

  index = sceneWorkgroupArgs.index;
  v52 = sceneIndices.index;
  v14 = 56;
  v15 = sceneEntityIDVelocity;
  if ( (*((_BYTE *)options + 7) & 1) != 0 )
    v14 = 66;
  if ( (*((_BYTE *)options + 8) & 1) != 0 )
  {
    memset_0(&stack, 0, sizeof(stack));
    ++stack.paramArgCount;
    m_index = g_R_TG_Def_Util_CreateSceneDepthPrepassVRS.m_index;
    stack.paramArgs[0] = v14;
    if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v18 = sceneVisBuffer;
    stack.handleArgs[stack.handleArgCount] = &sceneVisBuffer->index;
    handleArgCount = stack.handleArgCount + 1;
    stack.handleArgCount = handleArgCount;
    if ( (unsigned int)handleArgCount >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      handleArgCount = stack.handleArgCount;
    }
    stack.handleArgs[handleArgCount] = &v15->index;
    v20 = stack.handleArgCount + 1;
    stack.handleArgCount = v20;
    if ( (unsigned int)v20 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v20 = stack.handleArgCount;
    }
    v21 = sceneDepth;
    stack.handleArgs[v20] = &sceneDepth->index;
  }
  else
  {
    memset_0(&stack, 0, sizeof(stack));
    ++stack.paramArgCount;
    m_index = g_R_TG_Def_Util_CreateSceneDepthPrepass.m_index;
    stack.paramArgs[0] = v14;
    if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v18 = sceneVisBuffer;
    stack.handleArgs[stack.handleArgCount] = &sceneVisBuffer->index;
    v22 = stack.handleArgCount + 1;
    stack.handleArgCount = v22;
    if ( (unsigned int)v22 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v22 = stack.handleArgCount;
    }
    stack.handleArgs[v22] = &v15->index;
    v23 = stack.handleArgCount + 1;
    stack.handleArgCount = v23;
    if ( (unsigned int)v23 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v23 = stack.handleArgCount;
    }
    v21 = sceneDepth;
    stack.handleArgs[v23] = &sceneDepth->index;
  }
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, m_index, &stack);
  if ( ((unsigned __int8)(*(_QWORD *)options >> 44) & 3u) >= 2 )
  {
    memset_0(&stack, 0, sizeof(stack));
    ++stack.handleArgCount;
    stack.handleArgs[0] = &ssrMask->index;
    R_TG_AddTask(pScript, g_R_TG_Def_Util_CreateSceneSSRMask.m_index, &stack);
  }
  memset_0(&stack, 0, sizeof(stack));
  v24 = g_R_TG_Def_RBT_DrawPrepass.m_index;
  stack.paramArgs[stack.paramArgCount++] = 0;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = &v18->index;
  v25 = stack.handleArgCount + 1;
  stack.handleArgCount = v25;
  if ( (unsigned int)v25 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v25 = stack.handleArgCount;
  }
  stack.handleArgs[v25] = &v15->index;
  v26 = stack.handleArgCount + 1;
  stack.handleArgCount = v26;
  if ( (unsigned int)v26 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v26 = stack.handleArgCount;
  }
  stack.handleArgs[v26] = &v21->index;
  v27 = stack.handleArgCount + 1;
  stack.handleArgCount = v27;
  if ( (unsigned int)v27 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v27 = stack.handleArgCount;
  }
  stack.handleArgs[v27] = &v52;
  v28 = stack.handleArgCount + 1;
  stack.handleArgCount = v28;
  if ( (unsigned int)v28 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v28 = stack.handleArgCount;
  }
  stack.handleArgs[v28] = &index;
  v29 = stack.handleArgCount + 1;
  stack.handleArgCount = v29;
  if ( (unsigned int)v29 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v29 = stack.handleArgCount;
  }
  stack.handleArgs[v29] = (unsigned int *)&sceneIndirectArgs;
  v30 = stack.handleArgCount + 1;
  stack.handleArgCount = v30;
  if ( (unsigned int)v30 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v30 = stack.handleArgCount;
  }
  stack.handleArgs[v30] = (unsigned int *)&scenePerSurfData;
  v31 = stack.handleArgCount + 1;
  stack.handleArgCount = v31;
  if ( (unsigned int)v31 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v31 = stack.handleArgCount;
  }
  stack.handleArgs[v31] = &ssrMask->index;
  v32 = stack.handleArgCount + 1;
  stack.handleArgCount = v32;
  if ( (unsigned int)v32 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v32 = stack.handleArgCount;
  }
  stack.handleArgs[v32] = (unsigned int *)&vrsHWMask;
  v33 = stack.handleArgCount + 1;
  stack.handleArgCount = v33;
  if ( (unsigned int)v33 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v33 = stack.handleArgCount;
  }
  stack.handleArgs[v33] = (unsigned int *)&beginFrameToken;
  v34 = stack.handleArgCount + 1;
  stack.handleArgCount = v34;
  if ( v34 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v34 = stack.handleArgCount;
  }
  stack.handleArgs[v34] = &prepassViewModelToken->index;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, v24, &stack);
  if ( (*(_QWORD *)options & 0x2000000000000i64) != 0 )
  {
    memset_0(&stack, 0, sizeof(stack));
    v35 = g_R_TG_Def_RBT_Lens_ScopeClear.m_index;
    v36 = stack.handleArgCount + 1;
    stack.handleArgs[0] = &v15->index;
    stack.handleArgCount = v36;
    if ( (unsigned int)v36 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v36 = stack.handleArgCount;
    }
    v37 = pScript;
    stack.handleArgs[v36] = &v21->index;
    ++stack.handleArgCount;
    R_TG_AddTask(pScript, v35, &stack);
  }
  else
  {
    v37 = pScript;
  }
  memset_0(&stack, 0, sizeof(stack));
  v38 = g_R_TG_Def_RBT_DrawPrepass.m_index;
  stack.paramArgs[stack.paramArgCount++] = 1;
  if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  stack.handleArgs[stack.handleArgCount] = &v18->index;
  v39 = stack.handleArgCount + 1;
  stack.handleArgCount = v39;
  if ( (unsigned int)v39 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v39 = stack.handleArgCount;
  }
  stack.handleArgs[v39] = &v15->index;
  v40 = stack.handleArgCount + 1;
  stack.handleArgCount = v40;
  if ( (unsigned int)v40 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v40 = stack.handleArgCount;
  }
  stack.handleArgs[v40] = &v21->index;
  v41 = stack.handleArgCount + 1;
  stack.handleArgCount = v41;
  if ( (unsigned int)v41 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v41 = stack.handleArgCount;
  }
  stack.handleArgs[v41] = &v52;
  v42 = stack.handleArgCount + 1;
  stack.handleArgCount = v42;
  if ( (unsigned int)v42 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v42 = stack.handleArgCount;
  }
  stack.handleArgs[v42] = &index;
  v43 = stack.handleArgCount + 1;
  stack.handleArgCount = v43;
  if ( (unsigned int)v43 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v43 = stack.handleArgCount;
  }
  stack.handleArgs[v43] = (unsigned int *)&sceneIndirectArgs;
  v44 = stack.handleArgCount + 1;
  stack.handleArgCount = v44;
  if ( (unsigned int)v44 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v44 = stack.handleArgCount;
  }
  stack.handleArgs[v44] = (unsigned int *)&scenePerSurfData;
  v45 = stack.handleArgCount + 1;
  stack.handleArgCount = v45;
  if ( (unsigned int)v45 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v45 = stack.handleArgCount;
  }
  stack.handleArgs[v45] = &ssrMask->index;
  v46 = stack.handleArgCount + 1;
  stack.handleArgCount = v46;
  if ( (unsigned int)v46 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v46 = stack.handleArgCount;
  }
  stack.handleArgs[v46] = (unsigned int *)&vrsHWMask;
  v47 = stack.handleArgCount + 1;
  stack.handleArgCount = v47;
  if ( (unsigned int)v47 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v47 = stack.handleArgCount;
  }
  stack.handleArgs[v47] = (unsigned int *)&beginFrameToken;
  v48 = stack.handleArgCount + 1;
  stack.handleArgCount = v48;
  if ( v48 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v48 = stack.handleArgCount;
  }
  stack.handleArgs[v48] = &prepassWorldToken->index;
  ++stack.handleArgCount;
  return R_TG_AddTask(v37, v38, &stack);
}

/*
==============
R_TGS_GetScaledSceneSize
==============
*/
void R_TGS_GetScaledSceneSize(R_TG_Script *pScript, const R_TG_ViewOptions *options, unsigned int *scaledSceneWidth, unsigned int *scaledSceneHeight)
{
  *scaledSceneWidth = pScript->sceneFullSize.v[0];
  *scaledSceneHeight = pScript->sceneFullSize.v[1];
}

/*
==============
R_TGS_SpotShadows
==============
*/
void R_TGS_SpotShadows(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle sceneIndices, R_TG_Handle sceneIndirectArgs, R_TG_Handle scenePerSurfData, R_TG_Handle nullDepthTarget, R_TG_Handle nullTexture, R_TG_Handle beginFrameToken, R_TG_Handle *staleCache)
{
  R_TG_Handle *v10; 
  unsigned int v12; 
  unsigned int m_index; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 handleArgCount; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int HTileCacheSliceSize; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 v32; 
  unsigned int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned int v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  R_TG_AddTaskStack *p_stack; 
  unsigned int v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  R_TG_AddTaskStack stack; 
  R_TG_AddTaskStack v60; 
  unsigned int v61; 
  unsigned int index; 

  index = sceneIndirectArgs.index;
  v61 = sceneIndices.index;
  v10 = staleCache;
  if ( (*(_DWORD *)options & 0x400000) != 0 )
  {
    v12 = 2 * R_SpotShadow_GetMapSize((GfxShadowMapTileResolution)((*((_DWORD *)options + 2) >> 12) & 3));
    memset_0(&stack, 0, sizeof(stack));
    m_index = g_R_TG_Def_Util_SpotShadow_CreateStaleCache.m_index;
    stack.handleArgs[0] = &v10->index;
    if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    stack.paramArgs[stack.paramArgCount++] = v12;
    if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    stack.paramArgs[stack.paramArgCount++] = 16;
    R_TG_AddTask(pScript, m_index, &stack);
    v14 = *(_DWORD *)options;
    LODWORD(v53) = -1;
    if ( (*(_QWORD *)&v14 & 0x800000i64) != 0 )
    {
      memset_0(&v60, 0, sizeof(v60));
      v15 = g_R_TG_Def_Util_SpotShadow_CreateActiveCache.m_index;
      v60.handleArgs[0] = (unsigned int *)&v53;
      if ( ++v60.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit", v53) )
        __debugbreak();
      v60.paramArgs[v60.paramArgCount++] = v12;
      if ( v60.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v60.paramArgs[v60.paramArgCount++] = 32;
      R_TG_AddTask(pScript, v15, &v60);
    }
    else
    {
      LODWORD(v53) = nullDepthTarget;
    }
    if ( (*(_DWORD *)options & 0x1000000) != 0 )
    {
      v54 = -1;
      memset_0(&stack, 0, sizeof(stack));
      v16 = g_R_TG_Def_RBT_SpotShadow_DrawStatics.m_index;
      stack.handleArgs[0] = (unsigned int *)&v54;
      if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = v12;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 8;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v53;
      handleArgCount = stack.handleArgCount + 1;
      stack.handleArgCount = handleArgCount;
      if ( (unsigned int)handleArgCount >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        handleArgCount = stack.handleArgCount;
      }
      stack.handleArgs[handleArgCount] = &v61;
      v18 = stack.handleArgCount + 1;
      stack.handleArgCount = v18;
      if ( (unsigned int)v18 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v18 = stack.handleArgCount;
      }
      stack.handleArgs[v18] = &index;
      v19 = stack.handleArgCount + 1;
      stack.handleArgCount = v19;
      if ( (unsigned int)v19 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v19 = stack.handleArgCount;
      }
      stack.handleArgs[v19] = (unsigned int *)&scenePerSurfData;
      v20 = stack.handleArgCount + 1;
      stack.handleArgCount = v20;
      if ( (unsigned int)v20 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v20 = stack.handleArgCount;
      }
      stack.handleArgs[v20] = (unsigned int *)&beginFrameToken;
      ++stack.handleArgCount;
      R_TG_AddTask(pScript, v16, &stack);
      memset_0(&v60, 0, sizeof(v60));
      v21 = g_R_TG_Def_RBT_SpotShadow_CopyHTile.m_index;
      v60.handleArgs[0] = (unsigned int *)&v54;
      v22 = v60.handleArgCount + 1;
      v60.handleArgCount = v22;
      if ( (unsigned int)v22 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v22 = v60.handleArgCount;
      }
      v60.handleArgs[v22] = (unsigned int *)&v53;
      ++v60.handleArgCount;
      R_TG_AddTask(pScript, v21, &v60);
      memset_0(&stack, 0, sizeof(stack));
      v23 = g_R_TG_Def_RBT_SpotShadow_DrawDynamics.m_index;
      stack.handleArgs[0] = (unsigned int *)&v54;
      v24 = stack.handleArgCount + 1;
      stack.handleArgCount = v24;
      if ( (unsigned int)v24 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v24 = stack.handleArgCount;
      }
      stack.handleArgs[v24] = &v61;
      v25 = stack.handleArgCount + 1;
      stack.handleArgCount = v25;
      if ( (unsigned int)v25 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v25 = stack.handleArgCount;
      }
      stack.handleArgs[v25] = &index;
      v26 = stack.handleArgCount + 1;
      stack.handleArgCount = v26;
      if ( (unsigned int)v26 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v26 = stack.handleArgCount;
      }
      stack.handleArgs[v26] = (unsigned int *)&scenePerSurfData;
      ++stack.handleArgCount;
      R_TG_AddTask(pScript, v23, &stack);
      cAsyncBegin(pScript);
      v55 = -1;
      memset_0(&v60, 0, sizeof(v60));
      ++v60.handleArgCount;
      v60.handleArgs[0] = (unsigned int *)&v55;
      R_TG_AddTask(pScript, g_R_TG_Def_RBT_SpotShadow_ClearHTileMaskCounters.m_index, &v60);
      v57 = -1;
      v58 = -1;
      HTileCacheSliceSize = R_SpotShadow_GetHTileCacheSliceSize(v12, v12);
      memset_0(&stack, 0, sizeof(stack));
      v28 = g_R_TG_Def_RBT_SpotShadow_GenerateHTileMaskTiles.m_index;
      v29 = stack.handleArgCount + 1;
      stack.handleArgs[0] = (unsigned int *)&v54;
      stack.handleArgCount = v29;
      if ( v29 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v29 = stack.handleArgCount;
      }
      stack.handleArgs[v29] = (unsigned int *)&v57;
      v30 = stack.handleArgCount + 1;
      stack.handleArgCount = v30;
      if ( (unsigned int)v30 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v30 = stack.handleArgCount;
      }
      stack.handleArgs[v30] = (unsigned int *)&v58;
      if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = HTileCacheSliceSize;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.handleArgs[stack.handleArgCount++] = (unsigned int *)&v55;
      R_TG_AddTask(pScript, v28, &stack);
      HIDWORD(v53) = -1;
      memset_0(&v60, 0, sizeof(v60));
      v31 = g_R_TG_Def_RBT_SpotShadow_GenerateHTileMaskIndirectArgs.m_index;
      v60.handleArgs[0] = (unsigned int *)&v53 + 1;
      v32 = v60.handleArgCount + 1;
      v60.handleArgCount = v32;
      if ( (unsigned int)v32 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v32 = v60.handleArgCount;
      }
      v60.handleArgs[v32] = (unsigned int *)&v55;
      ++v60.handleArgCount;
      R_TG_AddTask(pScript, v31, &v60);
      v56 = -1;
      memset_0(&stack, 0, sizeof(stack));
      v33 = g_R_TG_Def_RBT_SpotShadow_DownsampleMasked.m_index;
      stack.handleArgs[0] = (unsigned int *)&v56;
      v34 = stack.handleArgCount + 1;
      stack.handleArgCount = v34;
      if ( (unsigned int)v34 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v34 = stack.handleArgCount;
      }
      stack.handleArgs[v34] = (unsigned int *)&v54;
      v35 = stack.handleArgCount + 1;
      stack.handleArgCount = v35;
      if ( (unsigned int)v35 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v35 = stack.handleArgCount;
      }
      stack.handleArgs[v35] = (unsigned int *)&v53;
      v36 = stack.handleArgCount + 1;
      stack.handleArgCount = v36;
      if ( (unsigned int)v36 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v36 = stack.handleArgCount;
      }
      stack.handleArgs[v36] = (unsigned int *)&v57;
      v37 = stack.handleArgCount + 1;
      stack.handleArgCount = v37;
      if ( (unsigned int)v37 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v37 = stack.handleArgCount;
      }
      stack.handleArgs[v37] = (unsigned int *)&v55;
      v38 = stack.handleArgCount + 1;
      stack.handleArgCount = v38;
      if ( (unsigned int)v38 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v38 = stack.handleArgCount;
      }
      stack.handleArgs[v38] = (unsigned int *)&v53 + 1;
      ++stack.handleArgCount;
      R_TG_AddTask(pScript, v33, &stack);
      memset_0(&stack, 0, sizeof(stack));
      v39 = g_R_TG_Def_RBT_SpotShadow_BlurMasked.m_index;
      v40 = stack.handleArgCount + 1;
      stack.handleArgs[0] = &v10->index;
      stack.handleArgCount = v40;
      if ( (unsigned int)v40 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v40 = stack.handleArgCount;
      }
      stack.handleArgs[v40] = (unsigned int *)&v56;
      v41 = stack.handleArgCount + 1;
      stack.handleArgCount = v41;
      if ( (unsigned int)v41 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v41 = stack.handleArgCount;
      }
      stack.handleArgs[v41] = (unsigned int *)&v57;
      v42 = stack.handleArgCount + 1;
      stack.handleArgCount = v42;
      if ( (unsigned int)v42 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v42 = stack.handleArgCount;
      }
      stack.handleArgs[v42] = (unsigned int *)&v55;
      v43 = stack.handleArgCount + 1;
      stack.handleArgCount = v43;
      if ( (unsigned int)v43 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v43 = stack.handleArgCount;
      }
      stack.handleArgs[v43] = (unsigned int *)&v53 + 1;
      p_stack = &stack;
      ++stack.handleArgCount;
    }
    else
    {
      v56 = -1;
      memset_0(&stack, 0, sizeof(stack));
      v45 = g_R_TG_Def_RBT_SpotShadow_Draw.m_index;
      stack.handleArgs[0] = (unsigned int *)&v56;
      if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = v12;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 8;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.handleArgs[stack.handleArgCount] = (unsigned int *)&v53;
      v46 = stack.handleArgCount + 1;
      stack.handleArgCount = v46;
      if ( (unsigned int)v46 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v46 = stack.handleArgCount;
      }
      stack.handleArgs[v46] = &v61;
      v47 = stack.handleArgCount + 1;
      stack.handleArgCount = v47;
      if ( (unsigned int)v47 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v47 = stack.handleArgCount;
      }
      stack.handleArgs[v47] = &index;
      v48 = stack.handleArgCount + 1;
      stack.handleArgCount = v48;
      if ( (unsigned int)v48 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v48 = stack.handleArgCount;
      }
      stack.handleArgs[v48] = (unsigned int *)&scenePerSurfData;
      v49 = stack.handleArgCount + 1;
      stack.handleArgCount = v49;
      if ( (unsigned int)v49 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v49 = stack.handleArgCount;
      }
      stack.handleArgs[v49] = (unsigned int *)&beginFrameToken;
      ++stack.handleArgCount;
      R_TG_AddTask(pScript, v45, &stack);
      HIDWORD(v53) = -1;
      memset_0(&v60, 0, sizeof(v60));
      v50 = g_R_TG_Def_RBT_SpotShadow_Downsample.m_index;
      v60.handleArgs[0] = (unsigned int *)&v53 + 1;
      v51 = v60.handleArgCount + 1;
      v60.handleArgCount = v51;
      if ( (unsigned int)v51 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v51 = v60.handleArgCount;
      }
      v60.handleArgs[v51] = (unsigned int *)&v56;
      ++v60.handleArgCount;
      R_TG_AddTask(pScript, v50, &v60);
      cAsyncBegin(pScript);
      memset_0(&v60, 0, sizeof(v60));
      v39 = g_R_TG_Def_RBT_SpotShadow_Blur.m_index;
      v52 = v60.handleArgCount + 1;
      v60.handleArgs[0] = &v10->index;
      v60.handleArgCount = v52;
      if ( (unsigned int)v52 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v52 = v60.handleArgCount;
      }
      v60.handleArgs[v52] = (unsigned int *)&v53 + 1;
      p_stack = &v60;
      ++v60.handleArgCount;
    }
    R_TG_AddTask(pScript, v39, p_stack);
    cAsyncEnd(pScript);
  }
  else
  {
    staleCache->index = nullTexture.index;
  }
}

/*
==============
R_TGS_SunShadows
==============
*/
void R_TGS_SunShadows(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle sceneIndices, R_TG_Handle sceneIndirectArgs, R_TG_Handle scenePerSurfData, R_TG_Handle nullDepthTarget, R_TG_Handle nullTexture, R_TG_Handle nullBuffer, R_TG_Handle beginFrameToken, R_TG_Handle shadowIndicesToken, R_TG_Handle *shadowAsyncToken, R_TG_Handle *shadowDrawToken, R_TG_Handle *sunshadowCascades, R_TG_Handle *sunshadowCascade0ForViewmodel, R_TG_Handle *sunshadowMins, R_TG_Handle *sunshadowMin0ForViewmodel, R_TG_Handle *sunshadowCache, R_TG_Handle *sunshadowCacheBackface, R_TG_Handle *sunshadowTranslucentExtinction, R_TG_Handle *compressedCascades, R_TG_Handle *sunshadowTranslucentExtinctionMask)
{
  R_TG_Handle *v21; 
  R_TG_Handle *v23; 
  R_TG_Handle *v25; 
  R_TG_Handle *v26; 
  R_TG_Handle *v27; 
  R_TG_Handle *v28; 
  R_TG_Handle *v29; 
  R_TG_Handle *v30; 
  R_TG_Handle v31; 
  R_TG_Handle *v32; 
  unsigned int index; 
  __int64 v34; 
  R_TG_Handle *v35; 
  unsigned int ClipPlanesBufferSize; 
  unsigned int m_index; 
  int v38; 
  unsigned int MapSize; 
  int v40; 
  unsigned int v41; 
  unsigned int v42; 
  __int64 v43; 
  unsigned int v44; 
  __int64 handleArgCount; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  __int64 v53; 
  R_TG_Handle *v54; 
  unsigned int v55; 
  __int64 v56; 
  __int64 v57; 
  R_TG_Handle *v58; 
  __int64 v59; 
  const R_TG_ViewOptions *v60; 
  __int64 v61; 
  unsigned int v62; 
  const R_TG_Handle *v63; 
  R_TG_Handle *v64; 
  __int64 i; 
  R_TG_Handle *v66; 
  __int64 v67; 
  const R_TG_Handle *v68; 
  unsigned int v69; 
  __int64 v70; 
  __int64 v71; 
  unsigned int v72; 
  R_TG_Handle *v73; 
  unsigned int v74; 
  R_TG_Handle *v75; 
  unsigned int v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  unsigned int v80; 
  const R_TG_ViewOptions *v81; 
  R_TG_Handle *v82; 
  __int64 v83; 
  unsigned int v84; 
  __int64 v85; 
  R_TG_Handle *v86; 
  unsigned int v87; 
  unsigned int v88; 
  __int64 v89; 
  __int64 v90; 
  const R_TG_ViewOptions *v91; 
  R_TG_Handle *v92; 
  __int64 v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int *v96; 
  R_TG_Handle *v97; 
  unsigned int v98; 
  R_TG_Handle *v99; 
  R_TG_Handle *v100; 
  R_TG_Handle *v101; 
  R_TG_Handle *v102; 
  R_TG_Handle *v103; 
  signed __int64 v104; 
  signed __int64 v105; 
  R_TG_Handle *v106; 
  __int64 v107; 
  R_TG_Handle *v108; 
  unsigned int v109; 
  __int64 v110; 
  unsigned int v111; 
  R_TG_Handle *v112; 
  R_TG_Handle v113; 
  R_TG_Handle v114; 
  R_TG_Handle v115; 
  MaterialTechniqueType v116; 
  unsigned int v117; 
  unsigned int v118; 
  unsigned int v119; 
  unsigned int cascadesCount[2]; 
  R_TG_Handle *v121; 
  GfxDrawListType v122; 
  R_TG_Handle *value; 
  const R_TG_ViewOptions *v124; 
  R_TG_Handle *v125; 
  R_TG_Handle *v126; 
  R_TG_Handle *v127; 
  unsigned int *p_index; 
  R_TG_Handle *v129; 
  R_TG_Handle *v130; 
  R_TG_Handle *v131; 
  __int64 v132; 
  R_TG_Handle *v133; 
  R_TG_AddTaskStack v134; 
  R_TG_AddTaskStack stack; 
  R_TG_AddTaskStack v136; 
  R_TG_AddTaskStack arguments; 
  R_TG_Handle sunshadowCascadesBackface[4]; 
  R_TG_Handle v139; 
  R_TG_Handle v140; 

  v140.index = sceneIndirectArgs.index;
  v139.index = sceneIndices.index;
  v21 = shadowAsyncToken;
  v23 = shadowDrawToken;
  v25 = sunshadowCascade0ForViewmodel;
  v26 = sunshadowMins;
  v27 = sunshadowCache;
  v28 = sunshadowTranslucentExtinction;
  v29 = compressedCascades;
  v30 = sunshadowTranslucentExtinctionMask;
  v31.index = nullBuffer.index;
  v32 = sunshadowMin0ForViewmodel;
  v125 = sunshadowCacheBackface;
  index = shadowIndicesToken.index;
  shadowAsyncToken->index = shadowIndicesToken.index;
  v23->index = index;
  v130 = v21;
  v34 = *(_QWORD *)options;
  v124 = options;
  v35 = sunshadowCascades;
  v126 = v23;
  v121 = sunshadowCascades;
  value = v25;
  v133 = v26;
  p_index = &v27->index;
  v127 = v28;
  v131 = v29;
  v129 = v30;
  if ( (v34 & 0x2000) == 0 )
  {
    v111 = nullTexture.index;
    sunshadowCascades->index = nullTexture.index;
    v26->index = v111;
    v29->index = v31.index;
    v35[1].index = v111;
    v26[1].index = v111;
    v29[1].index = v31.index;
    v35[2].index = v111;
    v26[2].index = v111;
    v29[2].index = v31.index;
    v30->index = v111;
    v28->index = v111;
    v32->index = v111;
    v112 = v125;
    v25->index = v111;
    v112->index = v111;
    v27->index = v111;
    return;
  }
  if ( (v34 & 0x4000000) != 0 )
  {
    v115.index = -1;
    ClipPlanesBufferSize = R_CompressedSunShadow_GetClipPlanesBufferSize();
    memset_0(&stack, 0, sizeof(stack));
    m_index = g_R_TG_Def_RBT_SunShadow_ExtractCssClippingPlanes.m_index;
    stack.handleArgs[0] = (unsigned int *)&v115;
    if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    stack.paramArgs[stack.paramArgCount++] = ClipPlanesBufferSize;
    R_TG_AddTask(pScript, m_index, &stack);
    v34 = *(_QWORD *)options;
    v27 = (R_TG_Handle *)p_index;
  }
  if ( (v34 & 0xC000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\scripts\\r_tgs_misc.h", 199, ASSERT_TYPE_ASSERT, "(options.sunshadowsOpaqueCascadeLimit > 0)", (const char *)&queryFormat, "options.sunshadowsOpaqueCascadeLimit > 0") )
    __debugbreak();
  v38 = (*((_DWORD *)options + 2) >> 12) & 3;
  *(_QWORD *)cascadesCount = (unsigned __int8)HIBYTE(*(_WORD *)options) >> 6;
  MapSize = R_SunShadow_GetMapSize((GfxShadowMapTileResolution)v38);
  v40 = *(_DWORD *)options;
  v41 = MapSize;
  v42 = nullDepthTarget.index;
  v118 = MapSize;
  v132 = (*((_DWORD *)options + 2) >> 11) & 0x100;
  v119 = v132;
  if ( (v40 & 0x2000000) != 0 )
  {
    v113.index = 8 * (MapSize >> 1);
    v122 = v113.index;
    cUtil_SunShadow_CreateCache<R_TG_Handle,unsigned int,unsigned int>(pScript, v27, (const unsigned int *)&v122, &v113.index);
  }
  else
  {
    v27->index = nullDepthTarget.index;
  }
  if ( (*((_DWORD *)options + 2) & 0x1000000) != 0 )
  {
    v116 = 8 * (v41 >> 1);
    v114.index = v116;
    cUtil_SunShadow_CreateCache<R_TG_Handle,unsigned int,unsigned int>(pScript, v125, &v114.index, (const unsigned int *)&v116);
  }
  else
  {
    v125->index = v42;
  }
  v43 = *(_QWORD *)options;
  v117 = -1;
  if ( (v43 & 0x2000000) != 0 )
  {
    memset_0(&v134, 0, sizeof(v134));
    v44 = g_R_TG_Def_RBT_SunShadow_DrawCache.m_index;
    v134.handleArgs[0] = (unsigned int *)&v139;
    handleArgCount = v134.handleArgCount + 1;
    v134.handleArgCount = handleArgCount;
    if ( (unsigned int)handleArgCount >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      handleArgCount = v134.handleArgCount;
    }
    v134.handleArgs[handleArgCount] = (unsigned int *)&v140;
    v46 = v134.handleArgCount + 1;
    v134.handleArgCount = v46;
    if ( (unsigned int)v46 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v46 = v134.handleArgCount;
    }
    v134.handleArgs[v46] = (unsigned int *)&scenePerSurfData;
    v47 = v134.handleArgCount + 1;
    v134.handleArgCount = v47;
    if ( (unsigned int)v47 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v47 = v134.handleArgCount;
    }
    v134.handleArgs[v47] = &v27->index;
    v48 = v134.handleArgCount + 1;
    v134.handleArgCount = v48;
    if ( (unsigned int)v48 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v48 = v134.handleArgCount;
    }
    v134.handleArgs[v48] = &v125->index;
    v49 = v134.handleArgCount + 1;
    v134.handleArgCount = v49;
    if ( (unsigned int)v49 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v49 = v134.handleArgCount;
    }
    v134.handleArgs[v49] = &v117;
    ++v134.handleArgCount;
    R_TG_AddTask(pScript, v44, &v134);
    v43 = *(_QWORD *)options;
  }
  else
  {
    v117 = index;
  }
  v50 = nullTexture.index;
  if ( (v43 & 0x200000) != 0 )
  {
    memset_0(&stack, 0, sizeof(stack));
    v51 = g_R_TG_Def_RBT_SunShadow_CreateTranslucent.m_index;
    stack.handleArgs[0] = &v127->index;
    if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    stack.paramArgs[stack.paramArgCount++] = v41;
    R_TG_AddTask(pScript, v51, &stack);
    if ( (*((_DWORD *)options + 2) & 0x400000) != 0 )
    {
      memset_0(&stack, 0, sizeof(stack));
      ++stack.handleArgCount;
      stack.handleArgs[0] = &v127->index;
      R_TG_AddTask(pScript, g_R_TG_Def_RBT_SunShadow_ClearTranslucentAsync.m_index, &stack);
    }
    v113.index = -1;
    memset_0(&stack, 0, sizeof(stack));
    v52 = g_R_TG_Def_RBT_Sunshadow_GenerateTransShadowMask.m_index;
    stack.handleArgs[0] = (unsigned int *)&v113;
    v53 = stack.handleArgCount + 1;
    stack.handleArgCount = v53;
    if ( (unsigned int)v53 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v53 = stack.handleArgCount;
    }
    v54 = v129;
    stack.handleArgs[v53] = &v129->index;
    ++stack.handleArgCount;
    R_TG_AddTask(pScript, v52, &stack);
    memset_0(&v134, 0, sizeof(v134));
    v55 = g_R_TG_Def_RBT_Sunshadow_GenerateTransShadowMaskDilationAndTAA.m_index;
    v56 = v134.handleArgCount + 1;
    v134.handleArgs[0] = &v54->index;
    v134.handleArgCount = v56;
    if ( (unsigned int)v56 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v56 = v134.handleArgCount;
    }
    v134.handleArgs[v56] = &v54->index;
    v57 = v134.handleArgCount + 1;
    v134.handleArgCount = v57;
    if ( (unsigned int)v57 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v57 = v134.handleArgCount;
    }
    v134.handleArgs[v57] = (unsigned int *)&v113;
    ++v134.handleArgCount;
    R_TG_AddTask(pScript, v55, &v134);
  }
  else
  {
    v127->index = nullTexture.index;
    v129->index = v50;
  }
  v58 = sunshadowCascadesBackface;
  v59 = 3i64;
  do
  {
    R_TG_Handle::R_TG_Handle(v58++);
    --v59;
  }
  while ( v59 );
  v60 = v124;
  LODWORD(v61) = 0;
  if ( (*((_QWORD *)v124 + 1) & 0x200000000000i64) != 0 )
  {
    v62 = 0;
    if ( cascadesCount[0] )
    {
      v116 = TECHNIQUE_BUILD_SHADOWMAP_DEPTH_BACK_FACE;
      do
      {
        v63 = &sunshadowCascadesBackface[v62];
        if ( (*(_DWORD *)v60 & 0x10000) != 0 )
          cUtil_SunShadow_CreateCascade<R_TG_Handle,unsigned int,unsigned int>(pScript, v63, &v118, &v119);
        else
          cUtil_SunShadow_CreateCascade_NoHtile<R_TG_Handle,unsigned int,unsigned int>(pScript, v63, &v118, &v119);
        v114.index = -1;
        cClearDepthTargetInNextTask(pScript);
        v122 = v62 + 24;
        cRBT_SunShadow_DrawCascade<R_TG_Handle,enum GfxDrawListType,enum MaterialTechniqueType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sunshadowCascadesBackface[v62], &v122, &v116, &v139, &v140, &scenePerSurfData, &beginFrameToken, &v114);
        cRBT_SunShadow_DepthReadBarrier<R_TG_Handle>(pScript, &sunshadowCascadesBackface[v62++]);
      }
      while ( v62 < cascadesCount[0] );
      v61 = cascadesCount[0];
LABEL_73:
      v66 = v121;
      v67 = 0i64;
      do
      {
        v68 = &v66[v67];
        if ( (*(_DWORD *)v60 & 0x10000) != 0 )
          cUtil_SunShadow_CreateCascade<R_TG_Handle,unsigned int,unsigned int>(pScript, v68, &v118, &v119);
        else
          cUtil_SunShadow_CreateCascade_NoHtile<R_TG_Handle,unsigned int,unsigned int>(pScript, v68, &v118, &v119);
        if ( (*(_DWORD *)v60 & 0x2030000) == 33751040i64 )
        {
          v113.index = -1;
          cClearDepthTargetInNextTask(pScript);
          memset_0(&v134, 0, sizeof(v134));
          v69 = g_R_TG_Def_RBT_SunShadow_ClearCascade.m_index;
          v70 = v134.handleArgCount + 1;
          v134.handleArgs[0] = &v66[v67].index;
          v134.handleArgCount = v70;
          if ( (unsigned int)v70 >= 0x1E )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
              __debugbreak();
            v70 = v134.handleArgCount;
          }
          v134.handleArgs[v70] = &v117;
          v71 = v134.handleArgCount + 1;
          v134.handleArgCount = v71;
          if ( (unsigned int)v71 >= 0x1E )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
              __debugbreak();
            v71 = v134.handleArgCount;
          }
          v134.handleArgs[v71] = (unsigned int *)&v113;
          ++v134.handleArgCount;
          R_TG_AddTask(pScript, v69, &v134);
          v60 = v124;
          v117 = v113.index;
        }
        ++v67;
        --v61;
      }
      while ( v61 );
      v50 = nullTexture.index;
      v31.index = nullBuffer.index;
    }
  }
  else if ( cascadesCount[0] )
  {
    v61 = cascadesCount[0];
    v64 = sunshadowCascadesBackface;
    for ( i = cascadesCount[0]; i; --i )
    {
      v64->index = v42;
      ++v64;
    }
    goto LABEL_73;
  }
  if ( (*(_DWORD *)v60 & 0x2020000) == 33685504i64 )
  {
    cAsyncBegin(pScript);
    v72 = 0;
    if ( cascadesCount[0] )
    {
      v73 = v121;
      v74 = cascadesCount[0];
      v75 = v130;
      do
      {
        v113.index = -1;
        memset_0(&v134, 0, sizeof(v134));
        v76 = g_R_TG_Def_RBT_SunShadow_BlitCache_CS.m_index;
        v77 = v134.handleArgCount + 1;
        v134.handleArgs[0] = &v73->index;
        v134.handleArgCount = v77;
        if ( (unsigned int)v77 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v77 = v134.handleArgCount;
        }
        v134.handleArgs[v77] = p_index;
        if ( ++v134.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v134.paramArgs[v134.paramArgCount++] = v72;
        if ( v134.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v134.handleArgs[v134.handleArgCount] = &v117;
        v78 = v134.handleArgCount + 1;
        v134.handleArgCount = v78;
        if ( (unsigned int)v78 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v78 = v134.handleArgCount;
        }
        v134.handleArgs[v78] = (unsigned int *)&v113;
        ++v134.handleArgCount;
        R_TG_AddTask(pScript, v76, &v134);
        ++v72;
        ++v73;
        v117 = v113.index;
        v75->index = v113.index;
      }
      while ( v72 < v74 );
      v50 = nullTexture.index;
      v31.index = nullBuffer.index;
    }
    cAsyncEnd(pScript);
  }
  LODWORD(v79) = cascadesCount[0];
  v80 = 0;
  if ( cascadesCount[0] )
  {
    v81 = v124;
    v82 = v121;
    do
    {
      v83 = *(_QWORD *)v81;
      if ( (*(_QWORD *)v81 & 0x2000000i64) != 0 )
      {
        if ( (v83 & 0x20000) == 0 )
        {
          if ( (v83 & 0x10000) != 0 )
            cClearDepthTargetInNextTask(pScript);
          memset_0(&v136, 0, sizeof(v136));
          v84 = g_R_TG_Def_RBT_SunShadow_BlitCache.m_index;
          v85 = v136.handleArgCount + 1;
          v136.handleArgs[0] = &v82[v80].index;
          v136.handleArgCount = v85;
          if ( (unsigned int)v85 >= 0x1E )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
              __debugbreak();
            v85 = v136.handleArgCount;
          }
          v136.handleArgs[v85] = p_index;
          if ( ++v136.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v136.paramArgs[v136.paramArgCount++] = v80;
          R_TG_AddTask(pScript, v84, &v136);
        }
      }
      else
      {
        cClearDepthTargetInNextTask(pScript);
      }
      v113.index = -1;
      v116 = v80 + 24;
      v114.index = 27;
      cRBT_SunShadow_DrawCascade<R_TG_Handle,enum GfxDrawListType,enum MaterialTechniqueType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v82[v80], (const GfxDrawListType *)&v116, (const MaterialTechniqueType *)&v114, &v139, &v140, &scenePerSurfData, &beginFrameToken, &v113);
      v86 = v126;
      v126->index = v113.index;
      if ( !v80 )
      {
        if ( (*(_QWORD *)v81 & 0x40000i64) != 0 || (v113.index = -1, v114.index = 27, v116 = TECHNIQUE_BUILD_SHADOWMAP_DEPTH_BACK_FACE, cRBT_SunShadow_DrawCascade<R_TG_Handle,enum GfxDrawListType,enum MaterialTechniqueType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, v82, (const GfxDrawListType *)&v116, (const MaterialTechniqueType *)&v114, &v139, &v140, &scenePerSurfData, &beginFrameToken, &v113), v86->index = v113.index, (*(_QWORD *)v81 & 0x40000i64) != 0) )
        {
          memset_0(&arguments, 0, sizeof(arguments));
          ++arguments.handleArgCount;
          arguments.handleArgs[0] = &v82->index;
          R_TG_AddTask(pScript, g_R_TG_Def_RBT_SunShadow_DepthReadBarrier.m_index, &arguments);
          if ( (*(_QWORD *)v81 & 0x80000i64) != 0 )
          {
            if ( (*(_QWORD *)v81 & 0x10000i64) != 0 )
              cUtil_SunShadow_CreateCascade<R_TG_Handle,unsigned int,unsigned int>(pScript, value, &v118, &v119);
            else
              cUtil_SunShadow_CreateCascade_NoHtile<R_TG_Handle,unsigned int,unsigned int>(pScript, value, &v118, &v119);
          }
          else
          {
            memset_0(&stack, 0, sizeof(stack));
            v87 = g_R_TG_Def_Util_SunShadow_CreateCascade_Copy.m_index;
            stack.handleArgs[0] = &value->index;
            if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
              __debugbreak();
            stack.paramArgs[stack.paramArgCount++] = v118;
            if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
              __debugbreak();
            stack.paramArgs[stack.paramArgCount++] = v132;
            R_TG_AddTask(pScript, v87, &stack);
          }
          v115.index = -1;
          cAsyncBegin(pScript);
          memset_0(&v134, 0, sizeof(v134));
          v88 = g_R_TG_Def_RBT_SunShadow_CopyDepth.m_index;
          v134.handleArgs[0] = &value->index;
          v89 = v134.handleArgCount + 1;
          v134.handleArgCount = v89;
          if ( (unsigned int)v89 >= 0x1E )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
              __debugbreak();
            v89 = v134.handleArgCount;
          }
          v134.handleArgs[v89] = &v82[v80].index;
          if ( ++v134.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v134.paramArgs[v134.paramArgCount++] = 1;
          if ( v134.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v134.handleArgs[v134.handleArgCount] = &v117;
          v90 = v134.handleArgCount + 1;
          v134.handleArgCount = v90;
          if ( (unsigned int)v90 >= 0x1E )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
              __debugbreak();
            v90 = v134.handleArgCount;
          }
          v134.handleArgs[v90] = (unsigned int *)&v115;
          ++v134.handleArgCount;
          R_TG_AddTask(pScript, v88, &v134);
          cAsyncEnd(pScript);
          v117 = v115.index;
          v130->index = v115.index;
        }
      }
      LODWORD(v79) = cascadesCount[0];
      ++v80;
    }
    while ( v80 < cascadesCount[0] );
    v50 = nullTexture.index;
    v31.index = nullBuffer.index;
  }
  v91 = v124;
  if ( (*(_DWORD *)v124 & 0x40000) != 0 )
  {
    v115.index = -1;
    v114.index = 27;
    v116 = TECHNIQUE_BUILD_SHADOWMAP_DEPTH_BACK_FACE;
    cRBT_SunShadow_DrawCascade<R_TG_Handle,enum GfxDrawListType,enum MaterialTechniqueType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, v121, (const GfxDrawListType *)&v116, (const MaterialTechniqueType *)&v114, &v139, &v140, &scenePerSurfData, &beginFrameToken, &v115);
    v126->index = v115.index;
    v92 = v121;
  }
  else
  {
    v92 = v121;
    value->index = v121->index;
  }
  v93 = *(_QWORD *)v91;
  if ( (*(_QWORD *)v91 & 0x100000i64) != 0 )
  {
    v94 = 0;
    if ( (_DWORD)v79 )
    {
      v95 = cascadesCount[0];
      v96 = &v92->index;
      v97 = v126;
      do
      {
        memset_0(&stack, 0, sizeof(stack));
        v98 = g_R_TG_Def_RBT_SunShadow_Resolve.m_index;
        stack.handleArgs[0] = v96;
        if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        stack.paramArgs[stack.paramArgCount++] = v94;
        if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        stack.handleArgs[stack.handleArgCount++] = &v97->index;
        R_TG_AddTask(pScript, v98, &stack);
        ++v94;
        ++v96;
      }
      while ( v94 < v95 );
      v91 = v124;
      v50 = nullTexture.index;
      v31.index = nullBuffer.index;
      LODWORD(v79) = cascadesCount[0];
      v93 = *(_QWORD *)v124;
    }
    if ( (v93 & 0xC0000) == 786432 )
    {
      v114.index = 0;
      memset_0(&arguments, 0, sizeof(arguments));
      R_TG_AddTask<int,R_TG_Handle>(pScript, g_R_TG_Def_RBT_SunShadow_Resolve.m_index, &arguments, value, (const int *)&v114, v126);
    }
  }
  if ( (_DWORD)v79 )
  {
    v99 = v121;
    v79 = (unsigned int)v79;
    do
    {
      memset_0(&arguments, 0, sizeof(arguments));
      ++arguments.handleArgCount;
      arguments.handleArgs[0] = &v99->index;
      R_TG_AddTask(pScript, g_R_TG_Def_RBT_SunShadow_DepthReadBarrier.m_index, &arguments);
      ++v99;
      --v79;
    }
    while ( v79 );
    LODWORD(v79) = cascadesCount[0];
  }
  if ( (*(_DWORD *)v91 & 0x200000) != 0 )
  {
    v115.index = 0;
    if ( (_DWORD)v79 )
    {
      v100 = v121;
      v101 = v129;
      v102 = v127;
      do
      {
        cRBT_SunShadow_DrawTranslucent<R_TG_Handle,R_TG_Handle,unsigned int,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, v102, &v100[(unsigned int)v61], &v115.index, &v139, &v140, &scenePerSurfData, v101, &beginFrameToken);
        LODWORD(v61) = v61 + 1;
        v115.index = v61;
      }
      while ( (unsigned int)v61 < (unsigned int)v79 );
      v50 = nullTexture.index;
      v31.index = nullBuffer.index;
    }
  }
  v103 = v121;
  if ( (unsigned int)v79 < 3 )
  {
    v104 = (char *)sunshadowCascadesBackface - (char *)v121;
    v105 = (char *)v133 - (char *)v121;
    v106 = &v121[(unsigned int)v79];
    v107 = (unsigned int)(3 - v79);
    do
    {
      *(unsigned int *)((char *)&v106->index + v104) = v50;
      v106->index = v50;
      *(unsigned int *)((char *)&v106->index + v105) = v50;
      ++v106;
      --v107;
    }
    while ( v107 );
  }
  if ( (*((_QWORD *)v91 + 1) & 0x200000000000i64) != 0 )
  {
    R_TG_CompressSunShadowCascades(pScript, v103, sunshadowCascadesBackface, v131, v79, v31);
  }
  else
  {
    v108 = v131;
    v131[2].index = v31.index;
    v108[1].index = v31.index;
    v108->index = v31.index;
  }
  if ( (*((_DWORD *)v91 + 2) & 0x1000000) != 0 )
  {
    memset_0(&stack, 0, sizeof(stack));
    v109 = g_R_TG_Def_RBT_GenerateCompressedSunShadow_Compress.m_index;
    stack.handleArgs[0] = p_index;
    v110 = stack.handleArgCount + 1;
    stack.handleArgCount = v110;
    if ( (unsigned int)v110 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v110 = stack.handleArgCount;
    }
    stack.handleArgs[v110] = &v125->index;
    ++stack.handleArgCount;
    R_TG_AddTask(pScript, v109, &stack);
  }
}

/*
==============
R_TGS_SunShadows_Downsample
==============
*/
void R_TGS_SunShadows_Downsample(R_TG_Script *pScript, const R_TG_ViewOptions *options, R_TG_Handle token, R_TG_Handle *sunshadowCascades, R_TG_Handle sunshadowCascade0ForViewmodel, R_TG_Handle *sunshadowMins, R_TG_Handle *sunshadowMin0ForViewmodel, R_TG_Handle nullTexture)
{
  R_TG_Handle *v9; 
  R_TG_Handle *v11; 
  unsigned __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int *p_index; 
  char *v17; 
  unsigned int m_index; 
  __int64 handleArgCount; 
  unsigned int v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v23; 
  R_TG_Handle *v24; 
  R_TG_Handle *v25; 
  R_TG_AddTaskStack stack; 
  R_TG_AddTaskStack arguments; 
  unsigned int index; 

  index = token.index;
  v9 = sunshadowMins;
  v11 = sunshadowMin0ForViewmodel;
  v24 = sunshadowMins;
  v25 = sunshadowMin0ForViewmodel;
  if ( (*(_QWORD *)options & 0x800i64) != 0 )
  {
    if ( (*(_QWORD *)options & 0xC000i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\scripts\\r_tgs_misc.h", 437, ASSERT_TYPE_ASSERT, "(options.sunshadowsOpaqueCascadeLimit > 0)", (const char *)&queryFormat, "options.sunshadowsOpaqueCascadeLimit > 0") )
      __debugbreak();
    v13 = (unsigned __int64)*(_DWORD *)options >> 14;
    cAsyncBegin(pScript);
    v14 = 0;
    v15 = v13 & 3;
    if ( v15 )
    {
      p_index = &v9->index;
      v17 = (char *)((char *)sunshadowCascades - (char *)v9);
      do
      {
        memset_0(&stack, 0, sizeof(stack));
        m_index = g_R_TG_Def_RBT_SunShadow_DownsamplePass0.m_index;
        handleArgCount = stack.handleArgCount + 1;
        stack.handleArgs[0] = p_index;
        stack.handleArgCount = handleArgCount;
        if ( (unsigned int)handleArgCount >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          handleArgCount = stack.handleArgCount;
        }
        stack.handleArgs[handleArgCount] = (unsigned int *)&v17[(_QWORD)p_index];
        if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        stack.paramArgs[stack.paramArgCount++] = v14;
        if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        stack.handleArgs[stack.handleArgCount++] = &index;
        R_TG_AddTask(pScript, m_index, &stack);
        memset_0(&arguments, 0, sizeof(arguments));
        v20 = g_R_TG_Def_RBT_SunShadow_DownsamplePass1.m_index;
        arguments.handleArgs[0] = p_index;
        if ( ++arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        arguments.paramArgs[arguments.paramArgCount++] = v14;
        R_TG_AddTask(pScript, v20, &arguments);
        ++v14;
        ++p_index;
      }
      while ( v14 < v15 );
      v9 = v24;
      v11 = v25;
    }
    if ( (*(_DWORD *)options & 0x40000) != 0 )
    {
      memset_0(&stack, 0, sizeof(stack));
      v21 = g_R_TG_Def_RBT_SunShadow_DownsamplePass0.m_index;
      v22 = stack.handleArgCount + 1;
      stack.handleArgs[0] = &v11->index;
      stack.handleArgCount = v22;
      if ( (unsigned int)v22 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v22 = stack.handleArgCount;
      }
      stack.handleArgs[v22] = (unsigned int *)&sunshadowCascade0ForViewmodel;
      if ( ++stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.paramArgs[stack.paramArgCount++] = 0;
      if ( stack.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      stack.handleArgs[stack.handleArgCount++] = &index;
      R_TG_AddTask(pScript, v21, &stack);
      memset_0(&arguments, 0, sizeof(arguments));
      ++arguments.handleArgCount;
      arguments.handleArgs[0] = &v11->index;
      R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_SunShadow_DownsamplePass1.m_index, &arguments, 0);
    }
    else
    {
      v11->index = v9->index;
    }
    cAsyncEnd(pScript);
  }
  else
  {
    v23 = nullTexture.index;
    sunshadowMins[2].index = nullTexture.index;
    v9[1].index = v23;
    v9->index = v23;
    v11->index = v23;
  }
}

/*
==============
R_TG_GetScriptViewFeatures
==============
*/
void R_TG_GetScriptViewFeatures(const GfxViewportFeatures *features, const R_TG_ScriptSystemOptions *systemOptions, R_TG_ScriptOptions *outScriptOptions)
{
  const dvar_t *v3; 
  bool enabled; 
  int v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  const dvar_t *v11; 
  bool v12; 
  const dvar_t *v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  const dvar_t *v17; 
  __int64 v18; 
  __int16 v19; 
  const dvar_t *v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  const dvar_t *v23; 
  int v24; 
  const dvar_t *v25; 
  unsigned __int64 v26; 
  _BOOL8 v27; 
  const dvar_t *v28; 
  unsigned __int64 v29; 
  int v30; 
  const dvar_t *v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  const dvar_t *v34; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  unsigned __int64 v38; 
  unsigned __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  const dvar_t *v42; 
  unsigned __int64 v43; 
  unsigned __int64 v44; 
  const dvar_t *v45; 
  __int64 v46; 
  unsigned __int64 v47; 
  __int16 v48; 
  const dvar_t *v49; 
  unsigned __int64 v50; 
  unsigned __int64 v51; 
  const dvar_t *v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  const dvar_t *v56; 
  unsigned __int64 v57; 
  int ShowTris; 
  int v59; 
  __int64 v60; 
  __int64 v61; 
  unsigned __int64 v62; 
  unsigned int v63; 
  __int64 v64; 
  unsigned __int64 v65; 
  bool v66; 
  unsigned __int64 v67; 
  _BOOL8 v68; 
  __int64 v69; 
  const dvar_t *v70; 
  unsigned __int64 v71; 
  const dvar_t *v72; 
  unsigned __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  unsigned __int64 v79; 
  R_TG_ViewOptions options; 

  v3 = DVARBOOL_r_sceneResSquareRatio;
  if ( !DVARBOOL_r_sceneResSquareRatio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResSquareRatio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  enabled = v3->current.enabled;
  v8 = *((_DWORD *)features + 11);
  v9 = (systemOptions->raw & 4 | enabled | (2 * (systemOptions->raw & 8 | rg.sceneResDynamic | (4 * (systemOptions->raw & 1 | (2i64 * (systemOptions->raw & 2))))))) << 17;
  v10 = (4i64 * R_LGV_UseMultiLightGridSampling()) | ((*((_DWORD *)features + 10) & 0x100 | ((v8 & 0x200 | 0x100ui64) >> 3)) >> 5);
  v11 = DCONST_DVARBOOL_r_decalVolumesOcclusionCulling;
  if ( !DCONST_DVARBOOL_r_decalVolumesOcclusionCulling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesOcclusionCulling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.enabled;
  v13 = DVARBOOL_r_decalVolumesStreamOcclusionCulling;
  v14 = ((unsigned __int8)v10 ^ (unsigned __int8)(16 * v12)) & 0x10 ^ v10;
  if ( !DVARBOOL_r_decalVolumesStreamOcclusionCulling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_decalVolumesStreamOcclusionCulling") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( !r_decalVolumesAsync->current.enabled || (v15 = 192i64, (*(_BYTE *)&systemOptions->0 & 2) == 0) )
    v15 = 128i64;
  v16 = (v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(32 * v13->current.enabled)) & 0x20) & 0xFFFFFFFFFFFFF8BFui64;
  v17 = DCONST_DVARBOOL_sm_sunvisPrepass;
  v18 = v15 | v16 | ((rg.gpuCullOcclusion | (2 * (rg.gpuCullReusePrepassVisData | (2i64 * rg.gpuCullUseVisBufferPrepass)))) << 8);
  if ( !DCONST_DVARBOOL_sm_sunvisPrepass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunvisPrepass") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v19 = v17->current.color[0];
  v20 = DCONST_DVARBOOL_sm_sunvisPrepassIndirect;
  v21 = ((unsigned __int16)v18 ^ (unsigned __int16)(v19 << 11)) & 0x800 ^ (unsigned __int64)v18;
  if ( !DCONST_DVARBOOL_sm_sunvisPrepassIndirect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunvisPrepassIndirect") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v22 = v21 & 0xFFFFFFFFFFFF0FFFui64 | ((*((_DWORD *)features + 11) & 0x38 | (4i64 * v20->current.enabled)) << 10);
  v23 = DCONST_DVARBOOL_sm_sunCascadeHtile;
  if ( !DCONST_DVARBOOL_sm_sunCascadeHtile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunCascadeHtile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  v24 = v23->current.color[0];
  v25 = DCONST_DVARBOOL_sm_sunBlitCS;
  v26 = ((unsigned int)v22 ^ (v24 << 16)) & 0x10000 ^ v22;
  if ( !DCONST_DVARBOOL_sm_sunBlitCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunBlitCS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  v27 = v25->current.enabled;
  v28 = DCONST_DVARBOOL_sm_sunDepthCopy;
  v29 = v26 & 0xFFFFFFFFFFF9FFFFui64 | ((*((_DWORD *)features + 11) & 0x40 | (unsigned __int64)(32 * v27)) << 12);
  if ( !DCONST_DVARBOOL_sm_sunDepthCopy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_sunDepthCopy") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  v30 = v28->current.color[0];
  v31 = DCONST_DVARBOOL_r_resolveSunCascadeCustom;
  v32 = ((unsigned int)v29 ^ (v30 << 19)) & 0x80000 ^ v29;
  if ( !DCONST_DVARBOOL_r_resolveSunCascadeCustom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_resolveSunCascadeCustom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  v33 = 0i64;
  if ( v31->current.enabled )
    goto LABEL_36;
  v34 = DCONST_DVARBOOL_r_resummarizeSunCascadeCustom;
  if ( !DCONST_DVARBOOL_r_resummarizeSunCascadeCustom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_resummarizeSunCascadeCustom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  v35 = 0i64;
  if ( v34->current.enabled )
LABEL_36:
    v35 = 2i64;
  v37 = 4736i64;
  if ( rg.waveWaterEnable > 0 )
    v37 = 4768i64;
  v36 = *((_DWORD *)features + 11);
  v38 = v32 & 0xFFFFFFCA180FFFFFui64 | ((v36 & 0x10000 | (2 * (v36 & 0x22000 | (((unsigned __int16)v36 & 0xC000 | (16 * (v35 | v36 & 0x40000 | (4 * (v36 & 0x800 | (2 * (v36 & 1 | (4 * (v36 & 0x1400 | sm_spotHTileMask->current.enabled | (4 * (rg.useCompressedSunShadowClipPlanes | (unsigned __int64)v37))))))))))) << 7)))) << 7);
  v39 = v38 & 0xFFFFFF7FFFFFFFFFui64 | ((unsigned __int64)RB_IsSunEnabled() << 39) | 0x10000000000i64;
  if ( *((int *)features + 10) >= 0 || (v40 = 0xE0000000000i64, !rg.volumetrics) )
    v40 = 0xC0000000000i64;
  if ( !(v40 & 0x300000000000i64 | ((unsigned __int64)(rg.ssrMode & 3) << 44) & 0x300000000000i64) || (((unsigned int)v40 | (unsigned int)v39) & 0x80000000) == 0 || (v41 = 0x33C00000000000i64, rg.waveWaterEnable <= 1) )
    v41 = 0x33800000000000i64;
  v42 = DCONST_DVARBOOL_r_veilTonemap;
  v43 = v41 | v40 & 0xFFF3BFFFFFFFFFFFui64 | v39 & 0xFFF38DFFFFFFFFFFui64 | ((unsigned __int64)(rg.ssrMode & 3) << 44) & 0xFFF3BFFFFFFFFFFFui64 | ((r_dof_enable->current.enabled | (2i64 * r_dof_filter_fullres->current.enabled)) << 50);
  if ( !DCONST_DVARBOOL_r_veilTonemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilTonemap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v44 = v43 & 0xFFBFFFFFFFFFFFFFui64 | ((unsigned __int64)v42->current.enabled << 54);
  v45 = DCONST_DVARBOOL_r_lowResOverlays;
  v46 = v44 | 0x80000000000000i64;
  v47 = ((unsigned __int16)v9 ^ (unsigned __int16)(r_useShellshockPostfx->current.color[0] << 11)) & 0x800 ^ (unsigned __int64)v9;
  if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  v48 = v45->current.color[0];
  v49 = DCONST_DVARBOOL_r_offscreenReticles;
  v50 = ((unsigned __int16)v47 ^ (unsigned __int16)(v48 << 14)) & 0x4000 ^ v47;
  if ( !DCONST_DVARBOOL_r_offscreenReticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_offscreenReticles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  v51 = v50 & 0xFFFFFFFFFFFE7FFFui64 | (*((_DWORD *)features + 11) >> 3) & 0x10000 | ((unsigned __int64)v49->current.enabled << 15);
  v52 = DCONST_DVARBOOL_r_hudOutlineCS;
  v53 = v46 & 0xE3FFFFFFFFFFFFFFui64 | ((features->m_postAAMode & 3 | (4i64 * r_smaaTransMask->current.enabled)) << 58) | 0x6000000000000000i64;
  if ( !DCONST_DVARBOOL_r_hudOutlineCS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineCS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  v54 = v53 & 0x7FFFFFFFFFFFFFFFi64 | -(__int64)v52->current.enabled & 0x8000000000000000ui64;
  v55 = v51 & 0xFFFFFFFFFFFFFDFCui64 | rg.vrs | (2 * (rg.vrsEmissiveOnly | ((unsigned __int64)r_drawShadowBeforePrepass->current.enabled << 8) | 0xFC));
  v56 = DCONST_DVARBOOL_r_spotBeforeSun;
  if ( !DCONST_DVARBOOL_r_spotBeforeSun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_spotBeforeSun") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  v57 = v55 & 0xFFFEFFFFF5FFCBFFui64 | ((v56->current.enabled | (4 * (features->m_shadowMapTileResolution & 3 | 0x4000i64))) << 10);
  ShowTris = R_ShowTris_GetShowTris();
  v59 = ShowTris;
  if ( !ShowTris || (v60 = 0x10000000i64, ShowTris >= 9) )
    v60 = 0i64;
  v61 = 0i64;
  if ( v59 >= 9 )
    v61 = 0x20000000i64;
  v62 = v61 | ((unsigned __int64)r_showTrisPip->current.enabled << 30);
  v63 = v59 - 7;
  v64 = -257i64;
  v65 = v60 | v57 & 0xFFFFFFFF8FFFFFFFui64 | v62;
  if ( v63 > 1 )
    v64 = -1i64;
  *(_QWORD *)&options = v64 & v54;
  v66 = R_HDRScopes_Enabled();
  v67 = v65 & 0xFFFFFFFC7FFFFFFFui64 | ((v66 | (unsigned __int64)(r_showFrustumLightsDebug->current.integer != 0 ? 2 : 0)) << 31) & 0xFFFFFFFCFFFFFFFFui64 | -(__int64)(rg.debugTextureOverlay != 0) & 0x200000000i64 | ((v66 | (unsigned __int64)(r_showFrustumLightsDebug->current.integer != 0 ? 2 : 0)) << 31) & 0x100000000i64 | -(__int64)(r_showFrustumGridDebug->current.integer != 0) & 0x100000000i64;
  v68 = R_DecalVolumes_DebugEnabled();
  v69 = v68 | (2 * (R_DecalVolumes_CheckInvalidate() & 3 | (4 * (r_hdrSpotmeter->current.enabled | (2i64 * r_debugOverdrawOverlay->current.enabled)))));
  v70 = DVARINT_r_refImageDraw;
  v71 = v67 & 0xFFFFFF83FFFFFFFFui64 | (v69 << 34);
  if ( !DVARINT_r_refImageDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refImageDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  v72 = DVARINT_r_refShaderRenderStage;
  v73 = v71 & 0xFFFFFF7FFFFFFFFFui64 | -(__int64)(v70->current.integer != 0) & 0x8000000000i64;
  if ( !DVARINT_r_refShaderRenderStage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_refShaderRenderStage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v72);
  v74 = 0x40000000000i64;
  if ( v72->current.integer )
    v74 = 0x50000000000i64;
  v75 = 0i64;
  if ( r_rtt_showOverlay->current.integer <= 8 )
    v75 = 2i64;
  v76 = v75 | (r_gpShowStats->current.integer != 0 ? 8 : 0) | r_volumetricsDebug->current.integer & 1 | (16i64 * r_debugUav->current.enabled);
  v77 = 0i64;
  v78 = v76 << 46;
  if ( r_compressedSunShadowOverlay->current.integer > 0 )
    v77 = 0x100000000000i64;
  v79 = (v74 | ((r_magnifierEnable->current.enabled | (unsigned __int64)(sm_showOverlay->current.integer != 0 ? 8 : 0)) << 41)) & 0x100000000000i64 | v77 & 0x100000000000i64 | v78;
  if ( rg.useCompressedSunShadow == 3 )
    v33 = 0x200000000000i64;
  *((_QWORD *)&options + 1) = v73 & 0xFFF90CFFFFFFFFFFui64 | (v74 | ((r_magnifierEnable->current.enabled | (unsigned __int64)(sm_showOverlay->current.integer != 0 ? 8 : 0)) << 41)) & 0xFFF90FFFFFFFFFFFui64 | v33 | v79 | 0x80000000000i64;
  R_TG_ResolveOptionsDependencies(&options);
  *(R_TG_ViewOptions *)outScriptOptions = options;
}

/*
==============
R_TG_ResolveOptionsDependencies
==============
*/
void R_TG_ResolveOptionsDependencies(R_TG_ViewOptions *options)
{
  __int64 v1; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 

  v1 = *((_QWORD *)options + 1);
  v3 = *(_QWORD *)options;
  if ( (v1 & 0x4000000000i64) != 0 )
  {
    v3 &= 0xFF6AFFFF9FBFDFFFui64;
    v1 &= 0xFFFFFE4043FFFFDFui64;
  }
  v4 = v3 & ((unsigned int)((_DWORD)v3 << 12) | 0xFFFFFFFFFDFFFFFFui64) & ((32 * ((unsigned int)v3 & (((_DWORD)v3 << 12) | 0xFDFFFFFF))) | 0xFFFFFFFFFFFBFFFFui64);
  v5 = v4 & ((2 * v4) | 0xFFFFFFFFFFF7FFFFui64) & ((((unsigned int)v4 & ((2 * (_DWORD)v4) | 0xFFF7FFFF)) << 8) | 0xFFFFFFFFFFDFFFFFui64);
  v6 = v5 & ((v5 >> 2) | 0xFFFFFFFFFFFFF7FFui64) & ((2 * ((unsigned __int16)v5 & ((unsigned __int16)(v5 >> 2) | 0xF7FFu))) | 0xFFFFFFFFFFFFEFFFui64);
  v7 = v6 & ((2 * v6) | 0xFFFFFFFFFF7FFFFFui64);
  if ( ((unsigned int)v6 & ((2 * (_DWORD)v6) | 0xFF7FFFFF) & 0xC00000) != 12582912i64 || (v8 = -1i64, (v1 & 0x80000) != 0) )
    v8 = -16777217i64;
  v9 = v8 & v7;
  if ( (v9 & 0x400000) == 0 || (v10 = -1i64, (v1 & 0x80000) != 0) )
    v10 = -134217729i64;
  v11 = v10 & v9 & ((2 * (v10 & v9)) | 0xFFFFFFFDFFFFFFFFui64);
  v13 = 0xFFFFFBFFFFFFFFFFui64;
  if ( (v11 & ((2 * v11) | 0xFFFFFFDFFFFFFFFFui64) & ((4 * (v11 & ((2 * v11) | 0xFFFFFFDFFFFFFFFFui64))) | 0xFFFFFFBFFFFFFFFFui64) & 0x20000000002i64) == 0x20000000002i64 )
    v13 = -1i64;
  v12 = v11 & ((2 * v11) | 0xFFFFFFDFFFFFFFFFui64) & ((4 * (v11 & ((2 * v11) | 0xFFFFFFDFFFFFFFFFui64))) | 0xFFFFFFBFFFFFFFFFui64);
  v14 = v12 & v13 & ((2 * (v12 & v13)) | 0xFFFDFFFFFFFFFFFFui64);
  v15 = 0xEFFFFFFFFFFFFFFFui64;
  if ( (((v14 & ((2 * v14) | 0xFFBFFFFFFFFFFFFFui64)) >> 58) & 3) >= 2 )
    v15 = -1i64;
  v16 = v14 & ((2 * v14) | 0xFFBFFFFFFFFFFFFFui64) & v15;
  v17 = -1i64;
  v18 = v16 & ((2 * (unsigned __int16)v16) | 0xFFFFFFFFFFFFFEFFui64) ^ (unsigned __int8)(v16 ^ (v16 | ((v16 & ((2 * (unsigned __int16)v16) | 0xFFFFFFFFFFFFFEFFui64)) >> 30))) & 0x80;
  v19 = v18 ^ (unsigned __int8)(v18 ^ (v18 | ((_BYTE)v1 << 6))) & 0x80;
  *(_QWORD *)options = v19;
  if ( (v19 & 8) == 0 )
    v17 = 0xFFFFFFE7FFFFFFFFui64;
  v20 = -1073741825i64;
  v21 = 0xFFFFEFFFFFFFFFFFui64;
  v22 = v1 & ((v19 << 31) | 0xFFFFFFFBFFFFFFFFui64) & ((unsigned int)((_DWORD)v19 << 11) | 0xFFFFFFFFFEFFFFFFui64) & v17;
  if ( (v22 & 0x30000000) != 0 )
    v20 = -1i64;
  if ( (v19 & 0x402000) != 0 )
    v21 = -1i64;
  *((_QWORD *)options + 1) = v22 & ((32 * v19) | 0xFFFFBFFFFFFFFFFFui64) & ((v19 << 32) | 0xFFFFDFFFFFFFFFFFui64) & v21 & v20;
}

/*
==============
R_TG_RunScriptHudOnly
==============
*/
void R_TG_RunScriptHudOnly(R_TG_Script *pScript, const R_TG_ScriptOptions *__formal)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  R_TG_Handle v8; 
  R_TG_Handle result; 
  R_TG_Handle v10; 
  R_TG_AddTaskStack stack; 

  cDisplayResource(&result, pScript);
  cNullResource(&v8, pScript, "null_texture", eResourceType_Texture);
  cNullResource(&v10, pScript, "null_buffer", eResourceType_Buffer);
  cClearColorTargetsInNextTask(pScript);
  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_Draw2D_Hud.m_index;
  stack.handleArgs[0] = (unsigned int *)&result;
  handleArgCount = stack.handleArgCount + 1;
  stack.handleArgCount = handleArgCount;
  if ( (unsigned int)handleArgCount >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    handleArgCount = stack.handleArgCount;
  }
  stack.handleArgs[handleArgCount] = (unsigned int *)&v8;
  v5 = stack.handleArgCount + 1;
  stack.handleArgCount = v5;
  if ( (unsigned int)v5 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v5 = stack.handleArgCount;
  }
  stack.handleArgs[v5] = (unsigned int *)&v8;
  v6 = stack.handleArgCount + 1;
  stack.handleArgCount = v6;
  if ( (unsigned int)v6 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v6 = stack.handleArgCount;
  }
  stack.handleArgs[v6] = (unsigned int *)&v8;
  v7 = stack.handleArgCount + 1;
  stack.handleArgCount = v7;
  if ( (unsigned int)v7 >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v7 = stack.handleArgCount;
  }
  stack.handleArgs[v7] = (unsigned int *)&v10;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, m_index, &stack);
}

/*
==============
R_TG_RunScriptOffscreenTarget
==============
*/
void R_TG_RunScriptOffscreenTarget(R_TG_Script *pScript, const R_TG_ScriptOptions *__formal)
{
  unsigned int m_index; 
  __int64 handleArgCount; 
  R_TG_Handle v5; 
  R_TG_Handle result; 
  R_TG_AddTaskStack stack; 

  cDisplayResource(&result, pScript);
  cExternalResource(&v5, pScript, "offscreen", eResourceType_ColorTarget, 0x200u, 0x200u, 1u, 1u, 1u, 1u, 3u);
  memset_0(&stack, 0, sizeof(stack));
  ++stack.handleArgCount;
  stack.handleArgs[0] = (unsigned int *)&v5;
  R_TG_AddTask(pScript, g_R_TG_Def_RBT_DrawQuadLightmapImage.m_index, &stack);
  memset_0(&stack, 0, sizeof(stack));
  m_index = g_R_TG_Def_RBT_FullScreenFilter.m_index;
  stack.handleArgs[0] = (unsigned int *)&result;
  handleArgCount = stack.handleArgCount + 1;
  stack.handleArgCount = handleArgCount;
  if ( (unsigned int)handleArgCount >= 0x1E )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    handleArgCount = stack.handleArgCount;
  }
  stack.handleArgs[handleArgCount] = (unsigned int *)&v5;
  ++stack.handleArgCount;
  R_TG_AddTask(pScript, m_index, &stack);
}

/*
==============
R_TG_RunScriptView
==============
*/
void R_TG_RunScriptView(R_TG_Script *pScript, const R_TG_ScriptOptions *scriptOptions)
{
  R_TG_ViewOptions options; 

  options = (R_TG_ViewOptions)*scriptOptions;
  R_TG_RunScriptViewCommon(pScript, &options);
}

/*
==============
R_TG_RunScriptViewCommon
==============
*/
void R_TG_RunScriptViewCommon(R_TG_Script *pScript, const R_TG_ViewOptions *options)
{
  const R_TG_ViewOptions *v2; 
  TG_GP_PerPassBuffers *p_perPassBuffers; 
  __int64 v5; 
  unsigned int index; 
  unsigned __int8 v7; 
  __int64 v8; 
  R_TG_Handle *p_sunshadowCascades; 
  __int64 v10; 
  R_TG_Handle *p_sunshadowMins; 
  __int64 v12; 
  R_TG_Handle *p_compressedCascades; 
  __int64 v14; 
  bool v15; 
  __int64 v16; 
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v19; 
  unsigned int MaxBaseWidth; 
  unsigned int MaxBaseHeight; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  __int64 v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  unsigned int v40; 
  unsigned int v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  unsigned int v47; 
  unsigned int v48; 
  __int64 v49; 
  unsigned int v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  unsigned int v64; 
  __int64 v65; 
  unsigned int v66; 
  unsigned int v67; 
  R_TG_AddTaskStack *v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int MipCount; 
  unsigned int v72; 
  __int64 v73; 
  unsigned __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  bool v77; 
  unsigned __int64 v78; 
  R_TG_Handle *occlusionDepthTexture; 
  R_TG_Handle *p_sceneVisBuffer; 
  unsigned int v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  unsigned int v90; 
  unsigned int v91; 
  __int64 v92; 
  bool v93; 
  unsigned int v94; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  unsigned int v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  unsigned int v108; 
  __int64 v109; 
  __int64 v110; 
  unsigned int v111; 
  __int64 v112; 
  __int64 v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  __int64 v118; 
  __int64 v119; 
  unsigned int v120; 
  __int64 v121; 
  __int64 v122; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  unsigned int v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  __int64 v136; 
  __int64 v137; 
  __int64 v138; 
  __int64 v139; 
  unsigned int v140; 
  __int64 v141; 
  unsigned int v142; 
  unsigned __int64 v143; 
  int v144; 
  int v145; 
  unsigned int v146; 
  __int64 v147; 
  __int64 v148; 
  __int64 v149; 
  __int64 v150; 
  __int64 v151; 
  __int64 v152; 
  __int64 v153; 
  unsigned int v154; 
  __int64 v155; 
  __int64 v156; 
  __int64 v157; 
  __int64 v158; 
  unsigned int v159; 
  __int64 v160; 
  unsigned int v161; 
  __int64 v162; 
  __int64 v163; 
  __int64 v164; 
  __int64 v165; 
  __int64 v166; 
  __int64 v167; 
  int v168; 
  __int64 v169; 
  unsigned int v170; 
  unsigned int v171; 
  unsigned int v172; 
  __int64 v173; 
  __int64 v174; 
  unsigned int v175; 
  __int64 v176; 
  int v177; 
  unsigned int v178; 
  __int64 v179; 
  int v180; 
  __int64 v181; 
  __int64 v182; 
  __int64 v183; 
  unsigned int v184; 
  __int64 v185; 
  unsigned int v186; 
  __int64 v187; 
  __int64 v188; 
  __int64 v189; 
  unsigned int v190; 
  unsigned int v191; 
  __int64 v192; 
  __int64 v193; 
  __int64 v194; 
  __int64 v195; 
  __int64 v196; 
  __int64 v197; 
  __int64 v198; 
  unsigned __int64 v199; 
  __int64 v200; 
  __int64 v201; 
  __int64 v202; 
  unsigned int v203; 
  __int64 v204; 
  __int64 v205; 
  __int64 v206; 
  __int64 v207; 
  unsigned int v208; 
  __int64 v209; 
  unsigned int v210; 
  __int64 v211; 
  __int64 v212; 
  __int64 v213; 
  __int64 v214; 
  R_TG_Script *v215; 
  R_TG_Handle *p_sceneColor; 
  __int64 v217; 
  __int64 v218; 
  __int64 v219; 
  unsigned int v220; 
  unsigned int v221; 
  float v222; 
  float v223; 
  __int64 v224; 
  unsigned int v225; 
  unsigned int SceneDownsampleVeilMip; 
  unsigned int v227; 
  unsigned int SceneDownsampleTotalMipCount; 
  unsigned int v229; 
  __int64 v230; 
  unsigned int v231; 
  unsigned int v232; 
  R_TG_Handle *v233; 
  R_TG_Handle *v234; 
  unsigned int v235; 
  GFX_GP_PASS v236; 
  unsigned int v237; 
  GfxDrawListType v238; 
  bool *p_isPrepass; 
  bool *v240; 
  __int64 v241; 
  unsigned int v242; 
  __int64 v243; 
  unsigned __int64 v244; 
  __int64 v245; 
  __int64 v246; 
  unsigned int v247; 
  unsigned int v248; 
  unsigned __int64 v249; 
  char v250; 
  __int64 v251; 
  unsigned int v252; 
  GFX_GP_PASS v253; 
  __int64 v254; 
  __int64 v255; 
  __int64 v256; 
  unsigned int v257; 
  R_TG_Handle floatZ; 
  R_TG_Handle triIDTexture; 
  R_TG_Handle sceneColor; 
  GFX_GP_PASS v261; 
  R_TG_Handle sceneDepth; 
  R_TG_Handle scope; 
  R_TG_Handle color; 
  R_TG_Handle sceneIndirectArgs; 
  R_TG_Handle scenePerSurfData; 
  R_TG_Handle sceneIndices; 
  R_TG_Handle value; 
  R_TG_Handle v269; 
  R_TG_Handle v270; 
  R_TG_Handle result; 
  GfxRenderTargetFormat v272[4]; 
  R_TG_Handle v273; 
  R_TG_Handle transSunShadowMask; 
  R_TG_Handle v275; 
  R_TG_Handle transSunShadow; 
  R_TG_Handle volVisibility; 
  R_TG_Handle velocity; 
  R_TG_Handle nullBuffer; 
  R_TG_Handle reflectionGrid; 
  R_TG_Handle volExtinction; 
  R_TG_Handle volScattering; 
  R_TG_Handle v283; 
  R_TG_Handle v284; 
  R_TG_Handle outDecalDrawData; 
  unsigned int srcTask; 
  R_TG_Handle v287; 
  R_TG_Handle upsampledRt; 
  R_TG_Handle v289; 
  R_TG_Handle sceneEntityIDVelocity; 
  R_TG_Handle outDecalIndices; 
  R_TG_Handle v292; 
  R_TG_Handle beginToken; 
  R_TG_Handle lightGridVolHighBands; 
  R_TG_Handle v295; 
  R_TG_Handle lightGridVol; 
  R_TG_Handle lightsCluster; 
  R_TG_Handle vrsSWMask; 
  R_TG_Handle inoutFullresAlpha; 
  R_TG_Handle outCreateRt; 
  R_TG_Handle v301; 
  R_TG_Handle staleCache; 
  R_TG_Handle v303; 
  R_TG_Handle v304; 
  R_TG_Handle v305; 
  R_TG_Handle sunshadowCascade0ForViewmodel; 
  R_TG_Handle outColor; 
  R_TG_Handle v308; 
  R_TG_Handle outFog; 
  R_TG_Handle prepassViewModelToken; 
  R_TG_Handle vrsHWMask; 
  GfxEmissivePass SceneDownsampleMipForExposureCalculation; 
  GfxDrawListType v313; 
  R_TG_Handle v314; 
  R_TG_Handle v315; 
  GfxRenderTargetFormat v316[4]; 
  R_TG_Handle nullRwBuffer; 
  R_TG_Handle v318; 
  R_TG_Handle halfresAlpha; 
  R_TG_Handle halfresColor; 
  R_TG_Handle v321; 
  R_TG_Handle v322; 
  R_TG_Handle outSH; 
  R_TG_Handle v324; 
  R_TG_Handle v325; 
  R_TG_Handle v326; 
  R_TG_Handle v327; 
  R_TG_Handle v328; 
  R_TG_Handle v329; 
  R_TG_Handle v330; 
  R_TG_Handle v331; 
  R_TG_Handle ssrMask; 
  R_TG_Handle v333; 
  R_TG_Handle outDecalIndirectArgs; 
  R_TG_Handle outDecalDebugData; 
  R_TG_Handle v336; 
  R_TG_Handle sunshadowMin0ForViewmodel; 
  R_TG_Handle v338; 
  R_TG_Handle v339; 
  R_TG_Handle sceneVisBuffer; 
  R_TG_Handle v341; 
  R_TG_Handle umbraOcclusionTexture; 
  R_TG_Handle v343; 
  R_TG_Handle v344; 
  R_TG_Handle v345; 
  R_TG_Handle v346; 
  R_TG_Handle v347; 
  GfxEmissivePass SceneDownsampleVeilMipCount; 
  R_TG_Handle v349; 
  R_TG_Handle v350; 
  R_TG_Handle v351; 
  R_TG_Handle shadowAsyncToken; 
  R_TG_Handle v353; 
  R_TG_Handle v354; 
  R_TG_Handle v355; 
  R_TG_Handle v356; 
  R_TG_Handle v357; 
  R_TG_Handle v358; 
  R_TG_Handle v359; 
  R_TG_Handle v360; 
  R_TG_Handle v361; 
  R_TG_Handle v362; 
  R_TG_Handle v363; 
  R_TG_Handle v364; 
  unsigned int v365; 
  unsigned int v366; 
  R_TG_Handle v367; 
  R_TG_Handle v368; 
  R_TG_Handle outputRt; 
  unsigned int v370; 
  R_TG_Handle sceneVelocityHalf; 
  R_TG_Handle dofTile0Handle; 
  R_TG_Handle v373; 
  R_TG_Handle v374; 
  R_TG_Handle v375; 
  R_TG_Handle sunshadowCache; 
  R_TG_Handle v377; 
  R_TG_Handle token; 
  R_TG_Handle v379; 
  R_TG_Handle v380; 
  R_TG_Handle v381; 
  R_TG_Handle v382; 
  GfxDrawListType v383; 
  R_TG_Handle v384; 
  unsigned int v385; 
  R_TG_Handle shadowIndicesToken; 
  R_TG_Handle nullDepthTarget; 
  unsigned int v388; 
  GfxGPConfig v389; 
  R_TG_Handle v390; 
  R_TG_Handle v391; 
  R_TG_Handle v392; 
  R_TG_Handle v393; 
  unsigned int v394; 
  R_TG_Handle v395; 
  R_TG_Handle v396; 
  R_TG_Handle v397; 
  R_TG_Handle v398; 
  R_TG_Handle v399; 
  R_TG_Handle v400; 
  R_TG_Handle sunshadowCacheBackface; 
  R_TG_Handle prepassWorldToken; 
  R_TG_Handle v403; 
  R_TG_Handle syncToken; 
  R_TG_Handle v405; 
  R_TG_Handle v406; 
  R_TG_Handle v407; 
  R_TG_Handle v408; 
  unsigned int v409; 
  unsigned int i; 
  R_TG_Handle v411; 
  unsigned int v412; 
  R_TG_Handle v413; 
  int v414; 
  int v415; 
  GfxGPConfig gpConfig; 
  GfxGPConfig v417; 
  GFX_GP_PASS v418; 
  unsigned int v419; 
  unsigned int v420; 
  unsigned int v421; 
  unsigned int v422; 
  unsigned int v423; 
  int v424; 
  unsigned int v425; 
  unsigned int v426; 
  GfxDrawListType v427; 
  R_TG_Handle shadowDrawToken; 
  int v429; 
  int v430; 
  R_TG_Handle indiciesToken; 
  unsigned int v432; 
  R_TG_Handle v433; 
  unsigned int height; 
  unsigned int width; 
  unsigned int v436; 
  unsigned int v437; 
  const R_TG_ViewOptions *v438; 
  TG_GP_PerPassBuffers perPassBuffers; 
  TG_GP_PerPassBuffers v440; 
  R_TG_AddTaskStack v441; 
  R_TG_AddTaskStack v442; 
  R_TG_AddTaskStack v443; 
  R_TG_AddTaskStack v444; 
  R_TG_AddTaskStack v445; 
  R_TG_AddTaskStack v446; 
  R_TG_AddTaskStack v447; 
  R_TG_AddTaskStack v448; 
  R_TG_AddTaskStack v449; 
  R_TG_AddTaskStack v450; 
  R_TG_AddTaskStack v451; 
  R_TG_AddTaskStack v452; 
  R_TG_AddTaskStack v453; 
  R_TG_AddTaskStack v454; 
  R_TG_AddTaskStack v455; 
  R_TG_AddTaskStack v456; 
  R_TG_AddTaskStack v457; 
  R_TG_AddTaskStack v458; 
  R_TG_AddTaskStack arguments; 
  R_TG_AddTaskStack v460; 
  R_TG_AddTaskStack v461; 
  R_TG_AddTaskStack v462; 
  R_TG_AddTaskStack v463; 
  R_TG_AddTaskStack v464; 
  R_TG_AddTaskStack v465; 
  R_TG_AddTaskStack v466; 
  R_TG_AddTaskStack v467; 
  R_TG_AddTaskStack v468; 
  R_TG_AddTaskStack v469; 
  R_TG_AddTaskStack stack; 
  R_TG_AddTaskStack v471; 
  R_TG_AddTaskStack v472; 
  R_TG_AddTaskStack v473; 
  R_TG_AddTaskStack v474; 
  R_TG_AddTaskStack v475; 
  R_TG_AddTaskStack v476; 
  R_TG_AddTaskStack v477; 
  R_TG_AddTaskStack v478; 
  R_TG_AddTaskStack v479; 
  R_TG_AddTaskStack v480; 
  R_TG_AddTaskStack v481; 
  R_TG_AddTaskStack v482; 
  R_TG_AddTaskStack v483; 
  R_TG_AddTaskStack v484; 
  R_TG_AddTaskStack v485; 
  R_TG_AddTaskStack v486; 
  R_TG_AddTaskStack v487; 
  R_TG_AddTaskStack v488; 
  R_TG_AddTaskStack v489; 
  R_TG_AddTaskStack v490; 
  R_TG_AddTaskStack v491; 
  R_TG_AddTaskStack v492; 
  R_TG_AddTaskStack v493; 
  R_TG_AddTaskStack v494; 
  R_TG_AddTaskStack v495; 
  R_TG_AddTaskStack v496; 
  R_TG_AddTaskStack v497; 
  R_TG_AddTaskStack v498; 
  R_TG_AddTaskStack v499; 
  R_TG_AddTaskStack v500; 
  R_TG_AddTaskStack v501; 
  R_TG_AddTaskStack v502; 
  R_TG_AddTaskStack v503; 
  R_TG_AddTaskStack v504; 
  R_TG_AddTaskStack v505; 
  R_TG_AddTaskStack v506; 
  R_TG_Handle sunshadowCascades; 
  R_TG_Handle sunShadow1; 
  R_TG_Handle v509; 
  R_TG_Handle compressedCascades; 
  R_TG_Handle v511; 
  R_TG_Handle v512; 
  R_TG_Handle sunshadowMins; 
  unsigned int v514; 
  unsigned int v515; 
  GfxGPConfig v516; 
  R_TG_Handle __t; 
  R_TG_Handle v518; 

  v2 = options;
  v438 = options;
  cDisplayResource(&result, pScript);
  cNullResource(&triIDTexture, pScript, "null_texture", eResourceType_Texture);
  cNullResource(&v341, pScript, "null_rw_texture", eResourceType_Texture);
  cNullResource(&nullBuffer, pScript, "null_buffer", eResourceType_Buffer);
  cNullResource(&nullRwBuffer, pScript, "null_rw_buffer", eResourceType_Buffer);
  cNullResource(&nullDepthTarget, pScript, "null_depth_target", eResourceType_DepthTarget);
  sceneIndices.index = -1;
  p_perPassBuffers = &perPassBuffers;
  sceneIndirectArgs.index = -1;
  v5 = 2i64;
  scenePerSurfData.index = -1;
  do
  {
    TG_GP_PerPassBuffers::TG_GP_PerPassBuffers(p_perPassBuffers++);
    --v5;
  }
  while ( v5 );
  v330.index = -1;
  v406.index = -1;
  if ( (*((_QWORD *)v2 + 1) & 0x4000000000000i64) != 0 )
  {
    memset_0(&stack, 0, sizeof(stack));
    ++stack.handleArgCount;
    stack.handleArgs[0] = (unsigned int *)&v406;
    R_TG_AddTask(pScript, g_R_TG_Def_Util_DebugUav_Clear.m_index, &stack);
  }
  beginToken.index = -1;
  memset_0(&v469, 0, sizeof(v469));
  ++v469.handleArgCount;
  v469.handleArgs[0] = (unsigned int *)&beginToken;
  R_TG_AddTask(pScript, g_R_TG_Def_RBT_Begin3D.m_index, &v469);
  vrsHWMask.index = triIDTexture.index;
  umbraOcclusionTexture.index = -1;
  memset_0(&v468, 0, sizeof(v468));
  ++v468.handleArgCount;
  v468.handleArgs[0] = (unsigned int *)&umbraOcclusionTexture;
  R_TG_AddTask(pScript, g_R_TG_Def_RBT_Umbra_ResolveOcclusion.m_index, &v468);
  index = -1;
  v7 = (*(_QWORD *)v2 >> 44) & 3;
  v269.index = -1;
  sceneVisBuffer.index = -1;
  sceneEntityIDVelocity.index = -1;
  if ( v7 <= 1u )
    index = v341.index;
  ssrMask.index = index;
  v8 = *((_QWORD *)v2 + 1);
  sceneDepth.index = -1;
  prepassWorldToken.index = -1;
  prepassViewModelToken.index = -1;
  token.index = -1;
  shadowIndicesToken.index = -1;
  shadowAsyncToken.index = -1;
  shadowDrawToken.index = -1;
  indiciesToken.index = -1;
  srcTask = -1;
  if ( (v8 & 0x200) == 0 )
  {
    gpConfig.passIndex = GFX_GP_PASS_CAMERA;
    gpConfig.readBackPass = (v8 & 0x2000000000000i64) != 0;
    *(_DWORD *)&gpConfig.isPrepass = 1;
    *(_WORD *)&gpConfig.useVisBufferPrepass = 0;
    R_TGS_GP_ProcessSurfs(pScript, &gpConfig, beginToken, &triIDTexture, &triIDTexture, &umbraOcclusionTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &perPassBuffers, &nullBuffer, &nullRwBuffer, &token);
    srcTask = R_TGS_DrawPrepass(pScript, v2, sceneIndices, perPassBuffers.clusterWorkgroupArgsBuffer, sceneIndirectArgs, scenePerSurfData, vrsHWMask, beginToken, &sceneVisBuffer, &sceneEntityIDVelocity, &sceneDepth, &ssrMask, &prepassViewModelToken, &prepassWorldToken);
  }
  p_sunshadowCascades = &sunshadowCascades;
  v10 = 3i64;
  do
  {
    R_TG_Handle::R_TG_Handle(p_sunshadowCascades++);
    --v10;
  }
  while ( v10 );
  sunshadowCascade0ForViewmodel.index = -1;
  p_sunshadowMins = &sunshadowMins;
  v12 = 3i64;
  do
  {
    R_TG_Handle::R_TG_Handle(p_sunshadowMins++);
    --v12;
  }
  while ( v12 );
  sunshadowMin0ForViewmodel.index = -1;
  p_compressedCascades = &compressedCascades;
  transSunShadow.index = -1;
  v14 = 3i64;
  transSunShadowMask.index = -1;
  sunshadowCache.index = -1;
  sunshadowCacheBackface.index = -1;
  staleCache.index = -1;
  do
  {
    R_TG_Handle::R_TG_Handle(p_compressedCascades++);
    --v14;
  }
  while ( v14 );
  if ( (*(_DWORD *)v2 & 0x402000) != 0 )
  {
    v15 = (*((_QWORD *)v2 + 1) & 0x2000000000000i64) != 0;
    *(_QWORD *)&v417.passIndex = 1i64;
    v417.readBackPass = v15;
    *(_WORD *)&v417.useVisBufferPrepass = 0;
    R_TGS_GP_ProcessSurfs(pScript, &v417, beginToken, &triIDTexture, &triIDTexture, &triIDTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v440, &nullBuffer, &nullRwBuffer, &shadowIndicesToken);
    v16 = *((_QWORD *)v2 + 1);
    if ( (v16 & 0x20000000) != 0 )
    {
      v400.index = -1;
      memset_0(&v456, 0, sizeof(v456));
      m_index = g_R_TG_Def_Util_CreateSceneColorDepthAndClear.m_index;
      v456.handleArgs[0] = (unsigned int *)&v330;
      handleArgCount = v456.handleArgCount + 1;
      v456.handleArgCount = handleArgCount;
      if ( (unsigned int)handleArgCount >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        handleArgCount = v456.handleArgCount;
      }
      v456.handleArgs[handleArgCount] = (unsigned int *)&v400;
      if ( ++v456.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v456.paramArgs[v456.paramArgCount++] = 1;
      R_TG_AddTask(pScript, m_index, &v456);
      v418 = GFX_GP_PASS_SHADOWS;
      cRBTD_ShowTris<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,enum GFX_GP_PASS>(pScript, &v330, &v400, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v418);
      v16 = *((_QWORD *)v2 + 1);
    }
    if ( (v16 & 0x400) != 0 )
      R_TGS_SpotShadows(pScript, v2, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, triIDTexture, beginToken, &staleCache);
    R_TGS_SunShadows(pScript, v2, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, triIDTexture, nullBuffer, beginToken, shadowIndicesToken, &shadowAsyncToken, &shadowDrawToken, &sunshadowCascades, &sunshadowCascade0ForViewmodel, &sunshadowMins, &sunshadowMin0ForViewmodel, &sunshadowCache, &sunshadowCacheBackface, &transSunShadow, &compressedCascades, &transSunShadowMask);
    if ( (*((_DWORD *)v2 + 2) & 0x400i64) == 0 )
      R_TGS_SpotShadows(pScript, v2, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, triIDTexture, beginToken, &staleCache);
  }
  else
  {
    transSunShadowMask.index = triIDTexture.index;
    transSunShadow.index = triIDTexture.index;
    sunshadowCascade0ForViewmodel.index = triIDTexture.index;
    v509.index = triIDTexture.index;
    sunShadow1.index = triIDTexture.index;
    sunshadowCascades.index = triIDTexture.index;
    sunshadowMin0ForViewmodel.index = triIDTexture.index;
    v515 = triIDTexture.index;
    v514 = triIDTexture.index;
    sunshadowMins.index = triIDTexture.index;
    staleCache.index = triIDTexture.index;
    sunshadowCacheBackface.index = triIDTexture.index;
    sunshadowCache.index = triIDTexture.index;
    v512.index = nullBuffer.index;
    v511.index = nullBuffer.index;
    compressedCascades.index = nullBuffer.index;
    shadowIndicesToken.index = beginToken.index;
    shadowAsyncToken.index = beginToken.index;
  }
  v19 = *((_QWORD *)v2 + 1);
  if ( (v19 & 0x80u) != 0i64 && (v19 & 0x200) == 0 )
    cRBT_ReflectionProbeRelighting_Process<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &staleCache);
  MaxBaseWidth = R_VOL_GetMaxBaseWidth();
  MaxBaseHeight = R_VOL_GetMaxBaseHeight();
  v22 = pScript->sceneSize.v[0];
  v23 = MaxBaseHeight;
  v24 = pScript->sceneSize.v[1];
  v25 = MaxBaseWidth;
  if ( MaxBaseWidth > v22 )
    v25 = pScript->sceneSize.v[0];
  v26 = v25 + 11;
  v27 = MaxBaseHeight;
  v308.index = v26 / 0xC;
  v366 = v26 / 0xC;
  if ( MaxBaseHeight > v24 )
    v27 = v24;
  v287.index = (v27 + 11) / 0xC;
  v365 = v287.index;
  v28 = *((_QWORD *)v2 + 1);
  if ( (v28 & 0x200) != 0 )
  {
    v516.passIndex = GFX_GP_PASS_CAMERA;
    v516.readBackPass = (v28 & 0x2000000000000i64) != 0;
    *(_DWORD *)&v516.isPrepass = 1;
    *(_WORD *)&v516.useVisBufferPrepass = 0;
    R_TGS_GP_ProcessSurfs(pScript, &v516, beginToken, &triIDTexture, &triIDTexture, &umbraOcclusionTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &perPassBuffers, &nullBuffer, &nullRwBuffer, &token);
    if ( *((char *)v2 + 8) < 0 )
      cRBT_ReflectionProbeRelighting_Process<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &staleCache);
    R_TGS_SunShadows_Downsample(pScript, v2, token, &sunshadowCascades, sunshadowCascade0ForViewmodel, &sunshadowMins, &sunshadowMin0ForViewmodel, triIDTexture);
    v29 = R_TGS_DrawPrepass(pScript, v2, sceneIndices, perPassBuffers.clusterWorkgroupArgsBuffer, sceneIndirectArgs, scenePerSurfData, vrsHWMask, beginToken, &sceneVisBuffer, &sceneEntityIDVelocity, &sceneDepth, &ssrMask, &prepassViewModelToken, &prepassWorldToken);
    v22 = pScript->sceneSize.v[0];
    v24 = pScript->sceneSize.v[1];
    srcTask = v29;
  }
  v269.index = sceneVisBuffer.index;
  reflectionGrid.index = -1;
  if ( MaxBaseWidth > v22 )
    MaxBaseWidth = v22;
  v30 = (MaxBaseWidth + 47) / 0x30;
  v283.index = v30;
  v388 = v30;
  if ( v23 > v24 )
    v23 = v24;
  v31 = (v23 + 47) / 0x30;
  v303.index = v31;
  v385 = v31;
  memset_0(&v457, 0, sizeof(v457));
  v32 = g_R_TG_Def_RBT_RP_ProcessView.m_index;
  v457.handleArgs[0] = (unsigned int *)&reflectionGrid;
  if ( ++v457.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  v457.paramArgs[v457.paramArgCount++] = 96 * v30 * v31;
  if ( v457.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  v457.handleArgs[v457.handleArgCount++] = (unsigned int *)&shadowAsyncToken;
  R_TG_AddTask(pScript, v32, &v457);
  if ( (*((_BYTE *)v2 + 8) & 0x40) != 0 )
  {
    memset_0(&v449, 0, sizeof(v449));
    v33 = g_R_TG_Def_RBT_LightSensor_Process.m_index;
    v449.handleArgs[0] = (unsigned int *)&sunshadowCascades;
    v34 = v449.handleArgCount + 1;
    v449.handleArgCount = v34;
    if ( (unsigned int)v34 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v34 = v449.handleArgCount;
    }
    v449.handleArgs[v34] = (unsigned int *)&sunShadow1;
    v35 = v449.handleArgCount + 1;
    v449.handleArgCount = v35;
    if ( (unsigned int)v35 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v35 = v449.handleArgCount;
    }
    v449.handleArgs[v35] = (unsigned int *)&transSunShadow;
    v36 = v449.handleArgCount + 1;
    v449.handleArgCount = v36;
    if ( (unsigned int)v36 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v36 = v449.handleArgCount;
    }
    v449.handleArgs[v36] = (unsigned int *)&transSunShadowMask;
    v37 = v449.handleArgCount + 1;
    v449.handleArgCount = v37;
    if ( (unsigned int)v37 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v37 = v449.handleArgCount;
    }
    v449.handleArgs[v37] = (unsigned int *)&staleCache;
    v38 = v449.handleArgCount + 1;
    v449.handleArgCount = v38;
    if ( (unsigned int)v38 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v38 = v449.handleArgCount;
    }
    v449.handleArgs[v38] = (unsigned int *)&prepassViewModelToken;
    ++v449.handleArgCount;
    R_TG_AddTask(pScript, v33, &v449);
  }
  v39 = *(_QWORD *)v2;
  lightGridVol.index = -1;
  lightGridVolHighBands.index = -1;
  if ( (v39 & 2) != 0 )
  {
    if ( (v39 & 4) != 0 )
    {
      RBT_LGV_SampleLightingMultiGrid(pScript, &lightGridVol, &lightGridVolHighBands, &reflectionGrid, &prepassViewModelToken);
      v39 = *(_QWORD *)v2;
      v40 = triIDTexture.index;
    }
    else
    {
      v429 = -1;
      v430 = -1;
      memset_0(&v450, 0, sizeof(v450));
      v41 = g_R_TG_Def_RBT_LGV_SampleLighting.m_index;
      v450.handleArgs[0] = (unsigned int *)&lightGridVol;
      v42 = v450.handleArgCount + 1;
      v450.handleArgCount = v42;
      if ( (unsigned int)v42 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v42 = v450.handleArgCount;
      }
      v450.handleArgs[v42] = (unsigned int *)&lightGridVolHighBands;
      v43 = v450.handleArgCount + 1;
      v450.handleArgCount = v43;
      if ( (unsigned int)v43 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v43 = v450.handleArgCount;
      }
      v450.handleArgs[v43] = (unsigned int *)&reflectionGrid;
      v44 = v450.handleArgCount + 1;
      v450.handleArgCount = v44;
      if ( (unsigned int)v44 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v44 = v450.handleArgCount;
      }
      v450.handleArgs[v44] = (unsigned int *)&v429;
      v45 = v450.handleArgCount + 1;
      v450.handleArgCount = v45;
      if ( (unsigned int)v45 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v45 = v450.handleArgCount;
      }
      v450.handleArgs[v45] = (unsigned int *)&v430;
      v46 = v450.handleArgCount + 1;
      v450.handleArgCount = v46;
      if ( (unsigned int)v46 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v46 = v450.handleArgCount;
      }
      v450.handleArgs[v46] = (unsigned int *)&prepassViewModelToken;
      ++v450.handleArgCount;
      R_TG_AddTask(pScript, v41, &v450);
      v39 = *(_QWORD *)v2;
      v40 = triIDTexture.index;
    }
  }
  else
  {
    v40 = triIDTexture.index;
    lightGridVolHighBands.index = triIDTexture.index;
    lightGridVol.index = triIDTexture.index;
  }
  outDecalIndices.index = -1;
  outDecalDrawData.index = -1;
  outDecalDebugData.index = -1;
  outDecalIndirectArgs.index = -1;
  if ( (v39 & 0x10) != 0 )
    goto LABEL_101;
  if ( (v39 & 8) != 0 )
  {
    cOrderHintBegin(pScript, -100000);
    R_TGS_DV_FillCluster(pScript, (*((_QWORD *)v2 + 1) & 0x100000i64) != 0, (*(_QWORD *)v2 & 0x40) != 0, (*(_QWORD *)v2 & 0x10) != 0, (*(_QWORD *)v2 & 0x20) != 0, (*((_QWORD *)v2 + 1) & 0x400000000i64) != 0, nullBuffer, nullRwBuffer, triIDTexture, triIDTexture, &outDecalIndices, &outDecalDrawData, &outDecalDebugData, &outDecalIndirectArgs, prepassViewModelToken);
    cOrderHintEnd(pScript);
    v39 = *(_QWORD *)v2;
    v40 = triIDTexture.index;
LABEL_101:
    v47 = nullBuffer.index;
    goto LABEL_102;
  }
  v47 = nullBuffer.index;
  outDecalIndirectArgs.index = nullBuffer.index;
  outDecalDebugData.index = nullBuffer.index;
  outDecalDrawData.index = nullBuffer.index;
  outDecalIndices.index = nullBuffer.index;
LABEL_102:
  floatZ.index = -1;
  v48 = -1;
  v304.index = -1;
  v338.index = -1;
  v270.index = -1;
  v284.index = -1;
  velocity.index = -1;
  sceneVelocityHalf.index = -1;
  v370 = -1;
  if ( (v39 & 0x80u) == 0i64 )
  {
    v270.index = v40;
    floatZ.index = v40;
    v284.index = v47;
    v370 = v40;
  }
  else
  {
    memset_0(&v467, 0, sizeof(v467));
    ++v467.handleArgCount;
    v467.handleArgs[0] = (unsigned int *)&v284;
    R_TG_AddTask(pScript, g_R_TG_Def_RBT_Resolve_StencilMaskCreateClear.m_index, &v467);
    v49 = *((_QWORD *)v2 + 1);
    if ( (v49 & 2) != 0 )
    {
      memset_0(&v442, 0, sizeof(v442));
      v50 = g_R_TG_Def_RBT_ResolveFloatZ_Full_MSAA.m_index;
      v442.handleArgs[0] = (unsigned int *)&sceneDepth;
      v51 = v442.handleArgCount + 1;
      v442.handleArgCount = v51;
      if ( (unsigned int)v51 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v51 = v442.handleArgCount;
      }
      v442.handleArgs[v51] = (unsigned int *)&v338;
      v52 = v442.handleArgCount + 1;
      v442.handleArgCount = v52;
      if ( (unsigned int)v52 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v52 = v442.handleArgCount;
      }
      v442.handleArgs[v52] = (unsigned int *)&v304;
      v53 = v442.handleArgCount + 1;
      v442.handleArgCount = v53;
      if ( (unsigned int)v53 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v53 = v442.handleArgCount;
      }
      v442.handleArgs[v53] = (unsigned int *)&v270;
      v54 = v442.handleArgCount + 1;
      v442.handleArgCount = v54;
      if ( (unsigned int)v54 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v54 = v442.handleArgCount;
      }
      v442.handleArgs[v54] = (unsigned int *)&v284;
      v55 = v442.handleArgCount + 1;
      v442.handleArgCount = v55;
      if ( (unsigned int)v55 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v55 = v442.handleArgCount;
      }
      v442.handleArgs[v55] = &v370;
    }
    else if ( (v49 & 1) != 0 )
    {
      memset_0(&v442, 0, sizeof(v442));
      v50 = g_R_TG_Def_RBT_ResolveFloatZ_Full_VRS.m_index;
      v442.handleArgs[0] = (unsigned int *)&sceneDepth;
      v56 = v442.handleArgCount + 1;
      v442.handleArgCount = v56;
      if ( (unsigned int)v56 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v56 = v442.handleArgCount;
      }
      v442.handleArgs[v56] = (unsigned int *)&v338;
      v57 = v442.handleArgCount + 1;
      v442.handleArgCount = v57;
      if ( (unsigned int)v57 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v57 = v442.handleArgCount;
      }
      v442.handleArgs[v57] = (unsigned int *)&v304;
      v58 = v442.handleArgCount + 1;
      v442.handleArgCount = v58;
      if ( (unsigned int)v58 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v58 = v442.handleArgCount;
      }
      v442.handleArgs[v58] = (unsigned int *)&v270;
      v59 = v442.handleArgCount + 1;
      v442.handleArgCount = v59;
      if ( (unsigned int)v59 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v59 = v442.handleArgCount;
      }
      v442.handleArgs[v59] = (unsigned int *)&v284;
    }
    else
    {
      memset_0(&v442, 0, sizeof(v442));
      v50 = g_R_TG_Def_RBT_ResolveFloatZ_Full.m_index;
      v442.handleArgs[0] = (unsigned int *)&sceneDepth;
      v60 = v442.handleArgCount + 1;
      v442.handleArgCount = v60;
      if ( (unsigned int)v60 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v60 = v442.handleArgCount;
      }
      v442.handleArgs[v60] = (unsigned int *)&v338;
      v61 = v442.handleArgCount + 1;
      v442.handleArgCount = v61;
      if ( (unsigned int)v61 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v61 = v442.handleArgCount;
      }
      v442.handleArgs[v61] = (unsigned int *)&v304;
      v62 = v442.handleArgCount + 1;
      v442.handleArgCount = v62;
      if ( (unsigned int)v62 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v62 = v442.handleArgCount;
      }
      v442.handleArgs[v62] = (unsigned int *)&v270;
      v63 = v442.handleArgCount + 1;
      v442.handleArgCount = v63;
      if ( (unsigned int)v63 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v63 = v442.handleArgCount;
      }
      v442.handleArgs[v63] = (unsigned int *)&v284;
    }
    ++v442.handleArgCount;
    v64 = R_TG_AddTask(pScript, v50, &v442);
    v65 = *((_QWORD *)v2 + 1);
    v66 = v64;
    floatZ.index = v338.index;
    if ( (v65 & 0x100) != 0 )
    {
      cAddDependencyInNextTask(pScript, v64);
      if ( (v65 & 1) != 0 )
      {
        memset_0(&v461, 0, sizeof(v461));
        ++v461.handleArgCount;
        v461.handleArgs[0] = (unsigned int *)&v269;
        R_TG_AddTask(pScript, g_R_TG_Def_RBT_DecompressOrFlushTextureMetadata.m_index, &v461);
        cAddDependencyInNextTask(pScript, v66);
        memset_0(&v462, 0, sizeof(v462));
        ++v462.handleArgCount;
        v67 = g_R_TG_Def_RBT_DecompressOrFlushTextureMetadata.m_index;
        v68 = &v462;
        v462.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      }
      else
      {
        memset_0(&v462, 0, sizeof(v462));
        ++v462.handleArgCount;
        v462.handleArgs[0] = (unsigned int *)&v269;
        R_TG_AddTask(pScript, g_R_TG_Def_RBT_DecompressOrFlushTexture.m_index, &v462);
        cAddDependencyInNextTask(pScript, v66);
        memset_0(&v461, 0, sizeof(v461));
        ++v461.handleArgCount;
        v67 = g_R_TG_Def_RBT_DecompressOrFlushTexture.m_index;
        v68 = &v461;
        v461.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      }
      R_TG_AddTask(pScript, v67, v68);
    }
    memset_0(&arguments, 0, sizeof(arguments));
    v69 = g_R_TG_Def_RBT_ResolveFloatZ_DownsampleMipCS.m_index;
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    v48 = R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v69, &arguments, 1, &floatZ, &v304);
    v70 = 4;
    MipCount = R_RT_GetMipCount(pScript->sceneSize.v[0], pScript->sceneSize.v[1], 0x10u);
    if ( MipCount > 4 )
    {
      do
      {
        memset_0(&v464, 0, sizeof(v464));
        ++v464.paramArgCount;
        v72 = g_R_TG_Def_RBT_ResolveFloatZ_DownsampleMipCS.m_index;
        v464.paramArgs[0] = v70 - 1;
        if ( v464.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v464.paramArgs[v464.paramArgCount++] = 0;
        v70 += 4;
        v48 = R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v72, &v464, 0, &floatZ, &v304);
      }
      while ( v70 < MipCount );
      v2 = v438;
      v31 = v303.index;
    }
    v73 = *((_QWORD *)v2 + 1);
    if ( (v73 & 0x400000) != 0 )
    {
      cRBT_DecompressOrFlushTexture<R_TG_Handle>(pScript, &floatZ);
      v73 = *((_QWORD *)v2 + 1);
    }
    v74 = *(_QWORD *)v2;
    v75 = *(_QWORD *)v2 >> 8;
    v76 = BYTE1(*(_QWORD *)v2) & 1;
    if ( (*(_QWORD *)v2 & 0x100i64) != 0 || (v73 & 0x200) == 0 )
    {
      v389.passIndex = GFX_GP_PASS_CAMERA;
      v389.isPrepass = 0;
      v389.occlusionPass = v75 & 1;
      v389.skipPerSurfData = (v73 & 0x200) != 0;
      v77 = (v74 & 0x200) != 0;
      v78 = v74 >> 10;
      v389.reusePrepassVisData = v77;
      v389.useVisBufferPrepass = v78 & 1;
      if ( (v78 & 1) == 0 || (v389.useMSAAVisBufferPrepass = 1, (v73 & 1) == 0) )
        v389.useMSAAVisBufferPrepass = 0;
      occlusionDepthTexture = &floatZ;
      v389.readBackPass = (v73 & 0x2000000000000i64) != 0;
      if ( !v76 )
        occlusionDepthTexture = &triIDTexture;
      p_sceneVisBuffer = &sceneVisBuffer;
      if ( (v78 & 1) == 0 )
        p_sceneVisBuffer = &triIDTexture;
      R_TGS_GP_ProcessSurfs(pScript, &v389, beginToken, p_sceneVisBuffer, occlusionDepthTexture, &umbraOcclusionTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &perPassBuffers, &nullBuffer, &nullRwBuffer, &indiciesToken);
      v73 = *((_QWORD *)v2 + 1);
    }
    if ( (v73 & 1) != 0 )
    {
      memset_0(&v444, 0, sizeof(v444));
      v81 = g_R_TG_Def_RBT_CompositeStaticVelocityInlineResolve.m_index;
      v444.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      v82 = v444.handleArgCount + 1;
      v444.handleArgCount = v82;
      if ( (unsigned int)v82 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v82 = v444.handleArgCount;
      }
      v444.handleArgs[v82] = (unsigned int *)&floatZ;
      v83 = v444.handleArgCount + 1;
      v444.handleArgCount = v83;
      if ( (unsigned int)v83 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v83 = v444.handleArgCount;
      }
      v444.handleArgs[v83] = (unsigned int *)&v270;
      v84 = v444.handleArgCount + 1;
      v444.handleArgCount = v84;
      if ( (unsigned int)v84 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v84 = v444.handleArgCount;
      }
      v444.handleArgs[v84] = (unsigned int *)&velocity;
      v85 = v444.handleArgCount + 1;
      v444.handleArgCount = v85;
      if ( (unsigned int)v85 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v85 = v444.handleArgCount;
      }
      v444.handleArgs[v85] = (unsigned int *)&sceneVelocityHalf;
    }
    else
    {
      memset_0(&v444, 0, sizeof(v444));
      v81 = g_R_TG_Def_RBT_CompositeStaticVelocity.m_index;
      v444.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      v86 = v444.handleArgCount + 1;
      v444.handleArgCount = v86;
      if ( (unsigned int)v86 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v86 = v444.handleArgCount;
      }
      v444.handleArgs[v86] = (unsigned int *)&floatZ;
      v87 = v444.handleArgCount + 1;
      v444.handleArgCount = v87;
      if ( (unsigned int)v87 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v87 = v444.handleArgCount;
      }
      v444.handleArgs[v87] = (unsigned int *)&v270;
      v88 = v444.handleArgCount + 1;
      v444.handleArgCount = v88;
      if ( (unsigned int)v88 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v88 = v444.handleArgCount;
      }
      v444.handleArgs[v88] = (unsigned int *)&velocity;
      v89 = v444.handleArgCount + 1;
      v444.handleArgCount = v89;
      if ( (unsigned int)v89 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v89 = v444.handleArgCount;
      }
      v444.handleArgs[v89] = (unsigned int *)&sceneVelocityHalf;
    }
    ++v444.handleArgCount;
    R_TG_AddTask(pScript, v81, &v444);
    v39 = *(_QWORD *)v2;
    v47 = nullBuffer.index;
    v30 = v283.index;
  }
  if ( (v39 & 0x10) != 0 )
  {
    if ( (v39 & 8) != 0 )
    {
      cOrderHintBegin(pScript, -100000);
      R_TGS_DV_FillCluster(pScript, (*((_QWORD *)v2 + 1) & 0x100000i64) != 0, (*(_QWORD *)v2 & 0x40) != 0, (*(_QWORD *)v2 & 0x10) != 0, (*(_QWORD *)v2 & 0x20) != 0, (*((_QWORD *)v2 + 1) & 0x400000000i64) != 0, nullBuffer, nullRwBuffer, triIDTexture, floatZ, &outDecalIndices, &outDecalDrawData, &outDecalDebugData, &outDecalIndirectArgs, prepassViewModelToken);
      cOrderHintEnd(pScript);
      v39 = *(_QWORD *)v2;
    }
    else
    {
      outDecalIndirectArgs.index = v47;
      outDecalDebugData.index = v47;
      outDecalDrawData.index = v47;
      outDecalIndices.index = v47;
    }
  }
  v305.index = -1;
  if ( (v39 & 1) != 0 )
  {
    cAddDependencyInNextTask(pScript, v48);
    v90 = ((pScript->sceneSize.v[1] + 7) >> 3) * ((pScript->sceneSize.v[0] + 7) & 0xFFFFFFF8);
    memset_0(&v471, 0, sizeof(v471));
    ++v471.handleArgCount;
    v471.handleArgs[0] = (unsigned int *)&v305;
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_FL_TileCreateClear.m_index, &v471, v90);
    memset_0(&v465, 0, sizeof(v465));
    v91 = g_R_TG_Def_RBT_FL_TileWrite.m_index;
    v465.handleArgs[0] = (unsigned int *)&sceneDepth;
    v92 = v465.handleArgCount + 1;
    v465.handleArgCount = v92;
    if ( (unsigned int)v92 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v92 = v465.handleArgCount;
    }
    v465.handleArgs[v92] = (unsigned int *)&v305;
    ++v465.handleArgCount;
    R_TG_AddTask(pScript, v91, &v465);
  }
  else
  {
    v305.index = cExternalResource(&v433, pScript, "default_buffer", eResourceType_Buffer, 0x100000u, 1u, 1u, 0x200u)->index;
  }
  v93 = (*((_BYTE *)v2 + 8) & 1) == 0;
  vrsSWMask.index = -1;
  v347.index = -1;
  v359.index = -1;
  v355.index = -1;
  if ( v93 )
  {
    v108 = triIDTexture.index;
    vrsSWMask.index = triIDTexture.index;
    v347.index = triIDTexture.index;
    v359.index = triIDTexture.index;
    v355.index = triIDTexture.index;
  }
  else
  {
    memset_0(&v452, 0, sizeof(v452));
    v94 = g_R_TG_Def_RBT_VRS_CreateResources.m_index;
    v452.handleArgs[0] = (unsigned int *)&vrsSWMask;
    v95 = v452.handleArgCount + 1;
    v452.handleArgCount = v95;
    if ( (unsigned int)v95 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v95 = v452.handleArgCount;
    }
    v452.handleArgs[v95] = (unsigned int *)&v347;
    v96 = v452.handleArgCount + 1;
    v452.handleArgCount = v96;
    if ( (unsigned int)v96 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v96 = v452.handleArgCount;
    }
    v452.handleArgs[v96] = (unsigned int *)&v359;
    v97 = v452.handleArgCount + 1;
    v452.handleArgCount = v97;
    if ( (unsigned int)v97 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v97 = v452.handleArgCount;
    }
    v452.handleArgs[v97] = (unsigned int *)&v355;
    v98 = v452.handleArgCount + 1;
    v452.handleArgCount = v98;
    if ( (unsigned int)v98 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v98 = v452.handleArgCount;
    }
    v452.handleArgs[v98] = (unsigned int *)&v269;
    ++v452.handleArgCount;
    R_TG_AddTask(pScript, v94, &v452);
    memset_0(&v447, 0, sizeof(v447));
    v99 = g_R_TG_Def_RBT_VRS_ResolveMask.m_index;
    v447.handleArgs[0] = (unsigned int *)&vrsSWMask;
    v100 = v447.handleArgCount + 1;
    v447.handleArgCount = v100;
    if ( (unsigned int)v100 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v100 = v447.handleArgCount;
    }
    v447.handleArgs[v100] = (unsigned int *)&v347;
    v101 = v447.handleArgCount + 1;
    v447.handleArgCount = v101;
    if ( (unsigned int)v101 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v101 = v447.handleArgCount;
    }
    v447.handleArgs[v101] = (unsigned int *)&v347;
    v102 = v447.handleArgCount + 1;
    v447.handleArgCount = v102;
    if ( (unsigned int)v102 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v102 = v447.handleArgCount;
    }
    v447.handleArgs[v102] = (unsigned int *)&v359;
    v103 = v447.handleArgCount + 1;
    v447.handleArgCount = v103;
    if ( (unsigned int)v103 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v103 = v447.handleArgCount;
    }
    v447.handleArgs[v103] = (unsigned int *)&v355;
    v104 = v447.handleArgCount + 1;
    v447.handleArgCount = v104;
    if ( (unsigned int)v104 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v104 = v447.handleArgCount;
    }
    v447.handleArgs[v104] = (unsigned int *)&velocity;
    v105 = v447.handleArgCount + 1;
    v447.handleArgCount = v105;
    if ( (unsigned int)v105 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v105 = v447.handleArgCount;
    }
    v447.handleArgs[v105] = (unsigned int *)&velocity;
    v106 = v447.handleArgCount + 1;
    v447.handleArgCount = v106;
    if ( (unsigned int)v106 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v106 = v447.handleArgCount;
    }
    v447.handleArgs[v106] = (unsigned int *)&sceneVisBuffer;
    v107 = v447.handleArgCount + 1;
    v447.handleArgCount = v107;
    if ( (unsigned int)v107 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v107 = v447.handleArgCount;
    }
    v447.handleArgs[v107] = (unsigned int *)&sceneDepth;
    ++v447.handleArgCount;
    R_TG_AddTask(pScript, v99, &v447);
    v108 = triIDTexture.index;
  }
  v109 = *(_QWORD *)v2;
  v326.index = -1;
  v292.index = -1;
  if ( (v109 & 0x2000) != 0 )
  {
    upsampledRt.index = -1;
    value.index = -1;
    if ( (v109 & 0x800) != 0 )
    {
      if ( (v109 & 0x1000) != 0 )
      {
        memset_0(&v472, 0, sizeof(v472));
        ++v472.handleArgCount;
        v472.handleArgs[0] = (unsigned int *)&upsampledRt;
        R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_SunShadow_CreateVisibilityIndirectBuffers.m_index, &v472, &value);
      }
      else
      {
        upsampledRt.index = nullBuffer.index;
        value.index = nullBuffer.index;
      }
      memset_0(&v441, 0, sizeof(v441));
      v441.handleArgs[0] = (unsigned int *)&floatZ;
      v110 = v441.handleArgCount + 1;
      v93 = (*((_BYTE *)v2 + 8) & 1) == 0;
      ++v441.handleArgCount;
      if ( v93 )
      {
        v120 = g_R_TG_Def_RBT_SunShadow_GenerateVisibilityPrepass.m_index;
        if ( (unsigned int)v110 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v110 = v441.handleArgCount;
        }
        v441.handleArgs[v110] = (unsigned int *)&v304;
        v121 = v441.handleArgCount + 1;
        v441.handleArgCount = v121;
        if ( (unsigned int)v121 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v121 = v441.handleArgCount;
        }
        v441.handleArgs[v121] = (unsigned int *)&sunshadowMin0ForViewmodel;
        v122 = v441.handleArgCount + 1;
        v441.handleArgCount = v122;
        if ( (unsigned int)v122 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v122 = v441.handleArgCount;
        }
        v441.handleArgs[v122] = (unsigned int *)&sunshadowMins;
        v123 = v441.handleArgCount + 1;
        v441.handleArgCount = v123;
        if ( (unsigned int)v123 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v123 = v441.handleArgCount;
        }
        v441.handleArgs[v123] = &v514;
        v124 = v441.handleArgCount + 1;
        v441.handleArgCount = v124;
        if ( (unsigned int)v124 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v124 = v441.handleArgCount;
        }
        v441.handleArgs[v124] = &v515;
        v125 = v441.handleArgCount + 1;
        v441.handleArgCount = v125;
        if ( (unsigned int)v125 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v125 = v441.handleArgCount;
        }
        v441.handleArgs[v125] = (unsigned int *)&v284;
        v126 = v441.handleArgCount + 1;
        v441.handleArgCount = v126;
        if ( (unsigned int)v126 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v126 = v441.handleArgCount;
        }
        v441.handleArgs[v126] = (unsigned int *)&v292;
        v127 = v441.handleArgCount + 1;
        v441.handleArgCount = v127;
        if ( (unsigned int)v127 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v127 = v441.handleArgCount;
        }
        v441.handleArgs[v127] = (unsigned int *)&upsampledRt;
        ++v441.handleArgCount;
        R_TG_AddTask<>(pScript, v120, &v441, &value);
      }
      else
      {
        v111 = g_R_TG_Def_RBT_SunShadow_GenerateVisibilityPrepassVRS.m_index;
        if ( (unsigned int)v110 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v110 = v441.handleArgCount;
        }
        v441.handleArgs[v110] = (unsigned int *)&v304;
        v112 = v441.handleArgCount + 1;
        v441.handleArgCount = v112;
        if ( (unsigned int)v112 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v112 = v441.handleArgCount;
        }
        v441.handleArgs[v112] = (unsigned int *)&sunshadowMin0ForViewmodel;
        v113 = v441.handleArgCount + 1;
        v441.handleArgCount = v113;
        if ( (unsigned int)v113 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v113 = v441.handleArgCount;
        }
        v441.handleArgs[v113] = (unsigned int *)&sunshadowMins;
        v114 = v441.handleArgCount + 1;
        v441.handleArgCount = v114;
        if ( (unsigned int)v114 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v114 = v441.handleArgCount;
        }
        v441.handleArgs[v114] = &v514;
        v115 = v441.handleArgCount + 1;
        v441.handleArgCount = v115;
        if ( (unsigned int)v115 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v115 = v441.handleArgCount;
        }
        v441.handleArgs[v115] = &v515;
        v116 = v441.handleArgCount + 1;
        v441.handleArgCount = v116;
        if ( (unsigned int)v116 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v116 = v441.handleArgCount;
        }
        v441.handleArgs[v116] = (unsigned int *)&v284;
        v117 = v441.handleArgCount + 1;
        v441.handleArgCount = v117;
        if ( (unsigned int)v117 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v117 = v441.handleArgCount;
        }
        v441.handleArgs[v117] = (unsigned int *)&v292;
        v118 = v441.handleArgCount + 1;
        v441.handleArgCount = v118;
        if ( (unsigned int)v118 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v118 = v441.handleArgCount;
        }
        v441.handleArgs[v118] = (unsigned int *)&upsampledRt;
        v119 = v441.handleArgCount + 1;
        v441.handleArgCount = v119;
        if ( (unsigned int)v119 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v119 = v441.handleArgCount;
        }
        v441.handleArgs[v119] = (unsigned int *)&value;
        ++v441.handleArgCount;
        R_TG_AddTask<>(pScript, v111, &v441, &v359);
      }
    }
    else
    {
      v292.index = nullBuffer.index;
      upsampledRt.index = nullBuffer.index;
      value.index = nullBuffer.index;
    }
    memset_0(&v443, 0, sizeof(v443));
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
    {
      v128 = g_R_TG_Def_RBT_SunShadow_GenerateVisibilityInlineResolve.m_index;
      v443.handleArgs[0] = (unsigned int *)&sunshadowCascades;
      v129 = v443.handleArgCount + 1;
      v443.handleArgCount = v129;
      if ( (unsigned int)v129 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v129 = v443.handleArgCount;
      }
      v443.handleArgs[v129] = (unsigned int *)&sunShadow1;
      v130 = v443.handleArgCount + 1;
      v443.handleArgCount = v130;
      if ( (unsigned int)v130 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v130 = v443.handleArgCount;
      }
      v443.handleArgs[v130] = (unsigned int *)&v509;
      v131 = v443.handleArgCount + 1;
      v443.handleArgCount = v131;
      if ( (unsigned int)v131 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v131 = v443.handleArgCount;
      }
      v443.handleArgs[v131] = (unsigned int *)&sunshadowCascade0ForViewmodel;
      v132 = v443.handleArgCount + 1;
      v443.handleArgCount = v132;
      if ( (unsigned int)v132 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v132 = v443.handleArgCount;
      }
      v443.handleArgs[v132] = (unsigned int *)&transSunShadow;
      v133 = v443.handleArgCount + 1;
      v443.handleArgCount = v133;
      if ( (unsigned int)v133 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v133 = v443.handleArgCount;
      }
      v443.handleArgs[v133] = (unsigned int *)&transSunShadowMask;
      v134 = v443.handleArgCount + 1;
      v443.handleArgCount = v134;
      if ( (unsigned int)v134 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v134 = v443.handleArgCount;
      }
      v443.handleArgs[v134] = (unsigned int *)&floatZ;
      v135 = v443.handleArgCount + 1;
      v443.handleArgCount = v135;
      if ( (unsigned int)v135 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v135 = v443.handleArgCount;
      }
      v443.handleArgs[v135] = (unsigned int *)&v269;
      v136 = v443.handleArgCount + 1;
      v443.handleArgCount = v136;
      if ( (unsigned int)v136 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v136 = v443.handleArgCount;
      }
      v443.handleArgs[v136] = (unsigned int *)&v326;
      v137 = v443.handleArgCount + 1;
      v443.handleArgCount = v137;
      if ( (unsigned int)v137 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v137 = v443.handleArgCount;
      }
      v443.handleArgs[v137] = (unsigned int *)&v292;
      v138 = v443.handleArgCount + 1;
      v443.handleArgCount = v138;
      if ( (unsigned int)v138 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v138 = v443.handleArgCount;
      }
      v443.handleArgs[v138] = (unsigned int *)&upsampledRt;
      ++v443.handleArgCount;
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, v128, &v443, &value, &compressedCascades, &v511, &v512, &v355);
      v108 = triIDTexture.index;
    }
    else
    {
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_SunShadow_GenerateVisibility.m_index, &v443, &sunshadowCascades, &sunShadow1, &v509, &sunshadowCascade0ForViewmodel, &transSunShadow, &transSunShadowMask, &floatZ, &v269, &v326, &v292, &upsampledRt, &value, &compressedCascades, &v511, &v512);
      v108 = triIDTexture.index;
    }
  }
  else
  {
    v292.index = nullBuffer.index;
    v326.index = v108;
  }
  v139 = *(_QWORD *)v2;
  v339.index = -1;
  if ( (v139 & 0x8000000) != 0 )
  {
    v405.index = -1;
    memset_0(&v503, 0, sizeof(v503));
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_DXR_Add.m_index, &v503, &v405);
    v408.index = -1;
    memset_0(&v504, 0, sizeof(v504));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_DXR_BuildBlas.m_index, &v504, &v405, &v408);
    v413.index = -1;
    memset_0(&v482, 0, sizeof(v482));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_DXR_BuildTlas.m_index, &v482, &v408, &v413);
    v380.index = -1;
    v409 = -1;
    memset_0(&v466, 0, sizeof(v466));
    v140 = g_R_TG_Def_RBT_DXR_SpotshadowsIndices.m_index;
    v466.handleArgs[0] = (unsigned int *)&v380;
    v141 = v466.handleArgCount + 1;
    v466.handleArgCount = v141;
    if ( (unsigned int)v141 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v141 = v466.handleArgCount;
    }
    v466.handleArgs[v141] = &v409;
    ++v466.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v140, &v466, &v305, &sceneDepth);
    v142 = 0;
    LODWORD(v143) = (pScript->sceneSize.v[1] >> 4) * (pScript->sceneSize.v[0] >> 4);
    v379.index = v409;
    v412 = 0;
    for ( i = v143; (unsigned int)v143 > 1; v412 = v142 )
    {
      v411.index = -1;
      v143 = ((unsigned __int64)(unsigned int)v143 + 511) >> 9;
      i = v143;
      cRBT_DXR_SpotshadowsSumLightCount<R_TG_Handle,unsigned int,R_TG_Handle,R_TG_Handle,unsigned int>(pScript, &v411, &i, &v379, &sceneDepth, &v412);
      ++v142;
      v379.index = v411.index;
    }
    v144 = *(_DWORD *)v2;
    v414 = -1;
    v415 = -1;
    v145 = ((v144 & 0x10000000) != 0i64) + 1;
    memset_0(&v446, 0, sizeof(v446));
    v146 = g_R_TG_Def_RBT_DXR_SpotshadowsVisibility.m_index;
    v446.handleArgs[0] = (unsigned int *)&v414;
    if ( ++v446.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v446.paramArgs[v446.paramArgCount++] = v145;
    if ( v446.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v446.handleArgs[v446.handleArgCount] = (unsigned int *)&v415;
    v147 = v446.handleArgCount + 1;
    v446.handleArgCount = v147;
    if ( (unsigned int)v147 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v147 = v446.handleArgCount;
    }
    v446.handleArgs[v147] = (unsigned int *)&sceneDepth;
    v148 = v446.handleArgCount + 1;
    v446.handleArgCount = v148;
    if ( (unsigned int)v148 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v148 = v446.handleArgCount;
    }
    v446.handleArgs[v148] = (unsigned int *)&v269;
    v149 = v446.handleArgCount + 1;
    v446.handleArgCount = v149;
    if ( (unsigned int)v149 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v149 = v446.handleArgCount;
    }
    v446.handleArgs[v149] = (unsigned int *)&velocity;
    v150 = v446.handleArgCount + 1;
    v446.handleArgCount = v150;
    if ( (unsigned int)v150 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v150 = v446.handleArgCount;
    }
    v446.handleArgs[v150] = (unsigned int *)&velocity;
    v151 = v446.handleArgCount + 1;
    v446.handleArgCount = v151;
    if ( (unsigned int)v151 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v151 = v446.handleArgCount;
    }
    v446.handleArgs[v151] = (unsigned int *)&v270;
    v152 = v446.handleArgCount + 1;
    v446.handleArgCount = v152;
    if ( (unsigned int)v152 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v152 = v446.handleArgCount;
    }
    v446.handleArgs[v152] = (unsigned int *)&v305;
    v153 = v446.handleArgCount + 1;
    v446.handleArgCount = v153;
    if ( (unsigned int)v153 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v153 = v446.handleArgCount;
    }
    v446.handleArgs[v153] = (unsigned int *)&v380;
    ++v446.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v146, &v446, &v379, &v413);
    v391.index = -1;
    v390.index = -1;
    memset_0(&v453, 0, sizeof(v453));
    v154 = g_R_TG_Def_RBT_DXR_SpotshadowsTemporalDenoiser.m_index;
    v453.handleArgs[0] = (unsigned int *)&v391;
    v155 = v453.handleArgCount + 1;
    v453.handleArgCount = v155;
    if ( (unsigned int)v155 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v155 = v453.handleArgCount;
    }
    v453.handleArgs[v155] = (unsigned int *)&v390;
    v156 = v453.handleArgCount + 1;
    v453.handleArgCount = v156;
    if ( (unsigned int)v156 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v156 = v453.handleArgCount;
    }
    v453.handleArgs[v156] = (unsigned int *)&v414;
    v157 = v453.handleArgCount + 1;
    v453.handleArgCount = v157;
    if ( (unsigned int)v157 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v157 = v453.handleArgCount;
    }
    v453.handleArgs[v157] = (unsigned int *)&v415;
    v158 = v453.handleArgCount + 1;
    v453.handleArgCount = v158;
    if ( (unsigned int)v158 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v158 = v453.handleArgCount;
    }
    v453.handleArgs[v158] = (unsigned int *)&sceneDepth;
    ++v453.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v154, &v453, &velocity, &velocity);
    cRBT_DXR_SpotshadowsSpatialDenoiser<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v339, &v391, &v390, &v380, &floatZ, &v269);
    v139 = *(_QWORD *)v2;
    v108 = triIDTexture.index;
  }
  else
  {
    v339.index = v108;
  }
  v301.index = -1;
  if ( (v139 & 0x60000000) == 0 )
    goto LABEL_512;
  v275.index = -1;
  if ( (v139 & 0x40000000) != 0 )
  {
    memset_0(&v463, 0, sizeof(v463));
    ++v463.handleArgCount;
    v93 = (*((_BYTE *)v2 + 8) & 1) == 0;
    v159 = g_R_TG_Def_RBT_MDAO_DrawVolumeOccludersInlineResolve.m_index;
    v463.handleArgs[0] = (unsigned int *)&floatZ;
    if ( v93 )
      v159 = g_R_TG_Def_RBT_MDAO_DrawVolumeOccluders.m_index;
    R_TG_AddTask<R_TG_Handle>(pScript, v159, &v463, &v269, &v275);
    v351.index = -1;
    v381.index = -1;
    memset_0(&v483, 0, sizeof(v483));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_MDAO_ComputeTileBoundingBoxes.m_index, &v483, &floatZ, &v351);
    memset_0(&v484, 0, sizeof(v484));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_MDAO_CullOccluders.m_index, &v484, &v351, &v381);
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
      cRBT_MDAO_ComputeOcclusionInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v351, &v381, &floatZ, &v269, &v275);
    else
      cRBT_MDAO_ComputeOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v351, &v381, &floatZ, &v269, &v275);
    v139 = *(_QWORD *)v2;
    v108 = v275.index;
  }
  else
  {
    v275.index = v108;
  }
  if ( (v139 & 0x20000000) != 0 )
  {
    cAsyncBegin(pScript);
    v384.index = -1;
    v392.index = -1;
    v393.index = -1;
    memset_0(&v473, 0, sizeof(v473));
    ++v473.handleArgCount;
    v473.handleArgs[0] = (unsigned int *)&v392;
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSAO_GenerateAOPrepass.m_index, &v473, &v304, &v338);
    memset_0(&v485, 0, sizeof(v485));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSAO_FilterAOPrepassHorizontal.m_index, &v485, &v393, &v392);
    memset_0(&v486, 0, sizeof(v486));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSAO_FilterAOPrepassVertical.m_index, &v486, &v384, &v393);
    memset_0(&v445, 0, sizeof(v445));
    v445.handleArgs[0] = (unsigned int *)&v301;
    v160 = v445.handleArgCount + 1;
    v93 = (*((_BYTE *)v2 + 8) & 1) == 0;
    ++v445.handleArgCount;
    if ( v93 )
    {
      v161 = g_R_TG_Def_RBT_SSAO_GenerateAO.m_index;
      if ( (unsigned int)v160 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v160 = v445.handleArgCount;
      }
      v445.handleArgs[v160] = (unsigned int *)&floatZ;
      v165 = v445.handleArgCount + 1;
      v445.handleArgCount = v165;
      if ( (unsigned int)v165 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v165 = v445.handleArgCount;
      }
      v445.handleArgs[v165] = (unsigned int *)&velocity;
      v166 = v445.handleArgCount + 1;
      v445.handleArgCount = v166;
      if ( (unsigned int)v166 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v166 = v445.handleArgCount;
      }
      v445.handleArgs[v166] = (unsigned int *)&velocity;
      v167 = v445.handleArgCount + 1;
      v445.handleArgCount = v167;
      if ( (unsigned int)v167 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v167 = v445.handleArgCount;
      }
      v445.handleArgs[v167] = (unsigned int *)&v269;
    }
    else
    {
      v161 = g_R_TG_Def_RBT_SSAO_GenerateAOInlineResolve.m_index;
      if ( (unsigned int)v160 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v160 = v445.handleArgCount;
      }
      v445.handleArgs[v160] = (unsigned int *)&floatZ;
      v162 = v445.handleArgCount + 1;
      v445.handleArgCount = v162;
      if ( (unsigned int)v162 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v162 = v445.handleArgCount;
      }
      v445.handleArgs[v162] = (unsigned int *)&velocity;
      v163 = v445.handleArgCount + 1;
      v445.handleArgCount = v163;
      if ( (unsigned int)v163 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v163 = v445.handleArgCount;
      }
      v445.handleArgs[v163] = (unsigned int *)&velocity;
      v164 = v445.handleArgCount + 1;
      v445.handleArgCount = v164;
      if ( (unsigned int)v164 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v164 = v445.handleArgCount;
      }
      v445.handleArgs[v164] = (unsigned int *)&v269;
    }
    ++v445.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v161, &v445, &v275, &v384);
    cAsyncEnd(pScript);
  }
  else
  {
LABEL_512:
    v301.index = v108;
  }
  lightsCluster.index = -1;
  cAddDependencyInNextTask(pScript, v48);
  v168 = v30 * v31;
  v432 = (v30 * v31) << 8;
  memset_0(&v487, 0, sizeof(v487));
  R_TG_AddTask<unsigned int>(pScript, g_R_TG_Def_RBT_FL_ClusterCreateClear.m_index, &v487, &lightsCluster, &v432);
  memset_0(&v488, 0, sizeof(v488));
  R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_FL_ClusterWrite.m_index, &v488, &lightsCluster);
  v169 = *(_QWORD *)v2;
  outCreateRt.index = -1;
  if ( (v169 & 0x4200000000i64) != 0 || (v169 & 0x300000000000i64) != 0 )
    R_TGS_DistortionCreateRt(pScript, *((_BYTE *)v2 + 8) & 1, sceneDepth, &outCreateRt, 1);
  else
    outCreateRt.index = triIDTexture.index;
  v395.index = -1;
  memset_0(&v489, 0, sizeof(v489));
  R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_MayhemSelfVis_UpdateAnimBuffer.m_index, &v489, &v395);
  v170 = 258;
  sceneColor.index = -1;
  v394 = 258;
  memset_0(&v479, 0, sizeof(v479));
  v171 = g_R_TG_Def_Util_CreateSceneColorVRS.m_index;
  if ( (*((_BYTE *)v2 + 8) & 1) == 0 )
    v171 = g_R_TG_Def_Util_CreateSceneColor.m_index;
  R_TG_AddTask<unsigned int>(pScript, v171, &v479, &sceneColor, &v394);
  scope.index = -1;
  if ( (*(_QWORD *)v2 & 0x2000000000000i64) != 0 )
  {
    R_Lens_GetScopeRtSize(pScript->sceneSize.v[0], pScript->sceneSize.v[1], &width, &height);
    cAddDependencyInNextTask(pScript, srcTask);
    memset_0(&v490, 0, sizeof(v490));
    R_TG_AddTask<unsigned int,unsigned int>(pScript, g_R_TG_Def_RBT_Lens_ScopeDistortion.m_index, &v490, &scope, &width, &height);
    memset_0(&v491, 0, sizeof(v491));
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_Lens_ForceReadBuffer.m_index, &v491, &scope);
    v172 = triIDTexture.index;
  }
  else
  {
    v172 = triIDTexture.index;
    scope.index = triIDTexture.index;
  }
  v173 = (*(_QWORD *)v2 >> 44) & 3i64;
  v325.index = -1;
  if ( v173 == 2 )
  {
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
      cRBT_SSR_DeferredTraceLQInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v325, &floatZ, &v269, &ssrMask, &scope);
    else
      cRBT_SSR_DeferredTraceLQ<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v325, &floatZ, &v269, &ssrMask, &scope);
  }
  else if ( v173 == 3 )
  {
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
      cRBT_SSR_DeferredTraceHQInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v325, &floatZ, &v269, &ssrMask, &scope);
    else
      cRBT_SSR_DeferredTraceHQ<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v325, &floatZ, &v269, &ssrMask, &scope);
  }
  else
  {
    v325.index = v172;
  }
  v322.index = nullRwBuffer.index;
  v396.index = -1;
  memset_0(&v492, 0, sizeof(v492));
  R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_Util_KickoffToken.m_index, &v492, &sceneColor, &v396);
  syncToken.index = -1;
  cRBT_DrawOpaque<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &v305, &lightsCluster, &reflectionGrid, &lightGridVol, &lightGridVolHighBands, &floatZ, &v301, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &outDecalIndices, &outDecalDrawData, &v326, &staleCache, &v339, &outCreateRt, &v325, &vrsHWMask, &v322, &scope, &v395, &syncToken, &v284, &v292);
  volScattering.index = -1;
  volExtinction.index = -1;
  v349.index = -1;
  v356.index = -1;
  volVisibility.index = -1;
  v318.index = -1;
  v346.index = -1;
  if ( (*(_QWORD *)v2 & 0x20000000000i64) != 0 )
  {
    cAsyncBegin(pScript);
    v315.index = -1;
    v399.index = -1;
    cRBT_VOL_MaxFloatZ<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,unsigned int,unsigned int,R_TG_Handle>(pScript, &volVisibility, &v318, &v315, &v399, &floatZ, &v366, &v365, &v388, &v385, &v396);
    v174 = *(_QWORD *)v2;
    v353.index = -1;
    if ( (v174 & 0x40000000000i64) != 0 )
    {
      v382.index = -1;
      if ( (v174 & 0x80000000004i64) == 0x80000000004i64 )
      {
        v398.index = -1;
        v397.index = -1;
        v437 = 165 * v168;
        v436 = 5 * ((unsigned int)(v168 << 7) >> 2);
        memset_0(&v458, 0, sizeof(v458));
        R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,R_TG_Handle>(pScript, g_R_TG_Def_RBT_VOL_SampleAmbientMultiLightGrid.m_index, &v458, &v318, &floatZ, &v398, &v397, &v382, &v437, &v436, &prepassViewModelToken);
        memset_0(&v493, 0, sizeof(v493));
        R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int>(pScript, g_R_TG_Def_RBT_VOL_CombineAmbientMultiLightGrid.m_index, &v493, &v353, &v318, &v318, &floatZ, &v346, &v398, &v397, &v388, &v385);
      }
      else
      {
        memset_0(&v458, 0, sizeof(v458));
        v175 = g_R_TG_Def_RBT_VOL_SampleAmbient.m_index;
        v458.handleArgs[0] = (unsigned int *)&v353;
        v176 = v458.handleArgCount + 1;
        v458.handleArgCount = v176;
        if ( (unsigned int)v176 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v176 = v458.handleArgCount;
        }
        v458.handleArgs[v176] = (unsigned int *)&v382;
        ++v458.handleArgCount;
        R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,R_TG_Handle>(pScript, v175, &v458, &v399, &floatZ, &v318, &v318, &v346, &v388, &v385, &prepassViewModelToken);
      }
    }
    else
    {
      v353.index = triIDTexture.index;
      v346.index = triIDTexture.index;
    }
    v177 = v30 * v31;
    v420 = v177 << 8;
    v419 = 32 * v177;
    memset_0(&v494, 0, sizeof(v494));
    R_TG_AddTask<R_TG_Handle,unsigned int,unsigned int,R_TG_Handle>(pScript, g_R_TG_Def_RBT_VOL_WriteClusterBuffer.m_index, &v494, &v349, &v356, &v420, &v419, &shadowAsyncToken);
    v421 = v177 << 7;
    v424 = -1;
    v354.index = -1;
    v364.index = -1;
    v343.index = -1;
    memset_0(&v495, 0, sizeof(v495));
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_VOL_ClearIndirectScattering.m_index, &v495, &v364);
    memset_0(&v460, 0, sizeof(v460));
    v178 = g_R_TG_Def_RBT_VOL_FillIndirectScattering.m_index;
    v460.handleArgs[0] = (unsigned int *)&v318;
    v179 = v460.handleArgCount + 1;
    v460.handleArgCount = v179;
    if ( (unsigned int)v179 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v179 = v460.handleArgCount;
    }
    v460.handleArgs[v179] = (unsigned int *)&v349;
    ++v460.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int>(pScript, v178, &v460, &v356, &lightsCluster, &v364, &v343, &v421);
    v422 = v287.index >> 1;
    v423 = v308.index >> 1;
    v368.index = -1;
    v367.index = -1;
    cRBT_VOL_CreateResourcesScattering<R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,unsigned int,unsigned int>(pScript, &v368, &v367, &v354, &v366, &v365, &v423, &v422);
    v180 = 0;
    v283.index = 0;
    do
    {
      cRBT_VOL_Scattering<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,int>(pScript, &v315, &v353, &v349, &v356, &lightsCluster, &v368, &v367, &v354, &v354, &sunshadowCascades, &sunShadow1, &transSunShadow, &transSunShadowMask, &staleCache, &v364, &v343, &volVisibility, (const int *)&v283);
      v283.index = ++v180;
    }
    while ( v180 < 4 );
    memset_0(&v474, 0, sizeof(v474));
    ++v474.handleArgCount;
    v474.handleArgs[0] = (unsigned int *)&v424;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int>(pScript, g_R_TG_Def_RBT_VOL_Accumulate.m_index, &v474, &v354, &volVisibility, &volVisibility, &volScattering, &volExtinction, &v368, &v367, &v366, &v365);
    cAsyncEnd(pScript);
  }
  else
  {
    volVisibility.index = triIDTexture.index;
    v346.index = triIDTexture.index;
    v356.index = triIDTexture.index;
    v349.index = triIDTexture.index;
    volExtinction.index = triIDTexture.index;
    volScattering.index = triIDTexture.index;
  }
  v181 = *(_QWORD *)v2;
  v289.index = -1;
  if ( (v181 & 0x80000000) != 0 )
  {
    memset_0(&v496, 0, sizeof(v496));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_WaveWaterFloatZ_CreateClear.m_index, &v496, &v289, &floatZ);
  }
  else
  {
    v289.index = v341.index;
  }
  memset_0(&v497, 0, sizeof(v497));
  R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawDecal.m_index, &v497, &sceneColor, &sceneDepth, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &vrsHWMask, &v322, &scope, &v289);
  v182 = *(_QWORD *)v2;
  if ( (*(_QWORD *)v2 & 0x800000000000i64) != 0 )
  {
    v183 = *((_QWORD *)v2 + 1);
    v357.index = -1;
    if ( (v183 & 0x200000) == 0 || (v93 = (v183 & 1) == 0, v184 = 2304, !v93) )
      v184 = 256;
    v425 = v184;
    memset_0(&v498, 0, sizeof(v498));
    R_TG_AddTask<unsigned int>(pScript, g_R_TG_Def_Util_CreateSSSColor.m_index, &v498, &v357, &v425);
    v185 = *((_QWORD *)v2 + 1);
    v273.index = -1;
    v295.index = -1;
    if ( (v185 & 0x200000) != 0 && (v185 & 1) == 0 )
      v170 = 2306;
    v426 = v170;
    memset_0(&v499, 0, sizeof(v499));
    R_TG_AddTask<R_TG_Handle,unsigned int>(pScript, g_R_TG_Def_Util_CreateSceneLightingSSS.m_index, &v499, &v273, &v295, &v426);
    if ( (v170 & 0x800) == 0 )
    {
      cRBT_SSS_AsyncClear<R_TG_Handle>(pScript, &v273);
      cRBT_SSS_AsyncClear<R_TG_Handle>(pScript, &v295);
    }
    memset_0(&v478, 0, sizeof(v478));
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
    {
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawOpaqueSSS_VRS.m_index, &v478, &sceneColor, &sceneDepth, &v305, &reflectionGrid, &lightGridVol, &floatZ, &v301, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v326, &v339, &outDecalDrawData, &lightGridVolHighBands, &vrsHWMask, &v322, &scope, &v292, &v357, &v273, &outCreateRt);
      cRBT_SSS_BlurX_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneDepth, &v273, &floatZ, &v295);
    }
    else
    {
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawOpaqueSSS.m_index, &v478, &sceneColor, &v357, &v273, &sceneDepth, &v305, &reflectionGrid, &lightGridVol, &floatZ, &v301, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v326, &v339, &outDecalDrawData, &lightGridVolHighBands, &vrsHWMask, &v322, &scope, &v292, &outCreateRt);
      cRBT_SSS_BlurX<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v295, &sceneDepth, &v273, &floatZ);
    }
    memset_0(&v455, 0, sizeof(v455));
    v186 = g_R_TG_Def_RBT_SSS_BlurY.m_index;
    v455.handleArgs[0] = (unsigned int *)&sceneColor;
    v187 = v455.handleArgCount + 1;
    v455.handleArgCount = v187;
    if ( (unsigned int)v187 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v187 = v455.handleArgCount;
    }
    v455.handleArgs[v187] = (unsigned int *)&sceneDepth;
    v188 = v455.handleArgCount + 1;
    v455.handleArgCount = v188;
    if ( (unsigned int)v188 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v188 = v455.handleArgCount;
    }
    v455.handleArgs[v188] = (unsigned int *)&v357;
    v189 = v455.handleArgCount + 1;
    v455.handleArgCount = v189;
    if ( (unsigned int)v189 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v189 = v455.handleArgCount;
    }
    v455.handleArgs[v189] = (unsigned int *)&v273;
    ++v455.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v186, &v455, &v295, &floatZ, &scope);
    v182 = *(_QWORD *)v2;
  }
  v403.index = -1;
  v327.index = -1;
  if ( (v182 & 0x1000000000000000i64) != 0 )
  {
    memset_0(&v477, 0, sizeof(v477));
    v190 = g_R_TG_Def_Util_CreatePostOpaqueLumaVRS.m_index;
    if ( (*((_BYTE *)v2 + 8) & 1) == 0 )
      v190 = g_R_TG_Def_Util_CreatePostOpaqueLuma.m_index;
    R_TG_AddTask<R_TG_Handle>(pScript, v190, &v477, &v327, &sceneColor);
    memset_0(&v448, 0, sizeof(v448));
    v191 = g_R_TG_Def_RBT_PostOpaqueProcessesLuma.m_index;
    v448.handleArgs[0] = (unsigned int *)&sceneColor;
    v192 = v448.handleArgCount + 1;
    v448.handleArgCount = v192;
    if ( (unsigned int)v192 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v192 = v448.handleArgCount;
    }
    v448.handleArgs[v192] = (unsigned int *)&vrsSWMask;
    v193 = v448.handleArgCount + 1;
    v448.handleArgCount = v193;
    if ( (unsigned int)v193 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v193 = v448.handleArgCount;
    }
    v448.handleArgs[v193] = (unsigned int *)&v327;
    v194 = v448.handleArgCount + 1;
    v448.handleArgCount = v194;
    if ( (unsigned int)v194 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v194 = v448.handleArgCount;
    }
    v448.handleArgs[v194] = (unsigned int *)&floatZ;
    v195 = v448.handleArgCount + 1;
    v448.handleArgCount = v195;
    if ( (unsigned int)v195 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v195 = v448.handleArgCount;
    }
    v448.handleArgs[v195] = (unsigned int *)&volScattering;
LABEL_611:
    ++v448.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v191, &v448, &volExtinction, &scope, &v403);
    goto LABEL_612;
  }
  if ( floatZ.index != triIDTexture.index )
  {
    v327.index = v341.index;
    memset_0(&v448, 0, sizeof(v448));
    v191 = g_R_TG_Def_RBT_PostOpaqueProcesses.m_index;
    v448.handleArgs[0] = (unsigned int *)&sceneColor;
    v196 = v448.handleArgCount + 1;
    v448.handleArgCount = v196;
    if ( (unsigned int)v196 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v196 = v448.handleArgCount;
    }
    v448.handleArgs[v196] = (unsigned int *)&vrsSWMask;
    v197 = v448.handleArgCount + 1;
    v448.handleArgCount = v197;
    if ( (unsigned int)v197 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v197 = v448.handleArgCount;
    }
    v448.handleArgs[v197] = (unsigned int *)&floatZ;
    v198 = v448.handleArgCount + 1;
    v448.handleArgCount = v198;
    if ( (unsigned int)v198 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v198 = v448.handleArgCount;
    }
    v448.handleArgs[v198] = (unsigned int *)&volScattering;
    goto LABEL_611;
  }
LABEL_612:
  v199 = *(_QWORD *)v2;
  v321.index = -1;
  if ( (v199 & 0x400000000000i64) == 0 )
    goto LABEL_617;
  v200 = (v199 >> 44) & 3;
  if ( v200 == 2 )
  {
    memset_0(&v476, 0, sizeof(v476));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSR_DeferredWaterTrace_CreateRT_LQ.m_index, &v476, &v321, &floatZ);
    goto LABEL_618;
  }
  if ( v200 == 3 )
  {
    memset_0(&v476, 0, sizeof(v476));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSR_DeferredWaterTrace_CreateRT_HQ.m_index, &v476, &v321, &floatZ);
  }
  else
  {
LABEL_617:
    v321.index = v341.index;
  }
LABEL_618:
  if ( (*(_QWORD *)v2 & 0x100000000i64) != 0 )
  {
    v427 = DRAWLIST_LIT_TRANS;
    cRBT_DrawTrans<enum GfxDrawListType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v427, &sceneColor, &sceneDepth, &v289, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &triIDTexture, &sunshadowCascade0ForViewmodel, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &v321, &vrsHWMask, &v322, &scope);
    outputRt.index = outCreateRt.index;
    if ( (*(_QWORD *)v2 & 0x200000000i64) != 0 )
      R_TGS_DistortSceneColor(pScript, &outputRt, sceneColor, vrsSWMask, R_PostLitResolve0_Active, 0x51u, *((_BYTE *)v2 + 8) & 1);
    else
      outputRt.index = triIDTexture.index;
    v383 = DRAWLIST_LIT_TRANS1;
    cRBT_DrawTrans<enum GfxDrawListType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v383, &sceneColor, &sceneDepth, &v289, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &outputRt, &sunshadowCascade0ForViewmodel, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &v321, &vrsHWMask, &v322, &scope);
  }
  if ( (*(_QWORD *)v2 & 0x400000000000i64) != 0 && ((*(_QWORD *)v2 >> 44) & 3ui64) - 2 <= 1 )
    cRBT_SSR_DeferredWaterTrace<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v321, &floatZ, &v289, &scope);
  else
    v321.index = triIDTexture.index;
  v344.index = -1;
  memset_0(&v500, 0, sizeof(v500));
  R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawOcclusionQueries.m_index, &v500, &sceneDepth, &v344);
  v201 = *(_QWORD *)v2;
  if ( (*(_QWORD *)v2 & 0x8000000000i64) != 0 )
  {
    memset_0(&v501, 0, sizeof(v501));
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawSun.m_index, &v501, &sceneColor, &sceneDepth, &v344);
    memset_0(&v502, 0, sizeof(v502));
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawSunPost.m_index, &v502, &sceneColor, &sceneDepth, &v344);
    v201 = *(_QWORD *)v2;
  }
  v202 = *((_QWORD *)v2 + 1);
  outColor.index = -1;
  outSH.index = -1;
  outFog.index = -1;
  inoutFullresAlpha.index = -1;
  v374.index = -1;
  if ( (v202 & 0x4000000000i64) != 0 )
  {
    v272[0] = GFX_RENDERTARGET_FORMAT_OVERDRAW_OVERLAY;
    cUtil_CreateRelativeAndClear<R_TG_Handle,R_TG_Handle,enum GfxRenderTargetFormat>(pScript, &v374, &sceneDepth, v272);
    memset_0(&v451, 0, sizeof(v451));
    v203 = g_R_TG_Def_RBTD_DrawEmissiveOverdraw.m_index;
    v451.paramArgs[v451.paramArgCount++] = 3;
    if ( v451.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v451.handleArgs[v451.handleArgCount] = (unsigned int *)&v374;
    v204 = v451.handleArgCount + 1;
    v451.handleArgCount = v204;
    if ( (unsigned int)v204 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v204 = v451.handleArgCount;
    }
    v451.handleArgs[v204] = (unsigned int *)&sceneDepth;
    v205 = v451.handleArgCount + 1;
    v451.handleArgCount = v205;
    if ( (unsigned int)v205 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v205 = v451.handleArgCount;
    }
    v451.handleArgs[v205] = (unsigned int *)&v289;
    v206 = v451.handleArgCount + 1;
    v451.handleArgCount = v206;
    if ( (unsigned int)v206 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v206 = v451.handleArgCount;
    }
    v451.handleArgs[v206] = (unsigned int *)&sceneIndices;
    ++v451.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v203, &v451, &sceneIndirectArgs, &scenePerSurfData, &floatZ);
    inoutFullresAlpha.index = triIDTexture.index;
  }
  else if ( (v201 & 0x1000000000i64) != 0 )
  {
    if ( (v201 & 0x400000000i64) != 0 )
    {
      R_TGS_EffectLighting(pScript, (v201 & 2) != 0, (v201 & 0x800000004i64) == 0x800000004i64, lightsCluster, sunshadowCascades, sunShadow1, transSunShadow, transSunShadowMask, triIDTexture, nullBuffer, reflectionGrid, staleCache, volScattering, volExtinction, volVisibility, &outColor, &outSH, &outFog, syncToken);
      v202 = *((_QWORD *)v2 + 1);
    }
    else
    {
      outFog.index = triIDTexture.index;
      outSH.index = triIDTexture.index;
      outColor.index = triIDTexture.index;
    }
    v272[0] = GFX_RENDERTARGET_FORMAT_SCENEBUFFER_ALPHA;
    if ( (v202 & 1) != 0 )
    {
      memset_0(&v451, 0, sizeof(v451));
      R_TG_AddTask<R_TG_Handle,enum GfxRenderTargetFormat>(pScript, g_R_TG_Def_Util_CreateRelativeAndClearVRS.m_index, &v451, &inoutFullresAlpha, &sceneDepth, v272);
    }
    else
    {
      cUtil_CreateRelativeAndClear<R_TG_Handle,R_TG_Handle,enum GfxRenderTargetFormat>(pScript, &inoutFullresAlpha, &sceneDepth, v272);
    }
    if ( (*((_BYTE *)v2 + 8) & 2) != 0 )
    {
      halfresColor.index = -1;
      halfresAlpha.index = -1;
      v331.index = -1;
      memset_0(&v475, 0, sizeof(v475));
      R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_Util_CreateRelativeColorAlpha4xMS.m_index, &v475, &halfresColor, &halfresAlpha, &sceneDepth);
      cClearColorTargetsInNextTask(pScript);
      v331.index = v370;
      SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
      cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleMipForExposureCalculation, &halfresColor, &halfresAlpha, &v331, &v289, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v270, &reflectionGrid);
      R_TG_Resolve_Upsample4xMS(pScript, &sceneColor, &inoutFullresAlpha, halfresColor, halfresAlpha, 0x57u);
    }
    else if ( (*(_QWORD *)v2 & 0x2000000000i64) != 0 )
    {
      halfresColor.index = -1;
      v331.index = -1;
      halfresAlpha.index = -1;
      memset_0(&v475, 0, sizeof(v475));
      R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_HalfRes_DownsampleDepth.m_index, &v475, &halfresColor, &sceneDepth);
      memset_0(&v480, 0, sizeof(v480));
      R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_Util_CreateHalfRelativeColorAlpha.m_index, &v480, &v331, &halfresAlpha, &sceneColor);
      SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
      cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleMipForExposureCalculation, &v331, &halfresAlpha, &halfresColor, &v289, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v270, &reflectionGrid);
      cRBT_HalfRes_Upsample<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &inoutFullresAlpha, &v331, &halfresAlpha, &halfresColor, &sceneDepth);
    }
    else
    {
      SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
      cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleMipForExposureCalculation, &sceneColor, &inoutFullresAlpha, &sceneDepth, &v289, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v270, &reflectionGrid);
    }
    v308.index = outCreateRt.index;
    if ( (*(_QWORD *)v2 & 0x4000000000i64) != 0 )
      R_TGS_DistortSceneColor(pScript, &v308, sceneColor, vrsSWMask, R_PostLitResolve1_Active, 0x59u, *((_BYTE *)v2 + 8) & 1);
    else
      v308.index = triIDTexture.index;
    SceneDownsampleVeilMipCount = EMISSIVE_PASS_DISTORT_EMISSIVE;
    cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleVeilMipCount, &sceneColor, &inoutFullresAlpha, &sceneDepth, &v289, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &v308, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v270, &reflectionGrid);
  }
  else
  {
    inoutFullresAlpha.index = triIDTexture.index;
    if ( (v201 & 0x300000000000i64) != 0 )
      R_TGS_DistortSceneColor(pScript, &outCreateRt, sceneColor, vrsSWMask, R_PostLitResolve1_Active, 0x59u, v202 & 1);
  }
  if ( (*(_QWORD *)v2 & 0x100000000i64) != 0 )
  {
    v313 = DRAWLIST_DEPTH_HACK_TRANS;
    cRBT_DrawTrans<enum GfxDrawListType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v313, &sceneColor, &sceneDepth, &v341, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &outCreateRt, &sunshadowCascade0ForViewmodel, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &triIDTexture, &vrsHWMask, &v322, &scope);
  }
  v207 = *((_QWORD *)v2 + 1);
  if ( (v207 & 0x800000) != 0 )
  {
    cRBT_End3D<R_TG_Handle>(pScript, &sceneColor);
    memset_0(&v480, 0, sizeof(v480));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBTD_ReflectionProbeGenerate_CaptureScene.m_index, &v480, &sceneColor, &sceneDepth);
    return;
  }
  v375.index = -1;
  if ( (v207 & 0x4000000) != 0 )
  {
    if ( (v207 & 1) != 0 )
    {
      memset_0(&v481, 0, sizeof(v481));
      v208 = g_R_TG_Def_RBTD_DrawPrimitives_Offscreen_VRS.m_index;
    }
    else
    {
      memset_0(&v481, 0, sizeof(v481));
      v208 = g_R_TG_Def_RBTD_DrawPrimitives_Offscreen.m_index;
    }
    R_TG_AddTask<R_TG_Handle>(pScript, v208, &v481, &v375, &sceneDepth);
  }
  if ( (*((_QWORD *)v2 + 1) & 0x40000000000i64) != 0 )
    cRBTD_DrawDebug3D<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &lightGridVol, &lightGridVolHighBands, &umbraOcclusionTexture);
  v314.index = -1;
  v360.index = -1;
  memset_0(&v505, 0, sizeof(v505));
  R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_UniversalClut.m_index, &v505, &v314, &v360);
  v209 = *(_QWORD *)v2;
  v303.index = -1;
  if ( (v209 & 0x2000000000000000i64) != 0 )
  {
    memset_0(&v506, 0, sizeof(v506));
    v303.index = R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_Draw2D_BeforePostFX.m_index, &v506, &sceneColor, &sceneDepth, &v314);
    v209 = *(_QWORD *)v2;
  }
  if ( (v209 & 0x10000000000i64) != 0 )
  {
    v93 = (*((_BYTE *)v2 + 8) & 1) == 0;
    v358.index = -1;
    if ( v93 )
    {
      cRBT_Flare_CalculateOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &inoutFullresAlpha, &volScattering, &volExtinction, &volVisibility, &scope, &v358, &v344);
    }
    else
    {
      memset_0(&v454, 0, sizeof(v454));
      v210 = g_R_TG_Def_RBT_Flare_CalculateOcclusionInlineResolve.m_index;
      v454.handleArgs[0] = (unsigned int *)&inoutFullresAlpha;
      v211 = v454.handleArgCount + 1;
      v454.handleArgCount = v211;
      if ( (unsigned int)v211 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v211 = v454.handleArgCount;
      }
      v454.handleArgs[v211] = (unsigned int *)&volScattering;
      v212 = v454.handleArgCount + 1;
      v454.handleArgCount = v212;
      if ( (unsigned int)v212 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v212 = v454.handleArgCount;
      }
      v454.handleArgs[v212] = (unsigned int *)&volExtinction;
      v213 = v454.handleArgCount + 1;
      v454.handleArgCount = v213;
      if ( (unsigned int)v213 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v213 = v454.handleArgCount;
      }
      v454.handleArgs[v213] = (unsigned int *)&volVisibility;
      ++v454.handleArgCount;
      R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v210, &v454, &scope, &v358, &v344);
    }
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
      cRBT_Flare_Draw_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &v358);
    else
      cRBT_Flare_Draw<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &v358);
  }
  v214 = *((_QWORD *)v2 + 1);
  if ( (v214 & 0x10000000) != 0 )
  {
    v215 = pScript;
    if ( (v214 & 0x40000000) != 0 )
    {
      v316[0] = GFX_RENDERTARGET_FORMAT_SCENEBUFFER;
      cUtil_CreateRelativeAndClear<R_TG_Handle,R_TG_Handle,enum GfxRenderTargetFormat>(pScript, &v330, &sceneColor, v316);
      p_sceneColor = &v330;
      v215 = pScript;
    }
    else
    {
      p_sceneColor = &sceneColor;
    }
    v261 = GFX_GP_PASS_CAMERA;
    cRBTD_ShowTris<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,enum GFX_GP_PASS>(v215, p_sceneColor, &sceneDepth, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v261);
  }
  v217 = *(_QWORD *)v2;
  v328.index = -1;
  v345.index = -1;
  if ( v217 >= 0 )
  {
    v328.index = triIDTexture.index;
    v345.index = triIDTexture.index;
  }
  else
  {
    srcTask = -1;
    cRBT_HudOutlineGenWorkgroups<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, (const R_TG_Handle *)&srcTask, &sceneColor, &v284, &floatZ, &v304);
    v287.index = -1;
    cRBT_HudOutlineWorkgroupsArgs<R_TG_Handle,R_TG_Handle>(pScript, &v287, (const R_TG_Handle *)&srcTask);
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
      cRBT_ApplyHudOutlineCSVrsInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v328, &v345, &sceneEntityIDVelocity, &v270, &v269, (const R_TG_Handle *)&srcTask, &v287, &floatZ);
    else
      cRBT_ApplyHudOutlineCS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v328, &v345, &sceneEntityIDVelocity, &v270, &v269, (const R_TG_Handle *)&srcTask, &v287, &floatZ);
    v217 = *(_QWORD *)v2;
  }
  v218 = ((unsigned __int64)v217 >> 60) & 1;
  v324.index = -1;
  if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
  {
    v287.index = -1;
    if ( v218 )
      cRBT_PostTransResolve_Mask_Vrs<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v324, &v287, &sceneColor, &v327, &v284, &v345, &vrsSWMask);
    else
      cRBT_PostTransResolve_Vrs<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v287, &sceneColor, &vrsSWMask);
    sceneColor.index = v287.index;
  }
  else if ( v218 )
  {
    cRBT_PostTransResolve_Mask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v324, &sceneColor, &v327, &v284, &v345);
  }
  v219 = *(_QWORD *)v2;
  v220 = v324.index;
  if ( (*(_QWORD *)v2 & 0x1000000000000000i64) == 0 )
    v220 = triIDTexture.index;
  v324.index = v220;
  if ( (v219 & 0x10000000000000i64) != 0 )
  {
    v221 = pScript->displaySize.v[1] >> 1;
    if ( (*((_DWORD *)v2 + 2) & 0x80000) == 0 )
      v221 = pScript->displaySize.v[1];
    v223 = (float)v221;
    v222 = (float)pScript->displaySize.v[0];
    sceneColor.index = R_TG_MBlur_Apply(&v433, pScript, sceneColor, sceneVelocityHalf, v222 / v223)->index;
    v219 = *(_QWORD *)v2;
  }
  if ( (v219 & 0x1000000000i64) != 0 && (*((_QWORD *)v2 + 1) & 0x4000000000i64) == 0 )
  {
    v261 = GFX_GP_PASS_COUNT;
    cRBT_DrawEmissivePostBlur<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, (const GfxEmissivePass *)&v261, &sceneColor, &v289, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v509, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v270, &reflectionGrid);
  }
  cRBT_GP_ResetClutterFrame<R_TG_Handle>(pScript, &sceneColor);
  v224 = *(_QWORD *)v2;
  dofTile0Handle.index = -1;
  if ( (v224 & 0x4000000000000i64) != 0 )
  {
    if ( (v224 & 0x8000000000000i64) != 0 )
      R_TGS_DOF_Fullres_Apply(pScript, &sceneColor, floatZ, scope, &dofTile0Handle);
    else
      R_TGS_DOF_Apply(pScript, &sceneColor, floatZ, velocity, scope, &dofTile0Handle);
    v224 = *(_QWORD *)v2;
  }
  else
  {
    dofTile0Handle.index = triIDTexture.index;
  }
  if ( (v224 & 0x1000000000000i64) != 0 )
  {
    cRBT_Lens_Convolution<R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneColor);
    v224 = *(_QWORD *)v2;
  }
  color.index = -1;
  v361.index = -1;
  v329.index = -1;
  v377.index = -1;
  if ( (v224 & 0x80000000000000i64) != 0 )
  {
    R_Perceptual_UpdateVeilWeights(0);
    SceneDownsampleMipForExposureCalculation = R_Tonemap_GetSceneDownsampleMipForExposureCalculation(pScript->sceneSize.v[0], pScript->sceneSize.v[1]);
    v225 = SceneDownsampleMipForExposureCalculation;
    SceneDownsampleVeilMip = R_Perceptual_GetSceneDownsampleVeilMip(SceneDownsampleMipForExposureCalculation);
    SceneDownsampleVeilMipCount = R_Perceptual_GetSceneDownsampleVeilMipCount(pScript->sceneSize.v[0], pScript->sceneSize.v[1], SceneDownsampleVeilMip);
    v227 = SceneDownsampleVeilMipCount;
    SceneDownsampleTotalMipCount = R_Perceptual_GetSceneDownsampleTotalMipCount(v225, SceneDownsampleVeilMip, SceneDownsampleVeilMipCount);
    v229 = SceneDownsampleTotalMipCount;
    if ( (!v225 || v227 <= 1 || SceneDownsampleTotalMipCount <= 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\scripts\\r_tgs_misc.h", 1623, ASSERT_TYPE_ASSERT, "(exposureMip > 0 && veilMipCount > 1 && downsampleMipCount > 1)", (const char *)&queryFormat, "exposureMip > 0 && veilMipCount > 1 && downsampleMipCount > 1") )
      __debugbreak();
    v230 = (*(_QWORD *)v2 >> 54) & 1i64;
    v295.index = sceneColor.index;
    `vector constructor iterator'(&__t, 4ui64, 0x10ui64, (void *(__fastcall *)(void *))R_TG_Handle::R_TG_Handle);
    if ( v229 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\scripts\\r_tgs_misc.h", 1629, ASSERT_TYPE_ASSERT, "(downsampleMipCount <= ( sizeof( *array_counter( sceneDownsampleMipRts ) ) + 0 ))", (const char *)&queryFormat, "downsampleMipCount <= ARRAY_COUNT( sceneDownsampleMipRts )") )
      __debugbreak();
    cGpuTimerBegin(pScript, 0x72u);
    v231 = v229 + 1;
    v232 = 1;
    if ( v229 + 1 > 1 )
    {
      v313 = DRAWLIST_FIRST;
      v233 = &v518;
      v234 = &v518;
      v235 = v231;
      do
      {
        v236 = GFX_GP_PASS_CAMERA;
        if ( v232 < SceneDownsampleVeilMip )
          v236 = (int)v230;
        v261 = v236;
        cRBT_Perceptual_Downsample_NoDynResCS<R_TG_Handle,R_TG_Handle,int,enum VeilTonemapMode>(pScript, v234, &v295, (const int *)&v313, (const VeilTonemapMode *)&v261);
        v237 = v233->index;
        ++v233;
        ++v232;
        v295.index = v237;
        ++v234;
      }
      while ( v232 < v235 );
      v2 = v438;
      v227 = SceneDownsampleVeilMipCount;
    }
    cGpuTimerEnd(pScript);
    v273.index = -1;
    v238 = *(&__t.index + (unsigned int)SceneDownsampleMipForExposureCalculation);
    v377.index = v518.index;
    v383 = v238;
    cRBT_Tonemap_CalculateExposure<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v329, &v273, (const R_TG_Handle *)&v383, &floatZ, &scope, &v346);
    upsampledRt.index = -1;
    if ( (*(_QWORD *)v2 & 0x20000000000000i64) != 0 )
      R_TG_Perceptual_UpsampleChain(pScript, &__t, &upsampledRt, SceneDownsampleVeilMip, v227, s_veilWeights);
    else
      upsampledRt.index = triIDTexture.index;
    R_Perceptual_UpdateLocalTonemapWeights();
    v295.index = v273.index;
    `vector constructor iterator'(&v516, 4ui64, 4ui64, (void *(__fastcall *)(void *))R_TG_Handle::R_TG_Handle);
    v516.passIndex = v273.index;
    cGpuTimerBegin(pScript, 0x72u);
    p_isPrepass = &v516.isPrepass;
    v261 = GFX_GP_PASS_CAMERA;
    v240 = &v516.isPrepass;
    v313 = DRAWLIST_FIRST;
    v241 = 3i64;
    do
    {
      cRBT_Perceptual_DownsampleCS<R_TG_Handle,R_TG_Handle,int,enum VeilTonemapMode>(pScript, (const R_TG_Handle *)v240, &v295, (const int *)&v313, (const VeilTonemapMode *)&v261);
      v242 = *(_DWORD *)p_isPrepass;
      p_isPrepass += 4;
      v240 += 4;
      v295.index = v242;
      --v241;
    }
    while ( v241 );
    cGpuTimerEnd(pScript);
    R_TG_Perceptual_UpsampleChain(pScript, (R_TG_Handle *)&v516, &v273, 0, 4u, s_localTonemapWeights);
    v243 = *((_QWORD *)v2 + 1);
    if ( (v243 & 0x80000000) != 0 )
    {
      v261 = GFX_GP_PASS_INVALID|GFX_GP_PASS_SHADOWS;
      cRBTD_HDR_ScopesProcess<R_TG_Handle,enum HDRScopesStage>(pScript, &sceneColor, (const HDRScopesStage *)&v261);
      v243 = *((_QWORD *)v2 + 1);
    }
    if ( (v243 & 0x2000000000i64) != 0 )
    {
      v261 = GFX_GP_PASS_CAMERA;
      cRBTD_HDR_SpotMeterProcess<R_TG_Handle,enum SpotMeterId>(pScript, &sceneColor, (const SpotMeterId *)&v261);
      v243 = *((_QWORD *)v2 + 1);
    }
    if ( (v243 & 0x8000000000i64) != 0 )
    {
      v261 = GFX_GP_PASS_SHADOWS;
      cRBTD_RefImageOverlay<R_TG_Handle,enum RefImageDrawMode>(pScript, &sceneColor, (const RefImageDrawMode *)&v261);
      v243 = *((_QWORD *)v2 + 1);
    }
    if ( (v243 & 0x80000000000i64) != 0 )
    {
      v261 = GFX_GP_PASS_INVALID|GFX_GP_PASS_SHADOWS;
      cRBTD_Screenshot_CapturePipelineStage<R_TG_Handle,enum GfxScreenshotPipelineStage>(pScript, &sceneColor, (const GfxScreenshotPipelineStage *)&v261);
    }
    v244 = (*(_QWORD *)v2 >> 58) & 3i64;
    if ( ((*(_QWORD *)v2 >> 58) & 3) != 0 )
    {
      v275.index = -1;
      value.index = -1;
      if ( v244 < 2 )
        cRBT_Tonemap_Filter_SMAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v275, &value, &sceneColor, &v314, &v360, &upsampledRt, &v273, &v329, &scope, &floatZ, &v328, &v284);
      else
        cRBT_Tonemap_Filter_TemporalSMAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v275, &value, &sceneColor, &v314, &v360, &upsampledRt, &v273, &v329, &scope, &floatZ, &v328, &v284);
      if ( (*((_QWORD *)v2 + 1) & 0x2000000000i64) != 0 )
      {
        v261 = GFX_GP_PASS_SHADOWS;
        cRBTD_HDR_SpotMeterProcess<R_TG_Handle,enum SpotMeterId>(pScript, &v275, (const SpotMeterId *)&v261);
      }
      v308.index = -1;
      v287.index = -1;
      cRBT_SMAA_EdgeDetection<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v275, &value, &v361, &v347, &v308, &v287);
      v283.index = -1;
      cRBT_SMAA_ResolveIndirect<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v283, &v308, &v287);
      cRBT_SMAA_MorphologicalAntialiasing<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v275, &value, &v361, &v283, &v308, &v287);
      color.index = v275.index;
      if ( ((unsigned __int8)(*(_QWORD *)v2 >> 58) & 3u) < 2 )
      {
        cUtil_ForceRtState<R_TG_Handle>(pScript, &color);
      }
      else
      {
        srcTask = -1;
        v315.index = -1;
        v343.index = -1;
        cRBT_SMAA_TemporalSupersampling<unsigned int,unsigned int,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, (const unsigned int *)&pScript->sceneFullSize, (const unsigned int *)&pScript->sceneFullSize + 1, &v343, (const R_TG_Handle *)&srcTask, &v315, &v275, &v275, &value, &value, &value, &value, &velocity, &velocity, &v324);
        if ( ((*(_QWORD *)v2 >> 58) & 3) == 3 )
          cRBT_SMAA_FilmicFiltering<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v343, (const R_TG_Handle *)&srcTask, (const R_TG_Handle *)&srcTask, &v315, &velocity, &velocity, &v275, &v324);
        color.index = srcTask;
      }
    }
    else
    {
      cRBT_Tonemap_Filter<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &sceneColor, &v314, &v360, &upsampledRt, &v273, &v329, &scope, &floatZ, &v328, &v284);
      if ( (*((_QWORD *)v2 + 1) & 0x2000000000i64) != 0 )
      {
        v261 = GFX_GP_PASS_SHADOWS;
        cRBTD_HDR_SpotMeterProcess<R_TG_Handle,enum SpotMeterId>(pScript, &color, (const SpotMeterId *)&v261);
      }
    }
    v245 = *((_QWORD *)v2 + 1);
    if ( (v245 & 0x10000000000i64) != 0 )
    {
      cRBTD_RefShaderOverlay<R_TG_Handle,R_TG_Handle>(pScript, &color, &v314);
      v245 = *((_QWORD *)v2 + 1);
    }
    if ( (v245 & 0x8000000000i64) != 0 )
    {
      v261 = GFX_GP_PASS_COUNT;
      cRBTD_RefImageOverlay<R_TG_Handle,enum RefImageDrawMode>(pScript, &color, (const RefImageDrawMode *)&v261);
    }
  }
  else
  {
    color.index = sceneColor.index;
    v329.index = nullBuffer.index;
    v377.index = outCreateRt.index;
  }
  v246 = *((_QWORD *)v2 + 1);
  if ( (v246 & 8) != 0 )
  {
    v283.index = -1;
    cRBT_DroneCamera_DownsampleBayerDebayer<R_TG_Handle,R_TG_Handle>(pScript, &v283, &color);
    v315.index = -1;
    cRBT_DroneCamera_ChromaSubsampling<R_TG_Handle,R_TG_Handle>(pScript, &v315, &v283);
    cRBT_DroneCamera_Upsampling<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v315, &v270);
    v246 = *((_QWORD *)v2 + 1);
  }
  if ( (v246 & 0x10) != 0 )
  {
    cConditionLightBegin(pScript, R_Distortion_Enabled);
    v283.index = -1;
    cRBT_Distortion<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v283, &color, &v270);
    cRBT_CopyDistortion<R_TG_Handle,R_TG_Handle>(pScript, &color, &v283);
    cConditionEnd(pScript);
    v246 = *((_QWORD *)v2 + 1);
  }
  if ( (v246 & 0x100000000i64) != 0 )
  {
    cRBTD_FL_DV_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v305, &lightsCluster, &v349, &reflectionGrid, &outDecalIndices, &outDecalDrawData);
    v246 = *((_QWORD *)v2 + 1);
  }
  v333.index = -1;
  v350.index = -1;
  if ( (v246 & 0x600000000i64) == 0 )
  {
    v247 = triIDTexture.index;
    v333.index = triIDTexture.index;
LABEL_789:
    v350.index = v247;
    goto LABEL_790;
  }
  if ( (v246 & 1) == 0 )
  {
    v333.index = sceneEntityIDVelocity.index;
    v247 = v269.index;
    goto LABEL_789;
  }
  cRBT_Resolve_MSAAVelocity4xToFull<R_TG_Handle,R_TG_Handle>(pScript, &v333, &sceneEntityIDVelocity);
  cRBT_Resolve_MSAATangentFrame4xToFull<R_TG_Handle,R_TG_Handle>(pScript, &v350, &v269);
  v246 = *((_QWORD *)v2 + 1);
LABEL_790:
  if ( (v246 & 0x200000000i64) != 0 )
  {
    v248 = triIDTexture.index;
    if ( (v246 & 1) != 0 )
      v248 = vrsSWMask.index;
    v261 = v248;
    cRBTD_DebugTextureOverlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &floatZ, &v333, &v350, &v270, &v284, &v301, &v325, &v324, (const R_TG_Handle *)&v261, &v292, &scope);
    v246 = *((_QWORD *)v2 + 1);
  }
  if ( (v246 & 0x400000000i64) != 0 )
  {
    cRBTD_DV_Show3DDebug<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &sceneDepth, &outDecalDebugData, &outDecalIndirectArgs, &floatZ, &v333, &v350, &v270, &outDecalIndices, &outDecalDrawData);
    v246 = *((_QWORD *)v2 + 1);
  }
  if ( (v246 & 0x400000000000i64) != 0 )
  {
    cRBTD_VOL_ShowVolumetricDebug<R_TG_Handle,R_TG_Handle>(pScript, &color, &volVisibility);
    v246 = *((_QWORD *)v2 + 1);
  }
  if ( (v246 & 0x80000000000i64) != 0 )
  {
    v261 = GFX_GP_PASS_SHADOWS;
    cRBTD_Screenshot_CapturePipelineStage<R_TG_Handle,enum GfxScreenshotPipelineStage>(pScript, &color, (const GfxScreenshotPipelineStage *)&v261);
    v246 = *((_QWORD *)v2 + 1);
  }
  v336.index = -1;
  if ( (v246 & 0x8000) != 0 && (*(_QWORD *)v2 & 0x2000000000000000i64) != 0 )
  {
    cRBT_CreateReticleBuffer<R_TG_Handle,R_TG_Handle>(pScript, &v336, &color);
    cRBT_Draw2D_ReceivePostFXComposite<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v336, &v270, &scope);
    v246 = *((_QWORD *)v2 + 1);
  }
  else
  {
    v336.index = triIDTexture.index;
  }
  if ( (v246 & 0x10000) != 0 )
  {
    v283.index = -1;
    cRBT_Fidelity_FX_Sharpening<R_TG_Handle,R_TG_Handle>(pScript, &color, &v283);
    v246 = *((_QWORD *)v2 + 1);
    color.index = v283.index;
  }
  v249 = *(_QWORD *)v2;
  v407.index = -1;
  if ( (v249 & 0x2000000000000000i64) == 0 || ((v249 >> 58) & 3) < 2 || (v246 & 0x10000) != 0 )
  {
    v250 = 0;
  }
  else
  {
    v250 = 1;
    cRBT_Draw2D_BackupScopeReticle<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v407, &color, &scope);
    v249 = *(_QWORD *)v2;
  }
  if ( (v249 & 0x2000000000000000i64) != 0 )
    cRBT_Draw2D_ReceivePostFXLite<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v270, &scope);
  if ( (*((_DWORD *)v2 + 2) & 0x80020) == 524320i64 )
    R_TGS_Blur(pScript, v2, &color, 0);
  `vector constructor iterator'(&v362, 4ui64, 2ui64, (void *(__fastcall *)(void *))R_TG_Handle::R_TG_Handle);
  v251 = *((_QWORD *)v2 + 1);
  if ( (v251 & 0x800) != 0 )
  {
    v261 = GFX_GP_PASS_COUNT;
    cRBT_CreateShellshockRT<R_TG_Handle,R_TG_Handle,R_TG_Handle,int>(pScript, &v362, &v363, &color, (const int *)&v261);
    cRBT_CaptureShellshock<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v362, &v363, &color, &scope, &v336);
    v251 = *((_QWORD *)v2 + 1);
    v252 = triIDTexture.index;
  }
  else
  {
    v252 = triIDTexture.index;
    v362.index = triIDTexture.index;
    v363.index = triIDTexture.index;
  }
  v373.index = -1;
  if ( (v251 & 0x4000) != 0 && (*(_QWORD *)v2 & 0x2000000000000000i64) != 0 )
  {
    v313 = 960;
    v253 = 540;
    if ( (v251 & 0x80000) != 0 )
      v253 = 270;
    v261 = v253;
    cAddDependencyInNextTask(pScript, v303.index);
    cRBT_Draw2D_LowResOverlays<R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int>(pScript, &v373, &v270, &v314, (const unsigned int *)&v313, (const unsigned int *)&v261);
  }
  else
  {
    v373.index = v252;
  }
  cRBT_CompositeToDisplayAndApplyPostfx<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &color, &scope, &v362, &v363, &v373, &v336);
  if ( (*((_QWORD *)v2 + 1) & 0x4000000000000i64) != 0 )
  {
    v303.index = -1;
    cUtil_DebugUav_Blend<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v303, &result, &v406);
    cRBT_FullScreenFilter<R_TG_Handle,R_TG_Handle>(pScript, &result, &v303);
  }
  if ( v250 )
    cRBT_Draw2D_RestoreScopeReticle<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v407, &scope);
  if ( (*(_QWORD *)v2 & 0x4000000000000000i64) != 0 && *(_QWORD *)v2 >= 0 )
  {
    if ( (*((_BYTE *)v2 + 8) & 1) != 0 )
      cRBT_ApplyHudOutlineVrsInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &sceneEntityIDVelocity, &v270, &v269, &scope, &floatZ);
    else
      cRBT_ApplyHudOutline<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &sceneEntityIDVelocity, &v270, &v269, &scope, &floatZ);
  }
  v254 = *((_QWORD *)v2 + 1);
  v255 = v254;
  if ( (v254 & 0x20) != 0 && (v254 & 0x80000) == 0 )
  {
    R_TGS_Blur(pScript, v2, &result, 1);
    v255 = *((_QWORD *)v2 + 1);
  }
  if ( (v255 & 0x4000000000i64) != 0 )
  {
    cRBTD_ShowEmissiveOverdraw<R_TG_Handle,R_TG_Handle>(pScript, &result, &v374);
    v255 = *((_QWORD *)v2 + 1);
  }
  if ( (v255 & 0x80000000000i64) != 0 )
  {
    v261 = GFX_GP_PASS_COUNT;
    cRBTD_Screenshot_CapturePipelineStage<R_TG_Handle,enum GfxScreenshotPipelineStage>(pScript, &result, (const GfxScreenshotPipelineStage *)&v261);
    v255 = *((_QWORD *)v2 + 1);
  }
  if ( (v255 & 0x4000000) != 0 )
  {
    cRBTD_DrawPrimitives_Overlay<R_TG_Handle,R_TG_Handle>(pScript, &result, &v375);
    v255 = *((_QWORD *)v2 + 1);
  }
  v256 = v255;
  if ( (v255 & 0x20000000) != 0 && (v255 & 0x40000000) == 0 )
  {
    cRBTD_Overlay<R_TG_Handle,R_TG_Handle>(pScript, &result, &v330);
    v256 = *((_QWORD *)v2 + 1);
  }
  if ( (v256 & 0x100000000000i64) != 0 )
  {
    cRBTD_Shadow_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &sunshadowCascades, &sunShadow1, &v509, &sunshadowCascade0ForViewmodel, &staleCache, &sunshadowCache, &compressedCascades, &v511, &v512, &v292, &transSunShadowMask);
    v256 = *((_QWORD *)v2 + 1);
  }
  if ( (v256 & 0x20000000000i64) != 0 )
  {
    v303.index = -1;
    cRBTD_Magnifier_Part1<R_TG_Handle,R_TG_Handle>(pScript, &v303, &result);
    cRBTD_Magnifier_Part2<R_TG_Handle,R_TG_Handle>(pScript, &result, &v303);
    v256 = *((_QWORD *)v2 + 1);
  }
  if ( (v256 & 0x80000000) != 0 )
  {
    v261 = GFX_GP_PASS_SHADOWS;
    cRBTD_HDR_ScopesProcess<R_TG_Handle,enum HDRScopesStage>(pScript, &result, (const HDRScopesStage *)&v261);
    v256 = *((_QWORD *)v2 + 1);
  }
  if ( (*(_QWORD *)v2 & 0x2000000000000000i64) != 0 )
  {
    cRBT_Draw2D_RTT<R_TG_Handle>(pScript, &result);
    cRBT_Draw2D_Hud<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &v270, &v314, &v377, &v329);
    v256 = *((_QWORD *)v2 + 1);
    if ( (v256 & 0x800000000000i64) != 0 )
    {
      cRBTD_Rtt_Overlay<R_TG_Handle>(pScript, &result);
      v256 = *((_QWORD *)v2 + 1);
    }
  }
  if ( (v256 & 0x80000000) != 0 )
  {
    v261 = GFX_GP_PASS_COUNT;
    cRBTD_HDR_ScopesProcess<R_TG_Handle,enum HDRScopesStage>(pScript, &result, (const HDRScopesStage *)&v261);
    v256 = *((_QWORD *)v2 + 1);
  }
  if ( (v256 & 0x8000000) != 0 )
  {
    v257 = 0;
    value.index = 256;
    v273.index = 0;
    if ( v301.index != -1 && v301.index != triIDTexture.index )
    {
      v261 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &v301, (const int *)&v261, &v273.index, &value.index, &value.index);
      v273.index = 256;
      v257 = 256;
    }
    if ( v361.index != -1 )
    {
      v261 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &v361, (const int *)&v261, &v273.index, &value.index, &value.index);
      v257 += 256;
      v273.index = v257;
    }
    if ( outColor.index != -1 && outColor.index != triIDTexture.index )
    {
      v261 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &outColor, (const int *)&v261, &v273.index, &value.index, &value.index);
      v273.index = v257 + 256;
    }
    if ( outFog.index != -1 && outFog.index != triIDTexture.index )
    {
      v261 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &outFog, (const int *)&v261, &v273.index, &value.index, &value.index);
    }
  }
  if ( (*((_DWORD *)v2 + 2) & 0x40000000) != 0 )
  {
    v261 = pScript->displaySize.v[1] >> 2;
    v313 = pScript->displaySize.v[0] >> 2;
    SceneDownsampleVeilMipCount = EMISSIVE_PASS_EMISSIVE;
    SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
    cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,int,unsigned int,unsigned int>(pScript, &result, &v330, (const int *)&SceneDownsampleMipForExposureCalculation, (const int *)&SceneDownsampleVeilMipCount, (const unsigned int *)&v313, (const unsigned int *)&v261);
  }
  cRBT_End3D<R_TG_Handle>(pScript, &result);
}

/*
==============
R_TG_RunScriptViewMinimal
==============
*/
void R_TG_RunScriptViewMinimal(R_TG_Script *pScript, const R_TG_ScriptOptions *scriptOptions)
{
  _BOOL8 v3; 
  __int64 v4; 
  __int64 v5; 
  R_TG_ViewOptions options; 

  *((_QWORD *)&options + 1) = 0i64;
  v3 = R_GpuLightGrid_DataAvailable();
  v4 = 2 * (v3 | (2i64 * R_LGV_UseMultiLightGridSampling()));
  if ( !fx_gpu_lighting->current.enabled || (v5 = 0x80001500000009i64, s_world.voxelTreeCount <= 0) )
    v5 = 0x80001100000009i64;
  *(_QWORD *)&options = v5 | v4;
  R_TG_ResolveOptionsDependencies(&options);
  R_TG_RunScriptViewCommon(pScript, &options);
}

