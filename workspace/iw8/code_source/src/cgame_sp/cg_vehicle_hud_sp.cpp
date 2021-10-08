/*
==============
CG_VehicleHudSP_DrawCompass
==============
*/

void __fastcall CG_VehicleHudSP_DrawCompass(LocalClientNum_t localClientNum, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color)
{
  ?CG_VehicleHudSP_DrawCompass@@YAXW4LocalClientNum_t@@W4CompassType@@PEBUrectDef_s@@2MAEBTvec4_t@@@Z(localClientNum, compassType, parentRect, rect, boundsRadius, color);
}

/*
==============
CG_VehicleHudSP_DrawCompass
==============
*/
void CG_VehicleHudSP_DrawCompass(LocalClientNum_t localClientNum, CompassType compassType, const rectDef_s *parentRect, const rectDef_s *rect, const float boundsRadius, const vec4_t *color)
{
  __int64 v21; 
  cg_t *v22; 
  CgCompassSystem *v23; 
  char v26; 
  const dvar_t *v27; 
  CgVehicleSystem *v28; 
  int v36; 
  const VehicleClient *m_vehicleClients; 
  bool v40; 
  const VehicleDef *ClientDef; 
  __int64 entIndex; 
  CgEntitySystem *v43; 
  Material *compassFriendlyAltIcon; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  CgCompassSystem *v60; 
  const dvar_t *v61; 
  const dvar_t *v62; 
  const dvar_t *v66; 
  int vertAlign; 
  int horzAlign; 
  bool v86; 
  const ScreenPlacement *v87; 
  float fmt; 
  float fmta; 
  float *y; 
  float *ya; 
  float *w; 
  float *wa; 
  float h; 
  vec2_t in[2]; 
  CompassType compassTypea; 
  float v111; 
  __int64 v112; 
  cg_t *cgameGlob; 
  const VehicleClient *v114; 
  float outAngle; 
  int v117[3]; 
  rectDef_s *recta; 
  CgVehicleSystem *v119; 
  CgCompassSystem *v120; 
  SecureVec3 out; 
  __int64 v122; 
  vec2_t outClipped; 
  rectDef_s x; 
  vec4_t v125; 
  vec2_t outVector; 
  char v127; 
  void *retaddr; 

  _RAX = &retaddr;
  v122 = -2i64;
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
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  recta = (rectDef_s *)rect;
  compassTypea = compassType;
  v21 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v21] )
  {
    LODWORD(w) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", w) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(w) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", w) )
      __debugbreak();
  }
  v22 = cg_t::ms_cgArray[v21];
  cgameGlob = v22;
  if ( v22->nextSnap )
  {
    if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
    {
      LODWORD(w) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", w) )
        __debugbreak();
    }
    if ( (unsigned int)v21 >= CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(w) = CgCompassSystem::ms_allocatedCount;
      LODWORD(y) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
        __debugbreak();
    }
    if ( !CgCompassSystem::ms_compassSystemArray[v21] )
    {
      LODWORD(w) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", w) )
        __debugbreak();
    }
    v23 = CgCompassSystem::ms_compassSystemArray[v21];
    v120 = v23;
    *(double *)&_XMM0 = CgCompassSystem::GetIconFadeAlpha(v23, (const LocalClientNum_t)v21, compassType);
    __asm
    {
      vmovaps xmm12, xmm0
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
    }
    if ( !v26 )
    {
      v27 = DVARBOOL_compassHideVehicles;
      if ( !DVARBOOL_compassHideVehicles || (Dvar_CheckFrontendServerThread(DVARBOOL_compassHideVehicles), !v27->current.enabled) )
      {
        if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
        {
          LODWORD(w) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", w) )
            __debugbreak();
        }
        if ( (unsigned int)v21 >= CgVehicleSystem::ms_allocatedCount )
        {
          LODWORD(w) = CgVehicleSystem::ms_allocatedCount;
          LODWORD(y) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        if ( !CgVehicleSystem::ms_vehicleSystemArray[v21] )
        {
          LODWORD(w) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", w) )
            __debugbreak();
        }
        v119 = CgVehicleSystem::ms_vehicleSystemArray[v21];
        v28 = v119;
        CG_CompassCalcDimensions(compassType, v22, parentRect, recta, &x.x, &x.y, &x.w, &x.h);
        __asm
        {
          vmovss  xmm13, cs:__real@3f000000
          vmulss  xmm1, xmm13, [rbp+0F0h+var_110]
          vaddss  xmm15, xmm1, [rbp+0F0h+x]
          vmulss  xmm0, xmm13, [rbp+0F0h+var_10C]
          vaddss  xmm8, xmm0, [rbp+0F0h+var_114]
          vmovss  [rbp+0F0h+var_16C], xmm8
        }
        _RAX = color;
        __asm
        {
          vmovups xmm1, xmmword ptr [rax]
          vmovups xmmword ptr [rbp+0F0h+var_100], xmm1
        }
        CgCompassSystem::GetCompassYaw(v23, compassType, 0, v22, &outAngle, &outVector);
        CG_CalcPlayerPos(&out, (LocalClientNum_t)v21);
        v36 = 0;
        LODWORD(v112) = 0;
        m_vehicleClients = v28->m_vehicleClients;
        v114 = m_vehicleClients;
        __asm
        {
          vmovss  xmm14, [rbp+0F0h+boundsRadius]
          vmovsd  xmm11, cs:__real@3f30000000000000
        }
        v40 = 1;
        while ( 1 )
        {
          if ( !v40 )
          {
            LODWORD(wa) = 128;
            LODWORD(ya) = v36;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          if ( !CG_Vehicle_IsClientValid((LocalClientNum_t)v21, m_vehicleClients) )
            goto LABEL_94;
          ClientDef = CgVehicleSystem::GetClientDef(m_vehicleClients);
          entIndex = m_vehicleClients->entIndex;
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(wa) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", wa) )
              __debugbreak();
          }
          if ( (unsigned int)v21 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(wa) = CgEntitySystem::ms_allocatedCount;
            LODWORD(ya) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v21] )
          {
            LODWORD(wa) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", wa) )
              __debugbreak();
          }
          v43 = CgEntitySystem::ms_entitySystemArray[v21];
          if ( (unsigned int)entIndex >= 0x800 )
          {
            LODWORD(wa) = 2048;
            LODWORD(ya) = entIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          if ( (v43->m_entities[entIndex].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_hud_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
            __debugbreak();
          if ( v22->clientNum )
          {
            LODWORD(wa) = 1;
            LODWORD(ya) = v22->clientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_hud_sp.cpp", 78, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->clientNum ) < (unsigned)( 1 )", "cgameGlob->clientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          if ( v119->GetTeam(v119, &v43->m_entities[entIndex].nextState) == TEAM_TWO )
          {
            compassFriendlyAltIcon = ClientDef->compassFriendlyAltIcon;
            if ( compassFriendlyAltIcon )
              break;
            compassFriendlyAltIcon = ClientDef->compassFriendlyIcon;
          }
          else
          {
            compassFriendlyAltIcon = ClientDef->compassEnemyAltIcon;
            if ( compassFriendlyAltIcon )
              break;
            compassFriendlyAltIcon = ClientDef->compassEnemyIcon;
          }
          if ( compassFriendlyAltIcon )
            break;
LABEL_93:
          m_vehicleClients = v114;
          v22 = cgameGlob;
LABEL_94:
          v36 = v112 + 1;
          LODWORD(v112) = v36;
          v114 = ++m_vehicleClients;
          v40 = (unsigned int)v36 < 0x80;
          if ( v36 >= 128 )
            goto LABEL_95;
        }
        if ( !v43->m_entities[entIndex].pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v43->m_entities[entIndex].pose.origin.Get_origin, &v43->m_entities[entIndex].pose);
        FunctionPointer_origin(&v43->m_entities[entIndex].pose.origin.origin.origin, (vec3_t *)in);
        if ( v43->m_entities[entIndex].pose.isPosePrecise )
        {
          __asm
          {
            vmovd   xmm0, dword ptr [rsp+1F0h+in]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm11
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  dword ptr [rsp+1F0h+in], xmm2
            vmovd   xmm0, dword ptr [rsp+1F0h+in+4]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm11
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  dword ptr [rsp+1F0h+in+4], xmm2
            vmovd   xmm0, [rsp+1F0h+var_198]
            vcvtdq2pd xmm0, xmm0
            vmulsd  xmm1, xmm0, xmm11
            vcvtsd2ss xmm2, xmm1, xmm1
            vmovss  [rsp+1F0h+var_198], xmm2
          }
        }
        p_view = &cgameGlob->refdef.view;
        if ( cgameGlob == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        refdefViewOrg_aab = p_view->refdefViewOrg_aab;
        v = (_DWORD *)p_view->org.org.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        v117[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
        v117[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
        v117[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
        __asm { vmovss  dword ptr [rsp+1F0h+fmt], xmm14 }
        v60 = v120;
        if ( CgCompassSystem::WorldPosToCompass(v120, compassTypea, 0, &x, fmt, &outVector, (const vec2_t *)&out, in, NULL, &outClipped) )
        {
          v61 = DVARBOOL_compassClampIcons;
          if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v61);
          if ( !v61->current.enabled )
          {
            memset(v117, 0, sizeof(v117));
LABEL_92:
            memset(in, 0, 0xCui64);
            goto LABEL_93;
          }
        }
        v62 = DVARFLT_compassSize;
        if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v62);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r13+0D10h]
          vmulss  xmm6, xmm0, dword ptr [rdi+28h]
        }
        v66 = DVARFLT_compassSize;
        if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v66);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [r13+0D14h]
          vmulss  xmm7, xmm0, dword ptr [rdi+28h]
          vmulss  xmm1, xmm6, xmm13
          vsubss  xmm2, xmm15, xmm1
          vaddss  xmm2, xmm2, dword ptr [rbp+0F0h+var_120]
          vmovss  dword ptr [rbp+0F0h+var_120], xmm2
          vmulss  xmm1, xmm7, xmm13
          vsubss  xmm3, xmm8, xmm1
          vaddss  xmm2, xmm3, dword ptr [rbp+0F0h+var_120+4]
          vmovss  dword ptr [rbp+0F0h+var_120+4], xmm2
          vmovss  xmm1, [rbp+0F0h+outAngle]
          vsubss  xmm0, xmm1, dword ptr [rsi+4Ch]; angle
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovss  [rsp+1F0h+var_18C], xmm0
          vmovaps xmm3, xmm0; in
        }
        CgCompassSystem::WorldYawToCompass(v60, compassTypea, cgameGlob, *(const float *)&_XMM3, &v111);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+0F0h+var_100+0Ch]
          vcmpltss xmm0, xmm12, xmm1
          vblendvps xmm0, xmm1, xmm12, xmm0
          vmovss  dword ptr [rbp+0F0h+var_100+0Ch], xmm0
          vmovss  xmm8, [rsp+1F0h+var_18C]
        }
        vertAlign = recta->vertAlign;
        horzAlign = recta->horzAlign;
        __asm
        {
          vmovss  xmm9, dword ptr [rbp+0F0h+var_120+4]
          vmovss  xmm10, dword ptr [rbp+0F0h+var_120]
        }
        if ( activeScreenPlacementMode )
        {
          if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
          {
            v87 = &scrPlaceViewDisplay[v21];
            goto LABEL_91;
          }
          if ( activeScreenPlacementMode == SCRMODE_INVALID )
            v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
          else
            v86 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
          if ( v86 )
            __debugbreak();
        }
        v87 = &scrPlaceFull;
LABEL_91:
        __asm
        {
          vmovss  dword ptr [rsp+1F0h+h], xmm8
          vmovss  dword ptr [rsp+1F0h+fmt], xmm7
          vmovaps xmm3, xmm6; width
          vmovaps xmm2, xmm9; y
          vmovaps xmm1, xmm10; x
        }
        CG_DrawRotatedPic(v87, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, horzAlign, vertAlign, h, &v125, compassFriendlyAltIcon);
        memset(v117, 0, sizeof(v117));
        __asm { vmovss  xmm8, [rbp+0F0h+var_16C] }
        goto LABEL_92;
      }
    }
  }
LABEL_95:
  memset(&out, 0, sizeof(out));
  _R11 = &v127;
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
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

