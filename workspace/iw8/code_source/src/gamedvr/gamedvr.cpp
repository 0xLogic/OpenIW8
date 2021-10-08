/*
==============
GameDVR_Shutdown
==============
*/

void GameDVR_Shutdown(void)
{
  ?GameDVR_Shutdown@@YAXXZ();
}

/*
==============
GameDVR_Init
==============
*/

void GameDVR_Init(void)
{
  ?GameDVR_Init@@YAXXZ();
}

/*
==============
GameDVR_Frame
==============
*/

void GameDVR_Frame(void)
{
  ?GameDVR_Frame@@YAXXZ();
}

/*
==============
GameDVR_Frame
==============
*/
void GameDVR_Frame(void)
{
  if ( gamedvr_prohibitrecording->modified )
  {
    Dvar_ClearModified(gamedvr_prohibitrecording);
    GameDVR_ProhibitRecording(!gamedvr_prohibitrecording->current.enabled);
  }
  if ( gamedvr_prohibitscreenshot->modified )
  {
    Dvar_ClearModified(gamedvr_prohibitscreenshot);
    GameDVR_ProhibitScreenshots(!gamedvr_prohibitscreenshot->current.enabled);
  }
  if ( gamedvr_videotitle->modified || gamedvr_videodescription->modified || gamedvr_videocomment->modified || gamedvr_videocopyright->modified )
  {
    Dvar_ClearModified(gamedvr_videotitle);
    Dvar_ClearModified(gamedvr_videodescription);
    Dvar_ClearModified(gamedvr_videocomment);
    Dvar_ClearModified(gamedvr_videocopyright);
    GameDVR_SetVideoMetadata(gamedvr_videotitle->current.string, gamedvr_videodescription->current.string, gamedvr_videocomment->current.string, gamedvr_videocopyright->current.string);
  }
  if ( gamedvr_screenshotgametitle->modified || gamedvr_screenshottitle->modified || gamedvr_screenshotcomment->modified )
  {
    Dvar_ClearModified(gamedvr_screenshotgametitle);
    Dvar_ClearModified(gamedvr_screenshottitle);
    Dvar_ClearModified(gamedvr_screenshotcomment);
    GameDVR_SetScreenshotMetadata(gamedvr_screenshotgametitle->current.string, gamedvr_screenshottitle->current.string, gamedvr_screenshotcomment->current.string);
  }
  if ( gamedvr_active->modified && !gamedvr_active->current.integer )
  {
    Dvar_ClearModified(gamedvr_active);
    GameDVR_ProhibitRecording(1);
  }
  if ( screenshots_active->modified && !screenshots_active->current.integer )
  {
    Dvar_ClearModified(screenshots_active);
    GameDVR_ProhibitScreenshots(1);
  }
}

/*
==============
GameDVR_Init
==============
*/
void GameDVR_Init(void)
{
  GameDVR_InitPlatform();
  Dvar_BeginPermanentRegistration();
  gamedvr_prohibitscreenshot = Dvar_RegisterBool("LPROROKNMR", 0, 0, "Allow user to capture screenshots");
  gamedvr_screenshotgametitle = Dvar_RegisterString("LQTQKOQNOQ", "GAMEDVR/SCREENSHOT_DEFAULT_GAME_TITLE", 0, "Game name embedded in user screenshot");
  gamedvr_screenshottitle = Dvar_RegisterString("LLMKOSOTKS", "GAMEDVR/SCREENSHOT_DEFAULT_TITLE", 0, "Photo title embedded in user screenshot");
  gamedvr_screenshotcomment = Dvar_RegisterString("MMKPMTPPTP", "GAMEDVR/SCREENSHOT_DEFAULT_COMMENT", 0, "Comment embedded in user screenshot");
  gamedvr_prohibitrecording = Dvar_RegisterBool("LQPMQRMSOM", 0, 0, "Allow user to capture video");
  gamedvr_videotitle = Dvar_RegisterString("NPPQNOONPR", "GAMEDVR/VIDEO_DEFAULT_TITLE", 0, "Subtitle for recorded video");
  gamedvr_videodescription = Dvar_RegisterString("NORMLMNLSN", "GAMEDVR/VIDEO_DEFAULT_DESCRIPTION", 0, "Activate and deactivate video recording");
  gamedvr_videocomment = Dvar_RegisterString("MOKMMSPLNS", "GAMEDVR/VIDEO_DEFAULT_COMMENT", 0, "Activate and deactivate video recording");
  gamedvr_videocopyright = Dvar_RegisterString("NTPSPTLMMO", "GAMEDVR/VIDEO_DEFAULT_COPYRIGHT", 0, "Activate and deactivate video recording");
  Dvar_EndPermanentRegistration();
  Dvar_SetModified(gamedvr_videotitle);
  Dvar_SetModified(gamedvr_videodescription);
  Dvar_SetModified(gamedvr_videocomment);
  Dvar_SetModified(gamedvr_videocopyright);
  Dvar_SetModified(gamedvr_screenshotgametitle);
  Dvar_SetModified(gamedvr_screenshottitle);
  Dvar_SetModified(gamedvr_screenshotcomment);
  Cmd_AddCommandInternal("gamedvr_startrecording", GameDVR_StartRecording_f, &stru_14BA637D0);
  Cmd_AddCommandInternal("gamedvr_stoprecording", GameDVR_StopRecording_f, &stru_14BA63800);
}

/*
==============
GameDVR_Shutdown
==============
*/
void GameDVR_Shutdown(void)
{
  Cmd_RemoveCommand("gamedvr_startrecording");
  Cmd_RemoveCommand("gamedvr_stoprecording");
  GameDVR_ShutdownPlatform();
}

/*
==============
GameDVR_StartRecording_f
==============
*/

void __fastcall GameDVR_StartRecording_f()
{
  GameDVR_StartRecording();
}

/*
==============
GameDVR_StopRecording_f
==============
*/
void GameDVR_StopRecording_f()
{
  bool v0; 
  const char *v1; 

  v0 = 0;
  if ( Cmd_Argc() > 1 )
  {
    v1 = Cmd_Argv(1);
    v0 = I_atoi64(v1) != 0;
  }
  GameDVR_StopRecording(v0);
}

