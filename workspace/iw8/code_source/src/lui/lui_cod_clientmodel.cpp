/*
==============
LUI_CoD_ClientModels_FindAnims
==============
*/

void __fastcall LUI_CoD_ClientModels_FindAnims(int animUser)
{
  ?LUI_CoD_ClientModels_FindAnims@@YAXH@Z(animUser);
}

/*
==============
LUI_CoD_ClientModels_FindAnimTrees
==============
*/

void __fastcall LUI_CoD_ClientModels_FindAnimTrees(int animUser)
{
  ?LUI_CoD_ClientModels_FindAnimTrees@@YAXH@Z(animUser);
}

/*
==============
LUI_CoD_ClientModelsInitialized
==============
*/

void LUI_CoD_ClientModelsInitialized(void)
{
  ?LUI_CoD_ClientModelsInitialized@@YAXXZ();
}

/*
==============
LUI_CoD_RegisterClientModelFunctions
==============
*/

void __fastcall LUI_CoD_RegisterClientModelFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterClientModelFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCallIsClientModelInitialized
==============
*/
__int64 LUI_CoD_LuaCallIsClientModelInitialized(lua_State *luaVM)
{
  bool IsClientInitialized; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: ClientModel.IsInitialized()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    IsClientInitialized = CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0);
    j_lua_pushboolean(luaVM, IsClientInitialized);
    v3 = 1;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v4);
  }
  return v3;
}

/*
==============
LUI_CoD_LuaCallSetClientModelModifiable
==============
*/
__int64 LUI_CoD_LuaCallSetClientModelModifiable(lua_State *luaVM)
{
  double v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetModifiable( clientModelIndex, modifiable )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 && CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) && Com_FrontEnd_IsInFrontEnd() )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2);
    CG_ClientModel_SetModifiable(LOCAL_CLIENT_0, (int)*(float *)&v2, v3 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetClientModelIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetClientModelIndex(lua_State *luaVM)
{
  unsigned int v2; 
  const char *v3; 
  scr_string_t String; 
  unsigned int v5; 
  unsigned int outIndex; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ClientModel.GetIndex( clientModelName )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) && CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) && Com_FrontEnd_IsInFrontEnd() && (v3 = j_lua_tolstring(luaVM, 1, NULL), (String = SL_FindString(v3)) != 0) && CG_ClientModel_GetIndex(LOCAL_CLIENT_0, String, &outIndex) )
    j_lua_pushinteger(luaVM, outIndex);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetClientModel
==============
*/
__int64 LUI_CoD_LuaCall_SetClientModel(lua_State *luaVM)
{
  double v2; 
  const char *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetModel( clientModelIndex, modelName )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) && Com_FrontEnd_IsInFrontEnd() )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    CL_UI_ClientModel_SetClientModel((int)*(float *)&v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetClientModelPatchOrigin
==============
*/
__int64 LUI_CoD_LuaCall_SetClientModelPatchOrigin(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  unsigned int v5; 
  double v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetModelPatchOrigin( attachToClientModelIndex, clientModelIndex, 0 )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) && Com_FrontEnd_IsInFrontEnd() )
  {
    v2 = lui_tonumber32(luaVM, 1);
    v3 = (int)*(float *)&v2;
    v4 = lui_tonumber32(luaVM, 2);
    v5 = (int)*(float *)&v4;
    v6 = lui_tonumber32(luaVM, 3);
    if ( (unsigned int)(int)*(float *)&v6 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 324, ASSERT_TYPE_ASSERT, "(tagIndex < 2)", (const char *)&queryFormat, "tagIndex < PATCH_TAG_MAX_COUNT") )
      __debugbreak();
    CL_UI_ClientModel_SetClientModelPatchOrigin(v3, v5, *defaultPatchTags[*(float *)&v6]);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetClientModelAnimation
