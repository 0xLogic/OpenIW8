/*
==============
CG_Draw_GetSelectedWeapon
==============
*/

const Weapon *__fastcall CG_Draw_GetSelectedWeapon(const cg_t *cgameGlob)
{
  return ?CG_Draw_GetSelectedWeapon@@YAAEBUWeapon@@PEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_Draw_EndSceneCmds
==============
*/

void CG_Draw_EndSceneCmds(void)
{
  ?CG_Draw_EndSceneCmds@@YAXXZ();
}

/*
==============
CG_Draw_GetFPS
==============
*/

void __fastcall CG_Draw_GetFPS(int *fps, float *pTotalMSec, bool isFullFrameTime)
{
  ?CG_Draw_GetFPS@@YAXAEAHPEAM_N@Z(fps, pTotalMSec, isFullFrameTime);
}

/*
==============
CG_Draw_StickerMaterialHandleForIndex
==============
*/

Material *__fastcall CG_Draw_StickerMaterialHandleForIndex(LocalClientNum_t localClientNum, int stickerMaterialIndex)
{
  return ?CG_Draw_StickerMaterialHandleForIndex@@YAPEAUMaterial@@W4LocalClientNum_t@@H@Z(localClientNum, stickerMaterialIndex);
}

/*
==============
CG_Draw_CalculateFPS
==============
*/

void CG_Draw_CalculateFPS(void)
{
  ?CG_Draw_CalculateFPS@@YAXXZ();
}

/*
==============
CG_Draw_AddSceneTracerBeams
==============
*/

void __fastcall CG_Draw_AddSceneTracerBeams(LocalClientNum_t localClientNum)
{
  ?CG_Draw_AddSceneTracerBeams@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Draw_IsMPRealismMode
==============
*/

bool __fastcall CG_Draw_IsMPRealismMode(LocalClientNum_t localClientNum)
{
  return ?CG_Draw_IsMPRealismMode@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Draw_SetHudEnabled
==============
*/

void __fastcall CG_Draw_SetHudEnabled(LocalClientNum_t localClientNum, int isEnabled)
{
  ?CG_Draw_SetHudEnabled@@YAXW4LocalClientNum_t@@H@Z(localClientNum, isEnabled);
}

/*
==============
CG_Draw_CopyLastFrameTimesUSec
==============
*/

unsigned int __fastcall CG_Draw_CopyLastFrameTimesUSec(unsigned __int64 *pFrameTimesUSec, unsigned int maxCount)
{
  return ?CG_Draw_CopyLastFrameTimesUSec@@YAIPEA_KI@Z(pFrameTimesUSec, maxCount);
}

/*
==============
CG_Draw_MaterialHandleForIndex
==============
*/

Material *__fastcall CG_Draw_MaterialHandleForIndex(LocalClientNum_t localClientNum, int materialIndex)
{
  return ?CG_Draw_MaterialHandleForIndex@@YAPEAUMaterial@@W4LocalClientNum_t@@H@Z(localClientNum, materialIndex);
}

/*
==============
CG_Draw_GetInvalidCmdHintString
==============
*/

const char *__fastcall CG_Draw_GetInvalidCmdHintString(LocalClientNum_t localClientNum)
{
  return ?CG_Draw_GetInvalidCmdHintString@@YAPEBDW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Draw_HybridToggleHintCommon
==============
*/

void __fastcall CG_Draw_HybridToggleHintCommon(LocalClientNum_t localClientNum, const playerState_s *ps, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?CG_Draw_HybridToggleHintCommon@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEBUrectDef_s@@PEAUGfxFont@@MH@Z(localClientNum, ps, rect, font, fontscale, textStyle);
}

/*
==============
CG_Draw_ErrorMessages
==============
*/

void __fastcall CG_Draw_ErrorMessages(const LocalClientNum_t localClientNum, int charHeight)
{
  ?CG_Draw_ErrorMessages@@YAXW4LocalClientNum_t@@H@Z(localClientNum, charHeight);
}

/*
==============
CgDrawSystem::FadeHudMenu
==============
*/

double __fastcall CgDrawSystem::FadeHudMenu(CgDrawSystem *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  double result; 

  *(float *)&result = ?FadeHudMenu@CgDrawSystem@@UEBAMPEBUdvar_t@@HH@Z(this, fadeDvar, displayStartTime, duration);
  return result;
}

/*
==============
CG_Draw_MiniConsole
==============
*/

void __fastcall CG_Draw_MiniConsole(const LocalClientNum_t localClientNum)
{
  ?CG_Draw_MiniConsole@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Draw_GetFullFrontendFPS
==============
*/

void __fastcall CG_Draw_GetFullFrontendFPS(int *fps, float *pTotalMSec)
{
  ?CG_Draw_GetFullFrontendFPS@@YAXAEAHPEAM@Z(fps, pTotalMSec);
}

/*
==============
CG_Draw_GetDetailedFrontendFPSTime
==============
*/

void __fastcall CG_Draw_GetDetailedFrontendFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps)
{
  ?CG_Draw_GetDetailedFrontendFPSTime@@YAXPEAM000PEAH11@Z(minTimeMSec, maxTimeMSec, totalMSec, varianceMSec, fpsMin, fpsMax, fps);
}

/*
==============
CG_Draw_UpdateScramblerState
==============
*/

void __fastcall CG_Draw_UpdateScramblerState(const cg_t *cgameGlob, LocalClientNum_t localClientNum)
{
  ?CG_Draw_UpdateScramblerState@@YAXPEBVcg_t@@W4LocalClientNum_t@@@Z(cgameGlob, localClientNum);
}

/*
==============
CG_Draw_CheckPlayerForLowClip
==============
*/

bool __fastcall CG_Draw_CheckPlayerForLowClip(const cg_t *cgameGlob, PlayerHandIndex hand)
{
  return ?CG_Draw_CheckPlayerForLowClip@@YA_NPEBVcg_t@@W4PlayerHandIndex@@@Z(cgameGlob, hand);
}

/*
==============
CG_Draw_AddFrontendSyncFrameTimeUSec
==============
*/

void __fastcall CG_Draw_AddFrontendSyncFrameTimeUSec(unsigned __int64 time)
{
  ?CG_Draw_AddFrontendSyncFrameTimeUSec@@YAX_K@Z(time);
}

/*
==============
CG_Draw_GetDetailedFullFrontendFPSTime
==============
*/

void __fastcall CG_Draw_GetDetailedFullFrontendFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps)
{
  ?CG_Draw_GetDetailedFullFrontendFPSTime@@YAXPEAM000PEAH11@Z(minTimeMSec, maxTimeMSec, totalMSec, varianceMSec, fpsMin, fpsMax, fps);
}

/*
==============
CG_Draw_SetFullFrontendFrametimeUSec
==============
*/

void __fastcall CG_Draw_SetFullFrontendFrametimeUSec(unsigned __int64 time)
{
  ?CG_Draw_SetFullFrontendFrametimeUSec@@YAX_K@Z(time);
}

/*
==============
CG_Draw_CheckPlayerForLowClipSpecific
==============
*/

bool __fastcall CG_Draw_CheckPlayerForLowClipSpecific(const cg_t *cgameGlob, const Weapon *weapon, bool isAlternate, PlayerHandIndex hand)
{
  return ?CG_Draw_CheckPlayerForLowClipSpecific@@YA_NPEBVcg_t@@AEBUWeapon@@_NW4PlayerHandIndex@@@Z(cgameGlob, weapon, isAlternate, hand);
}

/*
==============
CgDrawSystem::DrawThermalToggleHint
==============
*/

void __fastcall CgDrawSystem::DrawThermalToggleHint(CgDrawSystem *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?DrawThermalToggleHint@CgDrawSystem@@IEBAXPEBUrectDef_s@@PEAUGfxFont@@MH@Z(this, rect, font, fontscale, textStyle);
}

/*
==============
CG_Draw_GetDetailedFPSTime
==============
*/

void __fastcall CG_Draw_GetDetailedFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps, bool isFullFrameTime)
{
  ?CG_Draw_GetDetailedFPSTime@@YAXPEAM000PEAH11_N@Z(minTimeMSec, maxTimeMSec, totalMSec, varianceMSec, fpsMin, fpsMax, fps, isFullFrameTime);
}

/*
==============
CG_Draw_EndSceneCmdsAndAddHudLighting
==============
*/

void CG_Draw_EndSceneCmdsAndAddHudLighting(void)
{
  ?CG_Draw_EndSceneCmdsAndAddHudLighting@@YAXXZ();
}

/*
==============
CG_Draw_GetScramblerStrength
==============
*/

double __fastcall CG_Draw_GetScramblerStrength(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_Draw_GetScramblerStrength@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_Draw_AddSceneTracerEffects
==============
*/

void __fastcall CG_Draw_AddSceneTracerEffects(LocalClientNum_t localClientNum)
{
  ?CG_Draw_AddSceneTracerEffects@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Draw_BloodOverlayReset
==============
*/

void __fastcall CG_Draw_BloodOverlayReset(cg_t *cgameGlob)
{
  ?CG_Draw_BloodOverlayReset@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_Draw_HoldBreathHintCommon
==============
*/

void __fastcall CG_Draw_HoldBreathHintCommon(const LocalClientNum_t localClientNum, const playerState_s *ps, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?CG_Draw_HoldBreathHintCommon@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEBUrectDef_s@@PEAUGfxFont@@MH@Z(localClientNum, ps, rect, font, fontscale, textStyle);
}

/*
==============
CG_Draw_IsSelectedWeaponEquipped
==============
*/

bool __fastcall CG_Draw_IsSelectedWeaponEquipped(LocalClientNum_t localClientNum)
{
  return ?CG_Draw_IsSelectedWeaponEquipped@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Draw_IsHudHidden
==============
*/

bool __fastcall CG_Draw_IsHudHidden()
{
  return ?CG_Draw_IsHudHidden@@YA_NXZ();
}

/*
==============
CG_Draw_GetFrontendFPS
==============
*/

void __fastcall CG_Draw_GetFrontendFPS(int *fps, float *pTotalMSec)
{
  ?CG_Draw_GetFrontendFPS@@YAXAEAHPEAM@Z(fps, pTotalMSec);
}

/*
==============
CG_Draw_CheckPlayerForLowAmmo
==============
*/

bool __fastcall CG_Draw_CheckPlayerForLowAmmo(const cg_t *cgameGlob)
{
  return ?CG_Draw_CheckPlayerForLowAmmo@@YA_NPEBVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_Draw_IsScramblingActive
==============
*/

bool __fastcall CG_Draw_IsScramblingActive(LocalClientNum_t localClientNum)
{
  return ?CG_Draw_IsScramblingActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystem::DrawChangeZoomHint
==============
*/

void __fastcall CgDrawSystem::DrawChangeZoomHint(CgDrawSystem *this, LocalClientNum_t localClientNum, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?DrawChangeZoomHint@CgDrawSystem@@IEBAXW4LocalClientNum_t@@PEBUrectDef_s@@PEAUGfxFont@@MH@Z(this, localClientNum, rect, font, fontscale, textStyle);
}

/*
==============
CG_Draw_CheckPlayerForLowAmmoSpecific
==============
*/

bool __fastcall CG_Draw_CheckPlayerForLowAmmoSpecific(const cg_t *cgameGlob, const Weapon *weapon)
{
  return ?CG_Draw_CheckPlayerForLowAmmoSpecific@@YA_NPEBVcg_t@@AEBUWeapon@@@Z(cgameGlob, weapon);
}

/*
==============
CgDrawSystem::OwnerDrawCommon
==============
*/

void __fastcall CgDrawSystem::OwnerDrawCommon(CgDrawSystem *this, const rectDef_s *rect, int ownerDrawType, GfxFont *font, float scale, const vec4_t *color, float textX, float textY, int textStyle, int textAlignMode)
{
  ?OwnerDrawCommon@CgDrawSystem@@IEBAXPEBUrectDef_s@@HPEAUGfxFont@@MAEBTvec4_t@@MMHH@Z(this, rect, ownerDrawType, font, scale, color, textX, textY, textStyle, textAlignMode);
}

/*
==============
CgDrawSystem::ShouldDrawAnything
==============
*/

bool __fastcall CgDrawSystem::ShouldDrawAnything(CgDrawSystem *this, const cg_t *const cgameGlob)
{
  return ?ShouldDrawAnything@CgDrawSystem@@IEAA_NQEBVcg_t@@@Z(this, cgameGlob);
}

/*
==============
CG_Draw_AddFrontendSyncFrameTimeUSec
==============
*/
void CG_Draw_AddFrontendSyncFrameTimeUSec(unsigned __int64 time)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 93, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  gs_pendingFrontendSyncFrameTimeUSec += time;
}

/*
==============
CG_Draw_AddSceneTracerBeams
==============
*/

void __fastcall CG_Draw_AddSceneTracerBeams(LocalClientNum_t localClientNum)
{
  CG_AddLocalEntityTracerBeams(localClientNum);
}

/*
==============
CG_Draw_AddSceneTracerEffects
==============
*/

void __fastcall CG_Draw_AddSceneTracerEffects(LocalClientNum_t localClientNum)
{
  CG_AddLocalEntityTracerParticles(localClientNum);
}

/*
==============
CG_Draw_BloodOverlayReset
==============
*/
void CG_Draw_BloodOverlayReset(cg_t *cgameGlob)
{
  if ( cgameGlob )
  {
    cgameGlob->bloodOverlayAlpha = 0.0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 983, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0x18110] = 0;
  }
}

/*
==============
CG_Draw_CalculateFPS
==============
*/
void CG_Draw_CalculateFPS(void)
{
  unsigned __int64 Microseconds; 
  unsigned __int64 FullFrameTimeMicroseconds; 
  unsigned __int64 v2; 
  __int64 v3; 
  char v4; 

  Microseconds = R_GPU_GetMicroseconds();
  FullFrameTimeMicroseconds = R_GPU_GetFullFrameTimeMicroseconds();
  v2 = Sys_Microseconds();
  if ( !Microseconds || g_cpuProfiler.m_enabled && R_IsCPUTimelineProfilerViewEnabled() )
    Microseconds = v2 - previous;
  v3 = gs_fpsIndex;
  previous = v2;
  v4 = gs_fpsIndex + 1;
  gs_prevFpsTimesUSec[gs_fpsIndex] = Microseconds;
  gs_prevFpsGpuFullFrameTimesUSec[v3] = FullFrameTimeMicroseconds;
  gs_fpsIndex = v4 & 0x1F;
}

/*
==============
CG_Draw_CheckPlayerForLowAmmo
==============
*/

bool __fastcall CG_Draw_CheckPlayerForLowAmmo(const cg_t *cgameGlob, __int64 a2, double _XMM2_8)
{
  const Weapon *SelectedWeapon; 
  playerState_s *p_predictedPlayerState; 
  bool v7; 
  CgWeaponMap *Instance; 
  playerState_s *v10; 
  const BgWeaponMap *v11; 
  int AmmoPlayerMax; 
  bool v13; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 199, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  SelectedWeapon = CG_Draw_GetSelectedWeapon(cgameGlob);
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 174, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  v7 = BG_UsingAlternate(&cgameGlob->predictedPlayerState);
  if ( !SelectedWeapon->weaponIdx )
    return 0;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
  v10 = &cgameGlob->predictedPlayerState;
  v11 = Instance;
  BG_GetTotalAmmoReserve(Instance, v10, SelectedWeapon, v7);
  AmmoPlayerMax = BG_GetAmmoPlayerMax(v11, p_predictedPlayerState, SelectedWeapon, v7, &NULL_WEAPON);
  v13 = (unsigned int)AmmoPlayerMax <= 0x3E7;
  if ( AmmoPlayerMax <= 999 )
  {
    v13 = AmmoPlayerMax == 0;
    if ( AmmoPlayerMax < 0 )
      return 0;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3e4ccccd
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ebp
    vcomiss xmm2, xmm1
  }
  return v13;
}

/*
==============
CG_Draw_CheckPlayerForLowAmmoSpecific
==============
*/

bool __fastcall CG_Draw_CheckPlayerForLowAmmoSpecific(const cg_t *cgameGlob, const Weapon *weapon, double _XMM2_8)
{
  playerState_s *p_predictedPlayerState; 
  bool v7; 
  CgWeaponMap *Instance; 
  playerState_s *v9; 
  const BgWeaponMap *v10; 
  int AmmoPlayerMax; 
  bool v12; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 174, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  v7 = BG_UsingAlternate(&cgameGlob->predictedPlayerState);
  if ( !weapon->weaponIdx )
    return 0;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
  v9 = &cgameGlob->predictedPlayerState;
  v10 = Instance;
  BG_GetTotalAmmoReserve(Instance, v9, weapon, v7);
  AmmoPlayerMax = BG_GetAmmoPlayerMax(v10, p_predictedPlayerState, weapon, v7, &NULL_WEAPON);
  v12 = (unsigned int)AmmoPlayerMax <= 0x3E7;
  if ( AmmoPlayerMax <= 999 )
  {
    v12 = AmmoPlayerMax == 0;
    if ( AmmoPlayerMax < 0 )
      return 0;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3e4ccccd
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ebp
    vcomiss xmm2, xmm1
  }
  return v12;
}

/*
==============
CG_Draw_CheckPlayerForLowClip
==============
*/
bool CG_Draw_CheckPlayerForLowClip(const cg_t *cgameGlob, PlayerHandIndex hand)
{
  const Weapon *SelectedWeapon; 
  __int64 localClientNum; 
  int EquippedWeaponIndex; 

  SelectedWeapon = CG_Draw_GetSelectedWeapon(cgameGlob);
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(CgWeaponMap::ms_instance[localClientNum], &cgameGlob->predictedPlayerState, SelectedWeapon);
  return EquippedWeaponIndex >= 0 && CG_Draw_CheckPlayerForLowClipSpecific(cgameGlob, SelectedWeapon, cgameGlob->predictedPlayerState.weapEquippedData[EquippedWeaponIndex].inAltMode, hand);
}

/*
==============
CG_Draw_CheckPlayerForLowClipSpecific
==============
*/
bool CG_Draw_CheckPlayerForLowClipSpecific(const cg_t *cgameGlob, const Weapon *weapon, bool isAlternate, PlayerHandIndex hand)
{
  unsigned int weaponIdx; 
  playerState_s *p_predictedPlayerState; 
  bool v10; 
  WeaponDef **v11; 
  int v15; 
  int v16; 
  int ClipSize; 
  int ClipLowAmmo; 
  __int64 v20; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 213, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  weaponIdx = weapon->weaponIdx;
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v20) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v20, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v10 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v11 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  if ( (*v11)->bClipOnly )
    return 0;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1248, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RAX = BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+108h+r_clip2.weapon.weaponIdx], ymm0
    vmovups ymm1, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rsp+108h+r_clip2.weapon.attachmentVariationIndices+5], ymm1
  }
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v15 = 0;
  if ( BG_HasLadderHand(p_predictedPlayerState) && hand == WEAPON_HAND_LEFT )
    hand = WEAPON_HAND_DEFAULT;
  v16 = 0;
  while ( !BG_IsClipCompatible(&p_predictedPlayerState->weapCommon.ammoInClip[v16].clipIndex, &r_clip2) )
  {
    if ( (unsigned int)++v16 >= 0xF )
      goto LABEL_25;
  }
  v15 = p_predictedPlayerState->weapCommon.ammoInClip[v16].ammoCount[hand];
LABEL_25:
  if ( v15 < 0 )
    return 0;
  if ( v15 > 999 )
    v15 = 999;
  ClipSize = BG_GetClipSize(p_predictedPlayerState, weapon, isAlternate);
  if ( ClipSize > 999 )
    ClipSize = 999;
  ClipLowAmmo = BG_GetClipLowAmmo(p_predictedPlayerState, weapon, isAlternate);
  return ClipSize > 0 && v15 <= ClipLowAmmo;
}

/*
==============
CG_Draw_CopyLastFrameTimesUSec
==============
*/
__int64 CG_Draw_CopyLastFrameTimesUSec(unsigned __int64 *pFrameTimesUSec, unsigned int maxCount)
{
  unsigned __int64 *v3; 
  unsigned int v4; 
  signed int v5; 
  __int64 v6; 
  unsigned int v7; 
  signed int v8; 

  v3 = pFrameTimesUSec;
  if ( !pFrameTimesUSec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 767, ASSERT_TYPE_ASSERT, "(pFrameTimesUSec)", (const char *)&queryFormat, "pFrameTimesUSec") )
    __debugbreak();
  v4 = 32;
  if ( maxCount <= 0x20 )
    v4 = maxCount;
  if ( gs_fpsIndex )
    v5 = gs_fpsIndex - 1;
  else
    v5 = 31;
  if ( !v4 )
    return 0i64;
  v6 = v4;
  v7 = v4;
  do
  {
    v8 = v5 + 32;
    ++v3;
    if ( v5 >= 0 )
      v8 = v5;
    --v5;
    *(v3 - 1) = gs_prevFpsTimesUSec[v8];
    --v6;
  }
  while ( v6 );
  return v7;
}

/*
==============
CG_Draw_EndSceneCmds
==============
*/
void CG_Draw_EndSceneCmds(void)
{
  ;
}

/*
==============
CG_Draw_EndSceneCmdsAndAddHudLighting
==============
*/
void CG_Draw_EndSceneCmdsAndAddHudLighting(void)
{
  ;
}

/*
==============
CG_Draw_ErrorMessages
==============
*/
void CG_Draw_ErrorMessages(const LocalClientNum_t localClientNum, int charHeight)
{
  float v3; 

  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+38h+var_18], xmm0
  }
  Con_DrawErrors(localClientNum, 2, 300, charHeight, v3);
}

