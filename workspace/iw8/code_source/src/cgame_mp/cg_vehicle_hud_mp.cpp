/*
==============
CG_VehicleHudMP_DrawCompass
==============
*/

void __fastcall CG_VehicleHudMP_DrawCompass(LocalClientNum_t localClientNum, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, const bool largeMap, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  ?CG_VehicleHudMP_DrawCompass@@YAXW4LocalClientNum_t@@W4CompassType@@_NPEBUrectDef_s@@3MAEBTvec4_t@@_NPEAUGfxImage@@PEAULUIElement@@PEAUlua_State@@@Z(localClientNum, compassType, cropPartialMap, parentRect, rect, boundsRadius, color, largeMap, mapMask, element, luaVM);
}

/*
==============
VehicleHud_HostilesCallback
==============
*/

void __fastcall VehicleHud_HostilesCallback(LocalClientNum_t localClientNum, void (__fastcall *func)(LocalClientNum_t, const DObj *, const vec3_t *))
{
  ?VehicleHud_HostilesCallback@@YAXW4LocalClientNum_t@@P6AX0PEBUDObj@@AEBTvec3_t@@@Z@Z(localClientNum, func);
}

/*
==============
CG_VehicleHudMP_DrawCompass
==============
*/
void CG_VehicleHudMP_DrawCompass(LocalClientNum_t localClientNum, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color, const bool largeMap, GfxImage *mapMask, LUIElement *element, lua_State *luaVM)
{
  const dvar_t *v15; 
  const dvar_t *v16; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  char v20[12]; 
  float x; 
  float y; 
  float w; 
  float alphaOffset[3]; 
  cg_t *cgameGlob[2]; 
  vec4_t quadVerts[4]; 

  cgameGlob[0] = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( cgameGlob[0]->nextSnap )
  {
    v15 = DVARBOOL_compassHideVehicles;
    if ( !DVARBOOL_compassHideVehicles || (Dvar_CheckFrontendServerThread(DVARBOOL_compassHideVehicles), !v15->current.enabled) )
    {
      if ( compassType )
        goto LABEL_11;
      v16 = DVARBOOL_compassVehicleUseMapMask;
      if ( !DVARBOOL_compassVehicleUseMapMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassVehicleUseMapMask") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled && mapMask )
      {
        CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, cgameGlob[0], parentRect, rect, &x, &y, &w, alphaOffset);
        LUI_Render_GetViewportSize(localClientNum, (vec2_t *)cgameGlob);
        vertAlign = rect->vertAlign;
        horzAlign = rect->horzAlign;
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, alphaOffset, horzAlign, vertAlign);
        LUI_CoD_GenerateQuadVerts(x, y, x + w, y + alphaOffset[0], (vec4_t (*)[4])quadVerts);
        LUI_Render_PushMask(localClientNum, (float)(quadVerts[1].v[0] + quadVerts[0].v[0]) * 0.5, (float)(quadVerts[2].v[1] + quadVerts[0].v[1]) * 0.5, COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[1].v[0] - quadVerts[0].v[0]) & _xmm), COERCE_FLOAT(COERCE_UNSIGNED_INT(quadVerts[2].v[1] - quadVerts[0].v[1]) & _xmm), 0.0, 1.0, 0.0, 0, 0.0, 0.0, 1.0, 1.0, (const vec2_t *)cgameGlob, mapMask);
        DrawVehicles(localClientNum, COMPASS_TYPE_PARTIAL, cropPartialMap, parentRect, rect, boundsRadius, PRODUCE_SMOKE, color, largeMap, element, luaVM);
        LUI_Render_PopMask(localClientNum);
        DrawVehicles(localClientNum, COMPASS_TYPE_PARTIAL, cropPartialMap, parentRect, rect, boundsRadius, (const VehicleDrawType)2, color, largeMap, element, luaVM);
      }
      else
      {
LABEL_11:
        DrawVehicles(localClientNum, compassType, cropPartialMap, parentRect, rect, boundsRadius, (const VehicleDrawType)0, color, largeMap, element, luaVM);
      }
    }
  }
  memset(v20, 0, sizeof(v20));
}

