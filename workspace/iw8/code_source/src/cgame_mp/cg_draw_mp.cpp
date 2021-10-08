/*
==============
CgDrawSystemMP::UpdateScissor
==============
*/

void __fastcall CgDrawSystemMP::UpdateScissor(CgDrawSystemMP *this)
{
  ?UpdateScissor@CgDrawSystemMP@@UEBAXXZ(this);
}

/*
==============
CG_DrawMP_ShouldMarkForEyesOn
==============
*/

bool __fastcall CG_DrawMP_ShouldMarkForEyesOn(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const characterInfo_t *oc_ci, int clientNum)
{
  return ?CG_DrawMP_ShouldMarkForEyesOn@@YA_NW4LocalClientNum_t@@PEBVcg_t@@PEBUcharacterInfo_t@@H@Z(localClientNum, cgameGlob, oc_ci, clientNum);
}

/*
==============
CG_DrawMP_DrawChatMessages
==============
*/

void __fastcall CG_DrawMP_DrawChatMessages(LocalClientNum_t localClientNum)
{
  ?CG_DrawMP_DrawChatMessages@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawMP_DrawExclusiveDebugOverlay
==============
*/

bool __fastcall CG_DrawMP_DrawExclusiveDebugOverlay(const LocalClientNum_t localClientNum)
{
  return ?CG_DrawMP_DrawExclusiveDebugOverlay@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgDrawSystemMP::DrawSRENotification
==============
*/

void __fastcall CgDrawSystemMP::DrawSRENotification(CgDrawSystemMP *this)
{
  ?DrawSRENotification@CgDrawSystemMP@@QEBAXXZ(this);
}

/*
==============
CgDrawSystemMP::PreDraw2D
==============
*/

void __fastcall CgDrawSystemMP::PreDraw2D(CgDrawSystemMP *this)
{
  ?PreDraw2D@CgDrawSystemMP@@UEAAXXZ(this);
}

/*
==============
CgDrawSystemMP::IsHudMissionFailed
==============
*/

int __fastcall CgDrawSystemMP::IsHudMissionFailed(CgDrawSystemMP *this)
{
  return ?IsHudMissionFailed@CgDrawSystemMP@@UEBAHXZ(this);
}

/*
==============
CgDrawSystemMP::SetHudElemDevString
==============
*/

void __fastcall CgDrawSystemMP::SetHudElemDevString(CgDrawSystemMP *this, int index, char *hudElemString, const int hudElemStringLength)
{
  ?SetHudElemDevString@CgDrawSystemMP@@UEBAXHQEADH@Z(this, index, hudElemString, hudElemStringLength);
}

/*
==============
CgDrawSystemMP::DrawHybridToggleHint
==============
*/

void __fastcall CgDrawSystemMP::DrawHybridToggleHint(CgDrawSystemMP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?DrawHybridToggleHint@CgDrawSystemMP@@MEBAXPEBUrectDef_s@@PEAUGfxFont@@MH@Z(this, rect, font, fontscale, textStyle);
}

/*
==============
CgDrawSystemMP::Draw2D
==============
*/

void __fastcall CgDrawSystemMP::Draw2D(CgDrawSystemMP *this, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  ?Draw2D@CgDrawSystemMP@@UEAAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@@Z(this, cameraOrigin, cameraAxis);
}

/*
==============
CgDrawSystemMP::GenerateSceneVerts
==============
*/

void __fastcall CgDrawSystemMP::GenerateSceneVerts(CgDrawSystemMP *this)
{
  ?GenerateSceneVerts@CgDrawSystemMP@@UEBAXXZ(this);
}

/*
==============
CgDrawSystemMP::ShouldDrawCrosshair
==============
*/

bool __fastcall CgDrawSystemMP::ShouldDrawCrosshair(CgDrawSystemMP *this)
{
  return ?ShouldDrawCrosshair@CgDrawSystemMP@@UEBA_NXZ(this);
}

/*
==============
CG_DrawMP_ArchiveState
==============
*/

void __fastcall CG_DrawMP_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?CG_DrawMP_ArchiveState@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
CgDrawSystemMP::IsHudEnabled
==============
*/

int __fastcall CgDrawSystemMP::IsHudEnabled(CgDrawSystemMP *this)
{
  return ?IsHudEnabled@CgDrawSystemMP@@MEBAHXZ(this);
}

/*
==============
CG_DrawMP_DrawActive
==============
*/

void __fastcall CG_DrawMP_DrawActive(const LocalClientNum_t localClientNum, unsigned int drawType)
{
  ?CG_DrawMP_DrawActive@@YAXW4LocalClientNum_t@@I@Z(localClientNum, drawType);
}

/*
==============
CgDrawSystemMP::SetLastSRETime
==============
*/

void __fastcall CgDrawSystemMP::SetLastSRETime(CgDrawSystemMP *this, const int lastSRETime, const char *message)
{
  ?SetLastSRETime@CgDrawSystemMP@@QEAAXHPEBD@Z(this, lastSRETime, message);
}

/*
==============
CgDrawSystemMP::DrawHoldBreathHint
==============
*/

void __fastcall CgDrawSystemMP::DrawHoldBreathHint(CgDrawSystemMP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  ?DrawHoldBreathHint@CgDrawSystemMP@@MEBAXPEBUrectDef_s@@PEAUGfxFont@@MH@Z(this, rect, font, fontscale, textStyle);
}

/*
==============
CgDrawSystemMP::OwnerDraw
==============
*/

void __fastcall CgDrawSystemMP::OwnerDraw(CgDrawSystemMP *this, rectDef_s *parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, GfxFont *font, float scale, const vec4_t *color, int textStyle, int textAlignMode)
{
  ?OwnerDraw@CgDrawSystemMP@@UEBAXUrectDef_s@@MMMMHHMMHPEAUGfxFont@@MAEBTvec4_t@@HH@Z(this, parentRect, x, y, w, h, horzAlign, vertAlign, text_x, text_y, ownerDraw, font, scale, color, textStyle, textAlignMode);
}

/*
==============
CgDrawSystemMP::DrawDebugCharacterPoses
==============
*/

void __fastcall CgDrawSystemMP::DrawDebugCharacterPoses(CgDrawSystemMP *this)
{
  ?DrawDebugCharacterPoses@CgDrawSystemMP@@QEAAXXZ(this);
}

/*
==============
CgDrawSystemMP::SaveDebugCharacterPoses
==============
*/

void __fastcall CgDrawSystemMP::SaveDebugCharacterPoses(CgDrawSystemMP *this)
{
  ?SaveDebugCharacterPoses@CgDrawSystemMP@@QEAAXXZ(this);
}

/*
==============
CgDrawSystemMP::ShouldDrawHud
==============
*/

int __fastcall CgDrawSystemMP::ShouldDrawHud(CgDrawSystemMP *this)
{
  return ?ShouldDrawHud@CgDrawSystemMP@@UEBAHXZ(this);
}

/*
==============
CgDrawSystemMP::FadeHudMenu
==============
*/

double __fastcall CgDrawSystemMP::FadeHudMenu(CgDrawSystemMP *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  double result; 

  *(float *)&result = ?FadeHudMenu@CgDrawSystemMP@@UEBAMPEBUdvar_t@@HH@Z(this, fadeDvar, displayStartTime, duration);
  return result;
}

/*
==============
CG_DrawMP_ArchiveState
==============
*/
void CG_DrawMP_ArchiveState(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_ArchiveShellShock(localClientNum, memFile);
  CG_VisionSet_ArchiveMP(memFile, &LocalClientGlobals->cvsData);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->painVisionSoundActive);
  MemFile_ArchiveData(memFile, 4, &LocalClientGlobals->showHud);
  MemFile_ArchiveData(memFile, 1024, LocalClientGlobals->objectiveText);
  MemFile_ArchiveData(memFile, 128, LocalClientGlobals->hudElemSound);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->remoteMissileCamInitialized);
  MemFile_ArchiveData(memFile, 12, &LocalClientGlobals->remoteMissileCamAngles);
  MemFile_ArchiveData(memFile, 1, &LocalClientGlobals->breathPressedLastFrame);
  CG_HudLighting_ArchiveState(memFile, &LocalClientGlobals->hudLightingState);
}

/*
==============
CG_DrawMP_ConeTargetingSetFriendlyAndEnemyFlag
==============
*/
void CG_DrawMP_ConeTargetingSetFriendlyAndEnemyFlag(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 438, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 441, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->coneTargetingState.isUsingConeTargeting )
  {
    if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 449, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    p_weapFlags = &LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags;
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 4u);
    if ( LocalClientGlobals->coneTargetingState.targetCount > 0 )
    {
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(p_weapFlags, ACTIVE, 3u);
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(p_weapFlags, ACTIVE, 4u);
    }
  }
}

