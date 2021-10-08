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
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetModifiable( clientModelIndex, modifiable )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_type(luaVM, 2) == 1 && CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) && Com_FrontEnd_IsInFrontEnd() )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si rbx, xmm0 }
    v4 = j_lua_toboolean(luaVM, 2);
    CG_ClientModel_SetModifiable(LOCAL_CLIENT_0, _RBX, v4 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  const char *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetModel( clientModelIndex, modelName )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) && Com_FrontEnd_IsInFrontEnd() )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si rbx, xmm0 }
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    CL_UI_ClientModel_SetClientModel(_RBX, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetModelPatchOrigin( attachToClientModelIndex, clientModelIndex, 0 )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) && Com_FrontEnd_IsInFrontEnd() )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si rsi, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vcvttss2si rbp, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vcvttss2si rdi, xmm0 }
    if ( (unsigned int)_RDI >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 324, ASSERT_TYPE_ASSERT, "(tagIndex < 2)", (const char *)&queryFormat, "tagIndex < PATCH_TAG_MAX_COUNT") )
      __debugbreak();
    CL_UI_ClientModel_SetClientModelPatchOrigin(_RSI, _RBP, *defaultPatchTags[(unsigned int)_RDI]);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
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
  ntl::red_black_tree_node_base *mp_right; 
  __m256i v24; 
  ntl::pair<unsigned int,int> v25; 
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
      _RCX = animTreeIndexMap.m_freelist.m_head.mp_next;
      v24.m256i_i32[0] = 0;
      v24.m256i_i64[1] = (__int64)p_m_endNodeBase;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      animTreeIndexMap.m_freelist.m_head.mp_next = animTreeIndexMap.m_freelist.m_head.mp_next->mp_next;
      v25 = r_element;
      __asm
      {
        vmovsd  xmm1, [rsp+0A8h+var_48]
        vmovdqu xmmword ptr [rsp+0A8h+var_68+10h], xmm0
        vmovups ymm0, [rsp+0A8h+var_68]
        vmovups ymmword ptr [rcx], ymm0
        vmovsd  qword ptr [rcx+20h], xmm1
      }
      if ( p_m_endNodeBase == &animTreeIndexMap.m_endNodeBase )
      {
        animTreeIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
        animTreeIndexMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
        animTreeIndexMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
      }
      else if ( v13 >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)_RCX;
        mp_right = animTreeIndexMap.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == animTreeIndexMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)_RCX;
        animTreeIndexMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)_RCX;
        if ( p_m_endNodeBase == animTreeIndexMap.m_endNodeBase.mp_left )
          animTreeIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &animTreeIndexMap.m_endNodeBase.mp_parent);
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
  ntl::red_black_tree_node_base *mp_right; 
  __m256i v23; 
  ntl::pair<unsigned int,int> v24; 
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
      _RCX = animIndexMap.m_freelist.m_head.mp_next;
      v23.m256i_i32[0] = 0;
      v23.m256i_i64[1] = (__int64)p_m_endNodeBase;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      animIndexMap.m_freelist.m_head.mp_next = animIndexMap.m_freelist.m_head.mp_next->mp_next;
      v24 = r_element;
      __asm
      {
        vmovsd  xmm1, [rsp+0A8h+var_48]
        vmovdqu xmmword ptr [rsp+0A8h+var_68+10h], xmm0
        vmovups ymm0, [rsp+0A8h+var_68]
        vmovups ymmword ptr [rcx], ymm0
        vmovsd  qword ptr [rcx+20h], xmm1
      }
      if ( p_m_endNodeBase == &animIndexMap.m_endNodeBase )
      {
        animIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
        animIndexMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
        animIndexMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
      }
      else if ( v13 >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)_RCX;
        mp_right = animIndexMap.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == animIndexMap.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)_RCX;
        animIndexMap.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)_RCX;
        if ( p_m_endNodeBase == animIndexMap.m_endNodeBase.mp_left )
          animIndexMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &animIndexMap.m_endNodeBase.mp_parent);
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
  const unsigned __int8 *v4; 
  const char *v5; 
  __int64 v6; 
  const unsigned __int8 *v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  unsigned int v13; 
  ntl::red_black_tree_node_base *v14; 
  ntl::red_black_tree_node_base *v15; 
  ntl::red_black_tree_node_base *v16; 
  ntl::red_black_tree_node_base *v17; 
  __int64 v18; 
  __int64 v19; 
  scr_string_t String; 
  const XAnimParts *Parts; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: ClientModel.SetAnimation( clientModelIndex, animTree, animation )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !CG_ClientModel_IsClientInitialized(LOCAL_CLIENT_0) || !Com_FrontEnd_IsInFrontEnd() )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si r14, xmm0 }
  v4 = (const unsigned __int8 *)j_lua_tolstring(luaVM, 2, NULL);
  v5 = j_lua_tolstring(luaVM, 3, NULL);
  v6 = -1i64;
  v7 = (const unsigned __int8 *)v5;
  v8 = -1i64;
  do
    ++v8;
  while ( v4[v8] );
  v9 = Com_FastCRC32(v4, (unsigned int)v8, 0x44D83u);
  do
    ++v6;
  while ( v7[v6] );
  v10 = Com_FastCRC32(v7, (unsigned int)v6, 0x44D83u);
  mp_parent = animTreeIndexMap.m_endNodeBase.mp_parent;
  p_m_endNodeBase = &animTreeIndexMap.m_endNodeBase;
  v13 = v10;
  v14 = &animTreeIndexMap.m_endNodeBase;
  if ( animTreeIndexMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( mp_parent[1].m_color < v9 )
      {
        mp_parent = mp_parent->mp_right;
      }
      else
      {
        v14 = mp_parent;
        mp_parent = mp_parent->mp_left;
      }
    }
    while ( mp_parent );
    if ( v14 != &animTreeIndexMap.m_endNodeBase )
    {
      if ( v9 >= v14[1].m_color )
        p_m_endNodeBase = v14;
      v14 = p_m_endNodeBase;
    }
  }
  v15 = animIndexMap.m_endNodeBase.mp_parent;
  v16 = &animIndexMap.m_endNodeBase;
  v17 = &animIndexMap.m_endNodeBase;
  if ( animIndexMap.m_endNodeBase.mp_parent )
  {
    do
    {
      if ( v15[1].m_color < v13 )
      {
        v15 = v15->mp_right;
      }
      else
      {
        v17 = v15;
        v15 = v15->mp_left;
      }
    }
    while ( v15 );
    if ( v17 != &animIndexMap.m_endNodeBase )
    {
      if ( v13 >= v17[1].m_color )
        v16 = v17;
      v17 = v16;
    }
  }
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  v18 = *((int *)&v14[1].m_color + 1);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  v19 = *((int *)&v17[1].m_color + 1);
  String = SL_FindString((const char *)v4);
  if ( String )
  {
    if ( !animTreeIndices[v18].anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 380, ASSERT_TYPE_ASSERT, "(scrAnimTree->anims)", (const char *)&queryFormat, "scrAnimTree->anims") )
      __debugbreak();
    Parts = XAnimGetParts(animTreeIndices[v18].anims, animIndices[v19].index);
    if ( !Parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 383, ASSERT_TYPE_ASSERT, "(animParts)", (const char *)&queryFormat, "animParts") )
      __debugbreak();
    CL_UI_ClientModel_SetClientModelAnimation(_R14, String, Parts, animIndices[v19], animTreeIndices[v18]);
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
  unsigned int v5; 
  unsigned int *v6; 
  ntl::fixed_vector<unsigned int,128,0> *v8; 
  ntl::fixed_vector<unsigned int,128,0> *v9; 
  bool v10; 
  signed __int64 v11; 
  int m_size_high; 
  __int64 v14; 
  __int64 v15; 
  char v16[16]; 
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
  v5 = 0;
  j_lua_pushnil(luaVM);
  if ( j_lua_next(luaVM, 1) )
  {
    v6 = clientModelIndices;
    do
    {
      if ( !j_lua_isnumber(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 423, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, -1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, -1 )") )
        __debugbreak();
      if ( v5 >= 0x80 )
      {
        LODWORD(v15) = 128;
        LODWORD(v14) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_clientmodel.cpp", 424, ASSERT_TYPE_ASSERT, "(unsigned)( clientModelCount ) < (unsigned)( ( sizeof( *array_counter( clientModelIndices ) ) + 0 ) )", "clientModelCount doesn't index ARRAY_COUNT( clientModelIndices )\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm { vcvttss2si rbp, xmm0 }
      if ( IsClientInitialized )
      {
        *v6 = _RBP;
      }
      else
      {
        if ( s_requiredModifiables.m_size == 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
          __debugbreak();
        if ( &s_requiredModifiables > (ntl::fixed_vector<unsigned int,128,0> *)((char *)&s_requiredModifiables + 4 * s_requiredModifiables.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
          __debugbreak();
        if ( v16 >= (char *)&s_requiredModifiables && v16 < &s_requiredModifiables.m_data.m_buffer[4 * s_requiredModifiables.m_size] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
          __debugbreak();
        v8 = (ntl::fixed_vector<unsigned int,128,0> *)((char *)&s_requiredModifiables + 4 * s_requiredModifiables.m_size);
        if ( &s_requiredModifiables != v8 )
        {
          v9 = (ntl::fixed_vector<unsigned int,128,0> *)&s_requiredModifiables.m_data.m_buffer[4 * s_requiredModifiables.m_size + 4];
          if ( &s_requiredModifiables == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
            __debugbreak();
          if ( v8 == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
            __debugbreak();
          v10 = v8 <= &s_requiredModifiables;
          if ( v8 < &s_requiredModifiables )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
              __debugbreak();
            v10 = v8 <= &s_requiredModifiables;
          }
          if ( !v10 )
          {
            v11 = (char *)v9 - (char *)v8;
            do
            {
              m_size_high = HIDWORD(v8[-1].m_size);
              v8 = (ntl::fixed_vector<unsigned int,128,0> *)((char *)v8 - 4);
              *(_DWORD *)&v8->m_data.m_buffer[v11] = m_size_high;
            }
            while ( v8 > &s_requiredModifiables );
          }
        }
        ++s_requiredModifiables.m_size;
        *(_DWORD *)s_requiredModifiables.m_data.m_buffer = _RBP;
      }
      ++v5;
      ++v6;
      j_lua_settop(luaVM, -2);
    }
    while ( j_lua_next(luaVM, 1) );
  }
  if ( IsClientInitialized )
    CG_ClientModel_SetRequiredModifiables(LOCAL_CLIENT_0, clientModelIndices, v5);
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

