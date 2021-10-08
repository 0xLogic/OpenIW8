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
  CgWeaponMap *v14; 
  bool v15; 
  bool v16; 
  char v23; 
  bool v24; 
  bool v30; 
  float *outBlendStart; 
  float *outBlendStarta; 
  float *outBlendStartb; 
  float *outBlendEnd; 
  float *outBlendEnda; 
  float *outBlendEndb; 
  double v54; 
  double v55; 
  double v56; 
  char v58; 
  void *retaddr; 
  float v60; 
  float v61; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBX = cgameGlob;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0C8h+var_88], xmm11
  }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 330, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( BG_GetWeaponType(weapon, isAlternate) != WEAPTYPE_BULLET && BG_GetWeaponType(weapon, isAlternate) != WEAPTYPE_PROJECTILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 331, ASSERT_TYPE_ASSERT, "((BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_BULLET) || (BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_PROJECTILE))", (const char *)&queryFormat, "(BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_BULLET) || (BG_GetWeaponType( weapon, isAlternate ) == WEAPTYPE_PROJECTILE)") )
    __debugbreak();
  localClientNum = _RBX->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v14 = CgWeaponMap::ms_instance[localClientNum];
  v15 = v14 == NULL;
  if ( !v14 )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 334, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap");
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+738h]
    vmovsd  xmm10, cs:__real@3ff0000000000000
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm6, xmm9
    vxorpd  xmm11, xmm11, xmm11
    vcomiss xmm6, xmm7
  }
  if ( !v15 )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm10
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+outBlendEnd], xmm11
      vmovsd  [rsp+0C8h+outBlendStart], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 336, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( adsFrac ) && ( adsFrac ) <= ( 1.0f )", "adsFrac not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&outBlendStart, *(double *)&outBlendEnd, v54) )
      __debugbreak();
  }
  BG_GetADSCrosshairBlendFracs(v14, &_RBX->predictedPlayerState, weapon, isAlternate, _RBX->playerEntity.bPositionToADS != 0, &v60, &v61);
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+arg_18]
    vsubss  xmm1, xmm0, [rsp+0C8h+arg_0]
    vmaxss  xmm8, xmm1, cs:__real@358637bd
    vcomiss xmm8, cs:__real@358637bd
  }
  if ( v23 )
    goto LABEL_29;
  __asm { vcomiss xmm8, xmm7 }
  if ( !(v23 | v24) )
  {
LABEL_29:
    __asm
    {
      vmovsd  xmm0, cs:__real@3eb0c6f7a0000000
      vmovsd  [rsp+0C8h+var_90], xmm10
      vmovsd  [rsp+0C8h+outBlendEnd], xmm0
      vcvtss2sd xmm1, xmm8, xmm8
      vmovsd  [rsp+0C8h+outBlendStart], xmm1
    }
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 347, ASSERT_TYPE_ASSERT, "( static_cast<float>( 1.0E-6 ) ) <= ( blendFracDist ) && ( blendFracDist ) <= ( 1.0f )", "blendFracDist not in [static_cast<float>( ZERO_EPSILON ), 1.0f]\n\t%g not in [%g, %g]", *(double *)&outBlendStarta, *(double *)&outBlendEnda, v55);
    v23 = 0;
    v24 = !v30;
    if ( v30 )
      __debugbreak();
  }
  __asm
  {
    vsubss  xmm0, xmm6, [rsp+0C8h+arg_0]
    vmaxss  xmm0, xmm0, xmm9
    vminss  xmm1, xmm0, xmm7
    vdivss  xmm2, xmm1, xmm8
    vmaxss  xmm0, xmm2, xmm9
    vminss  xmm1, xmm0, xmm7
    vsubss  xmm6, xmm7, xmm1
    vcomiss xmm6, xmm9
    vcomiss xmm6, xmm7
  }
  if ( !(v23 | v24) )
  {
    __asm
    {
      vmovsd  [rsp+0C8h+var_90], xmm10
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0C8h+outBlendEnd], xmm11
      vmovsd  [rsp+0C8h+outBlendStart], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 350, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( alpha ) && ( alpha ) <= ( 1.0f )", "alpha not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&outBlendStartb, *(double *)&outBlendEndb, v56) )
      __debugbreak();
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_CalcCrosshairColor
==============
*/

void __fastcall CG_CalcCrosshairColor(const LocalClientNum_t localClientNum, double alpha, vec4_t *outColor)
{
  playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  const Weapon *Weapon; 
  bool v13; 
  CgWeaponMap *Instance; 
  const WeaponDef *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v21; 
  double v24; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+58h+var_18], xmm6
  }
  _RBX = outColor;
  __asm
  {
    vmovaps xmm6, xmm1
    vcomiss xmm1, cs:__real@3f800000
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+58h+var_30], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 437, ASSERT_TYPE_ASSERT, "( ( alpha >= 0.0f && alpha <= 1.0f ) )", "( alpha ) = %g", v24) )
    __debugbreak();
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( BG_IsTurretActive(p_predictedPlayerState) )
  {
    Handler = CgHandler::getHandler(localClientNum);
    Weapon = Handler->PlayerTurret(Handler, p_predictedPlayerState);
    v13 = 0;
  }
  else
  {
    v13 = BG_UsingAlternate(p_predictedPlayerState);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->weapCommon.weaponHandle);
  }
  v15 = BG_WeaponDef(Weapon, v13);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 455, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( !v15->crosshairColorChange )
    goto LABEL_29;
  v16 = DVARBOOL_cg_crosshairFriendlyColorEnabled;
  if ( !DVARBOOL_cg_crosshairFriendlyColorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairFriendlyColorEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.enabled || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 3u) )
  {
    v17 = DVARBOOL_cg_crosshairEnemyColorEnabled;
    if ( !DVARBOOL_cg_crosshairEnemyColorEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairEnemyColorEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 4u) && Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_crosshairEnemyColor, "cg_crosshairEnemyColor") )
    {
      Dvar_GetUnpackedColorByName("NORTRLQQTT", _RBX);
      goto LABEL_30;
    }
LABEL_29:
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B; vec4_t const colorWhite
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?colorWhite@@3Tvec4_t@@B+4; vec4_t const colorWhite
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?colorWhite@@3Tvec4_t@@B+8; vec4_t const colorWhite
      vmovss  dword ptr [rbx+8], xmm0
    }
    goto LABEL_30;
  }
  Dvar_GetUnpackedColorByName("NSRQOMSLKT", _RBX);
LABEL_30:
  v21 = DVARFLT_cg_crosshairAlpha;
  if ( !DVARFLT_cg_crosshairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlpha") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+28h]
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
}

/*
==============
CG_CalcCrosshairPosition
==============
*/

void __fastcall CG_CalcCrosshairPosition(const cg_t *cgameGlob, double screenWidth, double screenHeight, float *x, float *y)
{
  char v20; 
  char v21; 
  vec3_t angles; 
  vec3_t forward; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm0, dword ptr [rcx+49DFCh]
    vmovss  xmm3, dword ptr [rcx+49E00h]
  }
  _RDI = y;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+angles], xmm0
    vmovss  xmm0, dword ptr [rcx+178C8h]
  }
  _RSI = x;
  _RBX = cgameGlob;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+angles+8], xmm0
    vmovss  dword ptr [rsp+0B8h+angles+4], xmm3
    vmovaps xmm10, xmm2
    vmovaps xmm11, xmm1
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+0B8h+forward+4]
    vmulss  xmm1, xmm6, dword ptr [rbx+6948h]
    vmovss  xmm7, dword ptr [rsp+0B8h+forward]
    vmulss  xmm0, xmm7, dword ptr [rbx+6944h]
    vmovss  xmm8, dword ptr [rsp+0B8h+forward+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm8, dword ptr [rbx+694Ch]
    vaddss  xmm9, xmm2, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm9, xmm1
  }
  if ( v20 | v21 )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+6930h]
    vcomiss xmm3, xmm1
  }
  if ( v20 | v21 )
  {
LABEL_4:
    *_RSI = 0.0;
    __asm { vmovss  dword ptr [rdi], xmm1 }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbx+6954h]
      vmulss  xmm0, xmm7, dword ptr [rbx+6950h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rbx+6958h]
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm11, cs:__real@3f000000
      vmulss  xmm0, xmm3, xmm9
      vdivss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm3, xmm1
      vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rsi], xmm0
      vmulss  xmm1, xmm6, dword ptr [rbx+6960h]
      vmulss  xmm0, xmm7, dword ptr [rbx+695Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rbx+6964h]
      vmulss  xmm0, xmm9, dword ptr [rbx+6934h]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm10, cs:__real@3f000000
      vdivss  xmm2, xmm3, xmm0
      vmulss  xmm2, xmm2, xmm1
      vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rdi], xmm0
    }
  }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_CalcReticleColor
==============
*/

