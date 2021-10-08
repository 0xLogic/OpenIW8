/*
==============
AI_BT_LoadTreeAssetInstances
==============
*/

void __fastcall AI_BT_LoadTreeAssetInstances(MemoryFile *memFile)
{
  ?AI_BT_LoadTreeAssetInstances@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AI_BT_FreeTreeAssetInstance
==============
*/

void __fastcall AI_BT_FreeTreeAssetInstance(int entnum)
{
  ?AI_BT_FreeTreeAssetInstance@@YAXH@Z(entnum);
}

/*
==============
AI_BT_SaveTreeAssetInstances
==============
*/

void __fastcall AI_BT_SaveTreeAssetInstances(MemoryFile *memFile)
{
  ?AI_BT_SaveTreeAssetInstances@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
AI_BT_RegisterBehaviorTree
==============
*/

BehaviorTree *__fastcall AI_BT_RegisterBehaviorTree(const char *name)
{
  return ?AI_BT_RegisterBehaviorTree@@YAPEAUBehaviorTree@@PEBD@Z(name);
}

/*
==============
AI_BT_CreateBehaviorTreeInstance
==============
*/

void __fastcall AI_BT_CreateBehaviorTreeInstance(const char *name, int entnum, bool processRootDecorators)
{
  ?AI_BT_CreateBehaviorTreeInstance@@YAXPEBDH_N@Z(name, entnum, processRootDecorators);
}

/*
==============
AI_BT_MyChanges
==============
*/

void AI_BT_MyChanges(void)
{
  ?AI_BT_MyChanges@@YAXXZ();
}

/*
==============
AI_BT_Terminate
==============
*/

void __fastcall AI_BT_Terminate(int entnum)
{
  ?AI_BT_Terminate@@YAXH@Z(entnum);
}

/*
==============
AI_BT_Tick
==============
*/

void __fastcall AI_BT_Tick(int entnum)
{
  ?AI_BT_Tick@@YAXH@Z(entnum);
}

/*
==============
AI_BT_HasInstance
==============
*/

bool __fastcall AI_BT_HasInstance(int entnum)
{
  return ?AI_BT_HasInstance@@YA_NH@Z(entnum);
}

/*
==============
AI_BT_FreeTreeAssets
==============
*/

void AI_BT_FreeTreeAssets(void)
{
  ?AI_BT_FreeTreeAssets@@YAXXZ();
}

/*
==============
AI_BT_GetFunction
==============
*/

int __fastcall AI_BT_GetFunction(BehaviorTree *pTree, int funcID)
{
  return ?AI_BT_GetFunction@@YAHPEAUBehaviorTree@@H@Z(pTree, funcID);
}

/*
==============
AI_BT_InvalidTick
==============
*/
char AI_BT_InvalidTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  Com_PrintError(18, "Calling invalid behaviour tick\n");
  return 3;
}

/*
==============
AI_BT_SelectorTick
==============
*/
BehaviorTreeResult AI_BT_SelectorTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v3; 
  __int64 v4; 
  BehaviorTreeNode *v5; 
  unsigned __int16 processFn; 
  int initFn; 
  BehaviorTreeResult v8; 
  unsigned __int16 m_activeChild; 
  unsigned int v10; 
  BehaviorTreeNode *v11; 
  BehaviorTreeResult resultOverride; 

  v3 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 515, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 516, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = v3;
  v5 = &treeInstance->tree->nodes[v3];
  processFn = v5->data.actionData.processFn;
  initFn = v5->data.actionData.initFn;
  if ( !processFn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 523, ASSERT_TYPE_ASSERT, "(childCount > 0)", (const char *)&queryFormat, "childCount > 0") )
    __debugbreak();
  treeInstance->instanceData[v3].m_tickedThisFrame = 1;
  v8 = BT_RESULT_FAILURE;
  AI_BT_InitProcessDecorators(treeInstance, v3);
  m_activeChild = treeInstance->instanceData[v3].m_NodeData.nonAction.m_activeChild;
  if ( m_activeChild < processFn )
  {
    do
    {
      v10 = initFn + m_activeChild;
      if ( v10 >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 415, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
        __debugbreak();
      v11 = &treeInstance->tree->nodes[v10];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 417, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v8 = s_tickFunctions[(unsigned __int8)v11->type](treeInstance, v10);
      if ( v8 )
        break;
      m_activeChild = treeInstance->instanceData[v3].m_NodeData.nonAction.m_activeChild + 1;
      treeInstance->instanceData[v3].m_NodeData.nonAction.m_activeChild = m_activeChild;
    }
    while ( m_activeChild < processFn );
    LODWORD(v3) = nodeIndex;
  }
  if ( v8 != BT_RESULT_RUNNING )
    treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild = 0;
  resultOverride = v5->resultOverride;
  if ( resultOverride == BT_RESULT_NO_OVERRIDE )
    resultOverride = v8;
  return AI_BT_PostProcessDecorators(treeInstance, v3, resultOverride);
}

/*
==============
AI_BT_SequenceTick
==============
*/
BehaviorTreeResult AI_BT_SequenceTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v3; 
  __int64 v4; 
  BehaviorTreeNode *v5; 
  unsigned __int16 processFn; 
  int initFn; 
  BehaviorTreeResult v8; 
  unsigned __int16 m_activeChild; 
  unsigned int v10; 
  BehaviorTreeNode *v11; 
  BehaviorTreeResult resultOverride; 

  v3 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 572, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 573, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = v3;
  v5 = &treeInstance->tree->nodes[v3];
  processFn = v5->data.actionData.processFn;
  initFn = v5->data.actionData.initFn;
  if ( !processFn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 580, ASSERT_TYPE_ASSERT, "(childCount > 0)", (const char *)&queryFormat, "childCount > 0") )
    __debugbreak();
  treeInstance->instanceData[v3].m_tickedThisFrame = 1;
  v8 = BT_RESULT_FAILURE;
  AI_BT_InitProcessDecorators(treeInstance, v3);
  m_activeChild = treeInstance->instanceData[v3].m_NodeData.nonAction.m_activeChild;
  if ( m_activeChild < processFn )
  {
    do
    {
      v10 = initFn + m_activeChild;
      if ( v10 >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 415, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
        __debugbreak();
      v11 = &treeInstance->tree->nodes[v10];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 417, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v8 = s_tickFunctions[(unsigned __int8)v11->type](treeInstance, v10);
      if ( v8 != BT_RESULT_SUCCESS )
        break;
      m_activeChild = treeInstance->instanceData[v3].m_NodeData.nonAction.m_activeChild + 1;
      treeInstance->instanceData[v3].m_NodeData.nonAction.m_activeChild = m_activeChild;
    }
    while ( m_activeChild < processFn );
    LODWORD(v3) = nodeIndex;
  }
  if ( v8 != BT_RESULT_RUNNING )
    treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild = 0;
  resultOverride = v5->resultOverride;
  if ( resultOverride == BT_RESULT_NO_OVERRIDE )
    resultOverride = v8;
  return AI_BT_PostProcessDecorators(treeInstance, v3, resultOverride);
}

/*
==============
AI_BT_ActiveSelectorTick
==============
*/
BehaviorTreeResult AI_BT_ActiveSelectorTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  __int64 v4; 
  BehaviorTreeNode *v5; 
  unsigned __int16 processFn; 
  int initFn; 
  unsigned __int16 m_activeChild; 
  AI_BT_TreeNodeInstanceData *v9; 
  BehaviorTreeResult v10; 
  unsigned int v11; 
  unsigned __int16 v12; 
  unsigned int v13; 
  BehaviorTreeNode *v14; 
  BehaviorTreeResult resultOverride; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 629, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 630, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = v2;
  v5 = &treeInstance->tree->nodes[v2];
  processFn = v5->data.actionData.processFn;
  initFn = v5->data.actionData.initFn;
  if ( !processFn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 637, ASSERT_TYPE_ASSERT, "(childCount > 0)", (const char *)&queryFormat, "childCount > 0") )
    __debugbreak();
  m_activeChild = treeInstance->instanceData[v2].m_NodeData.nonAction.m_activeChild;
  v9 = &treeInstance->instanceData[v2];
  v9->m_NodeData.nonAction.m_activeChild = 0;
  v10 = BT_RESULT_FAILURE;
  v9->m_tickedThisFrame = 1;
  if ( v5->schedule > 1 && m_activeChild && !AI_BT_IsScheduledTick(treeInstance, v5, &treeInstance->instanceData[v4]) )
    v9->m_NodeData.nonAction.m_activeChild = m_activeChild;
  v11 = nodeIndex;
  AI_BT_InitProcessDecorators(treeInstance, nodeIndex);
  v12 = v9->m_NodeData.nonAction.m_activeChild;
  if ( v9->m_NodeData.nonAction.m_activeChild < processFn )
  {
    do
    {
      v13 = initFn + v12;
      if ( v13 >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 415, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
        __debugbreak();
      v14 = &treeInstance->tree->nodes[v13];
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 417, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v10 = s_tickFunctions[(unsigned __int8)v14->type](treeInstance, v13);
      if ( v10 )
        break;
      v12 = v9->m_NodeData.nonAction.m_activeChild + 1;
      v9->m_NodeData.nonAction.m_activeChild = v12;
    }
    while ( v12 < processFn );
    v11 = nodeIndex;
  }
  if ( v9->m_NodeData.nonAction.m_activeChild < m_activeChild )
    AI_BT_CallTerminate(treeInstance, initFn + m_activeChild);
  if ( v10 != BT_RESULT_RUNNING )
    v9->m_NodeData.nonAction.m_activeChild = 0;
  resultOverride = v5->resultOverride;
  if ( resultOverride == BT_RESULT_NO_OVERRIDE )
    resultOverride = v10;
  return AI_BT_PostProcessDecorators(treeInstance, v11, resultOverride);
}

