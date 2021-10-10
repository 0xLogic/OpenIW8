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
  cg_t *LocalClientGlobals; 
  CgCompassSystem *CompassSystem; 
  int ControllerFromClient; 
  __int64 v7; 
  int v8; 
  vec3_t kickAngles; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CL_SetFOVSensitivityScale(localClientNum, LocalClientGlobals->zoomSensitivity);
  if ( !LocalClientGlobals->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LODWORD(kickAngles.v[0]) = LocalClientGlobals->kickAngles.data[0] ^ ((((_DWORD)LocalClientGlobals + 302524) ^ LocalClientGlobals->kickAngles.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 302524) ^ LocalClientGlobals->kickAngles.secureInt32_3_aab) + 2));
  LODWORD(kickAngles.v[1]) = ((((_DWORD)LocalClientGlobals + 302528) ^ LocalClientGlobals->kickAngles.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 302528) ^ LocalClientGlobals->kickAngles.secureInt32_3_aab) + 2)) ^ LocalClientGlobals->kickAngles.data[1];
  LODWORD(kickAngles.v[2]) = ((((_DWORD)LocalClientGlobals + 302532) ^ LocalClientGlobals->kickAngles.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 302532) ^ LocalClientGlobals->kickAngles.secureInt32_3_aab) + 2)) ^ LocalClientGlobals->kickAngles.data[2];
  CL_CGameMP_SetUserCmdAimValues(localClientNum, &kickAngles);
  BG_AssertOffhandIndexOrNone(&LocalClientGlobals->equippedOffHand);
  CL_SetUserCmdWeapons(localClientNum, &LocalClientGlobals->weaponSelect, &LocalClientGlobals->equippedOffHand, LocalClientGlobals->weaponSelectInAlt);
  CL_UpdateExtraButtons(localClientNum);
  CL_SetExtraButtons(localClientNum, LocalClientGlobals->extraButtons);
  LocalClientGlobals->extraButtons = 0i64;
  CG_DrawDebug_Infils(localClientNum);
  CL_DebugData_UpdateClient();
  CL_RenderScene(localClientNum, &LocalClientGlobals->refdef, drawType);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    LODWORD(v7) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1197, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
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
  const dvar_t *v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int integer; 
  const dvar_t *v5; 
  cgs_t *v6; 
  const ScreenPlacement *ActivePlacement; 
  float v12; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v14; 
  int time; 
  GfxFont *FontHandle; 
  int v17; 
  const dvar_t *v18; 
  __int64 v19; 
  float v20; 
  float v21; 
  const char *v22; 
  unsigned __int8 v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  int v28; 
  float v29; 
  __int64 horzAlign; 
  __int64 vertAlign; 
  int v32; 
  int value; 
  vec4_t outColor; 

  v1 = DVARBOOL_cl_textChatEnabled;
  v2 = localClientNum;
  if ( !DVARBOOL_cl_textChatEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_textChatEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = DVARINT_cg_chatHeight;
    if ( !DVARINT_cg_chatHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    integer = v3->current.integer;
    if ( integer )
    {
      v5 = DVARVEC2_cg_hudChatPosition;
      if ( !DVARVEC2_cg_hudChatPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudChatPosition") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      value = (int)v5->current.value;
      v32 = (int)v5->current.vector.v[1];
      if ( (unsigned int)v2 >= cgs_t::ms_allocatedCount )
      {
        LODWORD(vertAlign) = cgs_t::ms_allocatedCount;
        LODWORD(horzAlign) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", horzAlign, vertAlign) )
          __debugbreak();
      }
      if ( !cgs_t::ms_cgsArray[v2] )
      {
        LODWORD(vertAlign) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", vertAlign) )
          __debugbreak();
      }
      if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
      {
        LODWORD(vertAlign) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", vertAlign) )
          __debugbreak();
      }
      v6 = cgs_t::ms_cgsArray[v2];
      ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v2);
      _XMM0 = (unsigned int)(int)ActivePlacement->realViewportSize.v[1];
      __asm { vpcmpgtd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_18_0);
      __asm { vblendvps xmm12, xmm1, xmm2, xmm3 }
      v12 = *(float *)&_XMM12 * 0.020833334;
      if ( v6->teamLastChatPos != v6->teamChatPos )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
        v14 = DVARINT_cg_chatTime;
        time = LocalClientGlobals->time;
        if ( !DVARINT_cg_chatTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        if ( time - v6->teamChatMsgTimes[v6->teamLastChatPos % integer] > v14->current.integer )
          ++v6->teamLastChatPos;
        FontHandle = UI_GetFontHandle(ActivePlacement, 3, *(float *)&_XMM12 * 0.020833334);
        v17 = v6->teamChatPos - 1;
        if ( v17 >= v6->teamLastChatPos )
        {
          while ( 1 )
          {
            v18 = DVARINT_cg_chatTime;
            if ( !DVARINT_cg_chatTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_chatTime") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v18);
            v19 = v17 % integer;
            v20 = (float)v18->current.integer - (float)(time - v6->teamChatMsgTimes[v19]);
            if ( v20 > 200.0 )
              break;
            v21 = v20 * 0.0049999999;
            if ( (float)(v20 * 0.0049999999) > 0.0 )
              goto LABEL_34;
LABEL_42:
            if ( --v17 < v6->teamLastChatPos )
              return;
          }
          v21 = FLOAT_1_0;
LABEL_34:
          v22 = v6->teamChatMsgs[v19];
          if ( (cgs_t *)((char *)v6 + 193 * v19) == (cgs_t *)-463288i64 || *v22 != 94 || (v23 = v6->teamChatMsgs[v19][1]) == 0 || v23 == 94 || (unsigned __int8)(v23 - 39) > 0x17u )
          {
            v26 = FLOAT_1_0;
            v25 = FLOAT_1_0;
            v24 = FLOAT_1_0;
          }
          else
          {
            CL_LookupColor((LocalClientNum_t)v2, v23, &outColor);
            v24 = outColor.v[2];
            v25 = outColor.v[1];
            v26 = outColor.v[0];
          }
          outColor.v[0] = v26 * 0.25;
          outColor.v[1] = v25 * 0.25;
          outColor.v[2] = v24 * 0.25;
          outColor.v[3] = v21 * 0.60000002;
          v27 = (float)v32 - (float)((float)(v6->teamChatPos - v17) * *(float *)&_XMM12);
          v28 = UI_TextWidth(v22, 0, FontHandle, v12);
          UI_DrawHandlePic(ActivePlacement, 0.0, v27, (float)v28 + 30.0, *(float *)&_XMM12, 8, 8, &outColor, cgMedia.teamStatusBar);
          outColor.v[3] = v21;
          v29 = (float)v32 - (float)((float)(v6->teamChatPos - v17) * *(float *)&_XMM12);
          outColor.v[0] = FLOAT_1_0;
          outColor.v[1] = FLOAT_1_0;
          outColor.v[2] = FLOAT_1_0;
          UI_DrawText(ActivePlacement, v22, 0x7FFFFFFF, FontHandle, (float)value, v29 + (float)(*(float *)&_XMM12 - 1.0), 8, 8, v12, &outColor, 3);
          goto LABEL_42;
        }
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
  const dvar_t *v9; 

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
              CG_DrawDebug_DrawVMBlendSpaces(localClientNum, 10.0, 150.0, Bool_Internal_DebugName);
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
  v9 = DVARBOOL_debugOverlayOnly;
  if ( !DVARBOOL_debugOverlayOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlayOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  return v9->current.enabled;
}

/*
==============
CG_DrawMP_DrawSay
==============
*/
void CG_DrawMP_DrawSay(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  v1 = DVARVEC2_cg_hudSayPosition;
  if ( !DVARVEC2_cg_hudSayPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_hudSayPosition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  Con_DrawSay(localClientNum, (int)v1->current.value, (int)v1->current.vector.v[1] + 28);
}

/*
==============
CG_DrawMP_FinishScanForCrosshairEntity
==============
*/
void CG_DrawMP_FinishScanForCrosshairEntity(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v3; 
  float fraction; 
  unsigned __int16 EntityHitId; 
  bool isUsingConeTargeting; 
  unsigned __int16 v7; 
  vec3_t end; 
  vec3_t start; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 467, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 468, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( g_crosshairTrace.valid )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    start = g_crosshairTrace.start;
    end = g_crosshairTrace.end;
    v3 = LocalClientGlobals;
    CG_WaitWorkerTrace(&g_crosshairTrace.workerTrace);
    fraction = g_crosshairTrace.workerTrace.trace.fraction;
    if ( g_crosshairTrace.workerTrace.trace.fraction < 1.0 )
      v3->crosshairTraceDistance = (int)(float)(g_crosshairTrace.workerTrace.trace.fraction * 8192.0);
    if ( !g_crosshairTrace.isFlashed )
    {
      EntityHitId = Trace_GetEntityHitId(&g_crosshairTrace.workerTrace.trace);
      isUsingConeTargeting = v3->coneTargetingState.isUsingConeTargeting;
      v7 = EntityHitId;
      if ( !CG_DrawMP_ScanForCrosshairEntity_HitCharacter(EntityHitId) || (CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter(localClientNum, v3, v7, &start, &end, fraction), isUsingConeTargeting) )
      {
        if ( CG_DrawMP_ScanForCrosshairEntity_HitVehicle(localClientNum, v7) )
          CG_DrawMP_ScanForCrosshairEntity_ColorForVehicle(localClientNum, v3, v7, &start, &end, fraction);
      }
    }
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
void CG_DrawMP_ScanForCrosshairEntity(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  int FlashbangedRemainingTime; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v6; 
  double CrosshairVerticalOffset; 
  float v8; 
  unsigned __int8 *priorityMap; 
  unsigned __int16 EntityHitId; 
  vec3_t outOrg; 
  float fraction[2]; 
  __int64 v13; 
  vec3_t end; 
  vec3_t forward; 
  trace_t results; 

  v13 = -2i64;
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
    v6 = CurrentWeaponForPlayer;
    if ( FlashbangedRemainingTime <= 0 || BG_IsAirburstWeapon(CurrentWeaponForPlayer) )
    {
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CrosshairVerticalOffset = CG_View_GetCrosshairVerticalOffset(localClientNum, &LocalClientGlobals->predictedPlayerState);
      if ( *(float *)&CrosshairVerticalOffset == 0.0 )
      {
        v8 = FLOAT_8192_0;
        end.v[0] = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
        end.v[1] = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
        end.v[2] = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + outOrg.v[2];
      }
      else
      {
        AngleVectors(&LocalClientGlobals->baseGunAngles, &forward, NULL, NULL);
        v8 = FLOAT_8192_0;
        end.v[0] = (float)(8192.0 * forward.v[0]) + outOrg.v[0];
        end.v[1] = (float)(8192.0 * forward.v[1]) + outOrg.v[1];
        end.v[2] = (float)(8192.0 * forward.v[2]) + outOrg.v[2];
      }
      fraction[0] = *(float *)&LocalClientGlobals->predictedPlayerState.clientNum;
      priorityMap = BG_GetWeaponPriorityMap(v6, 0);
      PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &end, &bounds_origin, (const int *)fraction, 1, 0, 41994529, 1, priorityMap, All);
      if ( results.fraction < 1.0 )
        LocalClientGlobals->crosshairTraceDistance = (int)(float)(results.fraction * v8);
      if ( FlashbangedRemainingTime <= 0 )
      {
        EntityHitId = Trace_GetEntityHitId(&results);
        if ( CG_DrawMP_ScanForCrosshairEntity_HitCharacter(EntityHitId) )
        {
          CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter(localClientNum, LocalClientGlobals, EntityHitId, &outOrg, &end, results.fraction);
        }
        else if ( CG_DrawMP_ScanForCrosshairEntity_HitVehicle(localClientNum, EntityHitId) )
        {
          CG_DrawMP_ScanForCrosshairEntity_ColorForVehicle(localClientNum, LocalClientGlobals, EntityHitId, &outOrg, &end, results.fraction);
        }
      }
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter
==============
*/
void CG_DrawMP_ScanForCrosshairEntity_ColorForCharacter(LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob, const unsigned __int16 hitEntId, const vec3_t *start, const vec3_t *end, float fraction)
{
  int v10; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  team_t team; 
  double ClientVisibility; 
  centity_t *Entity; 
  const characterInfo_t *v16; 
  team_t v17; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v19; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v24; 
  float v34; 
  float v35; 
  float v36; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  float v39; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  bool v41; 
  double EnemyCrossHairRange; 
  __int64 v43; 
  vec3_t v45; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 269, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v10 = hitEntId;
  if ( hitEntId >= (int)ComCharacterLimits::ms_gameData.m_characterCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 270, ASSERT_TYPE_ASSERT, "(!!CG_DrawMP_ScanForCrosshairEntity_HitCharacter( hitEntId ))", (const char *)&queryFormat, "!!CG_DrawMP_ScanForCrosshairEntity_HitCharacter( hitEntId )") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 274, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  team = CharacterInfo->team;
  v45.v[0] = (float)((float)(end->v[0] - start->v[0]) * fraction) + start->v[0];
  v45.v[1] = (float)((float)(end->v[1] - start->v[1]) * fraction) + start->v[1];
  v45.v[2] = (float)((float)(end->v[2] - start->v[2]) * fraction) + start->v[2];
  ClientVisibility = FX_GetClientVisibility(localClientNum, start, &v45);
  if ( *(float *)&ClientVisibility < 0.000099999997 )
    return;
  if ( team == TEAM_SPECTATOR )
  {
LABEL_52:
    cgameGlob->crosshairClientNum = v10;
    return;
  }
  Entity = CG_GetEntity(localClientNum, v10);
  v16 = CgStatic::GetCharacterInfo(LocalClientStatics, v10);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 286, ASSERT_TYPE_ASSERT, "(hitCharacterInfo)", (const char *)&queryFormat, "hitCharacterInfo") )
    __debugbreak();
  if ( Entity->nextState.eType == ET_AGENT && Entity->nextState.otherEntityNum == cgameGlob->predictedPlayerState.clientNum )
    goto LABEL_20;
  v17 = v16->team;
  if ( cgameGlob == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
    __debugbreak();
  if ( team && team == v17 )
  {
LABEL_20:
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 3u);
    goto LABEL_52;
  }
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x2Au);
  v19 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex < 0 )
    goto LABEL_55;
  if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
  {
    LODWORD(v43) = PerkNetworkPriorityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v43, 64) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v19 & 0x1F)) & v16->perks.array[v19 >> 5]) == 0 )
  {
LABEL_55:
    if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
    FunctionPointer_origin(&Entity->pose.origin.origin.origin, &v45);
    if ( Entity->pose.isPosePrecise )
    {
      _XMM0 = LODWORD(v45.v[0]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v24 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v24 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v24;
      __asm { vcvtsd2ss xmm3, xmm0, xmm0 }
      v45.v[0] = *(float *)&_XMM3;
      _XMM1 = LODWORD(v45.v[1]);
      __asm { vcvtdq2pd xmm1, xmm1 }
      *((_QWORD *)&v24 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v24 = *(double *)&_XMM1 * 0.000244140625;
      _XMM0 = v24;
      __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
      v45.v[1] = *(float *)&_XMM4;
      _XMM1 = LODWORD(v45.v[2]);
      __asm { vcvtdq2pd xmm1, xmm1 }
      *((_QWORD *)&v24 + 1) = *((_QWORD *)&_XMM1 + 1);
      *(double *)&v24 = *(double *)&_XMM1 * 0.000244140625;
      _XMM0 = v24;
      __asm { vcvtsd2ss xmm5, xmm0, xmm0 }
      v45.v[2] = *(float *)&_XMM5;
    }
    else
    {
      *(float *)&_XMM5 = v45.v[2];
      *(float *)&_XMM4 = v45.v[1];
      *(float *)&_XMM3 = v45.v[0];
    }
    v34 = *(float *)&_XMM3 - start->v[0];
    v35 = *(float *)&_XMM4 - start->v[1];
    v36 = *(float *)&_XMM5 - start->v[2];
    Instance = CgWeaponMap::GetInstance(localClientNum);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &cgameGlob->predictedPlayerState);
    v39 = (float)((float)(v34 * v34) + (float)(v35 * v35)) + (float)(v36 * v36);
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
        v41 = 1;
LABEL_49:
        EnemyCrossHairRange = BG_GetEnemyCrossHairRange(CurrentWeaponForPlayer, v41);
        if ( v39 > (float)(*(float *)&EnemyCrossHairRange * *(float *)&EnemyCrossHairRange) )
        {
          memset(&v45, 0, sizeof(v45));
          return;
        }
        GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, 4u);
        memset(&v45, 0, sizeof(v45));
        goto LABEL_52;
      }
    }
    if ( cgameGlob != (CgGlobalsMP *)-8i64 && GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu) )
      goto LABEL_47;
