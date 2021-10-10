/*
==============
CL_Input_AddAutomatedSequence
==============
*/

void __fastcall CL_Input_AddAutomatedSequence(LocalClientNum_t localClientNum, const AutomatedInput_Record *records, int numRecords)
{
  ?CL_Input_AddAutomatedSequence@@YAXW4LocalClientNum_t@@PEBUAutomatedInput_Record@@H@Z(localClientNum, records, numRecords);
}

/*
==============
CL_Input_AutomatedInput_Frame
==============
*/

void __fastcall CL_Input_AutomatedInput_Frame(LocalClientNum_t localClientNum)
{
  ?CL_Input_AutomatedInput_Frame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_AutomatedInput_Init
==============
*/

void CL_Input_AutomatedInput_Init(void)
{
  ?CL_Input_AutomatedInput_Init@@YAXXZ();
}

/*
==============
CL_Input_AutomatedSequenceRunning
==============
*/

bool __fastcall CL_Input_AutomatedSequenceRunning(LocalClientNum_t localClientNum)
{
  return ?CL_Input_AutomatedSequenceRunning@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_AddAutomatedSequence
==============
*/
void CL_Input_AddAutomatedSequence(LocalClientNum_t localClientNum, const AutomatedInput_Record *records, int numRecords)
{
  __int64 v3; 
  int endTime; 
  float *v7; 
  unsigned int v8; 
  int v9; 
  AutomatedInput_Event *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  AutomatedInput_Event *v14; 
  AutomatedInput_Event *v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 

  v3 = numRecords;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 216, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v16) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_automatedInputData ) ) + 0 ) )", "localClientNum doesn't index s_automatedInputData\n\t%i not in [0, %i)", v16, 2) )
      __debugbreak();
  }
  v18 = Sys_Milliseconds();
  endTime = v18;
  v19 = v3;
  if ( (int)v3 > 0 )
  {
    v7 = (float *)&records->moveStick + 1;
    do
    {
      v8 = *((_DWORD *)v7 - 8);
      v9 = endTime - (int)(float)(-1000.0 * *(v7 - 10));
      v10 = NULL;
      LODWORD(v11) = 0;
      while ( v8 )
      {
LABEL_13:
        v12 = __lzcnt(v8);
        v13 = v12 + 32 * v11;
        if ( v12 >= 0x20 )
        {
          LODWORD(v17) = 32;
          LODWORD(v16) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( (v8 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v8 &= ~(0x80000000 >> v12);
        v10 = CL_Input_AddNewEvent(localClientNum, v9, v9 - (int)(float)(-1000.0 * *(v7 - 9)));
        if ( v10 )
        {
          if ( v13 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v13, "unsigned", v13) )
            __debugbreak();
          v10->key = v13;
        }
      }
      while ( 1 )
      {
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= 7 )
          break;
        v8 = LODWORD(v7[v11 - 8]);
        if ( v8 )
          goto LABEL_13;
      }
      if ( v7[1] != 0.0 || v7[2] != 0.0 )
      {
        v14 = CL_Input_AddNewEvent(localClientNum, v9, v9 - (int)(float)(-1000.0 * *(v7 - 9)));
        v10 = v14;
        if ( v14 )
        {
          v14->stick.v[0] = v7[1];
          v14->stick.v[1] = v7[2];
          v14->key = 0;
        }
      }
      if ( *(v7 - 1) != 0.0 || *v7 != 0.0 )
      {
        v15 = CL_Input_AddNewEvent(localClientNum, v9, v9 - (int)(float)(-1000.0 * *(v7 - 9)));
        v10 = v15;
        if ( !v15 )
          goto LABEL_34;
        v15->stick.v[0] = *(v7 - 1);
        v15->stick.v[1] = *v7;
        v15->key = -34;
      }
      if ( !v10 )
      {
LABEL_34:
        endTime = v18;
        goto LABEL_35;
      }
      endTime = v10->endTime;
      v18 = endTime;
LABEL_35:
      v7 += 13;
      --v19;
    }
    while ( v19 );
  }
}

