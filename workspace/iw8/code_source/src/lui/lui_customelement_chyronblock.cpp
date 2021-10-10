/*
==============
AddIndexToLinesArray
==============
*/
void AddIndexToLinesArray(LUIChyronBlockOptions *options, int newCSVIndex)
{
  bool isFull; 
  int v5; 
  bool toggleFeed; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int *v10; 
  int linesPerBlock; 
  int *curLinesIndices; 

  isFull = options->isFull;
  v5 = 0;
  while ( 1 )
  {
    if ( isFull && !options->toggleFeed )
    {
LABEL_17:
      linesPerBlock = options->linesPerBlock;
      if ( linesPerBlock > 0 )
      {
        curLinesIndices = options->curLinesIndices;
        do
        {
          ++v5;
          *curLinesIndices = curLinesIndices[1];
          ++curLinesIndices;
          linesPerBlock = options->linesPerBlock;
        }
        while ( v5 < linesPerBlock );
      }
      if ( (unsigned int)linesPerBlock >= 0x16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_chyronblock.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( options->linesPerBlock ) < (unsigned)( 22 )", "options->linesPerBlock doesn't index MAX_NUM_LINES_PER_BLOCK\n\t%i not in [0, %i)", linesPerBlock, 22) )
        __debugbreak();
      options->curLinesIndices[options->linesPerBlock] = newCSVIndex;
      return;
    }
    toggleFeed = options->toggleFeed;
    v7 = 1;
    if ( toggleFeed )
    {
      v7 = 0;
      if ( !options->useBlock1 )
        v7 = options->linesPerBlock;
    }
    v8 = v7;
    v9 = options->linesPerBlock + v7;
    if ( v7 < v9 )
      break;
LABEL_11:
    options->isFull = 1;
    if ( !toggleFeed )
      goto LABEL_17;
    options->useBlock1 = !options->useBlock1;
    isFull = 1;
  }
  v10 = &options->curLinesIndices[v7];
  while ( *v10 >= 0 )
  {
    ++v7;
    ++v8;
    ++v10;
    if ( v8 >= v9 )
      goto LABEL_11;
  }
  if ( (unsigned int)v7 >= 0x16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_chyronblock.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 22 )", "index doesn't index MAX_NUM_LINES_PER_BLOCK\n\t%i not in [0, %i)", v7, 22) )
    __debugbreak();
  options->curLinesIndices[v7] = newCSVIndex;
  options->curMaxLineIndex = v7;
}

/*
==============
LUIElement_ChyronBlock_Render
==============
*/
void LUIElement_ChyronBlock_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  int *customElementData; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  double CurrentUnitScale; 
  char v15; 
  int v16; 
  float v17; 
  int v18; 
  int v19; 
  const char *ColumnValueForRow; 
  int v21; 
  unsigned __int64 v22; 
  int v23; 
  const StringTable *v24; 
  int v25; 
  __int128 v27; 
  float v29; 
  __int128 v30; 
  __int128 v32; 
  __int64 v33; 
  int v34; 
  const int *v35; 
  const char *text; 
  int v37; 
  int v39; 
  __int64 v40; 
  int *v41; 
  __int64 i; 
  int v43; 
  FontDecodeStyle fontDecodeStyle; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (int *)element->customElementData;
  v10 = Sys_Milliseconds();
  v11 = customElementData[9];
  v12 = v10;
  v13 = customElementData[39];
  v43 = v11;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  v15 = *((_BYTE *)customElementData + 176);
  v16 = 0;
  v17 = (float)customElementData[14] * *(float *)&CurrentUnitScale;
  if ( v12 - v13 > v11 || !v13 )
  {
    v18 = customElementData[43];
    do
    {
      v19 = v18;
      ColumnValueForRow = StringTable_GetColumnValueForRow(*(const StringTable **)customElementData, v18, 1);
      v18 = ++customElementData[43];
      v21 = customElementData[42];
      if ( v18 > v21 )
      {
        customElementData[43] = 0;
        v18 = 0;
      }
      v22 = -1i64;
      do
        ++v22;
      while ( ColumnValueForRow[v22] );
    }
    while ( v22 > customElementData[3] && v18 < v21 );
    AddIndexToLinesArray((LUIChyronBlockOptions *)customElementData, v19);
    customElementData[38] = v12;
    v13 = v12;
    customElementData[39] = v12;
    if ( v15 )
    {
      if ( !*((_BYTE *)customElementData + 177) )
        goto LABEL_17;
      customElementData[41] = v12;
    }
    *((_BYTE *)customElementData + 179) = 1;
  }
LABEL_17:
  v23 = customElementData[2];
  v24 = *(const StringTable **)customElementData;
  v25 = 2 * v23;
  if ( !v15 )
    v25 = v23 + 2;
  v27 = 0i64;
  *(float *)&v27 = (float)(v12 - customElementData[38]);
  _XMM0 = v27;
  __asm { vminss  xmm1, xmm0, cs:__real@437a0000 }
  v30 = LODWORD(FLOAT_1_0);
  *(float *)&v30 = 1.0 - (float)(*(float *)&_XMM1 * 0.0040000002);
  v29 = *(float *)&v30;
  _XMM10 = v30;
  if ( v15 )
  {
    v32 = LODWORD(FLOAT_1_0);
    *(float *)&v32 = 1.0 - (float)((float)(v12 - customElementData[41]) / (float)customElementData[10]);
    _XMM10 = v32;
    v29 = 0.0;
  }
  v33 = v25;
  v34 = 0;
  if ( v25 > 0 )
  {
    v35 = customElementData + 16;
    while ( *v35 < 0 )
    {
LABEL_41:
      ++v34;
      ++v35;
      if ( !--v33 )
        goto LABEL_42;
    }
    text = StringTable_GetColumnValueForRow(v24, *v35, 1);
    v37 = customElementData[8];
    *(_OWORD *)&fontDecodeStyle.lastTextSet = *((_OWORD *)customElementData + 1);
    *(_DWORD *)&fontDecodeStyle.useGameTime = v37;
    if ( *((_BYTE *)customElementData + 177) )
    {
      fontDecodeStyle.lastTextSet = v13 + v43 * (v34 - customElementData[2]);
    }
    else
    {
      v29 = 0.0;
      fontDecodeStyle.lastTextSet = v13 + v43 * (v34 - customElementData[40]);
    }
    if ( v15 )
    {
      if ( *((_BYTE *)customElementData + 179) )
      {
        if ( !*((_BYTE *)customElementData + 178) )
        {
          if ( v34 >= customElementData[2] )
            goto LABEL_36;
          goto LABEL_33;
        }
        if ( v34 >= customElementData[2] )
        {
LABEL_33:
          fontDecodeStyle.lastTextSet = 0;
          __asm { vminss  xmm6, xmm10, xmm7 }
LABEL_37:
          if ( v15 )
            v39 = v34 % customElementData[2];
          else
            v39 = v34;
          LUI_Interface_DrawText(localClientNum, root, element, element->left, (float)((float)((float)v39 + v29) * v17) + element->top, red, green, blue, *(float *)&_XMM6, text, *((GfxFont **)customElementData + 6), v17, element->right - element->left, 0, 0, *((_BYTE *)customElementData + 60), &fontDecodeStyle, NULL, NULL, luaVM);
          goto LABEL_41;
        }
      }
    }
    else if ( !v34 )
    {
      __asm { vminss  xmm6, xmm10, xmm7 }
      goto LABEL_37;
    }
LABEL_36:
    *(float *)&_XMM6 = FLOAT_1_0;
    goto LABEL_37;
  }
LABEL_42:
  if ( v29 <= 0.0 && *((_BYTE *)customElementData + 179) && *(float *)&_XMM10 <= 0.0 )
  {
    *((_BYTE *)customElementData + 179) = 0;
    if ( !v15 )
    {
      customElementData[16] = -1;
      return;
    }
    if ( *((_BYTE *)customElementData + 178) )
      v16 = customElementData[2];
    v40 = customElementData[2] + v16;
    if ( v16 < v40 )
    {
      v41 = &customElementData[v16 + 16];
      for ( i = v40 - v16; i; --i )
        *v41++ = -1;
    }
  }
  if ( v15 )
  {
    if ( *((_BYTE *)customElementData + 177) )
      *((_BYTE *)customElementData + 177) = 0;
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupChyronBlock
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupChyronBlock(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupChyronBlock_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupChyronBlock_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupChyronBlock_impl(lua_State *const luaVM)
{
  int v1; 
  LUIElement *v3; 
  const StringTable **v4; 
  const char *v5; 
  bool v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  const StringTable *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 result; 

  v1 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v3 = LUI_ToElement(luaVM, 1);
  v3->usageFlags |= 1u;
  v3->renderFunction = LUIElement_ChyronBlock_Render;
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v3, luaVM);
  v4 = (const StringTable **)j_lua_newuserdata(luaVM, 0xB8ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v3->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v3->customElementData = v4;
  memset_0(v4, 0, 0xB8ui64);
  j_lua_getfield(luaVM, 2, "sourceFile");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v5 = j_lua_tolstring(luaVM, -1, NULL);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_chyronblock.cpp", 277, ASSERT_TYPE_ASSERT, "(sourceFile)", (const char *)&queryFormat, "sourceFile") )
      __debugbreak();
  }
  else
  {
    v5 = (char *)&queryFormat.fmt + 3;
  }
  StringTable_GetAsset(v5, v4);
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "toggleFeeds");
  v6 = j_lua_type(luaVM, -1) == 1 && j_lua_toboolean(luaVM, -1) > 0;
  *((_BYTE *)v4 + 176) = v6;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "linesPerBlock");
  if ( j_lua_isnumber(luaVM, -1) )
    v7 = lui_tointeger32(luaVM, -1);
  else
    v7 = 8;
  *((_DWORD *)v4 + 2) = v7;
  if ( v7 >= 20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_chyronblock.cpp", 287, ASSERT_TYPE_ASSERT, "(options->linesPerBlock < 22 - 2)", "%s\n\tNeed to increase the MAX_NUM_LINES_PER_BLOCK for LUI_CustomElement_ChyronBlock\n", "options->linesPerBlock < MAX_NUM_LINES_PER_BLOCK - 2") )
    __debugbreak();
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "maxCharsPerLine");
  if ( j_lua_isnumber(luaVM, -1) )
    v8 = lui_tointeger32(luaVM, -1);
  else
    v8 = 25;
  *((_DWORD *)v4 + 3) = v8;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "textLineDelay");
  if ( j_lua_isnumber(luaVM, -1) )
    v9 = lui_tointeger32(luaVM, -1);
  else
    v9 = 300;
  *((_DWORD *)v4 + 9) = v9;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "blockFadeTime");
  if ( j_lua_isnumber(luaVM, -1) )
    v10 = lui_tointeger32(luaVM, -1);
  else
    v10 = 400;
  *((_DWORD *)v4 + 10) = v10;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "textFont");
  if ( j_lua_isuserdata(luaVM, -1) )
    v11 = (const StringTable *)j_lua_touserdata(luaVM, -1);
  else
    v11 = NULL;
  v4[6] = v11;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_chyronblock.cpp", 304, ASSERT_TYPE_ASSERT, "(options->font)", (const char *)&queryFormat, "options->font") )
    __debugbreak();
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "textHeight");
  if ( j_lua_isnumber(luaVM, -1) )
    v12 = lui_tointeger32(luaVM, -1);
  else
    v12 = 28;
  *((_DWORD *)v4 + 14) = v12;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "textAlign");
  if ( j_lua_isnumber(luaVM, -1) )
    v13 = lui_tointeger32(luaVM, -1);
  else
    v13 = 0;
  *((_DWORD *)v4 + 15) = v13;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "decodeLetterSpeed");
  if ( j_lua_isnumber(luaVM, -1) )
    v14 = lui_tointeger32(luaVM, -1);
  else
    v14 = 10;
  *((_DWORD *)v4 + 5) = v14;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "decodeRandChars");
  if ( j_lua_isnumber(luaVM, -1) )
    v1 = lui_tointeger32(luaVM, -1);
  *((_DWORD *)v4 + 6) = v1;
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "decodeUpdatesPerLetter");
  if ( j_lua_isnumber(luaVM, -1) )
    v15 = lui_tointeger32(luaVM, -1);
  else
    v15 = 4;
  *((_DWORD *)v4 + 7) = v15;
  j_lua_settop(luaVM, -2);
  *((_DWORD *)v4 + 42) = StringTable_GetRowCount(*v4);
  memset_0(v4 + 8, -1, 0x58ui64);
  result = 0i64;
  *((_DWORD *)v4 + 43) = 0;
  *(_WORD *)((char *)v4 + 177) = 256;
  *((_BYTE *)v4 + 179) = 1;
  return result;
}

