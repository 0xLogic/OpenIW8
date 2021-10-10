/*
==============
CG_Draw2dHudElems
==============
*/

void __fastcall CG_Draw2dHudElems(LocalClientNum_t localClientNum, int uilayer)
{
  ?CG_Draw2dHudElems@@YAXW4LocalClientNum_t@@H@Z(localClientNum, uilayer);
}

/*
==============
CG_DrawWaypoint
==============
*/

void __fastcall CG_DrawWaypoint(LocalClientNum_t localClientNum, WaypointDrawArgs *args)
{
  ?CG_DrawWaypoint@@YAXW4LocalClientNum_t@@PEAUWaypointDrawArgs@@@Z(localClientNum, args);
}

/*
==============
CG_GetWaypointOffsetForStance
==============
*/

double __fastcall CG_GetWaypointOffsetForStance(LocalClientNum_t localClientNum, centity_t *cent)
{
  double result; 

  *(float *)&result = ?CG_GetWaypointOffsetForStance@@YAMW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
  return result;
}

/*
==============
CG_AddDrawSurfsFor3dHudElems
==============
*/

void __fastcall CG_AddDrawSurfsFor3dHudElems(LocalClientNum_t localClientNum)
{
  ?CG_AddDrawSurfsFor3dHudElems@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ShouldDrawWaypoints
==============
*/

bool __fastcall CG_ShouldDrawWaypoints(LocalClientNum_t localClientNum)
{
  return ?CG_ShouldDrawWaypoints@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TranslateHudElemMessage
==============
*/

void __fastcall CG_TranslateHudElemMessage(LocalClientNum_t localClientNum, const char *message, const char *messageType, char *hudElemString, const int hudElemStringLength)
{
  ?CG_TranslateHudElemMessage@@YAXW4LocalClientNum_t@@PEBD1QEADH@Z(localClientNum, message, messageType, hudElemString, hudElemStringLength);
}

/*
==============
AlignHudElemY
==============
*/
float AlignHudElemY(int alignOrg, float y, float height)
{
  __int64 v3; 

  v3 = alignOrg & 3;
  if ( (unsigned int)v3 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 388, ASSERT_TYPE_ASSERT, "( ( alignY == 0 || alignY == 1 || alignY == 2 ) )", "( alignOrg ) = %i", alignOrg) )
    __debugbreak();
  return y - (float)(height * s_alignScale[v3]);
}

/*
==============
CG_AddDrawSurfsFor3dHudElems
==============
*/
void CG_AddDrawSurfsFor3dHudElems(LocalClientNum_t localClientNum)
{
  CgDrawSystem *DrawSystem; 
  cg_t *LocalClientGlobals; 
  size_t v4; 
  size_t v5; 
  const hudelem_t **v6; 
  int v7; 
  int v8; 
  char Base[2048]; 

  DrawSystem = CgDrawSystem::GetDrawSystem(localClientNum);
  if ( DrawSystem->ShouldDrawHud(DrawSystem) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v4 = LocalClientGlobals->GetInUseHudElems(LocalClientGlobals, (const hudelem_t **)Base);
    v5 = v4;
    qsort(Base, v4, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_hudelems);
    if ( (unsigned int)v4 > 0x100 )
    {
      v8 = 256;
      v7 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 2046, ASSERT_TYPE_ASSERT, "( elemCount ) <= ( ( sizeof( *array_counter( elems ) ) + 0 ) )", "elemCount not in [0, ARRAY_COUNT( elems )]\n\t%u not in [0, %u]", v7, v8) )
        __debugbreak();
    }
    if ( (_DWORD)v4 )
    {
      v6 = (const hudelem_t **)Base;
      do
      {
        if ( (*v6)->type == HE_TYPE_WAYPOINT )
          CG_HudElem_AddDrawSurfForHudElemWaypoint(localClientNum, *v6);
        ++v6;
        --v5;
      }
      while ( v5 );
    }
  }
}

/*
==============
CG_Draw2dHudElems
==============
*/
void CG_Draw2dHudElems(LocalClientNum_t localClientNum, int uilayer)
{
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  signed __int64 v8; 
  int pm_type; 
  bool v10; 
  CgMLGSpectator *MLGSpectator; 
  bool m_isMLGSpectator; 
  signed __int64 i; 
  bool v14; 
  int v15; 
  bool v16; 
  __int64 v17; 
  __int64 Base[256]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1846, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", "%s\n\tShould not be rendering hud elems without a valid world state", "cgameGlob->nextSnap") )
    __debugbreak();
  v5 = CG_GetLocalClientGlobals(localClientNum);
  v6 = v5->GetInUseHudElems(v5, (const hudelem_t **)Base);
  v7 = (int)v6;
  qsort(Base, v6, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_hudelems);
  v8 = v7;
  if ( v7 > 0x100 )
  {
    LODWORD(v17) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1849, ASSERT_TYPE_ASSERT, "( elemCount ) <= ( ( sizeof( *array_counter( elems ) ) + 0 ) )", "elemCount not in [0, ARRAY_COUNT( elems )]\n\t%u not in [0, %u]", v17, 256) )
      __debugbreak();
  }
  if ( (_DWORD)v7 )
  {
    ScrPlace_SetLegacySplitscreenScaling();
    pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
    v10 = 1;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) && CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_isMLGSpectator )
    {
      MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
      v10 = CgMLGSpectator::GetWaypointsEnabled(MLGSpectator) != 0;
    }
    m_isMLGSpectator = 0;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
      m_isMLGSpectator = CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_isMLGSpectator;
    if ( (int)v7 > 0 )
    {
      for ( i = 0i64; i < v8; ++i )
      {
        if ( (pm_type < 7 || (*(_BYTE *)(Base[i] + 180) & 2) == 0) && (!LocalClientGlobals->renderingThirdPerson || (*(_DWORD *)(Base[i] + 180) & 0x800) == 0) )
        {
          if ( uilayer )
          {
            switch ( uilayer )
            {
              case 1:
                v14 = (*(_DWORD *)(Base[i] + 180) & 0x101) == 257;
                break;
              case 3:
                v14 = (*(_DWORD *)(Base[i] + 180) & 0x101) == 1;
                break;
              case 2:
                v14 = (*(_DWORD *)(Base[i] + 180) & 0x101) == 0;
                break;
              default:
                goto LABEL_28;
            }
          }
          else
          {
            v14 = (*(_DWORD *)(Base[i] + 180) & 0x101) == 256;
          }
          if ( v14 )
          {
LABEL_28:
            v15 = *(_DWORD *)(Base[i] + 180);
            if ( m_isMLGSpectator )
              v16 = (v15 & 0x10000) == 0;
            else
              v16 = (*(_DWORD *)(Base[i] + 180) & 0x8000) == 0;
            if ( v16 && ((v15 & 4) == 0 || !UI_AnyMenuActive(localClientNum)) && (v10 || *(_DWORD *)Base[i] != 13) )
              CG_HudElem_DrawSingleHudElem2d(localClientNum, (const hudelem_t *)Base[i]);
          }
        }
      }
    }
    ScrPlace_SetNormalSplitscreenScaling();
  }
}

