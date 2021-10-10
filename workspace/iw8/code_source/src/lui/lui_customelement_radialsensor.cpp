/*
==============
LUIElement_RadialSensorRender
==============
*/
void LUIElement_RadialSensorRender(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, float alpha, float red, float green, float blue, lua_State *luaVM)
{
  LUIElement *v8; 
  __int64 v9; 
  cg_t *v10; 
  const ScreenPlacement *ActivePlacement; 
  int v12; 
  int v13; 
  CgCompassSystem *v14; 
  const dvar_t *v15; 
  float value; 
  unsigned int refdefViewOrg_aab; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  float v21; 
  int v22; 
  entityState_t *entities; 
  __int64 number; 
  CgEntitySystem *v26; 
  __int64 v27; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v32; 
  __int64 v42; 
  const dvar_t *v43; 
  float v45; 
  __int128 v46; 
  RadialSensorData *v47; 
  __int128 v48; 
  float v53; 
  int v54; 
  int v55; 
  const ScreenPlacement *v56; 
  lua_State *v57; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 vertAlign; 
  __int64 vertAligna; 
  vec2_t *in; 
  float v63; 
  float v64; 
  float v65; 
  float width; 
  float v67; 
  float v68; 
  vec2_t v69[2]; 
  int v70; 
  int v71; 
  float outAngle; 
  LUIElement *elementa; 
  lua_State *v74; 
  vec2_t playerWorldPos[2]; 
  const CgSnapshotMP *NextSnap; 
  CgCompassSystem *v77; 
  ScreenPlacement *scrPlace; 
  RadialSensorData *Data; 
  __int64 v80; 
  vec2_t pos; 
  rectDef_s x; 
  rectDef_s mapRect; 
  vec2_t outClipped; 
  vec2_t outVector; 
  rectDef_s parentRect; 

  v80 = -2i64;
  v8 = element;
  elementa = element;
  v9 = localClientNum;
  v74 = luaVM;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v9] )
  {
    LODWORD(vertAlign) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", vertAlign) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(vertAlign) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", vertAlign) )
      __debugbreak();
  }
  v10 = cg_t::ms_cgArray[v9];
  if ( v10->nextSnap )
  {
    *(_OWORD *)&parentRect.x = 0i64;
    *(_WORD *)&parentRect.horzAlign = 1285;
    x.x = v8->left;
    x.y = v8->top;
    x.w = v8->right - x.x;
    x.h = v8->bottom - x.y;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
    ScrPlace_ApplyRect(ActivePlacement, &x.x, &x.y, &x.w, &x.h, 5, 5);
    *(_WORD *)&x.horzAlign = 1285;
    CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, v10, &parentRect, &x, &mapRect.x, &mapRect.y, &mapRect.w, &mapRect.h);
    *(float *)&v12 = (float)(0.5 * mapRect.w) + mapRect.x;
    v70 = v12;
    *(float *)&v13 = (float)(0.5 * mapRect.h) + mapRect.y;
    v71 = v13;
    if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
    {
      LODWORD(in) = 2;
      LODWORD(vertAligna) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", vertAligna, in, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( (unsigned int)v9 >= CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(vertAligna) = CgCompassSystem::ms_allocatedCount;
      LODWORD(horzAlign) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", horzAlign, vertAligna) )
        __debugbreak();
    }
    if ( !CgCompassSystem::ms_compassSystemArray[v9] )
    {
      LODWORD(vertAligna) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", vertAligna) )
        __debugbreak();
    }
    v14 = CgCompassSystem::ms_compassSystemArray[v9];
    v77 = v14;
    CgCompassSystem::GetCompassYaw(v14, COMPASS_TYPE_PARTIAL, 0, v10, &outAngle, &outVector);
    CgCompassSystem::SetCurrentCompassDisplayType(v14, COMPASS_DISPLAY_RADIALSENSOR);
    scrPlace = (ScreenPlacement *)ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
    NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v9);
    v15 = DCONST_DVARFLT_radialSensorIconSize;
    if ( !DCONST_DVARFLT_radialSensorIconSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorIconSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
    Data = LUIElement_RadialSensorSweep_GetData(v8, luaVM);
    if ( v10 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = v10->refdef.view.refdefViewOrg_aab;
    if ( v10 == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(playerWorldPos[0].v[0]) = LODWORD(v10->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v10 + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)v10 + 26936)) + 2));
    LODWORD(playerWorldPos[0].v[1]) = LODWORD(v10->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v10 + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)v10 + 26940)) + 2));
    LODWORD(v65) = refdefViewOrg_aab ^ ((_DWORD)v10 + 26944);
    LODWORD(playerWorldPos[1].v[0]) = (LODWORD(v65) * (LODWORD(v65) + 2)) ^ LODWORD(v10->refdef.view.org.org.v[2]);
    v18 = DCONST_DVARVEC4_radialSensorIconColor;
    if ( !DCONST_DVARVEC4_radialSensorIconColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorIconColor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = v18->current.value;
    v20 = v18->current.vector.v[1];
    v21 = v18->current.vector.v[2];
    v22 = 0;
    _XMM9 = 0i64;
    if ( NextSnap->numEntities > 0 )
    {
      entities = NextSnap->entities;
      do
      {
        number = entities->number;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(vertAligna) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", vertAligna) )
            __debugbreak();
        }
        if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(vertAligna) = CgEntitySystem::ms_allocatedCount;
          LODWORD(horzAligna) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", horzAligna, vertAligna) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v9] )
        {
          LODWORD(vertAligna) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", vertAligna) )
            __debugbreak();
        }
        v26 = CgEntitySystem::ms_entitySystemArray[v9];
        if ( (unsigned int)number >= 0x800 )
        {
          LODWORD(vertAligna) = 2048;
          LODWORD(horzAligna) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", horzAligna, vertAligna) )
            __debugbreak();
        }
        v27 = (__int64)&v26->m_entities[number];
        if ( (*(_BYTE *)(v27 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialsensor.cpp", 131, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( (*(_BYTE *)(v27 + 524) & 8) != 0 )
        {
          if ( !*(_QWORD *)(v27 + 48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))(v27 + 48), (const cpose_t *)v27);
          FunctionPointer_origin((const vec4_t *)(v27 + 56), (vec3_t *)v69);
          if ( *(_BYTE *)(v27 + 2) )
          {
            _XMM0 = LODWORD(v69[0].v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v32 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v32 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v32;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            v69[0].v[0] = *(float *)&_XMM2;
            _XMM0 = LODWORD(v69[0].v[1]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v32 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v32 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v32;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            v69[0].v[1] = *(float *)&_XMM2;
            _XMM0 = LODWORD(v69[1].v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v32 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v32 = *(double *)&_XMM0 * 0.000244140625;
            _XMM1 = v32;
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            v69[1].v[0] = *(float *)&_XMM2;
          }
          CgCompassSystem::WorldPosToCompass(v77, COMPASS_TYPE_PARTIAL, 0, &mapRect, 0.0, &outVector, playerWorldPos, v69, NULL, &outClipped);
          v64 = *(float *)&v12 + outClipped.v[0];
          v63 = *(float *)&v13 + outClipped.v[1];
          v65 = value;
          width = value;
          ScrPlace_ApplyRect(scrPlace, &v64, &v63, &v65, &width, x.horzAlign, x.vertAlign);
          v42 = (__int64)Data;
          if ( v10->time <= Data->endTime )
          {
            v45 = v64;
            v46 = LODWORD(v63);
            v47 = LUIElement_RadialSensorSweep_GetData(elementa, v74);
            v48 = v46;
            *(float *)&v48 = (float)((float)(*(float *)&v46 - v47->sweepCenterPosition.v[1]) * (float)(*(float *)&v46 - v47->sweepCenterPosition.v[1])) + (float)((float)(v45 - v47->sweepCenterPosition.v[0]) * (float)(v45 - v47->sweepCenterPosition.v[0]));
            _XMM2 = v48;
            __asm
            {
              vcmpless xmm3, xmm2, xmm1
              vblendvps xmm2, xmm9, xmm8, xmm3
            }
            v12 = v70;
            v13 = v71;
          }
          else
          {
            v43 = DCONST_DVARINT_radialSensorNextPingTime;
            if ( !DCONST_DVARINT_radialSensorNextPingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorNextPingTime") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v43);
            *(float *)&_XMM2 = 1.0 - (float)((float)(v10->time - *(_DWORD *)(v42 + 12)) * (float)(1.25 / (float)v43->current.integer));
          }
          LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, elementa, v64, v63, v65, width, 0.0, 0.0, 1.0, 1.0, 0.0, v19, v20, v21, *(float *)&_XMM2, *(const GfxImage **)v42, v74);
          memset(v69, 0, 0xCui64);
        }
        ++v22;
        ++entities;
      }
      while ( v22 < NextSnap->numEntities );
      v8 = elementa;
    }
    CgCompassSystem::WorldPosToCompass(v77, COMPASS_TYPE_PARTIAL, 0, &mapRect, 0.0, &outVector, playerWorldPos, (const vec2_t *)&v10->predictedPlayerState.origin, NULL, &pos);
    pos.v[0] = *(float *)&v12 + pos.v[0];
    pos.v[1] = *(float *)&v13 + pos.v[1];
    _XMM1 = 0i64;
    __asm { vroundss xmm0, xmm1, xmm2, 1 }
    v53 = (float)((float)((float)(outAngle - v10->predictedPlayerEntity->pose.angles.v[1]) * 0.0027777778) - *(float *)&_XMM0) * 360.0;
    v68 = value;
    v67 = value;
    v54 = x.vertAlign;
    v55 = x.horzAlign;
    v56 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
    ScrPlace_ApplyRect(v56, (float *)&pos, (float *)&pos + 1, &v68, &v67, v55, v54);
    v57 = v74;
    LUI_Render_DrawQuadRotated((const LocalClientNum_t)v9, v8, pos.v[0], pos.v[1], v68, v67, 0.0, 0.0, 1.0, 1.0, v53, 1.0, 1.0, 0.2, 1.0, cgMedia.compass.self_arrow, v74);
    LUIElement_RadialSensorSweep((const LocalClientNum_t)v9, &parentRect, &x, &pos, v8, v57);
    memset(playerWorldPos, 0, 0xCui64);
  }
}

/*
==============
LUIElement_RadialSensorSweep
==============
*/
void LUIElement_RadialSensorSweep(const LocalClientNum_t localClientNum, const rectDef_s *parentRect, const rectDef_s *rect, vec2_t *pos, LUIElement *element, lua_State *luaVM)
{
  __int64 v6; 
  lua_State *v7; 
  cg_t *v8; 
  RadialSensorData *Data; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  float integer; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  const ScreenPlacement *ActivePlacement; 
  float *v21; 
  float v22; 
  LUIElement *v23; 
  __int64 vertAlign; 
  int vertAligna; 
  float w[16]; 
  float h; 
  const rectDef_s *v29; 
  float *x; 

  x = (float *)pos;
  v29 = rect;
  v6 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    vertAligna = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, vertAligna) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
  {
    LODWORD(vertAlign) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", vertAlign) )
      __debugbreak();
  }
  v7 = luaVM;
  v8 = cg_t::ms_cgArray[v6];
  Data = LUIElement_RadialSensorSweep_GetData(element, luaVM);
  if ( Data->startTime >= 0 )
  {
    v11 = DCONST_DVARINT_radialSensorNextPingTime;
    if ( !DCONST_DVARINT_radialSensorNextPingTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorNextPingTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v8->time > Data->endTime + v11->current.integer )
      Data->startTime = -1;
  }
  else
  {
    Data->startTime = v8->time;
    v10 = DCONST_DVARINT_radialSensorSweepDuration;
    if ( !DCONST_DVARINT_radialSensorSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorSweepDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    Data->endTime = Data->startTime + v10->current.integer;
  }
  v12 = DCONST_DVARINT_radialSensorSweepDuration;
  if ( !DCONST_DVARINT_radialSensorSweepDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorSweepDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = (float)v12->current.integer;
  v14 = DCONST_DVARFLT_radialSensorSweepRadius;
  v15 = (float)(v8->time - Data->startTime) / integer;
  if ( !DCONST_DVARFLT_radialSensorSweepRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "radialSensorSweepRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v16 = v15 * v14->current.value;
  v17 = (__int64)v29;
  Data->currentRadius = v16;
  w[0] = v16 * 2.0;
  v18 = *(unsigned __int8 *)(v17 + 17);
  v19 = *(unsigned __int8 *)(v17 + 16);
  h = v16 * 2.0;
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
  v21 = x;
  ScrPlace_ApplyRect(ActivePlacement, x, x + 1, w, &h, v19, v18);
  v22 = v21[1];
  v23 = element;
  *(float *)&v29 = *v21;
  *((float *)&v29 + 1) = v22;
  Data->sweepCenterPosition = (vec2_t)v29;
  LUI_Render_DrawQuadRotated((const LocalClientNum_t)v6, v23, *v21, v21[1], w[0], h, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 1.0, 1.0 - v15, cgMedia.compassping_portable_radar_sweep, v7);
}

/*
==============
LUIElement_RadialSensorSweep_GetData
==============
*/
RadialSensorData *LUIElement_RadialSensorSweep_GetData(LUIElement *element, lua_State *luaVM)
{
  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialsensor.cpp", 37, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelement_radialsensor.cpp", 38, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !element->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  return (RadialSensorData *)element->customElementData;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRadialSensor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRadialSensor(lua_State *luaVM)
{
  LUIElement *v2; 
  GfxImage **v3; 
  const char *v4; 
  GfxImage *v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags |= 1u;
  v2->renderFunction = LUIElement_RadialSensorRender;
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 48, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( element, luaVM ))", (const char *)&queryFormat, "LUI_ElementHasWeakTableEntry( element, luaVM )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(v2, luaVM);
  v3 = (GfxImage **)j_lua_newuserdata(luaVM, 0x20ui64);
  j_lua_setfield(luaVM, -2, "_customElementData");
  j_lua_settop(luaVM, -2);
  if ( v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 54, ASSERT_TYPE_ASSERT, "(element->customElementData == 0)", (const char *)&queryFormat, "element->customElementData == NULL") )
    __debugbreak();
  v2->customElementData = v3;
  *v3 = NULL;
  v3[1] = NULL;
  v3[2] = NULL;
  v3[3] = NULL;
  j_lua_getfield(luaVM, 2, "pingIcon");
  if ( j_lua_isstring(luaVM, -1) )
  {
    v4 = j_lua_tolstring(luaVM, -1, NULL);
    v5 = Image_Register(v4, IMAGE_TRACK_HUD);
  }
  else
  {
    v5 = (GfxImage *)LUI_DefaultMaterial;
  }
  *v3 = v5;
  j_lua_settop(luaVM, -2);
  *((_DWORD *)v3 + 2) = -1;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