/*
==============
CL_Input_AddNewEvent
==============
*/
ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *CL_Input_AddNewEvent(LocalClientNum_t localClientNum, int startTime, int endTime)
{
  AutomatedInput_Data *v4; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v10; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *v12; 
  ntl::red_black_tree_node_base *v13; 
  bool v14; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v17; 
  ntl::pair<unsigned int,AutomatedInput_Event *> r_element; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,AutomatedInput_Event *> >,ntl::pair<unsigned int,AutomatedInput_Event *> *,ntl::pair<unsigned int,AutomatedInput_Event *> &> result; 

  v4 = &s_automatedInputData[localClientNum];
  p_m_freelist = &v4->inputEventPool.m_freelist;
  if ( !v4->inputEventPool.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next != p_m_freelist )
  {
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0x400ui64) )
      __debugbreak();
    mp_next = p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 73, ASSERT_TYPE_ASSERT, "(event)", (const char *)&queryFormat, "event") )
      __debugbreak();
    p_m_endNodeBase = &v4->inputEventMap.m_endNodeBase;
    mp_next->mp_next = NULL;
    v10 = &v4->inputEventMap.m_endNodeBase;
    mp_next[1].mp_next = NULL;
    mp_next[2].mp_next = NULL;
    mp_parent = v4->inputEventMap.m_endNodeBase.mp_parent;
    v12 = mp_parent;
    while ( v12 )
    {
      if ( v12[1].m_color < (unsigned int)startTime )
      {
        v12 = v12->mp_right;
      }
      else
      {
        v10 = v12;
        v12 = v12->mp_left;
      }
    }
    if ( v10 != p_m_endNodeBase && (unsigned int)startTime >= v10[1].m_color )
    {
      v13 = v10[1].mp_parent;
      mp_next[1].mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v13->mp_parent;
      v13->mp_parent = (ntl::red_black_tree_node_base *)mp_next;
LABEL_53:
      LODWORD(mp_next[2].mp_next) = endTime;
      return mp_next;
    }
    v14 = 1;
    r_element.first = startTime;
    r_element.second = (AutomatedInput_Event *)mp_next;
    while ( mp_parent )
    {
      p_m_endNodeBase = mp_parent;
      v14 = (unsigned int)startTime < mp_parent[1].m_color;
      if ( (unsigned int)startTime >= mp_parent[1].m_color )
        mp_parent = mp_parent->mp_right;
      else
        mp_parent = mp_parent->mp_left;
    }
    mp_left = p_m_endNodeBase;
    if ( v14 )
    {
      if ( p_m_endNodeBase == v4->inputEventMap.m_endNodeBase.mp_left )
      {
        ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,AutomatedInput_Event *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,AutomatedInput_Event *>>,1024,8>,ntl::return_pair_first<unsigned int,AutomatedInput_Event *>,ntl::less<unsigned int,unsigned int>>::insert_node(&v4->inputEventMap, &result, p_m_endNodeBase, &r_element, 1, 0);
        goto LABEL_53;
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
      {
        mp_left = p_m_endNodeBase->mp_left;
        if ( mp_left )
        {
          for ( i = mp_left->mp_right; i; i = i->mp_right )
            mp_left = i;
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_parent;
          if ( p_m_endNodeBase == mp_left->mp_left )
          {
            do
            {
              v17 = mp_left;
              mp_left = mp_left->mp_parent;
            }
            while ( v17 == mp_left->mp_left );
          }
        }
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_right;
      }
    }
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < (unsigned int)startTime )
      ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,AutomatedInput_Event *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,AutomatedInput_Event *>>,1024,8>,ntl::return_pair_first<unsigned int,AutomatedInput_Event *>,ntl::less<unsigned int,unsigned int>>::insert_node(&v4->inputEventMap, &result, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_53;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 68, ASSERT_TYPE_ASSERT, "(!\"CL_Input_AddNewEvent, pool full!\")", (const char *)&queryFormat, "!\"CL_Input_AddNewEvent, pool full!\"") )
    __debugbreak();
  return 0i64;
}

