/*
==============
CL_Screen_SetInUpdate
==============
*/

void __fastcall CL_Screen_SetInUpdate(bool isInUpdate)
{
  ?CL_Screen_SetInUpdate@@YAX_N@Z(isInUpdate);
}

/*
==============
CL_Screen_IsUpdateBlocked
==============
*/

bool __fastcall CL_Screen_IsUpdateBlocked()
{
  return ?CL_Screen_IsUpdateBlocked@@YA_NXZ();
}

/*
==============
CL_Screen_Init
==============
*/

void CL_Screen_Init(void)
{
  ?CL_Screen_Init@@YAXXZ();
}

/*
==============
CL_Screen_ClearFrontendCinematic
==============
*/

void CL_Screen_ClearFrontendCinematic(void)
{
  ?CL_Screen_ClearFrontendCinematic@@YAXXZ();
}

/*
==============
CL_Screen_UpdateRumble
==============
*/

void CL_Screen_UpdateRumble(void)
{
  ?CL_Screen_UpdateRumble@@YAXXZ();
}

/*
==============
CL_Screen_Update
==============
*/

void CL_Screen_Update(void)
{
  ?CL_Screen_Update@@YAXXZ();
}

/*
==============
CL_Screen_GetMenuBlurRadius
==============
*/

double __fastcall CL_Screen_GetMenuBlurRadius(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CL_Screen_GetMenuBlurRadius@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CL_Screen_ClearFrontendCinematic
==============
*/
void CL_Screen_ClearFrontendCinematic(void)
{
  s_frontendCinematicState.name[0] = 0;
  s_frontendCinematicState.playbackFlags = 0;
}

/*
==============
CL_Screen_DrawBlankScreenSpinnerAtlas
==============
*/

void __fastcall CL_Screen_DrawBlankScreenSpinnerAtlas(GfxImage *spinnerMaterial, double _XMM1_8)
{
  const dvar_t *v7; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v21; 
  float fmt; 
  vec2_t verts; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  R_AddCmdProjectionSet2D();
  v7 = DCONST_DVARINT_lui_loading_spinner_width;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm6, xmm1, cs:__real@3d088889
    vmulss  xmm0, xmm6, cs:__real@3f400000
    vaddss  xmm2, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vsubss  xmm8, xmm0, xmm2
    vsubss  xmm7, xmm1, xmm2
  }
  if ( !DCONST_DVARINT_lui_loading_spinner_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v17 = DCONST_DVARINT_lui_loading_spinner_height;
  if ( !DCONST_DVARINT_lui_loading_spinner_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = DCONST_DVARINT_lui_loading_spinner_frame_count;
  __asm
  {
    vaddss  xmm0, xmm7, xmm6
    vaddss  xmm1, xmm8, xmm6
    vmovss  dword ptr [rsp+0C8h+verts], xmm7
    vmovss  dword ptr [rsp+0C8h+verts+4], xmm8
    vmovss  [rsp+0C8h+var_80], xmm0
    vmovss  [rsp+0C8h+var_7C], xmm8
    vmovss  [rsp+0C8h+var_78], xmm0
    vmovss  [rsp+0C8h+var_74], xmm1
    vmovss  [rsp+0C8h+var_70], xmm7
    vmovss  [rsp+0C8h+var_6C], xmm1
  }
  if ( !DCONST_DVARINT_lui_loading_spinner_frame_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_frame_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v21 = DCONST_DVARFLT_lui_loading_spinner_frame_rate;
  if ( !DCONST_DVARFLT_lui_loading_spinner_frame_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_frame_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, edi
    vdivss  xmm0, xmm6, dword ptr [rbx+28h]
    vroundss xmm1, xmm1, xmm0, 2
    vmulss  xmm0, xmm1, cs:__real@447a0000
    vcvttss2si ebx, xmm0
  }
  Sys_Milliseconds();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edx
    vmulss  xmm2, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vdivss  xmm3, xmm2, xmm1
    vroundss xmm0, xmm0, xmm3, 1
    vcvttss2si r8d, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r9d
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edx
    vdivss  xmm7, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vdivss  xmm6, xmm2, xmm0
  }
  R_AddCmdSetCodeTexture(4u, spinnerMaterial);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm3, xmm3, esi
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm3, xmm3, xmm0
    vaddss  xmm5, xmm3, xmm6
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm0, xmm0, edi
    vcvtsi2ss xmm4, xmm4, ebp
    vdivss  xmm3, xmm4, xmm0
    vaddss  xmm3, xmm3, xmm7; s1
    vmovaps xmm2, xmm6; t0
    vmovaps xmm1, xmm7; s0
    vmovss  dword ptr [rsp+0C8h+fmt], xmm5
  }
  R_AddCmdDrawQuadPicST(&verts, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, &colorWhite, rgp.texturedSimple);
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CL_Screen_DrawFrontEndUI_HandleRemoteScreenUpdateBlankScreen
==============
*/

void __fastcall CL_Screen_DrawFrontEndUI_HandleRemoteScreenUpdateBlankScreen(LocalClientNum_t localClientNum, double a2, double _XMM2_8)
{
  int ControllerFromClient; 
  int v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  Online_Commerce *Instance; 
  Online_Commerce *v15; 
  char v16; 
  Online_Commerce *v17; 
  bool HavePaidEntitlement; 
  GfxImage *animatedLoadImagePremium; 
  float fmt; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v55; 

  if ( r_glob.isRenderingRemoteUpdate && (!cls.uiStarted || r_glob.rsuPlayAnimatedTexture) && !R_Cinematic_IsStarted() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    v11 = ControllerFromClient;
    if ( ControllerFromClient == -1 )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_18], xmm6
        vmovaps [rsp+0C8h+var_28], xmm7
        vmovaps [rsp+0C8h+var_38], xmm8
        vmovaps [rsp+0C8h+var_48], xmm9
        vmovaps [rsp+0C8h+var_58], xmm10
      }
      R_AddCmdProjectionSet2D();
      Sys_Milliseconds();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, cs:__real@3a83126f; X
        vxorps  xmm2, xmm2, xmm2
        vxorps  xmm8, xmm8, xmm8
        vcvtsi2ss xmm8, xmm8, rax
        vmulss  xmm10, xmm8, cs:__real@3d088889
        vmulss  xmm1, xmm10, cs:__real@3f400000
        vaddss  xmm7, xmm1, xmm10
        vcvtsi2ss xmm2, xmm2, rax
        vsubss  xmm9, xmm2, xmm7
      }
      *(float *)&_XMM0 = modff(*(float *)&_XMM0, &v55);
      __asm { vmovaps xmm6, xmm0 }
      R_AddCmdSetCodeTexture(4u, rgp.animatedLoadImageDefault);
      __asm
      {
        vmulss  xmm3, xmm6, cs:__real@43b40000
        vmovss  [rsp+0C8h+var_88], xmm3
        vmovss  xmm3, cs:__real@3f800000
        vmovss  [rsp+0C8h+var_90], xmm3
        vmovss  dword ptr [rsp+0C8h+var_98], xmm3
        vxorps  xmm4, xmm4, xmm4
        vmovss  dword ptr [rsp+0C8h+var_A0], xmm4
        vmovaps xmm3, xmm10; h
        vsubss  xmm0, xmm8, xmm7; x
        vmovaps xmm2, xmm10; w
        vmovaps xmm1, xmm9; y
        vmovss  dword ptr [rsp+0C8h+fmt], xmm4
      }
      R_AddCmdDrawStretchPicRotateXY(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v46, v47, v48, v49, 0, 1, &colorWhite, rgp.texturedSimple);
      __asm
      {
        vmovaps xmm10, [rsp+0C8h+var_58]
        vmovaps xmm9, [rsp+0C8h+var_48]
        vmovaps xmm8, [rsp+0C8h+var_38]
        vmovaps xmm7, [rsp+0C8h+var_28]
        vmovaps xmm6, [rsp+0C8h+var_18]
      }
    }
    else if ( LiveStorage_IsPaidUserReady(ControllerFromClient) )
    {
      v12 = DVARBOOL_com_force_free_to_play;
      if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled )
        goto LABEL_27;
      v13 = DVARBOOL_com_force_premium;
      if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
        __debugbreak();
      if ( (Dvar_CheckFrontendServerThread(v13), v13->current.enabled) || Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() || ((Instance = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(Instance, v11) == ENTITLEMENT_STATE_COMPLETE) || (v15 = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(v15, v11) == ENTITLEMENT_STATE_ERROR) ? (v16 = 1) : (v16 = 0), (v17 = Online_Commerce::GetInstance(), HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v17, v11), Live_IsUserSignedInToLive(v11)) && v16 && HavePaidEntitlement) )
        animatedLoadImagePremium = rgp.animatedLoadImagePremium;
      else
