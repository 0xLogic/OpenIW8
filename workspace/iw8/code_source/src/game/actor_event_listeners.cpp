/*
==============
Actor_EventListener_SetEventCount
==============
*/

void __fastcall Actor_EventListener_SetEventCount(int listenerEventCount)
{
  ?Actor_EventListener_SetEventCount@@YAXH@Z(listenerEventCount);
}

/*
==============
Actor_EventListener_NotifyToListener
==============
*/

void __fastcall Actor_EventListener_NotifyToListener(gentity_s *listener, gentity_s *originatorEnt, ai_event_t eventType, const vec3_t *origin)
{
  ?Actor_EventListener_NotifyToListener@@YAXPEAUgentity_s@@0W4ai_event_t@@AEBTvec3_t@@@Z(listener, originatorEnt, eventType, origin);
}

/*
==============
Actor_EventListener_GetEntity
==============
*/

gentity_s *__fastcall Actor_EventListener_GetEntity(int index)
{
  return ?Actor_EventListener_GetEntity@@YAPEAUgentity_s@@H@Z(index);
}

/*
==============
Actor_EventListener_Remove_ByEnum
==============
*/

void __fastcall Actor_EventListener_Remove_ByEnum(int entIndex, int eventID)
{
  ?Actor_EventListener_Remove_ByEnum@@YAXHH@Z(entIndex, eventID);
}

/*
==============
Actor_DumpEventListners
==============
*/

void Actor_DumpEventListners(void)
{
  ?Actor_DumpEventListners@@YAXXZ();
}

/*
==============
Actor_EventListener_RemoveEntity
==============
*/

void __fastcall Actor_EventListener_RemoveEntity(int entIndex)
{
  ?Actor_EventListener_RemoveEntity@@YAXH@Z(entIndex);
}

/*
==============
Actor_EventListener_GetCount
==============
*/

int __fastcall Actor_EventListener_GetCount()
{
  return ?Actor_EventListener_GetCount@@YAHXZ();
}

/*
==============
Actor_EventListener_Next
==============
*/

int __fastcall Actor_EventListener_Next(int index, ai_event_t eventType, const bitarray<224> *teamFlags)
{
  return ?Actor_EventListener_Next@@YAHHW4ai_event_t@@AEBV?$bitarray@$0OA@@@@Z(index, eventType, teamFlags);
}

/*
==============
Actor_EventListener_GetEventCount
==============
*/

int __fastcall Actor_EventListener_GetEventCount()
{
  return ?Actor_EventListener_GetEventCount@@YAHXZ();
}

/*
==============
Actor_EventListener_Init
==============
*/

void Actor_EventListener_Init(void)
{
  ?Actor_EventListener_Init@@YAXXZ();
}

/*
==============
Actor_EventListener_Add_ByEnum
==============
*/

void __fastcall Actor_EventListener_Add_ByEnum(int entIndex, int eventID)
{
  ?Actor_EventListener_Add_ByEnum@@YAXHH@Z(entIndex, eventID);
}

/*
==============
Actor_EventListener_First
==============
*/

int __fastcall Actor_EventListener_First(ai_event_t eventType, const bitarray<224> *teamFlags)
{
  return ?Actor_EventListener_First@@YAHW4ai_event_t@@AEBV?$bitarray@$0OA@@@@Z(eventType, teamFlags);
}

/*
==============
Actor_EventListener_SetCount
==============
*/

void __fastcall Actor_EventListener_SetCount(int listenerCount)
{
  ?Actor_EventListener_SetCount@@YAXH@Z(listenerCount);
}

/*
==============
Actor_EventListener_EventAdd
==============
*/

void __fastcall Actor_EventListener_EventAdd(int entIndex, gentity_s *originatorEnt, scr_string_t eventType, const vec3_t *origin)
{
  ?Actor_EventListener_EventAdd@@YAXHPEAUgentity_s@@W4scr_string_t@@AEBTvec3_t@@@Z(entIndex, originatorEnt, eventType, origin);
}

/*
==============
Actor_EventListener_Add
==============
*/