/*
==============
AI_BT_ActiveSequenceTick
==============
*/
BehaviorTreeResult AI_BT_ActiveSequenceTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  __int64 v4; 
  BehaviorTreeNode *v5; 
  unsigned __int16 processFn; 
  int initFn; 
  unsigned __int16 m_activeChild; 
  AI_BT_TreeNodeInstanceData *v9; 
  BehaviorTreeResult v10; 
  unsigned int v11; 
  unsigned __int16 v12; 
  unsigned int v13; 
  BehaviorTreeNode *v14; 
  BehaviorTreeResult resultOverride; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 699, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 700, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = v2;
  v5 = &treeInstance->tree->nodes[v2];
  processFn = v5->data.actionData.processFn;
  initFn = v5->data.actionData.initFn;
  if ( !processFn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 707, ASSERT_TYPE_ASSERT, "(childCount > 0)", (const char *)&queryFormat, "childCount > 0") )
    __debugbreak();
  m_activeChild = treeInstance->instanceData[v2].m_NodeData.nonAction.m_activeChild;
  v9 = &treeInstance->instanceData[v2];
  v9->m_NodeData.nonAction.m_activeChild = 0;
  v10 = BT_RESULT_FAILURE;
  v9->m_tickedThisFrame = 1;
  if ( v5->schedule > 1 && m_activeChild && !AI_BT_IsScheduledTick(treeInstance, v5, &treeInstance->instanceData[v4]) )
    v9->m_NodeData.nonAction.m_activeChild = m_activeChild;
  v11 = nodeIndex;
  AI_BT_InitProcessDecorators(treeInstance, nodeIndex);
  v12 = v9->m_NodeData.nonAction.m_activeChild;
  if ( v9->m_NodeData.nonAction.m_activeChild < processFn )
  {
    do
    {
      v13 = initFn + v12;
      if ( v13 >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 415, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
        __debugbreak();
      v14 = &treeInstance->tree->nodes[v13];
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 417, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v10 = s_tickFunctions[(unsigned __int8)v14->type](treeInstance, v13);
      if ( v10 != BT_RESULT_SUCCESS )
        break;
      v12 = v9->m_NodeData.nonAction.m_activeChild + 1;
      v9->m_NodeData.nonAction.m_activeChild = v12;
    }
    while ( v12 < processFn );
    v11 = nodeIndex;
  }
  if ( v9->m_NodeData.nonAction.m_activeChild < m_activeChild )
    AI_BT_CallTerminate(treeInstance, initFn + m_activeChild);
  if ( v10 != BT_RESULT_RUNNING )
    v9->m_NodeData.nonAction.m_activeChild = 0;
  resultOverride = v5->resultOverride;
  if ( resultOverride == BT_RESULT_NO_OVERRIDE )
    resultOverride = v10;
  return AI_BT_PostProcessDecorators(treeInstance, v11, resultOverride);
}

/*
==============
AI_BT_ParallelTick
==============
*/
BehaviorTreeResult AI_BT_ParallelTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTreeNode *v4; 
  unsigned __int16 processFn; 
  AI_BT_TreeNodeInstanceData *v6; 
  unsigned __int16 m_activeChild; 
  char v8; 
  unsigned int v9; 
  BehaviorTreeNode *v10; 
  BehaviorTreeResult v11; 
  BehaviorTreeResult resultOverride; 
  int initFn; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 767, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 768, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = &treeInstance->tree->nodes[v2];
  processFn = v4->data.actionData.processFn;
  initFn = v4->data.actionData.initFn;
  if ( !processFn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 775, ASSERT_TYPE_ASSERT, "(childCount > 0)", (const char *)&queryFormat, "childCount > 0") )
    __debugbreak();
  v6 = &treeInstance->instanceData[v2];
  v6->m_NodeData.nonAction.m_activeChild = 0;
  v6->m_tickedThisFrame = 1;
  AI_BT_InitProcessDecorators(treeInstance, v2);
  m_activeChild = v6->m_NodeData.nonAction.m_activeChild;
  v8 = 0;
  if ( v6->m_NodeData.nonAction.m_activeChild < processFn )
  {
    do
    {
      v9 = initFn + m_activeChild;
      if ( v9 >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 415, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
        __debugbreak();
      v10 = &treeInstance->tree->nodes[v9];
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 417, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
        __debugbreak();
      v11 = s_tickFunctions[(unsigned __int8)v10->type](treeInstance, v9);
      if ( v11 == BT_RESULT_RUNNING )
      {
        v8 = 2;
      }
      else if ( v8 != 2 && v11 == BT_RESULT_SUCCESS )
      {
        v8 = 1;
      }
      m_activeChild = v6->m_NodeData.nonAction.m_activeChild + 1;
      v6->m_NodeData.nonAction.m_activeChild = m_activeChild;
    }
    while ( m_activeChild < processFn );
    LODWORD(v2) = nodeIndex;
  }
  resultOverride = v4->resultOverride;
  if ( resultOverride == BT_RESULT_NO_OVERRIDE )
    resultOverride = v8;
  return AI_BT_PostProcessDecorators(treeInstance, v2, resultOverride);
}

/*
==============
AI_BT_ActionTick
==============
*/
__int64 AI_BT_ActionTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTreeNode *v4; 
  AI_BT_TreeNodeInstanceData *v5; 
  __int64 entnum; 
  unsigned int processFn; 
  BehaviorTree *tree; 
  __int64 v9; 
  const char *v10; 
  BehaviorTreeResult v11; 
  const gentity_s *v12; 
  int Function; 
  const char *v14; 
  scrContext_t *v15; 
  unsigned int v16; 
  unsigned __int16 terminateFn; 
  BehaviorTreeResult resultOverride; 
  BehaviorTreeResult v19; 
  __int64 paramsID; 
  __int64 bBuiltin; 
  int outReturnValue; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1120, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1121, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  Profile_Begin(288);
  v4 = &treeInstance->tree->nodes[v2];
  if ( v4->data.actionData.processFn == 0xFFFF )
  {
    v19 = BT_RESULT_INVALID;
  }
  else
  {
    v5 = &treeInstance->instanceData[v2];
    v5->m_tickedThisFrame = 1;
    AI_BT_InitProcessDecorators(treeInstance, v2);
    if ( v4->data.actionData.initFn != 0xFFFF && !v5->m_NodeData.action.m_bRunning )
    {
      if ( v5->m_NodeData.action.m_poolIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1145, ASSERT_TYPE_ASSERT, "(instanceData->m_NodeData.action.m_poolIdx == 0)", "%s\n\taction %s likely leaked its instance data.", "instanceData->m_NodeData.action.m_poolIdx == 0", v4->name) )
        __debugbreak();
      AI_BT_CallFunction(treeInstance->entnum, v4, treeInstance->tree, v2, v4->data.actionData.initFn, 0xFFFF, v4->data.actionData.bInitBuiltin, (unsigned __int8 *)&treeInstance->instanceData[v2]);
    }
    entnum = treeInstance->entnum;
    if ( (unsigned int)entnum >= 0x800 )
    {
      LODWORD(bBuiltin) = 2048;
      LODWORD(paramsID) = treeInstance->entnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", paramsID, bBuiltin) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[entnum].r.isInUse != g_entityIsInUse[entnum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[entnum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1149, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( treeInstance->entnum ))", "%s\n\tPlease don't delete the AI from inside its BT tick.", "G_IsEntityInUse( treeInstance->entnum )") )
      __debugbreak();
    outReturnValue = v4->data.actionData.processArgsFn;
    processFn = v4->data.actionData.processFn;
    tree = treeInstance->tree;
    v9 = treeInstance->entnum;
    if ( v4->data.actionData.bProcessBuiltin )
    {
      v10 = j_va("BTBltin %s", s_BTBuiltinFuncs_4[v4->data.actionData.processFn].m_Name);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, v10);
      if ( processFn >= 0x3C )
      {
        LODWORD(bBuiltin) = 60;
        LODWORD(paramsID) = processFn;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1084, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_BTBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_BTBuiltinFuncs )\n\t%i not in [0, %i)", paramsID, bBuiltin) )
          __debugbreak();
      }
      v11 = (unsigned __int8)s_BTBuiltinFuncs_4[processFn].m_Func(tree, v9, v2, outReturnValue, (unsigned __int8 *)&treeInstance->instanceData[v2]);
      Sys_ProfEndNamedEvent();
    }
    else
    {
      v12 = &g_entities[v9];
      Function = AI_BT_GetFunction(treeInstance->tree, v4->data.actionData.processFn);
      Profile_Begin(289);
      v14 = j_va("BT %s %s", tree->name, v4->name);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, v14);
      v15 = ScriptContext_Server();
      Scr_AddInt(v15, v2);
      v16 = GScr_ExecEntThreadWithReturnValue(v12, Function, 1u, Scr_ExecThreadCallback_UnsignedWithErrorMsg, v4->name, &outReturnValue);
      Sys_ProfEndNamedEvent();
      Profile_EndInternal(NULL);
      AI_BT_ValidateThreadState(v4, v16);
      Scr_FreeThread(v15, v16);
      v11 = (char)outReturnValue;
    }
    if ( v11 == BT_RESULT_RUNNING )
    {
      v5->m_NodeData.action.m_bRunning = 1;
    }
    else
    {
      terminateFn = v4->data.actionData.terminateFn;
      if ( terminateFn != 0xFFFF )
        AI_BT_CallFunction(treeInstance->entnum, v4, treeInstance->tree, v2, terminateFn, 0xFFFF, v4->data.actionData.bTerminateBuiltin, (unsigned __int8 *)&treeInstance->instanceData[v2]);
      v5->m_NodeData.action.m_bRunning = 0;
    }
    resultOverride = v4->resultOverride;
    if ( resultOverride == BT_RESULT_NO_OVERRIDE )
      resultOverride = v11;
    v19 = AI_BT_PostProcessDecorators(treeInstance, v2, resultOverride);
  }
  Profile_EndInternal(NULL);
  return (unsigned __int8)v19;
}