LABEL_27:
        animatedLoadImagePremium = rgp.animatedLoadImageF2P;
      CL_Screen_DrawBlankScreenSpinnerAtlas(animatedLoadImagePremium, a2);
    }
  }
}

/*
==============
CL_Screen_DrawFrontendUI
==============
*/
void CL_Screen_DrawFrontendUI(LocalClientNum_t localClientNum, double a2, double a3)
{
  __int64 v3; 
  int i; 
  ClGameModeApplication *ActiveClientApplication; 
  _BOOL8 v6; 
  ClGameModeApplication *v7; 
  int v8; 
  int v9; 
  LocalClientNum_t outLocalClientNum; 

  v3 = localClientNum;
  CL_UIStreaming_UpdateImages();
  Stream_UpdateForFrontendUI();
  if ( Sys_IsMainThread() )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      v9 = 2;
      v8 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( (clientUIActives[v3].keyCatchers & 0x40) != 0 )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) )
        {
          CL_Keys_UpdateActiveBindings(outLocalClientNum, VEC3_POINTER);
          CL_Gamepad_UpdateActiveMappings(outLocalClientNum, VEC3_POINTER);
        }
      }
    }
  }
  if ( SND_ExistsPendingRestore() )
    SND_BankStreamUpdate();
  else
    CL_Main_UpdateSound(0);
  R_ToggleSmpFrame((LocalClientNum_t)v3);
  R_IssueRenderCommandsBegin(3u);
  ScrPlace_BeginFullScreen();
  R_BeginSharedCmdList();
  R_AddCmdProjectionSet2D();
  R_AddCmdClearScreen(15, 0);
  if ( DB_IsDoingSPHotLoad() )
  {
    if ( !ClGameModeApplication::HasActiveApplicationGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_scrn.cpp", 466, ASSERT_TYPE_ASSERT, "(ClGameModeApplication::HasActiveApplicationGameMode())", (const char *)&queryFormat, "ClGameModeApplication::HasActiveApplicationGameMode()") )
      __debugbreak();
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    v6 = 0i64;
LABEL_21:
    v7 = ActiveClientApplication;
    ActiveClientApplication->DrawUIScene(ActiveClientApplication, (LocalClientNum_t)v3, v6);
    v7->DrawOverlay(v7, (LocalClientNum_t)v3);
    goto LABEL_23;
  }
  if ( cls.uiStarted )
  {
    if ( !(unsigned __int8)ClGameModeApplication::GetActiveApplicationGameMode() )
    {
      UI_UpdateTime((LocalClientNum_t)v3, cls.realtime);
      R_AddCmdClearScreen(15, 0);
      LUI_CoD_RunNoClientFrame((const LocalClientNum_t)v3);
      CL_SetFullScreenViewport();
      R_AddCmdProjectionSet2D();
      Con_DrawConsole((LocalClientNum_t)v3);
      DevGui_Draw((LocalClientNum_t)v3);
      Profile_Begin(479);
      CG_DrawDebugSP_DrawNoGameModeOverlays((const LocalClientNum_t)v3);
      CG_DrawDebugMP_DrawNoGameModeOverlays((const LocalClientNum_t)v3);
      GamerProfile_DebugDrawFullscreenInfo();
      Profile_EndInternal(NULL);
      goto LABEL_23;
    }
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    LOBYTE(v6) = 1;
    goto LABEL_21;
  }
LABEL_23:
  Com_DoMaxFPSWait();
  CL_Screen_DrawFrontEndUI_HandleRemoteScreenUpdateBlankScreen((LocalClientNum_t)v3, a2, a3);
}

