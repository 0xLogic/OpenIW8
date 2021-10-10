/*
==============
LUI_TextEdit_HandleMouseMove
==============
*/

void __fastcall LUI_TextEdit_HandleMouseMove(LocalClientNum_t localClientNum, int luaRef, int mouseX, int mouseY, const char *rootName, lua_State *luaVM)
{
  ?LUI_TextEdit_HandleMouseMove@@YAXW4LocalClientNum_t@@HHHPEBDPEAUlua_State@@@Z(localClientNum, luaRef, mouseX, mouseY, rootName, luaVM);
}

/*
==============
LUI_TextEdit_GetCursorPosition
==============
*/

void __fastcall LUI_TextEdit_GetCursorPosition(LocalClientNum_t localClientNum, int luaRef, int *outX, int *outY, lua_State *luaVM)
{
  ?LUI_TextEdit_GetCursorPosition@@YAXW4LocalClientNum_t@@HAEAH1PEAUlua_State@@@Z(localClientNum, luaRef, outX, outY, luaVM);
}

/*
==============
LUI_TextEdit_HandleChar
==============
*/

void __fastcall LUI_TextEdit_HandleChar(LocalClientNum_t localClientNum, int luaRef, lua_State *key)
{
  ?LUI_TextEdit_HandleChar@@YAXW4LocalClientNum_t@@H_UPEAUlua_State@@@Z(localClientNum, luaRef, key);
}

/*
==============
LUI_TextEdit_HandleKey
==============
*/

bool __fastcall LUI_TextEdit_HandleKey(LocalClientNum_t localClientNum, int luaRef, int key, float screenX, float screenY, const char *rootName, lua_State *luaVM, bool isDoubleClick)
{
  return ?LUI_TextEdit_HandleKey@@YA_NW4LocalClientNum_t@@HHMMPEBDPEAUlua_State@@_N@Z(localClientNum, luaRef, key, screenX, screenY, rootName, luaVM, isDoubleClick);
}

/*
==============
LUI_TextEdit_HandlesKey
==============
*/

bool __fastcall LUI_TextEdit_HandlesKey(const int key)
{
  return ?LUI_TextEdit_HandlesKey@@YA_NH@Z(key);
}

/*
==============
LUI_TextEdit_HandledGamepadUpEvent
==============
*/

bool __fastcall LUI_TextEdit_HandledGamepadUpEvent(int luaRef, const int key, lua_State *luaVM)
{
  return ?LUI_TextEdit_HandledGamepadUpEvent@@YA_NHHPEAUlua_State@@@Z(luaRef, key, luaVM);
}

/*
==============
LUI_TextEdit_Finish
==============
*/

void __fastcall LUI_TextEdit_Finish(LocalClientNum_t localClientNum, LUIElement *element, LUITextEditField *editPtr, bool cancelled, bool active, bool switchTextEditField, lua_State *luaVM)
{
  ?LUI_TextEdit_Finish@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAULUITextEditField@@_N33PEAUlua_State@@@Z(localClientNum, element, editPtr, cancelled, active, switchTextEditField, luaVM);
}

