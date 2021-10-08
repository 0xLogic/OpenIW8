/*
==============
R_RegisterCmds
==============
*/

void R_RegisterCmds(void)
{
  ?R_RegisterCmds@@YAXXZ();
}

/*
==============
R_UnregisterCmds
==============
*/

void R_UnregisterCmds(void)
{
  ?R_UnregisterCmds@@YAXXZ();
}

/*
==============
R_Cmd_Screenshot
==============
*/
void R_Cmd_Screenshot()
{
  R_ScreenshotCommand(TGA, LINEAR);
}

/*
==============
R_Cmd_ScreenshotJpeg
==============
*/
void R_Cmd_ScreenshotJpeg()
{
  R_ScreenshotCommand(JPG, LINEAR);
}

/*
==============
R_Cmd_ScreenshotExr
==============
*/
void R_Cmd_ScreenshotExr()
{
  R_ScreenshotCommand(EXR, EASE_IN_OUT_QUAD);
}

/*
==============
R_Cmd_ScreenshotCC
==============
*/
void R_Cmd_ScreenshotCC()
{
  R_ScreenshotCommand(EXR, EASE_IN_CUBIC);
}

/*
==============
R_Cmd_PIXCapture
==============
*/
void R_Cmd_PIXCapture()
{
  g_dx.immediateCommandQueue.commandQueue->m_pFunction[6].QueryInterface(g_dx.immediateCommandQueue.commandQueue, NULL, (void **)L"t:\\capture.pix3");
  Sys_Print("PIX Capture Triggered succesfully\n");
}

/*
==============
R_RegisterCmds
==============
*/
void R_RegisterCmds(void)
{
  Cmd_AddClientCommandList(S_RENDER_CMD, 0xAu);
}

/*
==============
R_UnregisterCmds
==============
*/
void R_UnregisterCmds(void)
{
  Cmd_RemoveClientCommandList(S_RENDER_CMD, 0xAu);
}

