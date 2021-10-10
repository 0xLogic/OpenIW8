/*
==============
LUIElement_Line_SetThickness
==============
*/
__int64 LUIElement_Line_SetThickness(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetThickness( thickness )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_Line_GetLineData(v2, luaVM)->thickness = *(float *)&v3;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_Line_SetLineLengthScalar
==============
*/
__int64 LUIElement_Line_SetLineLengthScalar(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetLineLengthScalar( scalar )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tonumber32(luaVM, 2);
    LUIElement_Line_GetLineData(v2, luaVM)->lengthScalar = *(float *)&v3;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUIElement_Line_SetVertexPadding
==============
*/
__int64 LUIElement_Line_SetVertexPadding(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Line_SetVertexPadding_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Line_SetVertexWorldPosition
==============
*/
__int64 LUIElement_Line_SetVertexWorldPosition(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Line_SetVertexWorldPosition_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Line_AttachVertexToViewModel
==============
*/
__int64 LUIElement_Line_AttachVertexToViewModel(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  __int64 v4; 
  LUILine *LineData; 
  __int64 v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:AttachVertexToViewModel( vertexNumber )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = v3;
    if ( (unsigned int)v3 > 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 353, "vertexNumber == 0 || vertexNumber == 1") )
      __debugbreak();
    LineData = LUIElement_Line_GetLineData(v2, luaVM);
    v6 = v4;
    LineData->vertices[v6].entityNum = 2047;
    LineData->vertices[v6].attachType = 3;
    v2->usageFlags |= 1u;
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
LUIElement_Line_AttachVertexToWorldModel
==============
*/
__int64 LUIElement_Line_AttachVertexToWorldModel(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  __int64 v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:AttachVertexToWorldModel( vertexNumber )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = v3;
    if ( (unsigned int)v3 > 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 374, "vertexNumber == 0 || vertexNumber == 1") )
      __debugbreak();
    LUIElement_Line_GetLineData(v2, luaVM)->vertices[v4].attachType = 4;
    v2->usageFlags |= 1u;
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
LUIElement_Line_SetVertexEntity
==============
*/
__int64 LUIElement_Line_SetVertexEntity(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Line_SetVertexEntity_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_Line_SetVertexEntityTag
==============
*/
__int64 LUIElement_Line_SetVertexEntityTag(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  __int64 v4; 
  float *v5; 
  const char *v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) && j_lua_type(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexEntityTag( vertexNumber, tagOrNil )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (j_lua_isstring(luaVM, 3) || !j_lua_type(luaVM, 3)) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = v3;
    if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( vertexNumber ) < (unsigned)( 2 )", "vertexNumber doesn't index 2\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
    v5 = &LUIElement_Line_GetLineData(v2, luaVM)->vertices[v4].position.v[1];
    if ( j_lua_isstring(luaVM, 3) )
    {
      v6 = j_lua_tolstring(luaVM, 3, NULL);
      Core_strcpy((char *)v5, 0x40ui64, v6);
    }
    else
    {
      *(_BYTE *)v5 = 0;
    }
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
LUIElement_Line_SetVertexTagSpacePosition
==============
*/
__int64 LUIElement_Line_SetVertexTagSpacePosition(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUIElement_Line_SetVertexTagSpacePosition_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUIElement_ApplyTagOffset
==============
*/
void LUIElement_ApplyTagOffset(LUIElement *element, const LUILineVertex *vertex, const tmat33_t<vec3_t> *localAxis, vec3_t *outWorldPosition)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  vec3_t angles; 

  if ( vertex->tagOffset.v[0] != 0.0 || vertex->tagOffset.v[1] != 0.0 || vertex->tagOffset.v[2] != 0.0 )
  {
    AxisToAngles(localAxis, &angles);
    AngleVectors(&angles, &forward, &right, &up);
    v6 = vertex->tagOffset.v[0];
    v7 = (float)(v6 * forward.v[0]) + outWorldPosition->v[0];
    v8 = (float)(v6 * forward.v[1]) + outWorldPosition->v[1];
    v9 = (float)(v6 * forward.v[2]) + outWorldPosition->v[2];
    outWorldPosition->v[2] = v9;
    outWorldPosition->v[0] = v7;
    outWorldPosition->v[1] = v8;
    v10 = vertex->tagOffset.v[1];
    v11 = (float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * right.v[1]) + v8;
    v12 = (float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * right.v[2]) + v9;
    v13 = (float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * right.v[0]) + v7;
    outWorldPosition->v[2] = v12;
    outWorldPosition->v[0] = v13;
    outWorldPosition->v[1] = v11;
    v14 = vertex->tagOffset.v[2];
    v15 = v14 * up.v[1];
    outWorldPosition->v[0] = (float)(v14 * up.v[0]) + v13;
    v16 = v14 * up.v[2];
    outWorldPosition->v[1] = v15 + v11;
    outWorldPosition->v[2] = v16 + v12;
  }
}

/*
==============
LUIElement_Line_GetLineData
==============
*/
LUILine *LUIElement_Line_GetLineData(LUIElement *element, lua_State *luaVM)
{
  if ( element->customElementData )
    return (LUILine *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUILine *)element->customElementData;
}

/*
==============
LUIElement_Line_GetScreenPositionForVertex
==============
*/
bool LUIElement_Line_GetScreenPositionForVertex(LocalClientNum_t localClientNum, LUIElement *element, const LUILineVertex *vertex, vec2_t *outPosition)
{
  __int64 v5; 
  LUILineVertexAttachType attachType; 
  float v16; 
  bool v17; 
  const ScreenPlacement *v18; 
  vec3_t outWorldPosition; 
  dvec3_t v20; 
  tmat33_t<vec3_t> outLocalAxis; 
  tmat33_t<vec3_t> localAxis; 

  v5 = localClientNum;
  if ( (unsigned __int8)(vertex->attachType - 1) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 83, ASSERT_TYPE_ASSERT, "(vertex->attachType == LUILineVertexAttachType::POSITION_3D || vertex->attachType == LUILineVertexAttachType::ENTITY || vertex->attachType == LUILineVertexAttachType::VIEWMODEL || vertex->attachType == LUILineVertexAttachType::WORLDMODEL)", (const char *)&queryFormat, "vertex->attachType == LUILineVertexAttachType::POSITION_3D || vertex->attachType == LUILineVertexAttachType::ENTITY || vertex->attachType == LUILineVertexAttachType::VIEWMODEL || vertex->attachType == LUILineVertexAttachType::WORLDMODEL") )
    __debugbreak();
  attachType = vertex->attachType;
  if ( vertex->attachType == POSITION_3D )
  {
    v16 = vertex->position.v[1];
    LODWORD(outWorldPosition.v[0]) = vertex->entityNum;
    outWorldPosition.v[2] = vertex->position.v[2];
    outWorldPosition.v[1] = v16;
  }
  else
  {
    if ( attachType <= POSITION_3D )
      goto LABEL_14;
    if ( attachType > 3 )
    {
      if ( attachType != 4 )
        goto LABEL_14;
      if ( LUI_GetEntityTagPositionAndAxis((const LocalClientNum_t)v5, vertex->entityNum, vertex->tagName, &outLocalAxis, &outWorldPosition) )
      {
        LUIElement_ApplyTagOffset(element, vertex, &outLocalAxis, &outWorldPosition);
        goto LABEL_14;
      }
      return 0;
    }
    if ( !LUI_GetViewModelTransform((const LocalClientNum_t)v5, WEAPON_HAND_DEFAULT, vertex->tagName, &localAxis, &v20) )
      return 0;
    _XMM0 = *(unsigned __int64 *)&v20.x;
    _XMM1 = *(unsigned __int64 *)&v20.y;
    __asm { vcvtpd2ps xmm0, xmm0 }
    outWorldPosition.v[0] = *(float *)&_XMM0;
    _XMM0 = *(unsigned __int64 *)&v20.z;
    __asm
    {
      vcvtpd2ps xmm0, xmm0
      vcvtpd2ps xmm1, xmm1
    }
    outWorldPosition.v[2] = *(float *)&_XMM0;
    outWorldPosition.v[1] = *(float *)&_XMM1;
    LUIElement_ApplyTagOffset(element, vertex, &localAxis, &outWorldPosition);
  }
LABEL_14:
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v18 = &scrPlaceViewDisplay[v5];
      return CG_WorldPosToScreenPosReal((LocalClientNum_t)v5, v18, &outWorldPosition, outPosition);
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v17 )
      __debugbreak();
  }
  v18 = &scrPlaceFull;
  return CG_WorldPosToScreenPosReal((LocalClientNum_t)v5, v18, &outWorldPosition, outPosition);
}

/*
==============
LUIElement_Line_Layout
==============
*/
void LUIElement_Line_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  void *customElementData; 
  float v8; 
  float v9; 
  vec2_t outPosition; 

  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = element->customElementData;
  if ( *(_BYTE *)customElementData )
  {
    if ( !LUIElement_Line_GetScreenPositionForVertex(localClientNum, element, (const LUILineVertex *)element->customElementData, &outPosition) )
      goto LABEL_10;
    v8 = outPosition.v[1];
    element->left = outPosition.v[0];
    element->top = v8;
  }
  if ( !*((_BYTE *)customElementData + 84) )
    return;
  if ( LUIElement_Line_GetScreenPositionForVertex(localClientNum, element, (const LUILineVertex *)customElementData + 1, &outPosition) )
  {
    v9 = outPosition.v[1];
    element->right = outPosition.v[0];
    element->bottom = v9;
    return;
  }
LABEL_10:
  element->currentAnimationState.flags &= ~1u;
}

/*
==============
LUIElement_Line_Render
==============
*/
void LUIElement_Line_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  float *customElementData; 
  float left; 
  float top; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  double CurrentUnitScale; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  vec4_t *v30; 
  __int64 v31; 
  vec4_t color; 
  vec4_t point[4]; 

  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (float *)element->customElementData;
  left = element->left;
  top = element->top;
  v14 = customElementData[43];
  v15 = (float)(element->right - left) * v14;
  v16 = (float)(element->bottom - top) * v14;
  v17 = fsqrt((float)(v16 * v16) + (float)(v15 * v15));
  if ( v17 > 1.0 )
  {
    v18 = _mm_cvtepi32_ps((__m128i)(unsigned int)element->currentAnimationState.userDataShorts[0]).m128_f32[0] * 0.000030518509;
    v19 = (float)(v15 * v18) + left;
    v20 = _mm_cvtepi32_ps((__m128i)(unsigned int)element->currentAnimationState.userDataShorts[1]).m128_f32[0] * 0.000030518509;
    v21 = (float)(v16 * v18) + top;
    v22 = (float)(left + v15) + (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * v15);
    v23 = (float)(top + v16) + (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * v16);
    if ( (float)(1.0 - v18) > v20 )
    {
      LODWORD(v24) = COERCE_UNSIGNED_INT((float)(1.0 / v17) * v16) ^ _xmm;
      point[0].v[0] = v19;
      point[0].v[1] = v21;
      point[0].v[2] = 0.0;
      point[0].v[3] = FLOAT_1_0;
      point[1].v[0] = v19;
      point[1].v[1] = v21;
      point[1].v[2] = 0.0;
      point[1].v[3] = FLOAT_1_0;
      point[2].v[0] = v22;
      point[2].v[1] = v23;
      point[2].v[2] = 0.0;
      point[2].v[3] = FLOAT_1_0;
      point[3].v[0] = v22;
      point[3].v[1] = v23;
      point[3].v[2] = 0.0;
      point[3].v[3] = FLOAT_1_0;
      CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
      v26 = (float)(*(float *)&CurrentUnitScale * customElementData[42]) * 0.5;
      v27 = v24 * v26;
      *(float *)&CurrentUnitScale = (float)(v24 * v26) + point[0].v[0];
      v28 = (float)((float)(1.0 / v17) * v15) * v26;
      LODWORD(v29) = LODWORD(v26) ^ _xmm;
      point[0].v[0] = *(float *)&CurrentUnitScale;
      point[0].v[1] = v28 + point[0].v[1];
      point[1].v[0] = (float)(v24 * v29) + point[1].v[0];
      point[1].v[1] = (float)((float)((float)(1.0 / v17) * v15) * v29) + point[1].v[1];
      point[2].v[0] = (float)(v24 * v29) + point[2].v[0];
      point[3].v[0] = v27 + point[3].v[0];
      point[3].v[1] = v28 + point[3].v[1];
      point[2].v[1] = (float)((float)((float)(1.0 / v17) * v15) * v29) + point[2].v[1];
      v30 = point;
      v31 = 4i64;
      do
      {
        LUI_ApplyTransformsToPoint(v30++);
        --v31;
      }
      while ( v31 );
      color.v[0] = red;
      color.v[1] = green;
      color.v[2] = blue;
      color.v[3] = alpha;
      LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])point, 0.0, 0.0, 1.0, 1.0, &color, LUI_DefaultMaterial);
    }
  }
}

