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
  LUIElement *v3; 
  __int64 v5; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: SetImage( <int>, <float> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    _RDI = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v3, luaVM);
    v5 = lui_tointeger32(luaVM, 2);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    _RDX = 5 * v5;
    __asm { vmovss  dword ptr [rdi+rdx*8+0C0h], xmm0 }
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

void __fastcall LUIElement_ScoreboardRowRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  char *customElementData; 
  GfxFont *v25; 
  int fontSize; 
  _BYTE *v56; 
  __int64 v57; 
  int v58; 
  const char *v59; 
  __int64 v92; 
  const GfxImage *v95; 
  const char *String; 
  int v106; 
  const char *v107; 
  bool v108; 
  cg_t *LocalClientGlobals; 
  cg_t *v110; 
  int clientNum; 
  cg_t *v112; 
  int v113; 
  GfxFont *v115; 
  float fmt; 
  float fmta; 
  float font; 
  float fonta; 
  float text; 
  float texta; 
  int style; 
  int stylea; 
  float material; 
  float materiala; 
  int localClientNuma; 
  char *v163; 
  vec4_t color; 
  vec4_t quadVerts[4]; 
  vec4_t verts[4]; 
  vec4_t v167[4]; 
  char v168; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RDI = element;
  __asm { vmovaps xmm14, xmm3 }
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (char *)_RDI->customElementData;
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+0CCh]
    vmovss  xmm7, dword ptr [rdi+0D8h]
  }
  v163 = customElementData;
  if ( !LUIElement_IsTextLike(_RDI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 464, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rdi+0D8h] }
  v25 = _RDI->textData.font;
  __asm { vsubss  xmm15, xmm0, dword ptr [rdi+0D0h] }
  localClientNuma = 0;
  if ( !LUI_ElementHasWeakTableEntry(_RDI, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 474, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  if ( LUI_ElementHasWeakTableEntry(_RDI, luaVM) )
  {
    LUI_PutElementOnTopOfStack(_RDI, luaVM);
    j_lua_getfield(luaVM, -1, "m_textStyle");
    if ( j_lua_type(luaVM, -1) )
    {
      if ( !j_lua_isnumber(luaVM, -1) )
        j_luaL_error(luaVM, "m_textStyle is not an enumerated type!");
      localClientNuma = lui_tointeger32(luaVM, -1);
    }
    j_lua_settop(luaVM, -3);
  }
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vaddss  xmm2, xmm6, xmm13; right
    vsubss  xmm1, xmm7, xmm15; top
    vmovaps xmm3, xmm7; bottom
    vmovaps xmm0, xmm6; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+130h+quadVerts+34h]
    vsubss  xmm6, xmm0, dword ptr [rbp+130h+quadVerts+4]
    vmovss  xmm0, dword ptr [rbp+130h+quadVerts+30h]
    vsubss  xmm2, xmm0, dword ptr [rbp+130h+quadVerts]
    vmovss  xmm1, dword ptr [rbp+130h+quadVerts+38h]
    vmulss  xmm8, xmm2, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
    vsubss  xmm7, xmm1, dword ptr [rbp+130h+quadVerts+8]
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+11Ch]
    vxorps  xmm12, xmm12, xmm12
    vucomiss xmm1, xmm12
    vmovaps xmm11, xmm0
  }
  if ( v108 )
  {
    __asm
    {
      vmulss  xmm2, xmm8, xmm8
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm7, xmm7
      vaddss  xmm3, xmm3, xmm2
      vsqrtss xmm1, xmm3, xmm3
      vdivss  xmm0, xmm13, xmm0
      vmulss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rdi+11Ch], xmm1
    }
  }
  __asm
  {
    vmovss  xmm7, [rbp+130h+blue]
    vmovss  xmm8, [rbp+130h+green]
    vmovss  xmm10, [rbp+130h+red]
    vmovss  xmm9, cs:__real@3f000000
    vmovss  xmm6, cs:__real@3b808081
    vmulss  xmm0, xmm1, xmm11
    vcvttss2si r13d, xmm0
  }
  v56 = customElementData + 8;
  v57 = 10i64;
  do
  {
    v58 = *((_DWORD *)v56 - 1);
    if ( v58 != -2 )
    {
      j_lua_rawgeti(luaVM, -10000, v58);
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 510, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
        __debugbreak();
      if ( j_lua_isstring(luaVM, -1) )
        v59 = j_lua_tolstring(luaVM, -1, NULL);
      else
        v59 = (char *)&queryFormat.fmt + 3;
      j_lua_settop(luaVM, -2);
      if ( *v56 == 1 )
      {
        R_TextWidth(v59, -1, v25);
        __asm
        {
          vmulss  xmm0, xmm11, dword ptr [rbx-8]
          vaddss  xmm3, xmm0, dword ptr [rdi+0CCh]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
          vmulss  xmm2, xmm1, xmm9
          vsubss  xmm0, xmm3, xmm2
          vaddss  xmm2, xmm3, xmm2
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm11, dword ptr [rbx-8]
          vaddss  xmm0, xmm0, dword ptr [rdi+0CCh]; left
          vmovss  xmm2, dword ptr [rdi+0D4h]; right
        }
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+0D8h]; bottom
        vmovss  xmm1, dword ptr [rdi+0D0h]; top
      }
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
      LUI_CoD_SnapQuadVerts((vec4_t (*)[4])verts);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm10
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbp+130h+color], xmm2
        vmulss  xmm2, xmm1, xmm8
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rsp+230h+material], xmm12
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbp+130h+color+4], xmm2
        vmulss  xmm2, xmm1, xmm7
        vmovss  dword ptr [rbp+130h+color+8], xmm2
        vmovss  dword ptr [rbp+130h+color+0Ch], xmm14
      }
      LUI_Render_DrawText(localClientNum, luaVM, _RDI, (const vec4_t (*)[4])verts, &color, v25, v59, localClientNuma, 0, material, fontSize, NULL, NULL);
    }
    v56 += 16;
    --v57;
  }
  while ( v57 );
  __asm
  {
    vmovss  xmm0, cs:__real@3f72f2f3
    vmovss  xmm1, cs:__real@3f6ceced
    vmovss  dword ptr [rbp+130h+color], xmm0
    vmovss  xmm0, cs:__real@3f67e7e8
    vmovss  dword ptr [rbp+130h+color+8], xmm0
    vmovss  dword ptr [rbp+130h+color+4], xmm1
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+0D4h]
    vmovss  xmm2, dword ptr [rdi+0D8h]
    vsubss  xmm8, xmm1, dword ptr [rdi+0CCh]
    vsubss  xmm7, xmm2, dword ptr [rdi+0D0h]
  }
  _RBX = v163 + 168;
  __asm
  {
    vmulss  xmm10, xmm8, xmm9
    vmulss  xmm9, xmm7, xmm9
    vmovaps xmm6, xmm0
  }
  v92 = 3i64;
  do
  {
    __asm
    {
      vmulss  xmm5, xmm6, dword ptr [rbx-4]
      vmulss  xmm2, xmm6, dword ptr [rbx]
    }
    v95 = ScoreboardRowImageCache::cachedIcons[*((__int16 *)_RBX - 4)];
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbx+4]
      vmulss  xmm3, xmm6, dword ptr [rbx+8]
    }
    if ( _RBX[28] )
    {
      if ( _RBX[28] == 1 )
      {
        __asm { vaddss  xmm0, xmm10, dword ptr [rdi+0CCh] }
      }
      else
      {
        if ( _RBX[28] != 2 )
          goto LABEL_39;
        __asm { vaddss  xmm0, xmm8, dword ptr [rdi+0CCh] }
      }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rdi+0CCh] }
    }
    __asm
    {
      vaddss  xmm5, xmm5, xmm0
      vaddss  xmm2, xmm2, xmm0; right
    }