/*
==============
CL_Input_AutomatedInput_Frame
==============
*/
void CL_Input_AutomatedInput_Frame(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  AutomatedInput_Data *v3; 
  ntl::red_black_tree_node_base *mp_left; 
  int ControllerFromClient; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  AutomatedInput_Event *mp_parent; 
  unsigned __int8 key; 
  __int64 v9; 
  ntl::red_black_tree_node_base *v10; 
  __int64 v11; 
  __int64 v12; 

  v1 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 275, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v11) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 276, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_automatedInputData ) ) + 0 ) )", "localClientNum doesn't index s_automatedInputData\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  v2 = Sys_Milliseconds();
  v3 = &s_automatedInputData[v1];
  mp_left = v3->inputEventMap.m_endNodeBase.mp_left;
  if ( CL_Mgr_IsClientActive((LocalClientNum_t)v1) )
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
  else
    ControllerFromClient = v1;
  p_m_endNodeBase = &v3->inputEventMap.m_endNodeBase;
  if ( mp_left != &v3->inputEventMap.m_endNodeBase )
  {
    do
    {
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( mp_left[1].m_color >= v2 )
        break;
      mp_parent = (AutomatedInput_Event *)mp_left[1].mp_parent;
      if ( v3->activeEvents )
      {
        if ( !v3->lastActiveEvent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 293, ASSERT_TYPE_ASSERT, "(inputData->lastActiveEvent)", (const char *)&queryFormat, "inputData->lastActiveEvent") )
          __debugbreak();
        if ( v3->lastActiveEvent->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 294, ASSERT_TYPE_ASSERT, "(!inputData->lastActiveEvent->next)", (const char *)&queryFormat, "!inputData->lastActiveEvent->next") )
          __debugbreak();
        v3->lastActiveEvent->next = mp_parent;
      }
      else
      {
        v3->activeEvents = mp_parent;
      }
      while ( 1 )
      {
        key = mp_parent->key;
        if ( key != 0xDE && key )
        {
          if ( key >= 0xDEu )
          {
            LODWORD(v12) = 222;
            LODWORD(v11) = key;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 301, ASSERT_TYPE_ASSERT, "(unsigned)( event->key ) < (unsigned)( ( sizeof( *array_counter( inputData->buttonDownRefCount ) ) + 0 ) )", "event->key doesn't index ARRAY_COUNT( inputData->buttonDownRefCount )\n\t%i not in [0, %i)", v11, v12) )
              __debugbreak();
          }
          v9 = mp_parent->key;
          if ( !v3->buttonDownRefCount[v9] )
          {
            CL_GamepadButtonEventForPort(ControllerFromClient, mp_parent->key, 1, v2, 0);
            LOBYTE(v9) = mp_parent->key;
          }
          ++v3->buttonDownRefCount[(unsigned __int8)v9];
        }
        if ( !mp_parent->next )
          break;
        mp_parent = mp_parent->next;
      }
      v3->lastActiveEvent = mp_parent;
      if ( !v3->inputEventMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v10 = mp_left;
      mp_left = ntl::red_black_tree_node_base::get_next(mp_left);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      if ( v10 == p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
        __debugbreak();
      ntl::red_black_tree_node_base::rebalance_for_erase(v10, &v3->inputEventMap.m_endNodeBase.mp_parent, &v3->inputEventMap.m_endNodeBase.mp_left, &v3->inputEventMap.m_endNodeBase.mp_right);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      *(_QWORD *)&v10->m_color = v3->inputEventMap.m_freelist.m_head.mp_next;
      v3->inputEventMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v10;
      --v3->inputEventMap.m_size;
    }
    while ( mp_left != p_m_endNodeBase );
    LODWORD(v1) = localClientNum;
  }
  CL_Input_ProcessActiveEvents((LocalClientNum_t)v1, ControllerFromClient, v2);
}

/*
==============
CL_Input_AutomatedInput_Init
==============
*/
void CL_Input_AutomatedInput_Init(void)
{
  ;
}

/*
==============
CL_Input_AutomatedSequenceRunning
==============
*/
bool CL_Input_AutomatedSequenceRunning(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 199, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_automatedInputData ) ) + 0 ) )", "localClientNum doesn't index s_automatedInputData\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return s_automatedInputData[v1].inputEventMap.m_size || s_automatedInputData[v1].activeEvents;
}

