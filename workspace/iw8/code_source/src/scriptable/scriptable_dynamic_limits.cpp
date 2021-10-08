/*
==============
Scriptable_Limits_SetupWorldCounts
==============
*/

void __fastcall Scriptable_Limits_SetupWorldCounts(const unsigned int clientCount, const unsigned int agentCount, ScriptableWorldCounts *outWorldCounts)
{
  ?Scriptable_Limits_SetupWorldCounts@@YAXIIAEAUScriptableWorldCounts@@@Z(clientCount, agentCount, outWorldCounts);
}

/*
==============
Scriptable_Limits_VerifyWorldCounts
==============
*/

void __fastcall Scriptable_Limits_VerifyWorldCounts(const unsigned int clientCount, const unsigned int agentCount, const ScriptableWorldCounts *worldCounts)
{
  ?Scriptable_Limits_VerifyWorldCounts@@YAXIIAEBUScriptableWorldCounts@@@Z(clientCount, agentCount, worldCounts);
}

/*
==============
Scriptable_Limits_SetupReplicatedLimits
==============
*/

void __fastcall Scriptable_Limits_SetupReplicatedLimits(const ScriptableWorldCounts *worldCounts, ScriptableReplicatedLimits *outReplicatedLimits)
{
  ?Scriptable_Limits_SetupReplicatedLimits@@YAXAEBUScriptableWorldCounts@@AEAUScriptableReplicatedLimits@@@Z(worldCounts, outReplicatedLimits);
}

/*
==============
Scriptable_Limits_GetRuntimeInstanceCount
==============
*/
__int64 Scriptable_Limits_GetRuntimeInstanceCount(const unsigned int clientCount, const unsigned int agentCount)
{
  int Int_Internal_DebugName; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 

  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 84, ASSERT_TYPE_ASSERT, "(cm.mapEnts != nullptr)", "%s\n\tScriptable initialization must happen after the clipmap has been initialized", "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
    return cm.mapEnts->scriptableMapEnts.reservedInstanceCount;
  if ( cm.mapEnts->scriptableMapEnts.reservedInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 92, ASSERT_TYPE_ASSERT, "(cm.mapEnts->scriptableMapEnts.reservedInstanceCount == 0)", "%s\n\tMp/Cp should not be using the map-based reserved instances anymore", "cm.mapEnts->scriptableMapEnts.reservedInstanceCount == 0") )
    __debugbreak();
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_scriptable_runtime_instance_base, "scriptable_runtime_instance_base");
  v6 = Dvar_GetInt_Internal_DebugName(DVARINT_scriptable_runtime_instance_per_player, "scriptable_runtime_instance_per_player");
  v7 = (agentCount * Dvar_GetInt_Internal_DebugName(DVARINT_scriptable_runtime_instance_per_agent, "scriptable_runtime_instance_per_agent") + 31 + Int_Internal_DebugName + clientCount * v6) & 0xFFFFFFE0;
  if ( v7 <= 0x800 )
  {
    Com_Printf(29, "Scriptable_Limits_GetRuntimeInstanceCount: %d.\n", v7);
    if ( !v7 )
    {
      LODWORD(v8) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 113, ASSERT_TYPE_ASSERT, "( 1 ) <= ( reservedInstanceCount ) && ( reservedInstanceCount ) <= ( SCRIPTABLE_MAX_RESERVED_INSTANCES )", "reservedInstanceCount not in [1, SCRIPTABLE_MAX_RESERVED_INSTANCES]\n\t%i not in [%i, %i]", v8, 1, 2048) )
        __debugbreak();
    }
    return v7;
  }
  else
  {
    Com_Printf(29, "Scriptable_Limits_GetRuntimeInstanceCount: Exceeded scriptable count (%d > %d).\n", v7, 2048i64);
    return 2048i64;
  }
}