LABEL_48:
    v41 = 0;
    goto LABEL_49;
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
  float v16; 
  float v17; 
  double ClientVisibility; 
  CgVehicleSystem *VehicleSystem; 
  team_t v20; 
  unsigned int v21; 
  vec3_t v22; 

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
    v16 = end->v[1];
    v22.v[0] = (float)((float)(end->v[0] - start->v[0]) * fraction) + start->v[0];
    v17 = (float)(end->v[2] - start->v[2]) * fraction;
    v22.v[1] = (float)((float)(v16 - start->v[1]) * fraction) + start->v[1];
    v22.v[2] = v17 + start->v[2];
    ClientVisibility = FX_GetClientVisibility(localClientNum, start, &v22);
    if ( *(float *)&ClientVisibility >= 0.000099999997 )
    {
      VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
      v20 = VehicleSystem->GetTeam(VehicleSystem, &v12->nextState);
      if ( v20 && v20 == team || v12->nextState.otherEntityNum == cgameGlob->predictedPlayerState.clientNum )
      {
        v21 = 3;
      }
      else
      {
        if ( v20 == TEAM_ZERO )
          return;
        v21 = 4;
      }
      GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::SetFlagInternal(&cgameGlob->predictedPlayerState.weapCommon.weapFlags, ACTIVE, v21);
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
void CG_DrawMP_StartScanForCrosshairEntity(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int FlashbangedRemainingTime; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  const Weapon *v6; 
  double CrosshairVerticalOffset; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned __int8 *priorityMap; 
  vec3_t outOrg; 
  int ignoreEnts; 
  __int64 v16; 
  vec3_t end; 
  vec3_t forward; 

  v16 = -2i64;
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
    v6 = CurrentWeaponForPlayer;
    if ( FlashbangedRemainingTime <= 0 || BG_IsAirburstWeapon(CurrentWeaponForPlayer) )
    {
      g_crosshairTrace.isFlashed = FlashbangedRemainingTime > 0;
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CrosshairVerticalOffset = CG_View_GetCrosshairVerticalOffset(localClientNum, &LocalClientGlobals->predictedPlayerState);
      if ( *(float *)&CrosshairVerticalOffset == 0.0 )
      {
        v8 = outOrg.v[0];
        v9 = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
        end.v[0] = v9;
        v10 = outOrg.v[1];
        v11 = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
        end.v[1] = v11;
        v12 = 8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[2];
      }
      else
      {
        AngleVectors(&LocalClientGlobals->baseGunAngles, &forward, NULL, NULL);
        v8 = outOrg.v[0];
        v9 = (float)(8192.0 * forward.v[0]) + outOrg.v[0];
        end.v[0] = v9;
        v10 = outOrg.v[1];
        v11 = (float)(8192.0 * forward.v[1]) + outOrg.v[1];
        end.v[1] = v11;
        v12 = 8192.0 * forward.v[2];
      }
      end.v[2] = v12 + outOrg.v[2];
      g_crosshairTrace.start.v[0] = v8;
      g_crosshairTrace.start.v[1] = v10;
      g_crosshairTrace.start.v[2] = outOrg.v[2];
      g_crosshairTrace.end.v[0] = v9;
      g_crosshairTrace.end.v[1] = v11;
      g_crosshairTrace.end.v[2] = v12 + outOrg.v[2];
      ignoreEnts = LocalClientGlobals->predictedPlayerState.clientNum;
      priorityMap = BG_GetWeaponPriorityMap(v6, 0);
      CG_StartWorkerPointTraceInView(localClientNum, &g_crosshairTrace.workerTrace, &outOrg, &end, &ignoreEnts, 1, 41994529, 1, 1, All, priorityMap);
      g_crosshairTrace.valid = 1;
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CgDrawSystemMP::Draw2D
==============
*/
void CgDrawSystemMP::Draw2D(CgDrawSystemMP *this, const vec3_t *cameraOrigin, const tmat33_t<vec3_t> *cameraAxis)
{
  __int64 m_localClientNum; 
  CgCompassSystemMP *v5; 
  CgGlobalsMP *LocalClientGlobals; 
  __int64 v7; 
  __int64 v8; 
  cg_t *v9; 
  int v10; 
  bool v11; 
  bool Bool_Internal_DebugName; 
  LocalClientNum_t v13; 
  bool v14; 
  LocalClientNum_t v15; 
  CgVehicleSystem *VehicleSystem; 
  const ScreenPlacement *ActivePlacement; 
  __int64 v18; 
  const dvar_t *v19; 
  int integer; 
  const ScreenPlacement *v21; 
  GfxFont *FontHandle; 
  int v23; 
  __int64 y; 
  __int64 horzAlign; 

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
  v5 = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[m_localClientNum];
  CgCompassSystemMP::IncreaseRadarTime(v5);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( CgDrawSystem::ShouldDrawAnything(this, LocalClientGlobals) )
  {
    ScriptableCl_Spatial_DrawOverlay((const LocalClientNum_t)this->m_localClientNum);
    CG_DrawDebug_DrawViewKickLog(this->m_localClientNum);
    CG_DrawDebug_DrawLogQueue(this->m_localClientNum);
    if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
    {
      v7 = this->m_localClientNum;
      if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
      {
        LODWORD(horzAlign) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", horzAlign) )
          __debugbreak();
      }
      if ( (unsigned int)v7 >= CgClientSideEffectsSystem::ms_allocatedCount )
      {
        LODWORD(horzAlign) = CgClientSideEffectsSystem::ms_allocatedCount;
        LODWORD(y) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
          __debugbreak();
      }
      if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v7] )
      {
        LODWORD(horzAlign) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", horzAlign) )
          __debugbreak();
      }
      CgClientSideEffectsSystem::DrawOverlay(CgClientSideEffectsSystem::ms_cseSystemArray[v7]);
    }
    if ( !CG_DrawMP_DrawExclusiveDebugOverlay((const LocalClientNum_t)this->m_localClientNum) )
    {
      v8 = this->m_localClientNum;
      if ( LocalClientGlobals->m_frontEndScene )
      {
        Stream_Debug_DrawDebugOverlays((LocalClientNum_t)v8);
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        LUI_CoD_RenderFrame((const LocalClientNum_t)this->m_localClientNum);
        return;
      }
      if ( (unsigned int)v8 >= 2 )
      {
        LODWORD(horzAlign) = 2;
        LODWORD(y) = this->m_localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", y, horzAlign) )
          __debugbreak();
      }
      if ( clientUIActives[v8].frontEndSceneState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 977, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientFrontEntState( m_localClientNum ) == ClFrontEndSceneState::INACTIVE)", "%s\n\tBased on the m_frontEndScene check above, this should hold", "CL_GetLocalClientFrontEntState( m_localClientNum ) == ClFrontEndSceneState::INACTIVE") )
        __debugbreak();
      if ( LocalClientGlobals->predictedPlayerState.pm_type == 6 )
      {
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        v9->scoreFadeTime = v9->time;
        v9->showScores = 1;
        CG_DrawMP_DrawSay(this->m_localClientNum);
        LUI_CoD_RenderFrame((const LocalClientNum_t)this->m_localClientNum);
        return;
      }
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.eFlags, (EntityStateFlagsMP)20) )
        CG_EntityMP_UpdateScramblerEffect(this->m_localClientNum, LocalClientGlobals->predictedPlayerState.clientNum, LocalClientGlobals->predictedPlayerState.clientNum, &LocalClientGlobals->predictedPlayerState.origin, JAMMING_TYPE_LINEAR);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MOUNT|0x10) )
        CG_EntityMP_UpdatePortableRadarEffect(this->m_localClientNum, LocalClientGlobals->predictedPlayerState.clientNum, LocalClientGlobals->predictedPlayerState.clientNum, &LocalClientGlobals->predictedPlayerState.origin);
      CgCompassSystemMP::UpdateActors(v5);
      LocalClientGlobals->scopeBoundingCircleValid = 0;
      v10 = this->ShouldDrawHud(this);
      v11 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_mpDirectionalDamageIndicatorsLowRes, "r_mpDirectionalDamageIndicatorsLowRes") && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays");
      if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 )
      {
        if ( v10 )
        {
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_crosshairTraceAsync, "cg_crosshairTraceAsync");
          v13 = this->m_localClientNum;
          if ( Bool_Internal_DebugName )
            CG_DrawMP_FinishScanForCrosshairEntity(v13);
          else
            CG_DrawMP_ScanForCrosshairEntity(v13);
          CG_DrawMP_ConeTargetingSetFriendlyAndEnemyFlag((const LocalClientNum_t)this->m_localClientNum);
          if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays") )
          {
            CG_Draw2dHudElems(this->m_localClientNum, 0);
            CG_Draw2dHudElems(this->m_localClientNum, 1);
          }
        }
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        if ( !v10 )
          goto LABEL_80;
        CG_Draw2dHudElems(this->m_localClientNum, 2);
      }
      else
      {
        v14 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_crosshairTraceAsync, "cg_crosshairTraceAsync");
        v15 = this->m_localClientNum;
        if ( v14 )
          CG_DrawMP_FinishScanForCrosshairEntity(v15);
        else
          CG_DrawMP_ScanForCrosshairEntity(v15);
        CG_DrawMP_ConeTargetingSetFriendlyAndEnemyFlag((const LocalClientNum_t)this->m_localClientNum);
        if ( v10 && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays") )
        {
          CG_Draw2dHudElems(this->m_localClientNum, 0);
          CG_Draw2dHudElems(this->m_localClientNum, 1);
        }
        CG_Draw_EndSceneCmdsAndAddHudLighting();
        if ( v10 )
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
          v18 = this->m_localClientNum;
          if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
          {
            LODWORD(horzAlign) = this->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", horzAlign) )
              __debugbreak();
          }
          if ( (unsigned int)v18 >= CgWeaponSystem::ms_allocatedCount )
          {
            LODWORD(horzAlign) = CgWeaponSystem::ms_allocatedCount;
            LODWORD(y) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", y, horzAlign) )
              __debugbreak();
          }
          if ( !CgWeaponSystem::ms_weaponSystemArray[v18] )
          {
            LODWORD(horzAlign) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", horzAlign) )
              __debugbreak();
          }
          CgWeaponSystem::ms_weaponSystemArray[v18]->DrawFriendOrFoeTargetBoxes(CgWeaponSystem::ms_weaponSystemArray[v18]);
        }
        if ( LocalClientGlobals->predictedPlayerState.pm_type < 7 )
          CG_DrawReticles_DrawCrosshair(this->m_localClientNum);
        if ( !v10 )
          goto LABEL_79;
      }
      if ( LUI_IsRenderUsingMultipleCmdLists() && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_r_lowResOverlays, "r_lowResOverlays") )
      {
        R_AddCmdEndOfList();
        R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LOWRES_OVERLAY);
        CG_Draw2dHudElems(this->m_localClientNum, 0);
        CG_Draw2dHudElems(this->m_localClientNum, 1);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDamageDirection, "cg_drawDamageDirection") && v11 )
          CG_DrawDamageDirectionIndicators(this->m_localClientNum);
      }
