/*
==============
LUI_SubscriptionsHolder_GetNumHoldersTotal
==============
*/

int __fastcall LUI_SubscriptionsHolder_GetNumHoldersTotal()
{
  return ?LUI_SubscriptionsHolder_GetNumHoldersTotal@@YAHXZ();
}

/*
==============
LUI_SubscriptionsHolder_GetNumHoldersInUse
==============
*/

int __fastcall LUI_SubscriptionsHolder_GetNumHoldersInUse()
{
  return ?LUI_SubscriptionsHolder_GetNumHoldersInUse@@YAHXZ();
}

/*
==============
LUI_RegisterSubscriptionsHolderMethods
==============
*/

void __fastcall LUI_RegisterSubscriptionsHolderMethods(lua_State *luaVM)
{
  ?LUI_RegisterSubscriptionsHolderMethods@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_SubscriptionsHolder_Initialize
==============
*/

void LUI_SubscriptionsHolder_Initialize(void)
{
  ?LUI_SubscriptionsHolder_Initialize@@YAXXZ();
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_GC
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_GC(lua_State *luaVM)
{
  LUISubscriptionsHolder *v2; 
  unsigned __int64 v3; 
  __int64 result; 

  v2 = LUI_ToSubscriptionsHolder(luaVM, 1);
  LUI_LUISubscriptionsHolder_UnsubscribeFromAllModels(1, luaVM);
  v3 = ((char *)v2 - (char *)&s_subscriptionsHolderPool) >> 3;
  if ( v3 > 0xBB7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 464, ASSERT_TYPE_ASSERT, "(s_subscriptionsHolderPool.Free( holder ))", (const char *)&queryFormat, "s_subscriptionsHolderPool.Free( holder )") )
      __debugbreak();
    --s_allocatedSubscriptionsHolders;
    return 0i64;
  }
  else
  {
    if ( s_subscriptionsHolderPool.m_poolData[v3] <= 0xBB8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 247, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
      __debugbreak();
    s_subscriptionsHolderPool.m_poolData[v3] = s_subscriptionsHolderPool.m_firstFree;
    result = 0i64;
    --s_allocatedSubscriptionsHolders;
    s_subscriptionsHolderPool.m_firstFree = ((char *)v2 - (char *)&s_subscriptionsHolderPool) >> 3;
    v2->first = NULL;
  }
  return result;
}

/*
==============
BindElementPropertyToModel
==============
*/
__int64 BindElementPropertyToModel(LUISubscriptionsHolder *const holder, unsigned __int16 model, int elementIndexInStack, LUIDataBindingProperty bindingProperty, lua_State *luaVM)
{
  unsigned int v9; 
  LUISubscriptionHeld *first; 
  LUISubscriptionHeld *v11; 
  unsigned int v12; 
  LUIDataBindingProperty PropertyForSubscription; 
  LUISubscriptionHeld *next; 
  int i; 
  unsigned __int16 m_firstFree; 
  LUISubscriptionHeld *v17; 
  LUIElement *v18; 
  int v20; 

  v20 = j_lua_gettop(luaVM);
  v9 = LUI_Model_Subscribe(model, 2, bindingProperty, luaVM);
  first = holder->first;
  v11 = NULL;
  v12 = v9;
  if ( holder->first )
  {
    while ( 1 )
    {
      PropertyForSubscription = LUI_Model_GetPropertyForSubscription(first->subscription);
      next = first->next;
      if ( PropertyForSubscription == bindingProperty )
        break;
      v11 = first;
      first = first->next;
      if ( !next )
        goto LABEL_9;
    }
    if ( v11 )
      v11->next = next;
    else
      holder->first = next;
    LUI_LUISubscriptionsHeld_Unsubscribe(first, 1, luaVM);
    LUIPool<LUISubscriptionHeld,3000,1>::Free(&s_subscriptionsHeldPool, first);
  }
LABEL_9:
  for ( i = 0; i < 2; ++i )
  {
    m_firstFree = s_subscriptionsHeldPool.m_firstFree;
    if ( s_subscriptionsHeldPool.m_firstFree < 0xBB8u )
    {
      s_subscriptionsHeldPool.m_firstFree = s_subscriptionsHeldPool.m_poolData[s_subscriptionsHeldPool.m_firstFree];
      s_subscriptionsHeldPool.m_poolData[m_firstFree] = 3001;
      v17 = &s_subscriptionsHeldPool.m_pool[m_firstFree];
      if ( v17 )
        goto LABEL_19;
    }
    else
    {
      v17 = NULL;
    }
    if ( i >= 1 )
    {
      Com_PrintError(13, "LUI ERROR: Failed to allocate from LUI pool. Restarting the Lua VM.", 3001i64);
      LUI_HandleLuaError(4);
    }
    else
    {
      LUI_Interface_DebugPrint("LUI POOL WARNING: Could not allocate (size=%d), attempt %d/%d\n", 3000i64, (unsigned int)(i + 1), 2i64);
      LUI_EmergencyFullGC(luaVM, "BindElementPropertyToModel limit (%i)", 3000i64);
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 178, ASSERT_TYPE_ASSERT, "(held)", (const char *)&queryFormat, "held") )
    __debugbreak();
LABEL_19:
  v17->subscription = v12;
  if ( !j_lua_getmetatable(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 181, ASSERT_TYPE_ASSERT, "(lua_getmetatable( luaVM, 1 ))", (const char *)&queryFormat, "lua_getmetatable( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, elementIndexInStack) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 182, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, elementIndexInStack ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, elementIndexInStack )") )
    __debugbreak();
  j_lua_pushvalue(luaVM, elementIndexInStack);
  v17->strongLuaRef = j_luaL_ref(luaVM, -2);
  j_lua_settop(luaVM, -2);
  if ( v17->strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 186, ASSERT_TYPE_ASSERT, "(held->strongLuaRef != (-2))", (const char *)&queryFormat, "held->strongLuaRef != LUA_NOREF") )
    __debugbreak();
  if ( v17->strongLuaRef == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 187, ASSERT_TYPE_ASSERT, "(held->strongLuaRef != (-1))", (const char *)&queryFormat, "held->strongLuaRef != LUA_REFNIL") )
    __debugbreak();
  v17->next = holder->first;
  holder->first = v17;
  v18 = LUI_ToElement(luaVM, elementIndexInStack);
  LUI_LUIElement_UpdatePropertyBinding(v18, bindingProperty, model, luaVM);
  if ( j_lua_gettop(luaVM) != v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 196, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == luaTop)", (const char *)&queryFormat, "lua_gettop( luaVM ) == luaTop") )
    __debugbreak();
  return v12;
}