/*
==============
Scriptable_Limits_GetRuntimePartCount
==============
*/
__int64 Scriptable_Limits_GetRuntimePartCount(const unsigned int clientCount, const unsigned int agentCount)
{
  int Int_Internal_DebugName; 
  int v6; 
  unsigned int v7; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
    return 2560i64;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 137, ASSERT_TYPE_ASSERT, "(cm.mapEnts != nullptr)", "%s\n\tScriptable initialization must happen after the clipmap has been initialized", "cm.mapEnts != nullptr") )
    __debugbreak();
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_scriptable_runtime_parts_base_count, "scriptable_runtime_parts_base_count");
  v6 = Dvar_GetInt_Internal_DebugName(DVARINT_scriptable_runtime_parts_per_player, "scriptable_runtime_parts_per_player");
  v7 = (agentCount * Dvar_GetInt_Internal_DebugName(DVARINT_scriptable_runtime_parts_per_agent, "scriptable_runtime_parts_per_agent") + 15 + Int_Internal_DebugName + clientCount * v6) & 0xFFFFFFF0;
  if ( v7 >= 0xA00 )
  {
    if ( v7 <= 0x4000 )
    {
      Com_Printf(29, "Scriptable_Limits_GetRuntimePartCount: %d\n", v7);
      return v7;
    }
    else
    {
      Com_Printf(29, "Scriptable_Limits_GetRuntimePartCount: Too many runtime parts, using maxumum value (%d > %d)\n", v7, 0x4000i64);
      return 0x4000i64;
    }
  }
  else
  {
    Com_Printf(29, "Scriptable_Limits_GetRuntimePartCount: Too few runtime parts, using minimum value (%d < %d)\n", v7, 2560i64);
    return 2560i64;
  }
}

/*
==============
Scriptable_Limits_GetTotalInstanceCount
==============
*/
__int64 Scriptable_Limits_GetTotalInstanceCount(const unsigned int runtimeInstanceCount)
{
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 200, ASSERT_TYPE_ASSERT, "(cm.mapEnts != nullptr)", "%s\n\tScriptable initialization must happen after the clipmap has been initialized", "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( cm.mapEnts->scriptableMapEnts.totalInstanceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 201, ASSERT_TYPE_ASSERT, "(cm.mapEnts->scriptableMapEnts.totalInstanceCount == 0)", "%s\n\tThis field has been deprecated", "cm.mapEnts->scriptableMapEnts.totalInstanceCount == 0") )
    __debugbreak();
  return cm.mapEnts->scriptableMapEnts.lootInstanceCount + runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.mapInstanceCount;
}

/*
==============
Scriptable_Limits_SetupReplicatedLimits
==============
*/
void Scriptable_Limits_SetupReplicatedLimits(const ScriptableWorldCounts *worldCounts, ScriptableReplicatedLimits *outReplicatedLimits)
{
  unsigned int *p_partTotalLimit; 
  unsigned int v3; 
  ScriptableReplicatedLimits *v4; 
  unsigned int runtimePartCount; 
  unsigned int v7; 

  p_partTotalLimit = &outReplicatedLimits->partTotalLimit;
  v3 = 0;
  outReplicatedLimits->instanceLimit = worldCounts->runtimeInstanceCount;
  v4 = outReplicatedLimits;
  outReplicatedLimits->partTotalLimit = 0;
  do
  {
    if ( (_BYTE)v3 )
    {
      if ( (unsigned __int8)v3 == 1 )
      {
        runtimePartCount = worldCounts->runtimePartCount;
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 273, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled scriptable world type") )
          __debugbreak();
        runtimePartCount = 0;
      }
    }
    else
    {
      if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 242, ASSERT_TYPE_ASSERT, "(cm.mapEnts != nullptr)", "%s\n\tScriptable initialization must happen after the clipmap has been initialized", "cm.mapEnts != nullptr") )
        __debugbreak();
      runtimePartCount = cm.mapEnts->scriptableMapEnts.serverFixedPartCount;
      if ( !runtimePartCount )
        runtimePartCount = 1;
    }
    ++v3;
    v7 = (runtimePartCount + 15) & 0xFFFFFFF0;
    v4->partWorldLimits[0] = v7;
    v4 = (ScriptableReplicatedLimits *)((char *)v4 + 4);
    *p_partTotalLimit += v7;
  }
  while ( v3 < 2 );
}

/*
==============
Scriptable_Limits_SetupWorldCounts
==============
*/
void Scriptable_Limits_SetupWorldCounts(const unsigned int clientCount, const unsigned int agentCount, ScriptableWorldCounts *outWorldCounts)
{
  unsigned int RuntimePartCount; 
  unsigned int runtimeInstanceCount; 
  unsigned int v8; 

  outWorldCounts->runtimeInstanceCount = Scriptable_Limits_GetRuntimeInstanceCount(clientCount, agentCount);
  RuntimePartCount = Scriptable_Limits_GetRuntimePartCount(clientCount, agentCount);
  runtimeInstanceCount = outWorldCounts->runtimeInstanceCount;
  outWorldCounts->runtimePartCount = RuntimePartCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 181, ASSERT_TYPE_ASSERT, "(cm.mapEnts != nullptr)", "%s\n\tScriptable initialization must happen after the clipmap has been initialized", "cm.mapEnts != nullptr") )
    __debugbreak();
  v8 = outWorldCounts->runtimeInstanceCount;
  outWorldCounts->serverInstanceCount = cm.mapEnts->scriptableMapEnts.serverInstanceCount + runtimeInstanceCount;
  outWorldCounts->totalInstanceCount = Scriptable_Limits_GetTotalInstanceCount(v8);
}

