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

void __fastcall CgDrawSystemSP::AlterTimescale(CgDrawSystemSP *this, int time, double startScale, double endScale)
{
  int v10; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  _RDI = this;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  v10 = Sys_Milliseconds();
  _RDI->m_timeScaleTimeStart = v10;
  __asm
  {
    vmovss  dword ptr [rdi+18h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rdi+1Ch], xmm7
    vmovaps xmm7, [rsp+48h+var_28]
  }
  _RDI->m_timeScaleTimeEnd = time + v10;
}

/*
==============
CG_DrawSP_ActorOverlay
==============
*/
void CG_DrawSP_ActorOverlay(LocalClientNum_t localClientNum)
{
  const dvar_t *v9; 
  const dvar_t *v10; 
  cg_t *LocalClientGlobals; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *v12; 
  int v13; 
  const char *ConfigString; 
  const char *v15; 
  const char *v16; 
  const char *v19; 
  GfxFont *FontHandle; 
  const GfxViewInfo *ViewInfo; 
  const GfxViewInfo *v31; 
  unsigned __int8 v34; 
  const char *v36; 
  const char *v37; 
  const char *v39; 
  const char *v43; 
  Material *hud_callsign_bg; 
  const ScreenPlacement *ActivePlacement; 
  const char *v76; 
  const char *v78; 
  const char *v82; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float ya; 
  float yb; 
  float yc; 
  int horzAlign; 
  float material; 
  float materiala; 
  float materialb; 
  char *text; 
  vec2_t screenPos; 
  vec4_t color; 

  if ( localClientNum )
  {
    horzAlign = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 325, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 1 )", "localClientNum doesn't index MAX_CLIENTS_SP\n\t%i not in [0, %i)", localClientNum, horzAlign) )
      __debugbreak();
  }
  v9 = DCONST_DVARBOOL_lui_footage_capture_enabled;
  if ( !DCONST_DVARBOOL_lui_footage_capture_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_footage_capture_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled && !CL_Pause_IsGamePaused() && !CG_GetFlashbangedRemainingTime(localClientNum) )
  {
    v10 = DVARBOOL_hud_missionFailed;
    if ( !DVARBOOL_hud_missionFailed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_missionFailed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( !v10->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v12 = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)LocalClientGlobals;
      if ( !LocalClientGlobals->cvsData.transitory.remoteMissileCam && LocalClientGlobals->predictedPlayerState.pm_type < 7 )
      {
        v13 = 3 * LocalClientGlobals->clientNum + 6163;
        ConfigString = CL_GetConfigString(v13);
        v15 = ConfigString;
        if ( ConfigString )
        {
          if ( *ConfigString && I_stricmp(ConfigString, "none") )
          {
            __asm
            {
              vmovaps [rsp+120h+var_30], xmm6
              vmovaps [rsp+120h+var_50], xmm8
              vmovaps [rsp+120h+var_70], xmm10
              vmovaps [rsp+120h+var_80], xmm11
              vmovaps [rsp+120h+var_90], xmm12
            }
            v16 = SEH_LocalizeTextMessage(v15, "Friend Name", LOCMSG_SAFE);
            _R14 = ScrPlace_GetActivePlacement(localClientNum);
            if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v12 + 230, GameModeFlagValues::ms_spValue, 0x38u) )
            {
              _RBX = DVARVEC4_hostileNameFontColor;
              if ( !DVARVEC4_hostileNameFontColor )
              {
                v19 = "hostileNameFontColor";
                goto LABEL_27;
              }
LABEL_29:
              Dvar_CheckFrontendServerThread(_RBX);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+28h]
                vmovss  xmm8, cs:__real@3f800000
                vmovss  dword ptr [rbp+57h+var_B0], xmm0
                vmovss  xmm1, dword ptr [rbx+2Ch]
                vmovss  dword ptr [rbp+57h+var_B0+4], xmm1
                vmovss  xmm0, dword ptr [rbx+30h]
                vmovss  xmm1, cs:__real@c0400000; scale
                vmovss  dword ptr [rbp+57h+var_B0+8], xmm0
                vmovss  dword ptr [rbp+57h+var_B0+0Ch], xmm8
              }
              R_AddCmdSetUIBlur(1, *(const float *)&_XMM1);
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_friendlyNameFontSize, "friendlyNameFontSize");
              __asm
              {
                vmovaps xmm2, xmm0; scale
                vmovaps xmm6, xmm0
                vmovss  xmm1, cs:__real@c0000000
                vmovss  xmm11, cs:__real@41c80000
                vmovss  dword ptr [rbp+57h+screenPos+4], xmm1
                vmovss  dword ptr [rbp+57h+screenPos], xmm11
              }
              FontHandle = UI_GetFontHandle(_R14, 3, *(float *)&_XMM2);
              ViewInfo = LUI_GetViewInfo();
              v31 = ViewInfo;
              if ( ViewInfo )
                R_ScopeDistortionTransform(ViewInfo, &screenPos, &screenPos);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+57h+screenPos+4]
                vmovss  xmm1, dword ptr [rbp+57h+screenPos]
                vmovss  dword ptr [rsp+120h+material], xmm6
                vmovss  [rsp+120h+y], xmm0
                vmovss  dword ptr [rsp+120h+fmt], xmm1
              }
              UI_DrawText(_R14, v16, 0x7FFFFFFF, FontHandle, fmt, ya, 2, 2, material, &color, 17);
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_friendlyCallsignFontSize, "friendlyCallsignFontSize");
              v34 = 0;
              __asm { vmovaps xmm10, xmm0 }
              v36 = CL_GetConfigString(v13 + 2);
              v37 = v36;
              __asm { vmovss  xmm12, cs:__real@41200000 }
              if ( v36 && *v36 && I_stricmp(v36, "none") )
              {
                __asm
                {
                  vmovaps [rsp+120h+var_40], xmm7
                  vmovaps [rsp+120h+var_60], xmm9
                }
                v39 = SEH_LocalizeTextMessage(v37, "Friend Callsign", LOCMSG_SAFE);
                __asm
                {
                  vmovss  xmm0, dword ptr [r14+24h]
                  vmulss  xmm9, xmm0, cs:__real@3a72b9d6
                  vmovaps xmm1, xmm10; scale
                }
                text = (char *)v39;
                v43 = v39;
                v34 = 1;
                *(double *)&_XMM0 = R_NormalizedTextScale(FontHandle, *(float *)&_XMM1);
                __asm
                {
                  vmulss  xmm7, xmm0, dword ptr [r14+4]
                  vdivss  xmm6, xmm8, xmm9
                }
                R_TextHeight(FontHandle);
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm1, xmm0, xmm7
                  vmulss  xmm2, xmm1, cs:__real@3f400000
                  vmulss  xmm3, xmm2, xmm6
                  vaddss  xmm8, xmm3, xmm12
                }
                R_TextHeight(FontHandle);
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm1, xmm0, xmm7
                  vmulss  xmm2, xmm1, xmm6
                  vaddss  xmm3, xmm2, cs:__real@3f000000
                  vxorps  xmm1, xmm1, xmm1
                  vroundss xmm2, xmm1, xmm3, 1
                  vcvttss2si r9d, xmm2; textHeight
                }
                R_TextWidth(v43, 0x7FFFFFFF, FontHandle, _ER9);
                __asm { vdivss  xmm2, xmm8, dword ptr [r14+4] }
                hud_callsign_bg = cgMedia.hud_callsign_bg;
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vdivss  xmm1, xmm0, dword ptr [r14]
                  vmulss  xmm7, xmm1, xmm9
                  vmulss  xmm6, xmm2, xmm9
                }
                ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
                __asm
                {
                  vmovaps xmm3, xmm7; w
                  vxorps  xmm2, xmm2, xmm2; y
                  vmovaps xmm1, xmm11; x
                  vmovss  dword ptr [rsp+120h+fmt], xmm6
                }
                CL_Draw9SliceImage(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 2, 2, &colorWhite, hud_callsign_bg);
                __asm
                {
                  vmovaps xmm9, [rsp+120h+var_60]
                  vmovaps xmm7, [rsp+120h+var_40]
                  vmovss  xmm0, cs:__real@41d80000
                  vmovss  xmm1, cs:__real@41180000
                  vmovss  dword ptr [rbp+57h+screenPos], xmm0
                  vmovss  dword ptr [rbp+57h+screenPos+4], xmm1
                }
                if ( v31 )
                  R_ScopeDistortionTransform(v31, &screenPos, &screenPos);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+57h+screenPos+4]
                  vmovss  xmm1, dword ptr [rbp+57h+screenPos]
                  vmovss  dword ptr [rsp+120h+material], xmm10
                  vmovss  [rsp+120h+y], xmm0
                  vmovss  dword ptr [rsp+120h+fmt], xmm1
                }
                UI_DrawText(_R14, text, 0x7FFFFFFF, FontHandle, fmtb, yb, 2, 2, materiala, &color, 17);
              }
              v76 = CL_GetConfigString(v13 + 1);
              __asm { vmovaps xmm8, [rsp+120h+var_50] }
              v78 = v76;
              __asm { vmovaps xmm6, [rsp+120h+var_30] }
              if ( v76 && *v76 && I_stricmp(v76, "none") )
              {
                _RAX = UI_SafeTranslateString(v78);
                _ECX = v34;
                v82 = _RAX;
                __asm { vmovd   xmm0, ecx }
                LODWORD(_RAX) = 0;
                __asm
                {
                  vmovd   xmm1, eax
                  vpcmpeqd xmm2, xmm0, xmm1
                  vmovss  xmm1, cs:__real@41b00000
                  vmovss  dword ptr [rbp+57h+screenPos], xmm11
                  vblendvps xmm0, xmm1, xmm12, xmm2
                  vmovss  dword ptr [rbp+57h+screenPos+4], xmm0
                }
                if ( v31 )
                  R_ScopeDistortionTransform(v31, &screenPos, &screenPos);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+57h+screenPos+4]
                  vmovss  xmm2, dword ptr [rbp+57h+screenPos]
                  vmovss  dword ptr [rsp+120h+material], xmm10
                  vmovss  [rsp+120h+y], xmm0
                  vmovss  dword ptr [rsp+120h+fmt], xmm2
                }
                UI_DrawText(_R14, v82, 0x7FFFFFFF, FontHandle, fmtc, yc, 2, 2, materialb, &color, 17);
              }
              __asm { vxorps  xmm1, xmm1, xmm1; scale }
              R_AddCmdSetUIBlur(0, *(const float *)&_XMM1);
              __asm
              {
                vmovaps xmm11, [rsp+120h+var_80]
                vmovaps xmm10, [rsp+120h+var_70]
                vmovaps xmm12, [rsp+120h+var_90]
              }
              return;
            }
            if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(v12 + 230, GameModeFlagValues::ms_spValue, 0x39u) )
            {
              _RBX = DVARVEC4_civilianNameFontColor;
              if ( DVARVEC4_civilianNameFontColor )
                goto LABEL_29;
              v19 = "civilianNameFontColor";
            }
            else
            {
              _RBX = DVARVEC4_friendlyNameFontColor;
              if ( DVARVEC4_friendlyNameFontColor )
                goto LABEL_29;
              v19 = "friendlyNameFontColor";
            }
