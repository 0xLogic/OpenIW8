/*
==============
LUIElement_WorldScaling_SetWorldOrigin
==============
*/
__int64 LUIElement_WorldScaling_SetWorldOrigin(lua_State *const luaVM)
{
  LUIElement *v6; 
  unsigned int v14; 

  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetWorldOrigin( worldX, worldY, worldZ )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_28], xmm7
      vmovaps [rsp+58h+var_38], xmm8
    }
    v6 = LUI_ToElement(luaVM, 1);
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vmovaps xmm8, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm7, xmm0 }
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = LUIElement_WorldScaling_GetData(v6, luaVM);
    __asm
    {
      vmovss  dword ptr [rax], xmm8
      vmovaps xmm8, [rsp+58h+var_38]
      vmovss  dword ptr [rax+4], xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vmovss  dword ptr [rax+8], xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v14 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v14);
  }
  return 0i64;
}

/*
==============
LUIElement_WorldScaling_GetData
==============
*/
LUIWorldScaling *LUIElement_WorldScaling_GetData(LUIElement *const element, lua_State *const luaVM)
{
  if ( element->customElementData )
    return (LUIWorldScaling *)element->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (LUIWorldScaling *)element->customElementData;
}

/*
==============
LUIElement_WorldScaling_Render
==============
*/

void __fastcall LUIElement_WorldScaling_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v22; 
  bool v24; 
  const ScreenPlacement *v25; 
  char v27; 
  char v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  float fmt; 
  float quadCenterY; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  vec2_t outScreenPos; 
  char v165; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps xmmword ptr [r11-0A8h], xmm13
    vmovaps xmmword ptr [r11-0B8h], xmm14
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  _RDI = element;
  __asm { vmovaps xmm12, xmm3 }
  v22 = localClientNum;
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  _RSI = (const vec3_t *)_RDI->customElementData;
  if ( activeScreenPlacementMode )
  {
    if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
    {
      v25 = &scrPlaceViewDisplay[v22];
      goto LABEL_11;
    }
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v24 )
      __debugbreak();
  }
  v25 = &scrPlaceFull;
