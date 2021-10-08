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
  _R12 = outScriptOptions;
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
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+78h+options._bf_0]
    vmovups xmmword ptr [r12], xmm0
  }
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

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rsp+38h+options._bf_0], xmm0
  }
  R_TG_RunScriptViewCommon(pScript, &options);
}

/*
==============
R_TG_RunScriptViewCommon
==============
*/
void R_TG_RunScriptViewCommon(R_TG_Script *pScript, const R_TG_ViewOptions *options)
{
  const R_TG_ViewOptions *v4; 
  TG_GP_PerPassBuffers *p_perPassBuffers; 
  __int64 v7; 
  unsigned int index; 
  unsigned __int8 v9; 
  __int64 v10; 
  R_TG_Handle *p_sunshadowCascades; 
  __int64 v12; 
  R_TG_Handle *p_sunshadowMins; 
  __int64 v14; 
  R_TG_Handle *p_compressedCascades; 
  __int64 v16; 
  bool v17; 
  __int64 v18; 
  unsigned int m_index; 
  __int64 handleArgCount; 
  __int64 v21; 
  unsigned int MaxBaseWidth; 
  unsigned int MaxBaseHeight; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned int v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned int v49; 
  unsigned int v50; 
  __int64 v51; 
  unsigned int v52; 
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
  __int64 v64; 
  __int64 v65; 
  unsigned int v66; 
  __int64 v67; 
  unsigned int v68; 
  unsigned int v69; 
  R_TG_AddTaskStack *v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int MipCount; 
  unsigned int v74; 
  __int64 v75; 
  unsigned __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  bool v79; 
  unsigned __int64 v80; 
  R_TG_Handle *p_floatZ; 
  R_TG_Handle *p_sceneVisBuffer; 
  unsigned int v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  unsigned int v92; 
  unsigned int v93; 
  __int64 v94; 
  bool v95; 
  unsigned int v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  unsigned int v101; 
  __int64 v102; 
  __int64 v103; 
  __int64 v104; 
  __int64 v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  unsigned int v110; 
  __int64 v111; 
  __int64 v112; 
  unsigned int v113; 
  __int64 v114; 
  __int64 v115; 
  __int64 v116; 
  __int64 v117; 
  __int64 v118; 
  __int64 v119; 
  __int64 v120; 
  __int64 v121; 
  unsigned int v122; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  unsigned int v130; 
  __int64 v131; 
  __int64 v132; 
  __int64 v133; 
  __int64 v134; 
  __int64 v135; 
  __int64 v136; 
  __int64 v137; 
  __int64 v138; 
  __int64 v139; 
  __int64 v140; 
  __int64 v141; 
  unsigned int v142; 
  __int64 v143; 
  unsigned int v144; 
  unsigned __int64 v145; 
  int v146; 
  int v147; 
  unsigned int v148; 
  __int64 v149; 
  __int64 v150; 
  __int64 v151; 
  __int64 v152; 
  __int64 v153; 
  __int64 v154; 
  __int64 v155; 
  unsigned int v156; 
  __int64 v157; 
  __int64 v158; 
  __int64 v159; 
  __int64 v160; 
  unsigned int v161; 
  __int64 v162; 
  unsigned int v163; 
  __int64 v164; 
  __int64 v165; 
  __int64 v166; 
  __int64 v167; 
  __int64 v168; 
  __int64 v169; 
  int v170; 
  __int64 v171; 
  unsigned int v172; 
  unsigned int v173; 
  unsigned int v174; 
  __int64 v175; 
  __int64 v176; 
  unsigned int v177; 
  __int64 v178; 
  int v179; 
  unsigned int v180; 
  __int64 v181; 
  int v182; 
  __int64 v183; 
  __int64 v184; 
  __int64 v185; 
  unsigned int v186; 
  __int64 v187; 
  unsigned int v188; 
  __int64 v189; 
  __int64 v190; 
  __int64 v191; 
  unsigned int v192; 
  unsigned int v193; 
  __int64 v194; 
  __int64 v195; 
  __int64 v196; 
  __int64 v197; 
  __int64 v198; 
  __int64 v199; 
  __int64 v200; 
  unsigned __int64 v201; 
  __int64 v202; 
  __int64 v203; 
  __int64 v204; 
  unsigned int v205; 
  __int64 v206; 
  __int64 v207; 
  __int64 v208; 
  __int64 v209; 
  unsigned int v210; 
  __int64 v211; 
  unsigned int v212; 
  __int64 v213; 
  __int64 v214; 
  __int64 v215; 
  __int64 v216; 
  R_TG_Script *v217; 
  R_TG_Handle *p_sceneColor; 
  __int64 v219; 
  __int64 v220; 
  __int64 v221; 
  unsigned int v222; 
  __int64 v228; 
  unsigned int v229; 
  unsigned int SceneDownsampleVeilMip; 
  unsigned int v231; 
  unsigned int SceneDownsampleTotalMipCount; 
  unsigned int v233; 
  __int64 v234; 
  unsigned int v235; 
  unsigned int v236; 
  R_TG_Handle *v237; 
  R_TG_Handle *v238; 
  unsigned int v239; 
  GFX_GP_PASS v240; 
  unsigned int v241; 
  GfxDrawListType v242; 
  bool *p_isPrepass; 
  bool *v244; 
  __int64 v245; 
  unsigned int v246; 
  __int64 v247; 
  unsigned __int64 v248; 
  __int64 v249; 
  __int64 v250; 
  unsigned int v251; 
  unsigned int v252; 
  unsigned __int64 v253; 
  char v254; 
  __int64 v255; 
  unsigned int v256; 
  GFX_GP_PASS v257; 
  __int64 v258; 
  __int64 v259; 
  __int64 v260; 
  unsigned int v261; 
  float occlusionDepthTexture; 
  R_TG_Handle floatZ; 
  R_TG_Handle triIDTexture; 
  R_TG_Handle sceneColor; 
  GFX_GP_PASS v266; 
  R_TG_Handle sceneDepth; 
  R_TG_Handle scope; 
  R_TG_Handle color; 
  R_TG_Handle sceneIndirectArgs; 
  R_TG_Handle scenePerSurfData; 
  R_TG_Handle sceneIndices; 
  R_TG_Handle value; 
  R_TG_Handle v274; 
  R_TG_Handle v275; 
  R_TG_Handle result; 
  GfxRenderTargetFormat v277[4]; 
  R_TG_Handle v278; 
  R_TG_Handle transSunShadowMask; 
  R_TG_Handle v280; 
  R_TG_Handle transSunShadow; 
  R_TG_Handle volVisibility; 
  R_TG_Handle velocity; 
  R_TG_Handle nullBuffer; 
  R_TG_Handle reflectionGrid; 
  R_TG_Handle volExtinction; 
  R_TG_Handle volScattering; 
  R_TG_Handle v288; 
  R_TG_Handle v289; 
  R_TG_Handle outDecalDrawData; 
  unsigned int srcTask; 
  R_TG_Handle v292; 
  R_TG_Handle upsampledRt; 
  R_TG_Handle v294; 
  R_TG_Handle sceneEntityIDVelocity; 
  R_TG_Handle outDecalIndices; 
  R_TG_Handle v297; 
  R_TG_Handle beginToken; 
  R_TG_Handle lightGridVolHighBands; 
  R_TG_Handle v300; 
  R_TG_Handle lightGridVol; 
  R_TG_Handle lightsCluster; 
  R_TG_Handle vrsSWMask; 
  R_TG_Handle inoutFullresAlpha; 
  R_TG_Handle outCreateRt; 
  R_TG_Handle v306; 
  R_TG_Handle staleCache; 
  R_TG_Handle v308; 
  R_TG_Handle v309; 
  R_TG_Handle v310; 
  R_TG_Handle sunshadowCascade0ForViewmodel; 
  R_TG_Handle outColor; 
  R_TG_Handle v313; 
  R_TG_Handle outFog; 
  R_TG_Handle prepassViewModelToken; 
  R_TG_Handle vrsHWMask; 
  GfxEmissivePass SceneDownsampleMipForExposureCalculation; 
  GfxDrawListType v318; 
  R_TG_Handle v319; 
  R_TG_Handle v320; 
  GfxRenderTargetFormat v321[4]; 
  R_TG_Handle nullRwBuffer; 
  R_TG_Handle v323; 
  R_TG_Handle halfresAlpha; 
  R_TG_Handle halfresColor; 
  R_TG_Handle v326; 
  R_TG_Handle v327; 
  R_TG_Handle outSH; 
  R_TG_Handle v329; 
  R_TG_Handle v330; 
  R_TG_Handle v331; 
  R_TG_Handle v332; 
  R_TG_Handle v333; 
  R_TG_Handle v334; 
  R_TG_Handle v335; 
  R_TG_Handle v336; 
  R_TG_Handle ssrMask; 
  R_TG_Handle v338; 
  R_TG_Handle outDecalIndirectArgs; 
  R_TG_Handle outDecalDebugData; 
  R_TG_Handle v341; 
  R_TG_Handle sunshadowMin0ForViewmodel; 
  R_TG_Handle v343; 
  R_TG_Handle v344; 
  R_TG_Handle sceneVisBuffer; 
  R_TG_Handle v346; 
  R_TG_Handle umbraOcclusionTexture; 
  R_TG_Handle v348; 
  R_TG_Handle v349; 
  R_TG_Handle v350; 
  R_TG_Handle v351; 
  R_TG_Handle v352; 
  GfxEmissivePass SceneDownsampleVeilMipCount; 
  R_TG_Handle v354; 
  R_TG_Handle v355; 
  R_TG_Handle v356; 
  R_TG_Handle shadowAsyncToken; 
  R_TG_Handle v358; 
  R_TG_Handle v359; 
  R_TG_Handle v360; 
  R_TG_Handle v361; 
  R_TG_Handle v362; 
  R_TG_Handle v363; 
  R_TG_Handle v364; 
  R_TG_Handle v365; 
  R_TG_Handle v366; 
  R_TG_Handle v367; 
  R_TG_Handle v368; 
  R_TG_Handle v369; 
  unsigned int v370; 
  unsigned int v371; 
  R_TG_Handle v372; 
  R_TG_Handle v373; 
  R_TG_Handle outputRt; 
  unsigned int v375; 
  R_TG_Handle sceneVelocityHalf; 
  R_TG_Handle dofTile0Handle; 
  R_TG_Handle v378; 
  R_TG_Handle v379; 
  R_TG_Handle v380; 
  R_TG_Handle sunshadowCache; 
  R_TG_Handle v382; 
  R_TG_Handle token; 
  R_TG_Handle v384; 
  R_TG_Handle v385; 
  R_TG_Handle v386; 
  R_TG_Handle v387; 
  GfxDrawListType v388; 
  R_TG_Handle v389; 
  unsigned int v390; 
  R_TG_Handle shadowIndicesToken; 
  R_TG_Handle nullDepthTarget; 
  unsigned int v393; 
  GfxGPConfig v394; 
  R_TG_Handle v395; 
  R_TG_Handle v396; 
  R_TG_Handle v397; 
  R_TG_Handle v398; 
  unsigned int v399; 
  R_TG_Handle v400; 
  R_TG_Handle v401; 
  R_TG_Handle v402; 
  R_TG_Handle v403; 
  R_TG_Handle v404; 
  R_TG_Handle v405; 
  R_TG_Handle sunshadowCacheBackface; 
  R_TG_Handle prepassWorldToken; 
  R_TG_Handle v408; 
  R_TG_Handle syncToken; 
  R_TG_Handle v410; 
  R_TG_Handle v411; 
  R_TG_Handle v412; 
  R_TG_Handle v413; 
  unsigned int v414; 
  unsigned int i; 
  R_TG_Handle v416; 
  unsigned int v417; 
  R_TG_Handle v418; 
  int v419; 
  int v420; 
  GfxGPConfig gpConfig; 
  GfxGPConfig v422; 
  GFX_GP_PASS v423; 
  unsigned int v424; 
  unsigned int v425; 
  unsigned int v426; 
  unsigned int v427; 
  unsigned int v428; 
  int v429; 
  unsigned int v430; 
  unsigned int v431; 
  GfxDrawListType v432; 
  R_TG_Handle shadowDrawToken; 
  int v434; 
  int v435; 
  R_TG_Handle indiciesToken; 
  unsigned int v437; 
  R_TG_Handle v438; 
  unsigned int height; 
  unsigned int width; 
  unsigned int v441; 
  unsigned int v442; 
  const R_TG_ViewOptions *v443; 
  TG_GP_PerPassBuffers perPassBuffers; 
  TG_GP_PerPassBuffers v445; 
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
  R_TG_AddTaskStack v459; 
  R_TG_AddTaskStack v460; 
  R_TG_AddTaskStack v461; 
  R_TG_AddTaskStack v462; 
  R_TG_AddTaskStack v463; 
  R_TG_AddTaskStack arguments; 
  R_TG_AddTaskStack v465; 
  R_TG_AddTaskStack v466; 
  R_TG_AddTaskStack v467; 
  R_TG_AddTaskStack v468; 
  R_TG_AddTaskStack v469; 
  R_TG_AddTaskStack v470; 
  R_TG_AddTaskStack v471; 
  R_TG_AddTaskStack v472; 
  R_TG_AddTaskStack v473; 
  R_TG_AddTaskStack v474; 
  R_TG_AddTaskStack stack; 
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
  R_TG_AddTaskStack v507; 
  R_TG_AddTaskStack v508; 
  R_TG_AddTaskStack v509; 
  R_TG_AddTaskStack v510; 
  R_TG_AddTaskStack v511; 
  R_TG_Handle sunshadowCascades; 
  R_TG_Handle sunShadow1; 
  R_TG_Handle v514; 
  R_TG_Handle compressedCascades; 
  R_TG_Handle v516; 
  R_TG_Handle v517; 
  R_TG_Handle sunshadowMins; 
  unsigned int v519; 
  unsigned int v520; 
  GfxGPConfig v521; 
  R_TG_Handle __t; 
  R_TG_Handle v523; 

  v4 = options;
  v443 = options;
  cDisplayResource(&result, pScript);
  cNullResource(&triIDTexture, pScript, "null_texture", eResourceType_Texture);
  cNullResource(&v346, pScript, "null_rw_texture", eResourceType_Texture);
  cNullResource(&nullBuffer, pScript, "null_buffer", eResourceType_Buffer);
  cNullResource(&nullRwBuffer, pScript, "null_rw_buffer", eResourceType_Buffer);
  cNullResource(&nullDepthTarget, pScript, "null_depth_target", eResourceType_DepthTarget);
  sceneIndices.index = -1;
  p_perPassBuffers = &perPassBuffers;
  sceneIndirectArgs.index = -1;
  v7 = 2i64;
  scenePerSurfData.index = -1;
  do
  {
    TG_GP_PerPassBuffers::TG_GP_PerPassBuffers(p_perPassBuffers++);
    --v7;
  }
  while ( v7 );
  v335.index = -1;
  v411.index = -1;
  if ( (*((_QWORD *)v4 + 1) & 0x4000000000000i64) != 0 )
  {
    memset_0(&stack, 0, sizeof(stack));
    ++stack.handleArgCount;
    stack.handleArgs[0] = (unsigned int *)&v411;
    R_TG_AddTask(pScript, g_R_TG_Def_Util_DebugUav_Clear.m_index, &stack);
  }
  beginToken.index = -1;
  memset_0(&v474, 0, sizeof(v474));
  ++v474.handleArgCount;
  v474.handleArgs[0] = (unsigned int *)&beginToken;
  R_TG_AddTask(pScript, g_R_TG_Def_RBT_Begin3D.m_index, &v474);
  vrsHWMask.index = triIDTexture.index;
  umbraOcclusionTexture.index = -1;
  memset_0(&v473, 0, sizeof(v473));
  ++v473.handleArgCount;
  v473.handleArgs[0] = (unsigned int *)&umbraOcclusionTexture;
  R_TG_AddTask(pScript, g_R_TG_Def_RBT_Umbra_ResolveOcclusion.m_index, &v473);
  index = -1;
  v9 = (*(_QWORD *)v4 >> 44) & 3;
  v274.index = -1;
  sceneVisBuffer.index = -1;
  sceneEntityIDVelocity.index = -1;
  if ( v9 <= 1u )
    index = v346.index;
  ssrMask.index = index;
  v10 = *((_QWORD *)v4 + 1);
  sceneDepth.index = -1;
  prepassWorldToken.index = -1;
  prepassViewModelToken.index = -1;
  token.index = -1;
  shadowIndicesToken.index = -1;
  shadowAsyncToken.index = -1;
  shadowDrawToken.index = -1;
  indiciesToken.index = -1;
  srcTask = -1;
  if ( (v10 & 0x200) == 0 )
  {
    gpConfig.passIndex = GFX_GP_PASS_CAMERA;
    gpConfig.readBackPass = (v10 & 0x2000000000000i64) != 0;
    *(_DWORD *)&gpConfig.isPrepass = 1;
    *(_WORD *)&gpConfig.useVisBufferPrepass = 0;
    R_TGS_GP_ProcessSurfs(pScript, &gpConfig, beginToken, &triIDTexture, &triIDTexture, &umbraOcclusionTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &perPassBuffers, &nullBuffer, &nullRwBuffer, &token);
    srcTask = R_TGS_DrawPrepass(pScript, v4, sceneIndices, perPassBuffers.clusterWorkgroupArgsBuffer, sceneIndirectArgs, scenePerSurfData, vrsHWMask, beginToken, &sceneVisBuffer, &sceneEntityIDVelocity, &sceneDepth, &ssrMask, &prepassViewModelToken, &prepassWorldToken);
  }
  p_sunshadowCascades = &sunshadowCascades;
  v12 = 3i64;
  do
  {
    R_TG_Handle::R_TG_Handle(p_sunshadowCascades++);
    --v12;
  }
  while ( v12 );
  sunshadowCascade0ForViewmodel.index = -1;
  p_sunshadowMins = &sunshadowMins;
  v14 = 3i64;
  do
  {
    R_TG_Handle::R_TG_Handle(p_sunshadowMins++);
    --v14;
  }
  while ( v14 );
  sunshadowMin0ForViewmodel.index = -1;
  p_compressedCascades = &compressedCascades;
  transSunShadow.index = -1;
  v16 = 3i64;
  transSunShadowMask.index = -1;
  sunshadowCache.index = -1;
  sunshadowCacheBackface.index = -1;
  staleCache.index = -1;
  do
  {
    R_TG_Handle::R_TG_Handle(p_compressedCascades++);
    --v16;
  }
  while ( v16 );
  if ( (*(_DWORD *)v4 & 0x402000) != 0 )
  {
    v17 = (*((_QWORD *)v4 + 1) & 0x2000000000000i64) != 0;
    *(_QWORD *)&v422.passIndex = 1i64;
    v422.readBackPass = v17;
    *(_WORD *)&v422.useVisBufferPrepass = 0;
    R_TGS_GP_ProcessSurfs(pScript, &v422, beginToken, &triIDTexture, &triIDTexture, &triIDTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v445, &nullBuffer, &nullRwBuffer, &shadowIndicesToken);
    v18 = *((_QWORD *)v4 + 1);
    if ( (v18 & 0x20000000) != 0 )
    {
      v405.index = -1;
      memset_0(&v461, 0, sizeof(v461));
      m_index = g_R_TG_Def_Util_CreateSceneColorDepthAndClear.m_index;
      v461.handleArgs[0] = (unsigned int *)&v335;
      handleArgCount = v461.handleArgCount + 1;
      v461.handleArgCount = handleArgCount;
      if ( (unsigned int)handleArgCount >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        handleArgCount = v461.handleArgCount;
      }
      v461.handleArgs[handleArgCount] = (unsigned int *)&v405;
      if ( ++v461.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v461.paramArgs[v461.paramArgCount++] = 1;
      R_TG_AddTask(pScript, m_index, &v461);
      v423 = GFX_GP_PASS_SHADOWS;
      cRBTD_ShowTris<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,enum GFX_GP_PASS>(pScript, &v335, &v405, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v423);
      v18 = *((_QWORD *)v4 + 1);
    }
    if ( (v18 & 0x400) != 0 )
      R_TGS_SpotShadows(pScript, v4, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, triIDTexture, beginToken, &staleCache);
    R_TGS_SunShadows(pScript, v4, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, triIDTexture, nullBuffer, beginToken, shadowIndicesToken, &shadowAsyncToken, &shadowDrawToken, &sunshadowCascades, &sunshadowCascade0ForViewmodel, &sunshadowMins, &sunshadowMin0ForViewmodel, &sunshadowCache, &sunshadowCacheBackface, &transSunShadow, &compressedCascades, &transSunShadowMask);
    if ( (*((_DWORD *)v4 + 2) & 0x400i64) == 0 )
      R_TGS_SpotShadows(pScript, v4, sceneIndices, sceneIndirectArgs, scenePerSurfData, nullDepthTarget, triIDTexture, beginToken, &staleCache);
  }
  else
  {
    transSunShadowMask.index = triIDTexture.index;
    transSunShadow.index = triIDTexture.index;
    sunshadowCascade0ForViewmodel.index = triIDTexture.index;
    v514.index = triIDTexture.index;
    sunShadow1.index = triIDTexture.index;
    sunshadowCascades.index = triIDTexture.index;
    sunshadowMin0ForViewmodel.index = triIDTexture.index;
    v520 = triIDTexture.index;
    v519 = triIDTexture.index;
    sunshadowMins.index = triIDTexture.index;
    staleCache.index = triIDTexture.index;
    sunshadowCacheBackface.index = triIDTexture.index;
    sunshadowCache.index = triIDTexture.index;
    v517.index = nullBuffer.index;
    v516.index = nullBuffer.index;
    compressedCascades.index = nullBuffer.index;
    shadowIndicesToken.index = beginToken.index;
    shadowAsyncToken.index = beginToken.index;
  }
  v21 = *((_QWORD *)v4 + 1);
  if ( (v21 & 0x80u) != 0i64 && (v21 & 0x200) == 0 )
    cRBT_ReflectionProbeRelighting_Process<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &staleCache);
  MaxBaseWidth = R_VOL_GetMaxBaseWidth();
  MaxBaseHeight = R_VOL_GetMaxBaseHeight();
  v24 = pScript->sceneSize.v[0];
  v25 = MaxBaseHeight;
  v26 = pScript->sceneSize.v[1];
  v27 = MaxBaseWidth;
  if ( MaxBaseWidth > v24 )
    v27 = pScript->sceneSize.v[0];
  v28 = v27 + 11;
  v29 = MaxBaseHeight;
  v313.index = v28 / 0xC;
  v371 = v28 / 0xC;
  if ( MaxBaseHeight > v26 )
    v29 = v26;
  v292.index = (v29 + 11) / 0xC;
  v370 = v292.index;
  v30 = *((_QWORD *)v4 + 1);
  if ( (v30 & 0x200) != 0 )
  {
    v521.passIndex = GFX_GP_PASS_CAMERA;
    v521.readBackPass = (v30 & 0x2000000000000i64) != 0;
    *(_DWORD *)&v521.isPrepass = 1;
    *(_WORD *)&v521.useVisBufferPrepass = 0;
    R_TGS_GP_ProcessSurfs(pScript, &v521, beginToken, &triIDTexture, &triIDTexture, &umbraOcclusionTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &perPassBuffers, &nullBuffer, &nullRwBuffer, &token);
    if ( *((char *)v4 + 8) < 0 )
      cRBT_ReflectionProbeRelighting_Process<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &staleCache);
    R_TGS_SunShadows_Downsample(pScript, v4, token, &sunshadowCascades, sunshadowCascade0ForViewmodel, &sunshadowMins, &sunshadowMin0ForViewmodel, triIDTexture);
    v31 = R_TGS_DrawPrepass(pScript, v4, sceneIndices, perPassBuffers.clusterWorkgroupArgsBuffer, sceneIndirectArgs, scenePerSurfData, vrsHWMask, beginToken, &sceneVisBuffer, &sceneEntityIDVelocity, &sceneDepth, &ssrMask, &prepassViewModelToken, &prepassWorldToken);
    v24 = pScript->sceneSize.v[0];
    v26 = pScript->sceneSize.v[1];
    srcTask = v31;
  }
  v274.index = sceneVisBuffer.index;
  reflectionGrid.index = -1;
  if ( MaxBaseWidth > v24 )
    MaxBaseWidth = v24;
  v32 = (MaxBaseWidth + 47) / 0x30;
  v288.index = v32;
  v393 = v32;
  if ( v25 > v26 )
    v25 = v26;
  v33 = (v25 + 47) / 0x30;
  v308.index = v33;
  v390 = v33;
  memset_0(&v462, 0, sizeof(v462));
  v34 = g_R_TG_Def_RBT_RP_ProcessView.m_index;
  v462.handleArgs[0] = (unsigned int *)&reflectionGrid;
  if ( ++v462.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 131, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  v462.paramArgs[v462.paramArgCount++] = 96 * v32 * v33;
  if ( v462.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
    __debugbreak();
  v462.handleArgs[v462.handleArgCount++] = (unsigned int *)&shadowAsyncToken;
  R_TG_AddTask(pScript, v34, &v462);
  if ( (*((_BYTE *)v4 + 8) & 0x40) != 0 )
  {
    memset_0(&v454, 0, sizeof(v454));
    v35 = g_R_TG_Def_RBT_LightSensor_Process.m_index;
    v454.handleArgs[0] = (unsigned int *)&sunshadowCascades;
    v36 = v454.handleArgCount + 1;
    v454.handleArgCount = v36;
    if ( (unsigned int)v36 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v36 = v454.handleArgCount;
    }
    v454.handleArgs[v36] = (unsigned int *)&sunShadow1;
    v37 = v454.handleArgCount + 1;
    v454.handleArgCount = v37;
    if ( (unsigned int)v37 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v37 = v454.handleArgCount;
    }
    v454.handleArgs[v37] = (unsigned int *)&transSunShadow;
    v38 = v454.handleArgCount + 1;
    v454.handleArgCount = v38;
    if ( (unsigned int)v38 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v38 = v454.handleArgCount;
    }
    v454.handleArgs[v38] = (unsigned int *)&transSunShadowMask;
    v39 = v454.handleArgCount + 1;
    v454.handleArgCount = v39;
    if ( (unsigned int)v39 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v39 = v454.handleArgCount;
    }
    v454.handleArgs[v39] = (unsigned int *)&staleCache;
    v40 = v454.handleArgCount + 1;
    v454.handleArgCount = v40;
    if ( (unsigned int)v40 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v40 = v454.handleArgCount;
    }
    v454.handleArgs[v40] = (unsigned int *)&prepassViewModelToken;
    ++v454.handleArgCount;
    R_TG_AddTask(pScript, v35, &v454);
  }
  v41 = *(_QWORD *)v4;
  lightGridVol.index = -1;
  lightGridVolHighBands.index = -1;
  if ( (v41 & 2) != 0 )
  {
    if ( (v41 & 4) != 0 )
    {
      RBT_LGV_SampleLightingMultiGrid(pScript, &lightGridVol, &lightGridVolHighBands, &reflectionGrid, &prepassViewModelToken);
      v41 = *(_QWORD *)v4;
      v42 = triIDTexture.index;
    }
    else
    {
      v434 = -1;
      v435 = -1;
      memset_0(&v455, 0, sizeof(v455));
      v43 = g_R_TG_Def_RBT_LGV_SampleLighting.m_index;
      v455.handleArgs[0] = (unsigned int *)&lightGridVol;
      v44 = v455.handleArgCount + 1;
      v455.handleArgCount = v44;
      if ( (unsigned int)v44 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v44 = v455.handleArgCount;
      }
      v455.handleArgs[v44] = (unsigned int *)&lightGridVolHighBands;
      v45 = v455.handleArgCount + 1;
      v455.handleArgCount = v45;
      if ( (unsigned int)v45 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v45 = v455.handleArgCount;
      }
      v455.handleArgs[v45] = (unsigned int *)&reflectionGrid;
      v46 = v455.handleArgCount + 1;
      v455.handleArgCount = v46;
      if ( (unsigned int)v46 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v46 = v455.handleArgCount;
      }
      v455.handleArgs[v46] = (unsigned int *)&v434;
      v47 = v455.handleArgCount + 1;
      v455.handleArgCount = v47;
      if ( (unsigned int)v47 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v47 = v455.handleArgCount;
      }
      v455.handleArgs[v47] = (unsigned int *)&v435;
      v48 = v455.handleArgCount + 1;
      v455.handleArgCount = v48;
      if ( (unsigned int)v48 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v48 = v455.handleArgCount;
      }
      v455.handleArgs[v48] = (unsigned int *)&prepassViewModelToken;
      ++v455.handleArgCount;
      R_TG_AddTask(pScript, v43, &v455);
      v41 = *(_QWORD *)v4;
      v42 = triIDTexture.index;
    }
  }
  else
  {
    v42 = triIDTexture.index;
    lightGridVolHighBands.index = triIDTexture.index;
    lightGridVol.index = triIDTexture.index;
  }
  outDecalIndices.index = -1;
  outDecalDrawData.index = -1;
  outDecalDebugData.index = -1;
  outDecalIndirectArgs.index = -1;
  if ( (v41 & 0x10) != 0 )
    goto LABEL_101;
  if ( (v41 & 8) != 0 )
  {
    cOrderHintBegin(pScript, -100000);
    R_TGS_DV_FillCluster(pScript, (*((_QWORD *)v4 + 1) & 0x100000i64) != 0, (*(_QWORD *)v4 & 0x40) != 0, (*(_QWORD *)v4 & 0x10) != 0, (*(_QWORD *)v4 & 0x20) != 0, (*((_QWORD *)v4 + 1) & 0x400000000i64) != 0, nullBuffer, nullRwBuffer, triIDTexture, triIDTexture, &outDecalIndices, &outDecalDrawData, &outDecalDebugData, &outDecalIndirectArgs, prepassViewModelToken);
    cOrderHintEnd(pScript);
    v41 = *(_QWORD *)v4;
    v42 = triIDTexture.index;
LABEL_101:
    v49 = nullBuffer.index;
    goto LABEL_102;
  }
  v49 = nullBuffer.index;
  outDecalIndirectArgs.index = nullBuffer.index;
  outDecalDebugData.index = nullBuffer.index;
  outDecalDrawData.index = nullBuffer.index;
  outDecalIndices.index = nullBuffer.index;
LABEL_102:
  floatZ.index = -1;
  v50 = -1;
  v309.index = -1;
  v343.index = -1;
  v275.index = -1;
  v289.index = -1;
  velocity.index = -1;
  sceneVelocityHalf.index = -1;
  v375 = -1;
  if ( (v41 & 0x80u) == 0i64 )
  {
    v275.index = v42;
    floatZ.index = v42;
    v289.index = v49;
    v375 = v42;
  }
  else
  {
    memset_0(&v472, 0, sizeof(v472));
    ++v472.handleArgCount;
    v472.handleArgs[0] = (unsigned int *)&v289;
    R_TG_AddTask(pScript, g_R_TG_Def_RBT_Resolve_StencilMaskCreateClear.m_index, &v472);
    v51 = *((_QWORD *)v4 + 1);
    if ( (v51 & 2) != 0 )
    {
      memset_0(&v447, 0, sizeof(v447));
      v52 = g_R_TG_Def_RBT_ResolveFloatZ_Full_MSAA.m_index;
      v447.handleArgs[0] = (unsigned int *)&sceneDepth;
      v53 = v447.handleArgCount + 1;
      v447.handleArgCount = v53;
      if ( (unsigned int)v53 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v53 = v447.handleArgCount;
      }
      v447.handleArgs[v53] = (unsigned int *)&v343;
      v54 = v447.handleArgCount + 1;
      v447.handleArgCount = v54;
      if ( (unsigned int)v54 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v54 = v447.handleArgCount;
      }
      v447.handleArgs[v54] = (unsigned int *)&v309;
      v55 = v447.handleArgCount + 1;
      v447.handleArgCount = v55;
      if ( (unsigned int)v55 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v55 = v447.handleArgCount;
      }
      v447.handleArgs[v55] = (unsigned int *)&v275;
      v56 = v447.handleArgCount + 1;
      v447.handleArgCount = v56;
      if ( (unsigned int)v56 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v56 = v447.handleArgCount;
      }
      v447.handleArgs[v56] = (unsigned int *)&v289;
      v57 = v447.handleArgCount + 1;
      v447.handleArgCount = v57;
      if ( (unsigned int)v57 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v57 = v447.handleArgCount;
      }
      v447.handleArgs[v57] = &v375;
    }
    else if ( (v51 & 1) != 0 )
    {
      memset_0(&v447, 0, sizeof(v447));
      v52 = g_R_TG_Def_RBT_ResolveFloatZ_Full_VRS.m_index;
      v447.handleArgs[0] = (unsigned int *)&sceneDepth;
      v58 = v447.handleArgCount + 1;
      v447.handleArgCount = v58;
      if ( (unsigned int)v58 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v58 = v447.handleArgCount;
      }
      v447.handleArgs[v58] = (unsigned int *)&v343;
      v59 = v447.handleArgCount + 1;
      v447.handleArgCount = v59;
      if ( (unsigned int)v59 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v59 = v447.handleArgCount;
      }
      v447.handleArgs[v59] = (unsigned int *)&v309;
      v60 = v447.handleArgCount + 1;
      v447.handleArgCount = v60;
      if ( (unsigned int)v60 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v60 = v447.handleArgCount;
      }
      v447.handleArgs[v60] = (unsigned int *)&v275;
      v61 = v447.handleArgCount + 1;
      v447.handleArgCount = v61;
      if ( (unsigned int)v61 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v61 = v447.handleArgCount;
      }
      v447.handleArgs[v61] = (unsigned int *)&v289;
    }
    else
    {
      memset_0(&v447, 0, sizeof(v447));
      v52 = g_R_TG_Def_RBT_ResolveFloatZ_Full.m_index;
      v447.handleArgs[0] = (unsigned int *)&sceneDepth;
      v62 = v447.handleArgCount + 1;
      v447.handleArgCount = v62;
      if ( (unsigned int)v62 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v62 = v447.handleArgCount;
      }
      v447.handleArgs[v62] = (unsigned int *)&v343;
      v63 = v447.handleArgCount + 1;
      v447.handleArgCount = v63;
      if ( (unsigned int)v63 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v63 = v447.handleArgCount;
      }
      v447.handleArgs[v63] = (unsigned int *)&v309;
      v64 = v447.handleArgCount + 1;
      v447.handleArgCount = v64;
      if ( (unsigned int)v64 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v64 = v447.handleArgCount;
      }
      v447.handleArgs[v64] = (unsigned int *)&v275;
      v65 = v447.handleArgCount + 1;
      v447.handleArgCount = v65;
      if ( (unsigned int)v65 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v65 = v447.handleArgCount;
      }
      v447.handleArgs[v65] = (unsigned int *)&v289;
    }
    ++v447.handleArgCount;
    v66 = R_TG_AddTask(pScript, v52, &v447);
    v67 = *((_QWORD *)v4 + 1);
    v68 = v66;
    floatZ.index = v343.index;
    if ( (v67 & 0x100) != 0 )
    {
      cAddDependencyInNextTask(pScript, v66);
      if ( (v67 & 1) != 0 )
      {
        memset_0(&v466, 0, sizeof(v466));
        ++v466.handleArgCount;
        v466.handleArgs[0] = (unsigned int *)&v274;
        R_TG_AddTask(pScript, g_R_TG_Def_RBT_DecompressOrFlushTextureMetadata.m_index, &v466);
        cAddDependencyInNextTask(pScript, v68);
        memset_0(&v467, 0, sizeof(v467));
        ++v467.handleArgCount;
        v69 = g_R_TG_Def_RBT_DecompressOrFlushTextureMetadata.m_index;
        v70 = &v467;
        v467.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      }
      else
      {
        memset_0(&v467, 0, sizeof(v467));
        ++v467.handleArgCount;
        v467.handleArgs[0] = (unsigned int *)&v274;
        R_TG_AddTask(pScript, g_R_TG_Def_RBT_DecompressOrFlushTexture.m_index, &v467);
        cAddDependencyInNextTask(pScript, v68);
        memset_0(&v466, 0, sizeof(v466));
        ++v466.handleArgCount;
        v69 = g_R_TG_Def_RBT_DecompressOrFlushTexture.m_index;
        v70 = &v466;
        v466.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      }
      R_TG_AddTask(pScript, v69, v70);
    }
    memset_0(&arguments, 0, sizeof(arguments));
    v71 = g_R_TG_Def_RBT_ResolveFloatZ_DownsampleMipCS.m_index;
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    if ( arguments.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    arguments.paramArgs[arguments.paramArgCount++] = 0;
    v50 = R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v71, &arguments, 1, &floatZ, &v309);
    v72 = 4;
    MipCount = R_RT_GetMipCount(pScript->sceneSize.v[0], pScript->sceneSize.v[1], 0x10u);
    if ( MipCount > 4 )
    {
      do
      {
        memset_0(&v469, 0, sizeof(v469));
        ++v469.paramArgCount;
        v74 = g_R_TG_Def_RBT_ResolveFloatZ_DownsampleMipCS.m_index;
        v469.paramArgs[0] = v72 - 1;
        if ( v469.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v469.paramArgs[v469.paramArgCount++] = 0;
        v72 += 4;
        v50 = R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v74, &v469, 0, &floatZ, &v309);
      }
      while ( v72 < MipCount );
      v4 = v443;
      v33 = v308.index;
    }
    v75 = *((_QWORD *)v4 + 1);
    if ( (v75 & 0x400000) != 0 )
    {
      cRBT_DecompressOrFlushTexture<R_TG_Handle>(pScript, &floatZ);
      v75 = *((_QWORD *)v4 + 1);
    }
    v76 = *(_QWORD *)v4;
    v77 = *(_QWORD *)v4 >> 8;
    v78 = BYTE1(*(_QWORD *)v4) & 1;
    if ( (*(_QWORD *)v4 & 0x100i64) != 0 || (v75 & 0x200) == 0 )
    {
      v394.passIndex = GFX_GP_PASS_CAMERA;
      v394.isPrepass = 0;
      v394.occlusionPass = v77 & 1;
      v394.skipPerSurfData = (v75 & 0x200) != 0;
      v79 = (v76 & 0x200) != 0;
      v80 = v76 >> 10;
      v394.reusePrepassVisData = v79;
      v394.useVisBufferPrepass = v80 & 1;
      if ( (v80 & 1) == 0 || (v394.useMSAAVisBufferPrepass = 1, (v75 & 1) == 0) )
        v394.useMSAAVisBufferPrepass = 0;
      p_floatZ = &floatZ;
      v394.readBackPass = (v75 & 0x2000000000000i64) != 0;
      if ( !v78 )
        p_floatZ = &triIDTexture;
      p_sceneVisBuffer = &sceneVisBuffer;
      if ( (v80 & 1) == 0 )
        p_sceneVisBuffer = &triIDTexture;
      R_TGS_GP_ProcessSurfs(pScript, &v394, beginToken, p_sceneVisBuffer, p_floatZ, &umbraOcclusionTexture, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &perPassBuffers, &nullBuffer, &nullRwBuffer, &indiciesToken);
      v75 = *((_QWORD *)v4 + 1);
    }
    if ( (v75 & 1) != 0 )
    {
      memset_0(&v449, 0, sizeof(v449));
      v83 = g_R_TG_Def_RBT_CompositeStaticVelocityInlineResolve.m_index;
      v449.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      v84 = v449.handleArgCount + 1;
      v449.handleArgCount = v84;
      if ( (unsigned int)v84 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v84 = v449.handleArgCount;
      }
      v449.handleArgs[v84] = (unsigned int *)&floatZ;
      v85 = v449.handleArgCount + 1;
      v449.handleArgCount = v85;
      if ( (unsigned int)v85 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v85 = v449.handleArgCount;
      }
      v449.handleArgs[v85] = (unsigned int *)&v275;
      v86 = v449.handleArgCount + 1;
      v449.handleArgCount = v86;
      if ( (unsigned int)v86 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v86 = v449.handleArgCount;
      }
      v449.handleArgs[v86] = (unsigned int *)&velocity;
      v87 = v449.handleArgCount + 1;
      v449.handleArgCount = v87;
      if ( (unsigned int)v87 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v87 = v449.handleArgCount;
      }
      v449.handleArgs[v87] = (unsigned int *)&sceneVelocityHalf;
    }
    else
    {
      memset_0(&v449, 0, sizeof(v449));
      v83 = g_R_TG_Def_RBT_CompositeStaticVelocity.m_index;
      v449.handleArgs[0] = (unsigned int *)&sceneEntityIDVelocity;
      v88 = v449.handleArgCount + 1;
      v449.handleArgCount = v88;
      if ( (unsigned int)v88 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v88 = v449.handleArgCount;
      }
      v449.handleArgs[v88] = (unsigned int *)&floatZ;
      v89 = v449.handleArgCount + 1;
      v449.handleArgCount = v89;
      if ( (unsigned int)v89 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v89 = v449.handleArgCount;
      }
      v449.handleArgs[v89] = (unsigned int *)&v275;
      v90 = v449.handleArgCount + 1;
      v449.handleArgCount = v90;
      if ( (unsigned int)v90 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v90 = v449.handleArgCount;
      }
      v449.handleArgs[v90] = (unsigned int *)&velocity;
      v91 = v449.handleArgCount + 1;
      v449.handleArgCount = v91;
      if ( (unsigned int)v91 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v91 = v449.handleArgCount;
      }
      v449.handleArgs[v91] = (unsigned int *)&sceneVelocityHalf;
    }
    ++v449.handleArgCount;
    R_TG_AddTask(pScript, v83, &v449);
    v41 = *(_QWORD *)v4;
    v49 = nullBuffer.index;
    v32 = v288.index;
  }
  if ( (v41 & 0x10) != 0 )
  {
    if ( (v41 & 8) != 0 )
    {
      cOrderHintBegin(pScript, -100000);
      R_TGS_DV_FillCluster(pScript, (*((_QWORD *)v4 + 1) & 0x100000i64) != 0, (*(_QWORD *)v4 & 0x40) != 0, (*(_QWORD *)v4 & 0x10) != 0, (*(_QWORD *)v4 & 0x20) != 0, (*((_QWORD *)v4 + 1) & 0x400000000i64) != 0, nullBuffer, nullRwBuffer, triIDTexture, floatZ, &outDecalIndices, &outDecalDrawData, &outDecalDebugData, &outDecalIndirectArgs, prepassViewModelToken);
      cOrderHintEnd(pScript);
      v41 = *(_QWORD *)v4;
    }
    else
    {
      outDecalIndirectArgs.index = v49;
      outDecalDebugData.index = v49;
      outDecalDrawData.index = v49;
      outDecalIndices.index = v49;
    }
  }
  v310.index = -1;
  if ( (v41 & 1) != 0 )
  {
    cAddDependencyInNextTask(pScript, v50);
    v92 = ((pScript->sceneSize.v[1] + 7) >> 3) * ((pScript->sceneSize.v[0] + 7) & 0xFFFFFFF8);
    memset_0(&v476, 0, sizeof(v476));
    ++v476.handleArgCount;
    v476.handleArgs[0] = (unsigned int *)&v310;
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_FL_TileCreateClear.m_index, &v476, v92);
    memset_0(&v470, 0, sizeof(v470));
    v93 = g_R_TG_Def_RBT_FL_TileWrite.m_index;
    v470.handleArgs[0] = (unsigned int *)&sceneDepth;
    v94 = v470.handleArgCount + 1;
    v470.handleArgCount = v94;
    if ( (unsigned int)v94 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v94 = v470.handleArgCount;
    }
    v470.handleArgs[v94] = (unsigned int *)&v310;
    ++v470.handleArgCount;
    R_TG_AddTask(pScript, v93, &v470);
  }
  else
  {
    v310.index = cExternalResource(&v438, pScript, "default_buffer", eResourceType_Buffer, 0x100000u, 1u, 1u, 0x200u)->index;
  }
  v95 = (*((_BYTE *)v4 + 8) & 1) == 0;
  vrsSWMask.index = -1;
  v352.index = -1;
  v364.index = -1;
  v360.index = -1;
  if ( v95 )
  {
    v110 = triIDTexture.index;
    vrsSWMask.index = triIDTexture.index;
    v352.index = triIDTexture.index;
    v364.index = triIDTexture.index;
    v360.index = triIDTexture.index;
  }
  else
  {
    memset_0(&v457, 0, sizeof(v457));
    v96 = g_R_TG_Def_RBT_VRS_CreateResources.m_index;
    v457.handleArgs[0] = (unsigned int *)&vrsSWMask;
    v97 = v457.handleArgCount + 1;
    v457.handleArgCount = v97;
    if ( (unsigned int)v97 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v97 = v457.handleArgCount;
    }
    v457.handleArgs[v97] = (unsigned int *)&v352;
    v98 = v457.handleArgCount + 1;
    v457.handleArgCount = v98;
    if ( (unsigned int)v98 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v98 = v457.handleArgCount;
    }
    v457.handleArgs[v98] = (unsigned int *)&v364;
    v99 = v457.handleArgCount + 1;
    v457.handleArgCount = v99;
    if ( (unsigned int)v99 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v99 = v457.handleArgCount;
    }
    v457.handleArgs[v99] = (unsigned int *)&v360;
    v100 = v457.handleArgCount + 1;
    v457.handleArgCount = v100;
    if ( (unsigned int)v100 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v100 = v457.handleArgCount;
    }
    v457.handleArgs[v100] = (unsigned int *)&v274;
    ++v457.handleArgCount;
    R_TG_AddTask(pScript, v96, &v457);
    memset_0(&v452, 0, sizeof(v452));
    v101 = g_R_TG_Def_RBT_VRS_ResolveMask.m_index;
    v452.handleArgs[0] = (unsigned int *)&vrsSWMask;
    v102 = v452.handleArgCount + 1;
    v452.handleArgCount = v102;
    if ( (unsigned int)v102 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v102 = v452.handleArgCount;
    }
    v452.handleArgs[v102] = (unsigned int *)&v352;
    v103 = v452.handleArgCount + 1;
    v452.handleArgCount = v103;
    if ( (unsigned int)v103 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v103 = v452.handleArgCount;
    }
    v452.handleArgs[v103] = (unsigned int *)&v352;
    v104 = v452.handleArgCount + 1;
    v452.handleArgCount = v104;
    if ( (unsigned int)v104 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v104 = v452.handleArgCount;
    }
    v452.handleArgs[v104] = (unsigned int *)&v364;
    v105 = v452.handleArgCount + 1;
    v452.handleArgCount = v105;
    if ( (unsigned int)v105 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v105 = v452.handleArgCount;
    }
    v452.handleArgs[v105] = (unsigned int *)&v360;
    v106 = v452.handleArgCount + 1;
    v452.handleArgCount = v106;
    if ( (unsigned int)v106 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v106 = v452.handleArgCount;
    }
    v452.handleArgs[v106] = (unsigned int *)&velocity;
    v107 = v452.handleArgCount + 1;
    v452.handleArgCount = v107;
    if ( (unsigned int)v107 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v107 = v452.handleArgCount;
    }
    v452.handleArgs[v107] = (unsigned int *)&velocity;
    v108 = v452.handleArgCount + 1;
    v452.handleArgCount = v108;
    if ( (unsigned int)v108 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v108 = v452.handleArgCount;
    }
    v452.handleArgs[v108] = (unsigned int *)&sceneVisBuffer;
    v109 = v452.handleArgCount + 1;
    v452.handleArgCount = v109;
    if ( (unsigned int)v109 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v109 = v452.handleArgCount;
    }
    v452.handleArgs[v109] = (unsigned int *)&sceneDepth;
    ++v452.handleArgCount;
    R_TG_AddTask(pScript, v101, &v452);
    v110 = triIDTexture.index;
  }
  v111 = *(_QWORD *)v4;
  v331.index = -1;
  v297.index = -1;
  if ( (v111 & 0x2000) != 0 )
  {
    upsampledRt.index = -1;
    value.index = -1;
    if ( (v111 & 0x800) != 0 )
    {
      if ( (v111 & 0x1000) != 0 )
      {
        memset_0(&v477, 0, sizeof(v477));
        ++v477.handleArgCount;
        v477.handleArgs[0] = (unsigned int *)&upsampledRt;
        R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_SunShadow_CreateVisibilityIndirectBuffers.m_index, &v477, &value);
      }
      else
      {
        upsampledRt.index = nullBuffer.index;
        value.index = nullBuffer.index;
      }
      memset_0(&v446, 0, sizeof(v446));
      v446.handleArgs[0] = (unsigned int *)&floatZ;
      v112 = v446.handleArgCount + 1;
      v95 = (*((_BYTE *)v4 + 8) & 1) == 0;
      ++v446.handleArgCount;
      if ( v95 )
      {
        v122 = g_R_TG_Def_RBT_SunShadow_GenerateVisibilityPrepass.m_index;
        if ( (unsigned int)v112 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v112 = v446.handleArgCount;
        }
        v446.handleArgs[v112] = (unsigned int *)&v309;
        v123 = v446.handleArgCount + 1;
        v446.handleArgCount = v123;
        if ( (unsigned int)v123 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v123 = v446.handleArgCount;
        }
        v446.handleArgs[v123] = (unsigned int *)&sunshadowMin0ForViewmodel;
        v124 = v446.handleArgCount + 1;
        v446.handleArgCount = v124;
        if ( (unsigned int)v124 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v124 = v446.handleArgCount;
        }
        v446.handleArgs[v124] = (unsigned int *)&sunshadowMins;
        v125 = v446.handleArgCount + 1;
        v446.handleArgCount = v125;
        if ( (unsigned int)v125 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v125 = v446.handleArgCount;
        }
        v446.handleArgs[v125] = &v519;
        v126 = v446.handleArgCount + 1;
        v446.handleArgCount = v126;
        if ( (unsigned int)v126 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v126 = v446.handleArgCount;
        }
        v446.handleArgs[v126] = &v520;
        v127 = v446.handleArgCount + 1;
        v446.handleArgCount = v127;
        if ( (unsigned int)v127 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v127 = v446.handleArgCount;
        }
        v446.handleArgs[v127] = (unsigned int *)&v289;
        v128 = v446.handleArgCount + 1;
        v446.handleArgCount = v128;
        if ( (unsigned int)v128 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v128 = v446.handleArgCount;
        }
        v446.handleArgs[v128] = (unsigned int *)&v297;
        v129 = v446.handleArgCount + 1;
        v446.handleArgCount = v129;
        if ( (unsigned int)v129 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v129 = v446.handleArgCount;
        }
        v446.handleArgs[v129] = (unsigned int *)&upsampledRt;
        ++v446.handleArgCount;
        R_TG_AddTask<>(pScript, v122, &v446, &value);
      }
      else
      {
        v113 = g_R_TG_Def_RBT_SunShadow_GenerateVisibilityPrepassVRS.m_index;
        if ( (unsigned int)v112 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v112 = v446.handleArgCount;
        }
        v446.handleArgs[v112] = (unsigned int *)&v309;
        v114 = v446.handleArgCount + 1;
        v446.handleArgCount = v114;
        if ( (unsigned int)v114 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v114 = v446.handleArgCount;
        }
        v446.handleArgs[v114] = (unsigned int *)&sunshadowMin0ForViewmodel;
        v115 = v446.handleArgCount + 1;
        v446.handleArgCount = v115;
        if ( (unsigned int)v115 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v115 = v446.handleArgCount;
        }
        v446.handleArgs[v115] = (unsigned int *)&sunshadowMins;
        v116 = v446.handleArgCount + 1;
        v446.handleArgCount = v116;
        if ( (unsigned int)v116 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v116 = v446.handleArgCount;
        }
        v446.handleArgs[v116] = &v519;
        v117 = v446.handleArgCount + 1;
        v446.handleArgCount = v117;
        if ( (unsigned int)v117 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v117 = v446.handleArgCount;
        }
        v446.handleArgs[v117] = &v520;
        v118 = v446.handleArgCount + 1;
        v446.handleArgCount = v118;
        if ( (unsigned int)v118 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v118 = v446.handleArgCount;
        }
        v446.handleArgs[v118] = (unsigned int *)&v289;
        v119 = v446.handleArgCount + 1;
        v446.handleArgCount = v119;
        if ( (unsigned int)v119 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v119 = v446.handleArgCount;
        }
        v446.handleArgs[v119] = (unsigned int *)&v297;
        v120 = v446.handleArgCount + 1;
        v446.handleArgCount = v120;
        if ( (unsigned int)v120 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v120 = v446.handleArgCount;
        }
        v446.handleArgs[v120] = (unsigned int *)&upsampledRt;
        v121 = v446.handleArgCount + 1;
        v446.handleArgCount = v121;
        if ( (unsigned int)v121 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v121 = v446.handleArgCount;
        }
        v446.handleArgs[v121] = (unsigned int *)&value;
        ++v446.handleArgCount;
        R_TG_AddTask<>(pScript, v113, &v446, &v364);
      }
    }
    else
    {
      v297.index = nullBuffer.index;
      upsampledRt.index = nullBuffer.index;
      value.index = nullBuffer.index;
    }
    memset_0(&v448, 0, sizeof(v448));
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
    {
      v130 = g_R_TG_Def_RBT_SunShadow_GenerateVisibilityInlineResolve.m_index;
      v448.handleArgs[0] = (unsigned int *)&sunshadowCascades;
      v131 = v448.handleArgCount + 1;
      v448.handleArgCount = v131;
      if ( (unsigned int)v131 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v131 = v448.handleArgCount;
      }
      v448.handleArgs[v131] = (unsigned int *)&sunShadow1;
      v132 = v448.handleArgCount + 1;
      v448.handleArgCount = v132;
      if ( (unsigned int)v132 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v132 = v448.handleArgCount;
      }
      v448.handleArgs[v132] = (unsigned int *)&v514;
      v133 = v448.handleArgCount + 1;
      v448.handleArgCount = v133;
      if ( (unsigned int)v133 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v133 = v448.handleArgCount;
      }
      v448.handleArgs[v133] = (unsigned int *)&sunshadowCascade0ForViewmodel;
      v134 = v448.handleArgCount + 1;
      v448.handleArgCount = v134;
      if ( (unsigned int)v134 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v134 = v448.handleArgCount;
      }
      v448.handleArgs[v134] = (unsigned int *)&transSunShadow;
      v135 = v448.handleArgCount + 1;
      v448.handleArgCount = v135;
      if ( (unsigned int)v135 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v135 = v448.handleArgCount;
      }
      v448.handleArgs[v135] = (unsigned int *)&transSunShadowMask;
      v136 = v448.handleArgCount + 1;
      v448.handleArgCount = v136;
      if ( (unsigned int)v136 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v136 = v448.handleArgCount;
      }
      v448.handleArgs[v136] = (unsigned int *)&floatZ;
      v137 = v448.handleArgCount + 1;
      v448.handleArgCount = v137;
      if ( (unsigned int)v137 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v137 = v448.handleArgCount;
      }
      v448.handleArgs[v137] = (unsigned int *)&v274;
      v138 = v448.handleArgCount + 1;
      v448.handleArgCount = v138;
      if ( (unsigned int)v138 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v138 = v448.handleArgCount;
      }
      v448.handleArgs[v138] = (unsigned int *)&v331;
      v139 = v448.handleArgCount + 1;
      v448.handleArgCount = v139;
      if ( (unsigned int)v139 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v139 = v448.handleArgCount;
      }
      v448.handleArgs[v139] = (unsigned int *)&v297;
      v140 = v448.handleArgCount + 1;
      v448.handleArgCount = v140;
      if ( (unsigned int)v140 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v140 = v448.handleArgCount;
      }
      v448.handleArgs[v140] = (unsigned int *)&upsampledRt;
      ++v448.handleArgCount;
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, v130, &v448, &value, &compressedCascades, &v516, &v517, &v360);
      v110 = triIDTexture.index;
    }
    else
    {
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_SunShadow_GenerateVisibility.m_index, &v448, &sunshadowCascades, &sunShadow1, &v514, &sunshadowCascade0ForViewmodel, &transSunShadow, &transSunShadowMask, &floatZ, &v274, &v331, &v297, &upsampledRt, &value, &compressedCascades, &v516, &v517);
      v110 = triIDTexture.index;
    }
  }
  else
  {
    v297.index = nullBuffer.index;
    v331.index = v110;
  }
  v141 = *(_QWORD *)v4;
  v344.index = -1;
  if ( (v141 & 0x8000000) != 0 )
  {
    v410.index = -1;
    memset_0(&v508, 0, sizeof(v508));
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_DXR_Add.m_index, &v508, &v410);
    v413.index = -1;
    memset_0(&v509, 0, sizeof(v509));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_DXR_BuildBlas.m_index, &v509, &v410, &v413);
    v418.index = -1;
    memset_0(&v487, 0, sizeof(v487));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_DXR_BuildTlas.m_index, &v487, &v413, &v418);
    v385.index = -1;
    v414 = -1;
    memset_0(&v471, 0, sizeof(v471));
    v142 = g_R_TG_Def_RBT_DXR_SpotshadowsIndices.m_index;
    v471.handleArgs[0] = (unsigned int *)&v385;
    v143 = v471.handleArgCount + 1;
    v471.handleArgCount = v143;
    if ( (unsigned int)v143 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v143 = v471.handleArgCount;
    }
    v471.handleArgs[v143] = &v414;
    ++v471.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v142, &v471, &v310, &sceneDepth);
    v144 = 0;
    LODWORD(v145) = (pScript->sceneSize.v[1] >> 4) * (pScript->sceneSize.v[0] >> 4);
    v384.index = v414;
    v417 = 0;
    for ( i = v145; (unsigned int)v145 > 1; v417 = v144 )
    {
      v416.index = -1;
      v145 = ((unsigned __int64)(unsigned int)v145 + 511) >> 9;
      i = v145;
      cRBT_DXR_SpotshadowsSumLightCount<R_TG_Handle,unsigned int,R_TG_Handle,R_TG_Handle,unsigned int>(pScript, &v416, &i, &v384, &sceneDepth, &v417);
      ++v144;
      v384.index = v416.index;
    }
    v146 = *(_DWORD *)v4;
    v419 = -1;
    v420 = -1;
    v147 = ((v146 & 0x10000000) != 0i64) + 1;
    memset_0(&v451, 0, sizeof(v451));
    v148 = g_R_TG_Def_RBT_DXR_SpotshadowsVisibility.m_index;
    v451.handleArgs[0] = (unsigned int *)&v419;
    if ( ++v451.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 140, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v451.paramArgs[v451.paramArgCount++] = v147;
    if ( v451.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v451.handleArgs[v451.handleArgCount] = (unsigned int *)&v420;
    v149 = v451.handleArgCount + 1;
    v451.handleArgCount = v149;
    if ( (unsigned int)v149 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v149 = v451.handleArgCount;
    }
    v451.handleArgs[v149] = (unsigned int *)&sceneDepth;
    v150 = v451.handleArgCount + 1;
    v451.handleArgCount = v150;
    if ( (unsigned int)v150 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v150 = v451.handleArgCount;
    }
    v451.handleArgs[v150] = (unsigned int *)&v274;
    v151 = v451.handleArgCount + 1;
    v451.handleArgCount = v151;
    if ( (unsigned int)v151 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v151 = v451.handleArgCount;
    }
    v451.handleArgs[v151] = (unsigned int *)&velocity;
    v152 = v451.handleArgCount + 1;
    v451.handleArgCount = v152;
    if ( (unsigned int)v152 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v152 = v451.handleArgCount;
    }
    v451.handleArgs[v152] = (unsigned int *)&velocity;
    v153 = v451.handleArgCount + 1;
    v451.handleArgCount = v153;
    if ( (unsigned int)v153 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v153 = v451.handleArgCount;
    }
    v451.handleArgs[v153] = (unsigned int *)&v275;
    v154 = v451.handleArgCount + 1;
    v451.handleArgCount = v154;
    if ( (unsigned int)v154 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v154 = v451.handleArgCount;
    }
    v451.handleArgs[v154] = (unsigned int *)&v310;
    v155 = v451.handleArgCount + 1;
    v451.handleArgCount = v155;
    if ( (unsigned int)v155 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v155 = v451.handleArgCount;
    }
    v451.handleArgs[v155] = (unsigned int *)&v385;
    ++v451.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v148, &v451, &v384, &v418);
    v396.index = -1;
    v395.index = -1;
    memset_0(&v458, 0, sizeof(v458));
    v156 = g_R_TG_Def_RBT_DXR_SpotshadowsTemporalDenoiser.m_index;
    v458.handleArgs[0] = (unsigned int *)&v396;
    v157 = v458.handleArgCount + 1;
    v458.handleArgCount = v157;
    if ( (unsigned int)v157 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v157 = v458.handleArgCount;
    }
    v458.handleArgs[v157] = (unsigned int *)&v395;
    v158 = v458.handleArgCount + 1;
    v458.handleArgCount = v158;
    if ( (unsigned int)v158 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v158 = v458.handleArgCount;
    }
    v458.handleArgs[v158] = (unsigned int *)&v419;
    v159 = v458.handleArgCount + 1;
    v458.handleArgCount = v159;
    if ( (unsigned int)v159 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v159 = v458.handleArgCount;
    }
    v458.handleArgs[v159] = (unsigned int *)&v420;
    v160 = v458.handleArgCount + 1;
    v458.handleArgCount = v160;
    if ( (unsigned int)v160 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v160 = v458.handleArgCount;
    }
    v458.handleArgs[v160] = (unsigned int *)&sceneDepth;
    ++v458.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v156, &v458, &velocity, &velocity);
    cRBT_DXR_SpotshadowsSpatialDenoiser<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v344, &v396, &v395, &v385, &floatZ, &v274);
    v141 = *(_QWORD *)v4;
    v110 = triIDTexture.index;
  }
  else
  {
    v344.index = v110;
  }
  v306.index = -1;
  if ( (v141 & 0x60000000) == 0 )
    goto LABEL_512;
  v280.index = -1;
  if ( (v141 & 0x40000000) != 0 )
  {
    memset_0(&v468, 0, sizeof(v468));
    ++v468.handleArgCount;
    v95 = (*((_BYTE *)v4 + 8) & 1) == 0;
    v161 = g_R_TG_Def_RBT_MDAO_DrawVolumeOccludersInlineResolve.m_index;
    v468.handleArgs[0] = (unsigned int *)&floatZ;
    if ( v95 )
      v161 = g_R_TG_Def_RBT_MDAO_DrawVolumeOccluders.m_index;
    R_TG_AddTask<R_TG_Handle>(pScript, v161, &v468, &v274, &v280);
    v356.index = -1;
    v386.index = -1;
    memset_0(&v488, 0, sizeof(v488));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_MDAO_ComputeTileBoundingBoxes.m_index, &v488, &floatZ, &v356);
    memset_0(&v489, 0, sizeof(v489));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_MDAO_CullOccluders.m_index, &v489, &v356, &v386);
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
      cRBT_MDAO_ComputeOcclusionInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v356, &v386, &floatZ, &v274, &v280);
    else
      cRBT_MDAO_ComputeOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v356, &v386, &floatZ, &v274, &v280);
    v141 = *(_QWORD *)v4;
    v110 = v280.index;
  }
  else
  {
    v280.index = v110;
  }
  if ( (v141 & 0x20000000) != 0 )
  {
    cAsyncBegin(pScript);
    v389.index = -1;
    v397.index = -1;
    v398.index = -1;
    memset_0(&v478, 0, sizeof(v478));
    ++v478.handleArgCount;
    v478.handleArgs[0] = (unsigned int *)&v397;
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSAO_GenerateAOPrepass.m_index, &v478, &v309, &v343);
    memset_0(&v490, 0, sizeof(v490));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSAO_FilterAOPrepassHorizontal.m_index, &v490, &v398, &v397);
    memset_0(&v491, 0, sizeof(v491));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSAO_FilterAOPrepassVertical.m_index, &v491, &v389, &v398);
    memset_0(&v450, 0, sizeof(v450));
    v450.handleArgs[0] = (unsigned int *)&v306;
    v162 = v450.handleArgCount + 1;
    v95 = (*((_BYTE *)v4 + 8) & 1) == 0;
    ++v450.handleArgCount;
    if ( v95 )
    {
      v163 = g_R_TG_Def_RBT_SSAO_GenerateAO.m_index;
      if ( (unsigned int)v162 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v162 = v450.handleArgCount;
      }
      v450.handleArgs[v162] = (unsigned int *)&floatZ;
      v167 = v450.handleArgCount + 1;
      v450.handleArgCount = v167;
      if ( (unsigned int)v167 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v167 = v450.handleArgCount;
      }
      v450.handleArgs[v167] = (unsigned int *)&velocity;
      v168 = v450.handleArgCount + 1;
      v450.handleArgCount = v168;
      if ( (unsigned int)v168 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v168 = v450.handleArgCount;
      }
      v450.handleArgs[v168] = (unsigned int *)&velocity;
      v169 = v450.handleArgCount + 1;
      v450.handleArgCount = v169;
      if ( (unsigned int)v169 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v169 = v450.handleArgCount;
      }
      v450.handleArgs[v169] = (unsigned int *)&v274;
    }
    else
    {
      v163 = g_R_TG_Def_RBT_SSAO_GenerateAOInlineResolve.m_index;
      if ( (unsigned int)v162 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v162 = v450.handleArgCount;
      }
      v450.handleArgs[v162] = (unsigned int *)&floatZ;
      v164 = v450.handleArgCount + 1;
      v450.handleArgCount = v164;
      if ( (unsigned int)v164 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v164 = v450.handleArgCount;
      }
      v450.handleArgs[v164] = (unsigned int *)&velocity;
      v165 = v450.handleArgCount + 1;
      v450.handleArgCount = v165;
      if ( (unsigned int)v165 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v165 = v450.handleArgCount;
      }
      v450.handleArgs[v165] = (unsigned int *)&velocity;
      v166 = v450.handleArgCount + 1;
      v450.handleArgCount = v166;
      if ( (unsigned int)v166 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v166 = v450.handleArgCount;
      }
      v450.handleArgs[v166] = (unsigned int *)&v274;
    }
    ++v450.handleArgCount;
    R_TG_AddTask<R_TG_Handle>(pScript, v163, &v450, &v280, &v389);
    cAsyncEnd(pScript);
  }
  else
  {
LABEL_512:
    v306.index = v110;
  }
  lightsCluster.index = -1;
  cAddDependencyInNextTask(pScript, v50);
  v170 = v32 * v33;
  v437 = (v32 * v33) << 8;
  memset_0(&v492, 0, sizeof(v492));
  R_TG_AddTask<unsigned int>(pScript, g_R_TG_Def_RBT_FL_ClusterCreateClear.m_index, &v492, &lightsCluster, &v437);
  memset_0(&v493, 0, sizeof(v493));
  R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_FL_ClusterWrite.m_index, &v493, &lightsCluster);
  v171 = *(_QWORD *)v4;
  outCreateRt.index = -1;
  if ( (v171 & 0x4200000000i64) != 0 || (v171 & 0x300000000000i64) != 0 )
    R_TGS_DistortionCreateRt(pScript, *((_BYTE *)v4 + 8) & 1, sceneDepth, &outCreateRt, 1);
  else
    outCreateRt.index = triIDTexture.index;
  v400.index = -1;
  memset_0(&v494, 0, sizeof(v494));
  R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_MayhemSelfVis_UpdateAnimBuffer.m_index, &v494, &v400);
  v172 = 258;
  sceneColor.index = -1;
  v399 = 258;
  memset_0(&v484, 0, sizeof(v484));
  v173 = g_R_TG_Def_Util_CreateSceneColorVRS.m_index;
  if ( (*((_BYTE *)v4 + 8) & 1) == 0 )
    v173 = g_R_TG_Def_Util_CreateSceneColor.m_index;
  R_TG_AddTask<unsigned int>(pScript, v173, &v484, &sceneColor, &v399);
  scope.index = -1;
  if ( (*(_QWORD *)v4 & 0x2000000000000i64) != 0 )
  {
    R_Lens_GetScopeRtSize(pScript->sceneSize.v[0], pScript->sceneSize.v[1], &width, &height);
    cAddDependencyInNextTask(pScript, srcTask);
    memset_0(&v495, 0, sizeof(v495));
    R_TG_AddTask<unsigned int,unsigned int>(pScript, g_R_TG_Def_RBT_Lens_ScopeDistortion.m_index, &v495, &scope, &width, &height);
    memset_0(&v496, 0, sizeof(v496));
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_Lens_ForceReadBuffer.m_index, &v496, &scope);
    v174 = triIDTexture.index;
  }
  else
  {
    v174 = triIDTexture.index;
    scope.index = triIDTexture.index;
  }
  v175 = (*(_QWORD *)v4 >> 44) & 3i64;
  v330.index = -1;
  if ( v175 == 2 )
  {
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
      cRBT_SSR_DeferredTraceLQInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v330, &floatZ, &v274, &ssrMask, &scope);
    else
      cRBT_SSR_DeferredTraceLQ<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v330, &floatZ, &v274, &ssrMask, &scope);
  }
  else if ( v175 == 3 )
  {
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
      cRBT_SSR_DeferredTraceHQInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v330, &floatZ, &v274, &ssrMask, &scope);
    else
      cRBT_SSR_DeferredTraceHQ<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v330, &floatZ, &v274, &ssrMask, &scope);
  }
  else
  {
    v330.index = v174;
  }
  v327.index = nullRwBuffer.index;
  v401.index = -1;
  memset_0(&v497, 0, sizeof(v497));
  R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_Util_KickoffToken.m_index, &v497, &sceneColor, &v401);
  syncToken.index = -1;
  cRBT_DrawOpaque<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &v310, &lightsCluster, &reflectionGrid, &lightGridVol, &lightGridVolHighBands, &floatZ, &v306, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &outDecalIndices, &outDecalDrawData, &v331, &staleCache, &v344, &outCreateRt, &v330, &vrsHWMask, &v327, &scope, &v400, &syncToken, &v289, &v297);
  volScattering.index = -1;
  volExtinction.index = -1;
  v354.index = -1;
  v361.index = -1;
  volVisibility.index = -1;
  v323.index = -1;
  v351.index = -1;
  if ( (*(_QWORD *)v4 & 0x20000000000i64) != 0 )
  {
    cAsyncBegin(pScript);
    v320.index = -1;
    v404.index = -1;
    cRBT_VOL_MaxFloatZ<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,unsigned int,unsigned int,R_TG_Handle>(pScript, &volVisibility, &v323, &v320, &v404, &floatZ, &v371, &v370, &v393, &v390, &v401);
    v176 = *(_QWORD *)v4;
    v358.index = -1;
    if ( (v176 & 0x40000000000i64) != 0 )
    {
      v387.index = -1;
      if ( (v176 & 0x80000000004i64) == 0x80000000004i64 )
      {
        v403.index = -1;
        v402.index = -1;
        v442 = 165 * v170;
        v441 = 5 * ((unsigned int)(v170 << 7) >> 2);
        memset_0(&v463, 0, sizeof(v463));
        R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,R_TG_Handle>(pScript, g_R_TG_Def_RBT_VOL_SampleAmbientMultiLightGrid.m_index, &v463, &v323, &floatZ, &v403, &v402, &v387, &v442, &v441, &prepassViewModelToken);
        memset_0(&v498, 0, sizeof(v498));
        R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int>(pScript, g_R_TG_Def_RBT_VOL_CombineAmbientMultiLightGrid.m_index, &v498, &v358, &v323, &v323, &floatZ, &v351, &v403, &v402, &v393, &v390);
      }
      else
      {
        memset_0(&v463, 0, sizeof(v463));
        v177 = g_R_TG_Def_RBT_VOL_SampleAmbient.m_index;
        v463.handleArgs[0] = (unsigned int *)&v358;
        v178 = v463.handleArgCount + 1;
        v463.handleArgCount = v178;
        if ( (unsigned int)v178 >= 0x1E )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
            __debugbreak();
          v178 = v463.handleArgCount;
        }
        v463.handleArgs[v178] = (unsigned int *)&v387;
        ++v463.handleArgCount;
        R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,R_TG_Handle>(pScript, v177, &v463, &v404, &floatZ, &v323, &v323, &v351, &v393, &v390, &prepassViewModelToken);
      }
    }
    else
    {
      v358.index = triIDTexture.index;
      v351.index = triIDTexture.index;
    }
    v179 = v32 * v33;
    v425 = v179 << 8;
    v424 = 32 * v179;
    memset_0(&v499, 0, sizeof(v499));
    R_TG_AddTask<R_TG_Handle,unsigned int,unsigned int,R_TG_Handle>(pScript, g_R_TG_Def_RBT_VOL_WriteClusterBuffer.m_index, &v499, &v354, &v361, &v425, &v424, &shadowAsyncToken);
    v426 = v179 << 7;
    v429 = -1;
    v359.index = -1;
    v369.index = -1;
    v348.index = -1;
    memset_0(&v500, 0, sizeof(v500));
    R_TG_AddTask<>(pScript, g_R_TG_Def_RBT_VOL_ClearIndirectScattering.m_index, &v500, &v369);
    memset_0(&v465, 0, sizeof(v465));
    v180 = g_R_TG_Def_RBT_VOL_FillIndirectScattering.m_index;
    v465.handleArgs[0] = (unsigned int *)&v323;
    v181 = v465.handleArgCount + 1;
    v465.handleArgCount = v181;
    if ( (unsigned int)v181 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v181 = v465.handleArgCount;
    }
    v465.handleArgs[v181] = (unsigned int *)&v354;
    ++v465.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int>(pScript, v180, &v465, &v361, &lightsCluster, &v369, &v348, &v426);
    v427 = v292.index >> 1;
    v428 = v313.index >> 1;
    v373.index = -1;
    v372.index = -1;
    cRBT_VOL_CreateResourcesScattering<R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int,unsigned int,unsigned int>(pScript, &v373, &v372, &v359, &v371, &v370, &v428, &v427);
    v182 = 0;
    v288.index = 0;
    do
    {
      cRBT_VOL_Scattering<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,int>(pScript, &v320, &v358, &v354, &v361, &lightsCluster, &v373, &v372, &v359, &v359, &sunshadowCascades, &sunShadow1, &transSunShadow, &transSunShadowMask, &staleCache, &v369, &v348, &volVisibility, (const int *)&v288);
      v288.index = ++v182;
    }
    while ( v182 < 4 );
    memset_0(&v479, 0, sizeof(v479));
    ++v479.handleArgCount;
    v479.handleArgs[0] = (unsigned int *)&v429;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int>(pScript, g_R_TG_Def_RBT_VOL_Accumulate.m_index, &v479, &v359, &volVisibility, &volVisibility, &volScattering, &volExtinction, &v373, &v372, &v371, &v370);
    cAsyncEnd(pScript);
  }
  else
  {
    volVisibility.index = triIDTexture.index;
    v351.index = triIDTexture.index;
    v361.index = triIDTexture.index;
    v354.index = triIDTexture.index;
    volExtinction.index = triIDTexture.index;
    volScattering.index = triIDTexture.index;
  }
  v183 = *(_QWORD *)v4;
  v294.index = -1;
  if ( (v183 & 0x80000000) != 0 )
  {
    memset_0(&v501, 0, sizeof(v501));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_WaveWaterFloatZ_CreateClear.m_index, &v501, &v294, &floatZ);
  }
  else
  {
    v294.index = v346.index;
  }
  memset_0(&v502, 0, sizeof(v502));
  R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawDecal.m_index, &v502, &sceneColor, &sceneDepth, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &vrsHWMask, &v327, &scope, &v294);
  v184 = *(_QWORD *)v4;
  if ( (*(_QWORD *)v4 & 0x800000000000i64) != 0 )
  {
    v185 = *((_QWORD *)v4 + 1);
    v362.index = -1;
    if ( (v185 & 0x200000) == 0 || (v95 = (v185 & 1) == 0, v186 = 2304, !v95) )
      v186 = 256;
    v430 = v186;
    memset_0(&v503, 0, sizeof(v503));
    R_TG_AddTask<unsigned int>(pScript, g_R_TG_Def_Util_CreateSSSColor.m_index, &v503, &v362, &v430);
    v187 = *((_QWORD *)v4 + 1);
    v278.index = -1;
    v300.index = -1;
    if ( (v187 & 0x200000) != 0 && (v187 & 1) == 0 )
      v172 = 2306;
    v431 = v172;
    memset_0(&v504, 0, sizeof(v504));
    R_TG_AddTask<R_TG_Handle,unsigned int>(pScript, g_R_TG_Def_Util_CreateSceneLightingSSS.m_index, &v504, &v278, &v300, &v431);
    if ( (v172 & 0x800) == 0 )
    {
      cRBT_SSS_AsyncClear<R_TG_Handle>(pScript, &v278);
      cRBT_SSS_AsyncClear<R_TG_Handle>(pScript, &v300);
    }
    memset_0(&v483, 0, sizeof(v483));
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
    {
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawOpaqueSSS_VRS.m_index, &v483, &sceneColor, &sceneDepth, &v310, &reflectionGrid, &lightGridVol, &floatZ, &v306, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v331, &v344, &outDecalDrawData, &lightGridVolHighBands, &vrsHWMask, &v327, &scope, &v297, &v362, &v278, &outCreateRt);
      cRBT_SSS_BlurX_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneDepth, &v278, &floatZ, &v300);
    }
    else
    {
      R_TG_AddTask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawOpaqueSSS.m_index, &v483, &sceneColor, &v362, &v278, &sceneDepth, &v310, &reflectionGrid, &lightGridVol, &floatZ, &v306, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v331, &v344, &outDecalDrawData, &lightGridVolHighBands, &vrsHWMask, &v327, &scope, &v297, &outCreateRt);
      cRBT_SSS_BlurX<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v300, &sceneDepth, &v278, &floatZ);
    }
    memset_0(&v460, 0, sizeof(v460));
    v188 = g_R_TG_Def_RBT_SSS_BlurY.m_index;
    v460.handleArgs[0] = (unsigned int *)&sceneColor;
    v189 = v460.handleArgCount + 1;
    v460.handleArgCount = v189;
    if ( (unsigned int)v189 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v189 = v460.handleArgCount;
    }
    v460.handleArgs[v189] = (unsigned int *)&sceneDepth;
    v190 = v460.handleArgCount + 1;
    v460.handleArgCount = v190;
    if ( (unsigned int)v190 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v190 = v460.handleArgCount;
    }
    v460.handleArgs[v190] = (unsigned int *)&v362;
    v191 = v460.handleArgCount + 1;
    v460.handleArgCount = v191;
    if ( (unsigned int)v191 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v191 = v460.handleArgCount;
    }
    v460.handleArgs[v191] = (unsigned int *)&v278;
    ++v460.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v188, &v460, &v300, &floatZ, &scope);
    v184 = *(_QWORD *)v4;
  }
  v408.index = -1;
  v332.index = -1;
  if ( (v184 & 0x1000000000000000i64) != 0 )
  {
    memset_0(&v482, 0, sizeof(v482));
    v192 = g_R_TG_Def_Util_CreatePostOpaqueLumaVRS.m_index;
    if ( (*((_BYTE *)v4 + 8) & 1) == 0 )
      v192 = g_R_TG_Def_Util_CreatePostOpaqueLuma.m_index;
    R_TG_AddTask<R_TG_Handle>(pScript, v192, &v482, &v332, &sceneColor);
    memset_0(&v453, 0, sizeof(v453));
    v193 = g_R_TG_Def_RBT_PostOpaqueProcessesLuma.m_index;
    v453.handleArgs[0] = (unsigned int *)&sceneColor;
    v194 = v453.handleArgCount + 1;
    v453.handleArgCount = v194;
    if ( (unsigned int)v194 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v194 = v453.handleArgCount;
    }
    v453.handleArgs[v194] = (unsigned int *)&vrsSWMask;
    v195 = v453.handleArgCount + 1;
    v453.handleArgCount = v195;
    if ( (unsigned int)v195 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v195 = v453.handleArgCount;
    }
    v453.handleArgs[v195] = (unsigned int *)&v332;
    v196 = v453.handleArgCount + 1;
    v453.handleArgCount = v196;
    if ( (unsigned int)v196 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v196 = v453.handleArgCount;
    }
    v453.handleArgs[v196] = (unsigned int *)&floatZ;
    v197 = v453.handleArgCount + 1;
    v453.handleArgCount = v197;
    if ( (unsigned int)v197 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v197 = v453.handleArgCount;
    }
    v453.handleArgs[v197] = (unsigned int *)&volScattering;
LABEL_611:
    ++v453.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v193, &v453, &volExtinction, &scope, &v408);
    goto LABEL_612;
  }
  if ( floatZ.index != triIDTexture.index )
  {
    v332.index = v346.index;
    memset_0(&v453, 0, sizeof(v453));
    v193 = g_R_TG_Def_RBT_PostOpaqueProcesses.m_index;
    v453.handleArgs[0] = (unsigned int *)&sceneColor;
    v198 = v453.handleArgCount + 1;
    v453.handleArgCount = v198;
    if ( (unsigned int)v198 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v198 = v453.handleArgCount;
    }
    v453.handleArgs[v198] = (unsigned int *)&vrsSWMask;
    v199 = v453.handleArgCount + 1;
    v453.handleArgCount = v199;
    if ( (unsigned int)v199 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v199 = v453.handleArgCount;
    }
    v453.handleArgs[v199] = (unsigned int *)&floatZ;
    v200 = v453.handleArgCount + 1;
    v453.handleArgCount = v200;
    if ( (unsigned int)v200 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v200 = v453.handleArgCount;
    }
    v453.handleArgs[v200] = (unsigned int *)&volScattering;
    goto LABEL_611;
  }