LABEL_27:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v19) )
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
  float fmt; 
  float gunZOfs; 

  Profile2_UpdateEntry(31);
  if ( ((unsigned __int8)&::gunZOfs & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &::gunZOfs) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&::gunZOfs);
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm1, dword ptr [rax+18070h]; scale }
  CL_SetFOVSensitivityScale(localClientNum, *(float *)&_XMM1);
  CL_SetUserCmdWeapons(localClientNum, &_RBX->weaponSelect, &_RBX->equippedOffHand, _RBX->weaponSelectInAlt);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+49DE8h]
    vmovss  xmm0, dword ptr [rbx+49DECh]
    vmovss  xmm3, dword ptr [rbx+49DE4h]; gunXOfs
    vmovss  xmm2, dword ptr [rbx+49DF4h]; gunYaw
    vmovss  [rsp+48h+gunZOfs], xmm0
    vmovss  dword ptr [rsp+48h+fmt], xmm1
    vmovss  xmm1, dword ptr [rbx+49DF0h]; gunPitch
  }
  CL_CGameSP_SetUserCmdAimValues(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, gunZOfs);
  CL_UpdateExtraButtons(localClientNum);
  CL_SetExtraButtons(localClientNum, _RBX->extraButtons);
  _RBX->extraButtons = 0i64;
  CG_DrawDebug_Infils(localClientNum);
  CL_DebugData_UpdateClient();
  CL_RenderScene(localClientNum, &_RBX->refdef, drawType);
  Profile2_UpdateEntry(31);
  if ( ((unsigned __int64)&::gunZOfs & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &::gunZOfs) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&::gunZOfs);
}

