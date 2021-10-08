/*
==============
LUIElement_Calibration_Render
==============
*/

void __fastcall LUIElement_Calibration_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue)
{
  Material *v18; 
  __int64 image; 
  __int64 data; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  Material *v42; 
  __int64 v43; 
  vec4_t quadVerts[4]; 

  __asm
  {
    vmovss  xmm0, [rbp+37h+red]
    vmovss  xmm1, [rbp+37h+green]
    vmovss  xmm2, dword ptr [rdx+0D4h]; right
    vmovss  [rbp+37h+var_70], xmm0
    vmovss  xmm0, [rbp+37h+blue]
    vmovss  [rbp+37h+var_68], xmm0
    vmovss  xmm0, dword ptr [rdx+0CCh]; left
    vmovss  [rbp+37h+var_6C], xmm1
    vmovss  xmm1, dword ptr [rdx+0D0h]; top
    vmovss  [rbp+37h+var_64], xmm3
    vmovss  xmm3, dword ptr [rdx+0D8h]; bottom
  }
  _RBX = element;
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+37h+var_50]
    vmovss  xmm1, dword ptr [rbp+37h+var_50+4]
  }
  v18 = s_luiCalibrationPassthruMaterial;
  if ( _RBX->currentAnimationState.userDataBytes[0] )
    v18 = s_luiCalibrationDisplayMappingMaterial;
  __asm
  {
    vmovss  [rbp+37h+data], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+var_50+10h]
    vmovss  [rbp+37h+var_9C], xmm1
    vmovss  xmm1, dword ptr [rbp+37h+var_50+14h]
    vmovss  [rbp+37h+var_98], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+var_50+20h]
    vmovss  [rbp+37h+var_94], xmm1
    vmovss  xmm1, dword ptr [rbp+37h+var_50+24h]
    vmovss  [rbp+37h+var_90], xmm0
    vmovss  xmm0, dword ptr [rbp+37h+var_50+30h]
    vmovss  [rbp+37h+var_8C], xmm1
    vmovss  xmm1, dword ptr [rbp+37h+var_50+34h]
    vmovss  [rbp+37h+var_88], xmm0
    vmovss  [rbp+37h+var_84], xmm1
  }
  v42 = v18;
  if ( !LUIElement_IsImageLike(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_calibration.cpp", 49, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )", data, v31, v32, v33) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+118h]
    vmovss  xmm1, dword ptr [rbx+120h]
  }
  image = (__int64)_RBX->imageData.image;
  __asm
  {
    vmovss  [rbp+37h+var_80], xmm0
    vmovss  xmm0, dword ptr [rbx+11Ch]
    vmovss  [rbp+37h+var_7C], xmm1
    vmovss  xmm1, dword ptr [rbx+124h]
  }
  v43 = image;
  __asm
  {
    vmovss  [rbp+37h+var_78], xmm0
    vmovss  [rbp+37h+var_74], xmm1
  }
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUIElement_Calibration_RenderImmediate, &data, 0x50ui64, 8ui64);
}

/*
==============
LUIElement_Calibration_RenderImmediate
==============
*/
void LUIElement_Calibration_RenderImmediate(const LUICalibrationRenderData *data)
{
  float v6; 

  _RDI = data;
  R_AddCmdSetCodeTexture(4u, data->image);
  R_AddCmdSetUICalibrationSwatchColor(&_RDI->color);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmovss  xmm3, dword ptr [rdi+28h]; s1
    vmovss  xmm2, dword ptr [rdi+24h]; t0
    vmovss  xmm1, dword ptr [rdi+20h]; s0
    vmovss  [rsp+48h+var_28], xmm0
  }
  R_AddCmdDrawQuadPicST(_RDI->drawVerts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v6, &_RDI->color, _RDI->material);
}

/*
==============
LUI_LuaCall_LUIElement_SetupCalibration
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupCalibration(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 || j_lua_gettop(luaVM) > 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1 && lua_gettop( luaVM ) <= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) < 2 || lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  LUI_LUIElement_SetupUIBaseImage(v2, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Calibration_Render);
  if ( j_lua_gettop(luaVM) >= 2 )
  {
    j_lua_getfield(luaVM, 2, "displayMapping");
    if ( j_lua_type(luaVM, -1) == 1 )
      v2->currentAnimationState.userDataBytes[0] = j_lua_toboolean(luaVM, -1) > 0;
    j_lua_settop(luaVM, -2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