/*
==============
CL_Screen_GetMenuBlurRadius
==============
*/
double CL_Screen_GetMenuBlurRadius(LocalClientNum_t localClientNum)
{
  if ( cls.uiStarted )
    return LUI_CoD_GetWorldBlurForLocalClient(localClientNum);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  return *(double *)&_XMM0;
}

/*
==============
CL_Screen_Init
==============
*/
void CL_Screen_Init(void)
{
  s_screen_initialized = 1;
}

/*
==============
CL_Screen_IsUpdateBlocked
==============
*/
bool CL_Screen_IsUpdateBlocked()
{
  bool result; 

  if ( s_screen_in_update )
    return 1;
  if ( !s_screen_initialized )
    return 1;
  result = Com_ErrorEntered();
  if ( result )
    return 1;
  return result;
}

/*
==============
CL_Screen_SetInUpdate
==============
*/
void CL_Screen_SetInUpdate(bool isInUpdate)
{
  s_screen_in_update = isInUpdate;
}

/*
==============
CL_Screen_Update
==============
*/
void CL_Screen_Update(void)
{
  if ( !s_screen_in_update && s_screen_initialized && !Com_ErrorEntered() )
  {
    Profile2_UpdateEntry(26);
    if ( ((unsigned __int8)&dword_14FDE8038 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8038) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8038);
    Sys_ProfBeginNamedEvent(0xFFFAEBD7, "Update Client Screen");
    s_screen_in_update = 1;
    Sys_SetUpdateScreenThread();
    CL_Screen_UpdateFrame(SET_SHAPE_KEY_A);
    Sys_ClearUpdateScreenThread();
    s_screen_in_update = 0;
    Sys_ProfEndNamedEvent();
    Profile2_UpdateEntry(26);
    if ( ((unsigned __int64)&dword_14FDE8038 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8038) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8038);
  }
}