==============
*/
__int64 LUI_CoD_LuaCall_SetClientModelAnimation(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_SetClientModelAnimation_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetRequiredModifiables
==============
*/
__int64 LUI_CoD_LuaCall_SetRequiredModifiables(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_SetRequiredModifiables_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_ClientModelsInitialized
==============
*/
void LUI_CoD_ClientModelsInitialized(void)
{
  unsigned int v0; 
  unsigned int *v1; 
  bool v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int clientModelIndices[128]; 

  LUI_EnterCriticalSection("LUI_CoD_ClientModelsInitialized");
  j_lua_getfield(LUI_luaVM, -10002, "CLIENT_MODEL");
  j_lua_getfield(LUI_luaVM, -1, "UpdateModifiablesByMode");
  j_lua_remove(LUI_luaVM, -2);
  if ( j_lua_pcall(LUI_luaVM, 0, 0, 0) )
    LUI_ReportError("Error updating modifiables\n", LUI_luaVM);
  LUI_LeaveCriticalSection();
  v0 = 0;
  if ( s_requiredModifiables.m_size )
  {
    v1 = clientModelIndices;
    do
    {
      if ( v0 >= 0x80 )
      {
        LODWORD(v4) = 128;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 102, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelCount ) < (unsigned)( ( sizeof( *array_counter( clientModelIndices ) ) + 0 ) )", "clientModelCount doesn't index ARRAY_COUNT( clientModelIndices )\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( !s_requiredModifiables.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 133, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
        __debugbreak();
      v2 = s_requiredModifiables.m_size == 0;
      *v1 = *(_DWORD *)s_requiredModifiables.m_data.m_buffer;
      if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
        __debugbreak();
      ++v0;
      ++v1;
      --s_requiredModifiables.m_size;
    }
    while ( s_requiredModifiables.m_size );
  }
  CG_ClientModel_SetRequiredModifiables(LOCAL_CLIENT_0, clientModelIndices, v0);
}

/*
==============
LUI_CoD_ClientModels_FindAnimTrees
==============
*/
void LUI_CoD_ClientModels_FindAnimTrees(int animUser)
{
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  ntl::fixed_map<unsigned int,int,1,ntl::less<unsigned int,unsigned int> > *v4; 
  scrContext_t *v5; 
  scr_animtree_t v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v13; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v15; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v18; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  double v21; 
  ntl::red_black_tree_node_base *mp_right; 
  __m256i v23; 
  ntl::pair<unsigned int,int> r_element; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,int> >,ntl::pair<unsigned int,int> *,ntl::pair<unsigned int,int> &> result; 

  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    p_m_freelist = &animTreeIndexMap.m_freelist;
    v4 = &animTreeIndexMap;
    do
    {
      *(_QWORD *)v4->m_data.m_buffer = p_m_freelist;
      p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v4;
      v4 = (ntl::fixed_map<unsigned int,int,1,ntl::less<unsigned int,unsigned int> > *)((char *)v4 - 40);
    }
    while ( &v4->m_freelist > (ntl::internal::pool_allocator_freelist<40> *)&animTreeIndexMap );
    animTreeIndexMap.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
    if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    animTreeIndexMap.m_size = 0i64;
    animTreeIndexMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
    animTreeIndexMap.m_endNodeBase.mp_parent = NULL;
    animTreeIndexMap.m_endNodeBase.mp_left = &animTreeIndexMap.m_endNodeBase;
    animTreeIndexMap.m_endNodeBase.mp_right = &animTreeIndexMap.m_endNodeBase;
    v5 = ScriptContext_GetFromAnimUser(animUser);
    v6.anims = Scr_FindAnimTree(v5, clientModelAnimationTrees[0]).anims;
    v7 = clientModelAnimationTrees[0];
    animTreeIndices[0] = v6;
    v8 = -1i64;
    do
      ++v8;
    while ( clientModelAnimationTrees[0][v8] );
    v9 = (unsigned int)v8;
    v10 = -281988;
    if ( (_DWORD)v8 )
    {
      do
      {
        v11 = *(unsigned __int8 *)v7++;
        v10 = (v10 >> 8) ^ g_crc32Table[v11 ^ (unsigned __int8)v10];
        --v9;
      }
      while ( v9 );
    }
    mp_parent = animTreeIndexMap.m_endNodeBase.mp_parent;
    r_element.second = 0;
    v13 = ~v10;
    r_element.first = v13;
    p_m_endNodeBase = &animTreeIndexMap.m_endNodeBase;
    v15 = 1;
    while ( mp_parent )
    {
      p_m_endNodeBase = mp_parent;
      v15 = v13 < mp_parent[1].m_color;
      if ( v13 >= mp_parent[1].m_color )
        mp_parent = mp_parent->mp_right;
      else
        mp_parent = mp_parent->mp_left;
    }
    mp_left = p_m_endNodeBase;
    if ( v15 )
    {
      if ( p_m_endNodeBase == animTreeIndexMap.m_endNodeBase.mp_left )
      {
        ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,int>>,1,8>,ntl::return_pair_first<unsigned int,int>,ntl::less<unsigned int,unsigned int>>::insert_node(&animTreeIndexMap, &result, p_m_endNodeBase, &r_element, 1, 0);
        return;
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
              v18 = mp_left;
              mp_left = mp_left->mp_parent;
            }
            while ( v18 == mp_left->mp_left );
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
    if ( mp_left[1].m_color < v13 )
    {
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
        __debugbreak();
      if ( !animTreeIndexMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !animTreeIndexMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<40> *)animTreeIndexMap.m_freelist.m_head.mp_next == &animTreeIndexMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 1ui64) )
        __debugbreak();
      mp_next = animTreeIndexMap.m_freelist.m_head.mp_next;
      v23.m256i_i32[0] = 0;
      v23.m256i_i64[1] = (__int64)p_m_endNodeBase;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      animTreeIndexMap.m_freelist.m_head.mp_next = animTreeIndexMap.m_freelist.m_head.mp_next->mp_next;
      v21 = *(double *)&r_element;
      *(_OWORD *)&v23.m256i_u64[2] = _XMM0;
      *(__m256i *)&mp_next->mp_next = v23;
      *(double *)&mp_next[4].mp_next = v21;
      if ( p_m_endNodeBase == &animTreeIndexMap.m_endNodeBase )
      {
        animTreeIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
        animTreeIndexMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
        animTreeIndexMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
      }
      else if ( v13 >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)mp_next;
        mp_right = animTreeIndexMap.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == animTreeIndexMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)mp_next;
        animTreeIndexMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)mp_next;
        if ( p_m_endNodeBase == animTreeIndexMap.m_endNodeBase.mp_left )
          animTreeIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &animTreeIndexMap.m_endNodeBase.mp_parent);
      ++animTreeIndexMap.m_size;
    }
  }
}