/*
==============
CL_Input_ProcessActiveEvents
==============
*/
void CL_Input_ProcessActiveEvents(LocalClientNum_t localClientNum, int controllerIndex, int time)
{
  float *v3; 
  char v4; 
  AutomatedInput_Data *v5; 
  float *v7; 
  char v8; 
  AutomatedInput_Event *v9; 
  AutomatedInput_Event *activeEvents; 
  float *v12; 
  unsigned __int8 key; 
  AutomatedInput_Event *next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v15; 
  float *v16; 
  char v17; 
  char v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  float *v23; 
  char v24; 
  float *v25; 

  v3 = NULL;
  v4 = 0;
  v23 = NULL;
  v24 = 0;
  v5 = &s_automatedInputData[localClientNum];
  v7 = NULL;
  v8 = 0;
  v9 = NULL;
  v25 = NULL;
  activeEvents = v5->activeEvents;
  if ( !activeEvents )
    return;
  do
  {
    v12 = (float *)activeEvents;
    key = activeEvents->key;
    if ( time < activeEvents->endTime )
    {
      v16 = (float *)activeEvents;
      v9 = activeEvents;
      activeEvents = activeEvents->next;
      if ( key )
        v16 = v3;
      v3 = v16;
      v23 = v16;
      if ( key != 0xDE )
        v12 = v7;
      v7 = v12;
      v25 = v12;
      v17 = 0;
      if ( key != 0xDE )
        v17 = v8;
      v8 = v17;
      v18 = 0;
      if ( key )
        v18 = v4;
      v4 = v18;
      v24 = v18;
    }
    else
    {
      if ( key == 0xDE )
      {
        v8 = 1;
      }
      else if ( key )
      {
        if ( key >= 0xDEu )
        {
          LODWORD(v22) = 222;
          LODWORD(v21) = key;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( event->key ) < (unsigned)( ( sizeof( *array_counter( inputData->buttonDownRefCount ) ) + 0 ) )", "event->key doesn't index ARRAY_COUNT( inputData->buttonDownRefCount )\n\t%i not in [0, %i)", v21, v22) )
            __debugbreak();
        }
        if ( !v5->buttonDownRefCount[activeEvents->key] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 121, ASSERT_TYPE_ASSERT, "(inputData->buttonDownRefCount[event->key])", (const char *)&queryFormat, "inputData->buttonDownRefCount[event->key]") )
          __debugbreak();
        if ( !--v5->buttonDownRefCount[activeEvents->key] )
          CL_GamepadButtonEventForPort(controllerIndex, activeEvents->key, 0, time, 0);
      }
      else
      {
        v24 = 1;
      }
      next = activeEvents->next;
      if ( v9 )
        v9->next = next;
      else
        v5->activeEvents = next;
      if ( v5->lastActiveEvent == activeEvents )
      {
        if ( activeEvents->next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 140, ASSERT_TYPE_ASSERT, "(!event->next)", (const char *)&queryFormat, "!event->next") )
            __debugbreak();
        }
        v5->lastActiveEvent = v9;
      }
      v15 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)activeEvents;
      activeEvents = activeEvents->next;
      v3 = v23;
      v7 = v25;
      v15->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v5->inputEventPool.m_freelist.m_head;
      v5->inputEventPool.m_freelist.m_head.mp_next = v15;
      v4 = v24;
    }
  }
  while ( activeEvents );
  if ( v8 )
  {
    CL_GamepadEvent(controllerIndex, 2, 0, time);
    v19 = 0;
LABEL_38:
    CL_GamepadEvent(controllerIndex, 3, v19, time);
    goto LABEL_39;
  }
  if ( v7 )
  {
    CL_GamepadEvent(controllerIndex, 2, (int)(float)(65535.0 * v7[1]), time);
    v19 = (int)(float)(65535.0 * *v25);
    goto LABEL_38;
  }
LABEL_39:
  if ( v4 )
  {
    CL_GamepadEvent(controllerIndex, 0, 0, time);
    v20 = 0;
  }
  else
  {
    if ( !v3 )
      return;
    CL_GamepadEvent(controllerIndex, 0, (int)(float)(65535.0 * v3[1]), time);
    v20 = (int)(float)(65535.0 * *v3);
  }
  CL_GamepadEvent(controllerIndex, 1, v20, time);
}

