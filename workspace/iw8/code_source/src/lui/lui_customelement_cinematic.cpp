/*
==============
LUIElement_Cinematic_Render
==============
*/

void __fastcall LUIElement_Cinematic_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue)
{
  unsigned __int8 v11; 
  unsigned __int8 v13; 
  Material *v32; 
  vec4_t quadVerts[4]; 
  char v37; 

  __asm
  {
    vmovaps [rsp+0B8h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  _RDI = element;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  v11 = _RDI->currentAnimationState.userDataBytes[1];
  _RBX = _RDI->customElementData;
  _RBX[80] = v11 != 0;
  v13 = _RDI->currentAnimationState.userDataBytes[0];
  if ( v13 && v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_cinematic.cpp", 55, ASSERT_TYPE_ASSERT, "(!isMP4 || ( isMP4 && !data->fullscreenCinematic ))", (const char *)&queryFormat, "!isMP4 || ( isMP4 && !data->fullscreenCinematic )") )
    __debugbreak();
  if ( !_RBX[80] )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+30h]
      vcmpltss xmm0, xmm1, cs:__real@3f800000
      vblendvps xmm2, xmm6, xmm1, xmm0
      vmovss  xmm0, [rsp+0B8h+red]
      vmovss  xmm1, [rsp+0B8h+green]
      vmovss  dword ptr [rbx+34h], xmm0
      vmovss  xmm0, [rsp+0B8h+blue]
      vmovss  dword ptr [rbx+3Ch], xmm0
      vmovss  dword ptr [rbx+38h], xmm1
      vmovss  dword ptr [rbx+40h], xmm2
      vmovss  xmm3, dword ptr [rdi+0D8h]; bottom
      vmovss  xmm2, dword ptr [rdi+0D4h]; right
      vmovss  xmm1, dword ptr [rdi+0D0h]; top
      vmovss  xmm0, dword ptr [rdi+0CCh]; left
    }
    LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+quadVerts]
      vmovss  xmm1, dword ptr [rsp+0B8h+quadVerts+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+quadVerts+10h]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+quadVerts+14h]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+quadVerts+20h]
      vmovss  dword ptr [rbx+0Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+quadVerts+24h]
      vmovss  dword ptr [rbx+10h], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+quadVerts+30h]
      vmovss  dword ptr [rbx+14h], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+quadVerts+34h]
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  dword ptr [rbx+1Ch], xmm1
    }
    v32 = s_luiCinematicMaterial;
    if ( v13 )
      v32 = s_luiCinematicMP4Material;
    *((_QWORD *)_RBX + 9) = v32;
    if ( !LUIElement_IsImageLike(_RDI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_cinematic.cpp", 78, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
      __debugbreak();
    *((_DWORD *)_RBX + 8) = LODWORD(_RDI->imageData.uMin);
    *((_DWORD *)_RBX + 9) = LODWORD(_RDI->imageData.vMin);
    *((_DWORD *)_RBX + 10) = LODWORD(_RDI->imageData.uMax);
    *((_DWORD *)_RBX + 11) = LODWORD(_RDI->imageData.vMax);
  }
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUIElement_Cinematic_RenderImmediate, _RBX, 0x58ui64, 8ui64);
  _R11 = &v37;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
LUIElement_Cinematic_RenderImmediate
==============
*/
void LUIElement_Cinematic_RenderImmediate(const LUICinematicRenderData *data)
{
  float v6; 

  _RDX = data;
  if ( data->fullscreenCinematic )
  {
    R_Cinematic_DrawFullscreen_Letterboxed();
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+2Ch]
      vmovss  xmm3, dword ptr [rdx+28h]; s1
      vmovss  xmm2, dword ptr [rdx+24h]; t0
      vmovss  xmm1, dword ptr [rdx+20h]; s0
      vmovss  [rsp+48h+var_28], xmm0
    }
    R_AddCmdDrawQuadPicST(data->drawVerts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v6, &data->color, data->material);
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupCinematic
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupCinematic(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupCinematic_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupCinematic_impl
==============
*/

__int64 __fastcall LUI_LuaCall_LUIElement_SetupCinematic_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v4; 

  if ( j_lua_gettop(luaVM) < 1 || j_lua_gettop(luaVM) > 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_gettop( luaVM ) <= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) < 2 || lua_istable( luaVM, 2 )");
  v4 = LUI_ToElement(luaVM, 1);
  v4->usageFlags |= 1u;
  LUI_LUIElement_SetupUIBaseImage(v4, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Cinematic_Render);
  if ( v4->customElementData )
  {
    _RSI = LUI_LUIElement_RetrieveCustomElementData<LUICinematicRenderData>(v4, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v4, luaVM);
    _RSI = (LUICinematicRenderData *)j_lua_newuserdata(luaVM, 0x58ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v4->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v4->customElementData = _RSI;
    memset_0(_RSI, 0, sizeof(LUICinematicRenderData));
  }
  if ( j_lua_gettop(luaVM) >= 2 )
  {
    j_lua_getfield(luaVM, 2, "mp4");
    if ( j_lua_type(luaVM, -1) == 1 )
      v4->currentAnimationState.userDataBytes[0] = j_lua_toboolean(luaVM, -1) > 0;
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, 2, "fullscreen");
    if ( j_lua_type(luaVM, -1) == 1 )
      v4->currentAnimationState.userDataBytes[1] = j_lua_toboolean(luaVM, -1) > 0;
    j_lua_settop(luaVM, -2);
    j_lua_getfield(luaVM, 2, "forcedAlpha");
    if ( j_lua_isnumber(luaVM, -1) )
    {
      *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmaxss  xmm2, xmm0, xmm1
      }
    }
    else
    {
      __asm { vmovss  xmm2, cs:__real@3f800000 }
    }
    __asm { vmovss  dword ptr [rsi+30h], xmm2 }
    j_lua_settop(luaVM, -2);
  }
  return 0i64;
}