/*
==============
CG_DrawWaypoint
==============
*/
void CG_DrawWaypoint(LocalClientNum_t localClientNum, WaypointDrawArgs *args)
{
  __int64 v2; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v6; 
  const ScreenPlacement *v7; 
  __int128 v8; 
  __int128 v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  float arrowWidth; 
  const dvar_t *v14; 
  float v15; 
  float arrowHeight; 
  __int128 v18; 
  const dvar_t *v19; 
  float v21; 
  float value; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  const dvar_t *v38; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  const dvar_t *v42; 
  char v43; 
  char v44; 
  float Alpha; 
  bool v47; 
  float v48; 
  bool v49; 
  char v50; 
  char v51; 
  float v52; 
  float v53; 
  float v54; 
  unsigned __int8 v57; 
  float v59; 
  float v60; 
  float v64; 
  const dvar_t *v65; 
  float v66; 
  double Float_Internal_DebugName; 
  bool v68; 
  float v69; 
  float v70; 
  float v71; 
  float scale; 
  float v73; 
  char v74; 
  char v75; 
  vec4_t v76; 
  float ScaleForDistance; 
  float ScreenCenterFadeScaler; 
  CgGlobalsMP *LocalClientGlobals; 
  CgCompassSystemMP *v80; 
  __int128 v82; 
  const dvar_t *v85; 
  float v86; 
  const dvar_t *v87; 
  float v88; 
  GfxFont *FontHandle; 
  float v90; 
  const char *label; 
  float v92; 
  float v93; 
  GfxFont *v94; 
  int v95; 
  __int64 padBottom; 
  vec2_t *outNormal; 
  float *outDist; 
  __int64 angle; 
  float anglea; 
  float v101; 
  float v102; 
  float h; 
  float w; 
  float v105; 
  float rotation; 
  vec2_t screenPos; 
  vec4_t color4; 
  vec4_t color; 
  vec4_t x; 
  vec2_t outScreenPos; 

  v2 = localClientNum;
  _XMM7 = LODWORD(FLOAT_1_0);
  v105 = FLOAT_1_0;
  if ( !args && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1424, ASSERT_TYPE_ASSERT, "(args)", (const char *)&queryFormat, "args") )
    __debugbreak();
  if ( !args->arrowMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1425, ASSERT_TYPE_ASSERT, "(args->arrowMaterial)", (const char *)&queryFormat, "args->arrowMaterial") )
    __debugbreak();
  ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v2);
  v6 = DVARFLT_waypointIconWidth;
  v7 = ActivePlacement;
  v8 = LODWORD(ActivePlacement->scaleVirtualToReal.v[1]);
  *(float *)&v8 = (float)(ActivePlacement->scaleVirtualToReal.v[1] + ActivePlacement->scaleVirtualToReal.v[0]) * 0.5;
  v9 = v8;
  if ( !DVARFLT_waypointIconWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointIconWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v10 = v6->current.value * args->scale;
  v11 = DVARFLT_waypointIconHeight;
  v102 = v10 * v7->scaleVirtualToReal.v[0];
  if ( !DVARFLT_waypointIconHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointIconHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = (float)(v11->current.value * args->scale) * v7->scaleVirtualToReal.v[1];
  arrowWidth = args->arrowWidth;
  v14 = DVARFLT_waypointOffscreenDistanceThresholdAlpha;
  v15 = *(float *)&v9 * args->arrowFadeDistance;
  v101 = v12;
  arrowHeight = args->arrowHeight;
  w = arrowWidth * v7->scaleVirtualToReal.v[0];
  h = arrowHeight * v7->scaleVirtualToReal.v[1];
  if ( !DVARFLT_waypointOffscreenDistanceThresholdAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenDistanceThresholdAlpha") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v18 = v9;
  *(float *)&v18 = *(float *)&v9 * v14->current.value;
  _XMM0 = v18;
  v19 = DVARFLT_waypointOffscreenPadLeft;
  __asm { vmaxss  xmm15, xmm0, cs:__real@3dcccccd }
  v21 = (float)(0.5 * h) + v15;
  if ( !DVARFLT_waypointOffscreenPadLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadLeft") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  value = v19->current.value;
  v23 = DVARFLT_waypointOffscreenPadRight;
  v24 = (float)(value * v7->scaleVirtualToReal.v[0]) + v21;
  if ( !DVARFLT_waypointOffscreenPadRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadRight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  v25 = v23->current.value;
  v26 = DVARFLT_waypointOffscreenPadTop;
  v27 = (float)(v25 * v7->scaleVirtualToReal.v[0]) + v21;
  if ( !DVARFLT_waypointOffscreenPadTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadTop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v28 = v26->current.value;
  v29 = DVARFLT_waypointOffscreenPadBottom;
  v30 = (float)(v28 * v7->scaleVirtualToReal.v[1]) + v21;
  if ( !DVARFLT_waypointOffscreenPadBottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadBottom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v31 = v7->scaleVirtualToReal.v[1];
  v32 = (float)(v31 * v29->current.value) + v21;
  v33 = v31 * args->offsetY;
  if ( CL_IsRenderingSplitScreen() )
  {
    v34 = DVARFLT_waypointSplitscreenScale;
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    v35 = v102 * v34->current.value;
    v36 = DVARFLT_waypointSplitscreenScale;
    v102 = v35;
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    v37 = v101 * v36->current.value;
    v38 = DVARFLT_waypointSplitscreenScale;
    v101 = v37;
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = w * v38->current.value;
    v40 = DVARFLT_waypointSplitscreenScale;
    w = v39;
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v41 = h * v40->current.value;
    v42 = DVARFLT_waypointSplitscreenScale;
    h = v41;
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    v15 = v15 * v42->current.value;
  }
  color4 = args->color4;
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v2, v7, &args->worldPos, &outScreenPos);
  v43 = *((_BYTE *)args + 104);
  v44 = v43;
  outScreenPos.v[1] = v33 + outScreenPos.v[1];
  screenPos = outScreenPos;
  if ( (v43 & 2) != 0 )
  {
    Alpha = UpdateFadeAndGetAlpha((LocalClientNum_t)v2, args, v7, &screenPos);
    v43 = *((_BYTE *)args + 104);
    v44 = v43;
    v105 = Alpha;
  }
  rotation = args->rotation;
  _XMM8 = 0i64;
  if ( v43 < 0 || (*((_BYTE *)args + 105) & 2) != 0 )
  {
    v49 = ClampScreenPosToEdges((LocalClientNum_t)v2, &screenPos, v24, v27, v30, v32, (vec2_t *)&color, x.v);
    v43 = *((_BYTE *)args + 104);
    v47 = v49;
    v48 = x.v[0];
    v44 = v43;
  }
  else
  {
    v47 = 0;
    v48 = 0.0;
  }
  v50 = v43;
  v51 = v44;
  v52 = color.v[1];
  v53 = color.v[0];
  if ( !v47 || v48 <= 0.0 )
  {
    v54 = rotation;
    goto LABEL_70;
  }
  if ( (v43 & 8) != 0 )
  {
    v54 = (float)(atan2f_0(color.v[0], COERCE_FLOAT(LODWORD(color.v[1]) ^ _xmm)) * 57.295776) + 180.0;
    v50 = v43;
    v51 = v44;
LABEL_70:
    v64 = v105;
    v73 = FLOAT_0_5;
    goto LABEL_71;
  }
  _XMM0 = v43 & 1;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  v57 = v43 & 0x10;
  __asm { vblendvps xmm0, xmm7, xmm3, xmm2 }
  color.v[3] = *(float *)&_XMM0;
  color.v[0] = FLOAT_1_0;
  color.v[1] = FLOAT_1_0;
  color.v[2] = FLOAT_1_0;
  if ( v48 >= *(float *)&_XMM15 )
  {
    _XMM0 = v57;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    v59 = color.v[3];
    __asm { vblendvps xmm0, xmm8, xmm3, xmm2 }
    color4.v[3] = *(float *)&_XMM0;
  }
  else
  {
    v60 = (float)(v48 / *(float *)&_XMM15) * color.v[3];
    v59 = v60;
    color.v[3] = v60;
    if ( v57 )
      color4.v[3] = 1.0 - v60;
  }
  v64 = v105;
  if ( (v43 & 2) != 0 )
    color.v[3] = v59 * v105;
  v65 = DVARFLT_waypointOffscreenScaleLength;
  if ( !DVARFLT_waypointOffscreenScaleLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenScaleLength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  v66 = *(float *)&v9 * v65->current.value;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenScaleSmallest, "waypointOffscreenScaleSmallest");
  if ( v48 < v66 )
    *(float *)&Float_Internal_DebugName = (float)(*(float *)&Float_Internal_DebugName * (float)(v48 / v66)) + (float)(1.0 - (float)(v48 / v66));
  v68 = (*((_BYTE *)args + 105) & 2) == 0;
  v69 = *(float *)&Float_Internal_DebugName * v102;
  v70 = *(float *)&Float_Internal_DebugName * v101;
  v102 = *(float *)&Float_Internal_DebugName * v102;
  v101 = *(float *)&Float_Internal_DebugName * v101;
  v71 = 0.0;
  if ( !v68 )
  {
    scale = args->scale;
    h = scale * h;
    w = scale * w;
    v71 = fsqrt((float)((float)(v69 * v69) + (float)(v70 * v70)) * 0.25);
  }
  x.v[1] = (float)(v52 * (float)(v71 + v15)) + screenPos.v[1];
  x.v[0] = (float)(v53 * (float)(v71 + v15)) + screenPos.v[0];
  ScrPlace_HiResApplyRect(x.v, &x.v[1], &w, &h);
  v73 = FLOAT_0_5;
  anglea = atan2f_0(v53, COERCE_FLOAT(LODWORD(v52) ^ _xmm)) * 57.295776;
  CL_DrawStretchPicPhysicalRotateXY(x.v[0] - (float)(0.5 * w), x.v[1] - (float)(0.5 * h), w, h, 0.0, 0.0, 1.0, 1.0, anglea, 0, &color, args->arrowMaterial);
  v50 = *((_BYTE *)args + 104);
  v54 = rotation;
  v51 = v50;
LABEL_71:
  v74 = v51;
  if ( (v50 & 0x40) != 0 || v47 || (v50 & 0x20) == 0 || (*((_BYTE *)args + 105) & 2) != 0 )
  {
    v75 = *((_BYTE *)args + 105);
    if ( (v75 & 2) != 0 && v47 )
    {
      screenPos.v[0] = (float)(v53 * v15) + screenPos.v[0];
      screenPos.v[1] = (float)(v52 * v15) + screenPos.v[1];
    }
    else if ( (v50 & 0x40) != 0 )
    {
      v50 = v74;
      v76 = args->color4;
      screenPos = outScreenPos;
      color4 = v76;
    }
    if ( (v50 & 2) != 0 )
    {
      if ( (v50 & 4) != 0 )
        color4.v[3] = v64;
      else
        color4.v[3] = v64 * color4.v[3];
    }
    if ( (v75 & 1) == 0 )
    {
      ScaleForDistance = GetScaleForDistance((LocalClientNum_t)v2, &args->worldPos);
      v101 = ScaleForDistance * v101;
      v102 = ScaleForDistance * v102;
    }
    ScreenCenterFadeScaler = CG_GetScreenCenterFadeScaler((LocalClientNum_t)v2, v7, &screenPos);
    v68 = args->iconMaterial == NULL;
    color4.v[3] = ScreenCenterFadeScaler * color4.v[3];
    if ( !v68 )
    {
      ScrPlace_HiResApplyRect((float *)&screenPos, (float *)&screenPos + 1, &v102, &v101);
      if ( args->backgroundIconMaterial )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
        {
          LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v2);
          if ( LocalClientGlobals->m_isMLGSpectator )
          {
            if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
            {
              LODWORD(angle) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
              LODWORD(outDist) = 2;
              LODWORD(outNormal) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", outNormal, outDist, angle) )
                __debugbreak();
            }
            if ( (unsigned int)v2 >= CgCompassSystem::ms_allocatedCount )
            {
              LODWORD(outNormal) = CgCompassSystem::ms_allocatedCount;
              LODWORD(padBottom) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", padBottom, outNormal) )
                __debugbreak();
            }
            if ( !CgCompassSystem::ms_compassSystemArray[v2] )
            {
              LODWORD(outNormal) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", outNormal) )
                __debugbreak();
            }
            v80 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v2];
            CgCompassSystemMP::GetDefaultFriendlyCompassColor(v80, &color);
            color.v[3] = color4.v[3];
            if ( color.v[0] == color4.v[0] && color.v[1] == color4.v[1] && color.v[2] == color4.v[2] )
            {
              CgCompassSystemMP::GetFriendlyCompassColor(v80, &color4, LocalClientGlobals);
            }
            else
            {
              CgCompassSystemMP::GetDefaultEnemyCompassColor(v80, &x);
              x.v[3] = color4.v[3];
              if ( x.v[0] == color4.v[0] && x.v[1] == color4.v[1] && x.v[2] == color4.v[2] )
                CgCompassSystemMP::GetEnemyCompassColor(v80, &color4, LocalClientGlobals);
            }
          }
        }
        if ( color4.v[0] == 1.0 && color4.v[1] == 1.0 && color4.v[2] == 1.0 )
          color4.v[3] = color4.v[3] * 0.69999999;
        CL_DrawStretchPicPhysicalRotateXY(screenPos.v[0] - (float)(v73 * v102), screenPos.v[1] - (float)(v73 * v101), v102, v101, 0.0, 0.0, 1.0, 1.0, v54, 0, &color4, args->backgroundIconMaterial);
        v82 = LODWORD(color4.v[3]);
        *(float *)&v82 = color4.v[3] * 2.0;
        _XMM1 = v82;
        __asm
        {
          vcmpltss xmm0, xmm7, xmm1
          vblendvps xmm0, xmm1, xmm7, xmm0
        }
        color4.v[3] = *(float *)&_XMM0;
        color4.v[2] = FLOAT_1_0;
        color4.v[1] = FLOAT_1_0;
        color4.v[0] = FLOAT_1_0;
      }
      CL_DrawStretchPicPhysicalRotateXY(screenPos.v[0] - (float)(v73 * v102), screenPos.v[1] - (float)(v73 * v101), v102, v101, 0.0, 0.0, 1.0, 1.0, v54, 0, &color4, args->iconMaterial);
    }
    if ( args->label )
    {
      v85 = DVARFLT_objectiveFontSize;
      if ( !DVARFLT_objectiveFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFontSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v85);
      v86 = v85->current.value;
      v87 = DVARFLT_objectiveTextOffsetY;
      if ( !DVARFLT_objectiveTextOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveTextOffsetY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v87);
      v88 = v87->current.value * v7->scaleVirtualToReal.v[1];
      FontHandle = UI_GetFontHandle(v7, 2, v86);
      v90 = v86 * cg_hudSplitscreenScale;
      label = args->label;
      screenPos.v[1] = v88 + screenPos.v[1];
      v92 = (float)(v86 * cg_hudSplitscreenScale) * v7->scaleVirtualToReal.v[0];
      v93 = v90 * v7->scaleVirtualToReal.v[1];
      v94 = FontHandle;
      v95 = R_TextWidth(label, 0x7FFFFFFF, FontHandle);
      CL_DrawTextPhysical(args->label, 0x7FFFFFFF, v94, screenPos.v[0] - (float)((float)((float)v95 * v92) * v73), screenPos.v[1], v92, v93, &color4, 3);
    }
  }
}

/*
==============
CG_GetScreenCenterFadeScaler
==============
*/
float CG_GetScreenCenterFadeScaler(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec2_t *screenPos)
{
  const dvar_t *v5; 
  const ScreenPlacement *ActivePlacement; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v12; 
  cg_t *v13; 
  float fWeaponPosFrac; 
  const dvar_t *v15; 
  float value; 
  const dvar_t *v17; 
  __int128 v18; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1373, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  v5 = DVARFLT_waypointScreenCenterFadeRadius;
  if ( !DVARFLT_waypointScreenCenterFadeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.value <= 0.0 )
    return FLOAT_1_0;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( !ActivePlacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1379, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  v7 = 0.5 * ActivePlacement->realViewportSize.v[0];
  v8 = 0.5 * ActivePlacement->realViewportSize.v[1];
  v9 = DVARFLT_waypointScreenCenterFadeRadius;
  v10 = (float)((float)(screenPos->v[1] - v8) * (float)(screenPos->v[1] - v8)) + (float)((float)(screenPos->v[0] - v7) * (float)(screenPos->v[0] - v7));
  if ( !DVARFLT_waypointScreenCenterFadeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v10 >= (float)(v9->current.value * v9->current.value) )
    return FLOAT_1_0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v12 = DVARFLT_waypointScreenCenterFadeRadius;
  v13 = LocalClientGlobals;
  if ( !DVARFLT_waypointScreenCenterFadeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  fWeaponPosFrac = v13->predictedPlayerState.weapCommon.fWeaponPosFrac;
  v15 = DVARFLT_waypointScreenCenterFadeAdsMin;
  if ( !DVARFLT_waypointScreenCenterFadeAdsMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeAdsMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  value = v15->current.value;
  v17 = DVARFLT_waypointScreenCenterFadeHipMin;
  if ( !DVARFLT_waypointScreenCenterFadeHipMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeHipMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = LODWORD(FLOAT_1_0);
  *(float *)&v18 = (float)((float)(1.0 - fWeaponPosFrac) * v17->current.value) + (float)(fWeaponPosFrac * value);
  _XMM0 = v18;
  __asm { vmaxss  xmm0, xmm0, xmm8 }
  return *(float *)&_XMM0;
}

/*
==============
CG_GetWaypointOffsetForStance
==============
*/
float CG_GetWaypointOffsetForStance(LocalClientNum_t localClientNum, centity_t *cent)
{
  const dvar_t *v4; 
  double Float_Internal_DebugName; 
  entityType_s eType; 
  float result; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1102, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) != 0 )
  {
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    eType = cent->nextState.eType;
    if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
    {
      LODWORD(Float_Internal_DebugName) = 0;
    }
    else
    {
      result = 0.0;
      if ( GetStanceHeightFromDObj(localClientNum, cent, &result) )
      {
        *(float *)&Float_Internal_DebugName = result;
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 4u) )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointPlayerOffsetProne, "waypointPlayerOffsetProne");
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 3u) )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointPlayerOffsetCrouch, "waypointPlayerOffsetCrouch");
      }
      else
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointPlayerOffsetStand, "waypointPlayerOffsetStand");
      }
    }
  }
  else
  {
    v4 = DVARFLT_waypointPlayerOffsetCrouch;
    if ( !DVARFLT_waypointPlayerOffsetCrouch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointPlayerOffsetCrouch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    LODWORD(Float_Internal_DebugName) = v4->current.integer;
  }
  return *(float *)&Float_Internal_DebugName;
}