/*
==============
CG_Draw_GetDetailedFPSTime
==============
*/
void CG_Draw_GetDetailedFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps, const unsigned __int64 *pTimes, unsigned int frameCount)
{
  unsigned int v16; 
  signed __int64 v17; 
  signed __int64 v27; 
  signed __int64 v35; 
  unsigned __int64 rMaxTimeUSec; 
  unsigned __int64 rMinTimeUSec; 
  unsigned __int64 rTotalUSec; 

  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  _RSI = varianceMSec;
  _RBP = totalMSec;
  _R14 = maxTimeMSec;
  _R15 = minTimeMSec;
  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 856, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  v16 = frameCount;
  if ( !frameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 857, ASSERT_TYPE_ASSERT, "(frameCount)", (const char *)&queryFormat, "frameCount") )
    __debugbreak();
  CalculateDetailedFpsTimes(pTimes, v16, &rMinTimeUSec, &rMaxTimeUSec, &rTotalUSec, (float *)&frameCount);
  v17 = rMaxTimeUSec;
  __asm
  {
    vmovss  xmm5, cs:__real@5f800000
    vmovss  xmm6, cs:__real@49742400
  }
  if ( fpsMin )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r8
    }
    if ( (rMaxTimeUSec & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm5 }
    __asm
    {
      vdivss  xmm0, xmm6, xmm0
      vaddss  xmm2, xmm0, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vcvttss2si eax, xmm4
    }
    *fpsMin = _EAX;
  }
  v27 = rMinTimeUSec;
  if ( fpsMax )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
    }
    if ( (rMinTimeUSec & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm5 }
    __asm
    {
      vdivss  xmm0, xmm6, xmm0
      vaddss  xmm2, xmm0, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vcvttss2si eax, xmm4
    }
    *fpsMax = _EAX;
  }
  v35 = rTotalUSec;
  if ( fps )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbx
      vxorps  xmm1, xmm1, xmm1
      vmulss  xmm2, xmm0, xmm6
      vcvtsi2ss xmm1, xmm1, rcx
    }
    if ( (rTotalUSec & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, xmm5 }
    __asm
    {
      vdivss  xmm0, xmm2, xmm1
      vaddss  xmm2, xmm0, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vcvttss2si eax, xmm4
    }
    *fps = _EAX;
  }
  __asm { vmovss  xmm1, cs:__real@3a83126f }
  if ( _R15 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdx
    }
    if ( v27 < 0 )
      __asm { vaddss  xmm0, xmm0, xmm5 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm1
      vmovss  dword ptr [r15], xmm0
    }
  }
  if ( _R14 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r8
    }
    if ( v17 < 0 )
      __asm { vaddss  xmm0, xmm0, xmm5 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm1
      vmovss  dword ptr [r14], xmm0
    }
  }
  if ( _RSI )
  {
    __asm
    {
      vmulss  xmm1, xmm1, [rsp+68h+frameCount]
      vmovss  dword ptr [rsi], xmm1
    }
  }
  if ( _RBP )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rcx
    }
    if ( v35 < 0 )
      __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000 }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rcx
      vdivsd  xmm1, xmm1, xmm0
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  dword ptr [rbp+0], xmm2
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
}

