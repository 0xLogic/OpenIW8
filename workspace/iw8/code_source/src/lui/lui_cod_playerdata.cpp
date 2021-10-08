/*
==============
LUI_CoD_RegisterPlayerDataFunctions
==============
*/

void __fastcall LUI_CoD_RegisterPlayerDataFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterPlayerDataFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_PlayerData_CleanupBindingMap
==============
*/

void __fastcall LUI_CoD_PlayerData_CleanupBindingMap(ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *currentBindingMap)
{
  ?LUI_CoD_PlayerData_CleanupBindingMap@@YAXPEAV?$fixed_vector_map@HUDDLToModelBinding@@$0BEA@U?$less@HH@ntl@@@ntl@@@Z(currentBindingMap);
}

/*
==============
LUI_CoD_PlayerData_TriggerCallbackOnContextWrite
==============
*/

void __fastcall LUI_CoD_PlayerData_TriggerCallbackOnContextWrite(const DDLContext *context, int bitStart, int bitSize)
{
  ?LUI_CoD_PlayerData_TriggerCallbackOnContextWrite@@YAXPEBUDDLContext@@HH@Z(context, bitStart, bitSize);
}

/*
==============
LUI_CoD_PlayerData_TriggerCallbackOnPlayerDataWrite
==============
*/

void __fastcall LUI_CoD_PlayerData_TriggerCallbackOnPlayerDataWrite(int controllerIndex, unsigned int startByteIndex, unsigned int dataBlockSize)
{
  ?LUI_CoD_PlayerData_TriggerCallbackOnPlayerDataWrite@@YAXHII@Z(controllerIndex, startByteIndex, dataBlockSize);
}

