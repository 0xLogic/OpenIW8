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
  const dvar_t *v18; 
  const dvar_t *v19; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float y; 
  float ya; 
  float yb; 
  float yc; 
  float w; 
  float h; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  char v55[12]; 
  float x; 
  float v57; 
  float v58; 
  float alphaOffset[3]; 
  cg_t *cgameGlob[2]; 
  vec4_t quadVerts[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  cgameGlob[0] = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( cgameGlob[0]->nextSnap )
  {
    v18 = DVARBOOL_compassHideVehicles;
    if ( !DVARBOOL_compassHideVehicles || (Dvar_CheckFrontendServerThread(DVARBOOL_compassHideVehicles), !v18->current.enabled) )
    {
      if ( compassType )
        goto LABEL_11;
      v19 = DVARBOOL_compassVehicleUseMapMask;
      if ( !DVARBOOL_compassVehicleUseMapMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassVehicleUseMapMask") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled && mapMask )
      {
        CG_CompassCalcDimensions(COMPASS_TYPE_PARTIAL, cgameGlob[0], parentRect, rect, &x, &v57, &v58, alphaOffset);
        LUI_Render_GetViewportSize(localClientNum, (vec2_t *)cgameGlob);
        vertAlign = rect->vertAlign;
        horzAlign = rect->horzAlign;
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        ScrPlace_ApplyRect(ActivePlacement, &x, &v57, &v58, alphaOffset, horzAlign, vertAlign);
        __asm
        {
          vmovss  xmm1, [rsp+188h+var_DC]; top
          vaddss  xmm3, xmm1, [rsp+188h+alphaOffset]; bottom
          vmovss  xmm0, [rsp+188h+x]; left
          vaddss  xmm2, xmm0, [rsp+188h+var_D8]; right
        }
        LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+188h+quadVerts+24h]
          vsubss  xmm7, xmm4, dword ptr [rsp+188h+quadVerts+4]
          vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm3, dword ptr [rsp+188h+quadVerts+10h]
          vsubss  xmm6, xmm3, dword ptr [rsp+188h+quadVerts]
          vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vaddss  xmm0, xmm4, dword ptr [rsp+188h+quadVerts+4]
          vmulss  xmm2, xmm0, cs:__real@3f000000; maskCenterY
          vaddss  xmm0, xmm3, dword ptr [rsp+188h+quadVerts]
          vmulss  xmm1, xmm0, cs:__real@3f000000; maskCenterX
          vmovss  xmm4, cs:__real@3f800000
          vmovss  [rsp+188h+var_128], xmm4
          vmovss  [rsp+188h+var_130], xmm4
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rsp+188h+var_138], xmm0
          vmovss  dword ptr [rsp+188h+var_140], xmm0
          vmovss  dword ptr [rsp+188h+h], xmm0
          vmovss  dword ptr [rsp+188h+w], xmm4
          vmovss  dword ptr [rsp+188h+y], xmm0
          vmovss  dword ptr [rsp+188h+fmt], xmm7
          vmovaps xmm3, xmm6; maskWidth
        }
        LUI_Render_PushMask(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, y, w, h, 0, v51, v52, v53, v54, (const vec2_t *)cgameGlob, mapMask);
        __asm
        {
          vmovss  xmm6, [rsp+188h+boundsRadius]
          vmovss  dword ptr [rsp+188h+y], xmm6
        }
        DrawVehicles(localClientNum, COMPASS_TYPE_PARTIAL, cropPartialMap, parentRect, rect, ya, PRODUCE_SMOKE, color, largeMap, element, luaVM);
        LUI_Render_PopMask(localClientNum);
        __asm { vmovss  dword ptr [rsp+188h+y], xmm6 }
        DrawVehicles(localClientNum, COMPASS_TYPE_PARTIAL, cropPartialMap, parentRect, rect, yb, (const VehicleDrawType)2, color, largeMap, element, luaVM);
      }
      else
      {
LABEL_11:
        __asm
        {
          vmovss  xmm0, [rsp+188h+boundsRadius]
          vmovss  dword ptr [rsp+188h+y], xmm0
        }
        DrawVehicles(localClientNum, compassType, cropPartialMap, parentRect, rect, yc, (const VehicleDrawType)0, color, largeMap, element, luaVM);
      }
    }
  }
  memset(v55, 0, sizeof(v55));
  __asm
  {
    vmovaps xmm6, [rsp+188h+var_58]
    vmovaps xmm7, [rsp+188h+var_68]
  }
}

