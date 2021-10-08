/*
==============
Ai_Asm::RemoveInstance
==============
*/

void __fastcall Ai_Asm::RemoveInstance(Ai_Asm *this, int entNum)
{
  ?RemoveInstance@Ai_Asm@@UEBAXH@Z(this, entNum);
}

/*
==============
Ai_Asm::WriteInstances
==============
*/

void __fastcall Ai_Asm::WriteInstances(Ai_Asm *this, MemoryFile *memFile)
{
  ?WriteInstances@Ai_Asm@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
Ai_Asm::GetInstanceIfExists
==============
*/

const ASM_Instance *__fastcall Ai_Asm::GetInstanceIfExists(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  return ?GetInstanceIfExists@Ai_Asm@@UEBAPEBUASM_Instance@@PEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
Ai_Asm::ReadInstances
==============
*/

void __fastcall Ai_Asm::ReadInstances(Ai_Asm *this, MemoryFile *memFile)
{
  ?ReadInstances@Ai_Asm@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
Ai_Asm::ReadInstance
==============
*/

ASM_Instance *__fastcall Ai_Asm::ReadInstance(Ai_Asm *this, MemoryFile *memFile)
{
  return ?ReadInstance@Ai_Asm@@QEAAPEAUASM_Instance@@PEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
Ai_Asm::WriteEventTable
==============
*/

void __fastcall Ai_Asm::WriteEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_Event *eventTable)
{
  ?WriteEventTable@Ai_Asm@@QEAAXPEAUMemoryFile@@PEAUASM_Event@@@Z(this, memFile, eventTable);
}

/*
==============
Ai_Asm::GetInstanceByAssetName
==============
*/

ASM_Instance *__fastcall Ai_Asm::GetInstanceByAssetName(Ai_Asm *this, const ASM_Context *context, int entNum, scr_string_t asmName)
{
  return ?GetInstanceByAssetName@Ai_Asm@@UEAAPEAUASM_Instance@@PEBUASM_Context@@HW4scr_string_t@@@Z(this, context, entNum, asmName);
}

/*
==============
Ai_Asm::ReadEphemeralEventTable
==============
*/

void __fastcall Ai_Asm::ReadEphemeralEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_EphemeralEvent *eventTable)
{
  ?ReadEphemeralEventTable@Ai_Asm@@QEAAXPEAUMemoryFile@@PEAUASM_EphemeralEvent@@@Z(this, memFile, eventTable);
}

/*
==============
Ai_Asm::InstanceAllocate
==============
*/

ASM_Instance *__fastcall Ai_Asm::InstanceAllocate(Ai_Asm *this, const ASM_Context *context)
{
  return ?InstanceAllocate@Ai_Asm@@UEBAPEAUASM_Instance@@PEBUASM_Context@@@Z(this, context);
}

/*
==============
Ai_Asm::StoreInstance
==============
*/

void __fastcall Ai_Asm::StoreInstance(Ai_Asm *this, ASM_Instance *pInst, int entNum)
{
  ?StoreInstance@Ai_Asm@@UEBAXPEAUASM_Instance@@H@Z(this, pInst, entNum);
}

/*
==============
Ai_Asm::GetInstanceIfExists
==============
*/

ASM_Instance *__fastcall Ai_Asm::GetInstanceIfExists(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  return ?GetInstanceIfExists@Ai_Asm@@UEAAPEAUASM_Instance@@PEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
Ai_Asm::WriteInstance
==============
*/

void __fastcall Ai_Asm::WriteInstance(Ai_Asm *this, MemoryFile *memFile, ASM_Instance *pInst)
{
  ?WriteInstance@Ai_Asm@@QEAAXPEAUMemoryFile@@PEAUASM_Instance@@@Z(this, memFile, pInst);
}

/*
==============
Ai_Asm::GetInstanceMap
==============
*/

ntl::map<int,ASM_Instance *,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::less<int,int> > *__fastcall Ai_Asm::GetInstanceMap(Ai_Asm *this)
{
  return ?GetInstanceMap@Ai_Asm@@QEBAPEAV?$map@HPEAUASM_Instance@@V?$pool_allocator@U?$red_black_tree_node@U?$pair@HPEAUASM_Instance@@@ntl@@@ntl@@Vsolitary_buffer_allocator@2@@ntl@@U?$less@HH@3@@ntl@@XZ(this);
}

/*
==============
Ai_Asm::WriteEphemeralEventTable
==============
*/

void __fastcall Ai_Asm::WriteEphemeralEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_EphemeralEvent *eventTable)
{
  ?WriteEphemeralEventTable@Ai_Asm@@QEAAXPEAUMemoryFile@@PEAUASM_EphemeralEvent@@@Z(this, memFile, eventTable);
}

/*
==============
Ai_Asm::GetEphemeralEventTables
==============
*/

ASM_EphemeralTable *__fastcall Ai_Asm::GetEphemeralEventTables(Ai_Asm *this, ASM_Instance *pInst)
{
  return ?GetEphemeralEventTables@Ai_Asm@@UEBAPEAUASM_EphemeralTable@@PEAUASM_Instance@@@Z(this, pInst);
}

/*
==============
Ai_Asm::MyChanges_UpdateInstances
==============
*/

void __fastcall Ai_Asm::MyChanges_UpdateInstances(Ai_Asm *this)
{
  ?MyChanges_UpdateInstances@Ai_Asm@@QEAAXXZ(this);
}

/*
==============
Ai_Asm::FreeAllInstances
==============
*/

void __fastcall Ai_Asm::FreeAllInstances(Ai_Asm *this)
{
  ?FreeAllInstances@Ai_Asm@@QEAAXXZ(this);
}

/*
==============
Ai_Asm::InstanceMap_Init
==============
*/

void __fastcall Ai_Asm::InstanceMap_Init(Ai_Asm *this)
{
  ?InstanceMap_Init@Ai_Asm@@QEAAXXZ(this);
}

/*
==============
Ai_Asm::ReadEventTable
==============
*/

void __fastcall Ai_Asm::ReadEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_Event *eventTable)
{
  ?ReadEventTable@Ai_Asm@@QEAAXPEAUMemoryFile@@PEAUASM_Event@@@Z(this, memFile, eventTable);
}

/*
==============
Ai_Asm::GetInstance
==============
*/

ASM_Instance *__fastcall Ai_Asm::GetInstance(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  return ?GetInstance@Ai_Asm@@UEAAPEAUASM_Instance@@PEBUASM_Context@@H@Z(this, context, entNum);
}

/*
==============
Ai_Asm::FreeAllInstances
==============
*/
void Ai_Asm::FreeAllInstances(Ai_Asm *this)
{
  ntl::red_black_tree_node_base *mp_left; 

  while ( Ai_Asm::ms_asmInstanceMap.m_size )
  {
    mp_left = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left;
    if ( !Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", LODWORD(Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left) + 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    Ai_Asm::FreeInstance(this, NULL, (int)mp_left[1].mp_parent->mp_parent);
  }
}

/*
==============
Ai_Asm::GetEphemeralEventTables
==============
*/
ASM_EphemeralTable *Ai_Asm::GetEphemeralEventTables(Ai_Asm *this, ASM_Instance *pInst)
{
  return Ai_Asm::ms_aiASMEphemeralEventTables;
}

/*
==============
Ai_Asm::GetInstance
==============
*/
ntl::red_black_tree_node_base *Ai_Asm::GetInstance(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  if ( !Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent )
    goto LABEL_17;
  do
  {
    if ( mp_parent[1].m_color < entNum )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &Ai_Asm::ms_asmInstanceMap.m_endNodeBase || entNum < p_m_endNodeBase[1].m_color )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 286, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find ASM instance for ent num %d.", entNum) )
      __debugbreak();
    return 0i64;
  }
  else
  {
    if ( !BYTE1(p_m_endNodeBase[1].mp_parent[5].mp_right) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 290, ASSERT_TYPE_ASSERT, "(iter->second->m_bInUse)", (const char *)&queryFormat, "iter->second->m_bInUse") )
      __debugbreak();
    return p_m_endNodeBase[1].mp_parent;
  }
}

