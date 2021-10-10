/*
==============
LUIElement_ThreatMeter_Render
==============
*/
void LUIElement_ThreatMeter_Render(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  lua_State *v8; 
  __int64 v11; 
  const cg_t *v12; 
  ThreatMeterOptions *customElementData; 
  const dvar_t *v14; 
  const CgSnapshotSP *NextSnap; 
  bool v16; 
  vec2_t *viewportSize; 
  float left; 
  float top; 
  float v20; 
  float v21; 
  float height; 
  float v23; 
  double CurrentUnitScale; 
  int currentThreats; 
  int v26; 
  ThreatMeterAnimState *p_detectionAnimState; 
  int v28; 
  int v29; 
  float v30; 
  float v31; 
  float *i; 
  float v34; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v44; 
  int v45; 
  int v46; 
  __int64 v47; 
  const cg_t *v48; 
  lua_State *v49; 
  float v50; 
  float v51; 
  int v52; 
  int v53; 
  float v54; 
  float v55; 
  float v56; 
  int v57; 
  float c; 
  float s; 
  float v60; 
  float v61; 
  float v62; 
  lua_State *v63; 
  const cg_t *LocalClientGlobals; 

  v8 = luaVM;
  v63 = luaVM;
  v11 = localClientNum;
  v62 = alpha;
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 158, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 159, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 160, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
  v12 = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 163, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 72, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 73, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = (ThreatMeterOptions *)element->customElementData;
  if ( !customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 166, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  v14 = DVARBOOL_ai_threatSightDisplay;
  if ( !DVARBOOL_ai_threatSightDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_threatSightDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( !v14->current.enabled )
    return;
  NextSnap = CG_SnapshotSP_GetNextSnap((const LocalClientNum_t)v11);
  if ( !NextSnap )
    return;
  LUIElement_ThreatMeter_UpdateEntityData((const LocalClientNum_t)v11, LocalClientGlobals, NextSnap, customElementData);
  if ( customElementData->currentThreats <= 0 )
    return;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_37;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v16 )
      __debugbreak();
LABEL_37:
    viewportSize = &scrPlaceFull.realViewportSize;
    goto LABEL_38;
  }
  viewportSize = &scrPlaceViewDisplay[v11].realViewportSize;
LABEL_38:
  left = element->left;
  top = element->top;
  v21 = element->right - left;
  v20 = v21;
  height = element->bottom - top;
  v23 = (float)(v21 * 0.5) + left;
  v61 = v23;
  v54 = (float)(height * 0.5) + top;
  v60 = v21;
  v56 = height;
  CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
  currentThreats = customElementData->currentThreats;
  v26 = 0;
  v55 = *(float *)&CurrentUnitScale;
  if ( currentThreats > 0 )
  {
    p_detectionAnimState = &customElementData->threatEntities[0].detectionAnimState;
    do
    {
      if ( !*((_BYTE *)p_detectionAnimState + 4) || *p_detectionAnimState == THREAT_METER_ANIM_COMBAT )
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v11, element, v23, (float)(height * 0.5) + top, v21, height, 0.0, 0.0, 1.0, 1.0, *((float *)p_detectionAnimState - 3), 0.0, 0.0, 0.0, 0.5, customElementData->imgInnerBG, luaVM);
      currentThreats = customElementData->currentThreats;
      ++v26;
      p_detectionAnimState += 5;
    }
    while ( v26 < currentThreats );
  }
  v57 = 0;
  v28 = 0;
  if ( currentThreats > 0 )
  {
    v29 = _xmm;
    v30 = FLOAT_0_85000002;
    v31 = FLOAT_N0_60000002;
    for ( i = (float *)&customElementData->threatEntities[0].detectionAnimState; ; i += 5 )
    {
      _XMM0 = *((unsigned int *)i - 2);
      v34 = *(i - 3);
      __asm
      {
        vmaxss  xmm0, xmm0, xmm9
        vminss  xmm13, xmm0, xmm8
      }
      v37 = FLOAT_1_0;
      v38 = FLOAT_1_0;
      if ( *(float *)&_XMM13 > v30 )
      {
        v39 = _XMM13;
        *(float *)&v39 = (float)(*(float *)&_XMM13 - v30) * 6.6666679;
        _XMM3 = v39;
        _XMM0 = *(unsigned int *)i;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm1, xmm3, xmm8, xmm2
        }
        *(float *)&_XMM0 = *(float *)&_XMM1 * 0.60000002;
        v38 = 1.0 - *(float *)&_XMM1;
        v31 = FLOAT_N0_60000002;
        v37 = 1.0 - *(float *)&_XMM0;
        if ( *(float *)&_XMM13 >= 1.0 && !*(_DWORD *)i )
        {
          *(_DWORD *)i = 1;
          *(i - 1) = *(float *)&v12->time;
        }
      }
      v44 = FLOAT_1_0;
      if ( !*((_BYTE *)i + 5) )
      {
        v44 = FLOAT_0_39999998;
        v38 = v38 + (float)(v38 * v31);
        v37 = v37 + (float)(v37 * v31);
      }
      if ( !*((_BYTE *)i + 4) || *(_DWORD *)i == 2 )
      {
        v45 = LODWORD(v34) ^ v29;
        LUI_Render_PushMask((const LocalClientNum_t)v11, v23, v54, *(float *)&_XMM13 * v20, v56, COERCE_FLOAT(LODWORD(v34) ^ v29), 1.0, 0.0, 1, 0.0, 0.0, 1.0, 1.0, viewportSize, (GfxImage *)customElementData->imgMask);
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v11, element, v23, v54, v20, v56, 0.0, 0.0, 1.0, 1.0, v34, v44, v37, v38, 1.0, customElementData->imgMeter, v8);
        LUI_Render_PopMask((const LocalClientNum_t)v11);
        v28 = v57;
      }
      else
      {
        v45 = LODWORD(v34) ^ v29;
      }
      if ( !*(_DWORD *)i )
        goto LABEL_75;
      v46 = v12->time - *((_DWORD *)i - 1);
      FastSinCos(v34 * 0.017453292, &s, &c);
      if ( *((_BYTE *)i + 4) )
        break;
      v53 = v46 % -500;
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)v11, element, (float)((float)((float)((float)v53 * 0.25) + (float)(v55 * 33.330002)) * s) + v61, v54 - (float)((float)((float)((float)v53 * 0.25) + (float)(v55 * 33.330002)) * c), (float)(v20 * 0.80000001) - (float)((float)v53 * 0.1), (float)(v56 * 0.80000001) - (float)((float)((float)v53 * 0.1) * (float)(v56 / v20)), 0.0, 0.0, 1.0, 1.0, v34, v44, v37, v38, 0.69999999 - (float)(v53 / 500), customElementData->imgMeter, v8);
      v23 = v61;
      if ( v53 > 250 )
        LUI_Render_DrawQuadRotated((const LocalClientNum_t)v11, element, (float)((float)((float)((float)(v53 - 250) * 0.25) + (float)(v55 * 33.330002)) * s) + v61, v54 - (float)((float)((float)((float)(v53 - 250) * 0.25) + (float)(v55 * 33.330002)) * c), (float)(v20 * 0.80000001) - (float)((float)(v53 - 250) * 0.1), (float)(v56 * 0.80000001) - (float)((float)((float)(v53 - 250) * 0.1) * (float)(v56 / v60)), 0.0, 0.0, 1.0, 1.0, v34, v44, v37, v38, 0.69999999 - (float)((v53 - 250) / 500), customElementData->imgMeter, v8);
      v20 = v60;