/*
==============
LUIElement_TextEditRender
==============
*/
void LUIElement_TextEditRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v9; 
  const LUITextEditField *v11; 
  int userDataInt; 
  float v13; 
  UIInputType lastInputType; 
  bool v15; 
  float bottom; 
  float v17; 
  char cursor; 
  __int64 v19; 
  int v20; 
  float v21[4]; 
  LUITextEditRenderData renderData; 

  v9 = localClientNum;
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 805, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, "m_LUITextEditField");
  v11 = (const LUITextEditField *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  if ( v11 )
  {
    memset_0(&renderData, 0, 0x25Bui64);
    renderData.overflowLen = 0.0;
    renderData.selectionOffset = 0.0;
    renderData.selectionLen = 0.0;
    renderData.utf8CursorPos = 0;
    LUI_TextEdit_GetRenderData((LocalClientNum_t)v9, element, v11, v11->length, &renderData);
    userDataInt = element->currentAnimationState.userDataInt;
    v13 = element->right - element->left;
    if ( (unsigned int)v9 >= 2 )
    {
      v20 = 2;
      LODWORD(v19) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    lastInputType = clientUIActives[v9].lastInputType;
    v15 = userDataInt == 0;
    if ( userDataInt )
    {
      if ( v11->selectionLength > 0 && v11->selectionPos > -1 )
      {
        bottom = element->bottom;
        v17 = (float)(bottom - element->top) + 4.0;
        *(vec4_t *)v21 = v11->textSelectionHighlightColor;
        LUI_Interface_DrawTextSelection((const LocalClientNum_t)v9, element, (float)(element->left - renderData.overflowLen) + renderData.selectionOffset, bottom - 2.0, renderData.selectionLen, v17, (vec4_t *)v21, luaVM);
      }
      v15 = userDataInt == 0;
    }
    if ( v15 || lastInputType == GAMEPAD )
    {
      LUI_Interface_DrawText((const LocalClientNum_t)v9, root, element, element->left - renderData.overflowLen, element->bottom, red, green, blue, alpha, renderData.utf8Text, element->textData.font, element->bottom - element->top, v13, 0, 0, element->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
    }
    else
    {
      v15 = CL_Keys_GetOverstrikeMode((LocalClientNum_t)v9) == 0;
      cursor = 124;
      if ( !v15 )
        cursor = 95;
      LUI_Interface_DrawTextWithCursor((const LocalClientNum_t)v9, element, element->left - renderData.overflowLen, element->bottom, red, green, blue, alpha, renderData.utf8Text, element->textData.font, element->bottom - element->top, v13, renderData.utf8CursorPos, cursor, luaVM);
    }
  }
}

/*
==============
LUI_LuaCall_LUIElement_setDisableAfterEdit
==============
*/
__int64 LUI_LuaCall_LUIElement_setDisableAfterEdit(lua_State *luaVM)
{
  bool v2; 
  _DWORD *v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_gettop(luaVM) != 1 && j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_isboolean( luaVM, 2 )");
  v2 = 1;
  if ( j_lua_type(luaVM, 2) == 1 )
    v2 = j_lua_toboolean(luaVM, 2) == 1;
  j_lua_getfield(luaVM, 1, "m_LUITextEditField");
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    v3 = j_lua_touserdata(luaVM, -1);
    j_lua_settop(luaVM, -2);
    v4 = v3[160] | 8;
    if ( !v2 )
      v4 = v3[160] & 0xFFFFFFF7;
    v3[160] = v4;
  }
  else
  {
    j_lua_settop(luaVM, -2);
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
LUI_LuaCall_LUIElement_setShowPassword
==============
*/
__int64 LUI_LuaCall_LUIElement_setShowPassword(lua_State *luaVM)
{
  bool v2; 
  _DWORD *v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_gettop(luaVM) != 1 && j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_isboolean( luaVM, 2 )");
  v2 = 1;
  if ( j_lua_type(luaVM, 2) == 1 )
    v2 = j_lua_toboolean(luaVM, 2) == 1;
  j_lua_getfield(luaVM, 1, "m_LUITextEditField");
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    v3 = j_lua_touserdata(luaVM, -1);
    j_lua_settop(luaVM, -2);
    v4 = v3[160] | 2;
    if ( !v2 )
      v4 = v3[160] & 0xFFFFFFFD;
    v3[160] = v4;
  }
  else
  {
    j_lua_settop(luaVM, -2);
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
LUI_LuaCall_LUIElement_setTextEditActive
==============
*/
__int64 LUI_LuaCall_LUIElement_setTextEditActive(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setTextEditActive_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setTextEditActive_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setTextEditActive_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  bool active; 
  LUITextEditField *v5; 
  LocalClientNum_t ClientFromController; 
  int v7; 
  LocalClientNum_t v8; 
  LUIElement *TextEditActive; 
  LUIElement *v10; 
  LUITextEditField *v11; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_gettop(luaVM) != 1 && j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1 || lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  active = 1;
  if ( j_lua_type(luaVM, 2) == 1 )
    active = j_lua_toboolean(luaVM, 2) == 1;
  j_lua_getfield(luaVM, 1, "m_LUITextEditField");
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    v5 = (LUITextEditField *)j_lua_touserdata(luaVM, -1);
    j_lua_settop(luaVM, -2);
    ClientFromController = CL_Mgr_GetClientFromController(v5->controllerIndex);
    v5->flags &= ~2u;
    v7 = 0;
    v8 = ClientFromController;
    if ( active )
    {
      TextEditActive = LUI_Interface_GetTextEditActive(ClientFromController, luaVM);
      v10 = TextEditActive;
      if ( TextEditActive != v2 )
      {
        if ( TextEditActive && LUI_ElementHasWeakTableEntry(TextEditActive, luaVM) )
        {
          LUI_PutElementOnTopOfStack(v10, luaVM);
          j_lua_getfield(luaVM, -1, "m_LUITextEditField");
          if ( j_lua_isuserdata(luaVM, -1) )
          {
            v11 = (LUITextEditField *)j_lua_touserdata(luaVM, -1);
            LUI_TextEdit_Finish(v8, v10, v11, 0, active, 1, luaVM);
          }
          j_lua_settop(luaVM, -3);
        }
        v2->currentAnimationState.userDataInt = 1;
        LUI_Interface_SetTextEditActive(v8, v2, 1, luaVM);
      }
      if ( SLOBYTE(v5->flags) >= 0 )
      {
        v5->selectionPos = -1;
        v5->selectionLength = 0;
      }
      else
      {
        *(_QWORD *)&v5->selectionLength = (unsigned int)v5->length;
      }
    }
    else
    {
      LUI_TextEdit_Finish(ClientFromController, v2, v5, 0, 0, 0, luaVM);
    }
    LOBYTE(v7) = v5->length > 0;
    j_lua_pushboolean(luaVM, v7);
    return 1i64;
  }
  else
  {
    j_lua_settop(luaVM, -2);
    return 0i64;
  }
}

/*
==============
LUI_LuaCall_LUIElement_setTextEditText
==============
*/
__int64 LUI_LuaCall_LUIElement_setTextEditText(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setTextEditText_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setTextEditText_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setTextEditText_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  const char *v3; 
  _DWORD *v4; 
  int v5; 
  int v6; 
  const unsigned __int8 *v7; 
  unsigned int GlyphFromUTF8; 
  __int64 v9; 
  int v10; 
  char *v11; 
  int numBytesConsumed[4]; 
  char utf8Buffer[608]; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_getfield(luaVM, 1, "m_LUITextEditField");
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    v4 = j_lua_touserdata(luaVM, -1);
    j_lua_settop(luaVM, -2);
    if ( j_lua_type(luaVM, 4) != 1 || (v5 = 150, !j_lua_toboolean(luaVM, 4)) )
      v5 = v4[154];
    if ( j_lua_isstring(luaVM, 2) )
    {
      v6 = 0;
      v4[150] = 0;
      v7 = (const unsigned __int8 *)j_lua_tolstring(luaVM, 2, NULL);
      while ( 1 )
      {
        numBytesConsumed[0] = 0;
        GlyphFromUTF8 = GetGlyphFromUTF8(v7, numBytesConsumed);
        if ( GlyphFromUTF8 == -1 )
          j_luaL_error(luaVM, "Invalid utf8 string passed to setTextEditText");
        v7 += numBytesConsumed[0];
        if ( !GlyphFromUTF8 )
          break;
        v9 = (int)v4[150];
        if ( (_DWORD)v9 == v5 )
          break;
        if ( GlyphFromUTF8 >= 0x20 && (GlyphFromUTF8 <= 0x7E || GlyphFromUTF8 >= 0xA0) )
        {
          v4[v9] = GlyphFromUTF8;
          ++v4[150];
        }
      }
      if ( j_lua_type(luaVM, 3) == 1 && j_lua_toboolean(luaVM, 3) )
      {
        v10 = v4[151];
        v6 = v4[150] - v10;
        v4[153] = v10;
      }
      else
      {
        v4[151] = v4[150];
      }
      v4[152] = v6;
      v11 = (char *)(unsigned int)v4[150];
      v4[160] |= 2u;
      LUI_TextEdit_Utf32ToUtf8((int)v4, v11, (int)utf8Buffer);
      LUI_LUIElement_SetText(v2, utf8Buffer, luaVM);
    }
  }
  else
  {
    j_lua_settop(luaVM, -2);
    if ( j_lua_isstring(luaVM, 2) )
    {
      v3 = j_lua_tolstring(luaVM, 2, NULL);
      LUI_LUIElement_SetText(v2, v3, luaVM);
    }
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setTextSelectionHighlightColor
==============
*/
__int64 LUI_LuaCall_LUIElement_setTextSelectionHighlightColor(lua_State *luaVM)
{
  float v2; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  double v9; 
  float *v10; 
  unsigned int v11; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = 0.0;
  v3 = 0.0;
  if ( j_lua_isnumber(luaVM, 2) )
  {
    v4 = lui_tonumber32(luaVM, 2);
    v3 = *(float *)&v4 * 0.0039215689;
  }
  v5 = 0.0;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    v6 = lui_tonumber32(luaVM, 3);
    v5 = *(float *)&v6 * 0.0039215689;
  }
  v7 = 0.0;
  if ( j_lua_isnumber(luaVM, 4) )
  {
    v8 = lui_tonumber32(luaVM, 4);
    v7 = *(float *)&v8 * 0.0039215689;
  }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    v9 = lui_tonumber32(luaVM, 5);
    v2 = *(float *)&v9 * 0.0039215689;
  }
  j_lua_getfield(luaVM, 1, "m_LUITextEditField");
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    v10 = (float *)j_lua_touserdata(luaVM, -1);
    j_lua_settop(luaVM, -2);
    v10[156] = v3;
    v10[157] = v5;
    v10[158] = v7;
    v10[159] = v2;
  }
  else
  {
    j_lua_settop(luaVM, -2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v11);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setupTextEdit
==============
*/
__int64 LUI_LuaCall_LUIElement_setupTextEdit(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setupTextEdit_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setupTextEdit_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setupTextEdit_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int *v3; 
  int v4; 
  int v5; 
  LocalClientNum_t localClientNum; 

  if ( j_lua_gettop(luaVM) != 13 )
    j_luaL_error(luaVM, "USAGE: element:setupTextEdit( maxLength, isPassword, useAutoAlign, disableAfterEdit, isNumeric, autoConfirmOnTab, autoConfirmOnOutsideClick, autoSelectAllOnActive, wantTabButtonEvent, letGamepadInputsGoThrough, alwaysSendTypingEvents, controllerIndex )\n");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->renderFunction = LUIElement_TextEditRender;
  v2->usageFlags |= 3u;
  LUIElement_InitTextLikeElement(v2);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 888, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( self, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( self, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = (int *)j_lua_newuserdata(luaVM, 0x288ui64);
  memset_0(v3, 0, 0x288ui64);
  if ( j_lua_isnumber(luaVM, 2) )
  {
    v4 = lui_tointeger32(luaVM, 2);
    v5 = 150;
    if ( v4 < 150 )
      v5 = v4;
    v3[154] = v5;
  }
  else
  {
    v5 = v3[154];
  }
  if ( !v5 )
    v3[154] = 150;
  if ( j_lua_type(luaVM, 3) == 1 && j_lua_toboolean(luaVM, 3) )
    v3[160] |= 1u;
  if ( j_lua_type(luaVM, 4) == 1 && j_lua_toboolean(luaVM, 4) )
    v3[160] |= 4u;
  if ( j_lua_type(luaVM, 5) == 1 && j_lua_toboolean(luaVM, 5) )
    v3[160] |= 8u;
  if ( j_lua_type(luaVM, 6) == 1 && j_lua_toboolean(luaVM, 6) )
    v3[160] |= 0x10u;
  if ( j_lua_type(luaVM, 7) == 1 && j_lua_toboolean(luaVM, 7) )
    v3[160] |= 0x20u;
  if ( j_lua_type(luaVM, 8) == 1 && j_lua_toboolean(luaVM, 8) )
    v3[160] |= 0x40u;
  if ( j_lua_type(luaVM, 9) == 1 && j_lua_toboolean(luaVM, 9) )
    v3[160] |= 0x80u;
  if ( j_lua_type(luaVM, 10) == 1 && j_lua_toboolean(luaVM, 10) )
    v3[160] |= 0x100u;
  if ( j_lua_type(luaVM, 11) == 1 && j_lua_toboolean(luaVM, 11) )
    v3[160] |= 0x200u;
  if ( j_lua_type(luaVM, 12) == 1 && j_lua_toboolean(luaVM, 12) )
    v3[160] |= 0x400u;
  if ( j_lua_isnumber(luaVM, 13) )
    v3[161] = lua_tointeger32(luaVM, 13);
  else
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, v3 + 161);
  v3[156] = 1057132380;
  v3[157] = 1057803469;
  v3[158] = 1056964608;
  v3[159] = 1061662228;
  j_lua_setfield(luaVM, -2, "m_LUITextEditField");
  j_lua_settop(luaVM, -2);
  return 0i64;
}

/*
==============
LUI_TextEdit_CopyCurrentSelection
==============
*/
void LUI_TextEdit_CopyCurrentSelection(LUITextEditField *editPtr)
{
  char utf8Buffer[608]; 

  LUI_TextEdit_Utf32ToUtf8((_DWORD)editPtr + 4 * editPtr->selectionPos, (char *)(unsigned int)editPtr->selectionLength, (int)utf8Buffer);
  Sys_SetUnicodeClipboardData(utf8Buffer);
}

/*
==============
LUI_TextEdit_Finish
==============
*/
void LUI_TextEdit_Finish(LocalClientNum_t localClientNum, LUIElement *element, LUITextEditField *editPtr, bool cancelled, bool active, bool switchTextEditField, lua_State *luaVM)
{
  char utf8Buffer[608]; 

  if ( element->currentAnimationState.userDataInt == 1 )
  {
    if ( (editPtr->flags & 8) != 0 )
    {
      element->currentAnimationState.userDataInt = 0;
      LUI_Interface_SetTextEditActive(localClientNum, element, 0, luaVM);
    }
    LUI_TextEdit_Utf32ToUtf8((int)editPtr, (char *)(unsigned int)editPtr->length, (int)utf8Buffer);
    LUI_LUIElement_SetText(element, utf8Buffer, luaVM);
    if ( LUI_BeginEvent(localClientNum, "text_edit_complete", luaVM) )
    {
      LUI_SetTableBool("immediate", 1, luaVM);
      LUI_SetTableBool("cancelled", cancelled, LUI_luaVM);
      LUI_SetTableBool("active", active, LUI_luaVM);
      LUI_SetTableBool("switchTextEditField", switchTextEditField, LUI_luaVM);
      LUI_SetTableString("text", utf8Buffer, LUI_luaVM);
      LUI_EndEvent(luaVM);
    }
  }
}

/*
==============
LUI_TextEdit_GetCursorPosition
==============
*/
void LUI_TextEdit_GetCursorPosition(LocalClientNum_t localClientNum, int luaRef, int *outX, int *outY, lua_State *luaVM)
{
  LUIElement *v8; 
  const LUITextEditField *v9; 
  LUITextEditRenderData renderData; 

  *outY = 0;
  *outX = 0;
  j_lua_rawgeti(luaVM, -10000, luaRef);
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    v8 = LUI_ToElement(luaVM, -1);
    j_lua_getfield(luaVM, -1, "m_LUITextEditField");
    if ( j_lua_isuserdata(luaVM, -1) )
    {
      v9 = (const LUITextEditField *)j_lua_touserdata(luaVM, -1);
      j_lua_settop(luaVM, -3);
      memset_0(&renderData, 0, 0x25Bui64);
      renderData.overflowLen = 0.0;
      renderData.selectionOffset = 0.0;
      renderData.selectionLen = 0.0;
      renderData.utf8CursorPos = 0;
      LUI_TextEdit_GetRenderData(localClientNum, v8, v9, v9->cursorPos, &renderData);
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm2, 1 }
      *outX = R_TextWidth(renderData.utf8Text, -1, v8->textData.font, (int)*(float *)&_XMM3) + (int)v8->left;
      *outY = (int)v8->top;
    }
  }
}

/*
==============
LUI_TextEdit_GetRenderData
==============
*/
void LUI_TextEdit_GetRenderData(LocalClientNum_t localClientNum, const LUIElement *element, const LUITextEditField *editPtr, int charCount, LUITextEditRenderData *renderData)
{
  int v6; 
  const LUIElement *v8; 
  int v11; 
  int v12; 
  LUITextEditRenderData *v13; 
  float v14; 
  char v15; 
  __int128 v16; 
  int selectionPos; 
  int selectionLength; 
  int v21; 
  unsigned __int64 v22; 
  int v23; 
  char *v24; 
  int v25; 
  const char *v26; 
  char *v27; 
  char v28; 
  LocalClientNum_t v29; 
  LUITextEditRenderData *renderDataa; 

  v29 = localClientNum;
  v6 = 0;
  v8 = element;
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  v11 = (int)*(float *)&_XMM2;
  if ( !element->currentAnimationState.userDataInt )
  {
    renderData->utf8Text[0] = 31;
    v6 = 1;
  }
  v12 = 0;
  v13 = NULL;
  renderDataa = (LUITextEditRenderData *)charCount;
  while ( 1 )
  {
    if ( v12 == editPtr->cursorPos )
    {
      renderData->utf8CursorPos = v6;
      if ( (editPtr->flags & 4) != 0 )
      {
        v14 = v8->right - v8->left;
        if ( v14 > 0.0 )
        {
          if ( !CL_Keys_GetOverstrikeMode(localClientNum) || (v15 = 95, editPtr->cursorPos >= editPtr->length) )
            v15 = 124;
          renderData->utf8Text[v6] = v15;
          renderData->utf8Text[v6 + 1] = 0;
          v16 = 0i64;
          *(float *)&v16 = (float)R_TextWidth(renderData->utf8Text, -1, v8->textData.font, v11) - v14;
          _XMM1 = v16;
          __asm { vmaxss  xmm1, xmm1, xmm7 }
          renderData->overflowLen = *(float *)&_XMM1;
        }
      }
    }
    selectionPos = editPtr->selectionPos;
    if ( selectionPos > -1 )
    {
      selectionLength = editPtr->selectionLength;
      if ( selectionLength > 0 )
      {
        if ( v12 == selectionPos )
        {
          renderData->utf8Text[v6] = 0;
          renderData->selectionOffset = (float)R_TextWidth(renderData->utf8Text, -1, v8->textData.font, v11);
          selectionPos = editPtr->selectionPos;
          selectionLength = editPtr->selectionLength;
        }
        if ( v12 == selectionLength + selectionPos )
        {
          renderData->utf8Text[v6] = 0;
          renderData->selectionLen = (float)R_TextWidth(renderData->utf8Text, -1, v8->textData.font, v11) - renderData->selectionOffset;
        }
      }
    }
    if ( v13 == renderDataa )
      break;
    if ( (editPtr->flags & 3) == 1 )
    {
      v21 = 42;
    }
    else
    {
      v21 = *(_DWORD *)&editPtr->gap0[4 * (_QWORD)v13];
      if ( v21 == 94 && v12 + 1 < charCount )
      {
        if ( &editPtr->gap0[4 * v12 + 4] )
        {
          v25 = *(_DWORD *)&editPtr->gap0[4 * (_QWORD)v13 + 4];
          if ( v25 != 94 && (unsigned int)(v25 - 39) <= 0x17 )
          {
            v26 = aA_18;
            v27 = &renderData->utf8Text[v6];
            v28 = 94;
            do
            {
              *v27 = v28;
              v28 = *++v26;
              ++v27;
              ++v6;
            }
            while ( *v26 );
            goto LABEL_44;
          }
        }
      }
    }
    v22 = 602i64 - v6;
    if ( v21 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 73, ASSERT_TYPE_ASSERT, "(unicodeChar >= 0)", (const char *)&queryFormat, "unicodeChar >= 0") )
      __debugbreak();
    v23 = 0;
    v24 = &renderData->utf8Text[v6];
    if ( v21 > 127 )
    {
      if ( v21 > 2047 )
      {
        if ( v21 > 0xFFFF )
        {
          if ( v21 <= 0x1FFFFF && v22 >= 4 )
          {
            *v24 = ((v21 >> 18) & 7) - 16;
            v24[1] = ((v21 >> 12) & 0x3F) + 0x80;
            v24[2] = ((v21 >> 6) & 0x3F) + 0x80;
            v24[3] = (v21 & 0x3F) + 0x80;
            v23 = 4;
          }
        }
        else if ( v22 >= 3 )
        {
          *v24 = ((v21 >> 12) & 0xF) - 32;
          v24[1] = ((v21 >> 6) & 0x3F) + 0x80;
          v24[2] = (v21 & 0x3F) + 0x80;
          v23 = 3;
        }
      }
      else if ( v22 >= 2 )
      {
        *v24 = ((v21 >> 6) & 0x1F) - 64;
        v24[1] = (v21 & 0x3F) + 0x80;
        v23 = 2;
      }
    }
    else if ( v22 )
    {
      v23 = 1;
      *v24 = v21 & 0x7F;
    }
    v8 = element;
    v6 += v23;
    v11 = (int)*(float *)&_XMM2;
LABEL_44:
    if ( (unsigned int)v6 >= 0x25B && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 190, ASSERT_TYPE_ASSERT, "(utf8Len < sizeof( renderData.utf8Text ))", (const char *)&queryFormat, "utf8Len < sizeof( renderData.utf8Text )") )
      __debugbreak();
    localClientNum = v29;
    ++v12;
    v13 = (LUITextEditRenderData *)((char *)v13 + 1);
  }
  renderData->utf8Text[v6] = 0;
}

