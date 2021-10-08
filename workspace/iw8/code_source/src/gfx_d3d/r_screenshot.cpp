/*
==============
R_Screenshot_CreateDeferredRt
==============
*/

R_RT_ColorHandle *__fastcall R_Screenshot_CreateDeferredRt(R_RT_ColorHandle *result, GfxScreenshotPipelineStage pipelineStage, GfxRenderTargetFormat format, unsigned __int16 index, unsigned int width, unsigned int height)
{
  return ?R_Screenshot_CreateDeferredRt@@YA?AVR_RT_ColorHandle@@W4GfxScreenshotPipelineStage@@W4GfxRenderTargetFormat@@GII@Z(result, pipelineStage, format, index, width, height);
}

/*
==============
R_Screenshot_GetInterleavedInfo
==============
*/

vec2_t __fastcall R_Screenshot_GetInterleavedInfo()
{
  return ?R_Screenshot_GetInterleavedInfo@@YA?ATvec2_t@@XZ();
}

/*
==============
R_TakeScreenshot
==============
*/

void __fastcall R_TakeScreenshot(const GfxScreenshotDesc *desc, R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  ?R_TakeScreenshot@@YAXPEBUGfxScreenshotDesc@@VR_RT_ColorHandle@@HHHH@Z(desc, colorRt, x, y, width, height);
}

/*
==============
R_Screenshot_ConsumeDeferredRequest
==============
*/

unsigned __int16 __fastcall R_Screenshot_ConsumeDeferredRequest()
{
  return ?R_Screenshot_ConsumeDeferredRequest@@YAGXZ();
}

/*
==============
R_Screenshot_DestroyDeferredQueue
==============
*/

void R_Screenshot_DestroyDeferredQueue(void)
{
  ?R_Screenshot_DestroyDeferredQueue@@YAXXZ();
}

/*
==============
R_Screenshot_ClearPending
==============
*/

void R_Screenshot_ClearPending(void)
{
  ?R_Screenshot_ClearPending@@YAXXZ();
}

/*
==============
RB_TakeScreenshot
==============
*/

void __fastcall RB_TakeScreenshot(R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  ?RB_TakeScreenshot@@YAXVR_RT_ColorHandle@@HHHH@Z(colorRt, x, y, width, height);
}

/*
==============
R_Screenshot_InterleavedMode
==============
*/

bool __fastcall R_Screenshot_InterleavedMode()
{
  return ?R_Screenshot_InterleavedMode@@YA_NXZ();
}

/*
==============
RB_TakeScreenshot
==============
*/

void __fastcall RB_TakeScreenshot(const GfxScreenshotDesc *desc, R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  ?RB_TakeScreenshot@@YAXPEBUGfxScreenshotDesc@@VR_RT_ColorHandle@@HHHH@Z(desc, colorRt, x, y, width, height);
}

/*
==============
R_Screenshot_GetDeferredScreenshotEntryFromIndex
==============
*/

R_Screenshot_DeferredQueueEntry *__fastcall R_Screenshot_GetDeferredScreenshotEntryFromIndex(const unsigned __int16 index)
{
  return ?R_Screenshot_GetDeferredScreenshotEntryFromIndex@@YAPEAUR_Screenshot_DeferredQueueEntry@@G@Z(index);
}

/*
==============
R_ScreenshotCommand
==============
*/

void __fastcall R_ScreenshotCommand(GfxScreenshotFormat fileFormat, GfxScreenshotPipelineStage pipelineStage)
{
  ?R_ScreenshotCommand@@YAXW4GfxScreenshotFormat@@W4GfxScreenshotPipelineStage@@@Z(fileFormat, pipelineStage);
}

/*
==============
R_Screenshot_GetDeferredScreenshotPipelineStage
==============
*/

GfxScreenshotPipelineStage __fastcall R_Screenshot_GetDeferredScreenshotPipelineStage(unsigned __int16 index)
{
  return ?R_Screenshot_GetDeferredScreenshotPipelineStage@@YA?AW4GfxScreenshotPipelineStage@@G@Z(index);
}

/*
==============
R_Screenshot_DeferredQueueLockSentry::~R_Screenshot_DeferredQueueLockSentry
==============
*/

void __fastcall R_Screenshot_DeferredQueueLockSentry::~R_Screenshot_DeferredQueueLockSentry(R_Screenshot_DeferredQueueLockSentry *this)
{
  ??1R_Screenshot_DeferredQueueLockSentry@@QEAA@XZ(this);
}

/*
==============
R_Screenshot_GetDeferredScreenshotIndexFromEntry
==============
*/

unsigned __int16 __fastcall R_Screenshot_GetDeferredScreenshotIndexFromEntry(R_Screenshot_DeferredQueueEntry *entry)
{
  return ?R_Screenshot_GetDeferredScreenshotIndexFromEntry@@YAGPEAUR_Screenshot_DeferredQueueEntry@@@Z(entry);
}

/*
==============
R_Screenshot_CreateDeferredQueue
==============
*/

void R_Screenshot_CreateDeferredQueue(void)
{
  ?R_Screenshot_CreateDeferredQueue@@YAXXZ();
}

/*
==============
R_Screenshot_UpdatePending
==============
*/

