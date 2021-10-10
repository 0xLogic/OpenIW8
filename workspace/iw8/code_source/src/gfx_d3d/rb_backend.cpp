/*
==============
RB_DrawRotatedText
==============
*/

void __fastcall RB_DrawRotatedText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, float x, float y, float cwAngleInDegree, const GfxColor color)
{
  ?RB_DrawRotatedText@@YAXUGfxCmdBufContext@@PEBDPEAUGfxFont@@MMMTGfxColor@@@Z(gfxContext, text, font, x, y, cwAngleInDegree, color);
}

/*
==============
RB_SetBspImages
==============
*/

void RB_SetBspImages(void)
{
  ?RB_SetBspImages@@YAXXZ();
}

/*
==============
RB_DrawStretchPic
==============
*/

void __fastcall RB_DrawStretchPic(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  ?RB_DrawStretchPic@@YAXUGfxCmdBufContext@@PEBUMaterial@@MMMMMMMMIW4GfxPrimStatsTarget@@@Z(gfxContext, material, x, y, w, h, s0, t0, s1, t1, color, primStatsTarget);
}

/*
==============
RB_UpdateGPUMemoryPriority
==============
*/

void RB_UpdateGPUMemoryPriority(void)
{
  ?RB_UpdateGPUMemoryPriority@@YAXXZ();
}

/*
==============
RB_DrawStretchPic_LargeTriangle
==============
*/

void __fastcall RB_DrawStretchPic_LargeTriangle(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  ?RB_DrawStretchPic_LargeTriangle@@YAXUGfxCmdBufContext@@PEBUMaterial@@MMMMMMMMIW4GfxPrimStatsTarget@@@Z(gfxContext, material, x, y, w, h, s0, t0, s1, t1, color, primStatsTarget);
}

/*
==============
RB_Draw3DQuadPicST
==============
*/

void __fastcall RB_Draw3DQuadPicST(GfxCmdBufContext *gfxContext, const Material *material, const vec3_t (*verts)[4], float s0, float t0, float s1, float t1, GfxColor color)
{
  ?RB_Draw3DQuadPicST@@YAXUGfxCmdBufContext@@PEBUMaterial@@AEAY03$$CBTvec3_t@@MMMMTGfxColor@@@Z(gfxContext, material, verts, s0, t0, s1, t1, color);
}

/*
==============
RB_GetUIWhiteBalanceParams
==============
*/

void __fastcall RB_GetUIWhiteBalanceParams(const GfxViewInfo *viewInfo, vec4_t *outMatrixR, vec4_t *outMatrixG, vec4_t *outMatrixB)
{
  ?RB_GetUIWhiteBalanceParams@@YAXPEBUGfxViewInfo@@AEATvec4_t@@11@Z(viewInfo, outMatrixR, outMatrixG, outMatrixB);
}

/*
==============
DumpGFXDrawText2DCmd
==============
*/

void __fastcall DumpGFXDrawText2DCmd(const GfxCmdDrawText2D *cmd, const char *location)
{
  ?DumpGFXDrawText2DCmd@@YAXPEBUGfxCmdDrawText2D@@PEBD@Z(cmd, location);
}

/*
==============
RB_DrawLines3D
==============
*/

void __fastcall RB_DrawLines3D(GfxCmdBufContext *gfxContext, int count, int width, const GfxPointVertex *verts, int depthTest)
{
  ?RB_DrawLines3D@@YAXUGfxCmdBufContext@@HHQEBUGfxPointVertex@@H@Z(gfxContext, count, width, verts, depthTest);
}

/*
==============
RB_InitCodeConstants
==============
*/

void RB_InitCodeConstants(void)
{
  ?RB_InitCodeConstants@@YAXXZ();
}

/*
==============
VerifyGFXDrawText2DCmd
==============
*/

void __fastcall VerifyGFXDrawText2DCmd(const GfxCmdDrawText2D *cmd, const char *location)
{
  ?VerifyGFXDrawText2DCmd@@YAXPEBUGfxCmdDrawText2D@@PEBD@Z(cmd, location);
}

/*
==============
RB_SetDefaultUIState
==============
*/

void __fastcall RB_SetDefaultUIState(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxImage *universalClut)
{
  ?RB_SetDefaultUIState@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@PEBUGfxImage@@@Z(gfxContext, data, universalClut);
}

/*
==============
RB_DrawRectOutline2D
==============
*/

void __fastcall RB_DrawRectOutline2D(GfxCmdBufContext *gfxContext, unsigned int count, int width, const GfxCmdDrawRect2D::Rect *rects)
{
  ?RB_DrawRectOutline2D@@YAXUGfxCmdBufContext@@IHQEBURect@GfxCmdDrawRect2D@@@Z(gfxContext, count, width, rects);
}

/*
==============
RB_ScopeSizeScreenFilter
==============
*/

void __fastcall RB_ScopeSizeScreenFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const Material *material, const vec2_t *padding)
{
  ?RB_ScopeSizeScreenFilter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUMaterial@@PEBTvec2_t@@@Z(gfxContext, viewInfo, material, padding);
}

/*
==============
RB_DrawStretchPicFlipST
==============
*/

void __fastcall RB_DrawStretchPicFlipST(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  ?RB_DrawStretchPicFlipST@@YAXUGfxCmdBufContext@@PEBUMaterial@@MMMMMMMMIW4GfxPrimStatsTarget@@@Z(gfxContext, material, x, y, w, h, s0, t0, s1, t1, color, primStatsTarget);
}

/*
==============
R_GetTess
==============
*/

materialCommands_t *__fastcall R_GetTess(GfxCmdBufContext *gfxContext)
{
  return ?R_GetTess@@YAPEAUmaterialCommands_t@@UGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_RegisterBackendAssets
==============
*/

void RB_RegisterBackendAssets(void)
{
  ?RB_RegisterBackendAssets@@YAXXZ();
}

/*
==============
RB_SetUIColorimetryParams
==============
*/

void __fastcall RB_SetUIColorimetryParams(GfxCmdBufContext *gfxContext)
{
  ?RB_SetUIColorimetryParams@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_DrawUnitCube
==============
*/

void __fastcall RB_DrawUnitCube(GfxCmdBufContext *gfxContext, const Material *material, GfxPrimStatsTarget primStatsTarget, bool flipNormals)
{
  ?RB_DrawUnitCube@@YAXUGfxCmdBufContext@@PEBUMaterial@@W4GfxPrimStatsTarget@@_N@Z(gfxContext, material, primStatsTarget, flipNormals);
}

/*
==============
RB_DrawTiltedRect
==============
*/

void __fastcall RB_DrawTiltedRect(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  ?RB_DrawTiltedRect@@YAXUGfxCmdBufContext@@PEBUMaterial@@MMMMMMMMIW4GfxPrimStatsTarget@@@Z(gfxContext, material, x, y, w, h, s0, t0, s1, t1, color, primStatsTarget);
}

/*
==============
RB_DrawFullScreenColoredQuadInternal
==============
*/

void __fastcall RB_DrawFullScreenColoredQuadInternal(GfxCmdBufContext *gfxContext, const Material *material, float s0, float t0, float s1, float t1, unsigned int color, const char *fileAndLine)
{
  ?RB_DrawFullScreenColoredQuadInternal@@YAXUGfxCmdBufContext@@PEBUMaterial@@MMMMIPEBD@Z(gfxContext, material, s0, t0, s1, t1, color, fileAndLine);
}

/*
==============
RB_PartialScreenFilterInternal
==============
*/

void __fastcall RB_PartialScreenFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, const char *fileAndLine)
{
  ?RB_PartialScreenFilterInternal@@YAXUGfxCmdBufContext@@PEBUMaterial@@MMMMMMMMPEBD@Z(gfxContext, material, x, y, w, h, s0, t0, s1, t1, fileAndLine);
}

/*
==============
RB_FullScreenColoredFilterInternal
==============
*/

void __fastcall RB_FullScreenColoredFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, unsigned int color, const char *fileAndLine)
{
  ?RB_FullScreenColoredFilterInternal@@YAXUGfxCmdBufContext@@PEBUMaterial@@IPEBD@Z(gfxContext, material, color, fileAndLine);
}

/*
==============
RB_SetWaitFlipOncePerFrame
==============
*/

void __fastcall RB_SetWaitFlipOncePerFrame(GfxCmdBufState *gfxState)
{
  ?RB_SetWaitFlipOncePerFrame@@YAXPEAUGfxCmdBufState@@@Z(gfxState);
}

/*
==============
RB_SetIdentity
==============
*/

void __fastcall RB_SetIdentity(GfxCmdBufContext *gfxContext)
{
  ?RB_SetIdentity@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_RenderThread
==============
*/

void __fastcall __noreturn RB_RenderThread(unsigned int threadContext)
{
  ?RB_RenderThread@@YAXI@Z(threadContext);
}

/*
==============
RB_UpdateCmdBufHandoffStats
==============
*/

void __fastcall RB_UpdateCmdBufHandoffStats(unsigned int frameIndex)
{
  ?RB_UpdateCmdBufHandoffStats@@YAXI@Z(frameIndex);
}

/*
==============
RB_FullScreenFilterInternal
==============
*/

void __fastcall RB_FullScreenFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, const char *fileAndLine)
{
  ?RB_FullScreenFilterInternal@@YAXUGfxCmdBufContext@@PEBUMaterial@@PEBD@Z(gfxContext, material, fileAndLine);
}

/*
==============
RB_DrawRect2D
==============
*/

void __fastcall RB_DrawRect2D(GfxCmdBufContext *gfxContext, float x, float y, float width, float height, const GfxColor color)
{
  ?RB_DrawRect2D@@YAXUGfxCmdBufContext@@MMMMTGfxColor@@@Z(gfxContext, x, y, width, height, color);
}

/*
==============
RB_SetDisplayMappingParams
==============
*/

void __fastcall RB_SetDisplayMappingParams(GfxCmdBufContext *gfxContext)
{
  ?RB_SetDisplayMappingParams@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
RB_InitCodeImages
==============
*/

void RB_InitCodeImages(void)
{
  ?RB_InitCodeImages@@YAXXZ();
}

/*
==============
RB_DrawLines2D
==============
*/

void __fastcall RB_DrawLines2D(GfxCmdBufContext *gfxContext, int count, int width, const GfxPointVertex *verts)
{
  ?RB_DrawLines2D@@YAXUGfxCmdBufContext@@HHQEBUGfxPointVertex@@@Z(gfxContext, count, width, verts);
}

/*
==============
RB_DrawFrame
==============
*/

void __fastcall RB_DrawFrame(const GfxBackEndData *data)
{
  ?RB_DrawFrame@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
RB_DrawScreenColoredQuadInternal
==============
*/

void __fastcall RB_DrawScreenColoredQuadInternal(GfxCmdBufContext *gfxContext, const Material *material, float s0, float t0, float s1, float t1, float screenWidth, float screenHeight, unsigned int color, const char *fileAndLine)
{
  ?RB_DrawScreenColoredQuadInternal@@YAXUGfxCmdBufContext@@PEBUMaterial@@MMMMMMIPEBD@Z(gfxContext, material, s0, t0, s1, t1, screenWidth, screenHeight, color, fileAndLine);
}

/*
==============
RB_LookupColor
==============
*/

void __fastcall RB_LookupColor(unsigned __int8 c, unsigned __int8 *color)
{
  ?RB_LookupColor@@YAXEQEAE@Z(c, color);
}

/*
==============
RB_DrawTextInSpace
==============
*/

void __fastcall RB_DrawTextInSpace(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, const vec3_t *org, const float size, const vec3_t *xDir, const vec3_t *yDir, unsigned int color, const FontGlowStyle *glowStyle, const bool centerText)
{
  ?RB_DrawTextInSpace@@YAXUGfxCmdBufContext@@PEBDPEAUGfxFont@@AEBTvec3_t@@M33IPEBUFontGlowStyle@@_N@Z(gfxContext, text, font, org, size, xDir, yDir, color, glowStyle, centerText);
}

/*
==============
RB_ViewportFilterDirectInternal
==============
*/

void __fastcall RB_ViewportFilterDirectInternal(GfxCmdBufContext *gfxContext, const Material *material, unsigned int color, const GfxViewport *viewport, float x0, float y0, float x1, float y1, float s0, float t0, float s1, float t1, const char *fileAndLine)
{
  ?RB_ViewportFilterDirectInternal@@YAXUGfxCmdBufContext@@PEBUMaterial@@IPEBUGfxViewport@@MMMMMMMMPEBD@Z(gfxContext, material, color, viewport, x0, y0, x1, y1, s0, t0, s1, t1, fileAndLine);
}

/*
==============
RB_ExecuteRenderCommandsLoop
==============
*/

void __fastcall RB_ExecuteRenderCommandsLoop(GfxCmdBufContext *gfxContext, const void *cmds, const Material *mtlOverride)
{
  ?RB_ExecuteRenderCommandsLoop@@YAXUGfxCmdBufContext@@PEBXPEBUMaterial@@@Z(gfxContext, cmds, mtlOverride);
}

/*
==============
RB_Async2D_InitContext
==============
*/

void __fastcall RB_Async2D_InitContext(GfxAsync2DRenderData *data, GfxCmdBuf *cmdBuf, const bool receivePPFX)
{
  ?RB_Async2D_InitContext@@YAXPEAUGfxAsync2DRenderData@@PEAUGfxCmdBuf@@_N@Z(data, cmdBuf, receivePPFX);
}

/*
==============
RB_AdvanceToNextRenderCmd
==============
*/

void __fastcall RB_AdvanceToNextRenderCmd(GfxRenderCommandExecState *execState)
{
  ?RB_AdvanceToNextRenderCmd@@YAXPEAUGfxRenderCommandExecState@@@Z(execState);
}

/*
==============
RB_ResetStatTracking
==============
*/

void RB_ResetStatTracking(void)
{
  ?RB_ResetStatTracking@@YAXXZ();
}

/*
==============
RB_InitRenderTargetImages
==============
*/

void RB_InitRenderTargetImages(void)
{
  ?RB_InitRenderTargetImages@@YAXXZ();
}

/*
==============
R_SetVertex3d
==============
*/

void __fastcall R_SetVertex3d(GfxVertex *vert, float x, float y, float z, float s, float t, unsigned int color)
{
  ?R_SetVertex3d@@YAXPEAUGfxVertex@@MMMMMI@Z(vert, x, y, z, s, t, color);
}

/*
==============
R_SetHandoffDrawListIter
==============
*/

void __fastcall R_SetHandoffDrawListIter(GfxDrawListIter *drawListIter)
{
  ?R_SetHandoffDrawListIter@@YAXPEAUGfxDrawListIter@@@Z(drawListIter);
}

/*
==============
RB_GetBackEndTess
==============
*/

materialCommands_t *__fastcall RB_GetBackEndTess()
{
  return ?RB_GetBackEndTess@@YAPEAUmaterialCommands_t@@XZ();
}

/*
==============
RB_DrawText
==============
*/

void __fastcall RB_DrawText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, float x, float y, const GfxColor color)
{
  ?RB_DrawText@@YAXUGfxCmdBufContext@@PEBDPEAUGfxFont@@MMTGfxColor@@@Z(gfxContext, text, font, x, y, color);
}

/*
==============
RB_SetUIColorimetryParamsForRTT
==============
*/

void __fastcall RB_SetUIColorimetryParamsForRTT(GfxCmdBufContext *gfxContext)
{
  ?RB_SetUIColorimetryParamsForRTT@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
R_SetVertex2d
==============
*/

void __fastcall R_SetVertex2d(GfxVertex *vert, float x, float y, float s, float t, unsigned int color)
{
  ?R_SetVertex2d@@YAXPEAUGfxVertex@@MMMMI@Z(vert, x, y, s, t, color);
}

/*
==============
RB_DrawTextWithSize
==============
*/

void __fastcall RB_DrawTextWithSize(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, const float size, float x, float y, const GfxColor color)
{
  ?RB_DrawTextWithSize@@YAXUGfxCmdBufContext@@PEBDPEAUGfxFont@@MMMTGfxColor@@@Z(gfxContext, text, font, size, x, y, color);
}

/*
==============
RB_InitBackendGlobalStructs
==============
*/

void RB_InitBackendGlobalStructs(void)
{
  ?RB_InitBackendGlobalStructs@@YAXXZ();
}

/*
==============
R_SetVertex4d
==============
*/

void __fastcall R_SetVertex4d(GfxVertex *vert, float x, float y, float z, float w, float s, float t, unsigned int color)
{
  ?R_SetVertex4d@@YAXPEAUGfxVertex@@MMMMMMI@Z(vert, x, y, z, w, s, t, color);
}

/*
==============
RB_Async2D_ShutdownContext
==============
*/

void __fastcall RB_Async2D_ShutdownContext(GfxAsync2DRenderData *data, GfxCmdBuf *cmdBuf)
{
  ?RB_Async2D_ShutdownContext@@YAXPEAUGfxAsync2DRenderData@@PEAUGfxCmdBuf@@@Z(data, cmdBuf);
}

/*
==============
R_InsertGpuFence
==============
*/

void R_InsertGpuFence(void)
{
  ?R_InsertGpuFence@@YAXXZ();
}

/*
==============
R_SurfaceTypeName
==============
*/

const char *__fastcall R_SurfaceTypeName(surfaceType_t type)
{
  return ?R_SurfaceTypeName@@YAPEBDW4surfaceType_t@@@Z(type);
}

/*
==============
RB_IsFinishReady
==============
*/

bool __fastcall RB_IsFinishReady(void *userData)
{
  return ?RB_IsFinishReady@@YA_NPEAX@Z(userData);
}

/*
==============
R_IsHandoffDrawListIter
==============
*/

bool __fastcall R_IsHandoffDrawListIter(GfxDrawListIter *drawListIter)
{
  return ?R_IsHandoffDrawListIter@@YA_NPEAUGfxDrawListIter@@@Z(drawListIter);
}

/*
==============
RB_SetupUIWhiteBalanceParams
==============
*/

void __fastcall RB_SetupUIWhiteBalanceParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_SetupUIWhiteBalanceParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_DrawTaskGraph
==============
*/

bool __fastcall RB_DrawTaskGraph(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  return ?RB_DrawTaskGraph@@YA_NUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, data);
}

/*
==============
R_SetVertex4dWithNormal
==============
*/

void __fastcall R_SetVertex4dWithNormal(GfxVertex *vert, float x, float y, float z, float w, float nx, float ny, float nz, float s, float t, unsigned int color)
{
  ?R_SetVertex4dWithNormal@@YAXPEAUGfxVertex@@MMMMMMMMMI@Z(vert, x, y, z, w, nx, ny, nz, s, t, color);
}

/*
==============
RB_IsViewFullScreen
==============
*/

bool __fastcall RB_IsViewFullScreen(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  return ?RB_IsViewFullScreen@@YA_NUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_GetScreenFilterSourceTextureCoordinates
==============
*/

void __fastcall RB_GetScreenFilterSourceTextureCoordinates(float *outS0, float *outT0, float *outS1, float *outT1, const GfxViewInfo *viewInfo)
{
  ?RB_GetScreenFilterSourceTextureCoordinates@@YAXPEIAM000PEBUGfxViewInfo@@@Z(outS0, outT0, outS1, outT1, viewInfo);
}

/*
==============
RB_DrawTriangle2D
==============
*/

void __fastcall RB_DrawTriangle2D(GfxCmdBufContext *gfxContext, float x0, float y0, float x1, float y1, float x2, float y2, unsigned int color)
{
  ?RB_DrawTriangle2D@@YAXUGfxCmdBufContext@@MMMMMMI@Z(gfxContext, x0, y0, x1, y1, x2, y2, color);
}

/*
==============
RB_StretchPicCmd
==============
*/
void RB_StretchPicCmd(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  const Material *mtlOverride; 
  float v4; 
  float v5; 
  float v6; 
  unsigned int v7; 
  GfxCmdBufContext gfxContext; 

  cmd = execState->cmd;
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v4 = *((float *)cmd + 10);
  v5 = *((float *)cmd + 5);
  v6 = *((float *)cmd + 4);
  v7 = *((_DWORD *)cmd + 12);
  gfxContext = execState->gfxContext;
  RB_DrawStretchPic(&gfxContext, mtlOverride, v6, v5, *((float *)cmd + 6), *((float *)cmd + 7), *((float *)cmd + 8), *((float *)cmd + 9), v4, *((float *)cmd + 11), v7, GFX_PRIM_STATS_HUD);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_StretchPicCmdFlipST
==============
*/
void RB_StretchPicCmdFlipST(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  const Material *mtlOverride; 
  float v4; 
  float v5; 
  float v6; 
  unsigned int v7; 
  GfxCmdBufContext gfxContext; 

  cmd = execState->cmd;
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v4 = *((float *)cmd + 10);
  v5 = *((float *)cmd + 5);
  v6 = *((float *)cmd + 4);
  v7 = *((_DWORD *)cmd + 12);
  gfxContext = execState->gfxContext;
  RB_DrawStretchPicFlipST(&gfxContext, mtlOverride, v6, v5, *((float *)cmd + 6), *((float *)cmd + 7), *((float *)cmd + 8), *((float *)cmd + 9), v4, *((float *)cmd + 11), v7, GFX_PRIM_STATS_HUD);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_StretchPicRotateXYCmd
==============
*/
void RB_StretchPicRotateXYCmd(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  GfxCmdBufContext v3; 
  materialCommands_t *Tess; 
  float pixelAspect; 
  const Material *mtlOverride; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  int v15; 
  float v16; 
  __int64 v17; 
  bool v18; 
  float v19; 
  float v20; 
  float v21; 
  int v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  int v27; 
  float v28; 
  float v29; 
  __int64 v30; 
  float v31; 
  float v32; 
  int v33; 
  float v34; 
  float v35; 
  __int64 v36; 
  int v37; 
  float v38; 
  float v39; 
  __int64 v40; 
  float c; 
  float s[3]; 
  GfxCmdBufContext v43[8]; 

  cmd = execState->cmd;
  v43[0] = execState->gfxContext;
  v3 = v43[0];
  Tess = R_GetTess(v43);
  if ( v3.source->viewMode != VIEW_MODE_2D )
  {
    v43[0] = v3;
    RB_EndSurfaceIfNeeded(v43);
    R_Set2D(v3.source);
  }
  if ( (*((_BYTE *)cmd + 56) & 2) != 0 )
    pixelAspect = v3.source->pixelAspect;
  else
    pixelAspect = FLOAT_1_0;
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v43[0] = v3;
  RB_SetTessTechnique(v43, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  v43[0] = v3;
  RB_CheckTessOverflow(v43, 4u, 6u);
  vertexCount = Tess->vertexCount;
  indexCount = (int)Tess->indexCount;
  Tess->vertexCount += 4;
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount + 3;
  Tess->indices[indexCount + 1] = vertexCount;
  Tess->indices[indexCount + 2] = vertexCount + 2;
  Tess->indices[indexCount + 3] = vertexCount + 2;
  Tess->indices[indexCount + 4] = vertexCount;
  Tess->indices[indexCount + 5] = vertexCount + 1;
  v9 = *((float *)cmd + 6);
  v10 = *((float *)cmd + 7);
  v11 = *((float *)cmd + 4);
  v12 = *((float *)cmd + 5);
  if ( (*((_BYTE *)cmd + 56) & 1) == 0 )
  {
    v9 = v9 * 0.5;
    v10 = v10 * 0.5;
    v11 = v11 + v9;
    v12 = v12 + v10;
  }
  FastSinCos(*((float *)cmd + 13) * 0.017453292, s, &c);
  v13 = v9 * c;
  v14 = v10 * c;
  v15 = *((_DWORD *)cmd + 12);
  v16 = *((float *)cmd + 8);
  v17 = (__int64)&Tess->verts[vertexCount];
  v18 = (*((_BYTE *)cmd + 56) & 1) == 0;
  v19 = (float)(v9 * s[0]) * pixelAspect;
  LODWORD(v20) = COERCE_UNSIGNED_INT((float)(v10 * s[0]) / pixelAspect) ^ _xmm;
  v21 = *((float *)cmd + 9);
  *(_DWORD *)(v17 + 12) = 1065353216;
  *(_DWORD *)(v17 + 8) = 0;
  if ( v18 )
  {
    *(float *)v17 = (float)(v11 - v13) - v20;
    *(float *)(v17 + 4) = (float)(v12 - v19) - v14;
    *(_DWORD *)(v17 + 28) = 1073643391;
    *(_DWORD *)(v17 + 16) = v15;
    *(float *)(v17 + 20) = v16;
    *(float *)(v17 + 24) = v21;
    v33 = *((_DWORD *)cmd + 12);
    v34 = *((float *)cmd + 9);
    v35 = *((float *)cmd + 10);
    v36 = (__int64)&Tess->verts[vertexCount + 1];
    *(float *)v36 = (float)(v13 + v11) - v20;
    *(float *)(v36 + 4) = (float)(v19 + v12) - v14;
    *(_DWORD *)(v36 + 8) = 0;
    *(_DWORD *)(v36 + 12) = 1065353216;
    *(_DWORD *)(v36 + 28) = 1073643391;
    *(_DWORD *)(v36 + 16) = v33;
    *(float *)(v36 + 20) = v35;
    *(float *)(v36 + 24) = v34;
    v27 = *((_DWORD *)cmd + 12);
    v28 = *((float *)cmd + 11);
    v29 = *((float *)cmd + 10);
    v30 = (__int64)&Tess->verts[vertexCount + 2];
    *(float *)v30 = (float)(v13 + v11) + v20;
    *(float *)(v30 + 4) = (float)(v19 + v12) + v14;
    v31 = (float)(v11 - v13) + v20;
    v32 = v14 + (float)(v12 - v19);
  }
  else
  {
    *(float *)v17 = v11;
    *(float *)(v17 + 4) = v12;
    *(_DWORD *)(v17 + 28) = 1073643391;
    *(_DWORD *)(v17 + 16) = v15;
    *(float *)(v17 + 20) = v16;
    *(float *)(v17 + 24) = v21;
    v22 = *((_DWORD *)cmd + 12);
    v23 = *((float *)cmd + 9);
    v24 = *((float *)cmd + 10);
    v25 = v13 + v11;
    v26 = (__int64)&Tess->verts[vertexCount + 1];
    *(float *)v26 = v25;
    *(float *)(v26 + 4) = v19 + v12;
    *(_DWORD *)(v26 + 8) = 0;
    *(_DWORD *)(v26 + 12) = 1065353216;
    *(_DWORD *)(v26 + 28) = 1073643391;
    *(_DWORD *)(v26 + 16) = v22;
    *(float *)(v26 + 20) = v24;
    *(float *)(v26 + 24) = v23;
    v27 = *((_DWORD *)cmd + 12);
    v28 = *((float *)cmd + 11);
    v29 = *((float *)cmd + 10);
    v30 = (__int64)&Tess->verts[vertexCount + 2];
    *(float *)v30 = v25 + v20;
    *(float *)(v30 + 4) = (float)(v19 + v12) + v14;
    v31 = v20 + v11;
    v32 = v14 + v12;
  }
  *(_DWORD *)(v30 + 8) = 0;
  *(_DWORD *)(v30 + 12) = 1065353216;
  *(_DWORD *)(v30 + 16) = v27;
  *(_DWORD *)(v30 + 28) = 1073643391;
  *(float *)(v30 + 20) = v29;
  *(float *)(v30 + 24) = v28;
  v37 = *((_DWORD *)cmd + 12);
  v38 = *((float *)cmd + 11);
  v39 = *((float *)cmd + 8);
  v40 = (__int64)&Tess->verts[vertexCount + 3];
  *(float *)v40 = v31;
  *(float *)(v40 + 4) = v32;
  *(_DWORD *)(v40 + 8) = 0;
  *(_DWORD *)(v40 + 12) = 1065353216;
  *(_DWORD *)(v40 + 28) = 1073643391;
  *(_DWORD *)(v40 + 16) = v37;
  *(float *)(v40 + 24) = v38;
  *(float *)(v40 + 20) = v39;
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_StretchPicRotateSTCmd
==============
*/
void RB_StretchPicRotateSTCmd(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  GfxCmdBufContext gfxContext; 
  materialCommands_t *Tess; 
  const Material *mtlOverride; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  __int64 vertexCount_low; 
  __int64 indexCount; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  float v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  float c; 
  float v46; 
  float s; 
  float v48; 
  float v49; 
  float v50; 
  GfxCmdBufContext v51; 
  GfxCmdBufContext v52; 

  cmd = execState->cmd;
  gfxContext = execState->gfxContext;
  v52 = gfxContext;
  v51 = gfxContext;
  Tess = R_GetTess(&v51);
  if ( gfxContext.source->viewMode != VIEW_MODE_2D )
  {
    v51 = gfxContext;
    RB_EndSurfaceIfNeeded(&v51);
    R_Set2D(gfxContext.source);
  }
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v51 = gfxContext;
  RB_SetTessTechnique(&v51, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  FastSinCos(*((float *)cmd + 1) * 0.017453292, &s, &c);
  v6 = *((float *)cmd + 12);
  v7 = *((float *)cmd + 14);
  v8 = c * *((float *)cmd + 16);
  LODWORD(v9) = *((_DWORD *)cmd + 15) ^ _xmm;
  v10 = s * *((float *)cmd + 16);
  vertexCount_low = LOWORD(Tess->vertexCount);
  indexCount = (int)Tess->indexCount;
  v13 = v9 * c;
  v14 = v9 * s;
  v15 = *((float *)cmd + 18);
  v16 = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * c) - v14;
  v17 = *((float *)cmd + 13);
  v18 = (float)(v7 * c) - v14;
  v19 = s * v15;
  v20 = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * s) + v13;
  v21 = (float)(v7 * s) + v13;
  v22 = v15 * c;
  v46 = v21;
  v23 = 1.0 - *((float *)cmd + 17);
  v24 = 1.0 - *((float *)cmd + 19);
  v25 = v23 * c;
  v48 = (float)((float)(v16 + v6) + v8) - v19;
  v26 = v24 * s;
  v49 = (float)((float)(v20 + v17) + v10) + v22;
  v50 = (float)((float)(v18 + v6) - (float)(v23 * c)) - v19;
  v28 = v23 * s;
  v27 = v23 * s;
  v29 = v21;
  v30 = (float)((float)(v17 + v21) - v28) + v22;
  v31 = v24 * c;
  v46 = v30;
  v32 = (float)((float)(v6 - v16) - v25) + (float)(v24 * s);
  v33 = (float)((float)(v17 - v20) - v27) - (float)(v24 * c);
  v34 = (float)((float)(v6 - v18) + v8) + v26;
  RB_CheckTessOverflow(&v52, 4u, 6u);
  Tess->vertexCount += 4;
  Tess->indexCount += 6;
  Tess->indices[indexCount] = vertexCount_low + 3;
  Tess->indices[indexCount + 1] = vertexCount_low;
  Tess->indices[indexCount + 2] = vertexCount_low + 2;
  Tess->indices[indexCount + 3] = vertexCount_low + 2;
  Tess->indices[indexCount + 4] = vertexCount_low;
  Tess->indices[indexCount + 5] = vertexCount_low + 1;
  v35 = *((_DWORD *)cmd + 4);
  v36 = *((_DWORD *)cmd + 20);
  v37 = (__int64)&Tess->verts[(unsigned int)vertexCount_low];
  *(float *)(v37 + 4) = *((float *)cmd + 5);
  *(_DWORD *)v37 = v35;
  *(_DWORD *)(v37 + 8) = 0;
  *(_DWORD *)(v37 + 12) = 1065353216;
  *(_DWORD *)(v37 + 16) = v36;
  *(_DWORD *)(v37 + 28) = 1073643391;
  *(float *)(v37 + 20) = v48;
  *(float *)(v37 + 24) = v49;
  LODWORD(v37) = *((_DWORD *)cmd + 20);
  v38 = *((_DWORD *)cmd + 6);
  v39 = (__int64)&Tess->verts[vertexCount_low + 1];
  *(float *)(v39 + 4) = *((float *)cmd + 7);
  *(_DWORD *)v39 = v38;
  *(_DWORD *)(v39 + 8) = 0;
  *(_DWORD *)(v39 + 12) = 1065353216;
  v40 = v50;
  *(_DWORD *)(v39 + 16) = v37;
  *(_DWORD *)(v39 + 28) = 1073643391;
  *(float *)(v39 + 20) = v40;
  *(float *)(v39 + 24) = v46;
  LODWORD(v37) = *((_DWORD *)cmd + 20);
  v41 = *((_DWORD *)cmd + 8);
  v42 = (__int64)&Tess->verts[vertexCount_low + 2];
  *(float *)(v42 + 4) = *((float *)cmd + 9);
  *(_DWORD *)v42 = v41;
  *(_DWORD *)(v42 + 8) = 0;
  *(_DWORD *)(v42 + 12) = 1065353216;
  *(_DWORD *)(v42 + 16) = v37;
  *(_DWORD *)(v42 + 28) = 1073643391;
  *(float *)(v42 + 20) = v32;
  *(float *)(v42 + 24) = v33;
  LODWORD(v37) = *((_DWORD *)cmd + 20);
  v43 = *((_DWORD *)cmd + 10);
  v44 = (__int64)&Tess->verts[vertexCount_low + 3];
  *(float *)(v44 + 4) = *((float *)cmd + 11);
  *(_DWORD *)v44 = v43;
  *(_DWORD *)(v44 + 8) = 0;
  *(_DWORD *)(v44 + 12) = 1065353216;
  *(_DWORD *)(v44 + 16) = v37;
  *(_DWORD *)(v44 + 28) = 1073643391;
  *(float *)(v44 + 20) = v34;
  *(float *)(v44 + 24) = (float)((float)(v17 - v29) + v10) - v31;
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_3DStretchPicRotateSTCmd
==============
*/
void RB_3DStretchPicRotateSTCmd(GfxRenderCommandExecState *execState)
{
  vec4_t gfxContext; 
  char *cmd; 
  __int64 v4; 
  materialCommands_t *Tess; 
  float v6; 
  float v7; 
  float v8; 
  const Material *mtlOverride; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  __int64 v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  vec4_t v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float *v36; 
  float v38; 
  float v39; 
  __int64 v40; 
  float v41; 
  float v42; 
  float v43; 
  __m128 v44; 
  float v46; 
  bool v47; 
  bool v48; 
  bool v49; 
  bool v50; 
  __int64 v51; 
  __int64 v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  vec4_t *v58; 
  __int64 v59; 
  float v60; 
  float v61; 
  __m128 v62; 
  float v63; 
  int v64; 
  float v65; 
  materialCommands_t *v66; 
  __int64 v67; 
  float v68; 
  int v69; 
  float v70; 
  __int64 v71; 
  float v72; 
  float v73; 
  float v74; 
  int v75; 
  float v76; 
  __int64 v77; 
  float v78; 
  float v79; 
  float v80; 
  int v81; 
  float v82; 
  __int64 v83; 
  float v84; 
  float v85; 
  float v86; 
  int v87; 
  int v88; 
  float v89; 
  __int64 v90; 
  float v91; 
  int v92; 
  __int64 v93; 
  float v94; 
  float v95; 
  int v96; 
  __int64 v97; 
  float v98; 
  int v99; 
  __int64 v100; 
  float v101; 
  unsigned __int16 v102; 
  float c; 
  vec2_t v104; 
  vec2_t v105; 
  float s; 
  materialCommands_t *v107; 
  vec4_t vec; 
  BarycentricTriangle out; 
  vec3_t outBarycentricCoords; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> dst; 
  vec2_t cartesianVertices; 
  vec2_t v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  vec2_t inVertex; 
  vec2_t inNext; 
  vec2_t v121; 
  vec2_t inPrev; 
  __m256i v123; 
  vec4_t v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  vec2_t cartesianPoint; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 
  vec2_t v139; 
  vec4_t outVertex; 
  vec4_t v141; 
  vec4_t v142; 
  vec4_t v143; 
  vec2_t outCartesianCoords[4]; 
  char v145[60]; 

  gfxContext = (vec4_t)execState->gfxContext;
  cmd = (char *)execState->cmd;
  vec = gfxContext;
  *(vec4_t *)&out.m_inited = gfxContext;
  v4 = *(_QWORD *)gfxContext.v;
  Tess = R_GetTess((GfxCmdBufContext *)&out);
  v107 = Tess;
  if ( *(_DWORD *)(*(_QWORD *)gfxContext.v + 11488i64) != 2 )
  {
    *(vec4_t *)&out.m_inited = gfxContext;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&out);
    R_Set2D(*(GfxCmdBufSourceState **)gfxContext.v);
  }
  v6 = *((float *)cmd + 22);
  v7 = *((float *)cmd + 21);
  v8 = *((float *)cmd + 20);
  v101 = *((float *)cmd + 23);
  *(vec4_t *)&out.m_inited = gfxContext;
  RB_SetUIAA((GfxCmdBufContext *)&out, 1, v8, v7, v6, v101);
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  *(vec4_t *)&out.m_inited = gfxContext;
  RB_SetTessTechnique((GfxCmdBufContext *)&out, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  FastSinCos(*((float *)cmd + 1) * 0.017453292, &s, &c);
  v10 = *((float *)cmd + 16);
  v11 = *((float *)cmd + 18);
  v12 = c * *((float *)cmd + 20);
  v13 = s * *((float *)cmd + 20);
  LODWORD(v14) = *((_DWORD *)cmd + 19) ^ _xmm;
  vertexCount = Tess->vertexCount;
  indexCount = (int)Tess->indexCount;
  v17 = 4i64;
  v18 = v14 * c;
  v19 = (float)(COERCE_FLOAT(LODWORD(v11) ^ _xmm) * c) - (float)(v14 * s);
  v20 = *((float *)cmd + 17);
  v21 = (float)(v11 * c) - (float)(v14 * s);
  v22 = 1.0 - *((float *)cmd + 23);
  v23 = (float)(COERCE_FLOAT(LODWORD(v11) ^ _xmm) * s) + (float)(v14 * c);
  v24 = v11 * s;
  v25 = 1.0 - *((float *)cmd + 21);
  v26 = v24 + v18;
  v27 = *((float *)cmd + 22);
  v104.v[0] = (float)((float)(v10 + v19) + v12) - (float)(s * v27);
  v104.v[1] = (float)((float)(v20 + v23) + v13) + (float)(v27 * c);
  v105.v[0] = (float)((float)(v21 + v10) - (float)(v25 * c)) - (float)(s * v27);
  v105.v[1] = (float)((float)(v26 + v20) - (float)(v25 * s)) + (float)(v27 * c);
  v28 = v10 - v19;
  v29 = vec;
  v30 = (float)(v28 - (float)(v25 * c)) + (float)(v22 * s);
  v31 = (float)(v10 - v21) + v12;
  v32 = (float)((float)(v20 - v23) - (float)(v25 * s)) - (float)(v22 * c);
  v102 = vertexCount;
  v33 = (float)((float)(v20 - v26) + v13) - (float)(v22 * c);
  v35 = v31 + (float)(v22 * s);
  v34 = v35;
  *(vec4_t *)&out.m_inited = vec;
  RB_CheckTessOverflow((GfxCmdBufContext *)&out, 4u, 6u);
  Tess->vertexCount += 4;
  Tess->indexCount += 6;
  v36 = (float *)(cmd + 24);
  Tess->indices[indexCount] = v102 + 3;
  Tess->indices[indexCount + 1] = v102;
  Tess->indices[indexCount + 2] = v102 + 2;
  Tess->indices[indexCount + 3] = v102 + 2;
  Tess->indices[indexCount + 4] = v102;
  Tess->indices[indexCount + 5] = v102 + 1;
  if ( (*(_BYTE *)(v4 + 11668) & 1) != 0 )
  {
    _R14 = (float *)v145;
    v38 = (float)*(unsigned int *)(v4 + 11592);
    v39 = v38 * 0.5;
    v40 = 0i64;
    v41 = (float)*(unsigned int *)(v4 + 11596);
    v42 = v41 * 0.5;
    do
    {
      v43 = *(v36 - 1);
      vec.v[0] = *(v36 - 2);
      vec.v[2] = *v36;
      vec.v[1] = v43;
      vec.v[3] = FLOAT_1_0;
      MatrixTransformVector44Aligned(&vec, (const tmat44_t<vec4_t> *)(v4 + 9872), (vec4_t *)&out);
      v44 = (__m128)LODWORD(FLOAT_1_0);
      v44.m128_f32[0] = 1.0 / out.m_cartesianVerts[1].v[0];
      _XMM2 = _mm128_mul_ps(_mm_shuffle_ps(v44, v44, 0), *(__m128 *)&out.m_inited);
      v46 = (float)(_XMM2.m128_f32[0] + 1.0) * v39;
      *(_R14 - 1) = v46;
      inVertex.v[2 * v40] = v46;
      v44.m128_f32[0] = (float)(1.0 - _mm_shuffle_ps(_XMM2, _XMM2, 85).m128_f32[0]) * v42;
      *_R14 = v44.m128_f32[0];
      inVertex.v[2 * v40++ + 1] = v44.m128_f32[0];
      v36 += 3;
      __asm { vextractps dword ptr [r14+4], xmm2, 2 }
      _R14 += 4;
      *(__m128 *)&out.m_inited = _XMM2;
    }
    while ( v40 < 4 );
    v47 = RB_ApplyVertexDilation(&inVertex, &inNext, &inPrev, &outVertex);
    v48 = RB_ApplyVertexDilation(&inNext, &v121, &inVertex, &v141) || v47;
    v49 = RB_ApplyVertexDilation(&v121, &inPrev, &inNext, &v142) || v48;
    v50 = RB_ApplyVertexDilation(&inPrev, &inVertex, &v121, &v143);
    cartesianVertices = v104;
    v114 = v105;
    v115 = v30;
    v116 = v32;
    v117 = v34;
    v118 = v33;
    if ( !v50 && !v49 )
    {
      cartesianPoint.v[0] = outVertex.v[0];
      cartesianPoint.v[1] = outVertex.v[1];
      v135 = v141.v[0];
      v136 = v141.v[1];
      v137 = v142.v[0];
      v138 = v142.v[1];
      v139.v[0] = v143.v[0];
      v139.v[1] = v143.v[1];
      BarycentricTriangle::Init(&out, &inVertex);
      BarycentricTriangle::Init((BarycentricTriangle *)&v123, &cartesianVertices);
      v51 = 0i64;
      v52 = 3i64;
      do
      {
        BarycentricTriangle::GetBarycentricCoordinates(&out, (vec2_t *)((char *)&cartesianPoint + v51 * 8), &outBarycentricCoords);
        BarycentricTriangle::GetCartesianCoordinates((BarycentricTriangle *)&v123, &outBarycentricCoords, &outCartesianCoords[v51++]);
        --v52;
      }
      while ( v52 );
      BarycentricTriangle::Init(&out, &inNext);
      BarycentricTriangle::Init((BarycentricTriangle *)&v123, &v114);
      BarycentricTriangle::GetBarycentricCoordinates(&out, &v139, (vec3_t *)&vec);
      BarycentricTriangle::GetCartesianCoordinates((BarycentricTriangle *)&v123, (const vec3_t *)&vec, &outCartesianCoords[3]);
      v123 = *(__m256i *)outCartesianCoords[0].v;
      mat.m[0].v[1] = v114.v[1] - cartesianVertices.v[1];
      mat.m[0].v[0] = v114.v[0] - cartesianVertices.v[0];
      *(__m256i *)mat.row2.v = _ymm;
      mat.m[0].v[2] = 0.0;
      mat.m[0].v[3] = 0.0;
      mat.m[1].v[0] = v117 - cartesianVertices.v[0];
      mat.m[1].v[1] = v118 - cartesianVertices.v[1];
      mat.m[1].v[2] = 0.0;
      mat.m[1].v[3] = 0.0;
      MatrixInverse44Aligned(&mat, &dst);
      v53 = dst.m[0].v[1];
      v54 = cartesianVertices.v[1];
      *(float *)(v4 + 2976) = dst.m[0].v[0];
      v55 = dst.m[1].v[0];
      *(float *)(v4 + 2980) = v53;
      v56 = dst.m[1].v[1];
      *(float *)(v4 + 2984) = v55;
      v57 = cartesianVertices.v[0];
      *(float *)(v4 + 2988) = v56;
      ++*(_WORD *)(v4 + 10312);
      *(float *)(v4 + 2996) = COERCE_FLOAT(LODWORD(v54) ^ _xmm);
      *(float *)(v4 + 2992) = COERCE_FLOAT(LODWORD(v57) ^ _xmm);
      *(_QWORD *)(v4 + 3000) = 0i64;
      ++*(_WORD *)(v4 + 10314);
    }
    v58 = &v124;
    v59 = 0i64;
    do
    {
      v60 = outVertex.v[v59 + 1] - v42;
      v61 = *(float *)&v145[v59 * 4 + 4];
      vec.v[0] = (float)(outVertex.v[v59] - v39) * (float)(1.0 / v39);
      vec.v[1] = v60 * (float)(-1.0 / v42);
      vec.v[2] = v61;
      vec.v[3] = FLOAT_1_0;
      MatrixTransformVector44Aligned(&vec, (const tmat44_t<vec4_t> *)(v4 + 11312), v58);
      v62 = (__m128)LODWORD(FLOAT_1_0);
      v62.m128_f32[0] = 1.0 / v124.v[v59 + 3];
      ++v58;
      *(__m128 *)((char *)&v124 + v59 * 4) = _mm128_mul_ps(_mm_shuffle_ps(v62, v62, 0), *(__m128 *)((char *)&v124 + v59 * 4));
      v59 += 4i64;
      --v17;
    }
    while ( v17 );
    v63 = v124.v[1];
    v64 = *((_DWORD *)cmd + 24);
    v65 = v124.v[2];
    v66 = v107;
    *(vec4_t *)&out.m_inited = v29;
    v67 = (__int64)&v107->verts[v102];
    *(float *)v67 = v124.v[0];
    *(float *)(v67 + 4) = v63;
    *(float *)(v67 + 8) = v65;
    *(_DWORD *)(v67 + 12) = 1065353216;
    *(_DWORD *)(v67 + 28) = 1073643391;
    *(_DWORD *)(v67 + 16) = v64;
    *(float *)(v67 + 20) = *(float *)v123.m256i_i32;
    *(float *)(v67 + 24) = *(float *)&v123.m256i_i32[1];
    v68 = v126;
    v69 = *((_DWORD *)cmd + 24);
    v70 = v127;
    v71 = (__int64)&v66->verts[v102 + 1];
    *(float *)v71 = v125;
    *(float *)(v71 + 4) = v68;
    *(float *)(v71 + 8) = v70;
    *(_DWORD *)(v71 + 12) = 1065353216;
    v72 = *(float *)&v123.m256i_i32[2];
    v73 = *(float *)&v123.m256i_i32[3];
    *(_DWORD *)(v71 + 28) = 1073643391;
    *(_DWORD *)(v71 + 16) = v69;
    *(float *)(v71 + 20) = v72;
    *(float *)(v71 + 24) = v73;
    v74 = v129;
    v75 = *((_DWORD *)cmd + 24);
    v76 = v130;
    v77 = (__int64)&v66->verts[v102 + 2];
    *(float *)v77 = v128;
    v78 = *(float *)&v123.m256i_i32[4];
    *(float *)(v77 + 4) = v74;
    v79 = *(float *)&v123.m256i_i32[5];
    *(float *)(v77 + 8) = v76;
    *(_DWORD *)(v77 + 12) = 1065353216;
    *(_DWORD *)(v77 + 28) = 1073643391;
    *(_DWORD *)(v77 + 16) = v75;
    *(float *)(v77 + 20) = v78;
    *(float *)(v77 + 24) = v79;
    v80 = v132;
    v81 = *((_DWORD *)cmd + 24);
    v82 = v133;
    v83 = (__int64)&v66->verts[v102 + 3];
    *(float *)v83 = v131;
    v84 = *(float *)&v123.m256i_i32[6];
    *(float *)(v83 + 4) = v80;
    v85 = *(float *)&v123.m256i_i32[7];
    *(float *)(v83 + 8) = v82;
    *(_DWORD *)(v83 + 12) = 1065353216;
    *(_DWORD *)(v83 + 28) = 1073643391;
    *(_DWORD *)(v83 + 16) = v81;
    *(float *)(v83 + 20) = v84;
    *(float *)(v83 + 24) = v85;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&out);
    *(_QWORD *)(v4 + 2976) = 1065353216i64;
    *(_DWORD *)(v4 + 2984) = 0;
    *(_QWORD *)(v4 + 2988) = 1065353216i64;
    ++*(_WORD *)(v4 + 10312);
    *(_QWORD *)(v4 + 2996) = 0i64;
    *(_DWORD *)(v4 + 3004) = 0;
    ++*(_WORD *)(v4 + 10314);
  }
  else
  {
    v86 = *v36;
    v87 = *((_DWORD *)cmd + 24);
    v88 = *((_DWORD *)cmd + 4);
    v89 = v105.v[0];
    v90 = (__int64)&Tess->verts[v102];
    *(float *)(v90 + 4) = *((float *)cmd + 5);
    *(float *)(v90 + 8) = v86;
    *(_DWORD *)v90 = v88;
    *(_DWORD *)(v90 + 12) = 1065353216;
    *(_DWORD *)(v90 + 16) = v87;
    *(_DWORD *)(v90 + 28) = 1073643391;
    *(vec2_t *)(v90 + 20) = v104;
    LODWORD(v90) = *((_DWORD *)cmd + 24);
    v91 = *((float *)cmd + 9);
    v92 = *((_DWORD *)cmd + 7);
    v93 = (__int64)&Tess->verts[v102 + 1];
    *(float *)(v93 + 4) = *((float *)cmd + 8);
    v94 = v105.v[1];
    *(float *)(v93 + 8) = v91;
    *(_DWORD *)v93 = v92;
    *(_DWORD *)(v93 + 12) = 1065353216;
    *(_DWORD *)(v93 + 28) = 1073643391;
    *(_DWORD *)(v93 + 16) = v90;
    *(float *)(v93 + 24) = v94;
    *(float *)(v93 + 20) = v89;
    v95 = *((float *)cmd + 12);
    LODWORD(v90) = *((_DWORD *)cmd + 24);
    v96 = *((_DWORD *)cmd + 10);
    v97 = (__int64)&Tess->verts[v102 + 2];
    *(float *)(v97 + 4) = *((float *)cmd + 11);
    *(float *)(v97 + 8) = v95;
    *(_DWORD *)v97 = v96;
    *(_DWORD *)(v97 + 12) = 1065353216;
    *(_DWORD *)(v97 + 28) = 1073643391;
    *(_DWORD *)(v97 + 16) = v90;
    *(float *)(v97 + 20) = v30;
    *(float *)(v97 + 24) = v32;
    v98 = *((float *)cmd + 15);
    LODWORD(v90) = *((_DWORD *)cmd + 24);
    v99 = *((_DWORD *)cmd + 13);
    v100 = (__int64)&Tess->verts[v102 + 3];
    *(float *)(v100 + 4) = *((float *)cmd + 14);
    *(float *)(v100 + 8) = v98;
    *(_DWORD *)v100 = v99;
    *(_DWORD *)(v100 + 12) = 1065353216;
    *(_DWORD *)(v100 + 28) = 1073643391;
    *(_DWORD *)(v100 + 16) = v90;
    *(float *)(v100 + 20) = v35;
    *(float *)(v100 + 24) = v33;
  }
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawQuadPicCmd
==============
*/
void RB_DrawQuadPicCmd(GfxRenderCommandExecState *execState)
{
  RB_DrawQuadPicInternal(execState, (const GfxCmdDrawQuadPic *)execState->cmd);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUIBlur
==============
*/
void RB_SetUIBlur(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  float v3; 
  float v4; 
  float value; 
  float v6; 
  GfxCmdBufSourceState *source; 
  __int64 height; 
  float v9; 
  float width; 
  float y; 
  __int64 x; 
  float v13; 
  GfxCmdBufContext gfxContext; 
  GfxCmdBufContext v15; 

  cmd = (float *)execState->cmd;
  gfxContext = execState->gfxContext;
  v15 = gfxContext;
  RB_EndSurfaceIfNeeded(&v15);
  v3 = cmd[1];
  v4 = 0.0;
  if ( v3 == 0.0 )
  {
    source = gfxContext.source;
    *(_QWORD *)gfxContext.source->input.consts[64].v = 0i64;
    *(_QWORD *)&gfxContext.source->input.consts[64].xyz.z = 0i64;
  }
  else
  {
    value = r_ui_scale_scene_range->current.value;
    v6 = r_ui_scale_scene_range->current.vector.v[1] - value;
    if ( v6 != 0.0 )
      v4 = 1.0 / v6;
    source = gfxContext.source;
    gfxContext.source->input.consts[64].v[3] = r_ui_scale_range_min->current.value;
    gfxContext.source->input.consts[64].v[0] = v3;
    gfxContext.source->input.consts[64].v[1] = value;
    gfxContext.source->input.consts[64].v[2] = v4;
  }
  height = source->sceneViewport.height;
  ++source->constVersions[64];
  v9 = (float)height;
  width = (float)source->sceneViewport.width;
  y = (float)source->sceneViewport.y;
  x = source->sceneViewport.x;
  source->input.consts[67].v[1] = y;
  source->input.consts[67].v[3] = 1.0 / v9;
  v13 = (float)x;
  source->input.consts[67].v[0] = v13;
  source->input.consts[67].v[2] = 1.0 / width;
  ++source->constVersions[67];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUIPixelGrid
==============
*/
void RB_SetUIPixelGrid(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  GfxCmdBufSourceState *source; 
  float v4; 
  float v5; 
  int v6; 
  GfxCmdBufContext gfxContext; 

  cmd = (float *)execState->cmd;
  gfxContext = execState->gfxContext;
  source = gfxContext.source;
  RB_EndSurfaceIfNeeded(&gfxContext);
  v4 = (float)*((unsigned __int8 *)cmd + 7);
  v5 = (float)*((unsigned __int8 *)cmd + 6);
  v6 = *((unsigned __int8 *)cmd + 4);
  source->input.consts[65].v[1] = (float)*((unsigned __int8 *)cmd + 5);
  source->input.consts[65].v[2] = v5;
  source->input.consts[65].v[3] = v4;
  source->input.consts[65].v[0] = (float)v6;
  ++source->constVersions[65];
  source->input.consts[66].v[0] = cmd[2];
  *(_QWORD *)&source->input.consts[66].xyz.y = 0i64;
  source->input.consts[66].v[3] = 0.0;
  ++source->constVersions[66];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUIColorOp
==============
*/
void RB_SetUIColorOp(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  GfxCmdBufSourceState *source; 
  float v4; 
  GfxCmdBufContext gfxContext; 

  cmd = (float *)execState->cmd;
  gfxContext = execState->gfxContext;
  source = gfxContext.source;
  RB_EndSurfaceIfNeeded(&gfxContext);
  v4 = cmd[2];
  source->input.consts[70].v[0] = (float)*((unsigned __int8 *)cmd + 4);
  source->input.consts[70].v[1] = v4;
  *(_QWORD *)&source->input.consts[70].xyz.z = 0i64;
  ++source->constVersions[70];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUIColorMatrix
==============
*/
void RB_SetUIColorMatrix(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v4; 
  GfxCmdBufContext gfxContext; 

  cmd = execState->cmd;
  gfxContext = execState->gfxContext;
  v4 = gfxContext;
  RB_EndSurfaceIfNeeded(&v4);
  source = gfxContext.source;
  gfxContext.source->input.consts[71].v[0] = (float)cmd[1];
  source->input.consts[71].v[1] = (float)cmd[2];
  source->input.consts[71].v[2] = (float)cmd[3];
  source->input.consts[71].v[3] = NAN;
  ++source->constVersions[71];
  source->input.consts[72].v[0] = (float)cmd[4];
  source->input.consts[72].v[1] = (float)cmd[5];
  source->input.consts[72].v[2] = (float)cmd[6];
  source->input.consts[72].v[3] = NAN;
  ++source->constVersions[72];
  source->input.consts[73].v[0] = (float)cmd[7];
  source->input.consts[73].v[1] = (float)cmd[8];
  source->input.consts[73].v[2] = (float)cmd[9];
  source->input.consts[73].v[3] = NAN;
  ++source->constVersions[73];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUICalibrationSwatchColor
==============
*/
void RB_SetUICalibrationSwatchColor(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v4; 
  GfxCmdBufContext gfxContext; 

  cmd = execState->cmd;
  gfxContext = execState->gfxContext;
  v4 = gfxContext;
  RB_EndSurfaceIfNeeded(&v4);
  source = gfxContext.source;
  gfxContext.source->input.consts[62].v[0] = (float)cmd[1];
  source->input.consts[62].v[1] = (float)cmd[2];
  source->input.consts[62].v[2] = (float)cmd[3];
  source->input.consts[62].v[3] = (float)cmd[4];
  ++source->constVersions[62];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUICodeSamplerCmd
==============
*/
void RB_SetUICodeSamplerCmd(GfxRenderCommandExecState *execState)
{
  _WORD *cmd; 
  GfxCmdBufSourceState *source; 
  __int16 v4; 
  GfxCmdBufContext gfxContext; 

  cmd = execState->cmd;
  gfxContext = execState->gfxContext;
  source = gfxContext.source;
  RB_EndSurfaceIfNeeded(&gfxContext);
  v4 = cmd[2];
  _XMM3 = LODWORD(FLOAT_1_0);
  _XMM0 = *((unsigned __int8 *)cmd + 6);
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  source->input.consts[76].v[0] = (float)((v4 & 0x80) == 0);
  source->input.consts[76].v[1] = (float)((v4 & 0x100) == 0);
  _XMM0 = v4 & 7;
  __asm { vblendvps xmm5, xmm3, xmm4, xmm2 }
  source->input.consts[76].v[3] = *(float *)&_XMM5;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  source->input.consts[76].v[2] = *(float *)&_XMM0;
  ++source->constVersions[76];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUIGlitch
==============
*/
void RB_SetUIGlitch(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  float v3; 
  float v4; 
  __int128 v6; 
  float v8; 
  __int128 v10; 
  float v12; 
  float v13; 
  float v14; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v18; 
  GfxCmdBufContext gfxContext; 

  cmd = (float *)execState->cmd;
  gfxContext = execState->gfxContext;
  v18 = gfxContext;
  RB_EndSurfaceIfNeeded(&v18);
  v3 = FLOAT_1_0;
  v4 = (float)*((unsigned __int8 *)cmd + 4) * 0.0039215689;
  v6 = 0i64;
  *(float *)&v6 = (float)*((unsigned __int8 *)cmd + 5);
  _XMM1 = v6;
  __asm { vmaxss  xmm0, xmm1, xmm3 }
  v8 = 1.0 / *(float *)&_XMM0;
  v10 = 0i64;
  *(float *)&v10 = (float)*((unsigned __int8 *)cmd + 6);
  _XMM0 = v10;
  __asm { vmaxss  xmm1, xmm0, xmm3 }
  v12 = cmd[2];
  v13 = 1.0 / *(float *)&_XMM1;
  if ( v12 > 0.00000011920929 )
    v3 = 1.0 / v12;
  v14 = (float)*((unsigned __int8 *)cmd + 7);
  source = gfxContext.source;
  _XMM1 = 0i64;
  gfxContext.source->input.consts[68].v[1] = v13;
  source->input.consts[68].v[0] = v8;
  source->input.consts[68].v[2] = v3;
  source->input.consts[68].v[3] = 1.0;
  ++source->constVersions[68];
  source->input.consts[69].v[0] = v14;
  source->input.consts[69].v[3] = v4;
  source->input.consts[69].v[1] = 0.0;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  source->input.consts[69].v[2] = *(float *)&_XMM1;
  ++source->constVersions[69];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawQuadPicSTCmd
==============
*/
void RB_DrawQuadPicSTCmd(GfxRenderCommandExecState *execState)
{
  RB_DrawQuadPicSTCmdInternal(execState, (const GfxCmdDrawQuadPicST *)execState->cmd);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_Draw3DQuadPicSTCmd
==============
*/
void RB_Draw3DQuadPicSTCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  const Material *mtlOverride; 
  float v4; 
  float v5; 
  GfxColor v6; 
  GfxCmdBufContext gfxContext; 

  cmd = (char *)execState->cmd;
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v4 = *((float *)cmd + 18);
  v5 = *((float *)cmd + 16);
  v6 = *(GfxColor *)(cmd + 80);
  gfxContext = execState->gfxContext;
  RB_Draw3DQuadPicST(&gfxContext, mtlOverride, (const vec3_t (*)[4])(cmd + 16), v5, *((float *)cmd + 17), v4, *((float *)cmd + 19), v6);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawMouseCursorCmd
==============
*/
void RB_DrawMouseCursorCmd(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  GfxCmdBufContext gfxContext; 
  float v4; 
  float v5; 
  const Material *mtlOverride; 
  unsigned int v7; 
  GfxCmdBufContext v8; 
  MouseCursorPos curPos; 

  cmd = execState->cmd;
  gfxContext = execState->gfxContext;
  IN_GetCursorPos(*((_DWORD *)execState->cmd + 7), &curPos);
  v4 = *((float *)cmd + 4);
  v5 = *((float *)cmd + 5);
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v7 = *((_DWORD *)cmd + 6);
  v8 = gfxContext;
  RB_DrawStretchPic(&v8, mtlOverride, (float)curPos.x - (float)(v4 * 0.5), (float)curPos.y - (float)(v5 * 0.5), v4, v5, 0.0, 0.0, 1.0, 1.0, v7, GFX_PRIM_STATS_HUD);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetFirstUIMaskCmd
==============
*/
void RB_SetFirstUIMaskCmd(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  GfxCmdBufContext v3; 
  GfxCmdBufSourceState *source; 
  const GfxImage *v5; 
  float v6; 
  float v7; 
  float v8; 
  float firstMaskAlphaScale; 
  float secondMaskAlphaOffset; 
  float firstMaskAlphaOffset; 
  float v12; 
  float v13; 
  float v14; 
  GfxCmdBufContext gfxContext; 

  cmd = (float *)execState->cmd;
  source = execState->gfxContext.source;
  gfxContext = execState->gfxContext;
  v3 = gfxContext;
  RB_EndSurfaceIfNeeded(&gfxContext);
  if ( v3.source->viewMode != VIEW_MODE_2D )
  {
    gfxContext = v3;
    RB_EndSurfaceIfNeeded(&gfxContext);
    R_Set2D(v3.source);
  }
  v3.source->uiState.firstMaskTranslation.v[0] = cmd[10];
  v3.source->uiState.firstMaskTranslation.v[1] = cmd[11];
  v3.source->uiState.firstMaskAlphaScale = cmd[1];
  v3.source->uiState.firstMaskAlphaOffset = cmd[2];
  v5 = (const GfxImage *)*((_QWORD *)cmd + 2);
  if ( v3.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[19] = v5;
  v6 = cmd[6];
  v7 = cmd[9];
  v8 = cmd[8];
  source->input.consts[55].v[1] = cmd[7];
  source->input.consts[55].v[2] = v8;
  source->input.consts[55].v[3] = v7;
  source->input.consts[55].v[0] = v6;
  ++source->constVersions[55];
  firstMaskAlphaScale = source->uiState.firstMaskAlphaScale;
  secondMaskAlphaOffset = source->uiState.secondMaskAlphaOffset;
  firstMaskAlphaOffset = source->uiState.firstMaskAlphaOffset;
  source->input.consts[58].v[1] = source->uiState.secondMaskAlphaScale;
  source->input.consts[58].v[2] = firstMaskAlphaOffset;
  source->input.consts[58].v[3] = secondMaskAlphaOffset;
  source->input.consts[58].v[0] = firstMaskAlphaScale;
  ++source->constVersions[58];
  v12 = source->uiState.firstMaskTranslation.v[0];
  v13 = source->uiState.secondMaskTranslation.v[1];
  v14 = source->uiState.secondMaskTranslation.v[0];
  source->input.consts[56].v[1] = source->uiState.firstMaskTranslation.v[1];
  source->input.consts[56].v[2] = v14;
  source->input.consts[56].v[3] = v13;
  source->input.consts[56].v[0] = v12;
  ++source->constVersions[56];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_ClearFirstUIMaskCmd
==============
*/
void RB_ClearFirstUIMaskCmd(GfxRenderCommandExecState *execState)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext gfxContext; 
  GfxImage *whiteImage; 
  float secondMaskAlphaOffset; 
  float secondMaskAlphaScale; 
  GfxCmdBufContext v7; 

  source = execState->gfxContext.source;
  gfxContext = execState->gfxContext;
  if ( source->viewMode != VIEW_MODE_2D )
  {
    v7 = execState->gfxContext;
    RB_EndSurfaceIfNeeded(&v7);
    R_Set2D(source);
  }
  v7 = gfxContext;
  RB_EndSurfaceIfNeeded(&v7);
  whiteImage = rgp.whiteImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[19] = whiteImage;
  secondMaskAlphaOffset = source->uiState.secondMaskAlphaOffset;
  secondMaskAlphaScale = source->uiState.secondMaskAlphaScale;
  *(_QWORD *)&source->uiState.firstMaskAlphaScale = 1065353216i64;
  source->input.consts[58].v[1] = secondMaskAlphaScale;
  source->input.consts[58].v[3] = secondMaskAlphaOffset;
  source->input.consts[58].v[0] = 1.0;
  source->input.consts[58].v[2] = 0.0;
  ++source->constVersions[58];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetSecondUIMaskCmd
==============
*/
void RB_SetSecondUIMaskCmd(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  GfxCmdBufContext v3; 
  GfxCmdBufSourceState *source; 
  const GfxImage *v5; 
  float v6; 
  float v7; 
  float v8; 
  float firstMaskAlphaScale; 
  float secondMaskAlphaOffset; 
  float firstMaskAlphaOffset; 
  float v12; 
  float v13; 
  float v14; 
  GfxCmdBufContext gfxContext; 

  cmd = (float *)execState->cmd;
  source = execState->gfxContext.source;
  gfxContext = execState->gfxContext;
  v3 = gfxContext;
  RB_EndSurfaceIfNeeded(&gfxContext);
  if ( v3.source->viewMode != VIEW_MODE_2D )
  {
    gfxContext = v3;
    RB_EndSurfaceIfNeeded(&gfxContext);
    R_Set2D(v3.source);
  }
  v3.source->uiState.secondMaskTranslation.v[0] = cmd[10];
  v3.source->uiState.secondMaskTranslation.v[1] = cmd[11];
  v3.source->uiState.secondMaskAlphaScale = cmd[1];
  v3.source->uiState.secondMaskAlphaOffset = cmd[2];
  v5 = (const GfxImage *)*((_QWORD *)cmd + 2);
  if ( v3.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[20] = v5;
  v6 = cmd[6];
  v7 = cmd[9];
  v8 = cmd[8];
  source->input.consts[57].v[1] = cmd[7];
  source->input.consts[57].v[2] = v8;
  source->input.consts[57].v[3] = v7;
  source->input.consts[57].v[0] = v6;
  ++source->constVersions[57];
  firstMaskAlphaScale = source->uiState.firstMaskAlphaScale;
  secondMaskAlphaOffset = source->uiState.secondMaskAlphaOffset;
  firstMaskAlphaOffset = source->uiState.firstMaskAlphaOffset;
  source->input.consts[58].v[1] = source->uiState.secondMaskAlphaScale;
  source->input.consts[58].v[2] = firstMaskAlphaOffset;
  source->input.consts[58].v[3] = secondMaskAlphaOffset;
  source->input.consts[58].v[0] = firstMaskAlphaScale;
  ++source->constVersions[58];
  v12 = source->uiState.firstMaskTranslation.v[0];
  v13 = source->uiState.secondMaskTranslation.v[1];
  v14 = source->uiState.secondMaskTranslation.v[0];
  source->input.consts[56].v[1] = source->uiState.firstMaskTranslation.v[1];
  source->input.consts[56].v[2] = v14;
  source->input.consts[56].v[3] = v13;
  source->input.consts[56].v[0] = v12;
  ++source->constVersions[56];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_ClearSecondUIMaskCmd
==============
*/
void RB_ClearSecondUIMaskCmd(GfxRenderCommandExecState *execState)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext gfxContext; 
  GfxImage *whiteImage; 
  float firstMaskAlphaScale; 
  float firstMaskAlphaOffset; 
  GfxCmdBufContext v7; 

  source = execState->gfxContext.source;
  gfxContext = execState->gfxContext;
  if ( source->viewMode != VIEW_MODE_2D )
  {
    v7 = execState->gfxContext;
    RB_EndSurfaceIfNeeded(&v7);
    R_Set2D(source);
  }
  v7 = gfxContext;
  RB_EndSurfaceIfNeeded(&v7);
  whiteImage = rgp.whiteImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[20] = whiteImage;
  firstMaskAlphaScale = source->uiState.firstMaskAlphaScale;
  firstMaskAlphaOffset = source->uiState.firstMaskAlphaOffset;
  *(_QWORD *)&source->uiState.secondMaskAlphaScale = 1065353216i64;
  source->input.consts[58].v[3] = 0.0;
  source->input.consts[58].v[2] = firstMaskAlphaOffset;
  source->input.consts[58].v[0] = firstMaskAlphaScale;
  source->input.consts[58].v[1] = 1.0;
  ++source->constVersions[58];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawFullScreenColoredQuadCmd
==============
*/
void RB_DrawFullScreenColoredQuadCmd(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  const Material *mtlOverride; 
  float v4; 
  float v5; 
  float v6; 
  unsigned int v7; 
  GfxCmdBufContext gfxContext; 

  cmd = execState->cmd;
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v4 = *((float *)cmd + 6);
  v5 = *((float *)cmd + 5);
  v6 = *((float *)cmd + 4);
  v7 = *((_DWORD *)cmd + 8);
  gfxContext = execState->gfxContext;
  RB_DrawFullScreenColoredQuadInternal(&gfxContext, mtlOverride, v6, v5, v4, *((float *)cmd + 7), v7, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(1953)");
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_ClearScreenCmd
==============
*/
void RB_ClearScreenCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  char v3; 
  float v4; 
  unsigned __int8 stencil; 
  unsigned __int8 v6; 
  __m256i v8; 
  __int64 v9; 
  GfxCmdBufSourceState *source[4]; 
  _BYTE v11[64]; 
  __m256i v12; 
  __m256i v13; 
  __m256i v14; 
  __m256i v15; 
  __int64 v16; 
  GfxViewport outViewport; 

  cmd = (char *)execState->cmd;
  *(GfxCmdBufContext *)source = execState->gfxContext;
  v3 = cmd[28];
  v4 = *((float *)cmd + 6);
  stencil = cmd[5];
  v6 = cmd[4];
  outViewport = *(GfxViewport *)source;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&outViewport);
  __asm { vpextrq rbx, xmm6, 1 }
  v8 = *(__m256i *)(_RBX + 2728);
  v9 = *(_QWORD *)(_RBX + 2792);
  *(__m256i *)v11 = *(__m256i *)(_RBX + 2600);
  *(__m256i *)&v11[32] = *(__m256i *)(_RBX + 2632);
  v12 = *(__m256i *)(_RBX + 2664);
  v13 = *(__m256i *)(_RBX + 2696);
  v14 = v8;
  v15 = *(__m256i *)(_RBX + 2760);
  v16 = v9;
  if ( v11[0] != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  if ( (*((_BYTE *)source[0] + 11668) & 2) != 0 && source[0]->viewMode )
  {
    R_GetViewport(source[0], &outViewport);
    R_SetViewportAndScissorSeparate((GfxCmdBufState *)_RBX, &outViewport, &outViewport);
    R_UpdateViewport(source[0], &outViewport);
  }
  if ( v3 )
    R_ClearScreenLegacySlow((GfxCmdBufState *)_RBX, v6, (const vec4_t *)(cmd + 8), 1u, v4, stencil);
  else
    R_ClearScreen((GfxCmdBufState *)_RBX, v6, stencil);
  *(__m256i *)source = *(__m256i *)&v11[8];
  R_AddRenderTargetTransition((GfxCmdBufState *)_RBX, (R_RT_ColorHandle *)source, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions((CmdBufState *)_RBX);
  *(__m256i *)source = *(__m256i *)&v11[8];
  R_AddRenderTargetTransition((GfxCmdBufState *)_RBX, (R_RT_ColorHandle *)source, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions((CmdBufState *)_RBX);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SaveScreenSectionCmd
==============
*/
void RB_SaveScreenSectionCmd(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  __int64 v4; 
  int time; 
  const R_RT_Surface *Surface; 
  float v8; 
  float v9; 
  float fmt; 
  int v11; 
  float v12; 
  int v13; 
  R_RT_Handle v14; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v16; 

  cmd = (float *)execState->cmd;
  _XMM6 = execState->gfxContext;
  if ( *((_DWORD *)execState->cmd + 5) >= 2u )
  {
    v13 = 2;
    v11 = *((_DWORD *)execState->cmd + 5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2055, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientID ) < (unsigned)( ( sizeof( *array_counter( rgp.savedScreenTimes ) ) + 0 ) )", "cmd->clientID doesn't index ARRAY_COUNT( rgp.savedScreenTimes )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  *(GfxCmdBufContext *)&v14.m_surfaceID = _XMM6;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v14);
  v4 = *((int *)cmd + 5);
  time = _XMM6.source->sceneDef.time;
  if ( rgp.savedScreenTimes[v4] != time )
  {
    R_GetSavedScreenRt(&result, (GfxRenderTargetId)(v4 + 4), _XMM6.source->renderTargetWidth, _XMM6.source->renderTargetHeight);
    R_RT_GetGlobalColor(&v16, R_RENDERTARGET_DISPLAY_BUFFER);
    __asm { vpextrq rdi, xmm6, 1 }
    Surface = R_RT_Handle::GetSurface(&result);
    v14 = (R_RT_Handle)result;
    R_HW_AddResourceTransition(_RDI, &v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v14 = (R_RT_Handle)v16;
    R_HW_AddResourceTransition(_RDI, &v14, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    v8 = cmd[2];
    v9 = cmd[1];
    v12 = cmd[4];
    fmt = cmd[3];
    *(GfxCmdBufContext *)&v14.m_surfaceID = _XMM6;
    R_ResolveSection((GfxCmdBufContext *)&v14, &Surface->m_image.m_base, v9, v8, fmt, v12);
    R_HW_AddResourceTransition(_RDI, &result, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_HW_AddResourceTransition(_RDI, &v16, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    *(float *)&v4 = cmd[5];
    time = _XMM6.source->sceneDef.time;
  }
  rgp.savedScreenTimes[(int)v4] = time;
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_BlendSavedScreenBlurredCmd
==============
*/
void RB_BlendSavedScreenBlurredCmd(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  __int128 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  const R_RT_Surface *Surface; 
  __int64 v18; 
  R_RT_ColorHandle result; 

  cmd = (float *)execState->cmd;
  if ( *((int *)execState->cmd + 1) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2113, ASSERT_TYPE_ASSERT, "(cmd->fadeMsec > 0)", (const char *)&queryFormat, "cmd->fadeMsec > 0") )
    __debugbreak();
  if ( *((_DWORD *)cmd + 6) >= 2u )
  {
    *(float *)&v18 = cmd[6];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2114, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientID ) < (unsigned)( ( sizeof( *array_counter( rgp.savedScreenTimes ) ) + 0 ) )", "cmd->clientID doesn't index ARRAY_COUNT( rgp.savedScreenTimes )\n\t%i not in [0, %i)", v18, 2) )
      __debugbreak();
  }
  *(GfxCmdBufContext *)&result.m_surfaceID = execState->gfxContext;
  v3 = *(_OWORD *)&result.m_surfaceID;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
  if ( *(_DWORD *)(v3 + 11488) != 2 )
  {
    *(_OWORD *)&result.m_surfaceID = v3;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
    R_Set2D((GfxCmdBufSourceState *)v3);
  }
  v4 = *((int *)cmd + 6);
  v5 = *(_DWORD *)(v3 + 11492) - rgp.savedScreenTimes[v4];
  if ( v5 >= 0 )
  {
    v6 = *((_DWORD *)cmd + 1);
    if ( v5 < v6 )
    {
      v7 = (float)*(unsigned int *)(v3 + 11592);
      v8 = v7 * cmd[4];
      v9 = cmd[3];
      v10 = v9 + cmd[5];
      v11 = (float)*(unsigned int *)(v3 + 11596);
      v12 = v11 * cmd[5];
      v13 = cmd[2];
      v14 = v13 + cmd[4];
      R_RT_GetGlobalColor(&result, (GfxRenderTargetId)(v4 + 4));
      Surface = R_RT_Handle::GetSurface(&result);
      R_SetCodeImageTextureInternal((GfxCmdBufSourceState *)v3, 4u, &Surface->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2161)");
      _XMM0 = LODWORD(FLOAT_0_0099999998);
      *(_DWORD *)(v3 + 2736) = 1065353216;
      *(_DWORD *)(v3 + 2740) = 1065353216;
      *(_DWORD *)(v3 + 2744) = 1065353216;
      *(float *)&_XMM0 = powf_0(0.0099999998, (float)v5 / (float)v6);
      __asm { vminss  xmm1, xmm0, cs:__real@3f7d70a4 }
      *(float *)(v3 + 2748) = *(float *)&_XMM1;
      ++*(_WORD *)(v3 + 10282);
      *(vec4_t *)(v3 + 2752) = colorBlackBlank;
      ++*(_WORD *)(v3 + 10284);
      *(_DWORD *)(v3 + 2768) = 0;
      *(_QWORD *)(v3 + 2772) = 2139095039i64;
      *(_DWORD *)(v3 + 2780) = 0;
      ++*(_WORD *)(v3 + 10286);
      *(_OWORD *)&result.m_surfaceID = v3;
      RB_DrawStretchPic((GfxCmdBufContext *)&result, rgp.feedbackBlendBackbufferMaterial, 0.0, 0.0, v8, v12, v13, v9, v14, v10, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
    }
  }
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_BlendSavedScreenFlashedCmd
==============
*/
void RB_BlendSavedScreenFlashedCmd(GfxRenderCommandExecState *execState)
{
  float *cmd; 
  __int128 v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  R_RT_Image *p_m_image; 
  float v9; 
  float v10; 
  Material *feedbackReplaceBackbufferMaterial; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  R_RT_ColorHandle result; 

  cmd = (float *)execState->cmd;
  *(GfxCmdBufContext *)&result.m_surfaceID = execState->gfxContext;
  v3 = *(_OWORD *)&result.m_surfaceID;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
  if ( *(_DWORD *)(v3 + 11488) != 2 )
  {
    *(_OWORD *)&result.m_surfaceID = v3;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
    R_Set2D((GfxCmdBufSourceState *)v3);
  }
  v4 = (float)*(unsigned int *)(v3 + 11592);
  v5 = v4 * cmd[6];
  v6 = (float)*(unsigned int *)(v3 + 11596);
  v7 = v6 * cmd[7];
  R_RT_GetGlobalColor(&result, (GfxRenderTargetId)(*((_BYTE *)cmd + 32) + 4));
  p_m_image = &R_RT_Handle::GetSurface(&result)->m_image;
  if ( (_QWORD)v3 == -1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v9 = FLOAT_1_0;
  *(_QWORD *)(v3 + 7968) = p_m_image;
  v10 = 0.0;
  if ( *((_BYTE *)cmd + 4) )
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackReplaceBackbufferMaterial;
  }
  else
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackBlendBackbufferMaterial;
    v10 = cmd[2];
    v9 = cmd[3];
  }
  *(vec4_t *)(v3 + 2736) = colorBlackBlank;
  ++*(_WORD *)(v3 + 10282);
  *(float *)(v3 + 2752) = v10;
  *(float *)(v3 + 2756) = v10;
  *(float *)(v3 + 2760) = v10;
  *(float *)(v3 + 2764) = v9;
  ++*(_WORD *)(v3 + 10284);
  *(_DWORD *)(v3 + 2768) = 0;
  *(_QWORD *)(v3 + 2772) = 2139095039i64;
  *(_DWORD *)(v3 + 2780) = 0;
  ++*(_WORD *)(v3 + 10286);
  v12 = cmd[5] + cmd[7];
  v15 = cmd[4] + cmd[6];
  v14 = cmd[5];
  v13 = cmd[4];
  *(_OWORD *)&result.m_surfaceID = v3;
  RB_DrawStretchPic((GfxCmdBufContext *)&result, feedbackReplaceBackbufferMaterial, 0.0, 0.0, v5, v7, v13, v14, v15, v12, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_BlendSavedScreenPhotoCmd
==============
*/
void RB_BlendSavedScreenPhotoCmd(GfxRenderCommandExecState *execState)
{
  __int128 v2; 
  float *cmd; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  R_RT_Image *p_m_image; 
  float v9; 
  Material *feedbackReplaceBackbufferMaterial; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  R_RT_ColorHandle result; 

  if ( !execState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2223, ASSERT_TYPE_ASSERT, "(execState)", (const char *)&queryFormat, "execState") )
    __debugbreak();
  cmd = (float *)execState->cmd;
  *(GfxCmdBufContext *)&result.m_surfaceID = execState->gfxContext;
  v2 = *(_OWORD *)&result.m_surfaceID;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
  if ( *(_DWORD *)(v2 + 11488) != 2 )
  {
    *(_OWORD *)&result.m_surfaceID = v2;
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
    R_Set2D((GfxCmdBufSourceState *)v2);
  }
  v4 = (float)*(unsigned int *)(v2 + 11592);
  v5 = v4 * cmd[5];
  v6 = (float)*(unsigned int *)(v2 + 11596);
  v7 = v6 * cmd[6];
  R_RT_GetGlobalColor(&result, (GfxRenderTargetId)(*((_BYTE *)cmd + 28) + 4));
  p_m_image = &R_RT_Handle::GetSurface(&result)->m_image;
  if ( (_QWORD)v2 == -1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v9 = FLOAT_1_0;
  *(_QWORD *)(v2 + 7968) = p_m_image;
  if ( *((_BYTE *)cmd + 4) )
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackReplaceBackbufferMaterial;
  }
  else
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackBlendBackbufferMaterial;
    v9 = cmd[2];
  }
  *(float *)(v2 + 2748) = v9;
  *(_DWORD *)(v2 + 2736) = 1065353216;
  *(_DWORD *)(v2 + 2740) = 1065353216;
  *(_DWORD *)(v2 + 2744) = 1065353216;
  ++*(_WORD *)(v2 + 10282);
  *(vec4_t *)(v2 + 2752) = colorBlackBlank;
  ++*(_WORD *)(v2 + 10284);
  *(_DWORD *)(v2 + 2768) = 0;
  *(_QWORD *)(v2 + 2772) = 2139095039i64;
  *(_DWORD *)(v2 + 2780) = 0;
  ++*(_WORD *)(v2 + 10286);
  v11 = cmd[4] + cmd[6];
  v14 = cmd[3] + cmd[5];
  v13 = cmd[4];
  v12 = cmd[3];
  *(_OWORD *)&result.m_surfaceID = v2;
  RB_DrawStretchPic((GfxCmdBufContext *)&result, feedbackReplaceBackbufferMaterial, 0.0, 0.0, v5, v7, v12, v13, v14, v11, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawPointsCmd
==============
*/
void RB_DrawPointsCmd(GfxRenderCommandExecState *execState)
{
  const GfxCmdDrawPoints *cmd; 
  GfxCmdBufContext gfxContext; 
  unsigned __int8 v4; 
  int v5; 
  GfxCmdBufContext v6; 

  cmd = (const GfxCmdDrawPoints *)execState->cmd;
  gfxContext = execState->gfxContext;
  v4 = *((_BYTE *)execState->cmd + 7);
  if ( v4 == 2 )
  {
    v6 = execState->gfxContext;
    RB_DrawPoints2D(&v6, cmd);
  }
  else
  {
    if ( v4 != 3 )
    {
      v5 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2363, ASSERT_TYPE_SANITY, "( ( cmd->dimensions == 3 ) )", "( cmd->dimensions ) = %i", v5) )
        __debugbreak();
    }
    v6 = gfxContext;
    RB_DrawPoints3D(&v6, cmd);
  }
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawRect2DCmd
==============
*/
void RB_DrawRect2DCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  GfxCmdBufContext gfxContext; 
  unsigned __int16 v4; 
  float *v5; 
  __int64 v6; 
  float v7; 
  float v8; 
  unsigned int v9; 
  float v10; 
  float v11; 
  unsigned int v12; 
  GfxCmdBufContext v13; 

  cmd = (char *)execState->cmd;
  gfxContext = execState->gfxContext;
  if ( *((_BYTE *)execState->cmd + 6) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "rect2d");
    v4 = *((_WORD *)cmd + 2);
    if ( v4 )
    {
      v5 = (float *)(cmd + 20);
      v6 = v4;
      do
      {
        v7 = *(v5 - 2);
        v8 = *(v5 - 3);
        v12 = *((_DWORD *)v5 + 1);
        v11 = *v5;
        v10 = *(v5 - 1);
        v13 = gfxContext;
        RB_DrawStretchPic(&v13, rgp.whiteMaterial, v8, v7, v10, v11, 0.0, 0.0, 1.0, 1.0, v12, GFX_PRIM_STATS_DEBUG);
        v5 += 5;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "rect2dlines");
    v9 = *((unsigned __int16 *)cmd + 2);
    v13 = gfxContext;
    RB_DrawRectOutline2D(&v13, v9, 1, (const GfxCmdDrawRect2D::Rect *)(cmd + 8));
  }
  Sys_ProfEndNamedEvent();
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawLinesCmd
==============
*/
void RB_DrawLinesCmd(GfxRenderCommandExecState *execState)
{
  unsigned __int8 *cmd; 
  GfxCmdBufContext gfxContext; 
  char v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int fmt; 
  int v10; 
  GfxCmdBufContext v11; 

  cmd = (unsigned __int8 *)execState->cmd;
  gfxContext = execState->gfxContext;
  v4 = *((_BYTE *)execState->cmd + 7);
  if ( (v4 & 3) == 2 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "lines2d");
    v5 = cmd[6];
    v6 = *((unsigned __int16 *)cmd + 2);
    v11 = gfxContext;
    RB_DrawLines2D(&v11, v6, v5, (const GfxPointVertex *)(cmd + 8));
  }
  else
  {
    if ( (v4 & 3) != 3 )
    {
      v10 = v4 & 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2791, ASSERT_TYPE_SANITY, "( ( cmd->dimensions == 3 ) )", "( cmd->dimensions ) = %i", v10) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "lines3d");
    v7 = cmd[6];
    v8 = *((unsigned __int16 *)cmd + 2);
    fmt = (cmd[7] >> 2) & 1;
    v11 = gfxContext;
    RB_DrawLines3D(&v11, v8, v7, (const GfxPointVertex *)(cmd + 8), fmt);
  }
  Sys_ProfEndNamedEvent();
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawTrianglesCmd
==============
*/
void RB_DrawTrianglesCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  int v3; 
  int v4; 
  const Material *mtlOverride; 
  const vec3_t *v6; 
  const unsigned __int16 *v7; 
  const GfxColor *v8; 
  const vec2_t *v9; 
  unsigned __int8 v10; 
  MaterialTechniqueType v11; 
  __int16 v12; 
  const vec4_t *v13; 
  GfxCmdBufContext gfxContext; 

  cmd = (char *)execState->cmd;
  v3 = *((unsigned __int16 *)execState->cmd + 10);
  v4 = 16 * v3 + 4 * (3 * v3 + 6);
  mtlOverride = execState->mtlOverride;
  v6 = (const vec3_t *)&cmd[16 * v3 + 24];
  v7 = (const unsigned __int16 *)&cmd[v4 + 4 * v3 + 8 * v3];
  v9 = (const vec2_t *)&cmd[v4 + 4 * v3];
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v10 = cmd[16];
  v11 = *((_DWORD *)cmd + 1);
  v8 = (const GfxColor *)&cmd[16 * v3 + 4 * (3 * v3 + 6)];
  v13 = (const vec4_t *)(cmd + 24);
  v12 = *((_WORD *)cmd + 9);
  gfxContext = execState->gfxContext;
  if ( v10 == 2 )
    RB_DrawTriangles_Internal2D(&gfxContext, mtlOverride, v11, 2u, v12, v7, v3, v13, v6, v8, v9);
  else
    RB_DrawTriangles_Internal3D(&gfxContext, mtlOverride, v11, v10, v12, v7, v3, v13, v6, v8, v9);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_EndSurfaceCmd
==============
*/
void RB_EndSurfaceCmd(GfxRenderCommandExecState *execState)
{
  GfxCmdBufContext gfxContext; 

  gfxContext = execState->gfxContext;
  RB_EndSurfaceIfNeeded(&gfxContext);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetCodeTextureCmd
==============
*/
void RB_SetCodeTextureCmd(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  const char *v3; 
  const GfxImage *v4; 
  unsigned int v5; 
  GfxCmdBufContext state; 
  GfxCmdBufContext v7; 

  cmd = execState->cmd;
  state = execState->gfxContext;
  v7 = state;
  RB_EndSurfaceIfNeeded(&v7);
  if ( r_profMaterial->current.integer > 0 )
  {
    v3 = j_va("RB_SetCodeTextureCmd %s", **((const char ***)cmd + 1));
    R_ProfSetMarker(state.state, v3);
  }
  v4 = (const GfxImage *)*((_QWORD *)cmd + 1);
  v5 = *((_DWORD *)cmd + 1);
  if ( !state.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  R_SetInputCodeImageTextureInternal(&state.source->input, v5, v4, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2925)");
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetViewportCmd
==============
*/
void RB_SetViewportCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  GfxCmdBufContext v3; 
  GfxCmdBufSourceState *source[2]; 

  cmd = (char *)execState->cmd;
  *(GfxCmdBufContext *)source = execState->gfxContext;
  v3 = *(GfxCmdBufContext *)source;
  RB_EndSurfaceIfNeeded(&v3);
  R_SetViewportStruct(source[0], (const GfxViewport *)(cmd + 4));
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetScissorCmd
==============
*/
void RB_SetScissorCmd(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  int x; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  GfxCmdBufContext v13; 
  GfxCmdBufContext gfxContext; 
  GfxViewport scissorViewport; 

  cmd = execState->cmd;
  gfxContext = execState->gfxContext;
  v13 = gfxContext;
  RB_EndSurfaceIfNeeded(&v13);
  _XMM0 = gfxContext;
  __asm { vpextrq r15, xmm0, 1 }
  x = _R15->viewport.x;
  v6 = x + cmd[1];
  v7 = v6 + cmd[3];
  v8 = _R15->viewport.y + cmd[2];
  v9 = v8 + cmd[4];
  v10 = I_clamp(v6, x, x + _R15->viewport.width);
  LODWORD(cmd) = I_clamp(v7, _R15->viewport.x, _R15->viewport.x + _R15->viewport.width);
  v11 = I_clamp(v8, _R15->viewport.y, _R15->viewport.y + _R15->viewport.height);
  v12 = I_clamp(v9, _R15->viewport.y, _R15->viewport.y + _R15->viewport.height);
  scissorViewport.x = v10;
  scissorViewport.height = v12 - v11;
  scissorViewport.y = v11;
  scissorViewport.width = (_DWORD)cmd - v10;
  R_HW_EnableScissor2D(_R15, &scissorViewport);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_ClearScissorCmd
==============
*/
void RB_ClearScissorCmd(GfxRenderCommandExecState *execState)
{
  GfxCmdBufContext v4; 
  GfxCmdBufContext gfxContext; 

  gfxContext = execState->gfxContext;
  v4 = gfxContext;
  RB_EndSurfaceIfNeeded(&v4);
  _XMM0 = gfxContext;
  __asm { vpextrq rcx, xmm0, 1; state }
  R_HW_DisableScissor2D(_RCX);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawText2DCmd
==============
*/
void RB_DrawText2DCmd(GfxRenderCommandExecState *execState)
{
  const GfxCmdDrawText2D *cmd; 
  GfxCmdBufContext gfxContext; 
  int v3; 
  const FontGlowStyle *v4; 
  const FontDecodeStyle *p_decodeStyle; 
  unsigned __int16 totalByteSize; 
  unsigned __int16 byteCount; 
  GfxCmdDrawText2D::Entry *entry; 
  GfxCmdDrawText2D::Entry *v9; 
  float y; 
  int fontHeight; 
  GfxFont *font; 
  unsigned __int64 v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  GfxColor color; 
  int v17; 
  int renderFlags; 
  int v19; 
  int cursorPos; 
  char cursorLetter; 
  const Material *fontMaterial; 
  const Material *iconsMaterial; 
  GfxCmdBufContext v24; 
  DrawTextPositionSettings v25; 

  cmd = (const GfxCmdDrawText2D *)execState->cmd;
  gfxContext = execState->gfxContext;
  v3 = *((_DWORD *)execState->cmd + 12);
  v4 = (const FontGlowStyle *)((char *)execState->cmd + 80);
  v25.mode = POSITION_2D;
  if ( (v3 & 0x10) == 0 )
    v4 = NULL;
  p_decodeStyle = &cmd->decodeStyle;
  if ( (v3 & 0x40) == 0 )
    p_decodeStyle = NULL;
  FastSinCos(cmd->rotation * 0.017453292, v25.position3D.xDirection.v, &v25.position3D.startPosition.v[2]);
  v25.xScale = cmd->xScale;
  v25.yScale = cmd->yScale;
  v25.tracking = cmd->tracking;
  VerifyGFXDrawText2DCmd(cmd, "RB_DrawText2DCmd entry");
  totalByteSize = cmd->totalByteSize;
  byteCount = cmd->header.byteCount;
  if ( totalByteSize > byteCount )
  {
    v19 = byteCount;
    v17 = totalByteSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4056, ASSERT_TYPE_ASSERT, "( cmd->totalByteSize ) <= ( cmd->header.byteCount )", "%s <= %s\n\t%i, %i", "cmd->totalByteSize", "cmd->header.byteCount", v17, v19) )
      __debugbreak();
  }
  entry = cmd->entry;
  v9 = (GfxCmdDrawText2D::Entry *)((char *)cmd + cmd->totalByteSize);
  do
  {
    y = entry->y;
    v25.position3D.startPosition.v[0] = entry->x;
    v25.position3D.startPosition.v[1] = y;
    fontHeight = cmd->fontHeight;
    font = cmd->font;
    iconsMaterial = cmd->iconsMaterial;
    fontMaterial = cmd->fontMaterial;
    cursorLetter = cmd->cursorLetter;
    cursorPos = cmd->cursorPos;
    renderFlags = cmd->renderFlags;
    color = entry->color;
    v24 = gfxContext;
    DrawText(&v24, entry->text, font, fontHeight, &v25, color, 0x7FFFFFFF, renderFlags, cursorPos, cursorLetter, fontMaterial, iconsMaterial, p_decodeStyle, v4);
    VerifyGFXDrawText2DCmd(cmd, "RB_DrawText2DCmd loop");
    v13 = -1i64;
    do
      ++v13;
    while ( entry->text[v13] );
    v14 = (unsigned int)v13;
    if ( v13 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v13, "unsigned", v13) )
      __debugbreak();
    v15 = (v14 + 16) & 0xFFFFFFFFFFFFFFFCui64;
    if ( v15 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v15, "unsigned", v15) )
      __debugbreak();
    entry = (GfxCmdDrawText2D::Entry *)((char *)entry + (unsigned int)v15);
    if ( entry > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4076, ASSERT_TYPE_ASSERT, "(nextPtr <= endPtr)", (const char *)&queryFormat, "nextPtr <= endPtr") )
      __debugbreak();
  }
  while ( entry < v9 );
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawText3DInSpaceCmd
==============
*/
void RB_DrawText3DInSpaceCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  unsigned int v3; 
  GfxCmdBufContext gfxContext; 

  cmd = (char *)execState->cmd;
  v3 = *((_DWORD *)execState->cmd + 14);
  gfxContext = execState->gfxContext;
  RB_DrawTextInSpace(&gfxContext, cmd + 60, *((GfxFont **)cmd + 3), (const vec3_t *)(cmd + 8), *((const float *)cmd + 1), (const vec3_t *)(cmd + 32), (const vec3_t *)(cmd + 44), v3, NULL, 0);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_DrawText3DUICmd
==============
*/
void RB_DrawText3DUICmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  int v3; 
  const char *v4; 
  float v5; 
  float v6; 
  float v7; 
  GfxCmdBufContext gfxContext; 
  const FontGlowStyle *v9; 
  const FontDecodeStyle *v10; 
  GfxColor v11; 
  int v12; 
  GfxFont *v13; 
  int v14; 
  const Material *v15; 
  const Material *v16; 
  const FontDecodeStyle *v17; 
  GfxCmdBufContext v18; 
  DrawTextPositionSettings v19; 

  cmd = (char *)execState->cmd;
  v19.mode = POSITION_3D;
  v3 = *((_DWORD *)cmd + 42);
  v4 = cmd + 172;
  v5 = *((float *)cmd + 39);
  v6 = (float)cmd[164];
  *(__m256i *)v19.position3D.startPosition.v = *(__m256i *)(cmd + 4);
  v19.position3D.yDirection.v[2] = *((float *)cmd + 9);
  v19.yScale = *((float *)cmd + 40);
  v19.xScale = v5;
  v7 = (float)(v6 / v5) + 0.5;
  gfxContext = execState->gfxContext;
  v9 = (const FontGlowStyle *)(cmd + 60);
  if ( (v3 & 0x10) == 0 )
    v9 = NULL;
  v19.tracking = (int)v7;
  v10 = (const FontDecodeStyle *)(cmd + 40);
  if ( (v3 & 0x40) == 0 )
    v10 = NULL;
  v17 = v10;
  v16 = (const Material *)*((_QWORD *)cmd + 16);
  v15 = (const Material *)*((_QWORD *)cmd + 15);
  v11 = *(GfxColor *)(cmd + 136);
  v14 = v3;
  v12 = *((_DWORD *)cmd + 38);
  v13 = (GfxFont *)*((_QWORD *)cmd + 18);
  v18 = gfxContext;
  DrawText(&v18, v4, v13, v12, &v19, v11, 0x7FFFFFFF, v14, 0, 0, v15, v16, v17, v9);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_ProjectionSetCmd
==============
*/
void RB_ProjectionSetCmd(GfxRenderCommandExecState *execState)
{
  GfxCmdBufContext gfxContext; 
  int v3; 
  GfxCmdBufContext v4; 

  gfxContext = execState->gfxContext;
  v3 = *((_DWORD *)execState->cmd + 1);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      v4 = gfxContext;
      RB_EndSurfaceIfNeeded(&v4);
      R_Set3D(gfxContext.source);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4154, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid projection type") )
    {
      __debugbreak();
    }
  }
  else
  {
    v4 = gfxContext;
    RB_EndSurfaceIfNeeded(&v4);
    R_Set2D(gfxContext.source);
  }
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_UIRttBeginCmd
==============
*/
void RB_UIRttBeginCmd(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxCmdBufSourceState *source; 
  __m256i v6; 
  __int64 v7; 
  GfxViewport sceneViewport; 
  const GfxBackEndData *v10; 
  __m256i *v11; 
  __int64 v12; 
  const char *Name; 
  const char *v14; 
  LocalClientNum_t ClientIndexForRTT; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  unsigned int v19; 
  double DisplayHdrUiMaxLuminance; 
  _QWORD v21[5]; 
  int v22; 
  R_RT_Handle v23; 
  GfxViewport viewport; 
  R_RT_ColorHandle result; 
  __m256i v26; 
  __m256i v27; 
  __m256i v28; 
  __m256i v29; 
  __m256i v30; 
  __m256i v31; 
  _BYTE v32[40]; 
  R_RT_Group v33; 

  _XMM6 = execState->gfxContext;
  cmd = execState->cmd;
  source = execState->gfxContext.source;
  R_Set2D(source);
  *(GfxCmdBufContext *)&v21[1] = _XMM6;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v21[1]);
  __asm { vpextrq rdi, xmm6, 1 }
  v6 = *(__m256i *)(_RDI + 2728);
  v7 = *(_QWORD *)(_RDI + 2792);
  v26 = *(__m256i *)(_RDI + 2600);
  v27 = *(__m256i *)(_RDI + 2632);
  v28 = *(__m256i *)(_RDI + 2664);
  v29 = *(__m256i *)(_RDI + 2696);
  _XMM0 = *(_OWORD *)(_RDI + 2580);
  v30 = v6;
  v31 = *(__m256i *)(_RDI + 2760);
  sceneViewport = source->sceneViewport;
  *(_QWORD *)v32 = v7;
  *(GfxViewport *)&v32[8] = sceneViewport;
  *(_OWORD *)&v32[24] = _XMM0;
  if ( (unsigned int)_XMM0 < sceneViewport.x || *(_DWORD *)&v32[32] > *(_DWORD *)&v32[16] || DWORD1(_XMM0) < sceneViewport.y || *(_DWORD *)&v32[36] > *(_DWORD *)&v32[20] )
    *(GfxViewport *)&v32[24] = sceneViewport;
  v10 = *(const GfxBackEndData **)(_RDI + 2504);
  v11 = (__m256i *)&v10->rttState[v10->rttDepth];
  *v11 = v26;
  v11[1] = v27;
  v11[2] = v28;
  v11[3] = v29;
  v11[4] = v30;
  v11[5] = v31;
  v12 = *(_QWORD *)&v32[32];
  v11[6] = *(__m256i *)v32;
  v11[7].m256i_i64[0] = v12;
  if ( ++v10->rttDepth > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4205, ASSERT_TYPE_ASSERT, "(data->rttDepth <= 1)", (const char *)&queryFormat, "data->rttDepth <= LUI_MAX_RTT_DEPTH") )
    __debugbreak();
  Name = R_RTT_GetName(cmd[1]);
  v14 = j_va("Update RTT %s", Name);
  R_ProfBeginNamedEvent((CmdBufState *)_RDI, v14);
  ClientIndexForRTT = RB_GetClientIndexForRTT(v10);
  RB_RTT_GetSurface(&result, ClientIndexForRTT, &backEndData->rttContext, cmd[1]);
  LOWORD(v21[1]) = 0;
  LODWORD(v21[2]) = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v21[3] = _XMM0;
  if ( (result.m_surfaceID & 0x7FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4210, ASSERT_TYPE_ASSERT, "(colorHandle != R_RT_ColorHandle::Null())", (const char *)&queryFormat, "colorHandle != R_RT_ColorHandle::Null()", v21[1], v21[2], v21[3], v21[4]) )
    __debugbreak();
  *(R_RT_ColorHandle *)&v21[1] = result;
  R_AddRenderTargetTransition((GfxCmdBufState *)_RDI, (R_RT_ColorHandle *)&v21[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions((CmdBufState *)_RDI);
  *(R_RT_ColorHandle *)&v21[1] = result;
  R_RT_Group::AssignColor(&v33, (R_RT_ColorHandle *)&v21[1]);
  v26 = *(__m256i *)&v33.m_colorRtCount;
  v27 = *(__m256i *)&v33.m_colorRts[0].m_tracking.m_location;
  v28 = *(__m256i *)&v33.m_colorRts[1].m_tracking.m_location;
  v29 = *(__m256i *)&v33.m_colorRts[2].m_tracking.m_location;
  v30 = *(__m256i *)&v33.m_colorRts[3].m_tracking.m_location;
  v31 = *(__m256i *)&v33.m_depthRt.m_tracking.m_location;
  *(_QWORD *)v32 = v33.m_vrsRt.m_tracking.m_location;
  *(__m256i *)&v21[1] = *(__m256i *)R_RT_Group::GetValidRt((R_RT_Group *)&v26, &v23);
  height = R_RT_Handle::GetSurface((R_RT_Handle *)&v21[1])->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)&v21[1]);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  *(R_RT_ColorHandle *)&v21[1] = result;
  R_RT_Group::AssignColor((R_RT_Group *)&v26, (R_RT_ColorHandle *)&v21[1]);
  *(__m256i *)&v33.m_colorRtCount = v26;
  *(__m256i *)&v33.m_colorRts[0].m_tracking.m_location = v27;
  *(__m256i *)&v33.m_colorRts[1].m_tracking.m_location = v28;
  *(__m256i *)&v33.m_colorRts[2].m_tracking.m_location = v29;
  *(__m256i *)&v33.m_colorRts[3].m_tracking.m_location = v30;
  *(__m256i *)&v33.m_depthRt.m_tracking.m_location = v31;
  v33.m_vrsRt.m_tracking.m_location = *(const char **)v32;
  *(GfxCmdBufContext *)&v21[1] = _XMM6;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v21[1], &v33, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(4215)");
  v19 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
  viewport.width = R_RT_Handle::GetSurface(&result)->m_image.m_base.width;
  *(_QWORD *)&viewport.x = 0i64;
  viewport.height = v19;
  R_SetViewportStruct(source, &viewport);
  R_SetViewportAndScissorSeparate((GfxCmdBufState *)_RDI, &viewport, &viewport);
  R_Set2D(source);
  R_ClearScreen((GfxCmdBufState *)_RDI, 0xFu, 0);
  R_UpdateViewport(source, &viewport);
  v22 = 4;
  DisplayHdrUiMaxLuminance = R_GetDisplayHdrUiMaxLuminance();
  source->input.consts[54].v[0] = *(float *)&v22;
  source->input.consts[54].v[1] = *(float *)&DisplayHdrUiMaxLuminance;
  *(_QWORD *)&source->input.consts[54].xyz.z = 1065353216i64;
  ++source->constVersions[54];
  *(GfxCmdBufContext *)&v21[1] = _XMM6;
  RB_UiClut_SetParameters((const GfxCmdBufContext *)&v21[1]);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_UIRttEndCmd
==============
*/
void RB_UIRttEndCmd(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  LocalClientNum_t ClientIndexForRTT; 
  const GfxBackEndData *data; 
  __int64 v9; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  _QWORD v12[5]; 
  R_RT_Handle result; 
  R_RT_ColorHandle v14; 
  _OWORD v15[12]; 
  __int128 v16; 
  GfxViewport viewport_8; 
  __int64 scissor_8; 

  _XMM6 = execState->gfxContext;
  cmd = execState->cmd;
  R_Set2D(execState->gfxContext.source);
  *(GfxCmdBufContext *)&v12[1] = _XMM6;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v12[1]);
  ClientIndexForRTT = RB_GetClientIndexForRTT(backEndData);
  RB_RTT_NotifyUpdated(ClientIndexForRTT, cmd[1]);
  __asm { vpextrq rsi, xmm6, 1 }
  R_ProfEndNamedEvent(_RSI);
  RB_RTT_GetSurface(&v14, ClientIndexForRTT, &backEndData->rttContext, cmd[1]);
  LOWORD(v12[1]) = 0;
  LODWORD(v12[2]) = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v12[3] = _XMM0;
  if ( (v14.m_surfaceID & 0x7FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4250, ASSERT_TYPE_ASSERT, "(colorHandle != R_RT_ColorHandle::Null())", (const char *)&queryFormat, "colorHandle != R_RT_ColorHandle::Null()", v12[1], v12[2], v12[3], v12[4]) )
    __debugbreak();
  *(R_RT_ColorHandle *)&v12[1] = v14;
  R_AddRenderTargetTransition(_RSI, (R_RT_ColorHandle *)&v12[1], RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RSI);
  data = _RSI->data;
  if ( data->rttDepth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4256, ASSERT_TYPE_ASSERT, "(data->rttDepth > 0 && data->rttDepth <= 1)", (const char *)&queryFormat, "data->rttDepth > 0 && data->rttDepth <= LUI_MAX_RTT_DEPTH") )
    __debugbreak();
  v9 = (__int64)&data->rttState[--data->rttDepth];
  v15[0] = *(_OWORD *)v9;
  v15[1] = *(_OWORD *)(v9 + 16);
  v15[2] = *(_OWORD *)(v9 + 32);
  v15[3] = *(_OWORD *)(v9 + 48);
  v15[4] = *(_OWORD *)(v9 + 64);
  v15[5] = *(_OWORD *)(v9 + 80);
  v15[6] = *(_OWORD *)(v9 + 96);
  v15[7] = *(_OWORD *)(v9 + 112);
  v15[8] = *(_OWORD *)(v9 + 128);
  v15[9] = *(_OWORD *)(v9 + 144);
  v15[10] = *(_OWORD *)(v9 + 160);
  v15[11] = *(_OWORD *)(v9 + 176);
  v16 = *(_OWORD *)(v9 + 192);
  viewport_8 = *(GfxViewport *)(v9 + 208);
  scissor_8 = *(_QWORD *)(v9 + 224);
  *(__m256i *)&v12[1] = *(__m256i *)R_RT_Group::GetValidRt((R_RT_Group *)v15, &result);
  height = R_RT_Handle::GetSurface((R_RT_Handle *)&v12[1])->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)&v12[1]);
  R_SetRenderTargetSize(_XMM6.source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  *(GfxCmdBufContext *)&v12[1] = _XMM6;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v12[1], (const R_RT_Group *)v15, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(4260)");
  R_SetViewportStruct(_XMM6.source, (const GfxViewport *)((char *)&v16 + 8));
  R_SetViewportAndScissorSeparate(_RSI, (const GfxViewport *)((char *)&v16 + 8), (const GfxViewport *)&viewport_8.width);
  R_Set2D(_XMM6.source);
  R_UpdateViewport(_XMM6.source, (const GfxViewport *)((char *)&v16 + 8));
  *(GfxCmdBufContext *)&v12[1] = _XMM6;
  RB_SetUIColorimetryParams((GfxCmdBufContext *)&v12[1]);
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUIScopeFilter
==============
*/
void RB_SetUIScopeFilter(GfxRenderCommandExecState *execState)
{
  _BYTE *cmd; 
  __int64 v5; 
  const char *v6; 
  float v8; 
  GfxCmdBufSourceState *source; 

  _XMM0 = execState->gfxContext;
  cmd = execState->cmd;
  __asm { vpextrq rsi, xmm0, 1 }
  source = _XMM0.source;
  v5 = *(_QWORD *)(_RSI + 2504);
  if ( r_profMaterial->current.integer > 0 )
  {
    v6 = j_va("RB_SetUIScopeFilter %d scopeBufferWeight %d", *((unsigned int *)cmd + 1), cmd[8] != 0);
    R_ProfSetMarker((CmdBufState *)_RSI, v6);
  }
  _XMM3 = LODWORD(FLOAT_1_0);
  v8 = (float)*((unsigned int *)cmd + 1);
  _XMM0 = *(unsigned __int8 *)(v5 + 7710781);
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = (unsigned __int8)cmd[8];
  __asm
  {
    vblendvps xmm5, xmm3, xmm4, xmm2
    vpcmpeqd xmm2, xmm0, xmm1
  }
  source->input.consts[86].v[0] = v8;
  source->input.consts[86].v[1] = *(float *)&_XMM5;
  source->input.consts[86].v[2] = 0.0;
  __asm { vblendvps xmm0, xmm3, xmm4, xmm2 }
  source->input.consts[86].v[3] = *(float *)&_XMM0;
  ++source->constVersions[86];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_SetUIPixelShapeParams
==============
*/
void RB_SetUIPixelShapeParams(GfxRenderCommandExecState *execState)
{
  float v1; 
  GfxCmdBufSourceState *source; 

  v1 = *((float *)execState->cmd + 2);
  source = execState->gfxContext.source;
  source->input.consts[156].v[0] = *((float *)execState->cmd + 1);
  source->input.consts[156].v[1] = v1;
  *(_QWORD *)&source->input.consts[156].xyz.z = 0i64;
  ++source->constVersions[156];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
DrawText_Advance
==============
*/
void DrawText_Advance(const vec3_t *from, const DrawTextPositionSettings *positionSettings, float deltaX, float deltaY, vec3_t *outTo)
{
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  v5 = deltaX * positionSettings->xScale;
  v6 = deltaY * positionSettings->yScale;
  if ( positionSettings->mode )
  {
    v7 = (float)(v5 * positionSettings->position3D.xDirection.v[0]) + from->v[0];
    outTo->v[0] = v7;
    v8 = (float)(v5 * positionSettings->position3D.xDirection.v[1]) + from->v[1];
    outTo->v[1] = v8;
    v9 = (float)(v5 * positionSettings->position3D.xDirection.v[2]) + from->v[2];
    outTo->v[2] = v9;
    outTo->v[0] = (float)(v6 * positionSettings->position3D.yDirection.v[0]) + v7;
    outTo->v[1] = (float)(v6 * positionSettings->position3D.yDirection.v[1]) + v8;
    outTo->v[2] = (float)(v6 * positionSettings->position3D.yDirection.v[2]) + v9;
  }
  else
  {
    outTo->v[0] = v5 + from->v[0];
    outTo->v[1] = v6 + from->v[1];
  }
}

/*
==============
DrawText_Generate3DCharVerts
==============
*/
void DrawText_Generate3DCharVerts(const vec3_t *position, const DrawTextPositionSettings *positionSettings, float glyphWidth, float glyphHeight, vec3_t (*outCharVertsWorld)[4])
{
  DrawTextMode mode; 
  float v9; 
  float v10; 
  vec3_t *v11; 
  const DrawTextPositionSettings *v12; 
  vec3_t *v13; 
  const DrawTextPositionSettings *v14; 

  if ( positionSettings->mode != POSITION_3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3315, ASSERT_TYPE_ASSERT, "(positionSettings->mode == DrawTextMode::POSITION_3D)", (const char *)&queryFormat, "positionSettings->mode == DrawTextMode::POSITION_3D") )
    __debugbreak();
  mode = positionSettings->mode;
  v9 = position->v[0];
  (*outCharVertsWorld)[0].v[0] = position->v[0];
  v10 = position->v[1];
  if ( mode )
  {
    (*outCharVertsWorld)[0].v[1] = v10;
    (*outCharVertsWorld)[0].v[2] = position->v[2];
    (*outCharVertsWorld)[0].v[0] = v9;
  }
  (*outCharVertsWorld)[0].v[1] = v10;
  DrawText_Advance(position, positionSettings, glyphWidth, 0.0, &(*outCharVertsWorld)[1]);
  DrawText_Advance(position, v12, glyphWidth, glyphHeight, v11 + 2);
  DrawText_Advance(position, v14, 0.0, glyphHeight, v13 + 3);
}

/*
==============
DumpGFXDrawText2DCmd
==============
*/
void DumpGFXDrawText2DCmd(const GfxCmdDrawText2D *cmd, const char *location)
{
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  const GfxCmdDrawText2D *v7; 
  char *v8; 
  GfxCmdDrawText2D::Entry *entry; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  char *v12; 
  double y; 
  double x; 
  __int64 v15; 
  __int64 v16; 

  Com_Printf(16, "******************************************\n");
  Com_Printf(16, "******************************************\n");
  Com_Printf(16, "******************************************\n");
  Com_Printf(16, "Start dump from %s\n", location);
  Com_Printf(16, "GfxCmdDrawText2D command %p, size %u, totalBytesUsed %u\n", cmd, cmd->header.byteCount, cmd->totalByteSize);
  Com_Printf(16, "data:\n");
  v4 = 0;
  v5 = 0;
  v6 = ((unsigned int)cmd->header.byteCount + 3) >> 2;
  if ( v6 )
  {
    v7 = cmd;
    do
    {
      Com_Printf(16, "%u,", *(_DWORD *)&v7->header);
      if ( (v5 & 7) == 7 )
        Com_Printf(16, "\n");
      ++v5;
      v7 = (const GfxCmdDrawText2D *)((char *)v7 + 4);
    }
    while ( v5 < v6 );
  }
  Com_Printf(16, "\nentries:\n");
  v8 = (char *)cmd + cmd->totalByteSize;
  entry = cmd->entry;
  while ( 1 )
  {
    v10 = -1i64;
    do
      ++v10;
    while ( entry->text[v10] );
    if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v10) )
      __debugbreak();
    v11 = ((unsigned int)v10 + 16i64) & 0xFFFFFFFFFFFFFFFCui64;
    if ( v11 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v11, "unsigned", v11) )
      __debugbreak();
    v12 = (char *)entry + (unsigned int)v11;
    y = entry->y;
    x = entry->x;
    LODWORD(v16) = (v10 + 16) & 0xFFFFFFFC;
    LODWORD(v15) = v10;
    if ( v12 > v8 )
    {
      Com_Printf(16, " %u: entry = %p, pos = (%f, %f), textLen = %u, entryLen = %u\n", v4, entry, x, y, v15, v16);
      Com_Printf(16, " **** nextPtr = %p, endPtr = %p\n", (char *)entry + (unsigned int)v11, v8);
    }
    else
    {
      Com_Printf(16, " %u: entry = %p, pos = (%f, %f), textLen = %u, entryLen = %u, text = '%s'\n", v4, entry, x, y, v15, v16, entry->text);
    }
    if ( v12 >= v8 )
      break;
    entry = (GfxCmdDrawText2D::Entry *)((char *)entry + (unsigned int)v11);
    ++v4;
  }
  Com_Printf(16, "Finish dump from %s\n", location);
}

/*
==============
RB_AdvanceToNextRenderCmd
==============
*/
void RB_AdvanceToNextRenderCmd(GfxRenderCommandExecState *execState)
{
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
RB_ApplyUVDilation
==============
*/
void RB_ApplyUVDilation(const vec2_t (*oldVerts)[4], const vec4_t (*newVerts)[4], vec4_t (*outUVs)[4])
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v11; 
  float v12; 
  float v13; 
  float *v14; 
  signed __int64 v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  vec4_t vec; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> dst; 
  tmat44_t<vec4_t> out; 

  v3 = (*oldVerts)[0].v[0];
  v4 = (*oldVerts)[0].v[1];
  v5 = (*oldVerts)[1].v[0] - (*oldVerts)[0].v[0];
  v6 = (*oldVerts)[3].v[0] - (*oldVerts)[0].v[0];
  v7 = (*oldVerts)[1].v[1] - v4;
  v8 = (*oldVerts)[3].v[1];
  mat.m[0].v[2] = 0.0;
  mat.m[0].v[3] = 0.0;
  mat.m[1].v[2] = 0.0;
  mat.m[1].v[3] = 0.0;
  *(__m256i *)mat.row2.v = _ymm;
  mat.m[0].v[0] = v5;
  mat.m[0].v[1] = v6;
  mat.m[1].v[0] = v7;
  mat.m[1].v[1] = v8 - v4;
  MatrixInverse44Aligned(&mat, &dst);
  MatrixTranspose44Aligned(&dst, &out);
  v11 = (*outUVs)[0].v[0];
  v12 = (*outUVs)[0].v[1];
  v13 = (*outUVs)[2].v[0] - (*outUVs)[0].v[0];
  v14 = &(*newVerts)[0].v[2];
  v15 = (char *)outUVs - (char *)newVerts;
  v16 = 4i64;
  v17 = (*outUVs)[2].v[1] - v12;
  do
  {
    v18 = *(v14 - 2) - v3;
    vec.v[1] = *(v14 - 1) - v4;
    v19 = v14[1];
    vec.v[0] = v18;
    v20 = *v14;
    vec.v[3] = v19;
    vec.v[2] = v20;
    MatrixTransformVector44Aligned(&vec, &out, (vec4_t *)outUVs);
    *(float *)((char *)v14 + v15 - 8) = (float)(v13 * *(float *)((char *)v14 + v15 - 8)) + v11;
    outUVs = (vec4_t (*)[4])((char *)outUVs + 16);
    *(float *)((char *)v14 + v15 - 4) = (float)(v17 * *(float *)((char *)v14 + v15 - 4)) + v12;
    v14 += 4;
    --v16;
  }
  while ( v16 );
}

/*
==============
RB_ApplyVertexDilation
==============
*/
char RB_ApplyVertexDilation(const vec2_t *inVertex, const vec2_t *inNext, const vec2_t *inPrev, vec4_t *outVertex)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v10; 
  float v11; 
  float v12; 
  char result; 
  bool v14; 
  vec3_t v0; 
  vec3_t v1; 
  vec3_t v17; 
  vec3_t cross; 
  vec3_t v19; 

  v4 = inPrev->v[1];
  v5 = inVertex->v[0];
  v6 = inVertex->v[1];
  v7 = inNext->v[0];
  v8 = inNext->v[1];
  v1.v[0] = inPrev->v[0];
  v1.v[1] = v4;
  v0.v[0] = v5 - v1.v[0];
  v0.v[1] = v6 - v4;
  v17.v[0] = v5;
  v17.v[1] = v6;
  v17.v[2] = FLOAT_1_0;
  v1.v[2] = FLOAT_1_0;
  v0.v[2] = 0.0;
  Vec3Cross(&v0, &v1, &cross);
  v0.v[0] = v7 - v5;
  v0.v[1] = v8 - v6;
  Vec3Cross(&v0, &v17, &v19);
  cross.v[2] = cross.v[2] - (float)((float)(COERCE_FLOAT(LODWORD(cross.v[1]) & _xmm) * 0.5) + (float)(COERCE_FLOAT(LODWORD(cross.v[0]) & _xmm) * 0.5));
  v19.v[2] = v19.v[2] - (float)((float)(COERCE_FLOAT(LODWORD(v19.v[1]) & _xmm) * 0.5) + (float)(COERCE_FLOAT(LODWORD(v19.v[0]) & _xmm) * 0.5));
  Vec3Cross(&cross, &v19, &v0);
  v10 = v0.v[2];
  v11 = v0.v[0];
  v12 = v0.v[1];
  result = 0;
  v14 = v0.v[2] == 0.0;
  outVertex->v[0] = v0.v[0];
  outVertex->v[1] = v12;
  outVertex->v[3] = v10;
  outVertex->v[2] = 0.0;
  if ( v14 )
    return 1;
  outVertex->v[1] = v12 * (float)(1.0 / v10);
  outVertex->v[0] = v11 * (float)(1.0 / v10);
  outVertex->v[2] = 0.0;
  outVertex->v[3] = 1.0;
  return result;
}

/*
==============
RB_Async2D_InitContext
==============
*/
void RB_Async2D_InitContext(GfxAsync2DRenderData *data, GfxCmdBuf *cmdBuf, const bool receivePPFX)
{
  const GfxViewInfo *viewInfo; 
  GfxBackEndData *gfxData; 
  bool v8; 
  GfxDevice *device; 
  GfxConstantBufferAllocations *p_constantBufferAllocations; 
  __m256i sceneColor; 
  __m256i displayColor; 
  GfxCmdBufContext v13; 
  const GfxImage *universalClut; 
  const GfxImage *v15; 
  const GfxImage *resolvedScene; 
  const GfxWrappedBuffer *exposureBuffer; 
  GfxCmdBufContext gfxContext; 
  R_RT_ColorHandle sceneDepth; 
  R_RT_Handle packedStencil; 

  viewInfo = data->viewInfo;
  gfxData = data->gfxData;
  R_InitCmdBufSourceState(data->gfxContext.source, &viewInfo->input);
  *((_BYTE *)&data->gfxContext.source->input + 7920) |= 1u;
  if ( data->triList.indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6417, ASSERT_TYPE_ASSERT, "(data->triList.indexCount == 0)", (const char *)&queryFormat, "data->triList.indexCount == 0") )
    __debugbreak();
  if ( data->triList.vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6418, ASSERT_TYPE_ASSERT, "(data->triList.vertexCount == 0)", (const char *)&queryFormat, "data->triList.vertexCount == 0") )
    __debugbreak();
  data->gfxContext.source->tess = &data->triList;
  R_InitCmdBuf(cmdBuf, gfxData, "async 2D cmd buf");
  R_InitDescriptorState(&cmdBuf->descState);
  R_InitDescriptorHeapInfoState(&cmdBuf->descState, &gfxData->async2D.descHeapInfo);
  data->gfxContext.state->descState = &cmdBuf->descState;
  v8 = cmdBuf->device == NULL;
  cmdBuf->descState.heapOverflow = 0;
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6431, ASSERT_TYPE_ASSERT, "(cmdBuf->device)", (const char *)&queryFormat, "cmdBuf->device") )
    __debugbreak();
  device = cmdBuf->device;
  p_constantBufferAllocations = &cmdBuf->constantBufferAllocations;
  data->gfxContext.state->device = device;
  data->gfxContext.state->constantBufferAllocations = p_constantBufferAllocations;
  R_InitConstantBufferInfoState(p_constantBufferAllocations, &gfxData->async2D.constBufferInfo, (!receivePPFX << 17) + 0x10000);
  if ( !R_CheckReserveConstantBuffer(data->gfxContext.state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6442, ASSERT_TYPE_ASSERT, "(R_CheckReserveConstantBuffer( gfxContext.state ))", (const char *)&queryFormat, "R_CheckReserveConstantBuffer( gfxContext.state )") )
    __debugbreak();
  p_constantBufferAllocations->reserveOverflow = 0;
  R_InitLocalCmdBufState(data->gfxContext.state, &data->gfxContext.source->input);
  data->gfxContext.state->dynamicIndexBuffer = &gfxData->async2D.indices;
  data->gfxContext.state->dynamicVertexBuffer = &gfxData->async2D.vertices;
  if ( receivePPFX )
  {
    sceneColor = (__m256i)data->resources.sceneColor;
    universalClut = data->resources.universalClut;
    sceneDepth = (R_RT_ColorHandle)data->resources.sceneDepth;
    gfxContext = data->gfxContext;
    packedStencil = (R_RT_Handle)sceneColor;
    RB_InitClient2DReceivePPFXContext(&gfxContext, viewInfo, gfxData, (R_RT_ColorHandle *)&packedStencil, (R_RT_DepthHandle *)&sceneDepth, universalClut);
  }
  else
  {
    displayColor = (__m256i)data->resources.displayColor;
    exposureBuffer = data->resources.exposureBuffer;
    resolvedScene = data->resources.resolvedScene;
    v15 = data->resources.universalClut;
    packedStencil = data->resources.packedStencil;
    v13 = data->gfxContext;
    sceneDepth = (R_RT_ColorHandle)displayColor;
    gfxContext = v13;
    RB_InitClient2DContext(&gfxContext, viewInfo, gfxData, &sceneDepth, &packedStencil, v15, resolvedScene, exposureBuffer);
  }
}

/*
==============
RB_Async2D_ShutdownContext
==============
*/
void RB_Async2D_ShutdownContext(GfxAsync2DRenderData *data, GfxCmdBuf *cmdBuf)
{
  GfxCmdBuf *p_receivePPFXCmdBuf; 
  __int64 v5; 
  GfxCmdBufContext gfxContext; 

  gfxContext = data->gfxContext;
  RB_EndSurfaceIfNeeded(&gfxContext);
  if ( data->triList.indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6468, ASSERT_TYPE_ASSERT, "(data->triList.indexCount == 0)", (const char *)&queryFormat, "data->triList.indexCount == 0") )
    __debugbreak();
  if ( data->triList.vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6469, ASSERT_TYPE_ASSERT, "(data->triList.vertexCount == 0)", (const char *)&queryFormat, "data->triList.vertexCount == 0") )
    __debugbreak();
  R_ShutdownLocalCmdBufState(data->gfxContext.state, &data->gfxContext.source->input);
  R_ShutdownConstantBufferInfoState(&cmdBuf->constantBufferAllocations);
  if ( cmdBuf->descState.heapOverflow )
  {
    Com_PrintError(13, "LUI: async 2D render exceeded descriptor limit %i \n", 3072i64);
    data->gfxData->async2D.renderFailed = 1;
  }
  R_ShutdownCmdBuf(cmdBuf, data->gfxData);
  R_ShutdownDescriptorHeapInfoState(&cmdBuf->descState);
  if ( cmdBuf->constantBufferAllocations.reserveOverflow )
  {
    p_receivePPFXCmdBuf = &data->gfxData->async2D.receivePPFXCmdBuf;
    if ( nextPrintTime_8 < Sys_Milliseconds() )
    {
      v5 = 196608i64;
      if ( cmdBuf == p_receivePPFXCmdBuf )
        v5 = 0x10000i64;
      Com_PrintError(13, "LUI: async 2D render exceeded const buffer limit %i \n", v5);
      nextPrintTime_8 = Sys_Milliseconds() + 1000;
    }
    data->gfxData->async2D.renderFailed = 1;
  }
  if ( data->gfxContext.state->dynamicBufferOverflow )
  {
    if ( nextPrintTime_9 < Sys_Milliseconds() )
    {
      Com_PrintError(13, "LUI: async 2D render exceeded vertex limit %i \n", 20480i64);
      nextPrintTime_9 = Sys_Milliseconds() + 1000;
    }
    data->gfxData->async2D.renderFailed = 1;
  }
  else if ( (unsigned __int64)(int)data->gfxData->async2D.vertices.used > 0x60000 && nextPrintTime_10 < Sys_Milliseconds() )
  {
    Com_PrintError(13, "LUI: async 2D render exceeded ship vertex limit %i \n", 12288i64);
    nextPrintTime_10 = Sys_Milliseconds() + 1000;
  }
}

/*
==============
RB_BeginFrame
==============
*/
void RB_BeginFrame(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  char v4; 
  bool v5; 
  GfxCmdBufState *state; 
  unsigned int i; 
  void **p_data; 
  __int64 v9; 
  GfxDevice *immediateContext; 
  __int64 v11; 
  void *v12; 
  GfxCmdBufContext v13; 

  Profile2_UpdateEntry(44);
  if ( ((unsigned __int8)&dword_14FDE8080 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8080) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8080);
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4679, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4648, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4649, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  backEndData = data;
  v4 = data->drawType & 1;
  if ( v4 )
  {
    backEnd.frameCount = data->frameCount;
    R_SyncGPURecordBeginBackend(data->frameCount);
    R_GPU_RecordLatencyEvent(LATENCY_EVENT_RB_BEGIN_FRAME, data->frameCount);
    ++r_glob.backEndFrameCount;
    v5 = (data->drawType & 2) == 0;
    R_LockGfxImmediateContext();
    R_GPU_BeginFrame(r_glob.backEndFrameCount, v5);
    RB_InsertFrameBeginQuery_GPUTimer();
    R_GPU_BeginTimer(GPU_TIMER_FRAME);
    R_UnlockGfxImmediateContext();
  }
  state = gfxContext->state;
  R_BackendGpuStatus_Update(state, STREAM_BACKEND_FRAME_BEGIN);
  v13 = *gfxContext;
  RB_Stream_BackendFrameBegin(&v13, data);
  if ( !v4 )
  {
    Profile2_UpdateEntry(44);
    if ( ((unsigned __int64)&dword_14FDE8080 & 3) == 0 )
      goto LABEL_60;
    goto LABEL_58;
  }
  g_drawConsts.primBisect = r_primBisect->current.color[0];
  g_drawConsts.primBegin = r_primBegin->current.integer;
  g_drawConsts.primEnd = r_primEnd->current.integer;
  g_drawConsts.primCount = 0;
  R_LockGfxImmediateContext();
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4740, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  R_InitCmdBufState(state);
  if ( ((unsigned __int8)&s_rbTess.resetStats & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_rbTess.resetStats) )
    __debugbreak();
  if ( _InterlockedExchange(&s_rbTess.resetStats, 0) )
  {
    if ( Sys_IsRenderThread() )
    {
      memset_0(&backEnd.frameStatsMax, 0, sizeof(backEnd.frameStatsMax));
      for ( i = 0; i != 4; ++i )
        RB_Stats_Clear(i);
      s_rbTess.viewStatsTarget = GFX_VIEW_STATS_INVALID;
      s_rbTess.primStatsTarget = GFX_PRIM_STATS_INVALID;
    }
    else
    {
      if ( ((unsigned __int64)&s_rbTess.resetStats & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_rbTess.resetStats) )
        __debugbreak();
      _InterlockedExchange(&s_rbTess.resetStats, 1);
    }
  }
  if ( !s_rbTess.indexCount && !s_rbTess.vertexCount )
  {
    s_rbTess.viewStatsTarget = GFX_VIEW_STATS_INVALID;
    s_rbTess.primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  if ( r_gpuMemoryPriority->modified )
    ((void (__fastcall *)(ID3D12Device *, _QWORD))g_dx.d3d12device->m_pFunction[24].QueryInterface)(g_dx.d3d12device, r_gpuMemoryPriority->current.unsignedInt);
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "RB_FlushPerFrameBuffers");
  R_FlushConstantBufferInfo(&g_dx.constantBufferInfo);
  R_FlushConstantBufferInfo(&data->constantBufferInfo);
  R_FlushConstantBufferInfo(&data->async2D.constBufferInfo);
  if ( !data->skinnedCacheVb->wrappedBuffer.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4604, ASSERT_TYPE_ASSERT, "(data->skinnedCacheVb->wrappedBuffer.data)", (const char *)&queryFormat, "data->skinnedCacheVb->wrappedBuffer.data") )
    __debugbreak();
  FlushGpuCacheRange(g_dx.immediateContext, 0xC03000u, data->skinnedCacheVb->wrappedBuffer.data, data->skinnedCacheVb->total);
  p_data = &data->mesh[0].vb.wrappedBuffer.data;
  v9 = 4i64;
  do
  {
    if ( *((int *)p_data - 9) > 0 )
    {
      immediateContext = g_dx.immediateContext;
      v11 = *((int *)p_data - 9);
      v12 = *p_data;
      if ( !R_IsLockedIfGfxImmediateContext(g_dx.immediateContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
        __debugbreak();
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 420, ASSERT_TYPE_ASSERT, "(baseAddress != ((D3D12_GPU_VIRTUAL_ADDRESS)0))", (const char *)&queryFormat, "baseAddress != D3D12_GPU_VIRTUAL_ADDRESS_NULL") )
        __debugbreak();
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 421, ASSERT_TYPE_ASSERT, "(sizeInBytes)", (const char *)&queryFormat, "sizeInBytes") )
        __debugbreak();
      ((void (__fastcall *)(GfxDevice *, __int64, void *, unsigned __int64))immediateContext->m_pFunction[22].AddRef)(immediateContext, 12595200i64, v12, (v11 + 255) & 0xFFFFFFFFFFFFFF00ui64);
    }
    p_data += 127;
    --v9;
  }
  while ( v9 );
  Sys_ProfEndNamedEvent();
  R_RT_BackendFrameBegin();
  *(_QWORD *)&s_rbTess.indexCount = 0i64;
  R_UnlockGfxImmediateContext();
  Profile2_UpdateEntry(44);
  if ( ((unsigned __int64)&dword_14FDE8080 & 3) != 0 )
  {
LABEL_58:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8080) )
      __debugbreak();
  }
LABEL_60:
  _InterlockedDecrement(&dword_14FDE8080);
}

/*
==============
RB_CallExecuteRenderCommands
==============
*/
void RB_CallExecuteRenderCommands(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  GfxViewInfo *v3; 
  GfxCmdBufContext v4; 
  GfxCmdBufContext v5; 
  GfxCmdBufContext v6; 
  GfxCmdBufContext v7; 
  GfxCmdBufContext v8; 
  GfxCmdBufContext v9; 
  GfxCmdBufContext v10; 
  GfxCmdBufContext v11; 
  R_RT_ColorHandle m_packedStencilRt; 
  R_RT_ColorHandle m_halfVelocityMBlurRt; 
  R_RT_ColorHandle m_dofTile0Handle; 
  const GfxBackEndData *timeoutUserData; 

  timeoutUserData = data;
  Profile_Begin(209);
  Profile2_UpdateEntry(63);
  if ( ((unsigned __int8)&dword_14FDE80CC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80CC) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80CC);
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6674, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( !timeoutUserData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6675, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData != timeoutUserData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6676, ASSERT_TYPE_ASSERT, "(backEndData == data)", (const char *)&queryFormat, "backEndData == data") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( (timeoutUserData->drawType & 2) != 0 )
  {
    R_LockGfxImmediateContext();
    RB_SetWaitFlipOncePerFrame(gfxContext->state);
    R_UnlockGfxImmediateContext();
    Sys_ProfBeginNamedEvent(0xFF404040, "wait finish");
    Sys_ProcessWorkerCmdsWithTimeout(RB_IsFinishReady, &timeoutUserData);
    Sys_ProfEndNamedEvent();
    if ( !timeoutUserData->finishReady )
    {
      Profile2_End(63);
      Profile_EndInternal(NULL);
      v7 = *gfxContext;
      v3 = &backEndData->viewInfo[backEndData->viewInfoIndex];
      m_packedStencilRt = v3->sceneRtInput.m_packedStencilRt;
      R_RT_Destroy(&v7, &m_packedStencilRt);
      v4 = *gfxContext;
      m_halfVelocityMBlurRt = v3->sceneRtInput.m_halfVelocityMBlurRt;
      v8 = v4;
      R_RT_Destroy(&v8, &m_halfVelocityMBlurRt);
      v5 = *gfxContext;
      v3->sceneRtInput.m_halfVelocityMBlurRt.m_surfaceID = 0;
      v3->sceneRtInput.m_halfVelocityMBlurRt.m_tracking.m_allocCounter = 0;
      v3->sceneRtInput.m_halfVelocityMBlurRt.m_tracking.m_name = NULL;
      v3->sceneRtInput.m_halfVelocityMBlurRt.m_tracking.m_location = NULL;
      m_dofTile0Handle = v3->sceneRtInput.m_dofTile0Handle;
      v9 = v5;
      R_RT_Destroy(&v9, &m_dofTile0Handle);
      v6 = *gfxContext;
      v3->sceneRtInput.m_dofTile0Handle.m_surfaceID = 0;
      v3->sceneRtInput.m_dofTile0Handle.m_tracking.m_allocCounter = 0;
      v10 = v6;
      v3->sceneRtInput.m_dofTile0Handle.m_tracking.m_name = NULL;
      v3->sceneRtInput.m_dofTile0Handle.m_tracking.m_location = NULL;
      RB_DecommitSpotShadowRTs(&v10, v3);
      R_RT_BackendFrameEnd(backEndData->frontendFramePass, 1);
      return;
    }
    v11 = *gfxContext;
    RB_ExecuteRenderCommands(&v11);
    if ( ((unsigned __int8)&g_backEndSwapFrame & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_backEndSwapFrame) )
      __debugbreak();
    _InterlockedIncrement(&g_backEndSwapFrame);
    if ( timeoutUserData->endSwapFrame != g_backEndSwapFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6712, ASSERT_TYPE_ASSERT, "( data->endSwapFrame ) == ( g_backEndSwapFrame )", "%s == %s\n\t%u, %u", "data->endSwapFrame", "g_backEndSwapFrame", timeoutUserData->endSwapFrame, g_backEndSwapFrame) )
      __debugbreak();
    if ( timeoutUserData->endSwapFrame != g_backEndSwapFrame )
      Sys_Error((const ObfuscateErrorText)&stru_14444D340, (unsigned int)timeoutUserData->endSwapFrame, (unsigned int)g_backEndSwapFrame);
  }
  Profile2_UpdateEntry(63);
  if ( ((unsigned __int64)&dword_14FDE80CC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80CC) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE80CC);
  Profile_EndInternal(NULL);
}

/*
==============
RB_CheckBackendEvent
==============
*/
bool RB_CheckBackendEvent(void *__formal)
{
  return Sys_CheckBackendEvent(NULL);
}

/*
==============
RB_ClearGlobalBackEndData
==============
*/
void RB_ClearGlobalBackEndData(const GfxBackEndData *data)
{
  int renderFromBackEnd; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4656, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4657, ASSERT_TYPE_ASSERT, "(backEndData == data)", (const char *)&queryFormat, "backEndData == data") )
    __debugbreak();
  renderFromBackEnd = data->renderFromBackEnd;
  if ( renderFromBackEnd && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4661, ASSERT_TYPE_ASSERT, "(!renderFromBackend || Sys_IsRenderThread())", (const char *)&queryFormat, "!renderFromBackend || Sys_IsRenderThread()") )
    __debugbreak();
  backEndData = NULL;
  if ( renderFromBackEnd )
    RB_RenderCompleted();
}

/*
==============
RB_Draw3DQuadPicST
==============
*/
void RB_Draw3DQuadPicST(GfxCmdBufContext *gfxContext, const Material *material, const vec3_t (*verts)[4], float s0, float t0, float s1, float t1, GfxColor color)
{
  GfxCmdBufSourceState *source; 
  GfxViewMode viewMode; 
  float v13; 
  float v14; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  char v18; 
  char v19; 
  unsigned __int8 v20; 
  char v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  __int64 v29; 
  vec4_t v30; 
  float v31; 
  float v32; 
  __int64 v33; 
  vec4_t v34; 
  float v35; 
  float v36; 
  __int64 v37; 
  vec4_t v38; 
  float v39; 
  float v40; 
  __int64 v41; 
  float v42; 
  float v43; 
  __int64 v44; 
  float v45; 
  float v46; 
  __int64 v47; 
  float v48; 
  float v49; 
  __int64 v50; 
  float v51; 
  float v52; 
  __int64 v53; 
  unsigned __int16 v54; 
  GfxCmdBufContext oldVerts_8[6]; 
  vec4_t outVertex[4]; 

  source = gfxContext->source;
  viewMode = gfxContext->source->viewMode;
  v13 = t0;
  v14 = s0;
  if ( viewMode != VIEW_MODE_3D )
  {
    if ( viewMode != VIEW_MODE_2D )
    {
      oldVerts_8[0] = *gfxContext;
      RB_EndSurfaceIfNeeded(oldVerts_8);
      R_Set2D(source);
    }
    oldVerts_8[0] = *gfxContext;
    RB_SetUIAA(oldVerts_8, 1, s0, s1, t0, t1);
  }
  oldVerts_8[0] = *gfxContext;
  RB_SetTessTechnique(oldVerts_8, material, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  oldVerts_8[0] = *gfxContext;
  RB_CheckTessOverflow(oldVerts_8, 4u, 6u);
  oldVerts_8[0] = *gfxContext;
  Tess = R_GetTess(oldVerts_8);
  vertexCount = Tess->vertexCount;
  indexCount = (int)Tess->indexCount;
  Tess->vertexCount += 4;
  v54 = vertexCount;
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount + 3;
  Tess->indices[indexCount + 1] = vertexCount;
  Tess->indices[indexCount + 2] = vertexCount + 2;
  Tess->indices[indexCount + 3] = vertexCount + 2;
  Tess->indices[indexCount + 4] = vertexCount;
  Tess->indices[indexCount + 5] = vertexCount + 1;
  if ( (*((_BYTE *)source + 11668) & 1) == 0 || viewMode == VIEW_MODE_3D )
  {
    v42 = (*verts)[0].v[2];
    v43 = (*verts)[0].v[0];
    v44 = (__int64)&Tess->verts[vertexCount];
    *(float *)(v44 + 4) = (*verts)[0].v[1];
    *(float *)(v44 + 8) = v42;
    *(float *)v44 = v43;
    *(_DWORD *)(v44 + 12) = 1065353216;
    *(_DWORD *)(v44 + 28) = 1073643391;
    *(GfxColor *)(v44 + 16) = color;
    *(float *)(v44 + 20) = s0;
    *(float *)(v44 + 24) = t0;
    v45 = (*verts)[1].v[2];
    v46 = (*verts)[1].v[0];
    v47 = (__int64)&Tess->verts[vertexCount + 1];
    *(float *)(v47 + 4) = (*verts)[1].v[1];
    *(float *)(v47 + 8) = v45;
    *(float *)v47 = v46;
    *(_DWORD *)(v47 + 12) = 1065353216;
    *(_DWORD *)(v47 + 28) = 1073643391;
    *(GfxColor *)(v47 + 16) = color;
    *(float *)(v47 + 20) = s1;
    *(float *)(v47 + 24) = t0;
    v48 = (*verts)[2].v[2];
    v49 = (*verts)[2].v[0];
    v50 = (__int64)&Tess->verts[vertexCount + 2];
    *(float *)(v50 + 4) = (*verts)[2].v[1];
    *(float *)(v50 + 8) = v48;
    *(float *)v50 = v49;
    *(_DWORD *)(v50 + 12) = 1065353216;
    *(_DWORD *)(v50 + 28) = 1073643391;
    *(GfxColor *)(v50 + 16) = color;
    *(float *)(v50 + 20) = s1;
    *(float *)(v50 + 24) = t1;
    v51 = (*verts)[3].v[2];
    v52 = (*verts)[3].v[0];
    v53 = (__int64)&Tess->verts[vertexCount + 3];
    *(float *)(v53 + 4) = (*verts)[3].v[1];
    *(float *)(v53 + 8) = v51;
    *(float *)v53 = v52;
    *(_DWORD *)(v53 + 12) = 1065353216;
    *(_DWORD *)(v53 + 28) = 1073643391;
    *(GfxColor *)(v53 + 16) = color;
    *(float *)(v53 + 20) = s0;
    *(float *)(v53 + 24) = t1;
  }
  else
  {
    v18 = RB_ApplyVertexDilation((const vec2_t *)verts, (const vec2_t *)&(*verts)[1], (const vec2_t *)&(*verts)[3], outVertex);
    v19 = RB_ApplyVertexDilation((const vec2_t *)&(*verts)[1], (const vec2_t *)&(*verts)[2], (const vec2_t *)verts, &outVertex[1]) | v18;
    v20 = RB_ApplyVertexDilation((const vec2_t *)&(*verts)[2], (const vec2_t *)&(*verts)[3], (const vec2_t *)&(*verts)[1], &outVertex[2]) | v19;
    v21 = RB_ApplyVertexDilation((const vec2_t *)&(*verts)[3], (const vec2_t *)verts, (const vec2_t *)&(*verts)[2], &outVertex[3]);
    *(float *)&oldVerts_8[2].state = 0.0;
    *((float *)&oldVerts_8[2].state + 1) = 0.0;
    *(float *)&oldVerts_8[3].state = 0.0;
    *((float *)&oldVerts_8[3].state + 1) = 0.0;
    *(float *)&oldVerts_8[4].state = 0.0;
    *((float *)&oldVerts_8[4].state + 1) = 0.0;
    *(float *)&oldVerts_8[5].state = 0.0;
    *((float *)&oldVerts_8[5].state + 1) = 0.0;
    *(float *)&oldVerts_8[2].source = s0;
    *((float *)&oldVerts_8[2].source + 1) = t0;
    *(float *)&oldVerts_8[3].source = s1;
    *((float *)&oldVerts_8[3].source + 1) = t0;
    *(float *)&oldVerts_8[4].source = s1;
    *((float *)&oldVerts_8[4].source + 1) = t1;
    *(float *)&oldVerts_8[5].source = s0;
    *((float *)&oldVerts_8[5].source + 1) = t1;
    if ( !((unsigned __int8)v21 | v20) )
    {
      v22 = (*verts)[0].v[1];
      *(float *)&oldVerts_8[0].source = (*verts)[0].v[0];
      v23 = (*verts)[1].v[0];
      *((float *)&oldVerts_8[0].source + 1) = v22;
      v24 = (*verts)[1].v[1];
      *(float *)&oldVerts_8[0].state = v23;
      v25 = (*verts)[2].v[0];
      *((float *)&oldVerts_8[0].state + 1) = v24;
      v26 = (*verts)[2].v[1];
      *(float *)&oldVerts_8[1].source = v25;
      v27 = (*verts)[3].v[0];
      *((float *)&oldVerts_8[1].source + 1) = v26;
      v28 = (*verts)[3].v[1];
      *(float *)&oldVerts_8[1].state = v27;
      *((float *)&oldVerts_8[1].state + 1) = v28;
      RB_ApplyUVDilation((const vec2_t (*)[4])oldVerts_8, (const vec4_t (*)[4])outVertex, (vec4_t (*)[4])&oldVerts_8[2]);
      v13 = *((float *)&oldVerts_8[2].source + 1);
      v14 = *(float *)&oldVerts_8[2].source;
    }
    v29 = (__int64)&Tess->verts[v54];
    *(vec4_t *)v29 = outVertex[0];
    v30 = outVertex[1];
    *(_DWORD *)(v29 + 28) = 1073643391;
    *(GfxColor *)(v29 + 16) = color;
    *(float *)(v29 + 20) = v14;
    *(float *)(v29 + 24) = v13;
    v31 = *((float *)&oldVerts_8[3].source + 1);
    v32 = *(float *)&oldVerts_8[3].source;
    v33 = (__int64)&Tess->verts[v54 + 1];
    *(vec4_t *)v33 = v30;
    v34 = outVertex[2];
    *(_DWORD *)(v33 + 28) = 1073643391;
    *(GfxColor *)(v33 + 16) = color;
    *(float *)(v33 + 20) = v32;
    *(float *)(v33 + 24) = v31;
    v35 = *(float *)&oldVerts_8[4].source;
    v36 = *((float *)&oldVerts_8[4].source + 1);
    v37 = (__int64)&Tess->verts[v54 + 2];
    *(vec4_t *)v37 = v34;
    v38 = outVertex[3];
    *(_DWORD *)(v37 + 28) = 1073643391;
    *(GfxColor *)(v37 + 16) = color;
    *(float *)(v37 + 20) = v35;
    *(float *)(v37 + 24) = v36;
    v39 = *((float *)&oldVerts_8[5].source + 1);
    v40 = *(float *)&oldVerts_8[5].source;
    v41 = (__int64)&Tess->verts[v54 + 3];
    *(vec4_t *)v41 = v38;
    *(_DWORD *)(v41 + 28) = 1073643391;
    *(GfxColor *)(v41 + 16) = color;
    *(float *)(v41 + 20) = v40;
    *(float *)(v41 + 24) = v39;
  }
}

/*
==============
RB_Draw
==============
*/
void RB_Draw(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  unsigned __int64 v3; 
  char v4; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxBackEndData *v6; 
  GfxCmdBufState *state; 
  Online_VideoStreaming *Instance; 
  Online_VideoStreaming *v9; 
  __int64 viewInfoIndex; 
  __int64 v11; 
  GfxViewInfo *v14; 
  GfxBackEndData *dataa[3]; 
  GfxCmdBufContext v16; 
  GfxCmdBufContext v17; 
  GfxCmdBufContext v18; 
  GfxCmdBufContext v19; 
  GfxCmdBufContext v20; 
  GfxCmdBufContext v21; 
  R_RT_Handle v22; 
  R_RT_Handle v23; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 
  R_RT_Handle v26; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v28; 
  vec4_t mrtColor; 
  R_RT_Group rtGroup; 

  dataa[1] = (GfxBackEndData *)-2i64;
  dataa[0] = (GfxBackEndData *)data;
  Profile_Begin(208);
  Profile2_UpdateEntry(45);
  v3 = (unsigned __int64)&dword_14FDE8084 & 3;
  if ( ((unsigned __int8)&dword_14FDE8084 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8084) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8084);
  if ( !dataa[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6138, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData != dataa[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6139, ASSERT_TYPE_ASSERT, "(backEndData == data)", (const char *)&queryFormat, "backEndData == data") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  v4 = 0;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6145, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  R_PrepareExecuteCompute(dataa[0], gfxContext->state->device, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
  R_ResetConstantBuffer(dataa[0], gfxContext->state->device, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
  R_BackendGpuStatus_Update(gfxContext->state, UICLUT_UPDATE);
  RB_UiClut_Update(gfxContext);
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(gfxContext->state);
  R_ProfBeginNamedEvent(GfxComputeCmdBufState, "Backend data packing");
  Sys_ProfBeginNamedEvent(0xFFFFA500, "BackendDataPacking");
  Sys_ProfBeginNamedEvent(0xFFFF0000, "DataCopier");
  R_BackendGpuStatus_Update(GfxComputeCmdBufState, BACKEND_DATA_COPIER_UPDATE);
  RB_BackendDataCopier::Update(&rbBackendDataCopier, GfxComputeCmdBufState);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF008008, "Callbacks");
  R_BackendGpuStatus_Update(GfxComputeCmdBufState, PROCESS_BACKEND_DB_CALLBACKS);
  RB_ProcessBackendDBCallbacks(GfxComputeCmdBufState);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "LightmapAtlas");
  R_BackendGpuStatus_Update(GfxComputeCmdBufState, UPDATE_LIGHTMAP_ATLAS);
  RB_UpdateLightmapAtlas(dataa[0], GfxComputeCmdBufState);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF008080, "LGVAtlas");
  R_BackendGpuStatus_Update(GfxComputeCmdBufState, UPDATE_LIGHTGRID_VOLUME_ATLAS);
  R_UpdateLightGridVolumesAtlas(dataa[0], GfxComputeCmdBufState);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF000080, "CSMStreaming");
  R_BackendGpuStatus_Update(GfxComputeCmdBufState, STREAM_COMPRESSED_SUN_SHADOW);
  R_CompressedSunShadow_ProcessStreaming(GfxComputeCmdBufState);
  Sys_ProfEndNamedEvent();
  Sys_NotifyNextFrameDataBackendSetupDone();
  Sys_ProfEndNamedEvent();
  R_ProfEndNamedEvent(GfxComputeCmdBufState);
  R_BackendGpuStatus_Update(gfxContext->state, UPDATE_MOVIE_IMAGES);
  v6 = dataa[0];
  state = gfxContext->state;
  if ( !state )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6018, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    v6 = dataa[0];
  }
  if ( !dataa[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6019, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    v6 = dataa[0];
  }
  if ( (dataa[0]->drawType & 1) != 0 )
  {
    Instance = Online_VideoStreaming::GetInstance();
    if ( !Online_VideoStreaming::IsPlayerActive(Instance) || R_Cinematic_PendingSyncFrame() )
      RB_Cinematic_UpdateFrame(dataa[0]);
    v9 = Online_VideoStreaming::GetInstance();
    Online_VideoStreaming::UpdateVideoStreamingTextures(v9, state);
    v6 = dataa[0];
  }
  if ( v6->viewInfoCount || v6->pipInfoCount )
  {
    viewInfoIndex = v6->viewInfoIndex;
    v11 = (__int64)&v6->viewInfo[viewInfoIndex];
    if ( !(_DWORD)viewInfoIndex )
    {
      R_BackendGpuStatus_Update(gfxContext->state, DYNAMIC_LIGHTSETS_UPDATE);
      v16 = *gfxContext;
      RB_DynamicLightsets_Update(&v16, rgp.world, dataa[0]);
      v6 = dataa[0];
    }
    _XMM6 = *gfxContext;
    if ( (*(_DWORD *)(v11 + 15540) & 0x100) != 0 )
    {
      RB_Draw3DScene_FreeRts();
      _XMM6.source->input.data = v6;
      __asm { vpextrq r14, xmm6, 1 }
      R_BackendGpuStatus_Update(_R14, FINISH_COMPUTE_CMDS);
      v17 = _XMM6;
      RB_FinishComputeCmds(&v17, v6);
      if ( *(_DWORD *)(v11 + 15528) == -1 )
      {
        dataa[2] = v6;
        mrtColor = (vec4_t)_xmm;
        R_LockGfxImmediateContext();
        v22 = R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER)->R_RT_Handle;
        R_RT_Group::AssignColor(&rtGroup, (R_RT_ColorHandle *)&v22);
        RB_SetWaitFlipOncePerFrame(_R14);
        R_ClearRtGroup(_R14, &rtGroup, 0x3Fu, &mrtColor, 1u, 0.0, 0, PIPE_FLUSH_FULL);
        R_UnlockGfxImmediateContext();
      }
      else
      {
        R_BackendGpuStatus_Update(_R14, DRAW_TASK_GRAPH);
        v18 = _XMM6;
        RB_TG_Render(&v18, (const GfxViewInfo *)v11, v6);
      }
      R_WaitSkippedDrawWorkerCmds(v6);
      v4 = 1;
    }
    else
    {
      v4 = 0;
      v19 = *gfxContext;
      RB_Draw3DScene(&v19, (const GfxViewInfo *)v11, v6);
    }
    v6 = dataa[0];
  }
  if ( !v6->viewInfoCount && !v6->pipInfoCount || v4 )
  {
    R_BackendGpuStatus_Update(gfxContext->state, DECAL_VOLUMES_UPDATE_ATLAS);
    v20 = *gfxContext;
    RB_DecalVolumes_UpdateAtlas(&v20, dataa[0]);
  }
  Sys_ProfBeginNamedEvent(0xFF404040, "wait finish");
  Sys_ProcessWorkerCmdsWithTimeout(RB_IsFinishReady, dataa);
  Sys_ProfEndNamedEvent();
  if ( dataa[0]->finishReady )
  {
    Sys_SetWorkerCmdEvent();
    Profile2_UpdateEntry(45);
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8084) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8084);
    if ( !v4 && dataa[0]->viewInfoCount )
    {
      v14 = &dataa[0]->viewInfo[dataa[0]->viewInfoIndex];
      v22 = R_RT_GetGlobalColor(&v28, R_RENDERTARGET_DISPLAY_BUFFER)->R_RT_Handle;
      v23 = v22;
      v24 = v22;
      RB_HDRScopes_ProcessStage(gfxContext, v14, &v24, &v23, HDR_SCOPES_STAGE_PRE_2D);
      v21 = *gfxContext;
      RB_Draw2D_Hud(&v21, v14, dataa[0]);
      v25 = v22;
      v26 = v22;
      RB_HDRScopes_ProcessStage(gfxContext, v14, &v26, &v25, HDR_SCOPES_STAGE_POST_2D);
      R_RT_BackendPassEnd(v14->sceneRtInput.m_pass);
    }
  }
  else
  {
    Profile2_UpdateEntry(45);
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8084) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8084);
  }
  Profile_EndInternal(NULL);
}

/*
==============
RB_DrawCharInSpace
==============
*/
void RB_DrawCharInSpace(GfxCmdBufContext *gfxContext, const Material *material, const vec3_t *xyz, const vec3_t *dx, const vec3_t *dy, const CachedGlyph *glyph, unsigned int color)
{
  materialCommands_t *Tess; 
  __int64 vertexCount_low; 
  __int64 indexCount_low; 
  float v13; 
  float v14; 
  float t0; 
  float s0; 
  __int64 v17; 
  float v18; 
  float v19; 
  float v20; 
  float s1; 
  __int64 v22; 
  float t1; 
  float v24; 
  float v25; 
  float v26; 
  __int64 v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  __int64 v32; 
  GfxCmdBufContext v33; 

  v33 = *gfxContext;
  RB_SetTessTechnique(&v33, material, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  v33 = *gfxContext;
  RB_CheckTessOverflow(&v33, 4u, 6u);
  v33 = *gfxContext;
  Tess = R_GetTess(&v33);
  vertexCount_low = LOWORD(Tess->vertexCount);
  Tess->vertexCount += 4;
  indexCount_low = LOWORD(Tess->indexCount);
  Tess->indexCount += 6;
  Tess->indices[indexCount_low] = vertexCount_low + 3;
  Tess->indices[indexCount_low + 1] = vertexCount_low;
  Tess->indices[indexCount_low + 2] = vertexCount_low + 2;
  Tess->indices[indexCount_low + 3] = vertexCount_low + 2;
  Tess->indices[indexCount_low + 4] = vertexCount_low;
  Tess->indices[indexCount_low + 5] = vertexCount_low + 1;
  v13 = xyz->v[2];
  v14 = xyz->v[1];
  t0 = glyph->t0;
  s0 = glyph->s0;
  v17 = (__int64)&Tess->verts[(unsigned int)vertexCount_low];
  *(float *)v17 = xyz->v[0];
  *(float *)(v17 + 4) = v14;
  *(float *)(v17 + 8) = v13;
  *(_DWORD *)(v17 + 12) = 1065353216;
  *(_DWORD *)(v17 + 28) = 1073643391;
  *(_DWORD *)(v17 + 16) = color;
  *(float *)(v17 + 20) = s0;
  *(float *)(v17 + 24) = t0;
  v18 = dx->v[2] + xyz->v[2];
  v19 = xyz->v[1] + dx->v[1];
  v20 = glyph->t0;
  s1 = glyph->s1;
  v22 = (__int64)&Tess->verts[vertexCount_low + 1];
  *(float *)v22 = xyz->v[0] + dx->v[0];
  *(float *)(v22 + 4) = v19;
  *(float *)(v22 + 8) = v18;
  *(_DWORD *)(v22 + 12) = 1065353216;
  *(_DWORD *)(v22 + 28) = 1073643391;
  *(_DWORD *)(v22 + 16) = color;
  *(float *)(v22 + 20) = s1;
  *(float *)(v22 + 24) = v20;
  t1 = glyph->t1;
  v24 = glyph->s1;
  v25 = (float)(dx->v[2] + xyz->v[2]) + dy->v[2];
  v26 = (float)(xyz->v[1] + dx->v[1]) + dy->v[1];
  v27 = (__int64)&Tess->verts[vertexCount_low + 2];
  *(float *)v27 = (float)(xyz->v[0] + dx->v[0]) + dy->v[0];
  *(float *)(v27 + 4) = v26;
  *(float *)(v27 + 8) = v25;
  *(_DWORD *)(v27 + 12) = 1065353216;
  *(_DWORD *)(v27 + 28) = 1073643391;
  *(_DWORD *)(v27 + 16) = color;
  *(float *)(v27 + 24) = t1;
  *(float *)(v27 + 20) = v24;
  v28 = xyz->v[2] + dy->v[2];
  v29 = xyz->v[1] + dy->v[1];
  v30 = glyph->t1;
  v31 = glyph->s0;
  v32 = (__int64)&Tess->verts[vertexCount_low + 3];
  *(float *)v32 = xyz->v[0] + dy->v[0];
  *(float *)(v32 + 4) = v29;
  *(float *)(v32 + 8) = v28;
  *(_DWORD *)(v32 + 12) = 1065353216;
  *(_DWORD *)(v32 + 28) = 1073643391;
  *(_DWORD *)(v32 + 16) = color;
  *(float *)(v32 + 20) = v31;
  *(float *)(v32 + 24) = v30;
}

/*
==============
RB_DrawCursor
==============
*/
void RB_DrawCursor(GfxCmdBufContext *gfxContext, float x, float y, float fontHeight, GfxColor color, const bool isOverstrikeMode, unsigned __int16 overstrikeCursorWidth)
{
  float v9; 
  float v10; 
  GfxCmdBufContext v11; 

  if ( (((char)CL_ScaledMilliseconds() / -12) & 1) == 0 )
  {
    if ( isOverstrikeMode )
    {
      v9 = FLOAT_2_0;
      v10 = (float)overstrikeCursorWidth - 4.0;
    }
    else
    {
      v10 = FLOAT_1_0;
      v9 = FLOAT_1_0;
    }
    v11 = *gfxContext;
    RB_DrawStretchPic(&v11, rgp.whiteMaterial, v9 + x, y - fontHeight, v10, fontHeight, 0.0, 0.0, 1.0, 1.0, color.packed, GFX_PRIM_STATS_DEBUG);
  }
}

/*
==============
RB_DrawFrame
==============
*/
void RB_DrawFrame(const GfxBackEndData *data)
{
  GfxCmdBufContext v2; 
  GfxCmdBufContext result; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6727, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6728, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6729, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  v2 = *RB_GetBackendCmdBufContext(&result);
  result = v2;
  RB_BeginFrame(&result, data);
  result = v2;
  RB_Draw(&result, data);
  result = v2;
  RB_CallExecuteRenderCommands(&result, data);
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "end frame");
  result = v2;
  RB_EndFrame(&result, data);
  Sys_ProfEndNamedEvent();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( backEndData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6769, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
      __debugbreak();
  }
}

/*
==============
RB_DrawFullScreenColoredQuadInternal
==============
*/
void RB_DrawFullScreenColoredQuadInternal(GfxCmdBufContext *gfxContext, const Material *material, float s0, float t0, float s1, float t1, unsigned int color, const char *fileAndLine)
{
  GfxCmdBufSourceState *source; 
  float renderTargetHeight; 
  float renderTargetWidth; 
  GfxCmdBufContext v15; 

  v15 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v15);
  source = gfxContext->source;
  R_Set2D(gfxContext->source);
  R_ClearIfRequired(gfxContext->state, 1, 0);
  renderTargetHeight = (float)source->renderTargetHeight;
  renderTargetWidth = (float)source->renderTargetWidth;
  v15 = *gfxContext;
  RB_DrawStretchPic_LargeTriangle(&v15, material, 0.0, 0.0, renderTargetWidth, renderTargetHeight, s0, t0, s1, t1, color, GFX_PRIM_STATS_CODE);
  v15 = *gfxContext;
  RB_EndTessSurfaceInternal(&v15, fileAndLine);
}

/*
==============
RB_DrawLines2D
==============
*/
void RB_DrawLines2D(GfxCmdBufContext *gfxContext, int count, int width, const GfxPointVertex *verts)
{
  __int64 v4; 
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  float *v9; 
  __int64 v10; 
  float v11; 
  __int128 v12; 
  GfxCmdBufContext v13; 
  float v17; 
  float v18; 
  materialCommands_t *v19; 
  materialCommands_t *v20; 
  float v21; 
  int v22; 
  unsigned int v23; 
  float v24; 
  __int64 v25; 
  float v26; 
  __int64 v27; 
  float v28; 
  float v29; 
  float v30; 
  __int64 v31; 
  float v32; 
  float v33; 
  float v34; 
  __int64 v35; 
  __int64 v36; 
  GfxCmdBufContext v37; 

  v4 = (unsigned int)count;
  if ( count <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2379, ASSERT_TYPE_ASSERT, "( ( count > 0 ) )", "( count ) = %i", count) )
    __debugbreak();
  source = gfxContext->source;
  if ( gfxContext->source->viewMode != VIEW_MODE_2D )
  {
    v37 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v37);
    R_Set2D(source);
  }
  v37 = *gfxContext;
  RB_SetTessTechnique(&v37, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  v37 = *gfxContext;
  Tess = R_GetTess(&v37);
  if ( (int)v4 > 0 )
  {
    v9 = &verts[1].xyz.v[1];
    v10 = v4;
    do
    {
      v11 = *v9 - *(v9 - 4);
      v12 = *((unsigned int *)v9 - 5);
      *(float *)&v12 = *(v9 - 5) - *(v9 - 1);
      v13 = *gfxContext;
      *(float *)&v12 = fsqrt((float)(*(float *)&v12 * *(float *)&v12) + (float)(v11 * v11));
      _XMM3 = v12;
      __asm
      {
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      v17 = (float)((float)(1.0 / *(float *)&_XMM0) * (float)(*(v9 - 5) - *(v9 - 1))) * 0.5;
      v18 = (float)((float)(1.0 / *(float *)&_XMM0) * v11) * 0.5;
      v37 = *gfxContext;
      v19 = R_GetTess(&v37);
      if ( v19->maxVertices < 4 )
      {
        LODWORD(v36) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v36) )
          __debugbreak();
      }
      if ( v19->maxIndices < 6 )
      {
        LODWORD(v36) = 6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v36) )
          __debugbreak();
      }
      v37 = v13;
      v20 = R_GetTess(&v37);
      if ( v20->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v20->vertexCount + 12 < v20->indexCount + 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v19->vertexCount + 4 > v19->maxVertices || v19->indexCount + 6 > v19->maxIndices )
      {
        v37 = v13;
        RB_TessOverflowInternal(&v37, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      Tess->indices[Tess->indexCount] = LOWORD(Tess->vertexCount) + 1;
      Tess->indices[Tess->indexCount + 1] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 3] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 4] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + 3;
      Tess->indexCount += 6;
      v21 = *(v9 - 3);
      v22 = *((_DWORD *)v9 - 2);
      v23 = *((_DWORD *)v9 + 2);
      v24 = *(v9 - 4) - v17;
      v25 = (__int64)&Tess->verts[Tess->vertexCount];
      *(float *)v25 = *(v9 - 5) - v18;
      *(float *)(v25 + 4) = v24;
      *(float *)(v25 + 8) = v21;
      *(_DWORD *)(v25 + 12) = 1065353216;
      *(_DWORD *)(v25 + 28) = 1073643391;
      *(_DWORD *)(v25 + 16) = v22;
      *(_QWORD *)(v25 + 20) = 0i64;
      v26 = v9[1];
      v27 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      v28 = *v9 - v17;
      *(float *)v27 = *(v9 - 1) - v18;
      *(float *)(v27 + 4) = v28;
      *(float *)(v27 + 8) = v26;
      *(_DWORD *)(v27 + 12) = 1065353216;
      *(_DWORD *)(v27 + 28) = 1073643391;
      *(_QWORD *)(v27 + 16) = v23;
      *(_DWORD *)(v27 + 24) = 1065353216;
      v29 = v9[1];
      v30 = v17 + *v9;
      v31 = (__int64)&Tess->verts[Tess->vertexCount + 2];
      *(float *)v31 = v18 + *(v9 - 1);
      *(float *)(v31 + 4) = v30;
      *(float *)(v31 + 8) = v29;
      *(_DWORD *)(v31 + 12) = 1065353216;
      *(_DWORD *)(v31 + 28) = 1073643391;
      *(_DWORD *)(v31 + 16) = v23;
      *(_DWORD *)(v31 + 20) = 1065353216;
      *(_DWORD *)(v31 + 24) = 1065353216;
      v32 = *(v9 - 3);
      v33 = v17 + *(v9 - 4);
      v34 = v18 + *(v9 - 5);
      v9 += 8;
      v35 = (__int64)&Tess->verts[Tess->vertexCount + 3];
      *(float *)v35 = v34;
      *(float *)(v35 + 4) = v33;
      *(float *)(v35 + 8) = v32;
      *(_DWORD *)(v35 + 12) = 1065353216;
      *(_DWORD *)(v35 + 28) = 1073643391;
      *(_DWORD *)(v35 + 16) = v22;
      *(_QWORD *)(v35 + 20) = 1065353216i64;
      Tess->vertexCount += 4;
      --v10;
    }
    while ( v10 );
  }
}

/*
==============
RB_DrawLines3D
==============
*/
void RB_DrawLines3D(GfxCmdBufContext *gfxContext, int count, int width, const GfxPointVertex *verts, int depthTest)
{
  Material *whiteMaterial; 
  materialCommands_t *Tess; 
  __m128 v11; 
  vec4_t v12; 
  vec4_t v13; 
  vec4_t v14; 
  materialCommands_t *v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  materialCommands_t *v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int vertexCount; 
  __int64 indexCount; 
  unsigned __int16 *indices; 
  unsigned int v29; 
  __int64 p_y; 
  __int64 v31; 
  int v33; 
  int v34; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  GfxCmdBufContext v53; 

  v52 = *(__m128 *)gfxContext;
  RB_SetIdentity((GfxCmdBufContext *)&v52);
  whiteMaterial = rgp.whiteMaterial;
  v52 = *(__m128 *)gfxContext;
  if ( depthTest )
    whiteMaterial = rgp.whiteDepthtestMaterial;
  RB_SetTessTechnique((GfxCmdBufContext *)&v52, whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  v52 = *(__m128 *)gfxContext;
  Tess = R_GetTess((GfxCmdBufContext *)&v52);
  _XMM10 = _xmm;
  v11 = (__m128)gfxContext->source->viewParms3D.viewProjectionMatrix.m.m[0];
  v12 = gfxContext->source->viewParms3D.viewProjectionMatrix.m.m[1];
  v13 = gfxContext->source->viewParms3D.viewProjectionMatrix.m.m[2];
  v14 = gfxContext->source->viewParms3D.viewProjectionMatrix.m.m[3];
  __asm { vinsertps xmm10, xmm10, xmm0, 0 }
  _XMM0 = *(_OWORD *)gfxContext->source->viewParms3D.camera.origin.v;
  __asm { vinsertps xmm6, xmm0, xmm11, 0F0h ; 'ð' }
  v52 = _XMM6;
  __asm { vinsertps xmm10, xmm10, xmm2, 10h }
  while ( count > 0 )
  {
    v53 = *gfxContext;
    v19 = R_GetTess(&v53);
    v20 = count;
    v21 = (v19->maxIndices - v19->indexCount) / 6;
    v22 = (v19->maxVertices - v19->vertexCount) >> 2;
    if ( v21 > v22 )
      v21 = v22;
    if ( count > v21 )
      v20 = v21;
    if ( !v20 )
    {
      v53 = *gfxContext;
      RB_TessOverflowInternal(&v53, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2536)");
      v53 = *gfxContext;
      v23 = R_GetTess(&v53);
      v20 = count;
      v24 = (v23->maxIndices - v23->indexCount) / 6;
      v25 = (v23->maxVertices - v23->vertexCount) >> 2;
      if ( v24 > v25 )
        v24 = v25;
      if ( count > v24 )
        v20 = v24;
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2538, ASSERT_TYPE_ASSERT, "(numLines > 0)", (const char *)&queryFormat, "numLines > 0") )
        __debugbreak();
    }
    vertexCount = Tess->vertexCount;
    indexCount = Tess->indexCount;
    indices = Tess->indices;
    count -= v20;
    Tess->indexCount = indexCount + 6 * v20;
    v29 = vertexCount + 4 * v20;
    Tess->vertexCount = v29;
    if ( v20 )
    {
      p_y = (__int64)&Tess->verts[vertexCount + 2].texCoord.y;
      v31 = (__int64)&indices[indexCount + 2];
      do
      {
        _XMM0 = *verts;
        v33 = *(_DWORD *)verts[1].color;
        v31 += 12i64;
        v34 = *(_DWORD *)verts->color;
        p_y += 128i64;
        __asm { vinsertps xmm1, xmm0, xmm11, 0F0h ; 'ð' }
        _XMM0 = verts[1];
        __asm { vinsertps xmm5, xmm0, xmm11, 0F0h ; 'ð' }
        v38 = _mm128_sub_ps(_XMM1, _XMM6);
        v39 = _mm128_sub_ps(_XMM5, _XMM6);
        v40 = _mm128_add_ps(_mm128_mul_ps(v11, _mm_shuffle_ps(v38, v38, 0)), _mm128_add_ps(_mm128_mul_ps((__m128)v12, _mm_shuffle_ps(v38, v38, 85)), _mm128_add_ps(_mm128_mul_ps((__m128)v13, _mm_shuffle_ps(v38, v38, 170)), (__m128)v14)));
        v41 = _mm128_add_ps(_mm128_mul_ps(v11, _mm_shuffle_ps(v39, v39, 0)), _mm128_add_ps(_mm128_mul_ps((__m128)v12, _mm_shuffle_ps(v39, v39, 85)), _mm128_add_ps(_mm128_mul_ps((__m128)v13, _mm_shuffle_ps(v39, v39, 170)), (__m128)v14)));
        v42 = _mm_shuffle_ps(v41, v41, 255);
        v43 = _mm_shuffle_ps(v40, v40, 255);
        v44 = _mm128_sub_ps(_mm128_mul_ps(v41, v43), _mm128_mul_ps(v40, v42));
        v45 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v44, v44, 201), _mm_shuffle_ps(s_unitZ.v, s_unitZ.v, 210)), _mm128_mul_ps(_mm_shuffle_ps(v44, v44, 210), _mm_shuffle_ps(s_unitZ.v, s_unitZ.v, 201)));
        _XMM1 = _mm128_mul_ps(v45, v45);
        __asm
        {
          vhaddps xmm0, xmm1, xmm1
          vhaddps xmm0, xmm0, xmm0
        }
        v49 = _mm128_mul_ps(_XMM10, _mm128_div_ps(v45, _mm_sqrt_ps(_XMM0)));
        v50 = _mm128_mul_ps(v43, v49);
        v51 = _mm128_mul_ps(v42, v49);
        *(__m128 *)(p_y - 216) = _mm128_sub_ps(v40, v50);
        *(_DWORD *)(p_y - 188) = 1073643391;
        verts += 2;
        *(_DWORD *)(p_y - 200) = v34;
        *(_QWORD *)(p_y - 196) = 0i64;
        *(__m128 *)(p_y - 184) = _mm128_sub_ps(v41, v50);
        *(_DWORD *)(p_y - 168) = v33;
        *(_DWORD *)(p_y - 156) = 1073643391;
        *(_DWORD *)(p_y - 164) = 0;
        *(_DWORD *)(p_y - 160) = 1065353216;
        *(__m128 *)(p_y - 152) = _mm128_add_ps(v41, v51);
        *(_DWORD *)(p_y - 136) = v33;
        *(_DWORD *)(p_y - 124) = 1073643391;
        *(_DWORD *)(p_y - 132) = 1065353216;
        *(_DWORD *)(p_y - 128) = 1065353216;
        *(__m128 *)(p_y - 120) = _mm128_add_ps(v40, v51);
        *(_DWORD *)(p_y - 92) = 1073643391;
        *(_DWORD *)(p_y - 104) = v34;
        *(_QWORD *)(p_y - 100) = 1065353216i64;
        *(_WORD *)(v31 - 16) = vertexCount + 3;
        *(_WORD *)(v31 - 12) = vertexCount + 2;
        *(_WORD *)(v31 - 10) = vertexCount + 2;
        *(_WORD *)(v31 - 6) = vertexCount + 1;
        *(_WORD *)(v31 - 14) = vertexCount;
        *(_WORD *)(v31 - 8) = vertexCount;
        _XMM6 = v52;
        vertexCount += 4;
        --v20;
      }
      while ( v20 );
      v29 = Tess->vertexCount;
    }
    if ( vertexCount != v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2596, ASSERT_TYPE_ASSERT, "(vertexCount == tess.vertexCount)", (const char *)&queryFormat, "vertexCount == tess.vertexCount") )
      __debugbreak();
  }
  v53 = *gfxContext;
  RB_EndTessSurfaceInternal(&v53, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2599)");
}

/*
==============
RB_DrawPoints2D
==============
*/
void RB_DrawPoints2D(GfxCmdBufContext *gfxContext, const GfxCmdDrawPoints *cmd)
{
  GfxCmdBufSourceState *source; 
  float v5; 
  GfxPointVertex *verts; 
  materialCommands_t *Tess; 
  int v8; 
  GfxCmdBufContext v9; 
  materialCommands_t *v10; 
  materialCommands_t *v11; 
  float v12; 
  int v13; 
  float v14; 
  __int64 v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  __int64 v21; 
  float v22; 
  __int64 v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  GfxCmdBufContext v27; 

  source = gfxContext->source;
  if ( gfxContext->source->viewMode != VIEW_MODE_2D )
  {
    v27 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v27);
    R_Set2D(source);
  }
  v27 = *gfxContext;
  RB_SetTessTechnique(&v27, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  v5 = (float)cmd->size * 0.5;
  v27 = *gfxContext;
  verts = cmd->verts;
  Tess = R_GetTess(&v27);
  v8 = 0;
  if ( cmd->pointCount )
  {
    do
    {
      v9 = *gfxContext;
      v27 = *gfxContext;
      v10 = R_GetTess(&v27);
      if ( v10->maxVertices < 4 )
      {
        LODWORD(v26) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v26) )
          __debugbreak();
      }
      if ( v10->maxIndices < 6 )
      {
        LODWORD(v26) = 6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v26) )
          __debugbreak();
      }
      v27 = v9;
      v11 = R_GetTess(&v27);
      if ( v11->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v11->vertexCount + 12 < v11->indexCount + 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v10->vertexCount + 4 > v10->maxVertices || v10->indexCount + 6 > v10->maxIndices )
      {
        v27 = v9;
        RB_TessOverflowInternal(&v27, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      Tess->indices[Tess->indexCount] = LOWORD(Tess->vertexCount) + 1;
      Tess->indices[Tess->indexCount + 1] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 3] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 4] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + 3;
      Tess->indexCount += 6;
      v12 = verts->xyz.v[2];
      v13 = *(_DWORD *)verts->color;
      v14 = verts->xyz.v[1] - v5;
      v15 = (__int64)&Tess->verts[Tess->vertexCount];
      *(float *)v15 = verts->xyz.v[0] - v5;
      *(float *)(v15 + 4) = v14;
      *(float *)(v15 + 8) = v12;
      *(_DWORD *)(v15 + 12) = 1065353216;
      *(_DWORD *)(v15 + 28) = 1073643391;
      *(_DWORD *)(v15 + 16) = v13;
      *(_QWORD *)(v15 + 20) = 0i64;
      v16 = v5 + verts->xyz.v[1];
      v17 = verts->xyz.v[2];
      v18 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      *(float *)v18 = verts->xyz.v[0] - v5;
      *(float *)(v18 + 4) = v16;
      *(float *)(v18 + 8) = v17;
      *(_DWORD *)(v18 + 12) = 1065353216;
      *(_DWORD *)(v18 + 28) = 1073643391;
      *(_DWORD *)(v18 + 16) = v13;
      *(_DWORD *)(v18 + 20) = 0;
      *(_DWORD *)(v18 + 24) = 1065353216;
      v19 = verts->xyz.v[2];
      v20 = v5 + verts->xyz.v[1];
      v21 = (__int64)&Tess->verts[Tess->vertexCount + 2];
      *(float *)v21 = v5 + verts->xyz.v[0];
      *(float *)(v21 + 4) = v20;
      *(float *)(v21 + 8) = v19;
      *(_DWORD *)(v21 + 12) = 1065353216;
      *(_DWORD *)(v21 + 28) = 1073643391;
      *(_DWORD *)(v21 + 16) = v13;
      *(_DWORD *)(v21 + 20) = 1065353216;
      *(_DWORD *)(v21 + 24) = 1065353216;
      ++v8;
      v22 = verts->xyz.v[2];
      v23 = (__int64)&Tess->verts[Tess->vertexCount + 3];
      v24 = verts->xyz.v[1] - v5;
      v25 = v5 + verts->xyz.v[0];
      ++verts;
      *(float *)v23 = v25;
      *(float *)(v23 + 4) = v24;
      *(float *)(v23 + 8) = v22;
      *(_DWORD *)(v23 + 12) = 1065353216;
      *(_DWORD *)(v23 + 28) = 1073643391;
      *(_DWORD *)(v23 + 16) = v13;
      *(_QWORD *)(v23 + 20) = 1065353216i64;
      Tess->vertexCount += 4;
    }
    while ( v8 < cmd->pointCount );
  }
}

/*
==============
RB_DrawPoints3D
==============
*/
void RB_DrawPoints3D(GfxCmdBufContext *gfxContext, const GfxCmdDrawPoints *cmd)
{
  GfxCmdBufSourceState *source; 
  float v5; 
  float v6; 
  float v7; 
  GfxPointVertex *verts; 
  materialCommands_t *Tess; 
  int v10; 
  float size; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  GfxCmdBufContext v23; 
  float v24; 
  float v25; 
  float v26; 
  materialCommands_t *v27; 
  materialCommands_t *v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  GfxCmdBufContext v35; 
  float v36; 
  float v37; 

  v35 = *gfxContext;
  RB_SetIdentity(&v35);
  v35 = *gfxContext;
  RB_SetTessTechnique(&v35, rgp.whiteDepthtestMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  v35 = *gfxContext;
  source = v35.source;
  v5 = v35.source->viewParms3D.camera.origin.v[0];
  v6 = v35.source->viewParms3D.camera.origin.v[1];
  v7 = v35.source->viewParms3D.camera.origin.v[2];
  verts = cmd->verts;
  Tess = R_GetTess(&v35);
  v10 = 0;
  size = (float)cmd->size;
  renderTargetWidth = (float)source->renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  v14 = size / renderTargetHeight;
  v15 = size / renderTargetWidth;
  v37 = size / renderTargetHeight;
  v36 = size / renderTargetWidth;
  if ( cmd->pointCount )
  {
    do
    {
      v16 = verts->xyz.v[0] - v5;
      v17 = verts->xyz.v[1] - v6;
      v18 = verts->xyz.v[2] - v7;
      v19 = (float)((float)((float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[0]) + (float)(v16 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[0])) + (float)(v18 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[0])) + source->viewParms3D.viewProjectionMatrix.m.m[3].v[0];
      v20 = (float)((float)((float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[1]) + (float)(v16 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[1])) + (float)(v18 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[1])) + source->viewParms3D.viewProjectionMatrix.m.m[3].v[1];
      v21 = (float)((float)((float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[3]) + (float)(v16 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[3])) + (float)(v18 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[3])) + source->viewParms3D.viewProjectionMatrix.m.m[3].v[3];
      v22 = v16 * source->viewParms3D.viewProjectionMatrix.m.m[0].v[2];
      v23 = *gfxContext;
      v24 = v15 * v21;
      v25 = (float)((float)((float)(v22 + (float)(v17 * source->viewParms3D.viewProjectionMatrix.m.m[1].v[2])) + (float)(v18 * source->viewParms3D.viewProjectionMatrix.m.m[2].v[2])) + source->viewParms3D.viewProjectionMatrix.m.m[3].v[2]) + (float)(v21 * 0.001);
      v26 = v14 * v21;
      v35 = *gfxContext;
      v27 = R_GetTess(&v35);
      if ( v27->maxVertices < 4 )
      {
        LODWORD(v34) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v34) )
          __debugbreak();
      }
      if ( v27->maxIndices < 6 )
      {
        LODWORD(v34) = 6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v34) )
          __debugbreak();
      }
      v35 = v23;
      v28 = R_GetTess(&v35);
      if ( v28->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v28->vertexCount + 12 < v28->indexCount + 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v27->vertexCount + 4 > v27->maxVertices || v27->indexCount + 6 > v27->maxIndices )
      {
        v35 = v23;
        RB_TessOverflowInternal(&v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      Tess->indices[Tess->indexCount] = LOWORD(Tess->vertexCount) + 3;
      Tess->indices[Tess->indexCount + 1] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 3] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 4] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + 1;
      Tess->indexCount += 6;
      v29 = *(_DWORD *)verts->color;
      v30 = (__int64)&Tess->verts[Tess->vertexCount];
      *(float *)v30 = v19 - v24;
      *(float *)(v30 + 4) = v20 - v26;
      *(float *)(v30 + 8) = v25;
      *(float *)(v30 + 12) = v21;
      *(_DWORD *)(v30 + 28) = 1073643391;
      *(_DWORD *)(v30 + 16) = v29;
      *(_QWORD *)(v30 + 20) = 0i64;
      v31 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      *(float *)v31 = v19 - v24;
      *(float *)(v31 + 4) = v26 + v20;
      *(float *)(v31 + 8) = v25;
      *(float *)(v31 + 12) = v21;
      *(_DWORD *)(v31 + 28) = 1073643391;
      *(_DWORD *)(v31 + 16) = v29;
      *(_DWORD *)(v31 + 20) = 0;
      *(_DWORD *)(v31 + 24) = 1065353216;
      v32 = (__int64)&Tess->verts[Tess->vertexCount + 2];
      *(float *)v32 = v24 + v19;
      *(float *)(v32 + 4) = v26 + v20;
      *(float *)(v32 + 8) = v25;
      *(float *)(v32 + 12) = v21;
      *(_DWORD *)(v32 + 28) = 1073643391;
      *(_DWORD *)(v32 + 16) = v29;
      *(_DWORD *)(v32 + 20) = 1065353216;
      *(_DWORD *)(v32 + 24) = 1065353216;
      v33 = (__int64)&Tess->verts[Tess->vertexCount + 3];
      *(float *)v33 = v24 + v19;
      *(float *)(v33 + 4) = v20 - v26;
      *(float *)(v33 + 8) = v25;
      *(float *)(v33 + 12) = v21;
      v15 = v36;
      v14 = v37;
      *(_DWORD *)(v33 + 28) = 1073643391;
      ++v10;
      *(_DWORD *)(v33 + 16) = v29;
      ++verts;
      *(_QWORD *)(v33 + 20) = 1065353216i64;
      Tess->vertexCount += 4;
    }
    while ( v10 < cmd->pointCount );
  }
  v35 = *gfxContext;
  RB_EndTessSurfaceInternal(&v35, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2346)");
}

/*
==============
RB_DrawQuadPicInternal
==============
*/
void RB_DrawQuadPicInternal(const GfxRenderCommandExecState *execState, const GfxCmdDrawQuadPic *cmd)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext gfxContext; 
  const Material *mtlOverride; 
  materialCommands_t *Tess; 
  __int64 vertexCount_low; 
  __int64 indexCount; 
  float v10; 
  __int64 v11; 
  float v12; 
  __int64 v13; 
  float v14; 
  __int64 v15; 
  float v16; 
  __int64 v17; 
  GfxCmdBufContext v18; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 1467, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  source = execState->gfxContext.source;
  gfxContext = execState->gfxContext;
  if ( source->viewMode != VIEW_MODE_2D )
  {
    v18 = execState->gfxContext;
    RB_EndSurfaceIfNeeded(&v18);
    R_Set2D(source);
  }
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = cmd->material;
  v18 = gfxContext;
  RB_SetTessTechnique(&v18, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  v18 = gfxContext;
  RB_CheckTessOverflow(&v18, 4u, 6u);
  v18 = gfxContext;
  Tess = R_GetTess(&v18);
  vertexCount_low = LOWORD(Tess->vertexCount);
  Tess->vertexCount += 4;
  indexCount = (int)Tess->indexCount;
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount_low + 3;
  Tess->indices[indexCount + 1] = vertexCount_low;
  Tess->indices[indexCount + 2] = vertexCount_low + 2;
  Tess->indices[indexCount + 3] = vertexCount_low + 2;
  Tess->indices[indexCount + 4] = vertexCount_low;
  Tess->indices[indexCount + 5] = vertexCount_low + 1;
  LODWORD(indexCount) = cmd->color.packed;
  v10 = cmd->verts[0].v[0];
  v11 = (__int64)&Tess->verts[(unsigned int)vertexCount_low];
  *(float *)(v11 + 4) = cmd->verts[0].v[1];
  *(float *)v11 = v10;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 12) = 1065353216;
  *(_DWORD *)(v11 + 16) = indexCount;
  *(_DWORD *)(v11 + 28) = 1073643391;
  *(_QWORD *)(v11 + 20) = 0i64;
  LODWORD(v11) = cmd->color.packed;
  v12 = cmd->verts[1].v[0];
  v13 = (__int64)&Tess->verts[vertexCount_low + 1];
  *(float *)(v13 + 4) = cmd->verts[1].v[1];
  *(float *)v13 = v12;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 12) = 1065353216;
  *(_DWORD *)(v13 + 28) = 1073643391;
  *(_DWORD *)(v13 + 16) = v11;
  *(_QWORD *)(v13 + 20) = 1065353216i64;
  LODWORD(v11) = cmd->color.packed;
  v14 = cmd->verts[2].v[0];
  v15 = (__int64)&Tess->verts[vertexCount_low + 2];
  *(float *)(v15 + 4) = cmd->verts[2].v[1];
  *(float *)v15 = v14;
  *(_DWORD *)(v15 + 8) = 0;
  *(_DWORD *)(v15 + 12) = 1065353216;
  *(_DWORD *)(v15 + 28) = 1073643391;
  *(_DWORD *)(v15 + 16) = v11;
  *(_DWORD *)(v15 + 20) = 1065353216;
  *(_DWORD *)(v15 + 24) = 1065353216;
  LODWORD(v11) = cmd->color.packed;
  v16 = cmd->verts[3].v[0];
  v17 = (__int64)&Tess->verts[vertexCount_low + 3];
  *(float *)(v17 + 4) = cmd->verts[3].v[1];
  *(float *)v17 = v16;
  *(_DWORD *)(v17 + 8) = 0;
  *(_DWORD *)(v17 + 12) = 1065353216;
  *(_DWORD *)(v17 + 28) = 1073643391;
  *(_QWORD *)(v17 + 16) = (unsigned int)v11;
  *(_DWORD *)(v17 + 24) = 1065353216;
}

/*
==============
RB_DrawQuadPicSTCmdInternal
==============
*/
void RB_DrawQuadPicSTCmdInternal(GfxRenderCommandExecState *execState, const GfxCmdDrawQuadPicST *cmd)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext gfxContext; 
  bool v6; 
  float t0; 
  float s1; 
  float s0; 
  const Material *mtlOverride; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  char v14; 
  char v15; 
  unsigned __int8 v16; 
  char v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  GfxColor color; 
  __int64 v23; 
  vec4_t v24; 
  float v25; 
  float v26; 
  __int64 v27; 
  vec4_t v28; 
  float v29; 
  float v30; 
  __int64 v31; 
  vec4_t v32; 
  float v33; 
  float v34; 
  __int64 v35; 
  GfxColor v36; 
  float v37; 
  float v38; 
  float v39; 
  __int64 v40; 
  GfxColor v41; 
  float v42; 
  float v43; 
  float v44; 
  __int64 v45; 
  GfxColor v46; 
  float v47; 
  float v48; 
  float v49; 
  __int64 v50; 
  GfxColor v51; 
  float v52; 
  float v53; 
  float v54; 
  __int64 v55; 
  float t1; 
  unsigned __int16 v57; 
  GfxCmdBufContext v58[5]; 
  vec4_t outVertex[4]; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 1678, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  source = execState->gfxContext.source;
  gfxContext = execState->gfxContext;
  if ( source->viewMode != VIEW_MODE_2D )
  {
    v58[0] = execState->gfxContext;
    RB_EndSurfaceIfNeeded(v58);
    R_Set2D(source);
  }
  v6 = cmd->verts[3].v[0] != cmd->verts[0].v[0] || cmd->verts[1].v[1] != cmd->verts[0].v[1];
  t0 = cmd->t0;
  s1 = cmd->s1;
  s0 = cmd->s0;
  t1 = cmd->t1;
  v58[0] = gfxContext;
  RB_SetUIAA(v58, v6, s0, s1, t0, t1);
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = cmd->material;
  v58[0] = gfxContext;
  RB_SetTessTechnique(v58, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  v58[0] = gfxContext;
  RB_CheckTessOverflow(v58, 4u, 6u);
  v58[0] = gfxContext;
  Tess = R_GetTess(v58);
  vertexCount = Tess->vertexCount;
  indexCount = (int)Tess->indexCount;
  Tess->vertexCount += 4;
  v57 = vertexCount;
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount + 3;
  Tess->indices[indexCount + 1] = vertexCount;
  Tess->indices[indexCount + 2] = vertexCount + 2;
  Tess->indices[indexCount + 3] = vertexCount + 2;
  Tess->indices[indexCount + 4] = vertexCount;
  Tess->indices[indexCount + 5] = vertexCount + 1;
  if ( (*((_BYTE *)gfxContext.source + 11668) & 1) != 0 )
  {
    v14 = RB_ApplyVertexDilation(cmd->verts, &cmd->verts[1], &cmd->verts[3], outVertex);
    v15 = RB_ApplyVertexDilation(&cmd->verts[1], &cmd->verts[2], cmd->verts, &outVertex[1]) | v14;
    v16 = RB_ApplyVertexDilation(&cmd->verts[2], &cmd->verts[3], &cmd->verts[1], &outVertex[2]) | v15;
    v17 = RB_ApplyVertexDilation(&cmd->verts[3], cmd->verts, &cmd->verts[2], &outVertex[3]);
    v18 = cmd->s0;
    v19 = cmd->t0;
    v20 = cmd->s1;
    v21 = cmd->t1;
    *(float *)&v58[1].source = v18;
    *((float *)&v58[1].source + 1) = v19;
    *(float *)&v58[1].state = 0.0;
    *((float *)&v58[1].state + 1) = 0.0;
    *(float *)&v58[2].source = v20;
    *((float *)&v58[2].source + 1) = v19;
    *(float *)&v58[2].state = 0.0;
    *((float *)&v58[2].state + 1) = 0.0;
    *(float *)&v58[3].source = v20;
    *((float *)&v58[3].source + 1) = v21;
    *(float *)&v58[3].state = 0.0;
    *((float *)&v58[3].state + 1) = 0.0;
    *(float *)&v58[4].source = v18;
    *((float *)&v58[4].source + 1) = v21;
    *(float *)&v58[4].state = 0.0;
    *((float *)&v58[4].state + 1) = 0.0;
    if ( !((unsigned __int8)v17 | v16) )
    {
      RB_ApplyUVDilation((const vec2_t (*)[4])cmd->verts, (const vec4_t (*)[4])outVertex, (vec4_t (*)[4])&v58[1]);
      v19 = *((float *)&v58[1].source + 1);
      v18 = *(float *)&v58[1].source;
    }
    color = cmd->color;
    v23 = (__int64)&Tess->verts[v57];
    *(vec4_t *)v23 = outVertex[0];
    *(GfxColor *)(v23 + 16) = color;
    v24 = outVertex[1];
    *(_DWORD *)(v23 + 28) = 1073643391;
    *(float *)(v23 + 20) = v18;
    *(float *)(v23 + 24) = v19;
    LODWORD(v23) = cmd->color.packed;
    v25 = *((float *)&v58[2].source + 1);
    v26 = *(float *)&v58[2].source;
    v27 = (__int64)&Tess->verts[v57 + 1];
    *(vec4_t *)v27 = v24;
    v28 = outVertex[2];
    *(_DWORD *)(v27 + 28) = 1073643391;
    *(_DWORD *)(v27 + 16) = v23;
    *(float *)(v27 + 20) = v26;
    *(float *)(v27 + 24) = v25;
    LODWORD(v23) = cmd->color.packed;
    v29 = *(float *)&v58[3].source;
    v30 = *((float *)&v58[3].source + 1);
    v31 = (__int64)&Tess->verts[v57 + 2];
    *(vec4_t *)v31 = v28;
    v32 = outVertex[3];
    *(_DWORD *)(v31 + 28) = 1073643391;
    *(_DWORD *)(v31 + 16) = v23;
    *(float *)(v31 + 20) = v29;
    *(float *)(v31 + 24) = v30;
    LODWORD(v23) = cmd->color.packed;
    v33 = *((float *)&v58[4].source + 1);
    v34 = *(float *)&v58[4].source;
    v35 = (__int64)&Tess->verts[v57 + 3];
    *(vec4_t *)v35 = v32;
    *(_DWORD *)(v35 + 28) = 1073643391;
    *(_DWORD *)(v35 + 16) = v23;
    *(float *)(v35 + 20) = v34;
    *(float *)(v35 + 24) = v33;
  }
  else
  {
    v36 = cmd->color;
    v37 = cmd->t0;
    v38 = cmd->s0;
    v39 = cmd->verts[0].v[0];
    v40 = (__int64)&Tess->verts[vertexCount];
    *(float *)(v40 + 4) = cmd->verts[0].v[1];
    *(float *)v40 = v39;
    *(_DWORD *)(v40 + 8) = 0;
    *(_DWORD *)(v40 + 12) = 1065353216;
    *(_DWORD *)(v40 + 28) = 1073643391;
    *(GfxColor *)(v40 + 16) = v36;
    *(float *)(v40 + 20) = v38;
    *(float *)(v40 + 24) = v37;
    v41 = cmd->color;
    v42 = cmd->t0;
    v43 = cmd->s1;
    v44 = cmd->verts[1].v[0];
    v45 = (__int64)&Tess->verts[vertexCount + 1];
    *(float *)(v45 + 4) = cmd->verts[1].v[1];
    *(float *)v45 = v44;
    *(_DWORD *)(v45 + 8) = 0;
    *(_DWORD *)(v45 + 12) = 1065353216;
    *(_DWORD *)(v45 + 28) = 1073643391;
    *(GfxColor *)(v45 + 16) = v41;
    *(float *)(v45 + 20) = v43;
    *(float *)(v45 + 24) = v42;
    v46 = cmd->color;
    v47 = cmd->s1;
    v48 = cmd->verts[2].v[0];
    v49 = cmd->t1;
    v50 = (__int64)&Tess->verts[vertexCount + 2];
    *(float *)(v50 + 4) = cmd->verts[2].v[1];
    *(float *)v50 = v48;
    *(_DWORD *)(v50 + 8) = 0;
    *(_DWORD *)(v50 + 12) = 1065353216;
    *(_DWORD *)(v50 + 28) = 1073643391;
    *(GfxColor *)(v50 + 16) = v46;
    *(float *)(v50 + 20) = v47;
    *(float *)(v50 + 24) = v49;
    v51 = cmd->color;
    v52 = cmd->t1;
    v53 = cmd->s0;
    v54 = cmd->verts[3].v[0];
    v55 = (__int64)&Tess->verts[vertexCount + 3];
    *(float *)(v55 + 4) = cmd->verts[3].v[1];
    *(float *)v55 = v54;
    *(_DWORD *)(v55 + 8) = 0;
    *(_DWORD *)(v55 + 12) = 1065353216;
    *(_DWORD *)(v55 + 28) = 1073643391;
    *(GfxColor *)(v55 + 16) = v51;
    *(float *)(v55 + 20) = v53;
    *(float *)(v55 + 24) = v52;
  }
}

/*
==============
RB_DrawRect2D
==============
*/
void RB_DrawRect2D(GfxCmdBufContext *gfxContext, float x, float y, float width, float height, const GfxColor color)
{
  GfxCmdBufContext v6; 

  v6 = *gfxContext;
  RB_DrawStretchPic(&v6, rgp.whiteMaterial, x, y, width, height, 0.0, 0.0, 1.0, 1.0, color.packed, GFX_PRIM_STATS_DEBUG);
}

/*
==============
RB_DrawRectOutline2D
==============
*/
void RB_DrawRectOutline2D(GfxCmdBufContext *gfxContext, unsigned int count, int width, const GfxCmdDrawRect2D::Rect *rects)
{
  __int64 v4; 
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  float v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  GfxCmdBufContext v14; 
  materialCommands_t *v15; 
  materialCommands_t *v16; 
  unsigned int indexCount; 
  unsigned int v18; 
  __int16 v19; 
  __int16 v20; 
  float x; 
  float y; 
  GfxColor color; 
  __int64 v24; 
  __int64 v25; 
  float v26; 
  float v27; 
  GfxColor v28; 
  __int64 v29; 
  __int64 v30; 
  float v31; 
  float v32; 
  GfxColor v33; 
  __int64 v34; 
  __int64 v35; 
  float v36; 
  float v37; 
  GfxColor v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  GfxCmdBufContext v42; 

  v4 = count;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2674, ASSERT_TYPE_ASSERT, "( ( count > 0 ) )", "( count ) = %i", count) )
    __debugbreak();
  source = gfxContext->source;
  if ( gfxContext->source->viewMode != VIEW_MODE_2D )
  {
    v42 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v42);
    R_Set2D(source);
  }
  v42 = *gfxContext;
  RB_SetTessTechnique(&v42, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  v42 = *gfxContext;
  Tess = R_GetTess(&v42);
  if ( (_DWORD)v4 )
  {
    v10 = (float)width;
    v11 = (float)width * 0.5;
    LODWORD(v12) = LODWORD(v11) ^ _xmm;
    v13 = v4;
    do
    {
      v14 = *gfxContext;
      v42 = *gfxContext;
      v15 = R_GetTess(&v42);
      if ( v15->maxVertices < 8 )
      {
        LODWORD(v41) = 8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v41) )
          __debugbreak();
      }
      if ( v15->maxIndices < 0x18 )
      {
        LODWORD(v41) = 24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v41) )
          __debugbreak();
      }
      v42 = v14;
      v16 = R_GetTess(&v42);
      if ( v16->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v16->vertexCount + 24 < v16->indexCount + 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v15->vertexCount + 8 > v15->maxVertices || v15->indexCount + 24 > v15->maxIndices )
      {
        v42 = v14;
        RB_TessOverflowInternal(&v42, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      indexCount = Tess->indexCount;
      v18 = 0;
      do
      {
        v19 = 2 * v18++;
        Tess->indices[indexCount] = (v19 & 7) + LOWORD(Tess->vertexCount);
        v20 = (v19 + 3) & 7;
        Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + (((_BYTE)v19 + 2) & 7);
        Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + v20;
        Tess->indices[Tess->indexCount + 3] = (v19 & 7) + LOWORD(Tess->vertexCount);
        Tess->indices[Tess->indexCount + 4] = LOWORD(Tess->vertexCount) + v20;
        Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + (((_BYTE)v19 + 1) & 7);
        Tess->indexCount += 6;
        indexCount = Tess->indexCount;
      }
      while ( v18 < 4 );
      x = rects->x;
      y = rects->y;
      color = rects->color;
      v24 = (__int64)&Tess->verts[Tess->vertexCount];
      *(float *)v24 = rects->x - v11;
      *(float *)(v24 + 4) = v12 + y;
      *(_DWORD *)(v24 + 8) = 0;
      *(_DWORD *)(v24 + 12) = 1065353216;
      *(_DWORD *)(v24 + 28) = 1073643391;
      *(GfxColor *)(v24 + 16) = color;
      *(_QWORD *)(v24 + 20) = 0i64;
      LODWORD(v24) = rects->color.packed;
      v25 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      *(float *)v25 = x + v11;
      *(float *)(v25 + 4) = y - v12;
      *(_DWORD *)(v25 + 8) = 0;
      *(_DWORD *)(v25 + 12) = 1065353216;
      *(_DWORD *)(v25 + 16) = v24;
      *(_DWORD *)(v25 + 28) = 1073643391;
      *(_DWORD *)(v25 + 20) = 1065353216;
      *(_DWORD *)(v25 + 24) = 1065353216;
      Tess->vertexCount += 2;
      v26 = rects->x;
      v27 = rects->height + rects->y;
      v28 = rects->color;
      v29 = (__int64)&Tess->verts[Tess->vertexCount];
      *(float *)v29 = rects->x - v11;
      *(float *)(v29 + 4) = v11 + v27;
      *(_DWORD *)(v29 + 8) = 0;
      *(_DWORD *)(v29 + 12) = 1065353216;
      *(_DWORD *)(v29 + 28) = 1073643391;
      *(GfxColor *)(v29 + 16) = v28;
      *(_QWORD *)(v29 + 20) = 0i64;
      LODWORD(v29) = rects->color.packed;
      v30 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      *(float *)v30 = v26 + v11;
      *(float *)(v30 + 4) = v27 - v11;
      *(_DWORD *)(v30 + 8) = 0;
      *(_DWORD *)(v30 + 12) = 1065353216;
      *(_DWORD *)(v30 + 28) = 1073643391;
      *(_DWORD *)(v30 + 16) = v29;
      *(_DWORD *)(v30 + 20) = 1065353216;
      *(_DWORD *)(v30 + 24) = 1065353216;
      Tess->vertexCount += 2;
      v31 = rects->x + rects->width;
      v32 = rects->height + rects->y;
      v33 = rects->color;
      v34 = (__int64)&Tess->verts[Tess->vertexCount];
      *(float *)v34 = v11 + v31;
      *(float *)(v34 + 4) = v11 + v32;
      *(_DWORD *)(v34 + 8) = 0;
      *(_DWORD *)(v34 + 12) = 1065353216;
      *(_DWORD *)(v34 + 28) = 1073643391;
      *(GfxColor *)(v34 + 16) = v33;
      *(_QWORD *)(v34 + 20) = 0i64;
      LODWORD(v34) = rects->color.packed;
      v35 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      *(float *)v35 = v31 - v11;
      *(float *)(v35 + 4) = v32 - v11;
      *(_DWORD *)(v35 + 8) = 0;
      *(_DWORD *)(v35 + 12) = 1065353216;
      *(_DWORD *)(v35 + 28) = 1073643391;
      *(_DWORD *)(v35 + 16) = v34;
      *(_DWORD *)(v35 + 20) = 1065353216;
      *(_DWORD *)(v35 + 24) = 1065353216;
      Tess->vertexCount += 2;
      v36 = rects->x + rects->width;
      v37 = rects->y;
      v38 = rects->color;
      v39 = (__int64)&Tess->verts[Tess->vertexCount];
      *(float *)v39 = v11 + v36;
      *(float *)(v39 + 4) = v37 - v11;
      *(_DWORD *)(v39 + 8) = 0;
      *(_DWORD *)(v39 + 12) = 1065353216;
      *(_DWORD *)(v39 + 28) = 1073643391;
      *(GfxColor *)(v39 + 16) = v38;
      *(_QWORD *)(v39 + 20) = 0i64;
      LODWORD(v39) = rects->color.packed;
      ++rects;
      v40 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      *(float *)v40 = v36 - v11;
      *(float *)(v40 + 4) = v37 - (float)(v10 * -0.5);
      *(_DWORD *)(v40 + 8) = 0;
      *(_DWORD *)(v40 + 12) = 1065353216;
      *(_DWORD *)(v40 + 28) = 1073643391;
      *(_DWORD *)(v40 + 16) = v39;
      *(_DWORD *)(v40 + 20) = 1065353216;
      *(_DWORD *)(v40 + 24) = 1065353216;
      Tess->vertexCount += 2;
      --v13;
    }
    while ( v13 );
  }
}

/*
==============
RB_DrawRotatedText
==============
*/
void RB_DrawRotatedText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, float x, float y, float cwAngleInDegree, const GfxColor color)
{
  int pixelHeight; 
  bool DoesGlyphUseDistanceField; 
  const Material *v12; 
  int v13; 
  GfxCmdBufContext v14; 
  DrawTextPositionSettings v15; 

  v15.position3D.startPosition.v[1] = y;
  v15.mode = POSITION_2D;
  v15.position3D.startPosition.v[0] = x;
  FastSinCos(cwAngleInDegree * 0.017453292, v15.position3D.xDirection.v, &v15.position3D.startPosition.v[2]);
  pixelHeight = font->pixelHeight;
  v15.xScale = FLOAT_1_0;
  v15.yScale = FLOAT_1_0;
  v15.tracking = 0;
  DoesGlyphUseDistanceField = FontCache_DoesGlyphUseDistanceField(pixelHeight);
  v12 = rgp.fontMaterial[0];
  if ( DoesGlyphUseDistanceField )
    v12 = rgp.fontSDFMaterial[0];
  v13 = font->pixelHeight;
  v14 = *gfxContext;
  DrawText(&v14, text, font, v13, &v15, color, 0x7FFFFFFF, 0, 0, 0, v12, rgp.iconMaterial, NULL, NULL);
}

/*
==============
RB_DrawScreenColoredQuadInternal
==============
*/
void RB_DrawScreenColoredQuadInternal(GfxCmdBufContext *gfxContext, const Material *material, float s0, float t0, float s1, float t1, float screenWidth, float screenHeight, unsigned int color, const char *fileAndLine)
{
  GfxCmdBufSourceState *source; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  GfxCmdBufContext v15; 

  v15 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v15);
  source = gfxContext->source;
  R_Set2D(gfxContext->source);
  renderTargetWidth = (float)source->renderTargetWidth;
  if ( screenWidth == renderTargetWidth && (renderTargetHeight = (float)source->renderTargetHeight, screenHeight == renderTargetHeight) )
  {
    v15 = *gfxContext;
    RB_DrawStretchPic_LargeTriangle(&v15, material, 0.0, 0.0, screenWidth, screenHeight, s0, t0, s1, t1, color, GFX_PRIM_STATS_CODE);
  }
  else
  {
    v15 = *gfxContext;
    RB_DrawStretchPic(&v15, material, 0.0, 0.0, screenWidth, screenHeight, s0, t0, s1, t1, color, GFX_PRIM_STATS_CODE);
  }
  v15 = *gfxContext;
  RB_EndTessSurfaceInternal(&v15, fileAndLine);
}

/*
==============
RB_DrawStretchPic
==============
*/
void RB_DrawStretchPic(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v14; 
  bool v16; 
  GfxCmdBufContext v17; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  GfxCmdBufContext v25; 
  GfxCmdBufContext v26; 

  source = gfxContext->source;
  v14 = *gfxContext;
  v16 = gfxContext->source->viewMode == VIEW_MODE_2D;
  v26 = *gfxContext;
  if ( !v16 )
  {
    v25 = v14;
    RB_EndSurfaceIfNeeded(&v25);
    R_Set2D(source);
  }
  v17 = *gfxContext;
  v26.source->viewStatsTarget = GFX_VIEW_STATS_2D;
  v26 = v17;
  RB_SetTessTechnique(&v26, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  v26 = *gfxContext;
  RB_CheckTessOverflow(&v26, 4u, 6u);
  v26 = *gfxContext;
  Tess = R_GetTess(&v26);
  vertexCount = Tess->vertexCount;
  v20 = Tess;
  Tess->indices[Tess->indexCount] = vertexCount + 3;
  Tess->indices[Tess->indexCount + 1] = vertexCount;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 3] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 4] = vertexCount;
  Tess->indices[Tess->indexCount + 5] = vertexCount + 1;
  v21 = (__int64)&Tess->verts[Tess->vertexCount];
  *(float *)v21 = x;
  *(float *)(v21 + 4) = y;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 1065353216;
  *(_DWORD *)(v21 + 28) = 1073643391;
  *(_DWORD *)(v21 + 16) = color;
  *(float *)(v21 + 20) = s0;
  *(float *)(v21 + 24) = t0;
  v22 = (__int64)&v20->verts[v20->vertexCount + 1];
  *(float *)v22 = x + w;
  *(float *)(v22 + 4) = y;
  *(_DWORD *)(v22 + 8) = 0;
  *(_DWORD *)(v22 + 12) = 1065353216;
  *(_DWORD *)(v22 + 28) = 1073643391;
  *(_DWORD *)(v22 + 16) = color;
  *(float *)(v22 + 20) = s1;
  *(float *)(v22 + 24) = t0;
  v23 = (__int64)&v20->verts[v20->vertexCount + 2];
  *(float *)v23 = x + w;
  *(float *)(v23 + 4) = y + h;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 12) = 1065353216;
  *(_DWORD *)(v23 + 28) = 1073643391;
  *(_DWORD *)(v23 + 16) = color;
  *(float *)(v23 + 20) = s1;
  *(float *)(v23 + 24) = t1;
  v24 = (__int64)&v20->verts[v20->vertexCount + 3];
  *(float *)v24 = x;
  *(float *)(v24 + 4) = y + h;
  *(_DWORD *)(v24 + 8) = 0;
  *(_DWORD *)(v24 + 12) = 1065353216;
  *(_DWORD *)(v24 + 28) = 1073643391;
  *(_DWORD *)(v24 + 16) = color;
  *(float *)(v24 + 20) = s0;
  *(float *)(v24 + 24) = t1;
  v20->vertexCount += 4;
  v20->indexCount += 6;
}

/*
==============
RB_DrawStretchPicFlipST
==============
*/
void RB_DrawStretchPicFlipST(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v14; 
  bool v16; 
  GfxCmdBufContext v17; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  GfxCmdBufContext v25; 
  GfxCmdBufContext v26; 

  source = gfxContext->source;
  v14 = *gfxContext;
  v16 = gfxContext->source->viewMode == VIEW_MODE_2D;
  v26 = *gfxContext;
  if ( !v16 )
  {
    v25 = v14;
    RB_EndSurfaceIfNeeded(&v25);
    R_Set2D(source);
  }
  v17 = *gfxContext;
  v26.source->viewStatsTarget = GFX_VIEW_STATS_2D;
  v26 = v17;
  RB_SetTessTechnique(&v26, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  v26 = *gfxContext;
  RB_CheckTessOverflow(&v26, 4u, 6u);
  v26 = *gfxContext;
  Tess = R_GetTess(&v26);
  vertexCount = Tess->vertexCount;
  v20 = Tess;
  Tess->indices[Tess->indexCount] = vertexCount + 3;
  Tess->indices[Tess->indexCount + 1] = vertexCount;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 3] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 4] = vertexCount;
  Tess->indices[Tess->indexCount + 5] = vertexCount + 1;
  v21 = (__int64)&Tess->verts[Tess->vertexCount];
  *(float *)v21 = x;
  *(float *)(v21 + 4) = y;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 1065353216;
  *(_DWORD *)(v21 + 28) = 1073643391;
  *(_DWORD *)(v21 + 16) = color;
  *(float *)(v21 + 20) = s0;
  *(float *)(v21 + 24) = t0;
  v22 = (__int64)&v20->verts[v20->vertexCount + 1];
  *(float *)v22 = x + w;
  *(float *)(v22 + 4) = y;
  *(_DWORD *)(v22 + 8) = 0;
  *(_DWORD *)(v22 + 12) = 1065353216;
  *(_DWORD *)(v22 + 28) = 1073643391;
  *(_DWORD *)(v22 + 16) = color;
  *(float *)(v22 + 20) = s0;
  *(float *)(v22 + 24) = t1;
  v23 = (__int64)&v20->verts[v20->vertexCount + 2];
  *(float *)v23 = x + w;
  *(float *)(v23 + 4) = y + h;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 12) = 1065353216;
  *(_DWORD *)(v23 + 28) = 1073643391;
  *(_DWORD *)(v23 + 16) = color;
  *(float *)(v23 + 20) = s1;
  *(float *)(v23 + 24) = t1;
  v24 = (__int64)&v20->verts[v20->vertexCount + 3];
  *(float *)v24 = x;
  *(float *)(v24 + 4) = y + h;
  *(_DWORD *)(v24 + 8) = 0;
  *(_DWORD *)(v24 + 12) = 1065353216;
  *(_DWORD *)(v24 + 28) = 1073643391;
  *(_DWORD *)(v24 + 16) = color;
  *(float *)(v24 + 20) = s1;
  *(float *)(v24 + 24) = t0;
  v20->vertexCount += 4;
  v20->indexCount += 6;
}

/*
==============
RB_DrawStretchPicRotate
==============
*/
void RB_DrawStretchPicRotate(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, float sinAngle, float cosAngle, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufContext v14; 
  float pixelAspect; 
  GfxCmdBufContext v18; 
  float v19; 
  float v20; 
  materialCommands_t *Tess; 
  __int64 vertexCount_low; 
  materialCommands_t *v23; 
  __int64 indexCount; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  GfxCmdBufContext v29; 
  GfxCmdBufContext v30; 

  v14 = *gfxContext;
  v29 = *gfxContext;
  pixelAspect = v29.source->pixelAspect;
  if ( v29.source->viewMode != VIEW_MODE_2D )
  {
    v30 = v14;
    RB_EndSurfaceIfNeeded(&v30);
    R_Set2D(v29.source);
  }
  v18 = *gfxContext;
  v29.source->viewStatsTarget = GFX_VIEW_STATS_2D;
  v29 = v18;
  RB_SetTessTechnique(&v29, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  v19 = (float)(sinAngle * w) * pixelAspect;
  LODWORD(v20) = COERCE_UNSIGNED_INT((float)(sinAngle * h) / pixelAspect) ^ _xmm;
  v29 = *gfxContext;
  RB_CheckTessOverflow(&v29, 4u, 6u);
  v29 = *gfxContext;
  Tess = R_GetTess(&v29);
  vertexCount_low = LOWORD(Tess->vertexCount);
  v23 = Tess;
  indexCount = (int)Tess->indexCount;
  Tess->vertexCount += 4;
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount_low + 3;
  Tess->indices[indexCount + 1] = vertexCount_low;
  Tess->indices[indexCount + 2] = vertexCount_low + 2;
  Tess->indices[indexCount + 3] = vertexCount_low + 2;
  Tess->indices[indexCount + 4] = vertexCount_low;
  Tess->indices[indexCount + 5] = vertexCount_low + 1;
  v25 = (__int64)&Tess->verts[(unsigned int)vertexCount_low];
  *(float *)v25 = x;
  *(float *)(v25 + 4) = y;
  *(_DWORD *)(v25 + 8) = 0;
  *(_DWORD *)(v25 + 12) = 1065353216;
  *(_DWORD *)(v25 + 28) = 1073643391;
  *(_DWORD *)(v25 + 16) = color;
  *(float *)(v25 + 20) = s0;
  *(float *)(v25 + 24) = t0;
  v26 = (__int64)&v23->verts[vertexCount_low + 1];
  *(float *)v26 = (float)(cosAngle * w) + x;
  *(float *)(v26 + 4) = v19 + y;
  *(_DWORD *)(v26 + 8) = 0;
  *(_DWORD *)(v26 + 12) = 1065353216;
  *(_DWORD *)(v26 + 28) = 1073643391;
  *(_DWORD *)(v26 + 16) = color;
  *(float *)(v26 + 20) = s1;
  *(float *)(v26 + 24) = t0;
  v27 = (__int64)&v23->verts[vertexCount_low + 2];
  *(_DWORD *)(v27 + 8) = 0;
  *(_DWORD *)(v27 + 12) = 1065353216;
  *(float *)v27 = v20 + (float)((float)(cosAngle * w) + x);
  *(float *)(v27 + 4) = (float)(cosAngle * h) + (float)(v19 + y);
  *(_DWORD *)(v27 + 28) = 1073643391;
  *(_DWORD *)(v27 + 16) = color;
  *(float *)(v27 + 20) = s1;
  *(float *)(v27 + 24) = t1;
  v28 = (__int64)&v23->verts[vertexCount_low + 3];
  *(float *)v28 = v20 + x;
  *(float *)(v28 + 4) = (float)(cosAngle * h) + y;
  *(_DWORD *)(v28 + 8) = 0;
  *(_DWORD *)(v28 + 12) = 1065353216;
  *(_DWORD *)(v28 + 28) = 1073643391;
  *(_DWORD *)(v28 + 16) = color;
  *(float *)(v28 + 20) = s0;
  *(float *)(v28 + 24) = t1;
}

/*
==============
RB_DrawStretchPic_LargeTriangle
==============
*/
void RB_DrawStretchPic_LargeTriangle(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v14; 
  bool v16; 
  GfxCmdBufContext v17; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  GfxCmdBufContext v24; 
  GfxCmdBufContext v25[2]; 

  source = gfxContext->source;
  v14 = *gfxContext;
  v16 = gfxContext->source->viewMode == VIEW_MODE_2D;
  v25[0] = *gfxContext;
  if ( !v16 )
  {
    v24 = v14;
    RB_EndSurfaceIfNeeded(&v24);
    R_Set2D(source);
  }
  v17 = *gfxContext;
  v25[0].source->viewStatsTarget = GFX_VIEW_STATS_2D;
  v25[0] = v17;
  RB_SetTessTechnique(v25, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  v25[0] = *gfxContext;
  RB_CheckTessOverflow(v25, 3u, 3u);
  v25[0] = *gfxContext;
  Tess = R_GetTess(v25);
  vertexCount = Tess->vertexCount;
  v20 = Tess;
  Tess->indices[Tess->indexCount] = vertexCount;
  Tess->indices[Tess->indexCount + 1] = vertexCount + 1;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  v21 = (__int64)&Tess->verts[Tess->vertexCount];
  *(float *)v21 = x;
  *(float *)(v21 + 4) = y;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 1065353216;
  *(_DWORD *)(v21 + 28) = 1073643391;
  *(_DWORD *)(v21 + 16) = color;
  *(float *)(v21 + 20) = s0;
  *(float *)(v21 + 24) = t0;
  v22 = (__int64)&v20->verts[v20->vertexCount + 1];
  *(float *)v22 = (float)(2.0 * w) + x;
  *(float *)(v22 + 4) = y;
  *(_DWORD *)(v22 + 8) = 0;
  *(_DWORD *)(v22 + 12) = 1065353216;
  *(_DWORD *)(v22 + 28) = 1073643391;
  *(_DWORD *)(v22 + 16) = color;
  *(float *)(v22 + 24) = t0;
  *(float *)(v22 + 20) = (float)((float)(s1 - s0) * 2.0) + s0;
  v23 = (__int64)&v20->verts[v20->vertexCount + 2];
  *(float *)v23 = x;
  *(float *)(v23 + 4) = (float)(2.0 * h) + y;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 12) = 1065353216;
  *(_DWORD *)(v23 + 28) = 1073643391;
  *(_DWORD *)(v23 + 16) = color;
  *(float *)(v23 + 20) = s0;
  *(float *)(v23 + 24) = (float)((float)(t1 - t0) * 2.0) + t0;
  v20->vertexCount += 3;
  v20->indexCount += 3;
}

/*
==============
RB_DrawTaskGraph
==============
*/
char RB_DrawTaskGraph(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  GfxCmdBufState *state; 
  GfxCmdBufContext v10; 
  R_RT_ColorHandle v11; 
  R_RT_ColorHandle result; 
  vec4_t mrtColor; 
  R_RT_Group rtGroup; 

  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 )
    return 0;
  RB_Draw3DScene_FreeRts();
  state = gfxContext->state;
  gfxContext->source->input.data = data;
  R_BackendGpuStatus_Update(state, FINISH_COMPUTE_CMDS);
  v10 = *gfxContext;
  RB_FinishComputeCmds(&v10, data);
  if ( viewInfo->viewportFeatures.m_taskGraphIndex == -1 )
  {
    _XMM6 = *gfxContext;
    mrtColor = (vec4_t)_xmm;
    v10.source = (GfxCmdBufSourceState *)data;
    R_LockGfxImmediateContext();
    v11 = *R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    R_RT_Group::AssignColor(&rtGroup, &v11);
    __asm { vpextrq rbx, xmm6, 1 }
    RB_SetWaitFlipOncePerFrame(_RBX);
    R_ClearRtGroup(_RBX, &rtGroup, 0x3Fu, &mrtColor, 1u, 0.0, 0, PIPE_FLUSH_FULL);
    R_UnlockGfxImmediateContext();
  }
  else
  {
    R_BackendGpuStatus_Update(gfxContext->state, DRAW_TASK_GRAPH);
    v10 = *gfxContext;
    RB_TG_Render(&v10, viewInfo, data);
  }
  R_WaitSkippedDrawWorkerCmds(data);
  return 1;
}

/*
==============
RB_DrawText
==============
*/
void RB_DrawText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, float x, float y, const GfxColor color)
{
  int pixelHeight; 
  bool DoesGlyphUseDistanceField; 
  const Material *v11; 
  int v12; 
  GfxCmdBufContext v13; 
  DrawTextPositionSettings v14; 

  v14.position3D.startPosition.v[1] = y;
  v14.mode = POSITION_2D;
  pixelHeight = font->pixelHeight;
  v14.position3D.startPosition.v[2] = FLOAT_1_0;
  v14.xScale = FLOAT_1_0;
  v14.yScale = FLOAT_1_0;
  v14.position3D.startPosition.v[0] = x;
  v14.position3D.xDirection.v[0] = 0.0;
  v14.tracking = 0;
  DoesGlyphUseDistanceField = FontCache_DoesGlyphUseDistanceField(pixelHeight);
  v11 = rgp.fontMaterial[0];
  if ( DoesGlyphUseDistanceField )
    v11 = rgp.fontSDFMaterial[0];
  v12 = font->pixelHeight;
  v13 = *gfxContext;
  DrawText(&v13, text, font, v12, &v14, color, 0x7FFFFFFF, 0, 0, 0, v11, rgp.iconMaterial, NULL, NULL);
}

/*
==============
RB_DrawTextInSpace
==============
*/
void RB_DrawTextInSpace(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, const vec3_t *org, const float size, const vec3_t *xDir, const vec3_t *yDir, unsigned int color, const FontGlowStyle *glowStyle, const bool centerText)
{
  int MinHeightForDistanceField; 
  const Material *v14; 
  int v15; 
  float v16; 
  GfxCmdBufSourceState *source; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int64 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 
  __int128 v35; 
  FontCacheFXFlags v36; 
  unsigned int CharFromString; 
  unsigned int v38; 
  float x0; 
  float v40; 
  float v41; 
  float v42; 
  float y0; 
  float pixelWidth; 
  float pixelHeight; 
  GfxCmdBufContext v46; 
  float dx; 
  __int128 v48; 
  __int128 v49; 
  __int128 v50; 
  char *texta; 
  FontCacheFXFlags flags; 
  GfxCmdBufContext v53; 
  CachedGlyph outGlyph; 
  GfxCmdBufContext v55; 
  vec3_t v56; 
  vec3_t v57; 

  texta = (char *)text;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3900, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3901, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
  v14 = rgp.fontSDFMaterial[0];
  if ( glowStyle )
    v14 = rgp.fontGlowMaterial[0];
  v15 = MinHeightForDistanceField;
  v16 = size / (float)MinHeightForDistanceField;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3908, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  v55 = *gfxContext;
  flags = glowStyle != NULL;
  RB_EndSurfaceIfNeeded(&v55);
  source = gfxContext->source;
  R_Set3D(gfxContext->source);
  v18 = LODWORD(org->v[0]);
  v19 = LODWORD(org->v[1]);
  v20 = LODWORD(org->v[2]);
  v21 = v16 * xDir->v[0];
  v22 = v16 * xDir->v[1];
  v23 = v16 * xDir->v[2];
  v24 = v16 * yDir->v[0];
  v25 = v16 * yDir->v[1];
  v26 = v16 * yDir->v[2];
  if ( glowStyle )
    RB_SetFontGlowStyleCodeConstants(source, glowStyle);
  if ( centerText )
  {
    v27 = -1i64;
    do
      ++v27;
    while ( texta[v27] );
    v28 = 0i64;
    *(float *)&v28 = (float)R_TextWidth(texta, v27, font, v15) * -0.5;
    v29 = v28;
    *(float *)&v28 = (float)(*(float *)&v28 * v21) + *(float *)&v18;
    v18 = v28;
    v31 = v29;
    *(float *)&v31 = *(float *)&v29 * v23;
    v30 = v31;
    v33 = v29;
    *(float *)&v33 = *(float *)&v29 * v22;
    v32 = v33;
    v34 = v30;
    *(float *)&v34 = *(float *)&v30 + *(float *)&v20;
    v20 = v34;
    v35 = v32;
    *(float *)&v35 = *(float *)&v32 + *(float *)&v19;
    v19 = v35;
  }
  if ( *texta )
  {
    v36 = flags;
    do
    {
      CharFromString = SEH_ReadCharFromString((const char **)&texta);
      if ( !texta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3937, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
        __debugbreak();
      R_GetCharacterGlyphWithFlags(font, v15, CharFromString, &outGlyph, v36);
      v38 = R_ProcessGPadLetterColor(color, CharFromString);
      x0 = (float)outGlyph.x0;
      v40 = (float)(v21 * x0) + *(float *)&v18;
      v41 = (float)(v22 * x0) + *(float *)&v19;
      v42 = v23 * x0;
      y0 = (float)outGlyph.y0;
      *(float *)&v55.source = v40 + (float)(v24 * y0);
      *((float *)&v55.source + 1) = v41 + (float)(v25 * y0);
      *(float *)&v55.state = (float)(v42 + *(float *)&v20) + (float)(v26 * y0);
      pixelWidth = (float)outGlyph.pixelWidth;
      v57.v[0] = v21 * pixelWidth;
      v57.v[2] = v23 * pixelWidth;
      v57.v[1] = v22 * pixelWidth;
      pixelHeight = (float)outGlyph.pixelHeight;
      v56.v[0] = v24 * pixelHeight;
      v56.v[1] = v25 * pixelHeight;
      v46 = *gfxContext;
      v56.v[2] = v26 * pixelHeight;
      v53 = v46;
      RB_DrawCharInSpace(&v53, v14, (const vec3_t *)&v55, &v57, &v56, &outGlyph, v38);
      dx = (float)outGlyph.dx;
      v48 = v18;
      *(float *)&v48 = *(float *)&v18 + (float)(v21 * dx);
      v18 = v48;
      v49 = v20;
      *(float *)&v49 = *(float *)&v20 + (float)(v23 * dx);
      v20 = v49;
      v50 = v19;
      *(float *)&v50 = *(float *)&v19 + (float)(v22 * dx);
      v19 = v50;
    }
    while ( *texta );
  }
  v53 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v53);
}

/*
==============
RB_DrawTextWithSize
==============
*/
void RB_DrawTextWithSize(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, const float size, float x, float y, const GfxColor color)
{
  int pixelHeight; 
  bool DoesGlyphUseDistanceField; 
  const Material *v12; 
  GfxCmdBufContext v13; 
  DrawTextPositionSettings v14; 

  v14.position3D.startPosition.v[0] = x;
  v14.position3D.xDirection.v[0] = 0.0;
  v14.position3D.startPosition.v[1] = y;
  v14.position3D.startPosition.v[2] = FLOAT_1_0;
  v14.xScale = FLOAT_1_0;
  v14.mode = POSITION_2D;
  pixelHeight = font->pixelHeight;
  v14.yScale = size / (float)(int)size;
  v14.tracking = 0;
  DoesGlyphUseDistanceField = FontCache_DoesGlyphUseDistanceField(pixelHeight);
  v12 = rgp.fontMaterial[0];
  if ( DoesGlyphUseDistanceField )
    v12 = rgp.fontSDFMaterial[0];
  v13 = *gfxContext;
  DrawText(&v13, text, font, (int)size, &v14, color, 0x7FFFFFFF, 0, 0, 0, v12, rgp.iconMaterial, NULL, NULL);
}

/*
==============
RB_DrawTiltedRect
==============
*/
void RB_DrawTiltedRect(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v14; 
  bool v16; 
  GfxCmdBufContext v17; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  GfxCmdBufContext v25; 
  GfxCmdBufContext v26; 

  source = gfxContext->source;
  v14 = *gfxContext;
  v16 = gfxContext->source->viewMode == VIEW_MODE_2D;
  v26 = *gfxContext;
  if ( !v16 )
  {
    v25 = v14;
    RB_EndSurfaceIfNeeded(&v25);
    R_Set2D(source);
  }
  v17 = *gfxContext;
  v26.source->viewStatsTarget = GFX_VIEW_STATS_2D;
  v26 = v17;
  RB_SetTessTechnique(&v26, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  v26 = *gfxContext;
  RB_CheckTessOverflow(&v26, 4u, 6u);
  v26 = *gfxContext;
  Tess = R_GetTess(&v26);
  vertexCount = Tess->vertexCount;
  v20 = Tess;
  Tess->indices[Tess->indexCount] = vertexCount + 3;
  Tess->indices[Tess->indexCount + 1] = vertexCount;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 3] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 4] = vertexCount;
  Tess->indices[Tess->indexCount + 5] = vertexCount + 1;
  v21 = (__int64)&Tess->verts[Tess->vertexCount];
  *(float *)(v21 + 4) = y - h;
  *(float *)v21 = x;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 1065353216;
  *(_DWORD *)(v21 + 28) = 1073643391;
  *(_DWORD *)(v21 + 16) = color;
  *(float *)(v21 + 20) = s0;
  *(float *)(v21 + 24) = t0;
  v22 = (__int64)&v20->verts[v20->vertexCount + 1];
  *(float *)v22 = x + w;
  *(float *)(v22 + 4) = y;
  *(_DWORD *)(v22 + 8) = 0;
  *(_DWORD *)(v22 + 12) = 1065353216;
  *(_DWORD *)(v22 + 28) = 1073643391;
  *(_DWORD *)(v22 + 16) = color;
  *(float *)(v22 + 20) = s1;
  *(float *)(v22 + 24) = t0;
  v23 = (__int64)&v20->verts[v20->vertexCount + 2];
  *(float *)(v23 + 4) = y + h;
  *(float *)v23 = x;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 12) = 1065353216;
  *(_DWORD *)(v23 + 28) = 1073643391;
  *(_DWORD *)(v23 + 16) = color;
  *(float *)(v23 + 20) = s1;
  *(float *)(v23 + 24) = t1;
  v24 = (__int64)&v20->verts[v20->vertexCount + 3];
  *(float *)(v24 + 4) = y;
  *(float *)v24 = x - w;
  *(_DWORD *)(v24 + 8) = 0;
  *(_DWORD *)(v24 + 12) = 1065353216;
  *(_DWORD *)(v24 + 28) = 1073643391;
  *(_DWORD *)(v24 + 16) = color;
  *(float *)(v24 + 20) = s0;
  *(float *)(v24 + 24) = t1;
  v20->vertexCount += 4;
  v20->indexCount += 6;
}

/*
==============
RB_DrawTriangle2D
==============
*/
void RB_DrawTriangle2D(GfxCmdBufContext *gfxContext, float x0, float y0, float x1, float y1, float x2, float y2, unsigned int color)
{
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  GfxCmdBufContext v15; 

  source = gfxContext->source;
  if ( gfxContext->source->viewMode != VIEW_MODE_2D )
  {
    v15 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v15);
    R_Set2D(source);
  }
  v15 = *gfxContext;
  source->viewStatsTarget = GFX_VIEW_STATS_2D;
  RB_SetTessTechnique(&v15, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  v15 = *gfxContext;
  RB_CheckTessOverflow(&v15, 3u, 3u);
  v15 = *gfxContext;
  Tess = R_GetTess(&v15);
  vertexCount = Tess->vertexCount;
  Tess->indices[Tess->indexCount] = vertexCount;
  Tess->indices[Tess->indexCount + 1] = vertexCount + 1;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  v12 = (__int64)&Tess->verts[Tess->vertexCount];
  *(float *)v12 = x0;
  *(float *)(v12 + 4) = y0;
  *(_DWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 12) = 1065353216;
  *(_DWORD *)(v12 + 28) = 1073643391;
  *(_DWORD *)(v12 + 16) = color;
  *(_QWORD *)(v12 + 20) = 0i64;
  v13 = (__int64)&Tess->verts[Tess->vertexCount + 1];
  *(float *)v13 = x1;
  *(float *)(v13 + 4) = y1;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 12) = 1065353216;
  *(_DWORD *)(v13 + 28) = 1073643391;
  *(_DWORD *)(v13 + 16) = color;
  *(_QWORD *)(v13 + 20) = 0i64;
  v14 = (__int64)&Tess->verts[Tess->vertexCount + 2];
  *(float *)v14 = x2;
  *(float *)(v14 + 4) = y2;
  *(_DWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 12) = 1065353216;
  *(_DWORD *)(v14 + 28) = 1073643391;
  *(_DWORD *)(v14 + 16) = color;
  *(_QWORD *)(v14 + 20) = 0i64;
  Tess->vertexCount += 3;
  Tess->indexCount += 3;
}

/*
==============
RB_DrawTriangles_Internal2D
==============
*/
void RB_DrawTriangles_Internal2D(GfxCmdBufContext *gfxContext, const Material *material, MaterialTechniqueType techType, unsigned __int8 dimensions, __int16 indexCount, const unsigned __int16 *indices, __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor *color, const vec2_t *st)
{
  GfxCmdBufContext v11; 
  GfxCmdBufContext *v12; 
  __int16 v15; 
  int v16; 
  materialCommands_t *Tess; 
  int v18; 
  materialCommands_t *v19; 
  int v20; 
  __int64 v21; 
  unsigned int *p_indexCount; 
  unsigned __int16 **p_indices; 
  unsigned __int16 *v24; 
  unsigned int *p_vertexCount; 
  unsigned __int16 *v27; 
  unsigned __int64 v30; 
  __int64 v31; 
  const unsigned __int16 *v32; 
  __int64 v33; 
  __int64 v36; 
  __int64 v39; 
  unsigned __int16 v40; 
  __int64 v41; 
  __int64 v42; 
  float *v43; 
  float *v44; 
  float v45; 
  int v46; 
  __int64 v47; 
  GfxColor v48; 
  __int64 v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  __int128 v55; 
  GfxCmdBufContext v69; 
  GfxCmdBufContext v70; 
  __int128 v71; 

  v11 = *gfxContext;
  v12 = gfxContext;
  *(_QWORD *)&v71 = gfxContext;
  v70 = v11;
  RB_EndSurfaceIfNeeded(&v70);
  R_Set2D(v12->source);
  v70 = *v12;
  RB_SetTessTechnique(&v70, material, techType, GFX_PRIM_STATS_DEBUG);
  v15 = vertexCount;
  v70 = *v12;
  v16 = vertexCount;
  RB_CheckTessOverflow(&v70, vertexCount, indexCount);
  v70 = *v12;
  Tess = R_GetTess(&v70);
  v18 = 0;
  v19 = Tess;
  v20 = 0;
  if ( indexCount > 0 && (unsigned int)indexCount >= 0x20 )
  {
    v21 = (int)Tess->indexCount;
    p_indexCount = &Tess->indexCount;
    p_indices = &Tess->indices;
    v24 = Tess->indices;
    _XMM2 = (unsigned int)SLOWORD(Tess->vertexCount);
    p_vertexCount = &Tess->vertexCount;
    v27 = &v24[v21];
    __asm
    {
      vpunpcklwd xmm2, xmm2, xmm2
      vpshufd xmm2, xmm2, 0
    }
    v30 = (unsigned __int64)&v24[indexCount - 1 + (int)v21];
    if ( (v27 > &indices[indexCount - 1] || v30 < (unsigned __int64)indices) && (v27 > (unsigned __int16 *)p_indices || v30 < (unsigned __int64)p_indices) && (v27 > (unsigned __int16 *)p_indexCount || v30 < (unsigned __int64)p_indexCount) && (v27 > (unsigned __int16 *)p_vertexCount || v30 < (unsigned __int64)p_vertexCount) )
    {
      v31 = (unsigned int)(v21 + 16);
      v32 = indices + 16;
      v33 = 0i64;
      do
      {
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-20h] }
        v33 += 32i64;
        *(_OWORD *)&v24[(unsigned int)(v21 + v20)] = _XMM1;
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-10h] }
        v20 += 32;
        v32 += 32;
        *(_OWORD *)&v24[(unsigned int)(v31 - 8)] = _XMM1;
        v36 = (unsigned int)(v31 + 8);
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-40h] }
        *(_OWORD *)&v24[v31] = _XMM1;
        v31 = (unsigned int)(v31 + 32);
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-30h] }
        *(_OWORD *)&v24[v36] = _XMM1;
      }
      while ( v33 < indexCount - indexCount % 32 );
    }
    v12 = (GfxCmdBufContext *)v71;
    v15 = vertexCount;
    v16 = vertexCount;
  }
  v39 = v20;
  if ( v20 < (__int64)indexCount )
  {
    do
    {
      v40 = indices[v39++];
      v41 = v20 + v19->indexCount;
      ++v20;
      v19->indices[v41] = LOWORD(v19->vertexCount) + v40;
    }
    while ( v39 < indexCount );
  }
  if ( v15 > 0 )
  {
    v42 = 0i64;
    v43 = &xyzw->v[2];
    v44 = &normal->v[1];
    do
    {
      v45 = *(v44 - 1);
      v46 = *((_DWORD *)v43 - 2);
      v47 = v18 + v19->vertexCount;
      v48 = color[v42];
      ++v18;
      v49 = (__int64)&v19->verts[v47];
      v44 += 3;
      v50 = v43[1];
      v51 = *v43;
      v52 = st[v42].v[1];
      v53 = st[v42].v[0];
      *(float *)(v49 + 4) = *(v43 - 1);
      *(_DWORD *)v49 = v46;
      v43 += 4;
      *(float *)(v49 + 8) = v51;
      *(float *)(v49 + 12) = v50;
      ++v42;
      HIDWORD(v71) = 0;
      v55 = v71;
      *(float *)&v55 = v45;
      _XMM6 = v55;
      __asm
      {
        vinsertps xmm6, xmm6, xmm4, 10h
        vinsertps xmm6, xmm6, xmm5, 20h ; ' '
        vmaxps  xmm0, xmm6, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
      __asm
      {
        vcvttps2dq xmm3, xmm2
        vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm4, 0EEh ; 'î'
        vpor    xmm1, xmm0, xmm4
        vpshufd xmm0, xmm1, 55h ; 'U'
        vpor    xmm1, xmm0, xmm1
        vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
      }
      *(GfxColor *)(v49 + 16) = v48;
      __asm { vblendps xmm0, xmm6, xmm2, 1 }
      *(_DWORD *)(v49 + 28) = _XMM0;
      *(float *)(v49 + 20) = v53;
      *(float *)(v49 + 24) = v52;
      v71 = _XMM6;
    }
    while ( v42 < v15 );
  }
  v69 = *v12;
  v19->indexCount += indexCount;
  v19->vertexCount += v16;
  v70 = v69;
  RB_EndTessSurfaceInternal(&v70, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2824)");
}

/*
==============
RB_DrawTriangles_Internal3D
==============
*/
void RB_DrawTriangles_Internal3D(GfxCmdBufContext *gfxContext, const Material *material, MaterialTechniqueType techType, unsigned __int8 dimensions, __int16 indexCount, const unsigned __int16 *indices, __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor *color, const vec2_t *st)
{
  GfxCmdBufContext v11; 
  GfxCmdBufContext *v12; 
  __int16 v15; 
  int v16; 
  materialCommands_t *Tess; 
  int v18; 
  materialCommands_t *v19; 
  int v20; 
  __int64 v21; 
  unsigned int *p_indexCount; 
  unsigned __int16 **p_indices; 
  unsigned __int16 *v24; 
  unsigned int *p_vertexCount; 
  unsigned __int16 *v27; 
  unsigned __int64 v30; 
  __int64 v31; 
  const unsigned __int16 *v32; 
  __int64 v33; 
  __int64 v36; 
  __int64 v39; 
  unsigned __int16 v40; 
  __int64 v41; 
  __int64 v42; 
  float *v43; 
  float *v44; 
  float v45; 
  int v46; 
  __int64 v47; 
  GfxColor v48; 
  __int64 v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  __int128 v55; 
  GfxCmdBufContext v69; 
  GfxCmdBufContext v70; 
  __int128 v71; 

  v11 = *gfxContext;
  v12 = gfxContext;
  *(_QWORD *)&v71 = gfxContext;
  v70 = v11;
  RB_EndSurfaceIfNeeded(&v70);
  R_Set3D(v12->source);
  v70 = *v12;
  RB_SetTessTechnique(&v70, material, techType, GFX_PRIM_STATS_DEBUG);
  v15 = vertexCount;
  v70 = *v12;
  v16 = vertexCount;
  RB_CheckTessOverflow(&v70, vertexCount, indexCount);
  v70 = *v12;
  Tess = R_GetTess(&v70);
  v18 = 0;
  v19 = Tess;
  v20 = 0;
  if ( indexCount > 0 && (unsigned int)indexCount >= 0x20 )
  {
    v21 = (int)Tess->indexCount;
    p_indexCount = &Tess->indexCount;
    p_indices = &Tess->indices;
    v24 = Tess->indices;
    _XMM2 = (unsigned int)SLOWORD(Tess->vertexCount);
    p_vertexCount = &Tess->vertexCount;
    v27 = &v24[v21];
    __asm
    {
      vpunpcklwd xmm2, xmm2, xmm2
      vpshufd xmm2, xmm2, 0
    }
    v30 = (unsigned __int64)&v24[indexCount - 1 + (int)v21];
    if ( (v27 > &indices[indexCount - 1] || v30 < (unsigned __int64)indices) && (v27 > (unsigned __int16 *)p_indices || v30 < (unsigned __int64)p_indices) && (v27 > (unsigned __int16 *)p_indexCount || v30 < (unsigned __int64)p_indexCount) && (v27 > (unsigned __int16 *)p_vertexCount || v30 < (unsigned __int64)p_vertexCount) )
    {
      v31 = (unsigned int)(v21 + 16);
      v32 = indices + 16;
      v33 = 0i64;
      do
      {
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-20h] }
        v33 += 32i64;
        *(_OWORD *)&v24[(unsigned int)(v21 + v20)] = _XMM1;
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-10h] }
        v20 += 32;
        v32 += 32;
        *(_OWORD *)&v24[(unsigned int)(v31 - 8)] = _XMM1;
        v36 = (unsigned int)(v31 + 8);
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-40h] }
        *(_OWORD *)&v24[v31] = _XMM1;
        v31 = (unsigned int)(v31 + 32);
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-30h] }
        *(_OWORD *)&v24[v36] = _XMM1;
      }
      while ( v33 < indexCount - indexCount % 32 );
    }
    v12 = (GfxCmdBufContext *)v71;
    v15 = vertexCount;
    v16 = vertexCount;
  }
  v39 = v20;
  if ( v20 < (__int64)indexCount )
  {
    do
    {
      v40 = indices[v39++];
      v41 = v20 + v19->indexCount;
      ++v20;
      v19->indices[v41] = LOWORD(v19->vertexCount) + v40;
    }
    while ( v39 < indexCount );
  }
  if ( v15 > 0 )
  {
    v42 = 0i64;
    v43 = &xyzw->v[2];
    v44 = &normal->v[1];
    do
    {
      v45 = *(v44 - 1);
      v46 = *((_DWORD *)v43 - 2);
      v47 = v18 + v19->vertexCount;
      v48 = color[v42];
      ++v18;
      v49 = (__int64)&v19->verts[v47];
      v44 += 3;
      v50 = v43[1];
      v51 = *v43;
      v52 = st[v42].v[1];
      v53 = st[v42].v[0];
      *(float *)(v49 + 4) = *(v43 - 1);
      *(_DWORD *)v49 = v46;
      v43 += 4;
      *(float *)(v49 + 8) = v51;
      *(float *)(v49 + 12) = v50;
      ++v42;
      HIDWORD(v71) = 0;
      v55 = v71;
      *(float *)&v55 = v45;
      _XMM6 = v55;
      __asm
      {
        vinsertps xmm6, xmm6, xmm4, 10h
        vinsertps xmm6, xmm6, xmm5, 20h ; ' '
        vmaxps  xmm0, xmm6, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      }
      _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
      __asm
      {
        vcvttps2dq xmm3, xmm2
        vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm4, 0EEh ; 'î'
        vpor    xmm1, xmm0, xmm4
        vpshufd xmm0, xmm1, 55h ; 'U'
        vpor    xmm1, xmm0, xmm1
        vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
      }
      *(GfxColor *)(v49 + 16) = v48;
      __asm { vblendps xmm0, xmm6, xmm2, 1 }
      *(_DWORD *)(v49 + 28) = _XMM0;
      *(float *)(v49 + 20) = v53;
      *(float *)(v49 + 24) = v52;
      v71 = _XMM6;
    }
    while ( v42 < v15 );
  }
  v69 = *v12;
  v19->indexCount += indexCount;
  v19->vertexCount += v16;
  v70 = v69;
  RB_EndTessSurfaceInternal(&v70, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2851)");
}

/*
==============
RB_DrawUnitCube
==============
*/
void RB_DrawUnitCube(GfxCmdBufContext *gfxContext, const Material *material, GfxPrimStatsTarget primStatsTarget, bool flipNormals)
{
  materialCommands_t *Tess; 
  int v10; 
  char v11; 
  __int64 v12; 
  __int64 v13; 
  float v17; 
  float v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  __int64 v33; 
  __int64 v34; 
  unsigned int vertexCount; 
  float v36; 
  float v37; 
  __int64 v38; 
  unsigned __int16 v39; 
  __int64 v40; 
  __int64 v41; 
  bool v42; 
  __int16 v43; 
  __int16 v44; 
  __int16 v45; 
  float v46; 
  int v47; 
  __int64 v48; 
  GfxCmdBufContext v50; 

  if ( gfxContext->source->viewMode != VIEW_MODE_3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 1081, ASSERT_TYPE_ASSERT, "(gfxContext.source->viewMode == VIEW_MODE_3D)", (const char *)&queryFormat, "gfxContext.source->viewMode == VIEW_MODE_3D") )
    __debugbreak();
  v50 = *gfxContext;
  RB_SetTessTechnique(&v50, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  v50 = *gfxContext;
  RB_CheckTessOverflow(&v50, 0x18u, 0x24u);
  v50 = *gfxContext;
  _XMM9 = LODWORD(FLOAT_1_0);
  Tess = R_GetTess(&v50);
  v48 = 0i64;
  v10 = 0;
  v42 = !flipNormals;
  v47 = 0;
  v43 = flipNormals + 1;
  v11 = 0;
  v44 = 2 * !flipNormals + 1;
  v45 = 2 * flipNormals + 1;
  do
  {
    v12 = (unsigned int)v10 >> 1;
    v13 = v12;
    _XMM0 = (unsigned int)v12;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm8, xmm2
    }
    v17 = *(float *)&_XMM0;
    _XMM0 = v10 & 1;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm8, xmm2
    }
    v21 = *(float *)&_XMM0;
    v22 = 2 * v12 + (v11 & 1);
    v23 = 0;
    v24 = 2 * v12 - (v10 & 1);
    do
    {
      v25 = (unsigned int)v23 >> 1;
      v26 = v23 & 1;
      _XMM0 = (unsigned int)v23 >> 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm9, xmm8, xmm2
      }
      v46 = *(float *)&_XMM0;
      _XMM0 = v23 & 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm9, xmm8, xmm2
      }
      if ( (unsigned int)v13 >= 3 )
      {
        LODWORD(v41) = 3;
        LODWORD(v40) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      v33 = (int)otherAxis[0][v22];
      *((float *)&v50.source + v13) = v21 * v17;
      if ( (unsigned int)v33 >= 3 )
      {
        LODWORD(v41) = 3;
        LODWORD(v40) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      *((float *)&v50.source + v33) = v46;
      v34 = (int)otherAxis[0][v24 + 1];
      if ( (unsigned int)v34 >= 3 )
      {
        LODWORD(v41) = 3;
        LODWORD(v40) = otherAxis[0][v24 + 1];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v40, v41) )
          __debugbreak();
      }
      vertexCount = Tess->vertexCount;
      *((float *)&v50.source + v34) = *(float *)&_XMM0;
      v36 = *(float *)&v50.source;
      v37 = *((float *)&v50.source + 1);
      v38 = (__int64)&Tess->verts[v23 + vertexCount];
      ++v23;
      *(_DWORD *)(v38 + 12) = 1065353216;
      *(float *)v38 = v36;
      *(float *)(v38 + 8) = *(float *)&v50.state;
      *(float *)(v38 + 4) = v37;
      *(_DWORD *)(v38 + 28) = 1073643391;
      *(_DWORD *)(v38 + 16) = -1;
      *(float *)(v38 + 20) = (float)v25;
      *(float *)(v38 + 24) = (float)v26;
    }
    while ( v23 < 4 );
    v39 = Tess->vertexCount;
    Tess->indices[Tess->indexCount] = v39 + v42 + 1;
    Tess->indices[Tess->indexCount + 1] = v39;
    Tess->indices[Tess->indexCount + 2] = v43 + v39;
    Tess->indices[Tess->indexCount + 3] = v44 + v39;
    Tess->indices[Tess->indexCount + 4] = v39 + 2;
    v11 = ++v48;
    Tess->indices[Tess->indexCount + 5] = v39 + v45;
    Tess->vertexCount += 4;
    v10 = v47 + 1;
    Tess->indexCount += 6;
    v47 = v10;
  }
  while ( v10 < 6 );
  v50 = *gfxContext;
  RB_EndTessSurfaceInternal(&v50, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(1127)");
}

/*
==============
RB_EndFrame
==============
*/
void RB_EndFrame(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  bool v4; 
  unsigned __int16 frontendFramePass; 
  Online_VideoStreaming *Instance; 
  R_RT_ColorHandle *GlobalColor; 
  GfxCmdBufState *state; 
  R_RT_ColorHandle *v9; 
  GfxCmdBufState *v10; 
  unsigned __int64 v11; 
  GfxCmdBufContext v12; 
  GfxCmdBufContext v13; 
  R_RT_ColorHandle v14; 
  R_RT_ColorHandle v15; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v17; 

  Profile2_UpdateEntry(65);
  if ( ((unsigned __int8)&dword_14FDE80D4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80D4) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80D4);
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5661, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5662, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData != data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5663, ASSERT_TYPE_ASSERT, "(backEndData == data)", (const char *)&queryFormat, "backEndData == data") )
    __debugbreak();
  if ( !data->renderFromBackEnd && !data->finishReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5669, ASSERT_TYPE_ASSERT, "(data->renderFromBackEnd || data->finishReady)", (const char *)&queryFormat, "data->renderFromBackEnd || data->finishReady") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  R_BackendGpuStatus_Update(gfxContext->state, STREAM_BACKEND_FRAME_END);
  v12 = *gfxContext;
  RB_Stream_BackendFrameEnd(&v12, data);
  v4 = (data->drawType & 2) != 0;
  if ( (data->drawType & 2) != 0 && data->finishReady )
  {
    frontendFramePass = data->frontendFramePass;
    Instance = Online_VideoStreaming::GetInstance();
    if ( !Online_VideoStreaming::IsPlayerActive(Instance) || R_Cinematic_PendingSyncFrame() )
      RB_Cinematic_EndFrame(data);
    RB_HDRToSDR_Process(gfxContext);
    RB_ClearGlobalBackEndData(data);
    R_LockGfxImmediateContext();
    R_GPU_EndTimer();
    R_ResetRenderTargets(gfxContext->state);
    R_UnlockGfxImmediateContext();
    GlobalColor = R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    state = gfxContext->state;
    v14 = *GlobalColor;
    R_AddRenderTargetTransition(state, &v14, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
    {
      v9 = R_RT_GetGlobalColor(&v17, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
      v10 = gfxContext->state;
      v15 = *v9;
      R_AddRenderTargetTransition(v10, &v15, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    R_LockGfxImmediateContext();
    R_BackendGpuStatus_Update(gfxContext->state, END_TRANSITIONS);
    R_FlushResourceTransitions(gfxContext->state);
    R_UnlockGfxImmediateContext();
    R_RT_BackendFrameEnd(frontendFramePass, 0);
    R_LockGfxImmediateContext();
    RB_InsertFrameEndQuery_GPUTimer();
    R_GPU_EndFrame();
    R_UnlockGfxImmediateContext();
    Profile2_Begin(66);
    R_LockGfxImmediateContext();
    R_BackendGpuStatus_Update(gfxContext->state, SWAP_BUFFERS);
    R_LockGfxImmediateContext();
    v11 = R_FlushImmediateContext();
    R_DynamicRingBufferInsertGivenFence(&gfxBuf.dynamicIndexRingBuffer, v11);
    R_DynamicRingBufferInsertGivenFence(&gfxBuf.dynamicVertexRingBuffer, v11);
    R_EndFrameConstantBufferInfo(&g_dx.constantBufferInfo, v11);
    R_EndFrameDescriptorHeapInfo(&g_dx.backendDescHeapInfo, v11);
    R_UnlockGfxImmediateContext();
    v13 = *gfxContext;
    RB_SwapBuffers(&v13, v11);
    R_BackendGpuStatus_Update(gfxContext->state, BACKEND_FINISHED);
    R_UnlockGfxImmediateContext();
    Profile2_End(66);
    Sys_ProfFrameSync();
    Profile2_End(65);
  }
  else
  {
    RB_ClearGlobalBackEndData(data);
    if ( v4 )
    {
      R_LockGfxImmediateContext();
      R_GPU_EndTimer();
      RB_InsertFrameEndQuery_GPUTimer();
      R_GPU_EndFrame();
      R_UnlockGfxImmediateContext();
    }
    Profile2_UpdateEntry(65);
    if ( ((unsigned __int64)&dword_14FDE80D4 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80D4) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE80D4);
  }
}

/*
==============
RB_ExecuteRenderCommands
==============
*/
void RB_ExecuteRenderCommands(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext *v1; 
  materialCommands_t *Tess; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v7; 
  float renderTargetHeight; 
  float v9; 
  float renderTargetWidth; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *v12; 
  unsigned int v13; 
  GfxImage *blackImage; 
  GfxImage *v15; 
  GfxCmdBufInput *v16; 
  const GfxWrappedBuffer *ConstantBuffer; 
  GfxCmdBufSourceState *v18; 
  const GfxWrappedBuffer *v19; 
  __int64 v20; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  GfxCmdBufInput *v22; 
  ComputeCmdBufState *v23; 
  GfxCmdBufContext v24; 
  __int64 cmds; 
  unsigned int indexCount; 
  unsigned __int16 v27; 
  unsigned int v28; 
  GfxDevice *device; 
  unsigned int *m_pCurrent; 
  _QWORD v31[3]; 
  __int64 v32[2]; 
  GfxCmdBufContext v33; 
  GfxCmdBufContext v34; 
  GfxCmdBufContext v35; 
  GfxCmdBufContext v36; 
  GfxCmdBufContext v37; 
  GfxCmdBufContext v38; 
  GfxCmdBufContext v39; 
  GfxCmdBufContext v40; 
  GfxCmdBufContext v41; 
  GfxCmdBufContext v42; 
  GfxCmdBufContext v43; 
  GfxCmdBufContext v44; 
  GfxCmdBufContext v45; 
  GfxCmdBufContext v46; 
  GfxCmdBufContext v47; 
  GfxCmdBufContext v48; 
  R_RT_Handle v49; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v51; 
  R_RT_Group v52; 
  materialCommands_t *v53; 
  int v54; 
  int v55; 
  R_RT_Group v56; 

  v1 = gfxContext;
  v31[1] = gfxContext;
  Sys_ProfBeginNamedEvent(0xFF800000, "exec backend cmds");
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6519, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  v34 = *v1;
  Tess = R_GetTess(&v34);
  v53 = Tess;
  if ( Tess->indexCount )
  {
    LODWORD(v31[0]) = Tess->indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6522, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v31[0]) )
      __debugbreak();
  }
  v35 = *v1;
  RB_Draw3DOverlays(&v35, backEndData);
  if ( Tess->indexCount )
  {
    LODWORD(v31[0]) = Tess->indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6532, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v31[0]) )
      __debugbreak();
  }
  source = v1->source;
  R_InitCmdBufSourceState(v1->source, &g_gfxCmdBufInput);
  state = v1->state;
  R_InitLocalCmdBufState(state, &source->input);
  R_ClearDescriptorCBVs(state->descState);
  v36 = *v1;
  RB_InitSceneViewport(&v36);
  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  v49 = (R_RT_Handle)result;
  height = R_RT_Handle::GetSurface(&v49)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v49);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  v51 = result;
  R_RT_Group::AssignColor(&v52, &v51);
  *(__m256i *)&v56.m_colorRtCount = *(__m256i *)&v52.m_colorRtCount;
  *(__m256i *)&v56.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v52.m_colorRts[0].m_tracking.m_location;
  *(__m256i *)&v56.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v52.m_colorRts[1].m_tracking.m_location;
  *(__m256i *)&v56.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v52.m_colorRts[2].m_tracking.m_location;
  v7 = *v1;
  *(__m256i *)&v56.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v52.m_colorRts[3].m_tracking.m_location;
  *(__m256i *)&v56.m_depthRt.m_tracking.m_location = *(__m256i *)&v52.m_depthRt.m_tracking.m_location;
  v56.m_vrsRt.m_tracking.m_location = v52.m_vrsRt.m_tracking.m_location;
  v37 = v7;
  R_SetRenderTargetsInternal(&v37, &v56, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(6546)");
  renderTargetHeight = (float)source->renderTargetHeight;
  v9 = renderTargetHeight * vidConfig.windowAspectRatio;
  renderTargetWidth = (float)source->renderTargetWidth;
  source->pixelAspect = (float)(renderTargetHeight * vidConfig.windowAspectRatio) / renderTargetWidth;
  if ( (float)(v9 / renderTargetWidth) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1176, ASSERT_TYPE_ASSERT, "(source->pixelAspect > 0.0f)", (const char *)&queryFormat, "source->pixelAspect > 0.0f") )
    __debugbreak();
  R_SetViewportAndScissorSeparate(state, &source->sceneViewport, &source->sceneViewport);
  R_SetGameTime(source, 0.0);
  p_input = &source->input;
  R_SetMovieImages(&source->input);
  v38 = *v1;
  RB_SetDefaultUIState(&v38, backEndData, NULL);
  v12 = v1->source;
  v13 = 0;
  *(_QWORD *)v12->input.consts[129].v = 1065353216i64;
  *(_QWORD *)&v12->input.consts[129].xyz.z = 0i64;
  ++v12->constVersions[129];
  v12->input.consts[130].v[0] = 0.0;
  *(_QWORD *)&v12->input.consts[130].xyz.y = 1065353216i64;
  *(_QWORD *)(&v12->input.consts[130].xyz + 1) = 0i64;
  ++v12->constVersions[130];
  v12->input.consts[131].v[1] = 0.0;
  *(_QWORD *)&v12->input.consts[131].xyz.z = 1065353216i64;
  ++v12->constVersions[131];
  R_BackendGpuStatus_Update(state, FONT_CACHE_FLUSH_GLYPHS);
  FontCache_PreCacheFlush(1u);
  FontCache_FlushDeferredGlyphs(state);
  v39 = *v1;
  RB_DynamicLightsets_DisplayDebug(&v39, backEndData);
  if ( backEndData->cmds )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "exec cmds 2d (backend)");
    R_GPU_BeginTimer(GPU_TIMER_2D_BACKEND);
    R_ProfBeginNamedEvent(state, "2D (Backend)");
    *(_QWORD *)source->input.consts[5].v = 0i64;
    source->input.consts[5].v[2] = 1.0;
    source->input.consts[5].v[3] = 1.0;
    ++source->constVersions[5];
    blackImage = rgp.blackImage;
    if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    {
      __debugbreak();
      source = v1->source;
    }
    p_input->codeImages[79] = blackImage;
    v15 = rgp.blackImage;
    if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v16 = &source->input;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v16->codeImages[6] = v15;
    ConstantBuffer = R_Tonemap_GetConstantBuffer(NULL);
    v18 = v1->source;
    v19 = ConstantBuffer;
    v20 = (__int64)&v1->source->input;
    if ( v1->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    *(_QWORD *)(v20 + 7424) = v19;
    globalSceneConstantBuffer = backEndData->globalSceneConstantBuffer;
    v22 = &v18->input;
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v23 = v1->state;
    v22->codeBuffers[0] = globalSceneConstantBuffer;
    R_BackendGpuStatus_Update(v23, EXECUTE_RENDER_COMMANDS_LOOP);
    v24 = *v1;
    v40 = *v1;
    cmds = (__int64)backEndData->cmds;
    indexCount = R_GetTess(&v40)->indexCount;
    if ( indexCount )
    {
      LODWORD(v31[0]) = indexCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5940, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v31[0]) )
        __debugbreak();
    }
    if ( (cmds & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5942, ASSERT_TYPE_ASSERT, "(IsAligned( cmds, GFXCMD_MAX_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( cmds, GFXCMD_MAX_ALIGNMENT )") )
      __debugbreak();
    v32[0] = cmds;
    v32[1] = 0i64;
    v33 = v24;
    while ( 1 )
    {
      if ( *(_WORD *)cmds >= 0x2Cu )
      {
        LODWORD(v31[0]) = *(unsigned __int16 *)cmds;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5956, ASSERT_TYPE_ASSERT, "( ( header->id < ( sizeof( *array_counter( RB_RenderCommandTable ) ) + 0 ) ) )", "( header->id ) = %i", v31[0]) )
          __debugbreak();
      }
      v27 = *(_WORD *)cmds;
      if ( !*(_WORD *)cmds )
        break;
      if ( !RB_RenderCommandTable[v27] )
      {
        LODWORD(v31[0]) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5963, ASSERT_TYPE_ASSERT, "( ( RB_RenderCommandTable[header->id] ) )", "( header->id ) = %i", v31[0]) )
          __debugbreak();
      }
      RB_RenderCommandTable[*(unsigned __int16 *)cmds]((GfxRenderCommandExecState *)v32);
      if ( v32[0] == cmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5967, ASSERT_TYPE_ASSERT, "(execState.cmd != prevCmd)", (const char *)&queryFormat, "execState.cmd != prevCmd") )
        __debugbreak();
      cmds = v32[0];
    }
    v41 = v33;
    RB_EndSurfaceIfNeeded(&v41);
    v1 = (GfxCmdBufContext *)v31[1];
    state = *(GfxCmdBufState **)(v31[1] + 8i64);
    R_ProfEndNamedEvent(state);
    R_GPU_EndTimer();
    Sys_ProfEndNamedEvent();
    Tess = v53;
  }
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "exec backend debug cmds");
  if ( r_drawPrimHistogram->current.enabled )
  {
    v28 = 0;
    *(GfxCmdBufContext *)&v31[1] = *v1;
    if ( backEndData->endSwapFrame - 1 > 0 )
      v28 = backEndData->endSwapFrame - 1;
    RB_DrawPrimHistogramOverlay((GfxCmdBufContext *)&v31[1], v28);
  }
  if ( r_debugDrawCinematicFrames->current.enabled )
  {
    v42 = *v1;
    RB_Cinematic_DebugDrawFrames(&v42);
  }
  v43 = *v1;
  RB_DrawProfile(&v43);
  v44 = *v1;
  RB_DrawProfile2(&v44);
  v45 = *v1;
  RB_DrawProfileScript(&v45);
  RB_GPU_UpdateFullFrameTime();
  v46 = *v1;
  RB_GPU_DrawTimers(&v46);
  v47 = *v1;
  RB_DrawCPUTimelineProfile(&v47);
  v48 = *v1;
  RB_HDRSpotMeter_Draw(&v48);
  Sys_ProfEndNamedEvent();
  if ( Tess->vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6642, ASSERT_TYPE_ASSERT, "(!tess.vertexCount)", (const char *)&queryFormat, "!tess.vertexCount") )
  {
    __debugbreak();
    state = v1->state;
  }
  if ( !R_IsLockedIfGfxImmediateContext(state->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
    __debugbreak();
  if ( state->indexBuffer || state->indexType != DXGI_FORMAT_R16_UINT || !state->isIndexBufferBound )
  {
    device = state->device;
    if ( !device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1645, ASSERT_TYPE_ASSERT, "(device)", (const char *)&queryFormat, "device") )
      __debugbreak();
    state->indexBuffer = NULL;
    state->indexType = DXGI_FORMAT_R16_UINT;
    v55 = 57;
    v53 = NULL;
    v54 = 0;
    m_pCurrent = device->m_Putter.m_pCurrent;
    if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
    {
      ((void (__fastcall *)(GfxDevice *, materialCommands_t **))device->m_pFunction[15].Release)(device, &v53);
    }
    else
    {
      *m_pCurrent = 1073854265;
      *(_QWORD *)(m_pCurrent + 1) = v53;
      device->m_Putter.m_pCurrent = m_pCurrent + 3;
    }
    state->isIndexBufferBound = 0;
  }
  R_ClearAllVertexBuffers(v1->state);
  R_ShutdownLocalCmdBufState(v1->state, &v1->source->input);
  if ( Tess->indexCount )
  {
    LODWORD(v31[0]) = Tess->indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6651, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v31[0]) )
      __debugbreak();
  }
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6654, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "dev perf counters");
  if ( backEndData->endSwapFrame - 3 > 0 )
    v13 = backEndData->endSwapFrame - 3;
  RB_Stats_UpdateMaxs(v13, &backEnd.frameStatsMax);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
RB_ExecuteRenderCommandsLoop
==============
*/
void RB_ExecuteRenderCommandsLoop(GfxCmdBufContext *gfxContext, const void *cmds, const Material *mtlOverride)
{
  unsigned int indexCount; 
  GfxCmdBufContext v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  unsigned int v10; 
  GfxCmdBufContext v11; 
  __int64 v12[2]; 
  GfxCmdBufContext v13; 

  v11 = *gfxContext;
  indexCount = R_GetTess(&v11)->indexCount;
  if ( indexCount )
  {
    v10 = indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5940, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v10) )
      __debugbreak();
  }
  if ( ((unsigned __int8)cmds & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5942, ASSERT_TYPE_ASSERT, "(IsAligned( cmds, GFXCMD_MAX_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( cmds, GFXCMD_MAX_ALIGNMENT )") )
    __debugbreak();
  v7 = *gfxContext;
  v12[1] = (__int64)mtlOverride;
  v13 = v7;
  for ( v12[0] = (__int64)cmds; ; cmds = (const void *)v12[0] )
  {
    if ( *(_WORD *)cmds >= 0x2Cu )
    {
      LODWORD(v9) = *(unsigned __int16 *)cmds;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5956, ASSERT_TYPE_ASSERT, "( ( header->id < ( sizeof( *array_counter( RB_RenderCommandTable ) ) + 0 ) ) )", "( header->id ) = %i", v9) )
        __debugbreak();
    }
    v8 = *(_WORD *)cmds;
    if ( !*(_WORD *)cmds )
      break;
    if ( !RB_RenderCommandTable[v8] )
    {
      LODWORD(v9) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5963, ASSERT_TYPE_ASSERT, "( ( RB_RenderCommandTable[header->id] ) )", "( header->id ) = %i", v9) )
        __debugbreak();
    }
    RB_RenderCommandTable[*(unsigned __int16 *)cmds]((GfxRenderCommandExecState *)v12);
    if ( (const void *)v12[0] == cmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5967, ASSERT_TYPE_ASSERT, "(execState.cmd != prevCmd)", (const char *)&queryFormat, "execState.cmd != prevCmd") )
      __debugbreak();
  }
  v11 = v13;
  RB_EndSurfaceIfNeeded(&v11);
}

/*
==============
RB_FullScreenColoredFilterInternal
==============
*/
void RB_FullScreenColoredFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, unsigned int color, const char *fileAndLine)
{
  GfxCmdBufContext v4; 

  v4 = *gfxContext;
  RB_DrawFullScreenColoredQuadInternal(&v4, material, 0.0, 0.0, 1.0, 1.0, color, fileAndLine);
}

/*
==============
RB_FullScreenFilterInternal
==============
*/
void RB_FullScreenFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, const char *fileAndLine)
{
  GfxCmdBufContext v3; 

  v3 = *gfxContext;
  RB_DrawFullScreenColoredQuadInternal(&v3, material, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, fileAndLine);
}

/*
==============
RB_GetBackEndTess
==============
*/
GfxTriListStorage<65535,196608> *RB_GetBackEndTess()
{
  return &s_rbTess;
}

/*
==============
RB_GetClientIndexForRTT
==============
*/
__int64 RB_GetClientIndexForRTT(const GfxBackEndData *data)
{
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4173, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->viewInfoCount )
    return (unsigned int)data->viewInfo[data->viewInfoIndex].clientIndex;
  else
    return 0i64;
}

/*
==============
RB_GetData
==============
*/
const GfxBackEndData *RB_GetData()
{
  const GfxBackEndData *result; 

  if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6777, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6778, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  result = Sys_GetRenderThreadData();
  s_isRenderThreadDrawing = result != NULL;
  return result;
}

/*
==============
RB_GetScreenFilterSourceTextureCoordinates
==============
*/
void RB_GetScreenFilterSourceTextureCoordinates(float *outS0, float *outT0, float *outS1, float *outT1, const GfxViewInfo *viewInfo)
{
  float sceneWidth; 
  float v6; 
  float sceneHeight; 
  float v8; 
  float x; 
  float v10; 
  float y; 
  float v12; 
  float width; 
  __int64 height; 
  float v15; 

  sceneWidth = (float)vidConfig.sceneWidth;
  v6 = 1.0 / sceneWidth;
  sceneHeight = (float)vidConfig.sceneHeight;
  v8 = 1.0 / sceneHeight;
  x = (float)viewInfo->sceneViewport.x;
  v10 = x * v6;
  y = (float)viewInfo->sceneViewport.y;
  v12 = y * v8;
  width = (float)viewInfo->sceneViewport.width;
  height = viewInfo->sceneViewport.height;
  *outS0 = v10;
  v15 = (float)height;
  *outS1 = (float)(width * v6) + v10;
  *outT1 = (float)(v15 * v8) + v12;
  *outT0 = v12;
}

/*
==============
RB_GetUIWhiteBalanceParams
==============
*/
void RB_GetUIWhiteBalanceParams(const GfxViewInfo *viewInfo, vec4_t *outMatrixR, vec4_t *outMatrixG, vec4_t *outMatrixB)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  tmat33_t<vec3_t> matrix; 

  if ( viewInfo )
  {
    R_WhiteBalance_SetMatrix(&viewInfo->whiteBalance, &viewInfo->tonemap.whitePoint, &matrix);
    v7 = matrix.m[1].v[0];
    outMatrixR->v[0] = matrix.m[0].v[0];
    outMatrixR->v[2] = matrix.m[2].v[0];
    v8 = matrix.m[0].v[1];
    outMatrixR->v[1] = v7;
    v9 = matrix.m[1].v[1];
    outMatrixR->v[3] = 0.0;
    outMatrixG->v[0] = v8;
    v10 = matrix.m[2].v[1];
    outMatrixG->v[1] = v9;
    v11 = matrix.m[0].v[2];
    outMatrixG->v[2] = v10;
    v12 = matrix.m[1].v[2];
    outMatrixG->v[3] = 0.0;
    outMatrixB->v[0] = v11;
    outMatrixB->v[2] = matrix.m[2].v[2];
    outMatrixB->v[1] = v12;
    outMatrixB->v[3] = 0.0;
  }
  else
  {
    *outMatrixR = (vec4_t)0x3F800000ui64;
    outMatrixG->v[0] = 0.0;
    *(_QWORD *)&outMatrixG->xyz.y = 1065353216i64;
    outMatrixG->v[3] = 0.0;
    *(_QWORD *)outMatrixB->v = 0i64;
    *(_QWORD *)&outMatrixB->xyz.z = 1065353216i64;
  }
}

/*
==============
RB_InitBackendGlobalStructs
==============
*/

void __fastcall RB_InitBackendGlobalStructs(__int64 a1, double _XMM1_8)
{
  GfxCmdBufContext result; 

  memset_0(&backEnd, 0, sizeof(backEnd));
  _XMM0 = *RB_GetBackendCmdBufContext(&result);
  result = _XMM0;
  RB_InitSceneViewport(&result);
  g_gfxCmdBufInput.codePersistentImages[2] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codePersistentImages[3] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codePersistentImages[4] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codePersistentImages[1] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codeImages[81] = rgp.blackImage3D;
  g_gfxCmdBufInput.codeImages[82] = rgp.blackImage3D;
  g_gfxCmdBufInput.codePersistentImages[7] = rgp.cloudNoiseImage;
  g_gfxCmdBufInput.codeImages[1] = rgp.zeroImage;
  g_gfxCmdBufInput.codeImages[2] = rgp.zeroImage;
  g_gfxCmdBufInput.codeImages[12] = rgp.shimmerEffectImage;
  g_gfxCmdBufInput.codeImages[14] = rgp.grayImage;
  g_gfxCmdBufInput.codeImages[15] = rgp.grayImage;
  g_gfxCmdBufInput.codePersistentImages[38] = rgp.ggxEnvBrdf;
  g_gfxCmdBufInput.codePersistentImages[36] = rgp.gtso;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  g_gfxCmdBufInput.codeImages[32] = rgp.fontCacheImage;
  __asm { vpxor   xmm1, xmm1, xmm1 }
  g_gfxCmdBufInput.codePersistentImages[13] = rgp.ggxSgLut;
  g_gfxCmdBufInput.codePersistentImages[0] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[80] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[5] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[6] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[8] = NULL;
  g_gfxCmdBufInput.codeImages[4] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[5] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[76] = NULL;
  g_gfxCmdBufInput.codeImages[6] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[7] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[16] = NULL;
  g_gfxCmdBufInput.codeImages[19] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[20] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[13] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[16] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[17] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[18] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[10] = rgp.whiteImage;
  g_gfxCmdBufInput.codePersistentImages[40] = NULL;
  g_gfxCmdBufInput.codePersistentImages[39] = NULL;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[22] = _XMM0;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[24] = _XMM1;
  g_gfxCmdBufInput.codeImages[26] = NULL;
  g_gfxCmdBufInput.codePersistentImages[25] = NULL;
  *(_OWORD *)&g_gfxCmdBufInput.codePersistentImages[26] = _XMM0;
  g_gfxCmdBufInput.codePersistentImages[37] = NULL;
  g_gfxCmdBufInput.codeImages[10] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[11] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[39] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[40] = rgp.blackImage;
}

/*
==============
RB_InitCodeConstants
==============
*/
void RB_InitCodeConstants(void)
{
  ;
}

/*
==============
RB_InitCodeImages
==============
*/

void __fastcall RB_InitCodeImages(double _XMM0_8, double _XMM1_8)
{
  g_gfxCmdBufInput.codePersistentImages[2] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codePersistentImages[3] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codePersistentImages[4] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codePersistentImages[1] = rgp.blackShadowImage;
  g_gfxCmdBufInput.codeImages[81] = rgp.blackImage3D;
  g_gfxCmdBufInput.codeImages[82] = rgp.blackImage3D;
  g_gfxCmdBufInput.codePersistentImages[7] = rgp.cloudNoiseImage;
  g_gfxCmdBufInput.codeImages[1] = rgp.zeroImage;
  g_gfxCmdBufInput.codeImages[2] = rgp.zeroImage;
  g_gfxCmdBufInput.codeImages[12] = rgp.shimmerEffectImage;
  g_gfxCmdBufInput.codeImages[14] = rgp.grayImage;
  g_gfxCmdBufInput.codeImages[15] = rgp.grayImage;
  g_gfxCmdBufInput.codePersistentImages[38] = rgp.ggxEnvBrdf;
  g_gfxCmdBufInput.codePersistentImages[36] = rgp.gtso;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  g_gfxCmdBufInput.codeImages[32] = rgp.fontCacheImage;
  __asm { vpxor   xmm1, xmm1, xmm1 }
  g_gfxCmdBufInput.codePersistentImages[13] = rgp.ggxSgLut;
  g_gfxCmdBufInput.codePersistentImages[0] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[80] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[5] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[6] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[8] = NULL;
  g_gfxCmdBufInput.codeImages[4] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[5] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[76] = NULL;
  g_gfxCmdBufInput.codeImages[6] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[7] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[16] = NULL;
  g_gfxCmdBufInput.codeImages[19] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[20] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[13] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[16] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[17] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[18] = rgp.blackImage;
  g_gfxCmdBufInput.codePersistentImages[10] = rgp.whiteImage;
  g_gfxCmdBufInput.codePersistentImages[40] = NULL;
  g_gfxCmdBufInput.codePersistentImages[39] = NULL;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[22] = _XMM0;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[24] = _XMM1;
  g_gfxCmdBufInput.codeImages[26] = NULL;
  g_gfxCmdBufInput.codePersistentImages[25] = NULL;
  *(_OWORD *)&g_gfxCmdBufInput.codePersistentImages[26] = _XMM0;
  g_gfxCmdBufInput.codePersistentImages[37] = NULL;
  g_gfxCmdBufInput.codeImages[10] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[11] = rgp.whiteImage;
  g_gfxCmdBufInput.codeImages[39] = rgp.blackImage;
  g_gfxCmdBufInput.codeImages[40] = rgp.blackImage;
}

/*
==============
RB_InitRenderTargetImages
==============
*/

void __fastcall RB_InitRenderTargetImages(double _XMM0_8, double _XMM1_8)
{
  __asm { vpxor   xmm0, xmm0, xmm0 }
  g_gfxCmdBufInput.codeImages[21] = rgp.blackImage;
  __asm { vpxor   xmm1, xmm1, xmm1 }
  g_gfxCmdBufInput.codeImages[52] = rgp.digitalDistortionImage;
  g_gfxCmdBufInput.codeImages[53] = rgp.watersheetingDistortionImage;
  g_gfxCmdBufInput.codeImages[83] = rgp.blackUintImage;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[8] = _XMM0;
  g_gfxCmdBufInput.codeImages[0] = NULL;
  g_gfxCmdBufInput.codeImages[79] = NULL;
  g_gfxCmdBufInput.codePersistentImages[15] = NULL;
  g_gfxCmdBufInput.codeImages[77] = NULL;
  g_gfxCmdBufInput.codeImages[27] = NULL;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[28] = _XMM0;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[30] = _XMM1;
  g_gfxCmdBufInput.codeImages[33] = NULL;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[34] = _XMM0;
  g_gfxCmdBufInput.codeImages[41] = NULL;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[42] = _XMM1;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[44] = _XMM0;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[46] = _XMM1;
  *(_OWORD *)&g_gfxCmdBufInput.codeImages[48] = _XMM0;
  g_gfxCmdBufInput.codeImages[50] = NULL;
}

/*
==============
RB_IsFinishReady
==============
*/
char RB_IsFinishReady(void *userData)
{
  __int64 v1; 

  v1 = *(_QWORD *)userData;
  if ( !*(_QWORD *)userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6375, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( *(_DWORD *)(v1 + 927448) || *(_DWORD *)(v1 + 927452) )
    return 1;
  RB_CheckSkipRemoteScreenUpdate();
  return 0;
}

/*
==============
RB_IsViewFullScreen
==============
*/
bool RB_IsViewFullScreen(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 851, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  return gfxContext->source->renderTargetWidth == viewInfo->displayViewport.width && gfxContext->source->renderTargetHeight == viewInfo->displayViewport.height;
}

/*
==============
RB_LookupColor
==============
*/
void RB_LookupColor(unsigned __int8 c, unsigned __int8 *color)
{
  unsigned int v4; 
  __int64 v5; 

  v4 = ColorIndex(c);
  if ( v4 >= 0x11 )
  {
    switch ( c )
    {
      case '8':
        *(_DWORD *)color = rg.colorMyTeam.packed;
        break;
      case '9':
        *(_DWORD *)color = rg.colorEnemyTeam.packed;
        break;
      case ':':
        *(_DWORD *)color = rg.colorMyParty.packed;
        break;
      case ';':
        *(_DWORD *)color = *(_DWORD *)s_colorFacebookBlue;
        break;
      case '<':
        *(_DWORD *)color = *(_DWORD *)s_colorPCKey;
        break;
      default:
        *(_DWORD *)color = -1;
        break;
    }
  }
  else
  {
    v5 = v4 + 17 * r_colorTable->current.integer;
    if ( (unsigned int)v5 >= 0x22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3061, ASSERT_TYPE_ASSERT, "(unsigned)( tableIndex ) < (unsigned)( ( sizeof( *array_counter( color_table ) ) + 0 ) )", "tableIndex doesn't index ARRAY_COUNT( color_table )\n\t%i not in [0, %i)", v5, 34) )
      __debugbreak();
    *(GfxColor *)color = color_table[v5];
  }
}

/*
==============
RB_PartialScreenFilterInternal
==============
*/
void RB_PartialScreenFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, float x, float y, float w, float h, float s0, float t0, float s1, float t1, const char *fileAndLine)
{
  GfxCmdBufContext v13; 

  v13 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v13);
  R_Set2D(gfxContext->source);
  v13 = *gfxContext;
  RB_DrawStretchPic(&v13, material, x, y, w, h, s0, t0, s1, t1, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  v13 = *gfxContext;
  RB_EndTessSurfaceInternal(&v13, fileAndLine);
}

/*
==============
RB_RegisterBackendAssets
==============
*/
void RB_RegisterBackendAssets(void)
{
  backEnd.debugFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 16);
}

/*
==============
RB_RenderCommandFrame
==============
*/
void RB_RenderCommandFrame(const GfxBackEndData *data)
{
  GfxCmdBufContext v2; 
  GfxCmdBufContext v3; 
  GfxCmdBufContext v4; 
  GfxCmdBufContext v5; 
  GfxCmdBufContext v6; 
  GfxCmdBufContext result; 

  Profile2_UpdateEntry(68);
  if ( ((unsigned __int8)&dword_14FDE80E0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80E0) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE80E0);
  Profile_EndInternal(NULL);
  if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6802, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6803, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !s_isRenderThreadDrawing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6804, ASSERT_TYPE_ASSERT, "(s_isRenderThreadDrawing)", (const char *)&queryFormat, "s_isRenderThreadDrawing") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF4500, "RB_RenderCommandFrame");
  Profile2_UpdateEntry(43);
  if ( ((unsigned __int8)&dword_14FDE807C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE807C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE807C);
  if ( (data->drawType & 1) != 0 )
    Profile_ResetThread(3);
  Profile_BeginCSV(22);
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6728, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6729, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  v2 = *RB_GetBackendCmdBufContext(&result);
  v3 = v2;
  RB_BeginFrame(&v3, data);
  v4 = v2;
  RB_Draw(&v4, data);
  v5 = v2;
  RB_CallExecuteRenderCommands(&v5, data);
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "end frame");
  v6 = v2;
  RB_EndFrame(&v6, data);
  Sys_ProfEndNamedEvent();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6769, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  Profile_EndCSV(22);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(43);
  if ( ((unsigned __int64)&dword_14FDE807C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE807C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE807C);
  Profile_Begin(188);
  Profile2_UpdateEntry(68);
  if ( ((unsigned __int64)&dword_14FDE80E0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80E0) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80E0);
}

/*
==============
RB_RenderCompleted
==============
*/
void RB_RenderCompleted()
{
  if ( !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6788, ASSERT_TYPE_ASSERT, "(Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsRenderThread()") )
    __debugbreak();
  if ( !s_isRenderThreadDrawing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6789, ASSERT_TYPE_ASSERT, "(s_isRenderThreadDrawing)", (const char *)&queryFormat, "s_isRenderThreadDrawing") )
    __debugbreak();
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6790, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  s_isRenderThreadDrawing = 0;
  Sys_RenderCompleted();
}

/*
==============
RB_RenderThread
==============
*/
void __noreturn RB_RenderThread(unsigned int threadContext)
{
  unsigned int RendererThreadId; 
  int v2; 
  _JBTYPE *Value; 
  int *v4; 
  __int64 v5; 
  _DWORD *v6; 
  _QWORD *v7; 
  unsigned __int64 v8; 
  const GfxBackEndData *Data; 
  const GfxBackEndData *v10; 
  const GfxBackEndData *v11; 
  __int64 v12; 
  __int64 v13; 
  int v15; 

  if ( threadContext != 1 )
  {
    v15 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 7098, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_BACKEND )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_BACKEND", threadContext, v15) )
      __debugbreak();
  }
  RendererThreadId = Physics_GetRendererThreadId();
  Physics_OnThreadInit(RendererThreadId);
  v2 = 0;
  while ( 1 )
  {
    Value = (_JBTYPE *)Sys_GetValue(2);
    if ( !setjmp(Value) )
      break;
    Profile_Recover(1);
    backEndData = NULL;
    while ( R_IsLockedGfxImmediateContext() )
      R_UnlockGfxImmediateContext();
    if ( r_glob.isRenderingRemoteUpdate )
    {
      do
      {
        Sys_CheckSuspendThread();
        Sys_Sleep(1);
      }
      while ( r_glob.remoteScreenUpdateNesting );
      RB_EndRemoteScreenUpdate();
    }
    if ( s_isRenderThreadDrawing )
    {
      RB_RenderCompleted();
      if ( s_isRenderThreadDrawing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6872, ASSERT_TYPE_ASSERT, "(!s_isRenderThreadDrawing)", (const char *)&queryFormat, "!s_isRenderThreadDrawing") )
        __debugbreak();
      if ( Com_ErrorEntered() )
        Com_ErrorPrintLastErrorMsg("FATAL ERROR: RB_RenderThread was restarted due to this error.");
    }
  }
  v4 = (int *)Sys_GetValue(0);
  v5 = v4[8914];
  if ( (_DWORD)v5 && *(_QWORD *)&v4[4 * v5 + 8784] > *((_QWORD *)v4 + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
    __debugbreak();
  if ( (unsigned int)v4[8914] >= 0x20 )
  {
    LODWORD(v13) = 32;
    LODWORD(v12) = v4[8914];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( v4[8914] > 0 )
  {
    v6 = v4 + 8786;
    do
    {
      if ( *v6 == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
        __debugbreak();
      ++v2;
      v6 += 4;
    }
    while ( v2 < v4[8914] );
  }
  if ( *((_QWORD *)v4 + 261) < (unsigned __int64)(v4 + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  v4[4 * v4[8914] + 8786] = 1;
  *(_QWORD *)&v4[4 * v4[8914] + 8788] = *((_QWORD *)v4 + 261);
  v7 = NtCurrentTeb()->Reserved1[11];
  ++v4[8914];
  *(_DWORD *)(v7[tls_index] + 1052i64) = -530057;
  Profile_Begin(188);
  Profile2_UpdateEntry(68);
  if ( ((unsigned __int8)&dword_14FDE80E0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80E0) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80E0);
  while ( !r_glob.startedRenderThread )
    Sys_Sleep(1);
  v8 = (unsigned __int64)&dword_14FDE8078 & 3;
  while ( 1 )
  {
    Profile2_UpdateEntry(42);
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8078) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8078);
    Sys_ProfBeginNamedEvent(0xFF404040, "RB_WaitBackendEvent");
    Sys_ProcessWorkerCmdsWithTimeout(RB_CheckBackendEvent, NULL);
    Sys_ProfEndNamedEvent();
    Profile2_UpdateEntry(42);
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8078) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8078);
    if ( Sys_ShouldRenderThreadReleaseBackendOwnership() )
    {
      Data = RB_GetData();
      data = Data;
      if ( Data )
        RB_RenderCommandFrame(Data);
      Sys_ProfBeginNamedEvent(0xFF404040, "RB_RenderThreadIdle");
      if ( r_glob.allowAddDrawCall )
        CrashReport_TriggerNow();
      Sys_StopRenderer();
      Sys_ProfBeginNamedEvent(0xFF404040, "RB_RenderThreadIdleLoop");
      Sys_ProcessWorkerCmdsWithTimeout(RB_ShouldRenderThreadAwakeFromIdle, NULL);
      Sys_ProfEndNamedEvent();
      Sys_StartRenderer();
      Sys_ProfEndNamedEvent();
    }
    if ( r_glob.remoteScreenUpdateNesting )
    {
      v10 = RB_GetData();
      data = v10;
      if ( v10 )
        RB_RenderCommandFrame(v10);
      if ( r_glob.remoteScreenUpdateNesting )
      {
        Sys_ProfBeginNamedEvent(0xFFFF69B4, "RB_RemoteScreenUpdate");
        RB_BeginRemoteScreenUpdate();
        do
        {
          Sys_CheckSuspendThread();
          if ( !r_glob.rsuNoClScreenUpdate && !CL_Screen_IsUpdateBlocked() )
            CL_Screen_Update();
        }
        while ( r_glob.remoteScreenUpdateNesting );
        RB_EndRemoteScreenUpdate();
        Sys_ProfEndNamedEvent();
      }
    }
    v11 = RB_GetData();
    data = v11;
    if ( v11 )
      RB_RenderCommandFrame(v11);
  }
}

/*
==============
RB_ResetStatTracking
==============
*/
void RB_ResetStatTracking(void)
{
  unsigned int i; 

  if ( Sys_IsRenderThread() )
  {
    memset_0(&backEnd.frameStatsMax, 0, sizeof(backEnd.frameStatsMax));
    for ( i = 0; i != 4; ++i )
      RB_Stats_Clear(i);
    s_rbTess.viewStatsTarget = GFX_VIEW_STATS_INVALID;
    s_rbTess.primStatsTarget = GFX_PRIM_STATS_INVALID;
  }
  else
  {
    if ( ((unsigned __int8)&s_rbTess.resetStats & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_rbTess.resetStats) )
      __debugbreak();
    _InterlockedExchange(&s_rbTess.resetStats, 1);
  }
}

/*
==============
RB_ScopeSizeScreenFilter
==============
*/
void RB_ScopeSizeScreenFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const Material *material, const vec2_t *padding)
{
  float v6; 
  __int128 v8; 
  __int128 v11; 
  __int128 v13; 
  __int128 v16; 
  GfxCmdBufSourceState *source; 
  float renderTargetWidth; 
  float v21; 
  float renderTargetHeight; 
  float v23; 
  vec4_t scopeLensBounds; 

  scopeLensBounds = viewInfo->input.sceneConstants.scopeLensBounds;
  if ( padding )
  {
    v6 = padding->v[1];
    v8 = LODWORD(scopeLensBounds.v[0]);
    *(float *)&v8 = scopeLensBounds.v[0] - padding->v[0];
    _XMM1 = v8;
    __asm { vmaxss  xmm5, xmm1, xmm2 }
    v11 = LODWORD(scopeLensBounds.v[1]);
    *(float *)&v11 = scopeLensBounds.v[1] - v6;
    _XMM1 = v11;
    v13 = LODWORD(padding->v[0]);
    *(float *)&v13 = padding->v[0] + scopeLensBounds.v[2];
    _XMM0 = v13;
    __asm { vmaxss  xmm2, xmm1, xmm2 }
    v16 = LODWORD(v6);
    *(float *)&v16 = v6 + scopeLensBounds.v[3];
    _XMM1 = v16;
    __asm
    {
      vminss  xmm3, xmm1, xmm13
      vminss  xmm4, xmm0, xmm13
    }
  }
  else
  {
    *(float *)&_XMM3 = scopeLensBounds.v[3];
    *(float *)&_XMM4 = scopeLensBounds.v[2];
    *(float *)&_XMM2 = scopeLensBounds.v[1];
    *(float *)&_XMM5 = scopeLensBounds.v[0];
  }
  source = gfxContext->source;
  renderTargetWidth = (float)source->renderTargetWidth;
  v21 = (float)(*(float *)&_XMM4 - *(float *)&_XMM5) * renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  scopeLensBounds = *(vec4_t *)gfxContext;
  v23 = renderTargetWidth * *(float *)&_XMM5;
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&scopeLensBounds);
  R_Set2D(gfxContext->source);
  scopeLensBounds = *(vec4_t *)gfxContext;
  RB_DrawStretchPic((GfxCmdBufContext *)&scopeLensBounds, material, v23, renderTargetHeight * *(float *)&_XMM2, v21, (float)(*(float *)&_XMM3 - *(float *)&_XMM2) * renderTargetHeight, (float)(1.0 / renderTargetWidth) * v23, (float)(1.0 / renderTargetHeight) * (float)(renderTargetHeight * *(float *)&_XMM2), (float)(v21 + v23) * (float)(1.0 / renderTargetWidth), (float)((float)((float)(*(float *)&_XMM3 - *(float *)&_XMM2) * renderTargetHeight) + (float)(renderTargetHeight * *(float *)&_XMM2)) * (float)(1.0 / renderTargetHeight), 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  scopeLensBounds = *(vec4_t *)gfxContext;
  RB_EndTessSurfaceInternal((GfxCmdBufContext *)&scopeLensBounds, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(839)");
}

/*
==============
RB_SetBspImages
==============
*/
void RB_SetBspImages(void)
{
  g_gfxCmdBufInput.codePersistentImages[16] = rgp.world->outdoorImage;
}

/*
==============
RB_SetDefaultUIState
==============
*/
void RB_SetDefaultUIState(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxImage *universalClut)
{
  GfxDisplayMappingParams *DisplayMappingParams; 
  __m128 v7; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  GfxImage *whiteImage; 
  GfxImage *v11; 
  GfxImage *blackImage; 
  GfxImage *v13; 
  GfxImage *v14; 
  __int64 viewInfoIndex; 
  GfxViewInfo *v16; 
  const GfxViewInfo *v17; 
  GfxImage *thermalRadiationLut; 
  GfxImage *v19; 
  GfxImage *blackImage3D; 
  GfxImage *v21; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  GfxDisplayMappingParams result; 
  GfxCmdBufContext v24; 
  GfxCmdBufContext v25; 
  float v26; 

  v24 = *gfxContext;
  RB_SetUIColorimetryParams(&v24);
  v26 = COERCE_FLOAT(R_GetFramebufferColorimetry());
  DisplayMappingParams = R_GetDisplayMappingParams(&result);
  v7 = (__m128)*(unsigned __int64 *)&DisplayMappingParams->gamma;
  result.maxLuminance = DisplayMappingParams->maxLuminance;
  source = gfxContext->source;
  source->input.consts[128].v[0] = v26;
  source->input.consts[128].v[1] = v7.m128_f32[0];
  source->input.consts[128].v[2] = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  source->input.consts[128].v[3] = result.maxLuminance;
  ++source->constVersions[128];
  *((_BYTE *)source + 11668) &= ~1u;
  *(_QWORD *)&source->uiState.firstMaskAlphaScale = 1065353216i64;
  *(_QWORD *)&source->uiState.secondMaskAlphaScale = 1065353216i64;
  source->uiState.firstMaskTranslation = 0i64;
  source->uiState.secondMaskTranslation = 0i64;
  source->uiState.aaTiling.v[0] = 1.0;
  source->uiState.aaTiling.v[1] = 1.0;
  *(_QWORD *)source->input.consts[55].v = 0i64;
  *(_QWORD *)&source->input.consts[55].xyz.z = 0i64;
  ++source->constVersions[55];
  *(_QWORD *)source->input.consts[57].v = 0i64;
  *(_QWORD *)&source->input.consts[57].xyz.z = 0i64;
  ++source->constVersions[57];
  source->input.consts[58].v[0] = 1.0;
  *(_QWORD *)&source->input.consts[58].xyz.y = 1065353216i64;
  source->input.consts[58].v[3] = 0.0;
  ++source->constVersions[58];
  *(_QWORD *)source->input.consts[56].v = 0i64;
  *(_QWORD *)&source->input.consts[56].xyz.z = 0i64;
  ++source->constVersions[56];
  *(_QWORD *)source->input.consts[63].v = 0i64;
  *(_QWORD *)&source->input.consts[63].xyz.z = 0i64;
  ++source->constVersions[63];
  *(_QWORD *)source->input.consts[64].v = 0i64;
  *(_QWORD *)&source->input.consts[64].xyz.z = 0i64;
  ++source->constVersions[64];
  *(_QWORD *)source->input.consts[65].v = 0i64;
  *(_QWORD *)&source->input.consts[65].xyz.z = 0i64;
  ++source->constVersions[65];
  *(_QWORD *)source->input.consts[66].v = 0i64;
  *(_QWORD *)&source->input.consts[66].xyz.z = 0i64;
  ++source->constVersions[66];
  *(_QWORD *)source->input.consts[67].v = 0i64;
  *(_QWORD *)&source->input.consts[67].xyz.z = 0i64;
  ++source->constVersions[67];
  *(_QWORD *)source->input.consts[68].v = 0i64;
  *(_QWORD *)&source->input.consts[68].xyz.z = 0i64;
  ++source->constVersions[68];
  *(_QWORD *)source->input.consts[69].v = 0i64;
  *(_QWORD *)&source->input.consts[69].xyz.z = 0i64;
  ++source->constVersions[69];
  *(_QWORD *)source->input.consts[70].v = 0i64;
  *(_QWORD *)&source->input.consts[70].xyz.z = 0i64;
  ++source->constVersions[70];
  *(_QWORD *)source->input.consts[74].v = 1065353216i64;
  source->input.consts[74].v[2] = 0.0;
  *(_QWORD *)(&source->input.consts[74].xyz + 1) = 1065353216i64;
  ++source->constVersions[74];
  *(_QWORD *)&source->input.consts[75].xyz.y = 0i64;
  *(_QWORD *)(&source->input.consts[75].xyz + 1) = 0i64;
  ++source->constVersions[75];
  source->input.consts[76].v[1] = 0.0;
  *(_QWORD *)&source->input.consts[76].xyz.z = 1065353216i64;
  ++source->constVersions[76];
  *(_QWORD *)source->input.consts[71].v = 1065353216i64;
  *(_QWORD *)&source->input.consts[71].xyz.z = 0i64;
  ++source->constVersions[71];
  p_input = &source->input;
  source->input.consts[72].v[0] = 0.0;
  *(_QWORD *)&source->input.consts[72].xyz.y = 1065353216i64;
  *(_QWORD *)(&source->input.consts[72].xyz + 1) = 0i64;
  ++source->constVersions[72];
  source->input.consts[73].v[1] = 0.0;
  *(_QWORD *)&source->input.consts[73].xyz.z = 1065353216i64;
  ++source->constVersions[73];
  *(_QWORD *)source->input.consts[86].v = 0i64;
  *(_QWORD *)&source->input.consts[86].xyz.z = 0i64;
  ++source->constVersions[86];
  whiteImage = rgp.whiteImage;
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[19] = whiteImage;
  v11 = rgp.whiteImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[20] = v11;
  blackImage = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = blackImage;
  v13 = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[80] = v13;
  v14 = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[23] = v14;
  viewInfoIndex = data->viewInfoIndex;
  v16 = &data->viewInfo[viewInfoIndex];
  if ( v16 )
  {
    v17 = &data->viewInfo[viewInfoIndex];
    v25 = *gfxContext;
    R_UniversalClut_SetParametersImage(&v25, v17, universalClut, universalClut);
    thermalRadiationLut = (GfxImage *)v16->thermalParams.thermalRadiationLut;
    v19 = rgp.blackImage;
    if ( thermalRadiationLut )
      v19 = thermalRadiationLut;
  }
  else
  {
    blackImage3D = rgp.blackImage3D;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[67] = blackImage3D;
    v21 = rgp.blackImage3D;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[68] = v21;
    v19 = rgp.blackImage;
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[54] = v19;
  globalSceneConstantBuffer = data->globalSceneConstantBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[0] = globalSceneConstantBuffer;
}

/*
==============
RB_SetDisplayMappingParams
==============
*/
void RB_SetDisplayMappingParams(GfxCmdBufContext *gfxContext)
{
  GfxDisplayMappingParams *DisplayMappingParams; 
  __m128 v3; 
  GfxCmdBufSourceState *source; 
  GfxDisplayMappingParams result; 
  float v6; 

  v6 = COERCE_FLOAT(R_GetFramebufferColorimetry());
  DisplayMappingParams = R_GetDisplayMappingParams(&result);
  v3 = (__m128)*(unsigned __int64 *)&DisplayMappingParams->gamma;
  result.maxLuminance = DisplayMappingParams->maxLuminance;
  source = gfxContext->source;
  source->input.consts[128].v[0] = v6;
  source->input.consts[128].v[2] = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  source->input.consts[128].v[3] = result.maxLuminance;
  source->input.consts[128].v[1] = v3.m128_f32[0];
  ++source->constVersions[128];
}

/*
==============
RB_SetFontGlowStyleCodeConstants
==============
*/
void RB_SetFontGlowStyleCodeConstants(GfxCmdBufSourceState *source, const FontGlowStyle *glowStyle)
{
  float glowMaxDistance; 
  float outlineGlowMinDistance; 
  float outlineGlowMaxDistance; 
  float v5; 
  float v6; 

  glowMaxDistance = glowStyle->glowMaxDistance;
  outlineGlowMinDistance = glowStyle->outlineGlowMinDistance;
  outlineGlowMaxDistance = glowStyle->outlineGlowMaxDistance;
  v5 = glowStyle->glowUVOffset.v[0];
  v6 = glowStyle->glowUVOffset.v[1];
  source->input.consts[82].v[0] = glowStyle->glowMinDistance;
  source->input.consts[82].v[1] = glowMaxDistance;
  source->input.consts[82].v[2] = outlineGlowMinDistance;
  source->input.consts[82].v[3] = outlineGlowMaxDistance;
  ++source->constVersions[82];
  source->input.consts[83].v[0] = v5;
  source->input.consts[83].v[1] = v6;
  *(_QWORD *)&source->input.consts[83].xyz.z = 0i64;
  ++source->constVersions[83];
  source->input.consts[84] = glowStyle->glowColor;
  ++source->constVersions[84];
  source->input.consts[85] = glowStyle->outlineGlowColor;
  ++source->constVersions[85];
}

/*
==============
RB_SetIdentity
==============
*/
void RB_SetIdentity(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufSourceState *source; 
  __int64 v2; 
  GfxViewParms *p_viewParms; 
  GfxViewParms *p_identityViewParms; 
  vec4_t v5; 
  GfxCmdBufContext v6; 

  source = gfxContext->source;
  if ( gfxContext->source->viewMode != VIEW_MODE_IDENTITY )
  {
    v6 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v6);
    v2 = 3i64;
    p_viewParms = &source->viewParms;
    source->viewMode = VIEW_MODE_IDENTITY;
    p_identityViewParms = &rg.identityViewParms;
    do
    {
      p_viewParms = (GfxViewParms *)((char *)p_viewParms + 128);
      v5 = p_identityViewParms->viewMatrix.m.m[0];
      p_identityViewParms = (GfxViewParms *)((char *)p_identityViewParms + 128);
      *(vec4_t *)p_viewParms[-1].camera.origin.v = v5;
      *(_OWORD *)&p_viewParms[-1].camera.axis.row0.y = *(_OWORD *)&p_identityViewParms[-1].camera.axis.row0.y;
      *(_OWORD *)&p_viewParms[-1].camera.axis.row1.z = *(_OWORD *)&p_identityViewParms[-1].camera.axis.row1.z;
      *(_OWORD *)&p_viewParms[-1].camera.tanHalfFovX = *(_OWORD *)&p_identityViewParms[-1].camera.tanHalfFovX;
      *(_OWORD *)p_viewParms[-1].camera.zPlanes = *(_OWORD *)p_identityViewParms[-1].camera.zPlanes;
      *(_OWORD *)&p_viewParms[-1].camera.focalLength = *(_OWORD *)&p_identityViewParms[-1].camera.focalLength;
      *(_OWORD *)&p_viewParms[-1].camera.visibilityQueryDistance = *(_OWORD *)&p_identityViewParms[-1].camera.visibilityQueryDistance;
      *(_OWORD *)&p_viewParms[-1].cameraMotion = *(_OWORD *)&p_identityViewParms[-1].cameraMotion;
      --v2;
    }
    while ( v2 );
    *(_QWORD *)source->eyeOffset.v = 0i64;
    source->eyeOffset.v[2] = 0.0;
    source->eyeOffset.v[3] = 1.0;
    R_CmdBufSet3D(source);
  }
}

/*
==============
RB_SetUIAA
==============
*/
void RB_SetUIAA(GfxCmdBufContext *gfxContext, const bool needAA, float s0, float s1, float t0, float t1)
{
  GfxCmdBufSourceState *source; 
  float v8; 
  float v9; 
  float v11; 
  float v12; 
  GfxCmdBufContext v16; 

  source = gfxContext->source;
  LODWORD(v8) = COERCE_UNSIGNED_INT(t1 - t0) & _xmm;
  LODWORD(v9) = COERCE_UNSIGNED_INT(s1 - s0) & _xmm;
  if ( (*((_BYTE *)gfxContext->source + 11668) & 1) != needAA || v9 != source->uiState.aaTiling.v[0] || v8 != source->uiState.aaTiling.v[1] )
  {
    v16 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v16);
    _XMM3 = LODWORD(FLOAT_1_0);
    *((_BYTE *)source + 11668) = needAA | *((_BYTE *)source + 11668) & 0xFE;
    source->uiState.aaTiling.v[0] = v9;
    source->uiState.aaTiling.v[1] = v8;
    if ( v9 >= 1.0 )
      v11 = 1.0 / v9;
    else
      v11 = FLOAT_1_0;
    if ( v8 >= 1.0 )
      v12 = 1.0 / v8;
    else
      v12 = FLOAT_1_0;
    _XMM0 = needAA;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm3, xmm1, xmm2
    }
    source->input.consts[63].v[0] = *(float *)&_XMM0;
    source->input.consts[63].v[2] = v11;
    source->input.consts[63].v[3] = v12;
    source->input.consts[63].v[1] = 0.0;
    ++source->constVersions[63];
  }
}

/*
==============
RB_SetUIColorimetryParams
==============
*/
void RB_SetUIColorimetryParams(GfxCmdBufContext *gfxContext)
{
  GfxColorimetry FramebufferColorimetry; 
  double DisplayHdrUiMaxLuminance; 
  float v4; 
  GfxDisplayMappingParams *DisplayMappingParams; 
  const dvar_t *v6; 
  __m128 v7; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v13; 
  GfxCmdBufContext v14; 
  float v15; 

  FramebufferColorimetry = R_GetFramebufferColorimetry();
  v15 = *(float *)&FramebufferColorimetry;
  if ( r_uiClutEnabledInShaders->current.enabled )
    LODWORD(v15) = FramebufferColorimetry | 0x80;
  DisplayHdrUiMaxLuminance = R_GetDisplayHdrUiMaxLuminance();
  v4 = *(float *)&DisplayHdrUiMaxLuminance;
  DisplayMappingParams = R_GetDisplayMappingParams((GfxDisplayMappingParams *)&v14);
  v6 = DCONST_DVARBOOL_r_useBrightnessForUI;
  v7 = (__m128)*(unsigned __int64 *)&DisplayMappingParams->gamma;
  *(float *)&v14.state = DisplayMappingParams->maxLuminance;
  _XMM7 = _mm_shuffle_ps(v7, v7, 85);
  v14.source = (GfxCmdBufSourceState *)v7.m128_u64[0];
  if ( !DCONST_DVARBOOL_r_useBrightnessForUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_useBrightnessForUI") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  _XMM0 = v6->current.color[0];
  source = gfxContext->source;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  source->input.consts[54].v[0] = v15;
  __asm { vblendvps xmm3, xmm7, xmm8, xmm2 }
  source->input.consts[54].v[2] = 1.0 - *(float *)&_XMM3;
  v13 = *gfxContext;
  source->input.consts[54].v[1] = v4;
  source->input.consts[54].v[3] = *(float *)&_XMM3;
  ++source->constVersions[54];
  v14 = v13;
  RB_UiClut_SetParameters(&v14);
}

/*
==============
RB_SetUIColorimetryParamsForRTT
==============
*/
void RB_SetUIColorimetryParamsForRTT(GfxCmdBufContext *gfxContext)
{
  double DisplayHdrUiMaxLuminance; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v4; 
  GfxCmdBufContext v5; 

  DisplayHdrUiMaxLuminance = R_GetDisplayHdrUiMaxLuminance();
  source = gfxContext->source;
  source->input.consts[54].v[1] = *(float *)&DisplayHdrUiMaxLuminance;
  v4 = *gfxContext;
  source->input.consts[54].v[0] = 4;
  *(_QWORD *)&source->input.consts[54].xyz.z = 1065353216i64;
  ++source->constVersions[54];
  v5 = v4;
  RB_UiClut_SetParameters(&v5);
}

/*
==============
RB_SetWaitFlipOncePerFrame
==============
*/
void RB_SetWaitFlipOncePerFrame(GfxCmdBufState *gfxState)
{
  R_RT_ColorHandle v4; 
  R_RT_ColorHandle v5; 
  R_RT_ColorHandle result; 

  if ( !g_dx.insertedWaitFlip )
  {
    if ( !R_IsLockedIfGfxImmediateContext(gfxState->device) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
      __debugbreak();
    R_GPU_BeginTimer(GPU_TIMER_WAIT_FLIP);
    if ( g_dx.insertedWaitFlip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4877, ASSERT_TYPE_ASSERT, "(!g_dx.insertedWaitFlip)", (const char *)&queryFormat, "!g_dx.insertedWaitFlip") )
      __debugbreak();
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v5.m_surfaceID = 0;
    v5.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&v5.m_tracking.m_name = _XMM0;
    if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
      v4 = *R_RT_GetGlobalColor(&v5, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
    else
      v4 = v5;
    v5 = v4;
    RB_InsertWaitFlipBeginQuery();
    R_AddRenderTargetTransition(gfxState, &result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
    {
      result = v5;
      R_AddRenderTargetTransition(gfxState, &result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    R_FlushResourceTransitions(gfxState);
    RB_InsertWaitFlipEndQuery();
    g_dx.insertedWaitFlip = 1;
    R_GPU_EndTimer();
  }
}

/*
==============
RB_SetupUIWhiteBalanceParams
==============
*/
void RB_SetupUIWhiteBalanceParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufSourceState *source; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  tmat33_t<vec3_t> matrix; 

  source = gfxContext->source;
  if ( viewInfo )
  {
    R_WhiteBalance_SetMatrix(&viewInfo->whiteBalance, &viewInfo->tonemap.whitePoint, &matrix);
    v3 = matrix.m[0].v[0];
    v6 = matrix.m[1].v[0];
    v7 = matrix.m[2].v[0];
    v8 = matrix.m[0].v[1];
    v4 = matrix.m[1].v[1];
    v9 = matrix.m[2].v[1];
    v10 = matrix.m[0].v[2];
    v11 = matrix.m[1].v[2];
    v5 = matrix.m[2].v[2];
  }
  else
  {
    v3 = FLOAT_1_0;
    v4 = FLOAT_1_0;
    v5 = FLOAT_1_0;
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
  }
  source->input.consts[129].v[0] = v3;
  source->input.consts[129].v[1] = v6;
  source->input.consts[129].v[2] = v7;
  source->input.consts[129].v[3] = 0.0;
  ++source->constVersions[129];
  source->input.consts[130].v[0] = v8;
  source->input.consts[130].v[1] = v4;
  source->input.consts[130].v[2] = v9;
  source->input.consts[130].v[3] = 0.0;
  ++source->constVersions[130];
  source->input.consts[131].v[0] = v10;
  source->input.consts[131].v[1] = v11;
  source->input.consts[131].v[2] = v5;
  source->input.consts[131].v[3] = 0.0;
  ++source->constVersions[131];
}

/*
==============
RB_ShouldRenderThreadAwakeFromIdle
==============
*/

bool __fastcall RB_ShouldRenderThreadAwakeFromIdle(void *__formal)
{
  return Sys_HasMainThreadReleasedBackendOwnership();
}

/*
==============
RB_SwapBuffers
==============
*/
void RB_SwapBuffers(GfxCmdBufContext *gfxContext, unsigned __int64 endFrameFence)
{
  __int16 source; 
  __int16 m_allocCounter; 
  const dvar_t *v5; 
  BOOL enabled; 
  unsigned int unsignedInt; 
  int v8; 
  unsigned int v9; 
  float displayHeight; 
  __int128 v12; 
  float displayWidth; 
  __int128 v16; 
  __int64 v18; 
  float v19; 
  __int128 v21; 
  __int128 v24; 
  HRESULT v26; 
  const char *v27; 
  R_RT_Handle v28; 
  IDXGISwapChain1 *displaySwapChain; 
  IDXGISwapChain1 *gameDvrSdrSwapChain; 
  R_RT_ColorHandle v31; 
  GfxCmdBufContext v32; 
  R_RT_ColorHandle result; 
  __m256i v34; 
  R_RT_ColorHandle v35; 
  R_RT_ColorHandle v36; 
  char v37[16]; 
  __int64 v38; 
  int v39; 
  int v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  int v44; 
  int v45; 

  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  RB_InsertFrameEndQuery();
  WaitForSingleObject(g_dx.flipHandledEvent, 0xFFFFFFFF);
  v32 = *gfxContext;
  source = (__int16)v32.source;
  R_UnbindRenderTarget(&v32);
  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  v31 = *R_RT_GetGlobalColor(&v35, R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  if ( (source & 0x7FFF) != 0 )
    v28.m_surfaceID = source & 0x7FFF | 0x8000;
  else
    v28.m_surfaceID = 0;
  v28.m_tracking = v31.m_tracking;
  g_R_RT_globals[0] = v28;
  if ( (result.m_surfaceID & 0x7FFF) != 0 )
    v28.m_surfaceID = result.m_surfaceID & 0x7FFF | 0x8000;
  else
    v28.m_surfaceID = 0;
  m_allocCounter = result.m_tracking.m_allocCounter;
  v28.m_tracking = result.m_tracking;
  g_R_RT_globals[1] = v28;
  if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
  {
    R_RT_GetGlobalColor(&v31, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
    v34 = *(__m256i *)R_RT_GetGlobalColor(&v36, R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV);
    if ( (m_allocCounter & 0x7FFF) != 0 )
      v28.m_surfaceID = m_allocCounter & 0x7FFF | 0x8000;
    else
      v28.m_surfaceID = 0;
    *(_OWORD *)&v28.m_tracking.m_allocCounter = *(_OWORD *)&v34.m256i_u64[1];
    v28.m_tracking.m_location = (const char *)v34.m256i_i64[3];
    g_R_RT_globals[2] = v28;
    if ( (v31.m_surfaceID & 0x7FFF) != 0 )
      v28.m_surfaceID = v31.m_surfaceID & 0x7FFF | 0x8000;
    else
      v28.m_surfaceID = 0;
    v28.m_tracking = v31.m_tracking;
    g_R_RT_globals[3] = v28;
  }
  Profile_Begin(132);
  Profile2_UpdateEntry(67);
  if ( ((unsigned __int8)&dword_14FDE80DC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80DC) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80DC);
  Sys_ProfBeginNamedEvent(0xFF808000, "GarbageCollect");
  Sys_ProfEndNamedEvent();
  v5 = DCONST_DVARINT_r_presentImmediateThreshold;
  enabled = r_vsync->current.enabled;
  if ( !DCONST_DVARINT_r_presentImmediateThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_presentImmediateThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  unsignedInt = v5->current.unsignedInt;
  v8 = 0;
  if ( g_PLMRestarting )
    v8 = 0x10000000;
  v9 = v8 | 8;
  memset_0(v37, 0, 0x70ui64);
  displayHeight = (float)vidConfig.displayHeight;
  v12 = LODWORD(FLOAT_1080_0);
  *(float *)&v12 = 1080.0 / displayHeight;
  _XMM0 = v12;
  __asm { vmaxss  xmm0, xmm0, xmm6 }
  displayWidth = (float)vidConfig.displayWidth;
  v39 = _XMM0;
  v16 = LODWORD(FLOAT_1920_0);
  *(float *)&v16 = 1920.0 / displayWidth;
  _XMM0 = v16;
  __asm { vmaxss  xmm1, xmm0, xmm6 }
  v40 = _XMM1;
  v38 = *(_QWORD *)&vidConfig.displayWidth;
  v41 = 0;
  if ( R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ && g_dx.gameDvrSdrSwapChain )
  {
    v18 = 2i64;
    v19 = (float)vidConfig.displayHeight;
    v21 = LODWORD(FLOAT_1080_0);
    *(float *)&v21 = 1080.0 / v19;
    _XMM0 = v21;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    *(float *)&_XMM0 = (float)vidConfig.displayWidth;
    v24 = LODWORD(FLOAT_1920_0);
    *(float *)&v24 = 1920.0 / *(float *)&_XMM0;
    _XMM0 = v24;
    v43 = _XMM1;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    v44 = _XMM1;
    v42 = *(_QWORD *)&vidConfig.displayWidth;
    v45 = 0;
    gameDvrSdrSwapChain = g_dx.gameDvrSdrSwapChain;
  }
  else
  {
    v18 = 1i64;
  }
  displaySwapChain = g_dx.displaySwapChain;
  v26 = DXGIXPresentArray_0(enabled, unsignedInt, v9, v18, &displaySwapChain, v37);
  Profile2_UpdateEntry(67);
  if ( ((unsigned __int64)&dword_14FDE80DC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80DC) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE80DC);
  Profile_EndInternal(NULL);
  if ( (int)(v26 + 0x80000000) >= 0 && v26 != -2005270518 )
  {
    v27 = R_ErrorDescription(v26);
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14444CCB8, 128i64, v27);
  }
  RB_UpdateDynamicSceneResolution();
  g_dx.flipQueuedFrame = backEnd.frameCount;
  SetEvent(g_dx.flipQueuedEvent);
  g_dx.insertedWaitFlip = 0;
  RB_InsertFrameBeginQuery();
}

/*
==============
RB_UpdateCmdBufHandoffStats
==============
*/
void RB_UpdateCmdBufHandoffStats(unsigned int frameIndex)
{
  __int64 v1; 
  int v3; 

  v1 = frameIndex;
  if ( frameIndex >= 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 7323, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( 2 )", "frameIndex doesn't index BACKEND_DATA_COUNT\n\t%i not in [0, %i)", frameIndex, v3) )
      __debugbreak();
  }
  cmdbufHandoffStats[0] = backEnd.cmdbufHandoffStats[v1][0];
  cmdbufHandoffStats[1] = backEnd.cmdbufHandoffStats[v1][1];
  cmdbufHandoffStats[2] = backEnd.cmdbufHandoffStats[v1][2];
}

/*
==============
RB_UpdateDynamicSceneResolution
==============
*/
void RB_UpdateDynamicSceneResolution()
{
  const dvar_t *v0; 
  double LatestFrameDuration; 
  const dvar_t *v2; 
  float v3; 
  float value; 
  float v5; 
  float v6; 
  const dvar_t *v7; 
  float v8; 
  float v10; 
  const dvar_t *v11; 
  const dvar_t *v14; 
  int integer; 
  int v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  float v25; 
  int v28; 
  int v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  int v36; 
  float v37; 
  float v38; 
  const dvar_t *v39; 
  float v40; 
  double v41; 
  const dvar_t *v42; 
  float v43; 
  unsigned int v46; 
  float v47; 
  float v48; 
  float v49; 
  double Float_Internal_DebugName; 
  __int64 v51; 
  __int64 v52; 
  float v53; 
  float v54; 
  float v55; 

  v0 = DVARBOOL_r_sceneResDynamic;
  if ( !DVARBOOL_r_sceneResDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    LatestFrameDuration = R_GetLatestFrameDuration();
    v2 = DCONST_DVARVEC4_r_sceneResDynamicThreshold;
    v3 = *(float *)&LatestFrameDuration;
    if ( !DCONST_DVARVEC4_r_sceneResDynamicThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    value = v2->current.value;
    v5 = v2->current.vector.v[1];
    v6 = v2->current.vector.v[3];
    v7 = DCONST_DVARVEC4_r_sceneResDynamicTune;
    if ( !DCONST_DVARVEC4_r_sceneResDynamicTune && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicTune") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = v7->current.vector.v[2];
    _XMM2 = v7->current.unsignedInt;
    v10 = v7->current.vector.v[1];
    v11 = DVARINT_r_sceneRes;
    v53 = v8;
    __asm
    {
      vcmpless xmm0, xmm2, xmm1
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v54 = fsqrt((float)((float)((float)(s_lastViewDir.v[1] - rg.viewDir.v[1]) * (float)(s_lastViewDir.v[1] - rg.viewDir.v[1])) + (float)((float)(s_lastViewDir.v[0] - rg.viewDir.v[0]) * (float)(s_lastViewDir.v[0] - rg.viewDir.v[0]))) + (float)((float)(s_lastViewDir.v[2] - rg.viewDir.v[2]) * (float)(s_lastViewDir.v[2] - rg.viewDir.v[2])));
    v55 = fsqrt((float)((float)((float)(s_lastViewOrg.v[1] - rg.viewOrg.v[1]) * (float)(s_lastViewOrg.v[1] - rg.viewOrg.v[1])) + (float)((float)(s_lastViewOrg.v[0] - rg.viewOrg.v[0]) * (float)(s_lastViewOrg.v[0] - rg.viewOrg.v[0]))) + (float)((float)(s_lastViewOrg.v[2] - rg.viewOrg.v[2]) * (float)(s_lastViewOrg.v[2] - rg.viewOrg.v[2])));
    s_lastViewDir = rg.viewDir;
    s_lastViewOrg = rg.viewOrg;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v14 = DVARINT_r_sceneResMin;
    integer = v11->current.integer;
    v16 = integer;
    if ( !DVARINT_r_sceneResMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v17 = v14->current.integer;
    v18 = DVARINT_r_sceneResMax;
    if ( !DVARINT_r_sceneResMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = v18->current.integer;
    v20 = v19;
    if ( v17 <= v19 )
      v20 = v17;
    v21 = DCONST_DVARBOOL_r_fuzzSceneRes;
    if ( !DCONST_DVARBOOL_r_fuzzSceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_fuzzSceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      v22 = rand();
      Dvar_SetInt_Internal(DVARINT_r_sceneRes, v20 + v22 % (v19 - v20 + 1));
    }
    else
    {
      v23 = DVARBOOL_r_autoSceneRes;
      if ( !DVARBOOL_r_autoSceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_autoSceneRes") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled )
      {
        v24 = DVARFLT_r_sceneResDynamicTarget;
        if ( !DVARFLT_r_sceneResDynamicTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        v25 = v24->current.value;
        if ( v3 < v25 )
        {
          if ( v3 <= (float)(v6 * v25) )
          {
            v30 = (float)(__int64)(s_frameID - s_lastSlowFrameID);
            if ( (__int64)(s_frameID - s_lastSlowFrameID) < 0 )
            {
              v31 = (float)(__int64)(s_frameID - s_lastSlowFrameID);
              v30 = v31 + 1.8446744e19;
            }
            if ( v30 >= v10 )
            {
              v32 = (float)(__int64)(s_frameID - s_lastRaiseFrameID);
              if ( (__int64)(s_frameID - s_lastRaiseFrameID) < 0 )
              {
                v33 = (float)(__int64)(s_frameID - s_lastRaiseFrameID);
                v32 = v33 + 1.8446744e19;
              }
              if ( v32 >= v53 && (v54 >= value || v55 >= v5) )
              {
                s_lastRaiseFrameID = s_frameID;
                v16 = 0;
                if ( integer - 1 > 0 )
                  v16 = integer - 1;
              }
            }
          }
        }
        else
        {
          v16 = 15;
          _XMM3 = 0i64;
          __asm { vroundss xmm3, xmm3, xmm2, 2 }
          v28 = (int)*(float *)&_XMM3;
          if ( (int)*(float *)&_XMM3 < 1 )
            v28 = 1;
          v29 = integer + v28;
          if ( v29 < 15 )
            v16 = v29;
          s_lastSlowFrameID = s_frameID;
        }
      }
    }
    if ( v20 > v19 )
    {
      LODWORD(v52) = v19;
      LODWORD(v51) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v51, v52) )
        __debugbreak();
    }
    if ( v19 < v16 )
      v16 = v19;
    if ( v20 > v16 )
      v16 = v20;
    if ( v16 != integer )
      Dvar_SetInt_Internal(DVARINT_r_sceneRes, v16);
    v34 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    RB_GPU_AddDynamicResolution(v34->current.unsignedInt, v16 - integer, v3);
    v35 = DVARFLT_r_sceneResLodScaleMax;
    v36 = v19 - v20;
    if ( !DVARFLT_r_sceneResLodScaleMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodScaleMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    v37 = v35->current.value;
    if ( v36 )
      v38 = powf_0(2.0, (float)(v16 - v20) - (float)v36);
    else
      v38 = 0.0;
    v39 = DVARFLT_r_sceneResLodTemporal;
    v40 = s_lastLODScaleRunning;
    if ( !DVARFLT_r_sceneResLodTemporal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodTemporal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    s_lastLODScaleRunning = (float)((float)(1.0 - v39->current.value) * v38) + (float)(v40 * v39->current.value);
    v41 = I_fclamp(s_lastLODScaleRunning, 0.0, 1.0);
    v42 = DCONST_DVARINT_r_sceneResLodScaleDelay;
    s_lastLODScaleRunning = *(float *)&v41;
    LODWORD(v43) = _mm_cvtepi32_ps((__m128i)(unsigned int)v36).m128_u32[0];
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    v46 = (int)*(float *)&_XMM4;
    if ( !DCONST_DVARINT_r_sceneResLodScaleDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodScaleDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    if ( v46 != s_lastLODScaleQuantized && s_frameID - s_lastLODScaleChangeID >= v42->current.unsignedInt )
    {
      s_lastLODScaleQuantized = v46;
      s_lastLODScaleChangeID = s_frameID;
      if ( v36 )
      {
        v47 = (float)v46;
        v48 = (float)(v47 * v37) / v43;
      }
      else
      {
        v48 = 0.0;
      }
      Dvar_SetFloat_Internal(DVARFLT_r_sceneResLodScale, v48);
      if ( v37 == 0.0 )
      {
        if ( v48 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5018, ASSERT_TYPE_ASSERT, "(normalizedQuantizedScale == 0.0f)", (const char *)&queryFormat, "normalizedQuantizedScale == 0.0f") )
          __debugbreak();
        v49 = FLOAT_1_0;
      }
      else
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_sceneResMinContributionScaleMax, "r_sceneResMinContributionScaleMax");
        v49 = (float)(*(float *)&Float_Internal_DebugName * (float)(v48 / v37)) + (float)(1.0 - (float)(v48 / v37));
      }
      Dvar_SetFloat_Internal(DVARFLT_r_sceneResMinContributionScale, v49);
    }
    ++s_frameID;
  }
}

/*
==============
RB_UpdateGPUMemoryPriority
==============
*/
void RB_UpdateGPUMemoryPriority(void)
{
  if ( r_gpuMemoryPriority->modified )
    ((void (__fastcall *)(ID3D12Device *, _QWORD))g_dx.d3d12device->m_pFunction[24].QueryInterface)(g_dx.d3d12device, r_gpuMemoryPriority->current.unsignedInt);
}

/*
==============
RB_ViewportFilterDirectInternal
==============
*/
void RB_ViewportFilterDirectInternal(GfxCmdBufContext *gfxContext, const Material *material, unsigned int color, const GfxViewport *viewport, float x0, float y0, float x1, float y1, float s0, float t0, float s1, float t1, const char *fileAndLine)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufContext v18; 

  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 860, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  v18 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v18);
  source = gfxContext->source;
  R_ForceSet2D(gfxContext->source, viewport);
  R_SetViewportAndScissorSeparate(gfxContext->state, viewport, viewport);
  R_UpdateViewport(source, viewport);
  R_ClearIfRequired(gfxContext->state, 1, 0);
  v18 = *gfxContext;
  RB_DrawStretchPic_LargeTriangle(&v18, material, x0, y0, x1 - x0, y1 - y0, s0, t0, s1, t1, color, GFX_PRIM_STATS_CODE);
  v18 = *gfxContext;
  RB_EndTessSurfaceInternal(&v18, fileAndLine);
  source->viewMode = VIEW_MODE_NONE;
  *((_BYTE *)source + 11668) |= 2u;
}

/*
==============
R_GetSavedScreenRt
==============
*/
R_RT_ColorHandle *R_GetSavedScreenRt(R_RT_ColorHandle *result, GfxRenderTargetId rtId, unsigned int rtWidth, unsigned int rtHeight)
{
  __m256i v9; 
  unsigned __int16 m_surfaceID; 
  bool v12; 
  __int16 v13; 
  R_RT_Handle v15; 
  R_RT_ColorHandle resulta; 
  R_RT_Handle v17; 

  if ( R_RT_HaveGlobal(rtId) )
  {
    *result = *R_RT_GetGlobalColor(&resulta, rtId);
    if ( R_RT_Handle::GetSurface(result)->m_image.m_base.width == rtWidth && R_RT_Handle::GetSurface(result)->m_image.m_base.height == rtHeight )
      return result;
    R_SyncRenderThread();
    v15 = result->R_RT_Handle;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v15);
      if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      resulta = (R_RT_ColorHandle)v15;
      R_RT_DestroyInternal(&resulta);
    }
    else if ( v15.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
  }
  v9 = *(__m256i *)R_RT_CreateInternal(&v17, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 0, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Saved Scene", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2044)");
  m_surfaceID = _XMM0;
  resulta = (R_RT_ColorHandle)v9;
  v15 = (R_RT_Handle)v9;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v15);
    if ( (R_RT_Handle::GetSurface(&v15)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      m_surfaceID = v15.m_surfaceID;
      v9 = (__m256i)v15;
      __debugbreak();
    }
    else
    {
      m_surfaceID = v15.m_surfaceID;
      v9 = (__m256i)v15;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v9 = (__m256i)resulta;
      if ( v12 )
        __debugbreak();
    }
  }
  *(__m256i *)result = v9;
  v13 = m_surfaceID & 0x7FFF;
  if ( v13 )
    resulta.m_surfaceID = v13 | 0x8000;
  else
    resulta.m_surfaceID = 0;
  resulta.m_tracking = v15.m_tracking;
  g_R_RT_globals[(unsigned __int8)rtId] = (R_RT_Handle)resulta;
  return result;
}

/*
==============
R_GetTess
==============
*/
materialCommands_t *R_GetTess(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufSourceState *source; 
  GfxCmdBufSourceState *v2; 

  source = gfxContext->source;
  v2 = gfxContext->source;
  if ( gfxContext->source->tess == &s_rbTess && !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 692, ASSERT_TYPE_ASSERT, "((gfxContext.source->tess != &s_rbTess) || Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "(gfxContext.source->tess != &s_rbTess) || Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( v2->tess || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 693, ASSERT_TYPE_ASSERT, "(gfxContext.source->tess)", (const char *)&queryFormat, "gfxContext.source->tess") )
    return v2->tess;
  __debugbreak();
  return source->tess;
}

/*
==============
R_InsertGpuFence
==============
*/
void R_InsertGpuFence(void)
{
  unsigned __int64 v0; 

  if ( g_dx.flushGpuFenceCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4469, ASSERT_TYPE_ASSERT, "(!g_dx.flushGpuFenceCount)", (const char *)&queryFormat, "!g_dx.flushGpuFenceCount") )
    __debugbreak();
  v0 = R_FlushImmediateContext();
  ++g_dx.flushGpuFenceCount;
  g_dx.flushGpuFence = v0;
  g_dx.flushGpuFenceIssued = 1;
}

/*
==============
R_IsHandoffDrawListIter
==============
*/
bool R_IsHandoffDrawListIter(GfxDrawListIter *drawListIter)
{
  return drawListIter == s_handoffDrawListIter;
}

/*
==============
R_SetHandoffDrawListIter
==============
*/
void R_SetHandoffDrawListIter(GfxDrawListIter *drawListIter)
{
  s_handoffDrawListIter = drawListIter;
}

/*
==============
R_SetVertex2d
==============
*/
void R_SetVertex2d(GfxVertex *vert, float x, float y, float s, float t, unsigned int color)
{
  vert->xyzw.v[0] = x;
  vert->xyzw.v[1] = y;
  vert->xyzw.v[2] = 0.0;
  vert->xyzw.v[3] = 1.0;
  vert->normal.packed = 1073643391;
  vert->color.packed = color;
  vert->texCoord.v[0] = s;
  vert->texCoord.v[1] = t;
}

/*
==============
R_SetVertex3d
==============
*/
void R_SetVertex3d(GfxVertex *vert, float x, float y, float z, float s, float t, unsigned int color)
{
  vert->xyzw.v[0] = x;
  vert->xyzw.v[1] = y;
  vert->xyzw.v[2] = z;
  vert->xyzw.v[3] = 1.0;
  vert->normal.packed = 1073643391;
  vert->color.packed = color;
  vert->texCoord.v[1] = t;
  vert->texCoord.v[0] = s;
}

/*
==============
R_SetVertex4d
==============
*/
void R_SetVertex4d(GfxVertex *vert, float x, float y, float z, float w, float s, float t, unsigned int color)
{
  vert->xyzw.v[3] = w;
  vert->xyzw.v[0] = x;
  vert->xyzw.v[1] = y;
  vert->xyzw.v[2] = z;
  vert->normal.packed = 1073643391;
  vert->color.packed = color;
  vert->texCoord.v[0] = s;
  vert->texCoord.v[1] = t;
}

/*
==============
R_SetVertex4dWithNormal
==============
*/
void R_SetVertex4dWithNormal(GfxVertex *vert, float x, float y, float z, float w, float nx, float ny, float nz, float s, float t, unsigned int color)
{
  __int128 v12; 
  __int128 v26; 

  vert->xyzw.v[0] = x;
  vert->xyzw.v[3] = w;
  vert->xyzw.v[2] = z;
  vert->xyzw.v[1] = y;
  HIDWORD(v26) = 0;
  v12 = v26;
  *(float *)&v12 = nx;
  _XMM5 = v12;
  __asm
  {
    vinsertps xmm5, xmm5, [rsp+38h+ny], 10h
    vinsertps xmm5, xmm5, [rsp+38h+nz], 20h
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
  }
  _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM0, g_one.v), g_unpackMul1010102.v);
  __asm
  {
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vblendps xmm0, xmm5, xmm2, 1
  }
  vert->normal.packed = _XMM0;
  vert->color.packed = color;
  vert->texCoord.v[0] = s;
  vert->texCoord.v[1] = t;
}

/*
==============
R_SurfaceTypeName
==============
*/
const char *R_SurfaceTypeName(surfaceType_t type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= SF_END_FX )
  {
    v4 = 15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 271, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( SF_NUM_SURFACE_TYPES )", "type doesn't index SF_NUM_SURFACE_TYPES\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return r_surfaceNameTable[v1];
}

/*
==============
SetupPulseFXVars
==============
*/
char SetupPulseFXVars(GfxCmdBufSourceState *source, const char *text, int maxLength, int renderFlags, const FontDecodeStyle *decodeStyle, int *resultRandomCharCount, int *resultRandSeed, int *resultMaxLength, float *resultFirstRandCharFadePercent)
{
  int v9; 
  int time; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  float v18; 
  int v19; 
  int v20; 
  int maxRandomCharsToDisplay; 
  int v22; 
  int millisecondsPerLetter; 
  int v24; 
  int v25; 

  v9 = maxLength;
  if ( (renderFlags & 0x40) != 0 )
  {
    if ( !decodeStyle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3179, ASSERT_TYPE_ASSERT, "(decodeStyle != 0)", (const char *)&queryFormat, "decodeStyle != NULL") )
      __debugbreak();
    if ( decodeStyle->useGameTime )
      time = source->sceneDef.time;
    else
      time = Sys_Milliseconds();
    v14 = 0;
    v15 = 1;
    if ( time > 0 )
    {
      v16 = time - decodeStyle->lastTextSet;
      v17 = 0;
      if ( v16 > 0 )
        v17 = v16;
      v18 = 0.0;
      v19 = SEH_PrintStrlen(text);
      if ( v19 > v9 )
        v19 = v9;
      v20 = v19 * decodeStyle->millisecondsPerLetter;
      if ( v17 < v20 && decodeStyle->updatesPerLetter > 0 )
      {
        if ( !decodeStyle->millisecondsPerLetter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3216, ASSERT_TYPE_ASSERT, "(decodeStyle->millisecondsPerLetter)", (const char *)&queryFormat, "decodeStyle->millisecondsPerLetter") )
          __debugbreak();
        maxRandomCharsToDisplay = decodeStyle->maxRandomCharsToDisplay;
        v22 = v20 - v17;
        millisecondsPerLetter = decodeStyle->millisecondsPerLetter;
        if ( maxRandomCharsToDisplay > 0 )
        {
          v14 = (((1103515245 * (v17 / 200) + 12345) / 0x10000) & 0x7FFFi64) % maxRandomCharsToDisplay + 1;
          v18 = (float)(v17 % millisecondsPerLetter) / (float)millisecondsPerLetter;
        }
        v24 = v17 / millisecondsPerLetter;
        v25 = millisecondsPerLetter / decodeStyle->updatesPerLetter;
        if ( v25 )
          v22 /= v25;
        v15 = 1103515245 * (v24 + v19 + v22 + decodeStyle->lastTextSet) + 12345;
        v9 = v14 + v24;
      }
      *resultRandomCharCount = v14;
      *resultRandSeed = v15;
      *resultMaxLength = v9;
      *resultFirstRandCharFadePercent = v18;
      return 1;
    }
    else
    {
      *resultRandomCharCount = 0;
      *resultRandSeed = 1;
      *resultMaxLength = v9;
      *resultFirstRandCharFadePercent = 0.0;
      return 0;
    }
  }
  else
  {
    *resultRandomCharCount = 0;
    *resultRandSeed = 1;
    *resultMaxLength = maxLength;
    *resultFirstRandCharFadePercent = 0.0;
    return 1;
  }
}

/*
==============
VerifyGFXDrawText2DCmd
==============
*/
void VerifyGFXDrawText2DCmd(const GfxCmdDrawText2D *cmd, const char *location)
{
  unsigned __int16 totalByteSize; 
  unsigned __int16 byteCount; 
  GfxCmdDrawText2D::Entry *entry; 
  GfxCmdDrawText2D::Entry *v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  int v11; 
  int v12; 

  totalByteSize = cmd->totalByteSize;
  byteCount = cmd->header.byteCount;
  if ( totalByteSize > byteCount )
  {
    v12 = byteCount;
    v11 = totalByteSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4005, ASSERT_TYPE_ASSERT, "( cmd->totalByteSize ) <= ( cmd->header.byteCount )", "%s <= %s\n\t%i, %i", "cmd->totalByteSize", "cmd->header.byteCount", v11, v12) )
      __debugbreak();
  }
  entry = cmd->entry;
  v7 = (GfxCmdDrawText2D::Entry *)((char *)cmd + cmd->totalByteSize);
  do
  {
    v8 = -1i64;
    do
      ++v8;
    while ( entry->text[v8] );
    v9 = (unsigned int)v8;
    if ( v8 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v8, "unsigned", v8) )
      __debugbreak();
    v10 = (v9 + 16) & 0xFFFFFFFFFFFFFFFCui64;
    if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v10) )
      __debugbreak();
    entry = (GfxCmdDrawText2D::Entry *)((char *)entry + (unsigned int)v10);
    if ( entry > v7 )
    {
      DumpGFXDrawText2DCmd(cmd, location);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4016, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, " nextPtr <= endPtr assert - please copy output log to IWH-92494 ") )
        __debugbreak();
    }
  }
  while ( entry < v7 );
}