void __fastcall Actor_EventListener_Add(int entIndex, scr_string_t eventString)
{
  ?Actor_EventListener_Add@@YAXHW4scr_string_t@@@Z(entIndex, eventString);
}

/*
==============
Actor_EventListener_Remove
==============
*/

void __fastcall Actor_EventListener_Remove(int entIndex, scr_string_t eventString)
{
  ?Actor_EventListener_Remove@@YAXHW4scr_string_t@@@Z(entIndex, eventString);
}

/*
==============
Actor_EventListener_NotifyExecute
==============
*/

void Actor_EventListener_NotifyExecute(void)
{
  ?Actor_EventListener_NotifyExecute@@YAXXZ();
}

/*
==============
Actor_DumpEventListners
==============
*/
void Actor_DumpEventListners(void)
{
  unsigned int v0; 
  AIEventListener *v1; 
  __int64 entIndex; 
  unsigned int events; 
  const char *EntityTypeName; 
  __int64 v5; 
  __int64 v6; 

  Com_Printf(18, "AIEventListners: %d, level time: %d\n", (unsigned int)g_listenerCount, (unsigned int)level.time);
  Com_Printf(18, "==================\n");
  v0 = 0;
  if ( g_listenerCount > 0 )
  {
    v1 = g_AIEVlisteners;
    do
    {
      if ( v0 >= 0xF8 )
      {
        LODWORD(v6) = 248;
        LODWORD(v5) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 310, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_AI_EV_LISTENERS )", "index doesn't index MAX_AI_EV_LISTENERS\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( v1->entIndex >= 0x800u )
      {
        LODWORD(v6) = 2048;
        LODWORD(v5) = v1->entIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( g_AIEVlisteners[index].entIndex ) < (unsigned)( ( 2048 ) )", "g_AIEVlisteners[index].entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      entIndex = v1->entIndex;
      if ( (unsigned int)entIndex >= 0x800 )
      {
        LODWORD(v6) = 2048;
        LODWORD(v5) = v1->entIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[entIndex].r.isInUse != g_entityIsInUse[entIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[entIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 312, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( g_AIEVlisteners[index].entIndex ))", (const char *)&queryFormat, "G_IsEntityInUse( g_AIEVlisteners[index].entIndex )") )
        __debugbreak();
      events = v1->events;
      EntityTypeName = G_GetEntityTypeName(&g_entities[v1->entIndex]);
      LODWORD(v5) = events;
      Com_Printf(18, "%d entity: %04d (%s), events: %x\n", v0++, v1->entIndex, EntityTypeName, v5);
      ++v1;
    }
    while ( (int)v0 < g_listenerCount );
  }
}

/*
==============
Actor_EventListener_Add
==============
*/
void Actor_EventListener_Add(int entIndex, scr_string_t eventString)
{
  ai_event_t EventFromString; 
  int v4; 
  AIEventListener *v5; 
  unsigned int *p_events; 

  EventFromString = Actor_FindEventFromString(eventString);
  if ( (unsigned __int8)EventFromString >= AI_EV_NUM_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 169, ASSERT_TYPE_ASSERT, "(event < AI_EV_NUM_EVENTS)", (const char *)&queryFormat, "event < AI_EV_NUM_EVENTS") )
    __debugbreak();
  if ( EventFromString )
  {
    v4 = 0;
    if ( g_listenerCount <= 0 )
      goto LABEL_11;
    v5 = g_AIEVlisteners;
    while ( v5->entIndex != entIndex )
    {
      ++v4;
      ++v5;
      if ( v4 >= g_listenerCount )
        goto LABEL_11;
    }
    if ( v4 == -1 )
    {
LABEL_11:
      v4 = Actor_EventListener_AddListener(entIndex);
      if ( v4 == -1 )
        return;
    }
    p_events = &g_AIEVlisteners[v4].events;
    if ( &g_AIEVlisteners[v4] == (AIEventListener *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    p_events[(unsigned __int64)(unsigned __int8)EventFromString >> 5] |= 1 << (EventFromString & 0x1F);
  }
}

/*
==============
Actor_EventListener_AddListener
==============
*/
__int64 Actor_EventListener_AddListener(int entIndex)
{
  int v1; 
  scrContext_t *v3; 
  const char *v4; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 

  v1 = g_listenerCount;
  if ( g_listenerCount < 248 )
  {
    if ( (unsigned int)g_listenerCount >= 0xF8 )
    {
      v9 = 248;
      v8 = g_listenerCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 151, ASSERT_TYPE_ASSERT, "(unsigned)( g_listenerCount ) < (unsigned)( ( sizeof( *array_counter( g_AIEVlisteners ) ) + 0 ) )", "g_listenerCount doesn't index ARRAY_COUNT( g_AIEVlisteners )\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
      v1 = g_listenerCount;
    }
    g_AIEVlisteners[v1] = 0i64;
    if ( entIndex < 0 || (unsigned int)entIndex > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)entIndex, "signed", entIndex) )
        __debugbreak();
      v1 = g_listenerCount;
    }
    v6 = v1;
    v7 = v1 + 1;
    g_listenerCount = v7;
    g_AIEVlisteners[v6].entIndex = entIndex;
    g_AIEVlisteners[v6].eventLast = -1;
    return (unsigned int)(v7 - 1);
  }
  else
  {
    v3 = ScriptContext_Server();
    v4 = j_va("Max listeners exceeded; entity id: %d\n", (unsigned int)entIndex);
    Scr_Error(COM_ERR_2626, v3, v4);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
Actor_EventListener_Add_ByEnum
==============
*/
void Actor_EventListener_Add_ByEnum(int entIndex, int eventID)
{
  unsigned __int8 v2; 
  int v4; 
  AIEventListener *v5; 
  unsigned int *p_events; 

  v2 = eventID;
  if ( (unsigned __int8)eventID >= 0x1Eu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 169, ASSERT_TYPE_ASSERT, "(event < AI_EV_NUM_EVENTS)", (const char *)&queryFormat, "event < AI_EV_NUM_EVENTS") )
    __debugbreak();
  if ( v2 )
  {
    v4 = 0;
    if ( g_listenerCount <= 0 )
      goto LABEL_11;
    v5 = g_AIEVlisteners;
    while ( v5->entIndex != entIndex )
    {
      ++v4;
      ++v5;
      if ( v4 >= g_listenerCount )
        goto LABEL_11;
    }
    if ( v4 == -1 )
    {
LABEL_11:
      v4 = Actor_EventListener_AddListener(entIndex);
      if ( v4 == -1 )
        return;
    }
    p_events = &g_AIEVlisteners[v4].events;
    if ( &g_AIEVlisteners[v4] == (AIEventListener *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    p_events[(unsigned __int64)v2 >> 5] |= 1 << (v2 & 0x1F);
  }
}

/*
==============
Actor_EventListener_EventAdd
==============
*/
void Actor_EventListener_EventAdd(int entIndex, gentity_s *originatorEnt, scr_string_t eventType, const vec3_t *origin)
{
  int v4; 
  int v9; 
  AIEventListener *v10; 
  gentity_s *Entity; 
  __int16 EntityIndex; 
  unsigned __int16 v13; 
  __int64 v14; 
  __int16 eventLast; 
  __int64 v16; 
  const char *v17; 
  const char *v18; 
  __int16 *p_eventLast; 
  __int16 i; 
  __int64 v21; 
  const char *v22; 
  unsigned __int16 v23; 
  __int64 v24; 
  const char *v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  __int64 v33; 
  __int64 v34; 
  __int16 v35; 
  __int64 v36; 
  __int64 v37; 

  v4 = 0;
  v9 = 0;
  if ( g_listenerCount <= 0 )
    goto LABEL_7;
  v10 = g_AIEVlisteners;
  while ( v10->entIndex != entIndex )
  {
    ++v9;
    ++v10;
    if ( v9 >= g_listenerCount )
      goto LABEL_7;
  }
  if ( v9 == -1 )
  {
LABEL_7:
    v9 = Actor_EventListener_AddListener(entIndex);
    if ( v9 == -1 )
      return;
  }
  Entity = Actor_EventListener_GetEntity(v9);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 343, ASSERT_TYPE_ASSERT, "(listenerEnt)", (const char *)&queryFormat, "listenerEnt") )
    __debugbreak();
  if ( originatorEnt )
  {
    EntityIndex = G_GetEntityIndex(originatorEnt);
    v13 = EntityIndex;
    if ( EntityIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)EntityIndex, "signed", EntityIndex) )
      __debugbreak();
  }
  else
  {
    v13 = 2047;
  }
  v14 = v9;
  eventLast = g_AIEVlisteners[v9].eventLast;
  if ( eventLast == -1 )
  {
LABEL_22:
    v16 = g_listenerEventCount;
    if ( g_listenerEventCount < 1240 )
    {
      v34 = g_listenerEventCount;
      v35 = g_listenerEventCount;
      g_AIEvents[v34].type = eventType;
      g_AIEvents[v34].entity = v13;
      g_AIEvents[v34].origin.v[0] = origin->v[0];
      g_AIEvents[v34].origin.v[1] = origin->v[1];
      g_AIEvents[v34].origin.v[2] = origin->v[2];
      g_AIEvents[v34].eventLast = g_AIEVlisteners[v14].eventLast;
      if ( (unsigned int)(v16 + 0x8000) > 0xFFFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v16, "signed", v16) )
          __debugbreak();
        LODWORD(v16) = g_listenerEventCount;
      }
      g_AIEVlisteners[v14].eventLast = v35;
      g_listenerEventCount = v16 + 1;
    }
    else if ( lastTime != level.time )
    {
      v17 = SL_ConvertToString(eventType);
      v18 = "NULL";
      if ( v17 )
        v18 = v17;
      Com_PrintError(18, "AI Listener events exceeded ( MAX_AI_EV_EVENTS ) < %s >.\n", v18);
      if ( g_listenerCount > 0 )
      {
        p_eventLast = &g_AIEVlisteners[0].eventLast;
        do
        {
          if ( *p_eventLast != -1 )
          {
            Com_Printf(18, "   AI Listener < %3d >:\n", (unsigned int)v4);
            for ( i = *p_eventLast; i != -1; i = g_AIEvents[v21].eventLast )
            {
              v21 = i;
              v22 = SL_ConvertToString(g_AIEvents[i].type);
              v23 = g_AIEvents[v21].entity;
              v24 = v23;
              if ( v23 == 2047 )
                v24 = 0xFFFFFFFFi64;
              v25 = "NULL";
              if ( v22 )
                v25 = v22;
              Com_Printf(18, "                     : %s ( ent: %d )\n", v25, v24);
            }
          }
          ++v4;
          p_eventLast += 4;
        }
        while ( v4 < g_listenerCount );
      }
      lastTime = level.time;
    }
  }
  else
  {
    while ( 1 )
    {
      if ( (unsigned __int16)eventLast >= 0x4D8u )
      {
        LODWORD(v37) = 1240;
        LODWORD(v36) = eventLast;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( eventWalk ) < (unsigned)( ( sizeof( *array_counter( g_AIEvents ) ) + 0 ) )", "eventWalk doesn't index ARRAY_COUNT( g_AIEvents )\n\t%i not in [0, %i)", v36, v37) )
          __debugbreak();
      }
      if ( g_AIEvents[eventLast].type == eventType )
        break;
      eventLast = g_AIEvents[eventLast].eventLast;
      if ( eventLast == -1 )
        goto LABEL_22;
    }
    v26 = Entity->r.currentOrigin.v[1];
    v27 = Entity->r.currentOrigin.v[2];
    v28 = Entity->r.currentOrigin.v[0];
    v29 = g_AIEvents[eventLast].origin.v[0] - v28;
    v30 = g_AIEvents[eventLast].origin.v[2] - v27;
    v31 = origin->v[0];
    v32 = g_AIEvents[eventLast].origin.v[1] - v26;
    if ( (float)((float)((float)((float)(origin->v[1] - v26) * (float)(origin->v[1] - v26)) + (float)((float)(v31 - v28) * (float)(v31 - v28))) + (float)((float)(origin->v[2] - v27) * (float)(origin->v[2] - v27))) < (float)((float)((float)(v32 * v32) + (float)(v29 * v29)) + (float)(v30 * v30)) )
    {
      v33 = eventLast;
      g_AIEvents[v33].origin.v[0] = v31;
      g_AIEvents[v33].origin.v[1] = origin->v[1];
      g_AIEvents[v33].origin.v[2] = origin->v[2];
      g_AIEvents[v33].entity = v13;
    }
  }
}