/*
==============
AI_BT_BSMTick
==============
*/
BehaviorTreeResult AI_BT_BSMTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  __int64 v4; 
  BehaviorTreeNode *v5; 
  unsigned int processFn; 
  __int64 initFn; 
  scr_string_t v8; 
  unsigned __int16 m_activeChild; 
  scr_string_t v10; 
  unsigned __int16 v11; 
  char v12; 
  scr_string_t String; 
  unsigned __int16 v14; 
  BehaviorTreeResult v15; 
  BehaviorTreeResult resultOverride; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 903, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 904, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = v2;
  v5 = &treeInstance->tree->nodes[v2];
  processFn = v5->data.actionData.processFn;
  initFn = v5->data.actionData.initFn;
  if ( !v5->data.actionData.processFn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 911, ASSERT_TYPE_ASSERT, "(childCount > 0)", (const char *)&queryFormat, "childCount > 0") )
    __debugbreak();
  treeInstance->instanceData[v2].m_tickedThisFrame = 1;
  AI_BT_InitProcessDecorators(treeInstance, v2);
  if ( treeInstance->tree->nodes[initFn].type != BT_NODE_TYPE_ACTION && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 923, ASSERT_TYPE_ASSERT, "(pUpdateNode->type == BT_NODE_TYPE_ACTION)", (const char *)&queryFormat, "pUpdateNode->type == BT_NODE_TYPE_ACTION") )
    __debugbreak();
  v8 = AI_BT_ActionStringTick(treeInstance, initFn);
  m_activeChild = treeInstance->instanceData[v2].m_NodeData.nonAction.m_activeChild;
  v10 = v8;
  if ( v8 )
  {
    v11 = 1;
    v12 = 0;
    treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild = 1;
    if ( processFn > 1 )
    {
      while ( 1 )
      {
        String = SL_GetString(treeInstance->tree->nodes[(unsigned int)initFn + v11].name, 0);
        SL_RemoveRefToString(String);
        if ( String == v10 )
          break;
        v14 = treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild + 1;
        treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild = v14;
        v11 = v14;
        if ( v14 >= processFn )
        {
          v12 = 0;
          goto LABEL_19;
        }
      }
      v12 = 1;
    }
LABEL_19:
    if ( m_activeChild && treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild != m_activeChild )
      AI_BT_CallTerminate(treeInstance, initFn + m_activeChild);
    if ( v12 )
    {
      v15 = AI_BT_CallTick(treeInstance, initFn + treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild);
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  if ( m_activeChild && m_activeChild < processFn )
  {
    AI_BT_CallTerminate(treeInstance, m_activeChild + (_DWORD)initFn);
LABEL_27:
    v15 = BT_RESULT_FAILURE;
    treeInstance->instanceData[v4].m_NodeData.nonAction.m_activeChild = 0;
    goto LABEL_29;
  }
  v15 = BT_RESULT_FAILURE;
LABEL_29:
  resultOverride = v5->resultOverride;
  if ( resultOverride == BT_RESULT_NO_OVERRIDE )
    resultOverride = v15;
  return AI_BT_PostProcessDecorators(treeInstance, nodeIndex, resultOverride);
}

/*
==============
AI_BT_NegateTick
==============
*/
BehaviorTreeResult AI_BT_NegateTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTreeNode *v4; 
  unsigned int initFn; 
  BehaviorTreeResult v6; 
  BehaviorTreeResult result; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 982, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 983, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = &treeInstance->tree->nodes[v2];
  treeInstance->instanceData[v2].m_tickedThisFrame = 1;
  initFn = v4->data.actionData.initFn;
  if ( v4->data.actionData.processFn != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 994, ASSERT_TYPE_ASSERT, "(childCount == 1)", (const char *)&queryFormat, "childCount == 1") )
    __debugbreak();
  v6 = AI_BT_CallTick(treeInstance, initFn);
  if ( v6 == BT_RESULT_FAILURE )
    return 1;
  result = v6;
  if ( v6 == BT_RESULT_SUCCESS )
    return 0;
  return result;
}

/*
==============
AI_BT_InvalidTerminate
==============
*/
char AI_BT_InvalidTerminate(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  Com_PrintError(18, "Calling invalid behaviour terminate\n");
  return 1;
}

/*
==============
AI_BT_NodeTerminate
==============
*/
_BOOL8 AI_BT_NodeTerminate(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  bool v4; 
  BehaviorTreeNode *v5; 
  unsigned int processFn; 
  int initFn; 
  unsigned int v8; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1271, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1272, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = 0;
  v5 = &treeInstance->tree->nodes[v2];
  treeInstance->instanceData[v2].m_NodeData.nonAction.m_activeChild = 0;
  processFn = v5->data.actionData.processFn;
  initFn = v5->data.actionData.initFn;
  if ( v5->data.actionData.processFn )
  {
    v8 = v5->data.actionData.initFn;
    while ( !AI_BT_IsDescendantRunning(treeInstance, v8) )
    {
      if ( ++v8 - initFn >= processFn )
        goto LABEL_13;
    }
    v4 = AI_BT_CallTerminate(treeInstance, v8);
  }
LABEL_13:
  AI_BT_TerminateProcessDecorators(treeInstance, v2, v4);
  return v4;
}

/*
==============
AI_BT_ParallelTerminate
==============
*/
__int64 AI_BT_ParallelTerminate(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  unsigned __int8 v4; 
  BehaviorTreeNode *v5; 
  unsigned __int16 processFn; 
  unsigned int initFn; 
  __int64 v8; 
  BehaviorTreeNode *v9; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1301, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1302, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = 0;
  v5 = &treeInstance->tree->nodes[v2];
  processFn = v5->data.actionData.processFn;
  initFn = v5->data.actionData.initFn;
  if ( processFn )
  {
    v8 = processFn;
    do
    {
      if ( AI_BT_IsDescendantRunning(treeInstance, initFn) )
      {
        if ( initFn >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 424, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
          __debugbreak();
        if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 426, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
          __debugbreak();
        v9 = &treeInstance->tree->nodes[initFn];
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 428, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        v4 |= s_terminateFunctions[(unsigned __int8)v9->type](treeInstance, initFn);
      }
      ++initFn;
      --v8;
    }
    while ( v8 );
    LODWORD(v2) = nodeIndex;
  }
  AI_BT_TerminateProcessDecorators(treeInstance, v2, v4);
  return v4;
}

/*
==============
AI_BT_ActionTerminate
==============
*/
__int64 AI_BT_ActionTerminate(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTree *tree; 
  BehaviorTreeNode *v5; 
  AI_BT_TreeNodeInstanceData *v6; 
  unsigned __int8 v7; 
  unsigned __int16 terminateFn; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1192, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1193, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  Profile_Begin(288);
  tree = treeInstance->tree;
  v5 = &tree->nodes[v2];
  v6 = &treeInstance->instanceData[v2];
  v7 = 0;
  if ( v6->m_NodeData.action.m_bRunning )
  {
    v7 = 1;
    terminateFn = v5->data.actionData.terminateFn;
    if ( terminateFn != 0xFFFF )
    {
      AI_BT_CallFunction(treeInstance->entnum, v5, tree, v2, terminateFn, 0xFFFF, v5->data.actionData.bTerminateBuiltin, (unsigned __int8 *)&treeInstance->instanceData[v2]);
      v6->m_NodeData.action.m_bRunning = 0;
    }
  }
  Profile_EndInternal(NULL);
  return v7;
}

/*
==============
AI_BT_ActionStringTick
==============
*/
__int64 AI_BT_ActionStringTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTreeNode *v4; 
  unsigned int processFn; 
  BehaviorTree *tree; 
  unsigned int v7; 
  const gentity_s *v8; 
  int Function; 
  const char *v10; 
  scrContext_t *v11; 
  unsigned int v12; 
  void *outReturnValue; 
  unsigned int v15; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 852, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 853, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  Profile_Begin(288);
  v4 = &treeInstance->tree->nodes[v2];
  if ( v4->data.actionData.processFn == 0xFFFF )
  {
    v7 = 0;
  }
  else
  {
    treeInstance->instanceData[v2].m_tickedThisFrame = 1;
    AI_BT_InitProcessDecorators(treeInstance, v2);
    processFn = v4->data.actionData.processFn;
    tree = treeInstance->tree;
    if ( v4->data.actionData.bProcessBuiltin )
    {
      if ( processFn >= 0x3C )
      {
        LODWORD(outReturnValue) = v4->data.actionData.processFn;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 817, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_BTBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_BTBuiltinFuncs )\n\t%i not in [0, %i)", outReturnValue, 60) )
          __debugbreak();
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 818, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "not currently supporting built-ins that return strings.") )
        __debugbreak();
      v7 = 0;
    }
    else
    {
      v8 = &g_entities[treeInstance->entnum];
      Function = AI_BT_GetFunction(treeInstance->tree, v4->data.actionData.processFn);
      Profile_Begin(289);
      v10 = j_va("BTproc %s %i", tree->name, processFn);
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, v10);
      v11 = ScriptContext_Server();
      Scr_AddInt(v11, v2);
      v12 = GScr_ExecEntThreadWithReturnValue(v8, Function, 1u, Scr_ExecThreadCallback_ScrStringWithErrorMsg, v4->name, &v15);
      Sys_ProfEndNamedEvent();
      Profile_EndInternal(NULL);
      AI_BT_ValidateThreadState(v4, v12);
      Scr_FreeThread(v11, v12);
      v7 = v15;
    }
    treeInstance->instanceData[v2].m_NodeData.action.m_bRunning = 0;
    AI_BT_PostProcessDecorators(treeInstance, v2, BT_RESULT_SUCCESS);
  }
  Profile_EndInternal(NULL);
  return v7;
}