/*
==============
Ai_Asm::GetInstanceByAssetName
==============
*/
ASM_Instance *Ai_Asm::GetInstanceByAssetName(Ai_Asm *this, const ASM_Context *context, int entNum, scr_string_t asmName)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  const ASM_Instance *Subtree; 
  __int64 v10; 

  if ( !asmName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 328, ASSERT_TYPE_ASSERT, "(asmName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "asmName != NULL_SCR_STRING") )
    __debugbreak();
  mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  if ( !Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent )
    goto LABEL_18;
  do
  {
    if ( mp_parent[1].m_color < entNum )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &Ai_Asm::ms_asmInstanceMap.m_endNodeBase || entNum < p_m_endNodeBase[1].m_color )
  {
LABEL_18:
    LODWORD(v10) = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 286, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find ASM instance for ent num %d.", v10) )
      __debugbreak();
  }
  else
  {
    if ( !BYTE1(p_m_endNodeBase[1].mp_parent[5].mp_right) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 290, ASSERT_TYPE_ASSERT, "(iter->second->m_bInUse)", (const char *)&queryFormat, "iter->second->m_bInUse") )
      __debugbreak();
    Subtree = (const ASM_Instance *)p_m_endNodeBase[1].mp_parent;
    if ( Subtree )
    {
      if ( Subtree->m_pASM->m_Name == asmName )
        return (ASM_Instance *)Subtree;
      Subtree = Common_Asm::Utils::GetSubtree(Subtree, asmName);
      if ( Subtree )
        return (ASM_Instance *)Subtree;
    }
  }
  return 0i64;
}

