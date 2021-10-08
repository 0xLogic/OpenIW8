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

float __fastcall AlignHudElemY(int alignOrg, double y, double height)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  if ( (alignOrg & 3u) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 388, ASSERT_TYPE_ASSERT, "( ( alignY == 0 || alignY == 1 || alignY == 2 ) )", "( alignOrg ) = %i", alignOrg) )
    __debugbreak();
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rcx+rbx*4]
    vmovaps xmm6, [rsp+58h+var_18]
    vsubss  xmm0, xmm7, xmm0
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return *(float *)&_XMM0;
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
  __int64 v13; 
  const dvar_t *v31; 
  const dvar_t *v50; 
  const dvar_t *v57; 
  const dvar_t *v60; 
  const dvar_t *v63; 
  const dvar_t *v66; 
  const dvar_t *v69; 
  char v72; 
  char v73; 
  bool v77; 
  bool v81; 
  char v82; 
  char v83; 
  const dvar_t *v104; 
  char v106; 
  char v136; 
  char v137; 
  bool v145; 
  bool v146; 
  CgGlobalsMP *LocalClientGlobals; 
  CgCompassSystemMP *v148; 
  char v149; 
  GfxFont *FontHandle; 
  const char *label; 
  GfxFont *v195; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  __int64 padBottom; 
  float padBottoma; 
  float padBottomb; 
  float padBottomc; 
  float padBottomd; 
  float padBottome; 
  vec2_t *outNormal; 
  float outNormala; 
  float outNormalb; 
  float outNormalc; 
  float outNormald; 
  float *outDist; 
  float outDista; 
  float outDistb; 
  float outDistc; 
  __int64 angle; 
  float anglea; 
  float angleb; 
  float anglec; 
  float v238; 
  float v239; 
  float h; 
  float w; 
  vec2_t screenPos; 
  vec4_t v245; 
  vec4_t color; 
  vec4_t x; 
  vec2_t outScreenPos; 
  char v249; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  v13 = localClientNum;
  _RDI = args;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  [rsp+190h+var_120], xmm7
  }
  if ( !args && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1424, ASSERT_TYPE_ASSERT, "(args)", (const char *)&queryFormat, "args") )
    __debugbreak();
  if ( !_RDI->arrowMaterial && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1425, ASSERT_TYPE_ASSERT, "(args->arrowMaterial)", (const char *)&queryFormat, "args->arrowMaterial") )
    __debugbreak();
  _RAX = ScrPlace_GetActivePlacement((const LocalClientNum_t)v13);
  _RBX = DVARFLT_waypointIconWidth;
  _RSI = _RAX;
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rax+4]
    vaddss  xmm1, xmm0, dword ptr [rax]
    vmulss  xmm14, xmm1, xmm6
  }
  if ( !DVARFLT_waypointIconWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointIconWidth") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, dword ptr [rdi+60h]
  }
  _RBX = DVARFLT_waypointIconHeight;
  __asm
  {
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  [rsp+190h+var_12C], xmm2
  }
  if ( !DVARFLT_waypointIconHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointIconHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, dword ptr [rdi+60h]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rdi+48h]
  }
  v31 = DVARFLT_waypointOffscreenDistanceThresholdAlpha;
  __asm
  {
    vmulss  xmm11, xmm14, dword ptr [rdi+50h]
    vmovss  [rsp+190h+var_130], xmm2
    vmulss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rdi+4Ch]
    vmovss  [rsp+190h+w], xmm1
    vmulss  xmm0, xmm2, dword ptr [rsi+4]
    vmovss  [rsp+190h+h], xmm0
  }
  if ( !DVARFLT_waypointOffscreenDistanceThresholdAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenDistanceThresholdAlpha") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  __asm { vmulss  xmm0, xmm14, dword ptr [rbx+28h] }
  _RBX = DVARFLT_waypointOffscreenPadLeft;
  __asm
  {
    vmulss  xmm2, xmm6, [rsp+190h+h]
    vmaxss  xmm15, xmm0, cs:__real@3dcccccd
    vaddss  xmm6, xmm2, xmm11
  }
  if ( !DVARFLT_waypointOffscreenPadLeft && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadLeft") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DVARFLT_waypointOffscreenPadRight;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rsi]
    vaddss  xmm13, xmm1, xmm6
  }
  if ( !DVARFLT_waypointOffscreenPadRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadRight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DVARFLT_waypointOffscreenPadTop;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rsi]
    vaddss  xmm12, xmm1, xmm6
  }
  if ( !DVARFLT_waypointOffscreenPadTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadTop") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  v50 = DVARFLT_waypointOffscreenPadBottom;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rsi+4]
    vaddss  xmm10, xmm1, xmm6
  }
  if ( !DVARFLT_waypointOffscreenPadBottom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenPadBottom") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+4]
    vmulss  xmm0, xmm1, dword ptr [rbx+28h]
    vaddss  xmm9, xmm0, xmm6
    vmulss  xmm6, xmm1, dword ptr [rdi+38h]
  }
  if ( CL_IsRenderingSplitScreen() )
  {
    v57 = DVARFLT_waypointSplitscreenScale;
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    __asm
    {
      vmovss  xmm0, [rsp+190h+var_12C]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    }
    v60 = DVARFLT_waypointSplitscreenScale;
    __asm { vmovss  [rsp+190h+var_12C], xmm1 }
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v60);
    __asm
    {
      vmovss  xmm0, [rsp+190h+var_130]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    }
    v63 = DVARFLT_waypointSplitscreenScale;
    __asm { vmovss  [rsp+190h+var_130], xmm1 }
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v63);
    __asm
    {
      vmovss  xmm0, [rsp+190h+w]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    }
    v66 = DVARFLT_waypointSplitscreenScale;
    __asm { vmovss  [rsp+190h+w], xmm1 }
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v66);
    __asm
    {
      vmovss  xmm0, [rsp+190h+h]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
    }
    v69 = DVARFLT_waypointSplitscreenScale;
    __asm { vmovss  [rsp+190h+h], xmm1 }
    if ( !DVARFLT_waypointSplitscreenScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointSplitscreenScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v69);
    __asm { vmulss  xmm11, xmm11, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbp+90h+var_110], xmm0
  }
  CG_WorldPosToScreenPosReal((LocalClientNum_t)v13, _RSI, &_RDI->worldPos, &outScreenPos);
  v72 = *((_BYTE *)_RDI + 104);
  v73 = v72;
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbp+90h+outScreenPos+4]
    vmovss  dword ptr [rbp+90h+outScreenPos+4], xmm1
  }
  screenPos = outScreenPos;
  if ( (v72 & 2) != 0 )
  {
    *(float *)&_XMM0 = UpdateFadeAndGetAlpha((LocalClientNum_t)v13, _RDI, _RSI, &screenPos);
    v72 = *((_BYTE *)_RDI + 104);
    v73 = v72;
    __asm { vmovss  [rsp+190h+var_120], xmm0 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+64h]
    vmovss  [rsp+190h+var_11C], xmm0
    vxorps  xmm8, xmm8, xmm8
  }
  if ( v72 < 0 || (*((_BYTE *)_RDI + 105) & 2) != 0 )
  {
    __asm
    {
      vmovss  [rsp+190h+padBottom], xmm9
      vmovaps xmm3, xmm12; padRight
      vmovaps xmm2, xmm13; padLeft
      vmovss  dword ptr [rsp+190h+fmt], xmm10
    }
    v81 = ClampScreenPosToEdges((LocalClientNum_t)v13, &screenPos, *(float *)&_XMM2, *(float *)&_XMM3, fmt, padBottoma, (vec2_t *)&color, x.v);
    v72 = *((_BYTE *)_RDI + 104);
    v77 = v81;
    __asm { vmovss  xmm6, [rbp+90h+x] }
    v73 = v72;
  }
  else
  {
    v77 = 0;
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  v82 = v72;
  v83 = v73;
  __asm
  {
    vmovss  xmm9, dword ptr [rbp+90h+var_100+4]
    vmovss  xmm10, dword ptr [rbp+90h+var_100]
  }
  if ( !v77 )
  {
    __asm { vmovss  xmm6, [rsp+190h+var_11C] }
    goto LABEL_67;
  }
  __asm { vcomiss xmm6, xmm8 }
  if ( (v72 & 8) != 0 )
  {
    __asm
    {
      vxorps  xmm1, xmm9, cs:__xmm@80000000800000008000000080000000; X
      vmovaps xmm0, xmm10; Y
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42652ee0
      vaddss  xmm6, xmm1, cs:__real@43340000
    }
    v82 = v72;
    v83 = v73;
LABEL_67:
    __asm
    {
      vmovss  xmm12, [rsp+190h+var_120]
      vmovss  xmm13, cs:__real@3f000000
    }
    goto LABEL_68;
  }
  __asm { vmovss  xmm3, dword ptr [rbp+90h+var_110+0Ch] }
  _ECX = 0;
  _EAX = v72 & 1;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vcomiss xmm6, xmm15
    vblendvps xmm0, xmm7, xmm3, xmm2
    vmovss  [rbp+90h+var_F4], xmm0
    vmovss  dword ptr [rbp+90h+var_100], xmm7
    vmovss  dword ptr [rbp+90h+var_100+4], xmm7
    vmovss  [rbp+90h+var_F8], xmm7
    vmovd   xmm1, ecx
  }
  _EAX = v72 & 0x10;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, [rbp+90h+var_F4]
    vblendvps xmm0, xmm8, xmm3, xmm2
    vmovss  dword ptr [rbp+90h+var_110+0Ch], xmm0
    vmovss  xmm12, [rsp+190h+var_120]
  }
  if ( (v72 & 2) != 0 )
  {
    __asm
    {
      vmulss  xmm0, xmm1, xmm12
      vmovss  [rbp+90h+var_F4], xmm0
    }
  }
  v104 = DVARFLT_waypointOffscreenScaleLength;
  if ( !DVARFLT_waypointOffscreenScaleLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenScaleLength") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v104);
  __asm
  {
    vmulss  xmm0, xmm14, dword ptr [rbx+28h]
    vcomiss xmm6, xmm0
  }
  if ( v106 )
  {
    __asm { vdivss  xmm6, xmm6, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenScaleSmallest, "waypointOffscreenScaleSmallest");
    __asm
    {
      vmulss  xmm2, xmm0, xmm6
      vsubss  xmm1, xmm7, xmm6
      vaddss  xmm0, xmm2, xmm1
    }
  }
  else
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenScaleSmallest, "waypointOffscreenScaleSmallest");
  }
  v146 = (*((_BYTE *)_RDI + 105) & 2) == 0;
  __asm
  {
    vmulss  xmm4, xmm0, [rsp+190h+var_12C]
    vmulss  xmm5, xmm0, [rsp+190h+var_130]
    vmovss  [rsp+190h+var_12C], xmm4
    vmovss  [rsp+190h+var_130], xmm5
    vxorps  xmm0, xmm0, xmm0
  }
  if ( !v146 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+60h]
      vmulss  xmm1, xmm3, [rsp+190h+w]
      vmulss  xmm0, xmm3, [rsp+190h+h]
      vmovss  [rsp+190h+h], xmm0
      vmovss  [rsp+190h+w], xmm1
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm3, xmm4, xmm4
      vaddss  xmm0, xmm3, xmm1
      vmulss  xmm2, xmm0, cs:__real@3e800000
      vsqrtss xmm0, xmm2, xmm2
    }
  }
  __asm
  {
    vaddss  xmm2, xmm0, xmm11
    vmulss  xmm0, xmm10, xmm2
    vaddss  xmm1, xmm0, dword ptr [rsp+190h+screenPos]
    vmulss  xmm2, xmm9, xmm2
    vaddss  xmm0, xmm2, dword ptr [rsp+190h+screenPos+4]
    vmovss  [rbp+90h+y], xmm0
    vmovss  [rbp+90h+x], xmm1
  }
  ScrPlace_HiResApplyRect(x.v, &x.v[1], &w, &h);
  __asm
  {
    vxorps  xmm1, xmm9, cs:__xmm@80000000800000008000000080000000; X
    vmovaps xmm0, xmm10; Y
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm4, xmm0, cs:__real@42652ee0
    vmovss  xmm0, [rbp+90h+y]
    vmovss  xmm3, [rsp+190h+h]; h
    vmovss  xmm13, cs:__real@3f000000
    vmulss  xmm2, xmm13, [rsp+190h+w]
    vmovss  [rsp+190h+angle], xmm4
    vmovss  dword ptr [rsp+190h+outDist], xmm7
    vmulss  xmm1, xmm13, xmm3
    vsubss  xmm1, xmm0, xmm1; y
    vmovss  xmm0, [rbp+90h+x]
    vmovss  dword ptr [rsp+190h+outNormal], xmm7
    vsubss  xmm0, xmm0, xmm2; x
    vmovss  xmm2, [rsp+190h+w]; w
    vmovss  [rsp+190h+padBottom], xmm8
    vmovss  dword ptr [rsp+190h+fmt], xmm8
  }
  CL_DrawStretchPicPhysicalRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, padBottomb, outNormala, outDista, anglea, 0, &color, _RDI->arrowMaterial);
  v82 = *((_BYTE *)_RDI + 104);
  __asm { vmovss  xmm6, [rsp+190h+var_11C] }
  v83 = v82;