/*
==============
DrawVehicles
==============
*/
void DrawVehicles(LocalClientNum_t localClientNum, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, int currentVehicleDrawType, const vec4_t *color, const bool largeMap, LUIElement *element, lua_State *luaVM)
{
  __int128 v11; 
  __int64 v15; 
  CgCompassSystemMP *v16; 
  const dvar_t *v18; 
  cg_t *v19; 
  float v20; 
  float v21; 
  char v22; 
  unsigned int v23; 
  __int64 v24; 
  int v25; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *v27; 
  unsigned int flags; 
  int v29; 
  const VehicleDef *ClientDef; 
  centity_t *Entity; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  team_t team; 
  CgMLGSpectator *MLGSpectator; 
  team_t v37; 
  BOOL v38; 
  Material *compassEnemyAltIcon; 
  const GfxImage *material; 
  __int64 defIndex; 
  bool v42; 
  const char *v43; 
  const dvar_t *v44; 
  double Float_Internal_DebugName; 
  float v46; 
  double v47; 
  const char *v48; 
  const dvar_t *v49; 
  double v50; 
  float v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  float v56; 
  double v57; 
  double v58; 
  double v59; 
  float v60; 
  double v61; 
  double v62; 
  float v63; 
  double v64; 
  float compassIconWidth; 
  float v66; 
  double v67; 
  double v68; 
  float v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  float v75; 
  CompassType v76; 
  CgCompassSystemMP *v77; 
  float v78; 
  double v79; 
  double TacmapLookAtScale; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float v87; 
  float v88; 
  float *y; 
  float *ya; 
  float *w; 
  float *wa; 
  float width; 
  float v94; 
  char v95; 
  char v96; 
  CompassType compassTypea; 
  bool v98; 
  unsigned int v99; 
  float v100; 
  cg_t *cgameGlob; 
  CgCompassSystemMP *v102; 
  float outAngle; 
  vec3_t outOrigin; 
  const rectDef_s *v105; 
  lua_State *v106; 
  LUIElement *v107; 
  __int64 v108; 
  CgStatic *LocalClientStatics; 
  SecureVec3 out; 
  __int64 v111; 
  vec2_t currentPosition; 
  vec2_t clippedPosition; 
  vec4_t v114; 
  rectDef_s x; 
  vec2_t outVector; 

  v111 = -2i64;
  v98 = cropPartialMap;
  compassTypea = compassType;
  v15 = localClientNum;
  v105 = rect;
  v107 = element;
  v106 = luaVM;
  cgameGlob = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( cgameGlob->nextSnap )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v15, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
      __debugbreak();
    if ( (unsigned int)v15 >= CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(w) = CgCompassSystem::ms_allocatedCount;
      LODWORD(y) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
        __debugbreak();
    }
    if ( !CgCompassSystem::ms_compassSystemArray[v15] )
    {
      LODWORD(w) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", w) )
        __debugbreak();
    }
    v16 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v15];
    v102 = v16;
    *(double *)&v11 = CgCompassSystem::GetIconFadeAlpha(v16, (const LocalClientNum_t)v15, compassType);
    _XMM10 = v11;
    if ( *(float *)&v11 != 0.0 )
    {
      v18 = DVARBOOL_compassHideVehicles;
      if ( !DVARBOOL_compassHideVehicles || (Dvar_CheckFrontendServerThread(DVARBOOL_compassHideVehicles), !v18->current.enabled) )
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v15);
        v19 = cgameGlob;
        CG_CompassCalcDimensions(compassType, cgameGlob, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
        v20 = (float)(0.5 * x.w) + x.x;
        v21 = (float)(0.5 * x.h) + x.y;
        v114 = *color;
        CgCompassSystem::GetCompassYaw(v16, compassType, cropPartialMap, cgameGlob, &outAngle, &outVector);
        CG_CalcPlayerPos(&out, (LocalClientNum_t)v15);
        v22 = DVARBOOL_bg_compassEnableVisibleVehiclesMask && Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_compassEnableVisibleVehiclesMask, "bg_compassEnableVisibleVehiclesMask");
        v96 = v22;
        if ( CG_GameInterface_PlayingBR() || CG_GameInterface_PlayingBRTDM() || CG_GameInterface_PlayingGroundWar() || (v95 = 0, CG_GameInterface_PlayingGWReinforce()) )
          v95 = 1;
        v23 = 0;
        v99 = 0;
        v24 = 0i64;
        v108 = 0i64;
        v25 = currentVehicleDrawType;
        while ( 1 )
        {
          VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v15);
          if ( v23 >= 0x80 )
          {
            LODWORD(wa) = 128;
            LODWORD(ya) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          v27 = &VehicleSystem->m_vehicleClients[v24];
          if ( !CG_Vehicle_IsClientValid((LocalClientNum_t)v15, v27) )
            goto LABEL_88;
          flags = v27->flags;
          if ( (flags & 0x20000) != 0 )
            goto LABEL_88;
          if ( v25 != 2 )
            break;
          if ( (flags & 0x80000) != 0 )
            goto LABEL_34;
LABEL_88:
          v99 = ++v23;
          v24 = ++v108;
          v22 = v96;
          if ( (int)v23 >= 128 )
            goto LABEL_89;
        }
        v29 = flags & 0x80000;
        if ( v25 == 1 && v29 )
          goto LABEL_88;