/*
==============
AI_BT_CallFunction
==============
*/
void AI_BT_CallFunction(int entNum, BehaviorTreeNode *pNode, BehaviorTree *pTree, int taskID, int funcID, int paramsID, bool bBuiltin, unsigned __int8 *pInOutInstIndex)
{
  const char *v12; 
  const gentity_s *v13; 
  int Function; 
  const char *v15; 
  scrContext_t *v16; 
  unsigned int v17; 
  int v19; 

  if ( bBuiltin )
  {
    v12 = j_va("BTBltin %s", s_BTBuiltinFuncs_4[funcID].m_Name);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v12);
    if ( (unsigned int)funcID >= 0x3C )
    {
      v19 = 60;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1053, ASSERT_TYPE_ASSERT, "(unsigned)( funcID ) < (unsigned)( ( sizeof( *array_counter( s_BTBuiltinFuncs ) ) + 0 ) )", "funcID doesn't index ARRAY_COUNT( s_BTBuiltinFuncs )\n\t%i not in [0, %i)", funcID, v19) )
        __debugbreak();
    }
    s_BTBuiltinFuncs_4[funcID].m_Func(pTree, entNum, taskID, paramsID, pInOutInstIndex);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    v13 = &g_entities[entNum];
    Function = AI_BT_GetFunction(pTree, funcID);
    Profile_Begin(289);
    v15 = j_va("BT %s %s %i", pTree->name, pNode->name, (unsigned int)funcID);
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, v15);
    v16 = ScriptContext_Server();
    Scr_AddInt(v16, taskID);
    v17 = GScr_ExecEntThread(v13, Function, 1u);
    Sys_ProfEndNamedEvent();
    Profile_EndInternal(NULL);
    AI_BT_ValidateThreadState(pNode, v17);
    Scr_FreeThread(v16, v17);
  }
}

/*
==============
AI_BT_CallTerminate
==============
*/
bool AI_BT_CallTerminate(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTreeNode *v4; 

  v2 = nodeIndex;
  if ( nodeIndex >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 424, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
    __debugbreak();
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 425, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 426, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  v4 = &treeInstance->tree->nodes[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 428, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  return s_terminateFunctions[(unsigned __int8)v4->type](treeInstance, v2);
}

/*
==============
AI_BT_CallTick
==============
*/
BehaviorTreeResult AI_BT_CallTick(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTreeNode *v4; 

  v2 = nodeIndex;
  if ( nodeIndex >= 0x280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 415, ASSERT_TYPE_ASSERT, "(nodeIndex < 640)", (const char *)&queryFormat, "nodeIndex < AI_BT_MAX_TREE_NODES") )
    __debugbreak();
  v4 = &treeInstance->tree->nodes[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 417, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  return s_tickFunctions[(unsigned __int8)v4->type](treeInstance, v2);
}

/*
==============
AI_BT_CreateBehaviorTreeInstance
==============
*/
void AI_BT_CreateBehaviorTreeInstance(const char *name, int entnum, bool processRootDecorators)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v8; 
  ntl::red_black_tree_node_base *v9; 
  AI_BT_TreeAssetInstance *mp_next; 
  ntl::red_black_tree_node_base *v11; 
  bool v12; 
  ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *mp_node; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> >,ntl::pair<int,AI_BT_TreeAssetInstance *> *,ntl::pair<int,AI_BT_TreeAssetInstance *> &> *inserted; 
  ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *i; 
  ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *v16; 
  const char *FilenameSubString; 
  BehaviorTree *v18; 
  ntl::pair<int,AI_BT_TreeAssetInstance *> r_element; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> >,ntl::pair<int,AI_BT_TreeAssetInstance *> *,ntl::pair<int,AI_BT_TreeAssetInstance *> &> v20; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> >,ntl::pair<int,AI_BT_TreeAssetInstance *> *,ntl::pair<int,AI_BT_TreeAssetInstance *> &> result; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 332, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  mp_parent = s_treeAssetInstances.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
  v8 = &s_treeAssetInstances.m_endNodeBase;
  if ( s_treeAssetInstances.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < entnum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        v8 = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( v8 == &s_treeAssetInstances.m_endNodeBase )
      goto LABEL_18;
    v9 = &s_treeAssetInstances.m_endNodeBase;
    if ( entnum >= v8[1].m_color )
      v9 = v8;
    v8 = v9;
  }
  if ( v8 != &s_treeAssetInstances.m_endNodeBase )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 335, ASSERT_TYPE_ASSERT, "(it == s_treeAssetInstances.end())", (const char *)&queryFormat, "it == s_treeAssetInstances.end()") )
      __debugbreak();
    if ( v8 != &s_treeAssetInstances.m_endNodeBase )
      AI_BT_FreeTreeAssetInstance(entnum);
  }
LABEL_18:
  if ( !s_btInstanceAssetPool.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  if ( (ntl::internal::pool_allocator_freelist<2576> *)s_btInstanceAssetPool.m_freelist.m_head.mp_next == &s_btInstanceAssetPool.m_freelist )
  {
    mp_next = NULL;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E0C8E8, 6134i64);
  }
  else
  {
    if ( !s_btInstanceAssetPool.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !s_btInstanceAssetPool.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<2576> *)s_btInstanceAssetPool.m_freelist.m_head.mp_next == &s_btInstanceAssetPool.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0xA10ui64, 0x40ui64) )
      __debugbreak();
    mp_next = (AI_BT_TreeAssetInstance *)s_btInstanceAssetPool.m_freelist.m_head.mp_next;
    s_btInstanceAssetPool.m_freelist.m_head.mp_next = s_btInstanceAssetPool.m_freelist.m_head.mp_next->mp_next;
  }
  v11 = s_treeAssetInstances.m_endNodeBase.mp_parent;
  v12 = 1;
  r_element.first = entnum;
  r_element.second = mp_next;
  while ( v11 )
  {
    p_m_endNodeBase = v11;
    v12 = entnum < v11[1].m_color;
    if ( entnum >= v11[1].m_color )
      v11 = v11->mp_right;
    else
      v11 = v11->mp_left;
  }
  mp_node = (ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *)p_m_endNodeBase;
  if ( v12 )
  {
    if ( p_m_endNodeBase == s_treeAssetInstances.m_endNodeBase.mp_left )
    {
      inserted = ntl::red_black_tree<int,ntl::pair<int,AI_BT_TreeAssetInstance *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *>>,64,8>,ntl::return_pair_first<int,AI_BT_TreeAssetInstance *>,ntl::less<int,int>>::insert_node(&s_treeAssetInstances, &v20, p_m_endNodeBase, &r_element, 1, 0);
LABEL_58:
      mp_node = inserted->mp_node;
      goto LABEL_59;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_node = (ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *)p_m_endNodeBase->mp_left;
      if ( mp_node )
      {
        for ( i = (ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *)mp_node->mp_right; i; i = (ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *)i->mp_right )
          mp_node = i;
      }
      else
      {
        mp_node = (ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *)p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_node->mp_left )
        {
          do
          {
            v16 = mp_node;
            mp_node = (ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *)mp_node->mp_parent;
          }
          while ( v16 == mp_node->mp_left );
        }
      }
    }
    else
    {
      mp_node = (ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *> > *)p_m_endNodeBase->mp_right;
    }
  }
  if ( !mp_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_node->m_element.first < entnum )
  {
    inserted = ntl::red_black_tree<int,ntl::pair<int,AI_BT_TreeAssetInstance *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<int,AI_BT_TreeAssetInstance *>>,64,8>,ntl::return_pair_first<int,AI_BT_TreeAssetInstance *>,ntl::less<int,int>>::insert_node(&s_treeAssetInstances, &result, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_58;
  }
LABEL_59:
  mp_next->entnum = -1;
  mp_next->tree = NULL;
  memset_0(mp_next, 0, 0xA00ui64);
  if ( !mp_node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  if ( mp_node->m_element.second != mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 348, ASSERT_TYPE_ASSERT, "(it->second == treeInstance)", (const char *)&queryFormat, "it->second == treeInstance") )
    __debugbreak();
  FilenameSubString = Com_GetFilenameSubString(name);
  v18 = AI_BT_RegisterBehaviorTree(FilenameSubString);
  mp_next->tree = v18;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 351, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  mp_next->entnum = entnum;
  if ( processRootDecorators )
    AI_BT_ProcessRootDecorators(mp_next, 0);
}