LABEL_39:
    if ( _RBX[29] )
    {
      if ( _RBX[29] == 1 )
      {
        __asm
        {
          vaddss  xmm0, xmm9, dword ptr [rdi+0D0h]
          vaddss  xmm1, xmm1, xmm0
          vaddss  xmm3, xmm3, xmm0
        }
      }
      else if ( _RBX[29] == 2 )
      {
        __asm
        {
          vaddss  xmm1, xmm1, xmm7
          vaddss  xmm3, xmm3, xmm7
        }
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rdi+0D0h]
        vaddss  xmm1, xmm1, xmm4; top
        vaddss  xmm3, xmm3, xmm4; bottom
      }
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+18h]
      vmovaps xmm0, xmm5; left
      vmovss  dword ptr [rbp+130h+color+0Ch], xmm4
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])v167);
    LUI_CoD_SnapQuadVerts((vec4_t (*)[4])v167);
    __asm
    {
      vmovss  [rsp+230h+style], xmm13
      vmovss  dword ptr [rsp+230h+text], xmm13
      vmovss  dword ptr [rsp+230h+font], xmm12
      vmovss  dword ptr [rsp+230h+fmt], xmm12
    }
    LUI_Render_DrawImage(localClientNum, _RDI, luaVM, (const vec4_t (*)[4])v167, fmt, font, text, *(float *)&style, &color, v95);
    _RBX += 40;
    --v92;
  }
  while ( v92 );
  if ( v163[288] )
  {
    String = SEH_StringEd_GetString("LUA_MENU/YOU");
    if ( CL_GetLocalClientActiveCount() <= 1 )
      goto LABEL_69;
    if ( Dvar_GetBoolSafe("OSNMNPLRR") )
    {
      if ( Com_FrontEnd_IsInFrontEnd() )
      {
        v106 = *((_DWORD *)v163 + 74);
        if ( !v106 )
          goto LABEL_51;
        v108 = v106 == 1;
LABEL_66:
        if ( v108 )
        {
          v107 = "LUA_MENU/YOU_P2";
          goto LABEL_68;
        }
        goto LABEL_69;
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 573, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( *((_DWORD *)v163 + 73) == LocalClientGlobals->clientNum || Com_FrontEnd_IsInFrontEnd() )
      {
        v110 = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        if ( !v110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 581, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        clientNum = v110->clientNum;
        v112 = CG_GetLocalClientGlobals(LOCAL_CLIENT_1);
        if ( !v112 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 585, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        v113 = *((_DWORD *)v163 + 73);
        if ( v113 != clientNum )
        {
          v108 = v113 == v112->clientNum;
          goto LABEL_66;
        }
LABEL_51:
        v107 = "LUA_MENU/YOU_P1";
LABEL_68:
        String = SEH_StringEd_GetString(v107);
LABEL_69:
        __asm { vmulss  xmm10, xmm15, cs:__real@3d4ccccd }
        v115 = R_RegisterFont("fonts/main_regular.ttf", 16);
        R_TextWidth(String, -1, v115);
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+0CCh]
          vmulss  xmm7, xmm11, cs:__real@41400000
          vmovss  xmm3, dword ptr [rdi+0D8h]; bottom
          vmulss  xmm8, xmm11, cs:__real@40400000
          vsubss  xmm2, xmm1, xmm7; right
          vxorps  xmm9, xmm9, xmm9
          vcvtsi2ss xmm9, xmm9, eax
          vaddss  xmm0, xmm9, cs:__real@40a00000
          vmulss  xmm6, xmm0, xmm11
          vmovups xmm0, cs:__xmm@3f8000003eacacad3f4bcbcc3f6dedee
          vmovups xmmword ptr [rbp+130h+color], xmm0
          vsubss  xmm0, xmm1, xmm6
          vmovss  xmm1, dword ptr [rdi+0D0h]; top
          vsubss  xmm0, xmm0, xmm7; left
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
        LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
        __asm
        {
          vmovss  [rsp+230h+style], xmm13
          vmovss  dword ptr [rsp+230h+text], xmm13
          vmovss  dword ptr [rsp+230h+font], xmm12
          vmovss  dword ptr [rsp+230h+fmt], xmm12
        }
        LUI_Render_DrawImage(localClientNum, _RDI, luaVM, (const vec4_t (*)[4])quadVerts, fmta, fonta, texta, *(float *)&stylea, &color, *((const GfxImage **)v163 + 35));
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0CCh]
          vmovss  xmm3, dword ptr [rdi+0D8h]
          vsubss  xmm1, xmm0, xmm6
          vsubss  xmm2, xmm1, xmm7
          vaddss  xmm0, xmm2, xmm8; left
          vaddss  xmm1, xmm9, xmm0
          vsubss  xmm2, xmm1, xmm8; right
          vaddss  xmm1, xmm10, dword ptr [rdi+0D0h]; top
          vsubss  xmm3, xmm3, xmm10; bottom
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
        __asm
        {
          vmulss  xmm0, xmm11, cs:__real@41800000
          vcvttss2si eax, xmm0
          vmovss  dword ptr [rsp+230h+material], xmm12
        }
        LUI_Render_DrawText(localClientNum, luaVM, _RDI, (const vec4_t (*)[4])quadVerts, &colorBlack, v115, String, localClientNuma, 0, materiala, _EAX, NULL, NULL);
      }
    }
  }
  _R11 = &v168;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
LUIElement_ScoreboardRow_SetFieldAndPosition_impl
==============
*/
__int64 LUIElement_ScoreboardRow_SetFieldAndPosition_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  ScoreboardRowData *CustomElement; 
  int v5; 
  const char *v7; 
  int stringRef; 
  char v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  __int64 v13; 
  signed __int64 v14; 
  char v15; 
  __int64 v16; 
  char v17; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: SetFieldAndPosition( <int>, <string>, <int>, <int> )");
  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    return 0i64;
  v3 = LUI_ToElement(luaVM, 1);
  CustomElement = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v3, luaVM);
  v5 = lui_tointeger32(luaVM, 2);
  if ( (unsigned int)v5 > 9 )
    j_luaL_error(luaVM, "ScoreboardRow: Only fields 0-9 (10 total) are supported.\n");
  _RDI = &CustomElement->fields[v5];
  v7 = j_lua_tolstring(luaVM, 3, NULL);
  stringRef = _RDI->stringRef;
  v9 = 0;
  v10 = v7;
  if ( stringRef == -2 )
    goto LABEL_28;
  j_lua_rawgeti(luaVM, -10000, stringRef);
  if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_scoreboardrow.cpp", 109, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
    __debugbreak();
  v11 = j_lua_tolstring(luaVM, -1, NULL);
  v12 = v11;
  if ( v10 )
  {
    if ( v11 )
    {
      v13 = 0x7FFFFFFFi64;
      v14 = v10 - v11;
      do
      {
        v15 = v12[v14];
        v16 = v13;
        v17 = *v12++;
        --v13;
        if ( !v16 )
          break;
        if ( v15 != v17 )
          goto LABEL_26;
      }
      while ( v15 );
    }
    else
    {
LABEL_26:
      v9 = 1;
      LUI_UnrefVerify<int (lua_State *,int)>(luaVM, -10000, _RDI->stringRef, j_lua_isstring);
      LUI_Ref_Monitor_RemoveRef(luaVM, -10000, _RDI->stringRef);
    }
  }
  j_lua_settop(luaVM, -2);
  if ( v9 )
  {
LABEL_28:
    if ( v10 )
    {
      j_lua_pushstring(luaVM, v10);
      _RDI->stringRef = LUI_Ref_Monitor_AddRef(luaVM, -10000);
      LUI_QuadCache_Element_Invalidate(v3);
    }
  }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
  __asm { vmovss  dword ptr [rdi], xmm0 }
  _RDI->alignment = lui_tointeger32(luaVM, 5);
  LUI_QuadCache_Element_Invalidate(v3);
  return 0i64;
}