/*
==============
LUI_TextEdit_HandleChar
==============
*/
void LUI_TextEdit_HandleChar(LocalClientNum_t localClientNum, int luaRef, lua_State *key, lua_State *a4)
{
  unsigned int v4; 
  LUIElement *v7; 
  LUITextEditField *v8; 
  int length; 
  int cursorPos; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  char *v14; 
  char *v15; 
  _DWORD *v16; 
  int v17; 
  int ControllerFromClient; 
  char utf8Buffer[608]; 

  v4 = (unsigned int)key;
  j_lua_rawgeti(a4, -10000, luaRef);
  if ( !j_lua_isuserdata(a4, -1) )
  {
    LUI_Interface_SetTextEditActive(localClientNum, NULL, 0, a4);
    return;
  }
  v7 = LUI_ToElement(a4, -1);
  j_lua_getfield(a4, -1, "m_LUITextEditField");
  if ( !j_lua_isuserdata(a4, -1) )
  {
    v7->currentAnimationState.userDataInt = 0;
    LUI_Interface_SetTextEditActive(localClientNum, v7, 0, a4);
    return;
  }
  v8 = (LUITextEditField *)j_lua_touserdata(a4, -1);
  j_lua_settop(a4, -3);
  if ( (unsigned int)(v8->maxChars - 1) > 0x95 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 396, ASSERT_TYPE_ASSERT, "(editPtr->maxChars > 0 && editPtr->maxChars <= 150)", (const char *)&queryFormat, "editPtr->maxChars > 0 && editPtr->maxChars <= MAX_LUI_TEXT_EDIT_LEN") )
    __debugbreak();
  length = v8->length;
  if ( (length < 0 || length > v8->maxChars) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 397, ASSERT_TYPE_ASSERT, "(editPtr->length >= 0 && editPtr->length <= editPtr->maxChars)", (const char *)&queryFormat, "editPtr->length >= 0 && editPtr->length <= editPtr->maxChars") )
    __debugbreak();
  cursorPos = v8->cursorPos;
  if ( (cursorPos < 0 || cursorPos > v8->length) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 398, ASSERT_TYPE_ASSERT, "(editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length)", (const char *)&queryFormat, "editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length") )
    __debugbreak();
  if ( v4 - 32 <= 0x5E || v4 >= 0xA0 )
  {
    if ( (v8->flags & 0x10) != 0 && v4 - 48 > 9 && v4 - 45 > 1 )
      return;
    if ( v8->selectionLength > 0 && v8->selectionPos > -1 )
      LUI_TextEdit_RemoveCurrentSelection(v8, v7, a4);
    if ( !CL_Keys_GetOverstrikeMode(localClientNum) || (LODWORD(v11) = v8->cursorPos, (_DWORD)v11 == v8->length) )
    {
      v12 = v8->length;
      if ( (_DWORD)v12 == v8->maxChars )
        return;
      v11 = v8->cursorPos;
      v13 = v12 + 1;
      v8->length = v12 + 1;
      v14 = &v8->gap0[4 * v12];
      v15 = &v8->gap0[4 * v11];
      v16 = &v8->gap0[4 * v13];
      if ( v14 != v15 )
      {
        do
        {
          v17 = *((_DWORD *)v14 - 1);
          --v16;
          v14 -= 4;
          *v16 = v17;
        }
        while ( v14 != v15 );
        LODWORD(v11) = v8->cursorPos;
      }
    }
    *(_DWORD *)&v8->gap0[4 * (int)v11] = v4;
    ++v8->cursorPos;
    LUI_TextEdit_SetLUIElementText(v8, v7, a4);
  }
  if ( v8->length > 0 && (!v8->isTypingEventSent || (v8->flags & 0x400) != 0) )
  {
    if ( LUI_BeginEvent(localClientNum, "text_edit_is_typing", a4) )
    {
      if ( *(_DWORD *)v8->gap0 == 47 )
        LUI_SetTableBool("isKeyForwardSlash", 1, LUI_luaVM);
      LUI_SetTableBool("isTyping", 1, LUI_luaVM);
      if ( (v8->flags & 0x400) != 0 )
      {
        LUI_TextEdit_Utf32ToUtf8((int)v8, (char *)(unsigned int)v8->length, (int)utf8Buffer);
        LUI_SetTableString("text", utf8Buffer, LUI_luaVM);
      }
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      LUI_SetTableInt("controller", ControllerFromClient, LUI_luaVM);
      LUI_EndEvent(a4);
    }
    v8->isTypingEventSent = 1;
  }
}