/*
==============
Ai_Asm::GetInstanceIfExists
==============
*/
ntl::red_black_tree_node_base *Ai_Asm::GetInstanceIfExists(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  if ( !Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( mp_parent[1].m_color < entNum )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &Ai_Asm::ms_asmInstanceMap.m_endNodeBase || entNum < p_m_endNodeBase[1].m_color )
    return 0i64;
  if ( !BYTE1(p_m_endNodeBase[1].mp_parent[5].mp_right) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 305, ASSERT_TYPE_ASSERT, "(iter->second->m_bInUse)", (const char *)&queryFormat, "iter->second->m_bInUse") )
    __debugbreak();
  return p_m_endNodeBase[1].mp_parent;
}

/*
==============
Ai_Asm::GetInstanceIfExists
==============
*/
ntl::red_black_tree_node_base *Ai_Asm::GetInstanceIfExists(Ai_Asm *this, const ASM_Context *context, int entNum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  if ( !Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent )
    return 0i64;
  do
  {
    if ( mp_parent[1].m_color < entNum )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  while ( mp_parent );
  if ( p_m_endNodeBase == &Ai_Asm::ms_asmInstanceMap.m_endNodeBase || entNum < p_m_endNodeBase[1].m_color )
    return 0i64;
  if ( !BYTE1(p_m_endNodeBase[1].mp_parent[5].mp_right) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 320, ASSERT_TYPE_ASSERT, "(iter->second->m_bInUse)", (const char *)&queryFormat, "iter->second->m_bInUse") )
    __debugbreak();
  return p_m_endNodeBase[1].mp_parent;
}

/*
==============
Ai_Asm::GetInstanceMap
==============
*/
ntl::map<int,ASM_Instance *,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::less<int,int> > *Ai_Asm::GetInstanceMap(Ai_Asm *this)
{
  return &Ai_Asm::ms_asmInstanceMap;
}

/*
==============
Ai_Asm::InstanceAllocate
==============
*/
ASM_Instance *Ai_Asm::InstanceAllocate(Ai_Asm *this, const ASM_Context *context)
{
  __int64 m_MaxInstances; 
  int v3; 
  __int64 v4; 
  bool *p_m_bInUse; 
  ASM_Instance *v7; 

  m_MaxInstances = this->m_MaxInstances;
  v3 = 0;
  if ( m_MaxInstances <= 0 )
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 49, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find unused AI_ASM_Instance!") )
      __debugbreak();
    return 0i64;
  }
  else
  {
    v4 = 0i64;
    p_m_bInUse = &Ai_Asm::ms_aiASMInstances[0].m_bInUse;
    while ( *p_m_bInUse )
    {
      ++v3;
      ++v4;
      p_m_bInUse += 192;
      if ( v4 >= m_MaxInstances )
        goto LABEL_5;
    }
    v7 = &Ai_Asm::ms_aiASMInstances[v3];
    ASM_Instance::InitInstance(v7);
    return v7;
  }
}

/*
==============
Ai_Asm::InstanceMap_Init
==============
*/
void Ai_Asm::InstanceMap_Init(Ai_Asm *this)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v5; 
  ntl::red_black_tree_node_base *v6; 
  ntl::red_black_tree_node_base *v7; 
  __int128 v8; 

  if ( Ai_Asm::ms_asmInstanceMap.m_size )
  {
    mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
    if ( Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int>>::erase_tree(&Ai_Asm::ms_asmInstanceMap, (ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> > *)mp_parent->mp_right);
        mp_left = mp_parent->mp_left;
        *(_QWORD *)&mp_parent->m_color = Ai_Asm::ms_asmInstanceMap.m_freelist.m_head.mp_next;
        Ai_Asm::ms_asmInstanceMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
        mp_parent = mp_left;
      }
      while ( mp_left );
    }
    Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent = NULL;
    Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
    Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_right = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
    Ai_Asm::ms_asmInstanceMap.m_size = 0i64;
  }
  if ( Ai_Asm::ms_asmInstanceMap.ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> > >,48>::m_data.m_buffer && Ai_Asm::ms_asmInstanceMap.ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> > >,48>::m_data.m_buffer != (ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> > *)Ai_Asm::ms_asmInstanceMap.ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer && Ai_Asm::ms_asmInstanceMap.ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )", -2i64) )
    __debugbreak();
  Ai_Asm::ms_asmInstanceMap.m_size = 0i64;
  Ai_Asm::ms_asmInstanceMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent = NULL;
  Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_right = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  Ai_Asm::ms_asmInstanceMap.ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer = (char *)Ai_Asm::ms_asmInstanceMapBuffer;
  Ai_Asm::ms_asmInstanceMap.ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size = 12288i64;
  *(_QWORD *)&v8 = Ai_Asm::ms_asmInstanceMapBuffer;
  *((_QWORD *)&v8 + 1) = 256i64;
  __asm
  {
    vmovups xmm0, [rsp+58h+var_20]
    vmovups xmmword ptr cs:?ms_asmInstanceMap@Ai_Asm@@0V?$map@HPEAUASM_Instance@@V?$pool_allocator@U?$red_black_tree_node@U?$pair@HPEAUASM_Instance@@@ntl@@@ntl@@Vsolitary_buffer_allocator@2@@ntl@@U?$less@HH@3@@ntl@@A.baseclass_0.baseclass_0.baseclass_0.baseclass_0.m_data.m_buffer, xmm0; ntl::map<int,ASM_Instance *,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *>>,ntl::solitary_buffer_allocator>,ntl::less<int,int>> Ai_Asm::ms_asmInstanceMap
  }
  p_m_freelist = &Ai_Asm::ms_asmInstanceMap.m_freelist;
  v5 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&VFX_RAY_CAST_REST_VELOCITY_SQ_FLOAT4_238;
  do
  {
    v5 -= 6;
    v5->mp_next = &p_m_freelist->m_head;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v5;
  }
  while ( v5 > (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)Ai_Asm::ms_asmInstanceMapBuffer );
  Ai_Asm::ms_asmInstanceMap.m_freelist.m_head.mp_next = v5;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  if ( Ai_Asm::ms_asmInstanceMap.m_size )
  {
    v6 = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
    if ( Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int>>::erase_tree(&Ai_Asm::ms_asmInstanceMap, (ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> > *)v6->mp_right);
        v7 = v6->mp_left;
        *(_QWORD *)&v6->m_color = Ai_Asm::ms_asmInstanceMap.m_freelist.m_head.mp_next;
        Ai_Asm::ms_asmInstanceMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v6;
        v6 = v7;
      }
      while ( v7 );
    }
    Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent = NULL;
    Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
    Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_right = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
    Ai_Asm::ms_asmInstanceMap.m_size = 0i64;
  }
}

