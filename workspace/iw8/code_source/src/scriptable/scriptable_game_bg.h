/*
==============
GetScriptablePhysicsWorldId
==============
*/

Physics_WorldId __fastcall GetScriptablePhysicsWorldId(ScriptableContext context)
{
  return ?GetScriptablePhysicsWorldId@@YA?AW4Physics_WorldId@@W4ScriptableContext@@@Z(context);
}

/*
==============
GetScriptablePhysicsWorldId
==============
*/
__int64 GetScriptablePhysicsWorldId(ScriptableContext context)
{
  __int32 v1; 

  if ( context == SBL_CONTEXT_SERVER )
    return 0i64;
  v1 = context - 1;
  if ( !v1 )
    return 2i64;
  if ( v1 == 1 )
    return 5i64;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg.h", 105, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown context") )
    __debugbreak();
  return 0xFFFFFFFFi64;
}