/*
==============
LUI_CoD_LuaCall_PlayerData_GetModelForField
==============
*/
__int64 LUI_CoD_LuaCall_PlayerData_GetModelForField(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_PlayerData_GetModelForField_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_PlayerData_Cleanup
==============
*/
__int64 LUI_CoD_LuaCall_PlayerData_Cleanup(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_PlayerData_Cleanup_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_PlayerData_Cleanup_impl
==============
*/
__int64 LUI_CoD_LuaCall_PlayerData_Cleanup_impl(lua_State *const luaVM)
{
  unsigned int v1; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *p_bindings; 
  unsigned __int64 v3; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  signed __int64 v8; 
  __int64 v9; 
  unsigned __int64 m_size; 
  char *v12; 
  bool v13; 
  unsigned int v20; 

  v1 = 0;
  p_bindings = &s_bindings[0].bindings;
  v20 = 0;
  do
  {
    if ( *(_QWORD *)&p_bindings[-1].m_keyAccessor.ntl::unary_function<ntl::pair<int,DDLToModelBinding>,int> )
    {
      v3 = (unsigned __int64)p_bindings;
      if ( p_bindings != (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)p_bindings + 112 * p_bindings->m_size) )
      {
        do
        {
          ModelForController = LUI_Model_GetModelForController(*(_DWORD *)(v3 + 104));
          ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "pdata");
          v6 = LUI_Model_GetModelFromPath(ModelFromPath, (const char *)(v3 + 40));
          v7 = v6;
          if ( !v6 || LUI_Model_HasSubscriptions(v6) )
          {
            v3 += 112i64;
          }
          else
          {
            LUI_Model_FreeModel(v7);
            if ( !p_bindings->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
              __debugbreak();
            if ( (v3 < (unsigned __int64)p_bindings || v3 > (unsigned __int64)p_bindings + 112 * p_bindings->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
              __debugbreak();
            v8 = v3 - (_QWORD)p_bindings;
            v9 = ((v3 - (unsigned __int64)p_bindings) * (unsigned __int128)0x2492492492492493ui64) >> 64;
            if ( v3 - (_QWORD)p_bindings != 112 * ((v9 + ((v3 - (unsigned __int64)p_bindings - v9) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
              __debugbreak();
            if ( (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)v3 == (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)p_bindings + 112 * p_bindings->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
              __debugbreak();
            m_size = p_bindings->m_size;
            v3 = (unsigned __int64)p_bindings;
            if ( m_size )
              v3 = (unsigned __int64)p_bindings + 112 * (v8 / 112);
            _RBX = v3 + 112;
            v12 = &p_bindings->m_data.m_buffer[112 * m_size];
            if ( v3 + 112 == v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
              __debugbreak();
            if ( v12 == (char *)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
              __debugbreak();
            v13 = _RBX < (unsigned __int64)v12;
            if ( _RBX > (unsigned __int64)v12 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
                __debugbreak();
              v13 = _RBX < (unsigned __int64)v12;
            }
            if ( v13 )
            {
              _RAX = v3;
              do
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbx]
                  vmovups ymmword ptr [rax], ymm0
                  vmovups ymm1, ymmword ptr [rbx+20h]
                  vmovups ymmword ptr [rax+20h], ymm1
                  vmovups ymm0, ymmword ptr [rbx+40h]
                  vmovups ymmword ptr [rax+40h], ymm0
                  vmovups xmm1, xmmword ptr [rbx+60h]
                }
                _RBX += 112i64;
                __asm { vmovups xmmword ptr [rax+60h], xmm1 }
                _RAX += 112i64;
              }
              while ( _RBX < (unsigned __int64)v12 );
            }
            --p_bindings->m_size;
          }
        }
        while ( (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)v3 != (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)p_bindings + 112 * p_bindings->m_size) );
        v1 = v20;
      }
    }
    ++v1;
    p_bindings = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)p_bindings + 35864);
    v20 = v1;
  }
  while ( v1 < 0x38 );
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PlayerData_GetModelForField_impl
==============
*/
__int64 LUI_CoD_LuaCall_PlayerData_GetModelForField_impl(lua_State *const luaVM)
{
  char v2; 
  DDLState *v3; 
  int v4; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  DDLContext *DDLContext; 
  StatsGroup v8; 
  LocalClientNum_t ClientFromController; 
  __int64 v10; 
  StatsSource ActiveStatsSource; 
  unsigned __int16 v13; 
  DDLContextBindings *v14; 
  unsigned int v15; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *p_bindings; 
  unsigned __int64 m_size; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *v23; 
  char *fmt; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  DDLContext context; 
  char dest[64]; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: PlayerData.GetModelForField( statsGroup, gameMode, ddlState, controller )");
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 2);
  v3 = (DDLState *)j_lua_touserdata(luaVM, 3);
  v4 = lui_tointeger32(luaVM, 4);
  ModelForController = LUI_Model_GetModelForController(v4);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "pdata");
  if ( v2 == 1 )
  {
    if ( !DDL_StateIsLeaf(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 127, ASSERT_TYPE_ASSERT, "(DDL_StateIsLeaf( state ))", (const char *)&queryFormat, "DDL_StateIsLeaf( state )") )
      __debugbreak();
    Com_sprintf(dest, 0x40ui64, "sp_%d", (unsigned int)v3->offset);
    DDLContext = GamerProfile_GetDDLContext(v4, SP_PROGRESSION);
  }
  else
  {
    if ( Live_UserIsGuest(v4) && !LiveStorage_DoWeHaveStats(v4) )
      LiveStorage_CopySponsorStats(v4);
    v8 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v4);
    v10 = ClientFromController;
    if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ClientFromController, 2) )
        __debugbreak();
      LODWORD(v28) = 2;
      LODWORD(v26) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v26, v28) )
        __debugbreak();
    }
    if ( clientUIActives[v10].frontEndSceneState[0] )
      goto LABEL_32;
    if ( (unsigned int)v10 >= 2 )
    {
      LODWORD(v27) = 2;
      LODWORD(v25) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v25, v27) )
        __debugbreak();
    }
    if ( clientUIActives[v10].connectionState < CA_CONNECTED || v8 != Com_PlayerData_GetLoadoutStatsGroupForGameMode() )
    {
LABEL_32:
      ActiveStatsSource = LiveStorage_GetActiveStatsSource(v4);
      if ( !CL_PlayerData_GetDDLBuffer(&context, v4, ActiveStatsSource, v8) )
      {
        Com_PrintError(13, "Attempted to access player data, before player data is available.  Returning nil to the UI.\n");
        return 0i64;
      }
      DDLContext = &context;
    }
    else
    {
      DDLContext = CG_EditablePlayerData_GetDDLContext((const LocalClientNum_t)v10, v8);
    }
    if ( !DDL_StateIsLeaf(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 127, ASSERT_TYPE_ASSERT, "(DDL_StateIsLeaf( state ))", (const char *)&queryFormat, "DDL_StateIsLeaf( state )") )
      __debugbreak();
    LODWORD(fmt) = v3->offset;
    Com_sprintf(dest, 0x40ui64, "%d_%d", (unsigned int)v8, fmt);
  }
  v13 = LUI_Model_CreateModelFromPath(ModelFromPath, dest);
  if ( !DDLContext->buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 311, ASSERT_TYPE_ASSERT, "(context->buff != 0)", (const char *)&queryFormat, "context->buff != NULL") )
    __debugbreak();
  if ( !DDL_StateIsLeaf(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 312, ASSERT_TYPE_ASSERT, "(DDL_StateIsLeaf( state ))", (const char *)&queryFormat, "DDL_StateIsLeaf( state )") )
    __debugbreak();
  if ( !DDLContext->buff || !DDL_StateIsLeaf(v3) )
    goto LABEL_62;
  v14 = s_bindings;
  v15 = 0;
  while ( v14->dataLocation != DDLContext->buff )
  {
    ++v15;
    ++v14;
    if ( v15 >= 0x38 )
      goto LABEL_62;
  }
  p_bindings = &v14->bindings;
  m_size = v14->bindings.m_size;
  v18 = &v14->bindings;
  v19 = 112 * m_size;
  v20 = v3->offset + DDLContext->def->headerBitSize;
  v21 = (__int64)(112 * m_size) / 112;
  if ( v21 > 0 )
  {
    do
    {
      v22 = 112 * (v21 >> 1);
      if ( *(_DWORD *)&v18->m_data.m_buffer[v22] >= v20 )
      {
        v21 >>= 1;
      }
      else
      {
        v18 = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)v18 + v22 + 112);
        v21 += -1 - (v21 >> 1);
      }
    }
    while ( v21 > 0 );
    m_size = p_bindings->m_size;
  }
  v23 = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)p_bindings + 112 * m_size);
  if ( v18 == v23 )
    goto LABEL_62;
  if ( v20 < *(_DWORD *)v18->m_data.m_buffer )
    v18 = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)p_bindings + v19);
  if ( v18 == v23 )