LABEL_612:
  v201 = *(_QWORD *)v4;
  v326.index = -1;
  if ( (v201 & 0x400000000000i64) == 0 )
    goto LABEL_617;
  v202 = (v201 >> 44) & 3;
  if ( v202 == 2 )
  {
    memset_0(&v481, 0, sizeof(v481));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSR_DeferredWaterTrace_CreateRT_LQ.m_index, &v481, &v326, &floatZ);
    goto LABEL_618;
  }
  if ( v202 == 3 )
  {
    memset_0(&v481, 0, sizeof(v481));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_SSR_DeferredWaterTrace_CreateRT_HQ.m_index, &v481, &v326, &floatZ);
  }
  else
  {
LABEL_617:
    v326.index = v346.index;
  }
LABEL_618:
  if ( (*(_QWORD *)v4 & 0x100000000i64) != 0 )
  {
    v432 = DRAWLIST_LIT_TRANS;
    cRBT_DrawTrans<enum GfxDrawListType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v432, &sceneColor, &sceneDepth, &v294, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &triIDTexture, &sunshadowCascade0ForViewmodel, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &v326, &vrsHWMask, &v327, &scope);
    outputRt.index = outCreateRt.index;
    if ( (*(_QWORD *)v4 & 0x200000000i64) != 0 )
      R_TGS_DistortSceneColor(pScript, &outputRt, sceneColor, vrsSWMask, R_PostLitResolve0_Active, 0x51u, *((_BYTE *)v4 + 8) & 1);
    else
      outputRt.index = triIDTexture.index;
    v388 = DRAWLIST_LIT_TRANS1;
    cRBT_DrawTrans<enum GfxDrawListType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v388, &sceneColor, &sceneDepth, &v294, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &outputRt, &sunshadowCascade0ForViewmodel, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &v326, &vrsHWMask, &v327, &scope);
  }
  if ( (*(_QWORD *)v4 & 0x400000000000i64) != 0 && ((*(_QWORD *)v4 >> 44) & 3ui64) - 2 <= 1 )
    cRBT_SSR_DeferredWaterTrace<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v326, &floatZ, &v294, &scope);
  else
    v326.index = triIDTexture.index;
  v349.index = -1;
  memset_0(&v505, 0, sizeof(v505));
  R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawOcclusionQueries.m_index, &v505, &sceneDepth, &v349);
  v203 = *(_QWORD *)v4;
  if ( (*(_QWORD *)v4 & 0x8000000000i64) != 0 )
  {
    memset_0(&v506, 0, sizeof(v506));
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawSun.m_index, &v506, &sceneColor, &sceneDepth, &v349);
    memset_0(&v507, 0, sizeof(v507));
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_DrawSunPost.m_index, &v507, &sceneColor, &sceneDepth, &v349);
    v203 = *(_QWORD *)v4;
  }
  v204 = *((_QWORD *)v4 + 1);
  outColor.index = -1;
  outSH.index = -1;
  outFog.index = -1;
  inoutFullresAlpha.index = -1;
  v379.index = -1;
  if ( (v204 & 0x4000000000i64) != 0 )
  {
    v277[0] = GFX_RENDERTARGET_FORMAT_OVERDRAW_OVERLAY;
    cUtil_CreateRelativeAndClear<R_TG_Handle,R_TG_Handle,enum GfxRenderTargetFormat>(pScript, &v379, &sceneDepth, v277);
    memset_0(&v456, 0, sizeof(v456));
    v205 = g_R_TG_Def_RBTD_DrawEmissiveOverdraw.m_index;
    v456.paramArgs[v456.paramArgCount++] = 3;
    if ( v456.handleArgCount >= 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
      __debugbreak();
    v456.handleArgs[v456.handleArgCount] = (unsigned int *)&v379;
    v206 = v456.handleArgCount + 1;
    v456.handleArgCount = v206;
    if ( (unsigned int)v206 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v206 = v456.handleArgCount;
    }
    v456.handleArgs[v206] = (unsigned int *)&sceneDepth;
    v207 = v456.handleArgCount + 1;
    v456.handleArgCount = v207;
    if ( (unsigned int)v207 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v207 = v456.handleArgCount;
    }
    v456.handleArgs[v207] = (unsigned int *)&v294;
    v208 = v456.handleArgCount + 1;
    v456.handleArgCount = v208;
    if ( (unsigned int)v208 >= 0x1E )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
        __debugbreak();
      v208 = v456.handleArgCount;
    }
    v456.handleArgs[v208] = (unsigned int *)&sceneIndices;
    ++v456.handleArgCount;
    R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v205, &v456, &sceneIndirectArgs, &scenePerSurfData, &floatZ);
    inoutFullresAlpha.index = triIDTexture.index;
  }
  else if ( (v203 & 0x1000000000i64) != 0 )
  {
    if ( (v203 & 0x400000000i64) != 0 )
    {
      R_TGS_EffectLighting(pScript, (v203 & 2) != 0, (v203 & 0x800000004i64) == 0x800000004i64, lightsCluster, sunshadowCascades, sunShadow1, transSunShadow, transSunShadowMask, triIDTexture, nullBuffer, reflectionGrid, staleCache, volScattering, volExtinction, volVisibility, &outColor, &outSH, &outFog, syncToken);
      v204 = *((_QWORD *)v4 + 1);
    }
    else
    {
      outFog.index = triIDTexture.index;
      outSH.index = triIDTexture.index;
      outColor.index = triIDTexture.index;
    }
    v277[0] = GFX_RENDERTARGET_FORMAT_SCENEBUFFER_ALPHA;
    if ( (v204 & 1) != 0 )
    {
      memset_0(&v456, 0, sizeof(v456));
      R_TG_AddTask<R_TG_Handle,enum GfxRenderTargetFormat>(pScript, g_R_TG_Def_Util_CreateRelativeAndClearVRS.m_index, &v456, &inoutFullresAlpha, &sceneDepth, v277);
    }
    else
    {
      cUtil_CreateRelativeAndClear<R_TG_Handle,R_TG_Handle,enum GfxRenderTargetFormat>(pScript, &inoutFullresAlpha, &sceneDepth, v277);
    }
    if ( (*((_BYTE *)v4 + 8) & 2) != 0 )
    {
      halfresColor.index = -1;
      halfresAlpha.index = -1;
      v336.index = -1;
      memset_0(&v480, 0, sizeof(v480));
      R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_Util_CreateRelativeColorAlpha4xMS.m_index, &v480, &halfresColor, &halfresAlpha, &sceneDepth);
      cClearColorTargetsInNextTask(pScript);
      v336.index = v375;
      SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
      cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleMipForExposureCalculation, &halfresColor, &halfresAlpha, &v336, &v294, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v275, &reflectionGrid);
      R_TG_Resolve_Upsample4xMS(pScript, &sceneColor, &inoutFullresAlpha, halfresColor, halfresAlpha, 0x57u);
    }
    else if ( (*(_QWORD *)v4 & 0x2000000000i64) != 0 )
    {
      halfresColor.index = -1;
      v336.index = -1;
      halfresAlpha.index = -1;
      memset_0(&v480, 0, sizeof(v480));
      R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_HalfRes_DownsampleDepth.m_index, &v480, &halfresColor, &sceneDepth);
      memset_0(&v485, 0, sizeof(v485));
      R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_Util_CreateHalfRelativeColorAlpha.m_index, &v485, &v336, &halfresAlpha, &sceneColor);
      SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
      cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleMipForExposureCalculation, &v336, &halfresAlpha, &halfresColor, &v294, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v275, &reflectionGrid);
      cRBT_HalfRes_Upsample<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &inoutFullresAlpha, &v336, &halfresAlpha, &halfresColor, &sceneDepth);
    }
    else
    {
      SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
      cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleMipForExposureCalculation, &sceneColor, &inoutFullresAlpha, &sceneDepth, &v294, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v275, &reflectionGrid);
    }
    v313.index = outCreateRt.index;
    if ( (*(_QWORD *)v4 & 0x4000000000i64) != 0 )
      R_TGS_DistortSceneColor(pScript, &v313, sceneColor, vrsSWMask, R_PostLitResolve1_Active, 0x59u, *((_BYTE *)v4 + 8) & 1);
    else
      v313.index = triIDTexture.index;
    SceneDownsampleVeilMipCount = EMISSIVE_PASS_DISTORT_EMISSIVE;
    cRBT_DrawEmissive<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &SceneDownsampleVeilMipCount, &sceneColor, &inoutFullresAlpha, &sceneDepth, &v294, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &v313, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v275, &reflectionGrid);
  }
  else
  {
    inoutFullresAlpha.index = triIDTexture.index;
    if ( (v203 & 0x300000000000i64) != 0 )
      R_TGS_DistortSceneColor(pScript, &outCreateRt, sceneColor, vrsSWMask, R_PostLitResolve1_Active, 0x59u, v204 & 1);
  }
  if ( (*(_QWORD *)v4 & 0x100000000i64) != 0 )
  {
    v318 = DRAWLIST_DEPTH_HACK_TRANS;
    cRBT_DrawTrans<enum GfxDrawListType,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v318, &sceneColor, &sceneDepth, &v346, &lightsCluster, &reflectionGrid, &lightGridVol, &floatZ, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &volScattering, &volExtinction, &volVisibility, &outDecalIndices, &outCreateRt, &sunshadowCascade0ForViewmodel, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &outDecalDrawData, &lightGridVolHighBands, &triIDTexture, &vrsHWMask, &v327, &scope);
  }
  v209 = *((_QWORD *)v4 + 1);
  if ( (v209 & 0x800000) != 0 )
  {
    cRBT_End3D<R_TG_Handle>(pScript, &sceneColor);
    memset_0(&v485, 0, sizeof(v485));
    R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBTD_ReflectionProbeGenerate_CaptureScene.m_index, &v485, &sceneColor, &sceneDepth);
    return;
  }
  v380.index = -1;
  if ( (v209 & 0x4000000) != 0 )
  {
    if ( (v209 & 1) != 0 )
    {
      memset_0(&v486, 0, sizeof(v486));
      v210 = g_R_TG_Def_RBTD_DrawPrimitives_Offscreen_VRS.m_index;
    }
    else
    {
      memset_0(&v486, 0, sizeof(v486));
      v210 = g_R_TG_Def_RBTD_DrawPrimitives_Offscreen.m_index;
    }
    R_TG_AddTask<R_TG_Handle>(pScript, v210, &v486, &v380, &sceneDepth);
  }
  if ( (*((_QWORD *)v4 + 1) & 0x40000000000i64) != 0 )
    cRBTD_DrawDebug3D<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &lightGridVol, &lightGridVolHighBands, &umbraOcclusionTexture);
  v319.index = -1;
  v365.index = -1;
  memset_0(&v510, 0, sizeof(v510));
  R_TG_AddTask<R_TG_Handle>(pScript, g_R_TG_Def_RBT_UniversalClut.m_index, &v510, &v319, &v365);
  v211 = *(_QWORD *)v4;
  v308.index = -1;
  if ( (v211 & 0x2000000000000000i64) != 0 )
  {
    memset_0(&v511, 0, sizeof(v511));
    v308.index = R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, g_R_TG_Def_RBT_Draw2D_BeforePostFX.m_index, &v511, &sceneColor, &sceneDepth, &v319);
    v211 = *(_QWORD *)v4;
  }
  if ( (v211 & 0x10000000000i64) != 0 )
  {
    v95 = (*((_BYTE *)v4 + 8) & 1) == 0;
    v363.index = -1;
    if ( v95 )
    {
      cRBT_Flare_CalculateOcclusion<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &inoutFullresAlpha, &volScattering, &volExtinction, &volVisibility, &scope, &v363, &v349);
    }
    else
    {
      memset_0(&v459, 0, sizeof(v459));
      v212 = g_R_TG_Def_RBT_Flare_CalculateOcclusionInlineResolve.m_index;
      v459.handleArgs[0] = (unsigned int *)&inoutFullresAlpha;
      v213 = v459.handleArgCount + 1;
      v459.handleArgCount = v213;
      if ( (unsigned int)v213 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v213 = v459.handleArgCount;
      }
      v459.handleArgs[v213] = (unsigned int *)&volScattering;
      v214 = v459.handleArgCount + 1;
      v459.handleArgCount = v214;
      if ( (unsigned int)v214 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v214 = v459.handleArgCount;
      }
      v459.handleArgs[v214] = (unsigned int *)&volExtinction;
      v215 = v459.handleArgCount + 1;
      v459.handleArgCount = v215;
      if ( (unsigned int)v215 >= 0x1E )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_def.h", 122, ASSERT_TYPE_ASSERT, "(arguments->handleArgCount < arguments->handleArgLimit)", (const char *)&queryFormat, "arguments->handleArgCount < arguments->handleArgLimit") )
          __debugbreak();
        v215 = v459.handleArgCount;
      }
      v459.handleArgs[v215] = (unsigned int *)&volVisibility;
      ++v459.handleArgCount;
      R_TG_AddTask<R_TG_Handle,R_TG_Handle>(pScript, v212, &v459, &scope, &v363, &v349);
    }
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
      cRBT_Flare_Draw_VRS<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &v363);
    else
      cRBT_Flare_Draw<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneDepth, &v363);
  }
  v216 = *((_QWORD *)v4 + 1);
  if ( (v216 & 0x10000000) != 0 )
  {
    v217 = pScript;
    if ( (v216 & 0x40000000) != 0 )
    {
      v321[0] = GFX_RENDERTARGET_FORMAT_SCENEBUFFER;
      cUtil_CreateRelativeAndClear<R_TG_Handle,R_TG_Handle,enum GfxRenderTargetFormat>(pScript, &v335, &sceneColor, v321);
      p_sceneColor = &v335;
      v217 = pScript;
    }
    else
    {
      p_sceneColor = &sceneColor;
    }
    v266 = GFX_GP_PASS_CAMERA;
    cRBTD_ShowTris<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,enum GFX_GP_PASS>(v217, p_sceneColor, &sceneDepth, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &v266);
  }
  v219 = *(_QWORD *)v4;
  v333.index = -1;
  v350.index = -1;
  if ( v219 >= 0 )
  {
    v333.index = triIDTexture.index;
    v350.index = triIDTexture.index;
  }
  else
  {
    srcTask = -1;
    cRBT_HudOutlineGenWorkgroups<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, (const R_TG_Handle *)&srcTask, &sceneColor, &v289, &floatZ, &v309);
    v292.index = -1;
    cRBT_HudOutlineWorkgroupsArgs<R_TG_Handle,R_TG_Handle>(pScript, &v292, (const R_TG_Handle *)&srcTask);
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
      cRBT_ApplyHudOutlineCSVrsInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v333, &v350, &sceneEntityIDVelocity, &v275, &v274, (const R_TG_Handle *)&srcTask, &v292, &floatZ);
    else
      cRBT_ApplyHudOutlineCS<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v333, &v350, &sceneEntityIDVelocity, &v275, &v274, (const R_TG_Handle *)&srcTask, &v292, &floatZ);
    v219 = *(_QWORD *)v4;
  }
  v220 = ((unsigned __int64)v219 >> 60) & 1;
  v329.index = -1;
  if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
  {
    v292.index = -1;
    if ( v220 )
      cRBT_PostTransResolve_Mask_Vrs<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v329, &v292, &sceneColor, &v332, &v289, &v350, &vrsSWMask);
    else
      cRBT_PostTransResolve_Vrs<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v292, &sceneColor, &vrsSWMask);
    sceneColor.index = v292.index;
  }
  else if ( v220 )
  {
    cRBT_PostTransResolve_Mask<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v329, &sceneColor, &v332, &v289, &v350);
  }
  v221 = *(_QWORD *)v4;
  v222 = v329.index;
  if ( (*(_QWORD *)v4 & 0x1000000000000000i64) == 0 )
    v222 = triIDTexture.index;
  v329.index = v222;
  if ( (v221 & 0x10000000000000i64) != 0 )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rsp+4F40h+occlusionDepthTexture], xmm1
    }
    sceneColor.index = R_TG_MBlur_Apply(&v438, pScript, sceneColor, sceneVelocityHalf, occlusionDepthTexture)->index;
    v221 = *(_QWORD *)v4;
  }
  if ( (v221 & 0x1000000000i64) != 0 && (*((_QWORD *)v4 + 1) & 0x4000000000i64) == 0 )
  {
    v266 = GFX_GP_PASS_COUNT;
    cRBT_DrawEmissivePostBlur<enum GfxEmissivePass,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, (const GfxEmissivePass *)&v266, &sceneColor, &v294, &sceneIndices, &sceneIndirectArgs, &scenePerSurfData, &floatZ, &triIDTexture, &outColor, &outSH, &outFog, &sunshadowCascades, &sunShadow1, &v514, &transSunShadow, &transSunShadowMask, &volScattering, &volExtinction, &volVisibility, &scope, &v275, &reflectionGrid);
  }
  cRBT_GP_ResetClutterFrame<R_TG_Handle>(pScript, &sceneColor);
  v228 = *(_QWORD *)v4;
  dofTile0Handle.index = -1;
  if ( (v228 & 0x4000000000000i64) != 0 )
  {
    if ( (v228 & 0x8000000000000i64) != 0 )
      R_TGS_DOF_Fullres_Apply(pScript, &sceneColor, floatZ, scope, &dofTile0Handle);
    else
      R_TGS_DOF_Apply(pScript, &sceneColor, floatZ, velocity, scope, &dofTile0Handle);
    v228 = *(_QWORD *)v4;
  }
  else
  {
    dofTile0Handle.index = triIDTexture.index;
  }
  if ( (v228 & 0x1000000000000i64) != 0 )
  {
    cRBT_Lens_Convolution<R_TG_Handle,R_TG_Handle>(pScript, &sceneColor, &sceneColor);
    v228 = *(_QWORD *)v4;
  }
  color.index = -1;
  v366.index = -1;
  v334.index = -1;
  v382.index = -1;
  if ( (v228 & 0x80000000000000i64) != 0 )
  {
    R_Perceptual_UpdateVeilWeights(0);
    SceneDownsampleMipForExposureCalculation = R_Tonemap_GetSceneDownsampleMipForExposureCalculation(pScript->sceneSize.v[0], pScript->sceneSize.v[1]);
    v229 = SceneDownsampleMipForExposureCalculation;
    SceneDownsampleVeilMip = R_Perceptual_GetSceneDownsampleVeilMip(SceneDownsampleMipForExposureCalculation);
    SceneDownsampleVeilMipCount = R_Perceptual_GetSceneDownsampleVeilMipCount(pScript->sceneSize.v[0], pScript->sceneSize.v[1], SceneDownsampleVeilMip);
    v231 = SceneDownsampleVeilMipCount;
    SceneDownsampleTotalMipCount = R_Perceptual_GetSceneDownsampleTotalMipCount(v229, SceneDownsampleVeilMip, SceneDownsampleVeilMipCount);
    v233 = SceneDownsampleTotalMipCount;
    if ( (!v229 || v231 <= 1 || SceneDownsampleTotalMipCount <= 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\scripts\\r_tgs_misc.h", 1623, ASSERT_TYPE_ASSERT, "(exposureMip > 0 && veilMipCount > 1 && downsampleMipCount > 1)", (const char *)&queryFormat, "exposureMip > 0 && veilMipCount > 1 && downsampleMipCount > 1") )
      __debugbreak();
    v234 = (*(_QWORD *)v4 >> 54) & 1i64;
    v300.index = sceneColor.index;
    `vector constructor iterator'(&__t, 4ui64, 0x10ui64, (void *(__fastcall *)(void *))R_TG_Handle::R_TG_Handle);
    if ( v233 > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\taskgraph\\scripts\\r_tgs_misc.h", 1629, ASSERT_TYPE_ASSERT, "(downsampleMipCount <= ( sizeof( *array_counter( sceneDownsampleMipRts ) ) + 0 ))", (const char *)&queryFormat, "downsampleMipCount <= ARRAY_COUNT( sceneDownsampleMipRts )") )
      __debugbreak();
    cGpuTimerBegin(pScript, 0x72u);
    v235 = v233 + 1;
    v236 = 1;
    if ( v233 + 1 > 1 )
    {
      v318 = DRAWLIST_FIRST;
      v237 = &v523;
      v238 = &v523;
      v239 = v235;
      do
      {
        v240 = GFX_GP_PASS_CAMERA;
        if ( v236 < SceneDownsampleVeilMip )
          v240 = (int)v234;
        v266 = v240;
        cRBT_Perceptual_Downsample_NoDynResCS<R_TG_Handle,R_TG_Handle,int,enum VeilTonemapMode>(pScript, v238, &v300, (const int *)&v318, (const VeilTonemapMode *)&v266);
        v241 = v237->index;
        ++v237;
        ++v236;
        v300.index = v241;
        ++v238;
      }
      while ( v236 < v239 );
      v4 = v443;
      v231 = SceneDownsampleVeilMipCount;
    }
    cGpuTimerEnd(pScript);
    v278.index = -1;
    v242 = *(&__t.index + (unsigned int)SceneDownsampleMipForExposureCalculation);
    v382.index = v523.index;
    v388 = v242;
    cRBT_Tonemap_CalculateExposure<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v334, &v278, (const R_TG_Handle *)&v388, &floatZ, &scope, &v351);
    upsampledRt.index = -1;
    if ( (*(_QWORD *)v4 & 0x20000000000000i64) != 0 )
      R_TG_Perceptual_UpsampleChain(pScript, &__t, &upsampledRt, SceneDownsampleVeilMip, v231, s_veilWeights);
    else
      upsampledRt.index = triIDTexture.index;
    R_Perceptual_UpdateLocalTonemapWeights();
    v300.index = v278.index;
    `vector constructor iterator'(&v521, 4ui64, 4ui64, (void *(__fastcall *)(void *))R_TG_Handle::R_TG_Handle);
    v521.passIndex = v278.index;
    cGpuTimerBegin(pScript, 0x72u);
    p_isPrepass = &v521.isPrepass;
    v266 = GFX_GP_PASS_CAMERA;
    v244 = &v521.isPrepass;
    v318 = DRAWLIST_FIRST;
    v245 = 3i64;
    do
    {
      cRBT_Perceptual_DownsampleCS<R_TG_Handle,R_TG_Handle,int,enum VeilTonemapMode>(pScript, (const R_TG_Handle *)v244, &v300, (const int *)&v318, (const VeilTonemapMode *)&v266);
      v246 = *(_DWORD *)p_isPrepass;
      p_isPrepass += 4;
      v244 += 4;
      v300.index = v246;
      --v245;
    }
    while ( v245 );
    cGpuTimerEnd(pScript);
    R_TG_Perceptual_UpsampleChain(pScript, (R_TG_Handle *)&v521, &v278, 0, 4u, s_localTonemapWeights);
    v247 = *((_QWORD *)v4 + 1);
    if ( (v247 & 0x80000000) != 0 )
    {
      v266 = GFX_GP_PASS_INVALID|GFX_GP_PASS_SHADOWS;
      cRBTD_HDR_ScopesProcess<R_TG_Handle,enum HDRScopesStage>(pScript, &sceneColor, (const HDRScopesStage *)&v266);
      v247 = *((_QWORD *)v4 + 1);
    }
    if ( (v247 & 0x2000000000i64) != 0 )
    {
      v266 = GFX_GP_PASS_CAMERA;
      cRBTD_HDR_SpotMeterProcess<R_TG_Handle,enum SpotMeterId>(pScript, &sceneColor, (const SpotMeterId *)&v266);
      v247 = *((_QWORD *)v4 + 1);
    }
    if ( (v247 & 0x8000000000i64) != 0 )
    {
      v266 = GFX_GP_PASS_SHADOWS;
      cRBTD_RefImageOverlay<R_TG_Handle,enum RefImageDrawMode>(pScript, &sceneColor, (const RefImageDrawMode *)&v266);
      v247 = *((_QWORD *)v4 + 1);
    }
    if ( (v247 & 0x80000000000i64) != 0 )
    {
      v266 = GFX_GP_PASS_INVALID|GFX_GP_PASS_SHADOWS;
      cRBTD_Screenshot_CapturePipelineStage<R_TG_Handle,enum GfxScreenshotPipelineStage>(pScript, &sceneColor, (const GfxScreenshotPipelineStage *)&v266);
    }
    v248 = (*(_QWORD *)v4 >> 58) & 3i64;
    if ( ((*(_QWORD *)v4 >> 58) & 3) != 0 )
    {
      v280.index = -1;
      value.index = -1;
      if ( v248 < 2 )
        cRBT_Tonemap_Filter_SMAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v280, &value, &sceneColor, &v319, &v365, &upsampledRt, &v278, &v334, &scope, &floatZ, &v333, &v289);
      else
        cRBT_Tonemap_Filter_TemporalSMAA<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v280, &value, &sceneColor, &v319, &v365, &upsampledRt, &v278, &v334, &scope, &floatZ, &v333, &v289);
      if ( (*((_QWORD *)v4 + 1) & 0x2000000000i64) != 0 )
      {
        v266 = GFX_GP_PASS_SHADOWS;
        cRBTD_HDR_SpotMeterProcess<R_TG_Handle,enum SpotMeterId>(pScript, &v280, (const SpotMeterId *)&v266);
      }
      v313.index = -1;
      v292.index = -1;
      cRBT_SMAA_EdgeDetection<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v280, &value, &v366, &v352, &v313, &v292);
      v288.index = -1;
      cRBT_SMAA_ResolveIndirect<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v288, &v313, &v292);
      cRBT_SMAA_MorphologicalAntialiasing<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v280, &value, &v366, &v288, &v313, &v292);
      color.index = v280.index;
      if ( ((unsigned __int8)(*(_QWORD *)v4 >> 58) & 3u) < 2 )
      {
        cUtil_ForceRtState<R_TG_Handle>(pScript, &color);
      }
      else
      {
        srcTask = -1;
        v320.index = -1;
        v348.index = -1;
        cRBT_SMAA_TemporalSupersampling<unsigned int,unsigned int,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, (const unsigned int *)&pScript->sceneFullSize, (const unsigned int *)&pScript->sceneFullSize + 1, &v348, (const R_TG_Handle *)&srcTask, &v320, &v280, &v280, &value, &value, &value, &value, &velocity, &velocity, &v329);
        if ( ((*(_QWORD *)v4 >> 58) & 3) == 3 )
          cRBT_SMAA_FilmicFiltering<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v348, (const R_TG_Handle *)&srcTask, (const R_TG_Handle *)&srcTask, &v320, &velocity, &velocity, &v280, &v329);
        color.index = srcTask;
      }
    }
    else
    {
      cRBT_Tonemap_Filter<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &sceneColor, &v319, &v365, &upsampledRt, &v278, &v334, &scope, &floatZ, &v333, &v289);
      if ( (*((_QWORD *)v4 + 1) & 0x2000000000i64) != 0 )
      {
        v266 = GFX_GP_PASS_SHADOWS;
        cRBTD_HDR_SpotMeterProcess<R_TG_Handle,enum SpotMeterId>(pScript, &color, (const SpotMeterId *)&v266);
      }
    }
    v249 = *((_QWORD *)v4 + 1);
    if ( (v249 & 0x10000000000i64) != 0 )
    {
      cRBTD_RefShaderOverlay<R_TG_Handle,R_TG_Handle>(pScript, &color, &v319);
      v249 = *((_QWORD *)v4 + 1);
    }
    if ( (v249 & 0x8000000000i64) != 0 )
    {
      v266 = GFX_GP_PASS_COUNT;
      cRBTD_RefImageOverlay<R_TG_Handle,enum RefImageDrawMode>(pScript, &color, (const RefImageDrawMode *)&v266);
    }
  }
  else
  {
    color.index = sceneColor.index;
    v334.index = nullBuffer.index;
    v382.index = outCreateRt.index;
  }
  v250 = *((_QWORD *)v4 + 1);
  if ( (v250 & 8) != 0 )
  {
    v288.index = -1;
    cRBT_DroneCamera_DownsampleBayerDebayer<R_TG_Handle,R_TG_Handle>(pScript, &v288, &color);
    v320.index = -1;
    cRBT_DroneCamera_ChromaSubsampling<R_TG_Handle,R_TG_Handle>(pScript, &v320, &v288);
    cRBT_DroneCamera_Upsampling<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v320, &v275);
    v250 = *((_QWORD *)v4 + 1);
  }
  if ( (v250 & 0x10) != 0 )
  {
    cConditionLightBegin(pScript, R_Distortion_Enabled);
    v288.index = -1;
    cRBT_Distortion<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v288, &color, &v275);
    cRBT_CopyDistortion<R_TG_Handle,R_TG_Handle>(pScript, &color, &v288);
    cConditionEnd(pScript);
    v250 = *((_QWORD *)v4 + 1);
  }
  if ( (v250 & 0x100000000i64) != 0 )
  {
    cRBTD_FL_DV_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v310, &lightsCluster, &v354, &reflectionGrid, &outDecalIndices, &outDecalDrawData);
    v250 = *((_QWORD *)v4 + 1);
  }
  v338.index = -1;
  v355.index = -1;
  if ( (v250 & 0x600000000i64) == 0 )
  {
    v251 = triIDTexture.index;
    v338.index = triIDTexture.index;
LABEL_787:
    v355.index = v251;
    goto LABEL_788;
  }
  if ( (v250 & 1) == 0 )
  {
    v338.index = sceneEntityIDVelocity.index;
    v251 = v274.index;
    goto LABEL_787;
  }
  cRBT_Resolve_MSAAVelocity4xToFull<R_TG_Handle,R_TG_Handle>(pScript, &v338, &sceneEntityIDVelocity);
  cRBT_Resolve_MSAATangentFrame4xToFull<R_TG_Handle,R_TG_Handle>(pScript, &v355, &v274);
  v250 = *((_QWORD *)v4 + 1);