/*
==============
CG_HudElem_AddDrawSurfForHudElemWaypoint
==============
*/
void CG_HudElem_AddDrawSurfForHudElemWaypoint(LocalClientNum_t localClientNum, const hudelem_t *elem)
{
  cg_t *LocalClientGlobals; 
  Material *v5; 
  float height; 
  int v7; 
  int scaleTime; 
  float fromHeight; 
  __int128 v11; 
  float v12; 
  int v14; 
  double Float_Internal_DebugName; 
  const ScreenPlacement *ActivePlacement; 
  float ScreenCenterFadeScaler; 
  int v18; 
  hudelem_color_t toColor; 
  FxSprite sprite; 
  vec2_t outScreenPos; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  BG_LerpHudColors(elem, LocalClientGlobals->time, &toColor);
  if ( toColor.a )
  {
    if ( (elem->flags & 0x400) != 0 )
    {
      v5 = CG_Draw_MaterialHandleForIndex(localClientNum, elem->materialIndex);
      if ( v5 )
      {
        height = (float)elem->height;
        if ( elem->scaleTime > 0 )
        {
          v7 = CG_GetLocalClientGlobals(localClientNum)->time - elem->scaleStartTime;
          scaleTime = elem->scaleTime;
          if ( v7 < scaleTime )
          {
            fromHeight = (float)elem->fromHeight;
            if ( v7 > 0 )
            {
              v11 = 0i64;
              *(float *)&v11 = (float)v7;
              _XMM1 = v11;
              v12 = *(float *)&v11 / (float)scaleTime;
              if ( (float)(*(float *)&_XMM1 / (float)scaleTime) < 0.0 || v12 > 1.0 )
              {
                __asm { vxorpd  xmm1, xmm1, xmm1 }
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 937, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v12, *(double *)&_XMM1, DOUBLE_1_0) )
                  __debugbreak();
              }
              height = (float)((float)(height - fromHeight) * v12) + fromHeight;
            }
            else
            {
              height = (float)elem->fromHeight;
            }
          }
        }
        if ( height != 0.0 )
        {
          if ( (elem->flags & 0x200) != 0 )
            height = height * 0.0043000001;
          v14 = (elem->flags & 0x200) != 0 ? 3 : 0;
          if ( GetWaypointEntPos(localClientNum, elem, &sprite.pos) )
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointScreenCenterFadeRadius, "waypointScreenCenterFadeRadius");
            if ( *(float *)&Float_Internal_DebugName <= 0.0 || (ActivePlacement = ScrPlace_GetActivePlacement(localClientNum), !CG_WorldPosToScreenPosReal(localClientNum, ActivePlacement, &sprite.pos, &outScreenPos)) || (ScreenCenterFadeScaler = CG_GetScreenCenterFadeScaler(localClientNum, ActivePlacement, &outScreenPos), ScreenCenterFadeScaler == 1.0) )
            {
              LOBYTE(v18) = toColor.a;
            }
            else
            {
              v18 = (int)(float)((float)toColor.a * ScreenCenterFadeScaler);
              toColor.a = v18;
              if ( !(_BYTE)v18 )
                return;
            }
            sprite.rgbaColor.v[0] = (float)toColor.r * 0.0039215689;
            sprite.rgbaColor.v[1] = (float)toColor.g * 0.0039215689;
            sprite.rgbaColor.v[2] = (float)toColor.b * 0.0039215689;
            sprite.rgbaColor.v[3] = (float)(unsigned __int8)v18 * 0.0039215689;
            sprite.radius = height;
            sprite.minScreenRadius = 0.0;
            sprite.flags = v14;
            sprite.material = v5;
            FX_SpriteAdd(&sprite);
          }
        }
      }
    }
  }
}

/*
==============
CG_HudElem_DrawSingleHudElem2d
==============
*/
void CG_HudElem_DrawSingleHudElem2d(LocalClientNum_t localClientNum, const hudelem_t *elem)
{
  cg_t *LocalClientGlobals; 
  int fadeStartTime; 
  int serverTime; 
  hudelem_color_t toColor; 
  cg_hudelem_t cghe; 
  char hudElemString[1024]; 

  if ( elem->type == HE_TYPE_WAYPOINT )
  {
    if ( (elem->flags & 0x400) == 0 )
      DrawViewableWaypoint(localClientNum, elem);
  }
  else
  {
    cghe.timeNow = CG_GetLocalClientGlobals(localClientNum)->time;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1763, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    if ( elem->fadeStartTime > LocalClientGlobals->nextSnap->serverTime )
    {
      serverTime = LocalClientGlobals->nextSnap->serverTime;
      fadeStartTime = elem->fadeStartTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1764, ASSERT_TYPE_ASSERT, "( elem->fadeStartTime ) <= ( cgameGlob->nextSnap->serverTime )", "%s <= %s\n\t%i, %i", "elem->fadeStartTime", "cgameGlob->nextSnap->serverTime", fadeStartTime, serverTime) )
        __debugbreak();
    }
    BG_LerpHudColors(elem, cghe.timeNow, &toColor);
    if ( toColor.a )
    {
      HudElemColorToVec4(localClientNum, &toColor, &cghe.color);
      DrawSingleHudElem2d_GetHudElemInfo(localClientNum, elem, &cghe, hudElemString);
      if ( cghe.hudElemLabel[0] )
      {
        DrawHudElemString(localClientNum, cghe.hudElemLabel, elem, &cghe);
        cghe.x = cghe.x + cghe.labelWidth;
      }
      switch ( elem->type )
      {
        case HE_TYPE_TEXT:
        case HE_TYPE_VALUE:
        case HE_TYPE_PLAYERNAME:
        case HE_TYPE_TIMER_DOWN:
        case HE_TYPE_TIMER_UP:
        case HE_TYPE_TIMER_STATIC:
        case HE_TYPE_TENTHS_TIMER_DOWN:
        case HE_TYPE_TENTHS_TIMER_UP:
        case HE_TYPE_TENTHS_TIMER_STATIC:
        case HE_TYPE_TEXT_DEV:
          if ( cghe.hudElemText[0] )
            DrawHudElemString(localClientNum, cghe.hudElemText, elem, &cghe);
          break;
        case HE_TYPE_MATERIAL:
          DrawHudElemMaterial(localClientNum, elem, &cghe);
          break;
        case HE_TYPE_CLOCK_DOWN:
        case HE_TYPE_CLOCK_UP:
          DrawHudElemClock(localClientNum, elem, &cghe);
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1806, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
            __debugbreak();
          break;
      }
    }
  }
}

/*
==============
CG_ShouldDrawWaypoints
==============
*/
bool CG_ShouldDrawWaypoints(LocalClientNum_t localClientNum)
{
  CgMLGSpectator *MLGSpectator; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) || !CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_isMLGSpectator )
    return 1;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  return CgMLGSpectator::GetWaypointsEnabled(MLGSpectator) != 0;
}

/*
==============
CG_TranslateHudElemMessage
==============
*/
void CG_TranslateHudElemMessage(LocalClientNum_t localClientNum, const char *message, const char *messageType, char *hudElemString, const int hudElemStringLength)
{
  const char *v7; 
  const char *v9; 
  char outMsg[8]; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v7 = message;
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 87, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  if ( !hudElemString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 88, ASSERT_TYPE_ASSERT, "(hudElemString)", (const char *)&queryFormat, "hudElemString") )
    __debugbreak();
  if ( hudElemStringLength <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 89, ASSERT_TYPE_ASSERT, "(hudElemStringLength > 0)", (const char *)&queryFormat, "hudElemStringLength > 0") )
    __debugbreak();
  *(_QWORD *)outMsg = 0i64;
  v11 = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  if ( CL_Anonymization_GetGenericGameMessage(v7, messageType, outMsg, 0x20u) )
  {
    if ( !outMsg[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 96, ASSERT_TYPE_ASSERT, "(anonMsg[0] != '\\0')", (const char *)&queryFormat, "anonMsg[0] != '\\0'") )
      __debugbreak();
    v7 = outMsg;
  }
  v9 = SEH_LocalizeTextMessage(v7, messageType, LOCMSG_SAFE);
  UI_ReplaceDirective(localClientNum, v9, hudElemString, hudElemStringLength, 0);
}