/*
==============
CL_Screen_UpdateFrame
==============
*/
void CL_Screen_UpdateFrame(Scr_UpdateFrame_State state, double a2, double a3)
{
  int v4; 
  int v5; 
  bool CanDrawGameScene; 
  ClGameModeApplication *ActiveClientApplication; 
  unsigned int v8; 
  unsigned __int8 v9; 
  int v10; 
  ClGameModeApplication *v11; 
  CinematicState *p_cinematicState; 
  char v13; 
  ClGameModeApplication *v14; 
  int i; 
  char v16[16]; 
  CinematicState cinematicState; 
  CinematicState frontendSceneRequest; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_scrn.cpp", 614, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( Sys_IsMainThread() )
    Profile_BeginCSV(1);
  R_BeginFrame();
  Stream_BeginScreenUpdateFrame();
  R_Screenshot_UpdatePending();
  v4 = 0;
  v5 = -1;
  if ( Sys_IsMainThread() && (!Com_FrontEndScene_IsActive() ? (CanDrawGameScene = !CL_AllLocalClientsDisconnected()) : (CanDrawGameScene = Com_FrontEndScene_CanDrawGameScene()), CanDrawGameScene) )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_scrn.cpp", 642, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tShould not be drawing the game world from other threads", "Sys_IsMainThread()") )
      __debugbreak();
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_scrn.cpp", 534, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    Physics_WaitForAllCommandsToFinish();
    v16[0] = 0;
    if ( ActiveClientApplication->DrawGameScene(ActiveClientApplication, state, (bool *)v16) )
    {
      if ( Com_FrontEndScene_IsActive() )
      {
        v8 = 0;
        v9 = 0;
      }
      else
      {
        v10 = 0;
        v8 = -1;
        do
        {
          if ( CL_IsLocalClientActive((LocalClientNum_t)v10) )
            v8 = v10;
          ++v10;
        }
        while ( v10 < 2 );
        if ( v8 == -1 )
          v8 = 0;
        v9 = 0;
      }
    }
    else
    {
      CL_UIStreaming_UpdateImages();
      Stream_UpdateForFrontendUI();
      if ( SND_ExistsPendingRestore() )
        SND_BankStreamUpdate();
      else
        CL_Main_UpdateSound(0);
      if ( !v16[0] )
      {
        R_ToggleSmpFrame(LOCAL_CLIENT_0);
        R_IssueRenderCommandsBegin(3u);
      }
      Com_DoMaxFPSWait();
      v8 = 0;
      v9 = 1;
    }
    ScrPlace_BeginFullScreen();
    R_BeginSharedCmdList();
    R_AddCmdProjectionSet2D();
    if ( cls.uiStarted )
    {
      v11 = ClGameModeApplication::GetActiveClientApplication();
      v11->DrawUIScene(v11, (LocalClientNum_t)v8, v9);
      v11->DrawOverlay(v11, (LocalClientNum_t)v8);
    }
    else
    {
      R_AddCmdClearScreen(15, 0);
    }
  }
  else
  {
    CL_Screen_DrawFrontendUI(LOCAL_CLIENT_0, a2, a3);
    g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  }
  if ( Com_FrontEnd_IsInFrontEnd() && !UI_AutoNavigation_UseBypasses() )
  {
    CG_FrontEndScene_GetCinematicState(&frontendSceneRequest);
    LUI_CoD_GetFrontendCinematicState(&cinematicState);
    p_cinematicState = &cinematicState;
    if ( !cinematicState.name[0] )
      p_cinematicState = &frontendSceneRequest;
    if ( I_stricmp(p_cinematicState->name, s_frontendCinematicState.name) || p_cinematicState->playbackFlags != s_frontendCinematicState.playbackFlags || p_cinematicState->startOffsetMSec != s_frontendCinematicState.startOffsetMSec )
    {
      Core_strcpy(s_frontendCinematicState.name, 0x40ui64, p_cinematicState->name);
      v13 = p_cinematicState->name[0];
      s_frontendCinematicState.playbackFlags = p_cinematicState->playbackFlags;
      s_frontendCinematicState.startOffsetMSec = p_cinematicState->startOffsetMSec;
      R_Cinematic_StopPlayback(0);
      if ( v13 )
        R_Cinematic_StartPlayback(p_cinematicState->name, p_cinematicState->playbackFlags, p_cinematicState->startOffsetMSec);
    }
  }
  LUI_CoD_CheckWaitForWorkers();
  ScrPlace_EndFrame();
  Stream_EndScreenUpdateFrame();
  R_EndFrame();
  R_IssueRenderCommandsEnd();
  if ( (unsigned __int8)ClGameModeApplication::GetActiveApplicationGameMode() )
  {
    v14 = ClGameModeApplication::GetActiveClientApplication();
    if ( !Com_FrontEndScene_IsActive() )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
          v5 = i;
      }
      if ( v5 == -1 )
        v5 = 0;
      v4 = v5;
    }
    v14->UpdateSkinningCache(v14, (LocalClientNum_t)v4);
  }
  if ( Sys_IsMainThread() )
    Profile_EndCSV(1);
}

/*
==============
CL_Screen_UpdateRumble
==============
*/
void CL_Screen_UpdateRumble(void)
{
  int i; 

  for ( i = 0; i < 8; ++i )
  {
    if ( !CL_Mgr_IsControllerMappedToClient(i, NULL) || CL_Pause_IsGamePaused() )
      GPad_StopRumbles(i, 0);
    else
      GPad_UpdateRumbles(i);
  }
}