/*
==============
LUI_TextEdit_HandleKey
==============
*/
char LUI_TextEdit_HandleKey(LocalClientNum_t localClientNum, int luaRef, int key, float screenX, float screenY, const char *rootName, lua_State *luaVM, bool isDoubleClick)
{
  int v10; 
  LUIElement *v12; 
  LUITextEditField *v13; 
  int length; 
  int cursorPos; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  _DWORD *v20; 
  int v21; 
  _DWORD *v22; 
  unsigned __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  char *v27; 
  _DWORD *v28; 
  int v29; 
  char *v30; 
  unsigned __int64 v31; 
  int v32; 
  int OverstrikeMode; 
  unsigned int v34; 
  const char *UnicodeClipboardData; 
  int v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  char *v40; 
  char *v41; 
  char *v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  int flags; 
  const char *v47; 
  int v48; 
  GfxFont *font; 
  int v52; 
  float v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  bool v58; 
  int v59; 
  int v60; 
  int v61; 
  int selectionPos; 
  int v63; 
  int v64; 
  int ControllerFromClient; 
  float outMouseX; 
  float outMouseY; 
  int textHeight; 
  int v69; 
  int v70; 
  LUITextEditRenderData renderData; 
  int v72[152]; 
  char utf8Buffer[608]; 

  j_lua_rawgeti(luaVM, -10000, luaRef);
  v10 = -1;
  if ( !j_lua_isuserdata(luaVM, -1) )
  {
    LUI_Interface_SetTextEditActive(localClientNum, NULL, 0, luaVM);
    return 0;
  }
  v12 = LUI_ToElement(luaVM, -1);
  j_lua_getfield(luaVM, -1, "m_LUITextEditField");
  if ( !j_lua_isuserdata(luaVM, -1) )
  {
    v12->currentAnimationState.userDataInt = 0;
    LUI_Interface_SetTextEditActive(localClientNum, v12, 0, luaVM);
    return 0;
  }
  v13 = (LUITextEditField *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  if ( (unsigned int)(v13->maxChars - 1) > 0x95 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 520, ASSERT_TYPE_ASSERT, "(editPtr->maxChars > 0 && editPtr->maxChars <= 150)", (const char *)&queryFormat, "editPtr->maxChars > 0 && editPtr->maxChars <= MAX_LUI_TEXT_EDIT_LEN") )
    __debugbreak();
  length = v13->length;
  if ( (length < 0 || length > v13->maxChars) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 521, ASSERT_TYPE_ASSERT, "(editPtr->length >= 0 && editPtr->length <= editPtr->maxChars)", (const char *)&queryFormat, "editPtr->length >= 0 && editPtr->length <= editPtr->maxChars") )
    __debugbreak();
  cursorPos = v13->cursorPos;
  if ( (cursorPos < 0 || cursorPos > v13->length) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 522, ASSERT_TYPE_ASSERT, "(editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length)", (const char *)&queryFormat, "editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length") )
    __debugbreak();
  if ( (v13->flags & 0x200) != 0 && KeyCodes_IsGamepadKey((keyNum_t)key) )
    return 0;
  switch ( key )
  {
    case 149:
      if ( v13->selectionPos > -1 && v13->selectionLength > 0 )
      {
LABEL_21:
        LUI_TextEdit_RemoveCurrentSelection(v13, v12, luaVM);
        goto LABEL_140;
      }
      v16 = v13->cursorPos;
      v17 = v13->length;
      if ( (int)v16 < (int)v17 )
      {
        v18 = (unsigned __int64)v13 + 4 * v17;
        v19 = 0i64;
        v20 = &v13->gap0[4 * v16];
        v21 = v17 - 1;
        v22 = v20 + 1;
        v13->length = v21;
        v23 = (v18 - (unsigned __int64)(v20 + 1) + 3) >> 2;
        if ( (unsigned __int64)(v20 + 1) > v18 )
          v23 = 0i64;
        if ( v23 )
        {
          do
          {
            ++v19;
            *v20++ = *v22++;
          }
          while ( v19 != v23 );
        }
LABEL_27:
        LUI_TextEdit_SetLUIElementText(v13, v12, luaVM);
        goto LABEL_140;
      }
      goto LABEL_140;
    case 127:
      if ( v13->selectionPos > -1 && v13->selectionLength > 0 )
        goto LABEL_21;
      v24 = v13->cursorPos;
      if ( (int)v24 > 0 )
      {
        v25 = v13->length;
        v13->cursorPos = v24 - 1;
        v26 = 0i64;
        v27 = &v13->gap0[4 * v25];
        v28 = &v13->gap0[4 * (int)v24 - 4];
        v29 = v25 - 1;
        v30 = &v13->gap0[4 * v24];
        v13->length = v29;
        v31 = (unsigned __int64)(v27 - v30 + 3) >> 2;
        if ( v30 > v27 )
          v31 = 0i64;
        if ( v31 )
        {
          do
          {
            ++v26;
            *v28++ = *(_DWORD *)v30;
            v30 += 4;
          }
          while ( v26 != v31 );
        }
        goto LABEL_27;
      }
      goto LABEL_140;
    case 135:
    case 31:
    case 23:
      if ( !CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
      {
        v13->selectionPos = -1;
        v13->selectionLength = 0;
      }
      v64 = v13->cursorPos;
      if ( v64 < v13->length )
      {
        v13->cursorPos = v64 + 1;
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
          LUI_TextEdit_HandleRightTextSelection(v13, 1);
      }
      goto LABEL_140;
    case 134:
    case 30:
    case 22:
      if ( !CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
      {
        v13->selectionPos = -1;
        v13->selectionLength = 0;
      }
      v61 = v13->cursorPos;
      if ( v61 > 0 )
      {
        v13->cursorPos = v61 - 1;
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
        {
          selectionPos = v13->selectionPos;
          if ( selectionPos == -1 || selectionPos == v13->cursorPos + 1 )
          {
            v63 = v13->cursorPos;
            ++v13->selectionLength;
            v13->selectionPos = v63;
          }
          else
          {
            --v13->selectionLength;
          }
        }
      }
      goto LABEL_140;
  }
  if ( (unsigned int)(key - 151) > 1 )
  {
    if ( key == 153 || (v32 = 150, key == 150) )
    {
      if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
      {
        v10 = v13->cursorPos;
        v59 = v13->length - v10;
      }
      else
      {
        v59 = 0;
      }
      v13->selectionPos = v10;
      v13->selectionLength = v59;
      v13->cursorPos = v13->length;
      goto LABEL_140;
    }
    switch ( key )
    {
      case 148:
        OverstrikeMode = CL_Keys_GetOverstrikeMode(localClientNum);
        CL_Keys_SetOverstrikeMode(localClientNum, OverstrikeMode == 0);
        goto LABEL_140;
      case 97:
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) )
        {
          v34 = v13->length;
          *(_QWORD *)&v13->selectionLength = v34;
          v13->cursorPos = v34;
        }
        goto LABEL_140;
      case 99:
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) )
          LUI_TextEdit_CopyCurrentSelection(v13);
        goto LABEL_140;
      case 118:
        if ( !CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) )
          goto LABEL_140;
        UnicodeClipboardData = Sys_GetUnicodeClipboardData();
        if ( !UnicodeClipboardData )
          goto LABEL_140;
        if ( v13->selectionLength > 0 && v13->selectionPos > -1 )
          LUI_TextEdit_RemoveCurrentSelection(v13, v12, luaVM);
        v36 = LUI_TextEdit_Utf8ToUtf32(UnicodeClipboardData, -1);
        if ( v36 < 150 )
          v32 = v36;
        memset_0(v72, 0, 0x258ui64);
        LUI_TextEdit_Utf8ToUtf32(UnicodeClipboardData, v32);
        Sys_FreeClipboardData(UnicodeClipboardData);
        if ( !CL_Keys_GetOverstrikeMode(localClientNum) )
        {
          v37 = v13->length;
          v38 = v32 + v37;
          if ( v32 + (int)v37 > v13->maxChars )
            goto LABEL_140;
          v39 = v13->cursorPos;
          v13->length = v38;
          v40 = &v13->gap0[4 * v39];
          v41 = &v13->gap0[4 * v37];
          if ( v41 != v40 )
          {
            v42 = &v13->gap0[4i64 * v38 - (_QWORD)v41];
            do
            {
              v43 = *((_DWORD *)v41 - 1);
              v41 -= 4;
              *(_DWORD *)&v41[(_QWORD)v42] = v43;
            }
            while ( v41 != v40 );
          }
        }
        if ( v32 > 0 )
        {
          v44 = 0i64;
          do
          {
            v45 = v72[v44++];
            *(_DWORD *)&v13->gap0[4 * v13->cursorPos++] = v45;
          }
          while ( v44 < v32 );
        }
        LUI_TextEdit_Utf32ToUtf8((int)v13, (char *)(unsigned int)v13->length, (int)utf8Buffer);
        LUI_LUIElement_SetText(v12, utf8Buffer, luaVM);
        goto LABEL_140;
      case 120:
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) && v13->selectionLength )
        {
          LUI_TextEdit_CopyCurrentSelection(v13);
          LUI_TextEdit_RemoveCurrentSelection(v13, v12, luaVM);
        }
        goto LABEL_140;
    }
    if ( key != 13 && key != 178 )
    {
      if ( key == 27 )
        goto LABEL_115;
      if ( (unsigned int)(key - 1) > 1 )
      {
        switch ( key )
        {
          case 9:
            flags = v13->flags;
            if ( (flags & 0x20) != 0 )
            {
              LUI_TextEdit_Finish(localClientNum, v12, v13, 0, 1, 0, luaVM);
              flags = v13->flags;
            }
            if ( (flags & 0x100) == 0 )
              goto LABEL_140;
            v47 = "text_edit_tab_pressed";
            goto LABEL_86;
          case 32:
            v47 = "text_edit_space_bar_pressed";
LABEL_86:
            if ( LUI_BeginEvent(localClientNum, v47, luaVM) )
              LUI_EndEvent(luaVM);
            goto LABEL_140;
          case 187:
            if ( LUI_ProjectRootCoordinate(luaVM, rootName, screenX, screenY, &outMouseX, &outMouseY) )
            {
              if ( outMouseX < v12->left || outMouseX > v12->right || outMouseY < v12->top || outMouseY > v12->bottom )
              {
                if ( (v13->flags & 0x40) != 0 )
                  LUI_TextEdit_Finish(localClientNum, v12, v13, 0, 1, 0, luaVM);
              }
              else
              {
                v48 = v13->length;
                v70 = v13->cursorPos;
                v69 = v48;
                memset_0(&renderData, 0, 0x25Bui64);
                renderData.utf8CursorPos = 0;
                renderData.overflowLen = 0.0;
                renderData.selectionOffset = 0.0;
                renderData.selectionLen = 0.0;
                LUI_TextEdit_GetRenderData(localClientNum, v12, v13, v48, &renderData);
                font = v12->textData.font;
                _XMM1 = 0i64;
                __asm { vroundss xmm2, xmm1, xmm3, 1 }
                textHeight = (int)*(float *)&_XMM2;
                v52 = R_TextWidth(renderData.utf8Text, -1, font, (int)*(float *)&_XMM2);
                v53 = (float)(outMouseX - v12->left) + renderData.overflowLen;
                if ( v53 < (float)v52 )
                {
                  v54 = 0;
                  if ( v48 > 0 )
                  {
                    while ( 1 )
                    {
                      v55 = v54 + 1;
                      LUI_TextEdit_GetRenderData(localClientNum, v12, v13, v54 + 1, &renderData);
                      if ( v53 < (float)R_TextWidth(renderData.utf8Text, -1, v12->textData.font, textHeight) )
                        break;
                      ++v54;
                      if ( v55 >= v69 )
                        goto LABEL_101;
                    }
                    v13->cursorPos = v54;
                  }
                }
                else
                {
                  v13->cursorPos = v48;
                }
LABEL_101:
                if ( v70 == v13->cursorPos && (v56 = v13->length, v13->selectionLength < v56) && isDoubleClick )
                {
                  v13->cursorPos = v56;
                  v10 = 0;
                }
                else
                {
                  v56 = 0;
                }
                v13->selectionLength = v56;
                v13->selectionPos = v10;
              }
            }
            goto LABEL_140;
        }
        if ( (unsigned int)(key - 132) > 1 )
        {
          if ( (unsigned int)key > 0x1D )
            goto LABEL_140;
          v57 = 808452096;
          if ( !_bittest(&v57, key) )
            goto LABEL_140;
        }
        return 0;
      }
    }
    if ( key != 2 )
    {
      v58 = 0;
LABEL_116:
      LUI_TextEdit_Finish(localClientNum, v12, v13, v58, 1, 0, luaVM);
      goto LABEL_140;
    }