void __fastcall CG_CalcReticleColor(const vec4_t *baseColor, double alpha, double adsAlpha, float aimSpreadScale, vec4_t *outReticleColor)
{
  const dvar_t *v15; 
  char v18; 
  char v19; 
  double v28; 
  double v29; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm8
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm1, xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmm9, xmm2
    vmovaps xmm6, xmm1
    vcomiss xmm1, cs:__real@3f800000
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+78h+var_50], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 926, ASSERT_TYPE_ASSERT, "( ( alpha >= 0 && alpha <= 1.0f ) )", "( alpha ) = %g", v28) )
    __debugbreak();
  _RDI = outReticleColor;
  *(_QWORD *)outReticleColor->v = *(_QWORD *)baseColor->v;
  outReticleColor->v[2] = baseColor->v[2];
  v15 = DVARFLT_cg_crosshairAlpha;
  if ( !DVARFLT_cg_crosshairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlpha") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbx+28h]
    vmovss  dword ptr [rdi+0Ch], xmm0
  }
  _RBX = DVARFLT_cg_crosshairAlphaMin;
  if ( !DVARFLT_cg_crosshairAlphaMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlphaMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v18 )
  {
    _RBX = DVARFLT_cg_crosshairAlphaMin;
    if ( !DVARFLT_cg_crosshairAlphaMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlphaMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmulss  xmm0, xmm0, xmm9
    vcomiss xmm0, xmm8
    vmovss  dword ptr [rdi+0Ch], xmm0
  }
  if ( v18 )
    goto LABEL_16;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !(v18 | v19) )
  {
LABEL_16:
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+78h+var_50], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 938, ASSERT_TYPE_SANITY, "( ( outReticleColor[3] >= 0 && outReticleColor[3] <= 1.0f ) )", "( outReticleColor[3] ) = %g", v29) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v31;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_CalcReticleSpreadRadius
==============
*/
float CG_CalcReticleSpreadRadius(const cg_t *cgameGlob, const Weapon *weapon, bool isAlternate)
{
  CgHandler *Handler; 
  bool IsTargetAssistActive; 
  bool v14; 
  float outAngle; 
  float outRange; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
  }
  _RDI = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 860, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BG_WeaponDef(weapon, isAlternate);
  Handler = CgHandler::getHandler(_RDI->localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+74Ch]
    vmulss  xmm3, xmm0, cs:__real@3b808081; aimSpreadScale
  }
  *(double *)&_XMM0 = BG_CalculateFinalSpreadForWeapon(Handler, &_RDI->predictedPlayerState, weapon, *(float *)&_XMM3);
  __asm { vmovss  [rsp+68h+outAngle], xmm0 }
  IsTargetAssistActive = BG_IsTargetAssistActive(&_RDI->predictedPlayerState, NULL, weapon, isAlternate);
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v14 = !IsTargetAssistActive;
  if ( IsTargetAssistActive )
  {
    __asm
    {
      vmovss  xmm2, [rsp+68h+outAngle]; fallbackAngle
      vxorps  xmm3, xmm3, xmm3; fallbackRange
    }
    BG_GetTargetAssistAngleRange(weapon, isAlternate, *(const float *)&_XMM2, *(const float *)&_XMM3, &outAngle, &outRange);
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+6934h]
    vucomiss xmm7, xmm6
  }
  if ( v14 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+outAngle]
      vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
    }
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@43700000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [r14+240h]
      vdivss  xmm3, xmm1, xmm7
      vmaxss  xmm0, xmm3, xmm2
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
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
  const ScreenPlacement *ActivePlacement; 
  Material *material; 
  bool IsSplitscreenGame; 
  const dvar_t *v54; 
  const dvar_t *v65; 
  float h; 
  float ha; 
  float hb; 
  float hc; 
  float hd; 
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
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float x; 
  float y; 
  float w; 
  float v98; 

  _R14 = BG_GetOverlay(weapon, isAlternate);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  material = CG_GetWeapOverlayMaterial(localClientNum, weapon, isAlternate, ActivePlacement);
  if ( material )
  {
    IsSplitscreenGame = CL_Main_IsSplitscreenGame();
    if ( IsSplitscreenGame )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r14+50h]
        vmovss  [rbp+4Fh+w], xmm3
        vmovss  xmm4, dword ptr [r14+54h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r14+48h]; w
        vmovss  [rbp+4Fh+w], xmm3
        vmovss  xmm4, dword ptr [r14+4Ch]
      }
    }
    __asm
    {
      vcomiss xmm3, cs:__real@43a00000
      vmovss  [rbp+4Fh+var_74], xmm4
    }
    if ( IsSplitscreenGame )
    {
      _RAX = crosshairPos;
      __asm
      {
        vmulss  xmm1, xmm3, cs:__real@3f000000
        vmulss  xmm2, xmm4, cs:__real@3f000000
      }
      v54 = DVARBOOL_cg_debug_overlay_viewport;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vsubss  xmm1, xmm0, xmm1
        vmovss  xmm0, dword ptr [rax+4]
        vmovss  [rbp+4Fh+x], xmm1
        vsubss  xmm1, xmm0, xmm2
        vmovss  [rbp+4Fh+y], xmm1
      }
      if ( !DVARBOOL_cg_debug_overlay_viewport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debug_overlay_viewport") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v54);
      if ( !v54->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vmovss  xmm3, [rbp+4Fh+w]; w
          vmovss  xmm2, [rbp+4Fh+y]; y
          vmovss  [rsp+0F0h+var_A0], xmm0
          vmovss  [rsp+0F0h+var_A8], xmm0
          vmovss  xmm0, [rbp+4Fh+var_74]
          vxorps  xmm1, xmm1, xmm1
          vmovss  [rsp+0F0h+var_B0], xmm1
          vmovss  [rsp+0F0h+var_B8], xmm1
          vmovss  xmm1, [rbp+4Fh+x]; x
          vmovss  dword ptr [rsp+0F0h+h], xmm0
        }
        CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, hd, 2, 2, v79, v84, v89, v94, color, material);
      }
      ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &v98, 2, 2);
      v65 = DVARBOOL_cg_debug_overlay_viewport;
      if ( !DVARBOOL_cg_debug_overlay_viewport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debug_overlay_viewport") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v65);
      if ( !v65->current.enabled )
      {
        __asm
        {
          vmovss  xmm2, [rbp+4Fh+y]; innerTop
          vmovss  xmm0, [rbp+4Fh+x]; innerLeft
          vaddss  xmm3, xmm2, [rbp+4Fh+var_74]; innerBottom
          vaddss  xmm1, xmm0, [rbp+4Fh+w]; innerRight
        }
        CG_DrawFrameOverlay(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, color, material);
      }
    }
    else
    {
      __asm { vcomiss xmm4, cs:__real@43700000 }
      _RBX = crosshairPos;
      __asm
      {
        vmovaps [rsp+0F0h+var_50], xmm6
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, xmm3; x
        vmovss  xmm0, dword ptr [rbx+4]
        vxorps  xmm6, xmm6, xmm6
        vsubss  xmm2, xmm0, xmm4; y
        vmovaps [rsp+0F0h+var_60], xmm7
        vmovss  xmm7, cs:__real@3f800000
        vmovss  [rsp+0F0h+var_A0], xmm7
        vmovss  [rsp+0F0h+var_A8], xmm7
        vmovss  [rsp+0F0h+var_B0], xmm6
        vmovss  [rsp+0F0h+var_B8], xmm6
        vmovss  [rbp+4Fh+y], xmm2
        vmovss  [rbp+4Fh+x], xmm1
        vmovss  dword ptr [rsp+0F0h+h], xmm4
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, h, 2, 2, v75, v80, v85, v90, color, material);
      __asm
      {
        vmovss  xmm3, [rbp+4Fh+var_74]
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  xmm1, dword ptr [rbx]; x
        vmovss  [rsp+0F0h+var_A0], xmm7
        vmovss  [rsp+0F0h+var_A8], xmm6
        vmovss  [rsp+0F0h+var_B0], xmm6
        vmovss  [rsp+0F0h+var_B8], xmm7
        vsubss  xmm2, xmm0, xmm3; y
        vmovss  dword ptr [rsp+0F0h+h], xmm3
        vmovss  xmm3, [rbp+4Fh+w]; w
        vmovss  [rbp+4Fh+x], xmm1
        vmovss  [rbp+4Fh+y], xmm2
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, ha, 2, 2, v76, v81, v86, v91, color, material);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm3, [rbp+4Fh+w]; w
        vmovss  xmm2, dword ptr [rbx+4]; y
        vmovss  [rsp+0F0h+var_A0], xmm6
        vmovss  [rsp+0F0h+var_A8], xmm7
        vmovss  [rsp+0F0h+var_B0], xmm7
        vmovss  [rsp+0F0h+var_B8], xmm6
        vsubss  xmm1, xmm0, xmm3; x
        vmovss  xmm0, [rbp+4Fh+var_74]
        vmovss  dword ptr [rsp+0F0h+h], xmm0
        vmovss  [rbp+4Fh+x], xmm1
        vmovss  [rbp+4Fh+y], xmm2
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, hb, 2, 2, v77, v82, v87, v92, color, material);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx]; x
        vmovss  xmm2, dword ptr [rbx+4]; y
        vmovss  xmm0, [rbp+4Fh+var_74]
        vmovss  xmm3, [rbp+4Fh+w]; w
        vmovss  [rsp+0F0h+var_A0], xmm6
        vmovss  [rsp+0F0h+var_A8], xmm6
        vmovss  [rsp+0F0h+var_B0], xmm7
        vmovss  [rsp+0F0h+var_B8], xmm7
        vmovss  dword ptr [rsp+0F0h+h], xmm0
        vmovss  [rbp+4Fh+x], xmm1
        vmovss  [rbp+4Fh+y], xmm2
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, hc, 2, 2, v78, v83, v88, v93, color, material);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, [rbp+4Fh+w]
        vmovss  xmm2, dword ptr [rbx+4]
        vsubss  xmm0, xmm2, [rbp+4Fh+var_74]
        vmovss  [rbp+4Fh+y], xmm0
        vmovss  [rbp+4Fh+x], xmm1
      }
      ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &v98, 2, 2);
      __asm
      {
        vmovss  xmm4, cs:__real@40000000
        vmulss  xmm1, xmm4, [rbp+4Fh+var_74]
        vmovss  xmm2, [rbp+4Fh+y]; innerTop
        vmulss  xmm4, xmm4, [rbp+4Fh+w]
        vmovss  xmm0, [rbp+4Fh+x]; innerLeft
        vaddss  xmm3, xmm1, xmm2; innerBottom
        vaddss  xmm1, xmm4, xmm0; innerRight
      }
      CG_DrawFrameOverlay(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, color, material);
      __asm
      {
        vmovaps xmm7, [rsp+0F0h+var_60]
        vmovaps xmm6, [rsp+0F0h+var_50]
      }
    }
  }
}

/*
==============
CG_DrawFrameOverlay
==============
*/

void __fastcall CG_DrawFrameOverlay(double innerLeft, double innerRight, double innerTop, double innerBottom, const vec4_t *color, Material *material)
{
  char v19; 
  char v20; 
  Material *v21; 
  const vec4_t *v22; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  char v70; 
  void *retaddr; 
  int v72; 
  int v73; 
  float v74; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps xmm13, xmm2
    vmovaps xmm10, xmm3
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm0
  }
  CL_GetScreenDimensions(&v72, &v73, &v74);
  v21 = material;
  v22 = color;
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
    vxorps  xmm12, xmm12, xmm12
    vcvtsi2ss xmm12, xmm12, [rsp+0D8h+arg_0]
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, [rsp+0D8h+arg_8]
  }
  if ( !(v19 | v20) )
  {
    __asm
    {
      vmovss  [rsp+0D8h+var_A0], xmm11
      vmovss  [rsp+0D8h+var_A8], xmm6
      vmovss  [rsp+0D8h+var_B0], xmm6
      vmovaps xmm3, xmm9; h
      vmovaps xmm2, xmm7; w
      vxorps  xmm1, xmm1, xmm1; y
      vxorps  xmm0, xmm0, xmm0; x
      vmovss  [rsp+0D8h+var_B8], xmm6
    }
    CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&innerRight, *(float *)&_XMM2, *(float *)&_XMM3, v53, v57, v61, v65, color, material);
  }
  __asm { vcomiss xmm8, xmm12 }
  if ( v19 )
  {
    __asm
    {
      vmovss  [rsp+0D8h+var_A0], xmm11
      vmovss  [rsp+0D8h+var_A8], xmm6
      vmovss  [rsp+0D8h+var_B0], xmm6
      vsubss  xmm2, xmm12, xmm8; w
      vmovaps xmm3, xmm9; h
      vxorps  xmm1, xmm1, xmm1; y
      vmovaps xmm0, xmm8; x
      vmovss  [rsp+0D8h+var_B8], xmm6
    }
    CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&innerRight, *(float *)&_XMM2, *(float *)&_XMM3, v54, v58, v62, v66, v22, v21);
  }
  __asm
  {
    vcomiss xmm13, xmm6
    vsubss  xmm8, xmm8, xmm7
  }
  if ( !(v19 | v20) )
  {
    __asm
    {
      vmovss  [rsp+0D8h+var_A0], xmm6
      vmovss  [rsp+0D8h+var_A8], xmm11
      vmovss  [rsp+0D8h+var_B0], xmm6
      vmovaps xmm3, xmm13; h
      vmovaps xmm2, xmm8; w
      vxorps  xmm1, xmm1, xmm1; y
      vmovaps xmm0, xmm7; x
      vmovss  [rsp+0D8h+var_B8], xmm6
    }
    CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v55, v59, v63, v67, v22, v21);
  }
  __asm { vcomiss xmm10, xmm9 }
  if ( v19 )
  {
    __asm
    {
      vmovss  [rsp+0D8h+var_A0], xmm6
      vmovss  [rsp+0D8h+var_A8], xmm11
      vmovss  [rsp+0D8h+var_B0], xmm6
      vsubss  xmm3, xmm9, xmm10; h
      vmovaps xmm2, xmm8; w
      vmovaps xmm1, xmm10; y
      vmovaps xmm0, xmm7; x
      vmovss  [rsp+0D8h+var_B8], xmm6
    }
    CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v56, v60, v64, v68, v22, v21);
  }
  _R11 = &v70;
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
  }
}