LABEL_34:
        if ( CG_CalloutMarkerPing_CheckSquadPingsForTarget((LocalClientNum_t)v15, v27->entIndex, 0xFFFFFFFF, -1) != 53 )
          goto LABEL_88;
        if ( v22 )
        {
          if ( v23 >= 0x80 )
          {
            LODWORD(wa) = 128;
            LODWORD(ya) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", ya, wa) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v23 & 0x1F)) & v19->predictedPlayerState.visibleMinimapVehiclesMask.array[(unsigned __int64)v23 >> 5]) != 0 )
            goto LABEL_88;
        }
        ClientDef = CgVehicleSystem::GetClientDef(v27);
        Entity = CG_GetEntity((const LocalClientNum_t)v15, v27->entIndex);
        if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( v102->IsVehicleFiltered(v102, compassTypea, Entity) )
        {
LABEL_87:
          v25 = currentVehicleDrawType;
          goto LABEL_88;
        }
        clientNum = v19->predictedPlayerState.clientNum;
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
        {
          if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(wa) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(ya) = clientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
        }
        else
        {
          CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
        }
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(localCharacterInfo)", (const char *)&queryFormat, "localCharacterInfo") )
          __debugbreak();
        team = CharacterInfo->team;
        if ( cgameGlob->m_isMLGSpectator )
        {
          MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v15);
          team = CgMLGSpectator::GetTeam(MLGSpectator);
        }
        v37 = VehicleSystem->GetTeam(VehicleSystem, &Entity->nextState);
        if ( cgameGlob->m_isMLGSpectator )
        {
          v38 = v37 != TEAM_TWO;
          goto LABEL_63;
        }
        if ( team )
        {
          if ( team == v37 )
            goto LABEL_62;
        }
        else if ( cgameGlob->predictedPlayerState.clientNum == v27->playerIndex )
        {
LABEL_62:
          v38 = 0;
          goto LABEL_63;
        }
        v38 = 1;