/*
==============
Actor_EventListener_First
==============
*/
__int64 Actor_EventListener_First(ai_event_t eventType, const bitarray<224> *teamFlags)
{
  unsigned int v2; 
  unsigned __int64 v4; 
  unsigned int *i; 
  unsigned int v6; 
  sentient_s *sentient; 
  unsigned __int64 eTeam; 
  __int64 v10; 
  __int64 v11; 

  v2 = 0;
  if ( g_listenerCount <= 0 )
    return 0xFFFFFFFFi64;
  v4 = (unsigned __int8)eventType;
  for ( i = &g_AIEVlisteners[0].events; ; i += 2 )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v6 = i[v4 >> 5];
    if ( _bittest((const int *)&v6, v4 & 0x1F) )
    {
      sentient = g_entities[*((unsigned __int16 *)i - 2)].sentient;
      if ( !sentient )
        break;
      eTeam = (unsigned int)sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v11) = 224;
        LODWORD(v10) = sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & teamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    if ( (int)++v2 >= g_listenerCount )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
Actor_EventListener_GetCount
==============
*/
__int64 Actor_EventListener_GetCount()
{
  return (unsigned int)g_listenerCount;
}

/*
==============
Actor_EventListener_GetEntity
==============
*/
gentity_s *Actor_EventListener_GetEntity(int index)
{
  __int64 v1; 
  unsigned __int16 entIndex; 
  AIEventListener *v3; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 

  v1 = index;
  if ( (unsigned int)index >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 310, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_AI_EV_LISTENERS )", "index doesn't index MAX_AI_EV_LISTENERS\n\t%i not in [0, %i)", index, 248) )
    __debugbreak();
  entIndex = g_AIEVlisteners[v1].entIndex;
  v3 = &g_AIEVlisteners[v1];
  if ( entIndex >= 0x800u )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( g_AIEVlisteners[index].entIndex ) < (unsigned)( ( 2048 ) )", "g_AIEVlisteners[index].entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v4 = v3->entIndex;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = v3->entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 312, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( g_AIEVlisteners[index].entIndex ))", (const char *)&queryFormat, "G_IsEntityInUse( g_AIEVlisteners[index].entIndex )") )
    __debugbreak();
  return &g_entities[v3->entIndex];
}