/*
==============
CG_Draw_GetDetailedFPSTime
==============
*/
void CG_Draw_GetDetailedFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps, bool isFullFrameTime)
{
  const unsigned __int64 *pTimes; 

  pTimes = gs_prevFpsGpuFullFrameTimesUSec;
  if ( !isFullFrameTime )
    pTimes = gs_prevFpsTimesUSec;
  CG_Draw_GetDetailedFPSTime(minTimeMSec, maxTimeMSec, totalMSec, varianceMSec, fpsMin, fpsMax, fps, pTimes, 0x20u);
}

/*
==============
CG_Draw_GetDetailedFrontendFPSTime
==============
*/
void CG_Draw_GetDetailedFrontendFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps)
{
  CG_Draw_GetDetailedFPSTime(minTimeMSec, maxTimeMSec, totalMSec, varianceMSec, fpsMin, fpsMax, fps, gs_prevFrontendFrameTimesUSec, 0x20u);
}

/*
==============
CG_Draw_GetDetailedFullFrontendFPSTime
==============
*/
void CG_Draw_GetDetailedFullFrontendFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps)
{
  CG_Draw_GetDetailedFPSTime(minTimeMSec, maxTimeMSec, totalMSec, varianceMSec, fpsMin, fpsMax, fps, gs_prevFullFrontendFrameTimesUSec, 0x20u);
}