LABEL_115:
    v58 = 1;
    goto LABEL_116;
  }
  if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
  {
    v60 = v13->cursorPos;
    *(_QWORD *)&v13->selectionLength = (unsigned int)v60;
    if ( v13->length < v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 594, ASSERT_TYPE_ASSERT, "(editPtr->length >= editPtr->selectionPos + editPtr->selectionLength)", (const char *)&queryFormat, "editPtr->length >= editPtr->selectionPos + editPtr->selectionLength") )
    {
      __debugbreak();
      v13->cursorPos = 0;
      goto LABEL_140;
    }
  }
  else
  {
    v13->selectionLength = 0;
    v13->selectionPos = -1;
  }
  v13->cursorPos = 0;
LABEL_140:
  if ( !v13->length && v13->isTypingEventSent )
  {
    if ( LUI_BeginEvent(localClientNum, "text_edit_is_typing", luaVM) )
    {
      LUI_SetTableBool("isTyping", 0, LUI_luaVM);
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      LUI_SetTableInt("controller", ControllerFromClient, LUI_luaVM);
      LUI_EndEvent(luaVM);
    }
    v13->isTypingEventSent = 0;
  }
  return 1;
}

/*
==============
LUI_TextEdit_HandleMouseMove
==============
*/
void LUI_TextEdit_HandleMouseMove(LocalClientNum_t localClientNum, int luaRef, int mouseX, int mouseY, const char *rootName, lua_State *luaVM)
{
  LUIElement *v8; 
  LUITextEditField *v9; 
  int cursorPos; 
  int length; 
  int v12; 
  int v15; 
  float v16; 
  int v17; 
  int v18; 
  int selectionPos; 
  int v20; 
  LUITextEditRenderData renderData; 

  j_lua_rawgeti(luaVM, -10000, luaRef);
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    v8 = LUI_ToElement(luaVM, -1);
    j_lua_getfield(luaVM, -1, "m_LUITextEditField");
    if ( j_lua_isuserdata(luaVM, -1) )
    {
      v9 = (LUITextEditField *)j_lua_touserdata(luaVM, -1);
      if ( CL_Keys_IsKeyDown(localClientNum, 187) )
      {
        cursorPos = v9->cursorPos;
        length = v9->length;
        memset_0(&renderData, 0, 0x25Bui64);
        v12 = 0;
        renderData.utf8CursorPos = 0;
        renderData.overflowLen = 0.0;
        renderData.selectionOffset = 0.0;
        renderData.selectionLen = 0.0;
        LUI_TextEdit_GetRenderData(localClientNum, v8, v9, length, &renderData);
        _XMM1 = 0i64;
        __asm { vroundss xmm2, xmm1, xmm3, 1 }
        v15 = R_TextWidth(renderData.utf8Text, -1, v8->textData.font, (int)*(float *)&_XMM2);
        v16 = (float)((float)mouseX - v8->left) + renderData.overflowLen;
        if ( v16 < (float)v15 )
        {
          if ( length > 0 )
          {
            while ( 1 )
            {
              v17 = v12 + 1;
              LUI_TextEdit_GetRenderData(localClientNum, v8, v9, v12 + 1, &renderData);
              if ( v16 < (float)R_TextWidth(renderData.utf8Text, -1, v8->textData.font, (int)*(float *)&_XMM2) )
                break;
              ++v12;
              if ( v17 >= length )
                goto LABEL_13;
            }
            v9->cursorPos = v12;
          }
        }
        else
        {
          v9->cursorPos = length;
        }
LABEL_13:
        v18 = v9->cursorPos;
        if ( v18 >= cursorPos )
        {
          if ( v18 > cursorPos )
            LUI_TextEdit_HandleRightTextSelection(v9, v18 - cursorPos);
        }
        else
        {
          selectionPos = v9->selectionPos;
          v20 = cursorPos - v18;
          if ( selectionPos == -1 || selectionPos == cursorPos )
          {
            v9->selectionLength += v20;
            v9->selectionPos = v18;
          }
          else
          {
            v9->selectionLength -= v20;
          }
        }
      }
    }
    else
    {
      v8->currentAnimationState.userDataInt = 0;
      LUI_Interface_SetTextEditActive(localClientNum, v8, 0, luaVM);
    }
  }
  else
  {
    LUI_Interface_SetTextEditActive(localClientNum, NULL, 0, luaVM);
  }
}