/*
==============
Actor_EventListener_GetEventCount
==============
*/
__int64 Actor_EventListener_GetEventCount()
{
  return (unsigned int)g_listenerEventCount;
}

/*
==============
Actor_EventListener_Init
==============
*/
void Actor_EventListener_Init(void)
{
  __int16 *p_eventLast; 
  AIEvent *v1; 

  g_listenerCount = 0;
  g_listenerEventCount = 0;
  memset_0(g_AIEVlisteners, 0, sizeof(g_AIEVlisteners));
  p_eventLast = &g_AIEVlisteners[0].eventLast;
  do
  {
    *(_DWORD *)(p_eventLast - 1) = -63489;
    p_eventLast += 4;
  }
  while ( (__int64)p_eventLast < (__int64)&g_AIEvents[0].entity );
  memset_0(&g_AIEvents[0].origin, 0, 0x60DCui64);
  v1 = g_AIEvents;
  do
  {
    *(_DWORD *)&v1->eventLast = 0x7FFFFFF;
    ++v1;
  }
  while ( (__int64)v1 < (__int64)&marker_actor_event_listener );
}

/*
==============
Actor_EventListener_Next
==============
*/
__int64 Actor_EventListener_Next(int index, ai_event_t eventType, const bitarray<224> *teamFlags)
{
  unsigned int v3; 
  unsigned __int64 v5; 
  unsigned int *i; 
  unsigned int v7; 
  sentient_s *sentient; 
  unsigned __int64 eTeam; 
  __int64 v11; 
  __int64 v12; 

  v3 = index + 1;
  if ( index + 1 >= g_listenerCount )
    return 0xFFFFFFFFi64;
  v5 = (unsigned __int8)eventType;
  for ( i = &g_AIEVlisteners[v3].events; ; i += 2 )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v7 = i[v5 >> 5];
    if ( _bittest((const int *)&v7, v5 & 0x1F) )
    {
      sentient = g_entities[*((unsigned __int16 *)i - 2)].sentient;
      if ( !sentient )
        break;
      eTeam = (unsigned int)sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v12) = 224;
        LODWORD(v11) = sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & teamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    if ( (int)++v3 >= g_listenerCount )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
Actor_EventListener_NotifyExecute
==============
*/
void Actor_EventListener_NotifyExecute(void)
{
  int v0; 
  scrContext_t *v1; 
  int v2; 
  __int16 *p_eventLast; 
  unsigned int eventLast; 
  __int64 v5; 
  __int64 v6; 
  unsigned int CanonicalString; 
  unsigned __int16 entity; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  __int16 *v16; 
  gentity_s *ent; 

  v0 = g_listenerEventCount;
  v15 = g_listenerEventCount;
  v1 = ScriptContext_Server();
  v2 = 0;
  v14 = 0;
  if ( g_listenerCount > 0 )
  {
    p_eventLast = &g_AIEVlisteners[0].eventLast;
    v16 = &g_AIEVlisteners[0].eventLast;
    do
    {
      eventLast = *p_eventLast;
      *p_eventLast = -1;
      if ( eventLast != -1 )
      {
        v5 = (unsigned __int16)*(p_eventLast - 1);
        if ( (unsigned int)v5 >= 0x800 )
        {
          LODWORD(v13) = 2048;
          LODWORD(v12) = (unsigned __int16)*(p_eventLast - 1);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v5] )
        {
          Scr_MakeArray(v1);
          ent = Actor_EventListener_GetEntity(v2);
          do
          {
            if ( eventLast >= 0x4D8 )
            {
              LODWORD(v13) = 1240;
              LODWORD(v12) = eventLast;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 505, ASSERT_TYPE_ASSERT, "(unsigned)( eventIndex ) < (unsigned)( ( sizeof( *array_counter( g_AIEvents ) ) + 0 ) )", "eventIndex doesn't index ARRAY_COUNT( g_AIEvents )\n\t%i not in [0, %i)", v12, v13) )
                __debugbreak();
            }
            if ( eventLast >= g_listenerEventCount )
            {
              LODWORD(v13) = g_listenerEventCount;
              LODWORD(v12) = eventLast;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 506, ASSERT_TYPE_ASSERT, "(unsigned)( eventIndex ) < (unsigned)( g_listenerEventCount )", "eventIndex doesn't index g_listenerEventCount\n\t%i not in [0, %i)", v12, v13) )
                __debugbreak();
            }
            Scr_MakeStruct(v1);
            v6 = (int)eventLast;
            Scr_AddVector(v1, g_AIEvents[v6].origin.v);
            CanonicalString = SL_GetCanonicalString("origin");
            Scr_AddStructField(v1, CanonicalString);
            entity = g_AIEvents[v6].entity;
            if ( entity != 2047 )
            {
              v9 = entity;
              if ( entity >= 0x800u )
              {
                LODWORD(v13) = 2048;
                LODWORD(v12) = entity;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
                  __debugbreak();
              }
              if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
                __debugbreak();
              if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
                __debugbreak();
              if ( g_entityIsInUse[v9] )
              {
                GScr_AddEntity(&g_entities[g_AIEvents[v6].entity]);
                v10 = SL_GetCanonicalString("entity");
                Scr_AddStructField(v1, v10);
              }
            }
            Scr_AddConstString(v1, g_AIEvents[v6].type);
            v11 = SL_GetCanonicalString("type");
            Scr_AddStructField(v1, v11);
            Scr_AddArray(v1);
            eventLast = g_AIEvents[v6].eventLast;
          }
          while ( eventLast != -1 );
          GScr_Notify(ent, scr_const.ai_events, 1u);
          p_eventLast = v16;
          v2 = v14;
        }
      }
      ++v2;
      p_eventLast += 4;
      v14 = v2;
      v16 = p_eventLast;
    }
    while ( v2 < g_listenerCount );
    v0 = v15;
  }
  if ( g_listenerEventCount != v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 535, ASSERT_TYPE_ASSERT, "(g_listenerEventCount == origEventCount)", (const char *)&queryFormat, "g_listenerEventCount == origEventCount") )
    __debugbreak();
  g_listenerEventCount = 0;
}