LABEL_62:
    LUI_CoD_PlayerData_RegisterCallback(DDLContext, v3, dest, v4);
  LUI_CoD_PlayerData_PushToDataModel(v13, DDLContext, v3, v4);
  j_lua_pushlightuserdata(luaVM, (void *)v13);
  return 1i64;
}

/*
==============
LUI_CoD_PlayerData_CleanupBindingMap
==============
*/
void LUI_CoD_PlayerData_CleanupBindingMap(ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *currentBindingMap)
{
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *v2; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  signed __int64 v7; 
  __int64 v8; 
  unsigned __int64 m_size; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *v11; 
  bool v12; 

  v2 = currentBindingMap;
  while ( v2 != (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)currentBindingMap + 112 * currentBindingMap->m_size) )
  {
    ModelForController = LUI_Model_GetModelForController(*(_DWORD *)&v2->m_data.m_buffer[104]);
    ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "pdata");
    v5 = LUI_Model_GetModelFromPath(ModelFromPath, &v2->m_data.m_buffer[40]);
    v6 = v5;
    if ( !v5 || LUI_Model_HasSubscriptions(v5) )
    {
      v2 = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)v2 + 112);
    }
    else
    {
      LUI_Model_FreeModel(v6);
      if ( !currentBindingMap->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
      if ( (v2 < currentBindingMap || v2 > (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)currentBindingMap + 112 * currentBindingMap->m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
        __debugbreak();
      v7 = (char *)v2 - (char *)currentBindingMap;
      v8 = ((unsigned __int64)((char *)v2 - (char *)currentBindingMap) * (unsigned __int128)0x2492492492492493ui64) >> 64;
      if ( (char *)v2 - (char *)currentBindingMap != 112 * ((v8 + ((unsigned __int64)((char *)v2 - (char *)currentBindingMap - v8) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
        __debugbreak();
      if ( v2 == (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)currentBindingMap + 112 * currentBindingMap->m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
        __debugbreak();
      m_size = currentBindingMap->m_size;
      v2 = currentBindingMap;
      if ( m_size )
        v2 = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)currentBindingMap + 112 * (v7 / 112));
      _RBX = &v2->m_data.m_buffer[112];
      v11 = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)currentBindingMap + 112 * m_size);
      if ( &v2->m_data.m_buffer[112] == (char *)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( v11 == v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v12 = _RBX < (char *)v11;
      if ( _RBX > (char *)v11 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v12 = _RBX < (char *)v11;
      }
      if ( v12 )
      {
        _RAX = v2;
        do
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rax], ymm0
            vmovups ymm1, ymmword ptr [rbx+20h]
            vmovups ymmword ptr [rax+20h], ymm1
            vmovups ymm0, ymmword ptr [rbx+40h]
            vmovups ymmword ptr [rax+40h], ymm0
            vmovups xmm1, xmmword ptr [rbx+60h]
          }
          _RBX += 112;
          __asm { vmovups xmmword ptr [rax+60h], xmm1 }
          _RAX = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)_RAX + 112);
        }
        while ( _RBX < (char *)v11 );
      }
      --currentBindingMap->m_size;
    }
  }
}

