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
bool CG_Draw_CheckPlayerForLowAmmo(const cg_t *cgameGlob)
{
  const Weapon *SelectedWeapon; 
  playerState_s *p_predictedPlayerState; 
  bool v4; 
  CgWeaponMap *Instance; 
  playerState_s *v7; 
  const BgWeaponMap *v8; 
  int TotalAmmoReserve; 
  int AmmoPlayerMax; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 199, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  SelectedWeapon = CG_Draw_GetSelectedWeapon(cgameGlob);
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 174, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  v4 = BG_UsingAlternate(&cgameGlob->predictedPlayerState);
  if ( !SelectedWeapon->weaponIdx )
    return 0;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
  v7 = &cgameGlob->predictedPlayerState;
  v8 = Instance;
  TotalAmmoReserve = BG_GetTotalAmmoReserve(Instance, v7, SelectedWeapon, v4);
  if ( TotalAmmoReserve > 999 )
    TotalAmmoReserve = 999;
  AmmoPlayerMax = BG_GetAmmoPlayerMax(v8, p_predictedPlayerState, SelectedWeapon, v4, &NULL_WEAPON);
  if ( AmmoPlayerMax <= 999 )
  {
    if ( AmmoPlayerMax < 0 )
      return 0;
  }
  else
  {
    AmmoPlayerMax = 999;
  }
  return (float)TotalAmmoReserve <= (float)((float)AmmoPlayerMax * 0.2);
}

/*
==============
CG_Draw_CheckPlayerForLowAmmoSpecific
==============
*/
bool CG_Draw_CheckPlayerForLowAmmoSpecific(const cg_t *cgameGlob, const Weapon *weapon)
{
  playerState_s *p_predictedPlayerState; 
  bool v5; 
  CgWeaponMap *Instance; 
  playerState_s *v7; 
  const BgWeaponMap *v8; 
  int TotalAmmoReserve; 
  int AmmoPlayerMax; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 174, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  v5 = BG_UsingAlternate(&cgameGlob->predictedPlayerState);
  if ( !weapon->weaponIdx )
    return 0;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
  v7 = &cgameGlob->predictedPlayerState;
  v8 = Instance;
  TotalAmmoReserve = BG_GetTotalAmmoReserve(Instance, v7, weapon, v5);
  if ( TotalAmmoReserve > 999 )
    TotalAmmoReserve = 999;
  AmmoPlayerMax = BG_GetAmmoPlayerMax(v8, p_predictedPlayerState, weapon, v5, &NULL_WEAPON);
  if ( AmmoPlayerMax <= 999 )
  {
    if ( AmmoPlayerMax < 0 )
      return 0;
  }
  else
  {
    AmmoPlayerMax = 999;
  }
  return (float)TotalAmmoReserve <= (float)((float)AmmoPlayerMax * 0.2);
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
  int v12; 
  int v13; 
  int ClipSize; 
  int ClipLowAmmo; 
  __int64 v17; 
  AmmoStore result; 
  AmmoStore r_clip2; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 213, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  weaponIdx = weapon->weaponIdx;
  p_predictedPlayerState = &cgameGlob->predictedPlayerState;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v17) = weapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v17, bg_lastParsedWeaponIndex) )
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
  r_clip2 = *BG_AmmoStoreForWeapon(&result, weapon, isAlternate);
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1229, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v12 = 0;
  if ( BG_HasLadderHand(p_predictedPlayerState) && hand == WEAPON_HAND_LEFT )
    hand = WEAPON_HAND_DEFAULT;
  v13 = 0;
  while ( !BG_IsClipCompatible(&p_predictedPlayerState->weapCommon.ammoInClip[v13].clipIndex, &r_clip2) )
  {
    if ( (unsigned int)++v13 >= 0xF )
      goto LABEL_25;
  }
  v12 = p_predictedPlayerState->weapCommon.ammoInClip[v13].ammoCount[hand];
LABEL_25:
  if ( v12 < 0 )
    return 0;
  if ( v12 > 999 )
    v12 = 999;
  ClipSize = BG_GetClipSize(p_predictedPlayerState, weapon, isAlternate);
  if ( ClipSize > 999 )
    ClipSize = 999;
  ClipLowAmmo = BG_GetClipLowAmmo(p_predictedPlayerState, weapon, isAlternate);
  return ClipSize > 0 && v12 <= ClipLowAmmo;
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
  Con_DrawErrors(localClientNum, 2, 300, charHeight, 1.0);
}