/*
==============
LUI_LUISubscriptionsHeld_Unsubscribe
==============
*/
void LUI_LUISubscriptionsHeld_Unsubscribe(LUISubscriptionHeld *held, int holderStackIndex, lua_State *luaVM)
{
  if ( !held && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 129, ASSERT_TYPE_ASSERT, "(held)", (const char *)&queryFormat, "held") )
    __debugbreak();
  LUI_Model_Unsubscribe(held->subscription);
  if ( held->strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 131, ASSERT_TYPE_ASSERT, "(held->strongLuaRef != (-2))", (const char *)&queryFormat, "held->strongLuaRef != LUA_NOREF") )
    __debugbreak();
  if ( held->strongLuaRef == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 132, ASSERT_TYPE_ASSERT, "(held->strongLuaRef != (-1))", (const char *)&queryFormat, "held->strongLuaRef != LUA_REFNIL") )
    __debugbreak();
  if ( !j_lua_getmetatable(luaVM, holderStackIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 133, ASSERT_TYPE_ASSERT, "(lua_getmetatable( luaVM, holderStackIndex ))", (const char *)&queryFormat, "lua_getmetatable( luaVM, holderStackIndex )") )
    __debugbreak();
  j_luaL_unref(luaVM, -1, held->strongLuaRef);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_LUISubscriptionsHolder_UnsubscribeFromAllModels