/*
==============
CG_DrawReticleCenter
==============
*/
void CG_DrawReticleCenter(LocalClientNum_t localClientNum, const Weapon *weapon, bool isAlternate, const vec4_t *color, float centerX, float centerY)
{
  const WeaponDef *v13; 
  const dvar_t *v14; 
  cg_t *LocalClientGlobals; 
  const cg_t *v22; 
  Material *material; 
  const ScreenPlacement *ActivePlacement; 
  float shouldPulse; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  bool result; 
  bool v43; 
  bool spin45; 
  int reticleCenterSize; 
  Material *reticleCenter; 
  int reticleSideSize; 
  Material *reticleSide; 

  v13 = BG_WeaponDef(weapon, isAlternate);
  BG_GetCenterReticle(weapon, isAlternate, &reticleCenter, &reticleCenterSize, &v43);
  if ( reticleCenter )
  {
    v14 = DCONST_DVARBOOL_lui_footage_capture_enabled;
    if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( !v14->current.enabled )
    {
      CG_GetOmnvar_BooleanByName(localClientNum, "ui_realism_hud", &result, NULL, NULL);
      if ( !result )
      {
        __asm
        {
          vmovaps [rsp+0E8h+var_48], xmm6
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, [rsp+0E8h+reticleCenterSize]
          vmovaps [rsp+0E8h+var_58], xmm7
        }
        if ( BG_IsOffhandWeaponType(weapon, isAlternate) )
        {
          if ( v13->bCookOffHold )
          {
            BG_GetSideReticle(weapon, isAlternate, &reticleSide, &reticleSideSize, &spin45);
            if ( !reticleSide && v43 )
            {
              LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
              if ( LocalClientGlobals->predictedPlayerState.grenadeTimeLeft != BG_GetCookingGrenadeFuseMin(weapon, isAlternate, &LocalClientGlobals->predictedPlayerState) )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, ecx
                  vmulss  xmm1, xmm0, cs:__real@3c23d70a
                  vaddss  xmm6, xmm1, xmm6
                }
              }
            }
          }
        }
        __asm { vmovaps xmm7, xmm6 }
        if ( CL_IsRenderingSplitScreen() )
        {
          __asm
          {
            vmulss  xmm6, xmm6, cs:__real@40000000
            vmovaps xmm7, xmm6
          }
        }
        v22 = CG_GetLocalClientGlobals(localClientNum);
        CG_Draw_UpdateScramblerState(v22, localClientNum);
        if ( !CG_Draw_IsScramblingActive(localClientNum) )
        {
          material = reticleCenter;
          ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
          __asm
          {
            vmulss  xmm1, xmm6, cs:__real@3f000000
            vmovss  xmm0, [rsp+0E8h+centerY]
            vmulss  xmm3, xmm7, cs:__real@3f000000
            vsubss  xmm2, xmm0, xmm1; y
            vmovss  xmm0, cs:__real@3f800000
            vmovss  xmm1, [rsp+0E8h+centerX]
            vmovss  [rsp+0E8h+var_98], xmm0
            vmovss  [rsp+0E8h+var_A0], xmm0
            vxorps  xmm4, xmm4, xmm4
            vmovss  [rsp+0E8h+var_A8], xmm4
            vmovss  [rsp+0E8h+var_B0], xmm4
            vsubss  xmm1, xmm1, xmm3; x
            vmovaps xmm3, xmm6; w
            vmovss  dword ptr [rsp+0E8h+shouldPulse], xmm6
          }
          CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, shouldPulse, 2, 2, v38, v39, v40, v41, color, material);
        }
        __asm
        {
          vmovaps xmm6, [rsp+0E8h+var_48]
          vmovaps xmm7, [rsp+0E8h+var_58]
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
  char v18; 
  const ScreenPlacement *ActivePlacement; 
  float adsAlpha; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float crossHairAlpha; 
  vec4_t outReticleColor; 

  material = BG_GetOnePieceReticle(weapon, isAlternate);
  if ( material )
  {
    _R15 = CG_GetLocalClientGlobals(localClientNum);
    CG_DrawWeapReticle(localClientNum, weapon, isAlternate, &crossHairAlpha, &v37);
    __asm
    {
      vmovss  xmm3, dword ptr [r15+74Ch]; aimSpreadScale
      vmovss  xmm2, [rsp+0D8h+var_68]; adsAlpha
      vmovss  xmm1, [rsp+0D8h+crossHairAlpha]; alpha
    }
    CG_CalcReticleColor(baseColor, *(double *)&_XMM1, *(double *)&_XMM2, *(float *)&_XMM3, &outReticleColor);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+outReticleColor+0Ch]
      vcomiss xmm0, cs:__real@3c23d70a
    }
    if ( !v18 )
    {
      __asm
      {
        vmovaps [rsp+0D8h+var_38], xmm6
        vmovaps [rsp+0D8h+var_48], xmm7
      }
      *(float *)&_XMM0 = CG_CalcReticleSpreadRadius(_R15, weapon, isAlternate);
      __asm
      {
        vmulss  xmm7, xmm0, cs:__real@40000000
        vmovaps xmm6, xmm0
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vmovss  xmm1, [rsp+0D8h+centerY]
        vmovss  xmm3, [rsp+0D8h+centerX]
        vmovss  [rsp+0D8h+var_88], xmm0
        vmovss  [rsp+0D8h+var_90], xmm0
        vxorps  xmm4, xmm4, xmm4
        vmovss  [rsp+0D8h+var_98], xmm4
        vmovss  [rsp+0D8h+var_A0], xmm4
        vsubss  xmm2, xmm1, xmm6; y
        vsubss  xmm1, xmm3, xmm6; x
        vmovaps xmm3, xmm7; w
        vmovss  dword ptr [rsp+0D8h+adsAlpha], xmm7
      }
      CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, adsAlpha, 2, 2, v33, v34, v35, v36, &outReticleColor, material);
      __asm
      {
        vmovaps xmm7, [rsp+0D8h+var_48]
        vmovaps xmm6, [rsp+0D8h+var_38]
      }
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
  const ScreenPlacement *ActivePlacement; 
  cg_t *LocalClientGlobals; 
  char v46; 
  const WeaponDef *v68; 
  char v90; 
  bool v91; 
  char v130; 
  bool v131; 
  char v153; 
  char v154; 
  float spin45; 
  float spin45a; 
  float spin45b; 
  float spin45c; 
  float spin45d; 
  float spin45e; 
  float spin45f; 
  float spin45g; 
  float spin45i; 
  float spin45j; 
  int horzAlign; 
  float color; 
  float colora; 
  float colorb; 
  float colorc; 
  float colore; 
  float colorf; 
  float adsAlpha; 
  float crossHairAlpha; 
  bool v236; 
  Material *reticleSide; 
  int reticleSideSize; 
  vec2_t drawSize; 
  vec4_t outReticleColor; 
  vec2_t spread; 
  vec4_t stuv; 

  __asm
  {
    vmovaps [rsp+1D0h+var_40], xmm7
    vmovss  xmm7, cs:__real@3f800000
  }
  BG_GetSideReticle(weapon, isAlternate, &reticleSide, &reticleSideSize, &v236);
  if ( reticleSide )
  {
    _RBX = CG_GetLocalClientGlobals(localClientNum);
    CG_DrawWeapReticle(localClientNum, weapon, isAlternate, &crossHairAlpha, &adsAlpha);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+74Ch]; aimSpreadScale
      vmovss  xmm2, [rsp+1D0h+adsAlpha]; adsAlpha
      vmovss  xmm1, [rsp+1D0h+crossHairAlpha]; alpha
    }
    CG_CalcReticleColor(baseColor, *(double *)&_XMM1, *(double *)&_XMM2, *(float *)&_XMM3, &outReticleColor);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0D0h+outReticleColor+0Ch]
      vcomiss xmm0, cs:__real@3c23d70a
    }
    if ( !v46 )
    {
      __asm
      {
        vmovaps [rsp+1D0h+var_30], xmm6
        vmovaps [rsp+1D0h+var_50], xmm8
        vmovaps [rsp+1D0h+var_60], xmm9
        vmovaps [rsp+1D0h+var_70], xmm10
        vmovaps [rsp+1D0h+var_80], xmm11
        vmovaps [rsp+1D0h+var_90], xmm12
        vmovaps [rsp+1D0h+var_A0], xmm13
        vmovaps [rsp+1D0h+var_B0], xmm14
        vmovaps [rsp+1D0h+var_C0], xmm15
      }
      LOBYTE(_EAX) = CL_IsRenderingSplitScreen();
      _ECX = 0;
      _EAX = (unsigned __int8)_EAX;
      __asm
      {
        vmovd   xmm1, ecx
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@40000000
        vblendvps xmm1, xmm1, xmm7, xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rbp+0D0h+reticleSideSize]
        vmulss  xmm0, xmm0, xmm1
        vmovss  dword ptr [rbp+0D0h+drawSize], xmm0
        vmovss  dword ptr [rbp+0D0h+drawSize+4], xmm0
        vmovss  [rbp+0D0h+var_108], xmm1
        vmovss  [rsp+1D0h+adsAlpha], xmm1
      }
      *(float *)&_XMM0 = CG_CalcReticleSpreadRadius(_RBX, weapon, isAlternate);
      __asm { vmovaps xmm6, xmm0 }
      BG_WeaponDef(weapon, isAlternate);
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+0D0h+drawSize]
        vmulss  xmm2, xmm1, dword ptr [rax+524h]
        vmovss  xmm1, dword ptr [rbp+0D0h+drawSize+4]
        vsubss  xmm3, xmm6, xmm2
        vmovss  dword ptr [rbp+0D0h+spread], xmm3
        vmulss  xmm2, xmm1, dword ptr [rax+524h]
        vsubss  xmm0, xmm6, xmm2
        vmovss  dword ptr [rbp+0D0h+spread+4], xmm0
      }
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      __asm { vxorps  xmm6, xmm6, xmm6 }
      if ( BG_IsOffhandWeaponType(weapon, isAlternate) && BG_WeaponDef(weapon, isAlternate)->bCookOffHold )
      {
        if ( !LocalClientGlobals->predictedPlayerState.grenadeTimeLeft )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm12, xmm12, xmm12
            vmovss  [rbp+0D0h+var_128], xmm0
            vmovss  [rbp+0D0h+var_148], xmm0
            vmovss  [rbp+0D0h+var_124], xmm1
            vmovss  [rbp+0D0h+var_144], xmm0
            vmovss  [rbp+0D0h+var_120], xmm0
            vmovss  [rbp+0D0h+var_140], xmm0
            vmovss  [rbp+0D0h+var_11C], xmm1
            vmovss  [rbp+0D0h+var_13C], xmm0
            vmovss  [rbp+0D0h+var_138], xmm0
            vmovss  [rsp+1D0h+var_174], xmm1
            vmovss  [rbp+0D0h+var_134], xmm0
            vmovss  [rbp+0D0h+var_130], xmm0
            vmovss  [rsp+1D0h+crossHairAlpha], xmm1
            vmovss  [rbp+0D0h+var_12C], xmm0
            vmovss  [rbp+0D0h+var_118], xmm0
            vmovss  [rsp+1D0h+var_164], xmm0
            vmovss  [rbp+0D0h+var_114], xmm0
            vmovss  [rsp+1D0h+var_15C], xmm12
            vmovss  [rbp+0D0h+var_110], xmm0
            vmovss  [rsp+1D0h+var_160], xmm0
            vmovss  [rbp+0D0h+var_10C], xmm0
            vmovss  [rbp+0D0h+var_150], xmm0
            vmovss  [rsp+1D0h+var_158], xmm0
            vmovss  [rbp+0D0h+var_14C], xmm0
            vmovss  [rsp+1D0h+adsAlpha], xmm0
            vmovss  [rsp+1D0h+var_168], xmm0
            vmovss  [rsp+1D0h+var_154], xmm0
            vxorps  xmm10, xmm10, xmm10
            vxorps  xmm9, xmm9, xmm9
            vxorps  xmm8, xmm8, xmm8
            vxorps  xmm13, xmm13, xmm13
            vxorps  xmm15, xmm15, xmm15
            vxorps  xmm14, xmm14, xmm14
            vxorps  xmm7, xmm7, xmm7
          }
          goto LABEL_18;
        }
        *(double *)&_XMM0 = BG_GetCookingGrenadeCookPercentage(weapon, isAlternate, &LocalClientGlobals->predictedPlayerState);
        __asm
        {
          vmovss  xmm3, cs:__real@3e800000
          vcomiss xmm0, xmm3
          vmovss  xmm2, cs:__real@40800000
          vmovss  xmm4, cs:__real@be800000
        }
        if ( v46 )
        {
          __asm
          {
            vmulss  xmm10, xmm0, xmm2
            vxorps  xmm0, xmm0, xmm0
            vmulss  xmm9, xmm0, xmm2
            vxorps  xmm1, xmm1, xmm1
          }
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm0, xmm4
            vcomiss xmm0, xmm3
            vmovaps xmm10, xmm7
            vaddss  xmm1, xmm0, xmm4
            vmovaps xmm9, xmm7
          }
        }
        __asm { vcomiss xmm1, xmm3 }
        if ( v46 )
        {
          __asm
          {
            vmulss  xmm8, xmm1, xmm2
            vxorps  xmm0, xmm0, xmm0
          }
        }
        else
        {
          __asm
          {
            vaddss  xmm0, xmm1, xmm4
            vmovaps xmm8, xmm7
          }
        }
        __asm { vcomiss xmm0, xmm3 }
        if ( v46 )
          __asm { vmulss  xmm7, xmm0, xmm2 }
        __asm
        {
          vmovss  [rbp+0D0h+var_138], xmm8
          vmovss  [rsp+1D0h+var_174], xmm8
          vmovss  [rbp+0D0h+var_134], xmm8
          vmovss  [rbp+0D0h+var_130], xmm8
          vmovss  [rsp+1D0h+crossHairAlpha], xmm8
          vmovss  [rbp+0D0h+var_12C], xmm8
          vmovaps xmm13, xmm8
          vmovaps xmm12, xmm8
        }
      }
      else
      {
        __asm
        {
          vmovss  [rbp+0D0h+var_138], xmm7
          vmovss  [rsp+1D0h+var_174], xmm7
          vmovss  [rbp+0D0h+var_134], xmm7
          vmovss  [rbp+0D0h+var_130], xmm7
          vmovss  [rsp+1D0h+crossHairAlpha], xmm7
          vmovss  [rbp+0D0h+var_12C], xmm7
          vmovaps xmm10, xmm7
          vmovaps xmm9, xmm7
          vmovaps xmm8, xmm7
          vmovaps xmm13, xmm7
          vmovaps xmm12, xmm7
        }
      }
      __asm
      {
        vmovss  [rbp+0D0h+var_128], xmm7
        vmovss  [rsp+1D0h+var_154], xmm7
        vmovss  [rsp+1D0h+var_168], xmm7
        vmovss  [rsp+1D0h+adsAlpha], xmm7
        vmovss  [rbp+0D0h+var_14C], xmm7
        vmovss  [rsp+1D0h+var_158], xmm7
        vmovss  [rbp+0D0h+var_150], xmm7
        vmovss  [rbp+0D0h+var_10C], xmm7
        vmovss  [rsp+1D0h+var_160], xmm7
        vmovss  [rbp+0D0h+var_110], xmm7
        vmovss  [rsp+1D0h+var_15C], xmm7
        vmovss  [rbp+0D0h+var_114], xmm7
        vmovss  [rsp+1D0h+var_164], xmm7
        vmovss  [rbp+0D0h+var_118], xmm7
        vmovss  [rbp+0D0h+var_13C], xmm7
        vmovss  [rbp+0D0h+var_11C], xmm7
        vmovss  [rbp+0D0h+var_140], xmm7
        vmovss  [rbp+0D0h+var_120], xmm7
        vmovss  [rbp+0D0h+var_144], xmm7
        vmovss  [rbp+0D0h+var_124], xmm7
        vmovss  [rbp+0D0h+var_148], xmm7
        vmovaps xmm14, xmm7
        vmovaps xmm15, xmm7
      }