LABEL_68:
  v136 = v83;
  if ( (v82 & 0x40) != 0 || v77 || (v82 & 0x20) == 0 || (*((_BYTE *)_RDI + 105) & 2) != 0 )
  {
    v137 = *((_BYTE *)_RDI + 105);
    if ( (v137 & 2) != 0 && v77 )
    {
      __asm
      {
        vmulss  xmm1, xmm10, xmm11
        vaddss  xmm1, xmm1, dword ptr [rsp+190h+screenPos]
        vmulss  xmm2, xmm9, xmm11
        vmovss  dword ptr [rsp+190h+screenPos], xmm1
        vaddss  xmm1, xmm2, dword ptr [rsp+190h+screenPos+4]
        vmovss  dword ptr [rsp+190h+screenPos+4], xmm1
      }
    }
    else if ( (v82 & 0x40) != 0 )
    {
      v82 = v136;
      __asm { vmovups xmm0, xmmword ptr [rdi+20h] }
      screenPos = outScreenPos;
      __asm { vmovups xmmword ptr [rbp+90h+var_110], xmm0 }
    }
    if ( (v82 & 2) != 0 )
    {
      if ( (v82 & 4) != 0 )
      {
        __asm { vmovss  dword ptr [rbp+90h+var_110+0Ch], xmm12 }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm12, dword ptr [rbp+90h+var_110+0Ch]
          vmovss  dword ptr [rbp+90h+var_110+0Ch], xmm1
        }
      }
    }
    if ( (v137 & 1) == 0 )
    {
      *(float *)&_XMM0 = GetScaleForDistance((LocalClientNum_t)v13, &_RDI->worldPos);
      __asm
      {
        vmulss  xmm2, xmm0, [rsp+190h+var_12C]
        vmulss  xmm0, xmm0, [rsp+190h+var_130]
        vmovss  [rsp+190h+var_130], xmm0
        vmovss  [rsp+190h+var_12C], xmm2
      }
    }
    *(float *)&_XMM0 = CG_GetScreenCenterFadeScaler((LocalClientNum_t)v13, _RSI, &screenPos);
    v146 = _RDI->iconMaterial == NULL;
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rbp+90h+var_110+0Ch]
      vmovss  dword ptr [rbp+90h+var_110+0Ch], xmm0
    }
    if ( !v146 )
    {
      ScrPlace_HiResApplyRect((float *)&screenPos, (float *)&screenPos + 1, &v239, &v238);
      if ( _RDI->backgroundIconMaterial )
      {
        v145 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80);
        v146 = !v145;
        if ( v145 )
        {
          LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v13);
          v146 = !LocalClientGlobals->m_isMLGSpectator;
          if ( LocalClientGlobals->m_isMLGSpectator )
          {
            if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
            {
              LODWORD(angle) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
              LODWORD(outDist) = 2;
              LODWORD(outNormal) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", outNormal, outDist, angle) )
                __debugbreak();
            }
            if ( (unsigned int)v13 >= CgCompassSystem::ms_allocatedCount )
            {
              LODWORD(outNormal) = CgCompassSystem::ms_allocatedCount;
              LODWORD(padBottom) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", padBottom, outNormal) )
                __debugbreak();
            }
            if ( !CgCompassSystem::ms_compassSystemArray[v13] )
            {
              LODWORD(outNormal) = v13;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", outNormal) )
                __debugbreak();
            }
            v148 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[v13];
            CgCompassSystemMP::GetDefaultFriendlyCompassColor(v148, &color);
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+90h+var_100]
              vucomiss xmm1, dword ptr [rbp+90h+var_110]
              vmovss  xmm0, dword ptr [rbp+90h+var_110+0Ch]
              vmovss  [rbp+90h+var_F4], xmm0
            }
            if ( !v149 )
              goto LABEL_100;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+90h+var_100+4]
              vucomiss xmm0, dword ptr [rbp+90h+var_110+4]
            }
            if ( !v149 )
              goto LABEL_100;
            __asm
            {
              vmovss  xmm0, [rbp+90h+var_F8]
              vucomiss xmm0, dword ptr [rbp+90h+var_110+8]
            }
            if ( v149 )
            {
              CgCompassSystemMP::GetFriendlyCompassColor(v148, &v245, LocalClientGlobals);
            }
            else
            {
LABEL_100:
              CgCompassSystemMP::GetDefaultEnemyCompassColor(v148, &x);
              __asm
              {
                vmovss  xmm1, [rbp+90h+x]
                vucomiss xmm1, dword ptr [rbp+90h+var_110]
                vmovss  xmm0, dword ptr [rbp+90h+var_110+0Ch]
                vmovss  [rbp+90h+var_E4], xmm0
              }
              if ( v146 )
              {
                __asm
                {
                  vmovss  xmm0, [rbp+90h+y]
                  vucomiss xmm0, dword ptr [rbp+90h+var_110+4]
                }
                if ( v146 )
                {
                  __asm
                  {
                    vmovss  xmm0, [rbp+90h+var_E8]
                    vucomiss xmm0, dword ptr [rbp+90h+var_110+8]
                  }
                  if ( v146 )
                    CgCompassSystemMP::GetEnemyCompassColor(v148, &v245, LocalClientGlobals);
                }
              }
            }
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+90h+var_110]
          vucomiss xmm0, xmm7
        }
        if ( v146 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+90h+var_110+4]
            vucomiss xmm0, xmm7
          }
          if ( v146 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+90h+var_110+8]
              vucomiss xmm0, xmm7
            }
            if ( v146 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+90h+var_110+0Ch]
                vmulss  xmm1, xmm0, cs:__real@3f333333
                vmovss  dword ptr [rbp+90h+var_110+0Ch], xmm1
              }
            }
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+190h+screenPos+4]
          vmulss  xmm2, xmm13, [rsp+190h+var_12C]
          vmovss  xmm3, [rsp+190h+var_130]; h
          vmovss  [rsp+190h+angle], xmm6
          vmovss  dword ptr [rsp+190h+outDist], xmm7
          vmulss  xmm1, xmm13, xmm3
          vsubss  xmm1, xmm0, xmm1; y
          vmovss  xmm0, dword ptr [rsp+190h+screenPos]
          vmovss  dword ptr [rsp+190h+outNormal], xmm7
          vsubss  xmm0, xmm0, xmm2; x
          vmovss  xmm2, [rsp+190h+var_12C]; w
          vmovss  [rsp+190h+padBottom], xmm8
          vmovss  dword ptr [rsp+190h+fmt], xmm8
        }
        CL_DrawStretchPicPhysicalRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, padBottomc, outNormalb, outDistb, angleb, 0, &v245, _RDI->backgroundIconMaterial);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+90h+var_110+0Ch]
          vmulss  xmm1, xmm0, cs:__real@40000000
          vcmpltss xmm0, xmm7, xmm1
          vblendvps xmm0, xmm1, xmm7, xmm0
          vmovss  dword ptr [rbp+90h+var_110+0Ch], xmm0
          vmovss  dword ptr [rbp+90h+var_110+8], xmm7
          vmovss  dword ptr [rbp+90h+var_110+4], xmm7
          vmovss  dword ptr [rbp+90h+var_110], xmm7
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+screenPos+4]
        vmulss  xmm2, xmm13, [rsp+190h+var_12C]
        vmovss  xmm3, [rsp+190h+var_130]; h
        vmovss  [rsp+190h+angle], xmm6
        vmovss  dword ptr [rsp+190h+outDist], xmm7
        vmulss  xmm1, xmm13, xmm3
        vsubss  xmm1, xmm0, xmm1; y
        vmovss  xmm0, dword ptr [rsp+190h+screenPos]
        vmovss  dword ptr [rsp+190h+outNormal], xmm7
        vsubss  xmm0, xmm0, xmm2; x
        vmovss  xmm2, [rsp+190h+var_12C]; w
        vmovss  [rsp+190h+padBottom], xmm8
        vmovss  dword ptr [rsp+190h+fmt], xmm8
      }
      CL_DrawStretchPicPhysicalRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, padBottomd, outNormalc, outDistc, anglec, 0, &v245, _RDI->iconMaterial);
    }
    if ( _RDI->label )
    {
      _RBX = DVARFLT_objectiveFontSize;
      if ( !DVARFLT_objectiveFontSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFontSize") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RBX = DVARFLT_objectiveTextOffsetY;
      if ( !DVARFLT_objectiveTextOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveTextOffsetY") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vmulss  xmm6, xmm0, dword ptr [rsi+4]
        vmovaps xmm2, xmm7; scale
      }
      FontHandle = UI_GetFontHandle(_RSI, 2, *(float *)&_XMM2);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rsp+190h+screenPos+4]
        vmulss  xmm0, xmm7, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      }
      label = _RDI->label;
      __asm
      {
        vmovss  dword ptr [rsp+190h+screenPos+4], xmm1
        vmulss  xmm7, xmm0, dword ptr [rsi]
        vmulss  xmm6, xmm0, dword ptr [rsi+4]
      }
      v195 = FontHandle;
      R_TextWidth(label, 0x7FFFFFFF, FontHandle);
      __asm
      {
        vmovss  xmm2, dword ptr [rsp+190h+screenPos]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsp+190h+screenPos+4]
        vmulss  xmm3, xmm1, xmm13
        vmovss  dword ptr [rsp+190h+outNormal], xmm6
        vsubss  xmm3, xmm2, xmm3; x
        vmovss  [rsp+190h+padBottom], xmm7
        vmovss  dword ptr [rsp+190h+fmt], xmm0
      }
      CL_DrawTextPhysical(_RDI->label, 0x7FFFFFFF, v195, *(float *)&_XMM3, fmtd, padBottome, outNormald, &v245, 3);
    }
  }
  _R11 = &v249;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CG_GetScreenCenterFadeScaler