void R_Screenshot_UpdatePending(void)
{
  ?R_Screenshot_UpdatePending@@YAXXZ();
}

/*
==============
R_Screenshot_RequestDeferredScreenshot
==============
*/

void __fastcall R_Screenshot_RequestDeferredScreenshot(const GfxScreenshotRequest *request)
{
  ?R_Screenshot_RequestDeferredScreenshot@@YAXPEBUGfxScreenshotRequest@@@Z(request);
}

/*
==============
R_Screenshot_InProcess
==============
*/

bool __fastcall R_Screenshot_InProcess()
{
  return ?R_Screenshot_InProcess@@YA_NXZ();
}

/*
==============
R_Screenshot_DeferredQueueLockSentry::~R_Screenshot_DeferredQueueLockSentry
==============
*/
void R_Screenshot_DeferredQueueLockSentry::~R_Screenshot_DeferredQueueLockSentry(R_Screenshot_DeferredQueueLockSentry *this)
{
  Sys_LeaveCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
}

/*
==============
RB_TakeScreenshot
==============
*/
void RB_TakeScreenshot(const GfxScreenshotDesc *desc, R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  R_RT_ColorHandle v7; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
  }
  R_TakeScreenshot(desc, &v7, x, y, width, height);
}

/*
==============
RB_TakeScreenshot
==============
*/
void RB_TakeScreenshot(R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  R_RT_ColorHandle v6; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
  }
  R_TakeScreenshot(&s_screenshotRequest.m_desc, &v6, x, y, width, height);
}

/*
==============
R_ScreenshotCommand
==============
*/
void R_ScreenshotCommand(GfxScreenshotFormat fileFormat, int pipelineStage)
{
  bool m_clut; 
  int v5; 
  const char *v6; 
  GfxScreenshotColorimetry::Transfer v7; 
  const char *v8; 
  __int32 v9; 
  __int32 v10; 
  const char *v11; 
  unsigned int i; 
  ScreenshotCommandArguments options; 

  Com_Printf(8, "ScreenShot: Before R_SyncRenderThread\n");
  R_SyncRenderThread();
  Com_Printf(8, "ScreenShot: After R_SyncRenderThread\n");
  if ( R_ScreenshotCommand_ParseArgs(&options) )
  {
    if ( options.m_type == LEVELSHOT )
    {
      R_LevelShot();
      return;
    }
    if ( options.m_type == SAVEGAME )
    {
      R_SaveGameShot(options.m_name);
      return;
    }
    if ( fileFormat )
    {
      m_clut = options.m_clut;
    }
    else
    {
      Com_Printf(0, "JPG format does not support CLUT option\n");
      m_clut = 0;
    }
    v5 = 2;
    if ( !pipelineStage && m_clut )
      pipelineStage = 2;
    if ( options.m_exrTmp )
    {
      fileFormat = EXRTMP;
      pipelineStage = 4;
    }
    s_screenshotRequest.m_desc.m_useFS = options.m_useFS;
    v6 = NULL;
    s_screenshotRequest.m_desc.m_silent = options.m_silent;
    s_screenshotRequest.m_desc.m_exrTmp = options.m_exrTmp;
    *(_DWORD *)s_screenshotRequest.m_pipelineStage = pipelineStage;
    s_screenshotRequest.m_desc.m_fileFormat = fileFormat;
    s_screenshotRequest.m_desc.m_addClut = m_clut;
    s_screenshotRequest.m_desc.m_clutInputColorimetry = (GfxScreenshotColorimetry)258;
    s_screenshotRequest.m_desc.m_colorimetry = (GfxScreenshotColorimetry)257;
    if ( (unsigned int)(fileFormat - 2) <= 1 )
    {
      v7 = EASE_IN_QUAD;
      v6 = "hdr_scene";
      if ( pipelineStage == 3 )
        v7 = LINEAR;
      if ( pipelineStage != 3 )
        v6 = NULL;
      s_screenshotRequest.m_desc.m_colorimetry.transfer = v7;
      if ( pipelineStage == 4 )
      {
        s_screenshotRequest.m_desc.m_colorimetry.primaries[0] = 2;
        s_screenshotRequest.m_desc.m_clutInputColorimetry.transfer = EASE_OUT_QUAD;
        v6 = "hdr_exposed_clut";
        if ( !m_clut )
          v6 = "hdr_exposed";
        s_screenshotRequest.m_desc.m_colorimetry.transfer = options.m_transfer;
        s_screenshotRequest.m_desc.m_clutInputColorimetry.primaries[0] = options.m_clutInputPrimaries[0];
      }
    }
    if ( m_clut )
    {
      v8 = (char *)&queryFormat.fmt + 3;
      if ( pipelineStage != 4 )
        v8 = "_clut32";
    }
    else
    {
      v8 = NULL;
    }
    if ( fileFormat )
    {
      v9 = fileFormat - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v11 = "exrtmp";
          }
          else
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 569, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled case") )
              __debugbreak();
            v11 = NULL;
          }
        }
        else
        {
          v11 = "exr";
        }
      }
      else
      {
        v11 = "tga";
      }
    }
    else
    {
      v11 = "jpg";
    }
    if ( options.m_name )
    {
      Com_sprintf(s_screenshotRequest.m_desc.m_filename, 0x100ui64, "screenshots/%s.%s", options.m_name, v11);
    }
    else if ( !R_Screenshot_ScanForFreeFilename(v6, v8, v11, (char (*)[256])s_screenshotRequest.m_desc.m_filename) )
    {
      Com_Printf(8, "ScreenShot: Couldn't create a file\n");
      return;
    }
    __asm
    {
      vmovss  xmm0, [rsp+68h+options.m_viewsCount]
      vmovss  xmm1, [rsp+68h+options.m_viewID]
      vmovss  cs:?s_screenshotInfo@@3UScreenshotGlobalInfo@@A.screenshotViews, xmm0; ScreenshotGlobalInfo s_screenshotInfo
      vmovss  cs:?s_screenshotInfo@@3UScreenshotGlobalInfo@@A.screenshotViewID, xmm1; ScreenshotGlobalInfo s_screenshotInfo
    }
    Com_Printf(8, "ScreenShot: File '%s'\n", s_screenshotRequest.m_desc.m_filename);
    if ( options.m_hires )
    {
      if ( options.m_hires == 1 )
      {
        s_screenshotInfo.screenshotStage = 1;
        if ( s_screenshotRequest.m_desc.m_exrTmp )
          v5 = 4;
        *(_DWORD *)s_screenshotRequest.m_pipelineStage = v5;
        R_Screenshot_RequestDeferredScreenshot(&s_screenshotRequest);
        for ( i = 0; i < s_R_Screenshot_saveFrameDelay; ++i )
          CL_Screen_Update();
        CL_Screen_Update();
        R_SyncRenderThread();
        s_screenshotInfo.screenshotStage = 0;
      }
    }
    else if ( pipelineStage )
    {
      R_Screenshot_RequestDeferredScreenshot(&s_screenshotRequest);
    }
    else
    {
      R_RT_GetGlobalColor((R_RT_ColorHandle *)&options, R_RENDERTARGET_DISPLAY_BUFFER);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+68h+options.m_type]
        vmovups ymmword ptr [rsp+68h+options.m_type], ymm0
      }
      R_TakeScreenshot(&s_screenshotRequest.m_desc, (R_RT_ColorHandle *)&options, 0, 0, -1, -1);
    }
  }
}