/*
==============
LUIElement_Line_SetVertexEntity_impl
==============
*/
__int64 LUIElement_Line_SetVertexEntity_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  __int64 v4; 
  int v5; 
  LUILine *LineData; 
  __int64 v7; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexEntity( vertexNumber, entityNumOrNil )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = v3;
  if ( (unsigned int)v3 > 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 395, "vertexNumber == 0 || vertexNumber == 1") )
    __debugbreak();
  v5 = 2047;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    v5 = lui_tointeger32(luaVM, 3);
    if ( v5 >= 2048 )
    {
      if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 402, "entityNum < ( 2048 )") )
        __debugbreak();
    }
  }
  LineData = LUIElement_Line_GetLineData(v2, luaVM);
  v7 = v4;
  LineData->vertices[v7].entityNum = v5;
  LineData->vertices[v7].attachType = 2;
  if ( v5 != 2047 )
    v2->usageFlags |= 1u;
  return 0i64;
}

/*
==============
LUIElement_Line_SetVertexPadding_impl
==============
*/
__int64 LUIElement_Line_SetVertexPadding_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  __int64 v4; 
  double v5; 
  double v6; 
  int v7; 
  int v8; 
  unsigned __int8 v9; 
  LUITween *v11; 

  if ( j_lua_gettop(luaVM) < 3 || j_lua_gettop(luaVM) > 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) || j_lua_gettop(luaVM) >= 5 && !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexPadding( vertexNumber, padding, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 3 || j_lua_gettop(luaVM) > 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 5 && !j_lua_isnumber(luaVM, 5) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 2);
  v4 = v3;
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( vertexNumber ) < (unsigned)( 2 )", "vertexNumber doesn't index 2\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  v5 = lui_tonumber32(luaVM, 3);
  v6 = I_fclamp(*(float *)&v5, 0.0, 1.0);
  v7 = (int)(float)(*(float *)&v6 * 32767.0);
  if ( j_lua_gettop(luaVM) < 3 )
    v8 = 0;
  else
    v8 = lui_tointeger32(luaVM, 4);
  v9 = ((_DWORD)v4 != 0) + 53;
  if ( v8 <= 0 )
  {
    LUI_Tween_InterruptElementTween(v2, (LUITweenProperty)v9, luaVM);
    *(&v2->currentAnimationState.dataSource + v4) = v7;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v11 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v11->easing = lui_tointeger32(luaVM, 5);
  v11->targetProperty[0] = v9;
  v11->duration = v8;
  v11->startValue.shortValue = v2->currentAnimationState.userDataShorts[v4];
  v11->endValue.shortValue = v7;
  LUI_Tween_AddElementTween(v2, v11, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v11, luaVM);
  return 1i64;
}