==============
*/
float CG_GetScreenCenterFadeScaler(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, const vec2_t *screenPos)
{
  char v11; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v34; 

  _RSI = screenPos;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1373, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  _RBX = DVARFLT_waypointScreenCenterFadeRadius;
  if ( !DVARFLT_waypointScreenCenterFadeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeRadius") )
    __debugbreak();
  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( !v11 )
    goto LABEL_25;
  if ( !ScrPlace_GetActivePlacement(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1379, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vmulss  xmm1, xmm2, dword ptr [rbx+20h]
    vmovss  xmm0, dword ptr [rsi]
    vmulss  xmm2, xmm2, dword ptr [rbx+24h]
  }
  _RBX = DVARFLT_waypointScreenCenterFadeRadius;
  __asm
  {
    vsubss  xmm4, xmm0, xmm1
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm2, xmm0, xmm2
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm6, xmm3, xmm1
  }
  if ( !DVARFLT_waypointScreenCenterFadeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
  }
  if ( v11 )
  {
    __asm
    {
      vmovaps [rsp+98h+var_48], xmm7
      vmovaps [rsp+98h+var_58], xmm8
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    _RDI = DVARFLT_waypointScreenCenterFadeRadius;
    _RBX = LocalClientGlobals;
    if ( !DVARFLT_waypointScreenCenterFadeRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, xmm0
      vdivss  xmm8, xmm6, xmm1
      vmovss  xmm6, dword ptr [rbx+738h]
    }
    _RBX = DVARFLT_waypointScreenCenterFadeAdsMin;
    if ( !DVARFLT_waypointScreenCenterFadeAdsMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeAdsMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    v34 = DVARFLT_waypointScreenCenterFadeHipMin;
    if ( !DVARFLT_waypointScreenCenterFadeHipMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointScreenCenterFadeHipMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm3, xmm1, dword ptr [rbx+28h]
      vmulss  xmm2, xmm6, xmm7
      vmovaps xmm7, [rsp+98h+var_48]
      vaddss  xmm0, xmm3, xmm2
      vmaxss  xmm0, xmm0, xmm8
      vmovaps xmm8, [rsp+98h+var_58]
    }
  }
  else
  {
LABEL_25:
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
CG_GetWaypointOffsetForStance
==============
*/
float CG_GetWaypointOffsetForStance(LocalClientNum_t localClientNum, centity_t *cent)
{
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
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+58h+result], xmm0
      }
      if ( GetStanceHeightFromDObj(localClientNum, cent, &result) )
      {
        __asm { vmovss  xmm0, [rsp+58h+result] }
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 4u) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointPlayerOffsetProne, "waypointPlayerOffsetProne");
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 3u) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointPlayerOffsetCrouch, "waypointPlayerOffsetCrouch");
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointPlayerOffsetStand, "waypointPlayerOffsetStand");
      }
    }
  }
  else
  {
    _RBX = DVARFLT_waypointPlayerOffsetCrouch;
    if ( !DVARFLT_waypointPlayerOffsetCrouch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointPlayerOffsetCrouch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_HudElem_AddDrawSurfForHudElemWaypoint
==============
*/
void CG_HudElem_AddDrawSurfForHudElemWaypoint(LocalClientNum_t localClientNum, const hudelem_t *elem)
{
  cg_t *LocalClientGlobals; 
  Material *v11; 
  bool v12; 
  bool v13; 
  int v17; 
  int scaleTime; 
  bool v29; 
  int v32; 
  char v33; 
  const ScreenPlacement *ActivePlacement; 
  double v52; 
  double v53; 
  double v54; 
  hudelem_color_t toColor; 
  FxSprite sprite; 
  vec2_t outScreenPos; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  BG_LerpHudColors(elem, LocalClientGlobals->time, &toColor);
  if ( toColor.a )
  {
    if ( (elem->flags & 0x400) != 0 )
    {
      v11 = CG_Draw_MaterialHandleForIndex(localClientNum, elem->materialIndex);
      if ( v11 )
      {
        v12 = elem->scaleTime == 0;
        v13 = elem->scaleTime <= 0;
        __asm
        {
          vmovaps [rsp+0E8h+var_28], xmm6
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, dword ptr [rbx+58h]
          vmovaps [rsp+0E8h+var_58], xmm9
          vxorps  xmm9, xmm9, xmm9
        }
        if ( !v13 )
        {
          v17 = CG_GetLocalClientGlobals(localClientNum)->time - elem->scaleStartTime;
          scaleTime = elem->scaleTime;
          v12 = v17 == scaleTime;
          if ( v17 < scaleTime )
          {
            __asm
            {
              vmovaps [rsp+0E8h+var_48], xmm8
              vxorps  xmm8, xmm8, xmm8
              vcvtsi2ss xmm8, xmm8, dword ptr [rbx+64h]
            }
            v12 = v17 == 0;
            if ( v17 > 0 )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm1, xmm1, ecx
                vcvtsi2ss xmm0, xmm0, eax
                vmovaps [rsp+0E8h+var_38], xmm7
                vdivss  xmm7, xmm1, xmm0
                vcomiss xmm7, xmm9
                vcomiss xmm7, cs:__real@3f800000
                vmovsd  xmm0, cs:__real@3ff0000000000000
                vmovsd  [rsp+0E8h+var_B0], xmm0
                vxorpd  xmm1, xmm1, xmm1
                vmovsd  [rsp+0E8h+var_B8], xmm1
                vcvtss2sd xmm2, xmm7, xmm7
                vmovsd  [rsp+0E8h+var_C0], xmm2
              }
              v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 937, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v52, v53, v54);
              v12 = !v29;
              if ( v29 )
                __debugbreak();
              __asm
              {
                vsubss  xmm0, xmm6, xmm8
                vmulss  xmm1, xmm0, xmm7
                vmovaps xmm7, [rsp+0E8h+var_38]
                vaddss  xmm6, xmm1, xmm8
              }
            }
            else
            {
              __asm { vmovaps xmm6, xmm8 }
            }
            __asm { vmovaps xmm8, [rsp+0E8h+var_48] }
          }
        }
        __asm { vucomiss xmm6, xmm9 }
        if ( !v12 )
        {
          if ( (elem->flags & 0x200) != 0 )
            __asm { vmulss  xmm6, xmm6, cs:__real@3b8ce704 }
          v32 = (elem->flags & 0x200) != 0 ? 3 : 0;
          if ( GetWaypointEntPos(localClientNum, elem, &sprite.pos) )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointScreenCenterFadeRadius, "waypointScreenCenterFadeRadius");
            __asm { vcomiss xmm0, xmm9 }
            if ( v33 | v12 )
              goto LABEL_21;
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            if ( !CG_WorldPosToScreenPosReal(localClientNum, ActivePlacement, &sprite.pos, &outScreenPos) )
              goto LABEL_21;
            *(float *)&_XMM0 = CG_GetScreenCenterFadeScaler(localClientNum, ActivePlacement, &outScreenPos);
            __asm { vucomiss xmm0, cs:__real@3f800000 }
            if ( v12 )
              goto LABEL_21;
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
              vmulss  xmm0, xmm1, xmm0
              vcvttss2si ecx, xmm0
            }
            toColor.a = _ECX;
            if ( (_BYTE)_ECX )
            {
LABEL_21:
              __asm
              {
                vmovss  xmm2, cs:__real@3b808081
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, eax
                vmulss  xmm0, xmm0, xmm2
                vmovss  dword ptr [rsp+0E8h+sprite.rgbaColor], xmm0
                vmulss  xmm0, xmm1, xmm2
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, eax
                vmovss  dword ptr [rsp+0E8h+sprite.rgbaColor+4], xmm0
                vmulss  xmm0, xmm1, xmm2
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, eax
                vmovss  dword ptr [rsp+0E8h+sprite.rgbaColor+8], xmm0
                vmulss  xmm0, xmm1, xmm2
                vmovss  dword ptr [rsp+0E8h+sprite.rgbaColor+0Ch], xmm0
                vmovss  [rsp+0E8h+sprite.radius], xmm6
                vmovss  [rsp+0E8h+sprite.minScreenRadius], xmm9
              }
              sprite.flags = v32;
              sprite.material = v11;
              FX_SpriteAdd(&sprite);
            }
          }
        }
        __asm
        {
          vmovaps xmm6, [rsp+0E8h+var_28]
          vmovaps xmm9, [rsp+0E8h+var_58]
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
        __asm
        {
          vmovss  xmm0, [rsp+0CC8h+cghe.x]
          vaddss  xmm1, xmm0, [rsp+0CC8h+cghe.labelWidth]
          vmovss  [rsp+0CC8h+cghe.x], xmm1
        }
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

bool __fastcall ClampScreenPosToEdges(LocalClientNum_t localClientNum, vec2_t *inOutPoint, double padLeft, double padRight, float padTop)
{
  const dvar_t *v40; 
  const dvar_t *v42; 
  const dvar_t *v46; 
  char v50; 
  char v51; 
  bool v52; 
  bool result; 
  float fmt; 
  float fmta; 
  float t1; 
  float t1a; 
  float s2; 
  float s2a; 
  float v114; 
  float v115; 
  char v122; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = inOutPoint;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps [rsp+128h+var_B8], xmm14
    vmovaps [rsp+128h+var_C8], xmm15
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  _RAX = ScrPlace_GetActivePlacement(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  xmm9, cs:__real@3f000000
    vmulss  xmm14, xmm9, dword ptr [rax+20h]
    vmulss  xmm15, xmm9, dword ptr [rax+24h]
    vsubss  xmm4, xmm0, xmm14
    vmovss  dword ptr [rbx], xmm4
    vsubss  xmm3, xmm1, xmm15
    vmovss  dword ptr [rbx+4], xmm3
    vmovss  [rsp+128h+var_D0], xmm0
    vaddss  xmm0, xmm6, dword ptr [rax+58h]
    vsubss  xmm12, xmm0, xmm14
    vmovss  [rsp+128h+var_CC], xmm1
    vmovss  xmm1, dword ptr [rax+20h]
    vsubss  xmm0, xmm1, dword ptr [rax+60h]
    vaddss  xmm2, xmm0, xmm7
    vmovss  xmm0, [rsp+128h+padTop]
    vaddss  xmm1, xmm0, dword ptr [rax+5Ch]
    vmovss  xmm0, dword ptr [rax+24h]
    vsubss  xmm10, xmm1, xmm15
    vsubss  xmm1, xmm0, dword ptr [rax+64h]
    vsubss  xmm11, xmm14, xmm2
    vaddss  xmm2, xmm1, [rsp+128h+padBottom]
  }
  _RBP = _RAX;
  __asm
  {
    vcomiss xmm4, xmm12
    vsubss  xmm6, xmm15, xmm2
    vcomiss xmm4, xmm11
    vcomiss xmm3, xmm10
    vcomiss xmm3, xmm6
  }
  v40 = DVARBOOL_waypointOffscreenRoundedCorners;
  if ( !DVARBOOL_waypointOffscreenRoundedCorners && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenRoundedCorners") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  if ( v40->current.enabled )
  {
    v42 = DVARFLT_waypointOffscreenCornerRadius;
    if ( !DVARFLT_waypointOffscreenCornerRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointOffscreenCornerRadius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vaddss  xmm1, xmm0, dword ptr [rbp+0]
      vmulss  xmm2, xmm1, dword ptr [rsi+28h]
    }
    v46 = DVARBOOL_waypointDebugDraw;
    __asm
    {
      vmulss  xmm9, xmm2, xmm9
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm7, dword ptr [rbx]
      vsubss  xmm3, xmm11, xmm9
    }
    v52 = !(v50 | v51);
    __asm { vcomiss xmm7, dword ptr [rbx+4] }
    _EAX = v52;
    _ECX = 0;
    __asm { vmovd   xmm0, eax }
    _EAX = v52;
    __asm
    {
      vmovd   xmm1, ecx
      vpcmpeqd xmm1, xmm0, xmm1
      vaddss  xmm2, xmm9, xmm12
      vblendvps xmm2, xmm2, xmm3, xmm1
      vmovss  [rsp+128h+var_D8], xmm2
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vaddss  xmm2, xmm9, xmm10
      vpcmpeqd xmm1, xmm0, xmm1
      vsubss  xmm3, xmm6, xmm9
      vblendvps xmm2, xmm2, xmm3, xmm1
      vmovss  [rsp+128h+var_D4], xmm2
    }
    if ( !DVARBOOL_waypointDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDebugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    __asm
    {
      vmovss  xmm10, [rsp+128h+var_D8]
      vmovss  xmm11, [rsp+128h+var_D4]
    }
    if ( v46->current.enabled )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@40400000
        vaddss  xmm0, xmm11, xmm15
        vaddss  xmm2, xmm10, xmm14
        vmovss  [rsp+128h+var_F0], xmm8
        vsubss  xmm1, xmm0, xmm8; y
        vmovss  [rsp+128h+s2], xmm8
        vsubss  xmm0, xmm2, xmm8; x
        vmovss  [rsp+128h+t1], xmm7
        vmovaps xmm3, xmm6; h
        vmovaps xmm2, xmm6; w
        vmovss  dword ptr [rsp+128h+fmt], xmm7
      }
      CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, t1, s2, v114, &colorYellow, cgMedia.whiteMaterial);
      __asm
      {
        vaddss  xmm0, xmm15, dword ptr [rbx+4]
        vaddss  xmm3, xmm14, dword ptr [rbx]
        vmovss  [rsp+128h+var_F0], xmm8
        vsubss  xmm1, xmm0, xmm8; y
        vmovss  [rsp+128h+s2], xmm8
        vsubss  xmm0, xmm3, xmm8; x
        vmovss  [rsp+128h+t1], xmm7
        vmovaps xmm3, xmm6; h
        vmovaps xmm2, xmm6; w
        vmovss  dword ptr [rsp+128h+fmt], xmm7
      }
      CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, t1a, s2a, v115, &colorGreen, cgMedia.whiteMaterial);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vsubss  xmm4, xmm0, xmm10
      vsubss  xmm3, xmm1, xmm11
      vmulss  xmm2, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm6, xmm1, xmm1
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm5, xmm4, xmm1
      vmulss  xmm2, xmm3, xmm1
    }
    if ( v52 )
      __asm { vcomiss xmm5, xmm7 }
    else
      __asm { vcomiss xmm5, xmm7 }
    if ( v52 )
      __asm { vcomiss xmm2, xmm7 }
    else
      __asm { vcomiss xmm2, xmm7 }
  }
  __asm
  {
    vaddss  xmm0, xmm14, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm2, xmm15, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+4], xmm2
    vmovaps xmm15, [rsp+128h+var_C8]
  }
  _R11 = &v122;
  result = 0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  return result;
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
  Material *v13; 
  Material *v14; 
  const char *Name; 
  Material *v16; 
  const ScreenPlacement *ActivePlacement; 
  __int64 v44; 
  char *fmt; 
  float t1[2]; 
  vec4_t *v47; 
  Material *v48; 
  vec4_t *color; 
  Material *material; 
  char dest[64]; 

  __asm
  {
    vmovaps [rsp+118h+var_78], xmm10
    vxorps  xmm10, xmm10, xmm10
    vucomiss xmm10, dword ptr [r8+83Ch]
  }
  _RSI = cghe;
  if ( (unsigned __int64)&v44 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 811, ASSERT_TYPE_ASSERT, "(cghe->color[3])", (const char *)&queryFormat, "cghe->color[3]") )
    __debugbreak();
  v13 = CG_Draw_MaterialHandleForIndex(localClientNum, elem->materialIndex);
  v14 = v13;
  if ( v13 )
  {
    __asm
    {
      vmovaps [rsp+118h+var_38], xmm6
      vmovaps [rsp+118h+var_48], xmm7
      vmovaps [rsp+118h+var_58], xmm8
      vmovaps [rsp+118h+var_68], xmm9
    }
    Name = Material_GetName(v13);
    if ( !Name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 818, ASSERT_TYPE_ASSERT, "(faceMaterialName)", (const char *)&queryFormat, "faceMaterialName") )
      __debugbreak();
    Core_strcpy(dest, 0x40ui64, Name);
    I_strcat(dest, 0x40ui64, "needle");
    v16 = Material_RegisterHandle(dest, IMAGE_TRACK_HUD);
    GetHudElemTime(elem, _RSI->timeNow);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    if ( elem->duration )
    {
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm0, xmm1, xmm0
      }
    }
    else
    {
      __asm { vmulss  xmm0, xmm0, cs:__real@3bc49ba6; angle }
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovaps xmm9, xmm0 }
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    *(float *)&_XMM0 = HudElemMaterialWidth(ActivePlacement, elem, _RSI);
    __asm { vmovaps xmm8, xmm0 }
    *(float *)&_XMM0 = HudElemMaterialHeight(ActivePlacement, elem, _RSI);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+10h]
      vsubss  xmm2, xmm1, xmm0
      vxorps  xmm2, xmm2, cs:__xmm@80000000800000008000000080000000; offsetY
      vmovaps xmm7, xmm0
    }
    *(float *)&_XMM0 = OffsetHudElemY(elem, _RSI, *(float *)&_XMM2);
    __asm { vmovss  xmm1, cs:__real@3f800000 }
    material = v14;
    color = &_RSI->color;
    __asm
    {
      vmovss  dword ptr [rsp+118h+var_E0], xmm1
      vmovss  dword ptr [rsp+118h+var_E8], xmm1
      vmovaps xmm1, xmm0; y
      vmovaps xmm6, xmm0
      vmovss  xmm0, dword ptr [rsi]; x
      vmovss  [rsp+118h+t1], xmm10
      vmovaps xmm3, xmm7; h
      vmovaps xmm2, xmm8; w
      vmovss  dword ptr [rsp+118h+fmt], xmm10
    }
    CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&fmt, t1[0], *(float *)&v47, *(float *)&v48, &_RSI->color, v14);
    __asm
    {
      vmovss  xmm1, dword ptr [rsi]; x
      vmovss  [rsp+118h+t1], xmm9
      vmovaps xmm3, xmm8; width
      vmovaps xmm2, xmm6; y
      vmovss  dword ptr [rsp+118h+fmt], xmm7
    }
    CG_DrawRotatedPicPhysical(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&fmt, t1[0], &_RSI->color, v16);
    __asm
    {
      vmovaps xmm9, [rsp+118h+var_68]
      vmovaps xmm8, [rsp+118h+var_58]
      vmovaps xmm7, [rsp+118h+var_48]
      vmovaps xmm6, [rsp+118h+var_38]
    }
  }
  __asm { vmovaps xmm10, [rsp+118h+var_78] }
}