LABEL_63:
        if ( v37 )
        {
          if ( !v38 )
          {
            CgCompassSystemMP::GetFriendlyCompassColor(v102, &v114, (CgGlobalsMP *)cgameGlob);
            goto LABEL_73;
          }
          CgCompassSystemMP::GetEnemyCompassColor(v102, &v114, (CgGlobalsMP *)cgameGlob);
        }
        else
        {
          v114.v[0] = colorWhiteFaded.v[0];
          v114.v[1] = colorWhiteFaded.v[1];
          v114.v[2] = colorWhiteFaded.v[2];
        }
        if ( v38 )
        {
          compassEnemyAltIcon = ClientDef->compassEnemyAltIcon;
          if ( !compassEnemyAltIcon )
            compassEnemyAltIcon = ClientDef->compassEnemyIcon;
LABEL_75:
          material = NULL;
          if ( v95 )
          {
            if ( v27->defIndex >= 0x80u )
            {
              LODWORD(wa) = 128;
              LODWORD(ya) = v27->defIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( veh->defIndex ) < (unsigned)( 128 )", "veh->defIndex doesn't index MAX_VEHICLE_DEF_GAME_CACHE\n\t%i not in [0, %i)", ya, wa) )
                __debugbreak();
            }
            defIndex = v27->defIndex;
            if ( cgMedia.compass.vehicleMediaArray[defIndex].miniIcon )
              material = cgMedia.compass.vehicleMediaArray[defIndex].miniIcon;
          }
          if ( compassEnemyAltIcon )
          {
            CG_GetPoseOrigin(&Entity->pose, &outOrigin);
            v42 = CgCompassSystem::WorldPosToCompass(v102, compassTypea, v98, &x, boundsRadius, &outVector, (const vec2_t *)&out, (const vec2_t *)&outOrigin, &currentPosition, &clippedPosition);
            if ( !v42 || Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") && !CG_GameInterface_MinimapHidePinnedVehicleTest(v27->flags, &currentPosition, &clippedPosition) )
            {
              if ( material )
              {
                v43 = "compassVehicleSizeMini";
                v44 = DCONST_DVARFLT_compassVehicleSizeMini;
                goto LABEL_92;
              }
              if ( (*(_BYTE *)CgCompassSystem::GetCurrentCompassDisplayType(v102) & 2) != 0 )
              {
                v43 = "radialSensorIconSize";
                v44 = DCONST_DVARFLT_radialSensorIconSize;
LABEL_92:
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v44, v43);
                v46 = *(float *)&Float_Internal_DebugName;
                v47 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                v94 = *(float *)&v47 * v46;
                v48 = "compassSize";
                v49 = DVARFLT_compassSize;
              }
              else
              {
                if ( compassTypea == COMPASS_TYPE_TACMAP || v95 )
                {
                  v59 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  v60 = *(float *)&v59 * (float)ClientDef->compassIconWidth;
                  v61 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassTacMapVehicleScale, "compassTacMapVehicleScale");
                  v94 = *(float *)&v61 * v60;
                  v53 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  v48 = "compassTacMapVehicleScale";
                  v49 = DVARFLT_compassTacMapVehicleScale;
                }
                else if ( CgCompassSystemMP::IsBigMapMinimap(v102) )
                {
                  v50 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  v51 = *(float *)&v50 * (float)ClientDef->compassIconWidth;
                  if ( compassTypea == COMPASS_TYPE_FULL )
                  {
                    v52 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassBigMapVehicleScaleFull, "compassBigMapVehicleScaleFull");
                    v94 = *(float *)&v52 * v51;
                    v53 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v48 = "compassBigMapVehicleScaleFull";
                    v49 = DVARFLT_compassBigMapVehicleScaleFull;
                  }
                  else
                  {
                    v54 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassBigMapVehicleScalePartial, "compassBigMapVehicleScalePartial");
                    v94 = *(float *)&v54 * v51;
                    v53 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v48 = "compassBigMapVehicleScalePartial";
                    v49 = DVARFLT_compassBigMapVehicleScalePartial;
                  }
                }
                else
                {
                  v55 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  v56 = *(float *)&v55 * (float)ClientDef->compassIconWidth;
                  if ( compassTypea == COMPASS_TYPE_FULL )
                  {
                    v57 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassFullMapVehicleScale, "compassFullMapVehicleScale");
                    v94 = *(float *)&v57 * v56;
                    v53 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v48 = "compassFullMapVehicleScale";
                    v49 = DVARFLT_compassFullMapVehicleScale;
                  }
                  else
                  {
                    v58 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassVehicleScalePartial, "compassVehicleScalePartial");
                    v94 = *(float *)&v58 * v56;
                    v53 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v48 = "compassVehicleScalePartial";
                    v49 = DVARFLT_compassVehicleScalePartial;
                  }
                }
                v46 = *(float *)&v53 * (float)ClientDef->compassIconHeight;
              }
              v62 = Dvar_GetFloat_Internal_DebugName(v49, v48);
              v63 = *(float *)&v62 * v46;
              width = *(float *)&v62 * v46;
              if ( cgameGlob->m_isMLGSpectator )
              {
                v64 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                compassIconWidth = (float)ClientDef->compassIconWidth;
                if ( compassTypea )
                {
                  v94 = *(float *)&v64 * compassIconWidth;
                  v71 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  v63 = *(float *)&v71 * (float)ClientDef->compassIconHeight;
                }
                else
                {
                  v66 = *(float *)&v64 * compassIconWidth;
                  v67 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGMapVehicleScalePartial, "compassMLGMapVehicleScalePartial");
                  v94 = *(float *)&v67 * v66;
                  v68 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  v69 = *(float *)&v68 * (float)ClientDef->compassIconHeight;
                  v70 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGMapVehicleScalePartial, "compassMLGMapVehicleScalePartial");
                  v63 = *(float *)&v70 * v69;
                }
                width = v63;
                if ( largeMap )
                {
                  v72 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorVehicleScale, "compassIconMLGSpectatorVehicleScale");
                  v94 = *(float *)&v72 * v94;
                  v73 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorVehicleScale, "compassIconMLGSpectatorVehicleScale");
                  v63 = width * *(float *)&v73;
                  width = width * *(float *)&v73;
                }
              }
              currentPosition.v[0] = v20 + currentPosition.v[0];
              currentPosition.v[1] = v21 + currentPosition.v[1];
              clippedPosition.v[0] = v20 + clippedPosition.v[0];
              clippedPosition.v[1] = v21 + clippedPosition.v[1];
              if ( v42 )
              {
                v74 = CalcCompassVehicleClippedDistanceScale(&currentPosition, &clippedPosition, 0);
                v75 = *(float *)&v74;
                v63 = width;
              }
              else
              {
                v75 = FLOAT_1_0;
              }
              v25 = currentVehicleDrawType;
              if ( currentVehicleDrawType != 1 || v75 >= 0.5 )
              {
                if ( v42 )
                {
                  v94 = v75 * v94;
                  width = v63 * v75;
                }
                if ( material )
                {
                  v100 = 0.0;
                  v76 = compassTypea;
                  v77 = v102;
                }
                else
                {
                  v78 = outAngle - Entity->pose.angles.v[1];
                  v79 = AngleNormalize360(v78);
                  v100 = *(float *)&v79;
                  v76 = compassTypea;
                  v77 = v102;
                  CgCompassSystem::WorldYawToCompass(v102, compassTypea, cgameGlob, v78, &v100);
                }
                if ( v76 == COMPASS_TYPE_TACMAP && CG_CalloutMarkerPing_TacmapIsLookingAtEntity((LocalClientNum_t)v15, v27->entIndex) )
                {
                  TacmapLookAtScale = CG_CalloutMarkerPing_GetTacmapLookAtScale((LocalClientNum_t)v15);
                  if ( *(float *)&TacmapLookAtScale > 0.0 )
                  {
                    v94 = (float)(*(float *)&TacmapLookAtScale + 1.0) * v94;
                    width = (float)(*(float *)&TacmapLookAtScale + 1.0) * width;
                  }
                }
                _XMM1 = LODWORD(v114.v[3]);
                __asm
                {
                  vcmpltss xmm0, xmm10, xmm1
                  vblendvps xmm0, xmm1, xmm10, xmm0
                }
                v114.v[3] = *(float *)&_XMM0;
                if ( !material )
                  material = compassEnemyAltIcon->textureTable->image;
                if ( v77->IsVehicleMini(v77, v76) )
                  material = cgMedia.objectiveMiniIconVehicle;
                v25 = currentVehicleDrawType;
                vertAlign = v105->vertAlign;
                horzAlign = v105->horzAlign;
                ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v15);
                if ( currentVehicleDrawType == 1 )
                {
                  ScrPlace_ApplyRect(ActivePlacement, (float *)&currentPosition, (float *)&currentPosition + 1, &v94, &width, horzAlign, vertAlign);
                  v87 = currentPosition.v[1];
                  v88 = currentPosition.v[0];
                }
                else
                {
                  ScrPlace_ApplyRect(ActivePlacement, (float *)&clippedPosition, (float *)&clippedPosition + 1, &v94, &width, horzAlign, vertAlign);
                  v87 = clippedPosition.v[1];
                  v88 = clippedPosition.v[0];
                }
                LUI_Render_DrawQuadRotated((const LocalClientNum_t)v15, v107, v88, v87, v94, width, 0.0, 0.0, 1.0, 1.0, v100, v114.v[0], v114.v[1], v114.v[2], v114.v[3], material, v106);
              }
              memset(&outOrigin, 0, sizeof(outOrigin));
              v19 = cgameGlob;
              v23 = v99;
              goto LABEL_88;
            }
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
          v23 = v99;
          v19 = cgameGlob;
          goto LABEL_87;
        }