/*
==============
CG_DrawSP_Fade
==============
*/
void CG_DrawSP_Fade(LocalClientNum_t localClientNum, int r, int g, int b, int a, int startTime, int duration)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+28h+a]
    vmulss  xmm1, xmm0, cs:__real@3b808081
  }
  _RBX = &s_screenFade[localClientNum];
  _RBX->startTime = startTime;
  _RBX->duration = duration;
  __asm { vmovss  dword ptr [rbx], xmm1 }
  if ( _RBX->duration + _RBX->startTime <= CG_GetLocalClientGlobals(localClientNum)->time )
    _RBX->alphaCurrent = _RBX->alpha;
}

/*
==============
CG_DrawSP_FlashFade
==============
*/

void __fastcall CG_DrawSP_FlashFade(const LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  int v8; 
  bool v10; 
  int v11; 
  int v12; 
  int height; 
  int width; 
  float aspect; 
  vec4_t color; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  v5 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX = &s_screenFade[v5];
  v8 = _RBX->duration + _RBX->startTime;
  __asm { vmovss  xmm0, dword ptr [rbx] }
  v10 = (unsigned int)v8 <= LocalClientGlobals->time;
  if ( v8 >= LocalClientGlobals->time )
  {
    __asm { vucomiss xmm0, dword ptr [rbx+4] }
    if ( v8 != LocalClientGlobals->time )
    {
      v11 = Sys_Milliseconds();
      v12 = v11 - lastTime_0;
      lastTime_0 = v11;
      v10 = (unsigned int)(v12 - 1) <= 0x1F2;
      if ( (unsigned int)(v12 - 1) <= 0x1F2 )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+4]
          vmovss  xmm2, dword ptr [rbx]
          vcomiss xmm3, xmm2
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+0Ch]
          vcvtsi2ss xmm1, xmm1, ecx
          vdivss  xmm4, xmm1, xmm0
          vaddss  xmm1, xmm3, xmm4
          vcmpltss xmm0, xmm2, xmm1
          vblendvps xmm0, xmm1, xmm2, xmm0
          vmovss  dword ptr [rbx+4], xmm0
        }
      }
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
  }
  if ( !v10 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+78h+var_38], xmm6
      vmovss  dword ptr [rsp+78h+var_38+4], xmm6
      vmovss  dword ptr [rsp+78h+var_38+8], xmm6
      vmovss  dword ptr [rsp+78h+var_38+0Ch], xmm0
    }
    CL_GetScreenDimensions(&width, &height, &aspect);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, [rsp+78h+height]; height
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, [rsp+78h+width]; width
      vxorps  xmm1, xmm1, xmm1; y
      vxorps  xmm0, xmm0, xmm0; x
    }
    UI_FillRectPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &color);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