/*
==============
LUI_CoD_ClientModels_FindAnims
==============
*/
void LUI_CoD_ClientModels_FindAnims(int animUser)
{
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v3; 
  const char **v4; 
  scr_anim_t *v5; 
  int v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  ntl::red_black_tree_node_base *mp_parent; 
  unsigned int v13; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  bool v15; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v18; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  double v20; 
  ntl::red_black_tree_node_base *mp_right; 
  __m256i v22; 
  ntl::pair<unsigned int,int> r_element; 
  ntl::red_black_tree_iterator<unsigned int,ntl::red_black_tree_node<ntl::pair<unsigned int,int> >,ntl::pair<unsigned int,int> *,ntl::pair<unsigned int,int> &> result; 

  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    p_m_freelist = &animIndexMap.m_freelist;
    v3 = &animIndexMap.m_data.m_buffer[320];
    do
    {
      *(_QWORD *)v3 = p_m_freelist;
      p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v3;
      v3 -= 40;
    }
    while ( v3 + 40 > (char *)&animIndexMap );
    animIndexMap.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
    if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    animIndexMap.m_size = 0i64;
    v4 = clientModelAnimations[0];
    animIndexMap.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
    v5 = animIndices;
    animIndexMap.m_endNodeBase.mp_parent = NULL;
    animIndexMap.m_endNodeBase.mp_left = &animIndexMap.m_endNodeBase;
    animIndexMap.m_endNodeBase.mp_right = &animIndexMap.m_endNodeBase;
    v6 = 0;
    while ( 1 )
    {
      Scr_FindAnim(v4[1], *v4, v5, 0);
      v7 = *v4;
      v8 = -1i64;
      do
        ++v8;
      while ( v7[v8] );
      v9 = (unsigned int)v8;
      v10 = -281988;
      if ( (_DWORD)v8 )
      {
        do
        {
          v11 = *(unsigned __int8 *)v7++;
          v10 = (v10 >> 8) ^ g_crc32Table[v11 ^ (unsigned __int8)v10];
          --v9;
        }
        while ( v9 );
      }
      mp_parent = animIndexMap.m_endNodeBase.mp_parent;
      v13 = ~v10;
      r_element.first = v13;
      p_m_endNodeBase = &animIndexMap.m_endNodeBase;
      r_element.second = v6;
      v15 = 1;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v15 = v13 < mp_parent[1].m_color;
        if ( v13 >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( !v15 )
        goto LABEL_34;
      if ( p_m_endNodeBase != animIndexMap.m_endNodeBase.mp_left )
        break;
      ntl::red_black_tree<unsigned int,ntl::pair<unsigned int,int>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<unsigned int,int>>,9,8>,ntl::return_pair_first<unsigned int,int>,ntl::less<unsigned int,unsigned int>>::insert_node(&animIndexMap, &result, p_m_endNodeBase, &r_element, 1, 0);
LABEL_20:
      ++v6;
      ++v5;
      v4 += 2;
      if ( v6 >= 9 )
        return;
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
            v18 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v18 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_34:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < v13 )
    {
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
        __debugbreak();
      if ( !animIndexMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !animIndexMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<40> *)animIndexMap.m_freelist.m_head.mp_next == &animIndexMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 9ui64) )
        __debugbreak();
      mp_next = animIndexMap.m_freelist.m_head.mp_next;
      v22.m256i_i32[0] = 0;
      v22.m256i_i64[1] = (__int64)p_m_endNodeBase;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      animIndexMap.m_freelist.m_head.mp_next = animIndexMap.m_freelist.m_head.mp_next->mp_next;
      v20 = *(double *)&r_element;
      *(_OWORD *)&v22.m256i_u64[2] = _XMM0;
      *(__m256i *)&mp_next->mp_next = v22;
      *(double *)&mp_next[4].mp_next = v20;
      if ( p_m_endNodeBase == &animIndexMap.m_endNodeBase )
      {
        animIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
        animIndexMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
        animIndexMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
      }
      else if ( v13 >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)mp_next;
        mp_right = animIndexMap.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == animIndexMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)mp_next;
        animIndexMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)mp_next;
        if ( p_m_endNodeBase == animIndexMap.m_endNodeBase.mp_left )
          animIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &animIndexMap.m_endNodeBase.mp_parent);
      ++animIndexMap.m_size;
    }
    goto LABEL_20;
  }
}