LABEL_11:
  __asm
  {
    vmovaps [rsp+178h+var_38], xmm6
    vmovaps [rsp+178h+var_48], xmm7
    vmovaps [rsp+178h+var_58], xmm8
    vmovaps [rsp+178h+var_68], xmm9
  }
  *(double *)&_XMM0 = LUI_Render_GetCurrentUnitScale();
  __asm { vmovaps xmm14, xmm0 }
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v22, v25, _RSI, &outScreenPos);
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm15, cs:__real@3f000000
    vxorps  xmm11, xmm11, xmm11
    vcomiss xmm14, xmm11
  }
  if ( !(v27 | v28) )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+14h]
      vcomiss xmm6, xmm11
    }
    if ( !(v27 | v28) )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rsi+18h]
        vcomiss xmm5, xmm11
      }
      if ( !(v27 | v28) )
      {
        _RAX = *(_QWORD *)&_RSI[2].z;
        __asm
        {
          vmulss  xmm1, xmm15, dword ptr [rbx+20h]
          vmulss  xmm0, xmm15, dword ptr [rbx+24h]
          vdivss  xmm4, xmm13, xmm14
          vmulss  xmm9, xmm1, xmm4
          vmovss  xmm1, dword ptr [rax+0D4h]
          vmovaps [rsp+178h+var_78], xmm10
          vmulss  xmm10, xmm0, xmm4
          vaddss  xmm0, xmm1, dword ptr [rax+0CCh]
          vmulss  xmm2, xmm0, xmm15
          vmovss  xmm0, dword ptr [rax+0D8h]
          vaddss  xmm1, xmm0, dword ptr [rax+0D0h]
          vmulss  xmm3, xmm2, xmm4
          vmulss  xmm2, xmm1, xmm15
          vsubss  xmm8, xmm3, xmm9
          vmulss  xmm3, xmm2, xmm4
          vmulss  xmm5, xmm8, xmm5
          vsubss  xmm7, xmm3, xmm10
          vmulss  xmm6, xmm7, xmm6
          vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vaddss  xmm2, xmm0, cs:__real@2edbe6ff
          vaddss  xmm4, xmm2, xmm5
          vsubss  xmm1, xmm5, xmm2
          vcmpless xmm0, xmm11, xmm5
          vblendvps xmm3, xmm4, xmm1, xmm0
          vsubss  xmm2, xmm2, xmm5
          vcmpless xmm0, xmm11, xmm5
          vblendvps xmm0, xmm2, xmm4, xmm0
          vdivss  xmm3, xmm3, xmm0
          vmulss  xmm1, xmm3, cs:__real@3e4902de
          vmulss  xmm2, xmm1, xmm3
          vsubss  xmm0, xmm2, cs:__real@3f7b50b1
          vmovss  xmm1, cs:__real@3f490fdb
          vmulss  xmm4, xmm0, xmm3
          vmovss  xmm0, cs:__real@4016cbe4
          vcmpless xmm2, xmm11, xmm5
          vblendvps xmm1, xmm0, xmm1, xmm2
          vaddss  xmm3, xmm4, xmm1
          vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000
          vcmpless xmm0, xmm11, xmm6
          vblendvps xmm1, xmm1, xmm3, xmm0
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm0, xmm0, xmm1
        }
        *(double *)&_XMM0 = j___libm_sse2_sincosf_(v30, v29, v31, v32);
        __asm
        {
          vshufps xmm1, xmm0, xmm0, 1
          vmulss  xmm1, xmm1, dword ptr [rsi+14h]
          vmulss  xmm0, xmm0, dword ptr [rsi+18h]
          vaddss  xmm2, xmm1, xmm9
          vaddss  xmm1, xmm0, xmm10
          vsubss  xmm3, xmm1, xmm10
          vmovaps xmm10, [rsp+178h+var_78]
          vsubss  xmm5, xmm2, xmm9
          vmulss  xmm2, xmm7, xmm7
          vmulss  xmm0, xmm8, xmm8
          vaddss  xmm4, xmm2, xmm0
          vmulss  xmm3, xmm3, xmm3
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm0, xmm3, xmm1
          vsubss  xmm2, xmm4, xmm0
          vcomiss xmm2, xmm11
        }
        if ( v27 | v28 )
        {
          __asm
          {
            vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
            vdivss  xmm1, xmm13, dword ptr [rsi+1Ch]
            vsqrtss xmm2, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm1; val
            vmovaps xmm2, xmm12; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm12, xmm0 }
        }
        else
        {
          __asm { vxorps  xmm12, xmm12, xmm12 }
        }
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vcomiss xmm0, xmm11
    vmovss  xmm4, dword ptr [rsp+178h+outScreenPos+4]
  }
  if ( !(v27 | v28) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0D0h]
      vsubss  xmm2, xmm1, xmm4
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vdivss  xmm3, xmm2, xmm14
      vcomiss xmm3, xmm0
    }
    if ( v27 | v28 )
      goto LABEL_26;
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+10h]
      vcomiss xmm1, xmm13
    }
    if ( !v27 )
    {
      __asm
      {
        vsubss  xmm0, xmm3, xmm0
        vdivss  xmm1, xmm0, xmm1
        vminss  xmm12, xmm1, xmm12
      }
    }
  }
  __asm { vcomiss xmm12, xmm11 }
  if ( !(v27 | v28) )
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+0D0h]
      vmovss  xmm1, dword ptr [rdi+0CCh]
      vmovss  xmm0, dword ptr [rdi+0D4h]
      vsubss  xmm7, xmm4, xmm8
      vcomiss xmm7, xmm11
      vsubss  xmm9, xmm0, xmm1
    }
    if ( !v27 )
    {
      __asm
      {
        vmulss  xmm0, xmm9, xmm15
        vaddss  xmm6, xmm0, xmm1
        vmovss  xmm1, dword ptr [rsp+178h+outScreenPos]
        vsubss  xmm4, xmm1, xmm6
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm2, xmm4, xmm4
        vaddss  xmm1, xmm2, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm13, xmm0
        vdivss  xmm1, xmm13, xmm0
        vmulss  xmm0, xmm4, xmm1; Y
        vmulss  xmm1, xmm7, xmm1; X
      }
      *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm4, xmm0, cs:__real@c2652ee0
        vmovss  xmm0, [rsp+178h+blue]
        vmovss  [rsp+178h+var_F8], xmm12
        vmovss  [rsp+178h+var_100], xmm0
        vmovss  xmm0, [rsp+178h+red]
        vmulss  xmm1, xmm7, xmm15
        vaddss  xmm5, xmm1, xmm8
        vmovss  xmm1, [rsp+178h+green]
        vmovss  [rsp+178h+var_108], xmm1
        vmovss  [rsp+178h+var_110], xmm0
        vmovss  [rsp+178h+var_118], xmm4
        vmovss  [rsp+178h+var_120], xmm13
        vmovss  [rsp+178h+var_128], xmm13
        vmovss  [rsp+178h+var_130], xmm11
        vmovss  [rsp+178h+var_138], xmm11
        vmovss  [rsp+178h+var_140], xmm7
        vmovss  [rsp+178h+var_148], xmm9
        vmovss  [rsp+178h+quadCenterY], xmm5
        vmovaps xmm3, xmm8; rotationCenterY
        vmovaps xmm2, xmm6; rotationCenterX
        vmovss  dword ptr [rsp+178h+fmt], xmm6
      }
      LUI_Render_DrawQuadRotatedRelativeToPoint((const LocalClientNum_t)v22, _RDI, *(float *)&_XMM2, *(float *)&_XMM3, fmt, quadCenterY, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, _RDI->imageData.image, luaVM);
    }
  }