/*
==============
CG_Draw_GetFPS
==============
*/
void CG_Draw_GetFPS(int *fps, float *pTotalMSec, const unsigned __int64 *pTimes, unsigned int frameCount)
{
  __int64 v11; 
  signed int v13; 
  __int64 v16; 
  __int64 v18; 
  const unsigned __int64 *v19; 
  unsigned int v20; 
  __int64 v21; 

  _RSI = pTotalMSec;
  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 941, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  if ( !frameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 942, ASSERT_TYPE_ASSERT, "(frameCount)", (const char *)&queryFormat, "frameCount") )
    __debugbreak();
  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 928, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  v11 = 0i64;
  _RDX = 0i64;
  v13 = 0;
  if ( (int)frameCount > 0 && frameCount >= 4 )
  {
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v16 = 0i64;
    do
    {
      __asm
      {
        vpaddq  xmm1, xmm1, xmmword ptr [rdi+rax*8]
        vpaddq  xmm2, xmm2, xmmword ptr [rdi+rax*8+10h]
      }
      v16 += 4i64;
      v13 += 4;
    }
    while ( v16 < (int)(frameCount - (frameCount & 0x80000003)) );
    __asm
    {
      vpaddq  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddq  xmm1, xmm1, xmm0
      vmovq   rdx, xmm1
    }
  }
  v18 = 0i64;
  if ( v13 < (int)frameCount )
  {
    if ( (int)(frameCount - v13) >= 2 )
    {
      v19 = &pTimes[v13];
      v20 = ((frameCount - v13 - 2) >> 1) + 1;
      v21 = v20;
      v13 += 2 * v20;
      do
      {
        v11 += *v19;
        v18 += v19[1];
        v19 += 2;
        --v21;
      }
      while ( v21 );
    }
    if ( v13 < (int)frameCount )
      _RDX += pTimes[v13];
    _RDX += v18 + v11;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( !_RDX )
    _RDX = 1i64;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, rbx
    vmulss  xmm2, xmm0, cs:__real@49742400
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdx
  }
  if ( _RDX < 0 )
    __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
  __asm
  {
    vdivss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vcvttss2si eax, xmm4
  }
  *fps = _EAX;
  if ( _RSI )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, rdx
    }
    if ( _RDX < 0 )
      __asm { vaddsd  xmm1, xmm1, cs:__real@43f0000000000000 }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rcx
      vdivsd  xmm1, xmm1, xmm0
      vcvtsd2ss xmm2, xmm1, xmm1
      vmovss  dword ptr [rsi], xmm2
    }
  }
}

/*
==============
CG_Draw_GetFPS
==============
*/
void CG_Draw_GetFPS(int *fps, float *pTotalMSec, bool isFullFrameTime)
{
  bool v3; 
  const unsigned __int64 *v4; 

  v3 = !isFullFrameTime;
  v4 = gs_prevFpsGpuFullFrameTimesUSec;
  if ( v3 )
    v4 = gs_prevFpsTimesUSec;
  CG_Draw_GetFPS(fps, pTotalMSec, v4, 0x20u);
}

/*
==============
CG_Draw_GetFrontendFPS
==============
*/

void __fastcall CG_Draw_GetFrontendFPS(int *fps, float *pTotalMSec, double _XMM2_8)
{
  unsigned __int64 *v5; 

  v5 = &gs_prevFrontendFrameTimesUSec[2];
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vpxor   xmm2, xmm2, xmm2
  }
  do
  {
    __asm
    {
      vpaddq  xmm1, xmm1, xmmword ptr [rax-10h]
      vpaddq  xmm2, xmm2, xmmword ptr [rax]
    }
    v5 += 4;
  }
  while ( (__int64)v5 < (__int64)&unk_150F3B880 );
  __asm
  {
    vpaddq  xmm1, xmm2, xmm1
    vpsrldq xmm0, xmm1, 8
    vpaddq  xmm1, xmm1, xmm0
    vmovq   rcx, xmm1
    vxorps  xmm1, xmm1, xmm1
  }
  if ( !_RCX )
    _RCX = 1i64;
  __asm { vcvtsi2ss xmm1, xmm1, rcx }
  if ( _RCX < 0 )
    __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
  __asm
  {
    vmovss  xmm0, cs:__real@4bf42400
    vdivss  xmm1, xmm0, xmm1
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  *fps = _EAX;
  if ( pTotalMSec )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rcx
    }
    if ( _RCX < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:__real@3f00624dd2f1a9fc
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rdx], xmm1
    }
  }
}

/*
==============
CG_Draw_GetFullFrontendFPS
==============
*/

void __fastcall CG_Draw_GetFullFrontendFPS(int *fps, float *pTotalMSec, double _XMM2_8)
{
  unsigned __int64 *v5; 

  v5 = &gs_prevFullFrontendFrameTimesUSec[2];
  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vpxor   xmm2, xmm2, xmm2
  }
  do
  {
    __asm
    {
      vpaddq  xmm1, xmm1, xmmword ptr [rax-10h]
      vpaddq  xmm2, xmm2, xmmword ptr [rax]
    }
    v5 += 4;
  }
  while ( (__int64)v5 < (__int64)&gs_prevFrontendFrameTimesUSec[2] );
  __asm
  {
    vpaddq  xmm1, xmm2, xmm1
    vpsrldq xmm0, xmm1, 8
    vpaddq  xmm1, xmm1, xmm0
    vmovq   rcx, xmm1
    vxorps  xmm1, xmm1, xmm1
  }
  if ( !_RCX )
    _RCX = 1i64;
  __asm { vcvtsi2ss xmm1, xmm1, rcx }
  if ( _RCX < 0 )
    __asm { vaddss  xmm1, xmm1, cs:__real@5f800000 }
  __asm
  {
    vmovss  xmm0, cs:__real@4bf42400
    vdivss  xmm1, xmm0, xmm1
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  *fps = _EAX;
  if ( pTotalMSec )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rcx
    }
    if ( _RCX < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm0, xmm0, cs:__real@3f00624dd2f1a9fc
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [rdx], xmm1
    }
  }
}