LABEL_80:
      if ( *(_DWORD *)i == 1 )
      {
        v28 = v57;
        if ( *(float *)&_XMM13 < 1.0 )
          *i = 0.0;
        goto LABEL_75;
      }
LABEL_74:
      v28 = v57;
LABEL_75:
      v31 = FLOAT_N0_60000002;
      v30 = FLOAT_0_85000002;
      v29 = _xmm;
      v8 = v63;
      ++v28;
      v12 = LocalClientGlobals;
      v57 = v28;
      if ( v28 >= customElementData->currentThreats )
        return;
    }
    v47 = tls_index;
    if ( dword_154790648 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_154790648);
      if ( dword_154790648 == -1 )
      {
        blurWidth = v55 * 341.32999;
        j__Init_thread_footer(&dword_154790648);
      }
    }
    if ( dword_154790650 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v47) + 1772i64) )
    {
      j__Init_thread_header(&dword_154790650);
      if ( dword_154790650 == -1 )
      {
        blurHeight = v55 * 341.32999;
        j__Init_thread_footer(&dword_154790650);
      }
    }
    if ( *(_DWORD *)i == 1 )
    {
      v48 = LocalClientGlobals;
      v46 = 0;
      *(_DWORD *)i = 2;
      *(i - 1) = *(float *)&v48->time;
    }
    else if ( v46 >= 100 )
    {
      if ( v46 >= 300 )
      {
        *(_QWORD *)(i - 1) = 0i64;
        goto LABEL_74;
      }
      v49 = v63;
      v51 = (float)((float)v46 * 0.066) * v55;
      v52 = v46 - 100;
      LUI_Render_DrawQuadRotated((const LocalClientNum_t)v11, element, (float)(v51 * s) + v23, v54 - (float)(v51 * c), v20, v56, 0.0, 0.0, 1.0, 1.0, v34, v44, v37, v38, 1.0 - (float)(v52 / 200), customElementData->imgArrow, v63);
      v50 = (float)v52 * -0.0049999999;
      goto LABEL_72;
    }
    v49 = v63;
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)v11, element, (float)((float)((float)((float)v46 * 0.066) * v55) * s) + v23, v54 - (float)((float)((float)((float)v46 * 0.066) * v55) * c), v20, v56, 0.0, 0.0, 1.0, 1.0, v34, v44, v37, v38, v62, customElementData->imgArrow, v63);
    v50 = (float)(v46 / 100) - 1.0;
