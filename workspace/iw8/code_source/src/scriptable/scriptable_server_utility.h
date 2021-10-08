/*
==============
ScriptableSv_GetInstanceServerContext
==============
*/

ScriptableServerSpecificContext *__fastcall ScriptableSv_GetInstanceServerContext(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceServerContext@@YAAEAUScriptableServerSpecificContext@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetInstanceCollisionContext
==============
*/

ScriptableCollisionServerContext *__fastcall ScriptableSv_GetInstanceCollisionContext(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceCollisionContext@@YAAEAUScriptableCollisionServerContext@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetInstanceCommonContext
==============
*/

ScriptableInstanceContext *__fastcall ScriptableSv_GetInstanceCommonContext(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceCommonContext@@YAAEAUScriptableInstanceContext@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetDef
==============
*/

const ScriptableDef *__fastcall ScriptableSv_GetDef(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetDef@@YAPEBUScriptableDef@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetInstanceCollisionContext
==============
*/
ScriptableCollisionServerContext *ScriptableSv_GetInstanceCollisionContext(const unsigned int scriptableIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int serverInstanceCount; 

  v1 = scriptableIndex;
  if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v1 >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v3, serverInstanceCount) )
      __debugbreak();
  }
  return &g_scriptableSv_instanceContexts[v1].collisionContext;
}

/*
==============
ScriptableSv_GetInstanceCommonContext
==============
*/
ScriptableInstanceServerContext *ScriptableSv_GetInstanceCommonContext(const unsigned int scriptableIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int serverInstanceCount; 

  v1 = scriptableIndex;
  if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v1 >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v3, serverInstanceCount) )
      __debugbreak();
  }
  return &g_scriptableSv_instanceContexts[v1];
}

/*
==============
ScriptableSv_GetInstanceServerContext
==============
*/
ScriptableServerSpecificContext *ScriptableSv_GetInstanceServerContext(const unsigned int scriptableIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int serverInstanceCount; 

  v1 = scriptableIndex;
  if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 99, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v1 >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v3, serverInstanceCount) )
      __debugbreak();
  }
  return &g_scriptableSv_instanceContexts[v1].serverContext;
}

/*
==============
ScriptableSv_GetDef
==============
*/
const ScriptableDef *ScriptableSv_GetDef(const unsigned int scriptableIndex)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int serverInstanceCount; 

  v1 = scriptableIndex;
  if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v1 >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v3, serverInstanceCount) )
      __debugbreak();
  }
  return g_scriptableSv_instanceContexts[v1].commonContext.def;
}