/*
==============
R_ScreenshotCommand_ParseArgs
==============
*/
char R_ScreenshotCommand_ParseArgs(ScreenshotCommandArguments *options)
{
  int v3; 
  int v4; 
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  const char *v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  const char *v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 

  _RSI = options;
  if ( !options && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 398, ASSERT_TYPE_ASSERT, "(options)", (const char *)&queryFormat, "options") )
    __debugbreak();
  *(_QWORD *)&_RSI->m_type = 0i64;
  *(_QWORD *)&_RSI->m_viewsCount = 0i64;
  *(_DWORD *)&_RSI->m_silent = 16908288;
  *(_WORD *)&_RSI->m_exrTmp = 0;
  _RSI->m_name = NULL;
  v3 = 1;
  v4 = Cmd_Argc();
  if ( v4 <= 1 )
  {
LABEL_18:
    if ( _RSI->m_type != SAVEGAME || _RSI->m_name )
      return 1;
    Com_Printf(0, "screenshot savegame option must specify a name\n");
    return 0;
  }
LABEL_5:
  v5 = "silent";
  v6 = Cmd_Argv(v3);
  v7 = 0x7FFFFFFFi64;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v8 = (unsigned __int8)v5[v6 - "silent"];
    v9 = v7;
    v10 = *(unsigned __int8 *)v5++;
    --v7;
    if ( !v9 )
    {
LABEL_16:
      _RSI->m_silent = 1;
      goto LABEL_17;
    }
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
        break;
    }
    if ( !v8 )
      goto LABEL_16;
  }
  v14 = "levelshot";
  v15 = 0x7FFFFFFFi64;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v16 = (unsigned __int8)v14[v6 - "levelshot"];
    v17 = v15;
    v18 = *(unsigned __int8 *)v14++;
    --v15;
    if ( !v17 )
    {
LABEL_32:
      if ( _RSI->m_type )
LABEL_72:
        Com_Printf(0, "Invalid arg \"%s\", Screenshot type already set\n", v6);
      else
        _RSI->m_type = LEVELSHOT;
LABEL_17:
      if ( ++v3 >= v4 )
        goto LABEL_18;
      goto LABEL_5;
    }
    if ( v16 != v18 )
    {
      v19 = v16 + 32;
      if ( (unsigned int)(v16 - 65) > 0x19 )
        v19 = v16;
      v16 = v19;
      v20 = v18 + 32;
      if ( (unsigned int)(v18 - 65) > 0x19 )
        v20 = v18;
      if ( v16 != v20 )
        break;
    }
    if ( !v16 )
      goto LABEL_32;
  }
  v21 = "savegame";
  v22 = 0x7FFFFFFFi64;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v23 = (unsigned __int8)v21[v6 - "savegame"];
    v24 = v22;
    v25 = *(unsigned __int8 *)v21++;
    --v22;
    if ( !v24 )
    {
LABEL_45:
      if ( _RSI->m_type )
        goto LABEL_72;
      _RSI->m_type = SAVEGAME;
      goto LABEL_17;
    }
    if ( v23 != v25 )
    {
      v26 = v23 + 32;
      if ( (unsigned int)(v23 - 65) > 0x19 )
        v26 = v23;
      v23 = v26;
      v27 = v25 + 32;
      if ( (unsigned int)(v25 - 65) > 0x19 )
        v27 = v25;
      if ( v23 != v27 )
        break;
    }
    if ( !v23 )
      goto LABEL_45;
  }
  if ( !I_stricmp(v6, "noFS") )
  {
    _RSI->m_useFS = 0;
    goto LABEL_17;
  }
  if ( !I_stricmp(v6, "pq") )
  {
    _RSI->m_transfer = EASE_OUT_QUAD;
    goto LABEL_17;
  }
  if ( !I_stricmp(v6, "bt709") )
  {
    _RSI->m_clutInputPrimaries[0] = 1;
    goto LABEL_17;
  }
  if ( !I_stricmp(v6, "bt2020") )
  {
    _RSI->m_clutInputPrimaries[0] = 2;
    goto LABEL_17;
  }
  if ( !I_stricmp(v6, "exrtmp") )
  {
    _RSI->m_exrTmp = 1;
    goto LABEL_17;
  }
  if ( !I_stricmp(v6, "clut") )
  {
    if ( vidConfig.displayWidth >= 0x400 )
      _RSI->m_clut = 1;
    else
      Com_Printf(0, "Can't add clut if horizontal resolution is less than %dpx.  Increase resolution.\n", 1024i64);
    goto LABEL_17;
  }
  if ( !I_stricmp(v6, "hires") )
  {
    if ( v4 > ++v3 )
    {
      _RSI->m_hires = Cmd_ArgInt(v3);
      goto LABEL_17;
    }
LABEL_73:
    Com_Printf(0, "subpixelX argument missing\n");
    return 0;
  }
  if ( !I_stricmp(v6, "views") )
  {
    if ( v4 > ++v3 )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(v3);
      __asm { vmovss  dword ptr [rsi+8], xmm0 }
      goto LABEL_17;
    }
    goto LABEL_73;
  }
  if ( !I_stricmp(v6, "viewID") )
  {
    if ( v4 > ++v3 )
    {
      *(double *)&_XMM0 = Cmd_ArgFloat(v3);
      __asm { vmovss  dword ptr [rsi+0Ch], xmm0 }
      goto LABEL_17;
    }
    goto LABEL_73;
  }
  if ( !_RSI->m_name )
  {
    _RSI->m_name = v6;
    goto LABEL_17;
  }
  Com_Printf(0, "Unexpected screenshot argument '%s'\n", v6);
  return 0;
}