CG_DrawSP_FriendlyFire
==============
*/
bool CG_DrawSP_FriendlyFire(const cg_t *cgameGlob)
{
  __int64 localClientNum; 
  bool v11; 
  LocalClientNum_t v17; 
  const ScreenPlacement *ActivePlacement; 
  bool result; 
  float fmt; 
  int horzAlign; 
  int vertAlign; 
  float v35; 
  float x; 
  float y; 
  float w; 
  float h; 
  Weapon r_weapon; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovss  xmm6, dword ptr [rcx+738h]
  }
  _RSI = cgameGlob;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cgameGlob->predictedPlayerState.eFlags, ACTIVE, 0xBu) || !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RSI->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 3u) )
    goto LABEL_19;
  if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RSI->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x35u) || CL_Pause_IsGamePaused() )
  {
LABEL_19:
    result = 0;
  }
  else
  {
    localClientNum = _RSI->localClientNum;
    if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    _RAX = BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[localClientNum], &_RSI->predictedPlayerState);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+0E8h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rsp+0E8h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rsp+0E8h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    v11 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RSI->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RSI->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_RSI->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x1Bu));
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( BG_GetOverlay(&r_weapon, v11)->shaderMat )
      __asm { vcomiss xmm7, dword ptr [rsi+738h] }
    __asm
    {
      vmovss  xmm2, cs:__real@43f00000; screenHeight
      vmovss  xmm1, cs:__real@44200000; screenWidth
    }
    CG_CalcCrosshairPosition(_RSI, *(const float *)&_XMM1, *(const float *)&_XMM2, &x, &y);
    __asm
    {
      vmulss  xmm1, xmm6, [rsp+0E8h+x]
      vmulss  xmm0, xmm6, [rsp+0E8h+y]
    }
    v17 = _RSI->localClientNum;
    __asm
    {
      vmovss  [rsp+0E8h+x], xmm1
      vmovss  xmm1, cs:__real@42200000
      vmovss  [rsp+0E8h+h], xmm1
      vmovss  [rsp+0E8h+w], xmm1
      vmovss  [rsp+0E8h+y], xmm0
    }
    ActivePlacement = ScrPlace_GetActivePlacement(v17);
    ScrPlace_ApplyRect(ActivePlacement, &x, &y, &w, &h, 2, 2);
    __asm
    {
      vmovss  xmm6, [rsp+0E8h+w]
      vmulss  xmm1, xmm6, cs:__real@bf000000
      vaddss  xmm5, xmm1, [rsp+0E8h+x]
      vmovss  xmm4, cs:__real@3f800000
      vmovss  xmm3, [rsp+0E8h+h]; h
      vmulss  xmm1, xmm3, cs:__real@bf000000
      vaddss  xmm1, xmm1, [rsp+0E8h+y]; y
      vmovss  [rsp+0E8h+var_B0], xmm4
      vmovss  [rsp+0E8h+vertAlign], xmm4
      vmovss  [rsp+0E8h+horzAlign], xmm7
      vmovaps xmm2, xmm6; w
      vmovaps xmm0, xmm5; x
      vmovss  dword ptr [rsp+0E8h+fmt], xmm7
      vmovss  [rsp+0E8h+x], xmm5
      vmovss  [rsp+0E8h+y], xmm1
    }
    CL_DrawStretchPicPhysical(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, *(float *)&horzAlign, *(float *)&vertAlign, v35, &colorWhite, cgMedia.friendlyFireMaterial);
    result = 1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_28]
    vmovaps xmm7, [rsp+0E8h+var_38]
  }
  return result;
}

