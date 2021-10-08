/*
==============
LUIElement_Line_SetThickness
==============
*/
__int64 LUIElement_Line_SetThickness(lua_State *const luaVM)
{
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetThickness( thickness )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_Line_GetLineData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+0A8h], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
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
  LUIElement *v4; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetLineLengthScalar( scalar )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vmovaps [rsp+38h+var_18], xmm6 }
    v4 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_Line_GetLineData(v4, luaVM);
    __asm
    {
      vmovss  dword ptr [rax+0ACh], xmm6
      vmovaps xmm6, [rsp+38h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
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
  char v6; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  vec3_t angles; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdx+48h]
  }
  _RDI = outWorldPosition;
  _RBX = vertex;
  if ( !v6 )
    goto LABEL_4;
  __asm { vucomiss xmm0, dword ptr [rdx+4Ch] }
  if ( !v6 )
    goto LABEL_4;
  __asm { vucomiss xmm0, dword ptr [rdx+50h] }
  if ( !v6 )
  {
LABEL_4:
    __asm { vmovaps [rsp+88h+var_18], xmm6 }
    AxisToAngles(localAxis, &angles);
    AngleVectors(&angles, &forward, &right, &up);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+48h]
      vmulss  xmm1, xmm2, dword ptr [rsp+88h+forward]
      vaddss  xmm4, xmm1, dword ptr [rdi]
      vmulss  xmm1, xmm2, dword ptr [rsp+88h+forward+4]
      vaddss  xmm5, xmm1, dword ptr [rdi+4]
      vmulss  xmm1, xmm2, dword ptr [rsp+88h+forward+8]
      vaddss  xmm6, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm6
      vmovss  dword ptr [rdi], xmm4
      vmovss  dword ptr [rdi+4], xmm5
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm3, dword ptr [rsp+88h+right+4]
      vmulss  xmm2, xmm3, dword ptr [rsp+88h+right]
      vaddss  xmm5, xmm1, xmm5
      vmulss  xmm1, xmm3, dword ptr [rsp+88h+right+8]
      vaddss  xmm6, xmm1, xmm6
      vaddss  xmm4, xmm2, xmm4
      vmovss  dword ptr [rdi+8], xmm6
      vmovss  dword ptr [rdi], xmm4
      vmovss  dword ptr [rdi+4], xmm5
      vmovss  xmm3, dword ptr [rbx+50h]
      vmulss  xmm1, xmm3, dword ptr [rsp+88h+up]
      vaddss  xmm2, xmm1, xmm4
      vmulss  xmm1, xmm3, dword ptr [rsp+88h+up+4]
      vmovss  dword ptr [rdi], xmm2
      vaddss  xmm2, xmm1, xmm5
      vmulss  xmm1, xmm3, dword ptr [rsp+88h+up+8]
      vmovss  dword ptr [rdi+4], xmm2
      vaddss  xmm2, xmm1, xmm6
      vmovaps xmm6, [rsp+88h+var_18]
      vmovss  dword ptr [rdi+8], xmm2
    }
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
  char attachType; 
  bool v19; 
  const ScreenPlacement *v20; 
  vec3_t outWorldPosition; 
  dvec3_t v22; 
  tmat33_t<vec3_t> outLocalAxis; 
  tmat33_t<vec3_t> localAxis; 

  v5 = localClientNum;
  _RBX = vertex;
  if ( (unsigned __int8)(vertex->attachType - 1) > 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 83, ASSERT_TYPE_ASSERT, "(vertex->attachType == LUILineVertexAttachType::POSITION_3D || vertex->attachType == LUILineVertexAttachType::ENTITY || vertex->attachType == LUILineVertexAttachType::VIEWMODEL || vertex->attachType == LUILineVertexAttachType::WORLDMODEL)", (const char *)&queryFormat, "vertex->attachType == LUILineVertexAttachType::POSITION_3D || vertex->attachType == LUILineVertexAttachType::ENTITY || vertex->attachType == LUILineVertexAttachType::VIEWMODEL || vertex->attachType == LUILineVertexAttachType::WORLDMODEL") )
    __debugbreak();
  attachType = _RBX->attachType;
  if ( _RBX->attachType == POSITION_3D )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+0C8h+outWorldPosition], xmm0
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rsp+0C8h+outWorldPosition+8], xmm0
      vmovss  dword ptr [rsp+0C8h+outWorldPosition+4], xmm1
    }
  }
  else
  {
    if ( attachType <= 1 )
      goto LABEL_14;
    if ( attachType > 3 )
    {
      if ( attachType != 4 )
        goto LABEL_14;
      if ( LUI_GetEntityTagPositionAndAxis((const LocalClientNum_t)v5, _RBX->entityNum, _RBX->tagName, &outLocalAxis, &outWorldPosition) )
      {
        LUIElement_ApplyTagOffset(element, _RBX, &outLocalAxis, &outWorldPosition);
        goto LABEL_14;
      }
      return 0;
    }
    if ( !LUI_GetViewModelTransform((const LocalClientNum_t)v5, WEAPON_HAND_DEFAULT, _RBX->tagName, &localAxis, &v22) )
      return 0;
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+0C8h+var_88]
      vmovsd  xmm1, qword ptr [rsp+0C8h+var_88+8]
      vcvtpd2ps xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+outWorldPosition], xmm0
      vmovsd  xmm0, qword ptr [rsp+0C8h+var_88+10h]
      vcvtpd2ps xmm0, xmm0
      vcvtpd2ps xmm1, xmm1
      vmovss  dword ptr [rsp+0C8h+outWorldPosition+8], xmm0
      vmovss  dword ptr [rsp+0C8h+outWorldPosition+4], xmm1
    }
    LUIElement_ApplyTagOffset(element, _RBX, &localAxis, &outWorldPosition);
  }