/*
==============
LUI_TextEdit_HandleRightTextSelection
==============
*/
void LUI_TextEdit_HandleRightTextSelection(LUITextEditField *editPtr, int nbToSelect)
{
  int selectionPos; 
  int cursorPos; 

  selectionPos = editPtr->selectionPos;
  if ( selectionPos == -1 )
  {
    editPtr->selectionPos = editPtr->cursorPos - nbToSelect;
LABEL_3:
    editPtr->selectionLength += nbToSelect;
    return;
  }
  if ( selectionPos <= -1 )
    goto LABEL_3;
  cursorPos = editPtr->cursorPos;
  if ( selectionPos != cursorPos - nbToSelect )
    goto LABEL_3;
  editPtr->selectionLength -= nbToSelect;
  editPtr->selectionPos = cursorPos;
}

/*
==============
LUI_TextEdit_HandledGamepadUpEvent
==============
*/
bool LUI_TextEdit_HandledGamepadUpEvent(int luaRef, const int key, lua_State *luaVM)
{
  keyNum_t v4; 
  _DWORD *v5; 
  bool result; 

  v4 = (char)key;
  j_lua_rawgeti(luaVM, -10000, luaRef);
  result = 0;
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    j_lua_getfield(luaVM, -1, "m_LUITextEditField");
    if ( j_lua_isuserdata(luaVM, -1) )
    {
      v5 = j_lua_touserdata(luaVM, -1);
      j_lua_settop(luaVM, -3);
      if ( (v5[160] & 0x200) == 0 || !KeyCodes_IsGamepadKey(v4) )
        return 1;
    }
  }
  return result;
}