/*
==============
CG_Draw_GetDetailedFPSTime
==============
*/
void CG_Draw_GetDetailedFPSTime(float *minTimeMSec, float *maxTimeMSec, float *totalMSec, float *varianceMSec, int *fpsMin, int *fpsMax, int *fps, const unsigned __int64 *pTimes, unsigned int frameCount)
{
  unsigned int v13; 
  signed __int64 v14; 
  signed __int64 v17; 
  signed __int64 v20; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v29; 
  __int128 v33; 
  unsigned __int64 rMaxTimeUSec; 
  unsigned __int64 rMinTimeUSec; 
  unsigned __int64 rTotalUSec; 

  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 856, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  v13 = frameCount;
  if ( *(float *)&frameCount == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 857, ASSERT_TYPE_ASSERT, "(frameCount)", (const char *)&queryFormat, "frameCount") )
    __debugbreak();
  CalculateDetailedFpsTimes(pTimes, v13, &rMinTimeUSec, &rMaxTimeUSec, &rTotalUSec, (float *)&frameCount);
  v14 = rMaxTimeUSec;
  if ( fpsMin )
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    *fpsMin = (int)*(float *)&_XMM4;
  }
  v17 = rMinTimeUSec;
  if ( fpsMax )
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    *fpsMax = (int)*(float *)&_XMM4;
  }
  v20 = rTotalUSec;
  if ( fps )
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    *fps = (int)*(float *)&_XMM4;
  }
  if ( minTimeMSec )
  {
    v23 = (float)v17;
    if ( v17 < 0 )
    {
      v24 = (float)v17;
      v23 = v24 + 1.8446744e19;
    }
    *minTimeMSec = v23 * 0.001;
  }
  if ( maxTimeMSec )
  {
    v25 = (float)v14;
    if ( v14 < 0 )
    {
      v26 = (float)v14;
      v25 = v26 + 1.8446744e19;
    }
    *maxTimeMSec = v25 * 0.001;
  }
  if ( varianceMSec )
    *varianceMSec = 0.001 * *(float *)&frameCount;
  if ( totalMSec )
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rcx }
    if ( v20 < 0 )
    {
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v29 = *(double *)&_XMM1 + 1.844674407370955e19;
      _XMM1 = v29;
    }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    *((_QWORD *)&v33 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v33 = *(double *)&_XMM1 / *(double *)&_XMM0;
    _XMM1 = v33;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    *totalMSec = *(float *)&_XMM2;
  }
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
  __int64 v10; 
  __int64 v11; 
  signed int v12; 
  __int64 v15; 
  __int64 v19; 
  const unsigned __int64 *v20; 
  unsigned int v21; 
  __int64 v22; 
  __int128 v27; 
  __int128 v31; 

  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 941, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  if ( !frameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 942, ASSERT_TYPE_ASSERT, "(frameCount)", (const char *)&queryFormat, "frameCount") )
    __debugbreak();
  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 928, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  v10 = 0i64;
  v11 = 0i64;
  v12 = 0;
  if ( (int)frameCount > 0 && frameCount >= 4 )
  {
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    v15 = 0i64;
    do
    {
      __asm
      {
        vpaddq  xmm1, xmm1, xmmword ptr [rdi+rax*8]
        vpaddq  xmm2, xmm2, xmmword ptr [rdi+rax*8+10h]
      }
      v15 += 4i64;
      v12 += 4;
    }
    while ( v15 < (int)(frameCount - (frameCount & 0x80000003)) );
    __asm
    {
      vpaddq  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddq  xmm1, xmm1, xmm0
    }
    v11 = _XMM1;
  }
  v19 = 0i64;
  if ( v12 < (int)frameCount )
  {
    if ( (int)(frameCount - v12) >= 2 )
    {
      v20 = &pTimes[v12];
      v21 = ((frameCount - v12 - 2) >> 1) + 1;
      v22 = v21;
      v12 += 2 * v21;
      do
      {
        v10 += *v20;
        v19 += v20[1];
        v20 += 2;
        --v22;
      }
      while ( v22 );
    }
    if ( v12 < (int)frameCount )
      v11 += pTimes[v12];
    v11 += v19 + v10;
  }
  if ( !v11 )
    v11 = 1i64;
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  *fps = (int)*(float *)&_XMM4;
  if ( pTotalMSec )
  {
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rdx }
    if ( v11 < 0 )
    {
      *((_QWORD *)&v27 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v27 = *(double *)&_XMM1 + 1.844674407370955e19;
      _XMM1 = v27;
    }
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v31 = *(double *)&_XMM1 / *(double *)&_XMM0;
    _XMM1 = v31;
    __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
    *pTotalMSec = *(float *)&_XMM2;
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
  __int64 v11; 
  __int128 v16; 
  __int128 v18; 

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
  }
  v11 = _XMM1;
  if ( !(_QWORD)_XMM1 )
    v11 = 1i64;
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  *fps = (int)*(float *)&_XMM1;
  if ( pTotalMSec )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    if ( v11 < 0 )
    {
      *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v16 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v16;
    }
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v18 = *(double *)&_XMM0 * 0.00003125;
    _XMM0 = v18;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *pTotalMSec = *(float *)&_XMM1;
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
  __int64 v11; 
  __int128 v16; 
  __int128 v18; 

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
  }
  v11 = _XMM1;
  if ( !(_QWORD)_XMM1 )
    v11 = 1i64;
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  *fps = (int)*(float *)&_XMM1;
  if ( pTotalMSec )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    if ( v11 < 0 )
    {
      *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v16 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v16;
    }
    *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v18 = *(double *)&_XMM0 * 0.00003125;
    _XMM0 = v18;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *pTotalMSec = *(float *)&_XMM1;
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

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
    return 0.0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  m_omnvarIndexUIScramblerStrength = LocalClientGlobals->m_omnvarIndexUIScramblerStrength;
  if ( m_omnvarIndexUIScramblerStrength == -1 )
    return 0.0;
  Data = CG_Omnvar_GetData(localClientNum, m_omnvarIndexUIScramblerStrength);
  Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexUIScramblerStrength);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
    __debugbreak();
  return (float)(Data->current.integer + Def->minvalue) * 0.2;
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
  const dvar_t *v6; 
  CgWeaponMap *Instance; 
  double v12; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const char *v15; 
  const char *v16; 
  int vertAlign; 
  int horzAlign; 
  float y; 
  float v22; 
  const ScreenPlacement *ActivePlacement; 
  usercmd_s ucmd; 
  char result[256]; 

  v6 = DVARBOOL_cg_drawBreathHint;
  if ( !DVARBOOL_cg_drawBreathHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawBreathHint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 2u) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    v12 = BG_WeaponADSFractionAffectedByReload(Instance, ps);
    if ( *(float *)&v12 == 1.0 )
    {
      if ( BG_HasHoldBreathAbility(Instance, ps) )
      {
        Client = ClActiveClient::GetClient(localClientNum);
        CmdNumber = ClActiveClient_GetCmdNumber(Client);
        CL_GetUserCmd(localClientNum, CmdNumber, &ucmd);
        if ( (ucmd.buttons & 0x800) == 0 && !BG_HoldingBreath(ps) )
        {
          UI_GetKeyBindLocalizedString(localClientNum, "+holdbreath", result, 0x100ui64, BYTE_VALUE, 0, 0);
          v15 = UI_SafeTranslateString("PLATFORM/HOLD_BREATH");
          v16 = UI_ReplaceConversionString(v15, result);
          UI_TextWidth(v16, 0, font, fontscale);
          vertAlign = rect->vertAlign;
          horzAlign = rect->horzAlign;
          y = rect->y;
          _XMM0 = 0i64;
          __asm { vroundss xmm4, xmm0, xmm2, 1 }
          v22 = rect->x - (float)(int)*(float *)&_XMM4;
          ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
          UI_DrawText(ActivePlacement, v16, 0x7FFFFFFF, font, v22, y, horzAlign, vertAlign, fontscale, &colorWhite, textStyle);
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
  __int64 v6; 
  bool v10; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const char *v13; 
  const char *v14; 
  int vertAlign; 
  int horzAlign; 
  float y; 
  float v20; 
  const ScreenPlacement *ActivePlacement; 
  usercmd_s ucmd; 
  Weapon r_weapon; 
  char result[256]; 

  v6 = localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  r_weapon = *BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v6], ps);
  if ( BG_InADS(ps) )
  {
    v10 = BG_UsingAlternate(ps);
    if ( BG_CanHybridToggle(ps, &r_weapon, v10) )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v6);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      CL_GetUserCmd((LocalClientNum_t)v6, CmdNumber, &ucmd);
      UI_GetKeyBindLocalizedString((LocalClientNum_t)v6, "togglehybrid", result, 0x100ui64, BYTE_VALUE, 0, 0);
      v13 = UI_SafeTranslateString("PLATFORM/HYBRID_TOGGLE");
      v14 = UI_ReplaceConversionString(v13, result);
      UI_TextWidth(v14, 0, font, fontscale);
      vertAlign = rect->vertAlign;
      horzAlign = rect->horzAlign;
      y = rect->y;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v20 = rect->x - (float)(int)*(float *)&_XMM4;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v6);
      UI_DrawText(ActivePlacement, v14, 0x7FFFFFFF, font, v20, y, horzAlign, vertAlign, fontscale, &colorWhite, textStyle);
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
    Con_DrawMiniConsole(localClientNum, 2, 4, 1.0);
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
  unsigned __int64 v3; 
  __int64 v4; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int m_omnvarIndexUIScramblerStrength; 
  OmnvarData *Data; 
  const OmnvarDef *Def; 
  float v9; 
  int time; 
  const dvar_t *v11; 
  int integer; 
  double v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int pHoldrand; 

  v3 = localClientNum;
  CG_Draw_InitScramblerDataIfNeeded();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) || (LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3), m_omnvarIndexUIScramblerStrength = LocalClientGlobals->m_omnvarIndexUIScramblerStrength, m_omnvarIndexUIScramblerStrength == -1) )
  {
    v9 = 0.0;
  }
  else
  {
    Data = CG_Omnvar_GetData((LocalClientNum_t)v3, m_omnvarIndexUIScramblerStrength);
    Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexUIScramblerStrength);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
      __debugbreak();
    v9 = (float)(Data->current.integer + Def->minvalue) * 0.2;
  }
  if ( v9 <= 0.0 )
  {
    s_scramblerStartTime[v3] = -1;
    s_scramblerDuration[v3] = -1;
    s_scramblerRecoveryStartTime[v3] = -1;
    s_scramblerRecoveryDuration[v3] = -1;
    if ( v3 < 2 )
    {
      s_isScramblingActive[v3] = 0;
      return;
    }
LABEL_31:
    j___report_rangecheckfailure(v4);
    JUMPOUT(0x141C3F4E7i64);
  }
  if ( s_scramblerStartTime[v3] == -1 )
  {
    time = cgameGlob->time;
    s_scramblerStartTime[v3] = time;
    pHoldrand = time;
    BG_srand(&pHoldrand);
    v11 = DCONST_DVARINT_cg_draw_scrambler_max_flicker_time;
    if ( !DCONST_DVARINT_cg_draw_scrambler_max_flicker_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw_scrambler_max_flicker_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    v13 = BG_random(&pHoldrand);
    v14 = (int)(float)((float)(*(float *)&v13 * (float)integer) / v9);
    s_scramblerDuration[v3] = v14;
    s_scramblerRecoveryDuration[v3] = integer - v14;
  }
  v15 = cgameGlob->time;
  if ( s_scramblerStartTime[v3] + s_scramblerDuration[v3] <= v15 )
  {
    if ( s_scramblerRecoveryStartTime[v3] == -1 )
    {
      if ( v3 >= 2 )
        goto LABEL_31;
      s_isScramblingActive[v3] = 0;
      s_scramblerRecoveryStartTime[v3] = v15;
    }
  }
  else
  {
    s_isScramblingActive[v3] = 1;
  }
  v16 = s_scramblerRecoveryStartTime[v3];
  if ( v16 != -1 && s_scramblerRecoveryDuration[v3] + v16 < v15 )
    CG_Draw_ResetScramblerData((LocalClientNum_t)v3);
}