LABEL_14:
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v20 = &scrPlaceViewDisplay[v5];
      return CG_WorldPosToScreenPosReal((LocalClientNum_t)v5, v20, &outWorldPosition, outPosition);
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v19 )
      __debugbreak();
  }
  v20 = &scrPlaceFull;
  return CG_WorldPosToScreenPosReal((LocalClientNum_t)v5, v20, &outWorldPosition, outPosition);
}

/*
==============
LUIElement_Line_Layout
==============
*/
void LUIElement_Line_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  void *customElementData; 
  vec2_t outPosition; 

  _RBX = element;
  LUIElement_DefaultLayout(localClientNum, element, unitScale, deltaTime, luaVM);
  if ( !_RBX->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = _RBX->customElementData;
  if ( *(_BYTE *)customElementData )
  {
    if ( !LUIElement_Line_GetScreenPositionForVertex(localClientNum, _RBX, (const LUILineVertex *)_RBX->customElementData, &outPosition) )
      goto LABEL_10;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+outPosition]
      vmovss  xmm1, dword ptr [rsp+58h+outPosition+4]
      vmovss  dword ptr [rbx+0CCh], xmm0
      vmovss  dword ptr [rbx+0D0h], xmm1
    }
  }
  if ( !*((_BYTE *)customElementData + 84) )
    return;
  if ( LUIElement_Line_GetScreenPositionForVertex(localClientNum, _RBX, (const LUILineVertex *)customElementData + 1, &outPosition) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+58h+outPosition]
      vmovss  xmm1, dword ptr [rsp+58h+outPosition+4]
      vmovss  dword ptr [rbx+0D4h], xmm0
      vmovss  dword ptr [rbx+0D8h], xmm1
    }
    return;
  }
LABEL_10:
  _RBX->currentAnimationState.flags &= ~1u;
}

/*
==============
LUIElement_Line_Render
==============
*/