/*
==============
DrawVehicles
==============
*/
void DrawVehicles(LocalClientNum_t localClientNum, CompassType compassType, bool cropPartialMap, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, int currentVehicleDrawType, const vec4_t *color, const bool largeMap, LUIElement *element, lua_State *luaVM)
{
  __int64 v24; 
  CgCompassSystemMP *v25; 
  char v28; 
  const dvar_t *v29; 
  cg_t *v30; 
  char v38; 
  unsigned int v39; 
  __int64 v40; 
  int v41; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *v45; 
  unsigned int flags; 
  int v47; 
  const VehicleDef *ClientDef; 
  centity_t *Entity; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  team_t team; 
  CgMLGSpectator *MLGSpectator; 
  team_t v55; 
  BOOL v56; 
  Material *compassEnemyAltIcon; 
  const GfxImage *material; 
  __int64 defIndex; 
  bool v61; 
  const char *v71; 
  const dvar_t *v72; 
  const char *v75; 
  const dvar_t *v76; 
  CompassType v108; 
  CgCompassSystemMP *v109; 
  char v112; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float fmta; 
  float *y; 
  float *ya; 
  float yb; 
  float *w; 
  float *wa; 
  float wb; 
  float h; 
  float v138; 
  float outClipped; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float width; 
  float v146; 
  char v147; 
  char v148; 
  CompassType compassTypea; 
  bool v150; 
  unsigned int v151; 
  float v152; 
  cg_t *cgameGlob; 
  CgCompassSystemMP *v154; 
  float outAngle; 
  vec3_t outOrigin; 
  const rectDef_s *v157; 
  lua_State *v158; 
  LUIElement *v159; 
  __int64 v160; 
  CgStatic *LocalClientStatics; 
  SecureVec3 out; 
  __int64 v163; 
  vec2_t currentPosition; 
  vec2_t clippedPosition; 
  vec4_t v166; 
  rectDef_s x; 
  vec2_t outVector; 
  char v169; 
  void *retaddr; 

  _RAX = &retaddr;
  v163 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
  }
  v150 = cropPartialMap;
  compassTypea = compassType;
  v24 = localClientNum;
  v157 = rect;
  v159 = element;
  v158 = luaVM;
  cgameGlob = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( cgameGlob->nextSnap )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v24, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
      __debugbreak();
    if ( (unsigned int)v24 >= CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(w) = CgCompassSystem::ms_allocatedCount;
      LODWORD(y) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
        __debugbreak();
    }
    if ( !CgCompassSystem::ms_compassSystemArray[v24] )
    {
      LODWORD(w) = v24;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", w) )
        __debugbreak();
    }
    v25 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v24];
    v154 = v25;
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(v25, (const LocalClientNum_t)v24, compassType);
    __asm
    {
      vmovaps xmm10, xmm0
      vxorps  xmm7, xmm7, xmm7
      vucomiss xmm0, xmm7
    }
    if ( !v28 )
    {
      v29 = DVARBOOL_compassHideVehicles;
      if ( !DVARBOOL_compassHideVehicles || (Dvar_CheckFrontendServerThread(DVARBOOL_compassHideVehicles), !v29->current.enabled) )
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v24);
        v30 = cgameGlob;
        CG_CompassCalcDimensions(compassType, cgameGlob, parentRect, rect, &x.x, &x.y, &x.w, &x.h);
        __asm
        {
          vmovss  xmm9, cs:__real@3f000000
          vmulss  xmm1, xmm9, [rbp+110h+var_E0]
          vaddss  xmm11, xmm1, [rbp+110h+x]
          vmulss  xmm0, xmm9, [rbp+110h+var_DC]
          vaddss  xmm12, xmm0, [rbp+110h+var_E4]
        }
        _RAX = color;
        __asm
        {
          vmovups xmm1, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+110h+var_F8], xmm1
        }
        CgCompassSystem::GetCompassYaw(v25, compassType, cropPartialMap, cgameGlob, &outAngle, &outVector);
        CG_CalcPlayerPos(&out, (LocalClientNum_t)v24);
        v38 = DVARBOOL_bg_compassEnableVisibleVehiclesMask && Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_compassEnableVisibleVehiclesMask, "bg_compassEnableVisibleVehiclesMask");
        v148 = v38;
        if ( CG_GameInterface_PlayingBR() || CG_GameInterface_PlayingBRTDM() || CG_GameInterface_PlayingGroundWar() || (v147 = 0, CG_GameInterface_PlayingGWReinforce()) )
          v147 = 1;
        v39 = 0;
        v151 = 0;
        v40 = 0i64;
        v160 = 0i64;
        v41 = currentVehicleDrawType;
        __asm
        {
          vmovss  xmm13, [rbp+110h+boundsRadius]
          vmovss  xmm8, cs:__real@3f800000
        }
        while ( 1 )
        {
          VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v24);
          if ( v39 >= 0x80 )
          {
            LODWORD(wa) = 128;
            LODWORD(ya) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          v45 = &VehicleSystem->m_vehicleClients[v40];
          if ( !CG_Vehicle_IsClientValid((LocalClientNum_t)v24, v45) )
            goto LABEL_88;
          flags = v45->flags;
          if ( (flags & 0x20000) != 0 )
            goto LABEL_88;
          if ( v41 != 2 )
            break;
          if ( (flags & 0x80000) != 0 )
            goto LABEL_34;
LABEL_88:
          v151 = ++v39;
          v40 = ++v160;
          v38 = v148;
          if ( (int)v39 >= 128 )
            goto LABEL_89;
        }
        v47 = flags & 0x80000;
        if ( v41 == 1 && v47 )
          goto LABEL_88;