/*
==============
R_Screenshot_ClearPending
==============
*/
void R_Screenshot_ClearPending(void)
{
  int size; 
  unsigned int v1; 
  R_RT_Handle v5; 

  if ( !s_R_Screenshot.m_deferredQueueCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 178, ASSERT_TYPE_ASSERT, "(s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "s_R_Screenshot.m_deferredQueueCreated", -2i64) )
    __debugbreak();
  if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 38, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( s_R_Screenshot.m_deferredQueue.size )
  {
    Sys_EnterCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
    if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_R_Screenshot.m_deferredQueue.size;
    v1 = 0;
    if ( s_R_Screenshot.m_deferredQueue.size )
    {
      _R12 = &s_R_Screenshot.m_deferredQueue.entries[0].m_colorRt;
      do
      {
        if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( v1 >= s_R_Screenshot.m_deferredQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
          __debugbreak();
        _RCX = 312i64 * (((_BYTE)v1 + LOBYTE(s_R_Screenshot.m_deferredQueue.start)) & 3);
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+r12]
          vmovups ymmword ptr [rsp+88h+var_48.m_surfaceID], ymm0
        }
        R_RT_DestroyInternal(&v5);
        ++v1;
      }
      while ( v1 != size );
    }
    s_R_Screenshot.m_deferredQueue.cleared = 1;
    *(_DWORD *)&s_R_Screenshot.m_deferredQueue.start = 0;
    Sys_LeaveCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
  }
}