/*
==============
CalculateDetailedFpsTimes
==============
*/
void CalculateDetailedFpsTimes(const unsigned __int64 *pTimes, const int frameCount, unsigned __int64 *rMinTimeUSec, unsigned __int64 *rMaxTimeUSec, unsigned __int64 *rTotalUSec, float *rVariance)
{
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  signed __int64 v13; 
  const unsigned __int64 *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int128 v22; 
  __int64 *v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  __int128 v26; 
  __int128 v27; 
  __int64 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  float v36; 
  float v37; 
  __int64 v38; 
  __int128 v39; 
  __int128 v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  __int64 v44; 
  float v45; 
  float v46; 
  __int128 v47; 

  v6 = 0i64;
  v7 = frameCount;
  v11 = -1i64;
  v12 = 0i64;
  if ( !pTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.cpp", 808, ASSERT_TYPE_ASSERT, "(pTimes)", (const char *)&queryFormat, "pTimes") )
    __debugbreak();
  v13 = 0i64;
  if ( (int)v7 > 0 )
  {
    v14 = pTimes;
    v15 = (unsigned int)v7;
    do
    {
      v16 = *v14++;
      v13 += v16;
      v17 = v16;
      if ( v11 <= v16 )
        v17 = v11;
      v11 = v17;
      if ( v12 >= v16 )
        v16 = v12;
      v12 = v16;
      --v15;
    }
    while ( v15 );
  }
  v18 = 1.0 / (float)(int)v7;
  v19 = (float)v13;
  if ( v13 < 0 )
  {
    v20 = (float)v13;
    v19 = v20 + 1.8446744e19;
  }
  v21 = v19 * v18;
  v22 = 0i64;
  if ( v7 >= 4 )
  {
    v23 = (__int64 *)(pTimes + 2);
    v24 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
    v6 = 4 * v24;
    do
    {
      v25 = *(v23 - 2);
      v27 = 0i64;
      *(float *)&v27 = (float)v25;
      v26 = v27;
      if ( v25 < 0 )
      {
        *(float *)&v27 = *(float *)&v27 + 1.8446744e19;
        v26 = v27;
      }
      v28 = *(v23 - 1);
      v29 = v26;
      *(float *)&v29 = *(float *)&v26 - v21;
      v31 = v29 & (unsigned int)_xmm;
      *(float *)&v31 = *(float *)&v31 + *(float *)&v22;
      v30 = v31;
      v32 = (float)v28;
      if ( v28 < 0 )
      {
        v33 = (float)v28;
        v32 = v33 + 1.8446744e19;
      }
      v35 = v30;
      *(float *)&v35 = *(float *)&v30 + COERCE_FLOAT(COERCE_UNSIGNED_INT(v32 - v21) & _xmm);
      v34 = v35;
      v36 = (float)*v23;
      if ( *v23 < 0 )
      {
        v37 = (float)*v23;
        v36 = v37 + 1.8446744e19;
      }
      v38 = v23[1];
      v40 = v34;
      *(float *)&v40 = *(float *)&v34 + COERCE_FLOAT(COERCE_UNSIGNED_INT(v36 - v21) & _xmm);
      v39 = v40;
      v41 = (float)v38;
      if ( v38 < 0 )
      {
        v42 = (float)v38;
        v41 = v42 + 1.8446744e19;
      }
      v23 += 4;
      v43 = v39;
      *(float *)&v43 = *(float *)&v39 + COERCE_FLOAT(COERCE_UNSIGNED_INT(v41 - v21) & _xmm);
      v22 = v43;
      --v24;
    }
    while ( v24 );
  }
  for ( ; v6 < v7; v22 = v47 )
  {
    v44 = pTimes[v6];
    v45 = (float)v44;
    if ( v44 < 0 )
    {
      v46 = (float)v44;
      v45 = v46 + 1.8446744e19;
    }
    ++v6;
    v47 = v22;
    *(float *)&v47 = *(float *)&v22 + COERCE_FLOAT(COERCE_UNSIGNED_INT(v45 - v21) & _xmm);
  }
  if ( !v13 )
    v13 = 1i64;
  if ( !v11 )
    v11 = 1i64;
  *rMinTimeUSec = v11;
  *rMaxTimeUSec = v12;
  *rTotalUSec = v13;
  *rVariance = *(float *)&v22 * v18;
}

/*
==============
CgDrawSystem::DrawChangeZoomHint
==============
*/
void CgDrawSystem::DrawChangeZoomHint(CgDrawSystem *this, LocalClientNum_t localClientNum, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  const dvar_t *v6; 
  CgWeaponMap *Instance; 
  playerState_s *p_predictedPlayerState; 
  double v12; 
  bool v13; 
  CgWeaponMap *v14; 
  bool IsGamepadEnabled; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  int vertAlign; 
  int horzAlign; 
  float y; 
  float v24; 
  const ScreenPlacement *ActivePlacement; 
  Weapon r_weapon; 
  char result[256]; 

  v6 = DVARBOOL_cg_drawZoomHint;
  if ( !DVARBOOL_cg_drawZoomHint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawZoomHint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
    r_weapon = *BG_GetViewmodelWeapon(Instance, p_predictedPlayerState);
    v12 = BG_WeaponADSFractionAffectedByReload(Instance, p_predictedPlayerState);
    if ( r_weapon.weaponIdx )
    {
      if ( *(float *)&v12 == 1.0 )
      {
        v13 = BG_UsingAlternate(p_predictedPlayerState);
        v14 = CgWeaponMap::GetInstance(localClientNum);
        if ( BG_ADSZoomCount(v14, p_predictedPlayerState, &r_weapon, v13) > 1 )
        {
          UI_GetKeyBindLocalizedString(localClientNum, "+changezoom", result, 0x100ui64, BYTE_VALUE, 0, 0);
          IsGamepadEnabled = CL_Input_IsGamepadEnabled(localClientNum);
          v16 = "PLATFORM/CHANGE_ZOOM";
          if ( !IsGamepadEnabled )
            v16 = "PLATFORM/CHANGE_ZOOM_KBM";
          v17 = UI_SafeTranslateString(v16);
          v18 = UI_ReplaceConversionString(v17, result);
          UI_TextWidth(v18, 0, font, fontscale);
          vertAlign = rect->vertAlign;
          horzAlign = rect->horzAlign;
          y = rect->y;
          _XMM0 = 0i64;
          __asm { vroundss xmm4, xmm0, xmm2, 1 }
          v24 = rect->x - (float)(int)*(float *)&_XMM4;
          ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
          UI_DrawText(ActivePlacement, v18, 0x7FFFFFFF, font, v24, y, horzAlign, vertAlign, fontscale, &colorWhite, textStyle);
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
void CgDrawSystem::DrawThermalToggleHint(CgDrawSystem *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 
  __int64 m_localClientNum; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v11; 
  bool v12; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const char *v15; 
  const char *v16; 
  int vertAlign; 
  int horzAlign; 
  float y; 
  float v22; 
  const ScreenPlacement *ActivePlacement; 
  usercmd_s ucmd; 
  Weapon r_weapon; 
  char result[256]; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  m_localClientNum = this->m_localClientNum;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = CgWeaponMap::ms_instance[m_localClientNum];
  r_weapon = *BG_GetViewmodelWeapon(v11, p_predictedPlayerState);
  if ( BG_InADS(p_predictedPlayerState) && BG_IsThermalEnabled(v11, &r_weapon, p_predictedPlayerState) )
  {
    v12 = BG_UsingAlternate(p_predictedPlayerState);
    if ( BG_CanThermalToggle(&r_weapon, v12) )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      CL_GetUserCmd(this->m_localClientNum, CmdNumber, &ucmd);
      UI_GetKeyBindLocalizedString(this->m_localClientNum, "+melee", result, 0x100ui64, BYTE_VALUE, 0, 0);
      v15 = UI_SafeTranslateString("PLATFORM/THERMAL_TOGGLE");
      v16 = UI_ReplaceConversionString(v15, result);
      UI_TextWidth(v16, 0, font, fontscale);
      vertAlign = rect->vertAlign;
      horzAlign = rect->horzAlign;
      y = rect->y;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v22 = rect->x - (float)(int)*(float *)&_XMM4;
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
      UI_DrawText(ActivePlacement, v16, 0x7FFFFFFF, font, v22, y, horzAlign, vertAlign, fontscale, &colorWhite, textStyle);
    }
  }
}

/*
==============
CgDrawSystem::FadeHudMenu
==============
*/
float CgDrawSystem::FadeHudMenu(CgDrawSystem *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  cg_t *LocalClientGlobals; 
  vec4_t outColor; 

  if ( fadeDvar->current.value == 0.0 )
    return FLOAT_1_0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _XMM0 = CG_DrawTools_FadeColor(LocalClientGlobals->time, displayStartTime, duration, 700, &outColor);
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(outColor.v[3]);
  __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
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
            CG_ContextMount_DrawHint((const LocalClientNum_t)this->m_localClientNum, rect, font, scale, textStyle);
        }
        else
        {
          ((void (__fastcall *)(CgDrawSystem *, const rectDef_s *, GfxFont *))this->DrawHybridToggleHint)(this, rect, font);
        }
      }
      else
      {
        CgDrawSystem::DrawThermalToggleHint(this, rect, font, scale, textStyle);
      }
    }
    else
    {
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

