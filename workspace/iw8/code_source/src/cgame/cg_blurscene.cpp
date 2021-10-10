/*
==============
CG_BlurScene_EnableCheck
==============
*/

void __fastcall CG_BlurScene_EnableCheck(LocalClientNum_t localClientNum)
{
  ?CG_BlurScene_EnableCheck@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_FetchScreenSpaceScopeBoundingCircle
==============
*/

bool __fastcall CG_FetchScreenSpaceScopeBoundingCircle(LocalClientNum_t localClientNum, vec3_t *outBoundingCircle)
{
  return ?CG_FetchScreenSpaceScopeBoundingCircle@@YA_NW4LocalClientNum_t@@AEATvec3_t@@@Z(localClientNum, outBoundingCircle);
}

/*
==============
CG_BlurScene_EnableCheck
==============
*/
void CG_BlurScene_EnableCheck(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v5; 
  Weapon *OffhandGestureWeapon; 
  bool v7; 
  double OffhandAdsFrac; 
  float lastfOffhandPosFrac; 
  float correctedWeaponPosFrac; 
  __int64 p_weapFlags; 
  char v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float v17; 
  bool IsUsingDualFOV; 
  const WeaponAttachment *UnderbarrelAttachment; 
  bool adsAltSwitchCurrentWeaponIsDualFOV; 
  AdsAltSwitch *adsAltSwitch; 
  float dualFovSwitchRateMainToAlt; 
  bool v23; 
  bool v24; 
  float v25; 
  float v26; 
  double v27; 
  Weapon r_weapon; 

  v1 = localClientNum;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals )
    return;
  v3 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  p_predictedPlayerState = &v3->predictedPlayerState;
  if ( v3 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blurscene.cpp", 163, ASSERT_TYPE_ASSERT, "(predictedPlayerState)", (const char *)&queryFormat, "predictedPlayerState") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v1];
  if ( BG_IsUsingOffhandGestureWeaponADSSupport(v5, p_predictedPlayerState) )
  {
    OffhandGestureWeapon = (Weapon *)BG_GetOffhandGestureWeapon(v5, p_predictedPlayerState);
    v7 = 0;
    r_weapon = *OffhandGestureWeapon;
    OffhandAdsFrac = BG_GetOffhandAdsFrac(p_predictedPlayerState);
    lastfOffhandPosFrac = LocalClientGlobals->lastfOffhandPosFrac;
    correctedWeaponPosFrac = *(float *)&OffhandAdsFrac;
    goto LABEL_15;
  }
  r_weapon = *BG_GetCurrentWeaponForPlayer(v5, p_predictedPlayerState);
  if ( p_predictedPlayerState )
  {
    p_weapFlags = (__int64)&p_predictedPlayerState->weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_13;
  }
  else
  {
    p_weapFlags = 1832i64;
  }
  if ( p_predictedPlayerState && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)p_weapFlags, ACTIVE, 0x1Bu)) )
  {
    v7 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v7 = 0;
LABEL_14:
  correctedWeaponPosFrac = LocalClientGlobals->weaponPosFracAnimData.correctedWeaponPosFrac;
  lastfOffhandPosFrac = LocalClientGlobals->lastfWeaponReloadPosFrac;
LABEL_15:
  v12 = 0;
  v13 = 0.0;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    v14 = BG_BlurSceneAdsInFraction(&r_weapon, v7);
    v15 = *(float *)&v14;
    v16 = BG_BlurSceneAdsOutFraction(&r_weapon, v7);
    v17 = *(float *)&v16;
    IsUsingDualFOV = CG_View_IsUsingDualFOV((const LocalClientNum_t)v1);
    UnderbarrelAttachment = BG_GetUnderbarrelAttachment(&r_weapon);
    if ( LocalClientGlobals->adsAltSwitchInProgress && ((adsAltSwitchCurrentWeaponIsDualFOV = LocalClientGlobals->adsAltSwitchCurrentWeaponIsDualFOV) || LocalClientGlobals->adsAltSwitchNextWeaponIsDualFOV) && UnderbarrelAttachment && (adsAltSwitch = UnderbarrelAttachment->adsAltSwitch) != NULL )
    {
      if ( LocalClientGlobals->adsAltSwitchIsMainToAlt )
        dualFovSwitchRateMainToAlt = adsAltSwitch->dualFovSwitchRateMainToAlt;
      else
        dualFovSwitchRateMainToAlt = adsAltSwitch->dualFovSwitchRateAltToMain;
      if ( adsAltSwitchCurrentWeaponIsDualFOV && LocalClientGlobals->adsAltSwitchNextWeaponIsDualFOV )
      {
        v23 = 1;
        v24 = 0;
        correctedWeaponPosFrac = FLOAT_1_0;
      }
      else
      {
        correctedWeaponPosFrac = LocalClientGlobals->adsAltSwitchFOVFrac;
        if ( LocalClientGlobals->adsAltSwitchNextWeaponIsDualFOV )
        {
          v23 = 1;
          v24 = 0;
          v15 = dualFovSwitchRateMainToAlt;
        }
        else
        {
          v23 = 0;
          v24 = 1;
          correctedWeaponPosFrac = 1.0 - correctedWeaponPosFrac;
          v17 = 1.0 - dualFovSwitchRateMainToAlt;
        }
      }
    }
    else
    {
      if ( !IsUsingDualFOV )
        goto LABEL_44;
      v23 = correctedWeaponPosFrac >= lastfOffhandPosFrac;
      v24 = lastfOffhandPosFrac > correctedWeaponPosFrac;
    }
    if ( v23 && correctedWeaponPosFrac > v15 )
    {
      v25 = correctedWeaponPosFrac - v15;
      v26 = 1.0 - v15;
    }
    else
    {
      if ( !v24 || correctedWeaponPosFrac <= v17 )
        goto LABEL_44;
      v25 = correctedWeaponPosFrac - v17;
      v26 = 1.0 - v17;
    }
    v13 = v25 / v26;
    v12 = 1;
  }
