/*
==============
LUIElement_ImageStreamer_Layout
==============
*/

void __fastcall LUIElement_ImageStreamer_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  ?LUIElement_ImageStreamer_Layout@@YAXW4LocalClientNum_t@@PEAULUIElement@@MHPEAUlua_State@@@Z(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUIElement_ImageStreamer_Layout
==============
*/
void LUIElement_ImageStreamer_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime)
{
  const GfxImage *const *customElementData; 
  int v6; 
  _DWORD *i; 

  if ( LUI_Workers_IsRunningCmd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_imagestreamer.cpp", 26, ASSERT_TYPE_ASSERT, "(!LUI_Workers_IsRunningCmd())", (const char *)&queryFormat, "!LUI_Workers_IsRunningCmd()") )
    __debugbreak();
  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_imagestreamer.cpp", 27, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (const GfxImage *const *)element->customElementData;
  v6 = 0;
  for ( i = customElementData + 200; v6 < *i; ++customElementData )
  {
    CL_UIStreaming_TouchImage(*customElementData);
    ++v6;
  }
}

/*
==============
LUI_LuaCall_LUIElement_GetStreamedImageNameTable
==============
*/
__int64 LUI_LuaCall_LUIElement_GetStreamedImageNameTable(lua_State *luaVM)
{
  unsigned int v1; 
  LUIElement *v3; 
  LUIImageStreamer *CustomElement; 
  int *p_numHandles; 
  int i; 
  const char *name; 
  unsigned int v8; 

  v1 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  if ( v3->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIImageStreamer>(v3, luaVM);
    p_numHandles = &CustomElement->numHandles;
    if ( (unsigned int)(CustomElement->numHandles - 1) > 0xC6 )
    {
      v1 = 0;
    }
    else
    {
      j_lua_createtable(luaVM, 0, 0);
      for ( i = 0; i < *p_numHandles; CustomElement = (LUIImageStreamer *)((char *)CustomElement + 8) )
      {
        name = CustomElement->handles[0]->name;
        if ( name )
        {
          j_lua_pushstring(luaVM, name);
          j_lua_rawseti(luaVM, -2, i);
        }
        ++i;
      }
    }
  }
  else
  {
    j_lua_pushboolean(luaVM, 0);
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v8);
  }
  return v1;
}

/*
==============
LUI_LuaCall_LUIElement_PrintStreamedImage
==============
*/
__int64 LUI_LuaCall_LUIElement_PrintStreamedImage(lua_State *luaVM)
{
  unsigned int v1; 
  LUIElement *v3; 
  LUIImageStreamer *CustomElement; 
  int *p_numHandles; 
  int numHandles; 
  int v7; 
  const char *name; 
  unsigned int v9; 

  v1 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  if ( v3->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIImageStreamer>(v3, luaVM);
    v1 = 0;
    p_numHandles = &CustomElement->numHandles;
    numHandles = CustomElement->numHandles;
    if ( (unsigned int)(numHandles - 1) <= 0xC6 )
    {
      v7 = 0;
      if ( numHandles > 0 )
      {
        do
        {
          name = CustomElement->handles[0]->name;
          if ( name )
            Com_Printf(13, "Streamed image name: %s\n", name);
          ++v7;
          CustomElement = (LUIImageStreamer *)((char *)CustomElement + 8);
        }
        while ( v7 < *p_numHandles );
      }
    }
  }
  else
  {
    j_lua_pushboolean(luaVM, 0);
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v9);
  }
  return v1;
}

/*
==============
LUI_LuaCall_LUIElement_SetupImageStreamer
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupImageStreamer(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupImageStreamer_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupImageStreamer_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupImageStreamer_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIImageStreamer *CustomElement; 
  bool v4; 
  int v5; 
  int v6; 
  const GfxImage *v7; 
  unsigned int GfxImageIndex; 
  int v9; 
  const GfxImage **v10; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_ImageStreamer_Layout;
  v2->usageFlags |= 2u;
  if ( v2->customElementData )
  {
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<LUIImageStreamer>(v2, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v2, luaVM);
    CustomElement = (LUIImageStreamer *)j_lua_newuserdata(luaVM, 0x648ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v2->customElementData = CustomElement;
    memset_0(CustomElement, 0, sizeof(LUIImageStreamer));
  }
  v4 = 0;
  if ( j_lua_gettop(luaVM) != 3 )
    goto LABEL_18;
  if ( j_lua_type(luaVM, 3) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 3 )");
  v5 = j_lua_toboolean(luaVM, 3);
  v4 = v5 != 0;
  if ( !v5 )
LABEL_18:
    CustomElement->numHandles = 0;
  v6 = 0;
  j_lua_pushinteger(luaVM, 1i64);
  j_lua_gettable(luaVM, 2);
  if ( j_lua_type(luaVM, -1) )
  {
    while ( CustomElement->numHandles < 200 && v6 < 200 )
    {
      v7 = (const GfxImage *)j_lua_touserdata(luaVM, -1);
      GfxImageIndex = DB_GetGfxImageIndex(v7);
      j_lua_settop(luaVM, -2);
      if ( v4 && (v9 = 0, CustomElement->numHandles > 0) )
      {
        v10 = (const GfxImage **)CustomElement;
        while ( GfxImageIndex != DB_GetGfxImageIndex(*v10) )
        {
          ++v9;
          ++v10;
          if ( v9 >= CustomElement->numHandles )
            goto LABEL_27;
        }
      }
      else
      {
LABEL_27:
        CustomElement->handles[CustomElement->numHandles++] = v7;
      }
      j_lua_pushinteger(luaVM, ++v6 + 1);
      j_lua_gettable(luaVM, 2);
      if ( !j_lua_type(luaVM, -1) )
        goto LABEL_31;
    }
    Com_PrintWarning(13, "Attempting to use a ImageStreamer LUI element with more than %d images. Additional images will not be streamed ahead of time.\n", 200i64);
  }
LABEL_31:
  j_lua_settop(luaVM, -2);
  return 0i64;
}