/*
==============
Scriptable_Limits_VerifyWorldCounts
==============
*/
void Scriptable_Limits_VerifyWorldCounts(const unsigned int clientCount, const unsigned int agentCount, const ScriptableWorldCounts *worldCounts)
{
  unsigned int v6; 
  unsigned int serverInstanceCount; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  int RuntimeInstanceCount; 

  if ( worldCounts->runtimeInstanceCount != (unsigned int)Scriptable_Limits_GetRuntimeInstanceCount(clientCount, agentCount) )
  {
    RuntimeInstanceCount = Scriptable_Limits_GetRuntimeInstanceCount(clientCount, agentCount);
    v9 = worldCounts->runtimeInstanceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 224, ASSERT_TYPE_ASSERT, "( worldCounts.runtimeInstanceCount ) == ( Scriptable_Limits_GetRuntimeInstanceCount( clientCount, agentCount ) )", "%s == %s\n\t%i, %i", "worldCounts.runtimeInstanceCount", "Scriptable_Limits_GetRuntimeInstanceCount( clientCount, agentCount )", v9, RuntimeInstanceCount) )
      __debugbreak();
  }
  if ( worldCounts->runtimePartCount != (unsigned int)Scriptable_Limits_GetRuntimePartCount(clientCount, agentCount) )
  {
    LODWORD(v10) = Scriptable_Limits_GetRuntimePartCount(clientCount, agentCount);
    LODWORD(v8) = worldCounts->runtimePartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 225, ASSERT_TYPE_ASSERT, "( worldCounts.runtimePartCount ) == ( Scriptable_Limits_GetRuntimePartCount( clientCount, agentCount ) )", "%s == %s\n\t%i, %i", "worldCounts.runtimePartCount", "Scriptable_Limits_GetRuntimePartCount( clientCount, agentCount )", v8, v10) )
      __debugbreak();
  }
  v6 = worldCounts->runtimeInstanceCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 181, ASSERT_TYPE_ASSERT, "(cm.mapEnts != nullptr)", "%s\n\tScriptable initialization must happen after the clipmap has been initialized", "cm.mapEnts != nullptr") )
    __debugbreak();
  serverInstanceCount = cm.mapEnts->scriptableMapEnts.serverInstanceCount;
  if ( worldCounts->serverInstanceCount != serverInstanceCount + v6 )
  {
    LODWORD(v10) = serverInstanceCount + worldCounts->runtimeInstanceCount;
    LODWORD(v8) = worldCounts->serverInstanceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 227, ASSERT_TYPE_ASSERT, "( worldCounts.serverInstanceCount ) == ( Scriptable_Limits_GetServerInstanceCount( worldCounts.runtimeInstanceCount ) )", "%s == %s\n\t%i, %i", "worldCounts.serverInstanceCount", "Scriptable_Limits_GetServerInstanceCount( worldCounts.runtimeInstanceCount )", v8, v10) )
      __debugbreak();
  }
  if ( worldCounts->totalInstanceCount != (unsigned int)Scriptable_Limits_GetTotalInstanceCount(worldCounts->runtimeInstanceCount) )
  {
    LODWORD(v10) = Scriptable_Limits_GetTotalInstanceCount(worldCounts->runtimeInstanceCount);
    LODWORD(v8) = worldCounts->totalInstanceCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_dynamic_limits.cpp", 228, ASSERT_TYPE_ASSERT, "( worldCounts.totalInstanceCount ) == ( Scriptable_Limits_GetTotalInstanceCount( worldCounts.runtimeInstanceCount ) )", "%s == %s\n\t%i, %i", "worldCounts.totalInstanceCount", "Scriptable_Limits_GetTotalInstanceCount( worldCounts.runtimeInstanceCount )", v8, v10) )
      __debugbreak();
  }
}