/*
==============
AI_BT_DebugRender
==============
*/
void AI_BT_DebugRender(const AI_BT_TreeAssetInstance *treeInstance, int entnum)
{
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v10; 
  BehaviorTreeNode *nodes; 
  const vec4_t *v22; 
  vec4_t *v23; 
  unsigned int initFn; 
  unsigned int v30; 
  float columnY; 
  float v38; 
  int lineNumber; 
  float columnX; 
  float y; 

  v6 = DVARINT_ai_showNativeBT;
  if ( !DVARINT_ai_showNativeBT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNativeBT") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( integer == entnum )
    goto LABEL_10;
  if ( !integer )
  {
    v10 = DVARINT_ai_debugEntIndex;
    if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( entnum == v10->current.integer )
    {
LABEL_10:
      _RBX = DCONST_DVARFLT_cl_devguiFontScaleHD;
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm6
        vmovaps [rsp+0A8h+var_48], xmm7
        vmovaps [rsp+0A8h+var_68], xmm9
      }
      if ( !DCONST_DVARFLT_cl_devguiFontScaleHD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_devguiFontScaleHD") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm7, dword ptr [rbx+28h]
        vmovss  xmm6, cs:__real@42c80000
        vmovss  xmm1, cs:__real@432a0000; y
        vmovaps xmm3, xmm7; scale
        vmovaps xmm0, xmm6; x
      }
      G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, &colorRed, *(float *)&_XMM3, "BT Asset");
      lineNumber = 0;
      __asm
      {
        vmovss  [rsp+0A8h+columnX], xmm6
        vxorps  xmm6, xmm6, xmm6
        vmovss  [rsp+0A8h+y], xmm6
      }
      if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1435, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
        __debugbreak();
      __asm { vmulss  xmm9, xmm7, cs:__real@435c0000 }
      nodes = treeInstance->tree->nodes;
      if ( treeInstance->instanceData[0].m_tickedThisFrame )
      {
        __asm
        {
          vmulss  xmm0, xmm7, cs:__real@41500000
          vaddss  xmm1, xmm0, [rsp+0A8h+y]
          vmovss  [rsp+0A8h+y], xmm1
        }
        v22 = &colorLtGrey;
        __asm { vmovaps [rsp+0A8h+var_58], xmm8 }
        if ( nodes->type == BT_NODE_TYPE_ACTION )
        {
          v23 = &colorLtCyan;
          if ( !treeInstance->instanceData[0].m_NodeData.action.m_bRunning )
            v23 = &colorLtGrey;
          v22 = v23;
        }
        __asm
        {
          vmovss  xmm8, cs:__real@43480000
          vmovss  xmm0, [rsp+0A8h+columnX]; x
          vaddss  xmm1, xmm1, xmm8; y
          vmovaps xmm3, xmm7; scale
        }
        G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, v22, *(float *)&_XMM3, nodes->name);
        if ( ++lineNumber > 35 )
        {
          __asm
          {
            vaddss  xmm1, xmm9, [rsp+0A8h+columnX]
            vmovss  [rsp+0A8h+columnX], xmm1
            vmovss  [rsp+0A8h+y], xmm6
          }
          lineNumber = 0;
        }
        if ( nodes->type != BT_NODE_TYPE_ACTION )
        {
          initFn = nodes->data.actionData.initFn;
          v30 = initFn + nodes->data.actionData.processFn;
          if ( initFn < v30 )
          {
            __asm { vmovss  xmm6, cs:__real@41880000 }
            do
            {
              __asm
              {
                vmovss  [rsp+0A8h+var_70], xmm7
                vmovss  [rsp+0A8h+columnY], xmm8
                vmovaps xmm2, xmm6; x
              }
              AI_BT_DebugRenderNode(initFn++, treeInstance, *(const float *)&_XMM2, &y, &columnX, columnY, &lineNumber, v38);
            }
            while ( initFn < v30 );
          }
        }
        __asm { vmovaps xmm8, [rsp+0A8h+var_58] }
      }
      __asm
      {
        vmovaps xmm7, [rsp+0A8h+var_48]
        vmovaps xmm6, [rsp+0A8h+var_38]
        vmovaps xmm9, [rsp+0A8h+var_68]
      }
    }
  }
}

/*
==============
AI_BT_DebugRenderNode
==============
*/

void __fastcall AI_BT_DebugRenderNode(const unsigned int nodeIndex, const AI_BT_TreeAssetInstance *treeInstance, double x, float *y, float *columnX, const float columnY, int *lineNumber, const float scale)
{
  __int64 v14; 
  BehaviorTreeNode *v19; 
  bool v22; 
  const vec4_t *v23; 
  vec4_t *v24; 
  unsigned int initFn; 
  unsigned int v31; 
  float v39; 
  float v40; 
  char v45; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _R15 = y;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_58], xmm9
  }
  v14 = nodeIndex;
  __asm { vmovaps xmm9, xmm2 }
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1435, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1436, ASSERT_TYPE_ASSERT, "(y)", (const char *)&queryFormat, "y") )
    __debugbreak();
  _RSI = columnX;
  if ( !columnX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1437, ASSERT_TYPE_ASSERT, "(columnX)", (const char *)&queryFormat, "columnX") )
    __debugbreak();
  if ( !lineNumber && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1438, ASSERT_TYPE_ASSERT, "(lineNumber)", (const char *)&queryFormat, "lineNumber") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, [rsp+98h+scale]
    vmulss  xmm7, xmm6, cs:__real@435c0000
  }
  v19 = &treeInstance->tree->nodes[v14];
  if ( treeInstance->instanceData[v14].m_tickedThisFrame )
  {
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@41500000
      vaddss  xmm1, xmm0, dword ptr [r15]
      vmovss  dword ptr [r15], xmm1
    }
    v22 = v19->type == BT_NODE_TYPE_ACTION;
    v23 = &colorLtGrey;
    __asm { vmovaps [rsp+98h+var_48], xmm8 }
    if ( v22 )
    {
      v24 = &colorLtCyan;
      if ( !treeInstance->instanceData[v14].m_NodeData.action.m_bRunning )
        v24 = &colorLtGrey;
      v23 = v24;
    }
    __asm
    {
      vmovss  xmm8, [rsp+98h+columnY]
      vaddss  xmm0, xmm9, dword ptr [rsi]; x
      vaddss  xmm1, xmm1, xmm8; y
      vmovaps xmm3, xmm6; scale
    }
    G_Main_AddDebugString2D(*(float *)&_XMM0, *(float *)&_XMM1, v23, *(float *)&_XMM3, v19->name);
    if ( ++*lineNumber > 35 )
    {
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [rsi]
        vmovss  dword ptr [rsi], xmm0
      }
      *lineNumber = 0;
      *_R15 = 0.0;
    }
    if ( v19->type != BT_NODE_TYPE_ACTION )
    {
      initFn = v19->data.actionData.initFn;
      v31 = initFn + v19->data.actionData.processFn;
      if ( initFn < v31 )
      {
        __asm { vaddss  xmm7, xmm9, cs:__real@41880000 }
        do
        {
          __asm
          {
            vmovss  [rsp+98h+var_60], xmm6
            vmovss  [rsp+98h+var_70], xmm8
            vmovaps xmm2, xmm7; x
          }
          AI_BT_DebugRenderNode(initFn++, treeInstance, *(const float *)&_XMM2, _R15, columnX, v39, lineNumber, v40);
        }
        while ( initFn < v31 );
      }
    }
    __asm { vmovaps xmm8, [rsp+98h+var_48] }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