/*
==============
CG_DrawMP_DrawActive
==============
*/
void CG_DrawMP_DrawActive(const LocalClientNum_t localClientNum, unsigned int drawType)
{
  CgCompassSystem *CompassSystem; 
  int ControllerFromClient; 
  __int64 v8; 
  int v9; 
  vec3_t kickAngles; 

  _RSI = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm1, dword ptr [rax+18070h]; scale }
  CL_SetFOVSensitivityScale(localClientNum, *(float *)&_XMM1);
  if ( !_RSI->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LODWORD(kickAngles.v[0]) = _RSI->kickAngles.data[0] ^ ((((_DWORD)_RSI + 302524) ^ _RSI->kickAngles.secureInt32_3_aab) * ((((_DWORD)_RSI + 302524) ^ _RSI->kickAngles.secureInt32_3_aab) + 2));
  LODWORD(kickAngles.v[1]) = ((((_DWORD)_RSI + 302528) ^ _RSI->kickAngles.secureInt32_3_aab) * ((((_DWORD)_RSI + 302528) ^ _RSI->kickAngles.secureInt32_3_aab) + 2)) ^ _RSI->kickAngles.data[1];
  LODWORD(kickAngles.v[2]) = ((((_DWORD)_RSI + 302532) ^ _RSI->kickAngles.secureInt32_3_aab) * ((((_DWORD)_RSI + 302532) ^ _RSI->kickAngles.secureInt32_3_aab) + 2)) ^ _RSI->kickAngles.data[2];
  CL_CGameMP_SetUserCmdAimValues(localClientNum, &kickAngles);
  BG_AssertOffhandIndexOrNone(&_RSI->equippedOffHand);
  CL_SetUserCmdWeapons(localClientNum, &_RSI->weaponSelect, &_RSI->equippedOffHand, _RSI->weaponSelectInAlt);
  CL_UpdateExtraButtons(localClientNum);
  CL_SetExtraButtons(localClientNum, _RSI->extraButtons);
  _RSI->extraButtons = 0i64;
  CG_DrawDebug_Infils(localClientNum);
  CL_DebugData_UpdateClient();
  CL_RenderScene(localClientNum, &_RSI->refdef, drawType);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    LODWORD(v8) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1197, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  CompassSystem = CgCompassSystem::GetCompassSystem(localClientNum);
  if ( CgCompassSystem::GetCurrentCompassType(CompassSystem) == COMPASS_TYPE_TACMAP )
    CL_SetUserCommandSetStateFlag(localClientNum, HALF);
  else
    CL_SetUserCommandClearStateFlag(localClientNum, HALF);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamerProfile_GetGamepadEnabled(ControllerFromClient) )
  {
    if ( GamerProfile_GetIsParachuteAutoDeployGamepadDisabled(ControllerFromClient) )
      CL_SetUserCommandClearStateFlag(localClientNum, HALF_HALF);
    else
      CL_SetUserCommandSetStateFlag(localClientNum, HALF_HALF);
    CL_SetUserCommandSetStateFlag(localClientNum, LONG_LONG);
  }
  else
  {
    if ( GamerProfile_GetIsParachuteAutoDeployKBMDisabled(ControllerFromClient) )
      CL_SetUserCommandClearStateFlag(localClientNum, HALF_HALF);
    else
      CL_SetUserCommandSetStateFlag(localClientNum, HALF_HALF);
    CL_SetUserCommandClearStateFlag(localClientNum, LONG_LONG);
  }
  if ( GamerProfile_GetWarTrackPassengerEnable(ControllerFromClient) )
    CL_SetUserCommandSetStateFlag(localClientNum, (const UserCommandStateFlags)16);
  else
    CL_SetUserCommandClearStateFlag(localClientNum, (const UserCommandStateFlags)16);
  memset(&kickAngles, 0, sizeof(kickAngles));
}

/*
==============
CG_DrawMP_DrawChatMessages
==============
*/
void CG_DrawMP_DrawChatMessages(LocalClientNum_t localClientNum)
{
  const dvar_t *v11; 
  __int64 v12; 
  const dvar_t *v13; 
  int integer; 
  cgs_t *v18; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v30; 
  unsigned int time; 
  GfxFont *FontHandle; 
  int v34; 
  const dvar_t *v40; 
  __int64 v41; 
  const char *v46; 
  unsigned __int8 v47; 
  float fmt; 
  float fmta; 
  __int64 horzAlign; 
  int horzAligna; 
  __int64 vertAlign; 
  float material; 
  vec4_t outColor; 

  v11 = DVARBOOL_cl_textChatEnabled;
  v12 = localClientNum;
  if ( !DVARBOOL_cl_textChatEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_textChatEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    v13 = DVARINT_cg_chatHeight;
    if ( !DVARINT_cg_chatHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    if ( integer )
    {
      _RBX = DVARVEC2_cg_hudChatPosition;
      __asm
      {
        vmovaps [rsp+158h+var_98], xmm12
        vmovaps [rsp+158h+var_B8], xmm14
      }
      if ( !DVARVEC2_cg_hudChatPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudChatPosition") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vcvttss2si eax, dword ptr [rbx+28h]
        vcvttss2si eax, dword ptr [rbx+2Ch]
      }
      if ( (unsigned int)v12 >= cgs_t::ms_allocatedCount )
      {
        LODWORD(vertAlign) = cgs_t::ms_allocatedCount;
        LODWORD(horzAlign) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", horzAlign, vertAlign) )
          __debugbreak();
      }
      if ( !cgs_t::ms_cgsArray[v12] )
      {
        LODWORD(vertAlign) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", vertAlign) )
          __debugbreak();
      }
      if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
      {
        LODWORD(vertAlign) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", vertAlign) )
          __debugbreak();
      }
      v18 = cgs_t::ms_cgsArray[v12];
      __asm { vmovss  xmm2, cs:__real@41600000 }
      _R12 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v12);
      __asm { vcvttss2si ecx, dword ptr [rax+24h] }
      _EAX = 768;
      __asm
      {
        vmovd   xmm1, eax
        vmovd   xmm0, ecx
        vpcmpgtd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@41900000
        vblendvps xmm12, xmm1, xmm2, xmm3
        vmulss  xmm14, xmm12, cs:__real@3caaaaab
        vmovss  [rsp+158h+var_F0], xmm12
      }
      if ( v18->teamLastChatPos != v18->teamChatPos )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
        v30 = DVARINT_cg_chatTime;
        time = LocalClientGlobals->time;
        if ( !DVARINT_cg_chatTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v30);
        if ( (signed int)(time - v18->teamChatMsgTimes[v18->teamLastChatPos % integer]) > v30->current.integer )
          ++v18->teamLastChatPos;
        __asm { vmovaps xmm2, xmm14; scale }
        FontHandle = UI_GetFontHandle(_R12, 3, *(float *)&_XMM2);
        v34 = v18->teamChatPos - 1;
        if ( v34 >= v18->teamLastChatPos )
        {
          __asm
          {
            vmovaps [rsp+158h+var_58], xmm8
            vmovss  xmm8, cs:__real@3f800000
            vmovaps [rsp+158h+var_78], xmm10
            vmovaps [rsp+158h+var_88], xmm11
            vmovss  xmm11, cs:__real@3ba3d70a
            vmovaps [rsp+158h+var_A8], xmm13
            vmovss  xmm13, cs:__real@43480000
            vmovaps [rsp+158h+var_C8], xmm15
            vmovss  xmm15, cs:__real@3e800000
            vmovaps [rsp+158h+var_38], xmm6
            vmovaps [rsp+158h+var_48], xmm7
            vmovaps [rsp+158h+var_68], xmm9
            vxorps  xmm10, xmm10, xmm10
          }
          while ( 1 )
          {
            v40 = DVARINT_cg_chatTime;
            if ( !DVARINT_cg_chatTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatTime") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v40);
            v41 = v34 % integer;
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, dword ptr [rsi+28h]
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vsubss  xmm2, xmm1, xmm0
              vcomiss xmm2, xmm13
            }
            if ( time > v18->teamChatMsgTimes[v41] )
              break;
            __asm
            {
              vmulss  xmm9, xmm2, xmm11
              vcomiss xmm9, xmm10
            }
            if ( time > v18->teamChatMsgTimes[v41] )
              goto LABEL_35;
LABEL_43:
            if ( --v34 < v18->teamLastChatPos )
            {
              __asm
              {
                vmovaps xmm15, [rsp+158h+var_C8]
                vmovaps xmm13, [rsp+158h+var_A8]
                vmovaps xmm11, [rsp+158h+var_88]
                vmovaps xmm10, [rsp+158h+var_78]
                vmovaps xmm9, [rsp+158h+var_68]
                vmovaps xmm8, [rsp+158h+var_58]
                vmovaps xmm7, [rsp+158h+var_48]
                vmovaps xmm6, [rsp+158h+var_38]
              }
              goto LABEL_45;
            }
          }
          __asm { vmovaps xmm9, xmm8 }
LABEL_35:
          v46 = v18->teamChatMsgs[v41];
          if ( (cgs_t *)((char *)v18 + 193 * v41) == (cgs_t *)-463288i64 || *v46 != 94 || (v47 = v18->teamChatMsgs[v41][1]) == 0 || v47 == 94 || (unsigned __int8)(v47 - 39) > 0x17u )
          {
            __asm
            {
              vmovaps xmm0, xmm8
              vmovaps xmm1, xmm8
              vmovaps xmm2, xmm8
            }
          }
          else
          {
            CL_LookupColor((LocalClientNum_t)v12, v47, &outColor);
            __asm
            {
              vmovss  xmm2, dword ptr [rsp+158h+outColor+8]
              vmovss  xmm1, dword ptr [rsp+158h+outColor+4]
              vmovss  xmm0, dword ptr [rsp+158h+outColor]
            }
          }
          __asm
          {
            vmulss  xmm0, xmm0, xmm15
            vmovss  dword ptr [rsp+158h+outColor], xmm0
            vmulss  xmm1, xmm1, xmm15
            vmovss  dword ptr [rsp+158h+outColor+4], xmm1
            vmulss  xmm1, xmm9, cs:__real@3f19999a
            vmulss  xmm0, xmm2, xmm15
            vmovss  dword ptr [rsp+158h+outColor+8], xmm0
            vmovss  dword ptr [rsp+158h+outColor+0Ch], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm12
            vxorps  xmm7, xmm7, xmm7
            vcvtsi2ss xmm7, xmm7, [rsp+158h+var_F8]
            vmovaps xmm3, xmm14; scale
            vsubss  xmm6, xmm7, xmm1
          }
          UI_TextWidth(v46, 0, FontHandle, *(float *)&_XMM3);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vaddss  xmm3, xmm0, cs:__real@41f00000; w
            vmovaps xmm2, xmm6; y
            vmovaps xmm1, xmm10; x
            vmovss  dword ptr [rsp+158h+fmt], xmm12
          }
          UI_DrawHandlePic(_R12, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 8, 8, &outColor, cgMedia.teamStatusBar);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  dword ptr [rsp+158h+outColor+0Ch], xmm9
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm12
            vmovss  dword ptr [rsp+158h+material], xmm14
            vsubss  xmm3, xmm7, xmm1
            vsubss  xmm2, xmm12, xmm8
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, [rsp+158h+var_F4]
            vaddss  xmm4, xmm3, xmm2
            vmovss  [rsp+158h+horzAlign], xmm4
            vmovss  dword ptr [rsp+158h+fmt], xmm0
            vmovss  dword ptr [rsp+158h+outColor], xmm8
            vmovss  dword ptr [rsp+158h+outColor+4], xmm8
            vmovss  dword ptr [rsp+158h+outColor+8], xmm8
          }
          UI_DrawText(_R12, v46, 0x7FFFFFFF, FontHandle, fmta, *(float *)&horzAligna, 8, 8, material, &outColor, 3);
          goto LABEL_43;
        }
      }
