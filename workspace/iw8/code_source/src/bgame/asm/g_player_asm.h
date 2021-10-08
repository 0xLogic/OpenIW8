/*
==============
GPlayerASM_ForceUpdateEvent
==============
*/

void __fastcall GPlayerASM_ForceUpdateEvent(playerState_s *ps, const PlayerASM_AnimSlot slot, bool forceImmediateUpdate, int *outDuration)
{
  ?GPlayerASM_ForceUpdateEvent@@YAXPEAUplayerState_s@@W4PlayerASM_AnimSlot@@_NPEAH@Z(ps, slot, forceImmediateUpdate, outDuration);
}

/*
==============
GPlayerASM_ForceUpdateEvent
==============
*/
void GPlayerASM_ForceUpdateEvent(playerState_s *ps, const PlayerASM_AnimSlot slot, bool forceImmediateUpdate, int *outDuration)
{
  unsigned __int8 v6; 
  GPlayer_Asm *v8; 
  PmoveASMArgs pmoveArgs; 

  v6 = slot;
  if ( !outDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\g_player_asm.h", 70, ASSERT_TYPE_ASSERT, "( outDuration )", (const char *)&queryFormat, "outDuration") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\asm\\g_player_asm.h", 71, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( PlayerASM_IsEnabled() )
  {
    memset(&pmoveArgs, 0, 24);
    *(_QWORD *)&pmoveArgs.delta = 0i64;
    pmoveArgs.handler = GHandler::getHandler();
    pmoveArgs.holdrand = G_GetRandomSeed();
    v8 = GPlayer_Asm::Singleton();
    if ( BgPlayer_Asm::TickPS(v8, ps, &pmoveArgs, 0, forceImmediateUpdate) )
      *outDuration = BG_PlayerASM_GetAnimLength(ps, (const PlayerASM_AnimSlot)v6);
  }
}

