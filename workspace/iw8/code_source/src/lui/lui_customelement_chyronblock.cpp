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
  bool v20; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  char v27; 
  int v30; 
  int v32; 
  int v33; 
  const char *ColumnValueForRow; 
  int v35; 
  unsigned __int64 v36; 
  int v37; 
  const StringTable *v39; 
  int v41; 
  __int64 v52; 
  int v53; 
  bool v54; 
  const int *v55; 
  const char *text; 
  int v60; 
  bool v71; 
  __int64 v79; 
  int *v80; 
  __int64 i; 
  float fmt; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  int v92; 
  FontDecodeStyle fontDecodeStyle; 
  char v104; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
  }
  v20 = element->customElementData == NULL;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-0C8h], xmm14
  }
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RBX = (int *)element->customElementData;
  v23 = Sys_Milliseconds();
  v24 = _RBX[9];
  v25 = v23;
  v26 = _RBX[39];
  v92 = v24;
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  v27 = *((_BYTE *)_RBX + 176);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+38h]
  }
  v30 = 0;
  __asm { vmulss  xmm14, xmm1, xmm0 }
  if ( v25 - v26 > v24 || !v26 )
  {
    v32 = _RBX[43];
    do
    {
      v33 = v32;
      ColumnValueForRow = StringTable_GetColumnValueForRow(*(const StringTable **)_RBX, v32, 1);
      v32 = ++_RBX[43];
      v35 = _RBX[42];
      if ( v32 > v35 )
      {
        _RBX[43] = 0;
        v32 = 0;
      }
      v36 = -1i64;
      do
        ++v36;
      while ( ColumnValueForRow[v36] );
    }
    while ( v36 > _RBX[3] && v32 < v35 );
    AddIndexToLinesArray((LUIChyronBlockOptions *)_RBX, v33);
    _RBX[38] = v25;
    v26 = v25;
    _RBX[39] = v25;
    if ( v27 )
    {
      if ( !*((_BYTE *)_RBX + 177) )
        goto LABEL_17;
      _RBX[41] = v25;
    }
    *((_BYTE *)_RBX + 179) = 1;
  }