LABEL_18:
      __asm { vmovss  xmm11, dword ptr [rbp+0D0h+outReticleColor+0Ch] }
      v68 = BG_WeaponDef(weapon, isAlternate);
      if ( BG_IsOffhandWeaponType(weapon, isAlternate) )
      {
        v91 = !v68->bCookOffHold;
        __asm
        {
          vmovss  xmm0, [rbp+0D0h+var_114]
          vmovss  xmm15, [rbp+0D0h+var_118]
          vmovss  xmm14, [rbp+0D0h+var_150]
          vmovss  xmm2, [rsp+1D0h+var_168]
          vmovss  [rsp+1D0h+var_164], xmm0
          vmovss  xmm0, [rbp+0D0h+var_110]
          vmovss  [rsp+1D0h+var_15C], xmm0
          vmovss  xmm0, [rbp+0D0h+var_10C]
          vmovss  [rsp+1D0h+var_160], xmm0
          vmovss  xmm0, [rbp+0D0h+var_14C]
          vmovss  [rsp+1D0h+var_158], xmm0
          vmovss  [rsp+1D0h+var_154], xmm7
        }
        if ( !v91 )
        {
          __asm
          {
            vcomiss xmm10, xmm6
            vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
            vmovss  xmm4, [rbp+0D0h+centerX]
            vmovss  xmm14, [rbp+0D0h+centerY]
            vmovss  xmm11, dword ptr [rbp+0D0h+drawSize+4]
            vmovss  xmm7, cs:__real@40400000
            vsubss  xmm15, xmm4, xmm5
            vsubss  xmm0, xmm14, xmm11
            vmovss  [rsp+1D0h+var_168], xmm15
            vmovss  [rsp+1D0h+adsAlpha], xmm0
            vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
            vsubss  xmm1, xmm10, xmm7
            vmulss  xmm2, xmm1, xmm10
            vmovups xmmword ptr [rbp+0D0h+var_E0], xmm0
            vaddss  xmm0, xmm2, xmm7
            vmovss  xmm2, [rsp+1D0h+adsAlpha]; y
            vmulss  xmm4, xmm0, xmm10
            vmovaps xmm3, xmm5; w
            vmovaps xmm1, xmm15; x
            vmovss  dword ptr [rsp+1D0h+spin45], xmm11
            vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm4
          }
          UI_DrawMaterialWithUVs(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45, 2, 2, &outReticleColor, reticleSide, &stuv);
          __asm
          {
            vmovss  xmm0, [rbp+0D0h+var_148]
            vmovss  xmm1, [rbp+0D0h+var_144]
            vmovss  xmm2, [rbp+0D0h+var_140]
            vmovss  xmm3, [rbp+0D0h+var_13C]
            vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
            vmovss  xmm4, [rbp+0D0h+centerX]
            vmovss  xmm13, [rbp+0D0h+var_138]
            vmovss  xmm10, [rbp+0D0h+var_134]
            vmovss  xmm12, [rbp+0D0h+var_130]
            vmovss  xmm15, [rbp+0D0h+var_12C]
            vmovss  xmm11, dword ptr [rbp+0D0h+drawSize+4]
            vcomiss xmm0, xmm6
          }
          if ( !(v90 | v91) )
          {
            __asm
            {
              vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
              vsubss  xmm1, xmm1, xmm7
              vmulss  xmm2, xmm1, xmm2
              vmovups xmmword ptr [rbp+0D0h+var_E0], xmm0
              vaddss  xmm0, xmm2, xmm7
              vmovss  xmm2, [rsp+1D0h+adsAlpha]; y
              vmulss  xmm3, xmm0, xmm3
              vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm3
              vmovaps xmm3, xmm5; w
              vmovaps xmm1, xmm4; x
              vmovss  dword ptr [rsp+1D0h+spin45], xmm11
            }
            UI_DrawMaterialWithUVs(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45a, 2, 2, &outReticleColor, reticleSide, &stuv);
            __asm
            {
              vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
              vmovss  xmm11, dword ptr [rbp+0D0h+drawSize+4]
              vmovaps xmm13, xmm10
              vmovaps xmm12, xmm15
            }
          }
          __asm { vcomiss xmm8, xmm6 }
          if ( !(v90 | v91) )
          {
            __asm
            {
              vmovups xmm0, cs:__xmm@00000000000000003f8000003f800000
              vsubss  xmm1, xmm8, xmm7
              vmulss  xmm2, xmm1, xmm13
              vmovss  xmm1, [rbp+0D0h+centerX]; x
              vmovups xmmword ptr [rbp+0D0h+var_E0], xmm0
              vaddss  xmm0, xmm2, xmm7
              vmulss  xmm3, xmm0, xmm12
              vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm3
              vmovaps xmm3, xmm5; w
              vmovaps xmm2, xmm14; y
              vmovss  dword ptr [rsp+1D0h+spin45], xmm11
            }
            UI_DrawMaterialWithUVs(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45b, 2, 2, &outReticleColor, reticleSide, &stuv);
            __asm
            {
              vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
              vmovss  xmm11, dword ptr [rbp+0D0h+drawSize+4]
            }
          }
          __asm { vcomiss xmm9, xmm6 }
          if ( !(v90 | v91) )
          {
            __asm
            {
              vmovups xmm0, cs:__xmm@000000003f8000003f80000000000000
              vsubss  xmm1, xmm9, xmm7
              vmulss  xmm3, xmm1, xmm9
              vmovss  xmm1, [rsp+1D0h+var_168]; x
              vmovups xmmword ptr [rbp+0D0h+var_E0], xmm0
              vaddss  xmm0, xmm3, xmm7
              vmulss  xmm4, xmm0, xmm9
              vmovaps xmm3, xmm5; w
              vmovaps xmm2, xmm14; y
              vmovss  dword ptr [rsp+1D0h+spin45], xmm11
              vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm4
            }
            UI_DrawMaterialWithUVs(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45c, 2, 2, &outReticleColor, reticleSide, &stuv);
          }
LABEL_40:
          __asm
          {
            vmovaps xmm14, [rsp+1D0h+var_B0]
            vmovaps xmm13, [rsp+1D0h+var_A0]
            vmovaps xmm12, [rsp+1D0h+var_90]
            vmovaps xmm11, [rsp+1D0h+var_80]
            vmovaps xmm10, [rsp+1D0h+var_70]
            vmovaps xmm9, [rsp+1D0h+var_60]
            vmovaps xmm8, [rsp+1D0h+var_50]
            vmovaps xmm6, [rsp+1D0h+var_30]
            vmovaps xmm15, [rsp+1D0h+var_C0]
          }
          goto LABEL_41;
        }
      }
      else
      {
        __asm { vmovss  xmm2, [rsp+1D0h+adsAlpha] }
      }
      v130 = 0;
      v131 = !v236;
      __asm
      {
        vmovss  xmm12, [rbp+0D0h+centerX]
        vmovss  xmm13, [rbp+0D0h+centerY]
      }
      if ( v236 )
      {
        __asm
        {
          vcomiss xmm10, xmm6
          vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
          vmovss  xmm3, cs:__real@3f000000
          vmovss  xmm7, dword ptr [rbp+0D0h+drawSize+4]
          vmulss  xmm0, xmm3, dword ptr [rbp+0D0h+spread]
          vsubss  xmm1, xmm12, xmm5
          vsubss  xmm0, xmm1, xmm0
          vmovss  [rsp+1D0h+adsAlpha], xmm0
          vmulss  xmm0, xmm3, dword ptr [rbp+0D0h+spread+4]
          vsubss  xmm1, xmm13, xmm7
          vsubss  xmm14, xmm1, xmm0
          vaddss  xmm1, xmm5, [rsp+1D0h+adsAlpha]
          vaddss  xmm1, xmm1, dword ptr [rbp+0D0h+spread]; x
          vaddss  xmm0, xmm7, xmm14
          vaddss  xmm0, xmm0, dword ptr [rbp+0D0h+spread+4]
          vmovss  [rsp+1D0h+var_174], xmm0
          vmovss  [rsp+1D0h+crossHairAlpha], xmm1
          vmulss  xmm0, xmm10, xmm11
          vmovss  xmm10, [rsp+1D0h+adsAlpha]
          vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm0
          vmovss  xmm0, cs:__real@439d8000
          vmovss  dword ptr [rsp+1D0h+color], xmm0
          vmovaps xmm3, xmm5; width
          vmovaps xmm2, xmm14; y
          vmovaps xmm1, xmm10; x
          vmovss  dword ptr [rsp+1D0h+spin45], xmm7
        }
        CG_DrawRotatedPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45d, 2, 2, color, &outReticleColor, reticleSide);
        __asm
        {
          vmovss  xmm0, [rsp+1D0h+var_160]
          vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
          vmovss  xmm1, [rsp+1D0h+crossHairAlpha]
          vmovss  xmm15, [rsp+1D0h+var_164]
          vmovss  xmm7, dword ptr [rbp+0D0h+drawSize+4]
          vcomiss xmm15, xmm6
        }
        if ( !(v153 | v154) )
        {
          __asm
          {
            vmulss  xmm0, xmm11, xmm0
            vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm0
            vmovss  xmm0, cs:__real@42340000
            vmovss  dword ptr [rsp+1D0h+color], xmm0
            vmovaps xmm3, xmm5; width
            vmovaps xmm2, xmm14; y
            vmovss  dword ptr [rsp+1D0h+spin45], xmm7
          }
          CG_DrawRotatedPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45e, 2, 2, colora, &outReticleColor, reticleSide);
          __asm
          {
            vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
            vmovss  xmm7, dword ptr [rbp+0D0h+drawSize+4]
          }
        }
        __asm { vcomiss xmm8, xmm6 }
        if ( v153 | v154 )
        {
          __asm { vmovss  xmm8, [rsp+1D0h+var_174] }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, [rsp+1D0h+crossHairAlpha]; x
            vmulss  xmm0, xmm8, xmm11
            vmovss  xmm8, [rsp+1D0h+var_174]
            vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm0
            vmovss  xmm0, cs:__real@43070000
            vmovss  dword ptr [rsp+1D0h+color], xmm0
            vmovaps xmm3, xmm5; width
            vmovaps xmm2, xmm8; y
            vmovss  dword ptr [rsp+1D0h+spin45], xmm7
          }
          CG_DrawRotatedPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45f, 2, 2, colorb, &outReticleColor, reticleSide);
          __asm
          {
            vmovss  xmm5, dword ptr [rbp+0D0h+drawSize]
            vmovss  xmm7, dword ptr [rbp+0D0h+drawSize+4]
          }
        }
        __asm { vcomiss xmm9, xmm6 }
        if ( !(v153 | v154) )
        {
          __asm
          {
            vmulss  xmm0, xmm9, xmm11
            vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm0
            vmovss  xmm0, cs:__real@43610000
            vmovss  dword ptr [rsp+1D0h+color], xmm0
            vmovss  dword ptr [rsp+1D0h+spin45], xmm7
            vmovaps xmm3, xmm5
            vmovaps xmm2, xmm8
            vmovaps xmm1, xmm10
          }
          CG_DrawRotatedPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45g, 2, 2, colorc, &outReticleColor, reticleSide);
        }
      }
      else
      {
        __asm
        {
          vcomiss xmm10, xmm6
          vmovss  xmm3, dword ptr [rbp+0D0h+drawSize]; width
          vmovss  xmm7, cs:__real@3f000000
          vmovss  xmm4, dword ptr [rbp+0D0h+drawSize+4]
          vmulss  xmm0, xmm3, xmm7
          vsubss  xmm1, xmm12, xmm0; x
          vsubss  xmm0, xmm13, xmm4
          vsubss  xmm5, xmm0, dword ptr [rbp+0D0h+spread+4]
          vcomiss xmm14, xmm6
          vaddss  xmm5, xmm12, dword ptr [rbp+0D0h+spread]
          vmulss  xmm1, xmm4, xmm7
          vsubss  xmm1, xmm13, xmm1
          vcomiss xmm8, xmm6
          vaddss  xmm2, xmm13, dword ptr [rbp+0D0h+spread+4]; y
          vmulss  xmm0, xmm3, xmm7
          vsubss  xmm5, xmm12, xmm0
          vcomiss xmm9, xmm6
          vsubss  xmm0, xmm12, xmm3
          vsubss  xmm5, xmm0, dword ptr [rbp+0D0h+spread]
          vmulss  xmm1, xmm4, xmm7
          vsubss  xmm2, xmm13, xmm1; y
        }
        if ( !(v130 | v131) )
        {
          __asm
          {
            vmulss  xmm0, xmm9, xmm11
            vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm0
            vmovss  xmm0, cs:__real@43870000
            vmovss  dword ptr [rsp+1D0h+color], xmm0
            vmovss  dword ptr [rsp+1D0h+spin45], xmm4
            vmovaps xmm1, xmm5; x
          }
          CG_DrawRotatedPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, spin45i, 2, 2, colore, &outReticleColor, reticleSide);
        }
      }
      __asm
      {
        vmovss  xmm0, [rbp+0D0h+var_108]
        vmovss  dword ptr [rsp+1D0h+color], xmm0
        vmovss  [rsp+1D0h+horzAlign], xmm13
        vmovss  dword ptr [rsp+1D0h+spin45], xmm12
        vmovss  dword ptr [rbp+0D0h+outReticleColor+0Ch], xmm11
      }
      CG_ContextMount_TryDrawMountIndicator(localClientNum, ActivePlacement, &drawSize, &spread, spin45j, *(const float *)&horzAlign, &outReticleColor, colorf, 2, 2);
      goto LABEL_40;
    }
  }