/*
==============
LUI_CoD_PlayerData_PushToDataModel
==============
*/
char LUI_CoD_PlayerData_PushToDataModel(unsigned __int16 model, const DDLContext *context, const DDLState *state, int controllerIndex)
{
  DDLValue Value; 
  int v8; 
  const char *v9; 
  const char *EnumString; 
  int intValue; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 67, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != INVALID_LUI_MODEL") )
    __debugbreak();
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 68, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 69, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !state->member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 70, ASSERT_TYPE_ASSERT, "(state->member)", (const char *)&queryFormat, "state->member") )
    __debugbreak();
  if ( state->member->type == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 71, ASSERT_TYPE_ASSERT, "(state->member->type != DDL_INVALID_TYPE)", (const char *)&queryFormat, "state->member->type != DDL_INVALID_TYPE") )
    __debugbreak();
  Value = DDL_GetValue(state, context);
  intValue = Value.intValue;
  switch ( state->member->type )
  {
    case 0:
    case 1:
    case 3:
      v8 = Value.intValue;
      goto LABEL_18;
    case 2:
      v8 = Value.intValue;
      if ( Value.intValue <= 0x7FFFFFFFu )
      {
LABEL_18:
        LUI_Model_SetInt(model, v8);
      }
      else
      {
        Value.uint64Value = (unsigned __int64)j_va("%u", Value.uintValue);
$LN36_58:
        LUI_Model_SetString(model, Value.stringPtr);
      }
      return 1;
    case 4:
      v9 = j_va("%llu", Value.uint64Value);
      LUI_Model_SetString(model, v9);
      return 1;
    case 6:
    case 7:
      __asm { vmovss  xmm1, dword ptr [rsp+38h+arg_8]; jumptable 00000001425A9BA5 cases 6,7 }
      LUI_Model_SetReal(model, *(float *)&_XMM1);
      return 1;
    case 8:
      goto $LN36_58;
    case 0xA:
      EnumString = DDL::DDL_Lookup_GetEnumString(state, Value.intValue);
      LUI_Model_SetString(model, EnumString);
      return 1;
    default:
      Com_Printf(13, "Warning: Unexpected DDL member type");
      return 1;
  }
}

