/*
==============
GPlayerEventsMP::GetGameHandlerForEvent
==============
*/

void (__fastcall *__fastcall GPlayerEventsMP::GetGameHandlerForEvent(const entity_event_t eventType))(gentity_s *, GClientTaskQueue *)
{
  return ?GetGameHandlerForEvent@GPlayerEventsMP@@CAP6AXPEAUgentity_s@@PEAVGClientTaskQueue@@@ZW4entity_event_t@@@Z(eventType);
}

/*
==============
GPlayerEventsMP::GetGameHandlerForEvent
==============
*/
void (*GPlayerEventsMP::GetGameHandlerForEvent(const entity_event_t eventType))(gentity_s *, GClientTaskQueue *)
{
  __int64 v1; 
  bool v2; 
  void (__fastcall **v3)(gentity_s *, GClientTaskQueue *); 
  int v6; 

  v1 = eventType;
  if ( (unsigned int)eventType >= EV_MAX_EVENTS )
  {
    v6 = 227;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( ( sizeof( *array_counter( ms_gameEventHandlers ) ) + 0 ) )", "eventType doesn't index ARRAY_COUNT( ms_gameEventHandlers )\n\t%i not in [0, %i)", eventType, v6) )
      __debugbreak();
  }
  v2 = GPlayerEventsMP::ms_gameEventHandlers[v1] == NULL;
  v3 = &GPlayerEventsMP::ms_gameEventHandlers[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_player_events_mp.h", 174, ASSERT_TYPE_ASSERT, "( ms_gameEventHandlers[eventType] != nullptr )", (const char *)&queryFormat, "ms_gameEventHandlers[eventType] != nullptr") )
    __debugbreak();
  return *v3;
}