/*
==============
CG_Draw_GetInvalidCmdHintString
==============
*/
const char *CG_Draw_GetInvalidCmdHintString(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 
  cg_t *v3; 
  InvalidCmdHintType invalidCmdHintType; 
  const char *v6; 
  const Weapon *p_invalidCmdHintWeapon; 
  __int64 weaponIdx; 
  bool v9; 
  WeaponCompleteDef **v10; 
  WeaponCompleteDef *v11; 
  weapType_t WeaponType; 
  bool IsOffhand; 
  const char *szInternalName; 
  const char *v15; 
  bool v16; 
  __int64 v17; 
  signed __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  bool v24; 
  const char *v25; 
  bool v26; 
  bool v27; 
  __int64 v28; 
  __int64 v29; 
  char dest[256]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = DVARINT_cg_invalidCmdHintDuration;
  v3 = LocalClientGlobals;
  if ( !DVARINT_cg_invalidCmdHintDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_invalidCmdHintDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer + v3->invalidCmdHintTime >= v3->time )
  {
    invalidCmdHintType = v3->invalidCmdHintType;
  }
  else
  {
    invalidCmdHintType = INVALID_CMD_NONE;
    v3->invalidCmdHintType = INVALID_CMD_NONE;
  }
  switch ( invalidCmdHintType )
  {
    case INVALID_CMD_NO_AMMO_BULLETS:
      return UI_SafeTranslateString("WEAPON/NO_AMMO");
    case INVALID_CMD_NO_AMMO_GRENADE:
    case INVALID_CMD_NO_AMMO_SECONDARY_GRENADE:
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_LADDER_AIM) )
      {
        v6 = "WEAPON/NO_WEAPON_AMMO_MP";
        if ( v3->invalidCmdHintType != INVALID_CMD_NO_AMMO_GRENADE )
          v6 = "WEAPON/NO_SPECIAL_GRENADE";
        goto LABEL_10;
      }
      p_invalidCmdHintWeapon = &v3->invalidCmdHintWeapon;
      weaponIdx = v3->invalidCmdHintWeapon.weaponIdx;
      if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
      {
        LODWORD(v29) = bg_lastParsedWeaponIndex;
        LODWORD(v28) = weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v28, v29) )
          __debugbreak();
      }
      v9 = bg_weaponCompleteDefs[weaponIdx] == NULL;
      v10 = &bg_weaponCompleteDefs[weaponIdx];
      if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
        __debugbreak();
      v11 = *v10;
      WeaponType = BG_GetWeaponType(p_invalidCmdHintWeapon, 0);
      IsOffhand = BG_WeaponTypeIsOffhand(WeaponType);
      szInternalName = v11->szInternalName;
      v15 = "none";
      v16 = IsOffhand;
      v17 = 0x7FFFFFFFi64;
      if ( !v11->szInternalName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v18 = szInternalName - "none";
      break;
    case INVALID_CMD_STAND_BLOCKED:
      v24 = BG_WeaponBlocksProne(&v3->invalidCmdHintWeapon, 0);
      v25 = "GAME/STAND_BLOCKED_WEAPON";
      if ( !v24 )
        v25 = "GAME/STAND_BLOCKED";
      return UI_SafeTranslateString(v25);
    case INVALID_CMD_CROUCH_BLOCKED:
      v26 = BG_WeaponBlocksProne(&v3->invalidCmdHintWeapon, 0);
      v25 = "GAME/CROUCH_BLOCKED_WEAPON";
      if ( !v26 )
        v25 = "GAME/CROUCH_BLOCKED";
      return UI_SafeTranslateString(v25);
    case INVALID_CMD_PRONE_BLOCKED:
      v27 = BG_WeaponBlocksProne(&v3->invalidCmdHintWeapon, 0);
      v25 = "CGAME/PRONE_BLOCKED_WEAPON";
      if ( !v27 )
        v25 = "CGAME/PRONE_BLOCKED";
      return UI_SafeTranslateString(v25);
    case INVALID_CMD_TARGET_TOO_CLOSE:
      return UI_SafeTranslateString("WEAPON/TARGET_TOO_CLOSE");
    case INVALID_CMD_LOCKON_REQUIRED:
      return UI_SafeTranslateString("WEAPON/LOCKON_REQUIRED");
    case INVALID_CMD_NOT_ENOUGH_CLEARANCE:
      return UI_SafeTranslateString("WEAPON/TARGET_NOT_ENOUGH_CLEARANCE");
    case INVALID_CMD_NO_AMMO_SPECIAL:
      Com_sprintf(dest, 0x100ui64, "WEAPON/NO_SPECIAL_OFFHAND_AMMO");
      return UI_SafeLocalizeTextMessage(dest);
    case INVALID_CMD_NO_GRENADE:
      v6 = "WEAPON/NO_GRENADE";
LABEL_10:
      Com_sprintf(dest, 0x100ui64, v6);
      return UI_SafeLocalizeTextMessage(dest);
    case INVALID_CMD_TURRET_BLOCKED:
      return UI_SafeTranslateString("CGAME/TURRET_BLOCKED");
    case INVALID_CMD_CANT_USE_IN_PRONE:
      return UI_SafeTranslateString("CGAME/PRONE_BLOCKS_USE");
    default:
      if ( invalidCmdHintType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 329, ASSERT_TYPE_ASSERT, "(cgameGlob->invalidCmdHintType == INVALID_CMD_NONE)", (const char *)&queryFormat, "cgameGlob->invalidCmdHintType == INVALID_CMD_NONE") )
        __debugbreak();
      return (char *)&queryFormat.fmt + 3;
  }
  while ( 1 )
  {
    v19 = (unsigned __int8)v15[v18];
    v20 = v17;
    v21 = *(unsigned __int8 *)v15++;
    --v17;
    if ( !v20 )
      return 0i64;
    if ( v19 != v21 )
    {
      v22 = v19 + 32;
      if ( (unsigned int)(v19 - 65) > 0x19 )
        v22 = v19;
      v19 = v22;
      v23 = v21 + 32;
      if ( (unsigned int)(v21 - 65) > 0x19 )
        v23 = v21;
      if ( v19 != v23 )
        break;
    }
    if ( !v19 )
      return 0i64;
  }
  if ( !v11->iClipSize || !v16 )
    return 0i64;
  Com_sprintf(dest, 0x100ui64, aWeaponNoWeapon, v11->szDisplayName);
  return UI_SafeLocalizeTextMessage(dest);
}

/*
==============
CG_Draw_GetScramblerStrength
==============
*/
float CG_Draw_GetScramblerStrength(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int m_omnvarIndexUIScramblerStrength; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) || (LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum), m_omnvarIndexUIScramblerStrength = LocalClientGlobals->m_omnvarIndexUIScramblerStrength, m_omnvarIndexUIScramblerStrength == -1) )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    Data = CG_Omnvar_GetData(localClientNum, m_omnvarIndexUIScramblerStrength);
    Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexUIScramblerStrength);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3e4ccccd
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Draw_GetSelectedWeapon
==============
*/
Weapon *CG_Draw_GetSelectedWeapon(const cg_t *cgameGlob)
{
  __int64 localClientNum; 
  CgWeaponMap *v3; 
  const dvar_t *v4; 
  int EquippedWeaponIndex; 
  PlayerEquippedWeaponState *v6; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 156, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[localClientNum];
  if ( cgameGlob->weaponSelect.weaponIdx >= BG_GetNumWeapons() )
    return (Weapon *)BG_GetCurrentWeaponForPlayer(v3, &cgameGlob->predictedPlayerState);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( cgameGlob == (const cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DVARBOOL_bg_giveAll;
  if ( DVARBOOL_bg_giveAll )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
    if ( v4->current.enabled )
      return &cgameGlob->weaponSelect;
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( cgameGlob == (const cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( cgameGlob->weaponSelect.weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v3, &cgameGlob->predictedPlayerState, &cgameGlob->weaponSelect), EquippedWeaponIndex >= 0) )
    v6 = &cgameGlob->predictedPlayerState.weapEquippedData[EquippedWeaponIndex];
  else
    v6 = NULL;
  if ( v6 )
    return &cgameGlob->weaponSelect;
  else
    return (Weapon *)BG_GetCurrentWeaponForPlayer(v3, &cgameGlob->predictedPlayerState);
}

/*
==============
CG_Draw_HoldBreathHintCommon
==============
*/
void CG_Draw_HoldBreathHintCommon(const LocalClientNum_t localClientNum, const playerState_s *ps, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  const dvar_t *v11; 
  CgWeaponMap *Instance; 
  char v17; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const char *v20; 
  const char *v23; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float forceNoBacking; 
  float v44; 
  usercmd_s ucmd; 
  char result[256]; 

  v11 = DVARBOOL_cg_drawBreathHint;
  _R14 = rect;
  if ( !DVARBOOL_cg_drawBreathHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBreathHint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(Instance, ps);
    __asm { vucomiss xmm0, cs:__real@3f800000 }
    if ( v17 )
    {
      if ( BG_HasHoldBreathAbility(Instance, ps) )
      {
        Client = ClActiveClient::GetClient(localClientNum);
        CmdNumber = ClActiveClient_GetCmdNumber(Client);
        CL_GetUserCmd(localClientNum, CmdNumber, &ucmd);
        if ( (ucmd.buttons & 0x800) == 0 && !BG_HoldingBreath(ps) )
        {
          __asm
          {
            vmovaps [rsp+2E8h+var_48], xmm6
            vmovaps [rsp+2E8h+var_58], xmm7
            vmovaps [rsp+2E8h+var_68], xmm8
          }
          UI_GetKeyBindLocalizedString(localClientNum, "+holdbreath", result, 0x100ui64, BYTE_VALUE, 0, 0);
          v20 = UI_SafeTranslateString("PLATFORM/HOLD_BREATH");
          __asm
          {
            vmovss  xmm8, [rsp+2E8h+fontscale]
            vmovaps xmm3, xmm8; scale
          }
          v23 = UI_ReplaceConversionString(v20, result);
          UI_TextWidth(v23, 0, font, *(float *)&_XMM3);
          vertAlign = _R14->vertAlign;
          horzAlign = _R14->horzAlign;
          __asm
          {
            vmovss  xmm6, dword ptr [r14+4]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm0, xmm0, cs:__real@3f000000
            vaddss  xmm2, xmm0, cs:__real@3f000000
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm4, xmm0, xmm2, 1
            vmovss  xmm0, dword ptr [r14]
            vcvttss2si eax, xmm4
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vsubss  xmm7, xmm0, xmm1
          }
          ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
          __asm
          {
            vmovss  [rsp+2E8h+var_2A8], xmm8
            vmovss  dword ptr [rsp+2E8h+forceNoBacking], xmm6
            vmovss  dword ptr [rsp+2E8h+fmt], xmm7
          }
          UI_DrawText(ActivePlacement, v23, 0x7FFFFFFF, font, fmt, forceNoBacking, horzAlign, vertAlign, v44, &colorWhite, textStyle);
          __asm
          {
            vmovaps xmm8, [rsp+2E8h+var_68]
            vmovaps xmm7, [rsp+2E8h+var_58]
            vmovaps xmm6, [rsp+2E8h+var_48]
          }
        }
      }
    }
  }
}

/*
==============
CG_Draw_HybridToggleHintCommon
==============
*/
void CG_Draw_HybridToggleHintCommon(LocalClientNum_t localClientNum, const playerState_s *ps, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  __int64 v9; 
  bool v17; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const char *v20; 
  const char *v23; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float forceNoBacking; 
  float v44; 
  usercmd_s ucmd; 
  Weapon r_weapon; 
  char result[256]; 

  v9 = localClientNum;
  _R15 = rect;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  _RAX = BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v9], ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+328h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+328h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+328h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( BG_InADS(ps) )
  {
    v17 = BG_UsingAlternate(ps);
    if ( BG_CanHybridToggle(ps, &r_weapon, v17) )
    {
      __asm
      {
        vmovaps [rsp+328h+var_48], xmm6
        vmovaps [rsp+328h+var_58], xmm7
        vmovaps [rsp+328h+var_68], xmm8
      }
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v9);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      CL_GetUserCmd((LocalClientNum_t)v9, CmdNumber, &ucmd);
      UI_GetKeyBindLocalizedString((LocalClientNum_t)v9, "togglehybrid", result, 0x100ui64, BYTE_VALUE, 0, 0);
      v20 = UI_SafeTranslateString("PLATFORM/HYBRID_TOGGLE");
      __asm
      {
        vmovss  xmm8, [rsp+328h+fontscale]
        vmovaps xmm3, xmm8; scale
      }
      v23 = UI_ReplaceConversionString(v20, result);
      UI_TextWidth(v23, 0, font, *(float *)&_XMM3);
      vertAlign = _R15->vertAlign;
      horzAlign = _R15->horzAlign;
      __asm
      {
        vmovss  xmm6, dword ptr [r15+4]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3f000000
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vmovss  xmm0, dword ptr [r15]
        vcvttss2si eax, xmm4
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm7, xmm0, xmm1
      }
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
      __asm
      {
        vmovss  [rsp+328h+var_2E8], xmm8
        vmovss  dword ptr [rsp+328h+forceNoBacking], xmm6
        vmovss  dword ptr [rsp+328h+fmt], xmm7
      }
      UI_DrawText(ActivePlacement, v23, 0x7FFFFFFF, font, fmt, forceNoBacking, horzAlign, vertAlign, v44, &colorWhite, textStyle);
      __asm
      {
        vmovaps xmm8, [rsp+328h+var_68]
        vmovaps xmm7, [rsp+328h+var_58]
        vmovaps xmm6, [rsp+328h+var_48]
      }
    }
  }
}