/*
==============
LUI_CoD_PlayerData_RegisterCallback
==============
*/
void LUI_CoD_PlayerData_RegisterCallback(DDLContext *context, DDLState *state, char *targetModelName, int controllerIndex)
{
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  const DDLDef *def; 
  DDLContextBindings *v11; 
  unsigned __int8 *buff; 
  DDLContextBindings *v13; 
  unsigned int v14; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *p_bindings; 
  __int64 m_size; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  bool v23; 
  DDLState toState; 
  char dest[32]; 
  __int128 v35; 

  if ( !DDL_StateIsLeaf(state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 175, ASSERT_TYPE_ASSERT, "(DDL_StateIsLeaf( state ))", (const char *)&queryFormat, "DDL_StateIsLeaf( state )") )
    __debugbreak();
  ModelForController = LUI_Model_GetModelForController(controllerIndex);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "pdata");
  LUI_Model_CreateModelFromPath(ModelFromPath, targetModelName);
  def = context->def;
  v11 = NULL;
  LOBYTE(toState.arrayIndex) = 0;
  *(&toState.arrayIndex + 1) = 0;
  LODWORD(toState.member) = -1;
  toState.ddlDef = NULL;
  *(_QWORD *)dest = 0i64;
  *(_DWORD *)&toState.isValid = state->offset + def->headerBitSize;
  DDL_StateCopy(state, (DDLState *)&toState.arrayIndex);
  DWORD2(v35) = controllerIndex;
  Core_strcpy(&dest[8], 0x40ui64, targetModelName);
  buff = (unsigned __int8 *)context->buff;
  v13 = s_bindings;
  v14 = 0;
  while ( v13->dataLocation != buff )
  {
    if ( !v11 && !v13->dataLocation )
      v11 = &s_bindings[v14];
    ++v14;
    ++v13;
    if ( v14 >= 0x38 )
      goto LABEL_12;
  }
  v11 = &s_bindings[v14];
