/*
==============
CgDrawSystemSP::IsHudEnabled
==============
*/

int __fastcall CgDrawSystemSP::IsHudEnabled(CgDrawSystemSP *this)
{
  return ?IsHudEnabled@CgDrawSystemSP@@MEBAHXZ(this);
}

/*
==============
CgDrawSystemSP::PreDraw2D
==============
*/

void __fastcall CgDrawSystemSP::PreDraw2D(CgDrawSystemSP *this)
{
  ?PreDraw2D@CgDrawSystemSP@@UEAAXXZ(this);
}

/*
==============
CG_DrawSP_Fade
==============
*/

void __fastcall CG_DrawSP_Fade(LocalClientNum_t localClientNum, int r, int g, int b, int a, int startTime, int duration)
{
  ?CG_DrawSP_Fade@@YAXW4LocalClientNum_t@@HHHHHH@Z(localClientNum, r, g, b, a, startTime, duration);
}

/*
==============
CgDrawSystemSP::SetHudElemDevString
==============
*/

void __fastcall CgDrawSystemSP::SetHudElemDevString(CgDrawSystemSP *this, int index, char *hudElemString, const int hudElemStringLength)
{
  ?SetHudElemDevString@CgDrawSystemSP@@UEBAXHQEADH@Z(this, index, hudElemString, hudElemStringLength);
}

/*
==============
CgDrawSystemSP::GenerateSceneVerts
==============
*/

void __fastcall CgDrawSystemSP::GenerateSceneVerts(CgDrawSystemSP *this)
{
  ?GenerateSceneVerts@CgDrawSystemSP@@UEBAXXZ(this);
}

/*
==============
CgDrawSystemSP::UpdateScissor
==============
*/

void __fastcall CgDrawSystemSP::UpdateScissor(CgDrawSystemSP *this)
{
  ?UpdateScissor@CgDrawSystemSP@@UEBAXXZ(this);
}

/*
==============
CgDrawSystemSP::IsHudMissionFailed
==============
*/

int __fastcall CgDrawSystemSP::IsHudMissionFailed(CgDrawSystemSP *this)
{
  return ?IsHudMissionFailed@CgDrawSystemSP@@UEBAHXZ(this);
}

/*
==============
CgDrawSystemSP::UpdateTimeScale
==============
*/

void __fastcall CgDrawSystemSP::UpdateTimeScale(CgDrawSystemSP *this)
{
  ?UpdateTimeScale@CgDrawSystemSP@@AEAAXXZ(this);
}

/*
==============
CgDrawSystemSP::AlterTimescale
==============
*/

void __fastcall CgDrawSystemSP::AlterTimescale(CgDrawSystemSP *this, int time, float startScale, float endScale)
{
  ?AlterTimescale@CgDrawSystemSP@@QEAAXHMM@Z(this, time, startScale, endScale);
}

/*
==============
CG_DrawSP_ArchiveState
==============
*/

void __fastcall CG_DrawSP_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?CG_DrawSP_ArchiveState@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
CgDrawSystemSP::OwnerDraw
==============
*/

void __fastcall CgDrawSystemSP::OwnerDraw(CgDrawSystemSP *this, rectDef_s *parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, GfxFont *font, float scale, const vec4_t *color, int textStyle, int textAlignMode)
{
  ?OwnerDraw@CgDrawSystemSP@@UEBAXUrectDef_s@@MMMMHHMMHPEAUGfxFont@@MAEBTvec4_t@@HH@Z(this, parentRect, x, y, w, h, horzAlign, vertAlign, text_x, text_y, ownerDraw, font, scale, color, textStyle, textAlignMode);
}

/*
==============
CgDrawSystemSP::Draw2D
==============
*/

void __fastcall CgDrawSystemSP::Draw2D(CgDrawSystemSP *this, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  ?Draw2D@CgDrawSystemSP@@UEAAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(this, cameraOrigin, cameraAxis);
}

/*
==============
CgDrawSystemSP::ShouldDrawCrosshair
==============
*/

bool __fastcall CgDrawSystemSP::ShouldDrawCrosshair(CgDrawSystemSP *this)
{
  return ?ShouldDrawCrosshair@CgDrawSystemSP@@UEBA_NXZ(this);
}

/*
==============
CgDrawSystemSP::ShouldDrawHud
==============
*/

int __fastcall CgDrawSystemSP::ShouldDrawHud(CgDrawSystemSP *this)
{
  return ?ShouldDrawHud@CgDrawSystemSP@@UEBAHXZ(this);
}

/*
==============
CG_DrawSP_DrawActive
==============
*/

void __fastcall CG_DrawSP_DrawActive(const LocalClientNum_t localClientNum, unsigned int drawType)
{
  ?CG_DrawSP_DrawActive@@YAXW4LocalClientNum_t@@I@Z(localClientNum, drawType);
}

/*
==============
CgDrawSystemSP::DrawHybridToggleHint
==============
*/

void __fastcall CgDrawSystemSP::DrawHybridToggleHint(CgDrawSystemSP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?DrawHybridToggleHint@CgDrawSystemSP@@MEBAXPEBUrectDef_s@@PEAUGfxFont@@MH@Z(this, rect, font, fontscale, textStyle);
}