/*
==============
LUI_TextEdit_HandlesKey
==============
*/
bool LUI_TextEdit_HandlesKey(const int key)
{
  return ((key - 188) & 0xFFFFFFFA) != 0 || key == 189;
}

/*
==============
LUI_TextEdit_RemoveCurrentSelection
==============
*/
void LUI_TextEdit_RemoveCurrentSelection(LUITextEditField *editPtr, LUIElement *element, lua_State *luaVM)
{
  int length; 
  int cursorPos; 
  __int64 selectionPos; 
  int selectionLength; 
  __int64 v10; 
  _DWORD *v11; 
  _DWORD *v12; 
  __int64 v13; 
  unsigned __int64 v14; 

  if ( editPtr->length < editPtr->selectionPos + editPtr->selectionLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 211, ASSERT_TYPE_ASSERT, "(editPtr->length >= editPtr->selectionPos + editPtr->selectionLength)", (const char *)&queryFormat, "editPtr->length >= editPtr->selectionPos + editPtr->selectionLength") )
    __debugbreak();
  if ( (unsigned int)(editPtr->maxChars - 1) > 0x95 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 212, ASSERT_TYPE_ASSERT, "(editPtr->maxChars > 0 && editPtr->maxChars <= 150)", (const char *)&queryFormat, "editPtr->maxChars > 0 && editPtr->maxChars <= MAX_LUI_TEXT_EDIT_LEN") )
    __debugbreak();
  length = editPtr->length;
  if ( (length < 0 || length > editPtr->maxChars) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 213, ASSERT_TYPE_ASSERT, "(editPtr->length >= 0 && editPtr->length <= editPtr->maxChars)", (const char *)&queryFormat, "editPtr->length >= 0 && editPtr->length <= editPtr->maxChars") )
    __debugbreak();
  cursorPos = editPtr->cursorPos;
  if ( (cursorPos < 0 || cursorPos > editPtr->length) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 214, ASSERT_TYPE_ASSERT, "(editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length)", (const char *)&queryFormat, "editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length") )
    __debugbreak();
  selectionPos = editPtr->selectionPos;
  selectionLength = editPtr->selectionLength;
  v10 = editPtr->length;
  v11 = &editPtr->gap0[4 * selectionPos];
  v12 = &editPtr->gap0[4 * selectionLength + 4 * (int)selectionPos];
  v13 = 0i64;
  v14 = (unsigned __int64)(4 * v10 - 4i64 * (selectionLength + (int)selectionPos) + 3) >> 2;
  if ( v12 > (_DWORD *)&editPtr->gap0[4 * v10] )
    v14 = 0i64;
  if ( v14 )
  {
    do
    {
      ++v13;
      *v11++ = *v12++;
    }
    while ( v13 != v14 );
    LODWORD(selectionPos) = editPtr->selectionPos;
    selectionLength = editPtr->selectionLength;
    LODWORD(v10) = editPtr->length;
  }
  editPtr->cursorPos = selectionPos;
  editPtr->length = v10 - selectionLength;
  LUI_TextEdit_SetLUIElementText(editPtr, element, luaVM);
  editPtr->selectionLength = 0;
  editPtr->selectionPos = -1;
}