LABEL_45:
      __asm
      {
        vmovaps xmm12, [rsp+158h+var_98]
        vmovaps xmm14, [rsp+158h+var_B8]
      }
    }
  }
}

/*
==============
CG_DrawMP_DrawDebugCharacterPose
==============
*/
void CG_DrawMP_DrawDebugCharacterPose(AntilagDebugCharacterInfo *info)
{
  int boneCount; 
  int v3; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1496, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  boneCount = info->boneCount;
  if ( boneCount )
  {
    v3 = 0;
    if ( boneCount > 0 )
    {
      do
      {
        CG_DebugBoxOriented(&info->bones[v3].worldPos, &info->bones[v3].bounds, (const tmat33_t<vec3_t> *)&info->bones[v3].worldRot, &colorGreen, 0, 0);
        ++v3;
      }
      while ( v3 < info->boneCount );
    }
  }
}

/*
==============
CG_DrawMP_DrawExclusiveDebugOverlay
==============
*/
char CG_DrawMP_DrawExclusiveDebugOverlay(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  bool Bool_Internal_DebugName; 
  const dvar_t *v11; 

  v1 = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
    CG_DrawDebug_UpdateInput(localClientNum);
  else
    CG_DrawDebug_ResetInput(localClientNum);
  CG_DrawDebug_UpdateMantleMotionPathExport(localClientNum);
  v3 = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer == 1 )
    goto LABEL_53;
  v4 = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == 9 )
  {
LABEL_53:
    CG_DrawDebug_DrawViewmodelInfo(localClientNum);
    Profile_Begin(479);
    CG_DrawDebugMP_DrawDebugOverlays(localClientNum);
    Profile_EndInternal(NULL);
  }
  else
  {
    v5 = DVARINT_debugOverlay;
    if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer != 2 )
    {
      v6 = DVARINT_debugOverlay;
      if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.integer == 3 )
      {
        CG_DrawDebug_DrawGameETCounts(localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 6 )
      {
        CG_DrawDebug_DrawFontTest(localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 7 )
      {
        CG_DrawDebug_DrawViewmodelAnimList(localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 10 )
      {
        CG_DrawDebug_DrawBulletFireLog(localClientNum);
      }
      else if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 11 )
      {
        CG_DrawDebug_DrawBallistics(localClientNum);
      }
      else
      {
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") != 12 )
        {
          if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 13 )
          {
            CG_DrawDebug_DrawSkydive(localClientNum, 1);
          }
          else
          {
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 14 )
            {
              CG_DrawDebug_DrawSvProfile(localClientNum);
              return 0;
            }
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 15 )
            {
              CG_DrawDebug_DrawButtonBits(localClientNum);
              return 0;
            }
            if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 16 )
            {
              CG_DrawDebug_DrawInputContext(localClientNum);
              return 0;
            }
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_dumpViewmodelBlendSpaces, "cg_dumpViewmodelBlendSpaces") )
            {
              Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_dumpblendspaces_coverage, "cg_dumpblendspaces_coverage");
              __asm
              {
                vmovss  xmm2, cs:__real@43160000; startY
                vmovss  xmm1, cs:__real@41200000; startX
              }
              CG_DrawDebug_DrawVMBlendSpaces(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, Bool_Internal_DebugName);
            }
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawProcBonesAllocatorInfo, "cg_drawProcBonesAllocatorInfo") )
              CG_DrawDebug_DrawXAnimProcBonesAllocatorInfo(localClientNum);
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDisconnectPercentage, "cg_drawDisconnectPercentage") )
              CG_DrawDisconnectPercentage(localClientNum);
            if ( net_showprofile->current.integer )
            {
              CG_DrawNetSnapshotAnalysis(localClientNum);
              CG_DrawNetDebugOverlays(localClientNum);
              return 1;
            }
          }
          return 0;
        }
        CG_DrawDebug_DrawSkydive(localClientNum, 0);
      }
      return Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly");
    }
    CG_DrawDebugMP_DrawPSFlags(localClientNum);
  }
  v11 = DVARBOOL_debugOverlayOnly;
  if ( !DVARBOOL_debugOverlayOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlayOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  return v11->current.enabled;
}

/*
==============
CG_DrawMP_DrawSay
==============
*/
void CG_DrawMP_DrawSay(LocalClientNum_t localClientNum)
{
  _RBX = DVARVEC2_cg_hudSayPosition;
  if ( !DVARVEC2_cg_hudSayPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSayPosition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vcvttss2si r8d, dword ptr [rbx+2Ch]
    vcvttss2si edx, dword ptr [rbx+28h]; x
  }
  Con_DrawSay(localClientNum, _EDX, _ER8 + 28);
}

/*
==============
CG_DrawMP_FinishScanForCrosshairEntity
==============
*/
void CG_DrawMP_FinishScanForCrosshairEntity(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v10; 
  char v12; 
  unsigned __int16 EntityHitId; 
  bool isUsingConeTargeting; 
  unsigned __int16 v17; 
  float fraction; 
  float fractiona; 
  vec3_t end; 
  vec3_t start; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 467, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 468, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( g_crosshairTrace.valid )
  {
    __asm { vmovaps [rsp+78h+var_18], xmm6 }
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr cs:g_crosshairTrace.start
      vmovss  xmm1, dword ptr cs:g_crosshairTrace.start+4
      vmovss  dword ptr [rsp+78h+start], xmm0
      vmovss  xmm0, dword ptr cs:g_crosshairTrace.start+8
      vmovss  dword ptr [rsp+78h+start+4], xmm1
      vmovss  xmm1, dword ptr cs:g_crosshairTrace.end
      vmovss  dword ptr [rsp+78h+start+8], xmm0
      vmovss  xmm0, dword ptr cs:g_crosshairTrace.end+4
      vmovss  dword ptr [rsp+78h+end], xmm1
      vmovss  xmm1, dword ptr cs:g_crosshairTrace.end+8
    }
    v10 = LocalClientGlobals;
    __asm
    {
      vmovss  dword ptr [rsp+78h+end+4], xmm0
      vmovss  dword ptr [rsp+78h+end+8], xmm1
    }
    CG_WaitWorkerTrace(&g_crosshairTrace.workerTrace);
    __asm
    {
      vmovss  xmm6, cs:g_crosshairTrace.workerTrace.trace.fraction
      vcomiss xmm6, cs:__real@3f800000
    }
    if ( v12 )
    {
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@46000000
        vcvttss2si rax, xmm0
      }
      v10->crosshairTraceDistance = _RAX;
    }
    if ( !g_crosshairTrace.isFlashed )
    {
      EntityHitId = Trace_GetEntityHitId(&g_crosshairTrace.workerTrace.trace);
      isUsingConeTargeting = v10->coneTargetingState.isUsingConeTargeting;
      v17 = EntityHitId;
      if ( !CG_DrawMP_ScanForCrosshairEntity_HitCharacter(EntityHitId) )
        goto LABEL_18;
      __asm { vmovss  [rsp+78h+fraction], xmm6 }
      CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter(localClientNum, v10, v17, &start, &end, fraction);
      if ( isUsingConeTargeting )
      {
LABEL_18:
        if ( CG_DrawMP_ScanForCrosshairEntity_HitVehicle(localClientNum, v17) )
        {
          __asm { vmovss  [rsp+78h+fraction], xmm6 }
          CG_DrawMP_ScanForCrosshairEntity_ColorForVehicle(localClientNum, v10, v17, &start, &end, fractiona);
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+78h+var_18] }
  }
}

/*
==============
CG_DrawMP_MarkVisibleNames
==============
*/
void CG_DrawMP_MarkVisibleNames(CgGlobalsMP *const cgameGlob)
{
  const CgSnapshotMP *NextSnap; 
  int v3; 
  entityState_t *entities; 
  __int64 number; 
  __int64 localClientNum; 
  CgEntitySystem *v7; 
  __int64 v8; 
  __int64 v9; 

  NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)cgameGlob->localClientNum);
  v3 = 0;
  *(_QWORD *)cgameGlob->m_characterCullIn = 0i64;
  *(_QWORD *)&cgameGlob->m_characterCullIn[2] = 0i64;
  *(_QWORD *)&cgameGlob->m_characterCullIn[4] = 0i64;
  *(_QWORD *)&cgameGlob->m_characterCullIn[6] = 0i64;
  if ( NextSnap->numEntities > 0 )
  {
    entities = NextSnap->entities;
    do
    {
      number = entities->number;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (int)number >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      localClientNum = cgameGlob->localClientNum;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v9) = cgameGlob->localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v9) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v9) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v8) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
      {
        LODWORD(v9) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v9) )
          __debugbreak();
      }
      v7 = CgEntitySystem::ms_entitySystemArray[localClientNum];
      if ( (unsigned int)number >= 0x800 )
      {
        LODWORD(v9) = 2048;
        LODWORD(v8) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( v7->m_entities[number].pose.cullIn == 2 )
      {
        if ( (unsigned int)number >= 0xF8 )
        {
          LODWORD(v9) = 248;
          LODWORD(v8) = number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 620, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (200 + 48) )", "entityIndex doesn't index MAX_CHARACTERS_MP\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        cgameGlob->m_characterCullIn[number >> 5] |= 0x80000000 >> (number & 0x1F);
      }
      ++v3;
      ++entities;
    }
    while ( v3 < NextSnap->numEntities );
  }
}

/*
==============
CG_DrawMP_ScanForCrosshairEntity
==============
*/