LABEL_41:
  __asm { vmovaps xmm7, [rsp+1D0h+var_40] }
}

/*
==============
CG_DrawReticles_DrawCrosshair
==============
*/
void CG_DrawReticles_DrawCrosshair(LocalClientNum_t localClientNum)
{
  __int64 v3; 
  CgDrawSystem *DrawSystem; 
  bool IsEMPJammed; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  bool v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  int v13; 
  bool v15; 
  CgHandler *Handler; 
  const Weapon *v17; 
  const Weapon *v18; 
  const ADSOverlay *Overlay; 
  const dvar_t *v20; 
  CgHandler *v21; 
  cg_t *LocalClientGlobals; 
  cg_t *v23; 
  __int64 clientNum; 
  const characterInfo_t *CharacterInfo; 
  int entityNum; 
  centity_t *Entity; 
  const entityState_t *EntityState; 
  int v29; 
  centity_t *v30; 
  cg_t *v31; 
  const Weapon *ReticleWeapon; 
  bool v33; 
  char v38; 
  char v42; 
  ReticleType ReticleType; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 centerY; 
  float centerYa; 
  float centerYb; 
  float centerYc; 
  __int64 v56; 
  bool outIsAlternate; 
  bool IsUAVJammed; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 
  vec4_t outColor; 

  v3 = localClientNum;
  _R15 = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
    __debugbreak();
  DrawSystem = CgDrawSystem::GetDrawSystem((const LocalClientNum_t)v3);
  IsEMPJammed = CG_View_IsEMPJammed((const LocalClientNum_t)v3);
  IsUAVJammed = CG_View_IsUAVJammed((const LocalClientNum_t)v3);
  if ( !CG_View_IsKillCamEntityView((const LocalClientNum_t)v3) && (!_R15->renderingThirdPerson || _R15->predictedPlayerState.vehicleState.entity != 2047) )
  {
    __asm { vmovaps [rsp+0B8h+var_48], xmm7 }
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
    IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &_R15->predictedPlayerState);
    v9 = DrawSystem->ShouldDrawHud(DrawSystem) != 0;
    v10 = DrawSystem->ShouldDrawCrosshair(DrawSystem);
    v11 = v9;
    v12 = 0;
    if ( !v10 )
      v11 = 0;
    if ( (clientUIActives[v3].keyCatchers & 0x40) == 0 )
      v12 = v11;
    if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_START) && IsEMPJammed )
      v12 = 0;
    v13 = _R15->IsClientGamePaused(_R15);
    __asm { vmovss  xmm7, dword ptr [r15+738h] }
    v15 = v12;
    if ( v13 )
      v15 = 0;
    if ( BG_IsTurretActive(&_R15->predictedPlayerState) )
    {
      Handler = CgHandler::getHandler((LocalClientNum_t)v3);
      v17 = Handler->PlayerTurret(Handler, &_R15->predictedPlayerState);
      v18 = v17;
      if ( v17->weaponIdx && ((Overlay = BG_GetOverlay(v17, 0), Overlay->shaderMat) || IsEMPJammed && Overlay->shaderEMPMat) )
      {
        CG_DrawAdsOverlay((LocalClientNum_t)v3, v18, 0, &colorWhite, &vec2_origin);
      }
      else if ( !CG_GetFlashbangedRemainingTime((LocalClientNum_t)v3) && v15 && _R15->predictedPlayerState.viewlocked_entNum != 2047 )
      {
        CG_DrawTurretCrossHair((LocalClientNum_t)v3);
      }
    }
    else
    {
      v20 = DVARBOOL_cg_crosshairCheckDrivingPhysVeh;
      if ( !DVARBOOL_cg_crosshairCheckDrivingPhysVeh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairCheckDrivingPhysVeh") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled )
      {
        v21 = CgHandler::getHandler((LocalClientNum_t)v3);
        if ( v21 )
        {
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
          v23 = LocalClientGlobals;
          if ( LocalClientGlobals )
          {
            clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
            if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
            {
              if ( (unsigned int)clientNum >= v23[1].predictedPlayerState.rxvOmnvars[64].timeModified )
              {
                LODWORD(v56) = v23[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                LODWORD(centerY) = clientNum;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", centerY, v56) )
                  __debugbreak();
              }
              CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v23[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
            }
            else
            {
              CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v23, clientNum);
            }
            if ( CharacterInfo )
            {
              entityNum = CharacterInfo->entityNum;
              if ( v21->IsClient(v21) )
              {
                Entity = CG_GetEntity((const LocalClientNum_t)v21->m_localClientNum, entityNum);
                EntityState = Entity ? &Entity->nextState : 0i64;
              }
              else
              {
                EntityState = GHandler::GetEntityState((GHandler *)v21, entityNum);
              }
              if ( EntityState )
              {
                outVehicleSeat = VEHICLE_SEAT_UNUSED;
                if ( BG_VehicleOccupancy_GetLinkedVehicle(v21, EntityState, CharacterInfo, &outVehicleType, &outVehicleSeat) != 2047 && outVehicleSeat == VEHICLE_SEAT_DRIVER )
                  goto LABEL_81;
              }
            }
          }
        }
      }
      v29 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->predictedPlayerState.vehicleState.entity;
      if ( v29 != 2047 )
      {
        v30 = CG_GetEntity((const LocalClientNum_t)v3, v29);
        if ( CG_Vehicle_IsVehicleEntity(v30) )
          goto LABEL_57;
      }
      if ( !BG_IsVehicleActive(&_R15->predictedPlayerState) )
      {
        outIsAlternate = 0;
        ReticleWeapon = CG_GetReticleWeapon((LocalClientNum_t)v3, &outIsAlternate);
        if ( ReticleWeapon->weaponIdx && !BG_Gesture_ShouldHideReticle(&_R15->predictedPlayerState) && !IsUAVJammed )
        {
          v33 = outIsAlternate;
          __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
          CG_DrawWeapReticle((LocalClientNum_t)v3, ReticleWeapon, outIsAlternate, (float *)&outVehicleSeat, (float *)&outVehicleType);
          __asm
          {
            vmovss  xmm0, [rsp+0B8h+outVehicleSeat]
            vmulss  xmm6, xmm0, [rsp+0B8h+outVehicleType]
          }
          if ( !CG_GetFlashbangedRemainingTime((LocalClientNum_t)v3) && v15 && !CG_WeaponInspect_IsUIHidden((LocalClientNum_t)v3) )
          {
            __asm { vmovaps xmm1, xmm6; alpha }
            CG_CalcCrosshairColor((const LocalClientNum_t)v3, *(double *)&_XMM1, &outColor);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0B8h+outColor+0Ch]
              vcomiss xmm0, cs:__real@3c23d70a
            }
            if ( !v38 )
            {
              __asm { vmovss  xmm6, cs:__real@3f800000 }
              if ( BG_ADSShouldShowCrosshair(ReticleWeapon, v33) )
                goto LABEL_84;
              __asm { vucomiss xmm7, xmm6 }
              if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawGun, "cg_drawGun") || IsThirdPersonMode )
              {
LABEL_84:
                if ( AllowedToDrawCrosshair((LocalClientNum_t)v3, &_R15->predictedPlayerState) )
                {
                  __asm
                  {
                    vmovss  xmm2, cs:__real@43f00000; screenHeight
                    vmovss  xmm1, cs:__real@44200000; screenWidth
                  }
                  CG_CalcCrosshairPosition(_R15, *(const float *)&_XMM1, *(const float *)&_XMM2, (float *)&outVehicleSeat, (float *)&outVehicleType);
                  __asm { vucomiss xmm7, xmm6 }
                  if ( !v42 || Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawGun, "cg_drawGun") || IsThirdPersonMode )
                  {
                    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_crosshairDynamic, "cg_crosshairDynamic") )
                    {
                      __asm
                      {
                        vmovss  xmm7, [rsp+0B8h+outVehicleType]
                        vmovss  xmm6, [rsp+0B8h+outVehicleSeat]
                      }
                    }
                    else
                    {
                      __asm { vxorps  xmm6, xmm6, xmm6 }
                      *(double *)&_XMM0 = CG_View_GetCrosshairVerticalOffset((const LocalClientNum_t)v3, &_R15->predictedPlayerState);
                      __asm
                      {
                        vmulss  xmm1, xmm0, cs:__real@c3f00000
                        vmulss  xmm7, xmm1, cs:__real@3f000000
                      }
                    }
                    __asm
                    {
                      vmovss  [rsp+0B8h+centerY], xmm7
                      vmovss  dword ptr [rsp+0B8h+fmt], xmm6
                    }
                    ReticleType = BG_GetReticleType(ReticleWeapon, v33);
                    CG_DrawReticleCenter((LocalClientNum_t)v3, ReticleWeapon, v33, &outColor, fmt, centerYa);
                    if ( ReticleType )
                    {
                      if ( ReticleType == RETICLE_TYPE_ONE_PIECE )
                      {
                        __asm
                        {
                          vmovss  [rsp+0B8h+centerY], xmm7
                          vmovss  dword ptr [rsp+0B8h+fmt], xmm6
                        }
                        CG_DrawReticleOnePiece((LocalClientNum_t)v3, ReticleWeapon, v33, &outColor, fmtb, centerYc);
                      }
                    }
                    else
                    {
                      __asm
                      {
                        vmovss  [rsp+0B8h+centerY], xmm7
                        vmovss  dword ptr [rsp+0B8h+fmt], xmm6
                      }
                      CG_DrawReticleSides((LocalClientNum_t)v3, ReticleWeapon, v33, &outColor, fmta, centerYb);
                    }
                  }
                }
              }
            }
          }
          __asm { vmovaps xmm6, [rsp+0B8h+var_38] }
        }
        goto LABEL_81;
      }
      v31 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      if ( v31 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v31->predictedPlayerState.eFlags, ACTIVE, 0xBu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 655, ASSERT_TYPE_ASSERT, "(BG_IsVehicleActive( &cgameGlob->predictedPlayerState ))", (const char *)&queryFormat, "BG_IsVehicleActive( &cgameGlob->predictedPlayerState )") )
        __debugbreak();
      v30 = CG_GetEntity((const LocalClientNum_t)v3, v31->predictedPlayerState.viewlocked_entNum);
      if ( CG_Vehicle_IsVehicleEntity(v30) )