LABEL_44:
  LocalClientGlobals->lastfWeaponReloadPosFrac = LocalClientGlobals->fWeaponPosFrac;
  LocalClientGlobals->lastfOffhandPosFrac = LocalClientGlobals->fOffhandPosFrac;
  if ( !BG_ShowViewModelInDualFOV(&r_weapon, v7) && LocalClientGlobals->dualViewScope != v12 )
    LocalClientGlobals->dualViewScopeRefreshDobj = 1;
  LocalClientGlobals->dualViewScope = v12;
  v27 = I_fclamp(v13, 0.0, 1.0);
  LocalClientGlobals->refdef.dualViewScopeState.m_fade = *(float *)&v27;
}

/*
==============
CG_FetchScreenSpaceScopeBoundingCircle
==============
*/
bool CG_FetchScreenSpaceScopeBoundingCircle(LocalClientNum_t localClientNum, vec3_t *outBoundingCircle)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  const DObj *viewModelDObj; 
  const cpose_t *p_viewModelPose; 
  scr_string_t scope_top; 
  DObjAnimMat *LocalTagMatrix; 
  bool v10; 
  vec2_t *p_realViewportSize; 
  cgs_t *v12; 
  ClientFov *ViewFovBySpace; 
  double v14; 
  float v15; 
  unsigned int refdefViewOrg_aab; 
  float v17; 
  float v18; 
  float v19; 
  bool v20; 
  __int64 v21; 
  vec2_t *outScreenPos; 
  float tanHalfFovY; 
  float tanHalfFovX; 
  ClientFov result; 
  __int64 v26; 
  vec3_t pos; 
  vec2_t v28; 
  vec3_t v29; 
  tmat33_t<vec3_t> outTagMat; 

  v26 = -2i64;
  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( LocalClientGlobals == (cg_t *)-807496i64 )
    return 0;
  viewModelDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
  if ( !viewModelDObj )
    return 0;
  p_viewModelPose = &LocalClientGlobals->viewModelPose;
  if ( !CG_DObjGetWorldTagMatrix(&LocalClientGlobals->viewModelPose, viewModelDObj, scr_const.scope_center, &outTagMat, &pos) )
    return 0;
  scope_top = scr_const.scope_top;
  if ( !p_viewModelPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 116, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  LocalTagMatrix = CG_DObjGetLocalTagMatrix(p_viewModelPose, viewModelDObj, scope_top);
  if ( !LocalTagMatrix )
    return 0;
  v29.v[0] = LocalTagMatrix->trans.v[0] + g_activeRefDef->viewOffset.v[0];
  v29.v[1] = LocalTagMatrix->trans.v[1] + g_activeRefDef->viewOffset.v[1];
  v29.v[2] = LocalTagMatrix->trans.v[2] + g_activeRefDef->viewOffset.v[2];
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_17;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v10 )
      __debugbreak();