LABEL_79:
      LUI_CoD_RenderFrame((const LocalClientNum_t)this->m_localClientNum);
LABEL_80:
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 8 )
        CG_DrawDebugMP_DrawStreamSyncOverlay((const LocalClientNum_t)this->m_localClientNum);
      if ( v10 )
      {
        if ( !CG_View_IsKillCamEntityView((const LocalClientNum_t)this->m_localClientNum) )
        {
          CG_ScreenBlur(this->m_localClientNum);
          CG_DrawFlashDamage(LocalClientGlobals);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_drawDamageDirection, "cg_drawDamageDirection") && !v11 )
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
        v19 = DVARINT_sre_notification_duration;
        if ( !DVARINT_sre_notification_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sre_notification_duration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        integer = v19->current.integer;
        if ( Sys_Milliseconds() - this->m_lastSRETime < integer )
        {
          v21 = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
          FontHandle = UI_GetFontHandle(v21, 8, 0.5);
          v23 = UI_TextWidth(this->m_lastSREMessage, 0, FontHandle, 0.5);
          UI_DrawText(v21, this->m_lastSREMessage, 0x7FFFFFFF, FontHandle, (float)v23 * -0.5, 65.0, 7, 1, 0.5, &colorWhite, 3);
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
void CgDrawSystemMP::DrawHoldBreathHint(CgDrawSystemMP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 

  if ( !rect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1538, ASSERT_TYPE_ASSERT, "(rect)", (const char *)&queryFormat, "rect") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_Draw_HoldBreathHintCommon((const LocalClientNum_t)this->m_localClientNum, &LocalClientGlobals->predictedPlayerState, rect, font, fontscale, textStyle);
}

/*
==============
CgDrawSystemMP::DrawHybridToggleHint
==============
*/
void CgDrawSystemMP::DrawHybridToggleHint(CgDrawSystemMP *this, const rectDef_s *rect, GfxFont *font, float fontscale, int textStyle)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 

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
      CG_Draw_HybridToggleHintCommon(this->m_localClientNum, p_predictedPlayerState, rect, font, fontscale, textStyle);
    }
  }
}