/*
==============
CG_DrawSP_FlashFade
==============
*/

void __fastcall CG_DrawSP_FlashFade(const LocalClientNum_t localClientNum)
{
  ?CG_DrawSP_FlashFade@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystemSP::DrawHoldBreathHint
==============
*/

void __fastcall CgDrawSystemSP::DrawHoldBreathHint(CgDrawSystemSP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?DrawHoldBreathHint@CgDrawSystemSP@@MEBAXPEBUrectDef_s@@PEAUGfxFont@@MH@Z(this, rect, font, fontscale, textStyle);
}

/*
==============
CgDrawSystemSP::FadeHudMenu
==============
*/

double __fastcall CgDrawSystemSP::FadeHudMenu(CgDrawSystemSP *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  double result; 

  *(float *)&result = ?FadeHudMenu@CgDrawSystemSP@@UEBAMPEBUdvar_t@@HH@Z(this, fadeDvar, displayStartTime, duration);
  return result;
}

/*
==============
CgDrawSystemSP::AlterTimescale
==============
*/
void CgDrawSystemSP::AlterTimescale(CgDrawSystemSP *this, int time, float startScale, float endScale)
{
  int v6; 

  v6 = Sys_Milliseconds();
  this->m_timeScaleTimeStart = v6;
  this->m_timeScaleStart = startScale;
  this->m_timeScaleEnd = endScale;
  this->m_timeScaleTimeEnd = time + v6;
}

/*
==============
CG_DrawSP_ActorOverlay
==============
*/
void CG_DrawSP_ActorOverlay(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  cg_t *LocalClientGlobals; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v5; 
  int v6; 
  const char *ConfigString; 
  const char *v8; 
  const char *v9; 
  const ScreenPlacement *ActivePlacement; 
  const dvar_t *v11; 
  const char *v12; 
  double Float_Internal_DebugName; 
  GfxFont *FontHandle; 
  const GfxViewInfo *ViewInfo; 
  const GfxViewInfo *v16; 
  double v17; 
  unsigned __int8 v18; 
  float v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  float v23; 
  const char *v24; 
  double v25; 
  float v26; 
  float v27; 
  int v30; 
  Material *material; 
  float v32; 
  float v33; 
  const ScreenPlacement *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  int horzAlign; 
  char *text; 
  vec2_t screenPos; 
  vec4_t color; 

  if ( localClientNum )
  {
    horzAlign = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 325, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", localClientNum, horzAlign) )
      __debugbreak();
  }
  v2 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled && !CL_Pause_IsGamePaused() && !CG_GetFlashbangedRemainingTime(localClientNum) )
  {
    v3 = DVARBOOL_hud_missionFailed;
    if ( !DVARBOOL_hud_missionFailed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_missionFailed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v5 = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)LocalClientGlobals;
      if ( !LocalClientGlobals->cvsData.transitory.remoteMissileCam && LocalClientGlobals->predictedPlayerState.pm_type < 7 )
      {
        v6 = 3 * LocalClientGlobals->clientNum + 6163;
        ConfigString = CL_GetConfigString(v6);
        v8 = ConfigString;
        if ( ConfigString )
        {
          if ( *ConfigString && I_stricmp(ConfigString, "none") )
          {
            v9 = SEH_LocalizeTextMessage(v8, "Friend Name", LOCMSG_SAFE);
            ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
            if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v5 + 230, GameModeFlagValues::ms_spValue, 0x38u) )
            {
              v11 = DVARVEC4_hostileNameFontColor;
              if ( !DVARVEC4_hostileNameFontColor )
              {
                v12 = "hostileNameFontColor";
                goto LABEL_27;
              }
LABEL_29:
              Dvar_CheckFrontendServerThread(v11);
              *(_QWORD *)color.v = v11->current.integer64;
              color.v[2] = v11->current.vector.v[2];
              color.v[3] = FLOAT_1_0;
              R_AddCmdSetUIBlur(1, -3.0);
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_friendlyNameFontSize, "friendlyNameFontSize");
              screenPos.v[1] = FLOAT_N2_0;
              screenPos.v[0] = FLOAT_25_0;
              FontHandle = UI_GetFontHandle(ActivePlacement, 3, *(float *)&Float_Internal_DebugName);
              ViewInfo = LUI_GetViewInfo();
              v16 = ViewInfo;
              if ( ViewInfo )
                R_ScopeDistortionTransform(ViewInfo, &screenPos, &screenPos);
              UI_DrawText(ActivePlacement, v9, 0x7FFFFFFF, FontHandle, screenPos.v[0], screenPos.v[1], 2, 2, *(float *)&Float_Internal_DebugName, &color, 17);
              v17 = Dvar_GetFloat_Internal_DebugName(DVARFLT_friendlyCallsignFontSize, "friendlyCallsignFontSize");
              v18 = 0;
              v19 = *(float *)&v17;
              v20 = CL_GetConfigString(v6 + 2);
              v21 = v20;
              if ( v20 && *v20 && I_stricmp(v20, "none") )
              {
                v22 = SEH_LocalizeTextMessage(v21, "Friend Callsign", LOCMSG_SAFE);
                v23 = ActivePlacement->realViewportSize.v[1] * 0.00092592591;
                text = (char *)v22;
                v24 = v22;
                v18 = 1;
                v25 = R_NormalizedTextScale(FontHandle, *(float *)&v17);
                v26 = *(float *)&v25 * ActivePlacement->scaleVirtualToReal.v[1];
                v27 = (float)((float)((float)((float)R_TextHeight(FontHandle) * v26) * 0.75) * (float)(1.0 / v23)) + 10.0;
                R_TextHeight(FontHandle);
                _XMM1 = 0i64;
                __asm { vroundss xmm2, xmm1, xmm3, 1 }
                v30 = R_TextWidth(v24, 0x7FFFFFFF, FontHandle, (int)*(float *)&_XMM2);
                material = cgMedia.hud_callsign_bg;
                v32 = (float)((float)(v30 + 10) / ActivePlacement->scaleVirtualToReal.v[0]) * v23;
                v33 = (float)(v27 / ActivePlacement->scaleVirtualToReal.v[1]) * v23;
                v34 = ScrPlace_GetActivePlacement(localClientNum);
                CL_Draw9SliceImage(v34, 25.0, 0.0, v32, v33, 2, 2, &colorWhite, material);
                screenPos.v[0] = FLOAT_27_0;
                screenPos.v[1] = FLOAT_9_5;
                if ( v16 )
                  R_ScopeDistortionTransform(v16, &screenPos, &screenPos);
                UI_DrawText(ActivePlacement, text, 0x7FFFFFFF, FontHandle, screenPos.v[0], screenPos.v[1], 2, 2, v19, &color, 17);
              }
              v35 = CL_GetConfigString(v6 + 1);
              v36 = v35;
              if ( v35 && *v35 && I_stricmp(v35, "none") )
              {
                v37 = UI_SafeTranslateString(v36);
                _XMM0 = v18;
                __asm { vpcmpeqd xmm2, xmm0, xmm1 }
                _XMM1 = LODWORD(FLOAT_22_0);
                screenPos.v[0] = FLOAT_25_0;
                __asm { vblendvps xmm0, xmm1, xmm12, xmm2 }
                screenPos.v[1] = *(float *)&_XMM0;
                if ( v16 )
                  R_ScopeDistortionTransform(v16, &screenPos, &screenPos);
                UI_DrawText(ActivePlacement, v37, 0x7FFFFFFF, FontHandle, screenPos.v[0], screenPos.v[1], 2, 2, v19, &color, 17);
              }
              R_AddCmdSetUIBlur(0, 0.0);
              return;
            }
            if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v5 + 230, GameModeFlagValues::ms_spValue, 0x39u) )
            {
              v11 = DVARVEC4_civilianNameFontColor;
              if ( DVARVEC4_civilianNameFontColor )
                goto LABEL_29;
              v12 = "civilianNameFontColor";
            }
            else
            {
              v11 = DVARVEC4_friendlyNameFontColor;
              if ( DVARVEC4_friendlyNameFontColor )
                goto LABEL_29;
              v12 = "friendlyNameFontColor";
            }