/*
==============
DrawHudElemMaterial
==============
*/
void DrawHudElemMaterial(LocalClientNum_t localClientNum, const hudelem_t *elem, cg_hudelem_t *cghe)
{
  Material *v12; 
  const dvar_t *v13; 
  const ScreenPlacement *ActivePlacement; 
  const ScreenPlacement *v16; 
  const cg_t *LocalClientGlobals; 
  __int64 v32; 
  char *fmt; 
  vec4_t *color; 
  Material *material; 
  float v36; 

  __asm
  {
    vmovaps [rsp+0E8h+var_38], xmm6
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [r8+83Ch]
  }
  _RBX = cghe;
  if ( (unsigned __int64)&v32 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 848, ASSERT_TYPE_ASSERT, "(cghe->color[3])", (const char *)&queryFormat, "cghe->color[3]") )
    __debugbreak();
  v12 = CG_Draw_MaterialHandleForIndex(localClientNum, elem->materialIndex);
  if ( v12 )
  {
    v13 = DCONST_DVARBOOL_lui_footage_capture_enabled;
    if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled && (!CG_Draw_IsMPRealismMode(localClientNum) || (elem->flags & 0x20000) != 0) )
    {
      __asm
      {
        vmovaps [rsp+0E8h+var_48], xmm7
        vmovaps [rsp+0E8h+var_58], xmm8
        vmovaps [rsp+0E8h+var_68], xmm9
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      *(float *)&_XMM0 = HudElemMaterialWidth(ActivePlacement, elem, _RBX);
      __asm { vmovaps xmm7, xmm0 }
      v16 = ScrPlace_GetActivePlacement(localClientNum);
      *(float *)&_XMM0 = HudElemMaterialHeight(v16, elem, _RBX);
      __asm
      {
        vmovaps xmm8, xmm0
        vmovss  xmm0, dword ptr [rbx+10h]
        vsubss  xmm1, xmm0, xmm8
        vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000; offsetY
      }
      *(float *)&_XMM0 = OffsetHudElemY(elem, _RBX, *(float *)&_XMM2);
      __asm { vmovaps xmm9, xmm0 }
      if ( (elem->flags & 0x4000) != 0 )
      {
        if ( !g_CG_HudLighting_Public.enable )
        {
LABEL_16:
          __asm
          {
            vmovaps xmm8, [rsp+0E8h+var_58]
            vmovaps xmm7, [rsp+0E8h+var_48]
            vmovaps xmm9, [rsp+0E8h+var_68]
          }
          goto LABEL_17;
        }
        CG_HudLighting_DrawRequest();
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      CG_Draw_UpdateScramblerState(LocalClientGlobals, localClientNum);
      if ( !CG_Draw_IsScramblingActive(localClientNum) )
      {
        __asm
        {
          vucomiss xmm6, dword ptr [rbx+8]
          vmovss  xmm1, cs:__real@3f800000
          vmovss  xmm0, dword ptr [rbx]; x
          vmovss  [rsp+0E8h+var_B0], xmm1
          vmovss  dword ptr [rsp+0E8h+material], xmm1
          vmovss  dword ptr [rsp+0E8h+color], xmm6
          vmovaps xmm1, xmm9; y
          vmovaps xmm3, xmm8; h
          vmovaps xmm2, xmm7; w
          vmovss  dword ptr [rsp+0E8h+fmt], xmm6
        }
        CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&fmt, *(float *)&color, *(float *)&material, v36, &_RBX->color, v12);
      }
      goto LABEL_16;
    }
  }
LABEL_17:
  __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
}

/*
==============
DrawHudElemString
==============
*/
void DrawHudElemString(LocalClientNum_t localClientNum, const char *text, const hudelem_t *elem, cg_hudelem_t *cghe)
{
  bool v13; 
  bool v14; 
  const dvar_t *v16; 
  int fxBirthTime; 
  const cg_t *LocalClientGlobals; 
  int v29; 
  float fmt; 
  int fxDecayStartTime; 
  float soundTimeKeeper; 
  vec4_t resultColor; 

  _RDI = cghe;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 750, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !*text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 751, ASSERT_TYPE_ASSERT, "(text[0])", (const char *)&queryFormat, "text[0]") )
    __debugbreak();
  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 752, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  v13 = _RDI == NULL;
  if ( !_RDI )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 753, ASSERT_TYPE_ASSERT, "(cghe)", (const char *)&queryFormat, "cghe");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdi+83Ch]
  }
  if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 755, ASSERT_TYPE_ASSERT, "(cghe->color[3])", (const char *)&queryFormat, "cghe->color[3]") )
    __debugbreak();
  v16 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.enabled && (!CG_Draw_IsMPRealismMode(localClientNum) || (elem->flags & 0x20000) != 0) )
  {
    __asm
    {
      vmovaps [rsp+108h+var_48], xmm6
      vmovaps [rsp+108h+var_58], xmm7
      vmovaps [rsp+108h+var_68], xmm8
      vmovaps [rsp+108h+var_78], xmm9
    }
    ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+82Ch]
      vsubss  xmm2, xmm0, dword ptr [rdi+10h]; offsetY
    }
    *(float *)&_XMM0 = OffsetHudElemY(elem, _RDI, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+828h]; scale
      vmovaps xmm7, xmm0
    }
    *(double *)&_XMM0 = R_NormalizedTextScale(_RDI->font, *(float *)&_XMM1);
    __asm
    {
      vdivss  xmm1, xmm0, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm2, xmm1, dword ptr [rbx+14h]
      vmulss  xmm3, xmm2, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
      vmulss  xmm8, xmm3, dword ptr [rbx]
    }
    fxBirthTime = elem->fxBirthTime;
    __asm
    {
      vmovss  xmm9, dword ptr [rdi+82Ch]
      vmovaps xmm6, xmm0
    }
    if ( fxBirthTime && fxBirthTime > _RDI->timeNow )
      fxBirthTime = _RDI->timeNow;
    HudElemColorToVec4(localClientNum, &elem->glowColor, &resultColor);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( fxBirthTime )
    {
      v29 = SEH_PrintStrlen(text);
      CL_PlayTextFXPulseSounds(localClientNum, _RDI->timeNow, v29, fxBirthTime, elem->fxLetterTime, elem->fxDecayStartTime, &LocalClientGlobals->hudElemSound[elem->soundID].lastPlayedTime);
    }
    CG_Draw_UpdateScramblerState(LocalClientGlobals, localClientNum);
    if ( !CG_Draw_IsScramblingActive(localClientNum) )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi]; x
        vmovss  dword ptr [rsp+108h+soundTimeKeeper], xmm6
        vaddss  xmm0, xmm9, xmm7
        vmovss  [rsp+108h+fxDecayStartTime], xmm8
        vmovss  dword ptr [rsp+108h+fmt], xmm0
      }
      CL_DrawTextPhysicalWithEffects(text, 0x7FFFFFFF, _RDI->font, *(float *)&_XMM3, fmt, *(float *)&fxDecayStartTime, soundTimeKeeper, &_RDI->color, 3, &resultColor, NULL, NULL, fxBirthTime, elem->fxLetterTime);
    }
    __asm
    {
      vmovaps xmm8, [rsp+108h+var_68]
      vmovaps xmm7, [rsp+108h+var_58]
      vmovaps xmm6, [rsp+108h+var_48]
      vmovaps xmm9, [rsp+108h+var_78]
    }
  }
}

