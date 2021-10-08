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

void __fastcall LUIElement_TextEditRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v12; 
  int userDataInt; 
  UIInputType lastInputType; 
  bool v21; 
  int OverstrikeMode; 
  char cursor; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 v52; 
  float v53; 
  float v54; 
  float v55; 
  int v56; 
  float v57; 
  float v58; 
  float alphaa; 
  float alphab; 
  float text; 
  float v62; 
  float v63; 
  float v64; 
  int cursorPos; 
  float v66[4]; 
  LUITextEditRenderData renderData; 

  __asm { vmovaps [rsp+398h+var_68], xmm7 }
  _RBX = element;
  v12 = localClientNum;
  __asm { vmovaps xmm7, xmm3 }
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 805, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(_RBX, luaVM);
  j_lua_getfield(luaVM, -1, "m_LUITextEditField");
  _RDI = (const LUITextEditField *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  if ( _RDI )
  {
    __asm { vmovaps [rsp+398h+var_58], xmm6 }
    memset_0(&renderData, 0, 0x25Bui64);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+398h+renderData.overflowLen], xmm0
      vmovss  [rsp+398h+renderData.selectionOffset], xmm0
      vmovss  [rsp+398h+renderData.selectionLen], xmm0
    }
    renderData.utf8CursorPos = 0;
    LUI_TextEdit_GetRenderData((LocalClientNum_t)v12, _RBX, _RDI, _RDI->length, &renderData);
    userDataInt = _RBX->currentAnimationState.userDataInt;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0D4h]
      vsubss  xmm6, xmm0, dword ptr [rbx+0CCh]
    }
    if ( (unsigned int)v12 >= 2 )
    {
      v56 = 2;
      LODWORD(v52) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v52, v56) )
        __debugbreak();
    }
    lastInputType = clientUIActives[v12].lastInputType;
    v21 = userDataInt == 0;
    if ( userDataInt )
    {
      if ( _RDI->selectionLength > 0 && _RDI->selectionPos > -1 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+0D8h]
          vsubss  xmm1, xmm2, dword ptr [rbx+0D0h]
          vmovups xmm0, xmmword ptr [rdi+270h]
          vaddss  xmm4, xmm1, cs:__real@40800000
          vsubss  xmm3, xmm2, cs:__real@40000000
          vmovups xmmword ptr [rsp+398h+var_2F8], xmm0
          vmovss  xmm0, dword ptr [rbx+0CCh]
          vsubss  xmm1, xmm0, [rsp+398h+renderData.overflowLen]
          vmovss  xmm0, [rsp+398h+renderData.selectionLen]
          vaddss  xmm2, xmm1, [rsp+398h+renderData.selectionOffset]
          vmovss  [rsp+398h+var_370], xmm4
          vmovss  dword ptr [rsp+398h+fmt], xmm0
        }
        LUI_Interface_DrawTextSelection((const LocalClientNum_t)v12, _RBX, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v53, (vec4_t *)v66, luaVM);
      }
      v21 = userDataInt == 0;
    }
    if ( v21 || lastInputType == GAMEPAD )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+0D8h]
        vsubss  xmm1, xmm2, dword ptr [rbx+0D0h]
        vmovss  xmm0, dword ptr [rbx+0CCh]
        vsubss  xmm3, xmm0, [rsp+398h+renderData.overflowLen]; x
        vmovss  xmm0, [rsp+398h+blue]
        vmovss  [rsp+398h+cursorPos], xmm6
        vmovss  [rsp+398h+var_340], xmm1
        vmovss  xmm1, [rsp+398h+green]
        vmovss  dword ptr [rsp+398h+text], xmm7
        vmovss  [rsp+398h+alpha], xmm0
        vmovss  xmm0, [rsp+398h+red]
        vmovss  [rsp+398h+var_368], xmm1
        vmovss  [rsp+398h+var_370], xmm0
        vmovss  dword ptr [rsp+398h+fmt], xmm2
      }
      LUI_Interface_DrawText((const LocalClientNum_t)v12, root, _RBX, *(float *)&_XMM3, fmtb, v55, v58, alphab, text, renderData.utf8Text, _RBX->textData.font, v64, *(float *)&cursorPos, 0, 0, _RBX->currentAnimationState.alignment, NULL, NULL, NULL, luaVM);
    }
    else
    {
      OverstrikeMode = CL_Keys_GetOverstrikeMode((LocalClientNum_t)v12);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0CCh]
        vsubss  xmm2, xmm0, [rsp+398h+renderData.overflowLen]; x
        vmovss  xmm0, [rsp+398h+blue]
        vmovss  xmm3, dword ptr [rbx+0D8h]; y
        vsubss  xmm1, xmm3, dword ptr [rbx+0D0h]
      }
      cursor = 124;
      if ( OverstrikeMode )
        cursor = 95;
      __asm
      {
        vmovss  [rsp+398h+var_340], xmm6
        vmovss  dword ptr [rsp+398h+var_348], xmm1
        vmovss  xmm1, [rsp+398h+green]
        vmovss  [rsp+398h+alpha], xmm7
        vmovss  [rsp+398h+var_368], xmm0
        vmovss  xmm0, [rsp+398h+red]
        vmovss  [rsp+398h+var_370], xmm1
        vmovss  dword ptr [rsp+398h+fmt], xmm0
      }
      LUI_Interface_DrawTextWithCursor((const LocalClientNum_t)v12, _RBX, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v54, v57, alphaa, renderData.utf8Text, _RBX->textData.font, v62, v63, renderData.utf8CursorPos, cursor, luaVM);
    }
    __asm { vmovaps xmm6, [rsp+398h+var_58] }
  }
  __asm { vmovaps xmm7, [rsp+398h+var_68] }
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
  unsigned int v19; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps [rsp+78h+var_58], xmm10
  }
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm7, cs:__real@3b808081
  }
  if ( j_lua_isnumber(luaVM, 2) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmulss  xmm10, xmm0, xmm7 }
  }
  __asm { vxorps  xmm9, xmm9, xmm9 }
  if ( j_lua_isnumber(luaVM, 3) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmulss  xmm9, xmm0, xmm7 }
  }
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( j_lua_isnumber(luaVM, 4) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmulss  xmm8, xmm0, xmm7 }
  }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vmulss  xmm6, xmm0, xmm7 }
  }
  j_lua_getfield(luaVM, 1, "m_LUITextEditField");
  __asm { vmovaps xmm7, [rsp+78h+var_28] }
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    _RBX = j_lua_touserdata(luaVM, -1);
    j_lua_settop(luaVM, -2);
    __asm
    {
      vmovss  dword ptr [rbx+270h], xmm10
      vmovss  dword ptr [rbx+274h], xmm9
      vmovss  dword ptr [rbx+278h], xmm8
      vmovss  dword ptr [rbx+27Ch], xmm6
    }
  }
  else
  {
    j_lua_settop(luaVM, -2);
  }
  __asm
  {
    vmovaps xmm10, [rsp+78h+var_58]
    vmovaps xmm9, [rsp+78h+var_48]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v19 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v19);
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_TextEditRender;
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
  const LUITextEditField *v12; 
  int v21; 
  LUITextEditRenderData renderData; 

  *outY = 0;
  *outX = 0;
  j_lua_rawgeti(luaVM, -10000, luaRef);
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    _RSI = LUI_ToElement(luaVM, -1);
    j_lua_getfield(luaVM, -1, "m_LUITextEditField");
    if ( j_lua_isuserdata(luaVM, -1) )
    {
      __asm { vmovaps [rsp+2F8h+var_48], xmm6 }
      v12 = (const LUITextEditField *)j_lua_touserdata(luaVM, -1);
      j_lua_settop(luaVM, -3);
      memset_0(&renderData, 0, 0x25Bui64);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+2F8h+var_2C8.overflowLen], xmm0
        vmovss  [rsp+2F8h+var_2C8.selectionOffset], xmm0
        vmovss  [rsp+2F8h+var_2C8.selectionLen], xmm0
      }
      renderData.utf8CursorPos = 0;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0D8h]
        vsubss  xmm0, xmm0, dword ptr [rsi+0D0h]
        vmulss  xmm6, xmm0, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
      }
      LUI_TextEdit_GetRenderData(localClientNum, _RSI, v12, v12->cursorPos, &renderData);
      __asm
      {
        vaddss  xmm2, xmm6, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vcvttss2si r9d, xmm3; textHeight
      }
      v21 = R_TextWidth(renderData.utf8Text, -1, _RSI->textData.font, _ER9);
      __asm
      {
        vcvttss2si ecx, dword ptr [rsi+0CCh]
        vmovaps xmm6, [rsp+2F8h+var_48]
      }
      *outX = v21 + _ECX;
      __asm { vcvttss2si eax, dword ptr [rsi+0D0h] }
      *outY = _EAX;
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
  signed int v12; 
  int v18; 
  LUITextEditRenderData *v19; 
  char v22; 
  int selectionPos; 
  int selectionLength; 
  int v31; 
  unsigned __int64 v32; 
  int v33; 
  char *v34; 
  int v35; 
  const char *v36; 
  char *v37; 
  char v38; 
  LocalClientNum_t v43; 
  const LUIElement *v44; 
  int v45; 
  LUITextEditRenderData *renderDataa; 

  v44 = element;
  v43 = localClientNum;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0D8h]
    vsubss  xmm1, xmm0, dword ptr [rdx+0D0h]
    vmulss  xmm2, xmm1, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
    vaddss  xmm3, xmm2, cs:__real@3f000000
  }
  _RBP = renderData;
  v12 = 0;
  __asm { vmovaps [rsp+98h+var_68], xmm7 }
  _RDI = element;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm2, xmm1, xmm3, 1
    vcvttss2si r14d, xmm2
  }
  v45 = _ER14;
  if ( !element->currentAnimationState.userDataInt )
  {
    renderData->utf8Text[0] = 31;
    v12 = 1;
  }
  v18 = 0;
  v19 = NULL;
  renderDataa = (LUITextEditRenderData *)charCount;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovaps [rsp+98h+var_58], xmm6
  }
  while ( 1 )
  {
    if ( v18 == editPtr->cursorPos )
    {
      _RBP->utf8CursorPos = v12;
      if ( (editPtr->flags & 4) != 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0D4h]
          vsubss  xmm6, xmm0, dword ptr [rdi+0CCh]
          vcomiss xmm6, xmm7
        }
        if ( (editPtr->flags & 4) != 0 )
        {
          if ( !CL_Keys_GetOverstrikeMode(localClientNum) || (v22 = 95, editPtr->cursorPos >= editPtr->length) )
            v22 = 124;
          _RBP->utf8Text[v12] = v22;
          _RBP->utf8Text[v12 + 1] = 0;
          R_TextWidth(_RBP->utf8Text, -1, _RDI->textData.font, _ER14);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vsubss  xmm1, xmm0, xmm6
            vmaxss  xmm1, xmm1, xmm7
            vmovss  dword ptr [rbp+260h], xmm1
          }
        }
      }
    }
    selectionPos = editPtr->selectionPos;
    if ( selectionPos > -1 )
    {
      selectionLength = editPtr->selectionLength;
      if ( selectionLength > 0 )
      {
        if ( v18 == selectionPos )
        {
          _RBP->utf8Text[v12] = 0;
          R_TextWidth(_RBP->utf8Text, -1, _RDI->textData.font, _ER14);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rbp+264h], xmm0
          }
          selectionPos = editPtr->selectionPos;
          selectionLength = editPtr->selectionLength;
        }
        if ( v18 == selectionLength + selectionPos )
        {
          _RBP->utf8Text[v12] = 0;
          R_TextWidth(_RBP->utf8Text, -1, _RDI->textData.font, _ER14);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vsubss  xmm1, xmm0, dword ptr [rbp+264h]
            vmovss  dword ptr [rbp+268h], xmm1
          }
        }
      }
    }
    if ( v19 == renderDataa )
      break;
    if ( (editPtr->flags & 3) == 1 )
    {
      v31 = 42;
    }
    else
    {
      v31 = *(_DWORD *)&editPtr->gap0[4 * (_QWORD)v19];
      if ( v31 == 94 && v18 + 1 < charCount )
      {
        if ( &editPtr->gap0[4 * v18 + 4] )
        {
          v35 = *(_DWORD *)&editPtr->gap0[4 * (_QWORD)v19 + 4];
          if ( v35 != 94 && (unsigned int)(v35 - 39) <= 0x17 )
          {
            v36 = aA_18;
            v37 = &_RBP->utf8Text[v12];
            v38 = 94;
            do
            {
              *v37 = v38;
              v38 = *++v36;
              ++v37;
              ++v12;
            }
            while ( *v36 );
            goto LABEL_44;
          }
        }
      }
    }
    v32 = 602i64 - v12;
    if ( v31 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\string.h", 73, ASSERT_TYPE_ASSERT, "(unicodeChar >= 0)", (const char *)&queryFormat, "unicodeChar >= 0") )
      __debugbreak();
    v33 = 0;
    v34 = &_RBP->utf8Text[v12];
    if ( v31 > 127 )
    {
      if ( v31 > 2047 )
      {
        if ( v31 > 0xFFFF )
        {
          if ( v31 <= 0x1FFFFF && v32 >= 4 )
          {
            *v34 = ((v31 >> 18) & 7) - 16;
            v34[1] = ((v31 >> 12) & 0x3F) + 0x80;
            v34[2] = ((v31 >> 6) & 0x3F) + 0x80;
            v34[3] = (v31 & 0x3F) + 0x80;
            v33 = 4;
          }
        }
        else if ( v32 >= 3 )
        {
          *v34 = ((v31 >> 12) & 0xF) - 32;
          v34[1] = ((v31 >> 6) & 0x3F) + 0x80;
          v34[2] = (v31 & 0x3F) + 0x80;
          v33 = 3;
        }
      }
      else if ( v32 >= 2 )
      {
        *v34 = ((v31 >> 6) & 0x1F) - 64;
        v34[1] = (v31 & 0x3F) + 0x80;
        v33 = 2;
      }
    }
    else if ( v32 )
    {
      v33 = 1;
      *v34 = v31 & 0x7F;
    }
    _RDI = v44;
    v12 += v33;
    _ER14 = v45;
LABEL_44:
    if ( (unsigned int)v12 >= 0x25B && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 190, ASSERT_TYPE_ASSERT, "(utf8Len < sizeof( renderData.utf8Text ))", (const char *)&queryFormat, "utf8Len < sizeof( renderData.utf8Text )") )
      __debugbreak();
    localClientNum = v43;
    ++v18;
    v19 = (LUITextEditRenderData *)((char *)v19 + 1);
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_58]
    vmovaps xmm7, [rsp+98h+var_68]
  }
  _RBP->utf8Text[v12] = 0;
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