/*
==============
ClampScreenPosToEdges
==============
*/
bool ClampScreenPosToEdges(LocalClientNum_t localClientNum, vec2_t *inOutPoint, float padLeft, float padRight, float padTop, float padBottom, vec2_t *outNormal, float *outDist)
{
  const ScreenPlacement *ActivePlacement; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  char v21; 
  const ScreenPlacement *v22; 
  float v23; 
  float v24; 
  float v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  __int128 v28; 
  const dvar_t *v29; 
  __int128 v30; 
  bool v31; 
  bool v32; 
  __int128 v39; 
  float v42; 
  float v43; 
  __int128 v44; 
  float v48; 
  float v49; 
  char v50; 
  char v51; 
  float v52; 
  float v53; 
  float v54; 
  __int128 v55; 
  float v56; 
  float v61; 
  float v62; 
  float v63; 

  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v11 = inOutPoint->v[0];
  v12 = inOutPoint->v[1];
  v13 = 0.5 * ActivePlacement->realViewportSize.v[0];
  v14 = 0.5 * ActivePlacement->realViewportSize.v[1];
  v15 = inOutPoint->v[0] - v13;
  inOutPoint->v[0] = v15;
  v17 = v12 - v14;
  v16 = v12 - v14;
  inOutPoint->v[1] = v12 - v14;
  v62 = v11;
  v18 = (float)(padLeft + ActivePlacement->realAdjustableMin.v[0]) - v13;
  v63 = v12;
  v19 = (float)(padTop + ActivePlacement->realAdjustableMin.v[1]) - v14;
  v20 = v13 - (float)((float)(ActivePlacement->realViewportSize.v[0] - ActivePlacement->realAdjustableMax.v[0]) + padRight);
  v21 = 0;
  v22 = ActivePlacement;
  v23 = v14 - (float)((float)(ActivePlacement->realViewportSize.v[1] - ActivePlacement->realAdjustableMax.v[1]) + padBottom);
  if ( (float)(v11 - v13) >= v18 )
  {
    if ( v15 <= v20 )
      goto LABEL_6;
    v24 = v20 / v15;
  }
  else
  {
    v24 = v18 / v15;
  }
  v16 = v17 * v24;
  v15 = v15 * v24;
  inOutPoint->v[1] = v17 * v24;
  inOutPoint->v[0] = v15;
  v21 = 1;
LABEL_6:
  if ( v16 < v19 )
  {
    v25 = v19 / v16;
LABEL_10:
    inOutPoint->v[1] = v16 * v25;
    inOutPoint->v[0] = v15 * v25;
    v21 = 1;
    goto LABEL_11;
  }
  if ( v16 > v23 )
  {
    v25 = v23 / v16;
    goto LABEL_10;
  }
LABEL_11:
  v26 = DVARBOOL_waypointOffscreenRoundedCorners;
  if ( !DVARBOOL_waypointOffscreenRoundedCorners && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenRoundedCorners") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    v27 = DVARFLT_waypointOffscreenCornerRadius;
    if ( !DVARFLT_waypointOffscreenCornerRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenCornerRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = LODWORD(v22->scaleVirtualToReal.v[1]);
    *(float *)&v28 = (float)(v22->scaleVirtualToReal.v[1] + v22->scaleVirtualToReal.v[0]) * v27->current.value;
    v29 = DVARBOOL_waypointDebugDraw;
    *(float *)&v28 = *(float *)&v28 * 0.5;
    v30 = v28;
    v31 = inOutPoint->v[0] < 0.0;
    v32 = inOutPoint->v[1] < 0.0;
    _XMM0 = v31;
    __asm { vpcmpeqd xmm1, xmm0, xmm1 }
    *(float *)&v28 = *(float *)&v28 + v18;
    _XMM2 = v28;
    __asm { vblendvps xmm2, xmm2, xmm3, xmm1 }
    v61 = *(float *)&_XMM2;
    _XMM0 = v32;
    v39 = v30;
    *(float *)&v39 = *(float *)&v30 + v19;
    _XMM2 = v39;
    __asm
    {
      vpcmpeqd xmm1, xmm0, xmm1
      vblendvps xmm2, xmm2, xmm3, xmm1
    }
    if ( !DVARBOOL_waypointDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDebugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
    {
      CL_DrawStretchPicPhysical((float)(v61 + v13) - 1.0, (float)(*(float *)&_XMM2 + v14) - 1.0, 3.0, 3.0, 0.0, 0.0, 1.0, 1.0, &colorYellow, cgMedia.whiteMaterial);
      CL_DrawStretchPicPhysical((float)(v13 + inOutPoint->v[0]) - 1.0, (float)(v14 + inOutPoint->v[1]) - 1.0, 3.0, 3.0, 0.0, 0.0, 1.0, 1.0, &colorGreen, cgMedia.whiteMaterial);
    }
    v42 = inOutPoint->v[0] - v61;
    v44 = LODWORD(inOutPoint->v[1]);
    v43 = inOutPoint->v[1] - *(float *)&_XMM2;
    *(float *)&v44 = fsqrt((float)(v43 * v43) + (float)(v42 * v42));
    _XMM6 = v44;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm8, xmm0
    }
    v48 = v42 * (float)(1.0 / *(float *)&_XMM0);
    v49 = v43 * (float)(1.0 / *(float *)&_XMM0);
    if ( v31 )
    {
      if ( v48 >= 0.0 )
      {
LABEL_25:
        v50 = 0;
        goto LABEL_26;
      }
    }
    else if ( v48 <= 0.0 )
    {
      goto LABEL_25;
    }
    v50 = 1;
LABEL_26:
    if ( v32 )
    {
      if ( v49 >= 0.0 )
      {
LABEL_28:
        v51 = 0;
LABEL_29:
        if ( v50 && v51 && *(float *)&_XMM6 > *(float *)&v30 )
        {
          inOutPoint->v[1] = (float)(v49 * *(float *)&v30) + *(float *)&_XMM2;
          inOutPoint->v[0] = (float)(v48 * *(float *)&v30) + v61;
          v21 = 1;
        }
        goto LABEL_33;
      }
    }
    else if ( v49 <= 0.0 )
    {
      goto LABEL_28;
    }
    v51 = 1;
    goto LABEL_29;
  }
LABEL_33:
  v52 = v13 + inOutPoint->v[0];
  inOutPoint->v[0] = v52;
  v53 = v14 + inOutPoint->v[1];
  inOutPoint->v[1] = v53;
  if ( v21 )
  {
    *outDist = fsqrt((float)((float)(v63 - v53) * (float)(v63 - v53)) + (float)((float)(v62 - v52) * (float)(v62 - v52)));
    v55 = LODWORD(v62);
    v54 = v62 - inOutPoint->v[0];
    outNormal->v[0] = v54;
    v56 = v63 - inOutPoint->v[1];
    *(float *)&v55 = fsqrt((float)(v54 * v54) + (float)(v56 * v56));
    _XMM2 = v55;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    outNormal->v[0] = (float)(1.0 / *(float *)&_XMM0) * v54;
    outNormal->v[1] = (float)(1.0 / *(float *)&_XMM0) * v56;
  }
  return v21 != 0;
}

/*
==============
CopyStringToHudElemString
==============
*/
void CopyStringToHudElemString(const char *string, char *hudElemString, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v8; 

  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 551, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( !hudElemString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 552, ASSERT_TYPE_ASSERT, "(hudElemString)", (const char *)&queryFormat, "hudElemString") )
    __debugbreak();
  v8 = -1i64;
  do
    ++v8;
  while ( string[v8] );
  if ( v8 < 0x400 )
  {
    memcpy_0(hudElemString, string, v8);
    hudElemString[v8] = 0;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14429FA10, 660i64, string, a5, a6);
  }
}

/*
==============
DrawHudElemClock
==============
*/
void DrawHudElemClock(LocalClientNum_t localClientNum, const hudelem_t *elem, const cg_hudelem_t *cghe)
{
  Material *v6; 
  Material *material; 
  const char *Name; 
  Material *v9; 
  int HudElemTime; 
  int duration; 
  float v12; 
  double v13; 
  float v14; 
  const ScreenPlacement *ActivePlacement; 
  float v16; 
  float v17; 
  char dest[64]; 

  if ( cghe->color.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 811, ASSERT_TYPE_ASSERT, "(cghe->color[3])", (const char *)&queryFormat, "cghe->color[3]") )
    __debugbreak();
  v6 = CG_Draw_MaterialHandleForIndex(localClientNum, elem->materialIndex);
  material = v6;
  if ( v6 )
  {
    Name = Material_GetName(v6);
    if ( !Name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 818, ASSERT_TYPE_ASSERT, "(faceMaterialName)", (const char *)&queryFormat, "faceMaterialName") )
      __debugbreak();
    Core_strcpy(dest, 0x40ui64, Name);
    I_strcat(dest, 0x40ui64, "needle");
    v9 = Material_RegisterHandle(dest, IMAGE_TRACK_HUD);
    HudElemTime = GetHudElemTime(elem, cghe->timeNow);
    duration = elem->duration;
    if ( duration )
      v12 = (float)((float)HudElemTime * 360.0) / (float)duration;
    else
      v12 = (float)HudElemTime * 0.0060000001;
    v13 = AngleNormalize360(v12);
    v14 = *(float *)&v13;
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v16 = HudElemMaterialWidth(ActivePlacement, elem, cghe);
    v17 = HudElemMaterialHeight(ActivePlacement, elem, cghe);
    *(float *)&v13 = OffsetHudElemY(elem, cghe, COERCE_FLOAT(COERCE_UNSIGNED_INT(cghe->height - v17) ^ _xmm));
    CL_DrawStretchPicPhysical(cghe->x, *(float *)&v13, v16, v17, 0.0, 0.0, 1.0, 1.0, &cghe->color, material);
    CG_DrawRotatedPicPhysical(ActivePlacement, cghe->x, *(float *)&v13, v16, v17, v14, &cghe->color, v9);
  }
}

/*
==============
DrawHudElemMaterial
==============
*/
void DrawHudElemMaterial(LocalClientNum_t localClientNum, const hudelem_t *elem, cg_hudelem_t *cghe)
{
  Material *material; 
  const dvar_t *v7; 
  const ScreenPlacement *ActivePlacement; 
  float v9; 
  const ScreenPlacement *v10; 
  float v11; 
  float v12; 
  const cg_t *LocalClientGlobals; 
  float v14; 
  const ScreenPlacement *v15; 
  vec2_t verts; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 
  float v22; 

  if ( cghe->color.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 848, ASSERT_TYPE_ASSERT, "(cghe->color[3])", (const char *)&queryFormat, "cghe->color[3]") )
    __debugbreak();
  material = CG_Draw_MaterialHandleForIndex(localClientNum, elem->materialIndex);
  if ( material )
  {
    v7 = DCONST_DVARBOOL_lui_footage_capture_enabled;
    if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.enabled && (!CG_Draw_IsMPRealismMode(localClientNum) || (elem->flags & 0x20000) != 0) )
    {
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      v9 = HudElemMaterialWidth(ActivePlacement, elem, cghe);
      v10 = ScrPlace_GetActivePlacement(localClientNum);
      v11 = HudElemMaterialHeight(v10, elem, cghe);
      v12 = OffsetHudElemY(elem, cghe, COERCE_FLOAT(COERCE_UNSIGNED_INT(cghe->height - v11) ^ _xmm));
      if ( (elem->flags & 0x4000) != 0 )
      {
        if ( !g_CG_HudLighting_Public.enable )
          return;
        CG_HudLighting_DrawRequest();
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      CG_Draw_UpdateScramblerState(LocalClientGlobals, localClientNum);
      if ( !CG_Draw_IsScramblingActive(localClientNum) )
      {
        if ( cghe->rotation == 0.0 )
        {
          CL_DrawStretchPicPhysical(cghe->x, v12, v9, v11, 0.0, 0.0, 1.0, 1.0, &cghe->color, material);
        }
        else
        {
          v14 = v9 * 0.5;
          LODWORD(verts.v[0]) = LODWORD(v14) ^ _xmm;
          LODWORD(verts.v[1]) = COERCE_UNSIGNED_INT(v11 * 0.5) ^ _xmm;
          v18 = verts.v[1];
          v21 = LODWORD(v14) ^ _xmm;
          v17 = v14;
          v19 = v14;
          v20 = v11 * 0.5;
          v22 = v11 * 0.5;
          v15 = ScrPlace_GetActivePlacement(localClientNum);
          CG_DrawRotatedQuadPic(v15, v14 + cghe->x, (float)(v11 * 0.5) + v12, &verts, cghe->rotation, &cghe->color, material);
        }
      }
    }
  }
}

/*
==============
DrawHudElemString
==============
*/
void DrawHudElemString(LocalClientNum_t localClientNum, const char *text, const hudelem_t *elem, cg_hudelem_t *cghe)
{
  const dvar_t *v8; 
  const ScreenPlacement *ActivePlacement; 
  float v10; 
  double v11; 
  float v12; 
  int fxBirthTime; 
  float fontHeight; 
  const cg_t *LocalClientGlobals; 
  int v16; 
  vec4_t resultColor; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 750, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !*text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 751, ASSERT_TYPE_ASSERT, "(text[0])", (const char *)&queryFormat, "text[0]") )
    __debugbreak();
  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 752, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( !cghe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 753, ASSERT_TYPE_ASSERT, "(cghe)", (const char *)&queryFormat, "cghe") )
    __debugbreak();
  if ( cghe->color.v[3] == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 755, ASSERT_TYPE_ASSERT, "(cghe->color[3])", (const char *)&queryFormat, "cghe->color[3]") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled && (!CG_Draw_IsMPRealismMode(localClientNum) || (elem->flags & 0x20000) != 0) )
  {
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    v10 = OffsetHudElemY(elem, cghe, cghe->fontHeight - cghe->height);
    v11 = R_NormalizedTextScale(cghe->font, cghe->fontScale);
    v12 = (float)((float)((float)(*(float *)&v11 / cg_hudSplitscreenScale) * ActivePlacement->scaleRealToVirtual.v[1]) * cg_hudSplitscreenScale) * ActivePlacement->scaleVirtualToReal.v[0];
    fxBirthTime = elem->fxBirthTime;
    fontHeight = cghe->fontHeight;
    if ( fxBirthTime && fxBirthTime > cghe->timeNow )
      fxBirthTime = cghe->timeNow;
    HudElemColorToVec4(localClientNum, &elem->glowColor, &resultColor);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( fxBirthTime )
    {
      v16 = SEH_PrintStrlen(text);
      CL_PlayTextFXPulseSounds(localClientNum, cghe->timeNow, v16, fxBirthTime, elem->fxLetterTime, elem->fxDecayStartTime, &LocalClientGlobals->hudElemSound[elem->soundID].lastPlayedTime);
    }
    CG_Draw_UpdateScramblerState(LocalClientGlobals, localClientNum);
    if ( !CG_Draw_IsScramblingActive(localClientNum) )
      CL_DrawTextPhysicalWithEffects(text, 0x7FFFFFFF, cghe->font, cghe->x, fontHeight + v10, v12, *(float *)&v11, &cghe->color, 3, &resultColor, NULL, NULL, fxBirthTime, elem->fxLetterTime);
  }
}