LABEL_26:
  __asm
  {
    vmovaps xmm9, [rsp+178h+var_68]
    vmovaps xmm8, [rsp+178h+var_58]
    vmovaps xmm7, [rsp+178h+var_48]
    vmovaps xmm6, [rsp+178h+var_38]
  }
  _R11 = &v165;
  __asm
  {
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupWorldScalingElement
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupWorldScalingElement(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupWorldScalingElement_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupWorldScalingElement_impl
==============
*/

__int64 __fastcall LUI_LuaCall_LUIElement_SetupWorldScalingElement_impl(lua_State *const luaVM, double _XMM1_8)
{
  LUIElement *v5; 
  LUIElement *v12; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v5 = LUI_ToElement(luaVM, 1);
  LUI_LUIElement_RegisterMethods(v5, luaVM, s_worldScalingMethods);
  if ( v5->customElementData )
  {
    _RDI = LUI_LUIElement_RetrieveCustomElementData<LUIWorldScaling>(v5, luaVM);
  }
  else
  {
    if ( !LUI_ElementHasWeakTableEntry(v5, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(v5, luaVM);
    _RDI = (LUIWorldScaling *)j_lua_newuserdata(luaVM, 0x28ui64);
    j_lua_setfield(luaVM, -2, "_customElementData");
    j_lua_settop(luaVM, -2);
    if ( v5->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
      __debugbreak();
    v5->customElementData = _RDI;
    *(_QWORD *)_RDI->worldOrigin.v = 0i64;
    *(_QWORD *)&_RDI->worldOrigin.z = 0i64;
    *(_QWORD *)&_RDI->heightFadeMargin = 0i64;
    *(_QWORD *)&_RDI->verticalHideRadius = 0i64;
    _RDI->fadeLocusElement = NULL;
  }
  j_lua_getfield(luaVM, 2, "hideHeight");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmaxss  xmm1, xmm0, xmm6
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm1, xmm1, xmm1
    }
  }
  __asm { vmovss  dword ptr [rdi+0Ch], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "heightFadeMargin");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdi+10h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "centerFadeMargin");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdi+1Ch], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "horizontalHideRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm { vmovss  dword ptr [rdi+14h], xmm1 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "verticalHideRadius");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm6, xmm0, xmm6 }
  }
  __asm { vmovss  dword ptr [rdi+18h], xmm6 }
  j_lua_settop(luaVM, -2);
  j_lua_getfield(luaVM, 2, "fadeLocusElement");
  if ( j_lua_isuserdata(luaVM, -1) )
    v12 = LUI_ToElement(luaVM, -1);
  else
    v12 = v5;
  _RDI->fadeLocusElement = v12;
  j_lua_settop(luaVM, -2);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  *(_QWORD *)_RDI->worldOrigin.v = 0i64;
  _RDI->worldOrigin.v[2] = 0.0;
  v5->renderFunction = (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_WorldScaling_Render;
  return 0i64;
}