AI_BT_FreeTreeAssetInstance
==============
*/
void AI_BT_FreeTreeAssetInstance(int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v3; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  int v5; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v6; 
  __int64 v7; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v8; 

  mp_parent = s_treeAssetInstances.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
  if ( s_treeAssetInstances.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < entnum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase != &s_treeAssetInstances.m_endNodeBase && entnum >= p_m_endNodeBase[1].m_color )
    {
      v3 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_endNodeBase[1].mp_parent;
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 368, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
        __debugbreak();
      if ( !v3[320].mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 369, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
        __debugbreak();
      mp_next = v3[320].mp_next;
      v5 = 0;
      if ( LOWORD(mp_next[1].mp_next) )
      {
        v6 = v3;
        v7 = 0i64;
        do
        {
          v8 = mp_next;
          if ( LOBYTE(mp_next[2].mp_next[v7 + 1].mp_next) == 7 && LOBYTE(v6->mp_next) )
          {
            BT_FreeInstanceData((unsigned __int8 *)v3 + 4 * v5);
            v8 = v3[320].mp_next;
          }
          ++v5;
          v7 += 4i64;
          v6 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)((char *)v6 + 4);
          mp_next = v8;
        }
        while ( v5 < LOWORD(v8[1].mp_next) );
      }
      v3->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_btInstanceAssetPool.m_freelist.m_head;
      s_btInstanceAssetPool.m_freelist.m_head.mp_next = v3;
      if ( !s_treeAssetInstances.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      ntl::red_black_tree_node_base::get_next(p_m_endNodeBase);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      if ( p_m_endNodeBase == &s_treeAssetInstances.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
        __debugbreak();
      ntl::red_black_tree_node_base::rebalance_for_erase(p_m_endNodeBase, &s_treeAssetInstances.m_endNodeBase.mp_parent, &s_treeAssetInstances.m_endNodeBase.mp_left, &s_treeAssetInstances.m_endNodeBase.mp_right);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      *(_QWORD *)&p_m_endNodeBase->m_color = s_treeAssetInstances.m_freelist.m_head.mp_next;
      --s_treeAssetInstances.m_size;
      s_treeAssetInstances.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_endNodeBase;
    }
  }
}

/*
==============
AI_BT_FreeTreeAssets
==============
*/
void AI_BT_FreeTreeAssets(void)
{
  if ( s_treeAssetCount > 0 )
    memset(s_treeAssets, 0, 8i64 * s_treeAssetCount);
  s_treeAssetCount = 0;
}

/*
==============
AI_BT_GetFunction
==============
*/
__int64 AI_BT_GetFunction(BehaviorTree *pTree, int funcID)
{
  __int64 v2; 
  __int64 v4; 
  __int64 result; 
  GameScriptData *v6; 
  scrContext_t *v7; 
  unsigned int v8; 
  unsigned int outReturnValue; 

  v2 = funcID;
  if ( !pTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1025, ASSERT_TYPE_ASSERT, "(pTree)", (const char *)&queryFormat, "pTree") )
    __debugbreak();
  if ( (int)v2 >= pTree->numFuncIDs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1026, ASSERT_TYPE_ASSERT, "(funcID < pTree->numFuncIDs)", (const char *)&queryFormat, "funcID < pTree->numFuncIDs") )
    __debugbreak();
  v4 = v2;
  result = (unsigned int)pTree->funcIDs[v2];
  if ( (int)result <= 0 )
  {
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
      __debugbreak();
    if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    v6 = GameScriptData::ms_gScriptData;
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1031, ASSERT_TYPE_ASSERT, "(gScrData)", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    v7 = ScriptContext_Server();
    Scr_AddInt(v7, v2);
    Scr_AddString(v7, pTree->name);
    v8 = Scr_ExecThreadWithReturnValue(v7, v6->bt_getfunction, 2u, Scr_ExecThreadCallback_Func, NULL, &outReturnValue);
    if ( (int)outReturnValue <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1040, ASSERT_TYPE_ASSERT, "( fn > 0 )", (const char *)&queryFormat, "fn > 0") )
      __debugbreak();
    Scr_FreeThread(v7, v8);
    pTree->funcIDs[v4] = outReturnValue;
    return outReturnValue;
  }
  return result;
}

/*
==============
AI_BT_HasInstance
==============
*/
bool AI_BT_HasInstance(int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v3; 
  ntl::red_black_tree_node_base *v4; 

  mp_parent = s_treeAssetInstances.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
  if ( !s_treeAssetInstances.m_endNodeBase.mp_parent )
  {
LABEL_10:
    v3 = p_m_endNodeBase == &s_treeAssetInstances.m_endNodeBase;
    return !v3;
  }
  do
  {
    if ( mp_parent[1].m_color < entnum )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  v3 = p_m_endNodeBase == &s_treeAssetInstances.m_endNodeBase;
  if ( p_m_endNodeBase != &s_treeAssetInstances.m_endNodeBase )
  {
    v4 = &s_treeAssetInstances.m_endNodeBase;
    if ( entnum >= p_m_endNodeBase[1].m_color )
      v4 = p_m_endNodeBase;
    p_m_endNodeBase = v4;
    goto LABEL_10;
  }
  return !v3;
}

/*
==============
AI_BT_InitProcessDecorators
==============
*/
void AI_BT_InitProcessDecorators(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTree *tree; 
  BehaviorTreeNode *v5; 
  unsigned __int16 firstDecorator; 
  unsigned __int16 decoratorCount; 
  int v8; 
  int v9; 
  BehaviorTree *v10; 
  BehaviorTreeDecorator *decorators; 
  BehaviorTreeDecorator *v12; 
  __int64 paramsID; 
  __int64 bBuiltin; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1384, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1385, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  tree = treeInstance->tree;
  v5 = &tree->nodes[v2];
  if ( v5->decorators.decoratorCount )
  {
    firstDecorator = v5->decorators.firstDecorator;
    decoratorCount = tree->decoratorCount;
    if ( firstDecorator >= decoratorCount )
    {
      LODWORD(paramsID) = firstDecorator;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1392, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, decoratorCount) )
        __debugbreak();
    }
    v8 = v5->decorators.decoratorCount + v5->decorators.firstDecorator;
    if ( v8 - 1 >= (unsigned int)treeInstance->tree->decoratorCount )
    {
      LODWORD(bBuiltin) = treeInstance->tree->decoratorCount;
      LODWORD(paramsID) = v8 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1393, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, bBuiltin) )
        __debugbreak();
    }
    v9 = 0;
    if ( v5->decorators.decoratorCount )
    {
      do
      {
        v10 = treeInstance->tree;
        decorators = v10->decorators;
        if ( decorators[v9 + v5->decorators.firstDecorator].type == BT_DEC_TYPE_INIT )
        {
          v12 = &decorators[v9 + v5->decorators.firstDecorator];
          AI_BT_CallFunction(treeInstance->entnum, v5, v10, v2, v12->data.rootInit.initFn, 0xFFFF, v12->data.rootInit.bInitBuiltin, NULL);
        }
        ++v9;
      }
      while ( v9 < v5->decorators.decoratorCount );
    }
  }
}

/*
==============
AI_BT_IsDescendantRunning
==============
*/
bool AI_BT_IsDescendantRunning(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  BehaviorTreeNode *v4; 
  BehaviorTreeNodeType type; 
  int v6; 

  while ( 1 )
  {
    if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1223, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
      __debugbreak();
    if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1224, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
      __debugbreak();
    v4 = &treeInstance->tree->nodes[nodeIndex];
    type = v4->type;
    if ( type == BT_NODE_TYPE_ACTION )
      break;
    if ( v4->resultOverride == BT_RESULT_RUNNING )
      return 1;
    if ( !v4->data.actionData.processFn )
      return 0;
    if ( type == BT_NODE_TYPE_PARALLEL )
    {
      v6 = 0;
      while ( !AI_BT_IsDescendantRunning(treeInstance, v6 + v4->data.actionData.initFn) )
      {
        if ( ++v6 >= v4->data.actionData.processFn )
          return 0;
      }
      return 1;
    }
    nodeIndex = v4->data.actionData.initFn + treeInstance->instanceData[nodeIndex].m_NodeData.nonAction.m_activeChild;
  }
  return treeInstance->instanceData[nodeIndex].m_NodeData.action.m_bRunning;
}

/*
==============
AI_BT_IsScheduledTick
==============
*/
bool AI_BT_IsScheduledTick(AI_BT_TreeAssetInstance *treeInstance, BehaviorTreeNode *node, AI_BT_TreeNodeInstanceData *instanceData)
{
  if ( node->schedule <= 1 )
    return 1;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  return level.time / level.frameDuration % node->schedule == treeInstance->entnum % node->schedule;
}