LABEL_72:
    LUI_Render_PushMask((const LocalClientNum_t)v11, v23, v54, blurWidth, blurHeight, *(float *)&v45, 1.0, v50, 1, 0.0, 0.0, 1.0, 1.0, viewportSize, (GfxImage *)customElementData->imgBlurMask);
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)v11, element, v23, v54, blurWidth, blurHeight, 0.0, 0.0, 1.0, 1.0, v34, v44, v37, v38, 1.0, customElementData->imgBlur, v49);
    LUI_Render_PopMask((const LocalClientNum_t)v11);
    goto LABEL_80;
  }
}

/*
==============
LUIElement_ThreatMeter_UpdateEntityData
==============
*/
void LUIElement_ThreatMeter_UpdateEntityData(const LocalClientNum_t localClientNum, const cg_t *cgameGlob, const CgSnapshotSP *nextSnap, ThreatMeterOptions *options)
{
  __int64 v6; 
  __int64 clientNum; 
  int v8; 
  __int64 v9; 
  unsigned __int16 *entityNums; 
  __int64 v11; 
  CgEntitySystem *v12; 
  __int64 v13; 
  __int16 v14; 
  cg_t *LocalClientGlobals; 
  int v16; 
  double v17; 
  __int64 v18; 
  __int64 v19; 
  vec3_t outOrigin; 
  __int64 v21; 
  vec3_t outEyePos; 
  vec3_t vec; 
  vec3_t outForward; 
  vec3_t angles; 
  vec3_t v26; 
  vec3_t outUp; 
  vec3_t outRight; 

  v21 = -2i64;
  v6 = localClientNum;
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  v8 = 0;
  options->currentThreats = 0;
  if ( nextSnap->numEntities > 0 )
  {
    v9 = localClientNum;
    entityNums = nextSnap->entityNums;
    do
    {
      if ( options->currentThreats >= 16 )
        break;
      v11 = *entityNums;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v19) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v19) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v19) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v18) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v9] )
      {
        LODWORD(v19) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v19) )
          __debugbreak();
      }
      v12 = CgEntitySystem::ms_entitySystemArray[v9];
      if ( (unsigned int)v11 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v13 = (__int64)&v12->m_entities[v11];
      if ( (*(_BYTE *)(v13 + 648) & 1) != 0 && *(_WORD *)(v13 + 408) == 19 )
      {
        if ( (_DWORD)clientNum )
        {
          LODWORD(v19) = 1;
          LODWORD(v18) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 135, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cent->nextState.lerp.u.actor.threatSight ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( cent->nextState.lerp.u.actor.threatSight )\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v14 = *(_WORD *)(v13 + 2 * clientNum + 492);
        if ( (v14 & 0x7F) != 0 )
        {
          CG_GetPoseOrigin((const cpose_t *)v13, &outOrigin);
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
          if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 90, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          v16 = LocalClientGlobals->predictedPlayerState.clientNum;
          CG_CalcEyePoint((LocalClientNum_t)v6, v16, &outEyePos);
          if ( CG_GetViewDirection((LocalClientNum_t)v6, v16, &outForward, &outRight, &outUp) )
          {
            vectoangles(&outForward, &angles);
            vec.v[0] = outOrigin.v[0] - outEyePos.v[0];
            vec.v[1] = outOrigin.v[1] - outEyePos.v[1];
            vec.v[2] = outOrigin.v[2] - outEyePos.v[2];
            vectoangles(&vec, &v26);
            v17 = AngleNormalize360(angles.v[1] - v26.v[1]);
          }
          else
          {
            LODWORD(v17) = 0;
          }
          options->threatEntities[options->currentThreats].screenAngle = *(float *)&v17;
          options->threatEntities[options->currentThreats].sightCoef = (float)(v14 & 0x7F) * 0.0078740157;
          options->threatEntities[options->currentThreats].inCombat = HIBYTE(v14) & 1;
          options->threatEntities[options->currentThreats++].isVisible = (unsigned __int8)v14 >> 7;
        }
      }
      ++v8;
      ++entityNums;
      v9 = v6;
    }
    while ( v8 < nextSnap->numEntities );
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
LUI_LuaCall_LUIElement_SetupThreatMeter
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupThreatMeter(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupThreatMeter_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupThreatMeter_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupThreatMeter_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  _QWORD *v3; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_istable( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_ThreatMeter_Render;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = j_lua_newuserdata(luaVM, 0x178ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  memset_0(v3, 0, 0x178ui64);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_threatmeter.cpp", 370, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  memset_0(v3, 0, 0x178ui64);
  *v3 = Image_Register("hud_stealth_meter_full", IMAGE_TRACK_HUD);
  v3[1] = Image_Register("hud_stealth_meter_inner", IMAGE_TRACK_HUD);
  v3[2] = Image_Register("white_2d_stencil_mask", IMAGE_TRACK_HUD);
  v3[3] = Image_Register("hud_stealth_meter_arrow", IMAGE_TRACK_HUD);
  v3[4] = Image_Register("white", IMAGE_TRACK_HUD);
  v3[5] = Image_Register("hud_stealth_meter_blur_mask", IMAGE_TRACK_HUD);
  return 0i64;
}