LABEL_27:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
              __debugbreak();
            goto LABEL_29;
          }
        }
      }
    }
  }
}

/*
==============
CG_DrawSP_ArchiveState
==============
*/
void CG_DrawSP_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  __int64 v2; 
  cg_t *v4; 
  __int64 v5; 
  __int64 v6; 
  CgGlobalsType v7; 
  int v8; 
  CgWeaponsType v9; 

  v2 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 69, ASSERT_TYPE_ASSERT, "( ( localClientNum == CL_GetOnlyLocalClientNum() ) )", "( localClientNum ) = %i", v5) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_SP )
  {
    v7 = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", v7) )
      __debugbreak();
  }
  v4 = cg_t::ms_cgArray[v2];
  if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_SP )
  {
    v9 = CgWeaponSystem::ms_allocatedType;
    v8 = 1;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 541, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v6, v8, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 542, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v2] )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 543, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v6) )
      __debugbreak();
  }
  CgWeaponSystemSP::ArchiveWeaponInfo((CgWeaponSystemSP *)CgWeaponSystem::ms_weaponSystemArray[v2], (const LocalClientNum_t)v2, memFile);
  CG_ViewSP_ArchiveViewInfo((const LocalClientNum_t)v2, memFile);
  CG_ArchiveCameraShake((LocalClientNum_t)v2, memFile);
  CG_ArchiveShellShock((LocalClientNum_t)v2, memFile);
  CG_RumbleSP_ArchiveActiveRumbles(memFile);
  CG_VisionSet_ArchiveSP(memFile, &v4->cvsData);
  MemFile_ArchiveData(memFile, 8, &v4->vehReticleOffset);
  MemFile_ArchiveData(memFile, 8, &v4->vehReticleVel);
  MemFile_ArchiveData(memFile, 4, &v4->vehReticleLockOnStartTime);
  MemFile_ArchiveData(memFile, 4, &v4->vehReticleLockOnDuration);
  MemFile_ArchiveData(memFile, 4, &v4->vehReticleLockOnEntNum);
  MemFile_ArchiveData(memFile, 128, v4->hudElemSound);
  MemFile_ArchiveData(memFile, 1, &v4->remoteMissileCamInitialized);
  MemFile_ArchiveData(memFile, 12, &v4->remoteMissileCamAngles);
  CG_HudLighting_ArchiveState(memFile, &v4->hudLightingState);
}

