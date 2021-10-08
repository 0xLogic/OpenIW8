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
  __int64 v5; 
  int endTime; 
  unsigned int v13; 
  int v15; 
  AutomatedInput_Event *v16; 
  __int64 v17; 
  bool v18; 
  unsigned int v19; 
  unsigned int v20; 
  AutomatedInput_Event *v25; 
  AutomatedInput_Event *v28; 
  __int64 v31; 
  __int64 v32; 
  int v35; 
  __int64 v36; 

  v5 = numRecords;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 216, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v31) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_automatedInputData ) ) + 0 ) )", "localClientNum doesn't index s_automatedInputData\n\t%i not in [0, %i)", v31, 2) )
      __debugbreak();
  }
  v35 = Sys_Milliseconds();
  endTime = v35;
  v36 = v5;
  if ( (int)v5 > 0 )
  {
    _R15 = (float *)&records->moveStick + 1;
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm6
      vmovss  xmm6, cs:__real@c47a0000
      vmovaps [rsp+0A8h+var_58], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    while ( 1 )
    {
      __asm { vmulss  xmm1, xmm6, dword ptr [r15-28h] }
      v13 = *((_DWORD *)_R15 - 8);
      __asm { vcvttss2si eax, xmm1 }
      v15 = endTime - _EAX;
      v16 = NULL;
      LODWORD(v17) = 0;
      while ( v13 )
      {
LABEL_13:
        v19 = __lzcnt(v13);
        v20 = v19 + 32 * v17;
        if ( v19 >= 0x20 )
        {
          LODWORD(v32) = 32;
          LODWORD(v31) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        if ( (v13 & (0x80000000 >> v19)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [r15-24h]
          vcvttss2si eax, xmm1
        }
        v13 &= ~(0x80000000 >> v19);
        v16 = CL_Input_AddNewEvent(localClientNum, v15, v15 - _EAX);
        if ( v16 )
        {
          if ( v20 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v20, "unsigned", v20) )
            __debugbreak();
          v16->key = v20;
        }
      }
      while ( 1 )
      {
        v17 = (unsigned int)(v17 + 1);
        v18 = (_DWORD)v17 == 7;
        if ( (unsigned int)v17 >= 7 )
          break;
        v13 = LODWORD(_R15[v17 - 8]);
        if ( v13 )
          goto LABEL_13;
      }
      __asm { vucomiss xmm7, dword ptr [r15+4] }
      if ( (_DWORD)v17 == 7 )
      {
        __asm { vucomiss xmm7, dword ptr [r15+8] }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [r15-24h]
          vcvttss2si eax, xmm1
        }
        v25 = CL_Input_AddNewEvent(localClientNum, v15, v15 - _EAX);
        v16 = v25;
        v18 = v25 == NULL;
        if ( v25 )
        {
          v25->stick.v[0] = _R15[1];
          v25->stick.v[1] = _R15[2];
          v25->key = 0;
        }
      }
      __asm { vucomiss xmm7, dword ptr [r15-4] }
      if ( !v18 )
        goto LABEL_30;
      __asm { vucomiss xmm7, dword ptr [r15] }
      if ( !v18 )
      {
LABEL_30:
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [r15-24h]
          vcvttss2si eax, xmm1
        }
        v28 = CL_Input_AddNewEvent(localClientNum, v15, v15 - _EAX);
        v16 = v28;
        if ( !v28 )
          goto LABEL_34;
        v28->stick.v[0] = *(_R15 - 1);
        v28->stick.v[1] = *_R15;
        v28->key = -34;
      }
      if ( !v16 )
      {
LABEL_34:
        endTime = v35;
        goto LABEL_35;
      }
      endTime = v16->endTime;
      v35 = endTime;
LABEL_35:
      _R15 += 13;
      if ( !--v36 )
      {
        __asm
        {
          vmovaps xmm7, [rsp+0A8h+var_58]
          vmovaps xmm6, [rsp+0A8h+var_48]
        }
        return;
      }
    }
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
  AutomatedInput_Event *v4; 
  char v5; 
  AutomatedInput_Data *v6; 
  AutomatedInput_Event *v8; 
  char v9; 
  AutomatedInput_Event *v10; 
  AutomatedInput_Event *activeEvents; 
  AutomatedInput_Event *v13; 
  unsigned __int8 key; 
  AutomatedInput_Event *next; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v16; 
  AutomatedInput_Event *v17; 
  char v18; 
  char v19; 
  __int64 v30; 
  __int64 v31; 
  AutomatedInput_Event *v32; 
  char v34; 
  AutomatedInput_Event *v35; 

  v4 = NULL;
  v5 = 0;
  v32 = NULL;
  v34 = 0;
  v6 = &s_automatedInputData[localClientNum];
  v8 = NULL;
  v9 = 0;
  v10 = NULL;
  v35 = NULL;
  activeEvents = v6->activeEvents;
  if ( activeEvents )
  {
    __asm { vmovaps [rsp+98h+var_48], xmm6 }
    do
    {
      v13 = activeEvents;
      key = activeEvents->key;
      if ( time < activeEvents->endTime )
      {
        v17 = activeEvents;
        v10 = activeEvents;
        activeEvents = activeEvents->next;
        if ( key )
          v17 = v4;
        v4 = v17;
        v32 = v17;
        if ( key != 0xDE )
          v13 = v8;
        v8 = v13;
        v35 = v13;
        v18 = 0;
        if ( key != 0xDE )
          v18 = v9;
        v9 = v18;
        v19 = 0;
        if ( key )
          v19 = v5;
        v5 = v19;
        v34 = v19;
      }
      else
      {
        if ( key == 0xDE )
        {
          v9 = 1;
        }
        else if ( key )
        {
          if ( key >= 0xDEu )
          {
            LODWORD(v31) = 222;
            LODWORD(v30) = key;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 120, ASSERT_TYPE_ASSERT, "(unsigned)( event->key ) < (unsigned)( ( sizeof( *array_counter( inputData->buttonDownRefCount ) ) + 0 ) )", "event->key doesn't index ARRAY_COUNT( inputData->buttonDownRefCount )\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          if ( !v6->buttonDownRefCount[activeEvents->key] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 121, ASSERT_TYPE_ASSERT, "(inputData->buttonDownRefCount[event->key])", (const char *)&queryFormat, "inputData->buttonDownRefCount[event->key]") )
            __debugbreak();
          if ( !--v6->buttonDownRefCount[activeEvents->key] )
            CL_GamepadButtonEventForPort(controllerIndex, activeEvents->key, 0, time, 0);
        }
        else
        {
          v34 = 1;
        }
        next = activeEvents->next;
        if ( v10 )
          v10->next = next;
        else
          v6->activeEvents = next;
        if ( v6->lastActiveEvent == activeEvents )
        {
          if ( activeEvents->next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input_automated.cpp", 140, ASSERT_TYPE_ASSERT, "(!event->next)", (const char *)&queryFormat, "!event->next") )
              __debugbreak();
          }
          v6->lastActiveEvent = v10;
        }
        v16 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)activeEvents;
        activeEvents = activeEvents->next;
        v4 = v32;
        v8 = v35;
        v16->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6->inputEventPool.m_freelist.m_head;
        v6->inputEventPool.m_freelist.m_head.mp_next = v16;
        v5 = v34;
      }
    }
    while ( activeEvents );
    __asm { vmovss  xmm6, cs:__real@477fff00 }
    if ( v9 )
    {
      CL_GamepadEvent(controllerIndex, 2, 0, time);
      _ER8 = 0;
    }
    else
    {
      if ( !v8 )
        goto LABEL_40;
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [r8+4]
        vcvttss2si r8d, xmm1; value
      }
      CL_GamepadEvent(controllerIndex, 2, _ER8, time);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rax]
        vcvttss2si r8d, xmm1; value
      }
    }
    CL_GamepadEvent(controllerIndex, 3, _ER8, time);
LABEL_40:
    if ( v5 )
    {
      CL_GamepadEvent(controllerIndex, 0, 0, time);
      _ER8 = 0;
    }
    else
    {
      if ( !v4 )
      {
LABEL_45:
        __asm { vmovaps xmm6, [rsp+98h+var_48] }
        return;
      }
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [r14+4]
        vcvttss2si r8d, xmm1; value
      }
      CL_GamepadEvent(controllerIndex, 0, _ER8, time);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [r14]
        vcvttss2si r8d, xmm1; value
      }
    }
    CL_GamepadEvent(controllerIndex, 1, _ER8, time);
    goto LABEL_45;
  }
}