/*
==============
R_Screenshot_ConsumeDeferredRequest
==============
*/
__int64 R_Screenshot_ConsumeDeferredRequest()
{
  unsigned __int16 v0; 
  int size; 
  unsigned int v2; 
  R_Screenshot_DeferredQueueEntry *v3; 
  __int64 v4; 
  unsigned __int64 v5; 

  v0 = -1;
  if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 38, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( s_R_Screenshot.m_deferredQueue.size )
  {
    Sys_EnterCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
    if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_R_Screenshot.m_deferredQueue.size;
    v2 = 0;
    if ( s_R_Screenshot.m_deferredQueue.size )
    {
      while ( 1 )
      {
        if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( v2 >= s_R_Screenshot.m_deferredQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
          __debugbreak();
        v3 = &s_R_Screenshot.m_deferredQueue.entries[((_BYTE)v2 + LOBYTE(s_R_Screenshot.m_deferredQueue.start)) & 3];
        if ( v3->m_age == 0xFF )
          break;
        if ( ++v2 == size )
          goto LABEL_26;
      }
      v3->m_age = 0;
      if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 34, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      v4 = (char *)v3 - (char *)&s_R_Screenshot - 8;
      v5 = v4 / 312;
      if ( (unsigned __int64)(v4 / 312) <= 3 )
      {
        if ( v5 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,__int64>(__int64)", "unsigned", (unsigned __int16)v5, "signed", v4 / 312) )
          __debugbreak();
        v0 = v4 / 312;
      }
    }
LABEL_26:
    Sys_LeaveCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
  }
  return v0;
}

/*
==============
R_Screenshot_CreateDeferredQueue
==============
*/
void R_Screenshot_CreateDeferredQueue(void)
{
  if ( s_R_Screenshot.m_deferredQueueCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 64, ASSERT_TYPE_ASSERT, "(!s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "!s_R_Screenshot.m_deferredQueueCreated") )
    __debugbreak();
  s_R_Screenshot.m_deferredQueueCreated = 1;
  *(_DWORD *)&s_R_Screenshot.m_deferredQueue.start = 0;
  s_R_Screenshot.m_deferredQueue.cleared = 1;
}

/*
==============
R_Screenshot_CreateDeferredRt
==============
*/
R_RT_ColorHandle *R_Screenshot_CreateDeferredRt(R_RT_ColorHandle *result, int pipelineStage, GfxRenderTargetFormat format, unsigned __int16 index, unsigned int width, unsigned int height)
{
  R_Screenshot_DeferredQueueEntry *DeferredScreenshotEntryFromIndex; 
  R_RT_Handle resulta; 
  R_RT_Handle v19; 

  _RBX = result;
  if ( !s_R_Screenshot.m_deferredQueueCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 210, ASSERT_TYPE_ASSERT, "(s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "s_R_Screenshot.m_deferredQueueCreated") )
    __debugbreak();
  if ( (!width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 211, ASSERT_TYPE_ASSERT, "(width > 0 && height > 0)", (const char *)&queryFormat, "width > 0 && height > 0") )
    __debugbreak();
  _RBX->m_surfaceID = 0;
  _RBX->m_tracking.m_allocCounter = 0;
  _RBX->m_tracking.m_name = NULL;
  _RBX->m_tracking.m_location = NULL;
  Sys_EnterCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
  DeferredScreenshotEntryFromIndex = R_Screenshot_GetDeferredScreenshotEntryFromIndex(index);
  _RDI = DeferredScreenshotEntryFromIndex;
  if ( DeferredScreenshotEntryFromIndex && pipelineStage == *(_DWORD *)DeferredScreenshotEntryFromIndex->m_screenshotInfo.m_pipelineStage )
  {
    *(_QWORD *)&v19.m_surfaceID = "Screenshot Temp 0";
    *(_QWORD *)&v19.m_tracking.m_allocCounter = "Screenshot Temp 1";
    v19.m_tracking.m_name = "Screenshot Temp 2";
    v19.m_tracking.m_location = "Screenshot Temp 3";
    _RAX = R_RT_CreateInternal(&resulta, width, height, width, height, 1u, 1u, 1u, g_R_RT_renderTargetFmts[(unsigned __int8)format], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_RENDER_TARGET, *((const char **)&v19.m_surfaceID + index), 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp(235)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+158h+var_A8], ymm0
      vmovups ymmword ptr [rsp+158h+var_68.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v19);
      if ( (R_RT_Handle::GetSurface(&v19)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rsp+158h+var_68.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, [rsp+158h+var_A8] }
      }
    }
    __asm
    {
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymmword ptr [rdi+118h], ymm0
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
  return _RBX;
}

/*
==============
R_Screenshot_DestroyDeferredQueue
==============
*/
void R_Screenshot_DestroyDeferredQueue(void)
{
  int size; 
  unsigned int v1; 
  R_RT_Handle v5; 

  if ( !s_R_Screenshot.m_deferredQueueCreated )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 72, ASSERT_TYPE_ASSERT, "(s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "s_R_Screenshot.m_deferredQueueCreated", -2i64) )
      __debugbreak();
    if ( !s_R_Screenshot.m_deferredQueueCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 178, ASSERT_TYPE_ASSERT, "(s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "s_R_Screenshot.m_deferredQueueCreated") )
      __debugbreak();
  }
  if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 38, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( s_R_Screenshot.m_deferredQueue.size )
  {
    Sys_EnterCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
    if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_R_Screenshot.m_deferredQueue.size;
    v1 = 0;
    if ( s_R_Screenshot.m_deferredQueue.size )
    {
      _R12 = &s_R_Screenshot.m_deferredQueue.entries[0].m_colorRt;
      do
      {
        if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( v1 >= s_R_Screenshot.m_deferredQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
          __debugbreak();
        _RCX = 312i64 * (((_BYTE)v1 + LOBYTE(s_R_Screenshot.m_deferredQueue.start)) & 3);
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+r12]
          vmovups ymmword ptr [rsp+88h+var_48.m_surfaceID], ymm0
        }
        R_RT_DestroyInternal(&v5);
        ++v1;
      }
      while ( v1 != size );
    }
    s_R_Screenshot.m_deferredQueue.cleared = 1;
    *(_DWORD *)&s_R_Screenshot.m_deferredQueue.start = 0;
    Sys_LeaveCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
  }
  s_R_Screenshot.m_deferredQueueCreated = 0;
}

/*
==============
R_Screenshot_GetDeferredScreenshotEntryFromIndex
==============
*/
R_Screenshot_DeferredQueueEntry *R_Screenshot_GetDeferredScreenshotEntryFromIndex(const unsigned __int16 index)
{
  if ( !s_R_Screenshot.m_deferredQueueCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 81, ASSERT_TYPE_ASSERT, "(s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "s_R_Screenshot.m_deferredQueueCreated") )
    __debugbreak();
  if ( index >= 4u )
    return 0i64;
  if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 34, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  return &s_R_Screenshot.m_deferredQueue.entries[index];
}

/*
==============
R_Screenshot_GetDeferredScreenshotIndexFromEntry
==============
*/
__int64 R_Screenshot_GetDeferredScreenshotIndexFromEntry(R_Screenshot_DeferredQueueEntry *entry)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 result; 

  if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 34, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  v2 = (__int64)((unsigned __int128)(((char *)entry - (char *)&s_R_Screenshot - 8) * (__int128)0x6906906906906907i64) >> 64) >> 7;
  v3 = (v2 >> 63) + v2;
  result = 0xFFFFi64;
  if ( v3 <= 3 )
    return (unsigned __int16)v3;
  return result;
}

/*
==============
R_Screenshot_GetDeferredScreenshotPipelineStage
==============
*/
R_Screenshot_DeferredQueueEntry *R_Screenshot_GetDeferredScreenshotPipelineStage(unsigned __int16 index)
{
  R_Screenshot_DeferredQueueEntry *result; 

  result = R_Screenshot_GetDeferredScreenshotEntryFromIndex(index);
  if ( result )
    return (R_Screenshot_DeferredQueueEntry *)*(unsigned int *)result->m_screenshotInfo.m_pipelineStage;
  return result;
}

/*
==============
R_Screenshot_GetInterleavedInfo
==============
*/

vec2_t __fastcall R_Screenshot_GetInterleavedInfo(__int64 a1, double _XMM1_8)
{
  char v2; 
  __int64 v7; 

  _RAX = r_screenShotPixelOffset;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm1, dword ptr [rax+30h]
  }
  if ( v2 )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:?s_screenshotInfo@@3UScreenshotGlobalInfo@@A.screenshotViews; ScreenshotGlobalInfo s_screenshotInfo
      vmovss  xmm1, cs:?s_screenshotInfo@@3UScreenshotGlobalInfo@@A.screenshotViewID; ScreenshotGlobalInfo s_screenshotInfo
    }
  }
  __asm
  {
    vmovss  dword ptr [rsp+18h+var_18], xmm0
    vmovss  dword ptr [rsp+18h+var_18+4], xmm1
  }
  return (vec2_t)v7;
}

/*
==============
R_Screenshot_InProcess
==============
*/
bool R_Screenshot_InProcess()
{
  return s_screenshotInfo.screenshotStage & 1;
}

/*
==============
R_Screenshot_InterleavedMode
==============
*/

bool __fastcall R_Screenshot_InterleavedMode(double _XMM0_8)
{
  char v1; 

  _RAX = r_screenShotPixelOffset;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+30h]
  }
  return !v1;
}