bool __fastcall LUI_TextEdit_HandleKey(LocalClientNum_t localClientNum, int luaRef, int key, double screenX, float screenY, const char *rootName, lua_State *luaVM)
{
  int v11; 
  bool result; 
  LUITextEditField *v14; 
  int length; 
  int cursorPos; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  __int64 v20; 
  _DWORD *v21; 
  int v22; 
  _DWORD *v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  char *v28; 
  _DWORD *v29; 
  int v30; 
  char *v31; 
  unsigned __int64 v32; 
  int v33; 
  int OverstrikeMode; 
  unsigned int v35; 
  const char *UnicodeClipboardData; 
  int v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  char *v41; 
  char *v42; 
  char *v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  int flags; 
  const char *v48; 
  int v52; 
  bool v53; 
  int v54; 
  int v55; 
  int v56; 
  int selectionPos; 
  int v58; 
  int v59; 
  int ControllerFromClient; 
  float outMouseX; 
  float outMouseY; 
  int v64[152]; 
  char utf8Buffer[608]; 

  __asm
  {
    vmovaps [rsp+7F8h+var_58], xmm6
    vmovaps xmm6, xmm3
  }
  j_lua_rawgeti(luaVM, -10000, luaRef);
  v11 = -1;
  if ( !j_lua_isuserdata(luaVM, -1) )
  {
    LUI_Interface_SetTextEditActive(localClientNum, NULL, 0, luaVM);
    result = 0;
    goto LABEL_129;
  }
  _R14 = LUI_ToElement(luaVM, -1);
  j_lua_getfield(luaVM, -1, "m_LUITextEditField");
  if ( !j_lua_isuserdata(luaVM, -1) )
  {
    _R14->currentAnimationState.userDataInt = 0;
    LUI_Interface_SetTextEditActive(localClientNum, _R14, 0, luaVM);
    result = 0;
    goto LABEL_129;
  }
  v14 = (LUITextEditField *)j_lua_touserdata(luaVM, -1);
  j_lua_settop(luaVM, -3);
  if ( (unsigned int)(v14->maxChars - 1) > 0x95 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 520, ASSERT_TYPE_ASSERT, "(editPtr->maxChars > 0 && editPtr->maxChars <= 150)", (const char *)&queryFormat, "editPtr->maxChars > 0 && editPtr->maxChars <= MAX_LUI_TEXT_EDIT_LEN") )
    __debugbreak();
  length = v14->length;
  if ( (length < 0 || length > v14->maxChars) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 521, ASSERT_TYPE_ASSERT, "(editPtr->length >= 0 && editPtr->length <= editPtr->maxChars)", (const char *)&queryFormat, "editPtr->length >= 0 && editPtr->length <= editPtr->maxChars") )
    __debugbreak();
  cursorPos = v14->cursorPos;
  if ( (cursorPos < 0 || cursorPos > v14->length) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 522, ASSERT_TYPE_ASSERT, "(editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length)", (const char *)&queryFormat, "editPtr->cursorPos >= 0 && editPtr->cursorPos <= editPtr->length") )
    __debugbreak();
  if ( (v14->flags & 0x200) != 0 && KeyCodes_IsGamepadKey((keyNum_t)key) )
    goto LABEL_95;
  switch ( key )
  {
    case 149:
      if ( v14->selectionPos > -1 && v14->selectionLength > 0 )
      {
LABEL_21:
        LUI_TextEdit_RemoveCurrentSelection(v14, _R14, luaVM);
        goto LABEL_123;
      }
      v17 = v14->cursorPos;
      v18 = v14->length;
      if ( (int)v17 < (int)v18 )
      {
        v19 = (unsigned __int64)v14 + 4 * v18;
        v20 = 0i64;
        v21 = &v14->gap0[4 * v17];
        v22 = v18 - 1;
        v23 = v21 + 1;
        v14->length = v22;
        v24 = (v19 - (unsigned __int64)(v21 + 1) + 3) >> 2;
        if ( (unsigned __int64)(v21 + 1) > v19 )
          v24 = 0i64;
        if ( v24 )
        {
          do
          {
            ++v20;
            *v21++ = *v23++;
          }
          while ( v20 != v24 );
        }
LABEL_27:
        LUI_TextEdit_SetLUIElementText(v14, _R14, luaVM);
        goto LABEL_123;
      }
      goto LABEL_123;
    case 127:
      if ( v14->selectionPos > -1 && v14->selectionLength > 0 )
        goto LABEL_21;
      v25 = v14->cursorPos;
      if ( (int)v25 > 0 )
      {
        v26 = v14->length;
        v14->cursorPos = v25 - 1;
        v27 = 0i64;
        v28 = &v14->gap0[4 * v26];
        v29 = &v14->gap0[4 * (int)v25 - 4];
        v30 = v26 - 1;
        v31 = &v14->gap0[4 * v25];
        v14->length = v30;
        v32 = (unsigned __int64)(v28 - v31 + 3) >> 2;
        if ( v31 > v28 )
          v32 = 0i64;
        if ( v32 )
        {
          do
          {
            ++v27;
            *v29++ = *(_DWORD *)v31;
            v31 += 4;
          }
          while ( v27 != v32 );
        }
        goto LABEL_27;
      }
      goto LABEL_123;
    case 135:
    case 31:
    case 23:
      if ( !CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
      {
        v14->selectionPos = -1;
        v14->selectionLength = 0;
      }
      v59 = v14->cursorPos;
      if ( v59 < v14->length )
      {
        v14->cursorPos = v59 + 1;
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
          LUI_TextEdit_HandleRightTextSelection(v14, 1);
      }
      goto LABEL_123;
    case 134:
    case 30:
    case 22:
      if ( !CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
      {
        v14->selectionPos = -1;
        v14->selectionLength = 0;
      }
      v56 = v14->cursorPos;
      if ( v56 > 0 )
      {
        v14->cursorPos = v56 - 1;
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
        {
          selectionPos = v14->selectionPos;
          if ( selectionPos == -1 || selectionPos == v14->cursorPos + 1 )
          {
            v58 = v14->cursorPos;
            ++v14->selectionLength;
            v14->selectionPos = v58;
          }
          else
          {
            --v14->selectionLength;
          }
        }
      }
      goto LABEL_123;
  }
  if ( (unsigned int)(key - 151) > 1 )
  {
    if ( key == 153 || (v33 = 150, key == 150) )
    {
      if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
      {
        v11 = v14->cursorPos;
        v54 = v14->length - v11;
      }
      else
      {
        v54 = 0;
      }
      v14->selectionPos = v11;
      v14->selectionLength = v54;
      v14->cursorPos = v14->length;
      goto LABEL_123;
    }
    switch ( key )
    {
      case 148:
        OverstrikeMode = CL_Keys_GetOverstrikeMode(localClientNum);
        CL_Keys_SetOverstrikeMode(localClientNum, OverstrikeMode == 0);
        goto LABEL_123;
      case 97:
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) )
        {
          v35 = v14->length;
          *(_QWORD *)&v14->selectionLength = v35;
          v14->cursorPos = v35;
        }
        goto LABEL_123;
      case 99:
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) )
          LUI_TextEdit_CopyCurrentSelection(v14);
        goto LABEL_123;
      case 118:
        if ( !CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) )
          goto LABEL_123;
        UnicodeClipboardData = Sys_GetUnicodeClipboardData();
        if ( !UnicodeClipboardData )
          goto LABEL_123;
        if ( v14->selectionLength > 0 && v14->selectionPos > -1 )
          LUI_TextEdit_RemoveCurrentSelection(v14, _R14, luaVM);
        v37 = LUI_TextEdit_Utf8ToUtf32(UnicodeClipboardData, -1);
        if ( v37 < 150 )
          v33 = v37;
        memset_0(v64, 0, 0x258ui64);
        LUI_TextEdit_Utf8ToUtf32(UnicodeClipboardData, v33);
        Sys_FreeClipboardData(UnicodeClipboardData);
        if ( !CL_Keys_GetOverstrikeMode(localClientNum) )
        {
          v38 = v14->length;
          v39 = v33 + v38;
          if ( v33 + (int)v38 > v14->maxChars )
            goto LABEL_123;
          v40 = v14->cursorPos;
          v14->length = v39;
          v41 = &v14->gap0[4 * v40];
          v42 = &v14->gap0[4 * v38];
          if ( v42 != v41 )
          {
            v43 = &v14->gap0[4i64 * v39 - (_QWORD)v42];
            do
            {
              v44 = *((_DWORD *)v42 - 1);
              v42 -= 4;
              *(_DWORD *)&v42[(_QWORD)v43] = v44;
            }
            while ( v42 != v41 );
          }
        }
        if ( v33 > 0 )
        {
          v45 = 0i64;
          do
          {
            v46 = v64[v45++];
            *(_DWORD *)&v14->gap0[4 * v14->cursorPos++] = v46;
          }
          while ( v45 < v33 );
        }
        LUI_TextEdit_Utf32ToUtf8((int)v14, (char *)(unsigned int)v14->length, (int)utf8Buffer);
        LUI_LUIElement_SetText(_R14, utf8Buffer, luaVM);
        goto LABEL_123;
      case 120:
        if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_CTRL) && v14->selectionLength )
        {
          LUI_TextEdit_CopyCurrentSelection(v14);
          LUI_TextEdit_RemoveCurrentSelection(v14, _R14, luaVM);
        }
        goto LABEL_123;
    }
    if ( key != 13 && key != 178 )
    {
      if ( key == 27 )
        goto LABEL_98;
      if ( (unsigned int)(key - 1) > 1 )
      {
        switch ( key )
        {
          case 9:
            flags = v14->flags;
            if ( (flags & 0x20) != 0 )
            {
              LUI_TextEdit_Finish(localClientNum, _R14, v14, 0, 1, 0, luaVM);
              flags = v14->flags;
            }
            if ( (flags & 0x100) == 0 )
              goto LABEL_123;
            v48 = "text_edit_tab_pressed";
            goto LABEL_86;
          case 32:
            v48 = "text_edit_space_bar_pressed";
LABEL_86:
            if ( LUI_BeginEvent(localClientNum, v48, luaVM) )
              LUI_EndEvent(luaVM);
            goto LABEL_123;
          case 187:
            __asm
            {
              vmovss  xmm3, [rsp+7F8h+screenY]; screenY
              vmovaps xmm2, xmm6; screenX
            }
            if ( LUI_ProjectRootCoordinate(luaVM, rootName, *(float *)&_XMM2, *(float *)&_XMM3, &outMouseX, &outMouseY) )
            {
              __asm
              {
                vmovss  xmm0, [rsp+7F8h+outMouseX]
                vcomiss xmm0, dword ptr [r14+0CCh]
                vcomiss xmm0, dword ptr [r14+0D4h]
              }
              if ( (v14->flags & 0x40) != 0 )
                LUI_TextEdit_Finish(localClientNum, _R14, v14, 0, 1, 0, luaVM);
            }
            goto LABEL_123;
        }
        if ( (unsigned int)(key - 132) > 1 )
        {
          if ( (unsigned int)key > 0x1D )
            goto LABEL_123;
          v52 = 808452096;
          if ( !_bittest(&v52, key) )
            goto LABEL_123;
        }
LABEL_95:
        result = 0;
        goto LABEL_129;
      }
    }
    if ( key != 2 )
    {
      v53 = 0;
LABEL_99:
      LUI_TextEdit_Finish(localClientNum, _R14, v14, v53, 1, 0, luaVM);
      goto LABEL_123;
    }
