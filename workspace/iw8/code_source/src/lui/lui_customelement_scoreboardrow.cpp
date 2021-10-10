/*
==============
LUIElement_ScoreboardRow_SetFieldAndPosition
==============
*/
__int64 LUIElement_ScoreboardRow_SetFieldAndPosition(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_ScoreboardRow_SetFieldAndPosition_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_ScoreboardRow_SetImageData
==============
*/
__int64 LUIElement_ScoreboardRow_SetImageData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_ScoreboardRow_SetImageData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_ScoreboardRow_SetImageVisibility
==============
*/
__int64 LUIElement_ScoreboardRow_SetImageVisibility(lua_State *const luaVM)
{
  LUIElement *v2; 
  ScoreboardRowData *CustomElement; 
  __int64 v4; 
  double v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: SetImage( <int>, <float> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v2, luaVM);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = lui_tonumber32(luaVM, 3);
    CustomElement->images[v4].alpha = *(float *)&v5;
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
LUIElement_ScoreboardRow_SetImageTexture
==============
*/
__int64 LUIElement_ScoreboardRow_SetImageTexture(lua_State *const luaVM)
{
  __int16 v2; 
  __int16 v3; 
  LUIElement *v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: SetImageTexture( <int>, <float> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 2);
    v3 = lui_tointeger32(luaVM, 3);
    v4 = LUI_ToElement(luaVM, 1);
    LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v4, luaVM)->images[v2].imageIndex = v3;
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
LUIElement_ScoreboardRow_SetImagePosition
==============
*/
__int64 LUIElement_ScoreboardRow_SetImagePosition(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_ScoreboardRow_SetImagePosition_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_ScoreboardRow_SetImageRGBFromTable
==============
*/
__int64 LUIElement_ScoreboardRow_SetImageRGBFromTable(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_ScoreboardRow_SetImageRGBFromTable_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_ScoreboardRow_SetFieldColor
==============
*/
__int64 LUIElement_ScoreboardRow_SetFieldColor(lua_State *const luaVM)
{
  LUIElement *v2; 
  _DWORD *customElementData; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: self:SetFieldColor( <index>, <color as int>");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: self:SetFieldColor( <index>, <color as int>");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: self:SetFieldColor( <index>, <color as int>");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: self:SetFieldColor( <index>, <color as int>");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  v4 = lui_tointeger32(luaVM, 2);
  if ( (unsigned int)v4 > 9 )
    j_luaL_error(luaVM, "ScoreboardRow: Only fields 0-9 (10 total) are supported.\n");
  customElementData[4 * v4 + 3] = lui_tointeger32(luaVM, 3);
  LUI_QuadCache_Element_Invalidate(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_ScoreboardRow_SetAllFieldsColor
==============
*/
__int64 LUIElement_ScoreboardRow_SetAllFieldsColor(lua_State *const luaVM)
{
  LUIElement *v2; 
  _DWORD *customElementData; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: self:SetAllFieldsColor( <color as int>");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: self:SetAllFieldsColor( <color as int>");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: self:SetAllFieldsColor( <color as int>");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  v4 = lui_tointeger32(luaVM, 2);
  customElementData[3] = v4;
  customElementData[7] = v4;
  customElementData[11] = v4;
  customElementData[15] = v4;
  customElementData[19] = v4;
  customElementData[23] = v4;
  customElementData[27] = v4;
  customElementData[31] = v4;
  customElementData[35] = v4;
  customElementData[39] = v4;
  LUI_QuadCache_Element_Invalidate(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUIElement_ScoreboardRow_SetIsPlayer
==============
*/
__int64 LUIElement_ScoreboardRow_SetIsPlayer(lua_State *const luaVM)
{
  LUIElement *v3; 
  _BYTE *customElementData; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "USAGE: self:SetIsPlayer( <self>, <bool>");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: self:SetIsPlayer( <self as LUIElement>");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: self:SetIsPlayer( isPlayer flag as <bool> ");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: self:SetIsPlayer( clientNum flag as <int> ");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: self:SetIsPlayer( localClientNum flag as <int> ");
  v3 = LUI_ToElement(luaVM, 1);
  if ( !v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v3->customElementData;
  customElementData[288] = j_lua_toboolean(luaVM, 2) != 0;
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 3);
  __asm { vcvttsd2si eax, xmm0 }
  *((_DWORD *)customElementData + 73) = _EAX;
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 4);
  __asm { vcvttsd2si eax, xmm0 }
  *((_DWORD *)customElementData + 74) = _EAX;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUIElement_ScoreboardRowRender
==============
*/
void LUIElement_ScoreboardRowRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  char *customElementData; 
  float left; 
  float bottom; 
  GfxFont *font; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  double CurrentUnitScale; 
  float uMax; 
  float v21; 
  int fontSize; 
  char *v23; 
  __int64 v24; 
  int v25; 
  const char *text; 
  int v27; 
  float v28; 
  float v29; 
  float v30; 
  float right; 
  float v32; 
  int v33; 
  double v34; 
  float v35; 
  float v36; 
  char *v37; 
  float v38; 
  __int64 v39; 
  float v40; 
  float v41; 
  const GfxImage *material; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float top; 
  const char *String; 
  int v49; 
  const char *v50; 
  bool v51; 
  cg_t *LocalClientGlobals; 
  cg_t *v53; 
  int clientNum; 
  cg_t *v55; 
  int v56; 
  GfxFont *v57; 
  int v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  int localClientNuma; 
  char *v66; 
  vec4_t color; 
  vec4_t quadVerts[4]; 
  vec4_t verts[4]; 
  vec4_t v70[4]; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (char *)element->customElementData;
  left = element->left;
  bottom = element->bottom;
  v66 = customElementData;
  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 464, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  font = element->textData.font;
  v15 = element->bottom - element->top;
  v14 = v15;
  localClientNuma = 0;
  if ( !LUI_ElementHasWeakTableEntry(element, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 474, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  if ( LUI_ElementHasWeakTableEntry(element, luaVM) )
  {
    LUI_PutElementOnTopOfStack(element, luaVM);
    j_lua_getfield(luaVM, -1, "m_textStyle");
    if ( j_lua_type(luaVM, -1) )
    {
      if ( !j_lua_isnumber(luaVM, -1) )
        j_luaL_error(luaVM, "m_textStyle is not an enumerated type!");
      localClientNuma = lui_tointeger32(luaVM, -1);
    }
    j_lua_settop(luaVM, -3);
  }
  LUI_CoD_GenerateQuadVerts(left, bottom - v15, left + 1.0, bottom, (vec4_t (*)[4])quadVerts);
  v16 = quadVerts[3].v[1] - quadVerts[0].v[1];
  v17 = (float)(quadVerts[3].v[0] - quadVerts[0].v[0]) * cls.vidConfig.aspectRatioDisplayPixel;
  v18 = quadVerts[3].v[2] - quadVerts[0].v[2];
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  uMax = element->imageData.uMax;
  v21 = *(float *)&CurrentUnitScale;
  if ( uMax == 0.0 )
  {
    uMax = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18)) * (float)(1.0 / *(float *)&CurrentUnitScale);
    element->imageData.uMax = uMax;
  }
  fontSize = (int)(float)(uMax * *(float *)&CurrentUnitScale);
  v23 = customElementData + 8;
  v24 = 10i64;
  do
  {
    v25 = *((_DWORD *)v23 - 1);
    if ( v25 != -2 )
    {
      j_lua_rawgeti(luaVM, -10000, v25);
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 510, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
        __debugbreak();
      if ( j_lua_isstring(luaVM, -1) )
        text = j_lua_tolstring(luaVM, -1, NULL);
      else
        text = (char *)&queryFormat.fmt + 3;
      j_lua_settop(luaVM, -2);
      if ( *v23 == 1 )
      {
        v27 = R_TextWidth(text, -1, font);
        v28 = (float)(v21 * *((float *)v23 - 2)) + element->left;
        v29 = (float)v27 * 0.5;
        v30 = v28 - v29;
        right = v28 + v29;
      }
      else
      {
        v30 = (float)(v21 * *((float *)v23 - 2)) + element->left;
        right = element->right;
      }
      LUI_CoD_GenerateQuadVerts(v30, element->top, right, element->bottom, (vec4_t (*)[4])verts);
      LUI_CoD_SnapQuadVerts((vec4_t (*)[4])verts);
      v32 = (float)(unsigned __int8)BYTE1(*((_DWORD *)v23 + 1)) * 0.0039215689;
      v33 = (unsigned __int8)*((_DWORD *)v23 + 1);
      color.v[0] = (float)((float)(unsigned __int8)BYTE2(*((_DWORD *)v23 + 1)) * 0.0039215689) * red;
      color.v[1] = v32 * green;
      color.v[2] = (float)((float)v33 * 0.0039215689) * blue;
      color.v[3] = alpha;
      LUI_Render_DrawText(localClientNum, luaVM, element, (const vec4_t (*)[4])verts, &color, font, text, localClientNuma, 0, 0.0, fontSize, NULL, NULL);
    }
    v23 += 16;
    --v24;
  }
  while ( v24 );
  color.v[0] = FLOAT_0_94901961;
  color.v[2] = FLOAT_0_90588236;
  color.v[1] = FLOAT_0_9254902;
  v34 = LUI_Render_GetCurrentUnitScale();
  v35 = element->right - element->left;
  v36 = element->bottom - element->top;
  v37 = v66 + 168;
  v38 = *(float *)&v34;
  v39 = 3i64;
  do
  {
    v40 = v38 * *((float *)v37 - 1);
    v41 = v38 * *(float *)v37;
    material = ScoreboardRowImageCache::cachedIcons[*((__int16 *)v37 - 4)];
    v43 = v38 * *((float *)v37 + 1);
    v44 = v38 * *((float *)v37 + 2);
    if ( v37[28] )
    {
      if ( v37[28] == 1 )
      {
        v45 = (float)(v35 * 0.5) + element->left;
      }
      else
      {
        if ( v37[28] != 2 )
          goto LABEL_39;
        v45 = v35 + element->left;
      }
    }
    else
    {
      v45 = element->left;
    }
    v40 = (float)(v38 * *((float *)v37 - 1)) + v45;
    v41 = v41 + v45;
LABEL_39:
    if ( v37[29] )
    {
      if ( v37[29] == 1 )
      {
        v46 = (float)(v36 * 0.5) + element->top;
        v43 = v43 + v46;
        v44 = v44 + v46;
      }
      else if ( v37[29] == 2 )
      {
        v43 = v43 + v36;
        v44 = v44 + v36;
      }
    }
    else
    {
      top = element->top;
      v43 = v43 + top;
      v44 = v44 + top;
    }
    color.v[3] = *((float *)v37 + 6);
    LUI_CoD_GenerateQuadVerts(v40, v43, v41, v44, (vec4_t (*)[4])v70);
    LUI_CoD_SnapQuadVerts((vec4_t (*)[4])v70);
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])v70, 0.0, 0.0, 1.0, 1.0, &color, material);
    v37 += 40;
    --v39;
  }
  while ( v39 );
  if ( v66[288] )
  {
    String = SEH_StringEd_GetString("LUA_MENU/YOU");
    if ( CL_GetLocalClientActiveCount() <= 1 )
      goto LABEL_69;
    if ( Dvar_GetBoolSafe("OSNMNPLRR") )
    {
      if ( Com_FrontEnd_IsInFrontEnd() )
      {
        v49 = *((_DWORD *)v66 + 74);
        if ( !v49 )
          goto LABEL_51;
        v51 = v49 == 1;
LABEL_66:
        if ( v51 )
        {
          v50 = "LUA_MENU/YOU_P2";
          goto LABEL_68;
        }
        goto LABEL_69;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 573, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( *((_DWORD *)v66 + 73) == LocalClientGlobals->clientNum || Com_FrontEnd_IsInFrontEnd() )
      {
        v53 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 581, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        clientNum = v53->clientNum;
        v55 = CG_GetLocalClientGlobals(LOCAL_CLIENT_1);
        if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 585, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        v56 = *((_DWORD *)v66 + 73);
        if ( v56 != clientNum )
        {
          v51 = v56 == v55->clientNum;
          goto LABEL_66;
        }
LABEL_51:
        v50 = "LUA_MENU/YOU_P1";
LABEL_68:
        String = SEH_StringEd_GetString(v50);
LABEL_69:
        v57 = R_RegisterFont("fonts/main_regular.ttf", 16);
        v58 = R_TextWidth(String, -1, v57);
        v59 = element->left;
        v60 = element->bottom;
        v61 = (float)v58;
        v62 = (float)(v61 + 5.0) * v21;
        color = (vec4_t)_xmm;
        LUI_CoD_GenerateQuadVerts((float)(v59 - v62) - (float)(v21 * 12.0), element->top, v59 - (float)(v21 * 12.0), v60, (vec4_t (*)[4])quadVerts);
        LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
        LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &color, *((const GfxImage **)v66 + 35));
        v63 = (float)((float)(element->left - v62) - (float)(v21 * 12.0)) + (float)(v21 * 3.0);
        LUI_CoD_GenerateQuadVerts(v63, (float)(v14 * 0.050000001) + element->top, (float)(v61 + v63) - (float)(v21 * 3.0), element->bottom - (float)(v14 * 0.050000001), (vec4_t (*)[4])quadVerts);
        LUI_Render_DrawText(localClientNum, luaVM, element, (const vec4_t (*)[4])quadVerts, &colorBlack, v57, String, localClientNuma, 0, 0.0, (int)(float)(v21 * 16.0), NULL, NULL);
      }
    }
  }
}

/*
==============
LUIElement_ScoreboardRow_SetFieldAndPosition_impl
==============
*/
__int64 LUIElement_ScoreboardRow_SetFieldAndPosition_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  ScoreboardRowData *CustomElement; 
  int v4; 
  ScoreboardRowField *v5; 
  const char *v6; 
  int stringRef; 
  char v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  __int64 v12; 
  signed __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  double v17; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: SetFieldAndPosition( <int>, <string>, <int>, <int> )");
  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v2, luaVM);
  v4 = lui_tointeger32(luaVM, 2);
  if ( (unsigned int)v4 > 9 )
    j_luaL_error(luaVM, "ScoreboardRow: Only fields 0-9 (10 total) are supported.\n");
  v5 = &CustomElement->fields[v4];
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  stringRef = v5->stringRef;
  v8 = 0;
  v9 = v6;
  if ( stringRef == -2 )
    goto LABEL_28;
  j_lua_rawgeti(luaVM, -10000, stringRef);
  if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 109, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
    __debugbreak();
  v10 = j_lua_tolstring(luaVM, -1, NULL);
  v11 = v10;
  if ( v9 )
  {
    if ( v10 )
    {
      v12 = 0x7FFFFFFFi64;
      v13 = v9 - v10;
      do
      {
        v14 = v11[v13];
        v15 = v12;
        v16 = *v11++;
        --v12;
        if ( !v15 )
          break;
        if ( v14 != v16 )
          goto LABEL_26;
      }
      while ( v14 );
    }
    else
    {
LABEL_26:
      v8 = 1;
      LUI_UnrefVerify<int (lua_State *,int)>(luaVM, -10000, v5->stringRef, j_lua_isstring);
      LUI_Ref_Monitor_RemoveRef(luaVM, -10000, v5->stringRef);
    }
  }
  j_lua_settop(luaVM, -2);
  if ( v8 )
  {
LABEL_28:
    if ( v9 )
    {
      j_lua_pushstring(luaVM, v9);
      v5->stringRef = LUI_Ref_Monitor_AddRef(luaVM, -10000);
      LUI_QuadCache_Element_Invalidate(v2);
    }
  }
  v17 = lui_tonumber32(luaVM, 4);
  v5->offset = *(float *)&v17;
  v5->alignment = lui_tointeger32(luaVM, 5);
  LUI_QuadCache_Element_Invalidate(v2);
  return 0i64;
}

/*
==============
LUIElement_ScoreboardRow_SetImageData_impl
==============
*/
__int64 LUIElement_ScoreboardRow_SetImageData_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  ScoreboardRowData *CustomElement; 
  __int16 v4; 
  __int16 v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  char v14; 
  char v15; 
  double v16; 
  __int64 v17; 

  if ( j_lua_gettop(luaVM) != 10 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) || !j_lua_isnumber(luaVM, 6) || !j_lua_isnumber(luaVM, 7) || !j_lua_isnumber(luaVM, 8) || !j_lua_isnumber(luaVM, 9) || !j_lua_isnumber(luaVM, 10) )
    j_luaL_error(luaVM, "USAGE: SetImage( <int>, <int>, <float>, <float>, <float>, <float>, <int>, <int>, <float> )");
  if ( j_lua_gettop(luaVM) == 10 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) && j_lua_isnumber(luaVM, 6) && j_lua_isnumber(luaVM, 7) && j_lua_isnumber(luaVM, 8) && j_lua_isnumber(luaVM, 9) && j_lua_isnumber(luaVM, 10) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v2, luaVM);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = lui_tointeger32(luaVM, 3);
    v6 = lui_tonumber32(luaVM, 4);
    v7 = *(float *)&v6;
    v8 = lui_tonumber32(luaVM, 5);
    v9 = *(float *)&v8;
    v10 = lui_tonumber32(luaVM, 6);
    v11 = *(float *)&v10;
    v12 = lui_tonumber32(luaVM, 7);
    v13 = *(float *)&v12;
    v14 = lui_tointeger32(luaVM, 8);
    v15 = lui_tointeger32(luaVM, 9);
    v16 = lui_tonumber32(luaVM, 10);
    v17 = 5i64 * v4 + 20;
    *((float *)&CustomElement->fields[0].stringRef + 2 * v17) = v7;
    *((float *)&CustomElement->fields[0].alignment + 2 * v17) = v9;
    *((float *)&CustomElement->fields[0].color + 2 * v17) = v11;
    *(&CustomElement->fields[1].offset + 2 * v17) = v13;
    *((_WORD *)&CustomElement->fields[0].offset + 4 * v17) = v5;
    *((_BYTE *)&CustomElement->fields[2].stringRef + 8 * v17) = v14;
    *((_BYTE *)&CustomElement->fields[2].stringRef + 8 * v17 + 1) = v15;
    *(&CustomElement->fields[2].offset + 2 * v17) = *(float *)&v16;
    *(&CustomElement->fields[1].stringRef + 2 * v17) = 1064497907;
    *((_DWORD *)&CustomElement->fields[1].alignment + 2 * v17) = 1064103149;
    *(&CustomElement->fields[1].color + 2 * v17) = 1063774184;
  }
  return 0i64;
}

