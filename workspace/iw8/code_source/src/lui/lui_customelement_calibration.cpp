/*
==============
LUIElement_Calibration_Render
==============
*/
void LUIElement_Calibration_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue)
{
  float right; 
  float left; 
  float top; 
  Material *v12; 
  float vMin; 
  const GfxImage *image; 
  float uMax; 
  float vMax; 
  __int64 data; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  float uMin; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  Material *v29; 
  const GfxImage *v30; 
  vec4_t quadVerts[4]; 

  right = element->right;
  v25 = red;
  v27 = blue;
  left = element->left;
  v26 = green;
  top = element->top;
  v28 = alpha;
  LUI_CoD_GenerateQuadVerts(left, top, right, element->bottom, (vec4_t (*)[4])quadVerts);
  v12 = s_luiCalibrationPassthruMaterial;
  if ( element->currentAnimationState.userDataBytes[0] )
    v12 = s_luiCalibrationDisplayMappingMaterial;
  *(float *)&data = quadVerts[0].v[0];
  *((float *)&data + 1) = quadVerts[0].v[1];
  *(float *)&v18 = quadVerts[1].v[0];
  *((float *)&v18 + 1) = quadVerts[1].v[1];
  *(float *)&v19 = quadVerts[2].v[0];
  *((float *)&v19 + 1) = quadVerts[2].v[1];
  *(float *)&v20 = quadVerts[3].v[0];
  *((float *)&v20 + 1) = quadVerts[3].v[1];
  v29 = v12;
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_calibration.cpp", 49, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )", data, v18, v19, v20) )
    __debugbreak();
  vMin = element->imageData.vMin;
  image = element->imageData.image;
  uMin = element->imageData.uMin;
  uMax = element->imageData.uMax;
  v22 = vMin;
  vMax = element->imageData.vMax;
  v30 = image;
  v23 = uMax;
  v24 = vMax;
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUIElement_Calibration_RenderImmediate, &data, 0x50ui64, 8ui64);
}

/*
==============
LUIElement_Calibration_RenderImmediate
==============
*/
void LUIElement_Calibration_RenderImmediate(const LUICalibrationRenderData *data)
{
  R_AddCmdSetCodeTexture(4u, data->image);
  R_AddCmdSetUICalibrationSwatchColor(&data->color);
  R_AddCmdDrawQuadPicST(data->drawVerts, data->uMin, data->vMin, data->uMax, data->vMax, &data->color, data->material);
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

