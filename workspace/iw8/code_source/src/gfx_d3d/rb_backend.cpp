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
  const Material *mtlOverride; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int v19; 
  GfxCmdBufContext v20; 

  _RDX = execState->cmd;
  _RBX = execState;
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RDX + 1);
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+28h]
    vmovups xmm0, xmmword ptr [rbx+10h]
    vmovss  xmm3, dword ptr [rdx+14h]
    vmovss  xmm2, dword ptr [rdx+10h]
  }
  v19 = *((_DWORD *)_RDX + 12);
  __asm
  {
    vmovups xmmword ptr [rsp+78h+var_18.source], xmm0
    vmovss  xmm0, dword ptr [rdx+2Ch]
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  xmm0, dword ptr [rdx+24h]
    vmovss  [rsp+78h+var_38], xmm1
    vmovss  xmm1, dword ptr [rdx+20h]
    vmovss  [rsp+78h+var_40], xmm0
    vmovss  xmm0, dword ptr [rdx+1Ch]
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  xmm1, dword ptr [rdx+18h]
    vmovss  [rsp+78h+var_50], xmm0
    vmovss  [rsp+78h+var_58], xmm1
  }
  RB_DrawStretchPic(&v20, mtlOverride, *(float *)&_XMM2, *(float *)&_XMM3, v13, v14, v15, v16, v17, v18, v19, GFX_PRIM_STATS_HUD);
  _RBX->cmd = (char *)_RBX->cmd + *((unsigned __int16 *)_RBX->cmd + 1);
}

/*
==============
RB_StretchPicCmdFlipST
==============
*/
void RB_StretchPicCmdFlipST(GfxRenderCommandExecState *execState)
{
  const Material *mtlOverride; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int v19; 
  GfxCmdBufContext v20; 

  _RDX = execState->cmd;
  _RBX = execState;
  mtlOverride = execState->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RDX + 1);
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+28h]
    vmovups xmm0, xmmword ptr [rbx+10h]
    vmovss  xmm3, dword ptr [rdx+14h]
    vmovss  xmm2, dword ptr [rdx+10h]
  }
  v19 = *((_DWORD *)_RDX + 12);
  __asm
  {
    vmovups xmmword ptr [rsp+78h+var_18.source], xmm0
    vmovss  xmm0, dword ptr [rdx+2Ch]
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  xmm0, dword ptr [rdx+24h]
    vmovss  [rsp+78h+var_38], xmm1
    vmovss  xmm1, dword ptr [rdx+20h]
    vmovss  [rsp+78h+var_40], xmm0
    vmovss  xmm0, dword ptr [rdx+1Ch]
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  xmm1, dword ptr [rdx+18h]
    vmovss  [rsp+78h+var_50], xmm0
    vmovss  [rsp+78h+var_58], xmm1
  }
  RB_DrawStretchPicFlipST(&v20, mtlOverride, *(float *)&_XMM2, *(float *)&_XMM3, v13, v14, v15, v16, v17, v18, v19, GFX_PRIM_STATS_HUD);
  _RBX->cmd = (char *)_RBX->cmd + *((unsigned __int16 *)_RBX->cmd + 1);
}

/*
==============
RB_StretchPicRotateXYCmd
==============
*/
void RB_StretchPicRotateXYCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v10; 
  materialCommands_t *Tess; 
  const Material *mtlOverride; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  int v29; 
  bool v33; 
  int v37; 
  int v43; 
  int v56; 
  int v73; 
  float c; 
  float s[3]; 
  GfxCmdBufContext v79[8]; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = execState->cmd;
  v10 = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovups [rsp+0B8h+var_88], xmm6
    vmovq   rbp, xmm6
  }
  Tess = R_GetTess(v79);
  if ( *(_DWORD *)(_RBP + 11488) != 2 )
  {
    __asm { vmovdqa [rsp+0B8h+var_88], xmm6 }
    RB_EndSurfaceIfNeeded(v79);
    R_Set2D((GfxCmdBufSourceState *)_RBP);
  }
  if ( (*((_BYTE *)_RBX + 56) & 2) != 0 )
    __asm { vmovss  xmm8, dword ptr [rbp+2D9Ch] }
  else
    __asm { vmovss  xmm8, cs:__real@3f800000 }
  mtlOverride = v10->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RBX + 1);
  __asm { vmovdqa [rsp+0B8h+var_88], xmm6 }
  RB_SetTessTechnique(v79, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  __asm { vmovdqa [rsp+0B8h+var_88], xmm6 }
  RB_CheckTessOverflow(v79, 4u, 6u);
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
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+18h]
    vmovss  xmm7, dword ptr [rbx+1Ch]
    vmovss  xmm9, dword ptr [rbx+10h]
    vmovss  xmm10, dword ptr [rbx+14h]
  }
  if ( (*((_BYTE *)_RBX + 56) & 1) == 0 )
  {
    __asm
    {
      vmulss  xmm6, xmm6, cs:__real@3f000000
      vmulss  xmm7, xmm7, cs:__real@3f000000
      vaddss  xmm9, xmm9, xmm6
      vaddss  xmm10, xmm10, xmm7
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+34h]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, s, &c);
  __asm
  {
    vmulss  xmm1, xmm7, [rsp+0B8h+s]
    vmulss  xmm0, xmm6, [rsp+0B8h+s]
    vmulss  xmm4, xmm6, [rsp+0B8h+c]
    vmulss  xmm11, xmm7, [rsp+0B8h+c]
  }
  v29 = *((_DWORD *)_RBX + 12);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+20h]
    vdivss  xmm2, xmm1, xmm8
  }
  _RAX = (_DWORD *)Tess->verts[vertexCount].xyzw.v;
  v33 = (*((_BYTE *)_RBX + 56) & 1) == 0;
  __asm
  {
    vmulss  xmm12, xmm0, xmm8
    vxorps  xmm8, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  xmm2, dword ptr [rbx+24h]
  }
  _RAX[3] = 1065353216;
  _RAX[2] = 0;
  if ( v33 )
  {
    __asm
    {
      vsubss  xmm7, xmm9, xmm4
      vaddss  xmm5, xmm4, xmm9
      vsubss  xmm6, xmm10, xmm12
      vsubss  xmm0, xmm7, xmm8
      vmovss  dword ptr [rax], xmm0
      vsubss  xmm1, xmm6, xmm11
      vmovss  dword ptr [rax+4], xmm1
    }
    _RAX[7] = 1073643391;
    _RAX[4] = v29;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm3
      vmovss  dword ptr [rax+18h], xmm2
    }
    v56 = *((_DWORD *)_RBX + 12);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+24h]
      vmovss  xmm2, dword ptr [rbx+28h]
      vaddss  xmm4, xmm12, xmm10
      vsubss  xmm0, xmm5, xmm8
      vsubss  xmm1, xmm4, xmm11
    }
    _RAX = (_DWORD *)Tess->verts[vertexCount + 1].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  dword ptr [rax+4], xmm1
    }
    _RAX[2] = 0;
    _RAX[3] = 1065353216;
    _RAX[7] = 1073643391;
    _RAX[4] = v56;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm2
      vmovss  dword ptr [rax+18h], xmm3
    }
    v43 = *((_DWORD *)_RBX + 12);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+2Ch]
      vmovss  xmm2, dword ptr [rbx+28h]
      vaddss  xmm0, xmm5, xmm8
      vaddss  xmm1, xmm4, xmm11
    }
    _RAX = (_DWORD *)Tess->verts[vertexCount + 2].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  dword ptr [rax+4], xmm1
      vaddss  xmm0, xmm7, xmm8
      vaddss  xmm1, xmm11, xmm6
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rax], xmm9
      vmovss  dword ptr [rax+4], xmm10
    }
    _RAX[7] = 1073643391;
    _RAX[4] = v29;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm3
      vmovss  dword ptr [rax+18h], xmm2
    }
    v37 = *((_DWORD *)_RBX + 12);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+24h]
      vmovss  xmm0, dword ptr [rbx+28h]
      vaddss  xmm4, xmm4, xmm9
      vaddss  xmm5, xmm12, xmm10
    }
    _RAX = (_DWORD *)Tess->verts[vertexCount + 1].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rax], xmm4
      vmovss  dword ptr [rax+4], xmm5
    }
    _RAX[2] = 0;
    _RAX[3] = 1065353216;
    _RAX[7] = 1073643391;
    _RAX[4] = v37;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm0
      vmovss  dword ptr [rax+18h], xmm1
    }
    v43 = *((_DWORD *)_RBX + 12);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+2Ch]
      vmovss  xmm2, dword ptr [rbx+28h]
      vaddss  xmm0, xmm4, xmm8
      vaddss  xmm1, xmm5, xmm11
    }
    _RAX = (_DWORD *)Tess->verts[vertexCount + 2].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rax], xmm0
      vmovss  dword ptr [rax+4], xmm1
      vaddss  xmm0, xmm8, xmm9
      vaddss  xmm1, xmm11, xmm10
    }
  }
  _RAX[2] = 0;
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  _RAX[3] = 1065353216;
  _RAX[4] = v43;
  _RAX[7] = 1073643391;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm2
    vmovss  dword ptr [rax+18h], xmm3
  }
  v73 = *((_DWORD *)_RBX + 12);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+2Ch]
    vmovss  xmm2, dword ptr [rbx+20h]
  }
  _RCX = (_DWORD *)Tess->verts[vertexCount + 3].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vmovss  dword ptr [rcx+4], xmm1
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = v73;
  __asm
  {
    vmovss  dword ptr [rcx+18h], xmm4
    vmovss  dword ptr [rcx+14h], xmm2
  }
  v10->cmd = (char *)v10->cmd + *((unsigned __int16 *)v10->cmd + 1);
}

/*
==============
RB_StretchPicRotateSTCmd
==============
*/
void RB_StretchPicRotateSTCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v13; 
  materialCommands_t *Tess; 
  const Material *mtlOverride; 
  __int64 vertexCount_low; 
  __int64 indexCount; 
  int v79; 
  int v81; 
  int v85; 
  int v90; 
  int v93; 
  float c; 
  float s; 
  GfxCmdBufContext v112; 
  GfxCmdBufContext v113; 
  char v116; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = execState->cmd;
  v13 = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps [rsp+118h+var_A8], xmm14
    vmovaps [rsp+118h+var_B8], xmm15
    vmovups [rsp+118h+var_C8], xmm6
    vmovups [rsp+118h+var_D8], xmm6
    vmovq   rbx, xmm6
  }
  Tess = R_GetTess(&v112);
  if ( *(_DWORD *)(_RBX + 11488) != 2 )
  {
    __asm { vmovdqa [rsp+118h+var_D8], xmm6 }
    RB_EndSurfaceIfNeeded(&v112);
    R_Set2D((GfxCmdBufSourceState *)_RBX);
  }
  mtlOverride = v13->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RBP + 1);
  __asm { vmovdqa [rsp+118h+var_D8], xmm6 }
  RB_SetTessTechnique(&v112, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm15, [rsp+118h+s]
    vmovss  xmm8, [rsp+118h+c]
    vmovss  xmm10, dword ptr [rbp+30h]
    vmovss  xmm6, dword ptr [rbp+38h]
    vxorps  xmm5, xmm6, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm11, xmm8, dword ptr [rbp+40h]
    vmovss  xmm0, dword ptr [rbp+3Ch]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm9, xmm15, dword ptr [rbp+40h]
  }
  vertexCount_low = LOWORD(Tess->vertexCount);
  indexCount = (int)Tess->indexCount;
  __asm
  {
    vmulss  xmm3, xmm2, xmm8
    vmulss  xmm4, xmm2, xmm15
    vmovss  xmm2, dword ptr [rbp+48h]
    vmulss  xmm0, xmm5, xmm8
    vsubss  xmm12, xmm0, xmm4
    vmulss  xmm0, xmm6, xmm8
    vmovss  xmm8, dword ptr [rbp+34h]
    vsubss  xmm14, xmm0, xmm4
    vmulss  xmm4, xmm15, xmm2
    vmulss  xmm1, xmm5, xmm15
    vaddss  xmm13, xmm1, xmm3
    vmulss  xmm1, xmm6, xmm15
    vaddss  xmm0, xmm1, xmm3
    vmulss  xmm3, xmm2, [rsp+118h+c]
    vmovss  [rsp+118h+var_F4], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm6, xmm0, dword ptr [rbp+44h]
    vsubss  xmm7, xmm0, dword ptr [rbp+4Ch]
    vmulss  xmm2, xmm6, [rsp+118h+c]
    vaddss  xmm0, xmm12, xmm10
    vaddss  xmm1, xmm0, xmm11
    vsubss  xmm0, xmm1, xmm4
    vmovss  [rsp+118h+var_EC], xmm0
    vmulss  xmm5, xmm7, xmm15
    vaddss  xmm0, xmm13, xmm8
    vaddss  xmm1, xmm0, xmm9
    vaddss  xmm0, xmm1, xmm3
    vmovss  [rsp+118h+var_E8], xmm0
    vaddss  xmm0, xmm14, xmm10
    vsubss  xmm1, xmm0, xmm2
    vsubss  xmm0, xmm1, xmm4
    vmovss  [rsp+118h+var_E4], xmm0
    vmulss  xmm4, xmm6, xmm15
    vmovss  xmm6, [rsp+118h+var_F4]
    vaddss  xmm0, xmm8, xmm6
    vsubss  xmm1, xmm0, xmm4
    vaddss  xmm0, xmm1, xmm3
    vmulss  xmm3, xmm7, [rsp+118h+c]
    vmovss  [rsp+118h+var_F4], xmm0
    vsubss  xmm0, xmm10, xmm12
    vsubss  xmm1, xmm0, xmm2
    vsubss  xmm2, xmm10, xmm14
    vsubss  xmm0, xmm8, xmm13
    vaddss  xmm12, xmm1, xmm5
    vsubss  xmm1, xmm0, xmm4
    vaddss  xmm0, xmm2, xmm11
    vsubss  xmm7, xmm1, xmm3
    vsubss  xmm1, xmm8, xmm6
    vaddss  xmm10, xmm0, xmm5
    vmovups xmm0, [rsp+118h+var_C8]
    vaddss  xmm2, xmm1, xmm9
    vsubss  xmm6, xmm2, xmm3
    vmovdqa [rsp+118h+var_C8], xmm0
  }
  RB_CheckTessOverflow(&v113, 4u, 6u);
  Tess->vertexCount += 4;
  Tess->indexCount += 6;
  _R11 = &v116;
  Tess->indices[indexCount] = vertexCount_low + 3;
  Tess->indices[indexCount + 1] = vertexCount_low;
  Tess->indices[indexCount + 2] = vertexCount_low + 2;
  Tess->indices[indexCount + 3] = vertexCount_low + 2;
  Tess->indices[indexCount + 4] = vertexCount_low;
  Tess->indices[indexCount + 5] = vertexCount_low + 1;
  v79 = *((_DWORD *)_RBP + 4);
  __asm { vmovss  xmm0, dword ptr [rbp+14h] }
  v81 = *((_DWORD *)_RBP + 20);
  _RCX = (_DWORD *)Tess->verts[(unsigned int)vertexCount_low].xyzw.v;
  __asm { vmovss  dword ptr [rcx+4], xmm0 }
  *_RCX = v79;
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[4] = v81;
  _RCX[7] = 1073643391;
  __asm
  {
    vmovss  xmm0, [rsp+118h+var_EC]
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  xmm0, [rsp+118h+var_E8]
    vmovss  dword ptr [rcx+18h], xmm0
  }
  LODWORD(_RCX) = *((_DWORD *)_RBP + 20);
  v85 = *((_DWORD *)_RBP + 6);
  __asm { vmovss  xmm0, dword ptr [rbp+1Ch] }
  _RDX = (_DWORD *)Tess->verts[vertexCount_low + 1].xyzw.v;
  __asm { vmovss  dword ptr [rdx+4], xmm0 }
  *_RDX = v85;
  _RDX[2] = 0;
  _RDX[3] = 1065353216;
  __asm { vmovss  xmm0, [rsp+118h+var_E4] }
  _RDX[4] = (_DWORD)_RCX;
  _RDX[7] = 1073643391;
  __asm
  {
    vmovss  dword ptr [rdx+14h], xmm0
    vmovss  xmm0, [rsp+118h+var_F4]
    vmovss  dword ptr [rdx+18h], xmm0
  }
  LODWORD(_RCX) = *((_DWORD *)_RBP + 20);
  v90 = *((_DWORD *)_RBP + 8);
  __asm { vmovss  xmm0, dword ptr [rbp+24h] }
  _RDX = (_DWORD *)Tess->verts[vertexCount_low + 2].xyzw.v;
  __asm { vmovss  dword ptr [rdx+4], xmm0 }
  *_RDX = v90;
  _RDX[2] = 0;
  _RDX[3] = 1065353216;
  _RDX[4] = (_DWORD)_RCX;
  _RDX[7] = 1073643391;
  __asm
  {
    vmovss  dword ptr [rdx+14h], xmm12
    vmovss  dword ptr [rdx+18h], xmm7
  }
  LODWORD(_RCX) = *((_DWORD *)_RBP + 20);
  v93 = *((_DWORD *)_RBP + 10);
  __asm { vmovss  xmm0, dword ptr [rbp+2Ch] }
  _RDX = (_DWORD *)Tess->verts[vertexCount_low + 3].xyzw.v;
  __asm { vmovss  dword ptr [rdx+4], xmm0 }
  *_RDX = v93;
  _RDX[2] = 0;
  _RDX[3] = 1065353216;
  _RDX[4] = (_DWORD)_RCX;
  _RDX[7] = 1073643391;
  __asm
  {
    vmovss  dword ptr [rdx+14h], xmm10
    vmovss  dword ptr [rdx+18h], xmm6
  }
  v13->cmd = (char *)v13->cmd + *((unsigned __int16 *)v13->cmd + 1);
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+118h+var_A8]
    vmovaps xmm15, [rsp+118h+var_B8]
  }
}

/*
==============
RB_3DStretchPicRotateSTCmd
==============
*/
void RB_3DStretchPicRotateSTCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v14; 
  materialCommands_t *Tess; 
  const Material *mtlOverride; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  __int64 v35; 
  bool v103; 
  bool v104; 
  bool v105; 
  bool v106; 
  __int64 v119; 
  __int64 v120; 
  vec4_t *v143; 
  int v157; 
  materialCommands_t *v159; 
  int v165; 
  int v172; 
  int v179; 
  int v186; 
  int v187; 
  int v194; 
  int v199; 
  int v203; 
  float v216; 
  float v217; 
  unsigned __int16 v218; 
  float c; 
  float s; 
  materialCommands_t *v225; 
  vec4_t vec; 
  BarycentricTriangle out; 
  vec3_t outBarycentricCoords; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> dst; 
  vec2_t cartesianVertices; 
  vec2_t v232; 
  vec2_t inVertex; 
  vec2_t inNext; 
  vec2_t v239; 
  vec2_t inPrev; 
  __m256i v241; 
  vec4_t v242; 
  vec2_t cartesianPoint; 
  vec2_t v257; 
  vec4_t outVertex; 
  vec4_t v259; 
  vec4_t v260; 
  vec4_t v261; 
  vec2_t outCartesianCoords[4]; 
  char v263[60]; 
  char v264; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  _RSI = (char *)execState->cmd;
  v14 = execState;
  __asm
  {
    vmovups xmmword ptr [rsp+358h+vec], xmm6
    vmovups xmmword ptr [rsp+358h+out], xmm6
    vmovq   rdi, xmm6
  }
  Tess = R_GetTess((GfxCmdBufContext *)&out);
  v225 = Tess;
  if ( *(_DWORD *)(_RDI + 11488) != 2 )
  {
    __asm { vmovdqa xmmword ptr [rsp+358h+out], xmm6 }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&out);
    R_Set2D((GfxCmdBufSourceState *)_RDI);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+5Ch]
    vmovss  xmm1, dword ptr [rsi+58h]
    vmovss  xmm3, dword ptr [rsi+54h]
    vmovss  xmm2, dword ptr [rsi+50h]
    vmovss  [rsp+358h+var_330], xmm0
    vmovss  [rsp+358h+var_338], xmm1
    vmovdqa xmmword ptr [rsp+358h+out], xmm6
  }
  RB_SetUIAA((GfxCmdBufContext *)&out, 1, *(float *)&_XMM2, *(float *)&_XMM3, v216, v217);
  mtlOverride = v14->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RSI + 1);
  __asm { vmovdqa xmmword ptr [rsp+358h+out], xmm6 }
  RB_SetTessTechnique((GfxCmdBufContext *)&out, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm14, [rsp+358h+s]
    vmovss  xmm7, [rsp+358h+c]
    vmovss  xmm9, dword ptr [rsi+40h]
    vmovss  xmm5, dword ptr [rsi+48h]
    vxorps  xmm4, xmm5, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm10, xmm7, dword ptr [rsi+50h]
    vmulss  xmm8, xmm14, dword ptr [rsi+50h]
    vmovss  xmm0, dword ptr [rsi+4Ch]
    vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  vertexCount = Tess->vertexCount;
  indexCount = (int)Tess->indexCount;
  v35 = 4i64;
  __asm
  {
    vmulss  xmm3, xmm1, xmm14
    vmulss  xmm2, xmm1, xmm7
    vmulss  xmm0, xmm4, xmm7
    vsubss  xmm11, xmm0, xmm3
    vmulss  xmm0, xmm5, xmm7
    vmovss  xmm7, dword ptr [rsi+44h]
    vsubss  xmm13, xmm0, xmm3
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm6, xmm0, dword ptr [rsi+5Ch]
    vmulss  xmm1, xmm4, xmm14
    vaddss  xmm12, xmm1, xmm2
    vmulss  xmm1, xmm5, xmm14
    vsubss  xmm5, xmm0, dword ptr [rsi+54h]
    vaddss  xmm15, xmm1, xmm2
    vmovss  xmm2, dword ptr [rsi+58h]
    vmulss  xmm3, xmm2, [rsp+358h+c]
    vmulss  xmm4, xmm14, xmm2
    vmulss  xmm2, xmm5, [rsp+358h+c]
    vaddss  xmm0, xmm9, xmm11
    vaddss  xmm1, xmm0, xmm10
    vsubss  xmm0, xmm1, xmm4
    vmovss  [rsp+358h+var_320], xmm0
    vaddss  xmm0, xmm7, xmm12
    vaddss  xmm1, xmm0, xmm8
    vaddss  xmm0, xmm1, xmm3
    vmovss  [rsp+358h+var_31C], xmm0
    vaddss  xmm0, xmm13, xmm9
    vsubss  xmm1, xmm0, xmm2
    vsubss  xmm0, xmm1, xmm4
    vmovss  [rsp+358h+var_318], xmm0
    vmulss  xmm4, xmm5, xmm14
    vaddss  xmm0, xmm15, xmm7
    vsubss  xmm1, xmm0, xmm4
    vaddss  xmm0, xmm1, xmm3
    vmulss  xmm3, xmm6, [rsp+358h+c]
    vmovss  [rsp+358h+var_314], xmm0
    vsubss  xmm0, xmm9, xmm11
    vmovups xmm11, xmmword ptr [rsp+358h+vec]
    vsubss  xmm1, xmm0, xmm2
    vsubss  xmm0, xmm7, xmm12
    vsubss  xmm2, xmm9, xmm13
    vmulss  xmm5, xmm6, xmm14
    vaddss  xmm14, xmm1, xmm5
    vsubss  xmm1, xmm0, xmm4
    vaddss  xmm0, xmm2, xmm10
    vsubss  xmm12, xmm1, xmm3
    vsubss  xmm1, xmm7, xmm15
    vaddss  xmm2, xmm1, xmm8
  }
  v218 = vertexCount;
  __asm
  {
    vsubss  xmm10, xmm2, xmm3
    vaddss  xmm9, xmm0, xmm5
    vmovdqa xmmword ptr [rsp+358h+out], xmm11
  }
  RB_CheckTessOverflow((GfxCmdBufContext *)&out, 4u, 6u);
  Tess->vertexCount += 4;
  Tess->indexCount += 6;
  _R15 = _RSI + 24;
  Tess->indices[indexCount] = v218 + 3;
  Tess->indices[indexCount + 1] = v218;
  Tess->indices[indexCount + 2] = v218 + 2;
  Tess->indices[indexCount + 3] = v218 + 2;
  Tess->indices[indexCount + 4] = v218;
  Tess->indices[indexCount + 5] = v218 + 1;
  if ( (*(_BYTE *)(_RDI + 11668) & 1) != 0 )
  {
    _R14 = v263;
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm7, xmm0, cs:__real@3f000000
    }
    _RBX = 0i64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm8, xmm0, cs:__real@3f000000
    }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15-8]
        vmovss  xmm1, dword ptr [r15-4]
        vmovss  dword ptr [rsp+358h+vec], xmm0
        vmovss  xmm0, dword ptr [r15]
        vmovss  dword ptr [rsp+358h+vec+8], xmm0
        vmovss  dword ptr [rsp+358h+vec+4], xmm1
        vmovss  dword ptr [rsp+358h+vec+0Ch], xmm6
      }
      MatrixTransformVector44Aligned(&vec, (const tmat44_t<vec4_t> *)(_RDI + 9872), (vec4_t *)&out);
      __asm
      {
        vdivss  xmm1, xmm6, dword ptr [rsp+358h+out+0Ch]
        vshufps xmm1, xmm1, xmm1, 0
        vmulps  xmm2, xmm1, xmmword ptr [rsp+358h+out]
        vaddss  xmm0, xmm2, xmm6
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [r14-4], xmm1
        vmovss  dword ptr [rsp+rbx*8+358h+inVertex], xmm1
        vshufps xmm0, xmm2, xmm2, 55h ; 'U'
        vsubss  xmm0, xmm6, xmm0
        vmulss  xmm1, xmm0, xmm8
        vmovss  dword ptr [r14], xmm1
        vmovss  dword ptr [rsp+rbx*8+358h+inVertex+4], xmm1
      }
      ++_RBX;
      _R15 += 12;
      __asm { vextractps dword ptr [r14+4], xmm2, 2 }
      _R14 += 16;
      __asm { vmovups xmmword ptr [rsp+358h+out], xmm2 }
    }
    while ( _RBX < 4 );
    v103 = RB_ApplyVertexDilation(&inVertex, &inNext, &inPrev, &outVertex);
    v104 = RB_ApplyVertexDilation(&inNext, &v239, &inVertex, &v259) || v103;
    v105 = RB_ApplyVertexDilation(&v239, &inPrev, &inNext, &v260) || v104;
    v106 = RB_ApplyVertexDilation(&inPrev, &inVertex, &v239, &v261);
    __asm
    {
      vmovss  xmm0, [rsp+358h+var_320]
      vmovss  xmm1, [rsp+358h+var_31C]
      vmovss  xmm2, [rsp+358h+var_318]
      vmovss  dword ptr [rsp+358h+cartesianVertices], xmm0
      vmovss  xmm0, [rsp+358h+var_314]
      vmovss  dword ptr [rsp+358h+var_230+4], xmm0
      vmovss  dword ptr [rsp+358h+cartesianVertices+4], xmm1
      vmovss  dword ptr [rsp+358h+var_230], xmm2
      vmovss  [rsp+358h+var_228], xmm14
      vmovss  [rsp+358h+var_224], xmm12
      vmovss  [rsp+358h+var_220], xmm9
      vmovss  [rsp+358h+var_21C], xmm10
    }
    if ( !v106 && !v105 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+358h+outVertex]
        vmovss  xmm1, dword ptr [rsp+358h+outVertex+4]
        vmovss  dword ptr [rsp+358h+cartesianPoint], xmm0
        vmovss  xmm0, dword ptr [rsp+358h+var_168]
        vmovss  dword ptr [rsp+358h+cartesianPoint+4], xmm1
        vmovss  xmm1, dword ptr [rsp+358h+var_168+4]
        vmovss  [rsp+358h+var_190], xmm0
        vmovss  xmm0, dword ptr [rsp+358h+var_158]
        vmovss  [rsp+358h+var_18C], xmm1
        vmovss  xmm1, dword ptr [rsp+358h+var_158+4]
        vmovss  [rsp+358h+var_188], xmm0
        vmovss  xmm0, dword ptr [rsp+358h+var_148]
        vmovss  [rsp+358h+var_184], xmm1
        vmovss  xmm1, dword ptr [rsp+358h+var_148+4]
        vmovss  dword ptr [rsp+358h+var_180], xmm0
        vmovss  dword ptr [rsp+358h+var_180+4], xmm1
      }
      BarycentricTriangle::Init(&out, &inVertex);
      BarycentricTriangle::Init((BarycentricTriangle *)&v241, &cartesianVertices);
      v119 = 0i64;
      v120 = 3i64;
      do
      {
        BarycentricTriangle::GetBarycentricCoordinates(&out, (vec2_t *)((char *)&cartesianPoint + v119 * 8), &outBarycentricCoords);
        BarycentricTriangle::GetCartesianCoordinates((BarycentricTriangle *)&v241, &outBarycentricCoords, &outCartesianCoords[v119++]);
        --v120;
      }
      while ( v120 );
      BarycentricTriangle::Init(&out, &inNext);
      BarycentricTriangle::Init((BarycentricTriangle *)&v241, &v232);
      BarycentricTriangle::GetBarycentricCoordinates(&out, &v257, (vec3_t *)&vec);
      BarycentricTriangle::GetCartesianCoordinates((BarycentricTriangle *)&v241, (const vec3_t *)&vec, &outCartesianCoords[3]);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+358h+outCartesianCoords]
        vmovss  xmm1, dword ptr [rsp+358h+var_230]
        vsubss  xmm2, xmm1, dword ptr [rsp+358h+cartesianVertices]
        vmovups [rsp+358h+var_1F8], ymm0
        vmovss  xmm0, [rsp+358h+var_220]
        vsubss  xmm4, xmm0, dword ptr [rsp+358h+cartesianVertices]
        vmovss  xmm0, dword ptr [rsp+358h+var_230+4]
        vsubss  xmm1, xmm0, dword ptr [rsp+358h+cartesianVertices+4]
        vmovss  xmm0, [rsp+358h+var_21C]
        vmovss  dword ptr [rsp+358h+mat+4], xmm1
        vsubss  xmm1, xmm0, dword ptr [rsp+358h+cartesianVertices+4]
        vmovaps ymm0, cs:__ymm@3f800000000000000000000000000000000000003f8000000000000000000000
        vmovss  dword ptr [rsp+358h+mat], xmm2
        vxorps  xmm2, xmm2, xmm2
        vmovups ymmword ptr [rsp+358h+mat+20h], ymm0
        vmovss  dword ptr [rsp+358h+mat+8], xmm2
        vmovss  dword ptr [rsp+358h+mat+0Ch], xmm2
        vmovss  dword ptr [rsp+358h+mat+10h], xmm4
        vmovss  dword ptr [rsp+358h+mat+14h], xmm1
        vmovss  dword ptr [rsp+358h+mat+18h], xmm2
        vmovss  dword ptr [rsp+358h+mat+1Ch], xmm2
      }
      MatrixInverse44Aligned(&mat, &dst);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+358h+dst]
        vmovss  xmm1, dword ptr [rsp+358h+dst+4]
        vmovss  xmm2, dword ptr [rsp+358h+cartesianVertices+4]
        vmovss  dword ptr [rdi+0BA0h], xmm0
        vmovss  xmm0, dword ptr [rsp+358h+dst+10h]
        vmovss  dword ptr [rdi+0BA4h], xmm1
        vmovss  xmm1, dword ptr [rsp+358h+dst+14h]
        vmovss  dword ptr [rdi+0BA8h], xmm0
        vmovss  xmm0, dword ptr [rsp+358h+cartesianVertices]
        vmovss  dword ptr [rdi+0BACh], xmm1
      }
      ++*(_WORD *)(_RDI + 10312);
      __asm
      {
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vxorps  xmm0, xmm2, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rdi+0BB4h], xmm0
        vmovss  dword ptr [rdi+0BB0h], xmm1
      }
      *(_QWORD *)(_RDI + 3000) = 0i64;
      ++*(_WORD *)(_RDI + 10314);
    }
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vdivss  xmm10, xmm0, xmm8
      vdivss  xmm9, xmm6, xmm7
    }
    v143 = &v242;
    _RBX = 0i64;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+rbx+358h+outVertex]
        vsubss  xmm1, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsp+rbx+358h+outVertex+4]
        vmulss  xmm2, xmm1, xmm9
        vsubss  xmm1, xmm0, xmm8
        vmovss  xmm0, [rsp+rbx+358h+var_110]
        vmovss  dword ptr [rsp+358h+vec], xmm2
        vmulss  xmm2, xmm1, xmm10
        vmovss  dword ptr [rsp+358h+vec+4], xmm2
        vmovss  dword ptr [rsp+358h+vec+8], xmm0
        vmovss  dword ptr [rsp+358h+vec+0Ch], xmm6
      }
      MatrixTransformVector44Aligned(&vec, (const tmat44_t<vec4_t> *)(_RDI + 11312), v143);
      __asm
      {
        vdivss  xmm2, xmm6, dword ptr [rsp+rbx+358h+var_1D8+0Ch]
        vshufps xmm2, xmm2, xmm2, 0
        vmulps  xmm0, xmm2, xmmword ptr [rsp+rbx+358h+var_1D8]
      }
      ++v143;
      __asm { vmovups xmmword ptr [rsp+rbx+358h+var_1D8], xmm0 }
      _RBX += 16i64;
      --v35;
    }
    while ( v35 );
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+358h+var_1D8+4]
      vmovss  xmm0, dword ptr [rsp+358h+var_1D8]
    }
    v157 = *((_DWORD *)_RSI + 24);
    __asm { vmovss  xmm2, dword ptr [rsp+358h+var_1D8+8] }
    v159 = v225;
    __asm { vmovdqa xmmword ptr [rsp+358h+out], xmm11 }
    _RCX = (_DWORD *)v225->verts[v218].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rcx], xmm0
      vmovss  dword ptr [rcx+4], xmm1
      vmovss  dword ptr [rcx+8], xmm2
    }
    _RCX[3] = 1065353216;
    _RCX[7] = 1073643391;
    _RCX[4] = v157;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+358h+var_1F8]
      vmovss  dword ptr [rcx+14h], xmm0
      vmovss  xmm1, dword ptr [rsp+358h+var_1F8+4]
      vmovss  dword ptr [rcx+18h], xmm1
      vmovss  xmm1, [rsp+358h+var_1C4]
      vmovss  xmm0, [rsp+358h+var_1C8]
    }
    v165 = *((_DWORD *)_RSI + 24);
    __asm { vmovss  xmm2, [rsp+358h+var_1C0] }
    _RCX = (_DWORD *)v159->verts[v218 + 1].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rcx], xmm0
      vmovss  dword ptr [rcx+4], xmm1
      vmovss  dword ptr [rcx+8], xmm2
    }
    _RCX[3] = 1065353216;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+358h+var_1F8+8]
      vmovss  xmm1, dword ptr [rsp+358h+var_1F8+0Ch]
    }
    _RCX[7] = 1073643391;
    _RCX[4] = v165;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm0
      vmovss  dword ptr [rcx+18h], xmm1
      vmovss  xmm1, [rsp+358h+var_1B4]
      vmovss  xmm0, [rsp+358h+var_1B8]
    }
    v172 = *((_DWORD *)_RSI + 24);
    __asm { vmovss  xmm2, [rsp+358h+var_1B0] }
    _RCX = (_DWORD *)v159->verts[v218 + 2].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rcx], xmm0
      vmovss  xmm0, dword ptr [rsp+358h+var_1F8+10h]
      vmovss  dword ptr [rcx+4], xmm1
      vmovss  xmm1, dword ptr [rsp+358h+var_1F8+14h]
      vmovss  dword ptr [rcx+8], xmm2
    }
    _RCX[3] = 1065353216;
    _RCX[7] = 1073643391;
    _RCX[4] = v172;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm0
      vmovss  dword ptr [rcx+18h], xmm1
      vmovss  xmm1, [rsp+358h+var_1A4]
      vmovss  xmm0, [rsp+358h+var_1A8]
    }
    v179 = *((_DWORD *)_RSI + 24);
    __asm { vmovss  xmm2, [rsp+358h+var_1A0] }
    _RCX = (_DWORD *)v159->verts[v218 + 3].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rcx], xmm0
      vmovss  xmm0, dword ptr [rsp+358h+var_1F8+18h]
      vmovss  dword ptr [rcx+4], xmm1
      vmovss  xmm1, dword ptr [rsp+358h+var_1F8+1Ch]
      vmovss  dword ptr [rcx+8], xmm2
    }
    _RCX[3] = 1065353216;
    _RCX[7] = 1073643391;
    _RCX[4] = v179;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm0
      vmovss  dword ptr [rcx+18h], xmm1
    }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&out);
    *(_QWORD *)(_RDI + 2976) = 1065353216i64;
    *(_DWORD *)(_RDI + 2984) = 0;
    *(_QWORD *)(_RDI + 2988) = 1065353216i64;
    ++*(_WORD *)(_RDI + 10312);
    *(_QWORD *)(_RDI + 2996) = 0i64;
    *(_DWORD *)(_RDI + 3004) = 0;
    ++*(_WORD *)(_RDI + 10314);
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r15]
      vmovss  xmm0, dword ptr [rsi+14h]
    }
    v186 = *((_DWORD *)_RSI + 24);
    v187 = *((_DWORD *)_RSI + 4);
    __asm { vmovss  xmm2, [rsp+358h+var_318] }
    _RCX = (_DWORD *)Tess->verts[v218].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  dword ptr [rcx+8], xmm1
    }
    *_RCX = v187;
    _RCX[3] = 1065353216;
    _RCX[4] = v186;
    _RCX[7] = 1073643391;
    __asm
    {
      vmovss  xmm0, [rsp+358h+var_320]
      vmovss  dword ptr [rcx+14h], xmm0
      vmovss  xmm1, [rsp+358h+var_31C]
      vmovss  dword ptr [rcx+18h], xmm1
      vmovss  xmm0, dword ptr [rsi+20h]
    }
    LODWORD(_RCX) = *((_DWORD *)_RSI + 24);
    __asm { vmovss  xmm1, dword ptr [rsi+24h] }
    v194 = *((_DWORD *)_RSI + 7);
    _RDX = (_DWORD *)Tess->verts[v218 + 1].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rdx+4], xmm0
      vmovss  xmm0, [rsp+358h+var_314]
      vmovss  dword ptr [rdx+8], xmm1
    }
    *_RDX = v194;
    _RDX[3] = 1065353216;
    _RDX[7] = 1073643391;
    _RDX[4] = (_DWORD)_RCX;
    __asm
    {
      vmovss  dword ptr [rdx+18h], xmm0
      vmovss  dword ptr [rdx+14h], xmm2
      vmovss  xmm1, dword ptr [rsi+30h]
      vmovss  xmm0, dword ptr [rsi+2Ch]
    }
    LODWORD(_RCX) = *((_DWORD *)_RSI + 24);
    v199 = *((_DWORD *)_RSI + 10);
    _RDX = (_DWORD *)Tess->verts[v218 + 2].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rdx+4], xmm0
      vmovss  dword ptr [rdx+8], xmm1
    }
    *_RDX = v199;
    _RDX[3] = 1065353216;
    _RDX[7] = 1073643391;
    _RDX[4] = (_DWORD)_RCX;
    __asm
    {
      vmovss  dword ptr [rdx+14h], xmm14
      vmovss  dword ptr [rdx+18h], xmm12
      vmovss  xmm1, dword ptr [rsi+3Ch]
      vmovss  xmm0, dword ptr [rsi+38h]
    }
    LODWORD(_RCX) = *((_DWORD *)_RSI + 24);
    v203 = *((_DWORD *)_RSI + 13);
    _RDX = (_DWORD *)Tess->verts[v218 + 3].xyzw.v;
    __asm
    {
      vmovss  dword ptr [rdx+4], xmm0
      vmovss  dword ptr [rdx+8], xmm1
    }
    *_RDX = v203;
    _RDX[3] = 1065353216;
    _RDX[7] = 1073643391;
    _RDX[4] = (_DWORD)_RCX;
    __asm
    {
      vmovss  dword ptr [rdx+14h], xmm9
      vmovss  dword ptr [rdx+18h], xmm10
    }
  }
  v14->cmd = (char *)v14->cmd + *((unsigned __int16 *)v14->cmd + 1);
  _R11 = &v264;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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

void __fastcall RB_SetUIBlur(GfxRenderCommandExecState *execState, double _XMM1_8, double _XMM2_8)
{
  GfxRenderCommandExecState *v5; 
  char v9; 
  __int128 v25; 
  GfxCmdBufContext v26; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  _RBX = execState->cmd;
  v5 = execState;
  __asm
  {
    vmovups [rsp+48h+var_28], xmm0
    vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
  }
  RB_EndSurfaceIfNeeded(&v26);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+4]
    vmovss  xmm5, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm4, xmm1
  }
  if ( v9 )
  {
    _RCX = v25;
    *(_QWORD *)(v25 + 2816) = 0i64;
    *(_QWORD *)(v25 + 2824) = 0i64;
  }
  else
  {
    _RAX = r_ui_scale_scene_range;
    __asm
    {
      vmovss  xmm3, dword ptr [rax+28h]
      vmovss  xmm0, dword ptr [rax+2Ch]
      vsubss  xmm2, xmm0, xmm3
      vucomiss xmm2, xmm1
      vdivss  xmm1, xmm5, xmm2
    }
    _RAX = r_ui_scale_range_min;
    _RCX = v25;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rcx+0B0Ch], xmm0
      vmovss  dword ptr [rcx+0B00h], xmm4
      vmovss  dword ptr [rcx+0B04h], xmm3
      vmovss  dword ptr [rcx+0B08h], xmm1
    }
  }
  ++*(_WORD *)(_RCX + 10292);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm4, xmm5, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovss  dword ptr [rcx+0B34h], xmm2
    vmovss  dword ptr [rcx+0B3Ch], xmm4
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  dword ptr [rcx+0B30h], xmm0
    vdivss  xmm3, xmm5, xmm1
    vmovss  dword ptr [rcx+0B38h], xmm3
  }
  ++*(_WORD *)(_RCX + 10298);
  v5->cmd = (char *)v5->cmd + *((unsigned __int16 *)v5->cmd + 1);
}

/*
==============
RB_SetUIPixelGrid
==============
*/

void __fastcall RB_SetUIPixelGrid(GfxRenderCommandExecState *execState, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  _DWORD *cmd; 
  GfxRenderCommandExecState *v7; 
  GfxCmdBufContext v19; 

  cmd = execState->cmd;
  v7 = execState;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovups [rsp+48h+var_28], xmm6
  }
  RB_EndSurfaceIfNeeded(&v19);
  __asm
  {
    vmovq   rcx, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, eax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  dword ptr [rcx+0B14h], xmm1
    vmovss  dword ptr [rcx+0B18h], xmm2
    vmovss  dword ptr [rcx+0B1Ch], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rcx+0B10h], xmm0
  }
  ++*(_WORD *)(_RCX + 10294);
  *(_DWORD *)(_RCX + 2848) = cmd[2];
  *(_QWORD *)(_RCX + 2852) = 0i64;
  *(_DWORD *)(_RCX + 2860) = 0;
  ++*(_WORD *)(_RCX + 10296);
  v7->cmd = (char *)v7->cmd + *((unsigned __int16 *)v7->cmd + 1);
}

/*
==============
RB_SetUIColorOp
==============
*/
void RB_SetUIColorOp(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v4; 
  GfxCmdBufContext v11; 

  _RBX = execState->cmd;
  v4 = execState;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovups [rsp+48h+var_28], xmm6
  }
  RB_EndSurfaceIfNeeded(&v11);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+8]
    vmovq   rdx, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rdx+0B60h], xmm0
    vmovss  dword ptr [rdx+0B64h], xmm1
  }
  *(_QWORD *)(_RDX + 2920) = 0i64;
  ++*(_WORD *)(_RDX + 10304);
  v4->cmd = (char *)v4->cmd + *((unsigned __int16 *)v4->cmd + 1);
}

/*
==============
RB_SetUIColorMatrix
==============
*/
void RB_SetUIColorMatrix(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxRenderCommandExecState *v3; 
  __int64 v4; 
  GfxCmdBufContext v5; 
  __int128 v6; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  cmd = execState->cmd;
  v3 = execState;
  __asm
  {
    vmovups [rsp+48h+var_18], xmm0
    vmovups [rsp+48h+var_28], xmm0
  }
  RB_EndSurfaceIfNeeded(&v5);
  v4 = v6;
  *(_DWORD *)(v6 + 2928) = cmd[1];
  *(_DWORD *)(v4 + 2932) = cmd[2];
  *(_DWORD *)(v4 + 2936) = cmd[3];
  *(_DWORD *)(v4 + 2940) = 2142953389;
  ++*(_WORD *)(v4 + 10306);
  *(_DWORD *)(v4 + 2944) = cmd[4];
  *(_DWORD *)(v4 + 2948) = cmd[5];
  *(_DWORD *)(v4 + 2952) = cmd[6];
  *(_DWORD *)(v4 + 2956) = 2142953389;
  ++*(_WORD *)(v4 + 10308);
  *(_DWORD *)(v4 + 2960) = cmd[7];
  *(_DWORD *)(v4 + 2964) = cmd[8];
  *(_DWORD *)(v4 + 2968) = cmd[9];
  *(_DWORD *)(v4 + 2972) = 2142953389;
  ++*(_WORD *)(v4 + 10310);
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_SetUICalibrationSwatchColor
==============
*/
void RB_SetUICalibrationSwatchColor(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxRenderCommandExecState *v3; 
  __int64 v4; 
  GfxCmdBufContext v5; 
  __int128 v6; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  cmd = execState->cmd;
  v3 = execState;
  __asm
  {
    vmovups [rsp+48h+var_18], xmm0
    vmovups [rsp+48h+var_28], xmm0
  }
  RB_EndSurfaceIfNeeded(&v5);
  v4 = v6;
  *(_DWORD *)(v6 + 2784) = cmd[1];
  *(_DWORD *)(v4 + 2788) = cmd[2];
  *(_DWORD *)(v4 + 2792) = cmd[3];
  *(_DWORD *)(v4 + 2796) = cmd[4];
  ++*(_WORD *)(v4 + 10288);
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_SetUICodeSamplerCmd
==============
*/
void RB_SetUICodeSamplerCmd(GfxRenderCommandExecState *execState)
{
  _WORD *cmd; 
  GfxRenderCommandExecState *v3; 
  __int16 v7; 
  GfxCmdBufContext v26; 

  cmd = execState->cmd;
  v3 = execState;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovups [rsp+48h+var_28], xmm6
  }
  RB_EndSurfaceIfNeeded(&v26);
  _EAX = *((unsigned __int8 *)cmd + 6);
  _ER8 = 0;
  v7 = cmd[2];
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovd   xmm0, eax
    vmovq   rcx, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovd   xmm1, r8d
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rcx+0BC0h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rcx+0BC4h], xmm0
  }
  _EAX = v7 & 7;
  __asm
  {
    vmovd   xmm0, eax
    vxorps  xmm4, xmm4, xmm4
    vblendvps xmm5, xmm3, xmm4, xmm2
    vmovss  dword ptr [rcx+0BCCh], xmm5
    vmovd   xmm1, r8d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
    vmovss  dword ptr [rcx+0BC8h], xmm0
  }
  ++*(_WORD *)(_RCX + 10316);
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_SetUIGlitch
==============
*/

void __fastcall RB_SetUIGlitch(GfxRenderCommandExecState *execState, double _XMM1_8, double _XMM2_8)
{
  GfxRenderCommandExecState *v6; 
  char v20; 
  char v21; 
  GfxCmdBufContext v30; 
  __int128 v31; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  _RDI = execState->cmd;
  v6 = execState;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovups [rsp+58h+var_28], xmm0
    vmovups [rsp+58h+var_38], xmm0
  }
  RB_EndSurfaceIfNeeded(&v30);
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm4, xmm0, cs:__real@3b808081
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmaxss  xmm0, xmm1, xmm3
    vdivss  xmm5, xmm3, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmaxss  xmm1, xmm0, xmm3
    vmovss  xmm0, dword ptr [rdi+8]
    vcomiss xmm0, cs:__real@34000000
    vdivss  xmm6, xmm3, xmm1
  }
  if ( !(v20 | v21) )
    __asm { vdivss  xmm3, xmm3, xmm0 }
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
  }
  _RAX = v31;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm0, dword ptr [rax+2CE8h]
    vmulss  xmm0, xmm0, cs:__real@41200000
    vmovss  dword ptr [rax+0B44h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rax+0B40h], xmm5
    vmovss  dword ptr [rax+0B48h], xmm3
  }
  *(_DWORD *)(_RAX + 2892) = 1065353216;
  ++*(_WORD *)(_RAX + 10300);
  __asm
  {
    vmovss  dword ptr [rax+0B50h], xmm2
    vmovss  dword ptr [rax+0B5Ch], xmm4
  }
  *(_DWORD *)(_RAX + 2900) = 0;
  __asm
  {
    vroundss xmm1, xmm1, xmm0, 1
    vmovss  dword ptr [rax+0B58h], xmm1
  }
  ++*(_WORD *)(_RAX + 10302);
  v6->cmd = (char *)v6->cmd + *((unsigned __int16 *)v6->cmd + 1);
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
  const Material *mtlOverride; 
  float v9; 
  float v10; 
  float v11; 
  GfxColor v12; 
  GfxCmdBufContext v13; 

  _RBX = execState;
  _RCX = (char *)execState->cmd;
  mtlOverride = _RBX->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RCX + 1);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rcx+48h]
    vmovss  xmm3, dword ptr [rcx+40h]
  }
  v12 = *(GfxColor *)(_RCX + 80);
  __asm
  {
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
    vmovss  xmm0, dword ptr [rcx+4Ch]
    vmovss  [rsp+58h+var_28], xmm0
    vmovss  xmm0, dword ptr [rcx+44h]
    vmovss  [rsp+58h+var_30], xmm1
    vmovss  [rsp+58h+var_38], xmm0
  }
  RB_Draw3DQuadPicST(&v13, mtlOverride, (const vec3_t (*)[4])(_RCX + 16), *(float *)&_XMM3, v9, v10, v11, v12);
  _RBX->cmd = (char *)_RBX->cmd + *((unsigned __int16 *)_RBX->cmd + 1);
}

/*
==============
RB_DrawMouseCursorCmd
==============
*/

void __fastcall RB_DrawMouseCursorCmd(GfxRenderCommandExecState *execState, double _XMM1_8)
{
  GfxRenderCommandExecState *v4; 
  const Material *mtlOverride; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  unsigned int v28; 
  GfxCmdBufContext v29; 
  MouseCursorPos curPos; 

  _RBX = execState->cmd;
  v4 = execState;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  IN_GetCursorPos(*((_DWORD *)_RBX + 7), &curPos);
  __asm
  {
    vmovss  xmm3, dword ptr [rbx+10h]
    vmulss  xmm0, xmm3, cs:__real@3f000000
    vmovss  xmm4, dword ptr [rbx+14h]
  }
  mtlOverride = v4->mtlOverride;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+88h+curPos.x]
    vsubss  xmm5, xmm1, xmm0
    vmulss  xmm0, xmm4, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+88h+curPos.y]
    vsubss  xmm2, xmm1, xmm0
  }
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RBX + 1);
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  v28 = *((_DWORD *)_RBX + 6);
  __asm
  {
    vmovss  [rsp+88h+var_40], xmm0
    vmovss  [rsp+88h+var_48], xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+88h+var_50], xmm1
    vmovss  [rsp+88h+var_58], xmm1
    vmovss  [rsp+88h+var_60], xmm4
    vmovss  [rsp+88h+var_68], xmm3
    vmovaps xmm3, xmm2
    vmovaps xmm2, xmm5
    vmovdqa [rsp+88h+var_28], xmm6
  }
  RB_DrawStretchPic(&v29, mtlOverride, *(float *)&_XMM2, *(float *)&_XMM3, v22, v23, v24, v25, v26, v27, v28, GFX_PRIM_STATS_HUD);
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  v4->cmd = (char *)v4->cmd + *((unsigned __int16 *)v4->cmd + 1);
}

/*
==============
RB_SetFirstUIMaskCmd
==============
*/
void RB_SetFirstUIMaskCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v4; 
  __int64 v7; 
  int v9; 
  int v13; 
  int v17; 
  GfxCmdBufContext v21[2]; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = execState->cmd;
  v4 = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovq   rbx, xmm6
    vmovups xmmword ptr [rax-28h], xmm6
  }
  RB_EndSurfaceIfNeeded(v21);
  if ( *(_DWORD *)(_RBX + 11488) != 2 )
  {
    __asm { vmovdqa [rsp+58h+var_28], xmm6 }
    RB_EndSurfaceIfNeeded(v21);
    R_Set2D((GfxCmdBufSourceState *)_RBX);
  }
  *(_DWORD *)(_RBX + 11632) = _RDI[10];
  *(_DWORD *)(_RBX + 11636) = _RDI[11];
  *(_DWORD *)(_RBX + 11616) = _RDI[1];
  *(_DWORD *)(_RBX + 11620) = _RDI[2];
  v7 = *((_QWORD *)_RDI + 2);
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  *(_QWORD *)(_RBX + 8088) = v7;
  v9 = _RDI[6];
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+24h]
    vmovss  xmm1, dword ptr [rdi+20h]
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  dword ptr [rbx+0A74h], xmm0
    vmovss  dword ptr [rbx+0A78h], xmm1
    vmovss  dword ptr [rbx+0A7Ch], xmm2
  }
  *(_DWORD *)(_RBX + 2672) = v9;
  ++*(_WORD *)(_RBX + 10274);
  v13 = *(_DWORD *)(_RBX + 11616);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+2D6Ch]
    vmovss  xmm1, dword ptr [rbx+2D64h]
    vmovss  xmm0, dword ptr [rbx+2D68h]
    vmovss  dword ptr [rbx+0AA4h], xmm0
    vmovss  dword ptr [rbx+0AA8h], xmm1
    vmovss  dword ptr [rbx+0AACh], xmm2
  }
  *(_DWORD *)(_RBX + 2720) = v13;
  ++*(_WORD *)(_RBX + 10280);
  v17 = *(_DWORD *)(_RBX + 11632);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+2D7Ch]
    vmovss  xmm1, dword ptr [rbx+2D78h]
    vmovss  xmm0, dword ptr [rbx+2D74h]
    vmovss  dword ptr [rbx+0A84h], xmm0
    vmovss  dword ptr [rbx+0A88h], xmm1
    vmovss  dword ptr [rbx+0A8Ch], xmm2
  }
  *(_DWORD *)(_RBX + 2688) = v17;
  ++*(_WORD *)(_RBX + 10276);
  v4->cmd = (char *)v4->cmd + *((unsigned __int16 *)v4->cmd + 1);
}

/*
==============
RB_ClearFirstUIMaskCmd
==============
*/
void RB_ClearFirstUIMaskCmd(GfxRenderCommandExecState *execState)
{
  GfxCmdBufSourceState *source; 
  GfxRenderCommandExecState *v4; 
  GfxImage *whiteImage; 
  GfxCmdBufContext v11[2]; 
  void *retaddr; 

  _RAX = &retaddr;
  source = execState->gfxContext.source;
  v4 = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovq   rbx, xmm6
  }
  if ( source->viewMode != VIEW_MODE_2D )
  {
    __asm { vmovups xmmword ptr [rax-28h], xmm6 }
    RB_EndSurfaceIfNeeded(v11);
    R_Set2D(source);
  }
  __asm { vmovdqa [rsp+58h+var_28], xmm6 }
  RB_EndSurfaceIfNeeded(v11);
  whiteImage = rgp.whiteImage;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  *(_QWORD *)(_RBX + 8088) = whiteImage;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+2D6Ch]
    vmovss  xmm0, dword ptr [rbx+2D68h]
  }
  *(_QWORD *)(_RBX + 11616) = 1065353216i64;
  __asm
  {
    vmovss  dword ptr [rbx+0AA4h], xmm0
    vmovss  dword ptr [rbx+0AACh], xmm1
  }
  *(_DWORD *)(_RBX + 2720) = 1065353216;
  *(_DWORD *)(_RBX + 2728) = 0;
  ++*(_WORD *)(_RBX + 10280);
  v4->cmd = (char *)v4->cmd + *((unsigned __int16 *)v4->cmd + 1);
}

/*
==============
RB_SetSecondUIMaskCmd
==============
*/
void RB_SetSecondUIMaskCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v4; 
  __int64 v7; 
  int v9; 
  int v13; 
  int v17; 
  GfxCmdBufContext v21[2]; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = execState->cmd;
  v4 = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovq   rbx, xmm6
    vmovups xmmword ptr [rax-28h], xmm6
  }
  RB_EndSurfaceIfNeeded(v21);
  if ( *(_DWORD *)(_RBX + 11488) != 2 )
  {
    __asm { vmovdqa [rsp+58h+var_28], xmm6 }
    RB_EndSurfaceIfNeeded(v21);
    R_Set2D((GfxCmdBufSourceState *)_RBX);
  }
  *(_DWORD *)(_RBX + 11640) = _RDI[10];
  *(_DWORD *)(_RBX + 11644) = _RDI[11];
  *(_DWORD *)(_RBX + 11624) = _RDI[1];
  *(_DWORD *)(_RBX + 11628) = _RDI[2];
  v7 = *((_QWORD *)_RDI + 2);
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  *(_QWORD *)(_RBX + 8096) = v7;
  v9 = _RDI[6];
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+24h]
    vmovss  xmm1, dword ptr [rdi+20h]
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  dword ptr [rbx+0A94h], xmm0
    vmovss  dword ptr [rbx+0A98h], xmm1
    vmovss  dword ptr [rbx+0A9Ch], xmm2
  }
  *(_DWORD *)(_RBX + 2704) = v9;
  ++*(_WORD *)(_RBX + 10278);
  v13 = *(_DWORD *)(_RBX + 11616);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+2D6Ch]
    vmovss  xmm1, dword ptr [rbx+2D64h]
    vmovss  xmm0, dword ptr [rbx+2D68h]
    vmovss  dword ptr [rbx+0AA4h], xmm0
    vmovss  dword ptr [rbx+0AA8h], xmm1
    vmovss  dword ptr [rbx+0AACh], xmm2
  }
  *(_DWORD *)(_RBX + 2720) = v13;
  ++*(_WORD *)(_RBX + 10280);
  v17 = *(_DWORD *)(_RBX + 11632);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+2D7Ch]
    vmovss  xmm1, dword ptr [rbx+2D78h]
    vmovss  xmm0, dword ptr [rbx+2D74h]
    vmovss  dword ptr [rbx+0A84h], xmm0
    vmovss  dword ptr [rbx+0A88h], xmm1
    vmovss  dword ptr [rbx+0A8Ch], xmm2
  }
  *(_DWORD *)(_RBX + 2688) = v17;
  ++*(_WORD *)(_RBX + 10276);
  v4->cmd = (char *)v4->cmd + *((unsigned __int16 *)v4->cmd + 1);
}

/*
==============
RB_ClearSecondUIMaskCmd
==============
*/
void RB_ClearSecondUIMaskCmd(GfxRenderCommandExecState *execState)
{
  GfxCmdBufSourceState *source; 
  GfxRenderCommandExecState *v4; 
  GfxImage *whiteImage; 
  int v9; 
  GfxCmdBufContext v11[2]; 
  void *retaddr; 

  _RAX = &retaddr;
  source = execState->gfxContext.source;
  v4 = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovq   rbx, xmm6
  }
  if ( source->viewMode != VIEW_MODE_2D )
  {
    __asm { vmovups xmmword ptr [rax-28h], xmm6 }
    RB_EndSurfaceIfNeeded(v11);
    R_Set2D(source);
  }
  __asm { vmovdqa [rsp+58h+var_28], xmm6 }
  RB_EndSurfaceIfNeeded(v11);
  whiteImage = rgp.whiteImage;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  *(_QWORD *)(_RBX + 8096) = whiteImage;
  v9 = *(_DWORD *)(_RBX + 11616);
  __asm { vmovss  xmm0, dword ptr [rbx+2D64h] }
  *(_QWORD *)(_RBX + 11624) = 1065353216i64;
  *(_DWORD *)(_RBX + 2732) = 0;
  __asm { vmovss  dword ptr [rbx+0AA8h], xmm0 }
  *(_DWORD *)(_RBX + 2720) = v9;
  *(_DWORD *)(_RBX + 2724) = 1065353216;
  ++*(_WORD *)(_RBX + 10280);
  v4->cmd = (char *)v4->cmd + *((unsigned __int16 *)v4->cmd + 1);
}

/*
==============
RB_DrawFullScreenColoredQuadCmd
==============
*/
void RB_DrawFullScreenColoredQuadCmd(GfxRenderCommandExecState *execState)
{
  const Material *mtlOverride; 
  float v9; 
  float v10; 
  unsigned int v11; 
  GfxCmdBufContext v12; 

  _RBX = execState;
  _RCX = execState->cmd;
  mtlOverride = _RBX->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)_RCX + 1);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+10h]
    vmovss  xmm1, dword ptr [rcx+18h]
    vmovss  xmm3, dword ptr [rcx+14h]
    vmovss  xmm2, dword ptr [rcx+10h]
  }
  v11 = *((_DWORD *)_RCX + 8);
  __asm
  {
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  [rsp+58h+var_38], xmm1
  }
  RB_DrawFullScreenColoredQuadInternal(&v12, mtlOverride, *(float *)&_XMM2, *(float *)&_XMM3, v9, v10, v11, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(1953)");
  _RBX->cmd = (char *)_RBX->cmd + *((unsigned __int16 *)_RBX->cmd + 1);
}

/*
==============
RB_ClearScreenCmd
==============
*/
void RB_ClearScreenCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v5; 
  char v7; 
  unsigned __int8 stencil; 
  unsigned __int8 v10; 
  __int64 m_location; 
  float fmt; 
  GfxCmdBufSourceState *source[4]; 
  char v27; 
  __int64 v29; 
  GfxViewport outViewport; 
  char v31; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
  }
  _R15 = (char *)execState->cmd;
  v5 = execState;
  __asm
  {
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rsp+188h+source], xmm6
  }
  v7 = _R15[28];
  __asm { vmovss  xmm7, dword ptr [r15+18h] }
  stencil = _R15[5];
  v10 = _R15[4];
  __asm { vmovups xmmword ptr [r11-68h], xmm6 }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&outViewport);
  __asm { vpextrq rbx, xmm6, 1 }
  _RCX = &v27;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+0A28h]
    vmovups ymm1, ymmword ptr [rbx+0AA8h]
  }
  m_location = (__int64)_RBX->rtGroup.m_vrsRt.m_tracking.m_location;
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rbx+0A48h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rbx+0A68h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rbx+0A88h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rbx+0AC8h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
  }
  v29 = m_location;
  if ( v27 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  if ( (*((_BYTE *)source[0] + 11668) & 2) != 0 && source[0]->viewMode )
  {
    R_GetViewport(source[0], &outViewport);
    R_SetViewportAndScissorSeparate(_RBX, &outViewport, &outViewport);
    R_UpdateViewport(source[0], &outViewport);
  }
  if ( v7 )
  {
    __asm { vmovss  dword ptr [rsp+188h+fmt], xmm7 }
    R_ClearScreenLegacySlow(_RBX, v10, (const vec4_t *)(_R15 + 8), 1u, fmt, stencil);
  }
  else
  {
    R_ClearScreen(_RBX, v10, stencil);
  }
  __asm
  {
    vmovups ymm0, [rsp+188h+var_130]
    vmovups ymmword ptr [rsp+188h+source], ymm0
  }
  R_AddRenderTargetTransition(_RBX, (R_RT_ColorHandle *)source, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RBX);
  __asm
  {
    vmovups ymm0, [rsp+188h+var_130]
    vmovups ymmword ptr [rsp+188h+source], ymm0
  }
  R_AddRenderTargetTransition(_RBX, (R_RT_ColorHandle *)source, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RBX);
  v5->cmd = (char *)v5->cmd + *((unsigned __int16 *)v5->cmd + 1);
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
RB_SaveScreenSectionCmd
==============
*/
void RB_SaveScreenSectionCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v3; 
  __int64 v5; 
  int v7; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v11; 
  float fmt; 
  int v21; 
  float v22; 
  int v23; 
  R_RT_Handle v24; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v26; 

  _RBP = (int *)execState->cmd;
  v3 = execState;
  __asm
  {
    vmovaps [rsp+0C8h+var_28], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  if ( (unsigned int)_RBP[5] >= 2 )
  {
    v23 = 2;
    v21 = _RBP[5];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2055, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientID ) < (unsigned)( ( sizeof( *array_counter( rgp.savedScreenTimes ) ) + 0 ) )", "cmd->clientID doesn't index ARRAY_COUNT( rgp.savedScreenTimes )\n\t%i not in [0, %i)", v21, v23) )
      __debugbreak();
  }
  __asm { vmovdqa xmmword ptr [rsp+0C8h+var_88], xmm6 }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v24);
  v5 = _RBP[5];
  __asm { vmovq   r14, xmm6 }
  v7 = _R14[2873];
  if ( rgp.savedScreenTimes[v5] != v7 )
  {
    R_GetSavedScreenRt(&result, (GfxRenderTargetId)(v5 + 4), _R14[2898], _R14[2899]);
    R_RT_GetGlobalColor(&v26, R_RENDERTARGET_DISPLAY_BUFFER);
    Surface = R_RT_Handle::GetSurface(&result);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID]
      vpextrq rdi, xmm6, 1
    }
    v11 = Surface;
    __asm { vmovups [rsp+0C8h+var_88], ymm0 }
    R_HW_AddResourceTransition(_RDI, &v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0C8h+var_48.baseclass_0.m_surfaceID]
      vmovups [rsp+0C8h+var_88], ymm0
    }
    R_HW_AddResourceTransition(_RDI, &v24, 0xFFFFFFFF, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+10h]
      vmovss  xmm1, dword ptr [rbp+0Ch]
      vmovss  xmm3, dword ptr [rbp+8]
      vmovss  xmm2, dword ptr [rbp+4]
      vmovss  [rsp+0C8h+var_A0], xmm0
      vmovss  dword ptr [rsp+0C8h+fmt], xmm1
      vmovdqa xmmword ptr [rsp+0C8h+var_88], xmm6
    }
    R_ResolveSection((GfxCmdBufContext *)&v24, &v11->m_image.m_base, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v22);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID], ymm0
    }
    R_HW_AddResourceTransition(_RDI, &result, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0C8h+var_48.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+0C8h+var_48.baseclass_0.m_surfaceID], ymm0
    }
    R_HW_AddResourceTransition(_RDI, &v26, 0xFFFFFFFF, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    LODWORD(v5) = _RBP[5];
    v7 = _R14[2873];
  }
  __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
  rgp.savedScreenTimes[(int)v5] = v7;
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_BlendSavedScreenBlurredCmd
==============
*/

void __fastcall RB_BlendSavedScreenBlurredCmd(GfxRenderCommandExecState *execState, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  __int64 v17; 
  int v18; 
  const R_RT_Surface *Surface; 
  float fmt; 
  __int64 v52; 
  float v53; 
  int v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  R_RT_ColorHandle result; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  _RSI = (int *)execState->cmd;
  _RBX = execState;
  __asm { vmovaps xmmword ptr [rax-78h], xmm12 }
  if ( _RSI[1] <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2113, ASSERT_TYPE_ASSERT, "(cmd->fadeMsec > 0)", (const char *)&queryFormat, "cmd->fadeMsec > 0") )
    __debugbreak();
  if ( (unsigned int)_RSI[6] >= 2 )
  {
    v54 = 2;
    LODWORD(v52) = _RSI[6];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2114, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientID ) < (unsigned)( ( sizeof( *array_counter( rgp.savedScreenTimes ) ) + 0 ) )", "cmd->clientID doesn't index ARRAY_COUNT( rgp.savedScreenTimes )\n\t%i not in [0, %i)", v52, v54) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm12, xmmword ptr [rbx+10h]
    vmovups xmmword ptr [rsp+0F8h+result.baseclass_0.m_surfaceID], xmm12
  }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
  __asm { vmovq   rdi, xmm12 }
  if ( *(_DWORD *)(_RDI + 11488) != 2 )
  {
    __asm { vmovdqa xmmword ptr [rsp+0F8h+result.baseclass_0.m_surfaceID], xmm12 }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
    R_Set2D((GfxCmdBufSourceState *)_RDI);
  }
  v17 = _RSI[6];
  v18 = *(_DWORD *)(_RDI + 11492) - rgp.savedScreenTimes[v17];
  if ( v18 >= 0 && v18 < _RSI[1] )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_18], xmm6
      vmovaps [rsp+0F8h+var_28], xmm7
      vmovaps [rsp+0F8h+var_38], xmm8
      vmovaps [rsp+0F8h+var_48], xmm9
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm8, xmm0, dword ptr [rsi+10h]
      vmovaps [rsp+0F8h+var_58], xmm10
      vmovss  xmm10, dword ptr [rsi+0Ch]
      vaddss  xmm7, xmm10, dword ptr [rsi+14h]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmulss  xmm6, xmm1, dword ptr [rsi+14h]
      vmovaps [rsp+0F8h+var_68], xmm11
      vmovss  xmm11, dword ptr [rsi+8]
      vaddss  xmm9, xmm11, dword ptr [rsi+10h]
    }
    R_RT_GetGlobalColor(&result, (GfxRenderTargetId)(v17 + 4));
    Surface = R_RT_Handle::GetSurface(&result);
    R_SetCodeImageTextureInternal((GfxCmdBufSourceState *)_RDI, 4u, &Surface->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2161)");
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r14d
      vcvtsi2ss xmm1, xmm1, ebp
      vdivss  xmm1, xmm1, xmm0; Y
      vmovss  xmm0, cs:__real@3c23d70a; X
    }
    *(_DWORD *)(_RDI + 2736) = 1065353216;
    *(_DWORD *)(_RDI + 2740) = 1065353216;
    *(_DWORD *)(_RDI + 2744) = 1065353216;
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vminss  xmm1, xmm0, cs:__real@3f7d70a4
      vmovss  dword ptr [rdi+0ABCh], xmm1
    }
    ++*(_WORD *)(_RDI + 10282);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B; vec4_t const colorBlackBlank
      vmovss  dword ptr [rdi+0AC0h], xmm0
      vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+4; vec4_t const colorBlackBlank
      vmovss  dword ptr [rdi+0AC4h], xmm1
      vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+8; vec4_t const colorBlackBlank
      vmovss  dword ptr [rdi+0AC8h], xmm0
      vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+0Ch; vec4_t const colorBlackBlank
      vmovss  dword ptr [rdi+0ACCh], xmm1
    }
    ++*(_WORD *)(_RDI + 10284);
    __asm
    {
      vmovss  [rsp+0F8h+var_B0], xmm7
      vmovss  [rsp+0F8h+var_B8], xmm9
    }
    *(_DWORD *)(_RDI + 2768) = 0;
    *(_QWORD *)(_RDI + 2772) = 2139095039i64;
    *(_DWORD *)(_RDI + 2780) = 0;
    ++*(_WORD *)(_RDI + 10286);
    __asm
    {
      vmovss  [rsp+0F8h+var_C0], xmm10
      vmovss  [rsp+0F8h+var_C8], xmm11
      vmovss  dword ptr [rsp+0F8h+var_D0], xmm6
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm2, xmm2, xmm2
      vmovss  dword ptr [rsp+0F8h+fmt], xmm8
      vmovdqa xmmword ptr [rsp+0F8h+result.baseclass_0.m_surfaceID], xmm12
    }
    RB_DrawStretchPic((GfxCmdBufContext *)&result, rgp.feedbackBlendBackbufferMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v53, v55, v56, v57, v58, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
    __asm
    {
      vmovaps xmm11, [rsp+0F8h+var_68]
      vmovaps xmm10, [rsp+0F8h+var_58]
      vmovaps xmm9, [rsp+0F8h+var_48]
      vmovaps xmm8, [rsp+0F8h+var_38]
      vmovaps xmm7, [rsp+0F8h+var_28]
      vmovaps xmm6, [rsp+0F8h+var_18]
    }
  }
  _R11 = &v66;
  __asm { vmovaps xmm12, xmmword ptr [r11-70h] }
  _RBX->cmd = (char *)_RBX->cmd + *((unsigned __int16 *)_RBX->cmd + 1);
}

/*
==============
RB_BlendSavedScreenFlashedCmd
==============
*/

void __fastcall RB_BlendSavedScreenFlashedCmd(GfxRenderCommandExecState *execState, __int64 a2, double _XMM2_8)
{
  GfxRenderCommandExecState *v9; 
  R_RT_Image *p_m_image; 
  Material *feedbackReplaceBackbufferMaterial; 
  float fmt; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  R_RT_ColorHandle result; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = execState->cmd;
  v9 = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovups xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
  __asm { vmovq   rbx, xmm6 }
  if ( *(_DWORD *)(_RBX + 11488) != 2 )
  {
    __asm { vmovdqa xmmword ptr [rsp+0B8h+result.baseclass_0.m_surfaceID], xmm6 }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
    R_Set2D((GfxCmdBufSourceState *)_RBX);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm7, xmm0, dword ptr [rdi+18h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm8, xmm0, dword ptr [rdi+1Ch]
  }
  R_RT_GetGlobalColor(&result, (GfxRenderTargetId)(_RDI[32] + 4));
  p_m_image = &R_RT_Handle::GetSurface(&result)->m_image;
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovss  xmm3, cs:__real@3f800000 }
  *(_QWORD *)(_RBX + 7968) = p_m_image;
  __asm { vxorps  xmm2, xmm2, xmm2 }
  if ( _RDI[4] )
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackReplaceBackbufferMaterial;
  }
  else
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackBlendBackbufferMaterial;
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+8]
      vmovss  xmm3, dword ptr [rdi+0Ch]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0AB0h], xmm0
    vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+4; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0AB4h], xmm1
    vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+8; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0AB8h], xmm0
    vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+0Ch; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0ABCh], xmm1
  }
  ++*(_WORD *)(_RBX + 10282);
  __asm
  {
    vmovss  dword ptr [rbx+0AC0h], xmm2
    vmovss  dword ptr [rbx+0AC4h], xmm2
    vmovss  dword ptr [rbx+0AC8h], xmm2
    vmovss  dword ptr [rbx+0ACCh], xmm3
  }
  ++*(_WORD *)(_RBX + 10284);
  *(_DWORD *)(_RBX + 2768) = 0;
  *(_QWORD *)(_RBX + 2772) = 2139095039i64;
  *(_DWORD *)(_RBX + 2780) = 0;
  ++*(_WORD *)(_RBX + 10286);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+14h]
    vmovss  xmm4, dword ptr [rdi+10h]
    vaddss  xmm0, xmm3, dword ptr [rdi+1Ch]
    vaddss  xmm1, xmm4, dword ptr [rdi+18h]
    vmovss  [rsp+0B8h+var_70], xmm0
    vmovss  [rsp+0B8h+var_78], xmm1
    vmovss  [rsp+0B8h+var_80], xmm3
    vmovss  [rsp+0B8h+var_88], xmm4
    vmovss  dword ptr [rsp+0B8h+var_90], xmm8
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+0B8h+fmt], xmm7
    vmovdqa xmmword ptr [rsp+0B8h+result.baseclass_0.m_surfaceID], xmm6
  }
  RB_DrawStretchPic((GfxCmdBufContext *)&result, feedbackReplaceBackbufferMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v37, v38, v39, v40, v41, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  v9->cmd = (char *)v9->cmd + *((unsigned __int16 *)v9->cmd + 1);
}

/*
==============
RB_BlendSavedScreenPhotoCmd
==============
*/
void RB_BlendSavedScreenPhotoCmd(GfxRenderCommandExecState *execState)
{
  R_RT_Image *p_m_image; 
  Material *feedbackReplaceBackbufferMaterial; 
  float fmt; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  R_RT_ColorHandle result; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = execState;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( !execState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2223, ASSERT_TYPE_ASSERT, "(execState)", (const char *)&queryFormat, "execState") )
    __debugbreak();
  __asm { vmovups xmm6, xmmword ptr [rdi+10h] }
  _RSI = _RDI->cmd;
  __asm { vmovups xmmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID], xmm6 }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
  __asm { vmovq   rbx, xmm6 }
  if ( *(_DWORD *)(_RBX + 11488) != 2 )
  {
    __asm { vmovdqa xmmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID], xmm6 }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&result);
    R_Set2D((GfxCmdBufSourceState *)_RBX);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm7, xmm0, dword ptr [rsi+14h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm8, xmm0, dword ptr [rsi+18h]
  }
  R_RT_GetGlobalColor(&result, (GfxRenderTargetId)(_RSI[28] + 4));
  p_m_image = &R_RT_Handle::GetSurface(&result)->m_image;
  if ( _RBX == -1792 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  *(_QWORD *)(_RBX + 7968) = p_m_image;
  if ( _RSI[4] )
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackReplaceBackbufferMaterial;
  }
  else
  {
    feedbackReplaceBackbufferMaterial = rgp.feedbackBlendBackbufferMaterial;
    __asm { vmovss  xmm0, dword ptr [rsi+8] }
  }
  __asm { vmovss  dword ptr [rbx+0ABCh], xmm0 }
  *(_DWORD *)(_RBX + 2736) = 1065353216;
  *(_DWORD *)(_RBX + 2740) = 1065353216;
  *(_DWORD *)(_RBX + 2744) = 1065353216;
  ++*(_WORD *)(_RBX + 10282);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0AC0h], xmm0
    vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+4; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0AC4h], xmm1
    vmovss  xmm0, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+8; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0AC8h], xmm0
    vmovss  xmm1, dword ptr cs:?colorBlackBlank@@3Tvec4_t@@B+0Ch; vec4_t const colorBlackBlank
    vmovss  dword ptr [rbx+0ACCh], xmm1
  }
  ++*(_WORD *)(_RBX + 10284);
  *(_DWORD *)(_RBX + 2768) = 0;
  *(_QWORD *)(_RBX + 2772) = 2139095039i64;
  *(_DWORD *)(_RBX + 2780) = 0;
  ++*(_WORD *)(_RBX + 10286);
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+10h]
    vmovss  xmm3, dword ptr [rsi+0Ch]
    vaddss  xmm0, xmm2, dword ptr [rsi+18h]
    vaddss  xmm1, xmm3, dword ptr [rsi+14h]
    vmovss  [rsp+0C8h+var_80], xmm0
    vmovss  [rsp+0C8h+var_88], xmm1
    vmovss  [rsp+0C8h+var_90], xmm2
    vmovss  [rsp+0C8h+var_98], xmm3
    vmovss  dword ptr [rsp+0C8h+var_A0], xmm8
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+0C8h+fmt], xmm7
    vmovdqa xmmword ptr [rsp+0C8h+result.baseclass_0.m_surfaceID], xmm6
  }
  RB_DrawStretchPic((GfxCmdBufContext *)&result, feedbackReplaceBackbufferMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v34, v35, v36, v37, v38, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  _RDI->cmd = (char *)_RDI->cmd + *((unsigned __int16 *)_RDI->cmd + 1);
}

/*
==============
RB_DrawPointsCmd
==============
*/
void RB_DrawPointsCmd(GfxRenderCommandExecState *execState)
{
  const GfxCmdDrawPoints *cmd; 
  GfxRenderCommandExecState *v3; 
  unsigned __int8 dimensions; 
  int v7; 
  GfxCmdBufContext v8; 

  cmd = (const GfxCmdDrawPoints *)execState->cmd;
  v3 = execState;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  dimensions = cmd->dimensions;
  if ( dimensions == 2 )
  {
    __asm { vmovups [rsp+58h+var_28], xmm6 }
    RB_DrawPoints2D(&v8, cmd);
  }
  else
  {
    if ( dimensions != 3 )
    {
      v7 = dimensions;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2363, ASSERT_TYPE_SANITY, "( ( cmd->dimensions == 3 ) )", "( cmd->dimensions ) = %i", v7) )
        __debugbreak();
    }
    __asm { vmovdqa [rsp+58h+var_28], xmm6 }
    RB_DrawPoints3D(&v8, cmd);
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_DrawRect2DCmd
==============
*/
void RB_DrawRect2DCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  GfxRenderCommandExecState *v5; 
  unsigned __int16 v7; 
  __int64 v11; 
  unsigned int v18; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  unsigned int v26; 
  GfxCmdBufContext v27; 

  cmd = (char *)execState->cmd;
  v5 = execState;
  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm8
    vmovups xmm8, xmmword ptr [rcx+10h]
  }
  if ( cmd[6] )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "rect2d");
    v7 = *((_WORD *)cmd + 2);
    if ( v7 )
    {
      _RBX = cmd + 20;
      __asm
      {
        vmovaps [rsp+0A8h+var_18], xmm6
        vmovss  xmm6, cs:__real@3f800000
        vmovaps [rsp+0A8h+var_28], xmm7
        vxorps  xmm7, xmm7, xmm7
      }
      v11 = v7;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  xmm1, dword ptr [rbx-4]
          vmovss  xmm3, dword ptr [rbx-8]
          vmovss  xmm2, dword ptr [rbx-0Ch]
        }
        v26 = *((_DWORD *)_RBX + 1);
        __asm
        {
          vmovss  [rsp+0A8h+var_60], xmm6
          vmovss  [rsp+0A8h+var_68], xmm6
          vmovss  [rsp+0A8h+var_70], xmm7
          vmovss  [rsp+0A8h+var_78], xmm7
          vmovss  [rsp+0A8h+var_80], xmm0
          vmovss  [rsp+0A8h+var_88], xmm1
          vmovdqa [rsp+0A8h+var_48], xmm8
        }
        RB_DrawStretchPic(&v27, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v20, v21, v22, v23, v24, v25, v26, GFX_PRIM_STATS_DEBUG);
        _RBX += 20;
        --v11;
      }
      while ( v11 );
      __asm
      {
        vmovaps xmm7, [rsp+0A8h+var_28]
        vmovaps xmm6, [rsp+0A8h+var_18]
      }
    }
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "rect2dlines");
    v18 = *((unsigned __int16 *)cmd + 2);
    __asm { vmovdqa [rsp+0A8h+var_48], xmm8 }
    RB_DrawRectOutline2D(&v27, v18, 1, (const GfxCmdDrawRect2D::Rect *)(cmd + 8));
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm8, [rsp+0A8h+var_38] }
  v5->cmd = (char *)v5->cmd + *((unsigned __int16 *)v5->cmd + 1);
}

/*
==============
RB_DrawLinesCmd
==============
*/
void RB_DrawLinesCmd(GfxRenderCommandExecState *execState)
{
  unsigned __int8 *cmd; 
  GfxRenderCommandExecState *v3; 
  unsigned __int8 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int fmt; 
  int v12; 
  GfxCmdBufContext v13; 

  cmd = (unsigned __int8 *)execState->cmd;
  v3 = execState;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  v5 = cmd[7];
  if ( (v5 & 3) == 2 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "lines2d");
    v6 = cmd[6];
    v7 = *((unsigned __int16 *)cmd + 2);
    __asm { vmovdqa [rsp+58h+var_28], xmm6 }
    RB_DrawLines2D(&v13, v7, v6, (const GfxPointVertex *)(cmd + 8));
  }
  else
  {
    if ( (v5 & 3) != 3 )
    {
      v12 = v5 & 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2791, ASSERT_TYPE_SANITY, "( ( cmd->dimensions == 3 ) )", "( cmd->dimensions ) = %i", v12) )
        __debugbreak();
    }
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "lines3d");
    v8 = cmd[6];
    v9 = *((unsigned __int16 *)cmd + 2);
    fmt = (cmd[7] >> 2) & 1;
    __asm { vmovdqa [rsp+58h+var_28], xmm6 }
    RB_DrawLines3D(&v13, v9, v8, (const GfxPointVertex *)(cmd + 8), fmt);
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
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
  __int16 v13; 
  const vec4_t *v14; 
  GfxCmdBufContext v15; 

  cmd = (char *)execState->cmd;
  _RBX = execState;
  v3 = *((unsigned __int16 *)execState->cmd + 10);
  v4 = 16 * v3 + 4 * (3 * v3 + 6);
  mtlOverride = _RBX->mtlOverride;
  v6 = (const vec3_t *)&cmd[16 * v3 + 24];
  v7 = (const unsigned __int16 *)&cmd[v4 + 4 * v3 + 8 * v3];
  v9 = (const vec2_t *)&cmd[v4 + 4 * v3];
  if ( !mtlOverride )
    mtlOverride = (const Material *)*((_QWORD *)cmd + 1);
  v10 = cmd[16];
  v11 = *((_DWORD *)cmd + 1);
  v8 = (const GfxColor *)&cmd[16 * v3 + 4 * (3 * v3 + 6)];
  v14 = (const vec4_t *)(cmd + 24);
  v13 = *((_WORD *)cmd + 9);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+10h]
    vmovups [rsp+78h+var_18], xmm0
  }
  if ( v10 == 2 )
    RB_DrawTriangles_Internal2D(&v15, mtlOverride, v11, 2u, v13, v7, v3, v14, v6, v8, v9);
  else
    RB_DrawTriangles_Internal3D(&v15, mtlOverride, v11, v10, v13, v7, v3, v14, v6, v8, v9);
  _RBX->cmd = (char *)_RBX->cmd + *((unsigned __int16 *)_RBX->cmd + 1);
}

/*
==============
RB_EndSurfaceCmd
==============
*/
void RB_EndSurfaceCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v2; 
  GfxCmdBufContext v3; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  v2 = execState;
  __asm { vmovups xmmword ptr [rsp+38h+var_18.source], xmm0 }
  RB_EndSurfaceIfNeeded(&v3);
  v2->cmd = (char *)v2->cmd + *((unsigned __int16 *)v2->cmd + 1);
}

/*
==============
RB_SetCodeTextureCmd
==============
*/
void RB_SetCodeTextureCmd(GfxRenderCommandExecState *execState)
{
  const void *cmd; 
  GfxRenderCommandExecState *v3; 
  const char *v4; 
  const GfxImage *v5; 
  unsigned int v6; 
  __int128 state; 
  GfxCmdBufContext v8; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  cmd = execState->cmd;
  v3 = execState;
  __asm
  {
    vmovups xmmword ptr [rsp+58h+state], xmm0
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
  }
  RB_EndSurfaceIfNeeded(&v8);
  if ( r_profMaterial->current.integer > 0 )
  {
    v4 = j_va("RB_SetCodeTextureCmd %s", **((const char ***)cmd + 1));
    R_ProfSetMarker(*((CmdBufState **)&state + 1), v4);
  }
  v5 = (const GfxImage *)*((_QWORD *)cmd + 1);
  v6 = *((_DWORD *)cmd + 1);
  if ( !(_QWORD)state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  R_SetInputCodeImageTextureInternal((GfxCmdBufInput *)(state + 1792), v6, v5, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2925)");
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_SetViewportCmd
==============
*/
void RB_SetViewportCmd(GfxRenderCommandExecState *execState)
{
  char *cmd; 
  GfxRenderCommandExecState *v3; 
  GfxCmdBufContext v4; 
  GfxCmdBufSourceState *source[2]; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  cmd = (char *)execState->cmd;
  v3 = execState;
  __asm
  {
    vmovups xmmword ptr [rsp+48h+source], xmm0
    vmovups [rsp+48h+var_28], xmm0
  }
  RB_EndSurfaceIfNeeded(&v4);
  R_SetViewportStruct(source[0], (const GfxViewport *)(cmd + 4));
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_SetScissorCmd
==============
*/
void RB_SetScissorCmd(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxRenderCommandExecState *v3; 
  int x; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  GfxCmdBufContext v14; 
  GfxViewport scissorViewport; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  cmd = execState->cmd;
  v3 = execState;
  __asm
  {
    vmovups [rsp+88h+var_58], xmm0
    vmovups [rsp+88h+var_68], xmm0
  }
  RB_EndSurfaceIfNeeded(&v14);
  __asm
  {
    vmovups xmm0, [rsp+88h+var_58]
    vpextrq r15, xmm0, 1
  }
  x = _R15->viewport.x;
  v7 = x + cmd[1];
  v8 = v7 + cmd[3];
  v9 = _R15->viewport.y + cmd[2];
  v10 = v9 + cmd[4];
  v11 = I_clamp(v7, x, x + _R15->viewport.width);
  LODWORD(cmd) = I_clamp(v8, _R15->viewport.x, _R15->viewport.x + _R15->viewport.width);
  v12 = I_clamp(v9, _R15->viewport.y, _R15->viewport.y + _R15->viewport.height);
  v13 = I_clamp(v10, _R15->viewport.y, _R15->viewport.y + _R15->viewport.height);
  scissorViewport.x = v11;
  scissorViewport.height = v13 - v12;
  scissorViewport.y = v12;
  scissorViewport.width = (_DWORD)cmd - v11;
  R_HW_EnableScissor2D(_R15, &scissorViewport);
  v3->cmd = (char *)v3->cmd + *((unsigned __int16 *)v3->cmd + 1);
}

/*
==============
RB_ClearScissorCmd
==============
*/
void RB_ClearScissorCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v2; 
  GfxCmdBufContext v5; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  v2 = execState;
  __asm
  {
    vmovups [rsp+48h+var_18], xmm0
    vmovups [rsp+48h+var_28], xmm0
  }
  RB_EndSurfaceIfNeeded(&v5);
  __asm
  {
    vmovups xmm0, [rsp+48h+var_18]
    vpextrq rcx, xmm0, 1; state
  }
  R_HW_DisableScissor2D(_RCX);
  v2->cmd = (char *)v2->cmd + *((unsigned __int16 *)v2->cmd + 1);
}

/*
==============
RB_DrawText2DCmd
==============
*/
void RB_DrawText2DCmd(GfxRenderCommandExecState *execState)
{
  unsigned int renderFlags; 
  const FontGlowStyle *p_glowStyle; 
  const FontDecodeStyle *p_decodeStyle; 
  unsigned __int16 totalByteSize; 
  unsigned __int16 byteCount; 
  GfxCmdDrawText2D::Entry *v15; 
  int fontHeight; 
  GfxFont *font; 
  unsigned __int64 v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  GfxColor color; 
  int v26; 
  int v27; 
  int v28; 
  int cursorPos; 
  char cursorLetter; 
  const Material *fontMaterial; 
  const Material *iconsMaterial; 
  GfxCmdBufContext v33; 
  DrawTextPositionSettings v34; 
  char v35; 
  void *retaddr; 
  GfxRenderCommandExecState *v37; 

  _R11 = &retaddr;
  v37 = execState;
  _RSI = (const GfxCmdDrawText2D *)execState->cmd;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  renderFlags = _RSI->renderFlags;
  p_glowStyle = &_RSI->glowStyle;
  v34.mode = POSITION_2D;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
  }
  if ( (renderFlags & 0x10) == 0 )
    p_glowStyle = NULL;
  p_decodeStyle = &_RSI->decodeStyle;
  if ( (renderFlags & 0x40) == 0 )
    p_decodeStyle = NULL;
  FastSinCos(*(const float *)&_XMM0, v34.position3D.xDirection.v, &v34.position3D.startPosition.v[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovss  [rsp+0F8h+var_50], xmm0
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  [rsp+0F8h+var_4C], xmm1
  }
  v34.tracking = _RSI->tracking;
  VerifyGFXDrawText2DCmd(_RSI, "RB_DrawText2DCmd entry");
  totalByteSize = _RSI->totalByteSize;
  byteCount = _RSI->header.byteCount;
  if ( totalByteSize > byteCount )
  {
    v28 = byteCount;
    v26 = totalByteSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4056, ASSERT_TYPE_ASSERT, "( cmd->totalByteSize ) <= ( cmd->header.byteCount )", "%s <= %s\n\t%i, %i", "cmd->totalByteSize", "cmd->header.byteCount", v26, v28) )
      __debugbreak();
  }
  _RDI = _RSI->entry;
  v15 = (GfxCmdDrawText2D::Entry *)((char *)_RSI + _RSI->totalByteSize);
  do
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rdi]
      vmovss  [rsp+0F8h+var_78], xmm0
      vmovss  [rsp+0F8h+var_74], xmm1
    }
    fontHeight = _RSI->fontHeight;
    font = _RSI->font;
    iconsMaterial = _RSI->iconsMaterial;
    fontMaterial = _RSI->fontMaterial;
    cursorLetter = _RSI->cursorLetter;
    cursorPos = _RSI->cursorPos;
    v27 = _RSI->renderFlags;
    color = _RDI->color;
    __asm { vmovdqa [rsp+0F8h+var_88], xmm6 }
    DrawText(&v33, _RDI->text, font, fontHeight, &v34, color, 0x7FFFFFFF, v27, cursorPos, cursorLetter, fontMaterial, iconsMaterial, p_decodeStyle, p_glowStyle);
    VerifyGFXDrawText2DCmd(_RSI, "RB_DrawText2DCmd loop");
    v20 = -1i64;
    do
      ++v20;
    while ( _RDI->text[v20] );
    v21 = (unsigned int)v20;
    if ( v20 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v20, "unsigned", v20) )
      __debugbreak();
    v22 = (v21 + 16) & 0xFFFFFFFFFFFFFFFCui64;
    if ( v22 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v22, "unsigned", v22) )
      __debugbreak();
    _RDI = (GfxCmdDrawText2D::Entry *)((char *)_RDI + (unsigned int)v22);
    if ( _RDI > v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4076, ASSERT_TYPE_ASSERT, "(nextPtr <= endPtr)", (const char *)&queryFormat, "nextPtr <= endPtr") )
      __debugbreak();
  }
  while ( _RDI < v15 );
  _R11 = &v35;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  v37->cmd = (char *)v37->cmd + *((unsigned __int16 *)v37->cmd + 1);
}

/*
==============
RB_DrawText3DInSpaceCmd
==============
*/
void RB_DrawText3DInSpaceCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v2; 
  float v5; 
  unsigned int v6; 
  GfxCmdBufContext v7; 

  _R8 = (char *)execState->cmd;
  v2 = execState;
  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  v6 = *((_DWORD *)execState->cmd + 14);
  __asm
  {
    vmovups xmmword ptr [rsp+68h+var_18.source], xmm0
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rsp+68h+var_48], xmm0
  }
  RB_DrawTextInSpace(&v7, _R8 + 60, *((GfxFont **)_R8 + 3), (const vec3_t *)(_R8 + 8), v5, (const vec3_t *)(_R8 + 32), (const vec3_t *)(_R8 + 44), v6, NULL, 0);
  v2->cmd = (char *)v2->cmd + *((unsigned __int16 *)v2->cmd + 1);
}

/*
==============
RB_DrawText3DUICmd
==============
*/

void __fastcall RB_DrawText3DUICmd(GfxRenderCommandExecState *execState, double _XMM1_8)
{
  GfxRenderCommandExecState *v4; 
  int v6; 
  const char *v7; 
  const FontGlowStyle *v16; 
  const FontDecodeStyle *v18; 
  GfxColor v19; 
  int v20; 
  GfxFont *v21; 
  int v22; 
  const Material *v23; 
  const Material *v24; 
  const FontDecodeStyle *v25; 
  GfxCmdBufContext v26; 
  DrawTextPositionSettings v27; 
  void *retaddr; 

  _R11 = &retaddr;
  _R8 = (char *)execState->cmd;
  v4 = execState;
  v27.mode = POSITION_3D;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  v6 = *((_DWORD *)_R8 + 42);
  v7 = _R8 + 172;
  __asm
  {
    vmovss  xmm2, dword ptr [r8+9Ch]
    vmovups ymm0, ymmword ptr [r8+4]
    vcvtsi2ss xmm1, xmm1, eax
    vmovups ymmword ptr [r11-48h], ymm0
    vmovss  xmm0, dword ptr [r8+24h]
    vmovss  dword ptr [r11-28h], xmm0
    vmovss  xmm0, dword ptr [r8+0A0h]
    vmovss  dword ptr [r11-1Ch], xmm0
    vdivss  xmm0, xmm1, xmm2
    vmovss  dword ptr [r11-20h], xmm2
    vaddss  xmm2, xmm0, cs:__real@3f000000
    vmovups xmm0, xmmword ptr [rcx+10h]
  }
  v16 = (const FontGlowStyle *)(_R8 + 60);
  if ( (v6 & 0x10) == 0 )
    v16 = NULL;
  __asm { vcvttss2si eax, xmm2 }
  v27.tracking = _EAX;
  v18 = (const FontDecodeStyle *)(_R8 + 40);
  if ( (v6 & 0x40) == 0 )
    v18 = NULL;
  v25 = v18;
  v24 = (const Material *)*((_QWORD *)_R8 + 16);
  v23 = (const Material *)*((_QWORD *)_R8 + 15);
  v19 = *(GfxColor *)(_R8 + 136);
  v22 = v6;
  v20 = *((_DWORD *)_R8 + 38);
  v21 = (GfxFont *)*((_QWORD *)_R8 + 18);
  __asm { vmovups [rsp+0C8h+var_58], xmm0 }
  DrawText(&v26, v7, v21, v20, &v27, v19, 0x7FFFFFFF, v22, 0, 0, v23, v24, v25, v16);
  v4->cmd = (char *)v4->cmd + *((unsigned __int16 *)v4->cmd + 1);
}

/*
==============
RB_ProjectionSetCmd
==============
*/
void RB_ProjectionSetCmd(GfxRenderCommandExecState *execState)
{
  GfxRenderCommandExecState *v2; 
  int v3; 
  __int128 source; 
  GfxCmdBufContext v5; 

  __asm { vmovups xmm0, xmmword ptr [rcx+10h] }
  v2 = execState;
  __asm { vmovups xmmword ptr [rsp+58h+source], xmm0 }
  v3 = *((_DWORD *)execState->cmd + 1);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      __asm { vmovups xmmword ptr [rsp+58h+var_18.source], xmm0 }
      RB_EndSurfaceIfNeeded(&v5);
      R_Set3D((GfxCmdBufSourceState *)source);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4154, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid projection type") )
    {
      __debugbreak();
    }
  }
  else
  {
    __asm { vmovups xmmword ptr [rsp+58h+var_18.source], xmm0 }
    RB_EndSurfaceIfNeeded(&v5);
    R_Set2D((GfxCmdBufSourceState *)source);
  }
  v2->cmd = (char *)v2->cmd + *((unsigned __int16 *)v2->cmd + 1);
}

/*
==============
RB_UIRttBeginCmd
==============
*/
void RB_UIRttBeginCmd(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxRenderCommandExecState *v5; 
  const char *m_location; 
  const GfxBackEndData *data; 
  __int64 v30; 
  const char *Name; 
  const char *v32; 
  LocalClientNum_t ClientIndexForRTT; 
  const char *v45; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *v59; 
  unsigned int v60; 
  _QWORD v64[5]; 
  int v65; 
  R_RT_Handle v66; 
  GfxViewport viewport; 
  R_RT_ColorHandle result; 
  R_RT_Group v69; 
  __int128 v70; 
  __int128 v71; 
  R_RT_Group v72; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  cmd = execState->cmd;
  v5 = execState;
  __asm { vmovq   rsi, xmm6 }
  R_Set2D((GfxCmdBufSourceState *)_RSI);
  __asm { vmovdqa xmmword ptr [rsp+2B0h+var_288+8], xmm6 }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v64[1]);
  __asm { vpextrq rdi, xmm6, 1 }
  _RCX = &v69;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+0A28h]
    vmovups ymm1, ymmword ptr [rdi+0AA8h]
  }
  m_location = _RDI->rtGroup.m_vrsRt.m_tracking.m_location;
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rdi+0A48h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rdi+0A68h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+0A88h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups xmm0, xmmword ptr [rdi+0A14h]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rdi+0AC8h]
    vmovups ymmword ptr [rcx+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rsi+2D04h]
  }
  v69.m_vrsRt.m_tracking.m_location = m_location;
  __asm
  {
    vmovq   r8, xmm1
    vmovq   rdx, xmm0
    vmovups [rbp+1B0h+var_138], xmm1
    vmovups [rbp+1B0h+var_128], xmm0
  }
  if ( (unsigned int)_RDX < (unsigned int)_R8 || DWORD2(v71) > DWORD2(v70) || HIDWORD(_RDX) < HIDWORD(_R8) || HIDWORD(v71) > HIDWORD(v70) )
    __asm { vmovups [rbp+1B0h+var_128], xmm1 }
  data = _RDI->data;
  _RAX = &v69;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  _RDX = (__int64)&data->rttState[data->rttDepth];
  __asm
  {
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rdx+60h], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rdx+80h], ymm0
    vmovups ymm0, ymmword ptr [rax+0A0h]
    vmovups ymmword ptr [rdx+0A0h], ymm0
    vmovups ymm0, ymmword ptr [rax+0C0h]
  }
  v30 = *((_QWORD *)&v71 + 1);
  __asm { vmovups ymmword ptr [rdx+0C0h], ymm0 }
  *(_QWORD *)(_RDX + 224) = v30;
  if ( ++data->rttDepth > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4205, ASSERT_TYPE_ASSERT, "(data->rttDepth <= 1)", (const char *)&queryFormat, "data->rttDepth <= LUI_MAX_RTT_DEPTH") )
    __debugbreak();
  Name = R_RTT_GetName(cmd[1]);
  v32 = j_va("Update RTT %s", Name);
  R_ProfBeginNamedEvent(_RDI, v32);
  ClientIndexForRTT = RB_GetClientIndexForRTT(data);
  RB_RTT_GetSurface(&result, ClientIndexForRTT, &backEndData->rttContext, cmd[1]);
  LOWORD(v64[1]) = 0;
  LODWORD(v64[2]) = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+2B0h+var_288+18h], xmm0
  }
  if ( (result.m_surfaceID & 0x7FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4210, ASSERT_TYPE_ASSERT, "(colorHandle != R_RT_ColorHandle::Null())", (const char *)&queryFormat, "colorHandle != R_RT_ColorHandle::Null()", v64[1], v64[2], v64[3], v64[4]) )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1B0h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2B0h+var_288+8], ymm0
  }
  R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&v64[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RDI);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1B0h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2B0h+var_288+8], ymm0
  }
  R_RT_Group::AssignColor(&v72, (R_RT_ColorHandle *)&v64[1]);
  _RCX = &v69;
  _RAX = &v72;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm0, ymmword ptr [rax+0A0h]
  }
  v45 = v72.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
  v69.m_vrsRt.m_tracking.m_location = v45;
  _RAX = R_RT_Group::GetValidRt(&v69, &v66);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+2B0h+var_288+8], ymm0
  }
  height = R_RT_Handle::GetSurface((R_RT_Handle *)&v64[1])->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)&v64[1]);
  R_SetRenderTargetSize((GfxCmdBufSourceState *)_RSI, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+1B0h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rsp+2B0h+var_288+8], ymm0
  }
  R_RT_Group::AssignColor(&v69, (R_RT_ColorHandle *)&v64[1]);
  _RCX = &v72;
  _RAX = &v69;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymm0, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx+80h], ymm0
    vmovups ymm0, ymmword ptr [rax+0A0h]
  }
  v59 = v69.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm0 }
  v72.m_vrsRt.m_tracking.m_location = v59;
  __asm { vmovdqa xmmword ptr [rsp+2B0h+var_288+8], xmm6 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v64[1], &v72, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(4215)");
  v60 = R_RT_Handle::GetSurface(&result)->m_image.m_base.height;
  viewport.width = R_RT_Handle::GetSurface(&result)->m_image.m_base.width;
  *(_QWORD *)&viewport.x = 0i64;
  viewport.height = v60;
  R_SetViewportStruct((GfxCmdBufSourceState *)_RSI, &viewport);
  R_SetViewportAndScissorSeparate(_RDI, &viewport, &viewport);
  R_Set2D((GfxCmdBufSourceState *)_RSI);
  R_ClearScreen(_RDI, 0xFu, 0);
  R_UpdateViewport((GfxCmdBufSourceState *)_RSI, &viewport);
  v65 = 4;
  *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
  __asm
  {
    vmovss  xmm1, [rsp+2B0h+var_260]
    vmovss  dword ptr [rsi+0A60h], xmm1
    vmovss  dword ptr [rsi+0A64h], xmm0
  }
  *(_QWORD *)(_RSI + 2664) = 1065353216i64;
  ++*(_WORD *)(_RSI + 10272);
  __asm { vmovdqa xmmword ptr [rsp+2B0h+var_288+8], xmm6 }
  RB_UiClut_SetParameters((const GfxCmdBufContext *)&v64[1]);
  v5->cmd = (char *)v5->cmd + *((unsigned __int16 *)v5->cmd + 1);
  _R11 = &v73;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_UIRttEndCmd
==============
*/
void RB_UIRttEndCmd(GfxRenderCommandExecState *execState)
{
  _DWORD *cmd; 
  GfxRenderCommandExecState *v6; 
  LocalClientNum_t ClientIndexForRTT; 
  const GfxBackEndData *data; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  _QWORD v39[5]; 
  R_RT_Handle result; 
  R_RT_ColorHandle v41; 
  R_RT_Group v42; 
  GfxViewport viewport; 
  GfxViewport scissor; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovups xmm6, xmmword ptr [rcx+10h]
  }
  cmd = execState->cmd;
  v6 = execState;
  __asm { vmovq   rcx, xmm6; source }
  R_Set2D(_RCX);
  __asm { vmovdqa xmmword ptr [rsp+1C0h+var_198+8], xmm6 }
  RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v39[1]);
  ClientIndexForRTT = RB_GetClientIndexForRTT(backEndData);
  RB_RTT_NotifyUpdated(ClientIndexForRTT, cmd[1]);
  __asm { vpextrq rsi, xmm6, 1 }
  R_ProfEndNamedEvent(_RSI);
  RB_RTT_GetSurface(&v41, ClientIndexForRTT, &backEndData->rttContext, cmd[1]);
  LOWORD(v39[1]) = 0;
  LODWORD(v39[2]) = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+1C0h+var_198+18h], xmm0
  }
  if ( (v41.m_surfaceID & 0x7FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4250, ASSERT_TYPE_ASSERT, "(colorHandle != R_RT_ColorHandle::Null())", (const char *)&queryFormat, "colorHandle != R_RT_ColorHandle::Null()", v39[1], v39[2], v39[3], v39[4]) )
    __debugbreak();
  __asm
  {
    vmovups ymm0, [rsp+1C0h+anonymous_0]
    vmovups ymmword ptr [rsp+1C0h+var_198+8], ymm0
  }
  R_AddRenderTargetTransition(_RSI, (R_RT_ColorHandle *)&v39[1], RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(_RSI);
  data = _RSI->data;
  if ( data->rttDepth != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 4256, ASSERT_TYPE_ASSERT, "(data->rttDepth > 0 && data->rttDepth <= 1)", (const char *)&queryFormat, "data->rttDepth > 0 && data->rttDepth <= LUI_MAX_RTT_DEPTH") )
    __debugbreak();
  --data->rttDepth;
  _RCX = &v42;
  _RAX = (__int64)&data->rttState[data->rttDepth];
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm0, xmmword ptr [rax+70h]
    vmovups xmmword ptr [rcx+70h], xmm0
    vmovups xmm1, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rcx+80h], xmm1
    vmovups xmm0, xmmword ptr [rax+90h]
    vmovups xmmword ptr [rcx+90h], xmm0
    vmovups xmm1, xmmword ptr [rax+0A0h]
    vmovups xmmword ptr [rcx+0A0h], xmm1
    vmovups xmm0, xmmword ptr [rax+0B0h]
    vmovups xmmword ptr [rcx+0B0h], xmm0
    vmovups xmm1, xmmword ptr [rax+0C0h]
    vmovups xmmword ptr [rcx+0C0h], xmm1
    vmovups xmm0, xmmword ptr [rax+0D0h]
    vmovups xmmword ptr [rcx+0D0h], xmm0
  }
  *(_QWORD *)&scissor.width = *(_QWORD *)(_RAX + 224);
  _RAX = R_RT_Group::GetValidRt(&v42, &result);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsp+1C0h+var_198+8], ymm0
  }
  height = R_RT_Handle::GetSurface((R_RT_Handle *)&v39[1])->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)&v39[1]);
  __asm { vmovq   rcx, xmm6; source }
  R_SetRenderTargetSize(_RCX, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  __asm { vmovdqa xmmword ptr [rsp+1C0h+var_198+8], xmm6 }
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v39[1], &v42, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(4260)");
  __asm { vmovq   rcx, xmm6; source }
  R_SetViewportStruct(_RCX, &viewport);
  R_SetViewportAndScissorSeparate(_RSI, &viewport, &scissor);
  __asm { vmovq   rcx, xmm6; source }
  R_Set2D(_RCX);
  __asm { vmovq   rcx, xmm6; source }
  R_UpdateViewport(_RCX, &viewport);
  __asm { vmovdqa xmmword ptr [rsp+1C0h+var_198+8], xmm6 }
  RB_SetUIColorimetryParams((GfxCmdBufContext *)&v39[1]);
  v6->cmd = (char *)v6->cmd + *((unsigned __int16 *)v6->cmd + 1);
  _R11 = &v45;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_SetUIScopeFilter
==============
*/
void RB_SetUIScopeFilter(GfxRenderCommandExecState *execState)
{
  _BYTE *cmd; 
  GfxRenderCommandExecState *v6; 
  __int64 v8; 
  const char *v9; 
  __int128 v26; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovups xmm0, xmmword ptr [rcx+10h]
  }
  _ER14 = 0;
  cmd = execState->cmd;
  v6 = execState;
  __asm
  {
    vpextrq rsi, xmm0, 1
    vmovups [rsp+68h+var_48], xmm0
  }
  v8 = *(_QWORD *)(_RSI + 2504);
  if ( r_profMaterial->current.integer > 0 )
  {
    v9 = j_va("RB_SetUIScopeFilter %d scopeBufferWeight %d", *((unsigned int *)cmd + 1), cmd[8] != 0);
    R_ProfSetMarker((CmdBufState *)_RSI, v9);
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovd   xmm1, r14d
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
  }
  _EAX = *(unsigned __int8 *)(v8 + 7710781);
  __asm { vmovd   xmm0, eax }
  _EAX = (unsigned __int8)cmd[8];
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vmovd   xmm0, eax
  }
  _RAX = v26;
  __asm
  {
    vblendvps xmm5, xmm3, xmm4, xmm2
    vmovd   xmm1, r14d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  dword ptr [rax+0C60h], xmm6
    vmovss  dword ptr [rax+0C64h], xmm5
  }
  *(_DWORD *)(v26 + 3176) = 0;
  __asm
  {
    vblendvps xmm0, xmm3, xmm4, xmm2
    vmovss  dword ptr [rax+0C6Ch], xmm0
  }
  ++*(_WORD *)(v26 + 10336);
  v6->cmd = (char *)v6->cmd + *((unsigned __int16 *)v6->cmd + 1);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
RB_SetUIPixelShapeParams
==============
*/
void RB_SetUIPixelShapeParams(GfxRenderCommandExecState *execState)
{
  _RAX = execState->cmd;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  xmm1, dword ptr [rax+8]
  }
  _RAX = execState->gfxContext.source;
  __asm
  {
    vmovss  dword ptr [rax+10C0h], xmm0
    vmovss  dword ptr [rax+10C4h], xmm1
  }
  *(_QWORD *)&_RAX->input.consts[156].xyz.z = 0i64;
  ++_RAX->constVersions[156];
  execState->cmd = (char *)execState->cmd + *((unsigned __int16 *)execState->cmd + 1);
}

/*
==============
DrawText_Advance
==============
*/

void __fastcall DrawText_Advance(const vec3_t *from, const DrawTextPositionSettings *positionSettings, double deltaX, double deltaY, vec3_t *outTo)
{
  __asm
  {
    vmulss  xmm4, xmm2, dword ptr [rdx+28h]
    vmulss  xmm5, xmm3, dword ptr [rdx+2Ch]
  }
  _RAX = outTo;
  if ( positionSettings->mode )
  {
    __asm
    {
      vmulss  xmm0, xmm4, dword ptr [rdx+0Ch]
      vaddss  xmm1, xmm0, dword ptr [rcx]
      vmovss  dword ptr [rax], xmm1
      vmulss  xmm0, xmm4, dword ptr [rdx+10h]
      vaddss  xmm2, xmm0, dword ptr [rcx+4]
      vmovss  dword ptr [rax+4], xmm2
      vmulss  xmm0, xmm4, dword ptr [rdx+14h]
      vaddss  xmm3, xmm0, dword ptr [rcx+8]
      vmovss  dword ptr [rax+8], xmm3
      vmulss  xmm0, xmm5, dword ptr [rdx+18h]
      vaddss  xmm1, xmm0, xmm1
      vmovss  dword ptr [rax], xmm1
      vmulss  xmm0, xmm5, dword ptr [rdx+1Ch]
      vaddss  xmm1, xmm0, xmm2
      vmovss  dword ptr [rax+4], xmm1
      vmulss  xmm0, xmm5, dword ptr [rdx+20h]
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rax+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm4, dword ptr [rcx]
      vmovss  dword ptr [rax], xmm0
      vaddss  xmm1, xmm5, dword ptr [rcx+4]
      vmovss  dword ptr [rax+4], xmm1
    }
  }
}

/*
==============
DrawText_Generate3DCharVerts
==============
*/

void __fastcall DrawText_Generate3DCharVerts(const vec3_t *position, const DrawTextPositionSettings *positionSettings, double glyphWidth, double glyphHeight, vec3_t (*outCharVertsWorld)[4])
{
  DrawTextMode mode; 
  vec3_t *v18; 
  const DrawTextPositionSettings *v21; 
  vec3_t *v22; 
  const DrawTextPositionSettings *v27; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = position;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( positionSettings->mode != POSITION_3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3315, ASSERT_TYPE_ASSERT, "(positionSettings->mode == DrawTextMode::POSITION_3D)", (const char *)&queryFormat, "positionSettings->mode == DrawTextMode::POSITION_3D") )
    __debugbreak();
  mode = positionSettings->mode;
  _R8 = outCharVertsWorld;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx]
    vmovss  dword ptr [r8], xmm1
    vmovss  xmm2, dword ptr [rbx+4]
  }
  if ( mode )
  {
    __asm
    {
      vmovss  dword ptr [r8+4], xmm2
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [r8+8], xmm0
      vmovss  dword ptr [r8], xmm1
    }
  }
  __asm
  {
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm2, xmm7; deltaX
    vxorps  xmm3, xmm3, xmm3; deltaY
  }
  DrawText_Advance(_RBX, positionSettings, *(double *)&_XMM2, *(double *)&_XMM3, &(*outCharVertsWorld)[1]);
  __asm
  {
    vmovaps xmm3, xmm6; deltaY
    vmovaps xmm2, xmm7; deltaX
  }
  DrawText_Advance(_RBX, v21, *(double *)&_XMM2, *(double *)&_XMM3, v18 + 2);
  __asm
  {
    vmovaps xmm3, xmm6
    vxorps  xmm2, xmm2, xmm2
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  DrawText_Advance(_RBX, v27, *(double *)&_XMM2, *(double *)&_XMM3, v22 + 3);
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
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  char *v14; 
  char *fmt; 
  char *fmta; 
  double v19; 
  double v20; 
  __int64 v21; 
  __int64 v22; 

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
  _RBP = cmd->entry;
  while ( 1 )
  {
    v10 = -1i64;
    do
      ++v10;
    while ( _RBP->text[v10] );
    if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v10) )
      __debugbreak();
    v11 = ((unsigned int)v10 + 16i64) & 0xFFFFFFFFFFFFFFFCui64;
    if ( v11 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v11, "unsigned", v11) )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+4]
      vmovss  xmm1, dword ptr [rbp+0]
    }
    v14 = (char *)_RBP + (unsigned int)v11;
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm1, xmm1, xmm1
    }
    LODWORD(v22) = (v10 + 16) & 0xFFFFFFFC;
    LODWORD(v21) = v10;
    if ( v14 > v8 )
    {
      __asm
      {
        vmovsd  [rsp+78h+var_50], xmm0
        vmovsd  [rsp+78h+fmt], xmm1
      }
      Com_Printf(16, " %u: entry = %p, pos = (%f, %f), textLen = %u, entryLen = %u\n", v4, _RBP, *(double *)&fmta, v20, v21, v22);
      Com_Printf(16, " **** nextPtr = %p, endPtr = %p\n", (char *)_RBP + (unsigned int)v11, v8);
    }
    else
    {
      __asm
      {
        vmovsd  [rsp+78h+var_50], xmm0
        vmovsd  [rsp+78h+fmt], xmm1
      }
      Com_Printf(16, " %u: entry = %p, pos = (%f, %f), textLen = %u, entryLen = %u, text = '%s'\n", v4, _RBP, *(double *)&fmt, v19, v21, v22, _RBP->text);
    }
    if ( v14 >= v8 )
      break;
    _RBP = (GfxCmdDrawText2D::Entry *)((char *)_RBP + (unsigned int)v11);
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
  __int64 v31; 
  vec4_t vec; 
  tmat44_t<vec4_t> mat; 
  tmat44_t<vec4_t> dst; 
  tmat44_t<vec4_t> out; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  xmm6, dword ptr [rcx]
    vmovss  xmm7, dword ptr [rcx+4]
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vsubss  xmm4, xmm0, xmm6
    vmovss  xmm0, dword ptr [rcx+18h]
    vsubss  xmm2, xmm0, xmm6
    vxorps  xmm0, xmm0, xmm0
    vsubss  xmm5, xmm1, xmm7
    vmovss  xmm1, dword ptr [rcx+1Ch]
    vmovss  dword ptr [rsp+168h+mat+8], xmm0
    vmovss  dword ptr [rsp+168h+mat+0Ch], xmm0
    vmovss  dword ptr [rsp+168h+mat+18h], xmm0
    vmovss  dword ptr [rsp+168h+mat+1Ch], xmm0
    vmovaps ymm0, cs:__ymm@3f800000000000000000000000000000000000003f8000000000000000000000
    vsubss  xmm3, xmm1, xmm7
  }
  _RBP = outUVs;
  __asm
  {
    vmovups ymmword ptr [rsp+168h+mat+20h], ymm0
    vmovss  dword ptr [rsp+168h+mat], xmm4
    vmovss  dword ptr [rsp+168h+mat+4], xmm2
    vmovss  dword ptr [rsp+168h+mat+10h], xmm5
    vmovss  dword ptr [rsp+168h+mat+14h], xmm3
  }
  MatrixInverse44Aligned(&mat, &dst);
  MatrixTranspose44Aligned(&dst, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+20h]
    vmovss  xmm8, dword ptr [rbp+0]
    vmovss  xmm9, dword ptr [rbp+4]
    vsubss  xmm10, xmm0, xmm8
    vmovss  xmm0, dword ptr [rbp+24h]
  }
  _RDI = &(*newVerts)[0].v[2];
  _RSI = (char *)_RBP - (char *)newVerts;
  v31 = 4i64;
  __asm { vsubss  xmm11, xmm0, xmm9 }
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi-8]
      vmovss  xmm2, dword ptr [rdi-4]
      vsubss  xmm1, xmm0, xmm6
      vsubss  xmm0, xmm2, xmm7
      vmovss  dword ptr [rsp+168h+vec+4], xmm0
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+168h+vec], xmm1
      vmovss  xmm1, dword ptr [rdi]
      vmovss  dword ptr [rsp+168h+vec+0Ch], xmm0
      vmovss  dword ptr [rsp+168h+vec+8], xmm1
    }
    MatrixTransformVector44Aligned(&vec, &out, (vec4_t *)_RBP);
    __asm
    {
      vmulss  xmm0, xmm10, dword ptr [rsi+rdi-8]
      vaddss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rsi+rdi-8], xmm1
      vmulss  xmm0, xmm11, dword ptr [rsi+rdi-4]
      vaddss  xmm1, xmm0, xmm9
    }
    _RBP = (vec4_t (*)[4])((char *)_RBP + 16);
    __asm { vmovss  dword ptr [rsi+rdi-4], xmm1 }
    _RDI += 4;
    --v31;
  }
  while ( v31 );
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
RB_ApplyVertexDilation
==============
*/
bool RB_ApplyVertexDilation(const vec2_t *inVertex, const vec2_t *inNext, const vec2_t *inPrev, vec4_t *outVertex)
{
  bool result; 
  vec3_t v0; 
  vec3_t v1; 
  vec3_t v57; 
  vec3_t cross; 
  vec3_t v59; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm0, dword ptr [r8]
    vmovss  xmm1, dword ptr [r8+4]
    vmovss  xmm6, dword ptr [rcx]
    vmovss  xmm7, dword ptr [rcx+4]
    vmovss  xmm8, dword ptr [rdx]
    vmovss  xmm9, dword ptr [rdx+4]
    vmovss  xmm11, cs:__real@3f800000
    vmovss  dword ptr [rbp+57h+v1], xmm0
    vmovss  dword ptr [rbp+57h+v1+4], xmm1
    vsubss  xmm0, xmm6, xmm0
    vsubss  xmm1, xmm7, xmm1
    vxorps  xmm10, xmm10, xmm10
  }
  _RBX = outVertex;
  __asm
  {
    vmovss  dword ptr [rbp+57h+v0], xmm0
    vmovss  dword ptr [rbp+57h+v0+4], xmm1
    vmovss  dword ptr [rbp+57h+var_90], xmm6
    vmovss  dword ptr [rbp+57h+var_90+4], xmm7
    vmovss  dword ptr [rbp+57h+var_90+8], xmm11
    vmovss  dword ptr [rbp+57h+v1+8], xmm11
    vmovss  dword ptr [rbp+57h+v0+8], xmm10
  }
  Vec3Cross(&v0, &v1, &cross);
  __asm
  {
    vsubss  xmm0, xmm8, xmm6
    vsubss  xmm1, xmm9, xmm7
    vmovss  dword ptr [rbp+57h+v0], xmm0
    vmovss  dword ptr [rbp+57h+v0+4], xmm1
  }
  Vec3Cross(&v0, &v57, &v59);
  __asm
  {
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm3, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rbp+57h+cross+4]
    vandps  xmm0, xmm0, xmm4
    vmulss  xmm1, xmm0, xmm3
    vmovss  xmm0, dword ptr [rbp+57h+cross]
    vandps  xmm0, xmm0, xmm4
    vmulss  xmm0, xmm0, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm1, dword ptr [rbp+57h+cross+8]
    vmovss  xmm0, dword ptr [rbp+57h+var_74+4]
    vsubss  xmm2, xmm1, xmm2
    vmovss  xmm1, dword ptr [rbp+57h+var_74]
    vmovss  dword ptr [rbp+57h+cross+8], xmm2
    vandps  xmm0, xmm0, xmm4
    vmulss  xmm2, xmm0, xmm3
    vandps  xmm1, xmm1, xmm4
    vmulss  xmm0, xmm1, xmm3
    vmovss  xmm1, dword ptr [rbp+57h+var_74+8]
    vaddss  xmm2, xmm2, xmm0
    vsubss  xmm2, xmm1, xmm2
    vmovss  dword ptr [rbp+57h+var_74+8], xmm2
  }
  Vec3Cross(&cross, &v59, &v0);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+v0+8]
    vmovss  xmm2, dword ptr [rbp+57h+v0]
    vmovss  xmm3, dword ptr [rbp+57h+v0+4]
  }
  result = 1;
  __asm
  {
    vucomiss xmm0, xmm10
    vmovss  dword ptr [rbx], xmm2
    vmovss  dword ptr [rbx+4], xmm3
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
  _RBX->v[2] = 0.0;
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
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
  const GfxImage *universalClut; 
  const GfxImage *v18; 
  const GfxImage *resolvedScene; 
  const GfxWrappedBuffer *exposureBuffer; 
  GfxCmdBufContext v21; 
  R_RT_ColorHandle v22; 
  R_RT_Handle v23; 

  viewInfo = data->viewInfo;
  gfxData = data->gfxData;
  _RDI = data;
  R_InitCmdBufSourceState(data->gfxContext.source, &viewInfo->input);
  *((_BYTE *)&_RDI->gfxContext.source->input + 7920) |= 1u;
  if ( _RDI->triList.indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6417, ASSERT_TYPE_ASSERT, "(data->triList.indexCount == 0)", (const char *)&queryFormat, "data->triList.indexCount == 0") )
    __debugbreak();
  if ( _RDI->triList.vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6418, ASSERT_TYPE_ASSERT, "(data->triList.vertexCount == 0)", (const char *)&queryFormat, "data->triList.vertexCount == 0") )
    __debugbreak();
  _RDI->gfxContext.source->tess = &_RDI->triList;
  R_InitCmdBuf(cmdBuf, gfxData, "async 2D cmd buf");
  R_InitDescriptorState(&cmdBuf->descState);
  R_InitDescriptorHeapInfoState(&cmdBuf->descState, &gfxData->async2D.descHeapInfo);
  _RDI->gfxContext.state->descState = &cmdBuf->descState;
  v8 = cmdBuf->device == NULL;
  cmdBuf->descState.heapOverflow = 0;
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6431, ASSERT_TYPE_ASSERT, "(cmdBuf->device)", (const char *)&queryFormat, "cmdBuf->device") )
    __debugbreak();
  device = cmdBuf->device;
  p_constantBufferAllocations = &cmdBuf->constantBufferAllocations;
  _RDI->gfxContext.state->device = device;
  _RDI->gfxContext.state->constantBufferAllocations = p_constantBufferAllocations;
  R_InitConstantBufferInfoState(p_constantBufferAllocations, &gfxData->async2D.constBufferInfo, (!receivePPFX << 17) + 0x10000);
  if ( !R_CheckReserveConstantBuffer(_RDI->gfxContext.state) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6442, ASSERT_TYPE_ASSERT, "(R_CheckReserveConstantBuffer( gfxContext.state ))", (const char *)&queryFormat, "R_CheckReserveConstantBuffer( gfxContext.state )") )
    __debugbreak();
  p_constantBufferAllocations->reserveOverflow = 0;
  R_InitLocalCmdBufState(_RDI->gfxContext.state, &_RDI->gfxContext.source->input);
  _RDI->gfxContext.state->dynamicIndexBuffer = &gfxData->async2D.indices;
  _RDI->gfxContext.state->dynamicVertexBuffer = &gfxData->async2D.vertices;
  if ( receivePPFX )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+23090h]
      vmovups ymm1, ymmword ptr [rdi+23070h]
    }
    universalClut = _RDI->resources.universalClut;
    __asm
    {
      vmovups [rsp+0A8h+var_58], ymm0
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+0A8h+var_68], xmm0
      vmovups [rsp+0A8h+var_38], ymm1
    }
    RB_InitClient2DReceivePPFXContext(&v21, viewInfo, gfxData, (R_RT_ColorHandle *)&v23, (R_RT_DepthHandle *)&v22, universalClut);
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi+230B0h]
      vmovups ymm1, ymmword ptr [rdi+23050h]
    }
    exposureBuffer = _RDI->resources.exposureBuffer;
    resolvedScene = _RDI->resources.resolvedScene;
    v18 = _RDI->resources.universalClut;
    __asm
    {
      vmovups [rsp+0A8h+var_38], ymm0
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+0A8h+var_58], ymm1
      vmovups [rsp+0A8h+var_68], xmm0
    }
    RB_InitClient2DContext(&v21, viewInfo, gfxData, &v22, &v23, v18, resolvedScene, exposureBuffer);
  }
}

/*
==============
RB_Async2D_ShutdownContext
==============
*/
void RB_Async2D_ShutdownContext(GfxAsync2DRenderData *data, GfxCmdBuf *cmdBuf)
{
  GfxAsync2DRenderData *v3; 
  GfxCmdBuf *p_receivePPFXCmdBuf; 
  __int64 v6; 
  GfxCmdBufContext v7; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  v3 = data;
  __asm { vmovups xmmword ptr [rsp+48h+var_18.source], xmm0 }
  RB_EndSurfaceIfNeeded(&v7);
  if ( v3->triList.indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6468, ASSERT_TYPE_ASSERT, "(data->triList.indexCount == 0)", (const char *)&queryFormat, "data->triList.indexCount == 0") )
    __debugbreak();
  if ( v3->triList.vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6469, ASSERT_TYPE_ASSERT, "(data->triList.vertexCount == 0)", (const char *)&queryFormat, "data->triList.vertexCount == 0") )
    __debugbreak();
  R_ShutdownLocalCmdBufState(v3->gfxContext.state, &v3->gfxContext.source->input);
  R_ShutdownConstantBufferInfoState(&cmdBuf->constantBufferAllocations);
  if ( cmdBuf->descState.heapOverflow )
  {
    Com_PrintError(13, "LUI: async 2D render exceeded descriptor limit %i \n", 3072i64);
    v3->gfxData->async2D.renderFailed = 1;
  }
  R_ShutdownCmdBuf(cmdBuf, v3->gfxData);
  R_ShutdownDescriptorHeapInfoState(&cmdBuf->descState);
  if ( cmdBuf->constantBufferAllocations.reserveOverflow )
  {
    p_receivePPFXCmdBuf = &v3->gfxData->async2D.receivePPFXCmdBuf;
    if ( nextPrintTime_8 < Sys_Milliseconds() )
    {
      v6 = 196608i64;
      if ( cmdBuf == p_receivePPFXCmdBuf )
        v6 = 0x10000i64;
      Com_PrintError(13, "LUI: async 2D render exceeded const buffer limit %i \n", v6);
      nextPrintTime_8 = Sys_Milliseconds() + 1000;
    }
    v3->gfxData->async2D.renderFailed = 1;
  }
  if ( v3->gfxContext.state->dynamicBufferOverflow )
  {
    if ( nextPrintTime_9 < Sys_Milliseconds() )
    {
      Com_PrintError(13, "LUI: async 2D render exceeded vertex limit %i \n", 20480i64);
      nextPrintTime_9 = Sys_Milliseconds() + 1000;
    }
    v3->gfxData->async2D.renderFailed = 1;
  }
  else if ( (unsigned __int64)(int)v3->gfxData->async2D.vertices.used > 0x60000 && nextPrintTime_10 < Sys_Milliseconds() )
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
  __int64 v10; 
  GfxDevice *immediateContext; 
  __int64 v12; 
  void *v13; 
  GfxCmdBufContext v14; 

  _RBP = gfxContext;
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
  state = _RBP->state;
  R_BackendGpuStatus_Update(state, STREAM_BACKEND_FRAME_BEGIN);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_Stream_BackendFrameBegin(&v14, data);
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
  v10 = 4i64;
  do
  {
    if ( *((int *)p_data - 9) > 0 )
    {
      immediateContext = g_dx.immediateContext;
      v12 = *((int *)p_data - 9);
      v13 = *p_data;
      if ( !R_IsLockedIfGfxImmediateContext(g_dx.immediateContext) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 29, ASSERT_TYPE_ASSERT, "(R_IsLockedIfGfxImmediateContext( device ))", (const char *)&queryFormat, "R_IsLockedIfGfxImmediateContext( device )") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 420, ASSERT_TYPE_ASSERT, "(baseAddress != ((D3D12_GPU_VIRTUAL_ADDRESS)0))", (const char *)&queryFormat, "baseAddress != D3D12_GPU_VIRTUAL_ADDRESS_NULL") )
        __debugbreak();
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 421, ASSERT_TYPE_ASSERT, "(sizeInBytes)", (const char *)&queryFormat, "sizeInBytes") )
        __debugbreak();
      ((void (__fastcall *)(GfxDevice *, __int64, void *, unsigned __int64))immediateContext->m_pFunction[22].AddRef)(immediateContext, 12595200i64, v13, (v12 + 255) & 0xFFFFFFFFFFFFFF00ui64);
    }
    p_data += 127;
    --v10;
  }
  while ( v10 );
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
  GfxCmdBufContext v12; 
  GfxCmdBufContext v13; 
  GfxCmdBufContext v14; 
  GfxCmdBufContext v15; 
  GfxCmdBufContext v16; 
  R_RT_ColorHandle v17; 
  R_RT_ColorHandle v18; 
  R_RT_ColorHandle v19; 
  const GfxBackEndData *timeoutUserData; 

  timeoutUserData = data;
  _RDI = gfxContext;
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
    RB_SetWaitFlipOncePerFrame(_RDI->state);
    R_UnlockGfxImmediateContext();
    Sys_ProfBeginNamedEvent(0xFF404040, "wait finish");
    Sys_ProcessWorkerCmdsWithTimeout(RB_IsFinishReady, &timeoutUserData);
    Sys_ProfEndNamedEvent();
    if ( !timeoutUserData->finishReady )
    {
      Profile2_End(63);
      Profile_EndInternal(NULL);
      __asm
      {
        vmovups xmm1, xmmword ptr [rdi]
        vmovups [rbp+57h+var_C0], xmm1
      }
      _RBX = &backEndData->viewInfo[backEndData->viewInfoIndex];
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+33C0h]
        vmovups [rbp+57h+var_70], ymm0
      }
      R_RT_Destroy(&v12, &v17);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+3648h]
        vmovups xmm1, xmmword ptr [rdi]
        vmovups [rbp+57h+var_50], ymm0
        vmovups [rbp+57h+var_B0], xmm1
      }
      R_RT_Destroy(&v13, &v18);
      __asm { vmovups xmm1, xmmword ptr [rdi] }
      _RBX->sceneRtInput.m_halfVelocityMBlurRt.m_surfaceID = 0;
      _RBX->sceneRtInput.m_halfVelocityMBlurRt.m_tracking.m_allocCounter = 0;
      _RBX->sceneRtInput.m_halfVelocityMBlurRt.m_tracking.m_name = NULL;
      _RBX->sceneRtInput.m_halfVelocityMBlurRt.m_tracking.m_location = NULL;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+3668h]
        vmovups [rbp+57h+var_30], ymm0
        vmovups [rbp+57h+var_A0], xmm1
      }
      R_RT_Destroy(&v14, &v19);
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      _RBX->sceneRtInput.m_dofTile0Handle.m_surfaceID = 0;
      _RBX->sceneRtInput.m_dofTile0Handle.m_tracking.m_allocCounter = 0;
      __asm { vmovups [rbp+57h+var_90], xmm0 }
      _RBX->sceneRtInput.m_dofTile0Handle.m_tracking.m_name = NULL;
      _RBX->sceneRtInput.m_dofTile0Handle.m_tracking.m_location = NULL;
      RB_DecommitSpotShadowRTs(&v15, _RBX);
      R_RT_BackendFrameEnd(backEndData->frontendFramePass, 1);
      return;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rbp+57h+var_80], xmm0
    }
    RB_ExecuteRenderCommands(&v16);
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

void __fastcall RB_Draw3DQuadPicST(GfxCmdBufContext *gfxContext, const Material *material, const vec3_t (*verts)[4], double s0, float t0, float s1, float t1, GfxColor color)
{
  GfxCmdBufSourceState *source; 
  GfxViewMode viewMode; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool v35; 
  unsigned int v61; 
  unsigned int v65; 
  unsigned int v69; 
  unsigned int v73; 
  float v80; 
  float v81; 
  unsigned __int16 v82; 
  GfxCmdBufContext oldVerts_8[6]; 
  vec4_t outVertex[4]; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  source = gfxContext->source;
  _RSI = verts;
  __asm
  {
    vmovss  xmm8, [rbp+70h+arg_30]
    vmovss  xmm9, [rbp+70h+arg_28]
  }
  viewMode = gfxContext->source->viewMode;
  _RDI = gfxContext;
  __asm
  {
    vmovss  xmm6, [rbp+70h+arg_20]
    vmovaps xmm7, xmm3
  }
  if ( viewMode != VIEW_MODE_3D )
  {
    if ( viewMode != VIEW_MODE_2D )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rcx]
        vmovups xmmword ptr [rsp+170h+oldVerts+8], xmm0
      }
      RB_EndSurfaceIfNeeded(oldVerts_8);
      R_Set2D(source);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovss  dword ptr [rsp+170h+var_148], xmm8
      vmovaps xmm3, xmm9
      vmovaps xmm2, xmm7
      vmovups xmmword ptr [rsp+170h+oldVerts+8], xmm0
      vmovss  [rsp+170h+var_150], xmm6
    }
    RB_SetUIAA(oldVerts_8, 1, *(float *)&_XMM2, *(float *)&_XMM3, v80, v81);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+170h+oldVerts+8], xmm0
  }
  RB_SetTessTechnique(oldVerts_8, material, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+170h+oldVerts+8], xmm0
  }
  RB_CheckTessOverflow(oldVerts_8, 4u, 6u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+170h+oldVerts+8], xmm0
  }
  Tess = R_GetTess(oldVerts_8);
  vertexCount = Tess->vertexCount;
  indexCount = (int)Tess->indexCount;
  Tess->vertexCount += 4;
  v82 = vertexCount;
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount + 3;
  Tess->indices[indexCount + 1] = vertexCount;
  Tess->indices[indexCount + 2] = vertexCount + 2;
  Tess->indices[indexCount + 3] = vertexCount + 2;
  Tess->indices[indexCount + 4] = vertexCount;
  Tess->indices[indexCount + 5] = vertexCount + 1;
  if ( (*((_BYTE *)source + 11668) & 1) == 0 || viewMode == VIEW_MODE_3D )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+8]
      vmovss  xmm0, dword ptr [rsi+4]
    }
    v61 = *(_DWORD *)_RSI;
    _RCX = (GfxColor *)&Tess->verts[vertexCount];
    __asm
    {
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  dword ptr [rcx+8], xmm1
    }
    _RCX->packed = v61;
    _RCX[3].packed = 1065353216;
    _RCX[7].packed = 1073643391;
    _RCX[4] = color;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm7
      vmovss  dword ptr [rcx+18h], xmm6
      vmovss  xmm1, dword ptr [rsi+14h]
      vmovss  xmm0, dword ptr [rsi+10h]
    }
    v65 = LODWORD((*_RSI)[1].v[0]);
    _RCX = (GfxColor *)&Tess->verts[vertexCount + 1];
    __asm
    {
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  dword ptr [rcx+8], xmm1
    }
    _RCX->packed = v65;
    _RCX[3].packed = 1065353216;
    _RCX[7].packed = 1073643391;
    _RCX[4] = color;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm9
      vmovss  dword ptr [rcx+18h], xmm6
      vmovss  xmm1, dword ptr [rsi+20h]
      vmovss  xmm0, dword ptr [rsi+1Ch]
    }
    v69 = LODWORD((*_RSI)[2].v[0]);
    _RCX = (GfxColor *)&Tess->verts[vertexCount + 2];
    __asm
    {
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  dword ptr [rcx+8], xmm1
    }
    _RCX->packed = v69;
    _RCX[3].packed = 1065353216;
    _RCX[7].packed = 1073643391;
    _RCX[4] = color;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm9
      vmovss  dword ptr [rcx+18h], xmm8
      vmovss  xmm1, dword ptr [rsi+2Ch]
      vmovss  xmm0, dword ptr [rsi+28h]
    }
    v73 = LODWORD((*_RSI)[3].v[0]);
    _RCX = (GfxColor *)&Tess->verts[vertexCount + 3];
    __asm
    {
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  dword ptr [rcx+8], xmm1
    }
    _RCX->packed = v73;
    _RCX[3].packed = 1065353216;
    _RCX[7].packed = 1073643391;
    _RCX[4] = color;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm7
      vmovss  dword ptr [rcx+18h], xmm8
    }
  }
  else
  {
    v32 = RB_ApplyVertexDilation((const vec2_t *)_RSI, (const vec2_t *)&(*_RSI)[1], (const vec2_t *)&(*_RSI)[3], outVertex);
    v33 = RB_ApplyVertexDilation((const vec2_t *)&(*_RSI)[1], (const vec2_t *)&(*_RSI)[2], (const vec2_t *)_RSI, &outVertex[1]) || v32;
    v34 = RB_ApplyVertexDilation((const vec2_t *)&(*_RSI)[2], (const vec2_t *)&(*_RSI)[3], (const vec2_t *)&(*_RSI)[1], &outVertex[2]) || v33;
    v35 = RB_ApplyVertexDilation((const vec2_t *)&(*_RSI)[3], (const vec2_t *)_RSI, (const vec2_t *)&(*_RSI)[2], &outVertex[3]);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+170h+outUVs+8], xmm0
      vmovss  dword ptr [rsp+170h+outUVs+0Ch], xmm0
      vmovss  dword ptr [rsp+170h+outUVs+18h], xmm0
      vmovss  dword ptr [rsp+170h+outUVs+1Ch], xmm0
      vmovss  dword ptr [rbp+70h+outUVs+28h], xmm0
      vmovss  dword ptr [rbp+70h+outUVs+2Ch], xmm0
      vmovss  dword ptr [rbp+70h+outUVs+38h], xmm0
      vmovss  dword ptr [rbp+70h+outUVs+3Ch], xmm0
      vmovss  dword ptr [rsp+170h+outUVs], xmm7
      vmovss  dword ptr [rsp+170h+outUVs+4], xmm6
      vmovss  dword ptr [rsp+170h+outUVs+10h], xmm9
      vmovss  dword ptr [rsp+170h+outUVs+14h], xmm6
      vmovss  dword ptr [rbp+70h+outUVs+20h], xmm9
      vmovss  dword ptr [rbp+70h+outUVs+24h], xmm8
      vmovss  dword ptr [rbp+70h+outUVs+30h], xmm7
      vmovss  dword ptr [rbp+70h+outUVs+34h], xmm8
    }
    if ( !v35 && !v34 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+170h+oldVerts+8], xmm0
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  dword ptr [rsp+170h+oldVerts+0Ch], xmm1
        vmovss  xmm1, dword ptr [rsi+10h]
        vmovss  dword ptr [rsp+170h+oldVerts+10h], xmm0
        vmovss  xmm0, dword ptr [rsi+18h]
        vmovss  dword ptr [rsp+170h+oldVerts+14h], xmm1
        vmovss  xmm1, dword ptr [rsi+1Ch]
        vmovss  dword ptr [rsp+170h+oldVerts+18h], xmm0
        vmovss  xmm0, dword ptr [rsi+24h]
        vmovss  dword ptr [rsp+170h+oldVerts+1Ch], xmm1
        vmovss  xmm1, dword ptr [rsi+28h]
        vmovss  [rsp+170h+var_118], xmm0
        vmovss  [rsp+170h+var_114], xmm1
      }
      RB_ApplyUVDilation((const vec2_t (*)[4])oldVerts_8, (const vec4_t (*)[4])outVertex, (vec4_t (*)[4])&oldVerts_8[2]);
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+170h+outUVs+4]
        vmovss  xmm7, dword ptr [rsp+170h+outUVs]
      }
    }
    __asm { vmovaps xmm0, xmmword ptr [rbp+70h+outVertex] }
    _RAX = (GfxColor *)&Tess->verts[v82];
    __asm
    {
      vmovups xmmword ptr [rax], xmm0
      vmovaps xmm0, xmmword ptr [rbp+70h+var_C0]
    }
    _RAX[7].packed = 1073643391;
    _RAX[4] = color;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm7
      vmovss  dword ptr [rax+18h], xmm6
      vmovss  xmm3, dword ptr [rsp+170h+outUVs+14h]
      vmovss  xmm2, dword ptr [rsp+170h+outUVs+10h]
    }
    _RAX = (GfxColor *)&Tess->verts[v82 + 1];
    __asm
    {
      vmovups xmmword ptr [rax], xmm0
      vmovaps xmm0, xmmword ptr [rbp+70h+var_B0]
    }
    _RAX[7].packed = 1073643391;
    _RAX[4] = color;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm2
      vmovss  dword ptr [rax+18h], xmm3
      vmovss  xmm2, dword ptr [rbp+70h+outUVs+20h]
      vmovss  xmm3, dword ptr [rbp+70h+outUVs+24h]
    }
    _RAX = (GfxColor *)&Tess->verts[v82 + 2];
    __asm
    {
      vmovups xmmword ptr [rax], xmm0
      vmovaps xmm0, xmmword ptr [rbp+70h+var_A0]
    }
    _RAX[7].packed = 1073643391;
    _RAX[4] = color;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm2
      vmovss  dword ptr [rax+18h], xmm3
      vmovss  xmm4, dword ptr [rbp+70h+outUVs+34h]
      vmovss  xmm2, dword ptr [rbp+70h+outUVs+30h]
    }
    _RAX = (GfxColor *)&Tess->verts[v82 + 3];
    __asm { vmovups xmmword ptr [rax], xmm0 }
    _RAX[7].packed = 1073643391;
    _RAX[4] = color;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm2
      vmovss  dword ptr [rax+18h], xmm4
    }
  }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
RB_Draw
==============
*/
void RB_Draw(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  unsigned __int64 v5; 
  char v6; 
  ComputeCmdBufState *GfxComputeCmdBufState; 
  GfxBackEndData *v8; 
  GfxCmdBufState *state; 
  Online_VideoStreaming *Instance; 
  Online_VideoStreaming *v11; 
  __int64 viewInfoIndex; 
  __int64 v13; 
  GfxViewInfo *v23; 
  float depth; 
  GfxBackEndData *dataa[3]; 
  GfxCmdBufContext v31; 
  GfxCmdBufContext v32; 
  GfxCmdBufContext v33; 
  GfxCmdBufContext v34; 
  GfxCmdBufContext v35; 
  GfxCmdBufContext v36; 
  R_RT_ColorHandle v37; 
  R_RT_Handle v38; 
  R_RT_Handle v39; 
  R_RT_Handle v40; 
  R_RT_Handle v41; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v43; 
  vec4_t mrtColor; 
  R_RT_Group rtGroup; 
  void *retaddr; 

  _RAX = &retaddr;
  dataa[1] = (GfxBackEndData *)-2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = gfxContext;
  dataa[0] = (GfxBackEndData *)data;
  Profile_Begin(208);
  Profile2_UpdateEntry(45);
  v5 = (unsigned __int64)&dword_14FDE8084 & 3;
  if ( ((unsigned __int8)&dword_14FDE8084 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8084) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8084);
  if ( !dataa[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6138, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData != dataa[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6139, ASSERT_TYPE_ASSERT, "(backEndData == data)", (const char *)&queryFormat, "backEndData == data") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  v6 = 0;
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6145, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  R_PrepareExecuteCompute(dataa[0], _RDI->state->device, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
  R_ResetConstantBuffer(dataa[0], _RDI->state->device, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
  R_BackendGpuStatus_Update(_RDI->state, UICLUT_UPDATE);
  RB_UiClut_Update(_RDI);
  GfxComputeCmdBufState = R_GetGfxComputeCmdBufState(_RDI->state);
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
  R_BackendGpuStatus_Update(_RDI->state, UPDATE_MOVIE_IMAGES);
  v8 = dataa[0];
  state = _RDI->state;
  if ( !state )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6018, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    v8 = dataa[0];
  }
  if ( !dataa[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6019, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    v8 = dataa[0];
  }
  if ( (dataa[0]->drawType & 1) != 0 )
  {
    Instance = Online_VideoStreaming::GetInstance();
    if ( !Online_VideoStreaming::IsPlayerActive(Instance) || R_Cinematic_PendingSyncFrame() )
      RB_Cinematic_UpdateFrame(dataa[0]);
    v11 = Online_VideoStreaming::GetInstance();
    Online_VideoStreaming::UpdateVideoStreamingTextures(v11, state);
    v8 = dataa[0];
  }
  if ( v8->viewInfoCount || v8->pipInfoCount )
  {
    viewInfoIndex = v8->viewInfoIndex;
    v13 = (__int64)&v8->viewInfo[viewInfoIndex];
    if ( !(_DWORD)viewInfoIndex )
    {
      R_BackendGpuStatus_Update(_RDI->state, DYNAMIC_LIGHTSETS_UPDATE);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups [rsp+2D0h+var_278+8], xmm0
      }
      RB_DynamicLightsets_Update(&v31, rgp.world, dataa[0]);
      v8 = dataa[0];
    }
    __asm { vmovups xmm6, xmmword ptr [rdi] }
    if ( (*(_DWORD *)(v13 + 15540) & 0x100) != 0 )
    {
      RB_Draw3DScene_FreeRts();
      __asm { vmovq   rax, xmm6 }
      *(_QWORD *)(_RAX + 9728) = v8;
      __asm { vpextrq r14, xmm6, 1 }
      R_BackendGpuStatus_Update(_R14, FINISH_COMPUTE_CMDS);
      __asm { vmovdqa xmmword ptr [rsp+2D0h+var_268+8], xmm6 }
      RB_FinishComputeCmds(&v32, v8);
      if ( *(_DWORD *)(v13 + 15528) == -1 )
      {
        dataa[2] = v8;
        __asm
        {
          vmovups xmm0, cs:__xmm@3f8000003f0000003e80000000000000
          vmovups xmmword ptr [rbp+1D0h+mrtColor], xmm0
        }
        R_LockGfxImmediateContext();
        _RAX = R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups [rbp+1D0h+var_210], ymm0
        }
        R_RT_Group::AssignColor(&rtGroup, &v37);
        RB_SetWaitFlipOncePerFrame(_R14);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+2D0h+depth], xmm0
        }
        R_ClearRtGroup(_R14, &rtGroup, 0x3Fu, &mrtColor, 1u, depth, 0, PIPE_FLUSH_FULL);
        R_UnlockGfxImmediateContext();
      }
      else
      {
        R_BackendGpuStatus_Update(_R14, DRAW_TASK_GRAPH);
        __asm { vmovdqa [rbp+1D0h+var_250], xmm6 }
        RB_TG_Render(&v33, (const GfxViewInfo *)v13, v8);
      }
      R_WaitSkippedDrawWorkerCmds(v8);
      v6 = 1;
    }
    else
    {
      v6 = 0;
      __asm { vmovups [rbp+1D0h+var_240], xmm6 }
      RB_Draw3DScene(&v34, (const GfxViewInfo *)v13, v8);
    }
    v8 = dataa[0];
  }
  if ( !v8->viewInfoCount && !v8->pipInfoCount || v6 )
  {
    R_BackendGpuStatus_Update(_RDI->state, DECAL_VOLUMES_UPDATE_ATLAS);
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rbp+1D0h+var_230], xmm0
    }
    RB_DecalVolumes_UpdateAtlas(&v35, dataa[0]);
  }
  Sys_ProfBeginNamedEvent(0xFF404040, "wait finish");
  Sys_ProcessWorkerCmdsWithTimeout(RB_IsFinishReady, dataa);
  Sys_ProfEndNamedEvent();
  if ( dataa[0]->finishReady )
  {
    Sys_SetWorkerCmdEvent();
    Profile2_UpdateEntry(45);
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8084) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8084);
    if ( !v6 && dataa[0]->viewInfoCount )
    {
      v23 = &dataa[0]->viewInfo[dataa[0]->viewInfoIndex];
      _RAX = R_RT_GetGlobalColor(&v43, R_RENDERTARGET_DISPLAY_BUFFER);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rbp+1D0h+var_210], ymm0
        vmovups [rbp+1D0h+var_1F0], ymm0
        vmovups [rbp+1D0h+var_1D0], ymm0
      }
      RB_HDRScopes_ProcessStage(_RDI, v23, &v39, &v38, HDR_SCOPES_STAGE_PRE_2D);
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups [rbp+1D0h+var_220], xmm0
      }
      RB_Draw2D_Hud(&v36, v23, dataa[0]);
      __asm
      {
        vmovups ymm0, [rbp+1D0h+var_210]
        vmovups [rbp+1D0h+var_1B0], ymm0
        vmovups [rbp+1D0h+var_190], ymm0
      }
      RB_HDRScopes_ProcessStage(_RDI, v23, &v41, &v40, HDR_SCOPES_STAGE_POST_2D);
      R_RT_BackendPassEnd(v23->sceneRtInput.m_pass);
    }
  }
  else
  {
    Profile2_UpdateEntry(45);
    if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8084) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8084);
  }
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm6, xmmword ptr [rsp+2D0h+var_48+8] }
}

/*
==============
RB_DrawCharInSpace
==============
*/
void RB_DrawCharInSpace(GfxCmdBufContext *gfxContext, const Material *material, const vec3_t *xyz, const vec3_t *dx, const vec3_t *dy, const CachedGlyph *glyph, unsigned int color)
{
  materialCommands_t *Tess; 
  materialCommands_t *v16; 
  __int64 vertexCount_low; 
  __int64 indexCount_low; 
  GfxCmdBufContext v55; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _RDI = dx;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = xyz;
  _RBX = gfxContext;
  __asm { vmovups [rsp+48h+var_28], xmm0 }
  RB_SetTessTechnique(&v55, material, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+48h+var_28], xmm0
  }
  RB_CheckTessOverflow(&v55, 4u, 6u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+48h+var_28], xmm0
  }
  Tess = R_GetTess(&v55);
  _R10 = glyph;
  v16 = Tess;
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
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+8]
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  xmm3, dword ptr [r10+0Ch]
    vmovss  xmm2, dword ptr [r10+8]
  }
  _RCX = (_DWORD *)Tess->verts[(unsigned int)vertexCount_low].xyzw.v;
  *_RCX = LODWORD(_RSI->v[0]);
  __asm
  {
    vmovss  dword ptr [rcx+4], xmm0
    vmovss  dword ptr [rcx+8], xmm1
  }
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm2
    vmovss  dword ptr [rcx+18h], xmm3
    vmovss  xmm0, dword ptr [rdi+8]
    vaddss  xmm3, xmm0, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm2, xmm1, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vmovss  xmm5, dword ptr [r10+0Ch]
    vmovss  xmm4, dword ptr [r10+10h]
  }
  _RAX = (_DWORD *)Tess->verts[vertexCount_low + 1].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm1
    vmovss  dword ptr [rax+4], xmm2
    vmovss  dword ptr [rax+8], xmm3
  }
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm4
    vmovss  dword ptr [rax+18h], xmm5
    vmovss  xmm6, dword ptr [r10+14h]
    vmovss  xmm5, dword ptr [r10+10h]
    vmovss  xmm0, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm1, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [rsi+4]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vaddss  xmm3, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vaddss  xmm2, xmm1, dword ptr [rcx]
  }
  _RAX = (_DWORD *)v16->verts[vertexCount_low + 2].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm2
    vmovss  dword ptr [rax+4], xmm3
    vmovss  dword ptr [rax+8], xmm4
  }
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+18h], xmm6
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rax+14h], xmm5
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+4]
    vaddss  xmm3, xmm0, dword ptr [rcx+8]
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm2, xmm1, dword ptr [rcx+4]
    vaddss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm5, dword ptr [r10+14h]
    vmovss  xmm4, dword ptr [r10+8]
  }
  _RAX = (_DWORD *)v16->verts[vertexCount_low + 3].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm1
    vmovss  dword ptr [rax+4], xmm2
    vmovss  dword ptr [rax+8], xmm3
  }
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm4
    vmovss  dword ptr [rax+18h], xmm5
  }
}

/*
==============
RB_DrawCursor
==============
*/

void __fastcall RB_DrawCursor(GfxCmdBufContext *gfxContext, double x, double y, double fontHeight, GfxColor color, const bool isOverstrikeMode)
{
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  GfxCmdBufContext v33[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( (((char)CL_ScaledMilliseconds() / -12) & 1) == 0 )
  {
    __asm { vmovss  xmm1, cs:__real@3f800000 }
    if ( isOverstrikeMode )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@40000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vsubss  xmm4, xmm0, cs:__real@40800000
      }
    }
    else
    {
      __asm
      {
        vmovaps xmm4, xmm1
        vmovaps xmm2, xmm1
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovss  [rsp+0A8h+var_60], xmm1
      vmovss  [rsp+0A8h+var_68], xmm1
      vmovups [rsp+0A8h+var_48], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+0A8h+var_70], xmm0
      vmovss  [rsp+0A8h+var_78], xmm0
      vmovss  [rsp+0A8h+var_80], xmm6
      vsubss  xmm3, xmm7, xmm6
      vaddss  xmm2, xmm2, xmm8
      vmovss  [rsp+0A8h+var_88], xmm4
    }
    RB_DrawStretchPic(v33, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v27, v28, v29, v30, v31, v32, color.packed, GFX_PRIM_STATS_DEBUG);
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_18]
    vmovaps xmm7, [rsp+0A8h+var_28]
    vmovaps xmm8, [rsp+0A8h+var_38]
  }
}

/*
==============
RB_DrawFrame
==============
*/
void RB_DrawFrame(const GfxBackEndData *data)
{
  GfxCmdBufContext result; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6727, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6728, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6729, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  _RAX = RB_GetBackendCmdBufContext(&result);
  __asm
  {
    vmovups xmm6, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+58h+result.source], xmm6
  }
  RB_BeginFrame(&result, data);
  __asm { vmovdqa xmmword ptr [rsp+58h+result.source], xmm6 }
  RB_Draw(&result, data);
  __asm { vmovdqa xmmword ptr [rsp+58h+result.source], xmm6 }
  RB_CallExecuteRenderCommands(&result, data);
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "end frame");
  __asm { vmovdqa xmmword ptr [rsp+58h+result.source], xmm6 }
  RB_EndFrame(&result, data);
  Sys_ProfEndNamedEvent();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  if ( backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6769, ASSERT_TYPE_ASSERT, "(backEndData == nullptr)", (const char *)&queryFormat, "backEndData == nullptr") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
RB_DrawFullScreenColoredQuadInternal
==============
*/

void __fastcall RB_DrawFullScreenColoredQuadInternal(GfxCmdBufContext *gfxContext, const Material *material, double s0, double t0, float s1, float t1, unsigned int color, const char *fileAndLine)
{
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  GfxCmdBufContext v35[3]; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RSI = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovups xmmword ptr [rax-38h], xmm0
    vmovaps xmm6, xmm3
  }
  RB_EndSurfaceIfNeeded(v35);
  R_Set2D(_RSI->source);
  R_ClearIfRequired(_RSI->state, 1, 0);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovss  xmm1, [rsp+98h+arg_20]
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups [rsp+98h+var_38], xmm0
    vmovss  xmm0, [rsp+98h+arg_28]
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  [rsp+98h+var_58], xmm1
    vmovss  [rsp+98h+var_60], xmm6
    vmovss  [rsp+98h+var_68], xmm7
    vmovss  [rsp+98h+var_70], xmm3
    vmovss  [rsp+98h+var_78], xmm2
    vxorps  xmm2, xmm2, xmm2
    vxorps  xmm3, xmm3, xmm3
  }
  RB_DrawStretchPic_LargeTriangle(v35, material, *(float *)&_XMM2, *(float *)&_XMM3, v29, v30, v31, v32, v33, v34, color, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+98h+var_38], xmm0
  }
  RB_EndTessSurfaceInternal(v35, fileAndLine);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v36;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_DrawLines2D
==============
*/
void RB_DrawLines2D(GfxCmdBufContext *gfxContext, int count, int width, const GfxPointVertex *verts)
{
  __int64 v10; 
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  __int64 v19; 
  materialCommands_t *v39; 
  materialCommands_t *v40; 
  int v43; 
  unsigned int v44; 
  __int64 v69; 
  GfxCmdBufContext v70; 

  v10 = (unsigned int)count;
  _RSI = gfxContext;
  if ( count <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2379, ASSERT_TYPE_ASSERT, "( ( count > 0 ) )", "( count ) = %i", count) )
    __debugbreak();
  source = _RSI->source;
  if ( _RSI->source->viewMode != VIEW_MODE_2D )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+0D8h+var_A8], xmm0
    }
    RB_EndSurfaceIfNeeded(&v70);
    R_Set2D(source);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0D8h+var_A8], xmm0
  }
  RB_SetTessTechnique(&v70, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0D8h+var_A8], xmm0
  }
  Tess = R_GetTess(&v70);
  if ( (int)v10 > 0 )
  {
    _RDI = (char *)&verts[1].xyz.y;
    __asm
    {
      vmovaps [rsp+0D8h+var_48], xmm6
      vmovaps [rsp+0D8h+var_58], xmm7
    }
    v19 = v10;
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vmovaps [rsp+0D8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f000000
      vmovaps [rsp+0D8h+var_78], xmm9
      vmovaps [rsp+0D8h+var_88], xmm10
      vmovaps [rsp+0D8h+var_98], xmm11
      vmovss  xmm11, cs:__real@80000000
    }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm5, xmm0, dword ptr [rdi-10h]
        vmovss  xmm0, dword ptr [rdi-14h]
        vsubss  xmm4, xmm0, dword ptr [rdi-4]
        vmovups xmm6, xmmword ptr [rsi]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm2, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm1, xmm7, xmm0
        vmulss  xmm0, xmm1, xmm5
        vmulss  xmm1, xmm1, xmm4
        vmulss  xmm10, xmm1, xmm8
        vmulss  xmm9, xmm0, xmm8
        vmovups [rsp+0D8h+var_A8], xmm6
      }
      v39 = R_GetTess(&v70);
      if ( v39->maxVertices < 4 )
      {
        LODWORD(v69) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v69) )
          __debugbreak();
      }
      if ( v39->maxIndices < 6 )
      {
        LODWORD(v69) = 6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v69) )
          __debugbreak();
      }
      __asm { vmovdqa [rsp+0D8h+var_A8], xmm6 }
      v40 = R_GetTess(&v70);
      if ( v40->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v40->vertexCount + 12 < v40->indexCount + 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v39->vertexCount + 4 > v39->maxVertices || v39->indexCount + 6 > v39->maxIndices )
      {
        __asm { vmovdqa [rsp+0D8h+var_A8], xmm6 }
        RB_TessOverflowInternal(&v70, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      Tess->indices[Tess->indexCount] = LOWORD(Tess->vertexCount) + 1;
      Tess->indices[Tess->indexCount + 1] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 3] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 4] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + 3;
      Tess->indexCount += 6;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi-10h]
        vmovss  xmm3, dword ptr [rdi-0Ch]
      }
      v43 = *((_DWORD *)_RDI - 2);
      v44 = *((_DWORD *)_RDI + 2);
      __asm
      {
        vsubss  xmm2, xmm0, xmm10
        vmovss  xmm0, dword ptr [rdi-14h]
        vsubss  xmm1, xmm0, xmm9
      }
      _RDX = (__int64)&Tess->verts[Tess->vertexCount];
      __asm
      {
        vmovss  dword ptr [rdx], xmm1
        vmovss  dword ptr [rdx+4], xmm2
        vmovss  dword ptr [rdx+8], xmm3
      }
      *(_DWORD *)(_RDX + 12) = 1065353216;
      *(_DWORD *)(_RDX + 28) = 1073643391;
      *(_DWORD *)(_RDX + 16) = v43;
      *(_QWORD *)(_RDX + 20) = 0i64;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm3, dword ptr [rdi+4]
      }
      _R8 = (__int64)&Tess->verts[Tess->vertexCount + 1];
      __asm
      {
        vsubss  xmm2, xmm0, xmm10
        vmovss  xmm0, dword ptr [rdi-4]
        vsubss  xmm1, xmm0, xmm9
        vmovss  dword ptr [r8], xmm1
        vmovss  dword ptr [r8+4], xmm2
        vmovss  dword ptr [r8+8], xmm3
      }
      *(_DWORD *)(_R8 + 12) = 1065353216;
      *(_DWORD *)(_R8 + 28) = 1073643391;
      *(_QWORD *)(_R8 + 16) = v44;
      *(_DWORD *)(_R8 + 24) = 1065353216;
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+4]
        vaddss  xmm1, xmm10, dword ptr [rdi]
        vaddss  xmm0, xmm9, dword ptr [rdi-4]
      }
      _R8 = (_DWORD *)Tess->verts[Tess->vertexCount + 2].xyzw.v;
      __asm
      {
        vmovss  dword ptr [r8], xmm0
        vmovss  dword ptr [r8+4], xmm1
        vmovss  dword ptr [r8+8], xmm2
      }
      _R8[3] = 1065353216;
      _R8[7] = 1073643391;
      _R8[4] = v44;
      _R8[5] = 1065353216;
      _R8[6] = 1065353216;
      __asm
      {
        vmovss  xmm2, dword ptr [rdi-0Ch]
        vaddss  xmm1, xmm10, dword ptr [rdi-10h]
        vaddss  xmm0, xmm9, dword ptr [rdi-14h]
      }
      _RDI += 32;
      _RDX = (__int64)&Tess->verts[Tess->vertexCount + 3];
      __asm
      {
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  dword ptr [rdx+8], xmm2
      }
      *(_DWORD *)(_RDX + 12) = 1065353216;
      *(_DWORD *)(_RDX + 28) = 1073643391;
      *(_DWORD *)(_RDX + 16) = v43;
      *(_QWORD *)(_RDX + 20) = 1065353216i64;
      Tess->vertexCount += 4;
      --v19;
    }
    while ( v19 );
    __asm
    {
      vmovaps xmm11, [rsp+0D8h+var_98]
      vmovaps xmm10, [rsp+0D8h+var_88]
      vmovaps xmm9, [rsp+0D8h+var_78]
      vmovaps xmm8, [rsp+0D8h+var_68]
      vmovaps xmm7, [rsp+0D8h+var_58]
      vmovaps xmm6, [rsp+0D8h+var_48]
    }
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
  materialCommands_t *v27; 
  materialCommands_t *v47; 
  int v48; 
  unsigned int v49; 
  unsigned int v50; 
  materialCommands_t *v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int vertexCount; 
  __int64 indexCount; 
  unsigned __int16 *indices; 
  unsigned int v59; 
  __int64 v61; 
  int v63; 
  int v64; 
  GfxCmdBufContext v126; 
  GfxCmdBufContext v127; 
  char v133; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps [rsp+128h+var_B8], xmm14
    vmovaps [rsp+128h+var_C8], xmm15
    vmovups xmm0, xmmword ptr [rcx]
  }
  _R14 = gfxContext;
  _R15 = verts;
  __asm { vmovups [rsp+128h+var_F8], xmm0 }
  RB_SetIdentity(&v126);
  whiteMaterial = rgp.whiteMaterial;
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+128h+var_F8], xmm0
  }
  if ( depthTest )
    whiteMaterial = rgp.whiteDepthtestMaterial;
  RB_SetTessTechnique(&v126, whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+128h+var_F8], xmm0
  }
  Tess = R_GetTess(&v126);
  _RDX = _R14->source;
  v27 = Tess;
  __asm
  {
    vmovups xmm10, cs:__xmm@3f8000003f8000000000000000000000
    vmovups xmm11, cs:__xmm@3f8000003f8000003f8000003f800000
    vxorps  xmm0, xmm0, xmm0
    vmovups xmm12, xmmword ptr [rdx+29B0h]
    vmovups xmm13, xmmword ptr [rdx+29C0h]
    vmovups xmm14, xmmword ptr [rdx+29D0h]
    vmovups xmm15, xmmword ptr [rdx+29E0h]
    vcvtsi2ss xmm0, xmm0, rcx
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, edi
    vdivss  xmm2, xmm3, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vdivss  xmm0, xmm3, xmm1
    vinsertps xmm10, xmm10, xmm0, 0
    vmovups xmm0, xmmword ptr [rdx+2A30h]
    vinsertps xmm6, xmm0, xmm11, 0F0h ; 'ð'
    vmovups [rsp+128h+var_F8], xmm6
    vinsertps xmm10, xmm10, xmm2, 10h
  }
  if ( count > 0 )
  {
    __asm
    {
      vmovaps [rsp+128h+var_48], xmm7
      vmovaps [rsp+128h+var_58], xmm8
      vmovaps [rsp+128h+var_68], xmm9
    }
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups [rsp+128h+var_E8], xmm0
      }
      v47 = R_GetTess(&v127);
      v48 = count;
      v49 = (v47->maxIndices - v47->indexCount) / 6;
      v50 = (v47->maxVertices - v47->vertexCount) >> 2;
      if ( v49 > v50 )
        v49 = v50;
      if ( count > v49 )
        v48 = v49;
      if ( !v48 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovups [rsp+128h+var_E8], xmm0
        }
        RB_TessOverflowInternal(&v127, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2536)");
        __asm
        {
          vmovups xmm0, xmmword ptr [r14]
          vmovups [rsp+128h+var_E8], xmm0
        }
        v53 = R_GetTess(&v127);
        v48 = count;
        v54 = (v53->maxIndices - v53->indexCount) / 6;
        v55 = (v53->maxVertices - v53->vertexCount) >> 2;
        if ( v54 > v55 )
          v54 = v55;
        if ( count > v54 )
          v48 = v54;
        if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2538, ASSERT_TYPE_ASSERT, "(numLines > 0)", (const char *)&queryFormat, "numLines > 0") )
          __debugbreak();
      }
      vertexCount = v27->vertexCount;
      indexCount = v27->indexCount;
      indices = v27->indices;
      count -= v48;
      v27->indexCount = indexCount + 6 * v48;
      v59 = vertexCount + 4 * v48;
      v27->vertexCount = v59;
      if ( v48 )
      {
        _RDX = (__int64)&v27->verts[vertexCount + 2].texCoord.y;
        v61 = (__int64)&indices[indexCount + 2];
        do
        {
          __asm { vmovups xmm0, xmmword ptr [r15] }
          v63 = *(_DWORD *)_R15[1].color;
          v61 += 12i64;
          v64 = *(_DWORD *)_R15->color;
          _RDX += 128i64;
          __asm
          {
            vinsertps xmm1, xmm0, xmm11, 0F0h ; 'ð'
            vmovups xmm0, xmmword ptr [r15+10h]
            vinsertps xmm5, xmm0, xmm11, 0F0h ; 'ð'
            vsubps  xmm2, xmm1, xmm6
            vshufps xmm4, xmm2, xmm2, 0
            vshufps xmm0, xmm2, xmm2, 0AAh ; 'ª'
            vmulps  xmm0, xmm14, xmm0
            vshufps xmm1, xmm2, xmm2, 55h ; 'U'
            vaddps  xmm2, xmm0, xmm15
            vmulps  xmm1, xmm13, xmm1
            vaddps  xmm3, xmm1, xmm2
            vsubps  xmm1, xmm5, xmm6
            vmulps  xmm0, xmm12, xmm4
            vaddps  xmm9, xmm0, xmm3
            vshufps xmm4, xmm1, xmm1, 0
            vshufps xmm0, xmm1, xmm1, 0AAh ; 'ª'
            vmulps  xmm0, xmm14, xmm0
            vaddps  xmm2, xmm0, xmm15
            vshufps xmm3, xmm1, xmm1, 55h ; 'U'
            vmulps  xmm1, xmm13, xmm3
            vaddps  xmm3, xmm1, xmm2
            vmulps  xmm0, xmm12, xmm4
            vmovups xmm4, xmmword ptr cs:?s_unitZ@@3Ufloat4@@B.v; float4 const s_unitZ
            vaddps  xmm8, xmm0, xmm3
            vshufps xmm7, xmm8, xmm8, 0FFh
            vshufps xmm6, xmm9, xmm9, 0FFh
            vmulps  xmm1, xmm9, xmm7
            vmulps  xmm0, xmm8, xmm6
            vsubps  xmm2, xmm0, xmm1
            vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
            vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
            vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
            vmulps  xmm3, xmm1, xmm0
            vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
            vmulps  xmm0, xmm2, xmm1
            vsubps  xmm5, xmm3, xmm0
            vmulps  xmm1, xmm5, xmm5
            vhaddps xmm0, xmm1, xmm1
            vhaddps xmm0, xmm0, xmm0
            vsqrtps xmm1, xmm0
            vdivps  xmm2, xmm5, xmm1
            vmulps  xmm0, xmm10, xmm2
            vmulps  xmm1, xmm6, xmm0
            vmulps  xmm2, xmm7, xmm0
            vsubps  xmm0, xmm9, xmm1
            vmovups xmmword ptr [rdx-0D8h], xmm0
          }
          *(_DWORD *)(_RDX - 188) = 1073643391;
          _R15 += 2;
          *(_DWORD *)(_RDX - 200) = v64;
          *(_QWORD *)(_RDX - 196) = 0i64;
          __asm
          {
            vsubps  xmm0, xmm8, xmm1
            vmovups xmmword ptr [rdx-0B8h], xmm0
          }
          *(_DWORD *)(_RDX - 168) = v63;
          *(_DWORD *)(_RDX - 156) = 1073643391;
          *(_DWORD *)(_RDX - 164) = 0;
          *(_DWORD *)(_RDX - 160) = 1065353216;
          __asm
          {
            vaddps  xmm0, xmm8, xmm2
            vmovups xmmword ptr [rdx-98h], xmm0
          }
          *(_DWORD *)(_RDX - 136) = v63;
          *(_DWORD *)(_RDX - 124) = 1073643391;
          *(_DWORD *)(_RDX - 132) = 1065353216;
          *(_DWORD *)(_RDX - 128) = 1065353216;
          __asm
          {
            vaddps  xmm0, xmm9, xmm2
            vmovups xmmword ptr [rdx-78h], xmm0
          }
          *(_DWORD *)(_RDX - 92) = 1073643391;
          *(_DWORD *)(_RDX - 104) = v64;
          *(_QWORD *)(_RDX - 100) = 1065353216i64;
          *(_WORD *)(v61 - 16) = vertexCount + 3;
          *(_WORD *)(v61 - 12) = vertexCount + 2;
          *(_WORD *)(v61 - 10) = vertexCount + 2;
          *(_WORD *)(v61 - 6) = vertexCount + 1;
          *(_WORD *)(v61 - 14) = vertexCount;
          *(_WORD *)(v61 - 8) = vertexCount;
          __asm { vmovups xmm6, [rsp+128h+var_F8] }
          vertexCount += 4;
          --v48;
        }
        while ( v48 );
        v59 = v27->vertexCount;
      }
      if ( vertexCount != v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2596, ASSERT_TYPE_ASSERT, "(vertexCount == tess.vertexCount)", (const char *)&queryFormat, "vertexCount == tess.vertexCount") )
        __debugbreak();
    }
    while ( count > 0 );
    __asm
    {
      vmovaps xmm9, [rsp+128h+var_68]
      vmovaps xmm8, [rsp+128h+var_58]
      vmovaps xmm7, [rsp+128h+var_48]
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+128h+var_E8], xmm0
  }
  RB_EndTessSurfaceInternal(&v127, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2599)");
  _R11 = &v133;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, [rsp+128h+var_B8]
    vmovaps xmm15, [rsp+128h+var_C8]
  }
}

/*
==============
RB_DrawPoints2D
==============
*/
void RB_DrawPoints2D(GfxCmdBufContext *gfxContext, const GfxCmdDrawPoints *cmd)
{
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  int v15; 
  materialCommands_t *v17; 
  materialCommands_t *v18; 
  int v21; 
  __int64 v42; 
  GfxCmdBufContext v43; 

  source = gfxContext->source;
  __asm { vmovaps [rsp+88h+var_48], xmm7 }
  _RDI = gfxContext;
  if ( source->viewMode != VIEW_MODE_2D )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups [rsp+88h+var_58], xmm0
    }
    RB_EndSurfaceIfNeeded(&v43);
    R_Set2D(source);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+88h+var_58], xmm0
  }
  RB_SetTessTechnique(&v43, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm1, xmmword ptr [rdi]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm7, xmm0, cs:__real@3f000000
    vmovups [rsp+88h+var_58], xmm1
  }
  _R14 = cmd->verts;
  Tess = R_GetTess(&v43);
  v15 = 0;
  if ( cmd->pointCount )
  {
    __asm { vmovaps [rsp+88h+var_38], xmm6 }
    do
    {
      __asm
      {
        vmovups xmm6, xmmword ptr [rdi]
        vmovups [rsp+88h+var_58], xmm6
      }
      v17 = R_GetTess(&v43);
      if ( v17->maxVertices < 4 )
      {
        LODWORD(v42) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v42) )
          __debugbreak();
      }
      if ( v17->maxIndices < 6 )
      {
        LODWORD(v42) = 6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v42) )
          __debugbreak();
      }
      __asm { vmovdqa [rsp+88h+var_58], xmm6 }
      v18 = R_GetTess(&v43);
      if ( v18->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v18->vertexCount + 12 < v18->indexCount + 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v17->vertexCount + 4 > v17->maxVertices || v17->indexCount + 6 > v17->maxIndices )
      {
        __asm { vmovdqa [rsp+88h+var_58], xmm6 }
        RB_TessOverflowInternal(&v43, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      Tess->indices[Tess->indexCount] = LOWORD(Tess->vertexCount) + 1;
      Tess->indices[Tess->indexCount + 1] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 3] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 4] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + 3;
      Tess->indexCount += 6;
      __asm
      {
        vmovss  xmm0, dword ptr [r14+4]
        vmovss  xmm3, dword ptr [r14+8]
      }
      v21 = *(_DWORD *)_R14->color;
      __asm
      {
        vsubss  xmm2, xmm0, xmm7
        vmovss  xmm0, dword ptr [r14]
        vsubss  xmm1, xmm0, xmm7
      }
      _RCX = (__int64)&Tess->verts[Tess->vertexCount];
      __asm
      {
        vmovss  dword ptr [rcx], xmm1
        vmovss  dword ptr [rcx+4], xmm2
        vmovss  dword ptr [rcx+8], xmm3
      }
      *(_DWORD *)(_RCX + 12) = 1065353216;
      *(_DWORD *)(_RCX + 28) = 1073643391;
      *(_DWORD *)(_RCX + 16) = v21;
      *(_QWORD *)(_RCX + 20) = 0i64;
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vaddss  xmm2, xmm7, dword ptr [r14+4]
        vmovss  xmm3, dword ptr [r14+8]
      }
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 1].xyzw.v;
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rdx], xmm1
        vmovss  dword ptr [rdx+4], xmm2
        vmovss  dword ptr [rdx+8], xmm3
      }
      _RDX[3] = 1065353216;
      _RDX[7] = 1073643391;
      _RDX[4] = v21;
      _RDX[5] = 0;
      _RDX[6] = 1065353216;
      __asm
      {
        vmovss  xmm2, dword ptr [r14+8]
        vaddss  xmm1, xmm7, dword ptr [r14+4]
        vaddss  xmm0, xmm7, dword ptr [r14]
      }
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 2].xyzw.v;
      __asm
      {
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  dword ptr [rdx+8], xmm2
      }
      _RDX[3] = 1065353216;
      _RDX[7] = 1073643391;
      _RDX[4] = v21;
      _RDX[5] = 1065353216;
      _RDX[6] = 1065353216;
      __asm { vmovss  xmm0, dword ptr [r14+4] }
      ++v15;
      __asm { vmovss  xmm2, dword ptr [r14+8] }
      _RDX = (__int64)&Tess->verts[Tess->vertexCount + 3];
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vaddss  xmm0, xmm7, dword ptr [r14]
      }
      ++_R14;
      __asm
      {
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  dword ptr [rdx+8], xmm2
      }
      *(_DWORD *)(_RDX + 12) = 1065353216;
      *(_DWORD *)(_RDX + 28) = 1073643391;
      *(_DWORD *)(_RDX + 16) = v21;
      *(_QWORD *)(_RDX + 20) = 1065353216i64;
      Tess->vertexCount += 4;
    }
    while ( v15 < cmd->pointCount );
    __asm { vmovaps xmm6, [rsp+88h+var_38] }
  }
  __asm { vmovaps xmm7, [rsp+88h+var_48] }
}

/*
==============
RB_DrawPoints3D
==============
*/

void __fastcall RB_DrawPoints3D(GfxCmdBufContext *gfxContext, const GfxCmdDrawPoints *cmd, double _XMM2_8)
{
  materialCommands_t *Tess; 
  int v26; 
  materialCommands_t *v70; 
  materialCommands_t *v71; 
  int v75; 
  __int64 v93; 
  GfxCmdBufContext v94; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RSI = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovaps [rsp+118h+var_B8], xmm14
    vmovaps [rsp+118h+var_C8], xmm15
    vmovups [rsp+118h+var_E8], xmm0
  }
  RB_SetIdentity(&v94);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+118h+var_E8], xmm0
  }
  RB_SetTessTechnique(&v94, rgp.whiteDepthtestMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  _RBX = _RSI->source;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+118h+var_E8], xmm0
    vmovss  xmm13, dword ptr [rbx+2A30h]
    vmovss  xmm14, dword ptr [rbx+2A34h]
    vmovss  xmm15, dword ptr [rbx+2A38h]
  }
  _R14 = cmd->verts;
  Tess = R_GetTess(&v94);
  v26 = 0;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, ecx
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rcx
    vdivss  xmm12, xmm2, xmm1
    vdivss  xmm8, xmm2, xmm0
    vmovss  [rsp+118h+var_D4], xmm12
    vmovss  [rsp+118h+var_D8], xmm8
  }
  if ( cmd->pointCount )
  {
    __asm
    {
      vmovaps [rsp+118h+var_38], xmm6
      vmovaps [rsp+118h+var_48], xmm7
      vmovaps [rsp+118h+var_68], xmm9
      vmovaps [rsp+118h+var_78], xmm10
      vmovaps [rsp+118h+var_88], xmm11
    }
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [r14+4]
        vsubss  xmm6, xmm0, xmm13
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm4, xmm1, xmm14
        vmulss  xmm1, xmm6, dword ptr [rbx+29B0h]
        vmulss  xmm2, xmm4, dword ptr [rbx+29C0h]
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm1, xmm4, dword ptr [rbx+29C4h]
        vsubss  xmm5, xmm0, xmm15
        vmulss  xmm0, xmm5, dword ptr [rbx+29D0h]
        vaddss  xmm2, xmm3, xmm0
        vaddss  xmm9, xmm2, dword ptr [rbx+29E0h]
        vmulss  xmm0, xmm6, dword ptr [rbx+29B4h]
        vmulss  xmm3, xmm4, dword ptr [rbx+29CCh]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm6, dword ptr [rbx+29BCh]
        vmulss  xmm1, xmm5, dword ptr [rbx+29D4h]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm10, xmm2, dword ptr [rbx+29E4h]
        vmulss  xmm1, xmm5, dword ptr [rbx+29DCh]
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm0, xmm4, dword ptr [rbx+29C8h]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm7, xmm2, dword ptr [rbx+29ECh]
        vmulss  xmm1, xmm6, dword ptr [rbx+29B8h]
        vmovups xmm6, xmmword ptr [rsi]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rbx+29D8h]
        vmulss  xmm0, xmm7, cs:__real@3a83126f
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm3, xmm2, dword ptr [rbx+29E8h]
        vmulss  xmm11, xmm8, xmm7
        vaddss  xmm8, xmm3, xmm0
        vmulss  xmm12, xmm12, xmm7
        vmovups [rsp+118h+var_E8], xmm6
      }
      v70 = R_GetTess(&v94);
      if ( v70->maxVertices < 4 )
      {
        LODWORD(v93) = 4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v93) )
          __debugbreak();
      }
      if ( v70->maxIndices < 6 )
      {
        LODWORD(v93) = 6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v93) )
          __debugbreak();
      }
      __asm { vmovdqa [rsp+118h+var_E8], xmm6 }
      v71 = R_GetTess(&v94);
      if ( v71->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v71->vertexCount + 12 < v71->indexCount + 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v70->vertexCount + 4 > v70->maxVertices || v70->indexCount + 6 > v70->maxIndices )
      {
        __asm { vmovdqa [rsp+118h+var_E8], xmm6 }
        RB_TessOverflowInternal(&v94, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      __asm
      {
        vsubss  xmm0, xmm9, xmm11
        vsubss  xmm2, xmm10, xmm12
        vaddss  xmm1, xmm12, xmm10
      }
      Tess->indices[Tess->indexCount] = LOWORD(Tess->vertexCount) + 3;
      Tess->indices[Tess->indexCount + 1] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 3] = LOWORD(Tess->vertexCount) + 2;
      Tess->indices[Tess->indexCount + 4] = Tess->vertexCount;
      Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + 1;
      Tess->indexCount += 6;
      v75 = *(_DWORD *)_R14->color;
      _RCX = (__int64)&Tess->verts[Tess->vertexCount];
      __asm
      {
        vmovss  dword ptr [rcx], xmm0
        vmovss  dword ptr [rcx+4], xmm2
        vmovss  dword ptr [rcx+8], xmm8
        vmovss  dword ptr [rcx+0Ch], xmm7
      }
      *(_DWORD *)(_RCX + 28) = 1073643391;
      *(_DWORD *)(_RCX + 16) = v75;
      *(_QWORD *)(_RCX + 20) = 0i64;
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 1].xyzw.v;
      __asm
      {
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  dword ptr [rdx+8], xmm8
        vmovss  dword ptr [rdx+0Ch], xmm7
      }
      _RDX[7] = 1073643391;
      _RDX[4] = v75;
      _RDX[5] = 0;
      _RDX[6] = 1065353216;
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 2].xyzw.v;
      __asm
      {
        vaddss  xmm0, xmm11, xmm9
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
        vmovss  dword ptr [rdx+8], xmm8
        vmovss  dword ptr [rdx+0Ch], xmm7
      }
      _RDX[7] = 1073643391;
      _RDX[4] = v75;
      _RDX[5] = 1065353216;
      _RDX[6] = 1065353216;
      _RDX = (__int64)&Tess->verts[Tess->vertexCount + 3];
      __asm
      {
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm2
        vmovss  dword ptr [rdx+8], xmm8
        vmovss  dword ptr [rdx+0Ch], xmm7
        vmovss  xmm8, [rsp+118h+var_D8]
        vmovss  xmm12, [rsp+118h+var_D4]
      }
      *(_DWORD *)(_RDX + 28) = 1073643391;
      ++v26;
      *(_DWORD *)(_RDX + 16) = v75;
      ++_R14;
      *(_QWORD *)(_RDX + 20) = 1065353216i64;
      Tess->vertexCount += 4;
    }
    while ( v26 < cmd->pointCount );
    __asm
    {
      vmovaps xmm11, [rsp+118h+var_88]
      vmovaps xmm10, [rsp+118h+var_78]
      vmovaps xmm9, [rsp+118h+var_68]
      vmovaps xmm7, [rsp+118h+var_48]
      vmovaps xmm6, [rsp+118h+var_38]
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+118h+var_E8], xmm0
  }
  RB_EndTessSurfaceInternal(&v94, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2346)");
  __asm { vmovaps xmm14, [rsp+118h+var_B8] }
  _R11 = &v105;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+118h+var_C8]
  }
}

/*
==============
RB_DrawQuadPicInternal
==============
*/
void RB_DrawQuadPicInternal(const GfxRenderCommandExecState *execState, const GfxCmdDrawQuadPic *cmd)
{
  GfxCmdBufSourceState *source; 
  const Material *mtlOverride; 
  materialCommands_t *Tess; 
  __int64 vertexCount_low; 
  __int64 indexCount; 
  float v12; 
  float v15; 
  float v18; 
  float v21; 
  GfxCmdBufContext v24; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = cmd;
  _RBX = execState;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 1467, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  source = _RBX->gfxContext.source;
  __asm { vmovups xmm6, xmmword ptr [rbx+10h] }
  if ( source->viewMode != VIEW_MODE_2D )
  {
    __asm { vmovups [rsp+58h+var_28], xmm6 }
    RB_EndSurfaceIfNeeded(&v24);
    R_Set2D(source);
  }
  mtlOverride = _RBX->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = _RDI->material;
  __asm { vmovdqa [rsp+58h+var_28], xmm6 }
  RB_SetTessTechnique(&v24, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  __asm { vmovdqa [rsp+58h+var_28], xmm6 }
  RB_CheckTessOverflow(&v24, 4u, 6u);
  __asm { vmovdqa [rsp+58h+var_28], xmm6 }
  Tess = R_GetTess(&v24);
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
  __asm { vmovss  xmm0, dword ptr [rdi+14h] }
  LODWORD(indexCount) = _RDI->color.packed;
  v12 = _RDI->verts[0].v[0];
  _RCX = (__int64)&Tess->verts[(unsigned int)vertexCount_low];
  __asm { vmovss  dword ptr [rcx+4], xmm0 }
  *(float *)_RCX = v12;
  *(_DWORD *)(_RCX + 8) = 0;
  *(_DWORD *)(_RCX + 12) = 1065353216;
  *(_DWORD *)(_RCX + 16) = indexCount;
  *(_DWORD *)(_RCX + 28) = 1073643391;
  *(_QWORD *)(_RCX + 20) = 0i64;
  __asm { vmovss  xmm0, dword ptr [rdi+1Ch] }
  LODWORD(_RCX) = _RDI->color.packed;
  v15 = _RDI->verts[1].v[0];
  _RDX = (__int64)&Tess->verts[vertexCount_low + 1];
  __asm { vmovss  dword ptr [rdx+4], xmm0 }
  *(float *)_RDX = v15;
  *(_DWORD *)(_RDX + 8) = 0;
  *(_DWORD *)(_RDX + 12) = 1065353216;
  *(_DWORD *)(_RDX + 28) = 1073643391;
  *(_DWORD *)(_RDX + 16) = _RCX;
  *(_QWORD *)(_RDX + 20) = 1065353216i64;
  __asm { vmovss  xmm0, dword ptr [rdi+24h] }
  LODWORD(_RCX) = _RDI->color.packed;
  v18 = _RDI->verts[2].v[0];
  _RDX = Tess->verts[vertexCount_low + 2].xyzw.v;
  __asm { vmovss  dword ptr [rdx+4], xmm0 }
  *_RDX = v18;
  _RDX[2] = 0.0;
  _RDX[3] = 1.0;
  _RDX[7] = 1.9882659;
  *((_DWORD *)_RDX + 4) = _RCX;
  _RDX[5] = 1.0;
  _RDX[6] = 1.0;
  LODWORD(_RCX) = _RDI->color.packed;
  __asm { vmovss  xmm0, dword ptr [rdi+2Ch] }
  v21 = _RDI->verts[3].v[0];
  _RDX = (__int64)&Tess->verts[vertexCount_low + 3];
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rdx+4], xmm0
  }
  *(float *)_RDX = v21;
  *(_DWORD *)(_RDX + 8) = 0;
  *(_DWORD *)(_RDX + 12) = 1065353216;
  *(_DWORD *)(_RDX + 28) = 1073643391;
  *(_QWORD *)(_RDX + 16) = (unsigned int)_RCX;
  *(_DWORD *)(_RDX + 24) = 1065353216;
}

/*
==============
RB_DrawQuadPicSTCmdInternal
==============
*/
void RB_DrawQuadPicSTCmdInternal(GfxRenderCommandExecState *execState, const GfxCmdDrawQuadPicST *cmd)
{
  GfxCmdBufSourceState *source; 
  bool v7; 
  bool v10; 
  const Material *mtlOverride; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  __int64 indexCount; 
  bool v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  GfxColor color; 
  GfxColor v45; 
  float v48; 
  GfxColor v51; 
  float v54; 
  GfxColor v57; 
  float v59; 
  GfxColor v63; 
  float v66; 
  float fmt; 
  float v70; 
  unsigned __int16 v71; 
  GfxCmdBufContext v72[5]; 
  vec4_t outVertex[4]; 

  __asm { vmovaps [rsp+120h+var_40], xmm6 }
  _RDI = cmd;
  _RBX = execState;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 1678, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  source = _RBX->gfxContext.source;
  __asm { vmovups xmm6, xmmword ptr [rbx+10h] }
  v7 = source->viewMode == VIEW_MODE_2D;
  if ( source->viewMode != VIEW_MODE_2D )
  {
    __asm { vmovups [rsp+120h+var_E0], xmm6 }
    RB_EndSurfaceIfNeeded(v72);
    R_Set2D(source);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vucomiss xmm0, dword ptr [rdi+10h]
  }
  if ( !v7 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vucomiss xmm0, dword ptr [rdi+14h]
  }
  if ( v7 )
    v10 = 0;
  else
LABEL_9:
    v10 = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  xmm1, dword ptr [rdi+34h]
    vmovss  xmm3, dword ptr [rdi+38h]
    vmovss  xmm2, dword ptr [rdi+30h]
    vmovss  dword ptr [rsp+120h+var_F8], xmm0
    vmovss  dword ptr [rsp+120h+fmt], xmm1
    vmovdqa [rsp+120h+var_E0], xmm6
  }
  RB_SetUIAA(v72, v10, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v70);
  mtlOverride = _RBX->mtlOverride;
  if ( !mtlOverride )
    mtlOverride = _RDI->material;
  __asm { vmovdqa [rsp+120h+var_E0], xmm6 }
  RB_SetTessTechnique(v72, mtlOverride, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_HUD);
  __asm { vmovdqa [rsp+120h+var_E0], xmm6 }
  RB_CheckTessOverflow(v72, 4u, 6u);
  __asm { vmovdqa [rsp+120h+var_E0], xmm6 }
  Tess = R_GetTess(v72);
  vertexCount = Tess->vertexCount;
  indexCount = (int)Tess->indexCount;
  Tess->vertexCount += 4;
  v71 = vertexCount;
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount + 3;
  Tess->indices[indexCount + 1] = vertexCount;
  Tess->indices[indexCount + 2] = vertexCount + 2;
  Tess->indices[indexCount + 3] = vertexCount + 2;
  Tess->indices[indexCount + 4] = vertexCount;
  Tess->indices[indexCount + 5] = vertexCount + 1;
  __asm { vmovq   rax, xmm6 }
  if ( (*(_BYTE *)(_RAX + 11668) & 1) != 0 )
  {
    v20 = RB_ApplyVertexDilation(_RDI->verts, &_RDI->verts[1], &_RDI->verts[3], outVertex);
    v21 = RB_ApplyVertexDilation(&_RDI->verts[1], &_RDI->verts[2], _RDI->verts, &outVertex[1]) || v20;
    v22 = RB_ApplyVertexDilation(&_RDI->verts[2], &_RDI->verts[3], &_RDI->verts[1], &outVertex[2]) || v21;
    v23 = RB_ApplyVertexDilation(&_RDI->verts[3], _RDI->verts, &_RDI->verts[2], &outVertex[3]);
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+30h]
      vmovss  xmm3, dword ptr [rdi+34h]
      vmovss  xmm0, dword ptr [rdi+38h]
      vmovss  xmm1, dword ptr [rdi+3Ch]
      vxorps  xmm2, xmm2, xmm2
      vmovss  dword ptr [rbp+57h+outUVs], xmm4
      vmovss  dword ptr [rbp+57h+outUVs+4], xmm3
      vmovss  dword ptr [rbp+57h+outUVs+8], xmm2
      vmovss  dword ptr [rbp+57h+outUVs+0Ch], xmm2
      vmovss  dword ptr [rbp+57h+outUVs+10h], xmm0
      vmovss  dword ptr [rbp+57h+outUVs+14h], xmm3
      vmovss  dword ptr [rbp+57h+outUVs+18h], xmm2
      vmovss  dword ptr [rbp+57h+outUVs+1Ch], xmm2
      vmovss  dword ptr [rbp+57h+outUVs+20h], xmm0
      vmovss  dword ptr [rbp+57h+outUVs+24h], xmm1
      vmovss  dword ptr [rbp+57h+outUVs+28h], xmm2
      vmovss  dword ptr [rbp+57h+outUVs+2Ch], xmm2
      vmovss  dword ptr [rbp+57h+outUVs+30h], xmm4
      vmovss  dword ptr [rbp+57h+outUVs+34h], xmm1
      vmovss  dword ptr [rbp+57h+outUVs+38h], xmm2
      vmovss  dword ptr [rbp+57h+outUVs+3Ch], xmm2
    }
    if ( !v23 && !v22 )
    {
      RB_ApplyUVDilation((const vec2_t (*)[4])_RDI->verts, (const vec4_t (*)[4])outVertex, (vec4_t (*)[4])&v72[1]);
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+57h+outUVs+4]
        vmovss  xmm4, dword ptr [rbp+57h+outUVs]
      }
    }
    color = _RDI->color;
    __asm { vmovaps xmm0, xmmword ptr [rbp+57h+outVertex] }
    _RAX = (__int64)&Tess->verts[v71];
    __asm { vmovups xmmword ptr [rax], xmm0 }
    *(GfxColor *)(_RAX + 16) = color;
    __asm { vmovaps xmm0, xmmword ptr [rbp+57h+var_80] }
    *(_DWORD *)(_RAX + 28) = 1073643391;
    __asm
    {
      vmovss  dword ptr [rax+14h], xmm4
      vmovss  dword ptr [rax+18h], xmm3
    }
    LODWORD(_RAX) = _RDI->color.packed;
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+57h+outUVs+14h]
      vmovss  xmm2, dword ptr [rbp+57h+outUVs+10h]
    }
    _RCX = (__int64)&Tess->verts[v71 + 1];
    __asm
    {
      vmovups xmmword ptr [rcx], xmm0
      vmovaps xmm0, xmmword ptr [rbp+57h+var_70]
    }
    *(_DWORD *)(_RCX + 28) = 1073643391;
    *(_DWORD *)(_RCX + 16) = _RAX;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm2
      vmovss  dword ptr [rcx+18h], xmm3
    }
    LODWORD(_RAX) = _RDI->color.packed;
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+57h+outUVs+20h]
      vmovss  xmm3, dword ptr [rbp+57h+outUVs+24h]
    }
    _RCX = (__int64)&Tess->verts[v71 + 2];
    __asm
    {
      vmovups xmmword ptr [rcx], xmm0
      vmovaps xmm0, xmmword ptr [rbp+57h+var_60]
    }
    *(_DWORD *)(_RCX + 28) = 1073643391;
    *(_DWORD *)(_RCX + 16) = _RAX;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm2
      vmovss  dword ptr [rcx+18h], xmm3
    }
    LODWORD(_RAX) = _RDI->color.packed;
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+57h+outUVs+34h]
      vmovss  xmm2, dword ptr [rbp+57h+outUVs+30h]
    }
    _RCX = (__int64)&Tess->verts[v71 + 3];
    __asm { vmovups xmmword ptr [rcx], xmm0 }
    *(_DWORD *)(_RCX + 28) = 1073643391;
    *(_DWORD *)(_RCX + 16) = _RAX;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm2
      vmovss  dword ptr [rcx+18h], xmm4
    }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+14h] }
    v45 = _RDI->color;
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+34h]
      vmovss  xmm1, dword ptr [rdi+30h]
    }
    v48 = _RDI->verts[0].v[0];
    _RCX = Tess->verts[vertexCount].xyzw.v;
    __asm { vmovss  dword ptr [rcx+4], xmm0 }
    *_RCX = v48;
    _RCX[2] = 0.0;
    _RCX[3] = 1.0;
    _RCX[7] = 1.9882659;
    _RCX[4] = *(float *)&v45.packed;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm1
      vmovss  dword ptr [rcx+18h], xmm2
      vmovss  xmm0, dword ptr [rdi+1Ch]
    }
    v51 = _RDI->color;
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+34h]
      vmovss  xmm1, dword ptr [rdi+38h]
    }
    v54 = _RDI->verts[1].v[0];
    _RCX = Tess->verts[vertexCount + 1].xyzw.v;
    __asm { vmovss  dword ptr [rcx+4], xmm0 }
    *_RCX = v54;
    _RCX[2] = 0.0;
    _RCX[3] = 1.0;
    _RCX[7] = 1.9882659;
    _RCX[4] = *(float *)&v51.packed;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm1
      vmovss  dword ptr [rcx+18h], xmm2
      vmovss  xmm0, dword ptr [rdi+24h]
    }
    v57 = _RDI->color;
    __asm { vmovss  xmm1, dword ptr [rdi+38h] }
    v59 = _RDI->verts[2].v[0];
    __asm { vmovss  xmm2, dword ptr [rdi+3Ch] }
    _RCX = Tess->verts[vertexCount + 2].xyzw.v;
    __asm { vmovss  dword ptr [rcx+4], xmm0 }
    *_RCX = v59;
    _RCX[2] = 0.0;
    _RCX[3] = 1.0;
    _RCX[7] = 1.9882659;
    _RCX[4] = *(float *)&v57.packed;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm1
      vmovss  dword ptr [rcx+18h], xmm2
      vmovss  xmm0, dword ptr [rdi+2Ch]
    }
    v63 = _RDI->color;
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+3Ch]
      vmovss  xmm1, dword ptr [rdi+30h]
    }
    v66 = _RDI->verts[3].v[0];
    _RCX = Tess->verts[vertexCount + 3].xyzw.v;
    __asm { vmovss  dword ptr [rcx+4], xmm0 }
    *_RCX = v66;
    _RCX[2] = 0.0;
    _RCX[3] = 1.0;
    _RCX[7] = 1.9882659;
    _RCX[4] = *(float *)&v63.packed;
    __asm
    {
      vmovss  dword ptr [rcx+14h], xmm1
      vmovss  dword ptr [rcx+18h], xmm3
    }
  }
  __asm { vmovaps xmm6, [rsp+120h+var_40] }
}

/*
==============
RB_DrawRect2D
==============
*/

void __fastcall RB_DrawRect2D(GfxCmdBufContext *gfxContext, double x, double y, double width, float height, const GfxColor color)
{
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  GfxCmdBufContext v19; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmm4, xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovups xmmword ptr [rsp+78h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  [rsp+78h+var_38], xmm0
    vmovss  xmm0, [rsp+78h+arg_20]
    vmovss  [rsp+78h+var_40], xmm2
    vmovss  [rsp+78h+var_48], xmm2
    vmovss  [rsp+78h+var_50], xmm0
    vmovss  [rsp+78h+var_58], xmm3
    vmovaps xmm3, xmm4
    vmovaps xmm2, xmm1
  }
  RB_DrawStretchPic(&v19, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v13, v14, v15, v16, v17, v18, color.packed, GFX_PRIM_STATS_DEBUG);
}

/*
==============
RB_DrawRectOutline2D
==============
*/
void RB_DrawRectOutline2D(GfxCmdBufContext *gfxContext, unsigned int count, int width, const GfxCmdDrawRect2D::Rect *rects)
{
  __int64 v8; 
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  __int64 v20; 
  materialCommands_t *v23; 
  materialCommands_t *v24; 
  unsigned int indexCount; 
  unsigned int v26; 
  __int16 v27; 
  __int16 v28; 
  GfxColor color; 
  GfxColor v41; 
  GfxColor v52; 
  GfxColor v62; 
  __int64 v73; 
  GfxCmdBufContext v74; 

  v8 = count;
  _R14 = rects;
  _RSI = gfxContext;
  if ( !count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 2674, ASSERT_TYPE_ASSERT, "( ( count > 0 ) )", "( count ) = %i", count) )
    __debugbreak();
  source = _RSI->source;
  if ( _RSI->source->viewMode != VIEW_MODE_2D )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+0A8h+var_78], xmm0
    }
    RB_EndSurfaceIfNeeded(&v74);
    R_Set2D(source);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0A8h+var_78], xmm0
  }
  RB_SetTessTechnique(&v74, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0A8h+var_78], xmm0
  }
  Tess = R_GetTess(&v74);
  if ( (_DWORD)v8 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebp
      vmulss  xmm7, xmm0, cs:__real@3f000000
      vxorps  xmm8, xmm7, cs:__xmm@80000000800000008000000080000000
      vmovaps [rsp+0A8h+var_68], xmm9
    }
    v20 = v8;
    __asm { vmulss  xmm9, xmm0, cs:__real@bf000000 }
    do
    {
      __asm
      {
        vmovups xmm6, xmmword ptr [rsi]
        vmovups [rsp+0A8h+var_78], xmm6
      }
      v23 = R_GetTess(&v74);
      if ( v23->maxVertices < 8 )
      {
        LODWORD(v73) = 8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 196, ASSERT_TYPE_ASSERT, "( ( vertexCount <= tess.maxVertices ) )", "( vertexCount ) = %i", v73) )
          __debugbreak();
      }
      if ( v23->maxIndices < 0x18 )
      {
        LODWORD(v73) = 24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 197, ASSERT_TYPE_ASSERT, "( ( indexCount <= tess.maxIndices ) )", "( indexCount ) = %i", v73) )
          __debugbreak();
      }
      __asm { vmovdqa [rsp+0A8h+var_78], xmm6 }
      v24 = R_GetTess(&v74);
      if ( v24->viewStatsTarget == GFX_VIEW_STATS_2D && 3 * v24->vertexCount + 24 < v24->indexCount + 24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 186, ASSERT_TYPE_ASSERT, "(( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount ))", (const char *)&queryFormat, "( tess.vertexCount + addedVertexCount ) * 3 >= ( tess.indexCount + addedIndexCount )") )
        __debugbreak();
      if ( v23->vertexCount + 8 > v23->maxVertices || v23->indexCount + 24 > v23->maxIndices )
      {
        __asm { vmovdqa [rsp+0A8h+var_78], xmm6 }
        RB_TessOverflowInternal(&v74, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(204)");
      }
      indexCount = Tess->indexCount;
      v26 = 0;
      do
      {
        v27 = 2 * v26++;
        Tess->indices[indexCount] = (v27 & 7) + LOWORD(Tess->vertexCount);
        v28 = (v27 + 3) & 7;
        Tess->indices[Tess->indexCount + 1] = LOWORD(Tess->vertexCount) + (((_BYTE)v27 + 2) & 7);
        Tess->indices[Tess->indexCount + 2] = LOWORD(Tess->vertexCount) + v28;
        Tess->indices[Tess->indexCount + 3] = (v27 & 7) + LOWORD(Tess->vertexCount);
        Tess->indices[Tess->indexCount + 4] = LOWORD(Tess->vertexCount) + v28;
        Tess->indices[Tess->indexCount + 5] = LOWORD(Tess->vertexCount) + (((_BYTE)v27 + 1) & 7);
        Tess->indexCount += 6;
        indexCount = Tess->indexCount;
      }
      while ( v26 < 4 );
      __asm
      {
        vmovss  xmm2, dword ptr [r14]
        vmovss  xmm3, dword ptr [r14+4]
      }
      color = _R14->color;
      _RCX = (__int64)&Tess->verts[Tess->vertexCount];
      __asm
      {
        vsubss  xmm0, xmm2, xmm7
        vaddss  xmm1, xmm8, xmm3
        vmovss  dword ptr [rcx], xmm0
        vmovss  dword ptr [rcx+4], xmm1
      }
      *(_DWORD *)(_RCX + 8) = 0;
      *(_DWORD *)(_RCX + 12) = 1065353216;
      *(_DWORD *)(_RCX + 28) = 1073643391;
      *(GfxColor *)(_RCX + 16) = color;
      *(_QWORD *)(_RCX + 20) = 0i64;
      LODWORD(_RCX) = _R14->color.packed;
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 1].xyzw.v;
      __asm
      {
        vaddss  xmm0, xmm2, xmm7
        vsubss  xmm1, xmm3, xmm8
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
      }
      _RDX[2] = 0;
      _RDX[3] = 1065353216;
      _RDX[4] = _RCX;
      _RDX[7] = 1073643391;
      _RDX[5] = 1065353216;
      _RDX[6] = 1065353216;
      Tess->vertexCount += 2;
      __asm
      {
        vmovss  xmm3, dword ptr [r14]
        vmovss  xmm0, dword ptr [r14+0Ch]
        vaddss  xmm2, xmm0, dword ptr [r14+4]
      }
      v41 = _R14->color;
      _RCX = (__int64)&Tess->verts[Tess->vertexCount];
      __asm
      {
        vsubss  xmm0, xmm3, xmm7
        vaddss  xmm1, xmm7, xmm2
        vmovss  dword ptr [rcx], xmm0
        vmovss  dword ptr [rcx+4], xmm1
      }
      *(_DWORD *)(_RCX + 8) = 0;
      *(_DWORD *)(_RCX + 12) = 1065353216;
      *(_DWORD *)(_RCX + 28) = 1073643391;
      *(GfxColor *)(_RCX + 16) = v41;
      *(_QWORD *)(_RCX + 20) = 0i64;
      LODWORD(_RCX) = _R14->color.packed;
      __asm
      {
        vaddss  xmm0, xmm3, xmm7
        vsubss  xmm1, xmm2, xmm7
      }
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 1].xyzw.v;
      __asm
      {
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
      }
      _RDX[2] = 0;
      _RDX[3] = 1065353216;
      _RDX[7] = 1073643391;
      _RDX[4] = _RCX;
      _RDX[5] = 1065353216;
      _RDX[6] = 1065353216;
      Tess->vertexCount += 2;
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [r14+0Ch]
        vaddss  xmm2, xmm0, dword ptr [r14+8]
        vaddss  xmm3, xmm1, dword ptr [r14+4]
      }
      v52 = _R14->color;
      _RCX = (__int64)&Tess->verts[Tess->vertexCount];
      __asm
      {
        vaddss  xmm0, xmm7, xmm2
        vaddss  xmm1, xmm7, xmm3
        vmovss  dword ptr [rcx], xmm0
        vmovss  dword ptr [rcx+4], xmm1
      }
      *(_DWORD *)(_RCX + 8) = 0;
      *(_DWORD *)(_RCX + 12) = 1065353216;
      *(_DWORD *)(_RCX + 28) = 1073643391;
      *(GfxColor *)(_RCX + 16) = v52;
      *(_QWORD *)(_RCX + 20) = 0i64;
      LODWORD(_RCX) = _R14->color.packed;
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 1].xyzw.v;
      __asm
      {
        vsubss  xmm0, xmm2, xmm7
        vsubss  xmm1, xmm3, xmm7
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
      }
      _RDX[2] = 0;
      _RDX[3] = 1065353216;
      _RDX[7] = 1073643391;
      _RDX[4] = _RCX;
      _RDX[5] = 1065353216;
      _RDX[6] = 1065353216;
      Tess->vertexCount += 2;
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vaddss  xmm2, xmm0, dword ptr [r14+8]
        vmovss  xmm3, dword ptr [r14+4]
      }
      v62 = _R14->color;
      _RCX = (__int64)&Tess->verts[Tess->vertexCount];
      __asm
      {
        vaddss  xmm0, xmm7, xmm2
        vsubss  xmm1, xmm3, xmm7
        vmovss  dword ptr [rcx], xmm0
        vmovss  dword ptr [rcx+4], xmm1
      }
      *(_DWORD *)(_RCX + 8) = 0;
      *(_DWORD *)(_RCX + 12) = 1065353216;
      *(_DWORD *)(_RCX + 28) = 1073643391;
      *(GfxColor *)(_RCX + 16) = v62;
      *(_QWORD *)(_RCX + 20) = 0i64;
      LODWORD(_RCX) = _R14->color.packed;
      ++_R14;
      _RDX = (_DWORD *)Tess->verts[Tess->vertexCount + 1].xyzw.v;
      __asm
      {
        vsubss  xmm0, xmm2, xmm7
        vsubss  xmm1, xmm3, xmm9
        vmovss  dword ptr [rdx], xmm0
        vmovss  dword ptr [rdx+4], xmm1
      }
      _RDX[2] = 0;
      _RDX[3] = 1065353216;
      _RDX[7] = 1073643391;
      _RDX[4] = _RCX;
      _RDX[5] = 1065353216;
      _RDX[6] = 1065353216;
      Tess->vertexCount += 2;
      --v20;
    }
    while ( v20 );
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_68]
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
    }
  }
}

/*
==============
RB_DrawRotatedText
==============
*/

void __fastcall RB_DrawRotatedText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, double x, float y, float cwAngleInDegree, const GfxColor color)
{
  int pixelHeight; 
  bool DoesGlyphUseDistanceField; 
  const Material *v17; 
  int v19; 
  GfxCmdBufContext v20; 
  DrawTextPositionSettings v21; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+arg_20]
    vmovss  xmm1, [rsp+0C8h+arg_28]
    vmovss  dword ptr [rax-44h], xmm0
    vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians
  }
  v21.mode = POSITION_2D;
  _RBX = gfxContext;
  __asm { vmovss  dword ptr [rax-48h], xmm3 }
  FastSinCos(*(const float *)&_XMM0, v21.position3D.xDirection.v, &v21.position3D.startPosition.v[2]);
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  pixelHeight = font->pixelHeight;
  __asm
  {
    vmovss  [rsp+0C8h+var_20], xmm0
    vmovss  [rsp+0C8h+var_1C], xmm0
  }
  v21.tracking = 0;
  DoesGlyphUseDistanceField = FontCache_DoesGlyphUseDistanceField(pixelHeight);
  v17 = rgp.fontMaterial[0];
  if ( DoesGlyphUseDistanceField )
    v17 = rgp.fontSDFMaterial[0];
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v19 = font->pixelHeight;
  __asm { vmovups [rsp+0C8h+var_58], xmm0 }
  DrawText(&v20, text, font, v19, &v21, color, 0x7FFFFFFF, 0, 0, 0, v17, rgp.iconMaterial, NULL, NULL);
}

/*
==============
RB_DrawScreenColoredQuadInternal
==============
*/

void __fastcall RB_DrawScreenColoredQuadInternal(GfxCmdBufContext *gfxContext, const Material *material, double s0, double t0, float s1, float t1, float screenWidth, float screenHeight, unsigned int color, const char *fileAndLine)
{
  char v18; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  GfxCmdBufContext v51[3]; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovups xmmword ptr [rax-38h], xmm0
    vmovaps xmm6, xmm3
  }
  RB_EndSurfaceIfNeeded(v51);
  R_Set2D(_RBX->source);
  __asm
  {
    vmovss  xmm2, [rsp+98h+arg_30]
    vmovss  xmm3, [rsp+98h+arg_38]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vucomiss xmm2, xmm0
  }
  if ( !v18 )
    goto LABEL_4;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vucomiss xmm3, xmm0
  }
  if ( v18 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovss  xmm1, [rsp+98h+arg_20]
      vmovups [rsp+98h+var_38], xmm0
      vmovss  xmm0, [rsp+98h+arg_28]
      vmovss  [rsp+98h+var_50], xmm0
      vmovss  [rsp+98h+var_58], xmm1
      vmovss  [rsp+98h+var_60], xmm6
      vmovss  [rsp+98h+var_68], xmm7
      vmovss  [rsp+98h+var_70], xmm3
      vmovss  [rsp+98h+var_78], xmm2
      vxorps  xmm2, xmm2, xmm2
      vxorps  xmm3, xmm3, xmm3
    }
    RB_DrawStretchPic_LargeTriangle(v51, material, *(float *)&_XMM2, *(float *)&_XMM3, v39, v41, v43, v45, v47, v49, color, GFX_PRIM_STATS_CODE);
  }
  else
  {
LABEL_4:
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovss  xmm1, [rsp+98h+arg_20]
      vmovups [rsp+98h+var_38], xmm0
      vmovss  xmm0, [rsp+98h+arg_28]
      vmovss  [rsp+98h+var_50], xmm0
      vmovss  [rsp+98h+var_58], xmm1
      vmovss  [rsp+98h+var_60], xmm6
      vmovss  [rsp+98h+var_68], xmm7
      vmovss  [rsp+98h+var_70], xmm3
      vmovss  [rsp+98h+var_78], xmm2
      vxorps  xmm2, xmm2, xmm2
      vxorps  xmm3, xmm3, xmm3
    }
    RB_DrawStretchPic(v51, material, *(float *)&_XMM2, *(float *)&_XMM3, v40, v42, v44, v46, v48, v50, color, GFX_PRIM_STATS_CODE);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+98h+var_38], xmm0
  }
  RB_EndTessSurfaceInternal(v51, fileAndLine);
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v52;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_DrawStretchPic
==============
*/

void __fastcall RB_DrawStretchPic(GfxCmdBufContext *gfxContext, const Material *material, double x, double y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  bool v19; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v30; 
  GfxCmdBufContext v40; 
  GfxCmdBufContext v41[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  source = gfxContext->source;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = gfxContext;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  v19 = source->viewMode == VIEW_MODE_2D;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovups xmmword ptr [rax-38h], xmm0
  }
  if ( !v19 )
  {
    __asm { vmovups xmmword ptr [rax-48h], xmm0 }
    RB_EndSurfaceIfNeeded(&v40);
    R_Set2D(source);
  }
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v41[0].source->viewStatsTarget = GFX_VIEW_STATS_2D;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_SetTessTechnique(v41, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_CheckTessOverflow(v41, 4u, 6u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_38], xmm0
  }
  Tess = R_GetTess(v41);
  __asm
  {
    vmovss  xmm2, [rsp+68h+arg_38]
    vaddss  xmm0, xmm7, [rsp+68h+arg_20]
    vmovss  xmm3, [rsp+68h+arg_30]
  }
  vertexCount = Tess->vertexCount;
  v30 = Tess;
  __asm { vmovss  xmm1, [rsp+68h+arg_40] }
  Tess->indices[Tess->indexCount] = vertexCount + 3;
  Tess->indices[Tess->indexCount + 1] = vertexCount;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 3] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 4] = vertexCount;
  Tess->indices[Tess->indexCount + 5] = vertexCount + 1;
  _RAX = (_DWORD *)Tess->verts[Tess->vertexCount].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm7
    vmovss  dword ptr [rax+4], xmm6
  }
  _RAX[2] = 0;
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm3
    vmovss  dword ptr [rax+18h], xmm2
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 1].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vmovss  dword ptr [rcx+4], xmm6
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm1
    vmovss  dword ptr [rcx+18h], xmm2
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 2].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vaddss  xmm2, xmm6, [rsp+68h+arg_28]
    vmovss  xmm0, [rsp+68h+arg_48]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rcx+4], xmm2
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm1
    vmovss  dword ptr [rcx+18h], xmm0
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 3].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [rcx+4], xmm2
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm3
    vmovss  dword ptr [rcx+18h], xmm0
  }
  v30->vertexCount += 4;
  v30->indexCount += 6;
}

/*
==============
RB_DrawStretchPicFlipST
==============
*/

void __fastcall RB_DrawStretchPicFlipST(GfxCmdBufContext *gfxContext, const Material *material, double x, double y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  bool v19; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v30; 
  GfxCmdBufContext v40; 
  GfxCmdBufContext v41[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  source = gfxContext->source;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = gfxContext;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  v19 = source->viewMode == VIEW_MODE_2D;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovups xmmword ptr [rax-38h], xmm0
  }
  if ( !v19 )
  {
    __asm { vmovups xmmword ptr [rax-48h], xmm0 }
    RB_EndSurfaceIfNeeded(&v40);
    R_Set2D(source);
  }
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v41[0].source->viewStatsTarget = GFX_VIEW_STATS_2D;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_SetTessTechnique(v41, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_CheckTessOverflow(v41, 4u, 6u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_38], xmm0
  }
  Tess = R_GetTess(v41);
  __asm
  {
    vmovss  xmm1, [rsp+68h+arg_30]
    vaddss  xmm0, xmm7, [rsp+68h+arg_20]
    vmovss  xmm3, [rsp+68h+arg_38]
  }
  vertexCount = Tess->vertexCount;
  v30 = Tess;
  __asm { vmovss  xmm2, [rsp+68h+arg_48] }
  Tess->indices[Tess->indexCount] = vertexCount + 3;
  Tess->indices[Tess->indexCount + 1] = vertexCount;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 3] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 4] = vertexCount;
  Tess->indices[Tess->indexCount + 5] = vertexCount + 1;
  _RAX = (_DWORD *)Tess->verts[Tess->vertexCount].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm7
    vmovss  dword ptr [rax+4], xmm6
  }
  _RAX[2] = 0;
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm1
    vmovss  dword ptr [rax+18h], xmm3
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 1].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vmovss  dword ptr [rcx+4], xmm6
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm1
    vmovss  dword ptr [rcx+18h], xmm2
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 2].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vaddss  xmm1, xmm6, [rsp+68h+arg_28]
    vmovss  xmm0, [rsp+68h+arg_40]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rcx+4], xmm1
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  dword ptr [rcx+18h], xmm2
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 3].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
    vmovss  dword ptr [rcx+4], xmm1
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  dword ptr [rcx+18h], xmm3
  }
  v30->vertexCount += 4;
  v30->indexCount += 6;
}

/*
==============
RB_DrawStretchPicRotate
==============
*/

void __fastcall RB_DrawStretchPicRotate(GfxCmdBufContext *gfxContext, const Material *material, double x, double y, float w, float h, float s0, float t0, float s1, float t1, float sinAngle, float cosAngle, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *v27; 
  materialCommands_t *Tess; 
  __int64 vertexCount_low; 
  materialCommands_t *v46; 
  __int64 indexCount; 
  GfxCmdBufContext v66; 
  GfxCmdBufContext v67; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  _RAX = gfxContext->source;
  __asm
  {
    vmovaps xmm10, xmm3
    vmovaps xmm11, xmm2
    vmovups [rsp+0A8h+var_88], xmm0
  }
  v27 = _RAX;
  __asm { vmovss  xmm8, dword ptr [rax+2D9Ch] }
  if ( _RAX->viewMode != VIEW_MODE_2D )
  {
    __asm { vmovups [rsp+0A8h+var_78], xmm0 }
    RB_EndSurfaceIfNeeded(&v67);
    R_Set2D(v27);
  }
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v66.source->viewStatsTarget = GFX_VIEW_STATS_2D;
  __asm { vmovups [rsp+0A8h+var_88], xmm0 }
  RB_SetTessTechnique(&v66, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  __asm
  {
    vmovss  xmm1, [rsp+0A8h+arg_50]
    vmulss  xmm0, xmm1, [rsp+0A8h+arg_20]
    vmovss  xmm3, [rsp+0A8h+arg_58]
    vmulss  xmm1, xmm1, [rsp+0A8h+arg_28]
    vmulss  xmm7, xmm3, [rsp+0A8h+arg_20]
    vmulss  xmm9, xmm3, [rsp+0A8h+arg_28]
    vmulss  xmm6, xmm0, xmm8
    vdivss  xmm0, xmm1, xmm8
    vxorps  xmm8, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+0A8h+var_88], xmm0
  }
  RB_CheckTessOverflow(&v66, 4u, 6u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+0A8h+var_88], xmm0
  }
  Tess = R_GetTess(&v66);
  __asm
  {
    vmovss  xmm3, [rsp+0A8h+arg_38]
    vmovss  xmm4, [rsp+0A8h+arg_30]
    vmovss  xmm2, [rsp+0A8h+arg_40]
  }
  vertexCount_low = LOWORD(Tess->vertexCount);
  v46 = Tess;
  indexCount = (int)Tess->indexCount;
  Tess->vertexCount += 4;
  __asm
  {
    vaddss  xmm0, xmm7, xmm11
    vaddss  xmm1, xmm6, xmm10
  }
  Tess->indexCount = indexCount + 6;
  Tess->indices[indexCount] = vertexCount_low + 3;
  Tess->indices[indexCount + 1] = vertexCount_low;
  Tess->indices[indexCount + 2] = vertexCount_low + 2;
  Tess->indices[indexCount + 3] = vertexCount_low + 2;
  Tess->indices[indexCount + 4] = vertexCount_low;
  Tess->indices[indexCount + 5] = vertexCount_low + 1;
  _RAX = (_DWORD *)Tess->verts[(unsigned int)vertexCount_low].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm11
    vmovss  dword ptr [rax+4], xmm10
  }
  _RAX[2] = 0;
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm4
    vmovss  dword ptr [rax+18h], xmm3
  }
  _RAX = (_DWORD *)v46->verts[vertexCount_low + 1].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm0
    vmovss  dword ptr [rax+4], xmm1
  }
  _RAX[2] = 0;
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm2
    vmovss  dword ptr [rax+18h], xmm3
  }
  _RAX = (_DWORD *)v46->verts[vertexCount_low + 2].xyzw.v;
  __asm { vmovss  xmm3, [rsp+0A8h+arg_48] }
  _RAX[2] = 0;
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  _RAX[3] = 1065353216;
  __asm
  {
    vaddss  xmm0, xmm8, xmm0
    vmovss  dword ptr [rax], xmm0
    vaddss  xmm1, xmm9, xmm1
    vmovss  dword ptr [rax+4], xmm1
  }
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm2
    vmovss  dword ptr [rax+18h], xmm3
    vaddss  xmm0, xmm8, xmm11
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vaddss  xmm1, xmm9, xmm10
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  _RAX = (_DWORD *)v46->verts[vertexCount_low + 3].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm0
    vmovss  dword ptr [rax+4], xmm1
  }
  _RAX[2] = 0;
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm4
    vmovss  dword ptr [rax+18h], xmm3
  }
}

/*
==============
RB_DrawStretchPic_LargeTriangle
==============
*/

void __fastcall RB_DrawStretchPic_LargeTriangle(GfxCmdBufContext *gfxContext, const Material *material, double x, double y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  bool v20; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v31; 
  GfxCmdBufContext v51; 
  GfxCmdBufContext v52[4]; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  source = gfxContext->source;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = gfxContext;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  v20 = source->viewMode == VIEW_MODE_2D;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm8, xmm2
    vmovups xmmword ptr [rax-48h], xmm0
  }
  if ( !v20 )
  {
    __asm { vmovups xmmword ptr [rax-58h], xmm0 }
    RB_EndSurfaceIfNeeded(&v51);
    R_Set2D(source);
  }
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v52[0].source->viewStatsTarget = GFX_VIEW_STATS_2D;
  __asm { vmovups [rsp+78h+var_48], xmm0 }
  RB_SetTessTechnique(v52, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+78h+var_48], xmm0
  }
  RB_CheckTessOverflow(v52, 3u, 3u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+78h+var_48], xmm0
  }
  Tess = R_GetTess(v52);
  __asm
  {
    vmovss  xmm5, [rsp+78h+arg_30]
    vmovss  xmm4, cs:__real@40000000
    vmovss  xmm6, [rsp+78h+arg_38]
  }
  vertexCount = Tess->vertexCount;
  v31 = Tess;
  __asm
  {
    vmulss  xmm1, xmm4, [rsp+78h+arg_20]
    vmovss  xmm0, [rsp+78h+arg_40]
    vaddss  xmm2, xmm1, xmm8
  }
  Tess->indices[Tess->indexCount] = vertexCount;
  __asm { vsubss  xmm1, xmm0, xmm5 }
  Tess->indices[Tess->indexCount + 1] = vertexCount + 1;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  _RAX = (_DWORD *)Tess->verts[Tess->vertexCount].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax], xmm8
    vmovss  dword ptr [rax+4], xmm7
  }
  _RAX[2] = 0;
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm5
    vmovss  dword ptr [rax+18h], xmm6
  }
  _RCX = (_DWORD *)v31->verts[v31->vertexCount + 1].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm2
    vmovss  dword ptr [rcx+4], xmm7
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+18h], xmm6
    vmulss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm4, [rsp+78h+arg_28]
    vaddss  xmm3, xmm2, xmm5
    vmovss  dword ptr [rcx+14h], xmm3
  }
  _RCX = (_DWORD *)v31->verts[v31->vertexCount + 2].xyzw.v;
  __asm
  {
    vaddss  xmm2, xmm1, xmm7
    vmovss  dword ptr [rcx], xmm8
    vmovss  dword ptr [rcx+4], xmm2
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm5
    vmovss  xmm0, [rsp+78h+arg_48]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  _R11 = &v53;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vsubss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm3, xmm2, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovss  dword ptr [rcx+18h], xmm3
  }
  v31->vertexCount += 3;
  v31->indexCount += 3;
}

/*
==============
RB_DrawTaskGraph
==============
*/
char RB_DrawTaskGraph(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ComputeCmdBufState *state; 
  float v18; 
  GfxCmdBufContext v19; 
  R_RT_ColorHandle v20; 
  R_RT_ColorHandle result; 
  vec4_t mrtColor; 
  R_RT_Group rtGroup; 

  _RBX = gfxContext;
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 11) & 0x100) == 0 )
    return 0;
  RB_Draw3DScene_FreeRts();
  state = _RBX->state;
  _RBX->source->input.data = data;
  R_BackendGpuStatus_Update(state, FINISH_COMPUTE_CMDS);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+1A8h+var_168], xmm0
  }
  RB_FinishComputeCmds(&v19, data);
  if ( viewInfo->viewportFeatures.m_taskGraphIndex == -1 )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f0000003e80000000000000
      vmovaps [rsp+1A8h+var_28], xmm6
      vmovups xmm6, xmmword ptr [rbx]
      vmovups xmmword ptr [rsp+1A8h+mrtColor], xmm0
    }
    v19.source = (GfxCmdBufSourceState *)data;
    R_LockGfxImmediateContext();
    _RAX = R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+1A8h+var_158], ymm0
    }
    R_RT_Group::AssignColor(&rtGroup, &v20);
    __asm { vpextrq rbx, xmm6, 1 }
    RB_SetWaitFlipOncePerFrame(_RBX);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+1A8h+var_180], xmm0
    }
    R_ClearRtGroup(_RBX, &rtGroup, 0x3Fu, &mrtColor, 1u, v18, 0, PIPE_FLUSH_FULL);
    R_UnlockGfxImmediateContext();
    __asm { vmovaps xmm6, [rsp+1A8h+var_28] }
  }
  else
  {
    R_BackendGpuStatus_Update(_RBX->state, DRAW_TASK_GRAPH);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+1A8h+var_168], xmm0
    }
    RB_TG_Render(&v19, viewInfo, data);
  }
  R_WaitSkippedDrawWorkerCmds(data);
  return 1;
}

/*
==============
RB_DrawText
==============
*/

void __fastcall RB_DrawText(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, double x, float y, const GfxColor color)
{
  int pixelHeight; 
  bool DoesGlyphUseDistanceField; 
  const Material *v16; 
  int v18; 
  GfxCmdBufContext v19; 
  DrawTextPositionSettings v20; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+arg_20]
    vmovss  dword ptr [rax-44h], xmm0
    vmovss  xmm0, cs:__real@3f800000
  }
  _RBX = gfxContext;
  v20.mode = POSITION_2D;
  pixelHeight = font->pixelHeight;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rax-40h], xmm0
    vmovss  dword ptr [rax-20h], xmm0
    vmovss  dword ptr [rax-1Ch], xmm0
    vmovss  dword ptr [rax-48h], xmm3
    vmovss  dword ptr [rax-3Ch], xmm1
  }
  v20.tracking = 0;
  DoesGlyphUseDistanceField = FontCache_DoesGlyphUseDistanceField(pixelHeight);
  v16 = rgp.fontMaterial[0];
  if ( DoesGlyphUseDistanceField )
    v16 = rgp.fontSDFMaterial[0];
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v18 = font->pixelHeight;
  __asm { vmovups [rsp+0C8h+var_58], xmm0 }
  DrawText(&v19, text, font, v18, &v20, color, 0x7FFFFFFF, 0, 0, 0, v16, rgp.iconMaterial, NULL, NULL);
}

/*
==============
RB_DrawTextInSpace
==============
*/
void RB_DrawTextInSpace(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, const vec3_t *org, const float size, const vec3_t *xDir, const vec3_t *yDir, unsigned int color, const FontGlowStyle *glowStyle, const bool centerText)
{
  int MinHeightForDistanceField; 
  const Material *v25; 
  int v27; 
  GfxCmdBufSourceState *source; 
  __int64 v42; 
  FontCacheFXFlags v49; 
  unsigned int CharFromString; 
  unsigned int v51; 
  char *texta; 
  FontCacheFXFlags flags; 
  GfxCmdBufContext v99; 
  CachedGlyph outGlyph; 
  GfxCmdBufContext v101; 
  vec3_t v102; 
  vec3_t v103; 
  char v104; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  _RSI = org;
  texta = (char *)text;
  _R14 = gfxContext;
  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3900, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  if ( !font && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3901, ASSERT_TYPE_ASSERT, "(font)", (const char *)&queryFormat, "font") )
    __debugbreak();
  MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
  v25 = rgp.fontSDFMaterial[0];
  __asm { vmovss  xmm0, [rbp+0A0h+arg_20] }
  if ( glowStyle )
    v25 = rgp.fontGlowMaterial[0];
  v27 = MinHeightForDistanceField;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vdivss  xmm6, xmm0, xmm1
  }
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3908, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rbp+0A0h+var_100], xmm0
  }
  flags = glowStyle != NULL;
  RB_EndSurfaceIfNeeded(&v101);
  source = _R14->source;
  R_Set3D(_R14->source);
  __asm
  {
    vmovss  xmm7, dword ptr [rsi]
    vmovss  xmm8, dword ptr [rsi+4]
    vmovss  xmm9, dword ptr [rsi+8]
    vmulss  xmm10, xmm6, dword ptr [rax]
    vmulss  xmm11, xmm6, dword ptr [rax+4]
    vmulss  xmm12, xmm6, dword ptr [rax+8]
    vmulss  xmm13, xmm6, dword ptr [rax]
    vmulss  xmm14, xmm6, dword ptr [rax+4]
    vmulss  xmm6, xmm6, dword ptr [rax+8]
  }
  if ( glowStyle )
    RB_SetFontGlowStyleCodeConstants(source, glowStyle);
  if ( centerText )
  {
    v42 = -1i64;
    do
      ++v42;
    while ( texta[v42] );
    R_TextWidth(texta, v42, font, v27);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, cs:__real@bf000000
      vmulss  xmm1, xmm2, xmm10
      vaddss  xmm7, xmm1, xmm7
      vmulss  xmm1, xmm2, xmm12
      vmulss  xmm0, xmm2, xmm11
      vaddss  xmm9, xmm1, xmm9
      vaddss  xmm8, xmm0, xmm8
    }
  }
  if ( *texta )
  {
    v49 = flags;
    do
    {
      CharFromString = SEH_ReadCharFromString((const char **)&texta);
      if ( !texta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3937, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
        __debugbreak();
      R_GetCharacterGlyphWithFlags(font, v27, CharFromString, &outGlyph, v49);
      v51 = R_ProcessGPadLetterColor(color, CharFromString);
      __asm
      {
        vxorps  xmm4, xmm4, xmm4
        vcvtsi2ss xmm4, xmm4, ecx
        vmulss  xmm0, xmm10, xmm4
        vaddss  xmm2, xmm0, xmm7
        vmulss  xmm0, xmm11, xmm4
        vaddss  xmm3, xmm0, xmm8
        vmulss  xmm0, xmm12, xmm4
        vxorps  xmm5, xmm5, xmm5
        vcvtsi2ss xmm5, xmm5, ecx
        vmulss  xmm1, xmm13, xmm5
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rbp+0A0h+var_100], xmm2
        vmulss  xmm1, xmm14, xmm5
        vaddss  xmm2, xmm3, xmm1
        vaddss  xmm3, xmm0, xmm9
        vmovss  dword ptr [rbp+0A0h+var_100+4], xmm2
        vmulss  xmm1, xmm6, xmm5
        vaddss  xmm2, xmm3, xmm1
        vmovss  dword ptr [rbp+0A0h+var_100+8], xmm2
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, eax
        vmulss  xmm0, xmm10, xmm3
        vmovss  [rbp+0A0h+var_E0], xmm0
        vmulss  xmm0, xmm12, xmm3
        vmulss  xmm1, xmm11, xmm3
        vmovss  [rbp+0A0h+var_D8], xmm0
        vmovss  [rbp+0A0h+var_DC], xmm1
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax
        vmulss  xmm0, xmm13, xmm2
        vmulss  xmm1, xmm14, xmm2
        vmovss  [rbp+0A0h+var_F0], xmm0
        vmovss  [rbp+0A0h+var_EC], xmm1
        vmovups xmm1, xmmword ptr [r14]
        vmulss  xmm0, xmm6, xmm2
        vmovss  [rbp+0A0h+var_E8], xmm0
        vmovups [rsp+1A0h+var_150], xmm1
      }
      RB_DrawCharInSpace(&v99, v25, (const vec3_t *)&v101, &v103, &v102, &outGlyph, v51);
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax
        vmulss  xmm0, xmm10, xmm2
        vaddss  xmm7, xmm7, xmm0
        vmulss  xmm0, xmm12, xmm2
        vmulss  xmm1, xmm11, xmm2
        vaddss  xmm9, xmm9, xmm0
        vaddss  xmm8, xmm8, xmm1
      }
    }
    while ( *texta );
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+1A0h+var_150], xmm0
  }
  RB_EndSurfaceIfNeeded(&v99);
  _R11 = &v104;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
RB_DrawTextWithSize
==============
*/

void __fastcall RB_DrawTextWithSize(GfxCmdBufContext *gfxContext, const char *text, GfxFont *font, double size, float x, float y, const GfxColor color)
{
  int pixelHeight; 
  bool DoesGlyphUseDistanceField; 
  const Material *v21; 
  GfxCmdBufContext v23; 
  DrawTextPositionSettings v24; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+arg_20]
    vmovss  xmm1, [rsp+0C8h+arg_28]
    vmovss  dword ptr [rax-48h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax-3Ch], xmm0
    vmovss  dword ptr [rax-44h], xmm1
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvttss2si edi, xmm3
    vcvtsi2ss xmm0, xmm0, edi
    vmovss  dword ptr [rax-40h], xmm1
    vmovss  dword ptr [rax-20h], xmm1
    vdivss  xmm1, xmm3, xmm0
  }
  _RBX = gfxContext;
  v24.mode = POSITION_2D;
  pixelHeight = font->pixelHeight;
  __asm { vmovss  dword ptr [rax-1Ch], xmm1 }
  v24.tracking = 0;
  DoesGlyphUseDistanceField = FontCache_DoesGlyphUseDistanceField(pixelHeight);
  v21 = rgp.fontMaterial[0];
  if ( DoesGlyphUseDistanceField )
    v21 = rgp.fontSDFMaterial[0];
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+0C8h+var_58], xmm0
  }
  DrawText(&v23, text, font, _EDI, &v24, color, 0x7FFFFFFF, 0, 0, 0, v21, rgp.iconMaterial, NULL, NULL);
}

/*
==============
RB_DrawTiltedRect
==============
*/

void __fastcall RB_DrawTiltedRect(GfxCmdBufContext *gfxContext, const Material *material, double x, double y, float w, float h, float s0, float t0, float s1, float t1, unsigned int color, GfxPrimStatsTarget primStatsTarget)
{
  GfxCmdBufSourceState *source; 
  bool v19; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  materialCommands_t *v30; 
  GfxCmdBufContext v42; 
  GfxCmdBufContext v43[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  source = gfxContext->source;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RBX = gfxContext;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  v19 = source->viewMode == VIEW_MODE_2D;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovups xmmword ptr [rax-38h], xmm0
  }
  if ( !v19 )
  {
    __asm { vmovups xmmword ptr [rax-48h], xmm0 }
    RB_EndSurfaceIfNeeded(&v42);
    R_Set2D(source);
  }
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v43[0].source->viewStatsTarget = GFX_VIEW_STATS_2D;
  __asm { vmovups [rsp+68h+var_38], xmm0 }
  RB_SetTessTechnique(v43, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_38], xmm0
  }
  RB_CheckTessOverflow(v43, 4u, 6u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_38], xmm0
  }
  Tess = R_GetTess(v43);
  __asm
  {
    vsubss  xmm0, xmm6, [rsp+68h+arg_28]
    vmovss  xmm2, [rsp+68h+arg_38]
    vmovss  xmm5, [rsp+68h+arg_30]
  }
  vertexCount = Tess->vertexCount;
  v30 = Tess;
  __asm { vmovss  xmm1, [rsp+68h+arg_40] }
  Tess->indices[Tess->indexCount] = vertexCount + 3;
  Tess->indices[Tess->indexCount + 1] = vertexCount;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 3] = vertexCount + 2;
  Tess->indices[Tess->indexCount + 4] = vertexCount;
  Tess->indices[Tess->indexCount + 5] = vertexCount + 1;
  _RAX = (_DWORD *)Tess->verts[Tess->vertexCount].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rax+4], xmm0
    vaddss  xmm0, xmm7, [rsp+68h+arg_20]
    vmovss  dword ptr [rax], xmm7
  }
  _RAX[2] = 0;
  _RAX[3] = 1065353216;
  _RAX[7] = 1073643391;
  _RAX[4] = color;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm5
    vmovss  dword ptr [rax+18h], xmm2
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 1].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vmovss  dword ptr [rcx+4], xmm6
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm1
    vmovss  dword ptr [rcx+18h], xmm2
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 2].xyzw.v;
  __asm
  {
    vaddss  xmm0, xmm6, [rsp+68h+arg_28]
    vmovss  xmm2, [rsp+68h+arg_48]
    vmovss  dword ptr [rcx+4], xmm0
    vsubss  xmm0, xmm7, [rsp+68h+arg_20]
    vmovss  dword ptr [rcx], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm1
    vmovss  dword ptr [rcx+18h], xmm2
  }
  _RCX = (_DWORD *)v30->verts[v30->vertexCount + 3].xyzw.v;
  __asm
  {
    vmovss  dword ptr [rcx+4], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rcx], xmm0
  }
  _RCX[2] = 0;
  _RCX[3] = 1065353216;
  _RCX[7] = 1073643391;
  _RCX[4] = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm5
    vmovss  dword ptr [rcx+18h], xmm2
  }
  v30->vertexCount += 4;
  v30->indexCount += 6;
}

/*
==============
RB_DrawTriangle2D
==============
*/

void __fastcall RB_DrawTriangle2D(GfxCmdBufContext *gfxContext, double x0, double y0, double x1, float y1, float x2, float y2, unsigned int color)
{
  GfxCmdBufSourceState *source; 
  materialCommands_t *Tess; 
  unsigned __int16 vertexCount; 
  GfxCmdBufContext v31; 

  source = gfxContext->source;
  _RBX = gfxContext;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  if ( source->viewMode != VIEW_MODE_2D )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups [rsp+68h+var_48], xmm0
    }
    RB_EndSurfaceIfNeeded(&v31);
    R_Set2D(source);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_48], xmm0
  }
  source->viewStatsTarget = GFX_VIEW_STATS_2D;
  RB_SetTessTechnique(&v31, rgp.whiteMaterial, TECHNIQUE_EMISSIVE, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_48], xmm0
  }
  RB_CheckTessOverflow(&v31, 3u, 3u);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+68h+var_48], xmm0
    vmovss  xmm0, [rsp+68h+arg_20]
    vmovss  xmm1, [rsp+68h+arg_30]
  }
  Tess = R_GetTess(&v31);
  vertexCount = Tess->vertexCount;
  Tess->indices[Tess->indexCount] = vertexCount;
  Tess->indices[Tess->indexCount + 1] = vertexCount + 1;
  Tess->indices[Tess->indexCount + 2] = vertexCount + 2;
  _RAX = (__int64)&Tess->verts[Tess->vertexCount];
  __asm
  {
    vmovss  dword ptr [rax], xmm8
    vmovaps xmm8, [rsp+68h+var_38]
    vmovss  dword ptr [rax+4], xmm7
    vmovaps xmm7, [rsp+68h+var_28]
  }
  *(_DWORD *)(_RAX + 8) = 0;
  *(_DWORD *)(_RAX + 12) = 1065353216;
  *(_DWORD *)(_RAX + 28) = 1073643391;
  *(_DWORD *)(_RAX + 16) = color;
  *(_QWORD *)(_RAX + 20) = 0i64;
  _RCX = (__int64)&Tess->verts[Tess->vertexCount + 1];
  __asm
  {
    vmovss  dword ptr [rcx], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vmovss  dword ptr [rcx+4], xmm0
    vmovss  xmm0, [rsp+68h+arg_28]
  }
  *(_DWORD *)(_RCX + 8) = 0;
  *(_DWORD *)(_RCX + 12) = 1065353216;
  *(_DWORD *)(_RCX + 28) = 1073643391;
  *(_DWORD *)(_RCX + 16) = color;
  *(_QWORD *)(_RCX + 20) = 0i64;
  _RCX = (__int64)&Tess->verts[Tess->vertexCount + 2];
  __asm
  {
    vmovss  dword ptr [rcx], xmm0
    vmovss  dword ptr [rcx+4], xmm1
  }
  *(_DWORD *)(_RCX + 8) = 0;
  *(_DWORD *)(_RCX + 12) = 1065353216;
  *(_DWORD *)(_RCX + 28) = 1073643391;
  *(_DWORD *)(_RCX + 16) = color;
  *(_QWORD *)(_RCX + 20) = 0i64;
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
  __int16 v19; 
  int v21; 
  materialCommands_t *Tess; 
  int v24; 
  materialCommands_t *v25; 
  int v26; 
  __int64 v27; 
  unsigned int *p_indexCount; 
  unsigned __int16 **p_indices; 
  unsigned int *p_vertexCount; 
  unsigned __int16 *v34; 
  unsigned __int64 v37; 
  const unsigned __int16 *v39; 
  __int64 v40; 
  __int64 v48; 
  unsigned __int16 v49; 
  __int64 v50; 
  int v57; 
  __int64 v58; 
  GfxColor v59; 
  int v87; 
  GfxCmdBufContext v88; 
  __int128 v89; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _R14 = gfxContext;
  *(_QWORD *)&v89 = gfxContext;
  __asm { vmovups [rsp+0C8h+var_98], xmm0 }
  RB_EndSurfaceIfNeeded(&v88);
  R_Set2D(_R14->source);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+0C8h+var_98], xmm0
  }
  RB_SetTessTechnique(&v88, material, techType, GFX_PRIM_STATS_DEBUG);
  v19 = vertexCount;
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+0C8h+var_98], xmm0
  }
  v21 = vertexCount;
  RB_CheckTessOverflow(&v88, vertexCount, indexCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+0C8h+var_98], xmm0
  }
  Tess = R_GetTess(&v88);
  v24 = 0;
  v25 = Tess;
  v26 = 0;
  if ( indexCount > 0 && (unsigned int)indexCount >= 0x20 )
  {
    v27 = (int)Tess->indexCount;
    p_indexCount = &Tess->indexCount;
    _ECX = SLOWORD(Tess->vertexCount);
    p_indices = &Tess->indices;
    _R11 = Tess->indices;
    __asm { vmovd   xmm2, ecx }
    p_vertexCount = &Tess->vertexCount;
    v34 = &_R11[v27];
    __asm
    {
      vpunpcklwd xmm2, xmm2, xmm2
      vpshufd xmm2, xmm2, 0
    }
    v37 = (unsigned __int64)&_R11[indexCount - 1 + (int)v27];
    if ( (v34 > &indices[indexCount - 1] || v37 < (unsigned __int64)indices) && (v34 > (unsigned __int16 *)p_indices || v37 < (unsigned __int64)p_indices) && (v34 > (unsigned __int16 *)p_indexCount || v37 < (unsigned __int64)p_indexCount) && (v34 > (unsigned __int16 *)p_vertexCount || v37 < (unsigned __int64)p_vertexCount) )
    {
      _R10 = (unsigned int)(v27 + 16);
      v39 = indices + 16;
      v40 = 0i64;
      do
      {
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-20h] }
        _RAX = (unsigned int)(v27 + v26);
        v40 += 32i64;
        __asm
        {
          vmovdqu xmmword ptr [r11+rax*2], xmm1
          vpaddw  xmm1, xmm2, xmmword ptr [rdx-10h]
        }
        _RAX = (unsigned int)(_R10 - 8);
        v26 += 32;
        v39 += 32;
        __asm { vmovdqu xmmword ptr [r11+rax*2], xmm1 }
        _RAX = (unsigned int)(_R10 + 8);
        __asm
        {
          vpaddw  xmm1, xmm2, xmmword ptr [rdx-40h]
          vmovdqu xmmword ptr [r11+r10*2], xmm1
        }
        _R10 = (unsigned int)(_R10 + 32);
        __asm
        {
          vpaddw  xmm1, xmm2, xmmword ptr [rdx-30h]
          vmovdqu xmmword ptr [r11+rax*2], xmm1
        }
      }
      while ( v40 < indexCount - indexCount % 32 );
    }
    _R14 = (GfxCmdBufContext *)v89;
    v19 = vertexCount;
    v21 = vertexCount;
  }
  v48 = v26;
  if ( v26 < (__int64)indexCount )
  {
    do
    {
      v49 = indices[v48++];
      v50 = v26 + v25->indexCount;
      ++v26;
      v25->indices[v50] = LOWORD(v25->vertexCount) + v49;
    }
    while ( v48 < indexCount );
  }
  if ( v19 > 0 )
  {
    _R8 = 0i64;
    _R10 = &xyzw->v[2];
    _RDI = st;
    _R11 = &normal->v[1];
    __asm
    {
      vmovaps [rsp+0C8h+var_48], xmm6
      vmovaps [rsp+0C8h+var_58], xmm7
      vmovaps [rsp+0C8h+var_68], xmm8
    }
    do
    {
      __asm
      {
        vmovss  xmm4, dword ptr [r11]
        vmovss  xmm3, dword ptr [r11-4]
      }
      v57 = *((_DWORD *)_R10 - 2);
      v58 = v24 + v25->vertexCount;
      v59 = color[_R8];
      ++v24;
      _RCX = (_DWORD *)v25->verts[v58].xyzw.v;
      __asm { vmovss  xmm5, dword ptr [r11+4] }
      _R11 += 3;
      __asm
      {
        vmovss  xmm2, dword ptr [r10+4]
        vmovss  xmm1, dword ptr [r10]
        vmovss  xmm0, dword ptr [r10-4]
        vmovss  xmm8, dword ptr [rdi+r8*8+4]
        vmovss  xmm7, dword ptr [rdi+r8*8]
        vmovss  dword ptr [rcx+4], xmm0
      }
      *_RCX = v57;
      _R10 += 4;
      __asm
      {
        vmovss  dword ptr [rcx+8], xmm1
        vmovss  dword ptr [rcx+0Ch], xmm2
      }
      ++_R8;
      HIDWORD(v89) = 0;
      __asm
      {
        vmovups xmm6, [rsp+0C8h+var_88]
        vmovss  xmm6, xmm6, xmm3
        vinsertps xmm6, xmm6, xmm4, 10h
        vinsertps xmm6, xmm6, xmm5, 20h ; ' '
        vmaxps  xmm0, xmm6, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
        vcvttps2dq xmm3, xmm2
        vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm4, 0EEh ; 'î'
        vpor    xmm1, xmm0, xmm4
        vpshufd xmm0, xmm1, 55h ; 'U'
        vpor    xmm1, xmm0, xmm1
        vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
      }
      _RCX[4] = v59.packed;
      __asm
      {
        vblendps xmm0, xmm6, xmm2, 1
        vmovss  [rsp+0C8h+var_A8], xmm0
      }
      _RCX[7] = v87;
      __asm
      {
        vmovss  dword ptr [rcx+14h], xmm7
        vmovss  dword ptr [rcx+18h], xmm8
        vmovups [rsp+0C8h+var_88], xmm6
      }
    }
    while ( _R8 < v19 );
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_68]
      vmovaps xmm7, [rsp+0C8h+var_58]
      vmovaps xmm6, [rsp+0C8h+var_48]
    }
  }
  __asm { vmovups xmm0, xmmword ptr [r14] }
  v25->indexCount += indexCount;
  v25->vertexCount += v21;
  __asm { vmovups [rsp+0C8h+var_98], xmm0 }
  RB_EndTessSurfaceInternal(&v88, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2824)");
}

/*
==============
RB_DrawTriangles_Internal3D
==============
*/
void RB_DrawTriangles_Internal3D(GfxCmdBufContext *gfxContext, const Material *material, MaterialTechniqueType techType, unsigned __int8 dimensions, __int16 indexCount, const unsigned __int16 *indices, __int16 vertexCount, const vec4_t *xyzw, const vec3_t *normal, const GfxColor *color, const vec2_t *st)
{
  __int16 v19; 
  int v21; 
  materialCommands_t *Tess; 
  int v24; 
  materialCommands_t *v25; 
  int v26; 
  __int64 v27; 
  unsigned int *p_indexCount; 
  unsigned __int16 **p_indices; 
  unsigned int *p_vertexCount; 
  unsigned __int16 *v34; 
  unsigned __int64 v37; 
  const unsigned __int16 *v39; 
  __int64 v40; 
  __int64 v48; 
  unsigned __int16 v49; 
  __int64 v50; 
  int v57; 
  __int64 v58; 
  GfxColor v59; 
  int v87; 
  GfxCmdBufContext v88; 
  __int128 v89; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _R14 = gfxContext;
  *(_QWORD *)&v89 = gfxContext;
  __asm { vmovups [rsp+0C8h+var_98], xmm0 }
  RB_EndSurfaceIfNeeded(&v88);
  R_Set3D(_R14->source);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+0C8h+var_98], xmm0
  }
  RB_SetTessTechnique(&v88, material, techType, GFX_PRIM_STATS_DEBUG);
  v19 = vertexCount;
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+0C8h+var_98], xmm0
  }
  v21 = vertexCount;
  RB_CheckTessOverflow(&v88, vertexCount, indexCount);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+0C8h+var_98], xmm0
  }
  Tess = R_GetTess(&v88);
  v24 = 0;
  v25 = Tess;
  v26 = 0;
  if ( indexCount > 0 && (unsigned int)indexCount >= 0x20 )
  {
    v27 = (int)Tess->indexCount;
    p_indexCount = &Tess->indexCount;
    _ECX = SLOWORD(Tess->vertexCount);
    p_indices = &Tess->indices;
    _R11 = Tess->indices;
    __asm { vmovd   xmm2, ecx }
    p_vertexCount = &Tess->vertexCount;
    v34 = &_R11[v27];
    __asm
    {
      vpunpcklwd xmm2, xmm2, xmm2
      vpshufd xmm2, xmm2, 0
    }
    v37 = (unsigned __int64)&_R11[indexCount - 1 + (int)v27];
    if ( (v34 > &indices[indexCount - 1] || v37 < (unsigned __int64)indices) && (v34 > (unsigned __int16 *)p_indices || v37 < (unsigned __int64)p_indices) && (v34 > (unsigned __int16 *)p_indexCount || v37 < (unsigned __int64)p_indexCount) && (v34 > (unsigned __int16 *)p_vertexCount || v37 < (unsigned __int64)p_vertexCount) )
    {
      _R10 = (unsigned int)(v27 + 16);
      v39 = indices + 16;
      v40 = 0i64;
      do
      {
        __asm { vpaddw  xmm1, xmm2, xmmword ptr [rdx-20h] }
        _RAX = (unsigned int)(v27 + v26);
        v40 += 32i64;
        __asm
        {
          vmovdqu xmmword ptr [r11+rax*2], xmm1
          vpaddw  xmm1, xmm2, xmmword ptr [rdx-10h]
        }
        _RAX = (unsigned int)(_R10 - 8);
        v26 += 32;
        v39 += 32;
        __asm { vmovdqu xmmword ptr [r11+rax*2], xmm1 }
        _RAX = (unsigned int)(_R10 + 8);
        __asm
        {
          vpaddw  xmm1, xmm2, xmmword ptr [rdx-40h]
          vmovdqu xmmword ptr [r11+r10*2], xmm1
        }
        _R10 = (unsigned int)(_R10 + 32);
        __asm
        {
          vpaddw  xmm1, xmm2, xmmword ptr [rdx-30h]
          vmovdqu xmmword ptr [r11+rax*2], xmm1
        }
      }
      while ( v40 < indexCount - indexCount % 32 );
    }
    _R14 = (GfxCmdBufContext *)v89;
    v19 = vertexCount;
    v21 = vertexCount;
  }
  v48 = v26;
  if ( v26 < (__int64)indexCount )
  {
    do
    {
      v49 = indices[v48++];
      v50 = v26 + v25->indexCount;
      ++v26;
      v25->indices[v50] = LOWORD(v25->vertexCount) + v49;
    }
    while ( v48 < indexCount );
  }
  if ( v19 > 0 )
  {
    _R8 = 0i64;
    _R10 = &xyzw->v[2];
    _RDI = st;
    _R11 = &normal->v[1];
    __asm
    {
      vmovaps [rsp+0C8h+var_48], xmm6
      vmovaps [rsp+0C8h+var_58], xmm7
      vmovaps [rsp+0C8h+var_68], xmm8
    }
    do
    {
      __asm
      {
        vmovss  xmm4, dword ptr [r11]
        vmovss  xmm3, dword ptr [r11-4]
      }
      v57 = *((_DWORD *)_R10 - 2);
      v58 = v24 + v25->vertexCount;
      v59 = color[_R8];
      ++v24;
      _RCX = (_DWORD *)v25->verts[v58].xyzw.v;
      __asm { vmovss  xmm5, dword ptr [r11+4] }
      _R11 += 3;
      __asm
      {
        vmovss  xmm2, dword ptr [r10+4]
        vmovss  xmm1, dword ptr [r10]
        vmovss  xmm0, dword ptr [r10-4]
        vmovss  xmm8, dword ptr [rdi+r8*8+4]
        vmovss  xmm7, dword ptr [rdi+r8*8]
        vmovss  dword ptr [rcx+4], xmm0
      }
      *_RCX = v57;
      _R10 += 4;
      __asm
      {
        vmovss  dword ptr [rcx+8], xmm1
        vmovss  dword ptr [rcx+0Ch], xmm2
      }
      ++_R8;
      HIDWORD(v89) = 0;
      __asm
      {
        vmovups xmm6, [rsp+0C8h+var_88]
        vmovss  xmm6, xmm6, xmm3
        vinsertps xmm6, xmm6, xmm4, 10h
        vinsertps xmm6, xmm6, xmm5, 20h ; ' '
        vmaxps  xmm0, xmm6, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
        vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
        vcvttps2dq xmm3, xmm2
        vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
        vpshufd xmm0, xmm4, 0EEh ; 'î'
        vpor    xmm1, xmm0, xmm4
        vpshufd xmm0, xmm1, 55h ; 'U'
        vpor    xmm1, xmm0, xmm1
        vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
      }
      _RCX[4] = v59.packed;
      __asm
      {
        vblendps xmm0, xmm6, xmm2, 1
        vmovss  [rsp+0C8h+var_A8], xmm0
      }
      _RCX[7] = v87;
      __asm
      {
        vmovss  dword ptr [rcx+14h], xmm7
        vmovss  dword ptr [rcx+18h], xmm8
        vmovups [rsp+0C8h+var_88], xmm6
      }
    }
    while ( _R8 < v19 );
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_68]
      vmovaps xmm7, [rsp+0C8h+var_58]
      vmovaps xmm6, [rsp+0C8h+var_48]
    }
  }
  __asm { vmovups xmm0, xmmword ptr [r14] }
  v25->indexCount += indexCount;
  v25->vertexCount += v21;
  __asm { vmovups [rsp+0C8h+var_98], xmm0 }
  RB_EndTessSurfaceInternal(&v88, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2851)");
}

/*
==============
RB_DrawUnitCube
==============
*/
void RB_DrawUnitCube(GfxCmdBufContext *gfxContext, const Material *material, GfxPrimStatsTarget primStatsTarget, bool flipNormals)
{
  materialCommands_t *Tess; 
  materialCommands_t *v20; 
  int v22; 
  char v23; 
  __int64 v24; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  unsigned int vertexCount; 
  unsigned __int16 v64; 
  __int64 v72; 
  __int64 v73; 
  bool v74; 
  __int16 v75; 
  __int16 v76; 
  __int16 v77; 
  int v82; 
  __int64 v83; 
  GfxCmdBufContext v85; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _R14 = gfxContext;
  if ( gfxContext->source->viewMode != VIEW_MODE_3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 1081, ASSERT_TYPE_ASSERT, "(gfxContext.source->viewMode == VIEW_MODE_3D)", (const char *)&queryFormat, "gfxContext.source->viewMode == VIEW_MODE_3D") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+108h+var_98], xmm0
  }
  RB_SetTessTechnique(&v85, material, TECHNIQUE_EMISSIVE, primStatsTarget);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+108h+var_98], xmm0
  }
  RB_CheckTessOverflow(&v85, 0x18u, 0x24u);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+108h+var_98], xmm0
  }
  Tess = R_GetTess(&v85);
  __asm
  {
    vmovss  xmm8, cs:__real@bf800000
    vmovss  xmm9, cs:__real@3f800000
  }
  _ER11 = 0;
  v20 = Tess;
  v83 = 0i64;
  _ER10 = 1;
  v22 = 0;
  v74 = !flipNormals;
  v82 = 0;
  v75 = flipNormals + 1;
  v23 = 0;
  v76 = 2 * !flipNormals + 1;
  v77 = 2 * flipNormals + 1;
  do
  {
    v24 = (unsigned int)v22 >> 1;
    _RCX = v22 & 1;
    __asm { vmovd   xmm1, r10d }
    _R15 = v24;
    __asm
    {
      vmovd   xmm0, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm8, xmm2
      vmovss  [rsp+108h+var_C0], xmm0
      vmovss  xmm6, [rsp+108h+var_C0]
      vmovd   xmm0, ecx
      vmovd   xmm1, r11d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm8, xmm2
      vmovss  [rsp+108h+var_BC], xmm0
      vmovss  xmm7, [rsp+108h+var_BC]
    }
    v37 = 2 * v24 + (v23 & 1);
    v38 = 0;
    v39 = 2 * v24 - _RCX;
    do
    {
      __asm { vmovd   xmm1, r11d }
      _EBP = (unsigned int)v38 >> 1;
      _ER14 = v38 & 1;
      __asm
      {
        vmovd   xmm0, ebp
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm9, xmm8, xmm2
        vmovss  [rsp+108h+var_BC], xmm0
        vmovd   xmm0, r14d
        vmovd   xmm1, r11d
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm9, xmm8, xmm2
        vmovss  [rsp+108h+var_C0], xmm0
      }
      if ( (unsigned int)_R15 >= 3 )
      {
        LODWORD(v73) = 3;
        LODWORD(v72) = _R15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      _RBX = (int)otherAxis[0][v37];
      __asm
      {
        vmulss  xmm0, xmm7, xmm6
        vmovss  dword ptr [rsp+r15*4+108h+var_98], xmm0
      }
      if ( (unsigned int)_RBX >= 3 )
      {
        LODWORD(v73) = 3;
        LODWORD(v72) = _RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_BC]
        vmovss  dword ptr [rsp+rbx*4+108h+var_98], xmm0
      }
      _RBX = (int)otherAxis[0][v39 + 1];
      if ( (unsigned int)_RBX >= 3 )
      {
        LODWORD(v73) = 3;
        LODWORD(v72) = otherAxis[0][v39 + 1];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      vertexCount = v20->vertexCount;
      __asm
      {
        vmovss  xmm0, [rsp+108h+var_C0]
        vmovss  dword ptr [rsp+rbx*4+108h+var_98], xmm0
        vmovss  xmm0, dword ptr [rsp+108h+var_98]
        vmovss  xmm1, dword ptr [rsp+108h+var_98+4]
      }
      _ER10 = 1;
      _RCX = (_DWORD *)v20->verts[v38 + vertexCount].xyzw.v;
      ++v38;
      _ER11 = 0;
      _RCX[3] = 1065353216;
      __asm
      {
        vmovss  dword ptr [rcx], xmm0
        vmovss  xmm0, dword ptr [rsp+108h+var_98+8]
        vmovss  dword ptr [rcx+8], xmm0
        vmovss  dword ptr [rcx+4], xmm1
      }
      _RCX[7] = 1073643391;
      _RCX[4] = -1;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm0, xmm0, ebp
        vcvtsi2ss xmm1, xmm1, r14d
        vmovss  dword ptr [rcx+14h], xmm0
        vmovss  dword ptr [rcx+18h], xmm1
      }
    }
    while ( v38 < 4 );
    v64 = v20->vertexCount;
    v20->indices[v20->indexCount] = v64 + v74 + 1;
    v20->indices[v20->indexCount + 1] = v64;
    v20->indices[v20->indexCount + 2] = v75 + v64;
    v20->indices[v20->indexCount + 3] = v76 + v64;
    v20->indices[v20->indexCount + 4] = v64 + 2;
    v23 = ++v83;
    v20->indices[v20->indexCount + 5] = v64 + v77;
    v20->vertexCount += 4;
    v22 = v82 + 1;
    v20->indexCount += 6;
    v82 = v22;
  }
  while ( v22 < 6 );
  _RAX = gfxContext;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rsp+108h+var_98], xmm0
  }
  RB_EndTessSurfaceInternal(&v85, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(1127)");
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
RB_EndFrame
==============
*/
void RB_EndFrame(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  bool v5; 
  unsigned __int16 frontendFramePass; 
  Online_VideoStreaming *Instance; 
  GfxCmdBufState *state; 
  GfxCmdBufState *v12; 
  unsigned __int64 v14; 
  GfxCmdBufContext v16; 
  GfxCmdBufContext v17; 
  R_RT_ColorHandle v18; 
  R_RT_ColorHandle v19; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v21; 

  _RDI = gfxContext;
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
  R_BackendGpuStatus_Update(_RDI->state, STREAM_BACKEND_FRAME_END);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+0E8h+var_B8], xmm0
  }
  RB_Stream_BackendFrameEnd(&v16, data);
  v5 = (data->drawType & 2) != 0;
  if ( (data->drawType & 2) != 0 && data->finishReady )
  {
    frontendFramePass = data->frontendFramePass;
    Instance = Online_VideoStreaming::GetInstance();
    if ( !Online_VideoStreaming::IsPlayerActive(Instance) || R_Cinematic_PendingSyncFrame() )
      RB_Cinematic_EndFrame(data);
    RB_HDRToSDR_Process(_RDI);
    RB_ClearGlobalBackEndData(data);
    R_LockGfxImmediateContext();
    R_GPU_EndTimer();
    R_ResetRenderTargets(_RDI->state);
    R_UnlockGfxImmediateContext();
    _RAX = R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    state = _RDI->state;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+0E8h+var_98], ymm0
    }
    R_AddRenderTargetTransition(state, &v18, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
    {
      _RAX = R_RT_GetGlobalColor(&v21, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
      v12 = _RDI->state;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups [rsp+0E8h+var_78], ymm0
      }
      R_AddRenderTargetTransition(v12, &v19, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    }
    R_LockGfxImmediateContext();
    R_BackendGpuStatus_Update(_RDI->state, END_TRANSITIONS);
    R_FlushResourceTransitions(_RDI->state);
    R_UnlockGfxImmediateContext();
    R_RT_BackendFrameEnd(frontendFramePass, 0);
    R_LockGfxImmediateContext();
    RB_InsertFrameEndQuery_GPUTimer();
    R_GPU_EndFrame();
    R_UnlockGfxImmediateContext();
    Profile2_Begin(66);
    R_LockGfxImmediateContext();
    R_BackendGpuStatus_Update(_RDI->state, SWAP_BUFFERS);
    R_LockGfxImmediateContext();
    v14 = R_FlushImmediateContext();
    R_DynamicRingBufferInsertGivenFence(&gfxBuf.dynamicIndexRingBuffer, v14);
    R_DynamicRingBufferInsertGivenFence(&gfxBuf.dynamicVertexRingBuffer, v14);
    R_EndFrameConstantBufferInfo(&g_dx.constantBufferInfo, v14);
    R_EndFrameDescriptorHeapInfo(&g_dx.backendDescHeapInfo, v14);
    R_UnlockGfxImmediateContext();
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rsp+0E8h+var_A8], xmm0
    }
    RB_SwapBuffers(&v17, v14);
    R_BackendGpuStatus_Update(_RDI->state, BACKEND_FINISHED);
    R_UnlockGfxImmediateContext();
    Profile2_End(66);
    Sys_ProfFrameSync();
    Profile2_End(65);
  }
  else
  {
    RB_ClearGlobalBackEndData(data);
    if ( v5 )
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

void __fastcall RB_ExecuteRenderCommands(GfxCmdBufContext *gfxContext, double _XMM1_8)
{
  materialCommands_t *Tess; 
  GfxCmdBufState *state; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  const char *m_location; 
  char v32; 
  char v33; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufSourceState *source; 
  unsigned int v38; 
  GfxImage *blackImage; 
  GfxImage *v41; 
  GfxCmdBufInput *v42; 
  const GfxWrappedBuffer *ConstantBuffer; 
  GfxCmdBufSourceState *v44; 
  const GfxWrappedBuffer *v45; 
  __int64 v46; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  GfxCmdBufInput *v48; 
  ComputeCmdBufState *v49; 
  __int64 cmds; 
  unsigned int indexCount; 
  unsigned __int16 v53; 
  unsigned int v55; 
  GfxDevice *device; 
  unsigned int *m_pCurrent; 
  _QWORD v68[3]; 
  __int64 v69[2]; 
  GfxCmdBufContext v71; 
  GfxCmdBufContext v72; 
  GfxCmdBufContext v73; 
  GfxCmdBufContext v74; 
  GfxCmdBufContext v75; 
  GfxCmdBufContext v76; 
  GfxCmdBufContext v77; 
  GfxCmdBufContext v78; 
  GfxCmdBufContext v79; 
  GfxCmdBufContext v80; 
  GfxCmdBufContext v81; 
  GfxCmdBufContext v82; 
  GfxCmdBufContext v83; 
  GfxCmdBufContext v84; 
  GfxCmdBufContext v85; 
  R_RT_Handle v86; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v88; 
  R_RT_Group v89; 
  materialCommands_t *v90; 
  int v91; 
  int v92; 
  R_RT_Group v93; 
  char v94; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RDI = gfxContext;
  v68[1] = gfxContext;
  Sys_ProfBeginNamedEvent(0xFF800000, "exec backend cmds");
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6519, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+3A0h+var_348+8], xmm0
  }
  Tess = R_GetTess(&v71);
  v90 = Tess;
  if ( Tess->indexCount )
  {
    LODWORD(v68[0]) = Tess->indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6522, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v68[0]) )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+3A0h+var_338+8], xmm0
  }
  RB_Draw3DOverlays(&v72, backEndData);
  if ( Tess->indexCount )
  {
    LODWORD(v68[0]) = Tess->indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6532, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v68[0]) )
      __debugbreak();
  }
  _R15 = _RDI->source;
  R_InitCmdBufSourceState(_RDI->source, &g_gfxCmdBufInput);
  state = _RDI->state;
  R_InitLocalCmdBufState(state, &_R15->input);
  R_ClearDescriptorCBVs(state->descState);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_320], xmm0
  }
  RB_InitSceneViewport(&v73);
  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+2A0h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rbp+2A0h+var_250.m_surfaceID], ymm0
  }
  height = R_RT_Handle::GetSurface(&v86)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v86);
  R_SetRenderTargetSize(_R15, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+2A0h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+2A0h+var_210], ymm0
  }
  R_RT_Group::AssignColor(&v89, &v88);
  _RCX = &v93;
  _RAX = &v89;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups ymm1, ymmword ptr [rax+0A0h]
  }
  m_location = v89.m_vrsRt.m_tracking.m_location;
  __asm { vmovups ymmword ptr [rcx+0A0h], ymm1 }
  v93.m_vrsRt.m_tracking.m_location = m_location;
  __asm { vmovups [rbp+2A0h+var_310], xmm0 }
  R_SetRenderTargetsInternal(&v74, &v93, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(6546)");
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, cs:?vidConfig@@3UvidConfig_t@@A.windowAspectRatio; vidConfig_t vidConfig
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm0, xmm2, xmm1
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vmovss  dword ptr [r15+2D9Ch], xmm0
  }
  if ( v32 | v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1176, ASSERT_TYPE_ASSERT, "(source->pixelAspect > 0.0f)", (const char *)&queryFormat, "source->pixelAspect > 0.0f") )
    __debugbreak();
  R_SetViewportAndScissorSeparate(state, &_R15->sceneViewport, &_R15->sceneViewport);
  __asm { vxorps  xmm1, xmm1, xmm1; gameTime }
  R_SetGameTime(_R15, *(float *)&_XMM1);
  p_input = &_R15->input;
  R_SetMovieImages(&_R15->input);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_300], xmm0
  }
  RB_SetDefaultUIState(&v75, backEndData, NULL);
  source = _RDI->source;
  v38 = 0;
  *(_QWORD *)source->input.consts[129].v = 1065353216i64;
  *(_QWORD *)&source->input.consts[129].xyz.z = 0i64;
  ++source->constVersions[129];
  source->input.consts[130].v[0] = 0.0;
  *(_QWORD *)&source->input.consts[130].xyz.y = 1065353216i64;
  *(_QWORD *)(&source->input.consts[130].xyz + 1) = 0i64;
  ++source->constVersions[130];
  source->input.consts[131].v[1] = 0.0;
  *(_QWORD *)&source->input.consts[131].xyz.z = 1065353216i64;
  ++source->constVersions[131];
  R_BackendGpuStatus_Update(state, FONT_CACHE_FLUSH_GLYPHS);
  FontCache_PreCacheFlush(1u);
  FontCache_FlushDeferredGlyphs(state);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_2F0], xmm0
  }
  RB_DynamicLightsets_DisplayDebug(&v76, backEndData);
  if ( backEndData->cmds )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "exec cmds 2d (backend)");
    R_GPU_BeginTimer(GPU_TIMER_2D_BACKEND);
    R_ProfBeginNamedEvent(state, "2D (Backend)");
    *(_QWORD *)_R15->input.consts[5].v = 0i64;
    _R15->input.consts[5].v[2] = 1.0;
    _R15->input.consts[5].v[3] = 1.0;
    ++_R15->constVersions[5];
    blackImage = rgp.blackImage;
    if ( _R15 == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    {
      __debugbreak();
      _R15 = _RDI->source;
    }
    p_input->codeImages[79] = blackImage;
    v41 = rgp.blackImage;
    if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v42 = &_R15->input;
    if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v42->codeImages[6] = v41;
    ConstantBuffer = R_Tonemap_GetConstantBuffer(NULL);
    v44 = _RDI->source;
    v45 = ConstantBuffer;
    v46 = (__int64)&_RDI->source->input;
    if ( _RDI->source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    *(_QWORD *)(v46 + 7424) = v45;
    globalSceneConstantBuffer = backEndData->globalSceneConstantBuffer;
    v48 = &v44->input;
    if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v49 = _RDI->state;
    v48->codeBuffers[0] = globalSceneConstantBuffer;
    R_BackendGpuStatus_Update(v49, EXECUTE_RENDER_COMMANDS_LOOP);
    __asm
    {
      vmovups xmm6, xmmword ptr [rdi]
      vmovups [rbp+2A0h+var_2E0], xmm6
    }
    cmds = (__int64)backEndData->cmds;
    indexCount = R_GetTess(&v77)->indexCount;
    if ( indexCount )
    {
      LODWORD(v68[0]) = indexCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5940, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v68[0]) )
        __debugbreak();
    }
    if ( (cmds & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5942, ASSERT_TYPE_ASSERT, "(IsAligned( cmds, GFXCMD_MAX_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( cmds, GFXCMD_MAX_ALIGNMENT )") )
      __debugbreak();
    v69[0] = cmds;
    v69[1] = 0i64;
    __asm { vmovups [rsp+3A0h+var_358+8], xmm6 }
    while ( 1 )
    {
      if ( *(_WORD *)cmds >= 0x2Cu )
      {
        LODWORD(v68[0]) = *(unsigned __int16 *)cmds;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5956, ASSERT_TYPE_ASSERT, "( ( header->id < ( sizeof( *array_counter( RB_RenderCommandTable ) ) + 0 ) ) )", "( header->id ) = %i", v68[0]) )
          __debugbreak();
      }
      v53 = *(_WORD *)cmds;
      if ( !*(_WORD *)cmds )
        break;
      if ( !RB_RenderCommandTable[v53] )
      {
        LODWORD(v68[0]) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5963, ASSERT_TYPE_ASSERT, "( ( RB_RenderCommandTable[header->id] ) )", "( header->id ) = %i", v68[0]) )
          __debugbreak();
      }
      RB_RenderCommandTable[*(unsigned __int16 *)cmds]((GfxRenderCommandExecState *)v69);
      if ( v69[0] == cmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5967, ASSERT_TYPE_ASSERT, "(execState.cmd != prevCmd)", (const char *)&queryFormat, "execState.cmd != prevCmd") )
        __debugbreak();
      cmds = v69[0];
    }
    __asm
    {
      vmovups xmm0, [rsp+3A0h+var_358+8]
      vmovups [rbp+2A0h+var_2D0], xmm0
    }
    RB_EndSurfaceIfNeeded(&v78);
    _RDI = (GfxCmdBufContext *)v68[1];
    state = *(GfxCmdBufState **)(v68[1] + 8i64);
    R_ProfEndNamedEvent(state);
    R_GPU_EndTimer();
    Sys_ProfEndNamedEvent();
    Tess = v90;
  }
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "exec backend debug cmds");
  if ( r_drawPrimHistogram->current.enabled )
  {
    v55 = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+3A0h+var_378+8], xmm0
    }
    if ( backEndData->endSwapFrame - 1 > 0 )
      v55 = backEndData->endSwapFrame - 1;
    RB_DrawPrimHistogramOverlay((GfxCmdBufContext *)&v68[1], v55);
  }
  if ( r_debugDrawCinematicFrames->current.enabled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups [rbp+2A0h+var_2C0], xmm0
    }
    RB_Cinematic_DebugDrawFrames(&v79);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_2B0], xmm0
  }
  RB_DrawProfile(&v80);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_2A0], xmm0
  }
  RB_DrawProfile2(&v81);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_290], xmm0
  }
  RB_DrawProfileScript(&v82);
  RB_GPU_UpdateFullFrameTime();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_280], xmm0
  }
  RB_GPU_DrawTimers(&v83);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_270], xmm0
  }
  RB_DrawCPUTimelineProfile(&v84);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rbp+2A0h+var_260], xmm0
  }
  RB_HDRSpotMeter_Draw(&v85);
  Sys_ProfEndNamedEvent();
  if ( Tess->vertexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6642, ASSERT_TYPE_ASSERT, "(!tess.vertexCount)", (const char *)&queryFormat, "!tess.vertexCount") )
  {
    __debugbreak();
    state = _RDI->state;
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
    v92 = 57;
    v90 = NULL;
    v91 = 0;
    m_pCurrent = device->m_Putter.m_pCurrent;
    if ( m_pCurrent >= device->m_Putter.m_pLimit_Api )
    {
      ((void (__fastcall *)(GfxDevice *, materialCommands_t **))device->m_pFunction[15].Release)(device, &v90);
    }
    else
    {
      *m_pCurrent = 1073854265;
      *(_QWORD *)(m_pCurrent + 1) = v90;
      device->m_Putter.m_pCurrent = m_pCurrent + 3;
    }
    state->isIndexBufferBound = 0;
  }
  R_ClearAllVertexBuffers(_RDI->state);
  R_ShutdownLocalCmdBufState(_RDI->state, &_RDI->source->input);
  if ( Tess->indexCount )
  {
    LODWORD(v68[0]) = Tess->indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6651, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v68[0]) )
      __debugbreak();
  }
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 6654, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "dev perf counters");
  if ( backEndData->endSwapFrame - 3 > 0 )
    v38 = backEndData->endSwapFrame - 3;
  RB_Stats_UpdateMaxs(v38, &backEnd.frameStatsMax);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
  _R11 = &v94;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
RB_ExecuteRenderCommandsLoop
==============
*/
void RB_ExecuteRenderCommandsLoop(GfxCmdBufContext *gfxContext, const void *cmds, const Material *mtlOverride)
{
  unsigned int indexCount; 
  unsigned __int16 v9; 
  __int64 v11; 
  unsigned int v12; 
  GfxCmdBufContext v13; 
  __int64 v14[2]; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _RBX = gfxContext;
  __asm { vmovups [rsp+78h+var_48], xmm0 }
  indexCount = R_GetTess(&v13)->indexCount;
  if ( indexCount )
  {
    v12 = indexCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5940, ASSERT_TYPE_ASSERT, "( ( !tess.indexCount ) )", "( tess.indexCount ) = %i", v12) )
      __debugbreak();
  }
  if ( ((unsigned __int8)cmds & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5942, ASSERT_TYPE_ASSERT, "(IsAligned( cmds, GFXCMD_MAX_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( cmds, GFXCMD_MAX_ALIGNMENT )") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v14[1] = (__int64)mtlOverride;
  __asm { vmovups [rsp+78h+var_28], xmm0 }
  for ( v14[0] = (__int64)cmds; ; cmds = (const void *)v14[0] )
  {
    if ( *(_WORD *)cmds >= 0x2Cu )
    {
      LODWORD(v11) = *(unsigned __int16 *)cmds;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5956, ASSERT_TYPE_ASSERT, "( ( header->id < ( sizeof( *array_counter( RB_RenderCommandTable ) ) + 0 ) ) )", "( header->id ) = %i", v11) )
        __debugbreak();
    }
    v9 = *(_WORD *)cmds;
    if ( !*(_WORD *)cmds )
      break;
    if ( !RB_RenderCommandTable[v9] )
    {
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5963, ASSERT_TYPE_ASSERT, "( ( RB_RenderCommandTable[header->id] ) )", "( header->id ) = %i", v11) )
        __debugbreak();
    }
    RB_RenderCommandTable[*(unsigned __int16 *)cmds]((GfxRenderCommandExecState *)v14);
    if ( (const void *)v14[0] == cmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5967, ASSERT_TYPE_ASSERT, "(execState.cmd != prevCmd)", (const char *)&queryFormat, "execState.cmd != prevCmd") )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm0, [rsp+78h+var_28]
    vmovups [rsp+78h+var_48], xmm0
  }
  RB_EndSurfaceIfNeeded(&v13);
}

/*
==============
RB_FullScreenColoredFilterInternal
==============
*/
void RB_FullScreenColoredFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, unsigned int color, const char *fileAndLine)
{
  float v10; 
  float v11; 
  GfxCmdBufContext v12; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+58h+var_30], xmm0
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rsp+58h+var_38], xmm0
  }
  RB_DrawFullScreenColoredQuadInternal(&v12, material, *(float *)&_XMM2, *(float *)&_XMM3, v10, v11, color, fileAndLine);
}

/*
==============
RB_FullScreenFilterInternal
==============
*/

void __fastcall RB_FullScreenFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, const char *fileAndLine, double _XMM3_8)
{
  float v9; 
  float v10; 
  GfxCmdBufContext v11; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rsp+58h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+58h+var_30], xmm0
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rsp+58h+var_38], xmm0
  }
  RB_DrawFullScreenColoredQuadInternal(&v11, material, *(float *)&_XMM2, *(float *)&_XMM3, v9, v10, 0xFFFFFFFF, fileAndLine);
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
void RB_GetScreenFilterSourceTextureCoordinates(float *outS0, float *outT0, float *outS1, float *outT1)
{
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm4, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm5, xmm1, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm2, xmm0, xmm4
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm3, xmm1, xmm5
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rcx], xmm2
    vaddss  xmm2, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm5
    vmovss  dword ptr [r8], xmm2
    vaddss  xmm2, xmm1, xmm3
    vmovss  dword ptr [r9], xmm2
    vmovss  dword ptr [rdx], xmm3
  }
}

/*
==============
RB_GetUIWhiteBalanceParams
==============
*/
void RB_GetUIWhiteBalanceParams(const GfxViewInfo *viewInfo, vec4_t *outMatrixR, vec4_t *outMatrixG, vec4_t *outMatrixB)
{
  tmat33_t<vec3_t> matrix; 

  _RSI = outMatrixB;
  _RDI = outMatrixG;
  _RBX = outMatrixR;
  if ( viewInfo )
  {
    R_WhiteBalance_SetMatrix(&viewInfo->whiteBalance, &viewInfo->tonemap.whitePoint, &matrix);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+matrix]
      vmovss  xmm1, dword ptr [rsp+68h+matrix+0Ch]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+68h+matrix+18h]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  xmm0, dword ptr [rsp+68h+matrix+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm1, dword ptr [rsp+68h+matrix+10h]
    }
    _RBX->v[3] = 0.0;
    __asm
    {
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rsp+68h+matrix+1Ch]
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm1, dword ptr [rsp+68h+matrix+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm0, dword ptr [rsp+68h+matrix+14h]
    }
    _RDI->v[3] = 0.0;
    __asm
    {
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm1, dword ptr [rsp+68h+matrix+20h]
      vmovss  dword ptr [rsi+8], xmm1
      vmovss  dword ptr [rsi+4], xmm0
    }
    _RSI->v[3] = 0.0;
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
  _RAX = RB_GetBackendCmdBufContext(&result);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+38h+result.source], xmm0
  }
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
  __asm
  {
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+0B0h, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+0C0h, xmm1; GfxCmdBufInput g_gfxCmdBufInput
  }
  g_gfxCmdBufInput.codeImages[26] = NULL;
  g_gfxCmdBufInput.codePersistentImages[25] = NULL;
  __asm { vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codePersistentImages+0D0h, xmm0; GfxCmdBufInput g_gfxCmdBufInput }
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
  __asm
  {
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+0B0h, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+0C0h, xmm1; GfxCmdBufInput g_gfxCmdBufInput
  }
  g_gfxCmdBufInput.codeImages[26] = NULL;
  g_gfxCmdBufInput.codePersistentImages[25] = NULL;
  __asm { vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codePersistentImages+0D0h, xmm0; GfxCmdBufInput g_gfxCmdBufInput }
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
  __asm { vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+40h, xmm0; GfxCmdBufInput g_gfxCmdBufInput }
  g_gfxCmdBufInput.codeImages[0] = NULL;
  g_gfxCmdBufInput.codeImages[79] = NULL;
  g_gfxCmdBufInput.codePersistentImages[15] = NULL;
  g_gfxCmdBufInput.codeImages[77] = NULL;
  g_gfxCmdBufInput.codeImages[27] = NULL;
  __asm
  {
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+0E0h, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+0F0h, xmm1; GfxCmdBufInput g_gfxCmdBufInput
  }
  g_gfxCmdBufInput.codeImages[33] = NULL;
  __asm { vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+110h, xmm0; GfxCmdBufInput g_gfxCmdBufInput }
  g_gfxCmdBufInput.codeImages[41] = NULL;
  __asm
  {
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+150h, xmm1; GfxCmdBufInput g_gfxCmdBufInput
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+160h, xmm0; GfxCmdBufInput g_gfxCmdBufInput
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+170h, xmm1; GfxCmdBufInput g_gfxCmdBufInput
    vmovdqu xmmword ptr cs:?g_gfxCmdBufInput@@3UGfxCmdBufInput@@A.codeImages+180h, xmm0; GfxCmdBufInput g_gfxCmdBufInput
  }
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

void __fastcall RB_PartialScreenFilterInternal(GfxCmdBufContext *gfxContext, const Material *material, double x, double y, float w, float h, float s0, float t0, float s1, float t1, const char *fileAndLine)
{
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  GfxCmdBufContext v37[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _RDI = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovups xmmword ptr [rax-38h], xmm0
    vmovaps xmm6, xmm3
  }
  RB_EndSurfaceIfNeeded(v37);
  R_Set2D(_RDI->source);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovss  xmm1, [rsp+98h+arg_40]
    vmovups [rsp+98h+var_38], xmm0
    vmovss  xmm0, [rsp+98h+arg_48]
    vmovss  [rsp+98h+var_50], xmm0
    vmovss  xmm0, [rsp+98h+arg_38]
    vmovss  [rsp+98h+var_58], xmm1
    vmovss  xmm1, [rsp+98h+arg_30]
    vmovss  [rsp+98h+var_60], xmm0
    vmovss  xmm0, [rsp+98h+arg_28]
    vmovss  [rsp+98h+var_68], xmm1
    vmovss  xmm1, [rsp+98h+arg_20]
    vmovss  [rsp+98h+var_70], xmm0
    vmovaps xmm3, xmm6
    vmovaps xmm2, xmm7
    vmovss  [rsp+98h+var_78], xmm1
  }
  RB_DrawStretchPic(v37, material, *(float *)&_XMM2, *(float *)&_XMM3, v31, v32, v33, v34, v35, v36, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+98h+var_38], xmm0
  }
  RB_EndTessSurfaceInternal(v37, fileAndLine);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
  }
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
  GfxCmdBufContext v8; 
  GfxCmdBufContext v9; 
  GfxCmdBufContext v10; 
  GfxCmdBufContext v11; 
  GfxCmdBufContext result; 
  char v13; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
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
  _RAX = RB_GetBackendCmdBufContext(&result);
  __asm
  {
    vmovups xmm6, xmmword ptr [rax]
    vmovups [rsp+0B8h+var_88], xmm6
  }
  RB_BeginFrame(&v8, data);
  __asm { vmovdqa [rsp+0B8h+var_78], xmm6 }
  RB_Draw(&v9, data);
  __asm { vmovdqa [rsp+0B8h+var_68], xmm6 }
  RB_CallExecuteRenderCommands(&v10, data);
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "end frame");
  __asm { vmovdqa [rsp+0B8h+var_58], xmm6 }
  RB_EndFrame(&v11, data);
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
  _R11 = &v13;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  GfxCmdBufContext v71[9]; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = gfxContext;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovups xmm0, xmmword ptr [rdx+2330h]
    vmovss  xmm13, cs:__real@3f800000
    vmovups [rsp+0F8h+var_98], xmm0
  }
  if ( padding )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r9]
      vmovss  xmm3, dword ptr [r9+4]
      vmovss  xmm0, dword ptr [rsp+0F8h+var_98]
      vsubss  xmm1, xmm0, xmm4
      vmovss  xmm0, dword ptr [rsp+0F8h+var_98+4]
      vxorps  xmm2, xmm2, xmm2
      vmaxss  xmm5, xmm1, xmm2
      vsubss  xmm1, xmm0, xmm3
      vaddss  xmm0, xmm4, dword ptr [rsp+0F8h+var_98+8]
      vmaxss  xmm2, xmm1, xmm2
      vaddss  xmm1, xmm3, dword ptr [rsp+0F8h+var_98+0Ch]
      vminss  xmm3, xmm1, xmm13
      vminss  xmm4, xmm0, xmm13
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+0F8h+var_98+0Ch]
      vmovss  xmm4, dword ptr [rsp+0F8h+var_98+8]
      vmovss  xmm2, dword ptr [rsp+0F8h+var_98+4]
      vmovss  xmm5, dword ptr [rsp+0F8h+var_98]
    }
  }
  __asm
  {
    vsubss  xmm0, xmm4, xmm5
    vsubss  xmm1, xmm3, xmm2
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, rax
    vmulss  xmm10, xmm0, xmm8
    vmovups xmm0, xmmword ptr [rbx]
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rax
    vmulss  xmm11, xmm7, xmm2
    vmulss  xmm9, xmm1, xmm7
    vmovups [rsp+0F8h+var_98], xmm0
    vmulss  xmm12, xmm8, xmm5
  }
  RB_EndSurfaceIfNeeded(v71);
  R_Set2D(_RBX->source);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+0F8h+var_98], xmm0
    vaddss  xmm0, xmm9, xmm11
    vdivss  xmm4, xmm13, xmm8
    vaddss  xmm1, xmm10, xmm12
    vmulss  xmm5, xmm1, xmm4
    vdivss  xmm6, xmm13, xmm7
    vmulss  xmm7, xmm0, xmm6
    vmovss  [rsp+0F8h+var_B0], xmm7
    vmovss  [rsp+0F8h+var_B8], xmm5
    vmulss  xmm0, xmm6, xmm11
    vmovss  [rsp+0F8h+var_C0], xmm0
    vmulss  xmm1, xmm4, xmm12
    vmovss  [rsp+0F8h+var_C8], xmm1
    vmovss  [rsp+0F8h+var_D0], xmm9
    vmovaps xmm3, xmm11
    vmovaps xmm2, xmm12
    vmovss  [rsp+0F8h+var_D8], xmm10
  }
  RB_DrawStretchPic(v71, material, *(float *)&_XMM2, *(float *)&_XMM3, v65, v66, v67, v68, v69, v70, 0xFFFFFFFF, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rsp+0F8h+var_98], xmm0
  }
  RB_EndTessSurfaceInternal(v71, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(839)");
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
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
  GfxCmdBufInput *p_input; 
  GfxImage *whiteImage; 
  GfxImage *v16; 
  GfxImage *blackImage; 
  GfxImage *v18; 
  GfxImage *v19; 
  __int64 viewInfoIndex; 
  GfxViewInfo *v21; 
  const GfxViewInfo *v23; 
  GfxImage *thermalRadiationLut; 
  GfxImage *v25; 
  GfxImage *blackImage3D; 
  GfxImage *v27; 
  GfxWrappedBuffer *globalSceneConstantBuffer; 
  GfxDisplayMappingParams result; 
  GfxCmdBufContext v31; 
  GfxCmdBufContext v32; 
  GfxColorimetry FramebufferColorimetry; 

  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _R14 = gfxContext;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm6
    vmovups [rsp+98h+var_58], xmm0
  }
  RB_SetUIColorimetryParams(&v31);
  FramebufferColorimetry = R_GetFramebufferColorimetry();
  _RAX = R_GetDisplayMappingParams(&result);
  __asm
  {
    vmovss  xmm0, [rsp+98h+arg_0]
    vmovsd  xmm1, qword ptr [rax]
  }
  result.maxLuminance = _RAX->maxLuminance;
  _RAX = _R14->source;
  __asm
  {
    vmovss  dword ptr [rax+0F00h], xmm0
    vmovss  dword ptr [rax+0F04h], xmm1
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rax+0F08h], xmm0
    vmovss  xmm0, [rsp+98h+result.maxLuminance]
    vmovss  dword ptr [rax+0F0Ch], xmm0
  }
  ++_RAX->constVersions[128];
  *((_BYTE *)_RAX + 11668) &= ~1u;
  *(_QWORD *)&_RAX->uiState.firstMaskAlphaScale = 1065353216i64;
  *(_QWORD *)&_RAX->uiState.secondMaskAlphaScale = 1065353216i64;
  _RAX->uiState.firstMaskTranslation = 0i64;
  _RAX->uiState.secondMaskTranslation = 0i64;
  _RAX->uiState.aaTiling.v[0] = 1.0;
  _RAX->uiState.aaTiling.v[1] = 1.0;
  *(_QWORD *)_RAX->input.consts[55].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[55].xyz.z = 0i64;
  ++_RAX->constVersions[55];
  *(_QWORD *)_RAX->input.consts[57].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[57].xyz.z = 0i64;
  ++_RAX->constVersions[57];
  _RAX->input.consts[58].v[0] = 1.0;
  *(_QWORD *)&_RAX->input.consts[58].xyz.y = 1065353216i64;
  _RAX->input.consts[58].v[3] = 0.0;
  ++_RAX->constVersions[58];
  *(_QWORD *)_RAX->input.consts[56].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[56].xyz.z = 0i64;
  ++_RAX->constVersions[56];
  *(_QWORD *)_RAX->input.consts[63].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[63].xyz.z = 0i64;
  ++_RAX->constVersions[63];
  *(_QWORD *)_RAX->input.consts[64].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[64].xyz.z = 0i64;
  ++_RAX->constVersions[64];
  *(_QWORD *)_RAX->input.consts[65].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[65].xyz.z = 0i64;
  ++_RAX->constVersions[65];
  *(_QWORD *)_RAX->input.consts[66].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[66].xyz.z = 0i64;
  ++_RAX->constVersions[66];
  *(_QWORD *)_RAX->input.consts[67].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[67].xyz.z = 0i64;
  ++_RAX->constVersions[67];
  *(_QWORD *)_RAX->input.consts[68].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[68].xyz.z = 0i64;
  ++_RAX->constVersions[68];
  *(_QWORD *)_RAX->input.consts[69].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[69].xyz.z = 0i64;
  ++_RAX->constVersions[69];
  *(_QWORD *)_RAX->input.consts[70].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[70].xyz.z = 0i64;
  ++_RAX->constVersions[70];
  *(_QWORD *)_RAX->input.consts[74].v = 1065353216i64;
  _RAX->input.consts[74].v[2] = 0.0;
  *(_QWORD *)(&_RAX->input.consts[74].xyz + 1) = 1065353216i64;
  ++_RAX->constVersions[74];
  *(_QWORD *)&_RAX->input.consts[75].xyz.y = 0i64;
  *(_QWORD *)(&_RAX->input.consts[75].xyz + 1) = 0i64;
  ++_RAX->constVersions[75];
  _RAX->input.consts[76].v[1] = 0.0;
  *(_QWORD *)&_RAX->input.consts[76].xyz.z = 1065353216i64;
  ++_RAX->constVersions[76];
  *(_QWORD *)_RAX->input.consts[71].v = 1065353216i64;
  *(_QWORD *)&_RAX->input.consts[71].xyz.z = 0i64;
  ++_RAX->constVersions[71];
  p_input = &_RAX->input;
  _RAX->input.consts[72].v[0] = 0.0;
  *(_QWORD *)&_RAX->input.consts[72].xyz.y = 1065353216i64;
  *(_QWORD *)(&_RAX->input.consts[72].xyz + 1) = 0i64;
  ++_RAX->constVersions[72];
  _RAX->input.consts[73].v[1] = 0.0;
  *(_QWORD *)&_RAX->input.consts[73].xyz.z = 1065353216i64;
  ++_RAX->constVersions[73];
  *(_QWORD *)_RAX->input.consts[86].v = 0i64;
  *(_QWORD *)&_RAX->input.consts[86].xyz.z = 0i64;
  ++_RAX->constVersions[86];
  whiteImage = rgp.whiteImage;
  if ( _RAX == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[19] = whiteImage;
  v16 = rgp.whiteImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[20] = v16;
  blackImage = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = blackImage;
  v18 = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[80] = v18;
  v19 = rgp.blackImage;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[23] = v19;
  viewInfoIndex = data->viewInfoIndex;
  v21 = &data->viewInfo[viewInfoIndex];
  if ( v21 )
  {
    __asm { vmovups xmm0, xmmword ptr [r14] }
    v23 = &data->viewInfo[viewInfoIndex];
    __asm { vmovups [rsp+98h+var_48], xmm0 }
    R_UniversalClut_SetParametersImage(&v32, v23, universalClut, universalClut);
    thermalRadiationLut = (GfxImage *)v21->thermalParams.thermalRadiationLut;
    v25 = rgp.blackImage;
    if ( thermalRadiationLut )
      v25 = thermalRadiationLut;
  }
  else
  {
    blackImage3D = rgp.blackImage3D;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[67] = blackImage3D;
    v27 = rgp.blackImage3D;
    if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    p_input->codeImages[68] = v27;
    v25 = rgp.blackImage;
  }
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[54] = v25;
  globalSceneConstantBuffer = data->globalSceneConstantBuffer;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  p_input->codeBuffers[0] = globalSceneConstantBuffer;
}

/*
==============
RB_SetDisplayMappingParams
==============
*/
void RB_SetDisplayMappingParams(GfxCmdBufContext *gfxContext)
{
  GfxDisplayMappingParams result; 
  GfxColorimetry FramebufferColorimetry; 

  FramebufferColorimetry = R_GetFramebufferColorimetry();
  _RAX = R_GetDisplayMappingParams(&result);
  __asm
  {
    vmovss  xmm0, [rsp+38h+arg_0]
    vmovsd  xmm1, qword ptr [rax]
  }
  result.maxLuminance = _RAX->maxLuminance;
  _RAX = gfxContext->source;
  __asm
  {
    vmovss  dword ptr [rax+0F00h], xmm0
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rax+0F08h], xmm0
    vmovss  xmm0, [rsp+38h+result.maxLuminance]
    vmovss  dword ptr [rax+0F0Ch], xmm0
    vmovss  dword ptr [rax+0F04h], xmm1
  }
  ++_RAX->constVersions[128];
}

/*
==============
RB_SetFontGlowStyleCodeConstants
==============
*/
void RB_SetFontGlowStyleCodeConstants(GfxCmdBufSourceState *source, const FontGlowStyle *glowStyle)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm2, dword ptr [rdx+20h]
    vmovss  xmm3, dword ptr [rdx+24h]
    vmovss  xmm4, dword ptr [rdx+8]
    vmovss  xmm5, dword ptr [rdx+0Ch]
    vmovss  dword ptr [rcx+0C20h], xmm0
    vmovss  dword ptr [rcx+0C24h], xmm1
    vmovss  dword ptr [rcx+0C28h], xmm2
    vmovss  dword ptr [rcx+0C2Ch], xmm3
  }
  ++source->constVersions[82];
  __asm
  {
    vmovss  dword ptr [rcx+0C30h], xmm4
    vmovss  dword ptr [rcx+0C34h], xmm5
  }
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
  __int64 v3; 
  GfxCmdBufContext v14; 

  source = gfxContext->source;
  if ( gfxContext->source->viewMode != VIEW_MODE_IDENTITY )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
    }
    RB_EndSurfaceIfNeeded(&v14);
    v3 = 3i64;
    _RAX = &source->viewParms;
    source->viewMode = VIEW_MODE_IDENTITY;
    _RDX = &rg.identityViewParms;
    do
    {
      _RAX = (GfxViewParms *)((char *)_RAX + 128);
      __asm { vmovups xmm0, xmmword ptr [rdx] }
      _RDX = (GfxViewParms *)((char *)_RDX + 128);
      __asm
      {
        vmovups xmmword ptr [rax-80h], xmm0
        vmovups xmm1, xmmword ptr [rdx-70h]
        vmovups xmmword ptr [rax-70h], xmm1
        vmovups xmm0, xmmword ptr [rdx-60h]
        vmovups xmmword ptr [rax-60h], xmm0
        vmovups xmm1, xmmword ptr [rdx-50h]
        vmovups xmmword ptr [rax-50h], xmm1
        vmovups xmm0, xmmword ptr [rdx-40h]
        vmovups xmmword ptr [rax-40h], xmm0
        vmovups xmm1, xmmword ptr [rdx-30h]
        vmovups xmmword ptr [rax-30h], xmm1
        vmovups xmm0, xmmword ptr [rdx-20h]
        vmovups xmmword ptr [rax-20h], xmm0
        vmovups xmm1, xmmword ptr [rdx-10h]
        vmovups xmmword ptr [rax-10h], xmm1
      }
      --v3;
    }
    while ( v3 );
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

void __fastcall RB_SetUIAA(GfxCmdBufContext *gfxContext, const bool needAA, float s0, double s1, float t0, float t1)
{
  char v12; 
  char v14; 
  GfxCmdBufContext v30; 

  _RBX = gfxContext->source;
  __asm
  {
    vmovss  xmm0, [rsp+58h+arg_28]
    vmovaps [rsp+58h+var_18], xmm6
    vsubss  xmm6, xmm0, [rsp+58h+arg_20]
  }
  v12 = *((_BYTE *)_RBX + 11668);
  __asm
  {
    vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+58h+var_28], xmm7
  }
  v14 = v12 & 1;
  __asm
  {
    vsubss  xmm7, xmm3, xmm2
    vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( v14 != needAA )
    goto LABEL_4;
  __asm { vucomiss xmm7, dword ptr [rbx+2D80h] }
  if ( v14 != needAA )
    goto LABEL_4;
  __asm { vucomiss xmm6, dword ptr [rbx+2D84h] }
  if ( v14 != needAA )
  {
LABEL_4:
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups [rsp+58h+var_38], xmm0
    }
    RB_EndSurfaceIfNeeded(&v30);
    __asm
    {
      vmovss  xmm3, cs:__real@3f800000
      vcomiss xmm7, xmm3
    }
    *((_BYTE *)_RBX + 11668) = needAA | *((_BYTE *)_RBX + 11668) & 0xFE;
    __asm
    {
      vmovss  dword ptr [rbx+2D80h], xmm7
      vmovss  dword ptr [rbx+2D84h], xmm6
      vdivss  xmm5, xmm3, xmm7
      vcomiss xmm6, xmm3
      vdivss  xmm4, xmm3, xmm6
    }
    _ECX = 0;
    _EAX = needAA;
    __asm
    {
      vmovd   xmm1, ecx
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm1, xmm1, xmm1
      vblendvps xmm0, xmm3, xmm1, xmm2
      vmovss  dword ptr [rbx+0AF0h], xmm0
      vmovss  dword ptr [rbx+0AF8h], xmm5
      vmovss  dword ptr [rbx+0AFCh], xmm4
    }
    _RBX->input.consts[63].v[1] = 0.0;
    ++_RBX->constVersions[63];
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
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
  const dvar_t *v9; 
  GfxCmdBufContext v27; 
  int v31; 

  __asm { vmovaps [rsp+88h+var_18], xmm6 }
  _RDI = gfxContext;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  FramebufferColorimetry = R_GetFramebufferColorimetry();
  v31 = FramebufferColorimetry;
  if ( r_uiClutEnabledInShaders->current.enabled )
    v31 = FramebufferColorimetry | 0x80;
  *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
  __asm { vmovaps xmm6, xmm0 }
  _RAX = R_GetDisplayMappingParams((GfxDisplayMappingParams *)&v27);
  v9 = DCONST_DVARBOOL_r_useBrightnessForUI;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovsd  xmm1, qword ptr [rax]
  }
  *(float *)&v27.state = _RAX->maxLuminance;
  __asm
  {
    vshufps xmm7, xmm1, xmm1, 55h ; 'U'
    vmovsd  qword ptr [rsp+88h+var_48], xmm1
  }
  if ( !DCONST_DVARBOOL_r_useBrightnessForUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_useBrightnessForUI") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  _EAX = 0;
  __asm { vmovd   xmm1, eax }
  _EAX = v9->current.color[0];
  __asm { vmovd   xmm0, eax }
  _RAX = _RDI->source;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, [rsp+88h+arg_0]
    vmovss  xmm1, cs:__real@3f800000
    vmovss  dword ptr [rax+0A60h], xmm0
    vblendvps xmm3, xmm7, xmm8, xmm2
    vsubss  xmm0, xmm1, xmm3
    vmovss  dword ptr [rax+0A68h], xmm0
    vmovups xmm0, xmmword ptr [rdi]
    vmovss  dword ptr [rax+0A64h], xmm6
    vmovss  dword ptr [rax+0A6Ch], xmm3
  }
  ++_RAX->constVersions[54];
  __asm { vmovups [rsp+88h+var_48], xmm0 }
  RB_UiClut_SetParameters(&v27);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
}

/*
==============
RB_SetUIColorimetryParamsForRTT
==============
*/
void RB_SetUIColorimetryParamsForRTT(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v6; 
  int v7; 

  _RBX = gfxContext;
  v7 = 4;
  *(double *)&_XMM0 = R_GetDisplayHdrUiMaxLuminance();
  _RAX = _RBX->source;
  __asm
  {
    vmovss  xmm1, [rsp+38h+arg_0]
    vmovss  dword ptr [rax+0A64h], xmm0
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  dword ptr [rax+0A60h], xmm1
  }
  *(_QWORD *)&_RAX->input.consts[54].xyz.z = 1065353216i64;
  ++_RAX->constVersions[54];
  __asm { vmovups xmmword ptr [rsp+38h+var_18.source], xmm0 }
  RB_UiClut_SetParameters(&v6);
}

/*
==============
RB_SetWaitFlipOncePerFrame
==============
*/
void RB_SetWaitFlipOncePerFrame(GfxCmdBufState *gfxState)
{
  R_RT_ColorHandle v8; 
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
    v8.m_surfaceID = 0;
    v8.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr [rsp+78h+var_48.baseclass_0.m_tracking.m_name], xmm0 }
    if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
    {
      _RAX = R_RT_GetGlobalColor(&v8, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
      __asm { vmovups ymm0, ymmword ptr [rax] }
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rsp+78h+var_48.baseclass_0.m_surfaceID] }
    }
    __asm { vmovups ymmword ptr [rsp+78h+var_48.baseclass_0.m_surfaceID], ymm0 }
    RB_InsertWaitFlipBeginQuery();
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+78h+result.baseclass_0.m_surfaceID]
      vmovups ymmword ptr [rsp+78h+result.baseclass_0.m_surfaceID], ymm0
    }
    R_AddRenderTargetTransition(gfxState, &result, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+78h+var_48.baseclass_0.m_surfaceID]
        vmovups ymmword ptr [rsp+78h+result.baseclass_0.m_surfaceID], ymm0
      }
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

void __fastcall RB_SetupUIWhiteBalanceParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, double _XMM2_8, double _XMM3_8)
{
  tmat33_t<vec3_t> matrix; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  _RBX = gfxContext->source;
  if ( viewInfo )
  {
    R_WhiteBalance_SetMatrix(&viewInfo->whiteBalance, &viewInfo->tonemap.whitePoint, &matrix);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+88h+matrix]
      vmovss  xmm0, dword ptr [rsp+88h+matrix+0Ch]
      vmovss  xmm2, dword ptr [rsp+88h+matrix+18h]
      vmovss  xmm3, dword ptr [rsp+88h+matrix+4]
      vmovss  xmm4, dword ptr [rsp+88h+matrix+10h]
      vmovss  xmm5, dword ptr [rsp+88h+matrix+1Ch]
      vmovss  xmm6, dword ptr [rsp+88h+matrix+8]
      vmovss  xmm7, dword ptr [rsp+88h+matrix+14h]
      vmovss  xmm8, dword ptr [rsp+88h+matrix+20h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vmovaps xmm4, xmm1
      vmovaps xmm8, xmm1
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm2, xmm2, xmm2
      vxorps  xmm3, xmm3, xmm3
      vxorps  xmm5, xmm5, xmm5
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+0F10h], xmm1
    vmovss  dword ptr [rbx+0F14h], xmm0
    vmovss  dword ptr [rbx+0F18h], xmm2
  }
  _RBX->input.consts[129].v[3] = 0.0;
  ++_RBX->constVersions[129];
  __asm
  {
    vmovss  dword ptr [rbx+0F20h], xmm3
    vmovss  dword ptr [rbx+0F24h], xmm4
    vmovss  dword ptr [rbx+0F28h], xmm5
  }
  _RBX->input.consts[130].v[3] = 0.0;
  ++_RBX->constVersions[130];
  __asm
  {
    vmovss  dword ptr [rbx+0F30h], xmm6
    vmovss  dword ptr [rbx+0F34h], xmm7
    vmovss  dword ptr [rbx+0F38h], xmm8
  }
  _RBX->input.consts[131].v[3] = 0.0;
  ++_RBX->constVersions[131];
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
  }
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
  __int16 v10; 
  __int16 v19; 
  const dvar_t *v24; 
  BOOL enabled; 
  unsigned int unsignedInt; 
  int v27; 
  unsigned int v28; 
  __int64 v40; 
  HRESULT v49; 
  const char *v50; 
  __m256i v55; 
  IDXGISwapChain1 *displaySwapChain; 
  IDXGISwapChain1 *gameDvrSdrSwapChain; 
  R_RT_ColorHandle v58; 
  GfxCmdBufContext v59; 
  R_RT_ColorHandle result; 
  R_RT_ColorHandle v62; 
  R_RT_ColorHandle v63; 
  char v64[16]; 
  __int64 v65; 
  int v68; 
  __int64 v69; 
  int v72; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBX = gfxContext;
  if ( !R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 18, ASSERT_TYPE_ASSERT, "(R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  RB_InsertFrameEndQuery();
  WaitForSingleObject(g_dx.flipHandledEvent, 0xFFFFFFFF);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups [rbp+0F0h+var_160], xmm0
  }
  R_UnbindRenderTarget(&v59);
  R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
  _RAX = R_RT_GetGlobalColor(&v62, R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+1F0h+var_188.baseclass_0.m_tracking.m_allocCounter], ymm0
  }
  v10 = (unsigned __int16)_RAX & 0x7FFF;
  if ( v10 )
    v55.m256i_i16[0] = v10 | 0x8000;
  else
    v55.m256i_i16[0] = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1F0h+var_188.baseclass_0.m_tracking.m_name]
    vmovsd  xmm1, [rbp+0F0h+var_168]
    vmovups xmmword ptr [rsp+1F0h+var_1B8+10h], xmm0
    vmovsd  [rsp+1F0h+var_198], xmm1
    vmovups ymm0, [rsp+1F0h+var_1B8+8]
    vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID, ymm0; R_RT_Handle near * g_R_RT_globals
  }
  if ( (result.m_surfaceID & 0x7FFF) != 0 )
    v55.m256i_i16[0] = result.m_surfaceID & 0x7FFF | 0x8000;
  else
    v55.m256i_i16[0] = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0F0h+result.baseclass_0.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rbp+0F0h+result.baseclass_0.m_tracking.m_location]
    vmovups xmmword ptr [rsp+1F0h+var_1B8+10h], xmm0
    vmovsd  [rsp+1F0h+var_198], xmm1
    vmovups ymm0, [rsp+1F0h+var_1B8+8]
    vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+20h, ymm0; R_RT_Handle near * g_R_RT_globals
  }
  if ( R_RT_Handle::IsValid(&g_R_RT_globals[2]) )
  {
    R_RT_GetGlobalColor(&v58, R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
    _RAX = R_RT_GetGlobalColor(&v63, R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovd   eax, xmm0
      vmovups [rbp+0F0h+var_130], ymm0
    }
    v19 = (unsigned __int16)_RAX & 0x7FFF;
    if ( v19 )
      v55.m256i_i16[0] = v19 | 0x8000;
    else
      v55.m256i_i16[0] = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0F0h+var_130+8]
      vmovsd  xmm1, qword ptr [rbp+0F0h+var_130+18h]
      vmovups xmmword ptr [rsp+1F0h+var_1B8+10h], xmm0
      vmovsd  [rsp+1F0h+var_198], xmm1
      vmovups ymm0, [rsp+1F0h+var_1B8+8]
      vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+40h, ymm0; R_RT_Handle near * g_R_RT_globals
    }
    if ( (v58.m_surfaceID & 0x7FFF) != 0 )
      v55.m256i_i16[0] = v58.m_surfaceID & 0x7FFF | 0x8000;
    else
      v55.m256i_i16[0] = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+1F0h+var_188.baseclass_0.m_tracking.m_name]
      vmovsd  xmm1, [rbp+0F0h+var_168]
      vmovups xmmword ptr [rsp+1F0h+var_1B8+10h], xmm0
      vmovsd  [rsp+1F0h+var_198], xmm1
      vmovups ymm0, [rsp+1F0h+var_1B8+8]
      vmovups ymmword ptr cs:?g_R_RT_globals@@3PAVR_RT_Handle@@A.m_surfaceID+60h, ymm0; R_RT_Handle near * g_R_RT_globals
    }
  }
  Profile_Begin(132);
  Profile2_UpdateEntry(67);
  if ( ((unsigned __int8)&dword_14FDE80DC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80DC) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE80DC);
  Sys_ProfBeginNamedEvent(0xFF808000, "GarbageCollect");
  Sys_ProfEndNamedEvent();
  v24 = DCONST_DVARINT_r_presentImmediateThreshold;
  enabled = r_vsync->current.enabled;
  if ( !DCONST_DVARINT_r_presentImmediateThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_presentImmediateThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  unsignedInt = v24->current.unsignedInt;
  v27 = 0;
  if ( g_PLMRestarting )
    v27 = 0x10000000;
  v28 = v27 | 8;
  memset_0(v64, 0, 0x70ui64);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm7, cs:__real@44870000
    vmovss  xmm8, cs:__real@44f00000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vdivss  xmm0, xmm7, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmaxss  xmm0, xmm0, xmm6
    vcvtsi2ss xmm1, xmm1, rcx
    vmovss  [rbp+0F0h+var_B0], xmm0
    vdivss  xmm0, xmm8, xmm1
    vmaxss  xmm1, xmm0, xmm6
    vmovss  [rbp+0F0h+var_AC], xmm1
  }
  v65 = *(_QWORD *)&vidConfig.displayWidth;
  v68 = 0;
  if ( R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT2020_PQ && g_dx.gameDvrSdrSwapChain )
  {
    v40 = 2i64;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm0, xmm7, xmm0
      vmaxss  xmm1, xmm0, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vdivss  xmm0, xmm8, xmm0
      vmovss  [rbp+0F0h+var_78], xmm1
      vmaxss  xmm1, xmm0, xmm6
      vmovss  [rbp+0F0h+var_74], xmm1
    }
    v69 = *(_QWORD *)&vidConfig.displayWidth;
    v72 = 0;
    gameDvrSdrSwapChain = g_dx.gameDvrSdrSwapChain;
  }
  else
  {
    v40 = 1i64;
  }
  displaySwapChain = g_dx.displaySwapChain;
  v49 = DXGIXPresentArray_0(enabled, unsignedInt, v28, v40, &displaySwapChain, v64);
  Profile2_UpdateEntry(67);
  if ( ((unsigned __int64)&dword_14FDE80DC & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE80DC) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE80DC);
  Profile_EndInternal(NULL);
  if ( (int)(v49 + 0x80000000) >= 0 && v49 != -2005270518 )
  {
    v50 = R_ErrorDescription(v49);
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14444CCB8, 128i64, v50);
  }
  RB_UpdateDynamicSceneResolution();
  g_dx.flipQueuedFrame = backEnd.frameCount;
  SetEvent(g_dx.flipQueuedEvent);
  g_dx.insertedWaitFlip = 0;
  RB_InsertFrameBeginQuery();
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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

void __fastcall RB_UpdateDynamicSceneResolution(double _XMM0_8)
{
  const dvar_t *v11; 
  const dvar_t *v28; 
  const dvar_t *v55; 
  int integer; 
  int v57; 
  int v58; 
  const dvar_t *v59; 
  int v60; 
  int v61; 
  const dvar_t *v62; 
  int v63; 
  const dvar_t *v64; 
  char v66; 
  char v67; 
  int v73; 
  const dvar_t *v80; 
  const dvar_t *v95; 
  const dvar_t *v104; 
  char v117; 
  __int64 v126; 
  __int64 v127; 

  v11 = DVARBOOL_r_sceneResDynamic;
  if ( !DVARBOOL_r_sceneResDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+138h+var_38], xmm6
      vmovaps [rsp+138h+var_48], xmm7
      vmovaps [rsp+138h+var_58], xmm8
      vmovaps [rsp+138h+var_68], xmm9
      vmovaps [rsp+138h+var_78], xmm10
      vmovaps [rsp+138h+var_88], xmm11
      vmovaps [rsp+138h+var_98], xmm12
      vmovaps [rsp+138h+var_A8], xmm13
      vmovaps [rsp+138h+var_B8], xmm14
      vmovaps [rsp+138h+var_C8], xmm15
    }
    _XMM0_8 = R_GetLatestFrameDuration();
    _RBX = DCONST_DVARVEC4_r_sceneResDynamicThreshold;
    __asm { vmovaps xmm11, xmm0 }
    if ( !DCONST_DVARVEC4_r_sceneResDynamicThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm13, dword ptr [rbx+28h]
      vmovss  xmm14, dword ptr [rbx+2Ch]
      vmovss  xmm12, dword ptr [rbx+34h]
    }
    _RBX = DCONST_DVARVEC4_r_sceneResDynamicTune;
    if ( !DCONST_DVARVEC4_r_sceneResDynamicTune && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicTune") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  xmm2, dword ptr [rbx+28h]
      vmovss  xmm15, dword ptr [rbx+2Ch]
      vmovss  xmm1, cs:__real@3a83126f
      vmovss  xmm10, dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir; r_globals_t rg
      vmovss  xmm9, dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir+4; r_globals_t rg
      vmovss  xmm8, dword ptr cs:?rg@@3Ur_globals_t@@A.viewDir+8; r_globals_t rg
      vmovss  xmm7, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg; r_globals_t rg
      vmovss  xmm6, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+4; r_globals_t rg
      vmovss  xmm5, dword ptr cs:?rg@@3Ur_globals_t@@A.viewOrg+8; r_globals_t rg
    }
    v28 = DVARINT_r_sceneRes;
    __asm
    {
      vmovss  [rsp+138h+var_F8], xmm0
      vcmpless xmm0, xmm2, xmm1
      vblendvps xmm0, xmm2, xmm1, xmm0
      vmovss  xmm1, dword ptr cs:s_lastViewDir
      vmovss  [rsp+138h+var_E8], xmm0
      vmovss  xmm0, dword ptr cs:s_lastViewDir+4
      vsubss  xmm2, xmm0, xmm9
      vsubss  xmm3, xmm1, xmm10
      vmovss  xmm1, dword ptr cs:s_lastViewDir+8
      vmulss  xmm2, xmm2, xmm2
      vsubss  xmm4, xmm1, xmm8
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm1
      vmovss  xmm1, dword ptr cs:s_lastViewOrg+4
      vsqrtss xmm0, xmm2, xmm2
      vmovss  [rsp+138h+var_F4], xmm0
      vmovss  xmm0, dword ptr cs:s_lastViewOrg
      vsubss  xmm3, xmm0, xmm7
      vmovss  xmm0, dword ptr cs:s_lastViewOrg+8
      vsubss  xmm2, xmm1, xmm6
      vsubss  xmm4, xmm0, xmm5
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm0, xmm2, xmm2
      vmovss  [rsp+138h+var_F0], xmm0
      vmovss  dword ptr cs:s_lastViewDir, xmm10
      vmovss  dword ptr cs:s_lastViewDir+4, xmm9
      vmovss  dword ptr cs:s_lastViewDir+8, xmm8
      vmovss  dword ptr cs:s_lastViewOrg, xmm7
      vmovss  dword ptr cs:s_lastViewOrg+4, xmm6
      vmovss  dword ptr cs:s_lastViewOrg+8, xmm5
    }
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    v55 = DVARINT_r_sceneResMin;
    integer = v28->current.integer;
    v57 = integer;
    if ( !DVARINT_r_sceneResMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v55);
    v58 = v55->current.integer;
    v59 = DVARINT_r_sceneResMax;
    if ( !DVARINT_r_sceneResMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v59);
    v60 = v59->current.integer;
    v61 = v60;
    if ( v58 <= v60 )
      v61 = v58;
    v62 = DCONST_DVARBOOL_r_fuzzSceneRes;
    if ( !DCONST_DVARBOOL_r_fuzzSceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_fuzzSceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v62);
    if ( v62->current.enabled )
    {
      v63 = rand();
      Dvar_SetInt_Internal(DVARINT_r_sceneRes, v61 + v63 % (v60 - v61 + 1));
    }
    else
    {
      v64 = DVARBOOL_r_autoSceneRes;
      if ( !DVARBOOL_r_autoSceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_autoSceneRes") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v64);
      if ( v64->current.enabled )
      {
        _RBP = DVARFLT_r_sceneResDynamicTarget;
        if ( !DVARFLT_r_sceneResDynamicTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBP);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+28h]
          vcomiss xmm11, xmm1
        }
        if ( v66 )
        {
          __asm
          {
            vmulss  xmm0, xmm12, xmm1
            vcomiss xmm11, xmm0
          }
          if ( v66 | v67 )
          {
            __asm
            {
              vmovss  xmm1, cs:__real@5f800000
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
            }
            if ( (__int64)(s_frameID - s_lastSlowFrameID) < 0 )
              __asm { vaddss  xmm0, xmm0, xmm1 }
            __asm { vcomiss xmm0, xmm15 }
            if ( s_frameID >= s_lastSlowFrameID )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, rax
              }
              if ( (__int64)(s_frameID - s_lastRaiseFrameID) < 0 )
                __asm { vaddss  xmm0, xmm0, xmm1 }
              __asm { vcomiss xmm0, [rsp+138h+var_F8] }
              if ( s_frameID >= s_lastRaiseFrameID )
              {
                __asm
                {
                  vmovss  xmm0, [rsp+138h+var_F4]
                  vcomiss xmm0, xmm13
                }
                if ( s_frameID >= s_lastRaiseFrameID )
                  goto LABEL_49;
                __asm
                {
                  vmovss  xmm0, [rsp+138h+var_F0]
                  vcomiss xmm0, xmm14
                }
                if ( s_frameID >= s_lastRaiseFrameID )
                {
LABEL_49:
                  s_lastRaiseFrameID = s_frameID;
                  v57 = 0;
                  if ( integer - 1 > 0 )
                    v57 = integer - 1;
                }
              }
            }
          }
        }
        else
        {
          __asm
          {
            vsubss  xmm2, xmm11, xmm1
            vmulss  xmm1, xmm1, [rsp+138h+var_E8]
          }
          v57 = 15;
          __asm
          {
            vdivss  xmm2, xmm2, xmm1
            vxorps  xmm3, xmm3, xmm3
            vroundss xmm3, xmm3, xmm2, 2
            vcvttss2si eax, xmm3
          }
          if ( _EAX < 1 )
            _EAX = 1;
          v73 = integer + _EAX;
          if ( v73 < 15 )
            v57 = v73;
          s_lastSlowFrameID = s_frameID;
        }
      }
    }
    __asm
    {
      vmovaps xmm15, [rsp+138h+var_C8]
      vmovaps xmm14, [rsp+138h+var_B8]
      vmovaps xmm13, [rsp+138h+var_A8]
      vmovaps xmm12, [rsp+138h+var_98]
    }
    if ( v61 > v60 )
    {
      LODWORD(v127) = v60;
      LODWORD(v126) = v61;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v126, v127) )
        __debugbreak();
    }
    if ( v60 < v57 )
      v57 = v60;
    if ( v61 > v57 )
      v57 = v61;
    if ( v57 != integer )
      Dvar_SetInt_Internal(DVARINT_r_sceneRes, v57);
    v80 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v80);
    __asm { vmovaps xmm2, xmm11; previousFrameDuration }
    RB_GPU_AddDynamicResolution(v80->current.unsignedInt, v57 - integer, *(float *)&_XMM2);
    _RBP = DVARFLT_r_sceneResLodScaleMax;
    _EDI = v60 - v61;
    __asm { vmovaps xmm11, [rsp+138h+var_88] }
    if ( !DVARFLT_r_sceneResLodScaleMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodScaleMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm8, dword ptr [rbp+28h]
      vxorps  xmm6, xmm6, xmm6
    }
    if ( _EDI )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vcvtsi2ss xmm1, xmm1, ebx
        vsubss  xmm1, xmm1, xmm0; Y
        vmovss  xmm0, cs:__real@40000000; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm { vmovaps xmm7, xmm0 }
    }
    else
    {
      __asm { vxorps  xmm7, xmm7, xmm7 }
    }
    v95 = DVARFLT_r_sceneResLodTemporal;
    __asm { vmovss  xmm10, cs:s_lastLODScaleRunning }
    if ( !DVARFLT_r_sceneResLodTemporal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodTemporal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v95);
    __asm
    {
      vmulss  xmm1, xmm10, dword ptr [rbx+28h]
      vmovss  xmm9, cs:__real@3f800000
      vsubss  xmm0, xmm9, dword ptr [rbx+28h]
      vmulss  xmm2, xmm0, xmm7
      vaddss  xmm0, xmm2, xmm1; val
      vmovaps xmm2, xmm9; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovss  cs:s_lastLODScaleRunning, xmm0
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v104 = DCONST_DVARINT_r_sceneResLodScaleDelay;
    __asm
    {
      vmovaps xmm10, [rsp+138h+var_78]
      vmovss  cs:s_lastLODScaleRunning, xmm0
      vmovd   xmm7, edi
      vcvtdq2ps xmm7, xmm7
      vmulss  xmm0, xmm7, xmm0
      vaddss  xmm2, xmm0, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vcvttss2si ebx, xmm4
    }
    if ( !DCONST_DVARINT_r_sceneResLodScaleDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResLodScaleDelay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v104);
    if ( _EBX != s_lastLODScaleQuantized && s_frameID - s_lastLODScaleChangeID >= v104->current.unsignedInt )
    {
      s_lastLODScaleQuantized = _EBX;
      s_lastLODScaleChangeID = s_frameID;
      if ( _EDI )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm8
          vdivss  xmm7, xmm1, xmm7
        }
      }
      else
      {
        __asm { vxorps  xmm7, xmm7, xmm7 }
      }
      __asm { vmovaps xmm1, xmm7; value }
      Dvar_SetFloat_Internal(DVARFLT_r_sceneResLodScale, *(float *)&_XMM1);
      __asm { vucomiss xmm8, xmm6 }
      if ( v117 )
      {
        __asm { vucomiss xmm7, xmm6 }
        if ( !v117 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 5018, ASSERT_TYPE_ASSERT, "(normalizedQuantizedScale == 0.0f)", (const char *)&queryFormat, "normalizedQuantizedScale == 0.0f") )
          __debugbreak();
        __asm { vmovaps xmm1, xmm9 }
      }
      else
      {
        __asm { vdivss  xmm6, xmm7, xmm8 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_sceneResMinContributionScaleMax, "r_sceneResMinContributionScaleMax");
        __asm
        {
          vmulss  xmm2, xmm0, xmm6
          vsubss  xmm1, xmm9, xmm6
          vaddss  xmm1, xmm2, xmm1; value
        }
      }
      Dvar_SetFloat_Internal(DVARFLT_r_sceneResMinContributionScale, *(float *)&_XMM1);
    }
    ++s_frameID;
    __asm
    {
      vmovaps xmm9, [rsp+138h+var_68]
      vmovaps xmm8, [rsp+138h+var_58]
      vmovaps xmm7, [rsp+138h+var_48]
      vmovaps xmm6, [rsp+138h+var_38]
    }
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
  float fmt; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  GfxCmdBufContext v37; 

  _R14 = gfxContext;
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 860, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+78h+var_18], xmm0
  }
  RB_EndSurfaceIfNeeded(&v37);
  source = _R14->source;
  R_ForceSet2D(_R14->source, viewport);
  R_SetViewportAndScissorSeparate(_R14->state, viewport, viewport);
  R_UpdateViewport(source, viewport);
  R_ClearIfRequired(_R14->state, 1, 0);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovss  xmm1, [rsp+78h+arg_38]
    vmovss  xmm2, [rsp+78h+arg_20]
    vmovss  xmm3, [rsp+78h+arg_28]
    vmovups [rsp+78h+var_18], xmm0
    vmovss  xmm0, [rsp+78h+arg_30]
    vsubss  xmm4, xmm0, xmm2
    vmovss  xmm0, [rsp+78h+arg_58]
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  xmm0, [rsp+78h+arg_48]
    vsubss  xmm5, xmm1, xmm3
    vmovss  xmm1, [rsp+78h+arg_50]
    vmovss  [rsp+78h+var_38], xmm1
    vmovss  xmm1, [rsp+78h+arg_40]
    vmovss  [rsp+78h+var_40], xmm0
    vmovss  [rsp+78h+var_48], xmm1
    vmovss  dword ptr [rsp+78h+var_50], xmm5
    vmovss  dword ptr [rsp+78h+fmt], xmm4
  }
  RB_DrawStretchPic_LargeTriangle(&v37, material, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v32, v33, v34, v35, v36, color, GFX_PRIM_STATS_CODE);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vmovups [rsp+78h+var_18], xmm0
  }
  RB_EndTessSurfaceInternal(&v37, fileAndLine);
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
  bool v18; 
  __int16 v19; 
  R_RT_Handle v26; 
  R_RT_ColorHandle resulta; 
  R_RT_Handle v28; 

  _RDI = result;
  if ( R_RT_HaveGlobal(rtId) )
  {
    _RAX = R_RT_GetGlobalColor(&resulta, rtId);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rdi], ymm0
    }
    if ( R_RT_Handle::GetSurface(_RDI)->m_image.m_base.width == rtWidth && R_RT_Handle::GetSurface(_RDI)->m_image.m_base.height == rtHeight )
      return _RDI;
    R_SyncRenderThread();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovd   eax, xmm0
      vmovups ymmword ptr [rsp+118h+var_78.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v26);
      if ( (R_RT_Handle::GetSurface(&v26)->m_rtFlagsInternal & 3u) < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_manager.h", 877, ASSERT_TYPE_ASSERT, "(R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame)", (const char *)&queryFormat, "R_RT_GetLifetimeFromFlags( rt.GetFlagsInternal() ) >= R_RT_Lifetime_MultiFrame") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+118h+var_78.m_surfaceID]
        vmovups ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID], ymm0
      }
      R_RT_DestroyInternal(&resulta);
    }
    else if ( v26.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
  }
  _RAX = R_RT_CreateInternal(&v28, rtWidth, rtHeight, rtWidth, rtHeight, 1u, 1u, 0, g_R_RT_renderTargetFmts[1], R_RT_Flag_RTView, R_RT_FlagInternal_MaskLifetime, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Saved Scene", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp(2044)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   ebx, xmm0
    vmovups ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+118h+var_78.m_surfaceID], ymm0
  }
  if ( (_WORD)_EBX )
  {
    R_RT_Handle::GetSurface(&v26);
    if ( (R_RT_Handle::GetSurface(&v26)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LOWORD(_EBX) = v26.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+118h+var_78.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      LOWORD(_EBX) = v26.m_surfaceID;
      __asm { vmovups ymm0, ymmword ptr [rsp+118h+var_78.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID] }
      if ( v18 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rdi], ymm0 }
  v19 = _EBX & 0x7FFF;
  if ( v19 )
    resulta.m_surfaceID = v19 | 0x8000;
  else
    resulta.m_surfaceID = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+118h+var_78.m_tracking.m_allocCounter]
    vmovsd  xmm1, [rsp+118h+var_78.m_tracking.m_location]
  }
  _RCX = g_R_RT_globals;
  _RAX = 32i64 * (unsigned __int8)rtId;
  __asm
  {
    vmovups xmmword ptr [rsp+118h+result.baseclass_0.m_tracking.m_allocCounter], xmm0
    vmovsd  [rsp+118h+result.baseclass_0.m_tracking.m_location], xmm1
    vmovups ymm0, ymmword ptr [rsp+118h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rax+rcx], ymm0
  }
  return _RDI;
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

void __fastcall R_SetVertex2d(GfxVertex *vert, double x, double y, double s, float t, unsigned int color)
{
  __asm
  {
    vmovss  xmm0, [rsp+t]
    vmovss  dword ptr [rcx], xmm1
    vmovss  dword ptr [rcx+4], xmm2
  }
  vert->xyzw.v[2] = 0.0;
  vert->xyzw.v[3] = 1.0;
  vert->normal.packed = 1073643391;
  vert->color.packed = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm3
    vmovss  dword ptr [rcx+18h], xmm0
  }
}

/*
==============
R_SetVertex3d
==============
*/

void __fastcall R_SetVertex3d(GfxVertex *vert, double x, double y, double z, float s, float t, unsigned int color)
{
  __asm
  {
    vmovss  xmm0, [rsp+s]
    vmovss  dword ptr [rcx], xmm1
    vmovss  xmm1, [rsp+t]
    vmovss  dword ptr [rcx+4], xmm2
    vmovss  dword ptr [rcx+8], xmm3
  }
  vert->xyzw.v[3] = 1.0;
  vert->normal.packed = 1073643391;
  vert->color.packed = color;
  __asm
  {
    vmovss  dword ptr [rcx+18h], xmm1
    vmovss  dword ptr [rcx+14h], xmm0
  }
}

/*
==============
R_SetVertex4d
==============
*/

void __fastcall R_SetVertex4d(GfxVertex *vert, double x, double y, double z, float w, float s, float t, unsigned int color)
{
  __asm
  {
    vmovss  xmm0, [rsp+w]
    vmovss  dword ptr [rcx+0Ch], xmm0
    vmovss  xmm0, [rsp+s]
    vmovss  dword ptr [rcx], xmm1
    vmovss  xmm1, [rsp+t]
    vmovss  dword ptr [rcx+4], xmm2
    vmovss  dword ptr [rcx+8], xmm3
  }
  vert->normal.packed = 1073643391;
  vert->color.packed = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  dword ptr [rcx+18h], xmm1
  }
}

/*
==============
R_SetVertex4dWithNormal
==============
*/

void __fastcall R_SetVertex4dWithNormal(GfxVertex *vert, double x, double y, double z, float w, float nx, float ny, float nz, float s, float t, unsigned int color)
{
  unsigned int v31; 
  __int128 v32; 

  __asm
  {
    vmovss  xmm0, [rsp+38h+w]
    vmovss  dword ptr [rcx], xmm1
    vmovss  xmm1, [rsp+38h+nx]
    vmovss  dword ptr [rcx+0Ch], xmm0
    vmovss  dword ptr [rcx+8], xmm3
    vmovss  dword ptr [rcx+4], xmm2
  }
  HIDWORD(v32) = 0;
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+10h]
    vmovss  xmm5, xmm5, xmm1
    vinsertps xmm5, xmm5, [rsp+38h+ny], 10h
    vinsertps xmm5, xmm5, [rsp+38h+nz], 20h
    vmaxps  xmm0, xmm5, xmmword ptr cs:?g_negativeOneXYZW@@3Ufloat4@@B.v; float4 const g_negativeOneXYZW
    vminps  xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vaddps  xmm1, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm2, xmm1, xmmword ptr cs:?g_unpackMul1010102@@3Ufloat4@@B.v; float4 const g_unpackMul1010102
    vcvttps2dq xmm3, xmm2
    vpand   xmm4, xmm3, xmmword ptr cs:?g_packMask1010102@@3Ufloat4@@B.v; float4 const g_packMask1010102
    vpshufd xmm0, xmm4, 0EEh ; 'î'
    vpor    xmm1, xmm0, xmm4
    vpshufd xmm0, xmm1, 55h ; 'U'
    vpor    xmm1, xmm0, xmm1
    vpor    xmm2, xmm1, xmmword ptr cs:?g_packOr1010102@@3Ufloat4@@B.v; float4 const g_packOr1010102
    vmovss  xmm1, [rsp+38h+t]
    vblendps xmm0, xmm5, xmm2, 1
    vmovss  [rsp+38h+var_38], xmm0
    vmovss  xmm0, [rsp+38h+s]
  }
  vert->normal.packed = v31;
  vert->color.packed = color;
  __asm
  {
    vmovss  dword ptr [rcx+14h], xmm0
    vmovss  dword ptr [rcx+18h], xmm1
  }
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
  int v12; 
  int time; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v22; 
  int v23; 
  int maxRandomCharsToDisplay; 
  int v25; 
  int millisecondsPerLetter; 
  int v31; 
  int v32; 

  v12 = maxLength;
  if ( (renderFlags & 0x40) != 0 )
  {
    if ( !decodeStyle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3179, ASSERT_TYPE_ASSERT, "(decodeStyle != 0)", (const char *)&queryFormat, "decodeStyle != NULL") )
      __debugbreak();
    if ( decodeStyle->useGameTime )
      time = source->sceneDef.time;
    else
      time = Sys_Milliseconds();
    v17 = 0;
    v18 = 1;
    if ( time > 0 )
    {
      v19 = time - decodeStyle->lastTextSet;
      v20 = 0;
      __asm { vmovaps [rsp+68h+var_38], xmm6 }
      if ( v19 > 0 )
        v20 = v19;
      __asm { vxorps  xmm6, xmm6, xmm6 }
      v22 = SEH_PrintStrlen(text);
      if ( v22 > v12 )
        v22 = v12;
      v23 = v22 * decodeStyle->millisecondsPerLetter;
      if ( v20 < v23 && decodeStyle->updatesPerLetter > 0 )
      {
        if ( !decodeStyle->millisecondsPerLetter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.cpp", 3216, ASSERT_TYPE_ASSERT, "(decodeStyle->millisecondsPerLetter)", (const char *)&queryFormat, "decodeStyle->millisecondsPerLetter") )
          __debugbreak();
        maxRandomCharsToDisplay = decodeStyle->maxRandomCharsToDisplay;
        v25 = v23 - v20;
        millisecondsPerLetter = decodeStyle->millisecondsPerLetter;
        if ( maxRandomCharsToDisplay > 0 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
          }
          v17 = (((1103515245 * (v20 / 200) + 12345) / 0x10000) & 0x7FFFi64) % maxRandomCharsToDisplay + 1;
          __asm
          {
            vcvtsi2ss xmm1, xmm1, edx
            vdivss  xmm6, xmm1, xmm0
          }
        }
        v31 = v20 / millisecondsPerLetter;
        v32 = millisecondsPerLetter / decodeStyle->updatesPerLetter;
        if ( v32 )
          v25 /= v32;
        v18 = 1103515245 * (v31 + v22 + v25 + decodeStyle->lastTextSet) + 12345;
        v12 = v17 + v31;
      }
      *resultRandomCharCount = v17;
      *resultRandSeed = v18;
      *resultMaxLength = v12;
      _RAX = resultFirstRandCharFadePercent;
      __asm
      {
        vmovss  dword ptr [rax], xmm6
        vmovaps xmm6, [rsp+68h+var_38]
      }
      return 1;
    }
    else
    {
      *resultRandomCharCount = 0;
      *resultRandSeed = 1;
      *resultMaxLength = v12;
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