/*
==============
LUI_CoD_LuaCall_SetClientModelAnimation_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetClientModelAnimation_impl(lua_State *const luaVM)
{
  double v2; 
  const unsigned __int8 *v3; 
  const char *v4; 
  __int64 v5; 
  const unsigned __int8 *v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  unsigned int v12; 
  ntl::red_black_tree_node_base *v13; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *v16; 
  __int64 v17; 
  __int64 v18; 
  scr_string_t String; 
  const XAnimParts *Parts; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetAnimation( clientModelIndex, animTree, animation )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) || !Com_FrontEnd_IsInFrontEnd() )
    return 0i64;
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (const unsigned __int8 *)j_lua_tolstring(luaVM, 2, NULL);
  v4 = j_lua_tolstring(luaVM, 3, NULL);
  v5 = -1i64;
  v6 = (const unsigned __int8 *)v4;
  v7 = -1i64;
  do
    ++v7;
  while ( v3[v7] );
  v8 = Com_FastCRC32(v3, (unsigned int)v7, 0x44D83u);
  do
    ++v5;
  while ( v6[v5] );
  v9 = Com_FastCRC32(v6, (unsigned int)v5, 0x44D83u);
  mp_parent = animTreeIndexMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &animTreeIndexMap.m_endNodeBase;
  v12 = v9;
  v13 = &animTreeIndexMap.m_endNodeBase;
  if ( animTreeIndexMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < v8 )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        v13 = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( v13 != &animTreeIndexMap.m_endNodeBase )
    {
      if ( v8 >= v13[1].m_color )
        p_m_endNodeBase = v13;
      v13 = p_m_endNodeBase;
    }
  }
  v14 = animIndexMap.m_endNodeBase.mp_parent;
  v15 = &animIndexMap.m_endNodeBase;
  v16 = &animIndexMap.m_endNodeBase;
  if ( animIndexMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( v14[1].m_color < v12 )
      {
        v14 = v14->mp_right;
      }
      else
      {
        v16 = v14;
        v14 = v14->mp_left;
      }
    }
    while ( v14 );
    if ( v16 != &animIndexMap.m_endNodeBase )
    {
      if ( v12 >= v16[1].m_color )
        v15 = v16;
      v16 = v15;
    }
  }
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  v17 = *((int *)&v13[1].m_color + 1);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  v18 = *((int *)&v16[1].m_color + 1);
  String = SL_FindString((const char *)v3);
  if ( String )
  {
    if ( !animTreeIndices[v17].anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 380, ASSERT_TYPE_ASSERT, "(scrAnimTree->anims)", (const char *)&queryFormat, "scrAnimTree->anims") )
      __debugbreak();
    Parts = XAnimGetParts(animTreeIndices[v17].anims, animIndices[v18].index);
    if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 383, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
      __debugbreak();
    CL_UI_ClientModel_SetClientModelAnimation((int)*(float *)&v2, String, Parts, animIndices[v18], animTreeIndices[v17]);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetRequiredModifiables_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetRequiredModifiables_impl(lua_State *const luaVM)
{
  bool IsClientInitialized; 
  unsigned __int64 i; 
  unsigned int v4; 
  unsigned int *v5; 
  double v6; 
  ntl::fixed_vector<unsigned int,128,0> *v7; 
  ntl::fixed_vector<unsigned int,128,0> *v8; 
  bool v9; 
  signed __int64 v10; 
  int m_size_high; 
  __int64 v13; 
  __int64 v14; 
  char v15[16]; 
  unsigned int clientModelIndices[128]; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetRequiredModifiables( clientModelIndexTable )");
  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    return 0i64;
  IsClientInitialized = CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0);
  if ( !IsClientInitialized )
  {
    for ( i = s_requiredModifiables.m_size; i; s_requiredModifiables.m_size = i )
    {
      if ( !i )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
          __debugbreak();
        i = s_requiredModifiables.m_size;
      }
      --i;
    }
  }
  v4 = 0;
  j_lua_pushnil(luaVM);
  if ( j_lua_next(luaVM, 1) )
  {
    v5 = clientModelIndices;
    do
    {
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 423, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      if ( v4 >= 0x80 )
      {
        LODWORD(v14) = 128;
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelCount ) < (unsigned)( ( sizeof( *array_counter( clientModelIndices ) ) + 0 ) )", "clientModelCount doesn't index ARRAY_COUNT( clientModelIndices )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v6 = lui_tonumber32(luaVM, -1);
      if ( IsClientInitialized )
      {
        *v5 = (int)*(float *)&v6;
      }
      else
      {
        if ( s_requiredModifiables.m_size == 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
          __debugbreak();
        if ( &s_requiredModifiables > (ntl::fixed_vector<unsigned int,128,0> *)((char *)&s_requiredModifiables + 4 * s_requiredModifiables.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( v15 >= (char *)&s_requiredModifiables && v15 < &s_requiredModifiables.m_data.m_buffer[4 * s_requiredModifiables.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
          __debugbreak();
        v7 = (ntl::fixed_vector<unsigned int,128,0> *)((char *)&s_requiredModifiables + 4 * s_requiredModifiables.m_size);
        if ( &s_requiredModifiables != v7 )
        {
          v8 = (ntl::fixed_vector<unsigned int,128,0> *)&s_requiredModifiables.m_data.m_buffer[4 * s_requiredModifiables.m_size + 4];
          if ( &s_requiredModifiables == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
            __debugbreak();
          if ( v7 == v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
            __debugbreak();
          v9 = v7 <= &s_requiredModifiables;
          if ( v7 < &s_requiredModifiables )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
              __debugbreak();
            v9 = v7 <= &s_requiredModifiables;
          }
          if ( !v9 )
          {
            v10 = (char *)v8 - (char *)v7;
            do
            {
              m_size_high = HIDWORD(v7[-1].m_size);
              v7 = (ntl::fixed_vector<unsigned int,128,0> *)((char *)v7 - 4);
              *(_DWORD *)&v7->m_data.m_buffer[v10] = m_size_high;
            }
            while ( v7 > &s_requiredModifiables );
          }
        }
        ++s_requiredModifiables.m_size;
        *(_DWORD *)s_requiredModifiables.m_data.m_buffer = (int)*(float *)&v6;
      }
      ++v4;
      ++v5;
      j_lua_settop(luaVM, -2);
    }
    while ( j_lua_next(luaVM, 1) );
  }
  if ( IsClientInitialized )
    CG_ClientModel_SetRequiredModifiables(LOCAL_CLIENT_0, clientModelIndices, v4);
  return 0i64;
}

/*
==============
LUI_CoD_RegisterClientModelFunctions
==============
*/
void LUI_CoD_RegisterClientModelFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "ClientModel", ClientModel_methods);
  j_lua_settop(luaVM, -2);
}