LABEL_57:
        CG_DrawVehicleCrossHairShared((LocalClientNum_t)v3, v30);
    }
LABEL_81:
    __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
  }
}

/*
==============
CG_DrawReticles_ShouldDrawCrosshair
==============
*/
bool CG_DrawReticles_ShouldDrawCrosshair(const LocalClientNum_t localClientNum)
{
  __int64 v4; 
  CgDrawSystem *DrawSystem; 
  const Weapon *ReticleWeapon; 
  CgWeaponMap *Instance; 
  bool v9; 
  char v14; 
  bool v15; 
  BOOL outIsAlternate; 
  bool result; 

  v4 = localClientNum;
  __asm
  {
    vmovaps [rsp+78h+var_38], xmm6
    vmovaps [rsp+78h+var_48], xmm7
  }
  _R14 = CG_GetLocalClientGlobals(localClientNum);
  DrawSystem = CgDrawSystem::GetDrawSystem((const LocalClientNum_t)v4);
  if ( _R14->renderingThirdPerson && _R14->predictedPlayerState.vehicleState.entity == 2047 )
    goto LABEL_37;
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v4], &_R14->predictedPlayerState) && !CG_GameInterface_ThirdPersonCrosshairForceDraw(&_R14->predictedPlayerState) )
    goto LABEL_37;
  if ( !DrawSystem->ShouldDrawHud(DrawSystem) || !DrawSystem->ShouldDrawCrosshair(DrawSystem) || Com_GameMode_SupportsFeature(WEAPON_STUNNED_START) && CG_View_IsEMPJammed((const LocalClientNum_t)v4) )
    goto LABEL_37;
  if ( CG_View_IsUAVJammed((const LocalClientNum_t)v4) )
    goto LABEL_37;
  if ( _R14->IsClientGamePaused((cg_t *)_R14) )
    goto LABEL_37;
  if ( BG_IsTurretActive(&_R14->predictedPlayerState) )
    goto LABEL_37;
  if ( BG_IsVehicleActive(&_R14->predictedPlayerState) )
    goto LABEL_37;
  if ( CG_GetFlashbangedRemainingTime((LocalClientNum_t)v4) )
    goto LABEL_37;
  CG_GetOmnvar_BooleanByName((LocalClientNum_t)v4, "ui_realism_hud", &result, NULL, NULL);
  if ( result )
    goto LABEL_37;
  LOBYTE(outIsAlternate) = 0;
  ReticleWeapon = CG_GetReticleWeapon((LocalClientNum_t)v4, (bool *)&outIsAlternate);
  if ( !ReticleWeapon->weaponIdx )
    goto LABEL_37;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
  if ( BG_Offhand_IsPlayingGrenadeGesture(Instance, &_R14->predictedPlayerState) && !BG_Offhand_GrenadeGestureInterruptable(Instance, &_R14->predictedPlayerState, _R14->time) )
    goto LABEL_37;
  if ( BG_Ladder_HideCrosshair(&_R14->predictedPlayerState) || BG_Skydive_IsSkydiving(&_R14->predictedPlayerState) || BG_Skydive_IsParachuting(&_R14->predictedPlayerState) || BG_Gesture_ShouldHideReticle(&_R14->predictedPlayerState) )
    goto LABEL_37;
  v9 = outIsAlternate;
  __asm
  {
    vmovss  xmm7, dword ptr [r14+738h]
    vmovss  xmm6, cs:__real@3f800000
  }
  if ( !BG_ADSShouldShowCrosshair(ReticleWeapon, outIsAlternate) )
  {
    __asm { vucomiss xmm7, xmm6 }
LABEL_37:
    v15 = 0;
    goto LABEL_38;
  }
  if ( !AllowedToDrawCrosshair((LocalClientNum_t)v4, &_R14->predictedPlayerState) )
    goto LABEL_37;
  if ( CG_GetWeapReticleZoom(_R14, (float *)&outIsAlternate) )
    __asm { vsubss  xmm6, xmm6, dword ptr [rsp+78h+outIsAlternate] }
  if ( (BG_GetWeaponType(ReticleWeapon, v9) == WEAPTYPE_BULLET || BG_GetWeaponType(ReticleWeapon, v9) == WEAPTYPE_PROJECTILE) && BG_IsAimDownSight(ReticleWeapon, v9) && !BG_ADSShouldShowCrosshair(ReticleWeapon, v9) )
  {
    CG_CalcADSTransitionBlend(_R14, ReticleWeapon, v9);
    __asm { vmulss  xmm6, xmm6, xmm0 }
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_crosshairAlpha, "cg_crosshairAlpha");
  __asm
  {
    vmulss  xmm1, xmm0, xmm6
    vcomiss xmm1, cs:__real@3c23d70a
  }
  if ( v14 )
    goto LABEL_37;
  v15 = 1;