LABEL_17:
    p_realViewportSize = &scrPlaceFull.realViewportSize;
    goto LABEL_18;
  }
  p_realViewportSize = &scrPlaceViewDisplay[v3].realViewportSize;
LABEL_18:
  if ( (unsigned int)v3 >= cgs_t::ms_allocatedCount )
  {
    LODWORD(v21) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v21, cgs_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cgs_t::ms_cgsArray[v3] )
  {
    LODWORD(outScreenPos) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", outScreenPos) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
  {
    LODWORD(outScreenPos) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", outScreenPos) )
      __debugbreak();
  }
  v12 = cgs_t::ms_cgsArray[v3];
  ViewFovBySpace = CG_GetViewFovBySpace(&result, (const LocalClientNum_t)v3, CG_FovSpace_DepthHack, 0);
  v14 = *(double *)&ViewFovBySpace->finalFov;
  result.baseFovAdjustment = ViewFovBySpace->baseFovAdjustment;
  v15 = v12->viewMult * v12->viewAspect;
  *(double *)&result.finalFov = v14;
  TanHalfAngles(*(float *)&v14, v15, &tanHalfFovX, &tanHalfFovY);
  if ( v5 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = v5->refdef.view.refdefViewOrg_aab;
  if ( v5 == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(result.finalFov) = LODWORD(v5->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26936)) + 2));
  LODWORD(result.baseFov) = LODWORD(v5->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26940)) + 2));
  LODWORD(result.baseFovAdjustment) = LODWORD(v5->refdef.view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)v5 + 26944)) + 2));
  ProjectPositionToScreen(&pos, p_realViewportSize, (const vec3_t *)&result, &v5->refdef.view.axis, tanHalfFovX, tanHalfFovY, &v28);
  ProjectPositionToScreen(&v29, p_realViewportSize, (const vec3_t *)&result, &v5->refdef.view.axis, tanHalfFovX, tanHalfFovY, (vec2_t *)&pos);
  v17 = pos.v[0] - v28.v[0];
  v18 = v28.v[1];
  v19 = pos.v[1] - v28.v[1];
  outBoundingCircle->v[0] = v28.v[0];
  outBoundingCircle->v[1] = v18;
  outBoundingCircle->v[2] = (float)(v17 * v17) + (float)(v19 * v19);
  v20 = 1;
  memset(&result, 0, sizeof(result));
  return v20;
}

