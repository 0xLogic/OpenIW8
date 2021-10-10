/*
==============
BT_FreeInstanceData
==============
*/

void __fastcall BT_FreeInstanceData(unsigned __int8 *pInOutInstDataIdx)
{
  ?BT_FreeInstanceData@@YAXPEAE@Z(pInOutInstDataIdx);
}

/*
==============
BT_Builtin_GetBoolParam
==============
*/

bool __fastcall BT_Builtin_GetBoolParam(BehaviorTree *pTree, int taskID, int paramsID)
{
  return ?BT_Builtin_GetBoolParam@@YA_NPEAUBehaviorTree@@HH@Z(pTree, taskID, paramsID);
}

/*
==============
BT_Builtin_GetFloatParam
==============
*/

double __fastcall BT_Builtin_GetFloatParam(BehaviorTree *pTree, int taskID, int paramsID)
{
  double result; 

  *(float *)&result = ?BT_Builtin_GetFloatParam@@YAMPEAUBehaviorTree@@HH@Z(pTree, taskID, paramsID);
  return result;
}

/*
==============
BT_GetEnt
==============
*/

gentity_s *__fastcall BT_GetEnt(int entNum)
{
  return ?BT_GetEnt@@YAPEAUgentity_s@@H@Z(entNum);
}

/*
==============
BT_Builtin_GetEntParam
==============
*/

gentity_s *__fastcall BT_Builtin_GetEntParam(BehaviorTree *pTree, int taskID, int paramsID)
{
  return ?BT_Builtin_GetEntParam@@YAPEAUgentity_s@@PEAUBehaviorTree@@HH@Z(pTree, taskID, paramsID);
}

/*
==============
BT_AllocInstanceData
==============
*/

ai_bt_instance_data *__fastcall BT_AllocInstanceData(unsigned __int8 *pOutInstDataIdx)
{
  return ?BT_AllocInstanceData@@YAPEAUai_bt_instance_data@@PEAE@Z(pOutInstDataIdx);
}

/*
==============
BT_GetInstanceData
==============
*/

ai_bt_instance_data *__fastcall BT_GetInstanceData(unsigned __int8 instDataIdx)
{
  return ?BT_GetInstanceData@@YAPEAUai_bt_instance_data@@E@Z(instDataIdx);
}

/*
==============
BT_AllocInstanceData
==============
*/
ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *BT_AllocInstanceData(unsigned __int8 *pOutInstDataIdx)
{
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 

  if ( !pOutInstDataIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_util.cpp", 78, ASSERT_TYPE_ASSERT, "(pOutInstDataIdx)", (const char *)&queryFormat, "pOutInstDataIdx") )
    __debugbreak();
  if ( !s_BTInstanceDataPool.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !s_BTInstanceDataPool.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<16> *)s_BTInstanceDataPool.m_freelist.m_head.mp_next == &s_BTInstanceDataPool.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x10ui64, 0x40ui64) )
    __debugbreak();
  mp_next = s_BTInstanceDataPool.m_freelist.m_head.mp_next;
  s_BTInstanceDataPool.m_freelist.m_head.mp_next = s_BTInstanceDataPool.m_freelist.m_head.mp_next->mp_next;
  if ( (mp_next < (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&s_BTInstanceDataPool || mp_next >= &s_BTInstanceDataPool.m_freelist.m_head) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 133, ASSERT_TYPE_ASSERT, "( contains_item( item ) )", (const char *)&queryFormat, "contains_item( item )") )
    __debugbreak();
  *pOutInstDataIdx = ((char *)mp_next - (char *)&s_BTInstanceDataPool) / 16 + 1;
  return mp_next;
}

/*
==============
BT_Builtin_GetBoolParam
==============
*/
bool BT_Builtin_GetBoolParam(BehaviorTree *pTree, int taskID, int paramsID)
{
  int Function; 
  scrContext_t *v5; 
  unsigned int v6; 
  int outReturnValue; 

  Function = AI_BT_GetFunction(pTree, paramsID);
  v5 = ScriptContext_Server();
  Scr_AddInt(v5, taskID);
  v6 = Scr_ExecThreadWithReturnValue(v5, Function, 1u, Scr_ExecThreadCallback_Unsigned, NULL, &outReturnValue);
  Scr_FreeThread(v5, v6);
  return outReturnValue != 0;
}

/*
==============
BT_Builtin_GetEntParam
==============
*/
gentity_s *BT_Builtin_GetEntParam(BehaviorTree *pTree, int taskID, int paramsID)
{
  int Function; 
  scrContext_t *v5; 
  unsigned int v6; 
  scr_entref_t entref; 

  Function = AI_BT_GetFunction(pTree, paramsID);
  v5 = ScriptContext_Server();
  Scr_AddInt(v5, taskID);
  v6 = Scr_ExecThreadWithReturnValue(v5, Function, 1u, Scr_ExecThreadCallback_EntRef, NULL, &entref);
  Scr_FreeThread(v5, v6);
  return GetEntity(entref);
}

/*
==============
BT_Builtin_GetFloatParam
==============
*/
float BT_Builtin_GetFloatParam(BehaviorTree *pTree, int taskID, int paramsID)
{
  int Function; 
  scrContext_t *v5; 
  unsigned int v6; 
  float outReturnValue; 

  Function = AI_BT_GetFunction(pTree, paramsID);
  v5 = ScriptContext_Server();
  Scr_AddInt(v5, taskID);
  v6 = Scr_ExecThreadWithReturnValue(v5, Function, 1u, Scr_ExecThreadCallback_Float, NULL, &outReturnValue);
  Scr_FreeThread(v5, v6);
  return outReturnValue;
}

/*
==============
BT_FreeInstanceData
==============
*/
void BT_FreeInstanceData(unsigned __int8 *pInOutInstDataIdx)
{
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v2; 
  unsigned __int64 v3; 

  if ( !*pInOutInstDataIdx )
  {
    v2 = NULL;
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    goto LABEL_11;
  }
  v3 = *pInOutInstDataIdx - 1i64;
  if ( v3 >= 0x40 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  v2 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)((char *)&s_BTInstanceDataPool + 16 * v3);
  if ( !v2 )
    goto LABEL_9;
LABEL_11:
  v2->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)s_BTInstanceDataPool.m_freelist.m_head;
  s_BTInstanceDataPool.m_freelist.m_head.mp_next = v2;
  *pInOutInstDataIdx = 0;
}

/*
==============
BT_GetEnt
==============
*/
gentity_s *BT_GetEnt(int entNum)
{
  __int64 v1; 
  int v4; 

  v1 = entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_bt_builtin_util.cpp", 64, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, v4) )
      __debugbreak();
  }
  return &g_entities[v1];
}

/*
==============
BT_GetInstanceData
==============
*/
ai_bt_instance_data *BT_GetInstanceData(unsigned __int8 instDataIdx)
{
  unsigned __int64 v2; 

  if ( !instDataIdx )
    return 0i64;
  v2 = instDataIdx - 1i64;
  if ( v2 >= 0x40 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 358, ASSERT_TYPE_ASSERT, "( index < m_data.size() )", (const char *)&queryFormat, "index < m_data.size()") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  return (ai_bt_instance_data *)((char *)&s_BTInstanceDataPool + 16 * v2);
}