/*
==============
DrawSingleHudElem2d_GetHudElemInfo
==============
*/
void DrawSingleHudElem2d_GetHudElemInfo(LocalClientNum_t localClientNum, const hudelem_t *elem, cg_hudelem_t *cghe, char *hudElemString)
{
  __int64 v4; 
  const ScreenPlacement *ActivePlacement; 
  int font; 
  const ScreenPlacement *v10; 
  float v11; 
  int v12; 
  float v13; 
  GfxFont *FontHandle; 
  float fontScale; 
  __int128 v17; 
  int label; 
  int v20; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  char *v23; 
  const char *PlayerName; 
  char v25; 
  int v26; 
  int v27; 
  __int64 i; 
  char v29; 
  int waypointBackgroundType; 
  CgDrawSystem *DrawSystem; 
  int HudElemTime; 
  unsigned int v33; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  const char *v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  unsigned int v41; 
  int v42; 
  unsigned int v43; 
  unsigned int v44; 
  __int64 v45; 
  __int64 v46; 
  char *hudElemText; 
  __int64 v48; 
  char *v49; 
  __int64 v50; 
  __int64 v51; 
  char *v52; 
  __int128 v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float width; 
  __int128 v61; 
  int rotationTime; 
  int v63; 
  float rotation; 
  char *fmt; 
  __int64 v66; 
  __int64 v67; 
  float toScale; 
  const ScreenPlacement *v69; 
  char out_playerName[48]; 

  v4 = localClientNum;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  font = elem->font;
  v69 = ActivePlacement;
  v10 = ActivePlacement;
  switch ( font )
  {
    case 0:
      goto $LN5_121;
    case 1:
      v11 = FLOAT_0_58333331;
      v12 = 4;
      goto LABEL_13;
    case 2:
      v11 = FLOAT_0_375;
      v12 = 5;
      goto LABEL_13;
    case 3:
      v12 = 6;
      goto LABEL_12;
    case 4:
      v12 = 2;
      goto LABEL_12;
    case 5:
      v12 = 3;
      goto LABEL_12;
    case 6:
      v11 = FLOAT_0_58333331;
      v12 = 9;
      goto LABEL_13;
    case 7:
      v11 = FLOAT_0_375;
      v12 = 10;
      goto LABEL_13;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 584, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
        __debugbreak();
$LN5_121:
      v12 = 0;
LABEL_12:
      v11 = FLOAT_0_25;
LABEL_13:
      BG_LerpFontScale(elem, cghe->timeNow, &toScale);
      v13 = (float)((float)(v11 * toScale) * cg_hudSplitscreenScale) * v10->scaleVirtualToReal.v[1];
      cghe->fontScale = v13;
      FontHandle = UI_GetFontHandle(v10, v12, v13);
      fontScale = cghe->fontScale;
      cghe->font = FontHandle;
      v17 = 0i64;
      *(float *)&v17 = (float)UI_TextHeight(FontHandle, fontScale);
      _XMM0 = v17;
      cghe->fontHeight = *(float *)&v17;
      cghe->hudElemLabel[0] = 0;
      label = elem->label;
      if ( label )
        SafeTranslateHudElemString((LocalClientNum_t)v4, label, cghe->hudElemLabel, 1024);
      break;
  }
  cghe->hudElemText[0] = 0;
  switch ( elem->type )
  {
    case HE_TYPE_TEXT:
      waypointBackgroundType = elem->waypointBackgroundType;
      if ( waypointBackgroundType )
        SafeTranslateHudElemString((LocalClientNum_t)v4, waypointBackgroundType, cghe->hudElemText, 1024);
      goto LABEL_46;
    case HE_TYPE_VALUE:
      Com_sprintf(cghe->hudElemText, 0x400ui64, "%g", elem->value);
      goto LABEL_46;
    case HE_TYPE_PLAYERNAME:
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v20 = (int)*(float *)&_XMM4;
      if ( (int)*(float *)&_XMM4 < 0 || v20 >= cls.maxClients )
        goto LABEL_46;
      if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
        __debugbreak();
      if ( (unsigned int)v4 >= LODWORD(CgStatic::ms_allocatedCount) )
      {
        *(float *)&v67 = CgStatic::ms_allocatedCount;
        LODWORD(v66) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v66, v67) )
          __debugbreak();
      }
      if ( !CgStatic::ms_cgameStaticsArray[v4] )
      {
        LODWORD(v67) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v67) )
          __debugbreak();
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[v4]->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( v20 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v67) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v66) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v66, v67) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v20);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v20);
      }
      if ( !CharacterInfo )
      {
        PlayerName = CL_Main_GetPlayerName((LocalClientNum_t)v20);
        goto LABEL_44;
      }
      if ( !CharacterInfo->infoValid )
      {
        PlayerName = UI_SafeTranslateString("MP/UNKNOWN_PLAYER");
LABEL_44:
        v23 = (char *)PlayerName;
        goto LABEL_45;
      }
      CG_Players_GetPlayerGamertag((const LocalClientNum_t)v4, v20, 0x2Fui64, out_playerName);
      if ( !out_playerName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 644, ASSERT_TYPE_ASSERT, "(name[0] != '\\0')", (const char *)&queryFormat, "name[0] != '\\0'") )
        __debugbreak();
      v23 = out_playerName;
LABEL_45:
      Core_strcpy(cghe->hudElemText, 0x400ui64, v23);
      v10 = v69;
LABEL_46:
      v25 = cghe->hudElemLabel[0];
      if ( v25 && cghe->hudElemText[0] )
      {
        v26 = 0;
        v27 = 0;
        for ( i = 0i64; i < 1023; ++i )
        {
          v29 = cghe->hudElemLabel[i];
          if ( !v29 )
            break;
          if ( v29 == 38 && cghe->hudElemLabel[i + 1] == 38 && cghe->hudElemLabel[i + 2] == 49 )
          {
            v27 += 3;
            break;
          }
          ++v26;
          hudElemString[i] = v29;
          ++v27;
        }
        v46 = v26;
        if ( v26 < 1023i64 )
        {
          hudElemText = cghe->hudElemText;
          do
          {
            if ( !*hudElemText )
              break;
            hudElemString[v46] = *hudElemText;
            ++v26;
            ++v46;
            ++hudElemText;
          }
          while ( v46 < 1023 );
        }
        v48 = v26;
        if ( v26 < 1023i64 )
        {
          v49 = &cghe->hudElemLabel[v27];
          do
          {
            if ( !*v49 )
              break;
            hudElemString[v48] = *v49;
            ++v26;
            ++v48;
            ++v49;
          }
          while ( v48 < 1023 );
        }
        v50 = v26;
        v51 = 8i64;
        hudElemString[v50] = 0;
        v52 = cghe->hudElemText;
        do
        {
          v52 += 128;
          v53 = *(_OWORD *)hudElemString;
          hudElemString += 128;
          *((_OWORD *)v52 - 8) = v53;
          *((_OWORD *)v52 - 7) = *((_OWORD *)hudElemString - 7);
          *((_OWORD *)v52 - 6) = *((_OWORD *)hudElemString - 6);
          *((_OWORD *)v52 - 5) = *((_OWORD *)hudElemString - 5);
          *((_OWORD *)v52 - 4) = *((_OWORD *)hudElemString - 4);
          *((_OWORD *)v52 - 3) = *((_OWORD *)hudElemString - 3);
          _XMM0 = *((_OWORD *)hudElemString - 2);
          *((_OWORD *)v52 - 2) = _XMM0;
          *((_OWORD *)v52 - 1) = *((_OWORD *)hudElemString - 1);
          --v51;
        }
        while ( v51 );
        v54 = (float)UI_TextWidth(cghe->hudElemText, 0, cghe->font, cghe->fontScale);
        *(double *)&_XMM0 = CL_GetScreenAspectRatioDisplayPixel();
        cghe->textWidth = v54 / *(float *)&_XMM0;
        cghe->hudElemLabel[0] = 0;
        cghe->labelWidth = 0.0;
        v25 = cghe->hudElemLabel[0];
      }
      v55 = 0.0;
      if ( v25 )
      {
        v56 = (float)UI_TextWidth(cghe->hudElemLabel, 0, cghe->font, cghe->fontScale);
        *(double *)&_XMM0 = CL_GetScreenAspectRatioDisplayPixel();
        v57 = v56 / *(float *)&_XMM0;
      }
      else
      {
        v57 = 0.0;
      }
      cghe->labelWidth = v57;
      if ( cghe->hudElemText[0] )
      {
        v58 = (float)UI_TextWidth(cghe->hudElemText, 0, cghe->font, cghe->fontScale);
        *(double *)&_XMM0 = CL_GetScreenAspectRatioDisplayPixel();
        v59 = v58 / *(float *)&_XMM0;
      }
      else
      {
        v59 = 0.0;
      }
      cghe->textWidth = v59;
      switch ( elem->type )
      {
        case HE_TYPE_TEXT:
        case HE_TYPE_VALUE:
        case HE_TYPE_PLAYERNAME:
        case HE_TYPE_TIMER_DOWN:
        case HE_TYPE_TIMER_UP:
        case HE_TYPE_TIMER_STATIC:
        case HE_TYPE_TENTHS_TIMER_DOWN:
        case HE_TYPE_TENTHS_TIMER_UP:
        case HE_TYPE_TENTHS_TIMER_STATIC:
        case HE_TYPE_TEXT_DEV:
          width = v59 + cghe->labelWidth;
          break;
        case HE_TYPE_MATERIAL:
        case HE_TYPE_CLOCK_DOWN:
        case HE_TYPE_CLOCK_UP:
          width = HudElemMaterialWidth(v10, elem, cghe) + cghe->labelWidth;
          break;
        case HE_TYPE_WAYPOINT:
          width = (float)elem->width;
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
            __debugbreak();
          width = 0.0;
          break;
      }
      cghe->width = width;
      switch ( elem->type )
      {
        case HE_TYPE_TEXT:
        case HE_TYPE_VALUE:
        case HE_TYPE_PLAYERNAME:
        case HE_TYPE_TIMER_DOWN:
        case HE_TYPE_TIMER_UP:
        case HE_TYPE_TIMER_STATIC:
        case HE_TYPE_TENTHS_TIMER_DOWN:
        case HE_TYPE_TENTHS_TIMER_UP:
        case HE_TYPE_TENTHS_TIMER_STATIC:
        case HE_TYPE_TEXT_DEV:
          _XMM0 = LODWORD(cghe->fontHeight);
          goto LABEL_95;
        case HE_TYPE_MATERIAL:
        case HE_TYPE_CLOCK_DOWN:
        case HE_TYPE_CLOCK_UP:
          *(float *)&_XMM0 = HudElemMaterialHeight(v10, elem, cghe);
          goto LABEL_95;
        case HE_TYPE_WAYPOINT:
          v61 = 0i64;
          *(float *)&v61 = (float)elem->height;
          _XMM0 = v61;
LABEL_95:
          if ( cghe->hudElemLabel[0] )
            __asm { vmaxss  xmm0, xmm0, dword ptr [rdi+82Ch] }
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 349, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
            __debugbreak();
          LODWORD(_XMM0) = 0;
          break;
      }
      cghe->height = *(float *)&_XMM0;
      rotationTime = elem->rotationTime;
      if ( rotationTime > 0 )
      {
        v63 = cghe->timeNow - elem->rotationStartTime;
        if ( v63 > 0 )
        {
          if ( v63 < rotationTime )
            v55 = (float)v63 / (float)rotationTime;
          else
            v55 = FLOAT_1_0;
        }
      }
      else
      {
        v55 = FLOAT_1_0;
      }
      rotation = elem->rotation;
      if ( v55 != 1.0 )
        rotation = (float)((float)(rotation - elem->fromRotation) * v55) + elem->fromRotation;
      cghe->rotation = rotation;
      SetHudElemPos(v10, elem, cghe);
      return;
    case HE_TYPE_TIMER_DOWN:
    case HE_TYPE_TIMER_UP:
    case HE_TYPE_TIMER_STATIC:
      HudElemTime = GetHudElemTime(elem, cghe->timeNow);
      v33 = HudElemTime / 1000 / 3600;
      v34 = HudElemTime / 1000 % 3600;
      v35 = (unsigned int)(v34 / 60);
      v36 = (unsigned int)(v34 % 60);
      if ( v33 )
        v37 = j_va("%i:%02i:%02i", v33, (unsigned int)v35, (unsigned int)v36);
      else
        v37 = j_va("%i:%02i", v35, v36);
      goto LABEL_60;
    case HE_TYPE_TENTHS_TIMER_DOWN:
    case HE_TYPE_TENTHS_TIMER_UP:
    case HE_TYPE_TENTHS_TIMER_STATIC:
      v40 = GetHudElemTime(elem, cghe->timeNow);
      v41 = v40 / 100 / 36000;
      v42 = v40 / 100 % 36000;
      v43 = v42 / 600;
      v42 %= 600;
      v44 = v42 / 10;
      v45 = (unsigned int)(v42 % 10);
      if ( v41 )
      {
        LODWORD(fmt) = v45;
        v37 = j_va("%i:%02i:%02i.%i", v41, v43, v44, fmt);
      }
      else
      {
        v37 = j_va("%i:%02i.%i", v43, v44, v45);
      }