/*
==============
R_Screenshot_RequestDeferredScreenshot
==============
*/
void R_Screenshot_RequestDeferredScreenshot(const GfxScreenshotRequest *request)
{
  unsigned __int16 size; 
  __int64 v8; 
  __m256i v18; 

  _RBX = request;
  if ( !s_R_Screenshot.m_deferredQueueCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 108, ASSERT_TYPE_ASSERT, "(s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "s_R_Screenshot.m_deferredQueueCreated", -2i64) )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
  if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 39, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( s_R_Screenshot.m_deferredQueue.size == 4 )
  {
    Com_PrintWarning(8, "ScreenShot: Too many queued screenshots (limit=%d)\n", 4i64);
  }
  else
  {
    if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 113, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_R_Screenshot.m_deferredQueue.size;
    if ( s_R_Screenshot.m_deferredQueue.size >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 115, ASSERT_TYPE_ASSERT, "(curSize < s_capacity)", (const char *)&queryFormat, "curSize < s_capacity") )
      __debugbreak();
    s_R_Screenshot.m_deferredQueue.size = size + 1;
    if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 91, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( !s_R_Screenshot.m_deferredQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 92, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
      __debugbreak();
    _RAX = &s_R_Screenshot.m_deferredQueue.entries[(LOBYTE(s_R_Screenshot.m_deferredQueue.start) + LOBYTE(s_R_Screenshot.m_deferredQueue.size) - 1) & 3];
    _RAX->m_age = -1;
    v18.m256i_i16[0] = 0;
    v18.m256i_i32[2] = 0;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+68h+var_30+10h], xmm0
      vmovups ymm1, ymmword ptr [rsp+68h+var_30]
      vmovups ymmword ptr [rax+118h], ymm1
    }
    _RAX = &_RAX->m_screenshotInfo;
    v8 = 2i64;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups xmmword ptr [rax], xmm0
        vmovups xmm1, xmmword ptr [rbx+10h]
        vmovups xmmword ptr [rax+10h], xmm1
        vmovups xmm0, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rax+20h], xmm0
        vmovups xmm1, xmmword ptr [rbx+30h]
        vmovups xmmword ptr [rax+30h], xmm1
        vmovups xmm0, xmmword ptr [rbx+40h]
        vmovups xmmword ptr [rax+40h], xmm0
        vmovups xmm1, xmmword ptr [rbx+50h]
        vmovups xmmword ptr [rax+50h], xmm1
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rax+60h], xmm0
      }
      _RAX = (GfxScreenshotRequest *)((char *)_RAX + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      _RBX = (const GfxScreenshotRequest *)((char *)_RBX + 128);
      --v8;
    }
    while ( v8 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups xmmword ptr [rax], xmm0
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
}