/*
==============
CgDrawSystemMP::DrawSRENotification
==============
*/
void CgDrawSystemMP::DrawSRENotification(CgDrawSystemMP *this)
{
  const dvar_t *v1; 
  int integer; 
  const ScreenPlacement *ActivePlacement; 
  GfxFont *FontHandle; 
  int v6; 

  v1 = DVARINT_sre_notification_duration;
  if ( !DVARINT_sre_notification_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sre_notification_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( Sys_Milliseconds() - this->m_lastSRETime < integer )
  {
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)this->m_localClientNum);
    FontHandle = UI_GetFontHandle(ActivePlacement, 8, 0.5);
    v6 = UI_TextWidth(this->m_lastSREMessage, 0, FontHandle, 0.5);
    UI_DrawText(ActivePlacement, this->m_lastSREMessage, 0x7FFFFFFF, FontHandle, (float)v6 * -0.5, 65.0, 7, 1, 0.5, &colorWhite, 3);
  }
}

/*
==============
CgDrawSystemMP::FadeHudMenu
==============
*/
float CgDrawSystemMP::FadeHudMenu(CgDrawSystemMP *this, const dvar_t *fadeDvar, int displayStartTime, int duration)
{
  const dvar_t *v4; 
  double v9; 

  v4 = DVARBOOL_hud_enable;
  if ( !DVARBOOL_hud_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "hud_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && this->ShouldDrawHud(this) )
    v9 = CgDrawSystem::FadeHudMenu(this, fadeDvar, displayStartTime, duration);
  else
    LODWORD(v9) = 0;
  return *(float *)&v9;
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
void CgDrawSystemMP::OwnerDraw(CgDrawSystemMP *this, rectDef_s *parentRect, float x, float y, float w, float h, int horzAlign, int vertAlign, float text_x, float text_y, int ownerDraw, GfxFont *font, float scale, const vec4_t *color, int textStyle, int textAlignMode)
{
  rectDef_s rect; 

  rect.horzAlign = horzAlign;
  rect.vertAlign = vertAlign;
  rect.x = x;
  rect.y = y;
  rect.w = w;
  rect.h = h;
  if ( (unsigned __int8)horzAlign != horzAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1570, ASSERT_TYPE_ASSERT, "(rect.horzAlign == horzAlign)", (const char *)&queryFormat, "rect.horzAlign == horzAlign") )
    __debugbreak();
  if ( rect.vertAlign != vertAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1571, ASSERT_TYPE_ASSERT, "(rect.vertAlign == vertAlign)", (const char *)&queryFormat, "rect.vertAlign == vertAlign") )
    __debugbreak();
  CgDrawSystem::OwnerDrawCommon(this, &rect, ownerDraw, font, scale, color, text_x, text_y, textStyle, textAlignMode);
}

