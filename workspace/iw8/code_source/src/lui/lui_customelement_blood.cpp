/*
==============
LUIElement_Blood_Render
==============
*/
void LUIElement_Blood_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  __int64 v10; 
  cg_t *LocalClientGlobals; 
  float v12; 
  double v13; 
  float v15; 
  float bloodOverlayAlpha; 
  bool v17; 
  float v18; 
  float v19; 
  bool v20; 
  vec2_t *viewportSize; 
  const GfxImage *material; 
  float displayWidth; 
  float displayHeight; 

  v10 = localClientNum;
  if ( !LUIElement_IsImageLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_blood.cpp", 82, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( element ))", (const char *)&queryFormat, "LUIElement_IsImageLike( element )") )
    __debugbreak();
  if ( !CG_View_IsKillCamEntityView((const LocalClientNum_t)v10) )
  {
    switch ( CG_GetLocalClientGlobals((const LocalClientNum_t)v10)->predictedPlayerState.pm_type )
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
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0xBu) )
        {
          v12 = 0.0;
        }
        else
        {
          v13 = CG_PlayerState_CalcPlayerHealth((LocalClientNum_t)v10, &LocalClientGlobals->predictedPlayerState);
          v12 = *(float *)&v13;
          if ( *(float *)&v13 < 0.0 || *(float *)&v13 > 1.0 )
          {
            __asm { vxorpd  xmm2, xmm2, xmm2 }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_blood.cpp", 54, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( healthRatio ) && ( healthRatio ) <= ( 1.0f )", "healthRatio not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v13, *(double *)&_XMM2, DOUBLE_1_0) )
              __debugbreak();
          }
        }
        if ( (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 )
          v15 = 0.0;
        else
          v15 = 1.0 - (float)(v12 * v12);
        bloodOverlayAlpha = LocalClientGlobals->bloodOverlayAlpha;
        v17 = bloodOverlayAlpha < v15;
        if ( bloodOverlayAlpha > v15 )
        {
          v18 = bloodOverlayAlpha - (float)((float)LocalClientGlobals->frametime * 0.003);
          LocalClientGlobals->bloodOverlayAlpha = v18;
          v17 = v18 < v15;
        }
        if ( v17 )
          LocalClientGlobals->bloodOverlayAlpha = v15;
        v19 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10)->bloodOverlayAlpha;
        if ( v19 == 0.0 )
          return;
        if ( activeScreenPlacementMode == SCRMODE_FULL )
          goto LABEL_27;
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          viewportSize = &scrPlaceViewDisplay[v10].realViewportSize;
        }
        else
        {
          if ( activeScreenPlacementMode == SCRMODE_INVALID )
            v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
          else
            v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
          if ( v20 )
            __debugbreak();
LABEL_27:
          viewportSize = &scrPlaceFull.realViewportSize;
        }
        material = element->imageData.image;
        displayWidth = (float)vidConfig.displayWidth;
        displayHeight = (float)vidConfig.displayHeight;
        LUI_Render_PushMask((const LocalClientNum_t)v10, displayWidth * 0.5, displayHeight * 0.5, displayWidth, displayHeight, 0.0, 1.0, v19, 0, 0.0, 0.0, 1.0, 1.0, viewportSize, element->currentAnimationState.userDataImage);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v10, element, displayWidth * 0.5, displayHeight * 0.5, displayWidth, displayHeight, 1.0, 0.0, 0.0, 1.0, 0.0, red, green, blue, 1.0, material, luaVM);
        LUI_Render_PopMask((const LocalClientNum_t)v10);
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
  LUI_LUIElement_SetupUIBaseImage(v2, LUIElement_Blood_Render);
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

