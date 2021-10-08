/*
==============
ScriptableCl_GetInstanceCollisionContext
==============
*/

ScriptableCollisionClientContext *__fastcall ScriptableCl_GetInstanceCollisionContext(const LocalClientNum_t localClientNum, const unsigned int scriptableId)
{
  return ?ScriptableCl_GetInstanceCollisionContext@@YAAEAUScriptableCollisionClientContext@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableId);
}

/*
==============
ScriptableCl_GetInstanceCommonContext
==============
*/

ScriptableInstanceContextSecure *__fastcall ScriptableCl_GetInstanceCommonContext(const LocalClientNum_t localClientNum, const unsigned int scriptableId)
{
  return ?ScriptableCl_GetInstanceCommonContext@@YAAEAUScriptableInstanceContextSecure@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableId);
}

/*
==============
ScriptableCl_GetDef
==============
*/

const ScriptableDef *__fastcall ScriptableCl_GetDef(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetDef@@YAPEBUScriptableDef@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetInstanceNoteTrackContext
==============
*/

ScriptableNoteTrackClientContext *__fastcall ScriptableCl_GetInstanceNoteTrackContext(const LocalClientNum_t localClientNum, const unsigned int scriptableId)
{
  return ?ScriptableCl_GetInstanceNoteTrackContext@@YAAEAUScriptableNoteTrackClientContext@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableId);
}

/*
==============
ScriptableCl_GetFrameServerTime
==============
*/

int __fastcall ScriptableCl_GetFrameServerTime(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_GetFrameServerTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_GenerateRandSeed
==============
*/

unsigned int __fastcall ScriptableCl_GenerateRandSeed(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GenerateRandSeed@@YAIW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetInstanceCollisionContext
==============
*/
ScriptableCollisionClientContext *ScriptableCl_GetInstanceCollisionContext(const LocalClientNum_t localClientNum, const unsigned int scriptableId)
{
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  ScriptableInstanceClientContext **v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned int totalInstanceCount; 

  v2 = scriptableId;
  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v8 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v8, totalInstanceCount) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 124, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = g_scriptableCl_instanceContexts[v3] == NULL;
  v5 = &g_scriptableCl_instanceContexts[v3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  return &(*v5)[v2].collisionContext;
}

/*
==============
ScriptableCl_GetInstanceCommonContext
==============
*/
ScriptableInstanceClientContext *ScriptableCl_GetInstanceCommonContext(const LocalClientNum_t localClientNum, const unsigned int scriptableId)
{
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  ScriptableInstanceClientContext **v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned int totalInstanceCount; 

  v2 = scriptableId;
  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v8 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v8, totalInstanceCount) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = g_scriptableCl_instanceContexts[v3] == NULL;
  v5 = &g_scriptableCl_instanceContexts[v3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  return &(*v5)[v2];
}

/*
==============
ScriptableCl_GenerateRandSeed
==============
*/
__int64 ScriptableCl_GenerateRandSeed(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  int v4; 
  int *v5; 
  int v8; 
  int v9; 
  unsigned int pHoldrand; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableFrame_serverTime ) ) + 0 ) )", "localClientNum doesn't index g_scriptableFrame_serverTime\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  v4 = g_scriptableFrame_serverTime[v2];
  v5 = &g_scriptableFrame_serverTime[v2];
  if ( v4 < 0 )
  {
    v9 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 166, ASSERT_TYPE_ASSERT, "( g_scriptableFrame_serverTime[localClientNum] ) >= ( 0 )", "%s >= %s\n\t%i, %i", "g_scriptableFrame_serverTime[localClientNum]", "0", v9, 0i64) )
      __debugbreak();
  }
  pHoldrand = scriptableIndex + *v5;
  BG_srand(&pHoldrand);
  return pHoldrand;
}

/*
==============
ScriptableCl_GetInstanceNoteTrackContext
==============
*/
ScriptableNoteTrackClientContext *ScriptableCl_GetInstanceNoteTrackContext(const LocalClientNum_t localClientNum, const unsigned int scriptableId)
{
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  ScriptableInstanceClientContext **v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned int totalInstanceCount; 

  v2 = scriptableId;
  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v8 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 133, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v8, totalInstanceCount) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 134, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = g_scriptableCl_instanceContexts[v3] == NULL;
  v5 = &g_scriptableCl_instanceContexts[v3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 135, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  return &(*v5)[v2].noteTrackContext;
}

/*
==============
ScriptableCl_GetFrameServerTime
==============
*/
__int64 ScriptableCl_GetFrameServerTime(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 result; 
  int *v3; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableFrame_serverTime ) ) + 0 ) )", "localClientNum doesn't index g_scriptableFrame_serverTime\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  result = (unsigned int)g_scriptableFrame_serverTime[v1];
  v3 = &g_scriptableFrame_serverTime[v1];
  if ( (int)result < 0 )
  {
    v6 = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 166, ASSERT_TYPE_ASSERT, "( g_scriptableFrame_serverTime[localClientNum] ) >= ( 0 )", "%s >= %s\n\t%i, %i", "g_scriptableFrame_serverTime[localClientNum]", "0", v6, 0i64) )
      __debugbreak();
    return (unsigned int)*v3;
  }
  return result;
}

/*
==============
ScriptableCl_GetDef
==============
*/
const ScriptableDef *ScriptableCl_GetDef(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  ScriptableInstanceClientContext **v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned int totalInstanceCount; 

  v2 = scriptableIndex;
  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v8 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v8, totalInstanceCount) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = g_scriptableCl_instanceContexts[v3] == NULL;
  v5 = &g_scriptableCl_instanceContexts[v3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  return (*v5)[v2].commonContext.def;
}

