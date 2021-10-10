/*
==============
CG_DrawReticles_ShouldDrawCrosshair
==============
*/

bool __fastcall CG_DrawReticles_ShouldDrawCrosshair(const LocalClientNum_t localClientNum)
{
  return ?CG_DrawReticles_ShouldDrawCrosshair@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetCrosshairRadius
==============
*/

double __fastcall CG_GetCrosshairRadius(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_GetCrosshairRadius@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_GetCrosshairAlpha
==============
*/

double __fastcall CG_GetCrosshairAlpha(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_GetCrosshairAlpha@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_CalcCrosshairPosition
==============
*/

void __fastcall CG_CalcCrosshairPosition(const cg_t *cgameGlob, const float screenWidth, const float screenHeight, float *x, float *y)
{
  ?CG_CalcCrosshairPosition@@YAXPEBVcg_t@@MMPEAM1@Z(cgameGlob, screenWidth, screenHeight, x, y);
}

/*
==============
CG_GetWeapReticleZoom
==============
*/

bool __fastcall CG_GetWeapReticleZoom(const cg_t *cgameGlob, float *zoomResult)
{
  return ?CG_GetWeapReticleZoom@@YA_NPEBVcg_t@@PEAM@Z(cgameGlob, zoomResult);
}

/*
==============
CG_DrawReticles_UpdateWeapReticleScissor
==============
*/

void __fastcall CG_DrawReticles_UpdateWeapReticleScissor(LocalClientNum_t localClientNum)
{
  ?CG_DrawReticles_UpdateWeapReticleScissor@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawReticles_DrawCrosshair
==============
*/

void __fastcall CG_DrawReticles_DrawCrosshair(LocalClientNum_t localClientNum)
{
  ?CG_DrawReticles_DrawCrosshair@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetCrosshairColorAsInt
==============
*/

int __fastcall CG_GetCrosshairColorAsInt(const LocalClientNum_t localClientNum)
{
  return ?CG_GetCrosshairColorAsInt@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetReticleWeapon
==============
*/

const Weapon *__fastcall CG_GetReticleWeapon(LocalClientNum_t localClientNum, bool *outIsAlternate)
{
  return ?CG_GetReticleWeapon@@YAAEBUWeapon@@W4LocalClientNum_t@@PEA_N@Z(localClientNum, outIsAlternate);
}

/*
==============
AllowedToDrawCrosshair
==============
*/
bool AllowedToDrawCrosshair(LocalClientNum_t localClientNum, const playerState_s *predictedPlayerState)
{
  __int64 v2; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  CgDrawSystem *DrawSystem; 
  unsigned __int64 weaponState; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  __int64 v11; 
  bool m_isMLGSpectator; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v2 = localClientNum;
  if ( !predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 698, ASSERT_TYPE_ASSERT, "(predictedPlayerState)", (const char *)&queryFormat, "predictedPlayerState") )
    __debugbreak();
  if ( CL_Pause_IsGamePaused() )
  {
    v4 = DVARBOOL_cg_drawpaused;
    if ( !DVARBOOL_cg_drawpaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpaused") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      return 0;
  }
  v5 = DVARBOOL_cg_drawCrosshair;
  if ( !DVARBOOL_cg_drawCrosshair && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCrosshair") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    return 0;
  if ( CL_Keys_IsCatcherActive((LocalClientNum_t)v2, 1024) )
    return 0;
  if ( CL_Keys_IsCatcherActive((LocalClientNum_t)v2, 64) )
    return 0;
  DrawSystem = CgDrawSystem::GetDrawSystem((const LocalClientNum_t)v2);
  if ( DrawSystem->IsHudMissionFailed(DrawSystem) )
    return 0;
  weaponState = predictedPlayerState->weapState[0].weaponState;
  if ( (unsigned int)(weaponState - 22) <= 2 )
    return 0;
  if ( (_DWORD)weaponState == 18 )
  {
    if ( BG_Skydive_IsSkydiving(predictedPlayerState) || !BG_Ladder_IsDualWieldingAllowed(predictedPlayerState) || predictedPlayerState->weapCommon.lastWeaponHand != WEAPON_HAND_LEFT || predictedPlayerState->weapState[1].weaponState == 18 )
    {
      Handler = CgHandler::getHandler((LocalClientNum_t)v2);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v2);
      if ( !PM_Weapon_IsInInterruptibleState(Instance, predictedPlayerState, WEAPON_HAND_DEFAULT, Handler) )
        return 0;
    }
  }
  else if ( (unsigned int)weaponState <= 0x32 )
  {
    v11 = 0x4000000001FBEi64;
    if ( _bittest64(&v11, weaponState) )
      return 0;
  }
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawCrosshairWhileSprinting, "cg_drawCrosshairWhileSprinting") && PM_IsSprinting(predictedPlayerState) )
    return 0;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&predictedPlayerState->weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 747, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
      __debugbreak();
    if ( (_DWORD)weaponState == 32 || (_DWORD)weaponState == 27 )
      return 0;
  }
  m_isMLGSpectator = 0;
  if ( cg_t::ms_allocatedType == GLOB_TYPE_MP )
  {
    if ( (unsigned int)v2 >= cg_t::ms_allocatedCount )
    {
      LODWORD(v14) = cg_t::ms_allocatedCount;
      LODWORD(v13) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 217, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
      if ( cg_t::ms_allocatedType != GLOB_TYPE_MP )
      {
        LODWORD(v15) = cg_t::ms_allocatedType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp.h", 218, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP)", "%s\n\tCgGlobalsMP::GetLocalClientGlobals: Trying to get multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_MP", v15) )
          __debugbreak();
      }
    }
    m_isMLGSpectator = cg_t::ms_cgArray[v2]->m_isMLGSpectator;
  }
  return (!GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && !CG_View_IsKillCamView((const LocalClientNum_t)v2) || !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_crosshairSpectateHide, "cg_crosshairSpectateHide") || m_isMLGSpectator) && CG_GameInterface_AllowedToDrawCrosshair((LocalClientNum_t)v2);
}

/*
==============
CG_CalcADSTransitionBlend
==============
*/
float CG_CalcADSTransitionBlend(const cg_t *cgameGlob, const Weapon *weapon, bool isAlternate)
{
  __int64 localClientNum; 
  CgWeaponMap *v8; 
  __int128 fWeaponPosFrac_low; 
  __int128 v12; 
  __int128 v15; 
  __int128 v19; 
  float v22; 
  float outBlendStart; 
  float outBlendEnd; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 330, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( BG_GetWeaponType(weapon, isAlternate) != WEAPTYPE_BULLET && BG_GetWeaponType(weapon, isAlternate) != WEAPTYPE_PROJECTILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 331, ASSERT_TYPE_ASSERT, "((BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_BULLET) || (BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_PROJECTILE))", (const char *)&queryFormat, "(BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_BULLET) || (BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_PROJECTILE)") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[localClientNum];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 334, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  fWeaponPosFrac_low = LODWORD(cgameGlob->predictedPlayerState.weapCommon.fWeaponPosFrac);
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  if ( (*(float *)&fWeaponPosFrac_low < 0.0 || *(float *)&fWeaponPosFrac_low > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 336, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( adsFrac ) && ( adsFrac ) <= ( 1.0f )", "adsFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&fWeaponPosFrac_low, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  BG_GetADSCrosshairBlendFracs(v8, &cgameGlob->predictedPlayerState, weapon, isAlternate, cgameGlob->playerEntity.bPositionToADS != 0, &outBlendStart, &outBlendEnd);
  v12 = LODWORD(outBlendEnd);
  *(float *)&v12 = outBlendEnd - outBlendStart;
  _XMM1 = v12;
  __asm { vmaxss  xmm8, xmm1, cs:__real@358637bd }
  if ( (*(float *)&_XMM8 < 0.000001 || *(float *)&_XMM8 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 347, ASSERT_TYPE_ASSERT, "( static_cast<float>( 1.0E-6 ) ) <= ( blendFracDist ) && ( blendFracDist ) <= ( 1.0f )", "blendFracDist not in [static_cast<float>( ZERO_EPSILON ), 1.0f]\n\t%g not in [%g, %g]", *(float *)&_XMM8, DOUBLE_9_999999974752427eN7, DOUBLE_1_0) )
    __debugbreak();
  v15 = fWeaponPosFrac_low;
  *(float *)&v15 = *(float *)&fWeaponPosFrac_low - outBlendStart;
  _XMM0 = v15;
  __asm
  {
    vmaxss  xmm0, xmm0, xmm9
    vminss  xmm1, xmm0, xmm7
  }
  v19 = _XMM1;
  *(float *)&v19 = *(float *)&_XMM1 / *(float *)&_XMM8;
  _XMM2 = v19;
  __asm
  {
    vmaxss  xmm0, xmm2, xmm9
    vminss  xmm1, xmm0, xmm7
  }
  v22 = 1.0 - *(float *)&_XMM1;
  if ( ((float)(1.0 - *(float *)&_XMM1) < 0.0 || v22 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 350, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( alpha ) && ( alpha ) <= ( 1.0f )", "alpha not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v22, *(double *)&_XMM11, DOUBLE_1_0) )
    __debugbreak();
  return 1.0 - *(float *)&_XMM1;
}

/*
==============
CG_CalcCrosshairColor
==============
*/
void CG_CalcCrosshairColor(const LocalClientNum_t localClientNum, float alpha, vec4_t *outColor)
{
  playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  const Weapon *Weapon; 
  bool v8; 
  CgWeaponMap *Instance; 
  const WeaponDef *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 

  if ( (alpha < 0.0 || alpha > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 437, ASSERT_TYPE_ASSERT, "( ( alpha >= 0.0f && alpha <= 1.0f ) )", "( alpha ) = %g", alpha) )
    __debugbreak();
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( BG_IsTurretActive(p_predictedPlayerState) )
  {
    Handler = CgHandler::getHandler(localClientNum);
    Weapon = Handler->PlayerTurret(Handler, p_predictedPlayerState);
    v8 = 0;
  }
  else
  {
    v8 = BG_UsingAlternate(p_predictedPlayerState);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->weapCommon.weaponHandle);
  }
  v10 = BG_WeaponDef(Weapon, v8);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 455, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !v10->crosshairColorChange )
    goto LABEL_31;
  v11 = DVARBOOL_cg_crosshairFriendlyColorEnabled;
  if ( !DVARBOOL_cg_crosshairFriendlyColorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairFriendlyColorEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 3u) )
  {
    v12 = DVARBOOL_cg_crosshairEnemyColorEnabled;
    if ( !DVARBOOL_cg_crosshairEnemyColorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairEnemyColorEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 4u) && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_crosshairEnemyColor, "cg_crosshairEnemyColor") )
    {
      Dvar_GetUnpackedColorByName("NORTRLQQTT", outColor);
      goto LABEL_32;
    }