/*
==============
LUI_TextEdit_SetLUIElementText
==============
*/
void LUI_TextEdit_SetLUIElementText(const LUITextEditField *editPtr, LUIElement *element, lua_State *luaVM)
{
  char utf8Buffer[608]; 

  LUI_TextEdit_Utf32ToUtf8((int)editPtr, (char *)(unsigned int)editPtr->length, (int)utf8Buffer);
  LUI_LUIElement_SetText(element, utf8Buffer, luaVM);
}

/*
==============
LUI_TextEdit_Utf32ToUtf8
==============
*/
void LUI_TextEdit_Utf32ToUtf8(__int64 chars, char *charCount, _BYTE *utf8Buffer, int a4)
{
  int v4; 
  __int64 v5; 
  __int64 v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  _BYTE *v13; 

  v4 = 0;
  v5 = (int)charCount;
  if ( (int)charCount <= 0 )
  {
    *utf8Buffer = 0;
  }
  else
  {
    v9 = 0i64;
    do
    {
      v10 = *(_DWORD *)(chars + 4 * v9);
      v11 = a4 - v4;
      if ( v10 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 73, ASSERT_TYPE_ASSERT, "(unicodeChar >= 0)", (const char *)&queryFormat, "unicodeChar >= 0") )
        __debugbreak();
      v12 = 0;
      v13 = &utf8Buffer[v4];
      if ( v10 > 127 )
      {
        if ( v10 > 2047 )
        {
          if ( v10 > 0xFFFF )
          {
            if ( v10 <= 0x1FFFFF && v11 >= 4 )
            {
              *v13 = ((v10 >> 18) & 7) - 16;
              v13[1] = ((v10 >> 12) & 0x3F) + 0x80;
              v13[2] = ((v10 >> 6) & 0x3F) + 0x80;
              v13[3] = (v10 & 0x3F) + 0x80;
              v12 = 4;
            }
          }
          else if ( v11 >= 3 )
          {
            *v13 = ((v10 >> 12) & 0xF) - 32;
            v13[1] = ((v10 >> 6) & 0x3F) + 0x80;
            v13[2] = (v10 & 0x3F) + 0x80;
            v12 = 3;
          }
        }
        else if ( v11 >= 2 )
        {
          *v13 = ((v10 >> 6) & 0x1F) - 64;
          v13[1] = (v10 & 0x3F) + 0x80;
          v12 = 2;
        }
      }
      else if ( v11 )
      {
        v12 = 1;
        *v13 = v10 & 0x7F;
      }
      v4 += v12;
      if ( v4 >= a4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 70, ASSERT_TYPE_ASSERT, "(utf8Len < utf8BufferSize)", (const char *)&queryFormat, "utf8Len < utf8BufferSize") )
        __debugbreak();
      ++v9;
    }
    while ( v9 < v5 );
    utf8Buffer[v4] = 0;
  }
}

/*
==============
LUI_TextEdit_Utf8ToUtf32
==============
*/
__int64 LUI_TextEdit_Utf8ToUtf32(const char *chars, int charCount, __int64 a3)
{
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int8 v8; 
  unsigned int v9; 
  unsigned int v10; 

  if ( !charCount )
    return 0i64;
  v5 = 0;
  v6 = charCount;
  v7 = 0i64;
  while ( 1 )
  {
    if ( !chars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 134, ASSERT_TYPE_ASSERT, "(utf8Stream)", (const char *)&queryFormat, "utf8Stream") )
      __debugbreak();
    v8 = *chars;
    v9 = -1;
    if ( *chars < 0 )
    {
      if ( (v8 & 0xE0) == 0xC0 )
      {
        v9 = chars[1] & 0x7F | ((v8 & 0x1F) << 6);
        if ( v9 < 0x80 )
          goto LABEL_10;
        v10 = 2;
      }
      else if ( (v8 & 0xF0) == 0xE0 )
      {
        v9 = chars[2] & 0x7F | ((chars[1] & 0x7F | ((v8 & 0xF) << 6)) << 6);
        if ( v9 <= 0x7FF || v9 - 55296 <= 0x7FF )
        {
LABEL_10:
          v10 = 0;
LABEL_11:
          v9 = -1;
          goto LABEL_12;
        }
        v10 = 3;
      }
      else
      {
        v10 = 0;
        if ( (v8 & 0xF8) != 0xF0 )
          goto LABEL_12;
        v9 = chars[3] & 0x7F | ((chars[2] & 0x7F | ((chars[1] & 0x7F | ((v8 & 7) << 6)) << 6)) << 6);
        if ( v9 - 0x10000 > 0xFFFFE )
          goto LABEL_11;
        v10 = 4;
      }
    }
    else
    {
      v9 = v8;
      v10 = 1;
    }
    if ( v9 > 0xFFFF )
      v9 = 32;
LABEL_12:
    chars += v10;
    if ( !v9 || v7 == v6 )
      break;
    if ( v9 >= 0x20 && (v9 <= 0x7E || v9 >= 0xA0) )
    {
      if ( a3 )
        *(_DWORD *)(a3 + 4 * v7) = v9;
      ++v5;
      ++v7;
    }
  }
  if ( charCount == -1 )
    return v5;
  return 0i64;
}