/*
==============
CG_DrawSP_DrawActive
==============
*/
void CG_DrawSP_DrawActive(const LocalClientNum_t localClientNum, unsigned int drawType)
{
  cg_t *LocalClientGlobals; 

  Profile2_UpdateEntry(31);
  if ( ((unsigned __int8)&gunZOfs & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &gunZOfs) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&gunZOfs);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CL_SetFOVSensitivityScale(localClientNum, LocalClientGlobals->zoomSensitivity);
  CL_SetUserCmdWeapons(localClientNum, &LocalClientGlobals->weaponSelect, &LocalClientGlobals->equippedOffHand, LocalClientGlobals->weaponSelectInAlt);
  CL_CGameSP_SetUserCmdAimValues(localClientNum, LocalClientGlobals->gunAngles.v[0], LocalClientGlobals->gunAngles.v[1], LocalClientGlobals->gunOffset.v[0], LocalClientGlobals->gunOffset.v[1], LocalClientGlobals->gunOffset.v[2]);
  CL_UpdateExtraButtons(localClientNum);
  CL_SetExtraButtons(localClientNum, LocalClientGlobals->extraButtons);
  LocalClientGlobals->extraButtons = 0i64;
  CG_DrawDebug_Infils(localClientNum);
  CL_DebugData_UpdateClient();
  CL_RenderScene(localClientNum, &LocalClientGlobals->refdef, drawType);
  Profile2_UpdateEntry(31);
  if ( ((unsigned __int64)&gunZOfs & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &gunZOfs) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&gunZOfs);
}

/*
==============
CG_DrawSP_Fade
==============
*/
void CG_DrawSP_Fade(LocalClientNum_t localClientNum, int r, int g, int b, int a, int startTime, int duration)
{
  ScreenFade *v7; 

  v7 = &s_screenFade[localClientNum];
  v7->startTime = startTime;
  v7->duration = duration;
  v7->alpha = (float)a * 0.0039215689;
  if ( v7->duration + v7->startTime <= CG_GetLocalClientGlobals(localClientNum)->time )
    v7->alphaCurrent = v7->alpha;
}

/*
==============
CG_DrawSP_FlashFade
==============
*/
void CG_DrawSP_FlashFade(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  ScreenFade *v3; 
  float alpha; 
  int v5; 
  int v6; 
  float alphaCurrent; 
  float v9; 
  __int128 alphaCurrent_low; 
  float v14; 
  int height; 
  int width; 
  float aspect; 
  vec4_t color; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = &s_screenFade[v1];
  alpha = v3->alpha;
  if ( v3->duration + v3->startTime >= LocalClientGlobals->time )
  {
    if ( alpha != v3->alphaCurrent )
    {
      v5 = Sys_Milliseconds();
      v6 = v5 - lastTime_0;
      lastTime_0 = v5;
      if ( (unsigned int)(v6 - 1) <= 0x1F2 )
      {
        alphaCurrent = v3->alphaCurrent;
        _XMM2 = LODWORD(v3->alpha);
        v9 = (float)v6 / (float)v3->duration;
        if ( alphaCurrent <= *(float *)&_XMM2 )
        {
          alphaCurrent_low = LODWORD(v3->alphaCurrent);
          *(float *)&alphaCurrent_low = alphaCurrent + v9;
          _XMM1 = alphaCurrent_low;
          __asm
          {
            vcmpltss xmm0, xmm2, xmm1
            vblendvps xmm0, xmm1, xmm2, xmm0
          }
          v3->alphaCurrent = *(float *)&_XMM0;
        }
        else
        {
          v3->alphaCurrent = alphaCurrent - v9;
          if ( (float)(alphaCurrent - v9) < *(float *)&_XMM2 )
            v3->alphaCurrent = *(float *)&_XMM2;
        }
      }
    }
  }
  else
  {
    v3->alphaCurrent = alpha;
  }
  v14 = v3->alphaCurrent;
  if ( v14 > 0.0 )
  {
    color.v[0] = 0.0;
    color.v[1] = 0.0;
    color.v[2] = 0.0;
    color.v[3] = v14;
    CL_GetScreenDimensions(&width, &height, &aspect);
    UI_FillRectPhysical(0.0, 0.0, (float)width, (float)height, &color);
  }
}