/*
==============
Ai_Asm::MyChanges_UpdateInstances
==============
*/
void Ai_Asm::MyChanges_UpdateInstances(Ai_Asm *this)
{
  ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *AssetMap; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *v5; 
  __int64 v6; 
  ntl::red_black_tree_node_base::ENodeColor v7; 
  ntl::red_black_tree_node_base *v8; 

  AssetMap = Ai_Asm::GetAssetMap(this);
  if ( !AssetMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 376, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  for ( i = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left; i != &Ai_Asm::ms_asmInstanceMap.m_endNodeBase; i = ntl::red_black_tree_node_base::get_next(i) )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    mp_parent = i[1].mp_parent;
    p_m_endNodeBase = &AssetMap->m_endNodeBase;
    v5 = AssetMap->m_endNodeBase.mp_parent;
    v6 = *(_QWORD *)&mp_parent->m_color;
    if ( v5 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      do
      {
        if ( v5[1].m_color < v7 )
        {
          v5 = v5->mp_right;
        }
        else
        {
          p_m_endNodeBase = v5;
          v5 = v5->mp_left;
        }
      }
      while ( v5 );
      if ( p_m_endNodeBase != &AssetMap->m_endNodeBase && v7 >= p_m_endNodeBase[1].m_color )
      {
        v8 = p_m_endNodeBase[1].mp_parent;
        if ( (ntl::red_black_tree_node_base *)v6 != v8 )
          *(_QWORD *)&mp_parent->m_color = v8;
      }
    }
  }
}

/*
==============
Ai_Asm::ReadEphemeralEventTable
==============
*/
void Ai_Asm::ReadEphemeralEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_EphemeralEvent *eventTable)
{
  scr_string_t *p_m_Name; 
  __int64 v5; 
  const char *CString; 
  scr_string_t String; 
  const char *v8; 
  scr_string_t v9; 
  int v10[10]; 
  int p; 

  p_m_Name = &eventTable->m_Name;
  v5 = 6i64;
  do
  {
    if ( *((_DWORD *)p_m_Name - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 94, ASSERT_TYPE_ASSERT, "(eventTable[iEvent].m_Tag == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventTable[iEvent].m_Tag == NULL_SCR_STRING") )
      __debugbreak();
    if ( *p_m_Name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 95, ASSERT_TYPE_ASSERT, "(eventTable[iEvent].m_Name == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventTable[iEvent].m_Name == NULL_SCR_STRING") )
      __debugbreak();
    CString = MemFile_ReadCString(memFile);
    if ( CString && *CString )
      String = SL_GetString(CString, 0);
    else
      String = 0;
    *((_DWORD *)p_m_Name - 1) = String;
    v8 = MemFile_ReadCString(memFile);
    if ( v8 && *v8 )
      v9 = SL_GetString(v8, 0);
    else
      v9 = 0;
    *p_m_Name = v9;
    MemFile_ReadData(memFile, 4ui64, &p);
    *((_DWORD *)p_m_Name + 1) = p;
    MemFile_ReadData(memFile, 4ui64, v10);
    p_m_Name[2] = (scr_string_t)v10[0];
    p_m_Name += 4;
    --v5;
  }
  while ( v5 );
}