void __fastcall CG_DrawMP_ScanForCrosshairEntity(LocalClientNum_t localClientNum, double _XMM1_8)
{
  CgGlobalsMP *LocalClientGlobals; 
  int FlashbangedRemainingTime; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v10; 
  char v12; 
  unsigned __int8 *priorityMap; 
  char v29; 
  unsigned __int16 EntityHitId; 
  float skipEntities; 
  float skipEntitiesa; 
  vec3_t outOrg; 
  float fraction[2]; 
  __int64 v41; 
  vec3_t end; 
  vec3_t forward; 
  trace_t results; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  v41 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 532, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 533, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientGlobals->crosshairClientNum = -1;
  LocalClientGlobals->crosshairTraceDistance = 0;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 4u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 3u);
  if ( !LocalClientGlobals->cvsData.transitory.remoteMissileCam )
  {
    FlashbangedRemainingTime = CG_GetFlashbangedRemainingTime(localClientNum);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &LocalClientGlobals->predictedPlayerState);
    v10 = CurrentWeaponForPlayer;
    if ( FlashbangedRemainingTime <= 0 || BG_IsAirburstWeapon(CurrentWeaponForPlayer) )
    {
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      *(double *)&_XMM0 = CG_View_GetCrosshairVerticalOffset(localClientNum, &LocalClientGlobals->predictedPlayerState);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm0, xmm1
      }
      if ( v12 )
      {
        __asm
        {
          vmovss  xmm6, cs:__real@46000000
          vmulss  xmm0, xmm6, dword ptr [rbx+6944h]
          vaddss  xmm1, xmm0, dword ptr [rsp+140h+outOrg]
          vmovss  dword ptr [rbp+40h+end], xmm1
          vmulss  xmm0, xmm6, dword ptr [rbx+6948h]
          vaddss  xmm1, xmm0, dword ptr [rsp+140h+outOrg+4]
          vmovss  dword ptr [rbp+40h+end+4], xmm1
          vmulss  xmm0, xmm6, dword ptr [rbx+694Ch]
          vaddss  xmm1, xmm0, dword ptr [rsp+140h+outOrg+8]
          vmovss  dword ptr [rbp+40h+end+8], xmm1
        }
      }
      else
      {
        AngleVectors(&LocalClientGlobals->baseGunAngles, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm6, cs:__real@46000000
          vmulss  xmm1, xmm6, dword ptr [rbp+40h+forward]
          vaddss  xmm2, xmm1, dword ptr [rsp+140h+outOrg]
          vmovss  dword ptr [rbp+40h+end], xmm2
          vmulss  xmm1, xmm6, dword ptr [rbp+40h+forward+4]
          vaddss  xmm2, xmm1, dword ptr [rsp+140h+outOrg+4]
          vmovss  dword ptr [rbp+40h+end+4], xmm2
          vmulss  xmm1, xmm6, dword ptr [rbp+40h+forward+8]
          vaddss  xmm2, xmm1, dword ptr [rsp+140h+outOrg+8]
          vmovss  dword ptr [rbp+40h+end+8], xmm2
        }
      }
      fraction[0] = *(float *)&LocalClientGlobals->predictedPlayerState.clientNum;
      priorityMap = BG_GetWeaponPriorityMap(v10, 0);
      PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &end, &bounds_origin, (const int *)fraction, 1, 0, 41994529, 1, priorityMap, All);
      __asm
      {
        vmovss  xmm0, [rbp+40h+results.fraction]
        vcomiss xmm0, cs:__real@3f800000
      }
      if ( v29 )
      {
        __asm
        {
          vmulss  xmm0, xmm0, xmm6
          vcvttss2si rax, xmm0
        }
        LocalClientGlobals->crosshairTraceDistance = _RAX;
      }
      if ( FlashbangedRemainingTime <= 0 )
      {
        EntityHitId = Trace_GetEntityHitId(&results);
        if ( CG_DrawMP_ScanForCrosshairEntity_HitCharacter(EntityHitId) )
        {
          __asm
          {
            vmovss  xmm0, [rbp+40h+results.fraction]
            vmovss  dword ptr [rsp+140h+skipEntities], xmm0
          }
          CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter(localClientNum, LocalClientGlobals, EntityHitId, &outOrg, &end, skipEntities);
        }
        else if ( CG_DrawMP_ScanForCrosshairEntity_HitVehicle(localClientNum, EntityHitId) )
        {
          __asm
          {
            vmovss  xmm0, [rbp+40h+results.fraction]
            vmovss  dword ptr [rsp+140h+skipEntities], xmm0
          }
          CG_DrawMP_ScanForCrosshairEntity_ColorForVehicle(localClientNum, LocalClientGlobals, EntityHitId, &outOrg, &end, skipEntitiesa);
        }
      }
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v45;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter
==============
*/
void CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter(LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob, const unsigned __int16 hitEntId, const vec3_t *start, const vec3_t *end, float fraction)
{
  int v14; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  char v32; 
  centity_t *Entity; 
  const characterInfo_t *v34; 
  team_t v35; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v37; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v63; 
  char v65; 
  __int64 v69; 
  vec3_t v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 269, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v14 = hitEntId;
  if ( hitEntId >= (int)ComCharacterLimits::ms_gameData.m_characterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 270, ASSERT_TYPE_ASSERT, "(!!CG_DrawMP_ScanForCrosshairEntity_HitCharacter( hitEntId ))", (const char *)&queryFormat, "!!CG_DrawMP_ScanForCrosshairEntity_HitCharacter( hitEntId )") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 274, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  team = CharacterInfo->team;
  _RAX = end;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm1, xmm0, dword ptr [r15]
    vmovss  xmm5, [rsp+0E8h+fraction]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm0, xmm1, dword ptr [r15]
    vmovss  dword ptr [rsp+0E8h+var_98], xmm0
    vmovss  xmm0, dword ptr [rax+4]
    vsubss  xmm1, xmm0, dword ptr [r15+4]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, dword ptr [r15+4]
    vmovss  dword ptr [rsp+0E8h+var_98+4], xmm3
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm1, xmm0, dword ptr [r15+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, dword ptr [r15+8]
    vmovss  dword ptr [rsp+0E8h+var_98+8], xmm3
  }
  *(double *)&_XMM0 = FX_GetClientVisibility(localClientNum, start, &v70);
  __asm { vcomiss xmm0, cs:__real@38d1b717 }
  if ( !v32 )
  {
    if ( team == TEAM_SPECTATOR )
      goto LABEL_52;
    Entity = CG_GetEntity(localClientNum, v14);
    v34 = CgStatic::GetCharacterInfo(LocalClientStatics, v14);
    if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(hitCharacterInfo)", (const char *)&queryFormat, "hitCharacterInfo") )
      __debugbreak();
    if ( Entity->nextState.eType == ET_AGENT && Entity->nextState.otherEntityNum == cgameGlob->predictedPlayerState.clientNum )
      goto LABEL_20;
    v35 = v34->team;
    if ( cgameGlob == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
      __debugbreak();
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
      __debugbreak();
    if ( team && team == v35 )
    {
LABEL_20:
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 3u);
      goto LABEL_52;
    }
    PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x2Au);
    v37 = (unsigned int)PerkNetworkPriorityIndex;
    if ( PerkNetworkPriorityIndex < 0 )
      goto LABEL_56;
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
    {
      LODWORD(v69) = PerkNetworkPriorityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, 64) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v37 & 0x1F)) & v34->perks.array[v37 >> 5]) == 0 )
    {
LABEL_56:
      if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
      FunctionPointer_origin(&Entity->pose.origin.origin.origin, &v70);
      if ( Entity->pose.isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, dword ptr [rsp+0E8h+var_98]
          vcvtdq2pd xmm0, xmm0
          vmovsd  xmm2, cs:__real@3f30000000000000
          vmulsd  xmm0, xmm0, xmm2
          vcvtsd2ss xmm3, xmm0, xmm0
          vmovss  dword ptr [rsp+0E8h+var_98], xmm3
          vmovd   xmm1, dword ptr [rsp+0E8h+var_98+4]
          vcvtdq2pd xmm1, xmm1
          vmulsd  xmm0, xmm1, xmm2
          vcvtsd2ss xmm4, xmm0, xmm0
          vmovss  dword ptr [rsp+0E8h+var_98+4], xmm4
          vmovd   xmm1, dword ptr [rsp+0E8h+var_98+8]
          vcvtdq2pd xmm1, xmm1
          vmulsd  xmm0, xmm1, xmm2
          vcvtsd2ss xmm5, xmm0, xmm0
          vmovss  dword ptr [rsp+0E8h+var_98+8], xmm5
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm5, dword ptr [rsp+0E8h+var_98+8]
          vmovss  xmm4, dword ptr [rsp+0E8h+var_98+4]
          vmovss  xmm3, dword ptr [rsp+0E8h+var_98]
        }
      }
      __asm
      {
        vsubss  xmm6, xmm3, dword ptr [rax]
        vsubss  xmm7, xmm4, dword ptr [rax+4]
        vsubss  xmm8, xmm5, dword ptr [rax+8]
      }
      Instance = CgWeaponMap::GetInstance(localClientNum);
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &cgameGlob->predictedPlayerState);
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm6, xmm2, xmm1
      }
      if ( cgameGlob == (CgGlobalsMP *)-8i64 )
      {
        p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
      }
      else
      {
        p_weapFlags = &cgameGlob->predictedPlayerState.weapCommon.weapFlags;
        if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x22u) )
          goto LABEL_48;
        if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 0x11u) )
        {
LABEL_47:
          v63 = 1;
LABEL_49:
          *(double *)&_XMM0 = BG_GetEnemyCrossHairRange(CurrentWeaponForPlayer, v63);
          __asm
          {
            vmulss  xmm1, xmm0, xmm0
            vcomiss xmm6, xmm1
          }
          if ( !(v32 | v65) )
          {
            memset(&v70, 0, sizeof(v70));
            goto LABEL_53;
          }
          GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 4u);
          memset(&v70, 0, sizeof(v70));
LABEL_52:
          cgameGlob->crosshairClientNum = v14;
          goto LABEL_53;
        }
      }
      if ( cgameGlob != (CgGlobalsMP *)-8i64 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu) )
        goto LABEL_47;
LABEL_48:
      v63 = 0;
      goto LABEL_49;
    }
  }
LABEL_53:
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_58]
    vmovaps xmm7, [rsp+0E8h+var_68]
    vmovaps xmm8, [rsp+0E8h+var_78]
  }
}