LABEL_38:
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_38]
    vmovaps xmm7, [rsp+78h+var_48]
  }
  return v15;
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
  bool v12; 
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
        if ( CG_GetWeapReticleZoom(v3, (float *)&zoomResult) )
        {
          __asm
          {
            vmovss  xmm0, [rsp+58h+zoomResult]
            vcomiss xmm0, cs:__real@3f7d70a4
            vmovss  xmm2, cs:__real@43f00000; screenHeight
            vmovss  xmm1, cs:__real@44200000; screenWidth
          }
          CG_CalcCrosshairPosition(v3, *(const float *)&_XMM1, *(const float *)&_XMM2, (float *)&zoomResult, (float *)&zoomResult + 1);
          v12 = BG_UsingAlternate(p_predictedPlayerState);
          CG_UpdateScissorForWeaponDef(localClientNum, ReticleWeapon, v12, &zoomResult);
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

void __fastcall CG_DrawTurretCrossHair(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const dvar_t *v7; 
  const dvar_t *v9; 
  playerState_s *p_predictedPlayerState; 
  bool v11; 
  centity_t *Entity; 
  centity_t *v13; 
  CgWeaponMap *Instance; 
  char v19; 
  Material *material; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  int reticleCenterSize; 
  Material *reticleCenter; 
  vec4_t outColor; 
  Weapon r_weapon; 

  v7 = DVARBOOL_cg_drawTurretCrosshair;
  if ( !DVARBOOL_cg_drawTurretCrosshair && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawTurretCrosshair") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    if ( !CL_Pause_IsGamePaused() )
      goto LABEL_10;
    v9 = DVARBOOL_cg_drawpaused;
    if ( !DVARBOOL_cg_drawpaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpaused") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.enabled )
    {
LABEL_10:
      p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
      v11 = BG_UsingAlternate(p_predictedPlayerState);
      if ( p_predictedPlayerState->viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 518, ASSERT_TYPE_ASSERT, "(predictedPlayerState->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "predictedPlayerState->viewlocked_entNum != ENTITYNUM_NONE") )
        __debugbreak();
      Entity = CG_GetEntity(localClientNum, p_predictedPlayerState->viewlocked_entNum);
      v13 = Entity;
      if ( (Entity->flags & 1) != 0 )
      {
        if ( Entity->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 524, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
          __debugbreak();
        Instance = CgWeaponMap::GetInstance(localClientNum);
        _RAX = BG_GetWeaponForEntity(Instance, &v13->nextState);
        __asm
        {
          vmovups ymm2, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+138h+r_weapon.weaponIdx], ymm2
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rsp+138h+r_weapon.attachmentVariationIndices+5], xmm0
          vmovsd  xmm1, qword ptr [rax+30h]
          vmovsd  qword ptr [rsp+138h+r_weapon.attachmentVariationIndices+15h], xmm1
        }
        *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
        __asm { vmovd   eax, xmm2 }
        if ( (_WORD)_RAX )
        {
          BG_GetCenterReticle(&r_weapon, v11, &reticleCenter, &reticleCenterSize, NULL);
          if ( reticleCenter )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_crosshairAlpha, "cg_crosshairAlpha");
            __asm { vcomiss xmm0, cs:__real@3c23d70a }
            if ( !v19 )
            {
              __asm
              {
                vmovaps [rsp+138h+var_28], xmm6
                vmovaps [rsp+138h+var_38], xmm7
                vmovaps [rsp+138h+var_48], xmm8
                vmovaps [rsp+138h+var_58], xmm9
                vmovss  xmm9, cs:__real@3f800000
                vmovaps xmm1, xmm9; alpha
              }
              CG_CalcCrosshairColor(localClientNum, *(double *)&_XMM1, &outColor);
              __asm
              {
                vxorps  xmm8, xmm8, xmm8
                vcvtsi2ss xmm8, xmm8, [rsp+138h+reticleCenterSize]
              }
              if ( CL_IsRenderingSplitScreen() )
                __asm { vmulss  xmm8, xmm8, cs:__real@40000000 }
              __asm { vmulss  xmm7, xmm8, cs:__real@bf000000 }
              *(double *)&_XMM0 = CG_View_GetCrosshairVerticalOffset(localClientNum, p_predictedPlayerState);
              __asm
              {
                vmulss  xmm1, xmm0, cs:__real@43f00000
                vmulss  xmm2, xmm1, cs:__real@3f000000
              }
              material = reticleCenter;
              __asm { vsubss  xmm6, xmm7, xmm2 }
              ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
              __asm
              {
                vmovss  [rsp+138h+var_E8], xmm9
                vmovss  [rsp+138h+var_F0], xmm9
                vxorps  xmm0, xmm0, xmm0
                vmovss  [rsp+138h+var_F8], xmm0
                vmovss  [rsp+138h+var_100], xmm0
                vmovaps xmm3, xmm8; w
                vmovaps xmm2, xmm6; y
                vmovaps xmm1, xmm7; x
                vmovss  dword ptr [rsp+138h+fmt], xmm8
              }
              CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 2, 2, v39, v40, v41, v42, &outColor, material);
              __asm
              {
                vmovaps xmm9, [rsp+138h+var_58]
                vmovaps xmm8, [rsp+138h+var_48]
                vmovaps xmm7, [rsp+138h+var_38]
                vmovaps xmm6, [rsp+138h+var_28]
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
CG_DrawVehicleCrossHairShared
==============
*/
void CG_DrawVehicleCrossHairShared(LocalClientNum_t localClientNum, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  entityState_t *p_nextState; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  char v12; 
  char v13; 
  bool v16; 
  Material *material; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float fmta; 
  float centerY; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
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
      _RBX = DVARFLT_cg_crosshairAlpha;
      if ( !DVARFLT_cg_crosshairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairAlpha") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, cs:__real@3c23d70a
        vcomiss xmm0, dword ptr [rbx+28h]
      }
      if ( v12 | v13 )
      {
        __asm
        {
          vmovaps [rsp+0D8h+var_38], xmm7
          vmovss  xmm7, cs:__real@3f800000
          vmovaps xmm1, xmm7; alpha
        }
        v16 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
        CG_CalcCrosshairColor(localClientNum, *(double *)&_XMM1, &outColor);
        if ( BG_GetReticleType(WeaponForEntity, v16) == RETICLE_TYPE_ONE_PIECE )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  [rsp+0D8h+centerY], xmm0
            vmovss  dword ptr [rsp+0D8h+fmt], xmm0
          }
          CG_DrawReticleOnePiece(localClientNum, WeaponForEntity, v16, &outColor, fmt, centerY);
        }
        else
        {
          BG_GetCenterReticle(WeaponForEntity, v16, &reticleCenter, &reticleCenterSize, NULL);
          material = reticleCenter;
          if ( reticleCenter )
          {
            __asm
            {
              vmovaps [rsp+0D8h+var_28], xmm6
              vxorps  xmm6, xmm6, xmm6
              vcvtsi2ss xmm6, xmm6, [rsp+0D8h+reticleCenterSize]
            }
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            __asm
            {
              vmulss  xmm1, xmm6, cs:__real@bf000000; x
              vmovss  [rsp+0D8h+var_88], xmm7
              vmovss  [rsp+0D8h+var_90], xmm7
              vxorps  xmm0, xmm0, xmm0
              vmovss  [rsp+0D8h+var_98], xmm0
              vmovss  [rsp+0D8h+var_A0], xmm0
              vmovaps xmm3, xmm6; w
              vmovaps xmm2, xmm1; y
              vmovss  dword ptr [rsp+0D8h+fmt], xmm6
            }
            CL_DrawStretchPic(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 2, 2, v31, v32, v33, v34, &outColor, material);
            __asm { vmovaps xmm6, [rsp+0D8h+var_28] }
          }
        }
        __asm { vmovaps xmm7, [rsp+0D8h+var_38] }
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
  const cg_t *LocalClientGlobals; 
  bool WeapReticleZoom; 
  char v16; 
  bool v17; 
  weapType_t WeaponType; 
  double v27; 
  float zoomResult; 
  vec2_t x; 
  vec4_t color; 

  _RSI = adsAlpha;
  _R14 = crossHairAlpha;
  if ( !crossHairAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 392, ASSERT_TYPE_ASSERT, "(crossHairAlpha)", (const char *)&queryFormat, "crossHairAlpha") )
    __debugbreak();
  if ( !adsAlpha && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 393, ASSERT_TYPE_ASSERT, "(adsAlpha)", (const char *)&queryFormat, "adsAlpha") )
    __debugbreak();
  __asm { vmovaps [rsp+0B8h+var_58], xmm7 }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  WeapReticleZoom = CG_GetWeapReticleZoom(LocalClientGlobals, &zoomResult);
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v16 = 0;
  v17 = !WeapReticleZoom;
  if ( WeapReticleZoom )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@43f00000; screenHeight
      vmovss  xmm1, cs:__real@44200000; screenWidth
      vmovaps [rsp+0B8h+var_48], xmm6
      vmovss  xmm6, [rsp+0B8h+zoomResult]
      vmovss  dword ptr [rsp+0B8h+color+0Ch], xmm6
      vmovss  dword ptr [rsp+0B8h+color], xmm7
      vmovss  dword ptr [rsp+0B8h+color+4], xmm7
      vmovss  dword ptr [rsp+0B8h+color+8], xmm7
    }
    CG_CalcCrosshairPosition(LocalClientGlobals, *(const float *)&_XMM1, *(const float *)&_XMM2, (float *)&x, (float *)&x + 1);
    CG_DrawAdsOverlay(localClientNum, r_weapon, isAlternate, &color, &x);
    __asm
    {
      vsubss  xmm1, xmm7, xmm6
      vmovaps xmm6, [rsp+0B8h+var_48]
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm7 }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovss  dword ptr [r14], xmm1
  }
  if ( v16 )
    goto LABEL_21;
  __asm { vcomiss xmm1, xmm7 }
  if ( !(v16 | v17) )
  {
LABEL_21:
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 418, ASSERT_TYPE_SANITY, "( ( *crossHairAlpha >= 0 && *crossHairAlpha <= 1 ) )", "( *crossHairAlpha ) = %g", v27) )
      __debugbreak();
  }
  *adsAlpha = 1.0;
  WeaponType = BG_GetWeaponType(r_weapon, isAlternate);
  __asm { vmovaps xmm7, [rsp+0B8h+var_58] }
  if ( (WeaponType == WEAPTYPE_BULLET || BG_GetWeaponType(r_weapon, isAlternate) == WEAPTYPE_PROJECTILE) && BG_IsAimDownSight(r_weapon, isAlternate) && !BG_ADSShouldShowCrosshair(r_weapon, isAlternate) )
  {
    *(float *)&_XMM0 = CG_CalcADSTransitionBlend(LocalClientGlobals, r_weapon, isAlternate);
    __asm { vmovss  dword ptr [rsi], xmm0 }
  }
}