/*
==============
LUIElement_ScoreboardRow_SetImagePosition_impl
==============
*/
__int64 LUIElement_ScoreboardRow_SetImagePosition_impl(lua_State *const luaVM)
{
  __int16 v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  LUIElement *v10; 
  ScoreboardRowData *CustomElement; 
  __int64 v12; 

  if ( j_lua_gettop(luaVM) != 6 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) || !j_lua_isnumber(luaVM, 6) )
    j_luaL_error(luaVM, "USAGE: SetImagePosition( <int> <float>, <float>, <float>, <float> )");
  if ( j_lua_gettop(luaVM) == 6 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) && j_lua_isnumber(luaVM, 6) )
  {
    v2 = lui_tointeger32(luaVM, 2);
    v3 = lui_tonumber32(luaVM, 3);
    v4 = *(float *)&v3;
    v5 = lui_tonumber32(luaVM, 4);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 5);
    v8 = *(float *)&v7;
    v9 = lui_tonumber32(luaVM, 6);
    v10 = LUI_ToElement(luaVM, 1);
    CustomElement = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v10, luaVM);
    v12 = v2;
    CustomElement->images[v12].left = v4;
    CustomElement->images[v12].right = v6;
    CustomElement->images[v12].top = v8;
    CustomElement->images[v12].bottom = *(float *)&v9;
  }
  return 0i64;
}