/*
==============
ProjectPositionToScreen
==============
*/
void ProjectPositionToScreen(const vec3_t *pos, const vec2_t *screenSize, const vec3_t *eyePos, const tmat33_t<vec3_t> *axis, float tanHalfFovX, float tanHalfFovY, vec2_t *outScreenPos)
{
  __int128 v7; 
  __int128 v8; 
  float v10; 
  float v11; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  float v21; 
  float v22; 
  float v23; 
  float v25; 
  __int128 v31; 
  float v34; 
  double v35; 
  double v36; 

  v8 = LODWORD(pos->v[1]);
  *(float *)&v8 = pos->v[1] - eyePos->v[1];
  v7 = v8;
  v10 = pos->v[0] - eyePos->v[0];
  v11 = pos->v[2] - eyePos->v[2];
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v10 * v10)) + (float)(v11 * v11));
  _XMM1 = v8;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm7, xmm0
  }
  v15 = v10 * (float)(1.0 / *(float *)&_XMM0);
  v16 = v7;
  *(float *)&v7 = *(float *)&v7 * (float)(1.0 / *(float *)&_XMM0);
  v17 = v11 * (float)(1.0 / *(float *)&_XMM0);
  v18 = (float)((float)(*(float *)&v7 * axis->m[0].v[1]) + (float)(v15 * axis->m[0].v[0])) + (float)(v17 * axis->m[0].v[2]);
  *(float *)&v16 = (float)((float)(*(float *)&v7 * axis->m[1].v[1]) + (float)(v15 * axis->m[1].v[0])) + (float)(v17 * axis->m[1].v[2]);
  _XMM8 = v16;
  *(float *)&v16 = (float)(*(float *)&v7 * axis->m[2].v[1]) + (float)(v15 * axis->m[2].v[0]);
  _XMM6 = 0i64;
  v21 = *(float *)&v16 + (float)(v17 * axis->m[2].v[2]);
  if ( v18 > 0.0 )
  {
    v25 = (float)((float)(1.0 - (float)((float)(*(float *)&_XMM8 / tanHalfFovX) * (float)(1.0 / v18))) * screenSize->v[0]) * 0.5;
    outScreenPos->v[0] = v25;
    *(float *)&_XMM3 = (float)((float)(1.0 - (float)((float)(v21 / tanHalfFovY) * (float)(1.0 / v18))) * screenSize->v[1]) * 0.5;
  }
  else
  {
    LODWORD(v22) = _XMM8 ^ _xmm;
    LODWORD(v23) = LODWORD(v21) ^ _xmm;
    outScreenPos->v[0] = COERCE_FLOAT(_XMM8 ^ _xmm);
    outScreenPos->v[1] = COERCE_FLOAT(LODWORD(v21) ^ _xmm);
    _XMM3 = LODWORD(screenSize->v[0]);
    if ( *(float *)&_XMM8 == -0.0 )
    {
      v25 = *(float *)&_XMM3 * 0.5;
      outScreenPos->v[0] = *(float *)&_XMM3 * 0.5;
      _XMM2 = LODWORD(screenSize->v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
      __asm
      {
        vcmpless xmm0, xmm6, xmm4
        vblendvps xmm3, xmm2, xmm1, xmm0
      }
    }
    else if ( v23 == 0.0 )
    {
      __asm { vcmpless xmm0, xmm8, cs:__real@80000000 }
      _XMM2 = _XMM3 ^ (unsigned int)_xmm;
      __asm { vblendvps xmm0, xmm2, xmm1, xmm0 }
      outScreenPos->v[0] = *(float *)&_XMM0;
      v25 = *(float *)&_XMM0;
      *(float *)&_XMM3 = screenSize->v[1] * 0.5;
    }
    else
    {
      v31 = LODWORD(screenSize->v[1]);
      *(float *)&v31 = screenSize->v[1] / v23;
      _XMM2 = v31 & _xmm;
      __asm { vminss  xmm2, xmm2, xmm0 }
      outScreenPos->v[0] = v22 * *(float *)&_XMM2;
      v34 = v23 * *(float *)&_XMM2;
      outScreenPos->v[1] = v34;
      v25 = (float)(0.5 * screenSize->v[0]) + (float)(v22 * *(float *)&_XMM2);
      outScreenPos->v[0] = v25;
      *(float *)&_XMM3 = (float)(0.5 * screenSize->v[1]) + v34;
    }
  }
  outScreenPos->v[1] = *(float *)&_XMM3;
  v35 = I_fclamp(v25, 0.0, screenSize->v[0] + 1.0);
  outScreenPos->v[0] = *(float *)&v35;
  v36 = I_fclamp(outScreenPos->v[1], 0.0, screenSize->v[1] + 1.0);
  outScreenPos->v[1] = *(float *)&v36;
}