/*
==============
DrawSingleHudElem2d_GetHudElemInfo
==============
*/
void DrawSingleHudElem2d_GetHudElemInfo(LocalClientNum_t localClientNum, const hudelem_t *elem, cg_hudelem_t *cghe, char *hudElemString)
{
  __int64 v8; 
  const ScreenPlacement *ActivePlacement; 
  int font; 
  const ScreenPlacement *v14; 
  int v16; 
  GfxFont *FontHandle; 
  int label; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  char *v31; 
  const char *PlayerName; 
  char v33; 
  int v34; 
  int v35; 
  __int64 i; 
  char v37; 
  int waypointBackgroundType; 
  CgDrawSystem *DrawSystem; 
  int HudElemTime; 
  unsigned int v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  const char *v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  unsigned int v49; 
  int v50; 
  unsigned int v51; 
  unsigned int v52; 
  __int64 v53; 
  __int64 v57; 
  char *hudElemText; 
  __int64 v59; 
  char *v60; 
  __int64 v61; 
  __int64 v62; 
  int rotationTime; 
  bool v86; 
  int v87; 
  char *fmt; 
  __int64 v98; 
  __int64 v99; 
  float toScale; 
  const ScreenPlacement *v101; 
  char out_playerName[48]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  v8 = localClientNum;
  _RBX = hudElemString;
  _RDI = cghe;
  _RSI = elem;
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  font = _RSI->font;
  v101 = ActivePlacement;
  v14 = ActivePlacement;
  switch ( font )
  {
    case 0:
      goto $LN5_121;
    case 1:
      __asm { vmovss  xmm6, cs:__real@3f155555; jumptable 0000000141CCE70F case 1 }
      v16 = 4;
      goto LABEL_13;
    case 2:
      __asm { vmovss  xmm6, cs:__real@3ec00000; jumptable 0000000141CCE70F case 2 }
      v16 = 5;
      goto LABEL_13;
    case 3:
      v16 = 6;
      goto LABEL_12;
    case 4:
      v16 = 2;
      goto LABEL_12;
    case 5:
      v16 = 3;
      goto LABEL_12;
    case 6:
      __asm { vmovss  xmm6, cs:__real@3f155555; jumptable 0000000141CCE70F case 6 }
      v16 = 9;
      goto LABEL_13;
    case 7:
      __asm { vmovss  xmm6, cs:__real@3ec00000; jumptable 0000000141CCE70F case 7 }
      v16 = 10;
      goto LABEL_13;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 584, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
        __debugbreak();
$LN5_121:
      v16 = 0;
LABEL_12:
      __asm { vmovss  xmm6, cs:__real@3e800000 }
LABEL_13:
      BG_LerpFontScale(_RSI, _RDI->timeNow, &toScale);
      __asm
      {
        vmulss  xmm1, xmm6, [rsp+0F8h+toScale]
        vmulss  xmm2, xmm1, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
        vmulss  xmm2, xmm2, dword ptr [r12+4]; scale
        vmovss  dword ptr [rdi+828h], xmm2
      }
      FontHandle = UI_GetFontHandle(v14, v16, *(float *)&_XMM2);
      __asm { vmovss  xmm1, dword ptr [rdi+828h]; scale }
      _RDI->font = FontHandle;
      UI_TextHeight(FontHandle, *(float *)&_XMM1);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rdi+82Ch], xmm0
      }
      _RDI->hudElemLabel[0] = 0;
      label = _RSI->label;
      if ( label )
        SafeTranslateHudElemString((LocalClientNum_t)v8, label, _RDI->hudElemLabel, 1024);
      break;
  }
  _RDI->hudElemText[0] = 0;
  switch ( _RSI->type )
  {
    case HE_TYPE_TEXT:
      waypointBackgroundType = _RSI->waypointBackgroundType;
      if ( waypointBackgroundType )
        SafeTranslateHudElemString((LocalClientNum_t)v8, waypointBackgroundType, _RDI->hudElemText, 1024);
      goto LABEL_46;
    case HE_TYPE_VALUE:
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+90h]; jumptable 0000000141CCE836 case 2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovq   r9, xmm3
      }
      Com_sprintf(_RDI->hudElemText, 0x400ui64, "%g", *(double *)&_XMM3);
      goto LABEL_46;
    case HE_TYPE_PLAYERNAME:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+90h]; jumptable 0000000141CCE836 case 3
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vcvttss2si ebp, xmm4
      }
      if ( _EBP < 0 || _EBP >= cls.maxClients )
        goto LABEL_46;
      if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v8) )
        __debugbreak();
      if ( (unsigned int)v8 >= LODWORD(CgStatic::ms_allocatedCount) )
      {
        *(float *)&v99 = CgStatic::ms_allocatedCount;
        LODWORD(v98) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v98, v99) )
          __debugbreak();
      }
      if ( !CgStatic::ms_cgameStaticsArray[v8] )
      {
        LODWORD(v99) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v99) )
          __debugbreak();
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)CgStatic::ms_cgameStaticsArray[v8]->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( _EBP >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v99) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v98) = _EBP;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v98, v99) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * _EBP);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, _EBP);
      }
      if ( !CharacterInfo )
      {
        PlayerName = CL_Main_GetPlayerName((LocalClientNum_t)_EBP);
        goto LABEL_44;
      }
      if ( !CharacterInfo->infoValid )
      {
        PlayerName = UI_SafeTranslateString("MP/UNKNOWN_PLAYER");
LABEL_44:
        v31 = (char *)PlayerName;
        goto LABEL_45;
      }
      CG_Players_GetPlayerGamertag((const LocalClientNum_t)v8, _EBP, 0x2Fui64, out_playerName);
      if ( !out_playerName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 644, ASSERT_TYPE_ASSERT, "(name[0] != '\\0')", (const char *)&queryFormat, "name[0] != '\\0'") )
        __debugbreak();
      v31 = out_playerName;
LABEL_45:
      Core_strcpy(_RDI->hudElemText, 0x400ui64, v31);
      v14 = v101;
LABEL_46:
      v33 = _RDI->hudElemLabel[0];
      if ( v33 && _RDI->hudElemText[0] )
      {
        v34 = 0;
        v35 = 0;
        for ( i = 0i64; i < 1023; ++i )
        {
          v37 = _RDI->hudElemLabel[i];
          if ( !v37 )
            break;
          if ( v37 == 38 && _RDI->hudElemLabel[i + 1] == 38 && _RDI->hudElemLabel[i + 2] == 49 )
          {
            v35 += 3;
            break;
          }
          ++v34;
          _RBX[i] = v37;
          ++v35;
        }
        v57 = v34;
        if ( v34 < 1023i64 )
        {
          hudElemText = _RDI->hudElemText;
          do
          {
            if ( !*hudElemText )
              break;
            _RBX[v57] = *hudElemText;
            ++v34;
            ++v57;
            ++hudElemText;
          }
          while ( v57 < 1023 );
        }
        v59 = v34;
        if ( v34 < 1023i64 )
        {
          v60 = &_RDI->hudElemLabel[v35];
          do
          {
            if ( !*v60 )
              break;
            _RBX[v59] = *v60;
            ++v34;
            ++v59;
            ++v60;
          }
          while ( v59 < 1023 );
        }
        v61 = v34;
        v62 = 8i64;
        _RBX[v61] = 0;
        _RAX = _RDI->hudElemText;
        do
        {
          _RAX += 128;
          __asm { vmovups xmm0, xmmword ptr [rbx] }
          _RBX += 128;
          __asm
          {
            vmovups xmmword ptr [rax-80h], xmm0
            vmovups xmm1, xmmword ptr [rbx-70h]
            vmovups xmmword ptr [rax-70h], xmm1
            vmovups xmm0, xmmword ptr [rbx-60h]
            vmovups xmmword ptr [rax-60h], xmm0
            vmovups xmm1, xmmword ptr [rbx-50h]
            vmovups xmmword ptr [rax-50h], xmm1
            vmovups xmm0, xmmword ptr [rbx-40h]
            vmovups xmmword ptr [rax-40h], xmm0
            vmovups xmm1, xmmword ptr [rbx-30h]
            vmovups xmmword ptr [rax-30h], xmm1
            vmovups xmm0, xmmword ptr [rbx-20h]
            vmovups xmmword ptr [rax-20h], xmm0
            vmovups xmm1, xmmword ptr [rbx-10h]
            vmovups xmmword ptr [rax-10h], xmm1
          }
          --v62;
        }
        while ( v62 );
        __asm { vmovss  xmm3, dword ptr [rdi+828h]; scale }
        UI_TextWidth(_RDI->hudElemText, 0, _RDI->font, *(float *)&_XMM3);
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = CL_GetScreenAspectRatioDisplayPixel();
        __asm
        {
          vdivss  xmm1, xmm6, xmm0
          vmovss  dword ptr [rdi+818h], xmm1
        }
        _RDI->hudElemLabel[0] = 0;
        _RDI->labelWidth = 0.0;
        v33 = _RDI->hudElemLabel[0];
      }
      __asm { vxorps  xmm7, xmm7, xmm7 }
      if ( v33 )
      {
        __asm { vmovss  xmm3, dword ptr [rdi+828h]; scale }
        UI_TextWidth(_RDI->hudElemLabel, 0, _RDI->font, *(float *)&_XMM3);
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = CL_GetScreenAspectRatioDisplayPixel();
        __asm { vdivss  xmm1, xmm6, xmm0 }
      }
      else
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
      }
      __asm { vmovss  dword ptr [rdi+414h], xmm1 }
      if ( _RDI->hudElemText[0] )
      {
        __asm { vmovss  xmm3, dword ptr [rdi+828h]; scale }
        UI_TextWidth(_RDI->hudElemText, 0, _RDI->font, *(float *)&_XMM3);
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, eax
        }
        *(double *)&_XMM0 = CL_GetScreenAspectRatioDisplayPixel();
        __asm { vdivss  xmm1, xmm6, xmm0 }
      }
      else
      {
        __asm { vxorps  xmm1, xmm1, xmm1 }
      }
      __asm { vmovss  dword ptr [rdi+818h], xmm1 }
      switch ( _RSI->type )
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
          __asm { vaddss  xmm1, xmm1, dword ptr [rdi+414h]; jumptable 0000000141CCEED5 cases 1-3,5-10,14 }
          break;
        case HE_TYPE_MATERIAL:
        case HE_TYPE_CLOCK_DOWN:
        case HE_TYPE_CLOCK_UP:
          *(float *)&_XMM0 = HudElemMaterialWidth(v14, _RSI, _RDI);
          __asm { vaddss  xmm1, xmm0, dword ptr [rdi+414h] }
          break;
        case HE_TYPE_WAYPOINT:
          __asm
          {
            vxorps  xmm1, xmm1, xmm1; jumptable 0000000141CCEED5 case 13
            vcvtsi2ss xmm1, xmm1, dword ptr [rsi+54h]
          }
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 312, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
            __debugbreak();
          __asm { vxorps  xmm1, xmm1, xmm1 }
          break;
      }
      __asm { vmovss  dword ptr [rdi+0Ch], xmm1 }
      switch ( _RSI->type )
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
          __asm { vmovss  xmm0, dword ptr [rdi+82Ch]; jumptable 0000000141CCEF63 cases 1-3,5-10,14 }
          goto LABEL_95;
        case HE_TYPE_MATERIAL:
        case HE_TYPE_CLOCK_DOWN:
        case HE_TYPE_CLOCK_UP:
          *(float *)&_XMM0 = HudElemMaterialHeight(v14, _RSI, _RDI);
          goto LABEL_95;
        case HE_TYPE_WAYPOINT:
          __asm
          {
            vxorps  xmm0, xmm0, xmm0; jumptable 0000000141CCEF63 case 13
            vcvtsi2ss xmm0, xmm0, dword ptr [rsi+58h]
          }
LABEL_95:
          if ( _RDI->hudElemLabel[0] )
            __asm { vmaxss  xmm0, xmm0, dword ptr [rdi+82Ch] }
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 349, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid case") )
            __debugbreak();
          __asm { vxorps  xmm0, xmm0, xmm0 }
          break;
      }
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000
        vmovss  dword ptr [rdi+10h], xmm0
      }
      rotationTime = _RSI->rotationTime;
      v86 = rotationTime == 0;
      if ( rotationTime > 0 )
      {
        v87 = _RDI->timeNow - _RSI->rotationStartTime;
        v86 = _RDI->timeNow == _RSI->rotationStartTime;
        if ( v87 > 0 )
        {
          v86 = v87 == rotationTime;
          if ( v87 < rotationTime )
          {
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm1, xmm1, eax
              vcvtsi2ss xmm0, xmm0, ecx
              vdivss  xmm7, xmm1, xmm0
            }
          }
          else
          {
            __asm { vmovaps xmm7, xmm2 }
          }
        }
      }
      else
      {
        __asm { vmovaps xmm7, xmm2 }
      }
      __asm
      {
        vucomiss xmm7, xmm2
        vmovss  xmm0, dword ptr [rsi+14h]
      }
      if ( !v86 )
      {
        __asm
        {
          vsubss  xmm0, xmm0, dword ptr [rsi+18h]
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm0, xmm1, dword ptr [rsi+18h]
        }
      }
      __asm { vmovss  dword ptr [rdi+8], xmm0 }
      SetHudElemPos(v14, _RSI, _RDI);
      __asm
      {
        vmovaps xmm6, [rsp+0F8h+var_58]
        vmovaps xmm7, [rsp+0F8h+var_68]
      }
      return;
    case HE_TYPE_TIMER_DOWN:
    case HE_TYPE_TIMER_UP:
    case HE_TYPE_TIMER_STATIC:
      HudElemTime = GetHudElemTime(_RSI, _RDI->timeNow);
      v41 = HudElemTime / 1000 / 3600;
      v42 = HudElemTime / 1000 % 3600;
      v43 = (unsigned int)(v42 / 60);
      v44 = (unsigned int)(v42 % 60);
      if ( v41 )
        v45 = j_va("%i:%02i:%02i", v41, (unsigned int)v43, (unsigned int)v44);
      else
        v45 = j_va("%i:%02i", v43, v44);
      goto LABEL_60;
    case HE_TYPE_TENTHS_TIMER_DOWN:
    case HE_TYPE_TENTHS_TIMER_UP:
    case HE_TYPE_TENTHS_TIMER_STATIC:
      v48 = GetHudElemTime(_RSI, _RDI->timeNow);
      v49 = v48 / 100 / 36000;
      v50 = v48 / 100 % 36000;
      v51 = v50 / 600;
      v50 %= 600;
      v52 = v50 / 10;
      v53 = (unsigned int)(v50 % 10);
      if ( v49 )
      {
        LODWORD(fmt) = v53;
        v45 = j_va("%i:%02i:%02i.%i", v49, v51, v52, fmt);
      }
      else
      {
        v45 = j_va("%i:%02i.%i", v51, v52, v53);
      }