/*
==============
R_Screenshot_UpdatePending
==============
*/
void R_Screenshot_UpdatePending(void)
{
  R_Screenshot_DeferredQueueEntry *v0; 
  __int64 v1; 
  R_Screenshot_DeferredQueueEntry *v2; 
  int size; 
  unsigned int v4; 
  R_Screenshot_DeferredQueueEntry *v5; 
  __int64 v8; 
  unsigned __int16 m_surfaceID; 
  int height; 
  int width; 
  R_RT_Handle v22; 
  R_Screenshot_DeferredQueueEntry v23; 

  if ( !s_R_Screenshot.m_deferredQueueCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 128, ASSERT_TYPE_ASSERT, "(s_R_Screenshot.m_deferredQueueCreated)", (const char *)&queryFormat, "s_R_Screenshot.m_deferredQueueCreated", -2i64) )
    __debugbreak();
  if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 38, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
    __debugbreak();
  if ( s_R_Screenshot.m_deferredQueue.size )
  {
    v0 = &v23;
    v1 = 4i64;
    do
    {
      R_Screenshot_DeferredQueueEntry::R_Screenshot_DeferredQueueEntry(v0++);
      --v1;
    }
    while ( v1 );
    v2 = &v23;
    Sys_EnterCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
    if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 36, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    size = s_R_Screenshot.m_deferredQueue.size;
    v4 = 0;
    if ( s_R_Screenshot.m_deferredQueue.size )
    {
      do
      {
        if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 46, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
          __debugbreak();
        if ( v4 >= s_R_Screenshot.m_deferredQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 47, ASSERT_TYPE_ASSERT, "(index < this->size)", (const char *)&queryFormat, "index < this->size") )
          __debugbreak();
        v5 = &s_R_Screenshot.m_deferredQueue.entries[((_BYTE)v4 + LOBYTE(s_R_Screenshot.m_deferredQueue.start)) & 3];
        if ( v5->m_age != 0xFF )
          ++v5->m_age;
        ++v4;
      }
      while ( v4 != size );
    }
    while ( 1 )
    {
      if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 38, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_R_Screenshot.m_deferredQueue.size )
        break;
      if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 81, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_R_Screenshot.m_deferredQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 82, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
      _RAX = &s_R_Screenshot.m_deferredQueue.entries[s_R_Screenshot.m_deferredQueue.start];
      if ( _RAX->m_age == 0xFF || _RAX->m_age < s_R_Screenshot_saveFrameDelay )
        break;
      _RDX = v2;
      v8 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rdx], ymm0
          vmovups ymm0, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rdx+20h], ymm0
          vmovups ymm0, ymmword ptr [rax+40h]
          vmovups ymmword ptr [rdx+40h], ymm0
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rdx+60h], xmm0
        }
        _RDX = (R_Screenshot_DeferredQueueEntry *)((char *)_RDX + 128);
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rdx-10h], xmm1
        }
        _RAX = (R_Screenshot_DeferredQueueEntry *)((char *)_RAX + 128);
        --v8;
      }
      while ( v8 );
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rdx], ymm0
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rdx+20h], xmm0
      }
      *(_QWORD *)&_RDX->m_screenshotInfo.m_desc.m_filename[28] = *(_QWORD *)&_RAX->m_screenshotInfo.m_desc.m_filename[28];
      ++v2;
      if ( !s_R_Screenshot.m_deferredQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 122, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
        __debugbreak();
      if ( !s_R_Screenshot.m_deferredQueue.size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 123, ASSERT_TYPE_ASSERT, "(this->size > 0)", (const char *)&queryFormat, "this->size > 0") )
        __debugbreak();
      s_R_Screenshot.m_deferredQueue.start = (LOBYTE(s_R_Screenshot.m_deferredQueue.start) + 1) & 3;
      --s_R_Screenshot.m_deferredQueue.size;
    }
    Sys_LeaveCriticalSection(CRITSECT_SCREENSHOT_QUEUE);
    if ( v2 != &v23 )
    {
      _RDI = &v23.m_colorRt;
      do
      {
        m_surfaceID = _RDI->m_surfaceID;
        if ( _RDI->m_surfaceID )
        {
          R_RT_Handle::GetSurface(_RDI);
        }
        else if ( _RDI->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        {
          __debugbreak();
        }
        if ( m_surfaceID )
        {
          height = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height;
          width = R_RT_Handle::GetSurface(_RDI)->m_image.m_base.width;
          __asm
          {
            vmovups ymm0, ymmword ptr [rdi]
            vmovups [rsp+568h+var_528], ymm0
          }
          R_TakeScreenshot((const GfxScreenshotDesc *)&_RDI[-9].m_tracking.m_name, (R_RT_ColorHandle *)&v22, 0, 0, width, height);
          __asm
          {
            vmovups ymm0, ymmword ptr [rdi]
            vmovups [rsp+568h+var_528], ymm0
          }
          R_RT_DestroyInternal(&v22);
        }
        else
        {
          Com_PrintWarning(8, "ScreenShot: Deferred screenshot request not processed\n");
        }
        _RDI = (R_RT_ColorHandle *)((char *)_RDI + 312);
      }
      while ( &_RDI[-9].m_tracking != (R_RT_Tracking_HandleInfo *)v2 );
    }
  }
}