/*
==============
CG_DrawMP_ScanForCrosshairEntity_ColorForVehicle
==============
*/
void CG_DrawMP_ScanForCrosshairEntity_ColorForVehicle(LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob, const unsigned __int16 hitEntId, const vec3_t *start, const vec3_t *end, const float fraction)
{
  centity_t *Entity; 
  entityState_t *p_nextState; 
  centity_t *v12; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  char v30; 
  CgVehicleSystem *VehicleSystem; 
  team_t v32; 
  unsigned int v33; 
  vec3_t v34; 

  if ( hitEntId >= 0x800u )
    goto LABEL_22;
  Entity = CG_GetEntity(localClientNum, hitEntId);
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((p_nextState->eType - 12) & 0xFFFD) != 0 )
  {
LABEL_22:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 335, ASSERT_TYPE_ASSERT, "(!!CG_DrawMP_ScanForCrosshairEntity_HitVehicle( localClientNum, hitEntId ))", (const char *)&queryFormat, "!!CG_DrawMP_ScanForCrosshairEntity_HitVehicle( localClientNum, hitEntId )") )
      __debugbreak();
  }
  v12 = CG_GetEntity(localClientNum, hitEntId);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 340, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  team = CharacterInfo->team;
  if ( team != TEAM_SPECTATOR )
  {
    _RAX = end;
    __asm
    {
      vmovss  xmm5, [rsp+88h+fraction]
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm1, xmm0, dword ptr [r14]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [r14]
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rsp+88h+var_58], xmm0
      vsubss  xmm0, xmm1, dword ptr [r14+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm1, xmm0, dword ptr [r14+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rsp+88h+var_58+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [r14+8]
      vmovss  dword ptr [rsp+88h+var_58+8], xmm3
    }
    *(double *)&_XMM0 = FX_GetClientVisibility(localClientNum, start, &v34);
    __asm { vcomiss xmm0, cs:__real@38d1b717 }
    if ( !v30 )
    {
      VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
      v32 = VehicleSystem->GetTeam(VehicleSystem, &v12->nextState);
      if ( v32 && v32 == team || v12->nextState.otherEntityNum == cgameGlob->predictedPlayerState.clientNum )
      {
        v33 = 3;
      }
      else
      {
        if ( v32 == TEAM_ZERO )
          return;
        v33 = 4;
      }
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, v33);
    }
  }
}

/*
==============
CG_DrawMP_ScanForCrosshairEntity_HitCharacter
==============
*/
_BOOL8 CG_DrawMP_ScanForCrosshairEntity_HitCharacter(const unsigned __int16 hitEntId)
{
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  return hitEntId < (signed int)ComCharacterLimits::ms_gameData.m_characterCount;
}

/*
==============
CG_DrawMP_ScanForCrosshairEntity_HitVehicle
==============
*/
_BOOL8 CG_DrawMP_ScanForCrosshairEntity_HitVehicle(LocalClientNum_t localClientNum, const unsigned __int16 hitEntId)
{
  centity_t *Entity; 
  entityState_t *p_nextState; 

  if ( hitEntId >= 0x800u )
    return 0i64;
  Entity = CG_GetEntity(localClientNum, hitEntId);
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return ((p_nextState->eType - 12) & 0xFFFD) == 0;
}

/*
==============
CG_DrawMP_ShouldMarkForEyesOn
==============
*/
bool CG_DrawMP_ShouldMarkForEyesOn(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const characterInfo_t *oc_ci, int clientNum)
{
  int FlashbangedRemainingTime; 
  const dvar_t *v7; 
  int v8; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 630, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( cgameGlob->inKillCam || cgameGlob->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    return 0;
  FlashbangedRemainingTime = CG_GetFlashbangedRemainingTime(localClientNum);
  v7 = DVARINT_cg_flashbangNameFadeIn;
  v8 = FlashbangedRemainingTime;
  if ( !DVARINT_cg_flashbangNameFadeIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_flashbangNameFadeIn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return v8 < v7->current.integer;
}

/*
==============
CG_DrawMP_StartScanForCrosshairEntity
==============
*/

void __fastcall CG_DrawMP_StartScanForCrosshairEntity(LocalClientNum_t localClientNum, double _XMM1_8)
{
  cg_t *LocalClientGlobals; 
  int FlashbangedRemainingTime; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v10; 
  char v12; 
  unsigned __int8 *priorityMap; 
  vec3_t outOrg; 
  int ignoreEnts; 
  __int64 v31; 
  vec3_t end; 
  vec3_t forward; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  v31 = -2i64;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  g_crosshairTrace.valid = 0;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 368, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 371, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 372, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientGlobals->crosshairClientNum = -1;
  LocalClientGlobals->crosshairTraceDistance = 0;
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 4u);
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::ClearFlagInternal(&LocalClientGlobals->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 3u);
  if ( !LocalClientGlobals->cvsData.transitory.remoteMissileCam )
  {
    FlashbangedRemainingTime = CG_GetFlashbangedRemainingTime(localClientNum);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &LocalClientGlobals->predictedPlayerState);
    v10 = CurrentWeaponForPlayer;
    if ( FlashbangedRemainingTime <= 0 || BG_IsAirburstWeapon(CurrentWeaponForPlayer) )
    {
      g_crosshairTrace.isFlashed = FlashbangedRemainingTime > 0;
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      *(double *)&_XMM0 = CG_View_GetCrosshairVerticalOffset(localClientNum, &LocalClientGlobals->predictedPlayerState);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm0, xmm1
      }
      if ( v12 )
      {
        __asm
        {
          vmovss  xmm2, cs:__real@46000000
          vmulss  xmm1, xmm2, dword ptr [rbx+6944h]
          vmovss  xmm3, dword ptr [rsp+0D8h+outOrg]
          vaddss  xmm4, xmm1, xmm3
          vmovss  dword ptr [rsp+0D8h+end], xmm4
          vmulss  xmm1, xmm2, dword ptr [rbx+6948h]
          vmovss  xmm5, dword ptr [rsp+0D8h+outOrg+4]
          vaddss  xmm6, xmm1, xmm5
          vmovss  dword ptr [rsp+0D8h+end+4], xmm6
          vmulss  xmm1, xmm2, dword ptr [rbx+694Ch]
        }
      }
      else
      {
        AngleVectors(&LocalClientGlobals->baseGunAngles, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm2, cs:__real@46000000
          vmulss  xmm1, xmm2, dword ptr [rsp+0D8h+forward]
          vmovss  xmm3, dword ptr [rsp+0D8h+outOrg]
          vaddss  xmm4, xmm1, xmm3
          vmovss  dword ptr [rsp+0D8h+end], xmm4
          vmulss  xmm1, xmm2, dword ptr [rsp+0D8h+forward+4]
          vmovss  xmm5, dword ptr [rsp+0D8h+outOrg+4]
          vaddss  xmm6, xmm1, xmm5
          vmovss  dword ptr [rsp+0D8h+end+4], xmm6
          vmulss  xmm1, xmm2, dword ptr [rsp+0D8h+forward+8]
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+outOrg+8]
        vaddss  xmm2, xmm1, xmm0
        vmovss  dword ptr [rsp+0D8h+end+8], xmm2
        vmovss  dword ptr cs:g_crosshairTrace.start, xmm3
        vmovss  dword ptr cs:g_crosshairTrace.start+4, xmm5
        vmovss  dword ptr cs:g_crosshairTrace.start+8, xmm0
        vmovss  dword ptr cs:g_crosshairTrace.end, xmm4
        vmovss  dword ptr cs:g_crosshairTrace.end+4, xmm6
        vmovss  dword ptr cs:g_crosshairTrace.end+8, xmm2
      }
      ignoreEnts = LocalClientGlobals->predictedPlayerState.clientNum;
      priorityMap = BG_GetWeaponPriorityMap(v10, 0);
      CG_StartWorkerPointTraceInView(localClientNum, &g_crosshairTrace.workerTrace, &outOrg, &end, &ignoreEnts, 1, 41994529, 1, 1, All, priorityMap);
      g_crosshairTrace.valid = 1;
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v34;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CgDrawSystemMP::Draw2D
==============
*/
void CgDrawSystemMP::Draw2D(CgDrawSystemMP *this, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  double v4; 
  __int64 m_localClientNum; 
  CgCompassSystemMP *v8; 
  CgGlobalsMP *LocalClientGlobals; 
  __int64 v10; 
  __int64 v11; 
  cg_t *v12; 
  int v13; 
  bool v14; 
  bool Bool_Internal_DebugName; 
  LocalClientNum_t v16; 
  bool v17; 
  LocalClientNum_t v18; 
  CgVehicleSystem *VehicleSystem; 
  const ScreenPlacement *ActivePlacement; 
  __int64 v21; 
  const dvar_t *v22; 
  int integer; 
  const ScreenPlacement *v26; 
  GfxFont *FontHandle; 
  float fmt; 
  __int64 y; 
  float ya; 
  __int64 horzAlign; 
  float scale; 

  m_localClientNum = this->m_localClientNum;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", m_localClientNum, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(horzAlign) = CgCompassSystem::ms_allocatedCount;
    LODWORD(y) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[m_localClientNum] )
  {
    LODWORD(horzAlign) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", horzAlign) )
      __debugbreak();
  }
  v8 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[m_localClientNum];
  CgCompassSystemMP::IncreaseRadarTime(v8);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( CgDrawSystem::ShouldDrawAnything(this, LocalClientGlobals) )
  {
    ScriptableCl_Spatial_DrawOverlay((const LocalClientNum_t)this->m_localClientNum);
    CG_DrawDebug_DrawViewKickLog(this->m_localClientNum);
    CG_DrawDebug_DrawLogQueue(this->m_localClientNum);
    if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
    {
      v10 = this->m_localClientNum;
      if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
      {
        LODWORD(horzAlign) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", horzAlign) )
          __debugbreak();
      }
      if ( (unsigned int)v10 >= CgClientSideEffectsSystem::ms_allocatedCount )
      {
        LODWORD(horzAlign) = CgClientSideEffectsSystem::ms_allocatedCount;
        LODWORD(y) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
          __debugbreak();
      }
      if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v10] )
      {
        LODWORD(horzAlign) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", horzAlign) )
          __debugbreak();
      }
      CgClientSideEffectsSystem::DrawOverlay(CgClientSideEffectsSystem::ms_cseSystemArray[v10]);
    }
    if ( !CG_DrawMP_DrawExclusiveDebugOverlay((const LocalClientNum_t)this->m_localClientNum) )
    {
      v11 = this->m_localClientNum;
      if ( LocalClientGlobals->m_frontEndScene )
      {
        Stream_Debug_DrawDebugOverlays((LocalClientNum_t)v11);
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        LUI_CoD_RenderFrame((const LocalClientNum_t)this->m_localClientNum);
        return;
      }
      if ( (unsigned int)v11 >= 2 )
      {
        LODWORD(horzAlign) = 2;
        LODWORD(y) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
          __debugbreak();
      }
      if ( clientUIActives[v11].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 977, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( m_localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tBased on the m_frontEndScene check above, this should hold", "CL_GetLocalClientFrontEntState( m_localClientNum ) == ClFrontEndSceneState::INACTIVE") )
        __debugbreak();
      if ( LocalClientGlobals->predictedPlayerState.pm_type == 6 )
      {
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        v12->scoreFadeTime = v12->time;
        v12->showScores = 1;
        CG_DrawMP_DrawSay(this->m_localClientNum);
        LUI_CoD_RenderFrame((const LocalClientNum_t)this->m_localClientNum);
        return;
      }
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.eFlags, (EntityStateFlagsMP)20) )
        CG_EntityMP_UpdateScramblerEffect(this->m_localClientNum, LocalClientGlobals->predictedPlayerState.clientNum, LocalClientGlobals->predictedPlayerState.clientNum, &LocalClientGlobals->predictedPlayerState.origin, JAMMING_TYPE_LINEAR);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MOUNT|0x10) )
        CG_EntityMP_UpdatePortableRadarEffect(this->m_localClientNum, LocalClientGlobals->predictedPlayerState.clientNum, LocalClientGlobals->predictedPlayerState.clientNum, &LocalClientGlobals->predictedPlayerState.origin);
      CgCompassSystemMP::UpdateActors(v8);
      LocalClientGlobals->scopeBoundingCircleValid = 0;
      v13 = this->ShouldDrawHud(this);
      v14 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_mpDirectionalDamageIndicatorsLowRes, "r_mpDirectionalDamageIndicatorsLowRes") && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays");
      if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 )
      {
        if ( v13 )
        {
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_crosshairTraceAsync, "cg_crosshairTraceAsync");
          v16 = this->m_localClientNum;
          if ( Bool_Internal_DebugName )
            CG_DrawMP_FinishScanForCrosshairEntity(v16);
          else
            CG_DrawMP_ScanForCrosshairEntity(v16, v4);
          CG_DrawMP_ConeTargetingSetFriendlyAndEnemyFlag((const LocalClientNum_t)this->m_localClientNum);
          if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays") )
          {
            CG_Draw2dHudElems(this->m_localClientNum, 0);
            CG_Draw2dHudElems(this->m_localClientNum, 1);
          }
        }
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        if ( !v13 )
          goto LABEL_80;
        CG_Draw2dHudElems(this->m_localClientNum, 2);
      }
      else
      {
        v17 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_crosshairTraceAsync, "cg_crosshairTraceAsync");
        v18 = this->m_localClientNum;
        if ( v17 )
          CG_DrawMP_FinishScanForCrosshairEntity(v18);
        else
          CG_DrawMP_ScanForCrosshairEntity(v18, v4);
        CG_DrawMP_ConeTargetingSetFriendlyAndEnemyFlag((const LocalClientNum_t)this->m_localClientNum);
        if ( v13 && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays") )
        {
          CG_Draw2dHudElems(this->m_localClientNum, 0);
          CG_Draw2dHudElems(this->m_localClientNum, 1);
        }
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        if ( v13 )
        {
          CG_Draw2dHudElems(this->m_localClientNum, 2);
          if ( CgVehicleSystem::IsSystemAllocated() )
          {
            VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
            ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
            CgVehicleSystem::Draw2D(VehicleSystem, ActivePlacement);
          }
        }
        if ( !CG_View_IsKillCamDefaultView((const LocalClientNum_t)this->m_localClientNum) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 4u) )
        {
          v21 = this->m_localClientNum;
          if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
          {
            LODWORD(horzAlign) = this->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", horzAlign) )
              __debugbreak();
          }
          if ( (unsigned int)v21 >= CgWeaponSystem::ms_allocatedCount )
          {
            LODWORD(horzAlign) = CgWeaponSystem::ms_allocatedCount;
            LODWORD(y) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          if ( !CgWeaponSystem::ms_weaponSystemArray[v21] )
          {
            LODWORD(horzAlign) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", horzAlign) )
              __debugbreak();
          }
          CgWeaponSystem::ms_weaponSystemArray[v21]->DrawFriendOrFoeTargetBoxes(CgWeaponSystem::ms_weaponSystemArray[v21]);
        }
        if ( LocalClientGlobals->predictedPlayerState.pm_type < 7 )
          CG_DrawReticles_DrawCrosshair(this->m_localClientNum);
        if ( !v13 )
          goto LABEL_79;
      }
      if ( LUI_IsRenderUsingMultipleCmdLists() && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays") )
      {
        R_AddCmdEndOfList();
        R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LOWRES_OVERLAY);
        CG_Draw2dHudElems(this->m_localClientNum, 0);
        CG_Draw2dHudElems(this->m_localClientNum, 1);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDamageDirection, "cg_drawDamageDirection") && v14 )
          CG_DrawDamageDirectionIndicators(this->m_localClientNum);
      }