/*
==============
CG_DrawSP_FriendlyFire
==============
*/
char CG_DrawSP_FriendlyFire(const cg_t *cgameGlob)
{
  float fWeaponPosFrac; 
  __int64 localClientNum; 
  bool v4; 
  LocalClientNum_t v5; 
  const ScreenPlacement *ActivePlacement; 
  float x; 
  float y; 
  float w; 
  float h; 
  Weapon r_weapon; 

  fWeaponPosFrac = cgameGlob->predictedPlayerState.weapCommon.fWeaponPosFrac;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cgameGlob->predictedPlayerState.eFlags, ACTIVE, 0xBu) || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 3u) )
    return 0;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x35u) || CL_Pause_IsGamePaused() )
    return 0;
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  r_weapon = *BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[localClientNum], &cgameGlob->predictedPlayerState);
  v4 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x1Bu));
  if ( BG_GetOverlay(&r_weapon, v4)->shaderMat && cgameGlob->predictedPlayerState.weapCommon.fWeaponPosFrac > 0.0 )
    return 0;
  CG_CalcCrosshairPosition(cgameGlob, 640.0, 480.0, &x, &y);
  v5 = cgameGlob->localClientNum;
  x = fWeaponPosFrac * x;
  h = FLOAT_40_0;
  w = FLOAT_40_0;
  y = fWeaponPosFrac * y;
  ActivePlacement = ScrPlace_GetActivePlacement(v5);
  ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &h, 2, 2);
  CL_DrawStretchPicPhysical((float)(w * -0.5) + x, (float)(h * -0.5) + y, w, h, 0.0, 0.0, 1.0, 1.0, &colorWhite, cgMedia.friendlyFireMaterial);
  return 1;
}