LABEL_60:
      CopyStringToHudElemString(v37, cghe->hudElemText, v38, v39, (__int64)fmt, v66);
      goto LABEL_46;
    case HE_TYPE_TEXT_DEV:
      DrawSystem = CgDrawSystem::GetDrawSystem((const LocalClientNum_t)v4);
      DrawSystem->SetHudElemDevString(DrawSystem, elem->waypointBackgroundType, cghe->hudElemText, 1024);
      goto LABEL_46;
    default:
      goto LABEL_46;
  }
}

/*
==============
DrawViewableWaypoint
==============
*/
void DrawViewableWaypoint(LocalClientNum_t localClientNum, const hudelem_t *elem)
{
  cg_t *LocalClientGlobals; 
  unsigned int text; 
  Material *objectiveBackgroundDiamond; 
  double Float_Internal_DebugName; 
  unsigned int flags; 
  double v9; 
  double v10; 
  double v11; 
  float rotation; 
  hudelem_color_t toColor; 
  WaypointDrawArgs args; 
  vec3_t outPos; 
  vec4_t resultColor; 

  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1667, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( elem->type != HE_TYPE_WAYPOINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1668, ASSERT_TYPE_ASSERT, "(elem->type == HE_TYPE_WAYPOINT)", (const char *)&queryFormat, "elem->type == HE_TYPE_WAYPOINT") )
    __debugbreak();
  if ( (elem->flags & 0x400) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1671, ASSERT_TYPE_ASSERT, "(!(elem->flags & HUDELEMFLAG_DRAW_3D))", (const char *)&queryFormat, "!(elem->flags & HUDELEMFLAG_DRAW_3D)") )
    __debugbreak();
  memset_0(&args, 0, sizeof(args));
  if ( !CG_GetFlashbangedRemainingTime(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    BG_LerpHudColors(elem, LocalClientGlobals->time, &toColor);
    if ( toColor.a )
    {
      HudElemColorToVec4(localClientNum, &toColor, &resultColor);
      args.iconMaterial = CG_Draw_MaterialHandleForIndex(localClientNum, elem->materialIndex);
      if ( args.iconMaterial )
      {
        text = elem->text;
        if ( text == 2 )
        {
          objectiveBackgroundDiamond = cgMedia.objectiveBackgroundDiamond;
        }
        else if ( text == 1 )
        {
          objectiveBackgroundDiamond = cgMedia.objectiveBackgroundCircle;
        }
        else
        {
          objectiveBackgroundDiamond = NULL;
          if ( text == 3 )
            objectiveBackgroundDiamond = cgMedia.objectiveBackgroundPentagon;
        }
        args.backgroundIconMaterial = objectiveBackgroundDiamond;
        if ( GetWaypointEntPos(localClientNum, elem, &outPos) )
        {
          args.worldPos = outPos;
          args.color4 = resultColor;
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointTweakY, "waypointTweakY");
          flags = elem->flags;
          args.label = NULL;
          *((_BYTE *)&args + 105) = *((_BYTE *)&args + 105) & 0xFC | ((flags & 0x200) != 0) | (2 * ((flags & 0x80) != 0));
          *((_BYTE *)&args + 104) = (8 * (((flags & 0x20) != 0) | (2 * ((flags & 0x10) != 0)))) | *((_BYTE *)&args + 104) & 7 | (32 * ((4 * (flags >> 3)) | ((flags & 0x40) != 0))) & 0xBF;
          args.offsetY = *(float *)&Float_Internal_DebugName;
          args.arrowMaterial = cgMedia.offscreenObjectivePointer;
          v9 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenPointerWidth, "waypointOffscreenPointerWidth");
          args.arrowWidth = *(float *)&v9;
          v10 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenPointerHeight, "waypointOffscreenPointerHeight");
          *((_BYTE *)&args + 104) &= ~1u;
          args.arrowHeight = *(float *)&v10;
          v11 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenPointerDistance, "waypointOffscreenPointerDistance");
          rotation = elem->rotation;
          *((_BYTE *)&args + 104) &= ~2u;
          *((_BYTE *)&args + 105) |= 4u;
          args.arrowFadeDistance = *(float *)&v11;
          args.scale = FLOAT_1_0;
          args.rotation = rotation;
          CG_DrawWaypoint(localClientNum, &args);
        }
      }
    }
  }
}

/*
==============
GetHudElemOrg
==============
*/
void GetHudElemOrg(const ScreenPlacement *scrPlace, int alignOrg, int alignScreen, float xVirtual, float yVirtual, float width, float height, float *orgX, float *orgY)
{
  double v12; 
  double v13; 
  __int64 v14; 

  if ( !orgX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 401, ASSERT_TYPE_ASSERT, "(orgX)", (const char *)&queryFormat, "orgX") )
    __debugbreak();
  if ( !orgY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 402, ASSERT_TYPE_ASSERT, "(orgY)", (const char *)&queryFormat, "orgY") )
    __debugbreak();
  v12 = ScrPlace_ApplyX(scrPlace, xVirtual, (alignScreen >> 4) & 0xF);
  if ( ((alignOrg >> 2) & 3) == 3 )
  {
    LODWORD(v14) = alignOrg;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 377, ASSERT_TYPE_ASSERT, "( ( alignX == 0 || alignX == 1 || alignX == 2 ) )", "( alignOrg ) = %i", v14) )
      __debugbreak();
  }
  *orgX = *(float *)&v12 - (float)(width * s_alignScale[(alignOrg >> 2) & 3]);
  v13 = ScrPlace_ApplyY(scrPlace, yVirtual, alignScreen & 0xF);
  *orgY = AlignHudElemY(alignOrg, *(float *)&v13, height);
}