LABEL_79:
      LUI_CoD_RenderFrame((const LocalClientNum_t)this->m_localClientNum);
LABEL_80:
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 8 )
        CG_DrawDebugMP_DrawStreamSyncOverlay((const LocalClientNum_t)this->m_localClientNum);
      if ( v13 )
      {
        if ( !CG_View_IsKillCamEntityView((const LocalClientNum_t)this->m_localClientNum) )
        {
          CG_ScreenBlur(this->m_localClientNum);
          CG_DrawFlashDamage(LocalClientGlobals);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDamageDirection, "cg_drawDamageDirection") && !v14 )
            CG_DrawDamageDirectionIndicators(this->m_localClientNum);
        }
        CG_DrawGrenadeIndicators(this->m_localClientNum);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDevOverlays, "cg_drawDevOverlays") )
        {
          Profile_Begin(479);
          CG_DrawNetDebugOverlays((const LocalClientNum_t)this->m_localClientNum);
          CG_DrawDebugMP_DrawDebugOverlays((const LocalClientNum_t)this->m_localClientNum);
          Profile_EndInternal(NULL);
        }
        CG_DrawDebug_DrawPerformanceWarnings(this->m_localClientNum);
        CG_DrawHits_SubmitText(this->m_localClientNum);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDevOverlays, "cg_drawDevOverlays") )
        {
          CG_Draw_MiniConsole((const LocalClientNum_t)this->m_localClientNum);
          CG_Draw_ErrorMessages((const LocalClientNum_t)this->m_localClientNum, 16);
        }
        CG_DrawMP_DrawSay(this->m_localClientNum);
        CG_DrawDebug_DrawCenterLines(this->m_localClientNum);
        v22 = DVARINT_sre_notification_duration;
        if ( !DVARINT_sre_notification_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sre_notification_duration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        integer = v22->current.integer;
        if ( Sys_Milliseconds() - this->m_lastSRETime < integer )
        {
          __asm
          {
            vmovaps [rsp+98h+var_38], xmm6
            vmovss  xmm6, cs:__real@3f000000
            vmovaps xmm2, xmm6; scale
          }
          v26 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          __asm { vmovaps xmm3, xmm6; scale }
          FontHandle = UI_GetFontHandle(v26, 8, *(float *)&_XMM2);
          UI_TextWidth(this->m_lastSREMessage, 0, FontHandle, *(float *)&_XMM3);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, cs:__real@bf000000
            vmovss  xmm0, cs:__real@42820000
            vmovss  [rsp+98h+scale], xmm6
            vmovss  [rsp+98h+y], xmm0
            vmovss  dword ptr [rsp+98h+fmt], xmm1
          }
          UI_DrawText(v26, this->m_lastSREMessage, 0x7FFFFFFF, FontHandle, fmt, ya, 7, 1, scale, &colorWhite, 3);
          __asm { vmovaps xmm6, [rsp+98h+var_38] }
        }
      }
    }
  }
}

/*
==============
CgDrawSystemMP::DrawDebugCharacterPoses
==============
*/
void CgDrawSystemMP::DrawDebugCharacterPoses(CgDrawSystemMP *this)
{
  const dvar_t *v1; 
  __int64 integer; 
  int i; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int m_characterCount; 
  unsigned int v9; 

  v1 = DVARINT_bg_debugRewindCharacter;
  if ( !DVARINT_bg_debugRewindCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindCharacter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( (int)integer < -1 )
    goto LABEL_34;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)integer > (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
LABEL_34:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v6) = -1;
    LODWORD(v5) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1515, ASSERT_TYPE_ASSERT, "( -1 ) <= ( debugCharacterIndex ) && ( debugCharacterIndex ) <= ( ComCharacterLimits::GetCharacterMaxCount() )", "debugCharacterIndex not in [-1, ComCharacterLimits::GetCharacterMaxCount()]\n\t%i not in [%i, %i]", v5, v6, m_characterCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( this->m_antilagDebugCharacterCount < (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v9 = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v7) = this->m_antilagDebugCharacterCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1516, ASSERT_TYPE_ASSERT, "( m_antilagDebugCharacterCount ) >= ( ComCharacterLimits::GetCharacterMaxCount() )", "%s >= %s\n\t%i, %i", "m_antilagDebugCharacterCount", "ComCharacterLimits::GetCharacterMaxCount()", v7, v9) )
      __debugbreak();
  }
  if ( (int)integer < 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
        break;
      CG_DrawMP_DrawDebugCharacterPose(&this->m_antilagDebugCharacters[i]);
    }
  }
  else
  {
    CG_DrawMP_DrawDebugCharacterPose(&this->m_antilagDebugCharacters[integer]);
  }
}

/*
==============
CgDrawSystemMP::DrawHoldBreathHint
==============
*/