/*
==============
Ai_Asm::ReadEventTable
==============
*/
void Ai_Asm::ReadEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_Event *eventTable)
{
  __int64 v5; 
  const char *CString; 
  scr_string_t String; 
  int v8[10]; 
  int p; 

  v5 = 8i64;
  do
  {
    if ( eventTable->m_Name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 119, ASSERT_TYPE_ASSERT, "(eventTable[iEvent].m_Name == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventTable[iEvent].m_Name == NULL_SCR_STRING") )
      __debugbreak();
    CString = MemFile_ReadCString(memFile);
    if ( CString && *CString )
      String = SL_GetString(CString, 0);
    else
      String = 0;
    eventTable->m_Name = String;
    MemFile_ReadData(memFile, 4ui64, &p);
    eventTable->m_ParamID = p;
    MemFile_ReadData(memFile, 4ui64, v8);
    eventTable->m_Time = v8[0];
    ++eventTable;
    --v5;
  }
  while ( v5 );
}

/*
==============
Ai_Asm::ReadInstance
==============
*/
ASM_Instance *Ai_Asm::ReadInstance(Ai_Asm *this, MemoryFile *memFile)
{
  __int64 m_MaxInstances; 
  int v5; 
  __int64 v6; 
  bool *p_m_bInUse; 
  ASM_Instance *v8; 
  const char *CString; 
  const char *v10; 
  scr_string_t String; 
  ntl::fixed_map<enum scr_string_t,ASM *,32,ntl::less<enum scr_string_t,enum scr_string_t> > *AssetMap; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  int v15; 
  int v16; 
  ASM_Instance **m_Subtrees; 
  __int64 v18; 
  int *p_m_Time; 
  const char *v20; 
  scr_string_t v21; 
  unsigned __int8 v22; 
  __int64 v23; 
  int *p_m_ParamID; 
  const char *v25; 
  scr_string_t v26; 
  const char *v27; 
  scr_string_t v28; 
  __int64 v30; 
  __int64 v31; 
  int p; 
  int v33; 
  unsigned int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39[15]; 
  bool v40; 
  unsigned __int8 v41; 
  ScriptInstanceType v42; 

  m_MaxInstances = this->m_MaxInstances;
  v5 = 0;
  if ( m_MaxInstances <= 0 )
  {
LABEL_5:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 49, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to find unused AI_ASM_Instance!") )
      __debugbreak();
    v8 = NULL;
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 180, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
      __debugbreak();
    goto LABEL_10;
  }
  v6 = 0i64;
  p_m_bInUse = &Ai_Asm::ms_aiASMInstances[0].m_bInUse;
  while ( *p_m_bInUse )
  {
    ++v5;
    ++v6;
    p_m_bInUse += 192;
    if ( v6 >= m_MaxInstances )
      goto LABEL_5;
  }
  v8 = &Ai_Asm::ms_aiASMInstances[v5];
  ASM_Instance::InitInstance(v8);
  if ( !v8 )
    goto LABEL_8;
LABEL_10:
  CString = MemFile_ReadCString(memFile);
  v10 = CString;
  if ( CString && *CString )
    String = SL_GetString(CString, 0);
  else
    String = 0;
  AssetMap = Ai_Asm::GetAssetMap(this);
  if ( !AssetMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 195, ASSERT_TYPE_ASSERT, "(asmMap)", (const char *)&queryFormat, "asmMap") )
    __debugbreak();
  mp_parent = AssetMap->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &AssetMap->m_endNodeBase;
  while ( mp_parent )
  {
    if ( mp_parent[1].m_color < String )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( p_m_endNodeBase != &AssetMap->m_endNodeBase )
  {
    if ( String >= p_m_endNodeBase[1].m_color )
      goto LABEL_29;
    p_m_endNodeBase = &AssetMap->m_endNodeBase;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 198, ASSERT_TYPE_ASSERT, "(asmIter != asmMap->end())", "%s\n\tUnable to find ASM %s among loaded assets.", "asmIter != asmMap->end()", v10) )
    __debugbreak();
