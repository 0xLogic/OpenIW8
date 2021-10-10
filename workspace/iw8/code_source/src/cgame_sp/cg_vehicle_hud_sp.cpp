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
  __int128 v6; 
  __int64 v9; 
  cg_t *v10; 
  CgCompassSystem *v11; 
  const dvar_t *v13; 
  CgVehicleSystem *v14; 
  float v15; 
  int v16; 
  int v17; 
  const VehicleClient *m_vehicleClients; 
  bool v19; 
  const VehicleDef *ClientDef; 
  __int64 entIndex; 
  CgEntitySystem *v22; 
  __int64 v23; 
  Material *compassFriendlyAltIcon; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v29; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  CgCompassSystem *v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  float v45; 
  float v46; 
  const dvar_t *v47; 
  float v48; 
  float v49; 
  double v50; 
  float v54; 
  int vertAlign; 
  int horzAlign; 
  float v57; 
  float v58; 
  bool v59; 
  const ScreenPlacement *v60; 
  float *y; 
  float *ya; 
  float *w; 
  float *wa; 
  vec2_t in[2]; 
  CompassType compassTypea; 
  float v67; 
  __int64 v68; 
  cg_t *cgameGlob; 
  const VehicleClient *v70; 
  float outAngle; 
  int v72; 
  int v73[3]; 
  rectDef_s *recta; 
  CgVehicleSystem *v75; 
  CgCompassSystem *v76; 
  SecureVec3 out; 
  __int64 v78; 
  vec2_t outClipped; 
  rectDef_s x; 
  vec4_t v81; 
  vec2_t outVector; 

  v78 = -2i64;
  recta = (rectDef_s *)rect;
  compassTypea = compassType;
  v9 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v9] )
  {
    LODWORD(w) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", w) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(w) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", w) )
      __debugbreak();
  }
  v10 = cg_t::ms_cgArray[v9];
  cgameGlob = v10;
  if ( v10->nextSnap )
  {
    if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
    {
      LODWORD(w) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", w) )
        __debugbreak();
    }
    if ( (unsigned int)v9 >= CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(w) = CgCompassSystem::ms_allocatedCount;
      LODWORD(y) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
        __debugbreak();
    }
    if ( !CgCompassSystem::ms_compassSystemArray[v9] )
    {
      LODWORD(w) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", w) )
        __debugbreak();
    }
    v11 = CgCompassSystem::ms_compassSystemArray[v9];
    v76 = v11;
    *(double *)&v6 = CgCompassSystem::GetIconFadeAlpha(v11, (const LocalClientNum_t)v9, compassType);
    _XMM12 = v6;
    if ( *(float *)&v6 != 0.0 )
    {
      v13 = DVARBOOL_compassHideVehicles;
      if ( !DVARBOOL_compassHideVehicles || (Dvar_CheckFrontendServerThread(DVARBOOL_compassHideVehicles), !v13->current.enabled) )
      {
        if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
        {
          LODWORD(w) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", w) )
            __debugbreak();
        }
        if ( (unsigned int)v9 >= CgVehicleSystem::ms_allocatedCount )
        {
          LODWORD(w) = CgVehicleSystem::ms_allocatedCount;
          LODWORD(y) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, w) )
            __debugbreak();
        }
        if ( !CgVehicleSystem::ms_vehicleSystemArray[v9] )
        {
          LODWORD(w) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", w) )
            __debugbreak();
        }
        v75 = CgVehicleSystem::ms_vehicleSystemArray[v9];
        v14 = v75;
        CG_CompassCalcDimensions(compassType, v10, parentRect, recta, &x.x, &x.y, &x.w, &x.h);
        v15 = (float)(0.5 * x.w) + x.x;
        *(float *)&v16 = (float)(0.5 * x.h) + x.y;
        v72 = v16;
        v81 = *color;
        CgCompassSystem::GetCompassYaw(v11, compassType, 0, v10, &outAngle, &outVector);
        CG_CalcPlayerPos(&out, (LocalClientNum_t)v9);
        v17 = 0;
        LODWORD(v68) = 0;
        m_vehicleClients = v14->m_vehicleClients;
        v70 = m_vehicleClients;
        v19 = 1;
        while ( 1 )
        {
          if ( !v19 )
          {
            LODWORD(wa) = 128;
            LODWORD(ya) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          if ( !CG_Vehicle_IsClientValid((LocalClientNum_t)v9, m_vehicleClients) )
            goto LABEL_94;
          ClientDef = CgVehicleSystem::GetClientDef(m_vehicleClients);
          entIndex = m_vehicleClients->entIndex;
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(wa) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", wa) )
              __debugbreak();
          }
          if ( (unsigned int)v9 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(wa) = CgEntitySystem::ms_allocatedCount;
            LODWORD(ya) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v9] )
          {
            LODWORD(wa) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", wa) )
              __debugbreak();
          }
          v22 = CgEntitySystem::ms_entitySystemArray[v9];
          if ( (unsigned int)entIndex >= 0x800 )
          {
            LODWORD(wa) = 2048;
            LODWORD(ya) = entIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          v23 = (__int64)&v22->m_entities[entIndex];
          if ( (v22->m_entities[entIndex].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_hud_sp.cpp", 76, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
            __debugbreak();
          if ( v10->clientNum )
          {
            LODWORD(wa) = 1;
            LODWORD(ya) = v10->clientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_hud_sp.cpp", 78, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->clientNum ) < (unsigned)( 1 )", "cgameGlob->clientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", ya, wa) )
              __debugbreak();
          }
          if ( v75->GetTeam(v75, &v22->m_entities[entIndex].nextState) == TEAM_TWO )
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
          m_vehicleClients = v70;
          v10 = cgameGlob;
LABEL_94:
          v17 = v68 + 1;
          LODWORD(v68) = v17;
          v70 = ++m_vehicleClients;
          v19 = (unsigned int)v17 < 0x80;
          if ( v17 >= 128 )
            goto LABEL_95;
        }
        if ( !v22->m_entities[entIndex].pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v22->m_entities[entIndex].pose.origin.Get_origin, &v22->m_entities[entIndex].pose);
        FunctionPointer_origin(&v22->m_entities[entIndex].pose.origin.origin.origin, (vec3_t *)in);
        if ( v22->m_entities[entIndex].pose.isPosePrecise )
        {
          _XMM0 = LODWORD(in[0].v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v29;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          in[0].v[0] = *(float *)&_XMM2;
          _XMM0 = LODWORD(in[0].v[1]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v29;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          in[0].v[1] = *(float *)&_XMM2;
          _XMM0 = LODWORD(in[1].v[0]);
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v29 = *(double *)&_XMM0 * 0.000244140625;
          _XMM1 = v29;
          __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
          in[1].v[0] = *(float *)&_XMM2;
        }
        p_view = &cgameGlob->refdef.view;
        if ( cgameGlob == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
          __debugbreak();
        refdefViewOrg_aab = p_view->refdefViewOrg_aab;
        v = (_DWORD *)p_view->org.org.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
          __debugbreak();
        v73[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
        v73[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
        v73[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
        v42 = v76;
        if ( CgCompassSystem::WorldPosToCompass(v76, compassTypea, 0, &x, boundsRadius, &outVector, (const vec2_t *)&out, in, NULL, &outClipped) )
        {
          v43 = DVARBOOL_compassClampIcons;
          if ( !DVARBOOL_compassClampIcons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassClampIcons") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v43);
          if ( !v43->current.enabled )
          {
            memset(v73, 0, sizeof(v73));
LABEL_92:
            memset(in, 0, 0xCui64);
            goto LABEL_93;
          }
        }
        v44 = DVARFLT_compassSize;
        if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v44);
        v46 = (float)ClientDef->compassIconWidth * v44->current.value;
        v45 = v46;
        v47 = DVARFLT_compassSize;
        if ( !DVARFLT_compassSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "compassSize") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v47);
        v48 = (float)ClientDef->compassIconHeight * v47->current.value;
        outClipped.v[0] = (float)(v15 - (float)(v46 * 0.5)) + outClipped.v[0];
        outClipped.v[1] = (float)(*(float *)&v16 - (float)(v48 * 0.5)) + outClipped.v[1];
        v49 = outAngle - *(float *)(v23 + 76);
        v50 = AngleNormalize360(v49);
        v67 = *(float *)&v50;
        CgCompassSystem::WorldYawToCompass(v42, compassTypea, cgameGlob, v49, &v67);
        _XMM1 = LODWORD(v81.v[3]);
        __asm
        {
          vcmpltss xmm0, xmm12, xmm1
          vblendvps xmm0, xmm1, xmm12, xmm0
        }
        v81.v[3] = *(float *)&_XMM0;
        v54 = v67;
        vertAlign = recta->vertAlign;
        horzAlign = recta->horzAlign;
        v57 = outClipped.v[1];
        v58 = outClipped.v[0];
        if ( activeScreenPlacementMode )
        {
          if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
          {
            v60 = &scrPlaceViewDisplay[v9];
            goto LABEL_91;
          }
          if ( activeScreenPlacementMode == SCRMODE_INVALID )
            v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
          else
            v59 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
          if ( v59 )
            __debugbreak();
        }
        v60 = &scrPlaceFull;
LABEL_91:
        CG_DrawRotatedPic(v60, v58, v57, v45, v48, horzAlign, vertAlign, v54, &v81, compassFriendlyAltIcon);
        memset(v73, 0, sizeof(v73));
        v16 = v72;
        goto LABEL_92;
      }
    }
  }
LABEL_95:
  memset(&out, 0, sizeof(out));
}