/*
==============
AI_BT_LoadTreeAssetInstances
==============
*/
void AI_BT_LoadTreeAssetInstances(MemoryFile *memFile)
{
  __int64 v2; 
  const char *CString; 
  int v4; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v7; 
  ntl::red_black_tree_node_base *v8; 
  __int64 v9; 
  ntl::red_black_tree_node_base *v10; 
  __int64 v11; 
  ai_bt_instance_data *v12; 
  unsigned int p; 
  int entnum; 

  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p != -1414812757 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 200, ASSERT_TYPE_ASSERT, "(guard == 0xabababab)", (const char *)&queryFormat, "guard == 0xabababab") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p )
  {
    v2 = p;
    do
    {
      CString = MemFile_ReadCString(memFile);
      MemFile_ReadData(memFile, 4ui64, &entnum);
      v4 = entnum;
      AI_BT_CreateBehaviorTreeInstance(CString, entnum, 0);
      mp_parent = s_treeAssetInstances.m_endNodeBase.mp_parent;
      p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
      if ( s_treeAssetInstances.m_endNodeBase.mp_parent )
      {
        do
        {
          if ( mp_parent[1].m_color < v4 )
          {
            mp_parent = mp_parent->mp_right;
          }
          else
          {
            p_m_endNodeBase = mp_parent;
            mp_parent = mp_parent->mp_left;
          }
        }
        while ( mp_parent );
        if ( p_m_endNodeBase == &s_treeAssetInstances.m_endNodeBase || v4 >= p_m_endNodeBase[1].m_color )
        {
          if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
        }
        else
        {
          p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
        }
      }
      v7 = p_m_endNodeBase[1].mp_parent;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 210, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
        __debugbreak();
      MemFile_ReadData(memFile, 2ui64, &p);
      if ( (_WORD)p )
      {
        v8 = v7 + 80;
        v9 = 0i64;
        v10 = v7;
        v11 = (unsigned __int16)p;
        do
        {
          MemFile_ReadData(memFile, 2ui64, v10);
          BYTE2(v7->m_color) = 0;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v8->m_color + 16i64) + v9 + 8) == 7 && LOBYTE(v7->m_color) )
          {
            v12 = BT_AllocInstanceData((unsigned __int8 *)v10);
            MemFile_ReadData(memFile, 0x10ui64, v12);
          }
          v10 = (ntl::red_black_tree_node_base *)((char *)v10 + 4);
          v9 += 32i64;
          v7 = (ntl::red_black_tree_node_base *)((char *)v7 + 4);
          --v11;
        }
        while ( v11 );
      }
      --v2;
    }
    while ( v2 );
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p != -1414812757 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 226, ASSERT_TYPE_ASSERT, "(guard == 0xabababab)", (const char *)&queryFormat, "guard == 0xabababab") )
    __debugbreak();
}

/*
==============
AI_BT_MyChanges
==============
*/
void AI_BT_MyChanges(void)
{
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *mp_parent; 
  XAssetHeader v2; 

  for ( i = s_treeAssetInstances.m_endNodeBase.mp_left; i != &s_treeAssetInstances.m_endNodeBase; i = ntl::red_black_tree_node_base::get_next(i) )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_parent = i[1].mp_parent;
    v2.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_BEHAVIOR_TREE, **(const char ***)&mp_parent[80].m_color, 0).physicsLibrary;
    if ( v2.physicsLibrary != *(PhysicsLibrary **)&mp_parent[80].m_color )
      *(XAssetHeader *)&mp_parent[80].m_color = v2;
  }
}

/*
==============
AI_BT_PostProcessDecorators
==============
*/
__int64 AI_BT_PostProcessDecorators(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex, BehaviorTreeResult result)
{
  __int64 v3; 
  BehaviorTree *tree; 
  BehaviorTreeNode *v7; 
  unsigned __int16 firstDecorator; 
  unsigned __int16 decoratorCount; 
  int v10; 
  int v11; 
  BehaviorTree *v12; 
  BehaviorTreeDecorator *decorators; 
  BehaviorTreeDecorator *v14; 
  __int64 paramsID; 
  __int64 bBuiltin; 

  v3 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1333, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1334, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  tree = treeInstance->tree;
  v7 = &tree->nodes[v3];
  if ( !v7->decorators.decoratorCount )
    return (unsigned __int8)result;
  firstDecorator = v7->decorators.firstDecorator;
  decoratorCount = tree->decoratorCount;
  if ( firstDecorator >= decoratorCount )
  {
    LODWORD(paramsID) = firstDecorator;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1341, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, decoratorCount) )
      __debugbreak();
  }
  v10 = v7->decorators.decoratorCount + v7->decorators.firstDecorator;
  if ( v10 - 1 >= (unsigned int)treeInstance->tree->decoratorCount )
  {
    LODWORD(bBuiltin) = treeInstance->tree->decoratorCount;
    LODWORD(paramsID) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1342, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, bBuiltin) )
      __debugbreak();
  }
  v11 = 0;
  if ( v7->decorators.decoratorCount )
  {
    do
    {
      v12 = treeInstance->tree;
      decorators = v12->decorators;
      if ( decorators[v11 + v7->decorators.firstDecorator].type == BT_DEC_TYPE_TERMINATE && result != BT_RESULT_RUNNING )
      {
        v14 = &decorators[v11 + v7->decorators.firstDecorator];
        AI_BT_CallFunction(treeInstance->entnum, v7, v12, v3, v14->data.rootInit.initFn, 0xFFFF, v14->data.rootInit.bInitBuiltin, NULL);
      }
      ++v11;
    }
    while ( v11 < v7->decorators.decoratorCount );
  }
  return (unsigned __int8)result;
}

/*
==============
AI_BT_ProcessRootDecorators
==============
*/
void AI_BT_ProcessRootDecorators(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex)
{
  __int64 v2; 
  BehaviorTree *tree; 
  BehaviorTreeNode *v5; 
  unsigned __int16 firstDecorator; 
  unsigned __int16 decoratorCount; 
  int v8; 
  int v9; 
  BehaviorTree *v10; 
  BehaviorTreeDecorator *decorators; 
  BehaviorTreeDecorator *v12; 
  __int64 paramsID; 
  __int64 bBuiltin; 

  v2 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1360, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1361, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  tree = treeInstance->tree;
  v5 = &tree->nodes[v2];
  if ( v5->decorators.decoratorCount )
  {
    firstDecorator = v5->decorators.firstDecorator;
    decoratorCount = tree->decoratorCount;
    if ( firstDecorator >= decoratorCount )
    {
      LODWORD(paramsID) = firstDecorator;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1368, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, decoratorCount) )
        __debugbreak();
    }
    v8 = v5->decorators.decoratorCount + v5->decorators.firstDecorator;
    if ( v8 - 1 >= (unsigned int)treeInstance->tree->decoratorCount )
    {
      LODWORD(bBuiltin) = treeInstance->tree->decoratorCount;
      LODWORD(paramsID) = v8 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1369, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, bBuiltin) )
        __debugbreak();
    }
    v9 = 0;
    if ( v5->decorators.decoratorCount )
    {
      do
      {
        v10 = treeInstance->tree;
        decorators = v10->decorators;
        if ( decorators[v9 + v5->decorators.firstDecorator].type == BT_DEC_TYPE_ROOT_INIT )
        {
          v12 = &decorators[v9 + v5->decorators.firstDecorator];
          AI_BT_CallFunction(treeInstance->entnum, v5, v10, v2, v12->data.rootInit.initFn, 0xFFFF, v12->data.rootInit.bInitBuiltin, NULL);
        }
        ++v9;
      }
      while ( v9 < v5->decorators.decoratorCount );
    }
  }
}

/*
==============
AI_BT_RegisterBehaviorTree
==============
*/
BehaviorTree *AI_BT_RegisterBehaviorTree(const char *name)
{
  int v1; 
  BehaviorTree **v3; 
  __int64 v4; 
  const char *v5; 
  const char *v6; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  BehaviorTree *result; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  BehaviorTree *v16; 
  BehaviorTree *behaviorTree; 
  __int64 v18; 
  __int64 numFuncIDs; 

  v1 = 0;
  if ( s_treeAssetCount > 0 )
  {
    v3 = s_treeAssets;
LABEL_3:
    v4 = 0x7FFFFFFFi64;
    v5 = name;
    v6 = (*v3)->name;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = v6 - name;
    do
    {
      v8 = (unsigned __int8)v5[v7];
      v9 = v4;
      v10 = *(unsigned __int8 *)v5++;
      --v4;
      if ( !v9 )
        break;
      if ( v8 != v10 )
      {
        v11 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v11 = v8;
        v8 = v11;
        v12 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v12 = v10;
        if ( v8 != v12 )
        {
          ++v1;
          ++v3;
          if ( v1 >= s_treeAssetCount )
            goto LABEL_19;
          goto LABEL_3;
        }
      }
    }
    while ( v8 );
    result = s_treeAssets[v1];
    if ( result )
      return result;
  }
LABEL_19:
  if ( s_treeAssetCount >= 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 303, ASSERT_TYPE_ASSERT, "(s_treeAssetCount < AI_BT_MAX_TREES)", "%s\n\tExceeded max number of BT tree types (%d).", "s_treeAssetCount < AI_BT_MAX_TREES", 16) )
    __debugbreak();
  if ( !Sys_IsMainThread() )
    goto LABEL_34;
  v14 = DCONST_DVARINT_developer;
  if ( !DCONST_DVARINT_developer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( !v14->current.integer )
    goto LABEL_34;
  v15 = DCONST_DVARBOOL_developer_looseScriptLoadConsole;
  if ( !DCONST_DVARBOOL_developer_looseScriptLoadConsole && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "developer_looseScriptLoadConsole") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
    goto LABEL_34;
  v16 = AI_BT_Load(name);
  behaviorTree = v16;
  if ( v16 )
  {
    Core_strcpy(s_treeAssetNames[s_treeAssetCount], 0x20ui64, v16->name);
    behaviorTree->name = s_treeAssetNames[s_treeAssetCount];
  }
  if ( !behaviorTree )
  {
LABEL_34:
    behaviorTree = DB_FindXAssetHeader(ASSET_TYPE_BEHAVIOR_TREE, name, 0).behaviorTree;
    if ( !behaviorTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 319, ASSERT_TYPE_ASSERT, "(btTree)", "%s\n\tUnable to find behavior tree %s", "btTree", name) )
      __debugbreak();
  }
  v18 = s_treeAssetCount;
  numFuncIDs = behaviorTree->numFuncIDs;
  ++s_treeAssetCount;
  s_treeAssets[v18] = behaviorTree;
  memset_0(behaviorTree->funcIDs, 0, 4 * numFuncIDs);
  return behaviorTree;
}