/*
==============
CG_Draw_InitScramblerDataIfNeeded
==============
*/
void CG_Draw_InitScramblerDataIfNeeded()
{
  __int64 i; 

  if ( !s_isScramblingInitialized )
  {
    for ( i = 0i64; i < 2; ++i )
    {
      s_scramblerStartTime[i] = -1;
      s_scramblerDuration[i] = -1;
      s_scramblerRecoveryStartTime[i] = -1;
      s_scramblerRecoveryDuration[i] = -1;
      if ( (unsigned __int64)i >= 2 )
      {
        j___report_rangecheckfailure(0x140000000ui64);
        JUMPOUT(0x141C3EACAi64);
      }
      s_isScramblingActive[i] = 0;
    }
    s_isScramblingInitialized = 1;
  }
}

/*
==============
CG_Draw_IsHudHidden
==============
*/
bool CG_Draw_IsHudHidden()
{
  const dvar_t *v0; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_STUNNED_LOOP) || !CL_Pause_IsGamePaused() )
    return 0;
  v0 = DVARBOOL_cg_drawpaused;
  if ( !DVARBOOL_cg_drawpaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpaused") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return !v0->current.enabled;
}

/*
==============
CG_Draw_IsMPRealismMode
==============
*/
bool CG_Draw_IsMPRealismMode(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int m_omnvarIndexUIRealismHUD; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
    return 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  m_omnvarIndexUIRealismHUD = LocalClientGlobals->m_omnvarIndexUIRealismHUD;
  if ( m_omnvarIndexUIRealismHUD == -1 )
    return 0;
  Data = CG_Omnvar_GetData(localClientNum, m_omnvarIndexUIRealismHUD);
  Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexUIRealismHUD);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( Def->type )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
      __debugbreak();
    if ( Def->type )
      return 0;
  }
  return Data->current.enabled;
}

/*
==============
CG_Draw_IsScramblingActive
==============
*/
_BOOL8 CG_Draw_IsScramblingActive(LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  CG_Draw_InitScramblerDataIfNeeded();
  return s_isScramblingActive[v1];
}

/*
==============
CG_Draw_IsSelectedWeaponEquipped
==============
*/
bool CG_Draw_IsSelectedWeaponEquipped(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  const Weapon *SelectedWeapon; 
  bool v4; 
  const BgWeaponMap **v5; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  SelectedWeapon = CG_Draw_GetSelectedWeapon(LocalClientGlobals);
  v4 = CgWeaponMap::ms_instance[v1] == NULL;
  v5 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return BG_GetEquippedWeaponIndex(*v5, &LocalClientGlobals->predictedPlayerState, SelectedWeapon) != -1;
}

/*
==============
CG_Draw_MaterialHandleForIndex
==============
*/
Material *CG_Draw_MaterialHandleForIndex(LocalClientNum_t localClientNum, int materialIndex)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 

  v2 = materialIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !(_DWORD)v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 119, ASSERT_TYPE_ASSERT, "(materialIndex != 0)", (const char *)&queryFormat, "materialIndex != 0") )
      __debugbreak();
LABEL_4:
    Com_PrintWarning(14, "Invalid material index %i passed in to CG_Draw_MaterialHandleForIndex\n", (unsigned int)v2);
    return 0i64;
  }
  if ( (int)v2 <= 0 || (unsigned int)v2 >= 0x15E )
    goto LABEL_4;
  return LocalClientGlobals->serverMaterialCache[v2];
}

/*
==============
CG_Draw_MiniConsole
==============
*/
void CG_Draw_MiniConsole(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_con_minicon;
  if ( !DVARBOOL_con_minicon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_minicon") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    __asm { vmovss  xmm3, cs:__real@3f800000; alpha }
    Con_DrawMiniConsole(localClientNum, 2, 4, *(float *)&_XMM3);
  }
}

/*
==============
CG_Draw_ResetScramblerData
==============
*/
void CG_Draw_ResetScramblerData(LocalClientNum_t localClientNum)
{
  s_scramblerStartTime[localClientNum] = -1;
  s_scramblerDuration[localClientNum] = -1;
  s_scramblerRecoveryStartTime[localClientNum] = -1;
  s_scramblerRecoveryDuration[localClientNum] = -1;
  if ( (unsigned __int64)(int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    j___report_rangecheckfailure(0x140000000ui64);
    JUMPOUT(0x141C3EFC2i64);
  }
  s_isScramblingActive[localClientNum] = 0;
}

/*
==============
CG_Draw_SetFullFrontendFrametimeUSec
==============
*/
void CG_Draw_SetFullFrontendFrametimeUSec(unsigned __int64 time)
{
  __int64 v2; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 81, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( gs_pendingFrontendSyncFrameTimeUSec >= time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 82, ASSERT_TYPE_ASSERT, "(gs_pendingFrontendSyncFrameTimeUSec < time)", (const char *)&queryFormat, "gs_pendingFrontendSyncFrameTimeUSec < time") )
    __debugbreak();
  v2 = gs_frontendfpsIndex;
  gs_prevFullFrontendFrameTimesUSec[gs_frontendfpsIndex] = time;
  gs_prevFrontendFrameTimesUSec[v2] = time - gs_pendingFrontendSyncFrameTimeUSec;
  gs_frontendfpsIndex = ((_BYTE)v2 + 1) & 0x1F;
  gs_pendingFrontendSyncFrameTimeUSec = 0i64;
}

/*
==============
CG_Draw_SetHudEnabled
==============
*/
void CG_Draw_SetHudEnabled(LocalClientNum_t localClientNum, int isEnabled)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 486, ASSERT_TYPE_ASSERT, "(cgameGlob != 0)", (const char *)&queryFormat, "cgameGlob != NULL") )
    __debugbreak();
  LocalClientGlobals->showHud = isEnabled != 0;
}