/*
==============
LUIElement_Line_SetVertexTagSpacePosition_impl
==============
*/
__int64 LUIElement_Line_SetVertexTagSpacePosition_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  __int64 v4; 
  double v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  LUILine *LineData; 
  __int64 v11; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexTagSpacePosition( vertex, x, y, z )");
  if ( j_lua_gettop(luaVM) == 5 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = v3;
    if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 459, ASSERT_TYPE_ASSERT, "(unsigned)( vertexNumber ) < (unsigned)( 2 )", "vertexNumber doesn't index 2\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
    v5 = lui_tonumber32(luaVM, 3);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 4);
    v8 = *(float *)&v7;
    v9 = lui_tonumber32(luaVM, 5);
    LineData = LUIElement_Line_GetLineData(v2, luaVM);
    v11 = v4;
    LineData->vertices[v11].tagOffset.v[0] = v6;
    LineData->vertices[v11].tagOffset.v[1] = v8;
    LineData->vertices[v11].tagOffset.v[2] = *(float *)&v9;
  }
  return 0i64;
}

/*
==============
LUIElement_Line_SetVertexWorldPosition_impl
==============
*/
__int64 LUIElement_Line_SetVertexWorldPosition_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  __int64 v4; 
  double v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  LUILine *LineData; 
  __int64 v11; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexWorldPosition( vertexNumber, x, y, z )");
  if ( j_lua_gettop(luaVM) == 5 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = v3;
    if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( vertexNumber ) < (unsigned)( 2 )", "vertexNumber doesn't index 2\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
    v5 = lui_tonumber32(luaVM, 3);
    v6 = *(float *)&v5;
    v7 = lui_tonumber32(luaVM, 4);
    v8 = *(float *)&v7;
    v9 = lui_tonumber32(luaVM, 5);
    LineData = LUIElement_Line_GetLineData(v2, luaVM);
    v11 = v4;
    LineData->vertices[v11].attachType = POSITION_3D;
    LineData->vertices[v11].position.v[0] = v6;
    LineData->vertices[v11].position.v[1] = v8;
    LineData->vertices[v11].position.v[2] = *(float *)&v9;
    v2->usageFlags |= 1u;
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupLine
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupLine(lua_State *luaVM)
{
  LUIElement *v2; 
  char *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->layoutFunction = LUIElement_Line_Layout;
  v2->renderFunction = LUIElement_Line_Render;
  v2->usageFlags = HALF_HALF;
  LUI_LUIElement_RegisterMethods(v2, luaVM, s_lineMethods);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = (char *)j_lua_newuserdata(luaVM, 0xB0ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3 + 1, 0, 0x53ui64);
  memset_0(v3 + 85, 0, 0x53ui64);
  *((_DWORD *)v3 + 42) = 0x40000000;
  *((_DWORD *)v3 + 43) = 1065353216;
  *v3 = 0;
  v3[84] = 0;
  v2->currentAnimationState.userDataInt = 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