LABEL_60:
      CopyStringToHudElemString(v45, _RDI->hudElemText, v46, v47, (__int64)fmt, v98);
      goto LABEL_46;
    case HE_TYPE_TEXT_DEV:
      DrawSystem = CgDrawSystem::GetDrawSystem((const LocalClientNum_t)v8);
      DrawSystem->SetHudElemDevString(DrawSystem, _RSI->waypointBackgroundType, _RDI->hudElemText, 1024);
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
  unsigned int flags; 
  hudelem_color_t toColor; 
  WaypointDrawArgs args; 
  vec3_t outPos; 
  vec4_t resultColor; 

  _RBX = elem;
  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1667, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( _RBX->type != HE_TYPE_WAYPOINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1668, ASSERT_TYPE_ASSERT, "(elem->type == HE_TYPE_WAYPOINT)", (const char *)&queryFormat, "elem->type == HE_TYPE_WAYPOINT") )
    __debugbreak();
  if ( (_RBX->flags & 0x400) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1671, ASSERT_TYPE_ASSERT, "(!(elem->flags & HUDELEMFLAG_DRAW_3D))", (const char *)&queryFormat, "!(elem->flags & HUDELEMFLAG_DRAW_3D)") )
    __debugbreak();
  memset_0(&args, 0, sizeof(args));
  if ( !CG_GetFlashbangedRemainingTime(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    BG_LerpHudColors(_RBX, LocalClientGlobals->time, &toColor);
    if ( toColor.a )
    {
      HudElemColorToVec4(localClientNum, &toColor, &resultColor);
      args.iconMaterial = CG_Draw_MaterialHandleForIndex(localClientNum, _RBX->materialIndex);
      if ( args.iconMaterial )
      {
        text = _RBX->text;
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
        if ( GetWaypointEntPos(localClientNum, _RBX, &outPos) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+outPos]
            vmovss  xmm1, dword ptr [rbp+57h+outPos+4]
            vmovss  dword ptr [rbp+57h+args.worldPos], xmm0
            vmovss  xmm0, dword ptr [rbp+57h+outPos+8]
            vmovss  dword ptr [rbp+57h+args.worldPos+4], xmm1
            vmovups xmm1, xmmword ptr [rbp+57h+resultColor]
            vmovss  dword ptr [rbp+57h+args.worldPos+8], xmm0
            vmovaps xmmword ptr [rbp+57h+args.color4], xmm1
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointTweakY, "waypointTweakY");
          flags = _RBX->flags;
          args.label = NULL;
          *((_BYTE *)&args + 105) = *((_BYTE *)&args + 105) & 0xFC | ((flags & 0x200) != 0) | (2 * ((flags & 0x80) != 0));
          *((_BYTE *)&args + 104) = (8 * (((flags & 0x20) != 0) | (2 * ((flags & 0x10) != 0)))) | *((_BYTE *)&args + 104) & 7 | (32 * ((4 * (flags >> 3)) | ((flags & 0x40) != 0))) & 0xBF;
          __asm { vmovss  [rbp+57h+args.offsetY], xmm0 }
          args.arrowMaterial = cgMedia.offscreenObjectivePointer;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenPointerWidth, "waypointOffscreenPointerWidth");
          __asm { vmovss  [rbp+57h+args.arrowWidth], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenPointerHeight, "waypointOffscreenPointerHeight");
          *((_BYTE *)&args + 104) &= ~1u;
          __asm { vmovss  [rbp+57h+args.arrowHeight], xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_waypointOffscreenPointerDistance, "waypointOffscreenPointerDistance");
          __asm { vmovss  xmm1, dword ptr [rbx+14h] }
          *((_BYTE *)&args + 104) &= ~2u;
          *((_BYTE *)&args + 105) |= 4u;
          __asm
          {
            vmovss  [rbp+57h+args.arrowFadeDistance], xmm0
            vmovss  xmm0, cs:__real@3f800000
            vmovss  [rbp+57h+args.scale], xmm0
            vmovss  [rbp+57h+args.rotation], xmm1
          }
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

void __fastcall GetHudElemOrg(const ScreenPlacement *scrPlace, int alignOrg, int alignScreen, double xVirtual, float yVirtual, float width, float height, float *orgX, float *orgY)
{
  __int64 v26; 

  _R14 = orgX;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !orgX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 401, ASSERT_TYPE_ASSERT, "(orgX)", (const char *)&queryFormat, "orgX") )
    __debugbreak();
  _RSI = orgY;
  if ( !orgY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 402, ASSERT_TYPE_ASSERT, "(orgY)", (const char *)&queryFormat, "orgY") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm6; x }
  *(double *)&_XMM0 = ScrPlace_ApplyX(scrPlace, *(float *)&_XMM1, (alignScreen >> 4) & 0xF);
  __asm { vmovaps xmm6, xmm0 }
  if ( ((alignOrg >> 2) & 3) == 3 )
  {
    LODWORD(v26) = alignOrg;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 377, ASSERT_TYPE_ASSERT, "( ( alignX == 0 || alignX == 1 || alignX == 2 ) )", "( alignOrg ) = %i", v26) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+58h+width]
    vmulss  xmm1, xmm0, dword ptr [rcx+rbx*4]
    vsubss  xmm2, xmm6, xmm1
    vmovss  xmm1, [rsp+58h+yVirtual]; y
    vmovss  dword ptr [r14], xmm2
  }
  *(double *)&_XMM0 = ScrPlace_ApplyY(scrPlace, *(float *)&_XMM1, alignScreen & 0xF);
  __asm
  {
    vmovss  xmm2, [rsp+58h+height]; height
    vmovaps xmm1, xmm0; y
  }
  *(float *)&_XMM0 = AlignHudElemY(alignOrg, *(double *)&_XMM1, *(double *)&_XMM2);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_28]
    vmovss  dword ptr [rsi], xmm0
  }
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
  char v23; 
  char v24; 
  const dvar_t *v30; 
  const dvar_t *v36; 
  const dvar_t *v39; 
  int v46[3]; 
  __int64 v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RSI = worldPos;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_view = &LocalClientGlobals->refdef.view;
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
  v = (_DWORD *)p_view->org.org.v;
  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  v46[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
  v46[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
  v46[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm3, xmm0, [rsp+98h+var_50]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm2, xmm1, [rsp+98h+var_4C]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, [rsp+98h+var_48]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
  }
  _RDI = DVARFLT_waypointDistScaleRangeMin;
  if ( !DVARFLT_waypointDistScaleRangeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm6, dword ptr [rdi+28h] }
  if ( v23 | v24 )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    _RDI = DVARFLT_waypointDistScaleRangeMax;
    if ( !DVARFLT_waypointDistScaleRangeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( v23 )
    {
      _RDI = DVARFLT_waypointDistScaleRangeMax;
      if ( !DVARFLT_waypointDistScaleRangeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMax") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm7, dword ptr [rdi+28h] }
      v30 = DVARFLT_waypointDistScaleRangeMin;
      if ( !DVARFLT_waypointDistScaleRangeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      __asm
      {
        vsubss  xmm2, xmm7, dword ptr [rdi+28h]
        vxorps  xmm0, xmm0, xmm0
        vcmpless xmm1, xmm2, xmm0
        vmovss  xmm7, cs:__real@3f800000
        vblendvps xmm0, xmm2, xmm7, xmm1
        vmovss  [rsp+98h+var_58], xmm0
      }
      v36 = DVARFLT_waypointDistScaleRangeMin;
      if ( !DVARFLT_waypointDistScaleRangeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleRangeMin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      __asm
      {
        vsubss  xmm0, xmm6, dword ptr [rdi+28h]
        vdivss  xmm6, xmm0, [rsp+98h+var_58]
      }
      v39 = DVARFLT_waypointDistScaleSmallest;
      if ( !DVARFLT_waypointDistScaleSmallest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleSmallest") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      __asm
      {
        vmulss  xmm2, xmm6, dword ptr [rdi+28h]
        vsubss  xmm1, xmm7, xmm6
        vaddss  xmm0, xmm2, xmm1
      }
    }
    else
    {
      _RDI = DVARFLT_waypointDistScaleSmallest;
      if ( !DVARFLT_waypointDistScaleSmallest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "waypointDistScaleSmallest") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    }
  }
  memset(v46, 0, sizeof(v46));
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return *(float *)&_XMM0;
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
  unsigned int v9; 
  unsigned int v10; 
  const DObj *v11; 
  bool v17; 
  const char *v18; 
  __int64 v20; 
  __int64 v21; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t outOrigin; 
  __int64 v25; 

  v25 = -2i64;
  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  _RBX = result;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1073, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1074, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  aim_highest_bone = scr_const.aim_highest_bone;
  number = cent->nextState.number;
  if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", cent->nextState.number) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v21) = 2;
    LODWORD(v20) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v9 = 2533 * localClientNum + number;
  if ( v9 >= 0x13CA )
  {
    LODWORD(v21) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v21) )
      __debugbreak();
  }
  v10 = clientObjMap[v9];
  if ( !v10 )
    goto LABEL_28;
  if ( v10 >= (unsigned int)s_objCount )
  {
    LODWORD(v21) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v21) )
      __debugbreak();
  }
  v11 = (const DObj *)s_objBuf[v10];
  if ( !v11 )
    goto LABEL_28;
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_50(v11, aim_highest_bone, inOutIndex, &modelIndex) || (_RAX = CG_DObjGetLocalBoneMatrix(&cent->pose, v11, inOutIndex[0])) == NULL )
  {
    v18 = SL_ConvertToString(aim_highest_bone);
    Com_PrintWarning(14, "Cannot find tag [%s] on entity for objective marker.\n", v18);
LABEL_28:
    v17 = 0;
    *_RBX = 0.0;
    goto LABEL_29;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rax+18h]
    vaddss  xmm6, xmm0, dword ptr [rdx+84h]
  }
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm
  {
    vsubss  xmm0, xmm6, dword ptr [rsp+0A8h+outOrigin+8]
    vaddss  xmm1, xmm0, cs:MY_BUMP
    vmovss  dword ptr [rbx], xmm1
  }
  v17 = 1;
  memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_29:
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  return v17;
}

/*
==============
GetWaypointEntPos
==============
*/
bool GetWaypointEntPos(LocalClientNum_t localClientNum, const hudelem_t *elem, vec3_t *outPos)
{
  __int64 v10; 
  cg_t *LocalClientGlobals; 
  __int64 targetEntNum; 
  bool result; 
  CgEntitySystem *v16; 
  __int64 v17; 
  __int64 v47; 
  __int64 v48; 
  vec3_t outOrigin; 
  __int64 v50; 
  tmat33_t<vec3_t> axis; 
  char v52; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  v50 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = (char *)outPos;
  _RDI = elem;
  v10 = localClientNum;
  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1131, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( _RDI->type != HE_TYPE_WAYPOINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1132, ASSERT_TYPE_ASSERT, "(elem->type == HE_TYPE_WAYPOINT)", (const char *)&queryFormat, "elem->type == HE_TYPE_WAYPOINT") )
    __debugbreak();
  if ( _RDI->targetEntNum == 2047 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+0Ch]
      vmovss  xmm0, dword ptr [rdi+8]
    }
    *(float *)_RBX = _RDI->x;
    __asm
    {
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  dword ptr [rbx+8], xmm1
    }