/*
==============
GetHudElemTime
==============
*/
__int64 GetHudElemTime(const hudelem_t *elem, int timeNow)
{
  __int64 result; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int time; 

  switch ( elem->type )
  {
    case HE_TYPE_TIMER_DOWN:
      result = 0i64;
      v3 = elem->time - timeNow + 999;
      if ( v3 >= 0 )
        result = (unsigned int)v3;
      break;
    case HE_TYPE_TIMER_UP:
    case HE_TYPE_TENTHS_TIMER_UP:
    case HE_TYPE_CLOCK_UP:
      result = 0i64;
      v6 = timeNow - elem->time;
      if ( v6 >= 0 )
        result = (unsigned int)v6;
      break;
    case HE_TYPE_TIMER_STATIC:
    case HE_TYPE_TENTHS_TIMER_STATIC:
      time = elem->time;
      result = 0i64;
      if ( time >= 0 )
        result = (unsigned int)time;
      break;
    case HE_TYPE_TENTHS_TIMER_DOWN:
      result = 0i64;
      v4 = elem->time - timeNow + 99;
      if ( v4 >= 0 )
        result = (unsigned int)v4;
      break;
    case HE_TYPE_CLOCK_DOWN:
      result = 0i64;
      v5 = elem->time - timeNow;
      if ( v5 >= 0 )
        result = (unsigned int)v5;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
GetScaleForDistance
==============
*/
float GetScaleForDistance(LocalClientNum_t localClientNum, const vec3_t *worldPos)
{
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float result; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  __int128 unsignedInt; 
  const dvar_t *v15; 
  __int128 v17; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  int v23[3]; 
  __int64 v24; 

  v24 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_view = &LocalClientGlobals->refdef.view;
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
  v = (_DWORD *)p_view->org.org.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  v23[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
  v23[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
  v23[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
  v8 = fsqrt((float)((float)((float)(worldPos->v[1] - *(float *)&v23[1]) * (float)(worldPos->v[1] - *(float *)&v23[1])) + (float)((float)(worldPos->v[0] - *(float *)v23) * (float)(worldPos->v[0] - *(float *)v23))) + (float)((float)(worldPos->v[2] - *(float *)&v23[2]) * (float)(worldPos->v[2] - *(float *)&v23[2])));
  v7 = v8;
  v9 = DVARFLT_waypointDistScaleRangeMin;
  if ( !DVARFLT_waypointDistScaleRangeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v8 > v9->current.value )
  {
    v11 = DVARFLT_waypointDistScaleRangeMax;
    if ( !DVARFLT_waypointDistScaleRangeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v8 < v11->current.value )
    {
      v13 = DVARFLT_waypointDistScaleRangeMax;
      if ( !DVARFLT_waypointDistScaleRangeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      unsignedInt = v13->current.unsignedInt;
      v15 = DVARFLT_waypointDistScaleRangeMin;
      if ( !DVARFLT_waypointDistScaleRangeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v17 = unsignedInt;
      *(float *)&v17 = *(float *)&unsignedInt - v15->current.value;
      _XMM2 = v17;
      __asm
      {
        vcmpless xmm1, xmm2, xmm0
        vblendvps xmm0, xmm2, xmm7, xmm1
      }
      v20 = DVARFLT_waypointDistScaleRangeMin;
      if ( !DVARFLT_waypointDistScaleRangeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      v21 = (float)(v7 - v20->current.value) / *(float *)&_XMM0;
      v22 = DVARFLT_waypointDistScaleSmallest;
      if ( !DVARFLT_waypointDistScaleSmallest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleSmallest") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      result = (float)(v21 * v22->current.value) + (float)(1.0 - v21);
    }
    else
    {
      v12 = DVARFLT_waypointDistScaleSmallest;
      if ( !DVARFLT_waypointDistScaleSmallest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleSmallest") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      result = v12->current.value;
    }
  }
  else
  {
    result = FLOAT_1_0;
  }
  memset(v23, 0, sizeof(v23));
  return result;
}

/*
==============
GetStanceHeightFromDObj
==============
*/
bool GetStanceHeightFromDObj(LocalClientNum_t localClientNum, const centity_t *cent, float *result)
{
  scr_string_t aim_highest_bone; 
  unsigned int number; 
  unsigned int v8; 
  unsigned int v9; 
  const DObj *v10; 
  DObjAnimMat *LocalBoneMatrix; 
  float v12; 
  bool v13; 
  const char *v14; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t outOrigin; 
  __int64 v20; 

  v20 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1073, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1074, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  aim_highest_bone = scr_const.aim_highest_bone;
  number = cent->nextState.number;
  if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", cent->nextState.number) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v16) = 2;
    LODWORD(v15) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v8 = 2533 * localClientNum + number;
  if ( v8 >= 0x13CA )
  {
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v16) )
      __debugbreak();
  }
  v9 = clientObjMap[v8];
  if ( v9 )
  {
    if ( v9 >= (unsigned int)s_objCount )
    {
      LODWORD(v16) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v16) )
        __debugbreak();
    }
    v10 = (const DObj *)s_objBuf[v9];
    if ( v10 )
    {
      if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
        __debugbreak();
      inOutIndex[0] = -2;
      if ( DObjGetBoneIndexInternal_50(v10, aim_highest_bone, inOutIndex, &modelIndex) )
      {
        LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(&cent->pose, v10, inOutIndex[0]);
        if ( LocalBoneMatrix )
        {
          v12 = LocalBoneMatrix->trans.v[2] + g_activeRefDef->viewOffset.v[2];
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          *result = (float)(v12 - outOrigin.v[2]) + MY_BUMP;
          v13 = 1;
          memset(&outOrigin, 0, sizeof(outOrigin));
          return v13;
        }
      }
      v14 = SL_ConvertToString(aim_highest_bone);
      Com_PrintWarning(14, "Cannot find tag [%s] on entity for objective marker.\n", v14);
    }
  }
  v13 = 0;
  *result = 0.0;
  return v13;
}

/*
==============
GetWaypointEntPos
==============
*/
char GetWaypointEntPos(LocalClientNum_t localClientNum, const hudelem_t *elem, vec3_t *outPos)
{
  __int64 v5; 
  float z; 
  float y; 
  cg_t *LocalClientGlobals; 
  __int64 targetEntNum; 
  CgEntitySystem *v11; 
  __int64 v12; 
  float v13; 
  float v14; 
  float x; 
  double WaypointOffsetForStance; 
  __int64 v17; 
  __int64 v18; 
  vec3_t outOrigin; 
  __int64 v20; 
  tmat33_t<vec3_t> axis; 
  char v22; 

  v20 = -2i64;
  v5 = localClientNum;
  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1131, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( elem->type != HE_TYPE_WAYPOINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1132, ASSERT_TYPE_ASSERT, "(elem->type == HE_TYPE_WAYPOINT)", (const char *)&queryFormat, "elem->type == HE_TYPE_WAYPOINT") )
    __debugbreak();
  if ( elem->targetEntNum == 2047 )
  {
    z = elem->z;
    y = elem->y;
    outPos->v[0] = elem->x;
    outPos->v[1] = y;
    outPos->v[2] = z;
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    targetEntNum = elem->targetEntNum;
    if ( (_DWORD)targetEntNum == LocalClientGlobals->predictedPlayerEntity->nextState.number )
      return 0;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v5) )
      __debugbreak();
    if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v18) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v17) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v5] )
    {
      LODWORD(v18) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v18) )
        __debugbreak();
    }
    v11 = CgEntitySystem::ms_entitySystemArray[v5];
    if ( (unsigned int)targetEntNum >= 0x800 )
    {
      LODWORD(v18) = 2048;
      LODWORD(v17) = targetEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    v12 = (__int64)&v11->m_entities[targetEntNum];
    if ( (*(_BYTE *)(v12 + 648) & 1) == 0 )
      return 0;
    if ( (elem->flags & 0x2000) != 0 )
    {
      AnglesToAxis((const vec3_t *)(v12 + 72), &axis);
      v13 = elem->z;
      v14 = elem->y;
      x = elem->x;
      if ( &v22 == (char *)outPos && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      outPos->v[0] = (float)((float)(v14 * axis.m[1].v[0]) + (float)(x * axis.m[0].v[0])) + (float)(v13 * axis.m[2].v[0]);
      outPos->v[1] = (float)((float)(v14 * axis.m[1].v[1]) + (float)(x * axis.m[0].v[1])) + (float)(v13 * axis.m[2].v[1]);
      outPos->v[2] = (float)((float)(v14 * axis.m[1].v[2]) + (float)(x * axis.m[0].v[2])) + (float)(v13 * axis.m[2].v[2]);
      CG_GetPoseOrigin((const cpose_t *)v12, &outOrigin);
      outPos->v[0] = outOrigin.v[0] + outPos->v[0];
      outPos->v[1] = outOrigin.v[1] + outPos->v[1];
      outPos->v[2] = outOrigin.v[2] + outPos->v[2];
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    else
    {
      CG_GetPoseOrigin((const cpose_t *)v12, outPos);
      WaypointOffsetForStance = CG_GetWaypointOffsetForStance((LocalClientNum_t)v5, (centity_t *)v12);
      outPos->v[2] = *(float *)&WaypointOffsetForStance + outPos->v[2];
    }
  }
  return 1;
}

/*
==============
HudElemColorToVec4
==============
*/
void HudElemColorToVec4(LocalClientNum_t localClientNum, const hudelem_color_t *hudElemColor, vec4_t *resultColor)
{
  const dvar_t *v5; 
  float value; 
  float v7; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 

  resultColor->v[0] = (float)hudElemColor->r * 0.0039215689;
  resultColor->v[1] = (float)hudElemColor->g * 0.0039215689;
  resultColor->v[2] = (float)hudElemColor->b * 0.0039215689;
  resultColor->v[3] = (float)hudElemColor->a * 0.0039215689;
  if ( CL_Pause_IsGamePaused() )
  {
    v5 = DVARFLT_hudElemPausedBrightness;
    if ( !DVARFLT_hudElemPausedBrightness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudElemPausedBrightness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
    v7 = value * resultColor->v[0];
    v8 = value * resultColor->v[1];
    resultColor->v[2] = value * resultColor->v[2];
    resultColor->v[0] = v7;
    resultColor->v[1] = v8;
  }
  else
  {
    v7 = resultColor->v[0];
  }
  __asm { vxorpd  xmm9, xmm9, xmm9 }
  if ( (v7 < 0.0 || v7 > 1.000001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 732, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[0] ) && ( resultColor[0] ) <= ( 1.000001f )", "resultColor[0] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v7, *(double *)&_XMM9, DOUBLE_1_000000953674316) )
    __debugbreak();
  v10 = resultColor->v[1];
  if ( (v10 < 0.0 || v10 > 1.000001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 733, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[1] ) && ( resultColor[1] ) <= ( 1.000001f )", "resultColor[1] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v10, *(double *)&_XMM9, DOUBLE_1_000000953674316) )
    __debugbreak();
  v11 = resultColor->v[2];
  if ( (v11 < 0.0 || v11 > 1.000001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 734, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[2] ) && ( resultColor[2] ) <= ( 1.000001f )", "resultColor[2] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v11, *(double *)&_XMM9, DOUBLE_1_000000953674316) )
    __debugbreak();
  v12 = resultColor->v[3];
  if ( (v12 < 0.0 || v12 > 1.000001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 735, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[3] ) && ( resultColor[3] ) <= ( 1.000001f )", "resultColor[3] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v12, *(double *)&_XMM9, DOUBLE_1_000000953674316) )
    __debugbreak();
}

/*
==============
HudElemMaterialHeight
==============
*/
float HudElemMaterialHeight(const ScreenPlacement *scrPlace, const hudelem_t *elem, const cg_hudelem_t *cghe)
{
  int height; 
  float fontHeight; 
  float v6; 
  int scaleTime; 
  int v8; 
  int fromHeight; 
  float v10; 
  float v11; 
  float v13; 

  height = elem->height;
  if ( height )
  {
    v6 = (float)height;
    if ( (elem->alignScreen & 0xF) == 4 )
      fontHeight = v6 * scrPlace->scaleVirtualToFull.v[1];
    else
      fontHeight = (float)(v6 * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[1];
  }
  else
  {
    fontHeight = cghe->fontHeight;
  }
  scaleTime = elem->scaleTime;
  if ( scaleTime <= 0 )
    return fontHeight;
  v8 = cghe->timeNow - elem->scaleStartTime;
  if ( v8 >= scaleTime )
    return fontHeight;
  fromHeight = elem->fromHeight;
  if ( fromHeight )
  {
    v11 = (float)fromHeight;
    if ( (elem->fromAlignScreen & 0xF) == 4 )
      v10 = v11 * scrPlace->scaleVirtualToFull.v[1];
    else
      v10 = (float)(v11 * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[1];
  }
  else
  {
    v10 = cghe->fontHeight;
  }
  if ( v8 <= 0 )
    return v10;
  v13 = (float)v8 / (float)scaleTime;
  if ( (v13 < 0.0 || v13 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 281, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v13, 0.0, DOUBLE_1_0) )
    __debugbreak();
  return (float)((float)(fontHeight - v10) * v13) + v10;
}

/*
==============
HudElemMaterialWidth
==============
*/
float HudElemMaterialWidth(const ScreenPlacement *scrPlace, const hudelem_t *elem, const cg_hudelem_t *cghe)
{
  int width; 
  float fontHeight; 
  float v6; 
  int scaleTime; 
  int v8; 
  int fromWidth; 
  float v10; 
  float v11; 
  float v13; 

  width = elem->width;
  if ( width )
  {
    v6 = (float)width;
    if ( (elem->alignScreen & 0xF0) == 64 )
      fontHeight = v6 * scrPlace->scaleVirtualToFull.v[0];
    else
      fontHeight = (float)(v6 * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[0];
  }
  else
  {
    fontHeight = cghe->fontHeight;
  }
  scaleTime = elem->scaleTime;
  if ( scaleTime <= 0 )
    return fontHeight;
  v8 = cghe->timeNow - elem->scaleStartTime;
  if ( v8 >= scaleTime )
    return fontHeight;
  fromWidth = elem->fromWidth;
  if ( fromWidth )
  {
    v11 = (float)fromWidth;
    if ( (elem->fromAlignScreen & 0xF0) == 64 )
      v10 = v11 * scrPlace->scaleVirtualToFull.v[0];
    else
      v10 = (float)(v11 * cg_hudSplitscreenScale) * scrPlace->scaleVirtualToReal.v[0];
  }
  else
  {
    v10 = cghe->fontHeight;
  }
  if ( v8 <= 0 )
    return v10;
  v13 = (float)v8 / (float)scaleTime;
  if ( (v13 < 0.0 || v13 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 256, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v13, 0.0, DOUBLE_1_0) )
    __debugbreak();
  return (float)((float)(fontHeight - v10) * v13) + v10;
}

/*
==============
OffsetHudElemY
==============
*/
float OffsetHudElemY(const hudelem_t *elem, const cg_hudelem_t *cghe, float offsetY)
{
  int moveTime; 
  float v6; 
  int v7; 
  float y; 
  float v10; 

  moveTime = elem->moveTime;
  if ( moveTime > 0 )
  {
    v7 = cghe->timeNow - elem->moveStartTime;
    if ( v7 > 0 )
    {
      if ( v7 < moveTime )
        v6 = (float)v7 / (float)moveTime;
      else
        v6 = FLOAT_1_0;
    }
    else
    {
      v6 = 0.0;
    }
  }
  else
  {
    v6 = FLOAT_1_0;
  }
  y = cghe->y;
  if ( v6 == 1.0 )
    return AlignHudElemY(elem->alignOrg, y, offsetY);
  v10 = AlignHudElemY(elem->fromAlignOrg, y, offsetY);
  return (float)((float)(v10 - AlignHudElemY(elem->alignOrg, cghe->y, offsetY)) * v6) + v10;
}

/*
==============
SafeTranslateHudElemString
==============
*/
void SafeTranslateHudElemString(LocalClientNum_t localClientNum, int index, char *hudElemString, const int hudElemStringLength)
{
  unsigned __int64 v4; 
  ClConfigStrings *ClConfigStrings; 
  char *v9; 
  const char *v10; 
  char outMsg[8]; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v4 = hudElemStringLength;
  if ( !hudElemString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 111, ASSERT_TYPE_ASSERT, "(hudElemString)", (const char *)&queryFormat, "hudElemString") )
    __debugbreak();
  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 112, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v9 = (char *)ClConfigStrings->GetLocalizedString(ClConfigStrings, index);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 87, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  if ( !hudElemString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 88, ASSERT_TYPE_ASSERT, "(hudElemString)", (const char *)&queryFormat, "hudElemString") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 89, ASSERT_TYPE_ASSERT, "(hudElemStringLength > 0)", (const char *)&queryFormat, "hudElemStringLength > 0") )
    __debugbreak();
  *(_QWORD *)outMsg = 0i64;
  v12 = 0i64;
  v13 = 0i64;
  v14 = 0i64;
  if ( CL_Anonymization_GetGenericGameMessage(v9, "hudelem string", outMsg, 0x20u) )
  {
    if ( !outMsg[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 96, ASSERT_TYPE_ASSERT, "(anonMsg[0] != '\\0')", (const char *)&queryFormat, "anonMsg[0] != '\\0'") )
      __debugbreak();
    v9 = outMsg;
  }
  v10 = SEH_LocalizeTextMessage(v9, "hudelem string", LOCMSG_SAFE);
  UI_ReplaceDirective(localClientNum, v10, hudElemString, v4, 0);
}