/*
==============
CgDrawSystemSP::Draw2D
==============
*/
void CgDrawSystemSP::Draw2D(CgDrawSystemSP *this, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  cg_t *LocalClientGlobals; 
  int v9; 
  int m_timeScaleTimeStart; 
  unsigned int m_timeScaleTimeEnd; 
  bool v13; 
  __int64 m_localClientNum; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  char v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  bool enabled; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  LocalClientNum_t v40; 
  const dvar_t *v41; 
  const dvar_t *v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  const dvar_t *v48; 
  const dvar_t *v50; 
  const dvar_t *v51; 
  __int64 v53; 
  __int64 v54; 
  int v57; 

  _RBX = this;
  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v9 = Sys_Milliseconds();
  m_timeScaleTimeStart = _RBX->m_timeScaleTimeStart;
  if ( m_timeScaleTimeStart && m_timeScaleTimeStart < v9 )
  {
    m_timeScaleTimeEnd = _RBX->m_timeScaleTimeEnd;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    v13 = v9 <= m_timeScaleTimeEnd;
    if ( v9 >= (int)m_timeScaleTimeEnd )
    {
      __asm { vmovss  xmm1, dword ptr [rbx+1Ch] }
      *(_QWORD *)&_RBX->m_timeScaleTimeStart = 0i64;
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vcomiss xmm0, xmm6
      }
      if ( m_timeScaleTimeEnd <= m_timeScaleTimeStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 545, ASSERT_TYPE_ASSERT, "(m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f)", (const char *)&queryFormat, "m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f") )
        __debugbreak();
      v13 = _RBX->m_timeScaleTimeEnd <= (unsigned int)_RBX->m_timeScaleTimeStart;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edi
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm4, xmm1, xmm0
        vmovss  xmm1, cs:__real@3f800000
        vmulss  xmm0, xmm4, dword ptr [rbx+1Ch]
        vsubss  xmm2, xmm1, xmm4
        vmulss  xmm3, xmm2, dword ptr [rbx+18h]
        vaddss  xmm1, xmm3, xmm0
      }
    }
    __asm
    {
      vcomiss xmm1, xmm6
      vmovss  [rsp+0A8h+arg_0], xmm1
    }
    if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_inline.h", 47, ASSERT_TYPE_ASSERT, "(timescale > 0)", (const char *)&queryFormat, "timescale > 0") )
      __debugbreak();
    Sys_CheckAcquireLock(&s_timescaleRWLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    s_timescaleRWLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_timescaleRWLock.writeThreadId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", 0, 0i64) )
      __debugbreak();
    s_timescale_aab -= s_timescale_set_aab;
    s_timescaleRWLock.writeThreadId = 0;
    LODWORD(com_codeTimeScale.timeFloat) = (ComCodeTimeScale)(v57 ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2)));
    ReleaseSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    Sys_CheckReleaseLock(&s_timescaleRWLock);
  }
  if ( CgDrawSystem::ShouldDrawAnything(_RBX, LocalClientGlobals) )
  {
    __asm { vmovaps [rsp+0A8h+var_58], xmm7 }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 4u) )
    {
      m_localClientNum = _RBX->m_localClientNum;
      if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
      {
        LODWORD(v54) = _RBX->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v54) )
          __debugbreak();
      }
      if ( (unsigned int)m_localClientNum >= CgWeaponSystem::ms_allocatedCount )
      {
        LODWORD(v54) = CgWeaponSystem::ms_allocatedCount;
        LODWORD(v53) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      if ( !CgWeaponSystem::ms_weaponSystemArray[m_localClientNum] )
      {
        LODWORD(v54) = m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v54) )
          __debugbreak();
      }
      CgWeaponSystem::ms_weaponSystemArray[m_localClientNum]->DrawFriendOrFoeTargetBoxes(CgWeaponSystem::ms_weaponSystemArray[m_localClientNum]);
    }
    v27 = DVARINT_debugOverlay;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.integer == 6 )
      CG_DrawDebug_DrawFontTest(_RBX->m_localClientNum);
    CG_ScreenBlur(_RBX->m_localClientNum);
    CG_DrawFlashDamage(LocalClientGlobals);
    v28 = DCONST_DVARBOOL_r_lowResOverlays;
    if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( !v28->current.enabled && _RBX->IsHudEnabled(_RBX) )
    {
      CG_Draw2dHudElems(_RBX->m_localClientNum, 0);
      CG_Draw2dHudElems(_RBX->m_localClientNum, 1);
    }
    CG_Draw_EndSceneCmdsAndAddHudLighting();
    v29 = DCONST_DVARBOOL_r_spDirectionalDamageIndicatorsLowRes;
    if ( !DCONST_DVARBOOL_r_spDirectionalDamageIndicatorsLowRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_spDirectionalDamageIndicatorsLowRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( !v29->current.enabled )
      goto LABEL_48;
    v30 = DCONST_DVARBOOL_r_lowResOverlays;
    if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.enabled )
      v31 = 1;
    else