/*
==============
LUIElement_ScoreboardRow_SetImageRGBFromTable_impl
==============
*/
__int64 LUIElement_ScoreboardRow_SetImageRGBFromTable_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  __int16 v3; 
  ScoreboardRowData *CustomElement; 
  float v5; 
  float v6; 
  float v7; 
  double v8; 
  double v9; 
  double v10; 
  __int64 v11; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 5 )
    j_luaL_error(luaVM, "USAGE: SetImagePosition( <int>, <table> )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 5 )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 2);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v2, luaVM);
  v5 = 0.0;
  v6 = 0.0;
  v7 = 0.0;
  j_lua_getfield(luaVM, 3, "r");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v8 = lui_tonumber32(luaVM, -1);
    v5 = *(float *)&v8;
  }
  j_lua_getfield(luaVM, 3, "g");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lui_tonumber32(luaVM, -1);
    v6 = *(float *)&v9;
  }
  j_lua_getfield(luaVM, 3, "b");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v10 = lui_tonumber32(luaVM, -1);
    v7 = *(float *)&v10;
  }
  j_lua_settop(luaVM, -4);
  v11 = v3;
  result = 0i64;
  CustomElement->images[v11].red = v5;
  CustomElement->images[v11].green = v6;
  CustomElement->images[v11].blue = v7;
  return result;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScoreboardRow
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScoreboardRow(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupScoreboardRow_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupScoreboardRow_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupScoreboardRow_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  _DWORD *v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_ScoreboardRowMethods);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0x130ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, 0x130ui64);
  v3[1] = -2;
  *v3 = 0;
  *(_QWORD *)(v3 + 3) = 0xFFFFFFi64;
  v3[5] = -2;
  *(_QWORD *)(v3 + 7) = 0xFFFFFFi64;
  v3[9] = -2;
  *(_QWORD *)(v3 + 11) = 0xFFFFFFi64;
  v3[13] = -2;
  *(_QWORD *)(v3 + 15) = 0xFFFFFFi64;
  v3[17] = -2;
  *(_QWORD *)(v3 + 19) = 0xFFFFFFi64;
  v3[21] = -2;
  *(_QWORD *)(v3 + 23) = 0xFFFFFFi64;
  v3[25] = -2;
  *(_QWORD *)(v3 + 27) = 0xFFFFFFi64;
  v3[29] = -2;
  *(_QWORD *)(v3 + 31) = 0xFFFFFFi64;
  v3[33] = -2;
  *(_QWORD *)(v3 + 35) = 0xFFFFFFi64;
  v3[37] = -2;
  v3[39] = 0xFFFFFF;
  *((_QWORD *)v3 + 35) = Image_Register("hud_scoreboard_player_indicator", IMAGE_TRACK_HUD);
  v2->renderFunction = LUIElement_ScoreboardRowRender;
  LUIElement_InitTextLikeElement(v2);
  if ( !Com_FrontEnd_IsInFrontEnd() )
  {
    ScoreboardRowImageCache::cachedIcons[0] = Image_Register("hud_ping_1", IMAGE_TRACK_HUD);
    ScoreboardRowImageCache::cachedIcons[1] = Image_Register("hud_ping_2", IMAGE_TRACK_HUD);
    ScoreboardRowImageCache::cachedIcons[2] = Image_Register("hud_ping_3", IMAGE_TRACK_HUD);
    ScoreboardRowImageCache::cachedIcons[3] = Image_Register("hud_ping_4", IMAGE_TRACK_HUD);
    ScoreboardRowImageCache::cachedIcons[6] = Image_Register("hud_icon_death_sm", IMAGE_TRACK_HUD);
    ScoreboardRowImageCache::cachedIcons[7] = Image_Register("hud_status_revive_wh", IMAGE_TRACK_HUD);
    ScoreboardRowImageCache::cachedIcons[8] = Image_Register("icon_minimap_dogtag", IMAGE_TRACK_HUD);
  }
  ScoreboardRowImageCache::cachedIcons[9] = Image_Register("icon_scoreboard_plants", IMAGE_TRACK_HUD);
  ScoreboardRowImageCache::cachedIcons[4] = Image_Register("scoreboard_mic_mute", IMAGE_TRACK_HUD);
  ScoreboardRowImageCache::cachedIcons[5] = Image_Register("scoreboard_mic_talk", IMAGE_TRACK_HUD);
  return 0i64;
}