==============
*/
void LUI_LUISubscriptionsHolder_UnsubscribeFromAllModels(int holderStackIndex, lua_State *luaVM)
{
  int v4; 
  LUISubscriptionsHolder *v5; 
  LUISubscriptionHeld *first; 
  LUISubscriptionHeld *v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  int v10; 

  v10 = j_lua_gettop(luaVM);
  v4 = v10;
  v5 = LUI_ToSubscriptionsHolder(luaVM, holderStackIndex);
  first = v5->first;
  if ( v5->first )
  {
    do
    {
      LUI_LUISubscriptionsHeld_Unsubscribe(first, holderStackIndex, luaVM);
      v7 = first;
      first = first->next;
      v8 = ((char *)v7 - (char *)&s_subscriptionsHeldPool) >> 4;
      if ( v8 <= 0xBB7 )
      {
        v9 = (unsigned __int16)v8;
        if ( (unsigned __int16)v8 >= 0xBB8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 93, ASSERT_TYPE_ASSERT, "(poolIndex < PoolSize)", (const char *)&queryFormat, "poolIndex < PoolSize") )
          __debugbreak();
        if ( s_subscriptionsHeldPool.m_poolData[v9] <= 0xBB8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 94, ASSERT_TYPE_ASSERT, "(m_poolData[poolIndex] > PoolSize)", (const char *)&queryFormat, "m_poolData[poolIndex] > PoolSize") )
          __debugbreak();
        s_subscriptionsHeldPool.m_poolData[v9] = s_subscriptionsHeldPool.m_firstFree;
        s_subscriptionsHeldPool.m_firstFree = v9;
        *(_QWORD *)&v7->subscription = 0i64;
        v7->next = NULL;
      }
    }
    while ( first );
    v4 = v10;
  }
  v5->first = NULL;
  if ( j_lua_gettop(luaVM) != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 416, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == luaTop)", (const char *)&queryFormat, "lua_gettop( luaVM ) == luaTop") )
    __debugbreak();
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_ConstructSubscriptionsHolder
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_ConstructSubscriptionsHolder(lua_State *luaVM)
{
  LUISubscriptionsHolder *v2; 
  unsigned int v3; 

  v2 = LUIUserDataPool<LUISubscriptionsHolder,0,3000>::Allocate(&s_subscriptionsHolderPool, 2, "LUISubscriptionsHolder", luaVM);
  ++s_allocatedSubscriptionsHolders;
  v2->first = NULL;
  j_lua_createtable(luaVM, 0, 3);
  j_luaL_register(luaVM, NULL, LUISubscriptionsHolder_Metatable);
  j_lua_setmetatable(luaVM, -2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementAlphaToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementAlphaToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementAlphaToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, RIGHT, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementBottomToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementBottomToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementBottomToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, (LUIDataBindingProperty)8, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementColorToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementColorToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementColorToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, (LUIDataBindingProperty)2, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementLeftToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementLeftToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementLeftToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, (LUIDataBindingProperty)5, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementRightToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementRightToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementRightToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, (LUIDataBindingProperty)6, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementScaleToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementScaleToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementScaleToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, (LUIDataBindingProperty)3, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementTopToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementTopToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementTopToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, (LUIDataBindingProperty)7, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_BindElementZRotationToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_BindElementZRotationToModel(lua_State *luaVM)
{
  unsigned int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:BindElementZRotationToModel( element, model )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) && j_lua_isuserdata(luaVM, 3) )
  {
    v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
    v4 = (unsigned __int16)j_lua_touserdata(luaVM, 3);
    v5 = BindElementPropertyToModel(v3, v4, 2, (LUIDataBindingProperty)4, luaVM);
    j_lua_pushlightuserdata(luaVM, (void *)v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_SubscribeToModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_SubscribeToModel(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUISubscriptionsHolder_SubscribeToModel_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_SubscribeToModel_impl
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_SubscribeToModel_impl(lua_State *const luaVM)
{
  int v2; 
  LUISubscriptionsHolder *v3; 
  unsigned __int16 v4; 
  void *v5; 
  bool v6; 
  int i; 
  unsigned __int16 m_firstFree; 
  LUISubscriptionHeld *v9; 
  int v10; 
  char outBuffer[512]; 
  char dest[512]; 

  if ( j_lua_gettop(luaVM) != 3 && j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || j_lua_type(luaVM, 3) != 6 || j_lua_gettop(luaVM) != 3 && j_lua_type(luaVM, 4) != 1 && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:SubscribeToModel( model, callback, ?noCallbackOnSubscribe )");
  if ( j_lua_gettop(luaVM) != 3 && j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || j_lua_type(luaVM, 3) != 6 || j_lua_gettop(luaVM) != 3 && j_lua_type(luaVM, 4) != 1 && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = j_lua_gettop(luaVM);
  v3 = LUI_ToSubscriptionsHolder(luaVM, 1);
  v4 = (unsigned __int16)j_lua_touserdata(luaVM, 2);
  v5 = (void *)LUI_Model_Subscribe(v4, 3, LEFT, luaVM);
  v6 = 0;
  if ( j_lua_gettop(luaVM) == 4 )
    v6 = j_lua_toboolean(luaVM, 4) > 0;
  for ( i = 0; i < 2; ++i )
  {
    m_firstFree = s_subscriptionsHeldPool.m_firstFree;
    if ( s_subscriptionsHeldPool.m_firstFree < 0xBB8u )
    {
      s_subscriptionsHeldPool.m_firstFree = s_subscriptionsHeldPool.m_poolData[s_subscriptionsHeldPool.m_firstFree];
      s_subscriptionsHeldPool.m_poolData[m_firstFree] = 3001;
      v9 = &s_subscriptionsHeldPool.m_pool[m_firstFree];
      if ( v9 )
        goto LABEL_30;
    }
    else
    {
      v9 = NULL;
    }
    if ( i >= 1 )
    {
      Com_PrintError(13, "LUI ERROR: Failed to allocate from LUI pool. Restarting the Lua VM.", 3001i64);
      LUI_HandleLuaError(4);
    }
    else
    {
      LUI_Interface_DebugPrint("LUI POOL WARNING: Could not allocate (size=%d), attempt %d/%d\n", 3000i64, (unsigned int)(i + 1), 2i64);
      LUI_EmergencyFullGC(luaVM, "subscriptionsHolder:SubscribeToModel limit (%i)", 3000i64);
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 84, ASSERT_TYPE_ASSERT, "(held)", (const char *)&queryFormat, "held") )
    __debugbreak();
LABEL_30:
  v9->subscription = (unsigned int)v5;
  if ( !j_lua_getmetatable(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 87, ASSERT_TYPE_ASSERT, "(lua_getmetatable( luaVM, 1 ))", (const char *)&queryFormat, "lua_getmetatable( luaVM, 1 )") )
    __debugbreak();
  j_lua_pushvalue(luaVM, 3);
  v9->strongLuaRef = j_luaL_ref(luaVM, -2);
  j_lua_settop(luaVM, -2);
  if ( v9->strongLuaRef == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 91, ASSERT_TYPE_ASSERT, "(held->strongLuaRef != (-2))", (const char *)&queryFormat, "held->strongLuaRef != LUA_NOREF") )
    __debugbreak();
  if ( v9->strongLuaRef == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 92, ASSERT_TYPE_ASSERT, "(held->strongLuaRef != (-1))", (const char *)&queryFormat, "held->strongLuaRef != LUA_REFNIL") )
    __debugbreak();
  v9->next = v3->first;
  v3->first = v9;
  if ( !v6 )
  {
    j_lua_pushvalue(luaVM, 3);
    j_lua_pushvalue(luaVM, 2);
    v10 = LuaShared_PCall(luaVM, 1, 0);
    if ( v10 )
    {
      LUI_Model_GetModelPath(v4, 0x200ui64, outBuffer);
      Com_sprintf(dest, 0x200ui64, "Error while handling model subscription (initial run): %s\n", outBuffer);
      LUI_ReportError(dest, LUI_luaVM);
      LUI_HandleLuaError(v10);
    }
  }
  if ( j_lua_gettop(luaVM) != v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_datamodel_subscriptionsholder.cpp", 116, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == luaTop)", (const char *)&queryFormat, "lua_gettop( luaVM ) == luaTop") )
    __debugbreak();
  j_lua_pushlightuserdata(luaVM, v5);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_UnsubscribeFromAllModels
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_UnsubscribeFromAllModels(lua_State *luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:UnsubscribeFromAllModels()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
    LUI_LUISubscriptionsHolder_UnsubscribeFromAllModels(1, luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUISubscriptionsHolder_UnsubscribeFromModel
==============
*/
__int64 LUI_LuaCall_LUISubscriptionsHolder_UnsubscribeFromModel(lua_State *luaVM)
{
  LUISubscriptionsHolder *v2; 
  unsigned int v3; 
  LUISubscriptionHeld *first; 
  LUISubscriptionHeld *v5; 
  LUISubscriptionHeld *next; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: subscriptionsHolder:UnsubscribeFromModel( subscription )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_isuserdata(luaVM, 2) )
      {
        v2 = LUI_ToSubscriptionsHolder(luaVM, 1);
        v3 = (unsigned int)j_lua_touserdata(luaVM, 2);
        first = v2->first;
        v5 = NULL;
        if ( v2->first )
        {
          while ( 1 )
          {
            next = first->next;
            if ( first->subscription == v3 )
              break;
            v5 = first;
            first = first->next;
            if ( !next )
              goto LABEL_16;
          }
          if ( v5 )
            v5->next = next;
          else
            v2->first = next;
          LUI_LUISubscriptionsHeld_Unsubscribe(first, 1, luaVM);
          LUIPool<LUISubscriptionHeld,3000,1>::Free(&s_subscriptionsHeldPool, first);
        }
      }
    }
  }
LABEL_16:
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_RegisterSubscriptionsHolderMethods
==============
*/
void LUI_RegisterSubscriptionsHolderMethods(lua_State *luaVM)
{
  int v2; 
  LUIMethod<LUISubscriptionsHolder> *v3; 
  int i; 

  j_lua_getfield(luaVM, -10002, "LUI");
  j_lua_getfield(luaVM, -1, "SubscriptionsHolder");
  j_lua_createtable(luaVM, 0, 0);
  j_lua_createtable(luaVM, 0, 0);
  v2 = j_lua_gettop(luaVM);
  v3 = LUIMethod<LUISubscriptionsHolder>::list;
  for ( i = v2; v3; v3 = v3->next )
  {
    j_lua_pushstring(luaVM, v3->name);
    j_lua_pushcclosure(luaVM, v3->func, 0);
    j_lua_settable(luaVM, i);
  }
  j_lua_setfield(luaVM, -2, "__index");
  j_lua_setmetatable(luaVM, -2);
  j_lua_settop(luaVM, -3);
}

/*
==============
LUI_SubscriptionsHolder_GetNumHoldersInUse
==============
*/
__int64 LUI_SubscriptionsHolder_GetNumHoldersInUse()
{
  return (unsigned int)s_allocatedSubscriptionsHolders;
}

/*
==============
LUI_SubscriptionsHolder_GetNumHoldersTotal
==============
*/
__int64 LUI_SubscriptionsHolder_GetNumHoldersTotal()
{
  return 3000i64;
}

/*
==============
LUI_SubscriptionsHolder_Initialize
==============
*/
void LUI_SubscriptionsHolder_Initialize(void)
{
  unsigned __int16 *m_poolData; 
  unsigned __int16 i; 
  unsigned __int16 v2; 
  unsigned __int16 *v3; 

  memset_0(&s_subscriptionsHolderPool, 0, 0x5DC0ui64);
  m_poolData = s_subscriptionsHolderPool.m_poolData;
  for ( i = 0; i < 0xBB8u; *m_poolData++ = ++i )
    ;
  *(_DWORD *)&s_subscriptionsHolderPool.m_firstFree = 196673536;
  s_subscriptionsHolderPool.m_lastAllocated = 3001;
  memset_0(&s_subscriptionsHeldPool, 0, 0xBB80ui64);
  v2 = 0;
  v3 = s_subscriptionsHeldPool.m_poolData;
  do
    *v3++ = ++v2;
  while ( v2 < 0xBB8u );
  s_subscriptionsHeldPool.m_firstFree = 0;
  s_allocatedSubscriptionsHolders = 0;
}

/*
==============
LUI_ToSubscriptionsHolder
==============
*/
LUISubscriptionsHolder *LUI_ToSubscriptionsHolder(lua_State *luaVM, int index)
{
  _WORD *v2; 
  _WORD *v3; 
  unsigned __int16 v5; 
  __int64 v6; 

  v2 = j_lua_touserdata(luaVM, index);
  v3 = v2;
  if ( !v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 257, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
      __debugbreak();
    return 0i64;
  }
  v5 = *v2;
  if ( v5 >= 0xBB8u )
    return 0i64;
  v6 = v5;
  if ( v3[1] != s_subscriptionsHolderPool.m_poolData[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 274, ASSERT_TYPE_ASSERT, "(userData->iteration == m_poolData[poolIndex])", "%s\n\tAttempted to access data that has already been destroyed!", "userData->iteration == m_poolData[poolIndex]") )
    __debugbreak();
  if ( v3[1] == s_subscriptionsHolderPool.m_poolData[v6] )
    return (LUISubscriptionsHolder *)((char *)&s_subscriptionsHolderPool + 8 * v6);
  else
    return 0i64;
}