LABEL_31:
    outColor->v[0] = colorWhite.v[0];
    outColor->v[1] = colorWhite.v[1];
    outColor->v[2] = colorWhite.v[2];
    goto LABEL_32;
  }
  Dvar_GetUnpackedColorByName("NSRQOMSLKT", outColor);
LABEL_32:
  v13 = DVARFLT_cg_crosshairAlpha;
  if ( !DVARFLT_cg_crosshairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlpha") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  outColor->v[3] = alpha * v13->current.value;
}

/*
==============
CG_CalcCrosshairPosition
==============
*/
void CG_CalcCrosshairPosition(const cg_t *cgameGlob, const float screenWidth, const float screenHeight, float *x, float *y)
{
  float v5; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float tanHalfFovX; 
  vec3_t angles; 
  vec3_t forward; 

  v5 = cgameGlob->gunAnglesExtrapolated.v[1];
  angles.v[0] = cgameGlob->gunAnglesExtrapolated.v[0];
  angles.v[2] = cgameGlob->refdefViewAngles.v[2];
  angles.v[1] = v5;
  AngleVectors(&angles, &forward, NULL, NULL);
  v8 = forward.v[1];
  v9 = forward.v[0];
  v10 = forward.v[2];
  v11 = (float)((float)(forward.v[1] * cgameGlob->refdef.view.axis.m[0].v[1]) + (float)(forward.v[0] * cgameGlob->refdef.view.axis.m[0].v[0])) + (float)(forward.v[2] * cgameGlob->refdef.view.axis.m[0].v[2]);
  if ( v11 <= 0.0 || (tanHalfFovX = cgameGlob->refdef.view.fov.tanHalfFovX, tanHalfFovX <= 0.0) )
  {
    *x = 0.0;
    *y = 0;
  }
  else
  {
    *x = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(forward.v[1] * cgameGlob->refdef.view.axis.m[1].v[1]) + (float)(forward.v[0] * cgameGlob->refdef.view.axis.m[1].v[0])) + (float)(forward.v[2] * cgameGlob->refdef.view.axis.m[1].v[2])) / (float)(tanHalfFovX * v11)) * (float)(screenWidth * 0.5)) ^ _xmm);
    *y = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)((float)(v8 * cgameGlob->refdef.view.axis.m[2].v[1]) + (float)(v9 * cgameGlob->refdef.view.axis.m[2].v[0])) + (float)(v10 * cgameGlob->refdef.view.axis.m[2].v[2])) / (float)(v11 * cgameGlob->refdef.view.fov.tanHalfFovY)) * (float)(screenHeight * 0.5)) ^ _xmm);
  }
}