/*
==============
CG_Draw_StickerMaterialHandleForIndex
==============
*/
Material *CG_Draw_StickerMaterialHandleForIndex(LocalClientNum_t localClientNum, int stickerMaterialIndex)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 

  v2 = stickerMaterialIndex;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !(_DWORD)v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 140, ASSERT_TYPE_ASSERT, "(stickerMaterialIndex != 0)", (const char *)&queryFormat, "stickerMaterialIndex != 0") )
      __debugbreak();
LABEL_4:
    Com_PrintWarning(14, "Invalid sticker material index %i passed in to CG_Draw_StickerMaterialHandleForIndex\n", (unsigned int)v2);
    return 0i64;
  }
  if ( (int)v2 <= 0 || (unsigned int)v2 >= 0x200 )
    goto LABEL_4;
  return LocalClientGlobals->serverStickerMaterialCache[v2];
}

/*
==============
CG_Draw_UpdateScramblerState
==============
*/
void CG_Draw_UpdateScramblerState(const cg_t *cgameGlob, LocalClientNum_t localClientNum)
{
  unsigned __int64 v7; 
  bool v8; 
  __int64 v9; 
  bool v11; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int m_omnvarIndexUIScramblerStrength; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  int time; 
  const dvar_t *v20; 
  int integer; 
  int v27; 
  int v28; 
  unsigned int pHoldrand; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  v7 = localClientNum;
  CG_Draw_InitScramblerDataIfNeeded();
  v8 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  v11 = !v8;
  if ( !v8 || (LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v7), m_omnvarIndexUIScramblerStrength = LocalClientGlobals->m_omnvarIndexUIScramblerStrength, v11 = 1, m_omnvarIndexUIScramblerStrength == -1) )
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  else
  {
    Data = CG_Omnvar_GetData((LocalClientNum_t)v7, m_omnvarIndexUIScramblerStrength);
    Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexUIScramblerStrength);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
      __debugbreak();
    v11 = __CFADD__(Data->current.integer, Def->minvalue) || Data->current.integer + Def->minvalue == 0;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm6, xmm0, cs:__real@3e4ccccd
    }
  }
  __asm
  {
    vcomiss xmm6, xmm7
    vmovaps xmm7, [rsp+78h+var_38]
  }
  if ( v11 )
  {
    s_scramblerStartTime[v7] = -1;
    s_scramblerDuration[v7] = -1;
    s_scramblerRecoveryStartTime[v7] = -1;
    s_scramblerRecoveryDuration[v7] = -1;
    if ( v7 < 2 )
    {
      s_isScramblingActive[v7] = 0;
      goto LABEL_27;
    }
LABEL_31:
    j___report_rangecheckfailure(v9);
    JUMPOUT(0x141C3F4E7i64);
  }
  if ( s_scramblerStartTime[v7] == -1 )
  {
    time = cgameGlob->time;
    s_scramblerStartTime[v7] = time;
    pHoldrand = time;
    BG_srand(&pHoldrand);
    v20 = DCONST_DVARINT_cg_draw_scrambler_max_flicker_time;
    if ( !DCONST_DVARINT_cg_draw_scrambler_max_flicker_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw_scrambler_max_flicker_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    integer = v20->current.integer;
    *(double *)&_XMM0 = BG_random(&pHoldrand);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vmulss  xmm0, xmm0, xmm1
      vdivss  xmm2, xmm0, xmm6
      vcvttss2si eax, xmm2
    }
    s_scramblerDuration[v7] = _EAX;
    s_scramblerRecoveryDuration[v7] = integer - _EAX;
  }
  v27 = cgameGlob->time;
  if ( s_scramblerStartTime[v7] + s_scramblerDuration[v7] <= v27 )
  {
    if ( s_scramblerRecoveryStartTime[v7] == -1 )
    {
      if ( v7 >= 2 )
        goto LABEL_31;
      s_isScramblingActive[v7] = 0;
      s_scramblerRecoveryStartTime[v7] = v27;
    }
  }
  else
  {
    s_isScramblingActive[v7] = 1;
  }
  v28 = s_scramblerRecoveryStartTime[v7];
  if ( v28 != -1 && s_scramblerRecoveryDuration[v7] + v28 < v27 )
    CG_Draw_ResetScramblerData((LocalClientNum_t)v7);
LABEL_27:
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
CalculateDetailedFpsTimes
==============
*/
void CalculateDetailedFpsTimes(const unsigned __int64 *pTimes, const int frameCount, unsigned __int64 *rMinTimeUSec, unsigned __int64 *rMaxTimeUSec, unsigned __int64 *rTotalUSec, float *rVariance)
{
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  signed __int64 v16; 
  const unsigned __int64 *v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  __int64 *v31; 
  unsigned __int64 v32; 

  v9 = 0i64;
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  v10 = frameCount;
  v14 = -1i64;
  v15 = 0i64;
  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 808, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  v16 = 0i64;
  if ( (int)v10 > 0 )
  {
    v17 = pTimes;
    v18 = (unsigned int)v10;
    do
    {
      v19 = *v17++;
      v16 += v19;
      v20 = v19;
      if ( v14 <= v19 )
        v20 = v14;
      v14 = v20;
      if ( v15 >= v19 )
        v19 = v15;
      v15 = v19;
      --v18;
    }
    while ( v18 );
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vxorps  xmm2, xmm2, xmm2
    vdivss  xmm6, xmm0, xmm1
    vmovss  xmm1, cs:__real@5f800000
    vcvtsi2ss xmm2, xmm2, r9
  }
  if ( v16 < 0 )
    __asm { vaddss  xmm2, xmm2, xmm1 }
  __asm
  {
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm3, xmm2, xmm6
    vxorps  xmm2, xmm2, xmm2
  }
  if ( v10 >= 4 )
  {
    v31 = (__int64 *)(pTimes + 2);
    v32 = ((unsigned __int64)(v10 - 4) >> 2) + 1;
    v9 = 4 * v32;
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( *(v31 - 2) < 0 )
        __asm { vaddss  xmm0, xmm0, xmm1 }
      __asm
      {
        vsubss  xmm0, xmm0, xmm3
        vandps  xmm0, xmm0, xmm4
        vaddss  xmm5, xmm0, xmm2
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, rax
      }
      if ( *(v31 - 1) < 0 )
        __asm { vaddss  xmm2, xmm2, xmm1 }
      __asm
      {
        vsubss  xmm0, xmm2, xmm3
        vandps  xmm0, xmm0, xmm4
        vxorps  xmm2, xmm2, xmm2
        vaddss  xmm5, xmm5, xmm0
        vcvtsi2ss xmm2, xmm2, rax
      }
      if ( *v31 < 0 )
        __asm { vaddss  xmm2, xmm2, xmm1 }
      __asm
      {
        vsubss  xmm0, xmm2, xmm3
        vandps  xmm0, xmm0, xmm4
        vxorps  xmm2, xmm2, xmm2
        vaddss  xmm5, xmm5, xmm0
        vcvtsi2ss xmm2, xmm2, rax
      }
      if ( v31[1] < 0 )
        __asm { vaddss  xmm2, xmm2, xmm1 }
      __asm { vsubss  xmm0, xmm2, xmm3 }
      v31 += 4;
      __asm
      {
        vandps  xmm0, xmm0, xmm4
        vaddss  xmm2, xmm5, xmm0
      }
      --v32;
    }
    while ( v32 );
  }
  while ( v9 < v10 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (pTimes[v9] & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm1 }
    __asm { vsubss  xmm0, xmm0, xmm3 }
    ++v9;
    __asm
    {
      vandps  xmm0, xmm0, xmm4
      vaddss  xmm2, xmm2, xmm0
    }
  }
  __asm
  {
    vmulss  xmm0, xmm2, xmm6
    vmovaps xmm6, [rsp+58h+var_28]
  }
  if ( !v16 )
    v16 = 1i64;
  if ( !v14 )
    v14 = 1i64;
  *rMinTimeUSec = v14;
  *rMaxTimeUSec = v15;
  *rTotalUSec = v16;
  _RAX = rVariance;
  __asm { vmovss  dword ptr [rax], xmm0 }
}