void __fastcall LUIElement_Line_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  bool v18; 
  bool v22; 
  vec4_t *v78; 
  __int64 v79; 
  float fmt; 
  float vMin; 
  float v95; 
  float v96; 
  vec4_t color; 
  vec4_t point[4]; 
  char v101; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
  }
  v18 = element->customElementData == NULL;
  _RSI = element;
  __asm { vmovaps xmm12, xmm3 }
  if ( !element->customElementData )
  {
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL");
    v18 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rsi+0D4h] }
  _RBX = _RSI->customElementData;
  __asm
  {
    vmovss  xmm8, dword ptr [rsi+0CCh]
    vmovss  xmm10, dword ptr [rsi+0D0h]
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm2, dword ptr [rbx+0ACh]
    vsubss  xmm1, xmm0, xmm8
    vmovss  xmm0, dword ptr [rsi+0D8h]
    vmulss  xmm7, xmm1, xmm2
    vsubss  xmm1, xmm0, xmm10
    vmulss  xmm6, xmm1, xmm2
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm11, xmm1, xmm1
    vcomiss xmm11, xmm9
  }
  if ( !v18 )
  {
    _EAX = _RSI->currentAnimationState.userDataShorts[0];
    __asm { vmovd   xmm0, eax }
    _EAX = _RSI->currentAnimationState.userDataShorts[1];
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm5, xmm0, cs:__real@38000100
      vmulss  xmm0, xmm7, xmm5
      vmovaps xmmword ptr [rsp+160h+var_A8+8], xmm14
      vaddss  xmm14, xmm0, xmm8
      vmulss  xmm1, xmm6, xmm5
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@38000100
      vxorps  xmm3, xmm4, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm3, xmm7
      vmovaps [rsp+160h+var_B8+8], xmm15
      vaddss  xmm15, xmm1, xmm10
      vaddss  xmm1, xmm8, xmm7
      vaddss  xmm8, xmm1, xmm0
      vsubss  xmm0, xmm9, xmm5
      vcomiss xmm0, xmm4
      vaddss  xmm2, xmm10, xmm6
      vmulss  xmm1, xmm3, xmm6
      vaddss  xmm3, xmm2, xmm1
      vxorps  xmm10, xmm10, xmm10
      vdivss  xmm1, xmm9, xmm11
      vmulss  xmm0, xmm1, xmm6
      vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rsp+160h+point], xmm14
      vmovss  dword ptr [rsp+160h+point+4], xmm15
      vmovss  dword ptr [rsp+160h+point+8], xmm10
      vmovss  dword ptr [rsp+160h+point+0Ch], xmm9
      vmovss  [rsp+160h+var_F0], xmm14
      vmovss  [rsp+160h+var_EC], xmm15
      vmovss  [rsp+160h+var_E8], xmm10
      vmovss  [rsp+160h+var_E4], xmm9
      vmovss  [rbp+60h+var_E0], xmm8
      vmovss  [rbp+60h+var_DC], xmm3
      vmovss  [rbp+60h+var_D8], xmm10
      vmovss  [rbp+60h+var_D4], xmm9
      vmovss  [rbp+60h+var_D0], xmm8
      vmovss  [rbp+60h+var_CC], xmm3
      vmovss  [rbp+60h+var_C8], xmm10
      vmovss  [rbp+60h+var_C4], xmm9
      vmulss  xmm7, xmm1, xmm7
    }
    *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rbx+0A8h]
      vmulss  xmm2, xmm0, cs:__real@3f000000
      vmulss  xmm8, xmm6, xmm2
      vaddss  xmm0, xmm8, dword ptr [rsp+160h+point]
      vmulss  xmm5, xmm7, xmm2
      vxorps  xmm2, xmm2, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm4, xmm6, xmm2
      vaddss  xmm1, xmm4, [rsp+160h+var_F0]
      vmovss  dword ptr [rsp+160h+point], xmm0
      vaddss  xmm0, xmm5, dword ptr [rsp+160h+point+4]
      vmulss  xmm3, xmm7, xmm2
      vaddss  xmm2, xmm3, [rbp+60h+var_DC]
      vmovss  dword ptr [rsp+160h+point+4], xmm0
      vaddss  xmm0, xmm4, [rbp+60h+var_E0]
      vmovss  [rsp+160h+var_F0], xmm1
      vaddss  xmm1, xmm3, [rsp+160h+var_EC]
      vmovss  [rsp+160h+var_EC], xmm1
      vaddss  xmm1, xmm8, [rbp+60h+var_D0]
      vmovss  [rbp+60h+var_E0], xmm0
      vaddss  xmm0, xmm5, [rbp+60h+var_CC]
      vmovss  [rbp+60h+var_D0], xmm1
      vmovss  [rbp+60h+var_CC], xmm0
      vmovss  [rbp+60h+var_DC], xmm2
    }
    v78 = point;
    v79 = 4i64;
    do
    {
      LUI_ApplyTransformsToPoint(v78++);
      --v79;
    }
    while ( v79 );
    __asm
    {
      vmovss  xmm0, [rbp+60h+red]
      vmovss  xmm1, [rbp+60h+green]
      vmovss  dword ptr [rsp+160h+var_128], xmm9
      vmovss  dword ptr [rsp+160h+var_110], xmm0
      vmovss  xmm0, [rbp+60h+blue]
      vmovss  [rsp+160h+var_130], xmm9
      vmovss  [rsp+160h+vMin], xmm10
      vmovss  dword ptr [rsp+160h+fmt], xmm10
      vmovss  dword ptr [rsp+160h+var_110+4], xmm1
      vmovss  dword ptr [rsp+160h+var_110+8], xmm0
      vmovss  dword ptr [rsp+160h+var_110+0Ch], xmm12
    }
    LUI_Render_DrawImage(localClientNum, _RSI, luaVM, (const vec4_t (*)[4])point, fmt, vMin, v95, v96, &color, LUI_DefaultMaterial);
    __asm
    {
      vmovaps xmm14, xmmword ptr [rsp+160h+var_A8+8]
      vmovaps xmm15, [rsp+160h+var_B8+8]
    }
  }
  _R11 = &v101;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
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