LABEL_788:
  if ( (v250 & 0x200000000i64) != 0 )
  {
    v252 = triIDTexture.index;
    if ( (v250 & 1) != 0 )
      v252 = vrsSWMask.index;
    v266 = v252;
    cRBTD_DebugTextureOverlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &floatZ, &v338, &v355, &v275, &v289, &v306, &v330, &v329, (const R_TG_Handle *)&v266, &v297, &scope);
    v250 = *((_QWORD *)v4 + 1);
  }
  if ( (v250 & 0x400000000i64) != 0 )
  {
    cRBTD_DV_Show3DDebug<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &sceneDepth, &outDecalDebugData, &outDecalIndirectArgs, &floatZ, &v338, &v355, &v275, &outDecalIndices, &outDecalDrawData);
    v250 = *((_QWORD *)v4 + 1);
  }
  if ( (v250 & 0x400000000000i64) != 0 )
  {
    cRBTD_VOL_ShowVolumetricDebug<R_TG_Handle,R_TG_Handle>(pScript, &color, &volVisibility);
    v250 = *((_QWORD *)v4 + 1);
  }
  if ( (v250 & 0x80000000000i64) != 0 )
  {
    v266 = GFX_GP_PASS_SHADOWS;
    cRBTD_Screenshot_CapturePipelineStage<R_TG_Handle,enum GfxScreenshotPipelineStage>(pScript, &color, (const GfxScreenshotPipelineStage *)&v266);
    v250 = *((_QWORD *)v4 + 1);
  }
  v341.index = -1;
  if ( (v250 & 0x8000) != 0 && (*(_QWORD *)v4 & 0x2000000000000000i64) != 0 )
  {
    cRBT_CreateReticleBuffer<R_TG_Handle,R_TG_Handle>(pScript, &v341, &color);
    cRBT_Draw2D_ReceivePostFXComposite<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v341, &v275, &scope);
    v250 = *((_QWORD *)v4 + 1);
  }
  else
  {
    v341.index = triIDTexture.index;
  }
  if ( (v250 & 0x10000) != 0 )
  {
    v288.index = -1;
    cRBT_Fidelity_FX_Sharpening<R_TG_Handle,R_TG_Handle>(pScript, &color, &v288);
    v250 = *((_QWORD *)v4 + 1);
    color.index = v288.index;
  }
  v253 = *(_QWORD *)v4;
  v412.index = -1;
  if ( (v253 & 0x2000000000000000i64) == 0 || ((v253 >> 58) & 3) < 2 || (v250 & 0x10000) != 0 )
  {
    v254 = 0;
  }
  else
  {
    v254 = 1;
    cRBT_Draw2D_BackupScopeReticle<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v412, &color, &scope);
    v253 = *(_QWORD *)v4;
  }
  if ( (v253 & 0x2000000000000000i64) != 0 )
    cRBT_Draw2D_ReceivePostFXLite<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v275, &scope);
  if ( (*((_DWORD *)v4 + 2) & 0x80020) == 524320i64 )
    R_TGS_Blur(pScript, v4, &color, 0);
  `vector constructor iterator'(&v367, 4ui64, 2ui64, (void *(__fastcall *)(void *))R_TG_Handle::R_TG_Handle);
  v255 = *((_QWORD *)v4 + 1);
  if ( (v255 & 0x800) != 0 )
  {
    v266 = GFX_GP_PASS_COUNT;
    cRBT_CreateShellshockRT<R_TG_Handle,R_TG_Handle,R_TG_Handle,int>(pScript, &v367, &v368, &color, (const int *)&v266);
    cRBT_CaptureShellshock<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v367, &v368, &color, &scope, &v341);
    v255 = *((_QWORD *)v4 + 1);
    v256 = triIDTexture.index;
  }
  else
  {
    v256 = triIDTexture.index;
    v367.index = triIDTexture.index;
    v368.index = triIDTexture.index;
  }
  v378.index = -1;
  if ( (v255 & 0x4000) != 0 && (*(_QWORD *)v4 & 0x2000000000000000i64) != 0 )
  {
    v318 = 960;
    v257 = 540;
    if ( (v255 & 0x80000) != 0 )
      v257 = 270;
    v266 = v257;
    cAddDependencyInNextTask(pScript, v308.index);
    cRBT_Draw2D_LowResOverlays<R_TG_Handle,R_TG_Handle,R_TG_Handle,unsigned int,unsigned int>(pScript, &v378, &v275, &v319, (const unsigned int *)&v318, (const unsigned int *)&v266);
  }
  else
  {
    v378.index = v256;
  }
  cRBT_CompositeToDisplayAndApplyPostfx<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &color, &scope, &v367, &v368, &v378, &v341);
  if ( (*((_QWORD *)v4 + 1) & 0x4000000000000i64) != 0 )
  {
    v308.index = -1;
    cUtil_DebugUav_Blend<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &v308, &result, &v411);
    cRBT_FullScreenFilter<R_TG_Handle,R_TG_Handle>(pScript, &result, &v308);
  }
  if ( v254 )
    cRBT_Draw2D_RestoreScopeReticle<R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &color, &v412, &scope);
  if ( (*(_QWORD *)v4 & 0x4000000000000000i64) != 0 && *(_QWORD *)v4 >= 0 )
  {
    if ( (*((_BYTE *)v4 + 8) & 1) != 0 )
      cRBT_ApplyHudOutlineVrsInlineResolve<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &sceneEntityIDVelocity, &v275, &v274, &scope, &floatZ);
    else
      cRBT_ApplyHudOutline<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &sceneEntityIDVelocity, &v275, &v274, &scope, &floatZ);
  }
  v258 = *((_QWORD *)v4 + 1);
  v259 = v258;
  if ( (v258 & 0x20) != 0 && (v258 & 0x80000) == 0 )
  {
    R_TGS_Blur(pScript, v4, &result, 1);
    v259 = *((_QWORD *)v4 + 1);
  }
  if ( (v259 & 0x4000000000i64) != 0 )
  {
    cRBTD_ShowEmissiveOverdraw<R_TG_Handle,R_TG_Handle>(pScript, &result, &v379);
    v259 = *((_QWORD *)v4 + 1);
  }
  if ( (v259 & 0x80000000000i64) != 0 )
  {
    v266 = GFX_GP_PASS_COUNT;
    cRBTD_Screenshot_CapturePipelineStage<R_TG_Handle,enum GfxScreenshotPipelineStage>(pScript, &result, (const GfxScreenshotPipelineStage *)&v266);
    v259 = *((_QWORD *)v4 + 1);
  }
  if ( (v259 & 0x4000000) != 0 )
  {
    cRBTD_DrawPrimitives_Overlay<R_TG_Handle,R_TG_Handle>(pScript, &result, &v380);
    v259 = *((_QWORD *)v4 + 1);
  }
  v260 = v259;
  if ( (v259 & 0x20000000) != 0 && (v259 & 0x40000000) == 0 )
  {
    cRBTD_Overlay<R_TG_Handle,R_TG_Handle>(pScript, &result, &v335);
    v260 = *((_QWORD *)v4 + 1);
  }
  if ( (v260 & 0x100000000000i64) != 0 )
  {
    cRBTD_Shadow_Overlay<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &sunshadowCascades, &sunShadow1, &v514, &sunshadowCascade0ForViewmodel, &staleCache, &sunshadowCache, &compressedCascades, &v516, &v517, &v297, &transSunShadowMask);
    v260 = *((_QWORD *)v4 + 1);
  }
  if ( (v260 & 0x20000000000i64) != 0 )
  {
    v308.index = -1;
    cRBTD_Magnifier_Part1<R_TG_Handle,R_TG_Handle>(pScript, &v308, &result);
    cRBTD_Magnifier_Part2<R_TG_Handle,R_TG_Handle>(pScript, &result, &v308);
    v260 = *((_QWORD *)v4 + 1);
  }
  if ( (v260 & 0x80000000) != 0 )
  {
    v266 = GFX_GP_PASS_SHADOWS;
    cRBTD_HDR_ScopesProcess<R_TG_Handle,enum HDRScopesStage>(pScript, &result, (const HDRScopesStage *)&v266);
    v260 = *((_QWORD *)v4 + 1);
  }
  if ( (*(_QWORD *)v4 & 0x2000000000000000i64) != 0 )
  {
    cRBT_Draw2D_RTT<R_TG_Handle>(pScript, &result);
    cRBT_Draw2D_Hud<R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle,R_TG_Handle>(pScript, &result, &v275, &v319, &v382, &v334);
    v260 = *((_QWORD *)v4 + 1);
    if ( (v260 & 0x800000000000i64) != 0 )
    {
      cRBTD_Rtt_Overlay<R_TG_Handle>(pScript, &result);
      v260 = *((_QWORD *)v4 + 1);
    }
  }
  if ( (v260 & 0x80000000) != 0 )
  {
    v266 = GFX_GP_PASS_COUNT;
    cRBTD_HDR_ScopesProcess<R_TG_Handle,enum HDRScopesStage>(pScript, &result, (const HDRScopesStage *)&v266);
    v260 = *((_QWORD *)v4 + 1);
  }
  if ( (v260 & 0x8000000) != 0 )
  {
    v261 = 0;
    value.index = 256;
    v278.index = 0;
    if ( v306.index != -1 && v306.index != triIDTexture.index )
    {
      v266 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &v306, (const int *)&v266, &v278.index, &value.index, &value.index);
      v278.index = 256;
      v261 = 256;
    }
    if ( v366.index != -1 )
    {
      v266 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &v366, (const int *)&v266, &v278.index, &value.index, &value.index);
      v261 += 256;
      v278.index = v261;
    }
    if ( outColor.index != -1 && outColor.index != triIDTexture.index )
    {
      v266 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &outColor, (const int *)&v266, &v278.index, &value.index, &value.index);
      v278.index = v261 + 256;
    }
    if ( outFog.index != -1 && outFog.index != triIDTexture.index )
    {
      v266 = GFX_GP_PASS_CAMERA;
      cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,unsigned int,unsigned int,unsigned int>(pScript, &result, &outFog, (const int *)&v266, &v278.index, &value.index, &value.index);
    }
  }
  if ( (*((_DWORD *)v4 + 2) & 0x40000000) != 0 )
  {
    v266 = pScript->displaySize.v[1] >> 2;
    v318 = pScript->displaySize.v[0] >> 2;
    SceneDownsampleVeilMipCount = EMISSIVE_PASS_EMISSIVE;
    SceneDownsampleMipForExposureCalculation = EMISSIVE_PASS_EMISSIVE;
    cRBT_PartialScreenFilter<R_TG_Handle,R_TG_Handle,int,int,unsigned int,unsigned int>(pScript, &result, &v335, (const int *)&SceneDownsampleMipForExposureCalculation, (const int *)&SceneDownsampleVeilMipCount, (const unsigned int *)&v318, (const unsigned int *)&v266);
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