void __fastcall CgDrawSystemMP::DrawHoldBreathHint(CgDrawSystemMP *this, const rectDef_s *rect, GfxFont *font, double fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 
  float fmt; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1538, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  __asm { vmovss  dword ptr [rsp+48h+fmt], xmm6 }
  CG_Draw_HoldBreathHintCommon((const LocalClientNum_t)this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, rect, font, fmt, textStyle);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
CgDrawSystemMP::DrawHybridToggleHint
==============
*/

void __fastcall CgDrawSystemMP::DrawHybridToggleHint(CgDrawSystemMP *this, const rectDef_s *rect, GfxFont *font, double fontscale, int textStyle)
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
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
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
      CG_Draw_HybridToggleHintCommon(this->m_localClientNum, p_predictedPlayerState, rect, font, fmt, textStyle);
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
CgDrawSystemMP::DrawSRENotification
==============
*/
void CgDrawSystemMP::DrawSRENotification(CgDrawSystemMP *this)
{
  const dvar_t *v3; 
  int integer; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  float fmt; 
  float y; 
  float v18; 

  v3 = DVARINT_sre_notification_duration;
  if ( !DVARINT_sre_notification_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sre_notification_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( Sys_Milliseconds() - this->m_lastSRETime < integer )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f000000
      vmovaps xmm2, xmm6; scale
    }
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    __asm { vmovaps xmm3, xmm6; scale }
    FontHandle = UI_GetFontHandle(ActivePlacement, 8, *(float *)&_XMM2);
    UI_TextWidth(this->m_lastSREMessage, 0, FontHandle, *(float *)&_XMM3);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@bf000000
      vmovss  xmm0, cs:__real@42820000
      vmovss  [rsp+78h+var_38], xmm6
      vmovss  [rsp+78h+y], xmm0
      vmovss  dword ptr [rsp+78h+fmt], xmm1
    }
    UI_DrawText(ActivePlacement, this->m_lastSREMessage, 0x7FFFFFFF, FontHandle, fmt, y, 7, 1, v18, &colorWhite, 3);
    __asm { vmovaps xmm6, [rsp+78h+var_18] }
  }
}

/*
==============
CgDrawSystemMP::FadeHudMenu
==============
*/
float CgDrawSystemMP::FadeHudMenu(CgDrawSystemMP *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  const dvar_t *v5; 

  v5 = DVARBOOL_hud_enable;
  if ( !DVARBOOL_hud_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && this->ShouldDrawHud(this) )
    *(double *)&_XMM0 = CgDrawSystem::FadeHudMenu(this, fadeDvar, displayStartTime, duration);
  else
    __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(float *)&_XMM0;
}

/*
==============
CgDrawSystemMP::GenerateSceneVerts
==============
*/
void CgDrawSystemMP::GenerateSceneVerts(CgDrawSystemMP *this)
{
  if ( CG_ShouldDrawWaypoints(this->m_localClientNum) )
    CG_AddDrawSurfsFor3dHudElems(this->m_localClientNum);
}

/*
==============
CgDrawSystemMP::IsHudEnabled
==============
*/
__int64 CgDrawSystemMP::IsHudEnabled(CgDrawSystemMP *this)
{
  return 1i64;
}

/*
==============
CgDrawSystemMP::IsHudMissionFailed
==============
*/
__int64 CgDrawSystemMP::IsHudMissionFailed(CgDrawSystemMP *this)
{
  return 0i64;
}

/*
==============
CgDrawSystemMP::OwnerDraw
==============
*/

void __fastcall CgDrawSystemMP::OwnerDraw(CgDrawSystemMP *this, rectDef_s *parentRect, double x, double y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, GfxFont *font, float scale, const vec4_t *color, int textStyle, int textAlignMode)
{
  float fmt; 
  float v23; 
  float v24; 
  rectDef_s rect; 

  __asm
  {
    vmovss  xmm0, [rsp+98h+arg_20]
    vmovss  xmm1, [rsp+98h+arg_28]
  }
  rect.horzAlign = horzAlign;
  rect.vertAlign = vertAlign;
  __asm
  {
    vmovss  [rsp+98h+rect.x], xmm2
    vmovss  [rsp+98h+rect.y], xmm3
    vmovss  [rsp+98h+rect.w], xmm0
    vmovss  [rsp+98h+rect.h], xmm1
  }
  if ( (unsigned __int8)horzAlign != horzAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1570, ASSERT_TYPE_ASSERT, "(rect.horzAlign == horzAlign)", (const char *)&queryFormat, "rect.horzAlign == horzAlign") )
    __debugbreak();
  if ( rect.vertAlign != vertAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1571, ASSERT_TYPE_ASSERT, "(rect.vertAlign == vertAlign)", (const char *)&queryFormat, "rect.vertAlign == vertAlign") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+98h+arg_48]
    vmovss  xmm1, [rsp+98h+arg_40]
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  xmm0, [rsp+98h+arg_60]
    vmovss  [rsp+98h+var_68], xmm1
    vmovss  dword ptr [rsp+98h+fmt], xmm0
  }
  CgDrawSystem::OwnerDrawCommon(this, &rect, ownerDraw, font, fmt, color, v23, v24, textStyle, textAlignMode);
}