LABEL_30:
    result = 1;
    goto LABEL_31;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  targetEntNum = _RDI->targetEntNum;
  if ( (_DWORD)targetEntNum != LocalClientGlobals->predictedPlayerEntity->nextState.number )
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v10) )
      __debugbreak();
    if ( (unsigned int)v10 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v48) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v47) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v47, v48) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v10] )
    {
      LODWORD(v48) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v48) )
        __debugbreak();
    }
    v16 = CgEntitySystem::ms_entitySystemArray[v10];
    if ( (unsigned int)targetEntNum >= 0x800 )
    {
      LODWORD(v48) = 2048;
      LODWORD(v47) = targetEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v47, v48) )
        __debugbreak();
    }
    v17 = (__int64)&v16->m_entities[targetEntNum];
    if ( (*(_BYTE *)(v17 + 648) & 1) != 0 )
    {
      if ( (_RDI->flags & 0x2000) != 0 )
      {
        AnglesToAxis((const vec3_t *)(v17 + 72), &axis);
        __asm
        {
          vmovss  xmm8, dword ptr [rdi+0Ch]
          vmovss  xmm7, dword ptr [rdi+8]
          vmovss  xmm6, dword ptr [rdi+4]
        }
        if ( &v52 == _RBX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        __asm
        {
          vmulss  xmm3, xmm7, dword ptr [rsp+108h+axis+0Ch]
          vmulss  xmm2, xmm6, dword ptr [rsp+108h+axis]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm1, xmm8, dword ptr [rsp+108h+axis+18h]
          vaddss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rbx], xmm2
          vmulss  xmm3, xmm7, dword ptr [rsp+108h+axis+10h]
          vmulss  xmm2, xmm6, dword ptr [rsp+108h+axis+4]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm1, xmm8, dword ptr [rsp+108h+axis+1Ch]
          vaddss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rbx+4], xmm2
          vmulss  xmm3, xmm7, dword ptr [rsp+108h+axis+14h]
          vmulss  xmm2, xmm6, dword ptr [rsp+108h+axis+8]
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm1, xmm8, dword ptr [rsp+108h+axis+20h]
          vaddss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rbx+8], xmm2
        }
        CG_GetPoseOrigin((const cpose_t *)v17, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+108h+outOrigin]
          vaddss  xmm1, xmm0, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm1
          vmovss  xmm2, dword ptr [rsp+108h+outOrigin+4]
          vaddss  xmm0, xmm2, dword ptr [rbx+4]
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  xmm1, dword ptr [rsp+108h+outOrigin+8]
          vaddss  xmm2, xmm1, dword ptr [rbx+8]
          vmovss  dword ptr [rbx+8], xmm2
        }
        memset(&outOrigin, 0, sizeof(outOrigin));
      }
      else
      {
        CG_GetPoseOrigin((const cpose_t *)v17, (vec3_t *)_RBX);
        *(double *)&_XMM0 = CG_GetWaypointOffsetForStance((LocalClientNum_t)v10, (centity_t *)v17);
        __asm
        {
          vaddss  xmm0, xmm0, dword ptr [rbx+8]
          vmovss  dword ptr [rbx+8], xmm0
        }
      }
      goto LABEL_30;
    }
  }
  result = 0;
LABEL_31:
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
HudElemColorToVec4
==============
*/
void HudElemColorToVec4(LocalClientNum_t localClientNum, const hudelem_color_t *hudElemColor, vec4_t *resultColor)
{
  bool IsGamePaused; 
  char v24; 
  bool v25; 
  bool v36; 
  bool v39; 
  bool v42; 
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm2, cs:__real@3b808081
    vmovaps xmmword ptr [rax-18h], xmm6
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBX = resultColor;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, xmm2
    vmovss  dword ptr [r8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [r8+4], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [r8+8], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [r8+0Ch], xmm1
  }
  IsGamePaused = CL_Pause_IsGamePaused();
  v24 = 0;
  v25 = !IsGamePaused;
  if ( IsGamePaused )
  {
    _RDI = DVARFLT_hudElemPausedBrightness;
    if ( !DVARFLT_hudElemPausedBrightness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hudElemPausedBrightness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+28h]
      vmulss  xmm2, xmm1, dword ptr [rbx]
      vmulss  xmm0, xmm1, dword ptr [rbx+4]
      vmulss  xmm1, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  dword ptr [rbx], xmm2
      vmovss  dword ptr [rbx+4], xmm0
    }
  }
  else
  {
    __asm { vmovss  xmm2, dword ptr [rbx] }
  }
  __asm
  {
    vmovsd  xmm8, cs:__real@3ff0000100000000
    vmovss  xmm6, cs:__real@3f800008
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm2, xmm7
    vxorpd  xmm9, xmm9, xmm9
  }
  if ( v24 )
    goto LABEL_26;
  __asm { vcomiss xmm2, xmm6 }
  if ( !(v24 | v25) )
  {
LABEL_26:
    __asm
    {
      vmovsd  [rsp+88h+var_50], xmm8
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rsp+88h+var_58], xmm9
      vmovsd  [rsp+88h+var_60], xmm0
    }
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 732, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[0] ) && ( resultColor[0] ) <= ( 1.000001f )", "resultColor[0] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v49, v53, v57);
    v24 = 0;
    v25 = !v36;
    if ( v36 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !(v24 | v25) )
  {
    __asm
    {
      vmovsd  [rsp+88h+var_50], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_58], xmm9
      vmovsd  [rsp+88h+var_60], xmm0
    }
    v39 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 733, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[1] ) && ( resultColor[1] ) <= ( 1.000001f )", "resultColor[1] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v50, v54, v58);
    v24 = 0;
    v25 = !v39;
    if ( v39 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !(v24 | v25) )
  {
    __asm
    {
      vmovsd  [rsp+88h+var_50], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_58], xmm9
      vmovsd  [rsp+88h+var_60], xmm0
    }
    v42 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 734, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[2] ) && ( resultColor[2] ) <= ( 1.000001f )", "resultColor[2] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v51, v55, v59);
    v24 = 0;
    v25 = !v42;
    if ( v42 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vcomiss xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_28]
    vcomiss xmm0, xmm6
  }
  if ( !(v24 | v25) )
  {
    __asm
    {
      vmovsd  [rsp+88h+var_50], xmm8
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+88h+var_58], xmm9
      vmovsd  [rsp+88h+var_60], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 735, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( resultColor[3] ) && ( resultColor[3] ) <= ( 1.000001f )", "resultColor[3] not in [0.0f, 1.000001f]\n\t%g not in [%g, %g]", v52, v56, v60) )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
  }
}

/*
==============
HudElemMaterialHeight
==============
*/
float HudElemMaterialHeight(const ScreenPlacement *scrPlace, const hudelem_t *elem, const cg_hudelem_t *cghe)
{
  int scaleTime; 
  int v11; 
  double v32; 
  double v33; 
  double v34; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm1, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
  }
  if ( elem->height )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    if ( (elem->alignScreen & 0xF) == 4 )
    {
      __asm { vmulss  xmm7, xmm0, dword ptr [rcx+0Ch] }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm1
        vmulss  xmm7, xmm0, dword ptr [rcx+4]
      }
    }
  }
  else
  {
    __asm { vmovss  xmm7, dword ptr [r8+82Ch] }
  }
  scaleTime = elem->scaleTime;
  if ( scaleTime <= 0 || (v11 = cghe->timeNow - elem->scaleStartTime, v11 >= scaleTime) )
  {
    __asm
    {
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+78h+var_28]
    }
  }
  else
  {
    __asm { vmovaps [rsp+78h+var_18], xmm6 }
    if ( elem->fromHeight )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
      }
      if ( (elem->fromAlignScreen & 0xF) == 4 )
      {
        __asm { vmulss  xmm6, xmm0, dword ptr [r9+0Ch] }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm0, xmm1
          vmulss  xmm6, xmm0, dword ptr [r9+4]
        }
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [r8+82Ch] }
    }
    if ( v11 > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r10d
        vmovaps [rsp+78h+var_38], xmm8
        vdivss  xmm8, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm8, xmm1
        vcomiss xmm8, cs:__real@3f800000
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+78h+var_40], xmm0
        vmovsd  [rsp+78h+var_48], xmm1
        vcvtss2sd xmm2, xmm8, xmm8
        vmovsd  [rsp+78h+var_50], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 281, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v32, v33, v34) )
        __debugbreak();
      __asm
      {
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm1, xmm0, xmm8
        vmovaps xmm8, [rsp+78h+var_38]
        vaddss  xmm0, xmm1, xmm6
        vmovaps xmm6, [rsp+78h+var_18]
        vmovaps xmm7, [rsp+78h+var_28]
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+78h+var_18]
        vmovaps xmm7, [rsp+78h+var_28]
      }
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
HudElemMaterialWidth
==============
*/
float HudElemMaterialWidth(const ScreenPlacement *scrPlace, const hudelem_t *elem, const cg_hudelem_t *cghe)
{
  int scaleTime; 
  int v11; 
  double v32; 
  double v33; 
  double v34; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm1, cs:?cg_hudSplitscreenScale@@3MA; float cg_hudSplitscreenScale
  }
  if ( elem->width )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
    }
    if ( (elem->alignScreen & 0xF0) == 64 )
    {
      __asm { vmulss  xmm7, xmm0, dword ptr [rcx+8] }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm1
        vmulss  xmm7, xmm0, dword ptr [rcx]
      }
    }
  }
  else
  {
    __asm { vmovss  xmm7, dword ptr [r8+82Ch] }
  }
  scaleTime = elem->scaleTime;
  if ( scaleTime <= 0 || (v11 = cghe->timeNow - elem->scaleStartTime, v11 >= scaleTime) )
  {
    __asm
    {
      vmovaps xmm0, xmm7
      vmovaps xmm7, [rsp+78h+var_28]
    }
  }
  else
  {
    __asm { vmovaps [rsp+78h+var_18], xmm6 }
    if ( elem->fromWidth )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
      }
      if ( (elem->fromAlignScreen & 0xF0) == 64 )
      {
        __asm { vmulss  xmm6, xmm0, dword ptr [r9+8] }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm0, xmm1
          vmulss  xmm6, xmm0, dword ptr [r9]
        }
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [r8+82Ch] }
    }
    if ( v11 > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r10d
        vmovaps [rsp+78h+var_38], xmm8
        vdivss  xmm8, xmm1, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm8, xmm1
        vcomiss xmm8, cs:__real@3f800000
        vmovsd  xmm0, cs:__real@3ff0000000000000
        vmovsd  [rsp+78h+var_40], xmm0
        vmovsd  [rsp+78h+var_48], xmm1
        vcvtss2sd xmm2, xmm8, xmm8
        vmovsd  [rsp+78h+var_50], xmm2
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 256, ASSERT_TYPE_SANITY, "( 0.0f ) <= ( lerp ) && ( lerp ) <= ( 1.0f )", "lerp not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v32, v33, v34) )
        __debugbreak();
      __asm
      {
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm1, xmm0, xmm8
        vmovaps xmm8, [rsp+78h+var_38]
        vaddss  xmm0, xmm1, xmm6
        vmovaps xmm6, [rsp+78h+var_18]
        vmovaps xmm7, [rsp+78h+var_28]
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+78h+var_18]
        vmovaps xmm7, [rsp+78h+var_28]
      }
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
OffsetHudElemY
==============
*/

float __fastcall OffsetHudElemY(const hudelem_t *elem, const cg_hudelem_t *cghe, double offsetY)
{
  int moveTime; 
  bool v13; 
  int v15; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovaps [rsp+58h+var_28], xmm7
  }
  moveTime = elem->moveTime;
  _RDI = cghe;
  __asm
  {
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm8, xmm2
  }
  v13 = moveTime == 0;
  if ( moveTime > 0 )
  {
    v15 = cghe->timeNow - elem->moveStartTime;
    v13 = cghe->timeNow == elem->moveStartTime;
    if ( v15 > 0 )
    {
      v13 = v15 == moveTime;
      if ( v15 < moveTime )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm7, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm7, xmm3 }
      }
    }
    else
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
    }
  }
  else
  {
    __asm { vmovaps xmm7, xmm3 }
  }
  __asm
  {
    vucomiss xmm7, xmm3
    vmovss  xmm1, dword ptr [rdx+4]; y
  }
  if ( v13 )
  {
    *(float *)&_XMM0 = AlignHudElemY(elem->alignOrg, *(double *)&_XMM1, offsetY);
  }
  else
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    *(float *)&_XMM0 = AlignHudElemY(elem->fromAlignOrg, *(double *)&_XMM1, offsetY);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+4]; y
      vmovaps xmm2, xmm8; height
      vmovaps xmm6, xmm0
    }
    AlignHudElemY(elem->alignOrg, *(double *)&_XMM1, *(double *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm0, xmm2, xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  __asm
  {
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  return *(float *)&_XMM0;
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
  _RDI = screenPos;
  _RBX = scrPlace;
  if ( !args && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1172, ASSERT_TYPE_ASSERT, "(args)", (const char *)&queryFormat, "args") )
    __debugbreak();
  if ( (*((_BYTE *)args + 104) & 4) == 0 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vcomiss xmm0, dword ptr [rbx+58h]
    vcomiss xmm0, dword ptr [rbx+60h]
  }
  if ( (*((_BYTE *)args + 104) & 4) != 0 )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vcomiss xmm0, dword ptr [rbx+5Ch]
    vcomiss xmm0, dword ptr [rbx+64h]
  }
  return (*((_BYTE *)args + 104) & 4) == 0;
}