LABEL_17:
  v37 = _RBX[2];
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v39 = *(const StringTable **)_RBX;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v41 = 2 * v37;
  if ( !v27 )
    v41 = v37 + 2;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vminss  xmm1, xmm0, cs:__real@437a0000
    vmulss  xmm2, xmm1, cs:__real@3b83126f
    vsubss  xmm8, xmm7, xmm2
    vmovaps xmm10, xmm8
    vxorps  xmm9, xmm9, xmm9
  }
  if ( v27 )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      vcvtsi2ss xmm1, xmm1, esi
      vdivss  xmm2, xmm1, xmm0
      vsubss  xmm10, xmm7, xmm2
      vxorps  xmm8, xmm8, xmm8
    }
  }
  v52 = v41;
  v53 = 0;
  v54 = v41 == 0;
  if ( v41 > 0 )
  {
    __asm { vmovaps [rsp+1A8h+var_98], xmm11 }
    v55 = _RBX + 16;
    __asm
    {
      vmovss  xmm11, [rsp+1A8h+blue]
      vmovaps [rsp+1A8h+var_A8], xmm12
      vmovss  xmm12, [rsp+1A8h+green]
      vmovaps [rsp+1A8h+var_B8], xmm13
      vmovss  xmm13, [rsp+1A8h+red]
      vmovaps [rsp+1A8h+var_48], xmm6
    }
    while ( *v55 < 0 )
    {
LABEL_38:
      ++v53;
      ++v55;
      v71 = v52-- == 0;
      v54 = v71 || v52 == 0;
      if ( !v52 )
      {
        __asm
        {
          vmovaps xmm13, [rsp+1A8h+var_B8]
          vmovaps xmm12, [rsp+1A8h+var_A8]
          vmovaps xmm11, [rsp+1A8h+var_98]
          vmovaps xmm6, [rsp+1A8h+var_48]
        }
        goto LABEL_40;
      }
    }
    text = StringTable_GetColumnValueForRow(v39, *v55, 1);
    v60 = _RBX[8];
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx+10h]
      vmovups xmmword ptr [rsp+1A8h+var_E8.lastTextSet], xmm0
    }
    *(_DWORD *)&fontDecodeStyle.useGameTime = v60;
    if ( *((_BYTE *)_RBX + 177) )
    {
      fontDecodeStyle.lastTextSet = v26 + v92 * (v53 - _RBX[2]);
    }
    else
    {
      __asm { vmovaps xmm8, xmm9 }
      fontDecodeStyle.lastTextSet = v26 + v92 * (v53 - _RBX[40]);
    }
    if ( v27 )
    {
      if ( *((_BYTE *)_RBX + 179) )
      {
        if ( !*((_BYTE *)_RBX + 178) )
        {
          if ( v53 >= _RBX[2] )
            goto LABEL_36;
          goto LABEL_33;
        }
        if ( v53 >= _RBX[2] )
        {
LABEL_33:
          fontDecodeStyle.lastTextSet = 0;
          __asm { vminss  xmm6, xmm10, xmm7 }
LABEL_37:
          _RCX = element;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+0D4h]
            vmovss  xmm3, dword ptr [rcx+0CCh]; x
            vsubss  xmm4, xmm0, xmm3
            vmovss  [rsp+1A8h+var_148], xmm4
            vmovss  [rsp+1A8h+var_150], xmm14
            vmovss  [rsp+1A8h+var_168], xmm6
            vmovss  [rsp+1A8h+var_170], xmm11
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, edx
            vaddss  xmm2, xmm1, xmm8
            vmulss  xmm0, xmm2, xmm14
            vaddss  xmm5, xmm0, dword ptr [rcx+0D0h]
            vmovss  [rsp+1A8h+var_178], xmm12
            vmovss  [rsp+1A8h+var_180], xmm13
            vmovss  dword ptr [rsp+1A8h+fmt], xmm5
          }
          LUI_Interface_DrawText(localClientNum, root, element, *(float *)&_XMM3, fmt, v86, v87, v88, v89, text, *((GfxFont **)_RBX + 6), v90, v91, 0, 0, *((_BYTE *)_RBX + 60), &fontDecodeStyle, NULL, NULL, luaVM);
          goto LABEL_38;
        }
      }
    }
    else if ( !v53 )
    {
      __asm { vminss  xmm6, xmm10, xmm7 }
      goto LABEL_37;
    }
LABEL_36:
    __asm { vmovaps xmm6, xmm7 }
    goto LABEL_37;
  }
LABEL_40:
  __asm
  {
    vmovaps xmm14, [rsp+1A8h+var_C8]
    vmovaps xmm7, [rsp+1A8h+var_58]
    vcomiss xmm8, xmm9
    vmovaps xmm8, [rsp+1A8h+var_68]
  }
  if ( v54 )
  {
    if ( *((_BYTE *)_RBX + 179) )
    {
      __asm { vcomiss xmm10, xmm9 }
      if ( !*((_BYTE *)_RBX + 179) )
      {
        *((_BYTE *)_RBX + 179) = 0;
        if ( !v27 )
        {
          _RBX[16] = -1;
          goto LABEL_53;
        }
        if ( *((_BYTE *)_RBX + 178) )
          v30 = _RBX[2];
        v79 = _RBX[2] + v30;
        if ( v30 < v79 )
        {
          v80 = &_RBX[v30 + 16];
          for ( i = v79 - v30; i; --i )
            *v80++ = -1;
        }
      }
    }
  }
  if ( v27 && *((_BYTE *)_RBX + 177) )
    *((_BYTE *)_RBX + 177) = 0;
LABEL_53:
  _R11 = &v104;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-58h]
    vmovaps xmm10, xmmword ptr [r11-68h]
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

