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
void CL_Screen_DrawBlankScreenSpinnerAtlas(GfxImage *spinnerMaterial)
{
  const dvar_t *v2; 
  float displayWidth; 
  float v4; 
  float v5; 
  float displayHeight; 
  float v7; 
  float v8; 
  int integer; 
  const dvar_t *v10; 
  int v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int width; 
  int v18; 
  int height; 
  int v21; 
  float v22; 
  float v23; 
  vec2_t verts; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 

  R_AddCmdProjectionSet2D();
  v2 = DCONST_DVARINT_lui_loading_spinner_width;
  displayWidth = (float)vidConfig.displayWidth;
  v4 = displayWidth * 0.033333335;
  v5 = (float)(v4 * 0.75) + v4;
  displayHeight = (float)vidConfig.displayHeight;
  v7 = displayHeight - v5;
  v8 = displayWidth - v5;
  if ( !DCONST_DVARINT_lui_loading_spinner_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  v10 = DCONST_DVARINT_lui_loading_spinner_height;
  if ( !DCONST_DVARINT_lui_loading_spinner_height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_height") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.integer;
  v12 = DCONST_DVARINT_lui_loading_spinner_frame_count;
  verts.v[0] = displayWidth - v5;
  verts.v[1] = v7;
  v25 = v8 + v4;
  v26 = v7;
  v27 = v8 + v4;
  v28 = v7 + v4;
  v29 = displayWidth - v5;
  v30 = v7 + v4;
  if ( !DCONST_DVARINT_lui_loading_spinner_frame_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_frame_count") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = DCONST_DVARFLT_lui_loading_spinner_frame_rate;
  if ( !DCONST_DVARFLT_lui_loading_spinner_frame_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_loading_spinner_frame_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 2 }
  Sys_Milliseconds();
  width = spinnerMaterial->width;
  _XMM0 = 0i64;
  v18 = width / integer;
  height = spinnerMaterial->height;
  if ( width / integer < 1 )
    v18 = 1;
  __asm { vroundss xmm0, xmm0, xmm3, 1 }
  v21 = height / v11;
  v22 = (float)((int)*(float *)&_XMM0 % v18) / (float)v18;
  if ( height / v11 < 1 )
    v21 = 1;
  v23 = (float)((int)*(float *)&_XMM0 / v18) / (float)v21;
  R_AddCmdSetCodeTexture(4u, spinnerMaterial);
  R_AddCmdDrawQuadPicST(&verts, v22, v23, (float)((float)integer / (float)width) + v22, (float)((float)v11 / (float)height) + v23, &colorWhite, rgp.texturedSimple);
}

/*
==============
CL_Screen_DrawFrontEndUI_HandleRemoteScreenUpdateBlankScreen
==============
*/
void CL_Screen_DrawFrontEndUI_HandleRemoteScreenUpdateBlankScreen(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  int v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  Online_Commerce *Instance; 
  Online_Commerce *v7; 
  char v8; 
  Online_Commerce *v9; 
  bool HavePaidEntitlement; 
  GfxImage *animatedLoadImagePremium; 
  float v12; 
  float displayWidth; 
  float displayHeight; 
  float v15; 
  float v16; 

  if ( r_glob.isRenderingRemoteUpdate && (!cls.uiStarted || r_glob.rsuPlayAnimatedTexture) && !R_Cinematic_IsStarted() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    v3 = ControllerFromClient;
    if ( ControllerFromClient == -1 )
    {
      R_AddCmdProjectionSet2D();
      v12 = (float)Sys_Milliseconds() * 0.001;
      displayWidth = (float)vidConfig.displayWidth;
      displayHeight = (float)vidConfig.displayHeight;
      v15 = modff(v12, &v16);
      R_AddCmdSetCodeTexture(4u, rgp.animatedLoadImageDefault);
      R_AddCmdDrawStretchPicRotateXY(displayWidth - (float)((float)((float)(displayWidth * 0.033333335) * 0.75) + (float)(displayWidth * 0.033333335)), displayHeight - (float)((float)((float)(displayWidth * 0.033333335) * 0.75) + (float)(displayWidth * 0.033333335)), displayWidth * 0.033333335, displayWidth * 0.033333335, 0.0, 0.0, 1.0, 1.0, v15 * 360.0, 0, 1, &colorWhite, rgp.texturedSimple);
    }
    else if ( LiveStorage_IsPaidUserReady(ControllerFromClient) )
    {
      v4 = DVARBOOL_com_force_free_to_play;
      if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
        goto LABEL_27;
      v5 = DVARBOOL_com_force_premium;
      if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
        __debugbreak();
      if ( (Dvar_CheckFrontendServerThread(v5), v5->current.enabled) || Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() || ((Instance = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(Instance, v3) == ENTITLEMENT_STATE_COMPLETE) || (v7 = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(v7, v3) == ENTITLEMENT_STATE_ERROR) ? (v8 = 1) : (v8 = 0), (v9 = Online_Commerce::GetInstance(), HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v9, v3), Live_IsUserSignedInToLive(v3)) && v8 && HavePaidEntitlement) )
        animatedLoadImagePremium = rgp.animatedLoadImagePremium;
      else
LABEL_27:
        animatedLoadImagePremium = rgp.animatedLoadImageF2P;
      CL_Screen_DrawBlankScreenSpinnerAtlas(animatedLoadImagePremium);
    }
  }
}

/*
==============
CL_Screen_DrawFrontendUI
==============
*/
void CL_Screen_DrawFrontendUI(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int i; 
  ClGameModeApplication *ActiveClientApplication; 
  _BOOL8 v4; 
  ClGameModeApplication *v5; 
  int v6; 
  int v7; 
  LocalClientNum_t outLocalClientNum; 

  v1 = localClientNum;
  CL_UIStreaming_UpdateImages();
  Stream_UpdateForFrontendUI();
  if ( Sys_IsMainThread() )
  {
    if ( (unsigned int)v1 >= 2 )
    {
      v7 = 2;
      v6 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( (clientUIActives[v1].keyCatchers & 0x40) != 0 )
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
  R_ToggleSmpFrame((LocalClientNum_t)v1);
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
    v4 = 0i64;
LABEL_21:
    v5 = ActiveClientApplication;
    ActiveClientApplication->DrawUIScene(ActiveClientApplication, (LocalClientNum_t)v1, v4);
    v5->DrawOverlay(v5, (LocalClientNum_t)v1);
    goto LABEL_23;
  }
  if ( cls.uiStarted )
  {
    if ( !(unsigned __int8)ClGameModeApplication::GetActiveApplicationGameMode() )
    {
      UI_UpdateTime((LocalClientNum_t)v1, cls.realtime);
      R_AddCmdClearScreen(15, 0);
      LUI_CoD_RunNoClientFrame((const LocalClientNum_t)v1);
      CL_SetFullScreenViewport();
      R_AddCmdProjectionSet2D();
      Con_DrawConsole((LocalClientNum_t)v1);
      DevGui_Draw((LocalClientNum_t)v1);
      Profile_Begin(479);
      CG_DrawDebugSP_DrawNoGameModeOverlays((const LocalClientNum_t)v1);
      CG_DrawDebugMP_DrawNoGameModeOverlays((const LocalClientNum_t)v1);
      GamerProfile_DebugDrawFullscreenInfo();
      Profile_EndInternal(NULL);
      goto LABEL_23;
    }
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    LOBYTE(v4) = 1;
    goto LABEL_21;
  }
LABEL_23:
  Com_DoMaxFPSWait();
  CL_Screen_DrawFrontEndUI_HandleRemoteScreenUpdateBlankScreen((LocalClientNum_t)v1);
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
  else
    return 0.0;
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
void CL_Screen_UpdateFrame(Scr_UpdateFrame_State state)
{
  int v2; 
  int v3; 
  bool CanDrawGameScene; 
  ClGameModeApplication *ActiveClientApplication; 
  unsigned int v6; 
  unsigned __int8 v7; 
  int v8; 
  ClGameModeApplication *v9; 
  CinematicState *p_cinematicState; 
  char v11; 
  ClGameModeApplication *v12; 
  int i; 
  char v14[16]; 
  CinematicState cinematicState; 
  CinematicState frontendSceneRequest; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_scrn.cpp", 614, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( Sys_IsMainThread() )
    Profile_BeginCSV(1);
  R_BeginFrame();
  Stream_BeginScreenUpdateFrame();
  R_Screenshot_UpdatePending();
  v2 = 0;
  v3 = -1;
  if ( Sys_IsMainThread() && (!Com_FrontEndScene_IsActive() ? (CanDrawGameScene = !CL_AllLocalClientsDisconnected()) : (CanDrawGameScene = Com_FrontEndScene_CanDrawGameScene()), CanDrawGameScene) )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_scrn.cpp", 642, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tShould not be drawing the game world from other threads", "Sys_IsMainThread()") )
      __debugbreak();
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_scrn.cpp", 534, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    ActiveClientApplication = ClGameModeApplication::GetActiveClientApplication();
    Physics_WaitForAllCommandsToFinish();
    v14[0] = 0;
    if ( ActiveClientApplication->DrawGameScene(ActiveClientApplication, state, (bool *)v14) )
    {
      if ( Com_FrontEndScene_IsActive() )
      {
        v6 = 0;
        v7 = 0;
      }
      else
      {
        v8 = 0;
        v6 = -1;
        do
        {
          if ( CL_IsLocalClientActive((LocalClientNum_t)v8) )
            v6 = v8;
          ++v8;
        }
        while ( v8 < 2 );
        if ( v6 == -1 )
          v6 = 0;
        v7 = 0;
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
      if ( !v14[0] )
      {
        R_ToggleSmpFrame(LOCAL_CLIENT_0);
        R_IssueRenderCommandsBegin(3u);
      }
      Com_DoMaxFPSWait();
      v6 = 0;
      v7 = 1;
    }
    ScrPlace_BeginFullScreen();
    R_BeginSharedCmdList();
    R_AddCmdProjectionSet2D();
    if ( cls.uiStarted )
    {
      v9 = ClGameModeApplication::GetActiveClientApplication();
      v9->DrawUIScene(v9, (LocalClientNum_t)v6, v7);
      v9->DrawOverlay(v9, (LocalClientNum_t)v6);
    }
    else
    {
      R_AddCmdClearScreen(15, 0);
    }
  }
  else
  {
    CL_Screen_DrawFrontendUI(LOCAL_CLIENT_0);
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
      v11 = p_cinematicState->name[0];
      s_frontendCinematicState.playbackFlags = p_cinematicState->playbackFlags;
      s_frontendCinematicState.startOffsetMSec = p_cinematicState->startOffsetMSec;
      R_Cinematic_StopPlayback(0);
      if ( v11 )
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
    v12 = ClGameModeApplication::GetActiveClientApplication();
    if ( !Com_FrontEndScene_IsActive() )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
          v3 = i;
      }
      if ( v3 == -1 )
        v3 = 0;
      v2 = v3;
    }
    v12->UpdateSkinningCache(v12, (LocalClientNum_t)v2);
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