/*
==============
SetHudElemPos
==============
*/
void SetHudElemPos(const ScreenPlacement *scrPlace, const hudelem_t *elem, cg_hudelem_t *cghe)
{
  cg_hudelem_t *orgX; 
  int moveTime; 
  bool v11; 
  int v13; 
  int fontScaleTime; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float width; 
  float widtha; 
  float widthb; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float orgY; 
  float v63; 
  float v64; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  orgX = cghe;
  _RDI = elem;
  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 468, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( !orgX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 469, ASSERT_TYPE_ASSERT, "(cghe)", (const char *)&queryFormat, "cghe") )
    __debugbreak();
  moveTime = _RDI->moveTime;
  __asm { vmovss  xmm2, cs:__real@3f800000 }
  v11 = moveTime == 0;
  if ( moveTime > 0 )
  {
    v13 = orgX->timeNow - _RDI->moveStartTime;
    v11 = orgX->timeNow == _RDI->moveStartTime;
    if ( v13 > 0 )
    {
      v11 = v13 == moveTime;
      if ( v13 < moveTime )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm6, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm6, xmm2 }
      }
    }
    else
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
  }
  else
  {
    __asm { vmovaps xmm6, xmm2 }
  }
  __asm
  {
    vucomiss xmm6, xmm2
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rbx+0Ch]
  }
  _RSI = &orgX->y;
  if ( v11 )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+4]; xVirtual
      vmovss  [rsp+98h+var_68], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+98h+width], xmm1
      vmovss  dword ptr [rsp+98h+fmt], xmm0
    }
    GetHudElemOrg(scrPlace, _RDI->alignOrg, _RDI->alignScreen, *(double *)&_XMM3, fmt, width, v58, &orgX->x, &orgX->y);
    fontScaleTime = _RDI->fontScaleTime;
    if ( fontScaleTime <= 0 || orgX->timeNow - _RDI->fontScaleStartTime >= fontScaleTime )
    {
      __asm
      {
        vmovss  xmm3, cs:__real@3f000000
        vaddss  xmm1, xmm3, dword ptr [rbx]
        vxorps  xmm4, xmm4, xmm4
        vroundss xmm2, xmm4, xmm1, 1
        vcvttss2si eax, xmm2
        vaddss  xmm2, xmm3, dword ptr [rbx+4]
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmovss  dword ptr [rbx], xmm0
        vroundss xmm1, xmm4, xmm2, 1
        vcvttss2si eax, xmm1
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+70h]; xVirtual
      vmovss  [rsp+98h+var_68], xmm0
      vmovss  xmm0, dword ptr [rdi+74h]
      vmovss  [rsp+98h+width], xmm1
      vmovss  dword ptr [rsp+98h+fmt], xmm0
    }
    GetHudElemOrg(scrPlace, _RDI->fromAlignOrg, _RDI->fromAlignScreen, *(double *)&_XMM3, fmta, widtha, v59, &v61, &orgY);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vmovss  xmm3, dword ptr [rdi+4]; xVirtual
      vmovss  [rsp+98h+var_68], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  [rsp+98h+width], xmm1
      vmovss  dword ptr [rsp+98h+fmt], xmm0
    }
    GetHudElemOrg(scrPlace, _RDI->alignOrg, _RDI->alignScreen, *(double *)&_XMM3, fmtb, widthb, v60, &v63, &v64);
    __asm
    {
      vmovss  xmm0, [rsp+98h+var_40]
      vsubss  xmm1, xmm0, [rsp+98h+var_48]
      vmovss  xmm0, [rsp+98h+var_3C]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, [rsp+98h+var_48]
      vsubss  xmm1, xmm0, [rsp+98h+var_44]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbx], xmm3
      vaddss  xmm3, xmm2, [rsp+98h+var_44]
      vmovss  dword ptr [rsi], xmm3
    }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
UpdateFadeAndGetAlpha
==============
*/
float UpdateFadeAndGetAlpha(LocalClientNum_t localClientNum, WaypointDrawArgs *args, const ScreenPlacement *scrPlace, const vec2_t *screenPos)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v11; 
  cg_t *v13; 
  int inout_fadeCounter; 
  int integer; 
  objectiveFadeState inout_fadeState; 
  const dvar_t *v17; 
  int v18; 
  const dvar_t *v19; 
  const char *v24; 
  char v27; 
  int v28; 
  const dvar_t *v29; 
  bool v31; 
  const dvar_t *v32; 
  int v33; 
  char v38; 
  const dvar_t *v39; 

  _RBP = args;
  if ( !args && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1240, ASSERT_TYPE_ASSERT, "(args)", (const char *)&queryFormat, "args") )
    __debugbreak();
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1241, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v11 = DVARINT_objectiveGlobalFadeState;
  _EDI = _RBP->inout_fadeState;
  v13 = LocalClientGlobals;
  inout_fadeCounter = _RBP->inout_fadeCounter;
  if ( !DVARINT_objectiveGlobalFadeState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveGlobalFadeState") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  if ( integer <= -1 || (*((_BYTE *)_RBP + 105) & 4) != 0 )
  {
    v17 = DVARBOOL_objectiveHide;
    if ( !DVARBOOL_objectiveHide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveHide") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      if ( _EDI == 1 )
      {
        _EDI = 2;
        inout_fadeCounter = -v13->frametime;
      }
      else if ( _EDI == 2 )
      {
        if ( inout_fadeCounter <= 0 )
          inout_fadeCounter = -v13->frametime;
      }
      else if ( _EDI != 3 )
      {
        if ( _EDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1291, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
          __debugbreak();
        _EDI = 3;
        inout_fadeCounter = 0;
      }
    }
    else
    {
      _RSI = DVARFLT_objectiveFadeTooFar;
      if ( !DVARFLT_objectiveFadeTooFar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTooFar") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+28h]
        vcomiss xmm0, dword ptr [rbp+54h]
      }
      if ( v27 )
      {
        if ( _EDI == 1 )
        {
          _EDI = 2;
          inout_fadeCounter = 0;
        }
        else if ( (unsigned int)(_EDI - 2) > 1 )
        {
          if ( _EDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1309, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
            __debugbreak();
          inout_fadeCounter = 0;
        }
      }
    }
  }
  else
  {
    inout_fadeState = _RBP->inout_fadeState;
    _EDI = v11->current.integer;
    if ( inout_fadeState != integer )
    {
      inout_fadeCounter = 0;
      if ( integer == 2 )
      {
        if ( inout_fadeState == OBJFS_FULL_ON )
          _EDI = 0;
      }
      else if ( integer == 3 && inout_fadeState == OBJFS_FULL_OFF )
      {
        _EDI = 1;
      }
    }
  }
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  switch ( _EDI )
  {
    case 1:
      if ( integer > -1 && (*((_BYTE *)_RBP + 105) & 4) == 0 )
        goto LABEL_90;
      _RSI = DVARFLT_objectiveFadeTooClose;
      if ( !DVARFLT_objectiveFadeTooClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTooClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+28h]
        vcomiss xmm0, dword ptr [rbp+54h]
      }
      if ( !(v27 | v38) || ScreenPosIsWorthFadingFor(scrPlace, screenPos, _RBP) )
LABEL_90:
        inout_fadeCounter = 0;
      v18 = v13->frametime + inout_fadeCounter;
      v39 = DVARFLT_objectiveFadeTimeWaitOff;
      if ( !DVARFLT_objectiveFadeTimeWaitOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeWaitOff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      __asm
      {
        vmovss  xmm6, cs:__real@447a0000
        vmulss  xmm0, xmm6, dword ptr [rsi+28h]
        vcvttss2si eax, xmm0
      }
      if ( v18 < _EAX )
        goto LABEL_104;
      _EDI = 2;
      v18 = 0;
LABEL_96:
      _RSI = DVARFLT_objectiveFadeTimeGoingOn;
      if ( !DVARFLT_objectiveFadeTimeGoingOn )
      {
        v24 = "objectiveFadeTimeGoingOn";
LABEL_98:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v24) )
          __debugbreak();
      }
LABEL_100:
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+28h]
        vmovaps [rsp+88h+var_48], xmm7
        vmulss  xmm7, xmm0, xmm6
        vxorps  xmm6, xmm6, xmm6
        vcomiss xmm7, xmm6
      }
      if ( v27 | v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1211, ASSERT_TYPE_ASSERT, "(period > 0)", (const char *)&queryFormat, "period > 0") )
        __debugbreak();
      __asm
      {
        vcmpless xmm0, xmm7, xmm6
        vmovss  xmm6, cs:__real@3f800000
        vblendvps xmm1, xmm7, xmm6, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vdivss  xmm0, xmm0, xmm1
        vminss  xmm1, xmm0, xmm6
        vmulss  xmm0, xmm1, cs:__real@3fc90fdb; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm { vmovaps xmm7, [rsp+88h+var_48] }
      _EAX = 3;
      __asm
      {
        vmovaps xmm4, xmm0
        vsubss  xmm3, xmm6, xmm0
        vmovd   xmm0, edi
        vmovd   xmm1, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm3, xmm2
      }
      goto LABEL_105;
    case 2:
      v28 = inout_fadeCounter + v13->frametime;
      v32 = DVARFLT_objectiveFadeTimeGoingOn;
      if ( !DVARFLT_objectiveFadeTimeGoingOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeGoingOn") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      __asm
      {
        vmovss  xmm6, cs:__real@447a0000
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
      }
      v33 = 0;
      __asm { vcvttss2si ecx, xmm0 }
      if ( v28 < _ECX )
        v33 = _EDI;
      v18 = 0;
      v31 = v28 < _ECX;
      _EDI = v33;
      goto LABEL_74;
    case 3:
      v28 = inout_fadeCounter + v13->frametime;
      v29 = DVARFLT_objectiveFadeTimeGoingOff;
      if ( !DVARFLT_objectiveFadeTimeGoingOff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeGoingOff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      __asm
      {
        vmovss  xmm6, cs:__real@447a0000
        vmulss  xmm0, xmm6, dword ptr [rbx+28h]
        vcvttss2si eax, xmm0
      }
      if ( v28 >= _EAX )
        _EDI = 1;
      v18 = 0;
      v31 = v28 < _EAX;
LABEL_74:
      if ( v31 )
        v18 = v28;
      goto LABEL_76;
  }
  if ( _EDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1344, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
    __debugbreak();
  if ( integer > -1 && (*((_BYTE *)_RBP + 105) & 4) == 0 || !ScreenPosIsWorthFadingFor(scrPlace, screenPos, _RBP) )
    inout_fadeCounter = 0;
  v18 = v13->frametime + inout_fadeCounter;
  v19 = DVARFLT_objectiveFadeTimeWaitOn;
  if ( !DVARFLT_objectiveFadeTimeWaitOn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "objectiveFadeTimeWaitOn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  __asm
  {
    vmovss  xmm6, cs:__real@447a0000
    vmulss  xmm0, xmm6, dword ptr [rsi+28h]
    vcvttss2si eax, xmm0
  }
  if ( v18 >= _EAX )
  {
    _EDI = 3;
    v18 = 0;
    goto LABEL_48;
  }
LABEL_76:
  switch ( _EDI )
  {
    case 2:
      goto LABEL_96;
    case 3:
LABEL_48:
      _RSI = DVARFLT_objectiveFadeTimeGoingOff;
      if ( !DVARFLT_objectiveFadeTimeGoingOff )
      {
        v24 = "objectiveFadeTimeGoingOff";
        goto LABEL_98;
      }
      goto LABEL_100;
    case 1:
LABEL_104:
      __asm { vxorps  xmm0, xmm0, xmm0 }
      goto LABEL_105;
  }
  if ( _EDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_hudelem.cpp", 1227, ASSERT_TYPE_ASSERT, "(state == OBJFS_FULL_ON)", (const char *)&queryFormat, "state == OBJFS_FULL_ON") )
    __debugbreak();
  __asm { vmovss  xmm0, cs:__real@3f800000 }
LABEL_105:
  __asm { vmovaps xmm6, [rsp+88h+var_38] }
  _RBP->inout_fadeCounter = v18;
  _RBP->inout_fadeState = _EDI;
  return *(float *)&_XMM0;
}

/*
==============
compare_hudelems
==============
*/

__int64 __fastcall compare_hudelems(const void *pe0, const void *pe1, double _XMM2_8)
{
  char v3; 

  _RAX = *(_QWORD *)pe0;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, dword ptr [rax+98h]
    vsubss  xmm1, xmm0, dword ptr [rcx+98h]
    vcomiss xmm1, xmm2
  }
  if ( v3 )
    return 0xFFFFFFFFi64;
  __asm { vcomiss xmm1, xmm2 }
  return 0i64;
}