LABEL_34:
        if ( CG_CalloutMarkerPing_CheckSquadPingsForTarget((LocalClientNum_t)v24, v45->entIndex, 0xFFFFFFFF, -1) != 53 )
          goto LABEL_88;
        if ( v38 )
        {
          if ( v39 >= 0x80 )
          {
            LODWORD(wa) = 128;
            LODWORD(ya) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", ya, wa) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v39 & 0x1F)) & v30->predictedPlayerState.visibleMinimapVehiclesMask.array[(unsigned __int64)v39 >> 5]) != 0 )
            goto LABEL_88;
        }
        ClientDef = CgVehicleSystem::GetClientDef(v45);
        Entity = CG_GetEntity((const LocalClientNum_t)v24, v45->entIndex);
        if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        if ( v154->IsVehicleFiltered(v154, compassTypea, Entity) )
        {
LABEL_87:
          v41 = currentVehicleDrawType;
          goto LABEL_88;
        }
        clientNum = v30->predictedPlayerState.clientNum;
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
          MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v24);
          team = CgMLGSpectator::GetTeam(MLGSpectator);
        }
        v55 = VehicleSystem->GetTeam(VehicleSystem, &Entity->nextState);
        if ( cgameGlob->m_isMLGSpectator )
        {
          v56 = v55 != TEAM_TWO;
          goto LABEL_63;
        }
        if ( team )
        {
          if ( team == v55 )
            goto LABEL_62;
        }
        else if ( cgameGlob->predictedPlayerState.clientNum == v45->playerIndex )
        {
LABEL_62:
          v56 = 0;
          goto LABEL_63;
        }
        v56 = 1;