/*
==============
AI_BT_SaveTreeAssetInstances
==============
*/
void AI_BT_SaveTreeAssetInstances(MemoryFile *memFile)
{
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v4; 
  ntl::red_black_tree_node_base::ENodeColor *v5; 
  __int64 v6; 
  ai_bt_instance_data *InstanceData; 
  int p; 
  int v9; 

  p = -1414812757;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = s_treeAssetInstances.m_size;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( i = s_treeAssetInstances.m_endNodeBase.mp_left; i != &s_treeAssetInstances.m_endNodeBase; i = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(i) )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_parent = i[1].mp_parent;
    MemFile_WriteCString(memFile, **(const char ***)&mp_parent[80].m_color);
    v9 = (int)mp_parent[80].mp_parent;
    MemFile_WriteData(memFile, 4ui64, &v9);
    LOWORD(p) = *(_WORD *)(*(_QWORD *)&mp_parent[80].m_color + 8i64);
    MemFile_WriteData(memFile, 2ui64, &p);
    v4 = 0;
    if ( *(_WORD *)(*(_QWORD *)&mp_parent[80].m_color + 8i64) )
    {
      do
      {
        v5 = &mp_parent->m_color + v4;
        MemFile_WriteData(memFile, 2ui64, v5);
        v6 = *(_QWORD *)&mp_parent[80].m_color;
        if ( *(_BYTE *)(32i64 * v4 + *(_QWORD *)(v6 + 16) + 8) == 7 && *(_BYTE *)v5 )
        {
          InstanceData = BT_GetInstanceData(*(_BYTE *)v5);
          MemFile_WriteData(memFile, 0x10ui64, InstanceData);
          v6 = *(_QWORD *)&mp_parent[80].m_color;
        }
        ++v4;
      }
      while ( v4 < *(unsigned __int16 *)(v6 + 8) );
    }
  }
  p = -1414812757;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
AI_BT_Terminate
==============
*/
void AI_BT_Terminate(int entnum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = s_treeAssetInstances.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
  if ( s_treeAssetInstances.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < entnum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase != &s_treeAssetInstances.m_endNodeBase && entnum >= p_m_endNodeBase[1].m_color )
      AI_BT_CallTerminate((AI_BT_TreeAssetInstance *)p_m_endNodeBase[1].mp_parent, 0);
  }
}

/*
==============
AI_BT_TerminateProcessDecorators
==============
*/
void AI_BT_TerminateProcessDecorators(AI_BT_TreeAssetInstance *treeInstance, const unsigned int nodeIndex, bool bDidTerminate)
{
  __int64 v4; 
  BehaviorTree *tree; 
  __int64 v7; 
  BehaviorTreeNode *v8; 
  unsigned __int16 firstDecorator; 
  unsigned __int16 decoratorCount; 
  int v11; 
  int v12; 
  BehaviorTree *v13; 
  __int64 v14; 
  BehaviorTreeNode *nodes; 
  int v16; 
  bool IsDescendantRunning; 
  __int64 paramsID; 
  __int64 bBuiltin; 

  v4 = nodeIndex;
  if ( !treeInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1408, ASSERT_TYPE_ASSERT, "(treeInstance)", (const char *)&queryFormat, "treeInstance") )
    __debugbreak();
  if ( !treeInstance->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1409, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
    __debugbreak();
  tree = treeInstance->tree;
  v7 = v4;
  v8 = &tree->nodes[v4];
  if ( v8->decorators.decoratorCount )
  {
    firstDecorator = v8->decorators.firstDecorator;
    decoratorCount = tree->decoratorCount;
    if ( firstDecorator >= decoratorCount )
    {
      LODWORD(paramsID) = firstDecorator;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1416, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, decoratorCount) )
        __debugbreak();
    }
    v11 = v8->decorators.decoratorCount + v8->decorators.firstDecorator;
    if ( v11 - 1 >= (unsigned int)treeInstance->tree->decoratorCount )
    {
      LODWORD(bBuiltin) = treeInstance->tree->decoratorCount;
      LODWORD(paramsID) = v11 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1417, ASSERT_TYPE_ASSERT, "(unsigned)( pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 ) < (unsigned)( treeInstance->tree->decoratorCount )", "pNode->decorators.firstDecorator + pNode->decorators.decoratorCount - 1 doesn't index treeInstance->tree->decoratorCount\n\t%i not in [0, %i)", paramsID, bBuiltin) )
        __debugbreak();
    }
    v12 = 0;
    if ( v8->decorators.decoratorCount )
    {
      while ( 1 )
      {
        v13 = treeInstance->tree;
        v14 = (__int64)&v13->decorators[v12 + v8->decorators.firstDecorator];
        if ( !*(_BYTE *)v14 )
          break;
LABEL_28:
        if ( ++v12 >= v8->decorators.decoratorCount )
          return;
      }
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 1254, ASSERT_TYPE_ASSERT, "(treeInstance->tree)", (const char *)&queryFormat, "treeInstance->tree") )
        __debugbreak();
      nodes = treeInstance->tree->nodes;
      if ( nodes[v7].type == BT_NODE_TYPE_ACTION || (v16 = 0, !nodes[v7].data.actionData.processFn) )
      {
LABEL_23:
        IsDescendantRunning = AI_BT_IsDescendantRunning(treeInstance, v4);
        if ( !IsDescendantRunning )
        {
LABEL_25:
          if ( bDidTerminate || IsDescendantRunning )
            AI_BT_CallFunction(treeInstance->entnum, v8, treeInstance->tree, v4, *(unsigned __int16 *)(v14 + 2), 0xFFFF, *(_BYTE *)(v14 + 4), NULL);
          goto LABEL_28;
        }
      }
      else
      {
        while ( nodes[nodes[v7].data.actionData.initFn + v16].resultOverride != BT_RESULT_RUNNING )
        {
          if ( ++v16 >= nodes[v7].data.actionData.processFn )
            goto LABEL_23;
        }
      }
      IsDescendantRunning = 1;
      goto LABEL_25;
    }
  }
}

/*
==============
AI_BT_Tick
==============
*/
void AI_BT_Tick(int entnum)
{
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  AI_BT_TreeAssetInstance *v4; 
  bool *p_m_tickedThisFrame; 
  __int64 v6; 
  BehaviorTreeNode *nodes; 

  p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
  mp_parent = s_treeAssetInstances.m_endNodeBase.mp_parent;
  if ( s_treeAssetInstances.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < entnum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase != &s_treeAssetInstances.m_endNodeBase )
    {
      if ( entnum >= p_m_endNodeBase[1].m_color )
        goto LABEL_11;
      p_m_endNodeBase = &s_treeAssetInstances.m_endNodeBase;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 470, ASSERT_TYPE_ASSERT, "(it != s_treeAssetInstances.end())", (const char *)&queryFormat, "it != s_treeAssetInstances.end()", -2i64) )
    __debugbreak();
LABEL_11:
  if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  v4 = (AI_BT_TreeAssetInstance *)p_m_endNodeBase[1].mp_parent;
  if ( v4 )
  {
    p_m_tickedThisFrame = &v4->instanceData[0].m_tickedThisFrame;
    v6 = 640i64;
    do
    {
      *p_m_tickedThisFrame = 0;
      p_m_tickedThisFrame += 4;
      --v6;
    }
    while ( v6 );
    SV_Profile_BeginEvent(SVPROF_AI_BT_TICK);
    Sys_ProfBeginNamedEvent(0xFF0F0F0F, "SVPROF_AI_BT_TICK");
    nodes = v4->tree->nodes;
    if ( !nodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 417, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
      __debugbreak();
    s_tickFunctions[(unsigned __int8)nodes->type](v4, 0);
    SV_Profile_EndEvent(SVPROF_AI_BT_TICK);
    if ( "SVPROF_AI_BT_TICK" )
      Sys_ProfEndNamedEvent();
    AI_BT_DebugRender(v4, entnum);
  }
}

/*
==============
AI_BT_ValidateThreadState
==============
*/
void AI_BT_ValidateThreadState(const BehaviorTreeNode *node, unsigned int hThread)
{
  const scrContext_t *v4; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_tree_asset.cpp", 402, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v4 = ScriptContext_Server();
  if ( Scr_IsThreadAlive(v4, hThread) )
    Com_PrintError(18, "BT script in action node %s failed to terminate. No waits allowed in main BT thread.\n", node->name);
}