/*
==============
CG_GetCrosshairAlpha
==============
*/
float CG_GetCrosshairAlpha(LocalClientNum_t localClientNum)
{
  const dvar_t *v5; 
  const Weapon *ReticleWeapon; 
  bool v8; 
  const Weapon *v9; 
  const cg_t *LocalClientGlobals; 
  double v22; 
  bool outIsAlternate; 
  float zoomResult; 
  vec4_t outColor; 
  vec4_t outReticleColor; 

  if ( !CG_DrawReticles_ShouldDrawCrosshair(localClientNum) )
    goto LABEL_18;
  v5 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled || CG_WeaponInspect_IsUIHidden(localClientNum) )
  {
LABEL_18:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm6
      vmovaps [rsp+0A8h+var_38], xmm7
    }
    outIsAlternate = 0;
    _R14 = CG_GetLocalClientGlobals(localClientNum);
    ReticleWeapon = CG_GetReticleWeapon(localClientNum, &outIsAlternate);
    v8 = outIsAlternate;
    v9 = ReticleWeapon;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( CG_GetWeapReticleZoom(LocalClientGlobals, &zoomResult) )
    {
      __asm
      {
        vsubss  xmm7, xmm6, [rsp+0A8h+zoomResult]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm7, xmm0
        vcomiss xmm7, xmm6
        vcvtss2sd xmm0, xmm7, xmm7
        vmovsd  [rsp+0A8h+var_80], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 377, ASSERT_TYPE_SANITY, "( ( *crossHairAlpha >= 0 && *crossHairAlpha <= 1 ) )", "( *crossHairAlpha ) = %g", v22) )
        __debugbreak();
    }
    else
    {
      __asm { vmovaps xmm7, xmm6 }
    }
    if ( (BG_GetWeaponType(v9, v8) == WEAPTYPE_BULLET || BG_GetWeaponType(v9, v8) == WEAPTYPE_PROJECTILE) && BG_IsAimDownSight(v9, v8) && !BG_ADSShouldShowCrosshair(v9, v8) )
    {
      *(float *)&_XMM0 = CG_CalcADSTransitionBlend(LocalClientGlobals, v9, v8);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm { vmovaps xmm1, xmm7; alpha }
    CG_CalcCrosshairColor(localClientNum, *(double *)&_XMM1, &outColor);
    __asm
    {
      vmovss  xmm3, dword ptr [r14+74Ch]; aimSpreadScale
      vmovaps xmm2, xmm6; adsAlpha
      vmovaps xmm1, xmm7; alpha
    }
    CG_CalcReticleColor(&outColor, *(double *)&_XMM1, *(double *)&_XMM2, *(float *)&_XMM3, &outReticleColor);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+outReticleColor+0Ch]
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm6, [rsp+0A8h+var_28]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_GetCrosshairColorAsInt
==============
*/

__int64 __fastcall CG_GetCrosshairColorAsInt(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  int v14; 
  vec4_t outColor; 

  __asm { vmovss  xmm1, cs:__real@3f800000; alpha }
  CG_CalcCrosshairColor(localClientNum, *(double *)&_XMM1, &outColor);
  __asm
  {
    vmovss  xmm3, cs:__real@437f0000
    vmulss  xmm1, xmm3, dword ptr [rsp+48h+outColor]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm1, xmm3, dword ptr [rsp+48h+outColor+4]
    vcvttss2si eax, xmm2
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmulss  xmm1, xmm3, dword ptr [rsp+48h+outColor+8]
    vcvttss2si ecx, xmm2
  }
  v14 = _ECX + (_EAX << 8);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si ecx, xmm2
  }
  return (unsigned int)(_ECX + (v14 << 8));
}

/*
==============
CG_GetCrosshairRadius
==============
*/
float CG_GetCrosshairRadius(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const cg_t *v4; 
  const Weapon *ReticleWeapon; 
  bool outIsAlternate; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  outIsAlternate = 0;
  v4 = LocalClientGlobals;
  ReticleWeapon = CG_GetReticleWeapon(localClientNum, &outIsAlternate);
  *(float *)&_XMM0 = CG_CalcReticleSpreadRadius(v4, ReticleWeapon, outIsAlternate);
  __asm { vmulss  xmm0, xmm0, cs:__real@40100000 }
  return *(float *)&_XMM0;
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
  char v10; 
  bool IsEMPJammed; 
  const ADSOverlay *Overlay; 
  Material *result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = scrPlace;
  if ( !scrPlace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 173, ASSERT_TYPE_ASSERT, "(scrPlace)", (const char *)&queryFormat, "scrPlace") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, cs:__real@43f00000
    vcomiss xmm6, dword ptr [rsi+24h]
  }
  v10 = 1;
  IsEMPJammed = CG_View_IsEMPJammed(localClientNum);
  Overlay = BG_GetOverlay(weapon, isAlternate);
  if ( CL_Main_IsSplitscreenGame() )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+24h]
      vmulss  xmm1, xmm0, cs:__real@3b088889
      vmulss  xmm2, xmm1, dword ptr [rbx+54h]
      vcomiss xmm2, xmm6
    }
    v10 = 0;
  }
  if ( IsEMPJammed && Overlay->shaderEMPMat )
  {
    if ( !v10 || (result = Overlay->shaderEMPLowResMat) == NULL )
      result = Overlay->shaderEMPMat;
  }
  else if ( !v10 || (result = Overlay->shaderLowResMat) == NULL )
  {
    result = Overlay->shaderMat;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  const WeaponDef *v7; 
  const ADSOverlay *Overlay; 
  __int64 localClientNum; 
  CgWeaponMap *v12; 
  bool outIsAlternate; 

  _RBX = zoomResult;
  _RDI = cgameGlob;
  ReticleWeapon = CG_GetReticleWeapon(cgameGlob->localClientNum, &outIsAlternate);
  v7 = BG_WeaponDef(ReticleWeapon, outIsAlternate);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 106, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  Overlay = BG_GetOverlay(ReticleWeapon, outIsAlternate);
  if ( BG_GetWeaponClass(ReticleWeapon, outIsAlternate) == WEAPCLASS_TURRET && v7->overlayInterface == WEAPOVERLAYINTERFACE_TURRETSCOPE || Overlay->shaderMat || Overlay->reticle && !CG_View_IsUsingDualFOV((const LocalClientNum_t)_RDI->localClientNum) )
  {
    localClientNum = _RDI->localClientNum;
    __asm
    {
      vmovaps [rsp+58h+var_28], xmm6
      vmovss  xmm6, dword ptr [rdi+7C64Ch]
    }
    if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v12 = CgWeaponMap::ms_instance[localClientNum];
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 122, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( BG_IsUsingOffhandGestureWeaponADSSupport(v12, &_RDI->predictedPlayerState) )
    {
      *(double *)&_XMM0 = BG_GetOffhandAdsFrac(&_RDI->predictedPlayerState);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm { vmovaps xmm2, xmm6; weapPosFrac }
    *(double *)&_XMM0 = CG_GetWeaponZoom(_RDI, ReticleWeapon, *(const float *)&_XMM2, CG_FovSpace_Scene);
    __asm { vmovaps xmm6, [rsp+58h+var_28] }
    if ( _RBX )
      __asm { vmovss  dword ptr [rbx], xmm0 }
    __asm { vcomiss xmm0, cs:__real@3c23d70a }
    return _RBX != NULL;
  }
  else
  {
    if ( _RBX )
      *_RBX = 0.0;
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
  const ScreenPlacement *ActivePlacement; 
  cg_t *LocalClientGlobals; 
  cg_t *v11; 
  bool IsSplitscreenGame; 
  refdef_t *p_refdef; 
  int v23; 
  unsigned int v25; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  float w; 
  float h; 
  float x; 
  float y; 

  _R15 = crosshairPos;
  _RSI = BG_GetOverlay(weapon, isAlternate);
  ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
  if ( CG_GetWeapOverlayMaterial(localClientNum, weapon, isAlternate, ActivePlacement) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v11 = LocalClientGlobals;
    if ( !LocalClientGlobals->shellshock.wantSavedScreen )
    {
      LocalClientGlobals->shellshock.hasScissor = 1;
      IsSplitscreenGame = CL_Main_IsSplitscreenGame();
      if ( IsSplitscreenGame )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+50h]
          vmovss  [rsp+98h+w], xmm0
          vmovss  xmm3, dword ptr [rsi+54h]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+48h]
          vmovss  [rsp+98h+w], xmm0
          vmovss  xmm3, dword ptr [rsi+4Ch]
        }
      }
      __asm
      {
        vcomiss xmm0, cs:__real@43a00000
        vmovss  [rsp+98h+var_54], xmm3
      }
      if ( IsSplitscreenGame )
      {
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@3f000000
          vmovss  xmm0, dword ptr [r15]
          vmulss  xmm2, xmm3, cs:__real@3f000000
          vsubss  xmm1, xmm0, xmm1
          vmovss  xmm0, dword ptr [r15+4]
          vmovss  [rsp+98h+x], xmm1
          vsubss  xmm1, xmm0, xmm2
          vmovss  [rsp+98h+y], xmm1
        }
        ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &h, 2, 2);
        p_refdef = &v11->refdef;
        if ( !p_refdef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 184, ASSERT_TYPE_ASSERT, "(refdef)", (const char *)&queryFormat, "refdef") )
          __debugbreak();
        if ( p_refdef->useScissorViewport && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw_reticles.cpp", 185, ASSERT_TYPE_ASSERT, "(!refdef->useScissorViewport)", (const char *)&queryFormat, "!refdef->useScissorViewport") )
          __debugbreak();
        p_refdef->useScissorViewport = 1;
        __asm { vcvttss2si esi, [rsp+98h+x] }
        v23 = p_refdef->displayViewport.x + _ESI;
        p_refdef->scissorViewport.x = v23;
        __asm { vcvttss2si ebp, [rsp+98h+y] }
        v25 = p_refdef->displayViewport.y + _EBP;
        p_refdef->scissorViewport.y = v25;
        __asm { vcvttss2si ebx, [rsp+98h+w] }
        p_refdef->scissorViewport.width = _EBX;
        __asm { vcvttss2si edi, [rsp+98h+var_54] }
        p_refdef->scissorViewport.height = _EDI;
        v28 = I_clamp(v23, p_refdef->displayViewport.x, p_refdef->displayViewport.x + p_refdef->displayViewport.width);
        v29 = p_refdef->scissorViewport.y;
        p_refdef->scissorViewport.x = v28;
        p_refdef->scissorViewport.y = I_clamp(v29, p_refdef->displayViewport.y, p_refdef->displayViewport.y + p_refdef->displayViewport.height);
        v30 = I_clamp(_EBX + v23, p_refdef->displayViewport.x, p_refdef->displayViewport.x + p_refdef->displayViewport.width);
        v31 = I_clamp(_EDI + v25, p_refdef->displayViewport.y, p_refdef->displayViewport.y + p_refdef->displayViewport.height);
        v32 = v30 - p_refdef->scissorViewport.x;
        p_refdef->scissorViewport.height = v31 - p_refdef->scissorViewport.y;
        p_refdef->scissorViewport.width = v32;
      }
      else
      {
        __asm { vcomiss xmm3, cs:__real@43700000 }
      }
    }
  }
}