/*
==============
CgDrawSystemSP::Draw2D
==============
*/
void CgDrawSystemSP::Draw2D(CgDrawSystemSP *this, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  cg_t *LocalClientGlobals; 
  int v5; 
  int m_timeScaleTimeStart; 
  int v7; 
  int m_timeScaleTimeEnd; 
  float v9; 
  float m_timeScaleEnd; 
  __int64 m_localClientNum; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  char v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  bool enabled; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  float v23; 
  float v24; 
  LocalClientNum_t v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  __int64 v34; 
  __int64 v35; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v5 = Sys_Milliseconds();
  m_timeScaleTimeStart = this->m_timeScaleTimeStart;
  v7 = v5;
  if ( m_timeScaleTimeStart && m_timeScaleTimeStart < v5 )
  {
    m_timeScaleTimeEnd = this->m_timeScaleTimeEnd;
    if ( v5 >= m_timeScaleTimeEnd )
    {
      m_timeScaleEnd = this->m_timeScaleEnd;
      *(_QWORD *)&this->m_timeScaleTimeStart = 0i64;
    }
    else
    {
      if ( (float)(m_timeScaleTimeEnd - m_timeScaleTimeStart) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 545, ASSERT_TYPE_ASSERT, "(m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f)", (const char *)&queryFormat, "m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f") )
        __debugbreak();
      v9 = (float)(v7 - this->m_timeScaleTimeStart) / (float)(this->m_timeScaleTimeEnd - this->m_timeScaleTimeStart);
      m_timeScaleEnd = (float)((float)(1.0 - v9) * this->m_timeScaleStart) + (float)(v9 * this->m_timeScaleEnd);
    }
    if ( m_timeScaleEnd <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_inline.h", 47, ASSERT_TYPE_ASSERT, "(timescale > 0)", (const char *)&queryFormat, "timescale > 0") )
      __debugbreak();
    Sys_CheckAcquireLock(&s_timescaleRWLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    s_timescaleRWLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_timescaleRWLock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
      __debugbreak();
    s_timescale_aab -= s_timescale_set_aab;
    s_timescaleRWLock.writeThreadId = 0;
    LODWORD(com_codeTimeScale.timeFloat) = (ComCodeTimeScale)(LODWORD(m_timeScaleEnd) ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2)));
    ReleaseSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    Sys_CheckReleaseLock(&s_timescaleRWLock);
  }
  if ( CgDrawSystem::ShouldDrawAnything(this, LocalClientGlobals) )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 4u) )
    {
      m_localClientNum = this->m_localClientNum;
      if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
      {
        LODWORD(v35) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v35) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgWeaponSystem::ms_allocatedCount )
      {
        LODWORD(v35) = CgWeaponSystem::ms_allocatedCount;
        LODWORD(v34) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      if ( !CgWeaponSystem::ms_weaponSystemArray[m_localClientNum] )
      {
        LODWORD(v35) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v35) )
          __debugbreak();
      }
      CgWeaponSystem::ms_weaponSystemArray[m_localClientNum]->DrawFriendOrFoeTargetBoxes(CgWeaponSystem::ms_weaponSystemArray[m_localClientNum]);
    }
    v12 = DVARINT_debugOverlay;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.integer == 6 )
      CG_DrawDebug_DrawFontTest(this->m_localClientNum);
    CG_ScreenBlur(this->m_localClientNum);
    CG_DrawFlashDamage(LocalClientGlobals);
    v13 = DCONST_DVARBOOL_r_lowResOverlays;
    if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled && this->IsHudEnabled(this) )
    {
      CG_Draw2dHudElems(this->m_localClientNum, 0);
      CG_Draw2dHudElems(this->m_localClientNum, 1);
    }
    CG_Draw_EndSceneCmdsAndAddHudLighting();
    v14 = DCONST_DVARBOOL_r_spDirectionalDamageIndicatorsLowRes;
    if ( !DCONST_DVARBOOL_r_spDirectionalDamageIndicatorsLowRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_spDirectionalDamageIndicatorsLowRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( !v14->current.enabled )
      goto LABEL_48;
    v15 = DCONST_DVARBOOL_r_lowResOverlays;
    if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
      v16 = 1;
    else
LABEL_48:
      v16 = 0;
    if ( this->IsHudEnabled(this) )
    {
      v17 = DVARBOOL_cg_drawDamageDirection;
      if ( !DVARBOOL_cg_drawDamageDirection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDamageDirection") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( v17->current.enabled && !v16 )
        CG_DrawDamageDirectionIndicators(this->m_localClientNum);
      CG_Draw2dHudElems(this->m_localClientNum, 2);
      CG_DrawVehicleDebug(this->m_localClientNum);
    }
    if ( this->IsHudEnabled(this) )
    {
      CG_DrawSP_ActorOverlay(this->m_localClientNum);
      v18 = DVARBOOL_cg_drawFriendlyFireCrosshair;
      if ( !DVARBOOL_cg_drawFriendlyFireCrosshair && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFriendlyFireCrosshair") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( !v18->current.enabled || !CG_DrawSP_FriendlyFire(LocalClientGlobals) )
        CG_DrawReticles_DrawCrosshair(this->m_localClientNum);
      CG_DrawGrenadeIndicators(this->m_localClientNum);
    }
    v19 = DVARBOOL_bg_cinematicAboveUI;
    if ( !DVARBOOL_bg_cinematicAboveUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicAboveUI") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    enabled = v19->current.enabled;
    if ( !enabled )
      UI_DrawInterpolatedCinematicElements(this->m_localClientNum);
    if ( LUI_IsRenderUsingMultipleCmdLists() )
    {
      v21 = DCONST_DVARBOOL_r_lowResOverlays;
      if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled )
      {
        R_AddCmdEndOfList();
        R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LOWRES_OVERLAY);
        if ( this->IsHudEnabled(this) )
        {
          CG_Draw2dHudElems(this->m_localClientNum, 0);
          CG_Draw2dHudElems(this->m_localClientNum, 1);
          if ( v16 )
            CG_DrawDamageDirectionIndicators(this->m_localClientNum);
        }
      }
    }
    LUI_CoD_RenderFrame((const LocalClientNum_t)this->m_localClientNum);
    if ( enabled )
      UI_DrawInterpolatedCinematicElements(this->m_localClientNum);
    UI_DrawCinematicSubtitles(this->m_localClientNum);
    CG_DrawDebug_DrawPerformanceWarnings(this->m_localClientNum);
    v22 = DVARINT_debugOverlay;
    v23 = FLOAT_150_0;
    v24 = FLOAT_10_0;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v25 = this->m_localClientNum;
    if ( v22->current.integer )
      CG_DrawDebug_UpdateInput(v25);
    else
      CG_DrawDebug_ResetInput(v25);
    CG_DrawDebug_UpdateMantleMotionPathExport(this->m_localClientNum);
    v26 = DVARINT_debugOverlay;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.integer == 1 )
      goto LABEL_117;
    v27 = DVARINT_debugOverlay;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.integer == 9 )
    {
LABEL_117:
      CG_DrawDebug_DrawViewmodelInfo(this->m_localClientNum);
      v23 = FLOAT_200_0;
      v24 = FLOAT_250_0;
    }
    else
    {
      v28 = DVARINT_debugOverlay;
      if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.integer == 2 )
      {
        CG_DrawDebugSP_DrawPSFlags((const LocalClientNum_t)this->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 3 )
      {
        CG_DrawDebug_DrawGameETCounts(this->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 5 )
      {
        CG_DrawDebugSP_DrawSaveInfo((const LocalClientNum_t)this->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 7 )
      {
        CG_DrawDebug_DrawViewmodelAnimList(this->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 10 )
      {
        CG_DrawDebug_DrawBulletFireLog(this->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 11 )
      {
        CG_DrawDebug_DrawBallistics(this->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 12 )
      {
        CG_DrawDebug_DrawSkydive(this->m_localClientNum, 0);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 13 )
      {
        CG_DrawDebug_DrawSkydive(this->m_localClientNum, 1);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 15 )
      {
        CG_DrawDebug_DrawButtonBits(this->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 16 )
      {
        CG_DrawDebug_DrawInputContext(this->m_localClientNum);
      }
    }
    v29 = DVARBOOL_cg_dumpViewmodelBlendSpaces;
    if ( !DVARBOOL_cg_dumpViewmodelBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpViewmodelBlendSpaces") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
    {
      v30 = DVARBOOL_cg_dumpblendspaces_coverage;
      if ( !DVARBOOL_cg_dumpblendspaces_coverage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpblendspaces_coverage") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      CG_DrawDebug_DrawVMBlendSpaces(this->m_localClientNum, v24, v23, v30->current.enabled);
    }
    v31 = DVARBOOL_cg_drawProcBonesAllocatorInfo;
    if ( !DVARBOOL_cg_drawProcBonesAllocatorInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawProcBonesAllocatorInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    if ( v31->current.enabled )
      CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo((const LocalClientNum_t)this->m_localClientNum);
    CG_DrawDebug_DrawViewKickLog(this->m_localClientNum);
    CG_DrawDebug_DrawLogQueue(this->m_localClientNum);
    v32 = DVARBOOL_cg_drawDevOverlays;
    if ( !DVARBOOL_cg_drawDevOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDevOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    if ( v32->current.enabled )
    {
      Profile_Begin(479);
      CG_DrawDebugSP_DrawDebugOverlays((const LocalClientNum_t)this->m_localClientNum);
      Profile_EndInternal(NULL);
    }
    CG_DrawHits_SubmitText(this->m_localClientNum);
    v33 = DVARBOOL_cg_drawDevOverlays;
    if ( !DVARBOOL_cg_drawDevOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDevOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( v33->current.enabled )
    {
      if ( !LocalClientGlobals->showScores )
        CG_Draw_MiniConsole((const LocalClientNum_t)this->m_localClientNum);
      CG_Draw_ErrorMessages((const LocalClientNum_t)this->m_localClientNum, 20);
    }
    CG_DrawDebug_DrawCenterLines(this->m_localClientNum);
  }
}

/*
==============
CgDrawSystemSP::DrawHoldBreathHint
==============
*/
void CgDrawSystemSP::DrawHoldBreathHint(CgDrawSystemSP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !CG_Draw_IsHudHidden() && !LocalClientGlobals->showScores && !CL_Pause_IsGamePaused() )
  {
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( p_predictedPlayerState == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 6u) )
    {
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 7u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
      }
      else
      {
        CG_Draw_HoldBreathHintCommon((const LocalClientNum_t)this->m_localClientNum, p_predictedPlayerState, rect, font, fontscale, textStyle);
      }
    }
  }
}

/*
==============
CgDrawSystemSP::DrawHybridToggleHint
==============
*/
void CgDrawSystemSP::DrawHybridToggleHint(CgDrawSystemSP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_Draw_HybridToggleHintCommon(this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, rect, font, fontscale, textStyle);
}

/*
==============
CgDrawSystemSP::FadeHudMenu
==============
*/
float CgDrawSystemSP::FadeHudMenu(CgDrawSystemSP *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  double v8; 

  if ( CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.pm_type == 4 || CG_Draw_IsHudHidden() )
    LODWORD(v8) = 0;
  else
    v8 = CgDrawSystem::FadeHudMenu(this, fadeDvar, displayStartTime, duration);
  return *(float *)&v8;
}

/*
==============
CgDrawSystemSP::GenerateSceneVerts
==============
*/
void CgDrawSystemSP::GenerateSceneVerts(CgDrawSystemSP *this)
{
  CG_AddDrawSurfsFor3dHudElems(this->m_localClientNum);
}

/*
==============
CgDrawSystemSP::IsHudEnabled
==============
*/
__int64 CgDrawSystemSP::IsHudEnabled(CgDrawSystemSP *this)
{
  cg_t *LocalClientGlobals; 
  unsigned int v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 573, ASSERT_TYPE_ASSERT, "(cgameGlob != 0)", (const char *)&queryFormat, "cgameGlob != NULL") )
    __debugbreak();
  if ( !LocalClientGlobals->showHud )
    return 0i64;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v2 = 1;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
    return 0i64;
  v3 = DVARBOOL_cg_drawHUD;
  if ( !DVARBOOL_cg_drawHUD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawHUD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 0;
  v4 = DVARBOOL_hud_drawHUD;
  if ( !DVARBOOL_hud_drawHUD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_drawHUD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  return v2;
}

/*
==============
CgDrawSystemSP::IsHudMissionFailed
==============
*/
__int64 CgDrawSystemSP::IsHudMissionFailed(CgDrawSystemSP *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_hud_missionFailed;
  if ( !DVARBOOL_hud_missionFailed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_missionFailed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
CgDrawSystemSP::OwnerDraw
==============
*/
void CgDrawSystemSP::OwnerDraw(CgDrawSystemSP *this, rectDef_s *parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, GfxFont *font, float scale, const vec4_t *color, int textStyle, int textAlignMode)
{
  rectDef_s rect; 

  if ( ((unsigned int (__fastcall *)(CgDrawSystemSP *, rectDef_s *))this->IsHudEnabled)(this, parentRect) )
  {
    CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum) == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 994, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    rect.horzAlign = horzAlign;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    if ( (unsigned __int8)horzAlign != horzAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 1001, ASSERT_TYPE_ASSERT, "(rect.horzAlign == horzAlign)", (const char *)&queryFormat, "rect.horzAlign == horzAlign") )
      __debugbreak();
    rect.vertAlign = vertAlign;
    if ( (unsigned __int8)vertAlign != vertAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 1003, ASSERT_TYPE_ASSERT, "(rect.vertAlign == vertAlign)", (const char *)&queryFormat, "rect.vertAlign == vertAlign") )
      __debugbreak();
    if ( ownerDraw == 200 )
    {
      CG_DrawVehicleReticle(this->m_localClientNum, &rect, color);
    }
    else if ( ownerDraw == 201 )
    {
      CG_DrawVehicleTargets(this->m_localClientNum, &rect, color);
    }
    else
    {
      CgDrawSystem::OwnerDrawCommon(this, &rect, ownerDraw, font, scale, color, text_x, text_y, textStyle, textAlignMode);
    }
  }
}

/*
==============
CgDrawSystemSP::PreDraw2D
==============
*/
void CgDrawSystemSP::PreDraw2D(CgDrawSystemSP *this)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 627, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
}

/*
==============
CgDrawSystemSP::SetHudElemDevString
==============
*/
void CgDrawSystemSP::SetHudElemDevString(CgDrawSystemSP *this, int index, char *hudElemString, const int hudElemStringLength)
{
  ClConfigStrings *ClConfigStrings; 
  const char *v9; 

  if ( !hudElemString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 940, ASSERT_TYPE_ASSERT, "(hudElemString)", (const char *)&queryFormat, "hudElemString") )
    __debugbreak();
  if ( index )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v9 = (const char *)ClConfigStrings->GetLocalizedString(ClConfigStrings, index);
    CG_TranslateHudElemMessage(this->m_localClientNum, v9, "hudelem dev string", hudElemString, hudElemStringLength);
  }
}

/*
==============
CgDrawSystemSP::ShouldDrawCrosshair
==============
*/
char CgDrawSystemSP::ShouldDrawCrosshair(CgDrawSystemSP *this)
{
  return 1;
}

/*
==============
CgDrawSystemSP::ShouldDrawHud
==============
*/
__int64 CgDrawSystemSP::ShouldDrawHud(CgDrawSystemSP *this)
{
  return 1i64;
}

/*
==============
CgDrawSystemSP::UpdateScissor
==============
*/
void CgDrawSystemSP::UpdateScissor(CgDrawSystemSP *this)
{
  cg_t *LocalClientGlobals; 
  const cg_t *v3; 
  bool v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v3 = LocalClientGlobals;
  v4 = LocalClientGlobals->predictedPlayerState.pm_type == 4;
  LocalClientGlobals->shellshock.hasScissor = 0;
  if ( !v4 && LocalClientGlobals->cubemapShot == CUBEMAPSHOT_NONE )
  {
    v5 = DVARBOOL_cg_draw2D;
    if ( !DVARBOOL_cg_draw2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw2D") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      v6 = DVARINT_debugOverlay;
      if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( (v6->current.integer != 6 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && this->IsHudEnabled(this) && v3->predictedPlayerState.pm_type < 7 && (!Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawFriendlyFireCrosshair, "cg_drawFriendlyFireCrosshair") || !CG_DrawSP_FriendlyFire(v3)) )
        CG_DrawReticles_UpdateWeapReticleScissor(this->m_localClientNum);
    }
  }
}

/*
==============
CgDrawSystemSP::UpdateTimeScale
==============
*/
void CgDrawSystemSP::UpdateTimeScale(CgDrawSystemSP *this)
{
  int v2; 
  int m_timeScaleTimeStart; 
  int v4; 
  int m_timeScaleTimeEnd; 
  float v6; 
  float m_timeScaleEnd; 
  int v8; 

  v2 = Sys_Milliseconds();
  m_timeScaleTimeStart = this->m_timeScaleTimeStart;
  v4 = v2;
  if ( m_timeScaleTimeStart && m_timeScaleTimeStart < v2 )
  {
    m_timeScaleTimeEnd = this->m_timeScaleTimeEnd;
    if ( v2 >= m_timeScaleTimeEnd )
    {
      m_timeScaleEnd = this->m_timeScaleEnd;
      *(_QWORD *)&this->m_timeScaleTimeStart = 0i64;
    }
    else
    {
      if ( (float)(m_timeScaleTimeEnd - m_timeScaleTimeStart) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 545, ASSERT_TYPE_ASSERT, "(m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f)", (const char *)&queryFormat, "m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f") )
        __debugbreak();
      v6 = (float)(v4 - this->m_timeScaleTimeStart) / (float)(this->m_timeScaleTimeEnd - this->m_timeScaleTimeStart);
      m_timeScaleEnd = (float)((float)(1.0 - v6) * this->m_timeScaleStart) + (float)(v6 * this->m_timeScaleEnd);
    }
    if ( m_timeScaleEnd <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_inline.h", 47, ASSERT_TYPE_ASSERT, "(timescale > 0)", (const char *)&queryFormat, "timescale > 0") )
      __debugbreak();
    Sys_CheckAcquireLock(&s_timescaleRWLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    s_timescaleRWLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_timescaleRWLock.writeThreadId )
    {
      v8 = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v8, 0i64) )
        __debugbreak();
    }
    s_timescale_aab -= s_timescale_set_aab;
    s_timescaleRWLock.writeThreadId = 0;
    LODWORD(com_codeTimeScale.timeFloat) = (ComCodeTimeScale)(LODWORD(m_timeScaleEnd) ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2)));
    ReleaseSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    Sys_CheckReleaseLock(&s_timescaleRWLock);
  }
}