__int64 __fastcall LUIElement_Line_SetVertexPadding_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v4; 
  int v5; 
  __int64 v6; 
  int v11; 
  unsigned __int8 v12; 
  LUITween *v14; 

  if ( j_lua_gettop(luaVM) < 3 || j_lua_gettop(luaVM) > 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) || j_lua_gettop(luaVM) >= 5 && !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexPadding( vertexNumber, padding, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 3 || j_lua_gettop(luaVM) > 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 5 && !j_lua_isnumber(luaVM, 5) )
    return 0i64;
  v4 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v4, luaVM) )
    return 0i64;
  v5 = lui_tointeger32(luaVM, 2);
  v6 = v5;
  if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 281, ASSERT_TYPE_ASSERT, "(unsigned)( vertexNumber ) < (unsigned)( 2 )", "vertexNumber doesn't index 2\n\t%i not in [0, %i)", v5, 2) )
    __debugbreak();
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@46fffe00
    vcvttss2si r12d, xmm1
  }
  if ( j_lua_gettop(luaVM) < 3 )
    v11 = 0;
  else
    v11 = lui_tointeger32(luaVM, 4);
  v12 = ((_DWORD)v6 != 0) + 53;
  if ( v11 <= 0 )
  {
    LUI_Tween_InterruptElementTween(v4, (LUITweenProperty)v12, luaVM);
    *(&v4->currentAnimationState.dataSource + v6) = _ER12;
    LUI_QuadCache_Element_Invalidate(v4);
    return 0i64;
  }
  v14 = LUI_Tween_Create(luaVM, v4);
  if ( j_lua_gettop(luaVM) >= 4 )
    v14->easing = lui_tointeger32(luaVM, 5);
  v14->targetProperty[0] = v12;
  v14->duration = v11;
  v14->startValue.shortValue = v4->currentAnimationState.userDataShorts[v6];
  v14->endValue.shortValue = _ER12;
  LUI_Tween_AddElementTween(v4, v14, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v14, luaVM);
  return 1i64;
}

/*
==============
LUIElement_Line_SetVertexTagSpacePosition_impl
==============
*/
__int64 LUIElement_Line_SetVertexTagSpacePosition_impl(lua_State *const luaVM)
{
  LUIElement *v6; 
  int v7; 
  __int64 v8; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexTagSpacePosition( vertex, x, y, z )");
  if ( j_lua_gettop(luaVM) == 5 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
      vmovaps [rsp+78h+var_38], xmm8
    }
    v6 = LUI_ToElement(luaVM, 1);
    v7 = lui_tointeger32(luaVM, 2);
    v8 = v7;
    if ( (unsigned int)v7 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 459, ASSERT_TYPE_ASSERT, "(unsigned)( vertexNumber ) < (unsigned)( 2 )", "vertexNumber doesn't index 2\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_Line_GetLineData(v6, luaVM);
    _RDX = 84 * v8;
    __asm
    {
      vmovss  dword ptr [rax+rdx+48h], xmm8
      vmovaps xmm8, [rsp+78h+var_38]
      vmovss  dword ptr [rax+rdx+4Ch], xmm7
      vmovaps xmm7, [rsp+78h+var_28]
      vmovss  dword ptr [rax+rdx+50h], xmm6
      vmovaps xmm6, [rsp+78h+var_18]
    }
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
  LUIElement *v6; 
  int v7; 
  __int64 v8; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: element:SetVertexWorldPosition( vertexNumber, x, y, z )");
  if ( j_lua_gettop(luaVM) == 5 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_isnumber(luaVM, 5) )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
      vmovaps [rsp+78h+var_38], xmm8
    }
    v6 = LUI_ToElement(luaVM, 1);
    v7 = lui_tointeger32(luaVM, 2);
    v8 = v7;
    if ( (unsigned int)v7 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_line.cpp", 328, ASSERT_TYPE_ASSERT, "(unsigned)( vertexNumber ) < (unsigned)( 2 )", "vertexNumber doesn't index 2\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_Line_GetLineData(v6, luaVM);
    _RDX = v8;
    _RAX->vertices[_RDX].attachType = POSITION_3D;
    __asm
    {
      vmovss  dword ptr [rdx+rax+4], xmm8
      vmovaps xmm8, [rsp+78h+var_38]
      vmovss  dword ptr [rdx+rax+8], xmm7
      vmovaps xmm7, [rsp+78h+var_28]
      vmovss  dword ptr [rdx+rax+0Ch], xmm6
    }
    v6->usageFlags |= 1u;
    __asm { vmovaps xmm6, [rsp+78h+var_18] }
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
  v2->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Line_Render;
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