/*
==============
CG_CalcReticleColor
==============
*/
void CG_CalcReticleColor(const vec4_t *baseColor, float alpha, float adsAlpha, float aimSpreadScale, vec4_t *outReticleColor)
{
  const dvar_t *v6; 
  const dvar_t *v7; 
  float value; 
  const dvar_t *v9; 
  float v10; 

  if ( (alpha < 0.0 || alpha > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 926, ASSERT_TYPE_ASSERT, "( ( alpha >= 0 && alpha <= 1.0f ) )", "( alpha ) = %g", alpha) )
    __debugbreak();
  *(_QWORD *)outReticleColor->v = *(_QWORD *)baseColor->v;
  outReticleColor->v[2] = baseColor->v[2];
  v6 = DVARFLT_cg_crosshairAlpha;
  if ( !DVARFLT_cg_crosshairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlpha") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  outReticleColor->v[3] = alpha * v6->current.value;
  v7 = DVARFLT_cg_crosshairAlphaMin;
  if ( !DVARFLT_cg_crosshairAlphaMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlphaMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = outReticleColor->v[3];
  if ( value < v7->current.value )
  {
    v9 = DVARFLT_cg_crosshairAlphaMin;
    if ( !DVARFLT_cg_crosshairAlphaMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlphaMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    value = v9->current.value;
  }
  v10 = value * adsAlpha;
  outReticleColor->v[3] = value * adsAlpha;
  if ( ((float)(value * adsAlpha) < 0.0 || v10 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 938, ASSERT_TYPE_SANITY, "( ( outReticleColor[3] >= 0 && outReticleColor[3] <= 1.0f ) )", "( outReticleColor[3] ) = %g", v10) )
    __debugbreak();
}

/*
==============
CG_CalcReticleSpreadRadius
==============
*/
float CG_CalcReticleSpreadRadius(const cg_t *cgameGlob, const Weapon *weapon, bool isAlternate)
{
  CgHandler *Handler; 
  double v7; 
  float tanHalfFovY; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  float outAngle; 
  float outRange; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 860, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BG_WeaponDef(weapon, isAlternate);
  Handler = CgHandler::getHandler(cgameGlob->localClientNum);
  v7 = BG_CalculateFinalSpreadForWeapon(Handler, &cgameGlob->predictedPlayerState, weapon, cgameGlob->predictedPlayerState.weapCommon.aimSpreadScale * 0.0039215689);
  outAngle = *(float *)&v7;
  if ( BG_IsTargetAssistActive(&cgameGlob->predictedPlayerState, NULL, weapon, isAlternate) )
    BG_GetTargetAssistAngleRange(weapon, isAlternate, outAngle, 0.0, &outAngle, &outRange);
  tanHalfFovY = cgameGlob->refdef.view.fov.tanHalfFovY;
  if ( tanHalfFovY == 0.0 )
  {
    LODWORD(_XMM0) = 0;
  }
  else
  {
    v11 = LODWORD(outAngle);
    *(float *)&v11 = outAngle * 0.017453292;
    v10 = v11;
    *(float *)&v10 = tanf_0(outAngle * 0.017453292);
    v12 = v10;
    *(float *)&v12 = (float)(*(float *)&v10 * 240.0) / tanHalfFovY;
    _XMM3 = v12;
    __asm { vmaxss  xmm0, xmm3, xmm2 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_DrawAdsOverlay
==============
*/
void CG_DrawAdsOverlay(LocalClientNum_t localClientNum, const Weapon *weapon, bool isAlternate, const vec4_t *color, const vec2_t *crosshairPos)
{
  const ADSOverlay *Overlay; 
  const ScreenPlacement *ActivePlacement; 
  Material *material; 
  float widthSplitscreen; 
  float h; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float x; 
  float y; 
  float w; 
  float v26; 

  Overlay = BG_GetOverlay(weapon, isAlternate);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  material = CG_GetWeapOverlayMaterial(localClientNum, weapon, isAlternate, ActivePlacement);
  if ( material )
  {
    if ( CL_Main_IsSplitscreenGame() )
    {
      widthSplitscreen = Overlay->widthSplitscreen;
      w = widthSplitscreen;
      h = Overlay->heightSplitscreen;
    }
    else
    {
      widthSplitscreen = Overlay->width;
      w = widthSplitscreen;
      h = Overlay->height;
    }
    v26 = h;
    if ( widthSplitscreen > 320.0 || h > 240.0 )
    {
      v20 = DVARBOOL_cg_debug_overlay_viewport;
      v21 = crosshairPos->v[1];
      x = crosshairPos->v[0] - (float)(widthSplitscreen * 0.5);
      y = v21 - (float)(h * 0.5);
      if ( !DVARBOOL_cg_debug_overlay_viewport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debug_overlay_viewport") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( !v20->current.enabled )
        CL_DrawStretchPic(ActivePlacement, x, y, w, v26, 2, 2, 0.0, 0.0, 1.0, 1.0, color, material);
      ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &v26, 2, 2);
      v22 = DVARBOOL_cg_debug_overlay_viewport;
      if ( !DVARBOOL_cg_debug_overlay_viewport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debug_overlay_viewport") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      if ( !v22->current.enabled )
        CG_DrawFrameOverlay(x, x + w, y, y + v26, color, material);
    }
    else
    {
      v14 = crosshairPos->v[0] - widthSplitscreen;
      v15 = crosshairPos->v[1];
      y = v15 - h;
      x = v14;
      CL_DrawStretchPic(ActivePlacement, v14, v15 - h, widthSplitscreen, h, 2, 2, 0.0, 0.0, 1.0, 1.0, color, material);
      v16 = crosshairPos->v[1];
      x = crosshairPos->v[0];
      y = v16 - v26;
      CL_DrawStretchPic(ActivePlacement, x, v16 - v26, w, v26, 2, 2, 1.0, 0.0, 0.0, 1.0, color, material);
      v17 = crosshairPos->v[1];
      x = crosshairPos->v[0] - w;
      y = v17;
      CL_DrawStretchPic(ActivePlacement, x, v17, w, v26, 2, 2, 0.0, 1.0, 1.0, 0.0, color, material);
      v18 = crosshairPos->v[1];
      x = crosshairPos->v[0];
      y = v18;
      CL_DrawStretchPic(ActivePlacement, x, v18, w, v26, 2, 2, 1.0, 1.0, 0.0, 0.0, color, material);
      v19 = crosshairPos->v[0] - w;
      y = crosshairPos->v[1] - v26;
      x = v19;
      ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &v26, 2, 2);
      CG_DrawFrameOverlay(x, (float)(2.0 * w) + x, y, (float)(2.0 * v26) + y, color, material);
    }
  }
}

/*
==============
CG_DrawFrameOverlay
==============
*/
void CG_DrawFrameOverlay(float innerLeft, float innerRight, float innerTop, float innerBottom, const vec4_t *color, Material *material)
{
  Material *v6; 
  const vec4_t *v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  int v12; 
  int v13; 
  float v14; 

  CL_GetScreenDimensions(&v12, &v13, &v14);
  v6 = material;
  v7 = color;
  v8 = (float)v12;
  v10 = (float)v13;
  v9 = v10;
  if ( innerLeft > 0.0 )
    CL_DrawStretchPicPhysical(0.0, 0.0, innerLeft, v10, 0.0, 0.0, 0.0, 1.0, color, material);
  if ( innerRight < v8 )
    CL_DrawStretchPicPhysical(innerRight, 0.0, v8 - innerRight, v10, 0.0, 0.0, 0.0, 1.0, v7, v6);
  v11 = innerRight - innerLeft;
  if ( innerTop > 0.0 )
    CL_DrawStretchPicPhysical(innerLeft, 0.0, v11, innerTop, 0.0, 0.0, 1.0, 0.0, v7, v6);
  if ( innerBottom < v9 )
    CL_DrawStretchPicPhysical(innerLeft, innerBottom, v11, v9 - innerBottom, 0.0, 0.0, 1.0, 0.0, v7, v6);
}

/*
==============
CG_DrawReticleCenter
==============
*/
void CG_DrawReticleCenter(LocalClientNum_t localClientNum, const Weapon *weapon, bool isAlternate, const vec4_t *color, float centerX, float centerY)
{
  const WeaponDef *v10; 
  const dvar_t *v11; 
  float v12; 
  cg_t *LocalClientGlobals; 
  int v14; 
  float v15; 
  const cg_t *v16; 
  Material *material; 
  const ScreenPlacement *ActivePlacement; 
  bool result; 
  bool shouldPulse; 
  bool spin45; 
  int reticleCenterSize; 
  Material *reticleCenter; 
  int reticleSideSize; 
  Material *reticleSide; 

  v10 = BG_WeaponDef(weapon, isAlternate);
  BG_GetCenterReticle(weapon, isAlternate, &reticleCenter, &reticleCenterSize, &shouldPulse);
  if ( reticleCenter )
  {
    v11 = DCONST_DVARBOOL_lui_footage_capture_enabled;
    if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled )
    {
      CG_GetOmnvar_BooleanByName(localClientNum, "ui_realism_hud", &result, NULL, NULL);
      if ( !result )
      {
        v12 = (float)reticleCenterSize;
        if ( BG_IsOffhandWeaponType(weapon, isAlternate) )
        {
          if ( v10->bCookOffHold )
          {
            BG_GetSideReticle(weapon, isAlternate, &reticleSide, &reticleSideSize, &spin45);
            if ( !reticleSide && shouldPulse )
            {
              LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
              v14 = LocalClientGlobals->predictedPlayerState.grenadeTimeLeft - BG_GetCookingGrenadeFuseMin(weapon, isAlternate, &LocalClientGlobals->predictedPlayerState);
              if ( v14 )
                v12 = (float)((float)(v14 % 1000) * 0.0099999998) + v12;
            }
          }
        }
        v15 = v12;
        if ( CL_IsRenderingSplitScreen() )
        {
          v12 = v12 * 2.0;
          v15 = v12;
        }
        v16 = CG_GetLocalClientGlobals(localClientNum);
        CG_Draw_UpdateScramblerState(v16, localClientNum);
        if ( !CG_Draw_IsScramblingActive(localClientNum) )
        {
          material = reticleCenter;
          ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
          CL_DrawStretchPic(ActivePlacement, centerX - (float)(v15 * 0.5), centerY - (float)(v12 * 0.5), v12, v12, 2, 2, 0.0, 0.0, 1.0, 1.0, color, material);
        }
      }
    }
  }
}

/*
==============
CG_DrawReticleOnePiece
==============
*/
void CG_DrawReticleOnePiece(LocalClientNum_t localClientNum, const Weapon *weapon, bool isAlternate, const vec4_t *baseColor, float centerX, float centerY)
{
  Material *material; 
  cg_t *LocalClientGlobals; 
  float v12; 
  const ScreenPlacement *ActivePlacement; 
  float adsAlpha; 
  float crossHairAlpha; 
  vec4_t outReticleColor; 

  material = BG_GetOnePieceReticle(weapon, isAlternate);
  if ( material )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    CG_DrawWeapReticle(localClientNum, weapon, isAlternate, &crossHairAlpha, &adsAlpha);
    CG_CalcReticleColor(baseColor, crossHairAlpha, adsAlpha, LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale, &outReticleColor);
    if ( outReticleColor.v[3] >= 0.0099999998 )
    {
      v12 = CG_CalcReticleSpreadRadius(LocalClientGlobals, weapon, isAlternate);
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      CL_DrawStretchPic(ActivePlacement, centerX - v12, centerY - v12, v12 * 2.0, v12 * 2.0, 2, 2, 0.0, 0.0, 1.0, 1.0, &outReticleColor, material);
    }
  }
}

/*
==============
CG_DrawReticleSides
==============
*/
void CG_DrawReticleSides(LocalClientNum_t localClientNum, const Weapon *weapon, bool isAlternate, const vec4_t *baseColor, float centerX, float centerY)
{
  int v6; 
  cg_t *LocalClientGlobals; 
  const WeaponDef *v16; 
  const ScreenPlacement *ActivePlacement; 
  cg_t *v18; 
  double CookingGrenadeCookPercentage; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  int v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  const WeaponDef *v32; 
  bool v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float adsAlpha; 
  float crossHairAlpha; 
  bool spin45; 
  float v58; 
  Material *reticleSide; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  int reticleSideSize; 
  vec2_t drawSize; 
  vec4_t outReticleColor; 
  vec2_t spread; 
  vec4_t stuv; 

  *(float *)&v6 = FLOAT_1_0;
  BG_GetSideReticle(weapon, isAlternate, &reticleSide, &reticleSideSize, &spin45);
  if ( !reticleSide )
    return;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_DrawWeapReticle(localClientNum, weapon, isAlternate, &crossHairAlpha, &adsAlpha);
  CG_CalcReticleColor(baseColor, crossHairAlpha, adsAlpha, LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale, &outReticleColor);
  if ( outReticleColor.v[3] < 0.0099999998 )
    return;
  _XMM0 = CL_IsRenderingSplitScreen();
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_2_0);
  __asm { vblendvps xmm1, xmm1, xmm7, xmm2 }
  drawSize.v[0] = (float)reticleSideSize * *(float *)&_XMM1;
  drawSize.v[1] = drawSize.v[0];
  v84 = *(float *)&_XMM1;
  adsAlpha = *(float *)&_XMM1;
  *(float *)&_XMM0 = CG_CalcReticleSpreadRadius(LocalClientGlobals, weapon, isAlternate);
  v16 = BG_WeaponDef(weapon, isAlternate);
  spread.v[0] = *(float *)&_XMM0 - (float)(drawSize.v[0] * v16->fHipReticleSidePos);
  spread.v[1] = *(float *)&_XMM0 - (float)(drawSize.v[1] * v16->fHipReticleSidePos);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  v18 = CG_GetLocalClientGlobals(localClientNum);
  if ( BG_IsOffhandWeaponType(weapon, isAlternate) && BG_WeaponDef(weapon, isAlternate)->bCookOffHold )
  {
    if ( !v18->predictedPlayerState.grenadeTimeLeft )
    {
      v28 = 0.0;
      v76 = 0.0;
      v68 = 0.0;
      v77 = 0.0;
      v69 = 0.0;
      v78 = 0.0;
      v70 = 0.0;
      v79 = 0.0;
      v71 = 0.0;
      v72 = 0.0;
      v58 = 0.0;
      v73 = 0.0;
      v74 = 0.0;
      crossHairAlpha = 0.0;
      v75 = 0.0;
      v80 = 0.0;
      v61 = 0.0;
      v81 = 0.0;
      v63 = 0.0;
      v82 = 0.0;
      v62 = 0.0;
      v83 = 0.0;
      v66 = 0.0;
      v64 = 0.0;
      v67 = 0.0;
      adsAlpha = 0.0;
      v60 = 0.0;
      v65 = 0.0;
      v22 = 0.0;
      v24 = 0.0;
      *(float *)&v26 = 0.0;
      v27 = 0.0;
      v29 = 0.0;
      v30 = 0.0;
      *(float *)&v6 = 0.0;
      goto LABEL_20;
    }
    CookingGrenadeCookPercentage = BG_GetCookingGrenadeCookPercentage(weapon, isAlternate, &v18->predictedPlayerState);
    if ( *(float *)&CookingGrenadeCookPercentage < 0.25 )
    {
      v22 = *(float *)&CookingGrenadeCookPercentage * 4.0;
      v20 = 0.0;
    }
    else
    {
      v21 = *(float *)&CookingGrenadeCookPercentage + -0.25;
      v20 = v21;
      v22 = FLOAT_1_0;
      if ( v21 >= 0.25 )
      {
        v23 = v21 + -0.25;
        v24 = FLOAT_1_0;
LABEL_11:
        if ( v23 < 0.25 )
        {
          *(float *)&v26 = v23 * 4.0;
          v25 = 0.0;
        }
        else
        {
          v25 = v23 + -0.25;
          *(float *)&v26 = FLOAT_1_0;
        }
        if ( v25 < 0.25 )
          *(float *)&v6 = v25 * 4.0;
        v72 = *(float *)&v26;
        v58 = *(float *)&v26;
        v73 = *(float *)&v26;
        v74 = *(float *)&v26;
        crossHairAlpha = *(float *)&v26;
        v75 = *(float *)&v26;
        v27 = *(float *)&v26;
        v28 = *(float *)&v26;
        goto LABEL_19;
      }
    }
    v24 = v20 * 4.0;
    v23 = 0.0;
    goto LABEL_11;
  }
  v72 = FLOAT_1_0;
  v58 = FLOAT_1_0;
  v73 = FLOAT_1_0;
  v74 = FLOAT_1_0;
  crossHairAlpha = FLOAT_1_0;
  v75 = FLOAT_1_0;
  v22 = FLOAT_1_0;
  v24 = FLOAT_1_0;
  *(float *)&v26 = FLOAT_1_0;
  v27 = FLOAT_1_0;
  v28 = FLOAT_1_0;
LABEL_19:
  v76 = *(float *)&v6;
  v65 = *(float *)&v6;
  v60 = *(float *)&v6;
  adsAlpha = *(float *)&v6;
  v67 = *(float *)&v6;
  v64 = *(float *)&v6;
  v66 = *(float *)&v6;
  v83 = *(float *)&v6;
  v62 = *(float *)&v6;
  v82 = *(float *)&v6;
  v63 = *(float *)&v6;
  v81 = *(float *)&v6;
  v61 = *(float *)&v6;
  v80 = *(float *)&v6;
  v71 = *(float *)&v6;
  v79 = *(float *)&v6;
  v70 = *(float *)&v6;
  v78 = *(float *)&v6;
  v69 = *(float *)&v6;
  v77 = *(float *)&v6;
  v68 = *(float *)&v6;
  v30 = *(float *)&v6;
  v29 = *(float *)&v6;
LABEL_20:
  v31 = outReticleColor.v[3];
  v32 = BG_WeaponDef(weapon, isAlternate);
  if ( BG_IsOffhandWeaponType(weapon, isAlternate) )
  {
    v33 = !v32->bCookOffHold;
    v29 = v80;
    v30 = v66;
    v34 = v60;
    v61 = v81;
    v63 = v82;
    v62 = v83;
    v64 = v67;
    v65 = *(float *)&v6;
    if ( !v33 )
    {
      v35 = drawSize.v[0];
      v36 = centerX;
      v37 = drawSize.v[1];
      v60 = centerX - drawSize.v[0];
      adsAlpha = centerY - drawSize.v[1];
      if ( v22 <= 0.0 )
      {
        v38 = v76;
        v39 = v77;
        v40 = v78;
        v41 = v79;
        v42 = v58;
        v43 = crossHairAlpha;
      }
      else
      {
        stuv = (vec4_t)_xmm;
        outReticleColor.v[3] = (float)((float)((float)(v22 - 3.0) * v22) + 3.0) * v22;
        UI_DrawMaterialWithUVs(ActivePlacement, centerX - drawSize.v[0], adsAlpha, drawSize.v[0], drawSize.v[1], 2, 2, &outReticleColor, reticleSide, &stuv);
        v38 = v68;
        v39 = v69;
        v40 = v70;
        v41 = v71;
        v35 = drawSize.v[0];
        v36 = centerX;
        v27 = v72;
        v42 = v73;
        v28 = v74;
        v43 = v75;
        v37 = drawSize.v[1];
      }
      if ( v38 > 0.0 )
      {
        stuv = (vec4_t)_xmm;
        outReticleColor.v[3] = (float)((float)((float)(v39 - 3.0) * v40) + 3.0) * v41;
        UI_DrawMaterialWithUVs(ActivePlacement, v36, adsAlpha, v35, v37, 2, 2, &outReticleColor, reticleSide, &stuv);
        v35 = drawSize.v[0];
        v37 = drawSize.v[1];
        v27 = v42;
        v28 = v43;
      }
      if ( *(float *)&v26 > 0.0 )
      {
        stuv = (vec4_t)_xmm;
        outReticleColor.v[3] = (float)((float)((float)(*(float *)&v26 - 3.0) * v27) + 3.0) * v28;
        UI_DrawMaterialWithUVs(ActivePlacement, centerX, centerY, v35, v37, 2, 2, &outReticleColor, reticleSide, &stuv);
        v35 = drawSize.v[0];
        v37 = drawSize.v[1];
      }
      if ( v24 > 0.0 )
      {
        stuv = (vec4_t)_xmm;
        outReticleColor.v[3] = (float)((float)((float)(v24 - 3.0) * v24) + 3.0) * v24;
        UI_DrawMaterialWithUVs(ActivePlacement, v60, centerY, v35, v37, 2, 2, &outReticleColor, reticleSide, &stuv);
      }
      return;
    }
  }
  else
  {
    v34 = adsAlpha;
  }
  if ( spin45 )
  {
    v44 = drawSize.v[0];
    v45 = drawSize.v[1];
    adsAlpha = (float)(centerX - drawSize.v[0]) - (float)(0.5 * spread.v[0]);
    v46 = (float)(centerY - drawSize.v[1]) - (float)(0.5 * spread.v[1]);
    v47 = (float)(drawSize.v[0] + adsAlpha) + spread.v[0];
    v58 = (float)(drawSize.v[1] + v46) + spread.v[1];
    crossHairAlpha = v47;
    if ( v22 <= 0.0 )
    {
      v50 = v63;
      v49 = adsAlpha;
    }
    else
    {
      v48 = v22 * v31;
      v49 = adsAlpha;
      outReticleColor.v[3] = v48;
      CG_DrawRotatedPic(ActivePlacement, adsAlpha, v46, drawSize.v[0], drawSize.v[1], 2, 2, 315.0, &outReticleColor, reticleSide);
      v50 = v62;
      v44 = drawSize.v[0];
      v47 = crossHairAlpha;
      v29 = v61;
      v45 = drawSize.v[1];
    }
    if ( v29 > 0.0 )
    {
      outReticleColor.v[3] = v31 * v50;
      CG_DrawRotatedPic(ActivePlacement, v47, v46, v44, v45, 2, 2, 45.0, &outReticleColor, reticleSide);
      v44 = drawSize.v[0];
      v45 = drawSize.v[1];
    }
    if ( *(float *)&v26 <= 0.0 )
    {
      v52 = v58;
    }
    else
    {
      v51 = *(float *)&v26 * v31;
      v52 = v58;
      outReticleColor.v[3] = v51;
      CG_DrawRotatedPic(ActivePlacement, crossHairAlpha, v58, v44, v45, 2, 2, 135.0, &outReticleColor, reticleSide);
      v44 = drawSize.v[0];
      v45 = drawSize.v[1];
    }
    if ( v24 > 0.0 )
    {
      outReticleColor.v[3] = v24 * v31;
      CG_DrawRotatedPic(ActivePlacement, v49, v52, v44, v45, 2, 2, 225.0, &outReticleColor, reticleSide);
    }
  }
  else
  {
    v53 = drawSize.v[0];
    v54 = drawSize.v[1];
    if ( v22 > 0.0 )
    {
      outReticleColor.v[3] = v22 * v31;
      CG_DrawRotatedPic(ActivePlacement, centerX - (float)(drawSize.v[0] * 0.5), (float)(centerY - drawSize.v[1]) - spread.v[1], drawSize.v[0], drawSize.v[1], 2, 2, 0.0, &outReticleColor, reticleSide);
      v34 = v65;
      v54 = drawSize.v[1];
      v53 = drawSize.v[0];
      v30 = v64;
    }
    if ( v30 > 0.0 )
    {
      outReticleColor.v[3] = v31 * v34;
      CG_DrawRotatedPic(ActivePlacement, centerX + spread.v[0], centerY - (float)(v54 * 0.5), v53, v54, 2, 2, 90.0, &outReticleColor, reticleSide);
      v54 = drawSize.v[1];
      v53 = drawSize.v[0];
    }
    if ( *(float *)&v26 > 0.0 )
    {
      outReticleColor.v[3] = *(float *)&v26 * v31;
      CG_DrawRotatedPic(ActivePlacement, centerX - (float)(v53 * 0.5), centerY + spread.v[1], v53, v54, 2, 2, 180.0, &outReticleColor, reticleSide);
      v54 = drawSize.v[1];
      v53 = drawSize.v[0];
    }
    if ( v24 > 0.0 )
    {
      outReticleColor.v[3] = v24 * v31;
      CG_DrawRotatedPic(ActivePlacement, (float)(centerX - v53) - spread.v[0], centerY - (float)(v54 * 0.5), v53, v54, 2, 2, 270.0, &outReticleColor, reticleSide);
    }
  }
  outReticleColor.v[3] = v31;
  CG_ContextMount_TryDrawMountIndicator(localClientNum, ActivePlacement, &drawSize, &spread, centerX, centerY, &outReticleColor, v84, 2, 2);
}

/*
==============
CG_DrawReticles_DrawCrosshair
==============
*/
void CG_DrawReticles_DrawCrosshair(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgDrawSystem *DrawSystem; 
  bool IsEMPJammed; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v7; 
  bool v8; 
  bool v9; 
  bool v10; 
  int v11; 
  float fWeaponPosFrac; 
  bool v13; 
  CgHandler *Handler; 
  const Weapon *v15; 
  const Weapon *v16; 
  const ADSOverlay *Overlay; 
  const dvar_t *v18; 
  CgHandler *v19; 
  cg_t *v20; 
  cg_t *v21; 
  __int64 clientNum; 
  const characterInfo_t *CharacterInfo; 
  int entityNum; 
  centity_t *v25; 
  const entityState_t *EntityState; 
  int entity; 
  centity_t *v28; 
  cg_t *v29; 
  const Weapon *ReticleWeapon; 
  bool v31; 
  float v32; 
  float v33; 
  double CrosshairVerticalOffset; 
  float v35; 
  ReticleType ReticleType; 
  __int64 centerY; 
  __int64 v38; 
  bool outIsAlternate; 
  bool IsUAVJammed; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 
  vec4_t outColor; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  DrawSystem = CgDrawSystem::GetDrawSystem((const LocalClientNum_t)v1);
  IsEMPJammed = CG_View_IsEMPJammed((const LocalClientNum_t)v1);
  IsUAVJammed = CG_View_IsUAVJammed((const LocalClientNum_t)v1);
  if ( !CG_View_IsKillCamEntityView((const LocalClientNum_t)v1) && (!LocalClientGlobals->renderingThirdPerson || LocalClientGlobals->predictedPlayerState.vehicleState.entity != 2047) )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v1);
    IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState);
    v7 = DrawSystem->ShouldDrawHud(DrawSystem) != 0;
    v8 = DrawSystem->ShouldDrawCrosshair(DrawSystem);
    v9 = v7;
    v10 = 0;
    if ( !v8 )
      v9 = 0;
    if ( (clientUIActives[v1].keyCatchers & 0x40) == 0 )
      v10 = v9;
    if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_START) && IsEMPJammed )
      v10 = 0;
    v11 = LocalClientGlobals->IsClientGamePaused(LocalClientGlobals);
    fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
    v13 = v10;
    if ( v11 )
      v13 = 0;
    if ( BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) )
    {
      Handler = CgHandler::getHandler((LocalClientNum_t)v1);
      v15 = Handler->PlayerTurret(Handler, &LocalClientGlobals->predictedPlayerState);
      v16 = v15;
      if ( v15->weaponIdx && ((Overlay = BG_GetOverlay(v15, 0), Overlay->shaderMat) || IsEMPJammed && Overlay->shaderEMPMat) )
      {
        CG_DrawAdsOverlay((LocalClientNum_t)v1, v16, 0, &colorWhite, &vec2_origin);
      }
      else if ( !CG_GetFlashbangedRemainingTime((LocalClientNum_t)v1) && v13 && LocalClientGlobals->predictedPlayerState.viewlocked_entNum != 2047 )
      {
        CG_DrawTurretCrossHair((LocalClientNum_t)v1);
      }
      return;
    }
    v18 = DVARBOOL_cg_crosshairCheckDrivingPhysVeh;
    if ( !DVARBOOL_cg_crosshairCheckDrivingPhysVeh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairCheckDrivingPhysVeh") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( !v18->current.enabled )
      goto LABEL_47;
    v19 = CgHandler::getHandler((LocalClientNum_t)v1);
    if ( !v19 )
      goto LABEL_47;
    v20 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    v21 = v20;
    if ( !v20 )
      goto LABEL_47;
    clientNum = v20->predictedPlayerState.clientNum;
    if ( v20->IsMP(v20) )
    {
      if ( (unsigned int)clientNum >= v21[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v38) = v21[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(centerY) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", centerY, v38) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v21[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v21, clientNum);
    }
    if ( !CharacterInfo || ((entityNum = CharacterInfo->entityNum, !v19->IsClient(v19)) ? (EntityState = GHandler::GetEntityState((GHandler *)v19, entityNum)) : (v25 = CG_GetEntity((const LocalClientNum_t)v19->m_localClientNum, entityNum)) == NULL ? (EntityState = NULL) : (EntityState = &v25->nextState), !EntityState || (*(float *)&outVehicleSeat = 0.0, BG_VehicleOccupancy_GetLinkedVehicle(v19, EntityState, CharacterInfo, &outVehicleType, &outVehicleSeat) == 2047) || outVehicleSeat != VEHICLE_SEAT_DRIVER) )
    {
LABEL_47:
      entity = CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->predictedPlayerState.vehicleState.entity;
      if ( entity != 2047 )
      {
        v28 = CG_GetEntity((const LocalClientNum_t)v1, entity);
        if ( CG_Vehicle_IsVehicleEntity(v28) )
        {
LABEL_57:
          CG_DrawVehicleCrossHairShared((LocalClientNum_t)v1, v28);
          return;
        }
      }
      if ( BG_IsVehicleActive(&LocalClientGlobals->predictedPlayerState) )
      {
        v29 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
        if ( v29 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v29->predictedPlayerState.eFlags, ACTIVE, 0xBu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 655, ASSERT_TYPE_ASSERT, "(BG_IsVehicleActive( &cgameGlob->predictedPlayerState ))", (const char *)&queryFormat, "BG_IsVehicleActive( &cgameGlob->predictedPlayerState )") )
          __debugbreak();
        v28 = CG_GetEntity((const LocalClientNum_t)v1, v29->predictedPlayerState.viewlocked_entNum);
        if ( CG_Vehicle_IsVehicleEntity(v28) )
          goto LABEL_57;
      }
      else
      {
        outIsAlternate = 0;
        ReticleWeapon = CG_GetReticleWeapon((LocalClientNum_t)v1, &outIsAlternate);
        if ( ReticleWeapon->weaponIdx )
        {
          if ( !BG_Gesture_ShouldHideReticle(&LocalClientGlobals->predictedPlayerState) && !IsUAVJammed )
          {
            v31 = outIsAlternate;
            CG_DrawWeapReticle((LocalClientNum_t)v1, ReticleWeapon, outIsAlternate, (float *)&outVehicleSeat, (float *)&outVehicleType);
            v32 = *(float *)&outVehicleSeat * *(float *)&outVehicleType;
            if ( !CG_GetFlashbangedRemainingTime((LocalClientNum_t)v1) && v13 && !CG_WeaponInspect_IsUIHidden((LocalClientNum_t)v1) )
            {
              CG_CalcCrosshairColor((const LocalClientNum_t)v1, v32, &outColor);
              if ( outColor.v[3] >= 0.0099999998 && (BG_ADSShouldShowCrosshair(ReticleWeapon, v31) || fWeaponPosFrac != 1.0 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawGun, "cg_drawGun") || IsThirdPersonMode) && AllowedToDrawCrosshair((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState) )
              {
                CG_CalcCrosshairPosition(LocalClientGlobals, 640.0, 480.0, (float *)&outVehicleSeat, (float *)&outVehicleType);
                if ( fWeaponPosFrac != 1.0 || Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawGun, "cg_drawGun") || IsThirdPersonMode )
                {
                  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_crosshairDynamic, "cg_crosshairDynamic") )
                  {
                    v35 = *(float *)&outVehicleType;
                    v33 = *(float *)&outVehicleSeat;
                  }
                  else
                  {
                    v33 = 0.0;
                    CrosshairVerticalOffset = CG_View_GetCrosshairVerticalOffset((const LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState);
                    v35 = (float)(*(float *)&CrosshairVerticalOffset * -480.0) * 0.5;
                  }
                  ReticleType = BG_GetReticleType(ReticleWeapon, v31);
                  CG_DrawReticleCenter((LocalClientNum_t)v1, ReticleWeapon, v31, &outColor, v33, v35);
                  if ( ReticleType )
                  {
                    if ( ReticleType == RETICLE_TYPE_ONE_PIECE )
                      CG_DrawReticleOnePiece((LocalClientNum_t)v1, ReticleWeapon, v31, &outColor, v33, v35);
                  }
                  else
                  {
                    CG_DrawReticleSides((LocalClientNum_t)v1, ReticleWeapon, v31, &outColor, v33, v35);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_DrawReticles_ShouldDrawCrosshair
==============
*/
bool CG_DrawReticles_ShouldDrawCrosshair(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const cg_t *LocalClientGlobals; 
  CgDrawSystem *DrawSystem; 
  const Weapon *ReticleWeapon; 
  CgWeaponMap *Instance; 
  char v6; 
  float fWeaponPosFrac; 
  float v8; 
  double Float_Internal_DebugName; 
  float outIsAlternate; 
  bool result; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  DrawSystem = CgDrawSystem::GetDrawSystem((const LocalClientNum_t)v1);
  if ( LocalClientGlobals->renderingThirdPerson && LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 )
    return 0;
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState) && !CG_GameInterface_ThirdPersonCrosshairForceDraw(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  if ( !DrawSystem->ShouldDrawHud(DrawSystem) || !DrawSystem->ShouldDrawCrosshair(DrawSystem) || Com_GameMode_SupportsFeature(WEAPON_STUNNED_START) && CG_View_IsEMPJammed((const LocalClientNum_t)v1) )
    return 0;
  if ( CG_View_IsUAVJammed((const LocalClientNum_t)v1) )
    return 0;
  if ( LocalClientGlobals->IsClientGamePaused((cg_t *)LocalClientGlobals) )
    return 0;
  if ( BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  if ( BG_IsVehicleActive(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  if ( CG_GetFlashbangedRemainingTime((LocalClientNum_t)v1) )
    return 0;
  CG_GetOmnvar_BooleanByName((LocalClientNum_t)v1, "ui_realism_hud", &result, NULL, NULL);
  if ( result )
    return 0;
  LOBYTE(outIsAlternate) = 0;
  ReticleWeapon = CG_GetReticleWeapon((LocalClientNum_t)v1, (bool *)&outIsAlternate);
  if ( !ReticleWeapon->weaponIdx )
    return 0;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v1);
  if ( BG_Offhand_IsPlayingGrenadeGesture(Instance, &LocalClientGlobals->predictedPlayerState) && !BG_Offhand_GrenadeGestureInterruptable(Instance, &LocalClientGlobals->predictedPlayerState, LocalClientGlobals->time) )
    return 0;
  if ( BG_Ladder_HideCrosshair(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  if ( BG_Skydive_IsSkydiving(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  if ( BG_Skydive_IsParachuting(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  if ( BG_Gesture_ShouldHideReticle(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  v6 = LOBYTE(outIsAlternate);
  fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
  v8 = FLOAT_1_0;
  if ( !BG_ADSShouldShowCrosshair(ReticleWeapon, SLOBYTE(outIsAlternate)) && fWeaponPosFrac == 1.0 )
    return 0;
  if ( !AllowedToDrawCrosshair((LocalClientNum_t)v1, &LocalClientGlobals->predictedPlayerState) )
    return 0;
  if ( CG_GetWeapReticleZoom(LocalClientGlobals, &outIsAlternate) )
    v8 = 1.0 - outIsAlternate;
  if ( (BG_GetWeaponType(ReticleWeapon, v6) == WEAPTYPE_BULLET || BG_GetWeaponType(ReticleWeapon, v6) == WEAPTYPE_PROJECTILE) && BG_IsAimDownSight(ReticleWeapon, v6) && !BG_ADSShouldShowCrosshair(ReticleWeapon, v6) )
    v8 = v8 * CG_CalcADSTransitionBlend(LocalClientGlobals, ReticleWeapon, v6);
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_crosshairAlpha, "cg_crosshairAlpha");
  return (float)(*(float *)&Float_Internal_DebugName * v8) >= 0.0099999998;
}

/*
==============
CG_DrawReticles_UpdateWeapReticleScissor
==============
*/
void CG_DrawReticles_UpdateWeapReticleScissor(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const cg_t *v3; 
  const playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  const Weapon *v6; 
  bool v7; 
  const Weapon *ReticleWeapon; 
  bool v9; 
  bool outIsAlternate; 
  vec2_t zoomResult; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    if ( BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) )
    {
      Handler = CgHandler::getHandler(localClientNum);
      v6 = Handler->PlayerTurret(Handler, p_predictedPlayerState);
      if ( v6->weaponIdx )
      {
        v7 = BG_UsingAlternate(p_predictedPlayerState);
        CG_UpdateScissorForWeaponDef(localClientNum, v6, v7, &vec2_origin);
      }
    }
    else if ( !BG_IsVehicleActive(p_predictedPlayerState) )
    {
      ReticleWeapon = CG_GetReticleWeapon(localClientNum, &outIsAlternate);
      if ( ReticleWeapon->weaponIdx )
      {
        if ( CG_GetWeapReticleZoom(v3, (float *)&zoomResult) && zoomResult.v[0] >= 0.99000001 )
        {
          CG_CalcCrosshairPosition(v3, 640.0, 480.0, (float *)&zoomResult, (float *)&zoomResult + 1);
          v9 = BG_UsingAlternate(p_predictedPlayerState);
          CG_UpdateScissorForWeaponDef(localClientNum, ReticleWeapon, v9, &zoomResult);
        }
      }
    }
  }
}

/*
==============
CG_DrawTurretCrossHair
==============
*/

void __fastcall CG_DrawTurretCrossHair(LocalClientNum_t localClientNum, __int64 a2, double a3)
{
  const dvar_t *v3; 
  const dvar_t *v5; 
  playerState_s *p_predictedPlayerState; 
  bool v7; 
  centity_t *Entity; 
  centity_t *v9; 
  CgWeaponMap *Instance; 
  double Float_Internal_DebugName; 
  float v12; 
  float v13; 
  double CrosshairVerticalOffset; 
  Material *material; 
  const ScreenPlacement *ActivePlacement; 
  int reticleCenterSize; 
  Material *reticleCenter; 
  vec4_t outColor; 
  Weapon r_weapon; 

  v3 = DVARBOOL_cg_drawTurretCrosshair;
  if ( !DVARBOOL_cg_drawTurretCrosshair && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTurretCrosshair") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    if ( !CL_Pause_IsGamePaused() )
      goto LABEL_10;
    v5 = DVARBOOL_cg_drawpaused;
    if ( !DVARBOOL_cg_drawpaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpaused") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.enabled )
    {
LABEL_10:
      p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
      v7 = BG_UsingAlternate(p_predictedPlayerState);
      if ( p_predictedPlayerState->viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 518, ASSERT_TYPE_ASSERT, "(predictedPlayerState->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "predictedPlayerState->viewlocked_entNum != ENTITYNUM_NONE") )
        __debugbreak();
      Entity = CG_GetEntity(localClientNum, p_predictedPlayerState->viewlocked_entNum);
      v9 = Entity;
      if ( (Entity->flags & 1) != 0 )
      {
        if ( Entity->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 524, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
          __debugbreak();
        Instance = CgWeaponMap::GetInstance(localClientNum);
        r_weapon = *BG_GetWeaponForEntity(Instance, &v9->nextState);
        if ( LOWORD(a3) )
        {
          BG_GetCenterReticle(&r_weapon, v7, &reticleCenter, &reticleCenterSize, NULL);
          if ( reticleCenter )
          {
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_crosshairAlpha, "cg_crosshairAlpha");
            if ( *(float *)&Float_Internal_DebugName >= 0.0099999998 )
            {
              CG_CalcCrosshairColor(localClientNum, 1.0, &outColor);
              v13 = (float)reticleCenterSize;
              v12 = v13;
              if ( CL_IsRenderingSplitScreen() )
                v12 = v13 * 2.0;
              CrosshairVerticalOffset = CG_View_GetCrosshairVerticalOffset(localClientNum, p_predictedPlayerState);
              material = reticleCenter;
              ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
              CL_DrawStretchPic(ActivePlacement, v12 * -0.5, (float)(v12 * -0.5) - (float)((float)(*(float *)&CrosshairVerticalOffset * 480.0) * 0.5), v12, v12, 2, 2, 0.0, 0.0, 1.0, 1.0, &outColor, material);
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_DrawVehicleCrossHairShared
==============
*/
void CG_DrawVehicleCrossHairShared(LocalClientNum_t localClientNum, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  entityState_t *p_nextState; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const dvar_t *v8; 
  bool v9; 
  Material *material; 
  float v11; 
  const ScreenPlacement *ActivePlacement; 
  int reticleCenterSize; 
  Material *reticleCenter; 
  vec4_t outColor; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 601, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 602, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_nextState = &cent->nextState;
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((p_nextState->eType - 12) & 0xFFFD) == 0 )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    WeaponForEntity = BG_GetWeaponForEntity(Instance, p_nextState);
    if ( WeaponForEntity->weaponIdx )
    {
      v8 = DVARFLT_cg_crosshairAlpha;
      if ( !DVARFLT_cg_crosshairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlpha") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.value >= 0.0099999998 )
      {
        v9 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
        CG_CalcCrosshairColor(localClientNum, 1.0, &outColor);
        if ( BG_GetReticleType(WeaponForEntity, v9) == RETICLE_TYPE_ONE_PIECE )
        {
          CG_DrawReticleOnePiece(localClientNum, WeaponForEntity, v9, &outColor, 0.0, 0.0);
        }
        else
        {
          BG_GetCenterReticle(WeaponForEntity, v9, &reticleCenter, &reticleCenterSize, NULL);
          material = reticleCenter;
          if ( reticleCenter )
          {
            v11 = (float)reticleCenterSize;
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            CL_DrawStretchPic(ActivePlacement, v11 * -0.5, v11 * -0.5, v11, v11, 2, 2, 0.0, 0.0, 1.0, 1.0, &outColor, material);
          }
        }
      }
    }
  }
}

/*
==============
CG_DrawWeapReticle
==============
*/
void CG_DrawWeapReticle(LocalClientNum_t localClientNum, const Weapon *r_weapon, bool isAlternate, float *crossHairAlpha, float *adsAlpha)
{
  __int128 v5; 
  const cg_t *LocalClientGlobals; 
  float v11; 
  float v12; 
  float zoomResult; 
  vec2_t x; 
  vec4_t color; 
  __int128 v16; 

  if ( !crossHairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 392, ASSERT_TYPE_ASSERT, "(crossHairAlpha)", (const char *)&queryFormat, "crossHairAlpha") )
    __debugbreak();
  if ( !adsAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 393, ASSERT_TYPE_ASSERT, "(adsAlpha)", (const char *)&queryFormat, "adsAlpha") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( CG_GetWeapReticleZoom(LocalClientGlobals, &zoomResult) )
  {
    v16 = v5;
    v12 = zoomResult;
    color.v[3] = zoomResult;
    color.v[0] = FLOAT_1_0;
    color.v[1] = FLOAT_1_0;
    color.v[2] = FLOAT_1_0;
    CG_CalcCrosshairPosition(LocalClientGlobals, 640.0, 480.0, (float *)&x, (float *)&x + 1);
    CG_DrawAdsOverlay(localClientNum, r_weapon, isAlternate, &color, &x);
    v11 = 1.0 - v12;
  }
  else
  {
    v11 = FLOAT_1_0;
  }
  *crossHairAlpha = v11;
  if ( (v11 < 0.0 || v11 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 418, ASSERT_TYPE_SANITY, "( ( *crossHairAlpha >= 0 && *crossHairAlpha <= 1 ) )", "( *crossHairAlpha ) = %g", *crossHairAlpha) )
    __debugbreak();
  *adsAlpha = 1.0;
  if ( (BG_GetWeaponType(r_weapon, isAlternate) == WEAPTYPE_BULLET || BG_GetWeaponType(r_weapon, isAlternate) == WEAPTYPE_PROJECTILE) && BG_IsAimDownSight(r_weapon, isAlternate) && !BG_ADSShouldShowCrosshair(r_weapon, isAlternate) )
    *adsAlpha = CG_CalcADSTransitionBlend(LocalClientGlobals, r_weapon, isAlternate);
}

/*
==============
CG_GetCrosshairAlpha
==============
*/
float CG_GetCrosshairAlpha(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  const Weapon *ReticleWeapon; 
  bool v5; 
  const Weapon *v6; 
  const cg_t *v7; 
  float v8; 
  float v9; 
  bool outIsAlternate; 
  float zoomResult; 
  vec4_t outColor; 
  vec4_t outReticleColor; 

  if ( !CG_DrawReticles_ShouldDrawCrosshair(localClientNum) )
    return 0.0;
  v2 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled || CG_WeaponInspect_IsUIHidden(localClientNum) )
    return 0.0;
  outIsAlternate = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  ReticleWeapon = CG_GetReticleWeapon(localClientNum, &outIsAlternate);
  v5 = outIsAlternate;
  v6 = ReticleWeapon;
  v7 = CG_GetLocalClientGlobals(localClientNum);
  v8 = FLOAT_1_0;
  if ( CG_GetWeapReticleZoom(v7, &zoomResult) )
  {
    v9 = 1.0 - zoomResult;
    if ( ((float)(1.0 - zoomResult) < 0.0 || (float)(1.0 - zoomResult) > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 377, ASSERT_TYPE_SANITY, "( ( *crossHairAlpha >= 0 && *crossHairAlpha <= 1 ) )", "( *crossHairAlpha ) = %g", v9) )
      __debugbreak();
  }
  else
  {
    v9 = FLOAT_1_0;
  }
  if ( (BG_GetWeaponType(v6, v5) == WEAPTYPE_BULLET || BG_GetWeaponType(v6, v5) == WEAPTYPE_PROJECTILE) && BG_IsAimDownSight(v6, v5) && !BG_ADSShouldShowCrosshair(v6, v5) )
    v8 = CG_CalcADSTransitionBlend(v7, v6, v5);
  CG_CalcCrosshairColor(localClientNum, v9, &outColor);
  CG_CalcReticleColor(&outColor, v9, v8, LocalClientGlobals->predictedPlayerState.weapCommon.aimSpreadScale, &outReticleColor);
  return outReticleColor.v[3];
}

/*
==============
CG_GetCrosshairColorAsInt
==============
*/
__int64 CG_GetCrosshairColorAsInt(const LocalClientNum_t localClientNum)
{
  int v3; 
  int v6; 
  vec4_t outColor; 

  CG_CalcCrosshairColor(localClientNum, 1.0, &outColor);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v3 = (int)*(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v6 = (int)*(float *)&_XMM2 + (v3 << 8);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  return (unsigned int)((int)*(float *)&_XMM2 + (v6 << 8));
}

/*
==============
CG_GetCrosshairRadius
==============
*/
float CG_GetCrosshairRadius(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const cg_t *v3; 
  const Weapon *ReticleWeapon; 
  bool outIsAlternate; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  outIsAlternate = 0;
  v3 = LocalClientGlobals;
  ReticleWeapon = CG_GetReticleWeapon(localClientNum, &outIsAlternate);
  return CG_CalcReticleSpreadRadius(v3, ReticleWeapon, outIsAlternate) * 2.25;
}

/*
==============
CG_GetReticleWeapon
==============
*/
const Weapon *CG_GetReticleWeapon(LocalClientNum_t localClientNum, bool *outIsAlternate)
{
  __int64 v2; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v5; 
  cg_t *LocalClientGlobals; 

  v2 = localClientNum;
  if ( !outIsAlternate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 73, ASSERT_TYPE_ASSERT, "(outIsAlternate)", (const char *)&queryFormat, "outIsAlternate") )
    __debugbreak();
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v2];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  if ( !BG_Offhand_IsPlayingGrenadeGesture(v5, p_predictedPlayerState) || BG_Offhand_GrenadeGestureInterruptable(v5, p_predictedPlayerState, LocalClientGlobals->time) || BG_OffhandGestureWeaponWillDetonate(p_predictedPlayerState) || BG_OFfhandGestureWeaponIsBeingPutAway(p_predictedPlayerState) )
  {
    *outIsAlternate = BG_UsingAlternate(p_predictedPlayerState);
    return BG_GetViewmodelWeapon(v5, p_predictedPlayerState);
  }
  else
  {
    *outIsAlternate = 0;
    return BG_GetOffhandGestureWeapon(v5, p_predictedPlayerState);
  }
}

/*
==============
CG_GetWeapOverlayMaterial
==============
*/
Material *CG_GetWeapOverlayMaterial(LocalClientNum_t localClientNum, const Weapon *weapon, bool isAlternate, const ScreenPlacement *scrPlace)
{
  bool v8; 
  bool IsEMPJammed; 
  const ADSOverlay *Overlay; 
  Material *result; 

  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 173, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  v8 = scrPlace->realViewportSize.v[1] <= 480.0;
  IsEMPJammed = CG_View_IsEMPJammed(localClientNum);
  Overlay = BG_GetOverlay(weapon, isAlternate);
  if ( v8 && CL_Main_IsSplitscreenGame() && (float)((float)(scrPlace->realViewportSize.v[1] * 0.0020833334) * Overlay->heightSplitscreen) >= 480.0 )
    v8 = 0;
  if ( IsEMPJammed && Overlay->shaderEMPMat )
  {
    if ( !v8 )
      return Overlay->shaderEMPMat;
    result = Overlay->shaderEMPLowResMat;
    if ( !result )
      return Overlay->shaderEMPMat;
  }
  else
  {
    if ( !v8 )
      return Overlay->shaderMat;
    result = Overlay->shaderLowResMat;
    if ( !result )
      return Overlay->shaderMat;
  }
  return result;
}

/*
==============
CG_GetWeapReticleZoom
==============
*/
bool CG_GetWeapReticleZoom(const cg_t *cgameGlob, float *zoomResult)
{
  const Weapon *ReticleWeapon; 
  const WeaponDef *v5; 
  const ADSOverlay *Overlay; 
  __int64 localClientNum; 
  float correctedWeaponPosFrac; 
  CgWeaponMap *v10; 
  double OffhandAdsFrac; 
  double WeaponZoom; 
  bool outIsAlternate; 

  ReticleWeapon = CG_GetReticleWeapon(cgameGlob->localClientNum, &outIsAlternate);
  v5 = BG_WeaponDef(ReticleWeapon, outIsAlternate);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 106, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  Overlay = BG_GetOverlay(ReticleWeapon, outIsAlternate);
  if ( BG_GetWeaponClass(ReticleWeapon, outIsAlternate) == WEAPCLASS_TURRET && v5->overlayInterface == WEAPOVERLAYINTERFACE_TURRETSCOPE || Overlay->shaderMat || Overlay->reticle && !CG_View_IsUsingDualFOV((const LocalClientNum_t)cgameGlob->localClientNum) )
  {
    localClientNum = cgameGlob->localClientNum;
    correctedWeaponPosFrac = cgameGlob->weaponPosFracAnimData.correctedWeaponPosFrac;
    if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v10 = CgWeaponMap::ms_instance[localClientNum];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 122, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( BG_IsUsingOffhandGestureWeaponADSSupport(v10, &cgameGlob->predictedPlayerState) )
    {
      OffhandAdsFrac = BG_GetOffhandAdsFrac(&cgameGlob->predictedPlayerState);
      correctedWeaponPosFrac = *(float *)&OffhandAdsFrac;
    }
    WeaponZoom = CG_GetWeaponZoom(cgameGlob, ReticleWeapon, correctedWeaponPosFrac, CG_FovSpace_Scene);
    if ( zoomResult )
      *zoomResult = *(float *)&WeaponZoom;
    return *(float *)&WeaponZoom > 0.0099999998;
  }
  else
  {
    if ( zoomResult )
      *zoomResult = 0.0;
    return 0;
  }
}

/*
==============
CG_UpdateScissorForWeaponDef
==============
*/
void CG_UpdateScissorForWeaponDef(LocalClientNum_t localClientNum, const Weapon *weapon, bool isAlternate, const vec2_t *crosshairPos)
{
  const ADSOverlay *Overlay; 
  const ScreenPlacement *ActivePlacement; 
  cg_t *LocalClientGlobals; 
  cg_t *v11; 
  float widthSplitscreen; 
  float heightSplitscreen; 
  float v14; 
  float v15; 
  refdef_t *p_refdef; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  float w; 
  float h; 
  float x; 
  float y; 

  Overlay = BG_GetOverlay(weapon, isAlternate);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( CG_GetWeapOverlayMaterial(localClientNum, weapon, isAlternate, ActivePlacement) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v11 = LocalClientGlobals;
    if ( !LocalClientGlobals->shellshock.wantSavedScreen )
    {
      LocalClientGlobals->shellshock.hasScissor = 1;
      if ( CL_Main_IsSplitscreenGame() )
      {
        widthSplitscreen = Overlay->widthSplitscreen;
        w = widthSplitscreen;
        heightSplitscreen = Overlay->heightSplitscreen;
      }
      else
      {
        widthSplitscreen = Overlay->width;
        w = widthSplitscreen;
        heightSplitscreen = Overlay->height;
      }
      h = heightSplitscreen;
      if ( widthSplitscreen > 320.0 || heightSplitscreen > 240.0 )
      {
        v14 = crosshairPos->v[0] - (float)(widthSplitscreen * 0.5);
        v15 = crosshairPos->v[1];
        x = v14;
        y = v15 - (float)(heightSplitscreen * 0.5);
        ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &h, 2, 2);
        p_refdef = &v11->refdef;
        if ( !p_refdef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 184, ASSERT_TYPE_ASSERT, "(refdef)", (const char *)&queryFormat, "refdef") )
          __debugbreak();
        if ( p_refdef->useScissorViewport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 185, ASSERT_TYPE_ASSERT, "(!refdef->useScissorViewport)", (const char *)&queryFormat, "!refdef->useScissorViewport") )
          __debugbreak();
        p_refdef->useScissorViewport = 1;
        v17 = p_refdef->displayViewport.x + (int)x;
        p_refdef->scissorViewport.x = v17;
        v18 = p_refdef->displayViewport.y + (int)y;
        p_refdef->scissorViewport.y = v18;
        v19 = (int)w;
        p_refdef->scissorViewport.width = (int)w;
        v20 = (int)h;
        p_refdef->scissorViewport.height = (int)h;
        v21 = I_clamp(v17, p_refdef->displayViewport.x, p_refdef->displayViewport.x + p_refdef->displayViewport.width);
        v22 = p_refdef->scissorViewport.y;
        p_refdef->scissorViewport.x = v21;
        p_refdef->scissorViewport.y = I_clamp(v22, p_refdef->displayViewport.y, p_refdef->displayViewport.y + p_refdef->displayViewport.height);
        v23 = I_clamp(v19 + v17, p_refdef->displayViewport.x, p_refdef->displayViewport.x + p_refdef->displayViewport.width);
        v24 = I_clamp(v20 + v18, p_refdef->displayViewport.y, p_refdef->displayViewport.y + p_refdef->displayViewport.height);
        v25 = v23 - p_refdef->scissorViewport.x;
        p_refdef->scissorViewport.height = v24 - p_refdef->scissorViewport.y;
        p_refdef->scissorViewport.width = v25;
      }
    }
  }
}