/*
==============
CgDrawSystem::DrawChangeZoomHint
==============
*/
void CgDrawSystem::DrawChangeZoomHint(CgDrawSystem *this, LocalClientNum_t localClientNum, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  const dvar_t *v9; 
  CgWeaponMap *Instance; 
  playerState_s *p_predictedPlayerState; 
  char v19; 
  char v20; 
  bool v21; 
  CgWeaponMap *v22; 
  bool IsGamepadEnabled; 
  const char *v24; 
  const char *v25; 
  const char *v28; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float forceNoBacking; 
  float v49; 
  Weapon r_weapon; 
  char result[256]; 

  v9 = DVARBOOL_cg_drawZoomHint;
  _R15 = rect;
  if ( !DVARBOOL_cg_drawZoomHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawZoomHint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
    _RAX = BG_GetViewmodelWeapon(Instance, p_predictedPlayerState);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+208h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+208h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+208h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    *(double *)&_XMM0 = BG_WeaponADSFractionAffectedByReload(Instance, p_predictedPlayerState);
    __asm { vucomiss xmm0, cs:__real@3f800000 }
    v20 = v19;
    if ( r_weapon.weaponIdx )
    {
      if ( v20 )
      {
        v21 = BG_UsingAlternate(p_predictedPlayerState);
        v22 = CgWeaponMap::GetInstance(localClientNum);
        if ( BG_ADSZoomCount(v22, p_predictedPlayerState, &r_weapon, v21) > 1 )
        {
          __asm
          {
            vmovaps [rsp+208h+var_38], xmm6
            vmovaps [rsp+208h+var_48], xmm7
            vmovaps [rsp+208h+var_58], xmm8
          }
          UI_GetKeyBindLocalizedString(localClientNum, "+changezoom", result, 0x100ui64, BYTE_VALUE, 0, 0);
          IsGamepadEnabled = CL_Input_IsGamepadEnabled(localClientNum);
          v24 = "PLATFORM/CHANGE_ZOOM";
          if ( !IsGamepadEnabled )
            v24 = "PLATFORM/CHANGE_ZOOM_KBM";
          v25 = UI_SafeTranslateString(v24);
          __asm
          {
            vmovss  xmm8, [rsp+208h+fontscale]
            vmovaps xmm3, xmm8; scale
          }
          v28 = UI_ReplaceConversionString(v25, result);
          UI_TextWidth(v28, 0, font, *(float *)&_XMM3);
          vertAlign = _R15->vertAlign;
          horzAlign = _R15->horzAlign;
          __asm
          {
            vmovss  xmm6, dword ptr [r15+4]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm0, xmm0, cs:__real@3f000000
            vaddss  xmm2, xmm0, cs:__real@3f000000
            vxorps  xmm0, xmm0, xmm0
            vroundss xmm4, xmm0, xmm2, 1
            vmovss  xmm0, dword ptr [r15]
            vcvttss2si eax, xmm4
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vsubss  xmm7, xmm0, xmm1
          }
          ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
          __asm
          {
            vmovss  [rsp+208h+var_1C8], xmm8
            vmovss  dword ptr [rsp+208h+forceNoBacking], xmm6
            vmovss  dword ptr [rsp+208h+fmt], xmm7
          }
          UI_DrawText(ActivePlacement, v28, 0x7FFFFFFF, font, fmt, forceNoBacking, horzAlign, vertAlign, v49, &colorWhite, textStyle);
          __asm
          {
            vmovaps xmm8, [rsp+208h+var_58]
            vmovaps xmm7, [rsp+208h+var_48]
            vmovaps xmm6, [rsp+208h+var_38]
          }
        }
      }
    }
  }
}

/*
==============
CgDrawSystem::DrawThermalToggleHint
==============
*/

void __fastcall CgDrawSystem::DrawThermalToggleHint(CgDrawSystem *this, const rectDef_s *rect, GfxFont *font, double fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 
  __int64 m_localClientNum; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v15; 
  bool v20; 
  LocalClientNum_t v21; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const char *v24; 
  const char *v26; 
  int vertAlign; 
  int horzAlign; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float forceNoBacking; 
  float v47; 
  usercmd_s ucmd; 
  Weapon r_weapon; 
  char result[256]; 

  __asm { vmovaps [rsp+328h+var_68], xmm8 }
  _R15 = rect;
  __asm { vmovaps xmm8, xmm3 }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  m_localClientNum = this->m_localClientNum;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v15 = CgWeaponMap::ms_instance[m_localClientNum];
  _RAX = BG_GetViewmodelWeapon(v15, p_predictedPlayerState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+328h+r_weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsp+328h+r_weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsp+328h+r_weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  if ( BG_InADS(p_predictedPlayerState) && BG_IsThermalEnabled(v15, &r_weapon, p_predictedPlayerState) )
  {
    v20 = BG_UsingAlternate(p_predictedPlayerState);
    if ( BG_CanThermalToggle(&r_weapon, v20) )
    {
      v21 = this->m_localClientNum;
      __asm
      {
        vmovaps [rsp+328h+var_48], xmm6
        vmovaps [rsp+328h+var_58], xmm7
      }
      Client = ClActiveClient::GetClient(v21);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      CL_GetUserCmd(this->m_localClientNum, CmdNumber, &ucmd);
      UI_GetKeyBindLocalizedString(this->m_localClientNum, "+melee", result, 0x100ui64, BYTE_VALUE, 0, 0);
      v24 = UI_SafeTranslateString("PLATFORM/THERMAL_TOGGLE");
      __asm { vmovaps xmm3, xmm8; scale }
      v26 = UI_ReplaceConversionString(v24, result);
      UI_TextWidth(v26, 0, font, *(float *)&_XMM3);
      vertAlign = _R15->vertAlign;
      horzAlign = _R15->horzAlign;
      __asm
      {
        vmovss  xmm6, dword ptr [r15+4]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3f000000
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vmovss  xmm0, dword ptr [r15]
        vcvttss2si eax, xmm4
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vsubss  xmm7, xmm0, xmm1
      }
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      __asm
      {
        vmovss  [rsp+328h+var_2E8], xmm8
        vmovss  dword ptr [rsp+328h+forceNoBacking], xmm6
        vmovss  dword ptr [rsp+328h+fmt], xmm7
      }
      UI_DrawText(ActivePlacement, v26, 0x7FFFFFFF, font, fmt, forceNoBacking, horzAlign, vertAlign, v47, &colorWhite, textStyle);
      __asm
      {
        vmovaps xmm7, [rsp+328h+var_58]
        vmovaps xmm6, [rsp+328h+var_48]
      }
    }
  }
  __asm { vmovaps xmm8, [rsp+328h+var_68] }
}

/*
==============
CgDrawSystem::FadeHudMenu
==============
*/
float CgDrawSystem::FadeHudMenu(CgDrawSystem *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  cg_t *LocalClientGlobals; 
  __int64 v18; 
  vec4_t outColor; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rdx+28h]
  }
  if ( (unsigned __int64)&v18 != _security_cookie )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    _EAX = CG_DrawTools_FadeColor(LocalClientGlobals->time, displayStartTime, duration, 700, &outColor);
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, dword ptr [rsp+68h+var_38+0Ch]
      vblendvps xmm0, xmm1, xmm6, xmm2
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawSystem::OwnerDrawCommon
==============
*/
void CgDrawSystem::OwnerDrawCommon(CgDrawSystem *this, const rectDef_s *rect, int ownerDrawType, GfxFont *font, float scale, const vec4_t *color, float textX, float textY, int textStyle)
{
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  v9 = ownerDrawType - 70;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 5;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 4 )
          {
            __asm { vmovss  xmm3, [rsp+scale]; scale }
            CG_ContextMount_DrawHint((const LocalClientNum_t)this->m_localClientNum, rect, font, *(const float *)&_XMM3, textStyle);
          }
        }
        else
        {
          __asm { vmovss  xmm3, [rsp+scale] }
          ((void (__fastcall *)(CgDrawSystem *, const rectDef_s *, GfxFont *))this->DrawHybridToggleHint)(this, rect, font);
        }
      }
      else
      {
        __asm { vmovss  xmm3, [rsp+scale]; fontscale }
        CgDrawSystem::DrawThermalToggleHint(this, rect, font, *(float *)&_XMM3, textStyle);
      }
    }
    else
    {
      __asm { vmovss  xmm3, [rsp+scale] }
      ((void (__fastcall *)(CgDrawSystem *, const rectDef_s *, GfxFont *))this->DrawHoldBreathHint)(this, rect, font);
    }
  }
  else
  {
    CgDrawSystem::DrawChangeZoomHint(this, this->m_localClientNum, rect, font, scale, textStyle);
  }
}

/*
==============
CgDrawSystem::ShouldDrawAnything
==============
*/
bool CgDrawSystem::ShouldDrawAnything(CgDrawSystem *this, const cg_t *const cgameGlob)
{
  const dvar_t *v2; 

  if ( cgameGlob->predictedPlayerState.pm_type == 4 )
    return 0;
  v2 = DVARBOOL_cg_draw2D;
  if ( !DVARBOOL_cg_draw2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw2D") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled;
}