/*
==============
R_TakeScreenshot
==============
*/
void R_TakeScreenshot(const GfxScreenshotDesc *desc, R_RT_ColorHandle *colorRt, int x, int y, int width, int height)
{
  char *Value; 
  unsigned int *v11; 
  unsigned int v12; 
  _QWORD *v13; 
  char *v14; 
  int *v15; 
  unsigned __int64 v16; 
  ThreadContext CurrentThreadContext; 
  int v18; 
  int v19; 
  bool IsLockedGfxImmediateContext; 
  GfxScreenshotFormat m_fileFormat; 
  int m_useFS; 
  char *m_filename; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  int m_addClut; 
  GfxScreenshotColorimetry m_clutInputColorimetry; 
  bool m_exrTmp; 
  GfxScreenshotColorimetry m_colorimetry; 
  R_RT_ColorHandle v34; 

  _R15 = colorRt;
  Value = (char *)Sys_GetValue(0);
  v11 = (unsigned int *)(Value + 12016);
  if ( (unsigned int)(*((_DWORD *)Value + 3004) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 3004) + 1, 3) )
    __debugbreak();
  v12 = *v11 + 1;
  *v11 = v12;
  if ( v12 >= 3 )
  {
    LODWORD(v28) = 3;
    LODWORD(v27) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v27, v28) )
      __debugbreak();
  }
  v13 = Value + 2088;
  v14 = Value + 40;
  if ( *v13 < (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v13 += 8i64;
  if ( *v13 >= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v13 = v11;
  if ( *v13 <= (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v15 = (int *)&v11[*v11 + 2];
  v16 = __rdtsc();
  *v15 = v16;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 248, NULL, 0);
  v18 = width;
  if ( width == -1 )
    v18 = R_RT_Handle::GetSurface(_R15)->m_image.m_base.width;
  v19 = height;
  if ( height == -1 )
    v19 = R_RT_Handle::GetSurface(_R15)->m_image.m_base.height;
  IsLockedGfxImmediateContext = R_IsLockedGfxImmediateContext();
  if ( IsLockedGfxImmediateContext )
  {
    R_UnlockGfxImmediateContext();
    if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
      __debugbreak();
  }
  m_fileFormat = desc->m_fileFormat;
  m_useFS = desc->m_useFS;
  if ( desc->m_fileFormat )
  {
    if ( m_fileFormat == TGA )
    {
      m_filename = desc->m_filename;
      __asm { vmovups ymm0, ymmword ptr [r15] }
      m_addClut = desc->m_addClut;
      __asm { vmovups [rsp+0A8h+var_48], ymm0 }
      R_TakeScreenshotTga(desc->m_filename, m_useFS, &v34, x, y, v18, v19, m_addClut);
    }
    else
    {
      if ( (unsigned int)(m_fileFormat - 2) > 1 )
      {
        CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_screenshot.cpp", 317, ASSERT_TYPE_ASSERT, "(( 0, ( 0 ) ))", (const char *)&queryFormat, "C4127_DISABLE( 0 )");
        __debugbreak();
      }
      m_filename = desc->m_filename;
      __asm { vmovups ymm0, ymmword ptr [r15] }
      m_colorimetry = desc->m_colorimetry;
      m_exrTmp = desc->m_exrTmp;
      m_clutInputColorimetry = desc->m_clutInputColorimetry;
      v29 = desc->m_addClut;
      __asm { vmovups [rsp+0A8h+var_48], ymm0 }
      R_TakeScreenshotExr(desc->m_filename, m_useFS, &v34, x, y, v18, v19, v29, m_clutInputColorimetry, m_exrTmp, m_colorimetry);
    }
  }
  else
  {
    __asm { vmovups ymm0, ymmword ptr [r15] }
    m_filename = desc->m_filename;
    __asm { vmovups [rsp+0A8h+var_48], ymm0 }
    R_TakeScreenshotJpg(desc->m_filename, m_useFS, &v34, x, y, v18, v19);
  }
  if ( !desc->m_silent )
    Com_Printf(8, "Wrote %s\n", m_filename);
  if ( IsLockedGfxImmediateContext )
  {
    if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    R_LockGfxImmediateContext();
  }
  Profile_EndInternal(NULL);
}