/*
==============
Actor_EventListener_NotifyToListener
==============
*/
void Actor_EventListener_NotifyToListener(gentity_s *listener, gentity_s *originatorEnt, ai_event_t eventType, const vec3_t *origin)
{
  __int16 EntityIndex; 
  bool v9; 
  scr_string_t **v10; 
  scr_string_t *v11; 
  int v12; 
  AIEventListener *v13; 

  if ( !listener && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 437, ASSERT_TYPE_ASSERT, "(listener)", (const char *)&queryFormat, "listener") )
    __debugbreak();
  EntityIndex = G_GetEntityIndex(listener);
  if ( G_IsEntityInUse(EntityIndex) )
  {
    v9 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
    v10 = &g_AIEV_scrConst_table[(unsigned __int8)eventType];
    v11 = *v10;
    if ( v9 )
    {
      if ( !v11 )
        return;
    }
    else if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 449, ASSERT_TYPE_ASSERT, "(g_AIEV_scrConst_table[eventType])", (const char *)&queryFormat, "g_AIEV_scrConst_table[eventType]") )
    {
      __debugbreak();
    }
    v12 = 0;
    if ( g_listenerCount <= 0 )
      goto LABEL_17;
    v13 = g_AIEVlisteners;
    while ( v13->entIndex != listener->s.number )
    {
      ++v12;
      ++v13;
      if ( v12 >= g_listenerCount )
        goto LABEL_17;
    }
    if ( v12 == -1 )
    {
LABEL_17:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 452, ASSERT_TYPE_ASSERT, "(Actor_EventListener_GetIndex( listener->s.number ) != AI_EVENT_LISTENER_NONE)", (const char *)&queryFormat, "Actor_EventListener_GetIndex( listener->s.number ) != AI_EVENT_LISTENER_NONE") )
        __debugbreak();
    }
    Actor_EventListener_EventAdd(listener->s.number, originatorEnt, **v10, origin);
  }
}