/*
==============
CgDrawSystemMP::PreDraw2D
==============
*/
void CgDrawSystemMP::PreDraw2D(CgDrawSystemMP *this)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 880, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  CG_DrawMP_MarkVisibleNames(LocalClientGlobals);
  CG_GameInterface_DrawMP_MarkVisibleVehicles(LocalClientGlobals);
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 4 && LocalClientGlobals->cubemapShot == CUBEMAPSHOT_NONE )
  {
    v3 = DVARBOOL_cg_draw2D;
    if ( !DVARBOOL_cg_draw2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw2D") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      v4 = DVARINT_debugOverlay;
      if ( !DVARINT_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "debugOverlay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( !v4->current.integer || Dvar_GetInt_Internal_DebugName(DVARINT_debugOverlay, "debugOverlay") == 8 || !Dvar_GetBool_Internal_DebugName(DVARBOOL_debugOverlayOnly, "debugOverlayOnly") )
      {
        v5 = this->ShouldDrawHud(this);
        v6 = DCONST_DVARBOOL_cg_crosshairTraceAsync;
        v7 = v5;
        if ( !DCONST_DVARBOOL_cg_crosshairTraceAsync && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairTraceAsync") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        if ( v6->current.enabled && (v7 || LocalClientGlobals->predictedPlayerState.pm_type != 5) )
          CG_DrawMP_StartScanForCrosshairEntity(this->m_localClientNum);
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
  CgDrawSystemMP *v2; 
  unsigned int v3; 
  __int64 i; 
  __int64 m_localClientNum; 
  CgEntitySystem *v6; 
  const cpose_t *p_pose; 
  bool v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  const DObj *v13; 
  __int64 v14; 
  CgStatic *v15; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const BgAnimStatic *v18; 
  AntilagDebugCharacterInfo *m_antilagDebugCharacters; 
  __int64 v20; 
  int XAnimIndex; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int v23; 
  AntilagDebugCharacterInfo *v24; 
  double Rate; 
  double Time; 
  int v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  unsigned __int8 v32; 
  unsigned int v33; 
  XBoneInfo *v34; 
  bool v35; 
  char *v36; 
  __int64 v37; 
  __int64 v38; 
  double v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned __int8 inOutIndex[8]; 
  __int64 v46; 
  int v47; 
  int v48; 
  unsigned int v49; 
  int NumModels; 
  __int64 v51; 
  __int64 v52; 
  int modelIndex; 
  const XModel *Model; 
  const DObj *v55; 
  CgDrawSystemMP *v56; 
  const cpose_t *v57; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 
  XBoneInfo *boneInfo[254]; 

  m_antilagDebugCharacterCount = this->m_antilagDebugCharacterCount;
  v2 = this;
  v56 = this;
  memset_0(this->m_antilagDebugCharacters, 0, 10768 * m_antilagDebugCharacterCount);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v2->m_antilagDebugCharacterCount < (int)ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1407, ASSERT_TYPE_ASSERT, "( m_antilagDebugCharacterCount ) >= ( ComCharacterLimits::GetCharacterMaxCount() )", "%s >= %s\n\t%i, %i", "m_antilagDebugCharacterCount", "ComCharacterLimits::GetCharacterMaxCount()", v2->m_antilagDebugCharacterCount, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  v3 = 0;
  for ( i = 0i64; ; ++i )
  {
    v52 = i;
    v49 = v3;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v3 >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    m_localClientNum = v2->m_localClientNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v44) = v2->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v44) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v44) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v43) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
    {
      LODWORD(v44) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v44) )
        __debugbreak();
    }
    v6 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
    if ( v3 >= 0x800 )
    {
      LODWORD(v44) = 2048;
      LODWORD(v43) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v43, v44) )
        __debugbreak();
    }
    p_pose = &v6->m_entities[i].pose;
    v8 = (v6->m_entities[i].flags & 1) == 0;
    v57 = p_pose;
    if ( !v8 )
    {
      v9 = v2->m_localClientNum;
      if ( v3 > 0x9E4 )
      {
        LODWORD(v44) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v44) )
          __debugbreak();
      }
      if ( v9 >= 2 )
      {
        LODWORD(v44) = 2;
        LODWORD(v43) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v43, v44) )
          __debugbreak();
      }
      v10 = v3 + 2533 * v9;
      if ( v10 >= 0x13CA )
      {
        LODWORD(v44) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v44) )
          __debugbreak();
      }
      v11 = clientObjMap[v10];
      if ( v11 )
      {
        if ( v11 >= (unsigned int)s_objCount )
        {
          LODWORD(v44) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v44) )
            __debugbreak();
        }
        v12 = v11;
        v8 = s_objBuf[v12] == NULL;
        v13 = (const DObj *)s_objBuf[v12];
        v55 = v13;
        if ( !v8 )
        {
          v14 = v2->m_localClientNum;
          if ( !(_BYTE)CgStatic::ms_allocatedType )
          {
            LODWORD(v44) = v2->m_localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v44) )
              __debugbreak();
          }
          if ( (unsigned int)v14 >= LODWORD(CgStatic::ms_allocatedCount) )
          {
            *(float *)&v44 = CgStatic::ms_allocatedCount;
            LODWORD(v43) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v43, v44) )
              __debugbreak();
          }
          if ( !CgStatic::ms_cgameStaticsArray[v14] )
          {
            LODWORD(v44) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v44) )
              __debugbreak();
          }
          v15 = CgStatic::ms_cgameStaticsArray[v14];
          LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v15->m_localClientNum);
          if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
            __debugbreak();
          if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
          {
            if ( v3 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
            {
              LODWORD(v44) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
              LODWORD(v43) = v3;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v43, v44) )
                __debugbreak();
            }
            CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v3);
          }
          else
          {
            CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v3);
          }
          v18 = v15->GetAnimStatics(v15);
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1423, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
            __debugbreak();
          if ( CharacterInfo->usingAnimState )
          {
            m_antilagDebugCharacters = v2->m_antilagDebugCharacters;
            v20 = 10768 * i;
            v51 = v20;
            *(int *)((char *)&m_antilagDebugCharacters->legsAnimIndex + v20) = 0;
            *(float *)((char *)&v2->m_antilagDebugCharacters->legsAnimRate + v20) = 0.0;
            *(float *)((char *)&v2->m_antilagDebugCharacters->legsAnimTime + v20) = 0.0;
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
              XAnimIndex = BG_AnimationMP_GetXAnimIndex(v18, SuitAnimIndexFromCharacter, CharacterInfo->legs.animationNumber & 0xFFFFEFFF);
            }
            v23 = XAnimIndex;
            v24 = v2->m_antilagDebugCharacters;
            v20 = 10768 * i;
            v51 = v20;
            *(int *)((char *)&v24->legsAnimIndex + v20) = v23;
            Rate = XAnimGetRate(v13->tree, 0, XANIM_SUBTREE_DEFAULT, v23);
            *(float *)((char *)&v2->m_antilagDebugCharacters->legsAnimRate + v20) = *(float *)&Rate;
            Time = XAnimGetTime(v13->tree, 0, XANIM_SUBTREE_DEFAULT, v23);
            *(float *)((char *)&v2->m_antilagDebugCharacters->legsAnimTime + v20) = *(float *)&Time;
          }
          DObjGetBoneInfo(v13, boneInfo);
          NumModels = DObjGetNumModels(v13);
          v27 = NumModels;
          if ( NumModels <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1454, ASSERT_TYPE_ASSERT, "(modelCount > 0)", (const char *)&queryFormat, "modelCount > 0") )
            __debugbreak();
          v28 = 0;
          v48 = 0;
          if ( v27 > 0 )
          {
            do
            {
              Model = DObjGetModel(v13, v28);
              v29 = (__int64)Model;
              if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1459, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
                __debugbreak();
              v30 = 0i64;
              v31 = 0i64;
              v47 = 0;
              v46 = 0i64;
              if ( *(_BYTE *)(v29 + 20) )
              {
                do
                {
                  v32 = *(_BYTE *)(v31 + *(_QWORD *)(v29 + 184));
                  if ( v32 >= 0x16u )
                  {
                    LODWORD(v44) = 22;
                    LODWORD(v43) = v32;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1465, ASSERT_TYPE_ASSERT, "(unsigned)( modelBonePartClassification ) < (unsigned)( HITLOC_NUM )", "modelBonePartClassification doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v43, v44) )
                      __debugbreak();
                    v31 = v46;
                  }
                  if ( v32 )
                  {
                    v33 = *(unsigned __int8 *)(v29 + 20);
                    inOutIndex[0] = -2;
                    if ( (unsigned int)v30 >= v33 )
                    {
                      LODWORD(v44) = v33;
                      LODWORD(v43) = v30;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 173, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( model->numBones )", "boneIndex doesn't index model->numBones\n\t%i not in [0, %i)", v43, v44) )
                        __debugbreak();
                    }
                    if ( !*(_QWORD *)(v29 + 152) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 174, ASSERT_TYPE_ASSERT, "(model->boneNames)", (const char *)&queryFormat, "model->boneNames") )
                      __debugbreak();
                    if ( DObjGetBoneIndexInternal_70(v13, *(scr_string_t *)(*(_QWORD *)(v29 + 152) + 4 * v30), inOutIndex, &modelIndex) )
                    {
                      v34 = boneInfo[inOutIndex[0]];
                      v35 = v34->bounds.halfSize.v[0] != 0.0 || v34->bounds.halfSize.v[1] != 0.0 || v34->bounds.halfSize.v[2] != 0.0;
                      if ( v35 && CG_DObjGetWorldBoneMatrix(p_pose, v13, inOutIndex[0], &outTagMat, &outOrigin) )
                      {
                        v36 = (char *)v2->m_antilagDebugCharacters + v20;
                        if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1383, ASSERT_TYPE_ASSERT, "(outCharacterInfo)", (const char *)&queryFormat, "outCharacterInfo") )
                          __debugbreak();
                        if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_draw_mp.cpp", 1384, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
                          __debugbreak();
                        v37 = *((int *)v36 + 3);
                        if ( (unsigned int)v37 < 0x80 )
                        {
                          v38 = (__int64)&v36[84 * v37 + 16];
                          *(_OWORD *)v38 = *(_OWORD *)v34->bounds.midPoint.v;
                          v39 = *(double *)&v34->bounds.halfSize.y;
                          v40 = 0;
                          v41 = (__int64)&v36[84 * v37 + 56];
                          *(double *)(v38 + 16) = v39;
                          do
                          {
                            if ( (unsigned int)v40 >= 4 )
                            {
                              LODWORD(v44) = 4;
                              LODWORD(v43) = v40;
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v43, v44) )
                                __debugbreak();
                            }
                            if ( (unsigned int)v40 >= 3 )
                            {
                              LODWORD(v44) = 3;
                              LODWORD(v43) = v40;
                              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v43, v44) )
                                __debugbreak();
                            }
                            ++v40;
                            *(_DWORD *)(v41 - 4) = *(_DWORD *)((char *)&outTagMat.m[-3] + v41 - v38 - 4);
                            *(float *)v41 = *(float *)((char *)outTagMat.m[-3].v + v41 - v38);
                            *(_DWORD *)(v41 + 4) = *(_DWORD *)((char *)&outTagMat.m[-2] + v41 - v38 - 8);
                            v41 += 12i64;
                          }
                          while ( v40 < 3 );
                          v29 = (__int64)Model;
                          LODWORD(v30) = v47;
                          v13 = v55;
                          v2 = v56;
                          *(vec3_t *)(v38 + 24) = outOrigin;
                          ++*((_DWORD *)v36 + 3);
                          p_pose = v57;
                        }
                      }
                    }
                    v31 = v46;
                  }
                  v42 = *(unsigned __int8 *)(v29 + 20);
                  v20 = v51;
                  v30 = (unsigned int)(v30 + 1);
                  ++v31;
                  v47 = v30;
                  v46 = v31;
                }
                while ( (int)v30 < v42 );
                v27 = NumModels;
              }
              v20 = v51;
              v28 = v48 + 1;
              v48 = v28;
            }
            while ( v28 < v27 );
            v3 = v49;
            i = v52;
          }
        }
      }
    }
    ++v3;
  }
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