/*
==============
LUIElement_ScoreboardRow_SetImageData_impl
==============
*/
__int64 LUIElement_ScoreboardRow_SetImageData_impl(lua_State *const luaVM)
{
  LUIElement *v7; 
  __int16 v9; 
  __int16 v10; 
  char v15; 
  char v16; 

  if ( j_lua_gettop(luaVM) != 10 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) || !j_lua_isnumber(luaVM, 6) || !j_lua_isnumber(luaVM, 7) || !j_lua_isnumber(luaVM, 8) || !j_lua_isnumber(luaVM, 9) || !j_lua_isnumber(luaVM, 10) )
    j_luaL_error(luaVM, "USAGE: SetImage( <int>, <int>, <float>, <float>, <float>, <float>, <int>, <int>, <float> )");
  if ( j_lua_gettop(luaVM) == 10 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) && j_lua_isnumber(luaVM, 6) && j_lua_isnumber(luaVM, 7) && j_lua_isnumber(luaVM, 8) && j_lua_isnumber(luaVM, 9) && j_lua_isnumber(luaVM, 10) )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm6
      vmovaps [rsp+78h+var_38], xmm7
      vmovaps [rsp+78h+var_48], xmm8
      vmovaps [rsp+78h+var_58], xmm9
    }
    v7 = LUI_ToElement(luaVM, 1);
    _R14 = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v7, luaVM);
    v9 = lui_tointeger32(luaVM, 2);
    v10 = lui_tointeger32(luaVM, 3);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 6);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 7);
    __asm { vmovaps xmm6, xmm0 }
    v15 = lui_tointeger32(luaVM, 8);
    v16 = lui_tointeger32(luaVM, 9);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 10);
    _RDX = 5i64 * v9 + 20;
    __asm
    {
      vmovss  dword ptr [r14+rdx*8+4], xmm9
      vmovaps xmm9, [rsp+78h+var_58]
      vmovss  dword ptr [r14+rdx*8+8], xmm8
      vmovaps xmm8, [rsp+78h+var_48]
      vmovss  dword ptr [r14+rdx*8+0Ch], xmm7
      vmovaps xmm7, [rsp+78h+var_38]
      vmovss  dword ptr [r14+rdx*8+10h], xmm6
      vmovaps xmm6, [rsp+78h+var_28]
    }
    *((_WORD *)&_R14->fields[0].offset + 4 * _RDX) = v10;
    *((_BYTE *)&_R14->fields[2].stringRef + 8 * _RDX) = v15;
    *((_BYTE *)&_R14->fields[2].stringRef + 8 * _RDX + 1) = v16;
    __asm { vmovss  dword ptr [r14+rdx*8+20h], xmm0 }
    *(&_R14->fields[1].stringRef + 2 * _RDX) = 1064497907;
    *((_DWORD *)&_R14->fields[1].alignment + 2 * _RDX) = 1064103149;
    *(&_R14->fields[1].color + 2 * _RDX) = 1063774184;
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
  __int16 v7; 
  LUIElement *v12; 

  if ( j_lua_gettop(luaVM) != 6 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) || !j_lua_isnumber(luaVM, 6) )
    j_luaL_error(luaVM, "USAGE: SetImagePosition( <int> <float>, <float>, <float>, <float> )");
  if ( j_lua_gettop(luaVM) == 6 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) && j_lua_isnumber(luaVM, 6) )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
      vmovaps [rsp+68h+var_38], xmm8
      vmovaps [rsp+68h+var_48], xmm9
    }
    v7 = lui_tointeger32(luaVM, 2);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm9, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 6);
    __asm { vmovaps xmm6, xmm0 }
    v12 = LUI_ToElement(luaVM, 1);
    _RAX = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v12, luaVM);
    _RDX = 5i64 * v7;
    __asm
    {
      vmovss  dword ptr [rax+rdx*8+0A4h], xmm9
      vmovaps xmm9, [rsp+68h+var_48]
      vmovss  dword ptr [rax+rdx*8+0A8h], xmm8
      vmovaps xmm8, [rsp+68h+var_38]
      vmovss  dword ptr [rax+rdx*8+0ACh], xmm7
      vmovaps xmm7, [rsp+68h+var_28]
      vmovss  dword ptr [rax+rdx*8+0B0h], xmm6
      vmovaps xmm6, [rsp+68h+var_18]
    }
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
  LUIElement *v6; 
  __int16 v7; 
  __int64 result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 5 )
    j_luaL_error(luaVM, "USAGE: SetImagePosition( <int>, <table> )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 5 )
    return 0i64;
  v6 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v6, luaVM) )
    return 0i64;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
  }
  v7 = lui_tointeger32(luaVM, 2);
  _RDI = LUI_LUIElement_RetrieveCustomElementData<ScoreboardRowData>(v6, luaVM);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm7, xmm7, xmm7
  }
  j_lua_getfield(luaVM, 3, "r");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm6, xmm0 }
  }
  j_lua_getfield(luaVM, 3, "g");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm8, xmm0 }
  }
  j_lua_getfield(luaVM, 3, "b");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmovaps xmm7, xmm0 }
  }
  j_lua_settop(luaVM, -4);
  _RCX = 5i64 * v7;
  result = 0i64;
  __asm
  {
    vmovss  dword ptr [rdi+rcx*8+0B4h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rdi+rcx*8+0B8h], xmm8
    vmovaps xmm8, [rsp+58h+var_38]
    vmovss  dword ptr [rdi+rcx*8+0BCh], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
  }
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_ScoreboardRowRender;
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