LABEL_98:
    v53 = 1;
    goto LABEL_99;
  }
  if ( CL_Keys_IsModifierKeyDown(localClientNum, KMOD_SHIFT) )
  {
    v55 = v14->cursorPos;
    *(_QWORD *)&v14->selectionLength = (unsigned int)v55;
    if ( v14->length < v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_textedit.cpp", 594, ASSERT_TYPE_ASSERT, "(editPtr->length >= editPtr->selectionPos + editPtr->selectionLength)", (const char *)&queryFormat, "editPtr->length >= editPtr->selectionPos + editPtr->selectionLength") )
    {
      __debugbreak();
      v14->cursorPos = 0;
      goto LABEL_123;
    }
  }
  else
  {
    v14->selectionLength = 0;
    v14->selectionPos = -1;
  }
  v14->cursorPos = 0;
LABEL_123:
  if ( !v14->length && v14->isTypingEventSent )
  {
    if ( LUI_BeginEvent(localClientNum, "text_edit_is_typing", luaVM) )
    {
      LUI_SetTableBool("isTyping", 0, LUI_luaVM);
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      LUI_SetTableInt("controller", ControllerFromClient, LUI_luaVM);
      LUI_EndEvent(luaVM);
    }
    v14->isTypingEventSent = 0;
  }
  result = 1;
LABEL_129:
  __asm { vmovaps xmm6, [rsp+7F8h+var_58] }
  return result;
}