/*
==============
CgDrawSystemMP::PreDraw2D
==============
*/
void CgDrawSystemMP::PreDraw2D(CgDrawSystemMP *this, double a2)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 
  int v8; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 880, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_DrawMP_MarkVisibleNames(LocalClientGlobals);
  CG_GameInterface_DrawMP_MarkVisibleVehicles(LocalClientGlobals);
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 4 && LocalClientGlobals->cubemapShot == CUBEMAPSHOT_NONE )
  {
    v4 = DVARBOOL_cg_draw2D;
    if ( !DVARBOOL_cg_draw2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw2D") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      v5 = DVARINT_debugOverlay;
      if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( !v5->current.integer || Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 8 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly") )
      {
        v6 = this->ShouldDrawHud(this);
        v7 = DCONST_DVARBOOL_cg_crosshairTraceAsync;
        v8 = v6;
        if ( !DCONST_DVARBOOL_cg_crosshairTraceAsync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairTraceAsync") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( v7->current.enabled && (v8 || LocalClientGlobals->predictedPlayerState.pm_type != 5) )
          CG_DrawMP_StartScanForCrosshairEntity(this->m_localClientNum, a2);
      }
    }
  }
}

/*
==============
CgDrawSystemMP::SaveDebugCharacterPoses
==============
*/
void CgDrawSystemMP::SaveDebugCharacterPoses(CgDrawSystemMP *this)
{
  __int64 m_antilagDebugCharacterCount; 
  CgDrawSystemMP *v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 m_localClientNum; 
  CgEntitySystem *v10; 
  const cpose_t *p_pose; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  const DObj *v17; 
  __int64 v18; 
  CgStatic *v19; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const BgAnimStatic *v22; 
  AntilagDebugCharacterInfo *m_antilagDebugCharacters; 
  int XAnimIndex; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int v27; 
  AntilagDebugCharacterInfo *v28; 
  int v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned __int8 v36; 
  unsigned int v37; 
  char *v39; 
  __int64 v40; 
  int v44; 
  __int64 v45; 
  int v48; 
  __int64 v51; 
  __int64 v52; 
  unsigned __int8 inOutIndex[8]; 
  __int64 v54; 
  int v55; 
  int v56; 
  unsigned int v57; 
  int NumModels; 
  __int64 v59; 
  __int64 v60; 
  int modelIndex; 
  const XModel *Model; 
  const DObj *v63; 
  CgDrawSystemMP *v64; 
  const cpose_t *v65; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  XBoneInfo *boneInfo[254]; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  m_antilagDebugCharacterCount = this->m_antilagDebugCharacterCount;
  v5 = this;
  v64 = this;
  memset_0(this->m_antilagDebugCharacters, 0, 10768 * m_antilagDebugCharacterCount);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v5->m_antilagDebugCharacterCount < (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1407, ASSERT_TYPE_ASSERT, "( m_antilagDebugCharacterCount ) >= ( ComCharacterLimits::GetCharacterMaxCount() )", "%s >= %s\n\t%i, %i", "m_antilagDebugCharacterCount", "ComCharacterLimits::GetCharacterMaxCount()", v5->m_antilagDebugCharacterCount, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  v6 = 0;
  v7 = 0i64;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  while ( 1 )
  {
    v60 = v7;
    v57 = v6;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v6 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    m_localClientNum = v5->m_localClientNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v52) = v5->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v52) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v52) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v51) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
    {
      LODWORD(v52) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v52) )
        __debugbreak();
    }
    v10 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
    if ( v6 >= 0x800 )
    {
      LODWORD(v52) = 2048;
      LODWORD(v51) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v51, v52) )
        __debugbreak();
    }
    p_pose = &v10->m_entities[v7].pose;
    v12 = (v10->m_entities[v7].flags & 1) == 0;
    v65 = p_pose;
    if ( !v12 )
    {
      v13 = v5->m_localClientNum;
      if ( v6 > 0x9E4 )
      {
        LODWORD(v52) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v52) )
          __debugbreak();
      }
      if ( v13 >= 2 )
      {
        LODWORD(v52) = 2;
        LODWORD(v51) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v51, v52) )
          __debugbreak();
      }
      v14 = v6 + 2533 * v13;
      if ( v14 >= 0x13CA )
      {
        LODWORD(v52) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v52) )
          __debugbreak();
      }
      v15 = clientObjMap[v14];
      if ( v15 )
      {
        if ( v15 >= (unsigned int)s_objCount )
        {
          LODWORD(v52) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v52) )
            __debugbreak();
        }
        v16 = v15;
        v12 = s_objBuf[v16] == NULL;
        v17 = (const DObj *)s_objBuf[v16];
        v63 = v17;
        if ( !v12 )
        {
          v18 = v5->m_localClientNum;
          if ( !(_BYTE)CgStatic::ms_allocatedType )
          {
            LODWORD(v52) = v5->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v52) )
              __debugbreak();
          }
          if ( (unsigned int)v18 >= LODWORD(CgStatic::ms_allocatedCount) )
          {
            *(float *)&v52 = CgStatic::ms_allocatedCount;
            LODWORD(v51) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v51, v52) )
              __debugbreak();
          }
          if ( !CgStatic::ms_cgameStaticsArray[v18] )
          {
            LODWORD(v52) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v52) )
              __debugbreak();
          }
          v19 = CgStatic::ms_cgameStaticsArray[v18];
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v19->m_localClientNum);
          if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
          {
            if ( v6 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
            {
              LODWORD(v52) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
              LODWORD(v51) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v51, v52) )
                __debugbreak();
            }
            CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v6);
          }
          else
          {
            CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v6);
          }
          v22 = v19->GetAnimStatics(v19);
          if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1423, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
            __debugbreak();
          if ( CharacterInfo->usingAnimState )
          {
            m_antilagDebugCharacters = v5->m_antilagDebugCharacters;
            _RSI = 10768 * v7;
            v59 = _RSI;
            *(int *)((char *)&m_antilagDebugCharacters->legsAnimIndex + _RSI) = 0;
            *(float *)((char *)&v5->m_antilagDebugCharacters->legsAnimRate + _RSI) = 0.0;
            *(float *)((char *)&v5->m_antilagDebugCharacters->legsAnimTime + _RSI) = 0.0;
          }
          else
          {
            if ( PlayerASM_IsEnabled() )
            {
              XAnimIndex = BG_PlayerASM_GetXAnimIndex(CharacterInfo->legs.animsetIndex, CharacterInfo->legs.animationNumber);
            }
            else
            {
              SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(CharacterInfo);
              XAnimIndex = BG_AnimationMP_GetXAnimIndex(v22, SuitAnimIndexFromCharacter, CharacterInfo->legs.animationNumber & 0xFFFFEFFF);
            }
            v27 = XAnimIndex;
            v28 = v5->m_antilagDebugCharacters;
            _RSI = 10768 * v7;
            v59 = _RSI;
            *(int *)((char *)&v28->legsAnimIndex + _RSI) = v27;
            *(double *)&_XMM0 = XAnimGetRate(v17->tree, 0, XANIM_SUBTREE_DEFAULT, v27);
            _RAX = v5->m_antilagDebugCharacters;
            __asm { vmovss  dword ptr [rax+rsi+8], xmm0 }
            *(double *)&_XMM0 = XAnimGetTime(v17->tree, 0, XANIM_SUBTREE_DEFAULT, v27);
            _RAX = v5->m_antilagDebugCharacters;
            __asm { vmovss  dword ptr [rax+rsi+4], xmm0 }
          }
          DObjGetBoneInfo(v17, boneInfo);
          NumModels = DObjGetNumModels(v17);
          v31 = NumModels;
          if ( NumModels <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1454, ASSERT_TYPE_ASSERT, "(modelCount > 0)", (const char *)&queryFormat, "modelCount > 0") )
            __debugbreak();
          v32 = 0;
          v56 = 0;
          if ( v31 > 0 )
          {
            do
            {
              Model = DObjGetModel(v17, v32);
              v33 = (__int64)Model;
              if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1459, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              v34 = 0i64;
              v35 = 0i64;
              v55 = 0;
              v54 = 0i64;
              if ( *(_BYTE *)(v33 + 20) )
              {
                do
                {
                  v36 = *(_BYTE *)(v35 + *(_QWORD *)(v33 + 184));
                  if ( v36 >= 0x16u )
                  {
                    LODWORD(v52) = 22;
                    LODWORD(v51) = v36;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1465, ASSERT_TYPE_ASSERT, "(unsigned)( modelBonePartClassification ) < (unsigned)( HITLOC_NUM )", "modelBonePartClassification doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v51, v52) )
                      __debugbreak();
                    v35 = v54;
                  }
                  if ( v36 )
                  {
                    v37 = *(unsigned __int8 *)(v33 + 20);
                    inOutIndex[0] = -2;
                    if ( (unsigned int)v34 >= v37 )
                    {
                      LODWORD(v52) = v37;
                      LODWORD(v51) = v34;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( model->numBones )", "boneIndex doesn't index model->numBones\n\t%i not in [0, %i)", v51, v52) )
                        __debugbreak();
                    }
                    if ( !*(_QWORD *)(v33 + 152) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 174, ASSERT_TYPE_ASSERT, "(model->boneNames)", (const char *)&queryFormat, "model->boneNames") )
                      __debugbreak();
                    if ( DObjGetBoneIndexInternal_70(v17, *(scr_string_t *)(*(_QWORD *)(v33 + 152) + 4 * v34), inOutIndex, &modelIndex) )
                    {
                      _RBX = boneInfo[inOutIndex[0]];
                      __asm { vucomiss xmm6, dword ptr [rbx+0Ch] }
                      if ( CG_DObjGetWorldBoneMatrix(p_pose, v17, inOutIndex[0], &outTagMat, &outOrigin) )
                      {
                        v39 = (char *)v5->m_antilagDebugCharacters + _RSI;
                        if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1383, ASSERT_TYPE_ASSERT, "(outCharacterInfo)", (const char *)&queryFormat, "outCharacterInfo") )
                          __debugbreak();
                        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1384, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
                          __debugbreak();
                        v40 = *((int *)v39 + 3);
                        if ( (unsigned int)v40 < 0x80 )
                        {
                          __asm { vmovups xmm0, xmmword ptr [rbx] }
                          _R15 = (__int64)&v39[84 * v40 + 16];
                          __asm
                          {
                            vmovups xmmword ptr [r15], xmm0
                            vmovsd  xmm1, qword ptr [rbx+10h]
                          }
                          v44 = 0;
                          v45 = (__int64)&v39[84 * v40 + 56];
                          __asm { vmovsd  qword ptr [r15+10h], xmm1 }
                          do
                          {
                            if ( (unsigned int)v44 >= 4 )
                            {
                              LODWORD(v52) = 4;
                              LODWORD(v51) = v44;
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v51, v52) )
                                __debugbreak();
                            }
                            if ( (unsigned int)v44 >= 3 )
                            {
                              LODWORD(v52) = 3;
                              LODWORD(v51) = v44;
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v51, v52) )
                                __debugbreak();
                            }
                            ++v44;
                            *(_DWORD *)(v45 - 4) = *(_DWORD *)((char *)&outTagMat.m[-3] + v45 - _R15 - 4);
                            *(float *)v45 = *(float *)((char *)outTagMat.m[-3].v + v45 - _R15);
                            *(_DWORD *)(v45 + 4) = *(_DWORD *)((char *)&outTagMat.m[-2] + v45 - _R15 - 8);
                            v45 += 12i64;
                          }
                          while ( v44 < 3 );
                          __asm { vmovss  xmm0, dword ptr [rsp+918h+outOrigin] }
                          v33 = (__int64)Model;
                          LODWORD(v34) = v55;
                          v17 = v63;
                          v5 = v64;
                          __asm
                          {
                            vmovss  dword ptr [r15+18h], xmm0
                            vmovss  xmm1, dword ptr [rsp+918h+outOrigin+4]
                            vmovss  dword ptr [r15+1Ch], xmm1
                            vmovss  xmm0, dword ptr [rsp+918h+outOrigin+8]
                            vmovss  dword ptr [r15+20h], xmm0
                          }
                          ++*((_DWORD *)v39 + 3);
                          p_pose = v65;
                        }
                      }
                    }
                    v35 = v54;
                  }
                  v48 = *(unsigned __int8 *)(v33 + 20);
                  _RSI = v59;
                  v34 = (unsigned int)(v34 + 1);
                  ++v35;
                  v55 = v34;
                  v54 = v35;
                }
                while ( (int)v34 < v48 );
                v31 = NumModels;
              }
              _RSI = v59;
              v32 = v56 + 1;
              v56 = v32;
            }
            while ( v32 < v31 );
            v6 = v57;
            v7 = v60;
          }
        }
      }
    }
    ++v6;
    ++v7;
  }
  _R11 = &v69;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CgDrawSystemMP::SetHudElemDevString
==============
*/
void CgDrawSystemMP::SetHudElemDevString(CgDrawSystemMP *this, int index, char *hudElemString, const int hudElemStringLength)
{
  const char *ConfigString; 

  if ( !hudElemString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1370, ASSERT_TYPE_ASSERT, "(hudElemString)", (const char *)&queryFormat, "hudElemString") )
    __debugbreak();
  if ( index )
  {
    ConfigString = CL_GetConfigString(index + 637);
    CG_TranslateHudElemMessage(this->m_localClientNum, ConfigString, "hudelem dev string", hudElemString, hudElemStringLength);
  }
}

/*
==============
CgDrawSystemMP::SetLastSRETime
==============
*/
void CgDrawSystemMP::SetLastSRETime(CgDrawSystemMP *this, const int lastSRETime, const char *message)
{
  this->m_lastSRETime = lastSRETime;
  if ( !message )
    message = (char *)&queryFormat.fmt + 3;
  Com_sprintf_truncate<1024>((char (*)[1024])this->m_lastSREMessage, "SRE: %s", message);
}

/*
==============
CgDrawSystemMP::ShouldDrawCrosshair
==============
*/
bool CgDrawSystemMP::ShouldDrawCrosshair(CgDrawSystemMP *this)
{
  PostGameState PostGameState; 
  bool result; 

  result = 0;
  if ( !CG_MainMP_IsPrematchCountdown((const LocalClientNum_t)this->m_localClientNum) || CG_GameInterface_PlayingBR() )
  {
    PostGameState = CG_MainMP_GetPostGameState((const LocalClientNum_t)this->m_localClientNum);
    if ( PostGameState == UI_POST_GAME_INACTIVE || (unsigned __int8)PostGameState > UI_POST_GAME_ROUND_END && (unsigned __int8)(PostGameState - 5) > 2u )
      return 1;
  }
  return result;
}

/*
==============
CgDrawSystemMP::ShouldDrawHud
==============
*/
_BOOL8 CgDrawSystemMP::ShouldDrawHud(CgDrawSystemMP *this)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  return LocalClientGlobals->predictedPlayerState.pm_type != 4 && LocalClientGlobals->showHud && CL_MainMP_ShouldDisplayHud(this->m_localClientNum);
}

/*
==============
CgDrawSystemMP::UpdateScissor
==============
*/
void CgDrawSystemMP::UpdateScissor(CgDrawSystemMP *this)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
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
      if ( (v6->current.integer != 1 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && (Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") != 2 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && (Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") != 3 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && (Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") != 6 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && (Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") != 8 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && (Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") != 10 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && (Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") != 11 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly")) && !net_showprofile->current.integer && v3->predictedPlayerState.pm_type <= 4 )
        CG_DrawReticles_UpdateWeapReticleScissor(this->m_localClientNum);
    }
  }
}

