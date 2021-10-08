/*
==============
LUIElement_Blood_Render
==============
*/

void __fastcall LUIElement_Blood_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, double alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v18; 
  char v23; 
  char v24; 
  bool v35; 
  vec2_t *p_realViewportSize; 
  const GfxImage *material; 
  float fmt; 
  float fmta; 
  double maskRotation; 
  float maskRotationa; 
  float maskRotationb; 
  double v64; 
  float v65; 
  float v66; 
  double v67; 
  float v68; 
  float v69; 
  float applyParallax; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float viewportSize; 
  float image; 

  v18 = localClientNum;
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_blood.cpp", 82, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  if ( !CG_View_IsKillCamEntityView((const LocalClientNum_t)v18) )
  {
    switch ( CG_GetLocalClientGlobals((const LocalClientNum_t)v18)->predictedPlayerState.pm_type )
    {
      case 2:
      case 3:
      case 5:
      case 6:
        return;
      case 7:
      case 8:
        if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO) )
          goto LABEL_7;
        return;
      default:
LABEL_7:
        __asm
        {
          vmovaps [rsp+118h+var_28], xmm6
          vmovaps [rsp+118h+var_68], xmm10
          vmovaps [rsp+118h+var_78], xmm11
          vmovaps [rsp+118h+var_88], xmm12
        }
        _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
        __asm { vmovss  xmm11, cs:__real@3f800000 }
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.otherFlags, ACTIVE, 0xBu) )
        {
          __asm
          {
            vxorps  xmm10, xmm10, xmm10
            vxorps  xmm6, xmm6, xmm6
          }
        }
        else
        {
          *(double *)&_XMM0 = CG_PlayerState_CalcPlayerHealth((LocalClientNum_t)v18, &_RBX->predictedPlayerState);
          __asm
          {
            vxorps  xmm10, xmm10, xmm10
            vcomiss xmm0, xmm10
            vmovaps xmm6, xmm0
          }
          if ( v23 )
            goto LABEL_33;
          __asm { vcomiss xmm0, xmm11 }
          if ( !(v23 | v24) )
          {
LABEL_33:
            __asm
            {
              vmovsd  xmm1, cs:__real@3ff0000000000000
              vmovsd  [rsp+118h+var_E0], xmm1
              vxorpd  xmm2, xmm2, xmm2
              vmovsd  [rsp+118h+var_E8], xmm2
              vcvtss2sd xmm3, xmm6, xmm6
              vmovsd  qword ptr [rsp+118h+maskRotation], xmm3
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_blood.cpp", 54, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( healthRatio ) && ( healthRatio ) <= ( 1.0f )", "healthRatio not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", maskRotation, v64, v67) )
              __debugbreak();
          }
        }
        if ( (_RBX->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 )
        {
          __asm { vxorps  xmm3, xmm3, xmm3 }
        }
        else
        {
          __asm
          {
            vmulss  xmm0, xmm6, xmm6
            vsubss  xmm3, xmm11, xmm0
          }
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rbx+18110h]
          vcomiss xmm2, xmm3
        }
        if ( (_RBX->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
            vmulss  xmm1, xmm0, cs:__real@3b449ba6
            vsubss  xmm2, xmm2, xmm1
            vmovss  dword ptr [rbx+18110h], xmm2
            vcomiss xmm2, xmm3
          }
        }
        _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
        __asm
        {
          vmovss  xmm12, dword ptr [rax+18110h]
          vucomiss xmm12, xmm10
        }
        if ( v24 )
          goto LABEL_27;
        __asm
        {
          vmovaps [rsp+118h+var_38], xmm7
          vmovaps [rsp+118h+var_48], xmm8
          vmovaps [rsp+118h+var_58], xmm9
        }
        if ( activeScreenPlacementMode == SCRMODE_FULL )
          goto LABEL_25;
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          p_realViewportSize = &scrPlaceViewDisplay[v18].realViewportSize;
        }
        else
        {
          if ( activeScreenPlacementMode == SCRMODE_INVALID )
            v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
          else
            v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
          if ( v35 )
            __debugbreak();
LABEL_25:
          p_realViewportSize = &scrPlaceFull.realViewportSize;
        }
        material = element->imageData.image;
        __asm
        {
          vxorps  xmm9, xmm9, xmm9
          vcvtsi2ss xmm9, xmm9, rax
          vmulss  xmm8, xmm9, cs:__real@3f000000
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, rax
          vmulss  xmm7, xmm6, cs:__real@3f000000
          vmovss  [rsp+118h+var_B8], xmm11
          vmovss  [rsp+118h+var_C0], xmm11
          vmovss  [rsp+118h+var_C8], xmm10
          vmovss  [rsp+118h+var_D0], xmm10
          vmovss  dword ptr [rsp+118h+var_E0], xmm12
          vmovss  dword ptr [rsp+118h+var_E8], xmm11
          vmovss  [rsp+118h+maskRotation], xmm10
          vmovaps xmm3, xmm9; maskWidth
          vmovaps xmm2, xmm7; maskCenterY
          vmovaps xmm1, xmm8; maskCenterX
          vmovss  dword ptr [rsp+118h+fmt], xmm6
        }
        LUI_Render_PushMask((const LocalClientNum_t)v18, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, maskRotationa, v65, v68, 0, v71, v73, v75, v77, p_realViewportSize, element->currentAnimationState.userDataImage);
        __asm
        {
          vmovss  xmm0, [rsp+118h+blue]
          vmovss  xmm1, [rsp+118h+green]
          vmovss  dword ptr [rsp+118h+image], xmm11
          vmovss  dword ptr [rsp+118h+viewportSize], xmm0
          vmovss  xmm0, [rsp+118h+red]
          vmovss  [rsp+118h+var_B8], xmm1
          vmovss  [rsp+118h+var_C0], xmm0
          vmovss  [rsp+118h+var_C8], xmm10
          vmovss  [rsp+118h+var_D0], xmm11
          vmovss  dword ptr [rsp+118h+applyParallax], xmm10
          vmovss  dword ptr [rsp+118h+var_E0], xmm10
          vmovss  dword ptr [rsp+118h+var_E8], xmm11
          vmovss  [rsp+118h+maskRotation], xmm6
          vmovaps xmm3, xmm7; centerY
          vmovaps xmm2, xmm8; centerX
          vmovss  dword ptr [rsp+118h+fmt], xmm9
        }
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v18, element, *(float *)&_XMM2, *(float *)&_XMM3, fmta, maskRotationb, v66, v69, applyParallax, v72, v74, v76, v78, viewportSize, image, material, luaVM);
        LUI_Render_PopMask((const LocalClientNum_t)v18);
        __asm
        {
          vmovaps xmm9, [rsp+118h+var_58]
          vmovaps xmm8, [rsp+118h+var_48]
          vmovaps xmm7, [rsp+118h+var_38]
        }
LABEL_27:
        __asm
        {
          vmovaps xmm11, [rsp+118h+var_78]
          vmovaps xmm10, [rsp+118h+var_68]
          vmovaps xmm6, [rsp+118h+var_28]
          vmovaps xmm12, [rsp+118h+var_88]
        }
        return;
    }
  }
}

/*
==============
LUI_LuaCall_LUIElement_SetupBlood
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupBlood(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 0x100001u;
  LUI_LUIElement_SetupUIBaseImage(v2, (void (__fastcall *)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *))LUIElement_Blood_Render);
  if ( !LUIElement_IsImageLike(v2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsImageLike( self )");
  v2->imageData.image = Image_Register("blood_overlay", IMAGE_TRACK_HUD);
  v2->currentAnimationState.userDataImage = Image_Register("blood_overlay_mask", IMAGE_TRACK_HUD);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