LABEL_63:
        if ( v55 )
        {
          if ( !v56 )
          {
            CgCompassSystemMP::GetFriendlyCompassColor(v154, &v166, (CgGlobalsMP *)cgameGlob);
            goto LABEL_73;
          }
          CgCompassSystemMP::GetEnemyCompassColor(v154, &v166, (CgGlobalsMP *)cgameGlob);
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?colorWhiteFaded@@3Tvec4_t@@B; vec4_t const colorWhiteFaded
            vmovss  dword ptr [rbp+110h+var_F8], xmm0
            vmovss  xmm1, dword ptr cs:?colorWhiteFaded@@3Tvec4_t@@B+4; vec4_t const colorWhiteFaded
            vmovss  dword ptr [rbp+110h+var_F8+4], xmm1
            vmovss  xmm0, dword ptr cs:?colorWhiteFaded@@3Tvec4_t@@B+8; vec4_t const colorWhiteFaded
            vmovss  dword ptr [rbp+110h+var_F8+8], xmm0
          }
        }
        if ( v56 )
        {
          compassEnemyAltIcon = ClientDef->compassEnemyAltIcon;
          if ( !compassEnemyAltIcon )
            compassEnemyAltIcon = ClientDef->compassEnemyIcon;
LABEL_75:
          material = NULL;
          if ( v147 )
          {
            if ( v45->defIndex >= 0x80u )
            {
              LODWORD(wa) = 128;
              LODWORD(ya) = v45->defIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_vehicle_hud_mp.cpp", 177, ASSERT_TYPE_ASSERT, "(unsigned)( veh->defIndex ) < (unsigned)( 128 )", "veh->defIndex doesn't index MAX_VEHICLE_DEF_GAME_CACHE\n\t%i not in [0, %i)", ya, wa) )
                __debugbreak();
            }
            defIndex = v45->defIndex;
            if ( cgMedia.compass.vehicleMediaArray[defIndex].miniIcon )
              material = cgMedia.compass.vehicleMediaArray[defIndex].miniIcon;
          }
          if ( compassEnemyAltIcon )
          {
            CG_GetPoseOrigin(&Entity->pose, &outOrigin);
            __asm { vmovss  dword ptr [rsp+220h+fmt], xmm13 }
            v61 = CgCompassSystem::WorldPosToCompass(v154, compassTypea, v150, &x, fmt, &outVector, (const vec2_t *)&out, (const vec2_t *)&outOrigin, &currentPosition, &clippedPosition);
            if ( !v61 || Dvar_GetBool_Internal_DebugName(DVARBOOL_compassClampIcons, "compassClampIcons") && !CG_GameInterface_MinimapHidePinnedVehicleTest(v45->flags, &currentPosition, &clippedPosition) )
            {
              if ( material )
              {
                v71 = "compassVehicleSizeMini";
                v72 = DCONST_DVARFLT_compassVehicleSizeMini;
                goto LABEL_92;
              }
              if ( (*(_BYTE *)CgCompassSystem::GetCurrentCompassDisplayType(v154) & 2) != 0 )
              {
                v71 = "radialSensorIconSize";
                v72 = DCONST_DVARFLT_radialSensorIconSize;
LABEL_92:
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v72, v71);
                __asm { vmovaps xmm6, xmm0 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                __asm
                {
                  vmulss  xmm1, xmm0, xmm6
                  vmovss  [rbp+110h+var_18C], xmm1
                }
                v75 = "compassSize";
                v76 = DVARFLT_compassSize;
              }
              else
              {
                if ( compassTypea == COMPASS_TYPE_TACMAP || v147 )
                {
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  __asm
                  {
                    vxorps  xmm1, xmm1, xmm1
                    vcvtsi2ss xmm1, xmm1, dword ptr [r14+0D10h]
                    vmulss  xmm6, xmm0, xmm1
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassTacMapVehicleScale, "compassTacMapVehicleScale");
                  __asm
                  {
                    vmulss  xmm1, xmm0, xmm6
                    vmovss  [rbp+110h+var_18C], xmm1
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  v75 = "compassTacMapVehicleScale";
                  v76 = DVARFLT_compassTacMapVehicleScale;
                }
                else if ( CgCompassSystemMP::IsBigMapMinimap(v154) )
                {
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  __asm
                  {
                    vxorps  xmm1, xmm1, xmm1
                    vcvtsi2ss xmm1, xmm1, dword ptr [r14+0D10h]
                    vmulss  xmm6, xmm0, xmm1
                  }
                  if ( compassTypea == COMPASS_TYPE_FULL )
                  {
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassBigMapVehicleScaleFull, "compassBigMapVehicleScaleFull");
                    __asm
                    {
                      vmulss  xmm1, xmm0, xmm6
                      vmovss  [rbp+110h+var_18C], xmm1
                    }
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v75 = "compassBigMapVehicleScaleFull";
                    v76 = DVARFLT_compassBigMapVehicleScaleFull;
                  }
                  else
                  {
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassBigMapVehicleScalePartial, "compassBigMapVehicleScalePartial");
                    __asm
                    {
                      vmulss  xmm1, xmm0, xmm6
                      vmovss  [rbp+110h+var_18C], xmm1
                    }
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v75 = "compassBigMapVehicleScalePartial";
                    v76 = DVARFLT_compassBigMapVehicleScalePartial;
                  }
                }
                else
                {
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  __asm
                  {
                    vxorps  xmm1, xmm1, xmm1
                    vcvtsi2ss xmm1, xmm1, dword ptr [r14+0D10h]
                    vmulss  xmm6, xmm0, xmm1
                  }
                  if ( compassTypea == COMPASS_TYPE_FULL )
                  {
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassFullMapVehicleScale, "compassFullMapVehicleScale");
                    __asm
                    {
                      vmulss  xmm1, xmm0, xmm6
                      vmovss  [rbp+110h+var_18C], xmm1
                    }
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v75 = "compassFullMapVehicleScale";
                    v76 = DVARFLT_compassFullMapVehicleScale;
                  }
                  else
                  {
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassVehicleScalePartial, "compassVehicleScalePartial");
                    __asm
                    {
                      vmulss  xmm1, xmm0, xmm6
                      vmovss  [rbp+110h+var_18C], xmm1
                    }
                    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                    v75 = "compassVehicleScalePartial";
                    v76 = DVARFLT_compassVehicleScalePartial;
                  }
                }
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, dword ptr [r14+0D14h]
                  vmulss  xmm6, xmm0, xmm1
                }
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v76, v75);
              __asm
              {
                vmulss  xmm3, xmm0, xmm6
                vmovss  [rbp+110h+width], xmm3
              }
              if ( cgameGlob->m_isMLGSpectator )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, dword ptr [r14+0D10h]
                }
                if ( compassTypea )
                {
                  __asm
                  {
                    vmulss  xmm0, xmm0, xmm1
                    vmovss  [rbp+110h+var_18C], xmm0
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  __asm
                  {
                    vxorps  xmm1, xmm1, xmm1
                    vcvtsi2ss xmm1, xmm1, dword ptr [r14+0D14h]
                    vmulss  xmm3, xmm0, xmm1
                  }
                }
                else
                {
                  __asm { vmulss  xmm6, xmm0, xmm1 }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGMapVehicleScalePartial, "compassMLGMapVehicleScalePartial");
                  __asm
                  {
                    vmulss  xmm1, xmm0, xmm6
                    vmovss  [rbp+110h+var_18C], xmm1
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassSize, "compassSize");
                  __asm
                  {
                    vxorps  xmm1, xmm1, xmm1
                    vcvtsi2ss xmm1, xmm1, dword ptr [r14+0D14h]
                    vmulss  xmm6, xmm0, xmm1
                  }
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassMLGMapVehicleScalePartial, "compassMLGMapVehicleScalePartial");
                  __asm { vmulss  xmm3, xmm0, xmm6 }
                }
                __asm { vmovss  [rbp+110h+width], xmm3 }
                if ( largeMap )
                {
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorVehicleScale, "compassIconMLGSpectatorVehicleScale");
                  __asm
                  {
                    vmulss  xmm0, xmm0, [rbp+110h+var_18C]
                    vmovss  [rbp+110h+var_18C], xmm0
                  }
                  Dvar_GetFloat_Internal_DebugName(DVARFLT_compassIconMLGSpectatorVehicleScale, "compassIconMLGSpectatorVehicleScale");
                  __asm
                  {
                    vmovss  xmm1, [rbp+110h+width]
                    vmulss  xmm3, xmm1, xmm0
                    vmovss  [rbp+110h+width], xmm3
                  }
                }
              }
              __asm
              {
                vaddss  xmm1, xmm11, dword ptr [rbp+110h+currentPosition]
                vmovss  dword ptr [rbp+110h+currentPosition], xmm1
                vaddss  xmm0, xmm12, dword ptr [rbp+110h+currentPosition+4]
                vmovss  dword ptr [rbp+110h+currentPosition+4], xmm0
                vaddss  xmm2, xmm11, dword ptr [rbp+110h+clippedPosition]
                vmovss  dword ptr [rbp+110h+clippedPosition], xmm2
                vaddss  xmm1, xmm12, dword ptr [rbp+110h+clippedPosition+4]
                vmovss  dword ptr [rbp+110h+clippedPosition+4], xmm1
              }
              if ( v61 )
              {
                *(double *)&_XMM0 = CalcCompassVehicleClippedDistanceScale(&currentPosition, &clippedPosition, 0);
                __asm
                {
                  vmovaps xmm2, xmm0
                  vmovss  xmm3, [rbp+110h+width]
                }
              }
              else
              {
                __asm { vmovaps xmm2, xmm8 }
              }
              if ( currentVehicleDrawType == 1 )
                __asm { vcomiss xmm2, xmm9 }
              if ( v61 )
              {
                __asm
                {
                  vmulss  xmm1, xmm2, [rbp+110h+var_18C]
                  vmovss  [rbp+110h+var_18C], xmm1
                  vmulss  xmm2, xmm3, xmm2
                  vmovss  [rbp+110h+width], xmm2
                }
              }
              if ( material )
              {
                __asm { vmovss  [rbp+110h+var_178], xmm7 }
                v108 = compassTypea;
                v109 = v154;
              }
              else
              {
                __asm
                {
                  vmovss  xmm0, [rbp+110h+outAngle]
                  vsubss  xmm0, xmm0, dword ptr [r12+4Ch]; angle
                }
                *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
                __asm
                {
                  vmovss  [rbp+110h+var_178], xmm0
                  vmovaps xmm3, xmm0; in
                }
                v108 = compassTypea;
                v109 = v154;
                CgCompassSystem::WorldYawToCompass(v154, compassTypea, cgameGlob, *(const float *)&_XMM3, &v152);
              }
              if ( v108 == COMPASS_TYPE_TACMAP && CG_CalloutMarkerPing_TacmapIsLookingAtEntity((LocalClientNum_t)v24, v45->entIndex) )
              {
                *(double *)&_XMM0 = CG_CalloutMarkerPing_GetTacmapLookAtScale((LocalClientNum_t)v24);
                __asm { vcomiss xmm0, xmm7 }
                if ( !(v112 | v28) )
                {
                  __asm
                  {
                    vaddss  xmm3, xmm0, xmm8
                    vmulss  xmm1, xmm3, [rbp+110h+var_18C]
                    vmovss  [rbp+110h+var_18C], xmm1
                    vmulss  xmm0, xmm3, [rbp+110h+width]
                    vmovss  [rbp+110h+width], xmm0
                  }
                }
              }
              __asm
              {
                vmovss  xmm1, dword ptr [rbp+110h+var_F8+0Ch]
                vcmpltss xmm0, xmm10, xmm1
                vblendvps xmm0, xmm1, xmm10, xmm0
                vmovss  dword ptr [rbp+110h+var_F8+0Ch], xmm0
              }
              if ( !material )
                material = compassEnemyAltIcon->textureTable->image;
              if ( v109->IsVehicleMini(v109, v108) )
                material = cgMedia.objectiveMiniIconVehicle;
              v41 = currentVehicleDrawType;
              vertAlign = v157->vertAlign;
              horzAlign = v157->horzAlign;
              ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v24);
              if ( currentVehicleDrawType == 1 )
              {
                ScrPlace_ApplyRect(ActivePlacement, (float *)&currentPosition, (float *)&currentPosition + 1, &v146, &width, horzAlign, vertAlign);
                __asm
                {
                  vmovss  xmm3, dword ptr [rbp+110h+currentPosition+4]
                  vmovss  xmm2, dword ptr [rbp+110h+currentPosition]
                }
              }
              else
              {
                ScrPlace_ApplyRect(ActivePlacement, (float *)&clippedPosition, (float *)&clippedPosition + 1, &v146, &width, horzAlign, vertAlign);
                __asm
                {
                  vmovss  xmm3, dword ptr [rbp+110h+clippedPosition+4]; centerY
                  vmovss  xmm2, dword ptr [rbp+110h+clippedPosition]; centerX
                }
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+110h+var_F8+0Ch]
                vmovss  dword ptr [rsp+220h+var_1B0], xmm0
                vmovss  xmm1, dword ptr [rbp+110h+var_F8+8]
                vmovss  [rsp+220h+var_1B8], xmm1
                vmovss  xmm0, dword ptr [rbp+110h+var_F8+4]
                vmovss  [rsp+220h+var_1C0], xmm0
                vmovss  xmm1, dword ptr [rbp+110h+var_F8]
                vmovss  [rsp+220h+var_1C8], xmm1
                vmovss  xmm0, [rbp+110h+var_178]
                vmovss  [rsp+220h+var_1D0], xmm0
                vmovss  dword ptr [rsp+220h+outClipped], xmm8
                vmovss  dword ptr [rsp+220h+var_1E0], xmm8
                vmovss  dword ptr [rsp+220h+h], xmm7
                vmovss  dword ptr [rsp+220h+w], xmm7
                vmovss  xmm0, [rbp+110h+width]
                vmovss  dword ptr [rsp+220h+y], xmm0
                vmovss  xmm1, [rbp+110h+var_18C]
                vmovss  dword ptr [rsp+220h+fmt], xmm1
              }
              LUI_Render_DrawQuadRotated((const LocalClientNum_t)v24, v159, *(float *)&_XMM2, *(float *)&_XMM3, fmta, yb, wb, h, v138, outClipped, v140, v141, v142, v143, v144, material, v158);
              memset(&outOrigin, 0, sizeof(outOrigin));
              v30 = cgameGlob;
              v39 = v151;
              goto LABEL_88;
            }
            memset(&outOrigin, 0, sizeof(outOrigin));
          }
          v39 = v151;
          v30 = cgameGlob;
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
  _R11 = &v169;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
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