LABEL_73:
        compassEnemyAltIcon = ClientDef->compassFriendlyAltIcon;
        if ( !compassEnemyAltIcon )
          compassEnemyAltIcon = ClientDef->compassFriendlyIcon;
        goto LABEL_75;
      }
    }
  }
LABEL_89:
  memset(&out, 0, sizeof(out));
}

/*
==============
VehicleHud_HostilesCallback
==============
*/
void VehicleHud_HostilesCallback(LocalClientNum_t localClientNum, void (*func)(LocalClientNum_t, const DObj *, const vec3_t *))
{
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  int v7; 
  int *p_entIndex; 
  bool v9; 
  int v10; 
  const characterInfo_t *v11; 
  centity_t *Entity; 
  team_t v13; 
  unsigned int number; 
  unsigned int v15; 
  unsigned int v16; 
  const DObj *v17; 
  __int64 v18; 
  __int64 v19; 
  vec3_t outOrigin; 
  CgStatic *v22; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->nextSnap )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v22 = LocalClientStatics;
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 384, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      team = CharacterInfo->team;
      v7 = 0;
      p_entIndex = &CgVehicleSystem::GetVehicleSystem(localClientNum)->m_vehicleClients[0].entIndex;
      v9 = 1;
      do
      {
        if ( !v9 )
        {
          LODWORD(v19) = 128;
          LODWORD(v18) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        if ( CG_Vehicle_IsClientValid(localClientNum, (const VehicleClient *)(p_entIndex - 20)) )
        {
          v10 = p_entIndex[7];
          if ( v10 != LocalClientGlobals->predictedPlayerState.clientNum )
          {
            v11 = CgStatic::GetCharacterInfo(LocalClientStatics, v10);
            if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 407, ASSERT_TYPE_ASSERT, "(vehCI)", (const char *)&queryFormat, "vehCI") )
              __debugbreak();
            Entity = CG_GetEntity(localClientNum, *p_entIndex);
            if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 410, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
              __debugbreak();
            v13 = v11->team;
            if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
              __debugbreak();
            if ( (team == TEAM_ZERO || team != v13) && !CG_Entity_IsNoDraw(localClientNum, &Entity->nextState, NULL) )
            {
              number = Entity->nextState.number;
              if ( number > 0x9E4 )
              {
                LODWORD(v19) = Entity->nextState.number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v19) )
                  __debugbreak();
              }
              if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
              {
                LODWORD(v19) = 2;
                LODWORD(v18) = localClientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
                  __debugbreak();
              }
              v15 = 2533 * localClientNum + number;
              if ( v15 >= 0x13CA )
              {
                LODWORD(v19) = v15;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v19) )
                  __debugbreak();
              }
              v16 = clientObjMap[v15];
              if ( v16 )
              {
                if ( v16 >= (unsigned int)s_objCount )
                {
                  LODWORD(v19) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v19) )
                    __debugbreak();
                }
                v17 = (const DObj *)s_objBuf[v16];
                if ( v17 )
                {
                  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
                  func(localClientNum, v17, &outOrigin);
                  memset(&outOrigin, 0, sizeof(outOrigin));
                }
              }
            }
            LocalClientStatics = v22;
          }
        }
        ++v7;
        p_entIndex += 147;
        v9 = (unsigned int)v7 < 0x80;
      }
      while ( v7 < 128 );
    }
  }
}