LABEL_12:
  v11->dataLocation = buff;
  p_bindings = &v11->bindings;
  if ( v11->bindings.m_size >= 0x140 )
    LUI_CoD_PlayerData_CleanupBindingMap(&v11->bindings);
  m_size = v11->bindings.m_size;
  _RSI = &v11->bindings;
  v18 = m_size;
  while ( m_size > 0 )
  {
    v19 = 112 * (m_size >> 1);
    if ( *(_DWORD *)&_RSI->m_data.m_buffer[v19] >= *(int *)&toState.isValid )
    {
      m_size >>= 1;
    }
    else
    {
      _RSI = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)_RSI + v19 + 112);
      m_size += -1 - (m_size >> 1);
    }
  }
  if ( _RSI == (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)p_bindings + 112 * v18) || *(int *)&toState.isValid < *(_DWORD *)_RSI->m_data.m_buffer )
  {
    if ( 320 == v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 284, ASSERT_TYPE_ASSERT, "( ( capacity() - size()) >= 1 )", (const char *)&queryFormat, "( capacity() - size()) >= 1") )
      __debugbreak();
    if ( (_RSI < p_bindings || _RSI > (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)&v11->bindings + 112 * v11->bindings.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v20 = ((unsigned __int64)((char *)_RSI - (char *)p_bindings) * (unsigned __int128)0x2492492492492493ui64) >> 64;
    if ( (char *)_RSI - (char *)p_bindings != 112 * ((v20 + ((unsigned __int64)((char *)_RSI - (char *)p_bindings - v20) >> 1)) >> 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( &toState >= (DDLState *)_RSI && &toState < (DDLState *)((char *)&v11->bindings + 112 * v11->bindings.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 288, ASSERT_TYPE_ASSERT, "( !((( &r_value ) >= position ) && (( &r_value ) < end())) )", (const char *)&queryFormat, "!((( &r_value ) >= position ) && (( &r_value ) < end()))") )
      __debugbreak();
    _RBX = (unsigned __int64)&v11->bindings + 112 * v11->bindings.m_size;
    if ( _RSI != (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)_RBX )
    {
      _RDI = _RBX + 112;
      if ( _RSI == (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)(_RBX + 112) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 476, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
        __debugbreak();
      if ( _RBX == _RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 477, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
        __debugbreak();
      v23 = _RBX <= (unsigned __int64)_RSI;
      if ( _RBX < (unsigned __int64)_RSI )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 479, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
          __debugbreak();
        v23 = _RBX <= (unsigned __int64)_RSI;
      }
      if ( !v23 )
      {
        do
        {
          __asm { vmovups ymm0, ymmword ptr [rbx-70h] }
          _RBX -= 112i64;
          _RDI -= 112i64;
          __asm
          {
            vmovups ymmword ptr [rdi], ymm0
            vmovups ymm1, ymmword ptr [rbx+20h]
            vmovups ymmword ptr [rdi+20h], ymm1
            vmovups ymm0, ymmword ptr [rbx+40h]
            vmovups ymmword ptr [rdi+40h], ymm0
            vmovups xmm1, xmmword ptr [rbx+60h]
            vmovups xmmword ptr [rdi+60h], xmm1
          }
        }
        while ( _RBX > (unsigned __int64)_RSI );
      }
    }
    __asm { vmovups ymm0, ymmword ptr [rsp+0E8h+toState.isValid] }
    ++p_bindings->m_size;
    __asm
    {
      vmovups ymmword ptr [rsi], ymm0
      vmovups ymm1, ymmword ptr [rsp+0E8h+dest]
      vmovups ymmword ptr [rsi+20h], ymm1
      vmovups ymm0, [rsp+0E8h+var_78]
      vmovups ymmword ptr [rsi+40h], ymm0
      vmovups xmm1, xmmword ptr [rsp+90h]
      vmovups xmmword ptr [rsi+60h], xmm1
    }
  }
}

/*
==============
LUI_CoD_PlayerData_TriggerCallbackOnContextWrite
==============
*/
void LUI_CoD_PlayerData_TriggerCallbackOnContextWrite(const DDLContext *context, int bitStart, int bitSize)
{
  int v6; 
  int v7; 
  DDLContextBindings *i; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *p_bindings; 
  __int64 m_size; 
  ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *v11; 
  __int64 v12; 
  int *v13; 
  int *v14; 
  const int *v15; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v18; 

  if ( !context->buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 219, ASSERT_TYPE_ASSERT, "(context->buff != 0)", (const char *)&queryFormat, "context->buff != NULL") )
    __debugbreak();
  if ( !context->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 220, ASSERT_TYPE_ASSERT, "(context->def != 0)", (const char *)&queryFormat, "context->def != NULL") )
    __debugbreak();
  if ( bitStart < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_playerdata.cpp", 222, ASSERT_TYPE_ASSERT, "(bitStart >= 0)", (const char *)&queryFormat, "bitStart >= 0") )
    __debugbreak();
  v6 = bitStart + bitSize;
  v7 = 0;
  for ( i = s_bindings; i->dataLocation != context->buff; ++i )
  {
    if ( (unsigned int)++v7 >= 0x38 )
      return;
  }
  p_bindings = &i->bindings;
  m_size = i->bindings.m_size;
  v11 = p_bindings;
  if ( m_size > 0 )
  {
    do
    {
      v12 = 112 * (m_size >> 1);
      if ( *(_DWORD *)&v11->m_data.m_buffer[v12] >= bitStart )
      {
        m_size >>= 1;
      }
      else
      {
        v11 = (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)((char *)v11 + v12 + 112);
        m_size += -1 - (m_size >> 1);
      }
    }
    while ( m_size > 0 );
    m_size = p_bindings->m_size;
  }
  v13 = (int *)&p_bindings->m_data.m_buffer[112 * m_size];
  if ( v11 != (ntl::fixed_vector_map<int,DDLToModelBinding,320,ntl::less<int,int> > *)v13 )
  {
    v14 = (int *)&v11->m_data.m_buffer[112];
    if ( *(_DWORD *)v11->m_data.m_buffer + *(_DWORD *)(*(_QWORD *)&v11->m_data.m_buffer[24] + 12i64) / *(_DWORD *)(*(_QWORD *)&v11->m_data.m_buffer[24] + 40i64) >= bitStart )
      v14 = (int *)v11;
    if ( v14 != v13 )
    {
      v15 = v14 + 26;
      do
      {
        if ( *v14 >= v6 )
          break;
        ModelForController = LUI_Model_GetModelForController(*v15);
        ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "pdata");
        v18 = LUI_Model_GetModelFromPath(ModelFromPath, (const char *)v15 - 64);
        LUI_CoD_PlayerData_PushToDataModel(v18, context, (const DDLState *)v15 - 3, *v15);
        v14 += 28;
        v15 += 28;
      }
      while ( v14 != (int *)((char *)p_bindings + 112 * p_bindings->m_size) );
    }
  }
}

/*
==============
LUI_CoD_PlayerData_TriggerCallbackOnPlayerDataWrite
==============
*/
void LUI_CoD_PlayerData_TriggerCallbackOnPlayerDataWrite(int controllerIndex, unsigned int startByteIndex, unsigned int dataBlockSize)
{
  StatsGroup StatsGroupByByteOffset; 
  StatsGroup v7; 
  unsigned int StatsGroupOffset; 
  unsigned int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  StatsSource ActiveStatsSource; 
  StatsSource v14; 
  DDLContext context; 

  StatsGroupByByteOffset = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex);
  v7 = Com_PlayerData_FindStatsGroupByByteOffset(startByteIndex + dataBlockSize - 1);
  StatsGroupOffset = Com_PlayerData_GetStatsGroupOffset(StatsGroupByByteOffset);
  v9 = StatsGroupOffset;
  if ( StatsGroupByByteOffset == v7 )
  {
    v10 = 8 * dataBlockSize;
    v11 = 8 * (startByteIndex - StatsGroupOffset) - 32;
  }
  else
  {
    v12 = Com_PlayerData_GetStatsGroupSize(StatsGroupByByteOffset) + StatsGroupOffset - startByteIndex;
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, StatsGroupByByteOffset);
    LUI_CoD_PlayerData_TriggerCallbackOnContextWrite(&context, 8 * (startByteIndex - v9) - 32, 8 * v12);
    Com_PlayerData_GetStatsGroupOffset(v7);
    v11 = 0;
    StatsGroupByByteOffset = v7;
    v10 = 8 * (dataBlockSize - v12) - 32;
  }
  v14 = LiveStorage_GetActiveStatsSource(controllerIndex);
  CL_PlayerData_GetDDLBuffer(&context, controllerIndex, v14, StatsGroupByByteOffset);
  LUI_CoD_PlayerData_TriggerCallbackOnContextWrite(&context, v11, v10);
}

/*
==============
LUI_CoD_RegisterPlayerDataFunctions
==============
*/
void LUI_CoD_RegisterPlayerDataFunctions(lua_State *luaVM)
{
  DDLContextBindings *v1; 
  unsigned int i; 
  unsigned __int64 j; 

  v1 = s_bindings;
  for ( i = 0; i < 0x38; ++i )
  {
    for ( j = 0i64; j < v1->bindings.m_size; ++j )
    {
      if ( j >= 0x140 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
    }
    v1->bindings.m_size = 0i64;
    v1->dataLocation = NULL;
    ++v1;
  }
  LuaShared_RegisterPlayerDataFunctions(luaVM);
  j_luaL_register(luaVM, "PlayerData", s_playerDataFunctions_0);
  j_lua_settop(luaVM, -2);
}