/*
==============
ScreenPosIsWorthFadingFor
==============
*/
bool ScreenPosIsWorthFadingFor(const ScreenPlacement *scrPlace, const vec2_t *screenPos, const WaypointDrawArgs *args)
{
  float v6; 
  bool result; 

  if ( !args && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1172, ASSERT_TYPE_ASSERT, "(args)", (const char *)&queryFormat, "args") )
    __debugbreak();
  result = 0;
  if ( (*((_BYTE *)args + 104) & 4) != 0 && screenPos->v[0] >= scrPlace->realAdjustableMin.v[0] && screenPos->v[0] <= scrPlace->realAdjustableMax.v[0] )
  {
    v6 = screenPos->v[1];
    if ( v6 >= scrPlace->realAdjustableMin.v[1] && v6 <= scrPlace->realAdjustableMax.v[1] )
      return 1;
  }
  return result;
}

/*
==============
SetHudElemPos
==============
*/
void SetHudElemPos(const ScreenPlacement *scrPlace, const hudelem_t *elem, cg_hudelem_t *cghe)
{
  int moveTime; 
  float v7; 
  int v8; 
  float height; 
  float width; 
  int fontScaleTime; 
  float v15; 
  float v16; 
  float orgY; 
  float v18; 
  float v19; 

  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 468, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( !cghe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 469, ASSERT_TYPE_ASSERT, "(cghe)", (const char *)&queryFormat, "cghe") )
    __debugbreak();
  moveTime = elem->moveTime;
  if ( moveTime > 0 )
  {
    v8 = cghe->timeNow - elem->moveStartTime;
    if ( v8 > 0 )
    {
      if ( v8 < moveTime )
        v7 = (float)v8 / (float)moveTime;
      else
        v7 = FLOAT_1_0;
    }
    else
    {
      v7 = 0.0;
    }
  }
  else
  {
    v7 = FLOAT_1_0;
  }
  height = cghe->height;
  width = cghe->width;
  if ( v7 == 1.0 )
  {
    GetHudElemOrg(scrPlace, elem->alignOrg, elem->alignScreen, elem->x, elem->y, width, height, &cghe->x, &cghe->y);
    fontScaleTime = elem->fontScaleTime;
    if ( fontScaleTime <= 0 || cghe->timeNow - elem->fontScaleStartTime >= fontScaleTime )
    {
      _XMM4 = 0i64;
      __asm { vroundss xmm2, xmm4, xmm1, 1 }
      cghe->x = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM2).m128_f32[0];
      __asm { vroundss xmm1, xmm4, xmm2, 1 }
      cghe->y = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM1).m128_f32[0];
    }
  }
  else
  {
    GetHudElemOrg(scrPlace, elem->fromAlignOrg, elem->fromAlignScreen, elem->fromX, elem->fromY, width, height, &v16, &orgY);
    GetHudElemOrg(scrPlace, elem->alignOrg, elem->alignScreen, elem->x, elem->y, cghe->width, cghe->height, &v18, &v19);
    v15 = (float)(v19 - orgY) * v7;
    cghe->x = (float)((float)(v18 - v16) * v7) + v16;
    cghe->y = v15 + orgY;
  }
}

/*
==============
UpdateFadeAndGetAlpha
==============
*/
float UpdateFadeAndGetAlpha(LocalClientNum_t localClientNum, WaypointDrawArgs *args, const ScreenPlacement *scrPlace, const vec2_t *screenPos)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v9; 
  objectiveFadeState inout_fadeState; 
  cg_t *v11; 
  int inout_fadeCounter; 
  int integer; 
  objectiveFadeState v14; 
  const dvar_t *v15; 
  int v16; 
  const dvar_t *v17; 
  float v18; 
  const dvar_t *v19; 
  const char *v20; 
  const dvar_t *v21; 
  int v22; 
  const dvar_t *v23; 
  int v24; 
  bool v25; 
  const dvar_t *v26; 
  objectiveFadeState v27; 
  int v28; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  __int128 unsignedInt; 
  __int128 v36; 
  __int128 v39; 
  __int128 v40; 

  if ( !args && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1240, ASSERT_TYPE_ASSERT, "(args)", (const char *)&queryFormat, "args") )
    __debugbreak();
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1241, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = DVARINT_objectiveGlobalFadeState;
  inout_fadeState = args->inout_fadeState;
  v11 = LocalClientGlobals;
  inout_fadeCounter = args->inout_fadeCounter;
  if ( !DVARINT_objectiveGlobalFadeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveGlobalFadeState") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  if ( integer <= -1 || (*((_BYTE *)args + 105) & 4) != 0 )
  {
    v15 = DVARBOOL_objectiveHide;
    if ( !DVARBOOL_objectiveHide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveHide") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      if ( inout_fadeState == OBJFS_FULL_OFF )
      {
        inout_fadeState = OBJFS_FADING_ON;
        inout_fadeCounter = -v11->frametime;
      }
      else if ( inout_fadeState == OBJFS_FADING_ON )
      {
        if ( inout_fadeCounter <= 0 )
          inout_fadeCounter = -v11->frametime;
      }
      else if ( inout_fadeState != OBJFS_FADING_OFF )
      {
        if ( inout_fadeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1291, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
          __debugbreak();
        inout_fadeState = OBJFS_FADING_OFF;
        inout_fadeCounter = 0;
      }
    }
    else
    {
      v21 = DVARFLT_objectiveFadeTooFar;
      if ( !DVARFLT_objectiveFadeTooFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTooFar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.value < args->fadeDistance )
      {
        if ( inout_fadeState == OBJFS_FULL_OFF )
        {
          inout_fadeState = OBJFS_FADING_ON;
          inout_fadeCounter = 0;
        }
        else if ( (unsigned int)(inout_fadeState - 2) > 1 )
        {
          if ( inout_fadeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1309, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
            __debugbreak();
          inout_fadeCounter = 0;
        }
      }
    }
  }
  else
  {
    v14 = args->inout_fadeState;
    inout_fadeState = v9->current.integer;
    if ( v14 != integer )
    {
      inout_fadeCounter = 0;
      if ( integer == 2 )
      {
        if ( v14 == OBJFS_FULL_ON )
          inout_fadeState = OBJFS_FULL_ON;
      }
      else if ( integer == 3 && v14 == OBJFS_FULL_OFF )
      {
        inout_fadeState = OBJFS_FULL_OFF;
      }
    }
  }
  switch ( inout_fadeState )
  {
    case OBJFS_FULL_OFF:
      if ( integer > -1 && (*((_BYTE *)args + 105) & 4) == 0 )
        goto LABEL_90;
      v30 = DVARFLT_objectiveFadeTooClose;
      if ( !DVARFLT_objectiveFadeTooClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTooClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( v30->current.value > args->fadeDistance || ScreenPosIsWorthFadingFor(scrPlace, screenPos, args) )
LABEL_90:
        inout_fadeCounter = 0;
      v16 = v11->frametime + inout_fadeCounter;
      v31 = DVARFLT_objectiveFadeTimeWaitOff;
      if ( !DVARFLT_objectiveFadeTimeWaitOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeWaitOff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      v18 = FLOAT_1000_0;
      if ( v16 < (int)(float)(1000.0 * v31->current.value) )
        goto LABEL_104;
      inout_fadeState = OBJFS_FADING_ON;
      v16 = 0;
LABEL_96:
      v19 = DVARFLT_objectiveFadeTimeGoingOn;
      if ( !DVARFLT_objectiveFadeTimeGoingOn )
      {
        v20 = "objectiveFadeTimeGoingOn";
LABEL_98:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v20) )
          __debugbreak();
      }
LABEL_100:
      Dvar_CheckFrontendServerThread(v19);
      unsignedInt = v19->current.unsignedInt;
      *(float *)&unsignedInt = v19->current.value * v18;
      _XMM7 = unsignedInt;
      if ( *(float *)&unsignedInt <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1211, ASSERT_TYPE_ASSERT, "(period > 0)", (const char *)&queryFormat, "period > 0") )
        __debugbreak();
      __asm
      {
        vcmpless xmm0, xmm7, xmm6
        vblendvps xmm1, xmm7, xmm6, xmm0
      }
      v36 = 0i64;
      *(float *)&v36 = (float)v16 / *(float *)&_XMM1;
      _XMM0 = v36;
      __asm { vminss  xmm1, xmm0, xmm6 }
      v40 = _XMM1;
      *(float *)&v40 = *(float *)&_XMM1 * 1.5707964;
      v39 = v40;
      *(float *)&v39 = sinf_0(*(float *)&_XMM1 * 1.5707964);
      _XMM4 = v39;
      _XMM0 = (unsigned int)inout_fadeState;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm3, xmm2
      }
      goto LABEL_105;
    case OBJFS_FADING_ON:
      v22 = inout_fadeCounter + v11->frametime;
      v26 = DVARFLT_objectiveFadeTimeGoingOn;
      if ( !DVARFLT_objectiveFadeTimeGoingOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeGoingOn") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      v18 = FLOAT_1000_0;
      v27 = OBJFS_FULL_ON;
      v28 = (int)(float)(1000.0 * v26->current.value);
      if ( v22 < v28 )
        v27 = inout_fadeState;
      v16 = 0;
      v25 = v22 < v28;
      inout_fadeState = v27;
      goto LABEL_74;
    case OBJFS_FADING_OFF:
      v22 = inout_fadeCounter + v11->frametime;
      v23 = DVARFLT_objectiveFadeTimeGoingOff;
      if ( !DVARFLT_objectiveFadeTimeGoingOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeGoingOff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      v18 = FLOAT_1000_0;
      v24 = (int)(float)(1000.0 * v23->current.value);
      if ( v22 >= v24 )
        inout_fadeState = OBJFS_FULL_OFF;
      v16 = 0;
      v25 = v22 < v24;
LABEL_74:
      if ( v25 )
        v16 = v22;
      goto LABEL_76;
  }
  if ( inout_fadeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1344, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
    __debugbreak();
  if ( integer > -1 && (*((_BYTE *)args + 105) & 4) == 0 || !ScreenPosIsWorthFadingFor(scrPlace, screenPos, args) )
    inout_fadeCounter = 0;
  v16 = v11->frametime + inout_fadeCounter;
  v17 = DVARFLT_objectiveFadeTimeWaitOn;
  if ( !DVARFLT_objectiveFadeTimeWaitOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeWaitOn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = FLOAT_1000_0;
  if ( v16 >= (int)(float)(1000.0 * v17->current.value) )
  {
    inout_fadeState = OBJFS_FADING_OFF;
    v16 = 0;
    goto LABEL_48;
  }
LABEL_76:
  switch ( inout_fadeState )
  {
    case OBJFS_FADING_ON:
      goto LABEL_96;
    case OBJFS_FADING_OFF:
LABEL_48:
      v19 = DVARFLT_objectiveFadeTimeGoingOff;
      if ( !DVARFLT_objectiveFadeTimeGoingOff )
      {
        v20 = "objectiveFadeTimeGoingOff";
        goto LABEL_98;
      }
      goto LABEL_100;
    case OBJFS_FULL_OFF:
LABEL_104:
      LODWORD(_XMM0) = 0;
      goto LABEL_105;
  }
  if ( inout_fadeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1227, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
    __debugbreak();
  *(float *)&_XMM0 = FLOAT_1_0;
LABEL_105:
  args->inout_fadeCounter = v16;
  args->inout_fadeState = inout_fadeState;
  return *(float *)&_XMM0;
}

/*
==============
compare_hudelems
==============
*/
__int64 compare_hudelems(const void *pe0, const void *pe1)
{
  float v2; 

  v2 = *(float *)(*(_QWORD *)pe0 + 152i64) - *(float *)(*(_QWORD *)pe1 + 152i64);
  if ( v2 >= 0.0 )
    return v2 > 0.0;
  else
    return 0xFFFFFFFFi64;
}