LABEL_29:
  if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  v8->m_pASM = (const ASM *)p_m_endNodeBase[1].mp_parent;
  if ( String )
    SL_RemoveRefToString(String);
  MemFile_ReadData(memFile, 4ui64, &p);
  v8->m_EntNum = p;
  MemFile_ReadData(memFile, 4ui64, &v33);
  v8->m_CurState = v33;
  MemFile_ReadData(memFile, 1ui64, &v40);
  v8->m_bPrimary = v40;
  MemFile_ReadData(memFile, 4ui64, &v34);
  v8->m_EventParamTableOffset = v34;
  MemFile_ReadData(memFile, 4ui64, &v35);
  v15 = v35;
  v16 = 0;
  v8->m_NumSubtrees = v35;
  if ( v15 > 0 )
  {
    m_Subtrees = v8->m_Subtrees;
    do
    {
      *m_Subtrees++ = Ai_Asm::ReadInstance(this, memFile);
      ++v16;
    }
    while ( v16 < v8->m_NumSubtrees );
  }
  v18 = 8i64;
  p_m_Time = &v8->m_EventTable[0].m_Time;
  do
  {
    if ( *(p_m_Time - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 119, ASSERT_TYPE_ASSERT, "(eventTable[iEvent].m_Name == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventTable[iEvent].m_Name == NULL_SCR_STRING") )
      __debugbreak();
    v20 = MemFile_ReadCString(memFile);
    if ( v20 && *v20 )
      v21 = SL_GetString(v20, 0);
    else
      v21 = 0;
    *(p_m_Time - 2) = v21;
    MemFile_ReadData(memFile, 4ui64, &v36);
    *(p_m_Time - 1) = v36;
    MemFile_ReadData(memFile, 4ui64, &v37);
    *p_m_Time = v37;
    p_m_Time += 3;
    --v18;
  }
  while ( v18 );
  MemFile_ReadData(memFile, 1ui64, &v41);
  v22 = v41;
  v8->m_EphemeralTableIndex = v41;
  if ( v22 != 0xFF )
  {
    if ( (unsigned int)v22 >= this->m_MaxEphemeralTables )
    {
      LODWORD(v31) = this->m_MaxEphemeralTables;
      LODWORD(v30) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( pInst->m_EphemeralTableIndex ) < (unsigned)( m_MaxEphemeralTables )", "pInst->m_EphemeralTableIndex doesn't index m_MaxEphemeralTables\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    if ( Ai_Asm::ms_aiASMEphemeralEventTables[v8->m_EphemeralTableIndex].m_bInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 227, ASSERT_TYPE_ASSERT, "(!ephemeralEventTables[pInst->m_EphemeralTableIndex].m_bInUse)", (const char *)&queryFormat, "!ephemeralEventTables[pInst->m_EphemeralTableIndex].m_bInUse") )
      __debugbreak();
    v23 = 6i64;
    Ai_Asm::ms_aiASMEphemeralEventTables[v8->m_EphemeralTableIndex].m_bInUse = 1;
    p_m_ParamID = &Ai_Asm::ms_aiASMEphemeralEventTables[v8->m_EphemeralTableIndex].m_EventTable[0].m_ParamID;
    do
    {
      if ( *(p_m_ParamID - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 94, ASSERT_TYPE_ASSERT, "(eventTable[iEvent].m_Tag == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventTable[iEvent].m_Tag == NULL_SCR_STRING") )
        __debugbreak();
      if ( *(p_m_ParamID - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 95, ASSERT_TYPE_ASSERT, "(eventTable[iEvent].m_Name == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "eventTable[iEvent].m_Name == NULL_SCR_STRING") )
        __debugbreak();
      v25 = MemFile_ReadCString(memFile);
      if ( v25 && *v25 )
        v26 = SL_GetString(v25, 0);
      else
        v26 = 0;
      *(p_m_ParamID - 2) = v26;
      v27 = MemFile_ReadCString(memFile);
      if ( v27 && *v27 )
        v28 = SL_GetString(v27, 0);
      else
        v28 = 0;
      *(p_m_ParamID - 1) = v28;
      MemFile_ReadData(memFile, 4ui64, &v38);
      *p_m_ParamID = v38;
      MemFile_ReadData(memFile, 4ui64, v39);
      p_m_ParamID[1] = v39[0];
      p_m_ParamID += 4;
      --v23;
    }
    while ( v23 );
  }
  MemFile_ReadData(memFile, 1ui64, &v42);
  v8->m_pScrContext = ScriptContext_GetFromInstance(v42);
  return v8;
}

/*
==============
Ai_Asm::ReadInstances
==============
*/
void Ai_Asm::ReadInstances(Ai_Asm *this, MemoryFile *memFile)
{
  __int64 mp_node_low; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v6; 
  int m_EntNum; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v11; 
  ntl::pair<int,ASM_Instance *> r_element; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::pair<int,ASM_Instance *> *,ntl::pair<int,ASM_Instance *> &> p; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::pair<int,ASM_Instance *> *,ntl::pair<int,ASM_Instance *> &> result; 

  if ( Ai_Asm::ms_asmInstanceMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 246, ASSERT_TYPE_ASSERT, "(instanceMap->size() == 0)", (const char *)&queryFormat, "instanceMap->size() == 0") )
    __debugbreak();
  Ai_Asm::ValidateEphemeralEventTablesNotInUse(this);
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( SLODWORD(p.mp_node) > 0 )
  {
    mp_node_low = LODWORD(p.mp_node);
    while ( 1 )
    {
      r_element.second = Ai_Asm::ReadInstance(this, memFile);
      p_m_endNodeBase = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
      v6 = 1;
      m_EntNum = r_element.second->m_EntNum;
      mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
      r_element.first = m_EntNum;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v6 = m_EntNum < mp_parent[1].m_color;
        if ( m_EntNum >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( !v6 )
        goto LABEL_26;
      if ( p_m_endNodeBase != Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left )
        break;
      ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int>>::insert_node(&Ai_Asm::ms_asmInstanceMap, &p, p_m_endNodeBase, &r_element, 1, 0);
LABEL_31:
      if ( !--mp_node_low )
        return;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node", *(_QWORD *)&r_element.first, r_element.second) )
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
            v11 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v11 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_26:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < m_EntNum )
      ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int>>::insert_node(&Ai_Asm::ms_asmInstanceMap, &result, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_31;
  }
}

/*
==============
Ai_Asm::RemoveInstance
==============
*/
void Ai_Asm::RemoveInstance(Ai_Asm *this, int entNum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  if ( Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < entNum )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        p_m_endNodeBase = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( p_m_endNodeBase != &Ai_Asm::ms_asmInstanceMap.m_endNodeBase && entNum >= p_m_endNodeBase[1].m_color )
    {
      if ( !Ai_Asm::ms_asmInstanceMap.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 521, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 100, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      ntl::red_black_tree_node_base::get_next(p_m_endNodeBase);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 524, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      if ( p_m_endNodeBase == &Ai_Asm::ms_asmInstanceMap.m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 527, ASSERT_TYPE_ASSERT, "( p_node != &m_endNodeBase )", (const char *)&queryFormat, "p_node != &m_endNodeBase") )
        __debugbreak();
      ntl::red_black_tree_node_base::rebalance_for_erase(p_m_endNodeBase, &Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent, &Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left, &Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_right);
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
        __debugbreak();
      *(_QWORD *)&p_m_endNodeBase->m_color = Ai_Asm::ms_asmInstanceMap.m_freelist.m_head.mp_next;
      --Ai_Asm::ms_asmInstanceMap.m_size;
      Ai_Asm::ms_asmInstanceMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_endNodeBase;
    }
  }
}

/*
==============
Ai_Asm::StoreInstance
==============
*/
void Ai_Asm::StoreInstance(Ai_Asm *this, ASM_Instance *pInst, int entNum)
{
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v7; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v10; 
  ntl::pair<int,ASM_Instance *> r_element; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *> >,ntl::pair<int,ASM_Instance *> *,ntl::pair<int,ASM_Instance *> &> result; 

  if ( !pInst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_asm_instance.cpp", 351, ASSERT_TYPE_ASSERT, "(pInst)", (const char *)&queryFormat, "pInst") )
    __debugbreak();
  mp_parent = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &Ai_Asm::ms_asmInstanceMap.m_endNodeBase;
  r_element.first = entNum;
  v7 = 1;
  r_element.second = pInst;
  while ( mp_parent )
  {
    p_m_endNodeBase = mp_parent;
    v7 = entNum < mp_parent[1].m_color;
    if ( entNum >= mp_parent[1].m_color )
      mp_parent = mp_parent->mp_right;
    else
      mp_parent = mp_parent->mp_left;
  }
  mp_left = p_m_endNodeBase;
  if ( v7 )
  {
    if ( p_m_endNodeBase == Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left )
    {
      ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int>>::insert_node(&Ai_Asm::ms_asmInstanceMap, &result, p_m_endNodeBase, &r_element, 1, 0);
      return;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node", *(_QWORD *)&r_element.first, r_element.second) )
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
            v10 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v10 == mp_left->mp_left );
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
  if ( mp_left[1].m_color < entNum )
    ntl::red_black_tree<int,ntl::pair<int,ASM_Instance *>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<int,ASM_Instance *>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<int,ASM_Instance *>,ntl::less<int,int>>::insert_node(&Ai_Asm::ms_asmInstanceMap, &result, p_m_endNodeBase, &r_element, 0, 0);
}

/*
==============
Ai_Asm::WriteEphemeralEventTable
==============
*/
void Ai_Asm::WriteEphemeralEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_EphemeralEvent *eventTable)
{
  int *p_m_ParamID; 
  __int64 v5; 
  scr_string_t v6; 
  const char *v7; 
  scr_string_t v8; 
  const char *v9; 
  int p; 

  p_m_ParamID = &eventTable->m_ParamID;
  v5 = 6i64;
  do
  {
    v6 = *(p_m_ParamID - 2);
    if ( v6 )
      v7 = SL_ConvertToString(v6);
    else
      v7 = (char *)&queryFormat.fmt + 3;
    MemFile_WriteCString(memFile, v7);
    v8 = *(p_m_ParamID - 1);
    if ( v8 )
      v9 = SL_ConvertToString(v8);
    else
      v9 = (char *)&queryFormat.fmt + 3;
    MemFile_WriteCString(memFile, v9);
    p = *p_m_ParamID;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = p_m_ParamID[1];
    MemFile_WriteData(memFile, 4ui64, &p);
    p_m_ParamID += 4;
    --v5;
  }
  while ( v5 );
}

/*
==============
Ai_Asm::WriteEventTable
==============
*/
void Ai_Asm::WriteEventTable(Ai_Asm *this, MemoryFile *memFile, ASM_Event *eventTable)
{
  int *p_m_Time; 
  __int64 v5; 
  scr_string_t v6; 
  const char *v7; 
  int p; 

  p_m_Time = &eventTable->m_Time;
  v5 = 8i64;
  do
  {
    v6 = *(p_m_Time - 2);
    if ( v6 )
      v7 = SL_ConvertToString(v6);
    else
      v7 = (char *)&queryFormat.fmt + 3;
    MemFile_WriteCString(memFile, v7);
    p = *(p_m_Time - 1);
    MemFile_WriteData(memFile, 4ui64, &p);
    p = *p_m_Time;
    MemFile_WriteData(memFile, 4ui64, &p);
    p_m_Time += 3;
    --v5;
  }
  while ( v5 );
}

/*
==============
Ai_Asm::WriteInstance
==============
*/
void Ai_Asm::WriteInstance(Ai_Asm *this, MemoryFile *memFile, ASM_Instance *pInst)
{
  int v6; 
  ASM_Instance **m_Subtrees; 
  int *p_m_Time; 
  __int64 v9; 
  scr_string_t v10; 
  const char *v11; 
  unsigned __int8 m_EphemeralTableIndex; 
  __int64 v13; 
  int *p_m_ParamID; 
  scr_string_t v15; 
  const char *v16; 
  scr_string_t v17; 
  const char *v18; 
  unsigned int p; 

  MemFile_WriteCString(memFile, pInst->m_pASM->m_szName);
  p = pInst->m_EntNum;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = pInst->m_CurState;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = pInst->m_bPrimary;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = pInst->m_EventParamTableOffset;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = pInst->m_NumSubtrees;
  MemFile_WriteData(memFile, 4ui64, &p);
  v6 = 0;
  if ( pInst->m_NumSubtrees > 0 )
  {
    m_Subtrees = pInst->m_Subtrees;
    do
    {
      Ai_Asm::WriteInstance(this, memFile, *m_Subtrees);
      ++v6;
      ++m_Subtrees;
    }
    while ( v6 < pInst->m_NumSubtrees );
  }
  p_m_Time = &pInst->m_EventTable[0].m_Time;
  v9 = 8i64;
  do
  {
    v10 = *(p_m_Time - 2);
    if ( v10 )
      v11 = SL_ConvertToString(v10);
    else
      v11 = (char *)&queryFormat.fmt + 3;
    MemFile_WriteCString(memFile, v11);
    p = *(p_m_Time - 1);
    MemFile_WriteData(memFile, 4ui64, &p);
    p = *p_m_Time;
    MemFile_WriteData(memFile, 4ui64, &p);
    p_m_Time += 3;
    --v9;
  }
  while ( v9 );
  LOBYTE(p) = pInst->m_EphemeralTableIndex;
  MemFile_WriteData(memFile, 1ui64, &p);
  m_EphemeralTableIndex = pInst->m_EphemeralTableIndex;
  if ( m_EphemeralTableIndex != 0xFF )
  {
    v13 = 6i64;
    p_m_ParamID = &Ai_Asm::ms_aiASMEphemeralEventTables[m_EphemeralTableIndex].m_EventTable[0].m_ParamID;
    do
    {
      v15 = *(p_m_ParamID - 2);
      if ( v15 )
        v16 = SL_ConvertToString(v15);
      else
        v16 = (char *)&queryFormat.fmt + 3;
      MemFile_WriteCString(memFile, v16);
      v17 = *(p_m_ParamID - 1);
      if ( v17 )
        v18 = SL_ConvertToString(v17);
      else
        v18 = (char *)&queryFormat.fmt + 3;
      MemFile_WriteCString(memFile, v18);
      p = *p_m_ParamID;
      MemFile_WriteData(memFile, 4ui64, &p);
      p = p_m_ParamID[1];
      MemFile_WriteData(memFile, 4ui64, &p);
      p_m_ParamID += 4;
      --v13;
    }
    while ( v13 );
  }
  LOBYTE(p) = ScriptContext_GetInstance(pInst->m_pScrContext);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
Ai_Asm::WriteInstances
==============
*/
void Ai_Asm::WriteInstances(Ai_Asm *this, MemoryFile *memFile)
{
  ntl::red_black_tree_node_base *i; 
  int p; 

  p = Ai_Asm::ms_asmInstanceMap.m_size;
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( i = Ai_Asm::ms_asmInstanceMap.m_endNodeBase.mp_left; i != &Ai_Asm::ms_asmInstanceMap.m_endNodeBase; i = (ntl::red_black_tree_node_base *)ntl::red_black_tree_node_base::get_next(i) )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    Ai_Asm::WriteInstance(this, memFile, (ASM_Instance *)i[1].mp_parent);
  }
}

