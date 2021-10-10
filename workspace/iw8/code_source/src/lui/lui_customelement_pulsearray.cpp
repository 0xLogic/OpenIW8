/*
==============
LUIElement_PulseArray_StartOutwardsPulse
==============
*/
__int64 LUIElement_PulseArray_StartOutwardsPulse(lua_State *const luaVM)
{
  LUIElement *v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  LocalClientNum_t v4; 
  unsigned int v5; 
  LocalClientNum_t v7; 
  int v8; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:StartOutwardsPulse()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = CurrentValidLocalClient;
    if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
    {
      v8 = 2;
      v7 = CurrentValidLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( v4 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_pulsearray.cpp", 134, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
      __debugbreak();
    v2->currentAnimationState.userDataInt = CG_GetLocalClientGlobals(v4)->time;
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
LUIElement_PulseArray_StartInwardsPulse
==============
*/
__int64 LUIElement_PulseArray_StartInwardsPulse(lua_State *const luaVM)
{
  LUIElement *v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  LocalClientNum_t v4; 
  unsigned int v5; 
  LocalClientNum_t v7; 
  int v8; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:StartInwardsPulse()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = CurrentValidLocalClient;
    if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT )
    {
      v8 = 2;
      v7 = CurrentValidLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( v4 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_pulsearray.cpp", 151, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
      __debugbreak();
    v2->currentAnimationState.userDataInt = -CG_GetLocalClientGlobals(v4)->time;
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
LUIElement_PulseArray_Render
==============
*/
void LUIElement_PulseArray_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  int time; 
  int v11; 
  float v12; 
  unsigned int v13; 
  int v14; 
  float v15; 
  int i; 
  float v17; 
  __int128 v19; 
  int v23; 
  __int128 v24; 
  __int128 v28; 
  double v30; 
  int v31; 
  int j; 
  float v33; 
  float v34; 
  int uMax; 
  int v37; 
  float v39; 
  float v40; 
  float v41; 
  int v42; 
  vec4_t color; 
  vec4_t quadVerts[4]; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    uMax = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, uMax) )
      __debugbreak();
  }
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_pulsearray.cpp", 20, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  v11 = 0;
  v12 = (float)(element->bottom - element->top) * 0.16666667;
  v13 = (unsigned int)element->currentAnimationState.userDataInt >> 31;
  v37 = 0;
  v14 = abs32(element->currentAnimationState.userDataInt);
  v15 = (float)v14;
  v42 = v14;
  v40 = (float)(v14 + 200);
  v39 = (float)(element->right - element->left) * 0.1;
  v41 = (float)v14;
  do
  {
    for ( i = 0; i < 10; ++i )
    {
      v17 = _mm_cvtepi32_ps((__m128i)(unsigned int)i).m128_f32[0];
      v19 = LODWORD(FLOAT_7_0);
      *(float *)&v19 = 7.0 - (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - 4.5) & _xmm) + COERCE_FLOAT(COERCE_UNSIGNED_INT((float)v11 - 2.5) & _xmm));
      _XMM3 = v19;
      _XMM0 = (unsigned __int8)v13;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm3, xmm4, xmm2
      }
      v23 = (int)(float)((float)((float)(1.0 - (float)(*(float *)&_XMM1 * 0.14285715)) * v15) + (float)((float)(*(float *)&_XMM1 * 0.14285715) * v40));
      if ( time > v23 && time < v23 + 100 )
      {
        v24 = 0i64;
        *(float *)&v24 = (float)(time - v23) * 0.0099999998;
        _XMM6 = v24;
        LUI_CoD_GenerateQuadVerts((float)(v17 * v39) + element->left, (float)((float)v11 * v12) + element->top, (float)((float)(v17 * v39) + element->left) + v39, (float)((float)((float)v11 * v12) + element->top) + v12, (vec4_t (*)[4])quadVerts);
        __asm { vcmpless xmm0, xmm6, cs:__real@3f000000 }
        v28 = LODWORD(FLOAT_1_0);
        *(float *)&v28 = 1.0 - *(float *)&_XMM6;
        _XMM1 = v28;
        __asm { vblendvps xmm0, xmm1, xmm6, xmm0 }
        color.v[0] = red;
        color.v[1] = green;
        color.v[2] = blue;
        color.v[3] = (float)(*(float *)&_XMM0 * 0.60000002) * alpha;
        LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
        v15 = v41;
      }
    }
    v11 = v37 + 1;
    v37 = v11;
  }
  while ( v11 < 6 );
  v30 = I_fclamp((float)(time - v42) * 0.0099999998, 0.0, 1.0);
  if ( (_BYTE)v13 )
    *(float *)&v30 = 1.0 - *(float *)&v30;
  v31 = 1;
  for ( j = 1; j < 6; ++j )
  {
    v33 = (float)((float)j * v12) + element->top;
    LUI_CoD_GenerateQuadVerts(element->left, v33, element->right, v33 + 1.0, (vec4_t (*)[4])quadVerts);
    color.v[0] = red;
    color.v[1] = green;
    color.v[2] = blue;
    color.v[3] = (float)(*(float *)&v30 * 0.050000001) * alpha;
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
  }
  do
  {
    v34 = (float)((float)v31 * v39) + element->left;
    LUI_CoD_GenerateQuadVerts(v34, element->top, v34 + 1.0, element->bottom, (vec4_t (*)[4])quadVerts);
    color.v[0] = red;
    color.v[1] = green;
    color.v[2] = blue;
    color.v[3] = (float)(*(float *)&v30 * 0.050000001) * alpha;
    LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])quadVerts, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
    ++v31;
  }
  while ( v31 < 10 );
}

/*
==============
LUI_LuaCall_LUIElement_SetupPulseArray
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupPulseArray(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_pulseArrayMethods);
  v2->renderFunction = LUIElement_PulseArray_Render;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