LABEL_48:
      v31 = 0;
    if ( _RBX->IsHudEnabled(_RBX) )
    {
      v32 = DVARBOOL_cg_drawDamageDirection;
      if ( !DVARBOOL_cg_drawDamageDirection && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDamageDirection") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      if ( v32->current.enabled && !v31 )
        CG_DrawDamageDirectionIndicators(_RBX->m_localClientNum);
      CG_Draw2dHudElems(_RBX->m_localClientNum, 2);
      CG_DrawVehicleDebug(_RBX->m_localClientNum);
    }
    if ( _RBX->IsHudEnabled(_RBX) )
    {
      CG_DrawSP_ActorOverlay(_RBX->m_localClientNum);
      v33 = DVARBOOL_cg_drawFriendlyFireCrosshair;
      if ( !DVARBOOL_cg_drawFriendlyFireCrosshair && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawFriendlyFireCrosshair") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      if ( !v33->current.enabled || !CG_DrawSP_FriendlyFire(LocalClientGlobals) )
        CG_DrawReticles_DrawCrosshair(_RBX->m_localClientNum);
      CG_DrawGrenadeIndicators(_RBX->m_localClientNum);
    }
    v34 = DVARBOOL_bg_cinematicAboveUI;
    if ( !DVARBOOL_bg_cinematicAboveUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cinematicAboveUI") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    enabled = v34->current.enabled;
    if ( !enabled )
      UI_DrawInterpolatedCinematicElements(_RBX->m_localClientNum);
    if ( LUI_IsRenderUsingMultipleCmdLists() )
    {
      v36 = DCONST_DVARBOOL_r_lowResOverlays;
      if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v36->current.enabled )
      {
        R_AddCmdEndOfList();
        R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LOWRES_OVERLAY);
        if ( _RBX->IsHudEnabled(_RBX) )
        {
          CG_Draw2dHudElems(_RBX->m_localClientNum, 0);
          CG_Draw2dHudElems(_RBX->m_localClientNum, 1);
          if ( v31 )
            CG_DrawDamageDirectionIndicators(_RBX->m_localClientNum);
        }
      }
    }
    LUI_CoD_RenderFrame((const LocalClientNum_t)_RBX->m_localClientNum);
    if ( enabled )
      UI_DrawInterpolatedCinematicElements(_RBX->m_localClientNum);
    UI_DrawCinematicSubtitles(_RBX->m_localClientNum);
    CG_DrawDebug_DrawPerformanceWarnings(_RBX->m_localClientNum);
    v37 = DVARINT_debugOverlay;
    __asm
    {
      vmovss  xmm6, cs:__real@43160000
      vmovss  xmm7, cs:__real@41200000
    }
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v40 = _RBX->m_localClientNum;
    if ( v37->current.integer )
      CG_DrawDebug_UpdateInput(v40);
    else
      CG_DrawDebug_ResetInput(v40);
    CG_DrawDebug_UpdateMantleMotionPathExport(_RBX->m_localClientNum);
    v41 = DVARINT_debugOverlay;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    if ( v41->current.integer == 1 )
      goto LABEL_117;
    v42 = DVARINT_debugOverlay;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    if ( v42->current.integer == 9 )
    {
LABEL_117:
      CG_DrawDebug_DrawViewmodelInfo(_RBX->m_localClientNum);
      __asm
      {
        vmovss  xmm6, cs:__real@43480000
        vmovss  xmm7, cs:__real@437a0000
      }
    }
    else
    {
      v43 = DVARINT_debugOverlay;
      if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      if ( v43->current.integer == 2 )
      {
        CG_DrawDebugSP_DrawPSFlags((const LocalClientNum_t)_RBX->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 3 )
      {
        CG_DrawDebug_DrawGameETCounts(_RBX->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 5 )
      {
        CG_DrawDebugSP_DrawSaveInfo((const LocalClientNum_t)_RBX->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 7 )
      {
        CG_DrawDebug_DrawViewmodelAnimList(_RBX->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 10 )
      {
        CG_DrawDebug_DrawBulletFireLog(_RBX->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 11 )
      {
        CG_DrawDebug_DrawBallistics(_RBX->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 12 )
      {
        CG_DrawDebug_DrawSkydive(_RBX->m_localClientNum, 0);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 13 )
      {
        CG_DrawDebug_DrawSkydive(_RBX->m_localClientNum, 1);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 15 )
      {
        CG_DrawDebug_DrawButtonBits(_RBX->m_localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 16 )
      {
        CG_DrawDebug_DrawInputContext(_RBX->m_localClientNum);
      }
    }
    v44 = DVARBOOL_cg_dumpViewmodelBlendSpaces;
    if ( !DVARBOOL_cg_dumpViewmodelBlendSpaces && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpViewmodelBlendSpaces") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    if ( v44->current.enabled )
    {
      v45 = DVARBOOL_cg_dumpblendspaces_coverage;
      if ( !DVARBOOL_cg_dumpblendspaces_coverage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpblendspaces_coverage") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v45);
      __asm
      {
        vmovaps xmm2, xmm6; startY
        vmovaps xmm1, xmm7; startX
      }
      CG_DrawDebug_DrawVMBlendSpaces(_RBX->m_localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, v45->current.enabled);
    }
    v48 = DVARBOOL_cg_drawProcBonesAllocatorInfo;
    __asm { vmovaps xmm7, [rsp+0A8h+var_58] }
    if ( !DVARBOOL_cg_drawProcBonesAllocatorInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawProcBonesAllocatorInfo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    if ( v48->current.enabled )
      CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo((const LocalClientNum_t)_RBX->m_localClientNum);
    CG_DrawDebug_DrawViewKickLog(_RBX->m_localClientNum);
    CG_DrawDebug_DrawLogQueue(_RBX->m_localClientNum);
    v50 = DVARBOOL_cg_drawDevOverlays;
    if ( !DVARBOOL_cg_drawDevOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDevOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    if ( v50->current.enabled )
    {
      Profile_Begin(479);
      CG_DrawDebugSP_DrawDebugOverlays((const LocalClientNum_t)_RBX->m_localClientNum);
      Profile_EndInternal(NULL);
    }
    CG_DrawHits_SubmitText(_RBX->m_localClientNum);
    v51 = DVARBOOL_cg_drawDevOverlays;
    if ( !DVARBOOL_cg_drawDevOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDevOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    if ( v51->current.enabled )
    {
      if ( !LocalClientGlobals->showScores )
        CG_Draw_MiniConsole((const LocalClientNum_t)_RBX->m_localClientNum);
      CG_Draw_ErrorMessages((const LocalClientNum_t)_RBX->m_localClientNum, 20);
    }
    CG_DrawDebug_DrawCenterLines(_RBX->m_localClientNum);
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
CgDrawSystemSP::DrawHoldBreathHint
==============
*/

void __fastcall CgDrawSystemSP::DrawHoldBreathHint(CgDrawSystemSP *this, const rectDef_s *rect, GfxFont *font, double fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
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
        __asm { vmovss  dword ptr [rsp+58h+fmt], xmm6 }
        CG_Draw_HoldBreathHintCommon((const LocalClientNum_t)this->m_localClientNum, p_predictedPlayerState, rect, font, fmt, textStyle);
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
CgDrawSystemSP::DrawHybridToggleHint
==============
*/

void __fastcall CgDrawSystemSP::DrawHybridToggleHint(CgDrawSystemSP *this, const rectDef_s *rect, GfxFont *font, double fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 
  float v12; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  __asm { vmovss  [rsp+48h+var_28], xmm6 }
  CG_Draw_HybridToggleHintCommon(this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, rect, font, v12, textStyle);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
CgDrawSystemSP::FadeHudMenu
==============
*/
float CgDrawSystemSP::FadeHudMenu(CgDrawSystemSP *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  if ( CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.pm_type == 4 || CG_Draw_IsHudHidden() )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    *(double *)&_XMM0 = CgDrawSystem::FadeHudMenu(this, fadeDvar, displayStartTime, duration);
  return *(float *)&_XMM0;
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

void __fastcall CgDrawSystemSP::OwnerDraw(CgDrawSystemSP *this, rectDef_s *parentRect, double x, double y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, GfxFont *font, float scale, const vec4_t *color, int textStyle, int textAlignMode)
{
  float fmt; 
  float v29; 
  float v30; 
  rectDef_s rect; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( ((unsigned int (__fastcall *)(CgDrawSystemSP *, rectDef_s *))this->IsHudEnabled)(this, parentRect) )
  {
    CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum) == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 994, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rsp+0A8h+arg_20]
      vmovss  xmm1, [rsp+0A8h+arg_28]
    }
    rect.horzAlign = horzAlign;
    __asm
    {
      vmovss  [rsp+0A8h+rect.x], xmm6
      vmovss  [rsp+0A8h+rect.y], xmm7
      vmovss  [rsp+0A8h+rect.w], xmm0
      vmovss  [rsp+0A8h+rect.h], xmm1
    }
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
      __asm
      {
        vmovss  xmm0, [rsp+0A8h+arg_48]
        vmovss  xmm1, [rsp+0A8h+arg_40]
        vmovss  [rsp+0A8h+var_70], xmm0
        vmovss  xmm0, [rsp+0A8h+arg_60]
        vmovss  [rsp+0A8h+var_78], xmm1
        vmovss  dword ptr [rsp+0A8h+fmt], xmm0
      }
      CgDrawSystem::OwnerDrawCommon(this, &rect, ownerDraw, font, fmt, color, v29, v30, textStyle, textAlignMode);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_28]
    vmovaps xmm7, [rsp+0A8h+var_38]
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

void __fastcall CgDrawSystemSP::UpdateTimeScale(CgDrawSystemSP *this, double _XMM1_8)
{
  int v5; 
  int m_timeScaleTimeStart; 
  unsigned int m_timeScaleTimeEnd; 
  bool v9; 
  int v23; 
  int v25; 

  _RBX = this;
  v5 = Sys_Milliseconds();
  m_timeScaleTimeStart = _RBX->m_timeScaleTimeStart;
  if ( m_timeScaleTimeStart && m_timeScaleTimeStart < v5 )
  {
    m_timeScaleTimeEnd = _RBX->m_timeScaleTimeEnd;
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    v9 = v5 <= m_timeScaleTimeEnd;
    if ( v5 >= (int)m_timeScaleTimeEnd )
    {
      __asm { vmovss  xmm1, dword ptr [rbx+1Ch] }
      *(_QWORD *)&_RBX->m_timeScaleTimeStart = 0i64;
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vcomiss xmm0, xmm6
      }
      if ( m_timeScaleTimeEnd <= m_timeScaleTimeStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_draw_sp.cpp", 545, ASSERT_TYPE_ASSERT, "(m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f)", (const char *)&queryFormat, "m_timeScaleTimeEnd - m_timeScaleTimeStart > 0.0f") )
        __debugbreak();
      v9 = _RBX->m_timeScaleTimeEnd <= (unsigned int)_RBX->m_timeScaleTimeStart;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edi
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm4, xmm1, xmm0
        vmovss  xmm1, cs:__real@3f800000
        vmulss  xmm0, xmm4, dword ptr [rbx+1Ch]
        vsubss  xmm2, xmm1, xmm4
        vmulss  xmm3, xmm2, dword ptr [rbx+18h]
        vaddss  xmm1, xmm3, xmm0
      }
    }
    __asm
    {
      vcomiss xmm1, xmm6
      vmovaps xmm6, [rsp+68h+var_18]
      vmovss  [rsp+68h+arg_0], xmm1
    }
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_inline.h", 47, ASSERT_TYPE_ASSERT, "(timescale > 0)", (const char *)&queryFormat, "timescale > 0") )
      __debugbreak();
    Sys_CheckAcquireLock(&s_timescaleRWLock);
    AcquireSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    s_timescaleRWLock.writeThreadId = Sys_GetCurrentThreadId();
    if ( !s_timescaleRWLock.writeThreadId )
    {
      v23 = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_rwlock.h", 177, ASSERT_TYPE_ASSERT, "( lock->writeThreadId ) != ( INVALID_THREAD_ID )", "%s != %s\n\t%i, %i", "lock->writeThreadId", "INVALID_THREAD_ID", v23, 0i64) )
        __debugbreak();
    }
    s_timescale_aab -= s_timescale_set_aab;
    s_timescaleRWLock.writeThreadId = 0;
    LODWORD(com_codeTimeScale.timeFloat) = (ComCodeTimeScale)(v25 ^ (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) * (((unsigned int)&com_codeTimeScale ^ s_timescale_aab) + 2)));
    ReleaseSRWLockExclusive((PSRWLOCK)&s_timescaleRWLock);
    Sys_CheckReleaseLock(&s_timescaleRWLock);
  }
}