/*
==============
Actor_EventListener_Remove
==============
*/
void Actor_EventListener_Remove(int entIndex, scr_string_t eventString)
{
  ai_event_t EventFromString; 
  int v4; 
  AIEventListener *i; 
  unsigned __int64 v6; 
  unsigned int *p_events; 

  EventFromString = Actor_FindEventFromString(eventString);
  v4 = 0;
  if ( g_listenerCount > 0 )
  {
    for ( i = g_AIEVlisteners; i->entIndex != entIndex; ++i )
    {
      if ( ++v4 >= g_listenerCount )
        return;
    }
    if ( v4 != -1 )
    {
      v6 = (unsigned __int8)EventFromString;
      p_events = &g_AIEVlisteners[v4].events;
      if ( &g_AIEVlisteners[v4] == (AIEventListener *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      p_events[v6 >> 5] &= ~(1 << (v6 & 0x1F));
      if ( !*p_events )
        RemoveSwapWithLast(v4);
    }
  }
}

/*
==============
Actor_EventListener_RemoveEntity
==============
*/
void Actor_EventListener_RemoveEntity(int entIndex)
{
  int v2; 
  AIEventListener *i; 

  v2 = 0;
  if ( g_listenerCount > 0 )
  {
    for ( i = g_AIEVlisteners; i->entIndex != entIndex; ++i )
    {
      if ( ++v2 >= g_listenerCount )
        return;
    }
    if ( v2 != -1 )
      RemoveSwapWithLast(v2);
  }
}

/*
==============
Actor_EventListener_Remove_ByEnum
==============
*/
void Actor_EventListener_Remove_ByEnum(int entIndex, int eventID)
{
  int v2; 
  AIEventListener *i; 
  unsigned __int64 v4; 
  unsigned int *p_events; 

  v2 = 0;
  if ( g_listenerCount > 0 )
  {
    for ( i = g_AIEVlisteners; i->entIndex != entIndex; ++i )
    {
      if ( ++v2 >= g_listenerCount )
        return;
    }
    if ( v2 != -1 )
    {
      v4 = (unsigned __int8)eventID;
      p_events = &g_AIEVlisteners[v2].events;
      if ( &g_AIEVlisteners[v2] == (AIEventListener *)-4i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      p_events[v4 >> 5] &= ~(1 << (v4 & 0x1F));
      if ( !*p_events )
        RemoveSwapWithLast(v2);
    }
  }
}

/*
==============
Actor_EventListener_SetCount
==============
*/
void Actor_EventListener_SetCount(int listenerCount)
{
  g_listenerCount = listenerCount;
}

/*
==============
Actor_EventListener_SetEventCount
==============
*/
void Actor_EventListener_SetEventCount(int listenerEventCount)
{
  g_listenerEventCount = listenerEventCount;
}

/*
==============
Actor_FindEventFromString
==============
*/
ai_event_t Actor_FindEventFromString(scr_string_t eventString)
{
  int v2; 
  scr_string_t *v3; 
  scrContext_t *v4; 
  const char *v5; 
  const char *v6; 

  v2 = 0;
  while ( 1 )
  {
    v3 = g_AIEV_scrConst_table[v2];
    if ( v3 )
    {
      if ( *v3 == eventString )
        break;
    }
    if ( ++v2 >= 30 )
    {
      v4 = ScriptContext_Server();
      v5 = SL_ConvertToString(eventString);
      v6 = j_va("Unable to find AI event for [%s]", v5);
      Scr_Error(COM_ERR_2625, v4, v6);
      LOBYTE(v2) = 0;
      return (char)v2;
    }
  }
  return (char)v2;
}

/*
==============
RemoveSwapWithLast
==============
*/
void RemoveSwapWithLast(int listenerIndex)
{
  __int64 v1; 
  int v2; 
  __int64 v3; 
  int v5; 

  v1 = listenerIndex;
  if ( (unsigned int)listenerIndex >= 0xF8 )
  {
    v5 = 248;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_event_listeners.cpp", 192, ASSERT_TYPE_ASSERT, "(unsigned)( listenerIndex ) < (unsigned)( MAX_AI_EV_LISTENERS )", "listenerIndex doesn't index MAX_AI_EV_LISTENERS\n\t%i not in [0, %i)", listenerIndex, v5) )
      __debugbreak();
  }
  v2 = g_listenerCount - 1;
  g_listenerCount = v2;
  if ( (int)v1 < v2 )
  {
    g_AIEVlisteners[v1].entIndex = g_AIEVlisteners[v2].entIndex;
    v3 = v2;
    g_AIEVlisteners[v1].events = g_AIEVlisteners[v3].events;
    g_AIEVlisteners[v1].eventLast = g_AIEVlisteners[v3].eventLast;
    LODWORD(v1) = v2;
  }
  *(_DWORD *)&g_AIEVlisteners[(int)v1].entIndex = -63489;
  g_AIEVlisteners[(int)v1].events = 0;
}