/*
==============
LUI_TextEdit_HandleMouseMove
==============
*/
void LUI_TextEdit_HandleMouseMove(LocalClientNum_t localClientNum, int luaRef, int mouseX, int mouseY, const char *rootName, lua_State *luaVM)
{
  LUITextEditField *v10; 
  int cursorPos; 
  int length; 
  int v14; 
  char v28; 
  int v29; 
  int v31; 
  int selectionPos; 
  int v34; 
  LUITextEditRenderData renderData; 

  j_lua_rawgeti(luaVM, -10000, luaRef);
  if ( j_lua_isuserdata(luaVM, -1) )
  {
    _RBP = LUI_ToElement(luaVM, -1);
    j_lua_getfield(luaVM, -1, "m_LUITextEditField");
    if ( j_lua_isuserdata(luaVM, -1) )
    {
      v10 = (LUITextEditField *)j_lua_touserdata(luaVM, -1);
      if ( CL_Keys_IsKeyDown(localClientNum, 187) )
      {
        cursorPos = v10->cursorPos;
        length = v10->length;
        __asm { vmovaps [rsp+2F8h+var_48], xmm6 }
        memset_0(&renderData, 0, 0x25Bui64);
        __asm { vxorps  xmm0, xmm0, xmm0 }
        v14 = 0;
        renderData.utf8CursorPos = 0;
        __asm
        {
          vmovss  [rsp+2F8h+var_2C8.overflowLen], xmm0
          vmovss  [rsp+2F8h+var_2C8.selectionOffset], xmm0
          vmovss  [rsp+2F8h+var_2C8.selectionLen], xmm0
        }
        LUI_TextEdit_GetRenderData(localClientNum, _RBP, v10, length, &renderData);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D8h]
          vsubss  xmm1, xmm0, dword ptr [rbp+0D0h]
          vmulss  xmm2, xmm1, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
          vaddss  xmm3, xmm2, cs:__real@3f000000
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm2, xmm1, xmm3, 1
          vcvttss2si r13d, xmm2
        }
        R_TextWidth(renderData.utf8Text, -1, _RBP->textData.font, _ER13);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, esi
          vsubss  xmm1, xmm0, dword ptr [rbp+0CCh]
          vaddss  xmm6, xmm1, [rsp+2F8h+var_2C8.overflowLen]
          vxorps  xmm2, xmm2, xmm2
          vcvtsi2ss xmm2, xmm2, eax
          vcomiss xmm6, xmm2
        }
        if ( v28 )
        {
          if ( length > 0 )
          {
            while ( 1 )
            {
              v29 = v14 + 1;
              LUI_TextEdit_GetRenderData(localClientNum, _RBP, v10, v14 + 1, &renderData);
              R_TextWidth(renderData.utf8Text, -1, _RBP->textData.font, _ER13);
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vcomiss xmm6, xmm0
              }
              if ( v28 )
                break;
              ++v14;
              if ( v29 >= length )
                goto LABEL_13;
            }
            v10->cursorPos = v14;
          }
        }
        else
        {
          v10->cursorPos = length;
        }
LABEL_13:
        v31 = v10->cursorPos;
        __asm { vmovaps xmm6, [rsp+2F8h+var_48] }
        if ( v31 >= cursorPos )
        {
          if ( v31 > cursorPos )
            LUI_TextEdit_HandleRightTextSelection(v10, v31 - cursorPos);
        }
        else
        {
          selectionPos = v10->selectionPos;
          v34 = cursorPos - v31;
          if ( selectionPos == -1 || selectionPos == cursorPos )
          {
            v10->selectionLength += v34;
            v10->selectionPos = v31;
          }
          else
          {
            v10->selectionLength -= v34;
          }
        }
      }
    }
    else
    {
      _RBP->currentAnimationState.userDataInt = 0;
      LUI_Interface_SetTextEditActive(localClientNum, _RBP, 0, luaVM);
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

